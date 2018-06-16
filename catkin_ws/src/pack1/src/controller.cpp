#include "ros/ros.h"
#include "std_msgs/Int32.h"
int no;
int no1;
/**
 * This tutorial demonstrates simple receipt of messages over the ROS system.
 */
void chatterCallback1(const std_msgs::Int32::ConstPtr& msg1)
{
// std::cout<< msg->data<<std::endl;
 // ROS_INFO("I heard: [%s]", msg->data.c_str());
no1 = msg1->data;
}



void chatterCallback(const std_msgs::Int32::ConstPtr& msg)
{
// std::cout<< msg->data<<std::endl;
 // ROS_INFO("I heard: [%s]", msg->data.c_str());
no = msg->data;
}

int main(int argc, char **argv)
{
  /**
   * The ros::init() function needs to see argc and argv so that it can perform
   * any ROS arguments and name remapping that were provided at the command line.
   * For programmatic remappings you can use a different version of init() which takes
   * remappings directly, but for most command-line programs, passing argc and argv is
   * the easiest way to do it.  The third argument to init() is the name of the node.
   *
   * You must call one of the versions of ros::init() before using any other
   * part of the ROS system.
   */
  ros::init(argc, argv, "controller");

  /**
   * NodeHandle is the main access point to communications with the ROS system.
   * The first NodeHandle constructed will fully initialize this node, and the last
   * NodeHandle destructed will close down the node.
   */
  ros::NodeHandle n;

  /**
   * The subscribe() call is how you tell ROS that you want to receive messages
   * on a given topic.  This invokes a call to the ROS
   * master node, which keeps a registry of who is publishing and who
   * is subscribing.  Messages are passed to a callback function, here
   * called chatterCallback.  subscribe() returns a Subscriber object that you
   * must hold on to until you want to unsubscribe.  When all copies of the Subscriber
   * object go out of scope, this callback will automatically be unsubscribed from
   * this topic.
   *
   * The second parameter to the subscribe() function is the size of the message
   * queue.  If messages are arriving faster than they are being processed, this
   * is the number of messages that will be buffered up before beginning to throw
   * away the oldest ones.
   */
  ros::Subscriber sub = n.subscribe("chatter", 1000, chatterCallback);
  ros::Subscriber sub1 = n.subscribe("chatter2",1000,chatterCallback1);
  ros ::Publisher chatter_pub = n.advertise<std_msgs::Int32>("chatter3",1000);
 // std::cout<<no<<"  "<<no1<<std::endl;
   ros::Rate loop_rate(5);
   while (ros::ok())
   {
    std_msgs::Int32 msg3,msg4;
    msg3.data=no;
    msg4.data=no1;
    std::cout<<msg3.data<<" - "<<msg4.data<<std::endl;
    chatter_pub.publish(msg3);
    chatter_pub.publish(msg4);
    ros::spinOnce();
    loop_rate.sleep(); 
   } 
  ros::spin();

  return 0;
}
