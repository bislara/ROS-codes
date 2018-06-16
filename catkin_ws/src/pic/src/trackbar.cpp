#include <ros/ros.h>
#include <image_transport/image_transport.h>
#include <opencv2/highgui/highgui.hpp>
#include<opencv2/opencv.hpp>
#include<opencv2/imgproc.hpp>
#include <cv_bridge/cv_bridge.h>
#include "std_msgs/Int32.h"

#include<algorithm>
#include<stdlib.h>
#include<iostream>
#include <string.h>
#include <limits.h>
#include <stddef.h>
#include <limits>
#include<vector>
#include<sample_qt/hsv.h>

using namespace std;
using namespace cv;

int hup=180,sup=255,vup=255,hlo=0,slo=0,vlo=0;
Mat img,frame_HSV,frame,mask,img2,blur2,element,canny_output;
void Callback(const sample_qt::hsv::ConstPtr& msg)
{
 /*hup=msg->data.at(0);
 ROS_INFO("%d",hup);
 hlo=msg->data.at(1);
 ROS_INFO("%d",hlo);
 sup=msg->data.at(2);
 ROS_INFO("%d",sup);

 slo=msg->data.at(3);
 ROS_INFO("%d",slo);
 vup=msg->data.at(4);
 ROS_INFO("%d",vup);
 vlo=msg->data.at(5);
 ROS_INFO("%d",vlo);*/

   hup=msg->Hmax;
   ROS_INFO("%d",hup);

   hlo=msg->Hmin;
   ROS_INFO("%d",hlo);

   sup=msg->Smax;
   ROS_INFO("%d",sup);

   slo=msg->Smin;
   ROS_INFO("%d",slo);

   vup=msg->Vmax;
   ROS_INFO("%d",vup);

   vlo=msg->Vmin;
   ROS_INFO("%d",vlo);
}

void moment(Mat img2,Mat &blur)
{

  vector<vector<Point> > contours;
  vector<Vec4i> hierarchy;
  Canny( img2, canny_output, 120, 120*2, 3 );
  findContours(canny_output, contours, hierarchy, RETR_LIST, CHAIN_APPROX_SIMPLE, Point(0, 0) );

  if(!contours.empty())
  {
  vector<double> areas(contours.size());
  for(int i=0;i<contours.size();++i)
  {    areas[i]=contourArea(contours.at(i),0);}

  Moments m;
  double max=*max_element( areas.begin(), areas.end() );
  for(int i=0;i<areas.size();++i)
  if(max==areas[i])
  {
       m=moments(contours[i],false);
       Point2f ma=Point2f(m.m10/m.m00,m.m01/m.m00);
       circle(blur,ma,4,Scalar(0,0,255),-1);
       drawContours(blur,contours,i,Scalar(0,255,0),2,8,hierarchy,0,Point());
       break;
  }
  }

}


void imgCallback(const sensor_msgs::ImageConstPtr& text)
{
  try
  {
    //cv::imshow("view", cv_bridge::toCvShare(text, "bgr8")->image);
    //cv::waitKey(30);

        Mat img=cv_bridge::toCvShare(text, "bgr8")->image;
        cvtColor(img,img2,CV_BGR2RGB);
        cvtColor(img,frame_HSV, CV_BGR2HSV);
    }

  catch (cv_bridge::Exception& e)
  {
    ROS_ERROR("Could not convert from '%s' to 'bgr8'.", text->encoding.c_str());
  }

    inRange(frame_HSV,Scalar(hlo,slo,vlo),Scalar(hup,sup,vup),mask);
    //cv::morphObject(mask);
    //cv::imshow("view",cv_bridge::toCvShare(text,"bgr8")->image);
   // cv::imshow("view",mask);
    //cv::imshow("view",img2);
    medianBlur ( mask,blur2, 15 );
    // GaussianBlur( mask,blur2, Size( 15, 15 ), 0, 0 );
   // cv::Mat ele=getStructuringElement(MORPH_RECT,Size(5,5),Point(-1,-1));

    element = getStructuringElement(MORPH_CROSS,
                  Size(2 * 2 + 1, 2 * 2 + 1),
                  Point(-1, -1) );



    erode( blur2,blur2,element);
//    cv::dilate(blur,blur,element);

    moment(blur2,img2);
    imshow("view",blur2);
}
int main(int argc, char** argv)
{

        ros::init(argc, argv, "trackbar");
        ros::NodeHandle nh;
        image_transport::ImageTransport it(nh);
        namedWindow("view");
        image_transport::Subscriber sub=it.subscribe("tracker", 1000,imgCallback);
        image_transport::Publisher pub = it.advertise("qt", 1);
        ros::Subscriber sub1= nh.subscribe("HSV",1000,Callback);
        ros::Rate loop_rate(10);

        while(nh.ok())
        {

            sensor_msgs::ImagePtr msg2=cv_bridge::CvImage(std_msgs::Header(),"bgr8",img2).toImageMsg();
            //inRange(frame_HSV, Scalar(hlo, slo, vlo), Scalar(hup, sup, vup),frame);

            pub.publish(msg2);
            waitKey(1);
            ros::spinOnce();
            loop_rate.sleep();


        }
}

