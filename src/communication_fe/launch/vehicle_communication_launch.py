import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node

def generate_launch_description():
    ld = LaunchDescription()

    # config setup
    communication_config = os.path.join(
        get_package_share_directory('communication_fe'),
        'config',
        'params.yaml'
    )

    # client node (receive from vehicle)
    client_node = Node(
        package = 'communication_fe',
        name = 'udp_to_ros_dt_to_vehicle',
        executable = 'udp_to_ros_translator',
        parameters = [communication_config],
        output = 'screen',
        emulate_tty = True
    )
    ld.add_action(client_node)

    # server node (send to dt device)
    server_node = Node(
        package = 'communication_fe',
        name = 'ros_to_udp_vehicle_to_dt',
        executable = 'ros_to_udp_translator',
        parameters = [communication_config],
        output = 'screen',
        emulate_tty = True
    )
    ld.add_action(server_node)

    return ld
