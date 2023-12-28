# Acceleration Script 
## Description 
This a script that drives the DDT car for 30 seconds and gathers velocity data. The car will drive in a striaght line (steering angle = 0), and a rosbag will record the messages exchanged between the script and the vehicle.

Inside there is a bash script that runs the ros node, and starts the rosbag at the same time. 

## Instructions for Launch 
1. Go to the root of the workspace ("acceleration_script" or "acceleration_testing")
2. Give permission to the bash script using "chmod u+x accleration_launch.sh"
3. Run the script using "./accleration_launch.sh"
   
## Future Features
Add rosbag launch command to the bash script.
Plotting programme that plots the data at the end of the run time. 
