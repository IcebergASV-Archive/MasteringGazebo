#include <ros/ros.h>
#include <std_msgs/Int32.h>
#include <tf2_msgs/TFMessage.h>

int main(int argc, char** argv) {

    ros::init(argc, argv, "base_link_publisher");
    ros::NodeHandle nh;
    
    ros::Publisher pub = nh.advertise<geometry_msgs::TFMessage>("/tf", 1000);
    ros::Rate loop_rate(10);
    
  
    tf2_msgs::TFMessage base_link
	geometry_msgs::TFStamped transform;
	base_link.header.seq = 1;
	base_link.header.time = ros::Time::now();
	base_link.header.frame_id = "base_link";
	base_link.child_frame_id = "laser_scan";
	base_link.transform.translation.x = 0.8;
	base_link.transform.translation.y =0.0;
	base_link.transform.translation.z = 0.3;
	base_link.ransform.rotation.x = 0;
	base_link.transform.rotation.y = 0;
	base_link.transform.rotation.z = 0;
	base_link.transform.rotation.w = 0;
	    
    while (ros::ok())
    {
        pub.publish(base_link);
        ros::spinOnce();
        loop_rate.sleep();
    }
    
    return 0;
}
