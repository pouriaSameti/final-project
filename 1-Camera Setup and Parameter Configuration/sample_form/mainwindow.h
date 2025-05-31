#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QTimer>
#include <pylon/PylonIncludes.h>

using namespace Pylon;
using namespace GenApi;

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
    QGraphicsScene *scene;
    CInstantCamera* camera;
    QTimer *timer;

private slots:
    void updateCameraView();
    void applyCameraParameters();

private:
    int width_value = 1024;
    int length_value = 1;
    int ExpTime_value = 10000;
    int gain_raw_value = 192;
    int gain_db_value = 0;

    void initializeCamera();
    void startGrabbing();
    void stopGrabbing();
};

#endif // MAINWINDOW_H
