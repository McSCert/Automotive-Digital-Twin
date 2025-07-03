import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node

def generate_launch_description():
    ld = LaunchDescription()

    # data collection nodes
    manager_node = Node(
        package = 'data_collection_fe',
        name = 'rosbag_manager',
        executable = 'rosbag_manager.py',
        parameters = [],
        output = 'screen',
        emulate_tty = True
    )
    ld.add_action(manager_node)

    recorder_node = Node(
        package = 'data_collection_fe',
        name = 'rosbag_recorder',
        executable = 'rosbag_recorder',
        parameters = [],
        output = 'screen',
        emulate_tty = True
    )
    ld.add_action(recorder_node)

    return ld
