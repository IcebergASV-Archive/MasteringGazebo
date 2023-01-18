## packages that are needed (incomplete list, being updated)

turtlebot3_gazebo

    sudo apt-get install ros-noetic-turtlebot3
	
    sudo apt-get install ros-noetic-turtlebot3-msgs
    
 It may be easier to use rosdep to get dependencies. [Rosdep instructions](http://wiki.ros.org/rosdep)
 
 

## other instructions

Before using commands from rosbash and before using catkin_make:

need to source workspace and ros noetic shell setup:
	
    source /opt/ros/noetic/setup.sh and source /opt/ros/noetic/setup.sh
	
    source ./devel/setup.sh from the catkin_ws that is in the MasteringGazebo
	
need to run gazebo ros node:
	
    rosrun gazebo_ros gazebo in a seperate terminal in order to start any node that uses gazebo services

