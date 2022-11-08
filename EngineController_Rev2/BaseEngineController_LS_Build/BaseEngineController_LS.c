/*
 * File: BaseEngineController_LS.c
 *
 * Code generated for Simulink model 'BaseEngineController_LS'.
 *
 * Model version                  : 1.2053
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Tue Nov 08 18:29:01 2022
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_LS.h"
#include "BaseEngineController_LS_private.h"

/* Named constants for Stateflow: '<S1010>/ECUP Latch' */
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
  /* Enable for Trigger_FGND_RTI_PERIODIC_11363p0001 */
  if (BaseEngineController_LS_DWork.s5_motohawk_trigger1_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s5_motohawk_trigger1_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger' */
  /* Enable for Trigger_FGND_5XRTI_PERIODIC_11362p0001 */
  if (BaseEngineController_LS_DWork.s5_motohawk_trigger_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s5_motohawk_trigger_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger2' */
  /* Enable for Trigger_FGND_MID_TDC_EVENT_11364p0001 */
  if (BaseEngineController_LS_DWork.s5_motohawk_trigger2_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s5_motohawk_trigger2_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger3' */
  /* Enable for Trigger_FGND_20XRTI_PERIODIC_11365p0001 */
  if (BaseEngineController_LS_DWork.s5_motohawk_trigger3_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s5_motohawk_trigger3_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger4' */
  /* Enable for Trigger_BGND_BASE_PERIODIC_11366p0001 */
  if (BaseEngineController_LS_DWork.s5_motohawk_trigger4_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s5_motohawk_trigger4_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger5' */
  /* Enable for Trigger_BGND_BASEx2_PERIODIC_11367p0001 */
  if (BaseEngineController_LS_DWork.s5_motohawk_trigger5_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s5_motohawk_trigger5_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger6' */
  /* Enable for Trigger_BGND_BASEx10_PERIODIC_11368p0001 */
  if (BaseEngineController_LS_DWork.s5_motohawk_trigger6_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s5_motohawk_trigger6_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger7' */
  /* Enable for Trigger_ONE_SECOND_EVENT_11369p0001 */
  if (BaseEngineController_LS_DWork.s5_motohawk_trigger7_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s5_motohawk_trigger7_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S4>/motohawk_trigger1' */
  /* Enable for Trigger_IDLE_EVENT_11288p0001 */
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
      BaseEngineController_LS_B.s327_Defaultifnoflow[i] = 0.0;
    }

    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_B.s344_Sum1[i] = 0.0;
    }

    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_B.s343_chargemass[i] = 0.0;
    }

    BaseEngineController_LS_B.s453_Gain1 = 0.0;
    BaseEngineController_LS_B.s612_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_B.s611_Merge = 0.0;
    BaseEngineController_LS_B.s578_Switch = 0.0;
    BaseEngineController_LS_B.s786_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_B.s765_Switch = 0.0;
    BaseEngineController_LS_B.s809_MinMax = 0.0;
    BaseEngineController_LS_B.s809_MinMax1 = 0.0;
    BaseEngineController_LS_B.s813_MinMax1 = 0.0;
    BaseEngineController_LS_B.s784_Merge = 0.0;
    BaseEngineController_LS_B.s823_Merge = 0.0;
    BaseEngineController_LS_B.s774_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_B.s764_Switch = 0.0;
    BaseEngineController_LS_B.s792_MinMax = 0.0;
    BaseEngineController_LS_B.s792_MinMax1 = 0.0;
    BaseEngineController_LS_B.s796_MinMax1 = 0.0;
    BaseEngineController_LS_B.s772_Merge = 0.0;
    BaseEngineController_LS_B.s806_Merge = 0.0;
    BaseEngineController_LS_B.s416_Switch1 = 0.0;
    BaseEngineController_LS_B.s442_Sum = 0.0;
    BaseEngineController_LS_B.s454_RPMInst = 0.0;
    BaseEngineController_LS_B.s571_DataTypeConversion = 0.0;
    BaseEngineController_LS_B.s628_Sum1 = 0.0;
    BaseEngineController_LS_B.s641_Merge = 0.0;
    BaseEngineController_LS_B.s627_Sum1 = 0.0;
    BaseEngineController_LS_B.s766_Switch = 0.0;
    BaseEngineController_LS_B.s826_MinMax = 0.0;
    BaseEngineController_LS_B.s826_MinMax1 = 0.0;
    BaseEngineController_LS_B.s830_MinMax1 = 0.0;
    BaseEngineController_LS_B.s767_Switch = 0.0;
    BaseEngineController_LS_B.s843_MinMax = 0.0;
    BaseEngineController_LS_B.s843_MinMax1 = 0.0;
    BaseEngineController_LS_B.s847_MinMax1 = 0.0;
    BaseEngineController_LS_B.s840_Merge = 0.0;
    BaseEngineController_LS_B.s857_Merge = 0.0;
    BaseEngineController_LS_B.s423_Switch2 = 0.0;
    BaseEngineController_LS_B.s629_Sum1 = 0.0;
    BaseEngineController_LS_B.s649_Merge = 0.0;
    BaseEngineController_LS_B.s458_ReadCANMessage_o3 = 0.0;
    BaseEngineController_LS_B.s458_ReadCANMessage_o4 = 0.0;
    BaseEngineController_LS_B.s458_ReadCANMessage_o5 = 0.0;
    BaseEngineController_LS_B.s458_ReadCANMessage_o6 = 0.0;
    BaseEngineController_LS_B.s458_ReadCANMessage_o7 = 0.0;
    BaseEngineController_LS_B.s458_ReadCANMessage_o8 = 0.0;
    BaseEngineController_LS_B.s458_ReadCANMessage2_o2 = 0.0;
    BaseEngineController_LS_B.s458_ReadCANMessage2_o3 = 0.0;
    BaseEngineController_LS_B.s458_ReadCANMessage2_o4 = 0.0;
    BaseEngineController_LS_B.s458_ReadCANMessage2_o5 = 0.0;
    BaseEngineController_LS_B.s427_Switch2 = 0.0;
    BaseEngineController_LS_B.s459_ReadCANMessage_o2 = 0.0;
    BaseEngineController_LS_B.s459_ReadCANMessage_o3 = 0.0;
    BaseEngineController_LS_B.s459_ReadCANMessage_o4 = 0.0;
    BaseEngineController_LS_B.s459_ReadCANMessage_o5 = 0.0;
    BaseEngineController_LS_B.s459_ReadCANMessage_o6 = 0.0;
    BaseEngineController_LS_B.s459_ReadCANMessage_o7 = 0.0;
    BaseEngineController_LS_B.s459_ReadCANMessage_o8 = 0.0;
    BaseEngineController_LS_B.s459_ReadCANMessage_o9 = 0.0;
    BaseEngineController_LS_B.s459_ReadCANMessage_o10 = 0.0;
    BaseEngineController_LS_B.s459_MathFunction = 0.0;
    BaseEngineController_LS_B.s499_Sum1 = 0.0;
    BaseEngineController_LS_B.s459_ReadCANMessage1_o2 = 0.0;
    BaseEngineController_LS_B.s459_ReadCANMessage1_o3 = 0.0;
    BaseEngineController_LS_B.s459_ReadCANMessage1_o4 = 0.0;
    BaseEngineController_LS_B.s459_ReadCANMessage1_o5 = 0.0;
    BaseEngineController_LS_B.s459_ReadCANMessage1_o6 = 0.0;
    BaseEngineController_LS_B.s459_ReadCANMessage1_o7 = 0.0;
    BaseEngineController_LS_B.s459_ReadCANMessage1_o8 = 0.0;
    BaseEngineController_LS_B.s459_ReadCANMessage1_o9 = 0.0;
    BaseEngineController_LS_B.s459_ReadCANMessage1_o10 = 0.0;
    BaseEngineController_LS_B.s459_MathFunction1 = 0.0;
    BaseEngineController_LS_B.s500_Sum1 = 0.0;
    BaseEngineController_LS_B.s523_Merge = 0.0;
    BaseEngineController_LS_B.s531_Merge = 0.0;
    BaseEngineController_LS_B.s459_MultiportSwitch = 0.0;
    BaseEngineController_LS_B.s421_Sum1 = 0.0;
    BaseEngineController_LS_B.s444_Switch = 0.0;
    BaseEngineController_LS_B.s636_Sum1 = 0.0;
    BaseEngineController_LS_B.s704_Merge = 0.0;
    BaseEngineController_LS_B.s633_Merge = 0.0;
    BaseEngineController_LS_B.s631_Sum1 = 0.0;
    BaseEngineController_LS_B.s670_Merge = 0.0;
    BaseEngineController_LS_B.s369_motohawk_delta_time = 0.0;
    BaseEngineController_LS_B.s632_Sum1 = 0.0;
    BaseEngineController_LS_B.s379_Sum = 0.0;
    BaseEngineController_LS_B.s378_motohawk_interpolation_2d2 = 0.0;
    BaseEngineController_LS_B.s378_Sum = 0.0;
    BaseEngineController_LS_B.s378_NominalAirFlowRate = 0.0;
    BaseEngineController_LS_B.s378_ModelAirMassFlowRate = 0.0;
    BaseEngineController_LS_B.s453_Gain = 0.0;
    BaseEngineController_LS_B.s593_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_B.s592_Merge = 0.0;
    BaseEngineController_LS_B.s378_MultiportSwitch = 0.0;
    BaseEngineController_LS_B.s394_Merge = 0.0;
    BaseEngineController_LS_B.s397_Sum1 = 0.0;
    BaseEngineController_LS_B.s395_Merge = 0.0;
    BaseEngineController_LS_B.s400_Sum1 = 0.0;
    BaseEngineController_LS_B.s438_Sum1 = 0.0;
    BaseEngineController_LS_B.s572_DataTypeConversion = 0.0;
    BaseEngineController_LS_B.s575_DataTypeConversion = 0.0;
    BaseEngineController_LS_B.s678_Merge = 0.0;
    BaseEngineController_LS_B.s370_motohawk_data_read = 0.0;
    BaseEngineController_LS_B.s389_Sum1 = 0.0;
    BaseEngineController_LS_B.s889_Sum1 = 0.0;
    BaseEngineController_LS_B.s886_Switch = 0.0;
    BaseEngineController_LS_B.s893_Merge = 0.0;
    BaseEngineController_LS_B.s893_Switch = 0.0;
    BaseEngineController_LS_B.s894_Merge = 0.0;
    BaseEngineController_LS_B.s894_Switch = 0.0;
    BaseEngineController_LS_B.s420_MultiportSwitch = 0.0;
    BaseEngineController_LS_B.s135_SparkAdv = 0.0;
    BaseEngineController_LS_B.s630_Sum1 = 0.0;
    BaseEngineController_LS_B.s662_Merge = 0.0;
    BaseEngineController_LS_B.s634_Sum1 = 0.0;
    BaseEngineController_LS_B.s688_Merge = 0.0;
    BaseEngineController_LS_B.s135_FAN1 = 0.0;
    BaseEngineController_LS_B.s135_FAN2 = 0.0;
    BaseEngineController_LS_B.s135_SparkEnergy = 0.0;
    BaseEngineController_LS_B.s957_MinMax1 = 0.0;
    BaseEngineController_LS_B.s961_MinMax1 = 0.0;
    BaseEngineController_LS_B.s446_Switch = 0.0;
    BaseEngineController_LS_B.s135_Throttle = 0.0;
    BaseEngineController_LS_B.s866_ETC = 0.0;
    BaseEngineController_LS_B.s135_IACP = 0.0;
    BaseEngineController_LS_B.s975_MinMax1 = 0.0;
    BaseEngineController_LS_B.s135_IACS = 0.0;
    BaseEngineController_LS_B.s979_MinMax1 = 0.0;
    BaseEngineController_LS_B.s135_SOI = 0.0;
    BaseEngineController_LS_B.s64_constreftoatm = 0.0;
    BaseEngineController_LS_B.s135_FuelMult = 0.0;
    BaseEngineController_LS_B.s21_Sum2 = 0.0;
    BaseEngineController_LS_B.s21_Sum1 = 0.0;
    BaseEngineController_LS_B.s135_MakeUpEOI = 0.0;
    BaseEngineController_LS_B.s135_WASTEGATE = 0.0;
    BaseEngineController_LS_B.s1006_MinMax1 = 0.0;
    BaseEngineController_LS_B.s421_Sum3 = 0.0;
    BaseEngineController_LS_B.s419_Sum3 = 0.0;
    BaseEngineController_LS_B.s458_ReadCANMessage1_o2 = 0.0;
    BaseEngineController_LS_B.s458_ReadCANMessage1_o3 = 0.0;
    BaseEngineController_LS_B.s635_Sum1 = 0.0;
    BaseEngineController_LS_B.s696_Merge = 0.0;
    BaseEngineController_LS_B.s921_Sum = 0.0;
    BaseEngineController_LS_B.s922_Sum = 0.0;
    BaseEngineController_LS_B.s924_CrankCounter = 0.0;
    BaseEngineController_LS_B.s716_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_B.s715_Merge = 0.0;
    BaseEngineController_LS_B.s738_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_B.s721_Merge = 0.0;
    BaseEngineController_LS_B.s737_Merge = 0.0;
    BaseEngineController_LS_B.s756_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_B.s723_Merge = 0.0;
    BaseEngineController_LS_B.s755_Merge = 0.0;
    BaseEngineController_LS_B.s747_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_B.s746_Merge = 0.0;
    BaseEngineController_LS_B.s729_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_B.s728_Merge = 0.0;
    BaseEngineController_LS_B.s413_Merge = 0.0;
    BaseEngineController_LS_B.s431_Sum2 = 0.0;
    BaseEngineController_LS_B.s375_Timer = 0.0;
    BaseEngineController_LS_B.s321_UnitDelay = 0.0;
    BaseEngineController_LS_B.s311_Product1 = 0.0;
    BaseEngineController_LS_B.s311_Switch = 0.0;
    BaseEngineController_LS_B.s322_etc = 0.0;
    BaseEngineController_LS_B.s190_Product1 = 0.0;
    BaseEngineController_LS_B.s190_SpkOut = 0.0;
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
    BaseEngineController_LS_B.s305_Add = 0.0;
    BaseEngineController_LS_B.s302_Product = 0.0;
    BaseEngineController_LS_B.s301_Product = 0.0;
    BaseEngineController_LS_B.s155_ApplyOffsetstoBaseSparkAdvance1 = 0.0;
    BaseEngineController_LS_B.s308_MinMax1 = 0.0;
    BaseEngineController_LS_B.s303_Switch = 0.0;
    BaseEngineController_LS_B.s155_motohawk_interpolation_2d1 = 0.0;
    BaseEngineController_LS_B.s152_Sum = 0.0;
    BaseEngineController_LS_B.s232_DontallowsetpointtoevergoabovetheTargetRPM =
      0.0;
    BaseEngineController_LS_B.s241_Sum2 = 0.0;
    BaseEngineController_LS_B.s241_Product2 = 0.0;
    BaseEngineController_LS_B.s242_Product = 0.0;
    BaseEngineController_LS_B.s243_Switch1 = 0.0;
    BaseEngineController_LS_B.s234_Switch = 0.0;
    BaseEngineController_LS_B.s230_Sum = 0.0;
    BaseEngineController_LS_B.s263_MinMax1 = 0.0;
    BaseEngineController_LS_B.s253_DontallowsetpointtoeverdropbelowtheTargetRPM =
      0.0;
    BaseEngineController_LS_B.s279_Sum2 = 0.0;
    BaseEngineController_LS_B.s279_Product2 = 0.0;
    BaseEngineController_LS_B.s280_Product = 0.0;
    BaseEngineController_LS_B.s281_Switch1 = 0.0;
    BaseEngineController_LS_B.s153_MinGovAirPID = 0.0;
    BaseEngineController_LS_B.s274_Sum1 = 0.0;
    BaseEngineController_LS_B.s274_Product = 0.0;
    BaseEngineController_LS_B.s275_Product = 0.0;
    BaseEngineController_LS_B.s153_IdleSpk = 0.0;
    BaseEngineController_LS_B.s271_Switch = 0.0;
    BaseEngineController_LS_B.s256_DontallowsetpointtoeverdropbelowtheTargetRPM =
      0.0;
    BaseEngineController_LS_B.s154_O2FuelMult = 0.0;
    BaseEngineController_LS_B.s286_Switch = 0.0;
    BaseEngineController_LS_B.s292_Sum2 = 0.0;
    BaseEngineController_LS_B.s292_Product2 = 0.0;
    BaseEngineController_LS_B.s294_Switch1 = 0.0;
    BaseEngineController_LS_B.s293_Product = 0.0;
    BaseEngineController_LS_B.s290_Switch3 = 0.0;
    BaseEngineController_LS_B.s290_Switch1 = 0.0;
    BaseEngineController_LS_B.s290_Switch4 = 0.0;
    BaseEngineController_LS_B.s211_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_B.s209_FuelFlowMassAirflowEquivalenceRatioAirtofuelRatio
      = 0.0;
    BaseEngineController_LS_B.s206_PerCylinderMassFlowRate = 0.0;
    BaseEngineController_LS_B.s206_ApplyMultipliersforO2KnockControlandEnrichment1
      = 0.0;
    BaseEngineController_LS_B.s229_MinMax1 = 0.0;
    BaseEngineController_LS_B.s222_chargemass = 0.0;
    BaseEngineController_LS_B.s221_Sum1 = 0.0;
    BaseEngineController_LS_B.s212_Sum1 = 0.0;
    BaseEngineController_LS_B.s220_Sum1 = 0.0;
    BaseEngineController_LS_B.s212_Sum = 0.0;
    BaseEngineController_LS_B.s212_Product1 = 0.0;
    BaseEngineController_LS_B.s219_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_B.s216_motohawk_interpolation_1d = 0.0;
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
    BaseEngineController_LS_B.s1027_Switch = 0.0;
    BaseEngineController_LS_B.s415_CollectAverage.s380_Product = 0.0;
    BaseEngineController_LS_B.s414_CollectAverage.s380_Product = 0.0;
    BaseEngineController_LS_B.s376_CollectAverage.s380_Product = 0.0;
  }

  /* states (dwork) */
  (void) memset((void *)&BaseEngineController_LS_DWork, 0,
                sizeof(D_Work_BaseEngineController_LS));
  BaseEngineController_LS_DWork.s578_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s616_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s577_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s613_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s578_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s578_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s762_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s787_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s819_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s812_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s760_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s775_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s802_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s795_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s628_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s642_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s627_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s836_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s829_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s853_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s846_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s654_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s629_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s653_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s651_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s651_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s651_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s421_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s499_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s524_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s500_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s532_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s636_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s705_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s631_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s671_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s632_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s379_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s574_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s594_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s394_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s397_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s395_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s400_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s436_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s438_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s679_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s389_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s889_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s887_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s893_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s893_UnitDelay5_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s899_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s894_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s894_UnitDelay5_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s902_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s895_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s896_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s897_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s893_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s893_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s893_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s894_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s894_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s894_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s910_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s630_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s663_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s911_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s634_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s689_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s912_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s914_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s918_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s917_UnitDelay_DSTATE = 0.0;
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

  BaseEngineController_LS_DWork.s421_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s635_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s697_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s394_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s394_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s394_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s395_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s395_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s395_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s799_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s799_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s799_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s799_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s816_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s816_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s816_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s816_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s833_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s833_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s833_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s833_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s850_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s850_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s850_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s850_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s921_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s922_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s924_CrankCounter_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s710_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s717_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s721_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s739_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s723_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s757_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s722_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s748_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s720_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s730_UnitDelay_DSTATE = 0.0;

  {
    int_T i;
    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_DWork.s344_UnitDelay_DSTATE[i] = 0.0;
    }
  }

  BaseEngineController_LS_DWork.s413_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s428_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s431_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s413_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s413_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s413_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s321_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s191_state_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s147_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s186_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s176_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s185_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s303_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s232_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s242_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s243_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s268_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s270_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s153_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s153_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s249_state_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s153_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s253_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s280_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s281_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s275_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s256_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s294_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s293_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s290_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s290_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s290_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s221_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s220_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s130_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s102_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s20_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s55_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s46_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s42_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s44_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s47_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s48_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s1016_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s1016_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s375_TOld = 0.0;
  BaseEngineController_LS_DWork.s27_TimerOld = 0.0;
  BaseEngineController_LS_DWork.s415_CollectAverage.s380_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s414_CollectAverage.s380_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s376_CollectAverage.s380_UnitDelay1_DSTATE = 0.0;

  /* Start for S-Function (motohawk_sfun_trigger): '<Root>/motohawk_trigger' */
  BaseEngineController_LS_Foreground_Start();

  /* Start for S-Function (motohawk_sfun_trigger): '<S1>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_IDLE_EVENT_9p001 */
  BaseEngineController_LS_DWork.s1_motohawk_trigger1_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_RTI_PERIODIC_11363p0001 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger1_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_5XRTI_PERIODIC_11362p0001 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger2' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_MID_TDC_EVENT_11364p0001 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger2_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger3' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_20XRTI_PERIODIC_11365p0001 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger3_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger4' */

  /* Clear enable/disable state for embedded trigger Trigger_BGND_BASE_PERIODIC_11366p0001 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger4_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger5' */

  /* Clear enable/disable state for embedded trigger Trigger_BGND_BASEx2_PERIODIC_11367p0001 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger5_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger6' */

  /* Clear enable/disable state for embedded trigger Trigger_BGND_BASEx10_PERIODIC_11368p0001 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger6_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger7' */

  /* Clear enable/disable state for embedded trigger Trigger_ONE_SECOND_EVENT_11369p0001 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger7_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S4>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_IDLE_EVENT_11288p0001 */
  BaseEngineController_LS_DWork.s4_motohawk_trigger1_DWORK1 = 0;

  /* Start for function-call system: '<S3>/Main Power Relay' */

  /* Start for Triggered SubSystem: '<S1012>/Clear' incorporates:
   *  Start for S-Function (fcncallgen): '<S1021>/Function-Call Generator'
   *  Start for SubSystem: '<S1010>/motohawk_restore_nvmem'
   */

  /* Start for Triggered SubSystem: '<S1013>/Clear' incorporates:
   *  Start for S-Function (fcncallgen): '<S1022>/Function-Call Generator'
   *  Start for SubSystem: '<S1010>/motohawk_store_nvmem'
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

  /* S-Function Block: <S1027>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s1027_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S1018>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s1018_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for Stateflow: '<S1010>/ECUP Latch' */

  /* Entry: Main Power Relay/Main Power Relay/ECUP Latch */
  /* Transition: '<S1014>:3' */
  BaseEngineController_LS_DWork.s1014_is_c8_BaseEngineController_LS =
    BaseEngineController_LS_IN_PowerDown;

  /* Entry 'PowerDown': '<S1014>:1' */
  BaseEngineController_LS_B.s1014_MPRDState = FALSE;

  /* set "at time zero" to false */
  if (rtmIsFirstInitCond(BaseEngineController_LS_M)) {
    rtmSetFirstInitCond(BaseEngineController_LS_M, 0);
  }

  /* Level2 S-Function Block: '<S1>/motohawk_trigger1' (motohawk_sfun_trigger) */

  /* Enable for Trigger_IDLE_EVENT_9p001 */
  BaseEngineController_LS_DWork.s1_motohawk_trigger1_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger1' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_RTI_PERIODIC_11363p0001 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger1_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_5XRTI_PERIODIC_11362p0001 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger2' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_MID_TDC_EVENT_11364p0001 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger2_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger3' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_20XRTI_PERIODIC_11365p0001 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger3_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger4' (motohawk_sfun_trigger) */

  /* Enable for Trigger_BGND_BASE_PERIODIC_11366p0001 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger4_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger5' (motohawk_sfun_trigger) */

  /* Enable for Trigger_BGND_BASEx2_PERIODIC_11367p0001 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger5_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger6' (motohawk_sfun_trigger) */

  /* Enable for Trigger_BGND_BASEx10_PERIODIC_11368p0001 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger6_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger7' (motohawk_sfun_trigger) */

  /* Enable for Trigger_ONE_SECOND_EVENT_11369p0001 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger7_DWORK1 = 1;

  /* Level2 S-Function Block: '<S4>/motohawk_trigger1' (motohawk_sfun_trigger) */

  /* Enable for Trigger_IDLE_EVENT_11288p0001 */
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
