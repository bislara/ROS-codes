#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtCore>
#include <QtGui>

void MainWindow::callback(const sensor_msgs::ImageConstPtr& msg)
{
  try
  {
    if(!cv_bridge::toCvShare(msg, "bgr8")->image.empty())
    {
                cv::Mat img=cv_bridge::toCvShare(msg, "bgr8")->image;
               // cv::cvtColor(img, img, CV_BGR2RGB);
                ui->try_2->setPixmap(QPixmap::fromImage(QImage(img.data, img.cols, img.rows, img.step, QImage::Format_RGB888)));
    }
    else
    {
        ROS_INFO("ERROR: image is empty");
    }
  }
  catch (cv_bridge::Exception& e)
  {
    ROS_ERROR("Could not convert from '%s' to 'bgr8'.", msg->encoding.c_str());
  }
}

void MainWindow::push_signal()
{
 signal.data=!signal.data;
 advertise();
}
void  MainWindow::advertise()
{
  pub.publish(signal);
  ROS_INFO("%d",signal.data);
}


MainWindow::MainWindow(ros::NodeHandle _nh, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow), nh(_nh)
{
   
    ui->setupUi(this);
    signal.data=1;
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(push_signal()));
    sub = nh.subscribe("qt", 1, &MainWindow::callback, this);
    pub = nh.advertise<std_msgs::Int32>("control",1000);

    ui->try_2->setScaledContents(true);
    pub_hsv = nh.advertise<sample_qt::hsv>("HSV",1000);//
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(pushButton_clicked()));

    connect(ui->Hmax,SIGNAL(sliderMoved(int)),this,SLOT(trackbar_value()));
    connect(ui->Hmin,SIGNAL(sliderMoved(int)),this,SLOT(trackbar_value()));

    connect(ui->Smax,SIGNAL(sliderMoved(int)),this,SLOT(trackbar_value()));
    connect(ui->Smin,SIGNAL(sliderMoved(int)),this,SLOT(trackbar_value()));

    connect(ui->Vmax,SIGNAL(sliderMoved(int)),this,SLOT(trackbar_value()));
    connect(ui->Vmin,SIGNAL(sliderMoved(int)),this,SLOT(trackbar_value()));
}


void MainWindow::trackbar_value(){//


    sample_qt::hsv hsv;
    //hsv.data.clear();

    /*hsv.data.push_back(ui->Hmax->value());
    hsv.data.push_back(ui->Hmin->value());

    hsv.data.push_back(ui->Smax->value());
    hsv.data.push_back(ui->Smin->value());


    hsv.data.push_back(ui->Vmax->value());
    hsv.data.push_back(ui->Vmin->value());*/

    hsv.Hmax=ui->Hmax->value();
    hsv.Hmin=ui->Hmin->value();
    hsv.Smax=ui->Smax->value();
    hsv.Smin=ui->Smin->value();
    hsv.Vmax=ui->Vmax->value();
    hsv.Vmin=ui->Vmin->value();

    pub_hsv.publish(hsv);//
}

MainWindow::~MainWindow()
{
    delete ui;
}



