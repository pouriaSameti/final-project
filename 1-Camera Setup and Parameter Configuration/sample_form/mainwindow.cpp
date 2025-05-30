#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // set the default of width
    ui->horizontalSlider_width->setMinimum(1024);
    ui->horizontalSlider_width->setMaximum(4096);
    ui->horizontalSlider_width->setValue(width_value);

    ui->spinBox_width->setMinimum(1024);
    ui->spinBox_width->setMaximum(4096);
    ui->spinBox_width->setValue(width_value);

    ui->width_label->setText(QString::number(width_value));


    // set the default of height
    ui->horizontalSlider_Length->setMinimum(1024);
    ui->horizontalSlider_Length->setMaximum(4096);
    ui->horizontalSlider_Length->setValue(length_value);

    ui->spinBox_length->setMinimum(1024);
    ui->spinBox_length->setMaximum(4096);
    ui->spinBox_length->setValue(length_value);

    ui->length_label->setText(QString::number(length_value));


    // set the default of exposure time
    ui->horizontalSlider_ExpTime->setRange(1, 9999999);
    ui->horizontalSlider_ExpTime->setValue(10000);
    ui->horizontalSlider_ExpTime->setValue(ExpTime_value);

    ui->spinBox_ExpTime->setRange(1, 9999999);
    ui->spinBox_ExpTime->setValue(10000);
    ui->spinBox_ExpTime->setValue(ExpTime_value);

    ui->ExpTime_label->setText(QString::number(ExpTime_value));


    // set the default of gain(Raw)
    ui->horizontalSlider_Gain_Raw->setRange(192, 1023);
    ui->horizontalSlider_Gain_Raw->setValue(192);
    ui->horizontalSlider_Gain_Raw->setValue(gain_raw_value);

    ui->spinBox_gain_raw->setRange(192, 1023);
    ui->spinBox_gain_raw->setValue(192);
    ui->spinBox_gain_raw->setValue(gain_raw_value);

    ui->Gain_Raw_label->setText(QString::number(gain_raw_value));

    // set the default of gain(db)
    ui->horizontalSlider_Gain_DB->setRange(0, 48);
    ui->horizontalSlider_Gain_DB->setValue(0);
    ui->horizontalSlider_Gain_DB->setValue(gain_db_value);

    ui->spinBox_gain_db->setRange(0, 48);
    ui->spinBox_gain_db->setValue(0);
    ui->spinBox_gain_db->setValue(gain_db_value);

    ui->Gain_db_label->setText(QString::number(gain_db_value));


    // change value of width with slider
    connect(ui->horizontalSlider_width, &QSlider::valueChanged, this, [=](int value){
        width_value = value;
        ui->width_label->setText(QString::number(value));
    });

    // change value of width with spinBox
    connect(ui->spinBox_width, QOverload<int>::of(&QSpinBox::valueChanged), this, [=](int value){
        width_value = value;
        ui->width_label->setText(QString::number(value));
    });

    // change value of length with slider
    connect(ui->horizontalSlider_Length, &QSlider::valueChanged, this, [=](int value){
        length_value = value;
        ui->length_label->setText(QString::number(value));
    });

    // change value of length with spinBox
    connect(ui->spinBox_length, QOverload<int>::of(&QSpinBox::valueChanged), this, [=](int value){
        length_value = value;
        ui->length_label->setText(QString::number(value));
    });

    // change value of Exposure time with slider
    connect(ui->horizontalSlider_ExpTime, &QSlider::valueChanged, this, [=](int value){
        ExpTime_value = value;
        ui->ExpTime_label->setText(QString::number(value));
    });

    // change value of Exposure time with spinBox
    connect(ui->spinBox_ExpTime, QOverload<int>::of(&QSpinBox::valueChanged), this, [=](int value){
        length_value = value;
        ui->ExpTime_label->setText(QString::number(value));
    });

    // change value of gain(Raw) with slider
    connect(ui->horizontalSlider_Gain_Raw, &QSlider::valueChanged, this, [=](int value){
        gain_raw_value = value;
        ui->Gain_Raw_label->setText(QString::number(value));
    });

    // change value of gain(Raw) with spinBox
    connect(ui->spinBox_gain_raw, QOverload<int>::of(&QSpinBox::valueChanged), this, [=](int value){
        gain_raw_value = value;
        ui->Gain_Raw_label->setText(QString::number(value));
    });

    // change value of gain(db) with slider
    connect(ui->horizontalSlider_Gain_DB, &QSlider::valueChanged, this, [=](int value){
        gain_db_value = value;
        ui->Gain_db_label->setText(QString::number(value));
    });

    // change value of gain(db) with spinBox
    connect(ui->spinBox_gain_db, QOverload<int>::of(&QSpinBox::valueChanged), this, [=](int value){
        gain_db_value = value;
        ui->Gain_db_label->setText(QString::number(value));
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}
