#!/bin/bash

ROSBAGDIR=$(ls -td /home/winnie/Documents/cas782_dt/bags/* | head -1)
ros2bag-convert $ROSBAGDIR/*.db3
