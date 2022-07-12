/*
 * File: BaseEngineController_LS.h
 *
 * Code generated for Simulink model 'BaseEngineController_LS'.
 *
 * Model version                  : 1.2021
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Mon Jul 11 23:56:32 2022
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
  real_T s452_Gain1;                   /* '<S452>/Gain1' */
  real_T s611_motohawk_interpolation_1d;/* '<S611>/motohawk_interpolation_1d' */
  real_T s610_Merge;                   /* '<S610>/Merge' */
  real_T s577_Switch;                  /* '<S577>/Switch' */
  real_T s786_motohawk_interpolation_1d;/* '<S786>/motohawk_interpolation_1d' */
  real_T s765_Switch;                  /* '<S765>/Switch' */
  real_T s809_MinMax;                  /* '<S809>/MinMax' */
  real_T s809_MinMax1;                 /* '<S809>/MinMax1' */
  real_T s813_MinMax1;                 /* '<S813>/MinMax1' */
  real_T s784_Merge;                   /* '<S784>/Merge' */
  real_T s823_Merge;                   /* '<S823>/Merge' */
  real_T s774_motohawk_interpolation_1d;/* '<S774>/motohawk_interpolation_1d' */
  real_T s764_Switch;                  /* '<S764>/Switch' */
  real_T s792_MinMax;                  /* '<S792>/MinMax' */
  real_T s792_MinMax1;                 /* '<S792>/MinMax1' */
  real_T s796_MinMax1;                 /* '<S796>/MinMax1' */
  real_T s772_Merge;                   /* '<S772>/Merge' */
  real_T s806_Merge;                   /* '<S806>/Merge' */
  real_T s415_Switch1;                 /* '<S415>/Switch1' */
  real_T s441_Sum;                     /* '<S441>/Sum' */
  real_T s453_RPMInst;                 /* '<S453>/Data Type Conversion1' */
  real_T s570_DataTypeConversion;      /* '<S570>/Data Type Conversion' */
  real_T s628_Sum1;                    /* '<S628>/Sum1' */
  real_T s641_Merge;                   /* '<S641>/Merge' */
  real_T s627_Sum1;                    /* '<S627>/Sum1' */
  real_T s766_Switch;                  /* '<S766>/Switch' */
  real_T s826_MinMax;                  /* '<S826>/MinMax' */
  real_T s826_MinMax1;                 /* '<S826>/MinMax1' */
  real_T s830_MinMax1;                 /* '<S830>/MinMax1' */
  real_T s767_Switch;                  /* '<S767>/Switch' */
  real_T s843_MinMax;                  /* '<S843>/MinMax' */
  real_T s843_MinMax1;                 /* '<S843>/MinMax1' */
  real_T s847_MinMax1;                 /* '<S847>/MinMax1' */
  real_T s840_Merge;                   /* '<S840>/Merge' */
  real_T s857_Merge;                   /* '<S857>/Merge' */
  real_T s422_Switch2;                 /* '<S422>/Switch2' */
  real_T s629_Sum1;                    /* '<S629>/Sum1' */
  real_T s649_Merge;                   /* '<S649>/Merge' */
  real_T s457_ReadCANMessage_o3;       /* '<S457>/Read CAN Message' */
  real_T s457_ReadCANMessage_o4;       /* '<S457>/Read CAN Message' */
  real_T s457_ReadCANMessage_o5;       /* '<S457>/Read CAN Message' */
  real_T s457_ReadCANMessage_o6;       /* '<S457>/Read CAN Message' */
  real_T s457_ReadCANMessage_o7;       /* '<S457>/Read CAN Message' */
  real_T s457_ReadCANMessage_o8;       /* '<S457>/Read CAN Message' */
  real_T s457_ReadCANMessage2_o2;      /* '<S457>/Read CAN Message2' */
  real_T s457_ReadCANMessage2_o3;      /* '<S457>/Read CAN Message2' */
  real_T s457_ReadCANMessage2_o4;      /* '<S457>/Read CAN Message2' */
  real_T s457_ReadCANMessage2_o5;      /* '<S457>/Read CAN Message2' */
  real_T s426_Switch2;                 /* '<S426>/Switch2' */
  real_T s458_ReadCANMessage1_o2;      /* '<S458>/Read CAN Message1' */
  real_T s458_ReadCANMessage1_o3;      /* '<S458>/Read CAN Message1' */
  real_T s458_ReadCANMessage1_o4;      /* '<S458>/Read CAN Message1' */
  real_T s458_ReadCANMessage1_o5;      /* '<S458>/Read CAN Message1' */
  real_T s458_ReadCANMessage1_o6;      /* '<S458>/Read CAN Message1' */
  real_T s458_ReadCANMessage1_o7;      /* '<S458>/Read CAN Message1' */
  real_T s458_ReadCANMessage1_o8;      /* '<S458>/Read CAN Message1' */
  real_T s458_ReadCANMessage1_o9;      /* '<S458>/Read CAN Message1' */
  real_T s458_ReadCANMessage1_o10;     /* '<S458>/Read CAN Message1' */
  real_T s458_MathFunction1;           /* '<S458>/Math Function1' */
  real_T s499_Sum1;                    /* '<S499>/Sum1' */
  real_T s530_Merge;                   /* '<S530>/Merge' */
  real_T s458_ReadCANMessage_o2;       /* '<S458>/Read CAN Message' */
  real_T s458_ReadCANMessage_o3;       /* '<S458>/Read CAN Message' */
  real_T s458_ReadCANMessage_o4;       /* '<S458>/Read CAN Message' */
  real_T s458_ReadCANMessage_o5;       /* '<S458>/Read CAN Message' */
  real_T s458_ReadCANMessage_o6;       /* '<S458>/Read CAN Message' */
  real_T s458_ReadCANMessage_o7;       /* '<S458>/Read CAN Message' */
  real_T s458_ReadCANMessage_o8;       /* '<S458>/Read CAN Message' */
  real_T s458_ReadCANMessage_o9;       /* '<S458>/Read CAN Message' */
  real_T s458_ReadCANMessage_o10;      /* '<S458>/Read CAN Message' */
  real_T s458_MathFunction;            /* '<S458>/Math Function' */
  real_T s498_Sum1;                    /* '<S498>/Sum1' */
  real_T s522_Merge;                   /* '<S522>/Merge' */
  real_T s458_Gain;                    /* '<S458>/Gain' */
  real_T s420_Sum1;                    /* '<S420>/Sum1' */
  real_T s443_Switch;                  /* '<S443>/Switch' */
  real_T s636_Sum1;                    /* '<S636>/Sum1' */
  real_T s704_Merge;                   /* '<S704>/Merge' */
  real_T s633_Merge;                   /* '<S633>/Merge' */
  real_T s631_Sum1;                    /* '<S631>/Sum1' */
  real_T s670_Merge;                   /* '<S670>/Merge' */
  real_T s368_motohawk_delta_time;     /* '<S368>/motohawk_delta_time' */
  real_T s632_Sum1;                    /* '<S632>/Sum1' */
  real_T s378_Sum;                     /* '<S378>/Sum' */
  real_T s377_motohawk_interpolation_2d2;/* '<S377>/motohawk_interpolation_2d2' */
  real_T s377_Sum;                     /* '<S377>/Sum' */
  real_T s377_NominalAirFlowRate;      /* '<S377>/Nominal Air Flow Rate' */
  real_T s377_ModelAirMassFlowRate;    /* '<S377>/Model Air Mass Flow Rate' */
  real_T s452_Gain;                    /* '<S452>/Gain' */
  real_T s592_motohawk_interpolation_1d;/* '<S592>/motohawk_interpolation_1d' */
  real_T s591_Merge;                   /* '<S591>/Merge' */
  real_T s377_MultiportSwitch;         /* '<S377>/Multiport Switch' */
  real_T s393_Merge;                   /* '<S393>/Merge' */
  real_T s396_Sum1;                    /* '<S396>/Sum1' */
  real_T s394_Merge;                   /* '<S394>/Merge' */
  real_T s399_Sum1;                    /* '<S399>/Sum1' */
  real_T s437_Sum1;                    /* '<S437>/Sum1' */
  real_T s571_DataTypeConversion;      /* '<S571>/Data Type Conversion' */
  real_T s574_DataTypeConversion;      /* '<S574>/Data Type Conversion' */
  real_T s678_Merge;                   /* '<S678>/Merge' */
  real_T s369_motohawk_data_read;      /* '<S369>/motohawk_data_read' */
  real_T s388_Sum1;                    /* '<S388>/Sum1' */
  real_T s419_MultiportSwitch;         /* '<S419>/Multiport Switch' */
  real_T s135_SparkAdv;                /* '<S135>/Merge4' */
  real_T s630_Sum1;                    /* '<S630>/Sum1' */
  real_T s634_Sum1;                    /* '<S634>/Sum1' */
  real_T s135_FAN1;                    /* '<S135>/Merge12' */
  real_T s135_FAN2;                    /* '<S135>/Merge13' */
  real_T s662_Merge;                   /* '<S662>/Merge' */
  real_T s688_Merge;                   /* '<S688>/Merge' */
  real_T s135_SparkEnergy;             /* '<S135>/Merge5' */
  real_T s926_MinMax1;                 /* '<S926>/MinMax1' */
  real_T s930_MinMax1;                 /* '<S930>/MinMax1' */
  real_T s445_Switch;                  /* '<S445>/Switch' */
  real_T s135_Throttle;                /* '<S135>/Merge8' */
  real_T s866_ETC;                     /* '<S866>/Saturation' */
  real_T s135_IACP;                    /* '<S135>/Merge3' */
  real_T s944_MinMax1;                 /* '<S944>/MinMax1' */
  real_T s135_IACS;                    /* '<S135>/Merge9' */
  real_T s948_MinMax1;                 /* '<S948>/MinMax1' */
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
  real_T s975_MinMax1;                 /* '<S975>/MinMax1' */
  real_T s21_Gain[8];                  /* '<S21>/Gain' */
  real_T s420_Sum3;                    /* '<S420>/Sum3' */
  real_T s418_Sum3;                    /* '<S418>/Sum3' */
  real_T s457_ReadCANMessage1_o2;      /* '<S457>/Read CAN Message1' */
  real_T s457_ReadCANMessage1_o3;      /* '<S457>/Read CAN Message1' */
  real_T s635_Sum1;                    /* '<S635>/Sum1' */
  real_T s696_Merge;                   /* '<S696>/Merge' */
  real_T s890_Sum;                     /* '<S890>/Sum' */
  real_T s891_Sum;                     /* '<S891>/Sum' */
  real_T s893_CrankCounter;            /* '<S893>/CrankCounter' */
  real_T s716_motohawk_interpolation_1d;/* '<S716>/motohawk_interpolation_1d' */
  real_T s715_Merge;                   /* '<S715>/Merge' */
  real_T s738_motohawk_interpolation_1d;/* '<S738>/motohawk_interpolation_1d' */
  real_T s721_Merge;                   /* '<S721>/Merge' */
  real_T s737_Merge;                   /* '<S737>/Merge' */
  real_T s756_motohawk_interpolation_1d;/* '<S756>/motohawk_interpolation_1d' */
  real_T s723_Merge;                   /* '<S723>/Merge' */
  real_T s755_Merge;                   /* '<S755>/Merge' */
  real_T s747_motohawk_interpolation_1d;/* '<S747>/motohawk_interpolation_1d' */
  real_T s746_Merge;                   /* '<S746>/Merge' */
  real_T s729_motohawk_interpolation_1d;/* '<S729>/motohawk_interpolation_1d' */
  real_T s728_Merge;                   /* '<S728>/Merge' */
  real_T s327_Defaultifnoflow[8];      /* '<S327>/Default (if no flow)' */
  real_T s344_Sum1[8];                 /* '<S344>/Sum1' */
  real_T s343_chargemass[8];           /* '<S343>/charge mass' */
  real_T s412_Merge;                   /* '<S412>/Merge' */
  real_T s430_Sum2;                    /* '<S430>/Sum2' */
  real_T s374_Timer;                   /* '<S368>/Baro Stall State Delay' */
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
  real_T s996_Switch;                  /* '<S996>/Switch' */
  uint32_T s454_motohawk_frequency_in; /* '<S454>/motohawk_frequency_in' */
  uint32_T s457_ReadCANMessage_o1;     /* '<S457>/Read CAN Message' */
  uint32_T s457_ReadCANMessage2_o1;    /* '<S457>/Read CAN Message2' */
  uint32_T s458_ReadCANMessage1_o1;    /* '<S458>/Read CAN Message1' */
  uint32_T s458_ReadCANMessage_o1;     /* '<S458>/Read CAN Message' */
  uint32_T s457_ReadCANMessage1_o1;    /* '<S457>/Read CAN Message1' */
  uint32_T s626_Sum;                   /* '<S626>/Sum' */
  uint32_T s9_ReadCANRaw_o2;           /* '<S9>/Read CAN Raw' */
  uint32_T s9_ReadCANRaw_o4;           /* '<S9>/Read CAN Raw' */
  uint32_T s10_motohawk_calibration;   /* '<S10>/motohawk_calibration' */
  int16_T s866_motohawk_pwm1;          /* '<S866>/motohawk_pwm1' */
  uint16_T s456_motohawk_ain2;         /* '<S456>/motohawk_ain2' */
  uint16_T s456_motohawk_ain1;         /* '<S456>/motohawk_ain1' */
  uint16_T s454_motohawk_ain4;         /* '<S454>/motohawk_ain4' */
  uint16_T s454_motohawk_ain14;        /* '<S454>/motohawk_ain14' */
  uint16_T s454_motohawk_ain_read1;    /* '<S454>/motohawk_ain_read1' */
  uint16_T s454_motohawk_ain2;         /* '<S454>/motohawk_ain2' */
  uint16_T s454_motohawk_ain1;         /* '<S454>/motohawk_ain1' */
  uint16_T s454_motohawk_ain3;         /* '<S454>/motohawk_ain3' */
  uint16_T s862_SparkSequence_o3[8];   /* '<S862>/Spark Sequence' */
  uint16_T s862_SparkSequence_o4[8];   /* '<S862>/Spark Sequence' */
  uint16_T s708_motohawk_ain;          /* '<S708>/motohawk_ain' */
  uint16_T s709_motohawk_ain;          /* '<S709>/motohawk_ain' */
  uint16_T s709_motohawk_ain1;         /* '<S709>/motohawk_ain1' */
  uint16_T s709_motohawk_ain2;         /* '<S709>/motohawk_ain2' */
  uint16_T s709_motohawk_ain3;         /* '<S709>/motohawk_ain3' */
  uint16_T s10_motohawk_calibration3;  /* '<S10>/motohawk_calibration3' */
  index_T s407_motohawk_prelookup1;    /* '<S407>/motohawk_prelookup1' */
  index_T s407_Indexes;                /* '<S407>/motohawk_prelookup5' */
  index_T s403_motohawk_prelookup;     /* '<S403>/motohawk_prelookup' */
  index_T s404_motohawk_prelookup;     /* '<S404>/motohawk_prelookup' */
  index_T s408_motohawk_prelookup;     /* '<S408>/motohawk_prelookup' */
  index_T s405_motohawk_prelookup1;    /* '<S405>/motohawk_prelookup1' */
  index_T s405_Indexes;                /* '<S405>/motohawk_prelookup5' */
  index_T s402_motohawk_prelookup;     /* '<S402>/motohawk_prelookup' */
  index_T s373_RPMAccel17Idx;          /* '<S373>/motohawk_prelookup' */
  int8_T s22_Merge1[32];               /* '<S22>/Merge1' */
  int8_T s893_DataTypeConversion;      /* '<S893>/Data Type Conversion' */
  int8_T s231_DataTypeConversion;      /* '<S231>/Data Type Conversion' */
  int8_T s231_DataTypeConversion1;     /* '<S231>/Data Type Conversion1' */
  int8_T s102_MultiportSwitch[8];      /* '<S102>/Multiport Switch' */
  int8_T s121_CutArray[8];             /* '<S121>/CutArray' */
  int8_T s27_DC_Override;              /* '<S20>/ETC Test  Manager' */
  int8_T s27_SetpointMode;             /* '<S20>/ETC Test  Manager' */
  uint8_T s417_UnitDelay;              /* '<S417>/Unit Delay' */
  uint8_T s368_motohawk_data_read1;    /* '<S368>/motohawk_data_read1' */
  uint8_T s868_InjectorSequence_o1[8]; /* '<S868>/Injector Sequence' */
  uint8_T s22_DataTypeConversion5;     /* '<S22>/Data Type Conversion5' */
  uint8_T s453_motohawk_encoder_fault; /* '<S453>/motohawk_encoder_fault' */
  uint8_T s453_motohawk_encoder_state; /* '<S453>/motohawk_encoder_state' */
  uint8_T s895_Switch1;                /* '<S895>/Switch1' */
  uint8_T s439_Switch;                 /* '<S439>/Switch' */
  uint8_T s438_State;                  /* '<S417>/Engine State Machine' */
  uint8_T s265_IdleState;              /* '<S250>/IdleStateMachine' */
  uint8_T s102_UnitDelay1;             /* '<S102>/Unit Delay1' */
  uint8_T s121_Switch;                 /* '<S121>/Switch' */
  uint8_T s9_ReadCANRaw_o5;            /* '<S9>/Read CAN Raw' */
  uint8_T s9_ReadCANRaw_o6[8];         /* '<S9>/Read CAN Raw' */
  boolean_T s577_LogicalOperator;      /* '<S577>/Logical Operator' */
  boolean_T s577_LogicalOperator3;     /* '<S577>/Logical Operator3' */
  boolean_T s417_Stall;                /* '<S417>/Relational Operator1' */
  boolean_T s417_Crank;                /* '<S417>/Relational Operator4' */
  boolean_T s417_Run;                  /* '<S417>/Logical Operator1' */
  boolean_T s578_Merge;                /* '<S578>/Merge' */
  boolean_T s457_ReadCANMessage_o2;    /* '<S457>/Read CAN Message' */
  boolean_T s393_RelationalOperator4;  /* '<S393>/Relational Operator4' */
  boolean_T s394_RelationalOperator4;  /* '<S394>/Relational Operator4' */
  boolean_T s392_LogicalOperator;      /* '<S392>/Logical Operator' */
  boolean_T s452_motohawk_din2;        /* '<S452>/motohawk_din2' */
  boolean_T s581_Merge;                /* '<S581>/Merge' */
  boolean_T s597_Merge;                /* '<S597>/Merge' */
  boolean_T s602_Merge;                /* '<S602>/Merge' */
  boolean_T s135_AC;                   /* '<S135>/Merge14' */
  boolean_T s870_LogicalOperator;      /* '<S870>/Logical Operator' */
  boolean_T s135_FUELP;                /* '<S135>/Merge7' */
  boolean_T s22_LogicalOperator2[8];   /* '<S22>/Logical Operator2' */
  boolean_T s916_LogicalOperator;      /* '<S916>/Logical Operator' */
  boolean_T s917_LogicalOperator;      /* '<S917>/Logical Operator' */
  boolean_T s452_motohawk_din;         /* '<S452>/motohawk_din' */
  boolean_T s584_Merge;                /* '<S584>/Merge' */
  boolean_T s934_LogicalOperator;      /* '<S934>/Logical Operator' */
  boolean_T s866_RelationalOperator4;  /* '<S866>/Relational Operator4' */
  boolean_T s958_Merge[8];             /* '<S958>/Merge' */
  boolean_T s377_LogicalOperator;      /* '<S377>/Logical Operator' */
  boolean_T s862_LogicalOperator1[8];  /* '<S862>/Logical Operator1' */
  boolean_T s893_RelationalOperator1;  /* '<S893>/Relational Operator1' */
  boolean_T s412_RelationalOperator3;  /* '<S412>/Relational Operator3' */
  boolean_T s374_Enable;               /* '<S368>/Baro Stall State Delay' */
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
  boolean_T s979_RelationalOperator;   /* '<S979>/Relational Operator' */
  boolean_T s979_LogicalOperator2;     /* '<S979>/Logical Operator2' */
  boolean_T s983_MPRDState;            /* '<S979>/ECUP Latch' */
  boolean_T s9_ReadCANRaw_o1;          /* '<S9>/Read CAN Raw' */
  boolean_T s9_ReadCANRaw_o3;          /* '<S9>/Read CAN Raw' */
  rtB_FunctionCallSubsystem_BaseEngineController_LS s763_FunctionCallSubsystem;/* '<S763>/Function-Call Subsystem' */
  rtB_FunctionCallSubsystem_BaseEngineController_LS s761_FunctionCallSubsystem;/* '<S761>/Function-Call Subsystem' */
  rtB_CollectAverage_BaseEngineController_LS s414_CollectAverage;/* '<S414>/Collect Average' */
  rtB_CollectAverage_BaseEngineController_LS s413_CollectAverage;/* '<S413>/Collect Average' */
  rtB_CollectAverage_BaseEngineController_LS s375_CollectAverage;/* '<S375>/Collect Average' */
} BlockIO_BaseEngineController_LS;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T s577_UnitDelay_DSTATE;        /* '<S577>/Unit Delay' */
  real_T s615_UnitDelay_DSTATE;        /* '<S615>/Unit Delay' */
  real_T s576_UnitDelay_DSTATE;        /* '<S576>/Unit Delay' */
  real_T s612_UnitDelay_DSTATE;        /* '<S612>/Unit Delay' */
  real_T s577_UnitDelay1_DSTATE;       /* '<S577>/Unit Delay1' */
  real_T s762_UnitDelay_DSTATE;        /* '<S762>/Unit Delay' */
  real_T s787_UnitDelay_DSTATE;        /* '<S787>/Unit Delay' */
  real_T s819_UnitDelay_DSTATE;        /* '<S819>/Unit Delay' */
  real_T s812_UnitDelay1_DSTATE;       /* '<S812>/Unit Delay1' */
  real_T s760_UnitDelay_DSTATE;        /* '<S760>/Unit Delay' */
  real_T s775_UnitDelay_DSTATE;        /* '<S775>/Unit Delay' */
  real_T s802_UnitDelay_DSTATE;        /* '<S802>/Unit Delay' */
  real_T s795_UnitDelay1_DSTATE;       /* '<S795>/Unit Delay1' */
  real_T s628_UnitDelay1_DSTATE;       /* '<S628>/Unit Delay1' */
  real_T s642_UnitDelay_DSTATE;        /* '<S642>/Unit Delay' */
  real_T s627_UnitDelay_DSTATE;        /* '<S627>/Unit Delay' */
  real_T s836_UnitDelay_DSTATE;        /* '<S836>/Unit Delay' */
  real_T s829_UnitDelay1_DSTATE;       /* '<S829>/Unit Delay1' */
  real_T s853_UnitDelay_DSTATE;        /* '<S853>/Unit Delay' */
  real_T s846_UnitDelay1_DSTATE;       /* '<S846>/Unit Delay1' */
  real_T s654_UnitDelay_DSTATE;        /* '<S654>/Unit Delay' */
  real_T s629_UnitDelay1_DSTATE;       /* '<S629>/Unit Delay1' */
  real_T s653_UnitDelay_DSTATE;        /* '<S653>/Unit Delay' */
  real_T s651_UnitDelay_DSTATE;        /* '<S651>/Unit Delay' */
  real_T s651_UnitDelay1_DSTATE;       /* '<S651>/Unit Delay1' */
  real_T s651_UnitDelay2_DSTATE;       /* '<S651>/Unit Delay2' */
  real_T s420_UnitDelay_DSTATE;        /* '<S420>/Unit Delay' */
  real_T s499_UnitDelay1_DSTATE;       /* '<S499>/Unit Delay1' */
  real_T s531_UnitDelay_DSTATE;        /* '<S531>/Unit Delay' */
  real_T s498_UnitDelay1_DSTATE;       /* '<S498>/Unit Delay1' */
  real_T s523_UnitDelay_DSTATE;        /* '<S523>/Unit Delay' */
  real_T s636_UnitDelay1_DSTATE;       /* '<S636>/Unit Delay1' */
  real_T s705_UnitDelay_DSTATE;        /* '<S705>/Unit Delay' */
  real_T s631_UnitDelay1_DSTATE;       /* '<S631>/Unit Delay1' */
  real_T s671_UnitDelay_DSTATE;        /* '<S671>/Unit Delay' */
  real_T s632_UnitDelay1_DSTATE;       /* '<S632>/Unit Delay1' */
  real_T s378_UnitDelay_DSTATE;        /* '<S378>/Unit Delay' */
  real_T s573_UnitDelay_DSTATE;        /* '<S573>/Unit Delay' */
  real_T s593_UnitDelay_DSTATE;        /* '<S593>/Unit Delay' */
  real_T s393_UnitDelay2_DSTATE;       /* '<S393>/Unit Delay2' */
  real_T s396_UnitDelay_DSTATE;        /* '<S396>/Unit Delay' */
  real_T s394_UnitDelay2_DSTATE;       /* '<S394>/Unit Delay2' */
  real_T s399_UnitDelay_DSTATE;        /* '<S399>/Unit Delay' */
  real_T s435_UnitDelay_DSTATE;        /* '<S435>/Unit Delay' */
  real_T s437_UnitDelay_DSTATE;        /* '<S437>/Unit Delay' */
  real_T s679_UnitDelay_DSTATE;        /* '<S679>/Unit Delay' */
  real_T s388_UnitDelay_DSTATE;        /* '<S388>/Unit Delay' */
  real_T s630_UnitDelay1_DSTATE;       /* '<S630>/Unit Delay1' */
  real_T s663_UnitDelay_DSTATE;        /* '<S663>/Unit Delay' */
  real_T s634_UnitDelay1_DSTATE;       /* '<S634>/Unit Delay1' */
  real_T s689_UnitDelay_DSTATE;        /* '<S689>/Unit Delay' */
  real_T s74_UnitDelay_DSTATE;         /* '<S74>/Unit Delay' */
  real_T s73_UnitDelay_DSTATE;         /* '<S73>/Unit Delay' */
  real_T s71_UnitDelay_DSTATE;         /* '<S71>/Unit Delay' */
  real_T s70_UnitDelay_DSTATE;         /* '<S70>/Unit Delay' */
  real_T s69_UnitDelay_DSTATE;         /* '<S69>/Unit Delay' */
  real_T s68_UnitDelay_DSTATE;         /* '<S68>/Unit Delay' */
  real_T s67_UnitDelay_DSTATE;         /* '<S67>/Unit Delay' */
  real_T s66_UnitDelay_DSTATE;         /* '<S66>/Unit Delay' */
  real_T s72_UnitDelay_DSTATE[8];      /* '<S72>/Unit Delay' */
  real_T s420_UnitDelay1_DSTATE;       /* '<S420>/Unit Delay1' */
  real_T s635_UnitDelay1_DSTATE;       /* '<S635>/Unit Delay1' */
  real_T s697_UnitDelay_DSTATE;        /* '<S697>/Unit Delay' */
  real_T s393_UnitDelay1_DSTATE;       /* '<S393>/Unit Delay1' */
  real_T s393_UnitDelay3_DSTATE;       /* '<S393>/Unit Delay3' */
  real_T s393_UnitDelay4_DSTATE;       /* '<S393>/Unit Delay4' */
  real_T s394_UnitDelay1_DSTATE;       /* '<S394>/Unit Delay1' */
  real_T s394_UnitDelay3_DSTATE;       /* '<S394>/Unit Delay3' */
  real_T s394_UnitDelay4_DSTATE;       /* '<S394>/Unit Delay4' */
  real_T s799_UnitDelay1_DSTATE;       /* '<S799>/Unit Delay1' */
  real_T s799_UnitDelay_DSTATE;        /* '<S799>/Unit Delay' */
  real_T s799_UnitDelay3_DSTATE;       /* '<S799>/Unit Delay3' */
  real_T s799_UnitDelay4_DSTATE;       /* '<S799>/Unit Delay4' */
  real_T s816_UnitDelay1_DSTATE;       /* '<S816>/Unit Delay1' */
  real_T s816_UnitDelay_DSTATE;        /* '<S816>/Unit Delay' */
  real_T s816_UnitDelay3_DSTATE;       /* '<S816>/Unit Delay3' */
  real_T s816_UnitDelay4_DSTATE;       /* '<S816>/Unit Delay4' */
  real_T s833_UnitDelay1_DSTATE;       /* '<S833>/Unit Delay1' */
  real_T s833_UnitDelay_DSTATE;        /* '<S833>/Unit Delay' */
  real_T s833_UnitDelay3_DSTATE;       /* '<S833>/Unit Delay3' */
  real_T s833_UnitDelay4_DSTATE;       /* '<S833>/Unit Delay4' */
  real_T s850_UnitDelay1_DSTATE;       /* '<S850>/Unit Delay1' */
  real_T s850_UnitDelay_DSTATE;        /* '<S850>/Unit Delay' */
  real_T s850_UnitDelay3_DSTATE;       /* '<S850>/Unit Delay3' */
  real_T s850_UnitDelay4_DSTATE;       /* '<S850>/Unit Delay4' */
  real_T s890_UnitDelay_DSTATE;        /* '<S890>/Unit Delay' */
  real_T s891_UnitDelay_DSTATE;        /* '<S891>/Unit Delay' */
  real_T s893_CrankCounter_DSTATE;     /* '<S893>/CrankCounter' */
  real_T s710_UnitDelay_DSTATE;        /* '<S710>/Unit Delay' */
  real_T s717_UnitDelay_DSTATE;        /* '<S717>/Unit Delay' */
  real_T s721_UnitDelay_DSTATE;        /* '<S721>/Unit Delay' */
  real_T s739_UnitDelay_DSTATE;        /* '<S739>/Unit Delay' */
  real_T s723_UnitDelay_DSTATE;        /* '<S723>/Unit Delay' */
  real_T s757_UnitDelay_DSTATE;        /* '<S757>/Unit Delay' */
  real_T s722_UnitDelay_DSTATE;        /* '<S722>/Unit Delay' */
  real_T s748_UnitDelay_DSTATE;        /* '<S748>/Unit Delay' */
  real_T s720_UnitDelay_DSTATE;        /* '<S720>/Unit Delay' */
  real_T s730_UnitDelay_DSTATE;        /* '<S730>/Unit Delay' */
  real_T s344_UnitDelay_DSTATE[8];     /* '<S344>/Unit Delay' */
  real_T s412_UnitDelay2_DSTATE;       /* '<S412>/Unit Delay2' */
  real_T s427_UnitDelay_DSTATE;        /* '<S427>/Unit Delay' */
  real_T s430_UnitDelay_DSTATE;        /* '<S430>/Unit Delay' */
  real_T s412_UnitDelay1_DSTATE;       /* '<S412>/Unit Delay1' */
  real_T s412_UnitDelay3_DSTATE;       /* '<S412>/Unit Delay3' */
  real_T s412_UnitDelay4_DSTATE;       /* '<S412>/Unit Delay4' */
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
  real_T s985_UnitDelay_DSTATE;        /* '<S985>/Unit Delay' */
  real_T s985_UnitDelay1_DSTATE;       /* '<S985>/Unit Delay1' */
  real_T s374_TOld;                    /* '<S368>/Baro Stall State Delay' */
  real_T s27_TimerOld;                 /* '<S20>/ETC Test  Manager' */
  uint32_T s449_UnitDelay_DSTATE;      /* '<S449>/Unit Delay' */
  uint32_T s626_UnitDelay_DSTATE;      /* '<S626>/Unit Delay' */
  uint32_T s606_motohawk_delta_time_DWORK1;/* '<S606>/motohawk_delta_time' */
  uint32_T s615_motohawk_delta_time_DWORK1;/* '<S615>/motohawk_delta_time' */
  uint32_T s780_motohawk_delta_time_DWORK1;/* '<S780>/motohawk_delta_time' */
  uint32_T s811_motohawk_delta_time_DWORK1;/* '<S811>/motohawk_delta_time' */
  uint32_T s768_motohawk_delta_time_DWORK1;/* '<S768>/motohawk_delta_time' */
  uint32_T s794_motohawk_delta_time_DWORK1;/* '<S794>/motohawk_delta_time' */
  uint32_T s441_motohawk_delta_time_DWORK1;/* '<S441>/motohawk_delta_time' */
  uint32_T s637_motohawk_delta_time_DWORK1;/* '<S637>/motohawk_delta_time' */
  uint32_T s620_motohawk_delta_time_DWORK1;/* '<S620>/motohawk_delta_time' */
  uint32_T s828_motohawk_delta_time_DWORK1;/* '<S828>/motohawk_delta_time' */
  uint32_T s845_motohawk_delta_time_DWORK1;/* '<S845>/motohawk_delta_time' */
  uint32_T s654_motohawk_delta_time_DWORK1;/* '<S654>/motohawk_delta_time' */
  uint32_T s650_motohawk_delta_time_DWORK1;/* '<S650>/motohawk_delta_time' */
  uint32_T s526_motohawk_delta_time_DWORK1;/* '<S526>/motohawk_delta_time' */
  uint32_T s518_motohawk_delta_time_DWORK1;/* '<S518>/motohawk_delta_time' */
  uint32_T s443_motohawk_delta_time_DWORK1;/* '<S443>/motohawk_delta_time' */
  uint32_T s700_motohawk_delta_time_DWORK1;/* '<S700>/motohawk_delta_time' */
  uint32_T s666_motohawk_delta_time_DWORK1;/* '<S666>/motohawk_delta_time' */
  uint32_T s368_motohawk_delta_time_DWORK1;/* '<S368>/motohawk_delta_time' */
  uint32_T s381_motohawk_delta_time_DWORK1;/* '<S381>/motohawk_delta_time' */
  uint32_T s587_motohawk_delta_time_DWORK1;/* '<S587>/motohawk_delta_time' */
  uint32_T s435_motohawk_delta_time_DWORK1;/* '<S435>/motohawk_delta_time' */
  uint32_T s598_motohawk_delta_time_DWORK1;/* '<S598>/motohawk_delta_time' */
  uint32_T s603_motohawk_delta_time_DWORK1;/* '<S603>/motohawk_delta_time' */
  uint32_T s674_motohawk_delta_time_DWORK1;/* '<S674>/motohawk_delta_time' */
  uint32_T s369_motohawk_delta_time_DWORK1;/* '<S369>/motohawk_delta_time' */
  uint32_T s658_motohawk_delta_time_DWORK1;/* '<S658>/motohawk_delta_time' */
  uint32_T s684_motohawk_delta_time_DWORK1;/* '<S684>/motohawk_delta_time' */
  uint32_T s938_motohawk_delta_time_DWORK1;/* '<S938>/motohawk_delta_time' */
  uint32_T s445_motohawk_delta_time_DWORK1;/* '<S445>/motohawk_delta_time' */
  uint32_T s692_motohawk_delta_time_DWORK1;/* '<S692>/motohawk_delta_time' */
  uint32_T s618_motohawk_delta_time_DWORK1;/* '<S618>/motohawk_delta_time' */
  uint32_T s711_motohawk_delta_time_DWORK1;/* '<S711>/motohawk_delta_time' */
  uint32_T s733_motohawk_delta_time_DWORK1;/* '<S733>/motohawk_delta_time' */
  uint32_T s751_motohawk_delta_time_DWORK1;/* '<S751>/motohawk_delta_time' */
  uint32_T s742_motohawk_delta_time_DWORK1;/* '<S742>/motohawk_delta_time' */
  uint32_T s724_motohawk_delta_time_DWORK1;/* '<S724>/motohawk_delta_time' */
  uint32_T s335_motohawk_delta_time_DWORK1;/* '<S335>/motohawk_delta_time' */
  uint32_T s334_motohawk_delta_time_DWORK1;/* '<S334>/motohawk_delta_time' */
  uint32_T s338_motohawk_delta_time_DWORK1;/* '<S338>/motohawk_delta_time' */
  uint32_T s337_motohawk_delta_time_DWORK1;/* '<S337>/motohawk_delta_time' */
  uint32_T s339_motohawk_delta_time_DWORK1;/* '<S339>/motohawk_delta_time' */
  uint32_T s345_motohawk_delta_time_DWORK1;/* '<S345>/motohawk_delta_time' */
  uint32_T s349_motohawk_delta_time_DWORK1;/* '<S349>/motohawk_delta_time' */
  uint32_T s350_motohawk_delta_time_DWORK1;/* '<S350>/motohawk_delta_time' */
  uint32_T s351_motohawk_delta_time_DWORK1;/* '<S351>/motohawk_delta_time' */
  uint32_T s367_motohawk_delta_time_DWORK1;/* '<S367>/motohawk_delta_time' */
  uint32_T s366_motohawk_delta_time_DWORK1;/* '<S366>/motohawk_delta_time' */
  uint32_T s342_motohawk_delta_time_DWORK1;/* '<S342>/motohawk_delta_time' */
  uint32_T s347_motohawk_delta_time_DWORK1;/* '<S347>/motohawk_delta_time' */
  uint32_T s430_motohawk_delta_time_DWORK1;/* '<S430>/motohawk_delta_time' */
  uint32_T s412_motohawk_delta_time_DWORK1;/* '<S412>/motohawk_delta_time' */
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
  uint32_T s996_motohawk_delta_time_DWORK1;/* '<S996>/motohawk_delta_time' */
  uint32_T s987_motohawk_delta_time_DWORK1;/* '<S987>/motohawk_delta_time' */
  int_T s153_HitCrossing1_MODE;        /* '<S153>/Hit  Crossing1' */
  uint16_T s868_InjectorSequence_DWORK2;/* '<S868>/Injector Sequence' */
  int8_T s414_UnitDelay_DSTATE;        /* '<S414>/Unit Delay' */
  int8_T s413_UnitDelay_DSTATE;        /* '<S413>/Unit Delay' */
  int8_T s375_UnitDelay_DSTATE;        /* '<S375>/Unit Delay' */
  uint8_T s417_UnitDelay_DSTATE;       /* '<S417>/Unit Delay' */
  uint8_T s439_CrankCounter_DSTATE;    /* '<S439>/CrankCounter' */
  uint8_T s102_UnitDelay1_DSTATE;      /* '<S102>/Unit Delay1' */
  boolean_T s616_UnitDelay_DSTATE;     /* '<S616>/Unit Delay' */
  boolean_T s577_UnitDelay2_DSTATE;    /* '<S577>/Unit Delay2' */
  boolean_T s390_UnitDelay_DSTATE;     /* '<S390>/Unit Delay' */
  boolean_T s389_InitialConditionisTrue_DSTATE;/* '<S389>/Initial Condition is True' */
  boolean_T s357_UnitDelay_DSTATE;     /* '<S357>/Unit Delay' */
  boolean_T s358_UnitDelay_DSTATE;     /* '<S358>/Unit Delay' */
  boolean_T s363_UnitDelay_DSTATE;     /* '<S363>/Unit Delay' */
  boolean_T s364_UnitDelay_DSTATE;     /* '<S364>/Unit Delay' */
  boolean_T s359_UnitDelay_DSTATE;     /* '<S359>/Unit Delay' */
  boolean_T s365_UnitDelay_DSTATE;     /* '<S365>/Unit Delay' */
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
  boolean_T s984_UnitDelay8_DSTATE;    /* '<S984>/Unit Delay8' */
  boolean_T s984_UnitDelay6_DSTATE;    /* '<S984>/Unit Delay6' */
  boolean_T s984_UnitDelay7_DSTATE;    /* '<S984>/Unit Delay7' */
  boolean_T s980_UnitDelay_DSTATE;     /* '<S980>/Unit Delay' */
  boolean_T s986_UnitDelay2_DSTATE;    /* '<S986>/Unit Delay2' */
  boolean_T s979_UnitDelay5_DSTATE;    /* '<S979>/Unit Delay5' */
  boolean_T s986_UnitDelay_DSTATE;     /* '<S986>/Unit Delay' */
  boolean_T s986_UnitDelay1_DSTATE;    /* '<S986>/Unit Delay1' */
  boolean_T s979_UnitDelay3_DSTATE;    /* '<S979>/Unit Delay3' */
  boolean_T s979_UnitDelay4_DSTATE;    /* '<S979>/Unit Delay4' */
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
  uint8_T s455_motohawk_trigger_DWORK1;/* '<S455>/motohawk_trigger' */
  uint8_T s417_motohawk_trigger_DWORK1;/* '<S417>/motohawk_trigger' */
  uint8_T s633_motohawk_trigger5_DWORK1;/* '<S633>/motohawk_trigger5' */
  uint8_T s455_motohawk_trigger1_DWORK1;/* '<S455>/motohawk_trigger1' */
  uint8_T s14_motohawk_trigger1_DWORK1;/* '<S14>/motohawk_trigger1' */
  uint8_T s14_motohawk_trigger_DWORK1; /* '<S14>/motohawk_trigger' */
  uint8_T s13_motohawk_trigger_DWORK1; /* '<S13>/motohawk_trigger' */
  uint8_T s761_motohawk_trigger_DWORK1;/* '<S761>/motohawk_trigger' */
  uint8_T s763_motohawk_trigger_DWORK1;/* '<S763>/motohawk_trigger' */
  uint8_T s893_motohawk_trigger1_DWORK1;/* '<S893>/motohawk_trigger1' */
  uint8_T s438_is_c2_BaseEngineController_LS;/* '<S417>/Engine State Machine' */
  uint8_T s374_is_c19_BaseEngineController_LS;/* '<S368>/Baro Stall State Delay' */
  uint8_T s322_is_active_c3_BaseEngineController_LS;/* '<S311>/Ice Break' */
  uint8_T s322_is_c3_BaseEngineController_LS;/* '<S311>/Ice Break' */
  uint8_T s136_motohawk_trigger1_DWORK1;/* '<S136>/motohawk_trigger1' */
  uint8_T s265_is_active_c12_BaseEngineController_LS;/* '<S250>/IdleStateMachine' */
  uint8_T s265_is_c12_BaseEngineController_LS;/* '<S250>/IdleStateMachine' */
  uint8_T s102_motohawk_trigger_DWORK1;/* '<S102>/motohawk_trigger' */
  uint8_T s27_is_c9_BaseEngineController_LS;/* '<S20>/ETC Test  Manager' */
  uint8_T s983_is_c8_BaseEngineController_LS;/* '<S979>/ECUP Latch' */
  boolean_T s617_Memory_PreviousInput; /* '<S617>/Memory' */
  boolean_T s868_InjectorSequence_DWORK1[8];/* '<S868>/Injector Sequence' */
  boolean_T s286_Multiplyby10ifnotyetenabled_FirstOutputTime;/* '<S286>/Multiply by 1.0 if not yet enabled' */
  boolean_T s1000_Memory_PreviousInput;/* '<S1000>/Memory' */
  boolean_T s15_Stall_MODE;            /* '<S15>/Stall' */
  boolean_T s15_Crank_MODE;            /* '<S15>/Crank' */
  boolean_T s368_CaptureSignalAtStartup_MODE;/* '<S368>/Capture Signal At Startup' */
  boolean_T s372_CaptureECTAtStartup_MODE;/* '<S372>/Capture ECT At Startup' */
  boolean_T s372_CaptureIATAtStartup_MODE;/* '<S372>/Capture IAT At Startup' */
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
  rtDW_FunctionCallSubsystem_BaseEngineController_LS s763_FunctionCallSubsystem;/* '<S763>/Function-Call Subsystem' */
  rtDW_FunctionCallSubsystem_BaseEngineController_LS s761_FunctionCallSubsystem;/* '<S761>/Function-Call Subsystem' */
  rtDW_CollectAverage_BaseEngineController_LS s414_CollectAverage;/* '<S414>/Collect Average' */
  rtDW_CollectAverage_BaseEngineController_LS s413_CollectAverage;/* '<S413>/Collect Average' */
  rtDW_CollectAverage_BaseEngineController_LS s375_CollectAverage;/* '<S375>/Collect Average' */
} D_Work_BaseEngineController_LS;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState HitCrossing1_Input_ZCE;   /* '<S153>/Hit  Crossing1' */
  ZCSigState ResetTasksCompleteToFalse_Trig_ZCE;/* '<S32>/Reset TasksComplete To False' */
  ZCSigState ResetTasksCompleteToTrue_Trig_ZCE;/* '<S20>/Reset TasksComplete To True' */
  ZCSigState ShutdownpoweronECU565563_Trig_ZCE;/* '<S986>/Shutdown power on ECU565//563' */
  ZCSigState SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE;/* '<S986>/Save NV Vars one tick before MPRD off' */
  ZCSigState ProcessorReboot_Trig_ZCE; /* '<S986>/Processor Reboot' */
  ZCSigState PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE;/* '<S986>/Post Shutdown two ticks before MPRD off' */
  ZCSigState ShutdownpoweronECU565563_Trig_ZCE_l;/* '<S984>/Shutdown power on ECU565//563' */
  ZCSigState SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE_m;/* '<S984>/Save NV Vars one tick before MPRD off' */
  ZCSigState ProcessorReboot_Trig_ZCE_h;/* '<S984>/Processor Reboot' */
  ZCSigState PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE_h;/* '<S984>/Post Shutdown two ticks before MPRD off' */
  ZCSigState Clear_Trig_ZCE;           /* '<S982>/Clear' */
  ZCSigState Clear_Trig_ZCE_k;         /* '<S981>/Clear' */
} PrevZCSigStates_BaseEngineController_LS;

