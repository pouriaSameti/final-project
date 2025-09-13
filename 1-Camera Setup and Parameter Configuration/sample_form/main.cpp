#include "mainwindow.h"
#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include <pylon/PylonIncludes.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    PylonInitialize();

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

    PylonTerminate();

    int result = a.exec();
    return result;
}
