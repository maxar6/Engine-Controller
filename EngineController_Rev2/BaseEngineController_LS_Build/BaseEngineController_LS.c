/*
 * File: BaseEngineController_LS.c
 *
 * Code generated for Simulink model 'BaseEngineController_LS'.
 *
 * Model version                  : 1.2222
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Sun Mar 19 22:34:25 2023
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_LS.h"
#include "BaseEngineController_LS_private.h"

/* Named constants for Stateflow: '<S862>/ECUP Latch' */
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
  /* Enable for Trigger_IDLE_EVENT_11p0013 */
  if (BaseEngineController_LS_DWork.s1_motohawk_trigger1_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s1_motohawk_trigger1_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger1' */
  /* Enable for Trigger_FGND_RTI_PERIODIC_12598p0001 */
  if (BaseEngineController_LS_DWork.s5_motohawk_trigger1_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s5_motohawk_trigger1_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger' */
  /* Enable for Trigger_FGND_5XRTI_PERIODIC_12597p0001 */
  if (BaseEngineController_LS_DWork.s5_motohawk_trigger_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s5_motohawk_trigger_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger2' */
  /* Enable for Trigger_FGND_MID_TDC_EVENT_12599p0001 */
  if (BaseEngineController_LS_DWork.s5_motohawk_trigger2_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s5_motohawk_trigger2_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger3' */
  /* Enable for Trigger_FGND_20XRTI_PERIODIC_12600p0001 */
  if (BaseEngineController_LS_DWork.s5_motohawk_trigger3_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s5_motohawk_trigger3_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger4' */
  /* Enable for Trigger_BGND_BASE_PERIODIC_12601p0001 */
  if (BaseEngineController_LS_DWork.s5_motohawk_trigger4_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s5_motohawk_trigger4_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger5' */
  /* Enable for Trigger_BGND_BASEx2_PERIODIC_12602p0001 */
  if (BaseEngineController_LS_DWork.s5_motohawk_trigger5_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s5_motohawk_trigger5_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger6' */
  /* Enable for Trigger_BGND_BASEx10_PERIODIC_12603p0001 */
  if (BaseEngineController_LS_DWork.s5_motohawk_trigger6_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s5_motohawk_trigger6_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger7' */
  /* Enable for Trigger_ONE_SECOND_EVENT_12604p0001 */
  if (BaseEngineController_LS_DWork.s5_motohawk_trigger7_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s5_motohawk_trigger7_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S4>/motohawk_trigger1' */
  /* Enable for Trigger_IDLE_EVENT_12528p0001 */
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
      BaseEngineController_LS_B.s92_FPC[i] = 0.0;
    }

    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_B.s21_MinMax[i] = 0.0;
    }

    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_B.s21_Gain[i] = 0.0;
    }

    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_B.s282_Defaultifnoflow[i] = 0.0;
    }

    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_B.s299_Sum1[i] = 0.0;
    }

    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_B.s298_chargemass[i] = 0.0;
    }

    for (i = 0; i < 5; i++) {
      BaseEngineController_LS_B.s107_EquivRatioInfo[i] = 0.0;
    }

    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_B.s230_O2FuelMult[i] = 0.0;
    }

    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_B.s144_ApplyMultipliersforO2KnockControlandEnrichment1
        [i] = 0.0;
    }

    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_B.s160_chargemass[i] = 0.0;
    }

    BaseEngineController_LS_B.s661_Switch = 0.0;
    BaseEngineController_LS_B.s669_MinMax = 0.0;
    BaseEngineController_LS_B.s669_MinMax1 = 0.0;
    BaseEngineController_LS_B.s673_MinMax1 = 0.0;
    BaseEngineController_LS_B.s662_Switch = 0.0;
    BaseEngineController_LS_B.s686_MinMax = 0.0;
    BaseEngineController_LS_B.s686_MinMax1 = 0.0;
    BaseEngineController_LS_B.s690_MinMax1 = 0.0;
    BaseEngineController_LS_B.s683_Merge = 0.0;
    BaseEngineController_LS_B.s700_Merge = 0.0;
    BaseEngineController_LS_B.s430_Switch1 = 0.0;
    BaseEngineController_LS_B.s460_Sum = 0.0;
    BaseEngineController_LS_B.s537_Sum1 = 0.0;
    BaseEngineController_LS_B.s550_Merge = 0.0;
    BaseEngineController_LS_B.s472_RPMInst = 0.0;
    BaseEngineController_LS_B.s496_DataTypeConversion = 0.0;
    BaseEngineController_LS_B.s536_Sum1 = 0.0;
    BaseEngineController_LS_B.s663_Switch = 0.0;
    BaseEngineController_LS_B.s703_MinMax = 0.0;
    BaseEngineController_LS_B.s703_MinMax1 = 0.0;
    BaseEngineController_LS_B.s707_MinMax1 = 0.0;
    BaseEngineController_LS_B.s664_Switch = 0.0;
    BaseEngineController_LS_B.s720_MinMax = 0.0;
    BaseEngineController_LS_B.s720_MinMax1 = 0.0;
    BaseEngineController_LS_B.s724_MinMax1 = 0.0;
    BaseEngineController_LS_B.s717_Merge = 0.0;
    BaseEngineController_LS_B.s734_Merge = 0.0;
    BaseEngineController_LS_B.s437_Switch2 = 0.0;
    BaseEngineController_LS_B.s538_Sum1 = 0.0;
    BaseEngineController_LS_B.s558_Merge = 0.0;
    BaseEngineController_LS_B.s477_Lambda = 0.0;
    BaseEngineController_LS_B.s477_OxygenConcentratio = 0.0;
    BaseEngineController_LS_B.s477_SystemVolts = 0.0;
    BaseEngineController_LS_B.s477_HeaterVolts = 0.0;
    BaseEngineController_LS_B.s477_ReadCANMessage_o6 = 0.0;
    BaseEngineController_LS_B.s477_ReadCANMessage_o7 = 0.0;
    BaseEngineController_LS_B.s477_ReadCANMessage_o8 = 0.0;
    BaseEngineController_LS_B.s477_ReadCANMessage_o9 = 0.0;
    BaseEngineController_LS_B.s477_ReadCANMessage_o10 = 0.0;
    BaseEngineController_LS_B.s477_Lambda_c = 0.0;
    BaseEngineController_LS_B.s477_OxygenConcentratio_d = 0.0;
    BaseEngineController_LS_B.s477_SystemVolts_k = 0.0;
    BaseEngineController_LS_B.s477_HeaterVolts_d = 0.0;
    BaseEngineController_LS_B.s477_ReadCANMessage1_o6 = 0.0;
    BaseEngineController_LS_B.s477_ReadCANMessage1_o7 = 0.0;
    BaseEngineController_LS_B.s477_ReadCANMessage1_o8 = 0.0;
    BaseEngineController_LS_B.s477_ReadCANMessage1_o9 = 0.0;
    BaseEngineController_LS_B.s477_ReadCANMessage1_o10 = 0.0;
    BaseEngineController_LS_B.s476_GPS_Speed = 0.0;
    BaseEngineController_LS_B.s476_GPS_Altitude = 0.0;
    BaseEngineController_LS_B.s476_GPS_Course = 0.0;
    BaseEngineController_LS_B.s476_ReadCANMessage2_o5 = 0.0;
    BaseEngineController_LS_B.s476_GPS_Valid = 0.0;
    BaseEngineController_LS_B.s476_ReadCANMessage_o3 = 0.0;
    BaseEngineController_LS_B.s476_ReadCANMessage_o4 = 0.0;
    BaseEngineController_LS_B.s476_ReadCANMessage_o5 = 0.0;
    BaseEngineController_LS_B.s476_ReadCANMessage_o6 = 0.0;
    BaseEngineController_LS_B.s476_ReadCANMessage_o7 = 0.0;
    BaseEngineController_LS_B.s476_ReadCANMessage_o8 = 0.0;
    BaseEngineController_LS_B.s471_Gain1 = 0.0;
    BaseEngineController_LS_B.s521_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_B.s520_Merge = 0.0;
    BaseEngineController_LS_B.s500_Switch = 0.0;
    BaseEngineController_LS_B.s441_Switch2 = 0.0;
    BaseEngineController_LS_B.s477_MathFunction = 0.0;
    BaseEngineController_LS_B.s478_Sum1 = 0.0;
    BaseEngineController_LS_B.s477_MathFunction1 = 0.0;
    BaseEngineController_LS_B.s479_Sum1 = 0.0;
    BaseEngineController_LS_B.s484_Merge = 0.0;
    BaseEngineController_LS_B.s492_Merge = 0.0;
    BaseEngineController_LS_B.s477_MultiportSwitch = 0.0;
    BaseEngineController_LS_B.s435_Sum1 = 0.0;
    BaseEngineController_LS_B.s435_Sum3 = 0.0;
    BaseEngineController_LS_B.s462_Switch = 0.0;
    BaseEngineController_LS_B.s542_Merge = 0.0;
    BaseEngineController_LS_B.s540_Sum1 = 0.0;
    BaseEngineController_LS_B.s579_Merge = 0.0;
    BaseEngineController_LS_B.s389_motohawk_interpolation_2d2 = 0.0;
    BaseEngineController_LS_B.s389_Sum = 0.0;
    BaseEngineController_LS_B.s380_motohawk_delta_time = 0.0;
    BaseEngineController_LS_B.s541_Sum1 = 0.0;
    BaseEngineController_LS_B.s390_Sum = 0.0;
    BaseEngineController_LS_B.s389_NominalAirFlowRate = 0.0;
    BaseEngineController_LS_B.s389_ModelAirMassFlowRate = 0.0;
    BaseEngineController_LS_B.s471_Gain = 0.0;
    BaseEngineController_LS_B.s512_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_B.s511_Merge = 0.0;
    BaseEngineController_LS_B.s389_MultiportSwitch = 0.0;
    BaseEngineController_LS_B.s408_Merge = 0.0;
    BaseEngineController_LS_B.s411_Sum1 = 0.0;
    BaseEngineController_LS_B.s409_Merge = 0.0;
    BaseEngineController_LS_B.s414_Sum1 = 0.0;
    BaseEngineController_LS_B.s452_Sum1 = 0.0;
    BaseEngineController_LS_B.s587_Merge = 0.0;
    BaseEngineController_LS_B.s381_motohawk_data_read = 0.0;
    BaseEngineController_LS_B.s402_Sum1 = 0.0;
    BaseEngineController_LS_B.s768_Merge = 0.0;
    BaseEngineController_LS_B.s768_Switch = 0.0;
    BaseEngineController_LS_B.s769_Merge = 0.0;
    BaseEngineController_LS_B.s769_Switch = 0.0;
    BaseEngineController_LS_B.s92_SparkAdv = 0.0;
    BaseEngineController_LS_B.s545_Sum1 = 0.0;
    BaseEngineController_LS_B.s613_Merge = 0.0;
    BaseEngineController_LS_B.s539_Sum1 = 0.0;
    BaseEngineController_LS_B.s571_Merge = 0.0;
    BaseEngineController_LS_B.s543_Sum1 = 0.0;
    BaseEngineController_LS_B.s597_Merge = 0.0;
    BaseEngineController_LS_B.s92_FAN1 = 0.0;
    BaseEngineController_LS_B.s92_FAN2 = 0.0;
    BaseEngineController_LS_B.s92_SparkEnergy = 0.0;
    BaseEngineController_LS_B.s824_MinMax1 = 0.0;
    BaseEngineController_LS_B.s828_MinMax1 = 0.0;
    BaseEngineController_LS_B.s464_Switch = 0.0;
    BaseEngineController_LS_B.s92_Throttle = 0.0;
    BaseEngineController_LS_B.s743_ETC = 0.0;
    BaseEngineController_LS_B.s92_SOI = 0.0;
    BaseEngineController_LS_B.s64_constreftoatm = 0.0;
    BaseEngineController_LS_B.s21_Sum2 = 0.0;
    BaseEngineController_LS_B.s21_Sum1 = 0.0;
    BaseEngineController_LS_B.s92_MakeUpEOI = 0.0;
    BaseEngineController_LS_B.s433_Sum3 = 0.0;
    BaseEngineController_LS_B.s476_GPS_Latitude = 0.0;
    BaseEngineController_LS_B.s476_GPS_Longitude = 0.0;
    BaseEngineController_LS_B.s544_Sum1 = 0.0;
    BaseEngineController_LS_B.s605_Merge = 0.0;
    BaseEngineController_LS_B.s796_Sum = 0.0;
    BaseEngineController_LS_B.s797_Sum = 0.0;
    BaseEngineController_LS_B.s799_CrankCounter = 0.0;
    BaseEngineController_LS_B.s625_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_B.s619_Merge = 0.0;
    BaseEngineController_LS_B.s624_Merge = 0.0;
    BaseEngineController_LS_B.s637_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_B.s629_Merge = 0.0;
    BaseEngineController_LS_B.s636_Merge = 0.0;
    BaseEngineController_LS_B.s655_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_B.s631_Merge = 0.0;
    BaseEngineController_LS_B.s654_Merge = 0.0;
    BaseEngineController_LS_B.s646_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_B.s645_Merge = 0.0;
    BaseEngineController_LS_B.s427_Merge = 0.0;
    BaseEngineController_LS_B.s445_Sum2 = 0.0;
    BaseEngineController_LS_B.s386_Timer = 0.0;
    BaseEngineController_LS_B.s275_UnitDelay = 0.0;
    BaseEngineController_LS_B.s268_Switch = 0.0;
    BaseEngineController_LS_B.s276_etc = 0.0;
    BaseEngineController_LS_B.s105_MultiportSwitch = 0.0;
    BaseEngineController_LS_B.s262_Add = 0.0;
    BaseEngineController_LS_B.s259_Product = 0.0;
    BaseEngineController_LS_B.s258_Product = 0.0;
    BaseEngineController_LS_B.s113_ApplyOffsetstoBaseSparkAdvance1 = 0.0;
    BaseEngineController_LS_B.s265_MinMax1 = 0.0;
    BaseEngineController_LS_B.s260_Switch = 0.0;
    BaseEngineController_LS_B.s113_motohawk_interpolation_2d1 = 0.0;
    BaseEngineController_LS_B.s110_Sum = 0.0;
    BaseEngineController_LS_B.s173_DontallowsetpointtoevergoabovetheTargetRPM =
      0.0;
    BaseEngineController_LS_B.s182_Sum2 = 0.0;
    BaseEngineController_LS_B.s182_Product2 = 0.0;
    BaseEngineController_LS_B.s183_Product = 0.0;
    BaseEngineController_LS_B.s184_Switch1 = 0.0;
    BaseEngineController_LS_B.s175_Switch = 0.0;
    BaseEngineController_LS_B.s171_Sum = 0.0;
    BaseEngineController_LS_B.s108_Switch4 = 0.0;
    BaseEngineController_LS_B.s108_Switch5 = 0.0;
    BaseEngineController_LS_B.s204_MinMax1 = 0.0;
    BaseEngineController_LS_B.s194_DontallowsetpointtoeverdropbelowtheTargetRPM =
      0.0;
    BaseEngineController_LS_B.s220_Sum2 = 0.0;
    BaseEngineController_LS_B.s220_Product2 = 0.0;
    BaseEngineController_LS_B.s221_Product = 0.0;
    BaseEngineController_LS_B.s222_Switch1 = 0.0;
    BaseEngineController_LS_B.s111_MinGovAirPID = 0.0;
    BaseEngineController_LS_B.s215_Sum1 = 0.0;
    BaseEngineController_LS_B.s215_Product = 0.0;
    BaseEngineController_LS_B.s216_Product = 0.0;
    BaseEngineController_LS_B.s111_IdleSpk = 0.0;
    BaseEngineController_LS_B.s212_Switch = 0.0;
    BaseEngineController_LS_B.s197_DontallowsetpointtoeverdropbelowtheTargetRPM =
      0.0;
    BaseEngineController_LS_B.s132_Product1 = 0.0;
    BaseEngineController_LS_B.s132_SpkOut = 0.0;
    BaseEngineController_LS_B.s229_Switch = 0.0;
    BaseEngineController_LS_B.s249_Sum2 = 0.0;
    BaseEngineController_LS_B.s249_Product2 = 0.0;
    BaseEngineController_LS_B.s251_Switch1 = 0.0;
    BaseEngineController_LS_B.s250_Product = 0.0;
    BaseEngineController_LS_B.s247_Switch3 = 0.0;
    BaseEngineController_LS_B.s247_Switch1 = 0.0;
    BaseEngineController_LS_B.s247_Switch4 = 0.0;
    BaseEngineController_LS_B.s228_Switch = 0.0;
    BaseEngineController_LS_B.s237_Sum2 = 0.0;
    BaseEngineController_LS_B.s237_Product2 = 0.0;
    BaseEngineController_LS_B.s239_Switch1 = 0.0;
    BaseEngineController_LS_B.s238_Product = 0.0;
    BaseEngineController_LS_B.s235_Switch3 = 0.0;
    BaseEngineController_LS_B.s235_Switch1 = 0.0;
    BaseEngineController_LS_B.s235_Switch4 = 0.0;
    BaseEngineController_LS_B.s149_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_B.s147_FuelFlowMassAirflowEquivalenceRatioAirtofuelRatio
      = 0.0;
    BaseEngineController_LS_B.s144_PerCylinderMassFlowRate = 0.0;
    BaseEngineController_LS_B.s169_MinMax1 = 0.0;
    BaseEngineController_LS_B.s170_MinMax1 = 0.0;
    BaseEngineController_LS_B.s159_Sum1 = 0.0;
    BaseEngineController_LS_B.s150_Sum1 = 0.0;
    BaseEngineController_LS_B.s158_Sum1 = 0.0;
    BaseEngineController_LS_B.s150_Sum = 0.0;
    BaseEngineController_LS_B.s150_Product1 = 0.0;
    BaseEngineController_LS_B.s157_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_B.s154_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_B.s106_WarmUpRatio = 0.0;
    BaseEngineController_LS_B.s128_Switch = 0.0;
    BaseEngineController_LS_B.s106_IATEnrichment = 0.0;
    BaseEngineController_LS_B.s106_CATEnrichment = 0.0;
    BaseEngineController_LS_B.s106_DesEquivRatio = 0.0;
    BaseEngineController_LS_B.s87_Sum = 0.0;
    BaseEngineController_LS_B.s23_Sum = 0.0;
    BaseEngineController_LS_B.s72_UnitDelay2 = 0.0;
    BaseEngineController_LS_B.s82_Switch1 = 0.0;
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
    BaseEngineController_LS_B.s879_Switch = 0.0;
    BaseEngineController_LS_B.s429_CollectAverage.s391_Product = 0.0;
    BaseEngineController_LS_B.s428_CollectAverage.s391_Product = 0.0;
    BaseEngineController_LS_B.s387_CollectAverage.s391_Product = 0.0;
  }

  /* states (dwork) */
  (void) memset((void *)&BaseEngineController_LS_DWork, 0,
                sizeof(D_Work_BaseEngineController_LS));
  BaseEngineController_LS_DWork.s679_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s672_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s696_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s689_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s537_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s551_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s536_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s713_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s706_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s730_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s723_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s563_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s538_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s562_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s560_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s560_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s560_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s500_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s525_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s499_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s522_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s500_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s500_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s435_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s478_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s485_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s479_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s493_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s435_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s540_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s580_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s541_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s390_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s498_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s513_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s408_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s411_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s409_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s414_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s450_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s452_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s588_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s402_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s764_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s762_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s768_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s774_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s769_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s777_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s770_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s771_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s545_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s614_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s772_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s768_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s768_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s768_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s769_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s769_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s769_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s785_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s539_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s572_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s786_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s543_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s598_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s787_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s789_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s793_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s792_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s544_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s606_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s408_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s408_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s408_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s409_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s409_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s409_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s676_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s676_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s676_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s676_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s693_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s693_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s693_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s693_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s710_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s710_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s710_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s710_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s727_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s727_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s727_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s727_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s796_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s797_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s799_CrankCounter_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s619_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s626_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s629_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s638_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s631_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s656_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s630_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s647_UnitDelay_DSTATE = 0.0;

  {
    int_T i;
    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_DWork.s299_UnitDelay_DSTATE[i] = 0.0;
    }
  }

  BaseEngineController_LS_DWork.s327_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s328_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s427_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s442_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s445_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s427_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s427_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s427_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s275_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s260_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s173_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s183_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s184_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s209_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s211_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s111_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s111_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s190_state_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s111_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s194_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s221_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s222_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s216_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s197_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s133_state_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s251_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s250_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s247_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s247_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s247_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s239_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s238_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s235_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s235_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s235_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s159_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s158_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s101_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s87_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s72_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s20_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s55_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s46_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s42_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s44_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s47_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s48_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s868_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s868_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s386_TOld = 0.0;
  BaseEngineController_LS_DWork.s27_TimerOld = 0.0;
  BaseEngineController_LS_DWork.s429_CollectAverage.s391_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s428_CollectAverage.s391_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s387_CollectAverage.s391_UnitDelay1_DSTATE = 0.0;

  /* Start for S-Function (motohawk_sfun_trigger): '<Root>/motohawk_trigger' */
  BaseEngineController_LS_Foreground_Start();

  /* Start for S-Function (motohawk_sfun_trigger): '<S1>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_IDLE_EVENT_11p0013 */
  BaseEngineController_LS_DWork.s1_motohawk_trigger1_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_RTI_PERIODIC_12598p0001 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger1_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_5XRTI_PERIODIC_12597p0001 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger2' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_MID_TDC_EVENT_12599p0001 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger2_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger3' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_20XRTI_PERIODIC_12600p0001 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger3_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger4' */

  /* Clear enable/disable state for embedded trigger Trigger_BGND_BASE_PERIODIC_12601p0001 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger4_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger5' */

  /* Clear enable/disable state for embedded trigger Trigger_BGND_BASEx2_PERIODIC_12602p0001 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger5_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger6' */

  /* Clear enable/disable state for embedded trigger Trigger_BGND_BASEx10_PERIODIC_12603p0001 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger6_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger7' */

  /* Clear enable/disable state for embedded trigger Trigger_ONE_SECOND_EVENT_12604p0001 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger7_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S4>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_IDLE_EVENT_12528p0001 */
  BaseEngineController_LS_DWork.s4_motohawk_trigger1_DWORK1 = 0;

  /* Start for function-call system: '<S3>/Main Power Relay' */

  /* Start for Triggered SubSystem: '<S864>/Clear' incorporates:
   *  Start for S-Function (fcncallgen): '<S873>/Function-Call Generator'
   *  Start for SubSystem: '<S862>/motohawk_restore_nvmem'
   */

  /* Start for Triggered SubSystem: '<S865>/Clear' incorporates:
   *  Start for S-Function (fcncallgen): '<S874>/Function-Call Generator'
   *  Start for SubSystem: '<S862>/motohawk_store_nvmem'
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

  /* S-Function Block: <S879>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s879_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S870>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s870_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for Stateflow: '<S862>/ECUP Latch' */

  /* Entry: Main Power Relay/Main Power Relay/ECUP Latch */
  /* Transition: '<S866>:3' */
  BaseEngineController_LS_DWork.s866_is_c8_BaseEngineController_LS =
    BaseEngineController_LS_IN_PowerDown;

  /* Entry 'PowerDown': '<S866>:1' */
  BaseEngineController_LS_B.s866_MPRDState = FALSE;

  /* set "at time zero" to false */
  if (rtmIsFirstInitCond(BaseEngineController_LS_M)) {
    rtmSetFirstInitCond(BaseEngineController_LS_M, 0);
  }

  /* Level2 S-Function Block: '<S1>/motohawk_trigger1' (motohawk_sfun_trigger) */

  /* Enable for Trigger_IDLE_EVENT_11p0013 */
  BaseEngineController_LS_DWork.s1_motohawk_trigger1_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger1' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_RTI_PERIODIC_12598p0001 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger1_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_5XRTI_PERIODIC_12597p0001 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger2' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_MID_TDC_EVENT_12599p0001 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger2_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger3' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_20XRTI_PERIODIC_12600p0001 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger3_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger4' (motohawk_sfun_trigger) */

  /* Enable for Trigger_BGND_BASE_PERIODIC_12601p0001 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger4_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger5' (motohawk_sfun_trigger) */

  /* Enable for Trigger_BGND_BASEx2_PERIODIC_12602p0001 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger5_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger6' (motohawk_sfun_trigger) */

  /* Enable for Trigger_BGND_BASEx10_PERIODIC_12603p0001 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger6_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger7' (motohawk_sfun_trigger) */

  /* Enable for Trigger_ONE_SECOND_EVENT_12604p0001 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger7_DWORK1 = 1;

  /* Level2 S-Function Block: '<S4>/motohawk_trigger1' (motohawk_sfun_trigger) */

  /* Enable for Trigger_IDLE_EVENT_12528p0001 */
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
