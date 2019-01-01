/*
 * File: BaseEngineController_A02_bak2.h
 *
 * Code generated for Simulink model 'BaseEngineController_A02_bak2'.
 *
 * Model version                  : 1.1532
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Tue Jan 01 10:29:48 2019
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
  real_T s437_RPMInst;                 /* '<S437>/Data Type Conversion1' */
  real_T s441_DataTypeConversion;      /* '<S441>/Data Type Conversion' */
  real_T s541_Sum1;                    /* '<S541>/Sum1' */
  real_T s554_Merge;                   /* '<S554>/Merge' */
  real_T s540_Sum1;                    /* '<S540>/Sum1' */
  real_T s672_motohawk_interpolation_1d;/* '<S672>/motohawk_interpolation_1d' */
  real_T s682_motohawk_interpolation_1d;/* '<S682>/motohawk_interpolation_1d' */
  real_T s670_Merge;                   /* '<S670>/Merge' */
  real_T s680_Merge;                   /* '<S680>/Merge' */
  real_T s692_motohawk_interpolation_1d;/* '<S692>/motohawk_interpolation_1d' */
  real_T s702_motohawk_interpolation_1d;/* '<S702>/motohawk_interpolation_1d' */
  real_T s690_Merge;                   /* '<S690>/Merge' */
  real_T s700_Merge;                   /* '<S700>/Merge' */
  real_T s405_Switch2;                 /* '<S405>/Switch2' */
  real_T s542_Sum1;                    /* '<S542>/Sum1' */
  real_T s562_Merge;                   /* '<S562>/Merge' */
  real_T s399_Switch1;                 /* '<S399>/Switch1' */
  real_T s628_motohawk_interpolation_1d;/* '<S628>/motohawk_interpolation_1d' */
  real_T s627_Merge;                   /* '<S627>/Merge' */
  real_T s403_Sum1;                    /* '<S403>/Sum1' */
  real_T s425_Switch;                  /* '<S425>/Switch' */
  real_T s349_motohawk_delta_time;     /* '<S349>/motohawk_delta_time' */
  real_T s545_Sum1;                    /* '<S545>/Sum1' */
  real_T s357_Sum;                     /* '<S357>/Sum' */
  real_T s546_Merge;                   /* '<S546>/Merge' */
  real_T s544_Sum1;                    /* '<S544>/Sum1' */
  real_T s583_Merge;                   /* '<S583>/Merge' */
  real_T s356_PressureRatio;           /* '<S356>/Pressure Ratio' */
  real_T s356_NominalAirFlowRate;      /* '<S356>/Nominal Air Flow Rate' */
  real_T s356_ModelAirMassFlowRate;    /* '<S356>/Model Air Mass Flow Rate' */
  real_T s436_Gain;                    /* '<S436>/Gain' */
  real_T s518_motohawk_interpolation_1d;/* '<S518>/motohawk_interpolation_1d' */
  real_T s517_Merge;                   /* '<S517>/Merge' */
  real_T s356_MultiportSwitch;         /* '<S356>/Multiport Switch' */
  real_T s369_Merge;                   /* '<S369>/Merge' */
  real_T s372_Sum1;                    /* '<S372>/Sum1' */
  real_T s370_Merge;                   /* '<S370>/Merge' */
  real_T s375_Sum1;                    /* '<S375>/Sum1' */
  real_T s378_TorquetoPower;           /* '<S378>/Torque to Power' */
  real_T s386_MinMax1;                 /* '<S386>/MinMax1' */
  real_T s419_Sum1;                    /* '<S419>/Sum1' */
  real_T s442_DataTypeConversion;      /* '<S442>/Data Type Conversion' */
  real_T s443_DataTypeConversion1;     /* '<S443>/Data Type Conversion1' */
  real_T s443_DataTypeConversion2;     /* '<S443>/Data Type Conversion2' */
  real_T s443_DataTypeConversion3;     /* '<S443>/Data Type Conversion3' */
  real_T s443_DataTypeConversion4;     /* '<S443>/Data Type Conversion4' */
  real_T s443_DataTypeConversion5;     /* '<S443>/Data Type Conversion5' */
  real_T s444_DataTypeConversion;      /* '<S444>/Data Type Conversion' */
  real_T s445_DataTypeConversion;      /* '<S445>/Data Type Conversion' */
  real_T s446_DataTypeConversion;      /* '<S446>/Data Type Conversion' */
  real_T s450_DataTypeConversion;      /* '<S450>/Data Type Conversion' */
  real_T s591_Merge;                   /* '<S591>/Merge' */
  real_T s549_Sum1;                    /* '<S549>/Sum1' */
  real_T s617_Merge;                   /* '<S617>/Merge' */
  real_T s111_SparkEnergy;             /* '<S111>/Merge5' */
  real_T s111_SparkAdv;                /* '<S111>/Merge4' */
  real_T s427_Switch;                  /* '<S427>/Switch' */
  real_T s111_Throttle;                /* '<S111>/Merge8' */
  real_T s710_ETC;                     /* '<S710>/Saturation' */
  real_T s111_IACP;                    /* '<S111>/Merge3' */
  real_T s764_MinMax1;                 /* '<S764>/MinMax1' */
  real_T s111_IACS;                    /* '<S111>/Merge9' */
  real_T s768_MinMax1;                 /* '<S768>/MinMax1' */
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
  real_T s796_MinMax1;                 /* '<S796>/MinMax1' */
  real_T s381_Switch1;                 /* '<S381>/Switch1' */
  real_T s423_Sum;                     /* '<S423>/Sum' */
  real_T s403_Sum3;                    /* '<S403>/Sum3' */
  real_T s543_Sum1;                    /* '<S543>/Sum1' */
  real_T s575_Merge;                   /* '<S575>/Merge' */
  real_T s402_Sum3;                    /* '<S402>/Sum3' */
  real_T s547_Sum1;                    /* '<S547>/Sum1' */
  real_T s548_Sum1;                    /* '<S548>/Sum1' */
  real_T s601_Merge;                   /* '<S601>/Merge' */
  real_T s609_Merge;                   /* '<S609>/Merge' */
  real_T s359_Sum1;                    /* '<S359>/Sum1' */
  real_T s720_Sum;                     /* '<S720>/Sum' */
  real_T s721_Sum;                     /* '<S721>/Sum' */
  real_T s723_CrankCounter;            /* '<S723>/CrankCounter' */
  real_T s640_motohawk_interpolation_1d;/* '<S640>/motohawk_interpolation_1d' */
  real_T s632_Merge;                   /* '<S632>/Merge' */
  real_T s639_Merge;                   /* '<S639>/Merge' */
  real_T s658_motohawk_interpolation_1d;/* '<S658>/motohawk_interpolation_1d' */
  real_T s634_Merge;                   /* '<S634>/Merge' */
  real_T s657_Merge;                   /* '<S657>/Merge' */
  real_T s649_motohawk_interpolation_1d;/* '<S649>/motohawk_interpolation_1d' */
  real_T s648_Merge;                   /* '<S648>/Merge' */
  real_T s463_Out;                     /* '<S443>/Chart' */
  real_T s309_Defaultifnoflow[8];      /* '<S309>/Default (if no flow)' */
  real_T s325_Sum1[8];                 /* '<S325>/Sum1' */
  real_T s324_chargemass[8];           /* '<S324>/charge mass' */
  real_T s415_Product;                 /* '<S415>/Product' */
  real_T s414_Product;                 /* '<S414>/Product' */
  real_T s396_Merge;                   /* '<S396>/Merge' */
  real_T s412_Sum2;                    /* '<S412>/Sum2' */
  real_T s387_Switch1;                 /* '<S387>/Switch1' */
  real_T s363_Product1;                /* '<S363>/Product1' */
  real_T s358_Product;                 /* '<S358>/Product' */
  real_T s354_Timer;                   /* '<S349>/Baro Stall State Delay' */
  real_T s304_UnitDelay;               /* '<S304>/Unit Delay' */
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
  real_T s292_Add;                     /* '<S292>/Add' */
  real_T s289_Product;                 /* '<S289>/Product' */
  real_T s132_ApplyOffsetstoBaseSparkAdvance1;/* '<S132>/Apply Offsets to Base Spark Advance1' */
  real_T s295_MinMax1;                 /* '<S295>/MinMax1' */
  real_T s290_Switch;                  /* '<S290>/Switch' */
  real_T s132_motohawk_interpolation_2d1;/* '<S132>/motohawk_interpolation_2d1' */
  real_T s129_Sum;                     /* '<S129>/Sum' */
  real_T s218_DontallowsetpointtoevergoabovetheTargetRPM;/* '<S218>/Don't allow setpoint to ever go above the TargetRPM' */
  real_T s228_Sum2;                    /* '<S228>/Sum2' */
  real_T s228_Product2;                /* '<S228>/Product2' */
  real_T s229_Product;                 /* '<S229>/Product' */
  real_T s230_Switch1;                 /* '<S230>/Switch1' */
  real_T s220_Switch;                  /* '<S220>/Switch' */
  real_T s216_Sum;                     /* '<S216>/Sum' */
  real_T s250_MinMax1;                 /* '<S250>/MinMax1' */
  real_T s240_DontallowsetpointtoeverdropbelowtheTargetRPM;/* '<S240>/Don't allow setpoint to ever drop below the TargetRPM' */
  real_T s266_Sum2;                    /* '<S266>/Sum2' */
  real_T s266_Product2;                /* '<S266>/Product2' */
  real_T s267_Product;                 /* '<S267>/Product' */
  real_T s268_Switch1;                 /* '<S268>/Switch1' */
  real_T s130_MinGovAirPID;            /* '<S130>/Product1' */
  real_T s261_Sum1;                    /* '<S261>/Sum1' */
  real_T s261_Product;                 /* '<S261>/Product' */
  real_T s262_Product;                 /* '<S262>/Product' */
  real_T s130_IdleSpk;                 /* '<S130>/Product' */
  real_T s258_Switch;                  /* '<S258>/Switch' */
  real_T s243_DontallowsetpointtoeverdropbelowtheTargetRPM;/* '<S243>/Don't allow setpoint to ever drop below the TargetRPM' */
  real_T s131_O2FuelMult;              /* '<S131>/Switch' */
  real_T s273_Switch;                  /* '<S273>/Switch' */
  real_T s280_Sum2;                    /* '<S280>/Sum2' */
  real_T s280_Product2;                /* '<S280>/Product2' */
  real_T s282_Switch1;                 /* '<S282>/Switch1' */
  real_T s281_Product;                 /* '<S281>/Product' */
  real_T s278_Switch3;                 /* '<S278>/Switch3' */
  real_T s278_Switch1;                 /* '<S278>/Switch1' */
  real_T s278_Switch4;                 /* '<S278>/Switch4' */
  real_T s198_Add;                     /* '<S198>/Add' */
  real_T s196_FuelFlowMassAirflowEquivalenceRatioAirtofuelRatio;/* '<S196>/Fuel Flow = Mass Airflow * Equivalence Ratio // Air-to-fuel Ratio' */
  real_T s193_PerCylinderMassFlowRate; /* '<S193>/Per-Cylinder Mass Flow Rate' */
  real_T s193_ApplyMultipliersforO2KnockControlandEnrichment1;/* '<S193>/Apply Multipliers for O2, Knock Control, and Enrichment1' */
  real_T s215_MinMax1;                 /* '<S215>/MinMax1' */
  real_T s206_Sum1;                    /* '<S206>/Sum1' */
  real_T s199_Sum1;                    /* '<S199>/Sum1' */
  real_T s205_Sum1;                    /* '<S205>/Sum1' */
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
  real_T s816_Switch;                  /* '<S816>/Switch' */
  uint32_T s438_motohawk_frequency_in; /* '<S438>/motohawk_frequency_in' */
  uint32_T s539_Sum;                   /* '<S539>/Sum' */
  int16_T s710_motohawk_pwm1;          /* '<S710>/motohawk_pwm1' */
  uint16_T s438_motohawk_ain4;         /* '<S438>/motohawk_ain4' */
  uint16_T s440_motohawk_ain1;         /* '<S440>/motohawk_ain1' */
  uint16_T s440_motohawk_ain2;         /* '<S440>/motohawk_ain2' */
  uint16_T s440_motohawk_ain6;         /* '<S440>/motohawk_ain6' */
  uint16_T s440_motohawk_ain9;         /* '<S440>/motohawk_ain9' */
  uint16_T s439_motohawk_ain3;         /* '<S439>/motohawk_ain3' */
  uint16_T s438_motohawk_ain_read1;    /* '<S438>/motohawk_ain_read1' */
  uint16_T s436_motohawk_ain2;         /* '<S436>/motohawk_ain2' */
  uint16_T s438_motohawk_ain14;        /* '<S438>/motohawk_ain14' */
  uint16_T s438_motohawk_ain2;         /* '<S438>/motohawk_ain2' */
  uint16_T s438_motohawk_ain1;         /* '<S438>/motohawk_ain1' */
  uint16_T s438_motohawk_ain3;         /* '<S438>/motohawk_ain3' */
  uint16_T s707_SparkSequence_o3[8];   /* '<S707>/Spark Sequence' */
  uint16_T s707_SparkSequence_o4[8];   /* '<S707>/Spark Sequence' */
  uint16_T s622_motohawk_ain;          /* '<S622>/motohawk_ain' */
  uint16_T s622_motohawk_ain1;         /* '<S622>/motohawk_ain1' */
  uint16_T s622_motohawk_ain2;         /* '<S622>/motohawk_ain2' */
  index_T s392_motohawk_prelookup1;    /* '<S392>/motohawk_prelookup1' */
  index_T s392_Indexes;                /* '<S392>/motohawk_prelookup5' */
  index_T s390_motohawk_prelookup;     /* '<S390>/motohawk_prelookup' */
  index_T s391_motohawk_prelookup;     /* '<S391>/motohawk_prelookup' */
  index_T s433_motohawk_prelookup1;    /* '<S433>/motohawk_prelookup1' */
  index_T s433_motohawk_prelookup4;    /* '<S433>/motohawk_prelookup4' */
  index_T s353_RPMAccel17Idx;          /* '<S353>/motohawk_prelookup' */
  index_T s393_motohawk_prelookup;     /* '<S393>/motohawk_prelookup' */
  int8_T s14_Merge1[32];               /* '<S14>/Merge1' */
  int8_T s723_DataTypeConversion;      /* '<S723>/Data Type Conversion' */
  int8_T s217_DataTypeConversion;      /* '<S217>/Data Type Conversion' */
  int8_T s217_DataTypeConversion1;     /* '<S217>/Data Type Conversion1' */
  int8_T s91_MultiportSwitch[8];       /* '<S91>/Multiport Switch' */
  int8_T s101_CutArray[8];             /* '<S101>/CutArray' */
  int8_T s18_DC_Override;              /* '<S12>/ETC Test  Manager' */
  int8_T s18_SetpointMode;             /* '<S12>/ETC Test  Manager' */
  uint8_T s401_UnitDelay;              /* '<S401>/Unit Delay' */
  uint8_T s349_motohawk_data_read1;    /* '<S349>/motohawk_data_read1' */
  uint8_T s712_InjectorSequence_o1[8]; /* '<S712>/Injector Sequence' */
  uint8_T s14_DataTypeConversion5;     /* '<S14>/Data Type Conversion5' */
  uint8_T s437_motohawk_encoder_fault; /* '<S437>/motohawk_encoder_fault' */
  uint8_T s437_motohawk_encoder_state; /* '<S437>/motohawk_encoder_state' */
  uint8_T s725_Switch1;                /* '<S725>/Switch1' */
  uint8_T s421_Switch;                 /* '<S421>/Switch' */
  uint8_T s420_State;                  /* '<S401>/Engine State Machine' */
  uint8_T s252_IdleState;              /* '<S237>/IdleStateMachine' */
  uint8_T s91_UnitDelay1;              /* '<S91>/Unit Delay1' */
  uint8_T s101_Switch;                 /* '<S101>/Switch' */
  boolean_T s401_Stall;                /* '<S401>/Relational Operator1' */
  boolean_T s401_Crank;                /* '<S401>/Relational Operator4' */
  boolean_T s401_Run;                  /* '<S401>/Logical Operator1' */
  boolean_T s452_Merge;                /* '<S452>/Merge' */
  boolean_T s369_RelationalOperator4;  /* '<S369>/Relational Operator4' */
  boolean_T s370_RelationalOperator4;  /* '<S370>/Relational Operator4' */
  boolean_T s366_LogicalOperator;      /* '<S366>/Logical Operator' */
  boolean_T s436_motohawk_din;         /* '<S436>/motohawk_din' */
  boolean_T s436_motohawk_din1;        /* '<S436>/motohawk_din1' */
  boolean_T s436_motohawk_din2;        /* '<S436>/motohawk_din2' */
  boolean_T s455_Merge;                /* '<S455>/Merge' */
  boolean_T s493_Merge;                /* '<S493>/Merge' */
  boolean_T s498_Merge;                /* '<S498>/Merge' */
  boolean_T s503_Merge;                /* '<S503>/Merge' */
  boolean_T s507_Merge;                /* '<S507>/Merge' */
  boolean_T s510_Merge;                /* '<S510>/Merge' */
  boolean_T s523_Merge;                /* '<S523>/Merge' */
  boolean_T s528_Merge;                /* '<S528>/Merge' */
  boolean_T s111_AC;                   /* '<S111>/Merge14' */
  boolean_T s714_LogicalOperator;      /* '<S714>/Logical Operator' */
  boolean_T s14_LogicalOperator2[8];   /* '<S14>/Logical Operator2' */
  boolean_T s111_FAN1;                 /* '<S111>/Merge12' */
  boolean_T s746_LogicalOperator;      /* '<S746>/Logical Operator' */
  boolean_T s111_FAN2;                 /* '<S111>/Merge13' */
  boolean_T s747_LogicalOperator;      /* '<S747>/Logical Operator' */
  boolean_T s111_FUELP;                /* '<S111>/Merge7' */
  boolean_T s754_LogicalOperator;      /* '<S754>/Logical Operator' */
  boolean_T s778_Merge[8];             /* '<S778>/Merge' */
  boolean_T s359_LogicalOperator;      /* '<S359>/Logical Operator' */
  boolean_T s707_LogicalOperator1[8];  /* '<S707>/Logical Operator1' */
  boolean_T s723_RelationalOperator1;  /* '<S723>/Relational Operator1' */
  boolean_T s396_RelationalOperator3;  /* '<S396>/Relational Operator3' */
  boolean_T s354_Enable;               /* '<S349>/Baro Stall State Delay' */
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
  boolean_T s217_MultiportSwitch;      /* '<S217>/Multiport Switch' */
  boolean_T s251_RelationalOperator;   /* '<S251>/Relational Operator' */
  boolean_T s237_RelationalOperator;   /* '<S237>/Relational Operator' */
  boolean_T s237_RelationalOperator3;  /* '<S237>/Relational Operator3' */
  boolean_T s237_RelationalOperator1;  /* '<S237>/Relational Operator1' */
  boolean_T s237_LogicalOperator;      /* '<S237>/Logical Operator' */
  boolean_T s237_RelationalOperator5;  /* '<S237>/Relational Operator5' */
  boolean_T s253_RelOp;                /* '<S253>/RelOp' */
  boolean_T s130_HitCrossing1;         /* '<S130>/Hit  Crossing1' */
  boolean_T s130_LogicalOperator;      /* '<S130>/Logical Operator' */
  boolean_T s238_RelationalOperator1;  /* '<S238>/Relational Operator1' */
  boolean_T s234_LogicalOperator1;     /* '<S234>/Logical Operator1' */
  boolean_T s271_LogicalOperator;      /* '<S271>/Logical Operator' */
  boolean_T s271_LogicalOperator3;     /* '<S271>/Logical Operator3' */
  boolean_T s271_RelationalOperator5;  /* '<S271>/Relational Operator5' */
  boolean_T s271_LogicalOperator2;     /* '<S271>/Logical Operator2' */
  boolean_T s195_LogicalOperator2;     /* '<S195>/Logical Operator2' */
  boolean_T s213_LogicalOperator;      /* '<S213>/Logical Operator' */
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
  boolean_T s800_RelationalOperator;   /* '<S800>/Relational Operator' */
  boolean_T s800_motohawk_data_read;   /* '<S800>/motohawk_data_read' */
  boolean_T s804_MPRDState;            /* '<S800>/ECUP Latch' */
  rtB_MultiplyandDivideavoidingdivdebyzero_BaseEngineController_A02_bak2
    s377_MultiplyandDivideavoidingdivdebyzero1;/* '<S377>/Multiply and Divide, avoiding divde by zero1' */
  rtB_MultiplyandDivideavoidingdivdebyzero_BaseEngineController_A02_bak2
    s200_MultiplyandDivideavoidingdivdebyzero;/* '<S200>/Multiply and Divide, avoiding divde by zero' */
} BlockIO_BaseEngineController_A02_bak2;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T s541_UnitDelay1_DSTATE;       /* '<S541>/Unit Delay1' */
  real_T s555_UnitDelay_DSTATE;        /* '<S555>/Unit Delay' */
  real_T s540_UnitDelay_DSTATE;        /* '<S540>/Unit Delay' */
  real_T s662_UnitDelay_DSTATE;        /* '<S662>/Unit Delay' */
  real_T s673_UnitDelay_DSTATE;        /* '<S673>/Unit Delay' */
  real_T s663_UnitDelay_DSTATE;        /* '<S663>/Unit Delay' */
  real_T s683_UnitDelay_DSTATE;        /* '<S683>/Unit Delay' */
  real_T s664_UnitDelay_DSTATE;        /* '<S664>/Unit Delay' */
  real_T s693_UnitDelay_DSTATE;        /* '<S693>/Unit Delay' */
  real_T s665_UnitDelay_DSTATE;        /* '<S665>/Unit Delay' */
  real_T s703_UnitDelay_DSTATE;        /* '<S703>/Unit Delay' */
  real_T s567_UnitDelay_DSTATE;        /* '<S567>/Unit Delay' */
  real_T s542_UnitDelay1_DSTATE;       /* '<S542>/Unit Delay1' */
  real_T s566_UnitDelay_DSTATE;        /* '<S566>/Unit Delay' */
  real_T s564_UnitDelay_DSTATE;        /* '<S564>/Unit Delay' */
  real_T s564_UnitDelay1_DSTATE;       /* '<S564>/Unit Delay1' */
  real_T s564_UnitDelay2_DSTATE;       /* '<S564>/Unit Delay2' */
  real_T s403_UnitDelay_DSTATE;        /* '<S403>/Unit Delay' */
  real_T s621_UnitDelay_DSTATE;        /* '<S621>/Unit Delay' */
  real_T s629_UnitDelay_DSTATE;        /* '<S629>/Unit Delay' */
  real_T s545_UnitDelay1_DSTATE;       /* '<S545>/Unit Delay1' */
  real_T s357_UnitDelay_DSTATE;        /* '<S357>/Unit Delay' */
  real_T s544_UnitDelay1_DSTATE;       /* '<S544>/Unit Delay1' */
  real_T s584_UnitDelay_DSTATE;        /* '<S584>/Unit Delay' */
  real_T s449_UnitDelay_DSTATE;        /* '<S449>/Unit Delay' */
  real_T s519_UnitDelay_DSTATE;        /* '<S519>/Unit Delay' */
  real_T s369_UnitDelay2_DSTATE;       /* '<S369>/Unit Delay2' */
  real_T s372_UnitDelay_DSTATE;        /* '<S372>/Unit Delay' */
  real_T s370_UnitDelay2_DSTATE;       /* '<S370>/Unit Delay2' */
  real_T s375_UnitDelay_DSTATE;        /* '<S375>/Unit Delay' */
  real_T s368_UnitDelay_DSTATE;        /* '<S368>/Unit Delay' */
  real_T s417_UnitDelay_DSTATE;        /* '<S417>/Unit Delay' */
  real_T s419_UnitDelay_DSTATE;        /* '<S419>/Unit Delay' */
  real_T s592_UnitDelay_DSTATE;        /* '<S592>/Unit Delay' */
  real_T s549_UnitDelay1_DSTATE;       /* '<S549>/Unit Delay1' */
  real_T s618_UnitDelay_DSTATE;        /* '<S618>/Unit Delay' */
  real_T s65_UnitDelay_DSTATE;         /* '<S65>/Unit Delay' */
  real_T s64_UnitDelay_DSTATE;         /* '<S64>/Unit Delay' */
  real_T s62_UnitDelay_DSTATE;         /* '<S62>/Unit Delay' */
  real_T s61_UnitDelay_DSTATE;         /* '<S61>/Unit Delay' */
  real_T s60_UnitDelay_DSTATE;         /* '<S60>/Unit Delay' */
  real_T s59_UnitDelay_DSTATE;         /* '<S59>/Unit Delay' */
  real_T s58_UnitDelay_DSTATE;         /* '<S58>/Unit Delay' */
  real_T s57_UnitDelay_DSTATE;         /* '<S57>/Unit Delay' */
  real_T s63_UnitDelay_DSTATE[8];      /* '<S63>/Unit Delay' */
  real_T s381_UnitDelay_DSTATE;        /* '<S381>/Unit Delay' */
  real_T s403_UnitDelay1_DSTATE;       /* '<S403>/Unit Delay1' */
  real_T s543_UnitDelay1_DSTATE;       /* '<S543>/Unit Delay1' */
  real_T s576_UnitDelay_DSTATE;        /* '<S576>/Unit Delay' */
  real_T s547_UnitDelay1_DSTATE;       /* '<S547>/Unit Delay1' */
  real_T s602_UnitDelay_DSTATE;        /* '<S602>/Unit Delay' */
  real_T s548_UnitDelay1_DSTATE;       /* '<S548>/Unit Delay1' */
  real_T s610_UnitDelay_DSTATE;        /* '<S610>/Unit Delay' */
  real_T s369_UnitDelay1_DSTATE;       /* '<S369>/Unit Delay1' */
  real_T s369_UnitDelay3_DSTATE;       /* '<S369>/Unit Delay3' */
  real_T s369_UnitDelay4_DSTATE;       /* '<S369>/Unit Delay4' */
  real_T s370_UnitDelay1_DSTATE;       /* '<S370>/Unit Delay1' */
  real_T s370_UnitDelay3_DSTATE;       /* '<S370>/Unit Delay3' */
  real_T s370_UnitDelay4_DSTATE;       /* '<S370>/Unit Delay4' */
  real_T s720_UnitDelay_DSTATE;        /* '<S720>/Unit Delay' */
  real_T s721_UnitDelay_DSTATE;        /* '<S721>/Unit Delay' */
  real_T s723_CrankCounter_DSTATE;     /* '<S723>/CrankCounter' */
  real_T s632_UnitDelay_DSTATE;        /* '<S632>/Unit Delay' */
  real_T s641_UnitDelay_DSTATE;        /* '<S641>/Unit Delay' */
  real_T s634_UnitDelay_DSTATE;        /* '<S634>/Unit Delay' */
  real_T s659_UnitDelay_DSTATE;        /* '<S659>/Unit Delay' */
  real_T s633_UnitDelay_DSTATE;        /* '<S633>/Unit Delay' */
  real_T s650_UnitDelay_DSTATE;        /* '<S650>/Unit Delay' */
  real_T s325_UnitDelay_DSTATE[8];     /* '<S325>/Unit Delay' */
  real_T s415_UnitDelay1_DSTATE;       /* '<S415>/Unit Delay1' */
  real_T s414_UnitDelay1_DSTATE;       /* '<S414>/Unit Delay1' */
  real_T s396_UnitDelay2_DSTATE;       /* '<S396>/Unit Delay2' */
  real_T s409_UnitDelay_DSTATE;        /* '<S409>/Unit Delay' */
  real_T s412_UnitDelay_DSTATE;        /* '<S412>/Unit Delay' */
  real_T s396_UnitDelay1_DSTATE;       /* '<S396>/Unit Delay1' */
  real_T s396_UnitDelay3_DSTATE;       /* '<S396>/Unit Delay3' */
  real_T s396_UnitDelay4_DSTATE;       /* '<S396>/Unit Delay4' */
  real_T s387_UnitDelay_DSTATE;        /* '<S387>/Unit Delay' */
  real_T s358_UnitDelay1_DSTATE;       /* '<S358>/Unit Delay1' */
  real_T s304_UnitDelay_DSTATE;        /* '<S304>/Unit Delay' */
  real_T s183_UnitDelay_DSTATE;        /* '<S183>/Unit Delay' */
  real_T s184_UnitDelay_DSTATE;        /* '<S184>/Unit Delay' */
  real_T s124_UnitDelay_DSTATE;        /* '<S124>/Unit Delay' */
  real_T s162_UnitDelay_DSTATE;        /* '<S162>/Unit Delay' */
  real_T s152_UnitDelay_DSTATE;        /* '<S152>/Unit Delay' */
  real_T s161_UnitDelay_DSTATE;        /* '<S161>/Unit Delay' */
  real_T s290_UnitDelay_DSTATE;        /* '<S290>/Unit Delay' */
  real_T s218_UnitDelay_DSTATE;        /* '<S218>/Unit Delay' */
  real_T s229_UnitDelay_DSTATE;        /* '<S229>/Unit Delay' */
  real_T s230_UnitDelay_DSTATE;        /* '<S230>/Unit Delay' */
  real_T s255_UnitDelay_DSTATE;        /* '<S255>/Unit Delay' */
  real_T s257_UnitDelay_DSTATE;        /* '<S257>/Unit Delay' */
  real_T s130_UnitDelay3_DSTATE;       /* '<S130>/Unit Delay3' */
  real_T s130_UnitDelay1_DSTATE;       /* '<S130>/Unit Delay1' */
  real_T s236_state_DSTATE;            /* '<S236>/state' */
  real_T s130_UnitDelay2_DSTATE;       /* '<S130>/Unit Delay2' */
  real_T s240_UnitDelay_DSTATE;        /* '<S240>/Unit Delay' */
  real_T s267_UnitDelay_DSTATE;        /* '<S267>/Unit Delay' */
  real_T s268_UnitDelay_DSTATE;        /* '<S268>/Unit Delay' */
  real_T s262_UnitDelay_DSTATE;        /* '<S262>/Unit Delay' */
  real_T s243_UnitDelay_DSTATE;        /* '<S243>/Unit Delay' */
  real_T s282_UnitDelay_DSTATE;        /* '<S282>/Unit Delay' */
  real_T s281_UnitDelay_DSTATE;        /* '<S281>/Unit Delay' */
  real_T s278_UnitDelay1_DSTATE;       /* '<S278>/Unit Delay1' */
  real_T s278_UnitDelay_DSTATE;        /* '<S278>/Unit Delay' */
  real_T s278_UnitDelay2_DSTATE;       /* '<S278>/Unit Delay2' */
  real_T s206_UnitDelay_DSTATE;        /* '<S206>/Unit Delay' */
  real_T s205_UnitDelay_DSTATE;        /* '<S205>/Unit Delay' */
  real_T s106_UnitDelay_DSTATE;        /* '<S106>/Unit Delay' */
  real_T s91_UnitDelay2_DSTATE;        /* '<S91>/Unit Delay2' */
  real_T s12_UnitDelay_DSTATE;         /* '<S12>/Unit Delay' */
  real_T s46_UnitDelay_DSTATE;         /* '<S46>/Unit Delay' */
  real_T s37_UnitDelay_DSTATE;         /* '<S37>/Unit Delay' */
  real_T s33_UnitDelay_DSTATE;         /* '<S33>/Unit Delay' */
  real_T s35_UnitDelay_DSTATE;         /* '<S35>/Unit Delay' */
  real_T s38_UnitDelay_DSTATE;         /* '<S38>/Unit Delay' */
  real_T s39_UnitDelay_DSTATE;         /* '<S39>/Unit Delay' */
  real_T s806_UnitDelay_DSTATE;        /* '<S806>/Unit Delay' */
  real_T s806_UnitDelay1_DSTATE;       /* '<S806>/Unit Delay1' */
  real_T s354_TOld;                    /* '<S349>/Baro Stall State Delay' */
  real_T s18_TimerOld;                 /* '<S12>/ETC Test  Manager' */
  uint32_T s434_UnitDelay_DSTATE;      /* '<S434>/Unit Delay' */
  uint32_T s539_UnitDelay_DSTATE;      /* '<S539>/Unit Delay' */
  uint32_T s550_motohawk_delta_time_DWORK1;/* '<S550>/motohawk_delta_time' */
  uint32_T s533_motohawk_delta_time_DWORK1;/* '<S533>/motohawk_delta_time' */
  uint32_T s666_motohawk_delta_time_DWORK1;/* '<S666>/motohawk_delta_time' */
  uint32_T s676_motohawk_delta_time_DWORK1;/* '<S676>/motohawk_delta_time' */
  uint32_T s686_motohawk_delta_time_DWORK1;/* '<S686>/motohawk_delta_time' */
  uint32_T s696_motohawk_delta_time_DWORK1;/* '<S696>/motohawk_delta_time' */
  uint32_T s567_motohawk_delta_time_DWORK1;/* '<S567>/motohawk_delta_time' */
  uint32_T s563_motohawk_delta_time_DWORK1;/* '<S563>/motohawk_delta_time' */
  uint32_T s623_motohawk_delta_time_DWORK1;/* '<S623>/motohawk_delta_time' */
  uint32_T s425_motohawk_delta_time_DWORK1;/* '<S425>/motohawk_delta_time' */
  uint32_T s349_motohawk_delta_time_DWORK1;/* '<S349>/motohawk_delta_time' */
  uint32_T s579_motohawk_delta_time_DWORK1;/* '<S579>/motohawk_delta_time' */
  uint32_T s513_motohawk_delta_time_DWORK1;/* '<S513>/motohawk_delta_time' */
  uint32_T s368_motohawk_delta_time1_DWORK1;/* '<S368>/motohawk_delta_time1' */
  uint32_T s417_motohawk_delta_time_DWORK1;/* '<S417>/motohawk_delta_time' */
  uint32_T s475_motohawk_delta_time_DWORK1;/* '<S475>/motohawk_delta_time' */
  uint32_T s476_motohawk_delta_time_DWORK1;/* '<S476>/motohawk_delta_time' */
  uint32_T s477_motohawk_delta_time_DWORK1;/* '<S477>/motohawk_delta_time' */
  uint32_T s478_motohawk_delta_time_DWORK1;/* '<S478>/motohawk_delta_time' */
  uint32_T s479_motohawk_delta_time_DWORK1;/* '<S479>/motohawk_delta_time' */
  uint32_T s494_motohawk_delta_time_DWORK1;/* '<S494>/motohawk_delta_time' */
  uint32_T s499_motohawk_delta_time_DWORK1;/* '<S499>/motohawk_delta_time' */
  uint32_T s504_motohawk_delta_time_DWORK1;/* '<S504>/motohawk_delta_time' */
  uint32_T s524_motohawk_delta_time_DWORK1;/* '<S524>/motohawk_delta_time' */
  uint32_T s529_motohawk_delta_time_DWORK1;/* '<S529>/motohawk_delta_time' */
  uint32_T s587_motohawk_delta_time_DWORK1;/* '<S587>/motohawk_delta_time' */
  uint32_T s613_motohawk_delta_time_DWORK1;/* '<S613>/motohawk_delta_time' */
  uint32_T s758_motohawk_delta_time_DWORK1;/* '<S758>/motohawk_delta_time' */
  uint32_T s427_motohawk_delta_time_DWORK1;/* '<S427>/motohawk_delta_time' */
  uint32_T s423_motohawk_delta_time_DWORK1;/* '<S423>/motohawk_delta_time' */
  uint32_T s571_motohawk_delta_time_DWORK1;/* '<S571>/motohawk_delta_time' */
  uint32_T s597_motohawk_delta_time_DWORK1;/* '<S597>/motohawk_delta_time' */
  uint32_T s605_motohawk_delta_time_DWORK1;/* '<S605>/motohawk_delta_time' */
  uint32_T s381_motohawk_delta_time_DWORK1;/* '<S381>/motohawk_delta_time' */
  uint32_T s635_motohawk_delta_time_DWORK1;/* '<S635>/motohawk_delta_time' */
  uint32_T s653_motohawk_delta_time_DWORK1;/* '<S653>/motohawk_delta_time' */
  uint32_T s644_motohawk_delta_time_DWORK1;/* '<S644>/motohawk_delta_time' */
  uint32_T s316_motohawk_delta_time_DWORK1;/* '<S316>/motohawk_delta_time' */
  uint32_T s315_motohawk_delta_time_DWORK1;/* '<S315>/motohawk_delta_time' */
  uint32_T s319_motohawk_delta_time_DWORK1;/* '<S319>/motohawk_delta_time' */
  uint32_T s318_motohawk_delta_time_DWORK1;/* '<S318>/motohawk_delta_time' */
  uint32_T s320_motohawk_delta_time_DWORK1;/* '<S320>/motohawk_delta_time' */
  uint32_T s330_motohawk_delta_time_DWORK1;/* '<S330>/motohawk_delta_time' */
  uint32_T s331_motohawk_delta_time_DWORK1;/* '<S331>/motohawk_delta_time' */
  uint32_T s332_motohawk_delta_time_DWORK1;/* '<S332>/motohawk_delta_time' */
  uint32_T s348_motohawk_delta_time_DWORK1;/* '<S348>/motohawk_delta_time' */
  uint32_T s347_motohawk_delta_time_DWORK1;/* '<S347>/motohawk_delta_time' */
  uint32_T s323_motohawk_delta_time_DWORK1;/* '<S323>/motohawk_delta_time' */
  uint32_T s327_motohawk_delta_time_DWORK1;/* '<S327>/motohawk_delta_time' */
  uint32_T s412_motohawk_delta_time_DWORK1;/* '<S412>/motohawk_delta_time' */
  uint32_T s396_motohawk_delta_time_DWORK1;/* '<S396>/motohawk_delta_time' */
  uint32_T s387_motohawk_delta_time1_DWORK1;/* '<S387>/motohawk_delta_time1' */
  uint32_T s152_motohawk_delta_time_DWORK1;/* '<S152>/motohawk_delta_time' */
  uint32_T s162_motohawk_delta_time_DWORK1;/* '<S162>/motohawk_delta_time' */
  uint32_T s184_motohawk_delta_time_DWORK1;/* '<S184>/motohawk_delta_time' */
  uint32_T s218_motohawk_delta_time_DWORK1;/* '<S218>/motohawk_delta_time' */
  uint32_T s230_motohawk_delta_time_DWORK1;/* '<S230>/motohawk_delta_time' */
  uint32_T s236_motohawk_delta_time_DWORK1;/* '<S236>/motohawk_delta_time' */
  uint32_T s240_motohawk_delta_time_DWORK1;/* '<S240>/motohawk_delta_time' */
  uint32_T s268_motohawk_delta_time_DWORK1;/* '<S268>/motohawk_delta_time' */
  uint32_T s243_motohawk_delta_time_DWORK1;/* '<S243>/motohawk_delta_time' */
  uint32_T s282_motohawk_delta_time_DWORK1;/* '<S282>/motohawk_delta_time' */
  uint32_T s286_motohawk_delta_time_DWORK1;/* '<S286>/motohawk_delta_time' */
  uint32_T s288_motohawk_delta_time_DWORK1;/* '<S288>/motohawk_delta_time' */
  uint32_T s287_motohawk_delta_time_DWORK1;/* '<S287>/motohawk_delta_time' */
  uint32_T s204_motohawk_delta_time_DWORK1;/* '<S204>/motohawk_delta_time' */
  uint32_T s203_motohawk_delta_time_DWORK1;/* '<S203>/motohawk_delta_time' */
  uint32_T s54_motohawk_delta_time_DWORK1;/* '<S54>/motohawk_delta_time' */
  uint32_T s46_motohawk_delta_time_DWORK1;/* '<S46>/motohawk_delta_time' */
  uint32_T s34_motohawk_delta_time_DWORK1;/* '<S34>/motohawk_delta_time' */
  uint32_T s39_motohawk_delta_time_DWORK1;/* '<S39>/motohawk_delta_time' */
  uint32_T s816_motohawk_delta_time_DWORK1;/* '<S816>/motohawk_delta_time' */
  int_T s130_HitCrossing1_MODE;        /* '<S130>/Hit  Crossing1' */
  uint16_T s712_InjectorSequence_DWORK2;/* '<S712>/Injector Sequence' */
  int8_T s398_UnitDelay_DSTATE;        /* '<S398>/Unit Delay' */
  int8_T s397_UnitDelay_DSTATE;        /* '<S397>/Unit Delay' */
  int8_T s355_UnitDelay_DSTATE;        /* '<S355>/Unit Delay' */
  uint8_T s401_UnitDelay_DSTATE;       /* '<S401>/Unit Delay' */
  uint8_T s421_CrankCounter_DSTATE;    /* '<S421>/CrankCounter' */
  uint8_T s91_UnitDelay1_DSTATE;       /* '<S91>/Unit Delay1' */
  boolean_T s338_UnitDelay_DSTATE;     /* '<S338>/Unit Delay' */
  boolean_T s339_UnitDelay_DSTATE;     /* '<S339>/Unit Delay' */
  boolean_T s344_UnitDelay_DSTATE;     /* '<S344>/Unit Delay' */
  boolean_T s345_UnitDelay_DSTATE;     /* '<S345>/Unit Delay' */
  boolean_T s340_UnitDelay_DSTATE;     /* '<S340>/Unit Delay' */
  boolean_T s346_UnitDelay_DSTATE;     /* '<S346>/Unit Delay' */
  boolean_T s301_UnitDelay_DSTATE;     /* '<S301>/Unit Delay' */
  boolean_T s302_UnitDelay_DSTATE;     /* '<S302>/Unit Delay' */
  boolean_T s303_UnitDelay_DSTATE;     /* '<S303>/Unit Delay' */
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
  boolean_T s293_InitialConditionisTrue_DSTATE;/* '<S293>/Initial Condition is True' */
  boolean_T s129_UnitDelay_DSTATE;     /* '<S129>/Unit Delay' */
  boolean_T s233_UnitDelay_DSTATE;     /* '<S233>/Unit Delay' */
  boolean_T s285_UnitDelay_DSTATE;     /* '<S285>/Unit Delay' */
  boolean_T s36_UnitDelay_DSTATE;      /* '<S36>/Unit Delay' */
  boolean_T s805_UnitDelay8_DSTATE;    /* '<S805>/Unit Delay8' */
  boolean_T s805_UnitDelay6_DSTATE;    /* '<S805>/Unit Delay6' */
  boolean_T s805_UnitDelay7_DSTATE;    /* '<S805>/Unit Delay7' */
  boolean_T s801_UnitDelay_DSTATE;     /* '<S801>/Unit Delay' */
  boolean_T s807_UnitDelay2_DSTATE;    /* '<S807>/Unit Delay2' */
  boolean_T s800_UnitDelay5_DSTATE;    /* '<S800>/Unit Delay5' */
  boolean_T s807_UnitDelay_DSTATE;     /* '<S807>/Unit Delay' */
  boolean_T s807_UnitDelay1_DSTATE;    /* '<S807>/Unit Delay1' */
  boolean_T s800_UnitDelay3_DSTATE;    /* '<S800>/Unit Delay3' */
  boolean_T s800_UnitDelay4_DSTATE;    /* '<S800>/Unit Delay4' */
  uint8_T s439_motohawk_trigger_DWORK1;/* '<S439>/motohawk_trigger' */
  uint8_T s401_motohawk_trigger_DWORK1;/* '<S401>/motohawk_trigger' */
  uint8_T s546_motohawk_trigger5_DWORK1;/* '<S546>/motohawk_trigger5' */
  uint8_T s6_motohawk_trigger1_DWORK1; /* '<S6>/motohawk_trigger1' */
  uint8_T s6_motohawk_trigger_DWORK1;  /* '<S6>/motohawk_trigger' */
  uint8_T s5_motohawk_trigger_DWORK1;  /* '<S5>/motohawk_trigger' */
  uint8_T s723_motohawk_trigger1_DWORK1;/* '<S723>/motohawk_trigger1' */
  uint8_T s463_is_active_c29_BaseEngineController_A02_bak2;/* '<S443>/Chart' */
  uint8_T s463_is_c29_BaseEngineController_A02_bak2;/* '<S443>/Chart' */
  uint8_T s420_is_c2_BaseEngineController_A02_bak2;/* '<S401>/Engine State Machine' */
  uint8_T s354_is_c19_BaseEngineController_A02_bak2;/* '<S349>/Baro Stall State Delay' */
  uint8_T s112_motohawk_trigger1_DWORK1;/* '<S112>/motohawk_trigger1' */
  uint8_T s252_is_active_c12_BaseEngineController_A02_bak2;/* '<S237>/IdleStateMachine' */
  uint8_T s252_is_c12_BaseEngineController_A02_bak2;/* '<S237>/IdleStateMachine' */
  uint8_T s179_is_active_c1_BaseEngineController_A02_bak2;/* '<S177>/Multiplexed On Stateflow' */
  uint8_T s179_is_c1_BaseEngineController_A02_bak2;/* '<S177>/Multiplexed On Stateflow' */
  uint8_T s178_is_active_c3_BaseEngineController_A02_bak2;/* '<S176>/Individual On Stateflow' */
  uint8_T s178_is_c3_BaseEngineController_A02_bak2;/* '<S176>/Individual On Stateflow' */
  uint8_T s91_motohawk_trigger_DWORK1; /* '<S91>/motohawk_trigger' */
  uint8_T s18_is_c9_BaseEngineController_A02_bak2;/* '<S12>/ETC Test  Manager' */
  uint8_T s804_is_c8_BaseEngineController_A02_bak2;/* '<S800>/ECUP Latch' */
  boolean_T s712_InjectorSequence_DWORK1[8];/* '<S712>/Injector Sequence' */
  boolean_T s273_Multiplyby10ifnotyetenabled_FirstOutputTime;/* '<S273>/Multiply by 1.0 if not yet enabled' */
  boolean_T s820_Memory_PreviousInput; /* '<S820>/Memory' */
  boolean_T s7_Stall_MODE;             /* '<S7>/Stall' */
  boolean_T s7_Crank_MODE;             /* '<S7>/Crank' */
  boolean_T s349_CaptureSignalAtStartup_MODE;/* '<S349>/Capture Signal At Startup' */
  boolean_T s352_CaptureECTAtStartup_MODE;/* '<S352>/Capture ECT At Startup' */
  boolean_T s352_CaptureIATAtStartup_MODE;/* '<S352>/Capture IAT At Startup' */
  boolean_T s7_Run_MODE;               /* '<S7>/Run' */
  boolean_T s14_PassThrough1_MODE;     /* '<S14>/PassThrough1' */
  boolean_T s14_PassThrough3_MODE;     /* '<S14>/PassThrough3' */
  boolean_T s14_SequenceCutMachine_MODE;/* '<S14>/SequenceCutMachine' */
  boolean_T s14_PassThrough4_MODE;     /* '<S14>/PassThrough4' */
  boolean_T s6_ElectronicThrottleController_MODE;/* '<S6>/Electronic Throttle Controller' */
  boolean_T s14_PassThrough5_MODE;     /* '<S14>/PassThrough5' */
  boolean_T s398_CollectAverage_MODE;  /* '<S398>/Collect Average' */
  boolean_T s397_CollectAverage_MODE;  /* '<S397>/Collect Average' */
  boolean_T s355_CollectAverage_MODE;  /* '<S355>/Collect Average' */
  boolean_T s194_DeltaTPSTransientFueling_MODE;/* '<S194>/Delta TPS Transient Fueling' */
  boolean_T s199_ECTTransientFueling_MODE;/* '<S199>/ECT Transient Fueling' */
  boolean_T s22_PassThrough_MODE;      /* '<S22>/PassThrough' */
} D_Work_BaseEngineController_A02_bak2;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState HitCrossing1_Input_ZCE;   /* '<S130>/Hit  Crossing1' */
  ZCSigState ResetTasksCompleteToFalse_Trig_ZCE;/* '<S23>/Reset TasksComplete To False' */
  ZCSigState ResetTasksCompleteToTrue_Trig_ZCE;/* '<S12>/Reset TasksComplete To True' */
  ZCSigState ShutdownpoweronECU565563_Trig_ZCE;/* '<S807>/Shutdown power on ECU565//563' */
  ZCSigState SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE;/* '<S807>/Save NV Vars one tick before MPRD off' */
  ZCSigState ProcessorReboot_Trig_ZCE; /* '<S807>/Processor Reboot' */
  ZCSigState PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE;/* '<S807>/Post Shutdown two ticks before MPRD off' */
  ZCSigState ShutdownpoweronECU565563_Trig_ZCE_o;/* '<S805>/Shutdown power on ECU565//563' */
  ZCSigState SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE_i;/* '<S805>/Save NV Vars one tick before MPRD off' */
  ZCSigState ProcessorReboot_Trig_ZCE_b;/* '<S805>/Processor Reboot' */
  ZCSigState PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE_j;/* '<S805>/Post Shutdown two ticks before MPRD off' */
  ZCSigState Clear_Trig_ZCE;           /* '<S803>/Clear' */
  ZCSigState Clear_Trig_ZCE_g;         /* '<S802>/Clear' */
} PrevZCSigStates_BaseEngineController_A02_bak2;

