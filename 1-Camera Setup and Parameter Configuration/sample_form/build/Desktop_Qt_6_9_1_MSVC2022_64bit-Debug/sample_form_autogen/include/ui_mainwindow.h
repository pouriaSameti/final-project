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
#include <QtWidgets/QDoubleSpinBox>
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
    QSlider *horizontalSlider_gain_raw;
    QLabel *gain_raw_label;
    QSpinBox *spinBox_gain_raw;
    QFrame *GainDb;
    QLabel *label_5;
    QSlider *horizontalSlider_gain_db;
    QLabel *gain_db_label;
    QDoubleSpinBox *doubleSpinBox_gain_db;
    QFrame *BlackLevel;
    QLabel *label_7;
    QSlider *horizontalSlider_black_level;
    QLabel *black_level_label;
    QSpinBox *spinBox_black_level;
    QFrame *Gamma;
    QLabel *label_8;
    QSlider *horizontalSlider_gamma;
    QLabel *gamma_label;
    QDoubleSpinBox *doubleSpinBox_gamma;
    QFrame *DigitalShift;
    QLabel *label_10;
    QSlider *horizontalSlider_digital_shift;
    QSpinBox *spinBox_digital_shift;
    QLabel *digital_shift_label;
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
    QSlider *horizontalSlider_exposure_time_raw;
    QLabel *exposure_time_raw_label;
    QSpinBox *spinBox_exposure_time_raw;
    QFrame *ExposureTimeMicroSecond;
    QLabel *label_28;
    QSlider *horizontalSlider_exposure_time_us;
    QLabel *exposure_time_us_label;
    QSpinBox *spinBox_exposure_time_us;
    QFrame *ExposureTimeMicroSecond_2;
    QLabel *label_29;
    QSlider *horizontalSlider_acq_frame_rate;
    QLabel *acq_frame_rate_label;
    QDoubleSpinBox *doubleSpinBox_acq_frame_rate;
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
        verticalLayoutWidget_2->setGeometry(QRect(10, 350, 661, 241));
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
        horizontalSlider_gain_raw = new QSlider(GainRaw);
        horizontalSlider_gain_raw->setObjectName("horizontalSlider_gain_raw");
        horizontalSlider_gain_raw->setGeometry(QRect(110, 10, 311, 16));
        horizontalSlider_gain_raw->setMinimum(192);
        horizontalSlider_gain_raw->setMaximum(1023);
        horizontalSlider_gain_raw->setOrientation(Qt::Orientation::Horizontal);
        gain_raw_label = new QLabel(GainRaw);
        gain_raw_label->setObjectName("gain_raw_label");
        gain_raw_label->setGeometry(QRect(540, -1, 51, 31));
        spinBox_gain_raw = new QSpinBox(GainRaw);
        spinBox_gain_raw->setObjectName("spinBox_gain_raw");
        spinBox_gain_raw->setGeometry(QRect(430, 0, 91, 31));
        QFont font1;
        font1.setKerning(true);
        spinBox_gain_raw->setFont(font1);
        spinBox_gain_raw->setFrame(false);
        spinBox_gain_raw->setMinimum(192);
        spinBox_gain_raw->setMaximum(1023);
        GainDb = new QFrame(AnalogParameters);
        GainDb->setObjectName("GainDb");
        GainDb->setGeometry(QRect(0, 80, 601, 31));
        GainDb->setFrameShape(QFrame::Shape::StyledPanel);
        GainDb->setFrameShadow(QFrame::Shadow::Raised);
        label_5 = new QLabel(GainDb);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 0, 91, 31));
        horizontalSlider_gain_db = new QSlider(GainDb);
        horizontalSlider_gain_db->setObjectName("horizontalSlider_gain_db");
        horizontalSlider_gain_db->setGeometry(QRect(110, 10, 311, 16));
        horizontalSlider_gain_db->setMinimum(0);
        horizontalSlider_gain_db->setMaximum(48000);
        horizontalSlider_gain_db->setOrientation(Qt::Orientation::Horizontal);
        gain_db_label = new QLabel(GainDb);
        gain_db_label->setObjectName("gain_db_label");
        gain_db_label->setGeometry(QRect(540, -1, 51, 31));
        doubleSpinBox_gain_db = new QDoubleSpinBox(GainDb);
        doubleSpinBox_gain_db->setObjectName("doubleSpinBox_gain_db");
        doubleSpinBox_gain_db->setGeometry(QRect(430, 0, 91, 31));
        doubleSpinBox_gain_db->setFrame(false);
        doubleSpinBox_gain_db->setDecimals(3);
        doubleSpinBox_gain_db->setMaximum(48.000000000000000);
        doubleSpinBox_gain_db->setSingleStep(0.001000000000000);
        doubleSpinBox_gain_db->setValue(0.000000000000000);
        BlackLevel = new QFrame(AnalogParameters);
        BlackLevel->setObjectName("BlackLevel");
        BlackLevel->setGeometry(QRect(0, 120, 601, 31));
        BlackLevel->setFrameShape(QFrame::Shape::StyledPanel);
        BlackLevel->setFrameShadow(QFrame::Shadow::Raised);
        label_7 = new QLabel(BlackLevel);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(10, 0, 91, 31));
        horizontalSlider_black_level = new QSlider(BlackLevel);
        horizontalSlider_black_level->setObjectName("horizontalSlider_black_level");
        horizontalSlider_black_level->setGeometry(QRect(110, 10, 311, 16));
        horizontalSlider_black_level->setMinimum(0);
        horizontalSlider_black_level->setMaximum(1023);
        horizontalSlider_black_level->setOrientation(Qt::Orientation::Horizontal);
        black_level_label = new QLabel(BlackLevel);
        black_level_label->setObjectName("black_level_label");
        black_level_label->setGeometry(QRect(540, -1, 51, 31));
        spinBox_black_level = new QSpinBox(BlackLevel);
        spinBox_black_level->setObjectName("spinBox_black_level");
        spinBox_black_level->setGeometry(QRect(430, 0, 91, 31));
        spinBox_black_level->setFrame(false);
        spinBox_black_level->setMinimum(0);
        spinBox_black_level->setMaximum(1023);
        Gamma = new QFrame(AnalogParameters);
        Gamma->setObjectName("Gamma");
        Gamma->setGeometry(QRect(0, 160, 601, 31));
        Gamma->setFrameShape(QFrame::Shape::StyledPanel);
        Gamma->setFrameShadow(QFrame::Shadow::Raised);
        label_8 = new QLabel(Gamma);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(10, 0, 91, 31));
        horizontalSlider_gamma = new QSlider(Gamma);
        horizontalSlider_gamma->setObjectName("horizontalSlider_gamma");
        horizontalSlider_gamma->setGeometry(QRect(110, 10, 311, 16));
        horizontalSlider_gamma->setMinimum(0);
        horizontalSlider_gamma->setMaximum(800);
        horizontalSlider_gamma->setValue(1);
        horizontalSlider_gamma->setOrientation(Qt::Orientation::Horizontal);
        gamma_label = new QLabel(Gamma);
        gamma_label->setObjectName("gamma_label");
        gamma_label->setGeometry(QRect(540, 0, 51, 31));
        doubleSpinBox_gamma = new QDoubleSpinBox(Gamma);
        doubleSpinBox_gamma->setObjectName("doubleSpinBox_gamma");
        doubleSpinBox_gamma->setGeometry(QRect(431, 0, 91, 31));
        doubleSpinBox_gamma->setFrame(false);
        doubleSpinBox_gamma->setDecimals(3);
        doubleSpinBox_gamma->setMaximum(4.000000000000000);
        doubleSpinBox_gamma->setSingleStep(0.001000000000000);
        DigitalShift = new QFrame(AnalogParameters);
        DigitalShift->setObjectName("DigitalShift");
        DigitalShift->setGeometry(QRect(0, 200, 601, 31));
        DigitalShift->setFrameShape(QFrame::Shape::StyledPanel);
        DigitalShift->setFrameShadow(QFrame::Shadow::Raised);
        label_10 = new QLabel(DigitalShift);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(10, 0, 91, 31));
        horizontalSlider_digital_shift = new QSlider(DigitalShift);
        horizontalSlider_digital_shift->setObjectName("horizontalSlider_digital_shift");
        horizontalSlider_digital_shift->setGeometry(QRect(110, 10, 311, 16));
        horizontalSlider_digital_shift->setMinimum(0);
        horizontalSlider_digital_shift->setMaximum(4);
        horizontalSlider_digital_shift->setValue(0);
        horizontalSlider_digital_shift->setOrientation(Qt::Orientation::Horizontal);
        spinBox_digital_shift = new QSpinBox(DigitalShift);
        spinBox_digital_shift->setObjectName("spinBox_digital_shift");
        spinBox_digital_shift->setGeometry(QRect(430, 0, 91, 31));
        spinBox_digital_shift->setFrame(false);
        spinBox_digital_shift->setMinimum(0);
        spinBox_digital_shift->setMaximum(4);
        spinBox_digital_shift->setValue(0);
        digital_shift_label = new QLabel(DigitalShift);
        digital_shift_label->setObjectName("digital_shift_label");
        digital_shift_label->setGeometry(QRect(540, 0, 51, 31));

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
        spinBox_width_3->setFrame(false);
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
        spinBox_width_10->setFrame(false);
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
        spinBox_width_12->setFrame(false);
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
        spinBox_width_13->setFrame(false);
        spinBox_width_13->setMinimum(0);
        spinBox_width_13->setMaximum(3072);
        spinBox_width_13->setValue(0);

        ImageFormatControl->addWidget(ImageFormatControl_2);

        verticalLayoutWidget_4 = new QWidget(centralwidget);
        verticalLayoutWidget_4->setObjectName("verticalLayoutWidget_4");
        verticalLayoutWidget_4->setGeometry(QRect(640, 350, 661, 241));
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
        ExposureTimeAbs->setGeometry(QRect(0, 40, 591, 31));
        ExposureTimeAbs->setFrameShape(QFrame::Shape::StyledPanel);
        ExposureTimeAbs->setFrameShadow(QFrame::Shadow::Raised);
        label_27 = new QLabel(ExposureTimeAbs);
        label_27->setObjectName("label_27");
        label_27->setGeometry(QRect(10, 0, 111, 31));
        horizontalSlider_exposure_time_raw = new QSlider(ExposureTimeAbs);
        horizontalSlider_exposure_time_raw->setObjectName("horizontalSlider_exposure_time_raw");
        horizontalSlider_exposure_time_raw->setGeometry(QRect(160, 10, 261, 20));
        horizontalSlider_exposure_time_raw->setMinimum(100);
        horizontalSlider_exposure_time_raw->setMaximum(3000000);
        horizontalSlider_exposure_time_raw->setValue(10000);
        horizontalSlider_exposure_time_raw->setOrientation(Qt::Orientation::Horizontal);
        exposure_time_raw_label = new QLabel(ExposureTimeAbs);
        exposure_time_raw_label->setObjectName("exposure_time_raw_label");
        exposure_time_raw_label->setGeometry(QRect(540, -1, 51, 31));
        spinBox_exposure_time_raw = new QSpinBox(ExposureTimeAbs);
        spinBox_exposure_time_raw->setObjectName("spinBox_exposure_time_raw");
        spinBox_exposure_time_raw->setGeometry(QRect(430, 0, 91, 31));
        spinBox_exposure_time_raw->setFrame(false);
        spinBox_exposure_time_raw->setMinimum(0);
        spinBox_exposure_time_raw->setMaximum(3000000);
        spinBox_exposure_time_raw->setValue(10000);
        ExposureTimeMicroSecond = new QFrame(AcquisitionControl_2);
        ExposureTimeMicroSecond->setObjectName("ExposureTimeMicroSecond");
        ExposureTimeMicroSecond->setGeometry(QRect(0, 80, 591, 31));
        ExposureTimeMicroSecond->setFrameShape(QFrame::Shape::StyledPanel);
        ExposureTimeMicroSecond->setFrameShadow(QFrame::Shadow::Raised);
        label_28 = new QLabel(ExposureTimeMicroSecond);
        label_28->setObjectName("label_28");
        label_28->setGeometry(QRect(10, 0, 111, 31));
        horizontalSlider_exposure_time_us = new QSlider(ExposureTimeMicroSecond);
        horizontalSlider_exposure_time_us->setObjectName("horizontalSlider_exposure_time_us");
        horizontalSlider_exposure_time_us->setGeometry(QRect(160, 10, 261, 20));
        horizontalSlider_exposure_time_us->setMinimum(1);
        horizontalSlider_exposure_time_us->setMaximum(10000000);
        horizontalSlider_exposure_time_us->setValue(1000);
        horizontalSlider_exposure_time_us->setOrientation(Qt::Orientation::Horizontal);
        exposure_time_us_label = new QLabel(ExposureTimeMicroSecond);
        exposure_time_us_label->setObjectName("exposure_time_us_label");
        exposure_time_us_label->setGeometry(QRect(540, -1, 51, 31));
        spinBox_exposure_time_us = new QSpinBox(ExposureTimeMicroSecond);
        spinBox_exposure_time_us->setObjectName("spinBox_exposure_time_us");
        spinBox_exposure_time_us->setGeometry(QRect(430, 0, 91, 31));
        spinBox_exposure_time_us->setFrame(false);
        spinBox_exposure_time_us->setMinimum(1);
        spinBox_exposure_time_us->setMaximum(10000000);
        spinBox_exposure_time_us->setValue(10000);
        ExposureTimeMicroSecond_2 = new QFrame(AcquisitionControl_2);
        ExposureTimeMicroSecond_2->setObjectName("ExposureTimeMicroSecond_2");
        ExposureTimeMicroSecond_2->setGeometry(QRect(0, 120, 591, 31));
        ExposureTimeMicroSecond_2->setFrameShape(QFrame::Shape::StyledPanel);
        ExposureTimeMicroSecond_2->setFrameShadow(QFrame::Shadow::Raised);
        label_29 = new QLabel(ExposureTimeMicroSecond_2);
        label_29->setObjectName("label_29");
        label_29->setGeometry(QRect(10, 0, 141, 31));
        QFont font2;
        font2.setPointSize(8);
        label_29->setFont(font2);
        horizontalSlider_acq_frame_rate = new QSlider(ExposureTimeMicroSecond_2);
        horizontalSlider_acq_frame_rate->setObjectName("horizontalSlider_acq_frame_rate");
        horizontalSlider_acq_frame_rate->setGeometry(QRect(160, 10, 241, 20));
        horizontalSlider_acq_frame_rate->setMinimum(1);
        horizontalSlider_acq_frame_rate->setMaximum(500000);
        horizontalSlider_acq_frame_rate->setValue(10000);
        horizontalSlider_acq_frame_rate->setOrientation(Qt::Orientation::Horizontal);
        acq_frame_rate_label = new QLabel(ExposureTimeMicroSecond_2);
        acq_frame_rate_label->setObjectName("acq_frame_rate_label");
        acq_frame_rate_label->setGeometry(QRect(540, -1, 51, 31));
        doubleSpinBox_acq_frame_rate = new QDoubleSpinBox(ExposureTimeMicroSecond_2);
        doubleSpinBox_acq_frame_rate->setObjectName("doubleSpinBox_acq_frame_rate");
        doubleSpinBox_acq_frame_rate->setGeometry(QRect(430, 0, 91, 31));
        doubleSpinBox_acq_frame_rate->setFrame(false);
        doubleSpinBox_acq_frame_rate->setMinimum(0.010000000000000);
        doubleSpinBox_acq_frame_rate->setMaximum(5000.000000000000000);
        doubleSpinBox_acq_frame_rate->setSingleStep(0.010000000000000);
        doubleSpinBox_acq_frame_rate->setValue(100.000000000000000);

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
        gain_raw_label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Gain (Db)", nullptr));
        gain_db_label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Black Level (DN)", nullptr));
        black_level_label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Gamma", nullptr));
        gamma_label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Digital Shift", nullptr));
        digital_shift_label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Image Format Control", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Width", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Height", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "OffsetX", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "OffsetY", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindow", "Acquisition Control", nullptr));
        label_27->setText(QCoreApplication::translate("MainWindow", "Exposure Time (Raw)", nullptr));
        exposure_time_raw_label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_28->setText(QCoreApplication::translate("MainWindow", "Exposure Time (us) ", nullptr));
        exposure_time_us_label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_29->setText(QCoreApplication::translate("MainWindow", "Acquisition Frame Rate (Hz)", nullptr));
        acq_frame_rate_label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