/* Invariant block signals (auto storage) */
typedef struct {
  const real_T s868_Gain4;             /* '<S868>/Gain4' */
  const real_T s138_motohawk_replicate2;/* '<S138>/motohawk_replicate2' */
  const real_T s138_motohawk_replicate[8];/* '<S138>/motohawk_replicate' */
  const uint32_T s868_DataTypeConversion5;/* '<S868>/Data Type Conversion5' */
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
   *   '<S357>/Combinatorial  Logic'
   *   '<S358>/Combinatorial  Logic'
   *   '<S359>/Combinatorial  Logic'
   *   '<S363>/Combinatorial  Logic'
   *   '<S364>/Combinatorial  Logic'
   *   '<S365>/Combinatorial  Logic'
   *   '<S45>/Combinatorial  Logic'
   *   '<S297>/Combinatorial  Logic'
   */
  boolean_T pooled905[8];

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S1000>/Logic'
   *   '<S617>/Logic'
   */
  boolean_T pooled906[16];
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
 * '<S345>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Lean Protect/Time Since Enabled (With Input)2
 * '<S346>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Low Oil Pressure Fault Logic/Run State
 * '<S347>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Low Oil Pressure Fault Logic/Time Since Enabled (With Input)2
 * '<S348>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MAP Fault Logic/Run State
 * '<S349>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MAP Fault Logic/Time Since Enabled (With Input)1
 * '<S350>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MAP Fault Logic/Time Since Enabled (With Input)2
 * '<S351>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MAP Fault Logic/Time Since Enabled (With Input)3
 * '<S352>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/BaseRevLimit
 * '<S353>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/TwoStepRevLimit
 * '<S354>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/BaseRevLimit/Hysterisis
 * '<S355>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/BaseRevLimit/Hysterisis1
 * '<S356>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/BaseRevLimit/Hysterisis2
 * '<S357>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/BaseRevLimit/Hysterisis/Hysteresis
 * '<S358>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/BaseRevLimit/Hysterisis1/Hysteresis
 * '<S359>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/BaseRevLimit/Hysterisis2/Hysteresis
 * '<S360>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/TwoStepRevLimit/Hysterisis
 * '<S361>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/TwoStepRevLimit/Hysterisis1
 * '<S362>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/TwoStepRevLimit/Hysterisis2
 * '<S363>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/TwoStepRevLimit/Hysterisis/Hysteresis
 * '<S364>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/TwoStepRevLimit/Hysterisis1/Hysteresis
 * '<S365>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/TwoStepRevLimit/Hysterisis2/Hysteresis
 * '<S366>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Wrong Fuel Pressure Fault Logic/Time Since Enabled (With Input)1
 * '<S367>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Wrong Fuel Pressure Fault Logic/Time Since Enabled (With Input)2
 * '<S368>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs
 * '<S369>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/FuelLevel
 * '<S370>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs
 * '<S371>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes
 * '<S372>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed
 * '<S373>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Virtual Indexes
 * '<S374>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Baro Stall State Delay
 * '<S375>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Capture Signal At Startup
 * '<S376>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Running Baro Learn
 * '<S377>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Speed Density - MAP Referenced - Adaptive
 * '<S378>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/motohawk_override_rel
 * '<S379>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Capture Signal At Startup/Collect Average
 * '<S380>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Running Baro Learn/Compare To Constant
 * '<S381>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Running Baro Learn/Time Since Enabled (With Input)1
 * '<S382>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Speed Density - MAP Referenced - Adaptive/Adapt VolEff Map
 * '<S383>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Speed Density - MAP Referenced - Adaptive/C to K1
 * '<S384>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Speed Density - MAP Referenced - Adaptive/Compare To Constant
 * '<S385>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Speed Density - MAP Referenced - Adaptive/Adapt VolEff Map/motohawk_table_1d
 * '<S386>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/motohawk_override_rel/NewValue
 * '<S387>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/motohawk_override_rel/OldValue
 * '<S388>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/FuelLevel/First Order Low Pass
 * '<S389>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/FuelLevel/First Time
 * '<S390>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/FuelLevel/Rising Edge
 * '<S391>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/FuelLevel/motohawk_table_2d
 * '<S392>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag
 * '<S393>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect1
 * '<S394>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect3
 * '<S395>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect1/DecreasingFilter
 * '<S396>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect1/First Order Low Pass
 * '<S397>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect1/IncreasingFilter
 * '<S398>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect3/DecreasingFilter
 * '<S399>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect3/First Order Low Pass
 * '<S400>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect3/IncreasingFilter
 * '<S401>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/ACPres Index
 * '<S402>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/CAT Index
 * '<S403>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/ECT Index
 * '<S404>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/IAT Indexes
 * '<S405>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/MAP Indexes
 * '<S406>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/OXY Index
 * '<S407>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/RPM Indexes
 * '<S408>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/SysVolt Index
 * '<S409>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/TPS Indexes
 * '<S410>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/VSPD Index
 * '<S411>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/APP  Sensor Arbitration1
 * '<S412>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request
 * '<S413>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Capture ECT At Startup
 * '<S414>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Capture IAT At Startup
 * '<S415>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/CutThrottle APP Limiting
 * '<S416>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Engine Accel
 * '<S417>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/EngineState
 * '<S418>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Fuel Delta Pressure Calculation
 * '<S419>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Gear Estimator
 * '<S420>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/O2 De-lag
 * '<S421>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Stall
 * '<S422>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/TPS  Sensor Arbitration
 * '<S423>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Time Since Key On
 * '<S424>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Time Since Run
 * '<S425>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Time Since Stall
 * '<S426>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/VSPD_Selector
 * '<S427>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request/First Order Low Pass
 * '<S428>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request/PassThrough1
 * '<S429>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request/PassThrough2
 * '<S430>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request/Variable Rate Limiter
 * '<S431>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request/Variable Rate Limiter/Saturation
 * '<S432>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Capture ECT At Startup/Collect Average
 * '<S433>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Capture IAT At Startup/Collect Average
 * '<S434>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/CutThrottle APP Limiting/Bound APP if overheating
 * '<S435>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Engine Accel/Derivitive3
 * '<S436>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Engine Accel/First Order Low Pass (Tunable)
 * '<S437>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Engine Accel/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S438>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/EngineState/Engine State Machine
 * '<S439>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/EngineState/TDC_Counter
 * '<S440>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/EngineState/TDC_Counter/Crank State
 * '<S441>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Time Since Key On/Time Since Enabled (With Input)2
 * '<S442>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Time Since Run/RunState
 * '<S443>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Time Since Run/Time Since Enabled (With Input)2
 * '<S444>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Time Since Stall/Stall State
 * '<S445>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Time Since Stall/Time Since Enabled (With Input)1
 * '<S446>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Virtual Indexes/ECT_KeyUp
 * '<S447>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Virtual Indexes/IAT_KeyUp
 * '<S448>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Virtual Indexes/MAFPortIndex
 * '<S449>' : BaseEngineController_LS/Foreground/Control/motohawk_function_collector/motohawk_function_collector_in
 * '<S450>' : BaseEngineController_LS/Foreground/Control/motohawk_function_collector/motohawk_function_collector_in/Triggered Subsystem
 * '<S451>' : BaseEngineController_LS/Foreground/Inputs/CAN
 * '<S452>' : BaseEngineController_LS/Foreground/Inputs/Digital
 * '<S453>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed
 * '<S454>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors
 * '<S455>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors
 * '<S456>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors
 * '<S457>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS
 * '<S458>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda
 * '<S459>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs
 * '<S460>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs1
 * '<S461>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs10
 * '<S462>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs11
 * '<S463>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs12
 * '<S464>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs2
 * '<S465>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs3
 * '<S466>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs4
 * '<S467>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs5
 * '<S468>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs6
 * '<S469>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs7
 * '<S470>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs8
 * '<S471>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs9
 * '<S472>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs/NewValue
 * '<S473>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs/OldValue
 * '<S474>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs1/NewValue
 * '<S475>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs1/OldValue
 * '<S476>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs10/NewValue
 * '<S477>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs10/OldValue
 * '<S478>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs11/NewValue
 * '<S479>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs11/OldValue
 * '<S480>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs12/NewValue
 * '<S481>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs12/OldValue
 * '<S482>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs2/NewValue
 * '<S483>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs2/OldValue
 * '<S484>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs3/NewValue
 * '<S485>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs3/OldValue
 * '<S486>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs4/NewValue
 * '<S487>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs4/OldValue
 * '<S488>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs5/NewValue
 * '<S489>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs5/OldValue
 * '<S490>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs6/NewValue
 * '<S491>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs6/OldValue
 * '<S492>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs7/NewValue
 * '<S493>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs7/OldValue
 * '<S494>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs8/NewValue
 * '<S495>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs8/OldValue
 * '<S496>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs9/NewValue
 * '<S497>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS/motohawk_override_abs9/OldValue
 * '<S498>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization
 * '<S499>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization1
 * '<S500>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs
 * '<S501>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs1
 * '<S502>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs10
 * '<S503>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs11
 * '<S504>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs12
 * '<S505>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs13
 * '<S506>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs14
 * '<S507>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs15
 * '<S508>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs16
 * '<S509>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs17
 * '<S510>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs2
 * '<S511>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs3
 * '<S512>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs4
 * '<S513>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs5
 * '<S514>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs6
 * '<S515>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs7
 * '<S516>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs8
 * '<S517>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs9
 * '<S518>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization/First Order Low Pass
 * '<S519>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization/If Action Subsystem
 * '<S520>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization/If Action Subsystem1
 * '<S521>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization/If Action Subsystem2
 * '<S522>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization/Override
 * '<S523>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization/First Order Low Pass/First Order Low Pass
 * '<S524>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization/Override/NewValue
 * '<S525>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization/Override/OldValue
 * '<S526>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization1/First Order Low Pass
 * '<S527>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization1/If Action Subsystem
 * '<S528>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization1/If Action Subsystem1
 * '<S529>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization1/If Action Subsystem2
 * '<S530>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization1/Override
 * '<S531>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization1/First Order Low Pass/First Order Low Pass
 * '<S532>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization1/Override/NewValue
 * '<S533>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization1/Override/OldValue
 * '<S534>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs/NewValue
 * '<S535>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs/OldValue
 * '<S536>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs1/NewValue
 * '<S537>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs1/OldValue
 * '<S538>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs10/NewValue
 * '<S539>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs10/OldValue
 * '<S540>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs11/NewValue
 * '<S541>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs11/OldValue
 * '<S542>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs12/NewValue
 * '<S543>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs12/OldValue
 * '<S544>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs13/NewValue
 * '<S545>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs13/OldValue
 * '<S546>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs14/NewValue
 * '<S547>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs14/OldValue
 * '<S548>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs15/NewValue
 * '<S549>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs15/OldValue
 * '<S550>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs16/NewValue
 * '<S551>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs16/OldValue
 * '<S552>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs17/NewValue
 * '<S553>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs17/OldValue
 * '<S554>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs2/NewValue
 * '<S555>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs2/OldValue
 * '<S556>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs3/NewValue
 * '<S557>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs3/OldValue
 * '<S558>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs4/NewValue
 * '<S559>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs4/OldValue
 * '<S560>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs5/NewValue
 * '<S561>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs5/OldValue
 * '<S562>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs6/NewValue
 * '<S563>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs6/OldValue
 * '<S564>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs7/NewValue
 * '<S565>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs7/OldValue
 * '<S566>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs8/NewValue
 * '<S567>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs8/OldValue
 * '<S568>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs9/NewValue
 * '<S569>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/motohawk_override_abs9/OldValue
 * '<S570>' : BaseEngineController_LS/Foreground/Inputs/Digital/ACSw
 * '<S571>' : BaseEngineController_LS/Foreground/Inputs/Digital/ClutchSw
 * '<S572>' : BaseEngineController_LS/Foreground/Inputs/Digital/ESTOP
 * '<S573>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor
 * '<S574>' : BaseEngineController_LS/Foreground/Inputs/Digital/Scramble
 * '<S575>' : BaseEngineController_LS/Foreground/Inputs/Digital/Two Step
 * '<S576>' : BaseEngineController_LS/Foreground/Inputs/Digital/VSPD
 * '<S577>' : BaseEngineController_LS/Foreground/Inputs/Digital/VSPD_Filt
 * '<S578>' : BaseEngineController_LS/Foreground/Inputs/Digital/ACSw /Override in Engineering Units
 * '<S579>' : BaseEngineController_LS/Foreground/Inputs/Digital/ACSw /Override in Engineering Units/NewValue
 * '<S580>' : BaseEngineController_LS/Foreground/Inputs/Digital/ACSw /Override in Engineering Units/OldValue
 * '<S581>' : BaseEngineController_LS/Foreground/Inputs/Digital/ClutchSw/Override in Engineering Units
 * '<S582>' : BaseEngineController_LS/Foreground/Inputs/Digital/ClutchSw/Override in Engineering Units/NewValue
 * '<S583>' : BaseEngineController_LS/Foreground/Inputs/Digital/ClutchSw/Override in Engineering Units/OldValue
 * '<S584>' : BaseEngineController_LS/Foreground/Inputs/Digital/ESTOP/Override in Engineering Units
 * '<S585>' : BaseEngineController_LS/Foreground/Inputs/Digital/ESTOP/Override in Engineering Units/NewValue
 * '<S586>' : BaseEngineController_LS/Foreground/Inputs/Digital/ESTOP/Override in Engineering Units/OldValue
 * '<S587>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor/First Order Low Pass
 * '<S588>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor/If Action Subsystem
 * '<S589>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor/If Action Subsystem1
 * '<S590>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor/If Action Subsystem2
 * '<S591>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor/Override
 * '<S592>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor/motohawk_table_1d1
 * '<S593>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor/First Order Low Pass/First Order Low Pass
 * '<S594>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor/Override/NewValue
 * '<S595>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor/Override/OldValue
 * '<S596>' : BaseEngineController_LS/Foreground/Inputs/Digital/Scramble /Button Delay 1
 * '<S597>' : BaseEngineController_LS/Foreground/Inputs/Digital/Scramble /Override in Engineering Units
 * '<S598>' : BaseEngineController_LS/Foreground/Inputs/Digital/Scramble /Button Delay 1/Time Since Enabled (With Input)4
 * '<S599>' : BaseEngineController_LS/Foreground/Inputs/Digital/Scramble /Override in Engineering Units/NewValue
 * '<S600>' : BaseEngineController_LS/Foreground/Inputs/Digital/Scramble /Override in Engineering Units/OldValue
 * '<S601>' : BaseEngineController_LS/Foreground/Inputs/Digital/Two Step/Button Delay 1
 * '<S602>' : BaseEngineController_LS/Foreground/Inputs/Digital/Two Step/Override in Engineering Units
 * '<S603>' : BaseEngineController_LS/Foreground/Inputs/Digital/Two Step/Button Delay 1/Time Since Enabled (With Input)4
 * '<S604>' : BaseEngineController_LS/Foreground/Inputs/Digital/Two Step/Override in Engineering Units/NewValue
 * '<S605>' : BaseEngineController_LS/Foreground/Inputs/Digital/Two Step/Override in Engineering Units/OldValue
 * '<S606>' : BaseEngineController_LS/Foreground/Inputs/Digital/VSPD/First Order Low Pass
 * '<S607>' : BaseEngineController_LS/Foreground/Inputs/Digital/VSPD/If Action Subsystem
 * '<S608>' : BaseEngineController_LS/Foreground/Inputs/Digital/VSPD/If Action Subsystem1
 * '<S609>' : BaseEngineController_LS/Foreground/Inputs/Digital/VSPD/If Action Subsystem2
 * '<S610>' : BaseEngineController_LS/Foreground/Inputs/Digital/VSPD/Override
 * '<S611>' : BaseEngineController_LS/Foreground/Inputs/Digital/VSPD/motohawk_table_1d1
 * '<S612>' : BaseEngineController_LS/Foreground/Inputs/Digital/VSPD/First Order Low Pass/First Order Low Pass
 * '<S613>' : BaseEngineController_LS/Foreground/Inputs/Digital/VSPD/Override/NewValue
 * '<S614>' : BaseEngineController_LS/Foreground/Inputs/Digital/VSPD/Override/OldValue
 * '<S615>' : BaseEngineController_LS/Foreground/Inputs/Digital/VSPD_Filt/Derivitive
 * '<S616>' : BaseEngineController_LS/Foreground/Inputs/Digital/VSPD_Filt/Falling Edge
 * '<S617>' : BaseEngineController_LS/Foreground/Inputs/Digital/VSPD_Filt/S-R Flip-Flop
 * '<S618>' : BaseEngineController_LS/Foreground/Inputs/Digital/VSPD_Filt/Time Since Enabled (With Input)1
 * '<S619>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed/Encoder Diagnostics
 * '<S620>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed/First Order Low Pass (Tunable)1
 * '<S621>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/CamEdges
 * '<S622>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/CamSync
 * '<S623>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/CounterThresh
 * '<S624>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/CrankEdges
 * '<S625>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/CrankSync
 * '<S626>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/motohawk_model_probe_eval_f
 * '<S627>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed/First Order Low Pass (Tunable)1/First Order Low Pass
 * '<S628>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/ACPres
 * '<S629>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor
 * '<S630>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelPres
 * '<S631>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP
 * '<S632>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAPTime
 * '<S633>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP_Crank_Synchronous
 * '<S634>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/OilPres
 * '<S635>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SensVolts
 * '<S636>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SysVolts
 * '<S637>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/ACPres /First Order Low Pass
 * '<S638>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/ACPres /If Action Subsystem
 * '<S639>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/ACPres /If Action Subsystem1
 * '<S640>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/ACPres /If Action Subsystem2
 * '<S641>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/ACPres /Override
 * '<S642>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/ACPres /First Order Low Pass/First Order Low Pass
 * '<S643>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/ACPres /Override/NewValue
 * '<S644>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/ACPres /Override/OldValue
 * '<S645>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options
 * '<S646>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/If Action Subsystem
 * '<S647>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/If Action Subsystem1
 * '<S648>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/If Action Subsystem2
 * '<S649>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Override
 * '<S650>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options/First Order Low Pass
 * '<S651>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options/Moving Average Filter
 * '<S652>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options/Rate Limiter
 * '<S653>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options/First Order Low Pass/First Order Low Pass
 * '<S654>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options/Rate Limiter/Variable Rate Limiter
 * '<S655>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options/Rate Limiter/Variable Rate Limiter/Saturation
 * '<S656>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Override/NewValue
 * '<S657>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Override/OldValue
 * '<S658>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelPres/First Order Low Pass
 * '<S659>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelPres/If Action Subsystem
 * '<S660>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelPres/If Action Subsystem1
 * '<S661>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelPres/If Action Subsystem2
 * '<S662>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelPres/Override
 * '<S663>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelPres/First Order Low Pass/First Order Low Pass
 * '<S664>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelPres/Override/NewValue
 * '<S665>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelPres/Override/OldValue
 * '<S666>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP/First Order Low Pass
 * '<S667>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP/If Action Subsystem
 * '<S668>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP/If Action Subsystem1
 * '<S669>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP/If Action Subsystem2
 * '<S670>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP/Override
 * '<S671>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP/First Order Low Pass/First Order Low Pass
 * '<S672>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP/Override/NewValue
 * '<S673>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP/Override/OldValue
 * '<S674>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAPTime/First Order Low Pass
 * '<S675>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAPTime/If Action Subsystem
 * '<S676>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAPTime/If Action Subsystem1
 * '<S677>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAPTime/If Action Subsystem2
 * '<S678>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAPTime/Override
 * '<S679>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAPTime/First Order Low Pass/First Order Low Pass
 * '<S680>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAPTime/Override/NewValue
 * '<S681>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAPTime/Override/OldValue
 * '<S682>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP_Crank_Synchronous/MID_TDC
 * '<S683>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP_Crank_Synchronous/Once at Startup
 * '<S684>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/OilPres/First Order Low Pass
 * '<S685>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/OilPres/If Action Subsystem
 * '<S686>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/OilPres/If Action Subsystem1
 * '<S687>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/OilPres/If Action Subsystem2
 * '<S688>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/OilPres/Override
 * '<S689>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/OilPres/First Order Low Pass/First Order Low Pass
 * '<S690>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/OilPres/Override/NewValue
 * '<S691>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/OilPres/Override/OldValue
 * '<S692>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SensVolts/First Order Low Pass
 * '<S693>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SensVolts/If Action Subsystem
 * '<S694>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SensVolts/If Action Subsystem1
 * '<S695>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SensVolts/If Action Subsystem2
 * '<S696>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SensVolts/Override
 * '<S697>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SensVolts/First Order Low Pass/First Order Low Pass
 * '<S698>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SensVolts/Override/NewValue
 * '<S699>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SensVolts/Override/OldValue
 * '<S700>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SysVolts/First Order Low Pass
 * '<S701>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SysVolts/If Action Subsystem
 * '<S702>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SysVolts/If Action Subsystem1
 * '<S703>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SysVolts/If Action Subsystem2
 * '<S704>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SysVolts/Override
 * '<S705>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SysVolts/First Order Low Pass/First Order Low Pass
 * '<S706>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SysVolts/Override/NewValue
 * '<S707>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SysVolts/Override/OldValue
 * '<S708>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Fuel Level
 * '<S709>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors
 * '<S710>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Fuel Level/Fuel_Lvl
 * '<S711>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Fuel Level/Fuel_Lvl  /First Order Low Pass
 * '<S712>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Fuel Level/Fuel_Lvl  /If Action Subsystem
 * '<S713>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Fuel Level/Fuel_Lvl  /If Action Subsystem1
 * '<S714>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Fuel Level/Fuel_Lvl  /If Action Subsystem2
 * '<S715>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Fuel Level/Fuel_Lvl  /Override
 * '<S716>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Fuel Level/Fuel_Lvl  /motohawk_table_1d1
 * '<S717>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Fuel Level/Fuel_Lvl  /First Order Low Pass/First Order Low Pass
 * '<S718>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Fuel Level/Fuel_Lvl  /Override/NewValue
 * '<S719>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Fuel Level/Fuel_Lvl  /Override/OldValue
 * '<S720>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/CAT1
 * '<S721>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT
 * '<S722>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP
 * '<S723>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT
 * '<S724>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/CAT1/First Order Low Pass
 * '<S725>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/CAT1/If Action Subsystem
 * '<S726>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/CAT1/If Action Subsystem1
 * '<S727>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/CAT1/If Action Subsystem2
 * '<S728>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/CAT1/Override
 * '<S729>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/CAT1/motohawk_table_1d1
 * '<S730>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/CAT1/First Order Low Pass/First Order Low Pass
 * '<S731>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/CAT1/Override/NewValue
 * '<S732>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/CAT1/Override/OldValue
 * '<S733>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /First Order Low Pass
 * '<S734>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /If Action Subsystem
 * '<S735>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /If Action Subsystem1
 * '<S736>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /If Action Subsystem2
 * '<S737>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /Override
 * '<S738>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /motohawk_table_1d1
 * '<S739>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /First Order Low Pass/First Order Low Pass
 * '<S740>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /Override/NewValue
 * '<S741>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /Override/OldValue
 * '<S742>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /First Order Low Pass
 * '<S743>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /If Action Subsystem
 * '<S744>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /If Action Subsystem1
 * '<S745>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /If Action Subsystem2
 * '<S746>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /Override
 * '<S747>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /motohawk_table_1d1
 * '<S748>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /First Order Low Pass/First Order Low Pass
 * '<S749>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /Override/NewValue
 * '<S750>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /Override/OldValue
 * '<S751>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /First Order Low Pass
 * '<S752>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /If Action Subsystem
 * '<S753>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /If Action Subsystem1
 * '<S754>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /If Action Subsystem2
 * '<S755>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /Override
 * '<S756>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /motohawk_table_1d1
 * '<S757>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /First Order Low Pass/First Order Low Pass
 * '<S758>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /Override/NewValue
 * '<S759>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /Override/OldValue
 * '<S760>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1
 * '<S761>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1ForcedAdapt
 * '<S762>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2
 * '<S763>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2ForcedAdapt
 * '<S764>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt
 * '<S765>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1
 * '<S766>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1
 * '<S767>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2
 * '<S768>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1/First Order Low Pass
 * '<S769>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1/If Action Subsystem
 * '<S770>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1/If Action Subsystem1
 * '<S771>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1/If Action Subsystem2
 * '<S772>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1/Override
 * '<S773>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1/Saturation
 * '<S774>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1/motohawk_table_1d1
 * '<S775>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1/First Order Low Pass/First Order Low Pass
 * '<S776>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1/Override/NewValue
 * '<S777>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1/Override/OldValue
 * '<S778>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1ForcedAdapt/Function-Call Subsystem
 * '<S779>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1ForcedAdapt/Function-Call Subsystem/First Time
 * '<S780>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2/First Order Low Pass
 * '<S781>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2/If Action Subsystem
 * '<S782>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2/If Action Subsystem1
 * '<S783>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2/If Action Subsystem2
 * '<S784>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2/Override
 * '<S785>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2/Saturation
 * '<S786>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2/motohawk_table_1d1
 * '<S787>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2/First Order Low Pass/First Order Low Pass
 * '<S788>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2/Override/NewValue
 * '<S789>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2/Override/OldValue
 * '<S790>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2ForcedAdapt/Function-Call Subsystem
 * '<S791>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2ForcedAdapt/Function-Call Subsystem/First Time
 * '<S792>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/ADAPT SCALING
 * '<S793>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/FAULTS
 * '<S794>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/First Order Low Pass
 * '<S795>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/SENSOR FAULT MANAGER
 * '<S796>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/Saturation
 * '<S797>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/ADAPT SCALING/ADAPT HI
 * '<S798>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/ADAPT SCALING/ADAPT LO
 * '<S799>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/ADAPT SCALING/MinMaxFilter
 * '<S800>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/ADAPT SCALING/ADAPT HI/Store Current Position
 * '<S801>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/ADAPT SCALING/ADAPT LO/Store Current Position
 * '<S802>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/First Order Low Pass/First Order Low Pass
 * '<S803>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/SENSOR FAULT MANAGER/If Action Subsystem
 * '<S804>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/SENSOR FAULT MANAGER/If Action Subsystem1
 * '<S805>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/SENSOR FAULT MANAGER/If Action Subsystem2
 * '<S806>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/SENSOR FAULT MANAGER/Override
 * '<S807>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/SENSOR FAULT MANAGER/Override/NewValue
 * '<S808>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/SENSOR FAULT MANAGER/Override/OldValue
 * '<S809>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/ADAPT SCALING
 * '<S810>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/FAULTS
 * '<S811>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/First Order Low Pass
 * '<S812>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/SENSOR FAULT MANAGER
 * '<S813>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/Saturation
 * '<S814>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/ADAPT SCALING/ADAPT HI
 * '<S815>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/ADAPT SCALING/ADAPT LO
 * '<S816>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/ADAPT SCALING/MinMaxFilter
 * '<S817>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/ADAPT SCALING/ADAPT HI/Store Current Position
 * '<S818>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/ADAPT SCALING/ADAPT LO/Store Current Position
 * '<S819>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/First Order Low Pass/First Order Low Pass
 * '<S820>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/SENSOR FAULT MANAGER/If Action Subsystem
 * '<S821>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/SENSOR FAULT MANAGER/If Action Subsystem1
 * '<S822>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/SENSOR FAULT MANAGER/If Action Subsystem2
 * '<S823>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/SENSOR FAULT MANAGER/Override
 * '<S824>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/SENSOR FAULT MANAGER/Override/NewValue
 * '<S825>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/SENSOR FAULT MANAGER/Override/OldValue
 * '<S826>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/ADAPT SCALING
 * '<S827>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/FAULTS
 * '<S828>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/First Order Low Pass
 * '<S829>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER
 * '<S830>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/Saturation
 * '<S831>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/ADAPT SCALING/ADAPT HI
 * '<S832>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/ADAPT SCALING/ADAPT LO
 * '<S833>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/ADAPT SCALING/MinMaxFilter
 * '<S834>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/ADAPT SCALING/ADAPT HI/Store Current Position
 * '<S835>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/ADAPT SCALING/ADAPT LO/Store Current Position
 * '<S836>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/First Order Low Pass/First Order Low Pass
 * '<S837>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER/If Action Subsystem
 * '<S838>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER/If Action Subsystem1
 * '<S839>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER/If Action Subsystem2
 * '<S840>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER/Override
 * '<S841>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER/Override/NewValue
 * '<S842>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER/Override/OldValue
 * '<S843>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/ADAPT SCALING
 * '<S844>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/FAULTS
 * '<S845>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/First Order Low Pass
 * '<S846>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER
 * '<S847>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/Saturation
 * '<S848>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/ADAPT SCALING/ADAPT HI
 * '<S849>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/ADAPT SCALING/ADAPT LO
 * '<S850>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/ADAPT SCALING/MinMaxFilter
 * '<S851>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/ADAPT SCALING/ADAPT HI/Store Current Position
 * '<S852>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/ADAPT SCALING/ADAPT LO/Store Current Position
 * '<S853>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/First Order Low Pass/First Order Low Pass
 * '<S854>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER/If Action Subsystem
 * '<S855>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER/If Action Subsystem1
 * '<S856>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER/If Action Subsystem2
 * '<S857>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER/Override
 * '<S858>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER/Override/NewValue
 * '<S859>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER/Override/OldValue
 * '<S860>' : BaseEngineController_LS/Foreground/Outputs/AC Control
 * '<S861>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash
 * '<S862>' : BaseEngineController_LS/Foreground/Outputs/Coil Control
 * '<S863>' : BaseEngineController_LS/Foreground/Outputs/ETC_CutPower
 * '<S864>' : BaseEngineController_LS/Foreground/Outputs/FAN Control
 * '<S865>' : BaseEngineController_LS/Foreground/Outputs/FuelPump
 * '<S866>' : BaseEngineController_LS/Foreground/Outputs/HBridge
 * '<S867>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control
 * '<S868>' : BaseEngineController_LS/Foreground/Outputs/Injector Control
 * '<S869>' : BaseEngineController_LS/Foreground/Outputs/WASTEGATE-Control
 * '<S870>' : BaseEngineController_LS/Foreground/Outputs/AC Control/Discrete Actuator - AC
 * '<S871>' : BaseEngineController_LS/Foreground/Outputs/AC Control/Discrete Actuator - AC/Override in Engineering Units
 * '<S872>' : BaseEngineController_LS/Foreground/Outputs/AC Control/Discrete Actuator - AC/Override in Engineering Units/NewValue
 * '<S873>' : BaseEngineController_LS/Foreground/Outputs/AC Control/Discrete Actuator - AC/Override in Engineering Units/OldValue
 * '<S874>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Custom 1
 * '<S875>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 1
 * '<S876>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 2
 * '<S877>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 3
 * '<S878>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 4
 * '<S879>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 5
 * '<S880>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 6
 * '<S881>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 7
 * '<S882>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 8
 * '<S883>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message Boost
 * '<S884>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message DBW
 * '<S885>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 3/
 * '<S886>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 3/
 * '<S887>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 3/ 1
 * '<S888>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/Coil Enable Manager
 * '<S889>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management
 * '<S890>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/motohawk_override_rel
 * '<S891>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/motohawk_override_rel1
 * '<S892>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/Coil Enable Manager/CompareTo
 * '<S893>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/Coil Enable Manager/EST Enable TDC Counter
 * '<S894>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/Coil Enable Manager/EST Enable TDC Counter/EST Enable TDC Counter Stateflow
 * '<S895>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/Coil Enable Manager/EST Enable TDC Counter/TDC_Counter
 * '<S896>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo
 * '<S897>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo1
 * '<S898>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo10
 * '<S899>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo11
 * '<S900>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo12
 * '<S901>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo13
 * '<S902>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo14
 * '<S903>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo15
 * '<S904>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo2
 * '<S905>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo3
 * '<S906>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo4
 * '<S907>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo5
 * '<S908>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo6
 * '<S909>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo7
 * '<S910>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo8
 * '<S911>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo9
 * '<S912>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/motohawk_override_rel/NewValue
 * '<S913>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/motohawk_override_rel/OldValue
 * '<S914>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/motohawk_override_rel1/NewValue
 * '<S915>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/motohawk_override_rel1/OldValue
 * '<S916>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/Discrete Actuator - FAN1
 * '<S917>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/Discrete Actuator - FAN2
 * '<S918>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/IAC-P-CONTROL
 * '<S919>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/IAC-P-CONTROL1
 * '<S920>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/Discrete Actuator - FAN1/Override in Engineering Units
 * '<S921>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/Discrete Actuator - FAN1/Override in Engineering Units/NewValue
 * '<S922>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/Discrete Actuator - FAN1/Override in Engineering Units/OldValue
 * '<S923>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/Discrete Actuator - FAN2/Override in Engineering Units
 * '<S924>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/Discrete Actuator - FAN2/Override in Engineering Units/NewValue
 * '<S925>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/Discrete Actuator - FAN2/Override in Engineering Units/OldValue
 * '<S926>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/IAC-P-CONTROL/Saturation
 * '<S927>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/IAC-P-CONTROL/motohawk_override_abs2
 * '<S928>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/IAC-P-CONTROL/motohawk_override_abs2/NewValue
 * '<S929>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/IAC-P-CONTROL/motohawk_override_abs2/OldValue
 * '<S930>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/IAC-P-CONTROL1/Saturation
 * '<S931>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/IAC-P-CONTROL1/motohawk_override_abs2
 * '<S932>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/IAC-P-CONTROL1/motohawk_override_abs2/NewValue
 * '<S933>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/IAC-P-CONTROL1/motohawk_override_abs2/OldValue
 * '<S934>' : BaseEngineController_LS/Foreground/Outputs/FuelPump/Discrete Actuator - FUELP
 * '<S935>' : BaseEngineController_LS/Foreground/Outputs/FuelPump/Discrete Actuator - FUELP/Override in Engineering Units
 * '<S936>' : BaseEngineController_LS/Foreground/Outputs/FuelPump/Discrete Actuator - FUELP/Override in Engineering Units/NewValue
 * '<S937>' : BaseEngineController_LS/Foreground/Outputs/FuelPump/Discrete Actuator - FUELP/Override in Engineering Units/OldValue
 * '<S938>' : BaseEngineController_LS/Foreground/Outputs/HBridge/Time Since Enabled (With Input)1
 * '<S939>' : BaseEngineController_LS/Foreground/Outputs/HBridge/motohawk_override_abs2
 * '<S940>' : BaseEngineController_LS/Foreground/Outputs/HBridge/motohawk_override_abs2/NewValue
 * '<S941>' : BaseEngineController_LS/Foreground/Outputs/HBridge/motohawk_override_abs2/OldValue
 * '<S942>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control/IAC-P-CONTROL
 * '<S943>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control/IAC-S-CONTROL
 * '<S944>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control/IAC-P-CONTROL/Saturation
 * '<S945>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control/IAC-P-CONTROL/motohawk_override_abs2
 * '<S946>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control/IAC-P-CONTROL/motohawk_override_abs2/NewValue
 * '<S947>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control/IAC-P-CONTROL/motohawk_override_abs2/OldValue
 * '<S948>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control/IAC-S-CONTROL/Saturation
 * '<S949>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control/IAC-S-CONTROL/motohawk_override_abs2
 * '<S950>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control/IAC-S-CONTROL/motohawk_override_abs2/NewValue
 * '<S951>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control/IAC-S-CONTROL/motohawk_override_abs2/OldValue
 * '<S952>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/Injector Diagnostics
 * '<S953>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/Injector Enable Manager
 * '<S954>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs1
 * '<S955>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs2
 * '<S956>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs3
 * '<S957>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs4
 * '<S958>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs5
 * '<S959>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs6
 * '<S960>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/Injector Enable Manager/Stall
 * '<S961>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/Injector Enable Manager/Time Since Enabled (With Input)1
 * '<S962>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs1/NewValue
 * '<S963>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs1/OldValue
 * '<S964>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs2/NewValue
 * '<S965>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs2/OldValue
 * '<S966>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs3/NewValue
 * '<S967>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs3/OldValue
 * '<S968>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs4/NewValue
 * '<S969>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs4/OldValue
 * '<S970>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs5/NewValue
 * '<S971>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs5/OldValue
 * '<S972>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs6/NewValue
 * '<S973>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs6/OldValue
 * '<S974>' : BaseEngineController_LS/Foreground/Outputs/WASTEGATE-Control/PWM Characterization
 * '<S975>' : BaseEngineController_LS/Foreground/Outputs/WASTEGATE-Control/PWM Characterization/Saturation
 * '<S976>' : BaseEngineController_LS/Foreground/Outputs/WASTEGATE-Control/PWM Characterization/motohawk_override_abs2
 * '<S977>' : BaseEngineController_LS/Foreground/Outputs/WASTEGATE-Control/PWM Characterization/motohawk_override_abs2/NewValue
 * '<S978>' : BaseEngineController_LS/Foreground/Outputs/WASTEGATE-Control/PWM Characterization/motohawk_override_abs2/OldValue
 * '<S979>' : BaseEngineController_LS/Main Power Relay/Main Power Relay
 * '<S980>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Display Variable Event Boolean
 * '<S981>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Display Variable Event Function-Call
 * '<S982>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Display Variable Event Function-Call1
 * '<S983>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ECUP Latch
 * '<S984>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Forced Shutdown Process
 * '<S985>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/On Off Delay
 * '<S986>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes
 * '<S987>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Time Since Enabled (With Input)1
 * '<S988>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/motohawk_restore_nvmem
 * '<S989>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/motohawk_store_nvmem
 * '<S990>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Display Variable Event Function-Call/Clear
 * '<S991>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Display Variable Event Function-Call1/Clear
 * '<S992>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Forced Shutdown Process/Post Shutdown two ticks before MPRD off
 * '<S993>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Forced Shutdown Process/Processor Reboot
 * '<S994>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Forced Shutdown Process/Save NV Vars one tick before MPRD off
 * '<S995>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Forced Shutdown Process/Shutdown power on ECU565//563
 * '<S996>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Forced Shutdown Process/Time Since Enabled (With Input)1
 * '<S997>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Forced Shutdown Process/Post Shutdown two ticks before MPRD off/Post Shutdown two ticks before MPRD off
 * '<S998>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Forced Shutdown Process/Save NV Vars one tick before MPRD off/Save NV Vars one tick before MPRD off
 * '<S999>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Forced Shutdown Process/Shutdown power on ECU565//563/Shutdown power on ECU565-128
 * '<S1000>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/On Off Delay/S-R Flip-Flop
 * '<S1001>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/Post Shutdown two ticks before MPRD off
 * '<S1002>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/Processor Reboot
 * '<S1003>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/Save NV Vars one tick before MPRD off
 * '<S1004>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/Shutdown power on ECU565//563
 * '<S1005>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/motohawk_override_abs
 * '<S1006>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/Post Shutdown two ticks before MPRD off/Post Shutdown two ticks before MPRD off
 * '<S1007>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/Save NV Vars one tick before MPRD off/Save NV Vars one tick before MPRD off
 * '<S1008>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/Shutdown power on ECU565//563/Shutdown power on ECU565-128
 * '<S1009>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/motohawk_override_abs/NewValue
 * '<S1010>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/motohawk_override_abs/OldValue
 */
#endif                                 /* RTW_HEADER_BaseEngineController_LS_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
