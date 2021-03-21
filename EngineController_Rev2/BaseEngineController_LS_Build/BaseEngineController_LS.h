/*
 * File: BaseEngineController_LS.h
 *
 * Code generated for Simulink model 'BaseEngineController_LS'.
 *
 * Model version                  : 1.1996
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Thu Mar 18 14:59:10 2021
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
  real_T s721_motohawk_interpolation_1d;/* '<S721>/motohawk_interpolation_1d' */
  real_T s700_Switch;                  /* '<S700>/Switch' */
  real_T s744_MinMax;                  /* '<S744>/MinMax' */
  real_T s744_MinMax1;                 /* '<S744>/MinMax1' */
  real_T s748_MinMax1;                 /* '<S748>/MinMax1' */
  real_T s719_Merge;                   /* '<S719>/Merge' */
  real_T s758_Merge;                   /* '<S758>/Merge' */
  real_T s709_motohawk_interpolation_1d;/* '<S709>/motohawk_interpolation_1d' */
  real_T s699_Switch;                  /* '<S699>/Switch' */
  real_T s727_MinMax;                  /* '<S727>/MinMax' */
  real_T s727_MinMax1;                 /* '<S727>/MinMax1' */
  real_T s731_MinMax1;                 /* '<S731>/MinMax1' */
  real_T s707_Merge;                   /* '<S707>/Merge' */
  real_T s741_Merge;                   /* '<S741>/Merge' */
  real_T s408_Switch1;                 /* '<S408>/Switch1' */
  real_T s433_Sum;                     /* '<S433>/Sum' */
  real_T s444_RPMInst;                 /* '<S444>/Data Type Conversion1' */
  real_T s448_DataTypeConversion;      /* '<S448>/Data Type Conversion' */
  real_T s443_Gain1;                   /* '<S443>/Gain1' */
  real_T s478_motohawk_interpolation_1d;/* '<S478>/motohawk_interpolation_1d' */
  real_T s501_Sum1;                    /* '<S501>/Sum1' */
  real_T s477_Merge;                   /* '<S477>/Merge' */
  real_T s514_Merge;                   /* '<S514>/Merge' */
  real_T s500_Sum1;                    /* '<S500>/Sum1' */
  real_T s701_Switch;                  /* '<S701>/Switch' */
  real_T s761_MinMax;                  /* '<S761>/MinMax' */
  real_T s761_MinMax1;                 /* '<S761>/MinMax1' */
  real_T s765_MinMax1;                 /* '<S765>/MinMax1' */
  real_T s702_Switch;                  /* '<S702>/Switch' */
  real_T s778_MinMax;                  /* '<S778>/MinMax' */
  real_T s778_MinMax1;                 /* '<S778>/MinMax1' */
  real_T s782_MinMax1;                 /* '<S782>/MinMax1' */
  real_T s775_Merge;                   /* '<S775>/Merge' */
  real_T s792_Merge;                   /* '<S792>/Merge' */
  real_T s415_Switch2;                 /* '<S415>/Switch2' */
  real_T s502_Sum1;                    /* '<S502>/Sum1' */
  real_T s522_Merge;                   /* '<S522>/Merge' */
  real_T s581_ReadCANMessage1_o2;      /* '<S581>/Read CAN Message1' */
  real_T s581_ReadCANMessage1_o3;      /* '<S581>/Read CAN Message1' */
  real_T s581_ReadCANMessage1_o4;      /* '<S581>/Read CAN Message1' */
  real_T s581_ReadCANMessage1_o5;      /* '<S581>/Read CAN Message1' */
  real_T s581_ReadCANMessage1_o6;      /* '<S581>/Read CAN Message1' */
  real_T s581_ReadCANMessage1_o7;      /* '<S581>/Read CAN Message1' */
  real_T s581_ReadCANMessage1_o8;      /* '<S581>/Read CAN Message1' */
  real_T s581_ReadCANMessage1_o9;      /* '<S581>/Read CAN Message1' */
  real_T s581_ReadCANMessage1_o10;     /* '<S581>/Read CAN Message1' */
  real_T s581_MathFunction1;           /* '<S581>/Math Function1' */
  real_T s584_Sum1;                    /* '<S584>/Sum1' */
  real_T s615_Merge;                   /* '<S615>/Merge' */
  real_T s581_ReadCANMessage_o2;       /* '<S581>/Read CAN Message' */
  real_T s581_ReadCANMessage_o3;       /* '<S581>/Read CAN Message' */
  real_T s581_ReadCANMessage_o4;       /* '<S581>/Read CAN Message' */
  real_T s581_ReadCANMessage_o5;       /* '<S581>/Read CAN Message' */
  real_T s581_ReadCANMessage_o6;       /* '<S581>/Read CAN Message' */
  real_T s581_ReadCANMessage_o7;       /* '<S581>/Read CAN Message' */
  real_T s581_ReadCANMessage_o8;       /* '<S581>/Read CAN Message' */
  real_T s581_ReadCANMessage_o9;       /* '<S581>/Read CAN Message' */
  real_T s581_ReadCANMessage_o10;      /* '<S581>/Read CAN Message' */
  real_T s581_MathFunction;            /* '<S581>/Math Function' */
  real_T s583_Sum1;                    /* '<S583>/Sum1' */
  real_T s607_Merge;                   /* '<S607>/Merge' */
  real_T s581_Gain;                    /* '<S581>/Gain' */
  real_T s413_Sum1;                    /* '<S413>/Sum1' */
  real_T s435_Switch;                  /* '<S435>/Switch' */
  real_T s509_Sum1;                    /* '<S509>/Sum1' */
  real_T s577_Merge;                   /* '<S577>/Merge' */
  real_T s506_Merge;                   /* '<S506>/Merge' */
  real_T s504_Sum1;                    /* '<S504>/Sum1' */
  real_T s543_Merge;                   /* '<S543>/Merge' */
  real_T s366_motohawk_delta_time;     /* '<S366>/motohawk_delta_time' */
  real_T s505_Sum1;                    /* '<S505>/Sum1' */
  real_T s375_Sum;                     /* '<S375>/Sum' */
  real_T s374_motohawk_interpolation_2d2;/* '<S374>/motohawk_interpolation_2d2' */
  real_T s374_Sum;                     /* '<S374>/Sum' */
  real_T s374_NominalAirFlowRate;      /* '<S374>/Nominal Air Flow Rate' */
  real_T s374_ModelAirMassFlowRate;    /* '<S374>/Model Air Mass Flow Rate' */
  real_T s443_Gain;                    /* '<S443>/Gain' */
  real_T s469_motohawk_interpolation_1d;/* '<S469>/motohawk_interpolation_1d' */
  real_T s468_Merge;                   /* '<S468>/Merge' */
  real_T s374_MultiportSwitch;         /* '<S374>/Multiport Switch' */
  real_T s386_Merge;                   /* '<S386>/Merge' */
  real_T s389_Sum1;                    /* '<S389>/Sum1' */
  real_T s387_Merge;                   /* '<S387>/Merge' */
  real_T s392_Sum1;                    /* '<S392>/Sum1' */
  real_T s429_Sum1;                    /* '<S429>/Sum1' */
  real_T s449_DataTypeConversion;      /* '<S449>/Data Type Conversion' */
  real_T s453_DataTypeConversion;      /* '<S453>/Data Type Conversion' */
  real_T s551_Merge;                   /* '<S551>/Merge' */
  real_T s412_MultiportSwitch;         /* '<S412>/Multiport Switch' */
  real_T s135_SparkAdv;                /* '<S135>/Merge4' */
  real_T s503_Sum1;                    /* '<S503>/Sum1' */
  real_T s507_Sum1;                    /* '<S507>/Sum1' */
  real_T s135_FAN1;                    /* '<S135>/Merge12' */
  real_T s135_FAN2;                    /* '<S135>/Merge13' */
  real_T s535_Merge;                   /* '<S535>/Merge' */
  real_T s561_Merge;                   /* '<S561>/Merge' */
  real_T s135_SparkEnergy;             /* '<S135>/Merge5' */
  real_T s860_MinMax1;                 /* '<S860>/MinMax1' */
  real_T s864_MinMax1;                 /* '<S864>/MinMax1' */
  real_T s437_Switch;                  /* '<S437>/Switch' */
  real_T s135_Throttle;                /* '<S135>/Merge8' */
  real_T s801_ETC;                     /* '<S801>/Saturation' */
  real_T s135_IACP;                    /* '<S135>/Merge3' */
  real_T s878_MinMax1;                 /* '<S878>/MinMax1' */
  real_T s135_IACS;                    /* '<S135>/Merge9' */
  real_T s882_MinMax1;                 /* '<S882>/MinMax1' */
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
  real_T s909_MinMax1;                 /* '<S909>/MinMax1' */
  real_T s21_Gain[8];                  /* '<S21>/Gain' */
  real_T s413_Sum3;                    /* '<S413>/Sum3' */
  real_T s411_Sum3;                    /* '<S411>/Sum3' */
  real_T s508_Sum1;                    /* '<S508>/Sum1' */
  real_T s569_Merge;                   /* '<S569>/Merge' */
  real_T s824_Sum;                     /* '<S824>/Sum' */
  real_T s825_Sum;                     /* '<S825>/Sum' */
  real_T s827_CrankCounter;            /* '<S827>/CrankCounter' */
  real_T s673_motohawk_interpolation_1d;/* '<S673>/motohawk_interpolation_1d' */
  real_T s656_Merge;                   /* '<S656>/Merge' */
  real_T s672_Merge;                   /* '<S672>/Merge' */
  real_T s691_motohawk_interpolation_1d;/* '<S691>/motohawk_interpolation_1d' */
  real_T s658_Merge;                   /* '<S658>/Merge' */
  real_T s690_Merge;                   /* '<S690>/Merge' */
  real_T s682_motohawk_interpolation_1d;/* '<S682>/motohawk_interpolation_1d' */
  real_T s681_Merge;                   /* '<S681>/Merge' */
  real_T s664_motohawk_interpolation_1d;/* '<S664>/motohawk_interpolation_1d' */
  real_T s663_Merge;                   /* '<S663>/Merge' */
  real_T s325_Defaultifnoflow[8];      /* '<S325>/Default (if no flow)' */
  real_T s342_Sum1[8];                 /* '<S342>/Sum1' */
  real_T s341_chargemass[8];           /* '<S341>/charge mass' */
  real_T s405_Merge;                   /* '<S405>/Merge' */
  real_T s422_Sum2;                    /* '<S422>/Sum2' */
  real_T s371_Timer;                   /* '<S366>/Baro Stall State Delay' */
  real_T s319_UnitDelay;               /* '<S319>/Unit Delay' */
  real_T s309_Product1;                /* '<S309>/Product1' */
  real_T s309_Switch;                  /* '<S309>/Switch' */
  real_T s320_etc;                     /* '<S309>/Ice Break' */
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
  real_T s303_Add;                     /* '<S303>/Add' */
  real_T s300_Product;                 /* '<S300>/Product' */
  real_T s299_Product;                 /* '<S299>/Product' */
  real_T s155_ApplyOffsetstoBaseSparkAdvance1;/* '<S155>/Apply Offsets to Base Spark Advance1' */
  real_T s306_MinMax1;                 /* '<S306>/MinMax1' */
  real_T s301_Switch;                  /* '<S301>/Switch' */
  real_T s155_motohawk_interpolation_2d1;/* '<S155>/motohawk_interpolation_2d1' */
  real_T s152_Sum;                     /* '<S152>/Sum' */
  real_T s230_DontallowsetpointtoevergoabovetheTargetRPM;/* '<S230>/Don't allow setpoint to ever go above the TargetRPM' */
  real_T s239_Sum2;                    /* '<S239>/Sum2' */
  real_T s239_Product2;                /* '<S239>/Product2' */
  real_T s240_Product;                 /* '<S240>/Product' */
  real_T s241_Switch1;                 /* '<S241>/Switch1' */
  real_T s232_Switch;                  /* '<S232>/Switch' */
  real_T s228_Sum;                     /* '<S228>/Sum' */
  real_T s261_MinMax1;                 /* '<S261>/MinMax1' */
  real_T s251_DontallowsetpointtoeverdropbelowtheTargetRPM;/* '<S251>/Don't allow setpoint to ever drop below the TargetRPM' */
  real_T s277_Sum2;                    /* '<S277>/Sum2' */
  real_T s277_Product2;                /* '<S277>/Product2' */
  real_T s278_Product;                 /* '<S278>/Product' */
  real_T s279_Switch1;                 /* '<S279>/Switch1' */
  real_T s153_MinGovAirPID;            /* '<S153>/Product1' */
  real_T s272_Sum1;                    /* '<S272>/Sum1' */
  real_T s272_Product;                 /* '<S272>/Product' */
  real_T s273_Product;                 /* '<S273>/Product' */
  real_T s153_IdleSpk;                 /* '<S153>/Product' */
  real_T s269_Switch;                  /* '<S269>/Switch' */
  real_T s254_DontallowsetpointtoeverdropbelowtheTargetRPM;/* '<S254>/Don't allow setpoint to ever drop below the TargetRPM' */
  real_T s154_O2FuelMult;              /* '<S154>/Switch' */
  real_T s284_Switch;                  /* '<S284>/Switch' */
  real_T s290_Sum2;                    /* '<S290>/Sum2' */
  real_T s290_Product2;                /* '<S290>/Product2' */
  real_T s292_Switch1;                 /* '<S292>/Switch1' */
  real_T s291_Product;                 /* '<S291>/Product' */
  real_T s288_Switch3;                 /* '<S288>/Switch3' */
  real_T s288_Switch1;                 /* '<S288>/Switch1' */
  real_T s288_Switch4;                 /* '<S288>/Switch4' */
  real_T s210_motohawk_interpolation_1d;/* '<S210>/motohawk_interpolation_1d' */
  real_T s208_FuelFlowMassAirflowEquivalenceRatioAirtofuelRatio;/* '<S208>/Fuel Flow = Mass Airflow * Equivalence Ratio // Air-to-fuel Ratio' */
  real_T s205_PerCylinderMassFlowRate; /* '<S205>/Per-Cylinder Mass Flow Rate' */
  real_T s205_ApplyMultipliersforO2KnockControlandEnrichment1;/* '<S205>/Apply Multipliers for O2, Knock Control, and Enrichment1' */
  real_T s227_MinMax1;                 /* '<S227>/MinMax1' */
  real_T s220_chargemass;              /* '<S220>/charge mass' */
  real_T s219_Sum1;                    /* '<S219>/Sum1' */
  real_T s211_Sum1;                    /* '<S211>/Sum1' */
  real_T s218_Sum1;                    /* '<S218>/Sum1' */
  real_T s211_Sum;                     /* '<S211>/Sum' */
  real_T s211_Product1;                /* '<S211>/Product1' */
  real_T s217_motohawk_interpolation_1d;/* '<S217>/motohawk_interpolation_1d' */
  real_T s214_motohawk_interpolation_1d;/* '<S214>/motohawk_interpolation_1d' */
  real_T s191_EquivOut;                /* '<S190>/Chart' */
  real_T s191_SparkOut;                /* '<S190>/Chart' */
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
  real_T s929_Switch;                  /* '<S929>/Switch' */
  uint32_T s445_motohawk_frequency_in; /* '<S445>/motohawk_frequency_in' */
  uint32_T s581_ReadCANMessage1_o1;    /* '<S581>/Read CAN Message1' */
  uint32_T s581_ReadCANMessage_o1;     /* '<S581>/Read CAN Message' */
  uint32_T s499_Sum;                   /* '<S499>/Sum' */
  uint32_T s9_ReadCANRaw_o2;           /* '<S9>/Read CAN Raw' */
  uint32_T s9_ReadCANRaw_o4;           /* '<S9>/Read CAN Raw' */
  uint32_T s10_motohawk_calibration;   /* '<S10>/motohawk_calibration' */
  int16_T s801_motohawk_pwm1;          /* '<S801>/motohawk_pwm1' */
  uint16_T s447_motohawk_ain2;         /* '<S447>/motohawk_ain2' */
  uint16_T s447_motohawk_ain1;         /* '<S447>/motohawk_ain1' */
  uint16_T s445_motohawk_ain4;         /* '<S445>/motohawk_ain4' */
  uint16_T s445_motohawk_ain14;        /* '<S445>/motohawk_ain14' */
  uint16_T s445_motohawk_ain_read1;    /* '<S445>/motohawk_ain_read1' */
  uint16_T s445_motohawk_ain2;         /* '<S445>/motohawk_ain2' */
  uint16_T s445_motohawk_ain1;         /* '<S445>/motohawk_ain1' */
  uint16_T s445_motohawk_ain3;         /* '<S445>/motohawk_ain3' */
  uint16_T s797_SparkSequence_o3[8];   /* '<S797>/Spark Sequence' */
  uint16_T s797_SparkSequence_o4[8];   /* '<S797>/Spark Sequence' */
  uint16_T s582_motohawk_ain;          /* '<S582>/motohawk_ain' */
  uint16_T s582_motohawk_ain1;         /* '<S582>/motohawk_ain1' */
  uint16_T s582_motohawk_ain2;         /* '<S582>/motohawk_ain2' */
  uint16_T s582_motohawk_ain3;         /* '<S582>/motohawk_ain3' */
  uint16_T s10_motohawk_calibration3;  /* '<S10>/motohawk_calibration3' */
  index_T s400_motohawk_prelookup1;    /* '<S400>/motohawk_prelookup1' */
  index_T s400_Indexes;                /* '<S400>/motohawk_prelookup5' */
  index_T s396_motohawk_prelookup;     /* '<S396>/motohawk_prelookup' */
  index_T s397_motohawk_prelookup;     /* '<S397>/motohawk_prelookup' */
  index_T s401_motohawk_prelookup;     /* '<S401>/motohawk_prelookup' */
  index_T s398_motohawk_prelookup1;    /* '<S398>/motohawk_prelookup1' */
  index_T s398_Indexes;                /* '<S398>/motohawk_prelookup5' */
  index_T s395_motohawk_prelookup;     /* '<S395>/motohawk_prelookup' */
  index_T s370_RPMAccel17Idx;          /* '<S370>/motohawk_prelookup' */
  int8_T s22_Merge1[32];               /* '<S22>/Merge1' */
  int8_T s827_DataTypeConversion;      /* '<S827>/Data Type Conversion' */
  int8_T s229_DataTypeConversion;      /* '<S229>/Data Type Conversion' */
  int8_T s229_DataTypeConversion1;     /* '<S229>/Data Type Conversion1' */
  int8_T s102_MultiportSwitch[8];      /* '<S102>/Multiport Switch' */
  int8_T s121_CutArray[8];             /* '<S121>/CutArray' */
  int8_T s27_DC_Override;              /* '<S20>/ETC Test  Manager' */
  int8_T s27_SetpointMode;             /* '<S20>/ETC Test  Manager' */
  uint8_T s410_UnitDelay;              /* '<S410>/Unit Delay' */
  uint8_T s366_motohawk_data_read1;    /* '<S366>/motohawk_data_read1' */
  uint8_T s803_InjectorSequence_o1[8]; /* '<S803>/Injector Sequence' */
  uint8_T s22_DataTypeConversion5;     /* '<S22>/Data Type Conversion5' */
  uint8_T s444_motohawk_encoder_fault; /* '<S444>/motohawk_encoder_fault' */
  uint8_T s444_motohawk_encoder_state; /* '<S444>/motohawk_encoder_state' */
  uint8_T s829_Switch1;                /* '<S829>/Switch1' */
  uint8_T s431_Switch;                 /* '<S431>/Switch' */
  uint8_T s430_State;                  /* '<S410>/Engine State Machine' */
  uint8_T s263_IdleState;              /* '<S248>/IdleStateMachine' */
  uint8_T s102_UnitDelay1;             /* '<S102>/Unit Delay1' */
  uint8_T s121_Switch;                 /* '<S121>/Switch' */
  uint8_T s9_ReadCANRaw_o5;            /* '<S9>/Read CAN Raw' */
  uint8_T s9_ReadCANRaw_o6[8];         /* '<S9>/Read CAN Raw' */
  boolean_T s410_Stall;                /* '<S410>/Relational Operator1' */
  boolean_T s410_Crank;                /* '<S410>/Relational Operator4' */
  boolean_T s410_Run;                  /* '<S410>/Logical Operator1' */
  boolean_T s455_Merge;                /* '<S455>/Merge' */
  boolean_T s386_RelationalOperator4;  /* '<S386>/Relational Operator4' */
  boolean_T s387_RelationalOperator4;  /* '<S387>/Relational Operator4' */
  boolean_T s385_LogicalOperator;      /* '<S385>/Logical Operator' */
  boolean_T s443_motohawk_din2;        /* '<S443>/motohawk_din2' */
  boolean_T s458_Merge;                /* '<S458>/Merge' */
  boolean_T s483_Merge;                /* '<S483>/Merge' */
  boolean_T s488_Merge;                /* '<S488>/Merge' */
  boolean_T s135_AC;                   /* '<S135>/Merge14' */
  boolean_T s805_LogicalOperator;      /* '<S805>/Logical Operator' */
  boolean_T s135_FUELP;                /* '<S135>/Merge7' */
  boolean_T s22_LogicalOperator2[8];   /* '<S22>/Logical Operator2' */
  boolean_T s850_LogicalOperator;      /* '<S850>/Logical Operator' */
  boolean_T s851_LogicalOperator;      /* '<S851>/Logical Operator' */
  boolean_T s443_motohawk_din;         /* '<S443>/motohawk_din' */
  boolean_T s461_Merge;                /* '<S461>/Merge' */
  boolean_T s868_LogicalOperator;      /* '<S868>/Logical Operator' */
  boolean_T s801_RelationalOperator4;  /* '<S801>/Relational Operator4' */
  boolean_T s892_Merge[8];             /* '<S892>/Merge' */
  boolean_T s374_LogicalOperator;      /* '<S374>/Logical Operator' */
  boolean_T s797_LogicalOperator1[8];  /* '<S797>/Logical Operator1' */
  boolean_T s827_RelationalOperator1;  /* '<S827>/Relational Operator1' */
  boolean_T s405_RelationalOperator3;  /* '<S405>/Relational Operator3' */
  boolean_T s371_Enable;               /* '<S366>/Baro Stall State Delay' */
  boolean_T s167_Switch1;              /* '<S167>/Switch1' */
  boolean_T s166_Switch1;              /* '<S166>/Switch1' */
  boolean_T s144_LogicalOperator2;     /* '<S144>/Logical Operator2' */
  boolean_T s144_LogicalOperator4;     /* '<S144>/Logical Operator4' */
  boolean_T s163_Switch1;              /* '<S163>/Switch1' */
  boolean_T s144_LogicalOperator1;     /* '<S144>/Logical Operator1' */
  boolean_T s144_LogicalOperator;      /* '<S144>/Logical Operator' */
  boolean_T s190_LogicalOperator;      /* '<S190>/Logical Operator' */
  boolean_T s192_Switch1;              /* '<S192>/Switch1' */
  boolean_T s229_MultiportSwitch;      /* '<S229>/Multiport Switch' */
  boolean_T s262_RelationalOperator;   /* '<S262>/Relational Operator' */
  boolean_T s248_RelationalOperator;   /* '<S248>/Relational Operator' */
  boolean_T s248_RelationalOperator3;  /* '<S248>/Relational Operator3' */
  boolean_T s248_RelationalOperator1;  /* '<S248>/Relational Operator1' */
  boolean_T s248_LogicalOperator;      /* '<S248>/Logical Operator' */
  boolean_T s248_RelationalOperator5;  /* '<S248>/Relational Operator5' */
  boolean_T s264_RelOp;                /* '<S264>/RelOp' */
  boolean_T s153_HitCrossing1;         /* '<S153>/Hit  Crossing1' */
  boolean_T s153_LogicalOperator;      /* '<S153>/Logical Operator' */
  boolean_T s249_RelationalOperator1;  /* '<S249>/Relational Operator1' */
  boolean_T s245_LogicalOperator1;     /* '<S245>/Logical Operator1' */
  boolean_T s282_LogicalOperator;      /* '<S282>/Logical Operator' */
  boolean_T s282_LogicalOperator3;     /* '<S282>/Logical Operator3' */
  boolean_T s282_RelationalOperator5;  /* '<S282>/Relational Operator5' */
  boolean_T s282_LogicalOperator2;     /* '<S282>/Logical Operator2' */
  boolean_T s207_LogicalOperator2;     /* '<S207>/Logical Operator2' */
  boolean_T s225_LogicalOperator;      /* '<S225>/Logical Operator' */
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
  boolean_T s913_RelationalOperator;   /* '<S913>/Relational Operator' */
  boolean_T s913_motohawk_data_read;   /* '<S913>/motohawk_data_read' */
  boolean_T s917_MPRDState;            /* '<S913>/ECUP Latch' */
  boolean_T s9_ReadCANRaw_o1;          /* '<S9>/Read CAN Raw' */
  boolean_T s9_ReadCANRaw_o3;          /* '<S9>/Read CAN Raw' */
  rtB_FunctionCallSubsystem_BaseEngineController_LS s698_FunctionCallSubsystem;/* '<S698>/Function-Call Subsystem' */
  rtB_FunctionCallSubsystem_BaseEngineController_LS s696_FunctionCallSubsystem;/* '<S696>/Function-Call Subsystem' */
  rtB_CollectAverage_BaseEngineController_LS s407_CollectAverage;/* '<S407>/Collect Average' */
  rtB_CollectAverage_BaseEngineController_LS s406_CollectAverage;/* '<S406>/Collect Average' */
  rtB_CollectAverage_BaseEngineController_LS s372_CollectAverage;/* '<S372>/Collect Average' */
} BlockIO_BaseEngineController_LS;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T s697_UnitDelay_DSTATE;        /* '<S697>/Unit Delay' */
  real_T s722_UnitDelay_DSTATE;        /* '<S722>/Unit Delay' */
  real_T s754_UnitDelay_DSTATE;        /* '<S754>/Unit Delay' */
  real_T s747_UnitDelay1_DSTATE;       /* '<S747>/Unit Delay1' */
  real_T s695_UnitDelay_DSTATE;        /* '<S695>/Unit Delay' */
  real_T s710_UnitDelay_DSTATE;        /* '<S710>/Unit Delay' */
  real_T s737_UnitDelay_DSTATE;        /* '<S737>/Unit Delay' */
  real_T s730_UnitDelay1_DSTATE;       /* '<S730>/Unit Delay1' */
  real_T s452_UnitDelay_DSTATE;        /* '<S452>/Unit Delay' */
  real_T s479_UnitDelay_DSTATE;        /* '<S479>/Unit Delay' */
  real_T s501_UnitDelay1_DSTATE;       /* '<S501>/Unit Delay1' */
  real_T s515_UnitDelay_DSTATE;        /* '<S515>/Unit Delay' */
  real_T s500_UnitDelay_DSTATE;        /* '<S500>/Unit Delay' */
  real_T s771_UnitDelay_DSTATE;        /* '<S771>/Unit Delay' */
  real_T s764_UnitDelay1_DSTATE;       /* '<S764>/Unit Delay1' */
  real_T s788_UnitDelay_DSTATE;        /* '<S788>/Unit Delay' */
  real_T s781_UnitDelay1_DSTATE;       /* '<S781>/Unit Delay1' */
  real_T s527_UnitDelay_DSTATE;        /* '<S527>/Unit Delay' */
  real_T s502_UnitDelay1_DSTATE;       /* '<S502>/Unit Delay1' */
  real_T s526_UnitDelay_DSTATE;        /* '<S526>/Unit Delay' */
  real_T s524_UnitDelay_DSTATE;        /* '<S524>/Unit Delay' */
  real_T s524_UnitDelay1_DSTATE;       /* '<S524>/Unit Delay1' */
  real_T s524_UnitDelay2_DSTATE;       /* '<S524>/Unit Delay2' */
  real_T s413_UnitDelay_DSTATE;        /* '<S413>/Unit Delay' */
  real_T s584_UnitDelay1_DSTATE;       /* '<S584>/Unit Delay1' */
  real_T s616_UnitDelay_DSTATE;        /* '<S616>/Unit Delay' */
  real_T s583_UnitDelay1_DSTATE;       /* '<S583>/Unit Delay1' */
  real_T s608_UnitDelay_DSTATE;        /* '<S608>/Unit Delay' */
  real_T s509_UnitDelay1_DSTATE;       /* '<S509>/Unit Delay1' */
  real_T s578_UnitDelay_DSTATE;        /* '<S578>/Unit Delay' */
  real_T s504_UnitDelay1_DSTATE;       /* '<S504>/Unit Delay1' */
  real_T s544_UnitDelay_DSTATE;        /* '<S544>/Unit Delay' */
  real_T s505_UnitDelay1_DSTATE;       /* '<S505>/Unit Delay1' */
  real_T s375_UnitDelay_DSTATE;        /* '<S375>/Unit Delay' */
  real_T s451_UnitDelay_DSTATE;        /* '<S451>/Unit Delay' */
  real_T s470_UnitDelay_DSTATE;        /* '<S470>/Unit Delay' */
  real_T s386_UnitDelay2_DSTATE;       /* '<S386>/Unit Delay2' */
  real_T s389_UnitDelay_DSTATE;        /* '<S389>/Unit Delay' */
  real_T s387_UnitDelay2_DSTATE;       /* '<S387>/Unit Delay2' */
  real_T s392_UnitDelay_DSTATE;        /* '<S392>/Unit Delay' */
  real_T s427_UnitDelay_DSTATE;        /* '<S427>/Unit Delay' */
  real_T s429_UnitDelay_DSTATE;        /* '<S429>/Unit Delay' */
  real_T s552_UnitDelay_DSTATE;        /* '<S552>/Unit Delay' */
  real_T s503_UnitDelay1_DSTATE;       /* '<S503>/Unit Delay1' */
  real_T s536_UnitDelay_DSTATE;        /* '<S536>/Unit Delay' */
  real_T s507_UnitDelay1_DSTATE;       /* '<S507>/Unit Delay1' */
  real_T s562_UnitDelay_DSTATE;        /* '<S562>/Unit Delay' */
  real_T s74_UnitDelay_DSTATE;         /* '<S74>/Unit Delay' */
  real_T s73_UnitDelay_DSTATE;         /* '<S73>/Unit Delay' */
  real_T s71_UnitDelay_DSTATE;         /* '<S71>/Unit Delay' */
  real_T s70_UnitDelay_DSTATE;         /* '<S70>/Unit Delay' */
  real_T s69_UnitDelay_DSTATE;         /* '<S69>/Unit Delay' */
  real_T s68_UnitDelay_DSTATE;         /* '<S68>/Unit Delay' */
  real_T s67_UnitDelay_DSTATE;         /* '<S67>/Unit Delay' */
  real_T s66_UnitDelay_DSTATE;         /* '<S66>/Unit Delay' */
  real_T s72_UnitDelay_DSTATE[8];      /* '<S72>/Unit Delay' */
  real_T s413_UnitDelay1_DSTATE;       /* '<S413>/Unit Delay1' */
  real_T s508_UnitDelay1_DSTATE;       /* '<S508>/Unit Delay1' */
  real_T s570_UnitDelay_DSTATE;        /* '<S570>/Unit Delay' */
  real_T s386_UnitDelay1_DSTATE;       /* '<S386>/Unit Delay1' */
  real_T s386_UnitDelay3_DSTATE;       /* '<S386>/Unit Delay3' */
  real_T s386_UnitDelay4_DSTATE;       /* '<S386>/Unit Delay4' */
  real_T s387_UnitDelay1_DSTATE;       /* '<S387>/Unit Delay1' */
  real_T s387_UnitDelay3_DSTATE;       /* '<S387>/Unit Delay3' */
  real_T s387_UnitDelay4_DSTATE;       /* '<S387>/Unit Delay4' */
  real_T s734_UnitDelay1_DSTATE;       /* '<S734>/Unit Delay1' */
  real_T s734_UnitDelay_DSTATE;        /* '<S734>/Unit Delay' */
  real_T s734_UnitDelay3_DSTATE;       /* '<S734>/Unit Delay3' */
  real_T s734_UnitDelay4_DSTATE;       /* '<S734>/Unit Delay4' */
  real_T s751_UnitDelay1_DSTATE;       /* '<S751>/Unit Delay1' */
  real_T s751_UnitDelay_DSTATE;        /* '<S751>/Unit Delay' */
  real_T s751_UnitDelay3_DSTATE;       /* '<S751>/Unit Delay3' */
  real_T s751_UnitDelay4_DSTATE;       /* '<S751>/Unit Delay4' */
  real_T s768_UnitDelay1_DSTATE;       /* '<S768>/Unit Delay1' */
  real_T s768_UnitDelay_DSTATE;        /* '<S768>/Unit Delay' */
  real_T s768_UnitDelay3_DSTATE;       /* '<S768>/Unit Delay3' */
  real_T s768_UnitDelay4_DSTATE;       /* '<S768>/Unit Delay4' */
  real_T s785_UnitDelay1_DSTATE;       /* '<S785>/Unit Delay1' */
  real_T s785_UnitDelay_DSTATE;        /* '<S785>/Unit Delay' */
  real_T s785_UnitDelay3_DSTATE;       /* '<S785>/Unit Delay3' */
  real_T s785_UnitDelay4_DSTATE;       /* '<S785>/Unit Delay4' */
  real_T s824_UnitDelay_DSTATE;        /* '<S824>/Unit Delay' */
  real_T s825_UnitDelay_DSTATE;        /* '<S825>/Unit Delay' */
  real_T s827_CrankCounter_DSTATE;     /* '<S827>/CrankCounter' */
  real_T s656_UnitDelay_DSTATE;        /* '<S656>/Unit Delay' */
  real_T s674_UnitDelay_DSTATE;        /* '<S674>/Unit Delay' */
  real_T s658_UnitDelay_DSTATE;        /* '<S658>/Unit Delay' */
  real_T s692_UnitDelay_DSTATE;        /* '<S692>/Unit Delay' */
  real_T s657_UnitDelay_DSTATE;        /* '<S657>/Unit Delay' */
  real_T s683_UnitDelay_DSTATE;        /* '<S683>/Unit Delay' */
  real_T s655_UnitDelay_DSTATE;        /* '<S655>/Unit Delay' */
  real_T s665_UnitDelay_DSTATE;        /* '<S665>/Unit Delay' */
  real_T s342_UnitDelay_DSTATE[8];     /* '<S342>/Unit Delay' */
  real_T s405_UnitDelay2_DSTATE;       /* '<S405>/Unit Delay2' */
  real_T s419_UnitDelay_DSTATE;        /* '<S419>/Unit Delay' */
  real_T s422_UnitDelay_DSTATE;        /* '<S422>/Unit Delay' */
  real_T s405_UnitDelay1_DSTATE;       /* '<S405>/Unit Delay1' */
  real_T s405_UnitDelay3_DSTATE;       /* '<S405>/Unit Delay3' */
  real_T s405_UnitDelay4_DSTATE;       /* '<S405>/Unit Delay4' */
  real_T s319_UnitDelay_DSTATE;        /* '<S319>/Unit Delay' */
  real_T s147_UnitDelay_DSTATE;        /* '<S147>/Unit Delay' */
  real_T s186_UnitDelay_DSTATE;        /* '<S186>/Unit Delay' */
  real_T s176_UnitDelay_DSTATE;        /* '<S176>/Unit Delay' */
  real_T s185_UnitDelay_DSTATE;        /* '<S185>/Unit Delay' */
  real_T s301_UnitDelay_DSTATE;        /* '<S301>/Unit Delay' */
  real_T s230_UnitDelay_DSTATE;        /* '<S230>/Unit Delay' */
  real_T s240_UnitDelay_DSTATE;        /* '<S240>/Unit Delay' */
  real_T s241_UnitDelay_DSTATE;        /* '<S241>/Unit Delay' */
  real_T s266_UnitDelay_DSTATE;        /* '<S266>/Unit Delay' */
  real_T s268_UnitDelay_DSTATE;        /* '<S268>/Unit Delay' */
  real_T s153_UnitDelay3_DSTATE;       /* '<S153>/Unit Delay3' */
  real_T s153_UnitDelay1_DSTATE;       /* '<S153>/Unit Delay1' */
  real_T s247_state_DSTATE;            /* '<S247>/state' */
  real_T s153_UnitDelay2_DSTATE;       /* '<S153>/Unit Delay2' */
  real_T s251_UnitDelay_DSTATE;        /* '<S251>/Unit Delay' */
  real_T s278_UnitDelay_DSTATE;        /* '<S278>/Unit Delay' */
  real_T s279_UnitDelay_DSTATE;        /* '<S279>/Unit Delay' */
  real_T s273_UnitDelay_DSTATE;        /* '<S273>/Unit Delay' */
  real_T s254_UnitDelay_DSTATE;        /* '<S254>/Unit Delay' */
  real_T s292_UnitDelay_DSTATE;        /* '<S292>/Unit Delay' */
  real_T s291_UnitDelay_DSTATE;        /* '<S291>/Unit Delay' */
  real_T s288_UnitDelay1_DSTATE;       /* '<S288>/Unit Delay1' */
  real_T s288_UnitDelay_DSTATE;        /* '<S288>/Unit Delay' */
  real_T s288_UnitDelay2_DSTATE;       /* '<S288>/Unit Delay2' */
  real_T s219_UnitDelay_DSTATE;        /* '<S219>/Unit Delay' */
  real_T s218_UnitDelay_DSTATE;        /* '<S218>/Unit Delay' */
  real_T s130_UnitDelay_DSTATE;        /* '<S130>/Unit Delay' */
  real_T s102_UnitDelay2_DSTATE;       /* '<S102>/Unit Delay2' */
  real_T s20_UnitDelay_DSTATE;         /* '<S20>/Unit Delay' */
  real_T s55_UnitDelay_DSTATE;         /* '<S55>/Unit Delay' */
  real_T s46_UnitDelay_DSTATE;         /* '<S46>/Unit Delay' */
  real_T s42_UnitDelay_DSTATE;         /* '<S42>/Unit Delay' */
  real_T s44_UnitDelay_DSTATE;         /* '<S44>/Unit Delay' */
  real_T s47_UnitDelay_DSTATE;         /* '<S47>/Unit Delay' */
  real_T s48_UnitDelay_DSTATE;         /* '<S48>/Unit Delay' */
  real_T s919_UnitDelay_DSTATE;        /* '<S919>/Unit Delay' */
  real_T s919_UnitDelay1_DSTATE;       /* '<S919>/Unit Delay1' */
  real_T s371_TOld;                    /* '<S366>/Baro Stall State Delay' */
  real_T s191_count;                   /* '<S190>/Chart' */
  real_T s191_EquivStart;              /* '<S190>/Chart' */
  real_T s27_TimerOld;                 /* '<S20>/ETC Test  Manager' */
  uint32_T s441_UnitDelay_DSTATE;      /* '<S441>/Unit Delay' */
  uint32_T s499_UnitDelay_DSTATE;      /* '<S499>/Unit Delay' */
  uint32_T s715_motohawk_delta_time_DWORK1;/* '<S715>/motohawk_delta_time' */
  uint32_T s746_motohawk_delta_time_DWORK1;/* '<S746>/motohawk_delta_time' */
  uint32_T s703_motohawk_delta_time_DWORK1;/* '<S703>/motohawk_delta_time' */
  uint32_T s729_motohawk_delta_time_DWORK1;/* '<S729>/motohawk_delta_time' */
  uint32_T s433_motohawk_delta_time_DWORK1;/* '<S433>/motohawk_delta_time' */
  uint32_T s473_motohawk_delta_time_DWORK1;/* '<S473>/motohawk_delta_time' */
  uint32_T s510_motohawk_delta_time_DWORK1;/* '<S510>/motohawk_delta_time' */
  uint32_T s493_motohawk_delta_time_DWORK1;/* '<S493>/motohawk_delta_time' */
  uint32_T s763_motohawk_delta_time_DWORK1;/* '<S763>/motohawk_delta_time' */
  uint32_T s780_motohawk_delta_time_DWORK1;/* '<S780>/motohawk_delta_time' */
  uint32_T s527_motohawk_delta_time_DWORK1;/* '<S527>/motohawk_delta_time' */
  uint32_T s523_motohawk_delta_time_DWORK1;/* '<S523>/motohawk_delta_time' */
  uint32_T s611_motohawk_delta_time_DWORK1;/* '<S611>/motohawk_delta_time' */
  uint32_T s603_motohawk_delta_time_DWORK1;/* '<S603>/motohawk_delta_time' */
  uint32_T s435_motohawk_delta_time_DWORK1;/* '<S435>/motohawk_delta_time' */
  uint32_T s573_motohawk_delta_time_DWORK1;/* '<S573>/motohawk_delta_time' */
  uint32_T s539_motohawk_delta_time_DWORK1;/* '<S539>/motohawk_delta_time' */
  uint32_T s366_motohawk_delta_time_DWORK1;/* '<S366>/motohawk_delta_time' */
  uint32_T s378_motohawk_delta_time_DWORK1;/* '<S378>/motohawk_delta_time' */
  uint32_T s464_motohawk_delta_time_DWORK1;/* '<S464>/motohawk_delta_time' */
  uint32_T s427_motohawk_delta_time_DWORK1;/* '<S427>/motohawk_delta_time' */
  uint32_T s484_motohawk_delta_time_DWORK1;/* '<S484>/motohawk_delta_time' */
  uint32_T s489_motohawk_delta_time_DWORK1;/* '<S489>/motohawk_delta_time' */
  uint32_T s547_motohawk_delta_time_DWORK1;/* '<S547>/motohawk_delta_time' */
  uint32_T s531_motohawk_delta_time_DWORK1;/* '<S531>/motohawk_delta_time' */
  uint32_T s557_motohawk_delta_time_DWORK1;/* '<S557>/motohawk_delta_time' */
  uint32_T s872_motohawk_delta_time_DWORK1;/* '<S872>/motohawk_delta_time' */
  uint32_T s437_motohawk_delta_time_DWORK1;/* '<S437>/motohawk_delta_time' */
  uint32_T s565_motohawk_delta_time_DWORK1;/* '<S565>/motohawk_delta_time' */
  uint32_T s668_motohawk_delta_time_DWORK1;/* '<S668>/motohawk_delta_time' */
  uint32_T s686_motohawk_delta_time_DWORK1;/* '<S686>/motohawk_delta_time' */
  uint32_T s677_motohawk_delta_time_DWORK1;/* '<S677>/motohawk_delta_time' */
  uint32_T s659_motohawk_delta_time_DWORK1;/* '<S659>/motohawk_delta_time' */
  uint32_T s333_motohawk_delta_time_DWORK1;/* '<S333>/motohawk_delta_time' */
  uint32_T s332_motohawk_delta_time_DWORK1;/* '<S332>/motohawk_delta_time' */
  uint32_T s336_motohawk_delta_time_DWORK1;/* '<S336>/motohawk_delta_time' */
  uint32_T s335_motohawk_delta_time_DWORK1;/* '<S335>/motohawk_delta_time' */
  uint32_T s337_motohawk_delta_time_DWORK1;/* '<S337>/motohawk_delta_time' */
  uint32_T s343_motohawk_delta_time_DWORK1;/* '<S343>/motohawk_delta_time' */
  uint32_T s347_motohawk_delta_time_DWORK1;/* '<S347>/motohawk_delta_time' */
  uint32_T s348_motohawk_delta_time_DWORK1;/* '<S348>/motohawk_delta_time' */
  uint32_T s349_motohawk_delta_time_DWORK1;/* '<S349>/motohawk_delta_time' */
  uint32_T s365_motohawk_delta_time_DWORK1;/* '<S365>/motohawk_delta_time' */
  uint32_T s364_motohawk_delta_time_DWORK1;/* '<S364>/motohawk_delta_time' */
  uint32_T s340_motohawk_delta_time_DWORK1;/* '<S340>/motohawk_delta_time' */
  uint32_T s345_motohawk_delta_time_DWORK1;/* '<S345>/motohawk_delta_time' */
  uint32_T s422_motohawk_delta_time_DWORK1;/* '<S422>/motohawk_delta_time' */
  uint32_T s405_motohawk_delta_time_DWORK1;/* '<S405>/motohawk_delta_time' */
  uint32_T s321_motohawk_delta_time_DWORK1;/* '<S321>/motohawk_delta_time' */
  uint32_T s320_temporalCounter_i1;    /* '<S309>/Ice Break' */
  uint32_T s320_presentTicks;          /* '<S309>/Ice Break' */
  uint32_T s320_elapsedTicks;          /* '<S309>/Ice Break' */
  uint32_T s320_previousTicks;         /* '<S309>/Ice Break' */
  uint32_T s193_motohawk_delta_time_DWORK1;/* '<S193>/motohawk_delta_time' */
  uint32_T s190_motohawk_delta_time_DWORK1;/* '<S190>/motohawk_delta_time' */
  uint32_T s176_motohawk_delta_time_DWORK1;/* '<S176>/motohawk_delta_time' */
  uint32_T s186_motohawk_delta_time_DWORK1;/* '<S186>/motohawk_delta_time' */
  uint32_T s230_motohawk_delta_time_DWORK1;/* '<S230>/motohawk_delta_time' */
  uint32_T s241_motohawk_delta_time_DWORK1;/* '<S241>/motohawk_delta_time' */
  uint32_T s247_motohawk_delta_time_DWORK1;/* '<S247>/motohawk_delta_time' */
  uint32_T s251_motohawk_delta_time_DWORK1;/* '<S251>/motohawk_delta_time' */
  uint32_T s279_motohawk_delta_time_DWORK1;/* '<S279>/motohawk_delta_time' */
  uint32_T s254_motohawk_delta_time_DWORK1;/* '<S254>/motohawk_delta_time' */
  uint32_T s292_motohawk_delta_time_DWORK1;/* '<S292>/motohawk_delta_time' */
  uint32_T s296_motohawk_delta_time_DWORK1;/* '<S296>/motohawk_delta_time' */
  uint32_T s298_motohawk_delta_time_DWORK1;/* '<S298>/motohawk_delta_time' */
  uint32_T s297_motohawk_delta_time_DWORK1;/* '<S297>/motohawk_delta_time' */
  uint32_T s216_motohawk_delta_time_DWORK1;/* '<S216>/motohawk_delta_time' */
  uint32_T s215_motohawk_delta_time_DWORK1;/* '<S215>/motohawk_delta_time' */
  uint32_T s63_motohawk_delta_time_DWORK1;/* '<S63>/motohawk_delta_time' */
  uint32_T s55_motohawk_delta_time_DWORK1;/* '<S55>/motohawk_delta_time' */
  uint32_T s43_motohawk_delta_time_DWORK1;/* '<S43>/motohawk_delta_time' */
  uint32_T s48_motohawk_delta_time_DWORK1;/* '<S48>/motohawk_delta_time' */
  uint32_T s929_motohawk_delta_time_DWORK1;/* '<S929>/motohawk_delta_time' */
  int_T s153_HitCrossing1_MODE;        /* '<S153>/Hit  Crossing1' */
  uint16_T s803_InjectorSequence_DWORK2;/* '<S803>/Injector Sequence' */
  int8_T s407_UnitDelay_DSTATE;        /* '<S407>/Unit Delay' */
  int8_T s406_UnitDelay_DSTATE;        /* '<S406>/Unit Delay' */
  int8_T s372_UnitDelay_DSTATE;        /* '<S372>/Unit Delay' */
  uint8_T s410_UnitDelay_DSTATE;       /* '<S410>/Unit Delay' */
  uint8_T s431_CrankCounter_DSTATE;    /* '<S431>/CrankCounter' */
  uint8_T s102_UnitDelay1_DSTATE;      /* '<S102>/Unit Delay1' */
  boolean_T s355_UnitDelay_DSTATE;     /* '<S355>/Unit Delay' */
  boolean_T s356_UnitDelay_DSTATE;     /* '<S356>/Unit Delay' */
  boolean_T s361_UnitDelay_DSTATE;     /* '<S361>/Unit Delay' */
  boolean_T s362_UnitDelay_DSTATE;     /* '<S362>/Unit Delay' */
  boolean_T s357_UnitDelay_DSTATE;     /* '<S357>/Unit Delay' */
  boolean_T s363_UnitDelay_DSTATE;     /* '<S363>/Unit Delay' */
  boolean_T s316_UnitDelay_DSTATE;     /* '<S316>/Unit Delay' */
  boolean_T s317_UnitDelay_DSTATE;     /* '<S317>/Unit Delay' */
  boolean_T s318_UnitDelay_DSTATE;     /* '<S318>/Unit Delay' */
  boolean_T s167_UnitDelay_DSTATE;     /* '<S167>/Unit Delay' */
  boolean_T s166_UnitDelay_DSTATE;     /* '<S166>/Unit Delay' */
  boolean_T s164_UnitDelay_DSTATE;     /* '<S164>/Unit Delay' */
  boolean_T s165_UnitDelay_DSTATE;     /* '<S165>/Unit Delay' */
  boolean_T s163_UnitDelay_DSTATE;     /* '<S163>/Unit Delay' */
  boolean_T s162_UnitDelay_DSTATE;     /* '<S162>/Unit Delay' */
  boolean_T s192_UnitDelay_DSTATE;     /* '<S192>/Unit Delay' */
  boolean_T s202_UnitDelay_DSTATE;     /* '<S202>/Unit Delay' */
  boolean_T s203_UnitDelay_DSTATE;     /* '<S203>/Unit Delay' */
  boolean_T s204_UnitDelay_DSTATE;     /* '<S204>/Unit Delay' */
  boolean_T s304_InitialConditionisTrue_DSTATE;/* '<S304>/Initial Condition is True' */
  boolean_T s152_UnitDelay_DSTATE;     /* '<S152>/Unit Delay' */
  boolean_T s244_UnitDelay_DSTATE;     /* '<S244>/Unit Delay' */
  boolean_T s295_UnitDelay_DSTATE;     /* '<S295>/Unit Delay' */
  boolean_T s45_UnitDelay_DSTATE;      /* '<S45>/Unit Delay' */
  boolean_T s918_UnitDelay8_DSTATE;    /* '<S918>/Unit Delay8' */
  boolean_T s918_UnitDelay6_DSTATE;    /* '<S918>/Unit Delay6' */
  boolean_T s918_UnitDelay7_DSTATE;    /* '<S918>/Unit Delay7' */
  boolean_T s914_UnitDelay_DSTATE;     /* '<S914>/Unit Delay' */
  boolean_T s920_UnitDelay2_DSTATE;    /* '<S920>/Unit Delay2' */
  boolean_T s913_UnitDelay5_DSTATE;    /* '<S913>/Unit Delay5' */
  boolean_T s920_UnitDelay_DSTATE;     /* '<S920>/Unit Delay' */
  boolean_T s920_UnitDelay1_DSTATE;    /* '<S920>/Unit Delay1' */
  boolean_T s913_UnitDelay3_DSTATE;    /* '<S913>/Unit Delay3' */
  boolean_T s913_UnitDelay4_DSTATE;    /* '<S913>/Unit Delay4' */
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
  uint8_T s446_motohawk_trigger_DWORK1;/* '<S446>/motohawk_trigger' */
  uint8_T s410_motohawk_trigger_DWORK1;/* '<S410>/motohawk_trigger' */
  uint8_T s506_motohawk_trigger5_DWORK1;/* '<S506>/motohawk_trigger5' */
  uint8_T s14_motohawk_trigger1_DWORK1;/* '<S14>/motohawk_trigger1' */
  uint8_T s14_motohawk_trigger_DWORK1; /* '<S14>/motohawk_trigger' */
  uint8_T s13_motohawk_trigger_DWORK1; /* '<S13>/motohawk_trigger' */
  uint8_T s696_motohawk_trigger_DWORK1;/* '<S696>/motohawk_trigger' */
  uint8_T s698_motohawk_trigger_DWORK1;/* '<S698>/motohawk_trigger' */
  uint8_T s827_motohawk_trigger1_DWORK1;/* '<S827>/motohawk_trigger1' */
  uint8_T s430_is_c2_BaseEngineController_LS;/* '<S410>/Engine State Machine' */
  uint8_T s371_is_c19_BaseEngineController_LS;/* '<S366>/Baro Stall State Delay' */
  uint8_T s320_is_active_c3_BaseEngineController_LS;/* '<S309>/Ice Break' */
  uint8_T s320_is_c3_BaseEngineController_LS;/* '<S309>/Ice Break' */
  uint8_T s136_motohawk_trigger1_DWORK1;/* '<S136>/motohawk_trigger1' */
  uint8_T s263_is_active_c12_BaseEngineController_LS;/* '<S248>/IdleStateMachine' */
  uint8_T s263_is_c12_BaseEngineController_LS;/* '<S248>/IdleStateMachine' */
  uint8_T s191_is_active_c1_BaseEngineController_LS;/* '<S190>/Chart' */
  uint8_T s191_is_c1_BaseEngineController_LS;/* '<S190>/Chart' */
  uint8_T s102_motohawk_trigger_DWORK1;/* '<S102>/motohawk_trigger' */
  uint8_T s27_is_c9_BaseEngineController_LS;/* '<S20>/ETC Test  Manager' */
  uint8_T s917_is_c8_BaseEngineController_LS;/* '<S913>/ECUP Latch' */
  boolean_T s803_InjectorSequence_DWORK1[8];/* '<S803>/Injector Sequence' */
  boolean_T s284_Multiplyby10ifnotyetenabled_FirstOutputTime;/* '<S284>/Multiply by 1.0 if not yet enabled' */
  boolean_T s933_Memory_PreviousInput; /* '<S933>/Memory' */
  boolean_T s15_Stall_MODE;            /* '<S15>/Stall' */
  boolean_T s15_Crank_MODE;            /* '<S15>/Crank' */
  boolean_T s366_CaptureSignalAtStartup_MODE;/* '<S366>/Capture Signal At Startup' */
  boolean_T s369_CaptureECTAtStartup_MODE;/* '<S369>/Capture ECT At Startup' */
  boolean_T s369_CaptureIATAtStartup_MODE;/* '<S369>/Capture IAT At Startup' */
  boolean_T s15_Run_MODE;              /* '<S15>/Run' */
  boolean_T s22_PassThrough1_MODE;     /* '<S22>/PassThrough1' */
  boolean_T s22_PassThrough3_MODE;     /* '<S22>/PassThrough3' */
  boolean_T s22_SequenceCutMachine_MODE;/* '<S22>/SequenceCutMachine' */
  boolean_T s22_PassThrough5_MODE;     /* '<S22>/PassThrough5' */
  boolean_T s22_PassThrough4_MODE;     /* '<S22>/PassThrough4' */
  boolean_T s14_ElectronicThrottleController_MODE;/* '<S14>/Electronic Throttle Controller' */
  boolean_T s206_DeltaTPSTransientFueling_MODE;/* '<S206>/Delta TPS Transient Fueling' */
  boolean_T s211_ECTTransientFueling_MODE;/* '<S211>/ECT Transient Fueling' */
  boolean_T s211_OXYTransientFueling_MODE;/* '<S211>/OXY Transient Fueling' */
  boolean_T s31_PassThrough_MODE;      /* '<S31>/PassThrough' */
  rtDW_FunctionCallSubsystem_BaseEngineController_LS s698_FunctionCallSubsystem;/* '<S698>/Function-Call Subsystem' */
  rtDW_FunctionCallSubsystem_BaseEngineController_LS s696_FunctionCallSubsystem;/* '<S696>/Function-Call Subsystem' */
  rtDW_CollectAverage_BaseEngineController_LS s407_CollectAverage;/* '<S407>/Collect Average' */
  rtDW_CollectAverage_BaseEngineController_LS s406_CollectAverage;/* '<S406>/Collect Average' */
  rtDW_CollectAverage_BaseEngineController_LS s372_CollectAverage;/* '<S372>/Collect Average' */
} D_Work_BaseEngineController_LS;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState HitCrossing1_Input_ZCE;   /* '<S153>/Hit  Crossing1' */
  ZCSigState ResetTasksCompleteToFalse_Trig_ZCE;/* '<S32>/Reset TasksComplete To False' */
  ZCSigState ResetTasksCompleteToTrue_Trig_ZCE;/* '<S20>/Reset TasksComplete To True' */
  ZCSigState ShutdownpoweronECU565563_Trig_ZCE;/* '<S920>/Shutdown power on ECU565//563' */
  ZCSigState SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE;/* '<S920>/Save NV Vars one tick before MPRD off' */
  ZCSigState ProcessorReboot_Trig_ZCE; /* '<S920>/Processor Reboot' */
  ZCSigState PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE;/* '<S920>/Post Shutdown two ticks before MPRD off' */
  ZCSigState ShutdownpoweronECU565563_Trig_ZCE_l;/* '<S918>/Shutdown power on ECU565//563' */
  ZCSigState SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE_m;/* '<S918>/Save NV Vars one tick before MPRD off' */
  ZCSigState ProcessorReboot_Trig_ZCE_h;/* '<S918>/Processor Reboot' */
  ZCSigState PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE_h;/* '<S918>/Post Shutdown two ticks before MPRD off' */
  ZCSigState Clear_Trig_ZCE;           /* '<S916>/Clear' */
  ZCSigState Clear_Trig_ZCE_k;         /* '<S915>/Clear' */
} PrevZCSigStates_BaseEngineController_LS;

