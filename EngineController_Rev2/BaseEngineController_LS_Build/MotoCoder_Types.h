
/* MotoCoder_Types.h */
/* Generated by MotoCoder */
/* Version: 0.12.4 */
/* At: 2022-11-08 18:29:43 */
/* Copyright: 2022 Woodward. */


#ifndef MOTOCODER_TYPES_H
#define MOTOCODER_TYPES_H



	


/* reference_T used as a pointer to DataStorage */
#ifndef defined_reference_T
#define defined_reference_T
typedef void * reference_T;
#endif

/* struct_reference_T used as a pointer to Structure DataStorage */
#ifndef defined_struct_reference_T
#define defined_struct_reference_T
typedef void * struct_reference_T;
#endif

#ifndef defined_char_T
#define defined_char_T
typedef char                   char_T;
#endif

#ifndef defined_boolean_T
#define defined_boolean_T
typedef unsigned char          boolean_T;
#endif

#ifndef defined_int8_T
#define defined_int8_T
typedef signed char            int8_T;
#endif

#ifndef defined_uint8_T
#define defined_uint8_T
typedef unsigned char          uint8_T;
#endif

#ifndef defined_int16_T
#define defined_int16_T
typedef short                  int16_T;
#endif

#ifndef defined_uint16_T
#define defined_uint16_T
typedef unsigned short         uint16_T;
#endif

#ifndef defined_int32_T
#define defined_int32_T
typedef int                    int32_T;
#endif

#ifndef defined_uint32_T
#define defined_uint32_T
typedef unsigned int           uint32_T;
#endif

#ifndef defined_int64_T
#define defined_int64_T
typedef long long              int64_T;
#endif

#ifndef defined_uint64_T
#define defined_uint64_T
typedef unsigned long long     uint64_T;
#endif

#ifndef defined_real32_T
#define defined_real32_T
typedef float                  real32_T;
#endif

#ifndef defined_real64_T
#define defined_real64_T
typedef double                 real64_T;
#endif

#define Interrupt_Disable() DISABLE()
#define Interrupt_Enable() UNDISABLE()
    /* S_CCPDAQ structure */
typedef struct {
    uint32_T   TxID;
    uint16_T   Prescaler;
    uint8_T   DAQStatus;
    uint8_T   LastODTNumber;
    uint8_T   EventChannelNumber;
} S_CCPDAQ_T;

/* S_CCPODTItem structure */
typedef struct {
    reference_T   pData;
    uint8_T   DataSize;
} S_CCPODTItem_T;

/* S_CCPODT structure */
typedef struct {
    uint8_T   ODTSize;
    S_CCPODTItem_T   ODTList[7];
} S_CCPODT_T;

/* S_ConstFault structure */
typedef struct {
    uint16_T   mode;
    uint16_T   id;
    uint16_T   test;
    uint16_T   xlim;
    uint16_T   ylim;
    uint16_T   action1;
    uint16_T   action1_condition;
    uint16_T   action2;
    uint16_T   action2_condition;
    uint16_T   action3;
    uint16_T   action3_condition;
    uint16_T   action4;
    uint16_T   action4_condition;
} S_ConstFault_T;

/* S_Fault structure */
typedef struct {
    uint16_T   x;
    uint16_T   y;
} S_Fault_T;

/* S_FaultAction structure */
typedef struct {
    uint8_T   reference_count;
} S_FaultAction_T;

/* S_FaultManager structure */
typedef struct {
    uint8_T   suspected[16];
    uint8_T   active[16];
    uint8_T   occurred[16];
    uint8_T   last_suspected_fault;
    uint8_T   last_unsuspected_fault;
    uint8_T   last_active_fault;
    uint8_T   last_inactive_fault;
    uint8_T   last_occurred_fault;
} S_FaultManager_T;

/* S_DispFaultManager structure */
typedef struct {
    uint8_T   current_suspected_vardec;
    uint8_T   current_active_vardec;
    uint8_T   current_occurred_vardec;
} S_DispFaultManager_T;

/* S_ConstFaultManager structure */
typedef struct {
    uint8_T   num_faults;
    uint16_T   num_actions;
} S_ConstFaultManager_T;

