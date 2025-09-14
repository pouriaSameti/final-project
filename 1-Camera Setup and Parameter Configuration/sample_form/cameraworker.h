#ifndef CAMERAWORKER_H
#define CAMERAWORKER_H

#include <QObject>
#include <QImage>
#include <pylon/PylonIncludes.h>

class CameraWorker : public QObject
{
    Q_OBJECT

public:
    explicit CameraWorker(Pylon::CInstantCamera* camera, QObject* parent = nullptr);
    ~CameraWorker();

public slots:
    void startGrabbing();
    void stopGrabbing();

signals:
    void imageGrabbed(const QImage& image);
    void errorOccurred(const QString& error);

private:
    Pylon::CInstantCamera* m_camera;
    bool m_isGrabbing;
};

#endif // CAMERAWORKER_H
