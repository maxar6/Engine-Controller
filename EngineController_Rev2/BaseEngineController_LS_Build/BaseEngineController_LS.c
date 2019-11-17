/*
 * File: BaseEngineController_LS.c
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

#include "BaseEngineController_LS.h"
#include "BaseEngineController_LS_private.h"

/* Named constants for Stateflow: '<S791>/ECUP Latch' */
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
  /* Enable for Trigger_IDLE_EVENT_9816p0001 */
  if (BaseEngineController_LS_DWork.s1_motohawk_trigger1_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s1_motohawk_trigger1_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger1' */
  /* Enable for Trigger_FGND_RTI_PERIODIC_9944p0001 */
  if (BaseEngineController_LS_DWork.s5_motohawk_trigger1_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s5_motohawk_trigger1_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger' */
  /* Enable for Trigger_FGND_2XRTI_PERIODIC_9943p0001 */
  if (BaseEngineController_LS_DWork.s5_motohawk_trigger_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s5_motohawk_trigger_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger2' */
  /* Enable for Trigger_FGND_10XRTI_PERIODIC_9945p0001 */
  if (BaseEngineController_LS_DWork.s5_motohawk_trigger2_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s5_motohawk_trigger2_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger3' */
  /* Enable for Trigger_FGND_20XRTI_PERIODIC_9946p0001 */
  if (BaseEngineController_LS_DWork.s5_motohawk_trigger3_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s5_motohawk_trigger3_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger4' */
  /* Enable for Trigger_BGND_BASE_PERIODIC_9947p0001 */
  if (BaseEngineController_LS_DWork.s5_motohawk_trigger4_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s5_motohawk_trigger4_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger5' */
  /* Enable for Trigger_BGND_BASEx2_PERIODIC_9948p0001 */
  if (BaseEngineController_LS_DWork.s5_motohawk_trigger5_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s5_motohawk_trigger5_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger6' */
  /* Enable for Trigger_BGND_BASEx10_PERIODIC_9949p0001 */
  if (BaseEngineController_LS_DWork.s5_motohawk_trigger6_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s5_motohawk_trigger6_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger7' */
  /* Enable for Trigger_ONE_SECOND_EVENT_9950p0001 */
  if (BaseEngineController_LS_DWork.s5_motohawk_trigger7_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s5_motohawk_trigger7_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S4>/motohawk_trigger1' */
  /* Enable for Trigger_IDLE_EVENT_9869p0001 */
  if (BaseEngineController_LS_DWork.s4_motohawk_trigger1_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s4_motohawk_trigger1_DWORK1 = 1;
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
      BaseEngineController_LS_B.s118_FPC[i] = 0.0;
    }

    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_B.s70_Sum[i] = 0.0;
    }

    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_B.s21_MinMax[i] = 0.0;
    }

    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_B.s291_Defaultifnoflow[i] = 0.0;
    }

    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_B.s307_Sum1[i] = 0.0;
    }

    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_B.s306_chargemass[i] = 0.0;
    }

    BaseEngineController_LS_B.s403_RPMInst = 0.0;
    BaseEngineController_LS_B.s407_DataTypeConversion = 0.0;
    BaseEngineController_LS_B.s460_Sum1 = 0.0;
    BaseEngineController_LS_B.s473_Merge = 0.0;
    BaseEngineController_LS_B.s459_Sum1 = 0.0;
    BaseEngineController_LS_B.s664_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_B.s674_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_B.s662_Merge = 0.0;
    BaseEngineController_LS_B.s672_Merge = 0.0;
    BaseEngineController_LS_B.s684_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_B.s694_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_B.s682_Merge = 0.0;
    BaseEngineController_LS_B.s692_Merge = 0.0;
    BaseEngineController_LS_B.s374_Switch2 = 0.0;
    BaseEngineController_LS_B.s461_Sum1 = 0.0;
    BaseEngineController_LS_B.s481_Merge = 0.0;
    BaseEngineController_LS_B.s368_Switch1 = 0.0;
    BaseEngineController_LS_B.s540_ReadCANMessage1_o2 = 0.0;
    BaseEngineController_LS_B.s540_ReadCANMessage1_o3 = 0.0;
    BaseEngineController_LS_B.s540_ReadCANMessage1_o4 = 0.0;
    BaseEngineController_LS_B.s540_ReadCANMessage1_o5 = 0.0;
    BaseEngineController_LS_B.s540_ReadCANMessage1_o6 = 0.0;
    BaseEngineController_LS_B.s540_ReadCANMessage1_o7 = 0.0;
    BaseEngineController_LS_B.s540_ReadCANMessage1_o8 = 0.0;
    BaseEngineController_LS_B.s540_ReadCANMessage1_o9 = 0.0;
    BaseEngineController_LS_B.s540_ReadCANMessage1_o10 = 0.0;
    BaseEngineController_LS_B.s540_MathFunction1 = 0.0;
    BaseEngineController_LS_B.s543_Sum1 = 0.0;
    BaseEngineController_LS_B.s574_Merge = 0.0;
    BaseEngineController_LS_B.s540_ReadCANMessage_o2 = 0.0;
    BaseEngineController_LS_B.s540_ReadCANMessage_o3 = 0.0;
    BaseEngineController_LS_B.s540_ReadCANMessage_o4 = 0.0;
    BaseEngineController_LS_B.s540_ReadCANMessage_o5 = 0.0;
    BaseEngineController_LS_B.s540_ReadCANMessage_o6 = 0.0;
    BaseEngineController_LS_B.s540_ReadCANMessage_o7 = 0.0;
    BaseEngineController_LS_B.s540_ReadCANMessage_o8 = 0.0;
    BaseEngineController_LS_B.s540_ReadCANMessage_o9 = 0.0;
    BaseEngineController_LS_B.s540_ReadCANMessage_o10 = 0.0;
    BaseEngineController_LS_B.s540_MathFunction = 0.0;
    BaseEngineController_LS_B.s542_Sum1 = 0.0;
    BaseEngineController_LS_B.s566_Merge = 0.0;
    BaseEngineController_LS_B.s540_Gain = 0.0;
    BaseEngineController_LS_B.s372_Sum1 = 0.0;
    BaseEngineController_LS_B.s394_Switch = 0.0;
    BaseEngineController_LS_B.s468_Sum1 = 0.0;
    BaseEngineController_LS_B.s536_Merge = 0.0;
    BaseEngineController_LS_B.s465_Merge = 0.0;
    BaseEngineController_LS_B.s463_Sum1 = 0.0;
    BaseEngineController_LS_B.s502_Merge = 0.0;
    BaseEngineController_LS_B.s402_Gain1 = 0.0;
    BaseEngineController_LS_B.s437_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_B.s436_Merge = 0.0;
    BaseEngineController_LS_B.s330_motohawk_delta_time = 0.0;
    BaseEngineController_LS_B.s464_Sum1 = 0.0;
    BaseEngineController_LS_B.s338_Sum = 0.0;
    BaseEngineController_LS_B.s337_NominalAirFlowRate = 0.0;
    BaseEngineController_LS_B.s337_ModelAirMassFlowRate = 0.0;
    BaseEngineController_LS_B.s402_Gain = 0.0;
    BaseEngineController_LS_B.s428_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_B.s427_Merge = 0.0;
    BaseEngineController_LS_B.s337_MultiportSwitch = 0.0;
    BaseEngineController_LS_B.s347_Merge = 0.0;
    BaseEngineController_LS_B.s350_Sum1 = 0.0;
    BaseEngineController_LS_B.s348_Merge = 0.0;
    BaseEngineController_LS_B.s353_Sum1 = 0.0;
    BaseEngineController_LS_B.s388_Sum1 = 0.0;
    BaseEngineController_LS_B.s408_DataTypeConversion = 0.0;
    BaseEngineController_LS_B.s412_DataTypeConversion = 0.0;
    BaseEngineController_LS_B.s510_Merge = 0.0;
    BaseEngineController_LS_B.s118_SparkEnergy = 0.0;
    BaseEngineController_LS_B.s118_SparkAdv = 0.0;
    BaseEngineController_LS_B.s396_Switch = 0.0;
    BaseEngineController_LS_B.s118_Throttle = 0.0;
    BaseEngineController_LS_B.s702_ETC = 0.0;
    BaseEngineController_LS_B.s118_IACP = 0.0;
    BaseEngineController_LS_B.s756_MinMax1 = 0.0;
    BaseEngineController_LS_B.s118_IACS = 0.0;
    BaseEngineController_LS_B.s760_MinMax1 = 0.0;
    BaseEngineController_LS_B.s118_SOI = 0.0;
    BaseEngineController_LS_B.s462_Sum1 = 0.0;
    BaseEngineController_LS_B.s494_Merge = 0.0;
    BaseEngineController_LS_B.s62_constreftoatm = 0.0;
    BaseEngineController_LS_B.s118_FuelMult = 0.0;
    BaseEngineController_LS_B.s21_Sum2 = 0.0;
    BaseEngineController_LS_B.s21_Sum1 = 0.0;
    BaseEngineController_LS_B.s118_MakeUpEOI = 0.0;
    BaseEngineController_LS_B.s118_WASTEGATE = 0.0;
    BaseEngineController_LS_B.s787_MinMax1 = 0.0;
    BaseEngineController_LS_B.s392_Sum = 0.0;
    BaseEngineController_LS_B.s372_Sum3 = 0.0;
    BaseEngineController_LS_B.s371_Sum3 = 0.0;
    BaseEngineController_LS_B.s466_Sum1 = 0.0;
    BaseEngineController_LS_B.s467_Sum1 = 0.0;
    BaseEngineController_LS_B.s520_Merge = 0.0;
    BaseEngineController_LS_B.s528_Merge = 0.0;
    BaseEngineController_LS_B.s712_Sum = 0.0;
    BaseEngineController_LS_B.s713_Sum = 0.0;
    BaseEngineController_LS_B.s715_CrankCounter = 0.0;
    BaseEngineController_LS_B.s623_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_B.s614_Merge = 0.0;
    BaseEngineController_LS_B.s622_Merge = 0.0;
    BaseEngineController_LS_B.s650_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_B.s617_Merge = 0.0;
    BaseEngineController_LS_B.s649_Merge = 0.0;
    BaseEngineController_LS_B.s632_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_B.s631_Merge = 0.0;
    BaseEngineController_LS_B.s641_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_B.s640_Merge = 0.0;
    BaseEngineController_LS_B.s365_Merge = 0.0;
    BaseEngineController_LS_B.s381_Sum2 = 0.0;
    BaseEngineController_LS_B.s335_Timer = 0.0;
    BaseEngineController_LS_B.s287_UnitDelay = 0.0;
    BaseEngineController_LS_B.s128_MultiportSwitch = 0.0;
    BaseEngineController_LS_B.s165_Switch1 = 0.0;
    BaseEngineController_LS_B.s130_Switch1 = 0.0;
    BaseEngineController_LS_B.s163_Sum2 = 0.0;
    BaseEngineController_LS_B.s163_Product2 = 0.0;
    BaseEngineController_LS_B.s164_Product = 0.0;
    BaseEngineController_LS_B.s154_Switch = 0.0;
    BaseEngineController_LS_B.s130_Sum3 = 0.0;
    BaseEngineController_LS_B.s132_MinMax1 = 0.0;
    BaseEngineController_LS_B.s132_MinMax = 0.0;
    BaseEngineController_LS_B.s275_Add = 0.0;
    BaseEngineController_LS_B.s272_Product = 0.0;
    BaseEngineController_LS_B.s138_ApplyOffsetstoBaseSparkAdvance1 = 0.0;
    BaseEngineController_LS_B.s278_MinMax1 = 0.0;
    BaseEngineController_LS_B.s273_Switch = 0.0;
    BaseEngineController_LS_B.s138_motohawk_interpolation_2d1 = 0.0;
    BaseEngineController_LS_B.s135_Sum = 0.0;
    BaseEngineController_LS_B.s203_DontallowsetpointtoevergoabovetheTargetRPM =
      0.0;
    BaseEngineController_LS_B.s212_Sum2 = 0.0;
    BaseEngineController_LS_B.s212_Product2 = 0.0;
    BaseEngineController_LS_B.s213_Product = 0.0;
    BaseEngineController_LS_B.s214_Switch1 = 0.0;
    BaseEngineController_LS_B.s205_Switch = 0.0;
    BaseEngineController_LS_B.s201_Sum = 0.0;
    BaseEngineController_LS_B.s234_MinMax1 = 0.0;
    BaseEngineController_LS_B.s224_DontallowsetpointtoeverdropbelowtheTargetRPM =
      0.0;
    BaseEngineController_LS_B.s250_Sum2 = 0.0;
    BaseEngineController_LS_B.s250_Product2 = 0.0;
    BaseEngineController_LS_B.s251_Product = 0.0;
    BaseEngineController_LS_B.s252_Switch1 = 0.0;
    BaseEngineController_LS_B.s136_MinGovAirPID = 0.0;
    BaseEngineController_LS_B.s245_Sum1 = 0.0;
    BaseEngineController_LS_B.s245_Product = 0.0;
    BaseEngineController_LS_B.s246_Product = 0.0;
    BaseEngineController_LS_B.s136_IdleSpk = 0.0;
    BaseEngineController_LS_B.s242_Switch = 0.0;
    BaseEngineController_LS_B.s227_DontallowsetpointtoeverdropbelowtheTargetRPM =
      0.0;
    BaseEngineController_LS_B.s137_O2FuelMult = 0.0;
    BaseEngineController_LS_B.s257_Switch = 0.0;
    BaseEngineController_LS_B.s263_Sum2 = 0.0;
    BaseEngineController_LS_B.s263_Product2 = 0.0;
    BaseEngineController_LS_B.s265_Switch1 = 0.0;
    BaseEngineController_LS_B.s264_Product = 0.0;
    BaseEngineController_LS_B.s261_Switch3 = 0.0;
    BaseEngineController_LS_B.s261_Switch1 = 0.0;
    BaseEngineController_LS_B.s261_Switch4 = 0.0;
    BaseEngineController_LS_B.s184_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_B.s182_FuelFlowMassAirflowEquivalenceRatioAirtofuelRatio
      = 0.0;
    BaseEngineController_LS_B.s179_PerCylinderMassFlowRate = 0.0;
    BaseEngineController_LS_B.s179_ApplyMultipliersforO2KnockControlandEnrichment1
      = 0.0;
    BaseEngineController_LS_B.s200_MinMax1 = 0.0;
    BaseEngineController_LS_B.s193_chargemass = 0.0;
    BaseEngineController_LS_B.s192_Sum1 = 0.0;
    BaseEngineController_LS_B.s185_Sum1 = 0.0;
    BaseEngineController_LS_B.s191_Sum1 = 0.0;
    BaseEngineController_LS_B.s185_Sum = 0.0;
    BaseEngineController_LS_B.s185_Product1 = 0.0;
    BaseEngineController_LS_B.s188_motohawk_interpolation_1d = 0.0;
    BaseEngineController_LS_B.s170_EquivOut = 0.0;
    BaseEngineController_LS_B.s170_SparkOut = 0.0;
    BaseEngineController_LS_B.s129_DesEquivRatio = 0.0;
    BaseEngineController_LS_B.s113_Sum = 0.0;
    BaseEngineController_LS_B.s23_Sum = 0.0;
    BaseEngineController_LS_B.s98_UnitDelay2 = 0.0;
    BaseEngineController_LS_B.s108_Switch1 = 0.0;
    BaseEngineController_LS_B.s61_Switch = 0.0;
    BaseEngineController_LS_B.s30_MultiportSwitch = 0.0;
    BaseEngineController_LS_B.s40_Product = 0.0;
    BaseEngineController_LS_B.s39_Switch2 = 0.0;
    BaseEngineController_LS_B.s44_Product = 0.0;
    BaseEngineController_LS_B.s36_Sum2 = 0.0;
    BaseEngineController_LS_B.s45_Product = 0.0;
    BaseEngineController_LS_B.s36_Product2 = 0.0;
    BaseEngineController_LS_B.s46_Switch1 = 0.0;
    BaseEngineController_LS_B.s49_MinMax1 = 0.0;
    BaseEngineController_LS_B.s20_Switch = 0.0;
    BaseEngineController_LS_B.s50_In1 = 0.0;
    BaseEngineController_LS_B.s26_TestTime = 0.0;
    BaseEngineController_LS_B.s807_Switch = 0.0;
    BaseEngineController_LS_B.s367_CollectAverage.s339_Product = 0.0;
    BaseEngineController_LS_B.s366_CollectAverage.s339_Product = 0.0;
    BaseEngineController_LS_B.s336_CollectAverage.s339_Product = 0.0;
  }

  /* states (dwork) */
  (void) memset((void *)&BaseEngineController_LS_DWork, 0,
                sizeof(D_Work_BaseEngineController_LS));
  BaseEngineController_LS_DWork.s460_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s474_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s459_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s654_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s665_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s655_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s675_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s656_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s685_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s657_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s695_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s486_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s461_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s485_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s483_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s483_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s483_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s372_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s543_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s575_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s542_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s567_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s468_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s537_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s463_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s503_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s411_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s438_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s464_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s338_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s410_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s429_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s347_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s350_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s348_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s353_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s386_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s388_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s511_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s72_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s71_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s69_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s68_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s67_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s66_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s65_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s64_UnitDelay_DSTATE = 0.0;

  {
    int_T i;
    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_DWork.s70_UnitDelay_DSTATE[i] = 0.0;
    }
  }

  BaseEngineController_LS_DWork.s462_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s495_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s372_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s466_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s521_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s467_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s529_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s347_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s347_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s347_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s348_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s348_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s348_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s712_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s713_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s715_CrankCounter_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s614_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s624_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s617_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s651_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s615_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s633_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s616_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s642_UnitDelay_DSTATE = 0.0;

  {
    int_T i;
    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_DWork.s307_UnitDelay_DSTATE[i] = 0.0;
    }
  }

  BaseEngineController_LS_DWork.s365_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s378_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s381_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s365_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s365_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s365_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s287_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s130_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s165_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s155_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s164_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s273_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s203_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s213_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s214_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s239_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s241_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s136_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s136_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s220_state_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s136_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s224_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s251_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s252_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s246_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s227_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s265_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s264_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s261_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s261_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s261_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s192_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s191_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s113_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s98_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s20_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s53_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s44_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s40_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s42_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s45_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s46_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s797_UnitDelay_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s797_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s335_TOld = 0.0;
  BaseEngineController_LS_DWork.s170_count = 0.0;
  BaseEngineController_LS_DWork.s170_EquivStart = 0.0;
  BaseEngineController_LS_DWork.s26_TimerOld = 0.0;
  BaseEngineController_LS_DWork.s367_CollectAverage.s339_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s366_CollectAverage.s339_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_LS_DWork.s336_CollectAverage.s339_UnitDelay1_DSTATE = 0.0;

  /* Start for S-Function (motohawk_sfun_trigger): '<Root>/motohawk_trigger' */
  BaseEngineController_LS_Foreground_Start();

  /* Start for S-Function (motohawk_sfun_trigger): '<S1>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_IDLE_EVENT_9816p0001 */
  BaseEngineController_LS_DWork.s1_motohawk_trigger1_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_RTI_PERIODIC_9944p0001 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger1_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_2XRTI_PERIODIC_9943p0001 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger2' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_10XRTI_PERIODIC_9945p0001 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger2_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger3' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_20XRTI_PERIODIC_9946p0001 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger3_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger4' */

  /* Clear enable/disable state for embedded trigger Trigger_BGND_BASE_PERIODIC_9947p0001 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger4_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger5' */

  /* Clear enable/disable state for embedded trigger Trigger_BGND_BASEx2_PERIODIC_9948p0001 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger5_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger6' */

  /* Clear enable/disable state for embedded trigger Trigger_BGND_BASEx10_PERIODIC_9949p0001 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger6_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger7' */

  /* Clear enable/disable state for embedded trigger Trigger_ONE_SECOND_EVENT_9950p0001 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger7_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S4>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_IDLE_EVENT_9869p0001 */
  BaseEngineController_LS_DWork.s4_motohawk_trigger1_DWORK1 = 0;

  /* Start for function-call system: '<S3>/Main Power Relay' */

  /* Start for Triggered SubSystem: '<S793>/Clear' incorporates:
   *  Start for S-Function (fcncallgen): '<S801>/Function-Call Generator'
   *  Start for SubSystem: '<S791>/motohawk_restore_nvmem'
   */

  /* Start for Triggered SubSystem: '<S794>/Clear' incorporates:
   *  Start for S-Function (fcncallgen): '<S802>/Function-Call Generator'
   *  Start for SubSystem: '<S791>/motohawk_store_nvmem'
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

  /* S-Function Block: <S807>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s807_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for Stateflow: '<S791>/ECUP Latch' */

  /* Entry: Main Power Relay/Main Power Relay/ECUP Latch */
  /* Transition: '<S795>:3' */
  BaseEngineController_LS_DWork.s795_is_c8_BaseEngineController_LS =
    BaseEngineController_LS_IN_PowerDown;

  /* Entry 'PowerDown': '<S795>:1' */
  BaseEngineController_LS_B.s795_MPRDState = FALSE;

  /* set "at time zero" to false */
  if (rtmIsFirstInitCond(BaseEngineController_LS_M)) {
    rtmSetFirstInitCond(BaseEngineController_LS_M, 0);
  }

  /* Level2 S-Function Block: '<S1>/motohawk_trigger1' (motohawk_sfun_trigger) */

  /* Enable for Trigger_IDLE_EVENT_9816p0001 */
  BaseEngineController_LS_DWork.s1_motohawk_trigger1_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger1' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_RTI_PERIODIC_9944p0001 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger1_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_2XRTI_PERIODIC_9943p0001 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger2' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_10XRTI_PERIODIC_9945p0001 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger2_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger3' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_20XRTI_PERIODIC_9946p0001 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger3_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger4' (motohawk_sfun_trigger) */

  /* Enable for Trigger_BGND_BASE_PERIODIC_9947p0001 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger4_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger5' (motohawk_sfun_trigger) */

  /* Enable for Trigger_BGND_BASEx2_PERIODIC_9948p0001 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger5_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger6' (motohawk_sfun_trigger) */

  /* Enable for Trigger_BGND_BASEx10_PERIODIC_9949p0001 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger6_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger7' (motohawk_sfun_trigger) */

  /* Enable for Trigger_ONE_SECOND_EVENT_9950p0001 */
  BaseEngineController_LS_DWork.s5_motohawk_trigger7_DWORK1 = 1;

  /* Level2 S-Function Block: '<S4>/motohawk_trigger1' (motohawk_sfun_trigger) */

  /* Enable for Trigger_IDLE_EVENT_9869p0001 */
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
