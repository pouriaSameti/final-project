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



    PylonInitialize();
}


MainWindow::~MainWindow()
{
    PylonTerminate();
    delete ui;
}


