#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QTimer>
#include <pylon/PylonIncludes.h>
#include <pylon/BaslerUniversalInstantCamera.h>
#include <pylon/ImageFormatConverter.h>
#include <opencv2/opencv.hpp>

using namespace Pylon;
using namespace GenApi;
using namespace Basler_UniversalCameraParams;

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT  

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

    // camera parameters
    int gain_raw_value = 192;
    double gain_db_value = 0;
    int blackLevelValue = 0;
    double gammaValue = 1.000;
    int digitalShiftValue = 0;
    int exposureTimeRawValue = 10000;
    int exposureTimeMicroSecondValue = 10000;
    double acquisitionFrameRateValue = 100.0;
    int widthValue = 1024;
    int heightValue = 1024;
    int offsetXValue = 0;
    int offsetYValuse = 0;


    // Image grabbing parameters
    QTimer *timer;
    Pylon::CInstantCamera camera;
    bool isCameraOpen = false;
    cv::Mat fallbackImage;
    QImage cvMatToQImage(const cv::Mat &mat);
};

#endif // MAINWINDOW_H
