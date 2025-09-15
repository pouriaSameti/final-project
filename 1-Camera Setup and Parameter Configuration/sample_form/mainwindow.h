#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QTimer>
#include <QThread>
#include <pylon/PylonIncludes.h>
#include <pylon/BaslerUniversalInstantCamera.h>
#include <pylon/ImageFormatConverter.h>
#include "BaslerCamera.h"
#include "BaslerCameraArray.h"
#include <opencv2/opencv.hpp>

using namespace Pylon;
using namespace GenApi;
using namespace Basler_UniversalCameraParams;
using namespace Pylon::BaslerCameraCameraParams_Params;


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow, public CImageEventHandler
{
    Q_OBJECT  

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

protected:
    void OnImageGrabbed(CInstantCamera& camera, const CGrabResultPtr& ptrGrabResult) override;

private slots:
    void displayImage(const QImage& qimg);

private:
    Ui::MainWindow *ui;

    // camera parameters
    int gain_raw_valueDefault = 800;
    int blackLevelValueDefault = 50;
    bool gammaEnableValueDefault = false;
    double gammaValueDefault = 0.000;
    int exposureTimeMicroSecondValueDefault = 20;
    double acquisitionLineRateValueDefault = 80645.16129;
    int widthValueDefault = 4096;
    int heightValueDefault = 1024;
    int binningHorizantalValueDefault = 1;

    int gain_raw_value = 800;
    int blackLevelValue = 50;
    bool gammaEnableValue = false;
    double gammaValue = 0.000;
    int exposureTimeMicroSecondValue = 20;
    double acquisitionLineRateValue = 80645.16129;
    int widthValue = 4096;
    int heightValue = 1024;
    int binningHorizantalValue = 1;

    // Image grabbing parameters
    BaslerCamera* cameraObject = nullptr;
    bool isCameraOpen = false;
};

#endif // MAINWINDOW_H