/* FaultActions Enumeration */
typedef enum {
    FAULTACTIONS_CUTTHROTTLE=0,
    FAULTACTIONS_DFCODISABLE=1,
    FAULTACTIONS_MIL_LED=10,
    FAULTACTIONS_MEDIUMREVLIMIT=11,
    FAULTACTIONS_SOFTREVLIMIT=12,
    FAULTACTIONS_OPENPARENNONECLOSEPAREN=13,
    FAULTACTIONS_DELAYEDENGINESHUTDOWN=2,
    FAULTACTIONS_DISABLEAC=3,
    FAULTACTIONS_DISABLEO2CTRL=4,
    FAULTACTIONS_DISABLEVEADAPT=5,
    FAULTACTIONS_DISABLEWASTEGATE=6,
    FAULTACTIONS_ENGINEPROTECTLED=7,
    FAULTACTIONS_ENGINESHUTDOWN=8,
    FAULTACTIONS_HARDREVLIMIT=9,
} E_FaultActions;

/* FaultDisp Enumeration */
typedef enum {
    FAULTDISP_CURRENTSUSPECTED=0,
    FAULTDISP_CURRENTACTIVE=1,
    FAULTDISP_CURRENTOCCURRED=2,
} E_FaultDisp;

/* Fault_Cols Enumeration */
typedef enum {
    FAULT_COLS_MODE=0,
    FAULT_COLS_ID=1,
    FAULT_COLS_ACTION3CONDITION=10,
    FAULT_COLS_ACTION4=11,
    FAULT_COLS_ACTION4CONDITION=12,
    FAULT_COLS_TEST=2,
    FAULT_COLS_FAULTYSAMPLESOPENPARENXCLOSEPAREN=3,
    FAULT_COLS_TOTALSAMPLESOPENPARENYCLOSEPAREN=4,
    FAULT_COLS_ACTION1=5,
    FAULT_COLS_ACTION1CONDITION=6,
    FAULT_COLS_ACTION2=7,
    FAULT_COLS_ACTION2CONDITION=8,
    FAULT_COLS_ACTION3=9,
} E_Fault_Cols;

/* Fault_Command Enumeration */
typedef enum {
    FAULT_COMMAND_DASH=0,
    FAULT_COMMAND_CLEARALLFAULTS=1,
} E_Fault_Command;

/* Fault_Cond Enumeration */
typedef enum {
    FAULT_COND_OPENPARENNONECLOSEPAREN=0,
    FAULT_COND_SUSPECTED=1,
    FAULT_COND_ACTIVE=2,
    FAULT_COND_SUSPECTEDORACTIVE=3,
    FAULT_COND_OCCURRED=4,
    FAULT_COND_SUSPECTEDOROCCURRED=5,
    FAULT_COND_ACTIVEOROCCURRED=6,
    FAULT_COND_SUSPECTEDORACTIVEOROCCURRED=7,
} E_Fault_Cond;

/* Fault_Mode Enumeration */
typedef enum {
    FAULT_MODE_DISABLED=0,
    FAULT_MODE_ENABLED=1,
    FAULT_MODE_STICKY=2,
    FAULT_MODE_ENABLEDDASHPERSISTENT=3,
    FAULT_MODE_STICKYDASHPERSISTENT=4,
    FAULT_MODE_SAVEOCCURRED=5,
} E_Fault_Mode;

/* Fault_Test Enumeration */
typedef enum {
    FAULT_TEST_DASH=0,
    FAULT_TEST_TEST=1,
} E_Fault_Test;

