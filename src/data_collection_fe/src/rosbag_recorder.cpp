#include <chrono>
#include <iostream>
#include <memory>
#include <string>
#include <thread>
#include <utility>
#include <ctime>
#include <iomanip>

#include "lifecycle_msgs/msg/transition.hpp"

#include "rclcpp/rclcpp.hpp"
#include "rclcpp/publisher.hpp"

#include "rclcpp_lifecycle/lifecycle_node.hpp"
#include "rclcpp_lifecycle/lifecycle_publisher.hpp"

#include "rcutils/logging_macros.h"

#include "std_msgs/msg/string.hpp"
#include "std_msgs/msg/bool.hpp"
#include "std_msgs/msg/float64.hpp"
#include "custom_interfaces/msg/tracks.hpp"

// rosbag includes
#include <rosbag2_cpp/typesupport_helpers.hpp>
#include <rosbag2_cpp/writer.hpp>
#include <rosbag2_cpp/writers/sequential_writer.hpp>
#include <rosbag2_storage/serialized_bag_message.hpp>
#include <rclcpp/serialization.hpp>

using namespace std::chrono_literals;

/// Lifecycle node for rosbag recording.
/**
 * Lifecycle states (startState -> nextState (transition used), ... ):
 *  - unconfigured -> inactive (configure) or finalized (shutdown)
 *  - inactive -> unconfigured (cleanup), finalized (shutdown), or active (activate)
 *  - active -> inactive (deactivate) or finalized (shutdown)
 *  - finalized -> none
 *
 * CI commands:
 *  - ros2 lifecycle get /nodeName -> returns current state of /nodeName
 *  - ros2 lifecycle list /nodeName -> returns available transitions of /nodeName
 *  - ros2 lifecycle set /nodeName transitionName -> calls transitionName on /nodeName
 */
class RosbagRecorder : public rclcpp_lifecycle::LifecycleNode
{
public:
    /// RosbagRecorder constructor
    explicit RosbagRecorder(const std::string & node_name, bool intra_process_comms = false)
    : rclcpp_lifecycle::LifecycleNode(node_name,
        rclcpp::NodeOptions().use_intra_process_comms(intra_process_comms))
    {

    }

    /// Transition callback for state configuring.
    rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn
    on_configure(const rclcpp_lifecycle::State &)
    {
        // get current time used for rosbag name
        auto t = std::time(nullptr);
        auto tm = *std::localtime(&t);
        std::ostringstream time_stream;
        time_stream << std::put_time(&tm, "%d-%m-%y_%H-%M-%S");

		// configure rosbag writer
		// use below for Humble
		// const rosbag2_storage::StorageOptions storage_options({"bags/bag_" + time_stream.str(), "sqlite3"});
		// use below for Foxy
		const rosbag2_cpp::StorageOptions storage_options({"bags/bag_" + time_stream.str(), "sqlite3"});
		const rosbag2_cpp::ConverterOptions converter_options(
			{rmw_get_serialization_format(),
			 rmw_get_serialization_format()}
		);
		writer_ = std::make_unique<rosbag2_cpp::writers::SequentialWriter>();
		writer_->open(storage_options, converter_options);

        RCLCPP_INFO(get_logger(), "on_configure() is called.");

        // Return a success and hence invoke the transition to the next step: "inactive".
        return rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn::SUCCESS;
    }

    /// Transition callback for state activating.
    rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn
    on_activate(const rclcpp_lifecycle::State &)
    {
		// setup writer topics
		// fourth argument is QoS parameters, if empty, uses default
		writer_->create_topic(
			{"/dt/ego_speed",
			 "std_msgs/msg/Float64",
			 rmw_get_serialization_format(),
			 ""
			}
		);
		writer_->create_topic(
			{"/dt/ego_steering",
			 "std_msgs/msg/Float64",
			 rmw_get_serialization_format(),
			 ""
			}
		);
		writer_->create_topic(
            {"/dt/tracks",
             "custom_interfaces/msg/Tracks",
             rmw_get_serialization_format(),
             ""
            }
		);

		// create subscribers
		ego_speed_subscription_ = this->create_subscription<std_msgs::msg::Float64>(
			"/dt/ego_speed", 10, std::bind(&RosbagRecorder::ego_speed_callback, this, std::placeholders::_1));
		ego_steering_subscription_ = this->create_subscription<std_msgs::msg::Float64>(
			"/dt/ego_steering", 10, std::bind(&RosbagRecorder::ego_steering_callback, this, std::placeholders::_1));
		tracks_subscription_ = this->create_subscription<custom_interfaces::msg::Tracks>(
		    "/dt/tracks", 10, std::bind(&RosbagRecorder::tracks_callback, this, std::placeholders::_1));

        RCUTILS_LOG_INFO_NAMED(get_name(), "on_activate() is called.");

        // Return a success and hence invoke the transition to the next step: "active".
        return rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn::SUCCESS;
    }

