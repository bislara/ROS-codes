#include <ros/ros.h>
#include <image_transport/image_transport.h>
#include <opencv2/highgui/highgui.hpp>
#include <cv_bridge/cv_bridge.h>
#include "std_msgs/Int32.h"
int text=1;
void Callback(const std_msgs::Int32::ConstPtr& msg)
{
text = msg->data;
}
int main(int argc, char** argv)
{

	ros::init(argc, argv, "talker");
	ros::NodeHandle nh;
        image_transport::ImageTransport it(nh);
        //image_transport::Publisher pub = it.advertise("camera/image", 1);
        image_transport::Publisher pub2= it.advertise("tracker",1);
        ros::Subscriber sub=nh.subscribe("control",1000,Callback);
        cv::VideoCapture cap(0);
	cv::Mat image;
	ros::Rate loop_rate(10);
	while (nh.ok()) {
	  cap>>image;
	  sensor_msgs::ImagePtr msg = cv_bridge::CvImage(std_msgs::Header(), "bgr8", image).toImageMsg();
	  cv::waitKey(30);
          if(text)
          {
          //pub.publish(msg);
          pub2.publish(msg);}
      	  ros::spinOnce();
       	  loop_rate.sleep();
          }
}

