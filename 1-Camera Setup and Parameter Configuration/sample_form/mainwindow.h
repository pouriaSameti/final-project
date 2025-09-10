#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QTimer>
#include <pylon/PylonIncludes.h>
#include <pylon/BaslerUniversalInstantCamera.h>
#include <pylon/ImageFormatConverter.h>

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

    int width_value = 1024;
    int length_value = 128;
    int ExpTime_value = 32;
    int gain_raw_value = 192;
    int gain_db_value = 0;
};

#endif // MAINWINDOW_H
