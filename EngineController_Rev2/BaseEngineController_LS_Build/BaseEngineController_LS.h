/*
 * File: BaseEngineController_LS.h
 *
 * Code generated for Simulink model 'BaseEngineController_LS'.
 *
 * Model version                  : 1.2094
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Tue Nov 08 22:17:40 2022
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
  real_T s774_motohawk_interpolation_1d;/* '<S774>/motohawk_interpolation_1d' */
  real_T s753_Switch;                  /* '<S753>/Switch' */
  real_T s797_MinMax;                  /* '<S797>/MinMax' */
  real_T s797_MinMax1;                 /* '<S797>/MinMax1' */
  real_T s801_MinMax1;                 /* '<S801>/MinMax1' */
  real_T s772_Merge;                   /* '<S772>/Merge' */
  real_T s811_Merge;                   /* '<S811>/Merge' */
  real_T s762_motohawk_interpolation_1d;/* '<S762>/motohawk_interpolation_1d' */
  real_T s752_Switch;                  /* '<S752>/Switch' */
  real_T s780_MinMax;                  /* '<S780>/MinMax' */
  real_T s780_MinMax1;                 /* '<S780>/MinMax1' */
  real_T s784_MinMax1;                 /* '<S784>/MinMax1' */
  real_T s760_Merge;                   /* '<S760>/Merge' */
  real_T s794_Merge;                   /* '<S794>/Merge' */
  real_T s404_Switch1;                 /* '<S404>/Switch1' */
  real_T s430_Sum;                     /* '<S430>/Sum' */
  real_T s442_RPMInst;                 /* '<S442>/Data Type Conversion1' */
  real_T s559_DataTypeConversion;      /* '<S559>/Data Type Conversion' */
  real_T s616_Sum1;                    /* '<S616>/Sum1' */
  real_T s629_Merge;                   /* '<S629>/Merge' */
  real_T s615_Sum1;                    /* '<S615>/Sum1' */
  real_T s754_Switch;                  /* '<S754>/Switch' */
  real_T s814_MinMax;                  /* '<S814>/MinMax' */
  real_T s814_MinMax1;                 /* '<S814>/MinMax1' */
  real_T s818_MinMax1;                 /* '<S818>/MinMax1' */
  real_T s755_Switch;                  /* '<S755>/Switch' */
  real_T s831_MinMax;                  /* '<S831>/MinMax' */
  real_T s831_MinMax1;                 /* '<S831>/MinMax1' */
  real_T s835_MinMax1;                 /* '<S835>/MinMax1' */
  real_T s828_Merge;                   /* '<S828>/Merge' */
  real_T s845_Merge;                   /* '<S845>/Merge' */
  real_T s411_Switch2;                 /* '<S411>/Switch2' */
  real_T s617_Sum1;                    /* '<S617>/Sum1' */
  real_T s637_Merge;                   /* '<S637>/Merge' */
  real_T s446_ReadCANMessage_o3;       /* '<S446>/Read CAN Message' */
  real_T s446_ReadCANMessage_o4;       /* '<S446>/Read CAN Message' */
  real_T s446_ReadCANMessage_o5;       /* '<S446>/Read CAN Message' */
  real_T s446_ReadCANMessage_o6;       /* '<S446>/Read CAN Message' */
  real_T s446_ReadCANMessage_o7;       /* '<S446>/Read CAN Message' */
  real_T s446_ReadCANMessage_o8;       /* '<S446>/Read CAN Message' */
  real_T s446_ReadCANMessage2_o2;      /* '<S446>/Read CAN Message2' */
  real_T s446_ReadCANMessage2_o3;      /* '<S446>/Read CAN Message2' */
  real_T s446_ReadCANMessage2_o4;      /* '<S446>/Read CAN Message2' */
  real_T s446_ReadCANMessage2_o5;      /* '<S446>/Read CAN Message2' */
  real_T s441_Gain1;                   /* '<S441>/Gain1' */
  real_T s600_motohawk_interpolation_1d;/* '<S600>/motohawk_interpolation_1d' */
  real_T s599_Merge;                   /* '<S599>/Merge' */
  real_T s566_Switch;                  /* '<S566>/Switch' */
  real_T s415_Switch2;                 /* '<S415>/Switch2' */
  real_T s447_ReadCANMessage_o2;       /* '<S447>/Read CAN Message' */
  real_T s447_ReadCANMessage_o3;       /* '<S447>/Read CAN Message' */
  real_T s447_ReadCANMessage_o4;       /* '<S447>/Read CAN Message' */
  real_T s447_ReadCANMessage_o5;       /* '<S447>/Read CAN Message' */
  real_T s447_ReadCANMessage_o6;       /* '<S447>/Read CAN Message' */
  real_T s447_ReadCANMessage_o7;       /* '<S447>/Read CAN Message' */
  real_T s447_ReadCANMessage_o8;       /* '<S447>/Read CAN Message' */
  real_T s447_ReadCANMessage_o9;       /* '<S447>/Read CAN Message' */
  real_T s447_ReadCANMessage_o10;      /* '<S447>/Read CAN Message' */
  real_T s447_MathFunction;            /* '<S447>/Math Function' */
  real_T s487_Sum1;                    /* '<S487>/Sum1' */
  real_T s447_ReadCANMessage1_o2;      /* '<S447>/Read CAN Message1' */
  real_T s447_ReadCANMessage1_o3;      /* '<S447>/Read CAN Message1' */
  real_T s447_ReadCANMessage1_o4;      /* '<S447>/Read CAN Message1' */
  real_T s447_ReadCANMessage1_o5;      /* '<S447>/Read CAN Message1' */
  real_T s447_ReadCANMessage1_o6;      /* '<S447>/Read CAN Message1' */
  real_T s447_ReadCANMessage1_o7;      /* '<S447>/Read CAN Message1' */
  real_T s447_ReadCANMessage1_o8;      /* '<S447>/Read CAN Message1' */
  real_T s447_ReadCANMessage1_o9;      /* '<S447>/Read CAN Message1' */
  real_T s447_ReadCANMessage1_o10;     /* '<S447>/Read CAN Message1' */
  real_T s447_MathFunction1;           /* '<S447>/Math Function1' */
  real_T s488_Sum1;                    /* '<S488>/Sum1' */
  real_T s511_Merge;                   /* '<S511>/Merge' */
  real_T s519_Merge;                   /* '<S519>/Merge' */
  real_T s447_MultiportSwitch;         /* '<S447>/Multiport Switch' */
  real_T s409_Sum1;                    /* '<S409>/Sum1' */
  real_T s432_Switch;                  /* '<S432>/Switch' */
  real_T s624_Sum1;                    /* '<S624>/Sum1' */
  real_T s692_Merge;                   /* '<S692>/Merge' */
  real_T s621_Merge;                   /* '<S621>/Merge' */
  real_T s619_Sum1;                    /* '<S619>/Sum1' */
  real_T s658_Merge;                   /* '<S658>/Merge' */
  real_T s357_motohawk_delta_time;     /* '<S357>/motohawk_delta_time' */
  real_T s620_Sum1;                    /* '<S620>/Sum1' */
  real_T s367_Sum;                     /* '<S367>/Sum' */
  real_T s366_motohawk_interpolation_2d2;/* '<S366>/motohawk_interpolation_2d2' */
  real_T s366_Sum;                     /* '<S366>/Sum' */
  real_T s366_NominalAirFlowRate;      /* '<S366>/Nominal Air Flow Rate' */
  real_T s366_ModelAirMassFlowRate;    /* '<S366>/Model Air Mass Flow Rate' */
  real_T s441_Gain;                    /* '<S441>/Gain' */
  real_T s581_motohawk_interpolation_1d;/* '<S581>/motohawk_interpolation_1d' */
  real_T s580_Merge;                   /* '<S580>/Merge' */
  real_T s366_MultiportSwitch;         /* '<S366>/Multiport Switch' */
  real_T s382_Merge;                   /* '<S382>/Merge' */
  real_T s385_Sum1;                    /* '<S385>/Sum1' */
  real_T s383_Merge;                   /* '<S383>/Merge' */
  real_T s388_Sum1;                    /* '<S388>/Sum1' */
  real_T s426_Sum1;                    /* '<S426>/Sum1' */
  real_T s560_DataTypeConversion;      /* '<S560>/Data Type Conversion' */
  real_T s563_DataTypeConversion;      /* '<S563>/Data Type Conversion' */
  real_T s666_Merge;                   /* '<S666>/Merge' */
  real_T s358_motohawk_data_read;      /* '<S358>/motohawk_data_read' */
  real_T s377_Sum1;                    /* '<S377>/Sum1' */
  real_T s877_Sum1;                    /* '<S877>/Sum1' */
  real_T s874_Switch;                  /* '<S874>/Switch' */
  real_T s881_Merge;                   /* '<S881>/Merge' */
  real_T s881_Switch;                  /* '<S881>/Switch' */
  real_T s882_Merge;                   /* '<S882>/Merge' */
  real_T s882_Switch;                  /* '<S882>/Switch' */
  real_T s408_MultiportSwitch;         /* '<S408>/Multiport Switch' */
  real_T s135_SparkAdv;                /* '<S135>/Merge4' */
  real_T s618_Sum1;                    /* '<S618>/Sum1' */
  real_T s650_Merge;                   /* '<S650>/Merge' */
  real_T s622_Sum1;                    /* '<S622>/Sum1' */
  real_T s676_Merge;                   /* '<S676>/Merge' */
  real_T s135_FAN1;                    /* '<S135>/Merge12' */
  real_T s135_FAN2;                    /* '<S135>/Merge13' */
  real_T s135_SparkEnergy;             /* '<S135>/Merge5' */
  real_T s945_MinMax1;                 /* '<S945>/MinMax1' */
  real_T s949_MinMax1;                 /* '<S949>/MinMax1' */
  real_T s434_Switch;                  /* '<S434>/Switch' */
  real_T s135_Throttle;                /* '<S135>/Merge8' */
  real_T s854_ETC;                     /* '<S854>/Saturation' */
  real_T s135_IACP;                    /* '<S135>/Merge3' */
  real_T s963_MinMax1;                 /* '<S963>/MinMax1' */
  real_T s135_IACS;                    /* '<S135>/Merge9' */
  real_T s967_MinMax1;                 /* '<S967>/MinMax1' */
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
  real_T s994_MinMax1;                 /* '<S994>/MinMax1' */
  real_T s21_Gain[8];                  /* '<S21>/Gain' */
  real_T s409_Sum3;                    /* '<S409>/Sum3' */
  real_T s407_Sum3;                    /* '<S407>/Sum3' */
  real_T s446_ReadCANMessage1_o2;      /* '<S446>/Read CAN Message1' */
  real_T s446_ReadCANMessage1_o3;      /* '<S446>/Read CAN Message1' */
  real_T s623_Sum1;                    /* '<S623>/Sum1' */
  real_T s684_Merge;                   /* '<S684>/Merge' */
  real_T s909_Sum;                     /* '<S909>/Sum' */
  real_T s910_Sum;                     /* '<S910>/Sum' */
  real_T s912_CrankCounter;            /* '<S912>/CrankCounter' */
  real_T s704_motohawk_interpolation_1d;/* '<S704>/motohawk_interpolation_1d' */
  real_T s703_Merge;                   /* '<S703>/Merge' */
  real_T s726_motohawk_interpolation_1d;/* '<S726>/motohawk_interpolation_1d' */
  real_T s709_Merge;                   /* '<S709>/Merge' */
  real_T s725_Merge;                   /* '<S725>/Merge' */
  real_T s744_motohawk_interpolation_1d;/* '<S744>/motohawk_interpolation_1d' */
  real_T s711_Merge;                   /* '<S711>/Merge' */
  real_T s743_Merge;                   /* '<S743>/Merge' */
  real_T s735_motohawk_interpolation_1d;/* '<S735>/motohawk_interpolation_1d' */
  real_T s734_Merge;                   /* '<S734>/Merge' */
  real_T s717_motohawk_interpolation_1d;/* '<S717>/motohawk_interpolation_1d' */
  real_T s716_Merge;                   /* '<S716>/Merge' */
  real_T s327_Defaultifnoflow[8];      /* '<S327>/Default (if no flow)' */
  real_T s339_Sum1[8];                 /* '<S339>/Sum1' */
  real_T s338_chargemass[8];           /* '<S338>/charge mass' */
  real_T s401_Merge;                   /* '<S401>/Merge' */
  real_T s419_Sum2;                    /* '<S419>/Sum2' */
  real_T s363_Timer;                   /* '<S357>/Baro Stall State Delay' */
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
  real_T s1015_Switch;                 /* '<S1015>/Switch' */
  uint32_T s443_motohawk_frequency_in; /* '<S443>/motohawk_frequency_in' */
  uint32_T s446_ReadCANMessage_o1;     /* '<S446>/Read CAN Message' */
  uint32_T s446_ReadCANMessage2_o1;    /* '<S446>/Read CAN Message2' */
  uint32_T s447_ReadCANMessage_o1;     /* '<S447>/Read CAN Message' */
  uint32_T s447_ReadCANMessage1_o1;    /* '<S447>/Read CAN Message1' */
  uint32_T s446_ReadCANMessage1_o1;    /* '<S446>/Read CAN Message1' */
  uint32_T s614_Sum;                   /* '<S614>/Sum' */
  uint32_T s9_ReadCANRaw_o2;           /* '<S9>/Read CAN Raw' */
  uint32_T s9_ReadCANRaw_o4;           /* '<S9>/Read CAN Raw' */
  uint32_T s10_motohawk_calibration;   /* '<S10>/motohawk_calibration' */
  int16_T s854_motohawk_pwm1;          /* '<S854>/motohawk_pwm1' */
  uint16_T s445_motohawk_ain2;         /* '<S445>/motohawk_ain2' */
  uint16_T s445_motohawk_ain1;         /* '<S445>/motohawk_ain1' */
  uint16_T s443_motohawk_ain4;         /* '<S443>/motohawk_ain4' */
  uint16_T s443_motohawk_ain14;        /* '<S443>/motohawk_ain14' */
  uint16_T s443_motohawk_ain_read1;    /* '<S443>/motohawk_ain_read1' */
  uint16_T s443_motohawk_ain2;         /* '<S443>/motohawk_ain2' */
  uint16_T s443_motohawk_ain1;         /* '<S443>/motohawk_ain1' */
  uint16_T s443_motohawk_ain3;         /* '<S443>/motohawk_ain3' */
  uint16_T s850_SparkSequence_o3[8];   /* '<S850>/Spark Sequence' */
  uint16_T s850_SparkSequence_o4[8];   /* '<S850>/Spark Sequence' */
  uint16_T s696_motohawk_ain;          /* '<S696>/motohawk_ain' */
  uint16_T s697_motohawk_ain;          /* '<S697>/motohawk_ain' */
  uint16_T s697_motohawk_ain1;         /* '<S697>/motohawk_ain1' */
  uint16_T s697_motohawk_ain2;         /* '<S697>/motohawk_ain2' */
  uint16_T s697_motohawk_ain3;         /* '<S697>/motohawk_ain3' */
  uint16_T s10_motohawk_calibration3;  /* '<S10>/motohawk_calibration3' */
  index_T s396_motohawk_prelookup1;    /* '<S396>/motohawk_prelookup1' */
  index_T s396_Indexes;                /* '<S396>/motohawk_prelookup5' */
  index_T s392_motohawk_prelookup;     /* '<S392>/motohawk_prelookup' */
  index_T s393_motohawk_prelookup;     /* '<S393>/motohawk_prelookup' */
  index_T s397_motohawk_prelookup;     /* '<S397>/motohawk_prelookup' */
  index_T s390_motohawk_prelookup;     /* '<S390>/motohawk_prelookup' */
  index_T s394_motohawk_prelookup1;    /* '<S394>/motohawk_prelookup1' */
  index_T s394_Indexes;                /* '<S394>/motohawk_prelookup5' */
  index_T s391_motohawk_prelookup;     /* '<S391>/motohawk_prelookup' */
  index_T s362_RPMAccel17Idx;          /* '<S362>/motohawk_prelookup' */
  int8_T s22_Merge1[32];               /* '<S22>/Merge1' */
  int8_T s912_DataTypeConversion;      /* '<S912>/Data Type Conversion' */
  int8_T s231_DataTypeConversion;      /* '<S231>/Data Type Conversion' */
  int8_T s231_DataTypeConversion1;     /* '<S231>/Data Type Conversion1' */
  int8_T s102_MultiportSwitch[8];      /* '<S102>/Multiport Switch' */
  int8_T s121_CutArray[8];             /* '<S121>/CutArray' */
  int8_T s27_DC_Override;              /* '<S20>/ETC Test  Manager' */
  int8_T s27_SetpointMode;             /* '<S20>/ETC Test  Manager' */
  uint8_T s406_UnitDelay;              /* '<S406>/Unit Delay' */
  uint8_T s357_motohawk_data_read1;    /* '<S357>/motohawk_data_read1' */
  uint8_T s856_InjectorSequence_o1[8]; /* '<S856>/Injector Sequence' */
  uint8_T s22_DataTypeConversion5;     /* '<S22>/Data Type Conversion5' */
  uint8_T s446_DataTypeConversion;     /* '<S446>/Data Type Conversion' */
  uint8_T s446_DataTypeConversion8;    /* '<S446>/Data Type Conversion8' */
  uint8_T s446_DataTypeConversion1;    /* '<S446>/Data Type Conversion1' */
  uint8_T s446_DataTypeConversion2;    /* '<S446>/Data Type Conversion2' */
  uint8_T s446_DataTypeConversion3;    /* '<S446>/Data Type Conversion3' */
  uint8_T s446_DataTypeConversion4;    /* '<S446>/Data Type Conversion4' */
  uint8_T s446_DataTypeConversion5;    /* '<S446>/Data Type Conversion5' */
  uint8_T s447_DataTypeConversion9;    /* '<S447>/Data Type Conversion9' */
  uint8_T s447_DataTypeConversion3;    /* '<S447>/Data Type Conversion3' */
  uint8_T s442_motohawk_encoder_fault; /* '<S442>/motohawk_encoder_fault' */
  uint8_T s442_motohawk_encoder_state; /* '<S442>/motohawk_encoder_state' */
  uint8_T s914_Switch1;                /* '<S914>/Switch1' */
  uint8_T s428_Switch;                 /* '<S428>/Switch' */
  uint8_T s427_State;                  /* '<S406>/Engine State Machine' */
  uint8_T s265_IdleState;              /* '<S250>/IdleStateMachine' */
  uint8_T s102_UnitDelay1;             /* '<S102>/Unit Delay1' */
  uint8_T s121_Switch;                 /* '<S121>/Switch' */
  uint8_T s9_ReadCANRaw_o5;            /* '<S9>/Read CAN Raw' */
  uint8_T s9_ReadCANRaw_o6[8];         /* '<S9>/Read CAN Raw' */
  boolean_T s406_Stall;                /* '<S406>/Relational Operator1' */
  boolean_T s406_Crank;                /* '<S406>/Relational Operator4' */
  boolean_T s406_Run;                  /* '<S406>/Logical Operator1' */
  boolean_T s567_Merge;                /* '<S567>/Merge' */
  boolean_T s446_ReadCANMessage_o2;    /* '<S446>/Read CAN Message' */
  boolean_T s566_LogicalOperator;      /* '<S566>/Logical Operator' */
  boolean_T s566_LogicalOperator3;     /* '<S566>/Logical Operator3' */
  boolean_T s382_RelationalOperator4;  /* '<S382>/Relational Operator4' */
  boolean_T s383_RelationalOperator4;  /* '<S383>/Relational Operator4' */
  boolean_T s381_LogicalOperator;      /* '<S381>/Logical Operator' */
  boolean_T s441_motohawk_din2;        /* '<S441>/motohawk_din2' */
  boolean_T s570_Merge;                /* '<S570>/Merge' */
  boolean_T s586_Merge;                /* '<S586>/Merge' */
  boolean_T s591_Merge;                /* '<S591>/Merge' */
  boolean_T s135_AC;                   /* '<S135>/Merge14' */
  boolean_T s858_LogicalOperator;      /* '<S858>/Logical Operator' */
  boolean_T s135_FUELP;                /* '<S135>/Merge7' */
  boolean_T s22_LogicalOperator2[8];   /* '<S22>/Logical Operator2' */
  boolean_T s935_LogicalOperator;      /* '<S935>/Logical Operator' */
  boolean_T s936_LogicalOperator;      /* '<S936>/Logical Operator' */
  boolean_T s441_motohawk_din;         /* '<S441>/motohawk_din' */
  boolean_T s573_Merge;                /* '<S573>/Merge' */
  boolean_T s953_LogicalOperator;      /* '<S953>/Logical Operator' */
  boolean_T s854_RelationalOperator4;  /* '<S854>/Relational Operator4' */
  boolean_T s977_Merge[8];             /* '<S977>/Merge' */
  boolean_T s447_DataTypeConversion8;  /* '<S447>/Data Type Conversion8' */
  boolean_T s447_DataTypeConversion7;  /* '<S447>/Data Type Conversion7' */
  boolean_T s447_DataTypeConversion6;  /* '<S447>/Data Type Conversion6' */
  boolean_T s447_DataTypeConversion5;  /* '<S447>/Data Type Conversion5' */
  boolean_T s447_DataTypeConversion;   /* '<S447>/Data Type Conversion' */
  boolean_T s447_DataTypeConversion1;  /* '<S447>/Data Type Conversion1' */
  boolean_T s447_DataTypeConversion2;  /* '<S447>/Data Type Conversion2' */
  boolean_T s447_DataTypeConversion4;  /* '<S447>/Data Type Conversion4' */
  boolean_T s366_LogicalOperator;      /* '<S366>/Logical Operator' */
  boolean_T s850_LogicalOperator1[8];  /* '<S850>/Logical Operator1' */
  boolean_T s912_RelationalOperator1;  /* '<S912>/Relational Operator1' */
  boolean_T s766_LogicalOperator;      /* '<S766>/Logical Operator' */
  boolean_T s401_RelationalOperator3;  /* '<S401>/Relational Operator3' */
  boolean_T s363_Enable;               /* '<S357>/Baro Stall State Delay' */
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
  boolean_T s998_RelationalOperator;   /* '<S998>/Relational Operator' */
  boolean_T s998_LogicalOperator2;     /* '<S998>/Logical Operator2' */
  boolean_T s1002_MPRDState;           /* '<S998>/ECUP Latch' */
  boolean_T s9_ReadCANRaw_o1;          /* '<S9>/Read CAN Raw' */
  boolean_T s9_ReadCANRaw_o3;          /* '<S9>/Read CAN Raw' */
  rtB_CollectAverage_BaseEngineController_LS s403_CollectAverage;/* '<S403>/Collect Average' */
  rtB_CollectAverage_BaseEngineController_LS s402_CollectAverage;/* '<S402>/Collect Average' */
  rtB_CollectAverage_BaseEngineController_LS s364_CollectAverage;/* '<S364>/Collect Average' */
} BlockIO_BaseEngineController_LS;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T s750_UnitDelay_DSTATE;        /* '<S750>/Unit Delay' */
  real_T s775_UnitDelay_DSTATE;        /* '<S775>/Unit Delay' */
  real_T s807_UnitDelay_DSTATE;        /* '<S807>/Unit Delay' */
  real_T s800_UnitDelay1_DSTATE;       /* '<S800>/Unit Delay1' */
  real_T s748_UnitDelay_DSTATE;        /* '<S748>/Unit Delay' */
  real_T s763_UnitDelay_DSTATE;        /* '<S763>/Unit Delay' */
  real_T s790_UnitDelay_DSTATE;        /* '<S790>/Unit Delay' */
  real_T s783_UnitDelay1_DSTATE;       /* '<S783>/Unit Delay1' */
  real_T s616_UnitDelay1_DSTATE;       /* '<S616>/Unit Delay1' */
  real_T s630_UnitDelay_DSTATE;        /* '<S630>/Unit Delay' */
  real_T s615_UnitDelay_DSTATE;        /* '<S615>/Unit Delay' */
  real_T s824_UnitDelay_DSTATE;        /* '<S824>/Unit Delay' */
  real_T s817_UnitDelay1_DSTATE;       /* '<S817>/Unit Delay1' */
  real_T s841_UnitDelay_DSTATE;        /* '<S841>/Unit Delay' */
  real_T s834_UnitDelay1_DSTATE;       /* '<S834>/Unit Delay1' */
  real_T s642_UnitDelay_DSTATE;        /* '<S642>/Unit Delay' */
  real_T s617_UnitDelay1_DSTATE;       /* '<S617>/Unit Delay1' */
  real_T s641_UnitDelay_DSTATE;        /* '<S641>/Unit Delay' */
  real_T s639_UnitDelay_DSTATE;        /* '<S639>/Unit Delay' */
  real_T s639_UnitDelay1_DSTATE;       /* '<S639>/Unit Delay1' */
  real_T s639_UnitDelay2_DSTATE;       /* '<S639>/Unit Delay2' */
  real_T s566_UnitDelay_DSTATE;        /* '<S566>/Unit Delay' */
  real_T s604_UnitDelay_DSTATE;        /* '<S604>/Unit Delay' */
  real_T s565_UnitDelay_DSTATE;        /* '<S565>/Unit Delay' */
  real_T s601_UnitDelay_DSTATE;        /* '<S601>/Unit Delay' */
  real_T s566_UnitDelay1_DSTATE;       /* '<S566>/Unit Delay1' */
  real_T s566_UnitDelay3_DSTATE;       /* '<S566>/Unit Delay3' */
  real_T s409_UnitDelay_DSTATE;        /* '<S409>/Unit Delay' */
  real_T s487_UnitDelay1_DSTATE;       /* '<S487>/Unit Delay1' */
  real_T s512_UnitDelay_DSTATE;        /* '<S512>/Unit Delay' */
  real_T s488_UnitDelay1_DSTATE;       /* '<S488>/Unit Delay1' */
  real_T s520_UnitDelay_DSTATE;        /* '<S520>/Unit Delay' */
  real_T s624_UnitDelay1_DSTATE;       /* '<S624>/Unit Delay1' */
  real_T s693_UnitDelay_DSTATE;        /* '<S693>/Unit Delay' */
  real_T s619_UnitDelay1_DSTATE;       /* '<S619>/Unit Delay1' */
  real_T s659_UnitDelay_DSTATE;        /* '<S659>/Unit Delay' */
  real_T s620_UnitDelay1_DSTATE;       /* '<S620>/Unit Delay1' */
  real_T s367_UnitDelay_DSTATE;        /* '<S367>/Unit Delay' */
  real_T s562_UnitDelay_DSTATE;        /* '<S562>/Unit Delay' */
  real_T s582_UnitDelay_DSTATE;        /* '<S582>/Unit Delay' */
  real_T s382_UnitDelay2_DSTATE;       /* '<S382>/Unit Delay2' */
  real_T s385_UnitDelay_DSTATE;        /* '<S385>/Unit Delay' */
  real_T s383_UnitDelay2_DSTATE;       /* '<S383>/Unit Delay2' */
  real_T s388_UnitDelay_DSTATE;        /* '<S388>/Unit Delay' */
  real_T s424_UnitDelay_DSTATE;        /* '<S424>/Unit Delay' */
  real_T s426_UnitDelay_DSTATE;        /* '<S426>/Unit Delay' */
  real_T s667_UnitDelay_DSTATE;        /* '<S667>/Unit Delay' */
  real_T s377_UnitDelay_DSTATE;        /* '<S377>/Unit Delay' */
  real_T s877_UnitDelay_DSTATE;        /* '<S877>/Unit Delay' */
  real_T s875_UnitDelay_DSTATE;        /* '<S875>/Unit Delay' */
  real_T s881_UnitDelay2_DSTATE;       /* '<S881>/Unit Delay2' */
  real_T s887_UnitDelay_DSTATE;        /* '<S887>/Unit Delay' */
  real_T s882_UnitDelay2_DSTATE;       /* '<S882>/Unit Delay2' */
  real_T s890_UnitDelay_DSTATE;        /* '<S890>/Unit Delay' */
  real_T s883_UnitDelay_DSTATE;        /* '<S883>/Unit Delay' */
  real_T s884_UnitDelay_DSTATE;        /* '<S884>/Unit Delay' */
  real_T s885_UnitDelay_DSTATE;        /* '<S885>/Unit Delay' */
  real_T s881_UnitDelay1_DSTATE;       /* '<S881>/Unit Delay1' */
  real_T s881_UnitDelay3_DSTATE;       /* '<S881>/Unit Delay3' */
  real_T s881_UnitDelay4_DSTATE;       /* '<S881>/Unit Delay4' */
  real_T s882_UnitDelay1_DSTATE;       /* '<S882>/Unit Delay1' */
  real_T s882_UnitDelay3_DSTATE;       /* '<S882>/Unit Delay3' */
  real_T s882_UnitDelay4_DSTATE;       /* '<S882>/Unit Delay4' */
  real_T s898_UnitDelay_DSTATE;        /* '<S898>/Unit Delay' */
  real_T s618_UnitDelay1_DSTATE;       /* '<S618>/Unit Delay1' */
  real_T s651_UnitDelay_DSTATE;        /* '<S651>/Unit Delay' */
  real_T s899_UnitDelay_DSTATE;        /* '<S899>/Unit Delay' */
  real_T s622_UnitDelay1_DSTATE;       /* '<S622>/Unit Delay1' */
  real_T s677_UnitDelay_DSTATE;        /* '<S677>/Unit Delay' */
  real_T s900_UnitDelay_DSTATE;        /* '<S900>/Unit Delay' */
  real_T s902_UnitDelay_DSTATE;        /* '<S902>/Unit Delay' */
  real_T s906_UnitDelay_DSTATE;        /* '<S906>/Unit Delay' */
  real_T s905_UnitDelay_DSTATE;        /* '<S905>/Unit Delay' */
  real_T s74_UnitDelay_DSTATE;         /* '<S74>/Unit Delay' */
  real_T s73_UnitDelay_DSTATE;         /* '<S73>/Unit Delay' */
  real_T s71_UnitDelay_DSTATE;         /* '<S71>/Unit Delay' */
  real_T s70_UnitDelay_DSTATE;         /* '<S70>/Unit Delay' */
  real_T s69_UnitDelay_DSTATE;         /* '<S69>/Unit Delay' */
  real_T s68_UnitDelay_DSTATE;         /* '<S68>/Unit Delay' */
  real_T s67_UnitDelay_DSTATE;         /* '<S67>/Unit Delay' */
  real_T s66_UnitDelay_DSTATE;         /* '<S66>/Unit Delay' */
  real_T s72_UnitDelay_DSTATE[8];      /* '<S72>/Unit Delay' */
  real_T s409_UnitDelay1_DSTATE;       /* '<S409>/Unit Delay1' */
  real_T s623_UnitDelay1_DSTATE;       /* '<S623>/Unit Delay1' */
  real_T s685_UnitDelay_DSTATE;        /* '<S685>/Unit Delay' */
  real_T s382_UnitDelay1_DSTATE;       /* '<S382>/Unit Delay1' */
  real_T s382_UnitDelay3_DSTATE;       /* '<S382>/Unit Delay3' */
  real_T s382_UnitDelay4_DSTATE;       /* '<S382>/Unit Delay4' */
  real_T s383_UnitDelay1_DSTATE;       /* '<S383>/Unit Delay1' */
  real_T s383_UnitDelay3_DSTATE;       /* '<S383>/Unit Delay3' */
  real_T s383_UnitDelay4_DSTATE;       /* '<S383>/Unit Delay4' */
  real_T s787_UnitDelay1_DSTATE;       /* '<S787>/Unit Delay1' */
  real_T s787_UnitDelay_DSTATE;        /* '<S787>/Unit Delay' */
  real_T s787_UnitDelay3_DSTATE;       /* '<S787>/Unit Delay3' */
  real_T s787_UnitDelay4_DSTATE;       /* '<S787>/Unit Delay4' */
  real_T s804_UnitDelay1_DSTATE;       /* '<S804>/Unit Delay1' */
  real_T s804_UnitDelay_DSTATE;        /* '<S804>/Unit Delay' */
  real_T s804_UnitDelay3_DSTATE;       /* '<S804>/Unit Delay3' */
  real_T s804_UnitDelay4_DSTATE;       /* '<S804>/Unit Delay4' */
  real_T s821_UnitDelay1_DSTATE;       /* '<S821>/Unit Delay1' */
  real_T s821_UnitDelay_DSTATE;        /* '<S821>/Unit Delay' */
  real_T s821_UnitDelay3_DSTATE;       /* '<S821>/Unit Delay3' */
  real_T s821_UnitDelay4_DSTATE;       /* '<S821>/Unit Delay4' */
  real_T s838_UnitDelay1_DSTATE;       /* '<S838>/Unit Delay1' */
  real_T s838_UnitDelay_DSTATE;        /* '<S838>/Unit Delay' */
  real_T s838_UnitDelay3_DSTATE;       /* '<S838>/Unit Delay3' */
  real_T s838_UnitDelay4_DSTATE;       /* '<S838>/Unit Delay4' */
  real_T s909_UnitDelay_DSTATE;        /* '<S909>/Unit Delay' */
  real_T s910_UnitDelay_DSTATE;        /* '<S910>/Unit Delay' */
  real_T s912_CrankCounter_DSTATE;     /* '<S912>/CrankCounter' */
  real_T s698_UnitDelay_DSTATE;        /* '<S698>/Unit Delay' */
  real_T s705_UnitDelay_DSTATE;        /* '<S705>/Unit Delay' */
  real_T s709_UnitDelay_DSTATE;        /* '<S709>/Unit Delay' */
  real_T s727_UnitDelay_DSTATE;        /* '<S727>/Unit Delay' */
  real_T s711_UnitDelay_DSTATE;        /* '<S711>/Unit Delay' */
  real_T s745_UnitDelay_DSTATE;        /* '<S745>/Unit Delay' */
  real_T s710_UnitDelay_DSTATE;        /* '<S710>/Unit Delay' */
  real_T s736_UnitDelay_DSTATE;        /* '<S736>/Unit Delay' */
  real_T s708_UnitDelay_DSTATE;        /* '<S708>/Unit Delay' */
  real_T s718_UnitDelay_DSTATE;        /* '<S718>/Unit Delay' */
  real_T s339_UnitDelay_DSTATE[8];     /* '<S339>/Unit Delay' */
  real_T s401_UnitDelay2_DSTATE;       /* '<S401>/Unit Delay2' */
  real_T s416_UnitDelay_DSTATE;        /* '<S416>/Unit Delay' */
  real_T s419_UnitDelay_DSTATE;        /* '<S419>/Unit Delay' */
  real_T s401_UnitDelay1_DSTATE;       /* '<S401>/Unit Delay1' */
  real_T s401_UnitDelay3_DSTATE;       /* '<S401>/Unit Delay3' */
  real_T s401_UnitDelay4_DSTATE;       /* '<S401>/Unit Delay4' */
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
  real_T s1004_UnitDelay_DSTATE;       /* '<S1004>/Unit Delay' */
  real_T s1004_UnitDelay1_DSTATE;      /* '<S1004>/Unit Delay1' */
  real_T s363_TOld;                    /* '<S357>/Baro Stall State Delay' */
  real_T s27_TimerOld;                 /* '<S20>/ETC Test  Manager' */
  uint32_T s438_UnitDelay_DSTATE;      /* '<S438>/Unit Delay' */
  uint32_T s614_UnitDelay_DSTATE;      /* '<S614>/Unit Delay' */
  uint32_T s768_motohawk_delta_time_DWORK1;/* '<S768>/motohawk_delta_time' */
  uint32_T s799_motohawk_delta_time_DWORK1;/* '<S799>/motohawk_delta_time' */
  uint32_T s756_motohawk_delta_time_DWORK1;/* '<S756>/motohawk_delta_time' */
  uint32_T s782_motohawk_delta_time_DWORK1;/* '<S782>/motohawk_delta_time' */
  uint32_T s430_motohawk_delta_time_DWORK1;/* '<S430>/motohawk_delta_time' */
  uint32_T s625_motohawk_delta_time_DWORK1;/* '<S625>/motohawk_delta_time' */
  uint32_T s608_motohawk_delta_time_DWORK1;/* '<S608>/motohawk_delta_time' */
  uint32_T s816_motohawk_delta_time_DWORK1;/* '<S816>/motohawk_delta_time' */
  uint32_T s833_motohawk_delta_time_DWORK1;/* '<S833>/motohawk_delta_time' */
  uint32_T s642_motohawk_delta_time_DWORK1;/* '<S642>/motohawk_delta_time' */
  uint32_T s638_motohawk_delta_time_DWORK1;/* '<S638>/motohawk_delta_time' */
  uint32_T s595_motohawk_delta_time_DWORK1;/* '<S595>/motohawk_delta_time' */
  uint32_T s604_motohawk_delta_time_DWORK1;/* '<S604>/motohawk_delta_time' */
  uint32_T s507_motohawk_delta_time_DWORK1;/* '<S507>/motohawk_delta_time' */
  uint32_T s515_motohawk_delta_time_DWORK1;/* '<S515>/motohawk_delta_time' */
  uint32_T s432_motohawk_delta_time_DWORK1;/* '<S432>/motohawk_delta_time' */
  uint32_T s688_motohawk_delta_time_DWORK1;/* '<S688>/motohawk_delta_time' */
  uint32_T s654_motohawk_delta_time_DWORK1;/* '<S654>/motohawk_delta_time' */
  uint32_T s357_motohawk_delta_time_DWORK1;/* '<S357>/motohawk_delta_time' */
  uint32_T s370_motohawk_delta_time_DWORK1;/* '<S370>/motohawk_delta_time' */
  uint32_T s576_motohawk_delta_time_DWORK1;/* '<S576>/motohawk_delta_time' */
  uint32_T s424_motohawk_delta_time_DWORK1;/* '<S424>/motohawk_delta_time' */
  uint32_T s587_motohawk_delta_time_DWORK1;/* '<S587>/motohawk_delta_time' */
  uint32_T s592_motohawk_delta_time_DWORK1;/* '<S592>/motohawk_delta_time' */
  uint32_T s662_motohawk_delta_time_DWORK1;/* '<S662>/motohawk_delta_time' */
  uint32_T s358_motohawk_delta_time_DWORK1;/* '<S358>/motohawk_delta_time' */
  uint32_T s876_motohawk_delta_time_DWORK1;/* '<S876>/motohawk_delta_time' */
  uint32_T s873_motohawk_delta_time_DWORK1;/* '<S873>/motohawk_delta_time' */
  uint32_T s878_motohawk_delta_time_DWORK1;/* '<S878>/motohawk_delta_time' */
  uint32_T s879_motohawk_delta_time_DWORK1;/* '<S879>/motohawk_delta_time' */
  uint32_T s880_motohawk_delta_time_DWORK1;/* '<S880>/motohawk_delta_time' */
  uint32_T s895_motohawk_delta_time_DWORK1;/* '<S895>/motohawk_delta_time' */
  uint32_T s646_motohawk_delta_time_DWORK1;/* '<S646>/motohawk_delta_time' */
  uint32_T s896_motohawk_delta_time_DWORK1;/* '<S896>/motohawk_delta_time' */
  uint32_T s672_motohawk_delta_time_DWORK1;/* '<S672>/motohawk_delta_time' */
  uint32_T s897_motohawk_delta_time_DWORK1;/* '<S897>/motohawk_delta_time' */
  uint32_T s901_motohawk_delta_time_DWORK1;/* '<S901>/motohawk_delta_time' */
  uint32_T s904_motohawk_delta_time_DWORK1;/* '<S904>/motohawk_delta_time' */
  uint32_T s903_motohawk_delta_time_DWORK1;/* '<S903>/motohawk_delta_time' */
  uint32_T s957_motohawk_delta_time_DWORK1;/* '<S957>/motohawk_delta_time' */
  uint32_T s434_motohawk_delta_time_DWORK1;/* '<S434>/motohawk_delta_time' */
  uint32_T s680_motohawk_delta_time_DWORK1;/* '<S680>/motohawk_delta_time' */
  uint32_T s606_motohawk_delta_time_DWORK1;/* '<S606>/motohawk_delta_time' */
  uint32_T s699_motohawk_delta_time_DWORK1;/* '<S699>/motohawk_delta_time' */
  uint32_T s721_motohawk_delta_time_DWORK1;/* '<S721>/motohawk_delta_time' */
  uint32_T s739_motohawk_delta_time_DWORK1;/* '<S739>/motohawk_delta_time' */
  uint32_T s730_motohawk_delta_time_DWORK1;/* '<S730>/motohawk_delta_time' */
  uint32_T s712_motohawk_delta_time_DWORK1;/* '<S712>/motohawk_delta_time' */
  uint32_T s337_motohawk_delta_time_DWORK1;/* '<S337>/motohawk_delta_time' */
  uint32_T s419_motohawk_delta_time_DWORK1;/* '<S419>/motohawk_delta_time' */
  uint32_T s401_motohawk_delta_time_DWORK1;/* '<S401>/motohawk_delta_time' */
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
  uint32_T s1015_motohawk_delta_time_DWORK1;/* '<S1015>/motohawk_delta_time' */
  uint32_T s1006_motohawk_delta_time_DWORK1;/* '<S1006>/motohawk_delta_time' */
  int_T s153_HitCrossing1_MODE;        /* '<S153>/Hit  Crossing1' */
  uint16_T s856_InjectorSequence_DWORK2;/* '<S856>/Injector Sequence' */
  int8_T s403_UnitDelay_DSTATE;        /* '<S403>/Unit Delay' */
  int8_T s402_UnitDelay_DSTATE;        /* '<S402>/Unit Delay' */
  int8_T s364_UnitDelay_DSTATE;        /* '<S364>/Unit Delay' */
  uint8_T s406_UnitDelay_DSTATE;       /* '<S406>/Unit Delay' */
  uint8_T s428_CrankCounter_DSTATE;    /* '<S428>/CrankCounter' */
  uint8_T s102_UnitDelay1_DSTATE;      /* '<S102>/Unit Delay1' */
  boolean_T s566_UnitDelay2_DSTATE;    /* '<S566>/Unit Delay2' */
  boolean_T s379_UnitDelay_DSTATE;     /* '<S379>/Unit Delay' */
  boolean_T s378_InitialConditionisTrue_DSTATE;/* '<S378>/Initial Condition is True' */
  boolean_T s881_UnitDelay5_DSTATE;    /* '<S881>/Unit Delay5' */
  boolean_T s882_UnitDelay5_DSTATE;    /* '<S882>/Unit Delay5' */
  boolean_T s767_InitialConditionisTrue_DSTATE;/* '<S767>/Initial Condition is True' */
  boolean_T s348_UnitDelay_DSTATE;     /* '<S348>/Unit Delay' */
  boolean_T s349_UnitDelay_DSTATE;     /* '<S349>/Unit Delay' */
  boolean_T s354_UnitDelay_DSTATE;     /* '<S354>/Unit Delay' */
  boolean_T s355_UnitDelay_DSTATE;     /* '<S355>/Unit Delay' */
  boolean_T s350_UnitDelay_DSTATE;     /* '<S350>/Unit Delay' */
  boolean_T s356_UnitDelay_DSTATE;     /* '<S356>/Unit Delay' */
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
  boolean_T s1003_UnitDelay8_DSTATE;   /* '<S1003>/Unit Delay8' */
  boolean_T s1003_UnitDelay6_DSTATE;   /* '<S1003>/Unit Delay6' */
  boolean_T s1003_UnitDelay7_DSTATE;   /* '<S1003>/Unit Delay7' */
  boolean_T s999_UnitDelay_DSTATE;     /* '<S999>/Unit Delay' */
  boolean_T s1005_UnitDelay2_DSTATE;   /* '<S1005>/Unit Delay2' */
  boolean_T s998_UnitDelay5_DSTATE;    /* '<S998>/Unit Delay5' */
  boolean_T s1005_UnitDelay_DSTATE;    /* '<S1005>/Unit Delay' */
  boolean_T s1005_UnitDelay1_DSTATE;   /* '<S1005>/Unit Delay1' */
  boolean_T s998_UnitDelay3_DSTATE;    /* '<S998>/Unit Delay3' */
  boolean_T s998_UnitDelay4_DSTATE;    /* '<S998>/Unit Delay4' */
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
  uint8_T s444_motohawk_trigger_DWORK1;/* '<S444>/motohawk_trigger' */
  uint8_T s406_motohawk_trigger_DWORK1;/* '<S406>/motohawk_trigger' */
  uint8_T s621_motohawk_trigger5_DWORK1;/* '<S621>/motohawk_trigger5' */
  uint8_T s444_motohawk_trigger1_DWORK1;/* '<S444>/motohawk_trigger1' */
  uint8_T s14_motohawk_trigger1_DWORK1;/* '<S14>/motohawk_trigger1' */
  uint8_T s14_motohawk_trigger_DWORK1; /* '<S14>/motohawk_trigger' */
  uint8_T s13_motohawk_trigger_DWORK1; /* '<S13>/motohawk_trigger' */
  uint8_T s749_motohawk_trigger_DWORK1;/* '<S749>/motohawk_trigger' */
  uint8_T s751_motohawk_trigger_DWORK1;/* '<S751>/motohawk_trigger' */
  uint8_T s912_motohawk_trigger1_DWORK1;/* '<S912>/motohawk_trigger1' */
  uint8_T s427_is_c2_BaseEngineController_LS;/* '<S406>/Engine State Machine' */
  uint8_T s363_is_c19_BaseEngineController_LS;/* '<S357>/Baro Stall State Delay' */
  uint8_T s322_is_active_c3_BaseEngineController_LS;/* '<S311>/Ice Break' */
  uint8_T s322_is_c3_BaseEngineController_LS;/* '<S311>/Ice Break' */
  uint8_T s136_motohawk_trigger1_DWORK1;/* '<S136>/motohawk_trigger1' */
  uint8_T s265_is_active_c12_BaseEngineController_LS;/* '<S250>/IdleStateMachine' */
  uint8_T s265_is_c12_BaseEngineController_LS;/* '<S250>/IdleStateMachine' */
  uint8_T s102_motohawk_trigger_DWORK1;/* '<S102>/motohawk_trigger' */
  uint8_T s27_is_c9_BaseEngineController_LS;/* '<S20>/ETC Test  Manager' */
  uint8_T s1002_is_c8_BaseEngineController_LS;/* '<S998>/ECUP Latch' */
  boolean_T s605_Memory_PreviousInput; /* '<S605>/Memory' */
  boolean_T s856_InjectorSequence_DWORK1[8];/* '<S856>/Injector Sequence' */
  boolean_T s286_Multiplyby10ifnotyetenabled_FirstOutputTime;/* '<S286>/Multiply by 1.0 if not yet enabled' */
  boolean_T s1019_Memory_PreviousInput;/* '<S1019>/Memory' */
  boolean_T s15_Stall_MODE;            /* '<S15>/Stall' */
  boolean_T s15_Crank_MODE;            /* '<S15>/Crank' */
  boolean_T s357_CaptureSignalAtStartup_MODE;/* '<S357>/Capture Signal At Startup' */
  boolean_T s361_CaptureECTAtStartup_MODE;/* '<S361>/Capture ECT At Startup' */
  boolean_T s15_Run_MODE;              /* '<S15>/Run' */
  boolean_T s22_PassThrough1_MODE;     /* '<S22>/PassThrough1' */
  boolean_T s22_PassThrough3_MODE;     /* '<S22>/PassThrough3' */
  boolean_T s22_SequenceCutMachine_MODE;/* '<S22>/SequenceCutMachine' */
  boolean_T s22_PassThrough5_MODE;     /* '<S22>/PassThrough5' */
  boolean_T s22_PassThrough4_MODE;     /* '<S22>/PassThrough4' */
  boolean_T s361_CaptureIATAtStartup_MODE;/* '<S361>/Capture IAT At Startup' */
  boolean_T s14_ElectronicThrottleController_MODE;/* '<S14>/Electronic Throttle Controller' */
  boolean_T s207_DeltaTPSTransientFueling_MODE;/* '<S207>/Delta TPS Transient Fueling' */
  boolean_T s212_ECTTransientFueling_MODE;/* '<S212>/ECT Transient Fueling' */
  boolean_T s212_OXYTransientFueling_MODE;/* '<S212>/OXY Transient Fueling' */
  boolean_T s31_PassThrough_MODE;      /* '<S31>/PassThrough' */
  rtDW_CollectAverage_BaseEngineController_LS s403_CollectAverage;/* '<S403>/Collect Average' */
  rtDW_CollectAverage_BaseEngineController_LS s402_CollectAverage;/* '<S402>/Collect Average' */
  rtDW_CollectAverage_BaseEngineController_LS s364_CollectAverage;/* '<S364>/Collect Average' */
} D_Work_BaseEngineController_LS;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState HitCrossing1_Input_ZCE;   /* '<S153>/Hit  Crossing1' */
  ZCSigState ResetTasksCompleteToFalse_Trig_ZCE;/* '<S32>/Reset TasksComplete To False' */
  ZCSigState ResetTasksCompleteToTrue_Trig_ZCE;/* '<S20>/Reset TasksComplete To True' */
  ZCSigState ShutdownpoweronECU565563_Trig_ZCE;/* '<S1005>/Shutdown power on ECU565//563' */
  ZCSigState SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE;/* '<S1005>/Save NV Vars one tick before MPRD off' */
  ZCSigState ProcessorReboot_Trig_ZCE; /* '<S1005>/Processor Reboot' */
  ZCSigState PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE;/* '<S1005>/Post Shutdown two ticks before MPRD off' */
  ZCSigState ShutdownpoweronECU565563_Trig_ZCE_l;/* '<S1003>/Shutdown power on ECU565//563' */
  ZCSigState SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE_m;/* '<S1003>/Save NV Vars one tick before MPRD off' */
  ZCSigState ProcessorReboot_Trig_ZCE_h;/* '<S1003>/Processor Reboot' */
  ZCSigState PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE_h;/* '<S1003>/Post Shutdown two ticks before MPRD off' */
  ZCSigState Clear_Trig_ZCE;           /* '<S1001>/Clear' */
  ZCSigState Clear_Trig_ZCE_k;         /* '<S1000>/Clear' */
} PrevZCSigStates_BaseEngineController_LS;

