/*
 * File: BaseEngineController_LS_128.c
 *
 * Code generated for Simulink model 'BaseEngineController_LS_128'.
 *
 * Model version                  : 1.2189
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Tue Nov 22 13:22:09 2022
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_LS_128.h"
#include "BaseEngineController_LS_128_private.h"

/* Named constants for Stateflow: '<S932>/ECUP Latch' */
#define BaseEngineController_LS_128_IN_PowerDown (1U)
#define BaseEngineController_LS_128_IN_PowerUp (2U)

/* Block signals (auto storage) */
BlockIO_BaseEngineController_LS_128 BaseEngineController_LS_128_B;

/* Block states (auto storage) */
D_Work_BaseEngineController_LS_128 BaseEngineController_LS_128_DWork;

/* Previous zero-crossings (trigger) states */
PrevZCSigStates_BaseEngineController_LS_128
  BaseEngineController_LS_128_PrevZCSigState;

/* Real-time model */
RT_MODEL_BaseEngineController_LS_128 BaseEngineController_LS_128_M_;
RT_MODEL_BaseEngineController_LS_128 *const BaseEngineController_LS_128_M =
  &BaseEngineController_LS_128_M_;

/* Output and update for function-call system: '<S4>/CCP Daq Processing' */
void BaseEngineController_LS_128_CCPDaqProcessing(int_T controlPortIdx)
{
  /* local block i/o variables */
  int8_T rtb_f_e[8];
  int32_T i;

  /* Outputs for Function Call SubSystem: '<S4>/CCP Daq Processing' incorporates:
   *  TriggerPort: '<S7>/f'
   */
  for (i = 0; i < 8; i++) {
    rtb_f_e[i] = 0;
  }

  rtb_f_e[controlPortIdx] = 2;

  /* <S7>/motohawk_sfun_ccp_protocol: CCP Protocol CCP1 */
  {
    extern S_CCPHandlerInstance mh_CCP1_CCPHandlerInstance;
    extern S_CCPHandlerConfig mh_CCP1_CCPHandlerConfig;

    /* Tick */
    mh_ProcessCCPTick(rtb_f_e, &mh_CCP1_CCPHandlerConfig,
                      &mh_CCP1_CCPHandlerInstance);
  }
}

