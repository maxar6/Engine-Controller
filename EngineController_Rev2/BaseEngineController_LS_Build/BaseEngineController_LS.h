/*
 * File: BaseEngineController_LS.h
 *
 * Code generated for Simulink model 'BaseEngineController_LS'.
 *
 * Model version                  : 1.2222
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Sun Mar 19 22:34:25 2023
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_BaseEngineController_LS_h_
#define RTW_HEADER_BaseEngineController_LS_h_
#ifndef BaseEngineController_LS_COMMON_INCLUDES_
# define BaseEngineController_LS_COMMON_INCLUDES_
#include <math.h>
#include <string.h>
#include "rtwtypes.h"
#include "Application.h"
#include "rt_nonfinite.h"
#include "rt_zcfcn.h"
#endif                                 /* BaseEngineController_LS_COMMON_INCLUDES_ */

#include "BaseEngineController_LS_types.h"

/* Child system includes */
#include "Foreground.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((void*) 0)
#endif

/* Block signals (auto storage) */
typedef struct {
  real_T s661_Switch;                  /* '<S661>/Switch' */
  real_T s669_MinMax;                  /* '<S669>/MinMax' */
  real_T s669_MinMax1;                 /* '<S669>/MinMax1' */
  real_T s673_MinMax1;                 /* '<S673>/MinMax1' */
  real_T s662_Switch;                  /* '<S662>/Switch' */
  real_T s686_MinMax;                  /* '<S686>/MinMax' */
  real_T s686_MinMax1;                 /* '<S686>/MinMax1' */
  real_T s690_MinMax1;                 /* '<S690>/MinMax1' */
  real_T s683_Merge;                   /* '<S683>/Merge' */
  real_T s700_Merge;                   /* '<S700>/Merge' */
  real_T s430_Switch1;                 /* '<S430>/Switch1' */
  real_T s460_Sum;                     /* '<S460>/Sum' */
  real_T s537_Sum1;                    /* '<S537>/Sum1' */
  real_T s550_Merge;                   /* '<S550>/Merge' */
  real_T s472_RPMInst;                 /* '<S472>/Data Type Conversion1' */
  real_T s496_DataTypeConversion;      /* '<S496>/Data Type Conversion' */
  real_T s536_Sum1;                    /* '<S536>/Sum1' */
  real_T s663_Switch;                  /* '<S663>/Switch' */
  real_T s703_MinMax;                  /* '<S703>/MinMax' */
  real_T s703_MinMax1;                 /* '<S703>/MinMax1' */
  real_T s707_MinMax1;                 /* '<S707>/MinMax1' */
  real_T s664_Switch;                  /* '<S664>/Switch' */
  real_T s720_MinMax;                  /* '<S720>/MinMax' */
  real_T s720_MinMax1;                 /* '<S720>/MinMax1' */
  real_T s724_MinMax1;                 /* '<S724>/MinMax1' */
  real_T s717_Merge;                   /* '<S717>/Merge' */
  real_T s734_Merge;                   /* '<S734>/Merge' */
  real_T s437_Switch2;                 /* '<S437>/Switch2' */
  real_T s538_Sum1;                    /* '<S538>/Sum1' */
  real_T s558_Merge;                   /* '<S558>/Merge' */
  real_T s477_Lambda;                  /* '<S477>/Read CAN Message' */
  real_T s477_OxygenConcentratio;      /* '<S477>/Read CAN Message' */
  real_T s477_SystemVolts;             /* '<S477>/Read CAN Message' */
  real_T s477_HeaterVolts;             /* '<S477>/Read CAN Message' */
  real_T s477_ReadCANMessage_o6;       /* '<S477>/Read CAN Message' */
  real_T s477_ReadCANMessage_o7;       /* '<S477>/Read CAN Message' */
  real_T s477_ReadCANMessage_o8;       /* '<S477>/Read CAN Message' */
  real_T s477_ReadCANMessage_o9;       /* '<S477>/Read CAN Message' */
  real_T s477_ReadCANMessage_o10;      /* '<S477>/Read CAN Message' */
  real_T s477_Lambda_c;                /* '<S477>/Read CAN Message1' */
  real_T s477_OxygenConcentratio_d;    /* '<S477>/Read CAN Message1' */
  real_T s477_SystemVolts_k;           /* '<S477>/Read CAN Message1' */
  real_T s477_HeaterVolts_d;           /* '<S477>/Read CAN Message1' */
  real_T s477_ReadCANMessage1_o6;      /* '<S477>/Read CAN Message1' */
  real_T s477_ReadCANMessage1_o7;      /* '<S477>/Read CAN Message1' */
  real_T s477_ReadCANMessage1_o8;      /* '<S477>/Read CAN Message1' */
  real_T s477_ReadCANMessage1_o9;      /* '<S477>/Read CAN Message1' */
  real_T s477_ReadCANMessage1_o10;     /* '<S477>/Read CAN Message1' */
  real_T s476_GPS_Speed;               /* '<S476>/Read CAN Message2' */
  real_T s476_GPS_Altitude;            /* '<S476>/Read CAN Message2' */
  real_T s476_GPS_Course;              /* '<S476>/Read CAN Message2' */
  real_T s476_ReadCANMessage2_o5;      /* '<S476>/Read CAN Message2' */
  real_T s476_GPS_Valid;               /* '<S476>/Read CAN Message' */
  real_T s476_ReadCANMessage_o3;       /* '<S476>/Read CAN Message' */
  real_T s476_ReadCANMessage_o4;       /* '<S476>/Read CAN Message' */
  real_T s476_ReadCANMessage_o5;       /* '<S476>/Read CAN Message' */
  real_T s476_ReadCANMessage_o6;       /* '<S476>/Read CAN Message' */
  real_T s476_ReadCANMessage_o7;       /* '<S476>/Read CAN Message' */
  real_T s476_ReadCANMessage_o8;       /* '<S476>/Read CAN Message' */
  real_T s471_Gain1;                   /* '<S471>/Gain1' */
  real_T s521_motohawk_interpolation_1d;/* '<S521>/motohawk_interpolation_1d' */
  real_T s520_Merge;                   /* '<S520>/Merge' */
  real_T s500_Switch;                  /* '<S500>/Switch' */
  real_T s441_Switch2;                 /* '<S441>/Switch2' */
  real_T s477_MathFunction;            /* '<S477>/Math Function' */
  real_T s478_Sum1;                    /* '<S478>/Sum1' */
  real_T s477_MathFunction1;           /* '<S477>/Math Function1' */
  real_T s479_Sum1;                    /* '<S479>/Sum1' */
  real_T s484_Merge;                   /* '<S484>/Merge' */
  real_T s492_Merge;                   /* '<S492>/Merge' */
  real_T s477_MultiportSwitch;         /* '<S477>/Multiport Switch' */
  real_T s435_Sum1;                    /* '<S435>/Sum1' */
  real_T s435_Sum3;                    /* '<S435>/Sum3' */
  real_T s462_Switch;                  /* '<S462>/Switch' */
  real_T s542_Merge;                   /* '<S542>/Merge' */
  real_T s540_Sum1;                    /* '<S540>/Sum1' */
  real_T s579_Merge;                   /* '<S579>/Merge' */
  real_T s389_motohawk_interpolation_2d2;/* '<S389>/motohawk_interpolation_2d2' */
  real_T s389_Sum;                     /* '<S389>/Sum' */
  real_T s380_motohawk_delta_time;     /* '<S380>/motohawk_delta_time' */
  real_T s541_Sum1;                    /* '<S541>/Sum1' */
  real_T s390_Sum;                     /* '<S390>/Sum' */
  real_T s389_NominalAirFlowRate;      /* '<S389>/Nominal Air Flow Rate' */
  real_T s389_ModelAirMassFlowRate;    /* '<S389>/Model Air Mass Flow Rate' */
  real_T s471_Gain;                    /* '<S471>/Gain' */
  real_T s512_motohawk_interpolation_1d;/* '<S512>/motohawk_interpolation_1d' */
  real_T s511_Merge;                   /* '<S511>/Merge' */
  real_T s389_MultiportSwitch;         /* '<S389>/Multiport Switch' */
  real_T s408_Merge;                   /* '<S408>/Merge' */
  real_T s411_Sum1;                    /* '<S411>/Sum1' */
  real_T s409_Merge;                   /* '<S409>/Merge' */
  real_T s414_Sum1;                    /* '<S414>/Sum1' */
  real_T s452_Sum1;                    /* '<S452>/Sum1' */
  real_T s587_Merge;                   /* '<S587>/Merge' */
  real_T s381_motohawk_data_read;      /* '<S381>/motohawk_data_read' */
  real_T s402_Sum1;                    /* '<S402>/Sum1' */
  real_T s768_Merge;                   /* '<S768>/Merge' */
  real_T s768_Switch;                  /* '<S768>/Switch' */
  real_T s769_Merge;                   /* '<S769>/Merge' */
  real_T s769_Switch;                  /* '<S769>/Switch' */
  real_T s92_SparkAdv;                 /* '<S92>/Merge4' */
  real_T s545_Sum1;                    /* '<S545>/Sum1' */
  real_T s613_Merge;                   /* '<S613>/Merge' */
  real_T s539_Sum1;                    /* '<S539>/Sum1' */
  real_T s571_Merge;                   /* '<S571>/Merge' */
  real_T s543_Sum1;                    /* '<S543>/Sum1' */
  real_T s597_Merge;                   /* '<S597>/Merge' */
  real_T s92_FAN1;                     /* '<S92>/Merge12' */
  real_T s92_FAN2;                     /* '<S92>/Merge13' */
  real_T s92_SparkEnergy;              /* '<S92>/Merge5' */
  real_T s824_MinMax1;                 /* '<S824>/MinMax1' */
  real_T s828_MinMax1;                 /* '<S828>/MinMax1' */
  real_T s464_Switch;                  /* '<S464>/Switch' */
  real_T s92_Throttle;                 /* '<S92>/Merge8' */
  real_T s743_ETC;                     /* '<S743>/Saturation' */
  real_T s92_SOI;                      /* '<S92>/Merge1' */
  real_T s92_FPC[8];                   /* '<S92>/Merge2' */
  real_T s64_constreftoatm;            /* '<S64>/const ref to atm' */
  real_T s21_Sum2;                     /* '<S21>/Sum2' */
  real_T s21_Sum1;                     /* '<S21>/Sum1' */
  real_T s21_MinMax[8];                /* '<S21>/MinMax' */
  real_T s92_MakeUpEOI;                /* '<S92>/Merge10' */
  real_T s21_Gain[8];                  /* '<S21>/Gain' */
  real_T s433_Sum3;                    /* '<S433>/Sum3' */
  real_T s476_GPS_Latitude;            /* '<S476>/Read CAN Message1' */
  real_T s476_GPS_Longitude;           /* '<S476>/Read CAN Message1' */
  real_T s544_Sum1;                    /* '<S544>/Sum1' */
  real_T s605_Merge;                   /* '<S605>/Merge' */
  real_T s796_Sum;                     /* '<S796>/Sum' */
  real_T s797_Sum;                     /* '<S797>/Sum' */
  real_T s799_CrankCounter;            /* '<S799>/CrankCounter' */
  real_T s625_motohawk_interpolation_1d;/* '<S625>/motohawk_interpolation_1d' */
  real_T s619_Merge;                   /* '<S619>/Merge' */
  real_T s624_Merge;                   /* '<S624>/Merge' */
  real_T s637_motohawk_interpolation_1d;/* '<S637>/motohawk_interpolation_1d' */
  real_T s629_Merge;                   /* '<S629>/Merge' */
  real_T s636_Merge;                   /* '<S636>/Merge' */
  real_T s655_motohawk_interpolation_1d;/* '<S655>/motohawk_interpolation_1d' */
  real_T s631_Merge;                   /* '<S631>/Merge' */
  real_T s654_Merge;                   /* '<S654>/Merge' */
  real_T s646_motohawk_interpolation_1d;/* '<S646>/motohawk_interpolation_1d' */
  real_T s645_Merge;                   /* '<S645>/Merge' */
  real_T s282_Defaultifnoflow[8];      /* '<S282>/Default (if no flow)' */
  real_T s299_Sum1[8];                 /* '<S299>/Sum1' */
  real_T s298_chargemass[8];           /* '<S298>/charge mass' */
  real_T s427_Merge;                   /* '<S427>/Merge' */
  real_T s445_Sum2;                    /* '<S445>/Sum2' */
  real_T s386_Timer;                   /* '<S380>/Baro Stall State Delay' */
  real_T s275_UnitDelay;               /* '<S275>/Unit Delay' */
  real_T s268_Switch;                  /* '<S268>/Switch' */
  real_T s276_etc;                     /* '<S268>/Ice Break' */
  real_T s105_MultiportSwitch;         /* '<S105>/Multiport Switch' */
  real_T s262_Add;                     /* '<S262>/Add' */
  real_T s259_Product;                 /* '<S259>/Product' */
  real_T s258_Product;                 /* '<S258>/Product' */
  real_T s113_ApplyOffsetstoBaseSparkAdvance1;/* '<S113>/Apply Offsets to Base Spark Advance1' */
  real_T s265_MinMax1;                 /* '<S265>/MinMax1' */
  real_T s260_Switch;                  /* '<S260>/Switch' */
  real_T s113_motohawk_interpolation_2d1;/* '<S113>/motohawk_interpolation_2d1' */
  real_T s110_Sum;                     /* '<S110>/Sum' */
  real_T s173_DontallowsetpointtoevergoabovetheTargetRPM;/* '<S173>/Don't allow setpoint to ever go above the TargetRPM' */
  real_T s182_Sum2;                    /* '<S182>/Sum2' */
  real_T s182_Product2;                /* '<S182>/Product2' */
  real_T s183_Product;                 /* '<S183>/Product' */
  real_T s184_Switch1;                 /* '<S184>/Switch1' */
  real_T s175_Switch;                  /* '<S175>/Switch' */
  real_T s171_Sum;                     /* '<S171>/Sum' */
  real_T s108_Switch4;                 /* '<S108>/Switch4' */
  real_T s108_Switch5;                 /* '<S108>/Switch5' */
  real_T s204_MinMax1;                 /* '<S204>/MinMax1' */
  real_T s194_DontallowsetpointtoeverdropbelowtheTargetRPM;/* '<S194>/Don't allow setpoint to ever drop below the TargetRPM' */
  real_T s220_Sum2;                    /* '<S220>/Sum2' */
  real_T s220_Product2;                /* '<S220>/Product2' */
  real_T s221_Product;                 /* '<S221>/Product' */
  real_T s222_Switch1;                 /* '<S222>/Switch1' */
  real_T s111_MinGovAirPID;            /* '<S111>/Product1' */
  real_T s215_Sum1;                    /* '<S215>/Sum1' */
  real_T s215_Product;                 /* '<S215>/Product' */
  real_T s216_Product;                 /* '<S216>/Product' */
  real_T s111_IdleSpk;                 /* '<S111>/Product' */
  real_T s212_Switch;                  /* '<S212>/Switch' */
  real_T s197_DontallowsetpointtoeverdropbelowtheTargetRPM;/* '<S197>/Don't allow setpoint to ever drop below the TargetRPM' */
  real_T s107_EquivRatioInfo[5];       /* '<S107>/EquivRatioInfo' */
  real_T s132_Product1;                /* '<S132>/Product1' */
  real_T s132_SpkOut;                  /* '<S132>/Product2' */
  real_T s230_O2FuelMult[8];           /* '<S230>/Switch' */
  real_T s229_Switch;                  /* '<S229>/Switch' */
  real_T s249_Sum2;                    /* '<S249>/Sum2' */
  real_T s249_Product2;                /* '<S249>/Product2' */
  real_T s251_Switch1;                 /* '<S251>/Switch1' */
  real_T s250_Product;                 /* '<S250>/Product' */
  real_T s247_Switch3;                 /* '<S247>/Switch3' */
  real_T s247_Switch1;                 /* '<S247>/Switch1' */
  real_T s247_Switch4;                 /* '<S247>/Switch4' */
  real_T s228_Switch;                  /* '<S228>/Switch' */
  real_T s237_Sum2;                    /* '<S237>/Sum2' */
  real_T s237_Product2;                /* '<S237>/Product2' */
  real_T s239_Switch1;                 /* '<S239>/Switch1' */
  real_T s238_Product;                 /* '<S238>/Product' */
  real_T s235_Switch3;                 /* '<S235>/Switch3' */
  real_T s235_Switch1;                 /* '<S235>/Switch1' */
  real_T s235_Switch4;                 /* '<S235>/Switch4' */
  real_T s149_motohawk_interpolation_1d;/* '<S149>/motohawk_interpolation_1d' */
  real_T s147_FuelFlowMassAirflowEquivalenceRatioAirtofuelRatio;/* '<S147>/Fuel Flow = Mass Airflow * Equivalence Ratio // Air-to-fuel Ratio' */
  real_T s144_PerCylinderMassFlowRate; /* '<S144>/Per-Cylinder Mass Flow Rate' */
  real_T s144_ApplyMultipliersforO2KnockControlandEnrichment1[8];/* '<S144>/Apply Multipliers for O2, Knock Control, and Enrichment1' */
  real_T s169_MinMax1;                 /* '<S169>/MinMax1' */
  real_T s170_MinMax1;                 /* '<S170>/MinMax1' */
  real_T s160_chargemass[8];           /* '<S160>/charge mass' */
  real_T s159_Sum1;                    /* '<S159>/Sum1' */
  real_T s150_Sum1;                    /* '<S150>/Sum1' */
  real_T s158_Sum1;                    /* '<S158>/Sum1' */
  real_T s150_Sum;                     /* '<S150>/Sum' */
  real_T s150_Product1;                /* '<S150>/Product1' */
  real_T s157_motohawk_interpolation_1d;/* '<S157>/motohawk_interpolation_1d' */
  real_T s154_motohawk_interpolation_1d;/* '<S154>/motohawk_interpolation_1d' */
  real_T s106_WarmUpRatio;             /* '<S106>/motohawk_interpolation_2d1' */
  real_T s128_Switch;                  /* '<S128>/Switch' */
  real_T s106_IATEnrichment;           /* '<S106>/motohawk_interpolation_2d5' */
  real_T s106_CATEnrichment;           /* '<S106>/motohawk_interpolation_2d6' */
  real_T s106_DesEquivRatio;           /* '<S106>/MinMax' */
  real_T s87_Sum;                      /* '<S87>/Sum' */
  real_T s23_Sum;                      /* '<S23>/Sum' */
  real_T s72_UnitDelay2;               /* '<S72>/Unit Delay2' */
  real_T s82_Switch1;                  /* '<S82>/Switch1' */
  real_T s63_Switch;                   /* '<S63>/Switch' */
  real_T s31_MultiportSwitch;          /* '<S31>/Multiport Switch' */
  real_T s42_Product;                  /* '<S42>/Product' */
  real_T s41_Switch2;                  /* '<S41>/Switch2' */
  real_T s46_Product;                  /* '<S46>/Product' */
  real_T s38_Sum2;                     /* '<S38>/Sum2' */
  real_T s47_Product;                  /* '<S47>/Product' */
  real_T s38_Product2;                 /* '<S38>/Product2' */
  real_T s48_Switch1;                  /* '<S48>/Switch1' */
  real_T s51_MinMax1;                  /* '<S51>/MinMax1' */
  real_T s20_Switch;                   /* '<S20>/Switch' */
  real_T s52_In1;                      /* '<S52>/In1' */
  real_T s27_TestTime;                 /* '<S20>/ETC Test  Manager' */
  real_T s879_Switch;                  /* '<S879>/Switch' */
  uint32_T s473_motohawk_frequency_in; /* '<S473>/motohawk_frequency_in' */
  uint32_T s477_ReadCANMessage_o1;     /* '<S477>/Read CAN Message' */
  uint32_T s477_ReadCANMessage1_o1;    /* '<S477>/Read CAN Message1' */
  uint32_T s476_ReadCANMessage2_o1;    /* '<S476>/Read CAN Message2' */
  uint32_T s476_ReadCANMessage_o1;     /* '<S476>/Read CAN Message' */
  uint32_T s476_ReadCANMessage1_o1;    /* '<S476>/Read CAN Message1' */
  uint32_T s535_Sum;                   /* '<S535>/Sum' */
  uint32_T s333_Sum1;                  /* '<S333>/Sum1' */
  uint32_T s334_motohawk_abs_time;     /* '<S334>/motohawk_abs_time' */
  uint32_T s9_ReadCANRaw_o2;           /* '<S9>/Read CAN Raw' */
  uint32_T s9_ReadCANRaw_o4;           /* '<S9>/Read CAN Raw' */
  uint32_T s10_motohawk_calibration;   /* '<S10>/motohawk_calibration' */
  int16_T s743_motohawk_pwm1;          /* '<S743>/motohawk_pwm1' */
  int16_T s326_Merge;                  /* '<S326>/Merge' */
  uint16_T s473_motohawk_ain4;         /* '<S473>/motohawk_ain4' */
  uint16_T s473_motohawk_ain_read1;    /* '<S473>/motohawk_ain_read1' */
  uint16_T s473_motohawk_ain14;        /* '<S473>/motohawk_ain14' */
  uint16_T s473_motohawk_ain2;         /* '<S473>/motohawk_ain2' */
  uint16_T s473_motohawk_ain1;         /* '<S473>/motohawk_ain1' */
  uint16_T s476_GPS_YearUTC;           /* '<S476>/Data Type Conversion' */
  uint16_T s473_motohawk_ain3;         /* '<S473>/motohawk_ain3' */
  uint16_T s739_SparkSequence_o3[8];   /* '<S739>/Spark Sequence' */
  uint16_T s739_SparkSequence_o4[8];   /* '<S739>/Spark Sequence' */
  uint16_T s617_motohawk_ain;          /* '<S617>/motohawk_ain' */
  uint16_T s618_motohawk_ain;          /* '<S618>/motohawk_ain' */
  uint16_T s618_motohawk_ain1;         /* '<S618>/motohawk_ain1' */
  uint16_T s618_motohawk_ain2;         /* '<S618>/motohawk_ain2' */
  uint16_T s10_motohawk_calibration3;  /* '<S10>/motohawk_calibration3' */
  index_T s418_motohawk_prelookup;     /* '<S418>/motohawk_prelookup' */
  index_T s419_motohawk_prelookup;     /* '<S419>/motohawk_prelookup' */
  index_T s416_motohawk_prelookup;     /* '<S416>/motohawk_prelookup' */
  index_T s422_motohawk_prelookup1;    /* '<S422>/motohawk_prelookup1' */
  index_T s422_Indexes;                /* '<S422>/motohawk_prelookup5' */
  index_T s418_motohawk_prelookup2;    /* '<S418>/motohawk_prelookup2' */
  index_T s419_motohawk_prelookup1;    /* '<S419>/motohawk_prelookup1' */
  index_T s416_motohawk_prelookup1;    /* '<S416>/motohawk_prelookup1' */
  index_T s420_motohawk_prelookup1;    /* '<S420>/motohawk_prelookup1' */
  index_T s420_Indexes;                /* '<S420>/motohawk_prelookup5' */
  index_T s425_motohawk_prelookup2;    /* '<S425>/motohawk_prelookup2' */
  index_T s417_motohawk_prelookup;     /* '<S417>/motohawk_prelookup' */
  index_T s421_motohawk_prelookup;     /* '<S421>/motohawk_prelookup' */
  index_T s385_RPMAccel17Idx;          /* '<S385>/motohawk_prelookup' */
  index_T s423_motohawk_prelookup;     /* '<S423>/motohawk_prelookup' */
  int8_T s22_Merge1[32];               /* '<S22>/Merge1' */
  int8_T s799_DataTypeConversion;      /* '<S799>/Data Type Conversion' */
  int8_T s172_DataTypeConversion;      /* '<S172>/Data Type Conversion' */
  int8_T s172_DataTypeConversion1;     /* '<S172>/Data Type Conversion1' */
  int8_T s72_MultiportSwitch[8];       /* '<S72>/Multiport Switch' */
  int8_T s82_CutArray[8];              /* '<S82>/CutArray' */
  int8_T s27_DC_Override;              /* '<S20>/ETC Test  Manager' */
  int8_T s27_SetpointMode;             /* '<S20>/ETC Test  Manager' */
  uint8_T s432_UnitDelay;              /* '<S432>/Unit Delay' */
  uint8_T s380_motohawk_data_read1;    /* '<S380>/motohawk_data_read1' */
  uint8_T s434_MinMax;                 /* '<S434>/MinMax' */
  uint8_T s744_InjectorSequence_o1[8]; /* '<S744>/Injector Sequence' */
  uint8_T s22_DataTypeConversion5;     /* '<S22>/Data Type Conversion5' */
  uint8_T s476_GPS_SatelliteCount;     /* '<S476>/Data Type Conversion8' */
  uint8_T s476_GPS_SecondsUTC;         /* '<S476>/Data Type Conversion5' */
  uint8_T s476_GPS_MinutesUTC;         /* '<S476>/Data Type Conversion4' */
  uint8_T s476_GPS_HoursUTC;           /* '<S476>/Data Type Conversion3' */
  uint8_T s476_GPS_DayUTC;             /* '<S476>/Data Type Conversion2' */
  uint8_T s476_GPS_MonthUTC;           /* '<S476>/Data Type Conversion1' */
  uint8_T s477_SensorStatus;           /* '<S477>/Data Type Conversion9' */
  uint8_T s477_SensorStatus_e;         /* '<S477>/Data Type Conversion3' */
  uint8_T s432_motohawk_data_read;     /* '<S432>/motohawk_data_read' */
  uint8_T s472_motohawk_encoder_fault; /* '<S472>/motohawk_encoder_fault' */
  uint8_T s472_motohawk_encoder_state; /* '<S472>/motohawk_encoder_state' */
  uint8_T s801_Switch1;                /* '<S801>/Switch1' */
  uint8_T s455_Switch;                 /* '<S455>/Switch' */
  uint8_T s453_State;                  /* '<S432>/Engine State Machine' */
  uint8_T s206_IdleState;              /* '<S191>/IdleStateMachine' */
  uint8_T s72_UnitDelay1;              /* '<S72>/Unit Delay1' */
  uint8_T s82_Switch;                  /* '<S82>/Switch' */
  uint8_T s9_ReadCANRaw_o5;            /* '<S9>/Read CAN Raw' */
  uint8_T s9_ReadCANRaw_o6[8];         /* '<S9>/Read CAN Raw' */
  boolean_T s432_Stall;                /* '<S432>/Relational Operator1' */
  boolean_T s432_Crank;                /* '<S432>/Relational Operator4' */
  boolean_T s432_Run;                  /* '<S432>/Logical Operator1' */
  boolean_T s501_Merge;                /* '<S501>/Merge' */
  boolean_T s477_DataValidState;       /* '<S477>/Data Type Conversion2' */
  boolean_T s477_DataValidState_f;     /* '<S477>/Data Type Conversion6' */
  boolean_T s476_GPS_Valid_l;          /* '<S476>/Data Type Conversion6' */
  boolean_T s408_RelationalOperator4;  /* '<S408>/Relational Operator4' */
  boolean_T s409_RelationalOperator4;  /* '<S409>/Relational Operator4' */
  boolean_T s407_LogicalOperator;      /* '<S407>/Logical Operator' */
  boolean_T s92_AC;                    /* '<S92>/Merge14' */
  boolean_T s745_LogicalOperator;      /* '<S745>/Logical Operator' */
  boolean_T s406_LogicalOperator;      /* '<S406>/Logical Operator' */
  boolean_T s92_FUELP;                 /* '<S92>/Merge7' */
  boolean_T s22_LogicalOperator2[8];   /* '<S22>/Logical Operator2' */
  boolean_T s471_motohawk_din;         /* '<S471>/motohawk_din' */
  boolean_T s504_Merge;                /* '<S504>/Merge' */
  boolean_T s832_LogicalOperator;      /* '<S832>/Logical Operator' */
  boolean_T s743_RelationalOperator4;  /* '<S743>/Relational Operator4' */
  boolean_T s846_Merge[8];             /* '<S846>/Merge' */
  boolean_T s477_SensorFaultState;     /* '<S477>/Data Type Conversion5' */
  boolean_T s477_UsingFreeAreCalState; /* '<S477>/Data Type Conversion7' */
  boolean_T s477_SensorDetectedStatus; /* '<S477>/Data Type Conversion8' */
  boolean_T s477_SensorFaultState_m;   /* '<S477>/Data Type Conversion4' */
  boolean_T s477_UsingFreeAreCalState_o;/* '<S477>/Data Type Conversion1' */
  boolean_T s477_SensorDetectedStatus_m;/* '<S477>/Data Type Conversion' */
  boolean_T s389_LogicalOperator;      /* '<S389>/Logical Operator' */
  boolean_T s739_LogicalOperator1[8];  /* '<S739>/Logical Operator1' */
  boolean_T s799_RelationalOperator1;  /* '<S799>/Relational Operator1' */
  boolean_T s667_LogicalOperator;      /* '<S667>/Logical Operator' */
  boolean_T s665_LogicalOperator;      /* '<S665>/Logical Operator' */
  boolean_T s327_RelationalOperator;   /* '<S327>/Relational Operator' */
  boolean_T s328_RelationalOperator;   /* '<S328>/Relational Operator' */
  boolean_T s427_RelationalOperator3;  /* '<S427>/Relational Operator3' */
  boolean_T s386_Enable;               /* '<S380>/Baro Stall State Delay' */
  boolean_T s172_MultiportSwitch;      /* '<S172>/Multiport Switch' */
  boolean_T s125_Switch1;              /* '<S125>/Switch1' */
  boolean_T s124_Switch1;              /* '<S124>/Switch1' */
  boolean_T s104_LogicalOperator2;     /* '<S104>/Logical Operator2' */
  boolean_T s104_LogicalOperator4;     /* '<S104>/Logical Operator4' */
  boolean_T s121_Switch1;              /* '<S121>/Switch1' */
  boolean_T s104_LogicalOperator1;     /* '<S104>/Logical Operator1' */
  boolean_T s104_LogicalOperator;      /* '<S104>/Logical Operator' */
  boolean_T s205_RelationalOperator;   /* '<S205>/Relational Operator' */
  boolean_T s191_RelationalOperator;   /* '<S191>/Relational Operator' */
  boolean_T s191_RelationalOperator3;  /* '<S191>/Relational Operator3' */
  boolean_T s191_RelationalOperator1;  /* '<S191>/Relational Operator1' */
  boolean_T s191_LogicalOperator;      /* '<S191>/Logical Operator' */
  boolean_T s191_RelationalOperator5;  /* '<S191>/Relational Operator5' */
  boolean_T s207_RelOp;                /* '<S207>/RelOp' */
  boolean_T s111_HitCrossing1;         /* '<S111>/Hit  Crossing1' */
  boolean_T s111_LogicalOperator;      /* '<S111>/Logical Operator' */
  boolean_T s192_RelationalOperator1;  /* '<S192>/Relational Operator1' */
  boolean_T s188_LogicalOperator1;     /* '<S188>/Logical Operator1' */
  boolean_T s132_LogicalOperator;      /* '<S132>/Logical Operator' */
  boolean_T s134_Switch1;              /* '<S134>/Switch1' */
  boolean_T s231_LogicalOperator3;     /* '<S231>/Logical Operator3' */
  boolean_T s226_LogicalOperator;      /* '<S226>/Logical Operator' */
  boolean_T s226_LogicalOperator3;     /* '<S226>/Logical Operator3' */
  boolean_T s226_RelationalOperator5;  /* '<S226>/Relational Operator5' */
  boolean_T s226_LogicalOperator2;     /* '<S226>/Logical Operator2' */
  boolean_T s146_LogicalOperator2;     /* '<S146>/Logical Operator2' */
  boolean_T s167_LogicalOperator;      /* '<S167>/Logical Operator' */
  boolean_T s24_OnlyEnableSparkwhenEnergyisAboveZero;/* '<S24>/Only Enable Spark when Energy is Above Zero' */
  boolean_T s71_DataTypeConversion1[8];/* '<S71>/Data Type Conversion1' */
  boolean_T s70_DataTypeConversion[8]; /* '<S70>/Data Type Conversion' */
  boolean_T s32_LogicalOperator3;      /* '<S32>/Logical Operator3' */
  boolean_T s20_RelationalOperator5;   /* '<S20>/Relational Operator5' */
  boolean_T s20_RelationalOperator2;   /* '<S20>/Relational Operator2' */
  boolean_T s20_RelationalOperator3;   /* '<S20>/Relational Operator3' */
  boolean_T s28_LogicalOperator;       /* '<S28>/Logical Operator' */
  boolean_T s35_RelationalOperator;    /* '<S35>/Relational Operator' */
  boolean_T s27_TestComplete;          /* '<S20>/ETC Test  Manager' */
  boolean_T s862_RelationalOperator;   /* '<S862>/Relational Operator' */
  boolean_T s862_LogicalOperator2;     /* '<S862>/Logical Operator2' */
  boolean_T s866_MPRDState;            /* '<S862>/ECUP Latch' */
  boolean_T s9_ReadCANRaw_o1;          /* '<S9>/Read CAN Raw' */
  boolean_T s9_ReadCANRaw_o3;          /* '<S9>/Read CAN Raw' */
  rtB_SafeDivide_BaseEngineController_LS s328_SafeDivide;/* '<S328>/SafeDivide' */
  rtB_GetInstRPM_BaseEngineController_LS s328_GetInstRPM;/* '<S328>/GetInstRPM' */
  rtB_SafeDivide_BaseEngineController_LS s327_SafeDivide;/* '<S327>/SafeDivide' */
  rtB_GetInstRPM_BaseEngineController_LS s327_GetInstRPM;/* '<S327>/GetInstRPM' */
  rtB_CollectAverage_BaseEngineController_LS s429_CollectAverage;/* '<S429>/Collect Average' */
  rtB_CollectAverage_BaseEngineController_LS s428_CollectAverage;/* '<S428>/Collect Average' */
  rtB_CollectAverage_BaseEngineController_LS s387_CollectAverage;/* '<S387>/Collect Average' */
} BlockIO_BaseEngineController_LS;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T s679_UnitDelay_DSTATE;        /* '<S679>/Unit Delay' */
  real_T s672_UnitDelay1_DSTATE;       /* '<S672>/Unit Delay1' */
  real_T s696_UnitDelay_DSTATE;        /* '<S696>/Unit Delay' */
  real_T s689_UnitDelay1_DSTATE;       /* '<S689>/Unit Delay1' */
  real_T s537_UnitDelay1_DSTATE;       /* '<S537>/Unit Delay1' */
  real_T s551_UnitDelay_DSTATE;        /* '<S551>/Unit Delay' */
  real_T s536_UnitDelay_DSTATE;        /* '<S536>/Unit Delay' */
  real_T s713_UnitDelay_DSTATE;        /* '<S713>/Unit Delay' */
  real_T s706_UnitDelay1_DSTATE;       /* '<S706>/Unit Delay1' */
  real_T s730_UnitDelay_DSTATE;        /* '<S730>/Unit Delay' */
  real_T s723_UnitDelay1_DSTATE;       /* '<S723>/Unit Delay1' */
  real_T s563_UnitDelay_DSTATE;        /* '<S563>/Unit Delay' */
  real_T s538_UnitDelay1_DSTATE;       /* '<S538>/Unit Delay1' */
  real_T s562_UnitDelay_DSTATE;        /* '<S562>/Unit Delay' */
  real_T s560_UnitDelay_DSTATE;        /* '<S560>/Unit Delay' */
  real_T s560_UnitDelay1_DSTATE;       /* '<S560>/Unit Delay1' */
  real_T s560_UnitDelay2_DSTATE;       /* '<S560>/Unit Delay2' */
  real_T s500_UnitDelay_DSTATE;        /* '<S500>/Unit Delay' */
  real_T s525_UnitDelay_DSTATE;        /* '<S525>/Unit Delay' */
  real_T s499_UnitDelay_DSTATE;        /* '<S499>/Unit Delay' */
  real_T s522_UnitDelay_DSTATE;        /* '<S522>/Unit Delay' */
  real_T s500_UnitDelay1_DSTATE;       /* '<S500>/Unit Delay1' */
  real_T s500_UnitDelay3_DSTATE;       /* '<S500>/Unit Delay3' */
  real_T s435_UnitDelay_DSTATE;        /* '<S435>/Unit Delay' */
  real_T s478_UnitDelay1_DSTATE;       /* '<S478>/Unit Delay1' */
  real_T s485_UnitDelay_DSTATE;        /* '<S485>/Unit Delay' */
  real_T s479_UnitDelay1_DSTATE;       /* '<S479>/Unit Delay1' */
  real_T s493_UnitDelay_DSTATE;        /* '<S493>/Unit Delay' */
  real_T s435_UnitDelay1_DSTATE;       /* '<S435>/Unit Delay1' */
  real_T s540_UnitDelay1_DSTATE;       /* '<S540>/Unit Delay1' */
  real_T s580_UnitDelay_DSTATE;        /* '<S580>/Unit Delay' */
  real_T s541_UnitDelay1_DSTATE;       /* '<S541>/Unit Delay1' */
  real_T s390_UnitDelay_DSTATE;        /* '<S390>/Unit Delay' */
  real_T s498_UnitDelay_DSTATE;        /* '<S498>/Unit Delay' */
  real_T s513_UnitDelay_DSTATE;        /* '<S513>/Unit Delay' */
  real_T s408_UnitDelay2_DSTATE;       /* '<S408>/Unit Delay2' */
  real_T s411_UnitDelay_DSTATE;        /* '<S411>/Unit Delay' */
  real_T s409_UnitDelay2_DSTATE;       /* '<S409>/Unit Delay2' */
  real_T s414_UnitDelay_DSTATE;        /* '<S414>/Unit Delay' */
  real_T s450_UnitDelay_DSTATE;        /* '<S450>/Unit Delay' */
  real_T s452_UnitDelay_DSTATE;        /* '<S452>/Unit Delay' */
  real_T s588_UnitDelay_DSTATE;        /* '<S588>/Unit Delay' */
  real_T s402_UnitDelay_DSTATE;        /* '<S402>/Unit Delay' */
  real_T s764_UnitDelay_DSTATE;        /* '<S764>/Unit Delay' */
  real_T s762_UnitDelay_DSTATE;        /* '<S762>/Unit Delay' */
  real_T s768_UnitDelay2_DSTATE;       /* '<S768>/Unit Delay2' */
  real_T s774_UnitDelay_DSTATE;        /* '<S774>/Unit Delay' */
  real_T s769_UnitDelay2_DSTATE;       /* '<S769>/Unit Delay2' */
  real_T s777_UnitDelay_DSTATE;        /* '<S777>/Unit Delay' */
  real_T s770_UnitDelay_DSTATE;        /* '<S770>/Unit Delay' */
  real_T s771_UnitDelay_DSTATE;        /* '<S771>/Unit Delay' */
  real_T s545_UnitDelay1_DSTATE;       /* '<S545>/Unit Delay1' */
  real_T s614_UnitDelay_DSTATE;        /* '<S614>/Unit Delay' */
  real_T s772_UnitDelay_DSTATE;        /* '<S772>/Unit Delay' */
  real_T s768_UnitDelay1_DSTATE;       /* '<S768>/Unit Delay1' */
  real_T s768_UnitDelay3_DSTATE;       /* '<S768>/Unit Delay3' */
  real_T s768_UnitDelay4_DSTATE;       /* '<S768>/Unit Delay4' */
  real_T s769_UnitDelay1_DSTATE;       /* '<S769>/Unit Delay1' */
  real_T s769_UnitDelay3_DSTATE;       /* '<S769>/Unit Delay3' */
  real_T s769_UnitDelay4_DSTATE;       /* '<S769>/Unit Delay4' */
  real_T s785_UnitDelay_DSTATE;        /* '<S785>/Unit Delay' */
  real_T s539_UnitDelay1_DSTATE;       /* '<S539>/Unit Delay1' */
  real_T s572_UnitDelay_DSTATE;        /* '<S572>/Unit Delay' */
  real_T s786_UnitDelay_DSTATE;        /* '<S786>/Unit Delay' */
  real_T s543_UnitDelay1_DSTATE;       /* '<S543>/Unit Delay1' */
  real_T s598_UnitDelay_DSTATE;        /* '<S598>/Unit Delay' */
  real_T s787_UnitDelay_DSTATE;        /* '<S787>/Unit Delay' */
  real_T s789_UnitDelay_DSTATE;        /* '<S789>/Unit Delay' */
  real_T s793_UnitDelay_DSTATE;        /* '<S793>/Unit Delay' */
  real_T s792_UnitDelay_DSTATE;        /* '<S792>/Unit Delay' */
  real_T s544_UnitDelay1_DSTATE;       /* '<S544>/Unit Delay1' */
  real_T s606_UnitDelay_DSTATE;        /* '<S606>/Unit Delay' */
  real_T s408_UnitDelay1_DSTATE;       /* '<S408>/Unit Delay1' */
  real_T s408_UnitDelay3_DSTATE;       /* '<S408>/Unit Delay3' */
  real_T s408_UnitDelay4_DSTATE;       /* '<S408>/Unit Delay4' */
  real_T s409_UnitDelay1_DSTATE;       /* '<S409>/Unit Delay1' */
  real_T s409_UnitDelay3_DSTATE;       /* '<S409>/Unit Delay3' */
  real_T s409_UnitDelay4_DSTATE;       /* '<S409>/Unit Delay4' */
  real_T s676_UnitDelay1_DSTATE;       /* '<S676>/Unit Delay1' */
  real_T s676_UnitDelay_DSTATE;        /* '<S676>/Unit Delay' */
  real_T s676_UnitDelay3_DSTATE;       /* '<S676>/Unit Delay3' */
  real_T s676_UnitDelay4_DSTATE;       /* '<S676>/Unit Delay4' */
  real_T s693_UnitDelay1_DSTATE;       /* '<S693>/Unit Delay1' */
  real_T s693_UnitDelay_DSTATE;        /* '<S693>/Unit Delay' */
  real_T s693_UnitDelay3_DSTATE;       /* '<S693>/Unit Delay3' */
  real_T s693_UnitDelay4_DSTATE;       /* '<S693>/Unit Delay4' */
  real_T s710_UnitDelay1_DSTATE;       /* '<S710>/Unit Delay1' */
  real_T s710_UnitDelay_DSTATE;        /* '<S710>/Unit Delay' */
  real_T s710_UnitDelay3_DSTATE;       /* '<S710>/Unit Delay3' */
  real_T s710_UnitDelay4_DSTATE;       /* '<S710>/Unit Delay4' */
  real_T s727_UnitDelay1_DSTATE;       /* '<S727>/Unit Delay1' */
  real_T s727_UnitDelay_DSTATE;        /* '<S727>/Unit Delay' */
  real_T s727_UnitDelay3_DSTATE;       /* '<S727>/Unit Delay3' */
  real_T s727_UnitDelay4_DSTATE;       /* '<S727>/Unit Delay4' */
  real_T s796_UnitDelay_DSTATE;        /* '<S796>/Unit Delay' */
  real_T s797_UnitDelay_DSTATE;        /* '<S797>/Unit Delay' */
  real_T s799_CrankCounter_DSTATE;     /* '<S799>/CrankCounter' */
  real_T s619_UnitDelay_DSTATE;        /* '<S619>/Unit Delay' */
  real_T s626_UnitDelay_DSTATE;        /* '<S626>/Unit Delay' */
  real_T s629_UnitDelay_DSTATE;        /* '<S629>/Unit Delay' */
  real_T s638_UnitDelay_DSTATE;        /* '<S638>/Unit Delay' */
  real_T s631_UnitDelay_DSTATE;        /* '<S631>/Unit Delay' */
  real_T s656_UnitDelay_DSTATE;        /* '<S656>/Unit Delay' */
  real_T s630_UnitDelay_DSTATE;        /* '<S630>/Unit Delay' */
  real_T s647_UnitDelay_DSTATE;        /* '<S647>/Unit Delay' */
  real_T s299_UnitDelay_DSTATE[8];     /* '<S299>/Unit Delay' */
  real_T s327_UnitDelay2_DSTATE;       /* '<S327>/Unit Delay2' */
  real_T s328_UnitDelay2_DSTATE;       /* '<S328>/Unit Delay2' */
  real_T s427_UnitDelay2_DSTATE;       /* '<S427>/Unit Delay2' */
  real_T s442_UnitDelay_DSTATE;        /* '<S442>/Unit Delay' */
  real_T s445_UnitDelay_DSTATE;        /* '<S445>/Unit Delay' */
  real_T s427_UnitDelay1_DSTATE;       /* '<S427>/Unit Delay1' */
  real_T s427_UnitDelay3_DSTATE;       /* '<S427>/Unit Delay3' */
  real_T s427_UnitDelay4_DSTATE;       /* '<S427>/Unit Delay4' */
  real_T s275_UnitDelay_DSTATE;        /* '<S275>/Unit Delay' */
  real_T s260_UnitDelay_DSTATE;        /* '<S260>/Unit Delay' */
  real_T s173_UnitDelay_DSTATE;        /* '<S173>/Unit Delay' */
  real_T s183_UnitDelay_DSTATE;        /* '<S183>/Unit Delay' */
  real_T s184_UnitDelay_DSTATE;        /* '<S184>/Unit Delay' */
  real_T s209_UnitDelay_DSTATE;        /* '<S209>/Unit Delay' */
  real_T s211_UnitDelay_DSTATE;        /* '<S211>/Unit Delay' */
  real_T s111_UnitDelay3_DSTATE;       /* '<S111>/Unit Delay3' */
  real_T s111_UnitDelay1_DSTATE;       /* '<S111>/Unit Delay1' */
  real_T s190_state_DSTATE;            /* '<S190>/state' */
  real_T s111_UnitDelay2_DSTATE;       /* '<S111>/Unit Delay2' */
  real_T s194_UnitDelay_DSTATE;        /* '<S194>/Unit Delay' */
  real_T s221_UnitDelay_DSTATE;        /* '<S221>/Unit Delay' */
  real_T s222_UnitDelay_DSTATE;        /* '<S222>/Unit Delay' */
  real_T s216_UnitDelay_DSTATE;        /* '<S216>/Unit Delay' */
  real_T s197_UnitDelay_DSTATE;        /* '<S197>/Unit Delay' */
  real_T s133_state_DSTATE;            /* '<S133>/state' */
  real_T s251_UnitDelay_DSTATE;        /* '<S251>/Unit Delay' */
  real_T s250_UnitDelay_DSTATE;        /* '<S250>/Unit Delay' */
  real_T s247_UnitDelay1_DSTATE;       /* '<S247>/Unit Delay1' */
  real_T s247_UnitDelay_DSTATE;        /* '<S247>/Unit Delay' */
  real_T s247_UnitDelay2_DSTATE;       /* '<S247>/Unit Delay2' */
  real_T s239_UnitDelay_DSTATE;        /* '<S239>/Unit Delay' */
  real_T s238_UnitDelay_DSTATE;        /* '<S238>/Unit Delay' */
  real_T s235_UnitDelay1_DSTATE;       /* '<S235>/Unit Delay1' */
  real_T s235_UnitDelay_DSTATE;        /* '<S235>/Unit Delay' */
  real_T s235_UnitDelay2_DSTATE;       /* '<S235>/Unit Delay2' */
  real_T s159_UnitDelay_DSTATE;        /* '<S159>/Unit Delay' */
  real_T s158_UnitDelay_DSTATE;        /* '<S158>/Unit Delay' */
  real_T s101_UnitDelay_DSTATE;        /* '<S101>/Unit Delay' */
  real_T s87_UnitDelay_DSTATE;         /* '<S87>/Unit Delay' */
  real_T s72_UnitDelay2_DSTATE;        /* '<S72>/Unit Delay2' */
  real_T s20_UnitDelay_DSTATE;         /* '<S20>/Unit Delay' */
  real_T s55_UnitDelay_DSTATE;         /* '<S55>/Unit Delay' */
  real_T s46_UnitDelay_DSTATE;         /* '<S46>/Unit Delay' */
  real_T s42_UnitDelay_DSTATE;         /* '<S42>/Unit Delay' */
  real_T s44_UnitDelay_DSTATE;         /* '<S44>/Unit Delay' */
  real_T s47_UnitDelay_DSTATE;         /* '<S47>/Unit Delay' */
  real_T s48_UnitDelay_DSTATE;         /* '<S48>/Unit Delay' */
  real_T s868_UnitDelay_DSTATE;        /* '<S868>/Unit Delay' */
  real_T s868_UnitDelay1_DSTATE;       /* '<S868>/Unit Delay1' */
  real_T s386_TOld;                    /* '<S380>/Baro Stall State Delay' */
  real_T s27_TimerOld;                 /* '<S20>/ETC Test  Manager' */
  uint32_T s468_UnitDelay_DSTATE;      /* '<S468>/Unit Delay' */
  uint32_T s535_UnitDelay_DSTATE;      /* '<S535>/Unit Delay' */
  uint32_T s671_motohawk_delta_time_DWORK1;/* '<S671>/motohawk_delta_time' */
  uint32_T s688_motohawk_delta_time_DWORK1;/* '<S688>/motohawk_delta_time' */
  uint32_T s460_motohawk_delta_time_DWORK1;/* '<S460>/motohawk_delta_time' */
  uint32_T s546_motohawk_delta_time_DWORK1;/* '<S546>/motohawk_delta_time' */
  uint32_T s529_motohawk_delta_time_DWORK1;/* '<S529>/motohawk_delta_time' */
  uint32_T s705_motohawk_delta_time_DWORK1;/* '<S705>/motohawk_delta_time' */
  uint32_T s722_motohawk_delta_time_DWORK1;/* '<S722>/motohawk_delta_time' */
  uint32_T s563_motohawk_delta_time_DWORK1;/* '<S563>/motohawk_delta_time' */
  uint32_T s559_motohawk_delta_time_DWORK1;/* '<S559>/motohawk_delta_time' */
  uint32_T s516_motohawk_delta_time_DWORK1;/* '<S516>/motohawk_delta_time' */
  uint32_T s525_motohawk_delta_time_DWORK1;/* '<S525>/motohawk_delta_time' */
  uint32_T s480_motohawk_delta_time_DWORK1;/* '<S480>/motohawk_delta_time' */
  uint32_T s488_motohawk_delta_time_DWORK1;/* '<S488>/motohawk_delta_time' */
  uint32_T s462_motohawk_delta_time_DWORK1;/* '<S462>/motohawk_delta_time' */
  uint32_T s575_motohawk_delta_time_DWORK1;/* '<S575>/motohawk_delta_time' */
  uint32_T s380_motohawk_delta_time_DWORK1;/* '<S380>/motohawk_delta_time' */
  uint32_T s393_motohawk_delta_time_DWORK1;/* '<S393>/motohawk_delta_time' */
  uint32_T s507_motohawk_delta_time_DWORK1;/* '<S507>/motohawk_delta_time' */
  uint32_T s450_motohawk_delta_time_DWORK1;/* '<S450>/motohawk_delta_time' */
  uint32_T s583_motohawk_delta_time_DWORK1;/* '<S583>/motohawk_delta_time' */
  uint32_T s381_motohawk_delta_time_DWORK1;/* '<S381>/motohawk_delta_time' */
  uint32_T s763_motohawk_delta_time_DWORK1;/* '<S763>/motohawk_delta_time' */
  uint32_T s760_motohawk_delta_time_DWORK1;/* '<S760>/motohawk_delta_time' */
  uint32_T s765_motohawk_delta_time_DWORK1;/* '<S765>/motohawk_delta_time' */
  uint32_T s766_motohawk_delta_time_DWORK1;/* '<S766>/motohawk_delta_time' */
  uint32_T s767_motohawk_delta_time_DWORK1;/* '<S767>/motohawk_delta_time' */
  uint32_T s609_motohawk_delta_time_DWORK1;/* '<S609>/motohawk_delta_time' */
  uint32_T s782_motohawk_delta_time_DWORK1;/* '<S782>/motohawk_delta_time' */
  uint32_T s567_motohawk_delta_time_DWORK1;/* '<S567>/motohawk_delta_time' */
  uint32_T s783_motohawk_delta_time_DWORK1;/* '<S783>/motohawk_delta_time' */
  uint32_T s593_motohawk_delta_time_DWORK1;/* '<S593>/motohawk_delta_time' */
  uint32_T s784_motohawk_delta_time_DWORK1;/* '<S784>/motohawk_delta_time' */
  uint32_T s788_motohawk_delta_time_DWORK1;/* '<S788>/motohawk_delta_time' */
  uint32_T s791_motohawk_delta_time_DWORK1;/* '<S791>/motohawk_delta_time' */
  uint32_T s790_motohawk_delta_time_DWORK1;/* '<S790>/motohawk_delta_time' */
  uint32_T s836_motohawk_delta_time_DWORK1;/* '<S836>/motohawk_delta_time' */
  uint32_T s464_motohawk_delta_time_DWORK1;/* '<S464>/motohawk_delta_time' */
  uint32_T s601_motohawk_delta_time_DWORK1;/* '<S601>/motohawk_delta_time' */
  uint32_T s527_motohawk_delta_time_DWORK1;/* '<S527>/motohawk_delta_time' */
  uint32_T s620_motohawk_delta_time_DWORK1;/* '<S620>/motohawk_delta_time' */
  uint32_T s632_motohawk_delta_time_DWORK1;/* '<S632>/motohawk_delta_time' */
  uint32_T s650_motohawk_delta_time_DWORK1;/* '<S650>/motohawk_delta_time' */
  uint32_T s641_motohawk_delta_time_DWORK1;/* '<S641>/motohawk_delta_time' */
  uint32_T s293_motohawk_delta_time_DWORK1;/* '<S293>/motohawk_delta_time' */
  uint32_T s294_motohawk_delta_time_DWORK1;/* '<S294>/motohawk_delta_time' */
  uint32_T s361_motohawk_delta_time_DWORK1;/* '<S361>/motohawk_delta_time' */
  uint32_T s364_motohawk_delta_time_DWORK1;/* '<S364>/motohawk_delta_time' */
  uint32_T s362_motohawk_delta_time_DWORK1;/* '<S362>/motohawk_delta_time' */
  uint32_T s363_motohawk_delta_time_DWORK1;/* '<S363>/motohawk_delta_time' */
  uint32_T s297_motohawk_delta_time_DWORK1;/* '<S297>/motohawk_delta_time' */
  uint32_T s445_motohawk_delta_time_DWORK1;/* '<S445>/motohawk_delta_time' */
  uint32_T s427_motohawk_delta_time_DWORK1;/* '<S427>/motohawk_delta_time' */
  uint32_T s277_motohawk_delta_time_DWORK1;/* '<S277>/motohawk_delta_time' */
  uint32_T s276_temporalCounter_i1;    /* '<S268>/Ice Break' */
  uint32_T s276_presentTicks;          /* '<S268>/Ice Break' */
  uint32_T s276_elapsedTicks;          /* '<S268>/Ice Break' */
  uint32_T s276_previousTicks;         /* '<S268>/Ice Break' */
  uint32_T s173_motohawk_delta_time_DWORK1;/* '<S173>/motohawk_delta_time' */
  uint32_T s184_motohawk_delta_time_DWORK1;/* '<S184>/motohawk_delta_time' */
  uint32_T s190_motohawk_delta_time_DWORK1;/* '<S190>/motohawk_delta_time' */
  uint32_T s194_motohawk_delta_time_DWORK1;/* '<S194>/motohawk_delta_time' */
  uint32_T s222_motohawk_delta_time_DWORK1;/* '<S222>/motohawk_delta_time' */
  uint32_T s197_motohawk_delta_time_DWORK1;/* '<S197>/motohawk_delta_time' */
  uint32_T s135_motohawk_delta_time_DWORK1;/* '<S135>/motohawk_delta_time' */
  uint32_T s133_motohawk_delta_time_DWORK1;/* '<S133>/motohawk_delta_time' */
  uint32_T s251_motohawk_delta_time_DWORK1;/* '<S251>/motohawk_delta_time' */
  uint32_T s255_motohawk_delta_time_DWORK1;/* '<S255>/motohawk_delta_time' */
  uint32_T s257_motohawk_delta_time_DWORK1;/* '<S257>/motohawk_delta_time' */
  uint32_T s256_motohawk_delta_time_DWORK1;/* '<S256>/motohawk_delta_time' */
  uint32_T s239_motohawk_delta_time_DWORK1;/* '<S239>/motohawk_delta_time' */
  uint32_T s243_motohawk_delta_time_DWORK1;/* '<S243>/motohawk_delta_time' */
  uint32_T s245_motohawk_delta_time_DWORK1;/* '<S245>/motohawk_delta_time' */
  uint32_T s244_motohawk_delta_time_DWORK1;/* '<S244>/motohawk_delta_time' */
  uint32_T s156_motohawk_delta_time_DWORK1;/* '<S156>/motohawk_delta_time' */
  uint32_T s155_motohawk_delta_time_DWORK1;/* '<S155>/motohawk_delta_time' */
  uint32_T s101_motohawk_delta_time_DWORK1;/* '<S101>/motohawk_delta_time' */
  uint32_T s63_motohawk_delta_time_DWORK1;/* '<S63>/motohawk_delta_time' */
  uint32_T s55_motohawk_delta_time_DWORK1;/* '<S55>/motohawk_delta_time' */
  uint32_T s43_motohawk_delta_time_DWORK1;/* '<S43>/motohawk_delta_time' */
  uint32_T s48_motohawk_delta_time_DWORK1;/* '<S48>/motohawk_delta_time' */
  uint32_T s879_motohawk_delta_time_DWORK1;/* '<S879>/motohawk_delta_time' */
  uint32_T s870_motohawk_delta_time_DWORK1;/* '<S870>/motohawk_delta_time' */
  int_T s111_HitCrossing1_MODE;        /* '<S111>/Hit  Crossing1' */
  uint16_T s327_UnitDelay1_DSTATE;     /* '<S327>/Unit Delay1' */
  uint16_T s328_UnitDelay1_DSTATE;     /* '<S328>/Unit Delay1' */
  uint16_T s744_InjectorSequence_DWORK2;/* '<S744>/Injector Sequence' */
  int8_T s429_UnitDelay_DSTATE;        /* '<S429>/Unit Delay' */
  int8_T s428_UnitDelay_DSTATE;        /* '<S428>/Unit Delay' */
  int8_T s387_UnitDelay_DSTATE;        /* '<S387>/Unit Delay' */
  uint8_T s432_UnitDelay_DSTATE;       /* '<S432>/Unit Delay' */
  uint8_T s455_CrankCounter_DSTATE;    /* '<S455>/CrankCounter' */
  uint8_T s72_UnitDelay1_DSTATE;       /* '<S72>/Unit Delay1' */
  boolean_T s500_UnitDelay2_DSTATE;    /* '<S500>/Unit Delay2' */
  boolean_T s406_UnitDelay_DSTATE;     /* '<S406>/Unit Delay' */
  boolean_T s768_UnitDelay5_DSTATE;    /* '<S768>/Unit Delay5' */
  boolean_T s769_UnitDelay5_DSTATE;    /* '<S769>/Unit Delay5' */
  boolean_T s457_UnitDelay_DSTATE;     /* '<S457>/Unit Delay' */
  boolean_T s668_InitialConditionisTrue_DSTATE;/* '<S668>/Initial Condition is True' */
  boolean_T s666_InitialConditionisTrue_DSTATE;/* '<S666>/Initial Condition is True' */
  boolean_T s377_UnitDelay_DSTATE;     /* '<S377>/Unit Delay' */
  boolean_T s378_UnitDelay_DSTATE;     /* '<S378>/Unit Delay' */
  boolean_T s379_UnitDelay_DSTATE;     /* '<S379>/Unit Delay' */
  boolean_T s314_UnitDelay_DSTATE[8];  /* '<S314>/Unit Delay' */
  boolean_T s272_UnitDelay_DSTATE;     /* '<S272>/Unit Delay' */
  boolean_T s273_UnitDelay_DSTATE;     /* '<S273>/Unit Delay' */
  boolean_T s274_UnitDelay_DSTATE;     /* '<S274>/Unit Delay' */
  boolean_T s263_InitialConditionisTrue_DSTATE;/* '<S263>/Initial Condition is True' */
  boolean_T s110_UnitDelay_DSTATE;     /* '<S110>/Unit Delay' */
  boolean_T s140_UnitDelay_DSTATE;     /* '<S140>/Unit Delay' */
  boolean_T s141_UnitDelay_DSTATE;     /* '<S141>/Unit Delay' */
  boolean_T s142_UnitDelay_DSTATE;     /* '<S142>/Unit Delay' */
  boolean_T s125_UnitDelay_DSTATE;     /* '<S125>/Unit Delay' */
  boolean_T s124_UnitDelay_DSTATE;     /* '<S124>/Unit Delay' */
  boolean_T s122_UnitDelay_DSTATE;     /* '<S122>/Unit Delay' */
  boolean_T s123_UnitDelay_DSTATE;     /* '<S123>/Unit Delay' */
  boolean_T s121_UnitDelay_DSTATE;     /* '<S121>/Unit Delay' */
  boolean_T s120_UnitDelay_DSTATE;     /* '<S120>/Unit Delay' */
  boolean_T s187_UnitDelay_DSTATE;     /* '<S187>/Unit Delay' */
  boolean_T s134_UnitDelay_DSTATE;     /* '<S134>/Unit Delay' */
  boolean_T s254_UnitDelay_DSTATE;     /* '<S254>/Unit Delay' */
  boolean_T s242_UnitDelay_DSTATE;     /* '<S242>/Unit Delay' */
  boolean_T s45_UnitDelay_DSTATE;      /* '<S45>/Unit Delay' */
  boolean_T s867_UnitDelay8_DSTATE;    /* '<S867>/Unit Delay8' */
  boolean_T s867_UnitDelay6_DSTATE;    /* '<S867>/Unit Delay6' */
  boolean_T s867_UnitDelay7_DSTATE;    /* '<S867>/Unit Delay7' */
  boolean_T s863_UnitDelay_DSTATE;     /* '<S863>/Unit Delay' */
  boolean_T s869_UnitDelay2_DSTATE;    /* '<S869>/Unit Delay2' */
  boolean_T s862_UnitDelay5_DSTATE;    /* '<S862>/Unit Delay5' */
  boolean_T s869_UnitDelay_DSTATE;     /* '<S869>/Unit Delay' */
  boolean_T s869_UnitDelay1_DSTATE;    /* '<S869>/Unit Delay1' */
  boolean_T s862_UnitDelay3_DSTATE;    /* '<S862>/Unit Delay3' */
  boolean_T s862_UnitDelay4_DSTATE;    /* '<S862>/Unit Delay4' */
  int8_T s326_If_ActiveSubsystem;      /* '<S326>/If' */
  uint8_T s1_motohawk_trigger1_DWORK1; /* '<S1>/motohawk_trigger1' */
  uint8_T s5_motohawk_trigger1_DWORK1; /* '<S5>/motohawk_trigger1' */
  uint8_T s5_motohawk_trigger_DWORK1;  /* '<S5>/motohawk_trigger' */
  uint8_T s5_motohawk_trigger2_DWORK1; /* '<S5>/motohawk_trigger2' */
  uint8_T s5_motohawk_trigger3_DWORK1; /* '<S5>/motohawk_trigger3' */
  uint8_T s5_motohawk_trigger4_DWORK1; /* '<S5>/motohawk_trigger4' */
  uint8_T s5_motohawk_trigger5_DWORK1; /* '<S5>/motohawk_trigger5' */
  uint8_T s5_motohawk_trigger6_DWORK1; /* '<S5>/motohawk_trigger6' */
  uint8_T s5_motohawk_trigger7_DWORK1; /* '<S5>/motohawk_trigger7' */
  uint8_T s4_motohawk_trigger1_DWORK1; /* '<S4>/motohawk_trigger1' */
  uint8_T s474_motohawk_trigger_DWORK1;/* '<S474>/motohawk_trigger' */
  uint8_T s432_motohawk_trigger_DWORK1;/* '<S432>/motohawk_trigger' */
  uint8_T s542_motohawk_trigger5_DWORK1;/* '<S542>/motohawk_trigger5' */
  uint8_T s474_motohawk_trigger1_DWORK1;/* '<S474>/motohawk_trigger1' */
  uint8_T s14_motohawk_trigger1_DWORK1;/* '<S14>/motohawk_trigger1' */
  uint8_T s14_motohawk_trigger_DWORK1; /* '<S14>/motohawk_trigger' */
  uint8_T s13_motohawk_trigger_DWORK1; /* '<S13>/motohawk_trigger' */
  uint8_T s659_motohawk_trigger_DWORK1;/* '<S659>/motohawk_trigger' */
  uint8_T s660_motohawk_trigger_DWORK1;/* '<S660>/motohawk_trigger' */
  uint8_T s799_motohawk_trigger1_DWORK1;/* '<S799>/motohawk_trigger1' */
  uint8_T s307_motohawk_trigger_DWORK1;/* '<S307>/motohawk_trigger' */
  uint8_T s453_is_c2_BaseEngineController_LS;/* '<S432>/Engine State Machine' */
  uint8_T s386_is_c19_BaseEngineController_LS;/* '<S380>/Baro Stall State Delay' */
  uint8_T s276_is_active_c3_BaseEngineController_LS;/* '<S268>/Ice Break' */
  uint8_T s276_is_c3_BaseEngineController_LS;/* '<S268>/Ice Break' */
  uint8_T s93_motohawk_trigger1_DWORK1;/* '<S93>/motohawk_trigger1' */
  uint8_T s206_is_active_c12_BaseEngineController_LS;/* '<S191>/IdleStateMachine' */
  uint8_T s206_is_c12_BaseEngineController_LS;/* '<S191>/IdleStateMachine' */
  uint8_T s72_motohawk_trigger_DWORK1; /* '<S72>/motohawk_trigger' */
  uint8_T s27_is_c9_BaseEngineController_LS;/* '<S20>/ETC Test  Manager' */
  uint8_T s866_is_c8_BaseEngineController_LS;/* '<S862>/ECUP Latch' */
  boolean_T s526_Memory_PreviousInput; /* '<S526>/Memory' */
  boolean_T s744_InjectorSequence_DWORK1[8];/* '<S744>/Injector Sequence' */
  boolean_T s336_Memory_PreviousInput; /* '<S336>/Memory' */
  boolean_T s339_Memory_PreviousInput; /* '<S339>/Memory' */
  boolean_T s229_Multiplyby10ifnotyetenabled_FirstOutputTime;/* '<S229>/Multiply by 1.0 if not yet enabled' */
  boolean_T s228_Multiplyby10ifnotyetenabled_FirstOutputTime;/* '<S228>/Multiply by 1.0 if not yet enabled' */
  boolean_T s883_Memory_PreviousInput; /* '<S883>/Memory' */
  boolean_T s15_Stall_MODE;            /* '<S15>/Stall' */
  boolean_T s15_Crank_MODE;            /* '<S15>/Crank' */
  boolean_T s380_CaptureSignalAtStartup_MODE;/* '<S380>/Capture Signal At Startup' */
  boolean_T s384_CaptureECTAtStartup_MODE;/* '<S384>/Capture ECT At Startup' */
  boolean_T s15_Run_MODE;              /* '<S15>/Run' */
  boolean_T s22_PassThrough1_MODE;     /* '<S22>/PassThrough1' */
  boolean_T s22_PassThrough3_MODE;     /* '<S22>/PassThrough3' */
  boolean_T s22_SequenceCutMachine_MODE;/* '<S22>/SequenceCutMachine' */
  boolean_T s22_PassThrough5_MODE;     /* '<S22>/PassThrough5' */
  boolean_T s22_PassThrough4_MODE;     /* '<S22>/PassThrough4' */
  boolean_T s384_CaptureIATAtStartup_MODE;/* '<S384>/Capture IAT At Startup' */
  boolean_T s14_ElectronicThrottleController_MODE;/* '<S14>/Electronic Throttle Controller' */
  boolean_T s468_TriggeredSubsystem_MODE;/* '<S468>/Triggered Subsystem' */
  boolean_T s287_MisfireDiagSub_MODE;  /* '<S287>/MisfireDiagSub' */
  boolean_T s145_DeltaTPSTransientFueling_MODE;/* '<S145>/Delta TPS Transient Fueling' */
  boolean_T s150_ECTTransientFueling_MODE;/* '<S150>/ECT Transient Fueling' */
  boolean_T s150_OXYTransientFueling_MODE;/* '<S150>/OXY Transient Fueling' */
  boolean_T s31_PassThrough_MODE;      /* '<S31>/PassThrough' */
  rtDW_CollectAverage_BaseEngineController_LS s429_CollectAverage;/* '<S429>/Collect Average' */
  rtDW_CollectAverage_BaseEngineController_LS s428_CollectAverage;/* '<S428>/Collect Average' */
  rtDW_CollectAverage_BaseEngineController_LS s387_CollectAverage;/* '<S387>/Collect Average' */
} D_Work_BaseEngineController_LS;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState HitCrossing1_Input_ZCE;   /* '<S111>/Hit  Crossing1' */
  ZCSigState ResetTasksCompleteToFalse_Trig_ZCE;/* '<S32>/Reset TasksComplete To False' */
  ZCSigState ResetTasksCompleteToTrue_Trig_ZCE;/* '<S20>/Reset TasksComplete To True' */
  ZCSigState ShutdownpoweronECU565563_Trig_ZCE;/* '<S869>/Shutdown power on ECU565//563' */
  ZCSigState SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE;/* '<S869>/Save NV Vars one tick before MPRD off' */
  ZCSigState ProcessorReboot_Trig_ZCE; /* '<S869>/Processor Reboot' */
  ZCSigState PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE;/* '<S869>/Post Shutdown two ticks before MPRD off' */
  ZCSigState ShutdownpoweronECU565563_Trig_ZCE_l;/* '<S867>/Shutdown power on ECU565//563' */
  ZCSigState SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE_m;/* '<S867>/Save NV Vars one tick before MPRD off' */
  ZCSigState ProcessorReboot_Trig_ZCE_h;/* '<S867>/Processor Reboot' */
  ZCSigState PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE_h;/* '<S867>/Post Shutdown two ticks before MPRD off' */
  ZCSigState Clear_Trig_ZCE;           /* '<S865>/Clear' */
  ZCSigState Clear_Trig_ZCE_k;         /* '<S864>/Clear' */
} PrevZCSigStates_BaseEngineController_LS;

