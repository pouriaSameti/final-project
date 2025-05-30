/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget;
    QFrame *frame;
    QLabel *label_2;
    QSlider *horizontalSlider_width;
    QLabel *width_label;
    QSpinBox *spinBox_width;
    QFrame *frame_2;
    QLabel *label_5;
    QSlider *horizontalSlider_Length;
    QLabel *length_label;
    QSpinBox *spinBox_length;
    QFrame *frame_3;
    QLabel *label_6;
    QSlider *horizontalSlider_ExpTime;
    QLabel *ExpTime_label;
    QSpinBox *spinBox_ExpTime;
    QFrame *frame_4;
    QLabel *label_7;
    QSlider *horizontalSlider_Gain_Raw;
    QLabel *Gain_Raw_label;
    QSpinBox *spinBox_gain_raw;
    QFrame *frame_5;
    QLabel *label_8;
    QSlider *horizontalSlider_Gain_DB;
    QLabel *Gain_db_label;
    QSpinBox *spinBox_gain_db;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(799, 635);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(9, 10, 781, 331));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName("label");

        verticalLayout_2->addWidget(label);

        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(10, 350, 781, 241));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(verticalLayoutWidget_2);
        widget->setObjectName("widget");
        widget->setMinimumSize(QSize(659, 0));
        frame = new QFrame(widget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 0, 601, 31));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 0, 91, 31));
        horizontalSlider_width = new QSlider(frame);
        horizontalSlider_width->setObjectName("horizontalSlider_width");
        horizontalSlider_width->setGeometry(QRect(110, 10, 311, 16));
        horizontalSlider_width->setOrientation(Qt::Orientation::Horizontal);
        width_label = new QLabel(frame);
        width_label->setObjectName("width_label");
        width_label->setGeometry(QRect(540, -1, 51, 31));
        spinBox_width = new QSpinBox(frame);
        spinBox_width->setObjectName("spinBox_width");
        spinBox_width->setGeometry(QRect(430, 0, 91, 31));
        frame_2 = new QFrame(widget);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(0, 40, 601, 31));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        label_5 = new QLabel(frame_2);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 0, 91, 31));
        horizontalSlider_Length = new QSlider(frame_2);
        horizontalSlider_Length->setObjectName("horizontalSlider_Length");
        horizontalSlider_Length->setGeometry(QRect(110, 10, 311, 16));
        horizontalSlider_Length->setOrientation(Qt::Orientation::Horizontal);
        length_label = new QLabel(frame_2);
        length_label->setObjectName("length_label");
        length_label->setGeometry(QRect(540, 0, 51, 31));
        spinBox_length = new QSpinBox(frame_2);
        spinBox_length->setObjectName("spinBox_length");
        spinBox_length->setGeometry(QRect(430, 0, 91, 31));
        frame_3 = new QFrame(widget);
        frame_3->setObjectName("frame_3");
        frame_3->setGeometry(QRect(0, 80, 601, 31));
        frame_3->setFrameShape(QFrame::Shape::StyledPanel);
        frame_3->setFrameShadow(QFrame::Shadow::Raised);
        label_6 = new QLabel(frame_3);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 0, 101, 31));
        horizontalSlider_ExpTime = new QSlider(frame_3);
        horizontalSlider_ExpTime->setObjectName("horizontalSlider_ExpTime");
        horizontalSlider_ExpTime->setGeometry(QRect(110, 10, 311, 16));
        horizontalSlider_ExpTime->setOrientation(Qt::Orientation::Horizontal);
        ExpTime_label = new QLabel(frame_3);
        ExpTime_label->setObjectName("ExpTime_label");
        ExpTime_label->setGeometry(QRect(540, 0, 51, 31));
        spinBox_ExpTime = new QSpinBox(frame_3);
        spinBox_ExpTime->setObjectName("spinBox_ExpTime");
        spinBox_ExpTime->setGeometry(QRect(430, 0, 91, 31));
        frame_4 = new QFrame(widget);
        frame_4->setObjectName("frame_4");
        frame_4->setGeometry(QRect(0, 120, 601, 31));
        frame_4->setFrameShape(QFrame::Shape::StyledPanel);
        frame_4->setFrameShadow(QFrame::Shadow::Raised);
        label_7 = new QLabel(frame_4);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(10, 0, 91, 31));
        horizontalSlider_Gain_Raw = new QSlider(frame_4);
        horizontalSlider_Gain_Raw->setObjectName("horizontalSlider_Gain_Raw");
        horizontalSlider_Gain_Raw->setGeometry(QRect(110, 10, 311, 16));
        horizontalSlider_Gain_Raw->setOrientation(Qt::Orientation::Horizontal);
        Gain_Raw_label = new QLabel(frame_4);
        Gain_Raw_label->setObjectName("Gain_Raw_label");
        Gain_Raw_label->setGeometry(QRect(540, 0, 51, 31));
        spinBox_gain_raw = new QSpinBox(frame_4);
        spinBox_gain_raw->setObjectName("spinBox_gain_raw");
        spinBox_gain_raw->setGeometry(QRect(430, 0, 91, 31));
        frame_5 = new QFrame(widget);
        frame_5->setObjectName("frame_5");
        frame_5->setGeometry(QRect(0, 160, 601, 31));
        frame_5->setFrameShape(QFrame::Shape::StyledPanel);
        frame_5->setFrameShadow(QFrame::Shadow::Raised);
        label_8 = new QLabel(frame_5);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(10, 0, 91, 31));
        horizontalSlider_Gain_DB = new QSlider(frame_5);
        horizontalSlider_Gain_DB->setObjectName("horizontalSlider_Gain_DB");
        horizontalSlider_Gain_DB->setGeometry(QRect(110, 10, 311, 16));
        horizontalSlider_Gain_DB->setOrientation(Qt::Orientation::Horizontal);
        Gain_db_label = new QLabel(frame_5);
        Gain_db_label->setObjectName("Gain_db_label");
        Gain_db_label->setGeometry(QRect(540, 0, 51, 31));
        spinBox_gain_db = new QSpinBox(frame_5);
        spinBox_gain_db->setObjectName("spinBox_gain_db");
        spinBox_gain_db->setGeometry(QRect(430, 0, 91, 31));

        verticalLayout_3->addWidget(widget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 799, 18));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "pouria label-------------------------------------------------", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Width (pixcel)", nullptr));
        width_label->setText(QCoreApplication::translate("MainWindow", "Wv", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Hight (pixcel)", nullptr));
        length_label->setText(QCoreApplication::translate("MainWindow", "Lv", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Exposure Time (us)", nullptr));
        ExpTime_label->setText(QCoreApplication::translate("MainWindow", "Expv", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Gain (Raw)", nullptr));
        Gain_Raw_label->setText(QCoreApplication::translate("MainWindow", "Gv", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Gain (db)", nullptr));
        Gain_db_label->setText(QCoreApplication::translate("MainWindow", "Gdbv", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
