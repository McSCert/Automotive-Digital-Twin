import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node

def generate_launch_description():
    ld = LaunchDescription()

    # presentation node
    presentation_config = os.path.join(
        get_package_share_directory('presentation_fe'),
        'config',
        'params.yaml'
    )

    presentation_node = Node(
        package = 'presentation_fe',
        name = 'tracks_to_bboxes',
        executable = 'tracks_to_bboxes',
        parameters = [presentation_config],
        output = 'screen',
        emulate_tty = True
    )
    ld.add_action(presentation_node)

    # # create communication nodes manually since must
    # # have unique node names
    # communication_config = os.path.join(
    #     get_package_share_directory('communication_fe'),
    #     'config',
    #     'params.yaml'
    # )

    # # server node (send to user interface device)
    # server_to_ui_node = Node(
    #     package = 'communication_fe',
    #     name = 'ros_to_udp_dt_to_ui',
    #     executable = 'ros_to_udp_translator',
    #     parameters = [communication_config],
    #     output = 'screen',
    #     emulate_tty = True
    # )
    # ld.add_action(server_to_ui_node)

    # # server node (send to vehicle)
    # server_to_vehicle_node = Node(
    #     package = 'communication_fe',
    #     name = 'ros_to_udp_dt_to_vehicle',
    #     executable = 'ros_to_udp_translator',
    #     parameters = [communication_config],
    #     output = 'screen',
    #     emulate_tty = True
    # )
    # ld.add_action(server_to_vehicle_node)

    # # client node (receive from vehicle)
    # client_from_veh_node = Node(
    #     package = 'communication_fe',
    #     name = 'udp_to_ros_vehicle_to_dt',
    #     executable = 'udp_to_ros_translator',
    #     parameters = [communication_config],
    #     output = 'screen',
    #     emulate_tty = True
    # )
    # ld.add_action(client_from_veh_node)

    # # client node (receive from ui)
    # client_from_ui_node = Node(
    #     package = 'communication_fe',
    #     name = 'udp_to_ros_ui_to_dt',
    #     executable = 'udp_to_ros_translator',
    #     parameters = [communication_config],
    #     output = 'screen',
    #     emulate_tty = True
    # )
    # ld.add_action(client_from_ui_node)

    return ld