/* Invariant block signals (auto storage) */
typedef struct {
  const real_T s744_Gain4;             /* '<S744>/Gain4' */
  const real_T s95_motohawk_replicate2;/* '<S95>/motohawk_replicate2' */
  const real_T s95_motohawk_replicate[8];/* '<S95>/motohawk_replicate' */
  const uint32_T s744_DataTypeConversion5;/* '<S744>/Data Type Conversion5' */
} ConstBlockIO_BaseEngineController_LS;

/* Constant parameters (auto storage) */
typedef struct {
  /* Pooled Parameter (Expression: [1,2,3,4,5,6,7,8])
   * Referenced by:
   *   '<S313>/Constant'
   *   '<S324>/Constant'
   *   '<S325>/Constant'
   */
  real_T pooled76[8];

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S120>/Combinatorial  Logic'
   *   '<S121>/Combinatorial  Logic'
   *   '<S122>/Combinatorial  Logic'
   *   '<S123>/Combinatorial  Logic'
   *   '<S124>/Combinatorial  Logic'
   *   '<S125>/Combinatorial  Logic'
   *   '<S134>/Combinatorial  Logic'
   *   '<S140>/Combinatorial  Logic'
   *   '<S141>/Combinatorial  Logic'
   *   '<S142>/Combinatorial  Logic'
   *   '<S272>/Combinatorial  Logic'
   *   '<S273>/Combinatorial  Logic'
   *   '<S274>/Combinatorial  Logic'
   *   '<S377>/Combinatorial  Logic'
   *   '<S378>/Combinatorial  Logic'
   *   '<S379>/Combinatorial  Logic'
   *   '<S45>/Combinatorial  Logic'
   *   '<S242>/Combinatorial  Logic'
   *   '<S254>/Combinatorial  Logic'
   */
  boolean_T pooled809[8];

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S883>/Logic'
   *   '<S526>/Logic'
   *   '<S336>/Logic'
   *   '<S339>/Logic'
   */
  boolean_T pooled810[16];
} ConstParam_BaseEngineController_LS;

