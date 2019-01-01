/*
 * File: BaseEngineController_A02_bak2.c
 *
 * Code generated for Simulink model 'BaseEngineController_A02_bak2'.
 *
 * Model version                  : 1.1531
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Tue Jan 01 09:48:38 2019
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_A02_bak2.h"
#include "BaseEngineController_A02_bak2_private.h"

/* Named constants for Stateflow: '<S798>/ECUP Latch' */
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
      BaseEngineController_A02_bak2_B.s307_Defaultifnoflow[i] = 0.0;
    }

    for (i = 0; i < 8; i++) {
      BaseEngineController_A02_bak2_B.s323_Sum1[i] = 0.0;
    }

    for (i = 0; i < 8; i++) {
      BaseEngineController_A02_bak2_B.s322_chargemass[i] = 0.0;
    }

    BaseEngineController_A02_bak2_B.s435_RPMInst = 0.0;
    BaseEngineController_A02_bak2_B.s439_DataTypeConversion = 0.0;
    BaseEngineController_A02_bak2_B.s539_Sum1 = 0.0;
    BaseEngineController_A02_bak2_B.s552_Merge = 0.0;
    BaseEngineController_A02_bak2_B.s538_Sum1 = 0.0;
    BaseEngineController_A02_bak2_B.s670_motohawk_interpolation_1d = 0.0;
    BaseEngineController_A02_bak2_B.s680_motohawk_interpolation_1d = 0.0;
    BaseEngineController_A02_bak2_B.s668_Merge = 0.0;
    BaseEngineController_A02_bak2_B.s678_Merge = 0.0;
    BaseEngineController_A02_bak2_B.s690_motohawk_interpolation_1d = 0.0;
    BaseEngineController_A02_bak2_B.s700_motohawk_interpolation_1d = 0.0;
    BaseEngineController_A02_bak2_B.s688_Merge = 0.0;
    BaseEngineController_A02_bak2_B.s698_Merge = 0.0;
    BaseEngineController_A02_bak2_B.s403_Switch2 = 0.0;
    BaseEngineController_A02_bak2_B.s540_Sum1 = 0.0;
    BaseEngineController_A02_bak2_B.s560_Merge = 0.0;
    BaseEngineController_A02_bak2_B.s397_Switch1 = 0.0;
    BaseEngineController_A02_bak2_B.s626_motohawk_interpolation_1d = 0.0;
    BaseEngineController_A02_bak2_B.s625_Merge = 0.0;
    BaseEngineController_A02_bak2_B.s401_Sum1 = 0.0;
    BaseEngineController_A02_bak2_B.s423_Switch = 0.0;
    BaseEngineController_A02_bak2_B.s347_motohawk_delta_time = 0.0;
    BaseEngineController_A02_bak2_B.s543_Sum1 = 0.0;
    BaseEngineController_A02_bak2_B.s355_Sum = 0.0;
    BaseEngineController_A02_bak2_B.s544_Merge = 0.0;
    BaseEngineController_A02_bak2_B.s542_Sum1 = 0.0;
    BaseEngineController_A02_bak2_B.s581_Merge = 0.0;
    BaseEngineController_A02_bak2_B.s354_PressureRatio = 0.0;
    BaseEngineController_A02_bak2_B.s354_NominalAirFlowRate = 0.0;
    BaseEngineController_A02_bak2_B.s354_ModelAirMassFlowRate = 0.0;
    BaseEngineController_A02_bak2_B.s434_Gain = 0.0;
    BaseEngineController_A02_bak2_B.s516_motohawk_interpolation_1d = 0.0;
    BaseEngineController_A02_bak2_B.s515_Merge = 0.0;
    BaseEngineController_A02_bak2_B.s354_MultiportSwitch = 0.0;
    BaseEngineController_A02_bak2_B.s367_Merge = 0.0;
    BaseEngineController_A02_bak2_B.s370_Sum1 = 0.0;
    BaseEngineController_A02_bak2_B.s368_Merge = 0.0;
    BaseEngineController_A02_bak2_B.s373_Sum1 = 0.0;
    BaseEngineController_A02_bak2_B.s376_TorquetoPower = 0.0;
    BaseEngineController_A02_bak2_B.s384_MinMax1 = 0.0;
    BaseEngineController_A02_bak2_B.s417_Sum1 = 0.0;
    BaseEngineController_A02_bak2_B.s440_DataTypeConversion = 0.0;
    BaseEngineController_A02_bak2_B.s441_DataTypeConversion1 = 0.0;
    BaseEngineController_A02_bak2_B.s441_DataTypeConversion2 = 0.0;
    BaseEngineController_A02_bak2_B.s441_DataTypeConversion3 = 0.0;
    BaseEngineController_A02_bak2_B.s441_DataTypeConversion4 = 0.0;
    BaseEngineController_A02_bak2_B.s441_DataTypeConversion5 = 0.0;
    BaseEngineController_A02_bak2_B.s442_DataTypeConversion = 0.0;
    BaseEngineController_A02_bak2_B.s443_DataTypeConversion = 0.0;
    BaseEngineController_A02_bak2_B.s444_DataTypeConversion = 0.0;
    BaseEngineController_A02_bak2_B.s448_DataTypeConversion = 0.0;
    BaseEngineController_A02_bak2_B.s589_Merge = 0.0;
    BaseEngineController_A02_bak2_B.s547_Sum1 = 0.0;
    BaseEngineController_A02_bak2_B.s615_Merge = 0.0;
    BaseEngineController_A02_bak2_B.s111_SparkEnergy = 0.0;
    BaseEngineController_A02_bak2_B.s111_SparkAdv = 0.0;
    BaseEngineController_A02_bak2_B.s425_Switch = 0.0;
    BaseEngineController_A02_bak2_B.s111_Throttle = 0.0;
    BaseEngineController_A02_bak2_B.s708_ETC = 0.0;
    BaseEngineController_A02_bak2_B.s111_IACP = 0.0;
    BaseEngineController_A02_bak2_B.s762_MinMax1 = 0.0;
    BaseEngineController_A02_bak2_B.s111_IACS = 0.0;
    BaseEngineController_A02_bak2_B.s766_MinMax1 = 0.0;
    BaseEngineController_A02_bak2_B.s111_SOI = 0.0;
    BaseEngineController_A02_bak2_B.s55_constreftoatm = 0.0;
    BaseEngineController_A02_bak2_B.s111_FuelMult = 0.0;
    BaseEngineController_A02_bak2_B.s13_Sum2 = 0.0;
    BaseEngineController_A02_bak2_B.s13_Sum1 = 0.0;
    BaseEngineController_A02_bak2_B.s111_MakeUpEOI = 0.0;
    BaseEngineController_A02_bak2_B.s111_WASTEGATE = 0.0;
    BaseEngineController_A02_bak2_B.s794_MinMax1 = 0.0;
    BaseEngineController_A02_bak2_B.s379_Switch1 = 0.0;
    BaseEngineController_A02_bak2_B.s421_Sum = 0.0;
    BaseEngineController_A02_bak2_B.s401_Sum3 = 0.0;
    BaseEngineController_A02_bak2_B.s541_Sum1 = 0.0;
    BaseEngineController_A02_bak2_B.s573_Merge = 0.0;
    BaseEngineController_A02_bak2_B.s400_Sum3 = 0.0;
    BaseEngineController_A02_bak2_B.s545_Sum1 = 0.0;
    BaseEngineController_A02_bak2_B.s546_Sum1 = 0.0;
    BaseEngineController_A02_bak2_B.s599_Merge = 0.0;
    BaseEngineController_A02_bak2_B.s607_Merge = 0.0;
    BaseEngineController_A02_bak2_B.s357_Sum1 = 0.0;
    BaseEngineController_A02_bak2_B.s718_Sum = 0.0;
    BaseEngineController_A02_bak2_B.s719_Sum = 0.0;
    BaseEngineController_A02_bak2_B.s721_CrankCounter = 0.0;
    BaseEngineController_A02_bak2_B.s638_motohawk_interpolation_1d = 0.0;
    BaseEngineController_A02_bak2_B.s630_Merge = 0.0;
    BaseEngineController_A02_bak2_B.s637_Merge = 0.0;
    BaseEngineController_A02_bak2_B.s656_motohawk_interpolation_1d = 0.0;
    BaseEngineController_A02_bak2_B.s632_Merge = 0.0;
    BaseEngineController_A02_bak2_B.s655_Merge = 0.0;
    BaseEngineController_A02_bak2_B.s647_motohawk_interpolation_1d = 0.0;
    BaseEngineController_A02_bak2_B.s646_Merge = 0.0;
    BaseEngineController_A02_bak2_B.s461_Out = 0.0;
    BaseEngineController_A02_bak2_B.s413_Product = 0.0;
    BaseEngineController_A02_bak2_B.s412_Product = 0.0;
    BaseEngineController_A02_bak2_B.s394_Merge = 0.0;
    BaseEngineController_A02_bak2_B.s410_Sum2 = 0.0;
    BaseEngineController_A02_bak2_B.s385_Switch1 = 0.0;
    BaseEngineController_A02_bak2_B.s361_Product1 = 0.0;
    BaseEngineController_A02_bak2_B.s356_Product = 0.0;
    BaseEngineController_A02_bak2_B.s352_Timer = 0.0;
    BaseEngineController_A02_bak2_B.s302_UnitDelay = 0.0;
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
    BaseEngineController_A02_bak2_B.s290_Add = 0.0;
    BaseEngineController_A02_bak2_B.s287_Product = 0.0;
    BaseEngineController_A02_bak2_B.s132_ApplyOffsetstoBaseSparkAdvance1 = 0.0;
    BaseEngineController_A02_bak2_B.s293_MinMax1 = 0.0;
    BaseEngineController_A02_bak2_B.s288_Switch = 0.0;
    BaseEngineController_A02_bak2_B.s132_motohawk_interpolation_2d1 = 0.0;
    BaseEngineController_A02_bak2_B.s129_Sum = 0.0;
    BaseEngineController_A02_bak2_B.s216_DontallowsetpointtoevergoabovetheTargetRPM
      = 0.0;
    BaseEngineController_A02_bak2_B.s226_Sum2 = 0.0;
    BaseEngineController_A02_bak2_B.s226_Product2 = 0.0;
    BaseEngineController_A02_bak2_B.s227_Product = 0.0;
    BaseEngineController_A02_bak2_B.s228_Switch1 = 0.0;
    BaseEngineController_A02_bak2_B.s218_Switch = 0.0;
    BaseEngineController_A02_bak2_B.s214_Sum = 0.0;
    BaseEngineController_A02_bak2_B.s248_MinMax1 = 0.0;
    BaseEngineController_A02_bak2_B.s238_DontallowsetpointtoeverdropbelowtheTargetRPM
      = 0.0;
    BaseEngineController_A02_bak2_B.s264_Sum2 = 0.0;
    BaseEngineController_A02_bak2_B.s264_Product2 = 0.0;
    BaseEngineController_A02_bak2_B.s265_Product = 0.0;
    BaseEngineController_A02_bak2_B.s266_Switch1 = 0.0;
    BaseEngineController_A02_bak2_B.s130_MinGovAirPID = 0.0;
    BaseEngineController_A02_bak2_B.s259_Sum1 = 0.0;
    BaseEngineController_A02_bak2_B.s259_Product = 0.0;
    BaseEngineController_A02_bak2_B.s260_Product = 0.0;
    BaseEngineController_A02_bak2_B.s130_IdleSpk = 0.0;
    BaseEngineController_A02_bak2_B.s256_Switch = 0.0;
    BaseEngineController_A02_bak2_B.s241_DontallowsetpointtoeverdropbelowtheTargetRPM
      = 0.0;
    BaseEngineController_A02_bak2_B.s131_O2FuelMult = 0.0;
    BaseEngineController_A02_bak2_B.s271_Switch = 0.0;
    BaseEngineController_A02_bak2_B.s278_Sum2 = 0.0;
    BaseEngineController_A02_bak2_B.s278_Product2 = 0.0;
    BaseEngineController_A02_bak2_B.s280_Switch1 = 0.0;
    BaseEngineController_A02_bak2_B.s279_Product = 0.0;
    BaseEngineController_A02_bak2_B.s276_Switch3 = 0.0;
    BaseEngineController_A02_bak2_B.s276_Switch1 = 0.0;
    BaseEngineController_A02_bak2_B.s276_Switch4 = 0.0;
    BaseEngineController_A02_bak2_B.s198_Add = 0.0;
    BaseEngineController_A02_bak2_B.s196_FuelFlowMassAirflowEquivalenceRatioAirtofuelRatio
      = 0.0;
    BaseEngineController_A02_bak2_B.s193_PerCylinderMassFlowRate = 0.0;
    BaseEngineController_A02_bak2_B.s193_ApplyMultipliersforO2KnockControlandEnrichment1
      = 0.0;
    BaseEngineController_A02_bak2_B.s213_MinMax1 = 0.0;
    BaseEngineController_A02_bak2_B.s204_Sum1 = 0.0;
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
    BaseEngineController_A02_bak2_B.s814_Switch = 0.0;
    BaseEngineController_A02_bak2_B.s375_MultiplyandDivideavoidingdivdebyzero1.s205_chargemass
      = 0.0;
    BaseEngineController_A02_bak2_B.s200_MultiplyandDivideavoidingdivdebyzero.s205_chargemass
      = 0.0;
  }

  /* states (dwork) */
  (void) memset((void *)&BaseEngineController_A02_bak2_DWork, 0,
                sizeof(D_Work_BaseEngineController_A02_bak2));
  BaseEngineController_A02_bak2_DWork.s539_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s553_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s538_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s660_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s671_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s661_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s681_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s662_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s691_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s663_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s701_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s565_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s540_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s564_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s562_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s562_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s562_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s401_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s619_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s627_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s543_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s355_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s542_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s582_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s447_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s517_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s367_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s370_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s368_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s373_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s366_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s415_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s417_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s590_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s547_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s616_UnitDelay_DSTATE = 0.0;
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

  BaseEngineController_A02_bak2_DWork.s379_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s401_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s541_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s574_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s545_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s600_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s546_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s608_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s367_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s367_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s367_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s368_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s368_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s368_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s718_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s719_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s721_CrankCounter_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s630_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s639_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s632_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s657_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s631_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s648_UnitDelay_DSTATE = 0.0;

  {
    int_T i;
    for (i = 0; i < 8; i++) {
      BaseEngineController_A02_bak2_DWork.s323_UnitDelay_DSTATE[i] = 0.0;
    }
  }

  BaseEngineController_A02_bak2_DWork.s413_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s412_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s394_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s407_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s410_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s394_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s394_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s394_UnitDelay4_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s385_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s356_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s302_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s183_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s184_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s124_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s162_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s152_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s161_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s288_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s216_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s227_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s228_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s253_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s255_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s130_UnitDelay3_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s130_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s234_state_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s130_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s238_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s265_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s266_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s260_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s241_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s280_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s279_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s276_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s276_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s276_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s204_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s106_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s91_UnitDelay2_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s12_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s46_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s37_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s33_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s35_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s38_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s39_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s804_UnitDelay_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s804_UnitDelay1_DSTATE = 0.0;
  BaseEngineController_A02_bak2_DWork.s352_TOld = 0.0;
  BaseEngineController_A02_bak2_DWork.s18_TimerOld = 0.0;

  /* Start for S-Function (motohawk_sfun_trigger): '<Root>/motohawk_trigger' */
  BaseEngineController_A02_bak2_Foreground_Start();

  /* Start for function-call system: '<S2>/Main Power Relay' */

  /* Start for Triggered SubSystem: '<S800>/Clear' incorporates:
   *  Start for S-Function (fcncallgen): '<S808>/Function-Call Generator'
   *  Start for SubSystem: '<S798>/motohawk_restore_nvmem'
   */

  /* Start for Triggered SubSystem: '<S801>/Clear' incorporates:
   *  Start for S-Function (fcncallgen): '<S809>/Function-Call Generator'
   *  Start for SubSystem: '<S798>/motohawk_store_nvmem'
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

  /* S-Function Block: <S814>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_bak2_DWork.s814_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for Stateflow: '<S798>/ECUP Latch' */

  /* Entry: Main Power Relay/Main Power Relay/ECUP Latch */
  /* Transition: '<S802>:3' */
  BaseEngineController_A02_bak2_DWork.s802_is_c8_BaseEngineController_A02_bak2 =
    BaseEngineController_A02_bak2_IN_PowerDown;

  /* Entry 'PowerDown': '<S802>:1' */
  BaseEngineController_A02_bak2_B.s802_MPRDState = FALSE;

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
