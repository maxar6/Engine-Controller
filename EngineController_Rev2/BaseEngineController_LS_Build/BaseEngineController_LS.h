/*
 * File: BaseEngineController_LS.h
 *
 * Code generated for Simulink model 'BaseEngineController_LS'.
 *
 * Model version                  : 1.2001
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Mon Apr 05 00:03:01 2021
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
  real_T s722_motohawk_interpolation_1d;/* '<S722>/motohawk_interpolation_1d' */
  real_T s701_Switch;                  /* '<S701>/Switch' */
  real_T s745_MinMax;                  /* '<S745>/MinMax' */
  real_T s745_MinMax1;                 /* '<S745>/MinMax1' */
  real_T s749_MinMax1;                 /* '<S749>/MinMax1' */
  real_T s720_Merge;                   /* '<S720>/Merge' */
  real_T s759_Merge;                   /* '<S759>/Merge' */
  real_T s710_motohawk_interpolation_1d;/* '<S710>/motohawk_interpolation_1d' */
  real_T s700_Switch;                  /* '<S700>/Switch' */
  real_T s728_MinMax;                  /* '<S728>/MinMax' */
  real_T s728_MinMax1;                 /* '<S728>/MinMax1' */
  real_T s732_MinMax1;                 /* '<S732>/MinMax1' */
  real_T s708_Merge;                   /* '<S708>/Merge' */
  real_T s742_Merge;                   /* '<S742>/Merge' */
  real_T s409_Switch1;                 /* '<S409>/Switch1' */
  real_T s434_Sum;                     /* '<S434>/Sum' */
  real_T s445_RPMInst;                 /* '<S445>/Data Type Conversion1' */
  real_T s449_DataTypeConversion;      /* '<S449>/Data Type Conversion' */
  real_T s444_Gain1;                   /* '<S444>/Gain1' */
  real_T s479_motohawk_interpolation_1d;/* '<S479>/motohawk_interpolation_1d' */
  real_T s502_Sum1;                    /* '<S502>/Sum1' */
  real_T s478_Merge;                   /* '<S478>/Merge' */
  real_T s515_Merge;                   /* '<S515>/Merge' */
  real_T s501_Sum1;                    /* '<S501>/Sum1' */
  real_T s702_Switch;                  /* '<S702>/Switch' */
  real_T s762_MinMax;                  /* '<S762>/MinMax' */
  real_T s762_MinMax1;                 /* '<S762>/MinMax1' */
  real_T s766_MinMax1;                 /* '<S766>/MinMax1' */
  real_T s703_Switch;                  /* '<S703>/Switch' */
  real_T s779_MinMax;                  /* '<S779>/MinMax' */
  real_T s779_MinMax1;                 /* '<S779>/MinMax1' */
  real_T s783_MinMax1;                 /* '<S783>/MinMax1' */
  real_T s776_Merge;                   /* '<S776>/Merge' */
  real_T s793_Merge;                   /* '<S793>/Merge' */
  real_T s416_Switch2;                 /* '<S416>/Switch2' */
  real_T s503_Sum1;                    /* '<S503>/Sum1' */
  real_T s523_Merge;                   /* '<S523>/Merge' */
  real_T s582_ReadCANMessage1_o2;      /* '<S582>/Read CAN Message1' */
  real_T s582_ReadCANMessage1_o3;      /* '<S582>/Read CAN Message1' */
  real_T s582_ReadCANMessage1_o4;      /* '<S582>/Read CAN Message1' */
  real_T s582_ReadCANMessage1_o5;      /* '<S582>/Read CAN Message1' */
  real_T s582_ReadCANMessage1_o6;      /* '<S582>/Read CAN Message1' */
  real_T s582_ReadCANMessage1_o7;      /* '<S582>/Read CAN Message1' */
  real_T s582_ReadCANMessage1_o8;      /* '<S582>/Read CAN Message1' */
  real_T s582_ReadCANMessage1_o9;      /* '<S582>/Read CAN Message1' */
  real_T s582_ReadCANMessage1_o10;     /* '<S582>/Read CAN Message1' */
  real_T s582_MathFunction1;           /* '<S582>/Math Function1' */
  real_T s585_Sum1;                    /* '<S585>/Sum1' */
  real_T s616_Merge;                   /* '<S616>/Merge' */
  real_T s582_ReadCANMessage_o2;       /* '<S582>/Read CAN Message' */
  real_T s582_ReadCANMessage_o3;       /* '<S582>/Read CAN Message' */
  real_T s582_ReadCANMessage_o4;       /* '<S582>/Read CAN Message' */
  real_T s582_ReadCANMessage_o5;       /* '<S582>/Read CAN Message' */
  real_T s582_ReadCANMessage_o6;       /* '<S582>/Read CAN Message' */
  real_T s582_ReadCANMessage_o7;       /* '<S582>/Read CAN Message' */
  real_T s582_ReadCANMessage_o8;       /* '<S582>/Read CAN Message' */
  real_T s582_ReadCANMessage_o9;       /* '<S582>/Read CAN Message' */
  real_T s582_ReadCANMessage_o10;      /* '<S582>/Read CAN Message' */
  real_T s582_MathFunction;            /* '<S582>/Math Function' */
  real_T s584_Sum1;                    /* '<S584>/Sum1' */
  real_T s608_Merge;                   /* '<S608>/Merge' */
  real_T s582_Gain;                    /* '<S582>/Gain' */
  real_T s414_Sum1;                    /* '<S414>/Sum1' */
  real_T s436_Switch;                  /* '<S436>/Switch' */
  real_T s510_Sum1;                    /* '<S510>/Sum1' */
  real_T s578_Merge;                   /* '<S578>/Merge' */
  real_T s507_Merge;                   /* '<S507>/Merge' */
  real_T s505_Sum1;                    /* '<S505>/Sum1' */
  real_T s544_Merge;                   /* '<S544>/Merge' */
  real_T s367_motohawk_delta_time;     /* '<S367>/motohawk_delta_time' */
  real_T s506_Sum1;                    /* '<S506>/Sum1' */
  real_T s376_Sum;                     /* '<S376>/Sum' */
  real_T s375_motohawk_interpolation_2d2;/* '<S375>/motohawk_interpolation_2d2' */
  real_T s375_Sum;                     /* '<S375>/Sum' */
  real_T s375_NominalAirFlowRate;      /* '<S375>/Nominal Air Flow Rate' */
  real_T s375_ModelAirMassFlowRate;    /* '<S375>/Model Air Mass Flow Rate' */
  real_T s444_Gain;                    /* '<S444>/Gain' */
  real_T s470_motohawk_interpolation_1d;/* '<S470>/motohawk_interpolation_1d' */
  real_T s469_Merge;                   /* '<S469>/Merge' */
  real_T s375_MultiportSwitch;         /* '<S375>/Multiport Switch' */
  real_T s387_Merge;                   /* '<S387>/Merge' */
  real_T s390_Sum1;                    /* '<S390>/Sum1' */
  real_T s388_Merge;                   /* '<S388>/Merge' */
  real_T s393_Sum1;                    /* '<S393>/Sum1' */
  real_T s430_Sum1;                    /* '<S430>/Sum1' */
  real_T s450_DataTypeConversion;      /* '<S450>/Data Type Conversion' */
  real_T s454_DataTypeConversion;      /* '<S454>/Data Type Conversion' */
  real_T s552_Merge;                   /* '<S552>/Merge' */
  real_T s413_MultiportSwitch;         /* '<S413>/Multiport Switch' */
  real_T s135_SparkAdv;                /* '<S135>/Merge4' */
  real_T s504_Sum1;                    /* '<S504>/Sum1' */
  real_T s508_Sum1;                    /* '<S508>/Sum1' */
  real_T s135_FAN1;                    /* '<S135>/Merge12' */
  real_T s135_FAN2;                    /* '<S135>/Merge13' */
  real_T s536_Merge;                   /* '<S536>/Merge' */
  real_T s562_Merge;                   /* '<S562>/Merge' */
  real_T s135_SparkEnergy;             /* '<S135>/Merge5' */
  real_T s861_MinMax1;                 /* '<S861>/MinMax1' */
  real_T s865_MinMax1;                 /* '<S865>/MinMax1' */
  real_T s438_Switch;                  /* '<S438>/Switch' */
  real_T s135_Throttle;                /* '<S135>/Merge8' */
  real_T s802_ETC;                     /* '<S802>/Saturation' */
  real_T s135_IACP;                    /* '<S135>/Merge3' */
  real_T s879_MinMax1;                 /* '<S879>/MinMax1' */
  real_T s135_IACS;                    /* '<S135>/Merge9' */
  real_T s883_MinMax1;                 /* '<S883>/MinMax1' */
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
  real_T s910_MinMax1;                 /* '<S910>/MinMax1' */
  real_T s21_Gain[8];                  /* '<S21>/Gain' */
  real_T s414_Sum3;                    /* '<S414>/Sum3' */
  real_T s412_Sum3;                    /* '<S412>/Sum3' */
  real_T s509_Sum1;                    /* '<S509>/Sum1' */
  real_T s570_Merge;                   /* '<S570>/Merge' */
  real_T s825_Sum;                     /* '<S825>/Sum' */
  real_T s826_Sum;                     /* '<S826>/Sum' */
  real_T s828_CrankCounter;            /* '<S828>/CrankCounter' */
  real_T s674_motohawk_interpolation_1d;/* '<S674>/motohawk_interpolation_1d' */
  real_T s657_Merge;                   /* '<S657>/Merge' */
  real_T s673_Merge;                   /* '<S673>/Merge' */
  real_T s692_motohawk_interpolation_1d;/* '<S692>/motohawk_interpolation_1d' */
  real_T s659_Merge;                   /* '<S659>/Merge' */
  real_T s691_Merge;                   /* '<S691>/Merge' */
  real_T s683_motohawk_interpolation_1d;/* '<S683>/motohawk_interpolation_1d' */
  real_T s682_Merge;                   /* '<S682>/Merge' */
  real_T s665_motohawk_interpolation_1d;/* '<S665>/motohawk_interpolation_1d' */
  real_T s664_Merge;                   /* '<S664>/Merge' */
  real_T s326_Defaultifnoflow[8];      /* '<S326>/Default (if no flow)' */
  real_T s343_Sum1[8];                 /* '<S343>/Sum1' */
  real_T s342_chargemass[8];           /* '<S342>/charge mass' */
  real_T s406_Merge;                   /* '<S406>/Merge' */
  real_T s423_Sum2;                    /* '<S423>/Sum2' */
  real_T s372_Timer;                   /* '<S367>/Baro Stall State Delay' */
  real_T s320_UnitDelay;               /* '<S320>/Unit Delay' */
  real_T s310_Product1;                /* '<S310>/Product1' */
  real_T s310_Switch;                  /* '<S310>/Switch' */
  real_T s321_etc;                     /* '<S310>/Ice Break' */
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
  real_T s304_Add;                     /* '<S304>/Add' */
  real_T s301_Product;                 /* '<S301>/Product' */
  real_T s300_Product;                 /* '<S300>/Product' */
  real_T s155_ApplyOffsetstoBaseSparkAdvance1;/* '<S155>/Apply Offsets to Base Spark Advance1' */
  real_T s307_MinMax1;                 /* '<S307>/MinMax1' */
  real_T s302_Switch;                  /* '<S302>/Switch' */
  real_T s155_motohawk_interpolation_2d1;/* '<S155>/motohawk_interpolation_2d1' */
  real_T s152_Sum;                     /* '<S152>/Sum' */
  real_T s231_DontallowsetpointtoevergoabovetheTargetRPM;/* '<S231>/Don't allow setpoint to ever go above the TargetRPM' */
  real_T s240_Sum2;                    /* '<S240>/Sum2' */
  real_T s240_Product2;                /* '<S240>/Product2' */
  real_T s241_Product;                 /* '<S241>/Product' */
  real_T s242_Switch1;                 /* '<S242>/Switch1' */
  real_T s233_Switch;                  /* '<S233>/Switch' */
  real_T s229_Sum;                     /* '<S229>/Sum' */
  real_T s262_MinMax1;                 /* '<S262>/MinMax1' */
  real_T s252_DontallowsetpointtoeverdropbelowtheTargetRPM;/* '<S252>/Don't allow setpoint to ever drop below the TargetRPM' */
  real_T s278_Sum2;                    /* '<S278>/Sum2' */
  real_T s278_Product2;                /* '<S278>/Product2' */
  real_T s279_Product;                 /* '<S279>/Product' */
  real_T s280_Switch1;                 /* '<S280>/Switch1' */
  real_T s153_MinGovAirPID;            /* '<S153>/Product1' */
  real_T s273_Sum1;                    /* '<S273>/Sum1' */
  real_T s273_Product;                 /* '<S273>/Product' */
  real_T s274_Product;                 /* '<S274>/Product' */
  real_T s153_IdleSpk;                 /* '<S153>/Product' */
  real_T s270_Switch;                  /* '<S270>/Switch' */
  real_T s255_DontallowsetpointtoeverdropbelowtheTargetRPM;/* '<S255>/Don't allow setpoint to ever drop below the TargetRPM' */
  real_T s154_O2FuelMult;              /* '<S154>/Switch' */
  real_T s285_Switch;                  /* '<S285>/Switch' */
  real_T s291_Sum2;                    /* '<S291>/Sum2' */
  real_T s291_Product2;                /* '<S291>/Product2' */
  real_T s293_Switch1;                 /* '<S293>/Switch1' */
  real_T s292_Product;                 /* '<S292>/Product' */
  real_T s289_Switch3;                 /* '<S289>/Switch3' */
  real_T s289_Switch1;                 /* '<S289>/Switch1' */
  real_T s289_Switch4;                 /* '<S289>/Switch4' */
  real_T s210_motohawk_interpolation_1d;/* '<S210>/motohawk_interpolation_1d' */
  real_T s208_FuelFlowMassAirflowEquivalenceRatioAirtofuelRatio;/* '<S208>/Fuel Flow = Mass Airflow * Equivalence Ratio // Air-to-fuel Ratio' */
  real_T s205_PerCylinderMassFlowRate; /* '<S205>/Per-Cylinder Mass Flow Rate' */
  real_T s205_ApplyMultipliersforO2KnockControlandEnrichment1;/* '<S205>/Apply Multipliers for O2, Knock Control, and Enrichment1' */
  real_T s228_MinMax1;                 /* '<S228>/MinMax1' */
  real_T s221_chargemass;              /* '<S221>/charge mass' */
  real_T s220_Sum1;                    /* '<S220>/Sum1' */
  real_T s211_Sum1;                    /* '<S211>/Sum1' */
  real_T s219_Sum1;                    /* '<S219>/Sum1' */
  real_T s211_Sum;                     /* '<S211>/Sum' */
  real_T s211_Product1;                /* '<S211>/Product1' */
  real_T s218_motohawk_interpolation_1d;/* '<S218>/motohawk_interpolation_1d' */
  real_T s215_motohawk_interpolation_1d;/* '<S215>/motohawk_interpolation_1d' */
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
  real_T s930_Switch;                  /* '<S930>/Switch' */
  uint32_T s446_motohawk_frequency_in; /* '<S446>/motohawk_frequency_in' */
  uint32_T s582_ReadCANMessage1_o1;    /* '<S582>/Read CAN Message1' */
  uint32_T s582_ReadCANMessage_o1;     /* '<S582>/Read CAN Message' */
  uint32_T s500_Sum;                   /* '<S500>/Sum' */
  uint32_T s9_ReadCANRaw_o2;           /* '<S9>/Read CAN Raw' */
  uint32_T s9_ReadCANRaw_o4;           /* '<S9>/Read CAN Raw' */
  uint32_T s10_motohawk_calibration;   /* '<S10>/motohawk_calibration' */
  int16_T s802_motohawk_pwm1;          /* '<S802>/motohawk_pwm1' */
  uint16_T s448_motohawk_ain2;         /* '<S448>/motohawk_ain2' */
  uint16_T s448_motohawk_ain1;         /* '<S448>/motohawk_ain1' */
  uint16_T s446_motohawk_ain4;         /* '<S446>/motohawk_ain4' */
  uint16_T s446_motohawk_ain14;        /* '<S446>/motohawk_ain14' */
  uint16_T s446_motohawk_ain_read1;    /* '<S446>/motohawk_ain_read1' */
  uint16_T s446_motohawk_ain2;         /* '<S446>/motohawk_ain2' */
  uint16_T s446_motohawk_ain1;         /* '<S446>/motohawk_ain1' */
  uint16_T s446_motohawk_ain3;         /* '<S446>/motohawk_ain3' */
  uint16_T s798_SparkSequence_o3[8];   /* '<S798>/Spark Sequence' */
  uint16_T s798_SparkSequence_o4[8];   /* '<S798>/Spark Sequence' */
  uint16_T s583_motohawk_ain;          /* '<S583>/motohawk_ain' */
  uint16_T s583_motohawk_ain1;         /* '<S583>/motohawk_ain1' */
  uint16_T s583_motohawk_ain2;         /* '<S583>/motohawk_ain2' */
  uint16_T s583_motohawk_ain3;         /* '<S583>/motohawk_ain3' */
  uint16_T s10_motohawk_calibration3;  /* '<S10>/motohawk_calibration3' */
  index_T s401_motohawk_prelookup1;    /* '<S401>/motohawk_prelookup1' */
  index_T s401_Indexes;                /* '<S401>/motohawk_prelookup5' */
  index_T s397_motohawk_prelookup;     /* '<S397>/motohawk_prelookup' */
  index_T s398_motohawk_prelookup;     /* '<S398>/motohawk_prelookup' */
  index_T s402_motohawk_prelookup;     /* '<S402>/motohawk_prelookup' */
  index_T s399_motohawk_prelookup1;    /* '<S399>/motohawk_prelookup1' */
  index_T s399_Indexes;                /* '<S399>/motohawk_prelookup5' */
  index_T s396_motohawk_prelookup;     /* '<S396>/motohawk_prelookup' */
  index_T s371_RPMAccel17Idx;          /* '<S371>/motohawk_prelookup' */
  int8_T s22_Merge1[32];               /* '<S22>/Merge1' */
  int8_T s828_DataTypeConversion;      /* '<S828>/Data Type Conversion' */
  int8_T s230_DataTypeConversion;      /* '<S230>/Data Type Conversion' */
  int8_T s230_DataTypeConversion1;     /* '<S230>/Data Type Conversion1' */
  int8_T s102_MultiportSwitch[8];      /* '<S102>/Multiport Switch' */
  int8_T s121_CutArray[8];             /* '<S121>/CutArray' */
  int8_T s27_DC_Override;              /* '<S20>/ETC Test  Manager' */
  int8_T s27_SetpointMode;             /* '<S20>/ETC Test  Manager' */
  uint8_T s411_UnitDelay;              /* '<S411>/Unit Delay' */
  uint8_T s367_motohawk_data_read1;    /* '<S367>/motohawk_data_read1' */
  uint8_T s804_InjectorSequence_o1[8]; /* '<S804>/Injector Sequence' */
  uint8_T s22_DataTypeConversion5;     /* '<S22>/Data Type Conversion5' */
  uint8_T s445_motohawk_encoder_fault; /* '<S445>/motohawk_encoder_fault' */
  uint8_T s445_motohawk_encoder_state; /* '<S445>/motohawk_encoder_state' */
  uint8_T s830_Switch1;                /* '<S830>/Switch1' */
  uint8_T s432_Switch;                 /* '<S432>/Switch' */
  uint8_T s431_State;                  /* '<S411>/Engine State Machine' */
  uint8_T s264_IdleState;              /* '<S249>/IdleStateMachine' */
  uint8_T s102_UnitDelay1;             /* '<S102>/Unit Delay1' */
  uint8_T s121_Switch;                 /* '<S121>/Switch' */
  uint8_T s9_ReadCANRaw_o5;            /* '<S9>/Read CAN Raw' */
  uint8_T s9_ReadCANRaw_o6[8];         /* '<S9>/Read CAN Raw' */
  boolean_T s411_Stall;                /* '<S411>/Relational Operator1' */
  boolean_T s411_Crank;                /* '<S411>/Relational Operator4' */
  boolean_T s411_Run;                  /* '<S411>/Logical Operator1' */
  boolean_T s456_Merge;                /* '<S456>/Merge' */
  boolean_T s387_RelationalOperator4;  /* '<S387>/Relational Operator4' */
  boolean_T s388_RelationalOperator4;  /* '<S388>/Relational Operator4' */
  boolean_T s386_LogicalOperator;      /* '<S386>/Logical Operator' */
  boolean_T s444_motohawk_din2;        /* '<S444>/motohawk_din2' */
  boolean_T s459_Merge;                /* '<S459>/Merge' */
  boolean_T s484_Merge;                /* '<S484>/Merge' */
  boolean_T s489_Merge;                /* '<S489>/Merge' */
  boolean_T s135_AC;                   /* '<S135>/Merge14' */
  boolean_T s806_LogicalOperator;      /* '<S806>/Logical Operator' */
  boolean_T s135_FUELP;                /* '<S135>/Merge7' */
  boolean_T s22_LogicalOperator2[8];   /* '<S22>/Logical Operator2' */
  boolean_T s851_LogicalOperator;      /* '<S851>/Logical Operator' */
  boolean_T s852_LogicalOperator;      /* '<S852>/Logical Operator' */
  boolean_T s444_motohawk_din;         /* '<S444>/motohawk_din' */
  boolean_T s462_Merge;                /* '<S462>/Merge' */
  boolean_T s869_LogicalOperator;      /* '<S869>/Logical Operator' */
  boolean_T s802_RelationalOperator4;  /* '<S802>/Relational Operator4' */
  boolean_T s893_Merge[8];             /* '<S893>/Merge' */
  boolean_T s375_LogicalOperator;      /* '<S375>/Logical Operator' */
  boolean_T s798_LogicalOperator1[8];  /* '<S798>/Logical Operator1' */
  boolean_T s828_RelationalOperator1;  /* '<S828>/Relational Operator1' */
  boolean_T s406_RelationalOperator3;  /* '<S406>/Relational Operator3' */
  boolean_T s372_Enable;               /* '<S367>/Baro Stall State Delay' */
  boolean_T s167_Switch1;              /* '<S167>/Switch1' */
  boolean_T s166_Switch1;              /* '<S166>/Switch1' */
  boolean_T s144_LogicalOperator2;     /* '<S144>/Logical Operator2' */
  boolean_T s144_LogicalOperator4;     /* '<S144>/Logical Operator4' */
  boolean_T s163_Switch1;              /* '<S163>/Switch1' */
  boolean_T s144_LogicalOperator1;     /* '<S144>/Logical Operator1' */
  boolean_T s144_LogicalOperator;      /* '<S144>/Logical Operator' */
  boolean_T s190_LogicalOperator;      /* '<S190>/Logical Operator' */
  boolean_T s192_Switch1;              /* '<S192>/Switch1' */
  boolean_T s230_MultiportSwitch;      /* '<S230>/Multiport Switch' */
  boolean_T s263_RelationalOperator;   /* '<S263>/Relational Operator' */
  boolean_T s249_RelationalOperator;   /* '<S249>/Relational Operator' */
  boolean_T s249_RelationalOperator3;  /* '<S249>/Relational Operator3' */
  boolean_T s249_RelationalOperator1;  /* '<S249>/Relational Operator1' */
  boolean_T s249_LogicalOperator;      /* '<S249>/Logical Operator' */
  boolean_T s249_RelationalOperator5;  /* '<S249>/Relational Operator5' */
  boolean_T s265_RelOp;                /* '<S265>/RelOp' */
  boolean_T s153_HitCrossing1;         /* '<S153>/Hit  Crossing1' */
  boolean_T s153_LogicalOperator;      /* '<S153>/Logical Operator' */
  boolean_T s250_RelationalOperator1;  /* '<S250>/Relational Operator1' */
  boolean_T s246_LogicalOperator1;     /* '<S246>/Logical Operator1' */
  boolean_T s283_LogicalOperator;      /* '<S283>/Logical Operator' */
  boolean_T s283_LogicalOperator3;     /* '<S283>/Logical Operator3' */
  boolean_T s283_RelationalOperator5;  /* '<S283>/Relational Operator5' */
  boolean_T s283_LogicalOperator2;     /* '<S283>/Logical Operator2' */
  boolean_T s207_LogicalOperator2;     /* '<S207>/Logical Operator2' */
  boolean_T s226_LogicalOperator;      /* '<S226>/Logical Operator' */
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
  boolean_T s914_RelationalOperator;   /* '<S914>/Relational Operator' */
  boolean_T s914_motohawk_data_read;   /* '<S914>/motohawk_data_read' */
  boolean_T s918_MPRDState;            /* '<S914>/ECUP Latch' */
  boolean_T s9_ReadCANRaw_o1;          /* '<S9>/Read CAN Raw' */
  boolean_T s9_ReadCANRaw_o3;          /* '<S9>/Read CAN Raw' */
  rtB_FunctionCallSubsystem_BaseEngineController_LS s699_FunctionCallSubsystem;/* '<S699>/Function-Call Subsystem' */
  rtB_FunctionCallSubsystem_BaseEngineController_LS s697_FunctionCallSubsystem;/* '<S697>/Function-Call Subsystem' */
  rtB_CollectAverage_BaseEngineController_LS s408_CollectAverage;/* '<S408>/Collect Average' */
  rtB_CollectAverage_BaseEngineController_LS s407_CollectAverage;/* '<S407>/Collect Average' */
  rtB_CollectAverage_BaseEngineController_LS s373_CollectAverage;/* '<S373>/Collect Average' */
} BlockIO_BaseEngineController_LS;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T s698_UnitDelay_DSTATE;        /* '<S698>/Unit Delay' */
  real_T s723_UnitDelay_DSTATE;        /* '<S723>/Unit Delay' */
  real_T s755_UnitDelay_DSTATE;        /* '<S755>/Unit Delay' */
  real_T s748_UnitDelay1_DSTATE;       /* '<S748>/Unit Delay1' */
  real_T s696_UnitDelay_DSTATE;        /* '<S696>/Unit Delay' */
  real_T s711_UnitDelay_DSTATE;        /* '<S711>/Unit Delay' */
  real_T s738_UnitDelay_DSTATE;        /* '<S738>/Unit Delay' */
  real_T s731_UnitDelay1_DSTATE;       /* '<S731>/Unit Delay1' */
  real_T s453_UnitDelay_DSTATE;        /* '<S453>/Unit Delay' */
  real_T s480_UnitDelay_DSTATE;        /* '<S480>/Unit Delay' */
  real_T s502_UnitDelay1_DSTATE;       /* '<S502>/Unit Delay1' */
  real_T s516_UnitDelay_DSTATE;        /* '<S516>/Unit Delay' */
  real_T s501_UnitDelay_DSTATE;        /* '<S501>/Unit Delay' */
  real_T s772_UnitDelay_DSTATE;        /* '<S772>/Unit Delay' */
  real_T s765_UnitDelay1_DSTATE;       /* '<S765>/Unit Delay1' */
  real_T s789_UnitDelay_DSTATE;        /* '<S789>/Unit Delay' */
  real_T s782_UnitDelay1_DSTATE;       /* '<S782>/Unit Delay1' */
  real_T s528_UnitDelay_DSTATE;        /* '<S528>/Unit Delay' */
  real_T s503_UnitDelay1_DSTATE;       /* '<S503>/Unit Delay1' */
  real_T s527_UnitDelay_DSTATE;        /* '<S527>/Unit Delay' */
  real_T s525_UnitDelay_DSTATE;        /* '<S525>/Unit Delay' */
  real_T s525_UnitDelay1_DSTATE;       /* '<S525>/Unit Delay1' */
  real_T s525_UnitDelay2_DSTATE;       /* '<S525>/Unit Delay2' */
  real_T s414_UnitDelay_DSTATE;        /* '<S414>/Unit Delay' */
  real_T s585_UnitDelay1_DSTATE;       /* '<S585>/Unit Delay1' */
  real_T s617_UnitDelay_DSTATE;        /* '<S617>/Unit Delay' */
  real_T s584_UnitDelay1_DSTATE;       /* '<S584>/Unit Delay1' */
  real_T s609_UnitDelay_DSTATE;        /* '<S609>/Unit Delay' */
  real_T s510_UnitDelay1_DSTATE;       /* '<S510>/Unit Delay1' */
  real_T s579_UnitDelay_DSTATE;        /* '<S579>/Unit Delay' */
  real_T s505_UnitDelay1_DSTATE;       /* '<S505>/Unit Delay1' */
  real_T s545_UnitDelay_DSTATE;        /* '<S545>/Unit Delay' */
  real_T s506_UnitDelay1_DSTATE;       /* '<S506>/Unit Delay1' */
  real_T s376_UnitDelay_DSTATE;        /* '<S376>/Unit Delay' */
  real_T s452_UnitDelay_DSTATE;        /* '<S452>/Unit Delay' */
  real_T s471_UnitDelay_DSTATE;        /* '<S471>/Unit Delay' */
  real_T s387_UnitDelay2_DSTATE;       /* '<S387>/Unit Delay2' */
  real_T s390_UnitDelay_DSTATE;        /* '<S390>/Unit Delay' */
  real_T s388_UnitDelay2_DSTATE;       /* '<S388>/Unit Delay2' */
  real_T s393_UnitDelay_DSTATE;        /* '<S393>/Unit Delay' */
  real_T s428_UnitDelay_DSTATE;        /* '<S428>/Unit Delay' */
  real_T s430_UnitDelay_DSTATE;        /* '<S430>/Unit Delay' */
  real_T s553_UnitDelay_DSTATE;        /* '<S553>/Unit Delay' */
  real_T s504_UnitDelay1_DSTATE;       /* '<S504>/Unit Delay1' */
  real_T s537_UnitDelay_DSTATE;        /* '<S537>/Unit Delay' */
  real_T s508_UnitDelay1_DSTATE;       /* '<S508>/Unit Delay1' */
  real_T s563_UnitDelay_DSTATE;        /* '<S563>/Unit Delay' */
  real_T s74_UnitDelay_DSTATE;         /* '<S74>/Unit Delay' */
  real_T s73_UnitDelay_DSTATE;         /* '<S73>/Unit Delay' */
  real_T s71_UnitDelay_DSTATE;         /* '<S71>/Unit Delay' */
  real_T s70_UnitDelay_DSTATE;         /* '<S70>/Unit Delay' */
  real_T s69_UnitDelay_DSTATE;         /* '<S69>/Unit Delay' */
  real_T s68_UnitDelay_DSTATE;         /* '<S68>/Unit Delay' */
  real_T s67_UnitDelay_DSTATE;         /* '<S67>/Unit Delay' */
  real_T s66_UnitDelay_DSTATE;         /* '<S66>/Unit Delay' */
  real_T s72_UnitDelay_DSTATE[8];      /* '<S72>/Unit Delay' */
  real_T s414_UnitDelay1_DSTATE;       /* '<S414>/Unit Delay1' */
  real_T s509_UnitDelay1_DSTATE;       /* '<S509>/Unit Delay1' */
  real_T s571_UnitDelay_DSTATE;        /* '<S571>/Unit Delay' */
  real_T s387_UnitDelay1_DSTATE;       /* '<S387>/Unit Delay1' */
  real_T s387_UnitDelay3_DSTATE;       /* '<S387>/Unit Delay3' */
  real_T s387_UnitDelay4_DSTATE;       /* '<S387>/Unit Delay4' */
  real_T s388_UnitDelay1_DSTATE;       /* '<S388>/Unit Delay1' */
  real_T s388_UnitDelay3_DSTATE;       /* '<S388>/Unit Delay3' */
  real_T s388_UnitDelay4_DSTATE;       /* '<S388>/Unit Delay4' */
  real_T s735_UnitDelay1_DSTATE;       /* '<S735>/Unit Delay1' */
  real_T s735_UnitDelay_DSTATE;        /* '<S735>/Unit Delay' */
  real_T s735_UnitDelay3_DSTATE;       /* '<S735>/Unit Delay3' */
  real_T s735_UnitDelay4_DSTATE;       /* '<S735>/Unit Delay4' */
  real_T s752_UnitDelay1_DSTATE;       /* '<S752>/Unit Delay1' */
  real_T s752_UnitDelay_DSTATE;        /* '<S752>/Unit Delay' */
  real_T s752_UnitDelay3_DSTATE;       /* '<S752>/Unit Delay3' */
  real_T s752_UnitDelay4_DSTATE;       /* '<S752>/Unit Delay4' */
  real_T s769_UnitDelay1_DSTATE;       /* '<S769>/Unit Delay1' */
  real_T s769_UnitDelay_DSTATE;        /* '<S769>/Unit Delay' */
  real_T s769_UnitDelay3_DSTATE;       /* '<S769>/Unit Delay3' */
  real_T s769_UnitDelay4_DSTATE;       /* '<S769>/Unit Delay4' */
  real_T s786_UnitDelay1_DSTATE;       /* '<S786>/Unit Delay1' */
  real_T s786_UnitDelay_DSTATE;        /* '<S786>/Unit Delay' */
  real_T s786_UnitDelay3_DSTATE;       /* '<S786>/Unit Delay3' */
  real_T s786_UnitDelay4_DSTATE;       /* '<S786>/Unit Delay4' */
  real_T s825_UnitDelay_DSTATE;        /* '<S825>/Unit Delay' */
  real_T s826_UnitDelay_DSTATE;        /* '<S826>/Unit Delay' */
  real_T s828_CrankCounter_DSTATE;     /* '<S828>/CrankCounter' */
  real_T s657_UnitDelay_DSTATE;        /* '<S657>/Unit Delay' */
  real_T s675_UnitDelay_DSTATE;        /* '<S675>/Unit Delay' */
  real_T s659_UnitDelay_DSTATE;        /* '<S659>/Unit Delay' */
  real_T s693_UnitDelay_DSTATE;        /* '<S693>/Unit Delay' */
  real_T s658_UnitDelay_DSTATE;        /* '<S658>/Unit Delay' */
  real_T s684_UnitDelay_DSTATE;        /* '<S684>/Unit Delay' */
  real_T s656_UnitDelay_DSTATE;        /* '<S656>/Unit Delay' */
  real_T s666_UnitDelay_DSTATE;        /* '<S666>/Unit Delay' */
  real_T s343_UnitDelay_DSTATE[8];     /* '<S343>/Unit Delay' */
  real_T s406_UnitDelay2_DSTATE;       /* '<S406>/Unit Delay2' */
  real_T s420_UnitDelay_DSTATE;        /* '<S420>/Unit Delay' */
  real_T s423_UnitDelay_DSTATE;        /* '<S423>/Unit Delay' */
  real_T s406_UnitDelay1_DSTATE;       /* '<S406>/Unit Delay1' */
  real_T s406_UnitDelay3_DSTATE;       /* '<S406>/Unit Delay3' */
  real_T s406_UnitDelay4_DSTATE;       /* '<S406>/Unit Delay4' */
  real_T s320_UnitDelay_DSTATE;        /* '<S320>/Unit Delay' */
  real_T s147_UnitDelay_DSTATE;        /* '<S147>/Unit Delay' */
  real_T s186_UnitDelay_DSTATE;        /* '<S186>/Unit Delay' */
  real_T s176_UnitDelay_DSTATE;        /* '<S176>/Unit Delay' */
  real_T s185_UnitDelay_DSTATE;        /* '<S185>/Unit Delay' */
  real_T s302_UnitDelay_DSTATE;        /* '<S302>/Unit Delay' */
  real_T s231_UnitDelay_DSTATE;        /* '<S231>/Unit Delay' */
  real_T s241_UnitDelay_DSTATE;        /* '<S241>/Unit Delay' */
  real_T s242_UnitDelay_DSTATE;        /* '<S242>/Unit Delay' */
  real_T s267_UnitDelay_DSTATE;        /* '<S267>/Unit Delay' */
  real_T s269_UnitDelay_DSTATE;        /* '<S269>/Unit Delay' */
  real_T s153_UnitDelay3_DSTATE;       /* '<S153>/Unit Delay3' */
  real_T s153_UnitDelay1_DSTATE;       /* '<S153>/Unit Delay1' */
  real_T s248_state_DSTATE;            /* '<S248>/state' */
  real_T s153_UnitDelay2_DSTATE;       /* '<S153>/Unit Delay2' */
  real_T s252_UnitDelay_DSTATE;        /* '<S252>/Unit Delay' */
  real_T s279_UnitDelay_DSTATE;        /* '<S279>/Unit Delay' */
  real_T s280_UnitDelay_DSTATE;        /* '<S280>/Unit Delay' */
  real_T s274_UnitDelay_DSTATE;        /* '<S274>/Unit Delay' */
  real_T s255_UnitDelay_DSTATE;        /* '<S255>/Unit Delay' */
  real_T s293_UnitDelay_DSTATE;        /* '<S293>/Unit Delay' */
  real_T s292_UnitDelay_DSTATE;        /* '<S292>/Unit Delay' */
  real_T s289_UnitDelay1_DSTATE;       /* '<S289>/Unit Delay1' */
  real_T s289_UnitDelay_DSTATE;        /* '<S289>/Unit Delay' */
  real_T s289_UnitDelay2_DSTATE;       /* '<S289>/Unit Delay2' */
  real_T s220_UnitDelay_DSTATE;        /* '<S220>/Unit Delay' */
  real_T s219_UnitDelay_DSTATE;        /* '<S219>/Unit Delay' */
  real_T s130_UnitDelay_DSTATE;        /* '<S130>/Unit Delay' */
  real_T s102_UnitDelay2_DSTATE;       /* '<S102>/Unit Delay2' */
  real_T s20_UnitDelay_DSTATE;         /* '<S20>/Unit Delay' */
  real_T s55_UnitDelay_DSTATE;         /* '<S55>/Unit Delay' */
  real_T s46_UnitDelay_DSTATE;         /* '<S46>/Unit Delay' */
  real_T s42_UnitDelay_DSTATE;         /* '<S42>/Unit Delay' */
  real_T s44_UnitDelay_DSTATE;         /* '<S44>/Unit Delay' */
  real_T s47_UnitDelay_DSTATE;         /* '<S47>/Unit Delay' */
  real_T s48_UnitDelay_DSTATE;         /* '<S48>/Unit Delay' */
  real_T s920_UnitDelay_DSTATE;        /* '<S920>/Unit Delay' */
  real_T s920_UnitDelay1_DSTATE;       /* '<S920>/Unit Delay1' */
  real_T s372_TOld;                    /* '<S367>/Baro Stall State Delay' */
  real_T s191_count;                   /* '<S190>/Chart' */
  real_T s191_EquivStart;              /* '<S190>/Chart' */
  real_T s27_TimerOld;                 /* '<S20>/ETC Test  Manager' */
  uint32_T s442_UnitDelay_DSTATE;      /* '<S442>/Unit Delay' */
  uint32_T s500_UnitDelay_DSTATE;      /* '<S500>/Unit Delay' */
  uint32_T s716_motohawk_delta_time_DWORK1;/* '<S716>/motohawk_delta_time' */
  uint32_T s747_motohawk_delta_time_DWORK1;/* '<S747>/motohawk_delta_time' */
  uint32_T s704_motohawk_delta_time_DWORK1;/* '<S704>/motohawk_delta_time' */
  uint32_T s730_motohawk_delta_time_DWORK1;/* '<S730>/motohawk_delta_time' */
  uint32_T s434_motohawk_delta_time_DWORK1;/* '<S434>/motohawk_delta_time' */
  uint32_T s474_motohawk_delta_time_DWORK1;/* '<S474>/motohawk_delta_time' */
  uint32_T s511_motohawk_delta_time_DWORK1;/* '<S511>/motohawk_delta_time' */
  uint32_T s494_motohawk_delta_time_DWORK1;/* '<S494>/motohawk_delta_time' */
  uint32_T s764_motohawk_delta_time_DWORK1;/* '<S764>/motohawk_delta_time' */
  uint32_T s781_motohawk_delta_time_DWORK1;/* '<S781>/motohawk_delta_time' */
  uint32_T s528_motohawk_delta_time_DWORK1;/* '<S528>/motohawk_delta_time' */
  uint32_T s524_motohawk_delta_time_DWORK1;/* '<S524>/motohawk_delta_time' */
  uint32_T s612_motohawk_delta_time_DWORK1;/* '<S612>/motohawk_delta_time' */
  uint32_T s604_motohawk_delta_time_DWORK1;/* '<S604>/motohawk_delta_time' */
  uint32_T s436_motohawk_delta_time_DWORK1;/* '<S436>/motohawk_delta_time' */
  uint32_T s574_motohawk_delta_time_DWORK1;/* '<S574>/motohawk_delta_time' */
  uint32_T s540_motohawk_delta_time_DWORK1;/* '<S540>/motohawk_delta_time' */
  uint32_T s367_motohawk_delta_time_DWORK1;/* '<S367>/motohawk_delta_time' */
  uint32_T s379_motohawk_delta_time_DWORK1;/* '<S379>/motohawk_delta_time' */
  uint32_T s465_motohawk_delta_time_DWORK1;/* '<S465>/motohawk_delta_time' */
  uint32_T s428_motohawk_delta_time_DWORK1;/* '<S428>/motohawk_delta_time' */
  uint32_T s485_motohawk_delta_time_DWORK1;/* '<S485>/motohawk_delta_time' */
  uint32_T s490_motohawk_delta_time_DWORK1;/* '<S490>/motohawk_delta_time' */
  uint32_T s548_motohawk_delta_time_DWORK1;/* '<S548>/motohawk_delta_time' */
  uint32_T s532_motohawk_delta_time_DWORK1;/* '<S532>/motohawk_delta_time' */
  uint32_T s558_motohawk_delta_time_DWORK1;/* '<S558>/motohawk_delta_time' */
  uint32_T s873_motohawk_delta_time_DWORK1;/* '<S873>/motohawk_delta_time' */
  uint32_T s438_motohawk_delta_time_DWORK1;/* '<S438>/motohawk_delta_time' */
  uint32_T s566_motohawk_delta_time_DWORK1;/* '<S566>/motohawk_delta_time' */
  uint32_T s669_motohawk_delta_time_DWORK1;/* '<S669>/motohawk_delta_time' */
  uint32_T s687_motohawk_delta_time_DWORK1;/* '<S687>/motohawk_delta_time' */
  uint32_T s678_motohawk_delta_time_DWORK1;/* '<S678>/motohawk_delta_time' */
  uint32_T s660_motohawk_delta_time_DWORK1;/* '<S660>/motohawk_delta_time' */
  uint32_T s334_motohawk_delta_time_DWORK1;/* '<S334>/motohawk_delta_time' */
  uint32_T s333_motohawk_delta_time_DWORK1;/* '<S333>/motohawk_delta_time' */
  uint32_T s337_motohawk_delta_time_DWORK1;/* '<S337>/motohawk_delta_time' */
  uint32_T s336_motohawk_delta_time_DWORK1;/* '<S336>/motohawk_delta_time' */
  uint32_T s338_motohawk_delta_time_DWORK1;/* '<S338>/motohawk_delta_time' */
  uint32_T s344_motohawk_delta_time_DWORK1;/* '<S344>/motohawk_delta_time' */
  uint32_T s348_motohawk_delta_time_DWORK1;/* '<S348>/motohawk_delta_time' */
  uint32_T s349_motohawk_delta_time_DWORK1;/* '<S349>/motohawk_delta_time' */
  uint32_T s350_motohawk_delta_time_DWORK1;/* '<S350>/motohawk_delta_time' */
  uint32_T s366_motohawk_delta_time_DWORK1;/* '<S366>/motohawk_delta_time' */
  uint32_T s365_motohawk_delta_time_DWORK1;/* '<S365>/motohawk_delta_time' */
  uint32_T s341_motohawk_delta_time_DWORK1;/* '<S341>/motohawk_delta_time' */
  uint32_T s346_motohawk_delta_time_DWORK1;/* '<S346>/motohawk_delta_time' */
  uint32_T s423_motohawk_delta_time_DWORK1;/* '<S423>/motohawk_delta_time' */
  uint32_T s406_motohawk_delta_time_DWORK1;/* '<S406>/motohawk_delta_time' */
  uint32_T s322_motohawk_delta_time_DWORK1;/* '<S322>/motohawk_delta_time' */
  uint32_T s321_temporalCounter_i1;    /* '<S310>/Ice Break' */
  uint32_T s321_presentTicks;          /* '<S310>/Ice Break' */
  uint32_T s321_elapsedTicks;          /* '<S310>/Ice Break' */
  uint32_T s321_previousTicks;         /* '<S310>/Ice Break' */
  uint32_T s193_motohawk_delta_time_DWORK1;/* '<S193>/motohawk_delta_time' */
  uint32_T s190_motohawk_delta_time_DWORK1;/* '<S190>/motohawk_delta_time' */
  uint32_T s176_motohawk_delta_time_DWORK1;/* '<S176>/motohawk_delta_time' */
  uint32_T s186_motohawk_delta_time_DWORK1;/* '<S186>/motohawk_delta_time' */
  uint32_T s231_motohawk_delta_time_DWORK1;/* '<S231>/motohawk_delta_time' */
  uint32_T s242_motohawk_delta_time_DWORK1;/* '<S242>/motohawk_delta_time' */
  uint32_T s248_motohawk_delta_time_DWORK1;/* '<S248>/motohawk_delta_time' */
  uint32_T s252_motohawk_delta_time_DWORK1;/* '<S252>/motohawk_delta_time' */
  uint32_T s280_motohawk_delta_time_DWORK1;/* '<S280>/motohawk_delta_time' */
  uint32_T s255_motohawk_delta_time_DWORK1;/* '<S255>/motohawk_delta_time' */
  uint32_T s293_motohawk_delta_time_DWORK1;/* '<S293>/motohawk_delta_time' */
  uint32_T s297_motohawk_delta_time_DWORK1;/* '<S297>/motohawk_delta_time' */
  uint32_T s299_motohawk_delta_time_DWORK1;/* '<S299>/motohawk_delta_time' */
  uint32_T s298_motohawk_delta_time_DWORK1;/* '<S298>/motohawk_delta_time' */
  uint32_T s217_motohawk_delta_time_DWORK1;/* '<S217>/motohawk_delta_time' */
  uint32_T s216_motohawk_delta_time_DWORK1;/* '<S216>/motohawk_delta_time' */
  uint32_T s63_motohawk_delta_time_DWORK1;/* '<S63>/motohawk_delta_time' */
  uint32_T s55_motohawk_delta_time_DWORK1;/* '<S55>/motohawk_delta_time' */
  uint32_T s43_motohawk_delta_time_DWORK1;/* '<S43>/motohawk_delta_time' */
  uint32_T s48_motohawk_delta_time_DWORK1;/* '<S48>/motohawk_delta_time' */
  uint32_T s930_motohawk_delta_time_DWORK1;/* '<S930>/motohawk_delta_time' */
  int_T s153_HitCrossing1_MODE;        /* '<S153>/Hit  Crossing1' */
  uint16_T s804_InjectorSequence_DWORK2;/* '<S804>/Injector Sequence' */
  int8_T s408_UnitDelay_DSTATE;        /* '<S408>/Unit Delay' */
  int8_T s407_UnitDelay_DSTATE;        /* '<S407>/Unit Delay' */
  int8_T s373_UnitDelay_DSTATE;        /* '<S373>/Unit Delay' */
  uint8_T s411_UnitDelay_DSTATE;       /* '<S411>/Unit Delay' */
  uint8_T s432_CrankCounter_DSTATE;    /* '<S432>/CrankCounter' */
  uint8_T s102_UnitDelay1_DSTATE;      /* '<S102>/Unit Delay1' */
  boolean_T s356_UnitDelay_DSTATE;     /* '<S356>/Unit Delay' */
  boolean_T s357_UnitDelay_DSTATE;     /* '<S357>/Unit Delay' */
  boolean_T s362_UnitDelay_DSTATE;     /* '<S362>/Unit Delay' */
  boolean_T s363_UnitDelay_DSTATE;     /* '<S363>/Unit Delay' */
  boolean_T s358_UnitDelay_DSTATE;     /* '<S358>/Unit Delay' */
  boolean_T s364_UnitDelay_DSTATE;     /* '<S364>/Unit Delay' */
  boolean_T s317_UnitDelay_DSTATE;     /* '<S317>/Unit Delay' */
  boolean_T s318_UnitDelay_DSTATE;     /* '<S318>/Unit Delay' */
  boolean_T s319_UnitDelay_DSTATE;     /* '<S319>/Unit Delay' */
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
  boolean_T s305_InitialConditionisTrue_DSTATE;/* '<S305>/Initial Condition is True' */
  boolean_T s152_UnitDelay_DSTATE;     /* '<S152>/Unit Delay' */
  boolean_T s245_UnitDelay_DSTATE;     /* '<S245>/Unit Delay' */
  boolean_T s296_UnitDelay_DSTATE;     /* '<S296>/Unit Delay' */
  boolean_T s45_UnitDelay_DSTATE;      /* '<S45>/Unit Delay' */
  boolean_T s919_UnitDelay8_DSTATE;    /* '<S919>/Unit Delay8' */
  boolean_T s919_UnitDelay6_DSTATE;    /* '<S919>/Unit Delay6' */
  boolean_T s919_UnitDelay7_DSTATE;    /* '<S919>/Unit Delay7' */
  boolean_T s915_UnitDelay_DSTATE;     /* '<S915>/Unit Delay' */
  boolean_T s921_UnitDelay2_DSTATE;    /* '<S921>/Unit Delay2' */
  boolean_T s914_UnitDelay5_DSTATE;    /* '<S914>/Unit Delay5' */
  boolean_T s921_UnitDelay_DSTATE;     /* '<S921>/Unit Delay' */
  boolean_T s921_UnitDelay1_DSTATE;    /* '<S921>/Unit Delay1' */
  boolean_T s914_UnitDelay3_DSTATE;    /* '<S914>/Unit Delay3' */
  boolean_T s914_UnitDelay4_DSTATE;    /* '<S914>/Unit Delay4' */
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
  uint8_T s447_motohawk_trigger_DWORK1;/* '<S447>/motohawk_trigger' */
  uint8_T s411_motohawk_trigger_DWORK1;/* '<S411>/motohawk_trigger' */
  uint8_T s507_motohawk_trigger5_DWORK1;/* '<S507>/motohawk_trigger5' */
  uint8_T s14_motohawk_trigger1_DWORK1;/* '<S14>/motohawk_trigger1' */
  uint8_T s14_motohawk_trigger_DWORK1; /* '<S14>/motohawk_trigger' */
  uint8_T s13_motohawk_trigger_DWORK1; /* '<S13>/motohawk_trigger' */
  uint8_T s697_motohawk_trigger_DWORK1;/* '<S697>/motohawk_trigger' */
  uint8_T s699_motohawk_trigger_DWORK1;/* '<S699>/motohawk_trigger' */
  uint8_T s828_motohawk_trigger1_DWORK1;/* '<S828>/motohawk_trigger1' */
  uint8_T s431_is_c2_BaseEngineController_LS;/* '<S411>/Engine State Machine' */
  uint8_T s372_is_c19_BaseEngineController_LS;/* '<S367>/Baro Stall State Delay' */
  uint8_T s321_is_active_c3_BaseEngineController_LS;/* '<S310>/Ice Break' */
  uint8_T s321_is_c3_BaseEngineController_LS;/* '<S310>/Ice Break' */
  uint8_T s136_motohawk_trigger1_DWORK1;/* '<S136>/motohawk_trigger1' */
  uint8_T s264_is_active_c12_BaseEngineController_LS;/* '<S249>/IdleStateMachine' */
  uint8_T s264_is_c12_BaseEngineController_LS;/* '<S249>/IdleStateMachine' */
  uint8_T s191_is_active_c1_BaseEngineController_LS;/* '<S190>/Chart' */
  uint8_T s191_is_c1_BaseEngineController_LS;/* '<S190>/Chart' */
  uint8_T s102_motohawk_trigger_DWORK1;/* '<S102>/motohawk_trigger' */
  uint8_T s27_is_c9_BaseEngineController_LS;/* '<S20>/ETC Test  Manager' */
  uint8_T s918_is_c8_BaseEngineController_LS;/* '<S914>/ECUP Latch' */
  boolean_T s804_InjectorSequence_DWORK1[8];/* '<S804>/Injector Sequence' */
  boolean_T s285_Multiplyby10ifnotyetenabled_FirstOutputTime;/* '<S285>/Multiply by 1.0 if not yet enabled' */
  boolean_T s934_Memory_PreviousInput; /* '<S934>/Memory' */
  boolean_T s15_Stall_MODE;            /* '<S15>/Stall' */
  boolean_T s15_Crank_MODE;            /* '<S15>/Crank' */
  boolean_T s367_CaptureSignalAtStartup_MODE;/* '<S367>/Capture Signal At Startup' */
  boolean_T s370_CaptureECTAtStartup_MODE;/* '<S370>/Capture ECT At Startup' */
  boolean_T s370_CaptureIATAtStartup_MODE;/* '<S370>/Capture IAT At Startup' */
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
  rtDW_FunctionCallSubsystem_BaseEngineController_LS s699_FunctionCallSubsystem;/* '<S699>/Function-Call Subsystem' */
  rtDW_FunctionCallSubsystem_BaseEngineController_LS s697_FunctionCallSubsystem;/* '<S697>/Function-Call Subsystem' */
  rtDW_CollectAverage_BaseEngineController_LS s408_CollectAverage;/* '<S408>/Collect Average' */
  rtDW_CollectAverage_BaseEngineController_LS s407_CollectAverage;/* '<S407>/Collect Average' */
  rtDW_CollectAverage_BaseEngineController_LS s373_CollectAverage;/* '<S373>/Collect Average' */
} D_Work_BaseEngineController_LS;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState HitCrossing1_Input_ZCE;   /* '<S153>/Hit  Crossing1' */
  ZCSigState ResetTasksCompleteToFalse_Trig_ZCE;/* '<S32>/Reset TasksComplete To False' */
  ZCSigState ResetTasksCompleteToTrue_Trig_ZCE;/* '<S20>/Reset TasksComplete To True' */
  ZCSigState ShutdownpoweronECU565563_Trig_ZCE;/* '<S921>/Shutdown power on ECU565//563' */
  ZCSigState SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE;/* '<S921>/Save NV Vars one tick before MPRD off' */
  ZCSigState ProcessorReboot_Trig_ZCE; /* '<S921>/Processor Reboot' */
  ZCSigState PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE;/* '<S921>/Post Shutdown two ticks before MPRD off' */
  ZCSigState ShutdownpoweronECU565563_Trig_ZCE_l;/* '<S919>/Shutdown power on ECU565//563' */
  ZCSigState SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE_m;/* '<S919>/Save NV Vars one tick before MPRD off' */
  ZCSigState ProcessorReboot_Trig_ZCE_h;/* '<S919>/Processor Reboot' */
  ZCSigState PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE_h;/* '<S919>/Post Shutdown two ticks before MPRD off' */
  ZCSigState Clear_Trig_ZCE;           /* '<S917>/Clear' */
  ZCSigState Clear_Trig_ZCE_k;         /* '<S916>/Clear' */
} PrevZCSigStates_BaseEngineController_LS;

