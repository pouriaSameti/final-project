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
#include <QtWidgets/QHBoxLayout>
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
    QWidget *verticalWidget_2;
    QVBoxLayout *AnalogControl;
    QLabel *Text_AnalogControl;
    QFrame *DigitalShift;
    QLabel *label_10;
    QSlider *horizontalSlider_digital_shift;
    QSpinBox *spinBox_digital_shift;
    QLabel *digital_shift_label;
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
    QFrame *Gamma;
    QLabel *label_8;
    QSlider *horizontalSlider_gamma;
    QLabel *gamma_label;
    QDoubleSpinBox *doubleSpinBox_gamma;
    QFrame *BlackLevel;
    QLabel *label_7;
    QSlider *horizontalSlider_black_level;
    QLabel *black_level_label;
    QSpinBox *spinBox_black_level;
    QWidget *verticalWidget_3;
    QVBoxLayout *ImageFormatControl;
    QLabel *Text_img_format_control;
    QFrame *OffsetX;
    QLabel *label_14;
    QSlider *horizontalSlider_offsetX;
    QSpinBox *spinBox_offsetX;
    QLabel *offsetX_label;
    QFrame *Height;
    QLabel *label_12;
    QSlider *horizontalSlider_height;
    QSpinBox *spinBox_height;
    QLabel *height_label;
    QFrame *Width;
    QLabel *label_11;
    QSlider *horizontalSlider_width;
    QSpinBox *spinBox_width;
    QLabel *width_label;
    QFrame *OffsetY;
    QLabel *label_15;
    QSlider *horizontalSlider_offsetY;
    QSpinBox *spinBox_offsetY;
    QLabel *offsetY_label;
    QFrame *optionalBox2_2;
    QLabel *label_17;
    QWidget *verticalWidget_4;
    QVBoxLayout *AcquisitionControl;
    QLabel *Text_AcquisitionControl;
    QFrame *ExposureTimeMicroSecond;
    QLabel *label_28;
    QSlider *horizontalSlider_exposure_time_us;
    QLabel *exposure_time_us_label;
    QSpinBox *spinBox_exposure_time_us;
    QFrame *ExposureTimeAbs;
    QLabel *label_27;
    QSlider *horizontalSlider_exposure_time_raw;
    QLabel *exposure_time_raw_label;
    QSpinBox *spinBox_exposure_time_raw;
    QFrame *ExposureTimeMicroSecond_2;
    QLabel *label_29;
    QSlider *horizontalSlider_acq_frame_rate;
    QLabel *acq_frame_rate_label;
    QDoubleSpinBox *doubleSpinBox_acq_frame_rate;
    QFrame *optionalBox1;
    QLabel *label_13;
    QFrame *optionalBox2;
    QLabel *label_16;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *CameraInfo;
    QLabel *label_3;
    QLabel *camera_name_label;
    QLabel *label;
    QLabel *connection_status_label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1866, 710);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(10, 60, 1841, 331));
        Camera = new QVBoxLayout(verticalLayoutWidget);
        Camera->setObjectName("Camera");
        Camera->setContentsMargins(0, 0, 0, 0);
        verticalWidget_2 = new QWidget(centralwidget);
        verticalWidget_2->setObjectName("verticalWidget_2");
        verticalWidget_2->setGeometry(QRect(10, 400, 621, 241));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush);
        verticalWidget_2->setPalette(palette);
        AnalogControl = new QVBoxLayout(verticalWidget_2);
        AnalogControl->setObjectName("AnalogControl");
        Text_AnalogControl = new QLabel(verticalWidget_2);
        Text_AnalogControl->setObjectName("Text_AnalogControl");
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        Text_AnalogControl->setFont(font);

        AnalogControl->addWidget(Text_AnalogControl);

        DigitalShift = new QFrame(verticalWidget_2);
        DigitalShift->setObjectName("DigitalShift");
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

        AnalogControl->addWidget(DigitalShift);

        GainRaw = new QFrame(verticalWidget_2);
        GainRaw->setObjectName("GainRaw");
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

        AnalogControl->addWidget(GainRaw);

        GainDb = new QFrame(verticalWidget_2);
        GainDb->setObjectName("GainDb");
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

        AnalogControl->addWidget(GainDb);

        Gamma = new QFrame(verticalWidget_2);
        Gamma->setObjectName("Gamma");
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

        AnalogControl->addWidget(Gamma);

        BlackLevel = new QFrame(verticalWidget_2);
        BlackLevel->setObjectName("BlackLevel");
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

        AnalogControl->addWidget(BlackLevel);

        verticalWidget_3 = new QWidget(centralwidget);
        verticalWidget_3->setObjectName("verticalWidget_3");
        verticalWidget_3->setGeometry(QRect(1240, 400, 611, 241));
        ImageFormatControl = new QVBoxLayout(verticalWidget_3);
        ImageFormatControl->setObjectName("ImageFormatControl");
        Text_img_format_control = new QLabel(verticalWidget_3);
        Text_img_format_control->setObjectName("Text_img_format_control");
        Text_img_format_control->setFont(font);

        ImageFormatControl->addWidget(Text_img_format_control);

        OffsetX = new QFrame(verticalWidget_3);
        OffsetX->setObjectName("OffsetX");
        OffsetX->setFrameShape(QFrame::Shape::StyledPanel);
        OffsetX->setFrameShadow(QFrame::Shadow::Raised);
        label_14 = new QLabel(OffsetX);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(10, 0, 91, 31));
        horizontalSlider_offsetX = new QSlider(OffsetX);
        horizontalSlider_offsetX->setObjectName("horizontalSlider_offsetX");
        horizontalSlider_offsetX->setGeometry(QRect(110, 10, 311, 16));
        horizontalSlider_offsetX->setMinimum(0);
        horizontalSlider_offsetX->setMaximum(3072);
        horizontalSlider_offsetX->setValue(0);
        horizontalSlider_offsetX->setOrientation(Qt::Orientation::Horizontal);
        spinBox_offsetX = new QSpinBox(OffsetX);
        spinBox_offsetX->setObjectName("spinBox_offsetX");
        spinBox_offsetX->setGeometry(QRect(430, 0, 91, 31));
        spinBox_offsetX->setFrame(false);
        spinBox_offsetX->setMinimum(0);
        spinBox_offsetX->setMaximum(3072);
        spinBox_offsetX->setValue(0);
        offsetX_label = new QLabel(OffsetX);
        offsetX_label->setObjectName("offsetX_label");
        offsetX_label->setGeometry(QRect(540, 0, 51, 31));

        ImageFormatControl->addWidget(OffsetX);

        Height = new QFrame(verticalWidget_3);
        Height->setObjectName("Height");
        Height->setFrameShape(QFrame::Shape::StyledPanel);
        Height->setFrameShadow(QFrame::Shadow::Raised);
        label_12 = new QLabel(Height);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(10, 0, 91, 31));
        horizontalSlider_height = new QSlider(Height);
        horizontalSlider_height->setObjectName("horizontalSlider_height");
        horizontalSlider_height->setGeometry(QRect(110, 10, 311, 16));
        horizontalSlider_height->setMinimum(1);
        horizontalSlider_height->setMaximum(4096);
        horizontalSlider_height->setValue(1024);
        horizontalSlider_height->setOrientation(Qt::Orientation::Horizontal);
        spinBox_height = new QSpinBox(Height);
        spinBox_height->setObjectName("spinBox_height");
        spinBox_height->setGeometry(QRect(430, 0, 91, 31));
        spinBox_height->setFrame(false);
        spinBox_height->setMinimum(1);
        spinBox_height->setMaximum(4096);
        spinBox_height->setValue(1024);
        height_label = new QLabel(Height);
        height_label->setObjectName("height_label");
        height_label->setGeometry(QRect(540, 0, 51, 31));

        ImageFormatControl->addWidget(Height);

        Width = new QFrame(verticalWidget_3);
        Width->setObjectName("Width");
        Width->setFrameShape(QFrame::Shape::StyledPanel);
        Width->setFrameShadow(QFrame::Shadow::Raised);
        label_11 = new QLabel(Width);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(10, 0, 91, 31));
        horizontalSlider_width = new QSlider(Width);
        horizontalSlider_width->setObjectName("horizontalSlider_width");
        horizontalSlider_width->setGeometry(QRect(110, 10, 311, 16));
        horizontalSlider_width->setMinimum(1);
        horizontalSlider_width->setMaximum(4096);
        horizontalSlider_width->setValue(1024);
        horizontalSlider_width->setOrientation(Qt::Orientation::Horizontal);
        spinBox_width = new QSpinBox(Width);
        spinBox_width->setObjectName("spinBox_width");
        spinBox_width->setGeometry(QRect(430, 0, 91, 31));
        spinBox_width->setFrame(false);
        spinBox_width->setMinimum(1);
        spinBox_width->setMaximum(4096);
        spinBox_width->setValue(1024);
        width_label = new QLabel(Width);
        width_label->setObjectName("width_label");
        width_label->setGeometry(QRect(540, 0, 51, 31));

        ImageFormatControl->addWidget(Width);

        OffsetY = new QFrame(verticalWidget_3);
        OffsetY->setObjectName("OffsetY");
        OffsetY->setFrameShape(QFrame::Shape::StyledPanel);
        OffsetY->setFrameShadow(QFrame::Shadow::Raised);
        label_15 = new QLabel(OffsetY);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(10, 0, 91, 31));
        horizontalSlider_offsetY = new QSlider(OffsetY);
        horizontalSlider_offsetY->setObjectName("horizontalSlider_offsetY");
        horizontalSlider_offsetY->setGeometry(QRect(110, 10, 311, 16));
        horizontalSlider_offsetY->setMinimum(0);
        horizontalSlider_offsetY->setMaximum(3072);
        horizontalSlider_offsetY->setValue(0);
        horizontalSlider_offsetY->setOrientation(Qt::Orientation::Horizontal);
        spinBox_offsetY = new QSpinBox(OffsetY);
        spinBox_offsetY->setObjectName("spinBox_offsetY");
        spinBox_offsetY->setGeometry(QRect(430, 0, 91, 31));
        spinBox_offsetY->setFrame(false);
        spinBox_offsetY->setMinimum(0);
        spinBox_offsetY->setMaximum(3072);
        spinBox_offsetY->setValue(0);
        offsetY_label = new QLabel(OffsetY);
        offsetY_label->setObjectName("offsetY_label");
        offsetY_label->setGeometry(QRect(540, 0, 51, 31));

        ImageFormatControl->addWidget(OffsetY);

        optionalBox2_2 = new QFrame(verticalWidget_3);
        optionalBox2_2->setObjectName("optionalBox2_2");
        optionalBox2_2->setFrameShape(QFrame::Shape::StyledPanel);
        optionalBox2_2->setFrameShadow(QFrame::Shadow::Raised);
        label_17 = new QLabel(optionalBox2_2);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(10, 0, 91, 31));

        ImageFormatControl->addWidget(optionalBox2_2);

        verticalWidget_4 = new QWidget(centralwidget);
        verticalWidget_4->setObjectName("verticalWidget_4");
        verticalWidget_4->setGeometry(QRect(640, 400, 591, 241));
        AcquisitionControl = new QVBoxLayout(verticalWidget_4);
        AcquisitionControl->setObjectName("AcquisitionControl");
        Text_AcquisitionControl = new QLabel(verticalWidget_4);
        Text_AcquisitionControl->setObjectName("Text_AcquisitionControl");
        Text_AcquisitionControl->setFont(font);

        AcquisitionControl->addWidget(Text_AcquisitionControl);

        ExposureTimeMicroSecond = new QFrame(verticalWidget_4);
        ExposureTimeMicroSecond->setObjectName("ExposureTimeMicroSecond");
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

        AcquisitionControl->addWidget(ExposureTimeMicroSecond);

        ExposureTimeAbs = new QFrame(verticalWidget_4);
        ExposureTimeAbs->setObjectName("ExposureTimeAbs");
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

        AcquisitionControl->addWidget(ExposureTimeAbs);

        ExposureTimeMicroSecond_2 = new QFrame(verticalWidget_4);
        ExposureTimeMicroSecond_2->setObjectName("ExposureTimeMicroSecond_2");
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

        AcquisitionControl->addWidget(ExposureTimeMicroSecond_2);

        optionalBox1 = new QFrame(verticalWidget_4);
        optionalBox1->setObjectName("optionalBox1");
        optionalBox1->setFrameShape(QFrame::Shape::StyledPanel);
        optionalBox1->setFrameShadow(QFrame::Shadow::Raised);
        label_13 = new QLabel(optionalBox1);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(10, 0, 91, 31));

        AcquisitionControl->addWidget(optionalBox1);

        optionalBox2 = new QFrame(verticalWidget_4);
        optionalBox2->setObjectName("optionalBox2");
        optionalBox2->setFrameShape(QFrame::Shape::StyledPanel);
        optionalBox2->setFrameShadow(QFrame::Shadow::Raised);
        label_16 = new QLabel(optionalBox2);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(10, 0, 91, 31));

        AcquisitionControl->addWidget(optionalBox2);

        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(10, 0, 951, 51));
        CameraInfo = new QHBoxLayout(horizontalLayoutWidget);
        CameraInfo->setObjectName("CameraInfo");
        CameraInfo->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(horizontalLayoutWidget);
        label_3->setObjectName("label_3");
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        label_3->setFont(font3);

        CameraInfo->addWidget(label_3);

        camera_name_label = new QLabel(horizontalLayoutWidget);
        camera_name_label->setObjectName("camera_name_label");
        QFont font4;
        font4.setPointSize(12);
        camera_name_label->setFont(font4);

        CameraInfo->addWidget(camera_name_label);

        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName("label");
        label->setFont(font3);

        CameraInfo->addWidget(label);

        connection_status_label = new QLabel(horizontalLayoutWidget);
        connection_status_label->setObjectName("connection_status_label");

        CameraInfo->addWidget(connection_status_label);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1866, 22));
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
        Text_AnalogControl->setText(QCoreApplication::translate("MainWindow", " Analog Control", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Digital Shift", nullptr));
        digital_shift_label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Gain (Raw)", nullptr));
        gain_raw_label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Gain (Db)", nullptr));
        gain_db_label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Gamma", nullptr));
        gamma_label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Black Level (DN)", nullptr));
        black_level_label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        Text_img_format_control->setText(QCoreApplication::translate("MainWindow", " Image Format Control", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "OffsetX", nullptr));
        offsetX_label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Height", nullptr));
        height_label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Width", nullptr));
        width_label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "OffsetY", nullptr));
        offsetY_label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_17->setText(QString());
        Text_AcquisitionControl->setText(QCoreApplication::translate("MainWindow", " Acquisition Control", nullptr));
        label_28->setText(QCoreApplication::translate("MainWindow", "Exposure Time (us) ", nullptr));
        exposure_time_us_label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_27->setText(QCoreApplication::translate("MainWindow", "Exposure Time (Raw)", nullptr));
        exposure_time_raw_label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_29->setText(QCoreApplication::translate("MainWindow", "Acquisition Frame Rate (Hz)", nullptr));
        acq_frame_rate_label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_13->setText(QString());
        label_16->setText(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "Camera Name:", nullptr));
        camera_name_label->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "Status:", nullptr));
        connection_status_label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