/* Faults Enumeration */
typedef enum {
    FAULTS_ACCHARGEHIGH_FAULT=0,
    FAULTS_ACCHARGELOW_FAULT=1,
    FAULTS_APP1_ADAPTRANGEHIGH=10,
    FAULTS_O2NOTACTIVE=100,
    FAULTS_OILPRESRANGEHIGH=101,
    FAULTS_OILPRESRANGELOW=102,
    FAULTS_SENSVOLTRANGEHIGH=103,
    FAULTS_SENSVOLTRANGELOW=104,
    FAULTS_SOFTOVERBOOST_FAULT=105,
    FAULTS_SOFTOVERSPEED=106,
    FAULTS_SYSVOLTRANGEHIGH=107,
    FAULTS_SYSVOLTRANGELOW=108,
    FAULTS_TPS1ADAPTHIMAX=109,
    FAULTS_APP1_ADAPTRANGELOW=11,
    FAULTS_TPS1ADAPTHIMIN=110,
    FAULTS_TPS1ADAPTLOMAX=111,
    FAULTS_TPS1ADAPTLOMIN=112,
    FAULTS_TPS1RANGEHIGH=113,
    FAULTS_TPS1RANGELOW=114,
    FAULTS_TPS2ADAPTHIMAX=115,
    FAULTS_TPS2ADAPTHIMIN=116,
    FAULTS_TPS2ADAPTLOMAX=117,
    FAULTS_TPS2ADAPTLOMIN=118,
    FAULTS_TPS2RANGEHIGH=119,
    FAULTS_APP2RANGEHIGH=12,
    FAULTS_TPS2RANGELOW=120,
    FAULTS_TPS_SENSORS_CONFLICT=121,
    FAULTS_VSPDRANGEHIGH=122,
    FAULTS_VSPDRANGELOW=123,
    FAULTS_WASTEGATE_FAULT=124,
    FAULTS_OPENPARENNONECLOSEPAREN=125,
    FAULTS_APP2RANGELOW=13,
    FAULTS_APP2_ADAPTADAPTHIMAX=14,
    FAULTS_APP2_ADAPTADAPTHIMIN=15,
    FAULTS_APP2_ADAPTADAPTLOMAX=16,
    FAULTS_APP2_ADAPTADAPTLOMIN=17,
    FAULTS_APP2_ADAPTRANGEHIGH=18,
    FAULTS_APP2_ADAPTRANGELOW=19,
    FAULTS_ACPRESRANGEHIGH=2,
    FAULTS_APP_SENSORS_CONFLICT=20,
    FAULTS_BANK1_EQUIVRATIORANGEHIGH=21,
    FAULTS_BANK1_EQUIVRATIORANGELOW=22,
    FAULTS_BANK2_EQUIVRATIORANGEHIGH=23,
    FAULTS_BANK2_EQUIVRATIORANGELOW=24,
    FAULTS_CATRANGEHIGH=25,
    FAULTS_CATRANGELOW=26,
    FAULTS_CAMEDGESFAULT=27,
    FAULTS_CAMSYNCFAULT=28,
    FAULTS_CRANKEDGESFAULT=29,
    FAULTS_ACPRESRANGELOW=3,
    FAULTS_CRANKSYNCFAULT=30,
    FAULTS_ECTOVERTEMPFAULT=31,
    FAULTS_ECTRANGEHIGH=32,
    FAULTS_ECTRANGELOW=33,
    FAULTS_ECTSEVEREOVERTEMPFAULT=34,
    FAULTS_EST1_OPEN=35,
    FAULTS_EST1_SHORT=36,
    FAULTS_EST2_OPEN=37,
    FAULTS_EST2_SHORT=38,
    FAULTS_EST3_OPEN=39,
    FAULTS_APP1RANGEHIGH=4,
    FAULTS_EST3_SHORT=40,
    FAULTS_EST4_OPEN=41,
    FAULTS_EST4_SHORT=42,
    FAULTS_EST5_OPEN=43,
    FAULTS_EST5_SHORT=44,
    FAULTS_EST6_OPEN=45,
    FAULTS_EST6_SHORT=46,
    FAULTS_EST7_OPEN=47,
    FAULTS_EST7_SHORT=48,
    FAULTS_EST8_OPEN=49,
    FAULTS_APP1RANGELOW=5,
    FAULTS_EST8_SHORT=50,
    FAULTS_ETCSPRINGTEST=51,
    FAULTS_ETC_OPEN_FAULT=52,
    FAULTS_ETC_STICKING=53,
    FAULTS_EVAPRANGEHIGH=54,
    FAULTS_EVAPRANGELOW=55,
    FAULTS_FUELADAPTRANGEHI=56,
    FAULTS_FUELADAPTRANGELOW=57,
    FAULTS_FUELPRESHIGH_FAULT=58,
    FAULTS_FUELPRESLOW_FAULT=59,
    FAULTS_APP1_ADAPTADAPTHIMAX=6,
    FAULTS_FUELPRESRANGEHIGH=60,
    FAULTS_FUELPRESRANGELOW=61,
    FAULTS_FUELSENSRANGEHIGH=62,
    FAULTS_FUELSENSRANGELOW=63,
    FAULTS_FUEL_LVLRANGEHIGH=64,
    FAULTS_FUEL_LVLRANGELOW=65,
    FAULTS_GPS_DATETIME_TIMEOUT=66,
    FAULTS_GPS_LATLONG_TIMEOUT=67,
    FAULTS_GPS_NOTREADY=68,
    FAULTS_GPS_SPEEDDIR_TIMEOUT=69,
    FAULTS_APP1_ADAPTADAPTHIMIN=7,
    FAULTS_HARDOVERBOOST_FAULT=70,
    FAULTS_HARDOVERSPEED=71,
    FAULTS_IATRANGEHIGH=72,
    FAULTS_IATRANGELOW=73,
    FAULTS_INJ1OPEN=74,
    FAULTS_INJ2OPEN=75,
    FAULTS_INJ3OPEN=76,
    FAULTS_INJ4OPEN=77,
    FAULTS_INJ5OPEN=78,
    FAULTS_INJ6OPEN=79,
    FAULTS_APP1_ADAPTADAPTLOMAX=8,
    FAULTS_INJ7OPEN=80,
    FAULTS_INJ8OPEN=81,
    FAULTS_LAMBDA_1_NOTREADY=82,
    FAULTS_LAMBDA_1_TIMEOUT=83,
    FAULTS_LAMBDA_2_NOTREADY=84,
    FAULTS_LAMBDA_2_TIMEOUT=85,
    FAULTS_LEANPROTECT_FAULT=86,
    FAULTS_MAFRANGEHIGH=87,
    FAULTS_MAFRANGELOW=88,
    FAULTS_MAPRANGEHIGH=89,
    FAULTS_APP1_ADAPTADAPTLOMIN=9,
    FAULTS_MAPRANGELOW=90,
    FAULTS_MAPTIMERANGEHIGH=91,
    FAULTS_MAPTIMERANGELOW=92,
    FAULTS_MAP_IR_HI=93,
    FAULTS_MAP_IR_LO=94,
    FAULTS_MAP_STICKING=95,
    FAULTS_MEDIUMOVERSPEED=96,
    FAULTS_NOOIL_FAULT=97,
    FAULTS_O2FAILEDLEAN=98,
    FAULTS_O2FAILEDRICH=99,
} E_Faults;

