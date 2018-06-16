/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *try_2;
    QPushButton *pushButton;
    QSlider *Hmin;
    QSlider *Hmax;
    QSlider *Smin;
    QSlider *Smax;
    QSlider *Vmin;
    QSlider *Vmax;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(666, 605);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        try_2 = new QLabel(centralWidget);
        try_2->setObjectName(QString::fromUtf8("try_2"));
        try_2->setGeometry(QRect(10, 10, 481, 301));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(530, 140, 101, 29));
        Hmin = new QSlider(centralWidget);
        Hmin->setObjectName(QString::fromUtf8("Hmin"));
        Hmin->setGeometry(QRect(20, 350, 381, 17));
        Hmin->setMaximum(180);
        Hmin->setOrientation(Qt::Horizontal);
        Hmax = new QSlider(centralWidget);
        Hmax->setObjectName(QString::fromUtf8("Hmax"));
        Hmax->setGeometry(QRect(20, 380, 381, 17));
        Hmax->setMaximum(180);
        Hmax->setOrientation(Qt::Horizontal);
        Smin = new QSlider(centralWidget);
        Smin->setObjectName(QString::fromUtf8("Smin"));
        Smin->setGeometry(QRect(20, 410, 381, 17));
        Smin->setMaximum(255);
        Smin->setOrientation(Qt::Horizontal);
        Smax = new QSlider(centralWidget);
        Smax->setObjectName(QString::fromUtf8("Smax"));
        Smax->setGeometry(QRect(20, 440, 451, 17));
        Smax->setMaximum(255);
        Smax->setOrientation(Qt::Horizontal);
        Vmin = new QSlider(centralWidget);
        Vmin->setObjectName(QString::fromUtf8("Vmin"));
        Vmin->setGeometry(QRect(20, 470, 451, 17));
        Vmin->setMaximum(255);
        Vmin->setOrientation(Qt::Horizontal);
        Vmax = new QSlider(centralWidget);
        Vmax->setObjectName(QString::fromUtf8("Vmax"));
        Vmax->setGeometry(QRect(20, 500, 451, 17));
        Vmax->setMaximum(255);
        Vmax->setOrientation(Qt::Horizontal);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 666, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        try_2->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainWindow", "pause/play", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
