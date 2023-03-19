/*
 * File: BaseEngineController_LS_112.c
 *
 * Code generated for Simulink model 'BaseEngineController_LS_112'.
 *
 * Model version                  : 1.2194
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Tue Nov 22 13:56:25 2022
 *
 * Target selection: motohawk_motocoder_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_LS_112.h"
#include "BaseEngineController_LS_112_private.h"

/* Named constants for Stateflow: '<S930>/ECUP Latch' */
#define BaseEngineController_LS_112_IN_PowerDown (1U)
#define BaseEngineController_LS_112_IN_PowerUp (2U)

/* Block signals (auto storage) */
BlockIO_BaseEngineController_LS_112 BaseEngineController_LS_112_B;

/* Block states (auto storage) */
D_Work_BaseEngineController_LS_112 BaseEngineController_LS_112_DWork;

/* Previous zero-crossings (trigger) states */
PrevZCSigStates_BaseEngineController_LS_112
  BaseEngineController_LS_112_PrevZCSigState;

/* Real-time model */
RT_MODEL_BaseEngineController_LS_112 BaseEngineController_LS_112_M_;
RT_MODEL_BaseEngineController_LS_112 *const BaseEngineController_LS_112_M =
  &BaseEngineController_LS_112_M_;

/* Output and update for function-call system: '<S4>/CCP Daq Processing' */
void BaseEngineController_LS_112_CCPDaqProcessing(int_T controlPortIdx)
{
  /* local block i/o variables */
  int8_T rtb_f_f[8];
  int32_T i;

  /* Outputs for Function Call SubSystem: '<S4>/CCP Daq Processing' incorporates:
   *  TriggerPort: '<S7>/f'
   */
  for (i = 0; i < 8; i++) {
    rtb_f_f[i] = 0;
  }

  rtb_f_f[controlPortIdx] = 2;

  /* <S7>/motohawk_sfun_ccp_protocol: CCP Protocol CCP1 */
  {
    extern S_CCPHandlerInstance mh_CCP1_CCPHandlerInstance;
    extern S_CCPHandlerConfig mh_CCP1_CCPHandlerConfig;

    /* Tick */
    mh_ProcessCCPTick(rtb_f_f, &mh_CCP1_CCPHandlerConfig,
                      &mh_CCP1_CCPHandlerInstance);
  }
}

