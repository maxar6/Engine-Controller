/*
 * File: BaseEngineController_LS.h
 *
 * Code generated for Simulink model 'BaseEngineController_LS'.
 *
 * Model version                  : 1.1767
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Sun Nov 17 02:36:28 2019
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
  real_T s403_RPMInst;                 /* '<S403>/Data Type Conversion1' */
  real_T s407_DataTypeConversion;      /* '<S407>/Data Type Conversion' */
  real_T s460_Sum1;                    /* '<S460>/Sum1' */
  real_T s473_Merge;                   /* '<S473>/Merge' */
  real_T s459_Sum1;                    /* '<S459>/Sum1' */
  real_T s664_motohawk_interpolation_1d;/* '<S664>/motohawk_interpolation_1d' */
  real_T s674_motohawk_interpolation_1d;/* '<S674>/motohawk_interpolation_1d' */
  real_T s662_Merge;                   /* '<S662>/Merge' */
  real_T s672_Merge;                   /* '<S672>/Merge' */
  real_T s684_motohawk_interpolation_1d;/* '<S684>/motohawk_interpolation_1d' */
  real_T s694_motohawk_interpolation_1d;/* '<S694>/motohawk_interpolation_1d' */
  real_T s682_Merge;                   /* '<S682>/Merge' */
  real_T s692_Merge;                   /* '<S692>/Merge' */
  real_T s374_Switch2;                 /* '<S374>/Switch2' */
  real_T s461_Sum1;                    /* '<S461>/Sum1' */
  real_T s481_Merge;                   /* '<S481>/Merge' */
  real_T s368_Switch1;                 /* '<S368>/Switch1' */
  real_T s540_ReadCANMessage1_o2;      /* '<S540>/Read CAN Message1' */
  real_T s540_ReadCANMessage1_o3;      /* '<S540>/Read CAN Message1' */
  real_T s540_ReadCANMessage1_o4;      /* '<S540>/Read CAN Message1' */
  real_T s540_ReadCANMessage1_o5;      /* '<S540>/Read CAN Message1' */
  real_T s540_ReadCANMessage1_o6;      /* '<S540>/Read CAN Message1' */
  real_T s540_ReadCANMessage1_o7;      /* '<S540>/Read CAN Message1' */
  real_T s540_ReadCANMessage1_o8;      /* '<S540>/Read CAN Message1' */
  real_T s540_ReadCANMessage1_o9;      /* '<S540>/Read CAN Message1' */
  real_T s540_ReadCANMessage1_o10;     /* '<S540>/Read CAN Message1' */
  real_T s540_MathFunction1;           /* '<S540>/Math Function1' */
  real_T s543_Sum1;                    /* '<S543>/Sum1' */
  real_T s574_Merge;                   /* '<S574>/Merge' */
  real_T s540_ReadCANMessage_o2;       /* '<S540>/Read CAN Message' */
  real_T s540_ReadCANMessage_o3;       /* '<S540>/Read CAN Message' */
  real_T s540_ReadCANMessage_o4;       /* '<S540>/Read CAN Message' */
  real_T s540_ReadCANMessage_o5;       /* '<S540>/Read CAN Message' */
  real_T s540_ReadCANMessage_o6;       /* '<S540>/Read CAN Message' */
  real_T s540_ReadCANMessage_o7;       /* '<S540>/Read CAN Message' */
  real_T s540_ReadCANMessage_o8;       /* '<S540>/Read CAN Message' */
  real_T s540_ReadCANMessage_o9;       /* '<S540>/Read CAN Message' */
  real_T s540_ReadCANMessage_o10;      /* '<S540>/Read CAN Message' */
  real_T s540_MathFunction;            /* '<S540>/Math Function' */
  real_T s542_Sum1;                    /* '<S542>/Sum1' */
  real_T s566_Merge;                   /* '<S566>/Merge' */
  real_T s540_Gain;                    /* '<S540>/Gain' */
  real_T s372_Sum1;                    /* '<S372>/Sum1' */
  real_T s394_Switch;                  /* '<S394>/Switch' */
  real_T s468_Sum1;                    /* '<S468>/Sum1' */
  real_T s536_Merge;                   /* '<S536>/Merge' */
  real_T s465_Merge;                   /* '<S465>/Merge' */
  real_T s463_Sum1;                    /* '<S463>/Sum1' */
  real_T s502_Merge;                   /* '<S502>/Merge' */
  real_T s402_Gain1;                   /* '<S402>/Gain1' */
  real_T s437_motohawk_interpolation_1d;/* '<S437>/motohawk_interpolation_1d' */
  real_T s436_Merge;                   /* '<S436>/Merge' */
  real_T s330_motohawk_delta_time;     /* '<S330>/motohawk_delta_time' */
  real_T s464_Sum1;                    /* '<S464>/Sum1' */
  real_T s338_Sum;                     /* '<S338>/Sum' */
  real_T s337_NominalAirFlowRate;      /* '<S337>/Nominal Air Flow Rate' */
  real_T s337_ModelAirMassFlowRate;    /* '<S337>/Model Air Mass Flow Rate' */
  real_T s402_Gain;                    /* '<S402>/Gain' */
  real_T s428_motohawk_interpolation_1d;/* '<S428>/motohawk_interpolation_1d' */
  real_T s427_Merge;                   /* '<S427>/Merge' */
  real_T s337_MultiportSwitch;         /* '<S337>/Multiport Switch' */
  real_T s347_Merge;                   /* '<S347>/Merge' */
  real_T s350_Sum1;                    /* '<S350>/Sum1' */
  real_T s348_Merge;                   /* '<S348>/Merge' */
  real_T s353_Sum1;                    /* '<S353>/Sum1' */
  real_T s388_Sum1;                    /* '<S388>/Sum1' */
  real_T s408_DataTypeConversion;      /* '<S408>/Data Type Conversion' */
  real_T s412_DataTypeConversion;      /* '<S412>/Data Type Conversion' */
  real_T s510_Merge;                   /* '<S510>/Merge' */
  real_T s118_SparkEnergy;             /* '<S118>/Merge5' */
  real_T s118_SparkAdv;                /* '<S118>/Merge4' */
  real_T s396_Switch;                  /* '<S396>/Switch' */
  real_T s118_Throttle;                /* '<S118>/Merge8' */
  real_T s702_ETC;                     /* '<S702>/Saturation' */
  real_T s118_IACP;                    /* '<S118>/Merge3' */
  real_T s756_MinMax1;                 /* '<S756>/MinMax1' */
  real_T s118_IACS;                    /* '<S118>/Merge9' */
  real_T s760_MinMax1;                 /* '<S760>/MinMax1' */
  real_T s118_SOI;                     /* '<S118>/Merge1' */
  real_T s118_FPC[8];                  /* '<S118>/Merge2' */
  real_T s70_Sum[8];                   /* '<S70>/Sum' */
  real_T s462_Sum1;                    /* '<S462>/Sum1' */
  real_T s494_Merge;                   /* '<S494>/Merge' */
  real_T s62_constreftoatm;            /* '<S62>/const ref to atm' */
  real_T s118_FuelMult;                /* '<S118>/Merge6' */
  real_T s21_Sum2;                     /* '<S21>/Sum2' */
  real_T s21_Sum1;                     /* '<S21>/Sum1' */
  real_T s21_MinMax[8];                /* '<S21>/MinMax' */
  real_T s118_MakeUpEOI;               /* '<S118>/Merge10' */
  real_T s118_WASTEGATE;               /* '<S118>/Merge11' */
  real_T s787_MinMax1;                 /* '<S787>/MinMax1' */
  real_T s392_Sum;                     /* '<S392>/Sum' */
  real_T s372_Sum3;                    /* '<S372>/Sum3' */
  real_T s371_Sum3;                    /* '<S371>/Sum3' */
  real_T s466_Sum1;                    /* '<S466>/Sum1' */
  real_T s467_Sum1;                    /* '<S467>/Sum1' */
  real_T s520_Merge;                   /* '<S520>/Merge' */
  real_T s528_Merge;                   /* '<S528>/Merge' */
  real_T s712_Sum;                     /* '<S712>/Sum' */
  real_T s713_Sum;                     /* '<S713>/Sum' */
  real_T s715_CrankCounter;            /* '<S715>/CrankCounter' */
  real_T s623_motohawk_interpolation_1d;/* '<S623>/motohawk_interpolation_1d' */
  real_T s614_Merge;                   /* '<S614>/Merge' */
  real_T s622_Merge;                   /* '<S622>/Merge' */
  real_T s650_motohawk_interpolation_1d;/* '<S650>/motohawk_interpolation_1d' */
  real_T s617_Merge;                   /* '<S617>/Merge' */
  real_T s649_Merge;                   /* '<S649>/Merge' */
  real_T s632_motohawk_interpolation_1d;/* '<S632>/motohawk_interpolation_1d' */
  real_T s631_Merge;                   /* '<S631>/Merge' */
  real_T s641_motohawk_interpolation_1d;/* '<S641>/motohawk_interpolation_1d' */
  real_T s640_Merge;                   /* '<S640>/Merge' */
  real_T s291_Defaultifnoflow[8];      /* '<S291>/Default (if no flow)' */
  real_T s307_Sum1[8];                 /* '<S307>/Sum1' */
  real_T s306_chargemass[8];           /* '<S306>/charge mass' */
  real_T s365_Merge;                   /* '<S365>/Merge' */
  real_T s381_Sum2;                    /* '<S381>/Sum2' */
  real_T s335_Timer;                   /* '<S330>/Baro Stall State Delay' */
  real_T s287_UnitDelay;               /* '<S287>/Unit Delay' */
  real_T s128_MultiportSwitch;         /* '<S128>/Multiport Switch' */
  real_T s165_Switch1;                 /* '<S165>/Switch1' */
  real_T s130_Switch1;                 /* '<S130>/Switch1' */
  real_T s163_Sum2;                    /* '<S163>/Sum2' */
  real_T s163_Product2;                /* '<S163>/Product2' */
  real_T s164_Product;                 /* '<S164>/Product' */
  real_T s154_Switch;                  /* '<S154>/Switch' */
  real_T s130_Sum3;                    /* '<S130>/Sum3' */
  real_T s132_MinMax1;                 /* '<S132>/MinMax1' */
  real_T s132_MinMax;                  /* '<S132>/MinMax' */
  real_T s275_Add;                     /* '<S275>/Add' */
  real_T s272_Product;                 /* '<S272>/Product' */
  real_T s138_ApplyOffsetstoBaseSparkAdvance1;/* '<S138>/Apply Offsets to Base Spark Advance1' */
  real_T s278_MinMax1;                 /* '<S278>/MinMax1' */
  real_T s273_Switch;                  /* '<S273>/Switch' */
  real_T s138_motohawk_interpolation_2d1;/* '<S138>/motohawk_interpolation_2d1' */
  real_T s135_Sum;                     /* '<S135>/Sum' */
  real_T s203_DontallowsetpointtoevergoabovetheTargetRPM;/* '<S203>/Don't allow setpoint to ever go above the TargetRPM' */
  real_T s212_Sum2;                    /* '<S212>/Sum2' */
  real_T s212_Product2;                /* '<S212>/Product2' */
  real_T s213_Product;                 /* '<S213>/Product' */
  real_T s214_Switch1;                 /* '<S214>/Switch1' */
  real_T s205_Switch;                  /* '<S205>/Switch' */
  real_T s201_Sum;                     /* '<S201>/Sum' */
  real_T s234_MinMax1;                 /* '<S234>/MinMax1' */
  real_T s224_DontallowsetpointtoeverdropbelowtheTargetRPM;/* '<S224>/Don't allow setpoint to ever drop below the TargetRPM' */
  real_T s250_Sum2;                    /* '<S250>/Sum2' */
  real_T s250_Product2;                /* '<S250>/Product2' */
  real_T s251_Product;                 /* '<S251>/Product' */
  real_T s252_Switch1;                 /* '<S252>/Switch1' */
  real_T s136_MinGovAirPID;            /* '<S136>/Product1' */
  real_T s245_Sum1;                    /* '<S245>/Sum1' */
  real_T s245_Product;                 /* '<S245>/Product' */
  real_T s246_Product;                 /* '<S246>/Product' */
  real_T s136_IdleSpk;                 /* '<S136>/Product' */
  real_T s242_Switch;                  /* '<S242>/Switch' */
  real_T s227_DontallowsetpointtoeverdropbelowtheTargetRPM;/* '<S227>/Don't allow setpoint to ever drop below the TargetRPM' */
  real_T s137_O2FuelMult;              /* '<S137>/Switch' */
  real_T s257_Switch;                  /* '<S257>/Switch' */
  real_T s263_Sum2;                    /* '<S263>/Sum2' */
  real_T s263_Product2;                /* '<S263>/Product2' */
  real_T s265_Switch1;                 /* '<S265>/Switch1' */
  real_T s264_Product;                 /* '<S264>/Product' */
  real_T s261_Switch3;                 /* '<S261>/Switch3' */
  real_T s261_Switch1;                 /* '<S261>/Switch1' */
  real_T s261_Switch4;                 /* '<S261>/Switch4' */
  real_T s184_motohawk_interpolation_1d;/* '<S184>/motohawk_interpolation_1d' */
  real_T s182_FuelFlowMassAirflowEquivalenceRatioAirtofuelRatio;/* '<S182>/Fuel Flow = Mass Airflow * Equivalence Ratio // Air-to-fuel Ratio' */
  real_T s179_PerCylinderMassFlowRate; /* '<S179>/Per-Cylinder Mass Flow Rate' */
  real_T s179_ApplyMultipliersforO2KnockControlandEnrichment1;/* '<S179>/Apply Multipliers for O2, Knock Control, and Enrichment1' */
  real_T s200_MinMax1;                 /* '<S200>/MinMax1' */
  real_T s193_chargemass;              /* '<S193>/charge mass' */
  real_T s192_Sum1;                    /* '<S192>/Sum1' */
  real_T s185_Sum1;                    /* '<S185>/Sum1' */
  real_T s191_Sum1;                    /* '<S191>/Sum1' */
  real_T s185_Sum;                     /* '<S185>/Sum' */
  real_T s185_Product1;                /* '<S185>/Product1' */
  real_T s188_motohawk_interpolation_1d;/* '<S188>/motohawk_interpolation_1d' */
  real_T s170_EquivOut;                /* '<S169>/Chart' */
  real_T s170_SparkOut;                /* '<S169>/Chart' */
  real_T s129_DesEquivRatio;           /* '<S129>/Product1' */
  real_T s113_Sum;                     /* '<S113>/Sum' */
  real_T s23_Sum;                      /* '<S23>/Sum' */
  real_T s98_UnitDelay2;               /* '<S98>/Unit Delay2' */
  real_T s108_Switch1;                 /* '<S108>/Switch1' */
  real_T s61_Switch;                   /* '<S61>/Switch' */
  real_T s30_MultiportSwitch;          /* '<S30>/Multiport Switch' */
  real_T s40_Product;                  /* '<S40>/Product' */
  real_T s39_Switch2;                  /* '<S39>/Switch2' */
  real_T s44_Product;                  /* '<S44>/Product' */
  real_T s36_Sum2;                     /* '<S36>/Sum2' */
  real_T s45_Product;                  /* '<S45>/Product' */
  real_T s36_Product2;                 /* '<S36>/Product2' */
  real_T s46_Switch1;                  /* '<S46>/Switch1' */
  real_T s49_MinMax1;                  /* '<S49>/MinMax1' */
  real_T s20_Switch;                   /* '<S20>/Switch' */
  real_T s50_In1;                      /* '<S50>/In1' */
  real_T s26_TestTime;                 /* '<S20>/ETC Test  Manager' */
  real_T s807_Switch;                  /* '<S807>/Switch' */
  uint32_T s404_motohawk_frequency_in; /* '<S404>/motohawk_frequency_in' */
  uint32_T s540_ReadCANMessage1_o1;    /* '<S540>/Read CAN Message1' */
  uint32_T s540_ReadCANMessage_o1;     /* '<S540>/Read CAN Message' */
  uint32_T s458_Sum;                   /* '<S458>/Sum' */
  uint32_T s9_ReadCANRaw_o2;           /* '<S9>/Read CAN Raw' */
  uint32_T s9_ReadCANRaw_o4;           /* '<S9>/Read CAN Raw' */
  uint32_T s10_motohawk_calibration;   /* '<S10>/motohawk_calibration' */
  int16_T s702_motohawk_pwm1;          /* '<S702>/motohawk_pwm1' */
  uint16_T s404_motohawk_ain4;         /* '<S404>/motohawk_ain4' */
  uint16_T s406_motohawk_ain1;         /* '<S406>/motohawk_ain1' */
  uint16_T s406_motohawk_ain2;         /* '<S406>/motohawk_ain2' */
  uint16_T s406_motohawk_ain6;         /* '<S406>/motohawk_ain6' */
  uint16_T s406_motohawk_ain9;         /* '<S406>/motohawk_ain9' */
  uint16_T s404_motohawk_ain14;        /* '<S404>/motohawk_ain14' */
  uint16_T s404_motohawk_ain_read1;    /* '<S404>/motohawk_ain_read1' */
  uint16_T s404_motohawk_ain2;         /* '<S404>/motohawk_ain2' */
  uint16_T s404_motohawk_ain1;         /* '<S404>/motohawk_ain1' */
  uint16_T s404_motohawk_ain3;         /* '<S404>/motohawk_ain3' */
  uint16_T s699_SparkSequence_o3[8];   /* '<S699>/Spark Sequence' */
  uint16_T s699_SparkSequence_o4[8];   /* '<S699>/Spark Sequence' */
  uint16_T s541_motohawk_ain;          /* '<S541>/motohawk_ain' */
  uint16_T s541_motohawk_ain1;         /* '<S541>/motohawk_ain1' */
  uint16_T s541_motohawk_ain2;         /* '<S541>/motohawk_ain2' */
  uint16_T s541_motohawk_ain3;         /* '<S541>/motohawk_ain3' */
  uint16_T s10_motohawk_calibration3;  /* '<S10>/motohawk_calibration3' */
  index_T s360_motohawk_prelookup1;    /* '<S360>/motohawk_prelookup1' */
  index_T s360_Indexes;                /* '<S360>/motohawk_prelookup5' */
  index_T s357_motohawk_prelookup;     /* '<S357>/motohawk_prelookup' */
  index_T s358_motohawk_prelookup;     /* '<S358>/motohawk_prelookup' */
  index_T s361_motohawk_prelookup;     /* '<S361>/motohawk_prelookup' */
  index_T s359_motohawk_prelookup1;    /* '<S359>/motohawk_prelookup1' */
  index_T s359_Indexes;                /* '<S359>/motohawk_prelookup5' */
  index_T s356_motohawk_prelookup;     /* '<S356>/motohawk_prelookup' */
  index_T s334_RPMAccel17Idx;          /* '<S334>/motohawk_prelookup' */
  int8_T s22_Merge1[32];               /* '<S22>/Merge1' */
  int8_T s715_DataTypeConversion;      /* '<S715>/Data Type Conversion' */
  int8_T s202_DataTypeConversion;      /* '<S202>/Data Type Conversion' */
  int8_T s202_DataTypeConversion1;     /* '<S202>/Data Type Conversion1' */
  int8_T s98_MultiportSwitch[8];       /* '<S98>/Multiport Switch' */
  int8_T s108_CutArray[8];             /* '<S108>/CutArray' */
  int8_T s26_DC_Override;              /* '<S20>/ETC Test  Manager' */
  int8_T s26_SetpointMode;             /* '<S20>/ETC Test  Manager' */
  uint8_T s370_UnitDelay;              /* '<S370>/Unit Delay' */
  uint8_T s330_motohawk_data_read1;    /* '<S330>/motohawk_data_read1' */
  uint8_T s704_InjectorSequence_o1[8]; /* '<S704>/Injector Sequence' */
  uint8_T s22_DataTypeConversion5;     /* '<S22>/Data Type Conversion5' */
  uint8_T s403_motohawk_encoder_fault; /* '<S403>/motohawk_encoder_fault' */
  uint8_T s403_motohawk_encoder_state; /* '<S403>/motohawk_encoder_state' */
  uint8_T s717_Switch1;                /* '<S717>/Switch1' */
  uint8_T s390_Switch;                 /* '<S390>/Switch' */
  uint8_T s389_State;                  /* '<S370>/Engine State Machine' */
  uint8_T s236_IdleState;              /* '<S221>/IdleStateMachine' */
  uint8_T s98_UnitDelay1;              /* '<S98>/Unit Delay1' */
  uint8_T s108_Switch;                 /* '<S108>/Switch' */
  uint8_T s9_ReadCANRaw_o5;            /* '<S9>/Read CAN Raw' */
  uint8_T s9_ReadCANRaw_o6[8];         /* '<S9>/Read CAN Raw' */
  boolean_T s370_Stall;                /* '<S370>/Relational Operator1' */
  boolean_T s370_Crank;                /* '<S370>/Relational Operator4' */
  boolean_T s370_Run;                  /* '<S370>/Logical Operator1' */
  boolean_T s414_Merge;                /* '<S414>/Merge' */
  boolean_T s347_RelationalOperator4;  /* '<S347>/Relational Operator4' */
  boolean_T s348_RelationalOperator4;  /* '<S348>/Relational Operator4' */
  boolean_T s346_LogicalOperator;      /* '<S346>/Logical Operator' */
  boolean_T s402_motohawk_din2;        /* '<S402>/motohawk_din2' */
  boolean_T s417_Merge;                /* '<S417>/Merge' */
  boolean_T s442_Merge;                /* '<S442>/Merge' */
  boolean_T s447_Merge;                /* '<S447>/Merge' */
  boolean_T s118_AC;                   /* '<S118>/Merge14' */
  boolean_T s706_LogicalOperator;      /* '<S706>/Logical Operator' */
  boolean_T s22_LogicalOperator2[8];   /* '<S22>/Logical Operator2' */
  boolean_T s118_FAN1;                 /* '<S118>/Merge12' */
  boolean_T s738_LogicalOperator;      /* '<S738>/Logical Operator' */
  boolean_T s118_FAN2;                 /* '<S118>/Merge13' */
  boolean_T s739_LogicalOperator;      /* '<S739>/Logical Operator' */
  boolean_T s118_FUELP;                /* '<S118>/Merge7' */
  boolean_T s402_motohawk_din;         /* '<S402>/motohawk_din' */
  boolean_T s420_Merge;                /* '<S420>/Merge' */
  boolean_T s746_LogicalOperator;      /* '<S746>/Logical Operator' */
  boolean_T s770_Merge[8];             /* '<S770>/Merge' */
  boolean_T s337_LogicalOperator;      /* '<S337>/Logical Operator' */
  boolean_T s699_LogicalOperator1[8];  /* '<S699>/Logical Operator1' */
  boolean_T s715_RelationalOperator1;  /* '<S715>/Relational Operator1' */
  boolean_T s365_RelationalOperator3;  /* '<S365>/Relational Operator3' */
  boolean_T s335_Enable;               /* '<S330>/Baro Stall State Delay' */
  boolean_T s146_Switch1;              /* '<S146>/Switch1' */
  boolean_T s145_Switch1;              /* '<S145>/Switch1' */
  boolean_T s127_LogicalOperator2;     /* '<S127>/Logical Operator2' */
  boolean_T s127_LogicalOperator4;     /* '<S127>/Logical Operator4' */
  boolean_T s127_LogicalOperator;      /* '<S127>/Logical Operator' */
  boolean_T s169_LogicalOperator;      /* '<S169>/Logical Operator' */
  boolean_T s169_LogicalOperator2;     /* '<S169>/Logical Operator2' */
  boolean_T s169_LogicalOperator3;     /* '<S169>/Logical Operator3' */
  boolean_T s171_Switch1;              /* '<S171>/Switch1' */
  boolean_T s176_Switch1;              /* '<S176>/Switch1' */
  boolean_T s177_Switch1;              /* '<S177>/Switch1' */
  boolean_T s178_Switch1;              /* '<S178>/Switch1' */
  boolean_T s202_MultiportSwitch;      /* '<S202>/Multiport Switch' */
  boolean_T s235_RelationalOperator;   /* '<S235>/Relational Operator' */
  boolean_T s221_RelationalOperator;   /* '<S221>/Relational Operator' */
  boolean_T s221_RelationalOperator3;  /* '<S221>/Relational Operator3' */
  boolean_T s221_RelationalOperator1;  /* '<S221>/Relational Operator1' */
  boolean_T s221_LogicalOperator;      /* '<S221>/Logical Operator' */
  boolean_T s221_RelationalOperator5;  /* '<S221>/Relational Operator5' */
  boolean_T s237_RelOp;                /* '<S237>/RelOp' */
  boolean_T s136_HitCrossing1;         /* '<S136>/Hit  Crossing1' */
  boolean_T s136_LogicalOperator;      /* '<S136>/Logical Operator' */
  boolean_T s222_RelationalOperator1;  /* '<S222>/Relational Operator1' */
  boolean_T s218_LogicalOperator1;     /* '<S218>/Logical Operator1' */
  boolean_T s255_LogicalOperator;      /* '<S255>/Logical Operator' */
  boolean_T s255_LogicalOperator3;     /* '<S255>/Logical Operator3' */
  boolean_T s255_RelationalOperator5;  /* '<S255>/Relational Operator5' */
  boolean_T s255_LogicalOperator2;     /* '<S255>/Logical Operator2' */
  boolean_T s181_LogicalOperator2;     /* '<S181>/Logical Operator2' */
  boolean_T s198_LogicalOperator;      /* '<S198>/Logical Operator' */
  boolean_T s153_LogicalOperator1;     /* '<S153>/Logical Operator1' */
  boolean_T s24_OnlyEnableSparkwhenEnergyisAboveZero;/* '<S24>/Only Enable Spark when Energy is Above Zero' */
  boolean_T s97_DataTypeConversion1[8];/* '<S97>/Data Type Conversion1' */
  boolean_T s96_DataTypeConversion[8]; /* '<S96>/Data Type Conversion' */
  boolean_T s31_LogicalOperator3;      /* '<S31>/Logical Operator3' */
  boolean_T s20_RelationalOperator5;   /* '<S20>/Relational Operator5' */
  boolean_T s20_RelationalOperator2;   /* '<S20>/Relational Operator2' */
  boolean_T s20_RelationalOperator3;   /* '<S20>/Relational Operator3' */
  boolean_T s27_LogicalOperator;       /* '<S27>/Logical Operator' */
  boolean_T s33_RelationalOperator;    /* '<S33>/Relational Operator' */
  boolean_T s26_TestComplete;          /* '<S20>/ETC Test  Manager' */
  boolean_T s791_RelationalOperator;   /* '<S791>/Relational Operator' */
  boolean_T s791_motohawk_data_read;   /* '<S791>/motohawk_data_read' */
  boolean_T s795_MPRDState;            /* '<S791>/ECUP Latch' */
  boolean_T s9_ReadCANRaw_o1;          /* '<S9>/Read CAN Raw' */
  boolean_T s9_ReadCANRaw_o3;          /* '<S9>/Read CAN Raw' */
  rtB_CollectAverage_BaseEngineController_LS s367_CollectAverage;/* '<S367>/Collect Average' */
  rtB_CollectAverage_BaseEngineController_LS s366_CollectAverage;/* '<S366>/Collect Average' */
  rtB_CollectAverage_BaseEngineController_LS s336_CollectAverage;/* '<S336>/Collect Average' */
} BlockIO_BaseEngineController_LS;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T s460_UnitDelay1_DSTATE;       /* '<S460>/Unit Delay1' */
  real_T s474_UnitDelay_DSTATE;        /* '<S474>/Unit Delay' */
  real_T s459_UnitDelay_DSTATE;        /* '<S459>/Unit Delay' */
  real_T s654_UnitDelay_DSTATE;        /* '<S654>/Unit Delay' */
  real_T s665_UnitDelay_DSTATE;        /* '<S665>/Unit Delay' */
  real_T s655_UnitDelay_DSTATE;        /* '<S655>/Unit Delay' */
  real_T s675_UnitDelay_DSTATE;        /* '<S675>/Unit Delay' */
  real_T s656_UnitDelay_DSTATE;        /* '<S656>/Unit Delay' */
  real_T s685_UnitDelay_DSTATE;        /* '<S685>/Unit Delay' */
  real_T s657_UnitDelay_DSTATE;        /* '<S657>/Unit Delay' */
  real_T s695_UnitDelay_DSTATE;        /* '<S695>/Unit Delay' */
  real_T s486_UnitDelay_DSTATE;        /* '<S486>/Unit Delay' */
  real_T s461_UnitDelay1_DSTATE;       /* '<S461>/Unit Delay1' */
  real_T s485_UnitDelay_DSTATE;        /* '<S485>/Unit Delay' */
  real_T s483_UnitDelay_DSTATE;        /* '<S483>/Unit Delay' */
  real_T s483_UnitDelay1_DSTATE;       /* '<S483>/Unit Delay1' */
  real_T s483_UnitDelay2_DSTATE;       /* '<S483>/Unit Delay2' */
  real_T s372_UnitDelay_DSTATE;        /* '<S372>/Unit Delay' */
  real_T s543_UnitDelay1_DSTATE;       /* '<S543>/Unit Delay1' */
  real_T s575_UnitDelay_DSTATE;        /* '<S575>/Unit Delay' */
  real_T s542_UnitDelay1_DSTATE;       /* '<S542>/Unit Delay1' */
  real_T s567_UnitDelay_DSTATE;        /* '<S567>/Unit Delay' */
  real_T s468_UnitDelay1_DSTATE;       /* '<S468>/Unit Delay1' */
  real_T s537_UnitDelay_DSTATE;        /* '<S537>/Unit Delay' */
  real_T s463_UnitDelay1_DSTATE;       /* '<S463>/Unit Delay1' */
  real_T s503_UnitDelay_DSTATE;        /* '<S503>/Unit Delay' */
  real_T s411_UnitDelay_DSTATE;        /* '<S411>/Unit Delay' */
  real_T s438_UnitDelay_DSTATE;        /* '<S438>/Unit Delay' */
  real_T s464_UnitDelay1_DSTATE;       /* '<S464>/Unit Delay1' */
  real_T s338_UnitDelay_DSTATE;        /* '<S338>/Unit Delay' */
  real_T s410_UnitDelay_DSTATE;        /* '<S410>/Unit Delay' */
  real_T s429_UnitDelay_DSTATE;        /* '<S429>/Unit Delay' */
  real_T s347_UnitDelay2_DSTATE;       /* '<S347>/Unit Delay2' */
  real_T s350_UnitDelay_DSTATE;        /* '<S350>/Unit Delay' */
  real_T s348_UnitDelay2_DSTATE;       /* '<S348>/Unit Delay2' */
  real_T s353_UnitDelay_DSTATE;        /* '<S353>/Unit Delay' */
  real_T s386_UnitDelay_DSTATE;        /* '<S386>/Unit Delay' */
  real_T s388_UnitDelay_DSTATE;        /* '<S388>/Unit Delay' */
  real_T s511_UnitDelay_DSTATE;        /* '<S511>/Unit Delay' */
  real_T s72_UnitDelay_DSTATE;         /* '<S72>/Unit Delay' */
  real_T s71_UnitDelay_DSTATE;         /* '<S71>/Unit Delay' */
  real_T s69_UnitDelay_DSTATE;         /* '<S69>/Unit Delay' */
  real_T s68_UnitDelay_DSTATE;         /* '<S68>/Unit Delay' */
  real_T s67_UnitDelay_DSTATE;         /* '<S67>/Unit Delay' */
  real_T s66_UnitDelay_DSTATE;         /* '<S66>/Unit Delay' */
  real_T s65_UnitDelay_DSTATE;         /* '<S65>/Unit Delay' */
  real_T s64_UnitDelay_DSTATE;         /* '<S64>/Unit Delay' */
  real_T s70_UnitDelay_DSTATE[8];      /* '<S70>/Unit Delay' */
  real_T s462_UnitDelay1_DSTATE;       /* '<S462>/Unit Delay1' */
  real_T s495_UnitDelay_DSTATE;        /* '<S495>/Unit Delay' */
  real_T s372_UnitDelay1_DSTATE;       /* '<S372>/Unit Delay1' */
  real_T s466_UnitDelay1_DSTATE;       /* '<S466>/Unit Delay1' */
  real_T s521_UnitDelay_DSTATE;        /* '<S521>/Unit Delay' */
  real_T s467_UnitDelay1_DSTATE;       /* '<S467>/Unit Delay1' */
  real_T s529_UnitDelay_DSTATE;        /* '<S529>/Unit Delay' */
  real_T s347_UnitDelay1_DSTATE;       /* '<S347>/Unit Delay1' */
  real_T s347_UnitDelay3_DSTATE;       /* '<S347>/Unit Delay3' */
  real_T s347_UnitDelay4_DSTATE;       /* '<S347>/Unit Delay4' */
  real_T s348_UnitDelay1_DSTATE;       /* '<S348>/Unit Delay1' */
  real_T s348_UnitDelay3_DSTATE;       /* '<S348>/Unit Delay3' */
  real_T s348_UnitDelay4_DSTATE;       /* '<S348>/Unit Delay4' */
  real_T s712_UnitDelay_DSTATE;        /* '<S712>/Unit Delay' */
  real_T s713_UnitDelay_DSTATE;        /* '<S713>/Unit Delay' */
  real_T s715_CrankCounter_DSTATE;     /* '<S715>/CrankCounter' */
  real_T s614_UnitDelay_DSTATE;        /* '<S614>/Unit Delay' */
  real_T s624_UnitDelay_DSTATE;        /* '<S624>/Unit Delay' */
  real_T s617_UnitDelay_DSTATE;        /* '<S617>/Unit Delay' */
  real_T s651_UnitDelay_DSTATE;        /* '<S651>/Unit Delay' */
  real_T s615_UnitDelay_DSTATE;        /* '<S615>/Unit Delay' */
  real_T s633_UnitDelay_DSTATE;        /* '<S633>/Unit Delay' */
  real_T s616_UnitDelay_DSTATE;        /* '<S616>/Unit Delay' */
  real_T s642_UnitDelay_DSTATE;        /* '<S642>/Unit Delay' */
  real_T s307_UnitDelay_DSTATE[8];     /* '<S307>/Unit Delay' */
  real_T s365_UnitDelay2_DSTATE;       /* '<S365>/Unit Delay2' */
  real_T s378_UnitDelay_DSTATE;        /* '<S378>/Unit Delay' */
  real_T s381_UnitDelay_DSTATE;        /* '<S381>/Unit Delay' */
  real_T s365_UnitDelay1_DSTATE;       /* '<S365>/Unit Delay1' */
  real_T s365_UnitDelay3_DSTATE;       /* '<S365>/Unit Delay3' */
  real_T s365_UnitDelay4_DSTATE;       /* '<S365>/Unit Delay4' */
  real_T s287_UnitDelay_DSTATE;        /* '<S287>/Unit Delay' */
  real_T s130_UnitDelay_DSTATE;        /* '<S130>/Unit Delay' */
  real_T s165_UnitDelay_DSTATE;        /* '<S165>/Unit Delay' */
  real_T s155_UnitDelay_DSTATE;        /* '<S155>/Unit Delay' */
  real_T s164_UnitDelay_DSTATE;        /* '<S164>/Unit Delay' */
  real_T s273_UnitDelay_DSTATE;        /* '<S273>/Unit Delay' */
  real_T s203_UnitDelay_DSTATE;        /* '<S203>/Unit Delay' */
  real_T s213_UnitDelay_DSTATE;        /* '<S213>/Unit Delay' */
  real_T s214_UnitDelay_DSTATE;        /* '<S214>/Unit Delay' */
  real_T s239_UnitDelay_DSTATE;        /* '<S239>/Unit Delay' */
  real_T s241_UnitDelay_DSTATE;        /* '<S241>/Unit Delay' */
  real_T s136_UnitDelay3_DSTATE;       /* '<S136>/Unit Delay3' */
  real_T s136_UnitDelay1_DSTATE;       /* '<S136>/Unit Delay1' */
  real_T s220_state_DSTATE;            /* '<S220>/state' */
  real_T s136_UnitDelay2_DSTATE;       /* '<S136>/Unit Delay2' */
  real_T s224_UnitDelay_DSTATE;        /* '<S224>/Unit Delay' */
  real_T s251_UnitDelay_DSTATE;        /* '<S251>/Unit Delay' */
  real_T s252_UnitDelay_DSTATE;        /* '<S252>/Unit Delay' */
  real_T s246_UnitDelay_DSTATE;        /* '<S246>/Unit Delay' */
  real_T s227_UnitDelay_DSTATE;        /* '<S227>/Unit Delay' */
  real_T s265_UnitDelay_DSTATE;        /* '<S265>/Unit Delay' */
  real_T s264_UnitDelay_DSTATE;        /* '<S264>/Unit Delay' */
  real_T s261_UnitDelay1_DSTATE;       /* '<S261>/Unit Delay1' */
  real_T s261_UnitDelay_DSTATE;        /* '<S261>/Unit Delay' */
  real_T s261_UnitDelay2_DSTATE;       /* '<S261>/Unit Delay2' */
  real_T s192_UnitDelay_DSTATE;        /* '<S192>/Unit Delay' */
  real_T s191_UnitDelay_DSTATE;        /* '<S191>/Unit Delay' */
  real_T s113_UnitDelay_DSTATE;        /* '<S113>/Unit Delay' */
  real_T s98_UnitDelay2_DSTATE;        /* '<S98>/Unit Delay2' */
  real_T s20_UnitDelay_DSTATE;         /* '<S20>/Unit Delay' */
  real_T s53_UnitDelay_DSTATE;         /* '<S53>/Unit Delay' */
  real_T s44_UnitDelay_DSTATE;         /* '<S44>/Unit Delay' */
  real_T s40_UnitDelay_DSTATE;         /* '<S40>/Unit Delay' */
  real_T s42_UnitDelay_DSTATE;         /* '<S42>/Unit Delay' */
  real_T s45_UnitDelay_DSTATE;         /* '<S45>/Unit Delay' */
  real_T s46_UnitDelay_DSTATE;         /* '<S46>/Unit Delay' */
  real_T s797_UnitDelay_DSTATE;        /* '<S797>/Unit Delay' */
  real_T s797_UnitDelay1_DSTATE;       /* '<S797>/Unit Delay1' */
  real_T s335_TOld;                    /* '<S330>/Baro Stall State Delay' */
  real_T s170_count;                   /* '<S169>/Chart' */
  real_T s170_EquivStart;              /* '<S169>/Chart' */
  real_T s26_TimerOld;                 /* '<S20>/ETC Test  Manager' */
  uint32_T s400_UnitDelay_DSTATE;      /* '<S400>/Unit Delay' */
  uint32_T s458_UnitDelay_DSTATE;      /* '<S458>/Unit Delay' */
  uint32_T s469_motohawk_delta_time_DWORK1;/* '<S469>/motohawk_delta_time' */
  uint32_T s452_motohawk_delta_time_DWORK1;/* '<S452>/motohawk_delta_time' */
  uint32_T s658_motohawk_delta_time_DWORK1;/* '<S658>/motohawk_delta_time' */
  uint32_T s668_motohawk_delta_time_DWORK1;/* '<S668>/motohawk_delta_time' */
  uint32_T s678_motohawk_delta_time_DWORK1;/* '<S678>/motohawk_delta_time' */
  uint32_T s688_motohawk_delta_time_DWORK1;/* '<S688>/motohawk_delta_time' */
  uint32_T s486_motohawk_delta_time_DWORK1;/* '<S486>/motohawk_delta_time' */
  uint32_T s482_motohawk_delta_time_DWORK1;/* '<S482>/motohawk_delta_time' */
  uint32_T s570_motohawk_delta_time_DWORK1;/* '<S570>/motohawk_delta_time' */
  uint32_T s562_motohawk_delta_time_DWORK1;/* '<S562>/motohawk_delta_time' */
  uint32_T s394_motohawk_delta_time_DWORK1;/* '<S394>/motohawk_delta_time' */
  uint32_T s532_motohawk_delta_time_DWORK1;/* '<S532>/motohawk_delta_time' */
  uint32_T s498_motohawk_delta_time_DWORK1;/* '<S498>/motohawk_delta_time' */
  uint32_T s432_motohawk_delta_time_DWORK1;/* '<S432>/motohawk_delta_time' */
  uint32_T s330_motohawk_delta_time_DWORK1;/* '<S330>/motohawk_delta_time' */
  uint32_T s423_motohawk_delta_time_DWORK1;/* '<S423>/motohawk_delta_time' */
  uint32_T s386_motohawk_delta_time_DWORK1;/* '<S386>/motohawk_delta_time' */
  uint32_T s443_motohawk_delta_time_DWORK1;/* '<S443>/motohawk_delta_time' */
  uint32_T s448_motohawk_delta_time_DWORK1;/* '<S448>/motohawk_delta_time' */
  uint32_T s506_motohawk_delta_time_DWORK1;/* '<S506>/motohawk_delta_time' */
  uint32_T s750_motohawk_delta_time_DWORK1;/* '<S750>/motohawk_delta_time' */
  uint32_T s396_motohawk_delta_time_DWORK1;/* '<S396>/motohawk_delta_time' */
  uint32_T s490_motohawk_delta_time_DWORK1;/* '<S490>/motohawk_delta_time' */
  uint32_T s392_motohawk_delta_time_DWORK1;/* '<S392>/motohawk_delta_time' */
  uint32_T s516_motohawk_delta_time_DWORK1;/* '<S516>/motohawk_delta_time' */
  uint32_T s524_motohawk_delta_time_DWORK1;/* '<S524>/motohawk_delta_time' */
  uint32_T s618_motohawk_delta_time_DWORK1;/* '<S618>/motohawk_delta_time' */
  uint32_T s645_motohawk_delta_time_DWORK1;/* '<S645>/motohawk_delta_time' */
  uint32_T s627_motohawk_delta_time_DWORK1;/* '<S627>/motohawk_delta_time' */
  uint32_T s636_motohawk_delta_time_DWORK1;/* '<S636>/motohawk_delta_time' */
  uint32_T s298_motohawk_delta_time_DWORK1;/* '<S298>/motohawk_delta_time' */
  uint32_T s297_motohawk_delta_time_DWORK1;/* '<S297>/motohawk_delta_time' */
  uint32_T s301_motohawk_delta_time_DWORK1;/* '<S301>/motohawk_delta_time' */
  uint32_T s300_motohawk_delta_time_DWORK1;/* '<S300>/motohawk_delta_time' */
  uint32_T s302_motohawk_delta_time_DWORK1;/* '<S302>/motohawk_delta_time' */
  uint32_T s311_motohawk_delta_time_DWORK1;/* '<S311>/motohawk_delta_time' */
  uint32_T s312_motohawk_delta_time_DWORK1;/* '<S312>/motohawk_delta_time' */
  uint32_T s313_motohawk_delta_time_DWORK1;/* '<S313>/motohawk_delta_time' */
  uint32_T s329_motohawk_delta_time_DWORK1;/* '<S329>/motohawk_delta_time' */
  uint32_T s328_motohawk_delta_time_DWORK1;/* '<S328>/motohawk_delta_time' */
  uint32_T s305_motohawk_delta_time_DWORK1;/* '<S305>/motohawk_delta_time' */
  uint32_T s309_motohawk_delta_time_DWORK1;/* '<S309>/motohawk_delta_time' */
  uint32_T s381_motohawk_delta_time_DWORK1;/* '<S381>/motohawk_delta_time' */
  uint32_T s365_motohawk_delta_time_DWORK1;/* '<S365>/motohawk_delta_time' */
  uint32_T s172_motohawk_delta_time_DWORK1;/* '<S172>/motohawk_delta_time' */
  uint32_T s155_motohawk_delta_time_DWORK1;/* '<S155>/motohawk_delta_time' */
  uint32_T s165_motohawk_delta_time_DWORK1;/* '<S165>/motohawk_delta_time' */
  uint32_T s203_motohawk_delta_time_DWORK1;/* '<S203>/motohawk_delta_time' */
  uint32_T s214_motohawk_delta_time_DWORK1;/* '<S214>/motohawk_delta_time' */
  uint32_T s220_motohawk_delta_time_DWORK1;/* '<S220>/motohawk_delta_time' */
  uint32_T s224_motohawk_delta_time_DWORK1;/* '<S224>/motohawk_delta_time' */
  uint32_T s252_motohawk_delta_time_DWORK1;/* '<S252>/motohawk_delta_time' */
  uint32_T s227_motohawk_delta_time_DWORK1;/* '<S227>/motohawk_delta_time' */
  uint32_T s265_motohawk_delta_time_DWORK1;/* '<S265>/motohawk_delta_time' */
  uint32_T s269_motohawk_delta_time_DWORK1;/* '<S269>/motohawk_delta_time' */
  uint32_T s271_motohawk_delta_time_DWORK1;/* '<S271>/motohawk_delta_time' */
  uint32_T s270_motohawk_delta_time_DWORK1;/* '<S270>/motohawk_delta_time' */
  uint32_T s190_motohawk_delta_time_DWORK1;/* '<S190>/motohawk_delta_time' */
  uint32_T s189_motohawk_delta_time_DWORK1;/* '<S189>/motohawk_delta_time' */
  uint32_T s61_motohawk_delta_time_DWORK1;/* '<S61>/motohawk_delta_time' */
  uint32_T s53_motohawk_delta_time_DWORK1;/* '<S53>/motohawk_delta_time' */
  uint32_T s41_motohawk_delta_time_DWORK1;/* '<S41>/motohawk_delta_time' */
  uint32_T s46_motohawk_delta_time_DWORK1;/* '<S46>/motohawk_delta_time' */
  uint32_T s807_motohawk_delta_time_DWORK1;/* '<S807>/motohawk_delta_time' */
  int_T s136_HitCrossing1_MODE;        /* '<S136>/Hit  Crossing1' */
  uint16_T s704_InjectorSequence_DWORK2;/* '<S704>/Injector Sequence' */
  int8_T s367_UnitDelay_DSTATE;        /* '<S367>/Unit Delay' */
  int8_T s366_UnitDelay_DSTATE;        /* '<S366>/Unit Delay' */
  int8_T s336_UnitDelay_DSTATE;        /* '<S336>/Unit Delay' */
  uint8_T s370_UnitDelay_DSTATE;       /* '<S370>/Unit Delay' */
  uint8_T s390_CrankCounter_DSTATE;    /* '<S390>/CrankCounter' */
  uint8_T s98_UnitDelay1_DSTATE;       /* '<S98>/Unit Delay1' */
  boolean_T s319_UnitDelay_DSTATE;     /* '<S319>/Unit Delay' */
  boolean_T s320_UnitDelay_DSTATE;     /* '<S320>/Unit Delay' */
  boolean_T s325_UnitDelay_DSTATE;     /* '<S325>/Unit Delay' */
  boolean_T s326_UnitDelay_DSTATE;     /* '<S326>/Unit Delay' */
  boolean_T s321_UnitDelay_DSTATE;     /* '<S321>/Unit Delay' */
  boolean_T s327_UnitDelay_DSTATE;     /* '<S327>/Unit Delay' */
  boolean_T s284_UnitDelay_DSTATE;     /* '<S284>/Unit Delay' */
  boolean_T s285_UnitDelay_DSTATE;     /* '<S285>/Unit Delay' */
  boolean_T s286_UnitDelay_DSTATE;     /* '<S286>/Unit Delay' */
  boolean_T s146_UnitDelay_DSTATE;     /* '<S146>/Unit Delay' */
  boolean_T s145_UnitDelay_DSTATE;     /* '<S145>/Unit Delay' */
  boolean_T s143_UnitDelay_DSTATE;     /* '<S143>/Unit Delay' */
  boolean_T s144_UnitDelay_DSTATE;     /* '<S144>/Unit Delay' */
  boolean_T s171_UnitDelay_DSTATE;     /* '<S171>/Unit Delay' */
  boolean_T s176_UnitDelay_DSTATE;     /* '<S176>/Unit Delay' */
  boolean_T s177_UnitDelay_DSTATE;     /* '<S177>/Unit Delay' */
  boolean_T s178_UnitDelay_DSTATE;     /* '<S178>/Unit Delay' */
  boolean_T s276_InitialConditionisTrue_DSTATE;/* '<S276>/Initial Condition is True' */
  boolean_T s135_UnitDelay_DSTATE;     /* '<S135>/Unit Delay' */
  boolean_T s217_UnitDelay_DSTATE;     /* '<S217>/Unit Delay' */
  boolean_T s268_UnitDelay_DSTATE;     /* '<S268>/Unit Delay' */
  boolean_T s43_UnitDelay_DSTATE;      /* '<S43>/Unit Delay' */
  boolean_T s796_UnitDelay8_DSTATE;    /* '<S796>/Unit Delay8' */
  boolean_T s796_UnitDelay6_DSTATE;    /* '<S796>/Unit Delay6' */
  boolean_T s796_UnitDelay7_DSTATE;    /* '<S796>/Unit Delay7' */
  boolean_T s792_UnitDelay_DSTATE;     /* '<S792>/Unit Delay' */
  boolean_T s798_UnitDelay2_DSTATE;    /* '<S798>/Unit Delay2' */
  boolean_T s791_UnitDelay5_DSTATE;    /* '<S791>/Unit Delay5' */
  boolean_T s798_UnitDelay_DSTATE;     /* '<S798>/Unit Delay' */
  boolean_T s798_UnitDelay1_DSTATE;    /* '<S798>/Unit Delay1' */
  boolean_T s791_UnitDelay3_DSTATE;    /* '<S791>/Unit Delay3' */
  boolean_T s791_UnitDelay4_DSTATE;    /* '<S791>/Unit Delay4' */
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
  uint8_T s405_motohawk_trigger_DWORK1;/* '<S405>/motohawk_trigger' */
  uint8_T s370_motohawk_trigger_DWORK1;/* '<S370>/motohawk_trigger' */
  uint8_T s465_motohawk_trigger5_DWORK1;/* '<S465>/motohawk_trigger5' */
  uint8_T s14_motohawk_trigger1_DWORK1;/* '<S14>/motohawk_trigger1' */
  uint8_T s14_motohawk_trigger_DWORK1; /* '<S14>/motohawk_trigger' */
  uint8_T s13_motohawk_trigger_DWORK1; /* '<S13>/motohawk_trigger' */
  uint8_T s715_motohawk_trigger1_DWORK1;/* '<S715>/motohawk_trigger1' */
  uint8_T s389_is_c2_BaseEngineController_LS;/* '<S370>/Engine State Machine' */
  uint8_T s335_is_c19_BaseEngineController_LS;/* '<S330>/Baro Stall State Delay' */
  uint8_T s119_motohawk_trigger1_DWORK1;/* '<S119>/motohawk_trigger1' */
  uint8_T s236_is_active_c12_BaseEngineController_LS;/* '<S221>/IdleStateMachine' */
  uint8_T s236_is_c12_BaseEngineController_LS;/* '<S221>/IdleStateMachine' */
  uint8_T s170_is_active_c1_BaseEngineController_LS;/* '<S169>/Chart' */
  uint8_T s170_is_c1_BaseEngineController_LS;/* '<S169>/Chart' */
  uint8_T s98_motohawk_trigger_DWORK1; /* '<S98>/motohawk_trigger' */
  uint8_T s26_is_c9_BaseEngineController_LS;/* '<S20>/ETC Test  Manager' */
  uint8_T s795_is_c8_BaseEngineController_LS;/* '<S791>/ECUP Latch' */
  boolean_T s704_InjectorSequence_DWORK1[8];/* '<S704>/Injector Sequence' */
  boolean_T s257_Multiplyby10ifnotyetenabled_FirstOutputTime;/* '<S257>/Multiply by 1.0 if not yet enabled' */
  boolean_T s811_Memory_PreviousInput; /* '<S811>/Memory' */
  boolean_T s15_Stall_MODE;            /* '<S15>/Stall' */
  boolean_T s15_Crank_MODE;            /* '<S15>/Crank' */
  boolean_T s330_CaptureSignalAtStartup_MODE;/* '<S330>/Capture Signal At Startup' */
  boolean_T s333_CaptureECTAtStartup_MODE;/* '<S333>/Capture ECT At Startup' */
  boolean_T s333_CaptureIATAtStartup_MODE;/* '<S333>/Capture IAT At Startup' */
  boolean_T s15_Run_MODE;              /* '<S15>/Run' */
  boolean_T s22_PassThrough1_MODE;     /* '<S22>/PassThrough1' */
  boolean_T s22_PassThrough3_MODE;     /* '<S22>/PassThrough3' */
  boolean_T s22_SequenceCutMachine_MODE;/* '<S22>/SequenceCutMachine' */
  boolean_T s22_PassThrough4_MODE;     /* '<S22>/PassThrough4' */
  boolean_T s14_ElectronicThrottleController_MODE;/* '<S14>/Electronic Throttle Controller' */
  boolean_T s22_PassThrough5_MODE;     /* '<S22>/PassThrough5' */
  boolean_T s180_DeltaTPSTransientFueling_MODE;/* '<S180>/Delta TPS Transient Fueling' */
  boolean_T s185_ECTTransientFueling_MODE;/* '<S185>/ECT Transient Fueling' */
  boolean_T s30_PassThrough_MODE;      /* '<S30>/PassThrough' */
  rtDW_CollectAverage_BaseEngineController_LS s367_CollectAverage;/* '<S367>/Collect Average' */
  rtDW_CollectAverage_BaseEngineController_LS s366_CollectAverage;/* '<S366>/Collect Average' */
  rtDW_CollectAverage_BaseEngineController_LS s336_CollectAverage;/* '<S336>/Collect Average' */
} D_Work_BaseEngineController_LS;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState HitCrossing1_Input_ZCE;   /* '<S136>/Hit  Crossing1' */
  ZCSigState ResetTasksCompleteToFalse_Trig_ZCE;/* '<S31>/Reset TasksComplete To False' */
  ZCSigState ResetTasksCompleteToTrue_Trig_ZCE;/* '<S20>/Reset TasksComplete To True' */
  ZCSigState ShutdownpoweronECU565563_Trig_ZCE;/* '<S798>/Shutdown power on ECU565//563' */
  ZCSigState SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE;/* '<S798>/Save NV Vars one tick before MPRD off' */
  ZCSigState ProcessorReboot_Trig_ZCE; /* '<S798>/Processor Reboot' */
  ZCSigState PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE;/* '<S798>/Post Shutdown two ticks before MPRD off' */
  ZCSigState ShutdownpoweronECU565563_Trig_ZCE_l;/* '<S796>/Shutdown power on ECU565//563' */
  ZCSigState SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE_m;/* '<S796>/Save NV Vars one tick before MPRD off' */
  ZCSigState ProcessorReboot_Trig_ZCE_h;/* '<S796>/Processor Reboot' */
  ZCSigState PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE_h;/* '<S796>/Post Shutdown two ticks before MPRD off' */
  ZCSigState Clear_Trig_ZCE;           /* '<S794>/Clear' */
  ZCSigState Clear_Trig_ZCE_k;         /* '<S793>/Clear' */
} PrevZCSigStates_BaseEngineController_LS;