/* VarDecEnum_1 Enumeration */
typedef enum {
    VARDECENUM_1_PASSDASHTHROUGH=0,
    VARDECENUM_1_OVERRIDE=1,
} E_VarDecEnum_1;

/* VarDecEnum_14 Enumeration */
typedef enum {
    VARDECENUM_14_GOVENABLED=0,
    VARDECENUM_14_GOVDISABLED=1,
} E_VarDecEnum_14;

/* VarDecEnum_18 Enumeration */
typedef enum {
    VARDECENUM_18_ETC=0,
    VARDECENUM_18_IAC=1,
} E_VarDecEnum_18;

/* VarDecEnum_19 Enumeration */
typedef enum {
    VARDECENUM_19_2DASHWIRE=0,
    VARDECENUM_19_3DASHWIRE=1,
} E_VarDecEnum_19;

/* VarDecEnum_2 Enumeration */
typedef enum {
    VARDECENUM_2_RUN=0,
    VARDECENUM_2_REBOOT=1,
} E_VarDecEnum_2;

/* VarDecEnum_20 Enumeration */
typedef enum {
    VARDECENUM_20_PWM=0,
    VARDECENUM_20_ONOFF=1,
} E_VarDecEnum_20;

/* VarDecEnum_23 Enumeration */
typedef enum {
    VARDECENUM_23_RATELIMITER=0,
    VARDECENUM_23_LOWPASS=1,
    VARDECENUM_23_MOVINGAVERAGE=2,
} E_VarDecEnum_23;

/* VarDecEnum_24 Enumeration */
typedef enum {
    VARDECENUM_24_MODELFROMMAP=0,
    VARDECENUM_24_USEMAFSENSORDIRECTLY=1,
} E_VarDecEnum_24;