/* Model step function */
void BaseEngineController_LS_112_step(void)
{
  /* S-Function (motohawk_sfun_trigger): '<S1>/motohawk_trigger1' */
  /* Enable for Trigger_IDLE_EVENT_9p001 */
  if (BaseEngineController_LS_112_DWork.s1_motohawk_trigger1_DWORK1 == 0) {
    BaseEngineController_LS_112_DWork.s1_motohawk_trigger1_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger1' */
  /* Enable for Trigger_FGND_RTI_PERIODIC_12065p0004 */
  if (BaseEngineController_LS_112_DWork.s5_motohawk_trigger1_DWORK1 == 0) {
    BaseEngineController_LS_112_DWork.s5_motohawk_trigger1_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger' */
  /* Enable for Trigger_FGND_5XRTI_PERIODIC_12064p0004 */
  if (BaseEngineController_LS_112_DWork.s5_motohawk_trigger_DWORK1 == 0) {
    BaseEngineController_LS_112_DWork.s5_motohawk_trigger_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger2' */
  /* Enable for Trigger_FGND_MID_TDC_EVENT_12066p0004 */
  if (BaseEngineController_LS_112_DWork.s5_motohawk_trigger2_DWORK1 == 0) {
    BaseEngineController_LS_112_DWork.s5_motohawk_trigger2_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger3' */
  /* Enable for Trigger_FGND_20XRTI_PERIODIC_12067p0004 */
  if (BaseEngineController_LS_112_DWork.s5_motohawk_trigger3_DWORK1 == 0) {
    BaseEngineController_LS_112_DWork.s5_motohawk_trigger3_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger4' */
  /* Enable for Trigger_BGND_BASE_PERIODIC_12068p0004 */
  if (BaseEngineController_LS_112_DWork.s5_motohawk_trigger4_DWORK1 == 0) {
    BaseEngineController_LS_112_DWork.s5_motohawk_trigger4_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger5' */
  /* Enable for Trigger_BGND_BASEx2_PERIODIC_12069p0004 */
  if (BaseEngineController_LS_112_DWork.s5_motohawk_trigger5_DWORK1 == 0) {
    BaseEngineController_LS_112_DWork.s5_motohawk_trigger5_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger6' */
  /* Enable for Trigger_BGND_BASEx10_PERIODIC_12070p0004 */
  if (BaseEngineController_LS_112_DWork.s5_motohawk_trigger6_DWORK1 == 0) {
    BaseEngineController_LS_112_DWork.s5_motohawk_trigger6_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger7' */
  /* Enable for Trigger_ONE_SECOND_EVENT_12071p0004 */
  if (BaseEngineController_LS_112_DWork.s5_motohawk_trigger7_DWORK1 == 0) {
    BaseEngineController_LS_112_DWork.s5_motohawk_trigger7_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S4>/motohawk_trigger1' */
  /* Enable for Trigger_IDLE_EVENT_11990p0004 */
  if (BaseEngineController_LS_112_DWork.s4_motohawk_trigger1_DWORK1 == 0) {
    BaseEngineController_LS_112_DWork.s4_motohawk_trigger1_DWORK1 = 1;
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
  BaseEngineController_LS_112_M->Timing.clockTick0++;
  if (!BaseEngineController_LS_112_M->Timing.clockTick0) {
    BaseEngineController_LS_112_M->Timing.clockTickH0++;
  }
}

/* Model initialize function */
void BaseEngineController_LS_112_initialize(boolean_T firstTime)
{
  (void)firstTime;

  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)BaseEngineController_LS_112_M, 0,
                sizeof(RT_MODEL_BaseEngineController_LS_112));
  rtmSetFirstInitCond(BaseEngineController_LS_112_M, 1);

  /* block I/O */
  (void) memset(((void *) &BaseEngineController_LS_112_B), 0,
                sizeof(BlockIO_BaseEngineController_LS_112));

  {
    int_T i;
    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_112_B.s92_FPC[i] = 0.0;
    }

    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_112_B.s21_MinMax[i] = 0.0;
    }

    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_112_B.s21_Gain[i] = 0.0;
    }

    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_112_B.s298_Defaultifnoflow[i] = 0.0;
    }

    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_112_B.s316_Sum1[i] = 0.0;
    }

    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_112_B.s315_chargemass[i] = 0.0;
    }

    for (i = 0; i < 5; i++) {
      BaseEngineController_LS_112_B.s105_EquivRatioInfo[i] = 0.0;
    }

    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_112_B.s245_O2FuelMult[i] = 0.0;
    }

    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_112_B.s159_ApplyMultipliersforO2KnockControlandEnrichment1
        [i] = 0.0;
    }

    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_112_B.s175_chargemass[i] = 0.0;
    }

    BaseEngineController_LS_112_B.s714_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_112_B.s693_Switch = 0.0;
    BaseEngineController_LS_112_B.s737_MinMax = 0.0;
    BaseEngineController_LS_112_B.s737_MinMax1 = 0.0;
    BaseEngineController_LS_112_B.s741_MinMax1 = 0.0;
    BaseEngineController_LS_112_B.s712_Merge = 0.0;
    BaseEngineController_LS_112_B.s751_Merge = 0.0;
    BaseEngineController_LS_112_B.s702_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_112_B.s692_Switch = 0.0;
    BaseEngineController_LS_112_B.s720_MinMax = 0.0;
    BaseEngineController_LS_112_B.s720_MinMax1 = 0.0;
    BaseEngineController_LS_112_B.s724_MinMax1 = 0.0;
    BaseEngineController_LS_112_B.s700_Merge = 0.0;
    BaseEngineController_LS_112_B.s734_Merge = 0.0;
    BaseEngineController_LS_112_B.s443_Switch1 = 0.0;
    BaseEngineController_LS_112_B.s469_Sum = 0.0;
    BaseEngineController_LS_112_B.s556_Sum1 = 0.0;
    BaseEngineController_LS_112_B.s569_Merge = 0.0;
    BaseEngineController_LS_112_B.s481_RPMInst = 0.0;
    BaseEngineController_LS_112_B.s505_DataTypeConversion = 0.0;
    BaseEngineController_LS_112_B.s555_Sum1 = 0.0;
    BaseEngineController_LS_112_B.s694_Switch = 0.0;
    BaseEngineController_LS_112_B.s754_MinMax = 0.0;
    BaseEngineController_LS_112_B.s754_MinMax1 = 0.0;
    BaseEngineController_LS_112_B.s758_MinMax1 = 0.0;
    BaseEngineController_LS_112_B.s695_Switch = 0.0;
    BaseEngineController_LS_112_B.s771_MinMax = 0.0;
    BaseEngineController_LS_112_B.s771_MinMax1 = 0.0;
    BaseEngineController_LS_112_B.s775_MinMax1 = 0.0;
    BaseEngineController_LS_112_B.s768_Merge = 0.0;
    BaseEngineController_LS_112_B.s785_Merge = 0.0;
    BaseEngineController_LS_112_B.s450_Switch2 = 0.0;
    BaseEngineController_LS_112_B.s557_Sum1 = 0.0;
    BaseEngineController_LS_112_B.s577_Merge = 0.0;
    BaseEngineController_LS_112_B.s486_Lambda = 0.0;
    BaseEngineController_LS_112_B.s486_OxygenConcentratio = 0.0;
    BaseEngineController_LS_112_B.s486_SystemVolts = 0.0;
    BaseEngineController_LS_112_B.s486_HeaterVolts = 0.0;
    BaseEngineController_LS_112_B.s486_ReadCANMessage_o6 = 0.0;
    BaseEngineController_LS_112_B.s486_ReadCANMessage_o7 = 0.0;
    BaseEngineController_LS_112_B.s486_ReadCANMessage_o8 = 0.0;
    BaseEngineController_LS_112_B.s486_ReadCANMessage_o9 = 0.0;
    BaseEngineController_LS_112_B.s486_ReadCANMessage_o10 = 0.0;
    BaseEngineController_LS_112_B.s486_Lambda_c = 0.0;
    BaseEngineController_LS_112_B.s486_OxygenConcentratio_i = 0.0;
    BaseEngineController_LS_112_B.s486_SystemVolts_f = 0.0;
    BaseEngineController_LS_112_B.s486_HeaterVolts_n = 0.0;
    BaseEngineController_LS_112_B.s486_ReadCANMessage1_o6 = 0.0;
    BaseEngineController_LS_112_B.s486_ReadCANMessage1_o7 = 0.0;
    BaseEngineController_LS_112_B.s486_ReadCANMessage1_o8 = 0.0;
    BaseEngineController_LS_112_B.s486_ReadCANMessage1_o9 = 0.0;
    BaseEngineController_LS_112_B.s486_ReadCANMessage1_o10 = 0.0;
    BaseEngineController_LS_112_B.s485_GPS_Speed = 0.0;
    BaseEngineController_LS_112_B.s485_GPS_Altitude = 0.0;
    BaseEngineController_LS_112_B.s485_GPS_Course = 0.0;
    BaseEngineController_LS_112_B.s485_ReadCANMessage2_o5 = 0.0;
    BaseEngineController_LS_112_B.s485_ReadCANMessage_o3 = 0.0;
    BaseEngineController_LS_112_B.s485_ReadCANMessage_o4 = 0.0;
    BaseEngineController_LS_112_B.s485_ReadCANMessage_o5 = 0.0;
    BaseEngineController_LS_112_B.s485_ReadCANMessage_o6 = 0.0;
    BaseEngineController_LS_112_B.s485_ReadCANMessage_o7 = 0.0;
    BaseEngineController_LS_112_B.s485_ReadCANMessage_o8 = 0.0;
    BaseEngineController_LS_112_B.s480_Gain1 = 0.0;
    BaseEngineController_LS_112_B.s540_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_112_B.s539_Merge = 0.0;
    BaseEngineController_LS_112_B.s511_Switch = 0.0;
    BaseEngineController_LS_112_B.s454_Switch2 = 0.0;
    BaseEngineController_LS_112_B.s486_MathFunction = 0.0;
    BaseEngineController_LS_112_B.s487_Sum1 = 0.0;
    BaseEngineController_LS_112_B.s486_MathFunction1 = 0.0;
    BaseEngineController_LS_112_B.s488_Sum1 = 0.0;
    BaseEngineController_LS_112_B.s493_Merge = 0.0;
    BaseEngineController_LS_112_B.s501_Merge = 0.0;
    BaseEngineController_LS_112_B.s486_MultiportSwitch = 0.0;
    BaseEngineController_LS_112_B.s448_Sum1 = 0.0;
    BaseEngineController_LS_112_B.s448_Sum3 = 0.0;
    BaseEngineController_LS_112_B.s471_Switch = 0.0;
    BaseEngineController_LS_112_B.s564_Sum1 = 0.0;
    BaseEngineController_LS_112_B.s632_Merge = 0.0;
    BaseEngineController_LS_112_B.s561_Merge = 0.0;
    BaseEngineController_LS_112_B.s559_Sum1 = 0.0;
    BaseEngineController_LS_112_B.s598_Merge = 0.0;
    BaseEngineController_LS_112_B.s395_motohawk_delta_time = 0.0;
    BaseEngineController_LS_112_B.s560_Sum1 = 0.0;
    BaseEngineController_LS_112_B.s405_Sum = 0.0;
    BaseEngineController_LS_112_B.s404_motohawk_interpolation_2d2 = 0.0;
    BaseEngineController_LS_112_B.s404_Sum = 0.0;
    BaseEngineController_LS_112_B.s404_NominalAirFlowRate = 0.0;
    BaseEngineController_LS_112_B.s404_ModelAirMassFlowRate = 0.0;
    BaseEngineController_LS_112_B.s480_Gain = 0.0;
    BaseEngineController_LS_112_B.s526_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_112_B.s525_Merge = 0.0;
    BaseEngineController_LS_112_B.s404_MultiportSwitch = 0.0;
    BaseEngineController_LS_112_B.s421_Merge = 0.0;
    BaseEngineController_LS_112_B.s424_Sum1 = 0.0;
    BaseEngineController_LS_112_B.s422_Merge = 0.0;
    BaseEngineController_LS_112_B.s427_Sum1 = 0.0;
    BaseEngineController_LS_112_B.s465_Sum1 = 0.0;
    BaseEngineController_LS_112_B.s506_DataTypeConversion = 0.0;
    BaseEngineController_LS_112_B.s509_DataTypeConversion = 0.0;
    BaseEngineController_LS_112_B.s606_Merge = 0.0;
    BaseEngineController_LS_112_B.s396_motohawk_data_read = 0.0;
    BaseEngineController_LS_112_B.s415_Sum1 = 0.0;
    BaseEngineController_LS_112_B.s817_Sum1 = 0.0;
    BaseEngineController_LS_112_B.s814_Switch = 0.0;
    BaseEngineController_LS_112_B.s821_Merge = 0.0;
    BaseEngineController_LS_112_B.s821_Switch = 0.0;
    BaseEngineController_LS_112_B.s822_Merge = 0.0;
    BaseEngineController_LS_112_B.s822_Switch = 0.0;
    BaseEngineController_LS_112_B.s447_MultiportSwitch = 0.0;
    BaseEngineController_LS_112_B.s92_SparkAdv = 0.0;
    BaseEngineController_LS_112_B.s558_Sum1 = 0.0;
    BaseEngineController_LS_112_B.s590_Merge = 0.0;
    BaseEngineController_LS_112_B.s562_Sum1 = 0.0;
    BaseEngineController_LS_112_B.s616_Merge = 0.0;
    BaseEngineController_LS_112_B.s92_FAN1 = 0.0;
    BaseEngineController_LS_112_B.s92_FAN2 = 0.0;
    BaseEngineController_LS_112_B.s92_SparkEnergy = 0.0;
    BaseEngineController_LS_112_B.s877_MinMax1 = 0.0;
    BaseEngineController_LS_112_B.s881_MinMax1 = 0.0;
    BaseEngineController_LS_112_B.s473_Switch = 0.0;
    BaseEngineController_LS_112_B.s92_Throttle = 0.0;
    BaseEngineController_LS_112_B.s794_ETC = 0.0;
    BaseEngineController_LS_112_B.s92_IACP = 0.0;
    BaseEngineController_LS_112_B.s895_MinMax1 = 0.0;
    BaseEngineController_LS_112_B.s92_IACS = 0.0;
    BaseEngineController_LS_112_B.s899_MinMax1 = 0.0;
    BaseEngineController_LS_112_B.s92_SOI = 0.0;
    BaseEngineController_LS_112_B.s64_constreftoatm = 0.0;
    BaseEngineController_LS_112_B.s21_Sum2 = 0.0;
    BaseEngineController_LS_112_B.s21_Sum1 = 0.0;
    BaseEngineController_LS_112_B.s92_MakeUpEOI = 0.0;
    BaseEngineController_LS_112_B.s92_WASTEGATE = 0.0;
    BaseEngineController_LS_112_B.s926_MinMax1 = 0.0;
    BaseEngineController_LS_112_B.s446_Sum3 = 0.0;
    BaseEngineController_LS_112_B.s485_GPS_Latitude = 0.0;
    BaseEngineController_LS_112_B.s485_GPS_Longitude = 0.0;
    BaseEngineController_LS_112_B.s563_Sum1 = 0.0;
    BaseEngineController_LS_112_B.s624_Merge = 0.0;
    BaseEngineController_LS_112_B.s849_Sum = 0.0;
    BaseEngineController_LS_112_B.s850_Sum = 0.0;
    BaseEngineController_LS_112_B.s852_CrankCounter = 0.0;
    BaseEngineController_LS_112_B.s644_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_112_B.s638_Merge = 0.0;
    BaseEngineController_LS_112_B.s643_Merge = 0.0;
    BaseEngineController_LS_112_B.s666_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_112_B.s649_Merge = 0.0;
    BaseEngineController_LS_112_B.s665_Merge = 0.0;
    BaseEngineController_LS_112_B.s684_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_112_B.s651_Merge = 0.0;
    BaseEngineController_LS_112_B.s683_Merge = 0.0;
    BaseEngineController_LS_112_B.s675_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_112_B.s674_Merge = 0.0;
    BaseEngineController_LS_112_B.s657_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_112_B.s656_Merge = 0.0;
    BaseEngineController_LS_112_B.s348_Constant = 0.0;
    BaseEngineController_LS_112_B.s440_Merge = 0.0;
    BaseEngineController_LS_112_B.s458_Sum2 = 0.0;
    BaseEngineController_LS_112_B.s401_Timer = 0.0;
    BaseEngineController_LS_112_B.s290_UnitDelay = 0.0;
    BaseEngineController_LS_112_B.s283_Product1 = 0.0;
    BaseEngineController_LS_112_B.s283_Switch = 0.0;
    BaseEngineController_LS_112_B.s291_etc = 0.0;
    BaseEngineController_LS_112_B.s102_MultiportSwitch = 0.0;
    BaseEngineController_LS_112_B.s277_Add = 0.0;
    BaseEngineController_LS_112_B.s274_Product = 0.0;
    BaseEngineController_LS_112_B.s273_Product = 0.0;
    BaseEngineController_LS_112_B.s112_ApplyOffsetstoBaseSparkAdvance1 = 0.0;
    BaseEngineController_LS_112_B.s280_MinMax1 = 0.0;
    BaseEngineController_LS_112_B.s275_Switch = 0.0;
    BaseEngineController_LS_112_B.s112_motohawk_interpolation_2d1 = 0.0;
    BaseEngineController_LS_112_B.s109_Sum = 0.0;
    BaseEngineController_LS_112_B.s188_DontallowsetpointtoevergoabovetheTargetRPM
      = 0.0;
    BaseEngineController_LS_112_B.s197_Sum2 = 0.0;
    BaseEngineController_LS_112_B.s197_Product2 = 0.0;
    BaseEngineController_LS_112_B.s198_Product = 0.0;
    BaseEngineController_LS_112_B.s199_Switch1 = 0.0;
    BaseEngineController_LS_112_B.s190_Switch = 0.0;
    BaseEngineController_LS_112_B.s186_Sum = 0.0;
    BaseEngineController_LS_112_B.s106_Switch4 = 0.0;
    BaseEngineController_LS_112_B.s106_Switch5 = 0.0;
    BaseEngineController_LS_112_B.s143_Switch1 = 0.0;
    BaseEngineController_LS_112_B.s104_MinMax2 = 0.0;
    BaseEngineController_LS_112_B.s141_Sum2 = 0.0;
    BaseEngineController_LS_112_B.s141_Product2 = 0.0;
    BaseEngineController_LS_112_B.s142_Product = 0.0;
    BaseEngineController_LS_112_B.s132_Switch = 0.0;
    BaseEngineController_LS_112_B.s104_Sum3 = 0.0;
    BaseEngineController_LS_112_B.s104_Switch = 0.0;
    BaseEngineController_LS_112_B.s219_MinMax1 = 0.0;
    BaseEngineController_LS_112_B.s209_DontallowsetpointtoeverdropbelowtheTargetRPM
      = 0.0;
    BaseEngineController_LS_112_B.s235_Sum2 = 0.0;
    BaseEngineController_LS_112_B.s235_Product2 = 0.0;
    BaseEngineController_LS_112_B.s236_Product = 0.0;
    BaseEngineController_LS_112_B.s237_Switch1 = 0.0;
    BaseEngineController_LS_112_B.s110_MinGovAirPID = 0.0;
    BaseEngineController_LS_112_B.s230_Sum1 = 0.0;
    BaseEngineController_LS_112_B.s230_Product = 0.0;
    BaseEngineController_LS_112_B.s231_Product = 0.0;
    BaseEngineController_LS_112_B.s110_IdleSpk = 0.0;
    BaseEngineController_LS_112_B.s227_Switch = 0.0;
    BaseEngineController_LS_112_B.s212_DontallowsetpointtoeverdropbelowtheTargetRPM
      = 0.0;
    BaseEngineController_LS_112_B.s147_Product1 = 0.0;
    BaseEngineController_LS_112_B.s147_SpkOut = 0.0;
    BaseEngineController_LS_112_B.s244_Switch = 0.0;
    BaseEngineController_LS_112_B.s264_Sum2 = 0.0;
    BaseEngineController_LS_112_B.s264_Product2 = 0.0;
    BaseEngineController_LS_112_B.s266_Switch1 = 0.0;
    BaseEngineController_LS_112_B.s265_Product = 0.0;
    BaseEngineController_LS_112_B.s262_Switch3 = 0.0;
    BaseEngineController_LS_112_B.s262_Switch1 = 0.0;
    BaseEngineController_LS_112_B.s262_Switch4 = 0.0;
    BaseEngineController_LS_112_B.s243_Switch = 0.0;
    BaseEngineController_LS_112_B.s252_Sum2 = 0.0;
    BaseEngineController_LS_112_B.s252_Product2 = 0.0;
    BaseEngineController_LS_112_B.s254_Switch1 = 0.0;
    BaseEngineController_LS_112_B.s253_Product = 0.0;
    BaseEngineController_LS_112_B.s250_Switch3 = 0.0;
    BaseEngineController_LS_112_B.s250_Switch1 = 0.0;
    BaseEngineController_LS_112_B.s250_Switch4 = 0.0;
    BaseEngineController_LS_112_B.s164_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_112_B.s162_FuelFlowMassAirflowEquivalenceRatioAirtofuelRatio
      = 0.0;
    BaseEngineController_LS_112_B.s159_PerCylinderMassFlowRate = 0.0;
    BaseEngineController_LS_112_B.s184_MinMax1 = 0.0;
    BaseEngineController_LS_112_B.s185_MinMax1 = 0.0;
    BaseEngineController_LS_112_B.s174_Sum1 = 0.0;
    BaseEngineController_LS_112_B.s165_Sum1 = 0.0;
    BaseEngineController_LS_112_B.s173_Sum1 = 0.0;
    BaseEngineController_LS_112_B.s165_Sum = 0.0;
    BaseEngineController_LS_112_B.s165_Product1 = 0.0;
    BaseEngineController_LS_112_B.s172_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_112_B.s169_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_112_B.s103_WarmUpRatio = 0.0;
    BaseEngineController_LS_112_B.s127_Switch = 0.0;
    BaseEngineController_LS_112_B.s103_IATEnrichment = 0.0;
    BaseEngineController_LS_112_B.s103_CATEnrichment = 0.0;
    BaseEngineController_LS_112_B.s103_DesEquivRatio = 0.0;
    BaseEngineController_LS_112_B.s87_Sum = 0.0;
    BaseEngineController_LS_112_B.s23_Sum = 0.0;
    BaseEngineController_LS_112_B.s72_UnitDelay2 = 0.0;
    BaseEngineController_LS_112_B.s82_Switch1 = 0.0;
    BaseEngineController_LS_112_B.s63_Switch = 0.0;
    BaseEngineController_LS_112_B.s31_MultiportSwitch = 0.0;
    BaseEngineController_LS_112_B.s42_Product = 0.0;
    BaseEngineController_LS_112_B.s41_Switch2 = 0.0;
    BaseEngineController_LS_112_B.s46_Product = 0.0;
    BaseEngineController_LS_112_B.s38_Sum2 = 0.0;
    BaseEngineController_LS_112_B.s47_Product = 0.0;
    BaseEngineController_LS_112_B.s38_Product2 = 0.0;
    BaseEngineController_LS_112_B.s48_Switch1 = 0.0;
    BaseEngineController_LS_112_B.s51_MinMax1 = 0.0;
    BaseEngineController_LS_112_B.s20_Switch = 0.0;
    BaseEngineController_LS_112_B.s52_In1 = 0.0;
    BaseEngineController_LS_112_B.s27_TestTime = 0.0;
    BaseEngineController_LS_112_B.s947_Switch = 0.0;
    BaseEngineController_LS_112_B.s442_CollectAverage.s406_Product = 0.0;
    BaseEngineController_LS_112_B.s441_CollectAverage.s406_Product = 0.0;
    BaseEngineController_LS_112_B.s402_CollectAverage.s406_Product = 0.0;
  }

  /* states (dwork) */
  (void) memset((void *)&BaseEngineController_LS_112_DWork, 0,
                sizeof(D_Work_BaseEngineController_LS_112));
  BaseEngineController_LS_112_DWork.s690_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s715_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s747_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s740_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s688_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s703_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s730_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s723_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s556_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s570_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s555_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s764_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s757_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s781_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s774_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s582_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s557_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s581_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s579_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s579_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s579_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s511_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s544_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s510_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s541_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s511_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s511_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s448_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s487_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s494_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s488_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s502_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s448_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s564_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s633_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s559_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s599_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s560_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s405_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s508_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s527_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s421_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s424_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s422_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s427_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s463_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s465_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s607_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s415_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s817_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s815_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s821_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s827_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s822_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s830_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s823_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s824_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s825_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s821_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s821_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s821_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s822_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s822_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s822_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s838_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s558_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s591_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s839_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s562_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s617_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s840_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s842_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s846_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s845_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s563_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s625_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s421_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s421_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s421_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s422_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s422_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s422_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s727_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s727_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s727_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s727_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s744_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s744_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s744_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s744_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s761_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s761_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s761_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s761_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s778_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s778_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s778_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s778_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s849_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s850_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s852_CrankCounter_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s638_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s645_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s649_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s667_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s651_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s685_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s650_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s676_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s648_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s658_UnitDelay_DSTATE = 0.0;

  {
    int_T i;
    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_112_DWork.s316_UnitDelay_DSTATE[i] = 0.0;
    }
  }

  BaseEngineController_LS_112_DWork.s344_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s345_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s440_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s455_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s458_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s440_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s440_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s440_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s290_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s275_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s188_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s198_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s199_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s104_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s143_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s133_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s142_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s224_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s226_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s110_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s110_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s205_state_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s110_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s209_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s236_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s237_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s231_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s212_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s148_state_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s266_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s265_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s262_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s262_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s262_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s254_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s253_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s250_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s250_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s250_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s174_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s173_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s87_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s72_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s20_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s55_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s46_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s42_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s44_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s47_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s48_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s936_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s936_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_112_DWork.s401_TOld = 0.0;
  BaseEngineController_LS_112_DWork.s27_TimerOld = 0.0;
  BaseEngineController_LS_112_DWork.s442_CollectAverage.s406_UnitDelay1_DSTATE =
    0.0;
  BaseEngineController_LS_112_DWork.s441_CollectAverage.s406_UnitDelay1_DSTATE =
    0.0;
  BaseEngineController_LS_112_DWork.s402_CollectAverage.s406_UnitDelay1_DSTATE =
    0.0;

  /* Start for S-Function (motohawk_sfun_trigger): '<Root>/motohawk_trigger' */
  BaseEngineController_LS_112_Foreground_Start();

  /* Start for S-Function (motohawk_sfun_trigger): '<S1>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_IDLE_EVENT_9p001 */
  BaseEngineController_LS_112_DWork.s1_motohawk_trigger1_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_RTI_PERIODIC_12065p0004 */
  BaseEngineController_LS_112_DWork.s5_motohawk_trigger1_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_5XRTI_PERIODIC_12064p0004 */
  BaseEngineController_LS_112_DWork.s5_motohawk_trigger_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger2' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_MID_TDC_EVENT_12066p0004 */
  BaseEngineController_LS_112_DWork.s5_motohawk_trigger2_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger3' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_20XRTI_PERIODIC_12067p0004 */
  BaseEngineController_LS_112_DWork.s5_motohawk_trigger3_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger4' */

  /* Clear enable/disable state for embedded trigger Trigger_BGND_BASE_PERIODIC_12068p0004 */
  BaseEngineController_LS_112_DWork.s5_motohawk_trigger4_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger5' */

  /* Clear enable/disable state for embedded trigger Trigger_BGND_BASEx2_PERIODIC_12069p0004 */
  BaseEngineController_LS_112_DWork.s5_motohawk_trigger5_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger6' */

  /* Clear enable/disable state for embedded trigger Trigger_BGND_BASEx10_PERIODIC_12070p0004 */
  BaseEngineController_LS_112_DWork.s5_motohawk_trigger6_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger7' */

  /* Clear enable/disable state for embedded trigger Trigger_ONE_SECOND_EVENT_12071p0004 */
  BaseEngineController_LS_112_DWork.s5_motohawk_trigger7_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S4>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_IDLE_EVENT_11990p0004 */
  BaseEngineController_LS_112_DWork.s4_motohawk_trigger1_DWORK1 = 0;

  /* Start for function-call system: '<S3>/Main Power Relay' */

  /* Start for Triggered SubSystem: '<S932>/Clear' incorporates:
   *  Start for S-Function (fcncallgen): '<S941>/Function-Call Generator'
   *  Start for SubSystem: '<S930>/motohawk_restore_nvmem'
   */

  /* Start for Triggered SubSystem: '<S933>/Clear' incorporates:
   *  Start for S-Function (fcncallgen): '<S942>/Function-Call Generator'
   *  Start for SubSystem: '<S930>/motohawk_store_nvmem'
   */
  BaseEngineController_LS_112_PrevZCSigState.HitCrossing1_Input_ZCE =
    UNINITIALIZED_ZCSIG;
  BaseEngineController_LS_112_PrevZCSigState.ResetTasksCompleteToFalse_Trig_ZCE =
    POS_ZCSIG;
  BaseEngineController_LS_112_PrevZCSigState.ResetTasksCompleteToTrue_Trig_ZCE =
    POS_ZCSIG;
  BaseEngineController_LS_112_PrevZCSigState.ShutdownpoweronECU565563_Trig_ZCE =
    ZERO_ZCSIG;
  BaseEngineController_LS_112_PrevZCSigState.SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE
    = ZERO_ZCSIG;
  BaseEngineController_LS_112_PrevZCSigState.ProcessorReboot_Trig_ZCE =
    ZERO_ZCSIG;
  BaseEngineController_LS_112_PrevZCSigState.PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE
    = ZERO_ZCSIG;
  BaseEngineController_LS_112_PrevZCSigState.ShutdownpoweronECU565563_Trig_ZCE_p
    = ZERO_ZCSIG;
  BaseEngineController_LS_112_PrevZCSigState.SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE_e
    = ZERO_ZCSIG;
  BaseEngineController_LS_112_PrevZCSigState.ProcessorReboot_Trig_ZCE_f =
    ZERO_ZCSIG;
  BaseEngineController_LS_112_PrevZCSigState.PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE_a
    = ZERO_ZCSIG;
  BaseEngineController_LS_112_PrevZCSigState.Clear_Trig_ZCE = ZERO_ZCSIG;
  BaseEngineController_LS_112_PrevZCSigState.Clear_Trig_ZCE_j = ZERO_ZCSIG;

  /* InitializeConditions for S-Function (motohawk_sfun_trigger): '<Root>/motohawk_trigger' */
  BaseEngineController_LS_112_Foreground_Init();

  /* Initial conditions for function-call system: '<S3>/Main Power Relay' */

  /* S-Function Block: <S947>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_112_DWork.s947_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S938>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_112_DWork.s938_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for Stateflow: '<S930>/ECUP Latch' */

  /* Entry: Main Power Relay/Main Power Relay/ECUP Latch */
  /* Transition: '<S934>:3' */
  BaseEngineController_LS_112_DWork.s934_is_c8_BaseEngineController_LS_112 =
    BaseEngineController_LS_112_IN_PowerDown;

  /* Entry 'PowerDown': '<S934>:1' */
  BaseEngineController_LS_112_B.s934_MPRDState = FALSE;

  /* set "at time zero" to false */
  if (rtmIsFirstInitCond(BaseEngineController_LS_112_M)) {
    rtmSetFirstInitCond(BaseEngineController_LS_112_M, 0);
  }

  /* Level2 S-Function Block: '<S1>/motohawk_trigger1' (motohawk_sfun_trigger) */

  /* Enable for Trigger_IDLE_EVENT_9p001 */
  BaseEngineController_LS_112_DWork.s1_motohawk_trigger1_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger1' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_RTI_PERIODIC_12065p0004 */
  BaseEngineController_LS_112_DWork.s5_motohawk_trigger1_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_5XRTI_PERIODIC_12064p0004 */
  BaseEngineController_LS_112_DWork.s5_motohawk_trigger_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger2' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_MID_TDC_EVENT_12066p0004 */
  BaseEngineController_LS_112_DWork.s5_motohawk_trigger2_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger3' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_20XRTI_PERIODIC_12067p0004 */
  BaseEngineController_LS_112_DWork.s5_motohawk_trigger3_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger4' (motohawk_sfun_trigger) */

  /* Enable for Trigger_BGND_BASE_PERIODIC_12068p0004 */
  BaseEngineController_LS_112_DWork.s5_motohawk_trigger4_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger5' (motohawk_sfun_trigger) */

  /* Enable for Trigger_BGND_BASEx2_PERIODIC_12069p0004 */
  BaseEngineController_LS_112_DWork.s5_motohawk_trigger5_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger6' (motohawk_sfun_trigger) */

  /* Enable for Trigger_BGND_BASEx10_PERIODIC_12070p0004 */
  BaseEngineController_LS_112_DWork.s5_motohawk_trigger6_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger7' (motohawk_sfun_trigger) */

  /* Enable for Trigger_ONE_SECOND_EVENT_12071p0004 */
  BaseEngineController_LS_112_DWork.s5_motohawk_trigger7_DWORK1 = 1;

  /* Level2 S-Function Block: '<S4>/motohawk_trigger1' (motohawk_sfun_trigger) */

  /* Enable for Trigger_IDLE_EVENT_11990p0004 */
  BaseEngineController_LS_112_DWork.s4_motohawk_trigger1_DWORK1 = 1;
}

/* Model terminate function */
void BaseEngineController_LS_112_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
