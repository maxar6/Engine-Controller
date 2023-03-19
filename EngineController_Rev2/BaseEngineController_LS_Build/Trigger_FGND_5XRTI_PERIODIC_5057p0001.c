/*
 * Trigger_FGND_5XRTI_PERIODIC_5057p0001.c
 *
 * Code generation for model "BaseEngineController_LS.mdl".
 *
 * Model version              : 1.2195
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Sun Nov 27 15:42:41 2022
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_LS.h"
#include "BaseEngineController_LS_private.h"

void Trigger_FGND_5XRTI_PERIODIC_5057p0001(void)
{
  /* Named constants for Stateflow: '<S942>/ECUP Latch' */
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

      /* S-Function Block: <S151>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d = TableInterpolation1D_real_T
          (BaseEngineController_LS_B.s439_motohawk_prelookup, (real_T *)
           ((DFCOEntryRPMTbl_DataStore())), 5);
        (DFCOEntryRPM_DataStore()) = rtb_motohawk_interpolation_1d;
      }

      /* RelationalOperator: '<S151>/Relational Operator' incorporates:
       *  S-Function (motohawk_sfun_interpolation_1d): '<S151>/motohawk_interpolation_1d'
       */
      rtb_RelationalOperator_a = (BaseEngineController_LS_B.s567_Sum1 >=
        rtb_motohawk_interpolation_1d);

      /* RelationalOperator: '<S151>/Relational Operator1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S151>/motohawk_calibration1'
       */
      rtb_RelationalOperator1_l = (BaseEngineController_LS_B.s451_Switch1 <=
        (DFCOEntryAPP_DataStore()));

      /* RelationalOperator: '<S151>/Relational Operator2' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S151>/motohawk_calibration2'
       */
      rtb_LogicalOperator2_l = (BaseEngineController_LS_B.s618_Merge <= (real_T)
                                ((uint8_T)(DFCOEntryMAP_DataStore())));

      /* S-Function (motohawk_sfun_fault_action): '<S151>/motohawk_fault_action'
       *
       * Regarding '<S151>/motohawk_fault_action':
         Get Fault Action Status: DFCODisable
       */
      {
        extern boolean_T GetFaultActionStatus(uint32_T action);
        rtb_LogicalOperator4 = GetFaultActionStatus(1);
      }

      /* Logic: '<S151>/Logical Operator1' */
      rtb_LogicalOperator1_d = !rtb_LogicalOperator4;

      /* Logic: '<S151>/Logical Operator' incorporates:
       *  RelationalOperator: '<S151>/Relational Operator3'
       *  S-Function (motohawk_sfun_calibration): '<S151>/motohawk_calibration3'
       *  S-Function (motohawk_sfun_calibration): '<S151>/motohawk_calibration4'
       *  S-Function (motohawk_sfun_data_read): '<S151>/motohawk_data_read'
       *  Sum: '<S151>/Sum1'
       */
      BaseEngineController_LS_B.s151_LogicalOperator =
        ((rtb_RelationalOperator_a && rtb_RelationalOperator1_l &&
          rtb_LogicalOperator2_l && rtb_LogicalOperator1_d &&
          (DFCOEnable_DataStore()) && (BaseEngineController_LS_B.s567_Sum1 >=
           MinGovRPMSetPt_DataStore() + (real_T)((int16_T)
            (DFCOEnterIdleSpeed_DataStore())))));

      /* S-Function Block: <S154>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s154_motohawk_delta_time_DWORK1, NULL);
        rtb_motohawk_delta_time_p = ((real_T) delta) * 0.000001;
      }

      /* Switch: '<S154>/Switch' incorporates:
       *  Constant: '<S154>/Constant'
       *  S-Function (motohawk_sfun_data_read): '<S154>/motohawk_data_read'
       *  S-Function (motohawk_sfun_delta_time): '<S154>/motohawk_delta_time'
       *  Sum: '<S154>/Sum'
       */
      if (BaseEngineController_LS_B.s151_LogicalOperator) {
        rtb_Switch_f = rtb_motohawk_delta_time_p + DFCOEnterTimer_DataStore();
      } else {
        rtb_Switch_f = 0.0;
      }

      /* End of Switch: '<S154>/Switch' */
      /* Logic: '<S151>/Logical Operator2' incorporates:
       *  RelationalOperator: '<S151>/Relational Operator4'
       *  S-Function (motohawk_sfun_calibration): '<S151>/motohawk_calibration5'
       */
      rtb_LogicalOperator2_l = (BaseEngineController_LS_B.s151_LogicalOperator &&
                                (rtb_Switch_f >= (DFCODelayTime_DataStore())));

      /* RelationalOperator: '<S151>/Relational Operator5' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S151>/motohawk_calibration9'
       *  S-Function (motohawk_sfun_data_read): '<S151>/motohawk_data_read'
       *  Sum: '<S151>/Sum'
       */
      rtb_RelationalOperator_a = (BaseEngineController_LS_B.s567_Sum1 <=
        MinGovRPMSetPt_DataStore() + (real_T)((int16_T)
        (DFCOExitIdleSpeed_DataStore())));

      /* S-Function Block: <S151>/motohawk_interpolation_1d1 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d1 = TableInterpolation1D_real_T
          (BaseEngineController_LS_B.s439_motohawk_prelookup, (real_T *)
           ((DFCOExitRPMTbl_DataStore())), 5);
        (DFCOExitRPM_DataStore()) = rtb_motohawk_interpolation_1d1;
      }

      /* RelationalOperator: '<S151>/Relational Operator8' incorporates:
       *  S-Function (motohawk_sfun_interpolation_1d): '<S151>/motohawk_interpolation_1d1'
       */
      rtb_RelationalOperator1_l = (BaseEngineController_LS_B.s567_Sum1 <=
        rtb_motohawk_interpolation_1d1);

      /* RelationalOperator: '<S151>/Relational Operator6' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S151>/motohawk_calibration6'
       */
      rtb_LogicalOperator1_d = (BaseEngineController_LS_B.s451_Switch1 >=
        (DFCOExitAPP_DataStore()));

      /* Logic: '<S151>/Logical Operator4' incorporates:
       *  Logic: '<S151>/Logical Operator3'
       *  RelationalOperator: '<S151>/Relational Operator7'
       *  S-Function (motohawk_sfun_calibration): '<S151>/motohawk_calibration7'
       */
      rtb_LogicalOperator4 = ((rtb_RelationalOperator_a &&
        rtb_RelationalOperator1_l && rtb_LogicalOperator1_d &&
        (BaseEngineController_LS_B.s618_Merge >= (real_T)((uint8_T)
        (DFCOExitMAP_DataStore())))) || rtb_LogicalOperator4);

      /* CombinatorialLogic: '<S153>/Combinatorial  Logic' */
      {
        uint_T rowidx= 0;

        /* Compute the truth table row index corresponding to the input */
        rowidx = (rowidx << 1) + (uint_T)(rtb_LogicalOperator2_l != 0);
        rowidx = (rowidx << 1) + (uint_T)(rtb_LogicalOperator4 != 0);

        /* Copy the appropriate row of the table into the block output vector */
        rtb_CombinatorialLogic[0] =
          BaseEngineController_LS_ConstP.pooled893[rowidx];
        rtb_CombinatorialLogic[1] =
          BaseEngineController_LS_ConstP.pooled893[rowidx + 4];
      }

      /* Switch: '<S153>/Switch1' incorporates:
       *  UnitDelay: '<S153>/Unit Delay'
       */
      if (rtb_CombinatorialLogic[1]) {
        BaseEngineController_LS_B.s153_Switch1 = rtb_CombinatorialLogic[0];
      } else {
        BaseEngineController_LS_B.s153_Switch1 =
          BaseEngineController_LS_DWork.s153_UnitDelay_DSTATE;
      }

      /* End of Switch: '<S153>/Switch1' */

      /* S-Function Block: <S152>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s152_motohawk_delta_time_DWORK1, NULL);
        rtb_motohawk_delta_time_e = ((real_T) delta) * 0.000001;
      }

      /* MultiPortSwitch: '<S152>/Multiport Switch' incorporates:
       *  Gain: '<S152>/Ramp Down'
       *  Product: '<S152>/Product'
       *  Product: '<S152>/Product1'
       *  S-Function (motohawk_sfun_delta_time): '<S152>/motohawk_delta_time'
       */
      if (BaseEngineController_LS_B.s153_Switch1 == FALSE) {
        /* Switch: '<S152>/Switch' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S151>/motohawk_calibration11'
         *  S-Function (motohawk_sfun_delta_time): '<S152>/motohawk_delta_time'
         */
        if ((DFCOExitRampTime_DataStore()) > 0.0) {
          rtb_Switch1_p = (DFCOExitRampTime_DataStore());
        } else {
          rtb_Switch1_p = rtb_motohawk_delta_time_e;
        }

        /* End of Switch: '<S152>/Switch' */
        rtb_Switch1_p = rtb_motohawk_delta_time_e / rtb_Switch1_p * -1.0;
      } else {
        /* Switch: '<S152>/Switch1' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S151>/motohawk_calibration8'
         *  S-Function (motohawk_sfun_delta_time): '<S152>/motohawk_delta_time'
         */
        if ((DFCOEnterRampTime_DataStore()) > 0.0) {
          rtb_Switch1_p = (DFCOEnterRampTime_DataStore());
        } else {
          rtb_Switch1_p = rtb_motohawk_delta_time_e;
        }

        /* End of Switch: '<S152>/Switch1' */
        rtb_Switch1_p = rtb_motohawk_delta_time_e / rtb_Switch1_p;
      }

      /* End of MultiPortSwitch: '<S152>/Multiport Switch' */

      /* Sum: '<S152>/Sum' incorporates:
       *  UnitDelay: '<S152>/state'
       */
      rtb_Switch1_p += BaseEngineController_LS_DWork.s152_state_DSTATE;

      /* MinMax: '<S155>/MinMax1' incorporates:
       *  Constant: '<S152>/Constant'
       *  Constant: '<S152>/Constant1'
       *  MinMax: '<S155>/MinMax'
       */
      rtb_Switch1_p = rtb_Switch1_p >= 0.0 ? rtb_Switch1_p : 0.0;
      rtb_Switch1_p = rtb_Switch1_p <= 1.0 ? rtb_Switch1_p : 1.0;

      /* Inport: '<S109>/EquivRatioInfo' */
      BaseEngineController_LS_B.s109_EquivRatioInfo[0] =
        BaseEngineController_LS_B.s107_DesEquivRatio;
      BaseEngineController_LS_B.s109_EquivRatioInfo[1] =
        BaseEngineController_LS_B.s107_WarmUpRatio;
      BaseEngineController_LS_B.s109_EquivRatioInfo[2] =
        BaseEngineController_LS_B.s131_Switch;
      BaseEngineController_LS_B.s109_EquivRatioInfo[3] =
        BaseEngineController_LS_B.s107_IATEnrichment;
      BaseEngineController_LS_B.s109_EquivRatioInfo[4] =
        BaseEngineController_LS_B.s107_CATEnrichment;

      /* Product: '<S151>/Product1' incorporates:
       *  Constant: '<S151>/Constant'
       *  MinMax: '<S155>/MinMax1'
       *  Sum: '<S151>/Sum2'
       */
      BaseEngineController_LS_B.s151_Product1 = (1.0 - rtb_Switch1_p) *
        BaseEngineController_LS_B.s109_EquivRatioInfo[0];

      /* Product: '<S151>/Product2' incorporates:
       *  MinMax: '<S155>/MinMax1'
       *  S-Function (motohawk_sfun_calibration): '<S151>/motohawk_calibration10'
       */
      BaseEngineController_LS_B.s151_SpkOut = rtb_Switch1_p * (real_T)((int16_T)
        (DFCOExitSparkRet_DataStore()));

      /* Saturate: '<S154>/Saturation' */
      rtb_Saturation_a = rtb_Switch_f >= 16000.0 ? 16000.0 : rtb_Switch_f <= 0.0
        ? 0.0 : rtb_Switch_f;

      /* S-Function (motohawk_sfun_data_write): '<S154>/motohawk_data_write' */
      /* Write to Data Storage as scalar: DFCOEnterTimer */
      {
        DFCOEnterTimer_DataStore() = rtb_Saturation_a;
      }

      /* Update for UnitDelay: '<S153>/Unit Delay' */
      BaseEngineController_LS_DWork.s153_UnitDelay_DSTATE =
        BaseEngineController_LS_B.s153_Switch1;

      /* Update for UnitDelay: '<S152>/state' incorporates:
       *  MinMax: '<S155>/MinMax1'
       */
      BaseEngineController_LS_DWork.s152_state_DSTATE = rtb_Switch1_p;
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

      /* Sum: '<S228>/Sum2' incorporates:
       *  UnitDelay: '<S228>/Unit Delay'
       */
      rtb_Sum2_g = BaseEngineController_LS_B.s493_RPMInst -
        BaseEngineController_LS_DWork.s228_UnitDelay_DSTATE;

      /* S-Function Block: <S228>/motohawk_delta_time */
      rtb_motohawk_delta_time_h = 0.005;

      /* Product: '<S228>/Product' incorporates:
       *  S-Function (motohawk_sfun_delta_time): '<S228>/motohawk_delta_time'
       */
      rtb_Sum2_g /= rtb_motohawk_delta_time_h;

      /* S-Function Block: <S229>/motohawk_delta_time */
      rtb_Switch_e0 = 0.005;

      /* Product: '<S229>/Product' incorporates:
       *  MinMax: '<S229>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S229>/motohawk_calibration'
       */
      rtb_Switch_e0 /= (rtb_Switch_e0 >= (RPMFallingFiltConst_DataStore())) ||
        rtIsNaN((RPMFallingFiltConst_DataStore())) ? rtb_Switch_e0 :
        (RPMFallingFiltConst_DataStore());

      /* Sum: '<S230>/Sum1' incorporates:
       *  Constant: '<S230>/Constant'
       *  Product: '<S230>/Product'
       *  Product: '<S230>/Product1'
       *  Sum: '<S230>/Sum'
       *  UnitDelay: '<S230>/Unit Delay'
       */
      rtb_Sum1_f = (1.0 - rtb_Switch_e0) *
        BaseEngineController_LS_DWork.s230_UnitDelay_DSTATE + rtb_Sum2_g *
        rtb_Switch_e0;

      /* RelationalOperator: '<S224>/Relational Operator' incorporates:
       *  Gain: '<S224>/Falling RPM is Negative Derivative'
       *  S-Function (motohawk_sfun_calibration): '<S224>/motohawk_calibration'
       */
      BaseEngineController_LS_B.s224_RelationalOperator = ((rtb_Sum1_f <
        -(RPMFallingRate_DataStore())));

      /* DataTypeConversion: '<S210>/Data Type Conversion' */
      if (rtIsNaN(BaseEngineController_LS_B.s493_RPMInst) || rtIsInf
          (BaseEngineController_LS_B.s493_RPMInst)) {
        rtb_Sum2_g = 0.0;
      } else {
        rtb_Sum2_g = fmod(floor(BaseEngineController_LS_B.s493_RPMInst), 65536.0);
      }

      rtb_DataTypeConversion_f = (int16_T)(rtb_Sum2_g < 0.0 ? (int16_T)-(int16_T)
        (uint16_T)-rtb_Sum2_g : (int16_T)(uint16_T)rtb_Sum2_g);

      /* End of DataTypeConversion: '<S210>/Data Type Conversion' */

      /* Outputs for Atomic SubSystem: '<S114>/Base RPM Set Pt' */

      /* S-Function Block: <S208>/motohawk_interpolation_1d2 */
      {
        extern int16_T TableInterpolation1D_int16_T(uint16_T idx, int16_T
          *tbl_data, uint32_T sz);
        rtb_motohawk_interpolation_1d2_i = TableInterpolation1D_int16_T
          (BaseEngineController_LS_B.s439_motohawk_prelookup, (int16_T *)
           ((MinGovClntRPMSetPtTbl_DataStore())), 5);
        (MinGovClntRPMSetPt_DataStore()) = rtb_motohawk_interpolation_1d2_i;
      }

      /* End of Outputs for SubSystem: '<S114>/Base RPM Set Pt' */

      /* Sum: '<S210>/Sum' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S210>/motohawk_calibration4'
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

      /* End of Sum: '<S210>/Sum' */

      /* RelationalOperator: '<S210>/Relational Operator' incorporates:
       *  Sum: '<S210>/Sum'
       */
      BaseEngineController_LS_B.s210_RelationalOperator =
        ((rtb_DataTypeConversion_f < tmp));

      /* Sum: '<S210>/Sum2' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S210>/motohawk_calibration6'
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

      /* End of Sum: '<S210>/Sum2' */

      /* RelationalOperator: '<S210>/Relational Operator3' incorporates:
       *  Sum: '<S210>/Sum2'
       */
      BaseEngineController_LS_B.s210_RelationalOperator3 =
        ((rtb_DataTypeConversion_f < tmp));

      /* MultiPortSwitch: '<S210>/Multiport Switch1' incorporates:
       *  S-Function (motohawk_sfun_data_read): '<S210>/motohawk_data_read1'
       */
      if (AirControlSource_DataStore() == FALSE) {
        rtb_Switch_e0 = BaseEngineController_LS_B.s451_Switch1;
      } else {
        rtb_Switch_e0 = BaseEngineController_LS_B.s458_Switch2;
      }

      /* End of MultiPortSwitch: '<S210>/Multiport Switch1' */
      /* RelationalOperator: '<S210>/Relational Operator1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S210>/motohawk_calibration5'
       */
      BaseEngineController_LS_B.s210_RelationalOperator1 = ((rtb_Switch_e0 <
        (MinGovEntryAirPcnt_DataStore())));

      /* MultiPortSwitch: '<S210>/Multiport Switch' incorporates:
       *  Constant: '<S210>/Constant'
       *  RelationalOperator: '<S210>/Relational Operator4'
       *  S-Function (motohawk_sfun_data_read): '<S210>/motohawk_data_read1'
       *  UnitDelay: '<S114>/Unit Delay3'
       */
      if (AirControlSource_DataStore() == FALSE) {
        rtb_RelationalOperator2_e = (BaseEngineController_LS_B.s466_Sum2 >
          BaseEngineController_LS_DWork.s114_UnitDelay3_DSTATE);
      } else {
        rtb_RelationalOperator2_e = TRUE;
      }

      /* End of MultiPortSwitch: '<S210>/Multiport Switch' */

      /* Logic: '<S210>/Logical Operator' incorporates:
       *  RelationalOperator: '<S210>/Relational Operator2'
       *  S-Function (motohawk_sfun_calibration): '<S210>/motohawk_calibration3'
       *  S-Function (motohawk_sfun_calibration): '<S210>/motohawk_calibration5'
       *  Sum: '<S210>/Sum1'
       */
      BaseEngineController_LS_B.s210_LogicalOperator = (((rtb_Switch_e0 >=
        (MinGovEntryAirPcnt_DataStore()) + (MinGovAirPcntHyst_DataStore())) &&
        rtb_RelationalOperator2_e));

      /* S-Function Block: <S227>/motohawk_delta_time */
      rtb_motohawk_delta_time_d = 0.005;

      /* Switch: '<S227>/Switch' incorporates:
       *  Constant: '<S227>/Constant'
       *  S-Function (motohawk_sfun_data_read): '<S227>/motohawk_data_read'
       *  S-Function (motohawk_sfun_delta_time): '<S227>/motohawk_delta_time'
       *  Sum: '<S227>/Sum'
       */
      if (BaseEngineController_LS_B.s210_RelationalOperator1) {
        rtb_Switch_e0 = rtb_motohawk_delta_time_d + IdleEnterTimer_DataStore();
      } else {
        rtb_Switch_e0 = 0.0;
      }

      /* End of Switch: '<S227>/Switch' */
      /* RelationalOperator: '<S210>/Relational Operator5' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S210>/motohawk_calibration2'
       */
      BaseEngineController_LS_B.s210_RelationalOperator5 = ((rtb_Switch_e0 >
        (MinGovEntryAirTimeThresh_DataStore())));

      /* Stateflow: '<S210>/IdleStateMachine' */
      BaseEngineController_LS_IdleStateMachine();

      /* RelationalOperator: '<S226>/RelOp' incorporates:
       *  Constant: '<S226>/Constant'
       */
      BaseEngineController_LS_B.s226_RelOp =
        ((BaseEngineController_LS_B.s225_IdleState == 2));

      /* UnitDelay: '<S114>/Unit Delay1' */
      rtb_UnitDelay1_j = BaseEngineController_LS_DWork.s114_UnitDelay1_DSTATE;

      /* Outputs for Enabled SubSystem: '<S114>/Base Airflow Table Adapt' incorporates:
       *  EnablePort: '<S207>/Enable'
       */
      if (BaseEngineController_LS_B.s226_RelOp) {
        /* Product: '<S207>/Product0' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S207>/motohawk_calibration2'
         */
        rtb_Sum2_g = rtb_UnitDelay1_j * (BaseAirflowAdaptGain_DataStore());

        /* MinMax: '<S222>/MinMax' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S220>/motohawk_calibration'
         */
        rtb_Sum2_g = (rtb_Sum2_g >= (BaseAirflowAdaptErrorLwrLim_DataStore())) ||
          rtIsNaN((BaseAirflowAdaptErrorLwrLim_DataStore())) ? rtb_Sum2_g :
          (BaseAirflowAdaptErrorLwrLim_DataStore());

        /* MinMax: '<S222>/MinMax1' incorporates:
         *  MinMax: '<S222>/MinMax'
         *  S-Function (motohawk_sfun_calibration): '<S220>/motohawk_calibration1'
         */
        rtb_MinMax1_a = (rtb_Sum2_g <= (BaseAirflowAdaptErrorUprLim_DataStore()))
          || rtIsNaN((BaseAirflowAdaptErrorUprLim_DataStore())) ? rtb_Sum2_g :
          (BaseAirflowAdaptErrorUprLim_DataStore());

        /* Outputs for Atomic SubSystem: '<S207>/Idle Control Enable Delay' */

        /* S-Function Block: <S221>/motohawk_delta_time */
        rtb_motohawk_delta_time_ez = 0.005;

        /* Switch: '<S221>/Switch' incorporates:
         *  Constant: '<S221>/Constant'
         *  S-Function (motohawk_sfun_data_read): '<S221>/motohawk_data_read'
         *  S-Function (motohawk_sfun_delta_time): '<S221>/motohawk_delta_time'
         *  Sum: '<S221>/Sum'
         */
        if (BaseEngineController_LS_B.s226_RelOp) {
          rtb_Sum2_g = rtb_motohawk_delta_time_ez + BaseAirflowTimer_DataStore();
        } else {
          rtb_Sum2_g = 0.0;
        }

        /* End of Switch: '<S221>/Switch' */
        /* RelationalOperator: '<S219>/Relational Operator' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S219>/motohawk_calibration1'
         */
        rtb_RelationalOperator2_e = (rtb_Sum2_g >
          (BaseAirflowAdaptDelayTime_DataStore()));

        /* Saturate: '<S221>/Saturation' */
        rtb_Saturation_cl = rtb_Sum2_g >= 16000.0 ? 16000.0 : rtb_Sum2_g <= 0.0 ?
          0.0 : rtb_Sum2_g;

        /* S-Function (motohawk_sfun_data_write): '<S221>/motohawk_data_write' */
        /* Write to Data Storage as scalar: BaseAirflowTimer */
        {
          BaseAirflowTimer_DataStore() = rtb_Saturation_cl;
        }

        /* End of Outputs for SubSystem: '<S207>/Idle Control Enable Delay' */

        /* Logic: '<S207>/Logical Operator1' incorporates:
         *  Abs: '<S207>/Abs'
         *  RelationalOperator: '<S207>/Relational Operator'
         *  S-Function (motohawk_sfun_calibration): '<S207>/motohawk_calibration3'
         *  S-Function (motohawk_sfun_calibration): '<S207>/motohawk_calibration4'
         */
        BaseEngineController_LS_B.s207_LogicalOperator1 =
          (((BaseAirflowAdaptEnable_DataStore()) && rtb_RelationalOperator2_e &&
            (fabs(rtb_UnitDelay1_j) <= (BaseAirflowAdaptDelta_DataStore()))));

        /* Outputs for Enabled SubSystem: '<S207>/Adapt Base Airflow Table' incorporates:
         *  EnablePort: '<S218>/Enable'
         */
        if (BaseEngineController_LS_B.s207_LogicalOperator1) {
          /* S-Function Block: <S218>/motohawk_adapt_table */
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

        /* End of Outputs for SubSystem: '<S207>/Adapt Base Airflow Table' */
      }

      /* End of Outputs for SubSystem: '<S114>/Base Airflow Table Adapt' */
      /* S-Function Block: <S209>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s209_motohawk_delta_time_DWORK1, NULL);
        rtb_motohawk_delta_time_c = ((real_T) delta) * 0.000001;
      }

      /* MultiPortSwitch: '<S209>/Multiport Switch' incorporates:
       *  Gain: '<S209>/Ramp Down'
       *  Product: '<S209>/Product'
       *  Product: '<S209>/Product1'
       *  S-Function (motohawk_sfun_delta_time): '<S209>/motohawk_delta_time'
       */
      if (BaseEngineController_LS_B.s226_RelOp == FALSE) {
        /* Switch: '<S209>/Switch' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S114>/motohawk_calibration3'
         *  S-Function (motohawk_sfun_delta_time): '<S209>/motohawk_delta_time'
         */
        if ((IdleExitTimeConst_DataStore()) > 0.0) {
          rtb_Sum2_g = (IdleExitTimeConst_DataStore());
        } else {
          rtb_Sum2_g = rtb_motohawk_delta_time_c;
        }

        /* End of Switch: '<S209>/Switch' */
        rtb_Product5 = rtb_motohawk_delta_time_c / rtb_Sum2_g * -1.0;
      } else {
        rtb_Product5 = rtb_motohawk_delta_time_c / rtb_motohawk_delta_time_c;
      }

      /* End of MultiPortSwitch: '<S209>/Multiport Switch' */

      /* Sum: '<S209>/Sum' incorporates:
       *  UnitDelay: '<S209>/state'
       */
      rtb_Product5 += BaseEngineController_LS_DWork.s209_state_DSTATE;

      /* MinMax: '<S223>/MinMax1' incorporates:
       *  Constant: '<S209>/Constant'
       *  Constant: '<S209>/Constant1'
       *  MinMax: '<S223>/MinMax'
       */
      rtb_Sum2_g = rtb_Product5 >= 0.0 ? rtb_Product5 : 0.0;
      BaseEngineController_LS_B.s223_MinMax1 = rtb_Sum2_g <= 1.0 ? rtb_Sum2_g :
        1.0;

      /* RelationalOperator: '<S212>/RelOp' incorporates:
       *  Constant: '<S212>/Constant'
       */
      rtb_RelationalOperator2_e = (BaseEngineController_LS_B.s223_MinMax1 == 0.0);

      /* UnitDelay: '<S114>/Unit Delay2' */
      rtb_Sum2_g = BaseEngineController_LS_DWork.s114_UnitDelay2_DSTATE;

      /* HitCross: '<S114>/Hit  Crossing1' incorporates:
       *  UnitDelay: '<S114>/Unit Delay2'
       */
      zcEvent = rt_ZCFcn(FALLING_ZERO_CROSSING,
                         &BaseEngineController_LS_PrevZCSigState.HitCrossing1_Input_ZCE,
                         (BaseEngineController_LS_DWork.s114_UnitDelay2_DSTATE -
                          0.5));
      if (BaseEngineController_LS_DWork.s114_HitCrossing1_MODE == 0) {
        if (zcEvent != NO_ZCEVENT) {
          BaseEngineController_LS_B.s114_HitCrossing1 =
            !BaseEngineController_LS_B.s114_HitCrossing1;
          BaseEngineController_LS_DWork.s114_HitCrossing1_MODE = 1;
        } else {
          if (BaseEngineController_LS_B.s114_HitCrossing1 && (rtb_Sum2_g != 0.5))
          {
            BaseEngineController_LS_B.s114_HitCrossing1 = FALSE;
          }
        }
      } else {
        if (rtb_Sum2_g != 0.5) {
          BaseEngineController_LS_B.s114_HitCrossing1 = FALSE;
        }

        BaseEngineController_LS_DWork.s114_HitCrossing1_MODE = 0;
      }

      /* End of HitCross: '<S114>/Hit  Crossing1' */

      /* Logic: '<S114>/Logical Operator' */
      BaseEngineController_LS_B.s114_LogicalOperator =
        ((rtb_RelationalOperator2_e ||
          BaseEngineController_LS_B.s114_HitCrossing1));

      /* DataTypeConversion: '<S114>/Data Type Conversion' */
      rtb_DataTypeConversion_c = (real_T)rtb_motohawk_interpolation_1d2_i;

      /* Logic: '<S213>/Logical Operator' */
      rtb_LogicalOperator_i = !BaseEngineController_LS_B.s226_RelOp;

      /* S-Function Block: <S213>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s213_motohawk_delta_time_DWORK1, NULL);
        rtb_motohawk_delta_time_b = ((real_T) delta) * 0.000001;
      }

      /* UnitDelay: '<S213>/Unit Delay' */
      rtb_Sum2_g = BaseEngineController_LS_DWork.s213_UnitDelay_DSTATE;

      /* Switch: '<S213>/Preload lowpass filter with current RPM while not on Idle' incorporates:
       *  Constant: '<S213>/Constant'
       *  Product: '<S213>/Product2'
       *  Product: '<S213>/Product3'
       *  Sum: '<S213>/Sum'
       *  Sum: '<S213>/Sum1'
       */
      if (rtb_LogicalOperator_i) {
        rtb_Product5 = BaseEngineController_LS_B.s493_RPMInst;
      } else {
        /* Product: '<S213>/Product1' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S213>/motohawk_calibration2'
         *  S-Function (motohawk_sfun_delta_time): '<S213>/motohawk_delta_time'
         */
        rtb_UnitDelay1_j = rtb_motohawk_delta_time_b /
          (InGearRPMCtrlEntryFiltC_DataStore());
        rtb_Product5 = (1.0 - rtb_UnitDelay1_j) * rtb_Sum2_g +
          rtb_DataTypeConversion_c * rtb_UnitDelay1_j;
      }

      /* End of Switch: '<S213>/Preload lowpass filter with current RPM while not on Idle' */

      /* MinMax: '<S213>/Don't allow setpoint to ever drop below the TargetRPM' */
      BaseEngineController_LS_B.s213_DontallowsetpointtoeverdropbelowtheTargetRPM
        = (rtb_DataTypeConversion_c >= rtb_Product5) || rtIsNaN(rtb_Product5) ?
        rtb_DataTypeConversion_c : rtb_Product5;

      /* Sum: '<S239>/Sum2' */
      BaseEngineController_LS_B.s239_Sum2 =
        BaseEngineController_LS_B.s213_DontallowsetpointtoeverdropbelowtheTargetRPM
        - BaseEngineController_LS_B.s567_Sum1;

      /* Product: '<S239>/Product5' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S215>/motohawk_calibration5'
       */
      rtb_Product5 = BaseEngineController_LS_B.s239_Sum2 *
        (AirMinGovErrorGain_DataStore());

      /* S-Function Block: <S215>/motohawk_prelookup1 */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (AirMinGovSpeedErrorIn_DataStore()) =
          BaseEngineController_LS_B.s239_Sum2;
        (AirMinGovSpeedErrorIdx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_LS_B.s239_Sum2,
           (AirMinGovSpeedErrorIdxArr_DataStore()), 9,
           (AirMinGovSpeedErrorIdx_DataStore()));
        rtb_motohawk_prelookup1 = (AirMinGovSpeedErrorIdx_DataStore());
      }

      /* S-Function Block: <S237>/motohawk_interpolation_1d2 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d2 = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1, (real_T *)
           ((AirMinGovPGainErrorMultTbl_DataStore())), 9);
        (AirMinGovPGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d2;
      }

      /* Product: '<S239>/Product2' incorporates:
       *  Product: '<S237>/Product2'
       *  S-Function (motohawk_sfun_calibration): '<S237>/motohawk_calibration3'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S237>/motohawk_interpolation_1d2'
       *  S-Function (motohawk_sfun_prelookup): '<S215>/motohawk_prelookup1'
       */
      BaseEngineController_LS_B.s239_Product2 = (AirMinGovPGain_DataStore()) *
        rtb_motohawk_interpolation_1d2 * rtb_Product5;

      /* UnitDelay: '<S240>/Unit Delay' */
      rtb_Sum2_g = BaseEngineController_LS_DWork.s240_UnitDelay_DSTATE;

      /* S-Function Block: <S237>/motohawk_interpolation_1d3 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d3 = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1, (real_T *)
           ((AirMinGovDGainErrorMultTbl_DataStore())), 9);
        (AirMinGovDGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d3;
      }

      /* Product: '<S239>/Product4' incorporates:
       *  Product: '<S237>/Product3'
       *  S-Function (motohawk_sfun_calibration): '<S237>/motohawk_calibration2'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S237>/motohawk_interpolation_1d3'
       *  S-Function (motohawk_sfun_prelookup): '<S215>/motohawk_prelookup1'
       */
      rtb_Product4 = (AirMinGovDGain_DataStore()) *
        rtb_motohawk_interpolation_1d3 * rtb_Product5;

      /* S-Function Block: <S240>/motohawk_delta_time */
      rtb_motohawk_delta_time_bi = 0.005;

      /* Product: '<S240>/Product' incorporates:
       *  S-Function (motohawk_sfun_delta_time): '<S240>/motohawk_delta_time'
       *  Sum: '<S240>/Sum2'
       */
      BaseEngineController_LS_B.s240_Product = (rtb_Product4 - rtb_Sum2_g) /
        rtb_motohawk_delta_time_bi;

      /* Switch: '<S241>/Switch1' incorporates:
       *  Constant: '<S215>/Constant'
       *  UnitDelay: '<S241>/Unit Delay'
       */
      if (BaseEngineController_LS_B.s114_LogicalOperator) {
        BaseEngineController_LS_B.s241_Switch1 = 0.0;
      } else {
        BaseEngineController_LS_B.s241_Switch1 =
          BaseEngineController_LS_DWork.s241_UnitDelay_DSTATE;
      }

      /* End of Switch: '<S241>/Switch1' */

      /* Switch: '<S215>/Switch' incorporates:
       *  Constant: '<S215>/Constant1'
       */
      if (BaseEngineController_LS_B.s114_LogicalOperator) {
        rtb_UnitDelay1_j = 0.0;
      } else {
        /* MinMax: '<S238>/MinMax' incorporates:
         *  Sum: '<S239>/Sum1'
         */
        rtb_Sum2_g = (BaseEngineController_LS_B.s239_Product2 +
                      BaseEngineController_LS_B.s240_Product) +
          BaseEngineController_LS_B.s241_Switch1;

        /* MinMax: '<S238>/MinMax1' incorporates:
         *  MinMax: '<S238>/MinMax'
         *  S-Function (motohawk_sfun_calibration): '<S215>/motohawk_calibration2'
         *  S-Function (motohawk_sfun_calibration): '<S215>/motohawk_calibration9'
         */
        rtb_Sum2_g = (rtb_Sum2_g >= (AirMinGovPIDOutLowerLimit_DataStore())) ||
          rtIsNaN((AirMinGovPIDOutLowerLimit_DataStore())) ? rtb_Sum2_g :
          (AirMinGovPIDOutLowerLimit_DataStore());
        rtb_UnitDelay1_j = (rtb_Sum2_g <= (AirMinGovPIDOutUpperLimit_DataStore()))
          || rtIsNaN((AirMinGovPIDOutUpperLimit_DataStore())) ? rtb_Sum2_g :
          (AirMinGovPIDOutUpperLimit_DataStore());
      }

      /* End of Switch: '<S215>/Switch' */

      /* Product: '<S114>/Product1' */
      BaseEngineController_LS_B.s114_MinGovAirPID =
        BaseEngineController_LS_B.s223_MinMax1 * rtb_UnitDelay1_j;

      /* Sum: '<S234>/Sum1' */
      BaseEngineController_LS_B.s234_Sum1 =
        BaseEngineController_LS_B.s213_DontallowsetpointtoeverdropbelowtheTargetRPM
        - BaseEngineController_LS_B.s567_Sum1;

      /* Product: '<S234>/Product4' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S214>/motohawk_calibration4'
       */
      rtb_UnitDelay1_j = BaseEngineController_LS_B.s234_Sum1 *
        (SpkMinGovErrorGain_DataStore());

      /* S-Function Block: <S214>/motohawk_prelookup1 */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (SpkMinGovSpeedErrorIn_DataStore()) =
          BaseEngineController_LS_B.s234_Sum1;
        (SpkMinGovSpeedErrorIdx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_LS_B.s234_Sum1,
           (SpkMinGovSpeedErrorIdxArr_DataStore()), 9,
           (SpkMinGovSpeedErrorIdx_DataStore()));
        rtb_motohawk_prelookup1_j = (SpkMinGovSpeedErrorIdx_DataStore());
      }

      /* S-Function Block: <S232>/motohawk_interpolation_1d2 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d2_f = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1_j, (real_T *)
           ((SpkMinGovPGainErrorMultTbl_DataStore())), 9);
        (SpkMinGovPGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d2_f;
      }

      /* Product: '<S234>/Product' incorporates:
       *  Product: '<S232>/Product2'
       *  S-Function (motohawk_sfun_calibration): '<S232>/motohawk_calibration3'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S232>/motohawk_interpolation_1d2'
       *  S-Function (motohawk_sfun_prelookup): '<S214>/motohawk_prelookup1'
       */
      BaseEngineController_LS_B.s234_Product = (SpkMinGovPGain_DataStore()) *
        rtb_motohawk_interpolation_1d2_f * rtb_UnitDelay1_j;

      /* UnitDelay: '<S235>/Unit Delay' */
      rtb_Sum2_g = BaseEngineController_LS_DWork.s235_UnitDelay_DSTATE;

      /* S-Function Block: <S232>/motohawk_interpolation_1d1 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d1_g = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1_j, (real_T *)
           ((SpkMinGovDGainErrorMultTbl_DataStore())), 9);
        (SpkMinGovDGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d1_g;
      }

      /* Product: '<S234>/Product2' incorporates:
       *  Product: '<S232>/Product1'
       *  S-Function (motohawk_sfun_calibration): '<S232>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S232>/motohawk_interpolation_1d1'
       *  S-Function (motohawk_sfun_prelookup): '<S214>/motohawk_prelookup1'
       */
      rtb_Product2_j = (SpkMinGovDGain_DataStore()) *
        rtb_motohawk_interpolation_1d1_g * rtb_UnitDelay1_j;

      /* S-Function Block: <S235>/motohawk_delta_time */
      rtb_motohawk_delta_time_n = 0.005;

      /* Product: '<S235>/Product' incorporates:
       *  S-Function (motohawk_sfun_delta_time): '<S235>/motohawk_delta_time'
       *  Sum: '<S235>/Sum2'
       */
      BaseEngineController_LS_B.s235_Product = (rtb_Product2_j - rtb_Sum2_g) /
        rtb_motohawk_delta_time_n;

      /* Switch: '<S214>/Switch' incorporates:
       *  Constant: '<S214>/Constant1'
       */
      if (rtb_RelationalOperator2_e) {
        rtb_UnitDelay1_j = 0.0;
      } else {
        /* MinMax: '<S233>/MinMax' incorporates:
         *  Sum: '<S234>/Sum'
         */
        rtb_Sum2_g = BaseEngineController_LS_B.s234_Product +
          BaseEngineController_LS_B.s235_Product;

        /* MinMax: '<S233>/MinMax1' incorporates:
         *  MinMax: '<S233>/MinMax'
         *  S-Function (motohawk_sfun_calibration): '<S214>/motohawk_calibration1'
         *  S-Function (motohawk_sfun_calibration): '<S214>/motohawk_calibration9'
         */
        rtb_Sum2_g = (rtb_Sum2_g >= (SpkMinGovPIDOutLowerLimit_DataStore())) ||
          rtIsNaN((SpkMinGovPIDOutLowerLimit_DataStore())) ? rtb_Sum2_g :
          (SpkMinGovPIDOutLowerLimit_DataStore());
        rtb_UnitDelay1_j = (rtb_Sum2_g <= (SpkMinGovPIDOutUpperLimit_DataStore()))
          || rtIsNaN((SpkMinGovPIDOutUpperLimit_DataStore())) ? rtb_Sum2_g :
          (SpkMinGovPIDOutUpperLimit_DataStore());
      }

      /* End of Switch: '<S214>/Switch' */

      /* Product: '<S114>/Product' */
      BaseEngineController_LS_B.s114_IdleSpk =
        BaseEngineController_LS_B.s223_MinMax1 * rtb_UnitDelay1_j;

      /* Outputs for Atomic SubSystem: '<S114>/AiflowOffset' */

      /* S-Function Block: <S206>/motohawk_interpolation_1d1 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d1_i = TableInterpolation1D_real_T
          (BaseEngineController_LS_B.s437_motohawk_prelookup, (real_T *)
           ((ACAirFlowOfstTbl_DataStore())), 5);
        (ACAirFlowOfst_DataStore()) = rtb_motohawk_interpolation_1d1_i;
      }

      /* Product: '<S206>/Product' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S206>/motohawk_calibration'
       */
      rtb_Sum2_g = ((ACAirFlowOfst_Enab_DataStore()) ? (real_T)
                    BaseEngineController_LS_B.s105_LogicalOperator : 0.0) *
        rtb_motohawk_interpolation_1d1_i;

      /* S-Function Block: <S206>/motohawk_interpolation_1d2 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d2_p = TableInterpolation1D_real_T
          (BaseEngineController_LS_B.s439_motohawk_prelookup, (real_T *)
           ((BaseAirflowOfstTbl_DataStore())), 5);
        (BaseAirflowOfst_DataStore()) = rtb_motohawk_interpolation_1d2_p;
      }

      /* Sum: '<S206>/Sum' incorporates:
       *  S-Function (motohawk_sfun_interpolation_1d): '<S206>/motohawk_interpolation_1d2'
       */
      rtb_DataTypeConversion_c = rtb_Sum2_g + rtb_motohawk_interpolation_1d2_p;

      /* RelationalOperator: '<S217>/RelOp' incorporates:
       *  Constant: '<S217>/Constant'
       *  S-Function (motohawk_sfun_data_read): '<S206>/motohawk_data_read'
       */
      rtb_RelOp = (((uint8_T)EngineState_DataStore()) == 3);

      /* Logic: '<S206>/Logical Operator' incorporates:
       *  RelationalOperator: '<S206>/Relational Operator'
       *  RelationalOperator: '<S206>/Relational Operator1'
       *  UnitDelay: '<S206>/Unit Delay'
       */
      rtb_RelationalOperator2_e = ((rtb_RelOp <
        BaseEngineController_LS_DWork.s206_UnitDelay_DSTATE) || (rtb_RelOp ==
        BaseEngineController_LS_DWork.s206_UnitDelay_DSTATE));

      /* S-Function Block: <S216>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s216_motohawk_delta_time_DWORK1, NULL);
        rtb_motohawk_delta_time_bc = ((real_T) delta) * 0.000001;
      }

      /* UnitDelay: '<S216>/Unit Delay' */
      rtb_Sum2_g = BaseEngineController_LS_DWork.s216_UnitDelay_DSTATE;

      /* Switch: '<S216>/Preload lowpass filter with current RPM while not on Idle' incorporates:
       *  Constant: '<S216>/Constant'
       *  Logic: '<S216>/Logical Operator'
       *  Product: '<S216>/Product2'
       *  Product: '<S216>/Product3'
       *  Sum: '<S216>/Sum'
       *  Sum: '<S216>/Sum1'
       */
      if (!rtb_RelationalOperator2_e) {
        rtb_Sum2_g = BaseEngineController_LS_B.s458_Switch2;
      } else {
        /* Product: '<S216>/Product1' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S216>/motohawk_calibration2'
         *  S-Function (motohawk_sfun_delta_time): '<S216>/motohawk_delta_time'
         */
        rtb_UnitDelay1_j = rtb_motohawk_delta_time_bc /
          (IdleEntryAirRampInFiltC_DataStore());
        rtb_Sum2_g = (1.0 - rtb_UnitDelay1_j) * rtb_Sum2_g +
          rtb_DataTypeConversion_c * rtb_UnitDelay1_j;
      }

      /* End of Switch: '<S216>/Preload lowpass filter with current RPM while not on Idle' */

      /* MinMax: '<S216>/Don't allow setpoint to ever drop below the TargetRPM' */
      BaseEngineController_LS_B.s216_DontallowsetpointtoeverdropbelowtheTargetRPM
        = (rtb_DataTypeConversion_c >= rtb_Sum2_g) || rtIsNaN(rtb_Sum2_g) ?
        rtb_DataTypeConversion_c : rtb_Sum2_g;

      /* End of Outputs for SubSystem: '<S114>/AiflowOffset' */

      /* Saturate: '<S227>/Saturation' */
      rtb_Saturation_c = rtb_Switch_e0 >= 16000.0 ? 16000.0 : rtb_Switch_e0 <=
        0.0 ? 0.0 : rtb_Switch_e0;

      /* S-Function (motohawk_sfun_data_write): '<S227>/motohawk_data_write' */
      /* Write to Data Storage as scalar: IdleEnterTimer */
      {
        IdleEnterTimer_DataStore() = rtb_Saturation_c;
      }

      /* S-Function Block: <S231>/motohawk_delta_time */
      rtb_motohawk_delta_time_n2 = 0.005;

      /* Sum: '<S211>/Sum' */
      rtb_UnitDelay1_j = BaseEngineController_LS_B.s567_Sum1 -
        BaseEngineController_LS_B.s213_DontallowsetpointtoeverdropbelowtheTargetRPM;

      /* Switch: '<S231>/Switch' incorporates:
       *  Constant: '<S231>/Constant'
       *  RelationalOperator: '<S211>/Relational Operator2'
       *  S-Function (motohawk_sfun_calibration): '<S211>/motohawk_calibration3'
       *  S-Function (motohawk_sfun_data_read): '<S231>/motohawk_data_read'
       *  S-Function (motohawk_sfun_delta_time): '<S231>/motohawk_delta_time'
       *  Sum: '<S231>/Sum'
       */
      if (rtb_UnitDelay1_j > (real_T)((int16_T)(MotoringDeltaRPMLimit_DataStore())))
      {
        BaseEngineController_LS_B.s231_Switch = rtb_motohawk_delta_time_n2 +
          MotoringTimer_DataStore();
      } else {
        BaseEngineController_LS_B.s231_Switch = 0.0;
      }

      /* End of Switch: '<S231>/Switch' */

      /* RelationalOperator: '<S211>/Relational Operator1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S211>/motohawk_calibration1'
       */
      BaseEngineController_LS_B.s211_RelationalOperator1 =
        ((BaseEngineController_LS_B.s231_Switch >
          (MotoringDtctTimerLimit_DataStore())));

      /* DataTypeConversion: '<S211>/Data Type Conversion' */
      rtb_DataTypeConversion_c = (real_T)
        BaseEngineController_LS_B.s211_RelationalOperator1;

      /* Saturate: '<S231>/Saturation' */
      rtb_Saturation_k = BaseEngineController_LS_B.s231_Switch >= 16000.0 ?
        16000.0 : BaseEngineController_LS_B.s231_Switch <= 0.0 ? 0.0 :
        BaseEngineController_LS_B.s231_Switch;

      /* S-Function (motohawk_sfun_data_write): '<S231>/motohawk_data_write' */
      /* Write to Data Storage as scalar: MotoringTimer */
      {
        MotoringTimer_DataStore() = rtb_Saturation_k;
      }

      /* S-Function Block: <S237>/motohawk_interpolation_1d1 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d1_b = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1, (real_T *)
           ((AirMinGovIGainErrorMultTbl_DataStore())), 9);
        (AirMinGovIGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d1_b;
      }

      /* Product: '<S239>/Product1' incorporates:
       *  Product: '<S237>/Product1'
       *  S-Function (motohawk_sfun_calibration): '<S237>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S237>/motohawk_interpolation_1d1'
       *  S-Function (motohawk_sfun_prelookup): '<S215>/motohawk_prelookup1'
       */
      rtb_Sum2_g = (AirMinGovIGain_DataStore()) *
        rtb_motohawk_interpolation_1d1_b * rtb_Product5;

      /* S-Function Block: <S241>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s241_motohawk_delta_time_DWORK1, NULL);
        rtb_motohawk_delta_time_j = ((real_T) delta) * 0.000001;
      }

      /* Sum: '<S241>/Sum' incorporates:
       *  Product: '<S241>/Product'
       *  S-Function (motohawk_sfun_delta_time): '<S241>/motohawk_delta_time'
       */
      rtb_UnitDelay1_j = rtb_Sum2_g * rtb_motohawk_delta_time_j +
        BaseEngineController_LS_B.s241_Switch1;

      /* MinMax: '<S243>/MinMax' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S215>/motohawk_calibration7'
       */
      rtb_Sum2_g = (rtb_UnitDelay1_j >= (AirMinGovITermLowerLimit_DataStore())) ||
        rtIsNaN((AirMinGovITermLowerLimit_DataStore())) ? rtb_UnitDelay1_j :
        (AirMinGovITermLowerLimit_DataStore());

      /* Update for UnitDelay: '<S228>/Unit Delay' */
      BaseEngineController_LS_DWork.s228_UnitDelay_DSTATE =
        BaseEngineController_LS_B.s493_RPMInst;

      /* Update for UnitDelay: '<S230>/Unit Delay' */
      BaseEngineController_LS_DWork.s230_UnitDelay_DSTATE = rtb_Sum1_f;

      /* Update for UnitDelay: '<S114>/Unit Delay3' */
      BaseEngineController_LS_DWork.s114_UnitDelay3_DSTATE =
        BaseEngineController_LS_B.s114_MinGovAirPID;

      /* Update for UnitDelay: '<S114>/Unit Delay1' */
      BaseEngineController_LS_DWork.s114_UnitDelay1_DSTATE =
        BaseEngineController_LS_B.s241_Switch1;

      /* Update for UnitDelay: '<S209>/state' */
      BaseEngineController_LS_DWork.s209_state_DSTATE =
        BaseEngineController_LS_B.s223_MinMax1;

      /* Update for UnitDelay: '<S114>/Unit Delay2' */
      BaseEngineController_LS_DWork.s114_UnitDelay2_DSTATE =
        rtb_DataTypeConversion_c;

      /* Update for UnitDelay: '<S213>/Unit Delay' */
      BaseEngineController_LS_DWork.s213_UnitDelay_DSTATE =
        BaseEngineController_LS_B.s213_DontallowsetpointtoeverdropbelowtheTargetRPM;

      /* Update for UnitDelay: '<S240>/Unit Delay' */
      BaseEngineController_LS_DWork.s240_UnitDelay_DSTATE = rtb_Product4;

      /* Update for UnitDelay: '<S241>/Unit Delay' incorporates:
       *  MinMax: '<S243>/MinMax'
       *  MinMax: '<S243>/MinMax1'
       *  S-Function (motohawk_sfun_calibration): '<S215>/motohawk_calibration8'
       */
      BaseEngineController_LS_DWork.s241_UnitDelay_DSTATE = (rtb_Sum2_g <=
        (AirMinGovITermUpperLimit_DataStore())) || rtIsNaN
        ((AirMinGovITermUpperLimit_DataStore())) ? rtb_Sum2_g :
        (AirMinGovITermUpperLimit_DataStore());

      /* Update for UnitDelay: '<S235>/Unit Delay' */
      BaseEngineController_LS_DWork.s235_UnitDelay_DSTATE = rtb_Product2_j;

      /* Update for Atomic SubSystem: '<S114>/AiflowOffset' */
      /* Update for UnitDelay: '<S206>/Unit Delay' */
      BaseEngineController_LS_DWork.s206_UnitDelay_DSTATE = rtb_RelOp;

      /* Update for UnitDelay: '<S216>/Unit Delay' */
      BaseEngineController_LS_DWork.s216_UnitDelay_DSTATE =
        BaseEngineController_LS_B.s216_DontallowsetpointtoeverdropbelowtheTargetRPM;

      /* End of Update for SubSystem: '<S114>/AiflowOffset' */
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

      /* RelationalOperator: '<S122>/LT' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S105>/motohawk_calibration'
       */
      rtb_BelowLoTarget = (BaseEngineController_LS_B.s686_Merge >=
                           (ACTempOn_DataStore()));

      /* RelationalOperator: '<S122>/LT1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S105>/motohawk_calibration8'
       */
      rtb_AboveHiTarget = (BaseEngineController_LS_B.s686_Merge <=
                           (ACTempOff_DataStore()));

      /* CombinatorialLogic: '<S128>/Combinatorial  Logic' */
      {
        uint_T rowidx= 0;

        /* Compute the truth table row index corresponding to the input */
        rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget != 0);
        rowidx = (rowidx << 1) + (uint_T)(rtb_AboveHiTarget != 0);

        /* Copy the appropriate row of the table into the block output vector */
        rtb_CombinatorialLogic_m[0] =
          BaseEngineController_LS_ConstP.pooled893[rowidx];
        rtb_CombinatorialLogic_m[1] =
          BaseEngineController_LS_ConstP.pooled893[rowidx + 4];
      }

      /* Switch: '<S128>/Switch1' incorporates:
       *  UnitDelay: '<S128>/Unit Delay'
       */
      if (rtb_CombinatorialLogic_m[1]) {
        BaseEngineController_LS_B.s128_Switch1 = rtb_CombinatorialLogic_m[0];
      } else {
        BaseEngineController_LS_B.s128_Switch1 =
          BaseEngineController_LS_DWork.s128_UnitDelay_DSTATE;
      }

      /* End of Switch: '<S128>/Switch1' */

      /* DataTypeConversion: '<S105>/Data Type Conversion' */
      if (rtIsNaN(BaseEngineController_LS_B.s567_Sum1) || rtIsInf
          (BaseEngineController_LS_B.s567_Sum1)) {
        tmp = 0.0;
      } else {
        tmp = fmod(floor(BaseEngineController_LS_B.s567_Sum1), 65536.0);
      }

      rtb_DataTypeConversion1_i = (uint16_T)(tmp < 0.0 ? (uint16_T)(int32_T)
        (int16_T)-(int16_T)(uint16_T)-tmp : (uint16_T)tmp);

      /* End of DataTypeConversion: '<S105>/Data Type Conversion' */
      /* RelationalOperator: '<S121>/LT' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S105>/motohawk_calibration2'
       */
      rtb_AboveHiTarget = (rtb_DataTypeConversion1_i >= ((uint16_T)
        (ACSpdSlowOn_DataStore())));

      /* RelationalOperator: '<S121>/LT1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S105>/motohawk_calibration1'
       */
      rtb_BelowLoTarget = (rtb_DataTypeConversion1_i <= ((uint16_T)
        (ACSpdSlowOff_DataStore())));

      /* CombinatorialLogic: '<S127>/Combinatorial  Logic' */
      {
        uint_T rowidx= 0;

        /* Compute the truth table row index corresponding to the input */
        rowidx = (rowidx << 1) + (uint_T)(rtb_AboveHiTarget != 0);
        rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget != 0);

        /* Copy the appropriate row of the table into the block output vector */
        rtb_CombinatorialLogic_m[0] =
          BaseEngineController_LS_ConstP.pooled893[rowidx];
        rtb_CombinatorialLogic_m[1] =
          BaseEngineController_LS_ConstP.pooled893[rowidx + 4];
      }

      /* Switch: '<S127>/Switch1' incorporates:
       *  UnitDelay: '<S127>/Unit Delay'
       */
      if (rtb_CombinatorialLogic_m[1]) {
        BaseEngineController_LS_B.s127_Switch1 = rtb_CombinatorialLogic_m[0];
      } else {
        BaseEngineController_LS_B.s127_Switch1 =
          BaseEngineController_LS_DWork.s127_UnitDelay_DSTATE;
      }

      /* End of Switch: '<S127>/Switch1' */

      /* RelationalOperator: '<S119>/LT' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S105>/motohawk_calibration3'
       */
      rtb_AboveHiTarget = (rtb_DataTypeConversion1_i >= ((uint16_T)
        (ACSpdFastOff_DataStore())));

      /* RelationalOperator: '<S119>/LT1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S105>/motohawk_calibration4'
       */
      rtb_BelowLoTarget = (rtb_DataTypeConversion1_i <= ((uint16_T)
        (ACSpdFastOn_DataStore())));

      /* CombinatorialLogic: '<S125>/Combinatorial  Logic' */
      {
        uint_T rowidx= 0;

        /* Compute the truth table row index corresponding to the input */
        rowidx = (rowidx << 1) + (uint_T)(rtb_AboveHiTarget != 0);
        rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget != 0);

        /* Copy the appropriate row of the table into the block output vector */
        rtb_CombinatorialLogic_m[0] =
          BaseEngineController_LS_ConstP.pooled893[rowidx];
        rtb_CombinatorialLogic_m[1] =
          BaseEngineController_LS_ConstP.pooled893[rowidx + 4];
      }

      /* Switch: '<S125>/Switch1' incorporates:
       *  UnitDelay: '<S125>/Unit Delay'
       */
      if (rtb_CombinatorialLogic_m[1]) {
        rtb_Switch1_n = rtb_CombinatorialLogic_m[0];
      } else {
        rtb_Switch1_n = BaseEngineController_LS_DWork.s125_UnitDelay_DSTATE;
      }

      /* End of Switch: '<S125>/Switch1' */

      /* Logic: '<S105>/Logical Operator2' */
      BaseEngineController_LS_B.s105_LogicalOperator2 = !rtb_Switch1_n;

      /* DataTypeConversion: '<S105>/Data Type Conversion2' */
      if (rtIsNaN(BaseEngineController_LS_B.s458_Switch2) || rtIsInf
          (BaseEngineController_LS_B.s458_Switch2)) {
        tmp = 0.0;
      } else {
        tmp = fmod(floor(BaseEngineController_LS_B.s458_Switch2), 65536.0);
      }

      rtb_DataTypeConversion1_i = (uint16_T)(tmp < 0.0 ? (uint16_T)(int32_T)
        (int16_T)-(int16_T)(uint16_T)-tmp : (uint16_T)tmp);

      /* End of DataTypeConversion: '<S105>/Data Type Conversion2' */
      /* RelationalOperator: '<S120>/LT' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S105>/motohawk_calibration5'
       */
      rtb_AboveHiTarget = (rtb_DataTypeConversion1_i >= ((uint16_T)
        (AC_TPSOff_DataStore())));

      /* RelationalOperator: '<S120>/LT1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S105>/motohawk_calibration6'
       */
      rtb_BelowLoTarget = (rtb_DataTypeConversion1_i <= ((uint16_T)
        (AC_TPSOn_DataStore())));

      /* CombinatorialLogic: '<S126>/Combinatorial  Logic' */
      {
        uint_T rowidx= 0;

        /* Compute the truth table row index corresponding to the input */
        rowidx = (rowidx << 1) + (uint_T)(rtb_AboveHiTarget != 0);
        rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget != 0);

        /* Copy the appropriate row of the table into the block output vector */
        rtb_CombinatorialLogic_m[0] =
          BaseEngineController_LS_ConstP.pooled893[rowidx];
        rtb_CombinatorialLogic_m[1] =
          BaseEngineController_LS_ConstP.pooled893[rowidx + 4];
      }

      /* Switch: '<S126>/Switch1' incorporates:
       *  UnitDelay: '<S126>/Unit Delay'
       */
      if (rtb_CombinatorialLogic_m[1]) {
        rtb_Switch1_k = rtb_CombinatorialLogic_m[0];
      } else {
        rtb_Switch1_k = BaseEngineController_LS_DWork.s126_UnitDelay_DSTATE;
      }

      /* End of Switch: '<S126>/Switch1' */

      /* Logic: '<S105>/Logical Operator4' */
      BaseEngineController_LS_B.s105_LogicalOperator4 = !rtb_Switch1_k;

      /* Logic: '<S105>/Logical Operator3' */
      rtb_LogicalOperator3_o = (BaseEngineController_LS_B.s127_Switch1 &&
        BaseEngineController_LS_B.s105_LogicalOperator2);

      /* DataTypeConversion: '<S105>/Data Type Conversion1' */
      if (rtIsNaN(BaseEngineController_LS_B.s581_Merge) || rtIsInf
          (BaseEngineController_LS_B.s581_Merge)) {
        tmp = 0.0;
      } else {
        tmp = fmod(floor(BaseEngineController_LS_B.s581_Merge), 65536.0);
      }

      rtb_DataTypeConversion1_i = (uint16_T)(tmp < 0.0 ? (uint16_T)(int32_T)
        (int16_T)-(int16_T)(uint16_T)-tmp : (uint16_T)tmp);

      /* End of DataTypeConversion: '<S105>/Data Type Conversion1' */
      /* RelationalOperator: '<S118>/LT' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S105>/motohawk_calibration9'
       */
      rtb_AboveHiTarget = (rtb_DataTypeConversion1_i >= ((uint16_T)
        (ACLowPresOn_DataStore())));

      /* RelationalOperator: '<S118>/LT1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S105>/motohawk_calibration10'
       */
      rtb_BelowLoTarget = (rtb_DataTypeConversion1_i <= ((uint16_T)
        (ACLowPresOff_DataStore())));

      /* CombinatorialLogic: '<S124>/Combinatorial  Logic' */
      {
        uint_T rowidx= 0;

        /* Compute the truth table row index corresponding to the input */
        rowidx = (rowidx << 1) + (uint_T)(rtb_AboveHiTarget != 0);
        rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget != 0);

        /* Copy the appropriate row of the table into the block output vector */
        rtb_CombinatorialLogic_m[0] =
          BaseEngineController_LS_ConstP.pooled893[rowidx];
        rtb_CombinatorialLogic_m[1] =
          BaseEngineController_LS_ConstP.pooled893[rowidx + 4];
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
      /* RelationalOperator: '<S117>/LT' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S105>/motohawk_calibration11'
       */
      rtb_AboveHiTarget = (rtb_DataTypeConversion1_i >= ((uint16_T)
        (ACHighPresOff_DataStore())));

      /* RelationalOperator: '<S117>/LT1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S105>/motohawk_calibration12'
       */
      rtb_BelowLoTarget = (rtb_DataTypeConversion1_i <= ((uint16_T)
        (ACHighPresOn_DataStore())));

      /* CombinatorialLogic: '<S123>/Combinatorial  Logic' */
      {
        uint_T rowidx= 0;

        /* Compute the truth table row index corresponding to the input */
        rowidx = (rowidx << 1) + (uint_T)(rtb_AboveHiTarget != 0);
        rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget != 0);

        /* Copy the appropriate row of the table into the block output vector */
        rtb_CombinatorialLogic_m[0] =
          BaseEngineController_LS_ConstP.pooled893[rowidx];
        rtb_CombinatorialLogic_m[1] =
          BaseEngineController_LS_ConstP.pooled893[rowidx + 4];
      }

      /* Switch: '<S123>/Switch1' incorporates:
       *  UnitDelay: '<S123>/Unit Delay'
       */
      if (rtb_CombinatorialLogic_m[1]) {
        rtb_Switch1_e = rtb_CombinatorialLogic_m[0];
      } else {
        rtb_Switch1_e = BaseEngineController_LS_DWork.s123_UnitDelay_DSTATE;
      }

      /* End of Switch: '<S123>/Switch1' */

      /* Logic: '<S105>/Logical Operator1' */
      BaseEngineController_LS_B.s105_LogicalOperator1 = !rtb_Switch1_e;

      /* RelationalOperator: '<S105>/Relational Operator' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S105>/motohawk_calibration7'
       */
      rtb_RelationalOperator_j = (BaseEngineController_LS_B.s483_Switch >=
        (ACTimeFromStartDelay_DataStore()));

      /* Logic: '<S105>/Logical Operator' incorporates:
       *  Logic: '<S105>/Logical Operator6'
       *  S-Function (motohawk_sfun_fault_action): '<S105>/motohawk_fault_action'
       */
      BaseEngineController_LS_B.s105_LogicalOperator =
        ((BaseEngineController_LS_B.s524_Merge &&
          BaseEngineController_LS_B.s128_Switch1 && rtb_LogicalOperator3_o &&
          BaseEngineController_LS_B.s105_LogicalOperator4 &&
          BaseEngineController_LS_B.s124_Switch1 &&
          BaseEngineController_LS_B.s105_LogicalOperator1 &&
          rtb_RelationalOperator_j && (!GetFaultActionStatus(3))));

      /* Update for UnitDelay: '<S128>/Unit Delay' */
      BaseEngineController_LS_DWork.s128_UnitDelay_DSTATE =
        BaseEngineController_LS_B.s128_Switch1;

      /* Update for UnitDelay: '<S127>/Unit Delay' */
      BaseEngineController_LS_DWork.s127_UnitDelay_DSTATE =
        BaseEngineController_LS_B.s127_Switch1;

      /* Update for UnitDelay: '<S125>/Unit Delay' */
      BaseEngineController_LS_DWork.s125_UnitDelay_DSTATE = rtb_Switch1_n;

      /* Update for UnitDelay: '<S126>/Unit Delay' */
      BaseEngineController_LS_DWork.s126_UnitDelay_DSTATE = rtb_Switch1_k;

      /* Update for UnitDelay: '<S124>/Unit Delay' */
      BaseEngineController_LS_DWork.s124_UnitDelay_DSTATE =
        BaseEngineController_LS_B.s124_Switch1;

      /* Update for UnitDelay: '<S123>/Unit Delay' */
      BaseEngineController_LS_DWork.s123_UnitDelay_DSTATE = rtb_Switch1_e;
    }

    /* Output and update for function-call system: '<S93>/Boost Control' */
    {
      /* local block i/o variables */
      real_T rtb_motohawk_delta_time_i;
      real_T rtb_motohawk_interpolation_1d2_l;
      real_T rtb_motohawk_interpolation_1d3_l;
      real_T rtb_motohawk_delta_time_a;
      real_T rtb_motohawk_interpolation_2d1_d;
      real_T rtb_motohawk_interpolation_1d2_n;
      real_T rtb_motohawk_interpolation_1d1_e;
      real_T rtb_motohawk_delta_time_l;
      real_T rtb_MinMax1_if;
      real_T rtb_motohawk_delta_time_nb;
      real_T rtb_Saturation_cv;
      index_T rtb_motohawk_prelookup1_n;
      index_T rtb_motohawk_prelookup;
      int8_T rtb_motohawk_interpolation_2d2;
      int8_T rtb_motohawk_interpolation_1d3_d;
      int8_T rtb_MinMax_g;
      real_T maxV;
      real_T rtb_kPatoPSI;
      boolean_T rtb_RelationalOperator_n;
      boolean_T rtb_LogicalOperator_c;
      real_T rtb_UnitDelay_hb;
      real_T rtb_Sum2_o;
      real_T rtb_Abs_e;

      /* Gain: '<S108>/kPa to PSI' incorporates:
       *  Sum: '<S108>/Sum1'
       */
      rtb_kPatoPSI = (BaseEngineController_LS_B.s618_Merge -
                      BaseEngineController_LS_B.s411_Sum) * 0.145038;

      /* RelationalOperator: '<S108>/Relational Operator' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S108>/motohawk_calibration2'
       */
      rtb_RelationalOperator_n = (rtb_kPatoPSI <
        (BoostActivationThreshold_DataStore()));

      /* UnitDelay: '<S108>/Unit Delay' */
      rtb_UnitDelay_hb = BaseEngineController_LS_DWork.s108_UnitDelay_DSTATE;

      /* Outputs for Enabled SubSystem: '<S108>/BoostControl Adapt' incorporates:
       *  EnablePort: '<S135>/Enable'
       */
      /* Logic: '<S108>/Logical Operator' */
      if (!rtb_RelationalOperator_n) {
        /* Product: '<S135>/Product0' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S135>/motohawk_calibration2'
         */
        rtb_Abs_e = rtb_UnitDelay_hb * (BoostControlAdaptGain_DataStore());

        /* MinMax: '<S142>/MinMax' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S140>/motohawk_calibration'
         */
        maxV = (rtb_Abs_e >= (BoostAdaptErrorLwrLim_DataStore())) || rtIsNaN
          ((BoostAdaptErrorLwrLim_DataStore())) ? rtb_Abs_e :
          (BoostAdaptErrorLwrLim_DataStore());

        /* MinMax: '<S142>/MinMax1' incorporates:
         *  MinMax: '<S142>/MinMax'
         *  S-Function (motohawk_sfun_calibration): '<S140>/motohawk_calibration1'
         */
        rtb_MinMax1_if = (maxV <= (BoostAdaptErrorUprLim_DataStore())) ||
          rtIsNaN((BoostAdaptErrorUprLim_DataStore())) ? maxV :
          (BoostAdaptErrorUprLim_DataStore());

        /* Outputs for Atomic SubSystem: '<S135>/BoostControl Enable Delay' */

        /* S-Function Block: <S141>/motohawk_delta_time */
        rtb_motohawk_delta_time_nb = 0.005;
        rtb_Abs_e = rtb_motohawk_delta_time_nb + BoostTimer_DataStore();

        /* RelationalOperator: '<S139>/Relational Operator' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S139>/motohawk_calibration1'
         */
        rtb_LogicalOperator_c = (rtb_Abs_e > (BoostAdaptDelayTime_DataStore()));

        /* Saturate: '<S141>/Saturation' */
        rtb_Saturation_cv = rtb_Abs_e >= 16000.0 ? 16000.0 : rtb_Abs_e <= 0.0 ?
          0.0 : rtb_Abs_e;

        /* S-Function (motohawk_sfun_data_write): '<S141>/motohawk_data_write' */
        /* Write to Data Storage as scalar: BoostTimer */
        {
          BoostTimer_DataStore() = rtb_Saturation_cv;
        }

        /* End of Outputs for SubSystem: '<S135>/BoostControl Enable Delay' */

        /* Logic: '<S135>/Logical Operator1' incorporates:
         *  Abs: '<S135>/Abs'
         *  RelationalOperator: '<S135>/Relational Operator'
         *  S-Function (motohawk_sfun_calibration): '<S135>/motohawk_calibration3'
         *  S-Function (motohawk_sfun_calibration): '<S135>/motohawk_calibration4'
         */
        BaseEngineController_LS_B.s135_LogicalOperator1 =
          (((BoostControlAdaptEnable_DataStore()) && rtb_LogicalOperator_c &&
            (fabs(rtb_UnitDelay_hb) <= (BoostControlAdaptDelta_DataStore()))));

        /* Outputs for Enabled SubSystem: '<S135>/Adapt Boost Table' incorporates:
         *  EnablePort: '<S138>/Enable'
         */
        if (BaseEngineController_LS_B.s135_LogicalOperator1) {
          /* S-Function Block: <S138>/motohawk_adapt_table */
          /* Adapt 2-D Table */
          {
            uint32_T _row = ((BoostTargetIdx_DataStore())) >> 9;
            uint32_T _row_frac = (((BoostTargetIdx_DataStore())) & 0x01FF) >> 7;
            uint32_T _col = ((RPM09Idx_DataStore())) >> 9;
            uint32_T _col_frac = (((RPM09Idx_DataStore())) & 0x01FF) >> 7;
            real_T _new;
            if (_row >= 8) {
              _row = 8;
              _row_frac = 0;
            }

            if (_col >= 8) {
              _col = 8;
              _col_frac = 0;
            }

            if (_row_frac == 3) {
              _row++;
              _row_frac = 0;
            }

            if (_row_frac == 0) {
              if (_col_frac == 0) {
                _new = (BoostControlBase_AdaptMap_DataStore())[_row][_col] +
                  rtb_MinMax1_if;
                if (_new > (BoostControlOfstMaxValue_DataStore()))
                  _new = (BoostControlOfstMaxValue_DataStore());
                if (_new < (BoostControlOfstMinValue_DataStore()))
                  _new = (BoostControlOfstMinValue_DataStore());
                (BoostControlBase_AdaptMap_DataStore())[_row][_col] = _new;
              } else if (_col_frac == 3) {
                _new = (BoostControlBase_AdaptMap_DataStore())[_row][_col+1] +
                  rtb_MinMax1_if;
                if (_new > (BoostControlOfstMaxValue_DataStore()))
                  _new = (BoostControlOfstMaxValue_DataStore());
                if (_new < (BoostControlOfstMinValue_DataStore()))
                  _new = (BoostControlOfstMinValue_DataStore());
                (BoostControlBase_AdaptMap_DataStore())[_row][_col+1] = _new;
              } else {
                real_T _half = (rtb_MinMax1_if) / 2;
                _new = (BoostControlBase_AdaptMap_DataStore())[_row][_col] +
                  _half;
                if (_new > (BoostControlOfstMaxValue_DataStore()))
                  _new = (BoostControlOfstMaxValue_DataStore());
                if (_new < (BoostControlOfstMinValue_DataStore()))
                  _new = (BoostControlOfstMinValue_DataStore());
                (BoostControlBase_AdaptMap_DataStore())[_row][_col] = _new;
                _new = (BoostControlBase_AdaptMap_DataStore())[_row][_col+1] +
                  _half;
                if (_new > (BoostControlOfstMaxValue_DataStore()))
                  _new = (BoostControlOfstMaxValue_DataStore());
                if (_new < (BoostControlOfstMinValue_DataStore()))
                  _new = (BoostControlOfstMinValue_DataStore());
                (BoostControlBase_AdaptMap_DataStore())[_row][_col+1] = _new;
              }
            } else {
              if (_col_frac == 3) {
                _col++;
                _col_frac = 0;
              }

              if (_col_frac == 0) {
                real_T _half = (rtb_MinMax1_if) / 2;
                _new = (BoostControlBase_AdaptMap_DataStore())[_row][_col] +
                  _half;
                if (_new > (BoostControlOfstMaxValue_DataStore()))
                  _new = (BoostControlOfstMaxValue_DataStore());
                if (_new < (BoostControlOfstMinValue_DataStore()))
                  _new = (BoostControlOfstMinValue_DataStore());
                (BoostControlBase_AdaptMap_DataStore())[_row][_col] = _new;
                _new = (BoostControlBase_AdaptMap_DataStore())[_row+1][_col] +
                  _half;
                if (_new > (BoostControlOfstMaxValue_DataStore()))
                  _new = (BoostControlOfstMaxValue_DataStore());
                if (_new < (BoostControlOfstMinValue_DataStore()))
                  _new = (BoostControlOfstMinValue_DataStore());
                (BoostControlBase_AdaptMap_DataStore())[_row+1][_col] = _new;
              } else {
                real_T _quarter = (rtb_MinMax1_if) / 4;
                _new = (BoostControlBase_AdaptMap_DataStore())[_row][_col] +
                  _quarter;
                if (_new > (BoostControlOfstMaxValue_DataStore()))
                  _new = (BoostControlOfstMaxValue_DataStore());
                if (_new < (BoostControlOfstMinValue_DataStore()))
                  _new = (BoostControlOfstMinValue_DataStore());
                (BoostControlBase_AdaptMap_DataStore())[_row][_col] = _new;
                _new = (BoostControlBase_AdaptMap_DataStore())[_row+1][_col] +
                  _quarter;
                if (_new > (BoostControlOfstMaxValue_DataStore()))
                  _new = (BoostControlOfstMaxValue_DataStore());
                if (_new < (BoostControlOfstMinValue_DataStore()))
                  _new = (BoostControlOfstMinValue_DataStore());
                (BoostControlBase_AdaptMap_DataStore())[_row+1][_col] = _new;
                _new = (BoostControlBase_AdaptMap_DataStore())[_row][_col+1] +
                  _quarter;
                if (_new > (BoostControlOfstMaxValue_DataStore()))
                  _new = (BoostControlOfstMaxValue_DataStore());
                if (_new < (BoostControlOfstMinValue_DataStore()))
                  _new = (BoostControlOfstMinValue_DataStore());
                (BoostControlBase_AdaptMap_DataStore())[_row][_col+1] = _new;
                _new = (BoostControlBase_AdaptMap_DataStore())[_row+1][_col+1] +
                  _quarter;
                if (_new > (BoostControlOfstMaxValue_DataStore()))
                  _new = (BoostControlOfstMaxValue_DataStore());
                if (_new < (BoostControlOfstMinValue_DataStore()))
                  _new = (BoostControlOfstMinValue_DataStore());
                (BoostControlBase_AdaptMap_DataStore())[_row+1][_col+1] = _new;
              }
            }
          }
        }

        /* End of Outputs for SubSystem: '<S135>/Adapt Boost Table' */
      }

      /* End of Logic: '<S108>/Logical Operator' */
      /* End of Outputs for SubSystem: '<S108>/BoostControl Adapt' */

      /* Switch: '<S147>/Switch1' incorporates:
       *  Constant: '<S136>/Constant'
       *  UnitDelay: '<S147>/Unit Delay'
       */
      if (rtb_RelationalOperator_n) {
        BaseEngineController_LS_B.s147_Switch1 = 0.0;
      } else {
        BaseEngineController_LS_B.s147_Switch1 =
          BaseEngineController_LS_DWork.s147_UnitDelay_DSTATE;
      }

      /* End of Switch: '<S147>/Switch1' */

      /* S-Function Block: <S137>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s137_motohawk_delta_time_DWORK1, NULL);
        rtb_motohawk_delta_time_i = ((real_T) delta) * 0.000001;
      }

      /* S-Function Block: <S108>/motohawk_interpolation_2d2 */
      {
        extern int8_T TableInterpolation2D_int8_T(uint16_T row_in, uint16_T
          col_in, int8_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_motohawk_interpolation_2d2 = TableInterpolation2D_int8_T
          (BaseEngineController_LS_B.s446_motohawk_prelookup,
           BaseEngineController_LS_B.s443_motohawk_prelookup1, (int8_T *)
           ((BoostTargetMap_DataStore())), 9, 9);
        (BoostTarget_DataStore()) = rtb_motohawk_interpolation_2d2;
      }

      /* Sum: '<S108>/Sum2' incorporates:
       *  Product: '<S108>/Product'
       *  S-Function (motohawk_sfun_calibration): '<S108>/motohawk_calibration3'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S108>/motohawk_interpolation_2d2'
       */
      rtb_UnitDelay_hb = (real_T)BaseEngineController_LS_B.s543_Merge *
        (BoostScrambleAdder_DataStore()) + (real_T)
        rtb_motohawk_interpolation_2d2;

      /* S-Function Block: <S108>/motohawk_interpolation_1d */
      {
        extern int8_T TableInterpolation1D_int8_T(uint16_T idx, int8_T *tbl_data,
          uint32_T sz);
        rtb_MinMax_g = TableInterpolation1D_int8_T
          (BaseEngineController_LS_B.s439_motohawk_prelookup, (int8_T *)
           ((BoostECTLimitTbl_DataStore())), 5);
        (BoostECTLimit_DataStore()) = rtb_MinMax_g;
      }

      /* S-Function Block: <S108>/motohawk_interpolation_1d3 */
      {
        extern int8_T TableInterpolation1D_int8_T(uint16_T idx, int8_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d3_d = TableInterpolation1D_int8_T
          (BaseEngineController_LS_B.s440_motohawk_prelookup, (int8_T *)
           ((BoostIATLimitTbl_DataStore())), 5);
        (BoostIATLimit_DataStore()) = rtb_motohawk_interpolation_1d3_d;
      }

      /* MinMax: '<S108>/MinMax' */
      rtb_MinMax_g = (int8_T)(rtb_MinMax_g <= rtb_motohawk_interpolation_1d3_d ?
        rtb_MinMax_g : rtb_motohawk_interpolation_1d3_d);

      /* MinMax: '<S108>/MinMax2' */
      rtb_Abs_e = (real_T)rtb_MinMax_g;
      BaseEngineController_LS_B.s108_MinMax2 = rtb_UnitDelay_hb <= rtb_Abs_e ?
        rtb_UnitDelay_hb : rtb_Abs_e;

      /* UnitDelay: '<S137>/Unit Delay' */
      rtb_Abs_e = BaseEngineController_LS_DWork.s137_UnitDelay_DSTATE;

      /* Product: '<S137>/Product1' incorporates:
       *  S-Function (motohawk_sfun_delta_time): '<S137>/motohawk_delta_time'
       *  Sum: '<S137>/Sum3'
       *  UnitDelay: '<S137>/Unit Delay'
       */
      rtb_UnitDelay_hb = 1.0 / rtb_motohawk_delta_time_i *
        (BaseEngineController_LS_B.s108_MinMax2 -
         BaseEngineController_LS_DWork.s137_UnitDelay_DSTATE);

      /* MinMax: '<S150>/MinMax' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S108>/motohawk_calibration1'
       */
      maxV = (rtb_UnitDelay_hb >= (BoostFallRate_DataStore())) || rtIsNaN
        ((BoostFallRate_DataStore())) ? rtb_UnitDelay_hb :
        (BoostFallRate_DataStore());

      /* Sum: '<S137>/Sum2' incorporates:
       *  MinMax: '<S150>/MinMax'
       *  MinMax: '<S150>/MinMax1'
       *  Product: '<S137>/Product'
       *  S-Function (motohawk_sfun_calibration): '<S108>/motohawk_calibration'
       *  S-Function (motohawk_sfun_delta_time): '<S137>/motohawk_delta_time'
       */
      rtb_Sum2_o = ((maxV <= (BoostRiseRate_DataStore())) || rtIsNaN
                    ((BoostRiseRate_DataStore())) ? maxV :
                    (BoostRiseRate_DataStore())) * rtb_motohawk_delta_time_i +
        rtb_Abs_e;

      /* Sum: '<S145>/Sum2' */
      BaseEngineController_LS_B.s145_Sum2 = rtb_Sum2_o - rtb_kPatoPSI;

      /* Product: '<S145>/Product5' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S136>/motohawk_calibration5'
       */
      rtb_UnitDelay_hb = BaseEngineController_LS_B.s145_Sum2 *
        (BoostCtlErrorGain_DataStore());

      /* S-Function Block: <S136>/motohawk_prelookup1 */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (BoostCtlSpeedErrorIn_DataStore()) = BaseEngineController_LS_B.s145_Sum2;
        (BoostCtlSpeedErrorIdx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_LS_B.s145_Sum2,
           (BoostCtlSpeedErrorIdxArr_DataStore()), 9,
           (BoostCtlSpeedErrorIdx_DataStore()));
        rtb_motohawk_prelookup1_n = (BoostCtlSpeedErrorIdx_DataStore());
      }

      /* S-Function Block: <S143>/motohawk_interpolation_1d2 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d2_l = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1_n, (real_T *)
           ((BoostCtlPGainErrorMultTbl_DataStore())), 9);
        (BoostCtlPGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d2_l;
      }

      /* Product: '<S145>/Product2' incorporates:
       *  Product: '<S143>/Product2'
       *  S-Function (motohawk_sfun_calibration): '<S143>/motohawk_calibration3'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S143>/motohawk_interpolation_1d2'
       *  S-Function (motohawk_sfun_prelookup): '<S136>/motohawk_prelookup1'
       */
      BaseEngineController_LS_B.s145_Product2 = (BoostCtlPGain_DataStore()) *
        rtb_motohawk_interpolation_1d2_l * rtb_UnitDelay_hb;

      /* UnitDelay: '<S146>/Unit Delay' */
      rtb_Abs_e = BaseEngineController_LS_DWork.s146_UnitDelay_DSTATE;

      /* S-Function Block: <S143>/motohawk_interpolation_1d3 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d3_l = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1_n, (real_T *)
           ((BoostCtlDGainErrorMultTbl_DataStore())), 9);
        (BoostCtlDGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d3_l;
      }

      /* Product: '<S145>/Product4' incorporates:
       *  Product: '<S143>/Product3'
       *  S-Function (motohawk_sfun_calibration): '<S143>/motohawk_calibration2'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S143>/motohawk_interpolation_1d3'
       *  S-Function (motohawk_sfun_prelookup): '<S136>/motohawk_prelookup1'
       */
      rtb_kPatoPSI = (BoostCtlDGain_DataStore()) *
        rtb_motohawk_interpolation_1d3_l * rtb_UnitDelay_hb;

      /* S-Function Block: <S146>/motohawk_delta_time */
      rtb_motohawk_delta_time_a = 0.005;

      /* Product: '<S146>/Product' incorporates:
       *  S-Function (motohawk_sfun_delta_time): '<S146>/motohawk_delta_time'
       *  Sum: '<S146>/Sum2'
       */
      BaseEngineController_LS_B.s146_Product = (rtb_kPatoPSI - rtb_Abs_e) /
        rtb_motohawk_delta_time_a;

      /* Switch: '<S136>/Switch' incorporates:
       *  Constant: '<S136>/Constant1'
       */
      if (rtb_RelationalOperator_n) {
        BaseEngineController_LS_B.s136_Switch = 0.0;
      } else {
        /* MinMax: '<S144>/MinMax' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S136>/motohawk_calibration9'
         *  Sum: '<S145>/Sum1'
         */
        rtb_Abs_e = (BaseEngineController_LS_B.s145_Product2 +
                     BaseEngineController_LS_B.s146_Product) +
          BaseEngineController_LS_B.s147_Switch1;
        rtb_Abs_e = (rtb_Abs_e >= (BoostCtlPIDOutLowerLimit_DataStore())) ||
          rtIsNaN((BoostCtlPIDOutLowerLimit_DataStore())) ? rtb_Abs_e :
          (BoostCtlPIDOutLowerLimit_DataStore());

        /* MinMax: '<S144>/MinMax1' incorporates:
         *  MinMax: '<S144>/MinMax'
         *  S-Function (motohawk_sfun_calibration): '<S136>/motohawk_calibration2'
         */
        BaseEngineController_LS_B.s136_Switch = (rtb_Abs_e <=
          (BoostCtlPIDOutUpperLimit_DataStore())) || rtIsNaN
          ((BoostCtlPIDOutUpperLimit_DataStore())) ? rtb_Abs_e :
          (BoostCtlPIDOutUpperLimit_DataStore());
      }

      /* End of Switch: '<S136>/Switch' */

      /* S-Function Block: <S108>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (BoostTargetIn_DataStore()) = BaseEngineController_LS_B.s108_MinMax2;
        (BoostTargetIdx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_LS_B.s108_MinMax2, (BoostTargetIdxArr_DataStore()),
           9, (BoostTargetIdx_DataStore()));
        rtb_motohawk_prelookup = (BoostTargetIdx_DataStore());
      }

      /* S-Function Block: <S108>/motohawk_interpolation_2d1 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_motohawk_interpolation_2d1_d = TableInterpolation2D_real_T
          (rtb_motohawk_prelookup,
           BaseEngineController_LS_B.s443_motohawk_prelookup1, (real_T *)
           ((BoostControlBase_AdaptMap_DataStore())), 9, 9);
        (BoostControlBase_Adapt_DataStore()) = rtb_motohawk_interpolation_2d1_d;
      }

      /* S-Function Block: <S108>/motohawk_interpolation_2d */
      {
        extern uint8_T TableInterpolation2D_uint8_T(uint16_T row_in, uint16_T
          col_in, uint8_T *map_data, uint32_T row_sz, uint32_T col_sz);
        BaseEngineController_LS_B.s108_motohawk_interpolation_2d =
          TableInterpolation2D_uint8_T(rtb_motohawk_prelookup,
          BaseEngineController_LS_B.s443_motohawk_prelookup1, (uint8_T *)
          ((BoostControlBaseMap_DataStore())), 9, 9);
        (BoostControlBase_DataStore()) =
          BaseEngineController_LS_B.s108_motohawk_interpolation_2d;
      }

      /* Sum: '<S108>/Sum' incorporates:
       *  S-Function (motohawk_sfun_interpolation_2d): '<S108>/motohawk_interpolation_2d1'
       *  S-Function (motohawk_sfun_prelookup): '<S108>/motohawk_prelookup'
       */
      rtb_Abs_e = (rtb_motohawk_interpolation_2d1_d + (real_T)
                   BaseEngineController_LS_B.s108_motohawk_interpolation_2d) +
        BaseEngineController_LS_B.s136_Switch;

      /* S-Function Block: <S108>/motohawk_interpolation_1d2 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d2_n = TableInterpolation1D_real_T
          (BaseEngineController_LS_B.s444_motohawk_prelookup, (real_T *)
           ((WGDeadTimeTbl_DataStore())), 9);
        (WGDeadTime_DataStore()) = rtb_motohawk_interpolation_1d2_n;
      }

      /* Sum: '<S108>/Sum3' incorporates:
       *  S-Function (motohawk_sfun_interpolation_1d): '<S108>/motohawk_interpolation_1d2'
       */
      BaseEngineController_LS_B.s108_Sum3 = rtb_Abs_e +
        rtb_motohawk_interpolation_1d2_n;

      /* Switch: '<S108>/Switch' incorporates:
       *  Constant: '<S108>/Constant'
       */
      if (rtb_RelationalOperator_n) {
        BaseEngineController_LS_B.s108_Switch = 0.0;
      } else {
        BaseEngineController_LS_B.s108_Switch =
          BaseEngineController_LS_B.s108_Sum3;
      }

      /* End of Switch: '<S108>/Switch' */

      /* S-Function Block: <S143>/motohawk_interpolation_1d1 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d1_e = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1_n, (real_T *)
           ((BoostCtlIGainErrorMultTbl_DataStore())), 9);
        (BoostCtlIGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d1_e;
      }

      /* Product: '<S145>/Product1' incorporates:
       *  Product: '<S143>/Product1'
       *  S-Function (motohawk_sfun_calibration): '<S143>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S143>/motohawk_interpolation_1d1'
       *  S-Function (motohawk_sfun_prelookup): '<S136>/motohawk_prelookup1'
       */
      rtb_Abs_e = (BoostCtlIGain_DataStore()) * rtb_motohawk_interpolation_1d1_e
        * rtb_UnitDelay_hb;

      /* S-Function Block: <S147>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s147_motohawk_delta_time_DWORK1, NULL);
        rtb_motohawk_delta_time_l = ((real_T) delta) * 0.000001;
      }

      /* Sum: '<S147>/Sum' incorporates:
       *  Product: '<S147>/Product'
       *  S-Function (motohawk_sfun_delta_time): '<S147>/motohawk_delta_time'
       */
      rtb_UnitDelay_hb = rtb_Abs_e * rtb_motohawk_delta_time_l +
        BaseEngineController_LS_B.s147_Switch1;

      /* MinMax: '<S149>/MinMax' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S136>/motohawk_calibration7'
       */
      maxV = (rtb_UnitDelay_hb >= (BoostCtlITermLowerLimit_DataStore())) ||
        rtIsNaN((BoostCtlITermLowerLimit_DataStore())) ? rtb_UnitDelay_hb :
        (BoostCtlITermLowerLimit_DataStore());

      /* Update for UnitDelay: '<S108>/Unit Delay' */
      BaseEngineController_LS_DWork.s108_UnitDelay_DSTATE =
        BaseEngineController_LS_B.s147_Switch1;

      /* Update for UnitDelay: '<S147>/Unit Delay' incorporates:
       *  MinMax: '<S149>/MinMax'
       *  MinMax: '<S149>/MinMax1'
       *  S-Function (motohawk_sfun_calibration): '<S136>/motohawk_calibration8'
       */
      BaseEngineController_LS_DWork.s147_UnitDelay_DSTATE = (maxV <=
        (BoostCtlITermUpperLimit_DataStore())) || rtIsNaN
        ((BoostCtlITermUpperLimit_DataStore())) ? maxV :
        (BoostCtlITermUpperLimit_DataStore());

      /* Update for UnitDelay: '<S137>/Unit Delay' */
      BaseEngineController_LS_DWork.s137_UnitDelay_DSTATE = rtb_Sum2_o;

      /* Update for UnitDelay: '<S146>/Unit Delay' */
      BaseEngineController_LS_DWork.s146_UnitDelay_DSTATE = rtb_kPatoPSI;
    }

    /* Output and update for function-call system: '<S93>/FAN Control' */
    {
      /* local block i/o variables */
      real_T rtb_motohawk_interpolation_2d;
      real_T rtb_motohawk_interpolation_2d1_i;
      real_T rtb_motohawk_interpolation_2d2_n;
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

      /* S-Function (motohawk_sfun_fault_action): '<S110>/motohawk_fault_action'
       *
       * Regarding '<S110>/motohawk_fault_action':
         Get Fault Action Status: DisableFanRun
       */
      {
        extern boolean_T GetFaultActionStatus(uint32_T action);
        rtb_motohawk_fault_action_l = GetFaultActionStatus(4);
      }

      /* RelationalOperator: '<S156>/LT' incorporates:
       *  S-Function (motohawk_sfun_data_read): '<S110>/motohawk_data_read'
       */
      rtb_BelowLoTarget_b = (BaseEngineController_LS_B.s677_Merge >=
        ECTFanOn_DataStore());

      /* RelationalOperator: '<S156>/LT1' incorporates:
       *  S-Function (motohawk_sfun_data_read): '<S110>/motohawk_data_read1'
       */
      rtb_AboveHiTarget_a = (BaseEngineController_LS_B.s677_Merge <=
        ECTFanOff_DataStore());

      /* CombinatorialLogic: '<S159>/Combinatorial  Logic' */
      {
        uint_T rowidx= 0;

        /* Compute the truth table row index corresponding to the input */
        rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_b != 0);
        rowidx = (rowidx << 1) + (uint_T)(rtb_AboveHiTarget_a != 0);

        /* Copy the appropriate row of the table into the block output vector */
        rtb_CombinatorialLogic_c[0] =
          BaseEngineController_LS_ConstP.pooled893[rowidx];
        rtb_CombinatorialLogic_c[1] =
          BaseEngineController_LS_ConstP.pooled893[rowidx + 4];
      }

      /* Switch: '<S159>/Switch1' incorporates:
       *  UnitDelay: '<S159>/Unit Delay'
       */
      if (rtb_CombinatorialLogic_c[1]) {
        rtb_Switch1_em = rtb_CombinatorialLogic_c[0];
      } else {
        rtb_Switch1_em = BaseEngineController_LS_DWork.s159_UnitDelay_DSTATE;
      }

      /* End of Switch: '<S159>/Switch1' */
      /* Switch: '<S110>/Switch' incorporates:
       *  S-Function (motohawk_sfun_data_read): '<S110>/motohawk_data_read14'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S110>/motohawk_interpolation_2d'
       */
      if (FAN_Mode_DataStore()) {
        rtb_Switch_k = (real_T)rtb_Switch1_em;
      } else {
        /* S-Function Block: <S110>/motohawk_interpolation_2d */
        {
          extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
            col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
          rtb_motohawk_interpolation_2d = TableInterpolation2D_real_T
            (BaseEngineController_LS_B.s439_motohawk_prelookup2,
             BaseEngineController_LS_B.s446_motohawk_prelookup2, (real_T *)
             ((ECTFanSpeedMap_DataStore())), 7, 7);
          (ECTFanSpeed_DataStore()) = rtb_motohawk_interpolation_2d;
        }

        rtb_Switch_k = rtb_motohawk_interpolation_2d;
      }

      /* End of Switch: '<S110>/Switch' */
      /* RelationalOperator: '<S157>/LT' incorporates:
       *  S-Function (motohawk_sfun_data_read): '<S110>/motohawk_data_read2'
       */
      rtb_AboveHiTarget_a = (BaseEngineController_LS_B.s695_Merge >=
        IATFanOn_DataStore());

      /* RelationalOperator: '<S157>/LT1' incorporates:
       *  S-Function (motohawk_sfun_data_read): '<S110>/motohawk_data_read3'
       */
      rtb_BelowLoTarget_b = (BaseEngineController_LS_B.s695_Merge <=
        IATFanOff_DataStore());

      /* CombinatorialLogic: '<S160>/Combinatorial  Logic' */
      {
        uint_T rowidx= 0;

        /* Compute the truth table row index corresponding to the input */
        rowidx = (rowidx << 1) + (uint_T)(rtb_AboveHiTarget_a != 0);
        rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_b != 0);

        /* Copy the appropriate row of the table into the block output vector */
        rtb_CombinatorialLogic_c[0] =
          BaseEngineController_LS_ConstP.pooled893[rowidx];
        rtb_CombinatorialLogic_c[1] =
          BaseEngineController_LS_ConstP.pooled893[rowidx + 4];
      }

      /* Switch: '<S160>/Switch1' incorporates:
       *  UnitDelay: '<S160>/Unit Delay'
       */
      if (rtb_CombinatorialLogic_c[1]) {
        rtb_Switch1_l = rtb_CombinatorialLogic_c[0];
      } else {
        rtb_Switch1_l = BaseEngineController_LS_DWork.s160_UnitDelay_DSTATE;
      }

      /* End of Switch: '<S160>/Switch1' */

      /* Switch: '<S110>/Switch1' incorporates:
       *  S-Function (motohawk_sfun_data_read): '<S110>/motohawk_data_read14'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S110>/motohawk_interpolation_2d1'
       */
      if (FAN_Mode_DataStore()) {
        rtb_Switch1_j = (real_T)rtb_Switch1_l;
      } else {
        /* S-Function Block: <S110>/motohawk_interpolation_2d1 */
        {
          extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
            col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
          rtb_motohawk_interpolation_2d1_i = TableInterpolation2D_real_T
            (BaseEngineController_LS_B.s440_motohawk_prelookup1,
             BaseEngineController_LS_B.s446_motohawk_prelookup2, (real_T *)
             ((IATFanSpeedMap_DataStore())), 7, 7);
          (IATFanSpeed_DataStore()) = rtb_motohawk_interpolation_2d1_i;
        }

        rtb_Switch1_j = rtb_motohawk_interpolation_2d1_i;
      }

      /* End of Switch: '<S110>/Switch1' */
      /* RelationalOperator: '<S158>/LT' incorporates:
       *  S-Function (motohawk_sfun_data_read): '<S110>/motohawk_data_read4'
       */
      rtb_AboveHiTarget_a = (BaseEngineController_LS_B.s581_Merge >=
        ACPresFanOn_DataStore());

      /* RelationalOperator: '<S158>/LT1' incorporates:
       *  S-Function (motohawk_sfun_data_read): '<S110>/motohawk_data_read5'
       */
      rtb_BelowLoTarget_b = (BaseEngineController_LS_B.s581_Merge <=
        ACPresFanOff_DataStore());

      /* CombinatorialLogic: '<S161>/Combinatorial  Logic' */
      {
        uint_T rowidx= 0;

        /* Compute the truth table row index corresponding to the input */
        rowidx = (rowidx << 1) + (uint_T)(rtb_AboveHiTarget_a != 0);
        rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_b != 0);

        /* Copy the appropriate row of the table into the block output vector */
        rtb_CombinatorialLogic_c[0] =
          BaseEngineController_LS_ConstP.pooled893[rowidx];
        rtb_CombinatorialLogic_c[1] =
          BaseEngineController_LS_ConstP.pooled893[rowidx + 4];
      }

      /* Switch: '<S161>/Switch1' incorporates:
       *  UnitDelay: '<S161>/Unit Delay'
       */
      if (rtb_CombinatorialLogic_c[1]) {
        rtb_Switch1_m = rtb_CombinatorialLogic_c[0];
      } else {
        rtb_Switch1_m = BaseEngineController_LS_DWork.s161_UnitDelay_DSTATE;
      }

      /* End of Switch: '<S161>/Switch1' */

      /* Switch: '<S110>/Switch2' incorporates:
       *  S-Function (motohawk_sfun_data_read): '<S110>/motohawk_data_read14'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S110>/motohawk_interpolation_2d2'
       */
      if (FAN_Mode_DataStore()) {
        rtb_Switch2 = (real_T)rtb_Switch1_m;
      } else {
        /* S-Function Block: <S110>/motohawk_interpolation_2d2 */
        {
          extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
            col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
          rtb_motohawk_interpolation_2d2_n = TableInterpolation2D_real_T
            (BaseEngineController_LS_B.s437_motohawk_prelookup1,
             BaseEngineController_LS_B.s446_motohawk_prelookup2, (real_T *)
             ((ACPresFanSpeedMap_DataStore())), 7, 7);
          (ACPresFanSpeed_DataStore()) = rtb_motohawk_interpolation_2d2_n;
        }

        rtb_Switch2 = rtb_motohawk_interpolation_2d2_n;
      }

      /* End of Switch: '<S110>/Switch2' */

      /* DataTypeConversion: '<S110>/Data Type Conversion' */
      rtb_DataTypeConversion_cu = (real_T)BaseEngineController_LS_B.s524_Merge;

      /* Switch: '<S110>/Switch3' incorporates:
       *  Product: '<S110>/Product8'
       *  S-Function (motohawk_sfun_calibration): '<S110>/motohawk_calibration14'
       *  S-Function (motohawk_sfun_data_read): '<S110>/motohawk_data_read14'
       */
      if (!FAN_Mode_DataStore()) {
        rtb_DataTypeConversion_cu *= (real_T)((uint8_T)(ACSwFanSpeed_DataStore()));
      }

      /* End of Switch: '<S110>/Switch3' */

      /* Switch: '<S110>/Switch4' incorporates:
       *  Constant: '<S110>/Constant'
       */
      if (rtb_motohawk_fault_action_l) {
        BaseEngineController_LS_B.s110_Switch4 = 0.0;
      } else {
        /* S-Function (motohawk_sfun_data_read): '<S110>/motohawk_data_read9' */
        rtb_motohawk_data_read6 = Fan1ACSw_DataStore();

        /* Product: '<S110>/Product3' */
        rtb_Product3_m = rtb_DataTypeConversion_cu * (real_T)
          rtb_motohawk_data_read6;

        /* S-Function (motohawk_sfun_data_read): '<S110>/motohawk_data_read8' */
        rtb_motohawk_data_read6 = Fan1ACPres_DataStore();

        /* Product: '<S110>/Product2' */
        rtb_Product2_jc = rtb_Switch2 * (real_T)rtb_motohawk_data_read6;

        /* S-Function (motohawk_sfun_data_read): '<S110>/motohawk_data_read7' */
        rtb_motohawk_data_read6 = Fan1IAT_DataStore();

        /* Product: '<S110>/Product1' */
        rtb_Product1_i = rtb_Switch1_j * (real_T)rtb_motohawk_data_read6;

        /* S-Function (motohawk_sfun_data_read): '<S110>/motohawk_data_read6' */
        rtb_motohawk_data_read6 = Fan1ECT_DataStore();

        /* MinMax: '<S110>/MinMax' incorporates:
         *  Product: '<S110>/Product'
         */
        u = rtb_Switch_k * (real_T)rtb_motohawk_data_read6;
        u = (u >= rtb_Product1_i) || rtIsNaN(rtb_Product1_i) ? u :
          rtb_Product1_i;
        u = (u >= rtb_Product2_jc) || rtIsNaN(rtb_Product2_jc) ? u :
          rtb_Product2_jc;
        BaseEngineController_LS_B.s110_Switch4 = u >= rtb_Product3_m ? u :
          rtb_Product3_m;
      }

      /* End of Switch: '<S110>/Switch4' */

      /* Switch: '<S110>/Switch5' incorporates:
       *  Constant: '<S110>/Constant1'
       */
      if (rtb_motohawk_fault_action_l) {
        BaseEngineController_LS_B.s110_Switch5 = 0.0;
      } else {
        /* S-Function (motohawk_sfun_data_read): '<S110>/motohawk_data_read13' */
        rtb_motohawk_data_read10 = Fan2ACSw_DataStore();

        /* Product: '<S110>/Product7' */
        rtb_Product2_jc = rtb_DataTypeConversion_cu * (real_T)
          rtb_motohawk_data_read10;

        /* S-Function (motohawk_sfun_data_read): '<S110>/motohawk_data_read12' */
        rtb_motohawk_data_read10 = Fan2ACPres_DataStore();

        /* Product: '<S110>/Product6' */
        rtb_Product3_m = rtb_Switch2 * (real_T)rtb_motohawk_data_read10;

        /* S-Function (motohawk_sfun_data_read): '<S110>/motohawk_data_read11' */
        rtb_motohawk_data_read10 = Fan2IAT_DataStore();

        /* Product: '<S110>/Product5' */
        rtb_DataTypeConversion_cu = rtb_Switch1_j * (real_T)
          rtb_motohawk_data_read10;

        /* S-Function (motohawk_sfun_data_read): '<S110>/motohawk_data_read10' */
        rtb_motohawk_data_read10 = Fan2ECT_DataStore();

        /* MinMax: '<S110>/MinMax1' incorporates:
         *  Product: '<S110>/Product4'
         */
        u = rtb_Switch_k * (real_T)rtb_motohawk_data_read10;
        u = (u >= rtb_DataTypeConversion_cu) || rtIsNaN
          (rtb_DataTypeConversion_cu) ? u : rtb_DataTypeConversion_cu;
        u = (u >= rtb_Product3_m) || rtIsNaN(rtb_Product3_m) ? u :
          rtb_Product3_m;
        BaseEngineController_LS_B.s110_Switch5 = u >= rtb_Product2_jc ? u :
          rtb_Product2_jc;
      }

      /* End of Switch: '<S110>/Switch5' */

      /* Update for UnitDelay: '<S159>/Unit Delay' */
      BaseEngineController_LS_DWork.s159_UnitDelay_DSTATE = rtb_Switch1_em;

      /* Update for UnitDelay: '<S160>/Unit Delay' */
      BaseEngineController_LS_DWork.s160_UnitDelay_DSTATE = rtb_Switch1_l;

      /* Update for UnitDelay: '<S161>/Unit Delay' */
      BaseEngineController_LS_DWork.s161_UnitDelay_DSTATE = rtb_Switch1_m;
    }

    /* Output and update for function-call system: '<S93>/MaxGovernor' */
    {
      /* local block i/o variables */
      real_T rtb_motohawk_delta_time_d4;
      real_T rtb_motohawk_interpolation_1d3_m;
      real_T rtb_motohawk_interpolation_1d2_c;
      real_T rtb_motohawk_delta_time_m;
      real_T rtb_motohawk_interpolation_1d4;
      real_T rtb_motohawk_delta_time_ln;
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

      /* Sum: '<S113>/Sum' */
      BaseEngineController_LS_B.s113_Sum =
        BaseEngineController_LS_B.s216_DontallowsetpointtoeverdropbelowtheTargetRPM
        + BaseEngineController_LS_B.s466_Sum2;

      /* Outputs for Enabled SubSystem: '<S193>/InGear' incorporates:
       *  EnablePort: '<S196>/Enable'
       */
      /* Outputs for Enabled SubSystem: '<S193>/InNeutral' incorporates:
       *  EnablePort: '<S197>/Enable'
       */
      if (BaseEngineController_LS_B.s527_Merge) {
        /* S-Function (motohawk_sfun_data_read): '<S196>/motohawk_data_read' */
        rtb_MinMax_ny = MaxGovInGearSetPoint_DataStore();

        /* MinMax: '<S198>/MinMax' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S196>/motohawk_calibration3'
         */
        rtb_MinMax_ny = (uint16_T)(rtb_MinMax_ny >= ((uint16_T)
          (MaxGovInGearLowerLim_DataStore())) ? rtb_MinMax_ny : ((uint16_T)
          (MaxGovInGearLowerLim_DataStore())));

        /* MinMax: '<S198>/MinMax1' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S196>/motohawk_calibration5'
         */
        rtb_Merge_a = (uint16_T)(rtb_MinMax_ny <= ((uint16_T)
          (MaxGovInGearUpperLim_DataStore())) ? rtb_MinMax_ny : ((uint16_T)
          (MaxGovInGearUpperLim_DataStore())));

        /* S-Function (motohawk_sfun_calibration): '<S196>/motohawk_calibration4' */
        rtb_Merge1 = (MaxGovInGearRPMThresh_DataStore());

        /* S-Function (motohawk_sfun_data_write): '<S196>/motohawk_data_write1' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S196>/motohawk_calibration2'
         */
        /* Write to Data Storage as scalar: MaxGovInGearSetPoint */
        {
          MaxGovInGearSetPoint_DataStore() = (MaxGovInGearRPMSetPt_DataStore());
        }
      } else {
        /* S-Function (motohawk_sfun_data_read): '<S197>/motohawk_data_read' */
        rtb_MinMax_c = MaxGovNtrlSetPoint_DataStore();

        /* MinMax: '<S199>/MinMax' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S197>/motohawk_calibration2'
         */
        rtb_MinMax_c = (uint16_T)(rtb_MinMax_c >= ((uint16_T)
          (MaxGovNtrlLowerLim_DataStore())) ? rtb_MinMax_c : ((uint16_T)
          (MaxGovNtrlLowerLim_DataStore())));

        /* MinMax: '<S199>/MinMax1' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S197>/motohawk_calibration5'
         */
        rtb_Merge_a = (uint16_T)(rtb_MinMax_c <= ((uint16_T)
          (MaxGovNtrlUpperLim_DataStore())) ? rtb_MinMax_c : ((uint16_T)
          (MaxGovNtrlUpperLim_DataStore())));

        /* S-Function (motohawk_sfun_calibration): '<S197>/motohawk_calibration3' */
        rtb_Merge1 = (MaxGovNtrlRPMThresh_DataStore());

        /* S-Function (motohawk_sfun_data_write): '<S197>/motohawk_data_write1' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S197>/motohawk_calibration4'
         */
        /* Write to Data Storage as scalar: MaxGovNtrlSetPoint */
        {
          MaxGovNtrlSetPoint_DataStore() = (MaxGovNtrlRPMSetPt_DataStore());
        }
      }

      /* End of Outputs for SubSystem: '<S193>/InNeutral' */
      /* End of Outputs for SubSystem: '<S193>/InGear' */

      /* RelationalOperator: '<S193>/Relational Operator' incorporates:
       *  Sum: '<S193>/Sum1'
       */
      rtb_RelationalOperator_j1 = (BaseEngineController_LS_B.s493_RPMInst >
        (real_T)(uint16_T)(rtb_Merge_a - rtb_Merge1));

      /* DataTypeConversion: '<S113>/Data Type Conversion' */
      rtb_DataTypeConversion_m = (real_T)rtb_Merge_a;

      /* RelationalOperator: '<S191>/Relational Operator2' */
      rtb_RelationalOperator2_n = (BaseEngineController_LS_B.s493_RPMInst >
        rtb_DataTypeConversion_m);

      /* RelationalOperator: '<S191>/Relational Operator' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S191>/motohawk_calibration5'
       *  Sum: '<S191>/Sum'
       */
      rtb_RelationalOperator_c = (BaseEngineController_LS_B.s113_Sum <=
        BaseEngineController_LS_B.s458_Switch2 - (MaxGovTPSHyst_DataStore()));

      /* Logic: '<S191>/Logical Operator1' incorporates:
       *  RelationalOperator: '<S191>/Relational Operator1'
       *  S-Function (motohawk_sfun_calibration): '<S191>/motohawk_calibration5'
       *  Sum: '<S191>/Sum1'
       */
      rtb_LogicalOperator1_l = (rtb_RelationalOperator_j1 &&
        (BaseEngineController_LS_B.s113_Sum > (MaxGovTPSHyst_DataStore()) +
         BaseEngineController_LS_B.s458_Switch2));

      /* MATLAB Function Block: '<S191>/MaxGOV Stateflow' incorporates:
       *  Logic: '<S191>/Logical Operator'
       *  Logic: '<S191>/Logical Operator2'
       *  Logic: '<S191>/Logical Operator3'
       *  S-Function (motohawk_sfun_data_read): '<S191>/motohawk_data_read'
       */

      /* MATLAB Function 'Foreground/Control/Controller/Run/MaxGovernor/MaxGovState/MaxGOV Stateflow': '<S195>:1' */
      if ((MaxGov_DataStore() == 0.0) && ((rtb_RelationalOperator_j1 ||
            rtb_RelationalOperator2_n) == 1)) {
        /* '<S195>:1:3' */
        /* '<S195>:1:4' */
        rtb_StateO = 1.0;
      } else if ((MaxGov_DataStore() == 1.0) && (rtb_RelationalOperator_c ==
                  TRUE)) {
        /* '<S195>:1:5' */
        /* '<S195>:1:6' */
        rtb_StateO = 2.0;
      } else if ((MaxGov_DataStore() == 2.0) && ((rtb_LogicalOperator1_l ||
                   rtb_RelationalOperator2_n) == 1)) {
        /* '<S195>:1:7' */
        /* '<S195>:1:8' */
        rtb_StateO = 1.0;
      } else if ((MaxGov_DataStore() == 2.0) && (!rtb_RelationalOperator_j1 ==
                  TRUE)) {
        /* '<S195>:1:9' */
        /* '<S195>:1:10' */
        rtb_StateO = 0.0;
      } else {
        /* '<S195>:1:12' */
        rtb_StateO = MaxGov_DataStore();
      }

      if (MaxGov_DataStore() == 0.0) {
        /* '<S195>:1:15' */
        /* '<S195>:1:16' */
        rtb_ETCMode = 0;

        /* '<S195>:1:17' */
        rtb_Hold = 0;

        /* '<S195>:1:18' */
      } else if (MaxGov_DataStore() == 1.0) {
        /* '<S195>:1:19' */
        /* '<S195>:1:20' */
        rtb_ETCMode = 1;

        /* '<S195>:1:21' */
        rtb_Hold = 0;

        /* '<S195>:1:22' */
      } else if (MaxGov_DataStore() == 2.0) {
        /* '<S195>:1:23' */
        /* '<S195>:1:24' */
        rtb_ETCMode = 0;

        /* '<S195>:1:25' */
        rtb_Hold = 1;

        /* '<S195>:1:26' */
      } else {
        /* '<S195>:1:28' */
        rtb_ETCMode = 0;

        /* '<S195>:1:29' */
        rtb_Hold = 0;

        /* '<S195>:1:30' */
      }

      /* End of MATLAB Function Block: '<S191>/MaxGOV Stateflow' */

      /* DataTypeConversion: '<S191>/Data Type Conversion' */
      BaseEngineController_LS_B.s191_DataTypeConversion = 0;

      /* Logic: '<S192>/Logical Operator' incorporates:
       *  UnitDelay: '<S113>/Unit Delay'
       */
      rtb_RelationalOperator_j1 =
        !BaseEngineController_LS_DWork.s113_UnitDelay_DSTATE;

      /* S-Function Block: <S192>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s192_motohawk_delta_time_DWORK1, NULL);
        rtb_motohawk_delta_time_d4 = ((real_T) delta) * 0.000001;
      }

      /* UnitDelay: '<S192>/Unit Delay' */
      rtb_Reset = BaseEngineController_LS_DWork.s192_UnitDelay_DSTATE;

      /* Switch: '<S192>/Preload lowpass filter with current RPM while not on Idle' incorporates:
       *  Constant: '<S192>/Constant'
       *  Product: '<S192>/Product2'
       *  Product: '<S192>/Product3'
       *  Sum: '<S192>/Sum'
       *  Sum: '<S192>/Sum1'
       */
      if (rtb_RelationalOperator_j1) {
        rtb_alpha_o = BaseEngineController_LS_B.s493_RPMInst;
      } else {
        /* Product: '<S192>/Product1' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S192>/motohawk_calibration2'
         *  S-Function (motohawk_sfun_delta_time): '<S192>/motohawk_delta_time'
         */
        rtb_alpha_o = rtb_motohawk_delta_time_d4 /
          (MaxGovRPMCtrlEntryFiltC_DataStore());
        rtb_alpha_o = (1.0 - rtb_alpha_o) * rtb_Reset + rtb_DataTypeConversion_m
          * rtb_alpha_o;
      }

      /* End of Switch: '<S192>/Preload lowpass filter with current RPM while not on Idle' */

      /* MinMax: '<S192>/Don't allow setpoint to ever go above the TargetRPM' */
      BaseEngineController_LS_B.s192_DontallowsetpointtoevergoabovetheTargetRPM =
        (rtb_DataTypeConversion_m <= rtb_alpha_o) || rtIsNaN(rtb_alpha_o) ?
        rtb_DataTypeConversion_m : rtb_alpha_o;

      /* DataTypeConversion: '<S191>/Data Type Conversion1' */
      rtb_Reset = fmod((real_T)rtb_Hold, 256.0);
      BaseEngineController_LS_B.s191_DataTypeConversion1 = (int8_T)(rtb_Reset <
        0.0 ? (int8_T)-(int8_T)(uint8_T)-rtb_Reset : (int8_T)(uint8_T)rtb_Reset);

      /* Switch: '<S194>/Switch1' */
      if (BaseEngineController_LS_B.s191_DataTypeConversion1 >= 1) {
        rtb_alpha_o =
          BaseEngineController_LS_B.s192_DontallowsetpointtoevergoabovetheTargetRPM;
      } else {
        rtb_alpha_o = BaseEngineController_LS_B.s493_RPMInst;
      }

      /* End of Switch: '<S194>/Switch1' */

      /* Sum: '<S201>/Sum2' */
      BaseEngineController_LS_B.s201_Sum2 =
        BaseEngineController_LS_B.s192_DontallowsetpointtoevergoabovetheTargetRPM
        - rtb_alpha_o;

      /* Product: '<S201>/Product5' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S194>/motohawk_calibration5'
       */
      rtb_alpha_o = BaseEngineController_LS_B.s201_Sum2 *
        (MaxGovErrorGain_DataStore());

      /* S-Function Block: <S194>/motohawk_prelookup1 */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (MaxGovSpeedErrorIn_DataStore()) = BaseEngineController_LS_B.s201_Sum2;
        (MaxGovSpeedErrorIdx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_LS_B.s201_Sum2,
           (MaxGovSpeedErrorIdxArr_DataStore()), 9,
           (MaxGovSpeedErrorIdx_DataStore()));
        rtb_motohawk_prelookup1_f = (MaxGovSpeedErrorIdx_DataStore());
      }

      /* S-Function Block: <S194>/motohawk_interpolation_1d3 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d3_m = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1_f, (real_T *)
           ((MaxGovPGainErrorMultTbl_DataStore())), 9);
        (MaxGovPGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d3_m;
      }

      /* Product: '<S201>/Product2' incorporates:
       *  Product: '<S194>/Product4'
       *  S-Function (motohawk_sfun_calibration): '<S194>/motohawk_calibration3'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S194>/motohawk_interpolation_1d3'
       *  S-Function (motohawk_sfun_prelookup): '<S194>/motohawk_prelookup1'
       */
      BaseEngineController_LS_B.s201_Product2 = (MaxGovPGain_DataStore()) *
        rtb_motohawk_interpolation_1d3_m * rtb_alpha_o;

      /* UnitDelay: '<S202>/Unit Delay' */
      rtb_Reset = BaseEngineController_LS_DWork.s202_UnitDelay_DSTATE;

      /* S-Function Block: <S194>/motohawk_interpolation_1d2 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d2_c = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1_f, (real_T *)
           ((MaxGovDGainErrorMultTbl_DataStore())), 9);
        (MaxGovDGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d2_c;
      }

      /* Product: '<S201>/Product4' incorporates:
       *  Product: '<S194>/Product3'
       *  S-Function (motohawk_sfun_calibration): '<S194>/motohawk_calibration6'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S194>/motohawk_interpolation_1d2'
       *  S-Function (motohawk_sfun_prelookup): '<S194>/motohawk_prelookup1'
       */
      rtb_DataTypeConversion_m = (MaxGovDGain_DataStore()) *
        rtb_motohawk_interpolation_1d2_c * rtb_alpha_o;

      /* S-Function Block: <S202>/motohawk_delta_time */
      rtb_motohawk_delta_time_m = 0.005;

      /* Product: '<S202>/Product' incorporates:
       *  S-Function (motohawk_sfun_delta_time): '<S202>/motohawk_delta_time'
       *  Sum: '<S202>/Sum2'
       */
      BaseEngineController_LS_B.s202_Product = (rtb_DataTypeConversion_m -
        rtb_Reset) / rtb_motohawk_delta_time_m;

      /* Outputs for Atomic SubSystem: '<S113>/I-Term Preload' */

      /* S-Function Block: <S190>/motohawk_interpolation_1d4 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d4_k = TableInterpolation1D_real_T
          (BaseEngineController_LS_B.s406_RPMAccel17Idx, (real_T *)
           ((MaxGovPreloadITermTbl_DataStore())), 17);
        (MaxGovPreloadITerm_DataStore()) = rtb_motohawk_interpolation_1d4_k;
      }

      /* Sum: '<S190>/Sum' incorporates:
       *  S-Function (motohawk_sfun_interpolation_1d): '<S190>/motohawk_interpolation_1d4'
       */
      BaseEngineController_LS_B.s190_Sum = BaseEngineController_LS_B.s113_Sum -
        rtb_motohawk_interpolation_1d4_k;

      /* End of Outputs for SubSystem: '<S113>/I-Term Preload' */

      /* Switch: '<S203>/Switch1' incorporates:
       *  DataTypeConversion: '<S203>/Data Type Conversion'
       *  UnitDelay: '<S203>/Unit Delay'
       */
      if (BaseEngineController_LS_B.s191_DataTypeConversion != 0) {
        BaseEngineController_LS_B.s203_Switch1 =
          BaseEngineController_LS_B.s190_Sum;
      } else {
        BaseEngineController_LS_B.s203_Switch1 =
          BaseEngineController_LS_DWork.s203_UnitDelay_DSTATE;
      }

      /* End of Switch: '<S203>/Switch1' */

      /* Switch: '<S194>/Switch' incorporates:
       *  Constant: '<S194>/Constant'
       */
      if (BaseEngineController_LS_B.s191_DataTypeConversion >= 1) {
        BaseEngineController_LS_B.s194_Switch = 0.0;
      } else {
        /* MinMax: '<S200>/MinMax' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S194>/motohawk_calibration9'
         *  Sum: '<S201>/Sum1'
         */
        rtb_Reset = (BaseEngineController_LS_B.s201_Product2 +
                     BaseEngineController_LS_B.s202_Product) +
          BaseEngineController_LS_B.s203_Switch1;
        rtb_Reset = (rtb_Reset >= (MaxGovPIDOutLowerLimit_DataStore())) ||
          rtIsNaN((MaxGovPIDOutLowerLimit_DataStore())) ? rtb_Reset :
          (MaxGovPIDOutLowerLimit_DataStore());

        /* MinMax: '<S200>/MinMax1' incorporates:
         *  MinMax: '<S200>/MinMax'
         *  S-Function (motohawk_sfun_calibration): '<S194>/motohawk_calibration2'
         */
        BaseEngineController_LS_B.s194_Switch = (rtb_Reset <=
          (MaxGovPIDOutUpperLimit_DataStore())) || rtIsNaN
          ((MaxGovPIDOutUpperLimit_DataStore())) ? rtb_Reset :
          (MaxGovPIDOutUpperLimit_DataStore());
      }

      /* End of Switch: '<S194>/Switch' */

      /* S-Function (motohawk_sfun_data_write): '<S191>/motohawk_data_write' */
      /* Write to Data Storage as scalar: MaxGov */
      {
        MaxGov_DataStore() = rtb_StateO;
      }

      /* MultiPortSwitch: '<S191>/Multiport Switch' incorporates:
       *  Constant: '<S191>/Constant'
       *  DataTypeConversion: '<S191>/Data Type Conversion2'
       *  S-Function (motohawk_sfun_calibration): '<S191>/motohawk_calibration1'
       */
      if ((MaxGovDisable_DataStore()) == FALSE) {
        /* DataTypeConversion: '<S191>/Data Type Conversion2' */
        rtb_Reset = fmod((real_T)rtb_ETCMode, 256.0);
        BaseEngineController_LS_B.s191_MultiportSwitch = (((rtb_Reset < 0.0 ?
          (int8_T)-(int8_T)(uint8_T)-rtb_Reset : (int8_T)(uint8_T)rtb_Reset) !=
          0));
      } else {
        BaseEngineController_LS_B.s191_MultiportSwitch = FALSE;
      }

      /* End of MultiPortSwitch: '<S191>/Multiport Switch' */

      /* S-Function Block: <S194>/motohawk_interpolation_1d4 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d4 = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1_f, (real_T *)
           ((MaxGovIGainErrorMultTbl_DataStore())), 9);
        (MaxGovIGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d4;
      }

      /* Product: '<S201>/Product1' incorporates:
       *  Product: '<S194>/Product5'
       *  S-Function (motohawk_sfun_calibration): '<S194>/motohawk_calibration4'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S194>/motohawk_interpolation_1d4'
       *  S-Function (motohawk_sfun_prelookup): '<S194>/motohawk_prelookup1'
       */
      rtb_Reset = (MaxGovIGain_DataStore()) * rtb_motohawk_interpolation_1d4 *
        rtb_alpha_o;

      /* S-Function Block: <S203>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s203_motohawk_delta_time_DWORK1, NULL);
        rtb_motohawk_delta_time_ln = ((real_T) delta) * 0.000001;
      }

      /* Sum: '<S203>/Sum' incorporates:
       *  Product: '<S203>/Product'
       *  S-Function (motohawk_sfun_delta_time): '<S203>/motohawk_delta_time'
       */
      rtb_alpha_o = rtb_Reset * rtb_motohawk_delta_time_ln +
        BaseEngineController_LS_B.s203_Switch1;

      /* MinMax: '<S205>/MinMax' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S194>/motohawk_calibration7'
       */
      rtb_Reset = (rtb_alpha_o >= (MaxGovITermLowerLimit_DataStore())) ||
        rtIsNaN((MaxGovITermLowerLimit_DataStore())) ? rtb_alpha_o :
        (MaxGovITermLowerLimit_DataStore());

      /* Update for UnitDelay: '<S113>/Unit Delay' */
      BaseEngineController_LS_DWork.s113_UnitDelay_DSTATE =
        BaseEngineController_LS_B.s191_MultiportSwitch;

      /* Update for UnitDelay: '<S192>/Unit Delay' */
      BaseEngineController_LS_DWork.s192_UnitDelay_DSTATE =
        BaseEngineController_LS_B.s192_DontallowsetpointtoevergoabovetheTargetRPM;

      /* Update for UnitDelay: '<S202>/Unit Delay' */
      BaseEngineController_LS_DWork.s202_UnitDelay_DSTATE =
        rtb_DataTypeConversion_m;

      /* Update for UnitDelay: '<S203>/Unit Delay' incorporates:
       *  MinMax: '<S205>/MinMax'
       *  MinMax: '<S205>/MinMax1'
       *  S-Function (motohawk_sfun_calibration): '<S194>/motohawk_calibration8'
       */
      BaseEngineController_LS_DWork.s203_UnitDelay_DSTATE = (rtb_Reset <=
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
      index_T rtb_motohawk_prelookup_g;
      real_T rtb_Product_h;
      real_T rtb_Product1_fs;

      /* S-Function Block: <S116>/motohawk_interpolation_2d2 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_RichEquivRatioTargetDelta = TableInterpolation2D_real_T
          (BaseEngineController_LS_B.s441_Indexes,
           BaseEngineController_LS_B.s443_Indexes, (real_T *)
           ((SparkAdvMap_DataStore())), 17, 17);
        (SparkAdv_DataStore()) = rtb_RichEquivRatioTargetDelta;
      }

      /* S-Function Block: <S281>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d_n = TableInterpolation1D_real_T
          (BaseEngineController_LS_B.s439_motohawk_prelookup, (real_T *)
           ((ECT_SpkOfstTbl_DataStore())), 5);
        (ECT_SpkOfst_DataStore()) = rtb_motohawk_interpolation_1d_n;
      }

      /* S-Function Block: <S281>/motohawk_interpolation_2d3 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_RichEquivRatioTargetDelta_l = TableInterpolation2D_real_T
          (BaseEngineController_LS_B.s441_motohawk_prelookup1,
           BaseEngineController_LS_B.s443_motohawk_prelookup1, (real_T *)
           ((ECT_SpkOfstMultMap_DataStore())), 9, 9);
        (ECT_SpkOfstMult_DataStore()) = rtb_RichEquivRatioTargetDelta_l;
      }

      /* Product: '<S281>/Product' incorporates:
       *  S-Function (motohawk_sfun_interpolation_1d): '<S281>/motohawk_interpolation_1d'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S281>/motohawk_interpolation_2d3'
       */
      rtb_Product_h = rtb_motohawk_interpolation_1d_n *
        rtb_RichEquivRatioTargetDelta_l;

      /* S-Function Block: <S281>/motohawk_interpolation_1d1 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d1_o = TableInterpolation1D_real_T
          (BaseEngineController_LS_B.s440_motohawk_prelookup, (real_T *)
           ((IAT_SpkOfstTbl_DataStore())), 5);
        (IAT_SpkOfst_DataStore()) = rtb_motohawk_interpolation_1d1_o;
      }

      /* S-Function Block: <S281>/motohawk_interpolation_2d1 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_RichEquivRatioTargetDelta_h = TableInterpolation2D_real_T
          (BaseEngineController_LS_B.s441_motohawk_prelookup1,
           BaseEngineController_LS_B.s443_motohawk_prelookup1, (real_T *)
           ((IAT_SpkOfstMultMap_DataStore())), 9, 9);
        (IAT_SpkOfstMult_DataStore()) = rtb_RichEquivRatioTargetDelta_h;
      }

      /* Product: '<S281>/Product1' incorporates:
       *  S-Function (motohawk_sfun_interpolation_1d): '<S281>/motohawk_interpolation_1d1'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S281>/motohawk_interpolation_2d1'
       */
      rtb_Product1_fs = rtb_motohawk_interpolation_1d1_o *
        rtb_RichEquivRatioTargetDelta_h;

      /* S-Function Block: <S281>/motohawk_interpolation_1d2 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d2_m = TableInterpolation1D_real_T
          (BaseEngineController_LS_B.s438_motohawk_prelookup, (real_T *)
           ((CAT_SpkOfstTbl_DataStore())), 5);
        (CAT_SpkOfst_DataStore()) = rtb_motohawk_interpolation_1d2_m;
      }

      /* S-Function Block: <S281>/motohawk_interpolation_2d2 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_RichEquivRatioTargetDelta_i = TableInterpolation2D_real_T
          (BaseEngineController_LS_B.s441_motohawk_prelookup1,
           BaseEngineController_LS_B.s443_motohawk_prelookup1, (real_T *)
           ((CAT_SpkOfstMultMap_DataStore())), 9, 9);
        (CAT_SpkOfstMult_DataStore()) = rtb_RichEquivRatioTargetDelta_i;
      }

      /* Sum: '<S281>/Add' incorporates:
       *  Product: '<S281>/Product2'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S281>/motohawk_interpolation_1d2'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S281>/motohawk_interpolation_2d2'
       */
      BaseEngineController_LS_B.s281_Add = (rtb_Product_h + rtb_Product1_fs) +
        rtb_motohawk_interpolation_1d2_m * rtb_RichEquivRatioTargetDelta_i;

      /* S-Function Block: <S278>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d_k = TableInterpolation1D_real_T
          (BaseEngineController_LS_B.s442_motohawk_prelookup, (real_T *)
           ((EthSpkModTbl_DataStore())), 5);
        (EthSpkMod_DataStore()) = rtb_motohawk_interpolation_1d_k;
      }

      /* S-Function Block: <S278>/motohawk_interpolation_2d3 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_RichEquivRatioTargetDelta_m = TableInterpolation2D_real_T
          (BaseEngineController_LS_B.s441_motohawk_prelookup1,
           BaseEngineController_LS_B.s443_motohawk_prelookup1, (real_T *)
           ((Ethanol_SpkOfstMultMap_DataStore())), 9, 9);
        (Ethanol_SpkOfstMult_DataStore()) = rtb_RichEquivRatioTargetDelta_m;
      }

      /* Product: '<S278>/Product' incorporates:
       *  S-Function (motohawk_sfun_interpolation_1d): '<S278>/motohawk_interpolation_1d'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S278>/motohawk_interpolation_2d3'
       */
      BaseEngineController_LS_B.s278_Product = rtb_motohawk_interpolation_1d_k *
        rtb_RichEquivRatioTargetDelta_m;

      /* S-Function Block: <S277>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (DesEqRatio09In_DataStore()) = BaseEngineController_LS_B.s151_Product1;
        (DesEqRatio09Idx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_LS_B.s151_Product1,
           (DesEqRatio09IdxArr_DataStore()), 9, (DesEqRatio09Idx_DataStore()));
        rtb_motohawk_prelookup_g = (DesEqRatio09Idx_DataStore());
      }

      /* S-Function Block: <S277>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d_h = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup_g, (real_T *) ((EqRatio_SpkOfstTbl_DataStore())),
           9);
        (EqRatio_SpkOfst_DataStore()) = rtb_motohawk_interpolation_1d_h;
      }

      /* S-Function Block: <S277>/motohawk_interpolation_2d3 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_RichEquivRatioTargetDelta_e = TableInterpolation2D_real_T
          (BaseEngineController_LS_B.s441_motohawk_prelookup1,
           BaseEngineController_LS_B.s443_motohawk_prelookup1, (real_T *)
           ((EqRatio_SpkOfsMultMap_DataStore())), 9, 9);
        (EqRatio_SpkOfsMult_DataStore()) = rtb_RichEquivRatioTargetDelta_e;
      }

      /* Product: '<S277>/Product' incorporates:
       *  S-Function (motohawk_sfun_interpolation_1d): '<S277>/motohawk_interpolation_1d'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S277>/motohawk_interpolation_2d3'
       *  S-Function (motohawk_sfun_prelookup): '<S277>/motohawk_prelookup'
       */
      BaseEngineController_LS_B.s277_Product = rtb_motohawk_interpolation_1d_h *
        rtb_RichEquivRatioTargetDelta_e;

      /* Sum: '<S116>/Apply Offsets to Base Spark Advance1' incorporates:
       *  S-Function (motohawk_sfun_interpolation_2d): '<S116>/motohawk_interpolation_2d2'
       *  Sum: '<S116>/Apply Offsets to Base Spark Advance3'
       */
      BaseEngineController_LS_B.s116_ApplyOffsetstoBaseSparkAdvance1 =
        ((((rtb_RichEquivRatioTargetDelta + BaseEngineController_LS_B.s281_Add)
           + BaseEngineController_LS_B.s278_Product) +
          BaseEngineController_LS_B.s277_Product) +
         BaseEngineController_LS_B.s114_IdleSpk) +
        BaseEngineController_LS_B.s151_SpkOut;

      /* MinMax: '<S284>/MinMax' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S280>/motohawk_calibration5'
       */
      rtb_Product_h =
        (BaseEngineController_LS_B.s116_ApplyOffsetstoBaseSparkAdvance1 >=
         (MinSparkLimit_DataStore())) || rtIsNaN((MinSparkLimit_DataStore())) ?
        BaseEngineController_LS_B.s116_ApplyOffsetstoBaseSparkAdvance1 :
        (MinSparkLimit_DataStore());

      /* Switch: '<S280>/Switch1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S280>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S280>/motohawk_interpolation_1d4'
       */
      if (BaseEngineController_LS_B.s226_RelOp) {
        /* S-Function Block: <S280>/motohawk_interpolation_1d4 */
        {
          extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T
            *tbl_data, uint32_T sz);
          rtb_motohawk_interpolation_1d4_p = TableInterpolation1D_real_T
            (BaseEngineController_LS_B.s441_motohawk_prelookup1, (real_T *)
             ((MaxSparkLimitTbl_DataStore())), 9);
          (MaxSparkLimit_DataStore()) = rtb_motohawk_interpolation_1d4_p;
        }

        rtb_Product1_fs = rtb_motohawk_interpolation_1d4_p;
      } else {
        rtb_Product1_fs = (MaxSparkLimitOffIdle_DataStore());
      }

      /* End of Switch: '<S280>/Switch1' */

      /* MinMax: '<S284>/MinMax1' incorporates:
       *  MinMax: '<S284>/MinMax'
       */
      BaseEngineController_LS_B.s284_MinMax1 = (rtb_Product_h <= rtb_Product1_fs)
        || rtIsNaN(rtb_Product1_fs) ? rtb_Product_h : rtb_Product1_fs;

      /* UnitDelay: '<S279>/Unit Delay' */
      rtb_Product_h = BaseEngineController_LS_DWork.s279_UnitDelay_DSTATE;

      /* Switch: '<S279>/Switch' incorporates:
       *  UnitDelay: '<S282>/Initial Condition is True'
       */
      if (BaseEngineController_LS_DWork.s282_InitialConditionisTrue_DSTATE) {
        BaseEngineController_LS_B.s279_Switch =
          BaseEngineController_LS_B.s284_MinMax1;
      } else {
        /* Sum: '<S279>/Sum' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S279>/motohawk_calibration'
         */
        rtb_Product1_fs = rtb_Product_h + (SparkAdv_DeltaHi_DataStore());

        /* MinMax: '<S283>/MinMax' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S279>/motohawk_calibration1'
         *  Sum: '<S279>/Sum1'
         */
        rtb_Product_h -= (SparkAdv_DeltaLo_DataStore());

        /* MinMax: '<S283>/MinMax1' incorporates:
         *  MinMax: '<S283>/MinMax'
         */
        rtb_Product_h = (BaseEngineController_LS_B.s284_MinMax1 >= rtb_Product_h)
          || rtIsNaN(rtb_Product_h) ? BaseEngineController_LS_B.s284_MinMax1 :
          rtb_Product_h;
        BaseEngineController_LS_B.s279_Switch = (rtb_Product_h <=
          rtb_Product1_fs) || rtIsNaN(rtb_Product1_fs) ? rtb_Product_h :
          rtb_Product1_fs;
      }

      /* End of Switch: '<S279>/Switch' */

      /* S-Function Block: <S116>/motohawk_interpolation_2d1 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        BaseEngineController_LS_B.s116_motohawk_interpolation_2d1 =
          TableInterpolation2D_real_T
          (BaseEngineController_LS_B.s441_motohawk_prelookup1,
           BaseEngineController_LS_B.s443_motohawk_prelookup1, (real_T *)
           ((BaseSparkEnergyMap_DataStore())), 9, 9);
        (BaseSparkEnergy_DataStore()) =
          BaseEngineController_LS_B.s116_motohawk_interpolation_2d1;
      }

      /* Update for UnitDelay: '<S282>/Initial Condition is True' incorporates:
       *  Constant: '<S282>/False After First Sample'
       */
      BaseEngineController_LS_DWork.s282_InitialConditionisTrue_DSTATE = FALSE;

      /* Update for UnitDelay: '<S279>/Unit Delay' */
      BaseEngineController_LS_DWork.s279_UnitDelay_DSTATE =
        BaseEngineController_LS_B.s279_Switch;
    }
  }
}