/* VarDecEnum_25 Enumeration */
typedef enum {
    VARDECENUM_25_CUTSPARK=0,
    VARDECENUM_25_CUTFUEL=1,
    VARDECENUM_25_CUTSPARKANDFUEL=2,
} E_VarDecEnum_25;

/* VarDecEnum_3 Enumeration */
typedef enum {
    VARDECENUM_3_OFF=0,
    VARDECENUM_3_ON=1,
} E_VarDecEnum_3;

/* VarDecEnum_32 Enumeration */
typedef enum {
    VARDECENUM_32_RISINGEDGE=0,
    VARDECENUM_32_FALLINGEDGE=1,
} E_VarDecEnum_32;

/* VarDecEnum_33 Enumeration */
typedef enum {
    VARDECENUM_33_WEAKPULLUP=0,
    VARDECENUM_33_STRONGPULLUP=1,
} E_VarDecEnum_33;

/* VarDecEnum_34 Enumeration */
typedef enum {
    VARDECENUM_34_OPENPARENNONECLOSEPAREN=-1,
    VARDECENUM_34_EST1=36,
    VARDECENUM_34_EST2=37,
    VARDECENUM_34_EST3=38,
    VARDECENUM_34_EST4=39,
    VARDECENUM_34_EST5=40,
    VARDECENUM_34_EST6=41,
    VARDECENUM_34_EST7=42,
    VARDECENUM_34_EST8=43,
} E_VarDecEnum_34;

/* VarDecEnum_35 Enumeration */
typedef enum {
    VARDECENUM_35_STANDARDOPENPARENCOILPERCYLINDERCLOSEPAREN=0,
    VARDECENUM_35_BANKEDOPENPARENFIREONBOTHPHASESUNTILCAMSYNCCLOSEPAREN=1,
    VARDECENUM_35_BATCHOPENPARENWASTEDSPARKCLOSEPAREN=2,
    VARDECENUM_35_MUXEDOPENPARENDISTRIBUTEDCLOSEPAREN=3,
} E_VarDecEnum_35;

/* VarDecEnum_36 Enumeration */
typedef enum {
    VARDECENUM_36_OPENPARENNONECLOSEPAREN=-1,
    VARDECENUM_36_FINJ1=12,
    VARDECENUM_36_AINJ4=21,
    VARDECENUM_36_AINJ5=22,
    VARDECENUM_36_AINJ6=23,
    VARDECENUM_36_FINJ2=13,
    VARDECENUM_36_FINJ3=14,
    VARDECENUM_36_FINJ4=15,
    VARDECENUM_36_FINJ5=16,
    VARDECENUM_36_FINJ6=17,
    VARDECENUM_36_AINJ1=18,
    VARDECENUM_36_AINJ2=19,
    VARDECENUM_36_AINJ3=20,
} E_VarDecEnum_36;

/* VarDecEnum_37 Enumeration */
typedef enum {
    VARDECENUM_37_STANDARDOPENPARENINJECTORPERCYLINDERCLOSEPAREN=0,
    VARDECENUM_37_BATCHOPENPARENFIREHALFFUELONHALFOFTHEINJECTORSEVERYREVCLOSEPAREN=1,
    VARDECENUM_37_WASTEDOPENPARENFIREHALFFUELONALLINJECTORSEVERYREVCLOSEPAREN=2,
} E_VarDecEnum_37;

/* VarDecEnum_38 Enumeration */
typedef enum {
    VARDECENUM_38_STANDARD=0,
    VARDECENUM_38_TRANSIENT=1,
} E_VarDecEnum_38;

/* VarDecEnum_4 Enumeration */
typedef enum {
    VARDECENUM_4_DISABLED=0,
    VARDECENUM_4_ENABLED=1,
} E_VarDecEnum_4;

/* VarDecEnum_40 Enumeration */
typedef enum {
    VARDECENUM_40_CUTTHROTTLE=0,
    VARDECENUM_40_DFCODISABLE=1,
    VARDECENUM_40_MIL_LED=10,
    VARDECENUM_40_MEDIUMREVLIMIT=11,
    VARDECENUM_40_SOFTREVLIMIT=12,
    VARDECENUM_40_DELAYEDENGINESHUTDOWN=2,
    VARDECENUM_40_DISABLEAC=3,
    VARDECENUM_40_DISABLEO2CTRL=4,
    VARDECENUM_40_DISABLEVEADAPT=5,
    VARDECENUM_40_DISABLEWASTEGATE=6,
    VARDECENUM_40_ENGINEPROTECTLED=7,
    VARDECENUM_40_ENGINESHUTDOWN=8,
    VARDECENUM_40_HARDREVLIMIT=9,
} E_VarDecEnum_40;

