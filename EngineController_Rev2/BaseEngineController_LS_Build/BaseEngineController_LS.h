/*
 * File: BaseEngineController_LS.h
 *
 * Code generated for Simulink model 'BaseEngineController_LS'.
 *
 * Model version                  : 1.2195
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Sun Nov 27 15:42:41 2022
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
  real_T s726_motohawk_interpolation_1d;/* '<S726>/motohawk_interpolation_1d' */
  real_T s705_Switch;                  /* '<S705>/Switch' */
  real_T s749_MinMax;                  /* '<S749>/MinMax' */
  real_T s749_MinMax1;                 /* '<S749>/MinMax1' */
  real_T s753_MinMax1;                 /* '<S753>/MinMax1' */
  real_T s724_Merge;                   /* '<S724>/Merge' */
  real_T s763_Merge;                   /* '<S763>/Merge' */
  real_T s714_motohawk_interpolation_1d;/* '<S714>/motohawk_interpolation_1d' */
  real_T s704_Switch;                  /* '<S704>/Switch' */
  real_T s732_MinMax;                  /* '<S732>/MinMax' */
  real_T s732_MinMax1;                 /* '<S732>/MinMax1' */
  real_T s736_MinMax1;                 /* '<S736>/MinMax1' */
  real_T s712_Merge;                   /* '<S712>/Merge' */
  real_T s746_Merge;                   /* '<S746>/Merge' */
  real_T s451_Switch1;                 /* '<S451>/Switch1' */
  real_T s481_Sum;                     /* '<S481>/Sum' */
  real_T s568_Sum1;                    /* '<S568>/Sum1' */
  real_T s581_Merge;                   /* '<S581>/Merge' */
  real_T s493_RPMInst;                 /* '<S493>/Data Type Conversion1' */
  real_T s517_DataTypeConversion;      /* '<S517>/Data Type Conversion' */
  real_T s567_Sum1;                    /* '<S567>/Sum1' */
  real_T s706_Switch;                  /* '<S706>/Switch' */
  real_T s766_MinMax;                  /* '<S766>/MinMax' */
  real_T s766_MinMax1;                 /* '<S766>/MinMax1' */
  real_T s770_MinMax1;                 /* '<S770>/MinMax1' */
  real_T s707_Switch;                  /* '<S707>/Switch' */
  real_T s783_MinMax;                  /* '<S783>/MinMax' */
  real_T s783_MinMax1;                 /* '<S783>/MinMax1' */
  real_T s787_MinMax1;                 /* '<S787>/MinMax1' */
  real_T s780_Merge;                   /* '<S780>/Merge' */
  real_T s797_Merge;                   /* '<S797>/Merge' */
  real_T s458_Switch2;                 /* '<S458>/Switch2' */
  real_T s569_Sum1;                    /* '<S569>/Sum1' */
  real_T s589_Merge;                   /* '<S589>/Merge' */
  real_T s498_Lambda;                  /* '<S498>/Read CAN Message' */
  real_T s498_OxygenConcentratio;      /* '<S498>/Read CAN Message' */
  real_T s498_SystemVolts;             /* '<S498>/Read CAN Message' */
  real_T s498_HeaterVolts;             /* '<S498>/Read CAN Message' */
  real_T s498_ReadCANMessage_o6;       /* '<S498>/Read CAN Message' */
  real_T s498_ReadCANMessage_o7;       /* '<S498>/Read CAN Message' */
  real_T s498_ReadCANMessage_o8;       /* '<S498>/Read CAN Message' */
  real_T s498_ReadCANMessage_o9;       /* '<S498>/Read CAN Message' */
  real_T s498_ReadCANMessage_o10;      /* '<S498>/Read CAN Message' */
  real_T s498_Lambda_c;                /* '<S498>/Read CAN Message1' */
  real_T s498_OxygenConcentratio_d;    /* '<S498>/Read CAN Message1' */
  real_T s498_SystemVolts_k;           /* '<S498>/Read CAN Message1' */
  real_T s498_HeaterVolts_d;           /* '<S498>/Read CAN Message1' */
  real_T s498_ReadCANMessage1_o6;      /* '<S498>/Read CAN Message1' */
  real_T s498_ReadCANMessage1_o7;      /* '<S498>/Read CAN Message1' */
  real_T s498_ReadCANMessage1_o8;      /* '<S498>/Read CAN Message1' */
  real_T s498_ReadCANMessage1_o9;      /* '<S498>/Read CAN Message1' */
  real_T s498_ReadCANMessage1_o10;     /* '<S498>/Read CAN Message1' */
  real_T s497_GPS_Speed;               /* '<S497>/Read CAN Message2' */
  real_T s497_GPS_Altitude;            /* '<S497>/Read CAN Message2' */
  real_T s497_GPS_Course;              /* '<S497>/Read CAN Message2' */
  real_T s497_ReadCANMessage2_o5;      /* '<S497>/Read CAN Message2' */
  real_T s497_ReadCANMessage_o3;       /* '<S497>/Read CAN Message' */
  real_T s497_ReadCANMessage_o4;       /* '<S497>/Read CAN Message' */
  real_T s497_ReadCANMessage_o5;       /* '<S497>/Read CAN Message' */
  real_T s497_ReadCANMessage_o6;       /* '<S497>/Read CAN Message' */
  real_T s497_ReadCANMessage_o7;       /* '<S497>/Read CAN Message' */
  real_T s497_ReadCANMessage_o8;       /* '<S497>/Read CAN Message' */
  real_T s492_Gain1;                   /* '<S492>/Gain1' */
  real_T s552_motohawk_interpolation_1d;/* '<S552>/motohawk_interpolation_1d' */
  real_T s551_Merge;                   /* '<S551>/Merge' */
  real_T s523_Switch;                  /* '<S523>/Switch' */
  real_T s462_Switch2;                 /* '<S462>/Switch2' */
  real_T s498_MathFunction;            /* '<S498>/Math Function' */
  real_T s499_Sum1;                    /* '<S499>/Sum1' */
  real_T s498_MathFunction1;           /* '<S498>/Math Function1' */
  real_T s500_Sum1;                    /* '<S500>/Sum1' */
  real_T s505_Merge;                   /* '<S505>/Merge' */
  real_T s513_Merge;                   /* '<S513>/Merge' */
  real_T s498_MultiportSwitch;         /* '<S498>/Multiport Switch' */
  real_T s456_Sum1;                    /* '<S456>/Sum1' */
  real_T s456_Sum3;                    /* '<S456>/Sum3' */
  real_T s483_Switch;                  /* '<S483>/Switch' */
  real_T s576_Sum1;                    /* '<S576>/Sum1' */
  real_T s644_Merge;                   /* '<S644>/Merge' */
  real_T s573_Merge;                   /* '<S573>/Merge' */
  real_T s571_Sum1;                    /* '<S571>/Sum1' */
  real_T s610_Merge;                   /* '<S610>/Merge' */
  real_T s401_motohawk_delta_time;     /* '<S401>/motohawk_delta_time' */
  real_T s572_Sum1;                    /* '<S572>/Sum1' */
  real_T s411_Sum;                     /* '<S411>/Sum' */
  real_T s410_motohawk_interpolation_2d2;/* '<S410>/motohawk_interpolation_2d2' */
  real_T s410_Sum;                     /* '<S410>/Sum' */
  real_T s410_NominalAirFlowRate;      /* '<S410>/Nominal Air Flow Rate' */
  real_T s410_ModelAirMassFlowRate;    /* '<S410>/Model Air Mass Flow Rate' */
  real_T s492_Gain;                    /* '<S492>/Gain' */
  real_T s538_motohawk_interpolation_1d;/* '<S538>/motohawk_interpolation_1d' */
  real_T s537_Merge;                   /* '<S537>/Merge' */
  real_T s410_MultiportSwitch;         /* '<S410>/Multiport Switch' */
  real_T s429_Merge;                   /* '<S429>/Merge' */
  real_T s432_Sum1;                    /* '<S432>/Sum1' */
  real_T s430_Merge;                   /* '<S430>/Merge' */
  real_T s435_Sum1;                    /* '<S435>/Sum1' */
  real_T s473_Sum1;                    /* '<S473>/Sum1' */
  real_T s518_DataTypeConversion;      /* '<S518>/Data Type Conversion' */
  real_T s521_DataTypeConversion;      /* '<S521>/Data Type Conversion' */
  real_T s618_Merge;                   /* '<S618>/Merge' */
  real_T s402_motohawk_data_read;      /* '<S402>/motohawk_data_read' */
  real_T s423_Sum1;                    /* '<S423>/Sum1' */
  real_T s829_Sum1;                    /* '<S829>/Sum1' */
  real_T s826_Switch;                  /* '<S826>/Switch' */
  real_T s833_Merge;                   /* '<S833>/Merge' */
  real_T s833_Switch;                  /* '<S833>/Switch' */
  real_T s834_Merge;                   /* '<S834>/Merge' */
  real_T s834_Switch;                  /* '<S834>/Switch' */
  real_T s455_MultiportSwitch;         /* '<S455>/Multiport Switch' */
  real_T s92_SparkAdv;                 /* '<S92>/Merge4' */
  real_T s570_Sum1;                    /* '<S570>/Sum1' */
  real_T s602_Merge;                   /* '<S602>/Merge' */
  real_T s574_Sum1;                    /* '<S574>/Sum1' */
  real_T s628_Merge;                   /* '<S628>/Merge' */
  real_T s92_FAN1;                     /* '<S92>/Merge12' */
  real_T s92_FAN2;                     /* '<S92>/Merge13' */
  real_T s92_SparkEnergy;              /* '<S92>/Merge5' */
  real_T s889_MinMax1;                 /* '<S889>/MinMax1' */
  real_T s893_MinMax1;                 /* '<S893>/MinMax1' */
  real_T s485_Switch;                  /* '<S485>/Switch' */
  real_T s92_Throttle;                 /* '<S92>/Merge8' */
  real_T s806_ETC;                     /* '<S806>/Saturation' */
  real_T s92_IACP;                     /* '<S92>/Merge3' */
  real_T s907_MinMax1;                 /* '<S907>/MinMax1' */
  real_T s92_IACS;                     /* '<S92>/Merge9' */
  real_T s911_MinMax1;                 /* '<S911>/MinMax1' */
  real_T s92_SOI;                      /* '<S92>/Merge1' */
  real_T s92_FPC[8];                   /* '<S92>/Merge2' */
  real_T s64_constreftoatm;            /* '<S64>/const ref to atm' */
  real_T s21_Sum2;                     /* '<S21>/Sum2' */
  real_T s21_Sum1;                     /* '<S21>/Sum1' */
  real_T s21_MinMax[8];                /* '<S21>/MinMax' */
  real_T s92_MakeUpEOI;                /* '<S92>/Merge10' */
  real_T s92_WASTEGATE;                /* '<S92>/Merge11' */
  real_T s938_MinMax1;                 /* '<S938>/MinMax1' */
  real_T s21_Gain[8];                  /* '<S21>/Gain' */
  real_T s454_Sum3;                    /* '<S454>/Sum3' */
  real_T s497_GPS_Latitude;            /* '<S497>/Read CAN Message1' */
  real_T s497_GPS_Longitude;           /* '<S497>/Read CAN Message1' */
  real_T s575_Sum1;                    /* '<S575>/Sum1' */
  real_T s636_Merge;                   /* '<S636>/Merge' */
  real_T s861_Sum;                     /* '<S861>/Sum' */
  real_T s862_Sum;                     /* '<S862>/Sum' */
  real_T s864_CrankCounter;            /* '<S864>/CrankCounter' */
  real_T s656_motohawk_interpolation_1d;/* '<S656>/motohawk_interpolation_1d' */
  real_T s650_Merge;                   /* '<S650>/Merge' */
  real_T s655_Merge;                   /* '<S655>/Merge' */
  real_T s678_motohawk_interpolation_1d;/* '<S678>/motohawk_interpolation_1d' */
  real_T s661_Merge;                   /* '<S661>/Merge' */
  real_T s677_Merge;                   /* '<S677>/Merge' */
  real_T s696_motohawk_interpolation_1d;/* '<S696>/motohawk_interpolation_1d' */
  real_T s663_Merge;                   /* '<S663>/Merge' */
  real_T s695_Merge;                   /* '<S695>/Merge' */
  real_T s687_motohawk_interpolation_1d;/* '<S687>/motohawk_interpolation_1d' */
  real_T s686_Merge;                   /* '<S686>/Merge' */
  real_T s669_motohawk_interpolation_1d;/* '<S669>/motohawk_interpolation_1d' */
  real_T s668_Merge;                   /* '<S668>/Merge' */
  real_T s302_Defaultifnoflow[8];      /* '<S302>/Default (if no flow)' */
  real_T s320_Sum1[8];                 /* '<S320>/Sum1' */
  real_T s319_chargemass[8];           /* '<S319>/charge mass' */
  real_T s448_Merge;                   /* '<S448>/Merge' */
  real_T s466_Sum2;                    /* '<S466>/Sum2' */
  real_T s407_Timer;                   /* '<S401>/Baro Stall State Delay' */
  real_T s294_UnitDelay;               /* '<S294>/Unit Delay' */
  real_T s287_Switch;                  /* '<S287>/Switch' */
  real_T s295_etc;                     /* '<S287>/Ice Break' */
  real_T s106_MultiportSwitch;         /* '<S106>/Multiport Switch' */
  real_T s281_Add;                     /* '<S281>/Add' */
  real_T s278_Product;                 /* '<S278>/Product' */
  real_T s277_Product;                 /* '<S277>/Product' */
  real_T s116_ApplyOffsetstoBaseSparkAdvance1;/* '<S116>/Apply Offsets to Base Spark Advance1' */
  real_T s284_MinMax1;                 /* '<S284>/MinMax1' */
  real_T s279_Switch;                  /* '<S279>/Switch' */
  real_T s116_motohawk_interpolation_2d1;/* '<S116>/motohawk_interpolation_2d1' */
  real_T s113_Sum;                     /* '<S113>/Sum' */
  real_T s192_DontallowsetpointtoevergoabovetheTargetRPM;/* '<S192>/Don't allow setpoint to ever go above the TargetRPM' */
  real_T s201_Sum2;                    /* '<S201>/Sum2' */
  real_T s201_Product2;                /* '<S201>/Product2' */
  real_T s202_Product;                 /* '<S202>/Product' */
  real_T s203_Switch1;                 /* '<S203>/Switch1' */
  real_T s194_Switch;                  /* '<S194>/Switch' */
  real_T s190_Sum;                     /* '<S190>/Sum' */
  real_T s110_Switch4;                 /* '<S110>/Switch4' */
  real_T s110_Switch5;                 /* '<S110>/Switch5' */
  real_T s147_Switch1;                 /* '<S147>/Switch1' */
  real_T s108_MinMax2;                 /* '<S108>/MinMax2' */
  real_T s145_Sum2;                    /* '<S145>/Sum2' */
  real_T s145_Product2;                /* '<S145>/Product2' */
  real_T s146_Product;                 /* '<S146>/Product' */
  real_T s136_Switch;                  /* '<S136>/Switch' */
  real_T s108_Sum3;                    /* '<S108>/Sum3' */
  real_T s108_Switch;                  /* '<S108>/Switch' */
  real_T s223_MinMax1;                 /* '<S223>/MinMax1' */
  real_T s213_DontallowsetpointtoeverdropbelowtheTargetRPM;/* '<S213>/Don't allow setpoint to ever drop below the TargetRPM' */
  real_T s239_Sum2;                    /* '<S239>/Sum2' */
  real_T s239_Product2;                /* '<S239>/Product2' */
  real_T s240_Product;                 /* '<S240>/Product' */
  real_T s241_Switch1;                 /* '<S241>/Switch1' */
  real_T s114_MinGovAirPID;            /* '<S114>/Product1' */
  real_T s234_Sum1;                    /* '<S234>/Sum1' */
  real_T s234_Product;                 /* '<S234>/Product' */
  real_T s235_Product;                 /* '<S235>/Product' */
  real_T s114_IdleSpk;                 /* '<S114>/Product' */
  real_T s231_Switch;                  /* '<S231>/Switch' */
  real_T s216_DontallowsetpointtoeverdropbelowtheTargetRPM;/* '<S216>/Don't allow setpoint to ever drop below the TargetRPM' */
  real_T s109_EquivRatioInfo[5];       /* '<S109>/EquivRatioInfo' */
  real_T s151_Product1;                /* '<S151>/Product1' */
  real_T s151_SpkOut;                  /* '<S151>/Product2' */
  real_T s249_O2FuelMult[8];           /* '<S249>/Switch' */
  real_T s248_Switch;                  /* '<S248>/Switch' */
  real_T s268_Sum2;                    /* '<S268>/Sum2' */
  real_T s268_Product2;                /* '<S268>/Product2' */
  real_T s270_Switch1;                 /* '<S270>/Switch1' */
  real_T s269_Product;                 /* '<S269>/Product' */
  real_T s266_Switch3;                 /* '<S266>/Switch3' */
  real_T s266_Switch1;                 /* '<S266>/Switch1' */
  real_T s266_Switch4;                 /* '<S266>/Switch4' */
  real_T s247_Switch;                  /* '<S247>/Switch' */
  real_T s256_Sum2;                    /* '<S256>/Sum2' */
  real_T s256_Product2;                /* '<S256>/Product2' */
  real_T s258_Switch1;                 /* '<S258>/Switch1' */
  real_T s257_Product;                 /* '<S257>/Product' */
  real_T s254_Switch3;                 /* '<S254>/Switch3' */
  real_T s254_Switch1;                 /* '<S254>/Switch1' */
  real_T s254_Switch4;                 /* '<S254>/Switch4' */
  real_T s168_motohawk_interpolation_1d;/* '<S168>/motohawk_interpolation_1d' */
  real_T s166_FuelFlowMassAirflowEquivalenceRatioAirtofuelRatio;/* '<S166>/Fuel Flow = Mass Airflow * Equivalence Ratio // Air-to-fuel Ratio' */
  real_T s163_PerCylinderMassFlowRate; /* '<S163>/Per-Cylinder Mass Flow Rate' */
  real_T s163_ApplyMultipliersforO2KnockControlandEnrichment1[8];/* '<S163>/Apply Multipliers for O2, Knock Control, and Enrichment1' */
  real_T s188_MinMax1;                 /* '<S188>/MinMax1' */
  real_T s189_MinMax1;                 /* '<S189>/MinMax1' */
  real_T s179_chargemass[8];           /* '<S179>/charge mass' */
  real_T s178_Sum1;                    /* '<S178>/Sum1' */
  real_T s169_Sum1;                    /* '<S169>/Sum1' */
  real_T s177_Sum1;                    /* '<S177>/Sum1' */
  real_T s169_Sum;                     /* '<S169>/Sum' */
  real_T s169_Product1;                /* '<S169>/Product1' */
  real_T s176_motohawk_interpolation_1d;/* '<S176>/motohawk_interpolation_1d' */
  real_T s173_motohawk_interpolation_1d;/* '<S173>/motohawk_interpolation_1d' */
  real_T s107_WarmUpRatio;             /* '<S107>/motohawk_interpolation_2d1' */
  real_T s131_Switch;                  /* '<S131>/Switch' */
  real_T s107_IATEnrichment;           /* '<S107>/motohawk_interpolation_2d5' */
  real_T s107_CATEnrichment;           /* '<S107>/motohawk_interpolation_2d6' */
  real_T s107_DesEquivRatio;           /* '<S107>/MinMax' */
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
  real_T s959_Switch;                  /* '<S959>/Switch' */
  uint32_T s494_motohawk_frequency_in; /* '<S494>/motohawk_frequency_in' */
  uint32_T s498_ReadCANMessage_o1;     /* '<S498>/Read CAN Message' */
  uint32_T s498_ReadCANMessage1_o1;    /* '<S498>/Read CAN Message1' */
  uint32_T s497_ReadCANMessage2_o1;    /* '<S497>/Read CAN Message2' */
  uint32_T s497_ReadCANMessage_o1;     /* '<S497>/Read CAN Message' */
  uint32_T s497_ReadCANMessage1_o1;    /* '<S497>/Read CAN Message1' */
  uint32_T s566_Sum;                   /* '<S566>/Sum' */
  uint32_T s354_Sum1;                  /* '<S354>/Sum1' */
  uint32_T s355_motohawk_abs_time;     /* '<S355>/motohawk_abs_time' */
  uint32_T s9_ReadCANRaw_o2;           /* '<S9>/Read CAN Raw' */
  uint32_T s9_ReadCANRaw_o4;           /* '<S9>/Read CAN Raw' */
  uint32_T s10_motohawk_calibration;   /* '<S10>/motohawk_calibration' */
  int16_T s806_motohawk_pwm1;          /* '<S806>/motohawk_pwm1' */
  int16_T s347_Merge;                  /* '<S347>/Merge' */
  uint16_T s496_motohawk_ain2;         /* '<S496>/motohawk_ain2' */
  uint16_T s496_motohawk_ain1;         /* '<S496>/motohawk_ain1' */
  uint16_T s494_motohawk_ain4;         /* '<S494>/motohawk_ain4' */
  uint16_T s494_motohawk_ain14;        /* '<S494>/motohawk_ain14' */
  uint16_T s494_motohawk_ain_read1;    /* '<S494>/motohawk_ain_read1' */
  uint16_T s494_motohawk_ain2;         /* '<S494>/motohawk_ain2' */
  uint16_T s494_motohawk_ain1;         /* '<S494>/motohawk_ain1' */
  uint16_T s494_motohawk_ain3;         /* '<S494>/motohawk_ain3' */
  uint16_T s802_SparkSequence_o3[8];   /* '<S802>/Spark Sequence' */
  uint16_T s802_SparkSequence_o4[8];   /* '<S802>/Spark Sequence' */
  uint16_T s648_motohawk_ain;          /* '<S648>/motohawk_ain' */
  uint16_T s649_motohawk_ain;          /* '<S649>/motohawk_ain' */
  uint16_T s649_motohawk_ain1;         /* '<S649>/motohawk_ain1' */
  uint16_T s649_motohawk_ain2;         /* '<S649>/motohawk_ain2' */
  uint16_T s649_motohawk_ain3;         /* '<S649>/motohawk_ain3' */
  uint16_T s10_motohawk_calibration3;  /* '<S10>/motohawk_calibration3' */
  index_T s439_motohawk_prelookup;     /* '<S439>/motohawk_prelookup' */
  index_T s440_motohawk_prelookup;     /* '<S440>/motohawk_prelookup' */
  index_T s437_motohawk_prelookup;     /* '<S437>/motohawk_prelookup' */
  index_T s443_motohawk_prelookup1;    /* '<S443>/motohawk_prelookup1' */
  index_T s443_Indexes;                /* '<S443>/motohawk_prelookup5' */
  index_T s439_motohawk_prelookup2;    /* '<S439>/motohawk_prelookup2' */
  index_T s440_motohawk_prelookup1;    /* '<S440>/motohawk_prelookup1' */
  index_T s444_motohawk_prelookup;     /* '<S444>/motohawk_prelookup' */
  index_T s437_motohawk_prelookup1;    /* '<S437>/motohawk_prelookup1' */
  index_T s441_motohawk_prelookup1;    /* '<S441>/motohawk_prelookup1' */
  index_T s441_Indexes;                /* '<S441>/motohawk_prelookup5' */
  index_T s446_motohawk_prelookup;     /* '<S446>/motohawk_prelookup' */
  index_T s446_motohawk_prelookup2;    /* '<S446>/motohawk_prelookup2' */
  index_T s438_motohawk_prelookup;     /* '<S438>/motohawk_prelookup' */
  index_T s442_motohawk_prelookup;     /* '<S442>/motohawk_prelookup' */
  index_T s406_RPMAccel17Idx;          /* '<S406>/motohawk_prelookup' */
  int8_T s22_Merge1[32];               /* '<S22>/Merge1' */
  int8_T s864_DataTypeConversion;      /* '<S864>/Data Type Conversion' */
  int8_T s191_DataTypeConversion;      /* '<S191>/Data Type Conversion' */
  int8_T s191_DataTypeConversion1;     /* '<S191>/Data Type Conversion1' */
  int8_T s72_MultiportSwitch[8];       /* '<S72>/Multiport Switch' */
  int8_T s82_CutArray[8];              /* '<S82>/CutArray' */
  int8_T s27_DC_Override;              /* '<S20>/ETC Test  Manager' */
  int8_T s27_SetpointMode;             /* '<S20>/ETC Test  Manager' */
  uint8_T s453_UnitDelay;              /* '<S453>/Unit Delay' */
  uint8_T s401_motohawk_data_read1;    /* '<S401>/motohawk_data_read1' */
  uint8_T s808_InjectorSequence_o1[8]; /* '<S808>/Injector Sequence' */
  uint8_T s22_DataTypeConversion5;     /* '<S22>/Data Type Conversion5' */
  uint8_T s497_GPS_SatelliteCount;     /* '<S497>/Data Type Conversion8' */
  uint8_T s497_GPS_SecondsUTC;         /* '<S497>/Data Type Conversion5' */
  uint8_T s497_GPS_MinutesUTC;         /* '<S497>/Data Type Conversion4' */
  uint8_T s497_GPS_HoursUTC;           /* '<S497>/Data Type Conversion3' */
  uint8_T s497_GPS_DayUTC;             /* '<S497>/Data Type Conversion2' */
  uint8_T s497_GPS_MonthUTC;           /* '<S497>/Data Type Conversion1' */
  uint8_T s497_GPS_YearUTC;            /* '<S497>/Data Type Conversion' */
  uint8_T s498_SensorStatus;           /* '<S498>/Data Type Conversion9' */
  uint8_T s498_SensorStatus_e;         /* '<S498>/Data Type Conversion3' */
  uint8_T s453_motohawk_data_read;     /* '<S453>/motohawk_data_read' */
  uint8_T s493_motohawk_encoder_fault; /* '<S493>/motohawk_encoder_fault' */
  uint8_T s493_motohawk_encoder_state; /* '<S493>/motohawk_encoder_state' */
  uint8_T s866_Switch1;                /* '<S866>/Switch1' */
  uint8_T s476_Switch;                 /* '<S476>/Switch' */
  uint8_T s474_State;                  /* '<S453>/Engine State Machine' */
  uint8_T s108_motohawk_interpolation_2d;/* '<S108>/motohawk_interpolation_2d' */
  uint8_T s225_IdleState;              /* '<S210>/IdleStateMachine' */
  uint8_T s72_UnitDelay1;              /* '<S72>/Unit Delay1' */
  uint8_T s82_Switch;                  /* '<S82>/Switch' */
  uint8_T s9_ReadCANRaw_o5;            /* '<S9>/Read CAN Raw' */
  uint8_T s9_ReadCANRaw_o6[8];         /* '<S9>/Read CAN Raw' */
  boolean_T s453_Stall;                /* '<S453>/Relational Operator1' */
  boolean_T s453_Crank;                /* '<S453>/Relational Operator4' */
  boolean_T s453_Run;                  /* '<S453>/Logical Operator1' */
  boolean_T s524_Merge;                /* '<S524>/Merge' */
  boolean_T s498_DataValidState;       /* '<S498>/Data Type Conversion2' */
  boolean_T s498_DataValidState_f;     /* '<S498>/Data Type Conversion6' */
  boolean_T s497_GPS_Valid;            /* '<S497>/Read CAN Message' */
  boolean_T s523_LogicalOperator;      /* '<S523>/Logical Operator' */
  boolean_T s523_LogicalOperator3;     /* '<S523>/Logical Operator3' */
  boolean_T s429_RelationalOperator4;  /* '<S429>/Relational Operator4' */
  boolean_T s430_RelationalOperator4;  /* '<S430>/Relational Operator4' */
  boolean_T s428_LogicalOperator;      /* '<S428>/Logical Operator' */
  boolean_T s527_Merge;                /* '<S527>/Merge' */
  boolean_T s543_Merge;                /* '<S543>/Merge' */
  boolean_T s92_AC;                    /* '<S92>/Merge14' */
  boolean_T s810_LogicalOperator;      /* '<S810>/Logical Operator' */
  boolean_T s427_LogicalOperator;      /* '<S427>/Logical Operator' */
  boolean_T s92_FUELP;                 /* '<S92>/Merge7' */
  boolean_T s22_LogicalOperator2[8];   /* '<S22>/Logical Operator2' */
  boolean_T s492_motohawk_din;         /* '<S492>/motohawk_din' */
  boolean_T s530_Merge;                /* '<S530>/Merge' */
  boolean_T s897_LogicalOperator;      /* '<S897>/Logical Operator' */
  boolean_T s806_RelationalOperator4;  /* '<S806>/Relational Operator4' */
  boolean_T s921_Merge[8];             /* '<S921>/Merge' */
  boolean_T s498_SensorFaultState;     /* '<S498>/Data Type Conversion5' */
  boolean_T s498_UsingFreeAreCalState; /* '<S498>/Data Type Conversion7' */
  boolean_T s498_SensorDetectedStatus; /* '<S498>/Data Type Conversion8' */
  boolean_T s498_SensorFaultState_m;   /* '<S498>/Data Type Conversion4' */
  boolean_T s498_UsingFreeAreCalState_o;/* '<S498>/Data Type Conversion1' */
  boolean_T s498_SensorDetectedStatus_m;/* '<S498>/Data Type Conversion' */
  boolean_T s410_LogicalOperator;      /* '<S410>/Logical Operator' */
  boolean_T s802_LogicalOperator1[8];  /* '<S802>/Logical Operator1' */
  boolean_T s864_RelationalOperator1;  /* '<S864>/Relational Operator1' */
  boolean_T s730_LogicalOperator;      /* '<S730>/Logical Operator' */
  boolean_T s718_LogicalOperator;      /* '<S718>/Logical Operator' */
  boolean_T s348_RelationalOperator;   /* '<S348>/Relational Operator' */
  boolean_T s349_RelationalOperator;   /* '<S349>/Relational Operator' */
  boolean_T s448_RelationalOperator3;  /* '<S448>/Relational Operator3' */
  boolean_T s407_Enable;               /* '<S401>/Baro Stall State Delay' */
  boolean_T s191_MultiportSwitch;      /* '<S191>/Multiport Switch' */
  boolean_T s135_LogicalOperator1;     /* '<S135>/Logical Operator1' */
  boolean_T s128_Switch1;              /* '<S128>/Switch1' */
  boolean_T s127_Switch1;              /* '<S127>/Switch1' */
  boolean_T s105_LogicalOperator2;     /* '<S105>/Logical Operator2' */
  boolean_T s105_LogicalOperator4;     /* '<S105>/Logical Operator4' */
  boolean_T s124_Switch1;              /* '<S124>/Switch1' */
  boolean_T s105_LogicalOperator1;     /* '<S105>/Logical Operator1' */
  boolean_T s105_LogicalOperator;      /* '<S105>/Logical Operator' */
  boolean_T s224_RelationalOperator;   /* '<S224>/Relational Operator' */
  boolean_T s210_RelationalOperator;   /* '<S210>/Relational Operator' */
  boolean_T s210_RelationalOperator3;  /* '<S210>/Relational Operator3' */
  boolean_T s210_RelationalOperator1;  /* '<S210>/Relational Operator1' */
  boolean_T s210_LogicalOperator;      /* '<S210>/Logical Operator' */
  boolean_T s210_RelationalOperator5;  /* '<S210>/Relational Operator5' */
  boolean_T s226_RelOp;                /* '<S226>/RelOp' */
  boolean_T s114_HitCrossing1;         /* '<S114>/Hit  Crossing1' */
  boolean_T s114_LogicalOperator;      /* '<S114>/Logical Operator' */
  boolean_T s211_RelationalOperator1;  /* '<S211>/Relational Operator1' */
  boolean_T s207_LogicalOperator1;     /* '<S207>/Logical Operator1' */
  boolean_T s151_LogicalOperator;      /* '<S151>/Logical Operator' */
  boolean_T s153_Switch1;              /* '<S153>/Switch1' */
  boolean_T s250_LogicalOperator3;     /* '<S250>/Logical Operator3' */
  boolean_T s245_LogicalOperator;      /* '<S245>/Logical Operator' */
  boolean_T s245_LogicalOperator3;     /* '<S245>/Logical Operator3' */
  boolean_T s245_RelationalOperator5;  /* '<S245>/Relational Operator5' */
  boolean_T s245_LogicalOperator2;     /* '<S245>/Logical Operator2' */
  boolean_T s165_LogicalOperator2;     /* '<S165>/Logical Operator2' */
  boolean_T s186_LogicalOperator;      /* '<S186>/Logical Operator' */
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
  boolean_T s942_RelationalOperator;   /* '<S942>/Relational Operator' */
  boolean_T s942_LogicalOperator2;     /* '<S942>/Logical Operator2' */
  boolean_T s946_MPRDState;            /* '<S942>/ECUP Latch' */
  boolean_T s9_ReadCANRaw_o1;          /* '<S9>/Read CAN Raw' */
  boolean_T s9_ReadCANRaw_o3;          /* '<S9>/Read CAN Raw' */
  rtB_SafeDivide_BaseEngineController_LS s349_SafeDivide;/* '<S349>/SafeDivide' */
  rtB_GetInstRPM_BaseEngineController_LS s349_GetInstRPM;/* '<S349>/GetInstRPM' */
  rtB_SafeDivide_BaseEngineController_LS s348_SafeDivide;/* '<S348>/SafeDivide' */
  rtB_GetInstRPM_BaseEngineController_LS s348_GetInstRPM;/* '<S348>/GetInstRPM' */
  rtB_CollectAverage_BaseEngineController_LS s450_CollectAverage;/* '<S450>/Collect Average' */
  rtB_CollectAverage_BaseEngineController_LS s449_CollectAverage;/* '<S449>/Collect Average' */
  rtB_CollectAverage_BaseEngineController_LS s408_CollectAverage;/* '<S408>/Collect Average' */
} BlockIO_BaseEngineController_LS;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T s702_UnitDelay_DSTATE;        /* '<S702>/Unit Delay' */
  real_T s727_UnitDelay_DSTATE;        /* '<S727>/Unit Delay' */
  real_T s759_UnitDelay_DSTATE;        /* '<S759>/Unit Delay' */
  real_T s752_UnitDelay1_DSTATE;       /* '<S752>/Unit Delay1' */
  real_T s700_UnitDelay_DSTATE;        /* '<S700>/Unit Delay' */
  real_T s715_UnitDelay_DSTATE;        /* '<S715>/Unit Delay' */
  real_T s742_UnitDelay_DSTATE;        /* '<S742>/Unit Delay' */
  real_T s735_UnitDelay1_DSTATE;       /* '<S735>/Unit Delay1' */
  real_T s568_UnitDelay1_DSTATE;       /* '<S568>/Unit Delay1' */
  real_T s582_UnitDelay_DSTATE;        /* '<S582>/Unit Delay' */
  real_T s567_UnitDelay_DSTATE;        /* '<S567>/Unit Delay' */
  real_T s776_UnitDelay_DSTATE;        /* '<S776>/Unit Delay' */
  real_T s769_UnitDelay1_DSTATE;       /* '<S769>/Unit Delay1' */
  real_T s793_UnitDelay_DSTATE;        /* '<S793>/Unit Delay' */
  real_T s786_UnitDelay1_DSTATE;       /* '<S786>/Unit Delay1' */
  real_T s594_UnitDelay_DSTATE;        /* '<S594>/Unit Delay' */
  real_T s569_UnitDelay1_DSTATE;       /* '<S569>/Unit Delay1' */
  real_T s593_UnitDelay_DSTATE;        /* '<S593>/Unit Delay' */
  real_T s591_UnitDelay_DSTATE;        /* '<S591>/Unit Delay' */
  real_T s591_UnitDelay1_DSTATE;       /* '<S591>/Unit Delay1' */
  real_T s591_UnitDelay2_DSTATE;       /* '<S591>/Unit Delay2' */
  real_T s523_UnitDelay_DSTATE;        /* '<S523>/Unit Delay' */
  real_T s556_UnitDelay_DSTATE;        /* '<S556>/Unit Delay' */
  real_T s522_UnitDelay_DSTATE;        /* '<S522>/Unit Delay' */
  real_T s553_UnitDelay_DSTATE;        /* '<S553>/Unit Delay' */
  real_T s523_UnitDelay1_DSTATE;       /* '<S523>/Unit Delay1' */
  real_T s523_UnitDelay3_DSTATE;       /* '<S523>/Unit Delay3' */
  real_T s456_UnitDelay_DSTATE;        /* '<S456>/Unit Delay' */
  real_T s499_UnitDelay1_DSTATE;       /* '<S499>/Unit Delay1' */
  real_T s506_UnitDelay_DSTATE;        /* '<S506>/Unit Delay' */
  real_T s500_UnitDelay1_DSTATE;       /* '<S500>/Unit Delay1' */
  real_T s514_UnitDelay_DSTATE;        /* '<S514>/Unit Delay' */
  real_T s456_UnitDelay1_DSTATE;       /* '<S456>/Unit Delay1' */
  real_T s576_UnitDelay1_DSTATE;       /* '<S576>/Unit Delay1' */
  real_T s645_UnitDelay_DSTATE;        /* '<S645>/Unit Delay' */
  real_T s571_UnitDelay1_DSTATE;       /* '<S571>/Unit Delay1' */
  real_T s611_UnitDelay_DSTATE;        /* '<S611>/Unit Delay' */
  real_T s572_UnitDelay1_DSTATE;       /* '<S572>/Unit Delay1' */
  real_T s411_UnitDelay_DSTATE;        /* '<S411>/Unit Delay' */
  real_T s520_UnitDelay_DSTATE;        /* '<S520>/Unit Delay' */
  real_T s539_UnitDelay_DSTATE;        /* '<S539>/Unit Delay' */
  real_T s429_UnitDelay2_DSTATE;       /* '<S429>/Unit Delay2' */
  real_T s432_UnitDelay_DSTATE;        /* '<S432>/Unit Delay' */
  real_T s430_UnitDelay2_DSTATE;       /* '<S430>/Unit Delay2' */
  real_T s435_UnitDelay_DSTATE;        /* '<S435>/Unit Delay' */
  real_T s471_UnitDelay_DSTATE;        /* '<S471>/Unit Delay' */
  real_T s473_UnitDelay_DSTATE;        /* '<S473>/Unit Delay' */
  real_T s619_UnitDelay_DSTATE;        /* '<S619>/Unit Delay' */
  real_T s423_UnitDelay_DSTATE;        /* '<S423>/Unit Delay' */
  real_T s829_UnitDelay_DSTATE;        /* '<S829>/Unit Delay' */
  real_T s827_UnitDelay_DSTATE;        /* '<S827>/Unit Delay' */
  real_T s833_UnitDelay2_DSTATE;       /* '<S833>/Unit Delay2' */
  real_T s839_UnitDelay_DSTATE;        /* '<S839>/Unit Delay' */
  real_T s834_UnitDelay2_DSTATE;       /* '<S834>/Unit Delay2' */
  real_T s842_UnitDelay_DSTATE;        /* '<S842>/Unit Delay' */
  real_T s835_UnitDelay_DSTATE;        /* '<S835>/Unit Delay' */
  real_T s836_UnitDelay_DSTATE;        /* '<S836>/Unit Delay' */
  real_T s837_UnitDelay_DSTATE;        /* '<S837>/Unit Delay' */
  real_T s833_UnitDelay1_DSTATE;       /* '<S833>/Unit Delay1' */
  real_T s833_UnitDelay3_DSTATE;       /* '<S833>/Unit Delay3' */
  real_T s833_UnitDelay4_DSTATE;       /* '<S833>/Unit Delay4' */
  real_T s834_UnitDelay1_DSTATE;       /* '<S834>/Unit Delay1' */
  real_T s834_UnitDelay3_DSTATE;       /* '<S834>/Unit Delay3' */
  real_T s834_UnitDelay4_DSTATE;       /* '<S834>/Unit Delay4' */
  real_T s850_UnitDelay_DSTATE;        /* '<S850>/Unit Delay' */
  real_T s570_UnitDelay1_DSTATE;       /* '<S570>/Unit Delay1' */
  real_T s603_UnitDelay_DSTATE;        /* '<S603>/Unit Delay' */
  real_T s851_UnitDelay_DSTATE;        /* '<S851>/Unit Delay' */
  real_T s574_UnitDelay1_DSTATE;       /* '<S574>/Unit Delay1' */
  real_T s629_UnitDelay_DSTATE;        /* '<S629>/Unit Delay' */
  real_T s852_UnitDelay_DSTATE;        /* '<S852>/Unit Delay' */
  real_T s854_UnitDelay_DSTATE;        /* '<S854>/Unit Delay' */
  real_T s858_UnitDelay_DSTATE;        /* '<S858>/Unit Delay' */
  real_T s857_UnitDelay_DSTATE;        /* '<S857>/Unit Delay' */
  real_T s575_UnitDelay1_DSTATE;       /* '<S575>/Unit Delay1' */
  real_T s637_UnitDelay_DSTATE;        /* '<S637>/Unit Delay' */
  real_T s429_UnitDelay1_DSTATE;       /* '<S429>/Unit Delay1' */
  real_T s429_UnitDelay3_DSTATE;       /* '<S429>/Unit Delay3' */
  real_T s429_UnitDelay4_DSTATE;       /* '<S429>/Unit Delay4' */
  real_T s430_UnitDelay1_DSTATE;       /* '<S430>/Unit Delay1' */
  real_T s430_UnitDelay3_DSTATE;       /* '<S430>/Unit Delay3' */
  real_T s430_UnitDelay4_DSTATE;       /* '<S430>/Unit Delay4' */
  real_T s739_UnitDelay1_DSTATE;       /* '<S739>/Unit Delay1' */
  real_T s739_UnitDelay_DSTATE;        /* '<S739>/Unit Delay' */
  real_T s739_UnitDelay3_DSTATE;       /* '<S739>/Unit Delay3' */
  real_T s739_UnitDelay4_DSTATE;       /* '<S739>/Unit Delay4' */
  real_T s756_UnitDelay1_DSTATE;       /* '<S756>/Unit Delay1' */
  real_T s756_UnitDelay_DSTATE;        /* '<S756>/Unit Delay' */
  real_T s756_UnitDelay3_DSTATE;       /* '<S756>/Unit Delay3' */
  real_T s756_UnitDelay4_DSTATE;       /* '<S756>/Unit Delay4' */
  real_T s773_UnitDelay1_DSTATE;       /* '<S773>/Unit Delay1' */
  real_T s773_UnitDelay_DSTATE;        /* '<S773>/Unit Delay' */
  real_T s773_UnitDelay3_DSTATE;       /* '<S773>/Unit Delay3' */
  real_T s773_UnitDelay4_DSTATE;       /* '<S773>/Unit Delay4' */
  real_T s790_UnitDelay1_DSTATE;       /* '<S790>/Unit Delay1' */
  real_T s790_UnitDelay_DSTATE;        /* '<S790>/Unit Delay' */
  real_T s790_UnitDelay3_DSTATE;       /* '<S790>/Unit Delay3' */
  real_T s790_UnitDelay4_DSTATE;       /* '<S790>/Unit Delay4' */
  real_T s861_UnitDelay_DSTATE;        /* '<S861>/Unit Delay' */
  real_T s862_UnitDelay_DSTATE;        /* '<S862>/Unit Delay' */
  real_T s864_CrankCounter_DSTATE;     /* '<S864>/CrankCounter' */
  real_T s650_UnitDelay_DSTATE;        /* '<S650>/Unit Delay' */
  real_T s657_UnitDelay_DSTATE;        /* '<S657>/Unit Delay' */
  real_T s661_UnitDelay_DSTATE;        /* '<S661>/Unit Delay' */
  real_T s679_UnitDelay_DSTATE;        /* '<S679>/Unit Delay' */
  real_T s663_UnitDelay_DSTATE;        /* '<S663>/Unit Delay' */
  real_T s697_UnitDelay_DSTATE;        /* '<S697>/Unit Delay' */
  real_T s662_UnitDelay_DSTATE;        /* '<S662>/Unit Delay' */
  real_T s688_UnitDelay_DSTATE;        /* '<S688>/Unit Delay' */
  real_T s660_UnitDelay_DSTATE;        /* '<S660>/Unit Delay' */
  real_T s670_UnitDelay_DSTATE;        /* '<S670>/Unit Delay' */
  real_T s320_UnitDelay_DSTATE[8];     /* '<S320>/Unit Delay' */
  real_T s348_UnitDelay2_DSTATE;       /* '<S348>/Unit Delay2' */
  real_T s349_UnitDelay2_DSTATE;       /* '<S349>/Unit Delay2' */
  real_T s448_UnitDelay2_DSTATE;       /* '<S448>/Unit Delay2' */
  real_T s463_UnitDelay_DSTATE;        /* '<S463>/Unit Delay' */
  real_T s466_UnitDelay_DSTATE;        /* '<S466>/Unit Delay' */
  real_T s448_UnitDelay1_DSTATE;       /* '<S448>/Unit Delay1' */
  real_T s448_UnitDelay3_DSTATE;       /* '<S448>/Unit Delay3' */
  real_T s448_UnitDelay4_DSTATE;       /* '<S448>/Unit Delay4' */
  real_T s294_UnitDelay_DSTATE;        /* '<S294>/Unit Delay' */
  real_T s279_UnitDelay_DSTATE;        /* '<S279>/Unit Delay' */
  real_T s192_UnitDelay_DSTATE;        /* '<S192>/Unit Delay' */
  real_T s202_UnitDelay_DSTATE;        /* '<S202>/Unit Delay' */
  real_T s203_UnitDelay_DSTATE;        /* '<S203>/Unit Delay' */
  real_T s108_UnitDelay_DSTATE;        /* '<S108>/Unit Delay' */
  real_T s147_UnitDelay_DSTATE;        /* '<S147>/Unit Delay' */
  real_T s137_UnitDelay_DSTATE;        /* '<S137>/Unit Delay' */
  real_T s146_UnitDelay_DSTATE;        /* '<S146>/Unit Delay' */
  real_T s228_UnitDelay_DSTATE;        /* '<S228>/Unit Delay' */
  real_T s230_UnitDelay_DSTATE;        /* '<S230>/Unit Delay' */
  real_T s114_UnitDelay3_DSTATE;       /* '<S114>/Unit Delay3' */
  real_T s114_UnitDelay1_DSTATE;       /* '<S114>/Unit Delay1' */
  real_T s209_state_DSTATE;            /* '<S209>/state' */
  real_T s114_UnitDelay2_DSTATE;       /* '<S114>/Unit Delay2' */
  real_T s213_UnitDelay_DSTATE;        /* '<S213>/Unit Delay' */
  real_T s240_UnitDelay_DSTATE;        /* '<S240>/Unit Delay' */
  real_T s241_UnitDelay_DSTATE;        /* '<S241>/Unit Delay' */
  real_T s235_UnitDelay_DSTATE;        /* '<S235>/Unit Delay' */
  real_T s216_UnitDelay_DSTATE;        /* '<S216>/Unit Delay' */
  real_T s152_state_DSTATE;            /* '<S152>/state' */
  real_T s270_UnitDelay_DSTATE;        /* '<S270>/Unit Delay' */
  real_T s269_UnitDelay_DSTATE;        /* '<S269>/Unit Delay' */
  real_T s266_UnitDelay1_DSTATE;       /* '<S266>/Unit Delay1' */
  real_T s266_UnitDelay_DSTATE;        /* '<S266>/Unit Delay' */
  real_T s266_UnitDelay2_DSTATE;       /* '<S266>/Unit Delay2' */
  real_T s258_UnitDelay_DSTATE;        /* '<S258>/Unit Delay' */
  real_T s257_UnitDelay_DSTATE;        /* '<S257>/Unit Delay' */
  real_T s254_UnitDelay1_DSTATE;       /* '<S254>/Unit Delay1' */
  real_T s254_UnitDelay_DSTATE;        /* '<S254>/Unit Delay' */
  real_T s254_UnitDelay2_DSTATE;       /* '<S254>/Unit Delay2' */
  real_T s178_UnitDelay_DSTATE;        /* '<S178>/Unit Delay' */
  real_T s177_UnitDelay_DSTATE;        /* '<S177>/Unit Delay' */
  real_T s87_UnitDelay_DSTATE;         /* '<S87>/Unit Delay' */
  real_T s72_UnitDelay2_DSTATE;        /* '<S72>/Unit Delay2' */
  real_T s20_UnitDelay_DSTATE;         /* '<S20>/Unit Delay' */
  real_T s55_UnitDelay_DSTATE;         /* '<S55>/Unit Delay' */
  real_T s46_UnitDelay_DSTATE;         /* '<S46>/Unit Delay' */
  real_T s42_UnitDelay_DSTATE;         /* '<S42>/Unit Delay' */
  real_T s44_UnitDelay_DSTATE;         /* '<S44>/Unit Delay' */
  real_T s47_UnitDelay_DSTATE;         /* '<S47>/Unit Delay' */
  real_T s48_UnitDelay_DSTATE;         /* '<S48>/Unit Delay' */
  real_T s948_UnitDelay_DSTATE;        /* '<S948>/Unit Delay' */
  real_T s948_UnitDelay1_DSTATE;       /* '<S948>/Unit Delay1' */
  real_T s407_TOld;                    /* '<S401>/Baro Stall State Delay' */
  real_T s27_TimerOld;                 /* '<S20>/ETC Test  Manager' */
  uint32_T s489_UnitDelay_DSTATE;      /* '<S489>/Unit Delay' */
  uint32_T s566_UnitDelay_DSTATE;      /* '<S566>/Unit Delay' */
  uint32_T s720_motohawk_delta_time_DWORK1;/* '<S720>/motohawk_delta_time' */
  uint32_T s751_motohawk_delta_time_DWORK1;/* '<S751>/motohawk_delta_time' */
  uint32_T s708_motohawk_delta_time_DWORK1;/* '<S708>/motohawk_delta_time' */
  uint32_T s734_motohawk_delta_time_DWORK1;/* '<S734>/motohawk_delta_time' */
  uint32_T s481_motohawk_delta_time_DWORK1;/* '<S481>/motohawk_delta_time' */
  uint32_T s577_motohawk_delta_time_DWORK1;/* '<S577>/motohawk_delta_time' */
  uint32_T s560_motohawk_delta_time_DWORK1;/* '<S560>/motohawk_delta_time' */
  uint32_T s768_motohawk_delta_time_DWORK1;/* '<S768>/motohawk_delta_time' */
  uint32_T s785_motohawk_delta_time_DWORK1;/* '<S785>/motohawk_delta_time' */
  uint32_T s594_motohawk_delta_time_DWORK1;/* '<S594>/motohawk_delta_time' */
  uint32_T s590_motohawk_delta_time_DWORK1;/* '<S590>/motohawk_delta_time' */
  uint32_T s547_motohawk_delta_time_DWORK1;/* '<S547>/motohawk_delta_time' */
  uint32_T s556_motohawk_delta_time_DWORK1;/* '<S556>/motohawk_delta_time' */
  uint32_T s501_motohawk_delta_time_DWORK1;/* '<S501>/motohawk_delta_time' */
  uint32_T s509_motohawk_delta_time_DWORK1;/* '<S509>/motohawk_delta_time' */
  uint32_T s483_motohawk_delta_time_DWORK1;/* '<S483>/motohawk_delta_time' */
  uint32_T s640_motohawk_delta_time_DWORK1;/* '<S640>/motohawk_delta_time' */
  uint32_T s606_motohawk_delta_time_DWORK1;/* '<S606>/motohawk_delta_time' */
  uint32_T s401_motohawk_delta_time_DWORK1;/* '<S401>/motohawk_delta_time' */
  uint32_T s414_motohawk_delta_time_DWORK1;/* '<S414>/motohawk_delta_time' */
  uint32_T s533_motohawk_delta_time_DWORK1;/* '<S533>/motohawk_delta_time' */
  uint32_T s471_motohawk_delta_time_DWORK1;/* '<S471>/motohawk_delta_time' */
  uint32_T s544_motohawk_delta_time_DWORK1;/* '<S544>/motohawk_delta_time' */
  uint32_T s614_motohawk_delta_time_DWORK1;/* '<S614>/motohawk_delta_time' */
  uint32_T s402_motohawk_delta_time_DWORK1;/* '<S402>/motohawk_delta_time' */
  uint32_T s828_motohawk_delta_time_DWORK1;/* '<S828>/motohawk_delta_time' */
  uint32_T s825_motohawk_delta_time_DWORK1;/* '<S825>/motohawk_delta_time' */
  uint32_T s830_motohawk_delta_time_DWORK1;/* '<S830>/motohawk_delta_time' */
  uint32_T s831_motohawk_delta_time_DWORK1;/* '<S831>/motohawk_delta_time' */
  uint32_T s832_motohawk_delta_time_DWORK1;/* '<S832>/motohawk_delta_time' */
  uint32_T s847_motohawk_delta_time_DWORK1;/* '<S847>/motohawk_delta_time' */
  uint32_T s598_motohawk_delta_time_DWORK1;/* '<S598>/motohawk_delta_time' */
  uint32_T s848_motohawk_delta_time_DWORK1;/* '<S848>/motohawk_delta_time' */
  uint32_T s624_motohawk_delta_time_DWORK1;/* '<S624>/motohawk_delta_time' */
  uint32_T s849_motohawk_delta_time_DWORK1;/* '<S849>/motohawk_delta_time' */
  uint32_T s853_motohawk_delta_time_DWORK1;/* '<S853>/motohawk_delta_time' */
  uint32_T s856_motohawk_delta_time_DWORK1;/* '<S856>/motohawk_delta_time' */
  uint32_T s855_motohawk_delta_time_DWORK1;/* '<S855>/motohawk_delta_time' */
  uint32_T s901_motohawk_delta_time_DWORK1;/* '<S901>/motohawk_delta_time' */
  uint32_T s485_motohawk_delta_time_DWORK1;/* '<S485>/motohawk_delta_time' */
  uint32_T s632_motohawk_delta_time_DWORK1;/* '<S632>/motohawk_delta_time' */
  uint32_T s558_motohawk_delta_time_DWORK1;/* '<S558>/motohawk_delta_time' */
  uint32_T s651_motohawk_delta_time_DWORK1;/* '<S651>/motohawk_delta_time' */
  uint32_T s673_motohawk_delta_time_DWORK1;/* '<S673>/motohawk_delta_time' */
  uint32_T s691_motohawk_delta_time_DWORK1;/* '<S691>/motohawk_delta_time' */
  uint32_T s682_motohawk_delta_time_DWORK1;/* '<S682>/motohawk_delta_time' */
  uint32_T s664_motohawk_delta_time_DWORK1;/* '<S664>/motohawk_delta_time' */
  uint32_T s314_motohawk_delta_time_DWORK1;/* '<S314>/motohawk_delta_time' */
  uint32_T s315_motohawk_delta_time_DWORK1;/* '<S315>/motohawk_delta_time' */
  uint32_T s382_motohawk_delta_time_DWORK1;/* '<S382>/motohawk_delta_time' */
  uint32_T s385_motohawk_delta_time_DWORK1;/* '<S385>/motohawk_delta_time' */
  uint32_T s383_motohawk_delta_time_DWORK1;/* '<S383>/motohawk_delta_time' */
  uint32_T s384_motohawk_delta_time_DWORK1;/* '<S384>/motohawk_delta_time' */
  uint32_T s318_motohawk_delta_time_DWORK1;/* '<S318>/motohawk_delta_time' */
  uint32_T s466_motohawk_delta_time_DWORK1;/* '<S466>/motohawk_delta_time' */
  uint32_T s448_motohawk_delta_time_DWORK1;/* '<S448>/motohawk_delta_time' */
  uint32_T s296_motohawk_delta_time_DWORK1;/* '<S296>/motohawk_delta_time' */
  uint32_T s295_temporalCounter_i1;    /* '<S287>/Ice Break' */
  uint32_T s295_presentTicks;          /* '<S287>/Ice Break' */
  uint32_T s295_elapsedTicks;          /* '<S287>/Ice Break' */
  uint32_T s295_previousTicks;         /* '<S287>/Ice Break' */
  uint32_T s192_motohawk_delta_time_DWORK1;/* '<S192>/motohawk_delta_time' */
  uint32_T s203_motohawk_delta_time_DWORK1;/* '<S203>/motohawk_delta_time' */
  uint32_T s137_motohawk_delta_time_DWORK1;/* '<S137>/motohawk_delta_time' */
  uint32_T s147_motohawk_delta_time_DWORK1;/* '<S147>/motohawk_delta_time' */
  uint32_T s209_motohawk_delta_time_DWORK1;/* '<S209>/motohawk_delta_time' */
  uint32_T s213_motohawk_delta_time_DWORK1;/* '<S213>/motohawk_delta_time' */
  uint32_T s241_motohawk_delta_time_DWORK1;/* '<S241>/motohawk_delta_time' */
  uint32_T s216_motohawk_delta_time_DWORK1;/* '<S216>/motohawk_delta_time' */
  uint32_T s154_motohawk_delta_time_DWORK1;/* '<S154>/motohawk_delta_time' */
  uint32_T s152_motohawk_delta_time_DWORK1;/* '<S152>/motohawk_delta_time' */
  uint32_T s270_motohawk_delta_time_DWORK1;/* '<S270>/motohawk_delta_time' */
  uint32_T s274_motohawk_delta_time_DWORK1;/* '<S274>/motohawk_delta_time' */
  uint32_T s276_motohawk_delta_time_DWORK1;/* '<S276>/motohawk_delta_time' */
  uint32_T s275_motohawk_delta_time_DWORK1;/* '<S275>/motohawk_delta_time' */
  uint32_T s258_motohawk_delta_time_DWORK1;/* '<S258>/motohawk_delta_time' */
  uint32_T s262_motohawk_delta_time_DWORK1;/* '<S262>/motohawk_delta_time' */
  uint32_T s264_motohawk_delta_time_DWORK1;/* '<S264>/motohawk_delta_time' */
  uint32_T s263_motohawk_delta_time_DWORK1;/* '<S263>/motohawk_delta_time' */
  uint32_T s175_motohawk_delta_time_DWORK1;/* '<S175>/motohawk_delta_time' */
  uint32_T s174_motohawk_delta_time_DWORK1;/* '<S174>/motohawk_delta_time' */
  uint32_T s63_motohawk_delta_time_DWORK1;/* '<S63>/motohawk_delta_time' */
  uint32_T s55_motohawk_delta_time_DWORK1;/* '<S55>/motohawk_delta_time' */
  uint32_T s43_motohawk_delta_time_DWORK1;/* '<S43>/motohawk_delta_time' */
  uint32_T s48_motohawk_delta_time_DWORK1;/* '<S48>/motohawk_delta_time' */
  uint32_T s959_motohawk_delta_time_DWORK1;/* '<S959>/motohawk_delta_time' */
  uint32_T s950_motohawk_delta_time_DWORK1;/* '<S950>/motohawk_delta_time' */
  int_T s114_HitCrossing1_MODE;        /* '<S114>/Hit  Crossing1' */
  uint16_T s348_UnitDelay1_DSTATE;     /* '<S348>/Unit Delay1' */
  uint16_T s349_UnitDelay1_DSTATE;     /* '<S349>/Unit Delay1' */
  uint16_T s808_InjectorSequence_DWORK2;/* '<S808>/Injector Sequence' */
  int8_T s450_UnitDelay_DSTATE;        /* '<S450>/Unit Delay' */
  int8_T s449_UnitDelay_DSTATE;        /* '<S449>/Unit Delay' */
  int8_T s408_UnitDelay_DSTATE;        /* '<S408>/Unit Delay' */
  uint8_T s453_UnitDelay_DSTATE;       /* '<S453>/Unit Delay' */
  uint8_T s476_CrankCounter_DSTATE;    /* '<S476>/CrankCounter' */
  uint8_T s72_UnitDelay1_DSTATE;       /* '<S72>/Unit Delay1' */
  boolean_T s523_UnitDelay2_DSTATE;    /* '<S523>/Unit Delay2' */
  boolean_T s427_UnitDelay_DSTATE;     /* '<S427>/Unit Delay' */
  boolean_T s833_UnitDelay5_DSTATE;    /* '<S833>/Unit Delay5' */
  boolean_T s834_UnitDelay5_DSTATE;    /* '<S834>/Unit Delay5' */
  boolean_T s478_UnitDelay_DSTATE;     /* '<S478>/Unit Delay' */
  boolean_T s731_InitialConditionisTrue_DSTATE;/* '<S731>/Initial Condition is True' */
  boolean_T s719_InitialConditionisTrue_DSTATE;/* '<S719>/Initial Condition is True' */
  boolean_T s398_UnitDelay_DSTATE;     /* '<S398>/Unit Delay' */
  boolean_T s399_UnitDelay_DSTATE;     /* '<S399>/Unit Delay' */
  boolean_T s400_UnitDelay_DSTATE;     /* '<S400>/Unit Delay' */
  boolean_T s335_UnitDelay_DSTATE[8];  /* '<S335>/Unit Delay' */
  boolean_T s291_UnitDelay_DSTATE;     /* '<S291>/Unit Delay' */
  boolean_T s292_UnitDelay_DSTATE;     /* '<S292>/Unit Delay' */
  boolean_T s293_UnitDelay_DSTATE;     /* '<S293>/Unit Delay' */
  boolean_T s282_InitialConditionisTrue_DSTATE;/* '<S282>/Initial Condition is True' */
  boolean_T s113_UnitDelay_DSTATE;     /* '<S113>/Unit Delay' */
  boolean_T s159_UnitDelay_DSTATE;     /* '<S159>/Unit Delay' */
  boolean_T s160_UnitDelay_DSTATE;     /* '<S160>/Unit Delay' */
  boolean_T s161_UnitDelay_DSTATE;     /* '<S161>/Unit Delay' */
  boolean_T s128_UnitDelay_DSTATE;     /* '<S128>/Unit Delay' */
  boolean_T s127_UnitDelay_DSTATE;     /* '<S127>/Unit Delay' */
  boolean_T s125_UnitDelay_DSTATE;     /* '<S125>/Unit Delay' */
  boolean_T s126_UnitDelay_DSTATE;     /* '<S126>/Unit Delay' */
  boolean_T s124_UnitDelay_DSTATE;     /* '<S124>/Unit Delay' */
  boolean_T s123_UnitDelay_DSTATE;     /* '<S123>/Unit Delay' */
  boolean_T s206_UnitDelay_DSTATE;     /* '<S206>/Unit Delay' */
  boolean_T s153_UnitDelay_DSTATE;     /* '<S153>/Unit Delay' */
  boolean_T s273_UnitDelay_DSTATE;     /* '<S273>/Unit Delay' */
  boolean_T s261_UnitDelay_DSTATE;     /* '<S261>/Unit Delay' */
  boolean_T s45_UnitDelay_DSTATE;      /* '<S45>/Unit Delay' */
  boolean_T s947_UnitDelay8_DSTATE;    /* '<S947>/Unit Delay8' */
  boolean_T s947_UnitDelay6_DSTATE;    /* '<S947>/Unit Delay6' */
  boolean_T s947_UnitDelay7_DSTATE;    /* '<S947>/Unit Delay7' */
  boolean_T s943_UnitDelay_DSTATE;     /* '<S943>/Unit Delay' */
  boolean_T s949_UnitDelay2_DSTATE;    /* '<S949>/Unit Delay2' */
  boolean_T s942_UnitDelay5_DSTATE;    /* '<S942>/Unit Delay5' */
  boolean_T s949_UnitDelay_DSTATE;     /* '<S949>/Unit Delay' */
  boolean_T s949_UnitDelay1_DSTATE;    /* '<S949>/Unit Delay1' */
  boolean_T s942_UnitDelay3_DSTATE;    /* '<S942>/Unit Delay3' */
  boolean_T s942_UnitDelay4_DSTATE;    /* '<S942>/Unit Delay4' */
  int8_T s347_If_ActiveSubsystem;      /* '<S347>/If' */
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
  uint8_T s495_motohawk_trigger_DWORK1;/* '<S495>/motohawk_trigger' */
  uint8_T s453_motohawk_trigger_DWORK1;/* '<S453>/motohawk_trigger' */
  uint8_T s573_motohawk_trigger5_DWORK1;/* '<S573>/motohawk_trigger5' */
  uint8_T s495_motohawk_trigger1_DWORK1;/* '<S495>/motohawk_trigger1' */
  uint8_T s14_motohawk_trigger1_DWORK1;/* '<S14>/motohawk_trigger1' */
  uint8_T s14_motohawk_trigger_DWORK1; /* '<S14>/motohawk_trigger' */
  uint8_T s13_motohawk_trigger_DWORK1; /* '<S13>/motohawk_trigger' */
  uint8_T s701_motohawk_trigger_DWORK1;/* '<S701>/motohawk_trigger' */
  uint8_T s703_motohawk_trigger_DWORK1;/* '<S703>/motohawk_trigger' */
  uint8_T s864_motohawk_trigger1_DWORK1;/* '<S864>/motohawk_trigger1' */
  uint8_T s328_motohawk_trigger_DWORK1;/* '<S328>/motohawk_trigger' */
  uint8_T s474_is_c2_BaseEngineController_LS;/* '<S453>/Engine State Machine' */
  uint8_T s407_is_c19_BaseEngineController_LS;/* '<S401>/Baro Stall State Delay' */
  uint8_T s295_is_active_c3_BaseEngineController_LS;/* '<S287>/Ice Break' */
  uint8_T s295_is_c3_BaseEngineController_LS;/* '<S287>/Ice Break' */
  uint8_T s93_motohawk_trigger1_DWORK1;/* '<S93>/motohawk_trigger1' */
  uint8_T s225_is_active_c12_BaseEngineController_LS;/* '<S210>/IdleStateMachine' */
  uint8_T s225_is_c12_BaseEngineController_LS;/* '<S210>/IdleStateMachine' */
  uint8_T s72_motohawk_trigger_DWORK1; /* '<S72>/motohawk_trigger' */
  uint8_T s27_is_c9_BaseEngineController_LS;/* '<S20>/ETC Test  Manager' */
  uint8_T s946_is_c8_BaseEngineController_LS;/* '<S942>/ECUP Latch' */
  boolean_T s557_Memory_PreviousInput; /* '<S557>/Memory' */
  boolean_T s808_InjectorSequence_DWORK1[8];/* '<S808>/Injector Sequence' */
  boolean_T s357_Memory_PreviousInput; /* '<S357>/Memory' */
  boolean_T s360_Memory_PreviousInput; /* '<S360>/Memory' */
  boolean_T s248_Multiplyby10ifnotyetenabled_FirstOutputTime;/* '<S248>/Multiply by 1.0 if not yet enabled' */
  boolean_T s247_Multiplyby10ifnotyetenabled_FirstOutputTime;/* '<S247>/Multiply by 1.0 if not yet enabled' */
  boolean_T s963_Memory_PreviousInput; /* '<S963>/Memory' */
  boolean_T s15_Stall_MODE;            /* '<S15>/Stall' */
  boolean_T s15_Crank_MODE;            /* '<S15>/Crank' */
  boolean_T s401_CaptureSignalAtStartup_MODE;/* '<S401>/Capture Signal At Startup' */
  boolean_T s405_CaptureECTAtStartup_MODE;/* '<S405>/Capture ECT At Startup' */
  boolean_T s15_Run_MODE;              /* '<S15>/Run' */
  boolean_T s22_PassThrough1_MODE;     /* '<S22>/PassThrough1' */
  boolean_T s22_PassThrough3_MODE;     /* '<S22>/PassThrough3' */
  boolean_T s22_SequenceCutMachine_MODE;/* '<S22>/SequenceCutMachine' */
  boolean_T s22_PassThrough5_MODE;     /* '<S22>/PassThrough5' */
  boolean_T s22_PassThrough4_MODE;     /* '<S22>/PassThrough4' */
  boolean_T s405_CaptureIATAtStartup_MODE;/* '<S405>/Capture IAT At Startup' */
  boolean_T s14_ElectronicThrottleController_MODE;/* '<S14>/Electronic Throttle Controller' */
  boolean_T s489_TriggeredSubsystem_MODE;/* '<S489>/Triggered Subsystem' */
  boolean_T s307_MisfireDiagSub_MODE;  /* '<S307>/MisfireDiagSub' */
  boolean_T s164_DeltaTPSTransientFueling_MODE;/* '<S164>/Delta TPS Transient Fueling' */
  boolean_T s169_ECTTransientFueling_MODE;/* '<S169>/ECT Transient Fueling' */
  boolean_T s169_OXYTransientFueling_MODE;/* '<S169>/OXY Transient Fueling' */
  boolean_T s31_PassThrough_MODE;      /* '<S31>/PassThrough' */
  rtDW_CollectAverage_BaseEngineController_LS s450_CollectAverage;/* '<S450>/Collect Average' */
  rtDW_CollectAverage_BaseEngineController_LS s449_CollectAverage;/* '<S449>/Collect Average' */
  rtDW_CollectAverage_BaseEngineController_LS s408_CollectAverage;/* '<S408>/Collect Average' */
} D_Work_BaseEngineController_LS;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState HitCrossing1_Input_ZCE;   /* '<S114>/Hit  Crossing1' */
  ZCSigState ResetTasksCompleteToFalse_Trig_ZCE;/* '<S32>/Reset TasksComplete To False' */
  ZCSigState ResetTasksCompleteToTrue_Trig_ZCE;/* '<S20>/Reset TasksComplete To True' */
  ZCSigState ShutdownpoweronECU565563_Trig_ZCE;/* '<S949>/Shutdown power on ECU565//563' */
  ZCSigState SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE;/* '<S949>/Save NV Vars one tick before MPRD off' */
  ZCSigState ProcessorReboot_Trig_ZCE; /* '<S949>/Processor Reboot' */
  ZCSigState PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE;/* '<S949>/Post Shutdown two ticks before MPRD off' */
  ZCSigState ShutdownpoweronECU565563_Trig_ZCE_l;/* '<S947>/Shutdown power on ECU565//563' */
  ZCSigState SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE_m;/* '<S947>/Save NV Vars one tick before MPRD off' */
  ZCSigState ProcessorReboot_Trig_ZCE_h;/* '<S947>/Processor Reboot' */
  ZCSigState PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE_h;/* '<S947>/Post Shutdown two ticks before MPRD off' */
  ZCSigState Clear_Trig_ZCE;           /* '<S945>/Clear' */
  ZCSigState Clear_Trig_ZCE_k;         /* '<S944>/Clear' */
} PrevZCSigStates_BaseEngineController_LS;

