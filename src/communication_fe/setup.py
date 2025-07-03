import os
from glob import glob
from setuptools import find_packages, setup

package_name = 'communication_fe'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob('launch/*launch.py')),
        (os.path.join('share', package_name, 'config'), glob('config/*.yaml'))
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='Winnie',
    maintainer_email='trandint@mcmaster.ca',
    description='Package to perform ROS2<->UDP conversions.',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'udp_to_ros_translator = communication_fe.udp_to_ros:main',
            'ros_to_udp_translator = communication_fe.ros_to_udp:main',
        ],
    },
)
