/*******************************************************************************
    CANopen Object Dictionary definition for CANopenNode V4

    This file was automatically generated by CANopenEditor v4.0-51-g2d9b1ad-dirty

    https://github.com/CANopenNode/CANopenNode
    https://github.com/CANopenNode/CANopenEditor

    DON'T EDIT THIS FILE MANUALLY !!!!
********************************************************************************

    File info:
        File Names:   OD.h; OD.c
        Project File: sensor.xdd
        File Version: 1

        Created:      9/30/2021 1:08:49 PM
        Created By:   
        Modified:     2/4/2022 11:02:18 AM
        Modified By:  

    Device Info:
        Vendor Name:  
        Vendor ID:    
        Product Name: Sensor
        Product ID:   

        Description:  
*******************************************************************************/

#ifndef OD_H
#define OD_H
/*******************************************************************************
    Counters of OD objects
*******************************************************************************/
#define OD_CNT_NMT 1
#define OD_CNT_EM 1
#define OD_CNT_SYNC 1
#define OD_CNT_SYNC_PROD 1
#define OD_CNT_EM_PROD 1
#define OD_CNT_HB_PROD 1
#define OD_CNT_TPDO 5


/*******************************************************************************
    Sizes of OD arrays
*******************************************************************************/
#define OD_CNT_ARR_1003 16


/*******************************************************************************
    OD data declaration of all groups
*******************************************************************************/
typedef struct {
    uint32_t x1000_deviceType;
    uint32_t x1005_COB_ID_SYNCMessage;
    uint32_t x1006_communicationCyclePeriod;
    uint32_t x1007_synchronousWindowLength;
    uint32_t x1014_COB_ID_EMCY;
    uint16_t x1015_inhibitTimeEMCY;
    uint16_t x1017_producerHeartbeatTime;
    struct {
        uint8_t highestSub_indexSupported;
        uint32_t vendor_ID;
        uint32_t productCode;
        uint32_t revisionNumber;
        uint32_t serialNumber;
    } x1018_identity;
    uint8_t x1019_synchronousCounterOverflowValue;
    struct {
        uint8_t maxSub_index;
        uint32_t COB_IDUsedByTPDO;
        uint8_t transmissionType;
        uint16_t inhibitTime;
        uint8_t compatibilityEntry;
        uint16_t eventTimer;
        uint8_t SYNCStartValue;
    } x1800_TPDOCommunicationParameter;
    struct {
        uint8_t maxSub_index;
        uint32_t COB_IDUsedByTPDO;
        uint8_t transmissionType;
        uint16_t inhibitTime;
        uint8_t compatibilityEntry;
        uint16_t eventTimer;
        uint8_t SYNCStartValue;
    } x1801_TPDOCommunicationParameter;
    struct {
        uint8_t maxSub_index;
        uint32_t COB_IDUsedByTPDO;
        uint8_t transmissionType;
        uint16_t inhibitTime;
        uint8_t compatibilityEntry;
        uint16_t eventTimer;
        uint8_t SYNCStartValue;
    } x1802_TPDOCommunicationParameter;
    struct {
        uint8_t maxSub_index;
        uint32_t COB_IDUsedByTPDO;
        uint8_t transmissionType;
        uint16_t inhibitTime;
        uint8_t compatibilityEntry;
        uint16_t eventTimer;
        uint8_t SYNCStartValue;
    } x1803_TPDOCommunicationParameter;
    struct {
        uint8_t maxSub_index;
        uint32_t COB_IDUsedByTPDO;
        uint8_t transmissionType;
        uint16_t inhibitTime;
        uint8_t compatibilityEntry;
        uint16_t eventTimer;
        uint8_t SYNCStartValue;
    } x1804_TPDOCommunicationParameter;
    struct {
        uint8_t numberOfMappedObjects;
        uint32_t mappedObject_1;
        uint32_t mappedObject_2;
    } x1A00_TPDOMappingParameter;
    struct {
        uint8_t numberOfMappedObjects;
        uint32_t mappedObject_1;
        uint32_t mappedObject_2;
    } x1A01_TPDOMappingParameter;
    struct {
        uint8_t numberOfMappedObjects;
        uint32_t mappedObject_1;
        uint32_t mappedObject_2;
    } x1A02_TPDOMappingParameter;
    struct {
        uint8_t numberOfMappedObjects;
        uint32_t mappedObject_1;
        uint32_t mappedObject_2;
    } x1A03_TPDOMappingParameter;
    struct {
        uint8_t numberOfMappedObjects;
        uint32_t mappedObject_1;
        uint32_t mappedObject_2;
    } x1A04_TPDOMappingParameter;
} OD_PERSIST_COMM_t;

