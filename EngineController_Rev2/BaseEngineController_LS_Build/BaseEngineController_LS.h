/*
 * File: BaseEngineController_LS.h
 *
 * Code generated for Simulink model 'BaseEngineController_LS'.
 *
 * Model version                  : 1.2185
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Mon Nov 21 23:22:06 2022
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
  real_T s716_motohawk_interpolation_1d;/* '<S716>/motohawk_interpolation_1d' */
  real_T s695_Switch;                  /* '<S695>/Switch' */
  real_T s739_MinMax;                  /* '<S739>/MinMax' */
  real_T s739_MinMax1;                 /* '<S739>/MinMax1' */
  real_T s743_MinMax1;                 /* '<S743>/MinMax1' */
  real_T s714_Merge;                   /* '<S714>/Merge' */
  real_T s753_Merge;                   /* '<S753>/Merge' */
  real_T s704_motohawk_interpolation_1d;/* '<S704>/motohawk_interpolation_1d' */
  real_T s694_Switch;                  /* '<S694>/Switch' */
  real_T s722_MinMax;                  /* '<S722>/MinMax' */
  real_T s722_MinMax1;                 /* '<S722>/MinMax1' */
  real_T s726_MinMax1;                 /* '<S726>/MinMax1' */
  real_T s702_Merge;                   /* '<S702>/Merge' */
  real_T s736_Merge;                   /* '<S736>/Merge' */
  real_T s445_Switch1;                 /* '<S445>/Switch1' */
  real_T s471_Sum;                     /* '<S471>/Sum' */
  real_T s558_Sum1;                    /* '<S558>/Sum1' */
  real_T s571_Merge;                   /* '<S571>/Merge' */
  real_T s483_RPMInst;                 /* '<S483>/Data Type Conversion1' */
  real_T s507_DataTypeConversion;      /* '<S507>/Data Type Conversion' */
  real_T s557_Sum1;                    /* '<S557>/Sum1' */
  real_T s696_Switch;                  /* '<S696>/Switch' */
  real_T s756_MinMax;                  /* '<S756>/MinMax' */
  real_T s756_MinMax1;                 /* '<S756>/MinMax1' */
  real_T s760_MinMax1;                 /* '<S760>/MinMax1' */
  real_T s697_Switch;                  /* '<S697>/Switch' */
  real_T s773_MinMax;                  /* '<S773>/MinMax' */
  real_T s773_MinMax1;                 /* '<S773>/MinMax1' */
  real_T s777_MinMax1;                 /* '<S777>/MinMax1' */
  real_T s770_Merge;                   /* '<S770>/Merge' */
  real_T s787_Merge;                   /* '<S787>/Merge' */
  real_T s452_Switch2;                 /* '<S452>/Switch2' */
  real_T s559_Sum1;                    /* '<S559>/Sum1' */
  real_T s579_Merge;                   /* '<S579>/Merge' */
  real_T s488_Lambda;                  /* '<S488>/Read CAN Message' */
  real_T s488_OxygenConcentratio;      /* '<S488>/Read CAN Message' */
  real_T s488_SystemVolts;             /* '<S488>/Read CAN Message' */
  real_T s488_HeaterVolts;             /* '<S488>/Read CAN Message' */
  real_T s488_ReadCANMessage_o6;       /* '<S488>/Read CAN Message' */
  real_T s488_ReadCANMessage_o7;       /* '<S488>/Read CAN Message' */
  real_T s488_ReadCANMessage_o8;       /* '<S488>/Read CAN Message' */
  real_T s488_ReadCANMessage_o9;       /* '<S488>/Read CAN Message' */
  real_T s488_ReadCANMessage_o10;      /* '<S488>/Read CAN Message' */
  real_T s488_Lambda_c;                /* '<S488>/Read CAN Message1' */
  real_T s488_OxygenConcentratio_d;    /* '<S488>/Read CAN Message1' */
  real_T s488_SystemVolts_k;           /* '<S488>/Read CAN Message1' */
  real_T s488_HeaterVolts_d;           /* '<S488>/Read CAN Message1' */
  real_T s488_ReadCANMessage1_o6;      /* '<S488>/Read CAN Message1' */
  real_T s488_ReadCANMessage1_o7;      /* '<S488>/Read CAN Message1' */
  real_T s488_ReadCANMessage1_o8;      /* '<S488>/Read CAN Message1' */
  real_T s488_ReadCANMessage1_o9;      /* '<S488>/Read CAN Message1' */
  real_T s488_ReadCANMessage1_o10;     /* '<S488>/Read CAN Message1' */
  real_T s487_GPS_Speed;               /* '<S487>/Read CAN Message2' */
  real_T s487_GPS_Altitude;            /* '<S487>/Read CAN Message2' */
  real_T s487_GPS_Course;              /* '<S487>/Read CAN Message2' */
  real_T s487_ReadCANMessage2_o5;      /* '<S487>/Read CAN Message2' */
  real_T s487_ReadCANMessage_o3;       /* '<S487>/Read CAN Message' */
  real_T s487_ReadCANMessage_o4;       /* '<S487>/Read CAN Message' */
  real_T s487_ReadCANMessage_o5;       /* '<S487>/Read CAN Message' */
  real_T s487_ReadCANMessage_o6;       /* '<S487>/Read CAN Message' */
  real_T s487_ReadCANMessage_o7;       /* '<S487>/Read CAN Message' */
  real_T s487_ReadCANMessage_o8;       /* '<S487>/Read CAN Message' */
  real_T s482_Gain1;                   /* '<S482>/Gain1' */
  real_T s542_motohawk_interpolation_1d;/* '<S542>/motohawk_interpolation_1d' */
  real_T s541_Merge;                   /* '<S541>/Merge' */
  real_T s513_Switch;                  /* '<S513>/Switch' */
  real_T s456_Switch2;                 /* '<S456>/Switch2' */
  real_T s488_MathFunction;            /* '<S488>/Math Function' */
  real_T s489_Sum1;                    /* '<S489>/Sum1' */
  real_T s488_MathFunction1;           /* '<S488>/Math Function1' */
  real_T s490_Sum1;                    /* '<S490>/Sum1' */
  real_T s495_Merge;                   /* '<S495>/Merge' */
  real_T s503_Merge;                   /* '<S503>/Merge' */
  real_T s488_MultiportSwitch;         /* '<S488>/Multiport Switch' */
  real_T s450_Sum1;                    /* '<S450>/Sum1' */
  real_T s450_Sum3;                    /* '<S450>/Sum3' */
  real_T s473_Switch;                  /* '<S473>/Switch' */
  real_T s566_Sum1;                    /* '<S566>/Sum1' */
  real_T s634_Merge;                   /* '<S634>/Merge' */
  real_T s563_Merge;                   /* '<S563>/Merge' */
  real_T s561_Sum1;                    /* '<S561>/Sum1' */
  real_T s600_Merge;                   /* '<S600>/Merge' */
  real_T s397_motohawk_delta_time;     /* '<S397>/motohawk_delta_time' */
  real_T s562_Sum1;                    /* '<S562>/Sum1' */
  real_T s407_Sum;                     /* '<S407>/Sum' */
  real_T s406_motohawk_interpolation_2d2;/* '<S406>/motohawk_interpolation_2d2' */
  real_T s406_Sum;                     /* '<S406>/Sum' */
  real_T s406_NominalAirFlowRate;      /* '<S406>/Nominal Air Flow Rate' */
  real_T s406_ModelAirMassFlowRate;    /* '<S406>/Model Air Mass Flow Rate' */
  real_T s482_Gain;                    /* '<S482>/Gain' */
  real_T s528_motohawk_interpolation_1d;/* '<S528>/motohawk_interpolation_1d' */
  real_T s527_Merge;                   /* '<S527>/Merge' */
  real_T s406_MultiportSwitch;         /* '<S406>/Multiport Switch' */
  real_T s423_Merge;                   /* '<S423>/Merge' */
  real_T s426_Sum1;                    /* '<S426>/Sum1' */
  real_T s424_Merge;                   /* '<S424>/Merge' */
  real_T s429_Sum1;                    /* '<S429>/Sum1' */
  real_T s467_Sum1;                    /* '<S467>/Sum1' */
  real_T s508_DataTypeConversion;      /* '<S508>/Data Type Conversion' */
  real_T s511_DataTypeConversion;      /* '<S511>/Data Type Conversion' */
  real_T s608_Merge;                   /* '<S608>/Merge' */
  real_T s398_motohawk_data_read;      /* '<S398>/motohawk_data_read' */
  real_T s417_Sum1;                    /* '<S417>/Sum1' */
  real_T s819_Sum1;                    /* '<S819>/Sum1' */
  real_T s816_Switch;                  /* '<S816>/Switch' */
  real_T s823_Merge;                   /* '<S823>/Merge' */
  real_T s823_Switch;                  /* '<S823>/Switch' */
  real_T s824_Merge;                   /* '<S824>/Merge' */
  real_T s824_Switch;                  /* '<S824>/Switch' */
  real_T s449_MultiportSwitch;         /* '<S449>/Multiport Switch' */
  real_T s92_SparkAdv;                 /* '<S92>/Merge4' */
  real_T s560_Sum1;                    /* '<S560>/Sum1' */
  real_T s592_Merge;                   /* '<S592>/Merge' */
  real_T s564_Sum1;                    /* '<S564>/Sum1' */
  real_T s618_Merge;                   /* '<S618>/Merge' */
  real_T s92_FAN1;                     /* '<S92>/Merge12' */
  real_T s92_FAN2;                     /* '<S92>/Merge13' */
  real_T s92_SparkEnergy;              /* '<S92>/Merge5' */
  real_T s879_MinMax1;                 /* '<S879>/MinMax1' */
  real_T s883_MinMax1;                 /* '<S883>/MinMax1' */
  real_T s475_Switch;                  /* '<S475>/Switch' */
  real_T s92_Throttle;                 /* '<S92>/Merge8' */
  real_T s796_ETC;                     /* '<S796>/Saturation' */
  real_T s92_IACP;                     /* '<S92>/Merge3' */
  real_T s897_MinMax1;                 /* '<S897>/MinMax1' */
  real_T s92_IACS;                     /* '<S92>/Merge9' */
  real_T s901_MinMax1;                 /* '<S901>/MinMax1' */
  real_T s92_SOI;                      /* '<S92>/Merge1' */
  real_T s92_FPC[8];                   /* '<S92>/Merge2' */
  real_T s64_constreftoatm;            /* '<S64>/const ref to atm' */
  real_T s21_Sum2;                     /* '<S21>/Sum2' */
  real_T s21_Sum1;                     /* '<S21>/Sum1' */
  real_T s21_MinMax[8];                /* '<S21>/MinMax' */
  real_T s92_MakeUpEOI;                /* '<S92>/Merge10' */
  real_T s92_WASTEGATE;                /* '<S92>/Merge11' */
  real_T s928_MinMax1;                 /* '<S928>/MinMax1' */
  real_T s21_Gain[8];                  /* '<S21>/Gain' */
  real_T s448_Sum3;                    /* '<S448>/Sum3' */
  real_T s487_GPS_Latitude;            /* '<S487>/Read CAN Message1' */
  real_T s487_GPS_Longitude;           /* '<S487>/Read CAN Message1' */
  real_T s565_Sum1;                    /* '<S565>/Sum1' */
  real_T s626_Merge;                   /* '<S626>/Merge' */
  real_T s851_Sum;                     /* '<S851>/Sum' */
  real_T s852_Sum;                     /* '<S852>/Sum' */
  real_T s854_CrankCounter;            /* '<S854>/CrankCounter' */
  real_T s646_motohawk_interpolation_1d;/* '<S646>/motohawk_interpolation_1d' */
  real_T s640_Merge;                   /* '<S640>/Merge' */
  real_T s645_Merge;                   /* '<S645>/Merge' */
  real_T s668_motohawk_interpolation_1d;/* '<S668>/motohawk_interpolation_1d' */
  real_T s651_Merge;                   /* '<S651>/Merge' */
  real_T s667_Merge;                   /* '<S667>/Merge' */
  real_T s686_motohawk_interpolation_1d;/* '<S686>/motohawk_interpolation_1d' */
  real_T s653_Merge;                   /* '<S653>/Merge' */
  real_T s685_Merge;                   /* '<S685>/Merge' */
  real_T s677_motohawk_interpolation_1d;/* '<S677>/motohawk_interpolation_1d' */
  real_T s676_Merge;                   /* '<S676>/Merge' */
  real_T s659_motohawk_interpolation_1d;/* '<S659>/motohawk_interpolation_1d' */
  real_T s658_Merge;                   /* '<S658>/Merge' */
  real_T s298_Defaultifnoflow[8];      /* '<S298>/Default (if no flow)' */
  real_T s316_Sum1[8];                 /* '<S316>/Sum1' */
  real_T s315_chargemass[8];           /* '<S315>/charge mass' */
  real_T s442_Merge;                   /* '<S442>/Merge' */
  real_T s460_Sum2;                    /* '<S460>/Sum2' */
  real_T s403_Timer;                   /* '<S397>/Baro Stall State Delay' */
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
  real_T s949_Switch;                  /* '<S949>/Switch' */
  uint32_T s484_motohawk_frequency_in; /* '<S484>/motohawk_frequency_in' */
  uint32_T s488_ReadCANMessage_o1;     /* '<S488>/Read CAN Message' */
  uint32_T s488_ReadCANMessage1_o1;    /* '<S488>/Read CAN Message1' */
  uint32_T s487_ReadCANMessage2_o1;    /* '<S487>/Read CAN Message2' */
  uint32_T s487_ReadCANMessage_o1;     /* '<S487>/Read CAN Message' */
  uint32_T s487_ReadCANMessage1_o1;    /* '<S487>/Read CAN Message1' */
  uint32_T s556_Sum;                   /* '<S556>/Sum' */
  uint32_T s350_Sum1;                  /* '<S350>/Sum1' */
  uint32_T s351_motohawk_abs_time;     /* '<S351>/motohawk_abs_time' */
  uint32_T s9_ReadCANRaw_o2;           /* '<S9>/Read CAN Raw' */
  uint32_T s9_ReadCANRaw_o4;           /* '<S9>/Read CAN Raw' */
  uint32_T s10_motohawk_calibration;   /* '<S10>/motohawk_calibration' */
  int16_T s796_motohawk_pwm1;          /* '<S796>/motohawk_pwm1' */
  int16_T s343_Merge;                  /* '<S343>/Merge' */
  uint16_T s486_motohawk_ain2;         /* '<S486>/motohawk_ain2' */
  uint16_T s486_motohawk_ain1;         /* '<S486>/motohawk_ain1' */
  uint16_T s484_motohawk_ain4;         /* '<S484>/motohawk_ain4' */
  uint16_T s484_motohawk_ain14;        /* '<S484>/motohawk_ain14' */
  uint16_T s484_motohawk_ain_read1;    /* '<S484>/motohawk_ain_read1' */
  uint16_T s484_motohawk_ain2;         /* '<S484>/motohawk_ain2' */
  uint16_T s484_motohawk_ain1;         /* '<S484>/motohawk_ain1' */
  uint16_T s484_motohawk_ain3;         /* '<S484>/motohawk_ain3' */
  uint16_T s792_SparkSequence_o3[8];   /* '<S792>/Spark Sequence' */
  uint16_T s792_SparkSequence_o4[8];   /* '<S792>/Spark Sequence' */
  uint16_T s638_motohawk_ain;          /* '<S638>/motohawk_ain' */
  uint16_T s639_motohawk_ain;          /* '<S639>/motohawk_ain' */
  uint16_T s639_motohawk_ain1;         /* '<S639>/motohawk_ain1' */
  uint16_T s639_motohawk_ain2;         /* '<S639>/motohawk_ain2' */
  uint16_T s639_motohawk_ain3;         /* '<S639>/motohawk_ain3' */
  uint16_T s10_motohawk_calibration3;  /* '<S10>/motohawk_calibration3' */
  index_T s433_motohawk_prelookup;     /* '<S433>/motohawk_prelookup' */
  index_T s434_motohawk_prelookup;     /* '<S434>/motohawk_prelookup' */
  index_T s431_motohawk_prelookup;     /* '<S431>/motohawk_prelookup' */
  index_T s437_motohawk_prelookup1;    /* '<S437>/motohawk_prelookup1' */
  index_T s437_Indexes;                /* '<S437>/motohawk_prelookup5' */
  index_T s433_motohawk_prelookup2;    /* '<S433>/motohawk_prelookup2' */
  index_T s434_motohawk_prelookup1;    /* '<S434>/motohawk_prelookup1' */
  index_T s438_motohawk_prelookup;     /* '<S438>/motohawk_prelookup' */
  index_T s431_motohawk_prelookup1;    /* '<S431>/motohawk_prelookup1' */
  index_T s435_motohawk_prelookup1;    /* '<S435>/motohawk_prelookup1' */
  index_T s435_Indexes;                /* '<S435>/motohawk_prelookup5' */
  index_T s440_motohawk_prelookup;     /* '<S440>/motohawk_prelookup' */
  index_T s440_motohawk_prelookup2;    /* '<S440>/motohawk_prelookup2' */
  index_T s432_motohawk_prelookup;     /* '<S432>/motohawk_prelookup' */
  index_T s436_motohawk_prelookup;     /* '<S436>/motohawk_prelookup' */
  index_T s402_RPMAccel17Idx;          /* '<S402>/motohawk_prelookup' */
  int8_T s22_Merge1[32];               /* '<S22>/Merge1' */
  int8_T s854_DataTypeConversion;      /* '<S854>/Data Type Conversion' */
  int8_T s187_DataTypeConversion;      /* '<S187>/Data Type Conversion' */
  int8_T s187_DataTypeConversion1;     /* '<S187>/Data Type Conversion1' */
  int8_T s72_MultiportSwitch[8];       /* '<S72>/Multiport Switch' */
  int8_T s82_CutArray[8];              /* '<S82>/CutArray' */
  int8_T s27_DC_Override;              /* '<S20>/ETC Test  Manager' */
  int8_T s27_SetpointMode;             /* '<S20>/ETC Test  Manager' */
  uint8_T s447_UnitDelay;              /* '<S447>/Unit Delay' */
  uint8_T s397_motohawk_data_read1;    /* '<S397>/motohawk_data_read1' */
  uint8_T s798_InjectorSequence_o1[8]; /* '<S798>/Injector Sequence' */
  uint8_T s22_DataTypeConversion5;     /* '<S22>/Data Type Conversion5' */
  uint8_T s487_GPS_SatelliteCount;     /* '<S487>/Data Type Conversion8' */
  uint8_T s487_GPS_SecondsUTC;         /* '<S487>/Data Type Conversion5' */
  uint8_T s487_GPS_MinutesUTC;         /* '<S487>/Data Type Conversion4' */
  uint8_T s487_GPS_HoursUTC;           /* '<S487>/Data Type Conversion3' */
  uint8_T s487_GPS_DayUTC;             /* '<S487>/Data Type Conversion2' */
  uint8_T s487_GPS_MonthUTC;           /* '<S487>/Data Type Conversion1' */
  uint8_T s487_GPS_YearUTC;            /* '<S487>/Data Type Conversion' */
  uint8_T s488_SensorStatus;           /* '<S488>/Data Type Conversion9' */
  uint8_T s488_SensorStatus_e;         /* '<S488>/Data Type Conversion3' */
  uint8_T s483_motohawk_encoder_fault; /* '<S483>/motohawk_encoder_fault' */
  uint8_T s483_motohawk_encoder_state; /* '<S483>/motohawk_encoder_state' */
  uint8_T s856_Switch1;                /* '<S856>/Switch1' */
  uint8_T s469_Switch;                 /* '<S469>/Switch' */
  uint8_T s468_State;                  /* '<S447>/Engine State Machine' */
  uint8_T s104_motohawk_interpolation_2d;/* '<S104>/motohawk_interpolation_2d' */
  uint8_T s221_IdleState;              /* '<S206>/IdleStateMachine' */
  uint8_T s72_UnitDelay1;              /* '<S72>/Unit Delay1' */
  uint8_T s82_Switch;                  /* '<S82>/Switch' */
  uint8_T s9_ReadCANRaw_o5;            /* '<S9>/Read CAN Raw' */
  uint8_T s9_ReadCANRaw_o6[8];         /* '<S9>/Read CAN Raw' */
  boolean_T s447_Stall;                /* '<S447>/Relational Operator1' */
  boolean_T s447_Crank;                /* '<S447>/Relational Operator4' */
  boolean_T s447_Run;                  /* '<S447>/Logical Operator1' */
  boolean_T s514_Merge;                /* '<S514>/Merge' */
  boolean_T s488_DataValidState;       /* '<S488>/Data Type Conversion2' */
  boolean_T s488_DataValidState_f;     /* '<S488>/Data Type Conversion6' */
  boolean_T s487_GPS_Valid;            /* '<S487>/Read CAN Message' */
  boolean_T s513_LogicalOperator;      /* '<S513>/Logical Operator' */
  boolean_T s513_LogicalOperator3;     /* '<S513>/Logical Operator3' */
  boolean_T s423_RelationalOperator4;  /* '<S423>/Relational Operator4' */
  boolean_T s424_RelationalOperator4;  /* '<S424>/Relational Operator4' */
  boolean_T s422_LogicalOperator;      /* '<S422>/Logical Operator' */
  boolean_T s517_Merge;                /* '<S517>/Merge' */
  boolean_T s533_Merge;                /* '<S533>/Merge' */
  boolean_T s92_AC;                    /* '<S92>/Merge14' */
  boolean_T s800_LogicalOperator;      /* '<S800>/Logical Operator' */
  boolean_T s421_LogicalOperator;      /* '<S421>/Logical Operator' */
  boolean_T s92_FUELP;                 /* '<S92>/Merge7' */
  boolean_T s22_LogicalOperator2[8];   /* '<S22>/Logical Operator2' */
  boolean_T s482_motohawk_din;         /* '<S482>/motohawk_din' */
  boolean_T s520_Merge;                /* '<S520>/Merge' */
  boolean_T s887_LogicalOperator;      /* '<S887>/Logical Operator' */
  boolean_T s796_RelationalOperator4;  /* '<S796>/Relational Operator4' */
  boolean_T s911_Merge[8];             /* '<S911>/Merge' */
  boolean_T s488_SensorFaultState;     /* '<S488>/Data Type Conversion5' */
  boolean_T s488_UsingFreeAreCalState; /* '<S488>/Data Type Conversion7' */
  boolean_T s488_SensorDetectedStatus; /* '<S488>/Data Type Conversion8' */
  boolean_T s488_SensorFaultState_m;   /* '<S488>/Data Type Conversion4' */
  boolean_T s488_UsingFreeAreCalState_o;/* '<S488>/Data Type Conversion1' */
  boolean_T s488_SensorDetectedStatus_m;/* '<S488>/Data Type Conversion' */
  boolean_T s406_LogicalOperator;      /* '<S406>/Logical Operator' */
  boolean_T s792_LogicalOperator1[8];  /* '<S792>/Logical Operator1' */
  boolean_T s854_RelationalOperator1;  /* '<S854>/Relational Operator1' */
  boolean_T s720_LogicalOperator;      /* '<S720>/Logical Operator' */
  boolean_T s708_LogicalOperator;      /* '<S708>/Logical Operator' */
  boolean_T s344_RelationalOperator;   /* '<S344>/Relational Operator' */
  boolean_T s345_RelationalOperator;   /* '<S345>/Relational Operator' */
  boolean_T s442_RelationalOperator3;  /* '<S442>/Relational Operator3' */
  boolean_T s403_Enable;               /* '<S397>/Baro Stall State Delay' */
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
  boolean_T s932_RelationalOperator;   /* '<S932>/Relational Operator' */
  boolean_T s932_LogicalOperator2;     /* '<S932>/Logical Operator2' */
  boolean_T s936_MPRDState;            /* '<S932>/ECUP Latch' */
  boolean_T s9_ReadCANRaw_o1;          /* '<S9>/Read CAN Raw' */
  boolean_T s9_ReadCANRaw_o3;          /* '<S9>/Read CAN Raw' */
  rtB_SafeDivide_BaseEngineController_LS s345_SafeDivide;/* '<S345>/SafeDivide' */
  rtB_GetInstRPM_BaseEngineController_LS s345_GetInstRPM;/* '<S345>/GetInstRPM' */
  rtB_SafeDivide_BaseEngineController_LS s344_SafeDivide;/* '<S344>/SafeDivide' */
  rtB_GetInstRPM_BaseEngineController_LS s344_GetInstRPM;/* '<S344>/GetInstRPM' */
  rtB_CollectAverage_BaseEngineController_LS s444_CollectAverage;/* '<S444>/Collect Average' */
  rtB_CollectAverage_BaseEngineController_LS s443_CollectAverage;/* '<S443>/Collect Average' */
  rtB_CollectAverage_BaseEngineController_LS s404_CollectAverage;/* '<S404>/Collect Average' */
} BlockIO_BaseEngineController_LS;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T s692_UnitDelay_DSTATE;        /* '<S692>/Unit Delay' */
  real_T s717_UnitDelay_DSTATE;        /* '<S717>/Unit Delay' */
  real_T s749_UnitDelay_DSTATE;        /* '<S749>/Unit Delay' */
  real_T s742_UnitDelay1_DSTATE;       /* '<S742>/Unit Delay1' */
  real_T s690_UnitDelay_DSTATE;        /* '<S690>/Unit Delay' */
  real_T s705_UnitDelay_DSTATE;        /* '<S705>/Unit Delay' */
  real_T s732_UnitDelay_DSTATE;        /* '<S732>/Unit Delay' */
  real_T s725_UnitDelay1_DSTATE;       /* '<S725>/Unit Delay1' */
  real_T s558_UnitDelay1_DSTATE;       /* '<S558>/Unit Delay1' */
  real_T s572_UnitDelay_DSTATE;        /* '<S572>/Unit Delay' */
  real_T s557_UnitDelay_DSTATE;        /* '<S557>/Unit Delay' */
  real_T s766_UnitDelay_DSTATE;        /* '<S766>/Unit Delay' */
  real_T s759_UnitDelay1_DSTATE;       /* '<S759>/Unit Delay1' */
  real_T s783_UnitDelay_DSTATE;        /* '<S783>/Unit Delay' */
  real_T s776_UnitDelay1_DSTATE;       /* '<S776>/Unit Delay1' */
  real_T s584_UnitDelay_DSTATE;        /* '<S584>/Unit Delay' */
  real_T s559_UnitDelay1_DSTATE;       /* '<S559>/Unit Delay1' */
  real_T s583_UnitDelay_DSTATE;        /* '<S583>/Unit Delay' */
  real_T s581_UnitDelay_DSTATE;        /* '<S581>/Unit Delay' */
  real_T s581_UnitDelay1_DSTATE;       /* '<S581>/Unit Delay1' */
  real_T s581_UnitDelay2_DSTATE;       /* '<S581>/Unit Delay2' */
  real_T s513_UnitDelay_DSTATE;        /* '<S513>/Unit Delay' */
  real_T s546_UnitDelay_DSTATE;        /* '<S546>/Unit Delay' */
  real_T s512_UnitDelay_DSTATE;        /* '<S512>/Unit Delay' */
  real_T s543_UnitDelay_DSTATE;        /* '<S543>/Unit Delay' */
  real_T s513_UnitDelay1_DSTATE;       /* '<S513>/Unit Delay1' */
  real_T s513_UnitDelay3_DSTATE;       /* '<S513>/Unit Delay3' */
  real_T s450_UnitDelay_DSTATE;        /* '<S450>/Unit Delay' */
  real_T s489_UnitDelay1_DSTATE;       /* '<S489>/Unit Delay1' */
  real_T s496_UnitDelay_DSTATE;        /* '<S496>/Unit Delay' */
  real_T s490_UnitDelay1_DSTATE;       /* '<S490>/Unit Delay1' */
  real_T s504_UnitDelay_DSTATE;        /* '<S504>/Unit Delay' */
  real_T s450_UnitDelay1_DSTATE;       /* '<S450>/Unit Delay1' */
  real_T s566_UnitDelay1_DSTATE;       /* '<S566>/Unit Delay1' */
  real_T s635_UnitDelay_DSTATE;        /* '<S635>/Unit Delay' */
  real_T s561_UnitDelay1_DSTATE;       /* '<S561>/Unit Delay1' */
  real_T s601_UnitDelay_DSTATE;        /* '<S601>/Unit Delay' */
  real_T s562_UnitDelay1_DSTATE;       /* '<S562>/Unit Delay1' */
  real_T s407_UnitDelay_DSTATE;        /* '<S407>/Unit Delay' */
  real_T s510_UnitDelay_DSTATE;        /* '<S510>/Unit Delay' */
  real_T s529_UnitDelay_DSTATE;        /* '<S529>/Unit Delay' */
  real_T s423_UnitDelay2_DSTATE;       /* '<S423>/Unit Delay2' */
  real_T s426_UnitDelay_DSTATE;        /* '<S426>/Unit Delay' */
  real_T s424_UnitDelay2_DSTATE;       /* '<S424>/Unit Delay2' */
  real_T s429_UnitDelay_DSTATE;        /* '<S429>/Unit Delay' */
  real_T s465_UnitDelay_DSTATE;        /* '<S465>/Unit Delay' */
  real_T s467_UnitDelay_DSTATE;        /* '<S467>/Unit Delay' */
  real_T s609_UnitDelay_DSTATE;        /* '<S609>/Unit Delay' */
  real_T s417_UnitDelay_DSTATE;        /* '<S417>/Unit Delay' */
  real_T s819_UnitDelay_DSTATE;        /* '<S819>/Unit Delay' */
  real_T s817_UnitDelay_DSTATE;        /* '<S817>/Unit Delay' */
  real_T s823_UnitDelay2_DSTATE;       /* '<S823>/Unit Delay2' */
  real_T s829_UnitDelay_DSTATE;        /* '<S829>/Unit Delay' */
  real_T s824_UnitDelay2_DSTATE;       /* '<S824>/Unit Delay2' */
  real_T s832_UnitDelay_DSTATE;        /* '<S832>/Unit Delay' */
  real_T s825_UnitDelay_DSTATE;        /* '<S825>/Unit Delay' */
  real_T s826_UnitDelay_DSTATE;        /* '<S826>/Unit Delay' */
  real_T s827_UnitDelay_DSTATE;        /* '<S827>/Unit Delay' */
  real_T s823_UnitDelay1_DSTATE;       /* '<S823>/Unit Delay1' */
  real_T s823_UnitDelay3_DSTATE;       /* '<S823>/Unit Delay3' */
  real_T s823_UnitDelay4_DSTATE;       /* '<S823>/Unit Delay4' */
  real_T s824_UnitDelay1_DSTATE;       /* '<S824>/Unit Delay1' */
  real_T s824_UnitDelay3_DSTATE;       /* '<S824>/Unit Delay3' */
  real_T s824_UnitDelay4_DSTATE;       /* '<S824>/Unit Delay4' */
  real_T s840_UnitDelay_DSTATE;        /* '<S840>/Unit Delay' */
  real_T s560_UnitDelay1_DSTATE;       /* '<S560>/Unit Delay1' */
  real_T s593_UnitDelay_DSTATE;        /* '<S593>/Unit Delay' */
  real_T s841_UnitDelay_DSTATE;        /* '<S841>/Unit Delay' */
  real_T s564_UnitDelay1_DSTATE;       /* '<S564>/Unit Delay1' */
  real_T s619_UnitDelay_DSTATE;        /* '<S619>/Unit Delay' */
  real_T s842_UnitDelay_DSTATE;        /* '<S842>/Unit Delay' */
  real_T s844_UnitDelay_DSTATE;        /* '<S844>/Unit Delay' */
  real_T s848_UnitDelay_DSTATE;        /* '<S848>/Unit Delay' */
  real_T s847_UnitDelay_DSTATE;        /* '<S847>/Unit Delay' */
  real_T s565_UnitDelay1_DSTATE;       /* '<S565>/Unit Delay1' */
  real_T s627_UnitDelay_DSTATE;        /* '<S627>/Unit Delay' */
  real_T s423_UnitDelay1_DSTATE;       /* '<S423>/Unit Delay1' */
  real_T s423_UnitDelay3_DSTATE;       /* '<S423>/Unit Delay3' */
  real_T s423_UnitDelay4_DSTATE;       /* '<S423>/Unit Delay4' */
  real_T s424_UnitDelay1_DSTATE;       /* '<S424>/Unit Delay1' */
  real_T s424_UnitDelay3_DSTATE;       /* '<S424>/Unit Delay3' */
  real_T s424_UnitDelay4_DSTATE;       /* '<S424>/Unit Delay4' */
  real_T s729_UnitDelay1_DSTATE;       /* '<S729>/Unit Delay1' */
  real_T s729_UnitDelay_DSTATE;        /* '<S729>/Unit Delay' */
  real_T s729_UnitDelay3_DSTATE;       /* '<S729>/Unit Delay3' */
  real_T s729_UnitDelay4_DSTATE;       /* '<S729>/Unit Delay4' */
  real_T s746_UnitDelay1_DSTATE;       /* '<S746>/Unit Delay1' */
  real_T s746_UnitDelay_DSTATE;        /* '<S746>/Unit Delay' */
  real_T s746_UnitDelay3_DSTATE;       /* '<S746>/Unit Delay3' */
  real_T s746_UnitDelay4_DSTATE;       /* '<S746>/Unit Delay4' */
  real_T s763_UnitDelay1_DSTATE;       /* '<S763>/Unit Delay1' */
  real_T s763_UnitDelay_DSTATE;        /* '<S763>/Unit Delay' */
  real_T s763_UnitDelay3_DSTATE;       /* '<S763>/Unit Delay3' */
  real_T s763_UnitDelay4_DSTATE;       /* '<S763>/Unit Delay4' */
  real_T s780_UnitDelay1_DSTATE;       /* '<S780>/Unit Delay1' */
  real_T s780_UnitDelay_DSTATE;        /* '<S780>/Unit Delay' */
  real_T s780_UnitDelay3_DSTATE;       /* '<S780>/Unit Delay3' */
  real_T s780_UnitDelay4_DSTATE;       /* '<S780>/Unit Delay4' */
  real_T s851_UnitDelay_DSTATE;        /* '<S851>/Unit Delay' */
  real_T s852_UnitDelay_DSTATE;        /* '<S852>/Unit Delay' */
  real_T s854_CrankCounter_DSTATE;     /* '<S854>/CrankCounter' */
  real_T s640_UnitDelay_DSTATE;        /* '<S640>/Unit Delay' */
  real_T s647_UnitDelay_DSTATE;        /* '<S647>/Unit Delay' */
  real_T s651_UnitDelay_DSTATE;        /* '<S651>/Unit Delay' */
  real_T s669_UnitDelay_DSTATE;        /* '<S669>/Unit Delay' */
  real_T s653_UnitDelay_DSTATE;        /* '<S653>/Unit Delay' */
  real_T s687_UnitDelay_DSTATE;        /* '<S687>/Unit Delay' */
  real_T s652_UnitDelay_DSTATE;        /* '<S652>/Unit Delay' */
  real_T s678_UnitDelay_DSTATE;        /* '<S678>/Unit Delay' */
  real_T s650_UnitDelay_DSTATE;        /* '<S650>/Unit Delay' */
  real_T s660_UnitDelay_DSTATE;        /* '<S660>/Unit Delay' */
  real_T s316_UnitDelay_DSTATE[8];     /* '<S316>/Unit Delay' */
  real_T s344_UnitDelay2_DSTATE;       /* '<S344>/Unit Delay2' */
  real_T s345_UnitDelay2_DSTATE;       /* '<S345>/Unit Delay2' */
  real_T s442_UnitDelay2_DSTATE;       /* '<S442>/Unit Delay2' */
  real_T s457_UnitDelay_DSTATE;        /* '<S457>/Unit Delay' */
  real_T s460_UnitDelay_DSTATE;        /* '<S460>/Unit Delay' */
  real_T s442_UnitDelay1_DSTATE;       /* '<S442>/Unit Delay1' */
  real_T s442_UnitDelay3_DSTATE;       /* '<S442>/Unit Delay3' */
  real_T s442_UnitDelay4_DSTATE;       /* '<S442>/Unit Delay4' */
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
  real_T s938_UnitDelay_DSTATE;        /* '<S938>/Unit Delay' */
  real_T s938_UnitDelay1_DSTATE;       /* '<S938>/Unit Delay1' */
  real_T s403_TOld;                    /* '<S397>/Baro Stall State Delay' */
  real_T s27_TimerOld;                 /* '<S20>/ETC Test  Manager' */
  uint32_T s479_UnitDelay_DSTATE;      /* '<S479>/Unit Delay' */
  uint32_T s556_UnitDelay_DSTATE;      /* '<S556>/Unit Delay' */
  uint32_T s710_motohawk_delta_time_DWORK1;/* '<S710>/motohawk_delta_time' */
  uint32_T s741_motohawk_delta_time_DWORK1;/* '<S741>/motohawk_delta_time' */
  uint32_T s698_motohawk_delta_time_DWORK1;/* '<S698>/motohawk_delta_time' */
  uint32_T s724_motohawk_delta_time_DWORK1;/* '<S724>/motohawk_delta_time' */
  uint32_T s471_motohawk_delta_time_DWORK1;/* '<S471>/motohawk_delta_time' */
  uint32_T s567_motohawk_delta_time_DWORK1;/* '<S567>/motohawk_delta_time' */
  uint32_T s550_motohawk_delta_time_DWORK1;/* '<S550>/motohawk_delta_time' */
  uint32_T s758_motohawk_delta_time_DWORK1;/* '<S758>/motohawk_delta_time' */
  uint32_T s775_motohawk_delta_time_DWORK1;/* '<S775>/motohawk_delta_time' */
  uint32_T s584_motohawk_delta_time_DWORK1;/* '<S584>/motohawk_delta_time' */
  uint32_T s580_motohawk_delta_time_DWORK1;/* '<S580>/motohawk_delta_time' */
  uint32_T s537_motohawk_delta_time_DWORK1;/* '<S537>/motohawk_delta_time' */
  uint32_T s546_motohawk_delta_time_DWORK1;/* '<S546>/motohawk_delta_time' */
  uint32_T s491_motohawk_delta_time_DWORK1;/* '<S491>/motohawk_delta_time' */
  uint32_T s499_motohawk_delta_time_DWORK1;/* '<S499>/motohawk_delta_time' */
  uint32_T s473_motohawk_delta_time_DWORK1;/* '<S473>/motohawk_delta_time' */
  uint32_T s630_motohawk_delta_time_DWORK1;/* '<S630>/motohawk_delta_time' */
  uint32_T s596_motohawk_delta_time_DWORK1;/* '<S596>/motohawk_delta_time' */
  uint32_T s397_motohawk_delta_time_DWORK1;/* '<S397>/motohawk_delta_time' */
  uint32_T s410_motohawk_delta_time_DWORK1;/* '<S410>/motohawk_delta_time' */
  uint32_T s523_motohawk_delta_time_DWORK1;/* '<S523>/motohawk_delta_time' */
  uint32_T s465_motohawk_delta_time_DWORK1;/* '<S465>/motohawk_delta_time' */
  uint32_T s534_motohawk_delta_time_DWORK1;/* '<S534>/motohawk_delta_time' */
  uint32_T s604_motohawk_delta_time_DWORK1;/* '<S604>/motohawk_delta_time' */
  uint32_T s398_motohawk_delta_time_DWORK1;/* '<S398>/motohawk_delta_time' */
  uint32_T s818_motohawk_delta_time_DWORK1;/* '<S818>/motohawk_delta_time' */
  uint32_T s815_motohawk_delta_time_DWORK1;/* '<S815>/motohawk_delta_time' */
  uint32_T s820_motohawk_delta_time_DWORK1;/* '<S820>/motohawk_delta_time' */
  uint32_T s821_motohawk_delta_time_DWORK1;/* '<S821>/motohawk_delta_time' */
  uint32_T s822_motohawk_delta_time_DWORK1;/* '<S822>/motohawk_delta_time' */
  uint32_T s837_motohawk_delta_time_DWORK1;/* '<S837>/motohawk_delta_time' */
  uint32_T s588_motohawk_delta_time_DWORK1;/* '<S588>/motohawk_delta_time' */
  uint32_T s838_motohawk_delta_time_DWORK1;/* '<S838>/motohawk_delta_time' */
  uint32_T s614_motohawk_delta_time_DWORK1;/* '<S614>/motohawk_delta_time' */
  uint32_T s839_motohawk_delta_time_DWORK1;/* '<S839>/motohawk_delta_time' */
  uint32_T s843_motohawk_delta_time_DWORK1;/* '<S843>/motohawk_delta_time' */
  uint32_T s846_motohawk_delta_time_DWORK1;/* '<S846>/motohawk_delta_time' */
  uint32_T s845_motohawk_delta_time_DWORK1;/* '<S845>/motohawk_delta_time' */
  uint32_T s891_motohawk_delta_time_DWORK1;/* '<S891>/motohawk_delta_time' */
  uint32_T s475_motohawk_delta_time_DWORK1;/* '<S475>/motohawk_delta_time' */
  uint32_T s622_motohawk_delta_time_DWORK1;/* '<S622>/motohawk_delta_time' */
  uint32_T s548_motohawk_delta_time_DWORK1;/* '<S548>/motohawk_delta_time' */
  uint32_T s641_motohawk_delta_time_DWORK1;/* '<S641>/motohawk_delta_time' */
  uint32_T s663_motohawk_delta_time_DWORK1;/* '<S663>/motohawk_delta_time' */
  uint32_T s681_motohawk_delta_time_DWORK1;/* '<S681>/motohawk_delta_time' */
  uint32_T s672_motohawk_delta_time_DWORK1;/* '<S672>/motohawk_delta_time' */
  uint32_T s654_motohawk_delta_time_DWORK1;/* '<S654>/motohawk_delta_time' */
  uint32_T s310_motohawk_delta_time_DWORK1;/* '<S310>/motohawk_delta_time' */
  uint32_T s311_motohawk_delta_time_DWORK1;/* '<S311>/motohawk_delta_time' */
  uint32_T s378_motohawk_delta_time_DWORK1;/* '<S378>/motohawk_delta_time' */
  uint32_T s381_motohawk_delta_time_DWORK1;/* '<S381>/motohawk_delta_time' */
  uint32_T s379_motohawk_delta_time_DWORK1;/* '<S379>/motohawk_delta_time' */
  uint32_T s380_motohawk_delta_time_DWORK1;/* '<S380>/motohawk_delta_time' */
  uint32_T s314_motohawk_delta_time_DWORK1;/* '<S314>/motohawk_delta_time' */
  uint32_T s460_motohawk_delta_time_DWORK1;/* '<S460>/motohawk_delta_time' */
  uint32_T s442_motohawk_delta_time_DWORK1;/* '<S442>/motohawk_delta_time' */
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
  uint32_T s949_motohawk_delta_time_DWORK1;/* '<S949>/motohawk_delta_time' */
  uint32_T s940_motohawk_delta_time_DWORK1;/* '<S940>/motohawk_delta_time' */
  int_T s110_HitCrossing1_MODE;        /* '<S110>/Hit  Crossing1' */
  uint16_T s344_UnitDelay1_DSTATE;     /* '<S344>/Unit Delay1' */
  uint16_T s345_UnitDelay1_DSTATE;     /* '<S345>/Unit Delay1' */
  uint16_T s798_InjectorSequence_DWORK2;/* '<S798>/Injector Sequence' */
  int8_T s444_UnitDelay_DSTATE;        /* '<S444>/Unit Delay' */
  int8_T s443_UnitDelay_DSTATE;        /* '<S443>/Unit Delay' */
  int8_T s404_UnitDelay_DSTATE;        /* '<S404>/Unit Delay' */
  uint8_T s447_UnitDelay_DSTATE;       /* '<S447>/Unit Delay' */
  uint8_T s469_CrankCounter_DSTATE;    /* '<S469>/CrankCounter' */
  uint8_T s72_UnitDelay1_DSTATE;       /* '<S72>/Unit Delay1' */
  boolean_T s513_UnitDelay2_DSTATE;    /* '<S513>/Unit Delay2' */
  boolean_T s421_UnitDelay_DSTATE;     /* '<S421>/Unit Delay' */
  boolean_T s823_UnitDelay5_DSTATE;    /* '<S823>/Unit Delay5' */
  boolean_T s824_UnitDelay5_DSTATE;    /* '<S824>/Unit Delay5' */
  boolean_T s721_InitialConditionisTrue_DSTATE;/* '<S721>/Initial Condition is True' */
  boolean_T s709_InitialConditionisTrue_DSTATE;/* '<S709>/Initial Condition is True' */
  boolean_T s394_UnitDelay_DSTATE;     /* '<S394>/Unit Delay' */
  boolean_T s395_UnitDelay_DSTATE;     /* '<S395>/Unit Delay' */
  boolean_T s396_UnitDelay_DSTATE;     /* '<S396>/Unit Delay' */
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
  boolean_T s937_UnitDelay8_DSTATE;    /* '<S937>/Unit Delay8' */
  boolean_T s937_UnitDelay6_DSTATE;    /* '<S937>/Unit Delay6' */
  boolean_T s937_UnitDelay7_DSTATE;    /* '<S937>/Unit Delay7' */
  boolean_T s933_UnitDelay_DSTATE;     /* '<S933>/Unit Delay' */
  boolean_T s939_UnitDelay2_DSTATE;    /* '<S939>/Unit Delay2' */
  boolean_T s932_UnitDelay5_DSTATE;    /* '<S932>/Unit Delay5' */
  boolean_T s939_UnitDelay_DSTATE;     /* '<S939>/Unit Delay' */
  boolean_T s939_UnitDelay1_DSTATE;    /* '<S939>/Unit Delay1' */
  boolean_T s932_UnitDelay3_DSTATE;    /* '<S932>/Unit Delay3' */
  boolean_T s932_UnitDelay4_DSTATE;    /* '<S932>/Unit Delay4' */
  int8_T s343_If_ActiveSubsystem;      /* '<S343>/If' */
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
  uint8_T s485_motohawk_trigger_DWORK1;/* '<S485>/motohawk_trigger' */
  uint8_T s447_motohawk_trigger_DWORK1;/* '<S447>/motohawk_trigger' */
  uint8_T s563_motohawk_trigger5_DWORK1;/* '<S563>/motohawk_trigger5' */
  uint8_T s485_motohawk_trigger1_DWORK1;/* '<S485>/motohawk_trigger1' */
  uint8_T s14_motohawk_trigger1_DWORK1;/* '<S14>/motohawk_trigger1' */
  uint8_T s14_motohawk_trigger_DWORK1; /* '<S14>/motohawk_trigger' */
  uint8_T s13_motohawk_trigger_DWORK1; /* '<S13>/motohawk_trigger' */
  uint8_T s691_motohawk_trigger_DWORK1;/* '<S691>/motohawk_trigger' */
  uint8_T s693_motohawk_trigger_DWORK1;/* '<S693>/motohawk_trigger' */
  uint8_T s854_motohawk_trigger1_DWORK1;/* '<S854>/motohawk_trigger1' */
  uint8_T s324_motohawk_trigger_DWORK1;/* '<S324>/motohawk_trigger' */
  uint8_T s468_is_c2_BaseEngineController_LS;/* '<S447>/Engine State Machine' */
  uint8_T s403_is_c19_BaseEngineController_LS;/* '<S397>/Baro Stall State Delay' */
  uint8_T s291_is_active_c3_BaseEngineController_LS;/* '<S283>/Ice Break' */
  uint8_T s291_is_c3_BaseEngineController_LS;/* '<S283>/Ice Break' */
  uint8_T s93_motohawk_trigger1_DWORK1;/* '<S93>/motohawk_trigger1' */
  uint8_T s221_is_active_c12_BaseEngineController_LS;/* '<S206>/IdleStateMachine' */
  uint8_T s221_is_c12_BaseEngineController_LS;/* '<S206>/IdleStateMachine' */
  uint8_T s72_motohawk_trigger_DWORK1; /* '<S72>/motohawk_trigger' */
  uint8_T s27_is_c9_BaseEngineController_LS;/* '<S20>/ETC Test  Manager' */
  uint8_T s936_is_c8_BaseEngineController_LS;/* '<S932>/ECUP Latch' */
  boolean_T s547_Memory_PreviousInput; /* '<S547>/Memory' */
  boolean_T s798_InjectorSequence_DWORK1[8];/* '<S798>/Injector Sequence' */
  boolean_T s353_Memory_PreviousInput; /* '<S353>/Memory' */
  boolean_T s356_Memory_PreviousInput; /* '<S356>/Memory' */
  boolean_T s244_Multiplyby10ifnotyetenabled_FirstOutputTime;/* '<S244>/Multiply by 1.0 if not yet enabled' */
  boolean_T s243_Multiplyby10ifnotyetenabled_FirstOutputTime;/* '<S243>/Multiply by 1.0 if not yet enabled' */
  boolean_T s953_Memory_PreviousInput; /* '<S953>/Memory' */
  boolean_T s15_Stall_MODE;            /* '<S15>/Stall' */
  boolean_T s15_Crank_MODE;            /* '<S15>/Crank' */
  boolean_T s397_CaptureSignalAtStartup_MODE;/* '<S397>/Capture Signal At Startup' */
  boolean_T s401_CaptureECTAtStartup_MODE;/* '<S401>/Capture ECT At Startup' */
  boolean_T s15_Run_MODE;              /* '<S15>/Run' */
  boolean_T s22_PassThrough1_MODE;     /* '<S22>/PassThrough1' */
  boolean_T s22_PassThrough3_MODE;     /* '<S22>/PassThrough3' */
  boolean_T s22_SequenceCutMachine_MODE;/* '<S22>/SequenceCutMachine' */
  boolean_T s22_PassThrough5_MODE;     /* '<S22>/PassThrough5' */
  boolean_T s22_PassThrough4_MODE;     /* '<S22>/PassThrough4' */
  boolean_T s401_CaptureIATAtStartup_MODE;/* '<S401>/Capture IAT At Startup' */
  boolean_T s14_ElectronicThrottleController_MODE;/* '<S14>/Electronic Throttle Controller' */
  boolean_T s479_TriggeredSubsystem_MODE;/* '<S479>/Triggered Subsystem' */
  boolean_T s303_MisfireDiagSub_MODE;  /* '<S303>/MisfireDiagSub' */
  boolean_T s160_DeltaTPSTransientFueling_MODE;/* '<S160>/Delta TPS Transient Fueling' */
  boolean_T s165_ECTTransientFueling_MODE;/* '<S165>/ECT Transient Fueling' */
  boolean_T s165_OXYTransientFueling_MODE;/* '<S165>/OXY Transient Fueling' */
  boolean_T s31_PassThrough_MODE;      /* '<S31>/PassThrough' */
  rtDW_CollectAverage_BaseEngineController_LS s444_CollectAverage;/* '<S444>/Collect Average' */
  rtDW_CollectAverage_BaseEngineController_LS s443_CollectAverage;/* '<S443>/Collect Average' */
  rtDW_CollectAverage_BaseEngineController_LS s404_CollectAverage;/* '<S404>/Collect Average' */
} D_Work_BaseEngineController_LS;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState HitCrossing1_Input_ZCE;   /* '<S110>/Hit  Crossing1' */
  ZCSigState ResetTasksCompleteToFalse_Trig_ZCE;/* '<S32>/Reset TasksComplete To False' */
  ZCSigState ResetTasksCompleteToTrue_Trig_ZCE;/* '<S20>/Reset TasksComplete To True' */
  ZCSigState ShutdownpoweronECU565563_Trig_ZCE;/* '<S939>/Shutdown power on ECU565//563' */
  ZCSigState SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE;/* '<S939>/Save NV Vars one tick before MPRD off' */
  ZCSigState ProcessorReboot_Trig_ZCE; /* '<S939>/Processor Reboot' */
  ZCSigState PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE;/* '<S939>/Post Shutdown two ticks before MPRD off' */
  ZCSigState ShutdownpoweronECU565563_Trig_ZCE_l;/* '<S937>/Shutdown power on ECU565//563' */
  ZCSigState SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE_m;/* '<S937>/Save NV Vars one tick before MPRD off' */
  ZCSigState ProcessorReboot_Trig_ZCE_h;/* '<S937>/Processor Reboot' */
  ZCSigState PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE_h;/* '<S937>/Post Shutdown two ticks before MPRD off' */
  ZCSigState Clear_Trig_ZCE;           /* '<S935>/Clear' */
  ZCSigState Clear_Trig_ZCE_k;         /* '<S934>/Clear' */
} PrevZCSigStates_BaseEngineController_LS;

