/*
 * File: BaseEngineController_A02_bak2.h
 *
 * Code generated for Simulink model 'BaseEngineController_A02_bak2'.
 *
 * Model version                  : 1.1531
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Tue Jan 01 09:48:38 2019
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_BaseEngineController_A02_bak2_h_
#define RTW_HEADER_BaseEngineController_A02_bak2_h_
#ifndef BaseEngineController_A02_bak2_COMMON_INCLUDES_
# define BaseEngineController_A02_bak2_COMMON_INCLUDES_
#include <math.h>
#include <string.h>
#include "rtwtypes.h"
#include "Application.h"
#include "rt_nonfinite.h"
#include "rt_zcfcn.h"
#endif                                 /* BaseEngineController_A02_bak2_COMMON_INCLUDES_ */

#include "BaseEngineController_A02_bak2_types.h"

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
  real_T s435_RPMInst;                 /* '<S435>/Data Type Conversion1' */
  real_T s439_DataTypeConversion;      /* '<S439>/Data Type Conversion' */
  real_T s539_Sum1;                    /* '<S539>/Sum1' */
  real_T s552_Merge;                   /* '<S552>/Merge' */
  real_T s538_Sum1;                    /* '<S538>/Sum1' */
  real_T s670_motohawk_interpolation_1d;/* '<S670>/motohawk_interpolation_1d' */
  real_T s680_motohawk_interpolation_1d;/* '<S680>/motohawk_interpolation_1d' */
  real_T s668_Merge;                   /* '<S668>/Merge' */
  real_T s678_Merge;                   /* '<S678>/Merge' */
  real_T s690_motohawk_interpolation_1d;/* '<S690>/motohawk_interpolation_1d' */
  real_T s700_motohawk_interpolation_1d;/* '<S700>/motohawk_interpolation_1d' */
  real_T s688_Merge;                   /* '<S688>/Merge' */
  real_T s698_Merge;                   /* '<S698>/Merge' */
  real_T s403_Switch2;                 /* '<S403>/Switch2' */
  real_T s540_Sum1;                    /* '<S540>/Sum1' */
  real_T s560_Merge;                   /* '<S560>/Merge' */
  real_T s397_Switch1;                 /* '<S397>/Switch1' */
  real_T s626_motohawk_interpolation_1d;/* '<S626>/motohawk_interpolation_1d' */
  real_T s625_Merge;                   /* '<S625>/Merge' */
  real_T s401_Sum1;                    /* '<S401>/Sum1' */
  real_T s423_Switch;                  /* '<S423>/Switch' */
  real_T s347_motohawk_delta_time;     /* '<S347>/motohawk_delta_time' */
  real_T s543_Sum1;                    /* '<S543>/Sum1' */
  real_T s355_Sum;                     /* '<S355>/Sum' */
  real_T s544_Merge;                   /* '<S544>/Merge' */
  real_T s542_Sum1;                    /* '<S542>/Sum1' */
  real_T s581_Merge;                   /* '<S581>/Merge' */
  real_T s354_PressureRatio;           /* '<S354>/Pressure Ratio' */
  real_T s354_NominalAirFlowRate;      /* '<S354>/Nominal Air Flow Rate' */
  real_T s354_ModelAirMassFlowRate;    /* '<S354>/Model Air Mass Flow Rate' */
  real_T s434_Gain;                    /* '<S434>/Gain' */
  real_T s516_motohawk_interpolation_1d;/* '<S516>/motohawk_interpolation_1d' */
  real_T s515_Merge;                   /* '<S515>/Merge' */
  real_T s354_MultiportSwitch;         /* '<S354>/Multiport Switch' */
  real_T s367_Merge;                   /* '<S367>/Merge' */
  real_T s370_Sum1;                    /* '<S370>/Sum1' */
  real_T s368_Merge;                   /* '<S368>/Merge' */
  real_T s373_Sum1;                    /* '<S373>/Sum1' */
  real_T s376_TorquetoPower;           /* '<S376>/Torque to Power' */
  real_T s384_MinMax1;                 /* '<S384>/MinMax1' */
  real_T s417_Sum1;                    /* '<S417>/Sum1' */
  real_T s440_DataTypeConversion;      /* '<S440>/Data Type Conversion' */
  real_T s441_DataTypeConversion1;     /* '<S441>/Data Type Conversion1' */
  real_T s441_DataTypeConversion2;     /* '<S441>/Data Type Conversion2' */
  real_T s441_DataTypeConversion3;     /* '<S441>/Data Type Conversion3' */
  real_T s441_DataTypeConversion4;     /* '<S441>/Data Type Conversion4' */
  real_T s441_DataTypeConversion5;     /* '<S441>/Data Type Conversion5' */
  real_T s442_DataTypeConversion;      /* '<S442>/Data Type Conversion' */
  real_T s443_DataTypeConversion;      /* '<S443>/Data Type Conversion' */
  real_T s444_DataTypeConversion;      /* '<S444>/Data Type Conversion' */
  real_T s448_DataTypeConversion;      /* '<S448>/Data Type Conversion' */
  real_T s589_Merge;                   /* '<S589>/Merge' */
  real_T s547_Sum1;                    /* '<S547>/Sum1' */
  real_T s615_Merge;                   /* '<S615>/Merge' */
  real_T s111_SparkEnergy;             /* '<S111>/Merge5' */
  real_T s111_SparkAdv;                /* '<S111>/Merge4' */
  real_T s425_Switch;                  /* '<S425>/Switch' */
  real_T s111_Throttle;                /* '<S111>/Merge8' */
  real_T s708_ETC;                     /* '<S708>/Saturation' */
  real_T s111_IACP;                    /* '<S111>/Merge3' */
  real_T s762_MinMax1;                 /* '<S762>/MinMax1' */
  real_T s111_IACS;                    /* '<S111>/Merge9' */
  real_T s766_MinMax1;                 /* '<S766>/MinMax1' */
  real_T s111_SOI;                     /* '<S111>/Merge1' */
  real_T s111_FPC[8];                  /* '<S111>/Merge2' */
  real_T s63_Sum[8];                   /* '<S63>/Sum' */
  real_T s55_constreftoatm;            /* '<S55>/const ref to atm' */
  real_T s111_FuelMult;                /* '<S111>/Merge6' */
  real_T s13_Sum2;                     /* '<S13>/Sum2' */
  real_T s13_Sum1;                     /* '<S13>/Sum1' */
  real_T s13_MinMax[8];                /* '<S13>/MinMax' */
  real_T s111_MakeUpEOI;               /* '<S111>/Merge10' */
  real_T s111_WASTEGATE;               /* '<S111>/Merge11' */
  real_T s794_MinMax1;                 /* '<S794>/MinMax1' */
  real_T s379_Switch1;                 /* '<S379>/Switch1' */
  real_T s421_Sum;                     /* '<S421>/Sum' */
  real_T s401_Sum3;                    /* '<S401>/Sum3' */
  real_T s541_Sum1;                    /* '<S541>/Sum1' */
  real_T s573_Merge;                   /* '<S573>/Merge' */
  real_T s400_Sum3;                    /* '<S400>/Sum3' */
  real_T s545_Sum1;                    /* '<S545>/Sum1' */
  real_T s546_Sum1;                    /* '<S546>/Sum1' */
  real_T s599_Merge;                   /* '<S599>/Merge' */
  real_T s607_Merge;                   /* '<S607>/Merge' */
  real_T s357_Sum1;                    /* '<S357>/Sum1' */
  real_T s718_Sum;                     /* '<S718>/Sum' */
  real_T s719_Sum;                     /* '<S719>/Sum' */
  real_T s721_CrankCounter;            /* '<S721>/CrankCounter' */
  real_T s638_motohawk_interpolation_1d;/* '<S638>/motohawk_interpolation_1d' */
  real_T s630_Merge;                   /* '<S630>/Merge' */
  real_T s637_Merge;                   /* '<S637>/Merge' */
  real_T s656_motohawk_interpolation_1d;/* '<S656>/motohawk_interpolation_1d' */
  real_T s632_Merge;                   /* '<S632>/Merge' */
  real_T s655_Merge;                   /* '<S655>/Merge' */
  real_T s647_motohawk_interpolation_1d;/* '<S647>/motohawk_interpolation_1d' */
  real_T s646_Merge;                   /* '<S646>/Merge' */
  real_T s461_Out;                     /* '<S441>/Chart' */
  real_T s307_Defaultifnoflow[8];      /* '<S307>/Default (if no flow)' */
  real_T s323_Sum1[8];                 /* '<S323>/Sum1' */
  real_T s322_chargemass[8];           /* '<S322>/charge mass' */
  real_T s413_Product;                 /* '<S413>/Product' */
  real_T s412_Product;                 /* '<S412>/Product' */
  real_T s394_Merge;                   /* '<S394>/Merge' */
  real_T s410_Sum2;                    /* '<S410>/Sum2' */
  real_T s385_Switch1;                 /* '<S385>/Switch1' */
  real_T s361_Product1;                /* '<S361>/Product1' */
  real_T s356_Product;                 /* '<S356>/Product' */
  real_T s352_Timer;                   /* '<S347>/Baro Stall State Delay' */
  real_T s302_UnitDelay;               /* '<S302>/Unit Delay' */
  real_T s169_Switch;                  /* '<S169>/Switch' */
  real_T s182_Sum2;                    /* '<S182>/Sum2' */
  real_T s182_Product2;                /* '<S182>/Product2' */
  real_T s183_Product;                 /* '<S183>/Product' */
  real_T s184_Switch1;                 /* '<S184>/Switch1' */
  real_T s173_Switch;                  /* '<S173>/Switch' */
  real_T s122_MultiportSwitch;         /* '<S122>/Multiport Switch' */
  real_T s162_Switch1;                 /* '<S162>/Switch1' */
  real_T s124_Switch1;                 /* '<S124>/Switch1' */
  real_T s160_Sum2;                    /* '<S160>/Sum2' */
  real_T s160_Product2;                /* '<S160>/Product2' */
  real_T s161_Product;                 /* '<S161>/Product' */
  real_T s151_Switch;                  /* '<S151>/Switch' */
  real_T s124_Sum;                     /* '<S124>/Sum' */
  real_T s169_Switch2;                 /* '<S169>/Switch2' */
  real_T s126_MinMax1;                 /* '<S126>/MinMax1' */
  real_T s126_MinMax;                  /* '<S126>/MinMax' */
  real_T s290_Add;                     /* '<S290>/Add' */
  real_T s287_Product;                 /* '<S287>/Product' */
  real_T s132_ApplyOffsetstoBaseSparkAdvance1;/* '<S132>/Apply Offsets to Base Spark Advance1' */
  real_T s293_MinMax1;                 /* '<S293>/MinMax1' */
  real_T s288_Switch;                  /* '<S288>/Switch' */
  real_T s132_motohawk_interpolation_2d1;/* '<S132>/motohawk_interpolation_2d1' */
  real_T s129_Sum;                     /* '<S129>/Sum' */
  real_T s216_DontallowsetpointtoevergoabovetheTargetRPM;/* '<S216>/Don't allow setpoint to ever go above the TargetRPM' */
  real_T s226_Sum2;                    /* '<S226>/Sum2' */
  real_T s226_Product2;                /* '<S226>/Product2' */
  real_T s227_Product;                 /* '<S227>/Product' */
  real_T s228_Switch1;                 /* '<S228>/Switch1' */
  real_T s218_Switch;                  /* '<S218>/Switch' */
  real_T s214_Sum;                     /* '<S214>/Sum' */
  real_T s248_MinMax1;                 /* '<S248>/MinMax1' */
  real_T s238_DontallowsetpointtoeverdropbelowtheTargetRPM;/* '<S238>/Don't allow setpoint to ever drop below the TargetRPM' */
  real_T s264_Sum2;                    /* '<S264>/Sum2' */
  real_T s264_Product2;                /* '<S264>/Product2' */
  real_T s265_Product;                 /* '<S265>/Product' */
  real_T s266_Switch1;                 /* '<S266>/Switch1' */
  real_T s130_MinGovAirPID;            /* '<S130>/Product1' */
  real_T s259_Sum1;                    /* '<S259>/Sum1' */
  real_T s259_Product;                 /* '<S259>/Product' */
  real_T s260_Product;                 /* '<S260>/Product' */
  real_T s130_IdleSpk;                 /* '<S130>/Product' */
  real_T s256_Switch;                  /* '<S256>/Switch' */
  real_T s241_DontallowsetpointtoeverdropbelowtheTargetRPM;/* '<S241>/Don't allow setpoint to ever drop below the TargetRPM' */
  real_T s131_O2FuelMult;              /* '<S131>/Switch' */
  real_T s271_Switch;                  /* '<S271>/Switch' */
  real_T s278_Sum2;                    /* '<S278>/Sum2' */
  real_T s278_Product2;                /* '<S278>/Product2' */
  real_T s280_Switch1;                 /* '<S280>/Switch1' */
  real_T s279_Product;                 /* '<S279>/Product' */
  real_T s276_Switch3;                 /* '<S276>/Switch3' */
  real_T s276_Switch1;                 /* '<S276>/Switch1' */
  real_T s276_Switch4;                 /* '<S276>/Switch4' */
  real_T s198_Add;                     /* '<S198>/Add' */
  real_T s196_FuelFlowMassAirflowEquivalenceRatioAirtofuelRatio;/* '<S196>/Fuel Flow = Mass Airflow * Equivalence Ratio // Air-to-fuel Ratio' */
  real_T s193_PerCylinderMassFlowRate; /* '<S193>/Per-Cylinder Mass Flow Rate' */
  real_T s193_ApplyMultipliersforO2KnockControlandEnrichment1;/* '<S193>/Apply Multipliers for O2, Knock Control, and Enrichment1' */
  real_T s213_MinMax1;                 /* '<S213>/MinMax1' */
  real_T s204_Sum1;                    /* '<S204>/Sum1' */
  real_T s199_Sum;                     /* '<S199>/Sum' */
  real_T s199_Product1;                /* '<S199>/Product1' */
  real_T s202_motohawk_interpolation_1d;/* '<S202>/motohawk_interpolation_1d' */
  real_T s179_Out;                     /* '<S177>/Multiplexed On Stateflow' */
  real_T s178_Out;                     /* '<S176>/Individual On Stateflow' */
  real_T s123_DesEquivRatio;           /* '<S123>/Product1' */
  real_T s106_Sum;                     /* '<S106>/Sum' */
  real_T s15_Sum;                      /* '<S15>/Sum' */
  real_T s91_UnitDelay2;               /* '<S91>/Unit Delay2' */
  real_T s101_Switch1;                 /* '<S101>/Switch1' */
  real_T s54_Switch;                   /* '<S54>/Switch' */
  real_T s22_MultiportSwitch;          /* '<S22>/Multiport Switch' */
  real_T s33_Product;                  /* '<S33>/Product' */
  real_T s32_Switch2;                  /* '<S32>/Switch2' */
  real_T s37_Product;                  /* '<S37>/Product' */
  real_T s29_Sum2;                     /* '<S29>/Sum2' */
  real_T s38_Product;                  /* '<S38>/Product' */
  real_T s29_Product2;                 /* '<S29>/Product2' */
  real_T s39_Switch1;                  /* '<S39>/Switch1' */
  real_T s42_MinMax1;                  /* '<S42>/MinMax1' */
  real_T s12_Switch;                   /* '<S12>/Switch' */
  real_T s43_In1;                      /* '<S43>/In1' */
  real_T s18_TestTime;                 /* '<S12>/ETC Test  Manager' */
  real_T s814_Switch;                  /* '<S814>/Switch' */
  uint32_T s436_motohawk_frequency_in; /* '<S436>/motohawk_frequency_in' */
  uint32_T s537_Sum;                   /* '<S537>/Sum' */
  int16_T s708_motohawk_pwm1;          /* '<S708>/motohawk_pwm1' */
  uint16_T s436_motohawk_ain4;         /* '<S436>/motohawk_ain4' */
  uint16_T s438_motohawk_ain1;         /* '<S438>/motohawk_ain1' */
  uint16_T s438_motohawk_ain2;         /* '<S438>/motohawk_ain2' */
  uint16_T s438_motohawk_ain6;         /* '<S438>/motohawk_ain6' */
  uint16_T s438_motohawk_ain9;         /* '<S438>/motohawk_ain9' */
  uint16_T s437_motohawk_ain3;         /* '<S437>/motohawk_ain3' */
  uint16_T s436_motohawk_ain_read1;    /* '<S436>/motohawk_ain_read1' */
  uint16_T s434_motohawk_ain2;         /* '<S434>/motohawk_ain2' */
  uint16_T s436_motohawk_ain14;        /* '<S436>/motohawk_ain14' */
  uint16_T s436_motohawk_ain2;         /* '<S436>/motohawk_ain2' */
  uint16_T s436_motohawk_ain1;         /* '<S436>/motohawk_ain1' */
  uint16_T s436_motohawk_ain3;         /* '<S436>/motohawk_ain3' */
  uint16_T s705_SparkSequence_o3[8];   /* '<S705>/Spark Sequence' */
  uint16_T s705_SparkSequence_o4[8];   /* '<S705>/Spark Sequence' */
  uint16_T s620_motohawk_ain;          /* '<S620>/motohawk_ain' */
  uint16_T s620_motohawk_ain1;         /* '<S620>/motohawk_ain1' */
  uint16_T s620_motohawk_ain2;         /* '<S620>/motohawk_ain2' */
  index_T s390_motohawk_prelookup1;    /* '<S390>/motohawk_prelookup1' */
  index_T s390_Indexes;                /* '<S390>/motohawk_prelookup5' */
  index_T s388_motohawk_prelookup;     /* '<S388>/motohawk_prelookup' */
  index_T s389_motohawk_prelookup;     /* '<S389>/motohawk_prelookup' */
  index_T s431_motohawk_prelookup1;    /* '<S431>/motohawk_prelookup1' */
  index_T s431_motohawk_prelookup4;    /* '<S431>/motohawk_prelookup4' */
  index_T s351_RPMAccel17Idx;          /* '<S351>/motohawk_prelookup' */
  index_T s391_motohawk_prelookup;     /* '<S391>/motohawk_prelookup' */
  int8_T s14_Merge1[32];               /* '<S14>/Merge1' */
  int8_T s721_DataTypeConversion;      /* '<S721>/Data Type Conversion' */
  int8_T s215_DataTypeConversion;      /* '<S215>/Data Type Conversion' */
  int8_T s215_DataTypeConversion1;     /* '<S215>/Data Type Conversion1' */
  int8_T s91_MultiportSwitch[8];       /* '<S91>/Multiport Switch' */
  int8_T s101_CutArray[8];             /* '<S101>/CutArray' */
  int8_T s18_DC_Override;              /* '<S12>/ETC Test  Manager' */
  int8_T s18_SetpointMode;             /* '<S12>/ETC Test  Manager' */
  uint8_T s399_UnitDelay;              /* '<S399>/Unit Delay' */
  uint8_T s347_motohawk_data_read1;    /* '<S347>/motohawk_data_read1' */
  uint8_T s710_InjectorSequence_o1[8]; /* '<S710>/Injector Sequence' */
  uint8_T s14_DataTypeConversion5;     /* '<S14>/Data Type Conversion5' */
  uint8_T s435_motohawk_encoder_fault; /* '<S435>/motohawk_encoder_fault' */
  uint8_T s435_motohawk_encoder_state; /* '<S435>/motohawk_encoder_state' */
  uint8_T s723_Switch1;                /* '<S723>/Switch1' */
  uint8_T s419_Switch;                 /* '<S419>/Switch' */
  uint8_T s418_State;                  /* '<S399>/Engine State Machine' */
  uint8_T s250_IdleState;              /* '<S235>/IdleStateMachine' */
  uint8_T s91_UnitDelay1;              /* '<S91>/Unit Delay1' */
  uint8_T s101_Switch;                 /* '<S101>/Switch' */
  boolean_T s399_Stall;                /* '<S399>/Relational Operator1' */
  boolean_T s399_Crank;                /* '<S399>/Relational Operator4' */
  boolean_T s399_Run;                  /* '<S399>/Logical Operator1' */
  boolean_T s450_Merge;                /* '<S450>/Merge' */
  boolean_T s367_RelationalOperator4;  /* '<S367>/Relational Operator4' */
  boolean_T s368_RelationalOperator4;  /* '<S368>/Relational Operator4' */
  boolean_T s364_LogicalOperator;      /* '<S364>/Logical Operator' */
  boolean_T s434_motohawk_din;         /* '<S434>/motohawk_din' */
  boolean_T s434_motohawk_din1;        /* '<S434>/motohawk_din1' */
  boolean_T s434_motohawk_din2;        /* '<S434>/motohawk_din2' */
  boolean_T s453_Merge;                /* '<S453>/Merge' */
  boolean_T s491_Merge;                /* '<S491>/Merge' */
  boolean_T s496_Merge;                /* '<S496>/Merge' */
  boolean_T s501_Merge;                /* '<S501>/Merge' */
  boolean_T s505_Merge;                /* '<S505>/Merge' */
  boolean_T s508_Merge;                /* '<S508>/Merge' */
  boolean_T s521_Merge;                /* '<S521>/Merge' */
  boolean_T s526_Merge;                /* '<S526>/Merge' */
  boolean_T s111_AC;                   /* '<S111>/Merge14' */
  boolean_T s712_LogicalOperator;      /* '<S712>/Logical Operator' */
  boolean_T s14_LogicalOperator2[8];   /* '<S14>/Logical Operator2' */
  boolean_T s111_FAN1;                 /* '<S111>/Merge12' */
  boolean_T s744_LogicalOperator;      /* '<S744>/Logical Operator' */
  boolean_T s111_FAN2;                 /* '<S111>/Merge13' */
  boolean_T s745_LogicalOperator;      /* '<S745>/Logical Operator' */
  boolean_T s111_FUELP;                /* '<S111>/Merge7' */
  boolean_T s752_LogicalOperator;      /* '<S752>/Logical Operator' */
  boolean_T s776_Merge[8];             /* '<S776>/Merge' */
  boolean_T s357_LogicalOperator;      /* '<S357>/Logical Operator' */
  boolean_T s705_LogicalOperator1[8];  /* '<S705>/Logical Operator1' */
  boolean_T s721_RelationalOperator1;  /* '<S721>/Relational Operator1' */
  boolean_T s394_RelationalOperator3;  /* '<S394>/Relational Operator3' */
  boolean_T s352_Enable;               /* '<S347>/Baro Stall State Delay' */
  boolean_T s121_LogicalOperator1;     /* '<S121>/Logical Operator1' */
  boolean_T s141_Switch1;              /* '<S141>/Switch1' */
  boolean_T s140_Switch1;              /* '<S140>/Switch1' */
  boolean_T s121_LogicalOperator2;     /* '<S121>/Logical Operator2' */
  boolean_T s121_LogicalOperator4;     /* '<S121>/Logical Operator4' */
  boolean_T s121_LogicalOperator;      /* '<S121>/Logical Operator' */
  boolean_T s169_Switch1;              /* '<S169>/Switch1' */
  boolean_T s190_Switch1;              /* '<S190>/Switch1' */
  boolean_T s191_Switch1;              /* '<S191>/Switch1' */
  boolean_T s192_Switch1;              /* '<S192>/Switch1' */
  boolean_T s215_MultiportSwitch;      /* '<S215>/Multiport Switch' */
  boolean_T s249_RelationalOperator;   /* '<S249>/Relational Operator' */
  boolean_T s235_RelationalOperator;   /* '<S235>/Relational Operator' */
  boolean_T s235_RelationalOperator3;  /* '<S235>/Relational Operator3' */
  boolean_T s235_RelationalOperator1;  /* '<S235>/Relational Operator1' */
  boolean_T s235_LogicalOperator;      /* '<S235>/Logical Operator' */
  boolean_T s235_RelationalOperator5;  /* '<S235>/Relational Operator5' */
  boolean_T s251_RelOp;                /* '<S251>/RelOp' */
  boolean_T s130_HitCrossing1;         /* '<S130>/Hit  Crossing1' */
  boolean_T s130_LogicalOperator;      /* '<S130>/Logical Operator' */
  boolean_T s236_RelationalOperator1;  /* '<S236>/Relational Operator1' */
  boolean_T s232_LogicalOperator1;     /* '<S232>/Logical Operator1' */
  boolean_T s269_LogicalOperator;      /* '<S269>/Logical Operator' */
  boolean_T s269_LogicalOperator3;     /* '<S269>/Logical Operator3' */
  boolean_T s269_RelationalOperator5;  /* '<S269>/Relational Operator5' */
  boolean_T s269_LogicalOperator2;     /* '<S269>/Logical Operator2' */
  boolean_T s195_LogicalOperator2;     /* '<S195>/Logical Operator2' */
  boolean_T s211_LogicalOperator;      /* '<S211>/Logical Operator' */
  boolean_T s150_LogicalOperator1;     /* '<S150>/Logical Operator1' */
  boolean_T s16_OnlyEnableSparkwhenEnergyisAboveZero;/* '<S16>/Only Enable Spark when Energy is Above Zero' */
  boolean_T s90_DataTypeConversion1[8];/* '<S90>/Data Type Conversion1' */
  boolean_T s89_DataTypeConversion[8]; /* '<S89>/Data Type Conversion' */
  boolean_T s23_LogicalOperator3;      /* '<S23>/Logical Operator3' */
  boolean_T s12_RelationalOperator5;   /* '<S12>/Relational Operator5' */
  boolean_T s12_RelationalOperator2;   /* '<S12>/Relational Operator2' */
  boolean_T s12_RelationalOperator3;   /* '<S12>/Relational Operator3' */
  boolean_T s19_LogicalOperator;       /* '<S19>/Logical Operator' */
  boolean_T s26_RelationalOperator;    /* '<S26>/Relational Operator' */
  boolean_T s18_TestComplete;          /* '<S12>/ETC Test  Manager' */
  boolean_T s798_RelationalOperator;   /* '<S798>/Relational Operator' */
  boolean_T s798_motohawk_data_read;   /* '<S798>/motohawk_data_read' */
  boolean_T s802_MPRDState;            /* '<S798>/ECUP Latch' */
  rtB_MultiplyandDivideavoidingdivdebyzero_BaseEngineController_A02_bak2
    s375_MultiplyandDivideavoidingdivdebyzero1;/* '<S375>/Multiply and Divide, avoiding divde by zero1' */
  rtB_MultiplyandDivideavoidingdivdebyzero_BaseEngineController_A02_bak2
    s200_MultiplyandDivideavoidingdivdebyzero;/* '<S200>/Multiply and Divide, avoiding divde by zero' */
} BlockIO_BaseEngineController_A02_bak2;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T s539_UnitDelay1_DSTATE;       /* '<S539>/Unit Delay1' */
  real_T s553_UnitDelay_DSTATE;        /* '<S553>/Unit Delay' */
  real_T s538_UnitDelay_DSTATE;        /* '<S538>/Unit Delay' */
  real_T s660_UnitDelay_DSTATE;        /* '<S660>/Unit Delay' */
  real_T s671_UnitDelay_DSTATE;        /* '<S671>/Unit Delay' */
  real_T s661_UnitDelay_DSTATE;        /* '<S661>/Unit Delay' */
  real_T s681_UnitDelay_DSTATE;        /* '<S681>/Unit Delay' */
  real_T s662_UnitDelay_DSTATE;        /* '<S662>/Unit Delay' */
  real_T s691_UnitDelay_DSTATE;        /* '<S691>/Unit Delay' */
  real_T s663_UnitDelay_DSTATE;        /* '<S663>/Unit Delay' */
  real_T s701_UnitDelay_DSTATE;        /* '<S701>/Unit Delay' */
  real_T s565_UnitDelay_DSTATE;        /* '<S565>/Unit Delay' */
  real_T s540_UnitDelay1_DSTATE;       /* '<S540>/Unit Delay1' */
  real_T s564_UnitDelay_DSTATE;        /* '<S564>/Unit Delay' */
  real_T s562_UnitDelay_DSTATE;        /* '<S562>/Unit Delay' */
  real_T s562_UnitDelay1_DSTATE;       /* '<S562>/Unit Delay1' */
  real_T s562_UnitDelay2_DSTATE;       /* '<S562>/Unit Delay2' */
  real_T s401_UnitDelay_DSTATE;        /* '<S401>/Unit Delay' */
  real_T s619_UnitDelay_DSTATE;        /* '<S619>/Unit Delay' */
  real_T s627_UnitDelay_DSTATE;        /* '<S627>/Unit Delay' */
  real_T s543_UnitDelay1_DSTATE;       /* '<S543>/Unit Delay1' */
  real_T s355_UnitDelay_DSTATE;        /* '<S355>/Unit Delay' */
  real_T s542_UnitDelay1_DSTATE;       /* '<S542>/Unit Delay1' */
  real_T s582_UnitDelay_DSTATE;        /* '<S582>/Unit Delay' */
  real_T s447_UnitDelay_DSTATE;        /* '<S447>/Unit Delay' */
  real_T s517_UnitDelay_DSTATE;        /* '<S517>/Unit Delay' */
  real_T s367_UnitDelay2_DSTATE;       /* '<S367>/Unit Delay2' */
  real_T s370_UnitDelay_DSTATE;        /* '<S370>/Unit Delay' */
  real_T s368_UnitDelay2_DSTATE;       /* '<S368>/Unit Delay2' */
  real_T s373_UnitDelay_DSTATE;        /* '<S373>/Unit Delay' */
  real_T s366_UnitDelay_DSTATE;        /* '<S366>/Unit Delay' */
  real_T s415_UnitDelay_DSTATE;        /* '<S415>/Unit Delay' */
  real_T s417_UnitDelay_DSTATE;        /* '<S417>/Unit Delay' */
  real_T s590_UnitDelay_DSTATE;        /* '<S590>/Unit Delay' */
  real_T s547_UnitDelay1_DSTATE;       /* '<S547>/Unit Delay1' */
  real_T s616_UnitDelay_DSTATE;        /* '<S616>/Unit Delay' */
  real_T s65_UnitDelay_DSTATE;         /* '<S65>/Unit Delay' */
  real_T s64_UnitDelay_DSTATE;         /* '<S64>/Unit Delay' */
  real_T s62_UnitDelay_DSTATE;         /* '<S62>/Unit Delay' */
  real_T s61_UnitDelay_DSTATE;         /* '<S61>/Unit Delay' */
  real_T s60_UnitDelay_DSTATE;         /* '<S60>/Unit Delay' */
  real_T s59_UnitDelay_DSTATE;         /* '<S59>/Unit Delay' */
  real_T s58_UnitDelay_DSTATE;         /* '<S58>/Unit Delay' */
  real_T s57_UnitDelay_DSTATE;         /* '<S57>/Unit Delay' */
  real_T s63_UnitDelay_DSTATE[8];      /* '<S63>/Unit Delay' */
  real_T s379_UnitDelay_DSTATE;        /* '<S379>/Unit Delay' */
  real_T s401_UnitDelay1_DSTATE;       /* '<S401>/Unit Delay1' */
  real_T s541_UnitDelay1_DSTATE;       /* '<S541>/Unit Delay1' */
  real_T s574_UnitDelay_DSTATE;        /* '<S574>/Unit Delay' */
  real_T s545_UnitDelay1_DSTATE;       /* '<S545>/Unit Delay1' */
  real_T s600_UnitDelay_DSTATE;        /* '<S600>/Unit Delay' */
  real_T s546_UnitDelay1_DSTATE;       /* '<S546>/Unit Delay1' */
  real_T s608_UnitDelay_DSTATE;        /* '<S608>/Unit Delay' */
  real_T s367_UnitDelay1_DSTATE;       /* '<S367>/Unit Delay1' */
  real_T s367_UnitDelay3_DSTATE;       /* '<S367>/Unit Delay3' */
  real_T s367_UnitDelay4_DSTATE;       /* '<S367>/Unit Delay4' */
  real_T s368_UnitDelay1_DSTATE;       /* '<S368>/Unit Delay1' */
  real_T s368_UnitDelay3_DSTATE;       /* '<S368>/Unit Delay3' */
  real_T s368_UnitDelay4_DSTATE;       /* '<S368>/Unit Delay4' */
  real_T s718_UnitDelay_DSTATE;        /* '<S718>/Unit Delay' */
  real_T s719_UnitDelay_DSTATE;        /* '<S719>/Unit Delay' */
  real_T s721_CrankCounter_DSTATE;     /* '<S721>/CrankCounter' */
  real_T s630_UnitDelay_DSTATE;        /* '<S630>/Unit Delay' */
  real_T s639_UnitDelay_DSTATE;        /* '<S639>/Unit Delay' */
  real_T s632_UnitDelay_DSTATE;        /* '<S632>/Unit Delay' */
  real_T s657_UnitDelay_DSTATE;        /* '<S657>/Unit Delay' */
  real_T s631_UnitDelay_DSTATE;        /* '<S631>/Unit Delay' */
  real_T s648_UnitDelay_DSTATE;        /* '<S648>/Unit Delay' */
  real_T s323_UnitDelay_DSTATE[8];     /* '<S323>/Unit Delay' */
  real_T s413_UnitDelay1_DSTATE;       /* '<S413>/Unit Delay1' */
  real_T s412_UnitDelay1_DSTATE;       /* '<S412>/Unit Delay1' */
  real_T s394_UnitDelay2_DSTATE;       /* '<S394>/Unit Delay2' */
  real_T s407_UnitDelay_DSTATE;        /* '<S407>/Unit Delay' */
  real_T s410_UnitDelay_DSTATE;        /* '<S410>/Unit Delay' */
  real_T s394_UnitDelay1_DSTATE;       /* '<S394>/Unit Delay1' */
  real_T s394_UnitDelay3_DSTATE;       /* '<S394>/Unit Delay3' */
  real_T s394_UnitDelay4_DSTATE;       /* '<S394>/Unit Delay4' */
  real_T s385_UnitDelay_DSTATE;        /* '<S385>/Unit Delay' */
  real_T s356_UnitDelay1_DSTATE;       /* '<S356>/Unit Delay1' */
  real_T s302_UnitDelay_DSTATE;        /* '<S302>/Unit Delay' */
  real_T s183_UnitDelay_DSTATE;        /* '<S183>/Unit Delay' */
  real_T s184_UnitDelay_DSTATE;        /* '<S184>/Unit Delay' */
  real_T s124_UnitDelay_DSTATE;        /* '<S124>/Unit Delay' */
  real_T s162_UnitDelay_DSTATE;        /* '<S162>/Unit Delay' */
  real_T s152_UnitDelay_DSTATE;        /* '<S152>/Unit Delay' */
  real_T s161_UnitDelay_DSTATE;        /* '<S161>/Unit Delay' */
  real_T s288_UnitDelay_DSTATE;        /* '<S288>/Unit Delay' */
  real_T s216_UnitDelay_DSTATE;        /* '<S216>/Unit Delay' */
  real_T s227_UnitDelay_DSTATE;        /* '<S227>/Unit Delay' */
  real_T s228_UnitDelay_DSTATE;        /* '<S228>/Unit Delay' */
  real_T s253_UnitDelay_DSTATE;        /* '<S253>/Unit Delay' */
  real_T s255_UnitDelay_DSTATE;        /* '<S255>/Unit Delay' */
  real_T s130_UnitDelay3_DSTATE;       /* '<S130>/Unit Delay3' */
  real_T s130_UnitDelay1_DSTATE;       /* '<S130>/Unit Delay1' */
  real_T s234_state_DSTATE;            /* '<S234>/state' */
  real_T s130_UnitDelay2_DSTATE;       /* '<S130>/Unit Delay2' */
  real_T s238_UnitDelay_DSTATE;        /* '<S238>/Unit Delay' */
  real_T s265_UnitDelay_DSTATE;        /* '<S265>/Unit Delay' */
  real_T s266_UnitDelay_DSTATE;        /* '<S266>/Unit Delay' */
  real_T s260_UnitDelay_DSTATE;        /* '<S260>/Unit Delay' */
  real_T s241_UnitDelay_DSTATE;        /* '<S241>/Unit Delay' */
  real_T s280_UnitDelay_DSTATE;        /* '<S280>/Unit Delay' */
  real_T s279_UnitDelay_DSTATE;        /* '<S279>/Unit Delay' */
  real_T s276_UnitDelay1_DSTATE;       /* '<S276>/Unit Delay1' */
  real_T s276_UnitDelay_DSTATE;        /* '<S276>/Unit Delay' */
  real_T s276_UnitDelay2_DSTATE;       /* '<S276>/Unit Delay2' */
  real_T s204_UnitDelay_DSTATE;        /* '<S204>/Unit Delay' */
  real_T s106_UnitDelay_DSTATE;        /* '<S106>/Unit Delay' */
  real_T s91_UnitDelay2_DSTATE;        /* '<S91>/Unit Delay2' */
  real_T s12_UnitDelay_DSTATE;         /* '<S12>/Unit Delay' */
  real_T s46_UnitDelay_DSTATE;         /* '<S46>/Unit Delay' */
  real_T s37_UnitDelay_DSTATE;         /* '<S37>/Unit Delay' */
  real_T s33_UnitDelay_DSTATE;         /* '<S33>/Unit Delay' */
  real_T s35_UnitDelay_DSTATE;         /* '<S35>/Unit Delay' */
  real_T s38_UnitDelay_DSTATE;         /* '<S38>/Unit Delay' */
  real_T s39_UnitDelay_DSTATE;         /* '<S39>/Unit Delay' */
  real_T s804_UnitDelay_DSTATE;        /* '<S804>/Unit Delay' */
  real_T s804_UnitDelay1_DSTATE;       /* '<S804>/Unit Delay1' */
  real_T s352_TOld;                    /* '<S347>/Baro Stall State Delay' */
  real_T s18_TimerOld;                 /* '<S12>/ETC Test  Manager' */
  uint32_T s432_UnitDelay_DSTATE;      /* '<S432>/Unit Delay' */
  uint32_T s537_UnitDelay_DSTATE;      /* '<S537>/Unit Delay' */
  uint32_T s548_motohawk_delta_time_DWORK1;/* '<S548>/motohawk_delta_time' */
  uint32_T s531_motohawk_delta_time_DWORK1;/* '<S531>/motohawk_delta_time' */
  uint32_T s664_motohawk_delta_time_DWORK1;/* '<S664>/motohawk_delta_time' */
  uint32_T s674_motohawk_delta_time_DWORK1;/* '<S674>/motohawk_delta_time' */
  uint32_T s684_motohawk_delta_time_DWORK1;/* '<S684>/motohawk_delta_time' */
  uint32_T s694_motohawk_delta_time_DWORK1;/* '<S694>/motohawk_delta_time' */
  uint32_T s565_motohawk_delta_time_DWORK1;/* '<S565>/motohawk_delta_time' */
  uint32_T s561_motohawk_delta_time_DWORK1;/* '<S561>/motohawk_delta_time' */
  uint32_T s621_motohawk_delta_time_DWORK1;/* '<S621>/motohawk_delta_time' */
  uint32_T s423_motohawk_delta_time_DWORK1;/* '<S423>/motohawk_delta_time' */
  uint32_T s347_motohawk_delta_time_DWORK1;/* '<S347>/motohawk_delta_time' */
  uint32_T s577_motohawk_delta_time_DWORK1;/* '<S577>/motohawk_delta_time' */
  uint32_T s511_motohawk_delta_time_DWORK1;/* '<S511>/motohawk_delta_time' */
  uint32_T s366_motohawk_delta_time1_DWORK1;/* '<S366>/motohawk_delta_time1' */
  uint32_T s415_motohawk_delta_time_DWORK1;/* '<S415>/motohawk_delta_time' */
  uint32_T s473_motohawk_delta_time_DWORK1;/* '<S473>/motohawk_delta_time' */
  uint32_T s474_motohawk_delta_time_DWORK1;/* '<S474>/motohawk_delta_time' */
  uint32_T s475_motohawk_delta_time_DWORK1;/* '<S475>/motohawk_delta_time' */
  uint32_T s476_motohawk_delta_time_DWORK1;/* '<S476>/motohawk_delta_time' */
  uint32_T s477_motohawk_delta_time_DWORK1;/* '<S477>/motohawk_delta_time' */
  uint32_T s492_motohawk_delta_time_DWORK1;/* '<S492>/motohawk_delta_time' */
  uint32_T s497_motohawk_delta_time_DWORK1;/* '<S497>/motohawk_delta_time' */
  uint32_T s502_motohawk_delta_time_DWORK1;/* '<S502>/motohawk_delta_time' */
  uint32_T s522_motohawk_delta_time_DWORK1;/* '<S522>/motohawk_delta_time' */
  uint32_T s527_motohawk_delta_time_DWORK1;/* '<S527>/motohawk_delta_time' */
  uint32_T s585_motohawk_delta_time_DWORK1;/* '<S585>/motohawk_delta_time' */
  uint32_T s611_motohawk_delta_time_DWORK1;/* '<S611>/motohawk_delta_time' */
  uint32_T s756_motohawk_delta_time_DWORK1;/* '<S756>/motohawk_delta_time' */
  uint32_T s425_motohawk_delta_time_DWORK1;/* '<S425>/motohawk_delta_time' */
  uint32_T s421_motohawk_delta_time_DWORK1;/* '<S421>/motohawk_delta_time' */
  uint32_T s569_motohawk_delta_time_DWORK1;/* '<S569>/motohawk_delta_time' */
  uint32_T s595_motohawk_delta_time_DWORK1;/* '<S595>/motohawk_delta_time' */
  uint32_T s603_motohawk_delta_time_DWORK1;/* '<S603>/motohawk_delta_time' */
  uint32_T s379_motohawk_delta_time_DWORK1;/* '<S379>/motohawk_delta_time' */
  uint32_T s633_motohawk_delta_time_DWORK1;/* '<S633>/motohawk_delta_time' */
  uint32_T s651_motohawk_delta_time_DWORK1;/* '<S651>/motohawk_delta_time' */
  uint32_T s642_motohawk_delta_time_DWORK1;/* '<S642>/motohawk_delta_time' */
  uint32_T s314_motohawk_delta_time_DWORK1;/* '<S314>/motohawk_delta_time' */
  uint32_T s313_motohawk_delta_time_DWORK1;/* '<S313>/motohawk_delta_time' */
  uint32_T s317_motohawk_delta_time_DWORK1;/* '<S317>/motohawk_delta_time' */
  uint32_T s316_motohawk_delta_time_DWORK1;/* '<S316>/motohawk_delta_time' */
  uint32_T s318_motohawk_delta_time_DWORK1;/* '<S318>/motohawk_delta_time' */
  uint32_T s328_motohawk_delta_time_DWORK1;/* '<S328>/motohawk_delta_time' */
  uint32_T s329_motohawk_delta_time_DWORK1;/* '<S329>/motohawk_delta_time' */
  uint32_T s330_motohawk_delta_time_DWORK1;/* '<S330>/motohawk_delta_time' */
  uint32_T s346_motohawk_delta_time_DWORK1;/* '<S346>/motohawk_delta_time' */
  uint32_T s345_motohawk_delta_time_DWORK1;/* '<S345>/motohawk_delta_time' */
  uint32_T s321_motohawk_delta_time_DWORK1;/* '<S321>/motohawk_delta_time' */
  uint32_T s325_motohawk_delta_time_DWORK1;/* '<S325>/motohawk_delta_time' */
  uint32_T s410_motohawk_delta_time_DWORK1;/* '<S410>/motohawk_delta_time' */
  uint32_T s394_motohawk_delta_time_DWORK1;/* '<S394>/motohawk_delta_time' */
  uint32_T s385_motohawk_delta_time1_DWORK1;/* '<S385>/motohawk_delta_time1' */
  uint32_T s152_motohawk_delta_time_DWORK1;/* '<S152>/motohawk_delta_time' */
  uint32_T s162_motohawk_delta_time_DWORK1;/* '<S162>/motohawk_delta_time' */
  uint32_T s184_motohawk_delta_time_DWORK1;/* '<S184>/motohawk_delta_time' */
  uint32_T s216_motohawk_delta_time_DWORK1;/* '<S216>/motohawk_delta_time' */
  uint32_T s228_motohawk_delta_time_DWORK1;/* '<S228>/motohawk_delta_time' */
  uint32_T s234_motohawk_delta_time_DWORK1;/* '<S234>/motohawk_delta_time' */
  uint32_T s238_motohawk_delta_time_DWORK1;/* '<S238>/motohawk_delta_time' */
  uint32_T s266_motohawk_delta_time_DWORK1;/* '<S266>/motohawk_delta_time' */
  uint32_T s241_motohawk_delta_time_DWORK1;/* '<S241>/motohawk_delta_time' */
  uint32_T s280_motohawk_delta_time_DWORK1;/* '<S280>/motohawk_delta_time' */
  uint32_T s284_motohawk_delta_time_DWORK1;/* '<S284>/motohawk_delta_time' */
  uint32_T s286_motohawk_delta_time_DWORK1;/* '<S286>/motohawk_delta_time' */
  uint32_T s285_motohawk_delta_time_DWORK1;/* '<S285>/motohawk_delta_time' */
  uint32_T s203_motohawk_delta_time_DWORK1;/* '<S203>/motohawk_delta_time' */
  uint32_T s54_motohawk_delta_time_DWORK1;/* '<S54>/motohawk_delta_time' */
  uint32_T s46_motohawk_delta_time_DWORK1;/* '<S46>/motohawk_delta_time' */
  uint32_T s34_motohawk_delta_time_DWORK1;/* '<S34>/motohawk_delta_time' */
  uint32_T s39_motohawk_delta_time_DWORK1;/* '<S39>/motohawk_delta_time' */
  uint32_T s814_motohawk_delta_time_DWORK1;/* '<S814>/motohawk_delta_time' */
  int_T s130_HitCrossing1_MODE;        /* '<S130>/Hit  Crossing1' */
  uint16_T s710_InjectorSequence_DWORK2;/* '<S710>/Injector Sequence' */
  int8_T s396_UnitDelay_DSTATE;        /* '<S396>/Unit Delay' */
  int8_T s395_UnitDelay_DSTATE;        /* '<S395>/Unit Delay' */
  int8_T s353_UnitDelay_DSTATE;        /* '<S353>/Unit Delay' */
  uint8_T s399_UnitDelay_DSTATE;       /* '<S399>/Unit Delay' */
  uint8_T s419_CrankCounter_DSTATE;    /* '<S419>/CrankCounter' */
  uint8_T s91_UnitDelay1_DSTATE;       /* '<S91>/Unit Delay1' */
  boolean_T s336_UnitDelay_DSTATE;     /* '<S336>/Unit Delay' */
  boolean_T s337_UnitDelay_DSTATE;     /* '<S337>/Unit Delay' */
  boolean_T s342_UnitDelay_DSTATE;     /* '<S342>/Unit Delay' */
  boolean_T s343_UnitDelay_DSTATE;     /* '<S343>/Unit Delay' */
  boolean_T s338_UnitDelay_DSTATE;     /* '<S338>/Unit Delay' */
  boolean_T s344_UnitDelay_DSTATE;     /* '<S344>/Unit Delay' */
  boolean_T s299_UnitDelay_DSTATE;     /* '<S299>/Unit Delay' */
  boolean_T s300_UnitDelay_DSTATE;     /* '<S300>/Unit Delay' */
  boolean_T s301_UnitDelay_DSTATE;     /* '<S301>/Unit Delay' */
  boolean_T s142_UnitDelay_DSTATE;     /* '<S142>/Unit Delay' */
  boolean_T s141_UnitDelay_DSTATE;     /* '<S141>/Unit Delay' */
  boolean_T s140_UnitDelay_DSTATE;     /* '<S140>/Unit Delay' */
  boolean_T s138_UnitDelay_DSTATE;     /* '<S138>/Unit Delay' */
  boolean_T s139_UnitDelay_DSTATE;     /* '<S139>/Unit Delay' */
  boolean_T s170_UnitDelay_DSTATE;     /* '<S170>/Unit Delay' */
  boolean_T s172_UnitDelay_DSTATE;     /* '<S172>/Unit Delay' */
  boolean_T s171_UnitDelay_DSTATE;     /* '<S171>/Unit Delay' */
  boolean_T s190_UnitDelay_DSTATE;     /* '<S190>/Unit Delay' */
  boolean_T s191_UnitDelay_DSTATE;     /* '<S191>/Unit Delay' */
  boolean_T s192_UnitDelay_DSTATE;     /* '<S192>/Unit Delay' */
  boolean_T s291_InitialConditionisTrue_DSTATE;/* '<S291>/Initial Condition is True' */
  boolean_T s129_UnitDelay_DSTATE;     /* '<S129>/Unit Delay' */
  boolean_T s231_UnitDelay_DSTATE;     /* '<S231>/Unit Delay' */
  boolean_T s283_UnitDelay_DSTATE;     /* '<S283>/Unit Delay' */
  boolean_T s36_UnitDelay_DSTATE;      /* '<S36>/Unit Delay' */
  boolean_T s803_UnitDelay8_DSTATE;    /* '<S803>/Unit Delay8' */
  boolean_T s803_UnitDelay6_DSTATE;    /* '<S803>/Unit Delay6' */
  boolean_T s803_UnitDelay7_DSTATE;    /* '<S803>/Unit Delay7' */
  boolean_T s799_UnitDelay_DSTATE;     /* '<S799>/Unit Delay' */
  boolean_T s805_UnitDelay2_DSTATE;    /* '<S805>/Unit Delay2' */
  boolean_T s798_UnitDelay5_DSTATE;    /* '<S798>/Unit Delay5' */
  boolean_T s805_UnitDelay_DSTATE;     /* '<S805>/Unit Delay' */
  boolean_T s805_UnitDelay1_DSTATE;    /* '<S805>/Unit Delay1' */
  boolean_T s798_UnitDelay3_DSTATE;    /* '<S798>/Unit Delay3' */
  boolean_T s798_UnitDelay4_DSTATE;    /* '<S798>/Unit Delay4' */
  uint8_T s437_motohawk_trigger_DWORK1;/* '<S437>/motohawk_trigger' */
  uint8_T s399_motohawk_trigger_DWORK1;/* '<S399>/motohawk_trigger' */
  uint8_T s544_motohawk_trigger5_DWORK1;/* '<S544>/motohawk_trigger5' */
  uint8_T s6_motohawk_trigger1_DWORK1; /* '<S6>/motohawk_trigger1' */
  uint8_T s6_motohawk_trigger_DWORK1;  /* '<S6>/motohawk_trigger' */
  uint8_T s5_motohawk_trigger_DWORK1;  /* '<S5>/motohawk_trigger' */
  uint8_T s721_motohawk_trigger1_DWORK1;/* '<S721>/motohawk_trigger1' */
  uint8_T s461_is_active_c29_BaseEngineController_A02_bak2;/* '<S441>/Chart' */
  uint8_T s461_is_c29_BaseEngineController_A02_bak2;/* '<S441>/Chart' */
  uint8_T s418_is_c2_BaseEngineController_A02_bak2;/* '<S399>/Engine State Machine' */
  uint8_T s352_is_c19_BaseEngineController_A02_bak2;/* '<S347>/Baro Stall State Delay' */
  uint8_T s112_motohawk_trigger1_DWORK1;/* '<S112>/motohawk_trigger1' */
  uint8_T s250_is_active_c12_BaseEngineController_A02_bak2;/* '<S235>/IdleStateMachine' */
  uint8_T s250_is_c12_BaseEngineController_A02_bak2;/* '<S235>/IdleStateMachine' */
  uint8_T s179_is_active_c1_BaseEngineController_A02_bak2;/* '<S177>/Multiplexed On Stateflow' */
  uint8_T s179_is_c1_BaseEngineController_A02_bak2;/* '<S177>/Multiplexed On Stateflow' */
  uint8_T s178_is_active_c3_BaseEngineController_A02_bak2;/* '<S176>/Individual On Stateflow' */
  uint8_T s178_is_c3_BaseEngineController_A02_bak2;/* '<S176>/Individual On Stateflow' */
  uint8_T s91_motohawk_trigger_DWORK1; /* '<S91>/motohawk_trigger' */
  uint8_T s18_is_c9_BaseEngineController_A02_bak2;/* '<S12>/ETC Test  Manager' */
  uint8_T s802_is_c8_BaseEngineController_A02_bak2;/* '<S798>/ECUP Latch' */
  boolean_T s710_InjectorSequence_DWORK1[8];/* '<S710>/Injector Sequence' */
  boolean_T s271_Multiplyby10ifnotyetenabled_FirstOutputTime;/* '<S271>/Multiply by 1.0 if not yet enabled' */
  boolean_T s818_Memory_PreviousInput; /* '<S818>/Memory' */
  boolean_T s7_Stall_MODE;             /* '<S7>/Stall' */
  boolean_T s7_Crank_MODE;             /* '<S7>/Crank' */
  boolean_T s347_CaptureSignalAtStartup_MODE;/* '<S347>/Capture Signal At Startup' */
  boolean_T s350_CaptureECTAtStartup_MODE;/* '<S350>/Capture ECT At Startup' */
  boolean_T s350_CaptureIATAtStartup_MODE;/* '<S350>/Capture IAT At Startup' */
  boolean_T s7_Run_MODE;               /* '<S7>/Run' */
  boolean_T s14_PassThrough1_MODE;     /* '<S14>/PassThrough1' */
  boolean_T s14_PassThrough3_MODE;     /* '<S14>/PassThrough3' */
  boolean_T s14_SequenceCutMachine_MODE;/* '<S14>/SequenceCutMachine' */
  boolean_T s14_PassThrough4_MODE;     /* '<S14>/PassThrough4' */
  boolean_T s6_ElectronicThrottleController_MODE;/* '<S6>/Electronic Throttle Controller' */
  boolean_T s14_PassThrough5_MODE;     /* '<S14>/PassThrough5' */
  boolean_T s396_CollectAverage_MODE;  /* '<S396>/Collect Average' */
  boolean_T s395_CollectAverage_MODE;  /* '<S395>/Collect Average' */
  boolean_T s353_CollectAverage_MODE;  /* '<S353>/Collect Average' */
  boolean_T s194_DeltaTPSTransientFueling_MODE;/* '<S194>/Delta TPS Transient Fueling' */
  boolean_T s199_ECTTransientFueling_MODE;/* '<S199>/ECT Transient Fueling' */
  boolean_T s22_PassThrough_MODE;      /* '<S22>/PassThrough' */
} D_Work_BaseEngineController_A02_bak2;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState HitCrossing1_Input_ZCE;   /* '<S130>/Hit  Crossing1' */
  ZCSigState ResetTasksCompleteToFalse_Trig_ZCE;/* '<S23>/Reset TasksComplete To False' */
  ZCSigState ResetTasksCompleteToTrue_Trig_ZCE;/* '<S12>/Reset TasksComplete To True' */
  ZCSigState ShutdownpoweronECU565563_Trig_ZCE;/* '<S805>/Shutdown power on ECU565//563' */
  ZCSigState SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE;/* '<S805>/Save NV Vars one tick before MPRD off' */
  ZCSigState ProcessorReboot_Trig_ZCE; /* '<S805>/Processor Reboot' */
  ZCSigState PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE;/* '<S805>/Post Shutdown two ticks before MPRD off' */
  ZCSigState ShutdownpoweronECU565563_Trig_ZCE_o;/* '<S803>/Shutdown power on ECU565//563' */
  ZCSigState SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE_i;/* '<S803>/Save NV Vars one tick before MPRD off' */
  ZCSigState ProcessorReboot_Trig_ZCE_b;/* '<S803>/Processor Reboot' */
  ZCSigState PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE_j;/* '<S803>/Post Shutdown two ticks before MPRD off' */
  ZCSigState Clear_Trig_ZCE;           /* '<S801>/Clear' */
  ZCSigState Clear_Trig_ZCE_g;         /* '<S800>/Clear' */
} PrevZCSigStates_BaseEngineController_A02_bak2;

