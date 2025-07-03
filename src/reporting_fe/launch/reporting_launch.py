import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node

def generate_launch_description():
    ld = LaunchDescription()

    # reporting node
    reporting_config = os.path.join(
        get_package_share_directory('reporting_fe'),
        'config',
        'params.yaml'
    )

    reporting_node = Node(
        package = 'reporting_fe',
        name = 'reporting',
        executable = 'reporting',
        parameters = [reporting_config],
        output = 'screen',
        emulate_tty = True
    )
    ld.add_action(reporting_node)

    return ld
