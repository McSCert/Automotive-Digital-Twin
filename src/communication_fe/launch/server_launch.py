import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    ld = LaunchDescription()

    config = os.path.join(
        get_package_share_directory('communication_fe'),
        'config',
        'params.yaml'
    )

    node = Node(
        package = 'communication_fe',
        name = 'ros_to_udp',
        executable = 'ros_to_udp_translator',
        parameters = [config],
        output = 'screen',
        emulate_tty = True
    )

    ld.add_action(node)

    return ld