typedef struct {
    uint8_t x1001_errorRegister;
    struct {
        uint8_t highestSub_indexSupported;
        float32_t channelA;
        float32_t channelB;
        float32_t channelC;
        float32_t channelD;
        float32_t therm;
    } x6000_thermopile1;
    struct {
        uint8_t highestSub_indexSupported;
        float32_t channelA;
        float32_t channelB;
        float32_t channelC;
        float32_t channelD;
        float32_t therm;
    } x6001_thermopile2;
} OD_RAM_t;

#ifndef OD_ATTR_PERSIST_COMM
#define OD_ATTR_PERSIST_COMM
#endif
extern OD_ATTR_PERSIST_COMM OD_PERSIST_COMM_t OD_PERSIST_COMM;

#ifndef OD_ATTR_RAM
#define OD_ATTR_RAM
#endif
extern OD_ATTR_RAM OD_RAM_t OD_RAM;

#ifndef OD_ATTR_OD
#define OD_ATTR_OD
#endif
extern OD_ATTR_OD OD_t *OD;


/*******************************************************************************
    Object dictionary entries - shortcuts
*******************************************************************************/
#define OD_ENTRY_H1000 &OD->list[0]
#define OD_ENTRY_H1001 &OD->list[1]
#define OD_ENTRY_H1003 &OD->list[2]
#define OD_ENTRY_H1005 &OD->list[3]
#define OD_ENTRY_H1006 &OD->list[4]
#define OD_ENTRY_H1007 &OD->list[5]
#define OD_ENTRY_H1014 &OD->list[6]
#define OD_ENTRY_H1015 &OD->list[7]
#define OD_ENTRY_H1017 &OD->list[8]
#define OD_ENTRY_H1018 &OD->list[9]
#define OD_ENTRY_H1019 &OD->list[10]
#define OD_ENTRY_H1800 &OD->list[11]
#define OD_ENTRY_H1801 &OD->list[12]
#define OD_ENTRY_H1802 &OD->list[13]
#define OD_ENTRY_H1803 &OD->list[14]
#define OD_ENTRY_H1804 &OD->list[15]
#define OD_ENTRY_H1A00 &OD->list[16]
#define OD_ENTRY_H1A01 &OD->list[17]
#define OD_ENTRY_H1A02 &OD->list[18]
#define OD_ENTRY_H1A03 &OD->list[19]
#define OD_ENTRY_H1A04 &OD->list[20]
#define OD_ENTRY_H6000 &OD->list[21]
#define OD_ENTRY_H6001 &OD->list[22]


