/*
 * File: BaseEngineController_LS.c
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

#include "BaseEngineController_LS.h"
#include "BaseEngineController_LS_private.h"

/* Named constants for Stateflow: '<S914>/ECUP Latch' */
#define BaseEngineController_LS_IN_PowerDown (1U)
#define BaseEngineController_LS_IN_PowerUp (2U)

/* Block signals (auto storage) */
BlockIO_BaseEngineController_LS BaseEngineController_LS_B;

/* Block states (auto storage) */
D_Work_BaseEngineController_LS BaseEngineController_LS_DWork;

/* Previous zero-crossings (trigger) states */
PrevZCSigStates_BaseEngineController_LS BaseEngineController_LS_PrevZCSigState;

/* Real-time model */
RT_MODEL_BaseEngineController_LS BaseEngineController_LS_M_;
RT_MODEL_BaseEngineController_LS *const BaseEngineController_LS_M =
  &BaseEngineController_LS_M_;

/* Output and update for function-call system: '<S4>/CCP Daq Processing' */
void BaseEngineController_LS_CCPDaqProcessing(int_T controlPortIdx)
{
  /* local block i/o variables */
  int8_T rtb_f_l[8];
  int32_T i;

  /* Outputs for Function Call SubSystem: '<S4>/CCP Daq Processing' incorporates:
   *  TriggerPort: '<S7>/f'
   */
  for (i = 0; i < 8; i++) {
    rtb_f_l[i] = 0;
  }

  rtb_f_l[controlPortIdx] = 2;

  /* <S7>/motohawk_sfun_ccp_protocol: CCP Protocol CCP1 */
  {
    extern S_CCPHandlerInstance mh_CCP1_CCPHandlerInstance;
    extern S_CCPHandlerConfig mh_CCP1_CCPHandlerConfig;

    /* Tick */
    mh_ProcessCCPTick(rtb_f_l, &mh_CCP1_CCPHandlerConfig,
                      &mh_CCP1_CCPHandlerInstance);
  }
}