/* Invariant block signals (auto storage) */
typedef struct {
  const real_T s804_Gain4;             /* '<S804>/Gain4' */
  const real_T s138_motohawk_replicate2;/* '<S138>/motohawk_replicate2' */
  const real_T s138_motohawk_replicate[8];/* '<S138>/motohawk_replicate' */
  const uint32_T s804_DataTypeConversion5;/* '<S804>/Data Type Conversion5' */
} ConstBlockIO_BaseEngineController_LS;

/* Constant parameters (auto storage) */
typedef struct {
  /* Computed Parameter: Logic_table
   * Referenced by: '<S934>/Logic'
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
   *   '<S317>/Combinatorial  Logic'
   *   '<S318>/Combinatorial  Logic'
   *   '<S319>/Combinatorial  Logic'
   *   '<S356>/Combinatorial  Logic'
   *   '<S357>/Combinatorial  Logic'
   *   '<S358>/Combinatorial  Logic'
   *   '<S362>/Combinatorial  Logic'
   *   '<S363>/Combinatorial  Logic'
   *   '<S364>/Combinatorial  Logic'
   *   '<S45>/Combinatorial  Logic'
   *   '<S296>/Combinatorial  Logic'
   */
  boolean_T pooled862[8];
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
 * '<S213>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling/CompareTo1
 * '<S214>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling/CompareTo2
 * '<S215>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling/ECT Transient Fueling
 * '<S216>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling/First Order Low Pass (Tunable)
 * '<S217>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling/First Order Low Pass (Tunable)1
 * '<S218>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling/OXY Transient Fueling
 * '<S219>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S220>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling/First Order Low Pass (Tunable)1/First Order Low Pass
 * '<S221>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Mass Flow to Charge Mass Transform/Multiply and Divide, avoiding divde by zero
 * '<S222>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Mass Flow to Charge Mass Transform/NonZero RPM
 * '<S223>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/Adapt FuelFlowComp Map
 * '<S224>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/O2 Control Enable Delay
 * '<S225>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/Saturation (Tunable)
 * '<S226>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/WarmUp Disable
 * '<S227>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/O2 Control Enable Delay/Time Since Enabled (With Input)1
 * '<S228>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/Saturation (Tunable)/Saturation
 * '<S229>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/I-Term Preload
 * '<S230>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/MaxGovState
 * '<S231>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Ramp RPM
 * '<S232>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Trigger Pre-load
 * '<S233>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)
 * '<S234>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/MaxGovState/MaxGOV Stateflow
 * '<S235>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Trigger Pre-load/InGear
 * '<S236>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Trigger Pre-load/InNeutral
 * '<S237>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Trigger Pre-load/InGear/Saturation
 * '<S238>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Trigger Pre-load/InNeutral/Saturation
 * '<S239>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Saturation
 * '<S240>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Universal PID
 * '<S241>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Derivitive3
 * '<S242>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Integrator
 * '<S243>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Model Info
 * '<S244>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Integrator/Saturation
 * '<S245>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/AiflowOffset
 * '<S246>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Base Airflow Table Adapt
 * '<S247>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Base RPM Set Pt
 * '<S248>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Handoff Alpha
 * '<S249>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination
 * '<S250>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/MotoringDetection
 * '<S251>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/OnIdle State
 * '<S252>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Ramp RPM
 * '<S253>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PD (Tunable & Scheduled)
 * '<S254>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)
 * '<S255>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/AiflowOffset/Ramp Air Into Idle State
 * '<S256>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/AiflowOffset/Run
 * '<S257>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Base Airflow Table Adapt/Adapt Base Airflow Table
 * '<S258>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Base Airflow Table Adapt/Idle Control Enable Delay
 * '<S259>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Base Airflow Table Adapt/Saturation (Tunable)
 * '<S260>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Base Airflow Table Adapt/Idle Control Enable Delay/Time Since Enabled (With Input)1
 * '<S261>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Base Airflow Table Adapt/Saturation (Tunable)/Saturation
 * '<S262>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Handoff Alpha/Saturation
 * '<S263>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/Determine if RPM is Falling
 * '<S264>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/IdleStateMachine
 * '<S265>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/OnIdle State
 * '<S266>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/Time Since Enabled (With Input)1
 * '<S267>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/Determine if RPM is Falling/Derivitive
 * '<S268>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/Determine if RPM is Falling/First Order Low Pass (Tunable)
 * '<S269>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/Determine if RPM is Falling/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S270>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/MotoringDetection/Time Since Enabled (With Input)2
 * '<S271>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PD (Tunable & Scheduled)/PID Gain Select
 * '<S272>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PD (Tunable & Scheduled)/Saturation
 * '<S273>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PD (Tunable & Scheduled)/Universal PD
 * '<S274>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PD (Tunable & Scheduled)/Universal PD/Derivitive
 * '<S275>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PD (Tunable & Scheduled)/Universal PD/Model Info
 * '<S276>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/PID Gain Select1
 * '<S277>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/Saturation
 * '<S278>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/Universal PID
 * '<S279>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Derivitive3
 * '<S280>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Integrator
 * '<S281>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Model Info
 * '<S282>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Integrator/Saturation
 * '<S283>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 Control State Determination
 * '<S284>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Calibrations
 * '<S285>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller
 * '<S286>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Calibrations/Error Gain Scheduling
 * '<S287>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Calibrations/O2 Control Switch Point Maps
 * '<S288>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Closed-Loop O2 PID Controller
 * '<S289>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Equivalence Ratio Perturbation
 * '<S290>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Closed-Loop O2 PID Controller/Saturation
 * '<S291>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Closed-Loop O2 PID Controller/Universal PID
 * '<S292>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Closed-Loop O2 PID Controller/Universal PID/Derivitive3
 * '<S293>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Closed-Loop O2 PID Controller/Universal PID/Integrator
 * '<S294>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Closed-Loop O2 PID Controller/Universal PID/Model Info
 * '<S295>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Closed-Loop O2 PID Controller/Universal PID/Integrator/Saturation
 * '<S296>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Equivalence Ratio Perturbation/Hysteresis
 * '<S297>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Equivalence Ratio Perturbation/Time Since Enabled (With Input)1
 * '<S298>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Equivalence Ratio Perturbation/Time Since Enabled (With Input)2
 * '<S299>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Equivalence Ratio Perturbation/Time Since Enabled (With Input)3
 * '<S300>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Spark Manager/Desired Eq Ratio Offset
 * '<S301>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Spark Manager/Ethanol Spark Offset
 * '<S302>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Spark Manager/Spark Advance Rate Limiter
 * '<S303>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Spark Manager/SparkAdvanceLimiter
 * '<S304>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Spark Manager/Temp Comp Offset
 * '<S305>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Spark Manager/Spark Advance Rate Limiter/First Time
 * '<S306>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Spark Manager/Spark Advance Rate Limiter/Saturation
 * '<S307>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Spark Manager/SparkAdvanceLimiter/Saturation
 * '<S308>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/FAN Control
 * '<S309>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/Fuel Pump at Startup
 * '<S310>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/Stall Throttle
 * '<S311>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/FAN Control/Hysterisis
 * '<S312>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/FAN Control/Hysterisis1
 * '<S313>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/FAN Control/Hysterisis2
 * '<S314>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/FAN Control/motohawk_table_2d
 * '<S315>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/FAN Control/motohawk_table_2d1
 * '<S316>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/FAN Control/motohawk_table_2d2
 * '<S317>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/FAN Control/Hysterisis/Hysteresis
 * '<S318>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/FAN Control/Hysterisis1/Hysteresis
 * '<S319>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/FAN Control/Hysterisis2/Hysteresis
 * '<S320>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/Fuel Pump at Startup/Time Since Enabled
 * '<S321>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/Stall Throttle/Ice Break
 * '<S322>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/Stall Throttle/Time Since Enabled (With Input)2
 * '<S323>' : BaseEngineController_LS/Foreground/Control/Diagnostics/AC Fault
 * '<S324>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Boost Fault
 * '<S325>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Engine Overheat Fault Logic
 * '<S326>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Fuel Economy
 * '<S327>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Lean Protect
 * '<S328>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Low Oil Pressure Fault Logic
 * '<S329>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MAP Fault Logic
 * '<S330>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection
 * '<S331>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Wrong Fuel Pressure Fault Logic
 * '<S332>' : BaseEngineController_LS/Foreground/Control/Diagnostics/AC Fault/Run State
 * '<S333>' : BaseEngineController_LS/Foreground/Control/Diagnostics/AC Fault/Time Since Enabled (With Input)1
 * '<S334>' : BaseEngineController_LS/Foreground/Control/Diagnostics/AC Fault/Time Since Enabled (With Input)2
 * '<S335>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Boost Fault/Run State
 * '<S336>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Boost Fault/Time Since Enabled (With Input)1
 * '<S337>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Boost Fault/Time Since Enabled (With Input)2
 * '<S338>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Boost Fault/Time Since Enabled (With Input)3
 * '<S339>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Engine Overheat Fault Logic/Run State
 * '<S340>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Fuel Economy/Calculate Fuel Density
 * '<S341>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Fuel Economy/First Order Low Pass (Tunable)
 * '<S342>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Fuel Economy/Multiply and Divide, avoiding divde by zero1
 * '<S343>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Fuel Economy/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S344>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Lean Protect/Time Since Enabled (With Input)2
 * '<S345>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Low Oil Pressure Fault Logic/Run State
 * '<S346>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Low Oil Pressure Fault Logic/Time Since Enabled (With Input)2
 * '<S347>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MAP Fault Logic/Run State
 * '<S348>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MAP Fault Logic/Time Since Enabled (With Input)1
 * '<S349>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MAP Fault Logic/Time Since Enabled (With Input)2
 * '<S350>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MAP Fault Logic/Time Since Enabled (With Input)3
 * '<S351>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/BaseRevLimit
 * '<S352>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/TwoStepRevLimit
 * '<S353>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/BaseRevLimit/Hysterisis
 * '<S354>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/BaseRevLimit/Hysterisis1
 * '<S355>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/BaseRevLimit/Hysterisis2
 * '<S356>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/BaseRevLimit/Hysterisis/Hysteresis
 * '<S357>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/BaseRevLimit/Hysterisis1/Hysteresis
 * '<S358>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/BaseRevLimit/Hysterisis2/Hysteresis
 * '<S359>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/TwoStepRevLimit/Hysterisis
 * '<S360>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/TwoStepRevLimit/Hysterisis1
 * '<S361>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/TwoStepRevLimit/Hysterisis2
 * '<S362>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/TwoStepRevLimit/Hysterisis/Hysteresis
 * '<S363>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/TwoStepRevLimit/Hysterisis1/Hysteresis
 * '<S364>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/TwoStepRevLimit/Hysterisis2/Hysteresis
 * '<S365>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Wrong Fuel Pressure Fault Logic/Time Since Enabled (With Input)1
 * '<S366>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Wrong Fuel Pressure Fault Logic/Time Since Enabled (With Input)2
 * '<S367>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs
 * '<S368>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs
 * '<S369>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes
 * '<S370>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed
 * '<S371>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Virtual Indexes
 * '<S372>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Baro Stall State Delay
 * '<S373>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Capture Signal At Startup
 * '<S374>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Running Baro Learn
 * '<S375>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Speed Density - MAP Referenced - Adaptive
 * '<S376>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/motohawk_override_rel
 * '<S377>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Capture Signal At Startup/Collect Average
 * '<S378>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Running Baro Learn/Compare To Constant
 * '<S379>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Running Baro Learn/Time Since Enabled (With Input)1
 * '<S380>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Speed Density - MAP Referenced - Adaptive/Adapt VolEff Map
 * '<S381>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Speed Density - MAP Referenced - Adaptive/C to K1
 * '<S382>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Speed Density - MAP Referenced - Adaptive/Compare To Constant
 * '<S383>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Speed Density - MAP Referenced - Adaptive/Adapt VolEff Map/motohawk_table_1d
 * '<S384>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/motohawk_override_rel/NewValue
 * '<S385>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/motohawk_override_rel/OldValue
 * '<S386>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag
 * '<S387>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect1
 * '<S388>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect3
 * '<S389>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect1/DecreasingFilter
 * '<S390>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect1/First Order Low Pass
 * '<S391>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect1/IncreasingFilter
 * '<S392>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect3/DecreasingFilter
 * '<S393>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect3/First Order Low Pass
 * '<S394>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect3/IncreasingFilter
 * '<S395>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/ACPres Index
 * '<S396>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/CAT Index
 * '<S397>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/ECT Index
 * '<S398>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/IAT Indexes
 * '<S399>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/MAP Indexes
 * '<S400>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/OXY Index
 * '<S401>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/RPM Indexes
 * '<S402>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/SysVolt Index
 * '<S403>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/TPS Indexes
 * '<S404>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/VSPD Index
 * '<S405>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/APP  Sensor Arbitration1
 * '<S406>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request
 * '<S407>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Capture ECT At Startup
 * '<S408>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Capture IAT At Startup
 * '<S409>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/CutThrottle APP Limiting
 * '<S410>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Engine Accel
 * '<S411>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/EngineState
 * '<S412>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Fuel Delta Pressure Calculation
 * '<S413>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Gear Estimator
 * '<S414>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/O2 De-lag
 * '<S415>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Stall
 * '<S416>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/TPS  Sensor Arbitration
 * '<S417>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Time Since Key On
 * '<S418>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Time Since Run
 * '<S419>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Time Since Stall
 * '<S420>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request/First Order Low Pass
 * '<S421>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request/PassThrough1
 * '<S422>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request/PassThrough2
 * '<S423>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request/Variable Rate Limiter
 * '<S424>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request/Variable Rate Limiter/Saturation
 * '<S425>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Capture ECT At Startup/Collect Average
 * '<S426>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Capture IAT At Startup/Collect Average
 * '<S427>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/CutThrottle APP Limiting/Bound APP if overheating
 * '<S428>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Engine Accel/Derivitive3
 * '<S429>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Engine Accel/First Order Low Pass (Tunable)
 * '<S430>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Engine Accel/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S431>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/EngineState/Engine State Machine
 * '<S432>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/EngineState/TDC_Counter
 * '<S433>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/EngineState/TDC_Counter/Crank State
 * '<S434>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Time Since Key On/Time Since Enabled (With Input)2
 * '<S435>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Time Since Run/RunState
 * '<S436>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Time Since Run/Time Since Enabled (With Input)2
 * '<S437>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Time Since Stall/Stall State
 * '<S438>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Time Since Stall/Time Since Enabled (With Input)1
 * '<S439>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Virtual Indexes/ECT_KeyUp
 * '<S440>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Virtual Indexes/IAT_KeyUp
 * '<S441>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Virtual Indexes/MAFPortIndex
 * '<S442>' : BaseEngineController_LS/Foreground/Control/motohawk_function_collector/motohawk_function_collector_in
 * '<S443>' : BaseEngineController_LS/Foreground/Control/motohawk_function_collector/motohawk_function_collector_in/Triggered Subsystem
 * '<S444>' : BaseEngineController_LS/Foreground/Inputs/Digital
 * '<S445>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed
 * '<S446>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors
 * '<S447>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors
 * '<S448>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors
 * '<S449>' : BaseEngineController_LS/Foreground/Inputs/Digital/ACSw
 * '<S450>' : BaseEngineController_LS/Foreground/Inputs/Digital/ClutchSw
 * '<S451>' : BaseEngineController_LS/Foreground/Inputs/Digital/ESTOP
 * '<S452>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor
 * '<S453>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor1
 * '<S454>' : BaseEngineController_LS/Foreground/Inputs/Digital/Scramble
 * '<S455>' : BaseEngineController_LS/Foreground/Inputs/Digital/Two Step
 * '<S456>' : BaseEngineController_LS/Foreground/Inputs/Digital/ACSw /Override in Engineering Units
 * '<S457>' : BaseEngineController_LS/Foreground/Inputs/Digital/ACSw /Override in Engineering Units/NewValue
 * '<S458>' : BaseEngineController_LS/Foreground/Inputs/Digital/ACSw /Override in Engineering Units/OldValue
 * '<S459>' : BaseEngineController_LS/Foreground/Inputs/Digital/ClutchSw/Override in Engineering Units
 * '<S460>' : BaseEngineController_LS/Foreground/Inputs/Digital/ClutchSw/Override in Engineering Units/NewValue
 * '<S461>' : BaseEngineController_LS/Foreground/Inputs/Digital/ClutchSw/Override in Engineering Units/OldValue
 * '<S462>' : BaseEngineController_LS/Foreground/Inputs/Digital/ESTOP/Override in Engineering Units
 * '<S463>' : BaseEngineController_LS/Foreground/Inputs/Digital/ESTOP/Override in Engineering Units/NewValue
 * '<S464>' : BaseEngineController_LS/Foreground/Inputs/Digital/ESTOP/Override in Engineering Units/OldValue
 * '<S465>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor/First Order Low Pass
 * '<S466>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor/If Action Subsystem
 * '<S467>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor/If Action Subsystem1
 * '<S468>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor/If Action Subsystem2
 * '<S469>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor/Override
 * '<S470>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor/motohawk_table_1d1
 * '<S471>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor/First Order Low Pass/First Order Low Pass
 * '<S472>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor/Override/NewValue
 * '<S473>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor/Override/OldValue
 * '<S474>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor1/First Order Low Pass
 * '<S475>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor1/If Action Subsystem
 * '<S476>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor1/If Action Subsystem1
 * '<S477>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor1/If Action Subsystem2
 * '<S478>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor1/Override
 * '<S479>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor1/motohawk_table_1d1
 * '<S480>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor1/First Order Low Pass/First Order Low Pass
 * '<S481>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor1/Override/NewValue
 * '<S482>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor1/Override/OldValue
 * '<S483>' : BaseEngineController_LS/Foreground/Inputs/Digital/Scramble /Button Delay 1
 * '<S484>' : BaseEngineController_LS/Foreground/Inputs/Digital/Scramble /Override in Engineering Units
 * '<S485>' : BaseEngineController_LS/Foreground/Inputs/Digital/Scramble /Button Delay 1/Time Since Enabled (With Input)4
 * '<S486>' : BaseEngineController_LS/Foreground/Inputs/Digital/Scramble /Override in Engineering Units/NewValue
 * '<S487>' : BaseEngineController_LS/Foreground/Inputs/Digital/Scramble /Override in Engineering Units/OldValue
 * '<S488>' : BaseEngineController_LS/Foreground/Inputs/Digital/Two Step/Button Delay 1
 * '<S489>' : BaseEngineController_LS/Foreground/Inputs/Digital/Two Step/Override in Engineering Units
 * '<S490>' : BaseEngineController_LS/Foreground/Inputs/Digital/Two Step/Button Delay 1/Time Since Enabled (With Input)4
 * '<S491>' : BaseEngineController_LS/Foreground/Inputs/Digital/Two Step/Override in Engineering Units/NewValue
 * '<S492>' : BaseEngineController_LS/Foreground/Inputs/Digital/Two Step/Override in Engineering Units/OldValue
 * '<S493>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed/Encoder Diagnostics
 * '<S494>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed/First Order Low Pass (Tunable)1
 * '<S495>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/CamEdges
 * '<S496>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/CamSync
 * '<S497>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/CounterThresh
 * '<S498>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/CrankEdges
 * '<S499>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/CrankSync
 * '<S500>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/motohawk_model_probe_eval_f
 * '<S501>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed/First Order Low Pass (Tunable)1/First Order Low Pass
 * '<S502>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/ACPres
 * '<S503>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor
 * '<S504>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelPres
 * '<S505>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP
 * '<S506>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAPTime
 * '<S507>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP_Crank_Synchronous
 * '<S508>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/OilPres
 * '<S509>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SensVolts
 * '<S510>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SysVolts
 * '<S511>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/ACPres /First Order Low Pass
 * '<S512>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/ACPres /If Action Subsystem
 * '<S513>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/ACPres /If Action Subsystem1
 * '<S514>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/ACPres /If Action Subsystem2
 * '<S515>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/ACPres /Override
 * '<S516>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/ACPres /First Order Low Pass/First Order Low Pass
 * '<S517>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/ACPres /Override/NewValue
 * '<S518>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/ACPres /Override/OldValue
 * '<S519>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options
 * '<S520>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/If Action Subsystem
 * '<S521>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/If Action Subsystem1
 * '<S522>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/If Action Subsystem2
 * '<S523>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Override
 * '<S524>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options/First Order Low Pass
 * '<S525>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options/Moving Average Filter
 * '<S526>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options/Rate Limiter
 * '<S527>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options/First Order Low Pass/First Order Low Pass
 * '<S528>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options/Rate Limiter/Variable Rate Limiter
 * '<S529>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options/Rate Limiter/Variable Rate Limiter/Saturation
 * '<S530>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Override/NewValue
 * '<S531>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Override/OldValue
 * '<S532>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelPres/First Order Low Pass
 * '<S533>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelPres/If Action Subsystem
 * '<S534>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelPres/If Action Subsystem1
 * '<S535>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelPres/If Action Subsystem2
 * '<S536>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelPres/Override
 * '<S537>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelPres/First Order Low Pass/First Order Low Pass
 * '<S538>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelPres/Override/NewValue
 * '<S539>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelPres/Override/OldValue
 * '<S540>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP/First Order Low Pass
 * '<S541>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP/If Action Subsystem
 * '<S542>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP/If Action Subsystem1
 * '<S543>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP/If Action Subsystem2
 * '<S544>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP/Override
 * '<S545>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP/First Order Low Pass/First Order Low Pass
 * '<S546>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP/Override/NewValue
 * '<S547>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP/Override/OldValue
 * '<S548>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAPTime/First Order Low Pass
 * '<S549>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAPTime/If Action Subsystem
 * '<S550>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAPTime/If Action Subsystem1
 * '<S551>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAPTime/If Action Subsystem2
 * '<S552>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAPTime/Override
 * '<S553>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAPTime/First Order Low Pass/First Order Low Pass
 * '<S554>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAPTime/Override/NewValue
 * '<S555>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAPTime/Override/OldValue
 * '<S556>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP_Crank_Synchronous/MID_TDC
 * '<S557>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP_Crank_Synchronous/Once at Startup
 * '<S558>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/OilPres/First Order Low Pass
 * '<S559>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/OilPres/If Action Subsystem
 * '<S560>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/OilPres/If Action Subsystem1
 * '<S561>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/OilPres/If Action Subsystem2
 * '<S562>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/OilPres/Override
 * '<S563>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/OilPres/First Order Low Pass/First Order Low Pass
 * '<S564>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/OilPres/Override/NewValue
 * '<S565>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/OilPres/Override/OldValue
 * '<S566>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SensVolts/First Order Low Pass
 * '<S567>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SensVolts/If Action Subsystem
 * '<S568>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SensVolts/If Action Subsystem1
 * '<S569>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SensVolts/If Action Subsystem2
 * '<S570>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SensVolts/Override
 * '<S571>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SensVolts/First Order Low Pass/First Order Low Pass
 * '<S572>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SensVolts/Override/NewValue
 * '<S573>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SensVolts/Override/OldValue
 * '<S574>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SysVolts/First Order Low Pass
 * '<S575>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SysVolts/If Action Subsystem
 * '<S576>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SysVolts/If Action Subsystem1
 * '<S577>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SysVolts/If Action Subsystem2
 * '<S578>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SysVolts/Override
 * '<S579>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SysVolts/First Order Low Pass/First Order Low Pass
 * '<S580>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SysVolts/Override/NewValue
 * '<S581>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SysVolts/Override/OldValue
 * '<S582>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda
 * '<S583>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors
 * '<S584>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/Linear Sensor Characterization
 * '<S585>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/Linear Sensor Characterization1
 * '<S586>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs
 * '<S587>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs1
 * '<S588>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs10
 * '<S589>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs11
 * '<S590>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs12
 * '<S591>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs13
 * '<S592>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs14
 * '<S593>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs15
 * '<S594>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs16
 * '<S595>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs17
 * '<S596>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs2
 * '<S597>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs3
 * '<S598>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs4
 * '<S599>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs5
 * '<S600>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs6
 * '<S601>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs7
 * '<S602>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs8
 * '<S603>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs9
 * '<S604>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/Linear Sensor Characterization/First Order Low Pass
 * '<S605>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/Linear Sensor Characterization/If Action Subsystem
 * '<S606>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/Linear Sensor Characterization/If Action Subsystem1
 * '<S607>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/Linear Sensor Characterization/If Action Subsystem2
 * '<S608>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/Linear Sensor Characterization/Override
 * '<S609>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/Linear Sensor Characterization/First Order Low Pass/First Order Low Pass
 * '<S610>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/Linear Sensor Characterization/Override/NewValue
 * '<S611>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/Linear Sensor Characterization/Override/OldValue
 * '<S612>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/Linear Sensor Characterization1/First Order Low Pass
 * '<S613>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/Linear Sensor Characterization1/If Action Subsystem
 * '<S614>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/Linear Sensor Characterization1/If Action Subsystem1
 * '<S615>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/Linear Sensor Characterization1/If Action Subsystem2
 * '<S616>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/Linear Sensor Characterization1/Override
 * '<S617>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/Linear Sensor Characterization1/First Order Low Pass/First Order Low Pass
 * '<S618>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/Linear Sensor Characterization1/Override/NewValue
 * '<S619>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/Linear Sensor Characterization1/Override/OldValue
 * '<S620>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs/NewValue
 * '<S621>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs/OldValue
 * '<S622>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs1/NewValue
 * '<S623>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs1/OldValue
 * '<S624>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs10/NewValue
 * '<S625>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs10/OldValue
 * '<S626>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs11/NewValue
 * '<S627>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs11/OldValue
 * '<S628>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs12/NewValue
 * '<S629>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs12/OldValue
 * '<S630>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs13/NewValue
 * '<S631>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs13/OldValue
 * '<S632>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs14/NewValue
 * '<S633>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs14/OldValue
 * '<S634>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs15/NewValue
 * '<S635>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs15/OldValue
 * '<S636>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs16/NewValue
 * '<S637>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs16/OldValue
 * '<S638>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs17/NewValue
 * '<S639>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs17/OldValue
 * '<S640>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs2/NewValue
 * '<S641>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs2/OldValue
 * '<S642>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs3/NewValue
 * '<S643>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs3/OldValue
 * '<S644>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs4/NewValue
 * '<S645>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs4/OldValue
 * '<S646>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs5/NewValue
 * '<S647>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs5/OldValue
 * '<S648>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs6/NewValue
 * '<S649>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs6/OldValue
 * '<S650>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs7/NewValue
 * '<S651>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs7/OldValue
 * '<S652>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs8/NewValue
 * '<S653>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs8/OldValue
 * '<S654>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs9/NewValue
 * '<S655>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs9/OldValue
 * '<S656>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/CAT1
 * '<S657>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT
 * '<S658>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP
 * '<S659>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT
 * '<S660>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/CAT1/First Order Low Pass
 * '<S661>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/CAT1/If Action Subsystem
 * '<S662>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/CAT1/If Action Subsystem1
 * '<S663>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/CAT1/If Action Subsystem2
 * '<S664>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/CAT1/Override
 * '<S665>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/CAT1/motohawk_table_1d1
 * '<S666>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/CAT1/First Order Low Pass/First Order Low Pass
 * '<S667>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/CAT1/Override/NewValue
 * '<S668>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/CAT1/Override/OldValue
 * '<S669>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /First Order Low Pass
 * '<S670>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /If Action Subsystem
 * '<S671>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /If Action Subsystem1
 * '<S672>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /If Action Subsystem2
 * '<S673>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /Override
 * '<S674>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /motohawk_table_1d1
 * '<S675>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /First Order Low Pass/First Order Low Pass
 * '<S676>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /Override/NewValue
 * '<S677>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /Override/OldValue
 * '<S678>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /First Order Low Pass
 * '<S679>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /If Action Subsystem
 * '<S680>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /If Action Subsystem1
 * '<S681>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /If Action Subsystem2
 * '<S682>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /Override
 * '<S683>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /motohawk_table_1d1
 * '<S684>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /First Order Low Pass/First Order Low Pass
 * '<S685>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /Override/NewValue
 * '<S686>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /Override/OldValue
 * '<S687>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /First Order Low Pass
 * '<S688>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /If Action Subsystem
 * '<S689>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /If Action Subsystem1
 * '<S690>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /If Action Subsystem2
 * '<S691>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /Override
 * '<S692>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /motohawk_table_1d1
 * '<S693>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /First Order Low Pass/First Order Low Pass
 * '<S694>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /Override/NewValue
 * '<S695>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /Override/OldValue
 * '<S696>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1
 * '<S697>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1ForcedAdapt
 * '<S698>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2
 * '<S699>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2ForcedAdapt
 * '<S700>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt
 * '<S701>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1
 * '<S702>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1
 * '<S703>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2
 * '<S704>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1/First Order Low Pass
 * '<S705>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1/If Action Subsystem
 * '<S706>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1/If Action Subsystem1
 * '<S707>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1/If Action Subsystem2
 * '<S708>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1/Override
 * '<S709>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1/Saturation
 * '<S710>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1/motohawk_table_1d1
 * '<S711>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1/First Order Low Pass/First Order Low Pass
 * '<S712>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1/Override/NewValue
 * '<S713>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1/Override/OldValue
 * '<S714>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1ForcedAdapt/Function-Call Subsystem
 * '<S715>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1ForcedAdapt/Function-Call Subsystem/First Time
 * '<S716>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2/First Order Low Pass
 * '<S717>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2/If Action Subsystem
 * '<S718>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2/If Action Subsystem1
 * '<S719>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2/If Action Subsystem2
 * '<S720>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2/Override
 * '<S721>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2/Saturation
 * '<S722>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2/motohawk_table_1d1
 * '<S723>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2/First Order Low Pass/First Order Low Pass
 * '<S724>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2/Override/NewValue
 * '<S725>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2/Override/OldValue
 * '<S726>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2ForcedAdapt/Function-Call Subsystem
 * '<S727>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2ForcedAdapt/Function-Call Subsystem/First Time
 * '<S728>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/ADAPT SCALING
 * '<S729>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/FAULTS
 * '<S730>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/First Order Low Pass
 * '<S731>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/SENSOR FAULT MANAGER
 * '<S732>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/Saturation
 * '<S733>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/ADAPT SCALING/ADAPT HI
 * '<S734>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/ADAPT SCALING/ADAPT LO
 * '<S735>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/ADAPT SCALING/MinMaxFilter
 * '<S736>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/ADAPT SCALING/ADAPT HI/Store Current Position
 * '<S737>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/ADAPT SCALING/ADAPT LO/Store Current Position
 * '<S738>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/First Order Low Pass/First Order Low Pass
 * '<S739>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/SENSOR FAULT MANAGER/If Action Subsystem
 * '<S740>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/SENSOR FAULT MANAGER/If Action Subsystem1
 * '<S741>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/SENSOR FAULT MANAGER/If Action Subsystem2
 * '<S742>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/SENSOR FAULT MANAGER/Override
 * '<S743>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/SENSOR FAULT MANAGER/Override/NewValue
 * '<S744>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/SENSOR FAULT MANAGER/Override/OldValue
 * '<S745>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/ADAPT SCALING
 * '<S746>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/FAULTS
 * '<S747>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/First Order Low Pass
 * '<S748>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/SENSOR FAULT MANAGER
 * '<S749>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/Saturation
 * '<S750>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/ADAPT SCALING/ADAPT HI
 * '<S751>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/ADAPT SCALING/ADAPT LO
 * '<S752>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/ADAPT SCALING/MinMaxFilter
 * '<S753>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/ADAPT SCALING/ADAPT HI/Store Current Position
 * '<S754>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/ADAPT SCALING/ADAPT LO/Store Current Position
 * '<S755>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/First Order Low Pass/First Order Low Pass
 * '<S756>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/SENSOR FAULT MANAGER/If Action Subsystem
 * '<S757>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/SENSOR FAULT MANAGER/If Action Subsystem1
 * '<S758>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/SENSOR FAULT MANAGER/If Action Subsystem2
 * '<S759>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/SENSOR FAULT MANAGER/Override
 * '<S760>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/SENSOR FAULT MANAGER/Override/NewValue
 * '<S761>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/SENSOR FAULT MANAGER/Override/OldValue
 * '<S762>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/ADAPT SCALING
 * '<S763>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/FAULTS
 * '<S764>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/First Order Low Pass
 * '<S765>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER
 * '<S766>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/Saturation
 * '<S767>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/ADAPT SCALING/ADAPT HI
 * '<S768>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/ADAPT SCALING/ADAPT LO
 * '<S769>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/ADAPT SCALING/MinMaxFilter
 * '<S770>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/ADAPT SCALING/ADAPT HI/Store Current Position
 * '<S771>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/ADAPT SCALING/ADAPT LO/Store Current Position
 * '<S772>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/First Order Low Pass/First Order Low Pass
 * '<S773>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER/If Action Subsystem
 * '<S774>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER/If Action Subsystem1
 * '<S775>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER/If Action Subsystem2
 * '<S776>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER/Override
 * '<S777>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER/Override/NewValue
 * '<S778>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER/Override/OldValue
 * '<S779>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/ADAPT SCALING
 * '<S780>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/FAULTS
 * '<S781>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/First Order Low Pass
 * '<S782>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER
 * '<S783>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/Saturation
 * '<S784>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/ADAPT SCALING/ADAPT HI
 * '<S785>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/ADAPT SCALING/ADAPT LO
 * '<S786>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/ADAPT SCALING/MinMaxFilter
 * '<S787>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/ADAPT SCALING/ADAPT HI/Store Current Position
 * '<S788>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/ADAPT SCALING/ADAPT LO/Store Current Position
 * '<S789>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/First Order Low Pass/First Order Low Pass
 * '<S790>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER/If Action Subsystem
 * '<S791>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER/If Action Subsystem1
 * '<S792>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER/If Action Subsystem2
 * '<S793>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER/Override
 * '<S794>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER/Override/NewValue
 * '<S795>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER/Override/OldValue
 * '<S796>' : BaseEngineController_LS/Foreground/Outputs/AC Control
 * '<S797>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash
 * '<S798>' : BaseEngineController_LS/Foreground/Outputs/Coil Control
 * '<S799>' : BaseEngineController_LS/Foreground/Outputs/ETC_CutPower
 * '<S800>' : BaseEngineController_LS/Foreground/Outputs/FAN Control
 * '<S801>' : BaseEngineController_LS/Foreground/Outputs/FuelPump
 * '<S802>' : BaseEngineController_LS/Foreground/Outputs/HBridge
 * '<S803>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control
 * '<S804>' : BaseEngineController_LS/Foreground/Outputs/Injector Control
 * '<S805>' : BaseEngineController_LS/Foreground/Outputs/WASTEGATE-Control
 * '<S806>' : BaseEngineController_LS/Foreground/Outputs/AC Control/Discrete Actuator - AC
 * '<S807>' : BaseEngineController_LS/Foreground/Outputs/AC Control/Discrete Actuator - AC/Override in Engineering Units
 * '<S808>' : BaseEngineController_LS/Foreground/Outputs/AC Control/Discrete Actuator - AC/Override in Engineering Units/NewValue
 * '<S809>' : BaseEngineController_LS/Foreground/Outputs/AC Control/Discrete Actuator - AC/Override in Engineering Units/OldValue
 * '<S810>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 1
 * '<S811>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 2
 * '<S812>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 3
 * '<S813>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 4
 * '<S814>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 5
 * '<S815>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 6
 * '<S816>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 7
 * '<S817>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 8
 * '<S818>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message Boost
 * '<S819>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message DBW
 * '<S820>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 3/
 * '<S821>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 3/
 * '<S822>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 3/ 1
 * '<S823>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/Coil Enable Manager
 * '<S824>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management
 * '<S825>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/motohawk_override_rel
 * '<S826>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/motohawk_override_rel1
 * '<S827>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/Coil Enable Manager/CompareTo
 * '<S828>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/Coil Enable Manager/EST Enable TDC Counter
 * '<S829>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/Coil Enable Manager/EST Enable TDC Counter/EST Enable TDC Counter Stateflow
 * '<S830>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/Coil Enable Manager/EST Enable TDC Counter/TDC_Counter
 * '<S831>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo
 * '<S832>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo1
 * '<S833>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo10
 * '<S834>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo11
 * '<S835>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo12
 * '<S836>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo13
 * '<S837>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo14
 * '<S838>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo15
 * '<S839>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo2
 * '<S840>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo3
 * '<S841>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo4
 * '<S842>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo5
 * '<S843>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo6
 * '<S844>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo7
 * '<S845>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo8
 * '<S846>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo9
 * '<S847>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/motohawk_override_rel/NewValue
 * '<S848>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/motohawk_override_rel/OldValue
 * '<S849>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/motohawk_override_rel1/NewValue
 * '<S850>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/motohawk_override_rel1/OldValue
 * '<S851>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/Discrete Actuator - FAN1
 * '<S852>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/Discrete Actuator - FAN2
 * '<S853>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/IAC-P-CONTROL
 * '<S854>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/IAC-P-CONTROL1
 * '<S855>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/Discrete Actuator - FAN1/Override in Engineering Units
 * '<S856>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/Discrete Actuator - FAN1/Override in Engineering Units/NewValue
 * '<S857>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/Discrete Actuator - FAN1/Override in Engineering Units/OldValue
 * '<S858>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/Discrete Actuator - FAN2/Override in Engineering Units
 * '<S859>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/Discrete Actuator - FAN2/Override in Engineering Units/NewValue
 * '<S860>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/Discrete Actuator - FAN2/Override in Engineering Units/OldValue
 * '<S861>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/IAC-P-CONTROL/Saturation
 * '<S862>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/IAC-P-CONTROL/motohawk_override_abs2
 * '<S863>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/IAC-P-CONTROL/motohawk_override_abs2/NewValue
 * '<S864>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/IAC-P-CONTROL/motohawk_override_abs2/OldValue
 * '<S865>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/IAC-P-CONTROL1/Saturation
 * '<S866>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/IAC-P-CONTROL1/motohawk_override_abs2
 * '<S867>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/IAC-P-CONTROL1/motohawk_override_abs2/NewValue
 * '<S868>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/IAC-P-CONTROL1/motohawk_override_abs2/OldValue
 * '<S869>' : BaseEngineController_LS/Foreground/Outputs/FuelPump/Discrete Actuator - FUELP
 * '<S870>' : BaseEngineController_LS/Foreground/Outputs/FuelPump/Discrete Actuator - FUELP/Override in Engineering Units
 * '<S871>' : BaseEngineController_LS/Foreground/Outputs/FuelPump/Discrete Actuator - FUELP/Override in Engineering Units/NewValue
 * '<S872>' : BaseEngineController_LS/Foreground/Outputs/FuelPump/Discrete Actuator - FUELP/Override in Engineering Units/OldValue
 * '<S873>' : BaseEngineController_LS/Foreground/Outputs/HBridge/Time Since Enabled (With Input)1
 * '<S874>' : BaseEngineController_LS/Foreground/Outputs/HBridge/motohawk_override_abs2
 * '<S875>' : BaseEngineController_LS/Foreground/Outputs/HBridge/motohawk_override_abs2/NewValue
 * '<S876>' : BaseEngineController_LS/Foreground/Outputs/HBridge/motohawk_override_abs2/OldValue
 * '<S877>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control/IAC-P-CONTROL
 * '<S878>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control/IAC-S-CONTROL
 * '<S879>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control/IAC-P-CONTROL/Saturation
 * '<S880>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control/IAC-P-CONTROL/motohawk_override_abs2
 * '<S881>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control/IAC-P-CONTROL/motohawk_override_abs2/NewValue
 * '<S882>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control/IAC-P-CONTROL/motohawk_override_abs2/OldValue
 * '<S883>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control/IAC-S-CONTROL/Saturation
 * '<S884>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control/IAC-S-CONTROL/motohawk_override_abs2
 * '<S885>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control/IAC-S-CONTROL/motohawk_override_abs2/NewValue
 * '<S886>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control/IAC-S-CONTROL/motohawk_override_abs2/OldValue
 * '<S887>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/Injector Diagnostics
 * '<S888>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/Injector Enable Manager
 * '<S889>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs1
 * '<S890>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs2
 * '<S891>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs3
 * '<S892>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs4
 * '<S893>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs5
 * '<S894>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs6
 * '<S895>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/Injector Enable Manager/Stall
 * '<S896>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/Injector Enable Manager/Time Since Enabled (With Input)1
 * '<S897>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs1/NewValue
 * '<S898>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs1/OldValue
 * '<S899>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs2/NewValue
 * '<S900>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs2/OldValue
 * '<S901>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs3/NewValue
 * '<S902>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs3/OldValue
 * '<S903>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs4/NewValue
 * '<S904>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs4/OldValue
 * '<S905>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs5/NewValue
 * '<S906>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs5/OldValue
 * '<S907>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs6/NewValue
 * '<S908>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs6/OldValue
 * '<S909>' : BaseEngineController_LS/Foreground/Outputs/WASTEGATE-Control/PWM Characterization
 * '<S910>' : BaseEngineController_LS/Foreground/Outputs/WASTEGATE-Control/PWM Characterization/Saturation
 * '<S911>' : BaseEngineController_LS/Foreground/Outputs/WASTEGATE-Control/PWM Characterization/motohawk_override_abs2
 * '<S912>' : BaseEngineController_LS/Foreground/Outputs/WASTEGATE-Control/PWM Characterization/motohawk_override_abs2/NewValue
 * '<S913>' : BaseEngineController_LS/Foreground/Outputs/WASTEGATE-Control/PWM Characterization/motohawk_override_abs2/OldValue
 * '<S914>' : BaseEngineController_LS/Main Power Relay/Main Power Relay
 * '<S915>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Display Variable Event Boolean
 * '<S916>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Display Variable Event Function-Call
 * '<S917>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Display Variable Event Function-Call1
 * '<S918>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ECUP Latch
 * '<S919>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Forced Shutdown Process
 * '<S920>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/On Off Delay
 * '<S921>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes
 * '<S922>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/motohawk_restore_nvmem
 * '<S923>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/motohawk_store_nvmem
 * '<S924>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Display Variable Event Function-Call/Clear
 * '<S925>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Display Variable Event Function-Call1/Clear
 * '<S926>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Forced Shutdown Process/Post Shutdown two ticks before MPRD off
 * '<S927>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Forced Shutdown Process/Processor Reboot
 * '<S928>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Forced Shutdown Process/Save NV Vars one tick before MPRD off
 * '<S929>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Forced Shutdown Process/Shutdown power on ECU565//563
 * '<S930>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Forced Shutdown Process/Time Since Enabled (With Input)1
 * '<S931>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Forced Shutdown Process/Post Shutdown two ticks before MPRD off/Post Shutdown two ticks before MPRD off
 * '<S932>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Forced Shutdown Process/Save NV Vars one tick before MPRD off/Save NV Vars one tick before MPRD off
 * '<S933>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Forced Shutdown Process/Shutdown power on ECU565//563/Shutdown power on ECU565-128
 * '<S934>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/On Off Delay/S-R Flip-Flop
 * '<S935>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/Post Shutdown two ticks before MPRD off
 * '<S936>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/Processor Reboot
 * '<S937>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/Save NV Vars one tick before MPRD off
 * '<S938>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/Shutdown power on ECU565//563
 * '<S939>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/motohawk_override_abs
 * '<S940>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/Post Shutdown two ticks before MPRD off/Post Shutdown two ticks before MPRD off
 * '<S941>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/Save NV Vars one tick before MPRD off/Save NV Vars one tick before MPRD off
 * '<S942>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/Shutdown power on ECU565//563/Shutdown power on ECU565-128
 * '<S943>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/motohawk_override_abs/NewValue
 * '<S944>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/motohawk_override_abs/OldValue
 */
#endif                                 /* RTW_HEADER_BaseEngineController_LS_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
