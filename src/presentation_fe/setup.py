import os
from glob import glob
from setuptools import find_packages, setup

package_name = 'presentation_fe'

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
    description='Conversion of tracks to bounding boxes.',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'tracks_to_bboxes = presentation_fe.tracks_to_bboxes:main'
        ],
    },
)