/* Invariant block signals (auto storage) */
typedef struct {
  const real_T s710_Gain4;             /* '<S710>/Gain4' */
  const real_T s114_motohawk_replicate2;/* '<S114>/motohawk_replicate2' */
  const real_T s114_motohawk_replicate[8];/* '<S114>/motohawk_replicate' */
  const uint32_T s710_DataTypeConversion5;/* '<S710>/Data Type Conversion5' */
} ConstBlockIO_BaseEngineController_A02_bak2;

/* Constant parameters (auto storage) */
typedef struct {
  /* Computed Parameter: Logic_table
   * Referenced by: '<S818>/Logic'
   */
  boolean_T Logic_table[16];

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S138>/Combinatorial  Logic'
   *   '<S139>/Combinatorial  Logic'
   *   '<S140>/Combinatorial  Logic'
   *   '<S141>/Combinatorial  Logic'
   *   '<S142>/Combinatorial  Logic'
   *   '<S190>/Combinatorial  Logic'
   *   '<S191>/Combinatorial  Logic'
   *   '<S192>/Combinatorial  Logic'
   *   '<S299>/Combinatorial  Logic'
   *   '<S300>/Combinatorial  Logic'
   *   '<S301>/Combinatorial  Logic'
   *   '<S336>/Combinatorial  Logic'
   *   '<S337>/Combinatorial  Logic'
   *   '<S338>/Combinatorial  Logic'
   *   '<S342>/Combinatorial  Logic'
   *   '<S343>/Combinatorial  Logic'
   *   '<S344>/Combinatorial  Logic'
   *   '<S36>/Combinatorial  Logic'
   *   '<S283>/Combinatorial  Logic'
   */
  boolean_T pooled706[8];
} ConstParam_BaseEngineController_A02_bak2;

