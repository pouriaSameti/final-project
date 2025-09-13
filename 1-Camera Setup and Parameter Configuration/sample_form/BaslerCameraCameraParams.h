//-----------------------------------------------------------------------------
//  Basler pylon SDK
//  Copyright (c) 2023-2025 Basler AG
//  http://www.baslerweb.com
//-----------------------------------------------------------------------------

/*!
\file
\brief A parameter class containing all parameters as members that are available for raL4096-24gm

Sources:
raL4096-24gm 105994-15;U;raL4096_24gm;V1.1-2;0
*/

//-----------------------------------------------------------------------------
//  This file is generated automatically
//  Do not modify!
//-----------------------------------------------------------------------------

#ifndef BASLER_PYLON_BASLERCAMERACAMERAPARAMS_H
#define BASLER_PYLON_BASLERCAMERACAMERAPARAMS_H

#pragma once

// common parameter types
#include <pylon/ParameterIncludes.h>
#include <pylon/EnumParameterT.h>

#ifdef _MSC_VER
#pragma warning( push )
#pragma warning( disable : 4250 ) // warning C4250: 'Pylon::CXYZParameter': inherits 'Pylon::CParameter::Pylon::CParameter::ZYX' via dominance
#endif

//! The namespace containing the a control interface and related enumeration types for raL4096-24gm
namespace Pylon
{
namespace BaslerCameraCameraParams_Params
{
    //**************************************************************************************************
    // Enumerations
    //**************************************************************************************************
    //! Valid values for AcquisitionMode
    enum AcquisitionModeEnums
    {
        AcquisitionMode_Continuous,  //!< Sets the acquisition mode to continuous - Applies to: raL4096-24gm
        AcquisitionMode_SingleFrame  //!< Sets the acquisition mode to single frame - Applies to: raL4096-24gm
    };

    //! Valid values for AcquisitionStatusSelector
    enum AcquisitionStatusSelectorEnums
    {
        AcquisitionStatusSelector_AcquisitionActive,  //!< Device is currently doing an acquisition of one or many frames - Applies to: raL4096-24gm
        AcquisitionStatusSelector_AcquisitionTransfer,  //!< Device is currently transferring an acquisition of one or many frames - Applies to: raL4096-24gm
        AcquisitionStatusSelector_AcquisitionTriggerWait,  //!< Device is currently waiting for a trigger for the capture of one or many frames - Applies to: raL4096-24gm
        AcquisitionStatusSelector_ExposureActive,  //!< Device is doing the exposure of a frame - Applies to: raL4096-24gm
        AcquisitionStatusSelector_FrameActive,  //!< Device is currently doing the capture of a frame - Applies to: raL4096-24gm
        AcquisitionStatusSelector_FrameTransfer,  //!< Device is currently transferring a frame - Applies to: raL4096-24gm
        AcquisitionStatusSelector_FrameTriggerWait,  //!< Device is currently waiting for a Frame trigger - Applies to: raL4096-24gm
        AcquisitionStatusSelector_LineTriggerWait  //!< Device is currently waiting for a line trigger - Applies to: raL4096-24gm
    };

    //! Valid values for AutoFunctionAOISelector
    enum AutoFunctionAOISelectorEnums
    {
        AutoFunctionAOISelector_AOI1,  //!< Selects Auto Function AOI 1 - Applies to: raL4096-24gm
        AutoFunctionAOISelector_AOI2  //!< Selects Auto Function AOI 2 - Applies to: raL4096-24gm
    };

    //! Valid values for AutoFunctionProfile
    enum AutoFunctionProfileEnums
    {
        AutoFunctionProfile_ExposureMinimum,  //!< Exposure Time at minimum - Applies to: raL4096-24gm
        AutoFunctionProfile_GainMinimum  //!< Keep gain at minimum - Applies to: raL4096-24gm
    };

    //! Valid values for BinningModeHorizontal
    enum BinningModeHorizontalEnums
    {
        BinningModeHorizontal_Summing  //!< Sets the binning mode to summing - Applies to: raL4096-24gm
    };

    //! Valid values for BinningModeVertical
    enum BinningModeVerticalEnums
    {
        BinningModeVertical_Todo  //!< TODO - Applies to: raL4096-24gm
    };

    //! Valid values for BlackLevelSelector
    enum BlackLevelSelectorEnums
    {
        BlackLevelSelector_All  //!< Selects all black level controls for adjustment - Applies to: raL4096-24gm
    };

    //! Valid values for ChunkSelector
    enum ChunkSelectorEnums
    {
        ChunkSelector_Todo  //!< TODO - Applies to: raL4096-24gm
    };

    //! Valid values for CounterEventSource
    enum CounterEventSourceEnums
    {
        CounterEventSource_FrameStart  //!< Counts the number of Frame Start - Applies to: raL4096-24gm
    };

    //! Valid values for CounterResetSource
    enum CounterResetSourceEnums
    {
        CounterResetSource_Line1,  //!< Selects line 1 as the source for counter reset - Applies to: raL4096-24gm
        CounterResetSource_Line2,  //!< Selects line 2 as the source for counter reset - Applies to: raL4096-24gm
        CounterResetSource_Line3,  //!< Selects line 3 as the source for counter reset - Applies to: raL4096-24gm
        CounterResetSource_Off,  //!< Disables counter reset - Applies to: raL4096-24gm
        CounterResetSource_Software  //!< Selects software command as the source for counter reset - Applies to: raL4096-24gm
    };

    //! Valid values for CounterSelector
    enum CounterSelectorEnums
    {
        CounterSelector_Counter2,  //!< Selects counter 2 for configuration - Applies to: raL4096-24gm
        CounterSelector_Counter3  //!< Selects counter 3 for configuration - Applies to: raL4096-24gm
    };

    //! Valid values for DeviceScanType
    enum DeviceScanTypeEnums
    {
        DeviceScanType_Areascan,  //!< Indicates that the device has an area scan type of sensor - Applies to: raL4096-24gm
        DeviceScanType_Linescan  //!< Indicates that the device has an Line scan type of sensor - Applies to: raL4096-24gm
    };

    //! Valid values for EventNotification
    enum EventNotificationEnums
    {
        EventNotification_GenICamEvent,  //!< Sets the event notification type to GenICam event - Applies to: raL4096-24gm
        EventNotification_Off,  //!< Sets event notification to off - Applies to: raL4096-24gm
        EventNotification_On  //!< Sets the enables the event notification - Applies to: raL4096-24gm
    };

    //! Valid values for EventSelector
    enum EventSelectorEnums
    {
        EventSelector_AcquisitionStartOvertrigger,  //!< Selects the acquisition start overtrigger event for enabling - Applies to: raL4096-24gm
        EventSelector_ActionLate,  //!< TODO - Applies to: raL4096-24gm
        EventSelector_EventOverrun,  //!< Selects the event overrun event for enabling - Applies to: raL4096-24gm
        EventSelector_FrameStartOvertrigger,  //!< Selects the frame start overtrigger event for enabling - Applies to: raL4096-24gm
        EventSelector_FrameTimeout,  //!< Selects the frame timeout event for enabling - Applies to: raL4096-24gm
        EventSelector_LineStartOvertrigger  //!< Selects the line start overtrigger event for enabling - Applies to: raL4096-24gm
    };

    //! Valid values for ExpertFeatureAccessSelector
    enum ExpertFeatureAccessSelectorEnums
    {
        ExpertFeatureAccessSelector_ExpertFeature1,  //!< Selects the Expert Feature 1 for configuration - Applies to: raL4096-24gm
        ExpertFeatureAccessSelector_ExpertFeature1_Legacy,  //!< Selects the Expert Feature 1 for configuration - Applies to: raL4096-24gm
        ExpertFeatureAccessSelector_ExpertFeature2,  //!< Selects the Expert Feature 2 for configuration - Applies to: raL4096-24gm
        ExpertFeatureAccessSelector_ExpertFeature3,  //!< Selects the Expert Feature 3 for configuration - Applies to: raL4096-24gm
        ExpertFeatureAccessSelector_ExpertFeature4,  //!< Selects the Expert Feature 4 for configuration - Applies to: raL4096-24gm
        ExpertFeatureAccessSelector_ExpertFeature5,  //!< Selects the Expert Feature 5 for configuration - Applies to: raL4096-24gm
        ExpertFeatureAccessSelector_ExpertFeature6,  //!< Selects the Expert Feature 6 for configuration - Applies to: raL4096-24gm
        ExpertFeatureAccessSelector_ExpertFeature7  //!< Selects the Expert Feature 7 for configuration - Applies to: raL4096-24gm
    };

    //! Valid values for ExposureAuto
    enum ExposureAutoEnums
    {
        ExposureAuto_Continuous,  //!< Sets operation mode to 'continuous' - Applies to: raL4096-24gm
        ExposureAuto_Off,  //!< Disables the Exposure Auto function - Applies to: raL4096-24gm
        ExposureAuto_Once  //!< Sets operation mode to 'once' - Applies to: raL4096-24gm
    };

    //! Valid values for ExposureMode
    enum ExposureModeEnums
    {
        ExposureMode_Timed,  //!< Sets the exposure mode to timed - Applies to: raL4096-24gm
        ExposureMode_TriggerWidth  //!< Sets the exposure mode to trigger width - Applies to: raL4096-24gm
    };

    //! Valid values for FileOpenMode
    enum FileOpenModeEnums
    {
        FileOpenMode_Read,  //!< Selects read-only open mode - Applies to: raL4096-24gm
        FileOpenMode_Write  //!< Selects write-only open mode - Applies to: raL4096-24gm
    };

    //! Valid values for FileOperationSelector
    enum FileOperationSelectorEnums
    {
        FileOperationSelector_Close,  //!< Closes the file selected by FileSelector - Applies to: raL4096-24gm
        FileOperationSelector_Open,  //!< Opens the file selected by FileSelector - Applies to: raL4096-24gm
        FileOperationSelector_Read,  //!< Reads data from the selected file - Applies to: raL4096-24gm
        FileOperationSelector_Write  //!< Writes data to the selected file - Applies to: raL4096-24gm
    };

    //! Valid values for FileOperationStatus
    enum FileOperationStatusEnums
    {
        FileOperationStatus_Failure,  //!< Failing file operation - Applies to: raL4096-24gm
        FileOperationStatus_Success  //!< Successful file operation - Applies to: raL4096-24gm
    };

    //! Valid values for FileSelector
    enum FileSelectorEnums
    {
        FileSelector_ExpertFeature7File,  //!< Selects the file 'Expert Feature 7 File' - Applies to: raL4096-24gm
        FileSelector_UserData,  //!< Selects the file 'User Data' - Applies to: raL4096-24gm
        FileSelector_UserGainShading1,  //!< Selects the file 'User Gain Shading 1' - Applies to: raL4096-24gm
        FileSelector_UserGainShading2,  //!< Selects the file 'User Gain Shading 2' - Applies to: raL4096-24gm
        FileSelector_UserOffsetShading1,  //!< Selects the file 'User Offset Shading 1' - Applies to: raL4096-24gm
        FileSelector_UserOffsetShading2,  //!< Selects the file 'User Offset Shading 2' - Applies to: raL4096-24gm
        FileSelector_UserSet1,  //!< Selects the file 'User Set 1' - Applies to: raL4096-24gm
        FileSelector_UserSet2,  //!< Selects the file 'User Set 2' - Applies to: raL4096-24gm
        FileSelector_UserSet3  //!< Selects the file 'User Set 3' - Applies to: raL4096-24gm
    };

    //! Valid values for FrequencyConverterInputSource
    enum FrequencyConverterInputSourceEnums
    {
        FrequencyConverterInputSource_Line1,  //!< Selects line 1 as the input source - Applies to: raL4096-24gm
        FrequencyConverterInputSource_Line2,  //!< Selects line 2 as the input source - Applies to: raL4096-24gm
        FrequencyConverterInputSource_Line3,  //!< Selects line 3 as the input source - Applies to: raL4096-24gm
        FrequencyConverterInputSource_ShaftEncoderModuleOut  //!< Selects the output of the shaft encoder module as the input source - Applies to: raL4096-24gm
    };

    //! Valid values for FrequencyConverterSignalAlignment
    enum FrequencyConverterSignalAlignmentEnums
    {
        FrequencyConverterSignalAlignment_FallingEdge,  //!< For the falling edge of each received signal a falling edge of a generated signal is provided - Applies to: raL4096-24gm
        FrequencyConverterSignalAlignment_RisingEdge  //!< For the rising edge of each received signal a rising edge of a generated signal is provided - Applies to: raL4096-24gm
    };

    //! Valid values for GainAuto
    enum GainAutoEnums
    {
        GainAuto_Continuous,  //!< Sets operation mode to 'continuous' - Applies to: raL4096-24gm
        GainAuto_Off,  //!< Disables the Gain Auto function - Applies to: raL4096-24gm
        GainAuto_Once  //!< Sets operation mode to 'once' - Applies to: raL4096-24gm
    };

    //! Valid values for GainSelector
    enum GainSelectorEnums
    {
        GainSelector_All,  //!< Selects all gain controls for adjustment - Applies to: raL4096-24gm
        GainSelector_AnalogAll,  //!< Selects all analog gain controls for adjustment - Applies to: raL4096-24gm
        GainSelector_DigitalAll  //!< Selects all digital gain controls for adjustment - Applies to: raL4096-24gm
    };

    //! Valid values for GammaSelector
    enum GammaSelectorEnums
    {
        GammaSelector_User,  //!< Sets gamma to user defined curve - Applies to: raL4096-24gm
        GammaSelector_sRGB  //!< Sets gamma to fixed sRGB curve - Applies to: raL4096-24gm
    };

    //! Valid values for GevCCP
    enum GevCCPEnums
    {
        GevCCP_Control,  //!< Sets the control channel privilege feature to control - Applies to: raL4096-24gm
        GevCCP_Exclusive,  //!< Sets the control channel privilege feature to exclusive - Applies to: raL4096-24gm
        GevCCP_ExclusiveControl  //!< Sets the control channel privilege feature to exclusive control - Applies to: raL4096-24gm
    };

    //! Valid values for GevIEEE1588Status
    enum GevIEEE1588StatusEnums
    {
        GevIEEE1588Status_Todo  //!< TODO - Applies to: raL4096-24gm
    };

    //! Valid values for GevIEEE1588StatusLatched
    enum GevIEEE1588StatusLatchedEnums
    {
        GevIEEE1588StatusLatched_Todo  //!< TODO - Applies to: raL4096-24gm
    };

    //! Valid values for GevInterfaceSelector
    enum GevInterfaceSelectorEnums
    {
        GevInterfaceSelector_NetworkInterface0  //!< Selects network interface 0 for configuration - Applies to: raL4096-24gm
    };

    //! Valid values for GevStreamChannelSelector
    enum GevStreamChannelSelectorEnums
    {
        GevStreamChannelSelector_StreamChannel0  //!< Selects stream channel 0 for configuration - Applies to: raL4096-24gm
    };

    //! Valid values for LUTSelector
    enum LUTSelectorEnums
    {
        LUTSelector_Luminance  //!< Selects the luminance LUT for configuration - Applies to: raL4096-24gm
    };

    //! Valid values for LastError
    enum LastErrorEnums
    {
        LastError_InsufficientTriggerWidth,  //!< The trigger width was too short - Applies to: raL4096-24gm
        LastError_InvalidParameter,  //!< Indicates that a parameter was set to an invalid value - Applies to: raL4096-24gm
        LastError_NoError,  //!< Indicates that no error was detected - Applies to: raL4096-24gm
        LastError_OverTemperature,  //!< The over temperature state has been detected - Applies to: raL4096-24gm
        LastError_Overtrigger,  //!< Indicates that the camera was overtriggered - Applies to: raL4096-24gm
        LastError_PowerFailure,  //!< Indicates that the power supply is not sufficient - Applies to: raL4096-24gm
        LastError_Userset  //!< Indicates an error was detected while loading a userset - Applies to: raL4096-24gm
    };

    //! Valid values for LineFormat
    enum LineFormatEnums
    {
        LineFormat_LVDS,  //!< Sets the electrical configuration of the selected line to LVDS - Applies to: raL4096-24gm
        LineFormat_NoConnect,  //!< Sets the electrical configuration of the selected line to not connected - Applies to: raL4096-24gm
        LineFormat_OptoCoupled,  //!< Sets the electrical configuration of the selected line to opto-coupled - Applies to: raL4096-24gm
        LineFormat_RS422,  //!< Sets the electrical configuration of the selected line to RS-422 - Applies to: raL4096-24gm
        LineFormat_TTL,  //!< Sets the electrical configuration of the selected line to TTL - Applies to: raL4096-24gm
        LineFormat_TriState  //!< Sets the electrical configuration of the selected line to tri-state - Applies to: raL4096-24gm
    };

    //! Valid values for LineLogic
    enum LineLogicEnums
    {
        LineLogic_Negative,  //!< Applies to: raL4096-24gm
        LineLogic_Positive  //!< Applies to: raL4096-24gm
    };

    //! Valid values for LineMode
    enum LineModeEnums
    {
        LineMode_Input,  //!< Sets the mode for the selected line to input - Applies to: raL4096-24gm
        LineMode_Output  //!< Sets the mode for the selected line to output - Applies to: raL4096-24gm
    };

    //! Valid values for LineSelector
    enum LineSelectorEnums
    {
        LineSelector_Line1,  //!< Selects line 1 for configuration - Applies to: raL4096-24gm
        LineSelector_Line2,  //!< Selects line 2 for configuration - Applies to: raL4096-24gm
        LineSelector_Line3,  //!< Selects line 3 for configuration - Applies to: raL4096-24gm
        LineSelector_Out1,  //!< Selects output line 1 for configuration - Applies to: raL4096-24gm
        LineSelector_Out2  //!< Selects output line 2 for configuration - Applies to: raL4096-24gm
    };

    //! Valid values for LineSource
    enum LineSourceEnums
    {
        LineSource_Todo  //!< TODO - Applies to: raL4096-24gm
    };

    //! Valid values for ParameterSelector
    enum ParameterSelectorEnums
    {
        ParameterSelector_AutoTargetValue,  //!< Selects the target gray value for atuofunc - Applies to: raL4096-24gm
        ParameterSelector_ExposureOverhead,  //!< Selects the exposure overhead limits for configuration - Applies to: raL4096-24gm
        ParameterSelector_ExposureOverlapMax,  //!< Selects the exposure overlap time max limit for configuration - Applies to: raL4096-24gm
        ParameterSelector_Gain  //!< Selects the gain limits for configuration - Applies to: raL4096-24gm
    };

    //! Valid values for PixelColorFilter
    enum PixelColorFilterEnums
    {
        PixelColorFilter_None  //!< Indicates that no Bayer filter is present on the camera - Applies to: raL4096-24gm
    };

    //! Valid values for PixelFormat
    enum PixelFormatEnums
    {
        PixelFormat_BGR10Packed,  //!< Sets the pixel format to BGR 10 Packed - Applies to: raL4096-24gm
        PixelFormat_BGR12Packed,  //!< Sets the pixel format to BGR 12 Packed - Applies to: raL4096-24gm
        PixelFormat_BGR8Packed,  //!< Sets the pixel format to BGR 8 Packed - Applies to: raL4096-24gm
        PixelFormat_BGRA8Packed,  //!< Sets the pixel format to BGRA 8 Packed - Applies to: raL4096-24gm
        PixelFormat_Mono10,  //!< Sets the pixel format to Mono 10 - Applies to: raL4096-24gm
        PixelFormat_Mono12,  //!< Sets the pixel format to Mono 12 - Applies to: raL4096-24gm
        PixelFormat_Mono12Packed,  //!< Sets the pixel format to Mono 12 Packed - Applies to: raL4096-24gm
        PixelFormat_Mono8,  //!< Sets the pixel format to Mono 8 - Applies to: raL4096-24gm
        PixelFormat_RGB10Packed,  //!< Sets the pixel format to RGB 10 Packed - Applies to: raL4096-24gm
        PixelFormat_RGB10Planar,  //!< Sets the pixel format to RGB 10 Planar - Applies to: raL4096-24gm
        PixelFormat_RGB10V1Packed,  //!< Sets the pixel format to RGB 10V1 Packed - Applies to: raL4096-24gm
        PixelFormat_RGB10V2Packed,  //!< Sets the pixel format to RGB 10V2 Packed - Applies to: raL4096-24gm
        PixelFormat_RGB12Packed,  //!< Sets the pixel format to RGB 12 Packed - Applies to: raL4096-24gm
        PixelFormat_RGB12Planar,  //!< Sets the pixel format to RGB 12 Planar - Applies to: raL4096-24gm
        PixelFormat_RGB12V1Packed,  //!< Sets the pixel format to RGB 12 Packed  - Applies to: raL4096-24gm
        PixelFormat_RGB16Planar,  //!< Sets the pixel format to RGB 16 Planar - Applies to: raL4096-24gm
        PixelFormat_RGB8Packed,  //!< Sets the pixel format to RGB 8 Packed - Applies to: raL4096-24gm
        PixelFormat_RGB8Planar,  //!< Sets the pixel format to RGB 8 Planar - Applies to: raL4096-24gm
        PixelFormat_RGBA8Packed,  //!< Sets the pixel format to RGBA 8 Packed - Applies to: raL4096-24gm
        PixelFormat_YUV422Packed,  //!< Sets the pixel format to YUV 422 Packed - Applies to: raL4096-24gm
        PixelFormat_YUV422_YUYV_Packed  //!< Sets the pixel format to YUV 422 (YUYV) Packed - Applies to: raL4096-24gm
    };

    //! Valid values for PixelSize
    enum PixelSizeEnums
    {
        PixelSize_Bpp12,  //!< Indicates that the depth of the pixel values in the acquired images is 12 bits per pixel - Applies to: raL4096-24gm
        PixelSize_Bpp16,  //!< Indicates that the depth of the pixel values in the acquired images is 16 bits per pixel - Applies to: raL4096-24gm
        PixelSize_Bpp8  //!< Indicates that the depth of the pixel values in the acquired images is 8 bits per pixel - Applies to: raL4096-24gm
    };

    //! Valid values for ShadingSelector
    enum ShadingSelectorEnums
    {
        ShadingSelector_GainShading,  //!< Selects gain shading correction - Applies to: raL4096-24gm
        ShadingSelector_OffsetShading  //!< Selects offset shading correction - Applies to: raL4096-24gm
    };

    //! Valid values for ShadingSetCreate
    enum ShadingSetCreateEnums
    {
        ShadingSetCreate_Off,  //!< Applies to: raL4096-24gm
        ShadingSetCreate_Once  //!< Applies to: raL4096-24gm
    };

    //! Valid values for ShadingSetDefaultSelector
    enum ShadingSetDefaultSelectorEnums
    {
        ShadingSetDefaultSelector_DefaultShadingSet,  //!< Selects the default shading set as the bootup shading set - Applies to: raL4096-24gm
        ShadingSetDefaultSelector_UserShadingSet1,  //!< Selects the User Shading Set 1 as the bootup shading set - Applies to: raL4096-24gm
        ShadingSetDefaultSelector_UserShadingSet2  //!< Selects the User Shading Set 2 as the bootup shading set - Applies to: raL4096-24gm
    };

    //! Valid values for ShadingSetSelector
    enum ShadingSetSelectorEnums
    {
        ShadingSetSelector_DefaultShadingSet,  //!< Selects the default shading set for activation by the activate command - Applies to: raL4096-24gm
        ShadingSetSelector_UserShadingSet1,  //!< Selects the User shading Set 1 for activation by the activate command - Applies to: raL4096-24gm
        ShadingSetSelector_UserShadingSet2  //!< Selects the User shading Set 2 for activation by the activate command - Applies to: raL4096-24gm
    };

    //! Valid values for ShadingStatus
    enum ShadingStatusEnums
    {
        ShadingStatus_ActivateError,  //!< Indicates that the selected shading set could not be loaded - Applies to: raL4096-24gm
        ShadingStatus_CreateError,  //!< Indicates that a problem related to creating a shading set occurred - Applies to: raL4096-24gm
        ShadingStatus_NoError,  //!< Indicates that the latest operation related to shading correction was successful - Applies to: raL4096-24gm
        ShadingStatus_StartupSetError  //!< Indicates that a problem related to the startup shading set occurred - Applies to: raL4096-24gm
    };

    //! Valid values for ShaftEncoderModuleCounterMode
    enum ShaftEncoderModuleCounterModeEnums
    {
        ShaftEncoderModuleCounterMode_FollowDirection,  //!< Tick counter increments for forward ticks and decrements for reverse ticks - Applies to: raL4096-24gm
        ShaftEncoderModuleCounterMode_IgnoreDirection  //!< Tick counter increments for forward ticks and for reverse ticks - Applies to: raL4096-24gm
    };

    //! Valid values for ShaftEncoderModuleLineSelector
    enum ShaftEncoderModuleLineSelectorEnums
    {
        ShaftEncoderModuleLineSelector_PhaseA,  //!< Selects phase A of the shaft encoder - Applies to: raL4096-24gm
        ShaftEncoderModuleLineSelector_PhaseB  //!< Selects phase B of the shaft encoder - Applies to: raL4096-24gm
    };

    //! Valid values for ShaftEncoderModuleLineSource
    enum ShaftEncoderModuleLineSourceEnums
    {
        ShaftEncoderModuleLineSource_Line1,  //!< Selects input line 1 as signal source for the shaft encoder module - Applies to: raL4096-24gm
        ShaftEncoderModuleLineSource_Line2,  //!< Selects input line 2 as signal source for the shaft encoder module - Applies to: raL4096-24gm
        ShaftEncoderModuleLineSource_Line3  //!< Selects input line 3 as signal source for the shaft encoder module - Applies to: raL4096-24gm
    };

    //! Valid values for ShaftEncoderModuleMode
    enum ShaftEncoderModuleModeEnums
    {
        ShaftEncoderModuleMode_AnyDirection,  //!< Output of trigger signals for forward and reverse ticks provided the reverse counter is not counting - Applies to: raL4096-24gm
        ShaftEncoderModuleMode_ForwardOnly  //!< Output of trigger signals for forward ticks only provided the reverse counter is not decrementing - Applies to: raL4096-24gm
    };

    //! Valid values for TemperatureSelector
    enum TemperatureSelectorEnums
    {
        TemperatureSelector_Sensorboard  //!< Temperature on sensor board - Applies to: raL4096-24gm
    };

    //! Valid values for TemperatureState
    enum TemperatureStateEnums
    {
        TemperatureState_Critical,  //!< Critical - Applies to: raL4096-24gm
        TemperatureState_Error,  //!< Error - Applies to: raL4096-24gm
        TemperatureState_Ok  //!< Ok - Applies to: raL4096-24gm
    };

    //! Valid values for TestImageSelector
    enum TestImageSelectorEnums
    {
        TestImageSelector_Off,  //!< Sets the camera's test image generation capability to disabled - Applies to: raL4096-24gm
        TestImageSelector_Testimage1,  //!< Sets the camera to generate and transmit test images with a test image 1 pattern - Applies to: raL4096-24gm
        TestImageSelector_Testimage2,  //!< Sets the camera to generate and transmit test images with a test image 2 pattern - Applies to: raL4096-24gm
        TestImageSelector_Testimage3,  //!< Sets the camera to generate and transmit test images with a test image 3 pattern - Applies to: raL4096-24gm
        TestImageSelector_Testimage4,  //!< Sets the camera to generate and transmit test images with a test image 4 pattern - Applies to: raL4096-24gm
        TestImageSelector_Testimage5  //!< Sets the camera to generate and transmit test images with a test image 5 pattern - Applies to: raL4096-24gm
    };

    //! Valid values for TriggerActivation
    enum TriggerActivationEnums
    {
        TriggerActivation_FallingEdge,  //!< Sets the selected trigger to become active on the falling edge of the source signal - Applies to: raL4096-24gm
        TriggerActivation_LevelHigh,  //!< Sets the selected trigger to become active when  the source signal is high - Applies to: raL4096-24gm
        TriggerActivation_LevelLow,  //!< Sets the selected trigger to become active when  the source signal is low - Applies to: raL4096-24gm
        TriggerActivation_RisingEdge  //!< Sets the selected trigger to become active on the rising edge of the source signal - Applies to: raL4096-24gm
    };

    //! Valid values for TriggerDelaySource
    enum TriggerDelaySourceEnums
    {
        TriggerDelaySource_LineTrigger,  //!< Selects the trigger delay to be expressed as a number of line triggers - Applies to: raL4096-24gm
        TriggerDelaySource_Time_us  //!< Selects the trigger delay to be expressed as a time interval (in microseconds) - Applies to: raL4096-24gm
    };

    //! Valid values for TriggerMode
    enum TriggerModeEnums
    {
        TriggerMode_Off,  //!< Sets the mode for the selected trigger to off - Applies to: raL4096-24gm
        TriggerMode_On  //!< Sets the mode for the selected trigger to on - Applies to: raL4096-24gm
    };

    //! Valid values for TriggerSelector
    enum TriggerSelectorEnums
    {
        TriggerSelector_AcquisitionStart,  //!< Selects the acquisition start trigger for configuration - Applies to: raL4096-24gm
        TriggerSelector_FrameStart,  //!< Selects the frame start trigger for configuration - Applies to: raL4096-24gm
        TriggerSelector_LineStart  //!< Selects the line start trigger for configuration - Applies to: raL4096-24gm
    };