/* Invariant block signals (auto storage) */
typedef struct {
  const real_T s856_Gain4;             /* '<S856>/Gain4' */
  const real_T s138_motohawk_replicate2;/* '<S138>/motohawk_replicate2' */
  const real_T s138_motohawk_replicate[8];/* '<S138>/motohawk_replicate' */
  const uint32_T s856_DataTypeConversion5;/* '<S856>/Data Type Conversion5' */
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
   *   '<S348>/Combinatorial  Logic'
   *   '<S349>/Combinatorial  Logic'
   *   '<S350>/Combinatorial  Logic'
   *   '<S354>/Combinatorial  Logic'
   *   '<S355>/Combinatorial  Logic'
   *   '<S356>/Combinatorial  Logic'
   *   '<S45>/Combinatorial  Logic'
   *   '<S297>/Combinatorial  Logic'
   */
  boolean_T pooled907[8];

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S1019>/Logic'
   *   '<S605>/Logic'
   */
  boolean_T pooled908[16];
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
 * '<S315>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/FAN Control/motohawk_table_1d
 * '<S316>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/FAN Control/motohawk_table_1d1
 * '<S317>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/FAN Control/motohawk_table_1d2
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
 * '<S334>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Boost Fault/Run State
 * '<S335>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Engine Overheat Fault Logic/Run State
 * '<S336>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Fuel Economy/Calculate Fuel Density
 * '<S337>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Fuel Economy/First Order Low Pass (Tunable)
 * '<S338>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Fuel Economy/Multiply and Divide, avoiding divde by zero1
 * '<S339>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Fuel Economy/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S340>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Lean Protect/Run State
 * '<S341>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Low Oil Pressure Fault Logic/Run State
 * '<S342>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MAP Fault Logic/Run State
 * '<S343>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/BaseRevLimit
 * '<S344>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/TwoStepRevLimit
 * '<S345>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/BaseRevLimit/Hysterisis
 * '<S346>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/BaseRevLimit/Hysterisis1
 * '<S347>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/BaseRevLimit/Hysterisis2
 * '<S348>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/BaseRevLimit/Hysterisis/Hysteresis
 * '<S349>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/BaseRevLimit/Hysterisis1/Hysteresis
 * '<S350>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/BaseRevLimit/Hysterisis2/Hysteresis
 * '<S351>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/TwoStepRevLimit/Hysterisis
 * '<S352>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/TwoStepRevLimit/Hysterisis1
 * '<S353>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/TwoStepRevLimit/Hysterisis2
 * '<S354>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/TwoStepRevLimit/Hysterisis/Hysteresis
 * '<S355>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/TwoStepRevLimit/Hysterisis1/Hysteresis
 * '<S356>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/TwoStepRevLimit/Hysterisis2/Hysteresis
 * '<S357>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs
 * '<S358>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/FuelLevel
 * '<S359>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs
 * '<S360>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes
 * '<S361>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed
 * '<S362>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Virtual Indexes
 * '<S363>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Baro Stall State Delay
 * '<S364>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Capture Signal At Startup
 * '<S365>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Running Baro Learn
 * '<S366>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Speed Density - MAP Referenced - Adaptive
 * '<S367>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/motohawk_override_rel
 * '<S368>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Capture Signal At Startup/Collect Average
 * '<S369>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Running Baro Learn/Compare To Constant
 * '<S370>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Running Baro Learn/Time Since Enabled (With Input)1
 * '<S371>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Speed Density - MAP Referenced - Adaptive/Adapt VolEff Map
 * '<S372>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Speed Density - MAP Referenced - Adaptive/C to K1
 * '<S373>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Speed Density - MAP Referenced - Adaptive/Compare To Constant
 * '<S374>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Speed Density - MAP Referenced - Adaptive/Adapt VolEff Map/motohawk_table_1d
 * '<S375>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/motohawk_override_rel/NewValue
 * '<S376>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/motohawk_override_rel/OldValue
 * '<S377>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/FuelLevel/First Order Low Pass
 * '<S378>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/FuelLevel/First Time
 * '<S379>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/FuelLevel/Rising Edge
 * '<S380>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/FuelLevel/motohawk_table_2d
 * '<S381>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag
 * '<S382>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect1
 * '<S383>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect3
 * '<S384>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect1/DecreasingFilter
 * '<S385>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect1/First Order Low Pass
 * '<S386>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect1/IncreasingFilter
 * '<S387>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect3/DecreasingFilter
 * '<S388>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect3/First Order Low Pass
 * '<S389>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect3/IncreasingFilter
 * '<S390>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/ACPres Index
 * '<S391>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/CAT Index
 * '<S392>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/ECT Index
 * '<S393>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/IAT Indexes
 * '<S394>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/MAP Indexes
 * '<S395>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/OXY Index
 * '<S396>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/RPM Indexes
 * '<S397>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/SysVolt Index
 * '<S398>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/TPS Indexes
 * '<S399>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/VSPD Index
 * '<S400>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/APP  Sensor Arbitration1
 * '<S401>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request
 * '<S402>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Capture ECT At Startup
 * '<S403>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Capture IAT At Startup
 * '<S404>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/CutThrottle APP Limiting
 * '<S405>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Engine Accel
 * '<S406>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/EngineState
 * '<S407>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Fuel Delta Pressure Calculation
 * '<S408>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Gear Estimator
 * '<S409>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/O2 De-lag
 * '<S410>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Stall
 * '<S411>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/TPS  Sensor Arbitration
 * '<S412>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Time Since Key On
 * '<S413>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Time Since Run
 * '<S414>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Time Since Stall
 * '<S415>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/VSPD_Selector
 * '<S416>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request/First Order Low Pass
 * '<S417>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request/PassThrough1
 * '<S418>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request/PassThrough2
 * '<S419>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request/Variable Rate Limiter
 * '<S420>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request/Variable Rate Limiter/Saturation
 * '<S421>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Capture ECT At Startup/Collect Average
 * '<S422>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Capture IAT At Startup/Collect Average
 * '<S423>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/CutThrottle APP Limiting/Bound APP if overheating
 * '<S424>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Engine Accel/Derivitive3
 * '<S425>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Engine Accel/First Order Low Pass (Tunable)
 * '<S426>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Engine Accel/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S427>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/EngineState/Engine State Machine
 * '<S428>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/EngineState/TDC_Counter
 * '<S429>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/EngineState/TDC_Counter/Crank State
 * '<S430>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Time Since Key On/Time Since Enabled (With Input)2
 * '<S431>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Time Since Run/RunState
 * '<S432>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Time Since Run/Time Since Enabled (With Input)2
 * '<S433>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Time Since Stall/Stall State
 * '<S434>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Time Since Stall/Time Since Enabled (With Input)1
 * '<S435>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Virtual Indexes/ECT_KeyUp
 * '<S436>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Virtual Indexes/IAT_KeyUp
 * '<S437>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Virtual Indexes/MAFPortIndex
 * '<S438>' : BaseEngineController_LS/Foreground/Control/motohawk_function_collector/motohawk_function_collector_in
 * '<S439>' : BaseEngineController_LS/Foreground/Control/motohawk_function_collector/motohawk_function_collector_in/Triggered Subsystem
 * '<S440>' : BaseEngineController_LS/Foreground/Inputs/CAN
 * '<S441>' : BaseEngineController_LS/Foreground/Inputs/Digital
 * '<S442>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed
 * '<S443>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors
 * '<S444>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors
 * '<S445>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors
 * '<S446>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS
 * '<S447>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda
 * '<S448>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs
 * '<S449>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs1
 * '<S450>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs10
 * '<S451>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs11
 * '<S452>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs12
 * '<S453>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs2
 * '<S454>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs3
 * '<S455>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs4
 * '<S456>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs5
 * '<S457>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs6
 * '<S458>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs7
 * '<S459>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs8
 * '<S460>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs9
 * '<S461>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs/NewValue
 * '<S462>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs/OldValue
 * '<S463>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs1/NewValue
 * '<S464>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs1/OldValue
 * '<S465>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs10/NewValue
 * '<S466>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs10/OldValue
 * '<S467>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs11/NewValue
 * '<S468>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs11/OldValue
 * '<S469>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs12/NewValue
 * '<S470>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs12/OldValue
 * '<S471>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs2/NewValue
 * '<S472>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs2/OldValue
 * '<S473>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs3/NewValue
 * '<S474>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs3/OldValue
 * '<S475>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs4/NewValue
 * '<S476>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs4/OldValue
 * '<S477>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs5/NewValue
 * '<S478>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs5/OldValue
 * '<S479>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs6/NewValue
 * '<S480>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs6/OldValue
 * '<S481>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs7/NewValue
 * '<S482>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs7/OldValue
 * '<S483>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs8/NewValue
 * '<S484>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs8/OldValue
 * '<S485>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs9/NewValue
 * '<S486>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs9/OldValue
 * '<S487>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization
 * '<S488>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization1
 * '<S489>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs
 * '<S490>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs1
 * '<S491>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs10
 * '<S492>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs11
 * '<S493>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs12
 * '<S494>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs13
 * '<S495>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs14
 * '<S496>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs15
 * '<S497>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs16
 * '<S498>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs17
 * '<S499>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs2
 * '<S500>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs3
 * '<S501>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs4
 * '<S502>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs5
 * '<S503>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs6
 * '<S504>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs7
 * '<S505>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs8
 * '<S506>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs9
 * '<S507>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization/First Order Low Pass
 * '<S508>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization/If Action Subsystem
 * '<S509>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization/If Action Subsystem1
 * '<S510>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization/If Action Subsystem2
 * '<S511>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization/Override
 * '<S512>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization/First Order Low Pass/First Order Low Pass
 * '<S513>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization/Override/NewValue
 * '<S514>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization/Override/OldValue
 * '<S515>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization1/First Order Low Pass
 * '<S516>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization1/If Action Subsystem
 * '<S517>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization1/If Action Subsystem1
 * '<S518>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization1/If Action Subsystem2
 * '<S519>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization1/Override
 * '<S520>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization1/First Order Low Pass/First Order Low Pass
 * '<S521>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization1/Override/NewValue
 * '<S522>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization1/Override/OldValue
 * '<S523>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs/NewValue
 * '<S524>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs/OldValue
 * '<S525>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs1/NewValue
 * '<S526>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs1/OldValue
 * '<S527>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs10/NewValue
 * '<S528>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs10/OldValue
 * '<S529>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs11/NewValue
 * '<S530>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs11/OldValue
 * '<S531>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs12/NewValue
 * '<S532>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs12/OldValue
 * '<S533>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs13/NewValue
 * '<S534>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs13/OldValue
 * '<S535>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs14/NewValue
 * '<S536>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs14/OldValue
 * '<S537>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs15/NewValue
 * '<S538>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs15/OldValue
 * '<S539>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs16/NewValue
 * '<S540>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs16/OldValue
 * '<S541>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs17/NewValue
 * '<S542>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs17/OldValue
 * '<S543>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs2/NewValue
 * '<S544>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs2/OldValue
 * '<S545>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs3/NewValue
 * '<S546>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs3/OldValue
 * '<S547>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs4/NewValue
 * '<S548>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs4/OldValue
 * '<S549>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs5/NewValue
 * '<S550>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs5/OldValue
 * '<S551>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs6/NewValue
 * '<S552>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs6/OldValue
 * '<S553>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs7/NewValue
 * '<S554>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs7/OldValue
 * '<S555>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs8/NewValue
 * '<S556>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs8/OldValue
 * '<S557>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs9/NewValue
 * '<S558>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs9/OldValue
 * '<S559>' : BaseEngineController_LS/Foreground/Inputs/Digital/ACSw
 * '<S560>' : BaseEngineController_LS/Foreground/Inputs/Digital/ClutchSw
 * '<S561>' : BaseEngineController_LS/Foreground/Inputs/Digital/ESTOP
 * '<S562>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor
 * '<S563>' : BaseEngineController_LS/Foreground/Inputs/Digital/Scramble
 * '<S564>' : BaseEngineController_LS/Foreground/Inputs/Digital/Two Step
 * '<S565>' : BaseEngineController_LS/Foreground/Inputs/Digital/VSPD
 * '<S566>' : BaseEngineController_LS/Foreground/Inputs/Digital/VSPD_Filt
 * '<S567>' : BaseEngineController_LS/Foreground/Inputs/Digital/ACSw /Override in Engineering Units
 * '<S568>' : BaseEngineController_LS/Foreground/Inputs/Digital/ACSw /Override in Engineering Units/NewValue
 * '<S569>' : BaseEngineController_LS/Foreground/Inputs/Digital/ACSw /Override in Engineering Units/OldValue
 * '<S570>' : BaseEngineController_LS/Foreground/Inputs/Digital/ClutchSw/Override in Engineering Units
 * '<S571>' : BaseEngineController_LS/Foreground/Inputs/Digital/ClutchSw/Override in Engineering Units/NewValue
 * '<S572>' : BaseEngineController_LS/Foreground/Inputs/Digital/ClutchSw/Override in Engineering Units/OldValue
 * '<S573>' : BaseEngineController_LS/Foreground/Inputs/Digital/ESTOP/Override in Engineering Units
 * '<S574>' : BaseEngineController_LS/Foreground/Inputs/Digital/ESTOP/Override in Engineering Units/NewValue
 * '<S575>' : BaseEngineController_LS/Foreground/Inputs/Digital/ESTOP/Override in Engineering Units/OldValue
 * '<S576>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor/First Order Low Pass
 * '<S577>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor/If Action Subsystem
 * '<S578>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor/If Action Subsystem1
 * '<S579>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor/If Action Subsystem2
 * '<S580>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor/Override
 * '<S581>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor/motohawk_table_1d1
 * '<S582>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor/First Order Low Pass/First Order Low Pass
 * '<S583>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor/Override/NewValue
 * '<S584>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor/Override/OldValue
 * '<S585>' : BaseEngineController_LS/Foreground/Inputs/Digital/Scramble /Button Delay 1
 * '<S586>' : BaseEngineController_LS/Foreground/Inputs/Digital/Scramble /Override in Engineering Units
 * '<S587>' : BaseEngineController_LS/Foreground/Inputs/Digital/Scramble /Button Delay 1/Time Since Enabled (With Input)4
 * '<S588>' : BaseEngineController_LS/Foreground/Inputs/Digital/Scramble /Override in Engineering Units/NewValue
 * '<S589>' : BaseEngineController_LS/Foreground/Inputs/Digital/Scramble /Override in Engineering Units/OldValue
 * '<S590>' : BaseEngineController_LS/Foreground/Inputs/Digital/Two Step/Button Delay 1
 * '<S591>' : BaseEngineController_LS/Foreground/Inputs/Digital/Two Step/Override in Engineering Units
 * '<S592>' : BaseEngineController_LS/Foreground/Inputs/Digital/Two Step/Button Delay 1/Time Since Enabled (With Input)4
 * '<S593>' : BaseEngineController_LS/Foreground/Inputs/Digital/Two Step/Override in Engineering Units/NewValue
 * '<S594>' : BaseEngineController_LS/Foreground/Inputs/Digital/Two Step/Override in Engineering Units/OldValue
 * '<S595>' : BaseEngineController_LS/Foreground/Inputs/Digital/VSPD/First Order Low Pass
 * '<S596>' : BaseEngineController_LS/Foreground/Inputs/Digital/VSPD/If Action Subsystem
 * '<S597>' : BaseEngineController_LS/Foreground/Inputs/Digital/VSPD/If Action Subsystem1
 * '<S598>' : BaseEngineController_LS/Foreground/Inputs/Digital/VSPD/If Action Subsystem2
 * '<S599>' : BaseEngineController_LS/Foreground/Inputs/Digital/VSPD/Override
 * '<S600>' : BaseEngineController_LS/Foreground/Inputs/Digital/VSPD/motohawk_table_1d1
 * '<S601>' : BaseEngineController_LS/Foreground/Inputs/Digital/VSPD/First Order Low Pass/First Order Low Pass
 * '<S602>' : BaseEngineController_LS/Foreground/Inputs/Digital/VSPD/Override/NewValue
 * '<S603>' : BaseEngineController_LS/Foreground/Inputs/Digital/VSPD/Override/OldValue
 * '<S604>' : BaseEngineController_LS/Foreground/Inputs/Digital/VSPD_Filt/Derivitive
 * '<S605>' : BaseEngineController_LS/Foreground/Inputs/Digital/VSPD_Filt/S-R Flip-Flop
 * '<S606>' : BaseEngineController_LS/Foreground/Inputs/Digital/VSPD_Filt/Time Since Enabled (With Input)1
 * '<S607>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed/Encoder Diagnostics
 * '<S608>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed/First Order Low Pass (Tunable)1
 * '<S609>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/CamEdges
 * '<S610>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/CamSync
 * '<S611>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/CounterThresh
 * '<S612>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/CrankEdges
 * '<S613>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/CrankSync
 * '<S614>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/motohawk_model_probe_eval_f
 * '<S615>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed/First Order Low Pass (Tunable)1/First Order Low Pass
 * '<S616>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/ACPres
 * '<S617>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor
 * '<S618>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelPres
 * '<S619>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP
 * '<S620>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAPTime
 * '<S621>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP_Crank_Synchronous
 * '<S622>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/OilPres
 * '<S623>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SensVolts
 * '<S624>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SysVolts
 * '<S625>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/ACPres /First Order Low Pass
 * '<S626>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/ACPres /If Action Subsystem
 * '<S627>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/ACPres /If Action Subsystem1
 * '<S628>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/ACPres /If Action Subsystem2
 * '<S629>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/ACPres /Override
 * '<S630>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/ACPres /First Order Low Pass/First Order Low Pass
 * '<S631>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/ACPres /Override/NewValue
 * '<S632>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/ACPres /Override/OldValue
 * '<S633>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options
 * '<S634>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/If Action Subsystem
 * '<S635>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/If Action Subsystem1
 * '<S636>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/If Action Subsystem2
 * '<S637>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Override
 * '<S638>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options/First Order Low Pass
 * '<S639>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options/Moving Average Filter
 * '<S640>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options/Rate Limiter
 * '<S641>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options/First Order Low Pass/First Order Low Pass
 * '<S642>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options/Rate Limiter/Variable Rate Limiter
 * '<S643>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options/Rate Limiter/Variable Rate Limiter/Saturation
 * '<S644>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Override/NewValue
 * '<S645>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Override/OldValue
 * '<S646>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelPres/First Order Low Pass
 * '<S647>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelPres/If Action Subsystem
 * '<S648>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelPres/If Action Subsystem1
 * '<S649>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelPres/If Action Subsystem2
 * '<S650>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelPres/Override
 * '<S651>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelPres/First Order Low Pass/First Order Low Pass
 * '<S652>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelPres/Override/NewValue
 * '<S653>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelPres/Override/OldValue
 * '<S654>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP/First Order Low Pass
 * '<S655>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP/If Action Subsystem
 * '<S656>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP/If Action Subsystem1
 * '<S657>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP/If Action Subsystem2
 * '<S658>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP/Override
 * '<S659>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP/First Order Low Pass/First Order Low Pass
 * '<S660>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP/Override/NewValue
 * '<S661>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP/Override/OldValue
 * '<S662>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAPTime/First Order Low Pass
 * '<S663>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAPTime/If Action Subsystem
 * '<S664>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAPTime/If Action Subsystem1
 * '<S665>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAPTime/If Action Subsystem2
 * '<S666>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAPTime/Override
 * '<S667>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAPTime/First Order Low Pass/First Order Low Pass
 * '<S668>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAPTime/Override/NewValue
 * '<S669>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAPTime/Override/OldValue
 * '<S670>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP_Crank_Synchronous/MID_TDC
 * '<S671>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP_Crank_Synchronous/Once at Startup
 * '<S672>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/OilPres/First Order Low Pass
 * '<S673>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/OilPres/If Action Subsystem
 * '<S674>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/OilPres/If Action Subsystem1
 * '<S675>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/OilPres/If Action Subsystem2
 * '<S676>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/OilPres/Override
 * '<S677>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/OilPres/First Order Low Pass/First Order Low Pass
 * '<S678>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/OilPres/Override/NewValue
 * '<S679>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/OilPres/Override/OldValue
 * '<S680>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SensVolts/First Order Low Pass
 * '<S681>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SensVolts/If Action Subsystem
 * '<S682>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SensVolts/If Action Subsystem1
 * '<S683>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SensVolts/If Action Subsystem2
 * '<S684>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SensVolts/Override
 * '<S685>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SensVolts/First Order Low Pass/First Order Low Pass
 * '<S686>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SensVolts/Override/NewValue
 * '<S687>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SensVolts/Override/OldValue
 * '<S688>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SysVolts/First Order Low Pass
 * '<S689>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SysVolts/If Action Subsystem
 * '<S690>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SysVolts/If Action Subsystem1
 * '<S691>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SysVolts/If Action Subsystem2
 * '<S692>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SysVolts/Override
 * '<S693>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SysVolts/First Order Low Pass/First Order Low Pass
 * '<S694>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SysVolts/Override/NewValue
 * '<S695>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SysVolts/Override/OldValue
 * '<S696>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Fuel Level
 * '<S697>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors
 * '<S698>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Fuel Level/Fuel_Lvl
 * '<S699>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Fuel Level/Fuel_Lvl  /First Order Low Pass
 * '<S700>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Fuel Level/Fuel_Lvl  /If Action Subsystem
 * '<S701>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Fuel Level/Fuel_Lvl  /If Action Subsystem1
 * '<S702>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Fuel Level/Fuel_Lvl  /If Action Subsystem2
 * '<S703>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Fuel Level/Fuel_Lvl  /Override
 * '<S704>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Fuel Level/Fuel_Lvl  /motohawk_table_1d1
 * '<S705>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Fuel Level/Fuel_Lvl  /First Order Low Pass/First Order Low Pass
 * '<S706>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Fuel Level/Fuel_Lvl  /Override/NewValue
 * '<S707>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Fuel Level/Fuel_Lvl  /Override/OldValue
 * '<S708>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/CAT1
 * '<S709>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT
 * '<S710>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP
 * '<S711>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT
 * '<S712>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/CAT1/First Order Low Pass
 * '<S713>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/CAT1/If Action Subsystem
 * '<S714>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/CAT1/If Action Subsystem1
 * '<S715>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/CAT1/If Action Subsystem2
 * '<S716>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/CAT1/Override
 * '<S717>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/CAT1/motohawk_table_1d1
 * '<S718>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/CAT1/First Order Low Pass/First Order Low Pass
 * '<S719>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/CAT1/Override/NewValue
 * '<S720>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/CAT1/Override/OldValue
 * '<S721>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /First Order Low Pass
 * '<S722>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /If Action Subsystem
 * '<S723>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /If Action Subsystem1
 * '<S724>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /If Action Subsystem2
 * '<S725>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /Override
 * '<S726>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /motohawk_table_1d1
 * '<S727>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /First Order Low Pass/First Order Low Pass
 * '<S728>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /Override/NewValue
 * '<S729>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /Override/OldValue
 * '<S730>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /First Order Low Pass
 * '<S731>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /If Action Subsystem
 * '<S732>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /If Action Subsystem1
 * '<S733>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /If Action Subsystem2
 * '<S734>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /Override
 * '<S735>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /motohawk_table_1d1
 * '<S736>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /First Order Low Pass/First Order Low Pass
 * '<S737>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /Override/NewValue
 * '<S738>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /Override/OldValue
 * '<S739>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /First Order Low Pass
 * '<S740>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /If Action Subsystem
 * '<S741>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /If Action Subsystem1
 * '<S742>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /If Action Subsystem2
 * '<S743>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /Override
 * '<S744>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /motohawk_table_1d1
 * '<S745>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /First Order Low Pass/First Order Low Pass
 * '<S746>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /Override/NewValue
 * '<S747>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /Override/OldValue
 * '<S748>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1
 * '<S749>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1ForcedAdapt
 * '<S750>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2
 * '<S751>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2ForcedAdapt
 * '<S752>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt
 * '<S753>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1
 * '<S754>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1
 * '<S755>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2
 * '<S756>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1/First Order Low Pass
 * '<S757>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1/If Action Subsystem
 * '<S758>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1/If Action Subsystem1
 * '<S759>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1/If Action Subsystem2
 * '<S760>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1/Override
 * '<S761>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1/Saturation
 * '<S762>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1/motohawk_table_1d1
 * '<S763>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1/First Order Low Pass/First Order Low Pass
 * '<S764>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1/Override/NewValue
 * '<S765>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1/Override/OldValue
 * '<S766>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1ForcedAdapt/Function-Call Subsystem
 * '<S767>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1ForcedAdapt/Function-Call Subsystem/First Time
 * '<S768>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2/First Order Low Pass
 * '<S769>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2/If Action Subsystem
 * '<S770>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2/If Action Subsystem1
 * '<S771>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2/If Action Subsystem2
 * '<S772>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2/Override
 * '<S773>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2/Saturation
 * '<S774>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2/motohawk_table_1d1
 * '<S775>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2/First Order Low Pass/First Order Low Pass
 * '<S776>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2/Override/NewValue
 * '<S777>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2/Override/OldValue
 * '<S778>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2ForcedAdapt/Function-Call Subsystem
 * '<S779>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2ForcedAdapt/Function-Call Subsystem/First Time
 * '<S780>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/ADAPT SCALING
 * '<S781>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/FAULTS
 * '<S782>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/First Order Low Pass
 * '<S783>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/SENSOR FAULT MANAGER
 * '<S784>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/Saturation
 * '<S785>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/ADAPT SCALING/ADAPT HI
 * '<S786>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/ADAPT SCALING/ADAPT LO
 * '<S787>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/ADAPT SCALING/MinMaxFilter
 * '<S788>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/ADAPT SCALING/ADAPT HI/Store Current Position
 * '<S789>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/ADAPT SCALING/ADAPT LO/Store Current Position
 * '<S790>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/First Order Low Pass/First Order Low Pass
 * '<S791>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/SENSOR FAULT MANAGER/If Action Subsystem
 * '<S792>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/SENSOR FAULT MANAGER/If Action Subsystem1
 * '<S793>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/SENSOR FAULT MANAGER/If Action Subsystem2
 * '<S794>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/SENSOR FAULT MANAGER/Override
 * '<S795>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/SENSOR FAULT MANAGER/Override/NewValue
 * '<S796>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/SENSOR FAULT MANAGER/Override/OldValue
 * '<S797>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/ADAPT SCALING
 * '<S798>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/FAULTS
 * '<S799>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/First Order Low Pass
 * '<S800>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/SENSOR FAULT MANAGER
 * '<S801>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/Saturation
 * '<S802>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/ADAPT SCALING/ADAPT HI
 * '<S803>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/ADAPT SCALING/ADAPT LO
 * '<S804>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/ADAPT SCALING/MinMaxFilter
 * '<S805>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/ADAPT SCALING/ADAPT HI/Store Current Position
 * '<S806>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/ADAPT SCALING/ADAPT LO/Store Current Position
 * '<S807>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/First Order Low Pass/First Order Low Pass
 * '<S808>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/SENSOR FAULT MANAGER/If Action Subsystem
 * '<S809>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/SENSOR FAULT MANAGER/If Action Subsystem1
 * '<S810>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/SENSOR FAULT MANAGER/If Action Subsystem2
 * '<S811>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/SENSOR FAULT MANAGER/Override
 * '<S812>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/SENSOR FAULT MANAGER/Override/NewValue
 * '<S813>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/SENSOR FAULT MANAGER/Override/OldValue
 * '<S814>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/ADAPT SCALING
 * '<S815>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/FAULTS
 * '<S816>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/First Order Low Pass
 * '<S817>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER
 * '<S818>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/Saturation
 * '<S819>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/ADAPT SCALING/ADAPT HI
 * '<S820>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/ADAPT SCALING/ADAPT LO
 * '<S821>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/ADAPT SCALING/MinMaxFilter
 * '<S822>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/ADAPT SCALING/ADAPT HI/Store Current Position
 * '<S823>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/ADAPT SCALING/ADAPT LO/Store Current Position
 * '<S824>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/First Order Low Pass/First Order Low Pass
 * '<S825>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER/If Action Subsystem
 * '<S826>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER/If Action Subsystem1
 * '<S827>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER/If Action Subsystem2
 * '<S828>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER/Override
 * '<S829>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER/Override/NewValue
 * '<S830>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER/Override/OldValue
 * '<S831>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/ADAPT SCALING
 * '<S832>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/FAULTS
 * '<S833>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/First Order Low Pass
 * '<S834>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER
 * '<S835>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/Saturation
 * '<S836>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/ADAPT SCALING/ADAPT HI
 * '<S837>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/ADAPT SCALING/ADAPT LO
 * '<S838>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/ADAPT SCALING/MinMaxFilter
 * '<S839>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/ADAPT SCALING/ADAPT HI/Store Current Position
 * '<S840>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/ADAPT SCALING/ADAPT LO/Store Current Position
 * '<S841>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/First Order Low Pass/First Order Low Pass
 * '<S842>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER/If Action Subsystem
 * '<S843>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER/If Action Subsystem1
 * '<S844>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER/If Action Subsystem2
 * '<S845>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER/Override
 * '<S846>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER/Override/NewValue
 * '<S847>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER/Override/OldValue
 * '<S848>' : BaseEngineController_LS/Foreground/Outputs/AC Control
 * '<S849>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash
 * '<S850>' : BaseEngineController_LS/Foreground/Outputs/Coil Control
 * '<S851>' : BaseEngineController_LS/Foreground/Outputs/ETC_CutPower
 * '<S852>' : BaseEngineController_LS/Foreground/Outputs/FAN Control
 * '<S853>' : BaseEngineController_LS/Foreground/Outputs/FuelPump
 * '<S854>' : BaseEngineController_LS/Foreground/Outputs/HBridge
 * '<S855>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control
 * '<S856>' : BaseEngineController_LS/Foreground/Outputs/Injector Control
 * '<S857>' : BaseEngineController_LS/Foreground/Outputs/WASTEGATE-Control
 * '<S858>' : BaseEngineController_LS/Foreground/Outputs/AC Control/Discrete Actuator - AC
 * '<S859>' : BaseEngineController_LS/Foreground/Outputs/AC Control/Discrete Actuator - AC/Override in Engineering Units
 * '<S860>' : BaseEngineController_LS/Foreground/Outputs/AC Control/Discrete Actuator - AC/Override in Engineering Units/NewValue
 * '<S861>' : BaseEngineController_LS/Foreground/Outputs/AC Control/Discrete Actuator - AC/Override in Engineering Units/OldValue
 * '<S862>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Custom 1
 * '<S863>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 1
 * '<S864>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 2
 * '<S865>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 3
 * '<S866>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 4
 * '<S867>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 5
 * '<S868>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 6
 * '<S869>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 7
 * '<S870>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 8
 * '<S871>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message Boost
 * '<S872>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message DBW
 * '<S873>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 1/First Order Low Pass (Tunable)
 * '<S874>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 1/RPM_Filt
 * '<S875>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 1/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S876>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 1/RPM_Filt/First Order Low Pass (Tunable)
 * '<S877>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 1/RPM_Filt/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S878>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/First Order Low Pass (Tunable)
 * '<S879>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/First Order Low Pass (Tunable)1
 * '<S880>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/First Order Low Pass (Tunable)2
 * '<S881>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/PHI_Filt
 * '<S882>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/PHI_Filt1
 * '<S883>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S884>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/First Order Low Pass (Tunable)1/First Order Low Pass
 * '<S885>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/First Order Low Pass (Tunable)2/First Order Low Pass
 * '<S886>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/PHI_Filt/DecreasingFilter
 * '<S887>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/PHI_Filt/First Order Low Pass
 * '<S888>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/PHI_Filt/IncreasingFilter
 * '<S889>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/PHI_Filt1/DecreasingFilter
 * '<S890>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/PHI_Filt1/First Order Low Pass
 * '<S891>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/PHI_Filt1/IncreasingFilter
 * '<S892>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 3/
 * '<S893>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 3/
 * '<S894>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 3/ 1
 * '<S895>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 3/First Order Low Pass (Tunable)
 * '<S896>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 3/First Order Low Pass (Tunable)1
 * '<S897>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 3/First Order Low Pass (Tunable)2
 * '<S898>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 3/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S899>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 3/First Order Low Pass (Tunable)1/First Order Low Pass
 * '<S900>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 3/First Order Low Pass (Tunable)2/First Order Low Pass
 * '<S901>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 6/First Order Low Pass (Tunable)
 * '<S902>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 6/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S903>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message DBW/First Order Low Pass (Tunable)
 * '<S904>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message DBW/First Order Low Pass (Tunable)1
 * '<S905>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message DBW/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S906>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message DBW/First Order Low Pass (Tunable)1/First Order Low Pass
 * '<S907>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/Coil Enable Manager
 * '<S908>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management
 * '<S909>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/motohawk_override_rel
 * '<S910>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/motohawk_override_rel1
 * '<S911>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/Coil Enable Manager/CompareTo
 * '<S912>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/Coil Enable Manager/EST Enable TDC Counter
 * '<S913>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/Coil Enable Manager/EST Enable TDC Counter/EST Enable TDC Counter Stateflow
 * '<S914>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/Coil Enable Manager/EST Enable TDC Counter/TDC_Counter
 * '<S915>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo
 * '<S916>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo1
 * '<S917>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo10
 * '<S918>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo11
 * '<S919>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo12
 * '<S920>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo13
 * '<S921>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo14
 * '<S922>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo15
 * '<S923>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo2
 * '<S924>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo3
 * '<S925>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo4
 * '<S926>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo5
 * '<S927>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo6
 * '<S928>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo7
 * '<S929>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo8
 * '<S930>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo9
 * '<S931>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/motohawk_override_rel/NewValue
 * '<S932>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/motohawk_override_rel/OldValue
 * '<S933>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/motohawk_override_rel1/NewValue
 * '<S934>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/motohawk_override_rel1/OldValue
 * '<S935>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/Discrete Actuator - FAN1
 * '<S936>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/Discrete Actuator - FAN2
 * '<S937>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/IAC-P-CONTROL
 * '<S938>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/IAC-P-CONTROL1
 * '<S939>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/Discrete Actuator - FAN1/Override in Engineering Units
 * '<S940>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/Discrete Actuator - FAN1/Override in Engineering Units/NewValue
 * '<S941>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/Discrete Actuator - FAN1/Override in Engineering Units/OldValue
 * '<S942>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/Discrete Actuator - FAN2/Override in Engineering Units
 * '<S943>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/Discrete Actuator - FAN2/Override in Engineering Units/NewValue
 * '<S944>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/Discrete Actuator - FAN2/Override in Engineering Units/OldValue
 * '<S945>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/IAC-P-CONTROL/Saturation
 * '<S946>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/IAC-P-CONTROL/motohawk_override_abs2
 * '<S947>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/IAC-P-CONTROL/motohawk_override_abs2/NewValue
 * '<S948>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/IAC-P-CONTROL/motohawk_override_abs2/OldValue
 * '<S949>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/IAC-P-CONTROL1/Saturation
 * '<S950>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/IAC-P-CONTROL1/motohawk_override_abs2
 * '<S951>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/IAC-P-CONTROL1/motohawk_override_abs2/NewValue
 * '<S952>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/IAC-P-CONTROL1/motohawk_override_abs2/OldValue
 * '<S953>' : BaseEngineController_LS/Foreground/Outputs/FuelPump/Discrete Actuator - FUELP
 * '<S954>' : BaseEngineController_LS/Foreground/Outputs/FuelPump/Discrete Actuator - FUELP/Override in Engineering Units
 * '<S955>' : BaseEngineController_LS/Foreground/Outputs/FuelPump/Discrete Actuator - FUELP/Override in Engineering Units/NewValue
 * '<S956>' : BaseEngineController_LS/Foreground/Outputs/FuelPump/Discrete Actuator - FUELP/Override in Engineering Units/OldValue
 * '<S957>' : BaseEngineController_LS/Foreground/Outputs/HBridge/Time Since Enabled (With Input)1
 * '<S958>' : BaseEngineController_LS/Foreground/Outputs/HBridge/motohawk_override_abs2
 * '<S959>' : BaseEngineController_LS/Foreground/Outputs/HBridge/motohawk_override_abs2/NewValue
 * '<S960>' : BaseEngineController_LS/Foreground/Outputs/HBridge/motohawk_override_abs2/OldValue
 * '<S961>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control/IAC-P-CONTROL
 * '<S962>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control/IAC-S-CONTROL
 * '<S963>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control/IAC-P-CONTROL/Saturation
 * '<S964>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control/IAC-P-CONTROL/motohawk_override_abs2
 * '<S965>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control/IAC-P-CONTROL/motohawk_override_abs2/NewValue
 * '<S966>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control/IAC-P-CONTROL/motohawk_override_abs2/OldValue
 * '<S967>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control/IAC-S-CONTROL/Saturation
 * '<S968>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control/IAC-S-CONTROL/motohawk_override_abs2
 * '<S969>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control/IAC-S-CONTROL/motohawk_override_abs2/NewValue
 * '<S970>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control/IAC-S-CONTROL/motohawk_override_abs2/OldValue
 * '<S971>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/Injector Diagnostics
 * '<S972>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/Injector Enable Manager
 * '<S973>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs1
 * '<S974>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs2
 * '<S975>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs3
 * '<S976>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs4
 * '<S977>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs5
 * '<S978>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs6
 * '<S979>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/Injector Enable Manager/Stall
 * '<S980>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/Injector Enable Manager/Time Since Enabled (With Input)1
 * '<S981>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs1/NewValue
 * '<S982>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs1/OldValue
 * '<S983>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs2/NewValue
 * '<S984>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs2/OldValue
 * '<S985>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs3/NewValue
 * '<S986>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs3/OldValue
 * '<S987>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs4/NewValue
 * '<S988>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs4/OldValue
 * '<S989>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs5/NewValue
 * '<S990>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs5/OldValue
 * '<S991>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs6/NewValue
 * '<S992>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs6/OldValue
 * '<S993>' : BaseEngineController_LS/Foreground/Outputs/WASTEGATE-Control/PWM Characterization
 * '<S994>' : BaseEngineController_LS/Foreground/Outputs/WASTEGATE-Control/PWM Characterization/Saturation
 * '<S995>' : BaseEngineController_LS/Foreground/Outputs/WASTEGATE-Control/PWM Characterization/motohawk_override_abs2
 * '<S996>' : BaseEngineController_LS/Foreground/Outputs/WASTEGATE-Control/PWM Characterization/motohawk_override_abs2/NewValue
 * '<S997>' : BaseEngineController_LS/Foreground/Outputs/WASTEGATE-Control/PWM Characterization/motohawk_override_abs2/OldValue
 * '<S998>' : BaseEngineController_LS/Main Power Relay/Main Power Relay
 * '<S999>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Display Variable Event Boolean
 * '<S1000>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Display Variable Event Function-Call
 * '<S1001>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Display Variable Event Function-Call1
 * '<S1002>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ECUP Latch
 * '<S1003>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Forced Shutdown Process
 * '<S1004>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/On Off Delay
 * '<S1005>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes
 * '<S1006>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Time Since Enabled (With Input)1
 * '<S1007>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/motohawk_restore_nvmem
 * '<S1008>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/motohawk_store_nvmem
 * '<S1009>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Display Variable Event Function-Call/Clear
 * '<S1010>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Display Variable Event Function-Call1/Clear
 * '<S1011>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Forced Shutdown Process/Post Shutdown two ticks before MPRD off
 * '<S1012>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Forced Shutdown Process/Processor Reboot
 * '<S1013>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Forced Shutdown Process/Save NV Vars one tick before MPRD off
 * '<S1014>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Forced Shutdown Process/Shutdown power on ECU565//563
 * '<S1015>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Forced Shutdown Process/Time Since Enabled (With Input)1
 * '<S1016>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Forced Shutdown Process/Post Shutdown two ticks before MPRD off/Post Shutdown two ticks before MPRD off
 * '<S1017>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Forced Shutdown Process/Save NV Vars one tick before MPRD off/Save NV Vars one tick before MPRD off
 * '<S1018>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Forced Shutdown Process/Shutdown power on ECU565//563/Shutdown power on ECU565-128
 * '<S1019>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/On Off Delay/S-R Flip-Flop
 * '<S1020>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/Post Shutdown two ticks before MPRD off
 * '<S1021>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/Processor Reboot
 * '<S1022>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/Save NV Vars one tick before MPRD off
 * '<S1023>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/Shutdown power on ECU565//563
 * '<S1024>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/motohawk_override_abs
 * '<S1025>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/Post Shutdown two ticks before MPRD off/Post Shutdown two ticks before MPRD off
 * '<S1026>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/Save NV Vars one tick before MPRD off/Save NV Vars one tick before MPRD off
 * '<S1027>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/Shutdown power on ECU565//563/Shutdown power on ECU565-128
 * '<S1028>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/motohawk_override_abs/NewValue
 * '<S1029>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/motohawk_override_abs/OldValue
 */
#endif                                 /* RTW_HEADER_BaseEngineController_LS_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
