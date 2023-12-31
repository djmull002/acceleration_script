#!/bin/bash

source install/setup.bash
echo Launching Acceleration Testing Node
#launch ros node
ros2 run acceleration accel_test 
#start rosbag 

