/*
 * File: BaseEngineController_LS_112.h
 *
 * Code generated for Simulink model 'BaseEngineController_LS_112'.
 *
 * Model version                  : 1.2194
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Tue Nov 22 13:56:25 2022
 *
 * Target selection: motohawk_motocoder_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_BaseEngineController_LS_112_h_
#define RTW_HEADER_BaseEngineController_LS_112_h_
#ifndef BaseEngineController_LS_112_COMMON_INCLUDES_
# define BaseEngineController_LS_112_COMMON_INCLUDES_
#include <math.h>
#include <string.h>
#include "rtwtypes.h"
#include "Application.h"
#include "rt_nonfinite.h"
#include "rt_zcfcn.h"
#endif                                 /* BaseEngineController_LS_112_COMMON_INCLUDES_ */

#include "BaseEngineController_LS_112_types.h"

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
  real_T s714_motohawk_interpolation_1d;/* '<S714>/motohawk_interpolation_1d' */
  real_T s693_Switch;                  /* '<S693>/Switch' */
  real_T s737_MinMax;                  /* '<S737>/MinMax' */
  real_T s737_MinMax1;                 /* '<S737>/MinMax1' */
  real_T s741_MinMax1;                 /* '<S741>/MinMax1' */
  real_T s712_Merge;                   /* '<S712>/Merge' */
  real_T s751_Merge;                   /* '<S751>/Merge' */
  real_T s702_motohawk_interpolation_1d;/* '<S702>/motohawk_interpolation_1d' */
  real_T s692_Switch;                  /* '<S692>/Switch' */
  real_T s720_MinMax;                  /* '<S720>/MinMax' */
  real_T s720_MinMax1;                 /* '<S720>/MinMax1' */
  real_T s724_MinMax1;                 /* '<S724>/MinMax1' */
  real_T s700_Merge;                   /* '<S700>/Merge' */
  real_T s734_Merge;                   /* '<S734>/Merge' */
  real_T s443_Switch1;                 /* '<S443>/Switch1' */
  real_T s469_Sum;                     /* '<S469>/Sum' */
  real_T s556_Sum1;                    /* '<S556>/Sum1' */
  real_T s569_Merge;                   /* '<S569>/Merge' */
  real_T s481_RPMInst;                 /* '<S481>/Data Type Conversion1' */
  real_T s505_DataTypeConversion;      /* '<S505>/Data Type Conversion' */
  real_T s555_Sum1;                    /* '<S555>/Sum1' */
  real_T s694_Switch;                  /* '<S694>/Switch' */
  real_T s754_MinMax;                  /* '<S754>/MinMax' */
  real_T s754_MinMax1;                 /* '<S754>/MinMax1' */
  real_T s758_MinMax1;                 /* '<S758>/MinMax1' */
  real_T s695_Switch;                  /* '<S695>/Switch' */
  real_T s771_MinMax;                  /* '<S771>/MinMax' */
  real_T s771_MinMax1;                 /* '<S771>/MinMax1' */
  real_T s775_MinMax1;                 /* '<S775>/MinMax1' */
  real_T s768_Merge;                   /* '<S768>/Merge' */
  real_T s785_Merge;                   /* '<S785>/Merge' */
  real_T s450_Switch2;                 /* '<S450>/Switch2' */
  real_T s557_Sum1;                    /* '<S557>/Sum1' */
  real_T s577_Merge;                   /* '<S577>/Merge' */
  real_T s486_Lambda;                  /* '<S486>/Read CAN Message' */
  real_T s486_OxygenConcentratio;      /* '<S486>/Read CAN Message' */
  real_T s486_SystemVolts;             /* '<S486>/Read CAN Message' */
  real_T s486_HeaterVolts;             /* '<S486>/Read CAN Message' */
  real_T s486_ReadCANMessage_o6;       /* '<S486>/Read CAN Message' */
  real_T s486_ReadCANMessage_o7;       /* '<S486>/Read CAN Message' */
  real_T s486_ReadCANMessage_o8;       /* '<S486>/Read CAN Message' */
  real_T s486_ReadCANMessage_o9;       /* '<S486>/Read CAN Message' */
  real_T s486_ReadCANMessage_o10;      /* '<S486>/Read CAN Message' */
  real_T s486_Lambda_c;                /* '<S486>/Read CAN Message1' */
  real_T s486_OxygenConcentratio_i;    /* '<S486>/Read CAN Message1' */
  real_T s486_SystemVolts_f;           /* '<S486>/Read CAN Message1' */
  real_T s486_HeaterVolts_n;           /* '<S486>/Read CAN Message1' */
  real_T s486_ReadCANMessage1_o6;      /* '<S486>/Read CAN Message1' */
  real_T s486_ReadCANMessage1_o7;      /* '<S486>/Read CAN Message1' */
  real_T s486_ReadCANMessage1_o8;      /* '<S486>/Read CAN Message1' */
  real_T s486_ReadCANMessage1_o9;      /* '<S486>/Read CAN Message1' */
  real_T s486_ReadCANMessage1_o10;     /* '<S486>/Read CAN Message1' */
  real_T s485_GPS_Speed;               /* '<S485>/Read CAN Message2' */
  real_T s485_GPS_Altitude;            /* '<S485>/Read CAN Message2' */
  real_T s485_GPS_Course;              /* '<S485>/Read CAN Message2' */
  real_T s485_ReadCANMessage2_o5;      /* '<S485>/Read CAN Message2' */
  real_T s485_ReadCANMessage_o3;       /* '<S485>/Read CAN Message' */
  real_T s485_ReadCANMessage_o4;       /* '<S485>/Read CAN Message' */
  real_T s485_ReadCANMessage_o5;       /* '<S485>/Read CAN Message' */
  real_T s485_ReadCANMessage_o6;       /* '<S485>/Read CAN Message' */
  real_T s485_ReadCANMessage_o7;       /* '<S485>/Read CAN Message' */
  real_T s485_ReadCANMessage_o8;       /* '<S485>/Read CAN Message' */
  real_T s480_Gain1;                   /* '<S480>/Gain1' */
  real_T s540_motohawk_interpolation_1d;/* '<S540>/motohawk_interpolation_1d' */
  real_T s539_Merge;                   /* '<S539>/Merge' */
  real_T s511_Switch;                  /* '<S511>/Switch' */
  real_T s454_Switch2;                 /* '<S454>/Switch2' */
  real_T s486_MathFunction;            /* '<S486>/Math Function' */
  real_T s487_Sum1;                    /* '<S487>/Sum1' */
  real_T s486_MathFunction1;           /* '<S486>/Math Function1' */
  real_T s488_Sum1;                    /* '<S488>/Sum1' */
  real_T s493_Merge;                   /* '<S493>/Merge' */
  real_T s501_Merge;                   /* '<S501>/Merge' */
  real_T s486_MultiportSwitch;         /* '<S486>/Multiport Switch' */
  real_T s448_Sum1;                    /* '<S448>/Sum1' */
  real_T s448_Sum3;                    /* '<S448>/Sum3' */
  real_T s471_Switch;                  /* '<S471>/Switch' */
  real_T s564_Sum1;                    /* '<S564>/Sum1' */
  real_T s632_Merge;                   /* '<S632>/Merge' */
  real_T s561_Merge;                   /* '<S561>/Merge' */
  real_T s559_Sum1;                    /* '<S559>/Sum1' */
  real_T s598_Merge;                   /* '<S598>/Merge' */
  real_T s395_motohawk_delta_time;     /* '<S395>/motohawk_delta_time' */
  real_T s560_Sum1;                    /* '<S560>/Sum1' */
  real_T s405_Sum;                     /* '<S405>/Sum' */
  real_T s404_motohawk_interpolation_2d2;/* '<S404>/motohawk_interpolation_2d2' */
  real_T s404_Sum;                     /* '<S404>/Sum' */
  real_T s404_NominalAirFlowRate;      /* '<S404>/Nominal Air Flow Rate' */
  real_T s404_ModelAirMassFlowRate;    /* '<S404>/Model Air Mass Flow Rate' */
  real_T s480_Gain;                    /* '<S480>/Gain' */
  real_T s526_motohawk_interpolation_1d;/* '<S526>/motohawk_interpolation_1d' */
  real_T s525_Merge;                   /* '<S525>/Merge' */
  real_T s404_MultiportSwitch;         /* '<S404>/Multiport Switch' */
  real_T s421_Merge;                   /* '<S421>/Merge' */
  real_T s424_Sum1;                    /* '<S424>/Sum1' */
  real_T s422_Merge;                   /* '<S422>/Merge' */
  real_T s427_Sum1;                    /* '<S427>/Sum1' */
  real_T s465_Sum1;                    /* '<S465>/Sum1' */
  real_T s506_DataTypeConversion;      /* '<S506>/Data Type Conversion' */
  real_T s509_DataTypeConversion;      /* '<S509>/Data Type Conversion' */
  real_T s606_Merge;                   /* '<S606>/Merge' */
  real_T s396_motohawk_data_read;      /* '<S396>/motohawk_data_read' */
  real_T s415_Sum1;                    /* '<S415>/Sum1' */
  real_T s817_Sum1;                    /* '<S817>/Sum1' */
  real_T s814_Switch;                  /* '<S814>/Switch' */
  real_T s821_Merge;                   /* '<S821>/Merge' */
  real_T s821_Switch;                  /* '<S821>/Switch' */
  real_T s822_Merge;                   /* '<S822>/Merge' */
  real_T s822_Switch;                  /* '<S822>/Switch' */
  real_T s447_MultiportSwitch;         /* '<S447>/Multiport Switch' */
  real_T s92_SparkAdv;                 /* '<S92>/Merge4' */
  real_T s558_Sum1;                    /* '<S558>/Sum1' */
  real_T s590_Merge;                   /* '<S590>/Merge' */
  real_T s562_Sum1;                    /* '<S562>/Sum1' */
  real_T s616_Merge;                   /* '<S616>/Merge' */
  real_T s92_FAN1;                     /* '<S92>/Merge12' */
  real_T s92_FAN2;                     /* '<S92>/Merge13' */
  real_T s92_SparkEnergy;              /* '<S92>/Merge5' */
  real_T s877_MinMax1;                 /* '<S877>/MinMax1' */
  real_T s881_MinMax1;                 /* '<S881>/MinMax1' */
  real_T s473_Switch;                  /* '<S473>/Switch' */
  real_T s92_Throttle;                 /* '<S92>/Merge8' */
  real_T s794_ETC;                     /* '<S794>/Saturation' */
  real_T s92_IACP;                     /* '<S92>/Merge3' */
  real_T s895_MinMax1;                 /* '<S895>/MinMax1' */
  real_T s92_IACS;                     /* '<S92>/Merge9' */
  real_T s899_MinMax1;                 /* '<S899>/MinMax1' */
  real_T s92_SOI;                      /* '<S92>/Merge1' */
  real_T s92_FPC[8];                   /* '<S92>/Merge2' */
  real_T s64_constreftoatm;            /* '<S64>/const ref to atm' */
  real_T s21_Sum2;                     /* '<S21>/Sum2' */
  real_T s21_Sum1;                     /* '<S21>/Sum1' */
  real_T s21_MinMax[8];                /* '<S21>/MinMax' */
  real_T s92_MakeUpEOI;                /* '<S92>/Merge10' */
  real_T s92_WASTEGATE;                /* '<S92>/Merge11' */
  real_T s926_MinMax1;                 /* '<S926>/MinMax1' */
  real_T s21_Gain[8];                  /* '<S21>/Gain' */
  real_T s446_Sum3;                    /* '<S446>/Sum3' */
  real_T s485_GPS_Latitude;            /* '<S485>/Read CAN Message1' */
  real_T s485_GPS_Longitude;           /* '<S485>/Read CAN Message1' */
  real_T s563_Sum1;                    /* '<S563>/Sum1' */
  real_T s624_Merge;                   /* '<S624>/Merge' */
  real_T s849_Sum;                     /* '<S849>/Sum' */
  real_T s850_Sum;                     /* '<S850>/Sum' */
  real_T s852_CrankCounter;            /* '<S852>/CrankCounter' */
  real_T s644_motohawk_interpolation_1d;/* '<S644>/motohawk_interpolation_1d' */
  real_T s638_Merge;                   /* '<S638>/Merge' */
  real_T s643_Merge;                   /* '<S643>/Merge' */
  real_T s666_motohawk_interpolation_1d;/* '<S666>/motohawk_interpolation_1d' */
  real_T s649_Merge;                   /* '<S649>/Merge' */
  real_T s665_Merge;                   /* '<S665>/Merge' */
  real_T s684_motohawk_interpolation_1d;/* '<S684>/motohawk_interpolation_1d' */
  real_T s651_Merge;                   /* '<S651>/Merge' */
  real_T s683_Merge;                   /* '<S683>/Merge' */
  real_T s675_motohawk_interpolation_1d;/* '<S675>/motohawk_interpolation_1d' */
  real_T s674_Merge;                   /* '<S674>/Merge' */
  real_T s657_motohawk_interpolation_1d;/* '<S657>/motohawk_interpolation_1d' */
  real_T s656_Merge;                   /* '<S656>/Merge' */
  real_T s298_Defaultifnoflow[8];      /* '<S298>/Default (if no flow)' */
  real_T s316_Sum1[8];                 /* '<S316>/Sum1' */
  real_T s348_Constant;                /* '<S348>/Constant' */
  real_T s315_chargemass[8];           /* '<S315>/charge mass' */
  real_T s440_Merge;                   /* '<S440>/Merge' */
  real_T s458_Sum2;                    /* '<S458>/Sum2' */
  real_T s401_Timer;                   /* '<S395>/Baro Stall State Delay' */
  real_T s290_UnitDelay;               /* '<S290>/Unit Delay' */
  real_T s283_Product1;                /* '<S283>/Product1' */
  real_T s283_Switch;                  /* '<S283>/Switch' */
  real_T s291_etc;                     /* '<S283>/Ice Break' */
  real_T s102_MultiportSwitch;         /* '<S102>/Multiport Switch' */
  real_T s277_Add;                     /* '<S277>/Add' */
  real_T s274_Product;                 /* '<S274>/Product' */
  real_T s273_Product;                 /* '<S273>/Product' */
  real_T s112_ApplyOffsetstoBaseSparkAdvance1;/* '<S112>/Apply Offsets to Base Spark Advance1' */
  real_T s280_MinMax1;                 /* '<S280>/MinMax1' */
  real_T s275_Switch;                  /* '<S275>/Switch' */
  real_T s112_motohawk_interpolation_2d1;/* '<S112>/motohawk_interpolation_2d1' */
  real_T s109_Sum;                     /* '<S109>/Sum' */
  real_T s188_DontallowsetpointtoevergoabovetheTargetRPM;/* '<S188>/Don't allow setpoint to ever go above the TargetRPM' */
  real_T s197_Sum2;                    /* '<S197>/Sum2' */
  real_T s197_Product2;                /* '<S197>/Product2' */
  real_T s198_Product;                 /* '<S198>/Product' */
  real_T s199_Switch1;                 /* '<S199>/Switch1' */
  real_T s190_Switch;                  /* '<S190>/Switch' */
  real_T s186_Sum;                     /* '<S186>/Sum' */
  real_T s106_Switch4;                 /* '<S106>/Switch4' */
  real_T s106_Switch5;                 /* '<S106>/Switch5' */
  real_T s143_Switch1;                 /* '<S143>/Switch1' */
  real_T s104_MinMax2;                 /* '<S104>/MinMax2' */
  real_T s141_Sum2;                    /* '<S141>/Sum2' */
  real_T s141_Product2;                /* '<S141>/Product2' */
  real_T s142_Product;                 /* '<S142>/Product' */
  real_T s132_Switch;                  /* '<S132>/Switch' */
  real_T s104_Sum3;                    /* '<S104>/Sum3' */
  real_T s104_Switch;                  /* '<S104>/Switch' */
  real_T s219_MinMax1;                 /* '<S219>/MinMax1' */
  real_T s209_DontallowsetpointtoeverdropbelowtheTargetRPM;/* '<S209>/Don't allow setpoint to ever drop below the TargetRPM' */
  real_T s235_Sum2;                    /* '<S235>/Sum2' */
  real_T s235_Product2;                /* '<S235>/Product2' */
  real_T s236_Product;                 /* '<S236>/Product' */
  real_T s237_Switch1;                 /* '<S237>/Switch1' */
  real_T s110_MinGovAirPID;            /* '<S110>/Product1' */
  real_T s230_Sum1;                    /* '<S230>/Sum1' */
  real_T s230_Product;                 /* '<S230>/Product' */
  real_T s231_Product;                 /* '<S231>/Product' */
  real_T s110_IdleSpk;                 /* '<S110>/Product' */
  real_T s227_Switch;                  /* '<S227>/Switch' */
  real_T s212_DontallowsetpointtoeverdropbelowtheTargetRPM;/* '<S212>/Don't allow setpoint to ever drop below the TargetRPM' */
  real_T s105_EquivRatioInfo[5];       /* '<S105>/EquivRatioInfo' */
  real_T s147_Product1;                /* '<S147>/Product1' */
  real_T s147_SpkOut;                  /* '<S147>/Product2' */
  real_T s245_O2FuelMult[8];           /* '<S245>/Switch' */
  real_T s244_Switch;                  /* '<S244>/Switch' */
  real_T s264_Sum2;                    /* '<S264>/Sum2' */
  real_T s264_Product2;                /* '<S264>/Product2' */
  real_T s266_Switch1;                 /* '<S266>/Switch1' */
  real_T s265_Product;                 /* '<S265>/Product' */
  real_T s262_Switch3;                 /* '<S262>/Switch3' */
  real_T s262_Switch1;                 /* '<S262>/Switch1' */
  real_T s262_Switch4;                 /* '<S262>/Switch4' */
  real_T s243_Switch;                  /* '<S243>/Switch' */
  real_T s252_Sum2;                    /* '<S252>/Sum2' */
  real_T s252_Product2;                /* '<S252>/Product2' */
  real_T s254_Switch1;                 /* '<S254>/Switch1' */
  real_T s253_Product;                 /* '<S253>/Product' */
  real_T s250_Switch3;                 /* '<S250>/Switch3' */
  real_T s250_Switch1;                 /* '<S250>/Switch1' */
  real_T s250_Switch4;                 /* '<S250>/Switch4' */
  real_T s164_motohawk_interpolation_1d;/* '<S164>/motohawk_interpolation_1d' */
  real_T s162_FuelFlowMassAirflowEquivalenceRatioAirtofuelRatio;/* '<S162>/Fuel Flow = Mass Airflow * Equivalence Ratio // Air-to-fuel Ratio' */
  real_T s159_PerCylinderMassFlowRate; /* '<S159>/Per-Cylinder Mass Flow Rate' */
  real_T s159_ApplyMultipliersforO2KnockControlandEnrichment1[8];/* '<S159>/Apply Multipliers for O2, Knock Control, and Enrichment1' */
  real_T s184_MinMax1;                 /* '<S184>/MinMax1' */
  real_T s185_MinMax1;                 /* '<S185>/MinMax1' */
  real_T s175_chargemass[8];           /* '<S175>/charge mass' */
  real_T s174_Sum1;                    /* '<S174>/Sum1' */
  real_T s165_Sum1;                    /* '<S165>/Sum1' */
  real_T s173_Sum1;                    /* '<S173>/Sum1' */
  real_T s165_Sum;                     /* '<S165>/Sum' */
  real_T s165_Product1;                /* '<S165>/Product1' */
  real_T s172_motohawk_interpolation_1d;/* '<S172>/motohawk_interpolation_1d' */
  real_T s169_motohawk_interpolation_1d;/* '<S169>/motohawk_interpolation_1d' */
  real_T s103_WarmUpRatio;             /* '<S103>/motohawk_interpolation_2d1' */
  real_T s127_Switch;                  /* '<S127>/Switch' */
  real_T s103_IATEnrichment;           /* '<S103>/motohawk_interpolation_2d5' */
  real_T s103_CATEnrichment;           /* '<S103>/motohawk_interpolation_2d6' */
  real_T s103_DesEquivRatio;           /* '<S103>/MinMax' */
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
  real_T s947_Switch;                  /* '<S947>/Switch' */
  uint32_T s482_motohawk_frequency_in; /* '<S482>/motohawk_frequency_in' */
  uint32_T s486_ReadCANMessage_o1;     /* '<S486>/Read CAN Message' */
  uint32_T s486_ReadCANMessage1_o1;    /* '<S486>/Read CAN Message1' */
  uint32_T s485_ReadCANMessage2_o1;    /* '<S485>/Read CAN Message2' */
  uint32_T s485_ReadCANMessage_o1;     /* '<S485>/Read CAN Message' */
  uint32_T s485_ReadCANMessage1_o1;    /* '<S485>/Read CAN Message1' */
  uint32_T s554_Sum;                   /* '<S554>/Sum' */
  uint32_T s9_ReadCANRaw_o2;           /* '<S9>/Read CAN Raw' */
  uint32_T s9_ReadCANRaw_o4;           /* '<S9>/Read CAN Raw' */
  uint32_T s10_motohawk_calibration;   /* '<S10>/motohawk_calibration' */
  int16_T s794_motohawk_pwm1;          /* '<S794>/motohawk_pwm1' */
  int16_T s343_Merge;                  /* '<S343>/Merge' */
  uint16_T s484_motohawk_ain2;         /* '<S484>/motohawk_ain2' */
  uint16_T s484_motohawk_ain1;         /* '<S484>/motohawk_ain1' */
  uint16_T s482_motohawk_ain4;         /* '<S482>/motohawk_ain4' */
  uint16_T s482_motohawk_ain14;        /* '<S482>/motohawk_ain14' */
  uint16_T s482_motohawk_ain_read1;    /* '<S482>/motohawk_ain_read1' */
  uint16_T s482_motohawk_ain2;         /* '<S482>/motohawk_ain2' */
  uint16_T s482_motohawk_ain1;         /* '<S482>/motohawk_ain1' */
  uint16_T s482_motohawk_ain3;         /* '<S482>/motohawk_ain3' */
  uint16_T s790_SparkSequence_o3[8];   /* '<S790>/Spark Sequence' */
  uint16_T s790_SparkSequence_o4[8];   /* '<S790>/Spark Sequence' */
  uint16_T s636_motohawk_ain;          /* '<S636>/motohawk_ain' */
  uint16_T s637_motohawk_ain;          /* '<S637>/motohawk_ain' */
  uint16_T s637_motohawk_ain1;         /* '<S637>/motohawk_ain1' */
  uint16_T s637_motohawk_ain2;         /* '<S637>/motohawk_ain2' */
  uint16_T s637_motohawk_ain3;         /* '<S637>/motohawk_ain3' */
  uint16_T s10_motohawk_calibration3;  /* '<S10>/motohawk_calibration3' */
  index_T s431_motohawk_prelookup;     /* '<S431>/motohawk_prelookup' */
  index_T s432_motohawk_prelookup;     /* '<S432>/motohawk_prelookup' */
  index_T s429_motohawk_prelookup;     /* '<S429>/motohawk_prelookup' */
  index_T s435_motohawk_prelookup1;    /* '<S435>/motohawk_prelookup1' */
  index_T s435_Indexes;                /* '<S435>/motohawk_prelookup5' */
  index_T s431_motohawk_prelookup2;    /* '<S431>/motohawk_prelookup2' */
  index_T s432_motohawk_prelookup1;    /* '<S432>/motohawk_prelookup1' */
  index_T s436_motohawk_prelookup;     /* '<S436>/motohawk_prelookup' */
  index_T s429_motohawk_prelookup1;    /* '<S429>/motohawk_prelookup1' */
  index_T s433_motohawk_prelookup1;    /* '<S433>/motohawk_prelookup1' */
  index_T s433_Indexes;                /* '<S433>/motohawk_prelookup5' */
  index_T s438_motohawk_prelookup;     /* '<S438>/motohawk_prelookup' */
  index_T s438_motohawk_prelookup2;    /* '<S438>/motohawk_prelookup2' */
  index_T s430_motohawk_prelookup;     /* '<S430>/motohawk_prelookup' */
  index_T s434_motohawk_prelookup;     /* '<S434>/motohawk_prelookup' */
  index_T s400_RPMAccel17Idx;          /* '<S400>/motohawk_prelookup' */
  int8_T s22_Merge1[32];               /* '<S22>/Merge1' */
  int8_T s852_DataTypeConversion;      /* '<S852>/Data Type Conversion' */
  int8_T s187_DataTypeConversion;      /* '<S187>/Data Type Conversion' */
  int8_T s187_DataTypeConversion1;     /* '<S187>/Data Type Conversion1' */
  int8_T s72_MultiportSwitch[8];       /* '<S72>/Multiport Switch' */
  int8_T s82_CutArray[8];              /* '<S82>/CutArray' */
  int8_T s27_DC_Override;              /* '<S20>/ETC Test  Manager' */
  int8_T s27_SetpointMode;             /* '<S20>/ETC Test  Manager' */
  uint8_T s445_UnitDelay;              /* '<S445>/Unit Delay' */
  uint8_T s395_motohawk_data_read1;    /* '<S395>/motohawk_data_read1' */
  uint8_T s796_InjectorSequence_o1[8]; /* '<S796>/Injector Sequence' */
  uint8_T s22_DataTypeConversion5;     /* '<S22>/Data Type Conversion5' */
  uint8_T s485_GPS_SatelliteCount;     /* '<S485>/Data Type Conversion8' */
  uint8_T s485_GPS_SecondsUTC;         /* '<S485>/Data Type Conversion5' */
  uint8_T s485_GPS_MinutesUTC;         /* '<S485>/Data Type Conversion4' */
  uint8_T s485_GPS_HoursUTC;           /* '<S485>/Data Type Conversion3' */
  uint8_T s485_GPS_DayUTC;             /* '<S485>/Data Type Conversion2' */
  uint8_T s485_GPS_MonthUTC;           /* '<S485>/Data Type Conversion1' */
  uint8_T s485_GPS_YearUTC;            /* '<S485>/Data Type Conversion' */
  uint8_T s486_SensorStatus;           /* '<S486>/Data Type Conversion9' */
  uint8_T s486_SensorStatus_i;         /* '<S486>/Data Type Conversion3' */
  uint8_T s481_motohawk_encoder_fault; /* '<S481>/motohawk_encoder_fault' */
  uint8_T s481_motohawk_encoder_state; /* '<S481>/motohawk_encoder_state' */
  uint8_T s854_Switch1;                /* '<S854>/Switch1' */
  uint8_T s467_Switch;                 /* '<S467>/Switch' */
  uint8_T s466_State;                  /* '<S445>/Engine State Machine' */
  uint8_T s104_motohawk_interpolation_2d;/* '<S104>/motohawk_interpolation_2d' */
  uint8_T s221_IdleState;              /* '<S206>/IdleStateMachine' */
  uint8_T s72_UnitDelay1;              /* '<S72>/Unit Delay1' */
  uint8_T s82_Switch;                  /* '<S82>/Switch' */
  uint8_T s9_ReadCANRaw_o5;            /* '<S9>/Read CAN Raw' */
  uint8_T s9_ReadCANRaw_o6[8];         /* '<S9>/Read CAN Raw' */
  boolean_T s445_Stall;                /* '<S445>/Relational Operator1' */
  boolean_T s445_Crank;                /* '<S445>/Relational Operator4' */
  boolean_T s445_Run;                  /* '<S445>/Logical Operator1' */
  boolean_T s512_Merge;                /* '<S512>/Merge' */
  boolean_T s486_DataValidState;       /* '<S486>/Data Type Conversion2' */
  boolean_T s486_DataValidState_d;     /* '<S486>/Data Type Conversion6' */
  boolean_T s485_GPS_Valid;            /* '<S485>/Read CAN Message' */
  boolean_T s511_LogicalOperator;      /* '<S511>/Logical Operator' */
  boolean_T s511_LogicalOperator3;     /* '<S511>/Logical Operator3' */
  boolean_T s421_RelationalOperator4;  /* '<S421>/Relational Operator4' */
  boolean_T s422_RelationalOperator4;  /* '<S422>/Relational Operator4' */
  boolean_T s420_LogicalOperator;      /* '<S420>/Logical Operator' */
  boolean_T s515_Merge;                /* '<S515>/Merge' */
  boolean_T s531_Merge;                /* '<S531>/Merge' */
  boolean_T s92_AC;                    /* '<S92>/Merge14' */
  boolean_T s798_LogicalOperator;      /* '<S798>/Logical Operator' */
  boolean_T s419_LogicalOperator;      /* '<S419>/Logical Operator' */
  boolean_T s92_FUELP;                 /* '<S92>/Merge7' */
  boolean_T s22_LogicalOperator2[8];   /* '<S22>/Logical Operator2' */
  boolean_T s480_motohawk_din;         /* '<S480>/motohawk_din' */
  boolean_T s518_Merge;                /* '<S518>/Merge' */
  boolean_T s885_LogicalOperator;      /* '<S885>/Logical Operator' */
  boolean_T s794_RelationalOperator4;  /* '<S794>/Relational Operator4' */
  boolean_T s909_Merge[8];             /* '<S909>/Merge' */
  boolean_T s486_SensorFaultState;     /* '<S486>/Data Type Conversion5' */
  boolean_T s486_UsingFreeAreCalState; /* '<S486>/Data Type Conversion7' */
  boolean_T s486_SensorDetectedStatus; /* '<S486>/Data Type Conversion8' */
  boolean_T s486_SensorFaultState_h;   /* '<S486>/Data Type Conversion4' */
  boolean_T s486_UsingFreeAreCalState_k;/* '<S486>/Data Type Conversion1' */
  boolean_T s486_SensorDetectedStatus_h;/* '<S486>/Data Type Conversion' */
  boolean_T s404_LogicalOperator;      /* '<S404>/Logical Operator' */
  boolean_T s790_LogicalOperator1[8];  /* '<S790>/Logical Operator1' */
  boolean_T s852_RelationalOperator1;  /* '<S852>/Relational Operator1' */
  boolean_T s718_LogicalOperator;      /* '<S718>/Logical Operator' */
  boolean_T s706_LogicalOperator;      /* '<S706>/Logical Operator' */
  boolean_T s344_RelationalOperator;   /* '<S344>/Relational Operator' */
  boolean_T s345_RelationalOperator;   /* '<S345>/Relational Operator' */
  boolean_T s440_RelationalOperator3;  /* '<S440>/Relational Operator3' */
  boolean_T s401_Enable;               /* '<S395>/Baro Stall State Delay' */
  boolean_T s187_MultiportSwitch;      /* '<S187>/Multiport Switch' */
  boolean_T s131_LogicalOperator1;     /* '<S131>/Logical Operator1' */
  boolean_T s124_Switch1;              /* '<S124>/Switch1' */
  boolean_T s123_Switch1;              /* '<S123>/Switch1' */
  boolean_T s101_LogicalOperator2;     /* '<S101>/Logical Operator2' */
  boolean_T s101_LogicalOperator4;     /* '<S101>/Logical Operator4' */
  boolean_T s120_Switch1;              /* '<S120>/Switch1' */
  boolean_T s101_LogicalOperator1;     /* '<S101>/Logical Operator1' */
  boolean_T s101_LogicalOperator;      /* '<S101>/Logical Operator' */
  boolean_T s220_RelationalOperator;   /* '<S220>/Relational Operator' */
  boolean_T s206_RelationalOperator;   /* '<S206>/Relational Operator' */
  boolean_T s206_RelationalOperator3;  /* '<S206>/Relational Operator3' */
  boolean_T s206_RelationalOperator1;  /* '<S206>/Relational Operator1' */
  boolean_T s206_LogicalOperator;      /* '<S206>/Logical Operator' */
  boolean_T s206_RelationalOperator5;  /* '<S206>/Relational Operator5' */
  boolean_T s222_RelOp;                /* '<S222>/RelOp' */
  boolean_T s110_HitCrossing1;         /* '<S110>/Hit  Crossing1' */
  boolean_T s110_LogicalOperator;      /* '<S110>/Logical Operator' */
  boolean_T s207_RelationalOperator1;  /* '<S207>/Relational Operator1' */
  boolean_T s203_LogicalOperator1;     /* '<S203>/Logical Operator1' */
  boolean_T s147_LogicalOperator;      /* '<S147>/Logical Operator' */
  boolean_T s149_Switch1;              /* '<S149>/Switch1' */
  boolean_T s246_LogicalOperator3;     /* '<S246>/Logical Operator3' */
  boolean_T s241_LogicalOperator;      /* '<S241>/Logical Operator' */
  boolean_T s241_LogicalOperator3;     /* '<S241>/Logical Operator3' */
  boolean_T s241_RelationalOperator5;  /* '<S241>/Relational Operator5' */
  boolean_T s241_LogicalOperator2;     /* '<S241>/Logical Operator2' */
  boolean_T s161_LogicalOperator2;     /* '<S161>/Logical Operator2' */
  boolean_T s182_LogicalOperator;      /* '<S182>/Logical Operator' */
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
  boolean_T s930_RelationalOperator;   /* '<S930>/Relational Operator' */
  boolean_T s930_LogicalOperator2;     /* '<S930>/Logical Operator2' */
  boolean_T s934_MPRDState;            /* '<S930>/ECUP Latch' */
  boolean_T s9_ReadCANRaw_o1;          /* '<S9>/Read CAN Raw' */
  boolean_T s9_ReadCANRaw_o3;          /* '<S9>/Read CAN Raw' */
  rtB_SafeDivide_BaseEngineController_LS_112 s345_SafeDivide;/* '<S345>/SafeDivide' */
  rtB_GetInstRPM_BaseEngineController_LS_112 s345_GetInstRPM;/* '<S345>/GetInstRPM' */
  rtB_SafeDivide_BaseEngineController_LS_112 s344_SafeDivide;/* '<S344>/SafeDivide' */
  rtB_GetInstRPM_BaseEngineController_LS_112 s344_GetInstRPM;/* '<S344>/GetInstRPM' */
  rtB_CollectAverage_BaseEngineController_LS_112 s442_CollectAverage;/* '<S442>/Collect Average' */
  rtB_CollectAverage_BaseEngineController_LS_112 s441_CollectAverage;/* '<S441>/Collect Average' */
  rtB_CollectAverage_BaseEngineController_LS_112 s402_CollectAverage;/* '<S402>/Collect Average' */
} BlockIO_BaseEngineController_LS_112;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T s690_UnitDelay_DSTATE;        /* '<S690>/Unit Delay' */
  real_T s715_UnitDelay_DSTATE;        /* '<S715>/Unit Delay' */
  real_T s747_UnitDelay_DSTATE;        /* '<S747>/Unit Delay' */
  real_T s740_UnitDelay1_DSTATE;       /* '<S740>/Unit Delay1' */
  real_T s688_UnitDelay_DSTATE;        /* '<S688>/Unit Delay' */
  real_T s703_UnitDelay_DSTATE;        /* '<S703>/Unit Delay' */
  real_T s730_UnitDelay_DSTATE;        /* '<S730>/Unit Delay' */
  real_T s723_UnitDelay1_DSTATE;       /* '<S723>/Unit Delay1' */
  real_T s556_UnitDelay1_DSTATE;       /* '<S556>/Unit Delay1' */
  real_T s570_UnitDelay_DSTATE;        /* '<S570>/Unit Delay' */
  real_T s555_UnitDelay_DSTATE;        /* '<S555>/Unit Delay' */
  real_T s764_UnitDelay_DSTATE;        /* '<S764>/Unit Delay' */
  real_T s757_UnitDelay1_DSTATE;       /* '<S757>/Unit Delay1' */
  real_T s781_UnitDelay_DSTATE;        /* '<S781>/Unit Delay' */
  real_T s774_UnitDelay1_DSTATE;       /* '<S774>/Unit Delay1' */
  real_T s582_UnitDelay_DSTATE;        /* '<S582>/Unit Delay' */
  real_T s557_UnitDelay1_DSTATE;       /* '<S557>/Unit Delay1' */
  real_T s581_UnitDelay_DSTATE;        /* '<S581>/Unit Delay' */
  real_T s579_UnitDelay_DSTATE;        /* '<S579>/Unit Delay' */
  real_T s579_UnitDelay1_DSTATE;       /* '<S579>/Unit Delay1' */
  real_T s579_UnitDelay2_DSTATE;       /* '<S579>/Unit Delay2' */
  real_T s511_UnitDelay_DSTATE;        /* '<S511>/Unit Delay' */
  real_T s544_UnitDelay_DSTATE;        /* '<S544>/Unit Delay' */
  real_T s510_UnitDelay_DSTATE;        /* '<S510>/Unit Delay' */
  real_T s541_UnitDelay_DSTATE;        /* '<S541>/Unit Delay' */
  real_T s511_UnitDelay1_DSTATE;       /* '<S511>/Unit Delay1' */
  real_T s511_UnitDelay3_DSTATE;       /* '<S511>/Unit Delay3' */
  real_T s448_UnitDelay_DSTATE;        /* '<S448>/Unit Delay' */
  real_T s487_UnitDelay1_DSTATE;       /* '<S487>/Unit Delay1' */
  real_T s494_UnitDelay_DSTATE;        /* '<S494>/Unit Delay' */
  real_T s488_UnitDelay1_DSTATE;       /* '<S488>/Unit Delay1' */
  real_T s502_UnitDelay_DSTATE;        /* '<S502>/Unit Delay' */
  real_T s448_UnitDelay1_DSTATE;       /* '<S448>/Unit Delay1' */
  real_T s564_UnitDelay1_DSTATE;       /* '<S564>/Unit Delay1' */
  real_T s633_UnitDelay_DSTATE;        /* '<S633>/Unit Delay' */
  real_T s559_UnitDelay1_DSTATE;       /* '<S559>/Unit Delay1' */
  real_T s599_UnitDelay_DSTATE;        /* '<S599>/Unit Delay' */
  real_T s560_UnitDelay1_DSTATE;       /* '<S560>/Unit Delay1' */
  real_T s405_UnitDelay_DSTATE;        /* '<S405>/Unit Delay' */
  real_T s508_UnitDelay_DSTATE;        /* '<S508>/Unit Delay' */
  real_T s527_UnitDelay_DSTATE;        /* '<S527>/Unit Delay' */
  real_T s421_UnitDelay2_DSTATE;       /* '<S421>/Unit Delay2' */
  real_T s424_UnitDelay_DSTATE;        /* '<S424>/Unit Delay' */
  real_T s422_UnitDelay2_DSTATE;       /* '<S422>/Unit Delay2' */
  real_T s427_UnitDelay_DSTATE;        /* '<S427>/Unit Delay' */
  real_T s463_UnitDelay_DSTATE;        /* '<S463>/Unit Delay' */
  real_T s465_UnitDelay_DSTATE;        /* '<S465>/Unit Delay' */
  real_T s607_UnitDelay_DSTATE;        /* '<S607>/Unit Delay' */
  real_T s415_UnitDelay_DSTATE;        /* '<S415>/Unit Delay' */
  real_T s817_UnitDelay_DSTATE;        /* '<S817>/Unit Delay' */
  real_T s815_UnitDelay_DSTATE;        /* '<S815>/Unit Delay' */
  real_T s821_UnitDelay2_DSTATE;       /* '<S821>/Unit Delay2' */
  real_T s827_UnitDelay_DSTATE;        /* '<S827>/Unit Delay' */
  real_T s822_UnitDelay2_DSTATE;       /* '<S822>/Unit Delay2' */
  real_T s830_UnitDelay_DSTATE;        /* '<S830>/Unit Delay' */
  real_T s823_UnitDelay_DSTATE;        /* '<S823>/Unit Delay' */
  real_T s824_UnitDelay_DSTATE;        /* '<S824>/Unit Delay' */
  real_T s825_UnitDelay_DSTATE;        /* '<S825>/Unit Delay' */
  real_T s821_UnitDelay1_DSTATE;       /* '<S821>/Unit Delay1' */
  real_T s821_UnitDelay3_DSTATE;       /* '<S821>/Unit Delay3' */
  real_T s821_UnitDelay4_DSTATE;       /* '<S821>/Unit Delay4' */
  real_T s822_UnitDelay1_DSTATE;       /* '<S822>/Unit Delay1' */
  real_T s822_UnitDelay3_DSTATE;       /* '<S822>/Unit Delay3' */
  real_T s822_UnitDelay4_DSTATE;       /* '<S822>/Unit Delay4' */
  real_T s838_UnitDelay_DSTATE;        /* '<S838>/Unit Delay' */
  real_T s558_UnitDelay1_DSTATE;       /* '<S558>/Unit Delay1' */
  real_T s591_UnitDelay_DSTATE;        /* '<S591>/Unit Delay' */
  real_T s839_UnitDelay_DSTATE;        /* '<S839>/Unit Delay' */
  real_T s562_UnitDelay1_DSTATE;       /* '<S562>/Unit Delay1' */
  real_T s617_UnitDelay_DSTATE;        /* '<S617>/Unit Delay' */
  real_T s840_UnitDelay_DSTATE;        /* '<S840>/Unit Delay' */
  real_T s842_UnitDelay_DSTATE;        /* '<S842>/Unit Delay' */
  real_T s846_UnitDelay_DSTATE;        /* '<S846>/Unit Delay' */
  real_T s845_UnitDelay_DSTATE;        /* '<S845>/Unit Delay' */
  real_T s563_UnitDelay1_DSTATE;       /* '<S563>/Unit Delay1' */
  real_T s625_UnitDelay_DSTATE;        /* '<S625>/Unit Delay' */
  real_T s421_UnitDelay1_DSTATE;       /* '<S421>/Unit Delay1' */
  real_T s421_UnitDelay3_DSTATE;       /* '<S421>/Unit Delay3' */
  real_T s421_UnitDelay4_DSTATE;       /* '<S421>/Unit Delay4' */
  real_T s422_UnitDelay1_DSTATE;       /* '<S422>/Unit Delay1' */
  real_T s422_UnitDelay3_DSTATE;       /* '<S422>/Unit Delay3' */
  real_T s422_UnitDelay4_DSTATE;       /* '<S422>/Unit Delay4' */
  real_T s727_UnitDelay1_DSTATE;       /* '<S727>/Unit Delay1' */
  real_T s727_UnitDelay_DSTATE;        /* '<S727>/Unit Delay' */
  real_T s727_UnitDelay3_DSTATE;       /* '<S727>/Unit Delay3' */
  real_T s727_UnitDelay4_DSTATE;       /* '<S727>/Unit Delay4' */
  real_T s744_UnitDelay1_DSTATE;       /* '<S744>/Unit Delay1' */
  real_T s744_UnitDelay_DSTATE;        /* '<S744>/Unit Delay' */
  real_T s744_UnitDelay3_DSTATE;       /* '<S744>/Unit Delay3' */
  real_T s744_UnitDelay4_DSTATE;       /* '<S744>/Unit Delay4' */
  real_T s761_UnitDelay1_DSTATE;       /* '<S761>/Unit Delay1' */
  real_T s761_UnitDelay_DSTATE;        /* '<S761>/Unit Delay' */
  real_T s761_UnitDelay3_DSTATE;       /* '<S761>/Unit Delay3' */
  real_T s761_UnitDelay4_DSTATE;       /* '<S761>/Unit Delay4' */
  real_T s778_UnitDelay1_DSTATE;       /* '<S778>/Unit Delay1' */
  real_T s778_UnitDelay_DSTATE;        /* '<S778>/Unit Delay' */
  real_T s778_UnitDelay3_DSTATE;       /* '<S778>/Unit Delay3' */
  real_T s778_UnitDelay4_DSTATE;       /* '<S778>/Unit Delay4' */
  real_T s849_UnitDelay_DSTATE;        /* '<S849>/Unit Delay' */
  real_T s850_UnitDelay_DSTATE;        /* '<S850>/Unit Delay' */
  real_T s852_CrankCounter_DSTATE;     /* '<S852>/CrankCounter' */
  real_T s638_UnitDelay_DSTATE;        /* '<S638>/Unit Delay' */
  real_T s645_UnitDelay_DSTATE;        /* '<S645>/Unit Delay' */
  real_T s649_UnitDelay_DSTATE;        /* '<S649>/Unit Delay' */
  real_T s667_UnitDelay_DSTATE;        /* '<S667>/Unit Delay' */
  real_T s651_UnitDelay_DSTATE;        /* '<S651>/Unit Delay' */
  real_T s685_UnitDelay_DSTATE;        /* '<S685>/Unit Delay' */
  real_T s650_UnitDelay_DSTATE;        /* '<S650>/Unit Delay' */
  real_T s676_UnitDelay_DSTATE;        /* '<S676>/Unit Delay' */
  real_T s648_UnitDelay_DSTATE;        /* '<S648>/Unit Delay' */
  real_T s658_UnitDelay_DSTATE;        /* '<S658>/Unit Delay' */
  real_T s316_UnitDelay_DSTATE[8];     /* '<S316>/Unit Delay' */
  real_T s344_UnitDelay2_DSTATE;       /* '<S344>/Unit Delay2' */
  real_T s345_UnitDelay2_DSTATE;       /* '<S345>/Unit Delay2' */
  real_T s440_UnitDelay2_DSTATE;       /* '<S440>/Unit Delay2' */
  real_T s455_UnitDelay_DSTATE;        /* '<S455>/Unit Delay' */
  real_T s458_UnitDelay_DSTATE;        /* '<S458>/Unit Delay' */
  real_T s440_UnitDelay1_DSTATE;       /* '<S440>/Unit Delay1' */
  real_T s440_UnitDelay3_DSTATE;       /* '<S440>/Unit Delay3' */
  real_T s440_UnitDelay4_DSTATE;       /* '<S440>/Unit Delay4' */
  real_T s290_UnitDelay_DSTATE;        /* '<S290>/Unit Delay' */
  real_T s275_UnitDelay_DSTATE;        /* '<S275>/Unit Delay' */
  real_T s188_UnitDelay_DSTATE;        /* '<S188>/Unit Delay' */
  real_T s198_UnitDelay_DSTATE;        /* '<S198>/Unit Delay' */
  real_T s199_UnitDelay_DSTATE;        /* '<S199>/Unit Delay' */
  real_T s104_UnitDelay_DSTATE;        /* '<S104>/Unit Delay' */
  real_T s143_UnitDelay_DSTATE;        /* '<S143>/Unit Delay' */
  real_T s133_UnitDelay_DSTATE;        /* '<S133>/Unit Delay' */
  real_T s142_UnitDelay_DSTATE;        /* '<S142>/Unit Delay' */
  real_T s224_UnitDelay_DSTATE;        /* '<S224>/Unit Delay' */
  real_T s226_UnitDelay_DSTATE;        /* '<S226>/Unit Delay' */
  real_T s110_UnitDelay3_DSTATE;       /* '<S110>/Unit Delay3' */
  real_T s110_UnitDelay1_DSTATE;       /* '<S110>/Unit Delay1' */
  real_T s205_state_DSTATE;            /* '<S205>/state' */
  real_T s110_UnitDelay2_DSTATE;       /* '<S110>/Unit Delay2' */
  real_T s209_UnitDelay_DSTATE;        /* '<S209>/Unit Delay' */
  real_T s236_UnitDelay_DSTATE;        /* '<S236>/Unit Delay' */
  real_T s237_UnitDelay_DSTATE;        /* '<S237>/Unit Delay' */
  real_T s231_UnitDelay_DSTATE;        /* '<S231>/Unit Delay' */
  real_T s212_UnitDelay_DSTATE;        /* '<S212>/Unit Delay' */
  real_T s148_state_DSTATE;            /* '<S148>/state' */
  real_T s266_UnitDelay_DSTATE;        /* '<S266>/Unit Delay' */
  real_T s265_UnitDelay_DSTATE;        /* '<S265>/Unit Delay' */
  real_T s262_UnitDelay1_DSTATE;       /* '<S262>/Unit Delay1' */
  real_T s262_UnitDelay_DSTATE;        /* '<S262>/Unit Delay' */
  real_T s262_UnitDelay2_DSTATE;       /* '<S262>/Unit Delay2' */
  real_T s254_UnitDelay_DSTATE;        /* '<S254>/Unit Delay' */
  real_T s253_UnitDelay_DSTATE;        /* '<S253>/Unit Delay' */
  real_T s250_UnitDelay1_DSTATE;       /* '<S250>/Unit Delay1' */
  real_T s250_UnitDelay_DSTATE;        /* '<S250>/Unit Delay' */
  real_T s250_UnitDelay2_DSTATE;       /* '<S250>/Unit Delay2' */
  real_T s174_UnitDelay_DSTATE;        /* '<S174>/Unit Delay' */
  real_T s173_UnitDelay_DSTATE;        /* '<S173>/Unit Delay' */
  real_T s87_UnitDelay_DSTATE;         /* '<S87>/Unit Delay' */
  real_T s72_UnitDelay2_DSTATE;        /* '<S72>/Unit Delay2' */
  real_T s20_UnitDelay_DSTATE;         /* '<S20>/Unit Delay' */
  real_T s55_UnitDelay_DSTATE;         /* '<S55>/Unit Delay' */
  real_T s46_UnitDelay_DSTATE;         /* '<S46>/Unit Delay' */
  real_T s42_UnitDelay_DSTATE;         /* '<S42>/Unit Delay' */
  real_T s44_UnitDelay_DSTATE;         /* '<S44>/Unit Delay' */
  real_T s47_UnitDelay_DSTATE;         /* '<S47>/Unit Delay' */
  real_T s48_UnitDelay_DSTATE;         /* '<S48>/Unit Delay' */
  real_T s936_UnitDelay_DSTATE;        /* '<S936>/Unit Delay' */
  real_T s936_UnitDelay1_DSTATE;       /* '<S936>/Unit Delay1' */
  real_T s401_TOld;                    /* '<S395>/Baro Stall State Delay' */
  real_T s27_TimerOld;                 /* '<S20>/ETC Test  Manager' */
  uint32_T s477_UnitDelay_DSTATE;      /* '<S477>/Unit Delay' */
  uint32_T s554_UnitDelay_DSTATE;      /* '<S554>/Unit Delay' */
  uint32_T s708_motohawk_delta_time_DWORK1;/* '<S708>/motohawk_delta_time' */
  uint32_T s739_motohawk_delta_time_DWORK1;/* '<S739>/motohawk_delta_time' */
  uint32_T s696_motohawk_delta_time_DWORK1;/* '<S696>/motohawk_delta_time' */
  uint32_T s722_motohawk_delta_time_DWORK1;/* '<S722>/motohawk_delta_time' */
  uint32_T s469_motohawk_delta_time_DWORK1;/* '<S469>/motohawk_delta_time' */
  uint32_T s565_motohawk_delta_time_DWORK1;/* '<S565>/motohawk_delta_time' */
  uint32_T s548_motohawk_delta_time_DWORK1;/* '<S548>/motohawk_delta_time' */
  uint32_T s756_motohawk_delta_time_DWORK1;/* '<S756>/motohawk_delta_time' */
  uint32_T s773_motohawk_delta_time_DWORK1;/* '<S773>/motohawk_delta_time' */
  uint32_T s582_motohawk_delta_time_DWORK1;/* '<S582>/motohawk_delta_time' */
  uint32_T s578_motohawk_delta_time_DWORK1;/* '<S578>/motohawk_delta_time' */
  uint32_T s535_motohawk_delta_time_DWORK1;/* '<S535>/motohawk_delta_time' */
  uint32_T s544_motohawk_delta_time_DWORK1;/* '<S544>/motohawk_delta_time' */
  uint32_T s489_motohawk_delta_time_DWORK1;/* '<S489>/motohawk_delta_time' */
  uint32_T s497_motohawk_delta_time_DWORK1;/* '<S497>/motohawk_delta_time' */
  uint32_T s471_motohawk_delta_time_DWORK1;/* '<S471>/motohawk_delta_time' */
  uint32_T s628_motohawk_delta_time_DWORK1;/* '<S628>/motohawk_delta_time' */
  uint32_T s594_motohawk_delta_time_DWORK1;/* '<S594>/motohawk_delta_time' */
  uint32_T s395_motohawk_delta_time_DWORK1;/* '<S395>/motohawk_delta_time' */
  uint32_T s408_motohawk_delta_time_DWORK1;/* '<S408>/motohawk_delta_time' */
  uint32_T s521_motohawk_delta_time_DWORK1;/* '<S521>/motohawk_delta_time' */
  uint32_T s463_motohawk_delta_time_DWORK1;/* '<S463>/motohawk_delta_time' */
  uint32_T s532_motohawk_delta_time_DWORK1;/* '<S532>/motohawk_delta_time' */
  uint32_T s602_motohawk_delta_time_DWORK1;/* '<S602>/motohawk_delta_time' */
  uint32_T s396_motohawk_delta_time_DWORK1;/* '<S396>/motohawk_delta_time' */
  uint32_T s816_motohawk_delta_time_DWORK1;/* '<S816>/motohawk_delta_time' */
  uint32_T s813_motohawk_delta_time_DWORK1;/* '<S813>/motohawk_delta_time' */
  uint32_T s818_motohawk_delta_time_DWORK1;/* '<S818>/motohawk_delta_time' */
  uint32_T s819_motohawk_delta_time_DWORK1;/* '<S819>/motohawk_delta_time' */
  uint32_T s820_motohawk_delta_time_DWORK1;/* '<S820>/motohawk_delta_time' */
  uint32_T s835_motohawk_delta_time_DWORK1;/* '<S835>/motohawk_delta_time' */
  uint32_T s586_motohawk_delta_time_DWORK1;/* '<S586>/motohawk_delta_time' */
  uint32_T s836_motohawk_delta_time_DWORK1;/* '<S836>/motohawk_delta_time' */
  uint32_T s612_motohawk_delta_time_DWORK1;/* '<S612>/motohawk_delta_time' */
  uint32_T s837_motohawk_delta_time_DWORK1;/* '<S837>/motohawk_delta_time' */
  uint32_T s841_motohawk_delta_time_DWORK1;/* '<S841>/motohawk_delta_time' */
  uint32_T s844_motohawk_delta_time_DWORK1;/* '<S844>/motohawk_delta_time' */
  uint32_T s843_motohawk_delta_time_DWORK1;/* '<S843>/motohawk_delta_time' */
  uint32_T s889_motohawk_delta_time_DWORK1;/* '<S889>/motohawk_delta_time' */
  uint32_T s473_motohawk_delta_time_DWORK1;/* '<S473>/motohawk_delta_time' */
  uint32_T s620_motohawk_delta_time_DWORK1;/* '<S620>/motohawk_delta_time' */
  uint32_T s546_motohawk_delta_time_DWORK1;/* '<S546>/motohawk_delta_time' */
  uint32_T s639_motohawk_delta_time_DWORK1;/* '<S639>/motohawk_delta_time' */
  uint32_T s661_motohawk_delta_time_DWORK1;/* '<S661>/motohawk_delta_time' */
  uint32_T s679_motohawk_delta_time_DWORK1;/* '<S679>/motohawk_delta_time' */
  uint32_T s670_motohawk_delta_time_DWORK1;/* '<S670>/motohawk_delta_time' */
  uint32_T s652_motohawk_delta_time_DWORK1;/* '<S652>/motohawk_delta_time' */
  uint32_T s310_motohawk_delta_time_DWORK1;/* '<S310>/motohawk_delta_time' */
  uint32_T s311_motohawk_delta_time_DWORK1;/* '<S311>/motohawk_delta_time' */
  uint32_T s376_motohawk_delta_time_DWORK1;/* '<S376>/motohawk_delta_time' */
  uint32_T s379_motohawk_delta_time_DWORK1;/* '<S379>/motohawk_delta_time' */
  uint32_T s377_motohawk_delta_time_DWORK1;/* '<S377>/motohawk_delta_time' */
  uint32_T s378_motohawk_delta_time_DWORK1;/* '<S378>/motohawk_delta_time' */
  uint32_T s314_motohawk_delta_time_DWORK1;/* '<S314>/motohawk_delta_time' */
  uint32_T s458_motohawk_delta_time_DWORK1;/* '<S458>/motohawk_delta_time' */
  uint32_T s440_motohawk_delta_time_DWORK1;/* '<S440>/motohawk_delta_time' */
  uint32_T s292_motohawk_delta_time_DWORK1;/* '<S292>/motohawk_delta_time' */
  uint32_T s291_temporalCounter_i1;    /* '<S283>/Ice Break' */
  uint32_T s291_presentTicks;          /* '<S283>/Ice Break' */
  uint32_T s291_elapsedTicks;          /* '<S283>/Ice Break' */
  uint32_T s291_previousTicks;         /* '<S283>/Ice Break' */
  uint32_T s188_motohawk_delta_time_DWORK1;/* '<S188>/motohawk_delta_time' */
  uint32_T s199_motohawk_delta_time_DWORK1;/* '<S199>/motohawk_delta_time' */
  uint32_T s133_motohawk_delta_time_DWORK1;/* '<S133>/motohawk_delta_time' */
  uint32_T s143_motohawk_delta_time_DWORK1;/* '<S143>/motohawk_delta_time' */
  uint32_T s205_motohawk_delta_time_DWORK1;/* '<S205>/motohawk_delta_time' */
  uint32_T s209_motohawk_delta_time_DWORK1;/* '<S209>/motohawk_delta_time' */
  uint32_T s237_motohawk_delta_time_DWORK1;/* '<S237>/motohawk_delta_time' */
  uint32_T s212_motohawk_delta_time_DWORK1;/* '<S212>/motohawk_delta_time' */
  uint32_T s150_motohawk_delta_time_DWORK1;/* '<S150>/motohawk_delta_time' */
  uint32_T s148_motohawk_delta_time_DWORK1;/* '<S148>/motohawk_delta_time' */
  uint32_T s266_motohawk_delta_time_DWORK1;/* '<S266>/motohawk_delta_time' */
  uint32_T s270_motohawk_delta_time_DWORK1;/* '<S270>/motohawk_delta_time' */
  uint32_T s272_motohawk_delta_time_DWORK1;/* '<S272>/motohawk_delta_time' */
  uint32_T s271_motohawk_delta_time_DWORK1;/* '<S271>/motohawk_delta_time' */
  uint32_T s254_motohawk_delta_time_DWORK1;/* '<S254>/motohawk_delta_time' */
  uint32_T s258_motohawk_delta_time_DWORK1;/* '<S258>/motohawk_delta_time' */
  uint32_T s260_motohawk_delta_time_DWORK1;/* '<S260>/motohawk_delta_time' */
  uint32_T s259_motohawk_delta_time_DWORK1;/* '<S259>/motohawk_delta_time' */
  uint32_T s171_motohawk_delta_time_DWORK1;/* '<S171>/motohawk_delta_time' */
  uint32_T s170_motohawk_delta_time_DWORK1;/* '<S170>/motohawk_delta_time' */
  uint32_T s63_motohawk_delta_time_DWORK1;/* '<S63>/motohawk_delta_time' */
  uint32_T s55_motohawk_delta_time_DWORK1;/* '<S55>/motohawk_delta_time' */
  uint32_T s43_motohawk_delta_time_DWORK1;/* '<S43>/motohawk_delta_time' */
  uint32_T s48_motohawk_delta_time_DWORK1;/* '<S48>/motohawk_delta_time' */
  uint32_T s947_motohawk_delta_time_DWORK1;/* '<S947>/motohawk_delta_time' */
  uint32_T s938_motohawk_delta_time_DWORK1;/* '<S938>/motohawk_delta_time' */
  int_T s110_HitCrossing1_MODE;        /* '<S110>/Hit  Crossing1' */
  uint16_T s344_UnitDelay1_DSTATE;     /* '<S344>/Unit Delay1' */
  uint16_T s345_UnitDelay1_DSTATE;     /* '<S345>/Unit Delay1' */
  uint16_T s796_InjectorSequence_DWORK2;/* '<S796>/Injector Sequence' */
  int8_T s442_UnitDelay_DSTATE;        /* '<S442>/Unit Delay' */
  int8_T s441_UnitDelay_DSTATE;        /* '<S441>/Unit Delay' */
  int8_T s402_UnitDelay_DSTATE;        /* '<S402>/Unit Delay' */
  uint8_T s445_UnitDelay_DSTATE;       /* '<S445>/Unit Delay' */
  uint8_T s467_CrankCounter_DSTATE;    /* '<S467>/CrankCounter' */
  uint8_T s72_UnitDelay1_DSTATE;       /* '<S72>/Unit Delay1' */
  boolean_T s511_UnitDelay2_DSTATE;    /* '<S511>/Unit Delay2' */
  boolean_T s419_UnitDelay_DSTATE;     /* '<S419>/Unit Delay' */
  boolean_T s821_UnitDelay5_DSTATE;    /* '<S821>/Unit Delay5' */
  boolean_T s822_UnitDelay5_DSTATE;    /* '<S822>/Unit Delay5' */
  boolean_T s719_InitialConditionisTrue_DSTATE;/* '<S719>/Initial Condition is True' */
  boolean_T s707_InitialConditionisTrue_DSTATE;/* '<S707>/Initial Condition is True' */
  boolean_T s392_UnitDelay_DSTATE;     /* '<S392>/Unit Delay' */
  boolean_T s393_UnitDelay_DSTATE;     /* '<S393>/Unit Delay' */
  boolean_T s394_UnitDelay_DSTATE;     /* '<S394>/Unit Delay' */
  boolean_T s331_UnitDelay_DSTATE[8];  /* '<S331>/Unit Delay' */
  boolean_T s287_UnitDelay_DSTATE;     /* '<S287>/Unit Delay' */
  boolean_T s288_UnitDelay_DSTATE;     /* '<S288>/Unit Delay' */
  boolean_T s289_UnitDelay_DSTATE;     /* '<S289>/Unit Delay' */
  boolean_T s278_InitialConditionisTrue_DSTATE;/* '<S278>/Initial Condition is True' */
  boolean_T s109_UnitDelay_DSTATE;     /* '<S109>/Unit Delay' */
  boolean_T s155_UnitDelay_DSTATE;     /* '<S155>/Unit Delay' */
  boolean_T s156_UnitDelay_DSTATE;     /* '<S156>/Unit Delay' */
  boolean_T s157_UnitDelay_DSTATE;     /* '<S157>/Unit Delay' */
  boolean_T s124_UnitDelay_DSTATE;     /* '<S124>/Unit Delay' */
  boolean_T s123_UnitDelay_DSTATE;     /* '<S123>/Unit Delay' */
  boolean_T s121_UnitDelay_DSTATE;     /* '<S121>/Unit Delay' */
  boolean_T s122_UnitDelay_DSTATE;     /* '<S122>/Unit Delay' */
  boolean_T s120_UnitDelay_DSTATE;     /* '<S120>/Unit Delay' */
  boolean_T s119_UnitDelay_DSTATE;     /* '<S119>/Unit Delay' */
  boolean_T s202_UnitDelay_DSTATE;     /* '<S202>/Unit Delay' */
  boolean_T s149_UnitDelay_DSTATE;     /* '<S149>/Unit Delay' */
  boolean_T s269_UnitDelay_DSTATE;     /* '<S269>/Unit Delay' */
  boolean_T s257_UnitDelay_DSTATE;     /* '<S257>/Unit Delay' */
  boolean_T s45_UnitDelay_DSTATE;      /* '<S45>/Unit Delay' */
  boolean_T s935_UnitDelay8_DSTATE;    /* '<S935>/Unit Delay8' */
  boolean_T s935_UnitDelay6_DSTATE;    /* '<S935>/Unit Delay6' */
  boolean_T s935_UnitDelay7_DSTATE;    /* '<S935>/Unit Delay7' */
  boolean_T s931_UnitDelay_DSTATE;     /* '<S931>/Unit Delay' */
  boolean_T s937_UnitDelay2_DSTATE;    /* '<S937>/Unit Delay2' */
  boolean_T s930_UnitDelay5_DSTATE;    /* '<S930>/Unit Delay5' */
  boolean_T s937_UnitDelay_DSTATE;     /* '<S937>/Unit Delay' */
  boolean_T s937_UnitDelay1_DSTATE;    /* '<S937>/Unit Delay1' */
  boolean_T s930_UnitDelay3_DSTATE;    /* '<S930>/Unit Delay3' */
  boolean_T s930_UnitDelay4_DSTATE;    /* '<S930>/Unit Delay4' */
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
  uint8_T s483_motohawk_trigger_DWORK1;/* '<S483>/motohawk_trigger' */
  uint8_T s445_motohawk_trigger_DWORK1;/* '<S445>/motohawk_trigger' */
  uint8_T s561_motohawk_trigger5_DWORK1;/* '<S561>/motohawk_trigger5' */
  uint8_T s483_motohawk_trigger1_DWORK1;/* '<S483>/motohawk_trigger1' */
  uint8_T s14_motohawk_trigger1_DWORK1;/* '<S14>/motohawk_trigger1' */
  uint8_T s14_motohawk_trigger_DWORK1; /* '<S14>/motohawk_trigger' */
  uint8_T s13_motohawk_trigger_DWORK1; /* '<S13>/motohawk_trigger' */
  uint8_T s689_motohawk_trigger_DWORK1;/* '<S689>/motohawk_trigger' */
  uint8_T s691_motohawk_trigger_DWORK1;/* '<S691>/motohawk_trigger' */
  uint8_T s852_motohawk_trigger1_DWORK1;/* '<S852>/motohawk_trigger1' */
  uint8_T s324_motohawk_trigger_DWORK1;/* '<S324>/motohawk_trigger' */
  uint8_T s466_is_c2_BaseEngineController_LS_112;/* '<S445>/Engine State Machine' */
  uint8_T s401_is_c19_BaseEngineController_LS_112;/* '<S395>/Baro Stall State Delay' */
  uint8_T s291_is_active_c3_BaseEngineController_LS_112;/* '<S283>/Ice Break' */
  uint8_T s291_is_c3_BaseEngineController_LS_112;/* '<S283>/Ice Break' */
  uint8_T s93_motohawk_trigger1_DWORK1;/* '<S93>/motohawk_trigger1' */
  uint8_T s221_is_active_c12_BaseEngineController_LS_112;/* '<S206>/IdleStateMachine' */
  uint8_T s221_is_c12_BaseEngineController_LS_112;/* '<S206>/IdleStateMachine' */
  uint8_T s72_motohawk_trigger_DWORK1; /* '<S72>/motohawk_trigger' */
  uint8_T s27_is_c9_BaseEngineController_LS_112;/* '<S20>/ETC Test  Manager' */
  uint8_T s934_is_c8_BaseEngineController_LS_112;/* '<S930>/ECUP Latch' */
  boolean_T s545_Memory_PreviousInput; /* '<S545>/Memory' */
  boolean_T s796_InjectorSequence_DWORK1[8];/* '<S796>/Injector Sequence' */
  boolean_T s351_Memory_PreviousInput; /* '<S351>/Memory' */
  boolean_T s354_Memory_PreviousInput; /* '<S354>/Memory' */
  boolean_T s244_Multiplyby10ifnotyetenabled_FirstOutputTime;/* '<S244>/Multiply by 1.0 if not yet enabled' */
  boolean_T s243_Multiplyby10ifnotyetenabled_FirstOutputTime;/* '<S243>/Multiply by 1.0 if not yet enabled' */
  boolean_T s951_Memory_PreviousInput; /* '<S951>/Memory' */
  boolean_T s15_Stall_MODE;            /* '<S15>/Stall' */
  boolean_T s15_Crank_MODE;            /* '<S15>/Crank' */
  boolean_T s395_CaptureSignalAtStartup_MODE;/* '<S395>/Capture Signal At Startup' */
  boolean_T s399_CaptureECTAtStartup_MODE;/* '<S399>/Capture ECT At Startup' */
  boolean_T s15_Run_MODE;              /* '<S15>/Run' */
  boolean_T s22_PassThrough1_MODE;     /* '<S22>/PassThrough1' */
  boolean_T s22_PassThrough3_MODE;     /* '<S22>/PassThrough3' */
  boolean_T s22_SequenceCutMachine_MODE;/* '<S22>/SequenceCutMachine' */
  boolean_T s22_PassThrough5_MODE;     /* '<S22>/PassThrough5' */
  boolean_T s22_PassThrough4_MODE;     /* '<S22>/PassThrough4' */
  boolean_T s399_CaptureIATAtStartup_MODE;/* '<S399>/Capture IAT At Startup' */
  boolean_T s14_ElectronicThrottleController_MODE;/* '<S14>/Electronic Throttle Controller' */
  boolean_T s477_TriggeredSubsystem_MODE;/* '<S477>/Triggered Subsystem' */
  boolean_T s303_MisfireDiagSub_MODE;  /* '<S303>/MisfireDiagSub' */
  boolean_T s160_DeltaTPSTransientFueling_MODE;/* '<S160>/Delta TPS Transient Fueling' */
  boolean_T s165_ECTTransientFueling_MODE;/* '<S165>/ECT Transient Fueling' */
  boolean_T s165_OXYTransientFueling_MODE;/* '<S165>/OXY Transient Fueling' */
  boolean_T s31_PassThrough_MODE;      /* '<S31>/PassThrough' */
  rtDW_CollectAverage_BaseEngineController_LS_112 s442_CollectAverage;/* '<S442>/Collect Average' */
  rtDW_CollectAverage_BaseEngineController_LS_112 s441_CollectAverage;/* '<S441>/Collect Average' */
  rtDW_CollectAverage_BaseEngineController_LS_112 s402_CollectAverage;/* '<S402>/Collect Average' */
} D_Work_BaseEngineController_LS_112;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState HitCrossing1_Input_ZCE;   /* '<S110>/Hit  Crossing1' */
  ZCSigState ResetTasksCompleteToFalse_Trig_ZCE;/* '<S32>/Reset TasksComplete To False' */
  ZCSigState ResetTasksCompleteToTrue_Trig_ZCE;/* '<S20>/Reset TasksComplete To True' */
  ZCSigState ShutdownpoweronECU565563_Trig_ZCE;/* '<S937>/Shutdown power on ECU565//563' */
  ZCSigState SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE;/* '<S937>/Save NV Vars one tick before MPRD off' */
  ZCSigState ProcessorReboot_Trig_ZCE; /* '<S937>/Processor Reboot' */
  ZCSigState PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE;/* '<S937>/Post Shutdown two ticks before MPRD off' */
  ZCSigState ShutdownpoweronECU565563_Trig_ZCE_p;/* '<S935>/Shutdown power on ECU565//563' */
  ZCSigState SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE_e;/* '<S935>/Save NV Vars one tick before MPRD off' */
  ZCSigState ProcessorReboot_Trig_ZCE_f;/* '<S935>/Processor Reboot' */
  ZCSigState PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE_a;/* '<S935>/Post Shutdown two ticks before MPRD off' */
  ZCSigState Clear_Trig_ZCE;           /* '<S933>/Clear' */
  ZCSigState Clear_Trig_ZCE_j;         /* '<S932>/Clear' */
} PrevZCSigStates_BaseEngineController_LS_112;

