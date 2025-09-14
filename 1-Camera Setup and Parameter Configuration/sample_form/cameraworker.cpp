#include "cameraworker.h"
#include <pylon/PylonIncludes.h>
#include <QThread>

CameraWorker::CameraWorker(Pylon::CInstantCamera* camera, QObject* parent)
    : QObject(parent), m_camera(camera), m_isGrabbing(false)
{
}

CameraWorker::~CameraWorker()
{
    stopGrabbing();
}

void CameraWorker::startGrabbing()
{
    if (m_isGrabbing || !m_camera || !m_camera->IsOpen()) return;

    try {
        m_camera->StartGrabbing(Pylon::GrabStrategy_LatestImageOnly, Pylon::GrabLoop_ProvidedByInstantCamera);
        m_isGrabbing = true;

        while (m_isGrabbing && m_camera->IsGrabbing()) {
            Pylon::CGrabResultPtr ptrGrabResult;
            if (m_camera->RetrieveResult(5000, ptrGrabResult, Pylon::TimeoutHandling_Return)) {
                if (ptrGrabResult->GrabSucceeded()) {
                    // Convert image to QImage
                    QImage image(ptrGrabResult->GetWidth(),
                                 ptrGrabResult->GetHeight(),
                                 QImage::Format_Grayscale8);

                    memcpy(image.bits(), ptrGrabResult->GetBuffer(), ptrGrabResult->GetImageSize());
                    emit imageGrabbed(image);
                }
            }

            // Small delay to prevent CPU overload
            QThread::msleep(1);
        }
    } catch (const Pylon::GenericException& e) {
        emit errorOccurred(QString::fromStdString(e.GetDescription()));
    }
}

void CameraWorker::stopGrabbing()
{
    m_isGrabbing = false;
    if (m_camera && m_camera->IsGrabbing()) {
        m_camera->StopGrabbing();
    }
}
