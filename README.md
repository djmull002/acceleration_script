# Description

This a script that drives the DDT car for 30 seconds and gathers velocity data. The car will drive in a striaght line (steering angle = 0), and a rosbag will record the messages exchanged between the script and the vehicle.

Inside there is a bash script that runs the ros node, and starts the rosbag at the same time (and sources the workspace too!).
# Instructions for Launch
1. Go to the root of the workspace ("acceleration_script" or "acceleration_testing")
2. Give permission to the bash script using "chmod u+x accleration_launch.sh"
3. run "colcon build"
4. Run the script using "./accleration_launch.sh"

# Current Issues
1. accel.py cannot find the 'eufs_msgs' module, which is needed for recieving velocity.
2. Cannot create a custom message to replace 'WheelSpeedsStamped' in 'eufs_msgs' because ROS will detect two message types on the topic '/ros_can/wheel_speeds' and will not work.  

## Future Features

Add rosbag launch command to the bash script. Plotting programme that plots the data at the end of the run time.