/* Model step function */
void BaseEngineController_LS_128_step(void)
{
  /* S-Function (motohawk_sfun_trigger): '<S1>/motohawk_trigger1' */
  /* Enable for Trigger_IDLE_EVENT_9p001 */
  if (BaseEngineController_LS_128_DWork.s1_motohawk_trigger1_DWORK1 == 0) {
    BaseEngineController_LS_128_DWork.s1_motohawk_trigger1_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger1' */
  /* Enable for Trigger_FGND_RTI_PERIODIC_12065p0004 */
  if (BaseEngineController_LS_128_DWork.s5_motohawk_trigger1_DWORK1 == 0) {
    BaseEngineController_LS_128_DWork.s5_motohawk_trigger1_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger' */
  /* Enable for Trigger_FGND_5XRTI_PERIODIC_12064p0004 */
  if (BaseEngineController_LS_128_DWork.s5_motohawk_trigger_DWORK1 == 0) {
    BaseEngineController_LS_128_DWork.s5_motohawk_trigger_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger2' */
  /* Enable for Trigger_FGND_MID_TDC_EVENT_12066p0004 */
  if (BaseEngineController_LS_128_DWork.s5_motohawk_trigger2_DWORK1 == 0) {
    BaseEngineController_LS_128_DWork.s5_motohawk_trigger2_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger3' */
  /* Enable for Trigger_FGND_20XRTI_PERIODIC_12067p0004 */
  if (BaseEngineController_LS_128_DWork.s5_motohawk_trigger3_DWORK1 == 0) {
    BaseEngineController_LS_128_DWork.s5_motohawk_trigger3_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger4' */
  /* Enable for Trigger_BGND_BASE_PERIODIC_12068p0004 */
  if (BaseEngineController_LS_128_DWork.s5_motohawk_trigger4_DWORK1 == 0) {
    BaseEngineController_LS_128_DWork.s5_motohawk_trigger4_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger5' */
  /* Enable for Trigger_BGND_BASEx2_PERIODIC_12069p0004 */
  if (BaseEngineController_LS_128_DWork.s5_motohawk_trigger5_DWORK1 == 0) {
    BaseEngineController_LS_128_DWork.s5_motohawk_trigger5_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger6' */
  /* Enable for Trigger_BGND_BASEx10_PERIODIC_12070p0004 */
  if (BaseEngineController_LS_128_DWork.s5_motohawk_trigger6_DWORK1 == 0) {
    BaseEngineController_LS_128_DWork.s5_motohawk_trigger6_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger7' */
  /* Enable for Trigger_ONE_SECOND_EVENT_12071p0004 */
  if (BaseEngineController_LS_128_DWork.s5_motohawk_trigger7_DWORK1 == 0) {
    BaseEngineController_LS_128_DWork.s5_motohawk_trigger7_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S4>/motohawk_trigger1' */
  /* Enable for Trigger_IDLE_EVENT_11990p0004 */
  if (BaseEngineController_LS_128_DWork.s4_motohawk_trigger1_DWORK1 == 0) {
    BaseEngineController_LS_128_DWork.s4_motohawk_trigger1_DWORK1 = 1;
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
  BaseEngineController_LS_128_M->Timing.clockTick0++;
  if (!BaseEngineController_LS_128_M->Timing.clockTick0) {
    BaseEngineController_LS_128_M->Timing.clockTickH0++;
  }
}

/* Model initialize function */
void BaseEngineController_LS_128_initialize(boolean_T firstTime)
{
  (void)firstTime;

  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)BaseEngineController_LS_128_M, 0,
                sizeof(RT_MODEL_BaseEngineController_LS_128));
  rtmSetFirstInitCond(BaseEngineController_LS_128_M, 1);

  /* block I/O */
  (void) memset(((void *) &BaseEngineController_LS_128_B), 0,
                sizeof(BlockIO_BaseEngineController_LS_128));

  {
    int_T i;
    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_128_B.s92_FPC[i] = 0.0;
    }

    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_128_B.s21_MinMax[i] = 0.0;
    }

    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_128_B.s21_Gain[i] = 0.0;
    }

    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_128_B.s298_Defaultifnoflow[i] = 0.0;
    }

    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_128_B.s316_Sum1[i] = 0.0;
    }

    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_128_B.s315_chargemass[i] = 0.0;
    }

    for (i = 0; i < 5; i++) {
      BaseEngineController_LS_128_B.s105_EquivRatioInfo[i] = 0.0;
    }

    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_128_B.s245_O2FuelMult[i] = 0.0;
    }

    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_128_B.s159_ApplyMultipliersforO2KnockControlandEnrichment1
        [i] = 0.0;
    }

    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_128_B.s175_chargemass[i] = 0.0;
    }

    BaseEngineController_LS_128_B.s716_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_128_B.s695_Switch = 0.0;
    BaseEngineController_LS_128_B.s739_MinMax = 0.0;
    BaseEngineController_LS_128_B.s739_MinMax1 = 0.0;
    BaseEngineController_LS_128_B.s743_MinMax1 = 0.0;
    BaseEngineController_LS_128_B.s714_Merge = 0.0;
    BaseEngineController_LS_128_B.s753_Merge = 0.0;
    BaseEngineController_LS_128_B.s704_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_128_B.s694_Switch = 0.0;
    BaseEngineController_LS_128_B.s722_MinMax = 0.0;
    BaseEngineController_LS_128_B.s722_MinMax1 = 0.0;
    BaseEngineController_LS_128_B.s726_MinMax1 = 0.0;
    BaseEngineController_LS_128_B.s702_Merge = 0.0;
    BaseEngineController_LS_128_B.s736_Merge = 0.0;
    BaseEngineController_LS_128_B.s445_Switch1 = 0.0;
    BaseEngineController_LS_128_B.s471_Sum = 0.0;
    BaseEngineController_LS_128_B.s558_Sum1 = 0.0;
    BaseEngineController_LS_128_B.s571_Merge = 0.0;
    BaseEngineController_LS_128_B.s483_RPMInst = 0.0;
    BaseEngineController_LS_128_B.s507_DataTypeConversion = 0.0;
    BaseEngineController_LS_128_B.s557_Sum1 = 0.0;
    BaseEngineController_LS_128_B.s696_Switch = 0.0;
    BaseEngineController_LS_128_B.s756_MinMax = 0.0;
    BaseEngineController_LS_128_B.s756_MinMax1 = 0.0;
    BaseEngineController_LS_128_B.s760_MinMax1 = 0.0;
    BaseEngineController_LS_128_B.s697_Switch = 0.0;
    BaseEngineController_LS_128_B.s773_MinMax = 0.0;
    BaseEngineController_LS_128_B.s773_MinMax1 = 0.0;
    BaseEngineController_LS_128_B.s777_MinMax1 = 0.0;
    BaseEngineController_LS_128_B.s770_Merge = 0.0;
    BaseEngineController_LS_128_B.s787_Merge = 0.0;
    BaseEngineController_LS_128_B.s452_Switch2 = 0.0;
    BaseEngineController_LS_128_B.s559_Sum1 = 0.0;
    BaseEngineController_LS_128_B.s579_Merge = 0.0;
    BaseEngineController_LS_128_B.s488_Lambda = 0.0;
    BaseEngineController_LS_128_B.s488_OxygenConcentratio = 0.0;
    BaseEngineController_LS_128_B.s488_SystemVolts = 0.0;
    BaseEngineController_LS_128_B.s488_HeaterVolts = 0.0;
    BaseEngineController_LS_128_B.s488_ReadCANMessage_o6 = 0.0;
    BaseEngineController_LS_128_B.s488_ReadCANMessage_o7 = 0.0;
    BaseEngineController_LS_128_B.s488_ReadCANMessage_o8 = 0.0;
    BaseEngineController_LS_128_B.s488_ReadCANMessage_o9 = 0.0;
    BaseEngineController_LS_128_B.s488_ReadCANMessage_o10 = 0.0;
    BaseEngineController_LS_128_B.s488_Lambda_o = 0.0;
    BaseEngineController_LS_128_B.s488_OxygenConcentratio_n = 0.0;
    BaseEngineController_LS_128_B.s488_SystemVolts_a = 0.0;
    BaseEngineController_LS_128_B.s488_HeaterVolts_d = 0.0;
    BaseEngineController_LS_128_B.s488_ReadCANMessage1_o6 = 0.0;
    BaseEngineController_LS_128_B.s488_ReadCANMessage1_o7 = 0.0;
    BaseEngineController_LS_128_B.s488_ReadCANMessage1_o8 = 0.0;
    BaseEngineController_LS_128_B.s488_ReadCANMessage1_o9 = 0.0;
    BaseEngineController_LS_128_B.s488_ReadCANMessage1_o10 = 0.0;
    BaseEngineController_LS_128_B.s487_GPS_Speed = 0.0;
    BaseEngineController_LS_128_B.s487_GPS_Altitude = 0.0;
    BaseEngineController_LS_128_B.s487_GPS_Course = 0.0;
    BaseEngineController_LS_128_B.s487_ReadCANMessage2_o5 = 0.0;
    BaseEngineController_LS_128_B.s487_ReadCANMessage_o3 = 0.0;
    BaseEngineController_LS_128_B.s487_ReadCANMessage_o4 = 0.0;
    BaseEngineController_LS_128_B.s487_ReadCANMessage_o5 = 0.0;
    BaseEngineController_LS_128_B.s487_ReadCANMessage_o6 = 0.0;
    BaseEngineController_LS_128_B.s487_ReadCANMessage_o7 = 0.0;
    BaseEngineController_LS_128_B.s487_ReadCANMessage_o8 = 0.0;
    BaseEngineController_LS_128_B.s482_Gain1 = 0.0;
    BaseEngineController_LS_128_B.s542_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_128_B.s541_Merge = 0.0;
    BaseEngineController_LS_128_B.s513_Switch = 0.0;
    BaseEngineController_LS_128_B.s456_Switch2 = 0.0;
    BaseEngineController_LS_128_B.s488_MathFunction = 0.0;
    BaseEngineController_LS_128_B.s489_Sum1 = 0.0;
    BaseEngineController_LS_128_B.s488_MathFunction1 = 0.0;
    BaseEngineController_LS_128_B.s490_Sum1 = 0.0;
    BaseEngineController_LS_128_B.s495_Merge = 0.0;
    BaseEngineController_LS_128_B.s503_Merge = 0.0;
    BaseEngineController_LS_128_B.s488_MultiportSwitch = 0.0;
    BaseEngineController_LS_128_B.s450_Sum1 = 0.0;
    BaseEngineController_LS_128_B.s450_Sum3 = 0.0;
    BaseEngineController_LS_128_B.s473_Switch = 0.0;
    BaseEngineController_LS_128_B.s566_Sum1 = 0.0;
    BaseEngineController_LS_128_B.s634_Merge = 0.0;
    BaseEngineController_LS_128_B.s563_Merge = 0.0;
    BaseEngineController_LS_128_B.s561_Sum1 = 0.0;
    BaseEngineController_LS_128_B.s600_Merge = 0.0;
    BaseEngineController_LS_128_B.s397_motohawk_delta_time = 0.0;
    BaseEngineController_LS_128_B.s562_Sum1 = 0.0;
    BaseEngineController_LS_128_B.s407_Sum = 0.0;
    BaseEngineController_LS_128_B.s406_motohawk_interpolation_2d2 = 0.0;
    BaseEngineController_LS_128_B.s406_Sum = 0.0;
    BaseEngineController_LS_128_B.s406_NominalAirFlowRate = 0.0;
    BaseEngineController_LS_128_B.s406_ModelAirMassFlowRate = 0.0;
    BaseEngineController_LS_128_B.s482_Gain = 0.0;
    BaseEngineController_LS_128_B.s528_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_128_B.s527_Merge = 0.0;
    BaseEngineController_LS_128_B.s406_MultiportSwitch = 0.0;
    BaseEngineController_LS_128_B.s423_Merge = 0.0;
    BaseEngineController_LS_128_B.s426_Sum1 = 0.0;
    BaseEngineController_LS_128_B.s424_Merge = 0.0;
    BaseEngineController_LS_128_B.s429_Sum1 = 0.0;
    BaseEngineController_LS_128_B.s467_Sum1 = 0.0;
    BaseEngineController_LS_128_B.s508_DataTypeConversion = 0.0;
    BaseEngineController_LS_128_B.s511_DataTypeConversion = 0.0;
    BaseEngineController_LS_128_B.s608_Merge = 0.0;
    BaseEngineController_LS_128_B.s398_motohawk_data_read = 0.0;
    BaseEngineController_LS_128_B.s417_Sum1 = 0.0;
    BaseEngineController_LS_128_B.s819_Sum1 = 0.0;
    BaseEngineController_LS_128_B.s816_Switch = 0.0;
    BaseEngineController_LS_128_B.s823_Merge = 0.0;
    BaseEngineController_LS_128_B.s823_Switch = 0.0;
    BaseEngineController_LS_128_B.s824_Merge = 0.0;
    BaseEngineController_LS_128_B.s824_Switch = 0.0;
    BaseEngineController_LS_128_B.s449_MultiportSwitch = 0.0;
    BaseEngineController_LS_128_B.s92_SparkAdv = 0.0;
    BaseEngineController_LS_128_B.s560_Sum1 = 0.0;
    BaseEngineController_LS_128_B.s592_Merge = 0.0;
    BaseEngineController_LS_128_B.s564_Sum1 = 0.0;
    BaseEngineController_LS_128_B.s618_Merge = 0.0;
    BaseEngineController_LS_128_B.s92_FAN1 = 0.0;
    BaseEngineController_LS_128_B.s92_FAN2 = 0.0;
    BaseEngineController_LS_128_B.s92_SparkEnergy = 0.0;
    BaseEngineController_LS_128_B.s879_MinMax1 = 0.0;
    BaseEngineController_LS_128_B.s883_MinMax1 = 0.0;
    BaseEngineController_LS_128_B.s475_Switch = 0.0;
    BaseEngineController_LS_128_B.s92_Throttle = 0.0;
    BaseEngineController_LS_128_B.s796_ETC = 0.0;
    BaseEngineController_LS_128_B.s92_IACP = 0.0;
    BaseEngineController_LS_128_B.s897_MinMax1 = 0.0;
    BaseEngineController_LS_128_B.s92_IACS = 0.0;
    BaseEngineController_LS_128_B.s901_MinMax1 = 0.0;
    BaseEngineController_LS_128_B.s92_SOI = 0.0;
    BaseEngineController_LS_128_B.s64_constreftoatm = 0.0;
    BaseEngineController_LS_128_B.s21_Sum2 = 0.0;
    BaseEngineController_LS_128_B.s21_Sum1 = 0.0;
    BaseEngineController_LS_128_B.s92_MakeUpEOI = 0.0;
    BaseEngineController_LS_128_B.s92_WASTEGATE = 0.0;
    BaseEngineController_LS_128_B.s928_MinMax1 = 0.0;
    BaseEngineController_LS_128_B.s448_Sum3 = 0.0;
    BaseEngineController_LS_128_B.s487_GPS_Latitude = 0.0;
    BaseEngineController_LS_128_B.s487_GPS_Longitude = 0.0;
    BaseEngineController_LS_128_B.s565_Sum1 = 0.0;
    BaseEngineController_LS_128_B.s626_Merge = 0.0;
    BaseEngineController_LS_128_B.s851_Sum = 0.0;
    BaseEngineController_LS_128_B.s852_Sum = 0.0;
    BaseEngineController_LS_128_B.s854_CrankCounter = 0.0;
    BaseEngineController_LS_128_B.s646_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_128_B.s640_Merge = 0.0;
    BaseEngineController_LS_128_B.s645_Merge = 0.0;
    BaseEngineController_LS_128_B.s668_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_128_B.s651_Merge = 0.0;
    BaseEngineController_LS_128_B.s667_Merge = 0.0;
    BaseEngineController_LS_128_B.s686_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_128_B.s653_Merge = 0.0;
    BaseEngineController_LS_128_B.s685_Merge = 0.0;
    BaseEngineController_LS_128_B.s677_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_128_B.s676_Merge = 0.0;
    BaseEngineController_LS_128_B.s659_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_128_B.s658_Merge = 0.0;
    BaseEngineController_LS_128_B.s442_Merge = 0.0;
    BaseEngineController_LS_128_B.s460_Sum2 = 0.0;
    BaseEngineController_LS_128_B.s403_Timer = 0.0;
    BaseEngineController_LS_128_B.s290_UnitDelay = 0.0;
    BaseEngineController_LS_128_B.s283_Product1 = 0.0;
    BaseEngineController_LS_128_B.s283_Switch = 0.0;
    BaseEngineController_LS_128_B.s291_etc = 0.0;
    BaseEngineController_LS_128_B.s102_MultiportSwitch = 0.0;
    BaseEngineController_LS_128_B.s277_Add = 0.0;
    BaseEngineController_LS_128_B.s274_Product = 0.0;
    BaseEngineController_LS_128_B.s273_Product = 0.0;
    BaseEngineController_LS_128_B.s112_ApplyOffsetstoBaseSparkAdvance1 = 0.0;
    BaseEngineController_LS_128_B.s280_MinMax1 = 0.0;
    BaseEngineController_LS_128_B.s275_Switch = 0.0;
    BaseEngineController_LS_128_B.s112_motohawk_interpolation_2d1 = 0.0;
    BaseEngineController_LS_128_B.s109_Sum = 0.0;
    BaseEngineController_LS_128_B.s188_DontallowsetpointtoevergoabovetheTargetRPM
      = 0.0;
    BaseEngineController_LS_128_B.s197_Sum2 = 0.0;
    BaseEngineController_LS_128_B.s197_Product2 = 0.0;
    BaseEngineController_LS_128_B.s198_Product = 0.0;
    BaseEngineController_LS_128_B.s199_Switch1 = 0.0;
    BaseEngineController_LS_128_B.s190_Switch = 0.0;
    BaseEngineController_LS_128_B.s186_Sum = 0.0;
    BaseEngineController_LS_128_B.s106_Switch4 = 0.0;
    BaseEngineController_LS_128_B.s106_Switch5 = 0.0;
    BaseEngineController_LS_128_B.s143_Switch1 = 0.0;
    BaseEngineController_LS_128_B.s104_MinMax2 = 0.0;
    BaseEngineController_LS_128_B.s141_Sum2 = 0.0;
    BaseEngineController_LS_128_B.s141_Product2 = 0.0;
    BaseEngineController_LS_128_B.s142_Product = 0.0;
    BaseEngineController_LS_128_B.s132_Switch = 0.0;
    BaseEngineController_LS_128_B.s104_Sum3 = 0.0;
    BaseEngineController_LS_128_B.s104_Switch = 0.0;
    BaseEngineController_LS_128_B.s219_MinMax1 = 0.0;
    BaseEngineController_LS_128_B.s209_DontallowsetpointtoeverdropbelowtheTargetRPM
      = 0.0;
    BaseEngineController_LS_128_B.s235_Sum2 = 0.0;
    BaseEngineController_LS_128_B.s235_Product2 = 0.0;
    BaseEngineController_LS_128_B.s236_Product = 0.0;
    BaseEngineController_LS_128_B.s237_Switch1 = 0.0;
    BaseEngineController_LS_128_B.s110_MinGovAirPID = 0.0;
    BaseEngineController_LS_128_B.s230_Sum1 = 0.0;
    BaseEngineController_LS_128_B.s230_Product = 0.0;
    BaseEngineController_LS_128_B.s231_Product = 0.0;
    BaseEngineController_LS_128_B.s110_IdleSpk = 0.0;
    BaseEngineController_LS_128_B.s227_Switch = 0.0;
    BaseEngineController_LS_128_B.s212_DontallowsetpointtoeverdropbelowtheTargetRPM
      = 0.0;
    BaseEngineController_LS_128_B.s147_Product1 = 0.0;
    BaseEngineController_LS_128_B.s147_SpkOut = 0.0;
    BaseEngineController_LS_128_B.s244_Switch = 0.0;
    BaseEngineController_LS_128_B.s264_Sum2 = 0.0;
    BaseEngineController_LS_128_B.s264_Product2 = 0.0;
    BaseEngineController_LS_128_B.s266_Switch1 = 0.0;
    BaseEngineController_LS_128_B.s265_Product = 0.0;
    BaseEngineController_LS_128_B.s262_Switch3 = 0.0;
    BaseEngineController_LS_128_B.s262_Switch1 = 0.0;
    BaseEngineController_LS_128_B.s262_Switch4 = 0.0;
    BaseEngineController_LS_128_B.s243_Switch = 0.0;
    BaseEngineController_LS_128_B.s252_Sum2 = 0.0;
    BaseEngineController_LS_128_B.s252_Product2 = 0.0;
    BaseEngineController_LS_128_B.s254_Switch1 = 0.0;
    BaseEngineController_LS_128_B.s253_Product = 0.0;
    BaseEngineController_LS_128_B.s250_Switch3 = 0.0;
    BaseEngineController_LS_128_B.s250_Switch1 = 0.0;
    BaseEngineController_LS_128_B.s250_Switch4 = 0.0;
    BaseEngineController_LS_128_B.s164_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_128_B.s162_FuelFlowMassAirflowEquivalenceRatioAirtofuelRatio
      = 0.0;
    BaseEngineController_LS_128_B.s159_PerCylinderMassFlowRate = 0.0;
    BaseEngineController_LS_128_B.s184_MinMax1 = 0.0;
    BaseEngineController_LS_128_B.s185_MinMax1 = 0.0;
    BaseEngineController_LS_128_B.s174_Sum1 = 0.0;
    BaseEngineController_LS_128_B.s165_Sum1 = 0.0;
    BaseEngineController_LS_128_B.s173_Sum1 = 0.0;
    BaseEngineController_LS_128_B.s165_Sum = 0.0;
    BaseEngineController_LS_128_B.s165_Product1 = 0.0;
    BaseEngineController_LS_128_B.s172_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_128_B.s169_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_128_B.s103_WarmUpRatio = 0.0;
    BaseEngineController_LS_128_B.s127_Switch = 0.0;
    BaseEngineController_LS_128_B.s103_IATEnrichment = 0.0;
    BaseEngineController_LS_128_B.s103_CATEnrichment = 0.0;
    BaseEngineController_LS_128_B.s103_DesEquivRatio = 0.0;
    BaseEngineController_LS_128_B.s87_Sum = 0.0;
    BaseEngineController_LS_128_B.s23_Sum = 0.0;
    BaseEngineController_LS_128_B.s72_UnitDelay2 = 0.0;
    BaseEngineController_LS_128_B.s82_Switch1 = 0.0;
    BaseEngineController_LS_128_B.s63_Switch = 0.0;
    BaseEngineController_LS_128_B.s31_MultiportSwitch = 0.0;
    BaseEngineController_LS_128_B.s42_Product = 0.0;
    BaseEngineController_LS_128_B.s41_Switch2 = 0.0;
    BaseEngineController_LS_128_B.s46_Product = 0.0;
    BaseEngineController_LS_128_B.s38_Sum2 = 0.0;
    BaseEngineController_LS_128_B.s47_Product = 0.0;
    BaseEngineController_LS_128_B.s38_Product2 = 0.0;
    BaseEngineController_LS_128_B.s48_Switch1 = 0.0;
    BaseEngineController_LS_128_B.s51_MinMax1 = 0.0;
    BaseEngineController_LS_128_B.s20_Switch = 0.0;
    BaseEngineController_LS_128_B.s52_In1 = 0.0;
    BaseEngineController_LS_128_B.s27_TestTime = 0.0;
    BaseEngineController_LS_128_B.s949_Switch = 0.0;
    BaseEngineController_LS_128_B.s444_CollectAverage.s408_Product = 0.0;
    BaseEngineController_LS_128_B.s443_CollectAverage.s408_Product = 0.0;
    BaseEngineController_LS_128_B.s404_CollectAverage.s408_Product = 0.0;
  }

  /* states (dwork) */
  (void) memset((void *)&BaseEngineController_LS_128_DWork, 0,
                sizeof(D_Work_BaseEngineController_LS_128));
  BaseEngineController_LS_128_DWork.s692_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s717_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s749_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s742_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s690_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s705_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s732_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s725_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s558_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s572_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s557_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s766_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s759_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s783_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s776_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s584_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s559_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s583_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s581_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s581_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s581_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s513_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s546_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s512_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s543_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s513_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s513_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s450_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s489_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s496_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s490_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s504_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s450_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s566_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s635_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s561_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s601_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s562_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s407_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s510_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s529_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s423_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s426_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s424_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s429_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s465_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s467_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s609_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s417_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s819_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s817_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s823_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s829_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s824_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s832_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s825_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s826_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s827_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s823_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s823_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s823_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s824_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s824_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s824_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s840_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s560_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s593_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s841_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s564_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s619_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s842_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s844_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s848_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s847_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s565_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s627_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s423_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s423_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s423_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s424_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s424_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s424_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s729_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s729_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s729_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s729_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s746_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s746_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s746_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s746_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s763_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s763_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s763_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s763_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s780_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s780_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s780_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s780_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s851_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s852_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s854_CrankCounter_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s640_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s647_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s651_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s669_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s653_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s687_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s652_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s678_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s650_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s660_UnitDelay_DSTATE = 0.0;

  {
    int_T i;
    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_128_DWork.s316_UnitDelay_DSTATE[i] = 0.0;
    }
  }

  BaseEngineController_LS_128_DWork.s344_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s345_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s442_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s457_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s460_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s442_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s442_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s442_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s290_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s275_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s188_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s198_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s199_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s104_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s143_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s133_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s142_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s224_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s226_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s110_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s110_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s205_state_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s110_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s209_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s236_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s237_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s231_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s212_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s148_state_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s266_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s265_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s262_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s262_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s262_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s254_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s253_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s250_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s250_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s250_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s174_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s173_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s87_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s72_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s20_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s55_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s46_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s42_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s44_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s47_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s48_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s938_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s938_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_128_DWork.s403_TOld = 0.0;
  BaseEngineController_LS_128_DWork.s27_TimerOld = 0.0;
  BaseEngineController_LS_128_DWork.s444_CollectAverage.s408_UnitDelay1_DSTATE =
    0.0;
  BaseEngineController_LS_128_DWork.s443_CollectAverage.s408_UnitDelay1_DSTATE =
    0.0;
  BaseEngineController_LS_128_DWork.s404_CollectAverage.s408_UnitDelay1_DSTATE =
    0.0;

  /* Start for S-Function (motohawk_sfun_trigger): '<Root>/motohawk_trigger' */
  BaseEngineController_LS_128_Foreground_Start();

  /* Start for S-Function (motohawk_sfun_trigger): '<S1>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_IDLE_EVENT_9p001 */
  BaseEngineController_LS_128_DWork.s1_motohawk_trigger1_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_RTI_PERIODIC_12065p0004 */
  BaseEngineController_LS_128_DWork.s5_motohawk_trigger1_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_5XRTI_PERIODIC_12064p0004 */
  BaseEngineController_LS_128_DWork.s5_motohawk_trigger_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger2' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_MID_TDC_EVENT_12066p0004 */
  BaseEngineController_LS_128_DWork.s5_motohawk_trigger2_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger3' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_20XRTI_PERIODIC_12067p0004 */
  BaseEngineController_LS_128_DWork.s5_motohawk_trigger3_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger4' */

  /* Clear enable/disable state for embedded trigger Trigger_BGND_BASE_PERIODIC_12068p0004 */
  BaseEngineController_LS_128_DWork.s5_motohawk_trigger4_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger5' */

  /* Clear enable/disable state for embedded trigger Trigger_BGND_BASEx2_PERIODIC_12069p0004 */
  BaseEngineController_LS_128_DWork.s5_motohawk_trigger5_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger6' */

  /* Clear enable/disable state for embedded trigger Trigger_BGND_BASEx10_PERIODIC_12070p0004 */
  BaseEngineController_LS_128_DWork.s5_motohawk_trigger6_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger7' */

  /* Clear enable/disable state for embedded trigger Trigger_ONE_SECOND_EVENT_12071p0004 */
  BaseEngineController_LS_128_DWork.s5_motohawk_trigger7_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S4>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_IDLE_EVENT_11990p0004 */
  BaseEngineController_LS_128_DWork.s4_motohawk_trigger1_DWORK1 = 0;

  /* Start for function-call system: '<S3>/Main Power Relay' */

  /* Start for Triggered SubSystem: '<S934>/Clear' incorporates:
   *  Start for S-Function (fcncallgen): '<S943>/Function-Call Generator'
   *  Start for SubSystem: '<S932>/motohawk_restore_nvmem'
   */

  /* Start for Triggered SubSystem: '<S935>/Clear' incorporates:
   *  Start for S-Function (fcncallgen): '<S944>/Function-Call Generator'
   *  Start for SubSystem: '<S932>/motohawk_store_nvmem'
   */
  BaseEngineController_LS_128_PrevZCSigState.HitCrossing1_Input_ZCE =
    UNINITIALIZED_ZCSIG;
  BaseEngineController_LS_128_PrevZCSigState.ResetTasksCompleteToFalse_Trig_ZCE =
    POS_ZCSIG;
  BaseEngineController_LS_128_PrevZCSigState.ResetTasksCompleteToTrue_Trig_ZCE =
    POS_ZCSIG;
  BaseEngineController_LS_128_PrevZCSigState.ShutdownpoweronECU565563_Trig_ZCE =
    ZERO_ZCSIG;
  BaseEngineController_LS_128_PrevZCSigState.SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE
    = ZERO_ZCSIG;
  BaseEngineController_LS_128_PrevZCSigState.ProcessorReboot_Trig_ZCE =
    ZERO_ZCSIG;
  BaseEngineController_LS_128_PrevZCSigState.PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE
    = ZERO_ZCSIG;
  BaseEngineController_LS_128_PrevZCSigState.ShutdownpoweronECU565563_Trig_ZCE_o
    = ZERO_ZCSIG;
  BaseEngineController_LS_128_PrevZCSigState.SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE_k
    = ZERO_ZCSIG;
  BaseEngineController_LS_128_PrevZCSigState.ProcessorReboot_Trig_ZCE_j =
    ZERO_ZCSIG;
  BaseEngineController_LS_128_PrevZCSigState.PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE_d
    = ZERO_ZCSIG;
  BaseEngineController_LS_128_PrevZCSigState.Clear_Trig_ZCE = ZERO_ZCSIG;
  BaseEngineController_LS_128_PrevZCSigState.Clear_Trig_ZCE_o = ZERO_ZCSIG;

  /* InitializeConditions for S-Function (motohawk_sfun_trigger): '<Root>/motohawk_trigger' */
  BaseEngineController_LS_128_Foreground_Init();

  /* Initial conditions for function-call system: '<S3>/Main Power Relay' */

  /* S-Function Block: <S949>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_128_DWork.s949_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S940>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_128_DWork.s940_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for Stateflow: '<S932>/ECUP Latch' */

  /* Entry: Main Power Relay/Main Power Relay/ECUP Latch */
  /* Transition: '<S936>:3' */
  BaseEngineController_LS_128_DWork.s936_is_c8_BaseEngineController_LS_128 =
    BaseEngineController_LS_128_IN_PowerDown;

  /* Entry 'PowerDown': '<S936>:1' */
  BaseEngineController_LS_128_B.s936_MPRDState = FALSE;

  /* set "at time zero" to false */
  if (rtmIsFirstInitCond(BaseEngineController_LS_128_M)) {
    rtmSetFirstInitCond(BaseEngineController_LS_128_M, 0);
  }

  /* Level2 S-Function Block: '<S1>/motohawk_trigger1' (motohawk_sfun_trigger) */

  /* Enable for Trigger_IDLE_EVENT_9p001 */
  BaseEngineController_LS_128_DWork.s1_motohawk_trigger1_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger1' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_RTI_PERIODIC_12065p0004 */
  BaseEngineController_LS_128_DWork.s5_motohawk_trigger1_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_5XRTI_PERIODIC_12064p0004 */
  BaseEngineController_LS_128_DWork.s5_motohawk_trigger_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger2' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_MID_TDC_EVENT_12066p0004 */
  BaseEngineController_LS_128_DWork.s5_motohawk_trigger2_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger3' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_20XRTI_PERIODIC_12067p0004 */
  BaseEngineController_LS_128_DWork.s5_motohawk_trigger3_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger4' (motohawk_sfun_trigger) */

  /* Enable for Trigger_BGND_BASE_PERIODIC_12068p0004 */
  BaseEngineController_LS_128_DWork.s5_motohawk_trigger4_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger5' (motohawk_sfun_trigger) */

  /* Enable for Trigger_BGND_BASEx2_PERIODIC_12069p0004 */
  BaseEngineController_LS_128_DWork.s5_motohawk_trigger5_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger6' (motohawk_sfun_trigger) */

  /* Enable for Trigger_BGND_BASEx10_PERIODIC_12070p0004 */
  BaseEngineController_LS_128_DWork.s5_motohawk_trigger6_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger7' (motohawk_sfun_trigger) */

  /* Enable for Trigger_ONE_SECOND_EVENT_12071p0004 */
  BaseEngineController_LS_128_DWork.s5_motohawk_trigger7_DWORK1 = 1;

  /* Level2 S-Function Block: '<S4>/motohawk_trigger1' (motohawk_sfun_trigger) */

  /* Enable for Trigger_IDLE_EVENT_11990p0004 */
  BaseEngineController_LS_128_DWork.s4_motohawk_trigger1_DWORK1 = 1;
}

/* Model terminate function */
void BaseEngineController_LS_128_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
