import rclpy
from rclpy.node import Node
from std_msgs.msg import Float64
from custom_interfaces.msg import Bbox, Bboxes
from user_interface_fe.cuboid_visualizer import CuboidVisualizer

from pdb import set_trace as bp

"""Class controlling the visualization of the ego within the user interface."""
class UserInterface(Node):
    def __init__(self):
        super().__init__('user_interface')
        self.declare_parameters(
            namespace='',
            parameters=[
                ('x_bounds', rclpy.Parameter.Type.DOUBLE_ARRAY),
                ('y_bounds', rclpy.Parameter.Type.DOUBLE_ARRAY),
                ('z_bounds', rclpy.Parameter.Type.DOUBLE_ARRAY)
            ]
        )

        # subscriptions on bboxes and ego properties
        self.bboxes_subscription = self.create_subscription(
            Bboxes,
            '/ui/bboxes',
            self.bboxes_listener_callback,
            1)
        self.speed_subscription =  self.create_subscription(
            Float64,
            '/ui/ego_speed',
            self.ego_speed_listener_callback,
            1
        )
        self.steering_subscription =  self.create_subscription(
            Float64,
            '/ui/ego_steering',
            self.ego_steering_listener_callback,
            1
        )

        # init cuboid visualizer
        self.cuboid_visualizer = CuboidVisualizer()
        self.cuboid_visualizer.initPlot(
            self.get_parameter('x_bounds').get_parameter_value().double_array_value,
            self.get_parameter('y_bounds').get_parameter_value().double_array_value,
            self.get_parameter('z_bounds').get_parameter_value().double_array_value
        )

        # init data values
        self.vehicleBboxes = []
        self.obstacleBboxes = []
        self.speed = 0
        self.steering = 0
        self.start_time = self.get_clock().now().seconds_nanoseconds()

    def bboxes_listener_callback(self, msg):
        # updates visualizer every time a new bbox message is received
        # extracts bboxes into vehicle bboxes and obstacle bboxes
        self.vehicleBboxes, self.obstacleBboxes = self.extractFromBboxesMsg(msg)
        # compute time difference using seconds and nanosecs for sub-second precision
        track_time = ( (msg.header.stamp.sec - self.start_time[0]) +
            (msg.header.stamp.nanosec - self.start_time[1]%1e9) / 1e9)
        current_time = self.get_clock().now().seconds_nanoseconds()
        current_time_s = ( (current_time[0] - self.start_time[0]) +
            (current_time[1] - self.start_time[1]%1e9) / 1e9)
        latency = current_time_s - track_time

        # updates the visualizer with the new data
        self.cuboid_visualizer.updatePlot(
            self.vehicleBboxes,
            self.obstacleBboxes,
            track_time,
            latency,
            self.speed,
            self.steering
        )

    def ego_speed_listener_callback(self, msg):
        # update ego speed
        # convert RPM to m/s
        self.speed = msg.data / 4614

    def ego_steering_listener_callback(self, msg):
        # update ego steering and apply angle bias (0 radians is not straight)
        rad_bias = 0.5304
        self.steering = rad_bias - msg.data

    def extractFromBboxesMsg(self, bboxesMsg):
        # Extracts bboxes info from message and stores bboxes by object type.

        # two lists of bboxes: vehicles and obstacles
        vehicleBboxes = []
        obstacleBboxes = []

        # loop through each bbox in message and convert to lists
        for i in range(bboxesMsg.num_bboxes):
            bboxMsg = bboxesMsg.bboxes[i]
            bbox = [
                [bboxMsg.point1.x, bboxMsg.point1.y],
                [bboxMsg.point2.x, bboxMsg.point2.y],
                [bboxMsg.point3.x, bboxMsg.point3.y],
                [bboxMsg.point4.x, bboxMsg.point4.y],
                bboxMsg.height
            ]
            if (bboxMsg.object_class == 1):
                vehicleBboxes.append(bbox)
            elif (bboxMsg.object_class == 2):
                obstacleBboxes.append(bbox)
            else:
                self.get_logger().info("Unknown bbox class recieved: bbox {:.0f}".format(i))

        return vehicleBboxes, obstacleBboxes

def main(args=None):
    rclpy.init(args=args)

    ui = UserInterface()

    rclpy.spin(ui)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    ui.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