    /// Transition callback for state deactivating.
    rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn
    on_deactivate(const rclcpp_lifecycle::State &)
    {
        RCUTILS_LOG_INFO_NAMED(get_name(), "on_deactivate() is called.");

        // We return a success and hence invoke the transition to the next step: "inactive".
        return rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn::SUCCESS;
    }

    /// Transition callback for state cleaningup.
    rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn
    on_cleanup(const rclcpp_lifecycle::State &)
    {
        // Release the shared pointers.
        // These entities are no longer available and our node is "clean".
		writer_.reset();
		ego_speed_subscription_.reset();
		ego_steering_subscription_.reset();
		tracks_subscription_.reset();

        RCUTILS_LOG_INFO_NAMED(get_name(), "on cleanup is called.");

        // We return a success and hence invoke the transition to the next step: "unconfigured".
        return rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn::SUCCESS;
    }

    /// Transition callback for state shutting down.
    rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn
    on_shutdown(const rclcpp_lifecycle::State & state)
    {
        // Release the shared pointers.
        // These entities are no longer available and our node is "clean".
		writer_.reset();
		ego_speed_subscription_.reset();
		ego_steering_subscription_.reset();
		tracks_subscription_.reset();

        RCUTILS_LOG_INFO_NAMED(
            get_name(),
            "on shutdown is called from state %s.",
            state.label().c_str());

        // We return a success and hence invoke the transition to the next step: "finalized".
        return rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn::SUCCESS;
    }

private:
	// instance of rosbag writer and subscription
	std::unique_ptr<rosbag2_cpp::writers::SequentialWriter> writer_;
	// note that the Subcription cannot take a SerializedMessage pointer as it is currently not supported in lifecycle nodes.
	rclcpp::Subscription<std_msgs::msg::Float64>::SharedPtr ego_speed_subscription_;
	rclcpp::Subscription<std_msgs::msg::Float64>::SharedPtr ego_steering_subscription_;
	rclcpp::Subscription<custom_interfaces::msg::Tracks>::SharedPtr tracks_subscription_;

	void write_to_bag(rclcpp::SerializedMessage serialized_msg, const char* topic_name) const
	{
    	// add serialized message to bag
    	auto bag_message = std::make_shared<rosbag2_storage::SerializedBagMessage>();

    	bag_message->serialized_data = std::shared_ptr<rcutils_uint8_array_t>(
    		new rcutils_uint8_array_t,
    		[this](rcutils_uint8_array_t *serialized_msg) {
    			auto fini_return = rcutils_uint8_array_fini(serialized_msg);
    			delete serialized_msg;
    			if (fini_return != RCUTILS_RET_OK) {
    				RCLCPP_ERROR(get_logger(),
    					"Failed to destroy serialized message %s", rcutils_get_error_string().str);
    			}
    		}
    	);
    	*bag_message->serialized_data = serialized_msg.release_rcl_serialized_message();

        // set topic name
    	bag_message->topic_name = topic_name;
    	if (rcutils_system_time_now(&bag_message->time_stamp) != RCUTILS_RET_OK) {
    		RCLCPP_ERROR(get_logger(), "Error getting current time: %s",
    			rcutils_get_error_string().str);
    	}

    	writer_->write(bag_message);
	}

	void ego_speed_callback(const std_msgs::msg::Float64::SharedPtr msg) const
    {
		// serialize message
		rclcpp::Serialization<std_msgs::msg::Float64> serializer;
		rclcpp::SerializedMessage serialized_msg;
		serializer.serialize_message(&(*msg), &serialized_msg);

		this->write_to_bag(serialized_msg, "/dt/ego_speed");
    }

   	void ego_steering_callback(const std_msgs::msg::Float64::SharedPtr msg) const
    {
		// serialize message
		rclcpp::Serialization<std_msgs::msg::Float64> serializer;
		rclcpp::SerializedMessage serialized_msg;
		serializer.serialize_message(&(*msg), &serialized_msg);

		this->write_to_bag(serialized_msg, "/dt/ego_steering");
    }

    void tracks_callback(const custom_interfaces::msg::Tracks::SharedPtr msg) const
    {
        // serialize message
        rclcpp::Serialization<custom_interfaces::msg::Tracks> serializer;
        rclcpp::SerializedMessage serialized_msg;
        serializer.serialize_message(&(*msg), &serialized_msg);

        this->write_to_bag(serialized_msg, "/dt/tracks");
    }

};

/**
 * A lifecycle node has the same node API
 * as a regular node. This means we can spawn a
 * node, give it a name and add it to the executor.
 */
int main(int argc, char * argv[])
{
    // force flush of the stdout buffer.
    // this ensures a correct sync of all prints
    // even when executed simultaneously within the launch file.
    setvbuf(stdout, NULL, _IONBF, BUFSIZ);

    rclcpp::init(argc, argv);

    rclcpp::executors::SingleThreadedExecutor exe;

    std::shared_ptr<RosbagRecorder> lc_node =
        std::make_shared<RosbagRecorder>("rosbag_recorder");

    exe.add_node(lc_node->get_node_base_interface());

    exe.spin();

    rclcpp::shutdown();

    return 0;
}