/*******************************************************************************
    Object dictionary entries - shortcuts with names
*******************************************************************************/
#define OD_ENTRY_H1000_deviceType &OD->list[0]
#define OD_ENTRY_H1001_errorRegister &OD->list[1]
#define OD_ENTRY_H1003_pre_definedErrorField &OD->list[2]
#define OD_ENTRY_H1005_COB_ID_SYNCMessage &OD->list[3]
#define OD_ENTRY_H1006_communicationCyclePeriod &OD->list[4]
#define OD_ENTRY_H1007_synchronousWindowLength &OD->list[5]
#define OD_ENTRY_H1014_COB_ID_EMCY &OD->list[6]
#define OD_ENTRY_H1015_inhibitTimeEMCY &OD->list[7]
#define OD_ENTRY_H1017_producerHeartbeatTime &OD->list[8]
#define OD_ENTRY_H1018_identity &OD->list[9]
#define OD_ENTRY_H1019_synchronousCounterOverflowValue &OD->list[10]
#define OD_ENTRY_H1800_TPDOCommunicationParameter &OD->list[11]
#define OD_ENTRY_H1801_TPDOCommunicationParameter &OD->list[12]
#define OD_ENTRY_H1802_TPDOCommunicationParameter &OD->list[13]
#define OD_ENTRY_H1803_TPDOCommunicationParameter &OD->list[14]
#define OD_ENTRY_H1804_TPDOCommunicationParameter &OD->list[15]
#define OD_ENTRY_H1A00_TPDOMappingParameter &OD->list[16]
#define OD_ENTRY_H1A01_TPDOMappingParameter &OD->list[17]
#define OD_ENTRY_H1A02_TPDOMappingParameter &OD->list[18]
#define OD_ENTRY_H1A03_TPDOMappingParameter &OD->list[19]
#define OD_ENTRY_H1A04_TPDOMappingParameter &OD->list[20]
#define OD_ENTRY_H6000_thermopile1 &OD->list[21]
#define OD_ENTRY_H6001_thermopile2 &OD->list[22]


/*******************************************************************************
    OD config structure
*******************************************************************************/
#ifdef CO_MULTIPLE_OD
#define OD_INIT_CONFIG(config) {\
    (config).CNT_NMT = OD_CNT_NMT;\
    (config).ENTRY_H1017 = OD_ENTRY_H1017;\
    (config).CNT_HB_CONS = 0;\
    (config).CNT_ARR_1016 = OD_CNT_ARR_1016;\
    (config).ENTRY_H1016 = OD_ENTRY_H1016;\
    (config).CNT_EM = OD_CNT_EM;\
    (config).ENTRY_H1001 = OD_ENTRY_H1001;\
    (config).ENTRY_H1014 = OD_ENTRY_H1014;\
    (config).ENTRY_H1015 = OD_ENTRY_H1015;\
    (config).CNT_ARR_1003 = OD_CNT_ARR_1003;\
    (config).ENTRY_H1003 = OD_ENTRY_H1003;\
    (config).CNT_SDO_SRV = 0;\
    (config).ENTRY_H1200 = OD_ENTRY_H1200;\
    (config).CNT_SDO_CLI = 0;\
    (config).ENTRY_H1280 = OD_ENTRY_H1280;\
    (config).CNT_TIME = 0;\
    (config).ENTRY_H1012 = OD_ENTRY_H1012;\
    (config).CNT_SYNC = OD_CNT_SYNC;\
    (config).ENTRY_H1005 = OD_ENTRY_H1005;\
    (config).ENTRY_H1006 = OD_ENTRY_H1006;\
    (config).ENTRY_H1007 = OD_ENTRY_H1007;\
    (config).ENTRY_H1019 = OD_ENTRY_H1019;\
    (config).CNT_RPDO = 0;\
    (config).ENTRY_H1400 = NULL;\
    (config).ENTRY_H1600 = NULL;\
    (config).CNT_TPDO = OD_CNT_TPDO;\
    (config).ENTRY_H1800 = OD_ENTRY_H1800;\
    (config).ENTRY_H1A00 = OD_ENTRY_H1A00;\
    (config).CNT_LEDS = 0;\
    (config).CNT_GFC = 0;\
    (config).ENTRY_H1300 = NULL;\
    (config).CNT_SRDO = 0;\
    (config).ENTRY_H1301 = NULL;\
    (config).ENTRY_H1381 = NULL;\
    (config).ENTRY_H13FE = NULL;\
    (config).ENTRY_H13FF = NULL;\
    (config).CNT_LSS_SLV = 0;\
    (config).CNT_LSS_MST = 0;\
    (config).CNT_GTWA = 0;\
    (config).CNT_TRACE = 0;\
}
#endif

#endif /* OD_H */