/* Real-time Model Data Structure */
struct RT_MODEL_BaseEngineController_A02_bak2 {
  const char_T *errorStatus;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    boolean_T firstInitCondFlag;
  } Timing;
};

/* Block signals (auto storage) */
extern BlockIO_BaseEngineController_A02_bak2 BaseEngineController_A02_bak2_B;

/* Block states (auto storage) */
extern D_Work_BaseEngineController_A02_bak2 BaseEngineController_A02_bak2_DWork;
extern const ConstBlockIO_BaseEngineController_A02_bak2
  BaseEngineController_A02_bak2_ConstB;/* constant block i/o */

/* Constant parameters (auto storage) */
extern const ConstParam_BaseEngineController_A02_bak2
  BaseEngineController_A02_bak2_ConstP;

/* External data declarations for dependent source files */

/* Zero-crossing (trigger) state */
extern PrevZCSigStates_BaseEngineController_A02_bak2
  BaseEngineController_A02_bak2_PrevZCSigState;

/* Model entry point functions */
extern void BaseEngineController_A02_bak2_initialize(boolean_T firstTime);
extern void BaseEngineController_A02_bak2_step(void);
extern void BaseEngineController_A02_bak2_terminate(void);

/* Real-time Model object */
extern struct RT_MODEL_BaseEngineController_A02_bak2 *const
  BaseEngineController_A02_bak2_M;

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
 * '<Root>' : BaseEngineController_A02_bak2
 * '<S1>'   : BaseEngineController_A02_bak2/Foreground
 * '<S2>'   : BaseEngineController_A02_bak2/Main Power Relay
 * '<S3>'   : BaseEngineController_A02_bak2/Foreground/Control
 * '<S4>'   : BaseEngineController_A02_bak2/Foreground/Inputs
 * '<S5>'   : BaseEngineController_A02_bak2/Foreground/Outputs
 * '<S6>'   : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization
 * '<S7>'   : BaseEngineController_A02_bak2/Foreground/Control/Controller
 * '<S8>'   : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics
 * '<S9>'   : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors
 * '<S10>'  : BaseEngineController_A02_bak2/Foreground/Control/motohawk_function_collector
 * '<S11>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/CompareTo
 * '<S12>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller
 * '<S13>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/Injector Characterization
 * '<S14>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/SequenceCutPattern
 * '<S15>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/Spark Advance to Start Angle
 * '<S16>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/Spark Coil Characterization
 * '<S17>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/ETC Sticking Fault
 * '<S18>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/ETC Test  Manager
 * '<S19>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/ETCStallShutDown
 * '<S20>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)
 * '<S21>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/Reset TasksComplete To True
 * '<S22>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/Setpoint Manager
 * '<S23>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/State  Manager
 * '<S24>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/ETC Sticking Fault/ShutDownAdaptMode1
 * '<S25>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/Cals_and_Probes_Page
 * '<S26>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/DamperSwitch
 * '<S27>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/IGain
 * '<S28>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/PGain
 * '<S29>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/PID With Damper Terms
 * '<S30>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/Saturation (Tunable)
 * '<S31>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/DamperSwitch/Filtered Derivative
 * '<S32>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/DamperSwitch/Hysterisis
 * '<S33>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/DamperSwitch/Filtered Derivative/Derivitive2
 * '<S34>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/DamperSwitch/Filtered Derivative/First Order Low Pass (Tunable)
 * '<S35>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/DamperSwitch/Filtered Derivative/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S36>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/DamperSwitch/Hysterisis/Hysteresis
 * '<S37>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/PID With Damper Terms/Derivitive1
 * '<S38>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/PID With Damper Terms/Derivitive3
 * '<S39>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/PID With Damper Terms/Integrator
 * '<S40>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/PID With Damper Terms/Model Info
 * '<S41>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/PID With Damper Terms/Integrator/Saturation
 * '<S42>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/Saturation (Tunable)/Saturation
 * '<S43>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/Setpoint Manager/PassThrough
 * '<S44>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/Setpoint Manager/ShutDownAdaptMode1
 * '<S45>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/Setpoint Manager/Tuning
 * '<S46>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/Setpoint Manager/Variable Rate Limiter
 * '<S47>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/Setpoint Manager/Tuning/Time Since Enabled (With Input)1
 * '<S48>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/Setpoint Manager/Tuning/motohawk_override_abs
 * '<S49>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/Setpoint Manager/Tuning/motohawk_override_abs/NewValue
 * '<S50>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/Setpoint Manager/Tuning/motohawk_override_abs/OldValue
 * '<S51>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/Setpoint Manager/Variable Rate Limiter/Saturation
 * '<S52>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/State  Manager/Reset TasksComplete To False
 * '<S53>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/State  Manager/Stall
 * '<S54>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/State  Manager/Time Since Enabled (With Input)1
 * '<S55>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/Injector Characterization/DeltaPressureIndex
 * '<S56>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets
 * '<S57>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel
 * '<S58>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel1
 * '<S59>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel2
 * '<S60>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel3
 * '<S61>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel4
 * '<S62>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel5
 * '<S63>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel6
 * '<S64>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel7
 * '<S65>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel8
 * '<S66>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel/NewValue
 * '<S67>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel/OldValue
 * '<S68>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel1/NewValue
 * '<S69>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel1/OldValue
 * '<S70>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel2/NewValue
 * '<S71>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel2/OldValue
 * '<S72>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel3/NewValue
 * '<S73>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel3/OldValue
 * '<S74>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel4/NewValue
 * '<S75>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel4/OldValue
 * '<S76>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel5/NewValue
 * '<S77>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel5/OldValue
 * '<S78>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel6/NewValue
 * '<S79>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel6/OldValue
 * '<S80>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel7/NewValue
 * '<S81>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel7/OldValue
 * '<S82>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel8/NewValue
 * '<S83>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel8/OldValue
 * '<S84>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Hard Cycle Cut Pattern
 * '<S85>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Medium Cycle Cut Pattern
 * '<S86>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/PassThrough1
 * '<S87>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/PassThrough2
 * '<S88>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/PassThrough3
 * '<S89>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/PassThrough4
 * '<S90>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/PassThrough5
 * '<S91>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/SequenceCutMachine
 * '<S92>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Soft Cycle Cut Pattern
 * '<S93>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Hard Cycle Cut Pattern/Cycle1CutPatter
 * '<S94>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Hard Cycle Cut Pattern/Cycle2CutPatter
 * '<S95>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Hard Cycle Cut Pattern/Cycle3CutPatter
 * '<S96>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Hard Cycle Cut Pattern/Cycle4CutPatter
 * '<S97>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Medium Cycle Cut Pattern/Cycle1CutPatter
 * '<S98>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Medium Cycle Cut Pattern/Cycle2CutPatter
 * '<S99>'  : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Medium Cycle Cut Pattern/Cycle3CutPatter
 * '<S100>' : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Medium Cycle Cut Pattern/Cycle4CutPatter
 * '<S101>' : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/SequenceCutMachine/SequencyCutMachine
 * '<S102>' : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Soft Cycle Cut Pattern/Cycle1CutPatter
 * '<S103>' : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Soft Cycle Cut Pattern/Cycle2CutPatter
 * '<S104>' : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Soft Cycle Cut Pattern/Cycle3CutPatter
 * '<S105>' : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Soft Cycle Cut Pattern/Cycle4CutPatter
 * '<S106>' : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/Spark Coil Characterization/motohawk_override_rel
 * '<S107>' : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/Spark Coil Characterization/motohawk_override_rel/NewValue
 * '<S108>' : BaseEngineController_A02_bak2/Foreground/Control/ActuatorCharacterization/Spark Coil Characterization/motohawk_override_rel/OldValue
 * '<S109>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Crank
 * '<S110>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Crank State
 * '<S111>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Merge
 * '<S112>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run
 * '<S113>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run State
 * '<S114>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Stall
 * '<S115>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Stall State
 * '<S116>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Crank/Cals_and_Probes_Page
 * '<S117>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Crank/CrankFueling
 * '<S118>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Crank/CrankIAC
 * '<S119>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Crank/IAC Characterization
 * '<S120>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Merge/FuelPump
 * '<S121>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/AC Control
 * '<S122>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/AirFlow Manager
 * '<S123>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Base Equiv Ratio
 * '<S124>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Boost Control
 * '<S125>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Cruise Control
 * '<S126>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/FAN Control
 * '<S127>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Fuel System Manager
 * '<S128>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/IAC Characterization
 * '<S129>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MaxGovernor
 * '<S130>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MinGovernor
 * '<S131>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/O2 Control
 * '<S132>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Spark Manager
 * '<S133>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/AC Control/AC Comp Overspeed
 * '<S134>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/AC Control/AC Comp Overspeed1
 * '<S135>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/AC Control/AC Comp Underspeed
 * '<S136>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/AC Control/AC Evap Temp Hyst
 * '<S137>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/AC Control/AC Pressure Hyst
 * '<S138>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/AC Control/AC Comp Overspeed/Hysteresis
 * '<S139>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/AC Control/AC Comp Overspeed1/Hysteresis
 * '<S140>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/AC Control/AC Comp Underspeed/Hysteresis
 * '<S141>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/AC Control/AC Evap Temp Hyst/Hysteresis
 * '<S142>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/AC Control/AC Pressure Hyst/Hysteresis
 * '<S143>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/AirFlow Manager/CompareTo
 * '<S144>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/AirFlow Manager/Saturation
 * '<S145>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/AirFlow Manager/ShutDownTasksComplete Reset
 * '<S146>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Base Equiv Ratio/Warm Up Fuel Holdoff
 * '<S147>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Base Equiv Ratio/motohawk_override_abs
 * '<S148>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Base Equiv Ratio/motohawk_override_abs/NewValue
 * '<S149>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Base Equiv Ratio/motohawk_override_abs/OldValue
 * '<S150>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Boost Control/BoostControl Adapt
 * '<S151>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Boost Control/Universal PID (Tunable & Scheduled)
 * '<S152>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Boost Control/Variable Rate Limiter
 * '<S153>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Boost Control/BoostControl Adapt/Adapt Boost Table
 * '<S154>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Boost Control/BoostControl Adapt/BoostControl Enable Delay
 * '<S155>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Boost Control/BoostControl Adapt/Saturation (Tunable)
 * '<S156>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Boost Control/BoostControl Adapt/BoostControl Enable Delay/Time Since Enabled (With Input)1
 * '<S157>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Boost Control/BoostControl Adapt/Saturation (Tunable)/Saturation
 * '<S158>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Boost Control/Universal PID (Tunable & Scheduled)/PID Gain Select1
 * '<S159>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Boost Control/Universal PID (Tunable & Scheduled)/Saturation
 * '<S160>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Boost Control/Universal PID (Tunable & Scheduled)/Universal PID
 * '<S161>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Boost Control/Universal PID (Tunable & Scheduled)/Universal PID/Derivitive3
 * '<S162>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Boost Control/Universal PID (Tunable & Scheduled)/Universal PID/Integrator
 * '<S163>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Boost Control/Universal PID (Tunable & Scheduled)/Universal PID/Model Info
 * '<S164>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Boost Control/Universal PID (Tunable & Scheduled)/Universal PID/Integrator/Saturation
 * '<S165>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Boost Control/Variable Rate Limiter/Saturation
 * '<S166>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Cruise Control/Cruise Off
 * '<S167>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Cruise Control/Cruise RSM_SETP
 * '<S168>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Cruise Control/Cruise SETM
 * '<S169>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Cruise Control/Cruise Source Selector
 * '<S170>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Cruise Control/Falling Edge
 * '<S171>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Cruise Control/Rising Edge
 * '<S172>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Cruise Control/Rising Edge1
 * '<S173>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Cruise Control/Universal PID (Tunable & Scheduled)
 * '<S174>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Cruise Control/Cruise RSM_SETP/CompareTo
 * '<S175>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Cruise Control/Cruise RSM_SETP/CompareTo1
 * '<S176>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Cruise Control/Cruise Source Selector/Individual On Setup
 * '<S177>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Cruise Control/Cruise Source Selector/Multiplexed On Setup
 * '<S178>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Cruise Control/Cruise Source Selector/Individual On Setup/Individual On Stateflow
 * '<S179>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Cruise Control/Cruise Source Selector/Multiplexed On Setup/Multiplexed On Stateflow
 * '<S180>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Cruise Control/Universal PID (Tunable & Scheduled)/PID Gain Select1
 * '<S181>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Cruise Control/Universal PID (Tunable & Scheduled)/Saturation
 * '<S182>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Cruise Control/Universal PID (Tunable & Scheduled)/Universal PID
 * '<S183>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Cruise Control/Universal PID (Tunable & Scheduled)/Universal PID/Derivitive3
 * '<S184>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Cruise Control/Universal PID (Tunable & Scheduled)/Universal PID/Integrator
 * '<S185>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Cruise Control/Universal PID (Tunable & Scheduled)/Universal PID/Model Info
 * '<S186>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Cruise Control/Universal PID (Tunable & Scheduled)/Universal PID/Integrator/Saturation
 * '<S187>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/FAN Control/Hysterisis
 * '<S188>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/FAN Control/Hysterisis1
 * '<S189>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/FAN Control/Hysterisis2
 * '<S190>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/FAN Control/Hysterisis/Hysteresis
 * '<S191>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/FAN Control/Hysterisis1/Hysteresis
 * '<S192>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/FAN Control/Hysterisis2/Hysteresis
 * '<S193>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Fuel System Manager/Fuel Calculation
 * '<S194>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager
 * '<S195>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt
 * '<S196>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Fuel System Manager/Fuel Calculation/Calculate Fuel Flow
 * '<S197>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Fuel System Manager/Fuel Calculation/Cals_and_Probes_Page
 * '<S198>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Fuel System Manager/Fuel Calculation/Calculate Fuel Flow/Calculate A//F Ratio
 * '<S199>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling
 * '<S200>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Mass Flow to Charge Mass Transform
 * '<S201>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling/CompareTo2
 * '<S202>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling/ECT Transient Fueling
 * '<S203>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling/First Order Low Pass (Tunable)
 * '<S204>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S205>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Mass Flow to Charge Mass Transform/Multiply and Divide, avoiding divde by zero
 * '<S206>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Mass Flow to Charge Mass Transform/NonZero RPM
 * '<S207>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/Adapt FuelFlowComp Map
 * '<S208>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/Cals_and_Probes_Page
 * '<S209>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/O2 Control Enable Delay
 * '<S210>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/Saturation (Tunable)
 * '<S211>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/WarmUp Disable
 * '<S212>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/O2 Control Enable Delay/Time Since Enabled (With Input)1
 * '<S213>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/Saturation (Tunable)/Saturation
 * '<S214>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MaxGovernor/I-Term Preload
 * '<S215>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MaxGovernor/MaxGovState
 * '<S216>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MaxGovernor/Ramp RPM
 * '<S217>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MaxGovernor/Trigger Pre-load
 * '<S218>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)
 * '<S219>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MaxGovernor/MaxGovState/MaxGOV Stateflow
 * '<S220>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MaxGovernor/Trigger Pre-load/InGear
 * '<S221>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MaxGovernor/Trigger Pre-load/InNeutral
 * '<S222>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MaxGovernor/Trigger Pre-load/InGear/Saturation
 * '<S223>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MaxGovernor/Trigger Pre-load/InNeutral/Saturation
 * '<S224>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Cals_and_Probes_Page
 * '<S225>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Saturation
 * '<S226>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Universal PID
 * '<S227>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Derivitive3
 * '<S228>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Integrator
 * '<S229>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Model Info
 * '<S230>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Integrator/Saturation
 * '<S231>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MinGovernor/AiflowOffset
 * '<S232>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MinGovernor/Base Airflow Table Adapt
 * '<S233>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MinGovernor/Base RPM Set Pt
 * '<S234>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MinGovernor/Handoff Alpha
 * '<S235>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination
 * '<S236>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MinGovernor/MotoringDetection
 * '<S237>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MinGovernor/OnIdle State
 * '<S238>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MinGovernor/Ramp RPM
 * '<S239>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MinGovernor/Universal PD (Tunable & Scheduled)
 * '<S240>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)
 * '<S241>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MinGovernor/AiflowOffset/Ramp Air Into Idle State
 * '<S242>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MinGovernor/AiflowOffset/Run
 * '<S243>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MinGovernor/Base Airflow Table Adapt/Adapt Base Airflow Table
 * '<S244>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MinGovernor/Base Airflow Table Adapt/Idle Control Enable Delay
 * '<S245>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MinGovernor/Base Airflow Table Adapt/Saturation (Tunable)
 * '<S246>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MinGovernor/Base Airflow Table Adapt/Idle Control Enable Delay/Time Since Enabled (With Input)1
 * '<S247>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MinGovernor/Base Airflow Table Adapt/Saturation (Tunable)/Saturation
 * '<S248>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MinGovernor/Handoff Alpha/Saturation
 * '<S249>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/Determine if RPM is Falling
 * '<S250>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/IdleStateMachine
 * '<S251>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/OnIdle State
 * '<S252>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/Time Since Enabled (With Input)1
 * '<S253>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/Determine if RPM is Falling/Derivitive
 * '<S254>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/Determine if RPM is Falling/First Order Low Pass (Tunable)
 * '<S255>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/Determine if RPM is Falling/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S256>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MinGovernor/MotoringDetection/Time Since Enabled (With Input)2
 * '<S257>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MinGovernor/Universal PD (Tunable & Scheduled)/PID Gain Select
 * '<S258>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MinGovernor/Universal PD (Tunable & Scheduled)/Saturation
 * '<S259>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MinGovernor/Universal PD (Tunable & Scheduled)/Universal PD
 * '<S260>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MinGovernor/Universal PD (Tunable & Scheduled)/Universal PD/Derivitive
 * '<S261>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MinGovernor/Universal PD (Tunable & Scheduled)/Universal PD/Model Info
 * '<S262>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/PID Gain Select1
 * '<S263>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/Saturation
 * '<S264>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/Universal PID
 * '<S265>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Derivitive3
 * '<S266>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Integrator
 * '<S267>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Model Info
 * '<S268>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Integrator/Saturation
 * '<S269>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/O2 Control/O2 Control State Determination
 * '<S270>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/O2 Control/O2 PID Calibrations
 * '<S271>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller
 * '<S272>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/O2 Control/O2 Control State Determination/Cals_and_Probes_Page
 * '<S273>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/O2 Control/O2 PID Calibrations/Error Gain Scheduling
 * '<S274>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/O2 Control/O2 PID Calibrations/O2 Control Switch Point Maps
 * '<S275>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Closed-Loop O2 PID Controller
 * '<S276>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Equivalence Ratio Perturbation
 * '<S277>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Closed-Loop O2 PID Controller/Saturation
 * '<S278>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Closed-Loop O2 PID Controller/Universal PID
 * '<S279>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Closed-Loop O2 PID Controller/Universal PID/Derivitive3
 * '<S280>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Closed-Loop O2 PID Controller/Universal PID/Integrator
 * '<S281>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Closed-Loop O2 PID Controller/Universal PID/Model Info
 * '<S282>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Closed-Loop O2 PID Controller/Universal PID/Integrator/Saturation
 * '<S283>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Equivalence Ratio Perturbation/Hysteresis
 * '<S284>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Equivalence Ratio Perturbation/Time Since Enabled (With Input)1
 * '<S285>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Equivalence Ratio Perturbation/Time Since Enabled (With Input)2
 * '<S286>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Equivalence Ratio Perturbation/Time Since Enabled (With Input)3
 * '<S287>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Spark Manager/Ethanol Spark Offset
 * '<S288>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Spark Manager/Spark Advance Rate Limiter
 * '<S289>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Spark Manager/SparkAdvanceLimiter
 * '<S290>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Spark Manager/Temp Comp Offset
 * '<S291>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Spark Manager/Spark Advance Rate Limiter/First Time
 * '<S292>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Spark Manager/Spark Advance Rate Limiter/Saturation
 * '<S293>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Spark Manager/SparkAdvanceLimiter/Saturation
 * '<S294>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Stall/FAN Control
 * '<S295>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Stall/Fuel Pump at Startup
 * '<S296>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Stall/FAN Control/Hysterisis
 * '<S297>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Stall/FAN Control/Hysterisis1
 * '<S298>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Stall/FAN Control/Hysterisis2
 * '<S299>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Stall/FAN Control/Hysterisis/Hysteresis
 * '<S300>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Stall/FAN Control/Hysterisis1/Hysteresis
 * '<S301>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Stall/FAN Control/Hysterisis2/Hysteresis
 * '<S302>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Stall/Fuel Pump at Startup/Time Since Enabled
 * '<S303>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/AC Fault
 * '<S304>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/Boost Fault
 * '<S305>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/Cruise Fault
 * '<S306>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/Engine Overheat Fault Logic
 * '<S307>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/Fuel Economy
 * '<S308>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/Low Oil Pressure Fault Logic
 * '<S309>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/MAP Fault Logic
 * '<S310>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/Overspeed Protection
 * '<S311>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/Wrong Fuel Pressure Fault Logic
 * '<S312>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/AC Fault/Run State
 * '<S313>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/AC Fault/Time Since Enabled (With Input)1
 * '<S314>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/AC Fault/Time Since Enabled (With Input)2
 * '<S315>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/Boost Fault/Run State
 * '<S316>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/Boost Fault/Time Since Enabled (With Input)1
 * '<S317>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/Boost Fault/Time Since Enabled (With Input)2
 * '<S318>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/Boost Fault/Time Since Enabled (With Input)3
 * '<S319>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/Engine Overheat Fault Logic/Run State
 * '<S320>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/Fuel Economy/Calculate Fuel Density
 * '<S321>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/Fuel Economy/First Order Low Pass (Tunable)
 * '<S322>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/Fuel Economy/Multiply and Divide, avoiding divde by zero1
 * '<S323>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/Fuel Economy/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S324>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/Low Oil Pressure Fault Logic/Run State
 * '<S325>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/Low Oil Pressure Fault Logic/Time Since Enabled (With Input)2
 * '<S326>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/MAP Fault Logic/Cals_and_Probes_Page
 * '<S327>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/MAP Fault Logic/Run State
 * '<S328>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/MAP Fault Logic/Time Since Enabled (With Input)1
 * '<S329>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/MAP Fault Logic/Time Since Enabled (With Input)2
 * '<S330>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/MAP Fault Logic/Time Since Enabled (With Input)3
 * '<S331>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/Overspeed Protection/BaseRevLimit
 * '<S332>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/Overspeed Protection/TwoStepRevLimit
 * '<S333>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/Overspeed Protection/BaseRevLimit/Hysterisis
 * '<S334>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/Overspeed Protection/BaseRevLimit/Hysterisis1
 * '<S335>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/Overspeed Protection/BaseRevLimit/Hysterisis2
 * '<S336>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/Overspeed Protection/BaseRevLimit/Hysterisis/Hysteresis
 * '<S337>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/Overspeed Protection/BaseRevLimit/Hysterisis1/Hysteresis
 * '<S338>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/Overspeed Protection/BaseRevLimit/Hysterisis2/Hysteresis
 * '<S339>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/Overspeed Protection/TwoStepRevLimit/Hysterisis
 * '<S340>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/Overspeed Protection/TwoStepRevLimit/Hysterisis1
 * '<S341>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/Overspeed Protection/TwoStepRevLimit/Hysterisis2
 * '<S342>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/Overspeed Protection/TwoStepRevLimit/Hysterisis/Hysteresis
 * '<S343>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/Overspeed Protection/TwoStepRevLimit/Hysterisis1/Hysteresis
 * '<S344>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/Overspeed Protection/TwoStepRevLimit/Hysterisis2/Hysteresis
 * '<S345>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/Wrong Fuel Pressure Fault Logic/Time Since Enabled (With Input)1
 * '<S346>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/Wrong Fuel Pressure Fault Logic/Time Since Enabled (With Input)2
 * '<S347>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/AirCalcs
 * '<S348>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/LoadBasedCalcs
 * '<S349>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/Raw Indexes
 * '<S350>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/RawProcessed
 * '<S351>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/Virtual Indexes
 * '<S352>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/AirCalcs/Baro Stall State Delay
 * '<S353>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/AirCalcs/Capture Signal At Startup
 * '<S354>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/AirCalcs/Speed Density - MAP Referenced - Adaptive
 * '<S355>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/AirCalcs/motohawk_override_rel
 * '<S356>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/AirCalcs/Capture Signal At Startup/Collect Average
 * '<S357>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/AirCalcs/Speed Density - MAP Referenced - Adaptive/Adapt Volumetric Efficiency
 * '<S358>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/AirCalcs/Speed Density - MAP Referenced - Adaptive/C to K1
 * '<S359>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/AirCalcs/Speed Density - MAP Referenced - Adaptive/Adapt Volumetric Efficiency/Adapt VolEff Map
 * '<S360>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/AirCalcs/Speed Density - MAP Referenced - Adaptive/Adapt Volumetric Efficiency/Safe Divide
 * '<S361>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/AirCalcs/Speed Density - MAP Referenced - Adaptive/Adapt Volumetric Efficiency/Safe Divide/Subsystem
 * '<S362>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/AirCalcs/motohawk_override_rel/NewValue
 * '<S363>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/AirCalcs/motohawk_override_rel/OldValue
 * '<S364>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag
 * '<S365>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/LoadBasedCalcs/Load, Torque, Power, Work - Using APC
 * '<S366>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/LoadBasedCalcs/Normalized Effective Combustion Chamber Temperature
 * '<S367>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect1
 * '<S368>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect3
 * '<S369>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect1/DecreasingFilter
 * '<S370>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect1/First Order Low Pass
 * '<S371>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect1/IncreasingFilter
 * '<S372>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect3/DecreasingFilter
 * '<S373>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect3/First Order Low Pass
 * '<S374>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect3/IncreasingFilter
 * '<S375>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/LoadBasedCalcs/Load, Torque, Power, Work - Using APC/Air Per Cylinder Calculation
 * '<S376>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/LoadBasedCalcs/Load, Torque, Power, Work - Using APC/Calculate Power and Work
 * '<S377>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/LoadBasedCalcs/Load, Torque, Power, Work - Using APC/Air Per Cylinder Calculation/Multiply and Divide, avoiding divde by zero1
 * '<S378>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/LoadBasedCalcs/Load, Torque, Power, Work - Using APC/Air Per Cylinder Calculation/NonZero RPM
 * '<S379>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/LoadBasedCalcs/Load, Torque, Power, Work - Using APC/Calculate Power and Work/Integrate Power to Compute Work
 * '<S380>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/LoadBasedCalcs/Load, Torque, Power, Work - Using APC/Calculate Power and Work/Stall
 * '<S381>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/LoadBasedCalcs/Load, Torque, Power, Work - Using APC/Calculate Power and Work/Integrate Power to Compute Work/Saturation
 * '<S382>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/LoadBasedCalcs/Normalized Effective Combustion Chamber Temperature/CompareTo
 * '<S383>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/LoadBasedCalcs/Normalized Effective Combustion Chamber Temperature/Integrate Offset To ECT
 * '<S384>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/LoadBasedCalcs/Normalized Effective Combustion Chamber Temperature/Saturation
 * '<S385>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/LoadBasedCalcs/Normalized Effective Combustion Chamber Temperature/Integrate Offset To ECT/Integrator
 * '<S386>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/LoadBasedCalcs/Normalized Effective Combustion Chamber Temperature/Integrate Offset To ECT/Integrator/Saturation
 * '<S387>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/Raw Indexes/ACPres Index
 * '<S388>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/Raw Indexes/ECT Index
 * '<S389>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/Raw Indexes/IAT Indexes
 * '<S390>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/Raw Indexes/RPM Indexes
 * '<S391>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/Raw Indexes/SysVolt Index
 * '<S392>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/Raw Indexes/TPS Indexes
 * '<S393>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/RawProcessed/APP  Sensor Arbitration1
 * '<S394>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request
 * '<S395>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/RawProcessed/Capture ECT At Startup
 * '<S396>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/RawProcessed/Capture IAT At Startup
 * '<S397>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/RawProcessed/CutThrottle APP Limiting
 * '<S398>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/RawProcessed/Engine Accel
 * '<S399>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/RawProcessed/EngineState
 * '<S400>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/RawProcessed/Fuel Delta Pressure Calculation
 * '<S401>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/RawProcessed/O2 De-lag
 * '<S402>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/RawProcessed/Stall
 * '<S403>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/RawProcessed/TPS  Sensor Arbitration
 * '<S404>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/RawProcessed/Time Since Key On
 * '<S405>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/RawProcessed/Time Since Run
 * '<S406>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/RawProcessed/Time Since Stall
 * '<S407>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request/First Order Low Pass
 * '<S408>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request/PassThrough1
 * '<S409>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request/PassThrough2
 * '<S410>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request/Variable Rate Limiter
 * '<S411>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request/Variable Rate Limiter/Saturation
 * '<S412>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/RawProcessed/Capture ECT At Startup/Collect Average
 * '<S413>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/RawProcessed/Capture IAT At Startup/Collect Average
 * '<S414>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/RawProcessed/CutThrottle APP Limiting/Bound APP if overheating
 * '<S415>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/RawProcessed/Engine Accel/Derivitive3
 * '<S416>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/RawProcessed/Engine Accel/First Order Low Pass (Tunable)
 * '<S417>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/RawProcessed/Engine Accel/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S418>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/RawProcessed/EngineState/Engine State Machine
 * '<S419>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/RawProcessed/EngineState/TDC_Counter
 * '<S420>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/RawProcessed/EngineState/TDC_Counter/Crank State
 * '<S421>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/RawProcessed/Time Since Key On/Time Since Enabled (With Input)2
 * '<S422>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/RawProcessed/Time Since Run/RunState
 * '<S423>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/RawProcessed/Time Since Run/Time Since Enabled (With Input)2
 * '<S424>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/RawProcessed/Time Since Stall/Stall State
 * '<S425>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/RawProcessed/Time Since Stall/Time Since Enabled (With Input)1
 * '<S426>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/Virtual Indexes/ECT_KeyUp
 * '<S427>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/Virtual Indexes/IAT_KeyUp
 * '<S428>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/Virtual Indexes/MAFPortIndex
 * '<S429>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/Virtual Indexes/NECCT Index
 * '<S430>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/Virtual Indexes/Power Index
 * '<S431>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/Virtual Indexes/Torque Indexes
 * '<S432>' : BaseEngineController_A02_bak2/Foreground/Control/motohawk_function_collector/motohawk_function_collector_in
 * '<S433>' : BaseEngineController_A02_bak2/Foreground/Control/motohawk_function_collector/motohawk_function_collector_in/Triggered Subsystem
 * '<S434>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital
 * '<S435>' : BaseEngineController_A02_bak2/Foreground/Inputs/EngineSpeed
 * '<S436>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors
 * '<S437>' : BaseEngineController_A02_bak2/Foreground/Inputs/NonLinearSensors
 * '<S438>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors
 * '<S439>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/ACSw
 * '<S440>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Brake
 * '<S441>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Cruise Control
 * '<S442>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/CruiseON
 * '<S443>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/CruiseRSM_SETP
 * '<S444>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/CruiseSETM
 * '<S445>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/ESTOP
 * '<S446>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/GearState
 * '<S447>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/MAF_Sensor
 * '<S448>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Scramble
 * '<S449>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Two Step
 * '<S450>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/ACSw /Override in Engineering Units
 * '<S451>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/ACSw /Override in Engineering Units/NewValue
 * '<S452>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/ACSw /Override in Engineering Units/OldValue
 * '<S453>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Brake /Override in Engineering Units
 * '<S454>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Brake /Override in Engineering Units/NewValue
 * '<S455>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Brake /Override in Engineering Units/OldValue
 * '<S456>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Cruise Control/Button Delay 1
 * '<S457>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Cruise Control/Button Delay 2
 * '<S458>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Cruise Control/Button Delay 3
 * '<S459>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Cruise Control/Button Delay 4
 * '<S460>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Cruise Control/Button Delay 5
 * '<S461>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Cruise Control/Chart
 * '<S462>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Cruise Control/Compare To Constant
 * '<S463>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Cruise Control/Compare To Constant1
 * '<S464>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Cruise Control/Compare To Constant2
 * '<S465>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Cruise Control/Compare To Constant3
 * '<S466>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Cruise Control/Compare To Constant4
 * '<S467>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Cruise Control/motohawk_override_abs1
 * '<S468>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Cruise Control/motohawk_override_abs12
 * '<S469>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Cruise Control/motohawk_override_abs2
 * '<S470>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Cruise Control/motohawk_override_abs3
 * '<S471>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Cruise Control/motohawk_override_abs4
 * '<S472>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Cruise Control/motohawk_override_abs5
 * '<S473>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Cruise Control/Button Delay 1/Time Since Enabled (With Input)4
 * '<S474>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Cruise Control/Button Delay 2/Time Since Enabled (With Input)4
 * '<S475>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Cruise Control/Button Delay 3/Time Since Enabled (With Input)4
 * '<S476>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Cruise Control/Button Delay 4/Time Since Enabled (With Input)4
 * '<S477>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Cruise Control/Button Delay 5/Time Since Enabled (With Input)4
 * '<S478>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Cruise Control/motohawk_override_abs1/NewValue
 * '<S479>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Cruise Control/motohawk_override_abs1/OldValue
 * '<S480>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Cruise Control/motohawk_override_abs12/NewValue
 * '<S481>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Cruise Control/motohawk_override_abs12/OldValue
 * '<S482>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Cruise Control/motohawk_override_abs2/NewValue
 * '<S483>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Cruise Control/motohawk_override_abs2/OldValue
 * '<S484>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Cruise Control/motohawk_override_abs3/NewValue
 * '<S485>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Cruise Control/motohawk_override_abs3/OldValue
 * '<S486>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Cruise Control/motohawk_override_abs4/NewValue
 * '<S487>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Cruise Control/motohawk_override_abs4/OldValue
 * '<S488>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Cruise Control/motohawk_override_abs5/NewValue
 * '<S489>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Cruise Control/motohawk_override_abs5/OldValue
 * '<S490>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/CruiseON /Button Delay 1
 * '<S491>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/CruiseON /Override in Engineering Units
 * '<S492>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/CruiseON /Button Delay 1/Time Since Enabled (With Input)4
 * '<S493>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/CruiseON /Override in Engineering Units/NewValue
 * '<S494>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/CruiseON /Override in Engineering Units/OldValue
 * '<S495>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/CruiseRSM_SETP /Button Delay 1
 * '<S496>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/CruiseRSM_SETP /Override in Engineering Units
 * '<S497>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/CruiseRSM_SETP /Button Delay 1/Time Since Enabled (With Input)4
 * '<S498>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/CruiseRSM_SETP /Override in Engineering Units/NewValue
 * '<S499>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/CruiseRSM_SETP /Override in Engineering Units/OldValue
 * '<S500>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/CruiseSETM /Button Delay 1
 * '<S501>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/CruiseSETM /Override in Engineering Units
 * '<S502>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/CruiseSETM /Button Delay 1/Time Since Enabled (With Input)4
 * '<S503>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/CruiseSETM /Override in Engineering Units/NewValue
 * '<S504>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/CruiseSETM /Override in Engineering Units/OldValue
 * '<S505>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/ESTOP/Override in Engineering Units
 * '<S506>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/ESTOP/Override in Engineering Units/NewValue
 * '<S507>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/ESTOP/Override in Engineering Units/OldValue
 * '<S508>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/GearState/Override in Engineering Units
 * '<S509>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/GearState/Override in Engineering Units/NewValue
 * '<S510>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/GearState/Override in Engineering Units/OldValue
 * '<S511>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/MAF_Sensor/First Order Low Pass
 * '<S512>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/MAF_Sensor/If Action Subsystem
 * '<S513>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/MAF_Sensor/If Action Subsystem1
 * '<S514>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/MAF_Sensor/If Action Subsystem2
 * '<S515>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/MAF_Sensor/Override
 * '<S516>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/MAF_Sensor/motohawk_table_1d1
 * '<S517>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/MAF_Sensor/First Order Low Pass/First Order Low Pass
 * '<S518>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/MAF_Sensor/Override/NewValue
 * '<S519>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/MAF_Sensor/Override/OldValue
 * '<S520>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Scramble /Button Delay 1
 * '<S521>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Scramble /Override in Engineering Units
 * '<S522>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Scramble /Button Delay 1/Time Since Enabled (With Input)4
 * '<S523>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Scramble /Override in Engineering Units/NewValue
 * '<S524>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Scramble /Override in Engineering Units/OldValue
 * '<S525>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Two Step/Button Delay 1
 * '<S526>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Two Step/Override in Engineering Units
 * '<S527>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Two Step/Button Delay 1/Time Since Enabled (With Input)4
 * '<S528>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Two Step/Override in Engineering Units/NewValue
 * '<S529>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Two Step/Override in Engineering Units/OldValue
 * '<S530>' : BaseEngineController_A02_bak2/Foreground/Inputs/EngineSpeed/Encoder Diagnostics
 * '<S531>' : BaseEngineController_A02_bak2/Foreground/Inputs/EngineSpeed/First Order Low Pass (Tunable)1
 * '<S532>' : BaseEngineController_A02_bak2/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/CamEdges
 * '<S533>' : BaseEngineController_A02_bak2/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/CamSync
 * '<S534>' : BaseEngineController_A02_bak2/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/CounterThresh
 * '<S535>' : BaseEngineController_A02_bak2/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/CrankEdges
 * '<S536>' : BaseEngineController_A02_bak2/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/CrankSync
 * '<S537>' : BaseEngineController_A02_bak2/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/motohawk_model_probe_eval_f
 * '<S538>' : BaseEngineController_A02_bak2/Foreground/Inputs/EngineSpeed/First Order Low Pass (Tunable)1/First Order Low Pass
 * '<S539>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/ACPres
 * '<S540>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/FuelOxygenationSensor
 * '<S541>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/FuelPres
 * '<S542>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/MAP
 * '<S543>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/MAPTime
 * '<S544>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/MAP_Crank_Synchronous
 * '<S545>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/OilPres
 * '<S546>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/SensVolts
 * '<S547>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/SysVolts
 * '<S548>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/ACPres /First Order Low Pass
 * '<S549>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/ACPres /If Action Subsystem
 * '<S550>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/ACPres /If Action Subsystem1
 * '<S551>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/ACPres /If Action Subsystem2
 * '<S552>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/ACPres /Override
 * '<S553>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/ACPres /First Order Low Pass/First Order Low Pass
 * '<S554>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/ACPres /Override/NewValue
 * '<S555>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/ACPres /Override/OldValue
 * '<S556>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options
 * '<S557>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/If Action Subsystem
 * '<S558>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/If Action Subsystem1
 * '<S559>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/If Action Subsystem2
 * '<S560>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Override
 * '<S561>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options/First Order Low Pass
 * '<S562>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options/Moving Average Filter
 * '<S563>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options/Rate Limiter
 * '<S564>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options/First Order Low Pass/First Order Low Pass
 * '<S565>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options/Rate Limiter/Variable Rate Limiter
 * '<S566>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options/Rate Limiter/Variable Rate Limiter/Saturation
 * '<S567>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Override/NewValue
 * '<S568>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Override/OldValue
 * '<S569>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/FuelPres/First Order Low Pass
 * '<S570>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/FuelPres/If Action Subsystem
 * '<S571>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/FuelPres/If Action Subsystem1
 * '<S572>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/FuelPres/If Action Subsystem2
 * '<S573>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/FuelPres/Override
 * '<S574>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/FuelPres/First Order Low Pass/First Order Low Pass
 * '<S575>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/FuelPres/Override/NewValue
 * '<S576>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/FuelPres/Override/OldValue
 * '<S577>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/MAP/First Order Low Pass
 * '<S578>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/MAP/If Action Subsystem
 * '<S579>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/MAP/If Action Subsystem1
 * '<S580>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/MAP/If Action Subsystem2
 * '<S581>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/MAP/Override
 * '<S582>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/MAP/First Order Low Pass/First Order Low Pass
 * '<S583>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/MAP/Override/NewValue
 * '<S584>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/MAP/Override/OldValue
 * '<S585>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/MAPTime/First Order Low Pass
 * '<S586>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/MAPTime/If Action Subsystem
 * '<S587>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/MAPTime/If Action Subsystem1
 * '<S588>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/MAPTime/If Action Subsystem2
 * '<S589>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/MAPTime/Override
 * '<S590>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/MAPTime/First Order Low Pass/First Order Low Pass
 * '<S591>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/MAPTime/Override/NewValue
 * '<S592>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/MAPTime/Override/OldValue
 * '<S593>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/MAP_Crank_Synchronous/MID_TDC
 * '<S594>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/MAP_Crank_Synchronous/Once at Startup
 * '<S595>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/OilPres/First Order Low Pass
 * '<S596>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/OilPres/If Action Subsystem
 * '<S597>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/OilPres/If Action Subsystem1
 * '<S598>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/OilPres/If Action Subsystem2
 * '<S599>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/OilPres/Override
 * '<S600>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/OilPres/First Order Low Pass/First Order Low Pass
 * '<S601>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/OilPres/Override/NewValue
 * '<S602>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/OilPres/Override/OldValue
 * '<S603>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/SensVolts/First Order Low Pass
 * '<S604>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/SensVolts/If Action Subsystem
 * '<S605>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/SensVolts/If Action Subsystem1
 * '<S606>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/SensVolts/If Action Subsystem2
 * '<S607>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/SensVolts/Override
 * '<S608>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/SensVolts/First Order Low Pass/First Order Low Pass
 * '<S609>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/SensVolts/Override/NewValue
 * '<S610>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/SensVolts/Override/OldValue
 * '<S611>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/SysVolts/First Order Low Pass
 * '<S612>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/SysVolts/If Action Subsystem
 * '<S613>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/SysVolts/If Action Subsystem1
 * '<S614>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/SysVolts/If Action Subsystem2
 * '<S615>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/SysVolts/Override
 * '<S616>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/SysVolts/First Order Low Pass/First Order Low Pass
 * '<S617>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/SysVolts/Override/NewValue
 * '<S618>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/SysVolts/Override/OldValue
 * '<S619>' : BaseEngineController_A02_bak2/Foreground/Inputs/NonLinearSensors/O2_PreCat
 * '<S620>' : BaseEngineController_A02_bak2/Foreground/Inputs/NonLinearSensors/Temp Sensors
 * '<S621>' : BaseEngineController_A02_bak2/Foreground/Inputs/NonLinearSensors/O2_PreCat/First Order Low Pass
 * '<S622>' : BaseEngineController_A02_bak2/Foreground/Inputs/NonLinearSensors/O2_PreCat/If Action Subsystem
 * '<S623>' : BaseEngineController_A02_bak2/Foreground/Inputs/NonLinearSensors/O2_PreCat/If Action Subsystem1
 * '<S624>' : BaseEngineController_A02_bak2/Foreground/Inputs/NonLinearSensors/O2_PreCat/If Action Subsystem2
 * '<S625>' : BaseEngineController_A02_bak2/Foreground/Inputs/NonLinearSensors/O2_PreCat/Override
 * '<S626>' : BaseEngineController_A02_bak2/Foreground/Inputs/NonLinearSensors/O2_PreCat/motohawk_table_1d1
 * '<S627>' : BaseEngineController_A02_bak2/Foreground/Inputs/NonLinearSensors/O2_PreCat/First Order Low Pass/First Order Low Pass
 * '<S628>' : BaseEngineController_A02_bak2/Foreground/Inputs/NonLinearSensors/O2_PreCat/Override/NewValue
 * '<S629>' : BaseEngineController_A02_bak2/Foreground/Inputs/NonLinearSensors/O2_PreCat/Override/OldValue
 * '<S630>' : BaseEngineController_A02_bak2/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT
 * '<S631>' : BaseEngineController_A02_bak2/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP
 * '<S632>' : BaseEngineController_A02_bak2/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT
 * '<S633>' : BaseEngineController_A02_bak2/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /First Order Low Pass
 * '<S634>' : BaseEngineController_A02_bak2/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /If Action Subsystem
 * '<S635>' : BaseEngineController_A02_bak2/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /If Action Subsystem1
 * '<S636>' : BaseEngineController_A02_bak2/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /If Action Subsystem2
 * '<S637>' : BaseEngineController_A02_bak2/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /Override
 * '<S638>' : BaseEngineController_A02_bak2/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /motohawk_table_1d1
 * '<S639>' : BaseEngineController_A02_bak2/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /First Order Low Pass/First Order Low Pass
 * '<S640>' : BaseEngineController_A02_bak2/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /Override/NewValue
 * '<S641>' : BaseEngineController_A02_bak2/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /Override/OldValue
 * '<S642>' : BaseEngineController_A02_bak2/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /First Order Low Pass
 * '<S643>' : BaseEngineController_A02_bak2/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /If Action Subsystem
 * '<S644>' : BaseEngineController_A02_bak2/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /If Action Subsystem1
 * '<S645>' : BaseEngineController_A02_bak2/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /If Action Subsystem2
 * '<S646>' : BaseEngineController_A02_bak2/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /Override
 * '<S647>' : BaseEngineController_A02_bak2/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /motohawk_table_1d1
 * '<S648>' : BaseEngineController_A02_bak2/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /First Order Low Pass/First Order Low Pass
 * '<S649>' : BaseEngineController_A02_bak2/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /Override/NewValue
 * '<S650>' : BaseEngineController_A02_bak2/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /Override/OldValue
 * '<S651>' : BaseEngineController_A02_bak2/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /First Order Low Pass
 * '<S652>' : BaseEngineController_A02_bak2/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /If Action Subsystem
 * '<S653>' : BaseEngineController_A02_bak2/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /If Action Subsystem1
 * '<S654>' : BaseEngineController_A02_bak2/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /If Action Subsystem2
 * '<S655>' : BaseEngineController_A02_bak2/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /Override
 * '<S656>' : BaseEngineController_A02_bak2/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /motohawk_table_1d1
 * '<S657>' : BaseEngineController_A02_bak2/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /First Order Low Pass/First Order Low Pass
 * '<S658>' : BaseEngineController_A02_bak2/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /Override/NewValue
 * '<S659>' : BaseEngineController_A02_bak2/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /Override/OldValue
 * '<S660>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/APP1
 * '<S661>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/APP2
 * '<S662>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/TPS1
 * '<S663>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/TPS2
 * '<S664>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/APP1/First Order Low Pass
 * '<S665>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/APP1/If Action Subsystem
 * '<S666>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/APP1/If Action Subsystem1
 * '<S667>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/APP1/If Action Subsystem2
 * '<S668>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/APP1/Override
 * '<S669>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/APP1/Saturation
 * '<S670>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/APP1/motohawk_table_1d1
 * '<S671>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/APP1/First Order Low Pass/First Order Low Pass
 * '<S672>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/APP1/Override/NewValue
 * '<S673>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/APP1/Override/OldValue
 * '<S674>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/APP2/First Order Low Pass
 * '<S675>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/APP2/If Action Subsystem
 * '<S676>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/APP2/If Action Subsystem1
 * '<S677>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/APP2/If Action Subsystem2
 * '<S678>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/APP2/Override
 * '<S679>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/APP2/Saturation
 * '<S680>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/APP2/motohawk_table_1d1
 * '<S681>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/APP2/First Order Low Pass/First Order Low Pass
 * '<S682>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/APP2/Override/NewValue
 * '<S683>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/APP2/Override/OldValue
 * '<S684>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/TPS1/First Order Low Pass
 * '<S685>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/TPS1/If Action Subsystem
 * '<S686>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/TPS1/If Action Subsystem1
 * '<S687>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/TPS1/If Action Subsystem2
 * '<S688>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/TPS1/Override
 * '<S689>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/TPS1/Saturation
 * '<S690>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/TPS1/motohawk_table_1d1
 * '<S691>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/TPS1/First Order Low Pass/First Order Low Pass
 * '<S692>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/TPS1/Override/NewValue
 * '<S693>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/TPS1/Override/OldValue
 * '<S694>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/TPS2/First Order Low Pass
 * '<S695>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/TPS2/If Action Subsystem
 * '<S696>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/TPS2/If Action Subsystem1
 * '<S697>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/TPS2/If Action Subsystem2
 * '<S698>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/TPS2/Override
 * '<S699>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/TPS2/Saturation
 * '<S700>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/TPS2/motohawk_table_1d1
 * '<S701>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/TPS2/First Order Low Pass/First Order Low Pass
 * '<S702>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/TPS2/Override/NewValue
 * '<S703>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/TPS2/Override/OldValue
 * '<S704>' : BaseEngineController_A02_bak2/Foreground/Outputs/AC Control
 * '<S705>' : BaseEngineController_A02_bak2/Foreground/Outputs/Coil Control
 * '<S706>' : BaseEngineController_A02_bak2/Foreground/Outputs/FAN Control
 * '<S707>' : BaseEngineController_A02_bak2/Foreground/Outputs/FuelPump
 * '<S708>' : BaseEngineController_A02_bak2/Foreground/Outputs/HBridge
 * '<S709>' : BaseEngineController_A02_bak2/Foreground/Outputs/IAC-Control
 * '<S710>' : BaseEngineController_A02_bak2/Foreground/Outputs/Injector Control
 * '<S711>' : BaseEngineController_A02_bak2/Foreground/Outputs/WASTEGATE-Control
 * '<S712>' : BaseEngineController_A02_bak2/Foreground/Outputs/AC Control/Discrete Actuator - AC
 * '<S713>' : BaseEngineController_A02_bak2/Foreground/Outputs/AC Control/Discrete Actuator - AC/Override in Engineering Units
 * '<S714>' : BaseEngineController_A02_bak2/Foreground/Outputs/AC Control/Discrete Actuator - AC/Override in Engineering Units/NewValue
 * '<S715>' : BaseEngineController_A02_bak2/Foreground/Outputs/AC Control/Discrete Actuator - AC/Override in Engineering Units/OldValue
 * '<S716>' : BaseEngineController_A02_bak2/Foreground/Outputs/Coil Control/Coil Enable Manager
 * '<S717>' : BaseEngineController_A02_bak2/Foreground/Outputs/Coil Control/EST Fault Management
 * '<S718>' : BaseEngineController_A02_bak2/Foreground/Outputs/Coil Control/motohawk_override_rel
 * '<S719>' : BaseEngineController_A02_bak2/Foreground/Outputs/Coil Control/motohawk_override_rel1
 * '<S720>' : BaseEngineController_A02_bak2/Foreground/Outputs/Coil Control/Coil Enable Manager/CompareTo
 * '<S721>' : BaseEngineController_A02_bak2/Foreground/Outputs/Coil Control/Coil Enable Manager/EST Enable TDC Counter
 * '<S722>' : BaseEngineController_A02_bak2/Foreground/Outputs/Coil Control/Coil Enable Manager/EST Enable TDC Counter/EST Enable TDC Counter Stateflow
 * '<S723>' : BaseEngineController_A02_bak2/Foreground/Outputs/Coil Control/Coil Enable Manager/EST Enable TDC Counter/TDC_Counter
 * '<S724>' : BaseEngineController_A02_bak2/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo
 * '<S725>' : BaseEngineController_A02_bak2/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo1
 * '<S726>' : BaseEngineController_A02_bak2/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo10
 * '<S727>' : BaseEngineController_A02_bak2/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo11
 * '<S728>' : BaseEngineController_A02_bak2/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo12
 * '<S729>' : BaseEngineController_A02_bak2/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo13
 * '<S730>' : BaseEngineController_A02_bak2/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo14
 * '<S731>' : BaseEngineController_A02_bak2/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo15
 * '<S732>' : BaseEngineController_A02_bak2/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo2
 * '<S733>' : BaseEngineController_A02_bak2/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo3
 * '<S734>' : BaseEngineController_A02_bak2/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo4
 * '<S735>' : BaseEngineController_A02_bak2/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo5
 * '<S736>' : BaseEngineController_A02_bak2/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo6
 * '<S737>' : BaseEngineController_A02_bak2/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo7
 * '<S738>' : BaseEngineController_A02_bak2/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo8
 * '<S739>' : BaseEngineController_A02_bak2/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo9
 * '<S740>' : BaseEngineController_A02_bak2/Foreground/Outputs/Coil Control/motohawk_override_rel/NewValue
 * '<S741>' : BaseEngineController_A02_bak2/Foreground/Outputs/Coil Control/motohawk_override_rel/OldValue
 * '<S742>' : BaseEngineController_A02_bak2/Foreground/Outputs/Coil Control/motohawk_override_rel1/NewValue
 * '<S743>' : BaseEngineController_A02_bak2/Foreground/Outputs/Coil Control/motohawk_override_rel1/OldValue
 * '<S744>' : BaseEngineController_A02_bak2/Foreground/Outputs/FAN Control/Discrete Actuator - FAN1
 * '<S745>' : BaseEngineController_A02_bak2/Foreground/Outputs/FAN Control/Discrete Actuator - FAN2
 * '<S746>' : BaseEngineController_A02_bak2/Foreground/Outputs/FAN Control/Discrete Actuator - FAN1/Override in Engineering Units
 * '<S747>' : BaseEngineController_A02_bak2/Foreground/Outputs/FAN Control/Discrete Actuator - FAN1/Override in Engineering Units/NewValue
 * '<S748>' : BaseEngineController_A02_bak2/Foreground/Outputs/FAN Control/Discrete Actuator - FAN1/Override in Engineering Units/OldValue
 * '<S749>' : BaseEngineController_A02_bak2/Foreground/Outputs/FAN Control/Discrete Actuator - FAN2/Override in Engineering Units
 * '<S750>' : BaseEngineController_A02_bak2/Foreground/Outputs/FAN Control/Discrete Actuator - FAN2/Override in Engineering Units/NewValue
 * '<S751>' : BaseEngineController_A02_bak2/Foreground/Outputs/FAN Control/Discrete Actuator - FAN2/Override in Engineering Units/OldValue
 * '<S752>' : BaseEngineController_A02_bak2/Foreground/Outputs/FuelPump/Discrete Actuator - FUELP
 * '<S753>' : BaseEngineController_A02_bak2/Foreground/Outputs/FuelPump/Discrete Actuator - FUELP/Override in Engineering Units
 * '<S754>' : BaseEngineController_A02_bak2/Foreground/Outputs/FuelPump/Discrete Actuator - FUELP/Override in Engineering Units/NewValue
 * '<S755>' : BaseEngineController_A02_bak2/Foreground/Outputs/FuelPump/Discrete Actuator - FUELP/Override in Engineering Units/OldValue
 * '<S756>' : BaseEngineController_A02_bak2/Foreground/Outputs/HBridge/Time Since Enabled (With Input)1
 * '<S757>' : BaseEngineController_A02_bak2/Foreground/Outputs/HBridge/motohawk_override_abs2
 * '<S758>' : BaseEngineController_A02_bak2/Foreground/Outputs/HBridge/motohawk_override_abs2/NewValue
 * '<S759>' : BaseEngineController_A02_bak2/Foreground/Outputs/HBridge/motohawk_override_abs2/OldValue
 * '<S760>' : BaseEngineController_A02_bak2/Foreground/Outputs/IAC-Control/IAC-P-CONTROL
 * '<S761>' : BaseEngineController_A02_bak2/Foreground/Outputs/IAC-Control/IAC-S-CONTROL
 * '<S762>' : BaseEngineController_A02_bak2/Foreground/Outputs/IAC-Control/IAC-P-CONTROL/Saturation
 * '<S763>' : BaseEngineController_A02_bak2/Foreground/Outputs/IAC-Control/IAC-P-CONTROL/motohawk_override_abs2
 * '<S764>' : BaseEngineController_A02_bak2/Foreground/Outputs/IAC-Control/IAC-P-CONTROL/motohawk_override_abs2/NewValue
 * '<S765>' : BaseEngineController_A02_bak2/Foreground/Outputs/IAC-Control/IAC-P-CONTROL/motohawk_override_abs2/OldValue
 * '<S766>' : BaseEngineController_A02_bak2/Foreground/Outputs/IAC-Control/IAC-S-CONTROL/Saturation
 * '<S767>' : BaseEngineController_A02_bak2/Foreground/Outputs/IAC-Control/IAC-S-CONTROL/motohawk_override_abs2
 * '<S768>' : BaseEngineController_A02_bak2/Foreground/Outputs/IAC-Control/IAC-S-CONTROL/motohawk_override_abs2/NewValue
 * '<S769>' : BaseEngineController_A02_bak2/Foreground/Outputs/IAC-Control/IAC-S-CONTROL/motohawk_override_abs2/OldValue
 * '<S770>' : BaseEngineController_A02_bak2/Foreground/Outputs/Injector Control/Injector Diagnostics
 * '<S771>' : BaseEngineController_A02_bak2/Foreground/Outputs/Injector Control/Injector Enable Manager
 * '<S772>' : BaseEngineController_A02_bak2/Foreground/Outputs/Injector Control/motohawk_override_abs1
 * '<S773>' : BaseEngineController_A02_bak2/Foreground/Outputs/Injector Control/motohawk_override_abs2
 * '<S774>' : BaseEngineController_A02_bak2/Foreground/Outputs/Injector Control/motohawk_override_abs3
 * '<S775>' : BaseEngineController_A02_bak2/Foreground/Outputs/Injector Control/motohawk_override_abs4
 * '<S776>' : BaseEngineController_A02_bak2/Foreground/Outputs/Injector Control/motohawk_override_abs5
 * '<S777>' : BaseEngineController_A02_bak2/Foreground/Outputs/Injector Control/motohawk_override_abs6
 * '<S778>' : BaseEngineController_A02_bak2/Foreground/Outputs/Injector Control/Injector Enable Manager/Cals_and_Probes_Page
 * '<S779>' : BaseEngineController_A02_bak2/Foreground/Outputs/Injector Control/Injector Enable Manager/Stall
 * '<S780>' : BaseEngineController_A02_bak2/Foreground/Outputs/Injector Control/Injector Enable Manager/Time Since Enabled (With Input)1
 * '<S781>' : BaseEngineController_A02_bak2/Foreground/Outputs/Injector Control/motohawk_override_abs1/NewValue
 * '<S782>' : BaseEngineController_A02_bak2/Foreground/Outputs/Injector Control/motohawk_override_abs1/OldValue
 * '<S783>' : BaseEngineController_A02_bak2/Foreground/Outputs/Injector Control/motohawk_override_abs2/NewValue
 * '<S784>' : BaseEngineController_A02_bak2/Foreground/Outputs/Injector Control/motohawk_override_abs2/OldValue
 * '<S785>' : BaseEngineController_A02_bak2/Foreground/Outputs/Injector Control/motohawk_override_abs3/NewValue
 * '<S786>' : BaseEngineController_A02_bak2/Foreground/Outputs/Injector Control/motohawk_override_abs3/OldValue
 * '<S787>' : BaseEngineController_A02_bak2/Foreground/Outputs/Injector Control/motohawk_override_abs4/NewValue
 * '<S788>' : BaseEngineController_A02_bak2/Foreground/Outputs/Injector Control/motohawk_override_abs4/OldValue
 * '<S789>' : BaseEngineController_A02_bak2/Foreground/Outputs/Injector Control/motohawk_override_abs5/NewValue
 * '<S790>' : BaseEngineController_A02_bak2/Foreground/Outputs/Injector Control/motohawk_override_abs5/OldValue
 * '<S791>' : BaseEngineController_A02_bak2/Foreground/Outputs/Injector Control/motohawk_override_abs6/NewValue
 * '<S792>' : BaseEngineController_A02_bak2/Foreground/Outputs/Injector Control/motohawk_override_abs6/OldValue
 * '<S793>' : BaseEngineController_A02_bak2/Foreground/Outputs/WASTEGATE-Control/PWM Characterization
 * '<S794>' : BaseEngineController_A02_bak2/Foreground/Outputs/WASTEGATE-Control/PWM Characterization/Saturation
 * '<S795>' : BaseEngineController_A02_bak2/Foreground/Outputs/WASTEGATE-Control/PWM Characterization/motohawk_override_abs2
 * '<S796>' : BaseEngineController_A02_bak2/Foreground/Outputs/WASTEGATE-Control/PWM Characterization/motohawk_override_abs2/NewValue
 * '<S797>' : BaseEngineController_A02_bak2/Foreground/Outputs/WASTEGATE-Control/PWM Characterization/motohawk_override_abs2/OldValue
 * '<S798>' : BaseEngineController_A02_bak2/Main Power Relay/Main Power Relay
 * '<S799>' : BaseEngineController_A02_bak2/Main Power Relay/Main Power Relay/Display Variable Event Boolean
 * '<S800>' : BaseEngineController_A02_bak2/Main Power Relay/Main Power Relay/Display Variable Event Function-Call
 * '<S801>' : BaseEngineController_A02_bak2/Main Power Relay/Main Power Relay/Display Variable Event Function-Call1
 * '<S802>' : BaseEngineController_A02_bak2/Main Power Relay/Main Power Relay/ECUP Latch
 * '<S803>' : BaseEngineController_A02_bak2/Main Power Relay/Main Power Relay/Forced Shutdown Process
 * '<S804>' : BaseEngineController_A02_bak2/Main Power Relay/Main Power Relay/On Off Delay
 * '<S805>' : BaseEngineController_A02_bak2/Main Power Relay/Main Power Relay/ShutDown Processes
 * '<S806>' : BaseEngineController_A02_bak2/Main Power Relay/Main Power Relay/motohawk_restore_nvmem
 * '<S807>' : BaseEngineController_A02_bak2/Main Power Relay/Main Power Relay/motohawk_store_nvmem
 * '<S808>' : BaseEngineController_A02_bak2/Main Power Relay/Main Power Relay/Display Variable Event Function-Call/Clear
 * '<S809>' : BaseEngineController_A02_bak2/Main Power Relay/Main Power Relay/Display Variable Event Function-Call1/Clear
 * '<S810>' : BaseEngineController_A02_bak2/Main Power Relay/Main Power Relay/Forced Shutdown Process/Post Shutdown two ticks before MPRD off
 * '<S811>' : BaseEngineController_A02_bak2/Main Power Relay/Main Power Relay/Forced Shutdown Process/Processor Reboot
 * '<S812>' : BaseEngineController_A02_bak2/Main Power Relay/Main Power Relay/Forced Shutdown Process/Save NV Vars one tick before MPRD off
 * '<S813>' : BaseEngineController_A02_bak2/Main Power Relay/Main Power Relay/Forced Shutdown Process/Shutdown power on ECU565//563
 * '<S814>' : BaseEngineController_A02_bak2/Main Power Relay/Main Power Relay/Forced Shutdown Process/Time Since Enabled (With Input)1
 * '<S815>' : BaseEngineController_A02_bak2/Main Power Relay/Main Power Relay/Forced Shutdown Process/Post Shutdown two ticks before MPRD off/Post Shutdown two ticks before MPRD off
 * '<S816>' : BaseEngineController_A02_bak2/Main Power Relay/Main Power Relay/Forced Shutdown Process/Save NV Vars one tick before MPRD off/Save NV Vars one tick before MPRD off
 * '<S817>' : BaseEngineController_A02_bak2/Main Power Relay/Main Power Relay/Forced Shutdown Process/Shutdown power on ECU565//563/Shutdown power on ECU565-128
 * '<S818>' : BaseEngineController_A02_bak2/Main Power Relay/Main Power Relay/On Off Delay/S-R Flip-Flop
 * '<S819>' : BaseEngineController_A02_bak2/Main Power Relay/Main Power Relay/ShutDown Processes/Post Shutdown two ticks before MPRD off
 * '<S820>' : BaseEngineController_A02_bak2/Main Power Relay/Main Power Relay/ShutDown Processes/Processor Reboot
 * '<S821>' : BaseEngineController_A02_bak2/Main Power Relay/Main Power Relay/ShutDown Processes/Save NV Vars one tick before MPRD off
 * '<S822>' : BaseEngineController_A02_bak2/Main Power Relay/Main Power Relay/ShutDown Processes/Shutdown power on ECU565//563
 * '<S823>' : BaseEngineController_A02_bak2/Main Power Relay/Main Power Relay/ShutDown Processes/motohawk_override_abs
 * '<S824>' : BaseEngineController_A02_bak2/Main Power Relay/Main Power Relay/ShutDown Processes/Post Shutdown two ticks before MPRD off/Post Shutdown two ticks before MPRD off
 * '<S825>' : BaseEngineController_A02_bak2/Main Power Relay/Main Power Relay/ShutDown Processes/Save NV Vars one tick before MPRD off/Save NV Vars one tick before MPRD off
 * '<S826>' : BaseEngineController_A02_bak2/Main Power Relay/Main Power Relay/ShutDown Processes/Shutdown power on ECU565//563/Shutdown power on ECU565-128
 * '<S827>' : BaseEngineController_A02_bak2/Main Power Relay/Main Power Relay/ShutDown Processes/motohawk_override_abs/NewValue
 * '<S828>' : BaseEngineController_A02_bak2/Main Power Relay/Main Power Relay/ShutDown Processes/motohawk_override_abs/OldValue
 */
#endif                                 /* RTW_HEADER_BaseEngineController_A02_bak2_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
