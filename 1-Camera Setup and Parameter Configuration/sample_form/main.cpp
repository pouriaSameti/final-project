// #include "mainwindow.h"
// #include <QApplication>
// #include <QLocale>
// #include <QTranslator>

// #include <pylon/PylonIncludes.h>



// int main(int argc, char *argv[])
// {
//     QApplication a(argc, argv);

//     QTranslator translator;
//     const QStringList uiLanguages = QLocale::system().uiLanguages();
//     for (const QString &locale : uiLanguages) {
//         const QString baseName = "sample_form_" + QLocale(locale).name();
//         if (translator.load(":/i18n/" + baseName)) {
//             a.installTranslator(&translator);
//             break;
//         }
//     }
//     MainWindow w;
//     w.show();
//     return a.exec();
// }

#include <QApplication>
#include <QTranslator>
#include <QLocale>
#include <QDebug>

#include "mainwindow.h"

// Pylon headers
#include <pylon/PylonIncludes.h>

using namespace Pylon;

int main(int argc, char *argv[])
{
    // 1. Initialize the Pylon runtime before using any Pylon methods
    PylonInitialize();

    try {
        // 2. Create an instant camera object with the first available camera device
        static CInstantCamera camera(CTlFactory::GetInstance().CreateFirstDevice());

        // 3. Open the camera
        camera.Open();
        qDebug() << "✅ Camera initialized and opened successfully!";

        // 4. Start Qt application
        QApplication a(argc, argv);

        // Translation support
        QTranslator translator;
        const QStringList uiLanguages = QLocale::system().uiLanguages();
        for (const QString &locale : uiLanguages) {
            const QString baseName = "sample_form_" + QLocale(locale).name();
            if (translator.load(":/i18n/" + baseName)) {
                a.installTranslator(&translator);
                break;
            }
        }

        // 5. Show the main window
        MainWindow w;
        w.show();

        // 6. Run Qt event loop
        int result = a.exec();

        // 7. Close the camera after the application exits
        camera.Close();
        qDebug() << "✅ Camera closed.";

        // 8. Terminate the Pylon runtime system
        PylonTerminate();
        return result;

    } catch (const GenericException& e) {
        qDebug() << "❌ An exception occurred: " << e.GetDescription();
        PylonTerminate();
        return 1;
    }
}