/* Invariant block signals (auto storage) */
typedef struct {
  const real_T s808_Gain4;             /* '<S808>/Gain4' */
  const real_T s95_motohawk_replicate2;/* '<S95>/motohawk_replicate2' */
  const real_T s95_motohawk_replicate[8];/* '<S95>/motohawk_replicate' */
  const uint32_T s808_DataTypeConversion5;/* '<S808>/Data Type Conversion5' */
} ConstBlockIO_BaseEngineController_LS;

/* Constant parameters (auto storage) */
typedef struct {
  /* Pooled Parameter (Expression: [1,2,3,4,5,6,7,8])
   * Referenced by:
   *   '<S334>/Constant'
   *   '<S345>/Constant'
   *   '<S346>/Constant'
   */
  real_T pooled85[8];

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S123>/Combinatorial  Logic'
   *   '<S124>/Combinatorial  Logic'
   *   '<S125>/Combinatorial  Logic'
   *   '<S126>/Combinatorial  Logic'
   *   '<S127>/Combinatorial  Logic'
   *   '<S128>/Combinatorial  Logic'
   *   '<S153>/Combinatorial  Logic'
   *   '<S159>/Combinatorial  Logic'
   *   '<S160>/Combinatorial  Logic'
   *   '<S161>/Combinatorial  Logic'
   *   '<S291>/Combinatorial  Logic'
   *   '<S292>/Combinatorial  Logic'
   *   '<S293>/Combinatorial  Logic'
   *   '<S398>/Combinatorial  Logic'
   *   '<S399>/Combinatorial  Logic'
   *   '<S400>/Combinatorial  Logic'
   *   '<S45>/Combinatorial  Logic'
   *   '<S261>/Combinatorial  Logic'
   *   '<S273>/Combinatorial  Logic'
   */
  boolean_T pooled893[8];

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S963>/Logic'
   *   '<S557>/Logic'
   *   '<S357>/Logic'
   *   '<S360>/Logic'
   */
  boolean_T pooled894[16];
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
 * '<S100>' : BaseEngineController_LS/Foreground/Control/Controller/Crank/CrankFueling/FuelPulse
 * '<S101>' : BaseEngineController_LS/Foreground/Control/Controller/Crank/CrankFueling/TPSEnrichment
 * '<S102>' : BaseEngineController_LS/Foreground/Control/Controller/Crank/CrankFueling/FuelPulse/CompareTo
 * '<S103>' : BaseEngineController_LS/Foreground/Control/Controller/Crank/CrankFueling/FuelPulse/WritePulseState
 * '<S104>' : BaseEngineController_LS/Foreground/Control/Controller/Merge/FuelPump
 * '<S105>' : BaseEngineController_LS/Foreground/Control/Controller/Run/AC Control
 * '<S106>' : BaseEngineController_LS/Foreground/Control/Controller/Run/AirFlow Manager
 * '<S107>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Base Equiv Ratio
 * '<S108>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Boost Control
 * '<S109>' : BaseEngineController_LS/Foreground/Control/Controller/Run/DFCO
 * '<S110>' : BaseEngineController_LS/Foreground/Control/Controller/Run/FAN Control
 * '<S111>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager
 * '<S112>' : BaseEngineController_LS/Foreground/Control/Controller/Run/IAC Characterization
 * '<S113>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor
 * '<S114>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor
 * '<S115>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control
 * '<S116>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Spark Manager
 * '<S117>' : BaseEngineController_LS/Foreground/Control/Controller/Run/AC Control/AC Comp High Pressure
 * '<S118>' : BaseEngineController_LS/Foreground/Control/Controller/Run/AC Control/AC Comp Low Pressure
 * '<S119>' : BaseEngineController_LS/Foreground/Control/Controller/Run/AC Control/AC Comp Overspeed
 * '<S120>' : BaseEngineController_LS/Foreground/Control/Controller/Run/AC Control/AC Comp Overspeed1
 * '<S121>' : BaseEngineController_LS/Foreground/Control/Controller/Run/AC Control/AC Comp Underspeed
 * '<S122>' : BaseEngineController_LS/Foreground/Control/Controller/Run/AC Control/AC Evap Temp Hyst
 * '<S123>' : BaseEngineController_LS/Foreground/Control/Controller/Run/AC Control/AC Comp High Pressure/Hysteresis
 * '<S124>' : BaseEngineController_LS/Foreground/Control/Controller/Run/AC Control/AC Comp Low Pressure/Hysteresis
 * '<S125>' : BaseEngineController_LS/Foreground/Control/Controller/Run/AC Control/AC Comp Overspeed/Hysteresis
 * '<S126>' : BaseEngineController_LS/Foreground/Control/Controller/Run/AC Control/AC Comp Overspeed1/Hysteresis
 * '<S127>' : BaseEngineController_LS/Foreground/Control/Controller/Run/AC Control/AC Comp Underspeed/Hysteresis
 * '<S128>' : BaseEngineController_LS/Foreground/Control/Controller/Run/AC Control/AC Evap Temp Hyst/Hysteresis
 * '<S129>' : BaseEngineController_LS/Foreground/Control/Controller/Run/AirFlow Manager/Saturation
 * '<S130>' : BaseEngineController_LS/Foreground/Control/Controller/Run/AirFlow Manager/ShutDownTasksComplete Reset
 * '<S131>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Base Equiv Ratio/Warm Up Fuel Holdoff
 * '<S132>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Base Equiv Ratio/motohawk_override_abs
 * '<S133>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Base Equiv Ratio/motohawk_override_abs/NewValue
 * '<S134>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Base Equiv Ratio/motohawk_override_abs/OldValue
 * '<S135>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Boost Control/BoostControl Adapt
 * '<S136>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Boost Control/Universal PID (Tunable & Scheduled)
 * '<S137>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Boost Control/Variable Rate Limiter
 * '<S138>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Boost Control/BoostControl Adapt/Adapt Boost Table
 * '<S139>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Boost Control/BoostControl Adapt/BoostControl Enable Delay
 * '<S140>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Boost Control/BoostControl Adapt/Saturation (Tunable)
 * '<S141>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Boost Control/BoostControl Adapt/BoostControl Enable Delay/Time Since Enabled (With Input)1
 * '<S142>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Boost Control/BoostControl Adapt/Saturation (Tunable)/Saturation
 * '<S143>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Boost Control/Universal PID (Tunable & Scheduled)/PID Gain Select1
 * '<S144>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Boost Control/Universal PID (Tunable & Scheduled)/Saturation
 * '<S145>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Boost Control/Universal PID (Tunable & Scheduled)/Universal PID
 * '<S146>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Boost Control/Universal PID (Tunable & Scheduled)/Universal PID/Derivitive3
 * '<S147>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Boost Control/Universal PID (Tunable & Scheduled)/Universal PID/Integrator
 * '<S148>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Boost Control/Universal PID (Tunable & Scheduled)/Universal PID/Model Info
 * '<S149>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Boost Control/Universal PID (Tunable & Scheduled)/Universal PID/Integrator/Saturation
 * '<S150>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Boost Control/Variable Rate Limiter/Saturation
 * '<S151>' : BaseEngineController_LS/Foreground/Control/Controller/Run/DFCO/DesEquivRatioMod
 * '<S152>' : BaseEngineController_LS/Foreground/Control/Controller/Run/DFCO/DesEquivRatioMod/Handoff Alpha
 * '<S153>' : BaseEngineController_LS/Foreground/Control/Controller/Run/DFCO/DesEquivRatioMod/Hysteresis
 * '<S154>' : BaseEngineController_LS/Foreground/Control/Controller/Run/DFCO/DesEquivRatioMod/Time Since Enabled (With Input)1
 * '<S155>' : BaseEngineController_LS/Foreground/Control/Controller/Run/DFCO/DesEquivRatioMod/Handoff Alpha/Saturation
 * '<S156>' : BaseEngineController_LS/Foreground/Control/Controller/Run/FAN Control/Hysterisis
 * '<S157>' : BaseEngineController_LS/Foreground/Control/Controller/Run/FAN Control/Hysterisis1
 * '<S158>' : BaseEngineController_LS/Foreground/Control/Controller/Run/FAN Control/Hysterisis2
 * '<S159>' : BaseEngineController_LS/Foreground/Control/Controller/Run/FAN Control/Hysterisis/Hysteresis
 * '<S160>' : BaseEngineController_LS/Foreground/Control/Controller/Run/FAN Control/Hysterisis1/Hysteresis
 * '<S161>' : BaseEngineController_LS/Foreground/Control/Controller/Run/FAN Control/Hysterisis2/Hysteresis
 * '<S162>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/DesiredFuelCalc
 * '<S163>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Fuel Calculation
 * '<S164>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager
 * '<S165>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt
 * '<S166>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Fuel Calculation/Calculate Fuel Flow
 * '<S167>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Fuel Calculation/Calculate Fuel Flow/Calculate A//F Ratio
 * '<S168>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Fuel Calculation/Calculate Fuel Flow/Calculate A//F Ratio/motohawk_table_1d
 * '<S169>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling
 * '<S170>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Mass Flow to Charge Mass Transform
 * '<S171>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling/CompareTo1
 * '<S172>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling/CompareTo2
 * '<S173>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling/ECT Transient Fueling
 * '<S174>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling/First Order Low Pass (Tunable)
 * '<S175>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling/First Order Low Pass (Tunable)1
 * '<S176>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling/OXY Transient Fueling
 * '<S177>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S178>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Delta TPS Transient Fueling/First Order Low Pass (Tunable)1/First Order Low Pass
 * '<S179>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Mass Flow to Charge Mass Transform/Multiply and Divide, avoiding divde by zero
 * '<S180>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/Injector Manager/Mass Flow to Charge Mass Transform/NonZero RPM
 * '<S181>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/Adapt FuelFlowComp Map Bank A
 * '<S182>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/Adapt FuelFlowComp Map Bank B
 * '<S183>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/O2 Control Enable Delay
 * '<S184>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/Saturation (Tunable)
 * '<S185>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/Saturation (Tunable)1
 * '<S186>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/WarmUp Disable
 * '<S187>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/O2 Control Enable Delay/Time Since Enabled (With Input)1
 * '<S188>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/Saturation (Tunable)/Saturation
 * '<S189>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Fuel System Manager/O2 Fuel Adapt/Saturation (Tunable)1/Saturation
 * '<S190>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/I-Term Preload
 * '<S191>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/MaxGovState
 * '<S192>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Ramp RPM
 * '<S193>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Trigger Pre-load
 * '<S194>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)
 * '<S195>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/MaxGovState/MaxGOV Stateflow
 * '<S196>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Trigger Pre-load/InGear
 * '<S197>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Trigger Pre-load/InNeutral
 * '<S198>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Trigger Pre-load/InGear/Saturation
 * '<S199>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Trigger Pre-load/InNeutral/Saturation
 * '<S200>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Saturation
 * '<S201>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Universal PID
 * '<S202>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Derivitive3
 * '<S203>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Integrator
 * '<S204>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Model Info
 * '<S205>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MaxGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Integrator/Saturation
 * '<S206>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/AiflowOffset
 * '<S207>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Base Airflow Table Adapt
 * '<S208>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Base RPM Set Pt
 * '<S209>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Handoff Alpha
 * '<S210>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination
 * '<S211>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/MotoringDetection
 * '<S212>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/OnIdle State
 * '<S213>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Ramp RPM
 * '<S214>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PD (Tunable & Scheduled)
 * '<S215>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)
 * '<S216>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/AiflowOffset/Ramp Air Into Idle State
 * '<S217>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/AiflowOffset/Run
 * '<S218>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Base Airflow Table Adapt/Adapt Base Airflow Table
 * '<S219>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Base Airflow Table Adapt/Idle Control Enable Delay
 * '<S220>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Base Airflow Table Adapt/Saturation (Tunable)
 * '<S221>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Base Airflow Table Adapt/Idle Control Enable Delay/Time Since Enabled (With Input)1
 * '<S222>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Base Airflow Table Adapt/Saturation (Tunable)/Saturation
 * '<S223>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Handoff Alpha/Saturation
 * '<S224>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/Determine if RPM is Falling
 * '<S225>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/IdleStateMachine
 * '<S226>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/OnIdle State
 * '<S227>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/Time Since Enabled (With Input)1
 * '<S228>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/Determine if RPM is Falling/Derivitive
 * '<S229>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/Determine if RPM is Falling/First Order Low Pass (Tunable)
 * '<S230>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Idle State Determination/Determine if RPM is Falling/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S231>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/MotoringDetection/Time Since Enabled (With Input)2
 * '<S232>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PD (Tunable & Scheduled)/PID Gain Select
 * '<S233>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PD (Tunable & Scheduled)/Saturation
 * '<S234>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PD (Tunable & Scheduled)/Universal PD
 * '<S235>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PD (Tunable & Scheduled)/Universal PD/Derivitive
 * '<S236>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PD (Tunable & Scheduled)/Universal PD/Model Info
 * '<S237>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/PID Gain Select1
 * '<S238>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/Saturation
 * '<S239>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/Universal PID
 * '<S240>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Derivitive3
 * '<S241>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Integrator
 * '<S242>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Model Info
 * '<S243>' : BaseEngineController_LS/Foreground/Control/Controller/Run/MinGovernor/Universal PID (Tunable & Scheduled)/Universal PID/Integrator/Saturation
 * '<S244>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/Map O2 Sensors to V8 Cylinders
 * '<S245>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 Control State Determination
 * '<S246>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Calibrations
 * '<S247>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank A
 * '<S248>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank B
 * '<S249>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2Arb
 * '<S250>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2Disable
 * '<S251>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Calibrations/Error Gain Scheduling
 * '<S252>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Calibrations/O2 Control Switch Point Maps
 * '<S253>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank A/Closed-Loop O2 PID Controller
 * '<S254>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank A/Equivalence Ratio Perturbation
 * '<S255>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank A/Closed-Loop O2 PID Controller/Saturation
 * '<S256>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank A/Closed-Loop O2 PID Controller/Universal PID
 * '<S257>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank A/Closed-Loop O2 PID Controller/Universal PID/Derivitive3
 * '<S258>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank A/Closed-Loop O2 PID Controller/Universal PID/Integrator
 * '<S259>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank A/Closed-Loop O2 PID Controller/Universal PID/Model Info
 * '<S260>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank A/Closed-Loop O2 PID Controller/Universal PID/Integrator/Saturation
 * '<S261>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank A/Equivalence Ratio Perturbation/Hysteresis
 * '<S262>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank A/Equivalence Ratio Perturbation/Time Since Enabled (With Input)1
 * '<S263>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank A/Equivalence Ratio Perturbation/Time Since Enabled (With Input)2
 * '<S264>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank A/Equivalence Ratio Perturbation/Time Since Enabled (With Input)3
 * '<S265>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank B/Closed-Loop O2 PID Controller
 * '<S266>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank B/Equivalence Ratio Perturbation
 * '<S267>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank B/Closed-Loop O2 PID Controller/Saturation
 * '<S268>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank B/Closed-Loop O2 PID Controller/Universal PID
 * '<S269>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank B/Closed-Loop O2 PID Controller/Universal PID/Derivitive3
 * '<S270>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank B/Closed-Loop O2 PID Controller/Universal PID/Integrator
 * '<S271>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank B/Closed-Loop O2 PID Controller/Universal PID/Model Info
 * '<S272>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank B/Closed-Loop O2 PID Controller/Universal PID/Integrator/Saturation
 * '<S273>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank B/Equivalence Ratio Perturbation/Hysteresis
 * '<S274>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank B/Equivalence Ratio Perturbation/Time Since Enabled (With Input)1
 * '<S275>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank B/Equivalence Ratio Perturbation/Time Since Enabled (With Input)2
 * '<S276>' : BaseEngineController_LS/Foreground/Control/Controller/Run/O2 Control/O2 PID Controller Bank B/Equivalence Ratio Perturbation/Time Since Enabled (With Input)3
 * '<S277>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Spark Manager/Desired Eq Ratio Offset
 * '<S278>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Spark Manager/Ethanol Spark Offset
 * '<S279>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Spark Manager/Spark Advance Rate Limiter
 * '<S280>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Spark Manager/SparkAdvanceLimiter
 * '<S281>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Spark Manager/Temp Comp Offset
 * '<S282>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Spark Manager/Spark Advance Rate Limiter/First Time
 * '<S283>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Spark Manager/Spark Advance Rate Limiter/Saturation
 * '<S284>' : BaseEngineController_LS/Foreground/Control/Controller/Run/Spark Manager/SparkAdvanceLimiter/Saturation
 * '<S285>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/FAN Control
 * '<S286>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/Fuel Pump at Startup
 * '<S287>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/Stall Throttle
 * '<S288>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/FAN Control/Hysterisis
 * '<S289>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/FAN Control/Hysterisis1
 * '<S290>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/FAN Control/Hysterisis2
 * '<S291>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/FAN Control/Hysterisis/Hysteresis
 * '<S292>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/FAN Control/Hysterisis1/Hysteresis
 * '<S293>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/FAN Control/Hysterisis2/Hysteresis
 * '<S294>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/Fuel Pump at Startup/Time Since Enabled
 * '<S295>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/Stall Throttle/Ice Break
 * '<S296>' : BaseEngineController_LS/Foreground/Control/Controller/Stall/Stall Throttle/Time Since Enabled (With Input)2
 * '<S297>' : BaseEngineController_LS/Foreground/Control/Diagnostics/AC Fault
 * '<S298>' : BaseEngineController_LS/Foreground/Control/Diagnostics/AirFlow
 * '<S299>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Boost Fault
 * '<S300>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Digital Sensors
 * '<S301>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Engine Overheat Fault Logic
 * '<S302>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Fuel Economy
 * '<S303>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Lean Protect
 * '<S304>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Low Oil Pressure Fault Logic
 * '<S305>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Low Voltage
 * '<S306>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MAP Fault Logic
 * '<S307>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE
 * '<S308>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor
 * '<S309>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection
 * '<S310>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Wrong Fuel Pressure Fault Logic
 * '<S311>' : BaseEngineController_LS/Foreground/Control/Diagnostics/AC Fault/Run State
 * '<S312>' : BaseEngineController_LS/Foreground/Control/Diagnostics/AirFlow/Run State
 * '<S313>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Boost Fault/Run State
 * '<S314>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Digital Sensors/Time Since Enabled (With Input)2
 * '<S315>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Digital Sensors/Time Since Enabled (With Input)3
 * '<S316>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Engine Overheat Fault Logic/Run State
 * '<S317>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Fuel Economy/Calculate Fuel Density
 * '<S318>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Fuel Economy/First Order Low Pass (Tunable)
 * '<S319>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Fuel Economy/Multiply and Divide, avoiding divde by zero1
 * '<S320>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Fuel Economy/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S321>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Lean Protect/Run State
 * '<S322>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Low Oil Pressure Fault Logic/Run State
 * '<S323>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Low Voltage/Run State
 * '<S324>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Low Voltage/Run State1
 * '<S325>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Low Voltage/Run State2
 * '<S326>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Low Voltage/Run State3
 * '<S327>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MAP Fault Logic/Run State
 * '<S328>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub
 * '<S329>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/Run State
 * '<S330>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc
 * '<S331>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/DetermineMisfire
 * '<S332>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/StoreRPMData
 * '<S333>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/DetermineMisfire/Compare To Constant
 * '<S334>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/DetermineMisfire/DetermineCylinder
 * '<S335>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/DetermineMisfire/Rising Edge
 * '<S336>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/DetermineMisfire/SetHardFault
 * '<S337>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/DetermineMisfire/SetHardFault/Compare To Constant
 * '<S338>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/DetermineMisfire/SetHardFault/Compare To Constant1
 * '<S339>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/DetermineMisfire/SetHardFault/Compare To Constant2
 * '<S340>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/DetermineMisfire/SetHardFault/Compare To Constant3
 * '<S341>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/DetermineMisfire/SetHardFault/Compare To Constant4
 * '<S342>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/DetermineMisfire/SetHardFault/Compare To Constant5
 * '<S343>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/DetermineMisfire/SetHardFault/Compare To Constant6
 * '<S344>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/DetermineMisfire/SetHardFault/Compare To Constant7
 * '<S345>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/StoreRPMData/DetermineCylinder
 * '<S346>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/StoreRPMData/DetermineCylinder1
 * '<S347>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/StoreRPMData/EncoderAngleArb
 * '<S348>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/StoreRPMData/LatchForAverage
 * '<S349>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/StoreRPMData/LatchForAverage1
 * '<S350>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/StoreRPMData/StoreRPMStart
 * '<S351>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/StoreRPMData/StoreRPMStart1
 * '<S352>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/StoreRPMData/EncoderAngleArb/EncoderAngle_wExtrap
 * '<S353>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/StoreRPMData/EncoderAngleArb/EncoderAngle_wOExtrap
 * '<S354>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/StoreRPMData/EncoderAngleArb/EncoderAngle_wExtrap/motohawk_encoder_angle_extrapolation
 * '<S355>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/StoreRPMData/EncoderAngleArb/EncoderAngle_wExtrap/motohawk_encoder_angle_extrapolation/Tooth Time
 * '<S356>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/StoreRPMData/LatchForAverage/GetInstRPM
 * '<S357>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/StoreRPMData/LatchForAverage/S-R Flip-Flop
 * '<S358>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/StoreRPMData/LatchForAverage/SafeDivide
 * '<S359>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/StoreRPMData/LatchForAverage1/GetInstRPM
 * '<S360>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/StoreRPMData/LatchForAverage1/S-R Flip-Flop
 * '<S361>' : BaseEngineController_LS/Foreground/Control/Diagnostics/MISFIRE/MisfireDiagSub/MisfireDiagFunc/StoreRPMData/LatchForAverage1/SafeDivide
 * '<S362>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/Bank2Bank
 * '<S363>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorStatus
 * '<S364>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorVolt
 * '<S365>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/Bank2Bank/Run State
 * '<S366>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorStatus/Run State1
 * '<S367>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorStatus/Run State10
 * '<S368>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorStatus/Run State11
 * '<S369>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorStatus/Run State12
 * '<S370>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorStatus/Run State13
 * '<S371>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorStatus/Run State14
 * '<S372>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorStatus/Run State15
 * '<S373>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorStatus/Run State16
 * '<S374>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorStatus/Run State2
 * '<S375>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorStatus/Run State3
 * '<S376>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorStatus/Run State4
 * '<S377>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorStatus/Run State5
 * '<S378>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorStatus/Run State6
 * '<S379>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorStatus/Run State7
 * '<S380>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorStatus/Run State8
 * '<S381>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorStatus/Run State9
 * '<S382>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorStatus/Time Since Enabled (With Input)1
 * '<S383>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorStatus/Time Since Enabled (With Input)2
 * '<S384>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorStatus/Time Since Enabled (With Input)3
 * '<S385>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorStatus/Time Since Enabled (With Input)4
 * '<S386>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorVolt/Run State
 * '<S387>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorVolt/Run State1
 * '<S388>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorVolt/Run State2
 * '<S389>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorVolt/Run State3
 * '<S390>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorVolt/Run State4
 * '<S391>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorVolt/Run State5
 * '<S392>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorVolt/Run State6
 * '<S393>' : BaseEngineController_LS/Foreground/Control/Diagnostics/O2 Smart Sensor/SensorVolt/Run State7
 * '<S394>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/BaseRevLimit
 * '<S395>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/BaseRevLimit/Hysterisis
 * '<S396>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/BaseRevLimit/Hysterisis1
 * '<S397>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/BaseRevLimit/Hysterisis2
 * '<S398>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/BaseRevLimit/Hysterisis/Hysteresis
 * '<S399>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/BaseRevLimit/Hysterisis1/Hysteresis
 * '<S400>' : BaseEngineController_LS/Foreground/Control/Diagnostics/Overspeed Protection/BaseRevLimit/Hysterisis2/Hysteresis
 * '<S401>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs
 * '<S402>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/FuelLevel
 * '<S403>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs
 * '<S404>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes
 * '<S405>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed
 * '<S406>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Virtual Indexes
 * '<S407>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Baro Stall State Delay
 * '<S408>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Capture Signal At Startup
 * '<S409>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Running Baro Learn
 * '<S410>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Speed Density - MAP Referenced - Adaptive
 * '<S411>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/motohawk_override_rel
 * '<S412>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Capture Signal At Startup/Collect Average
 * '<S413>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Running Baro Learn/Compare To Constant
 * '<S414>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Running Baro Learn/Time Since Enabled (With Input)1
 * '<S415>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Speed Density - MAP Referenced - Adaptive/Adapt VolEff Map
 * '<S416>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Speed Density - MAP Referenced - Adaptive/C to K1
 * '<S417>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Speed Density - MAP Referenced - Adaptive/Compare To Constant
 * '<S418>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Speed Density - MAP Referenced - Adaptive/O2DataReady
 * '<S419>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Speed Density - MAP Referenced - Adaptive/VE Adapt Source
 * '<S420>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/Speed Density - MAP Referenced - Adaptive/Adapt VolEff Map/motohawk_table_1d
 * '<S421>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/motohawk_override_rel/NewValue
 * '<S422>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/AirCalcs/motohawk_override_rel/OldValue
 * '<S423>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/FuelLevel/First Order Low Pass
 * '<S424>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/FuelLevel/FuelLevelWrite
 * '<S425>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/FuelLevel/RefuelEvent
 * '<S426>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/FuelLevel/motohawk_table_2d
 * '<S427>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/FuelLevel/RefuelEvent/Rising Edge
 * '<S428>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag
 * '<S429>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect1
 * '<S430>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect3
 * '<S431>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect1/DecreasingFilter
 * '<S432>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect1/First Order Low Pass
 * '<S433>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect1/IncreasingFilter
 * '<S434>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect3/DecreasingFilter
 * '<S435>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect3/First Order Low Pass
 * '<S436>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/LoadBasedCalcs/Engine Steady-State Flag/Inc_DecFilterSelect3/IncreasingFilter
 * '<S437>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/ACPres Index
 * '<S438>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/CAT Index
 * '<S439>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/ECT Index
 * '<S440>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/IAT Indexes
 * '<S441>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/MAP Indexes
 * '<S442>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/OXY Index
 * '<S443>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/RPM Indexes
 * '<S444>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/SysVolt Index
 * '<S445>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/TPS Indexes
 * '<S446>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Raw Indexes/VSPD Index
 * '<S447>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/APP  Sensor Arbitration1
 * '<S448>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request
 * '<S449>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Capture ECT At Startup
 * '<S450>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Capture IAT At Startup
 * '<S451>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/CutThrottle APP Limiting
 * '<S452>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Engine Accel
 * '<S453>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/EngineState
 * '<S454>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Fuel Delta Pressure Calculation
 * '<S455>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Gear Estimator
 * '<S456>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/O2 De-lag
 * '<S457>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Stall
 * '<S458>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/TPS  Sensor Arbitration
 * '<S459>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Time Since Key On
 * '<S460>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Time Since Run
 * '<S461>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Time Since Stall
 * '<S462>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/VSPD_Selector
 * '<S463>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request/First Order Low Pass
 * '<S464>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request/PassThrough1
 * '<S465>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request/PassThrough2
 * '<S466>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request/Variable Rate Limiter
 * '<S467>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Base TPS Request/Variable Rate Limiter/Saturation
 * '<S468>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Capture ECT At Startup/Collect Average
 * '<S469>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Capture IAT At Startup/Collect Average
 * '<S470>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/CutThrottle APP Limiting/Bound APP if overheating
 * '<S471>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Engine Accel/Derivitive3
 * '<S472>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Engine Accel/First Order Low Pass (Tunable)
 * '<S473>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Engine Accel/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S474>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/EngineState/Engine State Machine
 * '<S475>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/EngineState/FuelPulseState
 * '<S476>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/EngineState/TDC_Counter
 * '<S477>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/EngineState/FuelPulseState/CompareTo
 * '<S478>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/EngineState/FuelPulseState/Rising Edge
 * '<S479>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/EngineState/FuelPulseState/WritePulseState
 * '<S480>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/EngineState/TDC_Counter/Crank State
 * '<S481>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Time Since Key On/Time Since Enabled (With Input)2
 * '<S482>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Time Since Run/RunState
 * '<S483>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Time Since Run/Time Since Enabled (With Input)2
 * '<S484>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Time Since Stall/Stall State
 * '<S485>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/RawProcessed/Time Since Stall/Time Since Enabled (With Input)1
 * '<S486>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Virtual Indexes/ECT_KeyUp
 * '<S487>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Virtual Indexes/IAT_KeyUp
 * '<S488>' : BaseEngineController_LS/Foreground/Control/VirtualSensors/Virtual Indexes/MAFPortIndex
 * '<S489>' : BaseEngineController_LS/Foreground/Control/motohawk_function_collector/motohawk_function_collector_in
 * '<S490>' : BaseEngineController_LS/Foreground/Control/motohawk_function_collector/motohawk_function_collector_in/Triggered Subsystem
 * '<S491>' : BaseEngineController_LS/Foreground/Inputs/CAN
 * '<S492>' : BaseEngineController_LS/Foreground/Inputs/Digital
 * '<S493>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed
 * '<S494>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors
 * '<S495>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors
 * '<S496>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors
 * '<S497>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM GPS
 * '<S498>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda
 * '<S499>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization
 * '<S500>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization1
 * '<S501>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization/First Order Low Pass
 * '<S502>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization/If Action Subsystem
 * '<S503>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization/If Action Subsystem1
 * '<S504>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization/If Action Subsystem2
 * '<S505>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization/Override
 * '<S506>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization/First Order Low Pass/First Order Low Pass
 * '<S507>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization/Override/NewValue
 * '<S508>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization/Override/OldValue
 * '<S509>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization1/First Order Low Pass
 * '<S510>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization1/If Action Subsystem
 * '<S511>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization1/If Action Subsystem1
 * '<S512>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization1/If Action Subsystem2
 * '<S513>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization1/Override
 * '<S514>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization1/First Order Low Pass/First Order Low Pass
 * '<S515>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization1/Override/NewValue
 * '<S516>' : BaseEngineController_LS/Foreground/Inputs/CAN/AEM X Lambda/Linear Sensor Characterization1/Override/OldValue
 * '<S517>' : BaseEngineController_LS/Foreground/Inputs/Digital/ACSw
 * '<S518>' : BaseEngineController_LS/Foreground/Inputs/Digital/ClutchSw
 * '<S519>' : BaseEngineController_LS/Foreground/Inputs/Digital/ESTOP
 * '<S520>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor
 * '<S521>' : BaseEngineController_LS/Foreground/Inputs/Digital/Scramble
 * '<S522>' : BaseEngineController_LS/Foreground/Inputs/Digital/VSPD
 * '<S523>' : BaseEngineController_LS/Foreground/Inputs/Digital/VSPD_Filt
 * '<S524>' : BaseEngineController_LS/Foreground/Inputs/Digital/ACSw /Override in Engineering Units
 * '<S525>' : BaseEngineController_LS/Foreground/Inputs/Digital/ACSw /Override in Engineering Units/NewValue
 * '<S526>' : BaseEngineController_LS/Foreground/Inputs/Digital/ACSw /Override in Engineering Units/OldValue
 * '<S527>' : BaseEngineController_LS/Foreground/Inputs/Digital/ClutchSw/Override in Engineering Units
 * '<S528>' : BaseEngineController_LS/Foreground/Inputs/Digital/ClutchSw/Override in Engineering Units/NewValue
 * '<S529>' : BaseEngineController_LS/Foreground/Inputs/Digital/ClutchSw/Override in Engineering Units/OldValue
 * '<S530>' : BaseEngineController_LS/Foreground/Inputs/Digital/ESTOP/Override in Engineering Units
 * '<S531>' : BaseEngineController_LS/Foreground/Inputs/Digital/ESTOP/Override in Engineering Units/NewValue
 * '<S532>' : BaseEngineController_LS/Foreground/Inputs/Digital/ESTOP/Override in Engineering Units/OldValue
 * '<S533>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor/First Order Low Pass
 * '<S534>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor/If Action Subsystem
 * '<S535>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor/If Action Subsystem1
 * '<S536>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor/If Action Subsystem2
 * '<S537>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor/Override
 * '<S538>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor/motohawk_table_1d1
 * '<S539>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor/First Order Low Pass/First Order Low Pass
 * '<S540>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor/Override/NewValue
 * '<S541>' : BaseEngineController_LS/Foreground/Inputs/Digital/MAF_Sensor/Override/OldValue
 * '<S542>' : BaseEngineController_LS/Foreground/Inputs/Digital/Scramble /Button Delay 1
 * '<S543>' : BaseEngineController_LS/Foreground/Inputs/Digital/Scramble /Override in Engineering Units
 * '<S544>' : BaseEngineController_LS/Foreground/Inputs/Digital/Scramble /Button Delay 1/Time Since Enabled (With Input)4
 * '<S545>' : BaseEngineController_LS/Foreground/Inputs/Digital/Scramble /Override in Engineering Units/NewValue
 * '<S546>' : BaseEngineController_LS/Foreground/Inputs/Digital/Scramble /Override in Engineering Units/OldValue
 * '<S547>' : BaseEngineController_LS/Foreground/Inputs/Digital/VSPD/First Order Low Pass
 * '<S548>' : BaseEngineController_LS/Foreground/Inputs/Digital/VSPD/If Action Subsystem
 * '<S549>' : BaseEngineController_LS/Foreground/Inputs/Digital/VSPD/If Action Subsystem1
 * '<S550>' : BaseEngineController_LS/Foreground/Inputs/Digital/VSPD/If Action Subsystem2
 * '<S551>' : BaseEngineController_LS/Foreground/Inputs/Digital/VSPD/Override
 * '<S552>' : BaseEngineController_LS/Foreground/Inputs/Digital/VSPD/motohawk_table_1d1
 * '<S553>' : BaseEngineController_LS/Foreground/Inputs/Digital/VSPD/First Order Low Pass/First Order Low Pass
 * '<S554>' : BaseEngineController_LS/Foreground/Inputs/Digital/VSPD/Override/NewValue
 * '<S555>' : BaseEngineController_LS/Foreground/Inputs/Digital/VSPD/Override/OldValue
 * '<S556>' : BaseEngineController_LS/Foreground/Inputs/Digital/VSPD_Filt/Derivitive
 * '<S557>' : BaseEngineController_LS/Foreground/Inputs/Digital/VSPD_Filt/S-R Flip-Flop
 * '<S558>' : BaseEngineController_LS/Foreground/Inputs/Digital/VSPD_Filt/Time Since Enabled (With Input)1
 * '<S559>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed/Encoder Diagnostics
 * '<S560>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed/First Order Low Pass (Tunable)1
 * '<S561>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/CamEdges
 * '<S562>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/CamSync
 * '<S563>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/CounterThresh
 * '<S564>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/CrankEdges
 * '<S565>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/CrankSync
 * '<S566>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed/Encoder Diagnostics/motohawk_model_probe_eval_f
 * '<S567>' : BaseEngineController_LS/Foreground/Inputs/EngineSpeed/First Order Low Pass (Tunable)1/First Order Low Pass
 * '<S568>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/ACPres
 * '<S569>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor
 * '<S570>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelPres
 * '<S571>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP
 * '<S572>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAPTime
 * '<S573>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP_Crank_Synchronous
 * '<S574>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/OilPres
 * '<S575>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SensVolts
 * '<S576>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SysVolts
 * '<S577>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/ACPres /First Order Low Pass
 * '<S578>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/ACPres /If Action Subsystem
 * '<S579>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/ACPres /If Action Subsystem1
 * '<S580>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/ACPres /If Action Subsystem2
 * '<S581>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/ACPres /Override
 * '<S582>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/ACPres /First Order Low Pass/First Order Low Pass
 * '<S583>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/ACPres /Override/NewValue
 * '<S584>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/ACPres /Override/OldValue
 * '<S585>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options
 * '<S586>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/If Action Subsystem
 * '<S587>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/If Action Subsystem1
 * '<S588>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/If Action Subsystem2
 * '<S589>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Override
 * '<S590>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options/First Order Low Pass
 * '<S591>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options/Moving Average Filter
 * '<S592>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options/Rate Limiter
 * '<S593>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options/First Order Low Pass/First Order Low Pass
 * '<S594>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options/Rate Limiter/Variable Rate Limiter
 * '<S595>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Filter Options/Rate Limiter/Variable Rate Limiter/Saturation
 * '<S596>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Override/NewValue
 * '<S597>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelOxygenationSensor/Override/OldValue
 * '<S598>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelPres/First Order Low Pass
 * '<S599>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelPres/If Action Subsystem
 * '<S600>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelPres/If Action Subsystem1
 * '<S601>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelPres/If Action Subsystem2
 * '<S602>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelPres/Override
 * '<S603>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelPres/First Order Low Pass/First Order Low Pass
 * '<S604>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelPres/Override/NewValue
 * '<S605>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/FuelPres/Override/OldValue
 * '<S606>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP/First Order Low Pass
 * '<S607>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP/If Action Subsystem
 * '<S608>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP/If Action Subsystem1
 * '<S609>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP/If Action Subsystem2
 * '<S610>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP/Override
 * '<S611>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP/First Order Low Pass/First Order Low Pass
 * '<S612>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP/Override/NewValue
 * '<S613>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP/Override/OldValue
 * '<S614>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAPTime/First Order Low Pass
 * '<S615>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAPTime/If Action Subsystem
 * '<S616>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAPTime/If Action Subsystem1
 * '<S617>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAPTime/If Action Subsystem2
 * '<S618>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAPTime/Override
 * '<S619>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAPTime/First Order Low Pass/First Order Low Pass
 * '<S620>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAPTime/Override/NewValue
 * '<S621>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAPTime/Override/OldValue
 * '<S622>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP_Crank_Synchronous/MID_TDC
 * '<S623>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/MAP_Crank_Synchronous/Once at Startup
 * '<S624>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/OilPres/First Order Low Pass
 * '<S625>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/OilPres/If Action Subsystem
 * '<S626>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/OilPres/If Action Subsystem1
 * '<S627>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/OilPres/If Action Subsystem2
 * '<S628>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/OilPres/Override
 * '<S629>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/OilPres/First Order Low Pass/First Order Low Pass
 * '<S630>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/OilPres/Override/NewValue
 * '<S631>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/OilPres/Override/OldValue
 * '<S632>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SensVolts/First Order Low Pass
 * '<S633>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SensVolts/If Action Subsystem
 * '<S634>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SensVolts/If Action Subsystem1
 * '<S635>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SensVolts/If Action Subsystem2
 * '<S636>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SensVolts/Override
 * '<S637>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SensVolts/First Order Low Pass/First Order Low Pass
 * '<S638>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SensVolts/Override/NewValue
 * '<S639>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SensVolts/Override/OldValue
 * '<S640>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SysVolts/First Order Low Pass
 * '<S641>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SysVolts/If Action Subsystem
 * '<S642>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SysVolts/If Action Subsystem1
 * '<S643>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SysVolts/If Action Subsystem2
 * '<S644>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SysVolts/Override
 * '<S645>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SysVolts/First Order Low Pass/First Order Low Pass
 * '<S646>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SysVolts/Override/NewValue
 * '<S647>' : BaseEngineController_LS/Foreground/Inputs/LinearSensors/SysVolts/Override/OldValue
 * '<S648>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Fuel Level
 * '<S649>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors
 * '<S650>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Fuel Level/Fuel_Lvl
 * '<S651>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Fuel Level/Fuel_Lvl  /First Order Low Pass
 * '<S652>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Fuel Level/Fuel_Lvl  /If Action Subsystem
 * '<S653>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Fuel Level/Fuel_Lvl  /If Action Subsystem1
 * '<S654>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Fuel Level/Fuel_Lvl  /If Action Subsystem2
 * '<S655>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Fuel Level/Fuel_Lvl  /Override
 * '<S656>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Fuel Level/Fuel_Lvl  /motohawk_table_1d1
 * '<S657>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Fuel Level/Fuel_Lvl  /First Order Low Pass/First Order Low Pass
 * '<S658>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Fuel Level/Fuel_Lvl  /Override/NewValue
 * '<S659>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Fuel Level/Fuel_Lvl  /Override/OldValue
 * '<S660>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/CAT1
 * '<S661>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT
 * '<S662>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP
 * '<S663>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT
 * '<S664>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/CAT1/First Order Low Pass
 * '<S665>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/CAT1/If Action Subsystem
 * '<S666>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/CAT1/If Action Subsystem1
 * '<S667>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/CAT1/If Action Subsystem2
 * '<S668>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/CAT1/Override
 * '<S669>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/CAT1/motohawk_table_1d1
 * '<S670>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/CAT1/First Order Low Pass/First Order Low Pass
 * '<S671>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/CAT1/Override/NewValue
 * '<S672>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/CAT1/Override/OldValue
 * '<S673>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /First Order Low Pass
 * '<S674>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /If Action Subsystem
 * '<S675>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /If Action Subsystem1
 * '<S676>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /If Action Subsystem2
 * '<S677>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /Override
 * '<S678>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /motohawk_table_1d1
 * '<S679>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /First Order Low Pass/First Order Low Pass
 * '<S680>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /Override/NewValue
 * '<S681>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/ECT /Override/OldValue
 * '<S682>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /First Order Low Pass
 * '<S683>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /If Action Subsystem
 * '<S684>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /If Action Subsystem1
 * '<S685>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /If Action Subsystem2
 * '<S686>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /Override
 * '<S687>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /motohawk_table_1d1
 * '<S688>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /First Order Low Pass/First Order Low Pass
 * '<S689>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /Override/NewValue
 * '<S690>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/EVAP /Override/OldValue
 * '<S691>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /First Order Low Pass
 * '<S692>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /If Action Subsystem
 * '<S693>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /If Action Subsystem1
 * '<S694>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /If Action Subsystem2
 * '<S695>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /Override
 * '<S696>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /motohawk_table_1d1
 * '<S697>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /First Order Low Pass/First Order Low Pass
 * '<S698>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /Override/NewValue
 * '<S699>' : BaseEngineController_LS/Foreground/Inputs/NonLinearSensors/Temp Sensors/IAT /Override/OldValue
 * '<S700>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1
 * '<S701>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1ForcedAdapt
 * '<S702>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2
 * '<S703>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2ForcedAdapt
 * '<S704>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt
 * '<S705>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1
 * '<S706>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1
 * '<S707>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2
 * '<S708>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1/First Order Low Pass
 * '<S709>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1/If Action Subsystem
 * '<S710>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1/If Action Subsystem1
 * '<S711>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1/If Action Subsystem2
 * '<S712>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1/Override
 * '<S713>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1/Saturation
 * '<S714>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1/motohawk_table_1d1
 * '<S715>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1/First Order Low Pass/First Order Low Pass
 * '<S716>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1/Override/NewValue
 * '<S717>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1/Override/OldValue
 * '<S718>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1ForcedAdapt/Function-Call Subsystem
 * '<S719>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP1ForcedAdapt/Function-Call Subsystem/First Time
 * '<S720>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2/First Order Low Pass
 * '<S721>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2/If Action Subsystem
 * '<S722>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2/If Action Subsystem1
 * '<S723>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2/If Action Subsystem2
 * '<S724>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2/Override
 * '<S725>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2/Saturation
 * '<S726>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2/motohawk_table_1d1
 * '<S727>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2/First Order Low Pass/First Order Low Pass
 * '<S728>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2/Override/NewValue
 * '<S729>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2/Override/OldValue
 * '<S730>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2ForcedAdapt/Function-Call Subsystem
 * '<S731>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/APP2ForcedAdapt/Function-Call Subsystem/First Time
 * '<S732>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/ADAPT SCALING
 * '<S733>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/FAULTS
 * '<S734>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/First Order Low Pass
 * '<S735>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/SENSOR FAULT MANAGER
 * '<S736>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/Saturation
 * '<S737>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/ADAPT SCALING/ADAPT HI
 * '<S738>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/ADAPT SCALING/ADAPT LO
 * '<S739>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/ADAPT SCALING/MinMaxFilter
 * '<S740>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/ADAPT SCALING/ADAPT HI/Store Current Position
 * '<S741>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/ADAPT SCALING/ADAPT LO/Store Current Position
 * '<S742>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/First Order Low Pass/First Order Low Pass
 * '<S743>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/SENSOR FAULT MANAGER/If Action Subsystem
 * '<S744>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/SENSOR FAULT MANAGER/If Action Subsystem1
 * '<S745>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/SENSOR FAULT MANAGER/If Action Subsystem2
 * '<S746>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/SENSOR FAULT MANAGER/Override
 * '<S747>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/SENSOR FAULT MANAGER/Override/NewValue
 * '<S748>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt/SENSOR FAULT MANAGER/Override/OldValue
 * '<S749>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/ADAPT SCALING
 * '<S750>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/FAULTS
 * '<S751>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/First Order Low Pass
 * '<S752>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/SENSOR FAULT MANAGER
 * '<S753>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/Saturation
 * '<S754>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/ADAPT SCALING/ADAPT HI
 * '<S755>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/ADAPT SCALING/ADAPT LO
 * '<S756>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/ADAPT SCALING/MinMaxFilter
 * '<S757>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/ADAPT SCALING/ADAPT HI/Store Current Position
 * '<S758>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/ADAPT SCALING/ADAPT LO/Store Current Position
 * '<S759>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/First Order Low Pass/First Order Low Pass
 * '<S760>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/SENSOR FAULT MANAGER/If Action Subsystem
 * '<S761>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/SENSOR FAULT MANAGER/If Action Subsystem1
 * '<S762>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/SENSOR FAULT MANAGER/If Action Subsystem2
 * '<S763>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/SENSOR FAULT MANAGER/Override
 * '<S764>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/SENSOR FAULT MANAGER/Override/NewValue
 * '<S765>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/Linear Sensor Characterization w Adapt1/SENSOR FAULT MANAGER/Override/OldValue
 * '<S766>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/ADAPT SCALING
 * '<S767>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/FAULTS
 * '<S768>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/First Order Low Pass
 * '<S769>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER
 * '<S770>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/Saturation
 * '<S771>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/ADAPT SCALING/ADAPT HI
 * '<S772>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/ADAPT SCALING/ADAPT LO
 * '<S773>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/ADAPT SCALING/MinMaxFilter
 * '<S774>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/ADAPT SCALING/ADAPT HI/Store Current Position
 * '<S775>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/ADAPT SCALING/ADAPT LO/Store Current Position
 * '<S776>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/First Order Low Pass/First Order Low Pass
 * '<S777>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER/If Action Subsystem
 * '<S778>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER/If Action Subsystem1
 * '<S779>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER/If Action Subsystem2
 * '<S780>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER/Override
 * '<S781>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER/Override/NewValue
 * '<S782>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS1/SENSOR FAULT MANAGER/Override/OldValue
 * '<S783>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/ADAPT SCALING
 * '<S784>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/FAULTS
 * '<S785>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/First Order Low Pass
 * '<S786>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER
 * '<S787>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/Saturation
 * '<S788>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/ADAPT SCALING/ADAPT HI
 * '<S789>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/ADAPT SCALING/ADAPT LO
 * '<S790>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/ADAPT SCALING/MinMaxFilter
 * '<S791>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/ADAPT SCALING/ADAPT HI/Store Current Position
 * '<S792>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/ADAPT SCALING/ADAPT LO/Store Current Position
 * '<S793>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/First Order Low Pass/First Order Low Pass
 * '<S794>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER/If Action Subsystem
 * '<S795>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER/If Action Subsystem1
 * '<S796>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER/If Action Subsystem2
 * '<S797>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER/Override
 * '<S798>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER/Override/NewValue
 * '<S799>' : BaseEngineController_LS/Foreground/Inputs/PotentiometerSensors/TPS2/SENSOR FAULT MANAGER/Override/OldValue
 * '<S800>' : BaseEngineController_LS/Foreground/Outputs/AC Control
 * '<S801>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash
 * '<S802>' : BaseEngineController_LS/Foreground/Outputs/Coil Control
 * '<S803>' : BaseEngineController_LS/Foreground/Outputs/ETC_CutPower
 * '<S804>' : BaseEngineController_LS/Foreground/Outputs/FAN Control
 * '<S805>' : BaseEngineController_LS/Foreground/Outputs/FuelPump
 * '<S806>' : BaseEngineController_LS/Foreground/Outputs/HBridge
 * '<S807>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control
 * '<S808>' : BaseEngineController_LS/Foreground/Outputs/Injector Control
 * '<S809>' : BaseEngineController_LS/Foreground/Outputs/WASTEGATE-Control
 * '<S810>' : BaseEngineController_LS/Foreground/Outputs/AC Control/Discrete Actuator - AC
 * '<S811>' : BaseEngineController_LS/Foreground/Outputs/AC Control/Discrete Actuator - AC/Override in Engineering Units
 * '<S812>' : BaseEngineController_LS/Foreground/Outputs/AC Control/Discrete Actuator - AC/Override in Engineering Units/NewValue
 * '<S813>' : BaseEngineController_LS/Foreground/Outputs/AC Control/Discrete Actuator - AC/Override in Engineering Units/OldValue
 * '<S814>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Custom 1
 * '<S815>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 1
 * '<S816>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 2
 * '<S817>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 3
 * '<S818>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 4
 * '<S819>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 5
 * '<S820>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 6
 * '<S821>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 7
 * '<S822>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 8
 * '<S823>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message Boost
 * '<S824>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message DBW
 * '<S825>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 1/First Order Low Pass (Tunable)
 * '<S826>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 1/RPM_Filt
 * '<S827>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 1/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S828>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 1/RPM_Filt/First Order Low Pass (Tunable)
 * '<S829>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 1/RPM_Filt/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S830>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/First Order Low Pass (Tunable)
 * '<S831>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/First Order Low Pass (Tunable)1
 * '<S832>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/First Order Low Pass (Tunable)2
 * '<S833>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/PHI_Filt
 * '<S834>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/PHI_Filt1
 * '<S835>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S836>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/First Order Low Pass (Tunable)1/First Order Low Pass
 * '<S837>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/First Order Low Pass (Tunable)2/First Order Low Pass
 * '<S838>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/PHI_Filt/DecreasingFilter
 * '<S839>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/PHI_Filt/First Order Low Pass
 * '<S840>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/PHI_Filt/IncreasingFilter
 * '<S841>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/PHI_Filt1/DecreasingFilter
 * '<S842>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/PHI_Filt1/First Order Low Pass
 * '<S843>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 2/PHI_Filt1/IncreasingFilter
 * '<S844>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 3/
 * '<S845>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 3/
 * '<S846>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 3/ 1
 * '<S847>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 3/First Order Low Pass (Tunable)
 * '<S848>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 3/First Order Low Pass (Tunable)1
 * '<S849>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 3/First Order Low Pass (Tunable)2
 * '<S850>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 3/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S851>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 3/First Order Low Pass (Tunable)1/First Order Low Pass
 * '<S852>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 3/First Order Low Pass (Tunable)2/First Order Low Pass
 * '<S853>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 6/First Order Low Pass (Tunable)
 * '<S854>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message 6/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S855>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message DBW/First Order Low Pass (Tunable)
 * '<S856>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message DBW/First Order Low Pass (Tunable)1
 * '<S857>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message DBW/First Order Low Pass (Tunable)/First Order Low Pass
 * '<S858>' : BaseEngineController_LS/Foreground/Outputs/AEM Infinity Dash/Dash Message DBW/First Order Low Pass (Tunable)1/First Order Low Pass
 * '<S859>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/Coil Enable Manager
 * '<S860>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management
 * '<S861>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/motohawk_override_rel
 * '<S862>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/motohawk_override_rel1
 * '<S863>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/Coil Enable Manager/CompareTo
 * '<S864>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/Coil Enable Manager/EST Enable TDC Counter
 * '<S865>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/Coil Enable Manager/EST Enable TDC Counter/EST Enable TDC Counter Stateflow
 * '<S866>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/Coil Enable Manager/EST Enable TDC Counter/TDC_Counter
 * '<S867>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo
 * '<S868>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo1
 * '<S869>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo10
 * '<S870>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo11
 * '<S871>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo12
 * '<S872>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo13
 * '<S873>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo14
 * '<S874>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo15
 * '<S875>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo2
 * '<S876>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo3
 * '<S877>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo4
 * '<S878>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo5
 * '<S879>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo6
 * '<S880>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo7
 * '<S881>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo8
 * '<S882>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/EST Fault Management/CompareTo9
 * '<S883>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/motohawk_override_rel/NewValue
 * '<S884>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/motohawk_override_rel/OldValue
 * '<S885>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/motohawk_override_rel1/NewValue
 * '<S886>' : BaseEngineController_LS/Foreground/Outputs/Coil Control/motohawk_override_rel1/OldValue
 * '<S887>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/IAC-P-CONTROL
 * '<S888>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/IAC-P-CONTROL1
 * '<S889>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/IAC-P-CONTROL/Saturation
 * '<S890>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/IAC-P-CONTROL/motohawk_override_abs2
 * '<S891>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/IAC-P-CONTROL/motohawk_override_abs2/NewValue
 * '<S892>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/IAC-P-CONTROL/motohawk_override_abs2/OldValue
 * '<S893>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/IAC-P-CONTROL1/Saturation
 * '<S894>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/IAC-P-CONTROL1/motohawk_override_abs2
 * '<S895>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/IAC-P-CONTROL1/motohawk_override_abs2/NewValue
 * '<S896>' : BaseEngineController_LS/Foreground/Outputs/FAN Control/IAC-P-CONTROL1/motohawk_override_abs2/OldValue
 * '<S897>' : BaseEngineController_LS/Foreground/Outputs/FuelPump/Discrete Actuator - FUELP
 * '<S898>' : BaseEngineController_LS/Foreground/Outputs/FuelPump/Discrete Actuator - FUELP/Override in Engineering Units
 * '<S899>' : BaseEngineController_LS/Foreground/Outputs/FuelPump/Discrete Actuator - FUELP/Override in Engineering Units/NewValue
 * '<S900>' : BaseEngineController_LS/Foreground/Outputs/FuelPump/Discrete Actuator - FUELP/Override in Engineering Units/OldValue
 * '<S901>' : BaseEngineController_LS/Foreground/Outputs/HBridge/Time Since Enabled (With Input)1
 * '<S902>' : BaseEngineController_LS/Foreground/Outputs/HBridge/motohawk_override_abs2
 * '<S903>' : BaseEngineController_LS/Foreground/Outputs/HBridge/motohawk_override_abs2/NewValue
 * '<S904>' : BaseEngineController_LS/Foreground/Outputs/HBridge/motohawk_override_abs2/OldValue
 * '<S905>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control/IAC-P-CONTROL
 * '<S906>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control/IAC-S-CONTROL
 * '<S907>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control/IAC-P-CONTROL/Saturation
 * '<S908>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control/IAC-P-CONTROL/motohawk_override_abs2
 * '<S909>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control/IAC-P-CONTROL/motohawk_override_abs2/NewValue
 * '<S910>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control/IAC-P-CONTROL/motohawk_override_abs2/OldValue
 * '<S911>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control/IAC-S-CONTROL/Saturation
 * '<S912>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control/IAC-S-CONTROL/motohawk_override_abs2
 * '<S913>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control/IAC-S-CONTROL/motohawk_override_abs2/NewValue
 * '<S914>' : BaseEngineController_LS/Foreground/Outputs/IAC-Control/IAC-S-CONTROL/motohawk_override_abs2/OldValue
 * '<S915>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/Injector Diagnostics
 * '<S916>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/Injector Enable Manager
 * '<S917>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs1
 * '<S918>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs2
 * '<S919>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs3
 * '<S920>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs4
 * '<S921>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs5
 * '<S922>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs6
 * '<S923>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/Injector Enable Manager/Stall
 * '<S924>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/Injector Enable Manager/Time Since Enabled (With Input)1
 * '<S925>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs1/NewValue
 * '<S926>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs1/OldValue
 * '<S927>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs2/NewValue
 * '<S928>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs2/OldValue
 * '<S929>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs3/NewValue
 * '<S930>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs3/OldValue
 * '<S931>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs4/NewValue
 * '<S932>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs4/OldValue
 * '<S933>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs5/NewValue
 * '<S934>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs5/OldValue
 * '<S935>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs6/NewValue
 * '<S936>' : BaseEngineController_LS/Foreground/Outputs/Injector Control/motohawk_override_abs6/OldValue
 * '<S937>' : BaseEngineController_LS/Foreground/Outputs/WASTEGATE-Control/PWM Characterization
 * '<S938>' : BaseEngineController_LS/Foreground/Outputs/WASTEGATE-Control/PWM Characterization/Saturation
 * '<S939>' : BaseEngineController_LS/Foreground/Outputs/WASTEGATE-Control/PWM Characterization/motohawk_override_abs2
 * '<S940>' : BaseEngineController_LS/Foreground/Outputs/WASTEGATE-Control/PWM Characterization/motohawk_override_abs2/NewValue
 * '<S941>' : BaseEngineController_LS/Foreground/Outputs/WASTEGATE-Control/PWM Characterization/motohawk_override_abs2/OldValue
 * '<S942>' : BaseEngineController_LS/Main Power Relay/Main Power Relay
 * '<S943>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Display Variable Event Boolean
 * '<S944>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Display Variable Event Function-Call
 * '<S945>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Display Variable Event Function-Call1
 * '<S946>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ECUP Latch
 * '<S947>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Forced Shutdown Process
 * '<S948>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/On Off Delay
 * '<S949>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes
 * '<S950>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Time Since Enabled (With Input)1
 * '<S951>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/motohawk_restore_nvmem
 * '<S952>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/motohawk_store_nvmem
 * '<S953>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Display Variable Event Function-Call/Clear
 * '<S954>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Display Variable Event Function-Call1/Clear
 * '<S955>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Forced Shutdown Process/Post Shutdown two ticks before MPRD off
 * '<S956>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Forced Shutdown Process/Processor Reboot
 * '<S957>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Forced Shutdown Process/Save NV Vars one tick before MPRD off
 * '<S958>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Forced Shutdown Process/Shutdown power on ECU565//563
 * '<S959>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Forced Shutdown Process/Time Since Enabled (With Input)1
 * '<S960>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Forced Shutdown Process/Post Shutdown two ticks before MPRD off/Post Shutdown two ticks before MPRD off
 * '<S961>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Forced Shutdown Process/Save NV Vars one tick before MPRD off/Save NV Vars one tick before MPRD off
 * '<S962>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/Forced Shutdown Process/Shutdown power on ECU565//563/Shutdown power on ECU565-128
 * '<S963>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/On Off Delay/S-R Flip-Flop
 * '<S964>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/Post Shutdown two ticks before MPRD off
 * '<S965>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/Processor Reboot
 * '<S966>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/Save NV Vars one tick before MPRD off
 * '<S967>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/Shutdown power on ECU565//563
 * '<S968>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/motohawk_override_abs
 * '<S969>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/Post Shutdown two ticks before MPRD off/Post Shutdown two ticks before MPRD off
 * '<S970>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/Save NV Vars one tick before MPRD off/Save NV Vars one tick before MPRD off
 * '<S971>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/Shutdown power on ECU565//563/Shutdown power on ECU565-128
 * '<S972>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/motohawk_override_abs/NewValue
 * '<S973>' : BaseEngineController_LS/Main Power Relay/Main Power Relay/ShutDown Processes/motohawk_override_abs/OldValue
 */
#endif                                 /* RTW_HEADER_BaseEngineController_LS_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
