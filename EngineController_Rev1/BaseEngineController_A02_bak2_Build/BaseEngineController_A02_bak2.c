/*
 * File: BaseEngineController_A02_bak2.c
 *
 * Code generated for Simulink model 'BaseEngineController_A02_bak2'.
 *
 * Model version                  : 1.1532
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Tue Jan 01 10:29:48 2019
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_A02_bak2.h"
#include "BaseEngineController_A02_bak2_private.h"

/* Named constants for Stateflow: '<S800>/ECUP Latch' */
#define BaseEngineController_A02_bak2_IN_PowerDown (1U)
#define BaseEngineController_A02_bak2_IN_PowerUp (2U)

/* Block signals (auto storage) */
BlockIO_BaseEngineController_A02_bak2 BaseEngineController_A02_bak2_B;

/* Block states (auto storage) */
D_Work_BaseEngineController_A02_bak2 BaseEngineController_A02_bak2_DWork;

/* Previous zero-crossings (trigger) states */
PrevZCSigStates_BaseEngineController_A02_bak2
  BaseEngineController_A02_bak2_PrevZCSigState;

/* Real-time model */
RT_MODEL_BaseEngineController_A02_bak2 BaseEngineController_A02_bak2_M_;
RT_MODEL_BaseEngineController_A02_bak2 *const BaseEngineController_A02_bak2_M =
  &BaseEngineController_A02_bak2_M_;

/* Model step function */
void BaseEngineController_A02_bak2_step(void)
{
  /* (no output/update code required) */
}

