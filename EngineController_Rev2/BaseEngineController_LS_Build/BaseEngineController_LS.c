/*
 * File: BaseEngineController_LS.c
 *
 * Code generated for Simulink model 'BaseEngineController_LS'.
 *
 * Model version                  : 1.2094
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Tue Nov 08 22:17:40 2022
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_LS.h"
#include "BaseEngineController_LS_private.h"

/* Named constants for Stateflow: '<S998>/ECUP Latch' */
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
  /* Enable for Trigger_IDLE_EVENT_13p0011 */
  if (BaseEngineController_LS_DWork.s1_motohawk_trigger1_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s1_motohawk_trigger1_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger1' */
  /* Enable for Trigger_FGND_RTI_PERIODIC_7368p0009 */
  if (BaseEngineController_LS_DWork.s5_motohawk_trigger1_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s5_motohawk_trigger1_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger' */
  /* Enable for Trigger_FGND_5XRTI_PERIODIC_7367p0009 */
  if (BaseEngineController_LS_DWork.s5_motohawk_trigger_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s5_motohawk_trigger_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger2' */
  /* Enable for Trigger_FGND_MID_TDC_EVENT_7369p0009 */
  if (BaseEngineController_LS_DWork.s5_motohawk_trigger2_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s5_motohawk_trigger2_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger3' */
  /* Enable for Trigger_FGND_20XRTI_PERIODIC_7370p0009 */
  if (BaseEngineController_LS_DWork.s5_motohawk_trigger3_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s5_motohawk_trigger3_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger4' */
  /* Enable for Trigger_BGND_BASE_PERIODIC_7371p0009 */
  if (BaseEngineController_LS_DWork.s5_motohawk_trigger4_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s5_motohawk_trigger4_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger5' */
  /* Enable for Trigger_BGND_BASEx2_PERIODIC_7372p0009 */
  if (BaseEngineController_LS_DWork.s5_motohawk_trigger5_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s5_motohawk_trigger5_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger6' */
  /* Enable for Trigger_BGND_BASEx10_PERIODIC_7373p0009 */
  if (BaseEngineController_LS_DWork.s5_motohawk_trigger6_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s5_motohawk_trigger6_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger7' */
  /* Enable for Trigger_ONE_SECOND_EVENT_7374p0009 */
  if (BaseEngineController_LS_DWork.s5_motohawk_trigger7_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s5_motohawk_trigger7_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S4>/motohawk_trigger1' */
  /* Enable for Trigger_IDLE_EVENT_7362p0009 */
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
      BaseEngineController_LS_B.s339_Sum1[i] = 0.0;
    }

    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_B.s338_chargemass[i] = 0.0;
    }

    BaseEngineController_LS_B.s774_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_B.s753_Switch = 0.0;
    BaseEngineController_LS_B.s797_MinMax = 0.0;
    BaseEngineController_LS_B.s797_MinMax1 = 0.0;
    BaseEngineController_LS_B.s801_MinMax1 = 0.0;
    BaseEngineController_LS_B.s772_Merge = 0.0;
    BaseEngineController_LS_B.s811_Merge = 0.0;
    BaseEngineController_LS_B.s762_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_B.s752_Switch = 0.0;
    BaseEngineController_LS_B.s780_MinMax = 0.0;
    BaseEngineController_LS_B.s780_MinMax1 = 0.0;
    BaseEngineController_LS_B.s784_MinMax1 = 0.0;
    BaseEngineController_LS_B.s760_Merge = 0.0;
    BaseEngineController_LS_B.s794_Merge = 0.0;
    BaseEngineController_LS_B.s404_Switch1 = 0.0;
    BaseEngineController_LS_B.s430_Sum = 0.0;
    BaseEngineController_LS_B.s442_RPMInst = 0.0;
    BaseEngineController_LS_B.s559_DataTypeConversion = 0.0;
    BaseEngineController_LS_B.s616_Sum1 = 0.0;
    BaseEngineController_LS_B.s629_Merge = 0.0;
    BaseEngineController_LS_B.s615_Sum1 = 0.0;
    BaseEngineController_LS_B.s754_Switch = 0.0;
    BaseEngineController_LS_B.s814_MinMax = 0.0;
    BaseEngineController_LS_B.s814_MinMax1 = 0.0;
    BaseEngineController_LS_B.s818_MinMax1 = 0.0;
    BaseEngineController_LS_B.s755_Switch = 0.0;
    BaseEngineController_LS_B.s831_MinMax = 0.0;
    BaseEngineController_LS_B.s831_MinMax1 = 0.0;
    BaseEngineController_LS_B.s835_MinMax1 = 0.0;
    BaseEngineController_LS_B.s828_Merge = 0.0;
    BaseEngineController_LS_B.s845_Merge = 0.0;
    BaseEngineController_LS_B.s411_Switch2 = 0.0;
    BaseEngineController_LS_B.s617_Sum1 = 0.0;
    BaseEngineController_LS_B.s637_Merge = 0.0;
    BaseEngineController_LS_B.s446_ReadCANMessage_o3 = 0.0;
    BaseEngineController_LS_B.s446_ReadCANMessage_o4 = 0.0;
    BaseEngineController_LS_B.s446_ReadCANMessage_o5 = 0.0;
    BaseEngineController_LS_B.s446_ReadCANMessage_o6 = 0.0;
    BaseEngineController_LS_B.s446_ReadCANMessage_o7 = 0.0;
    BaseEngineController_LS_B.s446_ReadCANMessage_o8 = 0.0;
    BaseEngineController_LS_B.s446_ReadCANMessage2_o2 = 0.0;
    BaseEngineController_LS_B.s446_ReadCANMessage2_o3 = 0.0;
    BaseEngineController_LS_B.s446_ReadCANMessage2_o4 = 0.0;
    BaseEngineController_LS_B.s446_ReadCANMessage2_o5 = 0.0;
    BaseEngineController_LS_B.s441_Gain1 = 0.0;
    BaseEngineController_LS_B.s600_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_B.s599_Merge = 0.0;
    BaseEngineController_LS_B.s566_Switch = 0.0;
    BaseEngineController_LS_B.s415_Switch2 = 0.0;
    BaseEngineController_LS_B.s447_ReadCANMessage_o2 = 0.0;
    BaseEngineController_LS_B.s447_ReadCANMessage_o3 = 0.0;
    BaseEngineController_LS_B.s447_ReadCANMessage_o4 = 0.0;
    BaseEngineController_LS_B.s447_ReadCANMessage_o5 = 0.0;
    BaseEngineController_LS_B.s447_ReadCANMessage_o6 = 0.0;
    BaseEngineController_LS_B.s447_ReadCANMessage_o7 = 0.0;
    BaseEngineController_LS_B.s447_ReadCANMessage_o8 = 0.0;
    BaseEngineController_LS_B.s447_ReadCANMessage_o9 = 0.0;
    BaseEngineController_LS_B.s447_ReadCANMessage_o10 = 0.0;
    BaseEngineController_LS_B.s447_MathFunction = 0.0;
    BaseEngineController_LS_B.s487_Sum1 = 0.0;
    BaseEngineController_LS_B.s447_ReadCANMessage1_o2 = 0.0;
    BaseEngineController_LS_B.s447_ReadCANMessage1_o3 = 0.0;
    BaseEngineController_LS_B.s447_ReadCANMessage1_o4 = 0.0;
    BaseEngineController_LS_B.s447_ReadCANMessage1_o5 = 0.0;
    BaseEngineController_LS_B.s447_ReadCANMessage1_o6 = 0.0;
    BaseEngineController_LS_B.s447_ReadCANMessage1_o7 = 0.0;
    BaseEngineController_LS_B.s447_ReadCANMessage1_o8 = 0.0;
    BaseEngineController_LS_B.s447_ReadCANMessage1_o9 = 0.0;
    BaseEngineController_LS_B.s447_ReadCANMessage1_o10 = 0.0;
    BaseEngineController_LS_B.s447_MathFunction1 = 0.0;
    BaseEngineController_LS_B.s488_Sum1 = 0.0;
    BaseEngineController_LS_B.s511_Merge = 0.0;
    BaseEngineController_LS_B.s519_Merge = 0.0;
    BaseEngineController_LS_B.s447_MultiportSwitch = 0.0;
    BaseEngineController_LS_B.s409_Sum1 = 0.0;
    BaseEngineController_LS_B.s432_Switch = 0.0;
    BaseEngineController_LS_B.s624_Sum1 = 0.0;
    BaseEngineController_LS_B.s692_Merge = 0.0;
    BaseEngineController_LS_B.s621_Merge = 0.0;
    BaseEngineController_LS_B.s619_Sum1 = 0.0;
    BaseEngineController_LS_B.s658_Merge = 0.0;
    BaseEngineController_LS_B.s357_motohawk_delta_time = 0.0;
    BaseEngineController_LS_B.s620_Sum1 = 0.0;
    BaseEngineController_LS_B.s367_Sum = 0.0;
    BaseEngineController_LS_B.s366_motohawk_interpolation_2d2 = 0.0;
    BaseEngineController_LS_B.s366_Sum = 0.0;
    BaseEngineController_LS_B.s366_NominalAirFlowRate = 0.0;
    BaseEngineController_LS_B.s366_ModelAirMassFlowRate = 0.0;
    BaseEngineController_LS_B.s441_Gain = 0.0;
    BaseEngineController_LS_B.s581_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_B.s580_Merge = 0.0;
    BaseEngineController_LS_B.s366_MultiportSwitch = 0.0;
    BaseEngineController_LS_B.s382_Merge = 0.0;
    BaseEngineController_LS_B.s385_Sum1 = 0.0;
    BaseEngineController_LS_B.s383_Merge = 0.0;
    BaseEngineController_LS_B.s388_Sum1 = 0.0;
    BaseEngineController_LS_B.s426_Sum1 = 0.0;
    BaseEngineController_LS_B.s560_DataTypeConversion = 0.0;
    BaseEngineController_LS_B.s563_DataTypeConversion = 0.0;
    BaseEngineController_LS_B.s666_Merge = 0.0;
    BaseEngineController_LS_B.s358_motohawk_data_read = 0.0;
    BaseEngineController_LS_B.s377_Sum1 = 0.0;
    BaseEngineController_LS_B.s877_Sum1 = 0.0;
    BaseEngineController_LS_B.s874_Switch = 0.0;
    BaseEngineController_LS_B.s881_Merge = 0.0;
    BaseEngineController_LS_B.s881_Switch = 0.0;
    BaseEngineController_LS_B.s882_Merge = 0.0;
    BaseEngineController_LS_B.s882_Switch = 0.0;
    BaseEngineController_LS_B.s408_MultiportSwitch = 0.0;
    BaseEngineController_LS_B.s135_SparkAdv = 0.0;
    BaseEngineController_LS_B.s618_Sum1 = 0.0;
    BaseEngineController_LS_B.s650_Merge = 0.0;
    BaseEngineController_LS_B.s622_Sum1 = 0.0;
    BaseEngineController_LS_B.s676_Merge = 0.0;
    BaseEngineController_LS_B.s135_FAN1 = 0.0;
    BaseEngineController_LS_B.s135_FAN2 = 0.0;
    BaseEngineController_LS_B.s135_SparkEnergy = 0.0;
    BaseEngineController_LS_B.s945_MinMax1 = 0.0;
    BaseEngineController_LS_B.s949_MinMax1 = 0.0;
    BaseEngineController_LS_B.s434_Switch = 0.0;
    BaseEngineController_LS_B.s135_Throttle = 0.0;
    BaseEngineController_LS_B.s854_ETC = 0.0;
    BaseEngineController_LS_B.s135_IACP = 0.0;
    BaseEngineController_LS_B.s963_MinMax1 = 0.0;
    BaseEngineController_LS_B.s135_IACS = 0.0;
    BaseEngineController_LS_B.s967_MinMax1 = 0.0;
    BaseEngineController_LS_B.s135_SOI = 0.0;
    BaseEngineController_LS_B.s64_constreftoatm = 0.0;
    BaseEngineController_LS_B.s135_FuelMult = 0.0;
    BaseEngineController_LS_B.s21_Sum2 = 0.0;
    BaseEngineController_LS_B.s21_Sum1 = 0.0;
    BaseEngineController_LS_B.s135_MakeUpEOI = 0.0;
    BaseEngineController_LS_B.s135_WASTEGATE = 0.0;
    BaseEngineController_LS_B.s994_MinMax1 = 0.0;
    BaseEngineController_LS_B.s409_Sum3 = 0.0;
    BaseEngineController_LS_B.s407_Sum3 = 0.0;
    BaseEngineController_LS_B.s446_ReadCANMessage1_o2 = 0.0;
    BaseEngineController_LS_B.s446_ReadCANMessage1_o3 = 0.0;
    BaseEngineController_LS_B.s623_Sum1 = 0.0;
    BaseEngineController_LS_B.s684_Merge = 0.0;
    BaseEngineController_LS_B.s909_Sum = 0.0;
    BaseEngineController_LS_B.s910_Sum = 0.0;
    BaseEngineController_LS_B.s912_CrankCounter = 0.0;
    BaseEngineController_LS_B.s704_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_B.s703_Merge = 0.0;
    BaseEngineController_LS_B.s726_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_B.s709_Merge = 0.0;
    BaseEngineController_LS_B.s725_Merge = 0.0;
    BaseEngineController_LS_B.s744_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_B.s711_Merge = 0.0;
    BaseEngineController_LS_B.s743_Merge = 0.0;
    BaseEngineController_LS_B.s735_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_B.s734_Merge = 0.0;
    BaseEngineController_LS_B.s717_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_B.s716_Merge = 0.0;
    BaseEngineController_LS_B.s401_Merge = 0.0;
    BaseEngineController_LS_B.s419_Sum2 = 0.0;
    BaseEngineController_LS_B.s363_Timer = 0.0;
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
    BaseEngineController_LS_B.s1015_Switch = 0.0;
    BaseEngineController_LS_B.s403_CollectAverage.s368_Product = 0.0;
    BaseEngineController_LS_B.s402_CollectAverage.s368_Product = 0.0;
    BaseEngineController_LS_B.s364_CollectAverage.s368_Product = 0.0;
  }

  /* states (dwork) */
  (void) memset((void *)&BaseEngineController_LS_DWork, 0,
                sizeof(D_Work_BaseEngineController_LS));
  BaseEngineController_LS_DWork.s750_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s775_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s807_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s800_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s748_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s763_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s790_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s783_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s616_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s630_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s615_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s824_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s817_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s841_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s834_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s642_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s617_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s641_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s639_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s639_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s639_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s566_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s604_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s565_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s601_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s566_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s566_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s409_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s487_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s512_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s488_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s520_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s624_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s693_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s619_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s659_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s620_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s367_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s562_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s582_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s382_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s385_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s383_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s388_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s424_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s426_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s667_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s377_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s877_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s875_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s881_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s887_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s882_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s890_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s883_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s884_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s885_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s881_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s881_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s881_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s882_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s882_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s882_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s898_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s618_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s651_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s899_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s622_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s677_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s900_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s902_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s906_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s905_UnitDelay_DSTATE = 0.0;
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

  BaseEngineController_LS_DWork.s409_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s623_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s685_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s382_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s382_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s382_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s383_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s383_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s383_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s787_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s787_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s787_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s787_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s804_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s804_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s804_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s804_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s821_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s821_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s821_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s821_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s838_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s838_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s838_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s838_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s909_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s910_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s912_CrankCounter_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s698_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s705_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s709_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s727_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s711_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s745_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s710_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s736_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s708_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s718_UnitDelay_DSTATE = 0.0;

  {
    int_T i;
    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_DWork.s339_UnitDelay_DSTATE[i] = 0.0;
    }
  }

  BaseEngineController_LS_DWork.s401_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s416_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s419_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s401_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s401_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s401_UnitDelay4_DSTATE = 0.0;
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
  BaseEngineController_LS_DWork.s1004_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s1004_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s363_TOld = 0.0;
  BaseEngineController_LS_DWork.s27_TimerOld = 0.0;
  BaseEngineController_LS_DWork.s403_CollectAverage.s368_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s402_CollectAverage.s368_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s364_CollectAverage.s368_UnitDelay1_DSTATE = 0.0;

  /* Start for S-Function (motohawk_sfun_trigger): '<Root>/motohawk_trigger' */
  BaseEngineController_LS_Foreground_Start();

  /* Start for S-Function (motohawk_sfun_trigger): '<S1>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_IDLE_EVENT_13p0011 */
  BaseEngineController_LS_DWork.s1_motohawk_trigger1_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_RTI_PERIODIC_7368p0009 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger1_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_5XRTI_PERIODIC_7367p0009 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger2' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_MID_TDC_EVENT_7369p0009 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger2_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger3' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_20XRTI_PERIODIC_7370p0009 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger3_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger4' */

  /* Clear enable/disable state for embedded trigger Trigger_BGND_BASE_PERIODIC_7371p0009 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger4_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger5' */

  /* Clear enable/disable state for embedded trigger Trigger_BGND_BASEx2_PERIODIC_7372p0009 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger5_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger6' */

  /* Clear enable/disable state for embedded trigger Trigger_BGND_BASEx10_PERIODIC_7373p0009 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger6_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger7' */

  /* Clear enable/disable state for embedded trigger Trigger_ONE_SECOND_EVENT_7374p0009 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger7_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S4>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_IDLE_EVENT_7362p0009 */
  BaseEngineController_LS_DWork.s4_motohawk_trigger1_DWORK1 = 0;

  /* Start for function-call system: '<S3>/Main Power Relay' */

  /* Start for Triggered SubSystem: '<S1000>/Clear' incorporates:
   *  Start for S-Function (fcncallgen): '<S1009>/Function-Call Generator'
   *  Start for SubSystem: '<S998>/motohawk_restore_nvmem'
   */

  /* Start for Triggered SubSystem: '<S1001>/Clear' incorporates:
   *  Start for S-Function (fcncallgen): '<S1010>/Function-Call Generator'
   *  Start for SubSystem: '<S998>/motohawk_store_nvmem'
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

  /* S-Function Block: <S1015>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s1015_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S1006>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s1006_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for Stateflow: '<S998>/ECUP Latch' */

  /* Entry: Main Power Relay/Main Power Relay/ECUP Latch */
  /* Transition: '<S1002>:3' */
  BaseEngineController_LS_DWork.s1002_is_c8_BaseEngineController_LS =
    BaseEngineController_LS_IN_PowerDown;

  /* Entry 'PowerDown': '<S1002>:1' */
  BaseEngineController_LS_B.s1002_MPRDState = FALSE;

  /* set "at time zero" to false */
  if (rtmIsFirstInitCond(BaseEngineController_LS_M)) {
    rtmSetFirstInitCond(BaseEngineController_LS_M, 0);
  }

  /* Level2 S-Function Block: '<S1>/motohawk_trigger1' (motohawk_sfun_trigger) */

  /* Enable for Trigger_IDLE_EVENT_13p0011 */
  BaseEngineController_LS_DWork.s1_motohawk_trigger1_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger1' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_RTI_PERIODIC_7368p0009 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger1_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_5XRTI_PERIODIC_7367p0009 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger2' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_MID_TDC_EVENT_7369p0009 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger2_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger3' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_20XRTI_PERIODIC_7370p0009 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger3_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger4' (motohawk_sfun_trigger) */

  /* Enable for Trigger_BGND_BASE_PERIODIC_7371p0009 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger4_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger5' (motohawk_sfun_trigger) */

  /* Enable for Trigger_BGND_BASEx2_PERIODIC_7372p0009 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger5_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger6' (motohawk_sfun_trigger) */

  /* Enable for Trigger_BGND_BASEx10_PERIODIC_7373p0009 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger6_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger7' (motohawk_sfun_trigger) */

  /* Enable for Trigger_ONE_SECOND_EVENT_7374p0009 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger7_DWORK1 = 1;

  /* Level2 S-Function Block: '<S4>/motohawk_trigger1' (motohawk_sfun_trigger) */

  /* Enable for Trigger_IDLE_EVENT_7362p0009 */
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
