#include <ros/ros.h>
#include <std_msgs/Int32.h>
#include <tf2_msgs/TFMessage.h>

int main(int argc, char** argv) {

    ros::init(argc, argv, "base_link_publisher");
    ros::NodeHandle nh;
    
    ros::Publisher pub = nh.advertise<std_msgs::Int32>("/tf", 1000);
    ros::Rate loop_rate(2);
    
    std_msgs::Int32 count;
    count.data = 0;
    
    while (ros::ok())
    {
        pub.publish(count);
        ros::spinOnce();
        loop_rate.sleep();
        ++count.data;
    }
    
    return 0;
}