/* Model step function */
void BaseEngineController_LS_step(void)
{
  /* S-Function (motohawk_sfun_trigger): '<S1>/motohawk_trigger1' */
  /* Enable for Trigger_IDLE_EVENT_9p001 */
  if (BaseEngineController_LS_DWork.s1_motohawk_trigger1_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s1_motohawk_trigger1_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger1' */
  /* Enable for Trigger_FGND_RTI_PERIODIC_13778p0001 */
  if (BaseEngineController_LS_DWork.s5_motohawk_trigger1_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s5_motohawk_trigger1_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger' */
  /* Enable for Trigger_FGND_5XRTI_PERIODIC_13777p0001 */
  if (BaseEngineController_LS_DWork.s5_motohawk_trigger_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s5_motohawk_trigger_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger2' */
  /* Enable for Trigger_FGND_MID_TDC_EVENT_13779p0001 */
  if (BaseEngineController_LS_DWork.s5_motohawk_trigger2_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s5_motohawk_trigger2_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger3' */
  /* Enable for Trigger_FGND_20XRTI_PERIODIC_13780p0001 */
  if (BaseEngineController_LS_DWork.s5_motohawk_trigger3_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s5_motohawk_trigger3_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger4' */
  /* Enable for Trigger_BGND_BASE_PERIODIC_13781p0001 */
  if (BaseEngineController_LS_DWork.s5_motohawk_trigger4_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s5_motohawk_trigger4_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger5' */
  /* Enable for Trigger_BGND_BASEx2_PERIODIC_13782p0001 */
  if (BaseEngineController_LS_DWork.s5_motohawk_trigger5_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s5_motohawk_trigger5_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger6' */
  /* Enable for Trigger_BGND_BASEx10_PERIODIC_13783p0001 */
  if (BaseEngineController_LS_DWork.s5_motohawk_trigger6_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s5_motohawk_trigger6_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger7' */
  /* Enable for Trigger_ONE_SECOND_EVENT_13784p0001 */
  if (BaseEngineController_LS_DWork.s5_motohawk_trigger7_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s5_motohawk_trigger7_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S4>/motohawk_trigger1' */
  /* Enable for Trigger_IDLE_EVENT_13702p0001 */
  if (BaseEngineController_LS_DWork.s4_motohawk_trigger1_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s4_motohawk_trigger1_DWORK1 = 1;
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The resolution of this integer timer is 1.0E-6, which is the step size
   * of the task. Size of "clockTick0" ensures timer will not overflow during the
   * application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  BaseEngineController_LS_M->Timing.clockTick0++;
  if (!BaseEngineController_LS_M->Timing.clockTick0) {
    BaseEngineController_LS_M->Timing.clockTickH0++;
  }
}

/* Model initialize function */
void BaseEngineController_LS_initialize(boolean_T firstTime)
{
  (void)firstTime;

  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)BaseEngineController_LS_M, 0,
                sizeof(RT_MODEL_BaseEngineController_LS));
  rtmSetFirstInitCond(BaseEngineController_LS_M, 1);

  /* block I/O */
  (void) memset(((void *) &BaseEngineController_LS_B), 0,
                sizeof(BlockIO_BaseEngineController_LS));

  {
    int_T i;
    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_B.s135_FPC[i] = 0.0;
    }

    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_B.s72_Sum[i] = 0.0;
    }

    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_B.s21_MinMax[i] = 0.0;
    }

    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_B.s21_Gain[i] = 0.0;
    }

    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_B.s326_Defaultifnoflow[i] = 0.0;
    }

    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_B.s343_Sum1[i] = 0.0;
    }

    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_B.s342_chargemass[i] = 0.0;
    }

    BaseEngineController_LS_B.s722_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_B.s701_Switch = 0.0;
    BaseEngineController_LS_B.s745_MinMax = 0.0;
    BaseEngineController_LS_B.s745_MinMax1 = 0.0;
    BaseEngineController_LS_B.s749_MinMax1 = 0.0;
    BaseEngineController_LS_B.s720_Merge = 0.0;
    BaseEngineController_LS_B.s759_Merge = 0.0;
    BaseEngineController_LS_B.s710_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_B.s700_Switch = 0.0;
    BaseEngineController_LS_B.s728_MinMax = 0.0;
    BaseEngineController_LS_B.s728_MinMax1 = 0.0;
    BaseEngineController_LS_B.s732_MinMax1 = 0.0;
    BaseEngineController_LS_B.s708_Merge = 0.0;
    BaseEngineController_LS_B.s742_Merge = 0.0;
    BaseEngineController_LS_B.s409_Switch1 = 0.0;
    BaseEngineController_LS_B.s434_Sum = 0.0;
    BaseEngineController_LS_B.s445_RPMInst = 0.0;
    BaseEngineController_LS_B.s449_DataTypeConversion = 0.0;
    BaseEngineController_LS_B.s444_Gain1 = 0.0;
    BaseEngineController_LS_B.s479_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_B.s502_Sum1 = 0.0;
    BaseEngineController_LS_B.s478_Merge = 0.0;
    BaseEngineController_LS_B.s515_Merge = 0.0;
    BaseEngineController_LS_B.s501_Sum1 = 0.0;
    BaseEngineController_LS_B.s702_Switch = 0.0;
    BaseEngineController_LS_B.s762_MinMax = 0.0;
    BaseEngineController_LS_B.s762_MinMax1 = 0.0;
    BaseEngineController_LS_B.s766_MinMax1 = 0.0;
    BaseEngineController_LS_B.s703_Switch = 0.0;
    BaseEngineController_LS_B.s779_MinMax = 0.0;
    BaseEngineController_LS_B.s779_MinMax1 = 0.0;
    BaseEngineController_LS_B.s783_MinMax1 = 0.0;
    BaseEngineController_LS_B.s776_Merge = 0.0;
    BaseEngineController_LS_B.s793_Merge = 0.0;
    BaseEngineController_LS_B.s416_Switch2 = 0.0;
    BaseEngineController_LS_B.s503_Sum1 = 0.0;
    BaseEngineController_LS_B.s523_Merge = 0.0;
    BaseEngineController_LS_B.s582_ReadCANMessage1_o2 = 0.0;
    BaseEngineController_LS_B.s582_ReadCANMessage1_o3 = 0.0;
    BaseEngineController_LS_B.s582_ReadCANMessage1_o4 = 0.0;
    BaseEngineController_LS_B.s582_ReadCANMessage1_o5 = 0.0;
    BaseEngineController_LS_B.s582_ReadCANMessage1_o6 = 0.0;
    BaseEngineController_LS_B.s582_ReadCANMessage1_o7 = 0.0;
    BaseEngineController_LS_B.s582_ReadCANMessage1_o8 = 0.0;
    BaseEngineController_LS_B.s582_ReadCANMessage1_o9 = 0.0;
    BaseEngineController_LS_B.s582_ReadCANMessage1_o10 = 0.0;
    BaseEngineController_LS_B.s582_MathFunction1 = 0.0;
    BaseEngineController_LS_B.s585_Sum1 = 0.0;
    BaseEngineController_LS_B.s616_Merge = 0.0;
    BaseEngineController_LS_B.s582_ReadCANMessage_o2 = 0.0;
    BaseEngineController_LS_B.s582_ReadCANMessage_o3 = 0.0;
    BaseEngineController_LS_B.s582_ReadCANMessage_o4 = 0.0;
    BaseEngineController_LS_B.s582_ReadCANMessage_o5 = 0.0;
    BaseEngineController_LS_B.s582_ReadCANMessage_o6 = 0.0;
    BaseEngineController_LS_B.s582_ReadCANMessage_o7 = 0.0;
    BaseEngineController_LS_B.s582_ReadCANMessage_o8 = 0.0;
    BaseEngineController_LS_B.s582_ReadCANMessage_o9 = 0.0;
    BaseEngineController_LS_B.s582_ReadCANMessage_o10 = 0.0;
    BaseEngineController_LS_B.s582_MathFunction = 0.0;
    BaseEngineController_LS_B.s584_Sum1 = 0.0;
    BaseEngineController_LS_B.s608_Merge = 0.0;
    BaseEngineController_LS_B.s582_Gain = 0.0;
    BaseEngineController_LS_B.s414_Sum1 = 0.0;
    BaseEngineController_LS_B.s436_Switch = 0.0;
    BaseEngineController_LS_B.s510_Sum1 = 0.0;
    BaseEngineController_LS_B.s578_Merge = 0.0;
    BaseEngineController_LS_B.s507_Merge = 0.0;
    BaseEngineController_LS_B.s505_Sum1 = 0.0;
    BaseEngineController_LS_B.s544_Merge = 0.0;
    BaseEngineController_LS_B.s367_motohawk_delta_time = 0.0;
    BaseEngineController_LS_B.s506_Sum1 = 0.0;
    BaseEngineController_LS_B.s376_Sum = 0.0;
    BaseEngineController_LS_B.s375_motohawk_interpolation_2d2 = 0.0;
    BaseEngineController_LS_B.s375_Sum = 0.0;
    BaseEngineController_LS_B.s375_NominalAirFlowRate = 0.0;
    BaseEngineController_LS_B.s375_ModelAirMassFlowRate = 0.0;
    BaseEngineController_LS_B.s444_Gain = 0.0;
    BaseEngineController_LS_B.s470_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_B.s469_Merge = 0.0;
    BaseEngineController_LS_B.s375_MultiportSwitch = 0.0;
    BaseEngineController_LS_B.s387_Merge = 0.0;
    BaseEngineController_LS_B.s390_Sum1 = 0.0;
    BaseEngineController_LS_B.s388_Merge = 0.0;
    BaseEngineController_LS_B.s393_Sum1 = 0.0;
    BaseEngineController_LS_B.s430_Sum1 = 0.0;
    BaseEngineController_LS_B.s450_DataTypeConversion = 0.0;
    BaseEngineController_LS_B.s454_DataTypeConversion = 0.0;
    BaseEngineController_LS_B.s552_Merge = 0.0;
    BaseEngineController_LS_B.s413_MultiportSwitch = 0.0;
    BaseEngineController_LS_B.s135_SparkAdv = 0.0;
    BaseEngineController_LS_B.s504_Sum1 = 0.0;
    BaseEngineController_LS_B.s508_Sum1 = 0.0;
    BaseEngineController_LS_B.s135_FAN1 = 0.0;
    BaseEngineController_LS_B.s135_FAN2 = 0.0;
    BaseEngineController_LS_B.s536_Merge = 0.0;
    BaseEngineController_LS_B.s562_Merge = 0.0;
    BaseEngineController_LS_B.s135_SparkEnergy = 0.0;
    BaseEngineController_LS_B.s861_MinMax1 = 0.0;
    BaseEngineController_LS_B.s865_MinMax1 = 0.0;
    BaseEngineController_LS_B.s438_Switch = 0.0;
    BaseEngineController_LS_B.s135_Throttle = 0.0;
    BaseEngineController_LS_B.s802_ETC = 0.0;
    BaseEngineController_LS_B.s135_IACP = 0.0;
    BaseEngineController_LS_B.s879_MinMax1 = 0.0;
    BaseEngineController_LS_B.s135_IACS = 0.0;
    BaseEngineController_LS_B.s883_MinMax1 = 0.0;
    BaseEngineController_LS_B.s135_SOI = 0.0;
    BaseEngineController_LS_B.s64_constreftoatm = 0.0;
    BaseEngineController_LS_B.s135_FuelMult = 0.0;
    BaseEngineController_LS_B.s21_Sum2 = 0.0;
    BaseEngineController_LS_B.s21_Sum1 = 0.0;
    BaseEngineController_LS_B.s135_MakeUpEOI = 0.0;
    BaseEngineController_LS_B.s135_WASTEGATE = 0.0;
    BaseEngineController_LS_B.s910_MinMax1 = 0.0;
    BaseEngineController_LS_B.s414_Sum3 = 0.0;
    BaseEngineController_LS_B.s412_Sum3 = 0.0;
    BaseEngineController_LS_B.s509_Sum1 = 0.0;
    BaseEngineController_LS_B.s570_Merge = 0.0;
    BaseEngineController_LS_B.s825_Sum = 0.0;
    BaseEngineController_LS_B.s826_Sum = 0.0;
    BaseEngineController_LS_B.s828_CrankCounter = 0.0;
    BaseEngineController_LS_B.s674_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_B.s657_Merge = 0.0;
    BaseEngineController_LS_B.s673_Merge = 0.0;
    BaseEngineController_LS_B.s692_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_B.s659_Merge = 0.0;
    BaseEngineController_LS_B.s691_Merge = 0.0;
    BaseEngineController_LS_B.s683_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_B.s682_Merge = 0.0;
    BaseEngineController_LS_B.s665_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_B.s664_Merge = 0.0;
    BaseEngineController_LS_B.s406_Merge = 0.0;
    BaseEngineController_LS_B.s423_Sum2 = 0.0;
    BaseEngineController_LS_B.s372_Timer = 0.0;
    BaseEngineController_LS_B.s320_UnitDelay = 0.0;
    BaseEngineController_LS_B.s310_Product1 = 0.0;
    BaseEngineController_LS_B.s310_Switch = 0.0;
    BaseEngineController_LS_B.s321_etc = 0.0;
    BaseEngineController_LS_B.s145_MultiportSwitch = 0.0;
    BaseEngineController_LS_B.s186_Switch1 = 0.0;
    BaseEngineController_LS_B.s147_Switch1 = 0.0;
    BaseEngineController_LS_B.s184_Sum2 = 0.0;
    BaseEngineController_LS_B.s184_Product2 = 0.0;
    BaseEngineController_LS_B.s185_Product = 0.0;
    BaseEngineController_LS_B.s175_Switch = 0.0;
    BaseEngineController_LS_B.s147_motohawk_interpolation_2d = 0.0;
    BaseEngineController_LS_B.s147_Sum3 = 0.0;
    BaseEngineController_LS_B.s149_MinMax = 0.0;
    BaseEngineController_LS_B.s149_MinMax1 = 0.0;
    BaseEngineController_LS_B.s304_Add = 0.0;
    BaseEngineController_LS_B.s301_Product = 0.0;
    BaseEngineController_LS_B.s300_Product = 0.0;
    BaseEngineController_LS_B.s155_ApplyOffsetstoBaseSparkAdvance1 = 0.0;
    BaseEngineController_LS_B.s307_MinMax1 = 0.0;
    BaseEngineController_LS_B.s302_Switch = 0.0;
    BaseEngineController_LS_B.s155_motohawk_interpolation_2d1 = 0.0;
    BaseEngineController_LS_B.s152_Sum = 0.0;
    BaseEngineController_LS_B.s231_DontallowsetpointtoevergoabovetheTargetRPM =
      0.0;
    BaseEngineController_LS_B.s240_Sum2 = 0.0;
    BaseEngineController_LS_B.s240_Product2 = 0.0;
    BaseEngineController_LS_B.s241_Product = 0.0;
    BaseEngineController_LS_B.s242_Switch1 = 0.0;
    BaseEngineController_LS_B.s233_Switch = 0.0;
    BaseEngineController_LS_B.s229_Sum = 0.0;
    BaseEngineController_LS_B.s262_MinMax1 = 0.0;
    BaseEngineController_LS_B.s252_DontallowsetpointtoeverdropbelowtheTargetRPM =
      0.0;
    BaseEngineController_LS_B.s278_Sum2 = 0.0;
    BaseEngineController_LS_B.s278_Product2 = 0.0;
    BaseEngineController_LS_B.s279_Product = 0.0;
    BaseEngineController_LS_B.s280_Switch1 = 0.0;
    BaseEngineController_LS_B.s153_MinGovAirPID = 0.0;
    BaseEngineController_LS_B.s273_Sum1 = 0.0;
    BaseEngineController_LS_B.s273_Product = 0.0;
    BaseEngineController_LS_B.s274_Product = 0.0;
    BaseEngineController_LS_B.s153_IdleSpk = 0.0;
    BaseEngineController_LS_B.s270_Switch = 0.0;
    BaseEngineController_LS_B.s255_DontallowsetpointtoeverdropbelowtheTargetRPM =
      0.0;
    BaseEngineController_LS_B.s154_O2FuelMult = 0.0;
    BaseEngineController_LS_B.s285_Switch = 0.0;
    BaseEngineController_LS_B.s291_Sum2 = 0.0;
    BaseEngineController_LS_B.s291_Product2 = 0.0;
    BaseEngineController_LS_B.s293_Switch1 = 0.0;
    BaseEngineController_LS_B.s292_Product = 0.0;
    BaseEngineController_LS_B.s289_Switch3 = 0.0;
    BaseEngineController_LS_B.s289_Switch1 = 0.0;
    BaseEngineController_LS_B.s289_Switch4 = 0.0;
    BaseEngineController_LS_B.s210_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_B.s208_FuelFlowMassAirflowEquivalenceRatioAirtofuelRatio
      = 0.0;
    BaseEngineController_LS_B.s205_PerCylinderMassFlowRate = 0.0;
    BaseEngineController_LS_B.s205_ApplyMultipliersforO2KnockControlandEnrichment1
      = 0.0;
    BaseEngineController_LS_B.s228_MinMax1 = 0.0;
    BaseEngineController_LS_B.s221_chargemass = 0.0;
    BaseEngineController_LS_B.s220_Sum1 = 0.0;
    BaseEngineController_LS_B.s211_Sum1 = 0.0;
    BaseEngineController_LS_B.s219_Sum1 = 0.0;
    BaseEngineController_LS_B.s211_Sum = 0.0;
    BaseEngineController_LS_B.s211_Product1 = 0.0;
    BaseEngineController_LS_B.s218_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_B.s215_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_B.s191_EquivOut = 0.0;
    BaseEngineController_LS_B.s191_SparkOut = 0.0;
    BaseEngineController_LS_B.s146_DesEquivRatio = 0.0;
    BaseEngineController_LS_B.s130_Sum = 0.0;
    BaseEngineController_LS_B.s23_Sum = 0.0;
    BaseEngineController_LS_B.s102_UnitDelay2 = 0.0;
    BaseEngineController_LS_B.s121_Switch1 = 0.0;
    BaseEngineController_LS_B.s63_Switch = 0.0;
    BaseEngineController_LS_B.s31_MultiportSwitch = 0.0;
    BaseEngineController_LS_B.s42_Product = 0.0;
    BaseEngineController_LS_B.s41_Switch2 = 0.0;
    BaseEngineController_LS_B.s46_Product = 0.0;
    BaseEngineController_LS_B.s38_Sum2 = 0.0;
    BaseEngineController_LS_B.s47_Product = 0.0;
    BaseEngineController_LS_B.s38_Product2 = 0.0;
    BaseEngineController_LS_B.s48_Switch1 = 0.0;
    BaseEngineController_LS_B.s51_MinMax1 = 0.0;
    BaseEngineController_LS_B.s20_Switch = 0.0;
    BaseEngineController_LS_B.s52_In1 = 0.0;
    BaseEngineController_LS_B.s27_TestTime = 0.0;
    BaseEngineController_LS_B.s930_Switch = 0.0;
    BaseEngineController_LS_B.s408_CollectAverage.s377_Product = 0.0;
    BaseEngineController_LS_B.s407_CollectAverage.s377_Product = 0.0;
    BaseEngineController_LS_B.s373_CollectAverage.s377_Product = 0.0;
  }

  /* states (dwork) */
  (void) memset((void *)&BaseEngineController_LS_DWork, 0,
                sizeof(D_Work_BaseEngineController_LS));
  BaseEngineController_LS_DWork.s698_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s723_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s755_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s748_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s696_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s711_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s738_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s731_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s453_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s480_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s502_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s516_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s501_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s772_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s765_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s789_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s782_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s528_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s503_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s527_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s525_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s525_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s525_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s414_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s585_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s617_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s584_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s609_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s510_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s579_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s505_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s545_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s506_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s376_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s452_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s471_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s387_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s390_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s388_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s393_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s428_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s430_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s553_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s504_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s537_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s508_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s563_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s74_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s73_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s71_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s70_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s69_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s68_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s67_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s66_UnitDelay_DSTATE = 0.0;

  {
    int_T i;
    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_DWork.s72_UnitDelay_DSTATE[i] = 0.0;
    }
  }

  BaseEngineController_LS_DWork.s414_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s509_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s571_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s387_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s387_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s387_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s388_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s388_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s388_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s735_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s735_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s735_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s735_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s752_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s752_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s752_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s752_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s769_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s769_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s769_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s769_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s786_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s786_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s786_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s786_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s825_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s826_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s828_CrankCounter_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s657_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s675_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s659_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s693_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s658_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s684_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s656_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s666_UnitDelay_DSTATE = 0.0;

  {
    int_T i;
    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_DWork.s343_UnitDelay_DSTATE[i] = 0.0;
    }
  }

  BaseEngineController_LS_DWork.s406_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s420_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s423_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s406_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s406_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s406_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s320_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s147_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s186_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s176_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s185_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s302_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s231_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s241_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s242_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s267_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s269_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s153_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s153_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s248_state_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s153_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s252_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s279_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s280_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s274_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s255_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s293_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s292_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s289_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s289_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s289_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s220_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s219_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s130_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s102_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s20_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s55_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s46_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s42_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s44_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s47_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s48_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s920_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s920_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s372_TOld = 0.0;
  BaseEngineController_LS_DWork.s191_count = 0.0;
  BaseEngineController_LS_DWork.s191_EquivStart = 0.0;
  BaseEngineController_LS_DWork.s27_TimerOld = 0.0;
  BaseEngineController_LS_DWork.s408_CollectAverage.s377_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s407_CollectAverage.s377_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s373_CollectAverage.s377_UnitDelay1_DSTATE = 0.0;

  /* Start for S-Function (motohawk_sfun_trigger): '<Root>/motohawk_trigger' */
  BaseEngineController_LS_Foreground_Start();

  /* Start for S-Function (motohawk_sfun_trigger): '<S1>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_IDLE_EVENT_9p001 */
  BaseEngineController_LS_DWork.s1_motohawk_trigger1_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_RTI_PERIODIC_13778p0001 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger1_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_5XRTI_PERIODIC_13777p0001 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger2' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_MID_TDC_EVENT_13779p0001 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger2_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger3' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_20XRTI_PERIODIC_13780p0001 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger3_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger4' */

  /* Clear enable/disable state for embedded trigger Trigger_BGND_BASE_PERIODIC_13781p0001 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger4_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger5' */

  /* Clear enable/disable state for embedded trigger Trigger_BGND_BASEx2_PERIODIC_13782p0001 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger5_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger6' */

  /* Clear enable/disable state for embedded trigger Trigger_BGND_BASEx10_PERIODIC_13783p0001 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger6_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger7' */

  /* Clear enable/disable state for embedded trigger Trigger_ONE_SECOND_EVENT_13784p0001 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger7_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S4>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_IDLE_EVENT_13702p0001 */
  BaseEngineController_LS_DWork.s4_motohawk_trigger1_DWORK1 = 0;

  /* Start for function-call system: '<S3>/Main Power Relay' */

  /* Start for Triggered SubSystem: '<S916>/Clear' incorporates:
   *  Start for S-Function (fcncallgen): '<S924>/Function-Call Generator'
   *  Start for SubSystem: '<S914>/motohawk_restore_nvmem'
   */

  /* Start for Triggered SubSystem: '<S917>/Clear' incorporates:
   *  Start for S-Function (fcncallgen): '<S925>/Function-Call Generator'
   *  Start for SubSystem: '<S914>/motohawk_store_nvmem'
   */
  BaseEngineController_LS_PrevZCSigState.HitCrossing1_Input_ZCE =
    UNINITIALIZED_ZCSIG;
  BaseEngineController_LS_PrevZCSigState.ResetTasksCompleteToFalse_Trig_ZCE =
    POS_ZCSIG;
  BaseEngineController_LS_PrevZCSigState.ResetTasksCompleteToTrue_Trig_ZCE =
    POS_ZCSIG;
  BaseEngineController_LS_PrevZCSigState.ShutdownpoweronECU565563_Trig_ZCE =
    ZERO_ZCSIG;
  BaseEngineController_LS_PrevZCSigState.SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE
    = ZERO_ZCSIG;
  BaseEngineController_LS_PrevZCSigState.ProcessorReboot_Trig_ZCE = ZERO_ZCSIG;
  BaseEngineController_LS_PrevZCSigState.PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE
    = ZERO_ZCSIG;
  BaseEngineController_LS_PrevZCSigState.ShutdownpoweronECU565563_Trig_ZCE_l =
    ZERO_ZCSIG;
  BaseEngineController_LS_PrevZCSigState.SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE_m
    = ZERO_ZCSIG;
  BaseEngineController_LS_PrevZCSigState.ProcessorReboot_Trig_ZCE_h = ZERO_ZCSIG;
  BaseEngineController_LS_PrevZCSigState.PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE_h
    = ZERO_ZCSIG;
  BaseEngineController_LS_PrevZCSigState.Clear_Trig_ZCE = ZERO_ZCSIG;
  BaseEngineController_LS_PrevZCSigState.Clear_Trig_ZCE_k = ZERO_ZCSIG;

  /* InitializeConditions for S-Function (motohawk_sfun_trigger): '<Root>/motohawk_trigger' */
  BaseEngineController_LS_Foreground_Init();

  /* Initial conditions for function-call system: '<S3>/Main Power Relay' */

  /* S-Function Block: <S930>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s930_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for Stateflow: '<S914>/ECUP Latch' */

  /* Entry: Main Power Relay/Main Power Relay/ECUP Latch */
  /* Transition: '<S918>:3' */
  BaseEngineController_LS_DWork.s918_is_c8_BaseEngineController_LS =
    BaseEngineController_LS_IN_PowerDown;

  /* Entry 'PowerDown': '<S918>:1' */
  BaseEngineController_LS_B.s918_MPRDState = FALSE;

  /* set "at time zero" to false */
  if (rtmIsFirstInitCond(BaseEngineController_LS_M)) {
    rtmSetFirstInitCond(BaseEngineController_LS_M, 0);
  }

  /* Level2 S-Function Block: '<S1>/motohawk_trigger1' (motohawk_sfun_trigger) */

  /* Enable for Trigger_IDLE_EVENT_9p001 */
  BaseEngineController_LS_DWork.s1_motohawk_trigger1_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger1' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_RTI_PERIODIC_13778p0001 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger1_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_5XRTI_PERIODIC_13777p0001 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger2' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_MID_TDC_EVENT_13779p0001 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger2_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger3' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_20XRTI_PERIODIC_13780p0001 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger3_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger4' (motohawk_sfun_trigger) */

  /* Enable for Trigger_BGND_BASE_PERIODIC_13781p0001 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger4_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger5' (motohawk_sfun_trigger) */

  /* Enable for Trigger_BGND_BASEx2_PERIODIC_13782p0001 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger5_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger6' (motohawk_sfun_trigger) */

  /* Enable for Trigger_BGND_BASEx10_PERIODIC_13783p0001 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger6_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger7' (motohawk_sfun_trigger) */

  /* Enable for Trigger_ONE_SECOND_EVENT_13784p0001 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger7_DWORK1 = 1;

  /* Level2 S-Function Block: '<S4>/motohawk_trigger1' (motohawk_sfun_trigger) */

  /* Enable for Trigger_IDLE_EVENT_13702p0001 */
  BaseEngineController_LS_DWork.s4_motohawk_trigger1_DWORK1 = 1;
}

/* Model terminate function */
void BaseEngineController_LS_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
