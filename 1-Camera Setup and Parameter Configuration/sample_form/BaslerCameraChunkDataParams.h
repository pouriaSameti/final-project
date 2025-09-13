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

#ifndef BASLER_PYLON_BASLERCAMERACHUNKDATAPARAMS_H
#define BASLER_PYLON_BASLERCAMERACHUNKDATAPARAMS_H

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
namespace BaslerCameraChunkDataParams_Params
{
    //**************************************************************************************************
    // Enumerations
    //**************************************************************************************************
    //! Valid values for ChunkPixelFormat
    enum ChunkPixelFormatEnums
    {
        ChunkPixelFormat_Todo  //!< TODO - Applies to: raL4096-24gm
    };


    
    
    //**************************************************************************************************
    // Parameter class BaslerCameraChunkDataParams
    //**************************************************************************************************
    

    /*!
    \brief A parameter class containing all parameters as members that are available for raL4096-24gm

    Sources:
    raL4096-24gm 105994-15;U;raL4096_24gm;V1.1-2;0
    */
    class BaslerCameraChunkDataParams
    {
    //----------------------------------------------------------------------------------------------------------------
    // Implementation
    //----------------------------------------------------------------------------------------------------------------
    protected:
        // If you want to show the following methods in the help file
        // add the string HIDE_CLASS_METHODS to the ENABLED_SECTIONS tag in the doxygen file
        //! \cond HIDE_CLASS_METHODS
        
            //! Constructor
            BaslerCameraChunkDataParams(void);

            //! Destructor
            ~BaslerCameraChunkDataParams(void);

            //! Initializes the references
            void _Initialize(GENAPI_NAMESPACE::INodeMap*);

    //! \endcond

    private:
        class BaslerCameraChunkDataParams_Data;
        BaslerCameraChunkDataParams_Data* m_pData;


    //----------------------------------------------------------------------------------------------------------------
    // References to features
    //----------------------------------------------------------------------------------------------------------------
    public:
    //! \name Categories: ChunkData
    //@{
    /*!
        \brief Indicates the maximum possible pixel value in the acquired image - Applies to: raL4096-24gm

        This value indicates indicates the maximum possible pixel value acquired in the image
    
        Visibility: Beginner

    */
    Pylon::IIntegerEx& ChunkDynamicRangeMax;

    //@}


    //! \name Categories: ChunkData
    //@{
    /*!
        \brief Indicates the minimum possible pixel value in the acquired image - Applies to: raL4096-24gm

        This value indicates the minimum possible pixel value in the acquired image.
    
        Visibility: Beginner

    */
    Pylon::IIntegerEx& ChunkDynamicRangeMin;

    //@}


    //! \name Categories: ChunkData
    //@{
    /*!
        \brief  Applies to: raL4096-24gm

    
        Visibility: Beginner

    */
    Pylon::IFloatEx& ChunkExposureTime;

    //@}


    //! \name Categories: ChunkData
    //@{
    /*!
        \brief  Applies to: raL4096-24gm

    
        Visibility: Beginner

    */
    Pylon::IIntegerEx& ChunkFrameTriggerCounter;

    //@}


    //! \name Categories: ChunkData
    //@{
    /*!
        \brief  Applies to: raL4096-24gm

    
        Visibility: Beginner

    */
    Pylon::IIntegerEx& ChunkFrameTriggerIgnoredCounter;

    //@}


    //! \name Categories: ChunkData
    //@{
    /*!
        \brief Indicates the value of the frame counter when the image was acquired - Applies to: raL4096-24gm

        This integer indicates the value of the frame counter when the image was acquired.
    
        Visibility: Beginner

    */
    Pylon::IIntegerEx& ChunkFramecounter;

    //@}


    //! \name Categories: ChunkData
    //@{
    /*!
        \brief  Applies to: raL4096-24gm

    
        Visibility: Beginner

    */
    Pylon::IIntegerEx& ChunkFramesPerTriggerCounter;

    //@}


    //! \name Categories: ChunkData
    //@{
    /*!
        \brief  Applies to: raL4096-24gm

    
        Visibility: Beginner

    */
    Pylon::IIntegerEx& ChunkGainAll;

    //@}


    //! \name Categories: ChunkData
    //@{
    /*!
        \brief Indicates the height of the area of interest represented in the acquired image - Applies to: raL4096-24gm

        This value Indicates the height of the area of interest represented in the acquired image.
    
        Visibility: Beginner

    */
    Pylon::IIntegerEx& ChunkHeight;

    //@}


    //! \name Categories: ChunkData
    //@{
    /*!
        \brief Number of bits per status - Applies to: raL4096-24gm

    
        Visibility: Beginner

    */
    Pylon::IIntegerEx& ChunkInputStatusAtLineTriggerBitsPerLine;

    //@}