    //! Valid values for TriggerSource
    enum TriggerSourceEnums
    {
        TriggerSource_Action1,  //!< Sets the signal source for the selected trigger to action command signal 1 - Applies to: raL4096-24gm
        TriggerSource_FrequencyConverter,  //!< Sets the signal source for the selected trigger to the frequency converter module - Applies to: raL4096-24gm
        TriggerSource_Line1,  //!< Sets the signal source for the selected trigger to line 1 - Applies to: raL4096-24gm
        TriggerSource_Line2,  //!< Sets the signal source for the selected trigger to line 2 - Applies to: raL4096-24gm
        TriggerSource_Line3,  //!< Sets the signal source for the selected trigger to line 3 - Applies to: raL4096-24gm
        TriggerSource_ShaftEncoderModuleOut,  //!< Sets the signal source for the selected trigger to the shaft encoder module - Applies to: raL4096-24gm
        TriggerSource_Software  //!< Sets the software trigger as the signal source for the selected trigger - Applies to: raL4096-24gm
    };

    //! Valid values for UserDefinedValueSelector
    enum UserDefinedValueSelectorEnums
    {
        UserDefinedValueSelector_Value1,  //!< Applies to: raL4096-24gm
        UserDefinedValueSelector_Value2,  //!< Applies to: raL4096-24gm
        UserDefinedValueSelector_Value3,  //!< Applies to: raL4096-24gm
        UserDefinedValueSelector_Value4,  //!< Applies to: raL4096-24gm
        UserDefinedValueSelector_Value5  //!< Applies to: raL4096-24gm
    };

    //! Valid values for UserOutputSelector
    enum UserOutputSelectorEnums
    {
        UserOutputSelector_UserOutput1,  //!< Selects user settable output signal 1 for configuration - Applies to: raL4096-24gm
        UserOutputSelector_UserOutput2  //!< Selects user settable output signal 2 for configuration - Applies to: raL4096-24gm
    };

    //! Valid values for UserSetDefaultSelector
    enum UserSetDefaultSelectorEnums
    {
        UserSetDefaultSelector_Default,  //!< Selects the default user set as the default startup set - Applies to: raL4096-24gm
        UserSetDefaultSelector_UserSet1,  //!< Selects user set 1 as the default startup set - Applies to: raL4096-24gm
        UserSetDefaultSelector_UserSet2,  //!< Selects user set 2 as the default startup set - Applies to: raL4096-24gm
        UserSetDefaultSelector_UserSet3  //!< Selects user set 3 as the default startup set - Applies to: raL4096-24gm
    };

    //! Valid values for UserSetSelector
    enum UserSetSelectorEnums
    {
        UserSetSelector_Default,  //!< Selects the default configuration set - Applies to: raL4096-24gm
        UserSetSelector_UserSet1,  //!< Selects user set 1 - Applies to: raL4096-24gm
        UserSetSelector_UserSet2,  //!< Selects user set 2 - Applies to: raL4096-24gm
        UserSetSelector_UserSet3  //!< Selects user set 3 - Applies to: raL4096-24gm
    };


    
    
    //**************************************************************************************************
    // Parameter class BaslerCameraCameraParams
    //**************************************************************************************************
    

    /*!
    \brief A parameter class containing all parameters as members that are available for raL4096-24gm

    Sources:
    raL4096-24gm 105994-15;U;raL4096_24gm;V1.1-2;0
    */
    class BaslerCameraCameraParams
    {
    //----------------------------------------------------------------------------------------------------------------
    // Implementation
    //----------------------------------------------------------------------------------------------------------------
    protected:
        // If you want to show the following methods in the help file
        // add the string HIDE_CLASS_METHODS to the ENABLED_SECTIONS tag in the doxygen file
        //! \cond HIDE_CLASS_METHODS
        
            //! Constructor
            BaslerCameraCameraParams(void);

            //! Destructor
            ~BaslerCameraCameraParams(void);

            //! Initializes the references
            void _Initialize(GENAPI_NAMESPACE::INodeMap*);

    //! \endcond

    private:
        class BaslerCameraCameraParams_Data;
        BaslerCameraCameraParams_Data* m_pData;


