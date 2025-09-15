#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QObject>
#include <QLabel>
#include <QTimer>
#include <QPainter>
#include <QPixmap>
#include <QMessageBox>
#include "BaslerCamera.h"
#include <pylon/PylonImage.h>
#include <pylon/GrabResultPtr.h>
#include <pylon/PylonIncludes.h>
#include <pylon/ImageEventHandler.h>
#include <pylon/ImageFormatConverter.h>
#include <pylon/BaslerUniversalInstantCamera.h>


using namespace std;
using namespace Pylon;
using namespace GenApi;
using namespace Basler_UniversalCameraParams;
using namespace Pylon::BaslerCameraCameraParams_Params;



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    int exitCode = 0;


    ui->setupUi(this);
    QPixmap pix("D:/final-project/1-Camera Setup and Parameter Configuration/sample_form/icons/labIcon.jpg");
    int w = ui->label_labLogo->width();
    int h = ui->label_labLogo->height();
    ui->label_labLogo->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatioByExpanding));

    try {

        //Camera Connection
        cameraObject = new BaslerCamera(CTlFactory::GetInstance().CreateFirstDevice());
        cameraObject->Open();
        isCameraOpen = true;


        //Initialization parameters with Default values

        cameraObject->GainRaw.SetValue(gain_raw_value);
        cameraObject->BlackLevelRaw.SetValue(blackLevelValue);
        if (gammaEnableValue){
            cameraObject->GammaEnable.SetValue(gammaEnableValue);
            cameraObject->Gamma.SetValue(gammaValue);
        }

        cameraObject->Width.SetValue(widthValue);
        cameraObject->Height.SetValue(heightValue);
        cameraObject->BinningHorizontal.SetValue(binningHorizantalValue);

        cameraObject->ExposureTimeAbs.SetValue(exposureTimeMicroSecondValue);
        // cameraObject->AcquisitionFrameRateAbs.SetValue(acquisitionFrameRateValue);

        // gain_raw_value = cameraObject->GainRaw.GetValue();
        // blackLevelValue = cameraObject->BlackLevelRaw.GetValue();
        // widthValue = cameraObject->Width.GetValue();
        // heightValue = cameraObject->Height.GetValue();
        // offsetXValue = cameraObject->OffsetX.GetValue();

        // // Set some important parameters of camera for start image grabbing
        cameraObject->PixelFormat.SetValue("Mono8");
        cameraObject->AcquisitionMode.SetValue("Continuous");
        cameraObject->TriggerMode.SetValue("Off");

        //Get parameter values
        cout << "Using device " << cameraObject->GetDeviceInfo().GetModelName() << endl;
        cout << "camera.AcquisitionFrameCount = " << cameraObject->AcquisitionFrameCount.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.AcquisitionFrameRateAbs = " << cameraObject->AcquisitionFrameRateAbs.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.AcquisitionFrameRateEnable = " << cameraObject->AcquisitionFrameRateEnable.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.AcquisitionLineRateAbs = " << cameraObject->AcquisitionLineRateAbs.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.AcquisitionMode = " << cameraObject->AcquisitionMode.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.AcquisitionStart = " << cameraObject->AcquisitionStart.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.AcquisitionStartEventStreamChannelIndex = " << cameraObject->AcquisitionStartEventStreamChannelIndex.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.AcquisitionStartEventTimestamp = " << cameraObject->AcquisitionStartEventTimestamp.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.AcquisitionStartOvertriggerEventStreamChannelIndex = " << cameraObject->AcquisitionStartOvertriggerEventStreamChannelIndex.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.AcquisitionStartOvertriggerEventTimestamp = " << cameraObject->AcquisitionStartOvertriggerEventTimestamp.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.AcquisitionStatus = " << cameraObject->AcquisitionStatus.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.AcquisitionStatusSelector = " << cameraObject->AcquisitionStatusSelector.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.AcquisitionStop = " << cameraObject->AcquisitionStop.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.AcquisitionWaitEventStreamChannelIndex = " << cameraObject->AcquisitionWaitEventStreamChannelIndex.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.AcquisitionWaitEventTimestamp = " << cameraObject->AcquisitionWaitEventTimestamp.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.ActionCommandCount = " << cameraObject->ActionCommandCount.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.ActionDeviceKey = " << cameraObject->ActionDeviceKey.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.ActionGroupKey = " << cameraObject->ActionGroupKey.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.ActionGroupMask = " << cameraObject->ActionGroupMask.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.ActionSelector = " << cameraObject->ActionSelector.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.AutoExposureTimeAbsLowerLimit = " << cameraObject->AutoExposureTimeAbsLowerLimit.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.AutoExposureTimeAbsUpperLimit = " << cameraObject->AutoExposureTimeAbsUpperLimit.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.AutoFunctionAOIHeight = " << cameraObject->AutoFunctionAOIHeight.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.AutoFunctionAOIOffsetX = " << cameraObject->AutoFunctionAOIOffsetX.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.AutoFunctionAOIOffsetY = " << cameraObject->AutoFunctionAOIOffsetY.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.AutoFunctionAOISelector = " << cameraObject->AutoFunctionAOISelector.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.AutoFunctionAOIUsageIntensity = " << cameraObject->AutoFunctionAOIUsageIntensity.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.AutoFunctionAOIUsageRedLightCorrection = " << cameraObject->AutoFunctionAOIUsageRedLightCorrection.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.AutoFunctionAOIUsageWhiteBalance = " << cameraObject->AutoFunctionAOIUsageWhiteBalance.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.AutoFunctionAOIWidth = " << cameraObject->AutoFunctionAOIWidth.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.AutoFunctionProfile = " <<cameraObject->AutoFunctionProfile.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.AutoGainRawLowerLimit = " << cameraObject->AutoGainRawLowerLimit.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.AutoGainRawUpperLimit = " << cameraObject->AutoGainRawUpperLimit.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.AutoTargetValue = " << cameraObject->AutoTargetValue.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.BalanceWhiteAdjustmentDampingAbs = " << cameraObject->BalanceWhiteAdjustmentDampingAbs.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.BalanceWhiteAdjustmentDampingRaw = " << cameraObject->BalanceWhiteAdjustmentDampingRaw.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.BinningHorizontal = " << cameraObject->BinningHorizontal.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.BinningModeHorizontal = " << cameraObject->BinningModeHorizontal.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.BinningModeVertical = " << cameraObject->BinningModeVertical.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.BinningVertical = " << cameraObject->BinningVertical.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.BlackLevelRaw = " << cameraObject->BlackLevelRaw.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.BlackLevelSelector = " << cameraObject->BlackLevelSelector.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.CenterX = " << cameraObject->CenterX.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.CenterY = " << cameraObject->CenterY.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.ChunkEnable = " << cameraObject->ChunkEnable.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.ChunkModeActive = " << cameraObject->ChunkModeActive.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.ChunkSelector = " << cameraObject->ChunkSelector.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.ClearLastError = " << cameraObject->ClearLastError.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.CounterEventSource = " << cameraObject->CounterEventSource.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.CounterReset = " << cameraObject->CounterReset.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.CounterResetSource = " << cameraObject->CounterResetSource.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.CounterSelector = " << cameraObject->CounterSelector.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.CriticalTemperature = " << cameraObject->CriticalTemperature.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.CriticalTemperatureEventStreamChannelIndex = " << cameraObject->CriticalTemperatureEventStreamChannelIndex.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.CriticalTemperatureEventTimestamp = " << cameraObject->CriticalTemperatureEventTimestamp.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.DecimationHorizontal = " << cameraObject->DecimationHorizontal.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.DecimationVertical = " << cameraObject->DecimationVertical.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.DeviceFirmwareVersion = " << cameraObject->DeviceFirmwareVersion.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.DeviceID = " << cameraObject->DeviceID.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.DeviceManufacturerInfo = " << cameraObject->DeviceManufacturerInfo.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.DeviceModelName = " << cameraObject->DeviceModelName.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.DeviceRegistersStreamingEnd = " << cameraObject->DeviceRegistersStreamingEnd.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.DeviceRegistersStreamingStart = " << cameraObject->DeviceRegistersStreamingStart.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.DeviceReset = " << cameraObject->DeviceReset.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.DeviceScanType = " << cameraObject->DeviceScanType.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.DeviceUserID = " << cameraObject->DeviceUserID.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.DeviceVendorName = " << cameraObject->DeviceVendorName.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.DeviceVersion = " << cameraObject->DeviceVersion.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.EventNotification = " << cameraObject->EventNotification.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.EventOverrunEventFrameID = " << cameraObject->EventOverrunEventFrameID.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.EventOverrunEventStreamChannelIndex = " << cameraObject->EventOverrunEventStreamChannelIndex.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.EventOverrunEventTimestamp = " << cameraObject->EventOverrunEventTimestamp.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.EventSelector = " << cameraObject->EventSelector.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.ExpertFeatureAccessKey = " << cameraObject->ExpertFeatureAccessKey.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.ExpertFeatureAccessSelector = " << cameraObject->ExpertFeatureAccessSelector.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.ExpertFeatureEnable = " << cameraObject->ExpertFeatureEnable.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.ExposureAuto = " << cameraObject->ExposureAuto.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.ExposureEndEventFrameID = " << cameraObject->ExposureEndEventFrameID.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.ExposureEndEventStreamChannelIndex = " << cameraObject->ExposureEndEventStreamChannelIndex.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.ExposureEndEventTimestamp = " << cameraObject->ExposureEndEventTimestamp.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.ExposureMode = " << cameraObject->ExposureMode.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.ExposureOverlapTimeMaxAbs = " << cameraObject->ExposureOverlapTimeMaxAbs.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.ExposureOverlapTimeMaxRaw = " << cameraObject->ExposureOverlapTimeMaxRaw.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.ExposureTimeAbs = " << cameraObject->ExposureTimeAbs.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.ExposureTimeRaw = " << cameraObject->ExposureTimeRaw.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.FileAccessLength = " << cameraObject->FileAccessLength.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.FileAccessOffset = " << cameraObject->FileAccessOffset.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.FileOpenMode = " << cameraObject->FileOpenMode.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.FileOperationExecute = " << cameraObject->FileOperationExecute.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.FileOperationResult = " << cameraObject->FileOperationResult.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.FileOperationSelector = " << cameraObject->FileOperationSelector.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.FileOperationStatus = " << cameraObject->FileOperationStatus.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.FileSelector = " << cameraObject->FileSelector.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.FileSize = " << cameraObject->FileSize.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.FrameStartEventStreamChannelIndex = " << cameraObject->FrameStartEventStreamChannelIndex.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.FrameStartEventTimestamp = " << cameraObject->FrameStartEventTimestamp.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.FrameStartOvertriggerEventStreamChannelIndex = " << cameraObject->FrameStartOvertriggerEventStreamChannelIndex.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.FrameStartOvertriggerEventTimestamp = " << cameraObject->FrameStartOvertriggerEventTimestamp.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.FrameTimeoutAbs = " << cameraObject->FrameTimeoutAbs.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.FrameTimeoutEnable = " << cameraObject->FrameTimeoutEnable.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.FrameTimeoutEventStreamChannelIndex = " << cameraObject->FrameTimeoutEventStreamChannelIndex.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.FrameTimeoutEventTimestamp = " << cameraObject->FrameTimeoutEventTimestamp.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.FrameWaitEventStreamChannelIndex = " << cameraObject->FrameWaitEventStreamChannelIndex.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.FrameWaitEventTimestamp = " << cameraObject->FrameWaitEventTimestamp.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.FrequencyConverterInputSource = " << cameraObject->FrequencyConverterInputSource.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.FrequencyConverterMultiplier = " << cameraObject->FrequencyConverterMultiplier.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.FrequencyConverterPostDivider = " << cameraObject->FrequencyConverterPostDivider.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.FrequencyConverterPreDivider = " << cameraObject->FrequencyConverterPreDivider.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.FrequencyConverterPreventOvertrigger = " << cameraObject->FrequencyConverterPreventOvertrigger.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.FrequencyConverterSignalAlignment = " << cameraObject->FrequencyConverterSignalAlignment.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.GainAuto = " << cameraObject->GainAuto.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.GainRaw = " << cameraObject->GainRaw.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.GainSelector = " << cameraObject->GainSelector.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.Gamma = " <<cameraObject->Gamma.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.GammaEnable = " << cameraObject->GammaEnable.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.GammaSelector = " << cameraObject->GammaSelector.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.GevCCP = " << cameraObject->GevCCP.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.GevCurrentDefaultGateway = " << cameraObject->GevCurrentDefaultGateway.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.GevCurrentIPAddress = " << cameraObject->GevCurrentIPAddress.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.GevCurrentIPConfiguration = " << cameraObject->GevCurrentIPConfiguration.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.GevCurrentSubnetMask = " << cameraObject->GevCurrentSubnetMask.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.GevDeviceModeCharacterSet = " << cameraObject->GevDeviceModeCharacterSet.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.GevDeviceModeIsBigEndian = " << cameraObject->GevDeviceModeIsBigEndian.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.GevFirstURL = " << cameraObject->GevFirstURL.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.GevHeartbeatTimeout = " << cameraObject->GevHeartbeatTimeout.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.GevIEEE1588 = " << cameraObject->GevIEEE1588.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.GevIEEE1588ClockId = " << cameraObject->GevIEEE1588ClockId.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.GevIEEE1588DataSetLatch = " << cameraObject->GevIEEE1588DataSetLatch.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.GevIEEE1588OffsetFromMaster = " << cameraObject->GevIEEE1588OffsetFromMaster.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.GevIEEE1588ParentClockId = " << cameraObject->GevIEEE1588ParentClockId.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.GevIEEE1588Status = " << cameraObject->GevIEEE1588Status.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.GevIEEE1588StatusLatched = " << cameraObject->GevIEEE1588StatusLatched.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.GevInterfaceSelector = " << cameraObject->GevInterfaceSelector.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.GevLinkCrossover = " << cameraObject->GevLinkCrossover.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.GevLinkFullDuplex = " << cameraObject->GevLinkFullDuplex.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.GevLinkMaster = " << cameraObject->GevLinkMaster.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.GevLinkSpeed = " << cameraObject->GevLinkSpeed.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.GevMACAddress = " << cameraObject->GevMACAddress.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.GevMessageChannelCount = " << cameraObject->GevMessageChannelCount.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.GevNumberOfInterfaces = " << cameraObject->GevNumberOfInterfaces.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.GevPersistentDefaultGateway = " << cameraObject->GevPersistentDefaultGateway.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.GevPersistentIPAddress = " << cameraObject->GevPersistentIPAddress.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.GevPersistentSubnetMask = " << cameraObject->GevPersistentSubnetMask.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.GevSCBWA = " << cameraObject->GevSCBWA.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.GevSCBWR = " << cameraObject->GevSCBWR.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.GevSCBWRA = " << cameraObject->GevSCBWRA.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.GevSCDA = " << cameraObject->GevSCDA.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.GevSCDCT = " << cameraObject->GevSCDCT.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.GevSCDMT = " << cameraObject->GevSCDMT.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.GevSCFJM = " << cameraObject->GevSCFJM.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.GevSCFTD = " << cameraObject->GevSCFTD.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.GevSCPD = " << cameraObject->GevSCPD.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.GevSCPHostPort = " << cameraObject->GevSCPHostPort.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.GevSCPInterfaceIndex = " << cameraObject->GevSCPInterfaceIndex.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.GevSCPSBigEndian = " << cameraObject->GevSCPSBigEndian.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.GevSCPSDoNotFragment = " << cameraObject->GevSCPSDoNotFragment.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.GevSCPSPacketSize = " << cameraObject->GevSCPSPacketSize.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.GevSecondURL = " << cameraObject->GevSecondURL.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.GevStreamChannelCount = " << cameraObject->GevStreamChannelCount.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.GevStreamChannelSelector = " << cameraObject->GevStreamChannelSelector.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.GevSupportedIEEE1588 = " << cameraObject->GevSupportedIEEE1588.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.GevSupportedIPConfigurationDHCP = " << cameraObject->GevSupportedIPConfigurationDHCP.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.GevSupportedIPConfigurationLLA = " << cameraObject->GevSupportedIPConfigurationLLA.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.GevSupportedIPConfigurationPersistentIP = " << cameraObject->GevSupportedIPConfigurationPersistentIP.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.GevSupportedOptionalCommandsConcatenation = " << cameraObject->GevSupportedOptionalCommandsConcatenation.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.GevSupportedOptionalCommandsEVENT = " << cameraObject->GevSupportedOptionalCommandsEVENT.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.GevSupportedOptionalCommandsEVENTDATA = " << cameraObject->GevSupportedOptionalCommandsEVENTDATA.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.GevSupportedOptionalCommandsPACKETRESEND = " <<cameraObject->GevSupportedOptionalCommandsPACKETRESEND.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.GevSupportedOptionalCommandsWRITEMEM = " << cameraObject->GevSupportedOptionalCommandsWRITEMEM.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.GevSupportedOptionalLegacy16BitBlockID = " << cameraObject->GevSupportedOptionalLegacy16BitBlockID.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.GevTimestampControlLatch = " << cameraObject->GevTimestampControlLatch.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.GevTimestampControlLatchReset = " << cameraObject->GevTimestampControlLatchReset.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.GevTimestampControlReset = " << cameraObject->GevTimestampControlReset.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.GevTimestampTickFrequency = " << cameraObject->GevTimestampTickFrequency.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.GevTimestampValue = " << cameraObject->GevTimestampValue.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.GevVersionMajor = " << cameraObject->GevVersionMajor.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.GevVersionMinor = " << cameraObject->GevVersionMinor.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.GrayValueAdjustmentDampingAbs = " << cameraObject->GrayValueAdjustmentDampingAbs.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.GrayValueAdjustmentDampingRaw = " << cameraObject->GrayValueAdjustmentDampingRaw.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.Height = " << cameraObject->Height.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.HeightMax = " << cameraObject->HeightMax.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.LUTEnable = " << cameraObject->LUTEnable.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.LUTIndex = " << cameraObject->LUTIndex.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.LUTSelector = " << cameraObject->LUTSelector.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.LUTValue = " << cameraObject->LUTValue.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.LastError = " << cameraObject->LastError.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.LateActionEventStreamChannelIndex = " << cameraObject->LateActionEventStreamChannelIndex.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.LateActionEventTimestamp = " << cameraObject->LateActionEventTimestamp.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.Line1RisingEdgeEventStreamChannelIndex = " << cameraObject->Line1RisingEdgeEventStreamChannelIndex.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.Line1RisingEdgeEventTimestamp = " << cameraObject->Line1RisingEdgeEventTimestamp.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.Line2RisingEdgeEventStreamChannelIndex = " << cameraObject->Line2RisingEdgeEventStreamChannelIndex.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.Line2RisingEdgeEventTimestamp = " << cameraObject->Line2RisingEdgeEventTimestamp.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.Line3RisingEdgeEventStreamChannelIndex = " << cameraObject->Line3RisingEdgeEventStreamChannelIndex.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.Line3RisingEdgeEventTimestamp = " << cameraObject->Line3RisingEdgeEventTimestamp.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.Line4RisingEdgeEventStreamChannelIndex = " << cameraObject->Line4RisingEdgeEventStreamChannelIndex.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.Line4RisingEdgeEventTimestamp = " << cameraObject->Line4RisingEdgeEventTimestamp.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.LineDebouncerTimeAbs = " << cameraObject->LineDebouncerTimeAbs.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.LineFormat = " << cameraObject->LineFormat.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.LineInverter = " << cameraObject->LineInverter.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.LineLogic = " << cameraObject->LineLogic.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.LineMode = " << cameraObject->LineMode.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.LineSelector = " << cameraObject->LineSelector.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.LineSource = " << cameraObject->LineSource.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.LineStartOvertriggerEventStreamChannelIndex = " << cameraObject->LineStartOvertriggerEventStreamChannelIndex.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.LineStartOvertriggerEventTimestamp = " <<cameraObject->LineStartOvertriggerEventTimestamp.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.LineStatus = " <<cameraObject->LineStatus.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.LineStatusAll = " << cameraObject->LineStatusAll.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.LineTermination = " << cameraObject->LineTermination.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.MinOutPulseWidthAbs = " << cameraObject->MinOutPulseWidthAbs.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.OffsetX = " << cameraObject->OffsetX.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.OverTemperature = " << cameraObject->OverTemperature.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.OverTemperatureEventStreamChannelIndex = " << cameraObject->OverTemperatureEventStreamChannelIndex.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.OverTemperatureEventTimestamp = " << cameraObject->OverTemperatureEventTimestamp.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.ParameterSelector = " << cameraObject->ParameterSelector.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.PayloadSize = " << cameraObject->PayloadSize.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.PixelColorFilter = " << cameraObject->PixelColorFilter.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.PixelDynamicRangeMax = " << cameraObject->PixelDynamicRangeMax.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.PixelDynamicRangeMin = " << cameraObject->PixelDynamicRangeMin.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.PixelFormat = " <<cameraObject->PixelFormat.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.PixelFormatLegacy = " << cameraObject->PixelFormatLegacy.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.PixelSize = " << cameraObject->PixelSize.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.ReadoutTimeAbs = " << cameraObject->ReadoutTimeAbs.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.RemoveLimits = " << cameraObject->RemoveLimits.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.ResultingFramePeriodAbs = " << cameraObject->ResultingFramePeriodAbs.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.ResultingFrameRateAbs = " << cameraObject->ResultingFrameRateAbs.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.ResultingLinePeriodAbs = " << cameraObject->ResultingLinePeriodAbs.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.ResultingLineRateAbs = " << cameraObject->ResultingLineRateAbs.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.ReverseX = " << cameraObject->ReverseX.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.ReverseY = " << cameraObject->ReverseY.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.SensorHeight = " << cameraObject->SensorHeight.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.SensorWidth = " << cameraObject->SensorWidth.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.ShadingEnable = " << cameraObject->ShadingEnable.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.ShadingSelector = " << cameraObject->ShadingSelector.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.ShadingSetActivate = " << cameraObject->ShadingSetActivate.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.ShadingSetCreate = " << cameraObject->ShadingSetCreate.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.ShadingSetDefaultSelector = " << cameraObject->ShadingSetDefaultSelector.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.ShadingSetSelector = " << cameraObject->ShadingSetSelector.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.ShadingStatus = " << cameraObject->ShadingStatus.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.ShaftEncoderModuleCounter = " << cameraObject->ShaftEncoderModuleCounter.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.ShaftEncoderModuleCounterMax = " << cameraObject->ShaftEncoderModuleCounterMax.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.ShaftEncoderModuleCounterMode = " << cameraObject->ShaftEncoderModuleCounterMode.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.ShaftEncoderModuleCounterReset = " << cameraObject->ShaftEncoderModuleCounterReset.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.ShaftEncoderModuleLineSelector = " << cameraObject->ShaftEncoderModuleLineSelector.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.ShaftEncoderModuleLineSource = " << cameraObject->ShaftEncoderModuleLineSource.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.ShaftEncoderModuleMode = " << cameraObject->ShaftEncoderModuleMode.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.ShaftEncoderModuleReverseCounterMax = " << cameraObject->ShaftEncoderModuleReverseCounterMax.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.ShaftEncoderModuleReverseCounterReset = " << cameraObject->ShaftEncoderModuleReverseCounterReset.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.SpatialCorrection = " << cameraObject->SpatialCorrection.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.SubstrateVoltage = " << cameraObject->SubstrateVoltage.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.SyncFreeRunTimerEnable = " << cameraObject->SyncFreeRunTimerEnable.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.SyncFreeRunTimerStartTimeHigh = " << cameraObject->SyncFreeRunTimerStartTimeHigh.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.SyncFreeRunTimerStartTimeLow = " << cameraObject->SyncFreeRunTimerStartTimeLow.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.SyncFreeRunTimerTriggerRateAbs = " << cameraObject->SyncFreeRunTimerTriggerRateAbs.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.SyncFreeRunTimerUpdate = " << cameraObject->SyncFreeRunTimerUpdate.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.TemperatureAbs = " << cameraObject->TemperatureAbs.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.TemperatureSelector = " << cameraObject->TemperatureSelector.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.TemperatureState = " << cameraObject->TemperatureState.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.TestImageSelector = " << cameraObject->TestImageSelector.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.TriggerActivation = " << cameraObject->TriggerActivation.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.TriggerDelayAbs = " << cameraObject->TriggerDelayAbs.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.TriggerDelayLineTriggerCount = " << cameraObject->TriggerDelayLineTriggerCount.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.TriggerDelaySource = " << cameraObject->TriggerDelaySource.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.TriggerMode = " << cameraObject->TriggerMode.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.TriggerPartialClosingFrame = " << cameraObject->TriggerPartialClosingFrame.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.TriggerSelector = " << cameraObject->TriggerSelector.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.TriggerSoftware = " << cameraObject->TriggerSoftware.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.TriggerSource = " << cameraObject->TriggerSource.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.UserDefinedValue = " << cameraObject->UserDefinedValue.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.UserDefinedValueSelector = " << cameraObject->UserDefinedValueSelector.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.UserOutputSelector = " << cameraObject->UserOutputSelector.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.UserOutputValue = " << cameraObject->UserOutputValue.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.UserOutputValueAll = " << cameraObject->UserOutputValueAll.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.UserSetDefaultSelector = " << cameraObject->UserSetDefaultSelector.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.UserSetLoad = " << cameraObject->UserSetLoad.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.UserSetSave = " << cameraObject->UserSetSave.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.UserSetSelector = " << cameraObject->UserSetSelector.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.VirtualLine1RisingEdgeEventStreamChannelIndex = " << cameraObject->VirtualLine1RisingEdgeEventStreamChannelIndex.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.VirtualLine1RisingEdgeEventTimestamp = " << cameraObject->VirtualLine1RisingEdgeEventTimestamp.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.VirtualLine2RisingEdgeEventStreamChannelIndex = " << cameraObject->VirtualLine2RisingEdgeEventStreamChannelIndex.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.VirtualLine2RisingEdgeEventTimestamp = " << cameraObject->VirtualLine2RisingEdgeEventTimestamp.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.VirtualLine3RisingEdgeEventStreamChannelIndex = " << cameraObject->VirtualLine3RisingEdgeEventStreamChannelIndex.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.VirtualLine3RisingEdgeEventTimestamp = " << cameraObject->VirtualLine3RisingEdgeEventTimestamp.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.VirtualLine4RisingEdgeEventStreamChannelIndex = " << cameraObject->VirtualLine4RisingEdgeEventStreamChannelIndex.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.VirtualLine4RisingEdgeEventTimestamp = " << cameraObject->VirtualLine4RisingEdgeEventTimestamp.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.Width = " << cameraObject->Width.ToStringOrDefault("<not readable>") << std::endl;
        cout << "camera.WidthMax = " << cameraObject->WidthMax.ToStringOrDefault("<not readable>") << std::endl;


        try {
            PylonInitialize();

            cameraObject->Attach(CTlFactory::GetInstance().CreateFirstDevice());
            cameraObject->RegisterImageEventHandler(this,
                                                    RegistrationMode_ReplaceAll,
                                                    Cleanup_None);

            cameraObject->StartGrabbing(GrabStrategy_LatestImageOnly,
                                        GrabLoop_ProvidedByInstantCamera);

            isCameraOpen = true;
        }
        catch (const GenericException& e) {
            QMessageBox::critical(this, "Camera Error", QString("Failed to initialize camera: %1").arg(e.GetDescription()));
            isCameraOpen = false;
        }


        // show the default values
        ui->connection_status_label->setText("Connected");
        ui->connection_status_label->setStyleSheet("QLabel { color: green; }");
        ui->camera_name_label->setText(cameraObject->GetDeviceInfo().GetModelName().c_str());

        ui->gain_raw_label->setText(QString::number(gain_raw_value));
        ui->black_level_label->setText(QString::number(blackLevelValue));
        ui->exposure_time_us_label->setText(QString::number(exposureTimeMicroSecondValue));
        ui->acq_frame_rate_label->setText(QString::number(acquisitionFrameRateValue));
        ui->width_label->setText(QString::number(widthValue));
        ui->height_label->setText(QString::number(heightValue));
        ui->binningHorizantal_label->setText(QString::number(binningHorizantalValue));



    } catch (const GenericException &e) {
        isCameraOpen = false;

        // show parametres if camera Dissconnected
        ui->connection_status_label->setText("Disconnected");
        ui->connection_status_label->setStyleSheet("QLabel { color: red; }");
        ui->camera_name_label->setText(" ");

        ui->gain_raw_label->setText(QString::number(0));
        ui->black_level_label->setText(QString::number(0));
        ui->exposure_time_us_label->setText(QString::number(0));
        ui->acq_frame_rate_label->setText(QString::number(0));
        ui->width_label->setText(QString::number(0));
        ui->height_label->setText(QString::number(0));

        cerr << "An exception occurred." << endl
             << e.GetDescription() << endl;

        QMessageBox::critical(this, "Camera Error", "Camera initialization failed!!!!");

        exitCode = 1;
    }


    // change value of gain_raw with slider
    connect(ui->horizontalSlider_gain_raw, &QSlider::valueChanged, this, [=](int value){
        gain_raw_value = value;
        ui->gain_raw_label->setText(QString::number(gain_raw_value));
        ui->spinBox_gain_raw->setValue(gain_raw_value);
    });


    // change value of gain_raw with spinBox
    connect(ui->spinBox_gain_raw, QOverload<int>::of(&QSpinBox::valueChanged), this, [=](int value){
        gain_raw_value = value;
        ui->gain_raw_label->setText(QString::number(gain_raw_value));
        ui->horizontalSlider_gain_raw->setValue(gain_raw_value);
    });


    // change value of Black Level with slider
    connect(ui->horizontalSlider_black_level, &QSlider::valueChanged, this, [=](int value){
        blackLevelValue = value;
        ui->black_level_label->setText(QString::number(blackLevelValue));
        ui->spinBox_black_level->setValue(blackLevelValue);
    });

    // change value of Black Level with spinBox
    connect(ui->spinBox_black_level, QOverload<int>::of(&QSpinBox::valueChanged), this, [=](int value){
        blackLevelValue = value;
        ui->black_level_label->setText(QString::number(blackLevelValue));
        ui->spinBox_black_level->setValue(blackLevelValue);
    });


    // change value of Gamma with slider
    connect(ui->horizontalSlider_gamma, &QSlider::valueChanged, this, [=](int value){
        gammaEnableValue = true;
        gammaValue = value * 0.005;
        ui->gamma_label->setText(QString::number(gammaValue, 'f', 3));
        ui->doubleSpinBox_gamma->setValue(gammaValue);
    });

    // change value of Gamma with spinBox
    connect(ui->doubleSpinBox_gamma, QOverload<double>::of(&QDoubleSpinBox::valueChanged), this, [=](double value){
        gammaEnableValue = true;
        gammaValue = value;
        ui->gamma_label->setText(QString::number(gammaValue, 'f', 3));
        int sliderVal = qRound(gammaValue / 0.005);

        ui->horizontalSlider_gamma->setValue(sliderVal);
    });


    // change value of exposure time (us) with slider
    connect(ui->horizontalSlider_exposure_time_us, &QSlider::valueChanged, this, [=](int value){
        exposureTimeMicroSecondValue = value;
        ui->exposure_time_us_label->setText(QString::number(exposureTimeMicroSecondValue));
        ui->spinBox_exposure_time_us->setValue(exposureTimeMicroSecondValue);
    });

    // change value of exposure time (us) with spinBox
    connect(ui->spinBox_exposure_time_us, QOverload<int>::of(&QSpinBox::valueChanged), this, [=](int value){
        exposureTimeMicroSecondValue = value;
        ui->exposure_time_us_label->setText(QString::number(exposureTimeMicroSecondValue));
        ui->horizontalSlider_exposure_time_us->setValue(exposureTimeMicroSecondValue);
    });


    // change value of Acquisition Frame Rate with slider
    connect(ui->horizontalSlider_acq_frame_rate, &QSlider::valueChanged, this, [=](int value){
        acquisitionFrameRateValue = value * 0.01;
        ui->acq_frame_rate_label->setText(QString::number(acquisitionFrameRateValue, 'f', 2));
        ui->doubleSpinBox_acq_frame_rate->setValue(acquisitionFrameRateValue);
    });

    // change value of Acquisition Frame Rate with spinBox
    connect(ui->doubleSpinBox_acq_frame_rate, QOverload<double>::of(&QDoubleSpinBox::valueChanged), this, [=](double value){
        acquisitionFrameRateValue = value;
        ui->acq_frame_rate_label->setText(QString::number(acquisitionFrameRateValue, 'f', 2));

        int sliderVal = qRound(acquisitionFrameRateValue / 0.01);
        ui->horizontalSlider_acq_frame_rate->setValue(sliderVal);
    });


    // change value of width with slider
    connect(ui->horizontalSlider_width, &QSlider::valueChanged, this, [=](int value){
        widthValue = value;
        ui->width_label->setText(QString::number(widthValue));
        ui->spinBox_width->setValue(widthValue);
        ui->camera_label->resize(widthValue, heightValue);
    });

    // change value of width with spinBox
    connect(ui->spinBox_width, QOverload<int>::of(&QSpinBox::valueChanged), this, [=](int value){
        widthValue = value;
        ui->width_label->setText(QString::number(widthValue));
        ui->horizontalSlider_width->setValue(widthValue);
        ui->camera_label->resize(widthValue, heightValue);
    });

    // change value of height with slider
    connect(ui->horizontalSlider_height, &QSlider::valueChanged, this, [=](int value){
        heightValue = value;
        ui->height_label->setText(QString::number(heightValue));
        ui->spinBox_height->setValue(heightValue);
        ui->camera_label->resize(widthValue, heightValue);
    });

    // change value of height with spinBox
    connect(ui->spinBox_height, QOverload<int>::of(&QSpinBox::valueChanged), this, [=](int value){
        heightValue = value;
        ui->height_label->setText(QString::number(heightValue));
        ui->horizontalSlider_height->setValue(heightValue);
        ui->camera_label->resize(widthValue, heightValue);
    });

    // change value of binning horizantal with slider
    connect(ui->horizontalSlider_binningHorizantal, &QSlider::valueChanged, this, [=](int value){
        binningHorizantalValue = value;
        ui->binningHorizantal_label->setText(QString::number(heightValue));
        ui->spinBox_binningHorizantal->setValue(heightValue);
    });

    // change value of binning horizantal with spinBox
    connect(ui->spinBox_binningHorizantal, QOverload<int>::of(&QSpinBox::valueChanged), this, [=](int value){
        binningHorizantalValue = value;
        ui->binningHorizantal_label->setText(QString::number(heightValue));
        ui->horizontalSlider_binningHorizantal->setValue(heightValue);
    });

    connect(ui->pushButton_apply, &QPushButton::clicked, this, [=]() {

        try {
            //Gain
            cameraObject->GainRaw.SetValue(gain_raw_value);

            // Black Level
            cameraObject->BlackLevelRaw.SetValue(blackLevelValue);

            // // Gamma
            // if (gammaEnableValue){
            //     cameraObject->GammaEnable.SetValue(gammaEnableValue);
            //     cameraObject->Gamma.SetValue(gammaValue);
            // }

            // Exposure Time Micro-second
            cameraObject->ExposureTimeAbs.SetValue(exposureTimeMicroSecondValue);

            // Frame rate
            cameraObject->AcquisitionFrameRateAbs.SetValue(acquisitionFrameRateValue);

            qDebug() << "Camera parameters applied successfully!";

        }

        catch (const GenericException &e) {
            QString errorMsg = QString("Error applying camera parameters:\n%1").arg(e.GetDescription());
            QMessageBox::critical(this, "Camera Error", errorMsg);
            qDebug() << "Error applying camera parameters:" << e.GetDescription();
        }
    });
}

