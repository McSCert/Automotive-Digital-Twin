from launch_ros import descriptions
import rclpy
from rclpy.node import Node
from std_msgs.msg import Float64, Float32, Bool
from custom_interfaces.msg import Bbox, Bboxes, Tracks
from ackermann_msgs.msg import AckermannDriveStamped
import socket
import pickle

"""Class to convert ROS2 messages into UDP packets for inter-entity communication."""
class RosToUdp(Node):

    def __init__(self):
        super().__init__('ros_to_udp')
        self.declare_parameters(
            namespace='',
            parameters=[
                ('ip', rclpy.Parameter.Type.STRING),
                ('port', rclpy.Parameter.Type.INTEGER),
                ('device_type', rclpy.Parameter.Type.STRING),
                ('destination_device', rclpy.Parameter.Type.STRING)
            ]
        )

        # load parameters from config
        device_type = self.get_parameter('device_type').get_parameter_value().string_value
        destination_device = self.get_parameter('destination_device').get_parameter_value().string_value
        self.get_logger().info("Device type: " + device_type)

        # depending on the host and destination device, different subscriptions are created
        if (device_type == 'dt'):
            if (destination_device == 'ui'):
                # from DT device to user interface device
                self.bbox_subscription = self.create_subscription(
                    Bboxes,
                    '/dt/bboxes',
                    self.bbox_listener_callback,
                    10)
                self.speed_subscription = self.create_subscription(
                    Float64,
                    '/dt/ego_speed',
                    self.dt_speed_listener_callback,
                    10
                )
                self.steering_subscription = self.create_subscription(
                    Float64,
                    '/dt/ego_steering',
                    self.dt_steering_listener_callback,
                    10
                )
                self.recording_status_subscription = self.create_subscription(
                    Bool,
                    'dt/recording_status',
                    self.recording_status_listener_callback,
                    10
                )
            elif (destination_device == 'vehicle'):
                # from dt device to vehicle
                self.drive_cmd_subscription = self.create_subscription(
                    AckermannDriveStamped,
                    '/dt/input/navigation',
                    self.drive_cmd_listener_callback,
                    10
                )
            else:
                self.get_logger().error("Invalid destination device " + device_type +
                    ". Only 'ui', 'dt', 'vehicle', and '' device_type values applicable.")
        elif (device_type == 'ui'):
            # from user interface device to DT device
            self.enable_acc_subscription = self.create_subscription(
                Bool,
                '/ui/enable_acc',
                self.enable_acc_listener_callback,
                10
            )
            self.e_stop_subscription = self.create_subscription(
                Bool,
                '/ui/emergency_stop',
                self.e_stop_listener_callback,
                10
            )
            self.set_speed_subscription = self.create_subscription(
                Float32,
                '/ui/set_speed',
                self.set_speed_listener_callback,
                10
            )
            self.recording_start_subscription = self.create_subscription(
                Bool,
                '/ui/recording_start',
                self.recording_start_listener_callback,
                10
            )
        elif (device_type == 'vehicle'):
            # from vehicle to DT device
            self.tracks_subscription = self.create_subscription(
                Tracks,
                '/Hokuyo/Tracks',
                self.tracks_listener_callback,
                10
            )
            self.veh_speed_subscription = self.create_subscription(
                Float64,
                '/commands/motor/speed',
                self.veh_speed_listener_callback,
                10
            )
            self.veh_steering_subscription = self.create_subscription(
                Float64,
                '/commands/servo/position',
                self.veh_steering_listener_callback,
                10
            )
        else:
            self.get_logger().error("Invalid device type " + device_type +
                ". Only 'ui', 'dt', and 'vehicle' device_type values applicable.")

        self.init_udp_socket()
        self.tempCounter = 0.0

    def __del__(self):
        self.sock.close()

    def bbox_listener_callback(self, msg):
        # Appends message type to actual message.
        msg_struct = ["bbox", msg]
        self.send_msg_udp(msg_struct)

    def dt_speed_listener_callback(self, msg):
        msg_struct = ["dt_speed", msg]
        self.send_msg_udp(msg_struct)

    def dt_steering_listener_callback(self, msg):
        msg_struct = ["dt_steering", msg]
        self.send_msg_udp(msg_struct)

    def recording_status_listener_callback(self, msg):
        msg_struct = ["recording_status", msg]
        self.send_msg_udp(msg_struct)

    def drive_cmd_listener_callback(self, msg):
        msg_struct = ["drive_cmd", msg]
        self.send_msg_udp(msg_struct)

    def enable_acc_listener_callback(self, msg):
        msg_struct = ["enable_acc", msg]
        self.send_msg_udp(msg_struct)

    def e_stop_listener_callback(self, msg):
        msg_struct = ["e_stop", msg]
        self.send_msg_udp(msg_struct)

    def set_speed_listener_callback(self, msg):
        msg_struct = ["set_speed", msg]
        self.send_msg_udp(msg_struct)

    def recording_start_listener_callback(self, msg):
        msg_struct = ["recording_start", msg]
        self.send_msg_udp(msg_struct)

    def tracks_listener_callback(self, msg):
        msg_struct = ["tracks", msg]
        self.send_msg_udp(msg_struct)

    def veh_speed_listener_callback(self, msg):
        msg_struct = ["veh_speed", msg]
        self.send_msg_udp(msg_struct)

    def veh_steering_listener_callback(self, msg):
        msg_struct = ["veh_steering", msg]
        self.send_msg_udp(msg_struct)

    def send_msg_udp(self, msg):
        # Common callback for sending any msg through UDP.

        # send message
        self.sock.sendto(
            pickle.dumps(msg),
            (
                self.get_parameter('ip').get_parameter_value().string_value,
                self.get_parameter('port').get_parameter_value().integer_value
            )
        )
        self.get_logger().info("Sent packet to " +
            self.get_parameter('ip').get_parameter_value().string_value +
            ":{:.0f}.".format(
                self.get_parameter('port').get_parameter_value().integer_value,
            )
        )

    def init_udp_socket(self):
        # AF_INET = internet, SOCK_DGRAM = UDP
        self.sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)

def main(args=None):
    rclpy.init(args=args)

    ros_to_udp = RosToUdp()

    rclpy.spin(ros_to_udp)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    ros_to_udp.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