    //! \name Categories: ChunkData
    //@{
    /*!
        \brief Used to select a certain status - Applies to: raL4096-24gm

    
        Visibility: Beginner

    */
    Pylon::IIntegerEx& ChunkInputStatusAtLineTriggerIndex;

    //@}


    //! \name Categories: ChunkData
    //@{
    /*!
        \brief Value of the status selected by 'Index' - Applies to: raL4096-24gm

    
        Visibility: Beginner

    */
    Pylon::IIntegerEx& ChunkInputStatusAtLineTriggerValue;

    //@}


    //! \name Categories: ChunkData
    //@{
    /*!
        \brief A bit field that indicates the status of all of the camera's input and output lines when the image was acquired - Applies to: raL4096-24gm

        This value is a bit field that indicates the status of all of the camera's input and output lines when the image was acquired.
    
        Visibility: Beginner

    */
    Pylon::IIntegerEx& ChunkLineStatusAll;

    //@}


    //! \name Categories: ChunkData
    //@{
    /*!
        \brief  Applies to: raL4096-24gm

    
        Visibility: Beginner

    */
    Pylon::IIntegerEx& ChunkLineTriggerCounter;

    //@}


    //! \name Categories: ChunkData
    //@{
    /*!
        \brief  Applies to: raL4096-24gm

    
        Visibility: Beginner

    */
    Pylon::IIntegerEx& ChunkLineTriggerEndToEndCounter;

    //@}


    //! \name Categories: ChunkData
    //@{
    /*!
        \brief  Applies to: raL4096-24gm

    
        Visibility: Beginner

    */
    Pylon::IIntegerEx& ChunkLineTriggerIgnoredCounter;

    //@}


    //! \name Categories: ChunkData
    //@{
    /*!
        \brief Indicates the X offset of the area of interest represented in the acquired image - Applies to: raL4096-24gm

        This value Indicates the X offset of the area of interest represented in the acquired image.
    
        Visibility: Beginner

    */
    Pylon::IIntegerEx& ChunkOffsetX;

    //@}


    //! \name Categories: ChunkData
    //@{
    /*!
        \brief Indicates the Y offset of the area of interest represented in the acquired image - Applies to: raL4096-24gm

        This value Indicates the Y offset of the area of interest represented in the acquired image.
    
        Visibility: Beginner

    */
    Pylon::IIntegerEx& ChunkOffsetY;

    //@}


    //! \name Categories: ChunkData
    //@{
    /*!
        \brief Indicates the value of CRC checksum - Applies to: raL4096-24gm

        This integer indicates the value of CRC checksum.
    
        Visibility: Beginner

    */
    Pylon::IIntegerEx& ChunkPayloadCRC16;

    //@}


    //! \name Categories: ChunkData
    //@{
    /*!
        \brief Indicates the format of the pixel data in the acquired image - Applies to: raL4096-24gm

        This enumeration lists the pixel formats that can be indicated by the pixel format chunk.
    
        Visibility: Beginner

    */
    Pylon::IEnumParameterT<ChunkPixelFormatEnums>& ChunkPixelFormat;

    //@}


    //! \name Categories: ChunkData
    //@{
    /*!
        \brief Shaft encoder counter at frame trigger - Applies to: raL4096-24gm

    
        Visibility: Beginner

    */
    Pylon::IIntegerEx& ChunkShaftEncoderCounter;

    //@}


    //! \name Categories: ChunkData
    //@{
    /*!
        \brief Indicates the number of bytes of data between the beginning of one line in the acquired image and the beginning of the next line in the acquired image - Applies to: raL4096-24gm

        This value indicates the number of bytes of data between the beginning of one line in the acquired image and the beginning of the next line in the acquired image.
    
        Visibility: Beginner

    */
    Pylon::IIntegerEx& ChunkStride;

    //@}


    //! \name Categories: ChunkData
    //@{
    /*!
        \brief Indicates the value of the timestamp when the image was acquired - Applies to: raL4096-24gm

        This integer indicates the value of the timestamp when the image was acquired.
    
        Visibility: Beginner

    */
    Pylon::IIntegerEx& ChunkTimestamp;

    //@}


    //! \name Categories: ChunkData
    //@{
    /*!
        \brief Indicates the value of the trigger input counter when the image was acquired - Applies to: raL4096-24gm

        This integer indicates the value of the trigger input counter when the image was acquired.
    
        Visibility: Beginner

    */
    Pylon::IIntegerEx& ChunkTriggerinputcounter;

    //@}


    //! \name Categories: ChunkData
    //@{
    /*!
        \brief A bit field that indicates the status of all of the camera's virtual input and output lines when the image was acquired - Applies to: raL4096-24gm

        This value is a bit field that indicates the status of all of the camera's virtual input and output lines when the image was acquired.
    
        Visibility: Beginner

    */
    Pylon::IIntegerEx& ChunkVirtLineStatusAll;

