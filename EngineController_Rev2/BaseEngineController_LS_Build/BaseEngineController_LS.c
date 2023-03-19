/*
 * File: BaseEngineController_LS.c
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

#include "BaseEngineController_LS.h"
#include "BaseEngineController_LS_private.h"

/* Named constants for Stateflow: '<S942>/ECUP Latch' */
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
  /* Enable for Trigger_FGND_RTI_PERIODIC_21494p0002 */
  if (BaseEngineController_LS_DWork.s5_motohawk_trigger1_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s5_motohawk_trigger1_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger' */
  /* Enable for Trigger_FGND_5XRTI_PERIODIC_21493p0002 */
  if (BaseEngineController_LS_DWork.s5_motohawk_trigger_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s5_motohawk_trigger_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger2' */
  /* Enable for Trigger_FGND_MID_TDC_EVENT_21495p0002 */
  if (BaseEngineController_LS_DWork.s5_motohawk_trigger2_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s5_motohawk_trigger2_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger3' */
  /* Enable for Trigger_FGND_20XRTI_PERIODIC_21496p0002 */
  if (BaseEngineController_LS_DWork.s5_motohawk_trigger3_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s5_motohawk_trigger3_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger4' */
  /* Enable for Trigger_BGND_BASE_PERIODIC_21497p0002 */
  if (BaseEngineController_LS_DWork.s5_motohawk_trigger4_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s5_motohawk_trigger4_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger5' */
  /* Enable for Trigger_BGND_BASEx2_PERIODIC_21498p0002 */
  if (BaseEngineController_LS_DWork.s5_motohawk_trigger5_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s5_motohawk_trigger5_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger6' */
  /* Enable for Trigger_BGND_BASEx10_PERIODIC_21499p0002 */
  if (BaseEngineController_LS_DWork.s5_motohawk_trigger6_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s5_motohawk_trigger6_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger7' */
  /* Enable for Trigger_ONE_SECOND_EVENT_21500p0002 */
  if (BaseEngineController_LS_DWork.s5_motohawk_trigger7_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s5_motohawk_trigger7_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S4>/motohawk_trigger1' */
  /* Enable for Trigger_IDLE_EVENT_21418p0002 */
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
      BaseEngineController_LS_B.s302_Defaultifnoflow[i] = 0.0;
    }

    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_B.s320_Sum1[i] = 0.0;
    }

    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_B.s319_chargemass[i] = 0.0;
    }

    for (i = 0; i < 5; i++) {
      BaseEngineController_LS_B.s109_EquivRatioInfo[i] = 0.0;
    }

    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_B.s249_O2FuelMult[i] = 0.0;
    }

    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_B.s163_ApplyMultipliersforO2KnockControlandEnrichment1
        [i] = 0.0;
    }

    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_B.s179_chargemass[i] = 0.0;
    }

    BaseEngineController_LS_B.s726_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_B.s705_Switch = 0.0;
    BaseEngineController_LS_B.s749_MinMax = 0.0;
    BaseEngineController_LS_B.s749_MinMax1 = 0.0;
    BaseEngineController_LS_B.s753_MinMax1 = 0.0;
    BaseEngineController_LS_B.s724_Merge = 0.0;
    BaseEngineController_LS_B.s763_Merge = 0.0;
    BaseEngineController_LS_B.s714_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_B.s704_Switch = 0.0;
    BaseEngineController_LS_B.s732_MinMax = 0.0;
    BaseEngineController_LS_B.s732_MinMax1 = 0.0;
    BaseEngineController_LS_B.s736_MinMax1 = 0.0;
    BaseEngineController_LS_B.s712_Merge = 0.0;
    BaseEngineController_LS_B.s746_Merge = 0.0;
    BaseEngineController_LS_B.s451_Switch1 = 0.0;
    BaseEngineController_LS_B.s481_Sum = 0.0;
    BaseEngineController_LS_B.s568_Sum1 = 0.0;
    BaseEngineController_LS_B.s581_Merge = 0.0;
    BaseEngineController_LS_B.s493_RPMInst = 0.0;
    BaseEngineController_LS_B.s517_DataTypeConversion = 0.0;
    BaseEngineController_LS_B.s567_Sum1 = 0.0;
    BaseEngineController_LS_B.s706_Switch = 0.0;
    BaseEngineController_LS_B.s766_MinMax = 0.0;
    BaseEngineController_LS_B.s766_MinMax1 = 0.0;
    BaseEngineController_LS_B.s770_MinMax1 = 0.0;
    BaseEngineController_LS_B.s707_Switch = 0.0;
    BaseEngineController_LS_B.s783_MinMax = 0.0;
    BaseEngineController_LS_B.s783_MinMax1 = 0.0;
    BaseEngineController_LS_B.s787_MinMax1 = 0.0;
    BaseEngineController_LS_B.s780_Merge = 0.0;
    BaseEngineController_LS_B.s797_Merge = 0.0;
    BaseEngineController_LS_B.s458_Switch2 = 0.0;
    BaseEngineController_LS_B.s569_Sum1 = 0.0;
    BaseEngineController_LS_B.s589_Merge = 0.0;
    BaseEngineController_LS_B.s498_Lambda = 0.0;
    BaseEngineController_LS_B.s498_OxygenConcentratio = 0.0;
    BaseEngineController_LS_B.s498_SystemVolts = 0.0;
    BaseEngineController_LS_B.s498_HeaterVolts = 0.0;
    BaseEngineController_LS_B.s498_ReadCANMessage_o6 = 0.0;
    BaseEngineController_LS_B.s498_ReadCANMessage_o7 = 0.0;
    BaseEngineController_LS_B.s498_ReadCANMessage_o8 = 0.0;
    BaseEngineController_LS_B.s498_ReadCANMessage_o9 = 0.0;
    BaseEngineController_LS_B.s498_ReadCANMessage_o10 = 0.0;
    BaseEngineController_LS_B.s498_Lambda_c = 0.0;
    BaseEngineController_LS_B.s498_OxygenConcentratio_d = 0.0;
    BaseEngineController_LS_B.s498_SystemVolts_k = 0.0;
    BaseEngineController_LS_B.s498_HeaterVolts_d = 0.0;
    BaseEngineController_LS_B.s498_ReadCANMessage1_o6 = 0.0;
    BaseEngineController_LS_B.s498_ReadCANMessage1_o7 = 0.0;
    BaseEngineController_LS_B.s498_ReadCANMessage1_o8 = 0.0;
    BaseEngineController_LS_B.s498_ReadCANMessage1_o9 = 0.0;
    BaseEngineController_LS_B.s498_ReadCANMessage1_o10 = 0.0;
    BaseEngineController_LS_B.s497_GPS_Speed = 0.0;
    BaseEngineController_LS_B.s497_GPS_Altitude = 0.0;
    BaseEngineController_LS_B.s497_GPS_Course = 0.0;
    BaseEngineController_LS_B.s497_ReadCANMessage2_o5 = 0.0;
    BaseEngineController_LS_B.s497_ReadCANMessage_o3 = 0.0;
    BaseEngineController_LS_B.s497_ReadCANMessage_o4 = 0.0;
    BaseEngineController_LS_B.s497_ReadCANMessage_o5 = 0.0;
    BaseEngineController_LS_B.s497_ReadCANMessage_o6 = 0.0;
    BaseEngineController_LS_B.s497_ReadCANMessage_o7 = 0.0;
    BaseEngineController_LS_B.s497_ReadCANMessage_o8 = 0.0;
    BaseEngineController_LS_B.s492_Gain1 = 0.0;
    BaseEngineController_LS_B.s552_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_B.s551_Merge = 0.0;
    BaseEngineController_LS_B.s523_Switch = 0.0;
    BaseEngineController_LS_B.s462_Switch2 = 0.0;
    BaseEngineController_LS_B.s498_MathFunction = 0.0;
    BaseEngineController_LS_B.s499_Sum1 = 0.0;
    BaseEngineController_LS_B.s498_MathFunction1 = 0.0;
    BaseEngineController_LS_B.s500_Sum1 = 0.0;
    BaseEngineController_LS_B.s505_Merge = 0.0;
    BaseEngineController_LS_B.s513_Merge = 0.0;
    BaseEngineController_LS_B.s498_MultiportSwitch = 0.0;
    BaseEngineController_LS_B.s456_Sum1 = 0.0;
    BaseEngineController_LS_B.s456_Sum3 = 0.0;
    BaseEngineController_LS_B.s483_Switch = 0.0;
    BaseEngineController_LS_B.s576_Sum1 = 0.0;
    BaseEngineController_LS_B.s644_Merge = 0.0;
    BaseEngineController_LS_B.s573_Merge = 0.0;
    BaseEngineController_LS_B.s571_Sum1 = 0.0;
    BaseEngineController_LS_B.s610_Merge = 0.0;
    BaseEngineController_LS_B.s401_motohawk_delta_time = 0.0;
    BaseEngineController_LS_B.s572_Sum1 = 0.0;
    BaseEngineController_LS_B.s411_Sum = 0.0;
    BaseEngineController_LS_B.s410_motohawk_interpolation_2d2 = 0.0;
    BaseEngineController_LS_B.s410_Sum = 0.0;
    BaseEngineController_LS_B.s410_NominalAirFlowRate = 0.0;
    BaseEngineController_LS_B.s410_ModelAirMassFlowRate = 0.0;
    BaseEngineController_LS_B.s492_Gain = 0.0;
    BaseEngineController_LS_B.s538_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_B.s537_Merge = 0.0;
    BaseEngineController_LS_B.s410_MultiportSwitch = 0.0;
    BaseEngineController_LS_B.s429_Merge = 0.0;
    BaseEngineController_LS_B.s432_Sum1 = 0.0;
    BaseEngineController_LS_B.s430_Merge = 0.0;
    BaseEngineController_LS_B.s435_Sum1 = 0.0;
    BaseEngineController_LS_B.s473_Sum1 = 0.0;
    BaseEngineController_LS_B.s518_DataTypeConversion = 0.0;
    BaseEngineController_LS_B.s521_DataTypeConversion = 0.0;
    BaseEngineController_LS_B.s618_Merge = 0.0;
    BaseEngineController_LS_B.s402_motohawk_data_read = 0.0;
    BaseEngineController_LS_B.s423_Sum1 = 0.0;
    BaseEngineController_LS_B.s829_Sum1 = 0.0;
    BaseEngineController_LS_B.s826_Switch = 0.0;
    BaseEngineController_LS_B.s833_Merge = 0.0;
    BaseEngineController_LS_B.s833_Switch = 0.0;
    BaseEngineController_LS_B.s834_Merge = 0.0;
    BaseEngineController_LS_B.s834_Switch = 0.0;
    BaseEngineController_LS_B.s455_MultiportSwitch = 0.0;
    BaseEngineController_LS_B.s92_SparkAdv = 0.0;
    BaseEngineController_LS_B.s570_Sum1 = 0.0;
    BaseEngineController_LS_B.s602_Merge = 0.0;
    BaseEngineController_LS_B.s574_Sum1 = 0.0;
    BaseEngineController_LS_B.s628_Merge = 0.0;
    BaseEngineController_LS_B.s92_FAN1 = 0.0;
    BaseEngineController_LS_B.s92_FAN2 = 0.0;
    BaseEngineController_LS_B.s92_SparkEnergy = 0.0;
    BaseEngineController_LS_B.s889_MinMax1 = 0.0;
    BaseEngineController_LS_B.s893_MinMax1 = 0.0;
    BaseEngineController_LS_B.s485_Switch = 0.0;
    BaseEngineController_LS_B.s92_Throttle = 0.0;
    BaseEngineController_LS_B.s806_ETC = 0.0;
    BaseEngineController_LS_B.s92_IACP = 0.0;
    BaseEngineController_LS_B.s907_MinMax1 = 0.0;
    BaseEngineController_LS_B.s92_IACS = 0.0;
    BaseEngineController_LS_B.s911_MinMax1 = 0.0;
    BaseEngineController_LS_B.s92_SOI = 0.0;
    BaseEngineController_LS_B.s64_constreftoatm = 0.0;
    BaseEngineController_LS_B.s21_Sum2 = 0.0;
    BaseEngineController_LS_B.s21_Sum1 = 0.0;
    BaseEngineController_LS_B.s92_MakeUpEOI = 0.0;
    BaseEngineController_LS_B.s92_WASTEGATE = 0.0;
    BaseEngineController_LS_B.s938_MinMax1 = 0.0;
    BaseEngineController_LS_B.s454_Sum3 = 0.0;
    BaseEngineController_LS_B.s497_GPS_Latitude = 0.0;
    BaseEngineController_LS_B.s497_GPS_Longitude = 0.0;
    BaseEngineController_LS_B.s575_Sum1 = 0.0;
    BaseEngineController_LS_B.s636_Merge = 0.0;
    BaseEngineController_LS_B.s861_Sum = 0.0;
    BaseEngineController_LS_B.s862_Sum = 0.0;
    BaseEngineController_LS_B.s864_CrankCounter = 0.0;
    BaseEngineController_LS_B.s656_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_B.s650_Merge = 0.0;
    BaseEngineController_LS_B.s655_Merge = 0.0;
    BaseEngineController_LS_B.s678_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_B.s661_Merge = 0.0;
    BaseEngineController_LS_B.s677_Merge = 0.0;
    BaseEngineController_LS_B.s696_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_B.s663_Merge = 0.0;
    BaseEngineController_LS_B.s695_Merge = 0.0;
    BaseEngineController_LS_B.s687_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_B.s686_Merge = 0.0;
    BaseEngineController_LS_B.s669_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_B.s668_Merge = 0.0;
    BaseEngineController_LS_B.s448_Merge = 0.0;
    BaseEngineController_LS_B.s466_Sum2 = 0.0;
    BaseEngineController_LS_B.s407_Timer = 0.0;
    BaseEngineController_LS_B.s294_UnitDelay = 0.0;
    BaseEngineController_LS_B.s287_Switch = 0.0;
    BaseEngineController_LS_B.s295_etc = 0.0;
    BaseEngineController_LS_B.s106_MultiportSwitch = 0.0;
    BaseEngineController_LS_B.s281_Add = 0.0;
    BaseEngineController_LS_B.s278_Product = 0.0;
    BaseEngineController_LS_B.s277_Product = 0.0;
    BaseEngineController_LS_B.s116_ApplyOffsetstoBaseSparkAdvance1 = 0.0;
    BaseEngineController_LS_B.s284_MinMax1 = 0.0;
    BaseEngineController_LS_B.s279_Switch = 0.0;
    BaseEngineController_LS_B.s116_motohawk_interpolation_2d1 = 0.0;
    BaseEngineController_LS_B.s113_Sum = 0.0;
    BaseEngineController_LS_B.s192_DontallowsetpointtoevergoabovetheTargetRPM =
      0.0;
    BaseEngineController_LS_B.s201_Sum2 = 0.0;
    BaseEngineController_LS_B.s201_Product2 = 0.0;
    BaseEngineController_LS_B.s202_Product = 0.0;
    BaseEngineController_LS_B.s203_Switch1 = 0.0;
    BaseEngineController_LS_B.s194_Switch = 0.0;
    BaseEngineController_LS_B.s190_Sum = 0.0;
    BaseEngineController_LS_B.s110_Switch4 = 0.0;
    BaseEngineController_LS_B.s110_Switch5 = 0.0;
    BaseEngineController_LS_B.s147_Switch1 = 0.0;
    BaseEngineController_LS_B.s108_MinMax2 = 0.0;
    BaseEngineController_LS_B.s145_Sum2 = 0.0;
    BaseEngineController_LS_B.s145_Product2 = 0.0;
    BaseEngineController_LS_B.s146_Product = 0.0;
    BaseEngineController_LS_B.s136_Switch = 0.0;
    BaseEngineController_LS_B.s108_Sum3 = 0.0;
    BaseEngineController_LS_B.s108_Switch = 0.0;
    BaseEngineController_LS_B.s223_MinMax1 = 0.0;
    BaseEngineController_LS_B.s213_DontallowsetpointtoeverdropbelowtheTargetRPM =
      0.0;
    BaseEngineController_LS_B.s239_Sum2 = 0.0;
    BaseEngineController_LS_B.s239_Product2 = 0.0;
    BaseEngineController_LS_B.s240_Product = 0.0;
    BaseEngineController_LS_B.s241_Switch1 = 0.0;
    BaseEngineController_LS_B.s114_MinGovAirPID = 0.0;
    BaseEngineController_LS_B.s234_Sum1 = 0.0;
    BaseEngineController_LS_B.s234_Product = 0.0;
    BaseEngineController_LS_B.s235_Product = 0.0;
    BaseEngineController_LS_B.s114_IdleSpk = 0.0;
    BaseEngineController_LS_B.s231_Switch = 0.0;
    BaseEngineController_LS_B.s216_DontallowsetpointtoeverdropbelowtheTargetRPM =
      0.0;
    BaseEngineController_LS_B.s151_Product1 = 0.0;
    BaseEngineController_LS_B.s151_SpkOut = 0.0;
    BaseEngineController_LS_B.s248_Switch = 0.0;
    BaseEngineController_LS_B.s268_Sum2 = 0.0;
    BaseEngineController_LS_B.s268_Product2 = 0.0;
    BaseEngineController_LS_B.s270_Switch1 = 0.0;
    BaseEngineController_LS_B.s269_Product = 0.0;
    BaseEngineController_LS_B.s266_Switch3 = 0.0;
    BaseEngineController_LS_B.s266_Switch1 = 0.0;
    BaseEngineController_LS_B.s266_Switch4 = 0.0;
    BaseEngineController_LS_B.s247_Switch = 0.0;
    BaseEngineController_LS_B.s256_Sum2 = 0.0;
    BaseEngineController_LS_B.s256_Product2 = 0.0;
    BaseEngineController_LS_B.s258_Switch1 = 0.0;
    BaseEngineController_LS_B.s257_Product = 0.0;
    BaseEngineController_LS_B.s254_Switch3 = 0.0;
    BaseEngineController_LS_B.s254_Switch1 = 0.0;
    BaseEngineController_LS_B.s254_Switch4 = 0.0;
    BaseEngineController_LS_B.s168_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_B.s166_FuelFlowMassAirflowEquivalenceRatioAirtofuelRatio
      = 0.0;
    BaseEngineController_LS_B.s163_PerCylinderMassFlowRate = 0.0;
    BaseEngineController_LS_B.s188_MinMax1 = 0.0;
    BaseEngineController_LS_B.s189_MinMax1 = 0.0;
    BaseEngineController_LS_B.s178_Sum1 = 0.0;
    BaseEngineController_LS_B.s169_Sum1 = 0.0;
    BaseEngineController_LS_B.s177_Sum1 = 0.0;
    BaseEngineController_LS_B.s169_Sum = 0.0;
    BaseEngineController_LS_B.s169_Product1 = 0.0;
    BaseEngineController_LS_B.s176_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_B.s173_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_B.s107_WarmUpRatio = 0.0;
    BaseEngineController_LS_B.s131_Switch = 0.0;
    BaseEngineController_LS_B.s107_IATEnrichment = 0.0;
    BaseEngineController_LS_B.s107_CATEnrichment = 0.0;
    BaseEngineController_LS_B.s107_DesEquivRatio = 0.0;
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
    BaseEngineController_LS_B.s959_Switch = 0.0;
    BaseEngineController_LS_B.s450_CollectAverage.s412_Product = 0.0;
    BaseEngineController_LS_B.s449_CollectAverage.s412_Product = 0.0;
    BaseEngineController_LS_B.s408_CollectAverage.s412_Product = 0.0;
  }

  /* states (dwork) */
  (void) memset((void *)&BaseEngineController_LS_DWork, 0,
                sizeof(D_Work_BaseEngineController_LS));
  BaseEngineController_LS_DWork.s702_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s727_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s759_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s752_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s700_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s715_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s742_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s735_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s568_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s582_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s567_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s776_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s769_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s793_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s786_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s594_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s569_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s593_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s591_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s591_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s591_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s523_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s556_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s522_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s553_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s523_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s523_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s456_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s499_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s506_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s500_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s514_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s456_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s576_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s645_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s571_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s611_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s572_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s411_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s520_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s539_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s429_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s432_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s430_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s435_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s471_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s473_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s619_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s423_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s829_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s827_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s833_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s839_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s834_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s842_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s835_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s836_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s837_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s833_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s833_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s833_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s834_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s834_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s834_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s850_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s570_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s603_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s851_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s574_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s629_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s852_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s854_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s858_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s857_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s575_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s637_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s429_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s429_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s429_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s430_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s430_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s430_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s739_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s739_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s739_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s739_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s756_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s756_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s756_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s756_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s773_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s773_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s773_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s773_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s790_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s790_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s790_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s790_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s861_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s862_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s864_CrankCounter_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s650_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s657_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s661_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s679_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s663_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s697_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s662_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s688_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s660_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s670_UnitDelay_DSTATE = 0.0;

  {
    int_T i;
    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_DWork.s320_UnitDelay_DSTATE[i] = 0.0;
    }
  }

  BaseEngineController_LS_DWork.s348_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s349_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s448_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s463_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s466_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s448_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s448_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s448_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s294_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s279_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s192_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s202_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s203_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s108_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s147_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s137_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s146_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s228_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s230_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s114_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s114_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s209_state_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s114_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s213_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s240_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s241_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s235_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s216_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s152_state_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s270_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s269_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s266_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s266_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s266_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s258_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s257_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s254_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s254_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s254_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s178_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s177_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s87_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s72_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s20_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s55_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s46_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s42_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s44_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s47_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s48_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s948_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s948_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s407_TOld = 0.0;
  BaseEngineController_LS_DWork.s27_TimerOld = 0.0;
  BaseEngineController_LS_DWork.s450_CollectAverage.s412_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s449_CollectAverage.s412_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s408_CollectAverage.s412_UnitDelay1_DSTATE = 0.0;

  /* Start for S-Function (motohawk_sfun_trigger): '<Root>/motohawk_trigger' */
  BaseEngineController_LS_Foreground_Start();

  /* Start for S-Function (motohawk_sfun_trigger): '<S1>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_IDLE_EVENT_9p001 */
  BaseEngineController_LS_DWork.s1_motohawk_trigger1_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_RTI_PERIODIC_21494p0002 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger1_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_5XRTI_PERIODIC_21493p0002 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger2' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_MID_TDC_EVENT_21495p0002 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger2_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger3' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_20XRTI_PERIODIC_21496p0002 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger3_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger4' */

  /* Clear enable/disable state for embedded trigger Trigger_BGND_BASE_PERIODIC_21497p0002 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger4_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger5' */

  /* Clear enable/disable state for embedded trigger Trigger_BGND_BASEx2_PERIODIC_21498p0002 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger5_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger6' */

  /* Clear enable/disable state for embedded trigger Trigger_BGND_BASEx10_PERIODIC_21499p0002 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger6_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger7' */

  /* Clear enable/disable state for embedded trigger Trigger_ONE_SECOND_EVENT_21500p0002 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger7_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S4>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_IDLE_EVENT_21418p0002 */
  BaseEngineController_LS_DWork.s4_motohawk_trigger1_DWORK1 = 0;

  /* Start for function-call system: '<S3>/Main Power Relay' */

  /* Start for Triggered SubSystem: '<S944>/Clear' incorporates:
   *  Start for S-Function (fcncallgen): '<S953>/Function-Call Generator'
   *  Start for SubSystem: '<S942>/motohawk_restore_nvmem'
   */

  /* Start for Triggered SubSystem: '<S945>/Clear' incorporates:
   *  Start for S-Function (fcncallgen): '<S954>/Function-Call Generator'
   *  Start for SubSystem: '<S942>/motohawk_store_nvmem'
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

  /* S-Function Block: <S959>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s959_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S950>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s950_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for Stateflow: '<S942>/ECUP Latch' */

  /* Entry: Main Power Relay/Main Power Relay/ECUP Latch */
  /* Transition: '<S946>:3' */
  BaseEngineController_LS_DWork.s946_is_c8_BaseEngineController_LS =
    BaseEngineController_LS_IN_PowerDown;

  /* Entry 'PowerDown': '<S946>:1' */
  BaseEngineController_LS_B.s946_MPRDState = FALSE;

  /* set "at time zero" to false */
  if (rtmIsFirstInitCond(BaseEngineController_LS_M)) {
    rtmSetFirstInitCond(BaseEngineController_LS_M, 0);
  }

  /* Level2 S-Function Block: '<S1>/motohawk_trigger1' (motohawk_sfun_trigger) */

  /* Enable for Trigger_IDLE_EVENT_9p001 */
  BaseEngineController_LS_DWork.s1_motohawk_trigger1_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger1' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_RTI_PERIODIC_21494p0002 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger1_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_5XRTI_PERIODIC_21493p0002 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger2' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_MID_TDC_EVENT_21495p0002 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger2_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger3' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_20XRTI_PERIODIC_21496p0002 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger3_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger4' (motohawk_sfun_trigger) */

  /* Enable for Trigger_BGND_BASE_PERIODIC_21497p0002 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger4_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger5' (motohawk_sfun_trigger) */

  /* Enable for Trigger_BGND_BASEx2_PERIODIC_21498p0002 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger5_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger6' (motohawk_sfun_trigger) */

  /* Enable for Trigger_BGND_BASEx10_PERIODIC_21499p0002 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger6_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger7' (motohawk_sfun_trigger) */

  /* Enable for Trigger_ONE_SECOND_EVENT_21500p0002 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger7_DWORK1 = 1;

  /* Level2 S-Function Block: '<S4>/motohawk_trigger1' (motohawk_sfun_trigger) */

  /* Enable for Trigger_IDLE_EVENT_21418p0002 */
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
