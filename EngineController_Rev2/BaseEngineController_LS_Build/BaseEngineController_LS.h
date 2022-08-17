/*
 * File: BaseEngineController_LS.h
 *
 * Code generated for Simulink model 'BaseEngineController_LS'.
 *
 * Model version                  : 1.2049
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Tue Aug 16 23:25:15 2022
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
  real_T s453_Gain1;                   /* '<S453>/Gain1' */
  real_T s612_motohawk_interpolation_1d;/* '<S612>/motohawk_interpolation_1d' */
  real_T s611_Merge;                   /* '<S611>/Merge' */
  real_T s578_Switch;                  /* '<S578>/Switch' */
  real_T s787_motohawk_interpolation_1d;/* '<S787>/motohawk_interpolation_1d' */
  real_T s766_Switch;                  /* '<S766>/Switch' */
  real_T s810_MinMax;                  /* '<S810>/MinMax' */
  real_T s810_MinMax1;                 /* '<S810>/MinMax1' */
  real_T s814_MinMax1;                 /* '<S814>/MinMax1' */
  real_T s785_Merge;                   /* '<S785>/Merge' */
  real_T s824_Merge;                   /* '<S824>/Merge' */
  real_T s775_motohawk_interpolation_1d;/* '<S775>/motohawk_interpolation_1d' */
  real_T s765_Switch;                  /* '<S765>/Switch' */
  real_T s793_MinMax;                  /* '<S793>/MinMax' */
  real_T s793_MinMax1;                 /* '<S793>/MinMax1' */
  real_T s797_MinMax1;                 /* '<S797>/MinMax1' */
  real_T s773_Merge;                   /* '<S773>/Merge' */
  real_T s807_Merge;                   /* '<S807>/Merge' */
  real_T s416_Switch1;                 /* '<S416>/Switch1' */
  real_T s442_Sum;                     /* '<S442>/Sum' */
  real_T s454_RPMInst;                 /* '<S454>/Data Type Conversion1' */
  real_T s571_DataTypeConversion;      /* '<S571>/Data Type Conversion' */
  real_T s629_Sum1;                    /* '<S629>/Sum1' */
  real_T s642_Merge;                   /* '<S642>/Merge' */
  real_T s628_Sum1;                    /* '<S628>/Sum1' */
  real_T s767_Switch;                  /* '<S767>/Switch' */
  real_T s827_MinMax;                  /* '<S827>/MinMax' */
  real_T s827_MinMax1;                 /* '<S827>/MinMax1' */
  real_T s831_MinMax1;                 /* '<S831>/MinMax1' */
  real_T s768_Switch;                  /* '<S768>/Switch' */
  real_T s844_MinMax;                  /* '<S844>/MinMax' */
  real_T s844_MinMax1;                 /* '<S844>/MinMax1' */
  real_T s848_MinMax1;                 /* '<S848>/MinMax1' */
  real_T s841_Merge;                   /* '<S841>/Merge' */
  real_T s858_Merge;                   /* '<S858>/Merge' */
  real_T s423_Switch2;                 /* '<S423>/Switch2' */
  real_T s630_Sum1;                    /* '<S630>/Sum1' */
  real_T s650_Merge;                   /* '<S650>/Merge' */
  real_T s458_ReadCANMessage_o3;       /* '<S458>/Read CAN Message' */
  real_T s458_ReadCANMessage_o4;       /* '<S458>/Read CAN Message' */
  real_T s458_ReadCANMessage_o5;       /* '<S458>/Read CAN Message' */
  real_T s458_ReadCANMessage_o6;       /* '<S458>/Read CAN Message' */
  real_T s458_ReadCANMessage_o7;       /* '<S458>/Read CAN Message' */
  real_T s458_ReadCANMessage_o8;       /* '<S458>/Read CAN Message' */
  real_T s458_ReadCANMessage2_o2;      /* '<S458>/Read CAN Message2' */
  real_T s458_ReadCANMessage2_o3;      /* '<S458>/Read CAN Message2' */
  real_T s458_ReadCANMessage2_o4;      /* '<S458>/Read CAN Message2' */
  real_T s458_ReadCANMessage2_o5;      /* '<S458>/Read CAN Message2' */
  real_T s427_Switch2;                 /* '<S427>/Switch2' */
  real_T s459_ReadCANMessage_o2;       /* '<S459>/Read CAN Message' */
  real_T s459_ReadCANMessage_o3;       /* '<S459>/Read CAN Message' */
  real_T s459_ReadCANMessage_o4;       /* '<S459>/Read CAN Message' */
  real_T s459_ReadCANMessage_o5;       /* '<S459>/Read CAN Message' */
  real_T s459_ReadCANMessage_o6;       /* '<S459>/Read CAN Message' */
  real_T s459_ReadCANMessage_o7;       /* '<S459>/Read CAN Message' */
  real_T s459_ReadCANMessage_o8;       /* '<S459>/Read CAN Message' */
  real_T s459_ReadCANMessage_o9;       /* '<S459>/Read CAN Message' */
  real_T s459_ReadCANMessage_o10;      /* '<S459>/Read CAN Message' */
  real_T s459_MathFunction;            /* '<S459>/Math Function' */
  real_T s499_Sum1;                    /* '<S499>/Sum1' */
  real_T s459_ReadCANMessage1_o2;      /* '<S459>/Read CAN Message1' */
  real_T s459_ReadCANMessage1_o3;      /* '<S459>/Read CAN Message1' */
  real_T s459_ReadCANMessage1_o4;      /* '<S459>/Read CAN Message1' */
  real_T s459_ReadCANMessage1_o5;      /* '<S459>/Read CAN Message1' */
  real_T s459_ReadCANMessage1_o6;      /* '<S459>/Read CAN Message1' */
  real_T s459_ReadCANMessage1_o7;      /* '<S459>/Read CAN Message1' */
  real_T s459_ReadCANMessage1_o8;      /* '<S459>/Read CAN Message1' */
  real_T s459_ReadCANMessage1_o9;      /* '<S459>/Read CAN Message1' */
  real_T s459_ReadCANMessage1_o10;     /* '<S459>/Read CAN Message1' */
  real_T s459_MathFunction1;           /* '<S459>/Math Function1' */
  real_T s500_Sum1;                    /* '<S500>/Sum1' */
  real_T s523_Merge;                   /* '<S523>/Merge' */
  real_T s531_Merge;                   /* '<S531>/Merge' */
  real_T s459_MultiportSwitch;         /* '<S459>/Multiport Switch' */
  real_T s421_Sum1;                    /* '<S421>/Sum1' */
  real_T s444_Switch;                  /* '<S444>/Switch' */
  real_T s637_Sum1;                    /* '<S637>/Sum1' */
  real_T s705_Merge;                   /* '<S705>/Merge' */
  real_T s634_Merge;                   /* '<S634>/Merge' */
  real_T s632_Sum1;                    /* '<S632>/Sum1' */
  real_T s671_Merge;                   /* '<S671>/Merge' */
  real_T s369_motohawk_delta_time;     /* '<S369>/motohawk_delta_time' */
  real_T s633_Sum1;                    /* '<S633>/Sum1' */
  real_T s379_Sum;                     /* '<S379>/Sum' */
  real_T s378_motohawk_interpolation_2d2;/* '<S378>/motohawk_interpolation_2d2' */
  real_T s378_Sum;                     /* '<S378>/Sum' */
  real_T s378_NominalAirFlowRate;      /* '<S378>/Nominal Air Flow Rate' */
  real_T s378_ModelAirMassFlowRate;    /* '<S378>/Model Air Mass Flow Rate' */
  real_T s453_Gain;                    /* '<S453>/Gain' */
  real_T s593_motohawk_interpolation_1d;/* '<S593>/motohawk_interpolation_1d' */
  real_T s592_Merge;                   /* '<S592>/Merge' */
  real_T s378_MultiportSwitch;         /* '<S378>/Multiport Switch' */
  real_T s394_Merge;                   /* '<S394>/Merge' */
  real_T s397_Sum1;                    /* '<S397>/Sum1' */
  real_T s395_Merge;                   /* '<S395>/Merge' */
  real_T s400_Sum1;                    /* '<S400>/Sum1' */
  real_T s438_Sum1;                    /* '<S438>/Sum1' */
  real_T s572_DataTypeConversion;      /* '<S572>/Data Type Conversion' */
  real_T s575_DataTypeConversion;      /* '<S575>/Data Type Conversion' */
  real_T s679_Merge;                   /* '<S679>/Merge' */
  real_T s370_motohawk_data_read;      /* '<S370>/motohawk_data_read' */
  real_T s389_Sum1;                    /* '<S389>/Sum1' */
  real_T s900_Sum1;                    /* '<S900>/Sum1' */
  real_T s889_Switch;                  /* '<S889>/Switch' */
  real_T s886_Merge;                   /* '<S886>/Merge' */
  real_T s891_Sum1;                    /* '<S891>/Sum1' */
  real_T s887_Merge;                   /* '<S887>/Merge' */
  real_T s894_Sum1;                    /* '<S894>/Sum1' */
  real_T s888_Merge;                   /* '<S888>/Merge' */
  real_T s897_Sum1;                    /* '<S897>/Sum1' */
  real_T s904_Merge;                   /* '<S904>/Merge' */
  real_T s904_Switch;                  /* '<S904>/Switch' */
  real_T s905_Merge;                   /* '<S905>/Merge' */
  real_T s905_Switch;                  /* '<S905>/Switch' */
  real_T s901_Merge;                   /* '<S901>/Merge' */
  real_T s907_Sum1;                    /* '<S907>/Sum1' */
  real_T s420_MultiportSwitch;         /* '<S420>/Multiport Switch' */
  real_T s135_SparkAdv;                /* '<S135>/Merge4' */
  real_T s902_Merge;                   /* '<S902>/Merge' */
  real_T s910_Sum1;                    /* '<S910>/Sum1' */
  real_T s903_Merge;                   /* '<S903>/Merge' */
  real_T s913_Sum1;                    /* '<S913>/Sum1' */
  real_T s924_Merge;                   /* '<S924>/Merge' */
  real_T s928_Sum1;                    /* '<S928>/Sum1' */
  real_T s631_Sum1;                    /* '<S631>/Sum1' */
  real_T s663_Merge;                   /* '<S663>/Merge' */
  real_T s925_Merge;                   /* '<S925>/Merge' */
  real_T s931_Sum1;                    /* '<S931>/Sum1' */
  real_T s635_Sum1;                    /* '<S635>/Sum1' */
  real_T s689_Merge;                   /* '<S689>/Merge' */
  real_T s926_Merge;                   /* '<S926>/Merge' */
  real_T s934_Sum1;                    /* '<S934>/Sum1' */
  real_T s135_FAN1;                    /* '<S135>/Merge12' */
  real_T s135_FAN2;                    /* '<S135>/Merge13' */
  real_T s936_Merge;                   /* '<S936>/Merge' */
  real_T s938_Sum1;                    /* '<S938>/Sum1' */
  real_T s941_Merge;                   /* '<S941>/Merge' */
  real_T s946_Sum1;                    /* '<S946>/Sum1' */
  real_T s940_Merge;                   /* '<S940>/Merge' */
  real_T s943_Sum1;                    /* '<S943>/Sum1' */
  real_T s135_SparkEnergy;             /* '<S135>/Merge5' */
  real_T s986_MinMax1;                 /* '<S986>/MinMax1' */
  real_T s990_MinMax1;                 /* '<S990>/MinMax1' */
  real_T s446_Switch;                  /* '<S446>/Switch' */
  real_T s135_Throttle;                /* '<S135>/Merge8' */
  real_T s867_ETC;                     /* '<S867>/Saturation' */
  real_T s135_IACP;                    /* '<S135>/Merge3' */
  real_T s1004_MinMax1;                /* '<S1004>/MinMax1' */
  real_T s135_IACS;                    /* '<S135>/Merge9' */
  real_T s1008_MinMax1;                /* '<S1008>/MinMax1' */
  real_T s135_SOI;                     /* '<S135>/Merge1' */
  real_T s135_FPC[8];                  /* '<S135>/Merge2' */
  real_T s72_Sum[8];                   /* '<S72>/Sum' */
  real_T s64_constreftoatm;            /* '<S64>/const ref to atm' */
  real_T s135_FuelMult;                /* '<S135>/Merge6' */
  real_T s21_Sum2;                     /* '<S21>/Sum2' */
  real_T s21_Sum1;                     /* '<S21>/Sum1' */
  real_T s21_MinMax[8];                /* '<S21>/MinMax' */
  real_T s135_MakeUpEOI;               /* '<S135>/Merge10' */
  real_T s135_WASTEGATE;               /* '<S135>/Merge11' */
  real_T s1035_MinMax1;                /* '<S1035>/MinMax1' */
  real_T s21_Gain[8];                  /* '<S21>/Gain' */
  real_T s421_Sum3;                    /* '<S421>/Sum3' */
  real_T s419_Sum3;                    /* '<S419>/Sum3' */
  real_T s458_ReadCANMessage1_o2;      /* '<S458>/Read CAN Message1' */
  real_T s458_ReadCANMessage1_o3;      /* '<S458>/Read CAN Message1' */
  real_T s636_Sum1;                    /* '<S636>/Sum1' */
  real_T s697_Merge;                   /* '<S697>/Merge' */
  real_T s950_Sum;                     /* '<S950>/Sum' */
  real_T s951_Sum;                     /* '<S951>/Sum' */
  real_T s953_CrankCounter;            /* '<S953>/CrankCounter' */
  real_T s717_motohawk_interpolation_1d;/* '<S717>/motohawk_interpolation_1d' */
  real_T s716_Merge;                   /* '<S716>/Merge' */
  real_T s739_motohawk_interpolation_1d;/* '<S739>/motohawk_interpolation_1d' */
  real_T s722_Merge;                   /* '<S722>/Merge' */
  real_T s738_Merge;                   /* '<S738>/Merge' */
  real_T s757_motohawk_interpolation_1d;/* '<S757>/motohawk_interpolation_1d' */
  real_T s724_Merge;                   /* '<S724>/Merge' */
  real_T s756_Merge;                   /* '<S756>/Merge' */
  real_T s748_motohawk_interpolation_1d;/* '<S748>/motohawk_interpolation_1d' */
  real_T s747_Merge;                   /* '<S747>/Merge' */
  real_T s730_motohawk_interpolation_1d;/* '<S730>/motohawk_interpolation_1d' */
  real_T s729_Merge;                   /* '<S729>/Merge' */
  real_T s327_Defaultifnoflow[8];      /* '<S327>/Default (if no flow)' */
  real_T s344_Sum1[8];                 /* '<S344>/Sum1' */
  real_T s343_chargemass[8];           /* '<S343>/charge mass' */
  real_T s413_Merge;                   /* '<S413>/Merge' */
  real_T s431_Sum2;                    /* '<S431>/Sum2' */
  real_T s375_Timer;                   /* '<S369>/Baro Stall State Delay' */
  real_T s321_UnitDelay;               /* '<S321>/Unit Delay' */
  real_T s311_Product1;                /* '<S311>/Product1' */
  real_T s311_Switch;                  /* '<S311>/Switch' */
  real_T s322_etc;                     /* '<S311>/Ice Break' */
  real_T s190_Product1;                /* '<S190>/Product1' */
  real_T s190_SpkOut;                  /* '<S190>/Product2' */
  real_T s145_MultiportSwitch;         /* '<S145>/Multiport Switch' */
  real_T s186_Switch1;                 /* '<S186>/Switch1' */
  real_T s147_Switch1;                 /* '<S147>/Switch1' */
  real_T s184_Sum2;                    /* '<S184>/Sum2' */
  real_T s184_Product2;                /* '<S184>/Product2' */
  real_T s185_Product;                 /* '<S185>/Product' */
  real_T s175_Switch;                  /* '<S175>/Switch' */
  real_T s147_motohawk_interpolation_2d;/* '<S147>/motohawk_interpolation_2d' */
  real_T s147_Sum3;                    /* '<S147>/Sum3' */
  real_T s149_MinMax;                  /* '<S149>/MinMax' */
  real_T s149_MinMax1;                 /* '<S149>/MinMax1' */
  real_T s305_Add;                     /* '<S305>/Add' */
  real_T s302_Product;                 /* '<S302>/Product' */
  real_T s301_Product;                 /* '<S301>/Product' */
  real_T s155_ApplyOffsetstoBaseSparkAdvance1;/* '<S155>/Apply Offsets to Base Spark Advance1' */
  real_T s308_MinMax1;                 /* '<S308>/MinMax1' */
  real_T s303_Switch;                  /* '<S303>/Switch' */
  real_T s155_motohawk_interpolation_2d1;/* '<S155>/motohawk_interpolation_2d1' */
  real_T s152_Sum;                     /* '<S152>/Sum' */
  real_T s232_DontallowsetpointtoevergoabovetheTargetRPM;/* '<S232>/Don't allow setpoint to ever go above the TargetRPM' */
  real_T s241_Sum2;                    /* '<S241>/Sum2' */
  real_T s241_Product2;                /* '<S241>/Product2' */
  real_T s242_Product;                 /* '<S242>/Product' */
  real_T s243_Switch1;                 /* '<S243>/Switch1' */
  real_T s234_Switch;                  /* '<S234>/Switch' */
  real_T s230_Sum;                     /* '<S230>/Sum' */
  real_T s263_MinMax1;                 /* '<S263>/MinMax1' */
  real_T s253_DontallowsetpointtoeverdropbelowtheTargetRPM;/* '<S253>/Don't allow setpoint to ever drop below the TargetRPM' */
  real_T s279_Sum2;                    /* '<S279>/Sum2' */
  real_T s279_Product2;                /* '<S279>/Product2' */
  real_T s280_Product;                 /* '<S280>/Product' */
  real_T s281_Switch1;                 /* '<S281>/Switch1' */
  real_T s153_MinGovAirPID;            /* '<S153>/Product1' */
  real_T s274_Sum1;                    /* '<S274>/Sum1' */
  real_T s274_Product;                 /* '<S274>/Product' */
  real_T s275_Product;                 /* '<S275>/Product' */
  real_T s153_IdleSpk;                 /* '<S153>/Product' */
  real_T s271_Switch;                  /* '<S271>/Switch' */
  real_T s256_DontallowsetpointtoeverdropbelowtheTargetRPM;/* '<S256>/Don't allow setpoint to ever drop below the TargetRPM' */
  real_T s154_O2FuelMult;              /* '<S154>/Switch' */
  real_T s286_Switch;                  /* '<S286>/Switch' */
  real_T s292_Sum2;                    /* '<S292>/Sum2' */
  real_T s292_Product2;                /* '<S292>/Product2' */
  real_T s294_Switch1;                 /* '<S294>/Switch1' */
  real_T s293_Product;                 /* '<S293>/Product' */
  real_T s290_Switch3;                 /* '<S290>/Switch3' */
  real_T s290_Switch1;                 /* '<S290>/Switch1' */
  real_T s290_Switch4;                 /* '<S290>/Switch4' */
  real_T s211_motohawk_interpolation_1d;/* '<S211>/motohawk_interpolation_1d' */
  real_T s209_FuelFlowMassAirflowEquivalenceRatioAirtofuelRatio;/* '<S209>/Fuel Flow = Mass Airflow * Equivalence Ratio // Air-to-fuel Ratio' */
  real_T s206_PerCylinderMassFlowRate; /* '<S206>/Per-Cylinder Mass Flow Rate' */
  real_T s206_ApplyMultipliersforO2KnockControlandEnrichment1;/* '<S206>/Apply Multipliers for O2, Knock Control, and Enrichment1' */
  real_T s229_MinMax1;                 /* '<S229>/MinMax1' */
  real_T s222_chargemass;              /* '<S222>/charge mass' */
  real_T s221_Sum1;                    /* '<S221>/Sum1' */
  real_T s212_Sum1;                    /* '<S212>/Sum1' */
  real_T s220_Sum1;                    /* '<S220>/Sum1' */
  real_T s212_Sum;                     /* '<S212>/Sum' */
  real_T s212_Product1;                /* '<S212>/Product1' */
  real_T s219_motohawk_interpolation_1d;/* '<S219>/motohawk_interpolation_1d' */
  real_T s216_motohawk_interpolation_1d;/* '<S216>/motohawk_interpolation_1d' */
  real_T s146_DesEquivRatio;           /* '<S146>/MinMax' */
  real_T s130_Sum;                     /* '<S130>/Sum' */
  real_T s23_Sum;                      /* '<S23>/Sum' */
  real_T s102_UnitDelay2;              /* '<S102>/Unit Delay2' */
  real_T s121_Switch1;                 /* '<S121>/Switch1' */
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
  real_T s1056_Switch;                 /* '<S1056>/Switch' */
  uint32_T s455_motohawk_frequency_in; /* '<S455>/motohawk_frequency_in' */
  uint32_T s458_ReadCANMessage_o1;     /* '<S458>/Read CAN Message' */
  uint32_T s458_ReadCANMessage2_o1;    /* '<S458>/Read CAN Message2' */
  uint32_T s459_ReadCANMessage_o1;     /* '<S459>/Read CAN Message' */
  uint32_T s459_ReadCANMessage1_o1;    /* '<S459>/Read CAN Message1' */
  uint32_T s458_ReadCANMessage1_o1;    /* '<S458>/Read CAN Message1' */
  uint32_T s627_Sum;                   /* '<S627>/Sum' */
  uint32_T s9_ReadCANRaw_o2;           /* '<S9>/Read CAN Raw' */
  uint32_T s9_ReadCANRaw_o4;           /* '<S9>/Read CAN Raw' */
  uint32_T s10_motohawk_calibration;   /* '<S10>/motohawk_calibration' */
  int16_T s867_motohawk_pwm1;          /* '<S867>/motohawk_pwm1' */
  uint16_T s457_motohawk_ain2;         /* '<S457>/motohawk_ain2' */
  uint16_T s457_motohawk_ain1;         /* '<S457>/motohawk_ain1' */
  uint16_T s455_motohawk_ain4;         /* '<S455>/motohawk_ain4' */
  uint16_T s455_motohawk_ain14;        /* '<S455>/motohawk_ain14' */
  uint16_T s455_motohawk_ain_read1;    /* '<S455>/motohawk_ain_read1' */
  uint16_T s455_motohawk_ain2;         /* '<S455>/motohawk_ain2' */
  uint16_T s455_motohawk_ain1;         /* '<S455>/motohawk_ain1' */
  uint16_T s455_motohawk_ain3;         /* '<S455>/motohawk_ain3' */
  uint16_T s863_SparkSequence_o3[8];   /* '<S863>/Spark Sequence' */
  uint16_T s863_SparkSequence_o4[8];   /* '<S863>/Spark Sequence' */
  uint16_T s709_motohawk_ain;          /* '<S709>/motohawk_ain' */
  uint16_T s710_motohawk_ain;          /* '<S710>/motohawk_ain' */
  uint16_T s710_motohawk_ain1;         /* '<S710>/motohawk_ain1' */
  uint16_T s710_motohawk_ain2;         /* '<S710>/motohawk_ain2' */
  uint16_T s710_motohawk_ain3;         /* '<S710>/motohawk_ain3' */
  uint16_T s10_motohawk_calibration3;  /* '<S10>/motohawk_calibration3' */
  index_T s408_motohawk_prelookup1;    /* '<S408>/motohawk_prelookup1' */
  index_T s408_Indexes;                /* '<S408>/motohawk_prelookup5' */
  index_T s404_motohawk_prelookup;     /* '<S404>/motohawk_prelookup' */
  index_T s405_motohawk_prelookup;     /* '<S405>/motohawk_prelookup' */
  index_T s409_motohawk_prelookup;     /* '<S409>/motohawk_prelookup' */
  index_T s402_motohawk_prelookup;     /* '<S402>/motohawk_prelookup' */
  index_T s406_motohawk_prelookup1;    /* '<S406>/motohawk_prelookup1' */
  index_T s406_Indexes;                /* '<S406>/motohawk_prelookup5' */
  index_T s403_motohawk_prelookup;     /* '<S403>/motohawk_prelookup' */
  index_T s374_RPMAccel17Idx;          /* '<S374>/motohawk_prelookup' */
  int8_T s22_Merge1[32];               /* '<S22>/Merge1' */
  int8_T s953_DataTypeConversion;      /* '<S953>/Data Type Conversion' */
  int8_T s231_DataTypeConversion;      /* '<S231>/Data Type Conversion' */
  int8_T s231_DataTypeConversion1;     /* '<S231>/Data Type Conversion1' */
  int8_T s102_MultiportSwitch[8];      /* '<S102>/Multiport Switch' */
  int8_T s121_CutArray[8];             /* '<S121>/CutArray' */
  int8_T s27_DC_Override;              /* '<S20>/ETC Test  Manager' */
  int8_T s27_SetpointMode;             /* '<S20>/ETC Test  Manager' */
  uint8_T s418_UnitDelay;              /* '<S418>/Unit Delay' */
  uint8_T s369_motohawk_data_read1;    /* '<S369>/motohawk_data_read1' */
  uint8_T s869_InjectorSequence_o1[8]; /* '<S869>/Injector Sequence' */
  uint8_T s22_DataTypeConversion5;     /* '<S22>/Data Type Conversion5' */
  uint8_T s454_motohawk_encoder_fault; /* '<S454>/motohawk_encoder_fault' */
  uint8_T s454_motohawk_encoder_state; /* '<S454>/motohawk_encoder_state' */
  uint8_T s955_Switch1;                /* '<S955>/Switch1' */
  uint8_T s440_Switch;                 /* '<S440>/Switch' */
  uint8_T s439_State;                  /* '<S418>/Engine State Machine' */
  uint8_T s265_IdleState;              /* '<S250>/IdleStateMachine' */
  uint8_T s102_UnitDelay1;             /* '<S102>/Unit Delay1' */
  uint8_T s121_Switch;                 /* '<S121>/Switch' */
  uint8_T s9_ReadCANRaw_o5;            /* '<S9>/Read CAN Raw' */
  uint8_T s9_ReadCANRaw_o6[8];         /* '<S9>/Read CAN Raw' */
  boolean_T s578_LogicalOperator;      /* '<S578>/Logical Operator' */
  boolean_T s578_LogicalOperator3;     /* '<S578>/Logical Operator3' */
  boolean_T s418_Stall;                /* '<S418>/Relational Operator1' */
  boolean_T s418_Crank;                /* '<S418>/Relational Operator4' */
  boolean_T s418_Run;                  /* '<S418>/Logical Operator1' */
  boolean_T s579_Merge;                /* '<S579>/Merge' */
  boolean_T s458_ReadCANMessage_o2;    /* '<S458>/Read CAN Message' */
  boolean_T s394_RelationalOperator4;  /* '<S394>/Relational Operator4' */
  boolean_T s395_RelationalOperator4;  /* '<S395>/Relational Operator4' */
  boolean_T s393_LogicalOperator;      /* '<S393>/Logical Operator' */
  boolean_T s453_motohawk_din2;        /* '<S453>/motohawk_din2' */
  boolean_T s582_Merge;                /* '<S582>/Merge' */
  boolean_T s598_Merge;                /* '<S598>/Merge' */
  boolean_T s603_Merge;                /* '<S603>/Merge' */
  boolean_T s135_AC;                   /* '<S135>/Merge14' */
  boolean_T s871_LogicalOperator;      /* '<S871>/Logical Operator' */
  boolean_T s886_RelationalOperator4;  /* '<S886>/Relational Operator4' */
  boolean_T s887_RelationalOperator4;  /* '<S887>/Relational Operator4' */
  boolean_T s888_RelationalOperator4;  /* '<S888>/Relational Operator4' */
  boolean_T s901_RelationalOperator4;  /* '<S901>/Relational Operator4' */
  boolean_T s902_RelationalOperator4;  /* '<S902>/Relational Operator4' */
  boolean_T s903_RelationalOperator4;  /* '<S903>/Relational Operator4' */
  boolean_T s924_RelationalOperator4;  /* '<S924>/Relational Operator4' */
  boolean_T s925_RelationalOperator4;  /* '<S925>/Relational Operator4' */
  boolean_T s926_RelationalOperator4;  /* '<S926>/Relational Operator4' */
  boolean_T s135_FUELP;                /* '<S135>/Merge7' */
  boolean_T s22_LogicalOperator2[8];   /* '<S22>/Logical Operator2' */
  boolean_T s936_RelationalOperator4;  /* '<S936>/Relational Operator4' */
  boolean_T s941_RelationalOperator4;  /* '<S941>/Relational Operator4' */
  boolean_T s940_RelationalOperator4;  /* '<S940>/Relational Operator4' */
  boolean_T s976_LogicalOperator;      /* '<S976>/Logical Operator' */
  boolean_T s977_LogicalOperator;      /* '<S977>/Logical Operator' */
  boolean_T s453_motohawk_din;         /* '<S453>/motohawk_din' */
  boolean_T s585_Merge;                /* '<S585>/Merge' */
  boolean_T s994_LogicalOperator;      /* '<S994>/Logical Operator' */
  boolean_T s867_RelationalOperator4;  /* '<S867>/Relational Operator4' */
  boolean_T s1018_Merge[8];            /* '<S1018>/Merge' */
  boolean_T s378_LogicalOperator;      /* '<S378>/Logical Operator' */
  boolean_T s863_LogicalOperator1[8];  /* '<S863>/Logical Operator1' */
  boolean_T s953_RelationalOperator1;  /* '<S953>/Relational Operator1' */
  boolean_T s413_RelationalOperator3;  /* '<S413>/Relational Operator3' */
  boolean_T s375_Enable;               /* '<S369>/Baro Stall State Delay' */
  boolean_T s167_Switch1;              /* '<S167>/Switch1' */
  boolean_T s166_Switch1;              /* '<S166>/Switch1' */
  boolean_T s144_LogicalOperator2;     /* '<S144>/Logical Operator2' */
  boolean_T s144_LogicalOperator4;     /* '<S144>/Logical Operator4' */
  boolean_T s163_Switch1;              /* '<S163>/Switch1' */
  boolean_T s144_LogicalOperator1;     /* '<S144>/Logical Operator1' */
  boolean_T s144_LogicalOperator;      /* '<S144>/Logical Operator' */
  boolean_T s190_LogicalOperator;      /* '<S190>/Logical Operator' */
  boolean_T s192_Switch1;              /* '<S192>/Switch1' */
  boolean_T s231_MultiportSwitch;      /* '<S231>/Multiport Switch' */
  boolean_T s264_RelationalOperator;   /* '<S264>/Relational Operator' */
  boolean_T s250_RelationalOperator;   /* '<S250>/Relational Operator' */
  boolean_T s250_RelationalOperator3;  /* '<S250>/Relational Operator3' */
  boolean_T s250_RelationalOperator1;  /* '<S250>/Relational Operator1' */
  boolean_T s250_LogicalOperator;      /* '<S250>/Logical Operator' */
  boolean_T s250_RelationalOperator5;  /* '<S250>/Relational Operator5' */
  boolean_T s266_RelOp;                /* '<S266>/RelOp' */
  boolean_T s153_HitCrossing1;         /* '<S153>/Hit  Crossing1' */
  boolean_T s153_LogicalOperator;      /* '<S153>/Logical Operator' */
  boolean_T s251_RelationalOperator1;  /* '<S251>/Relational Operator1' */
  boolean_T s247_LogicalOperator1;     /* '<S247>/Logical Operator1' */
  boolean_T s284_LogicalOperator;      /* '<S284>/Logical Operator' */
  boolean_T s284_LogicalOperator3;     /* '<S284>/Logical Operator3' */
  boolean_T s284_RelationalOperator5;  /* '<S284>/Relational Operator5' */
  boolean_T s284_LogicalOperator2;     /* '<S284>/Logical Operator2' */
  boolean_T s208_LogicalOperator2;     /* '<S208>/Logical Operator2' */
  boolean_T s227_LogicalOperator;      /* '<S227>/Logical Operator' */
  boolean_T s174_LogicalOperator1;     /* '<S174>/Logical Operator1' */
  boolean_T s24_OnlyEnableSparkwhenEnergyisAboveZero;/* '<S24>/Only Enable Spark when Energy is Above Zero' */
  boolean_T s101_DataTypeConversion1[8];/* '<S101>/Data Type Conversion1' */
  boolean_T s100_DataTypeConversion[8];/* '<S100>/Data Type Conversion' */
  boolean_T s32_LogicalOperator3;      /* '<S32>/Logical Operator3' */
  boolean_T s20_RelationalOperator5;   /* '<S20>/Relational Operator5' */
  boolean_T s20_RelationalOperator2;   /* '<S20>/Relational Operator2' */
  boolean_T s20_RelationalOperator3;   /* '<S20>/Relational Operator3' */
  boolean_T s28_LogicalOperator;       /* '<S28>/Logical Operator' */
  boolean_T s35_RelationalOperator;    /* '<S35>/Relational Operator' */
  boolean_T s27_TestComplete;          /* '<S20>/ETC Test  Manager' */
  boolean_T s1039_RelationalOperator;  /* '<S1039>/Relational Operator' */
  boolean_T s1039_LogicalOperator2;    /* '<S1039>/Logical Operator2' */
  boolean_T s1043_MPRDState;           /* '<S1039>/ECUP Latch' */
  boolean_T s9_ReadCANRaw_o1;          /* '<S9>/Read CAN Raw' */
  boolean_T s9_ReadCANRaw_o3;          /* '<S9>/Read CAN Raw' */
  rtB_FunctionCallSubsystem_BaseEngineController_LS s764_FunctionCallSubsystem;/* '<S764>/Function-Call Subsystem' */
  rtB_FunctionCallSubsystem_BaseEngineController_LS s762_FunctionCallSubsystem;/* '<S762>/Function-Call Subsystem' */
  rtB_CollectAverage_BaseEngineController_LS s415_CollectAverage;/* '<S415>/Collect Average' */
  rtB_CollectAverage_BaseEngineController_LS s414_CollectAverage;/* '<S414>/Collect Average' */
  rtB_CollectAverage_BaseEngineController_LS s376_CollectAverage;/* '<S376>/Collect Average' */
} BlockIO_BaseEngineController_LS;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T s578_UnitDelay_DSTATE;        /* '<S578>/Unit Delay' */
  real_T s616_UnitDelay_DSTATE;        /* '<S616>/Unit Delay' */
  real_T s577_UnitDelay_DSTATE;        /* '<S577>/Unit Delay' */
  real_T s613_UnitDelay_DSTATE;        /* '<S613>/Unit Delay' */
  real_T s578_UnitDelay1_DSTATE;       /* '<S578>/Unit Delay1' */
  real_T s763_UnitDelay_DSTATE;        /* '<S763>/Unit Delay' */
  real_T s788_UnitDelay_DSTATE;        /* '<S788>/Unit Delay' */
  real_T s820_UnitDelay_DSTATE;        /* '<S820>/Unit Delay' */
  real_T s813_UnitDelay1_DSTATE;       /* '<S813>/Unit Delay1' */
  real_T s761_UnitDelay_DSTATE;        /* '<S761>/Unit Delay' */
  real_T s776_UnitDelay_DSTATE;        /* '<S776>/Unit Delay' */
  real_T s803_UnitDelay_DSTATE;        /* '<S803>/Unit Delay' */
  real_T s796_UnitDelay1_DSTATE;       /* '<S796>/Unit Delay1' */
  real_T s629_UnitDelay1_DSTATE;       /* '<S629>/Unit Delay1' */
  real_T s643_UnitDelay_DSTATE;        /* '<S643>/Unit Delay' */
  real_T s628_UnitDelay_DSTATE;        /* '<S628>/Unit Delay' */
  real_T s837_UnitDelay_DSTATE;        /* '<S837>/Unit Delay' */
  real_T s830_UnitDelay1_DSTATE;       /* '<S830>/Unit Delay1' */
  real_T s854_UnitDelay_DSTATE;        /* '<S854>/Unit Delay' */
  real_T s847_UnitDelay1_DSTATE;       /* '<S847>/Unit Delay1' */
  real_T s655_UnitDelay_DSTATE;        /* '<S655>/Unit Delay' */
  real_T s630_UnitDelay1_DSTATE;       /* '<S630>/Unit Delay1' */
  real_T s654_UnitDelay_DSTATE;        /* '<S654>/Unit Delay' */
  real_T s652_UnitDelay_DSTATE;        /* '<S652>/Unit Delay' */
  real_T s652_UnitDelay1_DSTATE;       /* '<S652>/Unit Delay1' */
  real_T s652_UnitDelay2_DSTATE;       /* '<S652>/Unit Delay2' */
  real_T s421_UnitDelay_DSTATE;        /* '<S421>/Unit Delay' */
  real_T s499_UnitDelay1_DSTATE;       /* '<S499>/Unit Delay1' */
  real_T s524_UnitDelay_DSTATE;        /* '<S524>/Unit Delay' */
  real_T s500_UnitDelay1_DSTATE;       /* '<S500>/Unit Delay1' */
  real_T s532_UnitDelay_DSTATE;        /* '<S532>/Unit Delay' */
  real_T s637_UnitDelay1_DSTATE;       /* '<S637>/Unit Delay1' */
  real_T s706_UnitDelay_DSTATE;        /* '<S706>/Unit Delay' */
  real_T s632_UnitDelay1_DSTATE;       /* '<S632>/Unit Delay1' */
  real_T s672_UnitDelay_DSTATE;        /* '<S672>/Unit Delay' */
  real_T s633_UnitDelay1_DSTATE;       /* '<S633>/Unit Delay1' */
  real_T s379_UnitDelay_DSTATE;        /* '<S379>/Unit Delay' */
  real_T s574_UnitDelay_DSTATE;        /* '<S574>/Unit Delay' */
  real_T s594_UnitDelay_DSTATE;        /* '<S594>/Unit Delay' */
  real_T s394_UnitDelay2_DSTATE;       /* '<S394>/Unit Delay2' */
  real_T s397_UnitDelay_DSTATE;        /* '<S397>/Unit Delay' */
  real_T s395_UnitDelay2_DSTATE;       /* '<S395>/Unit Delay2' */
  real_T s400_UnitDelay_DSTATE;        /* '<S400>/Unit Delay' */
  real_T s436_UnitDelay_DSTATE;        /* '<S436>/Unit Delay' */
  real_T s438_UnitDelay_DSTATE;        /* '<S438>/Unit Delay' */
  real_T s680_UnitDelay_DSTATE;        /* '<S680>/Unit Delay' */
  real_T s389_UnitDelay_DSTATE;        /* '<S389>/Unit Delay' */
  real_T s900_UnitDelay_DSTATE;        /* '<S900>/Unit Delay' */
  real_T s886_UnitDelay2_DSTATE;       /* '<S886>/Unit Delay2' */
  real_T s891_UnitDelay_DSTATE;        /* '<S891>/Unit Delay' */
  real_T s887_UnitDelay2_DSTATE;       /* '<S887>/Unit Delay2' */
  real_T s894_UnitDelay_DSTATE;        /* '<S894>/Unit Delay' */
  real_T s888_UnitDelay2_DSTATE;       /* '<S888>/Unit Delay2' */
  real_T s897_UnitDelay_DSTATE;        /* '<S897>/Unit Delay' */
  real_T s886_UnitDelay1_DSTATE;       /* '<S886>/Unit Delay1' */
  real_T s886_UnitDelay3_DSTATE;       /* '<S886>/Unit Delay3' */
  real_T s886_UnitDelay4_DSTATE;       /* '<S886>/Unit Delay4' */
  real_T s887_UnitDelay1_DSTATE;       /* '<S887>/Unit Delay1' */
  real_T s887_UnitDelay3_DSTATE;       /* '<S887>/Unit Delay3' */
  real_T s887_UnitDelay4_DSTATE;       /* '<S887>/Unit Delay4' */
  real_T s888_UnitDelay1_DSTATE;       /* '<S888>/Unit Delay1' */
  real_T s888_UnitDelay3_DSTATE;       /* '<S888>/Unit Delay3' */
  real_T s888_UnitDelay4_DSTATE;       /* '<S888>/Unit Delay4' */
  real_T s904_UnitDelay2_DSTATE;       /* '<S904>/Unit Delay2' */
  real_T s916_UnitDelay_DSTATE;        /* '<S916>/Unit Delay' */
  real_T s905_UnitDelay2_DSTATE;       /* '<S905>/Unit Delay2' */
  real_T s919_UnitDelay_DSTATE;        /* '<S919>/Unit Delay' */
  real_T s901_UnitDelay2_DSTATE;       /* '<S901>/Unit Delay2' */
  real_T s907_UnitDelay_DSTATE;        /* '<S907>/Unit Delay' */
  real_T s902_UnitDelay2_DSTATE;       /* '<S902>/Unit Delay2' */
  real_T s910_UnitDelay_DSTATE;        /* '<S910>/Unit Delay' */
  real_T s903_UnitDelay2_DSTATE;       /* '<S903>/Unit Delay2' */
  real_T s913_UnitDelay_DSTATE;        /* '<S913>/Unit Delay' */
  real_T s901_UnitDelay1_DSTATE;       /* '<S901>/Unit Delay1' */
  real_T s901_UnitDelay3_DSTATE;       /* '<S901>/Unit Delay3' */
  real_T s901_UnitDelay4_DSTATE;       /* '<S901>/Unit Delay4' */
  real_T s902_UnitDelay1_DSTATE;       /* '<S902>/Unit Delay1' */
  real_T s902_UnitDelay3_DSTATE;       /* '<S902>/Unit Delay3' */
  real_T s902_UnitDelay4_DSTATE;       /* '<S902>/Unit Delay4' */
  real_T s903_UnitDelay1_DSTATE;       /* '<S903>/Unit Delay1' */
  real_T s903_UnitDelay3_DSTATE;       /* '<S903>/Unit Delay3' */
  real_T s903_UnitDelay4_DSTATE;       /* '<S903>/Unit Delay4' */
  real_T s904_UnitDelay1_DSTATE;       /* '<S904>/Unit Delay1' */
  real_T s904_UnitDelay3_DSTATE;       /* '<S904>/Unit Delay3' */
  real_T s904_UnitDelay4_DSTATE;       /* '<S904>/Unit Delay4' */
  real_T s905_UnitDelay1_DSTATE;       /* '<S905>/Unit Delay1' */
  real_T s905_UnitDelay3_DSTATE;       /* '<S905>/Unit Delay3' */
  real_T s905_UnitDelay4_DSTATE;       /* '<S905>/Unit Delay4' */
  real_T s924_UnitDelay2_DSTATE;       /* '<S924>/Unit Delay2' */
  real_T s928_UnitDelay_DSTATE;        /* '<S928>/Unit Delay' */
  real_T s631_UnitDelay1_DSTATE;       /* '<S631>/Unit Delay1' */
  real_T s664_UnitDelay_DSTATE;        /* '<S664>/Unit Delay' */
  real_T s925_UnitDelay2_DSTATE;       /* '<S925>/Unit Delay2' */
  real_T s931_UnitDelay_DSTATE;        /* '<S931>/Unit Delay' */
  real_T s635_UnitDelay1_DSTATE;       /* '<S635>/Unit Delay1' */
  real_T s690_UnitDelay_DSTATE;        /* '<S690>/Unit Delay' */
  real_T s926_UnitDelay2_DSTATE;       /* '<S926>/Unit Delay2' */
  real_T s934_UnitDelay_DSTATE;        /* '<S934>/Unit Delay' */
  real_T s924_UnitDelay1_DSTATE;       /* '<S924>/Unit Delay1' */
  real_T s924_UnitDelay3_DSTATE;       /* '<S924>/Unit Delay3' */
  real_T s924_UnitDelay4_DSTATE;       /* '<S924>/Unit Delay4' */
  real_T s925_UnitDelay1_DSTATE;       /* '<S925>/Unit Delay1' */
  real_T s925_UnitDelay3_DSTATE;       /* '<S925>/Unit Delay3' */
  real_T s925_UnitDelay4_DSTATE;       /* '<S925>/Unit Delay4' */
  real_T s926_UnitDelay1_DSTATE;       /* '<S926>/Unit Delay1' */
  real_T s926_UnitDelay3_DSTATE;       /* '<S926>/Unit Delay3' */
  real_T s926_UnitDelay4_DSTATE;       /* '<S926>/Unit Delay4' */
  real_T s936_UnitDelay2_DSTATE;       /* '<S936>/Unit Delay2' */
  real_T s938_UnitDelay_DSTATE;        /* '<S938>/Unit Delay' */
  real_T s936_UnitDelay1_DSTATE;       /* '<S936>/Unit Delay1' */
  real_T s936_UnitDelay3_DSTATE;       /* '<S936>/Unit Delay3' */
  real_T s936_UnitDelay4_DSTATE;       /* '<S936>/Unit Delay4' */
  real_T s941_UnitDelay2_DSTATE;       /* '<S941>/Unit Delay2' */
  real_T s946_UnitDelay_DSTATE;        /* '<S946>/Unit Delay' */
  real_T s940_UnitDelay2_DSTATE;       /* '<S940>/Unit Delay2' */
  real_T s943_UnitDelay_DSTATE;        /* '<S943>/Unit Delay' */
  real_T s940_UnitDelay1_DSTATE;       /* '<S940>/Unit Delay1' */
  real_T s940_UnitDelay3_DSTATE;       /* '<S940>/Unit Delay3' */
  real_T s940_UnitDelay4_DSTATE;       /* '<S940>/Unit Delay4' */
  real_T s941_UnitDelay1_DSTATE;       /* '<S941>/Unit Delay1' */
  real_T s941_UnitDelay3_DSTATE;       /* '<S941>/Unit Delay3' */
  real_T s941_UnitDelay4_DSTATE;       /* '<S941>/Unit Delay4' */
  real_T s74_UnitDelay_DSTATE;         /* '<S74>/Unit Delay' */
  real_T s73_UnitDelay_DSTATE;         /* '<S73>/Unit Delay' */
  real_T s71_UnitDelay_DSTATE;         /* '<S71>/Unit Delay' */
  real_T s70_UnitDelay_DSTATE;         /* '<S70>/Unit Delay' */
  real_T s69_UnitDelay_DSTATE;         /* '<S69>/Unit Delay' */
  real_T s68_UnitDelay_DSTATE;         /* '<S68>/Unit Delay' */
  real_T s67_UnitDelay_DSTATE;         /* '<S67>/Unit Delay' */
  real_T s66_UnitDelay_DSTATE;         /* '<S66>/Unit Delay' */
  real_T s72_UnitDelay_DSTATE[8];      /* '<S72>/Unit Delay' */
  real_T s421_UnitDelay1_DSTATE;       /* '<S421>/Unit Delay1' */
  real_T s636_UnitDelay1_DSTATE;       /* '<S636>/Unit Delay1' */
  real_T s698_UnitDelay_DSTATE;        /* '<S698>/Unit Delay' */
  real_T s394_UnitDelay1_DSTATE;       /* '<S394>/Unit Delay1' */
  real_T s394_UnitDelay3_DSTATE;       /* '<S394>/Unit Delay3' */
  real_T s394_UnitDelay4_DSTATE;       /* '<S394>/Unit Delay4' */
  real_T s395_UnitDelay1_DSTATE;       /* '<S395>/Unit Delay1' */
  real_T s395_UnitDelay3_DSTATE;       /* '<S395>/Unit Delay3' */
  real_T s395_UnitDelay4_DSTATE;       /* '<S395>/Unit Delay4' */
  real_T s800_UnitDelay1_DSTATE;       /* '<S800>/Unit Delay1' */
  real_T s800_UnitDelay_DSTATE;        /* '<S800>/Unit Delay' */
  real_T s800_UnitDelay3_DSTATE;       /* '<S800>/Unit Delay3' */
  real_T s800_UnitDelay4_DSTATE;       /* '<S800>/Unit Delay4' */
  real_T s817_UnitDelay1_DSTATE;       /* '<S817>/Unit Delay1' */
  real_T s817_UnitDelay_DSTATE;        /* '<S817>/Unit Delay' */
  real_T s817_UnitDelay3_DSTATE;       /* '<S817>/Unit Delay3' */
  real_T s817_UnitDelay4_DSTATE;       /* '<S817>/Unit Delay4' */
  real_T s834_UnitDelay1_DSTATE;       /* '<S834>/Unit Delay1' */
  real_T s834_UnitDelay_DSTATE;        /* '<S834>/Unit Delay' */
  real_T s834_UnitDelay3_DSTATE;       /* '<S834>/Unit Delay3' */
  real_T s834_UnitDelay4_DSTATE;       /* '<S834>/Unit Delay4' */
  real_T s851_UnitDelay1_DSTATE;       /* '<S851>/Unit Delay1' */
  real_T s851_UnitDelay_DSTATE;        /* '<S851>/Unit Delay' */
  real_T s851_UnitDelay3_DSTATE;       /* '<S851>/Unit Delay3' */
  real_T s851_UnitDelay4_DSTATE;       /* '<S851>/Unit Delay4' */
  real_T s950_UnitDelay_DSTATE;        /* '<S950>/Unit Delay' */
  real_T s951_UnitDelay_DSTATE;        /* '<S951>/Unit Delay' */
  real_T s953_CrankCounter_DSTATE;     /* '<S953>/CrankCounter' */
  real_T s711_UnitDelay_DSTATE;        /* '<S711>/Unit Delay' */
  real_T s718_UnitDelay_DSTATE;        /* '<S718>/Unit Delay' */
  real_T s722_UnitDelay_DSTATE;        /* '<S722>/Unit Delay' */
  real_T s740_UnitDelay_DSTATE;        /* '<S740>/Unit Delay' */
  real_T s724_UnitDelay_DSTATE;        /* '<S724>/Unit Delay' */
  real_T s758_UnitDelay_DSTATE;        /* '<S758>/Unit Delay' */
  real_T s723_UnitDelay_DSTATE;        /* '<S723>/Unit Delay' */
  real_T s749_UnitDelay_DSTATE;        /* '<S749>/Unit Delay' */
  real_T s721_UnitDelay_DSTATE;        /* '<S721>/Unit Delay' */
  real_T s731_UnitDelay_DSTATE;        /* '<S731>/Unit Delay' */
  real_T s344_UnitDelay_DSTATE[8];     /* '<S344>/Unit Delay' */
  real_T s413_UnitDelay2_DSTATE;       /* '<S413>/Unit Delay2' */
  real_T s428_UnitDelay_DSTATE;        /* '<S428>/Unit Delay' */
  real_T s431_UnitDelay_DSTATE;        /* '<S431>/Unit Delay' */
  real_T s413_UnitDelay1_DSTATE;       /* '<S413>/Unit Delay1' */
  real_T s413_UnitDelay3_DSTATE;       /* '<S413>/Unit Delay3' */
  real_T s413_UnitDelay4_DSTATE;       /* '<S413>/Unit Delay4' */
  real_T s321_UnitDelay_DSTATE;        /* '<S321>/Unit Delay' */
  real_T s191_state_DSTATE;            /* '<S191>/state' */
  real_T s147_UnitDelay_DSTATE;        /* '<S147>/Unit Delay' */
  real_T s186_UnitDelay_DSTATE;        /* '<S186>/Unit Delay' */
  real_T s176_UnitDelay_DSTATE;        /* '<S176>/Unit Delay' */
  real_T s185_UnitDelay_DSTATE;        /* '<S185>/Unit Delay' */
  real_T s303_UnitDelay_DSTATE;        /* '<S303>/Unit Delay' */
  real_T s232_UnitDelay_DSTATE;        /* '<S232>/Unit Delay' */
  real_T s242_UnitDelay_DSTATE;        /* '<S242>/Unit Delay' */
  real_T s243_UnitDelay_DSTATE;        /* '<S243>/Unit Delay' */
  real_T s268_UnitDelay_DSTATE;        /* '<S268>/Unit Delay' */
  real_T s270_UnitDelay_DSTATE;        /* '<S270>/Unit Delay' */
  real_T s153_UnitDelay3_DSTATE;       /* '<S153>/Unit Delay3' */
  real_T s153_UnitDelay1_DSTATE;       /* '<S153>/Unit Delay1' */
  real_T s249_state_DSTATE;            /* '<S249>/state' */
  real_T s153_UnitDelay2_DSTATE;       /* '<S153>/Unit Delay2' */
  real_T s253_UnitDelay_DSTATE;        /* '<S253>/Unit Delay' */
  real_T s280_UnitDelay_DSTATE;        /* '<S280>/Unit Delay' */
  real_T s281_UnitDelay_DSTATE;        /* '<S281>/Unit Delay' */
  real_T s275_UnitDelay_DSTATE;        /* '<S275>/Unit Delay' */
  real_T s256_UnitDelay_DSTATE;        /* '<S256>/Unit Delay' */
  real_T s294_UnitDelay_DSTATE;        /* '<S294>/Unit Delay' */
  real_T s293_UnitDelay_DSTATE;        /* '<S293>/Unit Delay' */
  real_T s290_UnitDelay1_DSTATE;       /* '<S290>/Unit Delay1' */
  real_T s290_UnitDelay_DSTATE;        /* '<S290>/Unit Delay' */
  real_T s290_UnitDelay2_DSTATE;       /* '<S290>/Unit Delay2' */
  real_T s221_UnitDelay_DSTATE;        /* '<S221>/Unit Delay' */
  real_T s220_UnitDelay_DSTATE;        /* '<S220>/Unit Delay' */
  real_T s130_UnitDelay_DSTATE;        /* '<S130>/Unit Delay' */
  real_T s102_UnitDelay2_DSTATE;       /* '<S102>/Unit Delay2' */
  real_T s20_UnitDelay_DSTATE;         /* '<S20>/Unit Delay' */
  real_T s55_UnitDelay_DSTATE;         /* '<S55>/Unit Delay' */
  real_T s46_UnitDelay_DSTATE;         /* '<S46>/Unit Delay' */
  real_T s42_UnitDelay_DSTATE;         /* '<S42>/Unit Delay' */
  real_T s44_UnitDelay_DSTATE;         /* '<S44>/Unit Delay' */
  real_T s47_UnitDelay_DSTATE;         /* '<S47>/Unit Delay' */
  real_T s48_UnitDelay_DSTATE;         /* '<S48>/Unit Delay' */
  real_T s1045_UnitDelay_DSTATE;       /* '<S1045>/Unit Delay' */
  real_T s1045_UnitDelay1_DSTATE;      /* '<S1045>/Unit Delay1' */
  real_T s375_TOld;                    /* '<S369>/Baro Stall State Delay' */
  real_T s27_TimerOld;                 /* '<S20>/ETC Test  Manager' */
  uint32_T s450_UnitDelay_DSTATE;      /* '<S450>/Unit Delay' */
  uint32_T s627_UnitDelay_DSTATE;      /* '<S627>/Unit Delay' */
  uint32_T s607_motohawk_delta_time_DWORK1;/* '<S607>/motohawk_delta_time' */
  uint32_T s616_motohawk_delta_time_DWORK1;/* '<S616>/motohawk_delta_time' */
  uint32_T s781_motohawk_delta_time_DWORK1;/* '<S781>/motohawk_delta_time' */
  uint32_T s812_motohawk_delta_time_DWORK1;/* '<S812>/motohawk_delta_time' */
  uint32_T s769_motohawk_delta_time_DWORK1;/* '<S769>/motohawk_delta_time' */
  uint32_T s795_motohawk_delta_time_DWORK1;/* '<S795>/motohawk_delta_time' */
  uint32_T s442_motohawk_delta_time_DWORK1;/* '<S442>/motohawk_delta_time' */
  uint32_T s638_motohawk_delta_time_DWORK1;/* '<S638>/motohawk_delta_time' */
  uint32_T s621_motohawk_delta_time_DWORK1;/* '<S621>/motohawk_delta_time' */
  uint32_T s829_motohawk_delta_time_DWORK1;/* '<S829>/motohawk_delta_time' */
  uint32_T s846_motohawk_delta_time_DWORK1;/* '<S846>/motohawk_delta_time' */
  uint32_T s655_motohawk_delta_time_DWORK1;/* '<S655>/motohawk_delta_time' */
  uint32_T s651_motohawk_delta_time_DWORK1;/* '<S651>/motohawk_delta_time' */
  uint32_T s519_motohawk_delta_time_DWORK1;/* '<S519>/motohawk_delta_time' */
  uint32_T s527_motohawk_delta_time_DWORK1;/* '<S527>/motohawk_delta_time' */
  uint32_T s444_motohawk_delta_time_DWORK1;/* '<S444>/motohawk_delta_time' */
  uint32_T s701_motohawk_delta_time_DWORK1;/* '<S701>/motohawk_delta_time' */
  uint32_T s667_motohawk_delta_time_DWORK1;/* '<S667>/motohawk_delta_time' */
  uint32_T s369_motohawk_delta_time_DWORK1;/* '<S369>/motohawk_delta_time' */
  uint32_T s382_motohawk_delta_time_DWORK1;/* '<S382>/motohawk_delta_time' */
  uint32_T s588_motohawk_delta_time_DWORK1;/* '<S588>/motohawk_delta_time' */
  uint32_T s436_motohawk_delta_time_DWORK1;/* '<S436>/motohawk_delta_time' */
  uint32_T s599_motohawk_delta_time_DWORK1;/* '<S599>/motohawk_delta_time' */
  uint32_T s604_motohawk_delta_time_DWORK1;/* '<S604>/motohawk_delta_time' */
  uint32_T s675_motohawk_delta_time_DWORK1;/* '<S675>/motohawk_delta_time' */
  uint32_T s370_motohawk_delta_time_DWORK1;/* '<S370>/motohawk_delta_time' */
  uint32_T s899_motohawk_delta_time_DWORK1;/* '<S899>/motohawk_delta_time' */
  uint32_T s659_motohawk_delta_time_DWORK1;/* '<S659>/motohawk_delta_time' */
  uint32_T s685_motohawk_delta_time_DWORK1;/* '<S685>/motohawk_delta_time' */
  uint32_T s998_motohawk_delta_time_DWORK1;/* '<S998>/motohawk_delta_time' */
  uint32_T s446_motohawk_delta_time_DWORK1;/* '<S446>/motohawk_delta_time' */
  uint32_T s693_motohawk_delta_time_DWORK1;/* '<S693>/motohawk_delta_time' */
  uint32_T s619_motohawk_delta_time_DWORK1;/* '<S619>/motohawk_delta_time' */
  uint32_T s712_motohawk_delta_time_DWORK1;/* '<S712>/motohawk_delta_time' */
  uint32_T s734_motohawk_delta_time_DWORK1;/* '<S734>/motohawk_delta_time' */
  uint32_T s752_motohawk_delta_time_DWORK1;/* '<S752>/motohawk_delta_time' */
  uint32_T s743_motohawk_delta_time_DWORK1;/* '<S743>/motohawk_delta_time' */
  uint32_T s725_motohawk_delta_time_DWORK1;/* '<S725>/motohawk_delta_time' */
  uint32_T s335_motohawk_delta_time_DWORK1;/* '<S335>/motohawk_delta_time' */
  uint32_T s334_motohawk_delta_time_DWORK1;/* '<S334>/motohawk_delta_time' */
  uint32_T s338_motohawk_delta_time_DWORK1;/* '<S338>/motohawk_delta_time' */
  uint32_T s337_motohawk_delta_time_DWORK1;/* '<S337>/motohawk_delta_time' */
  uint32_T s339_motohawk_delta_time_DWORK1;/* '<S339>/motohawk_delta_time' */
  uint32_T s346_motohawk_delta_time_DWORK1;/* '<S346>/motohawk_delta_time' */
  uint32_T s350_motohawk_delta_time_DWORK1;/* '<S350>/motohawk_delta_time' */
  uint32_T s351_motohawk_delta_time_DWORK1;/* '<S351>/motohawk_delta_time' */
  uint32_T s352_motohawk_delta_time_DWORK1;/* '<S352>/motohawk_delta_time' */
  uint32_T s368_motohawk_delta_time_DWORK1;/* '<S368>/motohawk_delta_time' */
  uint32_T s367_motohawk_delta_time_DWORK1;/* '<S367>/motohawk_delta_time' */
  uint32_T s342_motohawk_delta_time_DWORK1;/* '<S342>/motohawk_delta_time' */
  uint32_T s348_motohawk_delta_time_DWORK1;/* '<S348>/motohawk_delta_time' */
  uint32_T s431_motohawk_delta_time_DWORK1;/* '<S431>/motohawk_delta_time' */
  uint32_T s413_motohawk_delta_time_DWORK1;/* '<S413>/motohawk_delta_time' */
  uint32_T s323_motohawk_delta_time_DWORK1;/* '<S323>/motohawk_delta_time' */
  uint32_T s322_temporalCounter_i1;    /* '<S311>/Ice Break' */
  uint32_T s322_presentTicks;          /* '<S311>/Ice Break' */
  uint32_T s322_elapsedTicks;          /* '<S311>/Ice Break' */
  uint32_T s322_previousTicks;         /* '<S311>/Ice Break' */
  uint32_T s193_motohawk_delta_time_DWORK1;/* '<S193>/motohawk_delta_time' */
  uint32_T s191_motohawk_delta_time_DWORK1;/* '<S191>/motohawk_delta_time' */
  uint32_T s176_motohawk_delta_time_DWORK1;/* '<S176>/motohawk_delta_time' */
  uint32_T s186_motohawk_delta_time_DWORK1;/* '<S186>/motohawk_delta_time' */
  uint32_T s232_motohawk_delta_time_DWORK1;/* '<S232>/motohawk_delta_time' */
  uint32_T s243_motohawk_delta_time_DWORK1;/* '<S243>/motohawk_delta_time' */
  uint32_T s249_motohawk_delta_time_DWORK1;/* '<S249>/motohawk_delta_time' */
  uint32_T s253_motohawk_delta_time_DWORK1;/* '<S253>/motohawk_delta_time' */
  uint32_T s281_motohawk_delta_time_DWORK1;/* '<S281>/motohawk_delta_time' */
  uint32_T s256_motohawk_delta_time_DWORK1;/* '<S256>/motohawk_delta_time' */
  uint32_T s294_motohawk_delta_time_DWORK1;/* '<S294>/motohawk_delta_time' */
  uint32_T s298_motohawk_delta_time_DWORK1;/* '<S298>/motohawk_delta_time' */
  uint32_T s300_motohawk_delta_time_DWORK1;/* '<S300>/motohawk_delta_time' */
  uint32_T s299_motohawk_delta_time_DWORK1;/* '<S299>/motohawk_delta_time' */
  uint32_T s218_motohawk_delta_time_DWORK1;/* '<S218>/motohawk_delta_time' */
  uint32_T s217_motohawk_delta_time_DWORK1;/* '<S217>/motohawk_delta_time' */
  uint32_T s63_motohawk_delta_time_DWORK1;/* '<S63>/motohawk_delta_time' */
  uint32_T s55_motohawk_delta_time_DWORK1;/* '<S55>/motohawk_delta_time' */
  uint32_T s43_motohawk_delta_time_DWORK1;/* '<S43>/motohawk_delta_time' */
  uint32_T s48_motohawk_delta_time_DWORK1;/* '<S48>/motohawk_delta_time' */
  uint32_T s1056_motohawk_delta_time_DWORK1;/* '<S1056>/motohawk_delta_time' */
  uint32_T s1047_motohawk_delta_time_DWORK1;/* '<S1047>/motohawk_delta_time' */
  int_T s153_HitCrossing1_MODE;        /* '<S153>/Hit  Crossing1' */
  uint16_T s869_InjectorSequence_DWORK2;/* '<S869>/Injector Sequence' */
  int8_T s415_UnitDelay_DSTATE;        /* '<S415>/Unit Delay' */
  int8_T s414_UnitDelay_DSTATE;        /* '<S414>/Unit Delay' */
  int8_T s376_UnitDelay_DSTATE;        /* '<S376>/Unit Delay' */
  uint8_T s418_UnitDelay_DSTATE;       /* '<S418>/Unit Delay' */
  uint8_T s440_CrankCounter_DSTATE;    /* '<S440>/CrankCounter' */
  uint8_T s102_UnitDelay1_DSTATE;      /* '<S102>/Unit Delay1' */
  boolean_T s617_UnitDelay_DSTATE;     /* '<S617>/Unit Delay' */
  boolean_T s578_UnitDelay2_DSTATE;    /* '<S578>/Unit Delay2' */
  boolean_T s391_UnitDelay_DSTATE;     /* '<S391>/Unit Delay' */
  boolean_T s390_InitialConditionisTrue_DSTATE;/* '<S390>/Initial Condition is True' */
  boolean_T s358_UnitDelay_DSTATE;     /* '<S358>/Unit Delay' */
  boolean_T s359_UnitDelay_DSTATE;     /* '<S359>/Unit Delay' */
  boolean_T s364_UnitDelay_DSTATE;     /* '<S364>/Unit Delay' */
  boolean_T s365_UnitDelay_DSTATE;     /* '<S365>/Unit Delay' */
  boolean_T s360_UnitDelay_DSTATE;     /* '<S360>/Unit Delay' */
  boolean_T s366_UnitDelay_DSTATE;     /* '<S366>/Unit Delay' */
  boolean_T s318_UnitDelay_DSTATE;     /* '<S318>/Unit Delay' */
  boolean_T s319_UnitDelay_DSTATE;     /* '<S319>/Unit Delay' */
  boolean_T s320_UnitDelay_DSTATE;     /* '<S320>/Unit Delay' */
  boolean_T s167_UnitDelay_DSTATE;     /* '<S167>/Unit Delay' */
  boolean_T s166_UnitDelay_DSTATE;     /* '<S166>/Unit Delay' */
  boolean_T s164_UnitDelay_DSTATE;     /* '<S164>/Unit Delay' */
  boolean_T s165_UnitDelay_DSTATE;     /* '<S165>/Unit Delay' */
  boolean_T s163_UnitDelay_DSTATE;     /* '<S163>/Unit Delay' */
  boolean_T s162_UnitDelay_DSTATE;     /* '<S162>/Unit Delay' */
  boolean_T s192_UnitDelay_DSTATE;     /* '<S192>/Unit Delay' */
  boolean_T s203_UnitDelay_DSTATE;     /* '<S203>/Unit Delay' */
  boolean_T s204_UnitDelay_DSTATE;     /* '<S204>/Unit Delay' */
  boolean_T s205_UnitDelay_DSTATE;     /* '<S205>/Unit Delay' */
  boolean_T s306_InitialConditionisTrue_DSTATE;/* '<S306>/Initial Condition is True' */
  boolean_T s152_UnitDelay_DSTATE;     /* '<S152>/Unit Delay' */
  boolean_T s246_UnitDelay_DSTATE;     /* '<S246>/Unit Delay' */
  boolean_T s297_UnitDelay_DSTATE;     /* '<S297>/Unit Delay' */
  boolean_T s45_UnitDelay_DSTATE;      /* '<S45>/Unit Delay' */
  boolean_T s1044_UnitDelay8_DSTATE;   /* '<S1044>/Unit Delay8' */
  boolean_T s1044_UnitDelay6_DSTATE;   /* '<S1044>/Unit Delay6' */
  boolean_T s1044_UnitDelay7_DSTATE;   /* '<S1044>/Unit Delay7' */
  boolean_T s1040_UnitDelay_DSTATE;    /* '<S1040>/Unit Delay' */
  boolean_T s1046_UnitDelay2_DSTATE;   /* '<S1046>/Unit Delay2' */
  boolean_T s1039_UnitDelay5_DSTATE;   /* '<S1039>/Unit Delay5' */
  boolean_T s1046_UnitDelay_DSTATE;    /* '<S1046>/Unit Delay' */
  boolean_T s1046_UnitDelay1_DSTATE;   /* '<S1046>/Unit Delay1' */
  boolean_T s1039_UnitDelay3_DSTATE;   /* '<S1039>/Unit Delay3' */
  boolean_T s1039_UnitDelay4_DSTATE;   /* '<S1039>/Unit Delay4' */
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
  uint8_T s456_motohawk_trigger_DWORK1;/* '<S456>/motohawk_trigger' */
  uint8_T s418_motohawk_trigger_DWORK1;/* '<S418>/motohawk_trigger' */
  uint8_T s634_motohawk_trigger5_DWORK1;/* '<S634>/motohawk_trigger5' */
  uint8_T s456_motohawk_trigger1_DWORK1;/* '<S456>/motohawk_trigger1' */
  uint8_T s14_motohawk_trigger1_DWORK1;/* '<S14>/motohawk_trigger1' */
  uint8_T s14_motohawk_trigger_DWORK1; /* '<S14>/motohawk_trigger' */
  uint8_T s13_motohawk_trigger_DWORK1; /* '<S13>/motohawk_trigger' */
  uint8_T s762_motohawk_trigger_DWORK1;/* '<S762>/motohawk_trigger' */
  uint8_T s764_motohawk_trigger_DWORK1;/* '<S764>/motohawk_trigger' */
  uint8_T s953_motohawk_trigger1_DWORK1;/* '<S953>/motohawk_trigger1' */
  uint8_T s439_is_c2_BaseEngineController_LS;/* '<S418>/Engine State Machine' */
  uint8_T s375_is_c19_BaseEngineController_LS;/* '<S369>/Baro Stall State Delay' */
  uint8_T s322_is_active_c3_BaseEngineController_LS;/* '<S311>/Ice Break' */
  uint8_T s322_is_c3_BaseEngineController_LS;/* '<S311>/Ice Break' */
  uint8_T s136_motohawk_trigger1_DWORK1;/* '<S136>/motohawk_trigger1' */
  uint8_T s265_is_active_c12_BaseEngineController_LS;/* '<S250>/IdleStateMachine' */
  uint8_T s265_is_c12_BaseEngineController_LS;/* '<S250>/IdleStateMachine' */
  uint8_T s102_motohawk_trigger_DWORK1;/* '<S102>/motohawk_trigger' */
  uint8_T s27_is_c9_BaseEngineController_LS;/* '<S20>/ETC Test  Manager' */
  uint8_T s1043_is_c8_BaseEngineController_LS;/* '<S1039>/ECUP Latch' */
  boolean_T s618_Memory_PreviousInput; /* '<S618>/Memory' */
  boolean_T s869_InjectorSequence_DWORK1[8];/* '<S869>/Injector Sequence' */
  boolean_T s286_Multiplyby10ifnotyetenabled_FirstOutputTime;/* '<S286>/Multiply by 1.0 if not yet enabled' */
  boolean_T s1060_Memory_PreviousInput;/* '<S1060>/Memory' */
  boolean_T s15_Stall_MODE;            /* '<S15>/Stall' */
  boolean_T s15_Crank_MODE;            /* '<S15>/Crank' */
  boolean_T s369_CaptureSignalAtStartup_MODE;/* '<S369>/Capture Signal At Startup' */
  boolean_T s373_CaptureECTAtStartup_MODE;/* '<S373>/Capture ECT At Startup' */
  boolean_T s373_CaptureIATAtStartup_MODE;/* '<S373>/Capture IAT At Startup' */
  boolean_T s15_Run_MODE;              /* '<S15>/Run' */
  boolean_T s22_PassThrough1_MODE;     /* '<S22>/PassThrough1' */
  boolean_T s22_PassThrough3_MODE;     /* '<S22>/PassThrough3' */
  boolean_T s22_SequenceCutMachine_MODE;/* '<S22>/SequenceCutMachine' */
  boolean_T s22_PassThrough5_MODE;     /* '<S22>/PassThrough5' */
  boolean_T s22_PassThrough4_MODE;     /* '<S22>/PassThrough4' */
  boolean_T s14_ElectronicThrottleController_MODE;/* '<S14>/Electronic Throttle Controller' */
  boolean_T s207_DeltaTPSTransientFueling_MODE;/* '<S207>/Delta TPS Transient Fueling' */
  boolean_T s212_ECTTransientFueling_MODE;/* '<S212>/ECT Transient Fueling' */
  boolean_T s212_OXYTransientFueling_MODE;/* '<S212>/OXY Transient Fueling' */
  boolean_T s31_PassThrough_MODE;      /* '<S31>/PassThrough' */
  rtDW_FunctionCallSubsystem_BaseEngineController_LS s764_FunctionCallSubsystem;/* '<S764>/Function-Call Subsystem' */
  rtDW_FunctionCallSubsystem_BaseEngineController_LS s762_FunctionCallSubsystem;/* '<S762>/Function-Call Subsystem' */
  rtDW_CollectAverage_BaseEngineController_LS s415_CollectAverage;/* '<S415>/Collect Average' */
  rtDW_CollectAverage_BaseEngineController_LS s414_CollectAverage;/* '<S414>/Collect Average' */
  rtDW_CollectAverage_BaseEngineController_LS s376_CollectAverage;/* '<S376>/Collect Average' */
} D_Work_BaseEngineController_LS;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState HitCrossing1_Input_ZCE;   /* '<S153>/Hit  Crossing1' */
  ZCSigState ResetTasksCompleteToFalse_Trig_ZCE;/* '<S32>/Reset TasksComplete To False' */
  ZCSigState ResetTasksCompleteToTrue_Trig_ZCE;/* '<S20>/Reset TasksComplete To True' */
  ZCSigState ShutdownpoweronECU565563_Trig_ZCE;/* '<S1046>/Shutdown power on ECU565//563' */
  ZCSigState SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE;/* '<S1046>/Save NV Vars one tick before MPRD off' */
  ZCSigState ProcessorReboot_Trig_ZCE; /* '<S1046>/Processor Reboot' */
  ZCSigState PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE;/* '<S1046>/Post Shutdown two ticks before MPRD off' */
  ZCSigState ShutdownpoweronECU565563_Trig_ZCE_l;/* '<S1044>/Shutdown power on ECU565//563' */
  ZCSigState SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE_m;/* '<S1044>/Save NV Vars one tick before MPRD off' */
  ZCSigState ProcessorReboot_Trig_ZCE_h;/* '<S1044>/Processor Reboot' */
  ZCSigState PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE_h;/* '<S1044>/Post Shutdown two ticks before MPRD off' */
  ZCSigState Clear_Trig_ZCE;           /* '<S1042>/Clear' */
  ZCSigState Clear_Trig_ZCE_k;         /* '<S1041>/Clear' */
} PrevZCSigStates_BaseEngineController_LS;