/* Invariant block signals (auto storage) */
typedef struct {
  const real_T s712_Gain4;             /* '<S712>/Gain4' */
  const real_T s114_motohawk_replicate2;/* '<S114>/motohawk_replicate2' */
  const real_T s114_motohawk_replicate[8];/* '<S114>/motohawk_replicate' */
  const uint32_T s712_DataTypeConversion5;/* '<S712>/Data Type Conversion5' */
} ConstBlockIO_BaseEngineController_A02_bak2;

/* Constant parameters (auto storage) */
typedef struct {
  /* Computed Parameter: Logic_table
   * Referenced by: '<S820>/Logic'
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
   *   '<S301>/Combinatorial  Logic'
   *   '<S302>/Combinatorial  Logic'
   *   '<S303>/Combinatorial  Logic'
   *   '<S338>/Combinatorial  Logic'
   *   '<S339>/Combinatorial  Logic'
   *   '<S340>/Combinatorial  Logic'
   *   '<S344>/Combinatorial  Logic'
   *   '<S345>/Combinatorial  Logic'
   *   '<S346>/Combinatorial  Logic'
   *   '<S36>/Combinatorial  Logic'
   *   '<S285>/Combinatorial  Logic'
   */
  boolean_T pooled707[8];
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
 * '<S204>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling/First Order Low Pass (Tunable)1
 * '<S205>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S206>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling/First Order Low Pass (Tunable)1/First Order Low Pass
 * '<S207>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Mass Flow to Charge Mass Transform/Multiply and Divide, avoiding divde by zero
 * '<S208>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Mass Flow to Charge Mass Transform/NonZero RPM
 * '<S209>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/Adapt FuelFlowComp Map
 * '<S210>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/Cals_and_Probes_Page
 * '<S211>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/O2 Control Enable Delay
 * '<S212>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/Saturation (Tunable)
 * '<S213>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/WarmUp Disable
 * '<S214>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/O2 Control Enable Delay/Time Since Enabled (With Input)1
 * '<S215>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/Saturation (Tunable)/Saturation
 * '<S216>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MaxGovernor/I-Term Preload
 * '<S217>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MaxGovernor/MaxGovState
 * '<S218>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MaxGovernor/Ramp RPM
 * '<S219>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MaxGovernor/Trigger Pre-load
 * '<S220>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)
 * '<S221>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MaxGovernor/MaxGovState/MaxGOV Stateflow
 * '<S222>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MaxGovernor/Trigger Pre-load/InGear
 * '<S223>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MaxGovernor/Trigger Pre-load/InNeutral
 * '<S224>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MaxGovernor/Trigger Pre-load/InGear/Saturation
 * '<S225>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MaxGovernor/Trigger Pre-load/InNeutral/Saturation
 * '<S226>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Cals_and_Probes_Page
 * '<S227>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Saturation
 * '<S228>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Universal PID
 * '<S229>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Derivitive3
 * '<S230>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Integrator
 * '<S231>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Model Info
 * '<S232>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Integrator/Saturation
 * '<S233>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MinGovernor/AiflowOffset
 * '<S234>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MinGovernor/Base Airflow Table Adapt
 * '<S235>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MinGovernor/Base RPM Set Pt
 * '<S236>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MinGovernor/Handoff Alpha
 * '<S237>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination
 * '<S238>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MinGovernor/MotoringDetection
 * '<S239>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MinGovernor/OnIdle State
 * '<S240>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MinGovernor/Ramp RPM
 * '<S241>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MinGovernor/Universal PD (Tunable & Scheduled)
 * '<S242>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)
 * '<S243>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MinGovernor/AiflowOffset/Ramp Air Into Idle State
 * '<S244>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MinGovernor/AiflowOffset/Run
 * '<S245>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MinGovernor/Base Airflow Table Adapt/Adapt Base Airflow Table
 * '<S246>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MinGovernor/Base Airflow Table Adapt/Idle Control Enable Delay
 * '<S247>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MinGovernor/Base Airflow Table Adapt/Saturation (Tunable)
 * '<S248>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MinGovernor/Base Airflow Table Adapt/Idle Control Enable Delay/Time Since Enabled (With Input)1
 * '<S249>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MinGovernor/Base Airflow Table Adapt/Saturation (Tunable)/Saturation
 * '<S250>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MinGovernor/Handoff Alpha/Saturation
 * '<S251>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/Determine if RPM is Falling
 * '<S252>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/IdleStateMachine
 * '<S253>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/OnIdle State
 * '<S254>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/Time Since Enabled (With Input)1
 * '<S255>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/Determine if RPM is Falling/Derivitive
 * '<S256>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/Determine if RPM is Falling/First Order Low Pass (Tunable)
 * '<S257>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/Determine if RPM is Falling/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S258>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MinGovernor/MotoringDetection/Time Since Enabled (With Input)2
 * '<S259>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MinGovernor/Universal PD (Tunable & Scheduled)/PID Gain Select
 * '<S260>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MinGovernor/Universal PD (Tunable & Scheduled)/Saturation
 * '<S261>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MinGovernor/Universal PD (Tunable & Scheduled)/Universal PD
 * '<S262>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MinGovernor/Universal PD (Tunable & Scheduled)/Universal PD/Derivitive
 * '<S263>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MinGovernor/Universal PD (Tunable & Scheduled)/Universal PD/Model Info
 * '<S264>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/PID Gain Select1
 * '<S265>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/Saturation
 * '<S266>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/Universal PID
 * '<S267>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Derivitive3
 * '<S268>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Integrator
 * '<S269>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Model Info
 * '<S270>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Integrator/Saturation
 * '<S271>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/O2 Control/O2 Control State Determination
 * '<S272>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/O2 Control/O2 PID Calibrations
 * '<S273>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller
 * '<S274>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/O2 Control/O2 Control State Determination/Cals_and_Probes_Page
 * '<S275>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/O2 Control/O2 PID Calibrations/Error Gain Scheduling
 * '<S276>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/O2 Control/O2 PID Calibrations/O2 Control Switch Point Maps
 * '<S277>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Closed-Loop O2 PID Controller
 * '<S278>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Equivalence Ratio Perturbation
 * '<S279>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Closed-Loop O2 PID Controller/Saturation
 * '<S280>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Closed-Loop O2 PID Controller/Universal PID
 * '<S281>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Closed-Loop O2 PID Controller/Universal PID/Derivitive3
 * '<S282>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Closed-Loop O2 PID Controller/Universal PID/Integrator
 * '<S283>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Closed-Loop O2 PID Controller/Universal PID/Model Info
 * '<S284>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Closed-Loop O2 PID Controller/Universal PID/Integrator/Saturation
 * '<S285>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Equivalence Ratio Perturbation/Hysteresis
 * '<S286>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Equivalence Ratio Perturbation/Time Since Enabled (With Input)1
 * '<S287>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Equivalence Ratio Perturbation/Time Since Enabled (With Input)2
 * '<S288>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Equivalence Ratio Perturbation/Time Since Enabled (With Input)3
 * '<S289>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Spark Manager/Ethanol Spark Offset
 * '<S290>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Spark Manager/Spark Advance Rate Limiter
 * '<S291>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Spark Manager/SparkAdvanceLimiter
 * '<S292>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Spark Manager/Temp Comp Offset
 * '<S293>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Spark Manager/Spark Advance Rate Limiter/First Time
 * '<S294>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Spark Manager/Spark Advance Rate Limiter/Saturation
 * '<S295>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Run/Spark Manager/SparkAdvanceLimiter/Saturation
 * '<S296>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Stall/FAN Control
 * '<S297>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Stall/Fuel Pump at Startup
 * '<S298>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Stall/FAN Control/Hysterisis
 * '<S299>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Stall/FAN Control/Hysterisis1
 * '<S300>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Stall/FAN Control/Hysterisis2
 * '<S301>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Stall/FAN Control/Hysterisis/Hysteresis
 * '<S302>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Stall/FAN Control/Hysterisis1/Hysteresis
 * '<S303>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Stall/FAN Control/Hysterisis2/Hysteresis
 * '<S304>' : BaseEngineController_A02_bak2/Foreground/Control/Controller/Stall/Fuel Pump at Startup/Time Since Enabled
 * '<S305>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/AC Fault
 * '<S306>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/Boost Fault
 * '<S307>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/Cruise Fault
 * '<S308>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/Engine Overheat Fault Logic
 * '<S309>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/Fuel Economy
 * '<S310>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/Low Oil Pressure Fault Logic
 * '<S311>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/MAP Fault Logic
 * '<S312>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/Overspeed Protection
 * '<S313>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/Wrong Fuel Pressure Fault Logic
 * '<S314>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/AC Fault/Run State
 * '<S315>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/AC Fault/Time Since Enabled (With Input)1
 * '<S316>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/AC Fault/Time Since Enabled (With Input)2
 * '<S317>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/Boost Fault/Run State
 * '<S318>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/Boost Fault/Time Since Enabled (With Input)1
 * '<S319>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/Boost Fault/Time Since Enabled (With Input)2
 * '<S320>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/Boost Fault/Time Since Enabled (With Input)3
 * '<S321>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/Engine Overheat Fault Logic/Run State
 * '<S322>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/Fuel Economy/Calculate Fuel Density
 * '<S323>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/Fuel Economy/First Order Low Pass (Tunable)
 * '<S324>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/Fuel Economy/Multiply and Divide, avoiding divde by zero1
 * '<S325>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/Fuel Economy/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S326>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/Low Oil Pressure Fault Logic/Run State
 * '<S327>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/Low Oil Pressure Fault Logic/Time Since Enabled (With Input)2
 * '<S328>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/MAP Fault Logic/Cals_and_Probes_Page
 * '<S329>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/MAP Fault Logic/Run State
 * '<S330>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/MAP Fault Logic/Time Since Enabled (With Input)1
 * '<S331>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/MAP Fault Logic/Time Since Enabled (With Input)2
 * '<S332>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/MAP Fault Logic/Time Since Enabled (With Input)3
 * '<S333>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/Overspeed Protection/BaseRevLimit
 * '<S334>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/Overspeed Protection/TwoStepRevLimit
 * '<S335>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/Overspeed Protection/BaseRevLimit/Hysterisis
 * '<S336>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/Overspeed Protection/BaseRevLimit/Hysterisis1
 * '<S337>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/Overspeed Protection/BaseRevLimit/Hysterisis2
 * '<S338>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/Overspeed Protection/BaseRevLimit/Hysterisis/Hysteresis
 * '<S339>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/Overspeed Protection/BaseRevLimit/Hysterisis1/Hysteresis
 * '<S340>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/Overspeed Protection/BaseRevLimit/Hysterisis2/Hysteresis
 * '<S341>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/Overspeed Protection/TwoStepRevLimit/Hysterisis
 * '<S342>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/Overspeed Protection/TwoStepRevLimit/Hysterisis1
 * '<S343>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/Overspeed Protection/TwoStepRevLimit/Hysterisis2
 * '<S344>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/Overspeed Protection/TwoStepRevLimit/Hysterisis/Hysteresis
 * '<S345>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/Overspeed Protection/TwoStepRevLimit/Hysterisis1/Hysteresis
 * '<S346>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/Overspeed Protection/TwoStepRevLimit/Hysterisis2/Hysteresis
 * '<S347>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/Wrong Fuel Pressure Fault Logic/Time Since Enabled (With Input)1
 * '<S348>' : BaseEngineController_A02_bak2/Foreground/Control/Diagnostics/Wrong Fuel Pressure Fault Logic/Time Since Enabled (With Input)2
 * '<S349>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/AirCalcs
 * '<S350>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/LoadBasedCalcs
 * '<S351>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/Raw Indexes
 * '<S352>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/RawProcessed
 * '<S353>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/Virtual Indexes
 * '<S354>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/AirCalcs/Baro Stall State Delay
 * '<S355>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/AirCalcs/Capture Signal At Startup
 * '<S356>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/AirCalcs/Speed Density - MAP Referenced - Adaptive
 * '<S357>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/AirCalcs/motohawk_override_rel
 * '<S358>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/AirCalcs/Capture Signal At Startup/Collect Average
 * '<S359>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/AirCalcs/Speed Density - MAP Referenced - Adaptive/Adapt Volumetric Efficiency
 * '<S360>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/AirCalcs/Speed Density - MAP Referenced - Adaptive/C to K1
 * '<S361>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/AirCalcs/Speed Density - MAP Referenced - Adaptive/Adapt Volumetric Efficiency/Adapt VolEff Map
 * '<S362>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/AirCalcs/Speed Density - MAP Referenced - Adaptive/Adapt Volumetric Efficiency/Safe Divide
 * '<S363>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/AirCalcs/Speed Density - MAP Referenced - Adaptive/Adapt Volumetric Efficiency/Safe Divide/Subsystem
 * '<S364>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/AirCalcs/motohawk_override_rel/NewValue
 * '<S365>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/AirCalcs/motohawk_override_rel/OldValue
 * '<S366>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag
 * '<S367>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/LoadBasedCalcs/Load, Torque, Power, Work - Using APC
 * '<S368>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/LoadBasedCalcs/Normalized Effective Combustion Chamber Temperature
 * '<S369>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect1
 * '<S370>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect3
 * '<S371>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect1/DecreasingFilter
 * '<S372>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect1/First Order Low Pass
 * '<S373>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect1/IncreasingFilter
 * '<S374>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect3/DecreasingFilter
 * '<S375>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect3/First Order Low Pass
 * '<S376>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect3/IncreasingFilter
 * '<S377>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/LoadBasedCalcs/Load, Torque, Power, Work - Using APC/Air Per Cylinder Calculation
 * '<S378>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/LoadBasedCalcs/Load, Torque, Power, Work - Using APC/Calculate Power and Work
 * '<S379>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/LoadBasedCalcs/Load, Torque, Power, Work - Using APC/Air Per Cylinder Calculation/Multiply and Divide, avoiding divde by zero1
 * '<S380>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/LoadBasedCalcs/Load, Torque, Power, Work - Using APC/Air Per Cylinder Calculation/NonZero RPM
 * '<S381>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/LoadBasedCalcs/Load, Torque, Power, Work - Using APC/Calculate Power and Work/Integrate Power to Compute Work
 * '<S382>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/LoadBasedCalcs/Load, Torque, Power, Work - Using APC/Calculate Power and Work/Stall
 * '<S383>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/LoadBasedCalcs/Load, Torque, Power, Work - Using APC/Calculate Power and Work/Integrate Power to Compute Work/Saturation
 * '<S384>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/LoadBasedCalcs/Normalized Effective Combustion Chamber Temperature/CompareTo
 * '<S385>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/LoadBasedCalcs/Normalized Effective Combustion Chamber Temperature/Integrate Offset To ECT
 * '<S386>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/LoadBasedCalcs/Normalized Effective Combustion Chamber Temperature/Saturation
 * '<S387>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/LoadBasedCalcs/Normalized Effective Combustion Chamber Temperature/Integrate Offset To ECT/Integrator
 * '<S388>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/LoadBasedCalcs/Normalized Effective Combustion Chamber Temperature/Integrate Offset To ECT/Integrator/Saturation
 * '<S389>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/Raw Indexes/ACPres Index
 * '<S390>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/Raw Indexes/ECT Index
 * '<S391>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/Raw Indexes/IAT Indexes
 * '<S392>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/Raw Indexes/RPM Indexes
 * '<S393>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/Raw Indexes/SysVolt Index
 * '<S394>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/Raw Indexes/TPS Indexes
 * '<S395>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/RawProcessed/APP  Sensor Arbitration1
 * '<S396>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request
 * '<S397>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/RawProcessed/Capture ECT At Startup
 * '<S398>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/RawProcessed/Capture IAT At Startup
 * '<S399>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/RawProcessed/CutThrottle APP Limiting
 * '<S400>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/RawProcessed/Engine Accel
 * '<S401>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/RawProcessed/EngineState
 * '<S402>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/RawProcessed/Fuel Delta Pressure Calculation
 * '<S403>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/RawProcessed/O2 De-lag
 * '<S404>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/RawProcessed/Stall
 * '<S405>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/RawProcessed/TPS  Sensor Arbitration
 * '<S406>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/RawProcessed/Time Since Key On
 * '<S407>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/RawProcessed/Time Since Run
 * '<S408>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/RawProcessed/Time Since Stall
 * '<S409>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request/First Order Low Pass
 * '<S410>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request/PassThrough1
 * '<S411>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request/PassThrough2
 * '<S412>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request/Variable Rate Limiter
 * '<S413>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request/Variable Rate Limiter/Saturation
 * '<S414>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/RawProcessed/Capture ECT At Startup/Collect Average
 * '<S415>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/RawProcessed/Capture IAT At Startup/Collect Average
 * '<S416>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/RawProcessed/CutThrottle APP Limiting/Bound APP if overheating
 * '<S417>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/RawProcessed/Engine Accel/Derivitive3
 * '<S418>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/RawProcessed/Engine Accel/First Order Low Pass (Tunable)
 * '<S419>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/RawProcessed/Engine Accel/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S420>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/RawProcessed/EngineState/Engine State Machine
 * '<S421>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/RawProcessed/EngineState/TDC_Counter
 * '<S422>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/RawProcessed/EngineState/TDC_Counter/Crank State
 * '<S423>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/RawProcessed/Time Since Key On/Time Since Enabled (With Input)2
 * '<S424>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/RawProcessed/Time Since Run/RunState
 * '<S425>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/RawProcessed/Time Since Run/Time Since Enabled (With Input)2
 * '<S426>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/RawProcessed/Time Since Stall/Stall State
 * '<S427>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/RawProcessed/Time Since Stall/Time Since Enabled (With Input)1
 * '<S428>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/Virtual Indexes/ECT_KeyUp
 * '<S429>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/Virtual Indexes/IAT_KeyUp
 * '<S430>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/Virtual Indexes/MAFPortIndex
 * '<S431>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/Virtual Indexes/NECCT Index
 * '<S432>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/Virtual Indexes/Power Index
 * '<S433>' : BaseEngineController_A02_bak2/Foreground/Control/VirtualSensors/Virtual Indexes/Torque Indexes
 * '<S434>' : BaseEngineController_A02_bak2/Foreground/Control/motohawk_function_collector/motohawk_function_collector_in
 * '<S435>' : BaseEngineController_A02_bak2/Foreground/Control/motohawk_function_collector/motohawk_function_collector_in/Triggered Subsystem
 * '<S436>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital
 * '<S437>' : BaseEngineController_A02_bak2/Foreground/Inputs/EngineSpeed
 * '<S438>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors
 * '<S439>' : BaseEngineController_A02_bak2/Foreground/Inputs/NonLinearSensors
 * '<S440>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors
 * '<S441>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/ACSw
 * '<S442>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Brake
 * '<S443>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Cruise Control
 * '<S444>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/CruiseON
 * '<S445>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/CruiseRSM_SETP
 * '<S446>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/CruiseSETM
 * '<S447>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/ESTOP
 * '<S448>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/GearState
 * '<S449>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/MAF_Sensor
 * '<S450>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Scramble
 * '<S451>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Two Step
 * '<S452>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/ACSw /Override in Engineering Units
 * '<S453>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/ACSw /Override in Engineering Units/NewValue
 * '<S454>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/ACSw /Override in Engineering Units/OldValue
 * '<S455>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Brake /Override in Engineering Units
 * '<S456>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Brake /Override in Engineering Units/NewValue
 * '<S457>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Brake /Override in Engineering Units/OldValue
 * '<S458>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Cruise Control/Button Delay 1
 * '<S459>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Cruise Control/Button Delay 2
 * '<S460>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Cruise Control/Button Delay 3
 * '<S461>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Cruise Control/Button Delay 4
 * '<S462>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Cruise Control/Button Delay 5
 * '<S463>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Cruise Control/Chart
 * '<S464>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Cruise Control/Compare To Constant
 * '<S465>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Cruise Control/Compare To Constant1
 * '<S466>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Cruise Control/Compare To Constant2
 * '<S467>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Cruise Control/Compare To Constant3
 * '<S468>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Cruise Control/Compare To Constant4
 * '<S469>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Cruise Control/motohawk_override_abs1
 * '<S470>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Cruise Control/motohawk_override_abs12
 * '<S471>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Cruise Control/motohawk_override_abs2
 * '<S472>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Cruise Control/motohawk_override_abs3
 * '<S473>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Cruise Control/motohawk_override_abs4
 * '<S474>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Cruise Control/motohawk_override_abs5
 * '<S475>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Cruise Control/Button Delay 1/Time Since Enabled (With Input)4
 * '<S476>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Cruise Control/Button Delay 2/Time Since Enabled (With Input)4
 * '<S477>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Cruise Control/Button Delay 3/Time Since Enabled (With Input)4
 * '<S478>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Cruise Control/Button Delay 4/Time Since Enabled (With Input)4
 * '<S479>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Cruise Control/Button Delay 5/Time Since Enabled (With Input)4
 * '<S480>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Cruise Control/motohawk_override_abs1/NewValue
 * '<S481>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Cruise Control/motohawk_override_abs1/OldValue
 * '<S482>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Cruise Control/motohawk_override_abs12/NewValue
 * '<S483>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Cruise Control/motohawk_override_abs12/OldValue
 * '<S484>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Cruise Control/motohawk_override_abs2/NewValue
 * '<S485>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Cruise Control/motohawk_override_abs2/OldValue
 * '<S486>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Cruise Control/motohawk_override_abs3/NewValue
 * '<S487>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Cruise Control/motohawk_override_abs3/OldValue
 * '<S488>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Cruise Control/motohawk_override_abs4/NewValue
 * '<S489>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Cruise Control/motohawk_override_abs4/OldValue
 * '<S490>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Cruise Control/motohawk_override_abs5/NewValue
 * '<S491>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Cruise Control/motohawk_override_abs5/OldValue
 * '<S492>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/CruiseON /Button Delay 1
 * '<S493>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/CruiseON /Override in Engineering Units
 * '<S494>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/CruiseON /Button Delay 1/Time Since Enabled (With Input)4
 * '<S495>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/CruiseON /Override in Engineering Units/NewValue
 * '<S496>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/CruiseON /Override in Engineering Units/OldValue
 * '<S497>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/CruiseRSM_SETP /Button Delay 1
 * '<S498>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/CruiseRSM_SETP /Override in Engineering Units
 * '<S499>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/CruiseRSM_SETP /Button Delay 1/Time Since Enabled (With Input)4
 * '<S500>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/CruiseRSM_SETP /Override in Engineering Units/NewValue
 * '<S501>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/CruiseRSM_SETP /Override in Engineering Units/OldValue
 * '<S502>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/CruiseSETM /Button Delay 1
 * '<S503>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/CruiseSETM /Override in Engineering Units
 * '<S504>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/CruiseSETM /Button Delay 1/Time Since Enabled (With Input)4
 * '<S505>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/CruiseSETM /Override in Engineering Units/NewValue
 * '<S506>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/CruiseSETM /Override in Engineering Units/OldValue
 * '<S507>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/ESTOP/Override in Engineering Units
 * '<S508>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/ESTOP/Override in Engineering Units/NewValue
 * '<S509>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/ESTOP/Override in Engineering Units/OldValue
 * '<S510>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/GearState/Override in Engineering Units
 * '<S511>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/GearState/Override in Engineering Units/NewValue
 * '<S512>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/GearState/Override in Engineering Units/OldValue
 * '<S513>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/MAF_Sensor/First Order Low Pass
 * '<S514>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/MAF_Sensor/If Action Subsystem
 * '<S515>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/MAF_Sensor/If Action Subsystem1
 * '<S516>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/MAF_Sensor/If Action Subsystem2
 * '<S517>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/MAF_Sensor/Override
 * '<S518>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/MAF_Sensor/motohawk_table_1d1
 * '<S519>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/MAF_Sensor/First Order Low Pass/First Order Low Pass
 * '<S520>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/MAF_Sensor/Override/NewValue
 * '<S521>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/MAF_Sensor/Override/OldValue
 * '<S522>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Scramble /Button Delay 1
 * '<S523>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Scramble /Override in Engineering Units
 * '<S524>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Scramble /Button Delay 1/Time Since Enabled (With Input)4
 * '<S525>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Scramble /Override in Engineering Units/NewValue
 * '<S526>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Scramble /Override in Engineering Units/OldValue
 * '<S527>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Two Step/Button Delay 1
 * '<S528>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Two Step/Override in Engineering Units
 * '<S529>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Two Step/Button Delay 1/Time Since Enabled (With Input)4
 * '<S530>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Two Step/Override in Engineering Units/NewValue
 * '<S531>' : BaseEngineController_A02_bak2/Foreground/Inputs/Digital/Two Step/Override in Engineering Units/OldValue
 * '<S532>' : BaseEngineController_A02_bak2/Foreground/Inputs/EngineSpeed/Encoder Diagnostics
 * '<S533>' : BaseEngineController_A02_bak2/Foreground/Inputs/EngineSpeed/First Order Low Pass (Tunable)1
 * '<S534>' : BaseEngineController_A02_bak2/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/CamEdges
 * '<S535>' : BaseEngineController_A02_bak2/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/CamSync
 * '<S536>' : BaseEngineController_A02_bak2/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/CounterThresh
 * '<S537>' : BaseEngineController_A02_bak2/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/CrankEdges
 * '<S538>' : BaseEngineController_A02_bak2/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/CrankSync
 * '<S539>' : BaseEngineController_A02_bak2/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/motohawk_model_probe_eval_f
 * '<S540>' : BaseEngineController_A02_bak2/Foreground/Inputs/EngineSpeed/First Order Low Pass (Tunable)1/First Order Low Pass
 * '<S541>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/ACPres
 * '<S542>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/FuelOxygenationSensor
 * '<S543>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/FuelPres
 * '<S544>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/MAP
 * '<S545>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/MAPTime
 * '<S546>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/MAP_Crank_Synchronous
 * '<S547>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/OilPres
 * '<S548>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/SensVolts
 * '<S549>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/SysVolts
 * '<S550>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/ACPres /First Order Low Pass
 * '<S551>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/ACPres /If Action Subsystem
 * '<S552>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/ACPres /If Action Subsystem1
 * '<S553>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/ACPres /If Action Subsystem2
 * '<S554>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/ACPres /Override
 * '<S555>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/ACPres /First Order Low Pass/First Order Low Pass
 * '<S556>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/ACPres /Override/NewValue
 * '<S557>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/ACPres /Override/OldValue
 * '<S558>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options
 * '<S559>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/If Action Subsystem
 * '<S560>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/If Action Subsystem1
 * '<S561>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/If Action Subsystem2
 * '<S562>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Override
 * '<S563>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options/First Order Low Pass
 * '<S564>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options/Moving Average Filter
 * '<S565>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options/Rate Limiter
 * '<S566>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options/First Order Low Pass/First Order Low Pass
 * '<S567>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options/Rate Limiter/Variable Rate Limiter
 * '<S568>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options/Rate Limiter/Variable Rate Limiter/Saturation
 * '<S569>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Override/NewValue
 * '<S570>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Override/OldValue
 * '<S571>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/FuelPres/First Order Low Pass
 * '<S572>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/FuelPres/If Action Subsystem
 * '<S573>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/FuelPres/If Action Subsystem1
 * '<S574>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/FuelPres/If Action Subsystem2
 * '<S575>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/FuelPres/Override
 * '<S576>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/FuelPres/First Order Low Pass/First Order Low Pass
 * '<S577>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/FuelPres/Override/NewValue
 * '<S578>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/FuelPres/Override/OldValue
 * '<S579>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/MAP/First Order Low Pass
 * '<S580>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/MAP/If Action Subsystem
 * '<S581>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/MAP/If Action Subsystem1
 * '<S582>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/MAP/If Action Subsystem2
 * '<S583>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/MAP/Override
 * '<S584>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/MAP/First Order Low Pass/First Order Low Pass
 * '<S585>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/MAP/Override/NewValue
 * '<S586>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/MAP/Override/OldValue
 * '<S587>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/MAPTime/First Order Low Pass
 * '<S588>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/MAPTime/If Action Subsystem
 * '<S589>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/MAPTime/If Action Subsystem1
 * '<S590>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/MAPTime/If Action Subsystem2
 * '<S591>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/MAPTime/Override
 * '<S592>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/MAPTime/First Order Low Pass/First Order Low Pass
 * '<S593>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/MAPTime/Override/NewValue
 * '<S594>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/MAPTime/Override/OldValue
 * '<S595>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/MAP_Crank_Synchronous/MID_TDC
 * '<S596>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/MAP_Crank_Synchronous/Once at Startup
 * '<S597>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/OilPres/First Order Low Pass
 * '<S598>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/OilPres/If Action Subsystem
 * '<S599>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/OilPres/If Action Subsystem1
 * '<S600>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/OilPres/If Action Subsystem2
 * '<S601>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/OilPres/Override
 * '<S602>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/OilPres/First Order Low Pass/First Order Low Pass
 * '<S603>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/OilPres/Override/NewValue
 * '<S604>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/OilPres/Override/OldValue
 * '<S605>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/SensVolts/First Order Low Pass
 * '<S606>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/SensVolts/If Action Subsystem
 * '<S607>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/SensVolts/If Action Subsystem1
 * '<S608>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/SensVolts/If Action Subsystem2
 * '<S609>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/SensVolts/Override
 * '<S610>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/SensVolts/First Order Low Pass/First Order Low Pass
 * '<S611>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/SensVolts/Override/NewValue
 * '<S612>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/SensVolts/Override/OldValue
 * '<S613>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/SysVolts/First Order Low Pass
 * '<S614>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/SysVolts/If Action Subsystem
 * '<S615>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/SysVolts/If Action Subsystem1
 * '<S616>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/SysVolts/If Action Subsystem2
 * '<S617>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/SysVolts/Override
 * '<S618>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/SysVolts/First Order Low Pass/First Order Low Pass
 * '<S619>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/SysVolts/Override/NewValue
 * '<S620>' : BaseEngineController_A02_bak2/Foreground/Inputs/LinearSensors/SysVolts/Override/OldValue
 * '<S621>' : BaseEngineController_A02_bak2/Foreground/Inputs/NonLinearSensors/O2_PreCat
 * '<S622>' : BaseEngineController_A02_bak2/Foreground/Inputs/NonLinearSensors/Temp Sensors
 * '<S623>' : BaseEngineController_A02_bak2/Foreground/Inputs/NonLinearSensors/O2_PreCat/First Order Low Pass
 * '<S624>' : BaseEngineController_A02_bak2/Foreground/Inputs/NonLinearSensors/O2_PreCat/If Action Subsystem
 * '<S625>' : BaseEngineController_A02_bak2/Foreground/Inputs/NonLinearSensors/O2_PreCat/If Action Subsystem1
 * '<S626>' : BaseEngineController_A02_bak2/Foreground/Inputs/NonLinearSensors/O2_PreCat/If Action Subsystem2
 * '<S627>' : BaseEngineController_A02_bak2/Foreground/Inputs/NonLinearSensors/O2_PreCat/Override
 * '<S628>' : BaseEngineController_A02_bak2/Foreground/Inputs/NonLinearSensors/O2_PreCat/motohawk_table_1d1
 * '<S629>' : BaseEngineController_A02_bak2/Foreground/Inputs/NonLinearSensors/O2_PreCat/First Order Low Pass/First Order Low Pass
 * '<S630>' : BaseEngineController_A02_bak2/Foreground/Inputs/NonLinearSensors/O2_PreCat/Override/NewValue
 * '<S631>' : BaseEngineController_A02_bak2/Foreground/Inputs/NonLinearSensors/O2_PreCat/Override/OldValue
 * '<S632>' : BaseEngineController_A02_bak2/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT
 * '<S633>' : BaseEngineController_A02_bak2/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP
 * '<S634>' : BaseEngineController_A02_bak2/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT
 * '<S635>' : BaseEngineController_A02_bak2/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /First Order Low Pass
 * '<S636>' : BaseEngineController_A02_bak2/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /If Action Subsystem
 * '<S637>' : BaseEngineController_A02_bak2/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /If Action Subsystem1
 * '<S638>' : BaseEngineController_A02_bak2/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /If Action Subsystem2
 * '<S639>' : BaseEngineController_A02_bak2/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /Override
 * '<S640>' : BaseEngineController_A02_bak2/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /motohawk_table_1d1
 * '<S641>' : BaseEngineController_A02_bak2/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /First Order Low Pass/First Order Low Pass
 * '<S642>' : BaseEngineController_A02_bak2/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /Override/NewValue
 * '<S643>' : BaseEngineController_A02_bak2/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /Override/OldValue
 * '<S644>' : BaseEngineController_A02_bak2/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /First Order Low Pass
 * '<S645>' : BaseEngineController_A02_bak2/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /If Action Subsystem
 * '<S646>' : BaseEngineController_A02_bak2/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /If Action Subsystem1
 * '<S647>' : BaseEngineController_A02_bak2/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /If Action Subsystem2
 * '<S648>' : BaseEngineController_A02_bak2/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /Override
 * '<S649>' : BaseEngineController_A02_bak2/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /motohawk_table_1d1
 * '<S650>' : BaseEngineController_A02_bak2/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /First Order Low Pass/First Order Low Pass
 * '<S651>' : BaseEngineController_A02_bak2/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /Override/NewValue
 * '<S652>' : BaseEngineController_A02_bak2/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /Override/OldValue
 * '<S653>' : BaseEngineController_A02_bak2/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /First Order Low Pass
 * '<S654>' : BaseEngineController_A02_bak2/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /If Action Subsystem
 * '<S655>' : BaseEngineController_A02_bak2/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /If Action Subsystem1
 * '<S656>' : BaseEngineController_A02_bak2/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /If Action Subsystem2
 * '<S657>' : BaseEngineController_A02_bak2/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /Override
 * '<S658>' : BaseEngineController_A02_bak2/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /motohawk_table_1d1
 * '<S659>' : BaseEngineController_A02_bak2/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /First Order Low Pass/First Order Low Pass
 * '<S660>' : BaseEngineController_A02_bak2/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /Override/NewValue
 * '<S661>' : BaseEngineController_A02_bak2/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /Override/OldValue
 * '<S662>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/APP1
 * '<S663>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/APP2
 * '<S664>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/TPS1
 * '<S665>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/TPS2
 * '<S666>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/APP1/First Order Low Pass
 * '<S667>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/APP1/If Action Subsystem
 * '<S668>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/APP1/If Action Subsystem1
 * '<S669>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/APP1/If Action Subsystem2
 * '<S670>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/APP1/Override
 * '<S671>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/APP1/Saturation
 * '<S672>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/APP1/motohawk_table_1d1
 * '<S673>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/APP1/First Order Low Pass/First Order Low Pass
 * '<S674>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/APP1/Override/NewValue
 * '<S675>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/APP1/Override/OldValue
 * '<S676>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/APP2/First Order Low Pass
 * '<S677>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/APP2/If Action Subsystem
 * '<S678>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/APP2/If Action Subsystem1
 * '<S679>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/APP2/If Action Subsystem2
 * '<S680>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/APP2/Override
 * '<S681>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/APP2/Saturation
 * '<S682>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/APP2/motohawk_table_1d1
 * '<S683>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/APP2/First Order Low Pass/First Order Low Pass
 * '<S684>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/APP2/Override/NewValue
 * '<S685>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/APP2/Override/OldValue
 * '<S686>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/TPS1/First Order Low Pass
 * '<S687>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/TPS1/If Action Subsystem
 * '<S688>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/TPS1/If Action Subsystem1
 * '<S689>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/TPS1/If Action Subsystem2
 * '<S690>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/TPS1/Override
 * '<S691>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/TPS1/Saturation
 * '<S692>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/TPS1/motohawk_table_1d1
 * '<S693>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/TPS1/First Order Low Pass/First Order Low Pass
 * '<S694>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/TPS1/Override/NewValue
 * '<S695>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/TPS1/Override/OldValue
 * '<S696>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/TPS2/First Order Low Pass
 * '<S697>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/TPS2/If Action Subsystem
 * '<S698>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/TPS2/If Action Subsystem1
 * '<S699>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/TPS2/If Action Subsystem2
 * '<S700>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/TPS2/Override
 * '<S701>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/TPS2/Saturation
 * '<S702>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/TPS2/motohawk_table_1d1
 * '<S703>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/TPS2/First Order Low Pass/First Order Low Pass
 * '<S704>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/TPS2/Override/NewValue
 * '<S705>' : BaseEngineController_A02_bak2/Foreground/Inputs/PotentiometerSensors/TPS2/Override/OldValue
 * '<S706>' : BaseEngineController_A02_bak2/Foreground/Outputs/AC Control
 * '<S707>' : BaseEngineController_A02_bak2/Foreground/Outputs/Coil Control
 * '<S708>' : BaseEngineController_A02_bak2/Foreground/Outputs/FAN Control
 * '<S709>' : BaseEngineController_A02_bak2/Foreground/Outputs/FuelPump
 * '<S710>' : BaseEngineController_A02_bak2/Foreground/Outputs/HBridge
 * '<S711>' : BaseEngineController_A02_bak2/Foreground/Outputs/IAC-Control
 * '<S712>' : BaseEngineController_A02_bak2/Foreground/Outputs/Injector Control
 * '<S713>' : BaseEngineController_A02_bak2/Foreground/Outputs/WASTEGATE-Control
 * '<S714>' : BaseEngineController_A02_bak2/Foreground/Outputs/AC Control/Discrete Actuator - AC
 * '<S715>' : BaseEngineController_A02_bak2/Foreground/Outputs/AC Control/Discrete Actuator - AC/Override in Engineering Units
 * '<S716>' : BaseEngineController_A02_bak2/Foreground/Outputs/AC Control/Discrete Actuator - AC/Override in Engineering Units/NewValue
 * '<S717>' : BaseEngineController_A02_bak2/Foreground/Outputs/AC Control/Discrete Actuator - AC/Override in Engineering Units/OldValue
 * '<S718>' : BaseEngineController_A02_bak2/Foreground/Outputs/Coil Control/Coil Enable Manager
 * '<S719>' : BaseEngineController_A02_bak2/Foreground/Outputs/Coil Control/EST Fault Management
 * '<S720>' : BaseEngineController_A02_bak2/Foreground/Outputs/Coil Control/motohawk_override_rel
 * '<S721>' : BaseEngineController_A02_bak2/Foreground/Outputs/Coil Control/motohawk_override_rel1
 * '<S722>' : BaseEngineController_A02_bak2/Foreground/Outputs/Coil Control/Coil Enable Manager/CompareTo
 * '<S723>' : BaseEngineController_A02_bak2/Foreground/Outputs/Coil Control/Coil Enable Manager/EST Enable TDC Counter
 * '<S724>' : BaseEngineController_A02_bak2/Foreground/Outputs/Coil Control/Coil Enable Manager/EST Enable TDC Counter/EST Enable TDC Counter Stateflow
 * '<S725>' : BaseEngineController_A02_bak2/Foreground/Outputs/Coil Control/Coil Enable Manager/EST Enable TDC Counter/TDC_Counter
 * '<S726>' : BaseEngineController_A02_bak2/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo
 * '<S727>' : BaseEngineController_A02_bak2/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo1
 * '<S728>' : BaseEngineController_A02_bak2/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo10
 * '<S729>' : BaseEngineController_A02_bak2/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo11
 * '<S730>' : BaseEngineController_A02_bak2/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo12
 * '<S731>' : BaseEngineController_A02_bak2/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo13
 * '<S732>' : BaseEngineController_A02_bak2/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo14
 * '<S733>' : BaseEngineController_A02_bak2/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo15
 * '<S734>' : BaseEngineController_A02_bak2/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo2
 * '<S735>' : BaseEngineController_A02_bak2/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo3
 * '<S736>' : BaseEngineController_A02_bak2/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo4
 * '<S737>' : BaseEngineController_A02_bak2/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo5
 * '<S738>' : BaseEngineController_A02_bak2/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo6
 * '<S739>' : BaseEngineController_A02_bak2/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo7
 * '<S740>' : BaseEngineController_A02_bak2/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo8
 * '<S741>' : BaseEngineController_A02_bak2/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo9
 * '<S742>' : BaseEngineController_A02_bak2/Foreground/Outputs/Coil Control/motohawk_override_rel/NewValue
 * '<S743>' : BaseEngineController_A02_bak2/Foreground/Outputs/Coil Control/motohawk_override_rel/OldValue
 * '<S744>' : BaseEngineController_A02_bak2/Foreground/Outputs/Coil Control/motohawk_override_rel1/NewValue
 * '<S745>' : BaseEngineController_A02_bak2/Foreground/Outputs/Coil Control/motohawk_override_rel1/OldValue
 * '<S746>' : BaseEngineController_A02_bak2/Foreground/Outputs/FAN Control/Discrete Actuator - FAN1
 * '<S747>' : BaseEngineController_A02_bak2/Foreground/Outputs/FAN Control/Discrete Actuator - FAN2
 * '<S748>' : BaseEngineController_A02_bak2/Foreground/Outputs/FAN Control/Discrete Actuator - FAN1/Override in Engineering Units
 * '<S749>' : BaseEngineController_A02_bak2/Foreground/Outputs/FAN Control/Discrete Actuator - FAN1/Override in Engineering Units/NewValue
 * '<S750>' : BaseEngineController_A02_bak2/Foreground/Outputs/FAN Control/Discrete Actuator - FAN1/Override in Engineering Units/OldValue
 * '<S751>' : BaseEngineController_A02_bak2/Foreground/Outputs/FAN Control/Discrete Actuator - FAN2/Override in Engineering Units
 * '<S752>' : BaseEngineController_A02_bak2/Foreground/Outputs/FAN Control/Discrete Actuator - FAN2/Override in Engineering Units/NewValue
 * '<S753>' : BaseEngineController_A02_bak2/Foreground/Outputs/FAN Control/Discrete Actuator - FAN2/Override in Engineering Units/OldValue
 * '<S754>' : BaseEngineController_A02_bak2/Foreground/Outputs/FuelPump/Discrete Actuator - FUELP
 * '<S755>' : BaseEngineController_A02_bak2/Foreground/Outputs/FuelPump/Discrete Actuator - FUELP/Override in Engineering Units
 * '<S756>' : BaseEngineController_A02_bak2/Foreground/Outputs/FuelPump/Discrete Actuator - FUELP/Override in Engineering Units/NewValue
 * '<S757>' : BaseEngineController_A02_bak2/Foreground/Outputs/FuelPump/Discrete Actuator - FUELP/Override in Engineering Units/OldValue
 * '<S758>' : BaseEngineController_A02_bak2/Foreground/Outputs/HBridge/Time Since Enabled (With Input)1
 * '<S759>' : BaseEngineController_A02_bak2/Foreground/Outputs/HBridge/motohawk_override_abs2
 * '<S760>' : BaseEngineController_A02_bak2/Foreground/Outputs/HBridge/motohawk_override_abs2/NewValue
 * '<S761>' : BaseEngineController_A02_bak2/Foreground/Outputs/HBridge/motohawk_override_abs2/OldValue
 * '<S762>' : BaseEngineController_A02_bak2/Foreground/Outputs/IAC-Control/IAC-P-CONTROL
 * '<S763>' : BaseEngineController_A02_bak2/Foreground/Outputs/IAC-Control/IAC-S-CONTROL
 * '<S764>' : BaseEngineController_A02_bak2/Foreground/Outputs/IAC-Control/IAC-P-CONTROL/Saturation
 * '<S765>' : BaseEngineController_A02_bak2/Foreground/Outputs/IAC-Control/IAC-P-CONTROL/motohawk_override_abs2
 * '<S766>' : BaseEngineController_A02_bak2/Foreground/Outputs/IAC-Control/IAC-P-CONTROL/motohawk_override_abs2/NewValue
 * '<S767>' : BaseEngineController_A02_bak2/Foreground/Outputs/IAC-Control/IAC-P-CONTROL/motohawk_override_abs2/OldValue
 * '<S768>' : BaseEngineController_A02_bak2/Foreground/Outputs/IAC-Control/IAC-S-CONTROL/Saturation
 * '<S769>' : BaseEngineController_A02_bak2/Foreground/Outputs/IAC-Control/IAC-S-CONTROL/motohawk_override_abs2
 * '<S770>' : BaseEngineController_A02_bak2/Foreground/Outputs/IAC-Control/IAC-S-CONTROL/motohawk_override_abs2/NewValue
 * '<S771>' : BaseEngineController_A02_bak2/Foreground/Outputs/IAC-Control/IAC-S-CONTROL/motohawk_override_abs2/OldValue
 * '<S772>' : BaseEngineController_A02_bak2/Foreground/Outputs/Injector Control/Injector Diagnostics
 * '<S773>' : BaseEngineController_A02_bak2/Foreground/Outputs/Injector Control/Injector Enable Manager
 * '<S774>' : BaseEngineController_A02_bak2/Foreground/Outputs/Injector Control/motohawk_override_abs1
 * '<S775>' : BaseEngineController_A02_bak2/Foreground/Outputs/Injector Control/motohawk_override_abs2
 * '<S776>' : BaseEngineController_A02_bak2/Foreground/Outputs/Injector Control/motohawk_override_abs3
 * '<S777>' : BaseEngineController_A02_bak2/Foreground/Outputs/Injector Control/motohawk_override_abs4
 * '<S778>' : BaseEngineController_A02_bak2/Foreground/Outputs/Injector Control/motohawk_override_abs5
 * '<S779>' : BaseEngineController_A02_bak2/Foreground/Outputs/Injector Control/motohawk_override_abs6
 * '<S780>' : BaseEngineController_A02_bak2/Foreground/Outputs/Injector Control/Injector Enable Manager/Cals_and_Probes_Page
 * '<S781>' : BaseEngineController_A02_bak2/Foreground/Outputs/Injector Control/Injector Enable Manager/Stall
 * '<S782>' : BaseEngineController_A02_bak2/Foreground/Outputs/Injector Control/Injector Enable Manager/Time Since Enabled (With Input)1
 * '<S783>' : BaseEngineController_A02_bak2/Foreground/Outputs/Injector Control/motohawk_override_abs1/NewValue
 * '<S784>' : BaseEngineController_A02_bak2/Foreground/Outputs/Injector Control/motohawk_override_abs1/OldValue
 * '<S785>' : BaseEngineController_A02_bak2/Foreground/Outputs/Injector Control/motohawk_override_abs2/NewValue
 * '<S786>' : BaseEngineController_A02_bak2/Foreground/Outputs/Injector Control/motohawk_override_abs2/OldValue
 * '<S787>' : BaseEngineController_A02_bak2/Foreground/Outputs/Injector Control/motohawk_override_abs3/NewValue
 * '<S788>' : BaseEngineController_A02_bak2/Foreground/Outputs/Injector Control/motohawk_override_abs3/OldValue
 * '<S789>' : BaseEngineController_A02_bak2/Foreground/Outputs/Injector Control/motohawk_override_abs4/NewValue
 * '<S790>' : BaseEngineController_A02_bak2/Foreground/Outputs/Injector Control/motohawk_override_abs4/OldValue
 * '<S791>' : BaseEngineController_A02_bak2/Foreground/Outputs/Injector Control/motohawk_override_abs5/NewValue
 * '<S792>' : BaseEngineController_A02_bak2/Foreground/Outputs/Injector Control/motohawk_override_abs5/OldValue
 * '<S793>' : BaseEngineController_A02_bak2/Foreground/Outputs/Injector Control/motohawk_override_abs6/NewValue
 * '<S794>' : BaseEngineController_A02_bak2/Foreground/Outputs/Injector Control/motohawk_override_abs6/OldValue
 * '<S795>' : BaseEngineController_A02_bak2/Foreground/Outputs/WASTEGATE-Control/PWM Characterization
 * '<S796>' : BaseEngineController_A02_bak2/Foreground/Outputs/WASTEGATE-Control/PWM Characterization/Saturation
 * '<S797>' : BaseEngineController_A02_bak2/Foreground/Outputs/WASTEGATE-Control/PWM Characterization/motohawk_override_abs2
 * '<S798>' : BaseEngineController_A02_bak2/Foreground/Outputs/WASTEGATE-Control/PWM Characterization/motohawk_override_abs2/NewValue
 * '<S799>' : BaseEngineController_A02_bak2/Foreground/Outputs/WASTEGATE-Control/PWM Characterization/motohawk_override_abs2/OldValue
 * '<S800>' : BaseEngineController_A02_bak2/Main Power Relay/Main Power Relay
 * '<S801>' : BaseEngineController_A02_bak2/Main Power Relay/Main Power Relay/Display Variable Event Boolean
 * '<S802>' : BaseEngineController_A02_bak2/Main Power Relay/Main Power Relay/Display Variable Event Function-Call
 * '<S803>' : BaseEngineController_A02_bak2/Main Power Relay/Main Power Relay/Display Variable Event Function-Call1
 * '<S804>' : BaseEngineController_A02_bak2/Main Power Relay/Main Power Relay/ECUP Latch
 * '<S805>' : BaseEngineController_A02_bak2/Main Power Relay/Main Power Relay/Forced Shutdown Process
 * '<S806>' : BaseEngineController_A02_bak2/Main Power Relay/Main Power Relay/On Off Delay
 * '<S807>' : BaseEngineController_A02_bak2/Main Power Relay/Main Power Relay/ShutDown Processes
 * '<S808>' : BaseEngineController_A02_bak2/Main Power Relay/Main Power Relay/motohawk_restore_nvmem
 * '<S809>' : BaseEngineController_A02_bak2/Main Power Relay/Main Power Relay/motohawk_store_nvmem
 * '<S810>' : BaseEngineController_A02_bak2/Main Power Relay/Main Power Relay/Display Variable Event Function-Call/Clear
 * '<S811>' : BaseEngineController_A02_bak2/Main Power Relay/Main Power Relay/Display Variable Event Function-Call1/Clear
 * '<S812>' : BaseEngineController_A02_bak2/Main Power Relay/Main Power Relay/Forced Shutdown Process/Post Shutdown two ticks before MPRD off
 * '<S813>' : BaseEngineController_A02_bak2/Main Power Relay/Main Power Relay/Forced Shutdown Process/Processor Reboot
 * '<S814>' : BaseEngineController_A02_bak2/Main Power Relay/Main Power Relay/Forced Shutdown Process/Save NV Vars one tick before MPRD off
 * '<S815>' : BaseEngineController_A02_bak2/Main Power Relay/Main Power Relay/Forced Shutdown Process/Shutdown power on ECU565//563
 * '<S816>' : BaseEngineController_A02_bak2/Main Power Relay/Main Power Relay/Forced Shutdown Process/Time Since Enabled (With Input)1
 * '<S817>' : BaseEngineController_A02_bak2/Main Power Relay/Main Power Relay/Forced Shutdown Process/Post Shutdown two ticks before MPRD off/Post Shutdown two ticks before MPRD off
 * '<S818>' : BaseEngineController_A02_bak2/Main Power Relay/Main Power Relay/Forced Shutdown Process/Save NV Vars one tick before MPRD off/Save NV Vars one tick before MPRD off
 * '<S819>' : BaseEngineController_A02_bak2/Main Power Relay/Main Power Relay/Forced Shutdown Process/Shutdown power on ECU565//563/Shutdown power on ECU565-128
 * '<S820>' : BaseEngineController_A02_bak2/Main Power Relay/Main Power Relay/On Off Delay/S-R Flip-Flop
 * '<S821>' : BaseEngineController_A02_bak2/Main Power Relay/Main Power Relay/ShutDown Processes/Post Shutdown two ticks before MPRD off
 * '<S822>' : BaseEngineController_A02_bak2/Main Power Relay/Main Power Relay/ShutDown Processes/Processor Reboot
 * '<S823>' : BaseEngineController_A02_bak2/Main Power Relay/Main Power Relay/ShutDown Processes/Save NV Vars one tick before MPRD off
 * '<S824>' : BaseEngineController_A02_bak2/Main Power Relay/Main Power Relay/ShutDown Processes/Shutdown power on ECU565//563
 * '<S825>' : BaseEngineController_A02_bak2/Main Power Relay/Main Power Relay/ShutDown Processes/motohawk_override_abs
 * '<S826>' : BaseEngineController_A02_bak2/Main Power Relay/Main Power Relay/ShutDown Processes/Post Shutdown two ticks before MPRD off/Post Shutdown two ticks before MPRD off
 * '<S827>' : BaseEngineController_A02_bak2/Main Power Relay/Main Power Relay/ShutDown Processes/Save NV Vars one tick before MPRD off/Save NV Vars one tick before MPRD off
 * '<S828>' : BaseEngineController_A02_bak2/Main Power Relay/Main Power Relay/ShutDown Processes/Shutdown power on ECU565//563/Shutdown power on ECU565-128
 * '<S829>' : BaseEngineController_A02_bak2/Main Power Relay/Main Power Relay/ShutDown Processes/motohawk_override_abs/NewValue
 * '<S830>' : BaseEngineController_A02_bak2/Main Power Relay/Main Power Relay/ShutDown Processes/motohawk_override_abs/OldValue
 */
#endif                                 /* RTW_HEADER_BaseEngineController_A02_bak2_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
