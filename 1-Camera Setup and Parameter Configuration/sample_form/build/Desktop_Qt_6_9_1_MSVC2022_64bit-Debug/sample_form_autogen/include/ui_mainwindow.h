/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
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
    QVBoxLayout *Camera;
    QLabel *CameraFrame;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *AnalogControl;
    QWidget *AnalogParameters;
    QLabel *label;
    QFrame *GainRaw;
    QLabel *label_2;
    QSlider *horizontalSlider_width;
    QLabel *width_label;
    QSpinBox *spinBox_width;
    QFrame *GainDb;
    QLabel *label_5;
    QSlider *horizontalSlider_width_4;
    QLabel *width_label_4;
    QSpinBox *spinBox_width_4;
    QFrame *BlackLevel;
    QLabel *label_7;
    QSlider *horizontalSlider_width_6;
    QLabel *width_label_6;
    QSpinBox *spinBox_width_6;
    QFrame *Gamma;
    QLabel *label_8;
    QSlider *horizontalSlider_width_7;
    QSpinBox *spinBox_width_7;
    QFrame *DigitalShift;
    QLabel *label_10;
    QSlider *horizontalSlider_width_9;
    QSpinBox *spinBox_width_9;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *ImageFormatControl;
    QWidget *ImageFormatControl_2;
    QLabel *label_4;
    QFrame *Width;
    QLabel *label_11;
    QSlider *horizontalSlider_width_3;
    QSpinBox *spinBox_width_3;
    QFrame *Height;
    QLabel *label_12;
    QSlider *horizontalSlider_width_10;
    QSpinBox *spinBox_width_10;
    QFrame *OffsetX;
    QLabel *label_14;
    QSlider *horizontalSlider_width_12;
    QSpinBox *spinBox_width_12;
    QFrame *OffsetY;
    QLabel *label_15;
    QSlider *horizontalSlider_width_13;
    QSpinBox *spinBox_width_13;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *AcquisitionControl;
    QWidget *AcquisitionControl_2;
    QLabel *label_26;
    QFrame *ExposureTimeAbs;
    QLabel *label_27;
    QSlider *horizontalSlider_width_22;
    QLabel *width_label_3;
    QSpinBox *spinBox_width_22;
    QFrame *ExposureTimeMicroSecond;
    QLabel *label_28;
    QSlider *horizontalSlider_width_23;
    QLabel *width_label_7;
    QSpinBox *spinBox_width_23;
    QFrame *ExposureTimeMicroSecond_2;
    QLabel *label_29;
    QSlider *horizontalSlider_width_24;
    QLabel *width_label_8;
    QSpinBox *spinBox_width_24;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1922, 646);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(9, 10, 1891, 331));
        Camera = new QVBoxLayout(verticalLayoutWidget);
        Camera->setObjectName("Camera");
        Camera->setContentsMargins(0, 0, 0, 0);
        CameraFrame = new QLabel(verticalLayoutWidget);
        CameraFrame->setObjectName("CameraFrame");

        Camera->addWidget(CameraFrame);

        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(10, 350, 621, 241));
        AnalogControl = new QVBoxLayout(verticalLayoutWidget_2);
        AnalogControl->setObjectName("AnalogControl");
        AnalogControl->setContentsMargins(0, 0, 0, 0);
        AnalogParameters = new QWidget(verticalLayoutWidget_2);
        AnalogParameters->setObjectName("AnalogParameters");
        AnalogParameters->setMinimumSize(QSize(659, 0));
        label = new QLabel(AnalogParameters);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 0, 121, 31));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        label->setFont(font);
        GainRaw = new QFrame(AnalogParameters);
        GainRaw->setObjectName("GainRaw");
        GainRaw->setGeometry(QRect(0, 40, 601, 31));
        GainRaw->setFrameShape(QFrame::Shape::StyledPanel);
        GainRaw->setFrameShadow(QFrame::Shadow::Raised);
        label_2 = new QLabel(GainRaw);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 0, 91, 31));
        horizontalSlider_width = new QSlider(GainRaw);
        horizontalSlider_width->setObjectName("horizontalSlider_width");
        horizontalSlider_width->setGeometry(QRect(110, 10, 311, 16));
        horizontalSlider_width->setMinimum(192);
        horizontalSlider_width->setMaximum(1023);
        horizontalSlider_width->setOrientation(Qt::Orientation::Horizontal);
        width_label = new QLabel(GainRaw);
        width_label->setObjectName("width_label");
        width_label->setGeometry(QRect(540, -1, 51, 31));
        spinBox_width = new QSpinBox(GainRaw);
        spinBox_width->setObjectName("spinBox_width");
        spinBox_width->setGeometry(QRect(430, 0, 91, 31));
        spinBox_width->setMinimum(192);
        spinBox_width->setMaximum(1023);
        GainDb = new QFrame(AnalogParameters);
        GainDb->setObjectName("GainDb");
        GainDb->setGeometry(QRect(0, 80, 601, 31));
        GainDb->setFrameShape(QFrame::Shape::StyledPanel);
        GainDb->setFrameShadow(QFrame::Shadow::Raised);
        label_5 = new QLabel(GainDb);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 0, 91, 31));
        horizontalSlider_width_4 = new QSlider(GainDb);
        horizontalSlider_width_4->setObjectName("horizontalSlider_width_4");
        horizontalSlider_width_4->setGeometry(QRect(110, 10, 311, 16));
        horizontalSlider_width_4->setMinimum(0);
        horizontalSlider_width_4->setMaximum(48);
        horizontalSlider_width_4->setOrientation(Qt::Orientation::Horizontal);
        width_label_4 = new QLabel(GainDb);
        width_label_4->setObjectName("width_label_4");
        width_label_4->setGeometry(QRect(540, -1, 51, 31));
        spinBox_width_4 = new QSpinBox(GainDb);
        spinBox_width_4->setObjectName("spinBox_width_4");
        spinBox_width_4->setGeometry(QRect(430, 0, 91, 31));
        spinBox_width_4->setMinimum(0);
        spinBox_width_4->setMaximum(48);
        BlackLevel = new QFrame(AnalogParameters);
        BlackLevel->setObjectName("BlackLevel");
        BlackLevel->setGeometry(QRect(0, 120, 601, 31));
        BlackLevel->setFrameShape(QFrame::Shape::StyledPanel);
        BlackLevel->setFrameShadow(QFrame::Shadow::Raised);
        label_7 = new QLabel(BlackLevel);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(10, 0, 91, 31));
        horizontalSlider_width_6 = new QSlider(BlackLevel);
        horizontalSlider_width_6->setObjectName("horizontalSlider_width_6");
        horizontalSlider_width_6->setGeometry(QRect(110, 10, 311, 16));
        horizontalSlider_width_6->setMinimum(0);
        horizontalSlider_width_6->setMaximum(1023);
        horizontalSlider_width_6->setOrientation(Qt::Orientation::Horizontal);
        width_label_6 = new QLabel(BlackLevel);
        width_label_6->setObjectName("width_label_6");
        width_label_6->setGeometry(QRect(540, -1, 51, 31));
        spinBox_width_6 = new QSpinBox(BlackLevel);
        spinBox_width_6->setObjectName("spinBox_width_6");
        spinBox_width_6->setGeometry(QRect(430, 0, 91, 31));
        spinBox_width_6->setMinimum(0);
        spinBox_width_6->setMaximum(1023);
        Gamma = new QFrame(AnalogParameters);
        Gamma->setObjectName("Gamma");
        Gamma->setGeometry(QRect(0, 160, 601, 31));
        Gamma->setFrameShape(QFrame::Shape::StyledPanel);
        Gamma->setFrameShadow(QFrame::Shadow::Raised);
        label_8 = new QLabel(Gamma);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(10, 0, 91, 31));
        horizontalSlider_width_7 = new QSlider(Gamma);
        horizontalSlider_width_7->setObjectName("horizontalSlider_width_7");
        horizontalSlider_width_7->setGeometry(QRect(110, 10, 311, 16));
        horizontalSlider_width_7->setMinimum(0);
        horizontalSlider_width_7->setMaximum(4);
        horizontalSlider_width_7->setValue(1);
        horizontalSlider_width_7->setOrientation(Qt::Orientation::Horizontal);
        spinBox_width_7 = new QSpinBox(Gamma);
        spinBox_width_7->setObjectName("spinBox_width_7");
        spinBox_width_7->setGeometry(QRect(430, 0, 91, 31));
        spinBox_width_7->setMinimum(0);
        spinBox_width_7->setMaximum(4);
        spinBox_width_7->setValue(1);
        DigitalShift = new QFrame(AnalogParameters);
        DigitalShift->setObjectName("DigitalShift");
        DigitalShift->setGeometry(QRect(0, 200, 601, 31));
        DigitalShift->setFrameShape(QFrame::Shape::StyledPanel);
        DigitalShift->setFrameShadow(QFrame::Shadow::Raised);
        label_10 = new QLabel(DigitalShift);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(10, 0, 91, 31));
        horizontalSlider_width_9 = new QSlider(DigitalShift);
        horizontalSlider_width_9->setObjectName("horizontalSlider_width_9");
        horizontalSlider_width_9->setGeometry(QRect(110, 10, 311, 16));
        horizontalSlider_width_9->setMinimum(0);
        horizontalSlider_width_9->setMaximum(4);
        horizontalSlider_width_9->setValue(0);
        horizontalSlider_width_9->setOrientation(Qt::Orientation::Horizontal);
        spinBox_width_9 = new QSpinBox(DigitalShift);
        spinBox_width_9->setObjectName("spinBox_width_9");
        spinBox_width_9->setGeometry(QRect(430, 0, 91, 31));
        spinBox_width_9->setMinimum(0);
        spinBox_width_9->setMaximum(4);
        spinBox_width_9->setValue(0);

        AnalogControl->addWidget(AnalogParameters);

        verticalLayoutWidget_3 = new QWidget(centralwidget);
        verticalLayoutWidget_3->setObjectName("verticalLayoutWidget_3");
        verticalLayoutWidget_3->setGeometry(QRect(1240, 350, 661, 241));
        ImageFormatControl = new QVBoxLayout(verticalLayoutWidget_3);
        ImageFormatControl->setObjectName("ImageFormatControl");
        ImageFormatControl->setContentsMargins(0, 0, 0, 0);
        ImageFormatControl_2 = new QWidget(verticalLayoutWidget_3);
        ImageFormatControl_2->setObjectName("ImageFormatControl_2");
        ImageFormatControl_2->setMinimumSize(QSize(659, 0));
        label_4 = new QLabel(ImageFormatControl_2);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 0, 171, 31));
        label_4->setFont(font);
        Width = new QFrame(ImageFormatControl_2);
        Width->setObjectName("Width");
        Width->setGeometry(QRect(0, 40, 531, 31));
        Width->setFrameShape(QFrame::Shape::StyledPanel);
        Width->setFrameShadow(QFrame::Shadow::Raised);
        label_11 = new QLabel(Width);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(10, 0, 91, 31));
        horizontalSlider_width_3 = new QSlider(Width);
        horizontalSlider_width_3->setObjectName("horizontalSlider_width_3");
        horizontalSlider_width_3->setGeometry(QRect(110, 10, 311, 16));
        horizontalSlider_width_3->setMinimum(1);
        horizontalSlider_width_3->setMaximum(4096);
        horizontalSlider_width_3->setValue(1024);
        horizontalSlider_width_3->setOrientation(Qt::Orientation::Horizontal);
        spinBox_width_3 = new QSpinBox(Width);
        spinBox_width_3->setObjectName("spinBox_width_3");
        spinBox_width_3->setGeometry(QRect(430, 0, 91, 31));
        spinBox_width_3->setMinimum(1);
        spinBox_width_3->setMaximum(4096);
        spinBox_width_3->setValue(1024);
        Height = new QFrame(ImageFormatControl_2);
        Height->setObjectName("Height");
        Height->setGeometry(QRect(0, 80, 531, 31));
        Height->setFrameShape(QFrame::Shape::StyledPanel);
        Height->setFrameShadow(QFrame::Shadow::Raised);
        label_12 = new QLabel(Height);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(10, 0, 91, 31));
        horizontalSlider_width_10 = new QSlider(Height);
        horizontalSlider_width_10->setObjectName("horizontalSlider_width_10");
        horizontalSlider_width_10->setGeometry(QRect(110, 10, 311, 16));
        horizontalSlider_width_10->setMinimum(1);
        horizontalSlider_width_10->setMaximum(4096);
        horizontalSlider_width_10->setValue(1024);
        horizontalSlider_width_10->setOrientation(Qt::Orientation::Horizontal);
        spinBox_width_10 = new QSpinBox(Height);
        spinBox_width_10->setObjectName("spinBox_width_10");
        spinBox_width_10->setGeometry(QRect(430, 0, 91, 31));
        spinBox_width_10->setMinimum(1);
        spinBox_width_10->setMaximum(4096);
        spinBox_width_10->setValue(1024);
        OffsetX = new QFrame(ImageFormatControl_2);
        OffsetX->setObjectName("OffsetX");
        OffsetX->setGeometry(QRect(0, 120, 531, 31));
        OffsetX->setFrameShape(QFrame::Shape::StyledPanel);
        OffsetX->setFrameShadow(QFrame::Shadow::Raised);
        label_14 = new QLabel(OffsetX);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(10, 0, 91, 31));
        horizontalSlider_width_12 = new QSlider(OffsetX);
        horizontalSlider_width_12->setObjectName("horizontalSlider_width_12");
        horizontalSlider_width_12->setGeometry(QRect(110, 10, 311, 16));
        horizontalSlider_width_12->setMinimum(0);
        horizontalSlider_width_12->setMaximum(3072);
        horizontalSlider_width_12->setValue(0);
        horizontalSlider_width_12->setOrientation(Qt::Orientation::Horizontal);
        spinBox_width_12 = new QSpinBox(OffsetX);
        spinBox_width_12->setObjectName("spinBox_width_12");
        spinBox_width_12->setGeometry(QRect(430, 0, 91, 31));
        spinBox_width_12->setMinimum(0);
        spinBox_width_12->setMaximum(3072);
        spinBox_width_12->setValue(0);
        OffsetY = new QFrame(ImageFormatControl_2);
        OffsetY->setObjectName("OffsetY");
        OffsetY->setGeometry(QRect(0, 160, 531, 31));
        OffsetY->setFrameShape(QFrame::Shape::StyledPanel);
        OffsetY->setFrameShadow(QFrame::Shadow::Raised);
        label_15 = new QLabel(OffsetY);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(10, 0, 91, 31));
        horizontalSlider_width_13 = new QSlider(OffsetY);
        horizontalSlider_width_13->setObjectName("horizontalSlider_width_13");
        horizontalSlider_width_13->setGeometry(QRect(110, 10, 311, 16));
        horizontalSlider_width_13->setMinimum(0);
        horizontalSlider_width_13->setMaximum(3072);
        horizontalSlider_width_13->setValue(0);
        horizontalSlider_width_13->setOrientation(Qt::Orientation::Horizontal);
        spinBox_width_13 = new QSpinBox(OffsetY);
        spinBox_width_13->setObjectName("spinBox_width_13");
        spinBox_width_13->setGeometry(QRect(430, 0, 91, 31));
        spinBox_width_13->setMinimum(0);
        spinBox_width_13->setMaximum(3072);
        spinBox_width_13->setValue(0);

        ImageFormatControl->addWidget(ImageFormatControl_2);

        verticalLayoutWidget_4 = new QWidget(centralwidget);
        verticalLayoutWidget_4->setObjectName("verticalLayoutWidget_4");
        verticalLayoutWidget_4->setGeometry(QRect(640, 350, 591, 241));
        AcquisitionControl = new QVBoxLayout(verticalLayoutWidget_4);
        AcquisitionControl->setObjectName("AcquisitionControl");
        AcquisitionControl->setContentsMargins(0, 0, 0, 0);
        AcquisitionControl_2 = new QWidget(verticalLayoutWidget_4);
        AcquisitionControl_2->setObjectName("AcquisitionControl_2");
        AcquisitionControl_2->setMinimumSize(QSize(659, 0));
        label_26 = new QLabel(AcquisitionControl_2);
        label_26->setObjectName("label_26");
        label_26->setGeometry(QRect(10, 0, 141, 31));
        label_26->setFont(font);
        ExposureTimeAbs = new QFrame(AcquisitionControl_2);
        ExposureTimeAbs->setObjectName("ExposureTimeAbs");
        ExposureTimeAbs->setGeometry(QRect(0, 40, 581, 31));
        ExposureTimeAbs->setFrameShape(QFrame::Shape::StyledPanel);
        ExposureTimeAbs->setFrameShadow(QFrame::Shadow::Raised);
        label_27 = new QLabel(ExposureTimeAbs);
        label_27->setObjectName("label_27");
        label_27->setGeometry(QRect(10, 0, 111, 31));
        horizontalSlider_width_22 = new QSlider(ExposureTimeAbs);
        horizontalSlider_width_22->setObjectName("horizontalSlider_width_22");
        horizontalSlider_width_22->setGeometry(QRect(160, 10, 261, 20));
        horizontalSlider_width_22->setMinimum(100);
        horizontalSlider_width_22->setMaximum(3000000);
        horizontalSlider_width_22->setValue(1000);
        horizontalSlider_width_22->setOrientation(Qt::Orientation::Horizontal);
        width_label_3 = new QLabel(ExposureTimeAbs);
        width_label_3->setObjectName("width_label_3");
        width_label_3->setGeometry(QRect(540, -1, 51, 31));
        spinBox_width_22 = new QSpinBox(ExposureTimeAbs);
        spinBox_width_22->setObjectName("spinBox_width_22");
        spinBox_width_22->setGeometry(QRect(430, 0, 91, 31));
        spinBox_width_22->setMinimum(0);
        spinBox_width_22->setMaximum(3000000);
        spinBox_width_22->setValue(100);
        ExposureTimeMicroSecond = new QFrame(AcquisitionControl_2);
        ExposureTimeMicroSecond->setObjectName("ExposureTimeMicroSecond");
        ExposureTimeMicroSecond->setGeometry(QRect(0, 80, 581, 31));
        ExposureTimeMicroSecond->setFrameShape(QFrame::Shape::StyledPanel);
        ExposureTimeMicroSecond->setFrameShadow(QFrame::Shadow::Raised);
        label_28 = new QLabel(ExposureTimeMicroSecond);
        label_28->setObjectName("label_28");
        label_28->setGeometry(QRect(10, 0, 111, 31));
        horizontalSlider_width_23 = new QSlider(ExposureTimeMicroSecond);
        horizontalSlider_width_23->setObjectName("horizontalSlider_width_23");
        horizontalSlider_width_23->setGeometry(QRect(160, 10, 261, 20));
        horizontalSlider_width_23->setMinimum(1000);
        horizontalSlider_width_23->setMaximum(1000000);
        horizontalSlider_width_23->setValue(1000);
        horizontalSlider_width_23->setOrientation(Qt::Orientation::Horizontal);
        width_label_7 = new QLabel(ExposureTimeMicroSecond);
        width_label_7->setObjectName("width_label_7");
        width_label_7->setGeometry(QRect(540, -1, 51, 31));
        spinBox_width_23 = new QSpinBox(ExposureTimeMicroSecond);
        spinBox_width_23->setObjectName("spinBox_width_23");
        spinBox_width_23->setGeometry(QRect(430, 0, 91, 31));
        spinBox_width_23->setMinimum(0);
        spinBox_width_23->setMaximum(3000000);
        spinBox_width_23->setValue(100);
        ExposureTimeMicroSecond_2 = new QFrame(AcquisitionControl_2);
        ExposureTimeMicroSecond_2->setObjectName("ExposureTimeMicroSecond_2");
        ExposureTimeMicroSecond_2->setGeometry(QRect(0, 120, 581, 31));
        ExposureTimeMicroSecond_2->setFrameShape(QFrame::Shape::StyledPanel);
        ExposureTimeMicroSecond_2->setFrameShadow(QFrame::Shadow::Raised);
        label_29 = new QLabel(ExposureTimeMicroSecond_2);
        label_29->setObjectName("label_29");
        label_29->setGeometry(QRect(10, 0, 141, 31));
        QFont font1;
        font1.setPointSize(8);
        label_29->setFont(font1);
        horizontalSlider_width_24 = new QSlider(ExposureTimeMicroSecond_2);
        horizontalSlider_width_24->setObjectName("horizontalSlider_width_24");
        horizontalSlider_width_24->setGeometry(QRect(160, 10, 241, 20));
        horizontalSlider_width_24->setMinimum(0);
        horizontalSlider_width_24->setMaximum(5000);
        horizontalSlider_width_24->setValue(100);
        horizontalSlider_width_24->setOrientation(Qt::Orientation::Horizontal);
        width_label_8 = new QLabel(ExposureTimeMicroSecond_2);
        width_label_8->setObjectName("width_label_8");
        width_label_8->setGeometry(QRect(540, -1, 41, 31));
        spinBox_width_24 = new QSpinBox(ExposureTimeMicroSecond_2);
        spinBox_width_24->setObjectName("spinBox_width_24");
        spinBox_width_24->setGeometry(QRect(430, 0, 91, 31));
        spinBox_width_24->setMinimum(0);
        spinBox_width_24->setMaximum(5000);
        spinBox_width_24->setValue(100);

        AcquisitionControl->addWidget(AcquisitionControl_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1922, 22));
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
        CameraFrame->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "Analog Control", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Gain (Raw)", nullptr));
        width_label->setText(QCoreApplication::translate("MainWindow", "Raw", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Gain (Db)", nullptr));
        width_label_4->setText(QCoreApplication::translate("MainWindow", "Db", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Black Level (DN)", nullptr));
        width_label_6->setText(QCoreApplication::translate("MainWindow", "DN", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Gamma", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Digital Shift", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Image Format Control", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Width", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Height", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "OffsetX", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "OffsetY", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindow", "Acquisition Control", nullptr));
        label_27->setText(QCoreApplication::translate("MainWindow", "Exposure Time (Raw)", nullptr));
        width_label_3->setText(QCoreApplication::translate("MainWindow", "Raw", nullptr));
        label_28->setText(QCoreApplication::translate("MainWindow", "Exposure Time (us) ", nullptr));
        width_label_7->setText(QCoreApplication::translate("MainWindow", "us", nullptr));
        label_29->setText(QCoreApplication::translate("MainWindow", "Acquisition Frame Rate (Hz)", nullptr));
        width_label_8->setText(QCoreApplication::translate("MainWindow", "Hz", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