    //----------------------------------------------------------------------------------------------------------------
    // References to features
    //----------------------------------------------------------------------------------------------------------------
    public:
    //! \name Categories: AcquisitionTrigger
    //@{
    /*!
        \brief Sets the number of frames acquired in the multiframe acquisition mode - Applies to: raL4096-24gm

        This value sets the number of frames acquired in the multiframe acquisition mode
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=AcquisitionFrameCount" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& AcquisitionFrameCount;

    //@}


    //! \name Categories: AcquisitionTrigger
    //@{
    /*!
        \brief If the acquisition frame rate feature is enabled, this value sets the camera's acquisition frame rate in frames per second - Applies to: raL4096-24gm

        Sets the 'absolute' value of the acquisition frame rate. The 'absolute' value is a float value that sets the acquisition frame rate in frames per second.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=AcquisitionFrameRateAbs" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IFloatEx& AcquisitionFrameRateAbs;

    //@}


    //! \name Categories: AcquisitionTrigger
    //@{
    /*!
        \brief Enables setting the camera's acquisition frame rate to a specified value - Applies to: raL4096-24gm

        This boolean value enables setting  the camera's acquisition frame rate to a specified value.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=AcquisitionFrameRateEnable" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IBooleanEx& AcquisitionFrameRateEnable;

    //@}


    //! \name Categories: AcquisitionTrigger
    //@{
    /*!
        \brief Sets the camera's acquisition line rate in lines per second - Applies to: raL4096-24gm

        Sets the 'absolute' value of the acquisition line rate. The 'absolute' value is a float value that sets the acquisition line rate in lines per second.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=AcquisitionLineRateAbs" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IFloatEx& AcquisitionLineRateAbs;

    //@}


    //! \name Categories: AcquisitionTrigger
    //@{
    /*!
        \brief Sets the image acquisition mode - Applies to: raL4096-24gm

        This enumeration sets the image acquisition mode. 
    
        Visibility: Beginner

        Selecting Parameters: AcquisitionStart and AcquisitionStop

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=AcquisitionMode" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<AcquisitionModeEnums>& AcquisitionMode;

    //@}


    //! \name Categories: AcquisitionTrigger
    //@{
    /*!
        \brief Starts the acquisition of images - Applies to: raL4096-24gm

        This command starts the acquisition of images. If the camera is set for single frame acquisition, it will start acquisition of one frame. If the camera is set for continuous frame acquisition, it will start continuous acquisition of frames.
    
        Visibility: Beginner

        Selected by: AcquisitionMode

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=AcquisitionStart" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::ICommandEx& AcquisitionStart;

    //@}


    //! \name Categories: AcquisitionStartEventData
    //@{
    /*!
        \brief Indicates the stream channel index for an acquisition start  event - Applies to: raL4096-24gm

        This enumeration Indicates the stream channel index for an acquisition start  event
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=AcquisitionStartEventStreamChannelIndex" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& AcquisitionStartEventStreamChannelIndex;

    //@}


    //! \name Categories: AcquisitionStartEventData
    //@{
    /*!
        \brief Indicates the time stamp for an acquisition start  event - Applies to: raL4096-24gm

        This enumeration value indicates the time stamp for an acquisition start  event.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=AcquisitionStartEventTimestamp" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& AcquisitionStartEventTimestamp;

    //@}


    //! \name Categories: AcquisitionStartOvertriggerEventData
    //@{
    /*!
        \brief Indicates the stream channel index for an acquisition start overtrigger event - Applies to: raL4096-24gm

        This enumeration Indicates the stream channel index for an acquisition start overtrigger event
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=AcquisitionStartOvertriggerEventStreamChannelIndex" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& AcquisitionStartOvertriggerEventStreamChannelIndex;

    //@}


    //! \name Categories: AcquisitionStartOvertriggerEventData
    //@{
    /*!
        \brief Indicates the time stamp for an Acquisition start overtrigger event - Applies to: raL4096-24gm

        This enumeration value indicates the time stamp for an Acquisition start overtrigger event.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=AcquisitionStartOvertriggerEventTimestamp" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& AcquisitionStartOvertriggerEventTimestamp;

    //@}


    //! \name Categories: AcquisitionTrigger
    //@{
    /*!
        \brief Reads the selected acquisition status - Applies to: raL4096-24gm

        This feature is used to read the state (True or False) of the internal acquisition signal selected using AcquisitionStatusSelector.
    
        Visibility: Expert

        Selected by: AcquisitionStatusSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=AcquisitionStatus" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IBooleanEx& AcquisitionStatus;

    //@}


    //! \name Categories: AcquisitionTrigger
    //@{
    /*!
        \brief This enumeration is used to select which internal acquisition signal to read using AcquisitionStatus - Applies to: raL4096-24gm

    
        Visibility: Expert

        Selecting Parameters: AcquisitionStatus

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=AcquisitionStatusSelector" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<AcquisitionStatusSelectorEnums>& AcquisitionStatusSelector;

    //@}


    //! \name Categories: AcquisitionTrigger
    //@{
    /*!
        \brief Stops the acquisition of images - Applies to: raL4096-24gm

        If the camera is set for continuous image acquisition and acquisition has been started, this command stops the acquisition of images.
    
        Visibility: Beginner

        Selected by: AcquisitionMode

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=AcquisitionStop" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::ICommandEx& AcquisitionStop;

    //@}


    //! \name Categories: AcquisitionWaitEventData
    //@{
    /*!
        \brief Indicates the stream channel index for an acquisition wait event - Applies to: raL4096-24gm

        This enumeration Indicates the stream channel index for an acquisition wait event
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=AcquisitionWaitEventStreamChannelIndex" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& AcquisitionWaitEventStreamChannelIndex;

    //@}


    //! \name Categories: AcquisitionWaitEventData
    //@{
    /*!
        \brief Indicates the time stamp for an acquisition wait event - Applies to: raL4096-24gm

        This enumeration value indicates the time stamp for an acquisition wait event.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=AcquisitionWaitEventTimestamp" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& AcquisitionWaitEventTimestamp;

    //@}


    //! \name Categories: ActionControl
    //@{
    /*!
        \brief Number of action command interfaces - Applies to: raL4096-24gm

        Available number of action command interfaces on the camera device.
    
        Visibility: Guru

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ActionCommandCount" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& ActionCommandCount;

    //@}


    //! \name Categories: ActionControl
    //@{
    /*!
        \brief Authorization key - Applies to: raL4096-24gm

        Key to authorize the action for the device.
    
        Visibility: Guru

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ActionDeviceKey" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& ActionDeviceKey;

    //@}


    //! \name Categories: ActionControl
    //@{
    /*!
        \brief Defines a group of devices - Applies to: raL4096-24gm

        Used to define a group of devices on which actions can be executed.
    
        Visibility: Guru

        Selected by: ActionSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ActionGroupKey" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& ActionGroupKey;

    //@}


    //! \name Categories: ActionControl
    //@{
    /*!
        \brief Filters out particular devices from its group - Applies to: raL4096-24gm

        Used to filter out some particular devices from the group of devices defined by the action group key.
    
        Visibility: Guru

        Selected by: ActionSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ActionGroupMask" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& ActionGroupMask;

    //@}


    //! \name Categories: ActionControl
    //@{
    /*!
        \brief Selects the action command to configure  Once an action command has been selected, all changes to the action command settings will be applied to the selected action command - Applies to: raL4096-24gm

        This enumeration selects the action command to configure. Once an action command has been selected, all changes to the action command settings will be applied to the selected action command.
    
        Visibility: Beginner

        Selecting Parameters: ActionGroupKey and ActionGroupMask

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ActionSelector" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& ActionSelector;

    //@}


    //! \name Categories: AutoFunctions
    //@{
    /*!
        \brief Lower limit of the Auto Exposure Time (Abs) [us] parameter - Applies to: raL4096-24gm

    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=AutoExposureTimeAbsLowerLimit" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IFloatEx& AutoExposureTimeAbsLowerLimit;

    //@}


    //! \name Categories: AutoFunctions
    //@{
    /*!
        \brief Upper limit of the Auto Exposure Time (Abs) [us] parameter - Applies to: raL4096-24gm

    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=AutoExposureTimeAbsUpperLimit" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IFloatEx& AutoExposureTimeAbsUpperLimit;

    //@}


    //! \name Categories: AutoFunctionAOIs
    //@{
    /*!
        \brief Sets the height of the auto function area of interest in pixels - Applies to: raL4096-24gm

        This value sets the height of the auto function area of interest in pixels.
    
        Visibility: Beginner

        Selected by: AutoFunctionAOISelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=AutoFunctionAOIHeight" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& AutoFunctionAOIHeight;

    //@}


    //! \name Categories: AutoFunctionAOIs
    //@{
    /*!
        \brief Sets the starting column of the auto function area of interest in pixels - Applies to: raL4096-24gm

        This value sets the starting column of the auto function area of interest in pixels.
    
        Visibility: Beginner

        Selected by: AutoFunctionAOISelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=AutoFunctionAOIOffsetX" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& AutoFunctionAOIOffsetX;

    //@}


    //! \name Categories: AutoFunctionAOIs
    //@{
    /*!
        \brief Sets the starting line of the auto function area of interest in pixels - Applies to: raL4096-24gm

        This value sets the starting line of the auto function area of interest in pixels.
    
        Visibility: Beginner

        Selected by: AutoFunctionAOISelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=AutoFunctionAOIOffsetY" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& AutoFunctionAOIOffsetY;

    //@}


    //! \name Categories: AutoFunctionAOIs
    //@{
    /*!
        \brief Selects the Auto Function AOI - Applies to: raL4096-24gm

    
        Visibility: Beginner

        Selecting Parameters: AutoFunctionAOIWidth, AutoFunctionAOIHeight, AutoFunctionAOIOffsetX, AutoFunctionAOIOffsetY, AutoFunctionAOIUsageIntensity, AutoFunctionAOIUsageWhiteBalance and AutoFunctionAOIUsageRedLightCorrection

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=AutoFunctionAOISelector" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<AutoFunctionAOISelectorEnums>& AutoFunctionAOISelector;

    //@}


    //! \name Categories: AutoFunctionAOIs
    //@{
    /*!
        \brief  Applies to: raL4096-24gm

    
        Visibility: Beginner

        Selected by: AutoFunctionAOISelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=AutoFunctionAOIUsageIntensity" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IBooleanEx& AutoFunctionAOIUsageIntensity;

    //@}


    //! \name Categories: AutoFunctionAOIs
    //@{
    /*!
        \brief  Applies to: raL4096-24gm

    
        Visibility: Beginner

        Selected by: AutoFunctionAOISelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=AutoFunctionAOIUsageRedLightCorrection" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IBooleanEx& AutoFunctionAOIUsageRedLightCorrection;

    //@}


    //! \name Categories: AutoFunctionAOIs
    //@{
    /*!
        \brief  Applies to: raL4096-24gm

    
        Visibility: Beginner

        Selected by: AutoFunctionAOISelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=AutoFunctionAOIUsageWhiteBalance" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IBooleanEx& AutoFunctionAOIUsageWhiteBalance;

    //@}


    //! \name Categories: AutoFunctionAOIs
    //@{
    /*!
        \brief Sets the width of the auto function area of interest in pixels - Applies to: raL4096-24gm

        This value sets the width of the auto function area of interest in pixels.
    
        Visibility: Beginner

        Selected by: AutoFunctionAOISelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=AutoFunctionAOIWidth" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& AutoFunctionAOIWidth;

    //@}


    //! \name Categories: AutoFunctions
    //@{
    /*!
        \brief Selects the strategy for controlling gain and shutter simultaneously - Applies to: raL4096-24gm

        Selects the profile for controlling gain and shutter simultaneously.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=AutoFunctionProfile" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<AutoFunctionProfileEnums>& AutoFunctionProfile;

    //@}


    //! \name Categories: AutoFunctions
    //@{
    /*!
        \brief Lower limit of the Auto Gain (Raw) parameter - Applies to: raL4096-24gm

    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=AutoGainRawLowerLimit" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& AutoGainRawLowerLimit;

    //@}


    //! \name Categories: AutoFunctions
    //@{
    /*!
        \brief Upper limit of the Auto Gain (Raw) parameter - Applies to: raL4096-24gm

    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=AutoGainRawUpperLimit" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& AutoGainRawUpperLimit;

    //@}


    //! \name Categories: AutoFunctions
    //@{
    /*!
        \brief Target average grey value for Gain Auto and Exposure Auto - Applies to: raL4096-24gm

        The target average grey value may range from nearly black to nearly white. Note that this range of gray values applies to 8 bit and to 16 bit (12 bit effective) output modes. Accordingly, also for 16 bit output modes, black is represented by 0 and white by 255.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=AutoTargetValue" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& AutoTargetValue;

    //@}


    //! \name Categories: AutoFunctions
    //@{
    /*!
        \brief Balance White adjustment damping for Balance White Auto - Applies to: raL4096-24gm

        The Balance White adjustment damping parameter controls the rate by which the color components are changed when Balance White Auto is enabled.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=BalanceWhiteAdjustmentDampingAbs" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IFloatEx& BalanceWhiteAdjustmentDampingAbs;

    //@}


    //! \name Categories: AutoFunctions
    //@{
    /*!
        \brief Balance White adjustment damping for Balance White Auto - Applies to: raL4096-24gm

        The Balance White adjustment damping parameter controls the rate by which the color components are changed when Balance White Auto is enabled.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=BalanceWhiteAdjustmentDampingRaw" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& BalanceWhiteAdjustmentDampingRaw;

    //@}


    //! \name Categories: AOI
    //@{
    /*!
        \brief Sets the number of adjacent horizontal pixes to be summed - Applies to: raL4096-24gm

        Sets the number of binned adjacent horizontal pixels. Their charges will be summed and reported out of the camera as a single pixel.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=BinningHorizontal" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& BinningHorizontal;

    //@}


    //! \name Categories: AOI
    //@{
    /*!
        \brief Sets the horizontal binning mode - Applies to: raL4096-24gm

        This enumeration sets the horizontal binning mode.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=BinningModeHorizontal" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<BinningModeHorizontalEnums>& BinningModeHorizontal;

    //@}


    //! \name Categories: AOI
    //@{
    /*!
        \brief Sets the vertical binning mode - Applies to: raL4096-24gm

        This enumeration sets the vertical binning mode.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=BinningModeVertical" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<BinningModeVerticalEnums>& BinningModeVertical;

    //@}


    //! \name Categories: AOI
    //@{
    /*!
        \brief Sets the number of adjacent vertical pixes to be summed - Applies to: raL4096-24gm

        Sets the number of binned adjacent vertical pixels. Their charges will be summed and reported out of the camera as a single pixel.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=BinningVertical" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& BinningVertical;

    //@}


    //! \name Categories: AnalogControls
    //@{
    /*!
        \brief Sets the value of the selected black level control as an integer - Applies to: raL4096-24gm

        This value sets the selected black level control as an integer.
    
        Visibility: Beginner

        Selected by: BlackLevelSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=BlackLevelRaw" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& BlackLevelRaw;

    //@}


    //! \name Categories: AnalogControls
    //@{
    /*!
        \brief Selcts a black level control to configure  Once a black level control has been selected, all changes to the black level settings will be applied to the selected control - Applies to: raL4096-24gm

        This enumeration selects the black level control to configure. Once a black level control has been selected, all changes to the black level settings will be applied to the selected control.
    
        Visibility: Beginner

        Selecting Parameters: BlackLevelRaw

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=BlackLevelSelector" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<BlackLevelSelectorEnums>& BlackLevelSelector;

    //@}


    //! \name Categories: AOI
    //@{
    /*!
        \brief Enables the horizontal centering of the image - Applies to: raL4096-24gm

        This feature is used to center the image horizontally.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=CenterX" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IBooleanEx& CenterX;

    //@}


    //! \name Categories: AOI
    //@{
    /*!
        \brief Enables the vertical centering of the image - Applies to: raL4096-24gm

        This feature is used to center the image vertically.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=CenterY" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IBooleanEx& CenterY;

    //@}


    //! \name Categories: ChunkDataStreams
    //@{
    /*!
        \brief Enables the inclusion of the selected chunk in the payload data - Applies to: raL4096-24gm

        This boolean value enables the inclusion of the selected chunk in the payload data.
    
        Visibility: Beginner

        Selected by: ChunkSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ChunkEnable" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IBooleanEx& ChunkEnable;

    //@}


    //! \name Categories: ChunkDataStreams
    //@{
    /*!
        \brief Enables the chunk mode - Applies to: raL4096-24gm

        This boolean value enables the camera's chunk mode.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ChunkModeActive" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IBooleanEx& ChunkModeActive;

    //@}


    //! \name Categories: ChunkDataStreams
    //@{
    /*!
        \brief Selects chunks for enabling - Applies to: raL4096-24gm

        This enumeration selects chunks for enabling.
    
        Visibility: Beginner

        Selecting Parameters: ChunkEnable

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ChunkSelector" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<ChunkSelectorEnums>& ChunkSelector;

    //@}


    //! \name Categories: DeviceInformation
    //@{
    /*!
        \brief Erases the last error and possibly reveals a previous error - Applies to: raL4096-24gm

        Erases the last error and possibly reveals a previous error.
    
        Visibility: Expert

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ClearLastError" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::ICommandEx& ClearLastError;

    //@}


    //! \name Categories: TimerControls
    //@{
    /*!
        \brief Selects the event that will be the source to increment the counter - Applies to: raL4096-24gm

        This enumeration selects the event that will be the source to increment the counter.
    
        Visibility: Expert

        Selected by: CounterSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=CounterEventSource" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<CounterEventSourceEnums>& CounterEventSource;

    //@}


    //! \name Categories: TimerControls
    //@{
    /*!
        \brief Immediately resets the selected counter - Applies to: raL4096-24gm

        This command will immediately reset the selected counter. Note that the counter starts counting immediately after the reset.
    
        Visibility: Expert

        Selected by: CounterSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=CounterReset" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::ICommandEx& CounterReset;

    //@}


    //! \name Categories: TimerControls
    //@{
    /*!
        \brief Selects the source of the reset for the selected counter - Applies to: raL4096-24gm

        This enumeration selects the source of the reset for the selected counter.
    
        Visibility: Expert

        Selected by: CounterSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=CounterResetSource" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<CounterResetSourceEnums>& CounterResetSource;

    //@}


    //! \name Categories: TimerControls
    //@{
    /*!
        \brief Selects the counter to configure   Once a counter has been selected, all changes to the counter settings will be applied to the selected counter - Applies to: raL4096-24gm

        This enumeration selects the counter to configure. Once a counter has been selected, all changes to the counter settings will be applied to the selected counter.
    
        Visibility: Expert

        Selecting Parameters: CounterEventSource, CounterReset and CounterResetSource

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=CounterSelector" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<CounterSelectorEnums>& CounterSelector;

    //@}


    //! \name Categories: DeviceInformation
    //@{
    /*!
        \brief Shows the over temperature state of the selected target - Applies to: raL4096-24gm

    
        Visibility: Expert

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=CriticalTemperature" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IBooleanEx& CriticalTemperature;

    //@}


    //! \name Categories: CriticalTemperatureEventData
    //@{
    /*!
        \brief Indicates the stream channel index for a critical temperature event - Applies to: raL4096-24gm

        This enumeration Indicates the stream channel index for a critical temperature event.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=CriticalTemperatureEventStreamChannelIndex" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& CriticalTemperatureEventStreamChannelIndex;

    //@}


    //! \name Categories: CriticalTemperatureEventData
    //@{
    /*!
        \brief Indicates the time stamp for a critical temperature event - Applies to: raL4096-24gm

        This enumeration value indicates the time stamp for a critical temperature event.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=CriticalTemperatureEventTimestamp" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& CriticalTemperatureEventTimestamp;

    //@}


    //! \name Categories: AOI
    //@{
    /*!
        \brief Sets horizontal sub-sampling - Applies to: raL4096-24gm

        Horizontal sub-sampling of the image. This has the net effect of reducing the horizontal resolution (width) of the image by the specified horizontal decimation factor. A value of 1 indicates that the camera performs no horizontal decimation.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=DecimationHorizontal" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& DecimationHorizontal;

    //@}


    //! \name Categories: AOI
    //@{
    /*!
        \brief Sets vertical sub-sampling - Applies to: raL4096-24gm

        Vertical sub-sampling of the image. This has the net effect of reducing the vertical resolution (height) of the image by the specified vertical decimation factor. A value of 1 indicates that the camera performs no vertical decimation.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=DecimationVertical" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& DecimationVertical;

    //@}


    //! \name Categories: DeviceInformation
    //@{
    /*!
        \brief Indicates the version of the device's firmware and software - Applies to: raL4096-24gm

        This is a read only element. It is a string that indicates the version of the device's firmware and software.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=DeviceFirmwareVersion" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IStringEx& DeviceFirmwareVersion;

    //@}


    //! \name Categories: DeviceInformation
    //@{
    /*!
        \brief A unique identifier for the device such as a serial number or a GUID - Applies to: raL4096-24gm

        This is a read only element. It is a string that provides a unique identifier for the device such as a serial number or a GUID.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=DeviceID" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IStringEx& DeviceID;

    //@}


    //! \name Categories: DeviceInformation
    //@{
    /*!
        \brief Provides additional information from the vendor about the device - Applies to: raL4096-24gm

        This is a read only element. It is a string that provides additional information from the vendor about the camera.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=DeviceManufacturerInfo" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IStringEx& DeviceManufacturerInfo;

    //@}


    //! \name Categories: DeviceInformation
    //@{
    /*!
        \brief Indicates the model name of the device - Applies to: raL4096-24gm

        This is a read only element. It is a text description that indicates the model name of the device.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=DeviceModelName" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IStringEx& DeviceModelName;

    //@}


    //! \name Categories: DeviceControl
    //@{
    /*!
        \brief Announce the end of registers streaming - Applies to: raL4096-24gm

        StopFeatureStreaming
    
        Visibility: Guru

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=DeviceRegistersStreamingEnd" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::ICommandEx& DeviceRegistersStreamingEnd;

    //@}


    //! \name Categories: DeviceControl
    //@{
    /*!
        \brief Prepare the device for registers streaming - Applies to: raL4096-24gm

        StartFeatureStreaming
    
        Visibility: Guru

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=DeviceRegistersStreamingStart" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::ICommandEx& DeviceRegistersStreamingStart;

    //@}


    //! \name Categories: DeviceInformation
    //@{
    /*!
        \brief Immediately resets and reboots the device - Applies to: raL4096-24gm

        This is a command that immediately resets and reboots the device.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=DeviceReset" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::ICommandEx& DeviceReset;

    //@}


    //! \name Categories: DeviceInformation
    //@{
    /*!
        \brief Indicates the scan type of the device's sensor - Applies to: raL4096-24gm

        This enumeration lists the possible scan types for the sensor in the device.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=DeviceScanType" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<DeviceScanTypeEnums>& DeviceScanType;

    //@}


    //! \name Categories: DeviceInformation
    //@{
    /*!
        \brief A device ID that is user programmable - Applies to: raL4096-24gm

        This is a read/write element. It is a user programmable string.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=DeviceUserID" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IStringEx& DeviceUserID;

    //@}


    //! \name Categories: DeviceInformation
    //@{
    /*!
        \brief Indicates the name of the device's vendor - Applies to: raL4096-24gm

        This is a read only element. It is a text description that indicates the name of the device's vendor.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=DeviceVendorName" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IStringEx& DeviceVendorName;

    //@}


    //! \name Categories: DeviceInformation
    //@{
    /*!
        \brief Indicates the version of the device - Applies to: raL4096-24gm

        This is a read only element. It is a string that indicates the version of the device.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=DeviceVersion" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IStringEx& DeviceVersion;

    //@}


    //! \name Categories: EventsGeneration
    //@{
    /*!
        \brief Sets the notification type that will be sent to the host application for the selected event  - Applies to: raL4096-24gm

        This enumeration sets the notification type that will be sent to the host application for the selected event.
    
        Visibility: Beginner

        Selected by: EventSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=EventNotification" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<EventNotificationEnums>& EventNotification;

    //@}


    //! \name Categories: EventOverrunEventData
    //@{
    /*!
        \brief Indicates the frame ID for an event overrun event - Applies to: raL4096-24gm

        This enumeration value indicates the frame ID for an event overrun event
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=EventOverrunEventFrameID" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& EventOverrunEventFrameID;

    //@}


    //! \name Categories: EventOverrunEventData
    //@{
    /*!
        \brief Indicates the stream channel index for an event overrun event - Applies to: raL4096-24gm

        This enumeration value indicates the stream channel index for an event overrun event
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=EventOverrunEventStreamChannelIndex" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& EventOverrunEventStreamChannelIndex;

    //@}


    //! \name Categories: EventOverrunEventData
    //@{
    /*!
        \brief Indicates the time stamp for an event overrun event - Applies to: raL4096-24gm

        This enumeration value indicates the time stamp for an event overrun event
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=EventOverrunEventTimestamp" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& EventOverrunEventTimestamp;

    //@}


    //! \name Categories: EventsGeneration
    //@{
    /*!
        \brief Selects the type of event for enabling - Applies to: raL4096-24gm

        This enumeration selects the type of event for enabling.
    
        Visibility: Beginner

        Selecting Parameters: EventNotification

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=EventSelector" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<EventSelectorEnums>& EventSelector;

    //@}


    //! \name Categories: ExpertFeatureAccess
    //@{
    /*!
        \brief Sets the key to access the selected feature - Applies to: raL4096-24gm

    
        Visibility: Guru

        Selected by: ExpertFeatureAccessSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ExpertFeatureAccessKey" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& ExpertFeatureAccessKey;

    //@}


    //! \name Categories: ExpertFeatureAccess
    //@{
    /*!
        \brief Selects the feature to configure  Once a feature has been selected, all changes made using the feature enable feature will be applied to the selected feature - Applies to: raL4096-24gm

    
        Visibility: Guru

        Selecting Parameters: ExpertFeatureEnable and ExpertFeatureAccessKey

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ExpertFeatureAccessSelector" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<ExpertFeatureAccessSelectorEnums>& ExpertFeatureAccessSelector;

    //@}


    //! \name Categories: ExpertFeatureAccess
    //@{
    /*!
        \brief Enable the selected Feature - Applies to: raL4096-24gm

    
        Visibility: Guru

        Selected by: ExpertFeatureAccessSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ExpertFeatureEnable" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IBooleanEx& ExpertFeatureEnable;

    //@}


    //! \name Categories: AcquisitionTrigger
    //@{
    /*!
        \brief Exposure Auto is the 'automatic' counterpart to manually setting an 'absolute' exposure time - Applies to: raL4096-24gm

        The exposure auto function automatically adjusts the Auto Exposure Time Abs parameter value within set limits, until a target average gray value for the pixel data of the related Auto Function AOI is reached.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ExposureAuto" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<ExposureAutoEnums>& ExposureAuto;

    //@}


    //! \name Categories: ExposureEndEventData
    //@{
    /*!
        \brief Indicates the frame ID for an exposure end event - Applies to: raL4096-24gm

        This enumeration value indicates the frame ID for an exposure end event.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ExposureEndEventFrameID" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& ExposureEndEventFrameID;

    //@}


    //! \name Categories: ExposureEndEventData
    //@{
    /*!
        \brief Indicates the stream channel index for an exposure end event - Applies to: raL4096-24gm

        This enumeration value indicates the stream channel index for an exposure end event.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ExposureEndEventStreamChannelIndex" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& ExposureEndEventStreamChannelIndex;

    //@}


    //! \name Categories: ExposureEndEventData
    //@{
    /*!
        \brief Indicates the time stamp for an exposure end event - Applies to: raL4096-24gm

        This enumeration value indicates the time stamp for an exposure end event.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ExposureEndEventTimestamp" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& ExposureEndEventTimestamp;

    //@}


    //! \name Categories: AcquisitionTrigger
    //@{
    /*!
        \brief Sets the exposure mode - Applies to: raL4096-24gm

        This enumeration sets the exposure mode.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ExposureMode" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<ExposureModeEnums>& ExposureMode;

    //@}


    //! \name Categories: AcquisitionTrigger
    //@{
    /*!
        \brief Sets the maximum overlap of the sensor exposure with sensor readout in TriggerWidth exposure mode in microseconds - Applies to: raL4096-24gm

        This float value sets the maximum overlap time (in microseconds) of the sensor exposure with sensor readout in TriggerWidth exposure mode.
    
        Visibility: Guru

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ExposureOverlapTimeMaxAbs" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IFloatEx& ExposureOverlapTimeMaxAbs;

    //@}


    //! \name Categories: AcquisitionTrigger
    //@{
    /*!
        \brief Sets the maximum overlap of the sensor exposure with the sensor readout in TriggerWidth exposure mode in raw units - Applies to: raL4096-24gm

        This integer value sets the maximum overlap time (in raw units) of the sensor exposure with sensor readout in TriggerWidth exposure mode.
    
        Visibility: Guru

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ExposureOverlapTimeMaxRaw" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& ExposureOverlapTimeMaxRaw;

    //@}


    //! \name Categories: AcquisitionTrigger
    //@{
    /*!
        \brief Directly sets the camera's exposure time in microseconds - Applies to: raL4096-24gm

        This float value sets the camera's exposure time in microseconds.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ExposureTimeAbs" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IFloatEx& ExposureTimeAbs;

    //@}


    //! \name Categories: AcquisitionTrigger
    //@{
    /*!
        \brief Sets the 'raw' exposure time   Actual exposure time = raw exposure setting  x  exposure time base abs setting - Applies to: raL4096-24gm

        This value sets an integer that will be used as a multiplier for the exposure timebase. The actual exposure time equals the current exposure time raw setting times the current exposure time base abs setting.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ExposureTimeRaw" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& ExposureTimeRaw;

    //@}


    //! \name Categories: FileAccessControl
    //@{
    /*!
        \brief Defines the intermediate access buffer - Applies to: raL4096-24gm

        The File Access Buffer feature defines the intermediate access buffer that allows the exchange of data between the device file storage and the application.
    
        Visibility: Guru

        Selected by: FileSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=FileAccessBuffer" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IRegisterEx& FileAccessBuffer;

    //@}


    //! \name Categories: FileAccessControl
    //@{
    /*!
        \brief Controls the mapping between the device file storage and the FileAccessBuffer - Applies to: raL4096-24gm

        This feature controls the mapping between the device file storage and the FileAccessBuffer.
    
        Visibility: Guru

        Selected by: FileSelector and FileOperationSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=FileAccessLength" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& FileAccessLength;

    //@}


    //! \name Categories: FileAccessControl
    //@{
    /*!
        \brief Controls the mapping between the device file storage and the FileAccessBuffer - Applies to: raL4096-24gm

        This feature controls the mapping between the device file storage and the FileAccessBuffer.
    
        Visibility: Guru

        Selected by: FileSelector and FileOperationSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=FileAccessOffset" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& FileAccessOffset;

    //@}


    //! \name Categories: FileAccessControl
    //@{
    /*!
        \brief Selects the access mode in which a file is opened - Applies to: raL4096-24gm

        The File Open Mode feature selects the access mode in which a file is opened in the device.
    
        Visibility: Guru

        Selected by: FileSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=FileOpenMode" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<FileOpenModeEnums>& FileOpenMode;

    //@}


    //! \name Categories: FileAccessControl
    //@{
    /*!
        \brief Executes the selected operation - Applies to: raL4096-24gm

        The File Operation Execute feature is the command that executes the operation selected by FileOperationSelector on the selected file.
    
        Visibility: Guru

        Selected by: FileSelector and FileOperationSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=FileOperationExecute" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::ICommandEx& FileOperationExecute;

    //@}


    //! \name Categories: FileAccessControl
    //@{
    /*!
        \brief Represents the file operation result - Applies to: raL4096-24gm

        The File Operation Result feature represents the file operation result. For Read or Write operations, the number of successfully read/written bytes is returned.
    
        Visibility: Guru

        Selected by: FileSelector and FileOperationSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=FileOperationResult" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& FileOperationResult;

    //@}


    //! \name Categories: FileAccessControl
    //@{
    /*!
        \brief Selects the target operation for the selected file - Applies to: raL4096-24gm

        The File Operation Selector feature selects the target operation for the selected file in the device. This Operation is executed when the FileOperationExecute feature is called.
    
        Visibility: Guru

        Selected by: FileSelector

        Selecting Parameters: FileAccessOffset, FileAccessLength, FileOperationStatus, FileOperationResult and FileOperationExecute

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=FileOperationSelector" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<FileOperationSelectorEnums>& FileOperationSelector;

    //@}


    //! \name Categories: FileAccessControl
    //@{
    /*!
        \brief Represents the file operation execution status - Applies to: raL4096-24gm

        The File Operation Status feature represents the file operation execution status.
    
        Visibility: Guru

        Selected by: FileSelector and FileOperationSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=FileOperationStatus" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<FileOperationStatusEnums>& FileOperationStatus;

    //@}


    //! \name Categories: FileAccessControl
    //@{
    /*!
        \brief This feature selects the target file in the device - Applies to: raL4096-24gm

        The File Selector feature selects the target file in the device.
    
        Visibility: Guru

        Selecting Parameters: FileOperationSelector, FileOpenMode, FileAccessBuffer, FileAccessOffset, FileAccessLength, FileOperationStatus, FileOperationResult, FileSize and FileOperationExecute

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=FileSelector" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<FileSelectorEnums>& FileSelector;

    //@}


    //! \name Categories: FileAccessControl
    //@{
    /*!
        \brief Represents the size of the selected file - Applies to: raL4096-24gm

        The File Size feature represents the size of the selected file in bytes.
    
        Visibility: Guru

        Selected by: FileSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=FileSize" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& FileSize;

    //@}


    //! \name Categories: FrameStartEventData
    //@{
    /*!
        \brief Indicates the stream channel index for an frame start  event - Applies to: raL4096-24gm

        This enumeration Indicates the stream channel index for an frame start  event
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=FrameStartEventStreamChannelIndex" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& FrameStartEventStreamChannelIndex;

    //@}


    //! \name Categories: FrameStartEventData
    //@{
    /*!
        \brief Indicates the time stamp for an frame start  event - Applies to: raL4096-24gm

        This enumeration value indicates the time stamp for an frame start  event.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=FrameStartEventTimestamp" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& FrameStartEventTimestamp;

    //@}


    //! \name Categories: FrameStartOvertriggerEventData
    //@{
    /*!
        \brief Indicates the stream channel index for an frame start overtrigger event - Applies to: raL4096-24gm

        This enumeration Indicates the stream channel index for an frame start overtrigger event
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=FrameStartOvertriggerEventStreamChannelIndex" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& FrameStartOvertriggerEventStreamChannelIndex;

    //@}


    //! \name Categories: FrameStartOvertriggerEventData
    //@{
    /*!
        \brief Indicates the time stamp for an frame start overtrigger event - Applies to: raL4096-24gm

        This enumeration value indicates the time stamp for an frame start overtrigger event.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=FrameStartOvertriggerEventTimestamp" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& FrameStartOvertriggerEventTimestamp;

    //@}


    //! \name Categories: AcquisitionTrigger
    //@{
    /*!
        \brief Sets the frame timeout in microseconds - Applies to: raL4096-24gm

        Sets the frame timeout in microseconds. When the timeout expires before a frame acquisition is complete, a partial frame will be delivered.
    
        Visibility: Expert

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=FrameTimeoutAbs" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IFloatEx& FrameTimeoutAbs;

    //@}


    //! \name Categories: AcquisitionTrigger
    //@{
    /*!
        \brief Enables the frame timeout - Applies to: raL4096-24gm

        This boolean value enables the frame timeout. 
    
        Visibility: Expert

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=FrameTimeoutEnable" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IBooleanEx& FrameTimeoutEnable;

    //@}


    //! \name Categories: FrameTimeoutEventData
    //@{
    /*!
        \brief Indicates the stream channel index for an frame timeout event - Applies to: raL4096-24gm

        This enumeration Indicates the stream channel index for an frame timeout event
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=FrameTimeoutEventStreamChannelIndex" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& FrameTimeoutEventStreamChannelIndex;

    //@}


    //! \name Categories: FrameTimeoutEventData
    //@{
    /*!
        \brief Indicates the time stamp for an frame timeout event - Applies to: raL4096-24gm

        This enumeration value indicates the time stamp for an frame timeout event.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=FrameTimeoutEventTimestamp" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& FrameTimeoutEventTimestamp;

    //@}


    //! \name Categories: FrameWaitEventData
    //@{
    /*!
        \brief Indicates the stream channel index for an frame wait event - Applies to: raL4096-24gm

        This enumeration Indicates the stream channel index for an frame wait event
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=FrameWaitEventStreamChannelIndex" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& FrameWaitEventStreamChannelIndex;

    //@}


    //! \name Categories: FrameWaitEventData
    //@{
    /*!
        \brief Indicates the time stamp for an frame wait event - Applies to: raL4096-24gm

        This enumeration value indicates the time stamp for an frame wait event.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=FrameWaitEventTimestamp" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& FrameWaitEventTimestamp;

    //@}


    //! \name Categories: FrequencyConverter
    //@{
    /*!
        \brief Selects the input source - Applies to: raL4096-24gm

        Selects the input source for the frequency converter module.
    
        Visibility: Expert

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=FrequencyConverterInputSource" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<FrequencyConverterInputSourceEnums>& FrequencyConverterInputSource;

    //@}


    //! \name Categories: FrequencyConverter
    //@{
    /*!
        \brief Sets the multiplier value for the multiplier sub-module - Applies to: raL4096-24gm

        Sets an integer value as the multiplier for the multiplier sub-module.
    
        Visibility: Expert

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=FrequencyConverterMultiplier" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& FrequencyConverterMultiplier;

    //@}


    //! \name Categories: FrequencyConverter
    //@{
    /*!
        \brief Sets the post-divider value for the post-divider sub-module - Applies to: raL4096-24gm

        Sets an integer value as the post-divider for the post-divider sub-module.
    
        Visibility: Expert

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=FrequencyConverterPostDivider" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& FrequencyConverterPostDivider;

    //@}


    //! \name Categories: FrequencyConverter
    //@{
    /*!
        \brief Sets the pre-divider value for the pre-divider sub-module - Applies to: raL4096-24gm

        Sets an integer value as the pre-divider for the pre-divider sub-module.
    
        Visibility: Expert

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=FrequencyConverterPreDivider" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& FrequencyConverterPreDivider;

    //@}


    //! \name Categories: FrequencyConverter
    //@{
    /*!
        \brief Enables overtriggering protection - Applies to: raL4096-24gm

        This feature ensures that the multiplier sub-module does not provide a generated signal at a too high frequency that would cause camera overtriggering.
    
        Visibility: Guru

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=FrequencyConverterPreventOvertrigger" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IBooleanEx& FrequencyConverterPreventOvertrigger;

    //@}


    //! \name Categories: FrequencyConverter
    //@{
    /*!
        \brief Selects the signal transition relationships between received and generated signals - Applies to: raL4096-24gm

        Selects the signal transition relationships between the signals received from the pre-divider sub-module and the signals generated by the multiplier sub-module.
    
        Visibility: Expert

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=FrequencyConverterSignalAlignment" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<FrequencyConverterSignalAlignmentEnums>& FrequencyConverterSignalAlignment;

    //@}


    //! \name Categories: AnalogControls
    //@{
    /*!
        \brief Gain Auto is the 'automatic' counterpart of the manual gain feature - Applies to: raL4096-24gm

        The gain auto function automatically adjusts the Auto Gain Raw parameter value within set limits, until a target average gray value for the pixel data from Auto Function AOI1 is reached.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GainAuto" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<GainAutoEnums>& GainAuto;

    //@}


    //! \name Categories: AnalogControls
    //@{
    /*!
        \brief This is an integer value that sets the selected gain control in device specific units - Applies to: raL4096-24gm

        Sets the 'raw' value of the selected gain control. The 'raw' value is an integer value that sets the selected gain control in units specific to the camera.
    
        Visibility: Beginner

        Selected by: GainSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GainRaw" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& GainRaw;

    //@}


    //! \name Categories: AnalogControls
    //@{
    /*!
        \brief Selects the gain control to configure  Once a gain control has been selected, all changes to the gain settings will be applied to the selected control - Applies to: raL4096-24gm

        This enumeration selects the gain control to configure. Once a gain control has been selected, all changes to the gain settings will be applied to the selected control.
    
        Visibility: Beginner

        Selecting Parameters: GainRaw

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GainSelector" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<GainSelectorEnums>& GainSelector;

    //@}


    //! \name Categories: AnalogControls
    //@{
    /*!
        \brief This feature is used to perform gamma correction of pixel intensity - Applies to: raL4096-24gm

        This feature is used to perform gamma correction of pixel  intensity. This is typically used to compensate for non-linearity of the display system (such as CRT).
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=Gamma" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IFloatEx& Gamma;

    //@}


    //! \name Categories: AnalogControls
    //@{
    /*!
        \brief Enables the gamma correction - Applies to: raL4096-24gm

        This boolean value enables the gamma correction.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GammaEnable" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IBooleanEx& GammaEnable;

    //@}


    //! \name Categories: AnalogControls
    //@{
    /*!
        \brief  Applies to: raL4096-24gm

        This enumeration selects the type of gamma to apply.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GammaSelector" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<GammaSelectorEnums>& GammaSelector;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Sets the control channel privilege feature - Applies to: raL4096-24gm

        This enumeration sets the control channel privilege feature.
    
        Visibility: Guru

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevCCP" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<GevCCPEnums>& GevCCP;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Indicates the current default gateway for the selected network interface - Applies to: raL4096-24gm

        This is a read only element. It indicates the current default gateway for the selected network interface.
    
        Visibility: Guru

        Selected by: GevInterfaceSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevCurrentDefaultGateway" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& GevCurrentDefaultGateway;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Indicates the current IP address for the selected network interface - Applies to: raL4096-24gm

        This is a read only element. It indicates the current IP address for the selected network interface.
    
        Visibility: Guru

        Selected by: GevInterfaceSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevCurrentIPAddress" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& GevCurrentIPAddress;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Sets the current IP configuration of the selected network interface - Applies to: raL4096-24gm

        This value sets the IP configuration of the selected network interface, i.e., fixed IP, DHCP, auto IP. 
    
        Visibility: Guru

        Selected by: GevInterfaceSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevCurrentIPConfiguration" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& GevCurrentIPConfiguration;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Indicates the current subnet mask for the selected network interface - Applies to: raL4096-24gm

        This is a read only element. It indicates the current subnet mask for the selected network interface.
    
        Visibility: Guru

        Selected by: GevInterfaceSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevCurrentSubnetMask" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& GevCurrentSubnetMask;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Indictes the character set - Applies to: raL4096-24gm

        This is a read only element. Its value indicates the character set. 1 = UTF8
    
        Visibility: Guru

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevDeviceModeCharacterSet" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& GevDeviceModeCharacterSet;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Indicates the endianess of the bootstrap registers - Applies to: raL4096-24gm

        This is a read only element. It indicates the endianess of the bootstrap registers. True = big endian.
    
        Visibility: Guru

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevDeviceModeIsBigEndian" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IBooleanEx& GevDeviceModeIsBigEndian;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Indicates the first URL to the XML device description file - Applies to: raL4096-24gm

        This is a read only element. It indicates the first URL to the XML device description file.
    
        Visibility: Guru

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevFirstURL" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IStringEx& GevFirstURL;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Sets the heartbeat timeout in milliseconds - Applies to: raL4096-24gm

        This value sets the heartbeat timeout in milliseconds.
    
        Visibility: Guru

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevHeartbeatTimeout" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& GevHeartbeatTimeout;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Enable usage of the IEEE 1588 V2 Precision Time Protocol to source the timestamp register  Only available when the IEEE1588_support bit of the GVCP Capability register is set  When PTP is enabled, the Timestamp Control register cannot be used to reset the timestamp  Factory default is devicespecific  When PTP is enabled or disabled, the value of Timestamp Tick Frequency and Timestamp Value registers might change to reflect the new time domain - Applies to: raL4096-24gm

        This value indicates whether IEEE 1588 V2 (PTP) is enabled.
    
        Visibility: Expert

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevIEEE1588" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IBooleanEx& GevIEEE1588;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Indicates the latched clock ID of the IEEE 1588 device - Applies to: raL4096-24gm

        This is a read only element. It indicates the latched clock ID of the IEEE 1588 device. (The clock ID must first be latched using the IEEE 1588 Latch command.) The clock ID is an array of eight octets which is displayed as hexadecimal number. Leading zeros are omitted.
    
        Visibility: Guru

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevIEEE1588ClockId" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& GevIEEE1588ClockId;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Latches the current IEEE 1588 related values of the device - Applies to: raL4096-24gm

        This command latches the current IEEE 1588 related values of the device.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevIEEE1588DataSetLatch" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::ICommandEx& GevIEEE1588DataSetLatch;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief  Applies to: raL4096-24gm

        This is a read only element. It indicates the latched offset from the IEEE 1588 master clock in nanoseconds. (The offset must first be latched using the IEEE 1588 Latch command.)
    
        Visibility: Guru

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevIEEE1588OffsetFromMaster" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& GevIEEE1588OffsetFromMaster;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Indicates the latched parent clock ID of the IEEE 1588 device - Applies to: raL4096-24gm

        This is a read only element. It indicates the latched parent clock ID of the IEEE 1588 device. (The parent clock ID must first be latched using the IEEE 1588 Latch command.) The parent clock ID is the clock ID of the current master clock. A clock ID is an array of eight octets which is displayed as hexadecimal number. Leading zeros are omitted.
    
        Visibility: Guru

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevIEEE1588ParentClockId" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& GevIEEE1588ParentClockId;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Provides the state of the IEEE 1588 clock - Applies to: raL4096-24gm

        Provides the state of the IEEE 1588 clock. Values of this field must match the IEEE 1588 PTP port state enumeration (INITIALIZING, FAULTY, DISABLED, LISTENING, PRE_MASTER, MASTER, PASSIVE, UNCALIBRATED, SLAVE). Please refer to IEEE 1588 for additional information.
    
        Visibility: Expert

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevIEEE1588Status" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<GevIEEE1588StatusEnums>& GevIEEE1588Status;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Indicates the latched state of the IEEE 1588 clock - Applies to: raL4096-24gm

        This is a read only element. It indicates the latched state of the IEEE 1588 clock. (The state must first be latched using the IEEE 1588 Latch command.) The state is indicated by values 1 to 9, corresponding to the states INITIALIZING, FAULTY, DISABLED, LISTENING, PRE_MASTER, MASTER, PASSIVE, UNCALIBRATED, and SLAVE. Refer to the IEEE 1588 specification for additional information.
    
        Visibility: Expert

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevIEEE1588StatusLatched" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<GevIEEE1588StatusLatchedEnums>& GevIEEE1588StatusLatched;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Selects the physical network interface to configure  Once a network interface has been selected, all changes to the network interface settings will be applied to the selected interface - Applies to: raL4096-24gm

        This selects the physical network interface to configure. Once a network interface has been selected, all changes to the network interface settings will be applied to the selected interface.
    
        Visibility: Guru

        Selecting Parameters: GevMACAddress, GevSupportedOptionalLegacy16BitBlockID, GevSupportedIPConfigurationLLA, GevSupportedIPConfigurationDHCP, GevSupportedIPConfigurationPersistentIP, GevCurrentIPConfiguration, GevCurrentIPAddress, GevCurrentSubnetMask, GevCurrentDefaultGateway, GevPersistentIPAddress, GevPersistentSubnetMask, GevPersistentDefaultGateway, GevLinkSpeed, GevLinkMaster, GevLinkFullDuplex and GevLinkCrossover

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevInterfaceSelector" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<GevInterfaceSelectorEnums>& GevInterfaceSelector;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Indicates the state of medium-dependent interface crossover (MDIX) for the selected network interface - Applies to: raL4096-24gm

        This is a read only element. It indicates the state of medium-dependent interface crossover (MDIX) for the selected network interface.
    
        Visibility: Guru

        Selected by: GevInterfaceSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevLinkCrossover" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IBooleanEx& GevLinkCrossover;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Indicates whether the selected network interface operates in full-duplex mode - Applies to: raL4096-24gm

        This is a read only element. It indicates whether the selected network interface operates in full-duplex mode.
    
        Visibility: Guru

        Selected by: GevInterfaceSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevLinkFullDuplex" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IBooleanEx& GevLinkFullDuplex;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Indicates whether the selected network interface is the clock master - Applies to: raL4096-24gm

        This is a read only element. It indicates whether the selected network interface is the clock master.
    
        Visibility: Guru

        Selected by: GevInterfaceSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevLinkMaster" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IBooleanEx& GevLinkMaster;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Indicates the connection speed in Mbps for the selected network interface - Applies to: raL4096-24gm

        This is a read only element. It indicates the connection speed in Mbps for the selected network interface.
    
        Visibility: Guru

        Selected by: GevInterfaceSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevLinkSpeed" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& GevLinkSpeed;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Indicates the MAC address for the selected network interface - Applies to: raL4096-24gm

        This is a read only element. It indicates the MAC address for the selected network interface.
    
        Visibility: Guru

        Selected by: GevInterfaceSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevMACAddress" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& GevMACAddress;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Indicates the number of message channels supported by the device - Applies to: raL4096-24gm

        This is a read only element. It indicates the number of message channels supported by the device.
    
        Visibility: Guru

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevMessageChannelCount" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& GevMessageChannelCount;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Indicates the number of network interfaces on the device - Applies to: raL4096-24gm

        This is a read only element. It indicates the number of network interfaces on the device.
    
        Visibility: Guru

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevNumberOfInterfaces" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& GevNumberOfInterfaces;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief If fixed (persistent) IP addressing is supported by the device and enabled, sets the fixed default gateway for the selected network interface  - Applies to: raL4096-24gm

        This value sets the fixed default gateway for the selected network interface (if fixed IP addressing is supported by the device and enabled).
    
        Visibility: Guru

        Selected by: GevInterfaceSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevPersistentDefaultGateway" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& GevPersistentDefaultGateway;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief If fixed (persistent) IP addressing is supported by the device and enabled, sets the fixed IP address for the selected network interface  - Applies to: raL4096-24gm

        This value sets the fixed IP address for the selected network interface (if fixed IP addressing is supported by the device and enabled).
    
        Visibility: Guru

        Selected by: GevInterfaceSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevPersistentIPAddress" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& GevPersistentIPAddress;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief If fixed (persistent) IP addressing is supported by the device and enabled, sets the fixed subnet mask for the selected network interface  - Applies to: raL4096-24gm

        This value sets the fixed subnet mask for the selected network interface (if fixed IP addressing is supported by the device and enabled).
    
        Visibility: Guru

        Selected by: GevInterfaceSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevPersistentSubnetMask" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& GevPersistentSubnetMask;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Indicates the bandwidth (in bytes per second) that will be used by the camera to transmit image and chunk feature data and to handle resends and control data transmissions - Applies to: raL4096-24gm

        This value indicates the base bandwidth in bytes per second that will be used by the camera to transmit image and chunk feature data and to handle resends and control data transmissions. This parameter represents a combination of the packet size and the inter-packet delay.
    
        Visibility: Expert

        Selected by: GevStreamChannelSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevSCBWA" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& GevSCBWA;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Sets a percentage of the Ethernet bandwidth assigned to the camera to be held in reserve  The reserve is used for packet resends and control data transmissions   - Applies to: raL4096-24gm

        This value reserves a portion of Ethernet bandwidth assigned to the camera for packet resends and for the transmission of control data between the camera and the host PC. The setting is expressed as a percentage of the bandwidth assigned parameter. For example, if the Bandwidth Assigned parameter indicates that 30 MBytes/s have been assigned to the camera and the Bandwidth Reserve parameter is set to 5%, then the bandwidth reserve will be 1.5 MBytes/s.
    
        Visibility: Expert

        Selected by: GevStreamChannelSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevSCBWR" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& GevSCBWR;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Sets a multiplier for the Bandwidth Reserve parameter  The multiplier is used to establish an extra pool of reserved bandwidth that can be used if an unusually large burst of packet resends is needed - Applies to: raL4096-24gm

        This value sets a multiplier for the Bandwidth Reserve parameter. The multiplier is used to establish an extra pool of reserved bandwidth that can be used if an unusually large burst of packet resends is needed.
    
        Visibility: Expert

        Selected by: GevStreamChannelSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevSCBWRA" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& GevSCBWRA;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Sets the stream channel destination IPv4 address for the selected stream channel - Applies to: raL4096-24gm

        This value sets the stream channel destination IPv4 address for the selected stream channel. The destination can be a unicast or a multicast.
    
        Visibility: Guru

        Selected by: GevStreamChannelSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevSCDA" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& GevSCDA;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Indicates the actual bandwidth (in bytes per second) that the camera will use to transmit image data and chunk data given the current AOI settings, chunk feature settings, and the pixel format setting - Applies to: raL4096-24gm

        This value indicates the actual bandwidth (in bytes per second) that the camera will use to transmit image data and chunk data given the current AOI settings, chunk feature settings, and the pixel format setting.
    
        Visibility: Expert

        Selected by: GevStreamChannelSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevSCDCT" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& GevSCDCT;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Indicates the maximum amount of data (in bytes per second) that the camera could generate given its current settings and ideal conditions, i e , unlimited bandwidth and no packet resends - Applies to: raL4096-24gm

        This value indicates the maximum amount of data (in bytes per second) that the camera could generate given its current settings and ideal conditions, i.e., unlimited bandwidth and no packet resends.
    
        Visibility: Expert

        Selected by: GevStreamChannelSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevSCDMT" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& GevSCDMT;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Indicates the maximum time (in ticks) that the next frame transmission could be delayed due to a burst of resends - Applies to: raL4096-24gm

        If the Bandwidth Reserve Accumulation parameter is set to a high value, the camera can experience periods where there is a large burst of data resends. This burst of resends will delay the start of transmission of the next acquired image. The Frame Max Jitter parameter indicates the maximum time in ticks that the next frame transmission could be delayed due to a burst of resends.
    
        Visibility: Expert

        Selected by: GevStreamChannelSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevSCFJM" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& GevSCFJM;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Sets the frame transfer start delay (in ticks) for the selected stream channel - Applies to: raL4096-24gm

        This value sets the frame transfer delay for the selected stream channel. This value sets a delay betweem when the camera would normally begin transmitted an acquired image (frame) and when it actually begins transmitting the acquired image.
    
        Visibility: Expert

        Selected by: GevStreamChannelSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevSCFTD" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& GevSCFTD;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Sets the inter-packet delay (in ticks) for the selected stream channel - Applies to: raL4096-24gm

        This value sets a delay between the transmission of each packet for the selected stream channel. The delay is measured in ticks.
    
        Visibility: Expert

        Selected by: GevStreamChannelSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevSCPD" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& GevSCPD;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Sets the port to which the device must send data streams - Applies to: raL4096-24gm

        This value sets the port to which the device must send data streams.
    
        Visibility: Guru

        Selected by: GevStreamChannelSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevSCPHostPort" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& GevSCPHostPort;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Sets the index of the network interface to use - Applies to: raL4096-24gm

        This value sets the index of the network interface to use.
    
        Visibility: Guru

        Selected by: GevStreamChannelSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevSCPInterfaceIndex" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& GevSCPInterfaceIndex;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief  Applies to: raL4096-24gm

    
        Visibility: Guru

        Selected by: GevStreamChannelSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevSCPSBigEndian" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IBooleanEx& GevSCPSBigEndian;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief  Applies to: raL4096-24gm

    
        Visibility: Guru

        Selected by: GevStreamChannelSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevSCPSDoNotFragment" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IBooleanEx& GevSCPSDoNotFragment;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Sets the packet size in bytes for the selected stream channel - Applies to: raL4096-24gm

        This value sets the packet size in bytes for the selected stream channel. Excludes data leader and data trailer. (The last packet may be smaller because the packet size is not necessarily a multiple of the block size for the stream channel.)
    
        Visibility: Beginner

        Selected by: GevStreamChannelSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevSCPSPacketSize" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& GevSCPSPacketSize;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Indicates the second URL to the XML device description file - Applies to: raL4096-24gm

        This is a read only element. It indicates the second URL to the XML device description file.
    
        Visibility: Guru

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevSecondURL" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IStringEx& GevSecondURL;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Indicates the number of stream channels supported by the device - Applies to: raL4096-24gm

        This is a read only element. It indicates the number of stream channels supported by the device.
    
        Visibility: Guru

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevStreamChannelCount" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& GevStreamChannelCount;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Selects the stream channel to configure  Once a stream channel has been selected, all changes to the stream channel settings will be applied to the selected stream channel - Applies to: raL4096-24gm

        This enumeration selects the stream channels to configure. Once a stream channel has been selected, all changes to the stream channel settings will be applied to the selected stream channel.
    
        Visibility: Guru

        Selecting Parameters: GevSCPInterfaceIndex, GevGVSPExtendedIDMode, GevSCPHostPort, GevSCPSFireTestPacket, GevSCPSDoNotFragment, GevSCPSBigEndian, GevSCPSPacketSize, GevSCPD, GevSCFTD, GevSCDA, GevSCBWR, GevSCBWRA, GevSCBWA, GevSCDMT, GevSCDCT and GevSCFJM

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevStreamChannelSelector" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<GevStreamChannelSelectorEnums>& GevStreamChannelSelector;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Indicates whether IEEE 1588 (PTP) is supported - Applies to: raL4096-24gm

        This is a read only element. It indicates whether whether IEEE 1588 (PTP) is supported.
    
        Visibility: Guru

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevSupportedIEEE1588" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IBooleanEx& GevSupportedIEEE1588;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Indicates whether the selected network interface supports DHCP IP addressing - Applies to: raL4096-24gm

        This is a read only element. It indicates whether the selected network interface supports DHCP IP addressing.
    
        Visibility: Guru

        Selected by: GevInterfaceSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevSupportedIPConfigurationDHCP" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IBooleanEx& GevSupportedIPConfigurationDHCP;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Indicates whether the selected network interface supports auto IP addressing (also known as LLA) - Applies to: raL4096-24gm

        This is a read only element. It indicates whether the selected network interface supports auto IP addressing (also known as LLA).
    
        Visibility: Guru

        Selected by: GevInterfaceSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevSupportedIPConfigurationLLA" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IBooleanEx& GevSupportedIPConfigurationLLA;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Indicates whether the selected network interface supports fixed IP addressing (also known as persistent IP addressing) - Applies to: raL4096-24gm

        This is a read only element. It indicates whether the selected network interface supports fixed IP addressing (also known as persistent IP addressing).
    
        Visibility: Guru

        Selected by: GevInterfaceSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevSupportedIPConfigurationPersistentIP" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IBooleanEx& GevSupportedIPConfigurationPersistentIP;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Indicates whether multiple operations in a single message are supported - Applies to: raL4096-24gm

        This is a read only element. It indicates whether multiple operations in a single message are supported.
    
        Visibility: Guru

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevSupportedOptionalCommandsConcatenation" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IBooleanEx& GevSupportedOptionalCommandsConcatenation;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Indicates whether EVENT_CMD and EVENT_ACK are supported - Applies to: raL4096-24gm

        This is a read only element. It indicates whether EVENT_CMD and EVENT_ACK are supported.
    
        Visibility: Guru

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevSupportedOptionalCommandsEVENT" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IBooleanEx& GevSupportedOptionalCommandsEVENT;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Indicates whether EVENTDATA_CMD and EVENTDATA_ACK are supported - Applies to: raL4096-24gm

        This is a read only element. It indicates whether EVENTDATA_CMD and EVENTDATA_ACK are supported.
    
        Visibility: Guru

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevSupportedOptionalCommandsEVENTDATA" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IBooleanEx& GevSupportedOptionalCommandsEVENTDATA;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Indicates whether PACKETRESEND_CMD is supported - Applies to: raL4096-24gm

        This is a read only element. It indicates whether PACKETRESEND_CMD is supported.
    
        Visibility: Guru

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevSupportedOptionalCommandsPACKETRESEND" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IBooleanEx& GevSupportedOptionalCommandsPACKETRESEND;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Indicates whether WRITEMEM_CMD and WRITEMEM_ACK are supported - Applies to: raL4096-24gm

        This is a read only element. It indicates whether WRITEMEM_CMD and WRITEMEM_ACK are supported
    
        Visibility: Guru

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevSupportedOptionalCommandsWRITEMEM" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IBooleanEx& GevSupportedOptionalCommandsWRITEMEM;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Indicates whether this GVSP transmitter or receiver can support 16-bit block_id - Applies to: raL4096-24gm

        This is a read only element. It indicates whether this GVSP transmitter or rceiver can support 16-bit block_id.
    
        Visibility: Guru

        Selected by: GevInterfaceSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevSupportedOptionalLegacy16BitBlockID" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IBooleanEx& GevSupportedOptionalLegacy16BitBlockID;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Latches the current timestamp value of the device - Applies to: raL4096-24gm

        This command latches the current timestamp value of the device.
    
        Visibility: Guru

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevTimestampControlLatch" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::ICommandEx& GevTimestampControlLatch;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Resets the timestamp control latch - Applies to: raL4096-24gm

        This command resets the timestamp control latch.
    
        Visibility: Guru

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevTimestampControlLatchReset" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::ICommandEx& GevTimestampControlLatchReset;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Resets the timestamp value for the device - Applies to: raL4096-24gm

        This command resets the timestamp value for the device
    
        Visibility: Guru

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevTimestampControlReset" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::ICommandEx& GevTimestampControlReset;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Indicates the number of timestamp clock ticks in 1 second - Applies to: raL4096-24gm

        This is a read only element. It indicates the number of timestamp clock ticks in 1 second.
    
        Visibility: Guru

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevTimestampTickFrequency" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& GevTimestampTickFrequency;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Indicates the latched value of the timestamp   (The timestamp must first be latched using the Timestamp Control Latch command ) - Applies to: raL4096-24gm

        This is a read only element. It indicates the latched value of the timestamp.  (The timestamp must first be latched using the Timestamp Control Latch command.)
    
        Visibility: Guru

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevTimestampValue" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& GevTimestampValue;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Indicates the major version number of the GigE Vision specification supported by this device - Applies to: raL4096-24gm

        This is a read only element. It indicates the major version number of the GigE Vision specification supported by this device.
    
        Visibility: Guru

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevVersionMajor" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& GevVersionMajor;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Indicates the minor version number of the GigE Vision specification supported by this device - Applies to: raL4096-24gm

        This is a read only element. It indicates the minor version number of the GigE Vision specification supported by this device.
    
        Visibility: Guru

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GevVersionMinor" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& GevVersionMinor;

    //@}


    //! \name Categories: AutoFunctions
    //@{
    /*!
        \brief Gray value adjustment damping for Gain Auto and Exposure Auto - Applies to: raL4096-24gm

        The gray value adjustment damping parameter controls the rate by which pixel gray values are changed when Exposure Auto and/or Gain Auto are enabled.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GrayValueAdjustmentDampingAbs" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IFloatEx& GrayValueAdjustmentDampingAbs;

    //@}


    //! \name Categories: AutoFunctions
    //@{
    /*!
        \brief Gray value adjustment damping for Gain Auto and Exposure Auto - Applies to: raL4096-24gm

        The gray value adjustment damping parameter controls the rate by which pixel gray values are changed when Exposure Auto and/or Gain Auto are enabled.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=GrayValueAdjustmentDampingRaw" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& GrayValueAdjustmentDampingRaw;

    //@}


    //! \name Categories: AOI
    //@{
    /*!
        \brief Sets the height of the area of interest in pixels - Applies to: raL4096-24gm

        This value sets the height of the area of interest in pixels.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=Height" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& Height;

    //@}


    //! \name Categories: DeviceInformation
    //@{
    /*!
        \brief Indicates the maximum allowed height of the image in pixels - Applies to: raL4096-24gm

        This is a read only element. It is an integer that indicates maximum allowed height of the image in pixels taking into account any function that may limit the allowed height.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=HeightMax" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& HeightMax;

    //@}


    //! \name Categories: LUTControls
    //@{
    /*!
        \brief Enables the selected LUT - Applies to: raL4096-24gm

        This boolean value enables the selected LUT.
    
        Visibility: Beginner

        Selected by: LUTSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=LUTEnable" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IBooleanEx& LUTEnable;

    //@}


    //! \name Categories: LUTControls
    //@{
    /*!
        \brief Sets the LUT element to access  - Applies to: raL4096-24gm

        This value sets the LUT element to access. This value is used to index into a LUT array.
    
        Visibility: Beginner

        Selected by: LUTSelector

        Selecting Parameters: LUTValue

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=LUTIndex" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& LUTIndex;

    //@}


    //! \name Categories: LUTControls
    //@{
    /*!
        \brief Selects the lookup table (LUT) to configure  Once a LUT has been selected, all changes to the LUT settings will be applied to the selected LUT - Applies to: raL4096-24gm

        This enumeration the lookup table (LUT) to configure. Once a LUT has been selected, all changes to the LUT settings will be applied to the selected LUT.
    
        Visibility: Beginner

        Selecting Parameters: LUTEnable, LUTIndex, LUTValue and LUTValueAll

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=LUTSelector" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<LUTSelectorEnums>& LUTSelector;

    //@}


    //! \name Categories: LUTControls
    //@{
    /*!
        \brief Sets the value of the LUT element at the LUT index - Applies to: raL4096-24gm

        This value sets the value of the LUT element at the LUT index.
    
        Visibility: Beginner

        Selected by: LUTSelector and LUTIndex

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=LUTValue" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& LUTValue;

    //@}


    //! \name Categories: LUTControls
    //@{
    /*!
        \brief Accesses the entire content of the selected LUT in one chunk access - Applies to: raL4096-24gm

    
        Visibility: Expert

        Selected by: LUTSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=LUTValueAll" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IRegisterEx& LUTValueAll;

    //@}


    //! \name Categories: DeviceInformation
    //@{
    /*!
        \brief Indicates the error that was detected last - Applies to: raL4096-24gm

        Indicates the error that was detected last.
    
        Visibility: Expert

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=LastError" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<LastErrorEnums>& LastError;

    //@}


    //! \name Categories: LateActionEventData
    //@{
    /*!
        \brief Indicates the stream channel index for a critical temperature event - Applies to: raL4096-24gm

        This enumeration Indicates the stream channel index for a critical temperature event.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=LateActionEventStreamChannelIndex" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& LateActionEventStreamChannelIndex;

    //@}


    //! \name Categories: LateActionEventData
    //@{
    /*!
        \brief Indicates the time stamp for a critical temperature event - Applies to: raL4096-24gm

        This enumeration value indicates the time stamp for a critical temperature event.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=LateActionEventTimestamp" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& LateActionEventTimestamp;

    //@}


    //! \name Categories: Line1RisingEdgeEventData
    //@{
    /*!
        \brief Indicates the stream channel index for an io line 1 rising edge event - Applies to: raL4096-24gm

        This enumeration Indicates the stream channel index for an io line 1 rising edge event
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=Line1RisingEdgeEventStreamChannelIndex" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& Line1RisingEdgeEventStreamChannelIndex;

    //@}


    //! \name Categories: Line1RisingEdgeEventData
    //@{
    /*!
        \brief Indicates the time stamp for a line 1 rising edge event - Applies to: raL4096-24gm

        This enumeration value indicates the time stamp for an io line 1 rising edge event.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=Line1RisingEdgeEventTimestamp" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& Line1RisingEdgeEventTimestamp;

    //@}


    //! \name Categories: Line2RisingEdgeEventData
    //@{
    /*!
        \brief Indicates the stream channel index for an io line 2 rising edge event - Applies to: raL4096-24gm

        This enumeration Indicates the stream channel index for an io line 2 rising edge event
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=Line2RisingEdgeEventStreamChannelIndex" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& Line2RisingEdgeEventStreamChannelIndex;

    //@}


    //! \name Categories: Line2RisingEdgeEventData
    //@{
    /*!
        \brief Indicates the time stamp for a line 2 rising edge event - Applies to: raL4096-24gm

        This enumeration value indicates the time stamp for an io line 2 rising edge event.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=Line2RisingEdgeEventTimestamp" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& Line2RisingEdgeEventTimestamp;

    //@}


    //! \name Categories: Line3RisingEdgeEventData
    //@{
    /*!
        \brief Indicates the stream channel index for an io line 3 rising edge event - Applies to: raL4096-24gm

        This enumeration Indicates the stream channel index for an io line 3 rising edge event
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=Line3RisingEdgeEventStreamChannelIndex" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& Line3RisingEdgeEventStreamChannelIndex;

    //@}


    //! \name Categories: Line3RisingEdgeEventData
    //@{
    /*!
        \brief Indicates the time stamp for a line 3 rising edge event - Applies to: raL4096-24gm

        This enumeration value indicates the time stamp for an io line 3 rising edge event.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=Line3RisingEdgeEventTimestamp" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& Line3RisingEdgeEventTimestamp;

    //@}


    //! \name Categories: Line4RisingEdgeEventData
    //@{
    /*!
        \brief Indicates the stream channel index for an io line 4 rising edge event - Applies to: raL4096-24gm

        This enumeration Indicates the stream channel index for an io line 4 rising edge event
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=Line4RisingEdgeEventStreamChannelIndex" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& Line4RisingEdgeEventStreamChannelIndex;

    //@}


    //! \name Categories: Line4RisingEdgeEventData
    //@{
    /*!
        \brief Indicates the time stamp for a line 4 rising edge event - Applies to: raL4096-24gm

        This enumeration value indicates the time stamp for an io line 4 rising edge event.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=Line4RisingEdgeEventTimestamp" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& Line4RisingEdgeEventTimestamp;

    //@}


    //! \name Categories: DigitalIO
    //@{
    /*!
        \brief Sets the absolute value of the selected line debouncer time in microseconds - Applies to: raL4096-24gm

    
        Visibility: Beginner

        Selected by: LineSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=LineDebouncerTimeAbs" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IFloatEx& LineDebouncerTimeAbs;

    //@}


    //! \name Categories: DigitalIO
    //@{
    /*!
        \brief Sets the electrical configuration of the selected line - Applies to: raL4096-24gm

        This feature controls the current electrical format of the selected physical input or output Line. Line Format can take any of the following values: No Connect: The Line is not connected. Tri-state: The Line is currently in Tri-state mode (Not driven). TTL: The Line is currently accepting or sending TTL level signals. LVDS: The Line is currently accepting or sending LVDS level signals. RS-422: The Line is currently accepting or sending RS-422 level signals. Opto-coupled: The Line is Opto-coupled. 
    
        Visibility: Beginner

        Selected by: LineSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=LineFormat" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<LineFormatEnums>& LineFormat;

    //@}


    //! \name Categories: DigitalIO
    //@{
    /*!
        \brief Enables the signal inverter function for the selected input or output line - Applies to: raL4096-24gm

        This boolean value enables the signal inverter function for the selected input or output line.
    
        Visibility: Beginner

        Selected by: LineSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=LineInverter" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IBooleanEx& LineInverter;

    //@}


    //! \name Categories: DigitalIO
    //@{
    /*!
        \brief  Applies to: raL4096-24gm

    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=LineLogic" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<LineLogicEnums>& LineLogic;

    //@}


    //! \name Categories: DigitalIO
    //@{
    /*!
        \brief Sets the mode for the selected line - Applies to: raL4096-24gm

        This feature controls whether the physical Line is used to Input or Output a signal. When a Line supports input and output mode, the default state is Input to avoid possible electrical contention. Line Mode can take any of the following values: Input: The selected physical line is used to input an electrical signal. Output: The selected physical line is used to output an electrical signal.
    
        Visibility: Beginner

        Selected by: LineSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=LineMode" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<LineModeEnums>& LineMode;

    //@}


    //! \name Categories: DigitalIO
    //@{
    /*!
        \brief Selects the I/O line to configure  Once a line has been selected, all changes to the line settings will be applied to the selected line - Applies to: raL4096-24gm

        This enumeration selects the I/O line to configure. Once a line has been selected, all changes to the line settings will be applied to the selected line.
    
        Visibility: Beginner

        Selecting Parameters: LineMode, LineDebouncerTimeAbs, LineDebouncerTimeRaw, LineInverter, LineTermination, LineStatus, LineSource, LineFormat, MinOutPulseWidthAbs and MinOutPulseWidthRaw

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=LineSelector" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<LineSelectorEnums>& LineSelector;

    //@}


    //! \name Categories: DigitalIO
    //@{
    /*!
        \brief Sets the source signal for the selected line (if the selected line is an output) - Applies to: raL4096-24gm

        This enumeration selects the internally generated camera signal (source signal) for the selected line when the selected line is an output. 
    
        Visibility: Beginner

        Selected by: LineSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=LineSource" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<LineSourceEnums>& LineSource;

    //@}


    //! \name Categories: LineStartOvertriggerEventData
    //@{
    /*!
        \brief Indicates the stream channel index for an line start overtrigger event - Applies to: raL4096-24gm

        This enumeration Indicates the stream channel index for an line start overtrigger event
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=LineStartOvertriggerEventStreamChannelIndex" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& LineStartOvertriggerEventStreamChannelIndex;

    //@}


    //! \name Categories: LineStartOvertriggerEventData
    //@{
    /*!
        \brief Indicates the time stamp for an line start overtrigger event - Applies to: raL4096-24gm

        This enumeration value indicates the time stamp for an line start overtrigger event.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=LineStartOvertriggerEventTimestamp" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& LineStartOvertriggerEventTimestamp;

    //@}


    //! \name Categories: DigitalIO
    //@{
    /*!
        \brief Indicates the current logical state for the selected line - Applies to: raL4096-24gm

        This boolean value indicates the current logical state for the selected line at the time of polling.
    
        Visibility: Beginner

        Selected by: LineSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=LineStatus" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IBooleanEx& LineStatus;

    //@}


    //! \name Categories: DigitalIO
    //@{
    /*!
        \brief A single bitfield indicating the current logical state of all available line signals at time of polling - Applies to: raL4096-24gm

        This integer value is a single bitfield that indicates the current logical state of all available lines at time of polling.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=LineStatusAll" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& LineStatusAll;

    //@}


    //! \name Categories: DigitalIO
    //@{
    /*!
        \brief Enables the termination resistor for the selected input line - Applies to: raL4096-24gm

        This boolean value enables the termination resistor for the selected input line.
    
        Visibility: Beginner

        Selected by: LineSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=LineTermination" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IBooleanEx& LineTermination;

    //@}


    //! \name Categories: DigitalIO
    //@{
    /*!
        \brief Sets the absolute value (in microseconds) for the minimum signal width of an output signal - Applies to: raL4096-24gm

        This float value sets the absolute value (in microseconds) for the minimum signal width of a signal that is received from the frequency converter or from the shaft encoder module and that is associated with a digital output line.
    
        Visibility: Beginner

        Selected by: LineSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=MinOutPulseWidthAbs" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IFloatEx& MinOutPulseWidthAbs;

    //@}


    //! \name Categories: AOI
    //@{
    /*!
        \brief Sets the X offset (left offset) of the area of interest in pixels - Applies to: raL4096-24gm

        This value sets the X offset (left offset) for the area of interest in pixels, i.e., the distance in pixels between the left side of the sensor and the left side of the image area.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=OffsetX" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& OffsetX;

    //@}


    //! \name Categories: DeviceInformation
    //@{
    /*!
        \brief Shows the over temperature state of the selected target - Applies to: raL4096-24gm

    
        Visibility: Expert

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=OverTemperature" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IBooleanEx& OverTemperature;

    //@}


    //! \name Categories: OverTemperatureEventData
    //@{
    /*!
        \brief Indicates the stream channel index for an over temperature event - Applies to: raL4096-24gm

        This enumeration Indicates the stream channel index for an over temperature event.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=OverTemperatureEventStreamChannelIndex" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& OverTemperatureEventStreamChannelIndex;

    //@}


    //! \name Categories: OverTemperatureEventData
    //@{
    /*!
        \brief Indicates the time stamp for an over temperature event - Applies to: raL4096-24gm

        This enumeration value indicates the time stamp for an over temperature event.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=OverTemperatureEventTimestamp" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& OverTemperatureEventTimestamp;

    //@}


    //! \name Categories: RemoveParamLimits
    //@{
    /*!
        \brief Selects the parameter to configure  Once a parameter has been selected, all changes made using the Remove Limits feature will be applied to the selected parameter - Applies to: raL4096-24gm

        This enumeration selects the parameter to configure. Selects the parameter to configure. Once a parameter has been selected, all changes made using the Remove Limits feature will be applied to the selected parameter
    
        Visibility: Guru

        Selecting Parameters: RemoveLimits

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ParameterSelector" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<ParameterSelectorEnums>& ParameterSelector;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Size of the payload in bytes - Applies to: raL4096-24gm

        Size of the payload in bytes. This is the total number of bytes sent in the payload. Image data + chunk data if present. No packet headers.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=PayloadSize" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& PayloadSize;

    //@}


    //! \name Categories: ImageFormat
    //@{
    /*!
        \brief  Applies to: raL4096-24gm

         This is a read only feature. This enumeration provides a list of values that indicate the alignment of the camera's Bayer filter to the pixels in the acquired images.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=PixelColorFilter" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<PixelColorFilterEnums>& PixelColorFilter;

    //@}


    //! \name Categories: ImageFormat
    //@{
    /*!
        \brief Indicates the maximum possible pixel value that could be transferred from the camera - Applies to: raL4096-24gm

        This a read only feature. It indicates the maximum possible pixel value that could be transferred from the camera.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=PixelDynamicRangeMax" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& PixelDynamicRangeMax;

    //@}


    //! \name Categories: ImageFormat
    //@{
    /*!
        \brief Indicates the minimum possible pixel value that could be transferred from the camera - Applies to: raL4096-24gm

        This a read only feature. It indicates the minimum possible pixel value that could be transferred from the camera.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=PixelDynamicRangeMin" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& PixelDynamicRangeMin;

    //@}


    //! \name Categories: ImageFormat
    //@{
    /*!
        \brief Sets the format of the pixel data transmitted for acquired images - Applies to: raL4096-24gm

        This enumeration sets the format of the pixel data transmitted for acquired images. 
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=PixelFormat" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<PixelFormatEnums>& PixelFormat;

    //@}


    //! \name Categories: TransportLayer
    //@{
    /*!
        \brief Select legacy pixel format encoding - Applies to: raL4096-24gm

        This switch selects a legacy GVSP pixel format encoding, for compatibility with older camera models.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=PixelFormatLegacy" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IBooleanEx& PixelFormatLegacy;

    //@}


    //! \name Categories: ImageFormat
    //@{
    /*!
        \brief Indicates the depth of the pixel values in the image in bits per pixel - Applies to: raL4096-24gm

        This is a read only feature. This enumeration provides a list of values that indicate the depth of the pixel values in the acquired images in bits per pixel. This value will always be coherent with the pixel format setting.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=PixelSize" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<PixelSizeEnums>& PixelSize;

    //@}


    //! \name Categories: AcquisitionTrigger
    //@{
    /*!
        \brief Indicates the sensor readout time given the current settings - Applies to: raL4096-24gm

    
        Visibility: Expert

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ReadoutTimeAbs" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IFloatEx& ReadoutTimeAbs;

    //@}


    //! \name Categories: RemoveParamLimits
    //@{
    /*!
        \brief Removes the factory-set limits of the selected parameter - Applies to: raL4096-24gm

        Removes the factory-set limits of the selected parameter. Having removed the factory-set limits you may set the parameter within extended limits. These are only defined by technical restrictions. Note:  Inferior image quality may result.
    
        Visibility: Guru

        Selected by: ParameterSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=RemoveLimits" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IBooleanEx& RemoveLimits;

    //@}


    //! \name Categories: AcquisitionTrigger
    //@{
    /*!
        \brief Indicates the minimum allowed frame acquisition period (in microseconds) given the current settings for the area of interest, exposure time, and bandwidth - Applies to: raL4096-24gm

        Indicates the 'absolute' value of the minimum allowed acquisition frame period. The 'absolute' value is a float value that indicates the minimum allowed acquisition frame period in microseconds given the current settings for the area of interest, exposure time, and bandwidth.
    
        Visibility: Guru

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ResultingFramePeriodAbs" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IFloatEx& ResultingFramePeriodAbs;

    //@}


    //! \name Categories: AcquisitionTrigger
    //@{
    /*!
        \brief Indicates the maximum allowed frame acquisition rate (in frames per second) given the current settings for the area of interest, exposure time, and bandwidth - Applies to: raL4096-24gm

        Indicates the 'absolute' value of the maximum allowed acquisition frame rate. The 'absolute' value is a float value that indicates the maximum allowed acquisition frame rate in frames per second given the current settings for the area of interest, exposure time, and bandwidth.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ResultingFrameRateAbs" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IFloatEx& ResultingFrameRateAbs;

    //@}


    //! \name Categories: AcquisitionTrigger
    //@{
    /*!
        \brief Indicates the minimum allowed line acquisition period (in microseconds) given the current settings for the area of interest, exposure time, and bandwidth - Applies to: raL4096-24gm

        Indicates the 'absolute' value of the minimum allowed acquisition line period. The 'absolute' value is a float value that indicates the minimum allowed acquisition line period in microseconds given the current settings for the area of interest, exposure time, and bandwidth.
    
        Visibility: Guru

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ResultingLinePeriodAbs" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IFloatEx& ResultingLinePeriodAbs;

    //@}


    //! \name Categories: AcquisitionTrigger
    //@{
    /*!
        \brief Indicates the maximum allowed line acquisition rate (in lines per second) given the current settings for the area of interest, exposure time, and bandwidth - Applies to: raL4096-24gm

        Indicates the 'absolute' value of the maximum allowed acquisition line rate. The 'absolute' value is a float value that indicates the maximum allowed acquisition line rate in lines per second given the current settings for the area of interest, exposure time, and bandwidth.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ResultingLineRateAbs" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IFloatEx& ResultingLineRateAbs;

    //@}


    //! \name Categories: ImageFormat
    //@{
    /*!
        \brief Enables the horizontal flipping of the image - Applies to: raL4096-24gm

        This feature is used to flip horizontally the image sent by the device. The AOI is applied after the flipping.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ReverseX" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IBooleanEx& ReverseX;

    //@}


    //! \name Categories: ImageFormat
    //@{
    /*!
        \brief Enables the vertical flipping of the image - Applies to: raL4096-24gm

        This feature is used to flip vertically the image sent by the device. The AOI is applied after the flipping.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ReverseY" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IBooleanEx& ReverseY;

    //@}


    //! \name Categories: DeviceInformation
    //@{
    /*!
        \brief Indicates the height of the camera's sensor in pixels - Applies to: raL4096-24gm

        This is a read only element. It is an integer that indicates the actual height of the camera's sensor in pixels.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=SensorHeight" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& SensorHeight;

    //@}


    //! \name Categories: DeviceInformation
    //@{
    /*!
        \brief Indicates the width of the camera's sensor in pixels - Applies to: raL4096-24gm

        This is a read only element. It is an integer that indicates the actual width of the camera's sensor in pixels.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=SensorWidth" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& SensorWidth;

    //@}


    //! \name Categories: Shading
    //@{
    /*!
        \brief Enables the selected kind of shading correction - Applies to: raL4096-24gm

        This boolean value enables the selected kind of shading correction.
    
        Visibility: Beginner

        Selected by: ShadingSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ShadingEnable" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IBooleanEx& ShadingEnable;

    //@}


    //! \name Categories: Shading
    //@{
    /*!
        \brief Selects the kind of shading correction - Applies to: raL4096-24gm

        This enumeration selects the kind of shading correction.
    
        Visibility: Beginner

        Selecting Parameters: ShadingEnable, ShadingSetDefaultSelector and ShadingSetSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ShadingSelector" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<ShadingSelectorEnums>& ShadingSelector;

    //@}


    //! \name Categories: Shading
    //@{
    /*!
        \brief Activates the selected shading set - Applies to: raL4096-24gm

        This command copies the selected shading set from the camera's non-volatile memory into the volatile memory. Shading correction is performed using the shading set in the volatile memory.
    
        Visibility: Expert

        Selected by: ShadingSetSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ShadingSetActivate" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::ICommandEx& ShadingSetActivate;

    //@}


    //! \name Categories: Shading
    //@{
    /*!
        \brief Creates a shading set - Applies to: raL4096-24gm

        ShadingSetCreate
    
        Visibility: Expert

        Selected by: ShadingSetSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ShadingSetCreate" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<ShadingSetCreateEnums>& ShadingSetCreate;

    //@}


    //! \name Categories: Shading
    //@{
    /*!
        \brief Selects the bootup shading set - Applies to: raL4096-24gm

        This enumeration selects the shading set that will be loaded into the volatile memory during camera bootup.
    
        Visibility: Expert

        Selected by: ShadingSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ShadingSetDefaultSelector" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<ShadingSetDefaultSelectorEnums>& ShadingSetDefaultSelector;

    //@}


    //! \name Categories: Shading
    //@{
    /*!
        \brief Selects the shading set to which the activate command will be applied - Applies to: raL4096-24gm

        This enumeration selects the shading set to which the activate command will be applied.
    
        Visibility: Expert

        Selected by: ShadingSelector

        Selecting Parameters: ShadingSetActivate and ShadingSetCreate

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ShadingSetSelector" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<ShadingSetSelectorEnums>& ShadingSetSelector;

    //@}


    //! \name Categories: Shading
    //@{
    /*!
        \brief Indicates error statuses related to shading correction - Applies to: raL4096-24gm

        This enumeratuion indicates error statuses related to shading correction.
    
        Visibility: Expert

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ShadingStatus" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<ShadingStatusEnums>& ShadingStatus;

    //@}


    //! \name Categories: ShaftEncoderModule
    //@{
    /*!
        \brief Indicates the current value of the tick counter - Applies to: raL4096-24gm

        This integer value (read only) indicates the current value of the tick counter of the shaft encoder module.
    
        Visibility: Expert

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ShaftEncoderModuleCounter" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& ShaftEncoderModuleCounter;

    //@}


    //! \name Categories: ShaftEncoderModule
    //@{
    /*!
        \brief Sets the maximum value for the tick counter - Applies to: raL4096-24gm

        This integer value sets the maximum value for the tick counter of the shaft encoder module (range: 0 to 32767). If the tick counter is incrementing and it reaches the set maximum, it willl roll over to 0. If the tick counter is decrementing and it reaches 0, it willl roll back to the set maximum.
    
        Visibility: Expert

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ShaftEncoderModuleCounterMax" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& ShaftEncoderModuleCounterMax;

    //@}


    //! \name Categories: ShaftEncoderModule
    //@{
    /*!
        \brief Selects the counting mode of the tick counter - Applies to: raL4096-24gm

        Selects the counting mode of the tick counter of the shaft encoder module.
    
        Visibility: Expert

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ShaftEncoderModuleCounterMode" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<ShaftEncoderModuleCounterModeEnums>& ShaftEncoderModuleCounterMode;

    //@}


    //! \name Categories: ShaftEncoderModule
    //@{
    /*!
        \brief Resets the tick counter to 0 - Applies to: raL4096-24gm

        This command resets the tick counter count of the shaft encoder module to 0.
    
        Visibility: Expert

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ShaftEncoderModuleCounterReset" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::ICommandEx& ShaftEncoderModuleCounterReset;

    //@}


    //! \name Categories: ShaftEncoderModule
    //@{
    /*!
        \brief Selects the phase of the shaft encoder - Applies to: raL4096-24gm

        Selects the phase of the shaft encoder as input for the shaft encoder module.
    
        Visibility: Expert

        Selecting Parameters: ShaftEncoderModuleLineSource

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ShaftEncoderModuleLineSelector" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<ShaftEncoderModuleLineSelectorEnums>& ShaftEncoderModuleLineSelector;

    //@}


    //! \name Categories: ShaftEncoderModule
    //@{
    /*!
        \brief Selects the input line as signal source for the shaft encoder module - Applies to: raL4096-24gm

    
        Visibility: Expert

        Selected by: ShaftEncoderModuleLineSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ShaftEncoderModuleLineSource" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<ShaftEncoderModuleLineSourceEnums>& ShaftEncoderModuleLineSource;

    //@}


    //! \name Categories: ShaftEncoderModule
    //@{
    /*!
        \brief Selects the circumstances for the shaft encoder module to output trigger signals - Applies to: raL4096-24gm

        This enumeration value selects the circumstances for the shaft encoder module to output trigger signals.
    
        Visibility: Expert

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ShaftEncoderModuleMode" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<ShaftEncoderModuleModeEnums>& ShaftEncoderModuleMode;

    //@}


    //! \name Categories: ShaftEncoderModule
    //@{
    /*!
        \brief Sets the maximum value for the reverse counter - Applies to: raL4096-24gm

        This integer value sets the maximum value for the reverse counter of the shaft encoder module (range: 0 to 32767).
    
        Visibility: Expert

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ShaftEncoderModuleReverseCounterMax" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& ShaftEncoderModuleReverseCounterMax;

    //@}


    //! \name Categories: ShaftEncoderModule
    //@{
    /*!
        \brief Resets the reverse counter to 0 - Applies to: raL4096-24gm

        This command resets the reverse counter of the shaft encoder module to 0 and informs the module that the current direction of conveyor movement is forward. Reset must be carried out before the first conveyor movement in the forward direction.
    
        Visibility: Expert

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=ShaftEncoderModuleReverseCounterReset" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::ICommandEx& ShaftEncoderModuleReverseCounterReset;

    //@}


    //! \name Categories: ImageFormat
    //@{
    /*!
        \brief Specifies the direction of imaging and the separation (consecutive numbers) of related line captures - Applies to: raL4096-24gm

        Specifies the direction of imaging and the separation (consecutive numbers) of related line captures. Related line captures will be combined.

Positive integer: The object will pass the top sensor line first.

Negative integer: The object will pass the bottom sensor line first.

In color cameras, the top sensor line is the green line, and the bottom sensor line is the blue line.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=SpatialCorrection" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& SpatialCorrection;

    //@}


    //! \name Categories: AnalogControls
    //@{
    /*!
        \brief Sets the substrate voltage - Applies to: raL4096-24gm

        This value sets the substrate voltage
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=SubstrateVoltage" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& SubstrateVoltage;

    //@}


    //! \name Categories: AcquisitionTrigger
    //@{
    /*!
        \brief Enables the synchronous free run mode - Applies to: raL4096-24gm

        When enabled the camera triggers with the specified frame rate derived from the synchronized clock.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=SyncFreeRunTimerEnable" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IBooleanEx& SyncFreeRunTimerEnable;

    //@}


    //! \name Categories: AcquisitionTrigger
    //@{
    /*!
        \brief Synchronous free run trigger start time (high 32 bits) - Applies to: raL4096-24gm

        High 32 bits of the synchronous free run trigger start time.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=SyncFreeRunTimerStartTimeHigh" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& SyncFreeRunTimerStartTimeHigh;

    //@}


    //! \name Categories: AcquisitionTrigger
    //@{
    /*!
        \brief Synchronous free run trigger start time (low 32 bits) - Applies to: raL4096-24gm

        Low 32 bits of the synchronous free run trigger start time.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=SyncFreeRunTimerStartTimeLow" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& SyncFreeRunTimerStartTimeLow;

    //@}


    //! \name Categories: AcquisitionTrigger
    //@{
    /*!
        \brief Synchronous free run trigger rate - Applies to: raL4096-24gm

        Trigger rate for the clock synchronous trigger.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=SyncFreeRunTimerTriggerRateAbs" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IFloatEx& SyncFreeRunTimerTriggerRateAbs;

    //@}


    //! \name Categories: AcquisitionTrigger
    //@{
    /*!
        \brief Activates the synchronous free run trigger settings - Applies to: raL4096-24gm

        Activates changed settings for the synchronous free run.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=SyncFreeRunTimerUpdate" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::ICommandEx& SyncFreeRunTimerUpdate;

    //@}


    //! \name Categories: DeviceInformation
    //@{
    /*!
        \brief Shows the current temperature of the selected target in degrees centigrade - Applies to: raL4096-24gm

    
        Visibility: Expert

        Selected by: TemperatureSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=TemperatureAbs" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IFloatEx& TemperatureAbs;

    //@}


    //! \name Categories: DeviceInformation
    //@{
    /*!
        \brief Lists the temperature sources available for readout - Applies to: raL4096-24gm

    
        Visibility: Expert

        Selecting Parameters: TemperatureAbs

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=TemperatureSelector" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<TemperatureSelectorEnums>& TemperatureSelector;

    //@}


    //! \name Categories: DeviceInformation
    //@{
    /*!
        \brief Temperature State - Applies to: raL4096-24gm

    
        Visibility: Expert

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=TemperatureState" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<TemperatureStateEnums>& TemperatureState;

    //@}


    //! \name Categories: ImageFormat
    //@{
    /*!
        \brief Selecting a test image from the list will enable the test image - Applies to: raL4096-24gm

        This enumeration provides a list of the available test images. Selecting a test image from the list will enable the test image.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=TestImageSelector" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<TestImageSelectorEnums>& TestImageSelector;

    //@}


    //! \name Categories: AcquisitionTrigger
    //@{
    /*!
        \brief Sets the signal transition needed to activate the selected trigger - Applies to: raL4096-24gm

        This enumeration sets the signal transition needed to activate the selected trigger.
    
        Visibility: Beginner

        Selected by: TriggerSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=TriggerActivation" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<TriggerActivationEnums>& TriggerActivation;

    //@}


    //! \name Categories: AcquisitionTrigger
    //@{
    /*!
        \brief Sets the trigger delay time in microseconds - Applies to: raL4096-24gm

        This float value sets the absolute trigger delay in microseconds to apply after the trigger reception before effectively activating it.
    
        Visibility: Expert

        Selected by: TriggerSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=TriggerDelayAbs" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IFloatEx& TriggerDelayAbs;

    //@}


    //! \name Categories: AcquisitionTrigger
    //@{
    /*!
        \brief Sets the trigger delay expressed as number of line triggers - Applies to: raL4096-24gm

        This integer value sets the trigger delay expressed as a number of consecutive line triggers to apply after the trigger reception before effectively activating it.
    
        Visibility: Expert

        Selected by: TriggerSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=TriggerDelayLineTriggerCount" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& TriggerDelayLineTriggerCount;

    //@}


    //! \name Categories: AcquisitionTrigger
    //@{
    /*!
        \brief Selects the kind of trigger delay - Applies to: raL4096-24gm

        Selects wheter trigger delay is defined as a time interval or as a number of consecutive line triggers.
    
        Visibility: Expert

        Selected by: TriggerSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=TriggerDelaySource" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<TriggerDelaySourceEnums>& TriggerDelaySource;

    //@}


    //! \name Categories: AcquisitionTrigger
    //@{
    /*!
        \brief Sets the mode for the selected trigger - Applies to: raL4096-24gm

        This enumeration sets the trigger mode for the selected trigger.
    
        Visibility: Beginner

        Selected by: TriggerSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=TriggerMode" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<TriggerModeEnums>& TriggerMode;

    //@}


    //! \name Categories: AcquisitionTrigger
    //@{
    /*!
        \brief Determines whether a partial or complete frame is transmitted when the frame start trigger prematurely transitions - Applies to: raL4096-24gm

        This feature determines whether a partial or a complete frame is transmitted when the frame start trigger is used with Level High or Level Low and when the frame start trigger signal transitions while the frame is still being acquired.
    
        Visibility: Expert

        Selected by: TriggerSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=TriggerPartialClosingFrame" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IBooleanEx& TriggerPartialClosingFrame;

    //@}


    //! \name Categories: AcquisitionTrigger
    //@{
    /*!
        \brief Selects the trigger type to configure  Once a trigger type has been selected, all changes to the trigger settings will be applied to the selected trigger - Applies to: raL4096-24gm

        This enumeration selects the trigger type to configure. Once a trigger type has been selected, all changes to the trigger settings will be applied to the selected trigger.
    
        Visibility: Beginner

        Selecting Parameters: TriggerMode, TriggerSoftware, TriggerSource, TriggerActivation, TriggerPartialClosingFrame, TriggerDelayAbs, TriggerDelayLineTriggerCount and TriggerDelaySource

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=TriggerSelector" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<TriggerSelectorEnums>& TriggerSelector;

    //@}


    //! \name Categories: AcquisitionTrigger
    //@{
    /*!
        \brief Generates a software trigger signal that is used when the trigger source is set to 'software' - Applies to: raL4096-24gm

        This command generates a software trigger signal. The software trigger signal will be used if the trigger source is set to 'software'.
    
        Visibility: Beginner

        Selected by: TriggerSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=TriggerSoftware" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::ICommandEx& TriggerSoftware;

    //@}


    //! \name Categories: AcquisitionTrigger
    //@{
    /*!
        \brief Sets the signal source for the selected trigger - Applies to: raL4096-24gm

        This enumeration sets the signal source for the selected trigger.
    
        Visibility: Beginner

        Selected by: TriggerSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=TriggerSource" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<TriggerSourceEnums>& TriggerSource;

    //@}


    //! \name Categories: UserDefinedValues
    //@{
    /*!
        \brief  Applies to: raL4096-24gm

    
        Visibility: Guru

        Selected by: UserDefinedValueSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=UserDefinedValue" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& UserDefinedValue;

    //@}


    //! \name Categories: UserDefinedValues
    //@{
    /*!
        \brief  Applies to: raL4096-24gm

    
        Visibility: Guru

        Selecting Parameters: UserDefinedValue

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=UserDefinedValueSelector" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<UserDefinedValueSelectorEnums>& UserDefinedValueSelector;

    //@}


    //! \name Categories: DigitalIO
    //@{
    /*!
        \brief Selects the user settable output signal to configure  Once a user settable output signal has been selected, all changes to the user settable output signal settings will be applied to the selected user settable output signal - Applies to: raL4096-24gm

        This enumeration selects the user settable output signal to configure. Once a user settable output signal has been selected, all changes to the user settable output signal settings will be applied to the selected user settable output signal.
    
        Visibility: Beginner

        Selecting Parameters: UserOutputValue

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=UserOutputSelector" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<UserOutputSelectorEnums>& UserOutputSelector;

    //@}


    //! \name Categories: DigitalIO
    //@{
    /*!
        \brief Sets the state of the selected user settable output signal - Applies to: raL4096-24gm

        This boolean value sets the state of the selected user settable output signal.
    
        Visibility: Beginner

        Selected by: UserOutputSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=UserOutputValue" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IBooleanEx& UserOutputValue;

    //@}


    //! \name Categories: DigitalIO
    //@{
    /*!
        \brief A single bitfield that sets the state of all user settable output signals in one access - Applies to: raL4096-24gm

        This integer value is a single bitfield that sets the state of all user settable output signals in one access.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=UserOutputValueAll" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& UserOutputValueAll;

    //@}


    //! \name Categories: UserSets
    //@{
    /*!
        \brief Sets the configuration set to be used as the default startup set  The configuration set that has been selected as the default startup set will be loaded as the active set whenever the camera is powered on or reset - Applies to: raL4096-24gm

        This enumeration sets the configuration set to be used as the default startup set. The configuration set that has been selected as the default startup set will be loaded as the active set whenever the camera is powered on or reset.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=UserSetDefaultSelector" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<UserSetDefaultSelectorEnums>& UserSetDefaultSelector;

    //@}


    //! \name Categories: UserSets
    //@{
    /*!
        \brief Loads the selected configuration into the camera's volatile memory and makes it the active configuration set  Once the selected set is loaded, the parameters in the selected set will control the camera - Applies to: raL4096-24gm

        This command loads the selected configuration set from the non-volatile memory in the camera to the volatile memory and makes the selected set the active configuration set. Once the selected set is loaded, the parameters in the selected set will control the camera.
    
        Visibility: Beginner

        Selected by: UserSetSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=UserSetLoad" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::ICommandEx& UserSetLoad;

    //@}


    //! \name Categories: UserSets
    //@{
    /*!
        \brief Saves the current active configuration set into the selected user set   - Applies to: raL4096-24gm

        This command copies the parameters in the current active configuration set into the selected user set in the camera's non-volatile memory.
    
        Visibility: Beginner

        Selected by: UserSetSelector

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=UserSetSave" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::ICommandEx& UserSetSave;

    //@}


    //! \name Categories: UserSets
    //@{
    /*!
        \brief Selects the configuration set to load, save, or configure  Once a configuration set has been selected, all changes to the configuration set settings will be applied to the selected configuration set - Applies to: raL4096-24gm

        This enumeration selects the configuration set to load, save or configure. Possible values for the User Set Selector are: Default: Selects a configuration set that contains factory settings. User Set 1: Selects the first user set. When the Default configuration set is selected and loaded using User Set Load, the device must be in default factory settings state and must make sure the mandatory continuous acquisition use case works directly. Default User Set is read-only and cannot be modified.
    
        Visibility: Beginner

        Selecting Parameters: UserSetLoad and UserSetSave

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=UserSetSelector" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IEnumParameterT<UserSetSelectorEnums>& UserSetSelector;

    //@}


    //! \name Categories: VirtualLine1RisingEdgeEventData
    //@{
    /*!
        \brief Indicates the stream channel index for an io virtual line 1 rising edge event - Applies to: raL4096-24gm

        This enumeration Indicates the stream channel index for an io virtual line 1 rising edge event
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=VirtualLine1RisingEdgeEventStreamChannelIndex" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& VirtualLine1RisingEdgeEventStreamChannelIndex;

    //@}


    //! \name Categories: VirtualLine1RisingEdgeEventData
    //@{
    /*!
        \brief Indicates the time stamp for a virtual line 1 rising edge event - Applies to: raL4096-24gm

        This enumeration value indicates the time stamp for an io virtual line 1 rising edge event.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=VirtualLine1RisingEdgeEventTimestamp" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& VirtualLine1RisingEdgeEventTimestamp;

    //@}


    //! \name Categories: VirtualLine2RisingEdgeEventData
    //@{
    /*!
        \brief Indicates the stream channel index for an io virtual line 2 rising edge event - Applies to: raL4096-24gm

        This enumeration Indicates the stream channel index for an io virtual line 2 rising edge event
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=VirtualLine2RisingEdgeEventStreamChannelIndex" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& VirtualLine2RisingEdgeEventStreamChannelIndex;

    //@}


    //! \name Categories: VirtualLine2RisingEdgeEventData
    //@{
    /*!
        \brief Indicates the time stamp for a virtual line 2 rising edge event - Applies to: raL4096-24gm

        This enumeration value indicates the time stamp for an io virtual line 2 rising edge event.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=VirtualLine2RisingEdgeEventTimestamp" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& VirtualLine2RisingEdgeEventTimestamp;

    //@}


    //! \name Categories: VirtualLine3RisingEdgeEventData
    //@{
    /*!
        \brief Indicates the stream channel index for an io virtual line 3 rising edge event - Applies to: raL4096-24gm

        This enumeration Indicates the stream channel index for an io virtual line 3 rising edge event
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=VirtualLine3RisingEdgeEventStreamChannelIndex" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& VirtualLine3RisingEdgeEventStreamChannelIndex;

    //@}


    //! \name Categories: VirtualLine3RisingEdgeEventData
    //@{
    /*!
        \brief Indicates the time stamp for a virtual line 3 rising edge event - Applies to: raL4096-24gm

        This enumeration value indicates the time stamp for an io virtual line 3 rising edge event.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=VirtualLine3RisingEdgeEventTimestamp" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& VirtualLine3RisingEdgeEventTimestamp;

    //@}


    //! \name Categories: VirtualLine4RisingEdgeEventData
    //@{
    /*!
        \brief Indicates the stream channel index for an io virtual line 4 rising edge event - Applies to: raL4096-24gm

        This enumeration Indicates the stream channel index for an io virtual line 4 rising edge event
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=VirtualLine4RisingEdgeEventStreamChannelIndex" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& VirtualLine4RisingEdgeEventStreamChannelIndex;

    //@}


    //! \name Categories: VirtualLine4RisingEdgeEventData
    //@{
    /*!
        \brief Indicates the time stamp for a virtual line 4 rising edge event - Applies to: raL4096-24gm

        This enumeration value indicates the time stamp for an io virtual line 4 rising edge event.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=VirtualLine4RisingEdgeEventTimestamp" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& VirtualLine4RisingEdgeEventTimestamp;

    //@}


    //! \name Categories: AOI
    //@{
    /*!
        \brief Sets the width of the area of interest in pixels - Applies to: raL4096-24gm

        This value sets the width of the area of interest in pixels.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=Width" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& Width;

    //@}


    //! \name Categories: DeviceInformation
    //@{
    /*!
        \brief Indicates the maximum allowed width of the image in pixels - Applies to: raL4096-24gm

        This is a read only element. It is an integer that indicates maximum allowed width of the image in pixels taking into account any function that may limit the allowed width.
    
        Visibility: Beginner

        The <a href="https://docs.baslerweb.com/?rhcsh=1&rhmapid=WidthMax" target="_blank">Basler Product Documentation</a> may provide more information.
    */
    Pylon::IIntegerEx& WidthMax;

