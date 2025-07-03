#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from std_msgs.msg import Bool
import subprocess
import os

"""Class to control and monitor the lifecycle node transitions according to the user's input."""
class RosbagManager(Node):

    def __init__(self):
        super().__init__('rosbag_manager')
        # control signal sent by the user to start or stop the recording
        self.subscription = self.create_subscription(
            Bool,
            '/dt/recording_start',
            self.listener_callback,
            10
        )
        self.subscription  # prevent unused variable warning

        # status messages on the recording
        self.status_publisher = self.create_publisher(
            Bool,
            '/dt/recording_status',
            10
        )
        self.recording_completed_publisher = self.create_publisher(
            Bool,
            'dt/recording_finished',
            10
        )

        # timer callback with 1s period
        self.timer = self.create_timer(1, self.timer_callback)

        # recording status (0 = unconfigured, 1 = inactive, 2 = active, 3 = deactivated)
        self.recording_status = False

    def listener_callback(self, msg):
        # transition to recording in 2 step process - listener_callback and in timer_callback
        # required to give some time before consecutive transition calls
        if (msg.data):
            # begin recording if not already started
            if (self.recording_status == 0):
                # transition node to inactive
                process = subprocess.Popen(
                    ['ros2', 'lifecycle', 'set', '/rosbag_recorder', 'configure']
                )
                self.get_logger().info("configure")
                self.recording_status = 1
            else:
                self.get_logger().info("Recording already started.")
        else:
            # stop recording if exists
            if (self.recording_status == 2):
                # transition node to inactive
                process = subprocess.Popen(
                    ['ros2', 'lifecycle', 'set', '/rosbag_recorder', 'deactivate']
                )
                self.get_logger().info("deactivate")
                self.recording_status = 3
            else:
                self.get_logger().info("Recording has not yet started.")

    def timer_callback(self):
        # executes second transition of recorder if in transitioning state
        if (self.recording_status == 1):
            # transition node to active
            process = subprocess.Popen(
                ['ros2', 'lifecycle', 'set', '/rosbag_recorder', 'activate']
            )
            self.get_logger().info("activate")
            self.recording_status = 2
        elif (self.recording_status == 3):
            # transition node to unconfigured
            process = subprocess.Popen(
                ['ros2', 'lifecycle', 'set', '/rosbag_recorder', 'cleanup']
            )
            self.get_logger().info("cleanup")
            self.recording_status = 0
            # publish completion of rosbag
            msg = Bool()
            msg.data = True
            self.recording_completed_publisher.publish(msg)

        # publishes recording status
        msg = Bool()
        msg.data = bool(self.recording_status)
        self.status_publisher.publish(msg)

def main(args=None):
    rclpy.init(args=args)

    rosbag_manager = RosbagManager()

    rclpy.spin(rosbag_manager)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    rosbag_manager.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