/* Invariant block signals (auto storage) */
typedef struct {
  const real_T s803_Gain4;             /* '<S803>/Gain4' */
  const real_T s138_motohawk_replicate2;/* '<S138>/motohawk_replicate2' */
  const real_T s138_motohawk_replicate[8];/* '<S138>/motohawk_replicate' */
  const uint32_T s803_DataTypeConversion5;/* '<S803>/Data Type Conversion5' */
} ConstBlockIO_BaseEngineController_LS;

/* Constant parameters (auto storage) */
typedef struct {
  /* Computed Parameter: Logic_table
   * Referenced by: '<S933>/Logic'
   */
  boolean_T Logic_table[16];

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S162>/Combinatorial  Logic'
   *   '<S163>/Combinatorial  Logic'
   *   '<S164>/Combinatorial  Logic'
   *   '<S165>/Combinatorial  Logic'
   *   '<S166>/Combinatorial  Logic'
   *   '<S167>/Combinatorial  Logic'
   *   '<S192>/Combinatorial  Logic'
   *   '<S202>/Combinatorial  Logic'
   *   '<S203>/Combinatorial  Logic'
   *   '<S204>/Combinatorial  Logic'
   *   '<S316>/Combinatorial  Logic'
   *   '<S317>/Combinatorial  Logic'
   *   '<S318>/Combinatorial  Logic'
   *   '<S355>/Combinatorial  Logic'
   *   '<S356>/Combinatorial  Logic'
   *   '<S357>/Combinatorial  Logic'
   *   '<S361>/Combinatorial  Logic'
   *   '<S362>/Combinatorial  Logic'
   *   '<S363>/Combinatorial  Logic'
   *   '<S45>/Combinatorial  Logic'
   *   '<S295>/Combinatorial  Logic'
   */
  boolean_T pooled863[8];
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
 * '<S191>' : BaseEngineController_LS/Foreground/Control/Controller/Run/DFCO/DesEquivRatioMod/Chart
 * '<S192>' : BaseEngineController_LS/Foreground/Control/Controller/Run/DFCO/DesEquivRatioMod/Hysteresis
 * '<S193>' : BaseEngineController_LS/Foreground/Control/Controller/Run/DFCO/DesEquivRatioMod/Time Since Enabled (With Input)1
 * '<S194>' : BaseEngineController_LS/Foreground/Control/Controller/Run/DFCO/DesEquivRatioMod/motohawk_table_1d
 * '<S195>' : BaseEngineController_LS/Foreground/Control/Controller/Run/DFCO/DesEquivRatioMod/motohawk_table_1d1
 * '<S196>' : BaseEngineController_LS/Foreground/Control/Controller/Run/FAN Control/Hysterisis
 * '<S197>' : BaseEngineController_LS/Foreground/Control/Controller/Run/FAN Control/Hysterisis1
 * '<S198>' : BaseEngineController_LS/Foreground/Control/Controller/Run/FAN Control/Hysterisis2
 * '<S199>' : BaseEngineController_LS/Foreground/Control/Controller/Run/FAN Control/motohawk_table_2d
 * '<S200>' : BaseEngineController_LS/Foreground/Control/Controller/Run/FAN Control/motohawk_table_2d1
 * '<S201>' : BaseEngineController_LS/Foreground/Control/Controller/Run/FAN Control/motohawk_table_2d2
 * '<S202>' : BaseEngineController_LS/Foreground/Control/Controller/Run/FAN Control/Hysterisis/Hysteresis
 * '<S203>' : BaseEngineController_LS/Foreground/Control/Controller/Run/FAN Control/Hysterisis1/Hysteresis
 * '<S204>' : BaseEngineController_LS/Foreground/Control/Controller/Run/FAN Control/Hysterisis2/Hysteresis
 * '<S205>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Fuel Calculation
 * '<S206>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager
 * '<S207>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt
 * '<S208>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Fuel Calculation/Calculate Fuel Flow
 * '<S209>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Fuel Calculation/Calculate Fuel Flow/Calculate A//F Ratio
 * '<S210>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Fuel Calculation/Calculate Fuel Flow/Calculate A//F Ratio/motohawk_table_1d
 * '<S211>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling
 * '<S212>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Mass Flow to Charge Mass Transform
 * '<S213>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling/CompareTo2
 * '<S214>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling/ECT Transient Fueling
 * '<S215>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling/First Order Low Pass (Tunable)
 * '<S216>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling/First Order Low Pass (Tunable)1
 * '<S217>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling/OXY Transient Fueling
 * '<S218>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S219>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling/First Order Low Pass (Tunable)1/First Order Low Pass
 * '<S220>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Mass Flow to Charge Mass Transform/Multiply and Divide, avoiding divde by zero
 * '<S221>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Mass Flow to Charge Mass Transform/NonZero RPM
 * '<S222>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/Adapt FuelFlowComp Map
 * '<S223>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/O2 Control Enable Delay
 * '<S224>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/Saturation (Tunable)
 * '<S225>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/WarmUp Disable
 * '<S226>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/O2 Control Enable Delay/Time Since Enabled (With Input)1
 * '<S227>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/Saturation (Tunable)/Saturation
 * '<S228>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/I-Term Preload
 * '<S229>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/MaxGovState
 * '<S230>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Ramp RPM
 * '<S231>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Trigger Pre-load
 * '<S232>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)
 * '<S233>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/MaxGovState/MaxGOV Stateflow
 * '<S234>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Trigger Pre-load/InGear
 * '<S235>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Trigger Pre-load/InNeutral
 * '<S236>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Trigger Pre-load/InGear/Saturation
 * '<S237>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Trigger Pre-load/InNeutral/Saturation
 * '<S238>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Saturation
 * '<S239>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Universal PID
 * '<S240>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Derivitive3
 * '<S241>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Integrator
 * '<S242>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Model Info
 * '<S243>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Integrator/Saturation
 * '<S244>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/AiflowOffset
 * '<S245>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Base Airflow Table Adapt
 * '<S246>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Base RPM Set Pt
 * '<S247>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Handoff Alpha
 * '<S248>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination
 * '<S249>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/MotoringDetection
 * '<S250>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/OnIdle State
 * '<S251>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Ramp RPM
 * '<S252>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PD (Tunable & Scheduled)
 * '<S253>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)
 * '<S254>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/AiflowOffset/Ramp Air Into Idle State
 * '<S255>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/AiflowOffset/Run
 * '<S256>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Base Airflow Table Adapt/Adapt Base Airflow Table
 * '<S257>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Base Airflow Table Adapt/Idle Control Enable Delay
 * '<S258>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Base Airflow Table Adapt/Saturation (Tunable)
 * '<S259>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Base Airflow Table Adapt/Idle Control Enable Delay/Time Since Enabled (With Input)1
 * '<S260>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Base Airflow Table Adapt/Saturation (Tunable)/Saturation
 * '<S261>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Handoff Alpha/Saturation
 * '<S262>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/Determine if RPM is Falling
 * '<S263>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/IdleStateMachine
 * '<S264>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/OnIdle State
 * '<S265>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/Time Since Enabled (With Input)1
 * '<S266>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/Determine if RPM is Falling/Derivitive
 * '<S267>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/Determine if RPM is Falling/First Order Low Pass (Tunable)
 * '<S268>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/Determine if RPM is Falling/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S269>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/MotoringDetection/Time Since Enabled (With Input)2
 * '<S270>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PD (Tunable & Scheduled)/PID Gain Select
 * '<S271>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PD (Tunable & Scheduled)/Saturation
 * '<S272>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PD (Tunable & Scheduled)/Universal PD
 * '<S273>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PD (Tunable & Scheduled)/Universal PD/Derivitive
 * '<S274>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PD (Tunable & Scheduled)/Universal PD/Model Info
 * '<S275>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/PID Gain Select1
 * '<S276>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/Saturation
 * '<S277>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/Universal PID
 * '<S278>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Derivitive3
 * '<S279>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Integrator
 * '<S280>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Model Info
 * '<S281>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Integrator/Saturation
 * '<S282>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 Control State Determination
 * '<S283>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Calibrations
 * '<S284>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller
 * '<S285>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Calibrations/Error Gain Scheduling
 * '<S286>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Calibrations/O2 Control Switch Point Maps
 * '<S287>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Closed-Loop O2 PID Controller
 * '<S288>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Equivalence Ratio Perturbation
 * '<S289>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Closed-Loop O2 PID Controller/Saturation
 * '<S290>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Closed-Loop O2 PID Controller/Universal PID
 * '<S291>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Closed-Loop O2 PID Controller/Universal PID/Derivitive3
 * '<S292>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Closed-Loop O2 PID Controller/Universal PID/Integrator
 * '<S293>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Closed-Loop O2 PID Controller/Universal PID/Model Info
 * '<S294>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Closed-Loop O2 PID Controller/Universal PID/Integrator/Saturation
 * '<S295>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Equivalence Ratio Perturbation/Hysteresis
 * '<S296>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Equivalence Ratio Perturbation/Time Since Enabled (With Input)1
 * '<S297>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Equivalence Ratio Perturbation/Time Since Enabled (With Input)2
 * '<S298>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Equivalence Ratio Perturbation/Time Since Enabled (With Input)3
 * '<S299>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Spark Manager/Desired Eq Ratio Offset
 * '<S300>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Spark Manager/Ethanol Spark Offset
 * '<S301>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Spark Manager/Spark Advance Rate Limiter
 * '<S302>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Spark Manager/SparkAdvanceLimiter
 * '<S303>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Spark Manager/Temp Comp Offset
 * '<S304>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Spark Manager/Spark Advance Rate Limiter/First Time
 * '<S305>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Spark Manager/Spark Advance Rate Limiter/Saturation
 * '<S306>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Spark Manager/SparkAdvanceLimiter/Saturation
 * '<S307>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/FAN Control
 * '<S308>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/Fuel Pump at Startup
 * '<S309>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/Stall Throttle
 * '<S310>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/FAN Control/Hysterisis
 * '<S311>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/FAN Control/Hysterisis1
 * '<S312>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/FAN Control/Hysterisis2
 * '<S313>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/FAN Control/motohawk_table_2d
 * '<S314>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/FAN Control/motohawk_table_2d1
 * '<S315>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/FAN Control/motohawk_table_2d2
 * '<S316>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/FAN Control/Hysterisis/Hysteresis
 * '<S317>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/FAN Control/Hysterisis1/Hysteresis
 * '<S318>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/FAN Control/Hysterisis2/Hysteresis
 * '<S319>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/Fuel Pump at Startup/Time Since Enabled
 * '<S320>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/Stall Throttle/Ice Break
 * '<S321>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/Stall Throttle/Time Since Enabled (With Input)2
 * '<S322>' : BaseEngineController_LS/Foreground/Control/Diagnostics/AC Fault
 * '<S323>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Boost Fault
 * '<S324>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Engine Overheat Fault Logic
 * '<S325>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Fuel Economy
 * '<S326>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Lean Protect
 * '<S327>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Low Oil Pressure Fault Logic
 * '<S328>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MAP Fault Logic
 * '<S329>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection
 * '<S330>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Wrong Fuel Pressure Fault Logic
 * '<S331>' : BaseEngineController_LS/Foreground/Control/Diagnostics/AC Fault/Run State
 * '<S332>' : BaseEngineController_LS/Foreground/Control/Diagnostics/AC Fault/Time Since Enabled (With Input)1
 * '<S333>' : BaseEngineController_LS/Foreground/Control/Diagnostics/AC Fault/Time Since Enabled (With Input)2
 * '<S334>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Boost Fault/Run State
 * '<S335>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Boost Fault/Time Since Enabled (With Input)1
 * '<S336>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Boost Fault/Time Since Enabled (With Input)2
 * '<S337>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Boost Fault/Time Since Enabled (With Input)3
 * '<S338>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Engine Overheat Fault Logic/Run State
 * '<S339>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Fuel Economy/Calculate Fuel Density
 * '<S340>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Fuel Economy/First Order Low Pass (Tunable)
 * '<S341>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Fuel Economy/Multiply and Divide, avoiding divde by zero1
 * '<S342>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Fuel Economy/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S343>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Lean Protect/Time Since Enabled (With Input)2
 * '<S344>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Low Oil Pressure Fault Logic/Run State
 * '<S345>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Low Oil Pressure Fault Logic/Time Since Enabled (With Input)2
 * '<S346>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MAP Fault Logic/Run State
 * '<S347>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MAP Fault Logic/Time Since Enabled (With Input)1
 * '<S348>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MAP Fault Logic/Time Since Enabled (With Input)2
 * '<S349>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MAP Fault Logic/Time Since Enabled (With Input)3
 * '<S350>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/BaseRevLimit
 * '<S351>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/TwoStepRevLimit
 * '<S352>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/BaseRevLimit/Hysterisis
 * '<S353>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/BaseRevLimit/Hysterisis1
 * '<S354>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/BaseRevLimit/Hysterisis2
 * '<S355>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/BaseRevLimit/Hysterisis/Hysteresis
 * '<S356>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/BaseRevLimit/Hysterisis1/Hysteresis
 * '<S357>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/BaseRevLimit/Hysterisis2/Hysteresis
 * '<S358>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/TwoStepRevLimit/Hysterisis
 * '<S359>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/TwoStepRevLimit/Hysterisis1
 * '<S360>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/TwoStepRevLimit/Hysterisis2
 * '<S361>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/TwoStepRevLimit/Hysterisis/Hysteresis
 * '<S362>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/TwoStepRevLimit/Hysterisis1/Hysteresis
 * '<S363>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/TwoStepRevLimit/Hysterisis2/Hysteresis
 * '<S364>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Wrong Fuel Pressure Fault Logic/Time Since Enabled (With Input)1
 * '<S365>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Wrong Fuel Pressure Fault Logic/Time Since Enabled (With Input)2
 * '<S366>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs
 * '<S367>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs
 * '<S368>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes
 * '<S369>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed
 * '<S370>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Virtual Indexes
 * '<S371>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Baro Stall State Delay
 * '<S372>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Capture Signal At Startup
 * '<S373>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Running Baro Learn
 * '<S374>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Speed Density - MAP Referenced - Adaptive
 * '<S375>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/motohawk_override_rel
 * '<S376>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Capture Signal At Startup/Collect Average
 * '<S377>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Running Baro Learn/Compare To Constant
 * '<S378>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Running Baro Learn/Time Since Enabled (With Input)1
 * '<S379>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Speed Density - MAP Referenced - Adaptive/Adapt VolEff Map
 * '<S380>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Speed Density - MAP Referenced - Adaptive/C to K1
 * '<S381>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Speed Density - MAP Referenced - Adaptive/Compare To Constant
 * '<S382>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Speed Density - MAP Referenced - Adaptive/Adapt VolEff Map/motohawk_table_1d
 * '<S383>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/motohawk_override_rel/NewValue
 * '<S384>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/motohawk_override_rel/OldValue
 * '<S385>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag
 * '<S386>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect1
 * '<S387>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect3
 * '<S388>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect1/DecreasingFilter
 * '<S389>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect1/First Order Low Pass
 * '<S390>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect1/IncreasingFilter
 * '<S391>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect3/DecreasingFilter
 * '<S392>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect3/First Order Low Pass
 * '<S393>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect3/IncreasingFilter
 * '<S394>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/ACPres Index
 * '<S395>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/CAT Index
 * '<S396>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/ECT Index
 * '<S397>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/IAT Indexes
 * '<S398>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/MAP Indexes
 * '<S399>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/OXY Index
 * '<S400>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/RPM Indexes
 * '<S401>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/SysVolt Index
 * '<S402>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/TPS Indexes
 * '<S403>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/VSPD Index
 * '<S404>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/APP  Sensor Arbitration1
 * '<S405>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request
 * '<S406>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Capture ECT At Startup
 * '<S407>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Capture IAT At Startup
 * '<S408>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/CutThrottle APP Limiting
 * '<S409>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Engine Accel
 * '<S410>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/EngineState
 * '<S411>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Fuel Delta Pressure Calculation
 * '<S412>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Gear Estimator
 * '<S413>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/O2 De-lag
 * '<S414>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Stall
 * '<S415>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/TPS  Sensor Arbitration
 * '<S416>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Time Since Key On
 * '<S417>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Time Since Run
 * '<S418>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Time Since Stall
 * '<S419>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request/First Order Low Pass
 * '<S420>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request/PassThrough1
 * '<S421>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request/PassThrough2
 * '<S422>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request/Variable Rate Limiter
 * '<S423>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request/Variable Rate Limiter/Saturation
 * '<S424>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Capture ECT At Startup/Collect Average
 * '<S425>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Capture IAT At Startup/Collect Average
 * '<S426>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/CutThrottle APP Limiting/Bound APP if overheating
 * '<S427>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Engine Accel/Derivitive3
 * '<S428>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Engine Accel/First Order Low Pass (Tunable)
 * '<S429>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Engine Accel/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S430>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/EngineState/Engine State Machine
 * '<S431>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/EngineState/TDC_Counter
 * '<S432>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/EngineState/TDC_Counter/Crank State
 * '<S433>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Time Since Key On/Time Since Enabled (With Input)2
 * '<S434>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Time Since Run/RunState
 * '<S435>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Time Since Run/Time Since Enabled (With Input)2
 * '<S436>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Time Since Stall/Stall State
 * '<S437>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Time Since Stall/Time Since Enabled (With Input)1
 * '<S438>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Virtual Indexes/ECT_KeyUp
 * '<S439>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Virtual Indexes/IAT_KeyUp
 * '<S440>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Virtual Indexes/MAFPortIndex
 * '<S441>' : BaseEngineController_LS/Foreground/Control/motohawk_function_collector/motohawk_function_collector_in
 * '<S442>' : BaseEngineController_LS/Foreground/Control/motohawk_function_collector/motohawk_function_collector_in/Triggered Subsystem
 * '<S443>' : BaseEngineController_LS/Foreground/Inputs/Digital
 * '<S444>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed
 * '<S445>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors
 * '<S446>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors
 * '<S447>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors
 * '<S448>' : BaseEngineController_LS/Foreground/Inputs/Digital/ACSw
 * '<S449>' : BaseEngineController_LS/Foreground/Inputs/Digital/ClutchSw
 * '<S450>' : BaseEngineController_LS/Foreground/Inputs/Digital/ESTOP
 * '<S451>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor
 * '<S452>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor1
 * '<S453>' : BaseEngineController_LS/Foreground/Inputs/Digital/Scramble
 * '<S454>' : BaseEngineController_LS/Foreground/Inputs/Digital/Two Step
 * '<S455>' : BaseEngineController_LS/Foreground/Inputs/Digital/ACSw /Override in Engineering Units
 * '<S456>' : BaseEngineController_LS/Foreground/Inputs/Digital/ACSw /Override in Engineering Units/NewValue
 * '<S457>' : BaseEngineController_LS/Foreground/Inputs/Digital/ACSw /Override in Engineering Units/OldValue
 * '<S458>' : BaseEngineController_LS/Foreground/Inputs/Digital/ClutchSw/Override in Engineering Units
 * '<S459>' : BaseEngineController_LS/Foreground/Inputs/Digital/ClutchSw/Override in Engineering Units/NewValue
 * '<S460>' : BaseEngineController_LS/Foreground/Inputs/Digital/ClutchSw/Override in Engineering Units/OldValue
 * '<S461>' : BaseEngineController_LS/Foreground/Inputs/Digital/ESTOP/Override in Engineering Units
 * '<S462>' : BaseEngineController_LS/Foreground/Inputs/Digital/ESTOP/Override in Engineering Units/NewValue
 * '<S463>' : BaseEngineController_LS/Foreground/Inputs/Digital/ESTOP/Override in Engineering Units/OldValue
 * '<S464>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor/First Order Low Pass
 * '<S465>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor/If Action Subsystem
 * '<S466>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor/If Action Subsystem1
 * '<S467>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor/If Action Subsystem2
 * '<S468>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor/Override
 * '<S469>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor/motohawk_table_1d1
 * '<S470>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor/First Order Low Pass/First Order Low Pass
 * '<S471>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor/Override/NewValue
 * '<S472>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor/Override/OldValue
 * '<S473>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor1/First Order Low Pass
 * '<S474>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor1/If Action Subsystem
 * '<S475>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor1/If Action Subsystem1
 * '<S476>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor1/If Action Subsystem2
 * '<S477>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor1/Override
 * '<S478>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor1/motohawk_table_1d1
 * '<S479>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor1/First Order Low Pass/First Order Low Pass
 * '<S480>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor1/Override/NewValue
 * '<S481>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor1/Override/OldValue
 * '<S482>' : BaseEngineController_LS/Foreground/Inputs/Digital/Scramble /Button Delay 1
 * '<S483>' : BaseEngineController_LS/Foreground/Inputs/Digital/Scramble /Override in Engineering Units
 * '<S484>' : BaseEngineController_LS/Foreground/Inputs/Digital/Scramble /Button Delay 1/Time Since Enabled (With Input)4
 * '<S485>' : BaseEngineController_LS/Foreground/Inputs/Digital/Scramble /Override in Engineering Units/NewValue
 * '<S486>' : BaseEngineController_LS/Foreground/Inputs/Digital/Scramble /Override in Engineering Units/OldValue
 * '<S487>' : BaseEngineController_LS/Foreground/Inputs/Digital/Two Step/Button Delay 1
 * '<S488>' : BaseEngineController_LS/Foreground/Inputs/Digital/Two Step/Override in Engineering Units
 * '<S489>' : BaseEngineController_LS/Foreground/Inputs/Digital/Two Step/Button Delay 1/Time Since Enabled (With Input)4
 * '<S490>' : BaseEngineController_LS/Foreground/Inputs/Digital/Two Step/Override in Engineering Units/NewValue
 * '<S491>' : BaseEngineController_LS/Foreground/Inputs/Digital/Two Step/Override in Engineering Units/OldValue
 * '<S492>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed/Encoder Diagnostics
 * '<S493>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed/First Order Low Pass (Tunable)1
 * '<S494>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/CamEdges
 * '<S495>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/CamSync
 * '<S496>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/CounterThresh
 * '<S497>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/CrankEdges
 * '<S498>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/CrankSync
 * '<S499>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/motohawk_model_probe_eval_f
 * '<S500>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed/First Order Low Pass (Tunable)1/First Order Low Pass
 * '<S501>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/ACPres
 * '<S502>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor
 * '<S503>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelPres
 * '<S504>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP
 * '<S505>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAPTime
 * '<S506>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP_Crank_Synchronous
 * '<S507>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/OilPres
 * '<S508>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SensVolts
 * '<S509>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SysVolts
 * '<S510>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/ACPres /First Order Low Pass
 * '<S511>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/ACPres /If Action Subsystem
 * '<S512>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/ACPres /If Action Subsystem1
 * '<S513>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/ACPres /If Action Subsystem2
 * '<S514>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/ACPres /Override
 * '<S515>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/ACPres /First Order Low Pass/First Order Low Pass
 * '<S516>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/ACPres /Override/NewValue
 * '<S517>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/ACPres /Override/OldValue
 * '<S518>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options
 * '<S519>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/If Action Subsystem
 * '<S520>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/If Action Subsystem1
 * '<S521>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/If Action Subsystem2
 * '<S522>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Override
 * '<S523>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options/First Order Low Pass
 * '<S524>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options/Moving Average Filter
 * '<S525>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options/Rate Limiter
 * '<S526>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options/First Order Low Pass/First Order Low Pass
 * '<S527>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options/Rate Limiter/Variable Rate Limiter
 * '<S528>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options/Rate Limiter/Variable Rate Limiter/Saturation
 * '<S529>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Override/NewValue
 * '<S530>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Override/OldValue
 * '<S531>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelPres/First Order Low Pass
 * '<S532>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelPres/If Action Subsystem
 * '<S533>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelPres/If Action Subsystem1
 * '<S534>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelPres/If Action Subsystem2
 * '<S535>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelPres/Override
 * '<S536>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelPres/First Order Low Pass/First Order Low Pass
 * '<S537>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelPres/Override/NewValue
 * '<S538>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelPres/Override/OldValue
 * '<S539>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP/First Order Low Pass
 * '<S540>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP/If Action Subsystem
 * '<S541>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP/If Action Subsystem1
 * '<S542>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP/If Action Subsystem2
 * '<S543>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP/Override
 * '<S544>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP/First Order Low Pass/First Order Low Pass
 * '<S545>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP/Override/NewValue
 * '<S546>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP/Override/OldValue
 * '<S547>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAPTime/First Order Low Pass
 * '<S548>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAPTime/If Action Subsystem
 * '<S549>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAPTime/If Action Subsystem1
 * '<S550>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAPTime/If Action Subsystem2
 * '<S551>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAPTime/Override
 * '<S552>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAPTime/First Order Low Pass/First Order Low Pass
 * '<S553>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAPTime/Override/NewValue
 * '<S554>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAPTime/Override/OldValue
 * '<S555>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP_Crank_Synchronous/MID_TDC
 * '<S556>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP_Crank_Synchronous/Once at Startup
 * '<S557>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/OilPres/First Order Low Pass
 * '<S558>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/OilPres/If Action Subsystem
 * '<S559>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/OilPres/If Action Subsystem1
 * '<S560>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/OilPres/If Action Subsystem2
 * '<S561>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/OilPres/Override
 * '<S562>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/OilPres/First Order Low Pass/First Order Low Pass
 * '<S563>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/OilPres/Override/NewValue
 * '<S564>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/OilPres/Override/OldValue
 * '<S565>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SensVolts/First Order Low Pass
 * '<S566>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SensVolts/If Action Subsystem
 * '<S567>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SensVolts/If Action Subsystem1
 * '<S568>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SensVolts/If Action Subsystem2
 * '<S569>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SensVolts/Override
 * '<S570>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SensVolts/First Order Low Pass/First Order Low Pass
 * '<S571>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SensVolts/Override/NewValue
 * '<S572>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SensVolts/Override/OldValue
 * '<S573>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SysVolts/First Order Low Pass
 * '<S574>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SysVolts/If Action Subsystem
 * '<S575>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SysVolts/If Action Subsystem1
 * '<S576>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SysVolts/If Action Subsystem2
 * '<S577>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SysVolts/Override
 * '<S578>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SysVolts/First Order Low Pass/First Order Low Pass
 * '<S579>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SysVolts/Override/NewValue
 * '<S580>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SysVolts/Override/OldValue
 * '<S581>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda
 * '<S582>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors
 * '<S583>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/Linear Sensor Characterization
 * '<S584>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/Linear Sensor Characterization1
 * '<S585>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs
 * '<S586>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs1
 * '<S587>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs10
 * '<S588>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs11
 * '<S589>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs12
 * '<S590>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs13
 * '<S591>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs14
 * '<S592>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs15
 * '<S593>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs16
 * '<S594>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs17
 * '<S595>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs2
 * '<S596>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs3
 * '<S597>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs4
 * '<S598>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs5
 * '<S599>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs6
 * '<S600>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs7
 * '<S601>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs8
 * '<S602>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs9
 * '<S603>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/Linear Sensor Characterization/First Order Low Pass
 * '<S604>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/Linear Sensor Characterization/If Action Subsystem
 * '<S605>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/Linear Sensor Characterization/If Action Subsystem1
 * '<S606>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/Linear Sensor Characterization/If Action Subsystem2
 * '<S607>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/Linear Sensor Characterization/Override
 * '<S608>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/Linear Sensor Characterization/First Order Low Pass/First Order Low Pass
 * '<S609>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/Linear Sensor Characterization/Override/NewValue
 * '<S610>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/Linear Sensor Characterization/Override/OldValue
 * '<S611>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/Linear Sensor Characterization1/First Order Low Pass
 * '<S612>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/Linear Sensor Characterization1/If Action Subsystem
 * '<S613>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/Linear Sensor Characterization1/If Action Subsystem1
 * '<S614>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/Linear Sensor Characterization1/If Action Subsystem2
 * '<S615>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/Linear Sensor Characterization1/Override
 * '<S616>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/Linear Sensor Characterization1/First Order Low Pass/First Order Low Pass
 * '<S617>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/Linear Sensor Characterization1/Override/NewValue
 * '<S618>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/Linear Sensor Characterization1/Override/OldValue
 * '<S619>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs/NewValue
 * '<S620>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs/OldValue
 * '<S621>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs1/NewValue
 * '<S622>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs1/OldValue
 * '<S623>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs10/NewValue
 * '<S624>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs10/OldValue
 * '<S625>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs11/NewValue
 * '<S626>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs11/OldValue
 * '<S627>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs12/NewValue
 * '<S628>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs12/OldValue
 * '<S629>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs13/NewValue
 * '<S630>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs13/OldValue
 * '<S631>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs14/NewValue
 * '<S632>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs14/OldValue
 * '<S633>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs15/NewValue
 * '<S634>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs15/OldValue
 * '<S635>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs16/NewValue
 * '<S636>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs16/OldValue
 * '<S637>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs17/NewValue
 * '<S638>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs17/OldValue
 * '<S639>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs2/NewValue
 * '<S640>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs2/OldValue
 * '<S641>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs3/NewValue
 * '<S642>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs3/OldValue
 * '<S643>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs4/NewValue
 * '<S644>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs4/OldValue
 * '<S645>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs5/NewValue
 * '<S646>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs5/OldValue
 * '<S647>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs6/NewValue
 * '<S648>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs6/OldValue
 * '<S649>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs7/NewValue
 * '<S650>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs7/OldValue
 * '<S651>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs8/NewValue
 * '<S652>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs8/OldValue
 * '<S653>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs9/NewValue
 * '<S654>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs9/OldValue
 * '<S655>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/CAT1
 * '<S656>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT
 * '<S657>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP
 * '<S658>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT
 * '<S659>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/CAT1/First Order Low Pass
 * '<S660>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/CAT1/If Action Subsystem
 * '<S661>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/CAT1/If Action Subsystem1
 * '<S662>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/CAT1/If Action Subsystem2
 * '<S663>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/CAT1/Override
 * '<S664>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/CAT1/motohawk_table_1d1
 * '<S665>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/CAT1/First Order Low Pass/First Order Low Pass
 * '<S666>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/CAT1/Override/NewValue
 * '<S667>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/CAT1/Override/OldValue
 * '<S668>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /First Order Low Pass
 * '<S669>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /If Action Subsystem
 * '<S670>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /If Action Subsystem1
 * '<S671>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /If Action Subsystem2
 * '<S672>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /Override
 * '<S673>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /motohawk_table_1d1
 * '<S674>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /First Order Low Pass/First Order Low Pass
 * '<S675>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /Override/NewValue
 * '<S676>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /Override/OldValue
 * '<S677>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /First Order Low Pass
 * '<S678>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /If Action Subsystem
 * '<S679>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /If Action Subsystem1
 * '<S680>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /If Action Subsystem2
 * '<S681>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /Override
 * '<S682>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /motohawk_table_1d1
 * '<S683>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /First Order Low Pass/First Order Low Pass
 * '<S684>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /Override/NewValue
 * '<S685>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /Override/OldValue
 * '<S686>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /First Order Low Pass
 * '<S687>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /If Action Subsystem
 * '<S688>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /If Action Subsystem1
 * '<S689>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /If Action Subsystem2
 * '<S690>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /Override
 * '<S691>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /motohawk_table_1d1
 * '<S692>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /First Order Low Pass/First Order Low Pass
 * '<S693>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /Override/NewValue
 * '<S694>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /Override/OldValue
 * '<S695>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1
 * '<S696>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1ForcedAdapt
 * '<S697>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2
 * '<S698>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2ForcedAdapt
 * '<S699>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt
 * '<S700>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1
 * '<S701>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1
 * '<S702>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2
 * '<S703>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1/First Order Low Pass
 * '<S704>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1/If Action Subsystem
 * '<S705>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1/If Action Subsystem1
 * '<S706>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1/If Action Subsystem2
 * '<S707>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1/Override
 * '<S708>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1/Saturation
 * '<S709>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1/motohawk_table_1d1
 * '<S710>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1/First Order Low Pass/First Order Low Pass
 * '<S711>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1/Override/NewValue
 * '<S712>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1/Override/OldValue
 * '<S713>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1ForcedAdapt/Function-Call Subsystem
 * '<S714>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1ForcedAdapt/Function-Call Subsystem/First Time
 * '<S715>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2/First Order Low Pass
 * '<S716>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2/If Action Subsystem
 * '<S717>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2/If Action Subsystem1
 * '<S718>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2/If Action Subsystem2
 * '<S719>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2/Override
 * '<S720>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2/Saturation
 * '<S721>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2/motohawk_table_1d1
 * '<S722>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2/First Order Low Pass/First Order Low Pass
 * '<S723>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2/Override/NewValue
 * '<S724>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2/Override/OldValue
 * '<S725>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2ForcedAdapt/Function-Call Subsystem
 * '<S726>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2ForcedAdapt/Function-Call Subsystem/First Time
 * '<S727>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/ADAPT SCALING
 * '<S728>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/FAULTS
 * '<S729>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/First Order Low Pass
 * '<S730>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/SENSOR FAULT MANAGER
 * '<S731>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/Saturation
 * '<S732>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/ADAPT SCALING/ADAPT HI
 * '<S733>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/ADAPT SCALING/ADAPT LO
 * '<S734>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/ADAPT SCALING/MinMaxFilter
 * '<S735>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/ADAPT SCALING/ADAPT HI/Store Current Position
 * '<S736>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/ADAPT SCALING/ADAPT LO/Store Current Position
 * '<S737>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/First Order Low Pass/First Order Low Pass
 * '<S738>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/SENSOR FAULT MANAGER/If Action Subsystem
 * '<S739>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/SENSOR FAULT MANAGER/If Action Subsystem1
 * '<S740>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/SENSOR FAULT MANAGER/If Action Subsystem2
 * '<S741>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/SENSOR FAULT MANAGER/Override
 * '<S742>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/SENSOR FAULT MANAGER/Override/NewValue
 * '<S743>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/SENSOR FAULT MANAGER/Override/OldValue
 * '<S744>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/ADAPT SCALING
 * '<S745>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/FAULTS
 * '<S746>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/First Order Low Pass
 * '<S747>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/SENSOR FAULT MANAGER
 * '<S748>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/Saturation
 * '<S749>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/ADAPT SCALING/ADAPT HI
 * '<S750>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/ADAPT SCALING/ADAPT LO
 * '<S751>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/ADAPT SCALING/MinMaxFilter
 * '<S752>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/ADAPT SCALING/ADAPT HI/Store Current Position
 * '<S753>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/ADAPT SCALING/ADAPT LO/Store Current Position
 * '<S754>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/First Order Low Pass/First Order Low Pass
 * '<S755>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/SENSOR FAULT MANAGER/If Action Subsystem
 * '<S756>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/SENSOR FAULT MANAGER/If Action Subsystem1
 * '<S757>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/SENSOR FAULT MANAGER/If Action Subsystem2
 * '<S758>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/SENSOR FAULT MANAGER/Override
 * '<S759>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/SENSOR FAULT MANAGER/Override/NewValue
 * '<S760>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/SENSOR FAULT MANAGER/Override/OldValue
 * '<S761>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/ADAPT SCALING
 * '<S762>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/FAULTS
 * '<S763>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/First Order Low Pass
 * '<S764>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER
 * '<S765>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/Saturation
 * '<S766>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/ADAPT SCALING/ADAPT HI
 * '<S767>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/ADAPT SCALING/ADAPT LO
 * '<S768>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/ADAPT SCALING/MinMaxFilter
 * '<S769>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/ADAPT SCALING/ADAPT HI/Store Current Position
 * '<S770>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/ADAPT SCALING/ADAPT LO/Store Current Position
 * '<S771>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/First Order Low Pass/First Order Low Pass
 * '<S772>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER/If Action Subsystem
 * '<S773>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER/If Action Subsystem1
 * '<S774>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER/If Action Subsystem2
 * '<S775>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER/Override
 * '<S776>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER/Override/NewValue
 * '<S777>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER/Override/OldValue
 * '<S778>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/ADAPT SCALING
 * '<S779>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/FAULTS
 * '<S780>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/First Order Low Pass
 * '<S781>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER
 * '<S782>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/Saturation
 * '<S783>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/ADAPT SCALING/ADAPT HI
 * '<S784>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/ADAPT SCALING/ADAPT LO
 * '<S785>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/ADAPT SCALING/MinMaxFilter
 * '<S786>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/ADAPT SCALING/ADAPT HI/Store Current Position
 * '<S787>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/ADAPT SCALING/ADAPT LO/Store Current Position
 * '<S788>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/First Order Low Pass/First Order Low Pass
 * '<S789>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER/If Action Subsystem
 * '<S790>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER/If Action Subsystem1
 * '<S791>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER/If Action Subsystem2
 * '<S792>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER/Override
 * '<S793>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER/Override/NewValue
 * '<S794>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER/Override/OldValue
 * '<S795>' : BaseEngineController_LS/Foreground/Outputs/AC Control
 * '<S796>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash
 * '<S797>' : BaseEngineController_LS/Foreground/Outputs/Coil Control
 * '<S798>' : BaseEngineController_LS/Foreground/Outputs/ETC_CutPower
 * '<S799>' : BaseEngineController_LS/Foreground/Outputs/FAN Control
 * '<S800>' : BaseEngineController_LS/Foreground/Outputs/FuelPump
 * '<S801>' : BaseEngineController_LS/Foreground/Outputs/HBridge
 * '<S802>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control
 * '<S803>' : BaseEngineController_LS/Foreground/Outputs/Injector Control
 * '<S804>' : BaseEngineController_LS/Foreground/Outputs/WASTEGATE-Control
 * '<S805>' : BaseEngineController_LS/Foreground/Outputs/AC Control/Discrete Actuator - AC
 * '<S806>' : BaseEngineController_LS/Foreground/Outputs/AC Control/Discrete Actuator - AC/Override in Engineering Units
 * '<S807>' : BaseEngineController_LS/Foreground/Outputs/AC Control/Discrete Actuator - AC/Override in Engineering Units/NewValue
 * '<S808>' : BaseEngineController_LS/Foreground/Outputs/AC Control/Discrete Actuator - AC/Override in Engineering Units/OldValue
 * '<S809>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 1
 * '<S810>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 2
 * '<S811>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 3
 * '<S812>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 4
 * '<S813>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 5
 * '<S814>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 6
 * '<S815>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 7
 * '<S816>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 8
 * '<S817>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message Boost
 * '<S818>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message DBW
 * '<S819>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 3/
 * '<S820>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 3/
 * '<S821>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 3/ 1
 * '<S822>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/Coil Enable Manager
 * '<S823>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management
 * '<S824>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/motohawk_override_rel
 * '<S825>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/motohawk_override_rel1
 * '<S826>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/Coil Enable Manager/CompareTo
 * '<S827>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/Coil Enable Manager/EST Enable TDC Counter
 * '<S828>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/Coil Enable Manager/EST Enable TDC Counter/EST Enable TDC Counter Stateflow
 * '<S829>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/Coil Enable Manager/EST Enable TDC Counter/TDC_Counter
 * '<S830>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo
 * '<S831>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo1
 * '<S832>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo10
 * '<S833>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo11
 * '<S834>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo12
 * '<S835>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo13
 * '<S836>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo14
 * '<S837>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo15
 * '<S838>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo2
 * '<S839>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo3
 * '<S840>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo4
 * '<S841>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo5
 * '<S842>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo6
 * '<S843>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo7
 * '<S844>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo8
 * '<S845>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo9
 * '<S846>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/motohawk_override_rel/NewValue
 * '<S847>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/motohawk_override_rel/OldValue
 * '<S848>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/motohawk_override_rel1/NewValue
 * '<S849>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/motohawk_override_rel1/OldValue
 * '<S850>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/Discrete Actuator - FAN1
 * '<S851>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/Discrete Actuator - FAN2
 * '<S852>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/IAC-P-CONTROL
 * '<S853>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/IAC-P-CONTROL1
 * '<S854>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/Discrete Actuator - FAN1/Override in Engineering Units
 * '<S855>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/Discrete Actuator - FAN1/Override in Engineering Units/NewValue
 * '<S856>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/Discrete Actuator - FAN1/Override in Engineering Units/OldValue
 * '<S857>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/Discrete Actuator - FAN2/Override in Engineering Units
 * '<S858>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/Discrete Actuator - FAN2/Override in Engineering Units/NewValue
 * '<S859>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/Discrete Actuator - FAN2/Override in Engineering Units/OldValue
 * '<S860>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/IAC-P-CONTROL/Saturation
 * '<S861>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/IAC-P-CONTROL/motohawk_override_abs2
 * '<S862>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/IAC-P-CONTROL/motohawk_override_abs2/NewValue
 * '<S863>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/IAC-P-CONTROL/motohawk_override_abs2/OldValue
 * '<S864>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/IAC-P-CONTROL1/Saturation
 * '<S865>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/IAC-P-CONTROL1/motohawk_override_abs2
 * '<S866>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/IAC-P-CONTROL1/motohawk_override_abs2/NewValue
 * '<S867>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/IAC-P-CONTROL1/motohawk_override_abs2/OldValue
 * '<S868>' : BaseEngineController_LS/Foreground/Outputs/FuelPump/Discrete Actuator - FUELP
 * '<S869>' : BaseEngineController_LS/Foreground/Outputs/FuelPump/Discrete Actuator - FUELP/Override in Engineering Units
 * '<S870>' : BaseEngineController_LS/Foreground/Outputs/FuelPump/Discrete Actuator - FUELP/Override in Engineering Units/NewValue
 * '<S871>' : BaseEngineController_LS/Foreground/Outputs/FuelPump/Discrete Actuator - FUELP/Override in Engineering Units/OldValue
 * '<S872>' : BaseEngineController_LS/Foreground/Outputs/HBridge/Time Since Enabled (With Input)1
 * '<S873>' : BaseEngineController_LS/Foreground/Outputs/HBridge/motohawk_override_abs2
 * '<S874>' : BaseEngineController_LS/Foreground/Outputs/HBridge/motohawk_override_abs2/NewValue
 * '<S875>' : BaseEngineController_LS/Foreground/Outputs/HBridge/motohawk_override_abs2/OldValue
 * '<S876>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control/IAC-P-CONTROL
 * '<S877>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control/IAC-S-CONTROL
 * '<S878>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control/IAC-P-CONTROL/Saturation
 * '<S879>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control/IAC-P-CONTROL/motohawk_override_abs2
 * '<S880>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control/IAC-P-CONTROL/motohawk_override_abs2/NewValue
 * '<S881>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control/IAC-P-CONTROL/motohawk_override_abs2/OldValue
 * '<S882>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control/IAC-S-CONTROL/Saturation
 * '<S883>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control/IAC-S-CONTROL/motohawk_override_abs2
 * '<S884>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control/IAC-S-CONTROL/motohawk_override_abs2/NewValue
 * '<S885>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control/IAC-S-CONTROL/motohawk_override_abs2/OldValue
 * '<S886>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/Injector Diagnostics
 * '<S887>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/Injector Enable Manager
 * '<S888>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs1
 * '<S889>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs2
 * '<S890>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs3
 * '<S891>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs4
 * '<S892>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs5
 * '<S893>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs6
 * '<S894>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/Injector Enable Manager/Stall
 * '<S895>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/Injector Enable Manager/Time Since Enabled (With Input)1
 * '<S896>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs1/NewValue
 * '<S897>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs1/OldValue
 * '<S898>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs2/NewValue
 * '<S899>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs2/OldValue
 * '<S900>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs3/NewValue
 * '<S901>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs3/OldValue
 * '<S902>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs4/NewValue
 * '<S903>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs4/OldValue
 * '<S904>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs5/NewValue
 * '<S905>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs5/OldValue
 * '<S906>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs6/NewValue
 * '<S907>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs6/OldValue
 * '<S908>' : BaseEngineController_LS/Foreground/Outputs/WASTEGATE-Control/PWM Characterization
 * '<S909>' : BaseEngineController_LS/Foreground/Outputs/WASTEGATE-Control/PWM Characterization/Saturation
 * '<S910>' : BaseEngineController_LS/Foreground/Outputs/WASTEGATE-Control/PWM Characterization/motohawk_override_abs2
 * '<S911>' : BaseEngineController_LS/Foreground/Outputs/WASTEGATE-Control/PWM Characterization/motohawk_override_abs2/NewValue
 * '<S912>' : BaseEngineController_LS/Foreground/Outputs/WASTEGATE-Control/PWM Characterization/motohawk_override_abs2/OldValue
 * '<S913>' : BaseEngineController_LS/Main Power Relay/Main Power Relay
 * '<S914>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Display Variable Event Boolean
 * '<S915>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Display Variable Event Function-Call
 * '<S916>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Display Variable Event Function-Call1
 * '<S917>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ECUP Latch
 * '<S918>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Forced Shutdown Process
 * '<S919>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/On Off Delay
 * '<S920>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes
 * '<S921>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/motohawk_restore_nvmem
 * '<S922>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/motohawk_store_nvmem
 * '<S923>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Display Variable Event Function-Call/Clear
 * '<S924>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Display Variable Event Function-Call1/Clear
 * '<S925>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Forced Shutdown Process/Post Shutdown two ticks before MPRD off
 * '<S926>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Forced Shutdown Process/Processor Reboot
 * '<S927>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Forced Shutdown Process/Save NV Vars one tick before MPRD off
 * '<S928>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Forced Shutdown Process/Shutdown power on ECU565//563
 * '<S929>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Forced Shutdown Process/Time Since Enabled (With Input)1
 * '<S930>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Forced Shutdown Process/Post Shutdown two ticks before MPRD off/Post Shutdown two ticks before MPRD off
 * '<S931>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Forced Shutdown Process/Save NV Vars one tick before MPRD off/Save NV Vars one tick before MPRD off
 * '<S932>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Forced Shutdown Process/Shutdown power on ECU565//563/Shutdown power on ECU565-128
 * '<S933>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/On Off Delay/S-R Flip-Flop
 * '<S934>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/Post Shutdown two ticks before MPRD off
 * '<S935>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/Processor Reboot
 * '<S936>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/Save NV Vars one tick before MPRD off
 * '<S937>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/Shutdown power on ECU565//563
 * '<S938>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/motohawk_override_abs
 * '<S939>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/Post Shutdown two ticks before MPRD off/Post Shutdown two ticks before MPRD off
 * '<S940>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/Save NV Vars one tick before MPRD off/Save NV Vars one tick before MPRD off
 * '<S941>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/Shutdown power on ECU565//563/Shutdown power on ECU565-128
 * '<S942>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/motohawk_override_abs/NewValue
 * '<S943>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/motohawk_override_abs/OldValue
 */
#endif                                 /* RTW_HEADER_BaseEngineController_LS_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
