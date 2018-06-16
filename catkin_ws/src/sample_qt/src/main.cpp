#include "mainwindow.h"
#include <QApplication>
#include <iostream>
using namespace std;


int main(int argc, char *argv[])
{		
    ros::init(argc, argv, "listener");
    ros::NodeHandle nh;
    QApplication a(argc, argv);
    //QPushButton *button =new QPushButton("close");
    //QObject::connect(button,SIGNAL(clicked()),&a,SLOT(quit()));
    //button->show();
    MainWindow w(nh);
    w.show();
    ros::Rate rate(30);
    while(ros::ok())
    {
        ros::spinOnce();
        rate.sleep();
        a.processEvents();
    }
    return 0;
}