/* Invariant block signals (auto storage) */
typedef struct {
  const real_T s796_Gain4;             /* '<S796>/Gain4' */
  const real_T s95_motohawk_replicate2;/* '<S95>/motohawk_replicate2' */
  const real_T s95_motohawk_replicate[8];/* '<S95>/motohawk_replicate' */
  const uint32_T s796_DataTypeConversion5;/* '<S796>/Data Type Conversion5' */
} ConstBlockIO_BaseEngineController_LS_112;

/* Constant parameters (auto storage) */
typedef struct {
  /* Pooled Parameter (Expression: [1,2,3,4,5,6,7,8])
   * Referenced by:
   *   '<S330>/Constant'
   *   '<S341>/Constant'
   *   '<S342>/Constant'
   */
  real_T pooled85[8];

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S119>/Combinatorial  Logic'
   *   '<S120>/Combinatorial  Logic'
   *   '<S121>/Combinatorial  Logic'
   *   '<S122>/Combinatorial  Logic'
   *   '<S123>/Combinatorial  Logic'
   *   '<S124>/Combinatorial  Logic'
   *   '<S149>/Combinatorial  Logic'
   *   '<S155>/Combinatorial  Logic'
   *   '<S156>/Combinatorial  Logic'
   *   '<S157>/Combinatorial  Logic'
   *   '<S287>/Combinatorial  Logic'
   *   '<S288>/Combinatorial  Logic'
   *   '<S289>/Combinatorial  Logic'
   *   '<S392>/Combinatorial  Logic'
   *   '<S393>/Combinatorial  Logic'
   *   '<S394>/Combinatorial  Logic'
   *   '<S45>/Combinatorial  Logic'
   *   '<S257>/Combinatorial  Logic'
   *   '<S269>/Combinatorial  Logic'
   */
  boolean_T pooled896[8];

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S951>/Logic'
   *   '<S545>/Logic'
   *   '<S351>/Logic'
   *   '<S354>/Logic'
   */
  boolean_T pooled897[16];
} ConstParam_BaseEngineController_LS_112;