/* Real-time Model Data Structure */
struct RT_MODEL_BaseEngineController_LS {
  const char_T *errorStatus;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    uint32_T clockTickH0;
    boolean_T firstInitCondFlag;
  } Timing;
};

/* Block signals (auto storage) */
extern BlockIO_BaseEngineController_LS BaseEngineController_LS_B;

/* Block states (auto storage) */
extern D_Work_BaseEngineController_LS BaseEngineController_LS_DWork;
extern const ConstBlockIO_BaseEngineController_LS BaseEngineController_LS_ConstB;/* constant block i/o */

/* Constant parameters (auto storage) */
extern const ConstParam_BaseEngineController_LS BaseEngineController_LS_ConstP;

/* External data declarations for dependent source files */

/* Zero-crossing (trigger) state */
extern PrevZCSigStates_BaseEngineController_LS
  BaseEngineController_LS_PrevZCSigState;

/* Model entry point functions */
extern void BaseEngineController_LS_initialize(boolean_T firstTime);
extern void BaseEngineController_LS_step(void);
extern void BaseEngineController_LS_terminate(void);

/* Real-time Model object */
extern struct RT_MODEL_BaseEngineController_LS *const BaseEngineController_LS_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : BaseEngineController_LS
 * '<S1>'   : BaseEngineController_LS/CCP CAN Protocol
 * '<S2>'   : BaseEngineController_LS/Foreground
 * '<S3>'   : BaseEngineController_LS/Main Power Relay
 * '<S4>'   : BaseEngineController_LS/CCP CAN Protocol/CCP CAN Protocol External Trig1
 * '<S5>'   : BaseEngineController_LS/CCP CAN Protocol/CCP Triggers
 * '<S6>'   : BaseEngineController_LS/CCP CAN Protocol/CCP CAN Protocol External Trig1/CCP Command Driver
 * '<S7>'   : BaseEngineController_LS/CCP CAN Protocol/CCP CAN Protocol External Trig1/CCP Daq Processing
 * '<S8>'   : BaseEngineController_LS/CCP CAN Protocol/CCP CAN Protocol External Trig1/CCP IDLE Processing
 * '<S9>'   : BaseEngineController_LS/CCP CAN Protocol/CCP CAN Protocol External Trig1/CCP Command Driver/While new CCP Command
 * '<S10>'  : BaseEngineController_LS/CCP CAN Protocol/CCP CAN Protocol External Trig1/CCP Command Driver/While new CCP Command/Adjust ID
 * '<S11>'  : BaseEngineController_LS/Foreground/Control
 * '<S12>'  : BaseEngineController_LS/Foreground/Inputs
 * '<S13>'  : BaseEngineController_LS/Foreground/Outputs
 * '<S14>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization
 * '<S15>'  : BaseEngineController_LS/Foreground/Control/Controller
 * '<S16>'  : BaseEngineController_LS/Foreground/Control/Diagnostics
 * '<S17>'  : BaseEngineController_LS/Foreground/Control/VirtualSensors
 * '<S18>'  : BaseEngineController_LS/Foreground/Control/motohawk_function_collector
 * '<S19>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/CompareTo
 * '<S20>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller
 * '<S21>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Injector Characterization
 * '<S22>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/SequenceCutPattern
 * '<S23>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Spark Advance to Start Angle
 * '<S24>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Spark Coil Characterization
 * '<S25>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/ETC Adapt Request
 * '<S26>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/ETC Sticking Fault
 * '<S27>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/ETC Test  Manager
 * '<S28>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/ETCStallShutDown
 * '<S29>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)
 * '<S30>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/Reset TasksComplete To True
 * '<S31>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/Setpoint Manager
 * '<S32>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/State  Manager
 * '<S33>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/ETC Adapt Request/ShutDownAdaptMode
 * '<S34>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/ETC Sticking Fault/ShutDownAdaptMode1
 * '<S35>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/DamperSwitch
 * '<S36>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/IGain
 * '<S37>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/PGain
 * '<S38>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/PID With Damper Terms
 * '<S39>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/Saturation (Tunable)
 * '<S40>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/DamperSwitch/Filtered Derivative
 * '<S41>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/DamperSwitch/Hysterisis
 * '<S42>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/DamperSwitch/Filtered Derivative/Derivitive2
 * '<S43>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/DamperSwitch/Filtered Derivative/First Order Low Pass (Tunable)
 * '<S44>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/DamperSwitch/Filtered Derivative/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S45>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/DamperSwitch/Hysterisis/Hysteresis
 * '<S46>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/PID With Damper Terms/Derivitive1
 * '<S47>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/PID With Damper Terms/Derivitive3
 * '<S48>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/PID With Damper Terms/Integrator
 * '<S49>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/PID With Damper Terms/Model Info
 * '<S50>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/PID With Damper Terms/Integrator/Saturation
 * '<S51>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/Saturation (Tunable)/Saturation
 * '<S52>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/Setpoint Manager/PassThrough
 * '<S53>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/Setpoint Manager/ShutDownAdaptMode1
 * '<S54>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/Setpoint Manager/Tuning
 * '<S55>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/Setpoint Manager/Variable Rate Limiter
 * '<S56>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/Setpoint Manager/Tuning/Time Since Enabled (With Input)1
 * '<S57>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/Setpoint Manager/Tuning/motohawk_override_abs
 * '<S58>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/Setpoint Manager/Tuning/motohawk_override_abs/NewValue
 * '<S59>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/Setpoint Manager/Tuning/motohawk_override_abs/OldValue
 * '<S60>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/Setpoint Manager/Variable Rate Limiter/Saturation
 * '<S61>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/State  Manager/Reset TasksComplete To False
 * '<S62>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/State  Manager/Stall
 * '<S63>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/State  Manager/Time Since Enabled (With Input)1
 * '<S64>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Injector Characterization/DeltaPressureIndex
 * '<S65>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Hard Cycle Cut Pattern
 * '<S66>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Medium Cycle Cut Pattern
 * '<S67>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/PassThrough1
 * '<S68>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/PassThrough2
 * '<S69>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/PassThrough3
 * '<S70>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/PassThrough4
 * '<S71>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/PassThrough5
 * '<S72>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/SequenceCutMachine
 * '<S73>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Soft Cycle Cut Pattern
 * '<S74>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Hard Cycle Cut Pattern/Cycle1CutPatter
 * '<S75>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Hard Cycle Cut Pattern/Cycle2CutPatter
 * '<S76>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Hard Cycle Cut Pattern/Cycle3CutPatter
 * '<S77>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Hard Cycle Cut Pattern/Cycle4CutPatter
 * '<S78>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Medium Cycle Cut Pattern/Cycle1CutPatter
 * '<S79>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Medium Cycle Cut Pattern/Cycle2CutPatter
 * '<S80>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Medium Cycle Cut Pattern/Cycle3CutPatter
 * '<S81>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Medium Cycle Cut Pattern/Cycle4CutPatter
 * '<S82>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/SequenceCutMachine/SequencyCutMachine
 * '<S83>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Soft Cycle Cut Pattern/Cycle1CutPatter
 * '<S84>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Soft Cycle Cut Pattern/Cycle2CutPatter
 * '<S85>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Soft Cycle Cut Pattern/Cycle3CutPatter
 * '<S86>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Soft Cycle Cut Pattern/Cycle4CutPatter
 * '<S87>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Spark Coil Characterization/motohawk_override_rel
 * '<S88>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Spark Coil Characterization/motohawk_override_rel/NewValue
 * '<S89>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Spark Coil Characterization/motohawk_override_rel/OldValue
 * '<S90>'  : BaseEngineController_LS/Foreground/Control/Controller/Crank
 * '<S91>'  : BaseEngineController_LS/Foreground/Control/Controller/Crank State
 * '<S92>'  : BaseEngineController_LS/Foreground/Control/Controller/Merge
 * '<S93>'  : BaseEngineController_LS/Foreground/Control/Controller/Run
 * '<S94>'  : BaseEngineController_LS/Foreground/Control/Controller/Run State
 * '<S95>'  : BaseEngineController_LS/Foreground/Control/Controller/Stall
 * '<S96>'  : BaseEngineController_LS/Foreground/Control/Controller/Stall State
 * '<S97>'  : BaseEngineController_LS/Foreground/Control/Controller/Crank/CrankFueling
 * '<S98>'  : BaseEngineController_LS/Foreground/Control/Controller/Crank/CrankFueling/FuelPulse
 * '<S99>'  : BaseEngineController_LS/Foreground/Control/Controller/Crank/CrankFueling/TPSEnrichment
 * '<S100>' : BaseEngineController_LS/Foreground/Control/Controller/Crank/CrankFueling/FuelPulse/CompareTo
 * '<S101>' : BaseEngineController_LS/Foreground/Control/Controller/Crank/CrankFueling/FuelPulse/Time Since Enabled
 * '<S102>' : BaseEngineController_LS/Foreground/Control/Controller/Crank/CrankFueling/FuelPulse/WritePulseState
 * '<S103>' : BaseEngineController_LS/Foreground/Control/Controller/Merge/FuelPump
 * '<S104>' : BaseEngineController_LS/Foreground/Control/Controller/Run/AC Control
 * '<S105>' : BaseEngineController_LS/Foreground/Control/Controller/Run/AirFlow Manager
 * '<S106>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Base Equiv Ratio
 * '<S107>' : BaseEngineController_LS/Foreground/Control/Controller/Run/DFCO
 * '<S108>' : BaseEngineController_LS/Foreground/Control/Controller/Run/FAN Control
 * '<S109>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager
 * '<S110>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor
 * '<S111>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor
 * '<S112>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control
 * '<S113>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Spark Manager
 * '<S114>' : BaseEngineController_LS/Foreground/Control/Controller/Run/AC Control/AC Comp High Pressure
 * '<S115>' : BaseEngineController_LS/Foreground/Control/Controller/Run/AC Control/AC Comp Low Pressure
 * '<S116>' : BaseEngineController_LS/Foreground/Control/Controller/Run/AC Control/AC Comp Overspeed
 * '<S117>' : BaseEngineController_LS/Foreground/Control/Controller/Run/AC Control/AC Comp Overspeed1
 * '<S118>' : BaseEngineController_LS/Foreground/Control/Controller/Run/AC Control/AC Comp Underspeed
 * '<S119>' : BaseEngineController_LS/Foreground/Control/Controller/Run/AC Control/AC Evap Temp Hyst
 * '<S120>' : BaseEngineController_LS/Foreground/Control/Controller/Run/AC Control/AC Comp High Pressure/Hysteresis
 * '<S121>' : BaseEngineController_LS/Foreground/Control/Controller/Run/AC Control/AC Comp Low Pressure/Hysteresis
 * '<S122>' : BaseEngineController_LS/Foreground/Control/Controller/Run/AC Control/AC Comp Overspeed/Hysteresis
 * '<S123>' : BaseEngineController_LS/Foreground/Control/Controller/Run/AC Control/AC Comp Overspeed1/Hysteresis
 * '<S124>' : BaseEngineController_LS/Foreground/Control/Controller/Run/AC Control/AC Comp Underspeed/Hysteresis
 * '<S125>' : BaseEngineController_LS/Foreground/Control/Controller/Run/AC Control/AC Evap Temp Hyst/Hysteresis
 * '<S126>' : BaseEngineController_LS/Foreground/Control/Controller/Run/AirFlow Manager/Saturation
 * '<S127>' : BaseEngineController_LS/Foreground/Control/Controller/Run/AirFlow Manager/ShutDownTasksComplete Reset
 * '<S128>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Base Equiv Ratio/Warm Up Fuel Holdoff
 * '<S129>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Base Equiv Ratio/motohawk_override_abs
 * '<S130>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Base Equiv Ratio/motohawk_override_abs/NewValue
 * '<S131>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Base Equiv Ratio/motohawk_override_abs/OldValue
 * '<S132>' : BaseEngineController_LS/Foreground/Control/Controller/Run/DFCO/DesEquivRatioMod
 * '<S133>' : BaseEngineController_LS/Foreground/Control/Controller/Run/DFCO/DesEquivRatioMod/Handoff Alpha
 * '<S134>' : BaseEngineController_LS/Foreground/Control/Controller/Run/DFCO/DesEquivRatioMod/Hysteresis
 * '<S135>' : BaseEngineController_LS/Foreground/Control/Controller/Run/DFCO/DesEquivRatioMod/Time Since Enabled (With Input)1
 * '<S136>' : BaseEngineController_LS/Foreground/Control/Controller/Run/DFCO/DesEquivRatioMod/Handoff Alpha/Saturation
 * '<S137>' : BaseEngineController_LS/Foreground/Control/Controller/Run/FAN Control/Hysterisis
 * '<S138>' : BaseEngineController_LS/Foreground/Control/Controller/Run/FAN Control/Hysterisis1
 * '<S139>' : BaseEngineController_LS/Foreground/Control/Controller/Run/FAN Control/Hysterisis2
 * '<S140>' : BaseEngineController_LS/Foreground/Control/Controller/Run/FAN Control/Hysterisis/Hysteresis
 * '<S141>' : BaseEngineController_LS/Foreground/Control/Controller/Run/FAN Control/Hysterisis1/Hysteresis
 * '<S142>' : BaseEngineController_LS/Foreground/Control/Controller/Run/FAN Control/Hysterisis2/Hysteresis
 * '<S143>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/DesiredFuelCalc
 * '<S144>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Fuel Calculation
 * '<S145>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager
 * '<S146>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt
 * '<S147>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Fuel Calculation/Calculate Fuel Flow
 * '<S148>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Fuel Calculation/Calculate Fuel Flow/Calculate A//F Ratio
 * '<S149>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Fuel Calculation/Calculate Fuel Flow/Calculate A//F Ratio/motohawk_table_1d
 * '<S150>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling
 * '<S151>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Mass Flow to Charge Mass Transform
 * '<S152>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling/CompareTo1
 * '<S153>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling/CompareTo2
 * '<S154>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling/ECT Transient Fueling
 * '<S155>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling/First Order Low Pass (Tunable)
 * '<S156>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling/First Order Low Pass (Tunable)1
 * '<S157>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling/OXY Transient Fueling
 * '<S158>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S159>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling/First Order Low Pass (Tunable)1/First Order Low Pass
 * '<S160>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Mass Flow to Charge Mass Transform/Multiply and Divide, avoiding divde by zero
 * '<S161>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Mass Flow to Charge Mass Transform/NonZero RPM
 * '<S162>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/Adapt FuelFlowComp Map Bank A
 * '<S163>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/Adapt FuelFlowComp Map Bank B
 * '<S164>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/O2 Control Enable Delay
 * '<S165>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/Saturation (Tunable)
 * '<S166>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/Saturation (Tunable)1
 * '<S167>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/WarmUp Disable
 * '<S168>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/O2 Control Enable Delay/Time Since Enabled (With Input)1
 * '<S169>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/Saturation (Tunable)/Saturation
 * '<S170>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/Saturation (Tunable)1/Saturation
 * '<S171>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/I-Term Preload
 * '<S172>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/MaxGovState
 * '<S173>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Ramp RPM
 * '<S174>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Trigger Pre-load
 * '<S175>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)
 * '<S176>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/MaxGovState/MaxGOV Stateflow
 * '<S177>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Trigger Pre-load/InGear
 * '<S178>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Trigger Pre-load/InNeutral
 * '<S179>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Trigger Pre-load/InGear/Saturation
 * '<S180>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Trigger Pre-load/InNeutral/Saturation
 * '<S181>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Saturation
 * '<S182>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Universal PID
 * '<S183>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Derivitive3
 * '<S184>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Integrator
 * '<S185>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Model Info
 * '<S186>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Integrator/Saturation
 * '<S187>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/AiflowOffset
 * '<S188>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Base Airflow Table Adapt
 * '<S189>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Base RPM Set Pt
 * '<S190>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Handoff Alpha
 * '<S191>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination
 * '<S192>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/MotoringDetection
 * '<S193>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/OnIdle State
 * '<S194>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Ramp RPM
 * '<S195>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PD (Tunable & Scheduled)
 * '<S196>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)
 * '<S197>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/AiflowOffset/Ramp Air Into Idle State
 * '<S198>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/AiflowOffset/Run
 * '<S199>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Base Airflow Table Adapt/Adapt Base Airflow Table
 * '<S200>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Base Airflow Table Adapt/Idle Control Enable Delay
 * '<S201>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Base Airflow Table Adapt/Saturation (Tunable)
 * '<S202>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Base Airflow Table Adapt/Idle Control Enable Delay/Time Since Enabled (With Input)1
 * '<S203>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Base Airflow Table Adapt/Saturation (Tunable)/Saturation
 * '<S204>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Handoff Alpha/Saturation
 * '<S205>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/Determine if RPM is Falling
 * '<S206>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/IdleStateMachine
 * '<S207>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/OnIdle State
 * '<S208>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/Time Since Enabled (With Input)1
 * '<S209>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/Determine if RPM is Falling/Derivitive
 * '<S210>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/Determine if RPM is Falling/First Order Low Pass (Tunable)
 * '<S211>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/Determine if RPM is Falling/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S212>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/MotoringDetection/Time Since Enabled (With Input)2
 * '<S213>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PD (Tunable & Scheduled)/PID Gain Select
 * '<S214>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PD (Tunable & Scheduled)/Saturation
 * '<S215>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PD (Tunable & Scheduled)/Universal PD
 * '<S216>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PD (Tunable & Scheduled)/Universal PD/Derivitive
 * '<S217>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PD (Tunable & Scheduled)/Universal PD/Model Info
 * '<S218>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/PID Gain Select1
 * '<S219>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/Saturation
 * '<S220>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/Universal PID
 * '<S221>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Derivitive3
 * '<S222>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Integrator
 * '<S223>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Model Info
 * '<S224>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Integrator/Saturation
 * '<S225>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/Map O2 Sensors to V8 Cylinders
 * '<S226>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 Control State Determination
 * '<S227>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Calibrations
 * '<S228>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank A
 * '<S229>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank B
 * '<S230>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2Arb
 * '<S231>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2Disable
 * '<S232>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Calibrations/Error Gain Scheduling
 * '<S233>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Calibrations/O2 Control Switch Point Maps
 * '<S234>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank A/Closed-Loop O2 PID Controller
 * '<S235>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank A/Equivalence Ratio Perturbation
 * '<S236>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank A/Closed-Loop O2 PID Controller/Saturation
 * '<S237>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank A/Closed-Loop O2 PID Controller/Universal PID
 * '<S238>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank A/Closed-Loop O2 PID Controller/Universal PID/Derivitive3
 * '<S239>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank A/Closed-Loop O2 PID Controller/Universal PID/Integrator
 * '<S240>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank A/Closed-Loop O2 PID Controller/Universal PID/Model Info
 * '<S241>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank A/Closed-Loop O2 PID Controller/Universal PID/Integrator/Saturation
 * '<S242>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank A/Equivalence Ratio Perturbation/Hysteresis
 * '<S243>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank A/Equivalence Ratio Perturbation/Time Since Enabled (With Input)1
 * '<S244>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank A/Equivalence Ratio Perturbation/Time Since Enabled (With Input)2
 * '<S245>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank A/Equivalence Ratio Perturbation/Time Since Enabled (With Input)3
 * '<S246>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank B/Closed-Loop O2 PID Controller
 * '<S247>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank B/Equivalence Ratio Perturbation
 * '<S248>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank B/Closed-Loop O2 PID Controller/Saturation
 * '<S249>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank B/Closed-Loop O2 PID Controller/Universal PID
 * '<S250>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank B/Closed-Loop O2 PID Controller/Universal PID/Derivitive3
 * '<S251>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank B/Closed-Loop O2 PID Controller/Universal PID/Integrator
 * '<S252>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank B/Closed-Loop O2 PID Controller/Universal PID/Model Info
 * '<S253>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank B/Closed-Loop O2 PID Controller/Universal PID/Integrator/Saturation
 * '<S254>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank B/Equivalence Ratio Perturbation/Hysteresis
 * '<S255>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank B/Equivalence Ratio Perturbation/Time Since Enabled (With Input)1
 * '<S256>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank B/Equivalence Ratio Perturbation/Time Since Enabled (With Input)2
 * '<S257>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank B/Equivalence Ratio Perturbation/Time Since Enabled (With Input)3
 * '<S258>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Spark Manager/Desired Eq Ratio Offset
 * '<S259>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Spark Manager/Ethanol Spark Offset
 * '<S260>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Spark Manager/Spark Advance Rate Limiter
 * '<S261>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Spark Manager/SparkAdvanceLimiter
 * '<S262>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Spark Manager/Temp Comp Offset
 * '<S263>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Spark Manager/Spark Advance Rate Limiter/First Time
 * '<S264>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Spark Manager/Spark Advance Rate Limiter/Saturation
 * '<S265>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Spark Manager/SparkAdvanceLimiter/Saturation
 * '<S266>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/FAN Control
 * '<S267>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/Fuel Pump at Startup
 * '<S268>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/Stall Throttle
 * '<S269>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/FAN Control/Hysterisis
 * '<S270>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/FAN Control/Hysterisis1
 * '<S271>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/FAN Control/Hysterisis2
 * '<S272>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/FAN Control/Hysterisis/Hysteresis
 * '<S273>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/FAN Control/Hysterisis1/Hysteresis
 * '<S274>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/FAN Control/Hysterisis2/Hysteresis
 * '<S275>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/Fuel Pump at Startup/Time Since Enabled
 * '<S276>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/Stall Throttle/Ice Break
 * '<S277>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/Stall Throttle/Time Since Enabled (With Input)2
 * '<S278>' : BaseEngineController_LS/Foreground/Control/Diagnostics/AC Fault
 * '<S279>' : BaseEngineController_LS/Foreground/Control/Diagnostics/AirFlow
 * '<S280>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Digital Sensors
 * '<S281>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Engine Overheat Fault Logic
 * '<S282>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Fuel Economy
 * '<S283>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Lean Protect
 * '<S284>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Low Oil Pressure Fault Logic
 * '<S285>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Low Voltage
 * '<S286>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MAP Fault Logic
 * '<S287>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE
 * '<S288>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor
 * '<S289>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection
 * '<S290>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Wrong Fuel Pressure Fault Logic
 * '<S291>' : BaseEngineController_LS/Foreground/Control/Diagnostics/AC Fault/Run State
 * '<S292>' : BaseEngineController_LS/Foreground/Control/Diagnostics/AirFlow/Run State
 * '<S293>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Digital Sensors/Time Since Enabled (With Input)2
 * '<S294>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Digital Sensors/Time Since Enabled (With Input)3
 * '<S295>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Engine Overheat Fault Logic/Run State
 * '<S296>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Fuel Economy/Calculate Fuel Density
 * '<S297>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Fuel Economy/First Order Low Pass (Tunable)
 * '<S298>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Fuel Economy/Multiply and Divide, avoiding divde by zero1
 * '<S299>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Fuel Economy/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S300>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Lean Protect/Run State
 * '<S301>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Low Oil Pressure Fault Logic/Run State
 * '<S302>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Low Voltage/Run State
 * '<S303>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Low Voltage/Run State1
 * '<S304>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Low Voltage/Run State2
 * '<S305>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Low Voltage/Run State3
 * '<S306>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MAP Fault Logic/Run State
 * '<S307>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub
 * '<S308>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/Run State
 * '<S309>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc
 * '<S310>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/DetermineMisfire
 * '<S311>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/StoreRPMData
 * '<S312>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/DetermineMisfire/Compare To Constant
 * '<S313>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/DetermineMisfire/DetermineCylinder
 * '<S314>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/DetermineMisfire/Rising Edge
 * '<S315>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/DetermineMisfire/SetHardFault
 * '<S316>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/DetermineMisfire/SetHardFault/Compare To Constant
 * '<S317>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/DetermineMisfire/SetHardFault/Compare To Constant1
 * '<S318>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/DetermineMisfire/SetHardFault/Compare To Constant2
 * '<S319>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/DetermineMisfire/SetHardFault/Compare To Constant3
 * '<S320>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/DetermineMisfire/SetHardFault/Compare To Constant4
 * '<S321>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/DetermineMisfire/SetHardFault/Compare To Constant5
 * '<S322>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/DetermineMisfire/SetHardFault/Compare To Constant6
 * '<S323>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/DetermineMisfire/SetHardFault/Compare To Constant7
 * '<S324>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/StoreRPMData/DetermineCylinder
 * '<S325>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/StoreRPMData/DetermineCylinder1
 * '<S326>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/StoreRPMData/EncoderAngleArb
 * '<S327>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/StoreRPMData/LatchForAverage
 * '<S328>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/StoreRPMData/LatchForAverage1
 * '<S329>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/StoreRPMData/StoreRPMStart
 * '<S330>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/StoreRPMData/StoreRPMStart1
 * '<S331>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/StoreRPMData/EncoderAngleArb/EncoderAngle_wExtrap
 * '<S332>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/StoreRPMData/EncoderAngleArb/EncoderAngle_wOExtrap
 * '<S333>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/StoreRPMData/EncoderAngleArb/EncoderAngle_wExtrap/motohawk_encoder_angle_extrapolation
 * '<S334>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/StoreRPMData/EncoderAngleArb/EncoderAngle_wExtrap/motohawk_encoder_angle_extrapolation/Tooth Time
 * '<S335>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/StoreRPMData/LatchForAverage/GetInstRPM
 * '<S336>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/StoreRPMData/LatchForAverage/S-R Flip-Flop
 * '<S337>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/StoreRPMData/LatchForAverage/SafeDivide
 * '<S338>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/StoreRPMData/LatchForAverage1/GetInstRPM
 * '<S339>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/StoreRPMData/LatchForAverage1/S-R Flip-Flop
 * '<S340>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/StoreRPMData/LatchForAverage1/SafeDivide
 * '<S341>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/Bank2Bank
 * '<S342>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorStatus
 * '<S343>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorVolt
 * '<S344>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/Bank2Bank/Run State
 * '<S345>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorStatus/Run State1
 * '<S346>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorStatus/Run State10
 * '<S347>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorStatus/Run State11
 * '<S348>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorStatus/Run State12
 * '<S349>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorStatus/Run State13
 * '<S350>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorStatus/Run State14
 * '<S351>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorStatus/Run State15
 * '<S352>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorStatus/Run State16
 * '<S353>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorStatus/Run State2
 * '<S354>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorStatus/Run State3
 * '<S355>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorStatus/Run State4
 * '<S356>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorStatus/Run State5
 * '<S357>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorStatus/Run State6
 * '<S358>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorStatus/Run State7
 * '<S359>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorStatus/Run State8
 * '<S360>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorStatus/Run State9
 * '<S361>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorStatus/Time Since Enabled (With Input)1
 * '<S362>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorStatus/Time Since Enabled (With Input)2
 * '<S363>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorStatus/Time Since Enabled (With Input)3
 * '<S364>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorStatus/Time Since Enabled (With Input)4
 * '<S365>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorVolt/Run State
 * '<S366>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorVolt/Run State1
 * '<S367>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorVolt/Run State2
 * '<S368>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorVolt/Run State3
 * '<S369>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorVolt/Run State4
 * '<S370>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorVolt/Run State5
 * '<S371>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorVolt/Run State6
 * '<S372>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorVolt/Run State7
 * '<S373>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/BaseRevLimit
 * '<S374>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/BaseRevLimit/Hysterisis
 * '<S375>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/BaseRevLimit/Hysterisis1
 * '<S376>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/BaseRevLimit/Hysterisis2
 * '<S377>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/BaseRevLimit/Hysterisis/Hysteresis
 * '<S378>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/BaseRevLimit/Hysterisis1/Hysteresis
 * '<S379>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/BaseRevLimit/Hysterisis2/Hysteresis
 * '<S380>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs
 * '<S381>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/FuelLevel
 * '<S382>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs
 * '<S383>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes
 * '<S384>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed
 * '<S385>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Virtual Indexes
 * '<S386>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Baro Stall State Delay
 * '<S387>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Capture Signal At Startup
 * '<S388>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Running Baro Learn
 * '<S389>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Speed Density - MAP Referenced - Adaptive
 * '<S390>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/motohawk_override_rel
 * '<S391>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Capture Signal At Startup/Collect Average
 * '<S392>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Running Baro Learn/Compare To Constant
 * '<S393>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Running Baro Learn/Time Since Enabled (With Input)1
 * '<S394>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Speed Density - MAP Referenced - Adaptive/Adapt VolEff Map
 * '<S395>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Speed Density - MAP Referenced - Adaptive/C to K1
 * '<S396>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Speed Density - MAP Referenced - Adaptive/Compare To Constant
 * '<S397>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Speed Density - MAP Referenced - Adaptive/O2DataReady
 * '<S398>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Speed Density - MAP Referenced - Adaptive/VE Adapt Source
 * '<S399>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Speed Density - MAP Referenced - Adaptive/Adapt VolEff Map/motohawk_table_1d
 * '<S400>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/motohawk_override_rel/NewValue
 * '<S401>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/motohawk_override_rel/OldValue
 * '<S402>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/FuelLevel/First Order Low Pass
 * '<S403>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/FuelLevel/FuelLevelWrite
 * '<S404>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/FuelLevel/RefuelEvent
 * '<S405>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/FuelLevel/motohawk_table_2d
 * '<S406>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/FuelLevel/RefuelEvent/Rising Edge
 * '<S407>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag
 * '<S408>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect1
 * '<S409>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect3
 * '<S410>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect1/DecreasingFilter
 * '<S411>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect1/First Order Low Pass
 * '<S412>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect1/IncreasingFilter
 * '<S413>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect3/DecreasingFilter
 * '<S414>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect3/First Order Low Pass
 * '<S415>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect3/IncreasingFilter
 * '<S416>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/ACPres Index
 * '<S417>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/CAT Index
 * '<S418>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/ECT Index
 * '<S419>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/IAT Indexes
 * '<S420>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/MAP Indexes
 * '<S421>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/OXY Index
 * '<S422>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/RPM Indexes
 * '<S423>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/SysVolt Index
 * '<S424>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/TPS Indexes
 * '<S425>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/VSPD Index
 * '<S426>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/APP  Sensor Arbitration1
 * '<S427>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request
 * '<S428>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Capture ECT At Startup
 * '<S429>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Capture IAT At Startup
 * '<S430>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/CutThrottle APP Limiting
 * '<S431>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Engine Accel
 * '<S432>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/EngineState
 * '<S433>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Fuel Delta Pressure Calculation
 * '<S434>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Gear Estimator
 * '<S435>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/O2 De-lag
 * '<S436>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Stall
 * '<S437>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/TPS  Sensor Arbitration
 * '<S438>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Time Since Key On
 * '<S439>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Time Since Run
 * '<S440>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Time Since Stall
 * '<S441>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/VSPD_Selector
 * '<S442>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request/First Order Low Pass
 * '<S443>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request/PassThrough1
 * '<S444>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request/PassThrough2
 * '<S445>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request/Variable Rate Limiter
 * '<S446>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request/Variable Rate Limiter/Saturation
 * '<S447>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Capture ECT At Startup/Collect Average
 * '<S448>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Capture IAT At Startup/Collect Average
 * '<S449>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/CutThrottle APP Limiting/Bound APP if overheating
 * '<S450>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Engine Accel/Derivitive3
 * '<S451>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Engine Accel/First Order Low Pass (Tunable)
 * '<S452>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Engine Accel/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S453>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/EngineState/Engine State Machine
 * '<S454>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/EngineState/FuelPulseState
 * '<S455>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/EngineState/TDC_Counter
 * '<S456>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/EngineState/FuelPulseState/CompareTo
 * '<S457>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/EngineState/FuelPulseState/Rising Edge
 * '<S458>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/EngineState/FuelPulseState/WritePulseState
 * '<S459>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/EngineState/TDC_Counter/Crank State
 * '<S460>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Time Since Key On/Time Since Enabled (With Input)2
 * '<S461>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Time Since Run/RunState
 * '<S462>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Time Since Run/Time Since Enabled (With Input)2
 * '<S463>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Time Since Stall/Stall State
 * '<S464>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Time Since Stall/Time Since Enabled (With Input)1
 * '<S465>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Virtual Indexes/ECT_KeyUp
 * '<S466>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Virtual Indexes/IAT_KeyUp
 * '<S467>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Virtual Indexes/MAFPortIndex
 * '<S468>' : BaseEngineController_LS/Foreground/Control/motohawk_function_collector/motohawk_function_collector_in
 * '<S469>' : BaseEngineController_LS/Foreground/Control/motohawk_function_collector/motohawk_function_collector_in/Triggered Subsystem
 * '<S470>' : BaseEngineController_LS/Foreground/Inputs/CAN
 * '<S471>' : BaseEngineController_LS/Foreground/Inputs/Digital
 * '<S472>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed
 * '<S473>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors
 * '<S474>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors
 * '<S475>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors
 * '<S476>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS
 * '<S477>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda
 * '<S478>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization
 * '<S479>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization1
 * '<S480>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization/First Order Low Pass
 * '<S481>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization/If Action Subsystem
 * '<S482>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization/If Action Subsystem1
 * '<S483>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization/If Action Subsystem2
 * '<S484>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization/Override
 * '<S485>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization/First Order Low Pass/First Order Low Pass
 * '<S486>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization/Override/NewValue
 * '<S487>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization/Override/OldValue
 * '<S488>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization1/First Order Low Pass
 * '<S489>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization1/If Action Subsystem
 * '<S490>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization1/If Action Subsystem1
 * '<S491>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization1/If Action Subsystem2
 * '<S492>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization1/Override
 * '<S493>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization1/First Order Low Pass/First Order Low Pass
 * '<S494>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization1/Override/NewValue
 * '<S495>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization1/Override/OldValue
 * '<S496>' : BaseEngineController_LS/Foreground/Inputs/Digital/ACSw
 * '<S497>' : BaseEngineController_LS/Foreground/Inputs/Digital/ESTOP
 * '<S498>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor
 * '<S499>' : BaseEngineController_LS/Foreground/Inputs/Digital/VSPD
 * '<S500>' : BaseEngineController_LS/Foreground/Inputs/Digital/VSPD_Filt
 * '<S501>' : BaseEngineController_LS/Foreground/Inputs/Digital/ACSw /Override in Engineering Units
 * '<S502>' : BaseEngineController_LS/Foreground/Inputs/Digital/ACSw /Override in Engineering Units/NewValue
 * '<S503>' : BaseEngineController_LS/Foreground/Inputs/Digital/ACSw /Override in Engineering Units/OldValue
 * '<S504>' : BaseEngineController_LS/Foreground/Inputs/Digital/ESTOP/Override in Engineering Units
 * '<S505>' : BaseEngineController_LS/Foreground/Inputs/Digital/ESTOP/Override in Engineering Units/NewValue
 * '<S506>' : BaseEngineController_LS/Foreground/Inputs/Digital/ESTOP/Override in Engineering Units/OldValue
 * '<S507>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor/First Order Low Pass
 * '<S508>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor/If Action Subsystem
 * '<S509>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor/If Action Subsystem1
 * '<S510>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor/If Action Subsystem2
 * '<S511>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor/Override
 * '<S512>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor/motohawk_table_1d1
 * '<S513>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor/First Order Low Pass/First Order Low Pass
 * '<S514>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor/Override/NewValue
 * '<S515>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor/Override/OldValue
 * '<S516>' : BaseEngineController_LS/Foreground/Inputs/Digital/VSPD/First Order Low Pass
 * '<S517>' : BaseEngineController_LS/Foreground/Inputs/Digital/VSPD/If Action Subsystem
 * '<S518>' : BaseEngineController_LS/Foreground/Inputs/Digital/VSPD/If Action Subsystem1
 * '<S519>' : BaseEngineController_LS/Foreground/Inputs/Digital/VSPD/If Action Subsystem2
 * '<S520>' : BaseEngineController_LS/Foreground/Inputs/Digital/VSPD/Override
 * '<S521>' : BaseEngineController_LS/Foreground/Inputs/Digital/VSPD/motohawk_table_1d1
 * '<S522>' : BaseEngineController_LS/Foreground/Inputs/Digital/VSPD/First Order Low Pass/First Order Low Pass
 * '<S523>' : BaseEngineController_LS/Foreground/Inputs/Digital/VSPD/Override/NewValue
 * '<S524>' : BaseEngineController_LS/Foreground/Inputs/Digital/VSPD/Override/OldValue
 * '<S525>' : BaseEngineController_LS/Foreground/Inputs/Digital/VSPD_Filt/Derivitive
 * '<S526>' : BaseEngineController_LS/Foreground/Inputs/Digital/VSPD_Filt/S-R Flip-Flop
 * '<S527>' : BaseEngineController_LS/Foreground/Inputs/Digital/VSPD_Filt/Time Since Enabled (With Input)1
 * '<S528>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed/Encoder Diagnostics
 * '<S529>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed/First Order Low Pass (Tunable)1
 * '<S530>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/CamEdges
 * '<S531>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/CamSync
 * '<S532>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/CounterThresh
 * '<S533>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/CrankEdges
 * '<S534>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/CrankSync
 * '<S535>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/motohawk_model_probe_eval_f
 * '<S536>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed/First Order Low Pass (Tunable)1/First Order Low Pass
 * '<S537>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/ACPres
 * '<S538>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor
 * '<S539>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelPres
 * '<S540>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP
 * '<S541>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAPTime
 * '<S542>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP_Crank_Synchronous
 * '<S543>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/OilPres
 * '<S544>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SensVolts
 * '<S545>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SysVolts
 * '<S546>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/ACPres /First Order Low Pass
 * '<S547>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/ACPres /If Action Subsystem
 * '<S548>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/ACPres /If Action Subsystem1
 * '<S549>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/ACPres /If Action Subsystem2
 * '<S550>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/ACPres /Override
 * '<S551>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/ACPres /First Order Low Pass/First Order Low Pass
 * '<S552>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/ACPres /Override/NewValue
 * '<S553>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/ACPres /Override/OldValue
 * '<S554>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options
 * '<S555>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/If Action Subsystem
 * '<S556>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/If Action Subsystem1
 * '<S557>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/If Action Subsystem2
 * '<S558>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Override
 * '<S559>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options/First Order Low Pass
 * '<S560>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options/Moving Average Filter
 * '<S561>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options/Rate Limiter
 * '<S562>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options/First Order Low Pass/First Order Low Pass
 * '<S563>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options/Rate Limiter/Variable Rate Limiter
 * '<S564>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options/Rate Limiter/Variable Rate Limiter/Saturation
 * '<S565>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Override/NewValue
 * '<S566>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Override/OldValue
 * '<S567>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelPres/First Order Low Pass
 * '<S568>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelPres/If Action Subsystem
 * '<S569>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelPres/If Action Subsystem1
 * '<S570>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelPres/If Action Subsystem2
 * '<S571>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelPres/Override
 * '<S572>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelPres/First Order Low Pass/First Order Low Pass
 * '<S573>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelPres/Override/NewValue
 * '<S574>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelPres/Override/OldValue
 * '<S575>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP/First Order Low Pass
 * '<S576>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP/If Action Subsystem
 * '<S577>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP/If Action Subsystem1
 * '<S578>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP/If Action Subsystem2
 * '<S579>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP/Override
 * '<S580>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP/First Order Low Pass/First Order Low Pass
 * '<S581>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP/Override/NewValue
 * '<S582>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP/Override/OldValue
 * '<S583>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAPTime/First Order Low Pass
 * '<S584>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAPTime/If Action Subsystem
 * '<S585>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAPTime/If Action Subsystem1
 * '<S586>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAPTime/If Action Subsystem2
 * '<S587>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAPTime/Override
 * '<S588>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAPTime/First Order Low Pass/First Order Low Pass
 * '<S589>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAPTime/Override/NewValue
 * '<S590>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAPTime/Override/OldValue
 * '<S591>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP_Crank_Synchronous/MID_TDC
 * '<S592>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP_Crank_Synchronous/Once at Startup
 * '<S593>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/OilPres/First Order Low Pass
 * '<S594>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/OilPres/If Action Subsystem
 * '<S595>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/OilPres/If Action Subsystem1
 * '<S596>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/OilPres/If Action Subsystem2
 * '<S597>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/OilPres/Override
 * '<S598>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/OilPres/First Order Low Pass/First Order Low Pass
 * '<S599>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/OilPres/Override/NewValue
 * '<S600>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/OilPres/Override/OldValue
 * '<S601>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SensVolts/First Order Low Pass
 * '<S602>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SensVolts/If Action Subsystem
 * '<S603>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SensVolts/If Action Subsystem1
 * '<S604>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SensVolts/If Action Subsystem2
 * '<S605>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SensVolts/Override
 * '<S606>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SensVolts/First Order Low Pass/First Order Low Pass
 * '<S607>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SensVolts/Override/NewValue
 * '<S608>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SensVolts/Override/OldValue
 * '<S609>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SysVolts/First Order Low Pass
 * '<S610>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SysVolts/If Action Subsystem
 * '<S611>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SysVolts/If Action Subsystem1
 * '<S612>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SysVolts/If Action Subsystem2
 * '<S613>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SysVolts/Override
 * '<S614>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SysVolts/First Order Low Pass/First Order Low Pass
 * '<S615>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SysVolts/Override/NewValue
 * '<S616>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SysVolts/Override/OldValue
 * '<S617>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Fuel Level
 * '<S618>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors
 * '<S619>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Fuel Level/Fuel_Lvl
 * '<S620>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Fuel Level/Fuel_Lvl  /First Order Low Pass
 * '<S621>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Fuel Level/Fuel_Lvl  /If Action Subsystem
 * '<S622>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Fuel Level/Fuel_Lvl  /If Action Subsystem1
 * '<S623>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Fuel Level/Fuel_Lvl  /If Action Subsystem2
 * '<S624>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Fuel Level/Fuel_Lvl  /Override
 * '<S625>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Fuel Level/Fuel_Lvl  /motohawk_table_1d1
 * '<S626>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Fuel Level/Fuel_Lvl  /First Order Low Pass/First Order Low Pass
 * '<S627>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Fuel Level/Fuel_Lvl  /Override/NewValue
 * '<S628>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Fuel Level/Fuel_Lvl  /Override/OldValue
 * '<S629>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT
 * '<S630>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP
 * '<S631>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT
 * '<S632>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /First Order Low Pass
 * '<S633>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /If Action Subsystem
 * '<S634>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /If Action Subsystem1
 * '<S635>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /If Action Subsystem2
 * '<S636>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /Override
 * '<S637>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /motohawk_table_1d1
 * '<S638>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /First Order Low Pass/First Order Low Pass
 * '<S639>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /Override/NewValue
 * '<S640>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /Override/OldValue
 * '<S641>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /First Order Low Pass
 * '<S642>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /If Action Subsystem
 * '<S643>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /If Action Subsystem1
 * '<S644>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /If Action Subsystem2
 * '<S645>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /Override
 * '<S646>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /motohawk_table_1d1
 * '<S647>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /First Order Low Pass/First Order Low Pass
 * '<S648>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /Override/NewValue
 * '<S649>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /Override/OldValue
 * '<S650>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /First Order Low Pass
 * '<S651>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /If Action Subsystem
 * '<S652>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /If Action Subsystem1
 * '<S653>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /If Action Subsystem2
 * '<S654>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /Override
 * '<S655>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /motohawk_table_1d1
 * '<S656>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /First Order Low Pass/First Order Low Pass
 * '<S657>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /Override/NewValue
 * '<S658>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /Override/OldValue
 * '<S659>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1ForcedAdapt
 * '<S660>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2ForcedAdapt
 * '<S661>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt
 * '<S662>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1
 * '<S663>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1
 * '<S664>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2
 * '<S665>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1ForcedAdapt/Function-Call Subsystem
 * '<S666>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1ForcedAdapt/Function-Call Subsystem/First Time
 * '<S667>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2ForcedAdapt/Function-Call Subsystem
 * '<S668>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2ForcedAdapt/Function-Call Subsystem/First Time
 * '<S669>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/ADAPT SCALING
 * '<S670>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/FAULTS
 * '<S671>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/First Order Low Pass
 * '<S672>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/SENSOR FAULT MANAGER
 * '<S673>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/Saturation
 * '<S674>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/ADAPT SCALING/ADAPT HI
 * '<S675>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/ADAPT SCALING/ADAPT LO
 * '<S676>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/ADAPT SCALING/MinMaxFilter
 * '<S677>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/ADAPT SCALING/ADAPT HI/Store Current Position
 * '<S678>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/ADAPT SCALING/ADAPT LO/Store Current Position
 * '<S679>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/First Order Low Pass/First Order Low Pass
 * '<S680>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/SENSOR FAULT MANAGER/If Action Subsystem
 * '<S681>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/SENSOR FAULT MANAGER/If Action Subsystem1
 * '<S682>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/SENSOR FAULT MANAGER/If Action Subsystem2
 * '<S683>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/SENSOR FAULT MANAGER/Override
 * '<S684>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/SENSOR FAULT MANAGER/Override/NewValue
 * '<S685>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/SENSOR FAULT MANAGER/Override/OldValue
 * '<S686>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/ADAPT SCALING
 * '<S687>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/FAULTS
 * '<S688>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/First Order Low Pass
 * '<S689>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/SENSOR FAULT MANAGER
 * '<S690>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/Saturation
 * '<S691>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/ADAPT SCALING/ADAPT HI
 * '<S692>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/ADAPT SCALING/ADAPT LO
 * '<S693>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/ADAPT SCALING/MinMaxFilter
 * '<S694>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/ADAPT SCALING/ADAPT HI/Store Current Position
 * '<S695>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/ADAPT SCALING/ADAPT LO/Store Current Position
 * '<S696>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/First Order Low Pass/First Order Low Pass
 * '<S697>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/SENSOR FAULT MANAGER/If Action Subsystem
 * '<S698>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/SENSOR FAULT MANAGER/If Action Subsystem1
 * '<S699>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/SENSOR FAULT MANAGER/If Action Subsystem2
 * '<S700>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/SENSOR FAULT MANAGER/Override
 * '<S701>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/SENSOR FAULT MANAGER/Override/NewValue
 * '<S702>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/SENSOR FAULT MANAGER/Override/OldValue
 * '<S703>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/ADAPT SCALING
 * '<S704>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/FAULTS
 * '<S705>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/First Order Low Pass
 * '<S706>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER
 * '<S707>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/Saturation
 * '<S708>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/ADAPT SCALING/ADAPT HI
 * '<S709>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/ADAPT SCALING/ADAPT LO
 * '<S710>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/ADAPT SCALING/MinMaxFilter
 * '<S711>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/ADAPT SCALING/ADAPT HI/Store Current Position
 * '<S712>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/ADAPT SCALING/ADAPT LO/Store Current Position
 * '<S713>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/First Order Low Pass/First Order Low Pass
 * '<S714>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER/If Action Subsystem
 * '<S715>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER/If Action Subsystem1
 * '<S716>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER/If Action Subsystem2
 * '<S717>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER/Override
 * '<S718>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER/Override/NewValue
 * '<S719>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER/Override/OldValue
 * '<S720>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/ADAPT SCALING
 * '<S721>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/FAULTS
 * '<S722>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/First Order Low Pass
 * '<S723>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER
 * '<S724>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/Saturation
 * '<S725>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/ADAPT SCALING/ADAPT HI
 * '<S726>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/ADAPT SCALING/ADAPT LO
 * '<S727>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/ADAPT SCALING/MinMaxFilter
 * '<S728>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/ADAPT SCALING/ADAPT HI/Store Current Position
 * '<S729>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/ADAPT SCALING/ADAPT LO/Store Current Position
 * '<S730>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/First Order Low Pass/First Order Low Pass
 * '<S731>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER/If Action Subsystem
 * '<S732>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER/If Action Subsystem1
 * '<S733>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER/If Action Subsystem2
 * '<S734>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER/Override
 * '<S735>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER/Override/NewValue
 * '<S736>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER/Override/OldValue
 * '<S737>' : BaseEngineController_LS/Foreground/Outputs/AC Control
 * '<S738>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash
 * '<S739>' : BaseEngineController_LS/Foreground/Outputs/Coil Control
 * '<S740>' : BaseEngineController_LS/Foreground/Outputs/ETC_CutPower
 * '<S741>' : BaseEngineController_LS/Foreground/Outputs/FAN Control
 * '<S742>' : BaseEngineController_LS/Foreground/Outputs/FuelPump
 * '<S743>' : BaseEngineController_LS/Foreground/Outputs/HBridge
 * '<S744>' : BaseEngineController_LS/Foreground/Outputs/Injector Control
 * '<S745>' : BaseEngineController_LS/Foreground/Outputs/AC Control/Discrete Actuator - AC
 * '<S746>' : BaseEngineController_LS/Foreground/Outputs/AC Control/Discrete Actuator - AC/Override in Engineering Units
 * '<S747>' : BaseEngineController_LS/Foreground/Outputs/AC Control/Discrete Actuator - AC/Override in Engineering Units/NewValue
 * '<S748>' : BaseEngineController_LS/Foreground/Outputs/AC Control/Discrete Actuator - AC/Override in Engineering Units/OldValue
 * '<S749>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Custom 1
 * '<S750>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 1
 * '<S751>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 2
 * '<S752>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 3
 * '<S753>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 4
 * '<S754>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 5
 * '<S755>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 6
 * '<S756>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 7
 * '<S757>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 8
 * '<S758>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message Boost
 * '<S759>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message DBW
 * '<S760>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 1/First Order Low Pass (Tunable)
 * '<S761>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 1/RPM_Filt
 * '<S762>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 1/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S763>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 1/RPM_Filt/First Order Low Pass (Tunable)
 * '<S764>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 1/RPM_Filt/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S765>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/First Order Low Pass (Tunable)
 * '<S766>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/First Order Low Pass (Tunable)1
 * '<S767>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/First Order Low Pass (Tunable)2
 * '<S768>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/PHI_Filt
 * '<S769>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/PHI_Filt1
 * '<S770>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S771>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/First Order Low Pass (Tunable)1/First Order Low Pass
 * '<S772>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/First Order Low Pass (Tunable)2/First Order Low Pass
 * '<S773>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/PHI_Filt/DecreasingFilter
 * '<S774>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/PHI_Filt/First Order Low Pass
 * '<S775>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/PHI_Filt/IncreasingFilter
 * '<S776>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/PHI_Filt1/DecreasingFilter
 * '<S777>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/PHI_Filt1/First Order Low Pass
 * '<S778>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/PHI_Filt1/IncreasingFilter
 * '<S779>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 3/
 * '<S780>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 3/
 * '<S781>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 3/ 1
 * '<S782>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 3/First Order Low Pass (Tunable)
 * '<S783>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 3/First Order Low Pass (Tunable)1
 * '<S784>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 3/First Order Low Pass (Tunable)2
 * '<S785>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 3/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S786>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 3/First Order Low Pass (Tunable)1/First Order Low Pass
 * '<S787>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 3/First Order Low Pass (Tunable)2/First Order Low Pass
 * '<S788>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 6/First Order Low Pass (Tunable)
 * '<S789>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 6/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S790>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message DBW/First Order Low Pass (Tunable)
 * '<S791>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message DBW/First Order Low Pass (Tunable)1
 * '<S792>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message DBW/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S793>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message DBW/First Order Low Pass (Tunable)1/First Order Low Pass
 * '<S794>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/Coil Enable Manager
 * '<S795>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management
 * '<S796>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/motohawk_override_rel
 * '<S797>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/motohawk_override_rel1
 * '<S798>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/Coil Enable Manager/CompareTo
 * '<S799>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/Coil Enable Manager/EST Enable TDC Counter
 * '<S800>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/Coil Enable Manager/EST Enable TDC Counter/EST Enable TDC Counter Stateflow
 * '<S801>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/Coil Enable Manager/EST Enable TDC Counter/TDC_Counter
 * '<S802>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo
 * '<S803>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo1
 * '<S804>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo10
 * '<S805>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo11
 * '<S806>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo12
 * '<S807>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo13
 * '<S808>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo14
 * '<S809>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo15
 * '<S810>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo2
 * '<S811>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo3
 * '<S812>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo4
 * '<S813>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo5
 * '<S814>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo6
 * '<S815>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo7
 * '<S816>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo8
 * '<S817>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo9
 * '<S818>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/motohawk_override_rel/NewValue
 * '<S819>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/motohawk_override_rel/OldValue
 * '<S820>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/motohawk_override_rel1/NewValue
 * '<S821>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/motohawk_override_rel1/OldValue
 * '<S822>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/IAC-P-CONTROL
 * '<S823>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/IAC-P-CONTROL1
 * '<S824>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/IAC-P-CONTROL/Saturation
 * '<S825>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/IAC-P-CONTROL/motohawk_override_abs2
 * '<S826>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/IAC-P-CONTROL/motohawk_override_abs2/NewValue
 * '<S827>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/IAC-P-CONTROL/motohawk_override_abs2/OldValue
 * '<S828>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/IAC-P-CONTROL1/Saturation
 * '<S829>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/IAC-P-CONTROL1/motohawk_override_abs2
 * '<S830>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/IAC-P-CONTROL1/motohawk_override_abs2/NewValue
 * '<S831>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/IAC-P-CONTROL1/motohawk_override_abs2/OldValue
 * '<S832>' : BaseEngineController_LS/Foreground/Outputs/FuelPump/Discrete Actuator - FUELP
 * '<S833>' : BaseEngineController_LS/Foreground/Outputs/FuelPump/Discrete Actuator - FUELP/Override in Engineering Units
 * '<S834>' : BaseEngineController_LS/Foreground/Outputs/FuelPump/Discrete Actuator - FUELP/Override in Engineering Units/NewValue
 * '<S835>' : BaseEngineController_LS/Foreground/Outputs/FuelPump/Discrete Actuator - FUELP/Override in Engineering Units/OldValue
 * '<S836>' : BaseEngineController_LS/Foreground/Outputs/HBridge/Time Since Enabled (With Input)1
 * '<S837>' : BaseEngineController_LS/Foreground/Outputs/HBridge/motohawk_override_abs2
 * '<S838>' : BaseEngineController_LS/Foreground/Outputs/HBridge/motohawk_override_abs2/NewValue
 * '<S839>' : BaseEngineController_LS/Foreground/Outputs/HBridge/motohawk_override_abs2/OldValue
 * '<S840>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/Injector Diagnostics
 * '<S841>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/Injector Enable Manager
 * '<S842>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs1
 * '<S843>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs2
 * '<S844>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs3
 * '<S845>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs4
 * '<S846>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs5
 * '<S847>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs6
 * '<S848>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/Injector Enable Manager/Stall
 * '<S849>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/Injector Enable Manager/Time Since Enabled (With Input)1
 * '<S850>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs1/NewValue
 * '<S851>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs1/OldValue
 * '<S852>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs2/NewValue
 * '<S853>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs2/OldValue
 * '<S854>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs3/NewValue
 * '<S855>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs3/OldValue
 * '<S856>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs4/NewValue
 * '<S857>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs4/OldValue
 * '<S858>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs5/NewValue
 * '<S859>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs5/OldValue
 * '<S860>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs6/NewValue
 * '<S861>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs6/OldValue
 * '<S862>' : BaseEngineController_LS/Main Power Relay/Main Power Relay
 * '<S863>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Display Variable Event Boolean
 * '<S864>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Display Variable Event Function-Call
 * '<S865>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Display Variable Event Function-Call1
 * '<S866>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ECUP Latch
 * '<S867>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Forced Shutdown Process
 * '<S868>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/On Off Delay
 * '<S869>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes
 * '<S870>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Time Since Enabled (With Input)1
 * '<S871>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/motohawk_restore_nvmem
 * '<S872>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/motohawk_store_nvmem
 * '<S873>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Display Variable Event Function-Call/Clear
 * '<S874>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Display Variable Event Function-Call1/Clear
 * '<S875>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Forced Shutdown Process/Post Shutdown two ticks before MPRD off
 * '<S876>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Forced Shutdown Process/Processor Reboot
 * '<S877>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Forced Shutdown Process/Save NV Vars one tick before MPRD off
 * '<S878>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Forced Shutdown Process/Shutdown power on ECU565//563
 * '<S879>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Forced Shutdown Process/Time Since Enabled (With Input)1
 * '<S880>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Forced Shutdown Process/Post Shutdown two ticks before MPRD off/Post Shutdown two ticks before MPRD off
 * '<S881>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Forced Shutdown Process/Save NV Vars one tick before MPRD off/Save NV Vars one tick before MPRD off
 * '<S882>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Forced Shutdown Process/Shutdown power on ECU565//563/Shutdown power on ECU565-128
 * '<S883>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/On Off Delay/S-R Flip-Flop
 * '<S884>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/Post Shutdown two ticks before MPRD off
 * '<S885>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/Processor Reboot
 * '<S886>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/Save NV Vars one tick before MPRD off
 * '<S887>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/Shutdown power on ECU565//563
 * '<S888>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/motohawk_override_abs
 * '<S889>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/Post Shutdown two ticks before MPRD off/Post Shutdown two ticks before MPRD off
 * '<S890>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/Save NV Vars one tick before MPRD off/Save NV Vars one tick before MPRD off
 * '<S891>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/Shutdown power on ECU565//563/Shutdown power on ECU565-128
 * '<S892>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/motohawk_override_abs/NewValue
 * '<S893>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/motohawk_override_abs/OldValue
 */
#endif                                 /* RTW_HEADER_BaseEngineController_LS_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