/* Model initialize function */
void BaseEngineController_A02_bak2_initialize(boolean_T firstTime)
{
  (void)firstTime;

  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)BaseEngineController_A02_bak2_M, 0,
                sizeof(RT_MODEL_BaseEngineController_A02_bak2));
  rtmSetFirstInitCond(BaseEngineController_A02_bak2_M, 1);

  /* block I/O */
  (void) memset(((void *) &BaseEngineController_A02_bak2_B), 0,
                sizeof(BlockIO_BaseEngineController_A02_bak2));

  {
    int_T i;
    for (i = 0; i < 8; i++) {
      BaseEngineController_A02_bak2_B.s111_FPC[i] = 0.0;
    }

    for (i = 0; i < 8; i++) {
      BaseEngineController_A02_bak2_B.s63_Sum[i] = 0.0;
    }

    for (i = 0; i < 8; i++) {
      BaseEngineController_A02_bak2_B.s13_MinMax[i] = 0.0;
    }

    for (i = 0; i < 8; i++) {
      BaseEngineController_A02_bak2_B.s309_Defaultifnoflow[i] = 0.0;
    }

    for (i = 0; i < 8; i++) {
      BaseEngineController_A02_bak2_B.s325_Sum1[i] = 0.0;
    }

    for (i = 0; i < 8; i++) {
      BaseEngineController_A02_bak2_B.s324_chargemass[i] = 0.0;
    }

    BaseEngineController_A02_bak2_B.s437_RPMInst = 0.0;
    BaseEngineController_A02_bak2_B.s441_DataTypeConversion = 0.0;
    BaseEngineController_A02_bak2_B.s541_Sum1 = 0.0;
    BaseEngineController_A02_bak2_B.s554_Merge = 0.0;
    BaseEngineController_A02_bak2_B.s540_Sum1 = 0.0;
    BaseEngineController_A02_bak2_B.s672_motohawk_interpolation_1d = 0.0;
    BaseEngineController_A02_bak2_B.s682_motohawk_interpolation_1d = 0.0;
    BaseEngineController_A02_bak2_B.s670_Merge = 0.0;
    BaseEngineController_A02_bak2_B.s680_Merge = 0.0;
    BaseEngineController_A02_bak2_B.s692_motohawk_interpolation_1d = 0.0;
    BaseEngineController_A02_bak2_B.s702_motohawk_interpolation_1d = 0.0;
    BaseEngineController_A02_bak2_B.s690_Merge = 0.0;
    BaseEngineController_A02_bak2_B.s700_Merge = 0.0;
    BaseEngineController_A02_bak2_B.s405_Switch2 = 0.0;
    BaseEngineController_A02_bak2_B.s542_Sum1 = 0.0;
    BaseEngineController_A02_bak2_B.s562_Merge = 0.0;
    BaseEngineController_A02_bak2_B.s399_Switch1 = 0.0;
    BaseEngineController_A02_bak2_B.s628_motohawk_interpolation_1d = 0.0;
    BaseEngineController_A02_bak2_B.s627_Merge = 0.0;
    BaseEngineController_A02_bak2_B.s403_Sum1 = 0.0;
    BaseEngineController_A02_bak2_B.s425_Switch = 0.0;
    BaseEngineController_A02_bak2_B.s349_motohawk_delta_time = 0.0;
    BaseEngineController_A02_bak2_B.s545_Sum1 = 0.0;
    BaseEngineController_A02_bak2_B.s357_Sum = 0.0;
    BaseEngineController_A02_bak2_B.s546_Merge = 0.0;
    BaseEngineController_A02_bak2_B.s544_Sum1 = 0.0;
    BaseEngineController_A02_bak2_B.s583_Merge = 0.0;
    BaseEngineController_A02_bak2_B.s356_PressureRatio = 0.0;
    BaseEngineController_A02_bak2_B.s356_NominalAirFlowRate = 0.0;
    BaseEngineController_A02_bak2_B.s356_ModelAirMassFlowRate = 0.0;
    BaseEngineController_A02_bak2_B.s436_Gain = 0.0;
    BaseEngineController_A02_bak2_B.s518_motohawk_interpolation_1d = 0.0;
    BaseEngineController_A02_bak2_B.s517_Merge = 0.0;
    BaseEngineController_A02_bak2_B.s356_MultiportSwitch = 0.0;
    BaseEngineController_A02_bak2_B.s369_Merge = 0.0;
    BaseEngineController_A02_bak2_B.s372_Sum1 = 0.0;
    BaseEngineController_A02_bak2_B.s370_Merge = 0.0;
    BaseEngineController_A02_bak2_B.s375_Sum1 = 0.0;
    BaseEngineController_A02_bak2_B.s378_TorquetoPower = 0.0;
    BaseEngineController_A02_bak2_B.s386_MinMax1 = 0.0;
    BaseEngineController_A02_bak2_B.s419_Sum1 = 0.0;
    BaseEngineController_A02_bak2_B.s442_DataTypeConversion = 0.0;
    BaseEngineController_A02_bak2_B.s443_DataTypeConversion1 = 0.0;
    BaseEngineController_A02_bak2_B.s443_DataTypeConversion2 = 0.0;
    BaseEngineController_A02_bak2_B.s443_DataTypeConversion3 = 0.0;
    BaseEngineController_A02_bak2_B.s443_DataTypeConversion4 = 0.0;
    BaseEngineController_A02_bak2_B.s443_DataTypeConversion5 = 0.0;
    BaseEngineController_A02_bak2_B.s444_DataTypeConversion = 0.0;
    BaseEngineController_A02_bak2_B.s445_DataTypeConversion = 0.0;
    BaseEngineController_A02_bak2_B.s446_DataTypeConversion = 0.0;
    BaseEngineController_A02_bak2_B.s450_DataTypeConversion = 0.0;
    BaseEngineController_A02_bak2_B.s591_Merge = 0.0;
    BaseEngineController_A02_bak2_B.s549_Sum1 = 0.0;
    BaseEngineController_A02_bak2_B.s617_Merge = 0.0;
    BaseEngineController_A02_bak2_B.s111_SparkEnergy = 0.0;
    BaseEngineController_A02_bak2_B.s111_SparkAdv = 0.0;
    BaseEngineController_A02_bak2_B.s427_Switch = 0.0;
    BaseEngineController_A02_bak2_B.s111_Throttle = 0.0;
    BaseEngineController_A02_bak2_B.s710_ETC = 0.0;
    BaseEngineController_A02_bak2_B.s111_IACP = 0.0;
    BaseEngineController_A02_bak2_B.s764_MinMax1 = 0.0;
    BaseEngineController_A02_bak2_B.s111_IACS = 0.0;
    BaseEngineController_A02_bak2_B.s768_MinMax1 = 0.0;
    BaseEngineController_A02_bak2_B.s111_SOI = 0.0;
    BaseEngineController_A02_bak2_B.s55_constreftoatm = 0.0;
    BaseEngineController_A02_bak2_B.s111_FuelMult = 0.0;
    BaseEngineController_A02_bak2_B.s13_Sum2 = 0.0;
    BaseEngineController_A02_bak2_B.s13_Sum1 = 0.0;
    BaseEngineController_A02_bak2_B.s111_MakeUpEOI = 0.0;
    BaseEngineController_A02_bak2_B.s111_WASTEGATE = 0.0;
    BaseEngineController_A02_bak2_B.s796_MinMax1 = 0.0;
    BaseEngineController_A02_bak2_B.s381_Switch1 = 0.0;
    BaseEngineController_A02_bak2_B.s423_Sum = 0.0;
    BaseEngineController_A02_bak2_B.s403_Sum3 = 0.0;
    BaseEngineController_A02_bak2_B.s543_Sum1 = 0.0;
    BaseEngineController_A02_bak2_B.s575_Merge = 0.0;
    BaseEngineController_A02_bak2_B.s402_Sum3 = 0.0;
    BaseEngineController_A02_bak2_B.s547_Sum1 = 0.0;
    BaseEngineController_A02_bak2_B.s548_Sum1 = 0.0;
    BaseEngineController_A02_bak2_B.s601_Merge = 0.0;
    BaseEngineController_A02_bak2_B.s609_Merge = 0.0;
    BaseEngineController_A02_bak2_B.s359_Sum1 = 0.0;
    BaseEngineController_A02_bak2_B.s720_Sum = 0.0;
    BaseEngineController_A02_bak2_B.s721_Sum = 0.0;
    BaseEngineController_A02_bak2_B.s723_CrankCounter = 0.0;
    BaseEngineController_A02_bak2_B.s640_motohawk_interpolation_1d = 0.0;
    BaseEngineController_A02_bak2_B.s632_Merge = 0.0;
    BaseEngineController_A02_bak2_B.s639_Merge = 0.0;
    BaseEngineController_A02_bak2_B.s658_motohawk_interpolation_1d = 0.0;
    BaseEngineController_A02_bak2_B.s634_Merge = 0.0;
    BaseEngineController_A02_bak2_B.s657_Merge = 0.0;
    BaseEngineController_A02_bak2_B.s649_motohawk_interpolation_1d = 0.0;
    BaseEngineController_A02_bak2_B.s648_Merge = 0.0;
    BaseEngineController_A02_bak2_B.s463_Out = 0.0;
    BaseEngineController_A02_bak2_B.s415_Product = 0.0;
    BaseEngineController_A02_bak2_B.s414_Product = 0.0;
    BaseEngineController_A02_bak2_B.s396_Merge = 0.0;
    BaseEngineController_A02_bak2_B.s412_Sum2 = 0.0;
    BaseEngineController_A02_bak2_B.s387_Switch1 = 0.0;
    BaseEngineController_A02_bak2_B.s363_Product1 = 0.0;
    BaseEngineController_A02_bak2_B.s358_Product = 0.0;
    BaseEngineController_A02_bak2_B.s354_Timer = 0.0;
    BaseEngineController_A02_bak2_B.s304_UnitDelay = 0.0;
    BaseEngineController_A02_bak2_B.s169_Switch = 0.0;
    BaseEngineController_A02_bak2_B.s182_Sum2 = 0.0;
    BaseEngineController_A02_bak2_B.s182_Product2 = 0.0;
    BaseEngineController_A02_bak2_B.s183_Product = 0.0;
    BaseEngineController_A02_bak2_B.s184_Switch1 = 0.0;
    BaseEngineController_A02_bak2_B.s173_Switch = 0.0;
    BaseEngineController_A02_bak2_B.s122_MultiportSwitch = 0.0;
    BaseEngineController_A02_bak2_B.s162_Switch1 = 0.0;
    BaseEngineController_A02_bak2_B.s124_Switch1 = 0.0;
    BaseEngineController_A02_bak2_B.s160_Sum2 = 0.0;
    BaseEngineController_A02_bak2_B.s160_Product2 = 0.0;
    BaseEngineController_A02_bak2_B.s161_Product = 0.0;
    BaseEngineController_A02_bak2_B.s151_Switch = 0.0;
    BaseEngineController_A02_bak2_B.s124_Sum = 0.0;
    BaseEngineController_A02_bak2_B.s169_Switch2 = 0.0;
    BaseEngineController_A02_bak2_B.s126_MinMax1 = 0.0;
    BaseEngineController_A02_bak2_B.s126_MinMax = 0.0;
    BaseEngineController_A02_bak2_B.s292_Add = 0.0;
    BaseEngineController_A02_bak2_B.s289_Product = 0.0;
    BaseEngineController_A02_bak2_B.s132_ApplyOffsetstoBaseSparkAdvance1 = 0.0;
    BaseEngineController_A02_bak2_B.s295_MinMax1 = 0.0;
    BaseEngineController_A02_bak2_B.s290_Switch = 0.0;
    BaseEngineController_A02_bak2_B.s132_motohawk_interpolation_2d1 = 0.0;
    BaseEngineController_A02_bak2_B.s129_Sum = 0.0;
    BaseEngineController_A02_bak2_B.s218_DontallowsetpointtoevergoabovetheTargetRPM
      = 0.0;
    BaseEngineController_A02_bak2_B.s228_Sum2 = 0.0;
    BaseEngineController_A02_bak2_B.s228_Product2 = 0.0;
    BaseEngineController_A02_bak2_B.s229_Product = 0.0;
    BaseEngineController_A02_bak2_B.s230_Switch1 = 0.0;
    BaseEngineController_A02_bak2_B.s220_Switch = 0.0;
    BaseEngineController_A02_bak2_B.s216_Sum = 0.0;
    BaseEngineController_A02_bak2_B.s250_MinMax1 = 0.0;
    BaseEngineController_A02_bak2_B.s240_DontallowsetpointtoeverdropbelowtheTargetRPM
      = 0.0;
    BaseEngineController_A02_bak2_B.s266_Sum2 = 0.0;
    BaseEngineController_A02_bak2_B.s266_Product2 = 0.0;
    BaseEngineController_A02_bak2_B.s267_Product = 0.0;
    BaseEngineController_A02_bak2_B.s268_Switch1 = 0.0;
    BaseEngineController_A02_bak2_B.s130_MinGovAirPID = 0.0;
    BaseEngineController_A02_bak2_B.s261_Sum1 = 0.0;
    BaseEngineController_A02_bak2_B.s261_Product = 0.0;
    BaseEngineController_A02_bak2_B.s262_Product = 0.0;
    BaseEngineController_A02_bak2_B.s130_IdleSpk = 0.0;
    BaseEngineController_A02_bak2_B.s258_Switch = 0.0;
    BaseEngineController_A02_bak2_B.s243_DontallowsetpointtoeverdropbelowtheTargetRPM
      = 0.0;
    BaseEngineController_A02_bak2_B.s131_O2FuelMult = 0.0;
    BaseEngineController_A02_bak2_B.s273_Switch = 0.0;
    BaseEngineController_A02_bak2_B.s280_Sum2 = 0.0;
    BaseEngineController_A02_bak2_B.s280_Product2 = 0.0;
    BaseEngineController_A02_bak2_B.s282_Switch1 = 0.0;
    BaseEngineController_A02_bak2_B.s281_Product = 0.0;
    BaseEngineController_A02_bak2_B.s278_Switch3 = 0.0;
    BaseEngineController_A02_bak2_B.s278_Switch1 = 0.0;
    BaseEngineController_A02_bak2_B.s278_Switch4 = 0.0;
    BaseEngineController_A02_bak2_B.s198_Add = 0.0;
    BaseEngineController_A02_bak2_B.s196_FuelFlowMassAirflowEquivalenceRatioAirtofuelRatio
      = 0.0;
    BaseEngineController_A02_bak2_B.s193_PerCylinderMassFlowRate = 0.0;
    BaseEngineController_A02_bak2_B.s193_ApplyMultipliersforO2KnockControlandEnrichment1
      = 0.0;
    BaseEngineController_A02_bak2_B.s215_MinMax1 = 0.0;
    BaseEngineController_A02_bak2_B.s206_Sum1 = 0.0;
    BaseEngineController_A02_bak2_B.s199_Sum1 = 0.0;
    BaseEngineController_A02_bak2_B.s205_Sum1 = 0.0;
    BaseEngineController_A02_bak2_B.s199_Sum = 0.0;
    BaseEngineController_A02_bak2_B.s199_Product1 = 0.0;
    BaseEngineController_A02_bak2_B.s202_motohawk_interpolation_1d = 0.0;
    BaseEngineController_A02_bak2_B.s179_Out = 0.0;
    BaseEngineController_A02_bak2_B.s178_Out = 0.0;
    BaseEngineController_A02_bak2_B.s123_DesEquivRatio = 0.0;
    BaseEngineController_A02_bak2_B.s106_Sum = 0.0;
    BaseEngineController_A02_bak2_B.s15_Sum = 0.0;
    BaseEngineController_A02_bak2_B.s91_UnitDelay2 = 0.0;
    BaseEngineController_A02_bak2_B.s101_Switch1 = 0.0;
    BaseEngineController_A02_bak2_B.s54_Switch = 0.0;
    BaseEngineController_A02_bak2_B.s22_MultiportSwitch = 0.0;
    BaseEngineController_A02_bak2_B.s33_Product = 0.0;
    BaseEngineController_A02_bak2_B.s32_Switch2 = 0.0;
    BaseEngineController_A02_bak2_B.s37_Product = 0.0;
    BaseEngineController_A02_bak2_B.s29_Sum2 = 0.0;
    BaseEngineController_A02_bak2_B.s38_Product = 0.0;
    BaseEngineController_A02_bak2_B.s29_Product2 = 0.0;
    BaseEngineController_A02_bak2_B.s39_Switch1 = 0.0;
    BaseEngineController_A02_bak2_B.s42_MinMax1 = 0.0;
    BaseEngineController_A02_bak2_B.s12_Switch = 0.0;
    BaseEngineController_A02_bak2_B.s43_In1 = 0.0;
    BaseEngineController_A02_bak2_B.s18_TestTime = 0.0;
    BaseEngineController_A02_bak2_B.s816_Switch = 0.0;
    BaseEngineController_A02_bak2_B.s377_MultiplyandDivideavoidingdivdebyzero1.s207_chargemass
      = 0.0;
    BaseEngineController_A02_bak2_B.s200_MultiplyandDivideavoidingdivdebyzero.s207_chargemass
      = 0.0;
  }

  /* states (dwork) */
  (void) memset((void *)&BaseEngineController_A02_bak2_DWork, 0,
                sizeof(D_Work_BaseEngineController_A02_bak2));
  BaseEngineController_A02_bak2_DWork.s541_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s555_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s540_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s662_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s673_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s663_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s683_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s664_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s693_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s665_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s703_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s567_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s542_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s566_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s564_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s564_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s564_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s403_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s621_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s629_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s545_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s357_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s544_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s584_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s449_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s519_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s369_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s372_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s370_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s375_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s368_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s417_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s419_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s592_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s549_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s618_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s65_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s64_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s62_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s61_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s60_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s59_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s58_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s57_UnitDelay_DSTATE = 0.0;

  {
    int_T i;
    for (i = 0; i < 8; i++) {
      BaseEngineController_A02_bak2_DWork.s63_UnitDelay_DSTATE[i] = 0.0;
    }
  }

  BaseEngineController_A02_bak2_DWork.s381_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s403_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s543_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s576_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s547_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s602_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s548_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s610_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s369_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s369_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s369_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s370_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s370_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s370_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s720_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s721_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s723_CrankCounter_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s632_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s641_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s634_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s659_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s633_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s650_UnitDelay_DSTATE = 0.0;

  {
    int_T i;
    for (i = 0; i < 8; i++) {
      BaseEngineController_A02_bak2_DWork.s325_UnitDelay_DSTATE[i] = 0.0;
    }
  }

  BaseEngineController_A02_bak2_DWork.s415_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s414_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s396_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s409_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s412_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s396_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s396_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s396_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s387_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s358_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s304_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s183_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s184_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s124_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s162_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s152_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s161_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s290_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s218_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s229_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s230_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s255_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s257_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s130_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s130_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s236_state_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s130_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s240_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s267_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s268_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s262_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s243_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s282_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s281_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s278_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s278_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s278_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s206_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s205_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s106_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s91_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s12_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s46_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s37_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s33_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s35_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s38_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s39_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s806_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s806_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s354_TOld = 0.0;
  BaseEngineController_A02_bak2_DWork.s18_TimerOld = 0.0;

  /* Start for S-Function (motohawk_sfun_trigger): '<Root>/motohawk_trigger' */
  BaseEngineController_A02_bak2_Foreground_Start();

  /* Start for function-call system: '<S2>/Main Power Relay' */

  /* Start for Triggered SubSystem: '<S802>/Clear' incorporates:
   *  Start for S-Function (fcncallgen): '<S810>/Function-Call Generator'
   *  Start for SubSystem: '<S800>/motohawk_restore_nvmem'
   */

  /* Start for Triggered SubSystem: '<S803>/Clear' incorporates:
   *  Start for S-Function (fcncallgen): '<S811>/Function-Call Generator'
   *  Start for SubSystem: '<S800>/motohawk_store_nvmem'
   */
  BaseEngineController_A02_bak2_PrevZCSigState.HitCrossing1_Input_ZCE =
    UNINITIALIZED_ZCSIG;
  BaseEngineController_A02_bak2_PrevZCSigState.ResetTasksCompleteToFalse_Trig_ZCE
    = POS_ZCSIG;
  BaseEngineController_A02_bak2_PrevZCSigState.ResetTasksCompleteToTrue_Trig_ZCE
    = POS_ZCSIG;
  BaseEngineController_A02_bak2_PrevZCSigState.ShutdownpoweronECU565563_Trig_ZCE
    = ZERO_ZCSIG;
  BaseEngineController_A02_bak2_PrevZCSigState.SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE
    = ZERO_ZCSIG;
  BaseEngineController_A02_bak2_PrevZCSigState.ProcessorReboot_Trig_ZCE =
    ZERO_ZCSIG;
  BaseEngineController_A02_bak2_PrevZCSigState.PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE
    = ZERO_ZCSIG;
  BaseEngineController_A02_bak2_PrevZCSigState.ShutdownpoweronECU565563_Trig_ZCE_o
    = ZERO_ZCSIG;
  BaseEngineController_A02_bak2_PrevZCSigState.SaveNVVarsonetickbeforeMPRDoff_Trig_ZCE_i
    = ZERO_ZCSIG;
  BaseEngineController_A02_bak2_PrevZCSigState.ProcessorReboot_Trig_ZCE_b =
    ZERO_ZCSIG;
  BaseEngineController_A02_bak2_PrevZCSigState.PostShutdowntwoticksbeforeMPRDoff_Trig_ZCE_j
    = ZERO_ZCSIG;
  BaseEngineController_A02_bak2_PrevZCSigState.Clear_Trig_ZCE = ZERO_ZCSIG;
  BaseEngineController_A02_bak2_PrevZCSigState.Clear_Trig_ZCE_g = ZERO_ZCSIG;

  /* InitializeConditions for S-Function (motohawk_sfun_trigger): '<Root>/motohawk_trigger' */
  BaseEngineController_A02_bak2_Foreground_Init();

  /* Initial conditions for function-call system: '<S2>/Main Power Relay' */

  /* S-Function Block: <S816>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_bak2_DWork.s816_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for Stateflow: '<S800>/ECUP Latch' */

  /* Entry: Main Power Relay/Main Power Relay/ECUP Latch */
  /* Transition: '<S804>:3' */
  BaseEngineController_A02_bak2_DWork.s804_is_c8_BaseEngineController_A02_bak2 =
    BaseEngineController_A02_bak2_IN_PowerDown;

  /* Entry 'PowerDown': '<S804>:1' */
  BaseEngineController_A02_bak2_B.s804_MPRDState = FALSE;

  /* set "at time zero" to false */
  if (rtmIsFirstInitCond(BaseEngineController_A02_bak2_M)) {
    rtmSetFirstInitCond(BaseEngineController_A02_bak2_M, 0);
  }
}

/* Model terminate function */
void BaseEngineController_A02_bak2_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
