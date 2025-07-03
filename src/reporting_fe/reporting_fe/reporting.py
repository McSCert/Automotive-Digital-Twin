import rclpy
from rclpy.node import Node
import os
import subprocess
from std_msgs.msg import Bool

"""Class managing the ROS2 bag to csv conversion process. Uses external ros2bag_convert repo."""
class Reporting(Node):
	def __init__(self):
		super().__init__('reporting')
		self.declare_parameters(
		    namespace='',
			parameters=[
			    ('base_dir', rclpy.Parameter.Type.STRING)
			]
		)
		self.base_dir = self.get_parameter('base_dir').get_parameter_value().string_value

		self.get_logger().info('Reporting FE Online...')
		self.enable_subscription = self.create_subscription(
    		Bool,
    		'/dt/recording_finished',
    		self.listener_callback,
            1
		)

	def listener_callback(self, msg):
	    # when the recording finishes, perform the conversion automatically
		enable = msg.data
		if enable:
			try:
				self.get_logger().info('Converting ros2 bag to csv...')
				subprocess.run([os.path.join(self.base_dir, 'src/reporting_fe/scripts/bag2csv.sh')])

			except subprocess.CalledProcessError as e:
				self.get_logger().info(f'Error converting ros2 bag to csv')


def main(args=None):
    rclpy.init(args=args)
    reporting = Reporting()
    rclpy.spin(reporting)

    reporting.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
