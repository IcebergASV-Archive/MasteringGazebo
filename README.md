## packages that are needed (incomplete list, being updated)


 Use rosdep to get build dependencies. [Rosdep instructions](http://wiki.ros.org/rosdep)

Packages that have nodes that are used:

turtlebot3_gazebo

    sudo apt-get install ros-noetic-turtlebot3
	
    sudo apt-get install ros-noetic-turtlebot3-msgs

gmapping if you want to use gmapping, of course

    sudo apt-get install ros-noetic-slam-gmapping
 
 

## other instructions

Before using commands from rosbash and before using catkin_make:

need to source workspace and ros noetic shell setup:
	
    source /opt/ros/noetic/setup.sh and source /opt/ros/noetic/setup.sh
	
    source ./devel/setup.sh from the catkin_ws that is in the MasteringGazebo
	
need to run gazebo ros node:
	
    rosrun gazebo_ros gazebo in a seperate terminal in order to start any node that uses gazebo services

