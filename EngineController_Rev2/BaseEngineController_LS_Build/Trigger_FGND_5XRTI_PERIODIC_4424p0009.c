/*
 * Trigger_FGND_5XRTI_PERIODIC_4424p0009.c
 *
 * Code generation for model "BaseEngineController_LS.mdl".
 *
 * Model version              : 1.2222
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Sun Mar 19 22:34:25 2023
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_LS.h"
#include "BaseEngineController_LS_private.h"

void Trigger_FGND_5XRTI_PERIODIC_4424p0009(void)
{
  /* Named constants for Stateflow: '<S862>/ECUP Latch' */
#define BaseEngineController_LS_IN_PowerDown (1U)
#define BaseEngineController_LS_IN_PowerUp (2U)

  {
    extern void Timer_FreeRunningCounter_GetTime(uint32_T *lower32Bits, uint32_T
      *upper32Bits);
    uint32_T lower32Bits;
    uint32_T upper32Bits;
    Timer_FreeRunningCounter_GetTime(&lower32Bits, &upper32Bits);
    BaseEngineController_LS_M->Timing.clockTick0 = lower32Bits;
    BaseEngineController_LS_M->Timing.clockTickH0 = upper32Bits;
    BaseEngineController_LS_M->Timing.clockTick0 = lower32Bits;
    BaseEngineController_LS_M->Timing.clockTickH0 = upper32Bits;
    BaseEngineController_LS_M->Timing.clockTick0 = lower32Bits;
    BaseEngineController_LS_M->Timing.clockTickH0 = upper32Bits;
    BaseEngineController_LS_M->Timing.clockTick0 = lower32Bits;
    BaseEngineController_LS_M->Timing.clockTickH0 = upper32Bits;
    BaseEngineController_LS_M->Timing.clockTick0 = lower32Bits;
    BaseEngineController_LS_M->Timing.clockTickH0 = upper32Bits;
    BaseEngineController_LS_M->Timing.clockTick0 = lower32Bits;
    BaseEngineController_LS_M->Timing.clockTickH0 = upper32Bits;
  }

  if (BaseEngineController_LS_DWork.s93_motohawk_trigger1_DWORK1) {
    /* Output and update for function-call system: '<S93>/DFCO' */
    {
      /* local block i/o variables */
      real_T rtb_motohawk_interpolation_1d;
      real_T rtb_motohawk_delta_time_p;
      real_T rtb_motohawk_interpolation_1d1;
      real_T rtb_motohawk_delta_time_e;
      real_T rtb_Saturation_a;
      boolean_T rtb_CombinatorialLogic[2];
      boolean_T rtb_LogicalOperator2_l;
      boolean_T rtb_LogicalOperator4;
      boolean_T rtb_RelationalOperator_a;
      boolean_T rtb_RelationalOperator1_l;
      boolean_T rtb_LogicalOperator1_d;
      real_T rtb_Switch_f;
      real_T rtb_Switch1_p;

      /* S-Function Block: <S132>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d = TableInterpolation1D_real_T
          (BaseEngineController_LS_B.s418_motohawk_prelookup, (real_T *)
           ((DFCOEntryRPMTbl_DataStore())), 5);
        (DFCOEntryRPM_DataStore()) = rtb_motohawk_interpolation_1d;
      }

      /* RelationalOperator: '<S132>/Relational Operator' incorporates:
       *  S-Function (motohawk_sfun_interpolation_1d): '<S132>/motohawk_interpolation_1d'
       */
      rtb_RelationalOperator_a = (BaseEngineController_LS_B.s536_Sum1 >=
        rtb_motohawk_interpolation_1d);

      /* RelationalOperator: '<S132>/Relational Operator1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S132>/motohawk_calibration1'
       */
      rtb_RelationalOperator1_l = (BaseEngineController_LS_B.s430_Switch1 <=
        (DFCOEntryAPP_DataStore()));

      /* RelationalOperator: '<S132>/Relational Operator2' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S132>/motohawk_calibration2'
       */
      rtb_LogicalOperator2_l = (BaseEngineController_LS_B.s587_Merge <= (real_T)
                                ((uint8_T)(DFCOEntryMAP_DataStore())));

      /* S-Function (motohawk_sfun_fault_action): '<S132>/motohawk_fault_action'
       *
       * Regarding '<S132>/motohawk_fault_action':
         Get Fault Action Status: DFCODisable
       */
      {
        extern boolean_T GetFaultActionStatus(uint32_T action);
        rtb_LogicalOperator4 = GetFaultActionStatus(1);
      }

      /* Logic: '<S132>/Logical Operator1' */
      rtb_LogicalOperator1_d = !rtb_LogicalOperator4;

      /* Logic: '<S132>/Logical Operator' incorporates:
       *  RelationalOperator: '<S132>/Relational Operator3'
       *  S-Function (motohawk_sfun_calibration): '<S132>/motohawk_calibration3'
       *  S-Function (motohawk_sfun_calibration): '<S132>/motohawk_calibration4'
       *  S-Function (motohawk_sfun_data_read): '<S132>/motohawk_data_read'
       *  Sum: '<S132>/Sum1'
       */
      BaseEngineController_LS_B.s132_LogicalOperator =
        ((rtb_RelationalOperator_a && rtb_RelationalOperator1_l &&
          rtb_LogicalOperator2_l && rtb_LogicalOperator1_d &&
          (DFCOEnable_DataStore()) && (BaseEngineController_LS_B.s536_Sum1 >=
           MinGovRPMSetPt_DataStore() + (real_T)((int16_T)
            (DFCOEnterIdleSpeed_DataStore())))));

      /* S-Function Block: <S135>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s135_motohawk_delta_time_DWORK1, NULL);
        rtb_motohawk_delta_time_p = ((real_T) delta) * 0.000001;
      }

      /* Switch: '<S135>/Switch' incorporates:
       *  Constant: '<S135>/Constant'
       *  S-Function (motohawk_sfun_data_read): '<S135>/motohawk_data_read'
       *  S-Function (motohawk_sfun_delta_time): '<S135>/motohawk_delta_time'
       *  Sum: '<S135>/Sum'
       */
      if (BaseEngineController_LS_B.s132_LogicalOperator) {
        rtb_Switch_f = rtb_motohawk_delta_time_p + DFCOEnterTimer_DataStore();
      } else {
        rtb_Switch_f = 0.0;
      }

      /* End of Switch: '<S135>/Switch' */
      /* Logic: '<S132>/Logical Operator2' incorporates:
       *  RelationalOperator: '<S132>/Relational Operator4'
       *  S-Function (motohawk_sfun_calibration): '<S132>/motohawk_calibration5'
       */
      rtb_LogicalOperator2_l = (BaseEngineController_LS_B.s132_LogicalOperator &&
                                (rtb_Switch_f >= (DFCODelayTime_DataStore())));

      /* RelationalOperator: '<S132>/Relational Operator5' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S132>/motohawk_calibration9'
       *  S-Function (motohawk_sfun_data_read): '<S132>/motohawk_data_read'
       *  Sum: '<S132>/Sum'
       */
      rtb_RelationalOperator_a = (BaseEngineController_LS_B.s536_Sum1 <=
        MinGovRPMSetPt_DataStore() + (real_T)((int16_T)
        (DFCOExitIdleSpeed_DataStore())));

      /* S-Function Block: <S132>/motohawk_interpolation_1d1 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d1 = TableInterpolation1D_real_T
          (BaseEngineController_LS_B.s418_motohawk_prelookup, (real_T *)
           ((DFCOExitRPMTbl_DataStore())), 5);
        (DFCOExitRPM_DataStore()) = rtb_motohawk_interpolation_1d1;
      }

      /* RelationalOperator: '<S132>/Relational Operator8' incorporates:
       *  S-Function (motohawk_sfun_interpolation_1d): '<S132>/motohawk_interpolation_1d1'
       */
      rtb_RelationalOperator1_l = (BaseEngineController_LS_B.s536_Sum1 <=
        rtb_motohawk_interpolation_1d1);

      /* RelationalOperator: '<S132>/Relational Operator6' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S132>/motohawk_calibration6'
       */
      rtb_LogicalOperator1_d = (BaseEngineController_LS_B.s430_Switch1 >=
        (DFCOExitAPP_DataStore()));

      /* Logic: '<S132>/Logical Operator4' incorporates:
       *  Logic: '<S132>/Logical Operator3'
       *  RelationalOperator: '<S132>/Relational Operator7'
       *  S-Function (motohawk_sfun_calibration): '<S132>/motohawk_calibration7'
       */
      rtb_LogicalOperator4 = ((rtb_RelationalOperator_a &&
        rtb_RelationalOperator1_l && rtb_LogicalOperator1_d &&
        (BaseEngineController_LS_B.s587_Merge >= (real_T)((uint8_T)
        (DFCOExitMAP_DataStore())))) || rtb_LogicalOperator4);

      /* CombinatorialLogic: '<S134>/Combinatorial  Logic' */
      {
        uint_T rowidx= 0;

        /* Compute the truth table row index corresponding to the input */
        rowidx = (rowidx << 1) + (uint_T)(rtb_LogicalOperator2_l != 0);
        rowidx = (rowidx << 1) + (uint_T)(rtb_LogicalOperator4 != 0);

        /* Copy the appropriate row of the table into the block output vector */
        rtb_CombinatorialLogic[0] =
          BaseEngineController_LS_ConstP.pooled809[rowidx];
        rtb_CombinatorialLogic[1] =
          BaseEngineController_LS_ConstP.pooled809[rowidx + 4];
      }

      /* Switch: '<S134>/Switch1' incorporates:
       *  UnitDelay: '<S134>/Unit Delay'
       */
      if (rtb_CombinatorialLogic[1]) {
        BaseEngineController_LS_B.s134_Switch1 = rtb_CombinatorialLogic[0];
      } else {
        BaseEngineController_LS_B.s134_Switch1 =
          BaseEngineController_LS_DWork.s134_UnitDelay_DSTATE;
      }

      /* End of Switch: '<S134>/Switch1' */

      /* S-Function Block: <S133>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s133_motohawk_delta_time_DWORK1, NULL);
        rtb_motohawk_delta_time_e = ((real_T) delta) * 0.000001;
      }

      /* MultiPortSwitch: '<S133>/Multiport Switch' incorporates:
       *  Gain: '<S133>/Ramp Down'
       *  Product: '<S133>/Product'
       *  Product: '<S133>/Product1'
       *  S-Function (motohawk_sfun_delta_time): '<S133>/motohawk_delta_time'
       */
      if (BaseEngineController_LS_B.s134_Switch1 == FALSE) {
        /* Switch: '<S133>/Switch' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S132>/motohawk_calibration11'
         *  S-Function (motohawk_sfun_delta_time): '<S133>/motohawk_delta_time'
         */
        if ((DFCOExitRampTime_DataStore()) > 0.0) {
          rtb_Switch1_p = (DFCOExitRampTime_DataStore());
        } else {
          rtb_Switch1_p = rtb_motohawk_delta_time_e;
        }

        /* End of Switch: '<S133>/Switch' */
        rtb_Switch1_p = rtb_motohawk_delta_time_e / rtb_Switch1_p * -1.0;
      } else {
        /* Switch: '<S133>/Switch1' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S132>/motohawk_calibration8'
         *  S-Function (motohawk_sfun_delta_time): '<S133>/motohawk_delta_time'
         */
        if ((DFCOEnterRampTime_DataStore()) > 0.0) {
          rtb_Switch1_p = (DFCOEnterRampTime_DataStore());
        } else {
          rtb_Switch1_p = rtb_motohawk_delta_time_e;
        }

        /* End of Switch: '<S133>/Switch1' */
        rtb_Switch1_p = rtb_motohawk_delta_time_e / rtb_Switch1_p;
      }

      /* End of MultiPortSwitch: '<S133>/Multiport Switch' */

      /* Sum: '<S133>/Sum' incorporates:
       *  UnitDelay: '<S133>/state'
       */
      rtb_Switch1_p += BaseEngineController_LS_DWork.s133_state_DSTATE;

      /* MinMax: '<S136>/MinMax1' incorporates:
       *  Constant: '<S133>/Constant'
       *  Constant: '<S133>/Constant1'
       *  MinMax: '<S136>/MinMax'
       */
      rtb_Switch1_p = rtb_Switch1_p >= 0.0 ? rtb_Switch1_p : 0.0;
      rtb_Switch1_p = rtb_Switch1_p <= 1.0 ? rtb_Switch1_p : 1.0;

      /* Inport: '<S107>/EquivRatioInfo' */
      BaseEngineController_LS_B.s107_EquivRatioInfo[0] =
        BaseEngineController_LS_B.s106_DesEquivRatio;
      BaseEngineController_LS_B.s107_EquivRatioInfo[1] =
        BaseEngineController_LS_B.s106_WarmUpRatio;
      BaseEngineController_LS_B.s107_EquivRatioInfo[2] =
        BaseEngineController_LS_B.s128_Switch;
      BaseEngineController_LS_B.s107_EquivRatioInfo[3] =
        BaseEngineController_LS_B.s106_IATEnrichment;
      BaseEngineController_LS_B.s107_EquivRatioInfo[4] =
        BaseEngineController_LS_B.s106_CATEnrichment;

      /* Product: '<S132>/Product1' incorporates:
       *  Constant: '<S132>/Constant'
       *  MinMax: '<S136>/MinMax1'
       *  Sum: '<S132>/Sum2'
       */
      BaseEngineController_LS_B.s132_Product1 = (1.0 - rtb_Switch1_p) *
        BaseEngineController_LS_B.s107_EquivRatioInfo[0];

      /* Product: '<S132>/Product2' incorporates:
       *  MinMax: '<S136>/MinMax1'
       *  S-Function (motohawk_sfun_calibration): '<S132>/motohawk_calibration10'
       */
      BaseEngineController_LS_B.s132_SpkOut = rtb_Switch1_p * (real_T)((int16_T)
        (DFCOExitSparkRet_DataStore()));

      /* Saturate: '<S135>/Saturation' */
      rtb_Saturation_a = rtb_Switch_f >= 16000.0 ? 16000.0 : rtb_Switch_f <= 0.0
        ? 0.0 : rtb_Switch_f;

      /* S-Function (motohawk_sfun_data_write): '<S135>/motohawk_data_write' */
      /* Write to Data Storage as scalar: DFCOEnterTimer */
      {
        DFCOEnterTimer_DataStore() = rtb_Saturation_a;
      }

      /* Update for UnitDelay: '<S134>/Unit Delay' */
      BaseEngineController_LS_DWork.s134_UnitDelay_DSTATE =
        BaseEngineController_LS_B.s134_Switch1;

      /* Update for UnitDelay: '<S133>/state' incorporates:
       *  MinMax: '<S136>/MinMax1'
       */
      BaseEngineController_LS_DWork.s133_state_DSTATE = rtb_Switch1_p;
    }

    /* Output and update for function-call system: '<S93>/MinGovernor' */
    {
      /* local block i/o variables */
      real_T rtb_motohawk_delta_time_h;
      real_T rtb_motohawk_delta_time_d;
      real_T rtb_motohawk_delta_time_c;
      real_T rtb_motohawk_delta_time_b;
      real_T rtb_motohawk_interpolation_1d2;
      real_T rtb_motohawk_interpolation_1d3;
      real_T rtb_motohawk_delta_time_bi;
      real_T rtb_motohawk_interpolation_1d2_f;
      real_T rtb_motohawk_interpolation_1d1_g;
      real_T rtb_motohawk_delta_time_n;
      real_T rtb_Saturation_c;
      real_T rtb_motohawk_delta_time_n2;
      real_T rtb_Saturation_k;
      real_T rtb_motohawk_interpolation_1d1_b;
      real_T rtb_motohawk_delta_time_j;
      real_T rtb_MinMax1_a;
      real_T rtb_motohawk_delta_time_ez;
      real_T rtb_Saturation_cl;
      real_T rtb_motohawk_interpolation_1d2_p;
      real_T rtb_motohawk_delta_time_bc;
      real_T rtb_motohawk_interpolation_1d1_i;
      real_T rtb_Switch_e0;
      int16_T rtb_motohawk_interpolation_1d2_i;
      index_T rtb_motohawk_prelookup1;
      index_T rtb_motohawk_prelookup1_j;
      boolean_T rtb_RelOp;
      ZCEventType zcEvent;
      real_T rtb_Sum2_g;
      real_T rtb_Sum1_f;
      int16_T rtb_DataTypeConversion_f;
      boolean_T rtb_RelationalOperator2_e;
      real_T rtb_UnitDelay1_j;
      real_T rtb_Product5;
      real_T rtb_DataTypeConversion_c;
      boolean_T rtb_LogicalOperator_i;
      real_T rtb_Product4;
      real_T rtb_Product2_j;
      int32_T tmp;

      /* Sum: '<S209>/Sum2' incorporates:
       *  UnitDelay: '<S209>/Unit Delay'
       */
      rtb_Sum2_g = BaseEngineController_LS_B.s472_RPMInst -
        BaseEngineController_LS_DWork.s209_UnitDelay_DSTATE;

      /* S-Function Block: <S209>/motohawk_delta_time */
      rtb_motohawk_delta_time_h = 0.005;

      /* Product: '<S209>/Product' incorporates:
       *  S-Function (motohawk_sfun_delta_time): '<S209>/motohawk_delta_time'
       */
      rtb_Sum2_g /= rtb_motohawk_delta_time_h;

      /* S-Function Block: <S210>/motohawk_delta_time */
      rtb_Switch_e0 = 0.005;

      /* Product: '<S210>/Product' incorporates:
       *  MinMax: '<S210>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S210>/motohawk_calibration'
       */
      rtb_Switch_e0 /= (rtb_Switch_e0 >= (RPMFallingFiltConst_DataStore())) ||
        rtIsNaN((RPMFallingFiltConst_DataStore())) ? rtb_Switch_e0 :
        (RPMFallingFiltConst_DataStore());

      /* Sum: '<S211>/Sum1' incorporates:
       *  Constant: '<S211>/Constant'
       *  Product: '<S211>/Product'
       *  Product: '<S211>/Product1'
       *  Sum: '<S211>/Sum'
       *  UnitDelay: '<S211>/Unit Delay'
       */
      rtb_Sum1_f = (1.0 - rtb_Switch_e0) *
        BaseEngineController_LS_DWork.s211_UnitDelay_DSTATE + rtb_Sum2_g *
        rtb_Switch_e0;

      /* RelationalOperator: '<S205>/Relational Operator' incorporates:
       *  Gain: '<S205>/Falling RPM is Negative Derivative'
       *  S-Function (motohawk_sfun_calibration): '<S205>/motohawk_calibration'
       */
      BaseEngineController_LS_B.s205_RelationalOperator = ((rtb_Sum1_f <
        -(RPMFallingRate_DataStore())));

      /* DataTypeConversion: '<S191>/Data Type Conversion' */
      if (rtIsNaN(BaseEngineController_LS_B.s472_RPMInst) || rtIsInf
          (BaseEngineController_LS_B.s472_RPMInst)) {
        rtb_Sum2_g = 0.0;
      } else {
        rtb_Sum2_g = fmod(floor(BaseEngineController_LS_B.s472_RPMInst), 65536.0);
      }

      rtb_DataTypeConversion_f = (int16_T)(rtb_Sum2_g < 0.0 ? (int16_T)-(int16_T)
        (uint16_T)-rtb_Sum2_g : (int16_T)(uint16_T)rtb_Sum2_g);

      /* End of DataTypeConversion: '<S191>/Data Type Conversion' */

      /* Outputs for Atomic SubSystem: '<S111>/Base RPM Set Pt' */

      /* S-Function Block: <S189>/motohawk_interpolation_1d2 */
      {
        extern int16_T TableInterpolation1D_int16_T(uint16_T idx, int16_T
          *tbl_data, uint32_T sz);
        rtb_motohawk_interpolation_1d2_i = TableInterpolation1D_int16_T
          (BaseEngineController_LS_B.s418_motohawk_prelookup, (int16_T *)
           ((MinGovClntRPMSetPtTbl_DataStore())), 5);
        (MinGovClntRPMSetPt_DataStore()) = rtb_motohawk_interpolation_1d2_i;
      }

      /* End of Outputs for SubSystem: '<S111>/Base RPM Set Pt' */

      /* Sum: '<S191>/Sum' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S191>/motohawk_calibration4'
       */
      tmp = ((int16_T)(InGearMinGovEntryRPMDelta_DataStore())) +
        rtb_motohawk_interpolation_1d2_i;
      if (tmp > 32767) {
        tmp = 32767;
      } else {
        if (tmp <= -32768) {
          tmp = -32768;
        }
      }

      /* End of Sum: '<S191>/Sum' */

      /* RelationalOperator: '<S191>/Relational Operator' incorporates:
       *  Sum: '<S191>/Sum'
       */
      BaseEngineController_LS_B.s191_RelationalOperator =
        ((rtb_DataTypeConversion_f < tmp));

      /* Sum: '<S191>/Sum2' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S191>/motohawk_calibration6'
       */
      tmp = rtb_motohawk_interpolation_1d2_i - ((int16_T)
        (StallSaverDeltaRPM_DataStore()));
      if (tmp > 32767) {
        tmp = 32767;
      } else {
        if (tmp <= -32768) {
          tmp = -32768;
        }
      }

      /* End of Sum: '<S191>/Sum2' */

      /* RelationalOperator: '<S191>/Relational Operator3' incorporates:
       *  Sum: '<S191>/Sum2'
       */
      BaseEngineController_LS_B.s191_RelationalOperator3 =
        ((rtb_DataTypeConversion_f < tmp));

      /* MultiPortSwitch: '<S191>/Multiport Switch1' incorporates:
       *  S-Function (motohawk_sfun_data_read): '<S191>/motohawk_data_read1'
       */
      if (AirControlSource_DataStore() == FALSE) {
        rtb_Switch_e0 = BaseEngineController_LS_B.s430_Switch1;
      } else {
        rtb_Switch_e0 = BaseEngineController_LS_B.s437_Switch2;
      }

      /* End of MultiPortSwitch: '<S191>/Multiport Switch1' */
      /* RelationalOperator: '<S191>/Relational Operator1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S191>/motohawk_calibration5'
       */
      BaseEngineController_LS_B.s191_RelationalOperator1 = ((rtb_Switch_e0 <
        (MinGovEntryAirPcnt_DataStore())));

      /* MultiPortSwitch: '<S191>/Multiport Switch' incorporates:
       *  Constant: '<S191>/Constant'
       *  RelationalOperator: '<S191>/Relational Operator4'
       *  S-Function (motohawk_sfun_data_read): '<S191>/motohawk_data_read1'
       *  UnitDelay: '<S111>/Unit Delay3'
       */
      if (AirControlSource_DataStore() == FALSE) {
        rtb_RelationalOperator2_e = (BaseEngineController_LS_B.s445_Sum2 >
          BaseEngineController_LS_DWork.s111_UnitDelay3_DSTATE);
      } else {
        rtb_RelationalOperator2_e = TRUE;
      }

      /* End of MultiPortSwitch: '<S191>/Multiport Switch' */

      /* Logic: '<S191>/Logical Operator' incorporates:
       *  RelationalOperator: '<S191>/Relational Operator2'
       *  S-Function (motohawk_sfun_calibration): '<S191>/motohawk_calibration3'
       *  S-Function (motohawk_sfun_calibration): '<S191>/motohawk_calibration5'
       *  Sum: '<S191>/Sum1'
       */
      BaseEngineController_LS_B.s191_LogicalOperator = (((rtb_Switch_e0 >=
        (MinGovEntryAirPcnt_DataStore()) + (MinGovAirPcntHyst_DataStore())) &&
        rtb_RelationalOperator2_e));

      /* S-Function Block: <S208>/motohawk_delta_time */
      rtb_motohawk_delta_time_d = 0.005;

      /* Switch: '<S208>/Switch' incorporates:
       *  Constant: '<S208>/Constant'
       *  S-Function (motohawk_sfun_data_read): '<S208>/motohawk_data_read'
       *  S-Function (motohawk_sfun_delta_time): '<S208>/motohawk_delta_time'
       *  Sum: '<S208>/Sum'
       */
      if (BaseEngineController_LS_B.s191_RelationalOperator1) {
        rtb_Switch_e0 = rtb_motohawk_delta_time_d + IdleEnterTimer_DataStore();
      } else {
        rtb_Switch_e0 = 0.0;
      }

      /* End of Switch: '<S208>/Switch' */
      /* RelationalOperator: '<S191>/Relational Operator5' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S191>/motohawk_calibration2'
       */
      BaseEngineController_LS_B.s191_RelationalOperator5 = ((rtb_Switch_e0 >
        (MinGovEntryAirTimeThresh_DataStore())));

      /* Stateflow: '<S191>/IdleStateMachine' */
      BaseEngineController_LS_IdleStateMachine();

      /* RelationalOperator: '<S207>/RelOp' incorporates:
       *  Constant: '<S207>/Constant'
       */
      BaseEngineController_LS_B.s207_RelOp =
        ((BaseEngineController_LS_B.s206_IdleState == 2));

      /* UnitDelay: '<S111>/Unit Delay1' */
      rtb_UnitDelay1_j = BaseEngineController_LS_DWork.s111_UnitDelay1_DSTATE;

      /* Outputs for Enabled SubSystem: '<S111>/Base Airflow Table Adapt' incorporates:
       *  EnablePort: '<S188>/Enable'
       */
      if (BaseEngineController_LS_B.s207_RelOp) {
        /* Product: '<S188>/Product0' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S188>/motohawk_calibration2'
         */
        rtb_Sum2_g = rtb_UnitDelay1_j * (BaseAirflowAdaptGain_DataStore());

        /* MinMax: '<S203>/MinMax' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S201>/motohawk_calibration'
         */
        rtb_Sum2_g = (rtb_Sum2_g >= (BaseAirflowAdaptErrorLwrLim_DataStore())) ||
          rtIsNaN((BaseAirflowAdaptErrorLwrLim_DataStore())) ? rtb_Sum2_g :
          (BaseAirflowAdaptErrorLwrLim_DataStore());

        /* MinMax: '<S203>/MinMax1' incorporates:
         *  MinMax: '<S203>/MinMax'
         *  S-Function (motohawk_sfun_calibration): '<S201>/motohawk_calibration1'
         */
        rtb_MinMax1_a = (rtb_Sum2_g <= (BaseAirflowAdaptErrorUprLim_DataStore()))
          || rtIsNaN((BaseAirflowAdaptErrorUprLim_DataStore())) ? rtb_Sum2_g :
          (BaseAirflowAdaptErrorUprLim_DataStore());

        /* Outputs for Atomic SubSystem: '<S188>/Idle Control Enable Delay' */

        /* S-Function Block: <S202>/motohawk_delta_time */
        rtb_motohawk_delta_time_ez = 0.005;

        /* Switch: '<S202>/Switch' incorporates:
         *  Constant: '<S202>/Constant'
         *  S-Function (motohawk_sfun_data_read): '<S202>/motohawk_data_read'
         *  S-Function (motohawk_sfun_delta_time): '<S202>/motohawk_delta_time'
         *  Sum: '<S202>/Sum'
         */
        if (BaseEngineController_LS_B.s207_RelOp) {
          rtb_Sum2_g = rtb_motohawk_delta_time_ez + BaseAirflowTimer_DataStore();
        } else {
          rtb_Sum2_g = 0.0;
        }

        /* End of Switch: '<S202>/Switch' */
        /* RelationalOperator: '<S200>/Relational Operator' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S200>/motohawk_calibration1'
         */
        rtb_RelationalOperator2_e = (rtb_Sum2_g >
          (BaseAirflowAdaptDelayTime_DataStore()));

        /* Saturate: '<S202>/Saturation' */
        rtb_Saturation_cl = rtb_Sum2_g >= 16000.0 ? 16000.0 : rtb_Sum2_g <= 0.0 ?
          0.0 : rtb_Sum2_g;

        /* S-Function (motohawk_sfun_data_write): '<S202>/motohawk_data_write' */
        /* Write to Data Storage as scalar: BaseAirflowTimer */
        {
          BaseAirflowTimer_DataStore() = rtb_Saturation_cl;
        }

        /* End of Outputs for SubSystem: '<S188>/Idle Control Enable Delay' */

        /* Logic: '<S188>/Logical Operator1' incorporates:
         *  Abs: '<S188>/Abs'
         *  RelationalOperator: '<S188>/Relational Operator'
         *  S-Function (motohawk_sfun_calibration): '<S188>/motohawk_calibration3'
         *  S-Function (motohawk_sfun_calibration): '<S188>/motohawk_calibration4'
         */
        BaseEngineController_LS_B.s188_LogicalOperator1 =
          (((BaseAirflowAdaptEnable_DataStore()) && rtb_RelationalOperator2_e &&
            (fabs(rtb_UnitDelay1_j) <= (BaseAirflowAdaptDelta_DataStore()))));

        /* Outputs for Enabled SubSystem: '<S188>/Adapt Base Airflow Table' incorporates:
         *  EnablePort: '<S199>/Enable'
         */
        if (BaseEngineController_LS_B.s188_LogicalOperator1) {
          /* S-Function Block: <S199>/motohawk_adapt_table */
          /* Adapt 1-D Table */
          {
            uint32_T _i = ((ECT05Idx_DataStore())) >> 9;
            uint32_T _frac = (((ECT05Idx_DataStore())) & 0x01FF) >> 7;
            real_T _new;
            if (_i >= 4) {
              _i = 4;
              _frac = 0;
            }

            if (_frac == 0) {
              _new = (BaseAirflowOfstTbl_DataStore())[_i] + rtb_MinMax1_a;
              if (_new > (BaseAirflowOfstMaxValue_DataStore()))
                _new = (BaseAirflowOfstMaxValue_DataStore());
              if (_new < (BaseAirflowOfstMinValue_DataStore()))
                _new = (BaseAirflowOfstMinValue_DataStore());
              (BaseAirflowOfstTbl_DataStore())[_i] = _new;
            } else if (_frac == 3) {
              _new = (BaseAirflowOfstTbl_DataStore())[_i+1] + rtb_MinMax1_a;
              if (_new > (BaseAirflowOfstMaxValue_DataStore()))
                _new = (BaseAirflowOfstMaxValue_DataStore());
              if (_new < (BaseAirflowOfstMinValue_DataStore()))
                _new = (BaseAirflowOfstMinValue_DataStore());
              (BaseAirflowOfstTbl_DataStore())[_i+1] = _new;
            } else {
              real_T _half = rtb_MinMax1_a / 2;
              _new = (BaseAirflowOfstTbl_DataStore())[_i] + _half;
              if (_new > (BaseAirflowOfstMaxValue_DataStore()))
                _new = (BaseAirflowOfstMaxValue_DataStore());
              if (_new < (BaseAirflowOfstMinValue_DataStore()))
                _new = (BaseAirflowOfstMinValue_DataStore());
              (BaseAirflowOfstTbl_DataStore())[_i] = _new;
              _new = (BaseAirflowOfstTbl_DataStore())[_i+1] + _half;
              if (_new > (BaseAirflowOfstMaxValue_DataStore()))
                _new = (BaseAirflowOfstMaxValue_DataStore());
              if (_new < (BaseAirflowOfstMinValue_DataStore()))
                _new = (BaseAirflowOfstMinValue_DataStore());
              (BaseAirflowOfstTbl_DataStore())[_i+1] = _new;
            }
          }
        }

        /* End of Outputs for SubSystem: '<S188>/Adapt Base Airflow Table' */
      }

      /* End of Outputs for SubSystem: '<S111>/Base Airflow Table Adapt' */
      /* S-Function Block: <S190>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s190_motohawk_delta_time_DWORK1, NULL);
        rtb_motohawk_delta_time_c = ((real_T) delta) * 0.000001;
      }

      /* MultiPortSwitch: '<S190>/Multiport Switch' incorporates:
       *  Gain: '<S190>/Ramp Down'
       *  Product: '<S190>/Product'
       *  Product: '<S190>/Product1'
       *  S-Function (motohawk_sfun_delta_time): '<S190>/motohawk_delta_time'
       */
      if (BaseEngineController_LS_B.s207_RelOp == FALSE) {
        /* Switch: '<S190>/Switch' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S111>/motohawk_calibration3'
         *  S-Function (motohawk_sfun_delta_time): '<S190>/motohawk_delta_time'
         */
        if ((IdleExitTimeConst_DataStore()) > 0.0) {
          rtb_Sum2_g = (IdleExitTimeConst_DataStore());
        } else {
          rtb_Sum2_g = rtb_motohawk_delta_time_c;
        }

        /* End of Switch: '<S190>/Switch' */
        rtb_Product5 = rtb_motohawk_delta_time_c / rtb_Sum2_g * -1.0;
      } else {
        rtb_Product5 = rtb_motohawk_delta_time_c / rtb_motohawk_delta_time_c;
      }

      /* End of MultiPortSwitch: '<S190>/Multiport Switch' */

      /* Sum: '<S190>/Sum' incorporates:
       *  UnitDelay: '<S190>/state'
       */
      rtb_Product5 += BaseEngineController_LS_DWork.s190_state_DSTATE;

      /* MinMax: '<S204>/MinMax1' incorporates:
       *  Constant: '<S190>/Constant'
       *  Constant: '<S190>/Constant1'
       *  MinMax: '<S204>/MinMax'
       */
      rtb_Sum2_g = rtb_Product5 >= 0.0 ? rtb_Product5 : 0.0;
      BaseEngineController_LS_B.s204_MinMax1 = rtb_Sum2_g <= 1.0 ? rtb_Sum2_g :
        1.0;

      /* RelationalOperator: '<S193>/RelOp' incorporates:
       *  Constant: '<S193>/Constant'
       */
      rtb_RelationalOperator2_e = (BaseEngineController_LS_B.s204_MinMax1 == 0.0);

      /* UnitDelay: '<S111>/Unit Delay2' */
      rtb_Sum2_g = BaseEngineController_LS_DWork.s111_UnitDelay2_DSTATE;

      /* HitCross: '<S111>/Hit  Crossing1' incorporates:
       *  UnitDelay: '<S111>/Unit Delay2'
       */
      zcEvent = rt_ZCFcn(FALLING_ZERO_CROSSING,
                         &BaseEngineController_LS_PrevZCSigState.HitCrossing1_Input_ZCE,
                         (BaseEngineController_LS_DWork.s111_UnitDelay2_DSTATE -
                          0.5));
      if (BaseEngineController_LS_DWork.s111_HitCrossing1_MODE == 0) {
        if (zcEvent != NO_ZCEVENT) {
          BaseEngineController_LS_B.s111_HitCrossing1 =
            !BaseEngineController_LS_B.s111_HitCrossing1;
          BaseEngineController_LS_DWork.s111_HitCrossing1_MODE = 1;
        } else {
          if (BaseEngineController_LS_B.s111_HitCrossing1 && (rtb_Sum2_g != 0.5))
          {
            BaseEngineController_LS_B.s111_HitCrossing1 = FALSE;
          }
        }
      } else {
        if (rtb_Sum2_g != 0.5) {
          BaseEngineController_LS_B.s111_HitCrossing1 = FALSE;
        }

        BaseEngineController_LS_DWork.s111_HitCrossing1_MODE = 0;
      }

      /* End of HitCross: '<S111>/Hit  Crossing1' */

      /* Logic: '<S111>/Logical Operator' */
      BaseEngineController_LS_B.s111_LogicalOperator =
        ((rtb_RelationalOperator2_e ||
          BaseEngineController_LS_B.s111_HitCrossing1));

      /* DataTypeConversion: '<S111>/Data Type Conversion' */
      rtb_DataTypeConversion_c = (real_T)rtb_motohawk_interpolation_1d2_i;

      /* Logic: '<S194>/Logical Operator' */
      rtb_LogicalOperator_i = !BaseEngineController_LS_B.s207_RelOp;

      /* S-Function Block: <S194>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s194_motohawk_delta_time_DWORK1, NULL);
        rtb_motohawk_delta_time_b = ((real_T) delta) * 0.000001;
      }

      /* UnitDelay: '<S194>/Unit Delay' */
      rtb_Sum2_g = BaseEngineController_LS_DWork.s194_UnitDelay_DSTATE;

      /* Switch: '<S194>/Preload lowpass filter with current RPM while not on Idle' incorporates:
       *  Constant: '<S194>/Constant'
       *  Product: '<S194>/Product2'
       *  Product: '<S194>/Product3'
       *  Sum: '<S194>/Sum'
       *  Sum: '<S194>/Sum1'
       */
      if (rtb_LogicalOperator_i) {
        rtb_Product5 = BaseEngineController_LS_B.s472_RPMInst;
      } else {
        /* Product: '<S194>/Product1' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S194>/motohawk_calibration2'
         *  S-Function (motohawk_sfun_delta_time): '<S194>/motohawk_delta_time'
         */
        rtb_UnitDelay1_j = rtb_motohawk_delta_time_b /
          (InGearRPMCtrlEntryFiltC_DataStore());
        rtb_Product5 = (1.0 - rtb_UnitDelay1_j) * rtb_Sum2_g +
          rtb_DataTypeConversion_c * rtb_UnitDelay1_j;
      }

      /* End of Switch: '<S194>/Preload lowpass filter with current RPM while not on Idle' */

      /* MinMax: '<S194>/Don't allow setpoint to ever drop below the TargetRPM' */
      BaseEngineController_LS_B.s194_DontallowsetpointtoeverdropbelowtheTargetRPM
        = (rtb_DataTypeConversion_c >= rtb_Product5) || rtIsNaN(rtb_Product5) ?
        rtb_DataTypeConversion_c : rtb_Product5;

      /* Sum: '<S220>/Sum2' */
      BaseEngineController_LS_B.s220_Sum2 =
        BaseEngineController_LS_B.s194_DontallowsetpointtoeverdropbelowtheTargetRPM
        - BaseEngineController_LS_B.s536_Sum1;

      /* Product: '<S220>/Product5' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S196>/motohawk_calibration5'
       */
      rtb_Product5 = BaseEngineController_LS_B.s220_Sum2 *
        (AirMinGovErrorGain_DataStore());

      /* S-Function Block: <S196>/motohawk_prelookup1 */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (AirMinGovSpeedErrorIn_DataStore()) =
          BaseEngineController_LS_B.s220_Sum2;
        (AirMinGovSpeedErrorIdx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_LS_B.s220_Sum2,
           (AirMinGovSpeedErrorIdxArr_DataStore()), 9,
           (AirMinGovSpeedErrorIdx_DataStore()));
        rtb_motohawk_prelookup1 = (AirMinGovSpeedErrorIdx_DataStore());
      }

      /* S-Function Block: <S218>/motohawk_interpolation_1d2 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d2 = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1, (real_T *)
           ((AirMinGovPGainErrorMultTbl_DataStore())), 9);
        (AirMinGovPGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d2;
      }

      /* Product: '<S220>/Product2' incorporates:
       *  Product: '<S218>/Product2'
       *  S-Function (motohawk_sfun_calibration): '<S218>/motohawk_calibration3'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S218>/motohawk_interpolation_1d2'
       *  S-Function (motohawk_sfun_prelookup): '<S196>/motohawk_prelookup1'
       */
      BaseEngineController_LS_B.s220_Product2 = (AirMinGovPGain_DataStore()) *
        rtb_motohawk_interpolation_1d2 * rtb_Product5;

      /* UnitDelay: '<S221>/Unit Delay' */
      rtb_Sum2_g = BaseEngineController_LS_DWork.s221_UnitDelay_DSTATE;

      /* S-Function Block: <S218>/motohawk_interpolation_1d3 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d3 = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1, (real_T *)
           ((AirMinGovDGainErrorMultTbl_DataStore())), 9);
        (AirMinGovDGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d3;
      }

      /* Product: '<S220>/Product4' incorporates:
       *  Product: '<S218>/Product3'
       *  S-Function (motohawk_sfun_calibration): '<S218>/motohawk_calibration2'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S218>/motohawk_interpolation_1d3'
       *  S-Function (motohawk_sfun_prelookup): '<S196>/motohawk_prelookup1'
       */
      rtb_Product4 = (AirMinGovDGain_DataStore()) *
        rtb_motohawk_interpolation_1d3 * rtb_Product5;

      /* S-Function Block: <S221>/motohawk_delta_time */
      rtb_motohawk_delta_time_bi = 0.005;

      /* Product: '<S221>/Product' incorporates:
       *  S-Function (motohawk_sfun_delta_time): '<S221>/motohawk_delta_time'
       *  Sum: '<S221>/Sum2'
       */
      BaseEngineController_LS_B.s221_Product = (rtb_Product4 - rtb_Sum2_g) /
        rtb_motohawk_delta_time_bi;

      /* Switch: '<S222>/Switch1' incorporates:
       *  Constant: '<S196>/Constant'
       *  UnitDelay: '<S222>/Unit Delay'
       */
      if (BaseEngineController_LS_B.s111_LogicalOperator) {
        BaseEngineController_LS_B.s222_Switch1 = 0.0;
      } else {
        BaseEngineController_LS_B.s222_Switch1 =
          BaseEngineController_LS_DWork.s222_UnitDelay_DSTATE;
      }

      /* End of Switch: '<S222>/Switch1' */

      /* Switch: '<S196>/Switch' incorporates:
       *  Constant: '<S196>/Constant1'
       */
      if (BaseEngineController_LS_B.s111_LogicalOperator) {
        rtb_UnitDelay1_j = 0.0;
      } else {
        /* MinMax: '<S219>/MinMax' incorporates:
         *  Sum: '<S220>/Sum1'
         */
        rtb_Sum2_g = (BaseEngineController_LS_B.s220_Product2 +
                      BaseEngineController_LS_B.s221_Product) +
          BaseEngineController_LS_B.s222_Switch1;

        /* MinMax: '<S219>/MinMax1' incorporates:
         *  MinMax: '<S219>/MinMax'
         *  S-Function (motohawk_sfun_calibration): '<S196>/motohawk_calibration2'
         *  S-Function (motohawk_sfun_calibration): '<S196>/motohawk_calibration9'
         */
        rtb_Sum2_g = (rtb_Sum2_g >= (AirMinGovPIDOutLowerLimit_DataStore())) ||
          rtIsNaN((AirMinGovPIDOutLowerLimit_DataStore())) ? rtb_Sum2_g :
          (AirMinGovPIDOutLowerLimit_DataStore());
        rtb_UnitDelay1_j = (rtb_Sum2_g <= (AirMinGovPIDOutUpperLimit_DataStore()))
          || rtIsNaN((AirMinGovPIDOutUpperLimit_DataStore())) ? rtb_Sum2_g :
          (AirMinGovPIDOutUpperLimit_DataStore());
      }

      /* End of Switch: '<S196>/Switch' */

      /* Product: '<S111>/Product1' */
      BaseEngineController_LS_B.s111_MinGovAirPID =
        BaseEngineController_LS_B.s204_MinMax1 * rtb_UnitDelay1_j;

      /* Sum: '<S215>/Sum1' */
      BaseEngineController_LS_B.s215_Sum1 =
        BaseEngineController_LS_B.s194_DontallowsetpointtoeverdropbelowtheTargetRPM
        - BaseEngineController_LS_B.s536_Sum1;

      /* Product: '<S215>/Product4' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S195>/motohawk_calibration4'
       */
      rtb_UnitDelay1_j = BaseEngineController_LS_B.s215_Sum1 *
        (SpkMinGovErrorGain_DataStore());

      /* S-Function Block: <S195>/motohawk_prelookup1 */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (SpkMinGovSpeedErrorIn_DataStore()) =
          BaseEngineController_LS_B.s215_Sum1;
        (SpkMinGovSpeedErrorIdx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_LS_B.s215_Sum1,
           (SpkMinGovSpeedErrorIdxArr_DataStore()), 9,
           (SpkMinGovSpeedErrorIdx_DataStore()));
        rtb_motohawk_prelookup1_j = (SpkMinGovSpeedErrorIdx_DataStore());
      }

      /* S-Function Block: <S213>/motohawk_interpolation_1d2 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d2_f = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1_j, (real_T *)
           ((SpkMinGovPGainErrorMultTbl_DataStore())), 9);
        (SpkMinGovPGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d2_f;
      }

      /* Product: '<S215>/Product' incorporates:
       *  Product: '<S213>/Product2'
       *  S-Function (motohawk_sfun_calibration): '<S213>/motohawk_calibration3'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S213>/motohawk_interpolation_1d2'
       *  S-Function (motohawk_sfun_prelookup): '<S195>/motohawk_prelookup1'
       */
      BaseEngineController_LS_B.s215_Product = (SpkMinGovPGain_DataStore()) *
        rtb_motohawk_interpolation_1d2_f * rtb_UnitDelay1_j;

      /* UnitDelay: '<S216>/Unit Delay' */
      rtb_Sum2_g = BaseEngineController_LS_DWork.s216_UnitDelay_DSTATE;

      /* S-Function Block: <S213>/motohawk_interpolation_1d1 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d1_g = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1_j, (real_T *)
           ((SpkMinGovDGainErrorMultTbl_DataStore())), 9);
        (SpkMinGovDGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d1_g;
      }

      /* Product: '<S215>/Product2' incorporates:
       *  Product: '<S213>/Product1'
       *  S-Function (motohawk_sfun_calibration): '<S213>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S213>/motohawk_interpolation_1d1'
       *  S-Function (motohawk_sfun_prelookup): '<S195>/motohawk_prelookup1'
       */
      rtb_Product2_j = (SpkMinGovDGain_DataStore()) *
        rtb_motohawk_interpolation_1d1_g * rtb_UnitDelay1_j;

      /* S-Function Block: <S216>/motohawk_delta_time */
      rtb_motohawk_delta_time_n = 0.005;

      /* Product: '<S216>/Product' incorporates:
       *  S-Function (motohawk_sfun_delta_time): '<S216>/motohawk_delta_time'
       *  Sum: '<S216>/Sum2'
       */
      BaseEngineController_LS_B.s216_Product = (rtb_Product2_j - rtb_Sum2_g) /
        rtb_motohawk_delta_time_n;

      /* Switch: '<S195>/Switch' incorporates:
       *  Constant: '<S195>/Constant1'
       */
      if (rtb_RelationalOperator2_e) {
        rtb_UnitDelay1_j = 0.0;
      } else {
        /* MinMax: '<S214>/MinMax' incorporates:
         *  Sum: '<S215>/Sum'
         */
        rtb_Sum2_g = BaseEngineController_LS_B.s215_Product +
          BaseEngineController_LS_B.s216_Product;

        /* MinMax: '<S214>/MinMax1' incorporates:
         *  MinMax: '<S214>/MinMax'
         *  S-Function (motohawk_sfun_calibration): '<S195>/motohawk_calibration1'
         *  S-Function (motohawk_sfun_calibration): '<S195>/motohawk_calibration9'
         */
        rtb_Sum2_g = (rtb_Sum2_g >= (SpkMinGovPIDOutLowerLimit_DataStore())) ||
          rtIsNaN((SpkMinGovPIDOutLowerLimit_DataStore())) ? rtb_Sum2_g :
          (SpkMinGovPIDOutLowerLimit_DataStore());
        rtb_UnitDelay1_j = (rtb_Sum2_g <= (SpkMinGovPIDOutUpperLimit_DataStore()))
          || rtIsNaN((SpkMinGovPIDOutUpperLimit_DataStore())) ? rtb_Sum2_g :
          (SpkMinGovPIDOutUpperLimit_DataStore());
      }

      /* End of Switch: '<S195>/Switch' */

      /* Product: '<S111>/Product' */
      BaseEngineController_LS_B.s111_IdleSpk =
        BaseEngineController_LS_B.s204_MinMax1 * rtb_UnitDelay1_j;

      /* Outputs for Atomic SubSystem: '<S111>/AiflowOffset' */

      /* S-Function Block: <S187>/motohawk_interpolation_1d1 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d1_i = TableInterpolation1D_real_T
          (BaseEngineController_LS_B.s416_motohawk_prelookup, (real_T *)
           ((ACAirFlowOfstTbl_DataStore())), 5);
        (ACAirFlowOfst_DataStore()) = rtb_motohawk_interpolation_1d1_i;
      }

      /* Product: '<S187>/Product' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S187>/motohawk_calibration'
       */
      rtb_Sum2_g = ((ACAirFlowOfst_Enab_DataStore()) ? (real_T)
                    BaseEngineController_LS_B.s104_LogicalOperator : 0.0) *
        rtb_motohawk_interpolation_1d1_i;

      /* S-Function Block: <S187>/motohawk_interpolation_1d2 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d2_p = TableInterpolation1D_real_T
          (BaseEngineController_LS_B.s418_motohawk_prelookup, (real_T *)
           ((BaseAirflowOfstTbl_DataStore())), 5);
        (BaseAirflowOfst_DataStore()) = rtb_motohawk_interpolation_1d2_p;
      }

      /* Sum: '<S187>/Sum' incorporates:
       *  S-Function (motohawk_sfun_interpolation_1d): '<S187>/motohawk_interpolation_1d2'
       */
      rtb_DataTypeConversion_c = rtb_Sum2_g + rtb_motohawk_interpolation_1d2_p;

      /* RelationalOperator: '<S198>/RelOp' incorporates:
       *  Constant: '<S198>/Constant'
       *  S-Function (motohawk_sfun_data_read): '<S187>/motohawk_data_read'
       */
      rtb_RelOp = (((uint8_T)EngineState_DataStore()) == 3);

      /* Logic: '<S187>/Logical Operator' incorporates:
       *  RelationalOperator: '<S187>/Relational Operator'
       *  RelationalOperator: '<S187>/Relational Operator1'
       *  UnitDelay: '<S187>/Unit Delay'
       */
      rtb_RelationalOperator2_e = ((rtb_RelOp <
        BaseEngineController_LS_DWork.s187_UnitDelay_DSTATE) || (rtb_RelOp ==
        BaseEngineController_LS_DWork.s187_UnitDelay_DSTATE));

      /* S-Function Block: <S197>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s197_motohawk_delta_time_DWORK1, NULL);
        rtb_motohawk_delta_time_bc = ((real_T) delta) * 0.000001;
      }

      /* UnitDelay: '<S197>/Unit Delay' */
      rtb_Sum2_g = BaseEngineController_LS_DWork.s197_UnitDelay_DSTATE;

      /* Switch: '<S197>/Preload lowpass filter with current RPM while not on Idle' incorporates:
       *  Constant: '<S197>/Constant'
       *  Logic: '<S197>/Logical Operator'
       *  Product: '<S197>/Product2'
       *  Product: '<S197>/Product3'
       *  Sum: '<S197>/Sum'
       *  Sum: '<S197>/Sum1'
       */
      if (!rtb_RelationalOperator2_e) {
        rtb_Sum2_g = BaseEngineController_LS_B.s437_Switch2;
      } else {
        /* Product: '<S197>/Product1' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S197>/motohawk_calibration2'
         *  S-Function (motohawk_sfun_delta_time): '<S197>/motohawk_delta_time'
         */
        rtb_UnitDelay1_j = rtb_motohawk_delta_time_bc /
          (IdleEntryAirRampInFiltC_DataStore());
        rtb_Sum2_g = (1.0 - rtb_UnitDelay1_j) * rtb_Sum2_g +
          rtb_DataTypeConversion_c * rtb_UnitDelay1_j;
      }

      /* End of Switch: '<S197>/Preload lowpass filter with current RPM while not on Idle' */

      /* MinMax: '<S197>/Don't allow setpoint to ever drop below the TargetRPM' */
      BaseEngineController_LS_B.s197_DontallowsetpointtoeverdropbelowtheTargetRPM
        = (rtb_DataTypeConversion_c >= rtb_Sum2_g) || rtIsNaN(rtb_Sum2_g) ?
        rtb_DataTypeConversion_c : rtb_Sum2_g;

      /* End of Outputs for SubSystem: '<S111>/AiflowOffset' */

      /* Saturate: '<S208>/Saturation' */
      rtb_Saturation_c = rtb_Switch_e0 >= 16000.0 ? 16000.0 : rtb_Switch_e0 <=
        0.0 ? 0.0 : rtb_Switch_e0;

      /* S-Function (motohawk_sfun_data_write): '<S208>/motohawk_data_write' */
      /* Write to Data Storage as scalar: IdleEnterTimer */
      {
        IdleEnterTimer_DataStore() = rtb_Saturation_c;
      }

      /* S-Function Block: <S212>/motohawk_delta_time */
      rtb_motohawk_delta_time_n2 = 0.005;

      /* Sum: '<S192>/Sum' */
      rtb_UnitDelay1_j = BaseEngineController_LS_B.s536_Sum1 -
        BaseEngineController_LS_B.s194_DontallowsetpointtoeverdropbelowtheTargetRPM;

      /* Switch: '<S212>/Switch' incorporates:
       *  Constant: '<S212>/Constant'
       *  RelationalOperator: '<S192>/Relational Operator2'
       *  S-Function (motohawk_sfun_calibration): '<S192>/motohawk_calibration3'
       *  S-Function (motohawk_sfun_data_read): '<S212>/motohawk_data_read'
       *  S-Function (motohawk_sfun_delta_time): '<S212>/motohawk_delta_time'
       *  Sum: '<S212>/Sum'
       */
      if (rtb_UnitDelay1_j > (real_T)((int16_T)(MotoringDeltaRPMLimit_DataStore())))
      {
        BaseEngineController_LS_B.s212_Switch = rtb_motohawk_delta_time_n2 +
          MotoringTimer_DataStore();
      } else {
        BaseEngineController_LS_B.s212_Switch = 0.0;
      }

      /* End of Switch: '<S212>/Switch' */

      /* RelationalOperator: '<S192>/Relational Operator1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S192>/motohawk_calibration1'
       */
      BaseEngineController_LS_B.s192_RelationalOperator1 =
        ((BaseEngineController_LS_B.s212_Switch >
          (MotoringDtctTimerLimit_DataStore())));

      /* DataTypeConversion: '<S192>/Data Type Conversion' */
      rtb_DataTypeConversion_c = (real_T)
        BaseEngineController_LS_B.s192_RelationalOperator1;

      /* Saturate: '<S212>/Saturation' */
      rtb_Saturation_k = BaseEngineController_LS_B.s212_Switch >= 16000.0 ?
        16000.0 : BaseEngineController_LS_B.s212_Switch <= 0.0 ? 0.0 :
        BaseEngineController_LS_B.s212_Switch;

      /* S-Function (motohawk_sfun_data_write): '<S212>/motohawk_data_write' */
      /* Write to Data Storage as scalar: MotoringTimer */
      {
        MotoringTimer_DataStore() = rtb_Saturation_k;
      }

      /* S-Function Block: <S218>/motohawk_interpolation_1d1 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d1_b = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1, (real_T *)
           ((AirMinGovIGainErrorMultTbl_DataStore())), 9);
        (AirMinGovIGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d1_b;
      }

      /* Product: '<S220>/Product1' incorporates:
       *  Product: '<S218>/Product1'
       *  S-Function (motohawk_sfun_calibration): '<S218>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S218>/motohawk_interpolation_1d1'
       *  S-Function (motohawk_sfun_prelookup): '<S196>/motohawk_prelookup1'
       */
      rtb_Sum2_g = (AirMinGovIGain_DataStore()) *
        rtb_motohawk_interpolation_1d1_b * rtb_Product5;

      /* S-Function Block: <S222>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s222_motohawk_delta_time_DWORK1, NULL);
        rtb_motohawk_delta_time_j = ((real_T) delta) * 0.000001;
      }

      /* Sum: '<S222>/Sum' incorporates:
       *  Product: '<S222>/Product'
       *  S-Function (motohawk_sfun_delta_time): '<S222>/motohawk_delta_time'
       */
      rtb_UnitDelay1_j = rtb_Sum2_g * rtb_motohawk_delta_time_j +
        BaseEngineController_LS_B.s222_Switch1;

      /* MinMax: '<S224>/MinMax' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S196>/motohawk_calibration7'
       */
      rtb_Sum2_g = (rtb_UnitDelay1_j >= (AirMinGovITermLowerLimit_DataStore())) ||
        rtIsNaN((AirMinGovITermLowerLimit_DataStore())) ? rtb_UnitDelay1_j :
        (AirMinGovITermLowerLimit_DataStore());

      /* Update for UnitDelay: '<S209>/Unit Delay' */
      BaseEngineController_LS_DWork.s209_UnitDelay_DSTATE =
        BaseEngineController_LS_B.s472_RPMInst;

      /* Update for UnitDelay: '<S211>/Unit Delay' */
      BaseEngineController_LS_DWork.s211_UnitDelay_DSTATE = rtb_Sum1_f;

      /* Update for UnitDelay: '<S111>/Unit Delay3' */
      BaseEngineController_LS_DWork.s111_UnitDelay3_DSTATE =
        BaseEngineController_LS_B.s111_MinGovAirPID;

      /* Update for UnitDelay: '<S111>/Unit Delay1' */
      BaseEngineController_LS_DWork.s111_UnitDelay1_DSTATE =
        BaseEngineController_LS_B.s222_Switch1;

      /* Update for UnitDelay: '<S190>/state' */
      BaseEngineController_LS_DWork.s190_state_DSTATE =
        BaseEngineController_LS_B.s204_MinMax1;

      /* Update for UnitDelay: '<S111>/Unit Delay2' */
      BaseEngineController_LS_DWork.s111_UnitDelay2_DSTATE =
        rtb_DataTypeConversion_c;

      /* Update for UnitDelay: '<S194>/Unit Delay' */
      BaseEngineController_LS_DWork.s194_UnitDelay_DSTATE =
        BaseEngineController_LS_B.s194_DontallowsetpointtoeverdropbelowtheTargetRPM;

      /* Update for UnitDelay: '<S221>/Unit Delay' */
      BaseEngineController_LS_DWork.s221_UnitDelay_DSTATE = rtb_Product4;

      /* Update for UnitDelay: '<S222>/Unit Delay' incorporates:
       *  MinMax: '<S224>/MinMax'
       *  MinMax: '<S224>/MinMax1'
       *  S-Function (motohawk_sfun_calibration): '<S196>/motohawk_calibration8'
       */
      BaseEngineController_LS_DWork.s222_UnitDelay_DSTATE = (rtb_Sum2_g <=
        (AirMinGovITermUpperLimit_DataStore())) || rtIsNaN
        ((AirMinGovITermUpperLimit_DataStore())) ? rtb_Sum2_g :
        (AirMinGovITermUpperLimit_DataStore());

      /* Update for UnitDelay: '<S216>/Unit Delay' */
      BaseEngineController_LS_DWork.s216_UnitDelay_DSTATE = rtb_Product2_j;

      /* Update for Atomic SubSystem: '<S111>/AiflowOffset' */
      /* Update for UnitDelay: '<S187>/Unit Delay' */
      BaseEngineController_LS_DWork.s187_UnitDelay_DSTATE = rtb_RelOp;

      /* Update for UnitDelay: '<S197>/Unit Delay' */
      BaseEngineController_LS_DWork.s197_UnitDelay_DSTATE =
        BaseEngineController_LS_B.s197_DontallowsetpointtoeverdropbelowtheTargetRPM;

      /* End of Update for SubSystem: '<S111>/AiflowOffset' */
    }

    /* Output and update for function-call system: '<S93>/AC Control' */
    {
      /* local block i/o variables */
      boolean_T rtb_BelowLoTarget;
      boolean_T rtb_AboveHiTarget;
      boolean_T rtb_CombinatorialLogic_m[2];
      uint16_T rtb_DataTypeConversion1_i;
      boolean_T rtb_Switch1_n;
      boolean_T rtb_Switch1_k;
      boolean_T rtb_LogicalOperator3_o;
      boolean_T rtb_Switch1_e;
      boolean_T rtb_RelationalOperator_j;
      real_T tmp;

      /* RelationalOperator: '<S119>/LT' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S104>/motohawk_calibration'
       */
      rtb_BelowLoTarget = (BaseEngineController_LS_B.s645_Merge >=
                           (ACTempOn_DataStore()));

      /* RelationalOperator: '<S119>/LT1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S104>/motohawk_calibration8'
       */
      rtb_AboveHiTarget = (BaseEngineController_LS_B.s645_Merge <=
                           (ACTempOff_DataStore()));

      /* CombinatorialLogic: '<S125>/Combinatorial  Logic' */
      {
        uint_T rowidx= 0;

        /* Compute the truth table row index corresponding to the input */
        rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget != 0);
        rowidx = (rowidx << 1) + (uint_T)(rtb_AboveHiTarget != 0);

        /* Copy the appropriate row of the table into the block output vector */
        rtb_CombinatorialLogic_m[0] =
          BaseEngineController_LS_ConstP.pooled809[rowidx];
        rtb_CombinatorialLogic_m[1] =
          BaseEngineController_LS_ConstP.pooled809[rowidx + 4];
      }

      /* Switch: '<S125>/Switch1' incorporates:
       *  UnitDelay: '<S125>/Unit Delay'
       */
      if (rtb_CombinatorialLogic_m[1]) {
        BaseEngineController_LS_B.s125_Switch1 = rtb_CombinatorialLogic_m[0];
      } else {
        BaseEngineController_LS_B.s125_Switch1 =
          BaseEngineController_LS_DWork.s125_UnitDelay_DSTATE;
      }

      /* End of Switch: '<S125>/Switch1' */

      /* DataTypeConversion: '<S104>/Data Type Conversion' */
      if (rtIsNaN(BaseEngineController_LS_B.s536_Sum1) || rtIsInf
          (BaseEngineController_LS_B.s536_Sum1)) {
        tmp = 0.0;
      } else {
        tmp = fmod(floor(BaseEngineController_LS_B.s536_Sum1), 65536.0);
      }

      rtb_DataTypeConversion1_i = (uint16_T)(tmp < 0.0 ? (uint16_T)(int32_T)
        (int16_T)-(int16_T)(uint16_T)-tmp : (uint16_T)tmp);

      /* End of DataTypeConversion: '<S104>/Data Type Conversion' */
      /* RelationalOperator: '<S118>/LT' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S104>/motohawk_calibration2'
       */
      rtb_AboveHiTarget = (rtb_DataTypeConversion1_i >= ((uint16_T)
        (ACSpdSlowOn_DataStore())));

      /* RelationalOperator: '<S118>/LT1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S104>/motohawk_calibration1'
       */
      rtb_BelowLoTarget = (rtb_DataTypeConversion1_i <= ((uint16_T)
        (ACSpdSlowOff_DataStore())));

      /* CombinatorialLogic: '<S124>/Combinatorial  Logic' */
      {
        uint_T rowidx= 0;

        /* Compute the truth table row index corresponding to the input */
        rowidx = (rowidx << 1) + (uint_T)(rtb_AboveHiTarget != 0);
        rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget != 0);

        /* Copy the appropriate row of the table into the block output vector */
        rtb_CombinatorialLogic_m[0] =
          BaseEngineController_LS_ConstP.pooled809[rowidx];
        rtb_CombinatorialLogic_m[1] =
          BaseEngineController_LS_ConstP.pooled809[rowidx + 4];
      }

      /* Switch: '<S124>/Switch1' incorporates:
       *  UnitDelay: '<S124>/Unit Delay'
       */
      if (rtb_CombinatorialLogic_m[1]) {
        BaseEngineController_LS_B.s124_Switch1 = rtb_CombinatorialLogic_m[0];
      } else {
        BaseEngineController_LS_B.s124_Switch1 =
          BaseEngineController_LS_DWork.s124_UnitDelay_DSTATE;
      }

      /* End of Switch: '<S124>/Switch1' */

      /* RelationalOperator: '<S116>/LT' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S104>/motohawk_calibration3'
       */
      rtb_AboveHiTarget = (rtb_DataTypeConversion1_i >= ((uint16_T)
        (ACSpdFastOff_DataStore())));

      /* RelationalOperator: '<S116>/LT1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S104>/motohawk_calibration4'
       */
      rtb_BelowLoTarget = (rtb_DataTypeConversion1_i <= ((uint16_T)
        (ACSpdFastOn_DataStore())));

      /* CombinatorialLogic: '<S122>/Combinatorial  Logic' */
      {
        uint_T rowidx= 0;

        /* Compute the truth table row index corresponding to the input */
        rowidx = (rowidx << 1) + (uint_T)(rtb_AboveHiTarget != 0);
        rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget != 0);

        /* Copy the appropriate row of the table into the block output vector */
        rtb_CombinatorialLogic_m[0] =
          BaseEngineController_LS_ConstP.pooled809[rowidx];
        rtb_CombinatorialLogic_m[1] =
          BaseEngineController_LS_ConstP.pooled809[rowidx + 4];
      }

      /* Switch: '<S122>/Switch1' incorporates:
       *  UnitDelay: '<S122>/Unit Delay'
       */
      if (rtb_CombinatorialLogic_m[1]) {
        rtb_Switch1_n = rtb_CombinatorialLogic_m[0];
      } else {
        rtb_Switch1_n = BaseEngineController_LS_DWork.s122_UnitDelay_DSTATE;
      }

      /* End of Switch: '<S122>/Switch1' */

      /* Logic: '<S104>/Logical Operator2' */
      BaseEngineController_LS_B.s104_LogicalOperator2 = !rtb_Switch1_n;

      /* DataTypeConversion: '<S104>/Data Type Conversion2' */
      if (rtIsNaN(BaseEngineController_LS_B.s437_Switch2) || rtIsInf
          (BaseEngineController_LS_B.s437_Switch2)) {
        tmp = 0.0;
      } else {
        tmp = fmod(floor(BaseEngineController_LS_B.s437_Switch2), 65536.0);
      }

      rtb_DataTypeConversion1_i = (uint16_T)(tmp < 0.0 ? (uint16_T)(int32_T)
        (int16_T)-(int16_T)(uint16_T)-tmp : (uint16_T)tmp);

      /* End of DataTypeConversion: '<S104>/Data Type Conversion2' */
      /* RelationalOperator: '<S117>/LT' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S104>/motohawk_calibration5'
       */
      rtb_AboveHiTarget = (rtb_DataTypeConversion1_i >= ((uint16_T)
        (AC_TPSOff_DataStore())));

      /* RelationalOperator: '<S117>/LT1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S104>/motohawk_calibration6'
       */
      rtb_BelowLoTarget = (rtb_DataTypeConversion1_i <= ((uint16_T)
        (AC_TPSOn_DataStore())));

      /* CombinatorialLogic: '<S123>/Combinatorial  Logic' */
      {
        uint_T rowidx= 0;

        /* Compute the truth table row index corresponding to the input */
        rowidx = (rowidx << 1) + (uint_T)(rtb_AboveHiTarget != 0);
        rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget != 0);

        /* Copy the appropriate row of the table into the block output vector */
        rtb_CombinatorialLogic_m[0] =
          BaseEngineController_LS_ConstP.pooled809[rowidx];
        rtb_CombinatorialLogic_m[1] =
          BaseEngineController_LS_ConstP.pooled809[rowidx + 4];
      }

      /* Switch: '<S123>/Switch1' incorporates:
       *  UnitDelay: '<S123>/Unit Delay'
       */
      if (rtb_CombinatorialLogic_m[1]) {
        rtb_Switch1_k = rtb_CombinatorialLogic_m[0];
      } else {
        rtb_Switch1_k = BaseEngineController_LS_DWork.s123_UnitDelay_DSTATE;
      }

      /* End of Switch: '<S123>/Switch1' */

      /* Logic: '<S104>/Logical Operator4' */
      BaseEngineController_LS_B.s104_LogicalOperator4 = !rtb_Switch1_k;

      /* Logic: '<S104>/Logical Operator3' */
      rtb_LogicalOperator3_o = (BaseEngineController_LS_B.s124_Switch1 &&
        BaseEngineController_LS_B.s104_LogicalOperator2);

      /* DataTypeConversion: '<S104>/Data Type Conversion1' */
      if (rtIsNaN(BaseEngineController_LS_B.s550_Merge) || rtIsInf
          (BaseEngineController_LS_B.s550_Merge)) {
        tmp = 0.0;
      } else {
        tmp = fmod(floor(BaseEngineController_LS_B.s550_Merge), 65536.0);
      }

      rtb_DataTypeConversion1_i = (uint16_T)(tmp < 0.0 ? (uint16_T)(int32_T)
        (int16_T)-(int16_T)(uint16_T)-tmp : (uint16_T)tmp);

      /* End of DataTypeConversion: '<S104>/Data Type Conversion1' */
      /* RelationalOperator: '<S115>/LT' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S104>/motohawk_calibration9'
       */
      rtb_AboveHiTarget = (rtb_DataTypeConversion1_i >= ((uint16_T)
        (ACLowPresOn_DataStore())));

      /* RelationalOperator: '<S115>/LT1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S104>/motohawk_calibration10'
       */
      rtb_BelowLoTarget = (rtb_DataTypeConversion1_i <= ((uint16_T)
        (ACLowPresOff_DataStore())));

      /* CombinatorialLogic: '<S121>/Combinatorial  Logic' */
      {
        uint_T rowidx= 0;

        /* Compute the truth table row index corresponding to the input */
        rowidx = (rowidx << 1) + (uint_T)(rtb_AboveHiTarget != 0);
        rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget != 0);

        /* Copy the appropriate row of the table into the block output vector */
        rtb_CombinatorialLogic_m[0] =
          BaseEngineController_LS_ConstP.pooled809[rowidx];
        rtb_CombinatorialLogic_m[1] =
          BaseEngineController_LS_ConstP.pooled809[rowidx + 4];
      }

      /* Switch: '<S121>/Switch1' incorporates:
       *  UnitDelay: '<S121>/Unit Delay'
       */
      if (rtb_CombinatorialLogic_m[1]) {
        BaseEngineController_LS_B.s121_Switch1 = rtb_CombinatorialLogic_m[0];
      } else {
        BaseEngineController_LS_B.s121_Switch1 =
          BaseEngineController_LS_DWork.s121_UnitDelay_DSTATE;
      }

      /* End of Switch: '<S121>/Switch1' */
      /* RelationalOperator: '<S114>/LT' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S104>/motohawk_calibration11'
       */
      rtb_AboveHiTarget = (rtb_DataTypeConversion1_i >= ((uint16_T)
        (ACHighPresOff_DataStore())));

      /* RelationalOperator: '<S114>/LT1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S104>/motohawk_calibration12'
       */
      rtb_BelowLoTarget = (rtb_DataTypeConversion1_i <= ((uint16_T)
        (ACHighPresOn_DataStore())));

      /* CombinatorialLogic: '<S120>/Combinatorial  Logic' */
      {
        uint_T rowidx= 0;

        /* Compute the truth table row index corresponding to the input */
        rowidx = (rowidx << 1) + (uint_T)(rtb_AboveHiTarget != 0);
        rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget != 0);

        /* Copy the appropriate row of the table into the block output vector */
        rtb_CombinatorialLogic_m[0] =
          BaseEngineController_LS_ConstP.pooled809[rowidx];
        rtb_CombinatorialLogic_m[1] =
          BaseEngineController_LS_ConstP.pooled809[rowidx + 4];
      }

      /* Switch: '<S120>/Switch1' incorporates:
       *  UnitDelay: '<S120>/Unit Delay'
       */
      if (rtb_CombinatorialLogic_m[1]) {
        rtb_Switch1_e = rtb_CombinatorialLogic_m[0];
      } else {
        rtb_Switch1_e = BaseEngineController_LS_DWork.s120_UnitDelay_DSTATE;
      }

      /* End of Switch: '<S120>/Switch1' */

      /* Logic: '<S104>/Logical Operator1' */
      BaseEngineController_LS_B.s104_LogicalOperator1 = !rtb_Switch1_e;

      /* RelationalOperator: '<S104>/Relational Operator' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S104>/motohawk_calibration7'
       */
      rtb_RelationalOperator_j = (BaseEngineController_LS_B.s462_Switch >=
        (ACTimeFromStartDelay_DataStore()));

      /* Logic: '<S104>/Logical Operator' incorporates:
       *  Logic: '<S104>/Logical Operator6'
       *  S-Function (motohawk_sfun_fault_action): '<S104>/motohawk_fault_action'
       */
      BaseEngineController_LS_B.s104_LogicalOperator =
        ((BaseEngineController_LS_B.s501_Merge &&
          BaseEngineController_LS_B.s125_Switch1 && rtb_LogicalOperator3_o &&
          BaseEngineController_LS_B.s104_LogicalOperator4 &&
          BaseEngineController_LS_B.s121_Switch1 &&
          BaseEngineController_LS_B.s104_LogicalOperator1 &&
          rtb_RelationalOperator_j && (!GetFaultActionStatus(3))));

      /* Update for UnitDelay: '<S125>/Unit Delay' */
      BaseEngineController_LS_DWork.s125_UnitDelay_DSTATE =
        BaseEngineController_LS_B.s125_Switch1;

      /* Update for UnitDelay: '<S124>/Unit Delay' */
      BaseEngineController_LS_DWork.s124_UnitDelay_DSTATE =
        BaseEngineController_LS_B.s124_Switch1;

      /* Update for UnitDelay: '<S122>/Unit Delay' */
      BaseEngineController_LS_DWork.s122_UnitDelay_DSTATE = rtb_Switch1_n;

      /* Update for UnitDelay: '<S123>/Unit Delay' */
      BaseEngineController_LS_DWork.s123_UnitDelay_DSTATE = rtb_Switch1_k;

      /* Update for UnitDelay: '<S121>/Unit Delay' */
      BaseEngineController_LS_DWork.s121_UnitDelay_DSTATE =
        BaseEngineController_LS_B.s121_Switch1;

      /* Update for UnitDelay: '<S120>/Unit Delay' */
      BaseEngineController_LS_DWork.s120_UnitDelay_DSTATE = rtb_Switch1_e;
    }

    /* Output and update for function-call system: '<S93>/FAN Control' */
    {
      /* local block i/o variables */
      real_T rtb_motohawk_interpolation_2d;
      real_T rtb_motohawk_interpolation_2d1_i;
      real_T rtb_motohawk_interpolation_2d2;
      boolean_T rtb_motohawk_fault_action_l;
      boolean_T rtb_BelowLoTarget_b;
      boolean_T rtb_AboveHiTarget_a;
      boolean_T rtb_CombinatorialLogic_c[2];
      boolean_T rtb_motohawk_data_read6;
      boolean_T rtb_motohawk_data_read10;
      real_T rtb_DataTypeConversion_cu;
      boolean_T rtb_Switch1_em;
      boolean_T rtb_Switch1_l;
      boolean_T rtb_Switch1_m;
      real_T rtb_Switch_k;
      real_T rtb_Switch1_j;
      real_T rtb_Switch2;
      real_T rtb_Product3_m;
      real_T rtb_Product2_jc;
      real_T rtb_Product1_i;
      real_T u;

      /* S-Function (motohawk_sfun_fault_action): '<S108>/motohawk_fault_action'
       *
       * Regarding '<S108>/motohawk_fault_action':
         Get Fault Action Status: DisableFanRun
       */
      {
        extern boolean_T GetFaultActionStatus(uint32_T action);
        rtb_motohawk_fault_action_l = GetFaultActionStatus(4);
      }

      /* RelationalOperator: '<S137>/LT' incorporates:
       *  S-Function (motohawk_sfun_data_read): '<S108>/motohawk_data_read'
       */
      rtb_BelowLoTarget_b = (BaseEngineController_LS_B.s636_Merge >=
        ECTFanOn_DataStore());

      /* RelationalOperator: '<S137>/LT1' incorporates:
       *  S-Function (motohawk_sfun_data_read): '<S108>/motohawk_data_read1'
       */
      rtb_AboveHiTarget_a = (BaseEngineController_LS_B.s636_Merge <=
        ECTFanOff_DataStore());

      /* CombinatorialLogic: '<S140>/Combinatorial  Logic' */
      {
        uint_T rowidx= 0;

        /* Compute the truth table row index corresponding to the input */
        rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_b != 0);
        rowidx = (rowidx << 1) + (uint_T)(rtb_AboveHiTarget_a != 0);

        /* Copy the appropriate row of the table into the block output vector */
        rtb_CombinatorialLogic_c[0] =
          BaseEngineController_LS_ConstP.pooled809[rowidx];
        rtb_CombinatorialLogic_c[1] =
          BaseEngineController_LS_ConstP.pooled809[rowidx + 4];
      }

      /* Switch: '<S140>/Switch1' incorporates:
       *  UnitDelay: '<S140>/Unit Delay'
       */
      if (rtb_CombinatorialLogic_c[1]) {
        rtb_Switch1_em = rtb_CombinatorialLogic_c[0];
      } else {
        rtb_Switch1_em = BaseEngineController_LS_DWork.s140_UnitDelay_DSTATE;
      }

      /* End of Switch: '<S140>/Switch1' */
      /* Switch: '<S108>/Switch' incorporates:
       *  S-Function (motohawk_sfun_data_read): '<S108>/motohawk_data_read14'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S108>/motohawk_interpolation_2d'
       */
      if (FAN_Mode_DataStore()) {
        rtb_Switch_k = (real_T)rtb_Switch1_em;
      } else {
        /* S-Function Block: <S108>/motohawk_interpolation_2d */
        {
          extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
            col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
          rtb_motohawk_interpolation_2d = TableInterpolation2D_real_T
            (BaseEngineController_LS_B.s418_motohawk_prelookup2,
             BaseEngineController_LS_B.s425_motohawk_prelookup2, (real_T *)
             ((ECTFanSpeedMap_DataStore())), 7, 7);
          (ECTFanSpeed_DataStore()) = rtb_motohawk_interpolation_2d;
        }

        rtb_Switch_k = rtb_motohawk_interpolation_2d;
      }

      /* End of Switch: '<S108>/Switch' */
      /* RelationalOperator: '<S138>/LT' incorporates:
       *  S-Function (motohawk_sfun_data_read): '<S108>/motohawk_data_read2'
       */
      rtb_AboveHiTarget_a = (BaseEngineController_LS_B.s654_Merge >=
        IATFanOn_DataStore());

      /* RelationalOperator: '<S138>/LT1' incorporates:
       *  S-Function (motohawk_sfun_data_read): '<S108>/motohawk_data_read3'
       */
      rtb_BelowLoTarget_b = (BaseEngineController_LS_B.s654_Merge <=
        IATFanOff_DataStore());

      /* CombinatorialLogic: '<S141>/Combinatorial  Logic' */
      {
        uint_T rowidx= 0;

        /* Compute the truth table row index corresponding to the input */
        rowidx = (rowidx << 1) + (uint_T)(rtb_AboveHiTarget_a != 0);
        rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_b != 0);

        /* Copy the appropriate row of the table into the block output vector */
        rtb_CombinatorialLogic_c[0] =
          BaseEngineController_LS_ConstP.pooled809[rowidx];
        rtb_CombinatorialLogic_c[1] =
          BaseEngineController_LS_ConstP.pooled809[rowidx + 4];
      }

      /* Switch: '<S141>/Switch1' incorporates:
       *  UnitDelay: '<S141>/Unit Delay'
       */
      if (rtb_CombinatorialLogic_c[1]) {
        rtb_Switch1_l = rtb_CombinatorialLogic_c[0];
      } else {
        rtb_Switch1_l = BaseEngineController_LS_DWork.s141_UnitDelay_DSTATE;
      }

      /* End of Switch: '<S141>/Switch1' */

      /* Switch: '<S108>/Switch1' incorporates:
       *  S-Function (motohawk_sfun_data_read): '<S108>/motohawk_data_read14'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S108>/motohawk_interpolation_2d1'
       */
      if (FAN_Mode_DataStore()) {
        rtb_Switch1_j = (real_T)rtb_Switch1_l;
      } else {
        /* S-Function Block: <S108>/motohawk_interpolation_2d1 */
        {
          extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
            col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
          rtb_motohawk_interpolation_2d1_i = TableInterpolation2D_real_T
            (BaseEngineController_LS_B.s419_motohawk_prelookup1,
             BaseEngineController_LS_B.s425_motohawk_prelookup2, (real_T *)
             ((IATFanSpeedMap_DataStore())), 7, 7);
          (IATFanSpeed_DataStore()) = rtb_motohawk_interpolation_2d1_i;
        }

        rtb_Switch1_j = rtb_motohawk_interpolation_2d1_i;
      }

      /* End of Switch: '<S108>/Switch1' */
      /* RelationalOperator: '<S139>/LT' incorporates:
       *  S-Function (motohawk_sfun_data_read): '<S108>/motohawk_data_read4'
       */
      rtb_AboveHiTarget_a = (BaseEngineController_LS_B.s550_Merge >=
        ACPresFanOn_DataStore());

      /* RelationalOperator: '<S139>/LT1' incorporates:
       *  S-Function (motohawk_sfun_data_read): '<S108>/motohawk_data_read5'
       */
      rtb_BelowLoTarget_b = (BaseEngineController_LS_B.s550_Merge <=
        ACPresFanOff_DataStore());

      /* CombinatorialLogic: '<S142>/Combinatorial  Logic' */
      {
        uint_T rowidx= 0;

        /* Compute the truth table row index corresponding to the input */
        rowidx = (rowidx << 1) + (uint_T)(rtb_AboveHiTarget_a != 0);
        rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_b != 0);

        /* Copy the appropriate row of the table into the block output vector */
        rtb_CombinatorialLogic_c[0] =
          BaseEngineController_LS_ConstP.pooled809[rowidx];
        rtb_CombinatorialLogic_c[1] =
          BaseEngineController_LS_ConstP.pooled809[rowidx + 4];
      }

      /* Switch: '<S142>/Switch1' incorporates:
       *  UnitDelay: '<S142>/Unit Delay'
       */
      if (rtb_CombinatorialLogic_c[1]) {
        rtb_Switch1_m = rtb_CombinatorialLogic_c[0];
      } else {
        rtb_Switch1_m = BaseEngineController_LS_DWork.s142_UnitDelay_DSTATE;
      }

      /* End of Switch: '<S142>/Switch1' */

      /* Switch: '<S108>/Switch2' incorporates:
       *  S-Function (motohawk_sfun_data_read): '<S108>/motohawk_data_read14'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S108>/motohawk_interpolation_2d2'
       */
      if (FAN_Mode_DataStore()) {
        rtb_Switch2 = (real_T)rtb_Switch1_m;
      } else {
        /* S-Function Block: <S108>/motohawk_interpolation_2d2 */
        {
          extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
            col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
          rtb_motohawk_interpolation_2d2 = TableInterpolation2D_real_T
            (BaseEngineController_LS_B.s416_motohawk_prelookup1,
             BaseEngineController_LS_B.s425_motohawk_prelookup2, (real_T *)
             ((ACPresFanSpeedMap_DataStore())), 7, 7);
          (ACPresFanSpeed_DataStore()) = rtb_motohawk_interpolation_2d2;
        }

        rtb_Switch2 = rtb_motohawk_interpolation_2d2;
      }

      /* End of Switch: '<S108>/Switch2' */

      /* DataTypeConversion: '<S108>/Data Type Conversion' */
      rtb_DataTypeConversion_cu = (real_T)BaseEngineController_LS_B.s501_Merge;

      /* Switch: '<S108>/Switch3' incorporates:
       *  Product: '<S108>/Product8'
       *  S-Function (motohawk_sfun_calibration): '<S108>/motohawk_calibration14'
       *  S-Function (motohawk_sfun_data_read): '<S108>/motohawk_data_read14'
       */
      if (!FAN_Mode_DataStore()) {
        rtb_DataTypeConversion_cu *= (real_T)((uint8_T)(ACSwFanSpeed_DataStore()));
      }

      /* End of Switch: '<S108>/Switch3' */

      /* Switch: '<S108>/Switch4' incorporates:
       *  Constant: '<S108>/Constant'
       */
      if (rtb_motohawk_fault_action_l) {
        BaseEngineController_LS_B.s108_Switch4 = 0.0;
      } else {
        /* S-Function (motohawk_sfun_data_read): '<S108>/motohawk_data_read9' */
        rtb_motohawk_data_read6 = Fan1ACSw_DataStore();

        /* Product: '<S108>/Product3' */
        rtb_Product3_m = rtb_DataTypeConversion_cu * (real_T)
          rtb_motohawk_data_read6;

        /* S-Function (motohawk_sfun_data_read): '<S108>/motohawk_data_read8' */
        rtb_motohawk_data_read6 = Fan1ACPres_DataStore();

        /* Product: '<S108>/Product2' */
        rtb_Product2_jc = rtb_Switch2 * (real_T)rtb_motohawk_data_read6;

        /* S-Function (motohawk_sfun_data_read): '<S108>/motohawk_data_read7' */
        rtb_motohawk_data_read6 = Fan1IAT_DataStore();

        /* Product: '<S108>/Product1' */
        rtb_Product1_i = rtb_Switch1_j * (real_T)rtb_motohawk_data_read6;

        /* S-Function (motohawk_sfun_data_read): '<S108>/motohawk_data_read6' */
        rtb_motohawk_data_read6 = Fan1ECT_DataStore();

        /* MinMax: '<S108>/MinMax' incorporates:
         *  Product: '<S108>/Product'
         */
        u = rtb_Switch_k * (real_T)rtb_motohawk_data_read6;
        u = (u >= rtb_Product1_i) || rtIsNaN(rtb_Product1_i) ? u :
          rtb_Product1_i;
        u = (u >= rtb_Product2_jc) || rtIsNaN(rtb_Product2_jc) ? u :
          rtb_Product2_jc;
        BaseEngineController_LS_B.s108_Switch4 = u >= rtb_Product3_m ? u :
          rtb_Product3_m;
      }

      /* End of Switch: '<S108>/Switch4' */

      /* Switch: '<S108>/Switch5' incorporates:
       *  Constant: '<S108>/Constant1'
       */
      if (rtb_motohawk_fault_action_l) {
        BaseEngineController_LS_B.s108_Switch5 = 0.0;
      } else {
        /* S-Function (motohawk_sfun_data_read): '<S108>/motohawk_data_read13' */
        rtb_motohawk_data_read10 = Fan2ACSw_DataStore();

        /* Product: '<S108>/Product7' */
        rtb_Product2_jc = rtb_DataTypeConversion_cu * (real_T)
          rtb_motohawk_data_read10;

        /* S-Function (motohawk_sfun_data_read): '<S108>/motohawk_data_read12' */
        rtb_motohawk_data_read10 = Fan2ACPres_DataStore();

        /* Product: '<S108>/Product6' */
        rtb_Product3_m = rtb_Switch2 * (real_T)rtb_motohawk_data_read10;

        /* S-Function (motohawk_sfun_data_read): '<S108>/motohawk_data_read11' */
        rtb_motohawk_data_read10 = Fan2IAT_DataStore();

        /* Product: '<S108>/Product5' */
        rtb_DataTypeConversion_cu = rtb_Switch1_j * (real_T)
          rtb_motohawk_data_read10;

        /* S-Function (motohawk_sfun_data_read): '<S108>/motohawk_data_read10' */
        rtb_motohawk_data_read10 = Fan2ECT_DataStore();

        /* MinMax: '<S108>/MinMax1' incorporates:
         *  Product: '<S108>/Product4'
         */
        u = rtb_Switch_k * (real_T)rtb_motohawk_data_read10;
        u = (u >= rtb_DataTypeConversion_cu) || rtIsNaN
          (rtb_DataTypeConversion_cu) ? u : rtb_DataTypeConversion_cu;
        u = (u >= rtb_Product3_m) || rtIsNaN(rtb_Product3_m) ? u :
          rtb_Product3_m;
        BaseEngineController_LS_B.s108_Switch5 = u >= rtb_Product2_jc ? u :
          rtb_Product2_jc;
      }

      /* End of Switch: '<S108>/Switch5' */

      /* Update for UnitDelay: '<S140>/Unit Delay' */
      BaseEngineController_LS_DWork.s140_UnitDelay_DSTATE = rtb_Switch1_em;

      /* Update for UnitDelay: '<S141>/Unit Delay' */
      BaseEngineController_LS_DWork.s141_UnitDelay_DSTATE = rtb_Switch1_l;

      /* Update for UnitDelay: '<S142>/Unit Delay' */
      BaseEngineController_LS_DWork.s142_UnitDelay_DSTATE = rtb_Switch1_m;
    }

    /* Output and update for function-call system: '<S93>/MaxGovernor' */
    {
      /* local block i/o variables */
      real_T rtb_motohawk_delta_time_d4;
      real_T rtb_motohawk_interpolation_1d3_m;
      real_T rtb_motohawk_interpolation_1d2_c;
      real_T rtb_motohawk_delta_time_m;
      real_T rtb_motohawk_interpolation_1d4;
      real_T rtb_motohawk_delta_time_l;
      real_T rtb_StateO;
      real_T rtb_motohawk_interpolation_1d4_k;
      uint16_T rtb_Merge1;
      uint16_T rtb_MinMax_c;
      uint16_T rtb_MinMax_ny;
      index_T rtb_motohawk_prelookup1_f;
      uint16_T rtb_Merge_a;
      boolean_T rtb_RelationalOperator_j1;
      real_T rtb_DataTypeConversion_m;
      boolean_T rtb_RelationalOperator2_n;
      boolean_T rtb_RelationalOperator_c;
      boolean_T rtb_LogicalOperator1_l;
      real_T rtb_Reset;
      int32_T rtb_Hold;
      int32_T rtb_ETCMode;
      real_T rtb_alpha_o;

      /* Sum: '<S110>/Sum' */
      BaseEngineController_LS_B.s110_Sum =
        BaseEngineController_LS_B.s197_DontallowsetpointtoeverdropbelowtheTargetRPM
        + BaseEngineController_LS_B.s445_Sum2;

      /* Outputs for Enabled SubSystem: '<S174>/InGear' incorporates:
       *  EnablePort: '<S177>/Enable'
       */
      /* Outputs for Enabled SubSystem: '<S174>/InNeutral' incorporates:
       *  EnablePort: '<S178>/Enable'
       */
      /* S-Function (motohawk_sfun_calibration): '<S471>/motohawk_calibration1' */
      if ((Placeholder_ClutchSw_DataStore())) {
        /* S-Function (motohawk_sfun_data_read): '<S177>/motohawk_data_read' */
        rtb_MinMax_ny = MaxGovInGearSetPoint_DataStore();

        /* MinMax: '<S179>/MinMax' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S177>/motohawk_calibration3'
         */
        rtb_MinMax_ny = (uint16_T)(rtb_MinMax_ny >= ((uint16_T)
          (MaxGovInGearLowerLim_DataStore())) ? rtb_MinMax_ny : ((uint16_T)
          (MaxGovInGearLowerLim_DataStore())));

        /* MinMax: '<S179>/MinMax1' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S177>/motohawk_calibration5'
         */
        rtb_Merge_a = (uint16_T)(rtb_MinMax_ny <= ((uint16_T)
          (MaxGovInGearUpperLim_DataStore())) ? rtb_MinMax_ny : ((uint16_T)
          (MaxGovInGearUpperLim_DataStore())));

        /* S-Function (motohawk_sfun_calibration): '<S177>/motohawk_calibration4' */
        rtb_Merge1 = (MaxGovInGearRPMThresh_DataStore());

        /* S-Function (motohawk_sfun_data_write): '<S177>/motohawk_data_write1' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S177>/motohawk_calibration2'
         */
        /* Write to Data Storage as scalar: MaxGovInGearSetPoint */
        {
          MaxGovInGearSetPoint_DataStore() = (MaxGovInGearRPMSetPt_DataStore());
        }
      } else {
        /* S-Function (motohawk_sfun_data_read): '<S178>/motohawk_data_read' */
        rtb_MinMax_c = MaxGovNtrlSetPoint_DataStore();

        /* MinMax: '<S180>/MinMax' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S178>/motohawk_calibration2'
         */
        rtb_MinMax_c = (uint16_T)(rtb_MinMax_c >= ((uint16_T)
          (MaxGovNtrlLowerLim_DataStore())) ? rtb_MinMax_c : ((uint16_T)
          (MaxGovNtrlLowerLim_DataStore())));

        /* MinMax: '<S180>/MinMax1' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S178>/motohawk_calibration5'
         */
        rtb_Merge_a = (uint16_T)(rtb_MinMax_c <= ((uint16_T)
          (MaxGovNtrlUpperLim_DataStore())) ? rtb_MinMax_c : ((uint16_T)
          (MaxGovNtrlUpperLim_DataStore())));

        /* S-Function (motohawk_sfun_calibration): '<S178>/motohawk_calibration3' */
        rtb_Merge1 = (MaxGovNtrlRPMThresh_DataStore());

        /* S-Function (motohawk_sfun_data_write): '<S178>/motohawk_data_write1' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S178>/motohawk_calibration4'
         */
        /* Write to Data Storage as scalar: MaxGovNtrlSetPoint */
        {
          MaxGovNtrlSetPoint_DataStore() = (MaxGovNtrlRPMSetPt_DataStore());
        }
      }

      /* End of S-Function (motohawk_sfun_calibration): '<S471>/motohawk_calibration1' */
      /* End of Outputs for SubSystem: '<S174>/InNeutral' */
      /* End of Outputs for SubSystem: '<S174>/InGear' */

      /* RelationalOperator: '<S174>/Relational Operator' incorporates:
       *  Sum: '<S174>/Sum1'
       */
      rtb_RelationalOperator_j1 = (BaseEngineController_LS_B.s472_RPMInst >
        (real_T)(uint16_T)(rtb_Merge_a - rtb_Merge1));

      /* DataTypeConversion: '<S110>/Data Type Conversion' */
      rtb_DataTypeConversion_m = (real_T)rtb_Merge_a;

      /* RelationalOperator: '<S172>/Relational Operator2' */
      rtb_RelationalOperator2_n = (BaseEngineController_LS_B.s472_RPMInst >
        rtb_DataTypeConversion_m);

      /* RelationalOperator: '<S172>/Relational Operator' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S172>/motohawk_calibration5'
       *  Sum: '<S172>/Sum'
       */
      rtb_RelationalOperator_c = (BaseEngineController_LS_B.s110_Sum <=
        BaseEngineController_LS_B.s437_Switch2 - (MaxGovTPSHyst_DataStore()));

      /* Logic: '<S172>/Logical Operator1' incorporates:
       *  RelationalOperator: '<S172>/Relational Operator1'
       *  S-Function (motohawk_sfun_calibration): '<S172>/motohawk_calibration5'
       *  Sum: '<S172>/Sum1'
       */
      rtb_LogicalOperator1_l = (rtb_RelationalOperator_j1 &&
        (BaseEngineController_LS_B.s110_Sum > (MaxGovTPSHyst_DataStore()) +
         BaseEngineController_LS_B.s437_Switch2));

      /* MATLAB Function Block: '<S172>/MaxGOV Stateflow' incorporates:
       *  Logic: '<S172>/Logical Operator'
       *  Logic: '<S172>/Logical Operator2'
       *  Logic: '<S172>/Logical Operator3'
       *  S-Function (motohawk_sfun_data_read): '<S172>/motohawk_data_read'
       */

      /* MATLAB Function 'Foreground/Control/Controller/Run/MaxGovernor/MaxGovState/MaxGOV Stateflow': '<S176>:1' */
      if ((MaxGov_DataStore() == 0.0) && ((rtb_RelationalOperator_j1 ||
            rtb_RelationalOperator2_n) == 1)) {
        /* '<S176>:1:3' */
        /* '<S176>:1:4' */
        rtb_StateO = 1.0;
      } else if ((MaxGov_DataStore() == 1.0) && (rtb_RelationalOperator_c ==
                  TRUE)) {
        /* '<S176>:1:5' */
        /* '<S176>:1:6' */
        rtb_StateO = 2.0;
      } else if ((MaxGov_DataStore() == 2.0) && ((rtb_LogicalOperator1_l ||
                   rtb_RelationalOperator2_n) == 1)) {
        /* '<S176>:1:7' */
        /* '<S176>:1:8' */
        rtb_StateO = 1.0;
      } else if ((MaxGov_DataStore() == 2.0) && (!rtb_RelationalOperator_j1 ==
                  TRUE)) {
        /* '<S176>:1:9' */
        /* '<S176>:1:10' */
        rtb_StateO = 0.0;
      } else {
        /* '<S176>:1:12' */
        rtb_StateO = MaxGov_DataStore();
      }

      if (MaxGov_DataStore() == 0.0) {
        /* '<S176>:1:15' */
        /* '<S176>:1:16' */
        rtb_ETCMode = 0;

        /* '<S176>:1:17' */
        rtb_Hold = 0;

        /* '<S176>:1:18' */
      } else if (MaxGov_DataStore() == 1.0) {
        /* '<S176>:1:19' */
        /* '<S176>:1:20' */
        rtb_ETCMode = 1;

        /* '<S176>:1:21' */
        rtb_Hold = 0;

        /* '<S176>:1:22' */
      } else if (MaxGov_DataStore() == 2.0) {
        /* '<S176>:1:23' */
        /* '<S176>:1:24' */
        rtb_ETCMode = 0;

        /* '<S176>:1:25' */
        rtb_Hold = 1;

        /* '<S176>:1:26' */
      } else {
        /* '<S176>:1:28' */
        rtb_ETCMode = 0;

        /* '<S176>:1:29' */
        rtb_Hold = 0;

        /* '<S176>:1:30' */
      }

      /* End of MATLAB Function Block: '<S172>/MaxGOV Stateflow' */

      /* DataTypeConversion: '<S172>/Data Type Conversion' */
      BaseEngineController_LS_B.s172_DataTypeConversion = 0;

      /* Logic: '<S173>/Logical Operator' incorporates:
       *  UnitDelay: '<S110>/Unit Delay'
       */
      rtb_RelationalOperator_j1 =
        !BaseEngineController_LS_DWork.s110_UnitDelay_DSTATE;

      /* S-Function Block: <S173>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s173_motohawk_delta_time_DWORK1, NULL);
        rtb_motohawk_delta_time_d4 = ((real_T) delta) * 0.000001;
      }

      /* UnitDelay: '<S173>/Unit Delay' */
      rtb_Reset = BaseEngineController_LS_DWork.s173_UnitDelay_DSTATE;

      /* Switch: '<S173>/Preload lowpass filter with current RPM while not on Idle' incorporates:
       *  Constant: '<S173>/Constant'
       *  Product: '<S173>/Product2'
       *  Product: '<S173>/Product3'
       *  Sum: '<S173>/Sum'
       *  Sum: '<S173>/Sum1'
       */
      if (rtb_RelationalOperator_j1) {
        rtb_alpha_o = BaseEngineController_LS_B.s472_RPMInst;
      } else {
        /* Product: '<S173>/Product1' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S173>/motohawk_calibration2'
         *  S-Function (motohawk_sfun_delta_time): '<S173>/motohawk_delta_time'
         */
        rtb_alpha_o = rtb_motohawk_delta_time_d4 /
          (MaxGovRPMCtrlEntryFiltC_DataStore());
        rtb_alpha_o = (1.0 - rtb_alpha_o) * rtb_Reset + rtb_DataTypeConversion_m
          * rtb_alpha_o;
      }

      /* End of Switch: '<S173>/Preload lowpass filter with current RPM while not on Idle' */

      /* MinMax: '<S173>/Don't allow setpoint to ever go above the TargetRPM' */
      BaseEngineController_LS_B.s173_DontallowsetpointtoevergoabovetheTargetRPM =
        (rtb_DataTypeConversion_m <= rtb_alpha_o) || rtIsNaN(rtb_alpha_o) ?
        rtb_DataTypeConversion_m : rtb_alpha_o;

      /* DataTypeConversion: '<S172>/Data Type Conversion1' */
      rtb_Reset = fmod((real_T)rtb_Hold, 256.0);
      BaseEngineController_LS_B.s172_DataTypeConversion1 = (int8_T)(rtb_Reset <
        0.0 ? (int8_T)-(int8_T)(uint8_T)-rtb_Reset : (int8_T)(uint8_T)rtb_Reset);

      /* Switch: '<S175>/Switch1' */
      if (BaseEngineController_LS_B.s172_DataTypeConversion1 >= 1) {
        rtb_alpha_o =
          BaseEngineController_LS_B.s173_DontallowsetpointtoevergoabovetheTargetRPM;
      } else {
        rtb_alpha_o = BaseEngineController_LS_B.s472_RPMInst;
      }

      /* End of Switch: '<S175>/Switch1' */

      /* Sum: '<S182>/Sum2' */
      BaseEngineController_LS_B.s182_Sum2 =
        BaseEngineController_LS_B.s173_DontallowsetpointtoevergoabovetheTargetRPM
        - rtb_alpha_o;

      /* Product: '<S182>/Product5' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S175>/motohawk_calibration5'
       */
      rtb_alpha_o = BaseEngineController_LS_B.s182_Sum2 *
        (MaxGovErrorGain_DataStore());

      /* S-Function Block: <S175>/motohawk_prelookup1 */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (MaxGovSpeedErrorIn_DataStore()) = BaseEngineController_LS_B.s182_Sum2;
        (MaxGovSpeedErrorIdx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_LS_B.s182_Sum2,
           (MaxGovSpeedErrorIdxArr_DataStore()), 9,
           (MaxGovSpeedErrorIdx_DataStore()));
        rtb_motohawk_prelookup1_f = (MaxGovSpeedErrorIdx_DataStore());
      }

      /* S-Function Block: <S175>/motohawk_interpolation_1d3 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d3_m = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1_f, (real_T *)
           ((MaxGovPGainErrorMultTbl_DataStore())), 9);
        (MaxGovPGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d3_m;
      }

      /* Product: '<S182>/Product2' incorporates:
       *  Product: '<S175>/Product4'
       *  S-Function (motohawk_sfun_calibration): '<S175>/motohawk_calibration3'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S175>/motohawk_interpolation_1d3'
       *  S-Function (motohawk_sfun_prelookup): '<S175>/motohawk_prelookup1'
       */
      BaseEngineController_LS_B.s182_Product2 = (MaxGovPGain_DataStore()) *
        rtb_motohawk_interpolation_1d3_m * rtb_alpha_o;

      /* UnitDelay: '<S183>/Unit Delay' */
      rtb_Reset = BaseEngineController_LS_DWork.s183_UnitDelay_DSTATE;

      /* S-Function Block: <S175>/motohawk_interpolation_1d2 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d2_c = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1_f, (real_T *)
           ((MaxGovDGainErrorMultTbl_DataStore())), 9);
        (MaxGovDGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d2_c;
      }

      /* Product: '<S182>/Product4' incorporates:
       *  Product: '<S175>/Product3'
       *  S-Function (motohawk_sfun_calibration): '<S175>/motohawk_calibration6'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S175>/motohawk_interpolation_1d2'
       *  S-Function (motohawk_sfun_prelookup): '<S175>/motohawk_prelookup1'
       */
      rtb_DataTypeConversion_m = (MaxGovDGain_DataStore()) *
        rtb_motohawk_interpolation_1d2_c * rtb_alpha_o;

      /* S-Function Block: <S183>/motohawk_delta_time */
      rtb_motohawk_delta_time_m = 0.005;

      /* Product: '<S183>/Product' incorporates:
       *  S-Function (motohawk_sfun_delta_time): '<S183>/motohawk_delta_time'
       *  Sum: '<S183>/Sum2'
       */
      BaseEngineController_LS_B.s183_Product = (rtb_DataTypeConversion_m -
        rtb_Reset) / rtb_motohawk_delta_time_m;

      /* Outputs for Atomic SubSystem: '<S110>/I-Term Preload' */

      /* S-Function Block: <S171>/motohawk_interpolation_1d4 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d4_k = TableInterpolation1D_real_T
          (BaseEngineController_LS_B.s385_RPMAccel17Idx, (real_T *)
           ((MaxGovPreloadITermTbl_DataStore())), 17);
        (MaxGovPreloadITerm_DataStore()) = rtb_motohawk_interpolation_1d4_k;
      }

      /* Sum: '<S171>/Sum' incorporates:
       *  S-Function (motohawk_sfun_interpolation_1d): '<S171>/motohawk_interpolation_1d4'
       */
      BaseEngineController_LS_B.s171_Sum = BaseEngineController_LS_B.s110_Sum -
        rtb_motohawk_interpolation_1d4_k;

      /* End of Outputs for SubSystem: '<S110>/I-Term Preload' */

      /* Switch: '<S184>/Switch1' incorporates:
       *  DataTypeConversion: '<S184>/Data Type Conversion'
       *  UnitDelay: '<S184>/Unit Delay'
       */
      if (BaseEngineController_LS_B.s172_DataTypeConversion != 0) {
        BaseEngineController_LS_B.s184_Switch1 =
          BaseEngineController_LS_B.s171_Sum;
      } else {
        BaseEngineController_LS_B.s184_Switch1 =
          BaseEngineController_LS_DWork.s184_UnitDelay_DSTATE;
      }

      /* End of Switch: '<S184>/Switch1' */

      /* Switch: '<S175>/Switch' incorporates:
       *  Constant: '<S175>/Constant'
       */
      if (BaseEngineController_LS_B.s172_DataTypeConversion >= 1) {
        BaseEngineController_LS_B.s175_Switch = 0.0;
      } else {
        /* MinMax: '<S181>/MinMax' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S175>/motohawk_calibration9'
         *  Sum: '<S182>/Sum1'
         */
        rtb_Reset = (BaseEngineController_LS_B.s182_Product2 +
                     BaseEngineController_LS_B.s183_Product) +
          BaseEngineController_LS_B.s184_Switch1;
        rtb_Reset = (rtb_Reset >= (MaxGovPIDOutLowerLimit_DataStore())) ||
          rtIsNaN((MaxGovPIDOutLowerLimit_DataStore())) ? rtb_Reset :
          (MaxGovPIDOutLowerLimit_DataStore());

        /* MinMax: '<S181>/MinMax1' incorporates:
         *  MinMax: '<S181>/MinMax'
         *  S-Function (motohawk_sfun_calibration): '<S175>/motohawk_calibration2'
         */
        BaseEngineController_LS_B.s175_Switch = (rtb_Reset <=
          (MaxGovPIDOutUpperLimit_DataStore())) || rtIsNaN
          ((MaxGovPIDOutUpperLimit_DataStore())) ? rtb_Reset :
          (MaxGovPIDOutUpperLimit_DataStore());
      }

      /* End of Switch: '<S175>/Switch' */

      /* S-Function (motohawk_sfun_data_write): '<S172>/motohawk_data_write' */
      /* Write to Data Storage as scalar: MaxGov */
      {
        MaxGov_DataStore() = rtb_StateO;
      }

      /* MultiPortSwitch: '<S172>/Multiport Switch' incorporates:
       *  Constant: '<S172>/Constant'
       *  DataTypeConversion: '<S172>/Data Type Conversion2'
       *  S-Function (motohawk_sfun_calibration): '<S172>/motohawk_calibration1'
       */
      if ((MaxGovDisable_DataStore()) == FALSE) {
        /* DataTypeConversion: '<S172>/Data Type Conversion2' */
        rtb_Reset = fmod((real_T)rtb_ETCMode, 256.0);
        BaseEngineController_LS_B.s172_MultiportSwitch = (((rtb_Reset < 0.0 ?
          (int8_T)-(int8_T)(uint8_T)-rtb_Reset : (int8_T)(uint8_T)rtb_Reset) !=
          0));
      } else {
        BaseEngineController_LS_B.s172_MultiportSwitch = FALSE;
      }

      /* End of MultiPortSwitch: '<S172>/Multiport Switch' */

      /* S-Function Block: <S175>/motohawk_interpolation_1d4 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d4 = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1_f, (real_T *)
           ((MaxGovIGainErrorMultTbl_DataStore())), 9);
        (MaxGovIGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d4;
      }

      /* Product: '<S182>/Product1' incorporates:
       *  Product: '<S175>/Product5'
       *  S-Function (motohawk_sfun_calibration): '<S175>/motohawk_calibration4'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S175>/motohawk_interpolation_1d4'
       *  S-Function (motohawk_sfun_prelookup): '<S175>/motohawk_prelookup1'
       */
      rtb_Reset = (MaxGovIGain_DataStore()) * rtb_motohawk_interpolation_1d4 *
        rtb_alpha_o;

      /* S-Function Block: <S184>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s184_motohawk_delta_time_DWORK1, NULL);
        rtb_motohawk_delta_time_l = ((real_T) delta) * 0.000001;
      }

      /* Sum: '<S184>/Sum' incorporates:
       *  Product: '<S184>/Product'
       *  S-Function (motohawk_sfun_delta_time): '<S184>/motohawk_delta_time'
       */
      rtb_alpha_o = rtb_Reset * rtb_motohawk_delta_time_l +
        BaseEngineController_LS_B.s184_Switch1;

      /* MinMax: '<S186>/MinMax' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S175>/motohawk_calibration7'
       */
      rtb_Reset = (rtb_alpha_o >= (MaxGovITermLowerLimit_DataStore())) ||
        rtIsNaN((MaxGovITermLowerLimit_DataStore())) ? rtb_alpha_o :
        (MaxGovITermLowerLimit_DataStore());

      /* Update for UnitDelay: '<S110>/Unit Delay' */
      BaseEngineController_LS_DWork.s110_UnitDelay_DSTATE =
        BaseEngineController_LS_B.s172_MultiportSwitch;

      /* Update for UnitDelay: '<S173>/Unit Delay' */
      BaseEngineController_LS_DWork.s173_UnitDelay_DSTATE =
        BaseEngineController_LS_B.s173_DontallowsetpointtoevergoabovetheTargetRPM;

      /* Update for UnitDelay: '<S183>/Unit Delay' */
      BaseEngineController_LS_DWork.s183_UnitDelay_DSTATE =
        rtb_DataTypeConversion_m;

      /* Update for UnitDelay: '<S184>/Unit Delay' incorporates:
       *  MinMax: '<S186>/MinMax'
       *  MinMax: '<S186>/MinMax1'
       *  S-Function (motohawk_sfun_calibration): '<S175>/motohawk_calibration8'
       */
      BaseEngineController_LS_DWork.s184_UnitDelay_DSTATE = (rtb_Reset <=
        (MaxGovITermUpperLimit_DataStore())) || rtIsNaN
        ((MaxGovITermUpperLimit_DataStore())) ? rtb_Reset :
        (MaxGovITermUpperLimit_DataStore());
    }

    /* Output and update for function-call system: '<S93>/Spark Manager' */
    {
      /* local block i/o variables */
      real_T rtb_RichEquivRatioTargetDelta;
      real_T rtb_motohawk_interpolation_1d_n;
      real_T rtb_RichEquivRatioTargetDelta_l;
      real_T rtb_motohawk_interpolation_1d1_o;
      real_T rtb_RichEquivRatioTargetDelta_h;
      real_T rtb_motohawk_interpolation_1d2_m;
      real_T rtb_RichEquivRatioTargetDelta_i;
      real_T rtb_motohawk_interpolation_1d_k;
      real_T rtb_RichEquivRatioTargetDelta_m;
      real_T rtb_motohawk_interpolation_1d_h;
      real_T rtb_RichEquivRatioTargetDelta_e;
      real_T rtb_motohawk_interpolation_1d4_p;
      index_T rtb_motohawk_prelookup;
      real_T rtb_Product_h;
      real_T rtb_Product1_fs;

      /* S-Function Block: <S113>/motohawk_interpolation_2d2 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_RichEquivRatioTargetDelta = TableInterpolation2D_real_T
          (BaseEngineController_LS_B.s420_Indexes,
           BaseEngineController_LS_B.s422_Indexes, (real_T *)
           ((SparkAdvMap_DataStore())), 17, 17);
        (SparkAdv_DataStore()) = rtb_RichEquivRatioTargetDelta;
      }

      /* S-Function Block: <S262>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d_n = TableInterpolation1D_real_T
          (BaseEngineController_LS_B.s418_motohawk_prelookup, (real_T *)
           ((ECT_SpkOfstTbl_DataStore())), 5);
        (ECT_SpkOfst_DataStore()) = rtb_motohawk_interpolation_1d_n;
      }

      /* S-Function Block: <S262>/motohawk_interpolation_2d3 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_RichEquivRatioTargetDelta_l = TableInterpolation2D_real_T
          (BaseEngineController_LS_B.s420_motohawk_prelookup1,
           BaseEngineController_LS_B.s422_motohawk_prelookup1, (real_T *)
           ((ECT_SpkOfstMultMap_DataStore())), 9, 9);
        (ECT_SpkOfstMult_DataStore()) = rtb_RichEquivRatioTargetDelta_l;
      }

      /* Product: '<S262>/Product' incorporates:
       *  S-Function (motohawk_sfun_interpolation_1d): '<S262>/motohawk_interpolation_1d'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S262>/motohawk_interpolation_2d3'
       */
      rtb_Product_h = rtb_motohawk_interpolation_1d_n *
        rtb_RichEquivRatioTargetDelta_l;

      /* S-Function Block: <S262>/motohawk_interpolation_1d1 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d1_o = TableInterpolation1D_real_T
          (BaseEngineController_LS_B.s419_motohawk_prelookup, (real_T *)
           ((IAT_SpkOfstTbl_DataStore())), 5);
        (IAT_SpkOfst_DataStore()) = rtb_motohawk_interpolation_1d1_o;
      }

      /* S-Function Block: <S262>/motohawk_interpolation_2d1 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_RichEquivRatioTargetDelta_h = TableInterpolation2D_real_T
          (BaseEngineController_LS_B.s420_motohawk_prelookup1,
           BaseEngineController_LS_B.s422_motohawk_prelookup1, (real_T *)
           ((IAT_SpkOfstMultMap_DataStore())), 9, 9);
        (IAT_SpkOfstMult_DataStore()) = rtb_RichEquivRatioTargetDelta_h;
      }

      /* Product: '<S262>/Product1' incorporates:
       *  S-Function (motohawk_sfun_interpolation_1d): '<S262>/motohawk_interpolation_1d1'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S262>/motohawk_interpolation_2d1'
       */
      rtb_Product1_fs = rtb_motohawk_interpolation_1d1_o *
        rtb_RichEquivRatioTargetDelta_h;

      /* S-Function Block: <S262>/motohawk_interpolation_1d2 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d2_m = TableInterpolation1D_real_T
          (BaseEngineController_LS_B.s417_motohawk_prelookup, (real_T *)
           ((CAT_SpkOfstTbl_DataStore())), 5);
        (CAT_SpkOfst_DataStore()) = rtb_motohawk_interpolation_1d2_m;
      }

      /* S-Function Block: <S262>/motohawk_interpolation_2d2 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_RichEquivRatioTargetDelta_i = TableInterpolation2D_real_T
          (BaseEngineController_LS_B.s420_motohawk_prelookup1,
           BaseEngineController_LS_B.s422_motohawk_prelookup1, (real_T *)
           ((CAT_SpkOfstMultMap_DataStore())), 9, 9);
        (CAT_SpkOfstMult_DataStore()) = rtb_RichEquivRatioTargetDelta_i;
      }

      /* Sum: '<S262>/Add' incorporates:
       *  Product: '<S262>/Product2'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S262>/motohawk_interpolation_1d2'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S262>/motohawk_interpolation_2d2'
       */
      BaseEngineController_LS_B.s262_Add = (rtb_Product_h + rtb_Product1_fs) +
        rtb_motohawk_interpolation_1d2_m * rtb_RichEquivRatioTargetDelta_i;

      /* S-Function Block: <S259>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d_k = TableInterpolation1D_real_T
          (BaseEngineController_LS_B.s421_motohawk_prelookup, (real_T *)
           ((EthSpkModTbl_DataStore())), 5);
        (EthSpkMod_DataStore()) = rtb_motohawk_interpolation_1d_k;
      }

      /* S-Function Block: <S259>/motohawk_interpolation_2d3 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_RichEquivRatioTargetDelta_m = TableInterpolation2D_real_T
          (BaseEngineController_LS_B.s420_motohawk_prelookup1,
           BaseEngineController_LS_B.s422_motohawk_prelookup1, (real_T *)
           ((Ethanol_SpkOfstMultMap_DataStore())), 9, 9);
        (Ethanol_SpkOfstMult_DataStore()) = rtb_RichEquivRatioTargetDelta_m;
      }

      /* Product: '<S259>/Product' incorporates:
       *  S-Function (motohawk_sfun_interpolation_1d): '<S259>/motohawk_interpolation_1d'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S259>/motohawk_interpolation_2d3'
       */
      BaseEngineController_LS_B.s259_Product = rtb_motohawk_interpolation_1d_k *
        rtb_RichEquivRatioTargetDelta_m;

      /* S-Function Block: <S258>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (DesEqRatio09In_DataStore()) = BaseEngineController_LS_B.s132_Product1;
        (DesEqRatio09Idx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_LS_B.s132_Product1,
           (DesEqRatio09IdxArr_DataStore()), 9, (DesEqRatio09Idx_DataStore()));
        rtb_motohawk_prelookup = (DesEqRatio09Idx_DataStore());
      }

      /* S-Function Block: <S258>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d_h = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup, (real_T *) ((EqRatio_SpkOfstTbl_DataStore())),
           9);
        (EqRatio_SpkOfst_DataStore()) = rtb_motohawk_interpolation_1d_h;
      }

      /* S-Function Block: <S258>/motohawk_interpolation_2d3 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_RichEquivRatioTargetDelta_e = TableInterpolation2D_real_T
          (BaseEngineController_LS_B.s420_motohawk_prelookup1,
           BaseEngineController_LS_B.s422_motohawk_prelookup1, (real_T *)
           ((EqRatio_SpkOfsMultMap_DataStore())), 9, 9);
        (EqRatio_SpkOfsMult_DataStore()) = rtb_RichEquivRatioTargetDelta_e;
      }

      /* Product: '<S258>/Product' incorporates:
       *  S-Function (motohawk_sfun_interpolation_1d): '<S258>/motohawk_interpolation_1d'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S258>/motohawk_interpolation_2d3'
       *  S-Function (motohawk_sfun_prelookup): '<S258>/motohawk_prelookup'
       */
      BaseEngineController_LS_B.s258_Product = rtb_motohawk_interpolation_1d_h *
        rtb_RichEquivRatioTargetDelta_e;

      /* Sum: '<S113>/Apply Offsets to Base Spark Advance1' incorporates:
       *  S-Function (motohawk_sfun_interpolation_2d): '<S113>/motohawk_interpolation_2d2'
       *  Sum: '<S113>/Apply Offsets to Base Spark Advance3'
       */
      BaseEngineController_LS_B.s113_ApplyOffsetstoBaseSparkAdvance1 =
        ((((rtb_RichEquivRatioTargetDelta + BaseEngineController_LS_B.s262_Add)
           + BaseEngineController_LS_B.s259_Product) +
          BaseEngineController_LS_B.s258_Product) +
         BaseEngineController_LS_B.s111_IdleSpk) +
        BaseEngineController_LS_B.s132_SpkOut;

      /* MinMax: '<S265>/MinMax' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S261>/motohawk_calibration5'
       */
      rtb_Product_h =
        (BaseEngineController_LS_B.s113_ApplyOffsetstoBaseSparkAdvance1 >=
         (MinSparkLimit_DataStore())) || rtIsNaN((MinSparkLimit_DataStore())) ?
        BaseEngineController_LS_B.s113_ApplyOffsetstoBaseSparkAdvance1 :
        (MinSparkLimit_DataStore());

      /* Switch: '<S261>/Switch1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S261>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S261>/motohawk_interpolation_1d4'
       */
      if (BaseEngineController_LS_B.s207_RelOp) {
        /* S-Function Block: <S261>/motohawk_interpolation_1d4 */
        {
          extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T
            *tbl_data, uint32_T sz);
          rtb_motohawk_interpolation_1d4_p = TableInterpolation1D_real_T
            (BaseEngineController_LS_B.s420_motohawk_prelookup1, (real_T *)
             ((MaxSparkLimitTbl_DataStore())), 9);
          (MaxSparkLimit_DataStore()) = rtb_motohawk_interpolation_1d4_p;
        }

        rtb_Product1_fs = rtb_motohawk_interpolation_1d4_p;
      } else {
        rtb_Product1_fs = (MaxSparkLimitOffIdle_DataStore());
      }

      /* End of Switch: '<S261>/Switch1' */

      /* MinMax: '<S265>/MinMax1' incorporates:
       *  MinMax: '<S265>/MinMax'
       */
      BaseEngineController_LS_B.s265_MinMax1 = (rtb_Product_h <= rtb_Product1_fs)
        || rtIsNaN(rtb_Product1_fs) ? rtb_Product_h : rtb_Product1_fs;

      /* UnitDelay: '<S260>/Unit Delay' */
      rtb_Product_h = BaseEngineController_LS_DWork.s260_UnitDelay_DSTATE;

      /* Switch: '<S260>/Switch' incorporates:
       *  UnitDelay: '<S263>/Initial Condition is True'
       */
      if (BaseEngineController_LS_DWork.s263_InitialConditionisTrue_DSTATE) {
        BaseEngineController_LS_B.s260_Switch =
          BaseEngineController_LS_B.s265_MinMax1;
      } else {
        /* Sum: '<S260>/Sum' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S260>/motohawk_calibration'
         */
        rtb_Product1_fs = rtb_Product_h + (SparkAdv_DeltaHi_DataStore());

        /* MinMax: '<S264>/MinMax' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S260>/motohawk_calibration1'
         *  Sum: '<S260>/Sum1'
         */
        rtb_Product_h -= (SparkAdv_DeltaLo_DataStore());

        /* MinMax: '<S264>/MinMax1' incorporates:
         *  MinMax: '<S264>/MinMax'
         */
        rtb_Product_h = (BaseEngineController_LS_B.s265_MinMax1 >= rtb_Product_h)
          || rtIsNaN(rtb_Product_h) ? BaseEngineController_LS_B.s265_MinMax1 :
          rtb_Product_h;
        BaseEngineController_LS_B.s260_Switch = (rtb_Product_h <=
          rtb_Product1_fs) || rtIsNaN(rtb_Product1_fs) ? rtb_Product_h :
          rtb_Product1_fs;
      }

      /* End of Switch: '<S260>/Switch' */

      /* S-Function Block: <S113>/motohawk_interpolation_2d1 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        BaseEngineController_LS_B.s113_motohawk_interpolation_2d1 =
          TableInterpolation2D_real_T
          (BaseEngineController_LS_B.s420_motohawk_prelookup1,
           BaseEngineController_LS_B.s422_motohawk_prelookup1, (real_T *)
           ((BaseSparkEnergyMap_DataStore())), 9, 9);
        (BaseSparkEnergy_DataStore()) =
          BaseEngineController_LS_B.s113_motohawk_interpolation_2d1;
      }

      /* Update for UnitDelay: '<S263>/Initial Condition is True' incorporates:
       *  Constant: '<S263>/False After First Sample'
       */
      BaseEngineController_LS_DWork.s263_InitialConditionisTrue_DSTATE = FALSE;

      /* Update for UnitDelay: '<S260>/Unit Delay' */
      BaseEngineController_LS_DWork.s260_UnitDelay_DSTATE =
        BaseEngineController_LS_B.s260_Switch;
    }
  }
}
