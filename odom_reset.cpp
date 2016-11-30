
#include "ros/ros.h"
#include "std_msgs/Empty.h"


void odom_reset()
{
  ros::init(argc, argv, "odom_reset");
  ros::NodeHandle n;
  std_msgs::Empty mymsg;
  ros::Publisher resetOdometry = n.advertise<std_msgs::Empty>("/mobile_base/commands/reset_odometry", 1000, true);
  resetOdometry.publish(mymsg); 
  
}
