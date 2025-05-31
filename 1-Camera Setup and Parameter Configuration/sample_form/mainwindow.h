#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
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

private:
    int width_value = 1024;

private:
    int length_value = 1024;

private:
    int ExpTime_value = 10000;

private:
    int gain_raw_value = 192;

private:
    int gain_db_value = 0;
};

#endif // MAINWINDOW_H