/* Invariant block signals (auto storage) */
typedef struct {
  const real_T s798_Gain4;             /* '<S798>/Gain4' */
  const real_T s95_motohawk_replicate2;/* '<S95>/motohawk_replicate2' */
  const real_T s95_motohawk_replicate[8];/* '<S95>/motohawk_replicate' */
  const uint32_T s798_DataTypeConversion5;/* '<S798>/Data Type Conversion5' */
} ConstBlockIO_BaseEngineController_LS;

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
   *   '<S394>/Combinatorial  Logic'
   *   '<S395>/Combinatorial  Logic'
   *   '<S396>/Combinatorial  Logic'
   *   '<S45>/Combinatorial  Logic'
   *   '<S257>/Combinatorial  Logic'
   *   '<S269>/Combinatorial  Logic'
   */
  boolean_T pooled888[8];

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S953>/Logic'
   *   '<S547>/Logic'
   *   '<S353>/Logic'
   *   '<S356>/Logic'
   */
  boolean_T pooled889[16];
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
 * '<S98>'  : BaseEngineController_LS/Foreground/Control/Controller/Crank/CrankIAC
 * '<S99>'  : BaseEngineController_LS/Foreground/Control/Controller/Crank/IAC Characterization
 * '<S100>' : BaseEngineController_LS/Foreground/Control/Controller/Merge/FuelPump
 * '<S101>' : BaseEngineController_LS/Foreground/Control/Controller/Run/AC Control
 * '<S102>' : BaseEngineController_LS/Foreground/Control/Controller/Run/AirFlow Manager
 * '<S103>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Base Equiv Ratio
 * '<S104>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Boost Control
 * '<S105>' : BaseEngineController_LS/Foreground/Control/Controller/Run/DFCO
 * '<S106>' : BaseEngineController_LS/Foreground/Control/Controller/Run/FAN Control
 * '<S107>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager
 * '<S108>' : BaseEngineController_LS/Foreground/Control/Controller/Run/IAC Characterization
 * '<S109>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor
 * '<S110>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor
 * '<S111>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control
 * '<S112>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Spark Manager
 * '<S113>' : BaseEngineController_LS/Foreground/Control/Controller/Run/AC Control/AC Comp High Pressure
 * '<S114>' : BaseEngineController_LS/Foreground/Control/Controller/Run/AC Control/AC Comp Low Pressure
 * '<S115>' : BaseEngineController_LS/Foreground/Control/Controller/Run/AC Control/AC Comp Overspeed
 * '<S116>' : BaseEngineController_LS/Foreground/Control/Controller/Run/AC Control/AC Comp Overspeed1
 * '<S117>' : BaseEngineController_LS/Foreground/Control/Controller/Run/AC Control/AC Comp Underspeed
 * '<S118>' : BaseEngineController_LS/Foreground/Control/Controller/Run/AC Control/AC Evap Temp Hyst
 * '<S119>' : BaseEngineController_LS/Foreground/Control/Controller/Run/AC Control/AC Comp High Pressure/Hysteresis
 * '<S120>' : BaseEngineController_LS/Foreground/Control/Controller/Run/AC Control/AC Comp Low Pressure/Hysteresis
 * '<S121>' : BaseEngineController_LS/Foreground/Control/Controller/Run/AC Control/AC Comp Overspeed/Hysteresis
 * '<S122>' : BaseEngineController_LS/Foreground/Control/Controller/Run/AC Control/AC Comp Overspeed1/Hysteresis
 * '<S123>' : BaseEngineController_LS/Foreground/Control/Controller/Run/AC Control/AC Comp Underspeed/Hysteresis
 * '<S124>' : BaseEngineController_LS/Foreground/Control/Controller/Run/AC Control/AC Evap Temp Hyst/Hysteresis
 * '<S125>' : BaseEngineController_LS/Foreground/Control/Controller/Run/AirFlow Manager/Saturation
 * '<S126>' : BaseEngineController_LS/Foreground/Control/Controller/Run/AirFlow Manager/ShutDownTasksComplete Reset
 * '<S127>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Base Equiv Ratio/Warm Up Fuel Holdoff
 * '<S128>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Base Equiv Ratio/motohawk_override_abs
 * '<S129>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Base Equiv Ratio/motohawk_override_abs/NewValue
 * '<S130>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Base Equiv Ratio/motohawk_override_abs/OldValue
 * '<S131>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Boost Control/BoostControl Adapt
 * '<S132>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Boost Control/Universal PID (Tunable & Scheduled)
 * '<S133>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Boost Control/Variable Rate Limiter
 * '<S134>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Boost Control/BoostControl Adapt/Adapt Boost Table
 * '<S135>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Boost Control/BoostControl Adapt/BoostControl Enable Delay
 * '<S136>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Boost Control/BoostControl Adapt/Saturation (Tunable)
 * '<S137>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Boost Control/BoostControl Adapt/BoostControl Enable Delay/Time Since Enabled (With Input)1
 * '<S138>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Boost Control/BoostControl Adapt/Saturation (Tunable)/Saturation
 * '<S139>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Boost Control/Universal PID (Tunable & Scheduled)/PID Gain Select1
 * '<S140>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Boost Control/Universal PID (Tunable & Scheduled)/Saturation
 * '<S141>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Boost Control/Universal PID (Tunable & Scheduled)/Universal PID
 * '<S142>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Boost Control/Universal PID (Tunable & Scheduled)/Universal PID/Derivitive3
 * '<S143>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Boost Control/Universal PID (Tunable & Scheduled)/Universal PID/Integrator
 * '<S144>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Boost Control/Universal PID (Tunable & Scheduled)/Universal PID/Model Info
 * '<S145>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Boost Control/Universal PID (Tunable & Scheduled)/Universal PID/Integrator/Saturation
 * '<S146>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Boost Control/Variable Rate Limiter/Saturation
 * '<S147>' : BaseEngineController_LS/Foreground/Control/Controller/Run/DFCO/DesEquivRatioMod
 * '<S148>' : BaseEngineController_LS/Foreground/Control/Controller/Run/DFCO/DesEquivRatioMod/Handoff Alpha
 * '<S149>' : BaseEngineController_LS/Foreground/Control/Controller/Run/DFCO/DesEquivRatioMod/Hysteresis
 * '<S150>' : BaseEngineController_LS/Foreground/Control/Controller/Run/DFCO/DesEquivRatioMod/Time Since Enabled (With Input)1
 * '<S151>' : BaseEngineController_LS/Foreground/Control/Controller/Run/DFCO/DesEquivRatioMod/Handoff Alpha/Saturation
 * '<S152>' : BaseEngineController_LS/Foreground/Control/Controller/Run/FAN Control/Hysterisis
 * '<S153>' : BaseEngineController_LS/Foreground/Control/Controller/Run/FAN Control/Hysterisis1
 * '<S154>' : BaseEngineController_LS/Foreground/Control/Controller/Run/FAN Control/Hysterisis2
 * '<S155>' : BaseEngineController_LS/Foreground/Control/Controller/Run/FAN Control/Hysterisis/Hysteresis
 * '<S156>' : BaseEngineController_LS/Foreground/Control/Controller/Run/FAN Control/Hysterisis1/Hysteresis
 * '<S157>' : BaseEngineController_LS/Foreground/Control/Controller/Run/FAN Control/Hysterisis2/Hysteresis
 * '<S158>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/DesiredFuelCalc
 * '<S159>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Fuel Calculation
 * '<S160>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager
 * '<S161>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt
 * '<S162>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Fuel Calculation/Calculate Fuel Flow
 * '<S163>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Fuel Calculation/Calculate Fuel Flow/Calculate A//F Ratio
 * '<S164>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Fuel Calculation/Calculate Fuel Flow/Calculate A//F Ratio/motohawk_table_1d
 * '<S165>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling
 * '<S166>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Mass Flow to Charge Mass Transform
 * '<S167>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling/CompareTo1
 * '<S168>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling/CompareTo2
 * '<S169>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling/ECT Transient Fueling
 * '<S170>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling/First Order Low Pass (Tunable)
 * '<S171>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling/First Order Low Pass (Tunable)1
 * '<S172>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling/OXY Transient Fueling
 * '<S173>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S174>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling/First Order Low Pass (Tunable)1/First Order Low Pass
 * '<S175>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Mass Flow to Charge Mass Transform/Multiply and Divide, avoiding divde by zero
 * '<S176>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Mass Flow to Charge Mass Transform/NonZero RPM
 * '<S177>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/Adapt FuelFlowComp Map Bank A
 * '<S178>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/Adapt FuelFlowComp Map Bank B
 * '<S179>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/O2 Control Enable Delay
 * '<S180>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/Saturation (Tunable)
 * '<S181>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/Saturation (Tunable)1
 * '<S182>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/WarmUp Disable
 * '<S183>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/O2 Control Enable Delay/Time Since Enabled (With Input)1
 * '<S184>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/Saturation (Tunable)/Saturation
 * '<S185>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/Saturation (Tunable)1/Saturation
 * '<S186>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/I-Term Preload
 * '<S187>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/MaxGovState
 * '<S188>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Ramp RPM
 * '<S189>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Trigger Pre-load
 * '<S190>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)
 * '<S191>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/MaxGovState/MaxGOV Stateflow
 * '<S192>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Trigger Pre-load/InGear
 * '<S193>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Trigger Pre-load/InNeutral
 * '<S194>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Trigger Pre-load/InGear/Saturation
 * '<S195>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Trigger Pre-load/InNeutral/Saturation
 * '<S196>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Saturation
 * '<S197>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Universal PID
 * '<S198>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Derivitive3
 * '<S199>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Integrator
 * '<S200>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Model Info
 * '<S201>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Integrator/Saturation
 * '<S202>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/AiflowOffset
 * '<S203>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Base Airflow Table Adapt
 * '<S204>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Base RPM Set Pt
 * '<S205>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Handoff Alpha
 * '<S206>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination
 * '<S207>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/MotoringDetection
 * '<S208>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/OnIdle State
 * '<S209>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Ramp RPM
 * '<S210>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PD (Tunable & Scheduled)
 * '<S211>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)
 * '<S212>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/AiflowOffset/Ramp Air Into Idle State
 * '<S213>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/AiflowOffset/Run
 * '<S214>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Base Airflow Table Adapt/Adapt Base Airflow Table
 * '<S215>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Base Airflow Table Adapt/Idle Control Enable Delay
 * '<S216>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Base Airflow Table Adapt/Saturation (Tunable)
 * '<S217>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Base Airflow Table Adapt/Idle Control Enable Delay/Time Since Enabled (With Input)1
 * '<S218>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Base Airflow Table Adapt/Saturation (Tunable)/Saturation
 * '<S219>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Handoff Alpha/Saturation
 * '<S220>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/Determine if RPM is Falling
 * '<S221>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/IdleStateMachine
 * '<S222>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/OnIdle State
 * '<S223>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/Time Since Enabled (With Input)1
 * '<S224>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/Determine if RPM is Falling/Derivitive
 * '<S225>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/Determine if RPM is Falling/First Order Low Pass (Tunable)
 * '<S226>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/Determine if RPM is Falling/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S227>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/MotoringDetection/Time Since Enabled (With Input)2
 * '<S228>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PD (Tunable & Scheduled)/PID Gain Select
 * '<S229>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PD (Tunable & Scheduled)/Saturation
 * '<S230>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PD (Tunable & Scheduled)/Universal PD
 * '<S231>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PD (Tunable & Scheduled)/Universal PD/Derivitive
 * '<S232>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PD (Tunable & Scheduled)/Universal PD/Model Info
 * '<S233>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/PID Gain Select1
 * '<S234>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/Saturation
 * '<S235>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/Universal PID
 * '<S236>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Derivitive3
 * '<S237>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Integrator
 * '<S238>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Model Info
 * '<S239>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Integrator/Saturation
 * '<S240>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/Map O2 Sensors to V8 Cylinders
 * '<S241>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 Control State Determination
 * '<S242>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Calibrations
 * '<S243>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank A
 * '<S244>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank B
 * '<S245>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2Arb
 * '<S246>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2Disable
 * '<S247>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Calibrations/Error Gain Scheduling
 * '<S248>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Calibrations/O2 Control Switch Point Maps
 * '<S249>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank A/Closed-Loop O2 PID Controller
 * '<S250>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank A/Equivalence Ratio Perturbation
 * '<S251>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank A/Closed-Loop O2 PID Controller/Saturation
 * '<S252>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank A/Closed-Loop O2 PID Controller/Universal PID
 * '<S253>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank A/Closed-Loop O2 PID Controller/Universal PID/Derivitive3
 * '<S254>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank A/Closed-Loop O2 PID Controller/Universal PID/Integrator
 * '<S255>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank A/Closed-Loop O2 PID Controller/Universal PID/Model Info
 * '<S256>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank A/Closed-Loop O2 PID Controller/Universal PID/Integrator/Saturation
 * '<S257>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank A/Equivalence Ratio Perturbation/Hysteresis
 * '<S258>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank A/Equivalence Ratio Perturbation/Time Since Enabled (With Input)1
 * '<S259>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank A/Equivalence Ratio Perturbation/Time Since Enabled (With Input)2
 * '<S260>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank A/Equivalence Ratio Perturbation/Time Since Enabled (With Input)3
 * '<S261>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank B/Closed-Loop O2 PID Controller
 * '<S262>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank B/Equivalence Ratio Perturbation
 * '<S263>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank B/Closed-Loop O2 PID Controller/Saturation
 * '<S264>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank B/Closed-Loop O2 PID Controller/Universal PID
 * '<S265>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank B/Closed-Loop O2 PID Controller/Universal PID/Derivitive3
 * '<S266>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank B/Closed-Loop O2 PID Controller/Universal PID/Integrator
 * '<S267>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank B/Closed-Loop O2 PID Controller/Universal PID/Model Info
 * '<S268>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank B/Closed-Loop O2 PID Controller/Universal PID/Integrator/Saturation
 * '<S269>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank B/Equivalence Ratio Perturbation/Hysteresis
 * '<S270>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank B/Equivalence Ratio Perturbation/Time Since Enabled (With Input)1
 * '<S271>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank B/Equivalence Ratio Perturbation/Time Since Enabled (With Input)2
 * '<S272>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank B/Equivalence Ratio Perturbation/Time Since Enabled (With Input)3
 * '<S273>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Spark Manager/Desired Eq Ratio Offset
 * '<S274>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Spark Manager/Ethanol Spark Offset
 * '<S275>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Spark Manager/Spark Advance Rate Limiter
 * '<S276>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Spark Manager/SparkAdvanceLimiter
 * '<S277>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Spark Manager/Temp Comp Offset
 * '<S278>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Spark Manager/Spark Advance Rate Limiter/First Time
 * '<S279>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Spark Manager/Spark Advance Rate Limiter/Saturation
 * '<S280>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Spark Manager/SparkAdvanceLimiter/Saturation
 * '<S281>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/FAN Control
 * '<S282>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/Fuel Pump at Startup
 * '<S283>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/Stall Throttle
 * '<S284>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/FAN Control/Hysterisis
 * '<S285>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/FAN Control/Hysterisis1
 * '<S286>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/FAN Control/Hysterisis2
 * '<S287>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/FAN Control/Hysterisis/Hysteresis
 * '<S288>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/FAN Control/Hysterisis1/Hysteresis
 * '<S289>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/FAN Control/Hysterisis2/Hysteresis
 * '<S290>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/Fuel Pump at Startup/Time Since Enabled
 * '<S291>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/Stall Throttle/Ice Break
 * '<S292>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/Stall Throttle/Time Since Enabled (With Input)2
 * '<S293>' : BaseEngineController_LS/Foreground/Control/Diagnostics/AC Fault
 * '<S294>' : BaseEngineController_LS/Foreground/Control/Diagnostics/AirFlow
 * '<S295>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Boost Fault
 * '<S296>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Digital Sensors
 * '<S297>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Engine Overheat Fault Logic
 * '<S298>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Fuel Economy
 * '<S299>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Lean Protect
 * '<S300>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Low Oil Pressure Fault Logic
 * '<S301>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Low Voltage
 * '<S302>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MAP Fault Logic
 * '<S303>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE
 * '<S304>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor
 * '<S305>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection
 * '<S306>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Wrong Fuel Pressure Fault Logic
 * '<S307>' : BaseEngineController_LS/Foreground/Control/Diagnostics/AC Fault/Run State
 * '<S308>' : BaseEngineController_LS/Foreground/Control/Diagnostics/AirFlow/Run State
 * '<S309>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Boost Fault/Run State
 * '<S310>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Digital Sensors/Time Since Enabled (With Input)2
 * '<S311>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Digital Sensors/Time Since Enabled (With Input)3
 * '<S312>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Engine Overheat Fault Logic/Run State
 * '<S313>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Fuel Economy/Calculate Fuel Density
 * '<S314>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Fuel Economy/First Order Low Pass (Tunable)
 * '<S315>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Fuel Economy/Multiply and Divide, avoiding divde by zero1
 * '<S316>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Fuel Economy/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S317>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Lean Protect/Run State
 * '<S318>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Low Oil Pressure Fault Logic/Run State
 * '<S319>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Low Voltage/Run State
 * '<S320>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Low Voltage/Run State1
 * '<S321>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Low Voltage/Run State2
 * '<S322>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Low Voltage/Run State3
 * '<S323>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MAP Fault Logic/Run State
 * '<S324>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub
 * '<S325>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/Run State
 * '<S326>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc
 * '<S327>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/DetermineMisfire
 * '<S328>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/StoreRPMData
 * '<S329>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/DetermineMisfire/Compare To Constant
 * '<S330>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/DetermineMisfire/DetermineCylinder
 * '<S331>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/DetermineMisfire/Rising Edge
 * '<S332>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/DetermineMisfire/SetHardFault
 * '<S333>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/DetermineMisfire/SetHardFault/Compare To Constant
 * '<S334>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/DetermineMisfire/SetHardFault/Compare To Constant1
 * '<S335>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/DetermineMisfire/SetHardFault/Compare To Constant2
 * '<S336>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/DetermineMisfire/SetHardFault/Compare To Constant3
 * '<S337>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/DetermineMisfire/SetHardFault/Compare To Constant4
 * '<S338>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/DetermineMisfire/SetHardFault/Compare To Constant5
 * '<S339>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/DetermineMisfire/SetHardFault/Compare To Constant6
 * '<S340>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/DetermineMisfire/SetHardFault/Compare To Constant7
 * '<S341>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/StoreRPMData/DetermineCylinder
 * '<S342>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/StoreRPMData/DetermineCylinder1
 * '<S343>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/StoreRPMData/EncoderAngleArb
 * '<S344>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/StoreRPMData/LatchForAverage
 * '<S345>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/StoreRPMData/LatchForAverage1
 * '<S346>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/StoreRPMData/StoreRPMStart
 * '<S347>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/StoreRPMData/StoreRPMStart1
 * '<S348>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/StoreRPMData/EncoderAngleArb/EncoderAngle_wExtrap
 * '<S349>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/StoreRPMData/EncoderAngleArb/EncoderAngle_wOExtrap
 * '<S350>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/StoreRPMData/EncoderAngleArb/EncoderAngle_wExtrap/motohawk_encoder_angle_extrapolation
 * '<S351>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/StoreRPMData/EncoderAngleArb/EncoderAngle_wExtrap/motohawk_encoder_angle_extrapolation/Tooth Time
 * '<S352>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/StoreRPMData/LatchForAverage/GetInstRPM
 * '<S353>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/StoreRPMData/LatchForAverage/S-R Flip-Flop
 * '<S354>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/StoreRPMData/LatchForAverage/SafeDivide
 * '<S355>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/StoreRPMData/LatchForAverage1/GetInstRPM
 * '<S356>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/StoreRPMData/LatchForAverage1/S-R Flip-Flop
 * '<S357>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/StoreRPMData/LatchForAverage1/SafeDivide
 * '<S358>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/Bank2Bank
 * '<S359>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorStatus
 * '<S360>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorVolt
 * '<S361>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/Bank2Bank/Run State
 * '<S362>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorStatus/Run State1
 * '<S363>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorStatus/Run State10
 * '<S364>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorStatus/Run State11
 * '<S365>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorStatus/Run State12
 * '<S366>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorStatus/Run State13
 * '<S367>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorStatus/Run State14
 * '<S368>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorStatus/Run State15
 * '<S369>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorStatus/Run State16
 * '<S370>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorStatus/Run State2
 * '<S371>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorStatus/Run State3
 * '<S372>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorStatus/Run State4
 * '<S373>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorStatus/Run State5
 * '<S374>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorStatus/Run State6
 * '<S375>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorStatus/Run State7
 * '<S376>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorStatus/Run State8
 * '<S377>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorStatus/Run State9
 * '<S378>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorStatus/Time Since Enabled (With Input)1
 * '<S379>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorStatus/Time Since Enabled (With Input)2
 * '<S380>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorStatus/Time Since Enabled (With Input)3
 * '<S381>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorStatus/Time Since Enabled (With Input)4
 * '<S382>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorVolt/Run State
 * '<S383>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorVolt/Run State1
 * '<S384>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorVolt/Run State2
 * '<S385>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorVolt/Run State3
 * '<S386>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorVolt/Run State4
 * '<S387>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorVolt/Run State5
 * '<S388>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorVolt/Run State6
 * '<S389>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorVolt/Run State7
 * '<S390>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/BaseRevLimit
 * '<S391>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/BaseRevLimit/Hysterisis
 * '<S392>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/BaseRevLimit/Hysterisis1
 * '<S393>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/BaseRevLimit/Hysterisis2
 * '<S394>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/BaseRevLimit/Hysterisis/Hysteresis
 * '<S395>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/BaseRevLimit/Hysterisis1/Hysteresis
 * '<S396>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/BaseRevLimit/Hysterisis2/Hysteresis
 * '<S397>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs
 * '<S398>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/FuelLevel
 * '<S399>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs
 * '<S400>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes
 * '<S401>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed
 * '<S402>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Virtual Indexes
 * '<S403>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Baro Stall State Delay
 * '<S404>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Capture Signal At Startup
 * '<S405>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Running Baro Learn
 * '<S406>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Speed Density - MAP Referenced - Adaptive
 * '<S407>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/motohawk_override_rel
 * '<S408>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Capture Signal At Startup/Collect Average
 * '<S409>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Running Baro Learn/Compare To Constant
 * '<S410>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Running Baro Learn/Time Since Enabled (With Input)1
 * '<S411>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Speed Density - MAP Referenced - Adaptive/Adapt VolEff Map
 * '<S412>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Speed Density - MAP Referenced - Adaptive/C to K1
 * '<S413>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Speed Density - MAP Referenced - Adaptive/Compare To Constant
 * '<S414>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Speed Density - MAP Referenced - Adaptive/Adapt VolEff Map/motohawk_table_1d
 * '<S415>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/motohawk_override_rel/NewValue
 * '<S416>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/motohawk_override_rel/OldValue
 * '<S417>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/FuelLevel/First Order Low Pass
 * '<S418>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/FuelLevel/FuelLevelWrite
 * '<S419>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/FuelLevel/RefuelEvent
 * '<S420>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/FuelLevel/motohawk_table_2d
 * '<S421>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/FuelLevel/RefuelEvent/Rising Edge
 * '<S422>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag
 * '<S423>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect1
 * '<S424>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect3
 * '<S425>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect1/DecreasingFilter
 * '<S426>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect1/First Order Low Pass
 * '<S427>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect1/IncreasingFilter
 * '<S428>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect3/DecreasingFilter
 * '<S429>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect3/First Order Low Pass
 * '<S430>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect3/IncreasingFilter
 * '<S431>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/ACPres Index
 * '<S432>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/CAT Index
 * '<S433>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/ECT Index
 * '<S434>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/IAT Indexes
 * '<S435>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/MAP Indexes
 * '<S436>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/OXY Index
 * '<S437>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/RPM Indexes
 * '<S438>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/SysVolt Index
 * '<S439>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/TPS Indexes
 * '<S440>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/VSPD Index
 * '<S441>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/APP  Sensor Arbitration1
 * '<S442>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request
 * '<S443>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Capture ECT At Startup
 * '<S444>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Capture IAT At Startup
 * '<S445>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/CutThrottle APP Limiting
 * '<S446>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Engine Accel
 * '<S447>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/EngineState
 * '<S448>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Fuel Delta Pressure Calculation
 * '<S449>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Gear Estimator
 * '<S450>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/O2 De-lag
 * '<S451>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Stall
 * '<S452>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/TPS  Sensor Arbitration
 * '<S453>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Time Since Key On
 * '<S454>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Time Since Run
 * '<S455>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Time Since Stall
 * '<S456>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/VSPD_Selector
 * '<S457>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request/First Order Low Pass
 * '<S458>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request/PassThrough1
 * '<S459>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request/PassThrough2
 * '<S460>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request/Variable Rate Limiter
 * '<S461>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request/Variable Rate Limiter/Saturation
 * '<S462>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Capture ECT At Startup/Collect Average
 * '<S463>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Capture IAT At Startup/Collect Average
 * '<S464>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/CutThrottle APP Limiting/Bound APP if overheating
 * '<S465>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Engine Accel/Derivitive3
 * '<S466>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Engine Accel/First Order Low Pass (Tunable)
 * '<S467>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Engine Accel/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S468>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/EngineState/Engine State Machine
 * '<S469>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/EngineState/TDC_Counter
 * '<S470>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/EngineState/TDC_Counter/Crank State
 * '<S471>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Time Since Key On/Time Since Enabled (With Input)2
 * '<S472>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Time Since Run/RunState
 * '<S473>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Time Since Run/Time Since Enabled (With Input)2
 * '<S474>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Time Since Stall/Stall State
 * '<S475>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Time Since Stall/Time Since Enabled (With Input)1
 * '<S476>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Virtual Indexes/ECT_KeyUp
 * '<S477>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Virtual Indexes/IAT_KeyUp
 * '<S478>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Virtual Indexes/MAFPortIndex
 * '<S479>' : BaseEngineController_LS/Foreground/Control/motohawk_function_collector/motohawk_function_collector_in
 * '<S480>' : BaseEngineController_LS/Foreground/Control/motohawk_function_collector/motohawk_function_collector_in/Triggered Subsystem
 * '<S481>' : BaseEngineController_LS/Foreground/Inputs/CAN
 * '<S482>' : BaseEngineController_LS/Foreground/Inputs/Digital
 * '<S483>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed
 * '<S484>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors
 * '<S485>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors
 * '<S486>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors
 * '<S487>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS
 * '<S488>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda
 * '<S489>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization
 * '<S490>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization1
 * '<S491>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization/First Order Low Pass
 * '<S492>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization/If Action Subsystem
 * '<S493>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization/If Action Subsystem1
 * '<S494>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization/If Action Subsystem2
 * '<S495>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization/Override
 * '<S496>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization/First Order Low Pass/First Order Low Pass
 * '<S497>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization/Override/NewValue
 * '<S498>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization/Override/OldValue
 * '<S499>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization1/First Order Low Pass
 * '<S500>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization1/If Action Subsystem
 * '<S501>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization1/If Action Subsystem1
 * '<S502>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization1/If Action Subsystem2
 * '<S503>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization1/Override
 * '<S504>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization1/First Order Low Pass/First Order Low Pass
 * '<S505>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization1/Override/NewValue
 * '<S506>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization1/Override/OldValue
 * '<S507>' : BaseEngineController_LS/Foreground/Inputs/Digital/ACSw
 * '<S508>' : BaseEngineController_LS/Foreground/Inputs/Digital/ClutchSw
 * '<S509>' : BaseEngineController_LS/Foreground/Inputs/Digital/ESTOP
 * '<S510>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor
 * '<S511>' : BaseEngineController_LS/Foreground/Inputs/Digital/Scramble
 * '<S512>' : BaseEngineController_LS/Foreground/Inputs/Digital/VSPD
 * '<S513>' : BaseEngineController_LS/Foreground/Inputs/Digital/VSPD_Filt
 * '<S514>' : BaseEngineController_LS/Foreground/Inputs/Digital/ACSw /Override in Engineering Units
 * '<S515>' : BaseEngineController_LS/Foreground/Inputs/Digital/ACSw /Override in Engineering Units/NewValue
 * '<S516>' : BaseEngineController_LS/Foreground/Inputs/Digital/ACSw /Override in Engineering Units/OldValue
 * '<S517>' : BaseEngineController_LS/Foreground/Inputs/Digital/ClutchSw/Override in Engineering Units
 * '<S518>' : BaseEngineController_LS/Foreground/Inputs/Digital/ClutchSw/Override in Engineering Units/NewValue
 * '<S519>' : BaseEngineController_LS/Foreground/Inputs/Digital/ClutchSw/Override in Engineering Units/OldValue
 * '<S520>' : BaseEngineController_LS/Foreground/Inputs/Digital/ESTOP/Override in Engineering Units
 * '<S521>' : BaseEngineController_LS/Foreground/Inputs/Digital/ESTOP/Override in Engineering Units/NewValue
 * '<S522>' : BaseEngineController_LS/Foreground/Inputs/Digital/ESTOP/Override in Engineering Units/OldValue
 * '<S523>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor/First Order Low Pass
 * '<S524>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor/If Action Subsystem
 * '<S525>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor/If Action Subsystem1
 * '<S526>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor/If Action Subsystem2
 * '<S527>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor/Override
 * '<S528>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor/motohawk_table_1d1
 * '<S529>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor/First Order Low Pass/First Order Low Pass
 * '<S530>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor/Override/NewValue
 * '<S531>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor/Override/OldValue
 * '<S532>' : BaseEngineController_LS/Foreground/Inputs/Digital/Scramble /Button Delay 1
 * '<S533>' : BaseEngineController_LS/Foreground/Inputs/Digital/Scramble /Override in Engineering Units
 * '<S534>' : BaseEngineController_LS/Foreground/Inputs/Digital/Scramble /Button Delay 1/Time Since Enabled (With Input)4
 * '<S535>' : BaseEngineController_LS/Foreground/Inputs/Digital/Scramble /Override in Engineering Units/NewValue
 * '<S536>' : BaseEngineController_LS/Foreground/Inputs/Digital/Scramble /Override in Engineering Units/OldValue
 * '<S537>' : BaseEngineController_LS/Foreground/Inputs/Digital/VSPD/First Order Low Pass
 * '<S538>' : BaseEngineController_LS/Foreground/Inputs/Digital/VSPD/If Action Subsystem
 * '<S539>' : BaseEngineController_LS/Foreground/Inputs/Digital/VSPD/If Action Subsystem1
 * '<S540>' : BaseEngineController_LS/Foreground/Inputs/Digital/VSPD/If Action Subsystem2
 * '<S541>' : BaseEngineController_LS/Foreground/Inputs/Digital/VSPD/Override
 * '<S542>' : BaseEngineController_LS/Foreground/Inputs/Digital/VSPD/motohawk_table_1d1
 * '<S543>' : BaseEngineController_LS/Foreground/Inputs/Digital/VSPD/First Order Low Pass/First Order Low Pass
 * '<S544>' : BaseEngineController_LS/Foreground/Inputs/Digital/VSPD/Override/NewValue
 * '<S545>' : BaseEngineController_LS/Foreground/Inputs/Digital/VSPD/Override/OldValue
 * '<S546>' : BaseEngineController_LS/Foreground/Inputs/Digital/VSPD_Filt/Derivitive
 * '<S547>' : BaseEngineController_LS/Foreground/Inputs/Digital/VSPD_Filt/S-R Flip-Flop
 * '<S548>' : BaseEngineController_LS/Foreground/Inputs/Digital/VSPD_Filt/Time Since Enabled (With Input)1
 * '<S549>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed/Encoder Diagnostics
 * '<S550>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed/First Order Low Pass (Tunable)1
 * '<S551>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/CamEdges
 * '<S552>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/CamSync
 * '<S553>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/CounterThresh
 * '<S554>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/CrankEdges
 * '<S555>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/CrankSync
 * '<S556>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/motohawk_model_probe_eval_f
 * '<S557>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed/First Order Low Pass (Tunable)1/First Order Low Pass
 * '<S558>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/ACPres
 * '<S559>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor
 * '<S560>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelPres
 * '<S561>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP
 * '<S562>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAPTime
 * '<S563>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP_Crank_Synchronous
 * '<S564>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/OilPres
 * '<S565>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SensVolts
 * '<S566>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SysVolts
 * '<S567>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/ACPres /First Order Low Pass
 * '<S568>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/ACPres /If Action Subsystem
 * '<S569>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/ACPres /If Action Subsystem1
 * '<S570>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/ACPres /If Action Subsystem2
 * '<S571>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/ACPres /Override
 * '<S572>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/ACPres /First Order Low Pass/First Order Low Pass
 * '<S573>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/ACPres /Override/NewValue
 * '<S574>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/ACPres /Override/OldValue
 * '<S575>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options
 * '<S576>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/If Action Subsystem
 * '<S577>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/If Action Subsystem1
 * '<S578>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/If Action Subsystem2
 * '<S579>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Override
 * '<S580>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options/First Order Low Pass
 * '<S581>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options/Moving Average Filter
 * '<S582>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options/Rate Limiter
 * '<S583>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options/First Order Low Pass/First Order Low Pass
 * '<S584>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options/Rate Limiter/Variable Rate Limiter
 * '<S585>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options/Rate Limiter/Variable Rate Limiter/Saturation
 * '<S586>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Override/NewValue
 * '<S587>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Override/OldValue
 * '<S588>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelPres/First Order Low Pass
 * '<S589>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelPres/If Action Subsystem
 * '<S590>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelPres/If Action Subsystem1
 * '<S591>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelPres/If Action Subsystem2
 * '<S592>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelPres/Override
 * '<S593>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelPres/First Order Low Pass/First Order Low Pass
 * '<S594>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelPres/Override/NewValue
 * '<S595>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelPres/Override/OldValue
 * '<S596>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP/First Order Low Pass
 * '<S597>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP/If Action Subsystem
 * '<S598>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP/If Action Subsystem1
 * '<S599>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP/If Action Subsystem2
 * '<S600>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP/Override
 * '<S601>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP/First Order Low Pass/First Order Low Pass
 * '<S602>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP/Override/NewValue
 * '<S603>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP/Override/OldValue
 * '<S604>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAPTime/First Order Low Pass
 * '<S605>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAPTime/If Action Subsystem
 * '<S606>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAPTime/If Action Subsystem1
 * '<S607>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAPTime/If Action Subsystem2
 * '<S608>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAPTime/Override
 * '<S609>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAPTime/First Order Low Pass/First Order Low Pass
 * '<S610>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAPTime/Override/NewValue
 * '<S611>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAPTime/Override/OldValue
 * '<S612>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP_Crank_Synchronous/MID_TDC
 * '<S613>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP_Crank_Synchronous/Once at Startup
 * '<S614>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/OilPres/First Order Low Pass
 * '<S615>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/OilPres/If Action Subsystem
 * '<S616>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/OilPres/If Action Subsystem1
 * '<S617>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/OilPres/If Action Subsystem2
 * '<S618>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/OilPres/Override
 * '<S619>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/OilPres/First Order Low Pass/First Order Low Pass
 * '<S620>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/OilPres/Override/NewValue
 * '<S621>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/OilPres/Override/OldValue
 * '<S622>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SensVolts/First Order Low Pass
 * '<S623>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SensVolts/If Action Subsystem
 * '<S624>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SensVolts/If Action Subsystem1
 * '<S625>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SensVolts/If Action Subsystem2
 * '<S626>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SensVolts/Override
 * '<S627>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SensVolts/First Order Low Pass/First Order Low Pass
 * '<S628>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SensVolts/Override/NewValue
 * '<S629>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SensVolts/Override/OldValue
 * '<S630>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SysVolts/First Order Low Pass
 * '<S631>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SysVolts/If Action Subsystem
 * '<S632>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SysVolts/If Action Subsystem1
 * '<S633>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SysVolts/If Action Subsystem2
 * '<S634>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SysVolts/Override
 * '<S635>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SysVolts/First Order Low Pass/First Order Low Pass
 * '<S636>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SysVolts/Override/NewValue
 * '<S637>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SysVolts/Override/OldValue
 * '<S638>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Fuel Level
 * '<S639>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors
 * '<S640>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Fuel Level/Fuel_Lvl
 * '<S641>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Fuel Level/Fuel_Lvl  /First Order Low Pass
 * '<S642>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Fuel Level/Fuel_Lvl  /If Action Subsystem
 * '<S643>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Fuel Level/Fuel_Lvl  /If Action Subsystem1
 * '<S644>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Fuel Level/Fuel_Lvl  /If Action Subsystem2
 * '<S645>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Fuel Level/Fuel_Lvl  /Override
 * '<S646>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Fuel Level/Fuel_Lvl  /motohawk_table_1d1
 * '<S647>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Fuel Level/Fuel_Lvl  /First Order Low Pass/First Order Low Pass
 * '<S648>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Fuel Level/Fuel_Lvl  /Override/NewValue
 * '<S649>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Fuel Level/Fuel_Lvl  /Override/OldValue
 * '<S650>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/CAT1
 * '<S651>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT
 * '<S652>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP
 * '<S653>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT
 * '<S654>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/CAT1/First Order Low Pass
 * '<S655>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/CAT1/If Action Subsystem
 * '<S656>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/CAT1/If Action Subsystem1
 * '<S657>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/CAT1/If Action Subsystem2
 * '<S658>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/CAT1/Override
 * '<S659>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/CAT1/motohawk_table_1d1
 * '<S660>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/CAT1/First Order Low Pass/First Order Low Pass
 * '<S661>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/CAT1/Override/NewValue
 * '<S662>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/CAT1/Override/OldValue
 * '<S663>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /First Order Low Pass
 * '<S664>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /If Action Subsystem
 * '<S665>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /If Action Subsystem1
 * '<S666>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /If Action Subsystem2
 * '<S667>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /Override
 * '<S668>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /motohawk_table_1d1
 * '<S669>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /First Order Low Pass/First Order Low Pass
 * '<S670>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /Override/NewValue
 * '<S671>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /Override/OldValue
 * '<S672>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /First Order Low Pass
 * '<S673>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /If Action Subsystem
 * '<S674>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /If Action Subsystem1
 * '<S675>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /If Action Subsystem2
 * '<S676>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /Override
 * '<S677>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /motohawk_table_1d1
 * '<S678>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /First Order Low Pass/First Order Low Pass
 * '<S679>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /Override/NewValue
 * '<S680>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /Override/OldValue
 * '<S681>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /First Order Low Pass
 * '<S682>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /If Action Subsystem
 * '<S683>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /If Action Subsystem1
 * '<S684>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /If Action Subsystem2
 * '<S685>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /Override
 * '<S686>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /motohawk_table_1d1
 * '<S687>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /First Order Low Pass/First Order Low Pass
 * '<S688>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /Override/NewValue
 * '<S689>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /Override/OldValue
 * '<S690>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1
 * '<S691>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1ForcedAdapt
 * '<S692>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2
 * '<S693>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2ForcedAdapt
 * '<S694>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt
 * '<S695>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1
 * '<S696>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1
 * '<S697>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2
 * '<S698>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1/First Order Low Pass
 * '<S699>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1/If Action Subsystem
 * '<S700>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1/If Action Subsystem1
 * '<S701>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1/If Action Subsystem2
 * '<S702>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1/Override
 * '<S703>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1/Saturation
 * '<S704>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1/motohawk_table_1d1
 * '<S705>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1/First Order Low Pass/First Order Low Pass
 * '<S706>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1/Override/NewValue
 * '<S707>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1/Override/OldValue
 * '<S708>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1ForcedAdapt/Function-Call Subsystem
 * '<S709>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1ForcedAdapt/Function-Call Subsystem/First Time
 * '<S710>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2/First Order Low Pass
 * '<S711>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2/If Action Subsystem
 * '<S712>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2/If Action Subsystem1
 * '<S713>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2/If Action Subsystem2
 * '<S714>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2/Override
 * '<S715>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2/Saturation
 * '<S716>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2/motohawk_table_1d1
 * '<S717>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2/First Order Low Pass/First Order Low Pass
 * '<S718>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2/Override/NewValue
 * '<S719>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2/Override/OldValue
 * '<S720>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2ForcedAdapt/Function-Call Subsystem
 * '<S721>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2ForcedAdapt/Function-Call Subsystem/First Time
 * '<S722>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/ADAPT SCALING
 * '<S723>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/FAULTS
 * '<S724>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/First Order Low Pass
 * '<S725>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/SENSOR FAULT MANAGER
 * '<S726>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/Saturation
 * '<S727>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/ADAPT SCALING/ADAPT HI
 * '<S728>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/ADAPT SCALING/ADAPT LO
 * '<S729>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/ADAPT SCALING/MinMaxFilter
 * '<S730>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/ADAPT SCALING/ADAPT HI/Store Current Position
 * '<S731>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/ADAPT SCALING/ADAPT LO/Store Current Position
 * '<S732>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/First Order Low Pass/First Order Low Pass
 * '<S733>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/SENSOR FAULT MANAGER/If Action Subsystem
 * '<S734>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/SENSOR FAULT MANAGER/If Action Subsystem1
 * '<S735>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/SENSOR FAULT MANAGER/If Action Subsystem2
 * '<S736>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/SENSOR FAULT MANAGER/Override
 * '<S737>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/SENSOR FAULT MANAGER/Override/NewValue
 * '<S738>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/SENSOR FAULT MANAGER/Override/OldValue
 * '<S739>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/ADAPT SCALING
 * '<S740>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/FAULTS
 * '<S741>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/First Order Low Pass
 * '<S742>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/SENSOR FAULT MANAGER
 * '<S743>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/Saturation
 * '<S744>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/ADAPT SCALING/ADAPT HI
 * '<S745>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/ADAPT SCALING/ADAPT LO
 * '<S746>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/ADAPT SCALING/MinMaxFilter
 * '<S747>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/ADAPT SCALING/ADAPT HI/Store Current Position
 * '<S748>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/ADAPT SCALING/ADAPT LO/Store Current Position
 * '<S749>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/First Order Low Pass/First Order Low Pass
 * '<S750>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/SENSOR FAULT MANAGER/If Action Subsystem
 * '<S751>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/SENSOR FAULT MANAGER/If Action Subsystem1
 * '<S752>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/SENSOR FAULT MANAGER/If Action Subsystem2
 * '<S753>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/SENSOR FAULT MANAGER/Override
 * '<S754>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/SENSOR FAULT MANAGER/Override/NewValue
 * '<S755>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/SENSOR FAULT MANAGER/Override/OldValue
 * '<S756>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/ADAPT SCALING
 * '<S757>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/FAULTS
 * '<S758>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/First Order Low Pass
 * '<S759>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER
 * '<S760>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/Saturation
 * '<S761>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/ADAPT SCALING/ADAPT HI
 * '<S762>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/ADAPT SCALING/ADAPT LO
 * '<S763>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/ADAPT SCALING/MinMaxFilter
 * '<S764>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/ADAPT SCALING/ADAPT HI/Store Current Position
 * '<S765>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/ADAPT SCALING/ADAPT LO/Store Current Position
 * '<S766>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/First Order Low Pass/First Order Low Pass
 * '<S767>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER/If Action Subsystem
 * '<S768>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER/If Action Subsystem1
 * '<S769>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER/If Action Subsystem2
 * '<S770>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER/Override
 * '<S771>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER/Override/NewValue
 * '<S772>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER/Override/OldValue
 * '<S773>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/ADAPT SCALING
 * '<S774>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/FAULTS
 * '<S775>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/First Order Low Pass
 * '<S776>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER
 * '<S777>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/Saturation
 * '<S778>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/ADAPT SCALING/ADAPT HI
 * '<S779>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/ADAPT SCALING/ADAPT LO
 * '<S780>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/ADAPT SCALING/MinMaxFilter
 * '<S781>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/ADAPT SCALING/ADAPT HI/Store Current Position
 * '<S782>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/ADAPT SCALING/ADAPT LO/Store Current Position
 * '<S783>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/First Order Low Pass/First Order Low Pass
 * '<S784>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER/If Action Subsystem
 * '<S785>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER/If Action Subsystem1
 * '<S786>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER/If Action Subsystem2
 * '<S787>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER/Override
 * '<S788>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER/Override/NewValue
 * '<S789>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER/Override/OldValue
 * '<S790>' : BaseEngineController_LS/Foreground/Outputs/AC Control
 * '<S791>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash
 * '<S792>' : BaseEngineController_LS/Foreground/Outputs/Coil Control
 * '<S793>' : BaseEngineController_LS/Foreground/Outputs/ETC_CutPower
 * '<S794>' : BaseEngineController_LS/Foreground/Outputs/FAN Control
 * '<S795>' : BaseEngineController_LS/Foreground/Outputs/FuelPump
 * '<S796>' : BaseEngineController_LS/Foreground/Outputs/HBridge
 * '<S797>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control
 * '<S798>' : BaseEngineController_LS/Foreground/Outputs/Injector Control
 * '<S799>' : BaseEngineController_LS/Foreground/Outputs/WASTEGATE-Control
 * '<S800>' : BaseEngineController_LS/Foreground/Outputs/AC Control/Discrete Actuator - AC
 * '<S801>' : BaseEngineController_LS/Foreground/Outputs/AC Control/Discrete Actuator - AC/Override in Engineering Units
 * '<S802>' : BaseEngineController_LS/Foreground/Outputs/AC Control/Discrete Actuator - AC/Override in Engineering Units/NewValue
 * '<S803>' : BaseEngineController_LS/Foreground/Outputs/AC Control/Discrete Actuator - AC/Override in Engineering Units/OldValue
 * '<S804>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Custom 1
 * '<S805>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 1
 * '<S806>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 2
 * '<S807>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 3
 * '<S808>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 4
 * '<S809>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 5
 * '<S810>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 6
 * '<S811>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 7
 * '<S812>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 8
 * '<S813>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message Boost
 * '<S814>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message DBW
 * '<S815>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 1/First Order Low Pass (Tunable)
 * '<S816>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 1/RPM_Filt
 * '<S817>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 1/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S818>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 1/RPM_Filt/First Order Low Pass (Tunable)
 * '<S819>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 1/RPM_Filt/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S820>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/First Order Low Pass (Tunable)
 * '<S821>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/First Order Low Pass (Tunable)1
 * '<S822>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/First Order Low Pass (Tunable)2
 * '<S823>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/PHI_Filt
 * '<S824>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/PHI_Filt1
 * '<S825>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S826>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/First Order Low Pass (Tunable)1/First Order Low Pass
 * '<S827>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/First Order Low Pass (Tunable)2/First Order Low Pass
 * '<S828>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/PHI_Filt/DecreasingFilter
 * '<S829>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/PHI_Filt/First Order Low Pass
 * '<S830>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/PHI_Filt/IncreasingFilter
 * '<S831>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/PHI_Filt1/DecreasingFilter
 * '<S832>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/PHI_Filt1/First Order Low Pass
 * '<S833>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/PHI_Filt1/IncreasingFilter
 * '<S834>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 3/
 * '<S835>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 3/
 * '<S836>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 3/ 1
 * '<S837>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 3/First Order Low Pass (Tunable)
 * '<S838>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 3/First Order Low Pass (Tunable)1
 * '<S839>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 3/First Order Low Pass (Tunable)2
 * '<S840>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 3/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S841>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 3/First Order Low Pass (Tunable)1/First Order Low Pass
 * '<S842>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 3/First Order Low Pass (Tunable)2/First Order Low Pass
 * '<S843>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 6/First Order Low Pass (Tunable)
 * '<S844>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 6/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S845>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message DBW/First Order Low Pass (Tunable)
 * '<S846>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message DBW/First Order Low Pass (Tunable)1
 * '<S847>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message DBW/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S848>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message DBW/First Order Low Pass (Tunable)1/First Order Low Pass
 * '<S849>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/Coil Enable Manager
 * '<S850>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management
 * '<S851>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/motohawk_override_rel
 * '<S852>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/motohawk_override_rel1
 * '<S853>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/Coil Enable Manager/CompareTo
 * '<S854>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/Coil Enable Manager/EST Enable TDC Counter
 * '<S855>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/Coil Enable Manager/EST Enable TDC Counter/EST Enable TDC Counter Stateflow
 * '<S856>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/Coil Enable Manager/EST Enable TDC Counter/TDC_Counter
 * '<S857>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo
 * '<S858>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo1
 * '<S859>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo10
 * '<S860>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo11
 * '<S861>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo12
 * '<S862>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo13
 * '<S863>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo14
 * '<S864>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo15
 * '<S865>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo2
 * '<S866>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo3
 * '<S867>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo4
 * '<S868>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo5
 * '<S869>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo6
 * '<S870>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo7
 * '<S871>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo8
 * '<S872>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo9
 * '<S873>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/motohawk_override_rel/NewValue
 * '<S874>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/motohawk_override_rel/OldValue
 * '<S875>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/motohawk_override_rel1/NewValue
 * '<S876>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/motohawk_override_rel1/OldValue
 * '<S877>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/IAC-P-CONTROL
 * '<S878>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/IAC-P-CONTROL1
 * '<S879>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/IAC-P-CONTROL/Saturation
 * '<S880>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/IAC-P-CONTROL/motohawk_override_abs2
 * '<S881>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/IAC-P-CONTROL/motohawk_override_abs2/NewValue
 * '<S882>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/IAC-P-CONTROL/motohawk_override_abs2/OldValue
 * '<S883>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/IAC-P-CONTROL1/Saturation
 * '<S884>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/IAC-P-CONTROL1/motohawk_override_abs2
 * '<S885>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/IAC-P-CONTROL1/motohawk_override_abs2/NewValue
 * '<S886>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/IAC-P-CONTROL1/motohawk_override_abs2/OldValue
 * '<S887>' : BaseEngineController_LS/Foreground/Outputs/FuelPump/Discrete Actuator - FUELP
 * '<S888>' : BaseEngineController_LS/Foreground/Outputs/FuelPump/Discrete Actuator - FUELP/Override in Engineering Units
 * '<S889>' : BaseEngineController_LS/Foreground/Outputs/FuelPump/Discrete Actuator - FUELP/Override in Engineering Units/NewValue
 * '<S890>' : BaseEngineController_LS/Foreground/Outputs/FuelPump/Discrete Actuator - FUELP/Override in Engineering Units/OldValue
 * '<S891>' : BaseEngineController_LS/Foreground/Outputs/HBridge/Time Since Enabled (With Input)1
 * '<S892>' : BaseEngineController_LS/Foreground/Outputs/HBridge/motohawk_override_abs2
 * '<S893>' : BaseEngineController_LS/Foreground/Outputs/HBridge/motohawk_override_abs2/NewValue
 * '<S894>' : BaseEngineController_LS/Foreground/Outputs/HBridge/motohawk_override_abs2/OldValue
 * '<S895>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control/IAC-P-CONTROL
 * '<S896>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control/IAC-S-CONTROL
 * '<S897>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control/IAC-P-CONTROL/Saturation
 * '<S898>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control/IAC-P-CONTROL/motohawk_override_abs2
 * '<S899>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control/IAC-P-CONTROL/motohawk_override_abs2/NewValue
 * '<S900>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control/IAC-P-CONTROL/motohawk_override_abs2/OldValue
 * '<S901>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control/IAC-S-CONTROL/Saturation
 * '<S902>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control/IAC-S-CONTROL/motohawk_override_abs2
 * '<S903>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control/IAC-S-CONTROL/motohawk_override_abs2/NewValue
 * '<S904>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control/IAC-S-CONTROL/motohawk_override_abs2/OldValue
 * '<S905>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/Injector Diagnostics
 * '<S906>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/Injector Enable Manager
 * '<S907>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs1
 * '<S908>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs2
 * '<S909>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs3
 * '<S910>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs4
 * '<S911>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs5
 * '<S912>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs6
 * '<S913>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/Injector Enable Manager/Stall
 * '<S914>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/Injector Enable Manager/Time Since Enabled (With Input)1
 * '<S915>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs1/NewValue
 * '<S916>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs1/OldValue
 * '<S917>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs2/NewValue
 * '<S918>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs2/OldValue
 * '<S919>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs3/NewValue
 * '<S920>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs3/OldValue
 * '<S921>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs4/NewValue
 * '<S922>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs4/OldValue
 * '<S923>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs5/NewValue
 * '<S924>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs5/OldValue
 * '<S925>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs6/NewValue
 * '<S926>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs6/OldValue
 * '<S927>' : BaseEngineController_LS/Foreground/Outputs/WASTEGATE-Control/PWM Characterization
 * '<S928>' : BaseEngineController_LS/Foreground/Outputs/WASTEGATE-Control/PWM Characterization/Saturation
 * '<S929>' : BaseEngineController_LS/Foreground/Outputs/WASTEGATE-Control/PWM Characterization/motohawk_override_abs2
 * '<S930>' : BaseEngineController_LS/Foreground/Outputs/WASTEGATE-Control/PWM Characterization/motohawk_override_abs2/NewValue
 * '<S931>' : BaseEngineController_LS/Foreground/Outputs/WASTEGATE-Control/PWM Characterization/motohawk_override_abs2/OldValue
 * '<S932>' : BaseEngineController_LS/Main Power Relay/Main Power Relay
 * '<S933>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Display Variable Event Boolean
 * '<S934>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Display Variable Event Function-Call
 * '<S935>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Display Variable Event Function-Call1
 * '<S936>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ECUP Latch
 * '<S937>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Forced Shutdown Process
 * '<S938>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/On Off Delay
 * '<S939>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes
 * '<S940>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Time Since Enabled (With Input)1
 * '<S941>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/motohawk_restore_nvmem
 * '<S942>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/motohawk_store_nvmem
 * '<S943>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Display Variable Event Function-Call/Clear
 * '<S944>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Display Variable Event Function-Call1/Clear
 * '<S945>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Forced Shutdown Process/Post Shutdown two ticks before MPRD off
 * '<S946>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Forced Shutdown Process/Processor Reboot
 * '<S947>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Forced Shutdown Process/Save NV Vars one tick before MPRD off
 * '<S948>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Forced Shutdown Process/Shutdown power on ECU565//563
 * '<S949>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Forced Shutdown Process/Time Since Enabled (With Input)1
 * '<S950>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Forced Shutdown Process/Post Shutdown two ticks before MPRD off/Post Shutdown two ticks before MPRD off
 * '<S951>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Forced Shutdown Process/Save NV Vars one tick before MPRD off/Save NV Vars one tick before MPRD off
 * '<S952>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Forced Shutdown Process/Shutdown power on ECU565//563/Shutdown power on ECU565-128
 * '<S953>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/On Off Delay/S-R Flip-Flop
 * '<S954>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/Post Shutdown two ticks before MPRD off
 * '<S955>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/Processor Reboot
 * '<S956>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/Save NV Vars one tick before MPRD off
 * '<S957>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/Shutdown power on ECU565//563
 * '<S958>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/motohawk_override_abs
 * '<S959>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/Post Shutdown two ticks before MPRD off/Post Shutdown two ticks before MPRD off
 * '<S960>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/Save NV Vars one tick before MPRD off/Save NV Vars one tick before MPRD off
 * '<S961>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/Shutdown power on ECU565//563/Shutdown power on ECU565-128
 * '<S962>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/motohawk_override_abs/NewValue
 * '<S963>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/motohawk_override_abs/OldValue
 */
#endif                                 /* RTW_HEADER_BaseEngineController_LS_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
