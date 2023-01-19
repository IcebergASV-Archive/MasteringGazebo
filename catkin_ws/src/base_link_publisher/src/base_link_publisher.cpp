#include <ros/ros.h>
#include <std_msgs/Int32.h>
#include <tf2_msgs/TFMessage.h>

int main(int argc, char** argv) {

    ros::init(argc, argv, "base_link_publisher");
    ros::NodeHandle nh;
    
    ros::Publisher pub = nh.advertise<std_msgs::Int32>("/tf", 1000);
    ros::Rate loop_rate(2);
    
  
    ROSMessages::tf2_msgs::TFMessage base_link(new ROSMessages::tf2_msgs::base_link(TFM));
	ROSMessages::geometry_msgs::TransformStamped TransformStamped;
	TransformStamped.header.seq = 0;
	TransformStamped.header.time = time;
	TransformStamped.header.frame_id = CurrentParentFrameName;
	TransformStamped.child_frame_id = CurrentThisFrameName;
	TransformStamped.transform.translation.x = TranslationX;
	TransformStamped.transform.translation.y = TranslationY;
	TransformStamped.transform.translation.z = TranslationZ;
	TransformStamped.transform.rotation.x = RotationX;
	TransformStamped.transform.rotation.y = RotationY;
	TransformStamped.transform.rotation.z = RotationZ;
	TransformStamped.transform.rotation.w = RotationW;

	TFMessage->transforms.Add(TransformStamped);

	_TFTopic->Publish(base_link);

    
    while (ros::ok())
    {
        pub.publish(count);
        ros::spinOnce();
        loop_rate.sleep();
        ++count.data;
    }
    
    return 0;
}