/* Invariant block signals (auto storage) */
typedef struct {
  const real_T s704_Gain4;             /* '<S704>/Gain4' */
  const real_T s121_motohawk_replicate2;/* '<S121>/motohawk_replicate2' */
  const real_T s121_motohawk_replicate[8];/* '<S121>/motohawk_replicate' */
  const uint32_T s704_DataTypeConversion5;/* '<S704>/Data Type Conversion5' */
} ConstBlockIO_BaseEngineController_LS;

/* Constant parameters (auto storage) */
typedef struct {
  /* Computed Parameter: Logic_table
   * Referenced by: '<S811>/Logic'
   */
  boolean_T Logic_table[16];

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S143>/Combinatorial  Logic'
   *   '<S144>/Combinatorial  Logic'
   *   '<S145>/Combinatorial  Logic'
   *   '<S146>/Combinatorial  Logic'
   *   '<S171>/Combinatorial  Logic'
   *   '<S176>/Combinatorial  Logic'
   *   '<S177>/Combinatorial  Logic'
   *   '<S178>/Combinatorial  Logic'
   *   '<S284>/Combinatorial  Logic'
   *   '<S285>/Combinatorial  Logic'
   *   '<S286>/Combinatorial  Logic'
   *   '<S319>/Combinatorial  Logic'
   *   '<S320>/Combinatorial  Logic'
   *   '<S321>/Combinatorial  Logic'
   *   '<S325>/Combinatorial  Logic'
   *   '<S326>/Combinatorial  Logic'
   *   '<S327>/Combinatorial  Logic'
   *   '<S43>/Combinatorial  Logic'
   *   '<S268>/Combinatorial  Logic'
   */
  boolean_T pooled728[8];
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
 * '<S25>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/ETC Sticking Fault
 * '<S26>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/ETC Test  Manager
 * '<S27>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/ETCStallShutDown
 * '<S28>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)
 * '<S29>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/Reset TasksComplete To True
 * '<S30>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/Setpoint Manager
 * '<S31>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/State  Manager
 * '<S32>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/ETC Sticking Fault/ShutDownAdaptMode1
 * '<S33>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/DamperSwitch
 * '<S34>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/IGain
 * '<S35>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/PGain
 * '<S36>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/PID With Damper Terms
 * '<S37>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/Saturation (Tunable)
 * '<S38>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/DamperSwitch/Filtered Derivative
 * '<S39>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/DamperSwitch/Hysterisis
 * '<S40>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/DamperSwitch/Filtered Derivative/Derivitive2
 * '<S41>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/DamperSwitch/Filtered Derivative/First Order Low Pass (Tunable)
 * '<S42>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/DamperSwitch/Filtered Derivative/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S43>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/DamperSwitch/Hysterisis/Hysteresis
 * '<S44>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/PID With Damper Terms/Derivitive1
 * '<S45>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/PID With Damper Terms/Derivitive3
 * '<S46>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/PID With Damper Terms/Integrator
 * '<S47>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/PID With Damper Terms/Model Info
 * '<S48>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/PID With Damper Terms/Integrator/Saturation
 * '<S49>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/PID With Damper Terms (Tunable)/Saturation (Tunable)/Saturation
 * '<S50>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/Setpoint Manager/PassThrough
 * '<S51>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/Setpoint Manager/ShutDownAdaptMode1
 * '<S52>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/Setpoint Manager/Tuning
 * '<S53>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/Setpoint Manager/Variable Rate Limiter
 * '<S54>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/Setpoint Manager/Tuning/Time Since Enabled (With Input)1
 * '<S55>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/Setpoint Manager/Tuning/motohawk_override_abs
 * '<S56>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/Setpoint Manager/Tuning/motohawk_override_abs/NewValue
 * '<S57>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/Setpoint Manager/Tuning/motohawk_override_abs/OldValue
 * '<S58>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/Setpoint Manager/Variable Rate Limiter/Saturation
 * '<S59>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/State  Manager/Reset TasksComplete To False
 * '<S60>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/State  Manager/Stall
 * '<S61>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/State  Manager/Time Since Enabled (With Input)1
 * '<S62>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Injector Characterization/DeltaPressureIndex
 * '<S63>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets
 * '<S64>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel
 * '<S65>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel1
 * '<S66>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel2
 * '<S67>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel3
 * '<S68>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel4
 * '<S69>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel5
 * '<S70>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel6
 * '<S71>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel7
 * '<S72>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel8
 * '<S73>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel/NewValue
 * '<S74>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel/OldValue
 * '<S75>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel1/NewValue
 * '<S76>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel1/OldValue
 * '<S77>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel2/NewValue
 * '<S78>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel2/OldValue
 * '<S79>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel3/NewValue
 * '<S80>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel3/OldValue
 * '<S81>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel4/NewValue
 * '<S82>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel4/OldValue
 * '<S83>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel5/NewValue
 * '<S84>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel5/OldValue
 * '<S85>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel6/NewValue
 * '<S86>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel6/OldValue
 * '<S87>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel7/NewValue
 * '<S88>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel7/OldValue
 * '<S89>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel8/NewValue
 * '<S90>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Injector Characterization/Fuel Inj Offsets/motohawk_override_rel8/OldValue
 * '<S91>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Hard Cycle Cut Pattern
 * '<S92>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Medium Cycle Cut Pattern
 * '<S93>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/PassThrough1
 * '<S94>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/PassThrough2
 * '<S95>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/PassThrough3
 * '<S96>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/PassThrough4
 * '<S97>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/PassThrough5
 * '<S98>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/SequenceCutMachine
 * '<S99>'  : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Soft Cycle Cut Pattern
 * '<S100>' : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Hard Cycle Cut Pattern/Cycle1CutPatter
 * '<S101>' : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Hard Cycle Cut Pattern/Cycle2CutPatter
 * '<S102>' : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Hard Cycle Cut Pattern/Cycle3CutPatter
 * '<S103>' : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Hard Cycle Cut Pattern/Cycle4CutPatter
 * '<S104>' : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Medium Cycle Cut Pattern/Cycle1CutPatter
 * '<S105>' : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Medium Cycle Cut Pattern/Cycle2CutPatter
 * '<S106>' : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Medium Cycle Cut Pattern/Cycle3CutPatter
 * '<S107>' : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Medium Cycle Cut Pattern/Cycle4CutPatter
 * '<S108>' : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/SequenceCutMachine/SequencyCutMachine
 * '<S109>' : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Soft Cycle Cut Pattern/Cycle1CutPatter
 * '<S110>' : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Soft Cycle Cut Pattern/Cycle2CutPatter
 * '<S111>' : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Soft Cycle Cut Pattern/Cycle3CutPatter
 * '<S112>' : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/SequenceCutPattern/Soft Cycle Cut Pattern/Cycle4CutPatter
 * '<S113>' : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Spark Coil Characterization/motohawk_override_rel
 * '<S114>' : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Spark Coil Characterization/motohawk_override_rel/NewValue
 * '<S115>' : BaseEngineController_LS/Foreground/Control/ActuatorCharacterization/Spark Coil Characterization/motohawk_override_rel/OldValue
 * '<S116>' : BaseEngineController_LS/Foreground/Control/Controller/Crank
 * '<S117>' : BaseEngineController_LS/Foreground/Control/Controller/Crank State
 * '<S118>' : BaseEngineController_LS/Foreground/Control/Controller/Merge
 * '<S119>' : BaseEngineController_LS/Foreground/Control/Controller/Run
 * '<S120>' : BaseEngineController_LS/Foreground/Control/Controller/Run State
 * '<S121>' : BaseEngineController_LS/Foreground/Control/Controller/Stall
 * '<S122>' : BaseEngineController_LS/Foreground/Control/Controller/Stall State
 * '<S123>' : BaseEngineController_LS/Foreground/Control/Controller/Crank/CrankFueling
 * '<S124>' : BaseEngineController_LS/Foreground/Control/Controller/Crank/CrankIAC
 * '<S125>' : BaseEngineController_LS/Foreground/Control/Controller/Crank/IAC Characterization
 * '<S126>' : BaseEngineController_LS/Foreground/Control/Controller/Merge/FuelPump
 * '<S127>' : BaseEngineController_LS/Foreground/Control/Controller/Run/AC Control
 * '<S128>' : BaseEngineController_LS/Foreground/Control/Controller/Run/AirFlow Manager
 * '<S129>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Base Equiv Ratio
 * '<S130>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Boost Control
 * '<S131>' : BaseEngineController_LS/Foreground/Control/Controller/Run/DFCO
 * '<S132>' : BaseEngineController_LS/Foreground/Control/Controller/Run/FAN Control
 * '<S133>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager
 * '<S134>' : BaseEngineController_LS/Foreground/Control/Controller/Run/IAC Characterization
 * '<S135>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor
 * '<S136>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor
 * '<S137>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control
 * '<S138>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Spark Manager
 * '<S139>' : BaseEngineController_LS/Foreground/Control/Controller/Run/AC Control/AC Comp Overspeed
 * '<S140>' : BaseEngineController_LS/Foreground/Control/Controller/Run/AC Control/AC Comp Overspeed1
 * '<S141>' : BaseEngineController_LS/Foreground/Control/Controller/Run/AC Control/AC Comp Underspeed
 * '<S142>' : BaseEngineController_LS/Foreground/Control/Controller/Run/AC Control/AC Evap Temp Hyst
 * '<S143>' : BaseEngineController_LS/Foreground/Control/Controller/Run/AC Control/AC Comp Overspeed/Hysteresis
 * '<S144>' : BaseEngineController_LS/Foreground/Control/Controller/Run/AC Control/AC Comp Overspeed1/Hysteresis
 * '<S145>' : BaseEngineController_LS/Foreground/Control/Controller/Run/AC Control/AC Comp Underspeed/Hysteresis
 * '<S146>' : BaseEngineController_LS/Foreground/Control/Controller/Run/AC Control/AC Evap Temp Hyst/Hysteresis
 * '<S147>' : BaseEngineController_LS/Foreground/Control/Controller/Run/AirFlow Manager/Saturation
 * '<S148>' : BaseEngineController_LS/Foreground/Control/Controller/Run/AirFlow Manager/ShutDownTasksComplete Reset
 * '<S149>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Base Equiv Ratio/Warm Up Fuel Holdoff
 * '<S150>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Base Equiv Ratio/motohawk_override_abs
 * '<S151>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Base Equiv Ratio/motohawk_override_abs/NewValue
 * '<S152>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Base Equiv Ratio/motohawk_override_abs/OldValue
 * '<S153>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Boost Control/BoostControl Adapt
 * '<S154>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Boost Control/Universal PID (Tunable & Scheduled)
 * '<S155>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Boost Control/Variable Rate Limiter
 * '<S156>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Boost Control/BoostControl Adapt/Adapt Boost Table
 * '<S157>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Boost Control/BoostControl Adapt/BoostControl Enable Delay
 * '<S158>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Boost Control/BoostControl Adapt/Saturation (Tunable)
 * '<S159>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Boost Control/BoostControl Adapt/BoostControl Enable Delay/Time Since Enabled (With Input)1
 * '<S160>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Boost Control/BoostControl Adapt/Saturation (Tunable)/Saturation
 * '<S161>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Boost Control/Universal PID (Tunable & Scheduled)/PID Gain Select1
 * '<S162>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Boost Control/Universal PID (Tunable & Scheduled)/Saturation
 * '<S163>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Boost Control/Universal PID (Tunable & Scheduled)/Universal PID
 * '<S164>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Boost Control/Universal PID (Tunable & Scheduled)/Universal PID/Derivitive3
 * '<S165>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Boost Control/Universal PID (Tunable & Scheduled)/Universal PID/Integrator
 * '<S166>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Boost Control/Universal PID (Tunable & Scheduled)/Universal PID/Model Info
 * '<S167>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Boost Control/Universal PID (Tunable & Scheduled)/Universal PID/Integrator/Saturation
 * '<S168>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Boost Control/Variable Rate Limiter/Saturation
 * '<S169>' : BaseEngineController_LS/Foreground/Control/Controller/Run/DFCO/DesEquivRatioMod
 * '<S170>' : BaseEngineController_LS/Foreground/Control/Controller/Run/DFCO/DesEquivRatioMod/Chart
 * '<S171>' : BaseEngineController_LS/Foreground/Control/Controller/Run/DFCO/DesEquivRatioMod/Hysteresis
 * '<S172>' : BaseEngineController_LS/Foreground/Control/Controller/Run/DFCO/DesEquivRatioMod/Time Since Enabled (With Input)1
 * '<S173>' : BaseEngineController_LS/Foreground/Control/Controller/Run/FAN Control/Hysterisis
 * '<S174>' : BaseEngineController_LS/Foreground/Control/Controller/Run/FAN Control/Hysterisis1
 * '<S175>' : BaseEngineController_LS/Foreground/Control/Controller/Run/FAN Control/Hysterisis2
 * '<S176>' : BaseEngineController_LS/Foreground/Control/Controller/Run/FAN Control/Hysterisis/Hysteresis
 * '<S177>' : BaseEngineController_LS/Foreground/Control/Controller/Run/FAN Control/Hysterisis1/Hysteresis
 * '<S178>' : BaseEngineController_LS/Foreground/Control/Controller/Run/FAN Control/Hysterisis2/Hysteresis
 * '<S179>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Fuel Calculation
 * '<S180>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager
 * '<S181>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt
 * '<S182>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Fuel Calculation/Calculate Fuel Flow
 * '<S183>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Fuel Calculation/Calculate Fuel Flow/Calculate A//F Ratio
 * '<S184>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Fuel Calculation/Calculate Fuel Flow/Calculate A//F Ratio/motohawk_table_1d
 * '<S185>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling
 * '<S186>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Mass Flow to Charge Mass Transform
 * '<S187>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling/CompareTo2
 * '<S188>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling/ECT Transient Fueling
 * '<S189>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling/First Order Low Pass (Tunable)
 * '<S190>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling/First Order Low Pass (Tunable)1
 * '<S191>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S192>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling/First Order Low Pass (Tunable)1/First Order Low Pass
 * '<S193>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Mass Flow to Charge Mass Transform/Multiply and Divide, avoiding divde by zero
 * '<S194>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Mass Flow to Charge Mass Transform/NonZero RPM
 * '<S195>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/Adapt FuelFlowComp Map
 * '<S196>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/O2 Control Enable Delay
 * '<S197>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/Saturation (Tunable)
 * '<S198>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/WarmUp Disable
 * '<S199>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/O2 Control Enable Delay/Time Since Enabled (With Input)1
 * '<S200>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/Saturation (Tunable)/Saturation
 * '<S201>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/I-Term Preload
 * '<S202>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/MaxGovState
 * '<S203>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Ramp RPM
 * '<S204>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Trigger Pre-load
 * '<S205>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)
 * '<S206>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/MaxGovState/MaxGOV Stateflow
 * '<S207>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Trigger Pre-load/InGear
 * '<S208>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Trigger Pre-load/InNeutral
 * '<S209>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Trigger Pre-load/InGear/Saturation
 * '<S210>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Trigger Pre-load/InNeutral/Saturation
 * '<S211>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Saturation
 * '<S212>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Universal PID
 * '<S213>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Derivitive3
 * '<S214>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Integrator
 * '<S215>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Model Info
 * '<S216>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Integrator/Saturation
 * '<S217>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/AiflowOffset
 * '<S218>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Base Airflow Table Adapt
 * '<S219>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Base RPM Set Pt
 * '<S220>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Handoff Alpha
 * '<S221>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination
 * '<S222>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/MotoringDetection
 * '<S223>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/OnIdle State
 * '<S224>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Ramp RPM
 * '<S225>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PD (Tunable & Scheduled)
 * '<S226>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)
 * '<S227>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/AiflowOffset/Ramp Air Into Idle State
 * '<S228>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/AiflowOffset/Run
 * '<S229>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Base Airflow Table Adapt/Adapt Base Airflow Table
 * '<S230>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Base Airflow Table Adapt/Idle Control Enable Delay
 * '<S231>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Base Airflow Table Adapt/Saturation (Tunable)
 * '<S232>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Base Airflow Table Adapt/Idle Control Enable Delay/Time Since Enabled (With Input)1
 * '<S233>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Base Airflow Table Adapt/Saturation (Tunable)/Saturation
 * '<S234>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Handoff Alpha/Saturation
 * '<S235>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/Determine if RPM is Falling
 * '<S236>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/IdleStateMachine
 * '<S237>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/OnIdle State
 * '<S238>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/Time Since Enabled (With Input)1
 * '<S239>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/Determine if RPM is Falling/Derivitive
 * '<S240>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/Determine if RPM is Falling/First Order Low Pass (Tunable)
 * '<S241>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/Determine if RPM is Falling/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S242>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/MotoringDetection/Time Since Enabled (With Input)2
 * '<S243>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PD (Tunable & Scheduled)/PID Gain Select
 * '<S244>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PD (Tunable & Scheduled)/Saturation
 * '<S245>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PD (Tunable & Scheduled)/Universal PD
 * '<S246>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PD (Tunable & Scheduled)/Universal PD/Derivitive
 * '<S247>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PD (Tunable & Scheduled)/Universal PD/Model Info
 * '<S248>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/PID Gain Select1
 * '<S249>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/Saturation
 * '<S250>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/Universal PID
 * '<S251>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Derivitive3
 * '<S252>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Integrator
 * '<S253>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Model Info
 * '<S254>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Integrator/Saturation
 * '<S255>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 Control State Determination
 * '<S256>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Calibrations
 * '<S257>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller
 * '<S258>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Calibrations/Error Gain Scheduling
 * '<S259>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Calibrations/O2 Control Switch Point Maps
 * '<S260>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Closed-Loop O2 PID Controller
 * '<S261>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Equivalence Ratio Perturbation
 * '<S262>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Closed-Loop O2 PID Controller/Saturation
 * '<S263>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Closed-Loop O2 PID Controller/Universal PID
 * '<S264>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Closed-Loop O2 PID Controller/Universal PID/Derivitive3
 * '<S265>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Closed-Loop O2 PID Controller/Universal PID/Integrator
 * '<S266>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Closed-Loop O2 PID Controller/Universal PID/Model Info
 * '<S267>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Closed-Loop O2 PID Controller/Universal PID/Integrator/Saturation
 * '<S268>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Equivalence Ratio Perturbation/Hysteresis
 * '<S269>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Equivalence Ratio Perturbation/Time Since Enabled (With Input)1
 * '<S270>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Equivalence Ratio Perturbation/Time Since Enabled (With Input)2
 * '<S271>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller/Equivalence Ratio Perturbation/Time Since Enabled (With Input)3
 * '<S272>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Spark Manager/Ethanol Spark Offset
 * '<S273>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Spark Manager/Spark Advance Rate Limiter
 * '<S274>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Spark Manager/SparkAdvanceLimiter
 * '<S275>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Spark Manager/Temp Comp Offset
 * '<S276>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Spark Manager/Spark Advance Rate Limiter/First Time
 * '<S277>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Spark Manager/Spark Advance Rate Limiter/Saturation
 * '<S278>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Spark Manager/SparkAdvanceLimiter/Saturation
 * '<S279>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/FAN Control
 * '<S280>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/Fuel Pump at Startup
 * '<S281>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/FAN Control/Hysterisis
 * '<S282>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/FAN Control/Hysterisis1
 * '<S283>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/FAN Control/Hysterisis2
 * '<S284>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/FAN Control/Hysterisis/Hysteresis
 * '<S285>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/FAN Control/Hysterisis1/Hysteresis
 * '<S286>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/FAN Control/Hysterisis2/Hysteresis
 * '<S287>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/Fuel Pump at Startup/Time Since Enabled
 * '<S288>' : BaseEngineController_LS/Foreground/Control/Diagnostics/AC Fault
 * '<S289>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Boost Fault
 * '<S290>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Engine Overheat Fault Logic
 * '<S291>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Fuel Economy
 * '<S292>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Low Oil Pressure Fault Logic
 * '<S293>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MAP Fault Logic
 * '<S294>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection
 * '<S295>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Wrong Fuel Pressure Fault Logic
 * '<S296>' : BaseEngineController_LS/Foreground/Control/Diagnostics/AC Fault/Run State
 * '<S297>' : BaseEngineController_LS/Foreground/Control/Diagnostics/AC Fault/Time Since Enabled (With Input)1
 * '<S298>' : BaseEngineController_LS/Foreground/Control/Diagnostics/AC Fault/Time Since Enabled (With Input)2
 * '<S299>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Boost Fault/Run State
 * '<S300>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Boost Fault/Time Since Enabled (With Input)1
 * '<S301>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Boost Fault/Time Since Enabled (With Input)2
 * '<S302>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Boost Fault/Time Since Enabled (With Input)3
 * '<S303>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Engine Overheat Fault Logic/Run State
 * '<S304>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Fuel Economy/Calculate Fuel Density
 * '<S305>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Fuel Economy/First Order Low Pass (Tunable)
 * '<S306>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Fuel Economy/Multiply and Divide, avoiding divde by zero1
 * '<S307>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Fuel Economy/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S308>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Low Oil Pressure Fault Logic/Run State
 * '<S309>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Low Oil Pressure Fault Logic/Time Since Enabled (With Input)2
 * '<S310>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MAP Fault Logic/Run State
 * '<S311>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MAP Fault Logic/Time Since Enabled (With Input)1
 * '<S312>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MAP Fault Logic/Time Since Enabled (With Input)2
 * '<S313>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MAP Fault Logic/Time Since Enabled (With Input)3
 * '<S314>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/BaseRevLimit
 * '<S315>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/TwoStepRevLimit
 * '<S316>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/BaseRevLimit/Hysterisis
 * '<S317>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/BaseRevLimit/Hysterisis1
 * '<S318>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/BaseRevLimit/Hysterisis2
 * '<S319>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/BaseRevLimit/Hysterisis/Hysteresis
 * '<S320>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/BaseRevLimit/Hysterisis1/Hysteresis
 * '<S321>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/BaseRevLimit/Hysterisis2/Hysteresis
 * '<S322>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/TwoStepRevLimit/Hysterisis
 * '<S323>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/TwoStepRevLimit/Hysterisis1
 * '<S324>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/TwoStepRevLimit/Hysterisis2
 * '<S325>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/TwoStepRevLimit/Hysterisis/Hysteresis
 * '<S326>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/TwoStepRevLimit/Hysterisis1/Hysteresis
 * '<S327>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/TwoStepRevLimit/Hysterisis2/Hysteresis
 * '<S328>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Wrong Fuel Pressure Fault Logic/Time Since Enabled (With Input)1
 * '<S329>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Wrong Fuel Pressure Fault Logic/Time Since Enabled (With Input)2
 * '<S330>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs
 * '<S331>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs
 * '<S332>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes
 * '<S333>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed
 * '<S334>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Virtual Indexes
 * '<S335>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Baro Stall State Delay
 * '<S336>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Capture Signal At Startup
 * '<S337>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Speed Density - MAP Referenced - Adaptive
 * '<S338>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/motohawk_override_rel
 * '<S339>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Capture Signal At Startup/Collect Average
 * '<S340>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Speed Density - MAP Referenced - Adaptive/Adapt VolEff Map
 * '<S341>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Speed Density - MAP Referenced - Adaptive/C to K1
 * '<S342>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Speed Density - MAP Referenced - Adaptive/Compare To Constant
 * '<S343>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Speed Density - MAP Referenced - Adaptive/Adapt VolEff Map/motohawk_table_1d
 * '<S344>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/motohawk_override_rel/NewValue
 * '<S345>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/motohawk_override_rel/OldValue
 * '<S346>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag
 * '<S347>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect1
 * '<S348>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect3
 * '<S349>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect1/DecreasingFilter
 * '<S350>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect1/First Order Low Pass
 * '<S351>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect1/IncreasingFilter
 * '<S352>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect3/DecreasingFilter
 * '<S353>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect3/First Order Low Pass
 * '<S354>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect3/IncreasingFilter
 * '<S355>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/ACPres Index
 * '<S356>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/CAT Index
 * '<S357>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/ECT Index
 * '<S358>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/IAT Indexes
 * '<S359>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/MAP Indexes
 * '<S360>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/RPM Indexes
 * '<S361>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/SysVolt Index
 * '<S362>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/TPS Indexes
 * '<S363>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/VSPD Index
 * '<S364>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/APP  Sensor Arbitration1
 * '<S365>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request
 * '<S366>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Capture ECT At Startup
 * '<S367>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Capture IAT At Startup
 * '<S368>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/CutThrottle APP Limiting
 * '<S369>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Engine Accel
 * '<S370>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/EngineState
 * '<S371>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Fuel Delta Pressure Calculation
 * '<S372>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/O2 De-lag
 * '<S373>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Stall
 * '<S374>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/TPS  Sensor Arbitration
 * '<S375>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Time Since Key On
 * '<S376>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Time Since Run
 * '<S377>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Time Since Stall
 * '<S378>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request/First Order Low Pass
 * '<S379>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request/PassThrough1
 * '<S380>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request/PassThrough2
 * '<S381>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request/Variable Rate Limiter
 * '<S382>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request/Variable Rate Limiter/Saturation
 * '<S383>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Capture ECT At Startup/Collect Average
 * '<S384>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Capture IAT At Startup/Collect Average
 * '<S385>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/CutThrottle APP Limiting/Bound APP if overheating
 * '<S386>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Engine Accel/Derivitive3
 * '<S387>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Engine Accel/First Order Low Pass (Tunable)
 * '<S388>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Engine Accel/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S389>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/EngineState/Engine State Machine
 * '<S390>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/EngineState/TDC_Counter
 * '<S391>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/EngineState/TDC_Counter/Crank State
 * '<S392>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Time Since Key On/Time Since Enabled (With Input)2
 * '<S393>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Time Since Run/RunState
 * '<S394>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Time Since Run/Time Since Enabled (With Input)2
 * '<S395>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Time Since Stall/Stall State
 * '<S396>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Time Since Stall/Time Since Enabled (With Input)1
 * '<S397>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Virtual Indexes/ECT_KeyUp
 * '<S398>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Virtual Indexes/IAT_KeyUp
 * '<S399>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Virtual Indexes/MAFPortIndex
 * '<S400>' : BaseEngineController_LS/Foreground/Control/motohawk_function_collector/motohawk_function_collector_in
 * '<S401>' : BaseEngineController_LS/Foreground/Control/motohawk_function_collector/motohawk_function_collector_in/Triggered Subsystem
 * '<S402>' : BaseEngineController_LS/Foreground/Inputs/Digital
 * '<S403>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed
 * '<S404>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors
 * '<S405>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors
 * '<S406>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors
 * '<S407>' : BaseEngineController_LS/Foreground/Inputs/Digital/ACSw
 * '<S408>' : BaseEngineController_LS/Foreground/Inputs/Digital/ClutchSw
 * '<S409>' : BaseEngineController_LS/Foreground/Inputs/Digital/ESTOP
 * '<S410>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor
 * '<S411>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor1
 * '<S412>' : BaseEngineController_LS/Foreground/Inputs/Digital/Scramble
 * '<S413>' : BaseEngineController_LS/Foreground/Inputs/Digital/Two Step
 * '<S414>' : BaseEngineController_LS/Foreground/Inputs/Digital/ACSw /Override in Engineering Units
 * '<S415>' : BaseEngineController_LS/Foreground/Inputs/Digital/ACSw /Override in Engineering Units/NewValue
 * '<S416>' : BaseEngineController_LS/Foreground/Inputs/Digital/ACSw /Override in Engineering Units/OldValue
 * '<S417>' : BaseEngineController_LS/Foreground/Inputs/Digital/ClutchSw/Override in Engineering Units
 * '<S418>' : BaseEngineController_LS/Foreground/Inputs/Digital/ClutchSw/Override in Engineering Units/NewValue
 * '<S419>' : BaseEngineController_LS/Foreground/Inputs/Digital/ClutchSw/Override in Engineering Units/OldValue
 * '<S420>' : BaseEngineController_LS/Foreground/Inputs/Digital/ESTOP/Override in Engineering Units
 * '<S421>' : BaseEngineController_LS/Foreground/Inputs/Digital/ESTOP/Override in Engineering Units/NewValue
 * '<S422>' : BaseEngineController_LS/Foreground/Inputs/Digital/ESTOP/Override in Engineering Units/OldValue
 * '<S423>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor/First Order Low Pass
 * '<S424>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor/If Action Subsystem
 * '<S425>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor/If Action Subsystem1
 * '<S426>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor/If Action Subsystem2
 * '<S427>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor/Override
 * '<S428>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor/motohawk_table_1d1
 * '<S429>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor/First Order Low Pass/First Order Low Pass
 * '<S430>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor/Override/NewValue
 * '<S431>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor/Override/OldValue
 * '<S432>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor1/First Order Low Pass
 * '<S433>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor1/If Action Subsystem
 * '<S434>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor1/If Action Subsystem1
 * '<S435>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor1/If Action Subsystem2
 * '<S436>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor1/Override
 * '<S437>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor1/motohawk_table_1d1
 * '<S438>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor1/First Order Low Pass/First Order Low Pass
 * '<S439>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor1/Override/NewValue
 * '<S440>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor1/Override/OldValue
 * '<S441>' : BaseEngineController_LS/Foreground/Inputs/Digital/Scramble /Button Delay 1
 * '<S442>' : BaseEngineController_LS/Foreground/Inputs/Digital/Scramble /Override in Engineering Units
 * '<S443>' : BaseEngineController_LS/Foreground/Inputs/Digital/Scramble /Button Delay 1/Time Since Enabled (With Input)4
 * '<S444>' : BaseEngineController_LS/Foreground/Inputs/Digital/Scramble /Override in Engineering Units/NewValue
 * '<S445>' : BaseEngineController_LS/Foreground/Inputs/Digital/Scramble /Override in Engineering Units/OldValue
 * '<S446>' : BaseEngineController_LS/Foreground/Inputs/Digital/Two Step/Button Delay 1
 * '<S447>' : BaseEngineController_LS/Foreground/Inputs/Digital/Two Step/Override in Engineering Units
 * '<S448>' : BaseEngineController_LS/Foreground/Inputs/Digital/Two Step/Button Delay 1/Time Since Enabled (With Input)4
 * '<S449>' : BaseEngineController_LS/Foreground/Inputs/Digital/Two Step/Override in Engineering Units/NewValue
 * '<S450>' : BaseEngineController_LS/Foreground/Inputs/Digital/Two Step/Override in Engineering Units/OldValue
 * '<S451>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed/Encoder Diagnostics
 * '<S452>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed/First Order Low Pass (Tunable)1
 * '<S453>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/CamEdges
 * '<S454>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/CamSync
 * '<S455>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/CounterThresh
 * '<S456>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/CrankEdges
 * '<S457>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/CrankSync
 * '<S458>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/motohawk_model_probe_eval_f
 * '<S459>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed/First Order Low Pass (Tunable)1/First Order Low Pass
 * '<S460>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/ACPres
 * '<S461>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor
 * '<S462>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelPres
 * '<S463>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP
 * '<S464>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAPTime
 * '<S465>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP_Crank_Synchronous
 * '<S466>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/OilPres
 * '<S467>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SensVolts
 * '<S468>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SysVolts
 * '<S469>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/ACPres /First Order Low Pass
 * '<S470>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/ACPres /If Action Subsystem
 * '<S471>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/ACPres /If Action Subsystem1
 * '<S472>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/ACPres /If Action Subsystem2
 * '<S473>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/ACPres /Override
 * '<S474>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/ACPres /First Order Low Pass/First Order Low Pass
 * '<S475>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/ACPres /Override/NewValue
 * '<S476>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/ACPres /Override/OldValue
 * '<S477>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options
 * '<S478>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/If Action Subsystem
 * '<S479>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/If Action Subsystem1
 * '<S480>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/If Action Subsystem2
 * '<S481>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Override
 * '<S482>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options/First Order Low Pass
 * '<S483>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options/Moving Average Filter
 * '<S484>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options/Rate Limiter
 * '<S485>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options/First Order Low Pass/First Order Low Pass
 * '<S486>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options/Rate Limiter/Variable Rate Limiter
 * '<S487>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options/Rate Limiter/Variable Rate Limiter/Saturation
 * '<S488>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Override/NewValue
 * '<S489>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Override/OldValue
 * '<S490>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelPres/First Order Low Pass
 * '<S491>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelPres/If Action Subsystem
 * '<S492>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelPres/If Action Subsystem1
 * '<S493>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelPres/If Action Subsystem2
 * '<S494>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelPres/Override
 * '<S495>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelPres/First Order Low Pass/First Order Low Pass
 * '<S496>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelPres/Override/NewValue
 * '<S497>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelPres/Override/OldValue
 * '<S498>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP/First Order Low Pass
 * '<S499>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP/If Action Subsystem
 * '<S500>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP/If Action Subsystem1
 * '<S501>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP/If Action Subsystem2
 * '<S502>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP/Override
 * '<S503>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP/First Order Low Pass/First Order Low Pass
 * '<S504>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP/Override/NewValue
 * '<S505>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP/Override/OldValue
 * '<S506>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAPTime/First Order Low Pass
 * '<S507>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAPTime/If Action Subsystem
 * '<S508>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAPTime/If Action Subsystem1
 * '<S509>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAPTime/If Action Subsystem2
 * '<S510>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAPTime/Override
 * '<S511>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAPTime/First Order Low Pass/First Order Low Pass
 * '<S512>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAPTime/Override/NewValue
 * '<S513>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAPTime/Override/OldValue
 * '<S514>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP_Crank_Synchronous/MID_TDC
 * '<S515>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP_Crank_Synchronous/Once at Startup
 * '<S516>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/OilPres/First Order Low Pass
 * '<S517>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/OilPres/If Action Subsystem
 * '<S518>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/OilPres/If Action Subsystem1
 * '<S519>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/OilPres/If Action Subsystem2
 * '<S520>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/OilPres/Override
 * '<S521>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/OilPres/First Order Low Pass/First Order Low Pass
 * '<S522>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/OilPres/Override/NewValue
 * '<S523>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/OilPres/Override/OldValue
 * '<S524>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SensVolts/First Order Low Pass
 * '<S525>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SensVolts/If Action Subsystem
 * '<S526>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SensVolts/If Action Subsystem1
 * '<S527>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SensVolts/If Action Subsystem2
 * '<S528>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SensVolts/Override
 * '<S529>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SensVolts/First Order Low Pass/First Order Low Pass
 * '<S530>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SensVolts/Override/NewValue
 * '<S531>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SensVolts/Override/OldValue
 * '<S532>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SysVolts/First Order Low Pass
 * '<S533>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SysVolts/If Action Subsystem
 * '<S534>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SysVolts/If Action Subsystem1
 * '<S535>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SysVolts/If Action Subsystem2
 * '<S536>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SysVolts/Override
 * '<S537>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SysVolts/First Order Low Pass/First Order Low Pass
 * '<S538>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SysVolts/Override/NewValue
 * '<S539>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SysVolts/Override/OldValue
 * '<S540>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda
 * '<S541>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors
 * '<S542>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/Linear Sensor Characterization
 * '<S543>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/Linear Sensor Characterization1
 * '<S544>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs
 * '<S545>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs1
 * '<S546>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs10
 * '<S547>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs11
 * '<S548>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs12
 * '<S549>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs13
 * '<S550>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs14
 * '<S551>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs15
 * '<S552>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs16
 * '<S553>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs17
 * '<S554>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs2
 * '<S555>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs3
 * '<S556>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs4
 * '<S557>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs5
 * '<S558>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs6
 * '<S559>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs7
 * '<S560>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs8
 * '<S561>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs9
 * '<S562>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/Linear Sensor Characterization/First Order Low Pass
 * '<S563>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/Linear Sensor Characterization/If Action Subsystem
 * '<S564>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/Linear Sensor Characterization/If Action Subsystem1
 * '<S565>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/Linear Sensor Characterization/If Action Subsystem2
 * '<S566>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/Linear Sensor Characterization/Override
 * '<S567>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/Linear Sensor Characterization/First Order Low Pass/First Order Low Pass
 * '<S568>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/Linear Sensor Characterization/Override/NewValue
 * '<S569>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/Linear Sensor Characterization/Override/OldValue
 * '<S570>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/Linear Sensor Characterization1/First Order Low Pass
 * '<S571>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/Linear Sensor Characterization1/If Action Subsystem
 * '<S572>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/Linear Sensor Characterization1/If Action Subsystem1
 * '<S573>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/Linear Sensor Characterization1/If Action Subsystem2
 * '<S574>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/Linear Sensor Characterization1/Override
 * '<S575>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/Linear Sensor Characterization1/First Order Low Pass/First Order Low Pass
 * '<S576>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/Linear Sensor Characterization1/Override/NewValue
 * '<S577>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/Linear Sensor Characterization1/Override/OldValue
 * '<S578>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs/NewValue
 * '<S579>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs/OldValue
 * '<S580>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs1/NewValue
 * '<S581>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs1/OldValue
 * '<S582>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs10/NewValue
 * '<S583>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs10/OldValue
 * '<S584>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs11/NewValue
 * '<S585>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs11/OldValue
 * '<S586>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs12/NewValue
 * '<S587>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs12/OldValue
 * '<S588>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs13/NewValue
 * '<S589>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs13/OldValue
 * '<S590>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs14/NewValue
 * '<S591>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs14/OldValue
 * '<S592>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs15/NewValue
 * '<S593>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs15/OldValue
 * '<S594>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs16/NewValue
 * '<S595>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs16/OldValue
 * '<S596>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs17/NewValue
 * '<S597>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs17/OldValue
 * '<S598>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs2/NewValue
 * '<S599>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs2/OldValue
 * '<S600>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs3/NewValue
 * '<S601>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs3/OldValue
 * '<S602>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs4/NewValue
 * '<S603>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs4/OldValue
 * '<S604>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs5/NewValue
 * '<S605>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs5/OldValue
 * '<S606>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs6/NewValue
 * '<S607>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs6/OldValue
 * '<S608>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs7/NewValue
 * '<S609>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs7/OldValue
 * '<S610>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs8/NewValue
 * '<S611>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs8/OldValue
 * '<S612>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs9/NewValue
 * '<S613>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/AEM X Lambda/motohawk_override_abs9/OldValue
 * '<S614>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT
 * '<S615>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP
 * '<S616>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP 1
 * '<S617>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT
 * '<S618>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /First Order Low Pass
 * '<S619>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /If Action Subsystem
 * '<S620>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /If Action Subsystem1
 * '<S621>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /If Action Subsystem2
 * '<S622>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /Override
 * '<S623>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /motohawk_table_1d1
 * '<S624>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /First Order Low Pass/First Order Low Pass
 * '<S625>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /Override/NewValue
 * '<S626>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /Override/OldValue
 * '<S627>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /First Order Low Pass
 * '<S628>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /If Action Subsystem
 * '<S629>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /If Action Subsystem1
 * '<S630>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /If Action Subsystem2
 * '<S631>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /Override
 * '<S632>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /motohawk_table_1d1
 * '<S633>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /First Order Low Pass/First Order Low Pass
 * '<S634>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /Override/NewValue
 * '<S635>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /Override/OldValue
 * '<S636>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP 1/First Order Low Pass
 * '<S637>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP 1/If Action Subsystem
 * '<S638>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP 1/If Action Subsystem1
 * '<S639>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP 1/If Action Subsystem2
 * '<S640>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP 1/Override
 * '<S641>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP 1/motohawk_table_1d1
 * '<S642>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP 1/First Order Low Pass/First Order Low Pass
 * '<S643>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP 1/Override/NewValue
 * '<S644>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP 1/Override/OldValue
 * '<S645>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /First Order Low Pass
 * '<S646>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /If Action Subsystem
 * '<S647>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /If Action Subsystem1
 * '<S648>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /If Action Subsystem2
 * '<S649>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /Override
 * '<S650>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /motohawk_table_1d1
 * '<S651>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /First Order Low Pass/First Order Low Pass
 * '<S652>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /Override/NewValue
 * '<S653>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /Override/OldValue
 * '<S654>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1
 * '<S655>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2
 * '<S656>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1
 * '<S657>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2
 * '<S658>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1/First Order Low Pass
 * '<S659>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1/If Action Subsystem
 * '<S660>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1/If Action Subsystem1
 * '<S661>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1/If Action Subsystem2
 * '<S662>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1/Override
 * '<S663>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1/Saturation
 * '<S664>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1/motohawk_table_1d1
 * '<S665>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1/First Order Low Pass/First Order Low Pass
 * '<S666>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1/Override/NewValue
 * '<S667>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1/Override/OldValue
 * '<S668>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2/First Order Low Pass
 * '<S669>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2/If Action Subsystem
 * '<S670>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2/If Action Subsystem1
 * '<S671>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2/If Action Subsystem2
 * '<S672>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2/Override
 * '<S673>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2/Saturation
 * '<S674>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2/motohawk_table_1d1
 * '<S675>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2/First Order Low Pass/First Order Low Pass
 * '<S676>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2/Override/NewValue
 * '<S677>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2/Override/OldValue
 * '<S678>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/First Order Low Pass
 * '<S679>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/If Action Subsystem
 * '<S680>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/If Action Subsystem1
 * '<S681>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/If Action Subsystem2
 * '<S682>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/Override
 * '<S683>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/Saturation
 * '<S684>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/motohawk_table_1d1
 * '<S685>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/First Order Low Pass/First Order Low Pass
 * '<S686>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/Override/NewValue
 * '<S687>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/Override/OldValue
 * '<S688>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/First Order Low Pass
 * '<S689>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/If Action Subsystem
 * '<S690>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/If Action Subsystem1
 * '<S691>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/If Action Subsystem2
 * '<S692>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/Override
 * '<S693>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/Saturation
 * '<S694>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/motohawk_table_1d1
 * '<S695>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/First Order Low Pass/First Order Low Pass
 * '<S696>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/Override/NewValue
 * '<S697>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/Override/OldValue
 * '<S698>' : BaseEngineController_LS/Foreground/Outputs/AC Control
 * '<S699>' : BaseEngineController_LS/Foreground/Outputs/Coil Control
 * '<S700>' : BaseEngineController_LS/Foreground/Outputs/FAN Control
 * '<S701>' : BaseEngineController_LS/Foreground/Outputs/FuelPump
 * '<S702>' : BaseEngineController_LS/Foreground/Outputs/HBridge
 * '<S703>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control
 * '<S704>' : BaseEngineController_LS/Foreground/Outputs/Injector Control
 * '<S705>' : BaseEngineController_LS/Foreground/Outputs/WASTEGATE-Control
 * '<S706>' : BaseEngineController_LS/Foreground/Outputs/AC Control/Discrete Actuator - AC
 * '<S707>' : BaseEngineController_LS/Foreground/Outputs/AC Control/Discrete Actuator - AC/Override in Engineering Units
 * '<S708>' : BaseEngineController_LS/Foreground/Outputs/AC Control/Discrete Actuator - AC/Override in Engineering Units/NewValue
 * '<S709>' : BaseEngineController_LS/Foreground/Outputs/AC Control/Discrete Actuator - AC/Override in Engineering Units/OldValue
 * '<S710>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/Coil Enable Manager
 * '<S711>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management
 * '<S712>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/motohawk_override_rel
 * '<S713>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/motohawk_override_rel1
 * '<S714>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/Coil Enable Manager/CompareTo
 * '<S715>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/Coil Enable Manager/EST Enable TDC Counter
 * '<S716>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/Coil Enable Manager/EST Enable TDC Counter/EST Enable TDC Counter Stateflow
 * '<S717>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/Coil Enable Manager/EST Enable TDC Counter/TDC_Counter
 * '<S718>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo
 * '<S719>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo1
 * '<S720>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo10
 * '<S721>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo11
 * '<S722>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo12
 * '<S723>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo13
 * '<S724>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo14
 * '<S725>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo15
 * '<S726>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo2
 * '<S727>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo3
 * '<S728>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo4
 * '<S729>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo5
 * '<S730>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo6
 * '<S731>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo7
 * '<S732>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo8
 * '<S733>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo9
 * '<S734>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/motohawk_override_rel/NewValue
 * '<S735>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/motohawk_override_rel/OldValue
 * '<S736>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/motohawk_override_rel1/NewValue
 * '<S737>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/motohawk_override_rel1/OldValue
 * '<S738>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/Discrete Actuator - FAN1
 * '<S739>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/Discrete Actuator - FAN2
 * '<S740>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/Discrete Actuator - FAN1/Override in Engineering Units
 * '<S741>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/Discrete Actuator - FAN1/Override in Engineering Units/NewValue
 * '<S742>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/Discrete Actuator - FAN1/Override in Engineering Units/OldValue
 * '<S743>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/Discrete Actuator - FAN2/Override in Engineering Units
 * '<S744>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/Discrete Actuator - FAN2/Override in Engineering Units/NewValue
 * '<S745>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/Discrete Actuator - FAN2/Override in Engineering Units/OldValue
 * '<S746>' : BaseEngineController_LS/Foreground/Outputs/FuelPump/Discrete Actuator - FUELP
 * '<S747>' : BaseEngineController_LS/Foreground/Outputs/FuelPump/Discrete Actuator - FUELP/Override in Engineering Units
 * '<S748>' : BaseEngineController_LS/Foreground/Outputs/FuelPump/Discrete Actuator - FUELP/Override in Engineering Units/NewValue
 * '<S749>' : BaseEngineController_LS/Foreground/Outputs/FuelPump/Discrete Actuator - FUELP/Override in Engineering Units/OldValue
 * '<S750>' : BaseEngineController_LS/Foreground/Outputs/HBridge/Time Since Enabled (With Input)1
 * '<S751>' : BaseEngineController_LS/Foreground/Outputs/HBridge/motohawk_override_abs2
 * '<S752>' : BaseEngineController_LS/Foreground/Outputs/HBridge/motohawk_override_abs2/NewValue
 * '<S753>' : BaseEngineController_LS/Foreground/Outputs/HBridge/motohawk_override_abs2/OldValue
 * '<S754>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control/IAC-P-CONTROL
 * '<S755>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control/IAC-S-CONTROL
 * '<S756>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control/IAC-P-CONTROL/Saturation
 * '<S757>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control/IAC-P-CONTROL/motohawk_override_abs2
 * '<S758>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control/IAC-P-CONTROL/motohawk_override_abs2/NewValue
 * '<S759>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control/IAC-P-CONTROL/motohawk_override_abs2/OldValue
 * '<S760>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control/IAC-S-CONTROL/Saturation
 * '<S761>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control/IAC-S-CONTROL/motohawk_override_abs2
 * '<S762>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control/IAC-S-CONTROL/motohawk_override_abs2/NewValue
 * '<S763>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control/IAC-S-CONTROL/motohawk_override_abs2/OldValue
 * '<S764>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/Injector Diagnostics
 * '<S765>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/Injector Enable Manager
 * '<S766>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs1
 * '<S767>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs2
 * '<S768>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs3
 * '<S769>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs4
 * '<S770>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs5
 * '<S771>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs6
 * '<S772>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/Injector Enable Manager/Stall
 * '<S773>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/Injector Enable Manager/Time Since Enabled (With Input)1
 * '<S774>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs1/NewValue
 * '<S775>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs1/OldValue
 * '<S776>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs2/NewValue
 * '<S777>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs2/OldValue
 * '<S778>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs3/NewValue
 * '<S779>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs3/OldValue
 * '<S780>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs4/NewValue
 * '<S781>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs4/OldValue
 * '<S782>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs5/NewValue
 * '<S783>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs5/OldValue
 * '<S784>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs6/NewValue
 * '<S785>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs6/OldValue
 * '<S786>' : BaseEngineController_LS/Foreground/Outputs/WASTEGATE-Control/PWM Characterization
 * '<S787>' : BaseEngineController_LS/Foreground/Outputs/WASTEGATE-Control/PWM Characterization/Saturation
 * '<S788>' : BaseEngineController_LS/Foreground/Outputs/WASTEGATE-Control/PWM Characterization/motohawk_override_abs2
 * '<S789>' : BaseEngineController_LS/Foreground/Outputs/WASTEGATE-Control/PWM Characterization/motohawk_override_abs2/NewValue
 * '<S790>' : BaseEngineController_LS/Foreground/Outputs/WASTEGATE-Control/PWM Characterization/motohawk_override_abs2/OldValue
 * '<S791>' : BaseEngineController_LS/Main Power Relay/Main Power Relay
 * '<S792>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Display Variable Event Boolean
 * '<S793>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Display Variable Event Function-Call
 * '<S794>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Display Variable Event Function-Call1
 * '<S795>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ECUP Latch
 * '<S796>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Forced Shutdown Process
 * '<S797>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/On Off Delay
 * '<S798>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes
 * '<S799>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/motohawk_restore_nvmem
 * '<S800>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/motohawk_store_nvmem
 * '<S801>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Display Variable Event Function-Call/Clear
 * '<S802>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Display Variable Event Function-Call1/Clear
 * '<S803>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Forced Shutdown Process/Post Shutdown two ticks before MPRD off
 * '<S804>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Forced Shutdown Process/Processor Reboot
 * '<S805>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Forced Shutdown Process/Save NV Vars one tick before MPRD off
 * '<S806>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Forced Shutdown Process/Shutdown power on ECU565//563
 * '<S807>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Forced Shutdown Process/Time Since Enabled (With Input)1
 * '<S808>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Forced Shutdown Process/Post Shutdown two ticks before MPRD off/Post Shutdown two ticks before MPRD off
 * '<S809>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Forced Shutdown Process/Save NV Vars one tick before MPRD off/Save NV Vars one tick before MPRD off
 * '<S810>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Forced Shutdown Process/Shutdown power on ECU565//563/Shutdown power on ECU565-128
 * '<S811>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/On Off Delay/S-R Flip-Flop
 * '<S812>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/Post Shutdown two ticks before MPRD off
 * '<S813>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/Processor Reboot
 * '<S814>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/Save NV Vars one tick before MPRD off
 * '<S815>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/Shutdown power on ECU565//563
 * '<S816>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/motohawk_override_abs
 * '<S817>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/Post Shutdown two ticks before MPRD off/Post Shutdown two ticks before MPRD off
 * '<S818>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/Save NV Vars one tick before MPRD off/Save NV Vars one tick before MPRD off
 * '<S819>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/Shutdown power on ECU565//563/Shutdown power on ECU565-128
 * '<S820>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/motohawk_override_abs/NewValue
 * '<S821>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/motohawk_override_abs/OldValue
 */
#endif                                 /* RTW_HEADER_BaseEngineController_LS_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