/* Invariant block signals (auto storage) */
typedef struct {
  const real_T s869_Gain4;             /* '<S869>/Gain4' */
  const real_T s138_motohawk_replicate2;/* '<S138>/motohawk_replicate2' */
  const real_T s138_motohawk_replicate[8];/* '<S138>/motohawk_replicate' */
  const uint32_T s869_DataTypeConversion5;/* '<S869>/Data Type Conversion5' */
} ConstBlockIO_BaseEngineController_LS;

/* Constant parameters (auto storage) */
typedef struct {
  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S162>/Combinatorial  Logic'
   *   '<S163>/Combinatorial  Logic'
   *   '<S164>/Combinatorial  Logic'
   *   '<S165>/Combinatorial  Logic'
   *   '<S166>/Combinatorial  Logic'
   *   '<S167>/Combinatorial  Logic'
   *   '<S192>/Combinatorial  Logic'
   *   '<S203>/Combinatorial  Logic'
   *   '<S204>/Combinatorial  Logic'
   *   '<S205>/Combinatorial  Logic'
   *   '<S318>/Combinatorial  Logic'
   *   '<S319>/Combinatorial  Logic'
   *   '<S320>/Combinatorial  Logic'
   *   '<S358>/Combinatorial  Logic'
   *   '<S359>/Combinatorial  Logic'
   *   '<S360>/Combinatorial  Logic'
   *   '<S364>/Combinatorial  Logic'
   *   '<S365>/Combinatorial  Logic'
   *   '<S366>/Combinatorial  Logic'
   *   '<S45>/Combinatorial  Logic'
   *   '<S297>/Combinatorial  Logic'
   */
  boolean_T pooled916[8];

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S1060>/Logic'
   *   '<S618>/Logic'
   */
  boolean_T pooled917[16];
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
 * '<S65>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets
 * '<S66>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel
 * '<S67>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel1
 * '<S68>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel2
 * '<S69>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel3
 * '<S70>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel4
 * '<S71>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel5
 * '<S72>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel6
 * '<S73>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel7
 * '<S74>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel8
 * '<S75>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel/NewValue
 * '<S76>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel/OldValue
 * '<S77>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel1/NewValue
 * '<S78>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel1/OldValue
 * '<S79>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel2/NewValue
 * '<S80>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel2/OldValue
 * '<S81>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel3/NewValue
 * '<S82>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel3/OldValue
 * '<S83>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel4/NewValue
 * '<S84>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel4/OldValue
 * '<S85>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel5/NewValue
 * '<S86>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel5/OldValue
 * '<S87>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel6/NewValue
 * '<S88>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel6/OldValue
 * '<S89>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel7/NewValue
 * '<S90>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel7/OldValue
 * '<S91>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel8/NewValue
 * '<S92>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel8/OldValue
 * '<S93>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Hard Cycle Cut Pattern
 * '<S94>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Hard Cycle Cut Pattern Two Step
 * '<S95>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Medium Cycle Cut Pattern
 * '<S96>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Medium Cycle Cut Pattern Two Step
 * '<S97>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/PassThrough1
 * '<S98>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/PassThrough2
 * '<S99>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/PassThrough3
 * '<S100>' : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/PassThrough4
 * '<S101>' : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/PassThrough5
 * '<S102>' : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/SequenceCutMachine
 * '<S103>' : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Soft Cycle Cut Pattern
 * '<S104>' : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Soft Cycle Cut Pattern Two Step
 * '<S105>' : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Hard Cycle Cut Pattern/Cycle1CutPatter
 * '<S106>' : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Hard Cycle Cut Pattern/Cycle2CutPatter
 * '<S107>' : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Hard Cycle Cut Pattern/Cycle3CutPatter
 * '<S108>' : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Hard Cycle Cut Pattern/Cycle4CutPatter
 * '<S109>' : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Hard Cycle Cut Pattern Two Step/Cycle1CutPatter
 * '<S110>' : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Hard Cycle Cut Pattern Two Step/Cycle2CutPatter
 * '<S111>' : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Hard Cycle Cut Pattern Two Step/Cycle3CutPatter
 * '<S112>' : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Hard Cycle Cut Pattern Two Step/Cycle4CutPatter
 * '<S113>' : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Medium Cycle Cut Pattern/Cycle1CutPatter
 * '<S114>' : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Medium Cycle Cut Pattern/Cycle2CutPatter
 * '<S115>' : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Medium Cycle Cut Pattern/Cycle3CutPatter
 * '<S116>' : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Medium Cycle Cut Pattern/Cycle4CutPatter
 * '<S117>' : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Medium Cycle Cut Pattern Two Step/Cycle1CutPatter
 * '<S118>' : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Medium Cycle Cut Pattern Two Step/Cycle2CutPatter
 * '<S119>' : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Medium Cycle Cut Pattern Two Step/Cycle3CutPatter
 * '<S120>' : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Medium Cycle Cut Pattern Two Step/Cycle4CutPatter
 * '<S121>' : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/SequenceCutMachine/SequencyCutMachine
 * '<S122>' : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Soft Cycle Cut Pattern/Cycle1CutPatter
 * '<S123>' : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Soft Cycle Cut Pattern/Cycle2CutPatter
 * '<S124>' : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Soft Cycle Cut Pattern/Cycle3CutPatter
 * '<S125>' : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Soft Cycle Cut Pattern/Cycle4CutPatter
 * '<S126>' : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Soft Cycle Cut Pattern Two Step/Cycle1CutPatter
 * '<S127>' : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Soft Cycle Cut Pattern Two Step/Cycle2CutPatter
 * '<S128>' : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Soft Cycle Cut Pattern Two Step/Cycle3CutPatter
 * '<S129>' : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Soft Cycle Cut Pattern Two Step/Cycle4CutPatter
 * '<S130>' : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Spark Coil Characterization/motohawk_override_rel
 * '<S131>' : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Spark Coil Characterization/motohawk_override_rel/NewValue
 * '<S132>' : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Spark Coil Characterization/motohawk_override_rel/OldValue
 * '<S133>' : BaseEngineController_LS/Foreground/Control/Controller/Crank
 * '<S134>' : BaseEngineController_LS/Foreground/Control/Controller/Crank State
 * '<S135>' : BaseEngineController_LS/Foreground/Control/Controller/Merge
 * '<S136>' : BaseEngineController_LS/Foreground/Control/Controller/Run
 * '<S137>' : BaseEngineController_LS/Foreground/Control/Controller/Run State
 * '<S138>' : BaseEngineController_LS/Foreground/Control/Controller/Stall
 * '<S139>' : BaseEngineController_LS/Foreground/Control/Controller/Stall State
 * '<S140>' : BaseEngineController_LS/Foreground/Control/Controller/Crank/CrankFueling
 * '<S141>' : BaseEngineController_LS/Foreground/Control/Controller/Crank/CrankIAC
 * '<S142>' : BaseEngineController_LS/Foreground/Control/Controller/Crank/IAC Characterization
 * '<S143>' : BaseEngineController_LS/Foreground/Control/Controller/Merge/FuelPump
 * '<S144>' : BaseEngineController_LS/Foreground/Control/Controller/Run/AC Control
 * '<S145>' : BaseEngineController_LS/Foreground/Control/Controller/Run/AirFlow Manager
 * '<S146>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Base Equiv Ratio
 * '<S147>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Boost Control
 * '<S148>' : BaseEngineController_LS/Foreground/Control/Controller/Run/DFCO
 * '<S149>' : BaseEngineController_LS/Foreground/Control/Controller/Run/FAN Control
 * '<S150>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager
 * '<S151>' : BaseEngineController_LS/Foreground/Control/Controller/Run/IAC Characterization
 * '<S152>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor
 * '<S153>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor
 * '<S154>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control
 * '<S155>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Spark Manager
 * '<S156>' : BaseEngineController_LS/Foreground/Control/Controller/Run/AC Control/AC Comp High Pressure
 * '<S157>' : BaseEngineController_LS/Foreground/Control/Controller/Run/AC Control/AC Comp Low Pressure
 * '<S158>' : BaseEngineController_LS/Foreground/Control/Controller/Run/AC Control/AC Comp Overspeed
 * '<S159>' : BaseEngineController_LS/Foreground/Control/Controller/Run/AC Control/AC Comp Overspeed1
 * '<S160>' : BaseEngineController_LS/Foreground/Control/Controller/Run/AC Control/AC Comp Underspeed
 * '<S161>' : BaseEngineController_LS/Foreground/Control/Controller/Run/AC Control/AC Evap Temp Hyst
 * '<S162>' : BaseEngineController_LS/Foreground/Control/Controller/Run/AC Control/AC Comp High Pressure/Hysteresis
 * '<S163>' : BaseEngineController_LS/Foreground/Control/Controller/Run/AC Control/AC Comp Low Pressure/Hysteresis
 * '<S164>' : BaseEngineController_LS/Foreground/Control/Controller/Run/AC Control/AC Comp Overspeed/Hysteresis
 * '<S165>' : BaseEngineController_LS/Foreground/Control/Controller/Run/AC Control/AC Comp Overspeed1/Hysteresis
 * '<S166>' : BaseEngineController_LS/Foreground/Control/Controller/Run/AC Control/AC Comp Underspeed/Hysteresis
 * '<S167>' : BaseEngineController_LS/Foreground/Control/Controller/Run/AC Control/AC Evap Temp Hyst/Hysteresis
 * '<S168>' : BaseEngineController_LS/Foreground/Control/Controller/Run/AirFlow Manager/Saturation
 * '<S169>' : BaseEngineController_LS/Foreground/Control/Controller/Run/AirFlow Manager/ShutDownTasksComplete Reset
 * '<S170>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Base Equiv Ratio/Warm Up Fuel Holdoff
 * '<S171>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Base Equiv Ratio/motohawk_override_abs
 * '<S172>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Base Equiv Ratio/motohawk_override_abs/NewValue
 * '<S173>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Base Equiv Ratio/motohawk_override_abs/OldValue
 * '<S174>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Boost Control/BoostControl Adapt
 * '<S175>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Boost Control/Universal PID (Tunable & Scheduled)
 * '<S176>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Boost Control/Variable Rate Limiter
 * '<S177>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Boost Control/BoostControl Adapt/Adapt Boost Table
 * '<S178>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Boost Control/BoostControl Adapt/BoostControl Enable Delay
 * '<S179>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Boost Control/BoostControl Adapt/Saturation (Tunable)
 * '<S180>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Boost Control/BoostControl Adapt/BoostControl Enable Delay/Time Since Enabled (With Input)1
 * '<S181>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Boost Control/BoostControl Adapt/Saturation (Tunable)/Saturation
 * '<S182>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Boost Control/Universal PID (Tunable & Scheduled)/PID Gain Select1
 * '<S183>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Boost Control/Universal PID (Tunable & Scheduled)/Saturation
 * '<S184>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Boost Control/Universal PID (Tunable & Scheduled)/Universal PID
 * '<S185>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Boost Control/Universal PID (Tunable & Scheduled)/Universal PID/Derivitive3
 * '<S186>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Boost Control/Universal PID (Tunable & Scheduled)/Universal PID/Integrator
 * '<S187>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Boost Control/Universal PID (Tunable & Scheduled)/Universal PID/Model Info
 * '<S188>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Boost Control/Universal PID (Tunable & Scheduled)/Universal PID/Integrator/Saturation
 * '<S189>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Boost Control/Variable Rate Limiter/Saturation
 * '<S190>' : BaseEngineController_LS/Foreground/Control/Controller/Run/DFCO/DesEquivRatioMod
 * '<S191>' : BaseEngineController_LS/Foreground/Control/Controller/Run/DFCO/DesEquivRatioMod/Handoff Alpha
 * '<S192>' : BaseEngineController_LS/Foreground/Control/Controller/Run/DFCO/DesEquivRatioMod/Hysteresis
 * '<S193>' : BaseEngineController_LS/Foreground/Control/Controller/Run/DFCO/DesEquivRatioMod/Time Since Enabled (With Input)1
 * '<S194>' : BaseEngineController_LS/Foreground/Control/Controller/Run/DFCO/DesEquivRatioMod/motohawk_table_1d
 * '<S195>' : BaseEngineController_LS/Foreground/Control/Controller/Run/DFCO/DesEquivRatioMod/motohawk_table_1d1
 * '<S196>' : BaseEngineController_LS/Foreground/Control/Controller/Run/DFCO/DesEquivRatioMod/Handoff Alpha/Saturation
 * '<S197>' : BaseEngineController_LS/Foreground/Control/Controller/Run/FAN Control/Hysterisis
 * '<S198>' : BaseEngineController_LS/Foreground/Control/Controller/Run/FAN Control/Hysterisis1
 * '<S199>' : BaseEngineController_LS/Foreground/Control/Controller/Run/FAN Control/Hysterisis2
 * '<S200>' : BaseEngineController_LS/Foreground/Control/Controller/Run/FAN Control/motohawk_table_2d
 * '<S201>' : BaseEngineController_LS/Foreground/Control/Controller/Run/FAN Control/motohawk_table_2d1
 * '<S202>' : BaseEngineController_LS/Foreground/Control/Controller/Run/FAN Control/motohawk_table_2d2
 * '<S203>' : BaseEngineController_LS/Foreground/Control/Controller/Run/FAN Control/Hysterisis/Hysteresis
 * '<S204>' : BaseEngineController_LS/Foreground/Control/Controller/Run/FAN Control/Hysterisis1/Hysteresis
 * '<S205>' : BaseEngineController_LS/Foreground/Control/Controller/Run/FAN Control/Hysterisis2/Hysteresis
 * '<S206>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Fuel Calculation
 * '<S207>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager
 * '<S208>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt
 * '<S209>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Fuel Calculation/Calculate Fuel Flow
 * '<S210>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Fuel Calculation/Calculate Fuel Flow/Calculate A//F Ratio
 * '<S211>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Fuel Calculation/Calculate Fuel Flow/Calculate A//F Ratio/motohawk_table_1d
 * '<S212>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling
 * '<S213>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Mass Flow to Charge Mass Transform
 * '<S214>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling/CompareTo1
 * '<S215>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling/CompareTo2
 * '<S216>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling/ECT Transient Fueling
 * '<S217>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling/First Order Low Pass (Tunable)
 * '<S218>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling/First Order Low Pass (Tunable)1
 * '<S219>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling/OXY Transient Fueling
 * '<S220>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S221>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling/First Order Low Pass (Tunable)1/First Order Low Pass
 * '<S222>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Mass Flow to Charge Mass Transform/Multiply and Divide, avoiding divde by zero
 * '<S223>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Mass Flow to Charge Mass Transform/NonZero RPM
 * '<S224>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/Adapt FuelFlowComp Map
 * '<S225>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/O2 Control Enable Delay
 * '<S226>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/Saturation (Tunable)
 * '<S227>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/WarmUp Disable
 * '<S228>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/O2 Control Enable Delay/Time Since Enabled (With Input)1
 * '<S229>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/Saturation (Tunable)/Saturation
 * '<S230>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/I-Term Preload
 * '<S231>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/MaxGovState
 * '<S232>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Ramp RPM
 * '<S233>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Trigger Pre-load
 * '<S234>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)
 * '<S235>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/MaxGovState/MaxGOV Stateflow
 * '<S236>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Trigger Pre-load/InGear
 * '<S237>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Trigger Pre-load/InNeutral
 * '<S238>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Trigger Pre-load/InGear/Saturation
 * '<S239>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Trigger Pre-load/InNeutral/Saturation
 * '<S240>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Saturation
 * '<S241>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Universal PID
 * '<S242>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Derivitive3
 * '<S243>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Integrator
 * '<S244>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Model Info
 * '<S245>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Integrator/Saturation
 * '<S246>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/AiflowOffset
 * '<S247>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Base Airflow Table Adapt
 * '<S248>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Base RPM Set Pt
 * '<S249>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Handoff Alpha
 * '<S250>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination
 * '<S251>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/MotoringDetection
 * '<S252>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/OnIdle State
 * '<S253>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Ramp RPM
 * '<S254>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PD (Tunable & Scheduled)
 * '<S255>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)
 * '<S256>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/AiflowOffset/Ramp Air Into Idle State
 * '<S257>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/AiflowOffset/Run
 * '<S258>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Base Airflow Table Adapt/Adapt Base Airflow Table
 * '<S259>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Base Airflow Table Adapt/Idle Control Enable Delay
 * '<S260>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Base Airflow Table Adapt/Saturation (Tunable)
 * '<S261>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Base Airflow Table Adapt/Idle Control Enable Delay/Time Since Enabled (With Input)1
 * '<S262>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Base Airflow Table Adapt/Saturation (Tunable)/Saturation
 * '<S263>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Handoff Alpha/Saturation
 * '<S264>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/Determine if RPM is Falling
 * '<S265>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/IdleStateMachine
 * '<S266>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/OnIdle State
 * '<S267>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/Time Since Enabled (With Input)1
 * '<S268>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/Determine if RPM is Falling/Derivitive
 * '<S269>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/Determine if RPM is Falling/First Order Low Pass (Tunable)
 * '<S270>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/Determine if RPM is Falling/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S271>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/MotoringDetection/Time Since Enabled (With Input)2
 * '<S272>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PD (Tunable & Scheduled)/PID Gain Select
 * '<S273>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PD (Tunable & Scheduled)/Saturation
 * '<S274>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PD (Tunable & Scheduled)/Universal PD
 * '<S275>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PD (Tunable & Scheduled)/Universal PD/Derivitive
 * '<S276>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PD (Tunable & Scheduled)/Universal PD/Model Info
 * '<S277>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/PID Gain Select1
 * '<S278>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/Saturation
 * '<S279>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/Universal PID
 * '<S280>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Derivitive3
 * '<S281>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Integrator
 * '<S282>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Model Info
 * '<S283>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Integrator/Saturation
 * '<S284>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 Control State Determination
 * '<S285>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Calibrations
 * '<S286>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller
 * '<S287>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Calibrations/Error Gain Scheduling
 * '<S288>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Calibrations/O2 Control Switch Point Maps
 * '<S289>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Closed-Loop O2 PID Controller
 * '<S290>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Equivalence Ratio Perturbation
 * '<S291>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Closed-Loop O2 PID Controller/Saturation
 * '<S292>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Closed-Loop O2 PID Controller/Universal PID
 * '<S293>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Closed-Loop O2 PID Controller/Universal PID/Derivitive3
 * '<S294>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Closed-Loop O2 PID Controller/Universal PID/Integrator
 * '<S295>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Closed-Loop O2 PID Controller/Universal PID/Model Info
 * '<S296>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Closed-Loop O2 PID Controller/Universal PID/Integrator/Saturation
 * '<S297>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Equivalence Ratio Perturbation/Hysteresis
 * '<S298>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Equivalence Ratio Perturbation/Time Since Enabled (With Input)1
 * '<S299>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Equivalence Ratio Perturbation/Time Since Enabled (With Input)2
 * '<S300>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Equivalence Ratio Perturbation/Time Since Enabled (With Input)3
 * '<S301>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Spark Manager/Desired Eq Ratio Offset
 * '<S302>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Spark Manager/Ethanol Spark Offset
 * '<S303>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Spark Manager/Spark Advance Rate Limiter
 * '<S304>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Spark Manager/SparkAdvanceLimiter
 * '<S305>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Spark Manager/Temp Comp Offset
 * '<S306>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Spark Manager/Spark Advance Rate Limiter/First Time
 * '<S307>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Spark Manager/Spark Advance Rate Limiter/Saturation
 * '<S308>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Spark Manager/SparkAdvanceLimiter/Saturation
 * '<S309>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/FAN Control
 * '<S310>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/Fuel Pump at Startup
 * '<S311>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/Stall Throttle
 * '<S312>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/FAN Control/Hysterisis
 * '<S313>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/FAN Control/Hysterisis1
 * '<S314>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/FAN Control/Hysterisis2
 * '<S315>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/FAN Control/motohawk_table_2d
 * '<S316>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/FAN Control/motohawk_table_2d1
 * '<S317>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/FAN Control/motohawk_table_2d2
 * '<S318>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/FAN Control/Hysterisis/Hysteresis
 * '<S319>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/FAN Control/Hysterisis1/Hysteresis
 * '<S320>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/FAN Control/Hysterisis2/Hysteresis
 * '<S321>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/Fuel Pump at Startup/Time Since Enabled
 * '<S322>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/Stall Throttle/Ice Break
 * '<S323>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/Stall Throttle/Time Since Enabled (With Input)2
 * '<S324>' : BaseEngineController_LS/Foreground/Control/Diagnostics/AC Fault
 * '<S325>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Boost Fault
 * '<S326>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Engine Overheat Fault Logic
 * '<S327>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Fuel Economy
 * '<S328>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Lean Protect
 * '<S329>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Low Oil Pressure Fault Logic
 * '<S330>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MAP Fault Logic
 * '<S331>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection
 * '<S332>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Wrong Fuel Pressure Fault Logic
 * '<S333>' : BaseEngineController_LS/Foreground/Control/Diagnostics/AC Fault/Run State
 * '<S334>' : BaseEngineController_LS/Foreground/Control/Diagnostics/AC Fault/Time Since Enabled (With Input)1
 * '<S335>' : BaseEngineController_LS/Foreground/Control/Diagnostics/AC Fault/Time Since Enabled (With Input)2
 * '<S336>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Boost Fault/Run State
 * '<S337>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Boost Fault/Time Since Enabled (With Input)1
 * '<S338>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Boost Fault/Time Since Enabled (With Input)2
 * '<S339>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Boost Fault/Time Since Enabled (With Input)3
 * '<S340>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Engine Overheat Fault Logic/Run State
 * '<S341>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Fuel Economy/Calculate Fuel Density
 * '<S342>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Fuel Economy/First Order Low Pass (Tunable)
 * '<S343>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Fuel Economy/Multiply and Divide, avoiding divde by zero1
 * '<S344>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Fuel Economy/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S345>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Lean Protect/Run State
 * '<S346>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Lean Protect/Time Since Enabled (With Input)2
 * '<S347>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Low Oil Pressure Fault Logic/Run State
 * '<S348>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Low Oil Pressure Fault Logic/Time Since Enabled (With Input)2
 * '<S349>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MAP Fault Logic/Run State
 * '<S350>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MAP Fault Logic/Time Since Enabled (With Input)1
 * '<S351>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MAP Fault Logic/Time Since Enabled (With Input)2
 * '<S352>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MAP Fault Logic/Time Since Enabled (With Input)3
 * '<S353>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/BaseRevLimit
 * '<S354>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/TwoStepRevLimit
 * '<S355>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/BaseRevLimit/Hysterisis
 * '<S356>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/BaseRevLimit/Hysterisis1
 * '<S357>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/BaseRevLimit/Hysterisis2
 * '<S358>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/BaseRevLimit/Hysterisis/Hysteresis
 * '<S359>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/BaseRevLimit/Hysterisis1/Hysteresis
 * '<S360>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/BaseRevLimit/Hysterisis2/Hysteresis
 * '<S361>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/TwoStepRevLimit/Hysterisis
 * '<S362>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/TwoStepRevLimit/Hysterisis1
 * '<S363>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/TwoStepRevLimit/Hysterisis2
 * '<S364>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/TwoStepRevLimit/Hysterisis/Hysteresis
 * '<S365>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/TwoStepRevLimit/Hysterisis1/Hysteresis
 * '<S366>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/TwoStepRevLimit/Hysterisis2/Hysteresis
 * '<S367>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Wrong Fuel Pressure Fault Logic/Time Since Enabled (With Input)1
 * '<S368>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Wrong Fuel Pressure Fault Logic/Time Since Enabled (With Input)2
 * '<S369>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs
 * '<S370>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/FuelLevel
 * '<S371>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs
 * '<S372>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes
 * '<S373>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed
 * '<S374>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Virtual Indexes
 * '<S375>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Baro Stall State Delay
 * '<S376>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Capture Signal At Startup
 * '<S377>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Running Baro Learn
 * '<S378>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Speed Density - MAP Referenced - Adaptive
 * '<S379>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/motohawk_override_rel
 * '<S380>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Capture Signal At Startup/Collect Average
 * '<S381>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Running Baro Learn/Compare To Constant
 * '<S382>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Running Baro Learn/Time Since Enabled (With Input)1
 * '<S383>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Speed Density - MAP Referenced - Adaptive/Adapt VolEff Map
 * '<S384>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Speed Density - MAP Referenced - Adaptive/C to K1
 * '<S385>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Speed Density - MAP Referenced - Adaptive/Compare To Constant
 * '<S386>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Speed Density - MAP Referenced - Adaptive/Adapt VolEff Map/motohawk_table_1d
 * '<S387>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/motohawk_override_rel/NewValue
 * '<S388>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/motohawk_override_rel/OldValue
 * '<S389>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/FuelLevel/First Order Low Pass
 * '<S390>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/FuelLevel/First Time
 * '<S391>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/FuelLevel/Rising Edge
 * '<S392>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/FuelLevel/motohawk_table_2d
 * '<S393>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag
 * '<S394>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect1
 * '<S395>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect3
 * '<S396>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect1/DecreasingFilter
 * '<S397>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect1/First Order Low Pass
 * '<S398>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect1/IncreasingFilter
 * '<S399>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect3/DecreasingFilter
 * '<S400>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect3/First Order Low Pass
 * '<S401>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect3/IncreasingFilter
 * '<S402>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/ACPres Index
 * '<S403>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/CAT Index
 * '<S404>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/ECT Index
 * '<S405>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/IAT Indexes
 * '<S406>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/MAP Indexes
 * '<S407>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/OXY Index
 * '<S408>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/RPM Indexes
 * '<S409>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/SysVolt Index
 * '<S410>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/TPS Indexes
 * '<S411>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/VSPD Index
 * '<S412>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/APP  Sensor Arbitration1
 * '<S413>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request
 * '<S414>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Capture ECT At Startup
 * '<S415>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Capture IAT At Startup
 * '<S416>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/CutThrottle APP Limiting
 * '<S417>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Engine Accel
 * '<S418>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/EngineState
 * '<S419>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Fuel Delta Pressure Calculation
 * '<S420>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Gear Estimator
 * '<S421>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/O2 De-lag
 * '<S422>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Stall
 * '<S423>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/TPS  Sensor Arbitration
 * '<S424>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Time Since Key On
 * '<S425>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Time Since Run
 * '<S426>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Time Since Stall
 * '<S427>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/VSPD_Selector
 * '<S428>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request/First Order Low Pass
 * '<S429>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request/PassThrough1
 * '<S430>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request/PassThrough2
 * '<S431>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request/Variable Rate Limiter
 * '<S432>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request/Variable Rate Limiter/Saturation
 * '<S433>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Capture ECT At Startup/Collect Average
 * '<S434>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Capture IAT At Startup/Collect Average
 * '<S435>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/CutThrottle APP Limiting/Bound APP if overheating
 * '<S436>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Engine Accel/Derivitive3
 * '<S437>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Engine Accel/First Order Low Pass (Tunable)
 * '<S438>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Engine Accel/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S439>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/EngineState/Engine State Machine
 * '<S440>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/EngineState/TDC_Counter
 * '<S441>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/EngineState/TDC_Counter/Crank State
 * '<S442>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Time Since Key On/Time Since Enabled (With Input)2
 * '<S443>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Time Since Run/RunState
 * '<S444>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Time Since Run/Time Since Enabled (With Input)2
 * '<S445>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Time Since Stall/Stall State
 * '<S446>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Time Since Stall/Time Since Enabled (With Input)1
 * '<S447>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Virtual Indexes/ECT_KeyUp
 * '<S448>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Virtual Indexes/IAT_KeyUp
 * '<S449>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Virtual Indexes/MAFPortIndex
 * '<S450>' : BaseEngineController_LS/Foreground/Control/motohawk_function_collector/motohawk_function_collector_in
 * '<S451>' : BaseEngineController_LS/Foreground/Control/motohawk_function_collector/motohawk_function_collector_in/Triggered Subsystem
 * '<S452>' : BaseEngineController_LS/Foreground/Inputs/CAN
 * '<S453>' : BaseEngineController_LS/Foreground/Inputs/Digital
 * '<S454>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed
 * '<S455>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors
 * '<S456>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors
 * '<S457>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors
 * '<S458>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS
 * '<S459>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda
 * '<S460>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs
 * '<S461>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs1
 * '<S462>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs10
 * '<S463>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs11
 * '<S464>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs12
 * '<S465>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs2
 * '<S466>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs3
 * '<S467>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs4
 * '<S468>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs5
 * '<S469>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs6
 * '<S470>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs7
 * '<S471>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs8
 * '<S472>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs9
 * '<S473>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs/NewValue
 * '<S474>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs/OldValue
 * '<S475>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs1/NewValue
 * '<S476>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs1/OldValue
 * '<S477>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs10/NewValue
 * '<S478>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs10/OldValue
 * '<S479>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs11/NewValue
 * '<S480>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs11/OldValue
 * '<S481>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs12/NewValue
 * '<S482>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs12/OldValue
 * '<S483>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs2/NewValue
 * '<S484>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs2/OldValue
 * '<S485>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs3/NewValue
 * '<S486>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs3/OldValue
 * '<S487>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs4/NewValue
 * '<S488>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs4/OldValue
 * '<S489>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs5/NewValue
 * '<S490>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs5/OldValue
 * '<S491>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs6/NewValue
 * '<S492>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs6/OldValue
 * '<S493>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs7/NewValue
 * '<S494>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs7/OldValue
 * '<S495>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs8/NewValue
 * '<S496>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs8/OldValue
 * '<S497>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs9/NewValue
 * '<S498>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs9/OldValue
 * '<S499>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization
 * '<S500>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization1
 * '<S501>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs
 * '<S502>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs1
 * '<S503>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs10
 * '<S504>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs11
 * '<S505>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs12
 * '<S506>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs13
 * '<S507>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs14
 * '<S508>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs15
 * '<S509>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs16
 * '<S510>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs17
 * '<S511>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs2
 * '<S512>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs3
 * '<S513>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs4
 * '<S514>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs5
 * '<S515>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs6
 * '<S516>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs7
 * '<S517>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs8
 * '<S518>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs9
 * '<S519>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization/First Order Low Pass
 * '<S520>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization/If Action Subsystem
 * '<S521>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization/If Action Subsystem1
 * '<S522>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization/If Action Subsystem2
 * '<S523>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization/Override
 * '<S524>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization/First Order Low Pass/First Order Low Pass
 * '<S525>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization/Override/NewValue
 * '<S526>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization/Override/OldValue
 * '<S527>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization1/First Order Low Pass
 * '<S528>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization1/If Action Subsystem
 * '<S529>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization1/If Action Subsystem1
 * '<S530>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization1/If Action Subsystem2
 * '<S531>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization1/Override
 * '<S532>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization1/First Order Low Pass/First Order Low Pass
 * '<S533>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization1/Override/NewValue
 * '<S534>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization1/Override/OldValue
 * '<S535>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs/NewValue
 * '<S536>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs/OldValue
 * '<S537>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs1/NewValue
 * '<S538>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs1/OldValue
 * '<S539>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs10/NewValue
 * '<S540>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs10/OldValue
 * '<S541>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs11/NewValue
 * '<S542>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs11/OldValue
 * '<S543>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs12/NewValue
 * '<S544>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs12/OldValue
 * '<S545>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs13/NewValue
 * '<S546>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs13/OldValue
 * '<S547>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs14/NewValue
 * '<S548>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs14/OldValue
 * '<S549>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs15/NewValue
 * '<S550>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs15/OldValue
 * '<S551>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs16/NewValue
 * '<S552>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs16/OldValue
 * '<S553>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs17/NewValue
 * '<S554>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs17/OldValue
 * '<S555>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs2/NewValue
 * '<S556>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs2/OldValue
 * '<S557>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs3/NewValue
 * '<S558>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs3/OldValue
 * '<S559>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs4/NewValue
 * '<S560>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs4/OldValue
 * '<S561>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs5/NewValue
 * '<S562>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs5/OldValue
 * '<S563>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs6/NewValue
 * '<S564>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs6/OldValue
 * '<S565>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs7/NewValue
 * '<S566>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs7/OldValue
 * '<S567>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs8/NewValue
 * '<S568>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs8/OldValue
 * '<S569>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs9/NewValue
 * '<S570>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs9/OldValue
 * '<S571>' : BaseEngineController_LS/Foreground/Inputs/Digital/ACSw
 * '<S572>' : BaseEngineController_LS/Foreground/Inputs/Digital/ClutchSw
 * '<S573>' : BaseEngineController_LS/Foreground/Inputs/Digital/ESTOP
 * '<S574>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor
 * '<S575>' : BaseEngineController_LS/Foreground/Inputs/Digital/Scramble
 * '<S576>' : BaseEngineController_LS/Foreground/Inputs/Digital/Two Step
 * '<S577>' : BaseEngineController_LS/Foreground/Inputs/Digital/VSPD
 * '<S578>' : BaseEngineController_LS/Foreground/Inputs/Digital/VSPD_Filt
 * '<S579>' : BaseEngineController_LS/Foreground/Inputs/Digital/ACSw /Override in Engineering Units
 * '<S580>' : BaseEngineController_LS/Foreground/Inputs/Digital/ACSw /Override in Engineering Units/NewValue
 * '<S581>' : BaseEngineController_LS/Foreground/Inputs/Digital/ACSw /Override in Engineering Units/OldValue
 * '<S582>' : BaseEngineController_LS/Foreground/Inputs/Digital/ClutchSw/Override in Engineering Units
 * '<S583>' : BaseEngineController_LS/Foreground/Inputs/Digital/ClutchSw/Override in Engineering Units/NewValue
 * '<S584>' : BaseEngineController_LS/Foreground/Inputs/Digital/ClutchSw/Override in Engineering Units/OldValue
 * '<S585>' : BaseEngineController_LS/Foreground/Inputs/Digital/ESTOP/Override in Engineering Units
 * '<S586>' : BaseEngineController_LS/Foreground/Inputs/Digital/ESTOP/Override in Engineering Units/NewValue
 * '<S587>' : BaseEngineController_LS/Foreground/Inputs/Digital/ESTOP/Override in Engineering Units/OldValue
 * '<S588>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor/First Order Low Pass
 * '<S589>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor/If Action Subsystem
 * '<S590>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor/If Action Subsystem1
 * '<S591>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor/If Action Subsystem2
 * '<S592>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor/Override
 * '<S593>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor/motohawk_table_1d1
 * '<S594>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor/First Order Low Pass/First Order Low Pass
 * '<S595>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor/Override/NewValue
 * '<S596>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor/Override/OldValue
 * '<S597>' : BaseEngineController_LS/Foreground/Inputs/Digital/Scramble /Button Delay 1
 * '<S598>' : BaseEngineController_LS/Foreground/Inputs/Digital/Scramble /Override in Engineering Units
 * '<S599>' : BaseEngineController_LS/Foreground/Inputs/Digital/Scramble /Button Delay 1/Time Since Enabled (With Input)4
 * '<S600>' : BaseEngineController_LS/Foreground/Inputs/Digital/Scramble /Override in Engineering Units/NewValue
 * '<S601>' : BaseEngineController_LS/Foreground/Inputs/Digital/Scramble /Override in Engineering Units/OldValue
 * '<S602>' : BaseEngineController_LS/Foreground/Inputs/Digital/Two Step/Button Delay 1
 * '<S603>' : BaseEngineController_LS/Foreground/Inputs/Digital/Two Step/Override in Engineering Units
 * '<S604>' : BaseEngineController_LS/Foreground/Inputs/Digital/Two Step/Button Delay 1/Time Since Enabled (With Input)4
 * '<S605>' : BaseEngineController_LS/Foreground/Inputs/Digital/Two Step/Override in Engineering Units/NewValue
 * '<S606>' : BaseEngineController_LS/Foreground/Inputs/Digital/Two Step/Override in Engineering Units/OldValue
 * '<S607>' : BaseEngineController_LS/Foreground/Inputs/Digital/VSPD/First Order Low Pass
 * '<S608>' : BaseEngineController_LS/Foreground/Inputs/Digital/VSPD/If Action Subsystem
 * '<S609>' : BaseEngineController_LS/Foreground/Inputs/Digital/VSPD/If Action Subsystem1
 * '<S610>' : BaseEngineController_LS/Foreground/Inputs/Digital/VSPD/If Action Subsystem2
 * '<S611>' : BaseEngineController_LS/Foreground/Inputs/Digital/VSPD/Override
 * '<S612>' : BaseEngineController_LS/Foreground/Inputs/Digital/VSPD/motohawk_table_1d1
 * '<S613>' : BaseEngineController_LS/Foreground/Inputs/Digital/VSPD/First Order Low Pass/First Order Low Pass
 * '<S614>' : BaseEngineController_LS/Foreground/Inputs/Digital/VSPD/Override/NewValue
 * '<S615>' : BaseEngineController_LS/Foreground/Inputs/Digital/VSPD/Override/OldValue
 * '<S616>' : BaseEngineController_LS/Foreground/Inputs/Digital/VSPD_Filt/Derivitive
 * '<S617>' : BaseEngineController_LS/Foreground/Inputs/Digital/VSPD_Filt/Falling Edge
 * '<S618>' : BaseEngineController_LS/Foreground/Inputs/Digital/VSPD_Filt/S-R Flip-Flop
 * '<S619>' : BaseEngineController_LS/Foreground/Inputs/Digital/VSPD_Filt/Time Since Enabled (With Input)1
 * '<S620>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed/Encoder Diagnostics
 * '<S621>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed/First Order Low Pass (Tunable)1
 * '<S622>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/CamEdges
 * '<S623>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/CamSync
 * '<S624>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/CounterThresh
 * '<S625>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/CrankEdges
 * '<S626>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/CrankSync
 * '<S627>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/motohawk_model_probe_eval_f
 * '<S628>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed/First Order Low Pass (Tunable)1/First Order Low Pass
 * '<S629>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/ACPres
 * '<S630>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor
 * '<S631>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelPres
 * '<S632>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP
 * '<S633>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAPTime
 * '<S634>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP_Crank_Synchronous
 * '<S635>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/OilPres
 * '<S636>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SensVolts
 * '<S637>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SysVolts
 * '<S638>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/ACPres /First Order Low Pass
 * '<S639>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/ACPres /If Action Subsystem
 * '<S640>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/ACPres /If Action Subsystem1
 * '<S641>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/ACPres /If Action Subsystem2
 * '<S642>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/ACPres /Override
 * '<S643>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/ACPres /First Order Low Pass/First Order Low Pass
 * '<S644>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/ACPres /Override/NewValue
 * '<S645>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/ACPres /Override/OldValue
 * '<S646>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options
 * '<S647>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/If Action Subsystem
 * '<S648>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/If Action Subsystem1
 * '<S649>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/If Action Subsystem2
 * '<S650>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Override
 * '<S651>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options/First Order Low Pass
 * '<S652>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options/Moving Average Filter
 * '<S653>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options/Rate Limiter
 * '<S654>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options/First Order Low Pass/First Order Low Pass
 * '<S655>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options/Rate Limiter/Variable Rate Limiter
 * '<S656>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options/Rate Limiter/Variable Rate Limiter/Saturation
 * '<S657>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Override/NewValue
 * '<S658>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Override/OldValue
 * '<S659>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelPres/First Order Low Pass
 * '<S660>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelPres/If Action Subsystem
 * '<S661>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelPres/If Action Subsystem1
 * '<S662>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelPres/If Action Subsystem2
 * '<S663>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelPres/Override
 * '<S664>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelPres/First Order Low Pass/First Order Low Pass
 * '<S665>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelPres/Override/NewValue
 * '<S666>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelPres/Override/OldValue
 * '<S667>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP/First Order Low Pass
 * '<S668>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP/If Action Subsystem
 * '<S669>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP/If Action Subsystem1
 * '<S670>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP/If Action Subsystem2
 * '<S671>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP/Override
 * '<S672>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP/First Order Low Pass/First Order Low Pass
 * '<S673>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP/Override/NewValue
 * '<S674>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP/Override/OldValue
 * '<S675>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAPTime/First Order Low Pass
 * '<S676>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAPTime/If Action Subsystem
 * '<S677>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAPTime/If Action Subsystem1
 * '<S678>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAPTime/If Action Subsystem2
 * '<S679>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAPTime/Override
 * '<S680>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAPTime/First Order Low Pass/First Order Low Pass
 * '<S681>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAPTime/Override/NewValue
 * '<S682>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAPTime/Override/OldValue
 * '<S683>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP_Crank_Synchronous/MID_TDC
 * '<S684>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP_Crank_Synchronous/Once at Startup
 * '<S685>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/OilPres/First Order Low Pass
 * '<S686>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/OilPres/If Action Subsystem
 * '<S687>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/OilPres/If Action Subsystem1
 * '<S688>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/OilPres/If Action Subsystem2
 * '<S689>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/OilPres/Override
 * '<S690>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/OilPres/First Order Low Pass/First Order Low Pass
 * '<S691>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/OilPres/Override/NewValue
 * '<S692>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/OilPres/Override/OldValue
 * '<S693>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SensVolts/First Order Low Pass
 * '<S694>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SensVolts/If Action Subsystem
 * '<S695>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SensVolts/If Action Subsystem1
 * '<S696>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SensVolts/If Action Subsystem2
 * '<S697>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SensVolts/Override
 * '<S698>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SensVolts/First Order Low Pass/First Order Low Pass
 * '<S699>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SensVolts/Override/NewValue
 * '<S700>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SensVolts/Override/OldValue
 * '<S701>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SysVolts/First Order Low Pass
 * '<S702>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SysVolts/If Action Subsystem
 * '<S703>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SysVolts/If Action Subsystem1
 * '<S704>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SysVolts/If Action Subsystem2
 * '<S705>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SysVolts/Override
 * '<S706>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SysVolts/First Order Low Pass/First Order Low Pass
 * '<S707>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SysVolts/Override/NewValue
 * '<S708>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SysVolts/Override/OldValue
 * '<S709>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Fuel Level
 * '<S710>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors
 * '<S711>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Fuel Level/Fuel_Lvl
 * '<S712>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Fuel Level/Fuel_Lvl  /First Order Low Pass
 * '<S713>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Fuel Level/Fuel_Lvl  /If Action Subsystem
 * '<S714>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Fuel Level/Fuel_Lvl  /If Action Subsystem1
 * '<S715>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Fuel Level/Fuel_Lvl  /If Action Subsystem2
 * '<S716>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Fuel Level/Fuel_Lvl  /Override
 * '<S717>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Fuel Level/Fuel_Lvl  /motohawk_table_1d1
 * '<S718>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Fuel Level/Fuel_Lvl  /First Order Low Pass/First Order Low Pass
 * '<S719>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Fuel Level/Fuel_Lvl  /Override/NewValue
 * '<S720>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Fuel Level/Fuel_Lvl  /Override/OldValue
 * '<S721>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/CAT1
 * '<S722>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT
 * '<S723>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP
 * '<S724>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT
 * '<S725>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/CAT1/First Order Low Pass
 * '<S726>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/CAT1/If Action Subsystem
 * '<S727>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/CAT1/If Action Subsystem1
 * '<S728>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/CAT1/If Action Subsystem2
 * '<S729>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/CAT1/Override
 * '<S730>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/CAT1/motohawk_table_1d1
 * '<S731>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/CAT1/First Order Low Pass/First Order Low Pass
 * '<S732>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/CAT1/Override/NewValue
 * '<S733>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/CAT1/Override/OldValue
 * '<S734>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /First Order Low Pass
 * '<S735>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /If Action Subsystem
 * '<S736>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /If Action Subsystem1
 * '<S737>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /If Action Subsystem2
 * '<S738>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /Override
 * '<S739>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /motohawk_table_1d1
 * '<S740>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /First Order Low Pass/First Order Low Pass
 * '<S741>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /Override/NewValue
 * '<S742>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /Override/OldValue
 * '<S743>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /First Order Low Pass
 * '<S744>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /If Action Subsystem
 * '<S745>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /If Action Subsystem1
 * '<S746>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /If Action Subsystem2
 * '<S747>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /Override
 * '<S748>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /motohawk_table_1d1
 * '<S749>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /First Order Low Pass/First Order Low Pass
 * '<S750>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /Override/NewValue
 * '<S751>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /Override/OldValue
 * '<S752>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /First Order Low Pass
 * '<S753>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /If Action Subsystem
 * '<S754>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /If Action Subsystem1
 * '<S755>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /If Action Subsystem2
 * '<S756>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /Override
 * '<S757>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /motohawk_table_1d1
 * '<S758>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /First Order Low Pass/First Order Low Pass
 * '<S759>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /Override/NewValue
 * '<S760>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /Override/OldValue
 * '<S761>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1
 * '<S762>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1ForcedAdapt
 * '<S763>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2
 * '<S764>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2ForcedAdapt
 * '<S765>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt
 * '<S766>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1
 * '<S767>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1
 * '<S768>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2
 * '<S769>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1/First Order Low Pass
 * '<S770>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1/If Action Subsystem
 * '<S771>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1/If Action Subsystem1
 * '<S772>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1/If Action Subsystem2
 * '<S773>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1/Override
 * '<S774>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1/Saturation
 * '<S775>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1/motohawk_table_1d1
 * '<S776>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1/First Order Low Pass/First Order Low Pass
 * '<S777>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1/Override/NewValue
 * '<S778>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1/Override/OldValue
 * '<S779>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1ForcedAdapt/Function-Call Subsystem
 * '<S780>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1ForcedAdapt/Function-Call Subsystem/First Time
 * '<S781>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2/First Order Low Pass
 * '<S782>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2/If Action Subsystem
 * '<S783>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2/If Action Subsystem1
 * '<S784>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2/If Action Subsystem2
 * '<S785>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2/Override
 * '<S786>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2/Saturation
 * '<S787>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2/motohawk_table_1d1
 * '<S788>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2/First Order Low Pass/First Order Low Pass
 * '<S789>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2/Override/NewValue
 * '<S790>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2/Override/OldValue
 * '<S791>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2ForcedAdapt/Function-Call Subsystem
 * '<S792>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2ForcedAdapt/Function-Call Subsystem/First Time
 * '<S793>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/ADAPT SCALING
 * '<S794>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/FAULTS
 * '<S795>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/First Order Low Pass
 * '<S796>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/SENSOR FAULT MANAGER
 * '<S797>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/Saturation
 * '<S798>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/ADAPT SCALING/ADAPT HI
 * '<S799>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/ADAPT SCALING/ADAPT LO
 * '<S800>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/ADAPT SCALING/MinMaxFilter
 * '<S801>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/ADAPT SCALING/ADAPT HI/Store Current Position
 * '<S802>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/ADAPT SCALING/ADAPT LO/Store Current Position
 * '<S803>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/First Order Low Pass/First Order Low Pass
 * '<S804>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/SENSOR FAULT MANAGER/If Action Subsystem
 * '<S805>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/SENSOR FAULT MANAGER/If Action Subsystem1
 * '<S806>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/SENSOR FAULT MANAGER/If Action Subsystem2
 * '<S807>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/SENSOR FAULT MANAGER/Override
 * '<S808>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/SENSOR FAULT MANAGER/Override/NewValue
 * '<S809>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/SENSOR FAULT MANAGER/Override/OldValue
 * '<S810>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/ADAPT SCALING
 * '<S811>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/FAULTS
 * '<S812>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/First Order Low Pass
 * '<S813>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/SENSOR FAULT MANAGER
 * '<S814>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/Saturation
 * '<S815>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/ADAPT SCALING/ADAPT HI
 * '<S816>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/ADAPT SCALING/ADAPT LO
 * '<S817>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/ADAPT SCALING/MinMaxFilter
 * '<S818>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/ADAPT SCALING/ADAPT HI/Store Current Position
 * '<S819>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/ADAPT SCALING/ADAPT LO/Store Current Position
 * '<S820>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/First Order Low Pass/First Order Low Pass
 * '<S821>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/SENSOR FAULT MANAGER/If Action Subsystem
 * '<S822>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/SENSOR FAULT MANAGER/If Action Subsystem1
 * '<S823>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/SENSOR FAULT MANAGER/If Action Subsystem2
 * '<S824>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/SENSOR FAULT MANAGER/Override
 * '<S825>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/SENSOR FAULT MANAGER/Override/NewValue
 * '<S826>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/SENSOR FAULT MANAGER/Override/OldValue
 * '<S827>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/ADAPT SCALING
 * '<S828>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/FAULTS
 * '<S829>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/First Order Low Pass
 * '<S830>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER
 * '<S831>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/Saturation
 * '<S832>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/ADAPT SCALING/ADAPT HI
 * '<S833>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/ADAPT SCALING/ADAPT LO
 * '<S834>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/ADAPT SCALING/MinMaxFilter
 * '<S835>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/ADAPT SCALING/ADAPT HI/Store Current Position
 * '<S836>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/ADAPT SCALING/ADAPT LO/Store Current Position
 * '<S837>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/First Order Low Pass/First Order Low Pass
 * '<S838>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER/If Action Subsystem
 * '<S839>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER/If Action Subsystem1
 * '<S840>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER/If Action Subsystem2
 * '<S841>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER/Override
 * '<S842>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER/Override/NewValue
 * '<S843>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER/Override/OldValue
 * '<S844>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/ADAPT SCALING
 * '<S845>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/FAULTS
 * '<S846>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/First Order Low Pass
 * '<S847>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER
 * '<S848>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/Saturation
 * '<S849>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/ADAPT SCALING/ADAPT HI
 * '<S850>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/ADAPT SCALING/ADAPT LO
 * '<S851>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/ADAPT SCALING/MinMaxFilter
 * '<S852>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/ADAPT SCALING/ADAPT HI/Store Current Position
 * '<S853>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/ADAPT SCALING/ADAPT LO/Store Current Position
 * '<S854>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/First Order Low Pass/First Order Low Pass
 * '<S855>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER/If Action Subsystem
 * '<S856>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER/If Action Subsystem1
 * '<S857>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER/If Action Subsystem2
 * '<S858>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER/Override
 * '<S859>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER/Override/NewValue
 * '<S860>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER/Override/OldValue
 * '<S861>' : BaseEngineController_LS/Foreground/Outputs/AC Control
 * '<S862>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash
 * '<S863>' : BaseEngineController_LS/Foreground/Outputs/Coil Control
 * '<S864>' : BaseEngineController_LS/Foreground/Outputs/ETC_CutPower
 * '<S865>' : BaseEngineController_LS/Foreground/Outputs/FAN Control
 * '<S866>' : BaseEngineController_LS/Foreground/Outputs/FuelPump
 * '<S867>' : BaseEngineController_LS/Foreground/Outputs/HBridge
 * '<S868>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control
 * '<S869>' : BaseEngineController_LS/Foreground/Outputs/Injector Control
 * '<S870>' : BaseEngineController_LS/Foreground/Outputs/WASTEGATE-Control
 * '<S871>' : BaseEngineController_LS/Foreground/Outputs/AC Control/Discrete Actuator - AC
 * '<S872>' : BaseEngineController_LS/Foreground/Outputs/AC Control/Discrete Actuator - AC/Override in Engineering Units
 * '<S873>' : BaseEngineController_LS/Foreground/Outputs/AC Control/Discrete Actuator - AC/Override in Engineering Units/NewValue
 * '<S874>' : BaseEngineController_LS/Foreground/Outputs/AC Control/Discrete Actuator - AC/Override in Engineering Units/OldValue
 * '<S875>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Custom 1
 * '<S876>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 1
 * '<S877>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 2
 * '<S878>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 3
 * '<S879>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 4
 * '<S880>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 5
 * '<S881>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 6
 * '<S882>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 7
 * '<S883>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 8
 * '<S884>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message Boost
 * '<S885>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message DBW
 * '<S886>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 1/Inc_DecFilterSelect1
 * '<S887>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 1/Inc_DecFilterSelect2
 * '<S888>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 1/Inc_DecFilterSelect3
 * '<S889>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 1/RPM_Filt
 * '<S890>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 1/Inc_DecFilterSelect1/DecreasingFilter
 * '<S891>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 1/Inc_DecFilterSelect1/First Order Low Pass
 * '<S892>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 1/Inc_DecFilterSelect1/IncreasingFilter
 * '<S893>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 1/Inc_DecFilterSelect2/DecreasingFilter
 * '<S894>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 1/Inc_DecFilterSelect2/First Order Low Pass
 * '<S895>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 1/Inc_DecFilterSelect2/IncreasingFilter
 * '<S896>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 1/Inc_DecFilterSelect3/DecreasingFilter
 * '<S897>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 1/Inc_DecFilterSelect3/First Order Low Pass
 * '<S898>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 1/Inc_DecFilterSelect3/IncreasingFilter
 * '<S899>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 1/RPM_Filt/First Order Low Pass (Tunable)
 * '<S900>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 1/RPM_Filt/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S901>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/Inc_DecFilterSelect1
 * '<S902>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/Inc_DecFilterSelect2
 * '<S903>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/Inc_DecFilterSelect3
 * '<S904>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/PHI_Filt
 * '<S905>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/PHI_Filt1
 * '<S906>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/Inc_DecFilterSelect1/DecreasingFilter
 * '<S907>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/Inc_DecFilterSelect1/First Order Low Pass
 * '<S908>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/Inc_DecFilterSelect1/IncreasingFilter
 * '<S909>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/Inc_DecFilterSelect2/DecreasingFilter
 * '<S910>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/Inc_DecFilterSelect2/First Order Low Pass
 * '<S911>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/Inc_DecFilterSelect2/IncreasingFilter
 * '<S912>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/Inc_DecFilterSelect3/DecreasingFilter
 * '<S913>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/Inc_DecFilterSelect3/First Order Low Pass
 * '<S914>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/Inc_DecFilterSelect3/IncreasingFilter
 * '<S915>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/PHI_Filt/DecreasingFilter
 * '<S916>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/PHI_Filt/First Order Low Pass
 * '<S917>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/PHI_Filt/IncreasingFilter
 * '<S918>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/PHI_Filt1/DecreasingFilter
 * '<S919>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/PHI_Filt1/First Order Low Pass
 * '<S920>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/PHI_Filt1/IncreasingFilter
 * '<S921>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 3/
 * '<S922>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 3/
 * '<S923>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 3/ 1
 * '<S924>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 3/Inc_DecFilterSelect1
 * '<S925>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 3/Inc_DecFilterSelect2
 * '<S926>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 3/Inc_DecFilterSelect3
 * '<S927>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 3/Inc_DecFilterSelect1/DecreasingFilter
 * '<S928>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 3/Inc_DecFilterSelect1/First Order Low Pass
 * '<S929>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 3/Inc_DecFilterSelect1/IncreasingFilter
 * '<S930>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 3/Inc_DecFilterSelect2/DecreasingFilter
 * '<S931>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 3/Inc_DecFilterSelect2/First Order Low Pass
 * '<S932>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 3/Inc_DecFilterSelect2/IncreasingFilter
 * '<S933>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 3/Inc_DecFilterSelect3/DecreasingFilter
 * '<S934>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 3/Inc_DecFilterSelect3/First Order Low Pass
 * '<S935>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 3/Inc_DecFilterSelect3/IncreasingFilter
 * '<S936>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 6/Inc_DecFilterSelect2
 * '<S937>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 6/Inc_DecFilterSelect2/DecreasingFilter
 * '<S938>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 6/Inc_DecFilterSelect2/First Order Low Pass
 * '<S939>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 6/Inc_DecFilterSelect2/IncreasingFilter
 * '<S940>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message DBW/Inc_DecFilterSelect1
 * '<S941>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message DBW/Inc_DecFilterSelect2
 * '<S942>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message DBW/Inc_DecFilterSelect1/DecreasingFilter
 * '<S943>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message DBW/Inc_DecFilterSelect1/First Order Low Pass
 * '<S944>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message DBW/Inc_DecFilterSelect1/IncreasingFilter
 * '<S945>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message DBW/Inc_DecFilterSelect2/DecreasingFilter
 * '<S946>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message DBW/Inc_DecFilterSelect2/First Order Low Pass
 * '<S947>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message DBW/Inc_DecFilterSelect2/IncreasingFilter
 * '<S948>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/Coil Enable Manager
 * '<S949>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management
 * '<S950>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/motohawk_override_rel
 * '<S951>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/motohawk_override_rel1
 * '<S952>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/Coil Enable Manager/CompareTo
 * '<S953>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/Coil Enable Manager/EST Enable TDC Counter
 * '<S954>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/Coil Enable Manager/EST Enable TDC Counter/EST Enable TDC Counter Stateflow
 * '<S955>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/Coil Enable Manager/EST Enable TDC Counter/TDC_Counter
 * '<S956>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo
 * '<S957>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo1
 * '<S958>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo10
 * '<S959>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo11
 * '<S960>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo12
 * '<S961>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo13
 * '<S962>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo14
 * '<S963>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo15
 * '<S964>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo2
 * '<S965>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo3
 * '<S966>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo4
 * '<S967>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo5
 * '<S968>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo6
 * '<S969>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo7
 * '<S970>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo8
 * '<S971>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo9
 * '<S972>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/motohawk_override_rel/NewValue
 * '<S973>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/motohawk_override_rel/OldValue
 * '<S974>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/motohawk_override_rel1/NewValue
 * '<S975>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/motohawk_override_rel1/OldValue
 * '<S976>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/Discrete Actuator - FAN1
 * '<S977>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/Discrete Actuator - FAN2
 * '<S978>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/IAC-P-CONTROL
 * '<S979>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/IAC-P-CONTROL1
 * '<S980>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/Discrete Actuator - FAN1/Override in Engineering Units
 * '<S981>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/Discrete Actuator - FAN1/Override in Engineering Units/NewValue
 * '<S982>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/Discrete Actuator - FAN1/Override in Engineering Units/OldValue
 * '<S983>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/Discrete Actuator - FAN2/Override in Engineering Units
 * '<S984>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/Discrete Actuator - FAN2/Override in Engineering Units/NewValue
 * '<S985>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/Discrete Actuator - FAN2/Override in Engineering Units/OldValue
 * '<S986>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/IAC-P-CONTROL/Saturation
 * '<S987>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/IAC-P-CONTROL/motohawk_override_abs2
 * '<S988>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/IAC-P-CONTROL/motohawk_override_abs2/NewValue
 * '<S989>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/IAC-P-CONTROL/motohawk_override_abs2/OldValue
 * '<S990>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/IAC-P-CONTROL1/Saturation
 * '<S991>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/IAC-P-CONTROL1/motohawk_override_abs2
 * '<S992>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/IAC-P-CONTROL1/motohawk_override_abs2/NewValue
 * '<S993>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/IAC-P-CONTROL1/motohawk_override_abs2/OldValue
 * '<S994>' : BaseEngineController_LS/Foreground/Outputs/FuelPump/Discrete Actuator - FUELP
 * '<S995>' : BaseEngineController_LS/Foreground/Outputs/FuelPump/Discrete Actuator - FUELP/Override in Engineering Units
 * '<S996>' : BaseEngineController_LS/Foreground/Outputs/FuelPump/Discrete Actuator - FUELP/Override in Engineering Units/NewValue
 * '<S997>' : BaseEngineController_LS/Foreground/Outputs/FuelPump/Discrete Actuator - FUELP/Override in Engineering Units/OldValue
 * '<S998>' : BaseEngineController_LS/Foreground/Outputs/HBridge/Time Since Enabled (With Input)1
 * '<S999>' : BaseEngineController_LS/Foreground/Outputs/HBridge/motohawk_override_abs2
 * '<S1000>' : BaseEngineController_LS/Foreground/Outputs/HBridge/motohawk_override_abs2/NewValue
 * '<S1001>' : BaseEngineController_LS/Foreground/Outputs/HBridge/motohawk_override_abs2/OldValue
 * '<S1002>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control/IAC-P-CONTROL
 * '<S1003>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control/IAC-S-CONTROL
 * '<S1004>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control/IAC-P-CONTROL/Saturation
 * '<S1005>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control/IAC-P-CONTROL/motohawk_override_abs2
 * '<S1006>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control/IAC-P-CONTROL/motohawk_override_abs2/NewValue
 * '<S1007>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control/IAC-P-CONTROL/motohawk_override_abs2/OldValue
 * '<S1008>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control/IAC-S-CONTROL/Saturation
 * '<S1009>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control/IAC-S-CONTROL/motohawk_override_abs2
 * '<S1010>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control/IAC-S-CONTROL/motohawk_override_abs2/NewValue
 * '<S1011>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control/IAC-S-CONTROL/motohawk_override_abs2/OldValue
 * '<S1012>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/Injector Diagnostics
 * '<S1013>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/Injector Enable Manager
 * '<S1014>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs1
 * '<S1015>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs2
 * '<S1016>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs3
 * '<S1017>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs4
 * '<S1018>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs5
 * '<S1019>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs6
 * '<S1020>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/Injector Enable Manager/Stall
 * '<S1021>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/Injector Enable Manager/Time Since Enabled (With Input)1
 * '<S1022>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs1/NewValue
 * '<S1023>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs1/OldValue
 * '<S1024>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs2/NewValue
 * '<S1025>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs2/OldValue
 * '<S1026>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs3/NewValue
 * '<S1027>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs3/OldValue
 * '<S1028>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs4/NewValue
 * '<S1029>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs4/OldValue
 * '<S1030>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs5/NewValue
 * '<S1031>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs5/OldValue
 * '<S1032>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs6/NewValue
 * '<S1033>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs6/OldValue
 * '<S1034>' : BaseEngineController_LS/Foreground/Outputs/WASTEGATE-Control/PWM Characterization
 * '<S1035>' : BaseEngineController_LS/Foreground/Outputs/WASTEGATE-Control/PWM Characterization/Saturation
 * '<S1036>' : BaseEngineController_LS/Foreground/Outputs/WASTEGATE-Control/PWM Characterization/motohawk_override_abs2
 * '<S1037>' : BaseEngineController_LS/Foreground/Outputs/WASTEGATE-Control/PWM Characterization/motohawk_override_abs2/NewValue
 * '<S1038>' : BaseEngineController_LS/Foreground/Outputs/WASTEGATE-Control/PWM Characterization/motohawk_override_abs2/OldValue
 * '<S1039>' : BaseEngineController_LS/Main Power Relay/Main Power Relay
 * '<S1040>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Display Variable Event Boolean
 * '<S1041>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Display Variable Event Function-Call
 * '<S1042>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Display Variable Event Function-Call1
 * '<S1043>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ECUP Latch
 * '<S1044>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Forced Shutdown Process
 * '<S1045>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/On Off Delay
 * '<S1046>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes
 * '<S1047>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Time Since Enabled (With Input)1
 * '<S1048>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/motohawk_restore_nvmem
 * '<S1049>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/motohawk_store_nvmem
 * '<S1050>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Display Variable Event Function-Call/Clear
 * '<S1051>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Display Variable Event Function-Call1/Clear
 * '<S1052>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Forced Shutdown Process/Post Shutdown two ticks before MPRD off
 * '<S1053>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Forced Shutdown Process/Processor Reboot
 * '<S1054>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Forced Shutdown Process/Save NV Vars one tick before MPRD off
 * '<S1055>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Forced Shutdown Process/Shutdown power on ECU565//563
 * '<S1056>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Forced Shutdown Process/Time Since Enabled (With Input)1
 * '<S1057>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Forced Shutdown Process/Post Shutdown two ticks before MPRD off/Post Shutdown two ticks before MPRD off
 * '<S1058>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Forced Shutdown Process/Save NV Vars one tick before MPRD off/Save NV Vars one tick before MPRD off
 * '<S1059>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Forced Shutdown Process/Shutdown power on ECU565//563/Shutdown power on ECU565-128
 * '<S1060>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/On Off Delay/S-R Flip-Flop
 * '<S1061>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/Post Shutdown two ticks before MPRD off
 * '<S1062>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/Processor Reboot
 * '<S1063>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/Save NV Vars one tick before MPRD off
 * '<S1064>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/Shutdown power on ECU565//563
 * '<S1065>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/motohawk_override_abs
 * '<S1066>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/Post Shutdown two ticks before MPRD off/Post Shutdown two ticks before MPRD off
 * '<S1067>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/Save NV Vars one tick before MPRD off/Save NV Vars one tick before MPRD off
 * '<S1068>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/Shutdown power on ECU565//563/Shutdown power on ECU565-128
 * '<S1069>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/motohawk_override_abs/NewValue
 * '<S1070>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/motohawk_override_abs/OldValue
 */
#endif                                 /* RTW_HEADER_BaseEngineController_LS_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
