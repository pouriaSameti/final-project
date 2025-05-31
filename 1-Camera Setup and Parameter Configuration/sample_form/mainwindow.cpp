#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <pylon/PylonIncludes.h>
#include <QTimer>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QImage>
#include <QPixmap>
#include <QDebug>

using namespace Pylon;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , scene(new QGraphicsScene(this))
    , camera(nullptr)
    , timer(new QTimer(this))
{
    ui->setupUi(this);

    ui->graphicsView_camera->setScene(scene);
    ui->graphicsView_camera->setMinimumSize(640, 480);
    ui->graphicsView_camera->setMaximumSize(1920, 1080);

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
        ExpTime_value = value;
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


    // Initialize camera
    initializeCamera();

    // Setup timer for camera updates
    connect(timer, &QTimer::timeout, this, &MainWindow::updateCameraView);
    timer->start(30); // ~30 fps
}



MainWindow::~MainWindow()
{
    stopGrabbing();
    if (camera) {
        camera->Close();
        delete camera;
    }
    delete ui;
}

void MainWindow::initializeCamera()
{
    try {
        // Create camera instance
        camera = new CInstantCamera(CTlFactory::GetInstance().CreateFirstDevice());
        camera->Open();

        // Set basic parameters
        INodeMap& nodemap = camera->GetNodeMap();
        CEnumerationPtr(nodemap.GetNode("PixelFormat"))->FromString("Mono8");

        // Apply initial parameters
        applyCameraParameters();

        // Start grabbing
        startGrabbing();

        qDebug() << "Camera initialized successfully";
    } catch (const GenericException &e) {
        qDebug() << "Camera initialization failed:" << e.GetDescription();
    }
}

void MainWindow::startGrabbing()
{
    if (camera && !camera->IsGrabbing()) {
        camera->StartGrabbing(GrabStrategy_LatestImageOnly);
    }
}

void MainWindow::stopGrabbing()
{
    if (camera && camera->IsGrabbing()) {
        camera->StopGrabbing();
    }
}

void MainWindow::updateCameraView()
{
    if (!camera || !camera->IsGrabbing()) return;

    if (ptrGrabResult->GetPixelType() == PixelType_Mono8) {
        QImage img((uchar*)ptrGrabResult->GetBuffer(),
                   ptrGrabResult->GetWidth(),
                   ptrGrabResult->GetHeight(),
                   QImage::Format_Grayscale8);

        scene->clear();
        scene->addPixmap(QPixmap::fromImage(img))->setTransformationMode(Qt::SmoothTransformation);
        ui->graphicsView_camera->fitInView(scene->sceneRect(), Qt::KeepAspectRatio);
    } else {
        qDebug() << "Unsupported pixel format for display";
    }
}

void MainWindow::applyCameraParameters() {
    if (!camera || !camera->IsOpen()) return;

    try {
        INodeMap& nodemap = camera->GetNodeMap();

        // Width - try common variants
        if (IsAvailable(nodemap.GetNode("Width"))) {
            CIntegerPtr(nodemap.GetNode("Width"))->SetValue(width_value);
        }

        if (IsAvailable(nodemap.GetNode("Height"))) {
            CIntegerPtr(nodemap.GetNode("Height"))->SetValue(length_value);
        }

        else if (IsAvailable(nodemap.GetNode("SensorWidth"))) {
            CIntegerPtr(nodemap.GetNode("SensorWidth"))->SetValue(width_value);
        }

        // Exposure Time
        if (IsAvailable(nodemap.GetNode("ExposureTime"))) {
            CFloatPtr(nodemap.GetNode("ExposureTime"))->SetValue(ExpTime_value);
        }
        else if (IsAvailable(nodemap.GetNode("ExposureTimeAbs"))) {
            CIntegerPtr(nodemap.GetNode("ExposureTimeAbs"))->SetValue(ExpTime_value);
        }

        // Gain (try different variants)
        if (IsAvailable(nodemap.GetNode("GainRaw"))) {
            CIntegerPtr(nodemap.GetNode("GainRaw"))->SetValue(gain_raw_value);
        }
        else if (IsAvailable(nodemap.GetNode("Gain"))) {
            CFloatPtr(nodemap.GetNode("Gain"))->SetValue(gain_db_value);
        }

    } catch (const GenericException &e) {
        qDebug() << "Parameter error:" << e.GetDescription();
    }
}
