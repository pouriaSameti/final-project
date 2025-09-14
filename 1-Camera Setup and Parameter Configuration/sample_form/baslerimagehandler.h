#ifndef BASLERIMAGEHANDLER_H
#define BASLERIMAGEHANDLER_H

#pragma once
#include <pylon/PylonIncludes.h>
#include <QObject>
#include <QImage>
#include <opencv2/opencv.hpp>

using namespace Pylon;

class BaslerImageHandler : public QObject, public CImageEventHandler
{
    Q_OBJECT

public:
    explicit BaslerImageHandler(QObject *parent = nullptr) : QObject(parent) {}

    // Called automatically when a new image is grabbed
    void OnImageGrabbed(CInstantCamera& camera, const CGrabResultPtr& ptrGrabResult) override
    {
        if (ptrGrabResult->GrabSucceeded())
        {
            cv::Mat img(ptrGrabResult->GetHeight(),
                        ptrGrabResult->GetWidth(),
                        CV_8UC1,   // if your camera is mono8
                        (uint8_t*)ptrGrabResult->GetBuffer());

            QImage qimg(img.data, img.cols, img.rows, img.step, QImage::Format_Grayscale8);

            emit imageReady(qimg.copy()); // copy to detach from buffer
        }
    }

signals:
    void imageReady(const QImage& qimg);
};


#endif // BASLERIMAGEHANDLER_H