    //@}


        private:
        //! \cond HIDE_CLASS_METHODS

            //! not implemented copy constructor
            BaslerCameraCameraParams(BaslerCameraCameraParams&);

            //! not implemented assignment operator
            BaslerCameraCameraParams& operator=(BaslerCameraCameraParams&);

        //! \endcond
    };

    //**************************************************************************************************
    // Enumeration support classes
    //**************************************************************************************************
    //! \cond HIDE_CLASS_METHODS

    ///////////////////////////////////////////////////////////////////////////
    //
    namespace EnumParameterClasses
    {
        ///////////////////////////////////////////////////////////////////////////
        //
        class AcquisitionModeEnumParameter : public Pylon::CEnumParameterT<AcquisitionModeEnums>
        {
        public:
            AcquisitionModeEnumParameter()
            {
            }

            virtual ~AcquisitionModeEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 2;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("Continuous", 11),
                    TableItem_t("SingleFrame", 12)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class AcquisitionStatusSelectorEnumParameter : public Pylon::CEnumParameterT<AcquisitionStatusSelectorEnums>
        {
        public:
            AcquisitionStatusSelectorEnumParameter()
            {
            }

            virtual ~AcquisitionStatusSelectorEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 8;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("AcquisitionActive", 18),
                    TableItem_t("AcquisitionTransfer", 20),
                    TableItem_t("AcquisitionTriggerWait", 23),
                    TableItem_t("ExposureActive", 15),
                    TableItem_t("FrameActive", 12),
                    TableItem_t("FrameTransfer", 14),
                    TableItem_t("FrameTriggerWait", 17),
                    TableItem_t("LineTriggerWait", 16)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class AutoFunctionAOISelectorEnumParameter : public Pylon::CEnumParameterT<AutoFunctionAOISelectorEnums>
        {
        public:
            AutoFunctionAOISelectorEnumParameter()
            {
            }

            virtual ~AutoFunctionAOISelectorEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 2;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("AOI1", 5),
                    TableItem_t("AOI2", 5)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class AutoFunctionProfileEnumParameter : public Pylon::CEnumParameterT<AutoFunctionProfileEnums>
        {
        public:
            AutoFunctionProfileEnumParameter()
            {
            }

            virtual ~AutoFunctionProfileEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 2;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("ExposureMinimum", 16),
                    TableItem_t("GainMinimum", 12)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class BinningModeHorizontalEnumParameter : public Pylon::CEnumParameterT<BinningModeHorizontalEnums>
        {
        public:
            BinningModeHorizontalEnumParameter()
            {
            }

            virtual ~BinningModeHorizontalEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 1;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("Summing", 8)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class BinningModeVerticalEnumParameter : public Pylon::CEnumParameterT<BinningModeVerticalEnums>
        {
        public:
            BinningModeVerticalEnumParameter()
            {
            }

            virtual ~BinningModeVerticalEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 1;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("Todo", 5)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class BlackLevelSelectorEnumParameter : public Pylon::CEnumParameterT<BlackLevelSelectorEnums>
        {
        public:
            BlackLevelSelectorEnumParameter()
            {
            }

            virtual ~BlackLevelSelectorEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 1;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("All", 4)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class ChunkSelectorEnumParameter : public Pylon::CEnumParameterT<ChunkSelectorEnums>
        {
        public:
            ChunkSelectorEnumParameter()
            {
            }

            virtual ~ChunkSelectorEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 1;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("Todo", 5)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class CounterEventSourceEnumParameter : public Pylon::CEnumParameterT<CounterEventSourceEnums>
        {
        public:
            CounterEventSourceEnumParameter()
            {
            }

            virtual ~CounterEventSourceEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 1;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("FrameStart", 11)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class CounterResetSourceEnumParameter : public Pylon::CEnumParameterT<CounterResetSourceEnums>
        {
        public:
            CounterResetSourceEnumParameter()
            {
            }

            virtual ~CounterResetSourceEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 5;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("Line1", 6),
                    TableItem_t("Line2", 6),
                    TableItem_t("Line3", 6),
                    TableItem_t("Off", 4),
                    TableItem_t("Software", 9)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class CounterSelectorEnumParameter : public Pylon::CEnumParameterT<CounterSelectorEnums>
        {
        public:
            CounterSelectorEnumParameter()
            {
            }

            virtual ~CounterSelectorEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 2;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("Counter2", 9),
                    TableItem_t("Counter3", 9)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class DeviceScanTypeEnumParameter : public Pylon::CEnumParameterT<DeviceScanTypeEnums>
        {
        public:
            DeviceScanTypeEnumParameter()
            {
            }

            virtual ~DeviceScanTypeEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 2;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("Areascan", 9),
                    TableItem_t("Linescan", 9)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class EventNotificationEnumParameter : public Pylon::CEnumParameterT<EventNotificationEnums>
        {
        public:
            EventNotificationEnumParameter()
            {
            }

            virtual ~EventNotificationEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 3;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("GenICamEvent", 13),
                    TableItem_t("Off", 4),
                    TableItem_t("On", 3)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class EventSelectorEnumParameter : public Pylon::CEnumParameterT<EventSelectorEnums>
        {
        public:
            EventSelectorEnumParameter()
            {
            }

            virtual ~EventSelectorEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 6;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("AcquisitionStartOvertrigger", 28),
                    TableItem_t("ActionLate", 11),
                    TableItem_t("EventOverrun", 13),
                    TableItem_t("FrameStartOvertrigger", 22),
                    TableItem_t("FrameTimeout", 13),
                    TableItem_t("LineStartOvertrigger", 21)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class ExpertFeatureAccessSelectorEnumParameter : public Pylon::CEnumParameterT<ExpertFeatureAccessSelectorEnums>
        {
        public:
            ExpertFeatureAccessSelectorEnumParameter()
            {
            }

            virtual ~ExpertFeatureAccessSelectorEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 8;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("ExpertFeature1", 15),
                    TableItem_t("ExpertFeature1_Legacy", 22),
                    TableItem_t("ExpertFeature2", 15),
                    TableItem_t("ExpertFeature3", 15),
                    TableItem_t("ExpertFeature4", 15),
                    TableItem_t("ExpertFeature5", 15),
                    TableItem_t("ExpertFeature6", 15),
                    TableItem_t("ExpertFeature7", 15)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class ExposureAutoEnumParameter : public Pylon::CEnumParameterT<ExposureAutoEnums>
        {
        public:
            ExposureAutoEnumParameter()
            {
            }

            virtual ~ExposureAutoEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 3;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("Continuous", 11),
                    TableItem_t("Off", 4),
                    TableItem_t("Once", 5)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class ExposureModeEnumParameter : public Pylon::CEnumParameterT<ExposureModeEnums>
        {
        public:
            ExposureModeEnumParameter()
            {
            }

            virtual ~ExposureModeEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 2;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("Timed", 6),
                    TableItem_t("TriggerWidth", 13)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class FileOpenModeEnumParameter : public Pylon::CEnumParameterT<FileOpenModeEnums>
        {
        public:
            FileOpenModeEnumParameter()
            {
            }

            virtual ~FileOpenModeEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 2;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("Read", 5),
                    TableItem_t("Write", 6)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class FileOperationSelectorEnumParameter : public Pylon::CEnumParameterT<FileOperationSelectorEnums>
        {
        public:
            FileOperationSelectorEnumParameter()
            {
            }

            virtual ~FileOperationSelectorEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 4;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("Close", 6),
                    TableItem_t("Open", 5),
                    TableItem_t("Read", 5),
                    TableItem_t("Write", 6)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class FileOperationStatusEnumParameter : public Pylon::CEnumParameterT<FileOperationStatusEnums>
        {
        public:
            FileOperationStatusEnumParameter()
            {
            }

            virtual ~FileOperationStatusEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 2;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("Failure", 8),
                    TableItem_t("Success", 8)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class FileSelectorEnumParameter : public Pylon::CEnumParameterT<FileSelectorEnums>
        {
        public:
            FileSelectorEnumParameter()
            {
            }

            virtual ~FileSelectorEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 9;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("ExpertFeature7File", 19),
                    TableItem_t("UserData", 9),
                    TableItem_t("UserGainShading1", 17),
                    TableItem_t("UserGainShading2", 17),
                    TableItem_t("UserOffsetShading1", 19),
                    TableItem_t("UserOffsetShading2", 19),
                    TableItem_t("UserSet1", 9),
                    TableItem_t("UserSet2", 9),
                    TableItem_t("UserSet3", 9)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class FrequencyConverterInputSourceEnumParameter : public Pylon::CEnumParameterT<FrequencyConverterInputSourceEnums>
        {
        public:
            FrequencyConverterInputSourceEnumParameter()
            {
            }

            virtual ~FrequencyConverterInputSourceEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 4;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("Line1", 6),
                    TableItem_t("Line2", 6),
                    TableItem_t("Line3", 6),
                    TableItem_t("ShaftEncoderModuleOut", 22)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class FrequencyConverterSignalAlignmentEnumParameter : public Pylon::CEnumParameterT<FrequencyConverterSignalAlignmentEnums>
        {
        public:
            FrequencyConverterSignalAlignmentEnumParameter()
            {
            }

            virtual ~FrequencyConverterSignalAlignmentEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 2;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("FallingEdge", 12),
                    TableItem_t("RisingEdge", 11)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class GainAutoEnumParameter : public Pylon::CEnumParameterT<GainAutoEnums>
        {
        public:
            GainAutoEnumParameter()
            {
            }

            virtual ~GainAutoEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 3;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("Continuous", 11),
                    TableItem_t("Off", 4),
                    TableItem_t("Once", 5)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class GainSelectorEnumParameter : public Pylon::CEnumParameterT<GainSelectorEnums>
        {
        public:
            GainSelectorEnumParameter()
            {
            }

            virtual ~GainSelectorEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 3;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("All", 4),
                    TableItem_t("AnalogAll", 10),
                    TableItem_t("DigitalAll", 11)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class GammaSelectorEnumParameter : public Pylon::CEnumParameterT<GammaSelectorEnums>
        {
        public:
            GammaSelectorEnumParameter()
            {
            }

            virtual ~GammaSelectorEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 2;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("User", 5),
                    TableItem_t("sRGB", 5)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class GevCCPEnumParameter : public Pylon::CEnumParameterT<GevCCPEnums>
        {
        public:
            GevCCPEnumParameter()
            {
            }

            virtual ~GevCCPEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 3;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("Control", 8),
                    TableItem_t("Exclusive", 10),
                    TableItem_t("ExclusiveControl", 17)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class GevIEEE1588StatusEnumParameter : public Pylon::CEnumParameterT<GevIEEE1588StatusEnums>
        {
        public:
            GevIEEE1588StatusEnumParameter()
            {
            }

            virtual ~GevIEEE1588StatusEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 1;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("Todo", 5)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class GevIEEE1588StatusLatchedEnumParameter : public Pylon::CEnumParameterT<GevIEEE1588StatusLatchedEnums>
        {
        public:
            GevIEEE1588StatusLatchedEnumParameter()
            {
            }

            virtual ~GevIEEE1588StatusLatchedEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 1;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("Todo", 5)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class GevInterfaceSelectorEnumParameter : public Pylon::CEnumParameterT<GevInterfaceSelectorEnums>
        {
        public:
            GevInterfaceSelectorEnumParameter()
            {
            }

            virtual ~GevInterfaceSelectorEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 1;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("NetworkInterface0", 18)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class GevStreamChannelSelectorEnumParameter : public Pylon::CEnumParameterT<GevStreamChannelSelectorEnums>
        {
        public:
            GevStreamChannelSelectorEnumParameter()
            {
            }

            virtual ~GevStreamChannelSelectorEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 1;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("StreamChannel0", 15)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class LUTSelectorEnumParameter : public Pylon::CEnumParameterT<LUTSelectorEnums>
        {
        public:
            LUTSelectorEnumParameter()
            {
            }

            virtual ~LUTSelectorEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 1;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("Luminance", 10)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class LastErrorEnumParameter : public Pylon::CEnumParameterT<LastErrorEnums>
        {
        public:
            LastErrorEnumParameter()
            {
            }

            virtual ~LastErrorEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 7;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("InsufficientTriggerWidth", 25),
                    TableItem_t("InvalidParameter", 17),
                    TableItem_t("NoError", 8),
                    TableItem_t("OverTemperature", 16),
                    TableItem_t("Overtrigger", 12),
                    TableItem_t("PowerFailure", 13),
                    TableItem_t("Userset", 8)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class LineFormatEnumParameter : public Pylon::CEnumParameterT<LineFormatEnums>
        {
        public:
            LineFormatEnumParameter()
            {
            }

            virtual ~LineFormatEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 6;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("LVDS", 5),
                    TableItem_t("NoConnect", 10),
                    TableItem_t("OptoCoupled", 12),
                    TableItem_t("RS422", 6),
                    TableItem_t("TTL", 4),
                    TableItem_t("TriState", 9)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class LineLogicEnumParameter : public Pylon::CEnumParameterT<LineLogicEnums>
        {
        public:
            LineLogicEnumParameter()
            {
            }

            virtual ~LineLogicEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 2;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("Negative", 9),
                    TableItem_t("Positive", 9)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class LineModeEnumParameter : public Pylon::CEnumParameterT<LineModeEnums>
        {
        public:
            LineModeEnumParameter()
            {
            }

            virtual ~LineModeEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 2;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("Input", 6),
                    TableItem_t("Output", 7)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class LineSelectorEnumParameter : public Pylon::CEnumParameterT<LineSelectorEnums>
        {
        public:
            LineSelectorEnumParameter()
            {
            }

            virtual ~LineSelectorEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 5;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("Line1", 6),
                    TableItem_t("Line2", 6),
                    TableItem_t("Line3", 6),
                    TableItem_t("Out1", 5),
                    TableItem_t("Out2", 5)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class LineSourceEnumParameter : public Pylon::CEnumParameterT<LineSourceEnums>
        {
        public:
            LineSourceEnumParameter()
            {
            }

            virtual ~LineSourceEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 1;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("Todo", 5)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class ParameterSelectorEnumParameter : public Pylon::CEnumParameterT<ParameterSelectorEnums>
        {
        public:
            ParameterSelectorEnumParameter()
            {
            }

            virtual ~ParameterSelectorEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 4;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("AutoTargetValue", 16),
                    TableItem_t("ExposureOverhead", 17),
                    TableItem_t("ExposureOverlapMax", 19),
                    TableItem_t("Gain", 5)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class PixelColorFilterEnumParameter : public Pylon::CEnumParameterT<PixelColorFilterEnums>
        {
        public:
            PixelColorFilterEnumParameter()
            {
            }

            virtual ~PixelColorFilterEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 1;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("None", 5)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class PixelFormatEnumParameter : public Pylon::CEnumParameterT<PixelFormatEnums>
        {
        public:
            PixelFormatEnumParameter()
            {
            }

            virtual ~PixelFormatEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 21;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("BGR10Packed", 12),
                    TableItem_t("BGR12Packed", 12),
                    TableItem_t("BGR8Packed", 11),
                    TableItem_t("BGRA8Packed", 12),
                    TableItem_t("Mono10", 7),
                    TableItem_t("Mono12", 7),
                    TableItem_t("Mono12Packed", 13),
                    TableItem_t("Mono8", 6),
                    TableItem_t("RGB10Packed", 12),
                    TableItem_t("RGB10Planar", 12),
                    TableItem_t("RGB10V1Packed", 14),
                    TableItem_t("RGB10V2Packed", 14),
                    TableItem_t("RGB12Packed", 12),
                    TableItem_t("RGB12Planar", 12),
                    TableItem_t("RGB12V1Packed", 14),
                    TableItem_t("RGB16Planar", 12),
                    TableItem_t("RGB8Packed", 11),
                    TableItem_t("RGB8Planar", 11),
                    TableItem_t("RGBA8Packed", 12),
                    TableItem_t("YUV422Packed", 13),
                    TableItem_t("YUV422_YUYV_Packed", 19)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class PixelSizeEnumParameter : public Pylon::CEnumParameterT<PixelSizeEnums>
        {
        public:
            PixelSizeEnumParameter()
            {
            }

            virtual ~PixelSizeEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 3;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("Bpp12", 6),
                    TableItem_t("Bpp16", 6),
                    TableItem_t("Bpp8", 5)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class ShadingSelectorEnumParameter : public Pylon::CEnumParameterT<ShadingSelectorEnums>
        {
        public:
            ShadingSelectorEnumParameter()
            {
            }

            virtual ~ShadingSelectorEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 2;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("GainShading", 12),
                    TableItem_t("OffsetShading", 14)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class ShadingSetCreateEnumParameter : public Pylon::CEnumParameterT<ShadingSetCreateEnums>
        {
        public:
            ShadingSetCreateEnumParameter()
            {
            }

            virtual ~ShadingSetCreateEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 2;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("Off", 4),
                    TableItem_t("Once", 5)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class ShadingSetDefaultSelectorEnumParameter : public Pylon::CEnumParameterT<ShadingSetDefaultSelectorEnums>
        {
        public:
            ShadingSetDefaultSelectorEnumParameter()
            {
            }

            virtual ~ShadingSetDefaultSelectorEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 3;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("DefaultShadingSet", 18),
                    TableItem_t("UserShadingSet1", 16),
                    TableItem_t("UserShadingSet2", 16)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class ShadingSetSelectorEnumParameter : public Pylon::CEnumParameterT<ShadingSetSelectorEnums>
        {
        public:
            ShadingSetSelectorEnumParameter()
            {
            }

            virtual ~ShadingSetSelectorEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 3;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("DefaultShadingSet", 18),
                    TableItem_t("UserShadingSet1", 16),
                    TableItem_t("UserShadingSet2", 16)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class ShadingStatusEnumParameter : public Pylon::CEnumParameterT<ShadingStatusEnums>
        {
        public:
            ShadingStatusEnumParameter()
            {
            }

            virtual ~ShadingStatusEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 4;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("ActivateError", 14),
                    TableItem_t("CreateError", 12),
                    TableItem_t("NoError", 8),
                    TableItem_t("StartupSetError", 16)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class ShaftEncoderModuleCounterModeEnumParameter : public Pylon::CEnumParameterT<ShaftEncoderModuleCounterModeEnums>
        {
        public:
            ShaftEncoderModuleCounterModeEnumParameter()
            {
            }

            virtual ~ShaftEncoderModuleCounterModeEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 2;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("FollowDirection", 16),
                    TableItem_t("IgnoreDirection", 16)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class ShaftEncoderModuleLineSelectorEnumParameter : public Pylon::CEnumParameterT<ShaftEncoderModuleLineSelectorEnums>
        {
        public:
            ShaftEncoderModuleLineSelectorEnumParameter()
            {
            }

            virtual ~ShaftEncoderModuleLineSelectorEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 2;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("PhaseA", 7),
                    TableItem_t("PhaseB", 7)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class ShaftEncoderModuleLineSourceEnumParameter : public Pylon::CEnumParameterT<ShaftEncoderModuleLineSourceEnums>
        {
        public:
            ShaftEncoderModuleLineSourceEnumParameter()
            {
            }

            virtual ~ShaftEncoderModuleLineSourceEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 3;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("Line1", 6),
                    TableItem_t("Line2", 6),
                    TableItem_t("Line3", 6)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class ShaftEncoderModuleModeEnumParameter : public Pylon::CEnumParameterT<ShaftEncoderModuleModeEnums>
        {
        public:
            ShaftEncoderModuleModeEnumParameter()
            {
            }

            virtual ~ShaftEncoderModuleModeEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 2;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("AnyDirection", 13),
                    TableItem_t("ForwardOnly", 12)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class TemperatureSelectorEnumParameter : public Pylon::CEnumParameterT<TemperatureSelectorEnums>
        {
        public:
            TemperatureSelectorEnumParameter()
            {
            }

            virtual ~TemperatureSelectorEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 1;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("Sensorboard", 12)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class TemperatureStateEnumParameter : public Pylon::CEnumParameterT<TemperatureStateEnums>
        {
        public:
            TemperatureStateEnumParameter()
            {
            }

            virtual ~TemperatureStateEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 3;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("Critical", 9),
                    TableItem_t("Error", 6),
                    TableItem_t("Ok", 3)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class TestImageSelectorEnumParameter : public Pylon::CEnumParameterT<TestImageSelectorEnums>
        {
        public:
            TestImageSelectorEnumParameter()
            {
            }

            virtual ~TestImageSelectorEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 6;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("Off", 4),
                    TableItem_t("Testimage1", 11),
                    TableItem_t("Testimage2", 11),
                    TableItem_t("Testimage3", 11),
                    TableItem_t("Testimage4", 11),
                    TableItem_t("Testimage5", 11)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class TriggerActivationEnumParameter : public Pylon::CEnumParameterT<TriggerActivationEnums>
        {
        public:
            TriggerActivationEnumParameter()
            {
            }

            virtual ~TriggerActivationEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 4;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("FallingEdge", 12),
                    TableItem_t("LevelHigh", 10),
                    TableItem_t("LevelLow", 9),
                    TableItem_t("RisingEdge", 11)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class TriggerDelaySourceEnumParameter : public Pylon::CEnumParameterT<TriggerDelaySourceEnums>
        {
        public:
            TriggerDelaySourceEnumParameter()
            {
            }

            virtual ~TriggerDelaySourceEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 2;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("LineTrigger", 12),
                    TableItem_t("Time_us", 8)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class TriggerModeEnumParameter : public Pylon::CEnumParameterT<TriggerModeEnums>
        {
        public:
            TriggerModeEnumParameter()
            {
            }

            virtual ~TriggerModeEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 2;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("Off", 4),
                    TableItem_t("On", 3)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class TriggerSelectorEnumParameter : public Pylon::CEnumParameterT<TriggerSelectorEnums>
        {
        public:
            TriggerSelectorEnumParameter()
            {
            }

            virtual ~TriggerSelectorEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 3;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("AcquisitionStart", 17),
                    TableItem_t("FrameStart", 11),
                    TableItem_t("LineStart", 10)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class TriggerSourceEnumParameter : public Pylon::CEnumParameterT<TriggerSourceEnums>
        {
        public:
            TriggerSourceEnumParameter()
            {
            }

            virtual ~TriggerSourceEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 7;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("Action1", 8),
                    TableItem_t("FrequencyConverter", 19),
                    TableItem_t("Line1", 6),
                    TableItem_t("Line2", 6),
                    TableItem_t("Line3", 6),
                    TableItem_t("ShaftEncoderModuleOut", 22),
                    TableItem_t("Software", 9)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class UserDefinedValueSelectorEnumParameter : public Pylon::CEnumParameterT<UserDefinedValueSelectorEnums>
        {
        public:
            UserDefinedValueSelectorEnumParameter()
            {
            }

            virtual ~UserDefinedValueSelectorEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 5;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("Value1", 7),
                    TableItem_t("Value2", 7),
                    TableItem_t("Value3", 7),
                    TableItem_t("Value4", 7),
                    TableItem_t("Value5", 7)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class UserOutputSelectorEnumParameter : public Pylon::CEnumParameterT<UserOutputSelectorEnums>
        {
        public:
            UserOutputSelectorEnumParameter()
            {
            }

            virtual ~UserOutputSelectorEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 2;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("UserOutput1", 12),
                    TableItem_t("UserOutput2", 12)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class UserSetDefaultSelectorEnumParameter : public Pylon::CEnumParameterT<UserSetDefaultSelectorEnums>
        {
        public:
            UserSetDefaultSelectorEnumParameter()
            {
            }

            virtual ~UserSetDefaultSelectorEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 4;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("Default", 8),
                    TableItem_t("UserSet1", 9),
                    TableItem_t("UserSet2", 9),
                    TableItem_t("UserSet3", 9)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


        ///////////////////////////////////////////////////////////////////////////
        //
        class UserSetSelectorEnumParameter : public Pylon::CEnumParameterT<UserSetSelectorEnums>
        {
        public:
            UserSetSelectorEnumParameter()
            {
            }

            virtual ~UserSetSelectorEnumParameter()
            {
            }
        protected:
            virtual const Table_t& GetTable() const
            {
                static const size_t cItemCount = 4;
                static const TableItem_t cItems[cItemCount] =
                {
                    TableItem_t("Default", 8),
                    TableItem_t("UserSet1", 9),
                    TableItem_t("UserSet2", 9),
                    TableItem_t("UserSet3", 9)
                };
                static const Table_t table(cItems, cItemCount);
                return table;
            }
        };


    }

    //! \endcond
    //**************************************************************************************************
    // Parameter class BaslerCameraCameraParams implementation
    //**************************************************************************************************

    //! \cond HIDE_CLASS_METHODS
    
    ///////////////////////////////////////////////////////////////////////////
    //
    class BaslerCameraCameraParams::BaslerCameraCameraParams_Data
    {
    public:
        Pylon::CIntegerParameter AcquisitionFrameCount;
        Pylon::CFloatParameter AcquisitionFrameRateAbs;
        Pylon::CBooleanParameter AcquisitionFrameRateEnable;
        Pylon::CFloatParameter AcquisitionLineRateAbs;
        EnumParameterClasses::AcquisitionModeEnumParameter AcquisitionMode;
        Pylon::CCommandParameter AcquisitionStart;
        Pylon::CIntegerParameter AcquisitionStartEventStreamChannelIndex;
        Pylon::CIntegerParameter AcquisitionStartEventTimestamp;
        Pylon::CIntegerParameter AcquisitionStartOvertriggerEventStreamChannelIndex;
        Pylon::CIntegerParameter AcquisitionStartOvertriggerEventTimestamp;
        Pylon::CBooleanParameter AcquisitionStatus;
        EnumParameterClasses::AcquisitionStatusSelectorEnumParameter AcquisitionStatusSelector;
        Pylon::CCommandParameter AcquisitionStop;
        Pylon::CIntegerParameter AcquisitionWaitEventStreamChannelIndex;
        Pylon::CIntegerParameter AcquisitionWaitEventTimestamp;
        Pylon::CIntegerParameter ActionCommandCount;
        Pylon::CIntegerParameter ActionDeviceKey;
        Pylon::CIntegerParameter ActionGroupKey;
        Pylon::CIntegerParameter ActionGroupMask;
        Pylon::CIntegerParameter ActionSelector;
        Pylon::CFloatParameter AutoExposureTimeAbsLowerLimit;
        Pylon::CFloatParameter AutoExposureTimeAbsUpperLimit;
        Pylon::CIntegerParameter AutoFunctionAOIHeight;
        Pylon::CIntegerParameter AutoFunctionAOIOffsetX;
        Pylon::CIntegerParameter AutoFunctionAOIOffsetY;
        EnumParameterClasses::AutoFunctionAOISelectorEnumParameter AutoFunctionAOISelector;
        Pylon::CBooleanParameter AutoFunctionAOIUsageIntensity;
        Pylon::CBooleanParameter AutoFunctionAOIUsageRedLightCorrection;
        Pylon::CBooleanParameter AutoFunctionAOIUsageWhiteBalance;
        Pylon::CIntegerParameter AutoFunctionAOIWidth;
        EnumParameterClasses::AutoFunctionProfileEnumParameter AutoFunctionProfile;
        Pylon::CIntegerParameter AutoGainRawLowerLimit;
        Pylon::CIntegerParameter AutoGainRawUpperLimit;
        Pylon::CIntegerParameter AutoTargetValue;
        Pylon::CFloatParameter BalanceWhiteAdjustmentDampingAbs;
        Pylon::CIntegerParameter BalanceWhiteAdjustmentDampingRaw;
        Pylon::CIntegerParameter BinningHorizontal;
        EnumParameterClasses::BinningModeHorizontalEnumParameter BinningModeHorizontal;
        EnumParameterClasses::BinningModeVerticalEnumParameter BinningModeVertical;
        Pylon::CIntegerParameter BinningVertical;
        Pylon::CIntegerParameter BlackLevelRaw;
        EnumParameterClasses::BlackLevelSelectorEnumParameter BlackLevelSelector;
        Pylon::CBooleanParameter CenterX;
        Pylon::CBooleanParameter CenterY;
        Pylon::CBooleanParameter ChunkEnable;
        Pylon::CBooleanParameter ChunkModeActive;
        EnumParameterClasses::ChunkSelectorEnumParameter ChunkSelector;
        Pylon::CCommandParameter ClearLastError;
        EnumParameterClasses::CounterEventSourceEnumParameter CounterEventSource;
        Pylon::CCommandParameter CounterReset;
        EnumParameterClasses::CounterResetSourceEnumParameter CounterResetSource;
        EnumParameterClasses::CounterSelectorEnumParameter CounterSelector;
        Pylon::CBooleanParameter CriticalTemperature;
        Pylon::CIntegerParameter CriticalTemperatureEventStreamChannelIndex;
        Pylon::CIntegerParameter CriticalTemperatureEventTimestamp;
        Pylon::CIntegerParameter DecimationHorizontal;
        Pylon::CIntegerParameter DecimationVertical;
        Pylon::CStringParameter DeviceFirmwareVersion;
        Pylon::CStringParameter DeviceID;
        Pylon::CStringParameter DeviceManufacturerInfo;
        Pylon::CStringParameter DeviceModelName;
        Pylon::CCommandParameter DeviceRegistersStreamingEnd;
        Pylon::CCommandParameter DeviceRegistersStreamingStart;
        Pylon::CCommandParameter DeviceReset;
        EnumParameterClasses::DeviceScanTypeEnumParameter DeviceScanType;
        Pylon::CStringParameter DeviceUserID;
        Pylon::CStringParameter DeviceVendorName;
        Pylon::CStringParameter DeviceVersion;
        EnumParameterClasses::EventNotificationEnumParameter EventNotification;
        Pylon::CIntegerParameter EventOverrunEventFrameID;
        Pylon::CIntegerParameter EventOverrunEventStreamChannelIndex;
        Pylon::CIntegerParameter EventOverrunEventTimestamp;
        EnumParameterClasses::EventSelectorEnumParameter EventSelector;
        Pylon::CIntegerParameter ExpertFeatureAccessKey;
        EnumParameterClasses::ExpertFeatureAccessSelectorEnumParameter ExpertFeatureAccessSelector;
        Pylon::CBooleanParameter ExpertFeatureEnable;
        EnumParameterClasses::ExposureAutoEnumParameter ExposureAuto;
        Pylon::CIntegerParameter ExposureEndEventFrameID;
        Pylon::CIntegerParameter ExposureEndEventStreamChannelIndex;
        Pylon::CIntegerParameter ExposureEndEventTimestamp;
        EnumParameterClasses::ExposureModeEnumParameter ExposureMode;
        Pylon::CFloatParameter ExposureOverlapTimeMaxAbs;
        Pylon::CIntegerParameter ExposureOverlapTimeMaxRaw;
        Pylon::CFloatParameter ExposureTimeAbs;
        Pylon::CIntegerParameter ExposureTimeRaw;
        Pylon::CArrayParameter FileAccessBuffer;
        Pylon::CIntegerParameter FileAccessLength;
        Pylon::CIntegerParameter FileAccessOffset;
        EnumParameterClasses::FileOpenModeEnumParameter FileOpenMode;
        Pylon::CCommandParameter FileOperationExecute;
        Pylon::CIntegerParameter FileOperationResult;
        EnumParameterClasses::FileOperationSelectorEnumParameter FileOperationSelector;
        EnumParameterClasses::FileOperationStatusEnumParameter FileOperationStatus;
        EnumParameterClasses::FileSelectorEnumParameter FileSelector;
        Pylon::CIntegerParameter FileSize;
        Pylon::CIntegerParameter FrameStartEventStreamChannelIndex;
        Pylon::CIntegerParameter FrameStartEventTimestamp;
        Pylon::CIntegerParameter FrameStartOvertriggerEventStreamChannelIndex;
        Pylon::CIntegerParameter FrameStartOvertriggerEventTimestamp;
        Pylon::CFloatParameter FrameTimeoutAbs;
        Pylon::CBooleanParameter FrameTimeoutEnable;
        Pylon::CIntegerParameter FrameTimeoutEventStreamChannelIndex;
        Pylon::CIntegerParameter FrameTimeoutEventTimestamp;
        Pylon::CIntegerParameter FrameWaitEventStreamChannelIndex;
        Pylon::CIntegerParameter FrameWaitEventTimestamp;
        EnumParameterClasses::FrequencyConverterInputSourceEnumParameter FrequencyConverterInputSource;
        Pylon::CIntegerParameter FrequencyConverterMultiplier;
        Pylon::CIntegerParameter FrequencyConverterPostDivider;
        Pylon::CIntegerParameter FrequencyConverterPreDivider;
        Pylon::CBooleanParameter FrequencyConverterPreventOvertrigger;
        EnumParameterClasses::FrequencyConverterSignalAlignmentEnumParameter FrequencyConverterSignalAlignment;
        EnumParameterClasses::GainAutoEnumParameter GainAuto;
        Pylon::CIntegerParameter GainRaw;
        EnumParameterClasses::GainSelectorEnumParameter GainSelector;
        Pylon::CFloatParameter Gamma;
        Pylon::CBooleanParameter GammaEnable;
        EnumParameterClasses::GammaSelectorEnumParameter GammaSelector;
        EnumParameterClasses::GevCCPEnumParameter GevCCP;
        Pylon::CIntegerParameter GevCurrentDefaultGateway;
        Pylon::CIntegerParameter GevCurrentIPAddress;
        Pylon::CIntegerParameter GevCurrentIPConfiguration;
        Pylon::CIntegerParameter GevCurrentSubnetMask;
        Pylon::CIntegerParameter GevDeviceModeCharacterSet;
        Pylon::CBooleanParameter GevDeviceModeIsBigEndian;
        Pylon::CStringParameter GevFirstURL;
        Pylon::CIntegerParameter GevHeartbeatTimeout;
        Pylon::CBooleanParameter GevIEEE1588;
        Pylon::CIntegerParameter GevIEEE1588ClockId;
        Pylon::CCommandParameter GevIEEE1588DataSetLatch;
        Pylon::CIntegerParameter GevIEEE1588OffsetFromMaster;
        Pylon::CIntegerParameter GevIEEE1588ParentClockId;
        EnumParameterClasses::GevIEEE1588StatusEnumParameter GevIEEE1588Status;
        EnumParameterClasses::GevIEEE1588StatusLatchedEnumParameter GevIEEE1588StatusLatched;
        EnumParameterClasses::GevInterfaceSelectorEnumParameter GevInterfaceSelector;
        Pylon::CBooleanParameter GevLinkCrossover;
        Pylon::CBooleanParameter GevLinkFullDuplex;
        Pylon::CBooleanParameter GevLinkMaster;
        Pylon::CIntegerParameter GevLinkSpeed;
        Pylon::CIntegerParameter GevMACAddress;
        Pylon::CIntegerParameter GevMessageChannelCount;
        Pylon::CIntegerParameter GevNumberOfInterfaces;
        Pylon::CIntegerParameter GevPersistentDefaultGateway;
        Pylon::CIntegerParameter GevPersistentIPAddress;
        Pylon::CIntegerParameter GevPersistentSubnetMask;
        Pylon::CIntegerParameter GevSCBWA;
        Pylon::CIntegerParameter GevSCBWR;
        Pylon::CIntegerParameter GevSCBWRA;
        Pylon::CIntegerParameter GevSCDA;
        Pylon::CIntegerParameter GevSCDCT;
        Pylon::CIntegerParameter GevSCDMT;
        Pylon::CIntegerParameter GevSCFJM;
        Pylon::CIntegerParameter GevSCFTD;
        Pylon::CIntegerParameter GevSCPD;
        Pylon::CIntegerParameter GevSCPHostPort;
        Pylon::CIntegerParameter GevSCPInterfaceIndex;
        Pylon::CBooleanParameter GevSCPSBigEndian;
        Pylon::CBooleanParameter GevSCPSDoNotFragment;
        Pylon::CIntegerParameter GevSCPSPacketSize;
        Pylon::CStringParameter GevSecondURL;
        Pylon::CIntegerParameter GevStreamChannelCount;
        EnumParameterClasses::GevStreamChannelSelectorEnumParameter GevStreamChannelSelector;
        Pylon::CBooleanParameter GevSupportedIEEE1588;
        Pylon::CBooleanParameter GevSupportedIPConfigurationDHCP;
        Pylon::CBooleanParameter GevSupportedIPConfigurationLLA;
        Pylon::CBooleanParameter GevSupportedIPConfigurationPersistentIP;
        Pylon::CBooleanParameter GevSupportedOptionalCommandsConcatenation;
        Pylon::CBooleanParameter GevSupportedOptionalCommandsEVENT;
        Pylon::CBooleanParameter GevSupportedOptionalCommandsEVENTDATA;
        Pylon::CBooleanParameter GevSupportedOptionalCommandsPACKETRESEND;
        Pylon::CBooleanParameter GevSupportedOptionalCommandsWRITEMEM;
        Pylon::CBooleanParameter GevSupportedOptionalLegacy16BitBlockID;
        Pylon::CCommandParameter GevTimestampControlLatch;
        Pylon::CCommandParameter GevTimestampControlLatchReset;
        Pylon::CCommandParameter GevTimestampControlReset;
        Pylon::CIntegerParameter GevTimestampTickFrequency;
        Pylon::CIntegerParameter GevTimestampValue;
        Pylon::CIntegerParameter GevVersionMajor;
        Pylon::CIntegerParameter GevVersionMinor;
        Pylon::CFloatParameter GrayValueAdjustmentDampingAbs;
        Pylon::CIntegerParameter GrayValueAdjustmentDampingRaw;
        Pylon::CIntegerParameter Height;
        Pylon::CIntegerParameter HeightMax;
        Pylon::CBooleanParameter LUTEnable;
        Pylon::CIntegerParameter LUTIndex;
        EnumParameterClasses::LUTSelectorEnumParameter LUTSelector;
        Pylon::CIntegerParameter LUTValue;
        Pylon::CArrayParameter LUTValueAll;
        EnumParameterClasses::LastErrorEnumParameter LastError;
        Pylon::CIntegerParameter LateActionEventStreamChannelIndex;
        Pylon::CIntegerParameter LateActionEventTimestamp;
        Pylon::CIntegerParameter Line1RisingEdgeEventStreamChannelIndex;
        Pylon::CIntegerParameter Line1RisingEdgeEventTimestamp;
        Pylon::CIntegerParameter Line2RisingEdgeEventStreamChannelIndex;
        Pylon::CIntegerParameter Line2RisingEdgeEventTimestamp;
        Pylon::CIntegerParameter Line3RisingEdgeEventStreamChannelIndex;
        Pylon::CIntegerParameter Line3RisingEdgeEventTimestamp;
        Pylon::CIntegerParameter Line4RisingEdgeEventStreamChannelIndex;
        Pylon::CIntegerParameter Line4RisingEdgeEventTimestamp;
        Pylon::CFloatParameter LineDebouncerTimeAbs;
        EnumParameterClasses::LineFormatEnumParameter LineFormat;
        Pylon::CBooleanParameter LineInverter;
        EnumParameterClasses::LineLogicEnumParameter LineLogic;
        EnumParameterClasses::LineModeEnumParameter LineMode;
        EnumParameterClasses::LineSelectorEnumParameter LineSelector;
        EnumParameterClasses::LineSourceEnumParameter LineSource;
        Pylon::CIntegerParameter LineStartOvertriggerEventStreamChannelIndex;
        Pylon::CIntegerParameter LineStartOvertriggerEventTimestamp;
        Pylon::CBooleanParameter LineStatus;
        Pylon::CIntegerParameter LineStatusAll;
        Pylon::CBooleanParameter LineTermination;
        Pylon::CFloatParameter MinOutPulseWidthAbs;
        Pylon::CIntegerParameter OffsetX;
        Pylon::CBooleanParameter OverTemperature;
        Pylon::CIntegerParameter OverTemperatureEventStreamChannelIndex;
        Pylon::CIntegerParameter OverTemperatureEventTimestamp;
        EnumParameterClasses::ParameterSelectorEnumParameter ParameterSelector;
        Pylon::CIntegerParameter PayloadSize;
        EnumParameterClasses::PixelColorFilterEnumParameter PixelColorFilter;
        Pylon::CIntegerParameter PixelDynamicRangeMax;
        Pylon::CIntegerParameter PixelDynamicRangeMin;
        EnumParameterClasses::PixelFormatEnumParameter PixelFormat;
        Pylon::CBooleanParameter PixelFormatLegacy;
        EnumParameterClasses::PixelSizeEnumParameter PixelSize;
        Pylon::CFloatParameter ReadoutTimeAbs;
        Pylon::CBooleanParameter RemoveLimits;
        Pylon::CFloatParameter ResultingFramePeriodAbs;
        Pylon::CFloatParameter ResultingFrameRateAbs;
        Pylon::CFloatParameter ResultingLinePeriodAbs;
        Pylon::CFloatParameter ResultingLineRateAbs;
        Pylon::CBooleanParameter ReverseX;
        Pylon::CBooleanParameter ReverseY;
        Pylon::CIntegerParameter SensorHeight;
        Pylon::CIntegerParameter SensorWidth;
        Pylon::CBooleanParameter ShadingEnable;
        EnumParameterClasses::ShadingSelectorEnumParameter ShadingSelector;
        Pylon::CCommandParameter ShadingSetActivate;
        EnumParameterClasses::ShadingSetCreateEnumParameter ShadingSetCreate;
        EnumParameterClasses::ShadingSetDefaultSelectorEnumParameter ShadingSetDefaultSelector;
        EnumParameterClasses::ShadingSetSelectorEnumParameter ShadingSetSelector;
        EnumParameterClasses::ShadingStatusEnumParameter ShadingStatus;
        Pylon::CIntegerParameter ShaftEncoderModuleCounter;
        Pylon::CIntegerParameter ShaftEncoderModuleCounterMax;
        EnumParameterClasses::ShaftEncoderModuleCounterModeEnumParameter ShaftEncoderModuleCounterMode;
        Pylon::CCommandParameter ShaftEncoderModuleCounterReset;
        EnumParameterClasses::ShaftEncoderModuleLineSelectorEnumParameter ShaftEncoderModuleLineSelector;
        EnumParameterClasses::ShaftEncoderModuleLineSourceEnumParameter ShaftEncoderModuleLineSource;
        EnumParameterClasses::ShaftEncoderModuleModeEnumParameter ShaftEncoderModuleMode;
        Pylon::CIntegerParameter ShaftEncoderModuleReverseCounterMax;
        Pylon::CCommandParameter ShaftEncoderModuleReverseCounterReset;
        Pylon::CIntegerParameter SpatialCorrection;
        Pylon::CIntegerParameter SubstrateVoltage;
        Pylon::CBooleanParameter SyncFreeRunTimerEnable;
        Pylon::CIntegerParameter SyncFreeRunTimerStartTimeHigh;
        Pylon::CIntegerParameter SyncFreeRunTimerStartTimeLow;
        Pylon::CFloatParameter SyncFreeRunTimerTriggerRateAbs;
        Pylon::CCommandParameter SyncFreeRunTimerUpdate;
        Pylon::CFloatParameter TemperatureAbs;
        EnumParameterClasses::TemperatureSelectorEnumParameter TemperatureSelector;
        EnumParameterClasses::TemperatureStateEnumParameter TemperatureState;
        EnumParameterClasses::TestImageSelectorEnumParameter TestImageSelector;
        EnumParameterClasses::TriggerActivationEnumParameter TriggerActivation;
        Pylon::CFloatParameter TriggerDelayAbs;
        Pylon::CIntegerParameter TriggerDelayLineTriggerCount;
        EnumParameterClasses::TriggerDelaySourceEnumParameter TriggerDelaySource;
        EnumParameterClasses::TriggerModeEnumParameter TriggerMode;
        Pylon::CBooleanParameter TriggerPartialClosingFrame;
        EnumParameterClasses::TriggerSelectorEnumParameter TriggerSelector;
        Pylon::CCommandParameter TriggerSoftware;
        EnumParameterClasses::TriggerSourceEnumParameter TriggerSource;
        Pylon::CIntegerParameter UserDefinedValue;
        EnumParameterClasses::UserDefinedValueSelectorEnumParameter UserDefinedValueSelector;
        EnumParameterClasses::UserOutputSelectorEnumParameter UserOutputSelector;
        Pylon::CBooleanParameter UserOutputValue;
        Pylon::CIntegerParameter UserOutputValueAll;
        EnumParameterClasses::UserSetDefaultSelectorEnumParameter UserSetDefaultSelector;
        Pylon::CCommandParameter UserSetLoad;
        Pylon::CCommandParameter UserSetSave;
        EnumParameterClasses::UserSetSelectorEnumParameter UserSetSelector;
        Pylon::CIntegerParameter VirtualLine1RisingEdgeEventStreamChannelIndex;
        Pylon::CIntegerParameter VirtualLine1RisingEdgeEventTimestamp;
        Pylon::CIntegerParameter VirtualLine2RisingEdgeEventStreamChannelIndex;
        Pylon::CIntegerParameter VirtualLine2RisingEdgeEventTimestamp;
        Pylon::CIntegerParameter VirtualLine3RisingEdgeEventStreamChannelIndex;
        Pylon::CIntegerParameter VirtualLine3RisingEdgeEventTimestamp;
        Pylon::CIntegerParameter VirtualLine4RisingEdgeEventStreamChannelIndex;
        Pylon::CIntegerParameter VirtualLine4RisingEdgeEventTimestamp;
        Pylon::CIntegerParameter Width;
        Pylon::CIntegerParameter WidthMax;
    };


    ///////////////////////////////////////////////////////////////////////////
    //
    inline BaslerCameraCameraParams::BaslerCameraCameraParams(void)
        : m_pData(new BaslerCameraCameraParams_Data())
        , AcquisitionFrameCount(m_pData->AcquisitionFrameCount)
        , AcquisitionFrameRateAbs(m_pData->AcquisitionFrameRateAbs)
        , AcquisitionFrameRateEnable(m_pData->AcquisitionFrameRateEnable)
        , AcquisitionLineRateAbs(m_pData->AcquisitionLineRateAbs)
        , AcquisitionMode(m_pData->AcquisitionMode)
        , AcquisitionStart(m_pData->AcquisitionStart)
        , AcquisitionStartEventStreamChannelIndex(m_pData->AcquisitionStartEventStreamChannelIndex)
        , AcquisitionStartEventTimestamp(m_pData->AcquisitionStartEventTimestamp)
        , AcquisitionStartOvertriggerEventStreamChannelIndex(m_pData->AcquisitionStartOvertriggerEventStreamChannelIndex)
        , AcquisitionStartOvertriggerEventTimestamp(m_pData->AcquisitionStartOvertriggerEventTimestamp)
        , AcquisitionStatus(m_pData->AcquisitionStatus)
        , AcquisitionStatusSelector(m_pData->AcquisitionStatusSelector)
        , AcquisitionStop(m_pData->AcquisitionStop)
        , AcquisitionWaitEventStreamChannelIndex(m_pData->AcquisitionWaitEventStreamChannelIndex)
        , AcquisitionWaitEventTimestamp(m_pData->AcquisitionWaitEventTimestamp)
        , ActionCommandCount(m_pData->ActionCommandCount)
        , ActionDeviceKey(m_pData->ActionDeviceKey)
        , ActionGroupKey(m_pData->ActionGroupKey)
        , ActionGroupMask(m_pData->ActionGroupMask)
        , ActionSelector(m_pData->ActionSelector)
        , AutoExposureTimeAbsLowerLimit(m_pData->AutoExposureTimeAbsLowerLimit)
        , AutoExposureTimeAbsUpperLimit(m_pData->AutoExposureTimeAbsUpperLimit)
        , AutoFunctionAOIHeight(m_pData->AutoFunctionAOIHeight)
        , AutoFunctionAOIOffsetX(m_pData->AutoFunctionAOIOffsetX)
        , AutoFunctionAOIOffsetY(m_pData->AutoFunctionAOIOffsetY)
        , AutoFunctionAOISelector(m_pData->AutoFunctionAOISelector)
        , AutoFunctionAOIUsageIntensity(m_pData->AutoFunctionAOIUsageIntensity)
        , AutoFunctionAOIUsageRedLightCorrection(m_pData->AutoFunctionAOIUsageRedLightCorrection)
        , AutoFunctionAOIUsageWhiteBalance(m_pData->AutoFunctionAOIUsageWhiteBalance)
        , AutoFunctionAOIWidth(m_pData->AutoFunctionAOIWidth)
        , AutoFunctionProfile(m_pData->AutoFunctionProfile)
        , AutoGainRawLowerLimit(m_pData->AutoGainRawLowerLimit)
        , AutoGainRawUpperLimit(m_pData->AutoGainRawUpperLimit)
        , AutoTargetValue(m_pData->AutoTargetValue)
        , BalanceWhiteAdjustmentDampingAbs(m_pData->BalanceWhiteAdjustmentDampingAbs)
        , BalanceWhiteAdjustmentDampingRaw(m_pData->BalanceWhiteAdjustmentDampingRaw)
        , BinningHorizontal(m_pData->BinningHorizontal)
        , BinningModeHorizontal(m_pData->BinningModeHorizontal)
        , BinningModeVertical(m_pData->BinningModeVertical)
        , BinningVertical(m_pData->BinningVertical)
        , BlackLevelRaw(m_pData->BlackLevelRaw)
        , BlackLevelSelector(m_pData->BlackLevelSelector)
        , CenterX(m_pData->CenterX)
        , CenterY(m_pData->CenterY)
        , ChunkEnable(m_pData->ChunkEnable)
        , ChunkModeActive(m_pData->ChunkModeActive)
        , ChunkSelector(m_pData->ChunkSelector)
        , ClearLastError(m_pData->ClearLastError)
        , CounterEventSource(m_pData->CounterEventSource)
        , CounterReset(m_pData->CounterReset)
        , CounterResetSource(m_pData->CounterResetSource)
        , CounterSelector(m_pData->CounterSelector)
        , CriticalTemperature(m_pData->CriticalTemperature)
        , CriticalTemperatureEventStreamChannelIndex(m_pData->CriticalTemperatureEventStreamChannelIndex)
        , CriticalTemperatureEventTimestamp(m_pData->CriticalTemperatureEventTimestamp)
        , DecimationHorizontal(m_pData->DecimationHorizontal)
        , DecimationVertical(m_pData->DecimationVertical)
        , DeviceFirmwareVersion(m_pData->DeviceFirmwareVersion)
        , DeviceID(m_pData->DeviceID)
        , DeviceManufacturerInfo(m_pData->DeviceManufacturerInfo)
        , DeviceModelName(m_pData->DeviceModelName)
        , DeviceRegistersStreamingEnd(m_pData->DeviceRegistersStreamingEnd)
        , DeviceRegistersStreamingStart(m_pData->DeviceRegistersStreamingStart)
        , DeviceReset(m_pData->DeviceReset)
        , DeviceScanType(m_pData->DeviceScanType)
        , DeviceUserID(m_pData->DeviceUserID)
        , DeviceVendorName(m_pData->DeviceVendorName)
        , DeviceVersion(m_pData->DeviceVersion)
        , EventNotification(m_pData->EventNotification)
        , EventOverrunEventFrameID(m_pData->EventOverrunEventFrameID)
        , EventOverrunEventStreamChannelIndex(m_pData->EventOverrunEventStreamChannelIndex)
        , EventOverrunEventTimestamp(m_pData->EventOverrunEventTimestamp)
        , EventSelector(m_pData->EventSelector)
        , ExpertFeatureAccessKey(m_pData->ExpertFeatureAccessKey)
        , ExpertFeatureAccessSelector(m_pData->ExpertFeatureAccessSelector)
        , ExpertFeatureEnable(m_pData->ExpertFeatureEnable)
        , ExposureAuto(m_pData->ExposureAuto)
        , ExposureEndEventFrameID(m_pData->ExposureEndEventFrameID)
        , ExposureEndEventStreamChannelIndex(m_pData->ExposureEndEventStreamChannelIndex)
        , ExposureEndEventTimestamp(m_pData->ExposureEndEventTimestamp)
        , ExposureMode(m_pData->ExposureMode)
        , ExposureOverlapTimeMaxAbs(m_pData->ExposureOverlapTimeMaxAbs)
        , ExposureOverlapTimeMaxRaw(m_pData->ExposureOverlapTimeMaxRaw)
        , ExposureTimeAbs(m_pData->ExposureTimeAbs)
        , ExposureTimeRaw(m_pData->ExposureTimeRaw)
        , FileAccessBuffer(m_pData->FileAccessBuffer)
        , FileAccessLength(m_pData->FileAccessLength)
        , FileAccessOffset(m_pData->FileAccessOffset)
        , FileOpenMode(m_pData->FileOpenMode)
        , FileOperationExecute(m_pData->FileOperationExecute)
        , FileOperationResult(m_pData->FileOperationResult)
        , FileOperationSelector(m_pData->FileOperationSelector)
        , FileOperationStatus(m_pData->FileOperationStatus)
        , FileSelector(m_pData->FileSelector)
        , FileSize(m_pData->FileSize)
        , FrameStartEventStreamChannelIndex(m_pData->FrameStartEventStreamChannelIndex)
        , FrameStartEventTimestamp(m_pData->FrameStartEventTimestamp)
        , FrameStartOvertriggerEventStreamChannelIndex(m_pData->FrameStartOvertriggerEventStreamChannelIndex)
        , FrameStartOvertriggerEventTimestamp(m_pData->FrameStartOvertriggerEventTimestamp)
        , FrameTimeoutAbs(m_pData->FrameTimeoutAbs)
        , FrameTimeoutEnable(m_pData->FrameTimeoutEnable)
        , FrameTimeoutEventStreamChannelIndex(m_pData->FrameTimeoutEventStreamChannelIndex)
        , FrameTimeoutEventTimestamp(m_pData->FrameTimeoutEventTimestamp)
        , FrameWaitEventStreamChannelIndex(m_pData->FrameWaitEventStreamChannelIndex)
        , FrameWaitEventTimestamp(m_pData->FrameWaitEventTimestamp)
        , FrequencyConverterInputSource(m_pData->FrequencyConverterInputSource)
        , FrequencyConverterMultiplier(m_pData->FrequencyConverterMultiplier)
        , FrequencyConverterPostDivider(m_pData->FrequencyConverterPostDivider)
        , FrequencyConverterPreDivider(m_pData->FrequencyConverterPreDivider)
        , FrequencyConverterPreventOvertrigger(m_pData->FrequencyConverterPreventOvertrigger)
        , FrequencyConverterSignalAlignment(m_pData->FrequencyConverterSignalAlignment)
        , GainAuto(m_pData->GainAuto)
        , GainRaw(m_pData->GainRaw)
        , GainSelector(m_pData->GainSelector)
        , Gamma(m_pData->Gamma)
        , GammaEnable(m_pData->GammaEnable)
        , GammaSelector(m_pData->GammaSelector)
        , GevCCP(m_pData->GevCCP)
        , GevCurrentDefaultGateway(m_pData->GevCurrentDefaultGateway)
        , GevCurrentIPAddress(m_pData->GevCurrentIPAddress)
        , GevCurrentIPConfiguration(m_pData->GevCurrentIPConfiguration)
        , GevCurrentSubnetMask(m_pData->GevCurrentSubnetMask)
        , GevDeviceModeCharacterSet(m_pData->GevDeviceModeCharacterSet)
        , GevDeviceModeIsBigEndian(m_pData->GevDeviceModeIsBigEndian)
        , GevFirstURL(m_pData->GevFirstURL)
        , GevHeartbeatTimeout(m_pData->GevHeartbeatTimeout)
        , GevIEEE1588(m_pData->GevIEEE1588)
        , GevIEEE1588ClockId(m_pData->GevIEEE1588ClockId)
        , GevIEEE1588DataSetLatch(m_pData->GevIEEE1588DataSetLatch)
        , GevIEEE1588OffsetFromMaster(m_pData->GevIEEE1588OffsetFromMaster)
        , GevIEEE1588ParentClockId(m_pData->GevIEEE1588ParentClockId)
        , GevIEEE1588Status(m_pData->GevIEEE1588Status)
        , GevIEEE1588StatusLatched(m_pData->GevIEEE1588StatusLatched)
        , GevInterfaceSelector(m_pData->GevInterfaceSelector)
        , GevLinkCrossover(m_pData->GevLinkCrossover)
        , GevLinkFullDuplex(m_pData->GevLinkFullDuplex)
        , GevLinkMaster(m_pData->GevLinkMaster)
        , GevLinkSpeed(m_pData->GevLinkSpeed)
        , GevMACAddress(m_pData->GevMACAddress)
        , GevMessageChannelCount(m_pData->GevMessageChannelCount)
        , GevNumberOfInterfaces(m_pData->GevNumberOfInterfaces)
        , GevPersistentDefaultGateway(m_pData->GevPersistentDefaultGateway)
        , GevPersistentIPAddress(m_pData->GevPersistentIPAddress)
        , GevPersistentSubnetMask(m_pData->GevPersistentSubnetMask)
        , GevSCBWA(m_pData->GevSCBWA)
        , GevSCBWR(m_pData->GevSCBWR)
        , GevSCBWRA(m_pData->GevSCBWRA)
        , GevSCDA(m_pData->GevSCDA)
        , GevSCDCT(m_pData->GevSCDCT)
        , GevSCDMT(m_pData->GevSCDMT)
        , GevSCFJM(m_pData->GevSCFJM)
        , GevSCFTD(m_pData->GevSCFTD)
        , GevSCPD(m_pData->GevSCPD)
        , GevSCPHostPort(m_pData->GevSCPHostPort)
        , GevSCPInterfaceIndex(m_pData->GevSCPInterfaceIndex)
        , GevSCPSBigEndian(m_pData->GevSCPSBigEndian)
        , GevSCPSDoNotFragment(m_pData->GevSCPSDoNotFragment)
        , GevSCPSPacketSize(m_pData->GevSCPSPacketSize)
        , GevSecondURL(m_pData->GevSecondURL)
        , GevStreamChannelCount(m_pData->GevStreamChannelCount)
        , GevStreamChannelSelector(m_pData->GevStreamChannelSelector)
        , GevSupportedIEEE1588(m_pData->GevSupportedIEEE1588)
        , GevSupportedIPConfigurationDHCP(m_pData->GevSupportedIPConfigurationDHCP)
        , GevSupportedIPConfigurationLLA(m_pData->GevSupportedIPConfigurationLLA)
        , GevSupportedIPConfigurationPersistentIP(m_pData->GevSupportedIPConfigurationPersistentIP)
        , GevSupportedOptionalCommandsConcatenation(m_pData->GevSupportedOptionalCommandsConcatenation)
        , GevSupportedOptionalCommandsEVENT(m_pData->GevSupportedOptionalCommandsEVENT)
        , GevSupportedOptionalCommandsEVENTDATA(m_pData->GevSupportedOptionalCommandsEVENTDATA)
        , GevSupportedOptionalCommandsPACKETRESEND(m_pData->GevSupportedOptionalCommandsPACKETRESEND)
        , GevSupportedOptionalCommandsWRITEMEM(m_pData->GevSupportedOptionalCommandsWRITEMEM)
        , GevSupportedOptionalLegacy16BitBlockID(m_pData->GevSupportedOptionalLegacy16BitBlockID)
        , GevTimestampControlLatch(m_pData->GevTimestampControlLatch)
        , GevTimestampControlLatchReset(m_pData->GevTimestampControlLatchReset)
        , GevTimestampControlReset(m_pData->GevTimestampControlReset)
        , GevTimestampTickFrequency(m_pData->GevTimestampTickFrequency)
        , GevTimestampValue(m_pData->GevTimestampValue)
        , GevVersionMajor(m_pData->GevVersionMajor)
        , GevVersionMinor(m_pData->GevVersionMinor)
        , GrayValueAdjustmentDampingAbs(m_pData->GrayValueAdjustmentDampingAbs)
        , GrayValueAdjustmentDampingRaw(m_pData->GrayValueAdjustmentDampingRaw)
        , Height(m_pData->Height)
        , HeightMax(m_pData->HeightMax)
        , LUTEnable(m_pData->LUTEnable)
        , LUTIndex(m_pData->LUTIndex)
        , LUTSelector(m_pData->LUTSelector)
        , LUTValue(m_pData->LUTValue)
        , LUTValueAll(m_pData->LUTValueAll)
        , LastError(m_pData->LastError)
        , LateActionEventStreamChannelIndex(m_pData->LateActionEventStreamChannelIndex)
        , LateActionEventTimestamp(m_pData->LateActionEventTimestamp)
        , Line1RisingEdgeEventStreamChannelIndex(m_pData->Line1RisingEdgeEventStreamChannelIndex)
        , Line1RisingEdgeEventTimestamp(m_pData->Line1RisingEdgeEventTimestamp)
        , Line2RisingEdgeEventStreamChannelIndex(m_pData->Line2RisingEdgeEventStreamChannelIndex)
        , Line2RisingEdgeEventTimestamp(m_pData->Line2RisingEdgeEventTimestamp)
        , Line3RisingEdgeEventStreamChannelIndex(m_pData->Line3RisingEdgeEventStreamChannelIndex)
        , Line3RisingEdgeEventTimestamp(m_pData->Line3RisingEdgeEventTimestamp)
        , Line4RisingEdgeEventStreamChannelIndex(m_pData->Line4RisingEdgeEventStreamChannelIndex)
        , Line4RisingEdgeEventTimestamp(m_pData->Line4RisingEdgeEventTimestamp)
        , LineDebouncerTimeAbs(m_pData->LineDebouncerTimeAbs)
        , LineFormat(m_pData->LineFormat)
        , LineInverter(m_pData->LineInverter)
        , LineLogic(m_pData->LineLogic)
        , LineMode(m_pData->LineMode)
        , LineSelector(m_pData->LineSelector)
        , LineSource(m_pData->LineSource)
        , LineStartOvertriggerEventStreamChannelIndex(m_pData->LineStartOvertriggerEventStreamChannelIndex)
        , LineStartOvertriggerEventTimestamp(m_pData->LineStartOvertriggerEventTimestamp)
        , LineStatus(m_pData->LineStatus)
        , LineStatusAll(m_pData->LineStatusAll)
        , LineTermination(m_pData->LineTermination)
        , MinOutPulseWidthAbs(m_pData->MinOutPulseWidthAbs)
        , OffsetX(m_pData->OffsetX)
        , OverTemperature(m_pData->OverTemperature)
        , OverTemperatureEventStreamChannelIndex(m_pData->OverTemperatureEventStreamChannelIndex)
        , OverTemperatureEventTimestamp(m_pData->OverTemperatureEventTimestamp)
        , ParameterSelector(m_pData->ParameterSelector)
        , PayloadSize(m_pData->PayloadSize)
        , PixelColorFilter(m_pData->PixelColorFilter)
        , PixelDynamicRangeMax(m_pData->PixelDynamicRangeMax)
        , PixelDynamicRangeMin(m_pData->PixelDynamicRangeMin)
        , PixelFormat(m_pData->PixelFormat)
        , PixelFormatLegacy(m_pData->PixelFormatLegacy)
        , PixelSize(m_pData->PixelSize)
        , ReadoutTimeAbs(m_pData->ReadoutTimeAbs)
        , RemoveLimits(m_pData->RemoveLimits)
        , ResultingFramePeriodAbs(m_pData->ResultingFramePeriodAbs)
        , ResultingFrameRateAbs(m_pData->ResultingFrameRateAbs)
        , ResultingLinePeriodAbs(m_pData->ResultingLinePeriodAbs)
        , ResultingLineRateAbs(m_pData->ResultingLineRateAbs)
        , ReverseX(m_pData->ReverseX)
        , ReverseY(m_pData->ReverseY)
        , SensorHeight(m_pData->SensorHeight)
        , SensorWidth(m_pData->SensorWidth)
        , ShadingEnable(m_pData->ShadingEnable)
        , ShadingSelector(m_pData->ShadingSelector)
        , ShadingSetActivate(m_pData->ShadingSetActivate)
        , ShadingSetCreate(m_pData->ShadingSetCreate)
        , ShadingSetDefaultSelector(m_pData->ShadingSetDefaultSelector)
        , ShadingSetSelector(m_pData->ShadingSetSelector)
        , ShadingStatus(m_pData->ShadingStatus)
        , ShaftEncoderModuleCounter(m_pData->ShaftEncoderModuleCounter)
        , ShaftEncoderModuleCounterMax(m_pData->ShaftEncoderModuleCounterMax)
        , ShaftEncoderModuleCounterMode(m_pData->ShaftEncoderModuleCounterMode)
        , ShaftEncoderModuleCounterReset(m_pData->ShaftEncoderModuleCounterReset)
        , ShaftEncoderModuleLineSelector(m_pData->ShaftEncoderModuleLineSelector)
        , ShaftEncoderModuleLineSource(m_pData->ShaftEncoderModuleLineSource)
        , ShaftEncoderModuleMode(m_pData->ShaftEncoderModuleMode)
        , ShaftEncoderModuleReverseCounterMax(m_pData->ShaftEncoderModuleReverseCounterMax)
        , ShaftEncoderModuleReverseCounterReset(m_pData->ShaftEncoderModuleReverseCounterReset)
        , SpatialCorrection(m_pData->SpatialCorrection)
        , SubstrateVoltage(m_pData->SubstrateVoltage)
        , SyncFreeRunTimerEnable(m_pData->SyncFreeRunTimerEnable)
        , SyncFreeRunTimerStartTimeHigh(m_pData->SyncFreeRunTimerStartTimeHigh)
        , SyncFreeRunTimerStartTimeLow(m_pData->SyncFreeRunTimerStartTimeLow)
        , SyncFreeRunTimerTriggerRateAbs(m_pData->SyncFreeRunTimerTriggerRateAbs)
        , SyncFreeRunTimerUpdate(m_pData->SyncFreeRunTimerUpdate)
        , TemperatureAbs(m_pData->TemperatureAbs)
        , TemperatureSelector(m_pData->TemperatureSelector)
        , TemperatureState(m_pData->TemperatureState)
        , TestImageSelector(m_pData->TestImageSelector)
        , TriggerActivation(m_pData->TriggerActivation)
        , TriggerDelayAbs(m_pData->TriggerDelayAbs)
        , TriggerDelayLineTriggerCount(m_pData->TriggerDelayLineTriggerCount)
        , TriggerDelaySource(m_pData->TriggerDelaySource)
        , TriggerMode(m_pData->TriggerMode)
        , TriggerPartialClosingFrame(m_pData->TriggerPartialClosingFrame)
        , TriggerSelector(m_pData->TriggerSelector)
        , TriggerSoftware(m_pData->TriggerSoftware)
        , TriggerSource(m_pData->TriggerSource)
        , UserDefinedValue(m_pData->UserDefinedValue)
        , UserDefinedValueSelector(m_pData->UserDefinedValueSelector)
        , UserOutputSelector(m_pData->UserOutputSelector)
        , UserOutputValue(m_pData->UserOutputValue)
        , UserOutputValueAll(m_pData->UserOutputValueAll)
        , UserSetDefaultSelector(m_pData->UserSetDefaultSelector)
        , UserSetLoad(m_pData->UserSetLoad)
        , UserSetSave(m_pData->UserSetSave)
        , UserSetSelector(m_pData->UserSetSelector)
        , VirtualLine1RisingEdgeEventStreamChannelIndex(m_pData->VirtualLine1RisingEdgeEventStreamChannelIndex)
        , VirtualLine1RisingEdgeEventTimestamp(m_pData->VirtualLine1RisingEdgeEventTimestamp)
        , VirtualLine2RisingEdgeEventStreamChannelIndex(m_pData->VirtualLine2RisingEdgeEventStreamChannelIndex)
        , VirtualLine2RisingEdgeEventTimestamp(m_pData->VirtualLine2RisingEdgeEventTimestamp)
        , VirtualLine3RisingEdgeEventStreamChannelIndex(m_pData->VirtualLine3RisingEdgeEventStreamChannelIndex)
        , VirtualLine3RisingEdgeEventTimestamp(m_pData->VirtualLine3RisingEdgeEventTimestamp)
        , VirtualLine4RisingEdgeEventStreamChannelIndex(m_pData->VirtualLine4RisingEdgeEventStreamChannelIndex)
        , VirtualLine4RisingEdgeEventTimestamp(m_pData->VirtualLine4RisingEdgeEventTimestamp)
        , Width(m_pData->Width)
        , WidthMax(m_pData->WidthMax)
    {
    }


    ///////////////////////////////////////////////////////////////////////////
    //
    inline BaslerCameraCameraParams::~BaslerCameraCameraParams(void)
    {
        delete m_pData;
    }


    ///////////////////////////////////////////////////////////////////////////
    //
    inline void BaslerCameraCameraParams::_Initialize(GENAPI_NAMESPACE::INodeMap* pNodeMap)
    {
        m_pData->AcquisitionFrameCount.Attach(pNodeMap, "AcquisitionFrameCount");
        m_pData->AcquisitionFrameRateAbs.Attach(pNodeMap, "AcquisitionFrameRateAbs");
        m_pData->AcquisitionFrameRateEnable.Attach(pNodeMap, "AcquisitionFrameRateEnable");
        m_pData->AcquisitionLineRateAbs.Attach(pNodeMap, "AcquisitionLineRateAbs");
        m_pData->AcquisitionMode.Attach(pNodeMap, "AcquisitionMode");
        m_pData->AcquisitionStart.Attach(pNodeMap, "AcquisitionStart");
        m_pData->AcquisitionStartEventStreamChannelIndex.Attach(pNodeMap, "AcquisitionStartEventStreamChannelIndex");
        m_pData->AcquisitionStartEventTimestamp.Attach(pNodeMap, "AcquisitionStartEventTimestamp");
        m_pData->AcquisitionStartOvertriggerEventStreamChannelIndex.Attach(pNodeMap, "AcquisitionStartOvertriggerEventStreamChannelIndex");
        m_pData->AcquisitionStartOvertriggerEventTimestamp.Attach(pNodeMap, "AcquisitionStartOvertriggerEventTimestamp");
        m_pData->AcquisitionStatus.Attach(pNodeMap, "AcquisitionStatus");
        m_pData->AcquisitionStatusSelector.Attach(pNodeMap, "AcquisitionStatusSelector");
        m_pData->AcquisitionStop.Attach(pNodeMap, "AcquisitionStop");
        m_pData->AcquisitionWaitEventStreamChannelIndex.Attach(pNodeMap, "AcquisitionWaitEventStreamChannelIndex");
        m_pData->AcquisitionWaitEventTimestamp.Attach(pNodeMap, "AcquisitionWaitEventTimestamp");
        m_pData->ActionCommandCount.Attach(pNodeMap, "ActionCommandCount");
        m_pData->ActionDeviceKey.Attach(pNodeMap, "ActionDeviceKey");
        m_pData->ActionGroupKey.Attach(pNodeMap, "ActionGroupKey");
        m_pData->ActionGroupMask.Attach(pNodeMap, "ActionGroupMask");
        m_pData->ActionSelector.Attach(pNodeMap, "ActionSelector");
        m_pData->AutoExposureTimeAbsLowerLimit.Attach(pNodeMap, "AutoExposureTimeAbsLowerLimit");
        m_pData->AutoExposureTimeAbsUpperLimit.Attach(pNodeMap, "AutoExposureTimeAbsUpperLimit");
        m_pData->AutoFunctionAOIHeight.Attach(pNodeMap, "AutoFunctionAOIHeight");
        m_pData->AutoFunctionAOIOffsetX.Attach(pNodeMap, "AutoFunctionAOIOffsetX");
        m_pData->AutoFunctionAOIOffsetY.Attach(pNodeMap, "AutoFunctionAOIOffsetY");
        m_pData->AutoFunctionAOISelector.Attach(pNodeMap, "AutoFunctionAOISelector");
        m_pData->AutoFunctionAOIUsageIntensity.Attach(pNodeMap, "AutoFunctionAOIUsageIntensity");
        m_pData->AutoFunctionAOIUsageRedLightCorrection.Attach(pNodeMap, "AutoFunctionAOIUsageRedLightCorrection");
        m_pData->AutoFunctionAOIUsageWhiteBalance.Attach(pNodeMap, "AutoFunctionAOIUsageWhiteBalance");
        m_pData->AutoFunctionAOIWidth.Attach(pNodeMap, "AutoFunctionAOIWidth");
        m_pData->AutoFunctionProfile.Attach(pNodeMap, "AutoFunctionProfile");
        m_pData->AutoGainRawLowerLimit.Attach(pNodeMap, "AutoGainRawLowerLimit");
        m_pData->AutoGainRawUpperLimit.Attach(pNodeMap, "AutoGainRawUpperLimit");
        m_pData->AutoTargetValue.Attach(pNodeMap, "AutoTargetValue");
        m_pData->BalanceWhiteAdjustmentDampingAbs.Attach(pNodeMap, "BalanceWhiteAdjustmentDampingAbs");
        m_pData->BalanceWhiteAdjustmentDampingRaw.Attach(pNodeMap, "BalanceWhiteAdjustmentDampingRaw");
        m_pData->BinningHorizontal.Attach(pNodeMap, "BinningHorizontal");
        m_pData->BinningModeHorizontal.Attach(pNodeMap, "BinningModeHorizontal");
        m_pData->BinningModeVertical.Attach(pNodeMap, "BinningModeVertical");
        m_pData->BinningVertical.Attach(pNodeMap, "BinningVertical");
        m_pData->BlackLevelRaw.Attach(pNodeMap, "BlackLevelRaw");
        m_pData->BlackLevelSelector.Attach(pNodeMap, "BlackLevelSelector");
        m_pData->CenterX.Attach(pNodeMap, "CenterX");
        m_pData->CenterY.Attach(pNodeMap, "CenterY");
        m_pData->ChunkEnable.Attach(pNodeMap, "ChunkEnable");
        m_pData->ChunkModeActive.Attach(pNodeMap, "ChunkModeActive");
        m_pData->ChunkSelector.Attach(pNodeMap, "ChunkSelector");
        m_pData->ClearLastError.Attach(pNodeMap, "ClearLastError");
        m_pData->CounterEventSource.Attach(pNodeMap, "CounterEventSource");
        m_pData->CounterReset.Attach(pNodeMap, "CounterReset");
        m_pData->CounterResetSource.Attach(pNodeMap, "CounterResetSource");
        m_pData->CounterSelector.Attach(pNodeMap, "CounterSelector");
        m_pData->CriticalTemperature.Attach(pNodeMap, "CriticalTemperature");
        m_pData->CriticalTemperatureEventStreamChannelIndex.Attach(pNodeMap, "CriticalTemperatureEventStreamChannelIndex");
        m_pData->CriticalTemperatureEventTimestamp.Attach(pNodeMap, "CriticalTemperatureEventTimestamp");
        m_pData->DecimationHorizontal.Attach(pNodeMap, "DecimationHorizontal");
        m_pData->DecimationVertical.Attach(pNodeMap, "DecimationVertical");
        m_pData->DeviceFirmwareVersion.Attach(pNodeMap, "DeviceFirmwareVersion");
        m_pData->DeviceID.Attach(pNodeMap, "DeviceID");
        m_pData->DeviceManufacturerInfo.Attach(pNodeMap, "DeviceManufacturerInfo");
        m_pData->DeviceModelName.Attach(pNodeMap, "DeviceModelName");
        m_pData->DeviceRegistersStreamingEnd.Attach(pNodeMap, "DeviceRegistersStreamingEnd");
        m_pData->DeviceRegistersStreamingStart.Attach(pNodeMap, "DeviceRegistersStreamingStart");
        m_pData->DeviceReset.Attach(pNodeMap, "DeviceReset");
        m_pData->DeviceScanType.Attach(pNodeMap, "DeviceScanType");
        m_pData->DeviceUserID.Attach(pNodeMap, "DeviceUserID");
        m_pData->DeviceVendorName.Attach(pNodeMap, "DeviceVendorName");
        m_pData->DeviceVersion.Attach(pNodeMap, "DeviceVersion");
        m_pData->EventNotification.Attach(pNodeMap, "EventNotification");
        m_pData->EventOverrunEventFrameID.Attach(pNodeMap, "EventOverrunEventFrameID");
        m_pData->EventOverrunEventStreamChannelIndex.Attach(pNodeMap, "EventOverrunEventStreamChannelIndex");
        m_pData->EventOverrunEventTimestamp.Attach(pNodeMap, "EventOverrunEventTimestamp");
        m_pData->EventSelector.Attach(pNodeMap, "EventSelector");
        m_pData->ExpertFeatureAccessKey.Attach(pNodeMap, "ExpertFeatureAccessKey");
        m_pData->ExpertFeatureAccessSelector.Attach(pNodeMap, "ExpertFeatureAccessSelector");
        m_pData->ExpertFeatureEnable.Attach(pNodeMap, "ExpertFeatureEnable");
        m_pData->ExposureAuto.Attach(pNodeMap, "ExposureAuto");
        m_pData->ExposureEndEventFrameID.Attach(pNodeMap, "ExposureEndEventFrameID");
        m_pData->ExposureEndEventStreamChannelIndex.Attach(pNodeMap, "ExposureEndEventStreamChannelIndex");
        m_pData->ExposureEndEventTimestamp.Attach(pNodeMap, "ExposureEndEventTimestamp");
        m_pData->ExposureMode.Attach(pNodeMap, "ExposureMode");
        m_pData->ExposureOverlapTimeMaxAbs.Attach(pNodeMap, "ExposureOverlapTimeMaxAbs");
        m_pData->ExposureOverlapTimeMaxRaw.Attach(pNodeMap, "ExposureOverlapTimeMaxRaw");
        m_pData->ExposureTimeAbs.Attach(pNodeMap, "ExposureTimeAbs");
        m_pData->ExposureTimeRaw.Attach(pNodeMap, "ExposureTimeRaw");
        m_pData->FileAccessBuffer.Attach(pNodeMap, "FileAccessBuffer");
        m_pData->FileAccessLength.Attach(pNodeMap, "FileAccessLength");
        m_pData->FileAccessOffset.Attach(pNodeMap, "FileAccessOffset");
        m_pData->FileOpenMode.Attach(pNodeMap, "FileOpenMode");
        m_pData->FileOperationExecute.Attach(pNodeMap, "FileOperationExecute");
        m_pData->FileOperationResult.Attach(pNodeMap, "FileOperationResult");
        m_pData->FileOperationSelector.Attach(pNodeMap, "FileOperationSelector");
        m_pData->FileOperationStatus.Attach(pNodeMap, "FileOperationStatus");
        m_pData->FileSelector.Attach(pNodeMap, "FileSelector");
        m_pData->FileSize.Attach(pNodeMap, "FileSize");
        m_pData->FrameStartEventStreamChannelIndex.Attach(pNodeMap, "FrameStartEventStreamChannelIndex");
        m_pData->FrameStartEventTimestamp.Attach(pNodeMap, "FrameStartEventTimestamp");
        m_pData->FrameStartOvertriggerEventStreamChannelIndex.Attach(pNodeMap, "FrameStartOvertriggerEventStreamChannelIndex");
        m_pData->FrameStartOvertriggerEventTimestamp.Attach(pNodeMap, "FrameStartOvertriggerEventTimestamp");
        m_pData->FrameTimeoutAbs.Attach(pNodeMap, "FrameTimeoutAbs");
        m_pData->FrameTimeoutEnable.Attach(pNodeMap, "FrameTimeoutEnable");
        m_pData->FrameTimeoutEventStreamChannelIndex.Attach(pNodeMap, "FrameTimeoutEventStreamChannelIndex");
        m_pData->FrameTimeoutEventTimestamp.Attach(pNodeMap, "FrameTimeoutEventTimestamp");
        m_pData->FrameWaitEventStreamChannelIndex.Attach(pNodeMap, "FrameWaitEventStreamChannelIndex");
        m_pData->FrameWaitEventTimestamp.Attach(pNodeMap, "FrameWaitEventTimestamp");
        m_pData->FrequencyConverterInputSource.Attach(pNodeMap, "FrequencyConverterInputSource");
        m_pData->FrequencyConverterMultiplier.Attach(pNodeMap, "FrequencyConverterMultiplier");
        m_pData->FrequencyConverterPostDivider.Attach(pNodeMap, "FrequencyConverterPostDivider");
        m_pData->FrequencyConverterPreDivider.Attach(pNodeMap, "FrequencyConverterPreDivider");
        m_pData->FrequencyConverterPreventOvertrigger.Attach(pNodeMap, "FrequencyConverterPreventOvertrigger");
        m_pData->FrequencyConverterSignalAlignment.Attach(pNodeMap, "FrequencyConverterSignalAlignment");
        m_pData->GainAuto.Attach(pNodeMap, "GainAuto");
        m_pData->GainRaw.Attach(pNodeMap, "GainRaw");
        m_pData->GainSelector.Attach(pNodeMap, "GainSelector");
        m_pData->Gamma.Attach(pNodeMap, "Gamma");
        m_pData->GammaEnable.Attach(pNodeMap, "GammaEnable");
        m_pData->GammaSelector.Attach(pNodeMap, "GammaSelector");
        m_pData->GevCCP.Attach(pNodeMap, "GevCCP");
        m_pData->GevCurrentDefaultGateway.Attach(pNodeMap, "GevCurrentDefaultGateway");
        m_pData->GevCurrentIPAddress.Attach(pNodeMap, "GevCurrentIPAddress");
        m_pData->GevCurrentIPConfiguration.Attach(pNodeMap, "GevCurrentIPConfiguration");
        m_pData->GevCurrentSubnetMask.Attach(pNodeMap, "GevCurrentSubnetMask");
        m_pData->GevDeviceModeCharacterSet.Attach(pNodeMap, "GevDeviceModeCharacterSet");
        m_pData->GevDeviceModeIsBigEndian.Attach(pNodeMap, "GevDeviceModeIsBigEndian");
        m_pData->GevFirstURL.Attach(pNodeMap, "GevFirstURL");
        m_pData->GevHeartbeatTimeout.Attach(pNodeMap, "GevHeartbeatTimeout");
        m_pData->GevIEEE1588.Attach(pNodeMap, "GevIEEE1588");
        m_pData->GevIEEE1588ClockId.Attach(pNodeMap, "GevIEEE1588ClockId");
        m_pData->GevIEEE1588DataSetLatch.Attach(pNodeMap, "GevIEEE1588DataSetLatch");
        m_pData->GevIEEE1588OffsetFromMaster.Attach(pNodeMap, "GevIEEE1588OffsetFromMaster");
        m_pData->GevIEEE1588ParentClockId.Attach(pNodeMap, "GevIEEE1588ParentClockId");
        m_pData->GevIEEE1588Status.Attach(pNodeMap, "GevIEEE1588Status");
        m_pData->GevIEEE1588StatusLatched.Attach(pNodeMap, "GevIEEE1588StatusLatched");
        m_pData->GevInterfaceSelector.Attach(pNodeMap, "GevInterfaceSelector");
        m_pData->GevLinkCrossover.Attach(pNodeMap, "GevLinkCrossover");
        m_pData->GevLinkFullDuplex.Attach(pNodeMap, "GevLinkFullDuplex");
        m_pData->GevLinkMaster.Attach(pNodeMap, "GevLinkMaster");
        m_pData->GevLinkSpeed.Attach(pNodeMap, "GevLinkSpeed");
        m_pData->GevMACAddress.Attach(pNodeMap, "GevMACAddress");
        m_pData->GevMessageChannelCount.Attach(pNodeMap, "GevMessageChannelCount");
        m_pData->GevNumberOfInterfaces.Attach(pNodeMap, "GevNumberOfInterfaces");
        m_pData->GevPersistentDefaultGateway.Attach(pNodeMap, "GevPersistentDefaultGateway");
        m_pData->GevPersistentIPAddress.Attach(pNodeMap, "GevPersistentIPAddress");
        m_pData->GevPersistentSubnetMask.Attach(pNodeMap, "GevPersistentSubnetMask");
        m_pData->GevSCBWA.Attach(pNodeMap, "GevSCBWA");
        m_pData->GevSCBWR.Attach(pNodeMap, "GevSCBWR");
        m_pData->GevSCBWRA.Attach(pNodeMap, "GevSCBWRA");
        m_pData->GevSCDA.Attach(pNodeMap, "GevSCDA");
        m_pData->GevSCDCT.Attach(pNodeMap, "GevSCDCT");
        m_pData->GevSCDMT.Attach(pNodeMap, "GevSCDMT");
        m_pData->GevSCFJM.Attach(pNodeMap, "GevSCFJM");
        m_pData->GevSCFTD.Attach(pNodeMap, "GevSCFTD");
        m_pData->GevSCPD.Attach(pNodeMap, "GevSCPD");
        m_pData->GevSCPHostPort.Attach(pNodeMap, "GevSCPHostPort");
        m_pData->GevSCPInterfaceIndex.Attach(pNodeMap, "GevSCPInterfaceIndex");
        m_pData->GevSCPSBigEndian.Attach(pNodeMap, "GevSCPSBigEndian");
        m_pData->GevSCPSDoNotFragment.Attach(pNodeMap, "GevSCPSDoNotFragment");
        m_pData->GevSCPSPacketSize.Attach(pNodeMap, "GevSCPSPacketSize");
        m_pData->GevSecondURL.Attach(pNodeMap, "GevSecondURL");
        m_pData->GevStreamChannelCount.Attach(pNodeMap, "GevStreamChannelCount");
        m_pData->GevStreamChannelSelector.Attach(pNodeMap, "GevStreamChannelSelector");
        m_pData->GevSupportedIEEE1588.Attach(pNodeMap, "GevSupportedIEEE1588");
        m_pData->GevSupportedIPConfigurationDHCP.Attach(pNodeMap, "GevSupportedIPConfigurationDHCP");
        m_pData->GevSupportedIPConfigurationLLA.Attach(pNodeMap, "GevSupportedIPConfigurationLLA");
        m_pData->GevSupportedIPConfigurationPersistentIP.Attach(pNodeMap, "GevSupportedIPConfigurationPersistentIP");
        m_pData->GevSupportedOptionalCommandsConcatenation.Attach(pNodeMap, "GevSupportedOptionalCommandsConcatenation");
        m_pData->GevSupportedOptionalCommandsEVENT.Attach(pNodeMap, "GevSupportedOptionalCommandsEVENT");
        m_pData->GevSupportedOptionalCommandsEVENTDATA.Attach(pNodeMap, "GevSupportedOptionalCommandsEVENTDATA");
        m_pData->GevSupportedOptionalCommandsPACKETRESEND.Attach(pNodeMap, "GevSupportedOptionalCommandsPACKETRESEND");
        m_pData->GevSupportedOptionalCommandsWRITEMEM.Attach(pNodeMap, "GevSupportedOptionalCommandsWRITEMEM");
        m_pData->GevSupportedOptionalLegacy16BitBlockID.Attach(pNodeMap, "GevSupportedOptionalLegacy16BitBlockID");
        m_pData->GevTimestampControlLatch.Attach(pNodeMap, "GevTimestampControlLatch");
        m_pData->GevTimestampControlLatchReset.Attach(pNodeMap, "GevTimestampControlLatchReset");
        m_pData->GevTimestampControlReset.Attach(pNodeMap, "GevTimestampControlReset");
        m_pData->GevTimestampTickFrequency.Attach(pNodeMap, "GevTimestampTickFrequency");
        m_pData->GevTimestampValue.Attach(pNodeMap, "GevTimestampValue");
        m_pData->GevVersionMajor.Attach(pNodeMap, "GevVersionMajor");
        m_pData->GevVersionMinor.Attach(pNodeMap, "GevVersionMinor");
        m_pData->GrayValueAdjustmentDampingAbs.Attach(pNodeMap, "GrayValueAdjustmentDampingAbs");
        m_pData->GrayValueAdjustmentDampingRaw.Attach(pNodeMap, "GrayValueAdjustmentDampingRaw");
        m_pData->Height.Attach(pNodeMap, "Height");
        m_pData->HeightMax.Attach(pNodeMap, "HeightMax");
        m_pData->LUTEnable.Attach(pNodeMap, "LUTEnable");
        m_pData->LUTIndex.Attach(pNodeMap, "LUTIndex");
        m_pData->LUTSelector.Attach(pNodeMap, "LUTSelector");
        m_pData->LUTValue.Attach(pNodeMap, "LUTValue");
        m_pData->LUTValueAll.Attach(pNodeMap, "LUTValueAll");
        m_pData->LastError.Attach(pNodeMap, "LastError");
        m_pData->LateActionEventStreamChannelIndex.Attach(pNodeMap, "LateActionEventStreamChannelIndex");
        m_pData->LateActionEventTimestamp.Attach(pNodeMap, "LateActionEventTimestamp");
        m_pData->Line1RisingEdgeEventStreamChannelIndex.Attach(pNodeMap, "Line1RisingEdgeEventStreamChannelIndex");
        m_pData->Line1RisingEdgeEventTimestamp.Attach(pNodeMap, "Line1RisingEdgeEventTimestamp");
        m_pData->Line2RisingEdgeEventStreamChannelIndex.Attach(pNodeMap, "Line2RisingEdgeEventStreamChannelIndex");
        m_pData->Line2RisingEdgeEventTimestamp.Attach(pNodeMap, "Line2RisingEdgeEventTimestamp");
        m_pData->Line3RisingEdgeEventStreamChannelIndex.Attach(pNodeMap, "Line3RisingEdgeEventStreamChannelIndex");
        m_pData->Line3RisingEdgeEventTimestamp.Attach(pNodeMap, "Line3RisingEdgeEventTimestamp");
        m_pData->Line4RisingEdgeEventStreamChannelIndex.Attach(pNodeMap, "Line4RisingEdgeEventStreamChannelIndex");
        m_pData->Line4RisingEdgeEventTimestamp.Attach(pNodeMap, "Line4RisingEdgeEventTimestamp");
        m_pData->LineDebouncerTimeAbs.Attach(pNodeMap, "LineDebouncerTimeAbs");
        m_pData->LineFormat.Attach(pNodeMap, "LineFormat");
        m_pData->LineInverter.Attach(pNodeMap, "LineInverter");
        m_pData->LineLogic.Attach(pNodeMap, "LineLogic");
        m_pData->LineMode.Attach(pNodeMap, "LineMode");
        m_pData->LineSelector.Attach(pNodeMap, "LineSelector");
        m_pData->LineSource.Attach(pNodeMap, "LineSource");
        m_pData->LineStartOvertriggerEventStreamChannelIndex.Attach(pNodeMap, "LineStartOvertriggerEventStreamChannelIndex");
        m_pData->LineStartOvertriggerEventTimestamp.Attach(pNodeMap, "LineStartOvertriggerEventTimestamp");
        m_pData->LineStatus.Attach(pNodeMap, "LineStatus");
        m_pData->LineStatusAll.Attach(pNodeMap, "LineStatusAll");
        m_pData->LineTermination.Attach(pNodeMap, "LineTermination");
        m_pData->MinOutPulseWidthAbs.Attach(pNodeMap, "MinOutPulseWidthAbs");
        m_pData->OffsetX.Attach(pNodeMap, "OffsetX");
        m_pData->OverTemperature.Attach(pNodeMap, "OverTemperature");
        m_pData->OverTemperatureEventStreamChannelIndex.Attach(pNodeMap, "OverTemperatureEventStreamChannelIndex");
        m_pData->OverTemperatureEventTimestamp.Attach(pNodeMap, "OverTemperatureEventTimestamp");
        m_pData->ParameterSelector.Attach(pNodeMap, "ParameterSelector");
        m_pData->PayloadSize.Attach(pNodeMap, "PayloadSize");
        m_pData->PixelColorFilter.Attach(pNodeMap, "PixelColorFilter");
        m_pData->PixelDynamicRangeMax.Attach(pNodeMap, "PixelDynamicRangeMax");
        m_pData->PixelDynamicRangeMin.Attach(pNodeMap, "PixelDynamicRangeMin");
        m_pData->PixelFormat.Attach(pNodeMap, "PixelFormat");
        m_pData->PixelFormatLegacy.Attach(pNodeMap, "PixelFormatLegacy");
        m_pData->PixelSize.Attach(pNodeMap, "PixelSize");
        m_pData->ReadoutTimeAbs.Attach(pNodeMap, "ReadoutTimeAbs");
        m_pData->RemoveLimits.Attach(pNodeMap, "RemoveLimits");
        m_pData->ResultingFramePeriodAbs.Attach(pNodeMap, "ResultingFramePeriodAbs");
        m_pData->ResultingFrameRateAbs.Attach(pNodeMap, "ResultingFrameRateAbs");
        m_pData->ResultingLinePeriodAbs.Attach(pNodeMap, "ResultingLinePeriodAbs");
        m_pData->ResultingLineRateAbs.Attach(pNodeMap, "ResultingLineRateAbs");
        m_pData->ReverseX.Attach(pNodeMap, "ReverseX");
        m_pData->ReverseY.Attach(pNodeMap, "ReverseY");
        m_pData->SensorHeight.Attach(pNodeMap, "SensorHeight");
        m_pData->SensorWidth.Attach(pNodeMap, "SensorWidth");
        m_pData->ShadingEnable.Attach(pNodeMap, "ShadingEnable");
        m_pData->ShadingSelector.Attach(pNodeMap, "ShadingSelector");
        m_pData->ShadingSetActivate.Attach(pNodeMap, "ShadingSetActivate");
        m_pData->ShadingSetCreate.Attach(pNodeMap, "ShadingSetCreate");
        m_pData->ShadingSetDefaultSelector.Attach(pNodeMap, "ShadingSetDefaultSelector");
        m_pData->ShadingSetSelector.Attach(pNodeMap, "ShadingSetSelector");
        m_pData->ShadingStatus.Attach(pNodeMap, "ShadingStatus");
        m_pData->ShaftEncoderModuleCounter.Attach(pNodeMap, "ShaftEncoderModuleCounter");
        m_pData->ShaftEncoderModuleCounterMax.Attach(pNodeMap, "ShaftEncoderModuleCounterMax");
        m_pData->ShaftEncoderModuleCounterMode.Attach(pNodeMap, "ShaftEncoderModuleCounterMode");
        m_pData->ShaftEncoderModuleCounterReset.Attach(pNodeMap, "ShaftEncoderModuleCounterReset");
        m_pData->ShaftEncoderModuleLineSelector.Attach(pNodeMap, "ShaftEncoderModuleLineSelector");
        m_pData->ShaftEncoderModuleLineSource.Attach(pNodeMap, "ShaftEncoderModuleLineSource");
        m_pData->ShaftEncoderModuleMode.Attach(pNodeMap, "ShaftEncoderModuleMode");
        m_pData->ShaftEncoderModuleReverseCounterMax.Attach(pNodeMap, "ShaftEncoderModuleReverseCounterMax");
        m_pData->ShaftEncoderModuleReverseCounterReset.Attach(pNodeMap, "ShaftEncoderModuleReverseCounterReset");
        m_pData->SpatialCorrection.Attach(pNodeMap, "SpatialCorrection");
        m_pData->SubstrateVoltage.Attach(pNodeMap, "SubstrateVoltage");
        m_pData->SyncFreeRunTimerEnable.Attach(pNodeMap, "SyncFreeRunTimerEnable");
        m_pData->SyncFreeRunTimerStartTimeHigh.Attach(pNodeMap, "SyncFreeRunTimerStartTimeHigh");
        m_pData->SyncFreeRunTimerStartTimeLow.Attach(pNodeMap, "SyncFreeRunTimerStartTimeLow");
        m_pData->SyncFreeRunTimerTriggerRateAbs.Attach(pNodeMap, "SyncFreeRunTimerTriggerRateAbs");
        m_pData->SyncFreeRunTimerUpdate.Attach(pNodeMap, "SyncFreeRunTimerUpdate");
        m_pData->TemperatureAbs.Attach(pNodeMap, "TemperatureAbs");
        m_pData->TemperatureSelector.Attach(pNodeMap, "TemperatureSelector");
        m_pData->TemperatureState.Attach(pNodeMap, "TemperatureState");
        m_pData->TestImageSelector.Attach(pNodeMap, "TestImageSelector");
        m_pData->TriggerActivation.Attach(pNodeMap, "TriggerActivation");
        m_pData->TriggerDelayAbs.Attach(pNodeMap, "TriggerDelayAbs");
        m_pData->TriggerDelayLineTriggerCount.Attach(pNodeMap, "TriggerDelayLineTriggerCount");
        m_pData->TriggerDelaySource.Attach(pNodeMap, "TriggerDelaySource");
        m_pData->TriggerMode.Attach(pNodeMap, "TriggerMode");
        m_pData->TriggerPartialClosingFrame.Attach(pNodeMap, "TriggerPartialClosingFrame");
        m_pData->TriggerSelector.Attach(pNodeMap, "TriggerSelector");
        m_pData->TriggerSoftware.Attach(pNodeMap, "TriggerSoftware");
        m_pData->TriggerSource.Attach(pNodeMap, "TriggerSource");
        m_pData->UserDefinedValue.Attach(pNodeMap, "UserDefinedValue");
        m_pData->UserDefinedValueSelector.Attach(pNodeMap, "UserDefinedValueSelector");
        m_pData->UserOutputSelector.Attach(pNodeMap, "UserOutputSelector");
        m_pData->UserOutputValue.Attach(pNodeMap, "UserOutputValue");
        m_pData->UserOutputValueAll.Attach(pNodeMap, "UserOutputValueAll");
        m_pData->UserSetDefaultSelector.Attach(pNodeMap, "UserSetDefaultSelector");
        m_pData->UserSetLoad.Attach(pNodeMap, "UserSetLoad");
        m_pData->UserSetSave.Attach(pNodeMap, "UserSetSave");
        m_pData->UserSetSelector.Attach(pNodeMap, "UserSetSelector");
        m_pData->VirtualLine1RisingEdgeEventStreamChannelIndex.Attach(pNodeMap, "VirtualLine1RisingEdgeEventStreamChannelIndex");
        m_pData->VirtualLine1RisingEdgeEventTimestamp.Attach(pNodeMap, "VirtualLine1RisingEdgeEventTimestamp");
        m_pData->VirtualLine2RisingEdgeEventStreamChannelIndex.Attach(pNodeMap, "VirtualLine2RisingEdgeEventStreamChannelIndex");
        m_pData->VirtualLine2RisingEdgeEventTimestamp.Attach(pNodeMap, "VirtualLine2RisingEdgeEventTimestamp");
        m_pData->VirtualLine3RisingEdgeEventStreamChannelIndex.Attach(pNodeMap, "VirtualLine3RisingEdgeEventStreamChannelIndex");
        m_pData->VirtualLine3RisingEdgeEventTimestamp.Attach(pNodeMap, "VirtualLine3RisingEdgeEventTimestamp");
        m_pData->VirtualLine4RisingEdgeEventStreamChannelIndex.Attach(pNodeMap, "VirtualLine4RisingEdgeEventStreamChannelIndex");
        m_pData->VirtualLine4RisingEdgeEventTimestamp.Attach(pNodeMap, "VirtualLine4RisingEdgeEventTimestamp");
        m_pData->Width.Attach(pNodeMap, "Width");
        m_pData->WidthMax.Attach(pNodeMap, "WidthMax");
    }

    //! \endcond

} // namespace Pylon
} // namespace BaslerCameraCameraParams_Params

#ifdef _MSC_VER
#pragma warning( pop )
#endif

#endif // BASLER_PYLON_BASLERCAMERACAMERAPARAMS_H