/* VarDecEnum_41 Enumeration */
typedef enum {
    VARDECENUM_41_DASH=0,
} E_VarDecEnum_41;

/* VarDecEnum_42 Enumeration */
typedef enum {
    VARDECENUM_42_OPENPARENNONECLOSEPAREN=-1,
    VARDECENUM_42_ECUP=53,
    VARDECENUM_42_AN7M=62,
    VARDECENUM_42_AN8M=63,
    VARDECENUM_42_AN9M=64,
    VARDECENUM_42_AN10M=65,
    VARDECENUM_42_AN11M=66,
    VARDECENUM_42_AN12M=67,
    VARDECENUM_42_AN13M=68,
    VARDECENUM_42_AN14M=69,
    VARDECENUM_42_AN15M=70,
    VARDECENUM_42_AN16M=71,
    VARDECENUM_42_DRVP=54,
    VARDECENUM_42_AN17M=72,
    VARDECENUM_42_AN18M=73,
    VARDECENUM_42_AN19M=74,
    VARDECENUM_42_O2A=90,
    VARDECENUM_42_O2B=91,
    VARDECENUM_42_XDRP_B=92,
    VARDECENUM_42_XDRP=55,
    VARDECENUM_42_AN1M=56,
    VARDECENUM_42_AN2M=57,
    VARDECENUM_42_AN3M=58,
    VARDECENUM_42_AN4M=59,
    VARDECENUM_42_AN5M=60,
    VARDECENUM_42_AN6M=61,
} E_VarDecEnum_42;

/* VarDecEnum_43 Enumeration */
typedef enum {
    VARDECENUM_43_5V=0,
    VARDECENUM_43_2POINT7V=1,
} E_VarDecEnum_43;

/* VarDecEnum_44 Enumeration */
typedef enum {
    VARDECENUM_44_OPENPARENNONECLOSEPAREN=-1,
    VARDECENUM_44_FUELP=0,
    VARDECENUM_44_FINJ3=14,
    VARDECENUM_44_FINJ4=15,
    VARDECENUM_44_FINJ5=16,
    VARDECENUM_44_FINJ6=17,
    VARDECENUM_44_AINJ1=18,
    VARDECENUM_44_AINJ2=19,
    VARDECENUM_44_AINJ3=20,
    VARDECENUM_44_AINJ4=21,
    VARDECENUM_44_AINJ5=22,
    VARDECENUM_44_AINJ6=23,
    VARDECENUM_44_HSOL1=2,
    VARDECENUM_44_TACH=24,
    VARDECENUM_44_EST1=36,
    VARDECENUM_44_EST2=37,
    VARDECENUM_44_EST3=38,
    VARDECENUM_44_EST4=39,
    VARDECENUM_44_EST5=40,
    VARDECENUM_44_EST6=41,
    VARDECENUM_44_EST7=42,
    VARDECENUM_44_EST8=43,
    VARDECENUM_44_MPRD=52,
    VARDECENUM_44_HSOL2=3,
    VARDECENUM_44_HSOL3=4,
    VARDECENUM_44_HSOL4=5,
    VARDECENUM_44_START=6,
    VARDECENUM_44_OILP=11,
    VARDECENUM_44_FINJ1=12,
    VARDECENUM_44_FINJ2=13,
} E_VarDecEnum_44;

/* VarDecEnum_45 Enumeration */
typedef enum {
    VARDECENUM_45_OPENPARENNONECLOSEPAREN=-1,
    VARDECENUM_45_DG1M=93,
    VARDECENUM_45_DG2M=94,
    VARDECENUM_45_DG4M=96,
    VARDECENUM_45_CNK=100,
} E_VarDecEnum_45;

/* VarDecEnum_46 Enumeration */
typedef enum {
    VARDECENUM_46_NOALIASPROTECT=0,
    VARDECENUM_46_USEALIASPROTECT=1,
} E_VarDecEnum_46;

