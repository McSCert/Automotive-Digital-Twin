import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.substitutions import PathJoinSubstitution
from launch_ros.actions import Node

def generate_launch_description():
    # include launch files from other packages
    ld = LaunchDescription([
        IncludeLaunchDescription([
            PathJoinSubstitution([
                get_package_share_directory('communication_fe'),
                'launch',
                'vehicle_communication_launch.py'])
        ])
    ])

    # data pre-processing node
    tracks_node = Node(
        package = 'data_preprocessing_fe',
        name = 'data_preprocessing',
        executable = 'data_preprocessing_fe',
        parameters = [],
        output = 'screen',
        emulate_tty = True
    )
    ld.add_action(tracks_node)

    return ld