void MainWindow::OnImageGrabbed(CInstantCamera& /*camera*/, const CGrabResultPtr& ptrGrabResult)
{
    if (ptrGrabResult->GrabSucceeded())
    {
        cv::Mat img(ptrGrabResult->GetHeight(),
                    ptrGrabResult->GetWidth(),
                    CV_8UC1,
                    (uint8_t*)ptrGrabResult->GetBuffer());

        QImage qimg(img.data, img.cols, img.rows, img.step, QImage::Format_Grayscale8);

        QMetaObject::invokeMethod(this, [this, qimg]() {
            displayImage(qimg.copy());
        }, Qt::QueuedConnection);
    }
    else
    {
        qWarning("Grab failed: %s", ptrGrabResult->GetErrorDescription().c_str());
    }
}

void MainWindow::displayImage(const QImage &qimg)
{
    ui->camera_label->setPixmap(QPixmap::fromImage(qimg).scaled(
        ui->camera_label->size(),
        Qt::KeepAspectRatio,
        Qt::SmoothTransformation));
}

MainWindow::~MainWindow()
{
    if (cameraObject) {
        if (cameraObject->IsGrabbing()) {
            cameraObject->StopGrabbing();
        }
        if (cameraObject->IsOpen()) {
            cameraObject->Close();
        }
        delete cameraObject;
    }

    delete ui;
}