    //@}


    //! \name Categories: ChunkData
    //@{
    /*!
        \brief Indicates the widtth of the area of interest represented in the acquired image - Applies to: raL4096-24gm

        This value Indicates the width of the area of interest represented in the acquired image.
    
        Visibility: Beginner

    */
    Pylon::IIntegerEx& ChunkWidth;

    //@}


        private:
        //! \cond HIDE_CLASS_METHODS

            //! not implemented copy constructor
            BaslerCameraChunkDataParams(BaslerCameraChunkDataParams&);

            //! not implemented assignment operator
            BaslerCameraChunkDataParams& operator=(BaslerCameraChunkDataParams&);

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
        class ChunkPixelFormatEnumParameter : public Pylon::CEnumParameterT<ChunkPixelFormatEnums>
        {
        public:
            ChunkPixelFormatEnumParameter()
            {
            }

            virtual ~ChunkPixelFormatEnumParameter()
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


    }

    //! \endcond
    //**************************************************************************************************
    // Parameter class BaslerCameraChunkDataParams implementation
    //**************************************************************************************************

    //! \cond HIDE_CLASS_METHODS
    
    ///////////////////////////////////////////////////////////////////////////
    //
    class BaslerCameraChunkDataParams::BaslerCameraChunkDataParams_Data
    {
    public:
        Pylon::CIntegerParameter ChunkDynamicRangeMax;
        Pylon::CIntegerParameter ChunkDynamicRangeMin;
        Pylon::CFloatParameter ChunkExposureTime;
        Pylon::CIntegerParameter ChunkFrameTriggerCounter;
        Pylon::CIntegerParameter ChunkFrameTriggerIgnoredCounter;
        Pylon::CIntegerParameter ChunkFramecounter;
        Pylon::CIntegerParameter ChunkFramesPerTriggerCounter;
        Pylon::CIntegerParameter ChunkGainAll;
        Pylon::CIntegerParameter ChunkHeight;
        Pylon::CIntegerParameter ChunkInputStatusAtLineTriggerBitsPerLine;
        Pylon::CIntegerParameter ChunkInputStatusAtLineTriggerIndex;
        Pylon::CIntegerParameter ChunkInputStatusAtLineTriggerValue;
        Pylon::CIntegerParameter ChunkLineStatusAll;
        Pylon::CIntegerParameter ChunkLineTriggerCounter;
        Pylon::CIntegerParameter ChunkLineTriggerEndToEndCounter;
        Pylon::CIntegerParameter ChunkLineTriggerIgnoredCounter;
        Pylon::CIntegerParameter ChunkOffsetX;
        Pylon::CIntegerParameter ChunkOffsetY;
        Pylon::CIntegerParameter ChunkPayloadCRC16;
        EnumParameterClasses::ChunkPixelFormatEnumParameter ChunkPixelFormat;
        Pylon::CIntegerParameter ChunkShaftEncoderCounter;
        Pylon::CIntegerParameter ChunkStride;
        Pylon::CIntegerParameter ChunkTimestamp;
        Pylon::CIntegerParameter ChunkTriggerinputcounter;
        Pylon::CIntegerParameter ChunkVirtLineStatusAll;
        Pylon::CIntegerParameter ChunkWidth;
    };


    ///////////////////////////////////////////////////////////////////////////
    //
    inline BaslerCameraChunkDataParams::BaslerCameraChunkDataParams(void)
        : m_pData(new BaslerCameraChunkDataParams_Data())
        , ChunkDynamicRangeMax(m_pData->ChunkDynamicRangeMax)
        , ChunkDynamicRangeMin(m_pData->ChunkDynamicRangeMin)
        , ChunkExposureTime(m_pData->ChunkExposureTime)
        , ChunkFrameTriggerCounter(m_pData->ChunkFrameTriggerCounter)
        , ChunkFrameTriggerIgnoredCounter(m_pData->ChunkFrameTriggerIgnoredCounter)
        , ChunkFramecounter(m_pData->ChunkFramecounter)
        , ChunkFramesPerTriggerCounter(m_pData->ChunkFramesPerTriggerCounter)
        , ChunkGainAll(m_pData->ChunkGainAll)
        , ChunkHeight(m_pData->ChunkHeight)
        , ChunkInputStatusAtLineTriggerBitsPerLine(m_pData->ChunkInputStatusAtLineTriggerBitsPerLine)
        , ChunkInputStatusAtLineTriggerIndex(m_pData->ChunkInputStatusAtLineTriggerIndex)
        , ChunkInputStatusAtLineTriggerValue(m_pData->ChunkInputStatusAtLineTriggerValue)
        , ChunkLineStatusAll(m_pData->ChunkLineStatusAll)
        , ChunkLineTriggerCounter(m_pData->ChunkLineTriggerCounter)
        , ChunkLineTriggerEndToEndCounter(m_pData->ChunkLineTriggerEndToEndCounter)
        , ChunkLineTriggerIgnoredCounter(m_pData->ChunkLineTriggerIgnoredCounter)
        , ChunkOffsetX(m_pData->ChunkOffsetX)
        , ChunkOffsetY(m_pData->ChunkOffsetY)
        , ChunkPayloadCRC16(m_pData->ChunkPayloadCRC16)
        , ChunkPixelFormat(m_pData->ChunkPixelFormat)
        , ChunkShaftEncoderCounter(m_pData->ChunkShaftEncoderCounter)
        , ChunkStride(m_pData->ChunkStride)
        , ChunkTimestamp(m_pData->ChunkTimestamp)
        , ChunkTriggerinputcounter(m_pData->ChunkTriggerinputcounter)
        , ChunkVirtLineStatusAll(m_pData->ChunkVirtLineStatusAll)
        , ChunkWidth(m_pData->ChunkWidth)
    {
    }