/* Real-time Model Data Structure */
struct RT_MODEL_BaseEngineController_LS_112 {
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
extern BlockIO_BaseEngineController_LS_112 BaseEngineController_LS_112_B;

/* Block states (auto storage) */
extern D_Work_BaseEngineController_LS_112 BaseEngineController_LS_112_DWork;
extern const ConstBlockIO_BaseEngineController_LS_112
  BaseEngineController_LS_112_ConstB;  /* constant block i/o */

/* Constant parameters (auto storage) */
extern const ConstParam_BaseEngineController_LS_112
  BaseEngineController_LS_112_ConstP;

/* External data declarations for dependent source files */

/* Zero-crossing (trigger) state */
extern PrevZCSigStates_BaseEngineController_LS_112
  BaseEngineController_LS_112_PrevZCSigState;

/* Model entry point functions */
extern void BaseEngineController_LS_112_initialize(boolean_T firstTime);
extern void BaseEngineController_LS_112_step(void);
extern void BaseEngineController_LS_112_terminate(void);

/* Real-time Model object */
extern struct RT_MODEL_BaseEngineController_LS_112 *const
  BaseEngineController_LS_112_M;

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
 * '<Root>' : BaseEngineController_LS_112
 * '<S1>'   : BaseEngineController_LS_112/CCP CAN Protocol
 * '<S2>'   : BaseEngineController_LS_112/Foreground
 * '<S3>'   : BaseEngineController_LS_112/Main Power Relay
 * '<S4>'   : BaseEngineController_LS_112/CCP CAN Protocol/CCP CAN Protocol External Trig1
 * '<S5>'   : BaseEngineController_LS_112/CCP CAN Protocol/CCP Triggers
 * '<S6>'   : BaseEngineController_LS_112/CCP CAN Protocol/CCP CAN Protocol External Trig1/CCP Command Driver
 * '<S7>'   : BaseEngineController_LS_112/CCP CAN Protocol/CCP CAN Protocol External Trig1/CCP Daq Processing
 * '<S8>'   : BaseEngineController_LS_112/CCP CAN Protocol/CCP CAN Protocol External Trig1/CCP IDLE Processing
 * '<S9>'   : BaseEngineController_LS_112/CCP CAN Protocol/CCP CAN Protocol External Trig1/CCP Command Driver/While new CCP Command
 * '<S10>'  : BaseEngineController_LS_112/CCP CAN Protocol/CCP CAN Protocol External Trig1/CCP Command Driver/While new CCP Command/Adjust ID
 * '<S11>'  : BaseEngineController_LS_112/Foreground/Control
 * '<S12>'  : BaseEngineController_LS_112/Foreground/Inputs
 * '<S13>'  : BaseEngineController_LS_112/Foreground/Outputs
 * '<S14>'  : BaseEngineController_LS_112/Foreground/Control/ActuatorCharacterization
 * '<S15>'  : BaseEngineController_LS_112/Foreground/Control/Controller
 * '<S16>'  : BaseEngineController_LS_112/Foreground/Control/Diagnostics
 * '<S17>'  : BaseEngineController_LS_112/Foreground/Control/VirtualSensors
 * '<S18>'  : BaseEngineController_LS_112/Foreground/Control/motohawk_function_collector
 * '<S19>'  : BaseEngineController_LS_112/Foreground/Control/ActuatorCharacterization/CompareTo
 * '<S20>'  : BaseEngineController_LS_112/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller
 * '<S21>'  : BaseEngineController_LS_112/Foreground/Control/ActuatorCharacterization/Injector Characterization
 * '<S22>'  : BaseEngineController_LS_112/Foreground/Control/ActuatorCharacterization/SequenceCutPattern
 * '<S23>'  : BaseEngineController_LS_112/Foreground/Control/ActuatorCharacterization/Spark Advance to Start Angle
 * '<S24>'  : BaseEngineController_LS_112/Foreground/Control/ActuatorCharacterization/Spark Coil Characterization
 * '<S25>'  : BaseEngineController_LS_112/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/ETC Adapt Request
 * '<S26>'  : BaseEngineController_LS_112/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/ETC Sticking Fault
 * '<S27>'  : BaseEngineController_LS_112/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/ETC Test  Manager
 * '<S28>'  : BaseEngineController_LS_112/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/ETCStallShutDown
 * '<S29>'  : BaseEngineController_LS_112/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)
 * '<S30>'  : BaseEngineController_LS_112/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/Reset TasksComplete To True
 * '<S31>'  : BaseEngineController_LS_112/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/Setpoint Manager
 * '<S32>'  : BaseEngineController_LS_112/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/State  Manager
 * '<S33>'  : BaseEngineController_LS_112/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/ETC Adapt Request/ShutDownAdaptMode
 * '<S34>'  : BaseEngineController_LS_112/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/ETC Sticking Fault/ShutDownAdaptMode1
 * '<S35>'  : BaseEngineController_LS_112/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/DamperSwitch
 * '<S36>'  : BaseEngineController_LS_112/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/IGain
 * '<S37>'  : BaseEngineController_LS_112/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/PGain
 * '<S38>'  : BaseEngineController_LS_112/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/PID With Damper Terms
 * '<S39>'  : BaseEngineController_LS_112/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/Saturation (Tunable)
 * '<S40>'  : BaseEngineController_LS_112/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/DamperSwitch/Filtered Derivative
 * '<S41>'  : BaseEngineController_LS_112/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/DamperSwitch/Hysterisis
 * '<S42>'  : BaseEngineController_LS_112/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/DamperSwitch/Filtered Derivative/Derivitive2
 * '<S43>'  : BaseEngineController_LS_112/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/DamperSwitch/Filtered Derivative/First Order Low Pass (Tunable)
 * '<S44>'  : BaseEngineController_LS_112/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/DamperSwitch/Filtered Derivative/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S45>'  : BaseEngineController_LS_112/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/DamperSwitch/Hysterisis/Hysteresis
 * '<S46>'  : BaseEngineController_LS_112/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/PID With Damper Terms/Derivitive1
 * '<S47>'  : BaseEngineController_LS_112/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/PID With Damper Terms/Derivitive3
 * '<S48>'  : BaseEngineController_LS_112/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/PID With Damper Terms/Integrator
 * '<S49>'  : BaseEngineController_LS_112/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/PID With Damper Terms/Model Info
 * '<S50>'  : BaseEngineController_LS_112/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/PID With Damper Terms/Integrator/Saturation
 * '<S51>'  : BaseEngineController_LS_112/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/Saturation (Tunable)/Saturation
 * '<S52>'  : BaseEngineController_LS_112/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/Setpoint Manager/PassThrough
 * '<S53>'  : BaseEngineController_LS_112/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/Setpoint Manager/ShutDownAdaptMode1
 * '<S54>'  : BaseEngineController_LS_112/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/Setpoint Manager/Tuning
 * '<S55>'  : BaseEngineController_LS_112/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/Setpoint Manager/Variable Rate Limiter
 * '<S56>'  : BaseEngineController_LS_112/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/Setpoint Manager/Tuning/Time Since Enabled (With Input)1
 * '<S57>'  : BaseEngineController_LS_112/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/Setpoint Manager/Tuning/motohawk_override_abs
 * '<S58>'  : BaseEngineController_LS_112/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/Setpoint Manager/Tuning/motohawk_override_abs/NewValue
 * '<S59>'  : BaseEngineController_LS_112/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/Setpoint Manager/Tuning/motohawk_override_abs/OldValue
 * '<S60>'  : BaseEngineController_LS_112/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/Setpoint Manager/Variable Rate Limiter/Saturation
 * '<S61>'  : BaseEngineController_LS_112/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/State  Manager/Reset TasksComplete To False
 * '<S62>'  : BaseEngineController_LS_112/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/State  Manager/Stall
 * '<S63>'  : BaseEngineController_LS_112/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/State  Manager/Time Since Enabled (With Input)1
 * '<S64>'  : BaseEngineController_LS_112/Foreground/Control/ActuatorCharacterization/Injector Characterization/DeltaPressureIndex
 * '<S65>'  : BaseEngineController_LS_112/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Hard Cycle Cut Pattern
 * '<S66>'  : BaseEngineController_LS_112/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Medium Cycle Cut Pattern
 * '<S67>'  : BaseEngineController_LS_112/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/PassThrough1
 * '<S68>'  : BaseEngineController_LS_112/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/PassThrough2
 * '<S69>'  : BaseEngineController_LS_112/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/PassThrough3
 * '<S70>'  : BaseEngineController_LS_112/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/PassThrough4
 * '<S71>'  : BaseEngineController_LS_112/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/PassThrough5
 * '<S72>'  : BaseEngineController_LS_112/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/SequenceCutMachine
 * '<S73>'  : BaseEngineController_LS_112/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Soft Cycle Cut Pattern
 * '<S74>'  : BaseEngineController_LS_112/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Hard Cycle Cut Pattern/Cycle1CutPatter
 * '<S75>'  : BaseEngineController_LS_112/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Hard Cycle Cut Pattern/Cycle2CutPatter
 * '<S76>'  : BaseEngineController_LS_112/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Hard Cycle Cut Pattern/Cycle3CutPatter
 * '<S77>'  : BaseEngineController_LS_112/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Hard Cycle Cut Pattern/Cycle4CutPatter
 * '<S78>'  : BaseEngineController_LS_112/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Medium Cycle Cut Pattern/Cycle1CutPatter
 * '<S79>'  : BaseEngineController_LS_112/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Medium Cycle Cut Pattern/Cycle2CutPatter
 * '<S80>'  : BaseEngineController_LS_112/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Medium Cycle Cut Pattern/Cycle3CutPatter
 * '<S81>'  : BaseEngineController_LS_112/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Medium Cycle Cut Pattern/Cycle4CutPatter
 * '<S82>'  : BaseEngineController_LS_112/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/SequenceCutMachine/SequencyCutMachine
 * '<S83>'  : BaseEngineController_LS_112/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Soft Cycle Cut Pattern/Cycle1CutPatter
 * '<S84>'  : BaseEngineController_LS_112/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Soft Cycle Cut Pattern/Cycle2CutPatter
 * '<S85>'  : BaseEngineController_LS_112/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Soft Cycle Cut Pattern/Cycle3CutPatter
 * '<S86>'  : BaseEngineController_LS_112/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Soft Cycle Cut Pattern/Cycle4CutPatter
 * '<S87>'  : BaseEngineController_LS_112/Foreground/Control/ActuatorCharacterization/Spark Coil Characterization/motohawk_override_rel
 * '<S88>'  : BaseEngineController_LS_112/Foreground/Control/ActuatorCharacterization/Spark Coil Characterization/motohawk_override_rel/NewValue
 * '<S89>'  : BaseEngineController_LS_112/Foreground/Control/ActuatorCharacterization/Spark Coil Characterization/motohawk_override_rel/OldValue
 * '<S90>'  : BaseEngineController_LS_112/Foreground/Control/Controller/Crank
 * '<S91>'  : BaseEngineController_LS_112/Foreground/Control/Controller/Crank State
 * '<S92>'  : BaseEngineController_LS_112/Foreground/Control/Controller/Merge
 * '<S93>'  : BaseEngineController_LS_112/Foreground/Control/Controller/Run
 * '<S94>'  : BaseEngineController_LS_112/Foreground/Control/Controller/Run State
 * '<S95>'  : BaseEngineController_LS_112/Foreground/Control/Controller/Stall
 * '<S96>'  : BaseEngineController_LS_112/Foreground/Control/Controller/Stall State
 * '<S97>'  : BaseEngineController_LS_112/Foreground/Control/Controller/Crank/CrankFueling
 * '<S98>'  : BaseEngineController_LS_112/Foreground/Control/Controller/Crank/CrankIAC
 * '<S99>'  : BaseEngineController_LS_112/Foreground/Control/Controller/Crank/IAC Characterization
 * '<S100>' : BaseEngineController_LS_112/Foreground/Control/Controller/Merge/FuelPump
 * '<S101>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/AC Control
 * '<S102>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/AirFlow Manager
 * '<S103>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/Base Equiv Ratio
 * '<S104>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/Boost Control
 * '<S105>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/DFCO
 * '<S106>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/FAN Control
 * '<S107>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/Fuel System Manager
 * '<S108>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/IAC Characterization
 * '<S109>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/MaxGovernor
 * '<S110>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/MinGovernor
 * '<S111>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/O2 Control
 * '<S112>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/Spark Manager
 * '<S113>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/AC Control/AC Comp High Pressure
 * '<S114>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/AC Control/AC Comp Low Pressure
 * '<S115>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/AC Control/AC Comp Overspeed
 * '<S116>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/AC Control/AC Comp Overspeed1
 * '<S117>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/AC Control/AC Comp Underspeed
 * '<S118>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/AC Control/AC Evap Temp Hyst
 * '<S119>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/AC Control/AC Comp High Pressure/Hysteresis
 * '<S120>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/AC Control/AC Comp Low Pressure/Hysteresis
 * '<S121>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/AC Control/AC Comp Overspeed/Hysteresis
 * '<S122>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/AC Control/AC Comp Overspeed1/Hysteresis
 * '<S123>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/AC Control/AC Comp Underspeed/Hysteresis
 * '<S124>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/AC Control/AC Evap Temp Hyst/Hysteresis
 * '<S125>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/AirFlow Manager/Saturation
 * '<S126>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/AirFlow Manager/ShutDownTasksComplete Reset
 * '<S127>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/Base Equiv Ratio/Warm Up Fuel Holdoff
 * '<S128>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/Base Equiv Ratio/motohawk_override_abs
 * '<S129>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/Base Equiv Ratio/motohawk_override_abs/NewValue
 * '<S130>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/Base Equiv Ratio/motohawk_override_abs/OldValue
 * '<S131>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/Boost Control/BoostControl Adapt
 * '<S132>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/Boost Control/Universal PID (Tunable & Scheduled)
 * '<S133>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/Boost Control/Variable Rate Limiter
 * '<S134>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/Boost Control/BoostControl Adapt/Adapt Boost Table
 * '<S135>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/Boost Control/BoostControl Adapt/BoostControl Enable Delay
 * '<S136>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/Boost Control/BoostControl Adapt/Saturation (Tunable)
 * '<S137>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/Boost Control/BoostControl Adapt/BoostControl Enable Delay/Time Since Enabled (With Input)1
 * '<S138>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/Boost Control/BoostControl Adapt/Saturation (Tunable)/Saturation
 * '<S139>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/Boost Control/Universal PID (Tunable & Scheduled)/PID Gain Select1
 * '<S140>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/Boost Control/Universal PID (Tunable & Scheduled)/Saturation
 * '<S141>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/Boost Control/Universal PID (Tunable & Scheduled)/Universal PID
 * '<S142>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/Boost Control/Universal PID (Tunable & Scheduled)/Universal PID/Derivitive3
 * '<S143>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/Boost Control/Universal PID (Tunable & Scheduled)/Universal PID/Integrator
 * '<S144>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/Boost Control/Universal PID (Tunable & Scheduled)/Universal PID/Model Info
 * '<S145>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/Boost Control/Universal PID (Tunable & Scheduled)/Universal PID/Integrator/Saturation
 * '<S146>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/Boost Control/Variable Rate Limiter/Saturation
 * '<S147>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/DFCO/DesEquivRatioMod
 * '<S148>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/DFCO/DesEquivRatioMod/Handoff Alpha
 * '<S149>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/DFCO/DesEquivRatioMod/Hysteresis
 * '<S150>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/DFCO/DesEquivRatioMod/Time Since Enabled (With Input)1
 * '<S151>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/DFCO/DesEquivRatioMod/Handoff Alpha/Saturation
 * '<S152>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/FAN Control/Hysterisis
 * '<S153>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/FAN Control/Hysterisis1
 * '<S154>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/FAN Control/Hysterisis2
 * '<S155>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/FAN Control/Hysterisis/Hysteresis
 * '<S156>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/FAN Control/Hysterisis1/Hysteresis
 * '<S157>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/FAN Control/Hysterisis2/Hysteresis
 * '<S158>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/Fuel System Manager/DesiredFuelCalc
 * '<S159>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/Fuel System Manager/Fuel Calculation
 * '<S160>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager
 * '<S161>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt
 * '<S162>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/Fuel System Manager/Fuel Calculation/Calculate Fuel Flow
 * '<S163>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/Fuel System Manager/Fuel Calculation/Calculate Fuel Flow/Calculate A//F Ratio
 * '<S164>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/Fuel System Manager/Fuel Calculation/Calculate Fuel Flow/Calculate A//F Ratio/motohawk_table_1d
 * '<S165>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling
 * '<S166>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Mass Flow to Charge Mass Transform
 * '<S167>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling/CompareTo1
 * '<S168>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling/CompareTo2
 * '<S169>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling/ECT Transient Fueling
 * '<S170>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling/First Order Low Pass (Tunable)
 * '<S171>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling/First Order Low Pass (Tunable)1
 * '<S172>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling/OXY Transient Fueling
 * '<S173>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S174>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling/First Order Low Pass (Tunable)1/First Order Low Pass
 * '<S175>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Mass Flow to Charge Mass Transform/Multiply and Divide, avoiding divde by zero
 * '<S176>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Mass Flow to Charge Mass Transform/NonZero RPM
 * '<S177>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/Adapt FuelFlowComp Map Bank A
 * '<S178>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/Adapt FuelFlowComp Map Bank B
 * '<S179>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/O2 Control Enable Delay
 * '<S180>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/Saturation (Tunable)
 * '<S181>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/Saturation (Tunable)1
 * '<S182>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/WarmUp Disable
 * '<S183>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/O2 Control Enable Delay/Time Since Enabled (With Input)1
 * '<S184>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/Saturation (Tunable)/Saturation
 * '<S185>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/Saturation (Tunable)1/Saturation
 * '<S186>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/MaxGovernor/I-Term Preload
 * '<S187>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/MaxGovernor/MaxGovState
 * '<S188>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/MaxGovernor/Ramp RPM
 * '<S189>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/MaxGovernor/Trigger Pre-load
 * '<S190>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)
 * '<S191>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/MaxGovernor/MaxGovState/MaxGOV Stateflow
 * '<S192>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/MaxGovernor/Trigger Pre-load/InGear
 * '<S193>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/MaxGovernor/Trigger Pre-load/InNeutral
 * '<S194>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/MaxGovernor/Trigger Pre-load/InGear/Saturation
 * '<S195>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/MaxGovernor/Trigger Pre-load/InNeutral/Saturation
 * '<S196>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Saturation
 * '<S197>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Universal PID
 * '<S198>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Derivitive3
 * '<S199>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Integrator
 * '<S200>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Model Info
 * '<S201>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Integrator/Saturation
 * '<S202>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/MinGovernor/AiflowOffset
 * '<S203>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/MinGovernor/Base Airflow Table Adapt
 * '<S204>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/MinGovernor/Base RPM Set Pt
 * '<S205>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/MinGovernor/Handoff Alpha
 * '<S206>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination
 * '<S207>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/MinGovernor/MotoringDetection
 * '<S208>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/MinGovernor/OnIdle State
 * '<S209>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/MinGovernor/Ramp RPM
 * '<S210>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/MinGovernor/Universal PD (Tunable & Scheduled)
 * '<S211>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)
 * '<S212>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/MinGovernor/AiflowOffset/Ramp Air Into Idle State
 * '<S213>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/MinGovernor/AiflowOffset/Run
 * '<S214>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/MinGovernor/Base Airflow Table Adapt/Adapt Base Airflow Table
 * '<S215>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/MinGovernor/Base Airflow Table Adapt/Idle Control Enable Delay
 * '<S216>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/MinGovernor/Base Airflow Table Adapt/Saturation (Tunable)
 * '<S217>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/MinGovernor/Base Airflow Table Adapt/Idle Control Enable Delay/Time Since Enabled (With Input)1
 * '<S218>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/MinGovernor/Base Airflow Table Adapt/Saturation (Tunable)/Saturation
 * '<S219>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/MinGovernor/Handoff Alpha/Saturation
 * '<S220>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/Determine if RPM is Falling
 * '<S221>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/IdleStateMachine
 * '<S222>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/OnIdle State
 * '<S223>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/Time Since Enabled (With Input)1
 * '<S224>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/Determine if RPM is Falling/Derivitive
 * '<S225>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/Determine if RPM is Falling/First Order Low Pass (Tunable)
 * '<S226>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/Determine if RPM is Falling/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S227>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/MinGovernor/MotoringDetection/Time Since Enabled (With Input)2
 * '<S228>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/MinGovernor/Universal PD (Tunable & Scheduled)/PID Gain Select
 * '<S229>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/MinGovernor/Universal PD (Tunable & Scheduled)/Saturation
 * '<S230>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/MinGovernor/Universal PD (Tunable & Scheduled)/Universal PD
 * '<S231>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/MinGovernor/Universal PD (Tunable & Scheduled)/Universal PD/Derivitive
 * '<S232>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/MinGovernor/Universal PD (Tunable & Scheduled)/Universal PD/Model Info
 * '<S233>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/PID Gain Select1
 * '<S234>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/Saturation
 * '<S235>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/Universal PID
 * '<S236>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Derivitive3
 * '<S237>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Integrator
 * '<S238>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Model Info
 * '<S239>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Integrator/Saturation
 * '<S240>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/O2 Control/Map O2 Sensors to V8 Cylinders
 * '<S241>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/O2 Control/O2 Control State Determination
 * '<S242>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/O2 Control/O2 PID Calibrations
 * '<S243>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank A
 * '<S244>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank B
 * '<S245>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/O2 Control/O2Arb
 * '<S246>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/O2 Control/O2Disable
 * '<S247>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/O2 Control/O2 PID Calibrations/Error Gain Scheduling
 * '<S248>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/O2 Control/O2 PID Calibrations/O2 Control Switch Point Maps
 * '<S249>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank A/Closed-Loop O2 PID Controller
 * '<S250>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank A/Equivalence Ratio Perturbation
 * '<S251>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank A/Closed-Loop O2 PID Controller/Saturation
 * '<S252>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank A/Closed-Loop O2 PID Controller/Universal PID
 * '<S253>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank A/Closed-Loop O2 PID Controller/Universal PID/Derivitive3
 * '<S254>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank A/Closed-Loop O2 PID Controller/Universal PID/Integrator
 * '<S255>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank A/Closed-Loop O2 PID Controller/Universal PID/Model Info
 * '<S256>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank A/Closed-Loop O2 PID Controller/Universal PID/Integrator/Saturation
 * '<S257>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank A/Equivalence Ratio Perturbation/Hysteresis
 * '<S258>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank A/Equivalence Ratio Perturbation/Time Since Enabled (With Input)1
 * '<S259>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank A/Equivalence Ratio Perturbation/Time Since Enabled (With Input)2
 * '<S260>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank A/Equivalence Ratio Perturbation/Time Since Enabled (With Input)3
 * '<S261>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank B/Closed-Loop O2 PID Controller
 * '<S262>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank B/Equivalence Ratio Perturbation
 * '<S263>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank B/Closed-Loop O2 PID Controller/Saturation
 * '<S264>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank B/Closed-Loop O2 PID Controller/Universal PID
 * '<S265>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank B/Closed-Loop O2 PID Controller/Universal PID/Derivitive3
 * '<S266>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank B/Closed-Loop O2 PID Controller/Universal PID/Integrator
 * '<S267>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank B/Closed-Loop O2 PID Controller/Universal PID/Model Info
 * '<S268>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank B/Closed-Loop O2 PID Controller/Universal PID/Integrator/Saturation
 * '<S269>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank B/Equivalence Ratio Perturbation/Hysteresis
 * '<S270>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank B/Equivalence Ratio Perturbation/Time Since Enabled (With Input)1
 * '<S271>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank B/Equivalence Ratio Perturbation/Time Since Enabled (With Input)2
 * '<S272>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank B/Equivalence Ratio Perturbation/Time Since Enabled (With Input)3
 * '<S273>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/Spark Manager/Desired Eq Ratio Offset
 * '<S274>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/Spark Manager/Ethanol Spark Offset
 * '<S275>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/Spark Manager/Spark Advance Rate Limiter
 * '<S276>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/Spark Manager/SparkAdvanceLimiter
 * '<S277>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/Spark Manager/Temp Comp Offset
 * '<S278>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/Spark Manager/Spark Advance Rate Limiter/First Time
 * '<S279>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/Spark Manager/Spark Advance Rate Limiter/Saturation
 * '<S280>' : BaseEngineController_LS_112/Foreground/Control/Controller/Run/Spark Manager/SparkAdvanceLimiter/Saturation
 * '<S281>' : BaseEngineController_LS_112/Foreground/Control/Controller/Stall/FAN Control
 * '<S282>' : BaseEngineController_LS_112/Foreground/Control/Controller/Stall/Fuel Pump at Startup
 * '<S283>' : BaseEngineController_LS_112/Foreground/Control/Controller/Stall/Stall Throttle
 * '<S284>' : BaseEngineController_LS_112/Foreground/Control/Controller/Stall/FAN Control/Hysterisis
 * '<S285>' : BaseEngineController_LS_112/Foreground/Control/Controller/Stall/FAN Control/Hysterisis1
 * '<S286>' : BaseEngineController_LS_112/Foreground/Control/Controller/Stall/FAN Control/Hysterisis2
 * '<S287>' : BaseEngineController_LS_112/Foreground/Control/Controller/Stall/FAN Control/Hysterisis/Hysteresis
 * '<S288>' : BaseEngineController_LS_112/Foreground/Control/Controller/Stall/FAN Control/Hysterisis1/Hysteresis
 * '<S289>' : BaseEngineController_LS_112/Foreground/Control/Controller/Stall/FAN Control/Hysterisis2/Hysteresis
 * '<S290>' : BaseEngineController_LS_112/Foreground/Control/Controller/Stall/Fuel Pump at Startup/Time Since Enabled
 * '<S291>' : BaseEngineController_LS_112/Foreground/Control/Controller/Stall/Stall Throttle/Ice Break
 * '<S292>' : BaseEngineController_LS_112/Foreground/Control/Controller/Stall/Stall Throttle/Time Since Enabled (With Input)2
 * '<S293>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/AC Fault
 * '<S294>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/AirFlow
 * '<S295>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/Boost Fault
 * '<S296>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/Digital Sensors
 * '<S297>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/Engine Overheat Fault Logic
 * '<S298>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/Fuel Economy
 * '<S299>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/Lean Protect
 * '<S300>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/Low Oil Pressure Fault Logic
 * '<S301>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/Low Voltage
 * '<S302>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/MAP Fault Logic
 * '<S303>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/MISFIRE
 * '<S304>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/O2 Smart Sensor
 * '<S305>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/Overspeed Protection
 * '<S306>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/Wrong Fuel Pressure Fault Logic
 * '<S307>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/AC Fault/Run State
 * '<S308>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/AirFlow/Run State
 * '<S309>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/Boost Fault/Run State
 * '<S310>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/Digital Sensors/Time Since Enabled (With Input)2
 * '<S311>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/Digital Sensors/Time Since Enabled (With Input)3
 * '<S312>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/Engine Overheat Fault Logic/Run State
 * '<S313>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/Fuel Economy/Calculate Fuel Density
 * '<S314>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/Fuel Economy/First Order Low Pass (Tunable)
 * '<S315>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/Fuel Economy/Multiply and Divide, avoiding divde by zero1
 * '<S316>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/Fuel Economy/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S317>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/Lean Protect/Run State
 * '<S318>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/Low Oil Pressure Fault Logic/Run State
 * '<S319>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/Low Voltage/Run State
 * '<S320>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/Low Voltage/Run State1
 * '<S321>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/Low Voltage/Run State2
 * '<S322>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/Low Voltage/Run State3
 * '<S323>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/MAP Fault Logic/Run State
 * '<S324>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub
 * '<S325>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/MISFIRE/Run State
 * '<S326>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc
 * '<S327>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/DetermineMisfire
 * '<S328>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/StoreRPMData
 * '<S329>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/DetermineMisfire/Compare To Constant
 * '<S330>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/DetermineMisfire/DetermineCylinder
 * '<S331>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/DetermineMisfire/Rising Edge
 * '<S332>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/DetermineMisfire/SetHardFault
 * '<S333>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/DetermineMisfire/SetHardFault/Compare To Constant
 * '<S334>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/DetermineMisfire/SetHardFault/Compare To Constant1
 * '<S335>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/DetermineMisfire/SetHardFault/Compare To Constant2
 * '<S336>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/DetermineMisfire/SetHardFault/Compare To Constant3
 * '<S337>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/DetermineMisfire/SetHardFault/Compare To Constant4
 * '<S338>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/DetermineMisfire/SetHardFault/Compare To Constant5
 * '<S339>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/DetermineMisfire/SetHardFault/Compare To Constant6
 * '<S340>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/DetermineMisfire/SetHardFault/Compare To Constant7
 * '<S341>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/StoreRPMData/DetermineCylinder
 * '<S342>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/StoreRPMData/DetermineCylinder1
 * '<S343>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/StoreRPMData/EncoderAngleArb
 * '<S344>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/StoreRPMData/LatchForAverage
 * '<S345>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/StoreRPMData/LatchForAverage1
 * '<S346>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/StoreRPMData/StoreRPMStart
 * '<S347>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/StoreRPMData/StoreRPMStart1
 * '<S348>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/StoreRPMData/EncoderAngleArb/EncoderAngle_wExtrap
 * '<S349>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/StoreRPMData/EncoderAngleArb/EncoderAngle_wOExtrap
 * '<S350>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/StoreRPMData/LatchForAverage/GetInstRPM
 * '<S351>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/StoreRPMData/LatchForAverage/S-R Flip-Flop
 * '<S352>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/StoreRPMData/LatchForAverage/SafeDivide
 * '<S353>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/StoreRPMData/LatchForAverage1/GetInstRPM
 * '<S354>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/StoreRPMData/LatchForAverage1/S-R Flip-Flop
 * '<S355>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/StoreRPMData/LatchForAverage1/SafeDivide
 * '<S356>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/O2 Smart Sensor/Bank2Bank
 * '<S357>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorStatus
 * '<S358>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorVolt
 * '<S359>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/O2 Smart Sensor/Bank2Bank/Run State
 * '<S360>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorStatus/Run State1
 * '<S361>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorStatus/Run State10
 * '<S362>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorStatus/Run State11
 * '<S363>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorStatus/Run State12
 * '<S364>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorStatus/Run State13
 * '<S365>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorStatus/Run State14
 * '<S366>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorStatus/Run State15
 * '<S367>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorStatus/Run State16
 * '<S368>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorStatus/Run State2
 * '<S369>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorStatus/Run State3
 * '<S370>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorStatus/Run State4
 * '<S371>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorStatus/Run State5
 * '<S372>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorStatus/Run State6
 * '<S373>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorStatus/Run State7
 * '<S374>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorStatus/Run State8
 * '<S375>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorStatus/Run State9
 * '<S376>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorStatus/Time Since Enabled (With Input)1
 * '<S377>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorStatus/Time Since Enabled (With Input)2
 * '<S378>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorStatus/Time Since Enabled (With Input)3
 * '<S379>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorStatus/Time Since Enabled (With Input)4
 * '<S380>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorVolt/Run State
 * '<S381>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorVolt/Run State1
 * '<S382>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorVolt/Run State2
 * '<S383>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorVolt/Run State3
 * '<S384>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorVolt/Run State4
 * '<S385>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorVolt/Run State5
 * '<S386>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorVolt/Run State6
 * '<S387>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorVolt/Run State7
 * '<S388>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/Overspeed Protection/BaseRevLimit
 * '<S389>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/Overspeed Protection/BaseRevLimit/Hysterisis
 * '<S390>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/Overspeed Protection/BaseRevLimit/Hysterisis1
 * '<S391>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/Overspeed Protection/BaseRevLimit/Hysterisis2
 * '<S392>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/Overspeed Protection/BaseRevLimit/Hysterisis/Hysteresis
 * '<S393>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/Overspeed Protection/BaseRevLimit/Hysterisis1/Hysteresis
 * '<S394>' : BaseEngineController_LS_112/Foreground/Control/Diagnostics/Overspeed Protection/BaseRevLimit/Hysterisis2/Hysteresis
 * '<S395>' : BaseEngineController_LS_112/Foreground/Control/VirtualSensors/AirCalcs
 * '<S396>' : BaseEngineController_LS_112/Foreground/Control/VirtualSensors/FuelLevel
 * '<S397>' : BaseEngineController_LS_112/Foreground/Control/VirtualSensors/LoadBasedCalcs
 * '<S398>' : BaseEngineController_LS_112/Foreground/Control/VirtualSensors/Raw Indexes
 * '<S399>' : BaseEngineController_LS_112/Foreground/Control/VirtualSensors/RawProcessed
 * '<S400>' : BaseEngineController_LS_112/Foreground/Control/VirtualSensors/Virtual Indexes
 * '<S401>' : BaseEngineController_LS_112/Foreground/Control/VirtualSensors/AirCalcs/Baro Stall State Delay
 * '<S402>' : BaseEngineController_LS_112/Foreground/Control/VirtualSensors/AirCalcs/Capture Signal At Startup
 * '<S403>' : BaseEngineController_LS_112/Foreground/Control/VirtualSensors/AirCalcs/Running Baro Learn
 * '<S404>' : BaseEngineController_LS_112/Foreground/Control/VirtualSensors/AirCalcs/Speed Density - MAP Referenced - Adaptive
 * '<S405>' : BaseEngineController_LS_112/Foreground/Control/VirtualSensors/AirCalcs/motohawk_override_rel
 * '<S406>' : BaseEngineController_LS_112/Foreground/Control/VirtualSensors/AirCalcs/Capture Signal At Startup/Collect Average
 * '<S407>' : BaseEngineController_LS_112/Foreground/Control/VirtualSensors/AirCalcs/Running Baro Learn/Compare To Constant
 * '<S408>' : BaseEngineController_LS_112/Foreground/Control/VirtualSensors/AirCalcs/Running Baro Learn/Time Since Enabled (With Input)1
 * '<S409>' : BaseEngineController_LS_112/Foreground/Control/VirtualSensors/AirCalcs/Speed Density - MAP Referenced - Adaptive/Adapt VolEff Map
 * '<S410>' : BaseEngineController_LS_112/Foreground/Control/VirtualSensors/AirCalcs/Speed Density - MAP Referenced - Adaptive/C to K1
 * '<S411>' : BaseEngineController_LS_112/Foreground/Control/VirtualSensors/AirCalcs/Speed Density - MAP Referenced - Adaptive/Compare To Constant
 * '<S412>' : BaseEngineController_LS_112/Foreground/Control/VirtualSensors/AirCalcs/Speed Density - MAP Referenced - Adaptive/Adapt VolEff Map/motohawk_table_1d
 * '<S413>' : BaseEngineController_LS_112/Foreground/Control/VirtualSensors/AirCalcs/motohawk_override_rel/NewValue
 * '<S414>' : BaseEngineController_LS_112/Foreground/Control/VirtualSensors/AirCalcs/motohawk_override_rel/OldValue
 * '<S415>' : BaseEngineController_LS_112/Foreground/Control/VirtualSensors/FuelLevel/First Order Low Pass
 * '<S416>' : BaseEngineController_LS_112/Foreground/Control/VirtualSensors/FuelLevel/FuelLevelWrite
 * '<S417>' : BaseEngineController_LS_112/Foreground/Control/VirtualSensors/FuelLevel/RefuelEvent
 * '<S418>' : BaseEngineController_LS_112/Foreground/Control/VirtualSensors/FuelLevel/motohawk_table_2d
 * '<S419>' : BaseEngineController_LS_112/Foreground/Control/VirtualSensors/FuelLevel/RefuelEvent/Rising Edge
 * '<S420>' : BaseEngineController_LS_112/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag
 * '<S421>' : BaseEngineController_LS_112/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect1
 * '<S422>' : BaseEngineController_LS_112/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect3
 * '<S423>' : BaseEngineController_LS_112/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect1/DecreasingFilter
 * '<S424>' : BaseEngineController_LS_112/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect1/First Order Low Pass
 * '<S425>' : BaseEngineController_LS_112/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect1/IncreasingFilter
 * '<S426>' : BaseEngineController_LS_112/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect3/DecreasingFilter
 * '<S427>' : BaseEngineController_LS_112/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect3/First Order Low Pass
 * '<S428>' : BaseEngineController_LS_112/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect3/IncreasingFilter
 * '<S429>' : BaseEngineController_LS_112/Foreground/Control/VirtualSensors/Raw Indexes/ACPres Index
 * '<S430>' : BaseEngineController_LS_112/Foreground/Control/VirtualSensors/Raw Indexes/CAT Index
 * '<S431>' : BaseEngineController_LS_112/Foreground/Control/VirtualSensors/Raw Indexes/ECT Index
 * '<S432>' : BaseEngineController_LS_112/Foreground/Control/VirtualSensors/Raw Indexes/IAT Indexes
 * '<S433>' : BaseEngineController_LS_112/Foreground/Control/VirtualSensors/Raw Indexes/MAP Indexes
 * '<S434>' : BaseEngineController_LS_112/Foreground/Control/VirtualSensors/Raw Indexes/OXY Index
 * '<S435>' : BaseEngineController_LS_112/Foreground/Control/VirtualSensors/Raw Indexes/RPM Indexes
 * '<S436>' : BaseEngineController_LS_112/Foreground/Control/VirtualSensors/Raw Indexes/SysVolt Index
 * '<S437>' : BaseEngineController_LS_112/Foreground/Control/VirtualSensors/Raw Indexes/TPS Indexes
 * '<S438>' : BaseEngineController_LS_112/Foreground/Control/VirtualSensors/Raw Indexes/VSPD Index
 * '<S439>' : BaseEngineController_LS_112/Foreground/Control/VirtualSensors/RawProcessed/APP  Sensor Arbitration1
 * '<S440>' : BaseEngineController_LS_112/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request
 * '<S441>' : BaseEngineController_LS_112/Foreground/Control/VirtualSensors/RawProcessed/Capture ECT At Startup
 * '<S442>' : BaseEngineController_LS_112/Foreground/Control/VirtualSensors/RawProcessed/Capture IAT At Startup
 * '<S443>' : BaseEngineController_LS_112/Foreground/Control/VirtualSensors/RawProcessed/CutThrottle APP Limiting
 * '<S444>' : BaseEngineController_LS_112/Foreground/Control/VirtualSensors/RawProcessed/Engine Accel
 * '<S445>' : BaseEngineController_LS_112/Foreground/Control/VirtualSensors/RawProcessed/EngineState
 * '<S446>' : BaseEngineController_LS_112/Foreground/Control/VirtualSensors/RawProcessed/Fuel Delta Pressure Calculation
 * '<S447>' : BaseEngineController_LS_112/Foreground/Control/VirtualSensors/RawProcessed/Gear Estimator
 * '<S448>' : BaseEngineController_LS_112/Foreground/Control/VirtualSensors/RawProcessed/O2 De-lag
 * '<S449>' : BaseEngineController_LS_112/Foreground/Control/VirtualSensors/RawProcessed/Stall
 * '<S450>' : BaseEngineController_LS_112/Foreground/Control/VirtualSensors/RawProcessed/TPS  Sensor Arbitration
 * '<S451>' : BaseEngineController_LS_112/Foreground/Control/VirtualSensors/RawProcessed/Time Since Key On
 * '<S452>' : BaseEngineController_LS_112/Foreground/Control/VirtualSensors/RawProcessed/Time Since Run
 * '<S453>' : BaseEngineController_LS_112/Foreground/Control/VirtualSensors/RawProcessed/Time Since Stall
 * '<S454>' : BaseEngineController_LS_112/Foreground/Control/VirtualSensors/RawProcessed/VSPD_Selector
 * '<S455>' : BaseEngineController_LS_112/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request/First Order Low Pass
 * '<S456>' : BaseEngineController_LS_112/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request/PassThrough1
 * '<S457>' : BaseEngineController_LS_112/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request/PassThrough2
 * '<S458>' : BaseEngineController_LS_112/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request/Variable Rate Limiter
 * '<S459>' : BaseEngineController_LS_112/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request/Variable Rate Limiter/Saturation
 * '<S460>' : BaseEngineController_LS_112/Foreground/Control/VirtualSensors/RawProcessed/Capture ECT At Startup/Collect Average
 * '<S461>' : BaseEngineController_LS_112/Foreground/Control/VirtualSensors/RawProcessed/Capture IAT At Startup/Collect Average
 * '<S462>' : BaseEngineController_LS_112/Foreground/Control/VirtualSensors/RawProcessed/CutThrottle APP Limiting/Bound APP if overheating
 * '<S463>' : BaseEngineController_LS_112/Foreground/Control/VirtualSensors/RawProcessed/Engine Accel/Derivitive3
 * '<S464>' : BaseEngineController_LS_112/Foreground/Control/VirtualSensors/RawProcessed/Engine Accel/First Order Low Pass (Tunable)
 * '<S465>' : BaseEngineController_LS_112/Foreground/Control/VirtualSensors/RawProcessed/Engine Accel/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S466>' : BaseEngineController_LS_112/Foreground/Control/VirtualSensors/RawProcessed/EngineState/Engine State Machine
 * '<S467>' : BaseEngineController_LS_112/Foreground/Control/VirtualSensors/RawProcessed/EngineState/TDC_Counter
 * '<S468>' : BaseEngineController_LS_112/Foreground/Control/VirtualSensors/RawProcessed/EngineState/TDC_Counter/Crank State
 * '<S469>' : BaseEngineController_LS_112/Foreground/Control/VirtualSensors/RawProcessed/Time Since Key On/Time Since Enabled (With Input)2
 * '<S470>' : BaseEngineController_LS_112/Foreground/Control/VirtualSensors/RawProcessed/Time Since Run/RunState
 * '<S471>' : BaseEngineController_LS_112/Foreground/Control/VirtualSensors/RawProcessed/Time Since Run/Time Since Enabled (With Input)2
 * '<S472>' : BaseEngineController_LS_112/Foreground/Control/VirtualSensors/RawProcessed/Time Since Stall/Stall State
 * '<S473>' : BaseEngineController_LS_112/Foreground/Control/VirtualSensors/RawProcessed/Time Since Stall/Time Since Enabled (With Input)1
 * '<S474>' : BaseEngineController_LS_112/Foreground/Control/VirtualSensors/Virtual Indexes/ECT_KeyUp
 * '<S475>' : BaseEngineController_LS_112/Foreground/Control/VirtualSensors/Virtual Indexes/IAT_KeyUp
 * '<S476>' : BaseEngineController_LS_112/Foreground/Control/VirtualSensors/Virtual Indexes/MAFPortIndex
 * '<S477>' : BaseEngineController_LS_112/Foreground/Control/motohawk_function_collector/motohawk_function_collector_in
 * '<S478>' : BaseEngineController_LS_112/Foreground/Control/motohawk_function_collector/motohawk_function_collector_in/Triggered Subsystem
 * '<S479>' : BaseEngineController_LS_112/Foreground/Inputs/CAN
 * '<S480>' : BaseEngineController_LS_112/Foreground/Inputs/Digital
 * '<S481>' : BaseEngineController_LS_112/Foreground/Inputs/EngineSpeed
 * '<S482>' : BaseEngineController_LS_112/Foreground/Inputs/LinearSensors
 * '<S483>' : BaseEngineController_LS_112/Foreground/Inputs/NonLinearSensors
 * '<S484>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors
 * '<S485>' : BaseEngineController_LS_112/Foreground/Inputs/CAN/AEM GPS
 * '<S486>' : BaseEngineController_LS_112/Foreground/Inputs/CAN/AEM X Lambda
 * '<S487>' : BaseEngineController_LS_112/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization
 * '<S488>' : BaseEngineController_LS_112/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization1
 * '<S489>' : BaseEngineController_LS_112/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization/First Order Low Pass
 * '<S490>' : BaseEngineController_LS_112/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization/If Action Subsystem
 * '<S491>' : BaseEngineController_LS_112/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization/If Action Subsystem1
 * '<S492>' : BaseEngineController_LS_112/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization/If Action Subsystem2
 * '<S493>' : BaseEngineController_LS_112/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization/Override
 * '<S494>' : BaseEngineController_LS_112/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization/First Order Low Pass/First Order Low Pass
 * '<S495>' : BaseEngineController_LS_112/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization/Override/NewValue
 * '<S496>' : BaseEngineController_LS_112/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization/Override/OldValue
 * '<S497>' : BaseEngineController_LS_112/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization1/First Order Low Pass
 * '<S498>' : BaseEngineController_LS_112/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization1/If Action Subsystem
 * '<S499>' : BaseEngineController_LS_112/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization1/If Action Subsystem1
 * '<S500>' : BaseEngineController_LS_112/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization1/If Action Subsystem2
 * '<S501>' : BaseEngineController_LS_112/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization1/Override
 * '<S502>' : BaseEngineController_LS_112/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization1/First Order Low Pass/First Order Low Pass
 * '<S503>' : BaseEngineController_LS_112/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization1/Override/NewValue
 * '<S504>' : BaseEngineController_LS_112/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization1/Override/OldValue
 * '<S505>' : BaseEngineController_LS_112/Foreground/Inputs/Digital/ACSw
 * '<S506>' : BaseEngineController_LS_112/Foreground/Inputs/Digital/ClutchSw
 * '<S507>' : BaseEngineController_LS_112/Foreground/Inputs/Digital/ESTOP
 * '<S508>' : BaseEngineController_LS_112/Foreground/Inputs/Digital/MAF_Sensor
 * '<S509>' : BaseEngineController_LS_112/Foreground/Inputs/Digital/Scramble
 * '<S510>' : BaseEngineController_LS_112/Foreground/Inputs/Digital/VSPD
 * '<S511>' : BaseEngineController_LS_112/Foreground/Inputs/Digital/VSPD_Filt
 * '<S512>' : BaseEngineController_LS_112/Foreground/Inputs/Digital/ACSw /Override in Engineering Units
 * '<S513>' : BaseEngineController_LS_112/Foreground/Inputs/Digital/ACSw /Override in Engineering Units/NewValue
 * '<S514>' : BaseEngineController_LS_112/Foreground/Inputs/Digital/ACSw /Override in Engineering Units/OldValue
 * '<S515>' : BaseEngineController_LS_112/Foreground/Inputs/Digital/ClutchSw/Override in Engineering Units
 * '<S516>' : BaseEngineController_LS_112/Foreground/Inputs/Digital/ClutchSw/Override in Engineering Units/NewValue
 * '<S517>' : BaseEngineController_LS_112/Foreground/Inputs/Digital/ClutchSw/Override in Engineering Units/OldValue
 * '<S518>' : BaseEngineController_LS_112/Foreground/Inputs/Digital/ESTOP/Override in Engineering Units
 * '<S519>' : BaseEngineController_LS_112/Foreground/Inputs/Digital/ESTOP/Override in Engineering Units/NewValue
 * '<S520>' : BaseEngineController_LS_112/Foreground/Inputs/Digital/ESTOP/Override in Engineering Units/OldValue
 * '<S521>' : BaseEngineController_LS_112/Foreground/Inputs/Digital/MAF_Sensor/First Order Low Pass
 * '<S522>' : BaseEngineController_LS_112/Foreground/Inputs/Digital/MAF_Sensor/If Action Subsystem
 * '<S523>' : BaseEngineController_LS_112/Foreground/Inputs/Digital/MAF_Sensor/If Action Subsystem1
 * '<S524>' : BaseEngineController_LS_112/Foreground/Inputs/Digital/MAF_Sensor/If Action Subsystem2
 * '<S525>' : BaseEngineController_LS_112/Foreground/Inputs/Digital/MAF_Sensor/Override
 * '<S526>' : BaseEngineController_LS_112/Foreground/Inputs/Digital/MAF_Sensor/motohawk_table_1d1
 * '<S527>' : BaseEngineController_LS_112/Foreground/Inputs/Digital/MAF_Sensor/First Order Low Pass/First Order Low Pass
 * '<S528>' : BaseEngineController_LS_112/Foreground/Inputs/Digital/MAF_Sensor/Override/NewValue
 * '<S529>' : BaseEngineController_LS_112/Foreground/Inputs/Digital/MAF_Sensor/Override/OldValue
 * '<S530>' : BaseEngineController_LS_112/Foreground/Inputs/Digital/Scramble /Button Delay 1
 * '<S531>' : BaseEngineController_LS_112/Foreground/Inputs/Digital/Scramble /Override in Engineering Units
 * '<S532>' : BaseEngineController_LS_112/Foreground/Inputs/Digital/Scramble /Button Delay 1/Time Since Enabled (With Input)4
 * '<S533>' : BaseEngineController_LS_112/Foreground/Inputs/Digital/Scramble /Override in Engineering Units/NewValue
 * '<S534>' : BaseEngineController_LS_112/Foreground/Inputs/Digital/Scramble /Override in Engineering Units/OldValue
 * '<S535>' : BaseEngineController_LS_112/Foreground/Inputs/Digital/VSPD/First Order Low Pass
 * '<S536>' : BaseEngineController_LS_112/Foreground/Inputs/Digital/VSPD/If Action Subsystem
 * '<S537>' : BaseEngineController_LS_112/Foreground/Inputs/Digital/VSPD/If Action Subsystem1
 * '<S538>' : BaseEngineController_LS_112/Foreground/Inputs/Digital/VSPD/If Action Subsystem2
 * '<S539>' : BaseEngineController_LS_112/Foreground/Inputs/Digital/VSPD/Override
 * '<S540>' : BaseEngineController_LS_112/Foreground/Inputs/Digital/VSPD/motohawk_table_1d1
 * '<S541>' : BaseEngineController_LS_112/Foreground/Inputs/Digital/VSPD/First Order Low Pass/First Order Low Pass
 * '<S542>' : BaseEngineController_LS_112/Foreground/Inputs/Digital/VSPD/Override/NewValue
 * '<S543>' : BaseEngineController_LS_112/Foreground/Inputs/Digital/VSPD/Override/OldValue
 * '<S544>' : BaseEngineController_LS_112/Foreground/Inputs/Digital/VSPD_Filt/Derivitive
 * '<S545>' : BaseEngineController_LS_112/Foreground/Inputs/Digital/VSPD_Filt/S-R Flip-Flop
 * '<S546>' : BaseEngineController_LS_112/Foreground/Inputs/Digital/VSPD_Filt/Time Since Enabled (With Input)1
 * '<S547>' : BaseEngineController_LS_112/Foreground/Inputs/EngineSpeed/Encoder Diagnostics
 * '<S548>' : BaseEngineController_LS_112/Foreground/Inputs/EngineSpeed/First Order Low Pass (Tunable)1
 * '<S549>' : BaseEngineController_LS_112/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/CamEdges
 * '<S550>' : BaseEngineController_LS_112/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/CamSync
 * '<S551>' : BaseEngineController_LS_112/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/CounterThresh
 * '<S552>' : BaseEngineController_LS_112/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/CrankEdges
 * '<S553>' : BaseEngineController_LS_112/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/CrankSync
 * '<S554>' : BaseEngineController_LS_112/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/motohawk_model_probe_eval_f
 * '<S555>' : BaseEngineController_LS_112/Foreground/Inputs/EngineSpeed/First Order Low Pass (Tunable)1/First Order Low Pass
 * '<S556>' : BaseEngineController_LS_112/Foreground/Inputs/LinearSensors/ACPres
 * '<S557>' : BaseEngineController_LS_112/Foreground/Inputs/LinearSensors/FuelOxygenationSensor
 * '<S558>' : BaseEngineController_LS_112/Foreground/Inputs/LinearSensors/FuelPres
 * '<S559>' : BaseEngineController_LS_112/Foreground/Inputs/LinearSensors/MAP
 * '<S560>' : BaseEngineController_LS_112/Foreground/Inputs/LinearSensors/MAPTime
 * '<S561>' : BaseEngineController_LS_112/Foreground/Inputs/LinearSensors/MAP_Crank_Synchronous
 * '<S562>' : BaseEngineController_LS_112/Foreground/Inputs/LinearSensors/OilPres
 * '<S563>' : BaseEngineController_LS_112/Foreground/Inputs/LinearSensors/SensVolts
 * '<S564>' : BaseEngineController_LS_112/Foreground/Inputs/LinearSensors/SysVolts
 * '<S565>' : BaseEngineController_LS_112/Foreground/Inputs/LinearSensors/ACPres /First Order Low Pass
 * '<S566>' : BaseEngineController_LS_112/Foreground/Inputs/LinearSensors/ACPres /If Action Subsystem
 * '<S567>' : BaseEngineController_LS_112/Foreground/Inputs/LinearSensors/ACPres /If Action Subsystem1
 * '<S568>' : BaseEngineController_LS_112/Foreground/Inputs/LinearSensors/ACPres /If Action Subsystem2
 * '<S569>' : BaseEngineController_LS_112/Foreground/Inputs/LinearSensors/ACPres /Override
 * '<S570>' : BaseEngineController_LS_112/Foreground/Inputs/LinearSensors/ACPres /First Order Low Pass/First Order Low Pass
 * '<S571>' : BaseEngineController_LS_112/Foreground/Inputs/LinearSensors/ACPres /Override/NewValue
 * '<S572>' : BaseEngineController_LS_112/Foreground/Inputs/LinearSensors/ACPres /Override/OldValue
 * '<S573>' : BaseEngineController_LS_112/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options
 * '<S574>' : BaseEngineController_LS_112/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/If Action Subsystem
 * '<S575>' : BaseEngineController_LS_112/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/If Action Subsystem1
 * '<S576>' : BaseEngineController_LS_112/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/If Action Subsystem2
 * '<S577>' : BaseEngineController_LS_112/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Override
 * '<S578>' : BaseEngineController_LS_112/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options/First Order Low Pass
 * '<S579>' : BaseEngineController_LS_112/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options/Moving Average Filter
 * '<S580>' : BaseEngineController_LS_112/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options/Rate Limiter
 * '<S581>' : BaseEngineController_LS_112/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options/First Order Low Pass/First Order Low Pass
 * '<S582>' : BaseEngineController_LS_112/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options/Rate Limiter/Variable Rate Limiter
 * '<S583>' : BaseEngineController_LS_112/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options/Rate Limiter/Variable Rate Limiter/Saturation
 * '<S584>' : BaseEngineController_LS_112/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Override/NewValue
 * '<S585>' : BaseEngineController_LS_112/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Override/OldValue
 * '<S586>' : BaseEngineController_LS_112/Foreground/Inputs/LinearSensors/FuelPres/First Order Low Pass
 * '<S587>' : BaseEngineController_LS_112/Foreground/Inputs/LinearSensors/FuelPres/If Action Subsystem
 * '<S588>' : BaseEngineController_LS_112/Foreground/Inputs/LinearSensors/FuelPres/If Action Subsystem1
 * '<S589>' : BaseEngineController_LS_112/Foreground/Inputs/LinearSensors/FuelPres/If Action Subsystem2
 * '<S590>' : BaseEngineController_LS_112/Foreground/Inputs/LinearSensors/FuelPres/Override
 * '<S591>' : BaseEngineController_LS_112/Foreground/Inputs/LinearSensors/FuelPres/First Order Low Pass/First Order Low Pass
 * '<S592>' : BaseEngineController_LS_112/Foreground/Inputs/LinearSensors/FuelPres/Override/NewValue
 * '<S593>' : BaseEngineController_LS_112/Foreground/Inputs/LinearSensors/FuelPres/Override/OldValue
 * '<S594>' : BaseEngineController_LS_112/Foreground/Inputs/LinearSensors/MAP/First Order Low Pass
 * '<S595>' : BaseEngineController_LS_112/Foreground/Inputs/LinearSensors/MAP/If Action Subsystem
 * '<S596>' : BaseEngineController_LS_112/Foreground/Inputs/LinearSensors/MAP/If Action Subsystem1
 * '<S597>' : BaseEngineController_LS_112/Foreground/Inputs/LinearSensors/MAP/If Action Subsystem2
 * '<S598>' : BaseEngineController_LS_112/Foreground/Inputs/LinearSensors/MAP/Override
 * '<S599>' : BaseEngineController_LS_112/Foreground/Inputs/LinearSensors/MAP/First Order Low Pass/First Order Low Pass
 * '<S600>' : BaseEngineController_LS_112/Foreground/Inputs/LinearSensors/MAP/Override/NewValue
 * '<S601>' : BaseEngineController_LS_112/Foreground/Inputs/LinearSensors/MAP/Override/OldValue
 * '<S602>' : BaseEngineController_LS_112/Foreground/Inputs/LinearSensors/MAPTime/First Order Low Pass
 * '<S603>' : BaseEngineController_LS_112/Foreground/Inputs/LinearSensors/MAPTime/If Action Subsystem
 * '<S604>' : BaseEngineController_LS_112/Foreground/Inputs/LinearSensors/MAPTime/If Action Subsystem1
 * '<S605>' : BaseEngineController_LS_112/Foreground/Inputs/LinearSensors/MAPTime/If Action Subsystem2
 * '<S606>' : BaseEngineController_LS_112/Foreground/Inputs/LinearSensors/MAPTime/Override
 * '<S607>' : BaseEngineController_LS_112/Foreground/Inputs/LinearSensors/MAPTime/First Order Low Pass/First Order Low Pass
 * '<S608>' : BaseEngineController_LS_112/Foreground/Inputs/LinearSensors/MAPTime/Override/NewValue
 * '<S609>' : BaseEngineController_LS_112/Foreground/Inputs/LinearSensors/MAPTime/Override/OldValue
 * '<S610>' : BaseEngineController_LS_112/Foreground/Inputs/LinearSensors/MAP_Crank_Synchronous/MID_TDC
 * '<S611>' : BaseEngineController_LS_112/Foreground/Inputs/LinearSensors/MAP_Crank_Synchronous/Once at Startup
 * '<S612>' : BaseEngineController_LS_112/Foreground/Inputs/LinearSensors/OilPres/First Order Low Pass
 * '<S613>' : BaseEngineController_LS_112/Foreground/Inputs/LinearSensors/OilPres/If Action Subsystem
 * '<S614>' : BaseEngineController_LS_112/Foreground/Inputs/LinearSensors/OilPres/If Action Subsystem1
 * '<S615>' : BaseEngineController_LS_112/Foreground/Inputs/LinearSensors/OilPres/If Action Subsystem2
 * '<S616>' : BaseEngineController_LS_112/Foreground/Inputs/LinearSensors/OilPres/Override
 * '<S617>' : BaseEngineController_LS_112/Foreground/Inputs/LinearSensors/OilPres/First Order Low Pass/First Order Low Pass
 * '<S618>' : BaseEngineController_LS_112/Foreground/Inputs/LinearSensors/OilPres/Override/NewValue
 * '<S619>' : BaseEngineController_LS_112/Foreground/Inputs/LinearSensors/OilPres/Override/OldValue
 * '<S620>' : BaseEngineController_LS_112/Foreground/Inputs/LinearSensors/SensVolts/First Order Low Pass
 * '<S621>' : BaseEngineController_LS_112/Foreground/Inputs/LinearSensors/SensVolts/If Action Subsystem
 * '<S622>' : BaseEngineController_LS_112/Foreground/Inputs/LinearSensors/SensVolts/If Action Subsystem1
 * '<S623>' : BaseEngineController_LS_112/Foreground/Inputs/LinearSensors/SensVolts/If Action Subsystem2
 * '<S624>' : BaseEngineController_LS_112/Foreground/Inputs/LinearSensors/SensVolts/Override
 * '<S625>' : BaseEngineController_LS_112/Foreground/Inputs/LinearSensors/SensVolts/First Order Low Pass/First Order Low Pass
 * '<S626>' : BaseEngineController_LS_112/Foreground/Inputs/LinearSensors/SensVolts/Override/NewValue
 * '<S627>' : BaseEngineController_LS_112/Foreground/Inputs/LinearSensors/SensVolts/Override/OldValue
 * '<S628>' : BaseEngineController_LS_112/Foreground/Inputs/LinearSensors/SysVolts/First Order Low Pass
 * '<S629>' : BaseEngineController_LS_112/Foreground/Inputs/LinearSensors/SysVolts/If Action Subsystem
 * '<S630>' : BaseEngineController_LS_112/Foreground/Inputs/LinearSensors/SysVolts/If Action Subsystem1
 * '<S631>' : BaseEngineController_LS_112/Foreground/Inputs/LinearSensors/SysVolts/If Action Subsystem2
 * '<S632>' : BaseEngineController_LS_112/Foreground/Inputs/LinearSensors/SysVolts/Override
 * '<S633>' : BaseEngineController_LS_112/Foreground/Inputs/LinearSensors/SysVolts/First Order Low Pass/First Order Low Pass
 * '<S634>' : BaseEngineController_LS_112/Foreground/Inputs/LinearSensors/SysVolts/Override/NewValue
 * '<S635>' : BaseEngineController_LS_112/Foreground/Inputs/LinearSensors/SysVolts/Override/OldValue
 * '<S636>' : BaseEngineController_LS_112/Foreground/Inputs/NonLinearSensors/Fuel Level
 * '<S637>' : BaseEngineController_LS_112/Foreground/Inputs/NonLinearSensors/Temp Sensors
 * '<S638>' : BaseEngineController_LS_112/Foreground/Inputs/NonLinearSensors/Fuel Level/Fuel_Lvl
 * '<S639>' : BaseEngineController_LS_112/Foreground/Inputs/NonLinearSensors/Fuel Level/Fuel_Lvl  /First Order Low Pass
 * '<S640>' : BaseEngineController_LS_112/Foreground/Inputs/NonLinearSensors/Fuel Level/Fuel_Lvl  /If Action Subsystem
 * '<S641>' : BaseEngineController_LS_112/Foreground/Inputs/NonLinearSensors/Fuel Level/Fuel_Lvl  /If Action Subsystem1
 * '<S642>' : BaseEngineController_LS_112/Foreground/Inputs/NonLinearSensors/Fuel Level/Fuel_Lvl  /If Action Subsystem2
 * '<S643>' : BaseEngineController_LS_112/Foreground/Inputs/NonLinearSensors/Fuel Level/Fuel_Lvl  /Override
 * '<S644>' : BaseEngineController_LS_112/Foreground/Inputs/NonLinearSensors/Fuel Level/Fuel_Lvl  /motohawk_table_1d1
 * '<S645>' : BaseEngineController_LS_112/Foreground/Inputs/NonLinearSensors/Fuel Level/Fuel_Lvl  /First Order Low Pass/First Order Low Pass
 * '<S646>' : BaseEngineController_LS_112/Foreground/Inputs/NonLinearSensors/Fuel Level/Fuel_Lvl  /Override/NewValue
 * '<S647>' : BaseEngineController_LS_112/Foreground/Inputs/NonLinearSensors/Fuel Level/Fuel_Lvl  /Override/OldValue
 * '<S648>' : BaseEngineController_LS_112/Foreground/Inputs/NonLinearSensors/Temp Sensors/CAT1
 * '<S649>' : BaseEngineController_LS_112/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT
 * '<S650>' : BaseEngineController_LS_112/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP
 * '<S651>' : BaseEngineController_LS_112/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT
 * '<S652>' : BaseEngineController_LS_112/Foreground/Inputs/NonLinearSensors/Temp Sensors/CAT1/First Order Low Pass
 * '<S653>' : BaseEngineController_LS_112/Foreground/Inputs/NonLinearSensors/Temp Sensors/CAT1/If Action Subsystem
 * '<S654>' : BaseEngineController_LS_112/Foreground/Inputs/NonLinearSensors/Temp Sensors/CAT1/If Action Subsystem1
 * '<S655>' : BaseEngineController_LS_112/Foreground/Inputs/NonLinearSensors/Temp Sensors/CAT1/If Action Subsystem2
 * '<S656>' : BaseEngineController_LS_112/Foreground/Inputs/NonLinearSensors/Temp Sensors/CAT1/Override
 * '<S657>' : BaseEngineController_LS_112/Foreground/Inputs/NonLinearSensors/Temp Sensors/CAT1/motohawk_table_1d1
 * '<S658>' : BaseEngineController_LS_112/Foreground/Inputs/NonLinearSensors/Temp Sensors/CAT1/First Order Low Pass/First Order Low Pass
 * '<S659>' : BaseEngineController_LS_112/Foreground/Inputs/NonLinearSensors/Temp Sensors/CAT1/Override/NewValue
 * '<S660>' : BaseEngineController_LS_112/Foreground/Inputs/NonLinearSensors/Temp Sensors/CAT1/Override/OldValue
 * '<S661>' : BaseEngineController_LS_112/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /First Order Low Pass
 * '<S662>' : BaseEngineController_LS_112/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /If Action Subsystem
 * '<S663>' : BaseEngineController_LS_112/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /If Action Subsystem1
 * '<S664>' : BaseEngineController_LS_112/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /If Action Subsystem2
 * '<S665>' : BaseEngineController_LS_112/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /Override
 * '<S666>' : BaseEngineController_LS_112/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /motohawk_table_1d1
 * '<S667>' : BaseEngineController_LS_112/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /First Order Low Pass/First Order Low Pass
 * '<S668>' : BaseEngineController_LS_112/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /Override/NewValue
 * '<S669>' : BaseEngineController_LS_112/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /Override/OldValue
 * '<S670>' : BaseEngineController_LS_112/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /First Order Low Pass
 * '<S671>' : BaseEngineController_LS_112/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /If Action Subsystem
 * '<S672>' : BaseEngineController_LS_112/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /If Action Subsystem1
 * '<S673>' : BaseEngineController_LS_112/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /If Action Subsystem2
 * '<S674>' : BaseEngineController_LS_112/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /Override
 * '<S675>' : BaseEngineController_LS_112/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /motohawk_table_1d1
 * '<S676>' : BaseEngineController_LS_112/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /First Order Low Pass/First Order Low Pass
 * '<S677>' : BaseEngineController_LS_112/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /Override/NewValue
 * '<S678>' : BaseEngineController_LS_112/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /Override/OldValue
 * '<S679>' : BaseEngineController_LS_112/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /First Order Low Pass
 * '<S680>' : BaseEngineController_LS_112/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /If Action Subsystem
 * '<S681>' : BaseEngineController_LS_112/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /If Action Subsystem1
 * '<S682>' : BaseEngineController_LS_112/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /If Action Subsystem2
 * '<S683>' : BaseEngineController_LS_112/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /Override
 * '<S684>' : BaseEngineController_LS_112/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /motohawk_table_1d1
 * '<S685>' : BaseEngineController_LS_112/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /First Order Low Pass/First Order Low Pass
 * '<S686>' : BaseEngineController_LS_112/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /Override/NewValue
 * '<S687>' : BaseEngineController_LS_112/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /Override/OldValue
 * '<S688>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/APP1
 * '<S689>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/APP1ForcedAdapt
 * '<S690>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/APP2
 * '<S691>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/APP2ForcedAdapt
 * '<S692>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt
 * '<S693>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1
 * '<S694>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/TPS1
 * '<S695>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/TPS2
 * '<S696>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/APP1/First Order Low Pass
 * '<S697>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/APP1/If Action Subsystem
 * '<S698>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/APP1/If Action Subsystem1
 * '<S699>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/APP1/If Action Subsystem2
 * '<S700>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/APP1/Override
 * '<S701>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/APP1/Saturation
 * '<S702>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/APP1/motohawk_table_1d1
 * '<S703>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/APP1/First Order Low Pass/First Order Low Pass
 * '<S704>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/APP1/Override/NewValue
 * '<S705>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/APP1/Override/OldValue
 * '<S706>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/APP1ForcedAdapt/Function-Call Subsystem
 * '<S707>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/APP1ForcedAdapt/Function-Call Subsystem/First Time
 * '<S708>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/APP2/First Order Low Pass
 * '<S709>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/APP2/If Action Subsystem
 * '<S710>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/APP2/If Action Subsystem1
 * '<S711>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/APP2/If Action Subsystem2
 * '<S712>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/APP2/Override
 * '<S713>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/APP2/Saturation
 * '<S714>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/APP2/motohawk_table_1d1
 * '<S715>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/APP2/First Order Low Pass/First Order Low Pass
 * '<S716>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/APP2/Override/NewValue
 * '<S717>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/APP2/Override/OldValue
 * '<S718>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/APP2ForcedAdapt/Function-Call Subsystem
 * '<S719>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/APP2ForcedAdapt/Function-Call Subsystem/First Time
 * '<S720>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/ADAPT SCALING
 * '<S721>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/FAULTS
 * '<S722>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/First Order Low Pass
 * '<S723>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/SENSOR FAULT MANAGER
 * '<S724>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/Saturation
 * '<S725>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/ADAPT SCALING/ADAPT HI
 * '<S726>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/ADAPT SCALING/ADAPT LO
 * '<S727>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/ADAPT SCALING/MinMaxFilter
 * '<S728>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/ADAPT SCALING/ADAPT HI/Store Current Position
 * '<S729>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/ADAPT SCALING/ADAPT LO/Store Current Position
 * '<S730>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/First Order Low Pass/First Order Low Pass
 * '<S731>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/SENSOR FAULT MANAGER/If Action Subsystem
 * '<S732>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/SENSOR FAULT MANAGER/If Action Subsystem1
 * '<S733>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/SENSOR FAULT MANAGER/If Action Subsystem2
 * '<S734>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/SENSOR FAULT MANAGER/Override
 * '<S735>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/SENSOR FAULT MANAGER/Override/NewValue
 * '<S736>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/SENSOR FAULT MANAGER/Override/OldValue
 * '<S737>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/ADAPT SCALING
 * '<S738>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/FAULTS
 * '<S739>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/First Order Low Pass
 * '<S740>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/SENSOR FAULT MANAGER
 * '<S741>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/Saturation
 * '<S742>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/ADAPT SCALING/ADAPT HI
 * '<S743>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/ADAPT SCALING/ADAPT LO
 * '<S744>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/ADAPT SCALING/MinMaxFilter
 * '<S745>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/ADAPT SCALING/ADAPT HI/Store Current Position
 * '<S746>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/ADAPT SCALING/ADAPT LO/Store Current Position
 * '<S747>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/First Order Low Pass/First Order Low Pass
 * '<S748>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/SENSOR FAULT MANAGER/If Action Subsystem
 * '<S749>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/SENSOR FAULT MANAGER/If Action Subsystem1
 * '<S750>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/SENSOR FAULT MANAGER/If Action Subsystem2
 * '<S751>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/SENSOR FAULT MANAGER/Override
 * '<S752>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/SENSOR FAULT MANAGER/Override/NewValue
 * '<S753>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/SENSOR FAULT MANAGER/Override/OldValue
 * '<S754>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/TPS1/ADAPT SCALING
 * '<S755>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/TPS1/FAULTS
 * '<S756>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/TPS1/First Order Low Pass
 * '<S757>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER
 * '<S758>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/TPS1/Saturation
 * '<S759>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/TPS1/ADAPT SCALING/ADAPT HI
 * '<S760>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/TPS1/ADAPT SCALING/ADAPT LO
 * '<S761>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/TPS1/ADAPT SCALING/MinMaxFilter
 * '<S762>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/TPS1/ADAPT SCALING/ADAPT HI/Store Current Position
 * '<S763>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/TPS1/ADAPT SCALING/ADAPT LO/Store Current Position
 * '<S764>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/TPS1/First Order Low Pass/First Order Low Pass
 * '<S765>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER/If Action Subsystem
 * '<S766>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER/If Action Subsystem1
 * '<S767>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER/If Action Subsystem2
 * '<S768>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER/Override
 * '<S769>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER/Override/NewValue
 * '<S770>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER/Override/OldValue
 * '<S771>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/TPS2/ADAPT SCALING
 * '<S772>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/TPS2/FAULTS
 * '<S773>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/TPS2/First Order Low Pass
 * '<S774>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER
 * '<S775>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/TPS2/Saturation
 * '<S776>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/TPS2/ADAPT SCALING/ADAPT HI
 * '<S777>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/TPS2/ADAPT SCALING/ADAPT LO
 * '<S778>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/TPS2/ADAPT SCALING/MinMaxFilter
 * '<S779>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/TPS2/ADAPT SCALING/ADAPT HI/Store Current Position
 * '<S780>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/TPS2/ADAPT SCALING/ADAPT LO/Store Current Position
 * '<S781>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/TPS2/First Order Low Pass/First Order Low Pass
 * '<S782>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER/If Action Subsystem
 * '<S783>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER/If Action Subsystem1
 * '<S784>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER/If Action Subsystem2
 * '<S785>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER/Override
 * '<S786>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER/Override/NewValue
 * '<S787>' : BaseEngineController_LS_112/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER/Override/OldValue
 * '<S788>' : BaseEngineController_LS_112/Foreground/Outputs/AC Control
 * '<S789>' : BaseEngineController_LS_112/Foreground/Outputs/AEM Infinity Dash
 * '<S790>' : BaseEngineController_LS_112/Foreground/Outputs/Coil Control
 * '<S791>' : BaseEngineController_LS_112/Foreground/Outputs/ETC_CutPower
 * '<S792>' : BaseEngineController_LS_112/Foreground/Outputs/FAN Control
 * '<S793>' : BaseEngineController_LS_112/Foreground/Outputs/FuelPump
 * '<S794>' : BaseEngineController_LS_112/Foreground/Outputs/HBridge
 * '<S795>' : BaseEngineController_LS_112/Foreground/Outputs/IAC-Control
 * '<S796>' : BaseEngineController_LS_112/Foreground/Outputs/Injector Control
 * '<S797>' : BaseEngineController_LS_112/Foreground/Outputs/WASTEGATE-Control
 * '<S798>' : BaseEngineController_LS_112/Foreground/Outputs/AC Control/Discrete Actuator - AC
 * '<S799>' : BaseEngineController_LS_112/Foreground/Outputs/AC Control/Discrete Actuator - AC/Override in Engineering Units
 * '<S800>' : BaseEngineController_LS_112/Foreground/Outputs/AC Control/Discrete Actuator - AC/Override in Engineering Units/NewValue
 * '<S801>' : BaseEngineController_LS_112/Foreground/Outputs/AC Control/Discrete Actuator - AC/Override in Engineering Units/OldValue
 * '<S802>' : BaseEngineController_LS_112/Foreground/Outputs/AEM Infinity Dash/Dash Custom 1
 * '<S803>' : BaseEngineController_LS_112/Foreground/Outputs/AEM Infinity Dash/Dash Message 1
 * '<S804>' : BaseEngineController_LS_112/Foreground/Outputs/AEM Infinity Dash/Dash Message 2
 * '<S805>' : BaseEngineController_LS_112/Foreground/Outputs/AEM Infinity Dash/Dash Message 3
 * '<S806>' : BaseEngineController_LS_112/Foreground/Outputs/AEM Infinity Dash/Dash Message 4
 * '<S807>' : BaseEngineController_LS_112/Foreground/Outputs/AEM Infinity Dash/Dash Message 5
 * '<S808>' : BaseEngineController_LS_112/Foreground/Outputs/AEM Infinity Dash/Dash Message 6
 * '<S809>' : BaseEngineController_LS_112/Foreground/Outputs/AEM Infinity Dash/Dash Message 7
 * '<S810>' : BaseEngineController_LS_112/Foreground/Outputs/AEM Infinity Dash/Dash Message 8
 * '<S811>' : BaseEngineController_LS_112/Foreground/Outputs/AEM Infinity Dash/Dash Message Boost
 * '<S812>' : BaseEngineController_LS_112/Foreground/Outputs/AEM Infinity Dash/Dash Message DBW
 * '<S813>' : BaseEngineController_LS_112/Foreground/Outputs/AEM Infinity Dash/Dash Message 1/First Order Low Pass (Tunable)
 * '<S814>' : BaseEngineController_LS_112/Foreground/Outputs/AEM Infinity Dash/Dash Message 1/RPM_Filt
 * '<S815>' : BaseEngineController_LS_112/Foreground/Outputs/AEM Infinity Dash/Dash Message 1/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S816>' : BaseEngineController_LS_112/Foreground/Outputs/AEM Infinity Dash/Dash Message 1/RPM_Filt/First Order Low Pass (Tunable)
 * '<S817>' : BaseEngineController_LS_112/Foreground/Outputs/AEM Infinity Dash/Dash Message 1/RPM_Filt/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S818>' : BaseEngineController_LS_112/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/First Order Low Pass (Tunable)
 * '<S819>' : BaseEngineController_LS_112/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/First Order Low Pass (Tunable)1
 * '<S820>' : BaseEngineController_LS_112/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/First Order Low Pass (Tunable)2
 * '<S821>' : BaseEngineController_LS_112/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/PHI_Filt
 * '<S822>' : BaseEngineController_LS_112/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/PHI_Filt1
 * '<S823>' : BaseEngineController_LS_112/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S824>' : BaseEngineController_LS_112/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/First Order Low Pass (Tunable)1/First Order Low Pass
 * '<S825>' : BaseEngineController_LS_112/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/First Order Low Pass (Tunable)2/First Order Low Pass
 * '<S826>' : BaseEngineController_LS_112/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/PHI_Filt/DecreasingFilter
 * '<S827>' : BaseEngineController_LS_112/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/PHI_Filt/First Order Low Pass
 * '<S828>' : BaseEngineController_LS_112/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/PHI_Filt/IncreasingFilter
 * '<S829>' : BaseEngineController_LS_112/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/PHI_Filt1/DecreasingFilter
 * '<S830>' : BaseEngineController_LS_112/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/PHI_Filt1/First Order Low Pass
 * '<S831>' : BaseEngineController_LS_112/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/PHI_Filt1/IncreasingFilter
 * '<S832>' : BaseEngineController_LS_112/Foreground/Outputs/AEM Infinity Dash/Dash Message 3/
 * '<S833>' : BaseEngineController_LS_112/Foreground/Outputs/AEM Infinity Dash/Dash Message 3/
 * '<S834>' : BaseEngineController_LS_112/Foreground/Outputs/AEM Infinity Dash/Dash Message 3/ 1
 * '<S835>' : BaseEngineController_LS_112/Foreground/Outputs/AEM Infinity Dash/Dash Message 3/First Order Low Pass (Tunable)
 * '<S836>' : BaseEngineController_LS_112/Foreground/Outputs/AEM Infinity Dash/Dash Message 3/First Order Low Pass (Tunable)1
 * '<S837>' : BaseEngineController_LS_112/Foreground/Outputs/AEM Infinity Dash/Dash Message 3/First Order Low Pass (Tunable)2
 * '<S838>' : BaseEngineController_LS_112/Foreground/Outputs/AEM Infinity Dash/Dash Message 3/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S839>' : BaseEngineController_LS_112/Foreground/Outputs/AEM Infinity Dash/Dash Message 3/First Order Low Pass (Tunable)1/First Order Low Pass
 * '<S840>' : BaseEngineController_LS_112/Foreground/Outputs/AEM Infinity Dash/Dash Message 3/First Order Low Pass (Tunable)2/First Order Low Pass
 * '<S841>' : BaseEngineController_LS_112/Foreground/Outputs/AEM Infinity Dash/Dash Message 6/First Order Low Pass (Tunable)
 * '<S842>' : BaseEngineController_LS_112/Foreground/Outputs/AEM Infinity Dash/Dash Message 6/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S843>' : BaseEngineController_LS_112/Foreground/Outputs/AEM Infinity Dash/Dash Message DBW/First Order Low Pass (Tunable)
 * '<S844>' : BaseEngineController_LS_112/Foreground/Outputs/AEM Infinity Dash/Dash Message DBW/First Order Low Pass (Tunable)1
 * '<S845>' : BaseEngineController_LS_112/Foreground/Outputs/AEM Infinity Dash/Dash Message DBW/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S846>' : BaseEngineController_LS_112/Foreground/Outputs/AEM Infinity Dash/Dash Message DBW/First Order Low Pass (Tunable)1/First Order Low Pass
 * '<S847>' : BaseEngineController_LS_112/Foreground/Outputs/Coil Control/Coil Enable Manager
 * '<S848>' : BaseEngineController_LS_112/Foreground/Outputs/Coil Control/EST Fault Management
 * '<S849>' : BaseEngineController_LS_112/Foreground/Outputs/Coil Control/motohawk_override_rel
 * '<S850>' : BaseEngineController_LS_112/Foreground/Outputs/Coil Control/motohawk_override_rel1
 * '<S851>' : BaseEngineController_LS_112/Foreground/Outputs/Coil Control/Coil Enable Manager/CompareTo
 * '<S852>' : BaseEngineController_LS_112/Foreground/Outputs/Coil Control/Coil Enable Manager/EST Enable TDC Counter
 * '<S853>' : BaseEngineController_LS_112/Foreground/Outputs/Coil Control/Coil Enable Manager/EST Enable TDC Counter/EST Enable TDC Counter Stateflow
 * '<S854>' : BaseEngineController_LS_112/Foreground/Outputs/Coil Control/Coil Enable Manager/EST Enable TDC Counter/TDC_Counter
 * '<S855>' : BaseEngineController_LS_112/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo
 * '<S856>' : BaseEngineController_LS_112/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo1
 * '<S857>' : BaseEngineController_LS_112/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo10
 * '<S858>' : BaseEngineController_LS_112/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo11
 * '<S859>' : BaseEngineController_LS_112/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo12
 * '<S860>' : BaseEngineController_LS_112/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo13
 * '<S861>' : BaseEngineController_LS_112/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo14
 * '<S862>' : BaseEngineController_LS_112/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo15
 * '<S863>' : BaseEngineController_LS_112/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo2
 * '<S864>' : BaseEngineController_LS_112/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo3
 * '<S865>' : BaseEngineController_LS_112/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo4
 * '<S866>' : BaseEngineController_LS_112/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo5
 * '<S867>' : BaseEngineController_LS_112/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo6
 * '<S868>' : BaseEngineController_LS_112/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo7
 * '<S869>' : BaseEngineController_LS_112/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo8
 * '<S870>' : BaseEngineController_LS_112/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo9
 * '<S871>' : BaseEngineController_LS_112/Foreground/Outputs/Coil Control/motohawk_override_rel/NewValue
 * '<S872>' : BaseEngineController_LS_112/Foreground/Outputs/Coil Control/motohawk_override_rel/OldValue
 * '<S873>' : BaseEngineController_LS_112/Foreground/Outputs/Coil Control/motohawk_override_rel1/NewValue
 * '<S874>' : BaseEngineController_LS_112/Foreground/Outputs/Coil Control/motohawk_override_rel1/OldValue
 * '<S875>' : BaseEngineController_LS_112/Foreground/Outputs/FAN Control/IAC-P-CONTROL
 * '<S876>' : BaseEngineController_LS_112/Foreground/Outputs/FAN Control/IAC-P-CONTROL1
 * '<S877>' : BaseEngineController_LS_112/Foreground/Outputs/FAN Control/IAC-P-CONTROL/Saturation
 * '<S878>' : BaseEngineController_LS_112/Foreground/Outputs/FAN Control/IAC-P-CONTROL/motohawk_override_abs2
 * '<S879>' : BaseEngineController_LS_112/Foreground/Outputs/FAN Control/IAC-P-CONTROL/motohawk_override_abs2/NewValue
 * '<S880>' : BaseEngineController_LS_112/Foreground/Outputs/FAN Control/IAC-P-CONTROL/motohawk_override_abs2/OldValue
 * '<S881>' : BaseEngineController_LS_112/Foreground/Outputs/FAN Control/IAC-P-CONTROL1/Saturation
 * '<S882>' : BaseEngineController_LS_112/Foreground/Outputs/FAN Control/IAC-P-CONTROL1/motohawk_override_abs2
 * '<S883>' : BaseEngineController_LS_112/Foreground/Outputs/FAN Control/IAC-P-CONTROL1/motohawk_override_abs2/NewValue
 * '<S884>' : BaseEngineController_LS_112/Foreground/Outputs/FAN Control/IAC-P-CONTROL1/motohawk_override_abs2/OldValue
 * '<S885>' : BaseEngineController_LS_112/Foreground/Outputs/FuelPump/Discrete Actuator - FUELP
 * '<S886>' : BaseEngineController_LS_112/Foreground/Outputs/FuelPump/Discrete Actuator - FUELP/Override in Engineering Units
 * '<S887>' : BaseEngineController_LS_112/Foreground/Outputs/FuelPump/Discrete Actuator - FUELP/Override in Engineering Units/NewValue
 * '<S888>' : BaseEngineController_LS_112/Foreground/Outputs/FuelPump/Discrete Actuator - FUELP/Override in Engineering Units/OldValue
 * '<S889>' : BaseEngineController_LS_112/Foreground/Outputs/HBridge/Time Since Enabled (With Input)1
 * '<S890>' : BaseEngineController_LS_112/Foreground/Outputs/HBridge/motohawk_override_abs2
 * '<S891>' : BaseEngineController_LS_112/Foreground/Outputs/HBridge/motohawk_override_abs2/NewValue
 * '<S892>' : BaseEngineController_LS_112/Foreground/Outputs/HBridge/motohawk_override_abs2/OldValue
 * '<S893>' : BaseEngineController_LS_112/Foreground/Outputs/IAC-Control/IAC-P-CONTROL
 * '<S894>' : BaseEngineController_LS_112/Foreground/Outputs/IAC-Control/IAC-S-CONTROL
 * '<S895>' : BaseEngineController_LS_112/Foreground/Outputs/IAC-Control/IAC-P-CONTROL/Saturation
 * '<S896>' : BaseEngineController_LS_112/Foreground/Outputs/IAC-Control/IAC-P-CONTROL/motohawk_override_abs2
 * '<S897>' : BaseEngineController_LS_112/Foreground/Outputs/IAC-Control/IAC-P-CONTROL/motohawk_override_abs2/NewValue
 * '<S898>' : BaseEngineController_LS_112/Foreground/Outputs/IAC-Control/IAC-P-CONTROL/motohawk_override_abs2/OldValue
 * '<S899>' : BaseEngineController_LS_112/Foreground/Outputs/IAC-Control/IAC-S-CONTROL/Saturation
 * '<S900>' : BaseEngineController_LS_112/Foreground/Outputs/IAC-Control/IAC-S-CONTROL/motohawk_override_abs2
 * '<S901>' : BaseEngineController_LS_112/Foreground/Outputs/IAC-Control/IAC-S-CONTROL/motohawk_override_abs2/NewValue
 * '<S902>' : BaseEngineController_LS_112/Foreground/Outputs/IAC-Control/IAC-S-CONTROL/motohawk_override_abs2/OldValue
 * '<S903>' : BaseEngineController_LS_112/Foreground/Outputs/Injector Control/Injector Diagnostics
 * '<S904>' : BaseEngineController_LS_112/Foreground/Outputs/Injector Control/Injector Enable Manager
 * '<S905>' : BaseEngineController_LS_112/Foreground/Outputs/Injector Control/motohawk_override_abs1
 * '<S906>' : BaseEngineController_LS_112/Foreground/Outputs/Injector Control/motohawk_override_abs2
 * '<S907>' : BaseEngineController_LS_112/Foreground/Outputs/Injector Control/motohawk_override_abs3
 * '<S908>' : BaseEngineController_LS_112/Foreground/Outputs/Injector Control/motohawk_override_abs4
 * '<S909>' : BaseEngineController_LS_112/Foreground/Outputs/Injector Control/motohawk_override_abs5
 * '<S910>' : BaseEngineController_LS_112/Foreground/Outputs/Injector Control/motohawk_override_abs6
 * '<S911>' : BaseEngineController_LS_112/Foreground/Outputs/Injector Control/Injector Enable Manager/Stall
 * '<S912>' : BaseEngineController_LS_112/Foreground/Outputs/Injector Control/Injector Enable Manager/Time Since Enabled (With Input)1
 * '<S913>' : BaseEngineController_LS_112/Foreground/Outputs/Injector Control/motohawk_override_abs1/NewValue
 * '<S914>' : BaseEngineController_LS_112/Foreground/Outputs/Injector Control/motohawk_override_abs1/OldValue
 * '<S915>' : BaseEngineController_LS_112/Foreground/Outputs/Injector Control/motohawk_override_abs2/NewValue
 * '<S916>' : BaseEngineController_LS_112/Foreground/Outputs/Injector Control/motohawk_override_abs2/OldValue
 * '<S917>' : BaseEngineController_LS_112/Foreground/Outputs/Injector Control/motohawk_override_abs3/NewValue
 * '<S918>' : BaseEngineController_LS_112/Foreground/Outputs/Injector Control/motohawk_override_abs3/OldValue
 * '<S919>' : BaseEngineController_LS_112/Foreground/Outputs/Injector Control/motohawk_override_abs4/NewValue
 * '<S920>' : BaseEngineController_LS_112/Foreground/Outputs/Injector Control/motohawk_override_abs4/OldValue
 * '<S921>' : BaseEngineController_LS_112/Foreground/Outputs/Injector Control/motohawk_override_abs5/NewValue
 * '<S922>' : BaseEngineController_LS_112/Foreground/Outputs/Injector Control/motohawk_override_abs5/OldValue
 * '<S923>' : BaseEngineController_LS_112/Foreground/Outputs/Injector Control/motohawk_override_abs6/NewValue
 * '<S924>' : BaseEngineController_LS_112/Foreground/Outputs/Injector Control/motohawk_override_abs6/OldValue
 * '<S925>' : BaseEngineController_LS_112/Foreground/Outputs/WASTEGATE-Control/PWM Characterization
 * '<S926>' : BaseEngineController_LS_112/Foreground/Outputs/WASTEGATE-Control/PWM Characterization/Saturation
 * '<S927>' : BaseEngineController_LS_112/Foreground/Outputs/WASTEGATE-Control/PWM Characterization/motohawk_override_abs2
 * '<S928>' : BaseEngineController_LS_112/Foreground/Outputs/WASTEGATE-Control/PWM Characterization/motohawk_override_abs2/NewValue
 * '<S929>' : BaseEngineController_LS_112/Foreground/Outputs/WASTEGATE-Control/PWM Characterization/motohawk_override_abs2/OldValue
 * '<S930>' : BaseEngineController_LS_112/Main Power Relay/Main Power Relay
 * '<S931>' : BaseEngineController_LS_112/Main Power Relay/Main Power Relay/Display Variable Event Boolean
 * '<S932>' : BaseEngineController_LS_112/Main Power Relay/Main Power Relay/Display Variable Event Function-Call
 * '<S933>' : BaseEngineController_LS_112/Main Power Relay/Main Power Relay/Display Variable Event Function-Call1
 * '<S934>' : BaseEngineController_LS_112/Main Power Relay/Main Power Relay/ECUP Latch
 * '<S935>' : BaseEngineController_LS_112/Main Power Relay/Main Power Relay/Forced Shutdown Process
 * '<S936>' : BaseEngineController_LS_112/Main Power Relay/Main Power Relay/On Off Delay
 * '<S937>' : BaseEngineController_LS_112/Main Power Relay/Main Power Relay/ShutDown Processes
 * '<S938>' : BaseEngineController_LS_112/Main Power Relay/Main Power Relay/Time Since Enabled (With Input)1
 * '<S939>' : BaseEngineController_LS_112/Main Power Relay/Main Power Relay/motohawk_restore_nvmem
 * '<S940>' : BaseEngineController_LS_112/Main Power Relay/Main Power Relay/motohawk_store_nvmem
 * '<S941>' : BaseEngineController_LS_112/Main Power Relay/Main Power Relay/Display Variable Event Function-Call/Clear
 * '<S942>' : BaseEngineController_LS_112/Main Power Relay/Main Power Relay/Display Variable Event Function-Call1/Clear
 * '<S943>' : BaseEngineController_LS_112/Main Power Relay/Main Power Relay/Forced Shutdown Process/Post Shutdown two ticks before MPRD off
 * '<S944>' : BaseEngineController_LS_112/Main Power Relay/Main Power Relay/Forced Shutdown Process/Processor Reboot
 * '<S945>' : BaseEngineController_LS_112/Main Power Relay/Main Power Relay/Forced Shutdown Process/Save NV Vars one tick before MPRD off
 * '<S946>' : BaseEngineController_LS_112/Main Power Relay/Main Power Relay/Forced Shutdown Process/Shutdown power on ECU565//563
 * '<S947>' : BaseEngineController_LS_112/Main Power Relay/Main Power Relay/Forced Shutdown Process/Time Since Enabled (With Input)1
 * '<S948>' : BaseEngineController_LS_112/Main Power Relay/Main Power Relay/Forced Shutdown Process/Post Shutdown two ticks before MPRD off/Post Shutdown two ticks before MPRD off
 * '<S949>' : BaseEngineController_LS_112/Main Power Relay/Main Power Relay/Forced Shutdown Process/Save NV Vars one tick before MPRD off/Save NV Vars one tick before MPRD off
 * '<S950>' : BaseEngineController_LS_112/Main Power Relay/Main Power Relay/Forced Shutdown Process/Shutdown power on ECU565//563/Shutdown power on ECU565-128
 * '<S951>' : BaseEngineController_LS_112/Main Power Relay/Main Power Relay/On Off Delay/S-R Flip-Flop
 * '<S952>' : BaseEngineController_LS_112/Main Power Relay/Main Power Relay/ShutDown Processes/Post Shutdown two ticks before MPRD off
 * '<S953>' : BaseEngineController_LS_112/Main Power Relay/Main Power Relay/ShutDown Processes/Processor Reboot
 * '<S954>' : BaseEngineController_LS_112/Main Power Relay/Main Power Relay/ShutDown Processes/Save NV Vars one tick before MPRD off
 * '<S955>' : BaseEngineController_LS_112/Main Power Relay/Main Power Relay/ShutDown Processes/Shutdown power on ECU565//563
 * '<S956>' : BaseEngineController_LS_112/Main Power Relay/Main Power Relay/ShutDown Processes/motohawk_override_abs
 * '<S957>' : BaseEngineController_LS_112/Main Power Relay/Main Power Relay/ShutDown Processes/Post Shutdown two ticks before MPRD off/Post Shutdown two ticks before MPRD off
 * '<S958>' : BaseEngineController_LS_112/Main Power Relay/Main Power Relay/ShutDown Processes/Save NV Vars one tick before MPRD off/Save NV Vars one tick before MPRD off
 * '<S959>' : BaseEngineController_LS_112/Main Power Relay/Main Power Relay/ShutDown Processes/Shutdown power on ECU565//563/Shutdown power on ECU565-128
 * '<S960>' : BaseEngineController_LS_112/Main Power Relay/Main Power Relay/ShutDown Processes/motohawk_override_abs/NewValue
 * '<S961>' : BaseEngineController_LS_112/Main Power Relay/Main Power Relay/ShutDown Processes/motohawk_override_abs/OldValue
 */
#endif                                 /* RTW_HEADER_BaseEngineController_LS_112_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
