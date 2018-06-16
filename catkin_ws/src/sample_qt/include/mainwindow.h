#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <ros/ros.h>
#include <std_msgs/Int32.h>
#include <std_msgs/Int16.h>
#include <std_msgs/Int8.h>
#include <std_msgs/Bool.h>
#include <iostream>
#include <opencv2/opencv.hpp>
#include <cv_bridge/cv_bridge.h>
//#include <std_msgs/Int32MultiArray.h>
#include <sample_qt/hsv.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(ros::NodeHandle _nh,QWidget *parent = 0);
    ~MainWindow();
    void callback(const sensor_msgs::ImageConstPtr& msg);
    
    void advertise();
private:
    Ui::MainWindow *ui;
    ros::NodeHandle nh;
    ros::Subscriber sub;
    ros::Publisher pub;
    std_msgs::Int32 signal;
    ros::Publisher pub_hsv;
    //std_msgs::Int32MultiArray hsv;
    
public slots:
    void push_signal();
    void trackbar_value();
										
};

#endif // MAINWINDOW_H
