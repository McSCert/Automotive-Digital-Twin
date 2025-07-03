import rclpy
from rclpy.node import Node
from std_msgs.msg import Float64, Float32, Bool
from custom_interfaces.msg import Bboxes, Tracks
from ackermann_msgs.msg import AckermannDriveStamped
import socket
import pickle

"""Class to convert UDP packets into ROS2 messages for inter-entity communication."""
class UdpToRos(Node):

    def __init__(self):
        super().__init__('udp_to_ros')
        self.declare_parameters(
            namespace='',
            parameters=[
                ('ip', rclpy.Parameter.Type.STRING),
                ('port', rclpy.Parameter.Type.INTEGER),
                ('device_type', rclpy.Parameter.Type.STRING)
            ]
        )

        # use timer callback for all UDP packets
        timer_period = 1e-6  # seconds

        # load from config
        device_type = self.get_parameter('device_type').get_parameter_value().string_value
        self.get_logger().info("Device type: " + device_type)

        # depending on host device, different publishers are created
        if (device_type == 'ui'):
            # from DT device to user interface device
            self.bbox_publisher = self.create_publisher(Bboxes, '/ui/bboxes', 10)
            self.ui_speed_publisher = self.create_publisher(Float64, '/ui/ego_speed', 10)
            self.ui_steering_publisher = self.create_publisher(Float64, '/ui/ego_steering', 10)
            self.recording_status_publisher = self.create_publisher(Bool, '/ui/recording_status', 10)
            # timer callback
            self.timer = self.create_timer(timer_period, self.ui_timer_callback)
        elif (device_type == 'dt'):
            # from user interface device to DT device
            self.enable_acc_publisher = self.create_publisher(Bool, '/acc/enable_acc', 10)
            self.e_stop_publisher = self.create_publisher(Bool, '/acc/emergency_stop', 10)
            self.set_speed_publisher = self.create_publisher(Float32, '/acc/set_speed', 10)
            self.recording_start_publisher = self.create_publisher(Bool, '/dt/recording_start', 10)
            # from vehicle to DT device
            self.tracks_publisher = self.create_publisher(Tracks, '/dt/tracks', 10)
            self.dt_speed_publisher = self.create_publisher(Float64, '/dt/ego_speed', 10)
            self.dt_steering_publisher = self.create_publisher(Float64, '/dt/ego_steering', 10)
            # timer callback
            self.timer = self.create_timer(timer_period, self.dt_timer_callback)
        elif (device_type == 'vehicle'):
            # from dt device to vehicle
            self.drive_cmd_publisher = self.create_publisher(AckermannDriveStamped, '/ackermann_cmd_mux/input/navigation', 10)
            # timer callback
            self.timer = self.create_timer(timer_period, self.vehicle_timer_callback)
        else:
            self.get_logger().error("Invalid device type " + device_type +
                ". Only 'ui' and 'dt' device_type values applicable.")

        # init UDP socket
        # does not re-init socket on parameter changes
        self.init_udp_socket()

    def __del__(self):
        self.sock.close();

    def get_udp_packet(self):
        # blocking call to get UDP data; does not care who sender is
        receivedData = self.sock.recv(8275)
        msg_struct = pickle.loads(receivedData)

        # extract message type and publish to appropriate topic
        type = msg_struct[0]
        msg = msg_struct[1]

        return type, msg

    def ui_timer_callback(self):
        # publishers for UI
        type, msg = self.get_udp_packet()

        if type == "bbox":
            self.bbox_publisher.publish(msg)
        elif type == "dt_speed":
            self.ui_speed_publisher.publish(msg)
        elif type == "dt_steering":
            self.ui_steering_publisher.publish(msg)
        elif type == "recording_status":
            self.recording_status_publisher.publish(msg)
        else:
            self.get_logger().warning("Unknown message type of " + type)

    def dt_timer_callback(self):
        # publishers for DT
        type, msg = self.get_udp_packet()

        if type == "enable_acc":
            self.enable_acc_publisher.publish(msg)
        elif type == "e_stop":
            self.e_stop_publisher.publish(msg)
        elif type == "set_speed":
            self.set_speed_publisher.publish(msg)
        elif type == "recording_start":
            self.recording_start_publisher.publish(msg)
        elif type == "tracks":
            self.tracks_publisher.publish(msg)
        elif type == "veh_speed":
            self.dt_speed_publisher.publish(msg)
        elif type == "veh_steering":
            self.dt_steering_publisher.publish(msg)
        else:
            self.get_logger().warning("Unknown message type of " + type)

    def vehicle_timer_callback(self):
        # publishers for vehicle
        type, msg = self.get_udp_packet()

        if type == "drive_cmd":
            self.drive_cmd_publisher.publish(msg)
        else:
            self.get_logger().warning("Unknown message type of " + type)

    def init_udp_socket(self):
        # get config values
        ip = self.get_parameter('ip').get_parameter_value().string_value
        port = self.get_parameter('port').get_parameter_value().integer_value

        # AF_INET = internet, SOCK_DGRAM = UDP
        self.sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
        self.sock.bind((ip, port))

        self.get_logger().info("Initialized socket at " +
            ip + ":{:.0f}.".format(port)
        )


def main(args=None):
    rclpy.init(args=args)

    udp_to_ros = UdpToRos()

    rclpy.spin(udp_to_ros)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    udp_to_ros.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
