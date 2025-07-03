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
                get_package_share_directory('user_interface_fe'),
                'launch',
                'user_interface_launch.py'])
        ])
    ])

    # create communication nodes manually since must
    # have unique node names
    communication_config = PathJoinSubstitution([
        get_package_share_directory('communication_fe'),
        'config',
        'params.yaml'
    ])

    # client node (receive from dt device)
    client_node = Node(
        package = 'communication_fe',
        name = 'udp_to_ros_dt_to_ui',
        executable = 'udp_to_ros_translator',
        parameters = [communication_config],
        output = 'screen',
        emulate_tty = True
    )
    ld.add_action(client_node)

    # server node (send to dt device)
    server_node = Node(
        package = 'communication_fe',
        name = 'ros_to_udp_ui_to_dt',
        executable = 'ros_to_udp_translator',
        parameters = [communication_config],
        output = 'screen',
        emulate_tty = True
    )
    ld.add_action(server_node)

    return ld
