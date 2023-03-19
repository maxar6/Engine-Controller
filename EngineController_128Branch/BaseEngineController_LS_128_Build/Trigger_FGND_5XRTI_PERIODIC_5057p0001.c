/*
 * Trigger_FGND_5XRTI_PERIODIC_5057p0001.c
 *
 * Code generation for model "BaseEngineController_LS_128.mdl".
 *
 * Model version              : 1.2189
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Tue Nov 22 13:22:09 2022
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_LS_128.h"
#include "BaseEngineController_LS_128_private.h"

void Trigger_FGND_5XRTI_PERIODIC_5057p0001(void)
{
  /* Named constants for Stateflow: '<S932>/ECUP Latch' */
#define BaseEngineController_LS_128_IN_PowerDown (1U)
#define BaseEngineController_LS_128_IN_PowerUp (2U)

  {
    extern void Timer_FreeRunningCounter_GetTime(uint32_T *lower32Bits, uint32_T
      *upper32Bits);
    uint32_T lower32Bits;
    uint32_T upper32Bits;
    Timer_FreeRunningCounter_GetTime(&lower32Bits, &upper32Bits);
    BaseEngineController_LS_128_M->Timing.clockTick0 = lower32Bits;
    BaseEngineController_LS_128_M->Timing.clockTickH0 = upper32Bits;
    BaseEngineController_LS_128_M->Timing.clockTick0 = lower32Bits;
    BaseEngineController_LS_128_M->Timing.clockTickH0 = upper32Bits;
    BaseEngineController_LS_128_M->Timing.clockTick0 = lower32Bits;
    BaseEngineController_LS_128_M->Timing.clockTickH0 = upper32Bits;
    BaseEngineController_LS_128_M->Timing.clockTick0 = lower32Bits;
    BaseEngineController_LS_128_M->Timing.clockTickH0 = upper32Bits;
    BaseEngineController_LS_128_M->Timing.clockTick0 = lower32Bits;
    BaseEngineController_LS_128_M->Timing.clockTickH0 = upper32Bits;
    BaseEngineController_LS_128_M->Timing.clockTick0 = lower32Bits;
    BaseEngineController_LS_128_M->Timing.clockTickH0 = upper32Bits;
    BaseEngineController_LS_128_M->Timing.clockTick0 = lower32Bits;
    BaseEngineController_LS_128_M->Timing.clockTickH0 = upper32Bits;
  }

  if (BaseEngineController_LS_128_DWork.s93_motohawk_trigger1_DWORK1) {
    /* Output and update for function-call system: '<S93>/DFCO' */
    {
      /* local block i/o variables */
      real_T rtb_motohawk_interpolation_1d;
      real_T rtb_motohawk_delta_time_f0;
      real_T rtb_motohawk_interpolation_1d1;
      real_T rtb_motohawk_delta_time_c;
      real_T rtb_Saturation_ps;
      boolean_T rtb_CombinatorialLogic[2];
      boolean_T rtb_LogicalOperator2_b;
      boolean_T rtb_LogicalOperator4;
      boolean_T rtb_RelationalOperator_j;
      boolean_T rtb_RelationalOperator1_b;
      boolean_T rtb_LogicalOperator1_m;
      real_T rtb_Switch_a;
      real_T rtb_Switch1_j;

      /* S-Function Block: <S147>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d = TableInterpolation1D_real_T
          (BaseEngineController_LS_128_B.s433_motohawk_prelookup, (real_T *)
           ((DFCOEntryRPMTbl_DataStore())), 5);
        (DFCOEntryRPM_DataStore()) = rtb_motohawk_interpolation_1d;
      }

      /* RelationalOperator: '<S147>/Relational Operator' incorporates:
       *  S-Function (motohawk_sfun_interpolation_1d): '<S147>/motohawk_interpolation_1d'
       */
      rtb_RelationalOperator_j = (BaseEngineController_LS_128_B.s557_Sum1 >=
        rtb_motohawk_interpolation_1d);

      /* RelationalOperator: '<S147>/Relational Operator1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S147>/motohawk_calibration1'
       */
      rtb_RelationalOperator1_b = (BaseEngineController_LS_128_B.s445_Switch1 <=
                                   (DFCOEntryAPP_DataStore()));

      /* RelationalOperator: '<S147>/Relational Operator2' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S147>/motohawk_calibration2'
       */
      rtb_LogicalOperator2_b = (BaseEngineController_LS_128_B.s608_Merge <=
        (real_T)((uint8_T)(DFCOEntryMAP_DataStore())));

      /* S-Function (motohawk_sfun_fault_action): '<S147>/motohawk_fault_action'
       *
       * Regarding '<S147>/motohawk_fault_action':
         Get Fault Action Status: DFCODisable
       */
      {
        extern boolean_T GetFaultActionStatus(uint32_T action);
        rtb_LogicalOperator4 = GetFaultActionStatus(1);
      }

      /* Logic: '<S147>/Logical Operator1' */
      rtb_LogicalOperator1_m = !rtb_LogicalOperator4;

      /* Logic: '<S147>/Logical Operator' incorporates:
       *  RelationalOperator: '<S147>/Relational Operator3'
       *  S-Function (motohawk_sfun_calibration): '<S147>/motohawk_calibration3'
       *  S-Function (motohawk_sfun_calibration): '<S147>/motohawk_calibration4'
       *  S-Function (motohawk_sfun_data_read): '<S147>/motohawk_data_read'
       *  Sum: '<S147>/Sum1'
       */
      BaseEngineController_LS_128_B.s147_LogicalOperator =
        ((rtb_RelationalOperator_j && rtb_RelationalOperator1_b &&
          rtb_LogicalOperator2_b && rtb_LogicalOperator1_m &&
          (DFCOEnable_DataStore()) && (BaseEngineController_LS_128_B.s557_Sum1 >=
           MinGovRPMSetPt_DataStore() + (real_T)((int16_T)
            (DFCOEnterIdleSpeed_DataStore())))));

      /* S-Function Block: <S150>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_128_DWork.s150_motohawk_delta_time_DWORK1,
           NULL);
        rtb_motohawk_delta_time_f0 = ((real_T) delta) * 0.000001;
      }

      /* Switch: '<S150>/Switch' incorporates:
       *  Constant: '<S150>/Constant'
       *  S-Function (motohawk_sfun_data_read): '<S150>/motohawk_data_read'
       *  S-Function (motohawk_sfun_delta_time): '<S150>/motohawk_delta_time'
       *  Sum: '<S150>/Sum'
       */
      if (BaseEngineController_LS_128_B.s147_LogicalOperator) {
        rtb_Switch_a = rtb_motohawk_delta_time_f0 + DFCOEnterTimer_DataStore();
      } else {
        rtb_Switch_a = 0.0;
      }

      /* End of Switch: '<S150>/Switch' */
      /* Logic: '<S147>/Logical Operator2' incorporates:
       *  RelationalOperator: '<S147>/Relational Operator4'
       *  S-Function (motohawk_sfun_calibration): '<S147>/motohawk_calibration5'
       */
      rtb_LogicalOperator2_b =
        (BaseEngineController_LS_128_B.s147_LogicalOperator && (rtb_Switch_a >=
          (DFCODelayTime_DataStore())));

      /* RelationalOperator: '<S147>/Relational Operator5' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S147>/motohawk_calibration9'
       *  S-Function (motohawk_sfun_data_read): '<S147>/motohawk_data_read'
       *  Sum: '<S147>/Sum'
       */
      rtb_RelationalOperator_j = (BaseEngineController_LS_128_B.s557_Sum1 <=
        MinGovRPMSetPt_DataStore() + (real_T)((int16_T)
        (DFCOExitIdleSpeed_DataStore())));

      /* S-Function Block: <S147>/motohawk_interpolation_1d1 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d1 = TableInterpolation1D_real_T
          (BaseEngineController_LS_128_B.s433_motohawk_prelookup, (real_T *)
           ((DFCOExitRPMTbl_DataStore())), 5);
        (DFCOExitRPM_DataStore()) = rtb_motohawk_interpolation_1d1;
      }

      /* RelationalOperator: '<S147>/Relational Operator8' incorporates:
       *  S-Function (motohawk_sfun_interpolation_1d): '<S147>/motohawk_interpolation_1d1'
       */
      rtb_RelationalOperator1_b = (BaseEngineController_LS_128_B.s557_Sum1 <=
        rtb_motohawk_interpolation_1d1);

      /* RelationalOperator: '<S147>/Relational Operator6' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S147>/motohawk_calibration6'
       */
      rtb_LogicalOperator1_m = (BaseEngineController_LS_128_B.s445_Switch1 >=
        (DFCOExitAPP_DataStore()));

      /* Logic: '<S147>/Logical Operator4' incorporates:
       *  Logic: '<S147>/Logical Operator3'
       *  RelationalOperator: '<S147>/Relational Operator7'
       *  S-Function (motohawk_sfun_calibration): '<S147>/motohawk_calibration7'
       */
      rtb_LogicalOperator4 = ((rtb_RelationalOperator_j &&
        rtb_RelationalOperator1_b && rtb_LogicalOperator1_m &&
        (BaseEngineController_LS_128_B.s608_Merge >= (real_T)((uint8_T)
        (DFCOExitMAP_DataStore())))) || rtb_LogicalOperator4);

      /* CombinatorialLogic: '<S149>/Combinatorial  Logic' */
      {
        uint_T rowidx= 0;

        /* Compute the truth table row index corresponding to the input */
        rowidx = (rowidx << 1) + (uint_T)(rtb_LogicalOperator2_b != 0);
        rowidx = (rowidx << 1) + (uint_T)(rtb_LogicalOperator4 != 0);

        /* Copy the appropriate row of the table into the block output vector */
        rtb_CombinatorialLogic[0] =
          BaseEngineController_LS_128_ConstP.pooled888[rowidx];
        rtb_CombinatorialLogic[1] =
          BaseEngineController_LS_128_ConstP.pooled888[rowidx + 4];
      }

      /* Switch: '<S149>/Switch1' incorporates:
       *  UnitDelay: '<S149>/Unit Delay'
       */
      if (rtb_CombinatorialLogic[1]) {
        BaseEngineController_LS_128_B.s149_Switch1 = rtb_CombinatorialLogic[0];
      } else {
        BaseEngineController_LS_128_B.s149_Switch1 =
          BaseEngineController_LS_128_DWork.s149_UnitDelay_DSTATE;
      }

      /* End of Switch: '<S149>/Switch1' */

      /* S-Function Block: <S148>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_128_DWork.s148_motohawk_delta_time_DWORK1,
           NULL);
        rtb_motohawk_delta_time_c = ((real_T) delta) * 0.000001;
      }

      /* MultiPortSwitch: '<S148>/Multiport Switch' incorporates:
       *  Gain: '<S148>/Ramp Down'
       *  Product: '<S148>/Product'
       *  Product: '<S148>/Product1'
       *  S-Function (motohawk_sfun_delta_time): '<S148>/motohawk_delta_time'
       */
      if (BaseEngineController_LS_128_B.s149_Switch1 == FALSE) {
        /* Switch: '<S148>/Switch' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S147>/motohawk_calibration11'
         *  S-Function (motohawk_sfun_delta_time): '<S148>/motohawk_delta_time'
         */
        if ((DFCOExitRampTime_DataStore()) > 0.0) {
          rtb_Switch1_j = (DFCOExitRampTime_DataStore());
        } else {
          rtb_Switch1_j = rtb_motohawk_delta_time_c;
        }

        /* End of Switch: '<S148>/Switch' */
        rtb_Switch1_j = rtb_motohawk_delta_time_c / rtb_Switch1_j * -1.0;
      } else {
        /* Switch: '<S148>/Switch1' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S147>/motohawk_calibration8'
         *  S-Function (motohawk_sfun_delta_time): '<S148>/motohawk_delta_time'
         */
        if ((DFCOEnterRampTime_DataStore()) > 0.0) {
          rtb_Switch1_j = (DFCOEnterRampTime_DataStore());
        } else {
          rtb_Switch1_j = rtb_motohawk_delta_time_c;
        }

        /* End of Switch: '<S148>/Switch1' */
        rtb_Switch1_j = rtb_motohawk_delta_time_c / rtb_Switch1_j;
      }

      /* End of MultiPortSwitch: '<S148>/Multiport Switch' */

      /* Sum: '<S148>/Sum' incorporates:
       *  UnitDelay: '<S148>/state'
       */
      rtb_Switch1_j += BaseEngineController_LS_128_DWork.s148_state_DSTATE;

      /* MinMax: '<S151>/MinMax1' incorporates:
       *  Constant: '<S148>/Constant'
       *  Constant: '<S148>/Constant1'
       *  MinMax: '<S151>/MinMax'
       */
      rtb_Switch1_j = rtb_Switch1_j >= 0.0 ? rtb_Switch1_j : 0.0;
      rtb_Switch1_j = rtb_Switch1_j <= 1.0 ? rtb_Switch1_j : 1.0;

      /* Inport: '<S105>/EquivRatioInfo' */
      BaseEngineController_LS_128_B.s105_EquivRatioInfo[0] =
        BaseEngineController_LS_128_B.s103_DesEquivRatio;
      BaseEngineController_LS_128_B.s105_EquivRatioInfo[1] =
        BaseEngineController_LS_128_B.s103_WarmUpRatio;
      BaseEngineController_LS_128_B.s105_EquivRatioInfo[2] =
        BaseEngineController_LS_128_B.s127_Switch;
      BaseEngineController_LS_128_B.s105_EquivRatioInfo[3] =
        BaseEngineController_LS_128_B.s103_IATEnrichment;
      BaseEngineController_LS_128_B.s105_EquivRatioInfo[4] =
        BaseEngineController_LS_128_B.s103_CATEnrichment;

      /* Product: '<S147>/Product1' incorporates:
       *  Constant: '<S147>/Constant'
       *  MinMax: '<S151>/MinMax1'
       *  Sum: '<S147>/Sum2'
       */
      BaseEngineController_LS_128_B.s147_Product1 = (1.0 - rtb_Switch1_j) *
        BaseEngineController_LS_128_B.s105_EquivRatioInfo[0];

      /* Product: '<S147>/Product2' incorporates:
       *  MinMax: '<S151>/MinMax1'
       *  S-Function (motohawk_sfun_calibration): '<S147>/motohawk_calibration10'
       */
      BaseEngineController_LS_128_B.s147_SpkOut = rtb_Switch1_j * (real_T)
        ((int16_T)(DFCOExitSparkRet_DataStore()));

      /* Saturate: '<S150>/Saturation' */
      rtb_Saturation_ps = rtb_Switch_a >= 16000.0 ? 16000.0 : rtb_Switch_a <=
        0.0 ? 0.0 : rtb_Switch_a;

      /* S-Function (motohawk_sfun_data_write): '<S150>/motohawk_data_write' */
      /* Write to Data Storage as scalar: DFCOEnterTimer */
      {
        DFCOEnterTimer_DataStore() = rtb_Saturation_ps;
      }

      /* Update for UnitDelay: '<S149>/Unit Delay' */
      BaseEngineController_LS_128_DWork.s149_UnitDelay_DSTATE =
        BaseEngineController_LS_128_B.s149_Switch1;

      /* Update for UnitDelay: '<S148>/state' incorporates:
       *  MinMax: '<S151>/MinMax1'
       */
      BaseEngineController_LS_128_DWork.s148_state_DSTATE = rtb_Switch1_j;
    }

    /* Output and update for function-call system: '<S93>/MinGovernor' */
    {
      /* local block i/o variables */
      real_T rtb_motohawk_delta_time_a;
      real_T rtb_motohawk_delta_time_ft;
      real_T rtb_motohawk_delta_time_n;
      real_T rtb_motohawk_delta_time_k;
      real_T rtb_motohawk_interpolation_1d2;
      real_T rtb_motohawk_interpolation_1d3;
      real_T rtb_motohawk_delta_time_ca;
      real_T rtb_motohawk_interpolation_1d2_g;
      real_T rtb_motohawk_interpolation_1d1_m;
      real_T rtb_motohawk_delta_time_p;
      real_T rtb_Saturation_j;
      real_T rtb_motohawk_delta_time_g;
      real_T rtb_Saturation_h;
      real_T rtb_motohawk_interpolation_1d1_d;
      real_T rtb_motohawk_delta_time_h;
      real_T rtb_MinMax1_bl;
      real_T rtb_motohawk_delta_time_kh;
      real_T rtb_Saturation_n;
      real_T rtb_motohawk_interpolation_1d2_c;
      real_T rtb_motohawk_delta_time_i;
      real_T rtb_motohawk_interpolation_1d1_b;
      real_T rtb_Switch_b;
      int16_T rtb_motohawk_interpolation_1d2_cv;
      index_T rtb_motohawk_prelookup1;
      index_T rtb_motohawk_prelookup1_n;
      boolean_T rtb_RelOp;
      ZCEventType zcEvent;
      real_T rtb_Sum2_j;
      real_T rtb_Sum1_j;
      int16_T rtb_DataTypeConversion_kt;
      boolean_T rtb_RelationalOperator2_g;
      real_T rtb_UnitDelay1_b;
      real_T rtb_Product5;
      real_T rtb_DataTypeConversion_k;
      boolean_T rtb_LogicalOperator_e;
      real_T rtb_Product4;
      real_T rtb_Product2_b;
      int32_T tmp;

      /* Sum: '<S224>/Sum2' incorporates:
       *  UnitDelay: '<S224>/Unit Delay'
       */
      rtb_Sum2_j = BaseEngineController_LS_128_B.s483_RPMInst -
        BaseEngineController_LS_128_DWork.s224_UnitDelay_DSTATE;

      /* S-Function Block: <S224>/motohawk_delta_time */
      rtb_motohawk_delta_time_a = 0.005;

      /* Product: '<S224>/Product' incorporates:
       *  S-Function (motohawk_sfun_delta_time): '<S224>/motohawk_delta_time'
       */
      rtb_Sum2_j /= rtb_motohawk_delta_time_a;

      /* S-Function Block: <S225>/motohawk_delta_time */
      rtb_Switch_b = 0.005;

      /* Product: '<S225>/Product' incorporates:
       *  MinMax: '<S225>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S225>/motohawk_calibration'
       */
      rtb_Switch_b /= (rtb_Switch_b >= (RPMFallingFiltConst_DataStore())) ||
        rtIsNaN((RPMFallingFiltConst_DataStore())) ? rtb_Switch_b :
        (RPMFallingFiltConst_DataStore());

      /* Sum: '<S226>/Sum1' incorporates:
       *  Constant: '<S226>/Constant'
       *  Product: '<S226>/Product'
       *  Product: '<S226>/Product1'
       *  Sum: '<S226>/Sum'
       *  UnitDelay: '<S226>/Unit Delay'
       */
      rtb_Sum1_j = (1.0 - rtb_Switch_b) *
        BaseEngineController_LS_128_DWork.s226_UnitDelay_DSTATE + rtb_Sum2_j *
        rtb_Switch_b;

      /* RelationalOperator: '<S220>/Relational Operator' incorporates:
       *  Gain: '<S220>/Falling RPM is Negative Derivative'
       *  S-Function (motohawk_sfun_calibration): '<S220>/motohawk_calibration'
       */
      BaseEngineController_LS_128_B.s220_RelationalOperator = ((rtb_Sum1_j <
        -(RPMFallingRate_DataStore())));

      /* DataTypeConversion: '<S206>/Data Type Conversion' */
      if (rtIsNaN(BaseEngineController_LS_128_B.s483_RPMInst) || rtIsInf
          (BaseEngineController_LS_128_B.s483_RPMInst)) {
        rtb_Sum2_j = 0.0;
      } else {
        rtb_Sum2_j = fmod(floor(BaseEngineController_LS_128_B.s483_RPMInst),
                          65536.0);
      }

      rtb_DataTypeConversion_kt = (int16_T)(rtb_Sum2_j < 0.0 ? (int16_T)
        -(int16_T)(uint16_T)-rtb_Sum2_j : (int16_T)(uint16_T)rtb_Sum2_j);

      /* End of DataTypeConversion: '<S206>/Data Type Conversion' */

      /* Outputs for Atomic SubSystem: '<S110>/Base RPM Set Pt' */

      /* S-Function Block: <S204>/motohawk_interpolation_1d2 */
      {
        extern int16_T TableInterpolation1D_int16_T(uint16_T idx, int16_T
          *tbl_data, uint32_T sz);
        rtb_motohawk_interpolation_1d2_cv = TableInterpolation1D_int16_T
          (BaseEngineController_LS_128_B.s433_motohawk_prelookup, (int16_T *)
           ((MinGovClntRPMSetPtTbl_DataStore())), 5);
        (MinGovClntRPMSetPt_DataStore()) = rtb_motohawk_interpolation_1d2_cv;
      }

      /* End of Outputs for SubSystem: '<S110>/Base RPM Set Pt' */

      /* Sum: '<S206>/Sum' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S206>/motohawk_calibration4'
       */
      tmp = ((int16_T)(InGearMinGovEntryRPMDelta_DataStore())) +
        rtb_motohawk_interpolation_1d2_cv;
      if (tmp > 32767) {
        tmp = 32767;
      } else {
        if (tmp <= -32768) {
          tmp = -32768;
        }
      }

      /* End of Sum: '<S206>/Sum' */

      /* RelationalOperator: '<S206>/Relational Operator' incorporates:
       *  Sum: '<S206>/Sum'
       */
      BaseEngineController_LS_128_B.s206_RelationalOperator =
        ((rtb_DataTypeConversion_kt < tmp));

      /* Sum: '<S206>/Sum2' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S206>/motohawk_calibration6'
       */
      tmp = rtb_motohawk_interpolation_1d2_cv - ((int16_T)
        (StallSaverDeltaRPM_DataStore()));
      if (tmp > 32767) {
        tmp = 32767;
      } else {
        if (tmp <= -32768) {
          tmp = -32768;
        }
      }

      /* End of Sum: '<S206>/Sum2' */

      /* RelationalOperator: '<S206>/Relational Operator3' incorporates:
       *  Sum: '<S206>/Sum2'
       */
      BaseEngineController_LS_128_B.s206_RelationalOperator3 =
        ((rtb_DataTypeConversion_kt < tmp));

      /* MultiPortSwitch: '<S206>/Multiport Switch1' incorporates:
       *  S-Function (motohawk_sfun_data_read): '<S206>/motohawk_data_read1'
       */
      if (AirControlSource_DataStore() == FALSE) {
        rtb_Switch_b = BaseEngineController_LS_128_B.s445_Switch1;
      } else {
        rtb_Switch_b = BaseEngineController_LS_128_B.s452_Switch2;
      }

      /* End of MultiPortSwitch: '<S206>/Multiport Switch1' */
      /* RelationalOperator: '<S206>/Relational Operator1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S206>/motohawk_calibration5'
       */
      BaseEngineController_LS_128_B.s206_RelationalOperator1 = ((rtb_Switch_b <
        (MinGovEntryAirPcnt_DataStore())));

      /* MultiPortSwitch: '<S206>/Multiport Switch' incorporates:
       *  Constant: '<S206>/Constant'
       *  RelationalOperator: '<S206>/Relational Operator4'
       *  S-Function (motohawk_sfun_data_read): '<S206>/motohawk_data_read1'
       *  UnitDelay: '<S110>/Unit Delay3'
       */
      if (AirControlSource_DataStore() == FALSE) {
        rtb_RelationalOperator2_g = (BaseEngineController_LS_128_B.s460_Sum2 >
          BaseEngineController_LS_128_DWork.s110_UnitDelay3_DSTATE);
      } else {
        rtb_RelationalOperator2_g = TRUE;
      }

      /* End of MultiPortSwitch: '<S206>/Multiport Switch' */

      /* Logic: '<S206>/Logical Operator' incorporates:
       *  RelationalOperator: '<S206>/Relational Operator2'
       *  S-Function (motohawk_sfun_calibration): '<S206>/motohawk_calibration3'
       *  S-Function (motohawk_sfun_calibration): '<S206>/motohawk_calibration5'
       *  Sum: '<S206>/Sum1'
       */
      BaseEngineController_LS_128_B.s206_LogicalOperator = (((rtb_Switch_b >=
        (MinGovEntryAirPcnt_DataStore()) + (MinGovAirPcntHyst_DataStore())) &&
        rtb_RelationalOperator2_g));

      /* S-Function Block: <S223>/motohawk_delta_time */
      rtb_motohawk_delta_time_ft = 0.005;

      /* Switch: '<S223>/Switch' incorporates:
       *  Constant: '<S223>/Constant'
       *  S-Function (motohawk_sfun_data_read): '<S223>/motohawk_data_read'
       *  S-Function (motohawk_sfun_delta_time): '<S223>/motohawk_delta_time'
       *  Sum: '<S223>/Sum'
       */
      if (BaseEngineController_LS_128_B.s206_RelationalOperator1) {
        rtb_Switch_b = rtb_motohawk_delta_time_ft + IdleEnterTimer_DataStore();
      } else {
        rtb_Switch_b = 0.0;
      }

      /* End of Switch: '<S223>/Switch' */
      /* RelationalOperator: '<S206>/Relational Operator5' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S206>/motohawk_calibration2'
       */
      BaseEngineController_LS_128_B.s206_RelationalOperator5 = ((rtb_Switch_b >
        (MinGovEntryAirTimeThresh_DataStore())));

      /* Stateflow: '<S206>/IdleStateMachine' */
      BaseEngineController_LS_128_IdleStateMachine();

      /* RelationalOperator: '<S222>/RelOp' incorporates:
       *  Constant: '<S222>/Constant'
       */
      BaseEngineController_LS_128_B.s222_RelOp =
        ((BaseEngineController_LS_128_B.s221_IdleState == 2));

      /* UnitDelay: '<S110>/Unit Delay1' */
      rtb_UnitDelay1_b =
        BaseEngineController_LS_128_DWork.s110_UnitDelay1_DSTATE;

      /* Outputs for Enabled SubSystem: '<S110>/Base Airflow Table Adapt' incorporates:
       *  EnablePort: '<S203>/Enable'
       */
      if (BaseEngineController_LS_128_B.s222_RelOp) {
        /* Product: '<S203>/Product0' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S203>/motohawk_calibration2'
         */
        rtb_Sum2_j = rtb_UnitDelay1_b * (BaseAirflowAdaptGain_DataStore());

        /* MinMax: '<S218>/MinMax' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S216>/motohawk_calibration'
         */
        rtb_Sum2_j = (rtb_Sum2_j >= (BaseAirflowAdaptErrorLwrLim_DataStore())) ||
          rtIsNaN((BaseAirflowAdaptErrorLwrLim_DataStore())) ? rtb_Sum2_j :
          (BaseAirflowAdaptErrorLwrLim_DataStore());

        /* MinMax: '<S218>/MinMax1' incorporates:
         *  MinMax: '<S218>/MinMax'
         *  S-Function (motohawk_sfun_calibration): '<S216>/motohawk_calibration1'
         */
        rtb_MinMax1_bl = (rtb_Sum2_j <= (BaseAirflowAdaptErrorUprLim_DataStore()))
          || rtIsNaN((BaseAirflowAdaptErrorUprLim_DataStore())) ? rtb_Sum2_j :
          (BaseAirflowAdaptErrorUprLim_DataStore());

        /* Outputs for Atomic SubSystem: '<S203>/Idle Control Enable Delay' */

        /* S-Function Block: <S217>/motohawk_delta_time */
        rtb_motohawk_delta_time_kh = 0.005;

        /* Switch: '<S217>/Switch' incorporates:
         *  Constant: '<S217>/Constant'
         *  S-Function (motohawk_sfun_data_read): '<S217>/motohawk_data_read'
         *  S-Function (motohawk_sfun_delta_time): '<S217>/motohawk_delta_time'
         *  Sum: '<S217>/Sum'
         */
        if (BaseEngineController_LS_128_B.s222_RelOp) {
          rtb_Sum2_j = rtb_motohawk_delta_time_kh + BaseAirflowTimer_DataStore();
        } else {
          rtb_Sum2_j = 0.0;
        }

        /* End of Switch: '<S217>/Switch' */
        /* RelationalOperator: '<S215>/Relational Operator' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S215>/motohawk_calibration1'
         */
        rtb_RelationalOperator2_g = (rtb_Sum2_j >
          (BaseAirflowAdaptDelayTime_DataStore()));

        /* Saturate: '<S217>/Saturation' */
        rtb_Saturation_n = rtb_Sum2_j >= 16000.0 ? 16000.0 : rtb_Sum2_j <= 0.0 ?
          0.0 : rtb_Sum2_j;

        /* S-Function (motohawk_sfun_data_write): '<S217>/motohawk_data_write' */
        /* Write to Data Storage as scalar: BaseAirflowTimer */
        {
          BaseAirflowTimer_DataStore() = rtb_Saturation_n;
        }

        /* End of Outputs for SubSystem: '<S203>/Idle Control Enable Delay' */

        /* Logic: '<S203>/Logical Operator1' incorporates:
         *  Abs: '<S203>/Abs'
         *  RelationalOperator: '<S203>/Relational Operator'
         *  S-Function (motohawk_sfun_calibration): '<S203>/motohawk_calibration3'
         *  S-Function (motohawk_sfun_calibration): '<S203>/motohawk_calibration4'
         */
        BaseEngineController_LS_128_B.s203_LogicalOperator1 =
          (((BaseAirflowAdaptEnable_DataStore()) && rtb_RelationalOperator2_g &&
            (fabs(rtb_UnitDelay1_b) <= (BaseAirflowAdaptDelta_DataStore()))));

        /* Outputs for Enabled SubSystem: '<S203>/Adapt Base Airflow Table' incorporates:
         *  EnablePort: '<S214>/Enable'
         */
        if (BaseEngineController_LS_128_B.s203_LogicalOperator1) {
          /* S-Function Block: <S214>/motohawk_adapt_table */
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
              _new = (BaseAirflowOfstTbl_DataStore())[_i] + rtb_MinMax1_bl;
              if (_new > (BaseAirflowOfstMaxValue_DataStore()))
                _new = (BaseAirflowOfstMaxValue_DataStore());
              if (_new < (BaseAirflowOfstMinValue_DataStore()))
                _new = (BaseAirflowOfstMinValue_DataStore());
              (BaseAirflowOfstTbl_DataStore())[_i] = _new;
            } else if (_frac == 3) {
              _new = (BaseAirflowOfstTbl_DataStore())[_i+1] + rtb_MinMax1_bl;
              if (_new > (BaseAirflowOfstMaxValue_DataStore()))
                _new = (BaseAirflowOfstMaxValue_DataStore());
              if (_new < (BaseAirflowOfstMinValue_DataStore()))
                _new = (BaseAirflowOfstMinValue_DataStore());
              (BaseAirflowOfstTbl_DataStore())[_i+1] = _new;
            } else {
              real_T _half = rtb_MinMax1_bl / 2;
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

        /* End of Outputs for SubSystem: '<S203>/Adapt Base Airflow Table' */
      }

      /* End of Outputs for SubSystem: '<S110>/Base Airflow Table Adapt' */
      /* S-Function Block: <S205>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_128_DWork.s205_motohawk_delta_time_DWORK1,
           NULL);
        rtb_motohawk_delta_time_n = ((real_T) delta) * 0.000001;
      }

      /* MultiPortSwitch: '<S205>/Multiport Switch' incorporates:
       *  Gain: '<S205>/Ramp Down'
       *  Product: '<S205>/Product'
       *  Product: '<S205>/Product1'
       *  S-Function (motohawk_sfun_delta_time): '<S205>/motohawk_delta_time'
       */
      if (BaseEngineController_LS_128_B.s222_RelOp == FALSE) {
        /* Switch: '<S205>/Switch' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S110>/motohawk_calibration3'
         *  S-Function (motohawk_sfun_delta_time): '<S205>/motohawk_delta_time'
         */
        if ((IdleExitTimeConst_DataStore()) > 0.0) {
          rtb_Sum2_j = (IdleExitTimeConst_DataStore());
        } else {
          rtb_Sum2_j = rtb_motohawk_delta_time_n;
        }

        /* End of Switch: '<S205>/Switch' */
        rtb_Product5 = rtb_motohawk_delta_time_n / rtb_Sum2_j * -1.0;
      } else {
        rtb_Product5 = rtb_motohawk_delta_time_n / rtb_motohawk_delta_time_n;
      }

      /* End of MultiPortSwitch: '<S205>/Multiport Switch' */

      /* Sum: '<S205>/Sum' incorporates:
       *  UnitDelay: '<S205>/state'
       */
      rtb_Product5 += BaseEngineController_LS_128_DWork.s205_state_DSTATE;

      /* MinMax: '<S219>/MinMax1' incorporates:
       *  Constant: '<S205>/Constant'
       *  Constant: '<S205>/Constant1'
       *  MinMax: '<S219>/MinMax'
       */
      rtb_Sum2_j = rtb_Product5 >= 0.0 ? rtb_Product5 : 0.0;
      BaseEngineController_LS_128_B.s219_MinMax1 = rtb_Sum2_j <= 1.0 ?
        rtb_Sum2_j : 1.0;

      /* RelationalOperator: '<S208>/RelOp' incorporates:
       *  Constant: '<S208>/Constant'
       */
      rtb_RelationalOperator2_g = (BaseEngineController_LS_128_B.s219_MinMax1 ==
        0.0);

      /* UnitDelay: '<S110>/Unit Delay2' */
      rtb_Sum2_j = BaseEngineController_LS_128_DWork.s110_UnitDelay2_DSTATE;

      /* HitCross: '<S110>/Hit  Crossing1' incorporates:
       *  UnitDelay: '<S110>/Unit Delay2'
       */
      zcEvent = rt_ZCFcn(FALLING_ZERO_CROSSING,
                         &BaseEngineController_LS_128_PrevZCSigState.HitCrossing1_Input_ZCE,
                         (BaseEngineController_LS_128_DWork.s110_UnitDelay2_DSTATE
                          - 0.5));
      if (BaseEngineController_LS_128_DWork.s110_HitCrossing1_MODE == 0) {
        if (zcEvent != NO_ZCEVENT) {
          BaseEngineController_LS_128_B.s110_HitCrossing1 =
            !BaseEngineController_LS_128_B.s110_HitCrossing1;
          BaseEngineController_LS_128_DWork.s110_HitCrossing1_MODE = 1;
        } else {
          if (BaseEngineController_LS_128_B.s110_HitCrossing1 && (rtb_Sum2_j !=
               0.5)) {
            BaseEngineController_LS_128_B.s110_HitCrossing1 = FALSE;
          }
        }
      } else {
        if (rtb_Sum2_j != 0.5) {
          BaseEngineController_LS_128_B.s110_HitCrossing1 = FALSE;
        }

        BaseEngineController_LS_128_DWork.s110_HitCrossing1_MODE = 0;
      }

      /* End of HitCross: '<S110>/Hit  Crossing1' */

      /* Logic: '<S110>/Logical Operator' */
      BaseEngineController_LS_128_B.s110_LogicalOperator =
        ((rtb_RelationalOperator2_g ||
          BaseEngineController_LS_128_B.s110_HitCrossing1));

      /* DataTypeConversion: '<S110>/Data Type Conversion' */
      rtb_DataTypeConversion_k = (real_T)rtb_motohawk_interpolation_1d2_cv;

      /* Logic: '<S209>/Logical Operator' */
      rtb_LogicalOperator_e = !BaseEngineController_LS_128_B.s222_RelOp;

      /* S-Function Block: <S209>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_128_DWork.s209_motohawk_delta_time_DWORK1,
           NULL);
        rtb_motohawk_delta_time_k = ((real_T) delta) * 0.000001;
      }

      /* UnitDelay: '<S209>/Unit Delay' */
      rtb_Sum2_j = BaseEngineController_LS_128_DWork.s209_UnitDelay_DSTATE;

      /* Switch: '<S209>/Preload lowpass filter with current RPM while not on Idle' incorporates:
       *  Constant: '<S209>/Constant'
       *  Product: '<S209>/Product2'
       *  Product: '<S209>/Product3'
       *  Sum: '<S209>/Sum'
       *  Sum: '<S209>/Sum1'
       */
      if (rtb_LogicalOperator_e) {
        rtb_Product5 = BaseEngineController_LS_128_B.s483_RPMInst;
      } else {
        /* Product: '<S209>/Product1' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S209>/motohawk_calibration2'
         *  S-Function (motohawk_sfun_delta_time): '<S209>/motohawk_delta_time'
         */
        rtb_UnitDelay1_b = rtb_motohawk_delta_time_k /
          (InGearRPMCtrlEntryFiltC_DataStore());
        rtb_Product5 = (1.0 - rtb_UnitDelay1_b) * rtb_Sum2_j +
          rtb_DataTypeConversion_k * rtb_UnitDelay1_b;
      }

      /* End of Switch: '<S209>/Preload lowpass filter with current RPM while not on Idle' */

      /* MinMax: '<S209>/Don't allow setpoint to ever drop below the TargetRPM' */
      BaseEngineController_LS_128_B.s209_DontallowsetpointtoeverdropbelowtheTargetRPM
        = (rtb_DataTypeConversion_k >= rtb_Product5) || rtIsNaN(rtb_Product5) ?
        rtb_DataTypeConversion_k : rtb_Product5;

      /* Sum: '<S235>/Sum2' */
      BaseEngineController_LS_128_B.s235_Sum2 =
        BaseEngineController_LS_128_B.s209_DontallowsetpointtoeverdropbelowtheTargetRPM
        - BaseEngineController_LS_128_B.s557_Sum1;

      /* Product: '<S235>/Product5' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S211>/motohawk_calibration5'
       */
      rtb_Product5 = BaseEngineController_LS_128_B.s235_Sum2 *
        (AirMinGovErrorGain_DataStore());

      /* S-Function Block: <S211>/motohawk_prelookup1 */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (AirMinGovSpeedErrorIn_DataStore()) =
          BaseEngineController_LS_128_B.s235_Sum2;
        (AirMinGovSpeedErrorIdx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_LS_128_B.s235_Sum2,
           (AirMinGovSpeedErrorIdxArr_DataStore()), 9,
           (AirMinGovSpeedErrorIdx_DataStore()));
        rtb_motohawk_prelookup1 = (AirMinGovSpeedErrorIdx_DataStore());
      }

      /* S-Function Block: <S233>/motohawk_interpolation_1d2 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d2 = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1, (real_T *)
           ((AirMinGovPGainErrorMultTbl_DataStore())), 9);
        (AirMinGovPGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d2;
      }

      /* Product: '<S235>/Product2' incorporates:
       *  Product: '<S233>/Product2'
       *  S-Function (motohawk_sfun_calibration): '<S233>/motohawk_calibration3'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S233>/motohawk_interpolation_1d2'
       *  S-Function (motohawk_sfun_prelookup): '<S211>/motohawk_prelookup1'
       */
      BaseEngineController_LS_128_B.s235_Product2 = (AirMinGovPGain_DataStore())
        * rtb_motohawk_interpolation_1d2 * rtb_Product5;

      /* UnitDelay: '<S236>/Unit Delay' */
      rtb_Sum2_j = BaseEngineController_LS_128_DWork.s236_UnitDelay_DSTATE;

      /* S-Function Block: <S233>/motohawk_interpolation_1d3 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d3 = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1, (real_T *)
           ((AirMinGovDGainErrorMultTbl_DataStore())), 9);
        (AirMinGovDGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d3;
      }

      /* Product: '<S235>/Product4' incorporates:
       *  Product: '<S233>/Product3'
       *  S-Function (motohawk_sfun_calibration): '<S233>/motohawk_calibration2'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S233>/motohawk_interpolation_1d3'
       *  S-Function (motohawk_sfun_prelookup): '<S211>/motohawk_prelookup1'
       */
      rtb_Product4 = (AirMinGovDGain_DataStore()) *
        rtb_motohawk_interpolation_1d3 * rtb_Product5;

      /* S-Function Block: <S236>/motohawk_delta_time */
      rtb_motohawk_delta_time_ca = 0.005;

      /* Product: '<S236>/Product' incorporates:
       *  S-Function (motohawk_sfun_delta_time): '<S236>/motohawk_delta_time'
       *  Sum: '<S236>/Sum2'
       */
      BaseEngineController_LS_128_B.s236_Product = (rtb_Product4 - rtb_Sum2_j) /
        rtb_motohawk_delta_time_ca;

      /* Switch: '<S237>/Switch1' incorporates:
       *  Constant: '<S211>/Constant'
       *  UnitDelay: '<S237>/Unit Delay'
       */
      if (BaseEngineController_LS_128_B.s110_LogicalOperator) {
        BaseEngineController_LS_128_B.s237_Switch1 = 0.0;
      } else {
        BaseEngineController_LS_128_B.s237_Switch1 =
          BaseEngineController_LS_128_DWork.s237_UnitDelay_DSTATE;
      }

      /* End of Switch: '<S237>/Switch1' */

      /* Switch: '<S211>/Switch' incorporates:
       *  Constant: '<S211>/Constant1'
       */
      if (BaseEngineController_LS_128_B.s110_LogicalOperator) {
        rtb_UnitDelay1_b = 0.0;
      } else {
        /* MinMax: '<S234>/MinMax' incorporates:
         *  Sum: '<S235>/Sum1'
         */
        rtb_Sum2_j = (BaseEngineController_LS_128_B.s235_Product2 +
                      BaseEngineController_LS_128_B.s236_Product) +
          BaseEngineController_LS_128_B.s237_Switch1;

        /* MinMax: '<S234>/MinMax1' incorporates:
         *  MinMax: '<S234>/MinMax'
         *  S-Function (motohawk_sfun_calibration): '<S211>/motohawk_calibration2'
         *  S-Function (motohawk_sfun_calibration): '<S211>/motohawk_calibration9'
         */
        rtb_Sum2_j = (rtb_Sum2_j >= (AirMinGovPIDOutLowerLimit_DataStore())) ||
          rtIsNaN((AirMinGovPIDOutLowerLimit_DataStore())) ? rtb_Sum2_j :
          (AirMinGovPIDOutLowerLimit_DataStore());
        rtb_UnitDelay1_b = (rtb_Sum2_j <= (AirMinGovPIDOutUpperLimit_DataStore()))
          || rtIsNaN((AirMinGovPIDOutUpperLimit_DataStore())) ? rtb_Sum2_j :
          (AirMinGovPIDOutUpperLimit_DataStore());
      }

      /* End of Switch: '<S211>/Switch' */

      /* Product: '<S110>/Product1' */
      BaseEngineController_LS_128_B.s110_MinGovAirPID =
        BaseEngineController_LS_128_B.s219_MinMax1 * rtb_UnitDelay1_b;

      /* Sum: '<S230>/Sum1' */
      BaseEngineController_LS_128_B.s230_Sum1 =
        BaseEngineController_LS_128_B.s209_DontallowsetpointtoeverdropbelowtheTargetRPM
        - BaseEngineController_LS_128_B.s557_Sum1;

      /* Product: '<S230>/Product4' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S210>/motohawk_calibration4'
       */
      rtb_UnitDelay1_b = BaseEngineController_LS_128_B.s230_Sum1 *
        (SpkMinGovErrorGain_DataStore());

      /* S-Function Block: <S210>/motohawk_prelookup1 */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (SpkMinGovSpeedErrorIn_DataStore()) =
          BaseEngineController_LS_128_B.s230_Sum1;
        (SpkMinGovSpeedErrorIdx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_LS_128_B.s230_Sum1,
           (SpkMinGovSpeedErrorIdxArr_DataStore()), 9,
           (SpkMinGovSpeedErrorIdx_DataStore()));
        rtb_motohawk_prelookup1_n = (SpkMinGovSpeedErrorIdx_DataStore());
      }

      /* S-Function Block: <S228>/motohawk_interpolation_1d2 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d2_g = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1_n, (real_T *)
           ((SpkMinGovPGainErrorMultTbl_DataStore())), 9);
        (SpkMinGovPGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d2_g;
      }

      /* Product: '<S230>/Product' incorporates:
       *  Product: '<S228>/Product2'
       *  S-Function (motohawk_sfun_calibration): '<S228>/motohawk_calibration3'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S228>/motohawk_interpolation_1d2'
       *  S-Function (motohawk_sfun_prelookup): '<S210>/motohawk_prelookup1'
       */
      BaseEngineController_LS_128_B.s230_Product = (SpkMinGovPGain_DataStore()) *
        rtb_motohawk_interpolation_1d2_g * rtb_UnitDelay1_b;

      /* UnitDelay: '<S231>/Unit Delay' */
      rtb_Sum2_j = BaseEngineController_LS_128_DWork.s231_UnitDelay_DSTATE;

      /* S-Function Block: <S228>/motohawk_interpolation_1d1 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d1_m = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1_n, (real_T *)
           ((SpkMinGovDGainErrorMultTbl_DataStore())), 9);
        (SpkMinGovDGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d1_m;
      }

      /* Product: '<S230>/Product2' incorporates:
       *  Product: '<S228>/Product1'
       *  S-Function (motohawk_sfun_calibration): '<S228>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S228>/motohawk_interpolation_1d1'
       *  S-Function (motohawk_sfun_prelookup): '<S210>/motohawk_prelookup1'
       */
      rtb_Product2_b = (SpkMinGovDGain_DataStore()) *
        rtb_motohawk_interpolation_1d1_m * rtb_UnitDelay1_b;

      /* S-Function Block: <S231>/motohawk_delta_time */
      rtb_motohawk_delta_time_p = 0.005;

      /* Product: '<S231>/Product' incorporates:
       *  S-Function (motohawk_sfun_delta_time): '<S231>/motohawk_delta_time'
       *  Sum: '<S231>/Sum2'
       */
      BaseEngineController_LS_128_B.s231_Product = (rtb_Product2_b - rtb_Sum2_j)
        / rtb_motohawk_delta_time_p;

      /* Switch: '<S210>/Switch' incorporates:
       *  Constant: '<S210>/Constant1'
       */
      if (rtb_RelationalOperator2_g) {
        rtb_UnitDelay1_b = 0.0;
      } else {
        /* MinMax: '<S229>/MinMax' incorporates:
         *  Sum: '<S230>/Sum'
         */
        rtb_Sum2_j = BaseEngineController_LS_128_B.s230_Product +
          BaseEngineController_LS_128_B.s231_Product;

        /* MinMax: '<S229>/MinMax1' incorporates:
         *  MinMax: '<S229>/MinMax'
         *  S-Function (motohawk_sfun_calibration): '<S210>/motohawk_calibration1'
         *  S-Function (motohawk_sfun_calibration): '<S210>/motohawk_calibration9'
         */
        rtb_Sum2_j = (rtb_Sum2_j >= (SpkMinGovPIDOutLowerLimit_DataStore())) ||
          rtIsNaN((SpkMinGovPIDOutLowerLimit_DataStore())) ? rtb_Sum2_j :
          (SpkMinGovPIDOutLowerLimit_DataStore());
        rtb_UnitDelay1_b = (rtb_Sum2_j <= (SpkMinGovPIDOutUpperLimit_DataStore()))
          || rtIsNaN((SpkMinGovPIDOutUpperLimit_DataStore())) ? rtb_Sum2_j :
          (SpkMinGovPIDOutUpperLimit_DataStore());
      }

      /* End of Switch: '<S210>/Switch' */

      /* Product: '<S110>/Product' */
      BaseEngineController_LS_128_B.s110_IdleSpk =
        BaseEngineController_LS_128_B.s219_MinMax1 * rtb_UnitDelay1_b;

      /* Outputs for Atomic SubSystem: '<S110>/AiflowOffset' */

      /* S-Function Block: <S202>/motohawk_interpolation_1d1 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d1_b = TableInterpolation1D_real_T
          (BaseEngineController_LS_128_B.s431_motohawk_prelookup, (real_T *)
           ((ACAirFlowOfstTbl_DataStore())), 5);
        (ACAirFlowOfst_DataStore()) = rtb_motohawk_interpolation_1d1_b;
      }

      /* Product: '<S202>/Product' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S202>/motohawk_calibration'
       */
      rtb_Sum2_j = ((ACAirFlowOfst_Enab_DataStore()) ? (real_T)
                    BaseEngineController_LS_128_B.s101_LogicalOperator : 0.0) *
        rtb_motohawk_interpolation_1d1_b;

      /* S-Function Block: <S202>/motohawk_interpolation_1d2 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d2_c = TableInterpolation1D_real_T
          (BaseEngineController_LS_128_B.s433_motohawk_prelookup, (real_T *)
           ((BaseAirflowOfstTbl_DataStore())), 5);
        (BaseAirflowOfst_DataStore()) = rtb_motohawk_interpolation_1d2_c;
      }

      /* Sum: '<S202>/Sum' incorporates:
       *  S-Function (motohawk_sfun_interpolation_1d): '<S202>/motohawk_interpolation_1d2'
       */
      rtb_DataTypeConversion_k = rtb_Sum2_j + rtb_motohawk_interpolation_1d2_c;

      /* RelationalOperator: '<S213>/RelOp' incorporates:
       *  Constant: '<S213>/Constant'
       *  S-Function (motohawk_sfun_data_read): '<S202>/motohawk_data_read'
       */
      rtb_RelOp = (((uint8_T)EngineState_DataStore()) == 3);

      /* Logic: '<S202>/Logical Operator' incorporates:
       *  RelationalOperator: '<S202>/Relational Operator'
       *  RelationalOperator: '<S202>/Relational Operator1'
       *  UnitDelay: '<S202>/Unit Delay'
       */
      rtb_RelationalOperator2_g = ((rtb_RelOp <
        BaseEngineController_LS_128_DWork.s202_UnitDelay_DSTATE) || (rtb_RelOp ==
        BaseEngineController_LS_128_DWork.s202_UnitDelay_DSTATE));

      /* S-Function Block: <S212>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_128_DWork.s212_motohawk_delta_time_DWORK1,
           NULL);
        rtb_motohawk_delta_time_i = ((real_T) delta) * 0.000001;
      }

      /* UnitDelay: '<S212>/Unit Delay' */
      rtb_Sum2_j = BaseEngineController_LS_128_DWork.s212_UnitDelay_DSTATE;

      /* Switch: '<S212>/Preload lowpass filter with current RPM while not on Idle' incorporates:
       *  Constant: '<S212>/Constant'
       *  Logic: '<S212>/Logical Operator'
       *  Product: '<S212>/Product2'
       *  Product: '<S212>/Product3'
       *  Sum: '<S212>/Sum'
       *  Sum: '<S212>/Sum1'
       */
      if (!rtb_RelationalOperator2_g) {
        rtb_Sum2_j = BaseEngineController_LS_128_B.s452_Switch2;
      } else {
        /* Product: '<S212>/Product1' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S212>/motohawk_calibration2'
         *  S-Function (motohawk_sfun_delta_time): '<S212>/motohawk_delta_time'
         */
        rtb_UnitDelay1_b = rtb_motohawk_delta_time_i /
          (IdleEntryAirRampInFiltC_DataStore());
        rtb_Sum2_j = (1.0 - rtb_UnitDelay1_b) * rtb_Sum2_j +
          rtb_DataTypeConversion_k * rtb_UnitDelay1_b;
      }

      /* End of Switch: '<S212>/Preload lowpass filter with current RPM while not on Idle' */

      /* MinMax: '<S212>/Don't allow setpoint to ever drop below the TargetRPM' */
      BaseEngineController_LS_128_B.s212_DontallowsetpointtoeverdropbelowtheTargetRPM
        = (rtb_DataTypeConversion_k >= rtb_Sum2_j) || rtIsNaN(rtb_Sum2_j) ?
        rtb_DataTypeConversion_k : rtb_Sum2_j;

      /* End of Outputs for SubSystem: '<S110>/AiflowOffset' */

      /* Saturate: '<S223>/Saturation' */
      rtb_Saturation_j = rtb_Switch_b >= 16000.0 ? 16000.0 : rtb_Switch_b <= 0.0
        ? 0.0 : rtb_Switch_b;

      /* S-Function (motohawk_sfun_data_write): '<S223>/motohawk_data_write' */
      /* Write to Data Storage as scalar: IdleEnterTimer */
      {
        IdleEnterTimer_DataStore() = rtb_Saturation_j;
      }

      /* S-Function Block: <S227>/motohawk_delta_time */
      rtb_motohawk_delta_time_g = 0.005;

      /* Sum: '<S207>/Sum' */
      rtb_UnitDelay1_b = BaseEngineController_LS_128_B.s557_Sum1 -
        BaseEngineController_LS_128_B.s209_DontallowsetpointtoeverdropbelowtheTargetRPM;

      /* Switch: '<S227>/Switch' incorporates:
       *  Constant: '<S227>/Constant'
       *  RelationalOperator: '<S207>/Relational Operator2'
       *  S-Function (motohawk_sfun_calibration): '<S207>/motohawk_calibration3'
       *  S-Function (motohawk_sfun_data_read): '<S227>/motohawk_data_read'
       *  S-Function (motohawk_sfun_delta_time): '<S227>/motohawk_delta_time'
       *  Sum: '<S227>/Sum'
       */
      if (rtb_UnitDelay1_b > (real_T)((int16_T)(MotoringDeltaRPMLimit_DataStore())))
      {
        BaseEngineController_LS_128_B.s227_Switch = rtb_motohawk_delta_time_g +
          MotoringTimer_DataStore();
      } else {
        BaseEngineController_LS_128_B.s227_Switch = 0.0;
      }

      /* End of Switch: '<S227>/Switch' */

      /* RelationalOperator: '<S207>/Relational Operator1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S207>/motohawk_calibration1'
       */
      BaseEngineController_LS_128_B.s207_RelationalOperator1 =
        ((BaseEngineController_LS_128_B.s227_Switch >
          (MotoringDtctTimerLimit_DataStore())));

      /* DataTypeConversion: '<S207>/Data Type Conversion' */
      rtb_DataTypeConversion_k = (real_T)
        BaseEngineController_LS_128_B.s207_RelationalOperator1;

      /* Saturate: '<S227>/Saturation' */
      rtb_Saturation_h = BaseEngineController_LS_128_B.s227_Switch >= 16000.0 ?
        16000.0 : BaseEngineController_LS_128_B.s227_Switch <= 0.0 ? 0.0 :
        BaseEngineController_LS_128_B.s227_Switch;

      /* S-Function (motohawk_sfun_data_write): '<S227>/motohawk_data_write' */
      /* Write to Data Storage as scalar: MotoringTimer */
      {
        MotoringTimer_DataStore() = rtb_Saturation_h;
      }

      /* S-Function Block: <S233>/motohawk_interpolation_1d1 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d1_d = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1, (real_T *)
           ((AirMinGovIGainErrorMultTbl_DataStore())), 9);
        (AirMinGovIGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d1_d;
      }

      /* Product: '<S235>/Product1' incorporates:
       *  Product: '<S233>/Product1'
       *  S-Function (motohawk_sfun_calibration): '<S233>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S233>/motohawk_interpolation_1d1'
       *  S-Function (motohawk_sfun_prelookup): '<S211>/motohawk_prelookup1'
       */
      rtb_Sum2_j = (AirMinGovIGain_DataStore()) *
        rtb_motohawk_interpolation_1d1_d * rtb_Product5;

      /* S-Function Block: <S237>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_128_DWork.s237_motohawk_delta_time_DWORK1,
           NULL);
        rtb_motohawk_delta_time_h = ((real_T) delta) * 0.000001;
      }

      /* Sum: '<S237>/Sum' incorporates:
       *  Product: '<S237>/Product'
       *  S-Function (motohawk_sfun_delta_time): '<S237>/motohawk_delta_time'
       */
      rtb_UnitDelay1_b = rtb_Sum2_j * rtb_motohawk_delta_time_h +
        BaseEngineController_LS_128_B.s237_Switch1;

      /* MinMax: '<S239>/MinMax' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S211>/motohawk_calibration7'
       */
      rtb_Sum2_j = (rtb_UnitDelay1_b >= (AirMinGovITermLowerLimit_DataStore())) ||
        rtIsNaN((AirMinGovITermLowerLimit_DataStore())) ? rtb_UnitDelay1_b :
        (AirMinGovITermLowerLimit_DataStore());

      /* Update for UnitDelay: '<S224>/Unit Delay' */
      BaseEngineController_LS_128_DWork.s224_UnitDelay_DSTATE =
        BaseEngineController_LS_128_B.s483_RPMInst;

      /* Update for UnitDelay: '<S226>/Unit Delay' */
      BaseEngineController_LS_128_DWork.s226_UnitDelay_DSTATE = rtb_Sum1_j;

      /* Update for UnitDelay: '<S110>/Unit Delay3' */
      BaseEngineController_LS_128_DWork.s110_UnitDelay3_DSTATE =
        BaseEngineController_LS_128_B.s110_MinGovAirPID;

      /* Update for UnitDelay: '<S110>/Unit Delay1' */
      BaseEngineController_LS_128_DWork.s110_UnitDelay1_DSTATE =
        BaseEngineController_LS_128_B.s237_Switch1;

      /* Update for UnitDelay: '<S205>/state' */
      BaseEngineController_LS_128_DWork.s205_state_DSTATE =
        BaseEngineController_LS_128_B.s219_MinMax1;

      /* Update for UnitDelay: '<S110>/Unit Delay2' */
      BaseEngineController_LS_128_DWork.s110_UnitDelay2_DSTATE =
        rtb_DataTypeConversion_k;

      /* Update for UnitDelay: '<S209>/Unit Delay' */
      BaseEngineController_LS_128_DWork.s209_UnitDelay_DSTATE =
        BaseEngineController_LS_128_B.s209_DontallowsetpointtoeverdropbelowtheTargetRPM;

      /* Update for UnitDelay: '<S236>/Unit Delay' */
      BaseEngineController_LS_128_DWork.s236_UnitDelay_DSTATE = rtb_Product4;

      /* Update for UnitDelay: '<S237>/Unit Delay' incorporates:
       *  MinMax: '<S239>/MinMax'
       *  MinMax: '<S239>/MinMax1'
       *  S-Function (motohawk_sfun_calibration): '<S211>/motohawk_calibration8'
       */
      BaseEngineController_LS_128_DWork.s237_UnitDelay_DSTATE = (rtb_Sum2_j <=
        (AirMinGovITermUpperLimit_DataStore())) || rtIsNaN
        ((AirMinGovITermUpperLimit_DataStore())) ? rtb_Sum2_j :
        (AirMinGovITermUpperLimit_DataStore());

      /* Update for UnitDelay: '<S231>/Unit Delay' */
      BaseEngineController_LS_128_DWork.s231_UnitDelay_DSTATE = rtb_Product2_b;

      /* Update for Atomic SubSystem: '<S110>/AiflowOffset' */
      /* Update for UnitDelay: '<S202>/Unit Delay' */
      BaseEngineController_LS_128_DWork.s202_UnitDelay_DSTATE = rtb_RelOp;

      /* Update for UnitDelay: '<S212>/Unit Delay' */
      BaseEngineController_LS_128_DWork.s212_UnitDelay_DSTATE =
        BaseEngineController_LS_128_B.s212_DontallowsetpointtoeverdropbelowtheTargetRPM;

      /* End of Update for SubSystem: '<S110>/AiflowOffset' */
    }

    /* Output and update for function-call system: '<S93>/AC Control' */
    {
      /* local block i/o variables */
      boolean_T rtb_BelowLoTarget;
      boolean_T rtb_AboveHiTarget;
      boolean_T rtb_CombinatorialLogic_j[2];
      uint16_T rtb_DataTypeConversion1_l;
      boolean_T rtb_Switch1_p;
      boolean_T rtb_Switch1_l;
      boolean_T rtb_LogicalOperator3_o;
      boolean_T rtb_Switch1_c;
      boolean_T rtb_RelationalOperator_l;
      real_T tmp;

      /* RelationalOperator: '<S118>/LT' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S101>/motohawk_calibration'
       */
      rtb_BelowLoTarget = (BaseEngineController_LS_128_B.s676_Merge >=
                           (ACTempOn_DataStore()));

      /* RelationalOperator: '<S118>/LT1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S101>/motohawk_calibration8'
       */
      rtb_AboveHiTarget = (BaseEngineController_LS_128_B.s676_Merge <=
                           (ACTempOff_DataStore()));

      /* CombinatorialLogic: '<S124>/Combinatorial  Logic' */
      {
        uint_T rowidx= 0;

        /* Compute the truth table row index corresponding to the input */
        rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget != 0);
        rowidx = (rowidx << 1) + (uint_T)(rtb_AboveHiTarget != 0);

        /* Copy the appropriate row of the table into the block output vector */
        rtb_CombinatorialLogic_j[0] =
          BaseEngineController_LS_128_ConstP.pooled888[rowidx];
        rtb_CombinatorialLogic_j[1] =
          BaseEngineController_LS_128_ConstP.pooled888[rowidx + 4];
      }

      /* Switch: '<S124>/Switch1' incorporates:
       *  UnitDelay: '<S124>/Unit Delay'
       */
      if (rtb_CombinatorialLogic_j[1]) {
        BaseEngineController_LS_128_B.s124_Switch1 = rtb_CombinatorialLogic_j[0];
      } else {
        BaseEngineController_LS_128_B.s124_Switch1 =
          BaseEngineController_LS_128_DWork.s124_UnitDelay_DSTATE;
      }

      /* End of Switch: '<S124>/Switch1' */

      /* DataTypeConversion: '<S101>/Data Type Conversion' */
      if (rtIsNaN(BaseEngineController_LS_128_B.s557_Sum1) || rtIsInf
          (BaseEngineController_LS_128_B.s557_Sum1)) {
        tmp = 0.0;
      } else {
        tmp = fmod(floor(BaseEngineController_LS_128_B.s557_Sum1), 65536.0);
      }

      rtb_DataTypeConversion1_l = (uint16_T)(tmp < 0.0 ? (uint16_T)(int32_T)
        (int16_T)-(int16_T)(uint16_T)-tmp : (uint16_T)tmp);

      /* End of DataTypeConversion: '<S101>/Data Type Conversion' */
      /* RelationalOperator: '<S117>/LT' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S101>/motohawk_calibration2'
       */
      rtb_AboveHiTarget = (rtb_DataTypeConversion1_l >= ((uint16_T)
        (ACSpdSlowOn_DataStore())));

      /* RelationalOperator: '<S117>/LT1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S101>/motohawk_calibration1'
       */
      rtb_BelowLoTarget = (rtb_DataTypeConversion1_l <= ((uint16_T)
        (ACSpdSlowOff_DataStore())));

      /* CombinatorialLogic: '<S123>/Combinatorial  Logic' */
      {
        uint_T rowidx= 0;

        /* Compute the truth table row index corresponding to the input */
        rowidx = (rowidx << 1) + (uint_T)(rtb_AboveHiTarget != 0);
        rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget != 0);

        /* Copy the appropriate row of the table into the block output vector */
        rtb_CombinatorialLogic_j[0] =
          BaseEngineController_LS_128_ConstP.pooled888[rowidx];
        rtb_CombinatorialLogic_j[1] =
          BaseEngineController_LS_128_ConstP.pooled888[rowidx + 4];
      }

      /* Switch: '<S123>/Switch1' incorporates:
       *  UnitDelay: '<S123>/Unit Delay'
       */
      if (rtb_CombinatorialLogic_j[1]) {
        BaseEngineController_LS_128_B.s123_Switch1 = rtb_CombinatorialLogic_j[0];
      } else {
        BaseEngineController_LS_128_B.s123_Switch1 =
          BaseEngineController_LS_128_DWork.s123_UnitDelay_DSTATE;
      }

      /* End of Switch: '<S123>/Switch1' */

      /* RelationalOperator: '<S115>/LT' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S101>/motohawk_calibration3'
       */
      rtb_AboveHiTarget = (rtb_DataTypeConversion1_l >= ((uint16_T)
        (ACSpdFastOff_DataStore())));

      /* RelationalOperator: '<S115>/LT1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S101>/motohawk_calibration4'
       */
      rtb_BelowLoTarget = (rtb_DataTypeConversion1_l <= ((uint16_T)
        (ACSpdFastOn_DataStore())));

      /* CombinatorialLogic: '<S121>/Combinatorial  Logic' */
      {
        uint_T rowidx= 0;

        /* Compute the truth table row index corresponding to the input */
        rowidx = (rowidx << 1) + (uint_T)(rtb_AboveHiTarget != 0);
        rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget != 0);

        /* Copy the appropriate row of the table into the block output vector */
        rtb_CombinatorialLogic_j[0] =
          BaseEngineController_LS_128_ConstP.pooled888[rowidx];
        rtb_CombinatorialLogic_j[1] =
          BaseEngineController_LS_128_ConstP.pooled888[rowidx + 4];
      }

      /* Switch: '<S121>/Switch1' incorporates:
       *  UnitDelay: '<S121>/Unit Delay'
       */
      if (rtb_CombinatorialLogic_j[1]) {
        rtb_Switch1_p = rtb_CombinatorialLogic_j[0];
      } else {
        rtb_Switch1_p = BaseEngineController_LS_128_DWork.s121_UnitDelay_DSTATE;
      }

      /* End of Switch: '<S121>/Switch1' */

      /* Logic: '<S101>/Logical Operator2' */
      BaseEngineController_LS_128_B.s101_LogicalOperator2 = !rtb_Switch1_p;

      /* DataTypeConversion: '<S101>/Data Type Conversion2' */
      if (rtIsNaN(BaseEngineController_LS_128_B.s452_Switch2) || rtIsInf
          (BaseEngineController_LS_128_B.s452_Switch2)) {
        tmp = 0.0;
      } else {
        tmp = fmod(floor(BaseEngineController_LS_128_B.s452_Switch2), 65536.0);
      }

      rtb_DataTypeConversion1_l = (uint16_T)(tmp < 0.0 ? (uint16_T)(int32_T)
        (int16_T)-(int16_T)(uint16_T)-tmp : (uint16_T)tmp);

      /* End of DataTypeConversion: '<S101>/Data Type Conversion2' */
      /* RelationalOperator: '<S116>/LT' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S101>/motohawk_calibration5'
       */
      rtb_AboveHiTarget = (rtb_DataTypeConversion1_l >= ((uint16_T)
        (AC_TPSOff_DataStore())));

      /* RelationalOperator: '<S116>/LT1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S101>/motohawk_calibration6'
       */
      rtb_BelowLoTarget = (rtb_DataTypeConversion1_l <= ((uint16_T)
        (AC_TPSOn_DataStore())));

      /* CombinatorialLogic: '<S122>/Combinatorial  Logic' */
      {
        uint_T rowidx= 0;

        /* Compute the truth table row index corresponding to the input */
        rowidx = (rowidx << 1) + (uint_T)(rtb_AboveHiTarget != 0);
        rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget != 0);

        /* Copy the appropriate row of the table into the block output vector */
        rtb_CombinatorialLogic_j[0] =
          BaseEngineController_LS_128_ConstP.pooled888[rowidx];
        rtb_CombinatorialLogic_j[1] =
          BaseEngineController_LS_128_ConstP.pooled888[rowidx + 4];
      }

      /* Switch: '<S122>/Switch1' incorporates:
       *  UnitDelay: '<S122>/Unit Delay'
       */
      if (rtb_CombinatorialLogic_j[1]) {
        rtb_Switch1_l = rtb_CombinatorialLogic_j[0];
      } else {
        rtb_Switch1_l = BaseEngineController_LS_128_DWork.s122_UnitDelay_DSTATE;
      }

      /* End of Switch: '<S122>/Switch1' */

      /* Logic: '<S101>/Logical Operator4' */
      BaseEngineController_LS_128_B.s101_LogicalOperator4 = !rtb_Switch1_l;

      /* Logic: '<S101>/Logical Operator3' */
      rtb_LogicalOperator3_o = (BaseEngineController_LS_128_B.s123_Switch1 &&
        BaseEngineController_LS_128_B.s101_LogicalOperator2);

      /* DataTypeConversion: '<S101>/Data Type Conversion1' */
      if (rtIsNaN(BaseEngineController_LS_128_B.s571_Merge) || rtIsInf
          (BaseEngineController_LS_128_B.s571_Merge)) {
        tmp = 0.0;
      } else {
        tmp = fmod(floor(BaseEngineController_LS_128_B.s571_Merge), 65536.0);
      }

      rtb_DataTypeConversion1_l = (uint16_T)(tmp < 0.0 ? (uint16_T)(int32_T)
        (int16_T)-(int16_T)(uint16_T)-tmp : (uint16_T)tmp);

      /* End of DataTypeConversion: '<S101>/Data Type Conversion1' */
      /* RelationalOperator: '<S114>/LT' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S101>/motohawk_calibration9'
       */
      rtb_AboveHiTarget = (rtb_DataTypeConversion1_l >= ((uint16_T)
        (ACLowPresOn_DataStore())));

      /* RelationalOperator: '<S114>/LT1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S101>/motohawk_calibration10'
       */
      rtb_BelowLoTarget = (rtb_DataTypeConversion1_l <= ((uint16_T)
        (ACLowPresOff_DataStore())));

      /* CombinatorialLogic: '<S120>/Combinatorial  Logic' */
      {
        uint_T rowidx= 0;

        /* Compute the truth table row index corresponding to the input */
        rowidx = (rowidx << 1) + (uint_T)(rtb_AboveHiTarget != 0);
        rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget != 0);

        /* Copy the appropriate row of the table into the block output vector */
        rtb_CombinatorialLogic_j[0] =
          BaseEngineController_LS_128_ConstP.pooled888[rowidx];
        rtb_CombinatorialLogic_j[1] =
          BaseEngineController_LS_128_ConstP.pooled888[rowidx + 4];
      }

      /* Switch: '<S120>/Switch1' incorporates:
       *  UnitDelay: '<S120>/Unit Delay'
       */
      if (rtb_CombinatorialLogic_j[1]) {
        BaseEngineController_LS_128_B.s120_Switch1 = rtb_CombinatorialLogic_j[0];
      } else {
        BaseEngineController_LS_128_B.s120_Switch1 =
          BaseEngineController_LS_128_DWork.s120_UnitDelay_DSTATE;
      }

      /* End of Switch: '<S120>/Switch1' */
      /* RelationalOperator: '<S113>/LT' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S101>/motohawk_calibration11'
       */
      rtb_AboveHiTarget = (rtb_DataTypeConversion1_l >= ((uint16_T)
        (ACHighPresOff_DataStore())));

      /* RelationalOperator: '<S113>/LT1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S101>/motohawk_calibration12'
       */
      rtb_BelowLoTarget = (rtb_DataTypeConversion1_l <= ((uint16_T)
        (ACHighPresOn_DataStore())));

      /* CombinatorialLogic: '<S119>/Combinatorial  Logic' */
      {
        uint_T rowidx= 0;

        /* Compute the truth table row index corresponding to the input */
        rowidx = (rowidx << 1) + (uint_T)(rtb_AboveHiTarget != 0);
        rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget != 0);

        /* Copy the appropriate row of the table into the block output vector */
        rtb_CombinatorialLogic_j[0] =
          BaseEngineController_LS_128_ConstP.pooled888[rowidx];
        rtb_CombinatorialLogic_j[1] =
          BaseEngineController_LS_128_ConstP.pooled888[rowidx + 4];
      }

      /* Switch: '<S119>/Switch1' incorporates:
       *  UnitDelay: '<S119>/Unit Delay'
       */
      if (rtb_CombinatorialLogic_j[1]) {
        rtb_Switch1_c = rtb_CombinatorialLogic_j[0];
      } else {
        rtb_Switch1_c = BaseEngineController_LS_128_DWork.s119_UnitDelay_DSTATE;
      }

      /* End of Switch: '<S119>/Switch1' */

      /* Logic: '<S101>/Logical Operator1' */
      BaseEngineController_LS_128_B.s101_LogicalOperator1 = !rtb_Switch1_c;

      /* RelationalOperator: '<S101>/Relational Operator' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S101>/motohawk_calibration7'
       */
      rtb_RelationalOperator_l = (BaseEngineController_LS_128_B.s473_Switch >=
        (ACTimeFromStartDelay_DataStore()));

      /* Logic: '<S101>/Logical Operator' incorporates:
       *  Logic: '<S101>/Logical Operator6'
       *  S-Function (motohawk_sfun_fault_action): '<S101>/motohawk_fault_action'
       */
      BaseEngineController_LS_128_B.s101_LogicalOperator =
        ((BaseEngineController_LS_128_B.s514_Merge &&
          BaseEngineController_LS_128_B.s124_Switch1 && rtb_LogicalOperator3_o &&
          BaseEngineController_LS_128_B.s101_LogicalOperator4 &&
          BaseEngineController_LS_128_B.s120_Switch1 &&
          BaseEngineController_LS_128_B.s101_LogicalOperator1 &&
          rtb_RelationalOperator_l && (!GetFaultActionStatus(3))));

      /* Update for UnitDelay: '<S124>/Unit Delay' */
      BaseEngineController_LS_128_DWork.s124_UnitDelay_DSTATE =
        BaseEngineController_LS_128_B.s124_Switch1;

      /* Update for UnitDelay: '<S123>/Unit Delay' */
      BaseEngineController_LS_128_DWork.s123_UnitDelay_DSTATE =
        BaseEngineController_LS_128_B.s123_Switch1;

      /* Update for UnitDelay: '<S121>/Unit Delay' */
      BaseEngineController_LS_128_DWork.s121_UnitDelay_DSTATE = rtb_Switch1_p;

      /* Update for UnitDelay: '<S122>/Unit Delay' */
      BaseEngineController_LS_128_DWork.s122_UnitDelay_DSTATE = rtb_Switch1_l;

      /* Update for UnitDelay: '<S120>/Unit Delay' */
      BaseEngineController_LS_128_DWork.s120_UnitDelay_DSTATE =
        BaseEngineController_LS_128_B.s120_Switch1;

      /* Update for UnitDelay: '<S119>/Unit Delay' */
      BaseEngineController_LS_128_DWork.s119_UnitDelay_DSTATE = rtb_Switch1_c;
    }

    /* Output and update for function-call system: '<S93>/Boost Control' */
    {
      /* local block i/o variables */
      real_T rtb_motohawk_delta_time_j;
      real_T rtb_motohawk_interpolation_1d2_l;
      real_T rtb_motohawk_interpolation_1d3_i;
      real_T rtb_motohawk_delta_time_n4;
      real_T rtb_motohawk_interpolation_2d1_b;
      real_T rtb_motohawk_interpolation_1d2_f;
      real_T rtb_motohawk_interpolation_1d1_g;
      real_T rtb_motohawk_delta_time_pw;
      real_T rtb_MinMax1_m;
      real_T rtb_motohawk_delta_time_fe;
      real_T rtb_Saturation_l;
      index_T rtb_motohawk_prelookup1_g;
      index_T rtb_motohawk_prelookup;
      int8_T rtb_motohawk_interpolation_2d2;
      int8_T rtb_motohawk_interpolation_1d3_m;
      int8_T rtb_MinMax_p;
      real_T maxV;
      real_T rtb_kPatoPSI;
      boolean_T rtb_RelationalOperator_ls;
      boolean_T rtb_LogicalOperator_m;
      real_T rtb_UnitDelay_mm;
      real_T rtb_Sum2_o;
      real_T rtb_Abs_h;

      /* Gain: '<S104>/kPa to PSI' incorporates:
       *  Sum: '<S104>/Sum1'
       */
      rtb_kPatoPSI = (BaseEngineController_LS_128_B.s608_Merge -
                      BaseEngineController_LS_128_B.s407_Sum) * 0.145038;

      /* RelationalOperator: '<S104>/Relational Operator' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S104>/motohawk_calibration2'
       */
      rtb_RelationalOperator_ls = (rtb_kPatoPSI <
        (BoostActivationThreshold_DataStore()));

      /* UnitDelay: '<S104>/Unit Delay' */
      rtb_UnitDelay_mm = BaseEngineController_LS_128_DWork.s104_UnitDelay_DSTATE;

      /* Outputs for Enabled SubSystem: '<S104>/BoostControl Adapt' incorporates:
       *  EnablePort: '<S131>/Enable'
       */
      /* Logic: '<S104>/Logical Operator' */
      if (!rtb_RelationalOperator_ls) {
        /* Product: '<S131>/Product0' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S131>/motohawk_calibration2'
         */
        rtb_Abs_h = rtb_UnitDelay_mm * (BoostControlAdaptGain_DataStore());

        /* MinMax: '<S138>/MinMax' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S136>/motohawk_calibration'
         */
        maxV = (rtb_Abs_h >= (BoostAdaptErrorLwrLim_DataStore())) || rtIsNaN
          ((BoostAdaptErrorLwrLim_DataStore())) ? rtb_Abs_h :
          (BoostAdaptErrorLwrLim_DataStore());

        /* MinMax: '<S138>/MinMax1' incorporates:
         *  MinMax: '<S138>/MinMax'
         *  S-Function (motohawk_sfun_calibration): '<S136>/motohawk_calibration1'
         */
        rtb_MinMax1_m = (maxV <= (BoostAdaptErrorUprLim_DataStore())) || rtIsNaN
          ((BoostAdaptErrorUprLim_DataStore())) ? maxV :
          (BoostAdaptErrorUprLim_DataStore());

        /* Outputs for Atomic SubSystem: '<S131>/BoostControl Enable Delay' */

        /* S-Function Block: <S137>/motohawk_delta_time */
        rtb_motohawk_delta_time_fe = 0.005;
        rtb_Abs_h = rtb_motohawk_delta_time_fe + BoostTimer_DataStore();

        /* RelationalOperator: '<S135>/Relational Operator' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S135>/motohawk_calibration1'
         */
        rtb_LogicalOperator_m = (rtb_Abs_h > (BoostAdaptDelayTime_DataStore()));

        /* Saturate: '<S137>/Saturation' */
        rtb_Saturation_l = rtb_Abs_h >= 16000.0 ? 16000.0 : rtb_Abs_h <= 0.0 ?
          0.0 : rtb_Abs_h;

        /* S-Function (motohawk_sfun_data_write): '<S137>/motohawk_data_write' */
        /* Write to Data Storage as scalar: BoostTimer */
        {
          BoostTimer_DataStore() = rtb_Saturation_l;
        }

        /* End of Outputs for SubSystem: '<S131>/BoostControl Enable Delay' */

        /* Logic: '<S131>/Logical Operator1' incorporates:
         *  Abs: '<S131>/Abs'
         *  RelationalOperator: '<S131>/Relational Operator'
         *  S-Function (motohawk_sfun_calibration): '<S131>/motohawk_calibration3'
         *  S-Function (motohawk_sfun_calibration): '<S131>/motohawk_calibration4'
         */
        BaseEngineController_LS_128_B.s131_LogicalOperator1 =
          (((BoostControlAdaptEnable_DataStore()) && rtb_LogicalOperator_m &&
            (fabs(rtb_UnitDelay_mm) <= (BoostControlAdaptDelta_DataStore()))));

        /* Outputs for Enabled SubSystem: '<S131>/Adapt Boost Table' incorporates:
         *  EnablePort: '<S134>/Enable'
         */
        if (BaseEngineController_LS_128_B.s131_LogicalOperator1) {
          /* S-Function Block: <S134>/motohawk_adapt_table */
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
                  rtb_MinMax1_m;
                if (_new > (BoostControlOfstMaxValue_DataStore()))
                  _new = (BoostControlOfstMaxValue_DataStore());
                if (_new < (BoostControlOfstMinValue_DataStore()))
                  _new = (BoostControlOfstMinValue_DataStore());
                (BoostControlBase_AdaptMap_DataStore())[_row][_col] = _new;
              } else if (_col_frac == 3) {
                _new = (BoostControlBase_AdaptMap_DataStore())[_row][_col+1] +
                  rtb_MinMax1_m;
                if (_new > (BoostControlOfstMaxValue_DataStore()))
                  _new = (BoostControlOfstMaxValue_DataStore());
                if (_new < (BoostControlOfstMinValue_DataStore()))
                  _new = (BoostControlOfstMinValue_DataStore());
                (BoostControlBase_AdaptMap_DataStore())[_row][_col+1] = _new;
              } else {
                real_T _half = (rtb_MinMax1_m) / 2;
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
                real_T _half = (rtb_MinMax1_m) / 2;
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
                real_T _quarter = (rtb_MinMax1_m) / 4;
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

        /* End of Outputs for SubSystem: '<S131>/Adapt Boost Table' */
      }

      /* End of Logic: '<S104>/Logical Operator' */
      /* End of Outputs for SubSystem: '<S104>/BoostControl Adapt' */

      /* Switch: '<S143>/Switch1' incorporates:
       *  Constant: '<S132>/Constant'
       *  UnitDelay: '<S143>/Unit Delay'
       */
      if (rtb_RelationalOperator_ls) {
        BaseEngineController_LS_128_B.s143_Switch1 = 0.0;
      } else {
        BaseEngineController_LS_128_B.s143_Switch1 =
          BaseEngineController_LS_128_DWork.s143_UnitDelay_DSTATE;
      }

      /* End of Switch: '<S143>/Switch1' */

      /* S-Function Block: <S133>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_128_DWork.s133_motohawk_delta_time_DWORK1,
           NULL);
        rtb_motohawk_delta_time_j = ((real_T) delta) * 0.000001;
      }

      /* S-Function Block: <S104>/motohawk_interpolation_2d2 */
      {
        extern int8_T TableInterpolation2D_int8_T(uint16_T row_in, uint16_T
          col_in, int8_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_motohawk_interpolation_2d2 = TableInterpolation2D_int8_T
          (BaseEngineController_LS_128_B.s440_motohawk_prelookup,
           BaseEngineController_LS_128_B.s437_motohawk_prelookup1, (int8_T *)
           ((BoostTargetMap_DataStore())), 9, 9);
        (BoostTarget_DataStore()) = rtb_motohawk_interpolation_2d2;
      }

      /* Sum: '<S104>/Sum2' incorporates:
       *  Product: '<S104>/Product'
       *  S-Function (motohawk_sfun_calibration): '<S104>/motohawk_calibration3'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S104>/motohawk_interpolation_2d2'
       */
      rtb_UnitDelay_mm = (real_T)BaseEngineController_LS_128_B.s533_Merge *
        (BoostScrambleAdder_DataStore()) + (real_T)
        rtb_motohawk_interpolation_2d2;

      /* S-Function Block: <S104>/motohawk_interpolation_1d */
      {
        extern int8_T TableInterpolation1D_int8_T(uint16_T idx, int8_T *tbl_data,
          uint32_T sz);
        rtb_MinMax_p = TableInterpolation1D_int8_T
          (BaseEngineController_LS_128_B.s433_motohawk_prelookup, (int8_T *)
           ((BoostECTLimitTbl_DataStore())), 5);
        (BoostECTLimit_DataStore()) = rtb_MinMax_p;
      }

      /* S-Function Block: <S104>/motohawk_interpolation_1d3 */
      {
        extern int8_T TableInterpolation1D_int8_T(uint16_T idx, int8_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d3_m = TableInterpolation1D_int8_T
          (BaseEngineController_LS_128_B.s434_motohawk_prelookup, (int8_T *)
           ((BoostIATLimitTbl_DataStore())), 5);
        (BoostIATLimit_DataStore()) = rtb_motohawk_interpolation_1d3_m;
      }

      /* MinMax: '<S104>/MinMax' */
      rtb_MinMax_p = (int8_T)(rtb_MinMax_p <= rtb_motohawk_interpolation_1d3_m ?
        rtb_MinMax_p : rtb_motohawk_interpolation_1d3_m);

      /* MinMax: '<S104>/MinMax2' */
      rtb_Abs_h = (real_T)rtb_MinMax_p;
      BaseEngineController_LS_128_B.s104_MinMax2 = rtb_UnitDelay_mm <= rtb_Abs_h
        ? rtb_UnitDelay_mm : rtb_Abs_h;

      /* UnitDelay: '<S133>/Unit Delay' */
      rtb_Abs_h = BaseEngineController_LS_128_DWork.s133_UnitDelay_DSTATE;

      /* Product: '<S133>/Product1' incorporates:
       *  S-Function (motohawk_sfun_delta_time): '<S133>/motohawk_delta_time'
       *  Sum: '<S133>/Sum3'
       *  UnitDelay: '<S133>/Unit Delay'
       */
      rtb_UnitDelay_mm = 1.0 / rtb_motohawk_delta_time_j *
        (BaseEngineController_LS_128_B.s104_MinMax2 -
         BaseEngineController_LS_128_DWork.s133_UnitDelay_DSTATE);

      /* MinMax: '<S146>/MinMax' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S104>/motohawk_calibration1'
       */
      maxV = (rtb_UnitDelay_mm >= (BoostFallRate_DataStore())) || rtIsNaN
        ((BoostFallRate_DataStore())) ? rtb_UnitDelay_mm :
        (BoostFallRate_DataStore());

      /* Sum: '<S133>/Sum2' incorporates:
       *  MinMax: '<S146>/MinMax'
       *  MinMax: '<S146>/MinMax1'
       *  Product: '<S133>/Product'
       *  S-Function (motohawk_sfun_calibration): '<S104>/motohawk_calibration'
       *  S-Function (motohawk_sfun_delta_time): '<S133>/motohawk_delta_time'
       */
      rtb_Sum2_o = ((maxV <= (BoostRiseRate_DataStore())) || rtIsNaN
                    ((BoostRiseRate_DataStore())) ? maxV :
                    (BoostRiseRate_DataStore())) * rtb_motohawk_delta_time_j +
        rtb_Abs_h;

      /* Sum: '<S141>/Sum2' */
      BaseEngineController_LS_128_B.s141_Sum2 = rtb_Sum2_o - rtb_kPatoPSI;

      /* Product: '<S141>/Product5' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S132>/motohawk_calibration5'
       */
      rtb_UnitDelay_mm = BaseEngineController_LS_128_B.s141_Sum2 *
        (BoostCtlErrorGain_DataStore());

      /* S-Function Block: <S132>/motohawk_prelookup1 */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (BoostCtlSpeedErrorIn_DataStore()) =
          BaseEngineController_LS_128_B.s141_Sum2;
        (BoostCtlSpeedErrorIdx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_LS_128_B.s141_Sum2,
           (BoostCtlSpeedErrorIdxArr_DataStore()), 9,
           (BoostCtlSpeedErrorIdx_DataStore()));
        rtb_motohawk_prelookup1_g = (BoostCtlSpeedErrorIdx_DataStore());
      }

      /* S-Function Block: <S139>/motohawk_interpolation_1d2 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d2_l = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1_g, (real_T *)
           ((BoostCtlPGainErrorMultTbl_DataStore())), 9);
        (BoostCtlPGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d2_l;
      }

      /* Product: '<S141>/Product2' incorporates:
       *  Product: '<S139>/Product2'
       *  S-Function (motohawk_sfun_calibration): '<S139>/motohawk_calibration3'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S139>/motohawk_interpolation_1d2'
       *  S-Function (motohawk_sfun_prelookup): '<S132>/motohawk_prelookup1'
       */
      BaseEngineController_LS_128_B.s141_Product2 = (BoostCtlPGain_DataStore()) *
        rtb_motohawk_interpolation_1d2_l * rtb_UnitDelay_mm;

      /* UnitDelay: '<S142>/Unit Delay' */
      rtb_Abs_h = BaseEngineController_LS_128_DWork.s142_UnitDelay_DSTATE;

      /* S-Function Block: <S139>/motohawk_interpolation_1d3 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d3_i = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1_g, (real_T *)
           ((BoostCtlDGainErrorMultTbl_DataStore())), 9);
        (BoostCtlDGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d3_i;
      }

      /* Product: '<S141>/Product4' incorporates:
       *  Product: '<S139>/Product3'
       *  S-Function (motohawk_sfun_calibration): '<S139>/motohawk_calibration2'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S139>/motohawk_interpolation_1d3'
       *  S-Function (motohawk_sfun_prelookup): '<S132>/motohawk_prelookup1'
       */
      rtb_kPatoPSI = (BoostCtlDGain_DataStore()) *
        rtb_motohawk_interpolation_1d3_i * rtb_UnitDelay_mm;

      /* S-Function Block: <S142>/motohawk_delta_time */
      rtb_motohawk_delta_time_n4 = 0.005;

      /* Product: '<S142>/Product' incorporates:
       *  S-Function (motohawk_sfun_delta_time): '<S142>/motohawk_delta_time'
       *  Sum: '<S142>/Sum2'
       */
      BaseEngineController_LS_128_B.s142_Product = (rtb_kPatoPSI - rtb_Abs_h) /
        rtb_motohawk_delta_time_n4;

      /* Switch: '<S132>/Switch' incorporates:
       *  Constant: '<S132>/Constant1'
       */
      if (rtb_RelationalOperator_ls) {
        BaseEngineController_LS_128_B.s132_Switch = 0.0;
      } else {
        /* MinMax: '<S140>/MinMax' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S132>/motohawk_calibration9'
         *  Sum: '<S141>/Sum1'
         */
        rtb_Abs_h = (BaseEngineController_LS_128_B.s141_Product2 +
                     BaseEngineController_LS_128_B.s142_Product) +
          BaseEngineController_LS_128_B.s143_Switch1;
        rtb_Abs_h = (rtb_Abs_h >= (BoostCtlPIDOutLowerLimit_DataStore())) ||
          rtIsNaN((BoostCtlPIDOutLowerLimit_DataStore())) ? rtb_Abs_h :
          (BoostCtlPIDOutLowerLimit_DataStore());

        /* MinMax: '<S140>/MinMax1' incorporates:
         *  MinMax: '<S140>/MinMax'
         *  S-Function (motohawk_sfun_calibration): '<S132>/motohawk_calibration2'
         */
        BaseEngineController_LS_128_B.s132_Switch = (rtb_Abs_h <=
          (BoostCtlPIDOutUpperLimit_DataStore())) || rtIsNaN
          ((BoostCtlPIDOutUpperLimit_DataStore())) ? rtb_Abs_h :
          (BoostCtlPIDOutUpperLimit_DataStore());
      }

      /* End of Switch: '<S132>/Switch' */

      /* S-Function Block: <S104>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (BoostTargetIn_DataStore()) = BaseEngineController_LS_128_B.s104_MinMax2;
        (BoostTargetIdx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_LS_128_B.s104_MinMax2,
           (BoostTargetIdxArr_DataStore()), 9, (BoostTargetIdx_DataStore()));
        rtb_motohawk_prelookup = (BoostTargetIdx_DataStore());
      }

      /* S-Function Block: <S104>/motohawk_interpolation_2d1 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_motohawk_interpolation_2d1_b = TableInterpolation2D_real_T
          (rtb_motohawk_prelookup,
           BaseEngineController_LS_128_B.s437_motohawk_prelookup1, (real_T *)
           ((BoostControlBase_AdaptMap_DataStore())), 9, 9);
        (BoostControlBase_Adapt_DataStore()) = rtb_motohawk_interpolation_2d1_b;
      }

      /* S-Function Block: <S104>/motohawk_interpolation_2d */
      {
        extern uint8_T TableInterpolation2D_uint8_T(uint16_T row_in, uint16_T
          col_in, uint8_T *map_data, uint32_T row_sz, uint32_T col_sz);
        BaseEngineController_LS_128_B.s104_motohawk_interpolation_2d =
          TableInterpolation2D_uint8_T(rtb_motohawk_prelookup,
          BaseEngineController_LS_128_B.s437_motohawk_prelookup1, (uint8_T *)
          ((BoostControlBaseMap_DataStore())), 9, 9);
        (BoostControlBase_DataStore()) =
          BaseEngineController_LS_128_B.s104_motohawk_interpolation_2d;
      }

      /* Sum: '<S104>/Sum' incorporates:
       *  S-Function (motohawk_sfun_interpolation_2d): '<S104>/motohawk_interpolation_2d1'
       *  S-Function (motohawk_sfun_prelookup): '<S104>/motohawk_prelookup'
       */
      rtb_Abs_h = (rtb_motohawk_interpolation_2d1_b + (real_T)
                   BaseEngineController_LS_128_B.s104_motohawk_interpolation_2d)
        + BaseEngineController_LS_128_B.s132_Switch;

      /* S-Function Block: <S104>/motohawk_interpolation_1d2 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d2_f = TableInterpolation1D_real_T
          (BaseEngineController_LS_128_B.s438_motohawk_prelookup, (real_T *)
           ((WGDeadTimeTbl_DataStore())), 9);
        (WGDeadTime_DataStore()) = rtb_motohawk_interpolation_1d2_f;
      }

      /* Sum: '<S104>/Sum3' incorporates:
       *  S-Function (motohawk_sfun_interpolation_1d): '<S104>/motohawk_interpolation_1d2'
       */
      BaseEngineController_LS_128_B.s104_Sum3 = rtb_Abs_h +
        rtb_motohawk_interpolation_1d2_f;

      /* Switch: '<S104>/Switch' incorporates:
       *  Constant: '<S104>/Constant'
       */
      if (rtb_RelationalOperator_ls) {
        BaseEngineController_LS_128_B.s104_Switch = 0.0;
      } else {
        BaseEngineController_LS_128_B.s104_Switch =
          BaseEngineController_LS_128_B.s104_Sum3;
      }

      /* End of Switch: '<S104>/Switch' */

      /* S-Function Block: <S139>/motohawk_interpolation_1d1 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d1_g = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1_g, (real_T *)
           ((BoostCtlIGainErrorMultTbl_DataStore())), 9);
        (BoostCtlIGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d1_g;
      }

      /* Product: '<S141>/Product1' incorporates:
       *  Product: '<S139>/Product1'
       *  S-Function (motohawk_sfun_calibration): '<S139>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S139>/motohawk_interpolation_1d1'
       *  S-Function (motohawk_sfun_prelookup): '<S132>/motohawk_prelookup1'
       */
      rtb_Abs_h = (BoostCtlIGain_DataStore()) * rtb_motohawk_interpolation_1d1_g
        * rtb_UnitDelay_mm;

      /* S-Function Block: <S143>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_128_DWork.s143_motohawk_delta_time_DWORK1,
           NULL);
        rtb_motohawk_delta_time_pw = ((real_T) delta) * 0.000001;
      }

      /* Sum: '<S143>/Sum' incorporates:
       *  Product: '<S143>/Product'
       *  S-Function (motohawk_sfun_delta_time): '<S143>/motohawk_delta_time'
       */
      rtb_UnitDelay_mm = rtb_Abs_h * rtb_motohawk_delta_time_pw +
        BaseEngineController_LS_128_B.s143_Switch1;

      /* MinMax: '<S145>/MinMax' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S132>/motohawk_calibration7'
       */
      maxV = (rtb_UnitDelay_mm >= (BoostCtlITermLowerLimit_DataStore())) ||
        rtIsNaN((BoostCtlITermLowerLimit_DataStore())) ? rtb_UnitDelay_mm :
        (BoostCtlITermLowerLimit_DataStore());

      /* Update for UnitDelay: '<S104>/Unit Delay' */
      BaseEngineController_LS_128_DWork.s104_UnitDelay_DSTATE =
        BaseEngineController_LS_128_B.s143_Switch1;

      /* Update for UnitDelay: '<S143>/Unit Delay' incorporates:
       *  MinMax: '<S145>/MinMax'
       *  MinMax: '<S145>/MinMax1'
       *  S-Function (motohawk_sfun_calibration): '<S132>/motohawk_calibration8'
       */
      BaseEngineController_LS_128_DWork.s143_UnitDelay_DSTATE = (maxV <=
        (BoostCtlITermUpperLimit_DataStore())) || rtIsNaN
        ((BoostCtlITermUpperLimit_DataStore())) ? maxV :
        (BoostCtlITermUpperLimit_DataStore());

      /* Update for UnitDelay: '<S133>/Unit Delay' */
      BaseEngineController_LS_128_DWork.s133_UnitDelay_DSTATE = rtb_Sum2_o;

      /* Update for UnitDelay: '<S142>/Unit Delay' */
      BaseEngineController_LS_128_DWork.s142_UnitDelay_DSTATE = rtb_kPatoPSI;
    }

    /* Output and update for function-call system: '<S93>/FAN Control' */
    {
      /* local block i/o variables */
      real_T rtb_motohawk_interpolation_2d;
      real_T rtb_motohawk_interpolation_2d1_e;
      real_T rtb_motohawk_interpolation_2d2_l;
      boolean_T rtb_motohawk_fault_action_h;
      boolean_T rtb_BelowLoTarget_i;
      boolean_T rtb_AboveHiTarget_f;
      boolean_T rtb_CombinatorialLogic_o[2];
      boolean_T rtb_motohawk_data_read6;
      boolean_T rtb_motohawk_data_read10;
      real_T rtb_DataTypeConversion_f;
      boolean_T rtb_Switch1_g;
      boolean_T rtb_Switch1_d;
      boolean_T rtb_Switch1_da;
      real_T rtb_Switch_e;
      real_T rtb_Switch1_o;
      real_T rtb_Switch2;
      real_T rtb_Product3_n;
      real_T rtb_Product2_m;
      real_T rtb_Product1_a;
      real_T u;

      /* S-Function (motohawk_sfun_fault_action): '<S106>/motohawk_fault_action'
       *
       * Regarding '<S106>/motohawk_fault_action':
         Get Fault Action Status: DisableFanRun
       */
      {
        extern boolean_T GetFaultActionStatus(uint32_T action);
        rtb_motohawk_fault_action_h = GetFaultActionStatus(4);
      }

      /* RelationalOperator: '<S152>/LT' incorporates:
       *  S-Function (motohawk_sfun_data_read): '<S106>/motohawk_data_read'
       */
      rtb_BelowLoTarget_i = (BaseEngineController_LS_128_B.s667_Merge >=
        ECTFanOn_DataStore());

      /* RelationalOperator: '<S152>/LT1' incorporates:
       *  S-Function (motohawk_sfun_data_read): '<S106>/motohawk_data_read1'
       */
      rtb_AboveHiTarget_f = (BaseEngineController_LS_128_B.s667_Merge <=
        ECTFanOff_DataStore());

      /* CombinatorialLogic: '<S155>/Combinatorial  Logic' */
      {
        uint_T rowidx= 0;

        /* Compute the truth table row index corresponding to the input */
        rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_i != 0);
        rowidx = (rowidx << 1) + (uint_T)(rtb_AboveHiTarget_f != 0);

        /* Copy the appropriate row of the table into the block output vector */
        rtb_CombinatorialLogic_o[0] =
          BaseEngineController_LS_128_ConstP.pooled888[rowidx];
        rtb_CombinatorialLogic_o[1] =
          BaseEngineController_LS_128_ConstP.pooled888[rowidx + 4];
      }

      /* Switch: '<S155>/Switch1' incorporates:
       *  UnitDelay: '<S155>/Unit Delay'
       */
      if (rtb_CombinatorialLogic_o[1]) {
        rtb_Switch1_g = rtb_CombinatorialLogic_o[0];
      } else {
        rtb_Switch1_g = BaseEngineController_LS_128_DWork.s155_UnitDelay_DSTATE;
      }

      /* End of Switch: '<S155>/Switch1' */
      /* Switch: '<S106>/Switch' incorporates:
       *  S-Function (motohawk_sfun_data_read): '<S106>/motohawk_data_read14'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S106>/motohawk_interpolation_2d'
       */
      if (FAN_Mode_DataStore()) {
        rtb_Switch_e = (real_T)rtb_Switch1_g;
      } else {
        /* S-Function Block: <S106>/motohawk_interpolation_2d */
        {
          extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
            col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
          rtb_motohawk_interpolation_2d = TableInterpolation2D_real_T
            (BaseEngineController_LS_128_B.s433_motohawk_prelookup2,
             BaseEngineController_LS_128_B.s440_motohawk_prelookup2, (real_T *)
             ((ECTFanSpeedMap_DataStore())), 7, 7);
          (ECTFanSpeed_DataStore()) = rtb_motohawk_interpolation_2d;
        }

        rtb_Switch_e = rtb_motohawk_interpolation_2d;
      }

      /* End of Switch: '<S106>/Switch' */
      /* RelationalOperator: '<S153>/LT' incorporates:
       *  S-Function (motohawk_sfun_data_read): '<S106>/motohawk_data_read2'
       */
      rtb_AboveHiTarget_f = (BaseEngineController_LS_128_B.s685_Merge >=
        IATFanOn_DataStore());

      /* RelationalOperator: '<S153>/LT1' incorporates:
       *  S-Function (motohawk_sfun_data_read): '<S106>/motohawk_data_read3'
       */
      rtb_BelowLoTarget_i = (BaseEngineController_LS_128_B.s685_Merge <=
        IATFanOff_DataStore());

      /* CombinatorialLogic: '<S156>/Combinatorial  Logic' */
      {
        uint_T rowidx= 0;

        /* Compute the truth table row index corresponding to the input */
        rowidx = (rowidx << 1) + (uint_T)(rtb_AboveHiTarget_f != 0);
        rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_i != 0);

        /* Copy the appropriate row of the table into the block output vector */
        rtb_CombinatorialLogic_o[0] =
          BaseEngineController_LS_128_ConstP.pooled888[rowidx];
        rtb_CombinatorialLogic_o[1] =
          BaseEngineController_LS_128_ConstP.pooled888[rowidx + 4];
      }

      /* Switch: '<S156>/Switch1' incorporates:
       *  UnitDelay: '<S156>/Unit Delay'
       */
      if (rtb_CombinatorialLogic_o[1]) {
        rtb_Switch1_d = rtb_CombinatorialLogic_o[0];
      } else {
        rtb_Switch1_d = BaseEngineController_LS_128_DWork.s156_UnitDelay_DSTATE;
      }

      /* End of Switch: '<S156>/Switch1' */

      /* Switch: '<S106>/Switch1' incorporates:
       *  S-Function (motohawk_sfun_data_read): '<S106>/motohawk_data_read14'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S106>/motohawk_interpolation_2d1'
       */
      if (FAN_Mode_DataStore()) {
        rtb_Switch1_o = (real_T)rtb_Switch1_d;
      } else {
        /* S-Function Block: <S106>/motohawk_interpolation_2d1 */
        {
          extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
            col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
          rtb_motohawk_interpolation_2d1_e = TableInterpolation2D_real_T
            (BaseEngineController_LS_128_B.s434_motohawk_prelookup1,
             BaseEngineController_LS_128_B.s440_motohawk_prelookup2, (real_T *)
             ((IATFanSpeedMap_DataStore())), 7, 7);
          (IATFanSpeed_DataStore()) = rtb_motohawk_interpolation_2d1_e;
        }

        rtb_Switch1_o = rtb_motohawk_interpolation_2d1_e;
      }

      /* End of Switch: '<S106>/Switch1' */
      /* RelationalOperator: '<S154>/LT' incorporates:
       *  S-Function (motohawk_sfun_data_read): '<S106>/motohawk_data_read4'
       */
      rtb_AboveHiTarget_f = (BaseEngineController_LS_128_B.s571_Merge >=
        ACPresFanOn_DataStore());

      /* RelationalOperator: '<S154>/LT1' incorporates:
       *  S-Function (motohawk_sfun_data_read): '<S106>/motohawk_data_read5'
       */
      rtb_BelowLoTarget_i = (BaseEngineController_LS_128_B.s571_Merge <=
        ACPresFanOff_DataStore());

      /* CombinatorialLogic: '<S157>/Combinatorial  Logic' */
      {
        uint_T rowidx= 0;

        /* Compute the truth table row index corresponding to the input */
        rowidx = (rowidx << 1) + (uint_T)(rtb_AboveHiTarget_f != 0);
        rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_i != 0);

        /* Copy the appropriate row of the table into the block output vector */
        rtb_CombinatorialLogic_o[0] =
          BaseEngineController_LS_128_ConstP.pooled888[rowidx];
        rtb_CombinatorialLogic_o[1] =
          BaseEngineController_LS_128_ConstP.pooled888[rowidx + 4];
      }

      /* Switch: '<S157>/Switch1' incorporates:
       *  UnitDelay: '<S157>/Unit Delay'
       */
      if (rtb_CombinatorialLogic_o[1]) {
        rtb_Switch1_da = rtb_CombinatorialLogic_o[0];
      } else {
        rtb_Switch1_da = BaseEngineController_LS_128_DWork.s157_UnitDelay_DSTATE;
      }

      /* End of Switch: '<S157>/Switch1' */

      /* Switch: '<S106>/Switch2' incorporates:
       *  S-Function (motohawk_sfun_data_read): '<S106>/motohawk_data_read14'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S106>/motohawk_interpolation_2d2'
       */
      if (FAN_Mode_DataStore()) {
        rtb_Switch2 = (real_T)rtb_Switch1_da;
      } else {
        /* S-Function Block: <S106>/motohawk_interpolation_2d2 */
        {
          extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
            col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
          rtb_motohawk_interpolation_2d2_l = TableInterpolation2D_real_T
            (BaseEngineController_LS_128_B.s431_motohawk_prelookup1,
             BaseEngineController_LS_128_B.s440_motohawk_prelookup2, (real_T *)
             ((ACPresFanSpeedMap_DataStore())), 7, 7);
          (ACPresFanSpeed_DataStore()) = rtb_motohawk_interpolation_2d2_l;
        }

        rtb_Switch2 = rtb_motohawk_interpolation_2d2_l;
      }

      /* End of Switch: '<S106>/Switch2' */

      /* DataTypeConversion: '<S106>/Data Type Conversion' */
      rtb_DataTypeConversion_f = (real_T)
        BaseEngineController_LS_128_B.s514_Merge;

      /* Switch: '<S106>/Switch3' incorporates:
       *  Product: '<S106>/Product8'
       *  S-Function (motohawk_sfun_calibration): '<S106>/motohawk_calibration14'
       *  S-Function (motohawk_sfun_data_read): '<S106>/motohawk_data_read14'
       */
      if (!FAN_Mode_DataStore()) {
        rtb_DataTypeConversion_f *= (real_T)((uint8_T)(ACSwFanSpeed_DataStore()));
      }

      /* End of Switch: '<S106>/Switch3' */

      /* Switch: '<S106>/Switch4' incorporates:
       *  Constant: '<S106>/Constant'
       */
      if (rtb_motohawk_fault_action_h) {
        BaseEngineController_LS_128_B.s106_Switch4 = 0.0;
      } else {
        /* S-Function (motohawk_sfun_data_read): '<S106>/motohawk_data_read9' */
        rtb_motohawk_data_read6 = Fan1ACSw_DataStore();

        /* Product: '<S106>/Product3' */
        rtb_Product3_n = rtb_DataTypeConversion_f * (real_T)
          rtb_motohawk_data_read6;

        /* S-Function (motohawk_sfun_data_read): '<S106>/motohawk_data_read8' */
        rtb_motohawk_data_read6 = Fan1ACPres_DataStore();

        /* Product: '<S106>/Product2' */
        rtb_Product2_m = rtb_Switch2 * (real_T)rtb_motohawk_data_read6;

        /* S-Function (motohawk_sfun_data_read): '<S106>/motohawk_data_read7' */
        rtb_motohawk_data_read6 = Fan1IAT_DataStore();

        /* Product: '<S106>/Product1' */
        rtb_Product1_a = rtb_Switch1_o * (real_T)rtb_motohawk_data_read6;

        /* S-Function (motohawk_sfun_data_read): '<S106>/motohawk_data_read6' */
        rtb_motohawk_data_read6 = Fan1ECT_DataStore();

        /* MinMax: '<S106>/MinMax' incorporates:
         *  Product: '<S106>/Product'
         */
        u = rtb_Switch_e * (real_T)rtb_motohawk_data_read6;
        u = (u >= rtb_Product1_a) || rtIsNaN(rtb_Product1_a) ? u :
          rtb_Product1_a;
        u = (u >= rtb_Product2_m) || rtIsNaN(rtb_Product2_m) ? u :
          rtb_Product2_m;
        BaseEngineController_LS_128_B.s106_Switch4 = u >= rtb_Product3_n ? u :
          rtb_Product3_n;
      }

      /* End of Switch: '<S106>/Switch4' */

      /* Switch: '<S106>/Switch5' incorporates:
       *  Constant: '<S106>/Constant1'
       */
      if (rtb_motohawk_fault_action_h) {
        BaseEngineController_LS_128_B.s106_Switch5 = 0.0;
      } else {
        /* S-Function (motohawk_sfun_data_read): '<S106>/motohawk_data_read13' */
        rtb_motohawk_data_read10 = Fan2ACSw_DataStore();

        /* Product: '<S106>/Product7' */
        rtb_Product2_m = rtb_DataTypeConversion_f * (real_T)
          rtb_motohawk_data_read10;

        /* S-Function (motohawk_sfun_data_read): '<S106>/motohawk_data_read12' */
        rtb_motohawk_data_read10 = Fan2ACPres_DataStore();

        /* Product: '<S106>/Product6' */
        rtb_Product3_n = rtb_Switch2 * (real_T)rtb_motohawk_data_read10;

        /* S-Function (motohawk_sfun_data_read): '<S106>/motohawk_data_read11' */
        rtb_motohawk_data_read10 = Fan2IAT_DataStore();

        /* Product: '<S106>/Product5' */
        rtb_DataTypeConversion_f = rtb_Switch1_o * (real_T)
          rtb_motohawk_data_read10;

        /* S-Function (motohawk_sfun_data_read): '<S106>/motohawk_data_read10' */
        rtb_motohawk_data_read10 = Fan2ECT_DataStore();

        /* MinMax: '<S106>/MinMax1' incorporates:
         *  Product: '<S106>/Product4'
         */
        u = rtb_Switch_e * (real_T)rtb_motohawk_data_read10;
        u = (u >= rtb_DataTypeConversion_f) || rtIsNaN(rtb_DataTypeConversion_f)
          ? u : rtb_DataTypeConversion_f;
        u = (u >= rtb_Product3_n) || rtIsNaN(rtb_Product3_n) ? u :
          rtb_Product3_n;
        BaseEngineController_LS_128_B.s106_Switch5 = u >= rtb_Product2_m ? u :
          rtb_Product2_m;
      }

      /* End of Switch: '<S106>/Switch5' */

      /* Update for UnitDelay: '<S155>/Unit Delay' */
      BaseEngineController_LS_128_DWork.s155_UnitDelay_DSTATE = rtb_Switch1_g;

      /* Update for UnitDelay: '<S156>/Unit Delay' */
      BaseEngineController_LS_128_DWork.s156_UnitDelay_DSTATE = rtb_Switch1_d;

      /* Update for UnitDelay: '<S157>/Unit Delay' */
      BaseEngineController_LS_128_DWork.s157_UnitDelay_DSTATE = rtb_Switch1_da;
    }

    /* Output and update for function-call system: '<S93>/MaxGovernor' */
    {
      /* local block i/o variables */
      real_T rtb_motohawk_delta_time_jn;
      real_T rtb_motohawk_interpolation_1d3_f;
      real_T rtb_motohawk_interpolation_1d2_j;
      real_T rtb_motohawk_delta_time_d;
      real_T rtb_motohawk_interpolation_1d4;
      real_T rtb_motohawk_delta_time_o;
      real_T rtb_StateO;
      real_T rtb_motohawk_interpolation_1d4_h;
      uint16_T rtb_Merge1;
      uint16_T rtb_MinMax_h;
      uint16_T rtb_MinMax_b;
      index_T rtb_motohawk_prelookup1_i;
      uint16_T rtb_Merge_cf;
      boolean_T rtb_RelationalOperator_ji;
      real_T rtb_DataTypeConversion_a;
      boolean_T rtb_RelationalOperator2_m;
      boolean_T rtb_RelationalOperator_j5;
      boolean_T rtb_LogicalOperator1_b;
      real_T rtb_Reset;
      int32_T rtb_Hold;
      int32_T rtb_ETCMode;
      real_T rtb_alpha_a;

      /* Sum: '<S109>/Sum' */
      BaseEngineController_LS_128_B.s109_Sum =
        BaseEngineController_LS_128_B.s212_DontallowsetpointtoeverdropbelowtheTargetRPM
        + BaseEngineController_LS_128_B.s460_Sum2;

      /* Outputs for Enabled SubSystem: '<S189>/InGear' incorporates:
       *  EnablePort: '<S192>/Enable'
       */
      /* Outputs for Enabled SubSystem: '<S189>/InNeutral' incorporates:
       *  EnablePort: '<S193>/Enable'
       */
      if (BaseEngineController_LS_128_B.s517_Merge) {
        /* S-Function (motohawk_sfun_data_read): '<S192>/motohawk_data_read' */
        rtb_MinMax_b = MaxGovInGearSetPoint_DataStore();

        /* MinMax: '<S194>/MinMax' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S192>/motohawk_calibration3'
         */
        rtb_MinMax_b = (uint16_T)(rtb_MinMax_b >= ((uint16_T)
          (MaxGovInGearLowerLim_DataStore())) ? rtb_MinMax_b : ((uint16_T)
          (MaxGovInGearLowerLim_DataStore())));

        /* MinMax: '<S194>/MinMax1' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S192>/motohawk_calibration5'
         */
        rtb_Merge_cf = (uint16_T)(rtb_MinMax_b <= ((uint16_T)
          (MaxGovInGearUpperLim_DataStore())) ? rtb_MinMax_b : ((uint16_T)
          (MaxGovInGearUpperLim_DataStore())));

        /* S-Function (motohawk_sfun_calibration): '<S192>/motohawk_calibration4' */
        rtb_Merge1 = (MaxGovInGearRPMThresh_DataStore());

        /* S-Function (motohawk_sfun_data_write): '<S192>/motohawk_data_write1' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S192>/motohawk_calibration2'
         */
        /* Write to Data Storage as scalar: MaxGovInGearSetPoint */
        {
          MaxGovInGearSetPoint_DataStore() = (MaxGovInGearRPMSetPt_DataStore());
        }
      } else {
        /* S-Function (motohawk_sfun_data_read): '<S193>/motohawk_data_read' */
        rtb_MinMax_h = MaxGovNtrlSetPoint_DataStore();

        /* MinMax: '<S195>/MinMax' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S193>/motohawk_calibration2'
         */
        rtb_MinMax_h = (uint16_T)(rtb_MinMax_h >= ((uint16_T)
          (MaxGovNtrlLowerLim_DataStore())) ? rtb_MinMax_h : ((uint16_T)
          (MaxGovNtrlLowerLim_DataStore())));

        /* MinMax: '<S195>/MinMax1' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S193>/motohawk_calibration5'
         */
        rtb_Merge_cf = (uint16_T)(rtb_MinMax_h <= ((uint16_T)
          (MaxGovNtrlUpperLim_DataStore())) ? rtb_MinMax_h : ((uint16_T)
          (MaxGovNtrlUpperLim_DataStore())));

        /* S-Function (motohawk_sfun_calibration): '<S193>/motohawk_calibration3' */
        rtb_Merge1 = (MaxGovNtrlRPMThresh_DataStore());

        /* S-Function (motohawk_sfun_data_write): '<S193>/motohawk_data_write1' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S193>/motohawk_calibration4'
         */
        /* Write to Data Storage as scalar: MaxGovNtrlSetPoint */
        {
          MaxGovNtrlSetPoint_DataStore() = (MaxGovNtrlRPMSetPt_DataStore());
        }
      }

      /* End of Outputs for SubSystem: '<S189>/InNeutral' */
      /* End of Outputs for SubSystem: '<S189>/InGear' */

      /* RelationalOperator: '<S189>/Relational Operator' incorporates:
       *  Sum: '<S189>/Sum1'
       */
      rtb_RelationalOperator_ji = (BaseEngineController_LS_128_B.s483_RPMInst >
                                   (real_T)(uint16_T)(rtb_Merge_cf - rtb_Merge1));

      /* DataTypeConversion: '<S109>/Data Type Conversion' */
      rtb_DataTypeConversion_a = (real_T)rtb_Merge_cf;

      /* RelationalOperator: '<S187>/Relational Operator2' */
      rtb_RelationalOperator2_m = (BaseEngineController_LS_128_B.s483_RPMInst >
        rtb_DataTypeConversion_a);

      /* RelationalOperator: '<S187>/Relational Operator' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S187>/motohawk_calibration5'
       *  Sum: '<S187>/Sum'
       */
      rtb_RelationalOperator_j5 = (BaseEngineController_LS_128_B.s109_Sum <=
        BaseEngineController_LS_128_B.s452_Switch2 - (MaxGovTPSHyst_DataStore()));

      /* Logic: '<S187>/Logical Operator1' incorporates:
       *  RelationalOperator: '<S187>/Relational Operator1'
       *  S-Function (motohawk_sfun_calibration): '<S187>/motohawk_calibration5'
       *  Sum: '<S187>/Sum1'
       */
      rtb_LogicalOperator1_b = (rtb_RelationalOperator_ji &&
        (BaseEngineController_LS_128_B.s109_Sum > (MaxGovTPSHyst_DataStore()) +
         BaseEngineController_LS_128_B.s452_Switch2));

      /* MATLAB Function Block: '<S187>/MaxGOV Stateflow' incorporates:
       *  Logic: '<S187>/Logical Operator'
       *  Logic: '<S187>/Logical Operator2'
       *  Logic: '<S187>/Logical Operator3'
       *  S-Function (motohawk_sfun_data_read): '<S187>/motohawk_data_read'
       */

      /* MATLAB Function 'Foreground/Control/Controller/Run/MaxGovernor/MaxGovState/MaxGOV Stateflow': '<S191>:1' */
      if ((MaxGov_DataStore() == 0.0) && ((rtb_RelationalOperator_ji ||
            rtb_RelationalOperator2_m) == 1)) {
        /* '<S191>:1:3' */
        /* '<S191>:1:4' */
        rtb_StateO = 1.0;
      } else if ((MaxGov_DataStore() == 1.0) && (rtb_RelationalOperator_j5 ==
                  TRUE)) {
        /* '<S191>:1:5' */
        /* '<S191>:1:6' */
        rtb_StateO = 2.0;
      } else if ((MaxGov_DataStore() == 2.0) && ((rtb_LogicalOperator1_b ||
                   rtb_RelationalOperator2_m) == 1)) {
        /* '<S191>:1:7' */
        /* '<S191>:1:8' */
        rtb_StateO = 1.0;
      } else if ((MaxGov_DataStore() == 2.0) && (!rtb_RelationalOperator_ji ==
                  TRUE)) {
        /* '<S191>:1:9' */
        /* '<S191>:1:10' */
        rtb_StateO = 0.0;
      } else {
        /* '<S191>:1:12' */
        rtb_StateO = MaxGov_DataStore();
      }

      if (MaxGov_DataStore() == 0.0) {
        /* '<S191>:1:15' */
        /* '<S191>:1:16' */
        rtb_ETCMode = 0;

        /* '<S191>:1:17' */
        rtb_Hold = 0;

        /* '<S191>:1:18' */
      } else if (MaxGov_DataStore() == 1.0) {
        /* '<S191>:1:19' */
        /* '<S191>:1:20' */
        rtb_ETCMode = 1;

        /* '<S191>:1:21' */
        rtb_Hold = 0;

        /* '<S191>:1:22' */
      } else if (MaxGov_DataStore() == 2.0) {
        /* '<S191>:1:23' */
        /* '<S191>:1:24' */
        rtb_ETCMode = 0;

        /* '<S191>:1:25' */
        rtb_Hold = 1;

        /* '<S191>:1:26' */
      } else {
        /* '<S191>:1:28' */
        rtb_ETCMode = 0;

        /* '<S191>:1:29' */
        rtb_Hold = 0;

        /* '<S191>:1:30' */
      }

      /* End of MATLAB Function Block: '<S187>/MaxGOV Stateflow' */

      /* DataTypeConversion: '<S187>/Data Type Conversion' */
      BaseEngineController_LS_128_B.s187_DataTypeConversion = 0;

      /* Logic: '<S188>/Logical Operator' incorporates:
       *  UnitDelay: '<S109>/Unit Delay'
       */
      rtb_RelationalOperator_ji =
        !BaseEngineController_LS_128_DWork.s109_UnitDelay_DSTATE;

      /* S-Function Block: <S188>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_128_DWork.s188_motohawk_delta_time_DWORK1,
           NULL);
        rtb_motohawk_delta_time_jn = ((real_T) delta) * 0.000001;
      }

      /* UnitDelay: '<S188>/Unit Delay' */
      rtb_Reset = BaseEngineController_LS_128_DWork.s188_UnitDelay_DSTATE;

      /* Switch: '<S188>/Preload lowpass filter with current RPM while not on Idle' incorporates:
       *  Constant: '<S188>/Constant'
       *  Product: '<S188>/Product2'
       *  Product: '<S188>/Product3'
       *  Sum: '<S188>/Sum'
       *  Sum: '<S188>/Sum1'
       */
      if (rtb_RelationalOperator_ji) {
        rtb_alpha_a = BaseEngineController_LS_128_B.s483_RPMInst;
      } else {
        /* Product: '<S188>/Product1' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S188>/motohawk_calibration2'
         *  S-Function (motohawk_sfun_delta_time): '<S188>/motohawk_delta_time'
         */
        rtb_alpha_a = rtb_motohawk_delta_time_jn /
          (MaxGovRPMCtrlEntryFiltC_DataStore());
        rtb_alpha_a = (1.0 - rtb_alpha_a) * rtb_Reset + rtb_DataTypeConversion_a
          * rtb_alpha_a;
      }

      /* End of Switch: '<S188>/Preload lowpass filter with current RPM while not on Idle' */

      /* MinMax: '<S188>/Don't allow setpoint to ever go above the TargetRPM' */
      BaseEngineController_LS_128_B.s188_DontallowsetpointtoevergoabovetheTargetRPM
        = (rtb_DataTypeConversion_a <= rtb_alpha_a) || rtIsNaN(rtb_alpha_a) ?
        rtb_DataTypeConversion_a : rtb_alpha_a;

      /* DataTypeConversion: '<S187>/Data Type Conversion1' */
      rtb_Reset = fmod((real_T)rtb_Hold, 256.0);
      BaseEngineController_LS_128_B.s187_DataTypeConversion1 = (int8_T)
        (rtb_Reset < 0.0 ? (int8_T)-(int8_T)(uint8_T)-rtb_Reset : (int8_T)
         (uint8_T)rtb_Reset);

      /* Switch: '<S190>/Switch1' */
      if (BaseEngineController_LS_128_B.s187_DataTypeConversion1 >= 1) {
        rtb_alpha_a =
          BaseEngineController_LS_128_B.s188_DontallowsetpointtoevergoabovetheTargetRPM;
      } else {
        rtb_alpha_a = BaseEngineController_LS_128_B.s483_RPMInst;
      }

      /* End of Switch: '<S190>/Switch1' */

      /* Sum: '<S197>/Sum2' */
      BaseEngineController_LS_128_B.s197_Sum2 =
        BaseEngineController_LS_128_B.s188_DontallowsetpointtoevergoabovetheTargetRPM
        - rtb_alpha_a;

      /* Product: '<S197>/Product5' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S190>/motohawk_calibration5'
       */
      rtb_alpha_a = BaseEngineController_LS_128_B.s197_Sum2 *
        (MaxGovErrorGain_DataStore());

      /* S-Function Block: <S190>/motohawk_prelookup1 */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (MaxGovSpeedErrorIn_DataStore()) =
          BaseEngineController_LS_128_B.s197_Sum2;
        (MaxGovSpeedErrorIdx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_LS_128_B.s197_Sum2,
           (MaxGovSpeedErrorIdxArr_DataStore()), 9,
           (MaxGovSpeedErrorIdx_DataStore()));
        rtb_motohawk_prelookup1_i = (MaxGovSpeedErrorIdx_DataStore());
      }

      /* S-Function Block: <S190>/motohawk_interpolation_1d3 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d3_f = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1_i, (real_T *)
           ((MaxGovPGainErrorMultTbl_DataStore())), 9);
        (MaxGovPGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d3_f;
      }

      /* Product: '<S197>/Product2' incorporates:
       *  Product: '<S190>/Product4'
       *  S-Function (motohawk_sfun_calibration): '<S190>/motohawk_calibration3'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S190>/motohawk_interpolation_1d3'
       *  S-Function (motohawk_sfun_prelookup): '<S190>/motohawk_prelookup1'
       */
      BaseEngineController_LS_128_B.s197_Product2 = (MaxGovPGain_DataStore()) *
        rtb_motohawk_interpolation_1d3_f * rtb_alpha_a;

      /* UnitDelay: '<S198>/Unit Delay' */
      rtb_Reset = BaseEngineController_LS_128_DWork.s198_UnitDelay_DSTATE;

      /* S-Function Block: <S190>/motohawk_interpolation_1d2 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d2_j = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1_i, (real_T *)
           ((MaxGovDGainErrorMultTbl_DataStore())), 9);
        (MaxGovDGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d2_j;
      }

      /* Product: '<S197>/Product4' incorporates:
       *  Product: '<S190>/Product3'
       *  S-Function (motohawk_sfun_calibration): '<S190>/motohawk_calibration6'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S190>/motohawk_interpolation_1d2'
       *  S-Function (motohawk_sfun_prelookup): '<S190>/motohawk_prelookup1'
       */
      rtb_DataTypeConversion_a = (MaxGovDGain_DataStore()) *
        rtb_motohawk_interpolation_1d2_j * rtb_alpha_a;

      /* S-Function Block: <S198>/motohawk_delta_time */
      rtb_motohawk_delta_time_d = 0.005;

      /* Product: '<S198>/Product' incorporates:
       *  S-Function (motohawk_sfun_delta_time): '<S198>/motohawk_delta_time'
       *  Sum: '<S198>/Sum2'
       */
      BaseEngineController_LS_128_B.s198_Product = (rtb_DataTypeConversion_a -
        rtb_Reset) / rtb_motohawk_delta_time_d;

      /* Outputs for Atomic SubSystem: '<S109>/I-Term Preload' */

      /* S-Function Block: <S186>/motohawk_interpolation_1d4 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d4_h = TableInterpolation1D_real_T
          (BaseEngineController_LS_128_B.s402_RPMAccel17Idx, (real_T *)
           ((MaxGovPreloadITermTbl_DataStore())), 17);
        (MaxGovPreloadITerm_DataStore()) = rtb_motohawk_interpolation_1d4_h;
      }

      /* Sum: '<S186>/Sum' incorporates:
       *  S-Function (motohawk_sfun_interpolation_1d): '<S186>/motohawk_interpolation_1d4'
       */
      BaseEngineController_LS_128_B.s186_Sum =
        BaseEngineController_LS_128_B.s109_Sum -
        rtb_motohawk_interpolation_1d4_h;

      /* End of Outputs for SubSystem: '<S109>/I-Term Preload' */

      /* Switch: '<S199>/Switch1' incorporates:
       *  DataTypeConversion: '<S199>/Data Type Conversion'
       *  UnitDelay: '<S199>/Unit Delay'
       */
      if (BaseEngineController_LS_128_B.s187_DataTypeConversion != 0) {
        BaseEngineController_LS_128_B.s199_Switch1 =
          BaseEngineController_LS_128_B.s186_Sum;
      } else {
        BaseEngineController_LS_128_B.s199_Switch1 =
          BaseEngineController_LS_128_DWork.s199_UnitDelay_DSTATE;
      }

      /* End of Switch: '<S199>/Switch1' */

      /* Switch: '<S190>/Switch' incorporates:
       *  Constant: '<S190>/Constant'
       */
      if (BaseEngineController_LS_128_B.s187_DataTypeConversion >= 1) {
        BaseEngineController_LS_128_B.s190_Switch = 0.0;
      } else {
        /* MinMax: '<S196>/MinMax' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S190>/motohawk_calibration9'
         *  Sum: '<S197>/Sum1'
         */
        rtb_Reset = (BaseEngineController_LS_128_B.s197_Product2 +
                     BaseEngineController_LS_128_B.s198_Product) +
          BaseEngineController_LS_128_B.s199_Switch1;
        rtb_Reset = (rtb_Reset >= (MaxGovPIDOutLowerLimit_DataStore())) ||
          rtIsNaN((MaxGovPIDOutLowerLimit_DataStore())) ? rtb_Reset :
          (MaxGovPIDOutLowerLimit_DataStore());

        /* MinMax: '<S196>/MinMax1' incorporates:
         *  MinMax: '<S196>/MinMax'
         *  S-Function (motohawk_sfun_calibration): '<S190>/motohawk_calibration2'
         */
        BaseEngineController_LS_128_B.s190_Switch = (rtb_Reset <=
          (MaxGovPIDOutUpperLimit_DataStore())) || rtIsNaN
          ((MaxGovPIDOutUpperLimit_DataStore())) ? rtb_Reset :
          (MaxGovPIDOutUpperLimit_DataStore());
      }

      /* End of Switch: '<S190>/Switch' */

      /* S-Function (motohawk_sfun_data_write): '<S187>/motohawk_data_write' */
      /* Write to Data Storage as scalar: MaxGov */
      {
        MaxGov_DataStore() = rtb_StateO;
      }

      /* MultiPortSwitch: '<S187>/Multiport Switch' incorporates:
       *  Constant: '<S187>/Constant'
       *  DataTypeConversion: '<S187>/Data Type Conversion2'
       *  S-Function (motohawk_sfun_calibration): '<S187>/motohawk_calibration1'
       */
      if ((MaxGovDisable_DataStore()) == FALSE) {
        /* DataTypeConversion: '<S187>/Data Type Conversion2' */
        rtb_Reset = fmod((real_T)rtb_ETCMode, 256.0);
        BaseEngineController_LS_128_B.s187_MultiportSwitch = (((rtb_Reset < 0.0 ?
          (int8_T)-(int8_T)(uint8_T)-rtb_Reset : (int8_T)(uint8_T)rtb_Reset) !=
          0));
      } else {
        BaseEngineController_LS_128_B.s187_MultiportSwitch = FALSE;
      }

      /* End of MultiPortSwitch: '<S187>/Multiport Switch' */

      /* S-Function Block: <S190>/motohawk_interpolation_1d4 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d4 = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1_i, (real_T *)
           ((MaxGovIGainErrorMultTbl_DataStore())), 9);
        (MaxGovIGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d4;
      }

      /* Product: '<S197>/Product1' incorporates:
       *  Product: '<S190>/Product5'
       *  S-Function (motohawk_sfun_calibration): '<S190>/motohawk_calibration4'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S190>/motohawk_interpolation_1d4'
       *  S-Function (motohawk_sfun_prelookup): '<S190>/motohawk_prelookup1'
       */
      rtb_Reset = (MaxGovIGain_DataStore()) * rtb_motohawk_interpolation_1d4 *
        rtb_alpha_a;

      /* S-Function Block: <S199>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_128_DWork.s199_motohawk_delta_time_DWORK1,
           NULL);
        rtb_motohawk_delta_time_o = ((real_T) delta) * 0.000001;
      }

      /* Sum: '<S199>/Sum' incorporates:
       *  Product: '<S199>/Product'
       *  S-Function (motohawk_sfun_delta_time): '<S199>/motohawk_delta_time'
       */
      rtb_alpha_a = rtb_Reset * rtb_motohawk_delta_time_o +
        BaseEngineController_LS_128_B.s199_Switch1;

      /* MinMax: '<S201>/MinMax' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S190>/motohawk_calibration7'
       */
      rtb_Reset = (rtb_alpha_a >= (MaxGovITermLowerLimit_DataStore())) ||
        rtIsNaN((MaxGovITermLowerLimit_DataStore())) ? rtb_alpha_a :
        (MaxGovITermLowerLimit_DataStore());

      /* Update for UnitDelay: '<S109>/Unit Delay' */
      BaseEngineController_LS_128_DWork.s109_UnitDelay_DSTATE =
        BaseEngineController_LS_128_B.s187_MultiportSwitch;

      /* Update for UnitDelay: '<S188>/Unit Delay' */
      BaseEngineController_LS_128_DWork.s188_UnitDelay_DSTATE =
        BaseEngineController_LS_128_B.s188_DontallowsetpointtoevergoabovetheTargetRPM;

      /* Update for UnitDelay: '<S198>/Unit Delay' */
      BaseEngineController_LS_128_DWork.s198_UnitDelay_DSTATE =
        rtb_DataTypeConversion_a;

      /* Update for UnitDelay: '<S199>/Unit Delay' incorporates:
       *  MinMax: '<S201>/MinMax'
       *  MinMax: '<S201>/MinMax1'
       *  S-Function (motohawk_sfun_calibration): '<S190>/motohawk_calibration8'
       */
      BaseEngineController_LS_128_DWork.s199_UnitDelay_DSTATE = (rtb_Reset <=
        (MaxGovITermUpperLimit_DataStore())) || rtIsNaN
        ((MaxGovITermUpperLimit_DataStore())) ? rtb_Reset :
        (MaxGovITermUpperLimit_DataStore());
    }

    /* Output and update for function-call system: '<S93>/Spark Manager' */
    {
      /* local block i/o variables */
      real_T rtb_RichEquivRatioTargetDelta;
      real_T rtb_motohawk_interpolation_1d_h;
      real_T rtb_RichEquivRatioTargetDelta_j;
      real_T rtb_motohawk_interpolation_1d1_l;
      real_T rtb_RichEquivRatioTargetDelta_g;
      real_T rtb_motohawk_interpolation_1d2_k;
      real_T rtb_RichEquivRatioTargetDelta_m;
      real_T rtb_motohawk_interpolation_1d_j;
      real_T rtb_RichEquivRatioTargetDelta_i;
      real_T rtb_motohawk_interpolation_1d_i;
      real_T rtb_RichEquivRatioTargetDelta_p;
      real_T rtb_motohawk_interpolation_1d4_hg;
      index_T rtb_motohawk_prelookup_i;
      real_T rtb_Product_kt;
      real_T rtb_Product1_nx;

      /* S-Function Block: <S112>/motohawk_interpolation_2d2 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_RichEquivRatioTargetDelta = TableInterpolation2D_real_T
          (BaseEngineController_LS_128_B.s435_Indexes,
           BaseEngineController_LS_128_B.s437_Indexes, (real_T *)
           ((SparkAdvMap_DataStore())), 17, 17);
        (SparkAdv_DataStore()) = rtb_RichEquivRatioTargetDelta;
      }

      /* S-Function Block: <S277>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d_h = TableInterpolation1D_real_T
          (BaseEngineController_LS_128_B.s433_motohawk_prelookup, (real_T *)
           ((ECT_SpkOfstTbl_DataStore())), 5);
        (ECT_SpkOfst_DataStore()) = rtb_motohawk_interpolation_1d_h;
      }

      /* S-Function Block: <S277>/motohawk_interpolation_2d3 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_RichEquivRatioTargetDelta_j = TableInterpolation2D_real_T
          (BaseEngineController_LS_128_B.s435_motohawk_prelookup1,
           BaseEngineController_LS_128_B.s437_motohawk_prelookup1, (real_T *)
           ((ECT_SpkOfstMultMap_DataStore())), 9, 9);
        (ECT_SpkOfstMult_DataStore()) = rtb_RichEquivRatioTargetDelta_j;
      }

      /* Product: '<S277>/Product' incorporates:
       *  S-Function (motohawk_sfun_interpolation_1d): '<S277>/motohawk_interpolation_1d'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S277>/motohawk_interpolation_2d3'
       */
      rtb_Product_kt = rtb_motohawk_interpolation_1d_h *
        rtb_RichEquivRatioTargetDelta_j;

      /* S-Function Block: <S277>/motohawk_interpolation_1d1 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d1_l = TableInterpolation1D_real_T
          (BaseEngineController_LS_128_B.s434_motohawk_prelookup, (real_T *)
           ((IAT_SpkOfstTbl_DataStore())), 5);
        (IAT_SpkOfst_DataStore()) = rtb_motohawk_interpolation_1d1_l;
      }

      /* S-Function Block: <S277>/motohawk_interpolation_2d1 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_RichEquivRatioTargetDelta_g = TableInterpolation2D_real_T
          (BaseEngineController_LS_128_B.s435_motohawk_prelookup1,
           BaseEngineController_LS_128_B.s437_motohawk_prelookup1, (real_T *)
           ((IAT_SpkOfstMultMap_DataStore())), 9, 9);
        (IAT_SpkOfstMult_DataStore()) = rtb_RichEquivRatioTargetDelta_g;
      }

      /* Product: '<S277>/Product1' incorporates:
       *  S-Function (motohawk_sfun_interpolation_1d): '<S277>/motohawk_interpolation_1d1'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S277>/motohawk_interpolation_2d1'
       */
      rtb_Product1_nx = rtb_motohawk_interpolation_1d1_l *
        rtb_RichEquivRatioTargetDelta_g;

      /* S-Function Block: <S277>/motohawk_interpolation_1d2 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d2_k = TableInterpolation1D_real_T
          (BaseEngineController_LS_128_B.s432_motohawk_prelookup, (real_T *)
           ((CAT_SpkOfstTbl_DataStore())), 5);
        (CAT_SpkOfst_DataStore()) = rtb_motohawk_interpolation_1d2_k;
      }

      /* S-Function Block: <S277>/motohawk_interpolation_2d2 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_RichEquivRatioTargetDelta_m = TableInterpolation2D_real_T
          (BaseEngineController_LS_128_B.s435_motohawk_prelookup1,
           BaseEngineController_LS_128_B.s437_motohawk_prelookup1, (real_T *)
           ((CAT_SpkOfstMultMap_DataStore())), 9, 9);
        (CAT_SpkOfstMult_DataStore()) = rtb_RichEquivRatioTargetDelta_m;
      }

      /* Sum: '<S277>/Add' incorporates:
       *  Product: '<S277>/Product2'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S277>/motohawk_interpolation_1d2'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S277>/motohawk_interpolation_2d2'
       */
      BaseEngineController_LS_128_B.s277_Add = (rtb_Product_kt + rtb_Product1_nx)
        + rtb_motohawk_interpolation_1d2_k * rtb_RichEquivRatioTargetDelta_m;

      /* S-Function Block: <S274>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d_j = TableInterpolation1D_real_T
          (BaseEngineController_LS_128_B.s436_motohawk_prelookup, (real_T *)
           ((EthSpkModTbl_DataStore())), 5);
        (EthSpkMod_DataStore()) = rtb_motohawk_interpolation_1d_j;
      }

      /* S-Function Block: <S274>/motohawk_interpolation_2d3 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_RichEquivRatioTargetDelta_i = TableInterpolation2D_real_T
          (BaseEngineController_LS_128_B.s435_motohawk_prelookup1,
           BaseEngineController_LS_128_B.s437_motohawk_prelookup1, (real_T *)
           ((Ethanol_SpkOfstMultMap_DataStore())), 9, 9);
        (Ethanol_SpkOfstMult_DataStore()) = rtb_RichEquivRatioTargetDelta_i;
      }

      /* Product: '<S274>/Product' incorporates:
       *  S-Function (motohawk_sfun_interpolation_1d): '<S274>/motohawk_interpolation_1d'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S274>/motohawk_interpolation_2d3'
       */
      BaseEngineController_LS_128_B.s274_Product =
        rtb_motohawk_interpolation_1d_j * rtb_RichEquivRatioTargetDelta_i;

      /* S-Function Block: <S273>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (DesEqRatio09In_DataStore()) =
          BaseEngineController_LS_128_B.s147_Product1;
        (DesEqRatio09Idx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_LS_128_B.s147_Product1,
           (DesEqRatio09IdxArr_DataStore()), 9, (DesEqRatio09Idx_DataStore()));
        rtb_motohawk_prelookup_i = (DesEqRatio09Idx_DataStore());
      }

      /* S-Function Block: <S273>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d_i = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup_i, (real_T *) ((EqRatio_SpkOfstTbl_DataStore())),
           9);
        (EqRatio_SpkOfst_DataStore()) = rtb_motohawk_interpolation_1d_i;
      }

      /* S-Function Block: <S273>/motohawk_interpolation_2d3 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_RichEquivRatioTargetDelta_p = TableInterpolation2D_real_T
          (BaseEngineController_LS_128_B.s435_motohawk_prelookup1,
           BaseEngineController_LS_128_B.s437_motohawk_prelookup1, (real_T *)
           ((EqRatio_SpkOfsMultMap_DataStore())), 9, 9);
        (EqRatio_SpkOfsMult_DataStore()) = rtb_RichEquivRatioTargetDelta_p;
      }

      /* Product: '<S273>/Product' incorporates:
       *  S-Function (motohawk_sfun_interpolation_1d): '<S273>/motohawk_interpolation_1d'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S273>/motohawk_interpolation_2d3'
       *  S-Function (motohawk_sfun_prelookup): '<S273>/motohawk_prelookup'
       */
      BaseEngineController_LS_128_B.s273_Product =
        rtb_motohawk_interpolation_1d_i * rtb_RichEquivRatioTargetDelta_p;

      /* Sum: '<S112>/Apply Offsets to Base Spark Advance1' incorporates:
       *  S-Function (motohawk_sfun_interpolation_2d): '<S112>/motohawk_interpolation_2d2'
       *  Sum: '<S112>/Apply Offsets to Base Spark Advance3'
       */
      BaseEngineController_LS_128_B.s112_ApplyOffsetstoBaseSparkAdvance1 =
        ((((rtb_RichEquivRatioTargetDelta +
            BaseEngineController_LS_128_B.s277_Add) +
           BaseEngineController_LS_128_B.s274_Product) +
          BaseEngineController_LS_128_B.s273_Product) +
         BaseEngineController_LS_128_B.s110_IdleSpk) +
        BaseEngineController_LS_128_B.s147_SpkOut;

      /* MinMax: '<S280>/MinMax' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S276>/motohawk_calibration5'
       */
      rtb_Product_kt =
        (BaseEngineController_LS_128_B.s112_ApplyOffsetstoBaseSparkAdvance1 >=
         (MinSparkLimit_DataStore())) || rtIsNaN((MinSparkLimit_DataStore())) ?
        BaseEngineController_LS_128_B.s112_ApplyOffsetstoBaseSparkAdvance1 :
        (MinSparkLimit_DataStore());

      /* Switch: '<S276>/Switch1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S276>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S276>/motohawk_interpolation_1d4'
       */
      if (BaseEngineController_LS_128_B.s222_RelOp) {
        /* S-Function Block: <S276>/motohawk_interpolation_1d4 */
        {
          extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T
            *tbl_data, uint32_T sz);
          rtb_motohawk_interpolation_1d4_hg = TableInterpolation1D_real_T
            (BaseEngineController_LS_128_B.s435_motohawk_prelookup1, (real_T *)
             ((MaxSparkLimitTbl_DataStore())), 9);
          (MaxSparkLimit_DataStore()) = rtb_motohawk_interpolation_1d4_hg;
        }

        rtb_Product1_nx = rtb_motohawk_interpolation_1d4_hg;
      } else {
        rtb_Product1_nx = (MaxSparkLimitOffIdle_DataStore());
      }

      /* End of Switch: '<S276>/Switch1' */

      /* MinMax: '<S280>/MinMax1' incorporates:
       *  MinMax: '<S280>/MinMax'
       */
      BaseEngineController_LS_128_B.s280_MinMax1 = (rtb_Product_kt <=
        rtb_Product1_nx) || rtIsNaN(rtb_Product1_nx) ? rtb_Product_kt :
        rtb_Product1_nx;

      /* UnitDelay: '<S275>/Unit Delay' */
      rtb_Product_kt = BaseEngineController_LS_128_DWork.s275_UnitDelay_DSTATE;

      /* Switch: '<S275>/Switch' incorporates:
       *  UnitDelay: '<S278>/Initial Condition is True'
       */
      if (BaseEngineController_LS_128_DWork.s278_InitialConditionisTrue_DSTATE)
      {
        BaseEngineController_LS_128_B.s275_Switch =
          BaseEngineController_LS_128_B.s280_MinMax1;
      } else {
        /* Sum: '<S275>/Sum' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S275>/motohawk_calibration'
         */
        rtb_Product1_nx = rtb_Product_kt + (SparkAdv_DeltaHi_DataStore());

        /* MinMax: '<S279>/MinMax' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S275>/motohawk_calibration1'
         *  Sum: '<S275>/Sum1'
         */
        rtb_Product_kt -= (SparkAdv_DeltaLo_DataStore());

        /* MinMax: '<S279>/MinMax1' incorporates:
         *  MinMax: '<S279>/MinMax'
         */
        rtb_Product_kt = (BaseEngineController_LS_128_B.s280_MinMax1 >=
                          rtb_Product_kt) || rtIsNaN(rtb_Product_kt) ?
          BaseEngineController_LS_128_B.s280_MinMax1 : rtb_Product_kt;
        BaseEngineController_LS_128_B.s275_Switch = (rtb_Product_kt <=
          rtb_Product1_nx) || rtIsNaN(rtb_Product1_nx) ? rtb_Product_kt :
          rtb_Product1_nx;
      }

      /* End of Switch: '<S275>/Switch' */

      /* S-Function Block: <S112>/motohawk_interpolation_2d1 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        BaseEngineController_LS_128_B.s112_motohawk_interpolation_2d1 =
          TableInterpolation2D_real_T
          (BaseEngineController_LS_128_B.s435_motohawk_prelookup1,
           BaseEngineController_LS_128_B.s437_motohawk_prelookup1, (real_T *)
           ((BaseSparkEnergyMap_DataStore())), 9, 9);
        (BaseSparkEnergy_DataStore()) =
          BaseEngineController_LS_128_B.s112_motohawk_interpolation_2d1;
      }

      /* Update for UnitDelay: '<S278>/Initial Condition is True' incorporates:
       *  Constant: '<S278>/False After First Sample'
       */
      BaseEngineController_LS_128_DWork.s278_InitialConditionisTrue_DSTATE =
        FALSE;

      /* Update for UnitDelay: '<S275>/Unit Delay' */
      BaseEngineController_LS_128_DWork.s275_UnitDelay_DSTATE =
        BaseEngineController_LS_128_B.s275_Switch;
    }
  }
}
