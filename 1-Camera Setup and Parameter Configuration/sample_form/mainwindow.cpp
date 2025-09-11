#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLabel>
#include <QTimer>
#include <pylon/PylonIncludes.h>
#include <pylon/BaslerUniversalInstantCamera.h>
#include <pylon/ImageFormatConverter.h>
#include <pylon/PylonGUI.h>

using namespace Pylon;
using namespace GenApi;
using namespace Basler_UniversalCameraParams;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // set the default values
    ui->gain_raw_label->setText(QString::number(gain_raw_value));
    ui->gain_db_label->setText(QString::number(gain_db_value));
    ui->black_level_label->setText(QString::number(blackLevelValue));
    ui->digital_shift_label->setText(QString::number(digitalShiftValue));
    ui->exposure_time_raw_label->setText(QString::number(exposureTimeRawValue));
    ui->exposure_time_us_label->setText(QString::number(exposureTimeMicroSecondValue));
    ui->acq_frame_rate_label->setText(QString::number(acquisitionFrameRateValue));
    ui->width_label->setText(QString::number(widthValue));
    ui->height_label->setText(QString::number(heightValue));
    ui->offsetX_label->setText(QString::number(offsetXValue));
    ui->offsetY_label->setText(QString::number(offsetYValuse));


    // change value of gain_raw with slider
    connect(ui->horizontalSlider_gain_raw, &QSlider::valueChanged, this, [=](int value){
        gain_raw_value = value;
        ui->gain_raw_label->setText(QString::number(gain_raw_value));
        ui->spinBox_gain_raw->setValue(gain_raw_value);
    });


    // change value of gain_raw with spinBox
    connect(ui->spinBox_gain_raw, QOverload<int>::of(&QSpinBox::valueChanged), this, [=](int value){
        gain_raw_value = value;
        ui->gain_raw_label->setText(QString::number(gain_raw_value));
        ui->horizontalSlider_gain_raw->setValue(gain_raw_value);
    });

    // change value of gain_db with slider
    connect(ui->horizontalSlider_gain_db, &QSlider::valueChanged, this, [=](int value){
        gain_db_value = value * 0.001;
        ui->gain_db_label->setText(QString::number(gain_db_value, 'f', 3));
        ui->doubleSpinBox_gain_db->setValue(gain_db_value);
    });

    // change value of gain_db with spinBox
    connect(ui->doubleSpinBox_gain_db, QOverload<double>::of(&QDoubleSpinBox::valueChanged), this, [=](double value){
        gain_db_value = value;
        ui->gain_db_label->setText(QString::number(gain_db_value, 'f', 3));

        int sliderVal = qRound(gain_db_value / 0.001);
        ui->horizontalSlider_gain_db->setValue(sliderVal);
    });


    // change value of Black Level with slider
    connect(ui->horizontalSlider_black_level, &QSlider::valueChanged, this, [=](int value){
        blackLevelValue = value;
        ui->black_level_label->setText(QString::number(blackLevelValue));
        ui->spinBox_black_level->setValue(blackLevelValue);
    });

    // change value of Black Level with spinBox
    connect(ui->spinBox_black_level, QOverload<int>::of(&QSpinBox::valueChanged), this, [=](int value){
        blackLevelValue = value;
        ui->black_level_label->setText(QString::number(blackLevelValue));
        ui->spinBox_black_level->setValue(blackLevelValue);
    });


    // change value of Gamma with slider
    connect(ui->horizontalSlider_gamma, &QSlider::valueChanged, this, [=](int value){
        gammaValue = value * 0.005;
        ui->gamma_label->setText(QString::number(gammaValue, 'f', 3));
        ui->doubleSpinBox_gamma->setValue(gammaValue);
    });

    // change value of Gamma with spinBox
    connect(ui->doubleSpinBox_gamma, QOverload<double>::of(&QDoubleSpinBox::valueChanged), this, [=](double value){
                gammaValue = value;
                ui->gamma_label->setText(QString::number(gammaValue, 'f', 3));

                int sliderVal = qRound(gammaValue / 0.005);
                ui->horizontalSlider_gamma->setValue(sliderVal);
            });


    // change value of digital shift with slider
    connect(ui->horizontalSlider_digital_shift, &QSlider::valueChanged, this, [=](int value){
        digitalShiftValue = value;
        ui->digital_shift_label->setText(QString::number(digitalShiftValue));
        ui->spinBox_digital_shift->setValue(digitalShiftValue);
    });

    // change value of digital shift with spinBox
    connect(ui->spinBox_digital_shift, QOverload<int>::of(&QSpinBox::valueChanged), this, [=](int value){
        digitalShiftValue = value;
        ui->digital_shift_label->setText(QString::number(digitalShiftValue));
        ui->horizontalSlider_digital_shift->setValue(digitalShiftValue);
    });


    // change value of exposure time (Raw) with slider
    connect(ui->horizontalSlider_exposure_time_raw, &QSlider::valueChanged, this, [=](int value){
        exposureTimeRawValue = value;
        ui->exposure_time_raw_label->setText(QString::number(exposureTimeRawValue));
        ui->spinBox_exposure_time_raw->setValue(exposureTimeRawValue);
    });

    // change value of exposure time (Raw) with spinBox
    connect(ui->spinBox_exposure_time_raw, QOverload<int>::of(&QSpinBox::valueChanged), this, [=](int value){
        exposureTimeRawValue = value;
        ui->exposure_time_raw_label->setText(QString::number(exposureTimeRawValue));
        ui->horizontalSlider_exposure_time_raw->setValue(exposureTimeRawValue);
    });


    // change value of exposure time (us) with slider
    connect(ui->horizontalSlider_exposure_time_us, &QSlider::valueChanged, this, [=](int value){
        exposureTimeMicroSecondValue = value;
        ui->exposure_time_us_label->setText(QString::number(exposureTimeMicroSecondValue));
        ui->spinBox_exposure_time_us->setValue(exposureTimeMicroSecondValue);
    });

    // change value of exposure time (us) with spinBox
    connect(ui->spinBox_exposure_time_us, QOverload<int>::of(&QSpinBox::valueChanged), this, [=](int value){
        exposureTimeMicroSecondValue = value;
        ui->exposure_time_us_label->setText(QString::number(exposureTimeMicroSecondValue));
        ui->horizontalSlider_exposure_time_us->setValue(exposureTimeMicroSecondValue);
    });


    // change value of Acquisition Frame Rate with slider
    connect(ui->horizontalSlider_acq_frame_rate, &QSlider::valueChanged, this, [=](int value){
        acquisitionFrameRateValue = value * 0.01;
        ui->acq_frame_rate_label->setText(QString::number(acquisitionFrameRateValue, 'f', 2));
        ui->doubleSpinBox_acq_frame_rate->setValue(acquisitionFrameRateValue);
    });

    // change value of Acquisition Frame Rate with spinBox
    connect(ui->doubleSpinBox_acq_frame_rate, QOverload<double>::of(&QDoubleSpinBox::valueChanged), this, [=](double value){
        acquisitionFrameRateValue = value;
        ui->acq_frame_rate_label->setText(QString::number(acquisitionFrameRateValue, 'f', 2));

        int sliderVal = qRound(acquisitionFrameRateValue / 0.01);
        ui->horizontalSlider_acq_frame_rate->setValue(sliderVal);
    });


    // change value of width with slider
    connect(ui->horizontalSlider_width, &QSlider::valueChanged, this, [=](int value){
        widthValue = value;
        ui->width_label->setText(QString::number(widthValue));
        ui->spinBox_width->setValue(widthValue);
    });

    // change value of width with spinBox
    connect(ui->spinBox_width, QOverload<int>::of(&QSpinBox::valueChanged), this, [=](int value){
        widthValue = value;
        ui->width_label->setText(QString::number(widthValue));
        ui->horizontalSlider_width->setValue(widthValue);
    });

    // change value of height with slider
    connect(ui->horizontalSlider_height, &QSlider::valueChanged, this, [=](int value){
        heightValue = value;
        ui->height_label->setText(QString::number(heightValue));
        ui->spinBox_height->setValue(heightValue);
    });

    // change value of height with spinBox
    connect(ui->spinBox_height, QOverload<int>::of(&QSpinBox::valueChanged), this, [=](int value){
        heightValue = value;
        ui->height_label->setText(QString::number(heightValue));
        ui->horizontalSlider_height->setValue(heightValue);
    });

    // change value of offsetX with slider
    connect(ui->horizontalSlider_offsetX, &QSlider::valueChanged, this, [=](int value){
        offsetXValue = value;
        ui->offsetX_label->setText(QString::number(offsetXValue));
        ui->spinBox_offsetX->setValue(offsetXValue);
    });

    // change value of offsetX with spinBox
    connect(ui->spinBox_offsetX, QOverload<int>::of(&QSpinBox::valueChanged), this, [=](int value){
        offsetXValue = value;
        ui->offsetX_label->setText(QString::number(offsetXValue));
        ui->horizontalSlider_offsetX->setValue(offsetXValue);
    });

    // change value of offsetY with slider
    connect(ui->horizontalSlider_offsetY, &QSlider::valueChanged, this, [=](int value){
        offsetYValuse = value;
        ui->offsetY_label->setText(QString::number(offsetYValuse));
        ui->spinBox_offsetY->setValue(offsetYValuse);
    });

    // change value of offsetY with spinBox
    connect(ui->spinBox_offsetY, QOverload<int>::of(&QSpinBox::valueChanged), this, [=](int value){
        offsetYValuse = value;
        ui->offsetY_label->setText(QString::number(offsetYValuse));
        ui->horizontalSlider_offsetY->setValue(offsetYValuse);
    });

    PylonInitialize();
}


MainWindow::~MainWindow()
{
    PylonTerminate();
    delete ui;
}


