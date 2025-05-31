#include "mainwindow.h"
#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include <pylon/PylonIncludes.h>

using namespace Pylon;

int main(int argc, char *argv[])
{
    PylonInitialize();

    QApplication a(argc, argv);

    // Setup translation (keep your existing code)
    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "sample_form_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }

    MainWindow w;
    w.show();

    int result = a.exec();


    PylonTerminate();

    return result;
}