/* VarDecEnum_47 Enumeration */
typedef enum {
    VARDECENUM_47_DIGITALINPUT=0,
    VARDECENUM_47_VRINPUT=1,
} E_VarDecEnum_47;

/* VarDecEnum_48 Enumeration */
typedef enum {
    VARDECENUM_48_OPENPARENNONECLOSEPAREN=-1,
    VARDECENUM_48_AN1M=56,
    VARDECENUM_48_AN10M=65,
    VARDECENUM_48_AN11M=66,
    VARDECENUM_48_AN12M=67,
    VARDECENUM_48_AN13M=68,
    VARDECENUM_48_AN14M=69,
    VARDECENUM_48_AN15M=70,
    VARDECENUM_48_AN16M=71,
    VARDECENUM_48_AN17M=72,
    VARDECENUM_48_AN18M=73,
    VARDECENUM_48_AN19M=74,
    VARDECENUM_48_AN2M=57,
    VARDECENUM_48_O2A=90,
    VARDECENUM_48_O2B=91,
    VARDECENUM_48_DG1M=93,
    VARDECENUM_48_DG2M=94,
    VARDECENUM_48_DG4M=96,
    VARDECENUM_48_ESTOP=97,
    VARDECENUM_48_AN3M=58,
    VARDECENUM_48_AN4M=59,
    VARDECENUM_48_AN5M=60,
    VARDECENUM_48_AN6M=61,
    VARDECENUM_48_AN7M=62,
    VARDECENUM_48_AN8M=63,
    VARDECENUM_48_AN9M=64,
} E_VarDecEnum_48;

/* VarDecEnum_49 Enumeration */
typedef enum {
    VARDECENUM_49_OPENPARENNONECLOSEPAREN=-1,
    VARDECENUM_49_FUELP=0,
    VARDECENUM_49_FINJ2=13,
    VARDECENUM_49_FINJ3=14,
    VARDECENUM_49_FINJ4=15,
    VARDECENUM_49_FINJ5=16,
    VARDECENUM_49_FINJ6=17,
    VARDECENUM_49_AINJ1=18,
    VARDECENUM_49_AINJ2=19,
    VARDECENUM_49_AINJ3=20,
    VARDECENUM_49_AINJ4=21,
    VARDECENUM_49_AINJ5=22,
    VARDECENUM_49_ETC=1,
    VARDECENUM_49_AINJ6=23,
    VARDECENUM_49_TACH=24,
    VARDECENUM_49_EST1=36,
    VARDECENUM_49_EST2=37,
    VARDECENUM_49_EST3=38,
    VARDECENUM_49_EST4=39,
    VARDECENUM_49_EST5=40,
    VARDECENUM_49_EST6=41,
    VARDECENUM_49_EST7=42,
    VARDECENUM_49_EST8=43,
    VARDECENUM_49_HSOL1=2,
    VARDECENUM_49_HSOL2=3,
    VARDECENUM_49_HSOL3=4,
    VARDECENUM_49_HSOL4=5,
    VARDECENUM_49_START=6,
    VARDECENUM_49_OILP=11,
    VARDECENUM_49_FINJ1=12,
} E_VarDecEnum_49;

/* VarDecEnum_5 Enumeration */
typedef enum {
    VARDECENUM_5_RUN=0,
    VARDECENUM_5_RESTORETODEFAULTS=1,
} E_VarDecEnum_5;

/* VarDecEnum_6 Enumeration */
typedef enum {
    VARDECENUM_6_RUN=0,
    VARDECENUM_6_STORETOEEPROM=1,
} E_VarDecEnum_6;

/* VarDecEnum_7 Enumeration */
typedef enum {
    VARDECENUM_7_ENABLE=0,
    VARDECENUM_7_CUT=1,
} E_VarDecEnum_7;

/* VarDecEnum_8 Enumeration */
typedef enum {
    VARDECENUM_8_UNLOCKED=0,
    VARDECENUM_8_LOCKED=1,
} E_VarDecEnum_8;

/* VarDecEnum_9 Enumeration */
typedef enum {
    VARDECENUM_9_APP1=0,
    VARDECENUM_9_NORMAL=1,
} E_VarDecEnum_9;



#endif

