/*
 * File: BaseEngineController_LS.c
 *
 * Code generated for Simulink model 'BaseEngineController_LS'.
 *
 * Model version                  : 1.1987
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Sun Oct 04 18:30:28 2020
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_LS.h"
#include "BaseEngineController_LS_private.h"

/* Named constants for Stateflow: '<S913>/ECUP Latch' */
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
  /* Enable for Trigger_FGND_RTI_PERIODIC_11724p0004 */
  if (BaseEngineController_LS_DWork.s5_motohawk_trigger1_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s5_motohawk_trigger1_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger' */
  /* Enable for Trigger_FGND_5XRTI_PERIODIC_11723p0004 */
  if (BaseEngineController_LS_DWork.s5_motohawk_trigger_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s5_motohawk_trigger_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger2' */
  /* Enable for Trigger_FGND_MID_TDC_EVENT_11725p0004 */
  if (BaseEngineController_LS_DWork.s5_motohawk_trigger2_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s5_motohawk_trigger2_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger3' */
  /* Enable for Trigger_FGND_20XRTI_PERIODIC_11726p0004 */
  if (BaseEngineController_LS_DWork.s5_motohawk_trigger3_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s5_motohawk_trigger3_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger4' */
  /* Enable for Trigger_BGND_BASE_PERIODIC_11727p0004 */
  if (BaseEngineController_LS_DWork.s5_motohawk_trigger4_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s5_motohawk_trigger4_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger5' */
  /* Enable for Trigger_BGND_BASEx2_PERIODIC_11728p0004 */
  if (BaseEngineController_LS_DWork.s5_motohawk_trigger5_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s5_motohawk_trigger5_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger6' */
  /* Enable for Trigger_BGND_BASEx10_PERIODIC_11729p0004 */
  if (BaseEngineController_LS_DWork.s5_motohawk_trigger6_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s5_motohawk_trigger6_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger7' */
  /* Enable for Trigger_ONE_SECOND_EVENT_11730p0004 */
  if (BaseEngineController_LS_DWork.s5_motohawk_trigger7_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s5_motohawk_trigger7_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S4>/motohawk_trigger1' */
  /* Enable for Trigger_IDLE_EVENT_11649p0004 */
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
      BaseEngineController_LS_B.s325_Defaultifnoflow[i] = 0.0;
    }

    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_B.s342_Sum1[i] = 0.0;
    }

    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_B.s341_chargemass[i] = 0.0;
    }

    BaseEngineController_LS_B.s721_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_B.s700_Switch = 0.0;
    BaseEngineController_LS_B.s744_MinMax = 0.0;
    BaseEngineController_LS_B.s744_MinMax1 = 0.0;
    BaseEngineController_LS_B.s748_MinMax1 = 0.0;
    BaseEngineController_LS_B.s719_Merge = 0.0;
    BaseEngineController_LS_B.s758_Merge = 0.0;
    BaseEngineController_LS_B.s709_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_B.s699_Switch = 0.0;
    BaseEngineController_LS_B.s727_MinMax = 0.0;
    BaseEngineController_LS_B.s727_MinMax1 = 0.0;
    BaseEngineController_LS_B.s731_MinMax1 = 0.0;
    BaseEngineController_LS_B.s707_Merge = 0.0;
    BaseEngineController_LS_B.s741_Merge = 0.0;
    BaseEngineController_LS_B.s408_Switch1 = 0.0;
    BaseEngineController_LS_B.s433_Sum = 0.0;
    BaseEngineController_LS_B.s444_RPMInst = 0.0;
    BaseEngineController_LS_B.s448_DataTypeConversion = 0.0;
    BaseEngineController_LS_B.s443_Gain1 = 0.0;
    BaseEngineController_LS_B.s478_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_B.s501_Sum1 = 0.0;
    BaseEngineController_LS_B.s477_Merge = 0.0;
    BaseEngineController_LS_B.s514_Merge = 0.0;
    BaseEngineController_LS_B.s500_Sum1 = 0.0;
    BaseEngineController_LS_B.s701_Switch = 0.0;
    BaseEngineController_LS_B.s761_MinMax = 0.0;
    BaseEngineController_LS_B.s761_MinMax1 = 0.0;
    BaseEngineController_LS_B.s765_MinMax1 = 0.0;
    BaseEngineController_LS_B.s702_Switch = 0.0;
    BaseEngineController_LS_B.s778_MinMax = 0.0;
    BaseEngineController_LS_B.s778_MinMax1 = 0.0;
    BaseEngineController_LS_B.s782_MinMax1 = 0.0;
    BaseEngineController_LS_B.s775_Merge = 0.0;
    BaseEngineController_LS_B.s792_Merge = 0.0;
    BaseEngineController_LS_B.s415_Switch2 = 0.0;
    BaseEngineController_LS_B.s502_Sum1 = 0.0;
    BaseEngineController_LS_B.s522_Merge = 0.0;
    BaseEngineController_LS_B.s581_ReadCANMessage1_o2 = 0.0;
    BaseEngineController_LS_B.s581_ReadCANMessage1_o3 = 0.0;
    BaseEngineController_LS_B.s581_ReadCANMessage1_o4 = 0.0;
    BaseEngineController_LS_B.s581_ReadCANMessage1_o5 = 0.0;
    BaseEngineController_LS_B.s581_ReadCANMessage1_o6 = 0.0;
    BaseEngineController_LS_B.s581_ReadCANMessage1_o7 = 0.0;
    BaseEngineController_LS_B.s581_ReadCANMessage1_o8 = 0.0;
    BaseEngineController_LS_B.s581_ReadCANMessage1_o9 = 0.0;
    BaseEngineController_LS_B.s581_ReadCANMessage1_o10 = 0.0;
    BaseEngineController_LS_B.s581_MathFunction1 = 0.0;
    BaseEngineController_LS_B.s584_Sum1 = 0.0;
    BaseEngineController_LS_B.s615_Merge = 0.0;
    BaseEngineController_LS_B.s581_ReadCANMessage_o2 = 0.0;
    BaseEngineController_LS_B.s581_ReadCANMessage_o3 = 0.0;
    BaseEngineController_LS_B.s581_ReadCANMessage_o4 = 0.0;
    BaseEngineController_LS_B.s581_ReadCANMessage_o5 = 0.0;
    BaseEngineController_LS_B.s581_ReadCANMessage_o6 = 0.0;
    BaseEngineController_LS_B.s581_ReadCANMessage_o7 = 0.0;
    BaseEngineController_LS_B.s581_ReadCANMessage_o8 = 0.0;
    BaseEngineController_LS_B.s581_ReadCANMessage_o9 = 0.0;
    BaseEngineController_LS_B.s581_ReadCANMessage_o10 = 0.0;
    BaseEngineController_LS_B.s581_MathFunction = 0.0;
    BaseEngineController_LS_B.s583_Sum1 = 0.0;
    BaseEngineController_LS_B.s607_Merge = 0.0;
    BaseEngineController_LS_B.s581_Gain = 0.0;
    BaseEngineController_LS_B.s413_Sum1 = 0.0;
    BaseEngineController_LS_B.s435_Switch = 0.0;
    BaseEngineController_LS_B.s509_Sum1 = 0.0;
    BaseEngineController_LS_B.s577_Merge = 0.0;
    BaseEngineController_LS_B.s506_Merge = 0.0;
    BaseEngineController_LS_B.s504_Sum1 = 0.0;
    BaseEngineController_LS_B.s543_Merge = 0.0;
    BaseEngineController_LS_B.s366_motohawk_delta_time = 0.0;
    BaseEngineController_LS_B.s505_Sum1 = 0.0;
    BaseEngineController_LS_B.s375_Sum = 0.0;
    BaseEngineController_LS_B.s374_motohawk_interpolation_2d2 = 0.0;
    BaseEngineController_LS_B.s374_Sum = 0.0;
    BaseEngineController_LS_B.s374_NominalAirFlowRate = 0.0;
    BaseEngineController_LS_B.s374_ModelAirMassFlowRate = 0.0;
    BaseEngineController_LS_B.s443_Gain = 0.0;
    BaseEngineController_LS_B.s469_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_B.s468_Merge = 0.0;
    BaseEngineController_LS_B.s374_MultiportSwitch = 0.0;
    BaseEngineController_LS_B.s386_Merge = 0.0;
    BaseEngineController_LS_B.s389_Sum1 = 0.0;
    BaseEngineController_LS_B.s387_Merge = 0.0;
    BaseEngineController_LS_B.s392_Sum1 = 0.0;
    BaseEngineController_LS_B.s429_Sum1 = 0.0;
    BaseEngineController_LS_B.s449_DataTypeConversion = 0.0;
    BaseEngineController_LS_B.s453_DataTypeConversion = 0.0;
    BaseEngineController_LS_B.s551_Merge = 0.0;
    BaseEngineController_LS_B.s412_MultiportSwitch = 0.0;
    BaseEngineController_LS_B.s135_SparkAdv = 0.0;
    BaseEngineController_LS_B.s503_Sum1 = 0.0;
    BaseEngineController_LS_B.s507_Sum1 = 0.0;
    BaseEngineController_LS_B.s535_Merge = 0.0;
    BaseEngineController_LS_B.s561_Merge = 0.0;
    BaseEngineController_LS_B.s135_SparkEnergy = 0.0;
    BaseEngineController_LS_B.s860_MinMax1 = 0.0;
    BaseEngineController_LS_B.s864_MinMax1 = 0.0;
    BaseEngineController_LS_B.s437_Switch = 0.0;
    BaseEngineController_LS_B.s135_Throttle = 0.0;
    BaseEngineController_LS_B.s801_ETC = 0.0;
    BaseEngineController_LS_B.s135_IACP = 0.0;
    BaseEngineController_LS_B.s878_MinMax1 = 0.0;
    BaseEngineController_LS_B.s135_IACS = 0.0;
    BaseEngineController_LS_B.s882_MinMax1 = 0.0;
    BaseEngineController_LS_B.s135_SOI = 0.0;
    BaseEngineController_LS_B.s64_constreftoatm = 0.0;
    BaseEngineController_LS_B.s135_FuelMult = 0.0;
    BaseEngineController_LS_B.s21_Sum2 = 0.0;
    BaseEngineController_LS_B.s21_Sum1 = 0.0;
    BaseEngineController_LS_B.s135_MakeUpEOI = 0.0;
    BaseEngineController_LS_B.s135_WASTEGATE = 0.0;
    BaseEngineController_LS_B.s909_MinMax1 = 0.0;
    BaseEngineController_LS_B.s413_Sum3 = 0.0;
    BaseEngineController_LS_B.s411_Sum3 = 0.0;
    BaseEngineController_LS_B.s508_Sum1 = 0.0;
    BaseEngineController_LS_B.s569_Merge = 0.0;
    BaseEngineController_LS_B.s824_Sum = 0.0;
    BaseEngineController_LS_B.s825_Sum = 0.0;
    BaseEngineController_LS_B.s827_CrankCounter = 0.0;
    BaseEngineController_LS_B.s673_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_B.s656_Merge = 0.0;
    BaseEngineController_LS_B.s672_Merge = 0.0;
    BaseEngineController_LS_B.s691_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_B.s658_Merge = 0.0;
    BaseEngineController_LS_B.s690_Merge = 0.0;
    BaseEngineController_LS_B.s682_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_B.s681_Merge = 0.0;
    BaseEngineController_LS_B.s664_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_B.s663_Merge = 0.0;
    BaseEngineController_LS_B.s405_Merge = 0.0;
    BaseEngineController_LS_B.s422_Sum2 = 0.0;
    BaseEngineController_LS_B.s371_Timer = 0.0;
    BaseEngineController_LS_B.s319_UnitDelay = 0.0;
    BaseEngineController_LS_B.s309_Product1 = 0.0;
    BaseEngineController_LS_B.s309_Switch = 0.0;
    BaseEngineController_LS_B.s320_etc = 0.0;
    BaseEngineController_LS_B.s145_MultiportSwitch = 0.0;
    BaseEngineController_LS_B.s186_Switch1 = 0.0;
    BaseEngineController_LS_B.s147_Switch1 = 0.0;
    BaseEngineController_LS_B.s184_Sum2 = 0.0;
    BaseEngineController_LS_B.s184_Product2 = 0.0;
    BaseEngineController_LS_B.s185_Product = 0.0;
    BaseEngineController_LS_B.s175_Switch = 0.0;
    BaseEngineController_LS_B.s147_motohawk_interpolation_2d = 0.0;
    BaseEngineController_LS_B.s147_Sum3 = 0.0;
    BaseEngineController_LS_B.s149_MinMax1 = 0.0;
    BaseEngineController_LS_B.s149_MinMax = 0.0;
    BaseEngineController_LS_B.s303_Add = 0.0;
    BaseEngineController_LS_B.s300_Product = 0.0;
    BaseEngineController_LS_B.s299_Product = 0.0;
    BaseEngineController_LS_B.s155_ApplyOffsetstoBaseSparkAdvance1 = 0.0;
    BaseEngineController_LS_B.s306_MinMax1 = 0.0;
    BaseEngineController_LS_B.s301_Switch = 0.0;
    BaseEngineController_LS_B.s155_motohawk_interpolation_2d1 = 0.0;
    BaseEngineController_LS_B.s152_Sum = 0.0;
    BaseEngineController_LS_B.s230_DontallowsetpointtoevergoabovetheTargetRPM =
      0.0;
    BaseEngineController_LS_B.s239_Sum2 = 0.0;
    BaseEngineController_LS_B.s239_Product2 = 0.0;
    BaseEngineController_LS_B.s240_Product = 0.0;
    BaseEngineController_LS_B.s241_Switch1 = 0.0;
    BaseEngineController_LS_B.s232_Switch = 0.0;
    BaseEngineController_LS_B.s228_Sum = 0.0;
    BaseEngineController_LS_B.s261_MinMax1 = 0.0;
    BaseEngineController_LS_B.s251_DontallowsetpointtoeverdropbelowtheTargetRPM =
      0.0;
    BaseEngineController_LS_B.s277_Sum2 = 0.0;
    BaseEngineController_LS_B.s277_Product2 = 0.0;
    BaseEngineController_LS_B.s278_Product = 0.0;
    BaseEngineController_LS_B.s279_Switch1 = 0.0;
    BaseEngineController_LS_B.s153_MinGovAirPID = 0.0;
    BaseEngineController_LS_B.s272_Sum1 = 0.0;
    BaseEngineController_LS_B.s272_Product = 0.0;
    BaseEngineController_LS_B.s273_Product = 0.0;
    BaseEngineController_LS_B.s153_IdleSpk = 0.0;
    BaseEngineController_LS_B.s269_Switch = 0.0;
    BaseEngineController_LS_B.s254_DontallowsetpointtoeverdropbelowtheTargetRPM =
      0.0;
    BaseEngineController_LS_B.s154_O2FuelMult = 0.0;
    BaseEngineController_LS_B.s284_Switch = 0.0;
    BaseEngineController_LS_B.s290_Sum2 = 0.0;
    BaseEngineController_LS_B.s290_Product2 = 0.0;
    BaseEngineController_LS_B.s292_Switch1 = 0.0;
    BaseEngineController_LS_B.s291_Product = 0.0;
    BaseEngineController_LS_B.s288_Switch3 = 0.0;
    BaseEngineController_LS_B.s288_Switch1 = 0.0;
    BaseEngineController_LS_B.s288_Switch4 = 0.0;
    BaseEngineController_LS_B.s210_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_B.s208_FuelFlowMassAirflowEquivalenceRatioAirtofuelRatio
      = 0.0;
    BaseEngineController_LS_B.s205_PerCylinderMassFlowRate = 0.0;
    BaseEngineController_LS_B.s205_ApplyMultipliersforO2KnockControlandEnrichment1
      = 0.0;
    BaseEngineController_LS_B.s227_MinMax1 = 0.0;
    BaseEngineController_LS_B.s220_chargemass = 0.0;
    BaseEngineController_LS_B.s219_Sum1 = 0.0;
    BaseEngineController_LS_B.s211_Sum1 = 0.0;
    BaseEngineController_LS_B.s218_Sum1 = 0.0;
    BaseEngineController_LS_B.s211_Sum = 0.0;
    BaseEngineController_LS_B.s211_Product1 = 0.0;
    BaseEngineController_LS_B.s217_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_B.s214_motohawk_interpolation_1d = 0.0;
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
    BaseEngineController_LS_B.s929_Switch = 0.0;
    BaseEngineController_LS_B.s407_CollectAverage.s376_Product = 0.0;
    BaseEngineController_LS_B.s406_CollectAverage.s376_Product = 0.0;
    BaseEngineController_LS_B.s372_CollectAverage.s376_Product = 0.0;
  }

  /* states (dwork) */
  (void) memset((void *)&BaseEngineController_LS_DWork, 0,
                sizeof(D_Work_BaseEngineController_LS));
  BaseEngineController_LS_DWork.s697_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s722_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s754_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s747_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s695_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s710_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s737_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s730_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s452_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s479_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s501_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s515_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s500_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s771_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s764_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s788_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s781_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s527_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s502_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s526_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s524_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s524_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s524_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s413_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s584_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s616_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s583_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s608_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s509_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s578_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s504_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s544_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s505_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s375_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s451_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s470_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s386_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s389_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s387_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s392_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s427_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s429_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s552_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s503_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s536_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s507_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s562_UnitDelay_DSTATE = 0.0;
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

  BaseEngineController_LS_DWork.s413_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s508_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s570_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s386_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s386_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s386_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s387_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s387_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s387_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s734_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s734_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s734_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s734_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s751_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s751_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s751_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s751_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s768_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s768_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s768_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s768_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s785_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s785_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s785_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s785_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s824_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s825_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s827_CrankCounter_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s656_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s674_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s658_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s692_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s657_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s683_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s655_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s665_UnitDelay_DSTATE = 0.0;

  {
    int_T i;
    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_DWork.s342_UnitDelay_DSTATE[i] = 0.0;
    }
  }

  BaseEngineController_LS_DWork.s405_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s419_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s422_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s405_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s405_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s405_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s319_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s147_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s186_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s176_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s185_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s301_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s230_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s240_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s241_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s266_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s268_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s153_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s153_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s247_state_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s153_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s251_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s278_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s279_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s273_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s254_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s292_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s291_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s288_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s288_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s288_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s219_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s218_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s130_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s102_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s20_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s55_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s46_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s42_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s44_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s47_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s48_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s919_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s919_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s371_TOld = 0.0;
  BaseEngineController_LS_DWork.s191_count = 0.0;
  BaseEngineController_LS_DWork.s191_EquivStart = 0.0;
  BaseEngineController_LS_DWork.s27_TimerOld = 0.0;
  BaseEngineController_LS_DWork.s407_CollectAverage.s376_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s406_CollectAverage.s376_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s372_CollectAverage.s376_UnitDelay1_DSTATE = 0.0;

  /* Start for S-Function (motohawk_sfun_trigger): '<Root>/motohawk_trigger' */
  BaseEngineController_LS_Foreground_Start();

  /* Start for S-Function (motohawk_sfun_trigger): '<S1>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_IDLE_EVENT_9p001 */
  BaseEngineController_LS_DWork.s1_motohawk_trigger1_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_RTI_PERIODIC_11724p0004 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger1_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_5XRTI_PERIODIC_11723p0004 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger2' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_MID_TDC_EVENT_11725p0004 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger2_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger3' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_20XRTI_PERIODIC_11726p0004 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger3_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger4' */

  /* Clear enable/disable state for embedded trigger Trigger_BGND_BASE_PERIODIC_11727p0004 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger4_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger5' */

  /* Clear enable/disable state for embedded trigger Trigger_BGND_BASEx2_PERIODIC_11728p0004 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger5_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger6' */

  /* Clear enable/disable state for embedded trigger Trigger_BGND_BASEx10_PERIODIC_11729p0004 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger6_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger7' */

  /* Clear enable/disable state for embedded trigger Trigger_ONE_SECOND_EVENT_11730p0004 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger7_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S4>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_IDLE_EVENT_11649p0004 */
  BaseEngineController_LS_DWork.s4_motohawk_trigger1_DWORK1 = 0;

  /* Start for function-call system: '<S3>/Main Power Relay' */

  /* Start for Triggered SubSystem: '<S915>/Clear' incorporates:
   *  Start for S-Function (fcncallgen): '<S923>/Function-Call Generator'
   *  Start for SubSystem: '<S913>/motohawk_restore_nvmem'
   */

  /* Start for Triggered SubSystem: '<S916>/Clear' incorporates:
   *  Start for S-Function (fcncallgen): '<S924>/Function-Call Generator'
   *  Start for SubSystem: '<S913>/motohawk_store_nvmem'
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

  /* S-Function Block: <S929>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s929_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for Stateflow: '<S913>/ECUP Latch' */

  /* Entry: Main Power Relay/Main Power Relay/ECUP Latch */
  /* Transition: '<S917>:3' */
  BaseEngineController_LS_DWork.s917_is_c8_BaseEngineController_LS =
    BaseEngineController_LS_IN_PowerDown;

  /* Entry 'PowerDown': '<S917>:1' */
  BaseEngineController_LS_B.s917_MPRDState = FALSE;

  /* set "at time zero" to false */
  if (rtmIsFirstInitCond(BaseEngineController_LS_M)) {
    rtmSetFirstInitCond(BaseEngineController_LS_M, 0);
  }

  /* Level2 S-Function Block: '<S1>/motohawk_trigger1' (motohawk_sfun_trigger) */

  /* Enable for Trigger_IDLE_EVENT_9p001 */
  BaseEngineController_LS_DWork.s1_motohawk_trigger1_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger1' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_RTI_PERIODIC_11724p0004 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger1_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_5XRTI_PERIODIC_11723p0004 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger2' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_MID_TDC_EVENT_11725p0004 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger2_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger3' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_20XRTI_PERIODIC_11726p0004 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger3_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger4' (motohawk_sfun_trigger) */

  /* Enable for Trigger_BGND_BASE_PERIODIC_11727p0004 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger4_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger5' (motohawk_sfun_trigger) */

  /* Enable for Trigger_BGND_BASEx2_PERIODIC_11728p0004 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger5_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger6' (motohawk_sfun_trigger) */

  /* Enable for Trigger_BGND_BASEx10_PERIODIC_11729p0004 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger6_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger7' (motohawk_sfun_trigger) */

  /* Enable for Trigger_ONE_SECOND_EVENT_11730p0004 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger7_DWORK1 = 1;

  /* Level2 S-Function Block: '<S4>/motohawk_trigger1' (motohawk_sfun_trigger) */

  /* Enable for Trigger_IDLE_EVENT_11649p0004 */
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