    ///////////////////////////////////////////////////////////////////////////
    //
    inline BaslerCameraChunkDataParams::~BaslerCameraChunkDataParams(void)
    {
        delete m_pData;
    }


    ///////////////////////////////////////////////////////////////////////////
    //
    inline void BaslerCameraChunkDataParams::_Initialize(GENAPI_NAMESPACE::INodeMap* pNodeMap)
    {
        m_pData->ChunkDynamicRangeMax.Attach(pNodeMap, "ChunkDynamicRangeMax");
        m_pData->ChunkDynamicRangeMin.Attach(pNodeMap, "ChunkDynamicRangeMin");
        m_pData->ChunkExposureTime.Attach(pNodeMap, "ChunkExposureTime");
        m_pData->ChunkFrameTriggerCounter.Attach(pNodeMap, "ChunkFrameTriggerCounter");
        m_pData->ChunkFrameTriggerIgnoredCounter.Attach(pNodeMap, "ChunkFrameTriggerIgnoredCounter");
        m_pData->ChunkFramecounter.Attach(pNodeMap, "ChunkFramecounter");
        m_pData->ChunkFramesPerTriggerCounter.Attach(pNodeMap, "ChunkFramesPerTriggerCounter");
        m_pData->ChunkGainAll.Attach(pNodeMap, "ChunkGainAll");
        m_pData->ChunkHeight.Attach(pNodeMap, "ChunkHeight");
        m_pData->ChunkInputStatusAtLineTriggerBitsPerLine.Attach(pNodeMap, "ChunkInputStatusAtLineTriggerBitsPerLine");
        m_pData->ChunkInputStatusAtLineTriggerIndex.Attach(pNodeMap, "ChunkInputStatusAtLineTriggerIndex");
        m_pData->ChunkInputStatusAtLineTriggerValue.Attach(pNodeMap, "ChunkInputStatusAtLineTriggerValue");
        m_pData->ChunkLineStatusAll.Attach(pNodeMap, "ChunkLineStatusAll");
        m_pData->ChunkLineTriggerCounter.Attach(pNodeMap, "ChunkLineTriggerCounter");
        m_pData->ChunkLineTriggerEndToEndCounter.Attach(pNodeMap, "ChunkLineTriggerEndToEndCounter");
        m_pData->ChunkLineTriggerIgnoredCounter.Attach(pNodeMap, "ChunkLineTriggerIgnoredCounter");
        m_pData->ChunkOffsetX.Attach(pNodeMap, "ChunkOffsetX");
        m_pData->ChunkOffsetY.Attach(pNodeMap, "ChunkOffsetY");
        m_pData->ChunkPayloadCRC16.Attach(pNodeMap, "ChunkPayloadCRC16");
        m_pData->ChunkPixelFormat.Attach(pNodeMap, "ChunkPixelFormat");
        m_pData->ChunkShaftEncoderCounter.Attach(pNodeMap, "ChunkShaftEncoderCounter");
        m_pData->ChunkStride.Attach(pNodeMap, "ChunkStride");
        m_pData->ChunkTimestamp.Attach(pNodeMap, "ChunkTimestamp");
        m_pData->ChunkTriggerinputcounter.Attach(pNodeMap, "ChunkTriggerinputcounter");
        m_pData->ChunkVirtLineStatusAll.Attach(pNodeMap, "ChunkVirtLineStatusAll");
        m_pData->ChunkWidth.Attach(pNodeMap, "ChunkWidth");
    }

    //! \endcond

} // namespace Pylon
} // namespace BaslerCameraChunkDataParams_Params

#ifdef _MSC_VER
#pragma warning( pop )
#endif

#endif // BASLER_PYLON_BASLERCAMERACHUNKDATAPARAMS_H