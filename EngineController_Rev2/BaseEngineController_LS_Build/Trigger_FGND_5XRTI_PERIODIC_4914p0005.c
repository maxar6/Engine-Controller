/*
 * Trigger_FGND_5XRTI_PERIODIC_4914p0005.c
 *
 * Code generation for model "BaseEngineController_LS.mdl".
 *
 * Model version              : 1.1987
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Sun Oct 04 18:30:28 2020
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_LS.h"
#include "BaseEngineController_LS_private.h"

void Trigger_FGND_5XRTI_PERIODIC_4914p0005(void)
{
  /* Named constants for Stateflow: '<S913>/ECUP Latch' */
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
  }

  if (BaseEngineController_LS_DWork.s136_motohawk_trigger1_DWORK1) {
    /* Output and update for function-call system: '<S136>/MinGovernor' */
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
      real_T rtb_motohawk_interpolation_1d1;
      real_T rtb_motohawk_delta_time_n;
      real_T rtb_Saturation_c;
      real_T rtb_motohawk_delta_time_n2;
      real_T rtb_Saturation_k;
      real_T rtb_motohawk_interpolation_1d1_b;
      real_T rtb_motohawk_delta_time_j;
      real_T rtb_motohawk_interpolation_1d2_i;
      real_T rtb_MinMax1_a;
      real_T rtb_motohawk_delta_time_e;
      real_T rtb_Saturation_cl;
      real_T rtb_motohawk_interpolation_1d2_p;
      real_T rtb_motohawk_delta_time_bc;
      real_T rtb_motohawk_interpolation_1d1_i;
      real_T rtb_Switch_e;
      index_T rtb_motohawk_prelookup1;
      index_T rtb_motohawk_prelookup1_j;
      ZCEventType zcEvent;
      real_T rtb_Sum2_g;
      real_T rtb_Sum1_f;
      boolean_T rtb_RelOp_j;
      real_T rtb_UnitDelay1_j;
      real_T rtb_Product5;
      boolean_T rtb_LogicalOperator_i;
      real_T rtb_Product4;
      real_T rtb_Product2_j;
      real_T rtb_Sum_e;

      /* Sum: '<S266>/Sum2' incorporates:
       *  UnitDelay: '<S266>/Unit Delay'
       */
      rtb_Sum2_g = BaseEngineController_LS_B.s444_RPMInst -
        BaseEngineController_LS_DWork.s266_UnitDelay_DSTATE;

      /* S-Function Block: <S266>/motohawk_delta_time */
      rtb_motohawk_delta_time_h = 0.005;

      /* Product: '<S266>/Product' incorporates:
       *  S-Function (motohawk_sfun_delta_time): '<S266>/motohawk_delta_time'
       */
      rtb_Sum2_g /= rtb_motohawk_delta_time_h;

      /* S-Function Block: <S267>/motohawk_delta_time */
      rtb_Switch_e = 0.005;

      /* Product: '<S267>/Product' incorporates:
       *  MinMax: '<S267>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S267>/motohawk_calibration'
       */
      rtb_Switch_e /= (rtb_Switch_e >= (RPMFallingFiltConst_DataStore())) ||
        rtIsNaN((RPMFallingFiltConst_DataStore())) ? rtb_Switch_e :
        (RPMFallingFiltConst_DataStore());

      /* Sum: '<S268>/Sum1' incorporates:
       *  Constant: '<S268>/Constant'
       *  Product: '<S268>/Product'
       *  Product: '<S268>/Product1'
       *  Sum: '<S268>/Sum'
       *  UnitDelay: '<S268>/Unit Delay'
       */
      rtb_Sum1_f = (1.0 - rtb_Switch_e) *
        BaseEngineController_LS_DWork.s268_UnitDelay_DSTATE + rtb_Sum2_g *
        rtb_Switch_e;

      /* RelationalOperator: '<S262>/Relational Operator' incorporates:
       *  Gain: '<S262>/Falling RPM is Negative Derivative'
       *  S-Function (motohawk_sfun_calibration): '<S262>/motohawk_calibration'
       */
      BaseEngineController_LS_B.s262_RelationalOperator = ((rtb_Sum1_f <
        -(RPMFallingRate_DataStore())));

      /* Outputs for Atomic SubSystem: '<S153>/Base RPM Set Pt' */

      /* S-Function Block: <S246>/motohawk_interpolation_1d2 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d2_i = TableInterpolation1D_real_T
          (BaseEngineController_LS_B.s396_motohawk_prelookup, (real_T *)
           ((MinGovClntRPMSetPtTbl_DataStore())), 5);
        (MinGovClntRPMSetPt_DataStore()) = rtb_motohawk_interpolation_1d2_i;
      }

      /* End of Outputs for SubSystem: '<S153>/Base RPM Set Pt' */

      /* RelationalOperator: '<S248>/Relational Operator' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S248>/motohawk_calibration4'
       *  Sum: '<S248>/Sum'
       */
      BaseEngineController_LS_B.s248_RelationalOperator =
        ((BaseEngineController_LS_B.s444_RPMInst <
          (InGearMinGovEntryRPMDelta_DataStore()) +
          rtb_motohawk_interpolation_1d2_i));

      /* RelationalOperator: '<S248>/Relational Operator3' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S248>/motohawk_calibration6'
       *  Sum: '<S248>/Sum2'
       */
      BaseEngineController_LS_B.s248_RelationalOperator3 =
        ((BaseEngineController_LS_B.s444_RPMInst <
          rtb_motohawk_interpolation_1d2_i - (StallSaverDeltaRPM_DataStore())));

      /* MultiPortSwitch: '<S248>/Multiport Switch1' incorporates:
       *  S-Function (motohawk_sfun_data_read): '<S248>/motohawk_data_read1'
       */
      if (AirControlSource_DataStore() == FALSE) {
        rtb_Switch_e = BaseEngineController_LS_B.s408_Switch1;
      } else {
        rtb_Switch_e = BaseEngineController_LS_B.s415_Switch2;
      }

      /* End of MultiPortSwitch: '<S248>/Multiport Switch1' */
      /* RelationalOperator: '<S248>/Relational Operator1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S248>/motohawk_calibration5'
       */
      BaseEngineController_LS_B.s248_RelationalOperator1 = ((rtb_Switch_e <
        (MinGovEntryAirPcnt_DataStore())));

      /* MultiPortSwitch: '<S248>/Multiport Switch' incorporates:
       *  Constant: '<S248>/Constant'
       *  RelationalOperator: '<S248>/Relational Operator4'
       *  S-Function (motohawk_sfun_data_read): '<S248>/motohawk_data_read1'
       *  UnitDelay: '<S153>/Unit Delay3'
       */
      if (AirControlSource_DataStore() == FALSE) {
        rtb_RelOp_j = (BaseEngineController_LS_B.s422_Sum2 >
                       BaseEngineController_LS_DWork.s153_UnitDelay3_DSTATE);
      } else {
        rtb_RelOp_j = TRUE;
      }

      /* End of MultiPortSwitch: '<S248>/Multiport Switch' */

      /* Logic: '<S248>/Logical Operator' incorporates:
       *  RelationalOperator: '<S248>/Relational Operator2'
       *  S-Function (motohawk_sfun_calibration): '<S248>/motohawk_calibration3'
       *  S-Function (motohawk_sfun_calibration): '<S248>/motohawk_calibration5'
       *  Sum: '<S248>/Sum1'
       */
      BaseEngineController_LS_B.s248_LogicalOperator = (((rtb_Switch_e >=
        (MinGovEntryAirPcnt_DataStore()) + (MinGovAirPcntHyst_DataStore())) &&
        rtb_RelOp_j));

      /* S-Function Block: <S265>/motohawk_delta_time */
      rtb_motohawk_delta_time_d = 0.005;

      /* Switch: '<S265>/Switch' incorporates:
       *  Constant: '<S265>/Constant'
       *  S-Function (motohawk_sfun_data_read): '<S265>/motohawk_data_read'
       *  S-Function (motohawk_sfun_delta_time): '<S265>/motohawk_delta_time'
       *  Sum: '<S265>/Sum'
       */
      if (BaseEngineController_LS_B.s248_RelationalOperator1) {
        rtb_Switch_e = rtb_motohawk_delta_time_d + IdleEnterTimer_DataStore();
      } else {
        rtb_Switch_e = 0.0;
      }

      /* End of Switch: '<S265>/Switch' */
      /* RelationalOperator: '<S248>/Relational Operator5' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S248>/motohawk_calibration2'
       */
      BaseEngineController_LS_B.s248_RelationalOperator5 = ((rtb_Switch_e >
        (MinGovEntryAirTimeThresh_DataStore())));

      /* Stateflow: '<S248>/IdleStateMachine' */
      BaseEngineController_LS_IdleStateMachine();

      /* RelationalOperator: '<S264>/RelOp' incorporates:
       *  Constant: '<S264>/Constant'
       */
      BaseEngineController_LS_B.s264_RelOp =
        ((BaseEngineController_LS_B.s263_IdleState == 2));

      /* UnitDelay: '<S153>/Unit Delay1' */
      rtb_UnitDelay1_j = BaseEngineController_LS_DWork.s153_UnitDelay1_DSTATE;

      /* Outputs for Enabled SubSystem: '<S153>/Base Airflow Table Adapt' incorporates:
       *  EnablePort: '<S245>/Enable'
       */
      if (BaseEngineController_LS_B.s264_RelOp) {
        /* Product: '<S245>/Product0' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S245>/motohawk_calibration2'
         */
        rtb_Sum2_g = rtb_UnitDelay1_j * (BaseAirflowAdaptGain_DataStore());

        /* MinMax: '<S260>/MinMax' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S258>/motohawk_calibration'
         */
        rtb_Sum2_g = (rtb_Sum2_g >= (BaseAirflowAdaptErrorLwrLim_DataStore())) ||
          rtIsNaN((BaseAirflowAdaptErrorLwrLim_DataStore())) ? rtb_Sum2_g :
          (BaseAirflowAdaptErrorLwrLim_DataStore());

        /* MinMax: '<S260>/MinMax1' incorporates:
         *  MinMax: '<S260>/MinMax'
         *  S-Function (motohawk_sfun_calibration): '<S258>/motohawk_calibration1'
         */
        rtb_MinMax1_a = (rtb_Sum2_g <= (BaseAirflowAdaptErrorUprLim_DataStore()))
          || rtIsNaN((BaseAirflowAdaptErrorUprLim_DataStore())) ? rtb_Sum2_g :
          (BaseAirflowAdaptErrorUprLim_DataStore());

        /* Outputs for Atomic SubSystem: '<S245>/Idle Control Enable Delay' */

        /* S-Function Block: <S259>/motohawk_delta_time */
        rtb_motohawk_delta_time_e = 0.005;

        /* Switch: '<S259>/Switch' incorporates:
         *  Constant: '<S259>/Constant'
         *  S-Function (motohawk_sfun_data_read): '<S259>/motohawk_data_read'
         *  S-Function (motohawk_sfun_delta_time): '<S259>/motohawk_delta_time'
         *  Sum: '<S259>/Sum'
         */
        if (BaseEngineController_LS_B.s264_RelOp) {
          rtb_Sum2_g = rtb_motohawk_delta_time_e + BaseAirflowTimer_DataStore();
        } else {
          rtb_Sum2_g = 0.0;
        }

        /* End of Switch: '<S259>/Switch' */
        /* RelationalOperator: '<S257>/Relational Operator' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S257>/motohawk_calibration1'
         */
        rtb_RelOp_j = (rtb_Sum2_g > (BaseAirflowAdaptDelayTime_DataStore()));

        /* Saturate: '<S259>/Saturation' */
        rtb_Saturation_cl = rtb_Sum2_g >= 16000.0 ? 16000.0 : rtb_Sum2_g <= 0.0 ?
          0.0 : rtb_Sum2_g;

        /* S-Function (motohawk_sfun_data_write): '<S259>/motohawk_data_write' */
        /* Write to Data Storage as scalar: BaseAirflowTimer */
        {
          BaseAirflowTimer_DataStore() = rtb_Saturation_cl;
        }

        /* End of Outputs for SubSystem: '<S245>/Idle Control Enable Delay' */

        /* Logic: '<S245>/Logical Operator1' incorporates:
         *  Abs: '<S245>/Abs'
         *  RelationalOperator: '<S245>/Relational Operator'
         *  S-Function (motohawk_sfun_calibration): '<S245>/motohawk_calibration3'
         *  S-Function (motohawk_sfun_calibration): '<S245>/motohawk_calibration4'
         */
        BaseEngineController_LS_B.s245_LogicalOperator1 =
          (((BaseAirflowAdaptEnable_DataStore()) && rtb_RelOp_j && (fabs
             (rtb_UnitDelay1_j) <= (BaseAirflowAdaptDelta_DataStore()))));

        /* Outputs for Enabled SubSystem: '<S245>/Adapt Base Airflow Table' incorporates:
         *  EnablePort: '<S256>/Enable'
         */
        if (BaseEngineController_LS_B.s245_LogicalOperator1) {
          /* S-Function Block: <S256>/motohawk_adapt_table */
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

        /* End of Outputs for SubSystem: '<S245>/Adapt Base Airflow Table' */
      }

      /* End of Outputs for SubSystem: '<S153>/Base Airflow Table Adapt' */
      /* S-Function Block: <S247>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s247_motohawk_delta_time_DWORK1, NULL);
        rtb_motohawk_delta_time_c = ((real_T) delta) * 0.000001;
      }

      /* MultiPortSwitch: '<S247>/Multiport Switch' incorporates:
       *  Gain: '<S247>/Ramp Down'
       *  Product: '<S247>/Product'
       *  Product: '<S247>/Product1'
       *  S-Function (motohawk_sfun_delta_time): '<S247>/motohawk_delta_time'
       */
      if (BaseEngineController_LS_B.s264_RelOp == FALSE) {
        /* Switch: '<S247>/Switch' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S153>/motohawk_calibration3'
         *  S-Function (motohawk_sfun_delta_time): '<S247>/motohawk_delta_time'
         */
        if ((IdleExitTimeConst_DataStore()) > 0.0) {
          rtb_Sum2_g = (IdleExitTimeConst_DataStore());
        } else {
          rtb_Sum2_g = rtb_motohawk_delta_time_c;
        }

        /* End of Switch: '<S247>/Switch' */
        rtb_Product5 = rtb_motohawk_delta_time_c / rtb_Sum2_g * -1.0;
      } else {
        rtb_Product5 = rtb_motohawk_delta_time_c / rtb_motohawk_delta_time_c;
      }

      /* End of MultiPortSwitch: '<S247>/Multiport Switch' */

      /* Sum: '<S247>/Sum' incorporates:
       *  UnitDelay: '<S247>/state'
       */
      rtb_Product5 += BaseEngineController_LS_DWork.s247_state_DSTATE;

      /* MinMax: '<S261>/MinMax1' incorporates:
       *  Constant: '<S247>/Constant'
       *  Constant: '<S247>/Constant1'
       *  MinMax: '<S261>/MinMax'
       */
      rtb_Sum2_g = rtb_Product5 >= 0.0 ? rtb_Product5 : 0.0;
      BaseEngineController_LS_B.s261_MinMax1 = rtb_Sum2_g <= 1.0 ? rtb_Sum2_g :
        1.0;

      /* RelationalOperator: '<S250>/RelOp' incorporates:
       *  Constant: '<S250>/Constant'
       */
      rtb_RelOp_j = (BaseEngineController_LS_B.s261_MinMax1 == 0.0);

      /* UnitDelay: '<S153>/Unit Delay2' */
      rtb_Sum2_g = BaseEngineController_LS_DWork.s153_UnitDelay2_DSTATE;

      /* HitCross: '<S153>/Hit  Crossing1' incorporates:
       *  UnitDelay: '<S153>/Unit Delay2'
       */
      zcEvent = rt_ZCFcn(FALLING_ZERO_CROSSING,
                         &BaseEngineController_LS_PrevZCSigState.HitCrossing1_Input_ZCE,
                         (BaseEngineController_LS_DWork.s153_UnitDelay2_DSTATE -
                          0.5));
      if (BaseEngineController_LS_DWork.s153_HitCrossing1_MODE == 0) {
        if (zcEvent != NO_ZCEVENT) {
          BaseEngineController_LS_B.s153_HitCrossing1 =
            !BaseEngineController_LS_B.s153_HitCrossing1;
          BaseEngineController_LS_DWork.s153_HitCrossing1_MODE = 1;
        } else {
          if (BaseEngineController_LS_B.s153_HitCrossing1 && (rtb_Sum2_g != 0.5))
          {
            BaseEngineController_LS_B.s153_HitCrossing1 = FALSE;
          }
        }
      } else {
        if (rtb_Sum2_g != 0.5) {
          BaseEngineController_LS_B.s153_HitCrossing1 = FALSE;
        }

        BaseEngineController_LS_DWork.s153_HitCrossing1_MODE = 0;
      }

      /* End of HitCross: '<S153>/Hit  Crossing1' */

      /* Logic: '<S153>/Logical Operator' */
      BaseEngineController_LS_B.s153_LogicalOperator = ((rtb_RelOp_j ||
        BaseEngineController_LS_B.s153_HitCrossing1));

      /* Logic: '<S251>/Logical Operator' */
      rtb_LogicalOperator_i = !BaseEngineController_LS_B.s264_RelOp;

      /* S-Function Block: <S251>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s251_motohawk_delta_time_DWORK1, NULL);
        rtb_motohawk_delta_time_b = ((real_T) delta) * 0.000001;
      }

      /* UnitDelay: '<S251>/Unit Delay' */
      rtb_Sum2_g = BaseEngineController_LS_DWork.s251_UnitDelay_DSTATE;

      /* Switch: '<S251>/Preload lowpass filter with current RPM while not on Idle' incorporates:
       *  Constant: '<S251>/Constant'
       *  Product: '<S251>/Product2'
       *  Product: '<S251>/Product3'
       *  Sum: '<S251>/Sum'
       *  Sum: '<S251>/Sum1'
       */
      if (rtb_LogicalOperator_i) {
        rtb_Product5 = BaseEngineController_LS_B.s444_RPMInst;
      } else {
        /* Product: '<S251>/Product1' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S251>/motohawk_calibration2'
         *  S-Function (motohawk_sfun_delta_time): '<S251>/motohawk_delta_time'
         */
        rtb_UnitDelay1_j = rtb_motohawk_delta_time_b /
          (InGearRPMCtrlEntryFiltC_DataStore());
        rtb_Product5 = (1.0 - rtb_UnitDelay1_j) * rtb_Sum2_g +
          rtb_motohawk_interpolation_1d2_i * rtb_UnitDelay1_j;
      }

      /* End of Switch: '<S251>/Preload lowpass filter with current RPM while not on Idle' */

      /* MinMax: '<S251>/Don't allow setpoint to ever drop below the TargetRPM' */
      BaseEngineController_LS_B.s251_DontallowsetpointtoeverdropbelowtheTargetRPM
        = (rtb_motohawk_interpolation_1d2_i >= rtb_Product5) || rtIsNaN
        (rtb_Product5) ? rtb_motohawk_interpolation_1d2_i : rtb_Product5;

      /* Sum: '<S277>/Sum2' */
      BaseEngineController_LS_B.s277_Sum2 =
        BaseEngineController_LS_B.s251_DontallowsetpointtoeverdropbelowtheTargetRPM
        - BaseEngineController_LS_B.s500_Sum1;

      /* Product: '<S277>/Product5' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S253>/motohawk_calibration5'
       */
      rtb_Product5 = BaseEngineController_LS_B.s277_Sum2 *
        (AirMinGovErrorGain_DataStore());

      /* S-Function Block: <S253>/motohawk_prelookup1 */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (AirMinGovSpeedErrorIn_DataStore()) =
          BaseEngineController_LS_B.s277_Sum2;
        (AirMinGovSpeedErrorIdx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_LS_B.s277_Sum2,
           (AirMinGovSpeedErrorIdxArr_DataStore()), 9,
           (AirMinGovSpeedErrorIdx_DataStore()));
        rtb_motohawk_prelookup1 = (AirMinGovSpeedErrorIdx_DataStore());
      }

      /* S-Function Block: <S275>/motohawk_interpolation_1d2 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d2 = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1, (real_T *)
           ((AirMinGovPGainErrorMultTbl_DataStore())), 9);
        (AirMinGovPGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d2;
      }

      /* Product: '<S277>/Product2' incorporates:
       *  Product: '<S275>/Product2'
       *  S-Function (motohawk_sfun_calibration): '<S275>/motohawk_calibration3'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S275>/motohawk_interpolation_1d2'
       *  S-Function (motohawk_sfun_prelookup): '<S253>/motohawk_prelookup1'
       */
      BaseEngineController_LS_B.s277_Product2 = (AirMinGovPGain_DataStore()) *
        rtb_motohawk_interpolation_1d2 * rtb_Product5;

      /* UnitDelay: '<S278>/Unit Delay' */
      rtb_Sum2_g = BaseEngineController_LS_DWork.s278_UnitDelay_DSTATE;

      /* S-Function Block: <S275>/motohawk_interpolation_1d3 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d3 = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1, (real_T *)
           ((AirMinGovDGainErrorMultTbl_DataStore())), 9);
        (AirMinGovDGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d3;
      }

      /* Product: '<S277>/Product4' incorporates:
       *  Product: '<S275>/Product3'
       *  S-Function (motohawk_sfun_calibration): '<S275>/motohawk_calibration2'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S275>/motohawk_interpolation_1d3'
       *  S-Function (motohawk_sfun_prelookup): '<S253>/motohawk_prelookup1'
       */
      rtb_Product4 = (AirMinGovDGain_DataStore()) *
        rtb_motohawk_interpolation_1d3 * rtb_Product5;

      /* S-Function Block: <S278>/motohawk_delta_time */
      rtb_motohawk_delta_time_bi = 0.005;

      /* Product: '<S278>/Product' incorporates:
       *  S-Function (motohawk_sfun_delta_time): '<S278>/motohawk_delta_time'
       *  Sum: '<S278>/Sum2'
       */
      BaseEngineController_LS_B.s278_Product = (rtb_Product4 - rtb_Sum2_g) /
        rtb_motohawk_delta_time_bi;

      /* Switch: '<S279>/Switch1' incorporates:
       *  Constant: '<S253>/Constant'
       *  UnitDelay: '<S279>/Unit Delay'
       */
      if (BaseEngineController_LS_B.s153_LogicalOperator) {
        BaseEngineController_LS_B.s279_Switch1 = 0.0;
      } else {
        BaseEngineController_LS_B.s279_Switch1 =
          BaseEngineController_LS_DWork.s279_UnitDelay_DSTATE;
      }

      /* End of Switch: '<S279>/Switch1' */

      /* Switch: '<S253>/Switch' incorporates:
       *  Constant: '<S253>/Constant1'
       */
      if (BaseEngineController_LS_B.s153_LogicalOperator) {
        rtb_UnitDelay1_j = 0.0;
      } else {
        /* MinMax: '<S276>/MinMax' incorporates:
         *  Sum: '<S277>/Sum1'
         */
        rtb_Sum2_g = (BaseEngineController_LS_B.s277_Product2 +
                      BaseEngineController_LS_B.s278_Product) +
          BaseEngineController_LS_B.s279_Switch1;

        /* MinMax: '<S276>/MinMax1' incorporates:
         *  MinMax: '<S276>/MinMax'
         *  S-Function (motohawk_sfun_calibration): '<S253>/motohawk_calibration2'
         *  S-Function (motohawk_sfun_calibration): '<S253>/motohawk_calibration9'
         */
        rtb_Sum2_g = (rtb_Sum2_g >= (AirMinGovPIDOutLowerLimit_DataStore())) ||
          rtIsNaN((AirMinGovPIDOutLowerLimit_DataStore())) ? rtb_Sum2_g :
          (AirMinGovPIDOutLowerLimit_DataStore());
        rtb_UnitDelay1_j = (rtb_Sum2_g <= (AirMinGovPIDOutUpperLimit_DataStore()))
          || rtIsNaN((AirMinGovPIDOutUpperLimit_DataStore())) ? rtb_Sum2_g :
          (AirMinGovPIDOutUpperLimit_DataStore());
      }

      /* End of Switch: '<S253>/Switch' */

      /* Product: '<S153>/Product1' */
      BaseEngineController_LS_B.s153_MinGovAirPID =
        BaseEngineController_LS_B.s261_MinMax1 * rtb_UnitDelay1_j;

      /* Sum: '<S272>/Sum1' */
      BaseEngineController_LS_B.s272_Sum1 =
        BaseEngineController_LS_B.s251_DontallowsetpointtoeverdropbelowtheTargetRPM
        - BaseEngineController_LS_B.s500_Sum1;

      /* Product: '<S272>/Product4' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S252>/motohawk_calibration4'
       */
      rtb_UnitDelay1_j = BaseEngineController_LS_B.s272_Sum1 *
        (SpkMinGovErrorGain_DataStore());

      /* S-Function Block: <S252>/motohawk_prelookup1 */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (SpkMinGovSpeedErrorIn_DataStore()) =
          BaseEngineController_LS_B.s272_Sum1;
        (SpkMinGovSpeedErrorIdx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_LS_B.s272_Sum1,
           (SpkMinGovSpeedErrorIdxArr_DataStore()), 9,
           (SpkMinGovSpeedErrorIdx_DataStore()));
        rtb_motohawk_prelookup1_j = (SpkMinGovSpeedErrorIdx_DataStore());
      }

      /* S-Function Block: <S270>/motohawk_interpolation_1d2 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d2_f = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1_j, (real_T *)
           ((SpkMinGovPGainErrorMultTbl_DataStore())), 9);
        (SpkMinGovPGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d2_f;
      }

      /* Product: '<S272>/Product' incorporates:
       *  Product: '<S270>/Product2'
       *  S-Function (motohawk_sfun_calibration): '<S270>/motohawk_calibration3'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S270>/motohawk_interpolation_1d2'
       *  S-Function (motohawk_sfun_prelookup): '<S252>/motohawk_prelookup1'
       */
      BaseEngineController_LS_B.s272_Product = (SpkMinGovPGain_DataStore()) *
        rtb_motohawk_interpolation_1d2_f * rtb_UnitDelay1_j;

      /* UnitDelay: '<S273>/Unit Delay' */
      rtb_Sum2_g = BaseEngineController_LS_DWork.s273_UnitDelay_DSTATE;

      /* S-Function Block: <S270>/motohawk_interpolation_1d1 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d1 = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1_j, (real_T *)
           ((SpkMinGovDGainErrorMultTbl_DataStore())), 9);
        (SpkMinGovDGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d1;
      }

      /* Product: '<S272>/Product2' incorporates:
       *  Product: '<S270>/Product1'
       *  S-Function (motohawk_sfun_calibration): '<S270>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S270>/motohawk_interpolation_1d1'
       *  S-Function (motohawk_sfun_prelookup): '<S252>/motohawk_prelookup1'
       */
      rtb_Product2_j = (SpkMinGovDGain_DataStore()) *
        rtb_motohawk_interpolation_1d1 * rtb_UnitDelay1_j;

      /* S-Function Block: <S273>/motohawk_delta_time */
      rtb_motohawk_delta_time_n = 0.005;

      /* Product: '<S273>/Product' incorporates:
       *  S-Function (motohawk_sfun_delta_time): '<S273>/motohawk_delta_time'
       *  Sum: '<S273>/Sum2'
       */
      BaseEngineController_LS_B.s273_Product = (rtb_Product2_j - rtb_Sum2_g) /
        rtb_motohawk_delta_time_n;

      /* Switch: '<S252>/Switch' incorporates:
       *  Constant: '<S252>/Constant1'
       */
      if (rtb_RelOp_j) {
        rtb_UnitDelay1_j = 0.0;
      } else {
        /* MinMax: '<S271>/MinMax' incorporates:
         *  Sum: '<S272>/Sum'
         */
        rtb_Sum2_g = BaseEngineController_LS_B.s272_Product +
          BaseEngineController_LS_B.s273_Product;

        /* MinMax: '<S271>/MinMax1' incorporates:
         *  MinMax: '<S271>/MinMax'
         *  S-Function (motohawk_sfun_calibration): '<S252>/motohawk_calibration1'
         *  S-Function (motohawk_sfun_calibration): '<S252>/motohawk_calibration9'
         */
        rtb_Sum2_g = (rtb_Sum2_g >= (SpkMinGovPIDOutLowerLimit_DataStore())) ||
          rtIsNaN((SpkMinGovPIDOutLowerLimit_DataStore())) ? rtb_Sum2_g :
          (SpkMinGovPIDOutLowerLimit_DataStore());
        rtb_UnitDelay1_j = (rtb_Sum2_g <= (SpkMinGovPIDOutUpperLimit_DataStore()))
          || rtIsNaN((SpkMinGovPIDOutUpperLimit_DataStore())) ? rtb_Sum2_g :
          (SpkMinGovPIDOutUpperLimit_DataStore());
      }

      /* End of Switch: '<S252>/Switch' */

      /* Product: '<S153>/Product' */
      BaseEngineController_LS_B.s153_IdleSpk =
        BaseEngineController_LS_B.s261_MinMax1 * rtb_UnitDelay1_j;

      /* Outputs for Atomic SubSystem: '<S153>/AiflowOffset' */

      /* S-Function Block: <S244>/motohawk_interpolation_1d1 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d1_i = TableInterpolation1D_real_T
          (BaseEngineController_LS_B.s396_motohawk_prelookup, (real_T *)
           ((ACAirFlowOfstTbl_DataStore())), 5);
        (ACAirFlowOfst_DataStore()) = rtb_motohawk_interpolation_1d1_i;
      }

      /* Product: '<S244>/Product' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S244>/motohawk_calibration'
       */
      rtb_Sum2_g = (BaseEngineController_LS_B.s144_LogicalOperator ? (real_T)
                    ((uint8_T)(ACAirFlowOfst_Enab_DataStore())) : 0.0) *
        rtb_motohawk_interpolation_1d1_i;

      /* S-Function Block: <S244>/motohawk_interpolation_1d2 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d2_p = TableInterpolation1D_real_T
          (BaseEngineController_LS_B.s396_motohawk_prelookup, (real_T *)
           ((BaseAirflowOfstTbl_DataStore())), 5);
        (BaseAirflowOfst_DataStore()) = rtb_motohawk_interpolation_1d2_p;
      }

      /* Sum: '<S244>/Sum' incorporates:
       *  S-Function (motohawk_sfun_interpolation_1d): '<S244>/motohawk_interpolation_1d2'
       */
      rtb_Sum_e = rtb_Sum2_g + rtb_motohawk_interpolation_1d2_p;

      /* RelationalOperator: '<S255>/RelOp' incorporates:
       *  Constant: '<S255>/Constant'
       *  S-Function (motohawk_sfun_data_read): '<S244>/motohawk_data_read'
       */
      rtb_RelOp_j = (((uint8_T)EngineState_DataStore()) == 3);

      /* Logic: '<S244>/Logical Operator' incorporates:
       *  RelationalOperator: '<S244>/Relational Operator'
       *  RelationalOperator: '<S244>/Relational Operator1'
       *  UnitDelay: '<S244>/Unit Delay'
       */
      rtb_LogicalOperator_i = ((rtb_RelOp_j <
        BaseEngineController_LS_DWork.s244_UnitDelay_DSTATE) || (rtb_RelOp_j ==
        BaseEngineController_LS_DWork.s244_UnitDelay_DSTATE));

      /* S-Function Block: <S254>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s254_motohawk_delta_time_DWORK1, NULL);
        rtb_motohawk_delta_time_bc = ((real_T) delta) * 0.000001;
      }

      /* UnitDelay: '<S254>/Unit Delay' */
      rtb_Sum2_g = BaseEngineController_LS_DWork.s254_UnitDelay_DSTATE;

      /* Switch: '<S254>/Preload lowpass filter with current RPM while not on Idle' incorporates:
       *  Constant: '<S254>/Constant'
       *  Logic: '<S254>/Logical Operator'
       *  Product: '<S254>/Product2'
       *  Product: '<S254>/Product3'
       *  Sum: '<S254>/Sum'
       *  Sum: '<S254>/Sum1'
       */
      if (!rtb_LogicalOperator_i) {
        rtb_Sum2_g = BaseEngineController_LS_B.s415_Switch2;
      } else {
        /* Product: '<S254>/Product1' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S254>/motohawk_calibration2'
         *  S-Function (motohawk_sfun_delta_time): '<S254>/motohawk_delta_time'
         */
        rtb_UnitDelay1_j = rtb_motohawk_delta_time_bc /
          (IdleEntryAirRampInFiltC_DataStore());
        rtb_Sum2_g = (1.0 - rtb_UnitDelay1_j) * rtb_Sum2_g + rtb_Sum_e *
          rtb_UnitDelay1_j;
      }

      /* End of Switch: '<S254>/Preload lowpass filter with current RPM while not on Idle' */

      /* MinMax: '<S254>/Don't allow setpoint to ever drop below the TargetRPM' */
      BaseEngineController_LS_B.s254_DontallowsetpointtoeverdropbelowtheTargetRPM
        = (rtb_Sum_e >= rtb_Sum2_g) || rtIsNaN(rtb_Sum2_g) ? rtb_Sum_e :
        rtb_Sum2_g;

      /* Update for UnitDelay: '<S244>/Unit Delay' */
      BaseEngineController_LS_DWork.s244_UnitDelay_DSTATE = rtb_RelOp_j;

      /* Update for UnitDelay: '<S254>/Unit Delay' */
      BaseEngineController_LS_DWork.s254_UnitDelay_DSTATE =
        BaseEngineController_LS_B.s254_DontallowsetpointtoeverdropbelowtheTargetRPM;

      /* End of Outputs for SubSystem: '<S153>/AiflowOffset' */

      /* Saturate: '<S265>/Saturation' */
      rtb_Saturation_c = rtb_Switch_e >= 16000.0 ? 16000.0 : rtb_Switch_e <= 0.0
        ? 0.0 : rtb_Switch_e;

      /* S-Function (motohawk_sfun_data_write): '<S265>/motohawk_data_write' */
      /* Write to Data Storage as scalar: IdleEnterTimer */
      {
        IdleEnterTimer_DataStore() = rtb_Saturation_c;
      }

      /* S-Function Block: <S269>/motohawk_delta_time */
      rtb_motohawk_delta_time_n2 = 0.005;

      /* Sum: '<S249>/Sum' */
      rtb_Sum2_g = BaseEngineController_LS_B.s500_Sum1 -
        BaseEngineController_LS_B.s251_DontallowsetpointtoeverdropbelowtheTargetRPM;

      /* Switch: '<S269>/Switch' incorporates:
       *  Constant: '<S269>/Constant'
       *  RelationalOperator: '<S249>/Relational Operator2'
       *  S-Function (motohawk_sfun_calibration): '<S249>/motohawk_calibration3'
       *  S-Function (motohawk_sfun_data_read): '<S269>/motohawk_data_read'
       *  S-Function (motohawk_sfun_delta_time): '<S269>/motohawk_delta_time'
       *  Sum: '<S269>/Sum'
       */
      if (rtb_Sum2_g > (MotoringDeltaRPMLimit_DataStore())) {
        BaseEngineController_LS_B.s269_Switch = rtb_motohawk_delta_time_n2 +
          MotoringTimer_DataStore();
      } else {
        BaseEngineController_LS_B.s269_Switch = 0.0;
      }

      /* End of Switch: '<S269>/Switch' */

      /* RelationalOperator: '<S249>/Relational Operator1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S249>/motohawk_calibration1'
       */
      BaseEngineController_LS_B.s249_RelationalOperator1 =
        ((BaseEngineController_LS_B.s269_Switch >
          (MotoringDtctTimerLimit_DataStore())));

      /* DataTypeConversion: '<S249>/Data Type Conversion' */
      rtb_Sum_e = (real_T)BaseEngineController_LS_B.s249_RelationalOperator1;

      /* Saturate: '<S269>/Saturation' */
      rtb_Saturation_k = BaseEngineController_LS_B.s269_Switch >= 16000.0 ?
        16000.0 : BaseEngineController_LS_B.s269_Switch <= 0.0 ? 0.0 :
        BaseEngineController_LS_B.s269_Switch;

      /* S-Function (motohawk_sfun_data_write): '<S269>/motohawk_data_write' */
      /* Write to Data Storage as scalar: MotoringTimer */
      {
        MotoringTimer_DataStore() = rtb_Saturation_k;
      }

      /* S-Function Block: <S275>/motohawk_interpolation_1d1 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d1_b = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1, (real_T *)
           ((AirMinGovIGainErrorMultTbl_DataStore())), 9);
        (AirMinGovIGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d1_b;
      }

      /* Product: '<S277>/Product1' incorporates:
       *  Product: '<S275>/Product1'
       *  S-Function (motohawk_sfun_calibration): '<S275>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S275>/motohawk_interpolation_1d1'
       *  S-Function (motohawk_sfun_prelookup): '<S253>/motohawk_prelookup1'
       */
      rtb_Sum2_g = (AirMinGovIGain_DataStore()) *
        rtb_motohawk_interpolation_1d1_b * rtb_Product5;

      /* S-Function Block: <S279>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s279_motohawk_delta_time_DWORK1, NULL);
        rtb_motohawk_delta_time_j = ((real_T) delta) * 0.000001;
      }

      /* Sum: '<S279>/Sum' incorporates:
       *  Product: '<S279>/Product'
       *  S-Function (motohawk_sfun_delta_time): '<S279>/motohawk_delta_time'
       */
      rtb_UnitDelay1_j = rtb_Sum2_g * rtb_motohawk_delta_time_j +
        BaseEngineController_LS_B.s279_Switch1;

      /* MinMax: '<S281>/MinMax' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S253>/motohawk_calibration7'
       */
      rtb_Sum2_g = (rtb_UnitDelay1_j >= (AirMinGovITermLowerLimit_DataStore())) ||
        rtIsNaN((AirMinGovITermLowerLimit_DataStore())) ? rtb_UnitDelay1_j :
        (AirMinGovITermLowerLimit_DataStore());

      /* Update for UnitDelay: '<S266>/Unit Delay' */
      BaseEngineController_LS_DWork.s266_UnitDelay_DSTATE =
        BaseEngineController_LS_B.s444_RPMInst;

      /* Update for UnitDelay: '<S268>/Unit Delay' */
      BaseEngineController_LS_DWork.s268_UnitDelay_DSTATE = rtb_Sum1_f;

      /* Update for UnitDelay: '<S153>/Unit Delay3' */
      BaseEngineController_LS_DWork.s153_UnitDelay3_DSTATE =
        BaseEngineController_LS_B.s153_MinGovAirPID;

      /* Update for UnitDelay: '<S153>/Unit Delay1' */
      BaseEngineController_LS_DWork.s153_UnitDelay1_DSTATE =
        BaseEngineController_LS_B.s279_Switch1;

      /* Update for UnitDelay: '<S247>/state' */
      BaseEngineController_LS_DWork.s247_state_DSTATE =
        BaseEngineController_LS_B.s261_MinMax1;

      /* Update for UnitDelay: '<S153>/Unit Delay2' */
      BaseEngineController_LS_DWork.s153_UnitDelay2_DSTATE = rtb_Sum_e;

      /* Update for UnitDelay: '<S251>/Unit Delay' */
      BaseEngineController_LS_DWork.s251_UnitDelay_DSTATE =
        BaseEngineController_LS_B.s251_DontallowsetpointtoeverdropbelowtheTargetRPM;

      /* Update for UnitDelay: '<S278>/Unit Delay' */
      BaseEngineController_LS_DWork.s278_UnitDelay_DSTATE = rtb_Product4;

      /* Update for UnitDelay: '<S279>/Unit Delay' incorporates:
       *  MinMax: '<S281>/MinMax'
       *  MinMax: '<S281>/MinMax1'
       *  S-Function (motohawk_sfun_calibration): '<S253>/motohawk_calibration8'
       */
      BaseEngineController_LS_DWork.s279_UnitDelay_DSTATE = (rtb_Sum2_g <=
        (AirMinGovITermUpperLimit_DataStore())) || rtIsNaN
        ((AirMinGovITermUpperLimit_DataStore())) ? rtb_Sum2_g :
        (AirMinGovITermUpperLimit_DataStore());

      /* Update for UnitDelay: '<S273>/Unit Delay' */
      BaseEngineController_LS_DWork.s273_UnitDelay_DSTATE = rtb_Product2_j;
    }

    /* Output and update for function-call system: '<S136>/MaxGovernor' */
    {
      /* local block i/o variables */
      real_T rtb_Merge1;
      real_T rtb_motohawk_delta_time_d4;
      real_T rtb_motohawk_interpolation_1d3_m;
      real_T rtb_motohawk_interpolation_1d2_c;
      real_T rtb_motohawk_delta_time_m;
      real_T rtb_motohawk_interpolation_1d4;
      real_T rtb_motohawk_delta_time_l;
      real_T rtb_StateO;
      real_T rtb_motohawk_interpolation_1d4_k;
      real_T rtb_MinMax_c;
      real_T rtb_MinMax_ny;
      index_T rtb_motohawk_prelookup1_f;
      real_T rtb_Merge_a;
      boolean_T rtb_RelationalOperator_j;
      boolean_T rtb_RelationalOperator2_n;
      boolean_T rtb_RelationalOperator_c;
      boolean_T rtb_LogicalOperator1_l;
      real_T rtb_Reset;
      int32_T rtb_Hold;
      int32_T rtb_ETCMode;
      real_T rtb_alpha_o;

      /* Sum: '<S152>/Sum' */
      BaseEngineController_LS_B.s152_Sum =
        BaseEngineController_LS_B.s254_DontallowsetpointtoeverdropbelowtheTargetRPM
        + BaseEngineController_LS_B.s422_Sum2;

      /* Outputs for Enabled SubSystem: '<S231>/InGear' incorporates:
       *  EnablePort: '<S234>/Enable'
       */
      /* Outputs for Enabled SubSystem: '<S231>/InNeutral' incorporates:
       *  EnablePort: '<S235>/Enable'
       */
      if (BaseEngineController_LS_B.s458_Merge) {
        /* S-Function (motohawk_sfun_data_read): '<S234>/motohawk_data_read' */
        rtb_MinMax_ny = MaxGovInGearSetPoint_DataStore();

        /* MinMax: '<S236>/MinMax' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S234>/motohawk_calibration3'
         */
        rtb_MinMax_ny = (rtb_MinMax_ny >= (MaxGovInGearLowerLim_DataStore())) ||
          rtIsNaN((MaxGovInGearLowerLim_DataStore())) ? rtb_MinMax_ny :
          (MaxGovInGearLowerLim_DataStore());

        /* MinMax: '<S236>/MinMax1' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S234>/motohawk_calibration5'
         */
        rtb_Merge_a = (rtb_MinMax_ny <= (MaxGovInGearUpperLim_DataStore())) ||
          rtIsNaN((MaxGovInGearUpperLim_DataStore())) ? rtb_MinMax_ny :
          (MaxGovInGearUpperLim_DataStore());

        /* S-Function (motohawk_sfun_calibration): '<S234>/motohawk_calibration4' */
        rtb_Merge1 = (MaxGovInGearRPMThresh_DataStore());

        /* S-Function (motohawk_sfun_data_write): '<S234>/motohawk_data_write' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S234>/motohawk_calibration1'
         */
        /* Write to Data Storage as scalar: MaxGovInGearSetPoint */
        {
          MaxGovInGearSetPoint_DataStore() = (MaxGovInGearSetPt_DataStore());
        }

        /* S-Function (motohawk_sfun_data_write): '<S234>/motohawk_data_write1' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S234>/motohawk_calibration2'
         */
        /* Write to Data Storage as scalar: MaxGovInGearSetPoint */
        {
          MaxGovInGearSetPoint_DataStore() = (MaxGovInGearRPMSetPt_DataStore());
        }
      } else {
        /* S-Function (motohawk_sfun_data_read): '<S235>/motohawk_data_read' */
        rtb_MinMax_c = MaxGovNtrlSetPoint_DataStore();

        /* MinMax: '<S237>/MinMax' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S235>/motohawk_calibration2'
         */
        rtb_MinMax_c = (rtb_MinMax_c >= (MaxGovNtrlLowerLim_DataStore())) ||
          rtIsNaN((MaxGovNtrlLowerLim_DataStore())) ? rtb_MinMax_c :
          (MaxGovNtrlLowerLim_DataStore());

        /* MinMax: '<S237>/MinMax1' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S235>/motohawk_calibration5'
         */
        rtb_Merge_a = (rtb_MinMax_c <= (MaxGovNtrlUpperLim_DataStore())) ||
          rtIsNaN((MaxGovNtrlUpperLim_DataStore())) ? rtb_MinMax_c :
          (MaxGovNtrlUpperLim_DataStore());

        /* S-Function (motohawk_sfun_calibration): '<S235>/motohawk_calibration3' */
        rtb_Merge1 = (MaxGovNtrlRPMThresh_DataStore());

        /* S-Function (motohawk_sfun_data_write): '<S235>/motohawk_data_write' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S235>/motohawk_calibration1'
         */
        /* Write to Data Storage as scalar: MaxGovNtrlSetPoint */
        {
          MaxGovNtrlSetPoint_DataStore() = (MaxGovNtrlSetPt_DataStore());
        }

        /* S-Function (motohawk_sfun_data_write): '<S235>/motohawk_data_write1' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S235>/motohawk_calibration4'
         */
        /* Write to Data Storage as scalar: MaxGovNtrlSetPoint */
        {
          MaxGovNtrlSetPoint_DataStore() = (MaxGovNtrlRPMSetPt_DataStore());
        }
      }

      /* End of Outputs for SubSystem: '<S231>/InNeutral' */
      /* End of Outputs for SubSystem: '<S231>/InGear' */

      /* RelationalOperator: '<S231>/Relational Operator' incorporates:
       *  Sum: '<S231>/Sum1'
       */
      rtb_RelationalOperator_j = (BaseEngineController_LS_B.s444_RPMInst >
        rtb_Merge_a - rtb_Merge1);

      /* RelationalOperator: '<S229>/Relational Operator2' */
      rtb_RelationalOperator2_n = (BaseEngineController_LS_B.s444_RPMInst >
        rtb_Merge_a);

      /* RelationalOperator: '<S229>/Relational Operator' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S229>/motohawk_calibration5'
       *  Sum: '<S229>/Sum'
       */
      rtb_RelationalOperator_c = (BaseEngineController_LS_B.s152_Sum <=
        BaseEngineController_LS_B.s415_Switch2 - (MaxGovTPSHyst_DataStore()));

      /* Logic: '<S229>/Logical Operator1' incorporates:
       *  RelationalOperator: '<S229>/Relational Operator1'
       *  S-Function (motohawk_sfun_calibration): '<S229>/motohawk_calibration5'
       *  Sum: '<S229>/Sum1'
       */
      rtb_LogicalOperator1_l = (rtb_RelationalOperator_j &&
        (BaseEngineController_LS_B.s152_Sum > (MaxGovTPSHyst_DataStore()) +
         BaseEngineController_LS_B.s415_Switch2));

      /* MATLAB Function Block: '<S229>/MaxGOV Stateflow' incorporates:
       *  Logic: '<S229>/Logical Operator'
       *  Logic: '<S229>/Logical Operator2'
       *  Logic: '<S229>/Logical Operator3'
       *  S-Function (motohawk_sfun_data_read): '<S229>/motohawk_data_read'
       */

      /* MATLAB Function 'Foreground/Control/Controller/Run/MaxGovernor/MaxGovState/MaxGOV Stateflow': '<S233>:1' */
      if ((MaxGov_DataStore() == 0.0) && ((rtb_RelationalOperator_j ||
            rtb_RelationalOperator2_n) == 1)) {
        /* '<S233>:1:3' */
        /* '<S233>:1:4' */
        rtb_StateO = 1.0;
      } else if ((MaxGov_DataStore() == 1.0) && (rtb_RelationalOperator_c ==
                  TRUE)) {
        /* '<S233>:1:5' */
        /* '<S233>:1:6' */
        rtb_StateO = 2.0;
      } else if ((MaxGov_DataStore() == 2.0) && ((rtb_LogicalOperator1_l ||
                   rtb_RelationalOperator2_n) == 1)) {
        /* '<S233>:1:7' */
        /* '<S233>:1:8' */
        rtb_StateO = 1.0;
      } else if ((MaxGov_DataStore() == 2.0) && (!rtb_RelationalOperator_j ==
                  TRUE)) {
        /* '<S233>:1:9' */
        /* '<S233>:1:10' */
        rtb_StateO = 0.0;
      } else {
        /* '<S233>:1:12' */
        rtb_StateO = MaxGov_DataStore();
      }

      if (MaxGov_DataStore() == 0.0) {
        /* '<S233>:1:15' */
        /* '<S233>:1:16' */
        rtb_ETCMode = 0;

        /* '<S233>:1:17' */
        rtb_Hold = 0;

        /* '<S233>:1:18' */
      } else if (MaxGov_DataStore() == 1.0) {
        /* '<S233>:1:19' */
        /* '<S233>:1:20' */
        rtb_ETCMode = 1;

        /* '<S233>:1:21' */
        rtb_Hold = 0;

        /* '<S233>:1:22' */
      } else if (MaxGov_DataStore() == 2.0) {
        /* '<S233>:1:23' */
        /* '<S233>:1:24' */
        rtb_ETCMode = 0;

        /* '<S233>:1:25' */
        rtb_Hold = 1;

        /* '<S233>:1:26' */
      } else {
        /* '<S233>:1:28' */
        rtb_ETCMode = 0;

        /* '<S233>:1:29' */
        rtb_Hold = 0;

        /* '<S233>:1:30' */
      }

      /* End of MATLAB Function Block: '<S229>/MaxGOV Stateflow' */

      /* DataTypeConversion: '<S229>/Data Type Conversion' */
      BaseEngineController_LS_B.s229_DataTypeConversion = 0;

      /* Logic: '<S230>/Logical Operator' incorporates:
       *  UnitDelay: '<S152>/Unit Delay'
       */
      rtb_RelationalOperator_j =
        !BaseEngineController_LS_DWork.s152_UnitDelay_DSTATE;

      /* S-Function Block: <S230>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s230_motohawk_delta_time_DWORK1, NULL);
        rtb_motohawk_delta_time_d4 = ((real_T) delta) * 0.000001;
      }

      /* UnitDelay: '<S230>/Unit Delay' */
      rtb_Reset = BaseEngineController_LS_DWork.s230_UnitDelay_DSTATE;

      /* Switch: '<S230>/Preload lowpass filter with current RPM while not on Idle' incorporates:
       *  Constant: '<S230>/Constant'
       *  Product: '<S230>/Product2'
       *  Product: '<S230>/Product3'
       *  Sum: '<S230>/Sum'
       *  Sum: '<S230>/Sum1'
       */
      if (rtb_RelationalOperator_j) {
        rtb_alpha_o = BaseEngineController_LS_B.s444_RPMInst;
      } else {
        /* Product: '<S230>/Product1' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S230>/motohawk_calibration2'
         *  S-Function (motohawk_sfun_delta_time): '<S230>/motohawk_delta_time'
         */
        rtb_alpha_o = rtb_motohawk_delta_time_d4 /
          (MaxGovRPMCtrlEntryFiltC_DataStore());
        rtb_alpha_o = (1.0 - rtb_alpha_o) * rtb_Reset + rtb_Merge_a *
          rtb_alpha_o;
      }

      /* End of Switch: '<S230>/Preload lowpass filter with current RPM while not on Idle' */

      /* MinMax: '<S230>/Don't allow setpoint to ever go above the TargetRPM' */
      BaseEngineController_LS_B.s230_DontallowsetpointtoevergoabovetheTargetRPM =
        (rtb_Merge_a <= rtb_alpha_o) || rtIsNaN(rtb_alpha_o) ? rtb_Merge_a :
        rtb_alpha_o;

      /* DataTypeConversion: '<S229>/Data Type Conversion1' */
      rtb_Reset = fmod((real_T)rtb_Hold, 256.0);
      BaseEngineController_LS_B.s229_DataTypeConversion1 = (int8_T)(rtb_Reset <
        0.0 ? (int8_T)-(int8_T)(uint8_T)-rtb_Reset : (int8_T)(uint8_T)rtb_Reset);

      /* Switch: '<S232>/Switch1' */
      if (BaseEngineController_LS_B.s229_DataTypeConversion1 >= 1) {
        rtb_alpha_o =
          BaseEngineController_LS_B.s230_DontallowsetpointtoevergoabovetheTargetRPM;
      } else {
        rtb_alpha_o = BaseEngineController_LS_B.s444_RPMInst;
      }

      /* End of Switch: '<S232>/Switch1' */

      /* Sum: '<S239>/Sum2' */
      BaseEngineController_LS_B.s239_Sum2 =
        BaseEngineController_LS_B.s230_DontallowsetpointtoevergoabovetheTargetRPM
        - rtb_alpha_o;

      /* Product: '<S239>/Product5' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S232>/motohawk_calibration5'
       */
      rtb_alpha_o = BaseEngineController_LS_B.s239_Sum2 *
        (MaxGovErrorGain_DataStore());

      /* S-Function Block: <S232>/motohawk_prelookup1 */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (MaxGovSpeedErrorIn_DataStore()) = BaseEngineController_LS_B.s239_Sum2;
        (MaxGovSpeedErrorIdx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_LS_B.s239_Sum2,
           (MaxGovSpeedErrorIdxArr_DataStore()), 9,
           (MaxGovSpeedErrorIdx_DataStore()));
        rtb_motohawk_prelookup1_f = (MaxGovSpeedErrorIdx_DataStore());
      }

      /* S-Function Block: <S232>/motohawk_interpolation_1d3 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d3_m = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1_f, (real_T *)
           ((MaxGovPGainErrorMultTbl_DataStore())), 9);
        (MaxGovPGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d3_m;
      }

      /* Product: '<S239>/Product2' incorporates:
       *  Product: '<S232>/Product4'
       *  S-Function (motohawk_sfun_calibration): '<S232>/motohawk_calibration3'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S232>/motohawk_interpolation_1d3'
       *  S-Function (motohawk_sfun_prelookup): '<S232>/motohawk_prelookup1'
       */
      BaseEngineController_LS_B.s239_Product2 = (MaxGovPGain_DataStore()) *
        rtb_motohawk_interpolation_1d3_m * rtb_alpha_o;

      /* UnitDelay: '<S240>/Unit Delay' */
      rtb_Reset = BaseEngineController_LS_DWork.s240_UnitDelay_DSTATE;

      /* S-Function Block: <S232>/motohawk_interpolation_1d2 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d2_c = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1_f, (real_T *)
           ((MaxGovDGainErrorMultTbl_DataStore())), 9);
        (MaxGovDGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d2_c;
      }

      /* Product: '<S239>/Product4' incorporates:
       *  Product: '<S232>/Product3'
       *  S-Function (motohawk_sfun_calibration): '<S232>/motohawk_calibration6'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S232>/motohawk_interpolation_1d2'
       *  S-Function (motohawk_sfun_prelookup): '<S232>/motohawk_prelookup1'
       */
      rtb_Merge_a = (MaxGovDGain_DataStore()) * rtb_motohawk_interpolation_1d2_c
        * rtb_alpha_o;

      /* S-Function Block: <S240>/motohawk_delta_time */
      rtb_motohawk_delta_time_m = 0.005;

      /* Product: '<S240>/Product' incorporates:
       *  S-Function (motohawk_sfun_delta_time): '<S240>/motohawk_delta_time'
       *  Sum: '<S240>/Sum2'
       */
      BaseEngineController_LS_B.s240_Product = (rtb_Merge_a - rtb_Reset) /
        rtb_motohawk_delta_time_m;

      /* Outputs for Atomic SubSystem: '<S152>/I-Term Preload' */

      /* S-Function Block: <S228>/motohawk_interpolation_1d4 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d4_k = TableInterpolation1D_real_T
          (BaseEngineController_LS_B.s370_RPMAccel17Idx, (real_T *)
           ((MaxGovPreloadITermTbl_DataStore())), 17);
        (MaxGovPreloadITerm_DataStore()) = rtb_motohawk_interpolation_1d4_k;
      }

      /* Sum: '<S228>/Sum' incorporates:
       *  S-Function (motohawk_sfun_interpolation_1d): '<S228>/motohawk_interpolation_1d4'
       */
      BaseEngineController_LS_B.s228_Sum = BaseEngineController_LS_B.s152_Sum -
        rtb_motohawk_interpolation_1d4_k;

      /* End of Outputs for SubSystem: '<S152>/I-Term Preload' */

      /* Switch: '<S241>/Switch1' incorporates:
       *  DataTypeConversion: '<S241>/Data Type Conversion'
       *  UnitDelay: '<S241>/Unit Delay'
       */
      if (BaseEngineController_LS_B.s229_DataTypeConversion != 0) {
        BaseEngineController_LS_B.s241_Switch1 =
          BaseEngineController_LS_B.s228_Sum;
      } else {
        BaseEngineController_LS_B.s241_Switch1 =
          BaseEngineController_LS_DWork.s241_UnitDelay_DSTATE;
      }

      /* End of Switch: '<S241>/Switch1' */

      /* Switch: '<S232>/Switch' incorporates:
       *  Constant: '<S232>/Constant'
       */
      if (BaseEngineController_LS_B.s229_DataTypeConversion >= 1) {
        BaseEngineController_LS_B.s232_Switch = 0.0;
      } else {
        /* MinMax: '<S238>/MinMax' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S232>/motohawk_calibration9'
         *  Sum: '<S239>/Sum1'
         */
        rtb_Reset = (BaseEngineController_LS_B.s239_Product2 +
                     BaseEngineController_LS_B.s240_Product) +
          BaseEngineController_LS_B.s241_Switch1;
        rtb_Reset = (rtb_Reset >= (MaxGovPIDOutLowerLimit_DataStore())) ||
          rtIsNaN((MaxGovPIDOutLowerLimit_DataStore())) ? rtb_Reset :
          (MaxGovPIDOutLowerLimit_DataStore());

        /* MinMax: '<S238>/MinMax1' incorporates:
         *  MinMax: '<S238>/MinMax'
         *  S-Function (motohawk_sfun_calibration): '<S232>/motohawk_calibration2'
         */
        BaseEngineController_LS_B.s232_Switch = (rtb_Reset <=
          (MaxGovPIDOutUpperLimit_DataStore())) || rtIsNaN
          ((MaxGovPIDOutUpperLimit_DataStore())) ? rtb_Reset :
          (MaxGovPIDOutUpperLimit_DataStore());
      }

      /* End of Switch: '<S232>/Switch' */

      /* S-Function (motohawk_sfun_data_write): '<S229>/motohawk_data_write' */
      /* Write to Data Storage as scalar: MaxGov */
      {
        MaxGov_DataStore() = rtb_StateO;
      }

      /* MultiPortSwitch: '<S229>/Multiport Switch' incorporates:
       *  Constant: '<S229>/Constant'
       *  DataTypeConversion: '<S229>/Data Type Conversion2'
       *  S-Function (motohawk_sfun_calibration): '<S229>/motohawk_calibration1'
       */
      if ((MaxGovDisable_DataStore()) == FALSE) {
        /* DataTypeConversion: '<S229>/Data Type Conversion2' */
        rtb_Reset = fmod((real_T)rtb_ETCMode, 256.0);
        BaseEngineController_LS_B.s229_MultiportSwitch = (((rtb_Reset < 0.0 ?
          (int8_T)-(int8_T)(uint8_T)-rtb_Reset : (int8_T)(uint8_T)rtb_Reset) !=
          0));
      } else {
        BaseEngineController_LS_B.s229_MultiportSwitch = FALSE;
      }

      /* End of MultiPortSwitch: '<S229>/Multiport Switch' */

      /* S-Function Block: <S232>/motohawk_interpolation_1d4 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d4 = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1_f, (real_T *)
           ((MaxGovIGainErrorMultTbl_DataStore())), 9);
        (MaxGovIGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d4;
      }

      /* Product: '<S239>/Product1' incorporates:
       *  Product: '<S232>/Product5'
       *  S-Function (motohawk_sfun_calibration): '<S232>/motohawk_calibration4'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S232>/motohawk_interpolation_1d4'
       *  S-Function (motohawk_sfun_prelookup): '<S232>/motohawk_prelookup1'
       */
      rtb_Reset = (MaxGovIGain_DataStore()) * rtb_motohawk_interpolation_1d4 *
        rtb_alpha_o;

      /* S-Function Block: <S241>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s241_motohawk_delta_time_DWORK1, NULL);
        rtb_motohawk_delta_time_l = ((real_T) delta) * 0.000001;
      }

      /* Sum: '<S241>/Sum' incorporates:
       *  Product: '<S241>/Product'
       *  S-Function (motohawk_sfun_delta_time): '<S241>/motohawk_delta_time'
       */
      rtb_alpha_o = rtb_Reset * rtb_motohawk_delta_time_l +
        BaseEngineController_LS_B.s241_Switch1;

      /* MinMax: '<S243>/MinMax' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S232>/motohawk_calibration7'
       */
      rtb_Reset = (rtb_alpha_o >= (MaxGovITermLowerLimit_DataStore())) ||
        rtIsNaN((MaxGovITermLowerLimit_DataStore())) ? rtb_alpha_o :
        (MaxGovITermLowerLimit_DataStore());

      /* Update for UnitDelay: '<S152>/Unit Delay' */
      BaseEngineController_LS_DWork.s152_UnitDelay_DSTATE =
        BaseEngineController_LS_B.s229_MultiportSwitch;

      /* Update for UnitDelay: '<S230>/Unit Delay' */
      BaseEngineController_LS_DWork.s230_UnitDelay_DSTATE =
        BaseEngineController_LS_B.s230_DontallowsetpointtoevergoabovetheTargetRPM;

      /* Update for UnitDelay: '<S240>/Unit Delay' */
      BaseEngineController_LS_DWork.s240_UnitDelay_DSTATE = rtb_Merge_a;

      /* Update for UnitDelay: '<S241>/Unit Delay' incorporates:
       *  MinMax: '<S243>/MinMax'
       *  MinMax: '<S243>/MinMax1'
       *  S-Function (motohawk_sfun_calibration): '<S232>/motohawk_calibration8'
       */
      BaseEngineController_LS_DWork.s241_UnitDelay_DSTATE = (rtb_Reset <=
        (MaxGovITermUpperLimit_DataStore())) || rtIsNaN
        ((MaxGovITermUpperLimit_DataStore())) ? rtb_Reset :
        (MaxGovITermUpperLimit_DataStore());
    }

    /* Output and update for function-call system: '<S136>/Spark Manager' */
    {
      /* local block i/o variables */
      real_T rtb_RichEquivRatioTargetDelta;
      real_T rtb_motohawk_interpolation_1d;
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
      index_T rtb_motohawk_prelookup_g;
      real_T rtb_Product_h;
      real_T rtb_Product1_f;

      /* S-Function Block: <S155>/motohawk_interpolation_2d2 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_RichEquivRatioTargetDelta = TableInterpolation2D_real_T
          (BaseEngineController_LS_B.s398_Indexes,
           BaseEngineController_LS_B.s400_Indexes, (real_T *)
           ((SparkAdvMap_DataStore())), 17, 17);
        (SparkAdv_DataStore()) = rtb_RichEquivRatioTargetDelta;
      }

      /* S-Function Block: <S303>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d = TableInterpolation1D_real_T
          (BaseEngineController_LS_B.s396_motohawk_prelookup, (real_T *)
           ((ECT_SpkOfstTbl_DataStore())), 5);
        (ECT_SpkOfst_DataStore()) = rtb_motohawk_interpolation_1d;
      }

      /* S-Function Block: <S303>/motohawk_interpolation_2d3 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_RichEquivRatioTargetDelta_l = TableInterpolation2D_real_T
          (BaseEngineController_LS_B.s398_motohawk_prelookup1,
           BaseEngineController_LS_B.s400_motohawk_prelookup1, (real_T *)
           ((ECT_SpkOfstMultMap_DataStore())), 9, 9);
        (ECT_SpkOfstMult_DataStore()) = rtb_RichEquivRatioTargetDelta_l;
      }

      /* Product: '<S303>/Product' incorporates:
       *  S-Function (motohawk_sfun_interpolation_1d): '<S303>/motohawk_interpolation_1d'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S303>/motohawk_interpolation_2d3'
       */
      rtb_Product_h = rtb_motohawk_interpolation_1d *
        rtb_RichEquivRatioTargetDelta_l;

      /* S-Function Block: <S303>/motohawk_interpolation_1d1 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d1_o = TableInterpolation1D_real_T
          (BaseEngineController_LS_B.s397_motohawk_prelookup, (real_T *)
           ((IAT_SpkOfstTbl_DataStore())), 5);
        (IAT_SpkOfst_DataStore()) = rtb_motohawk_interpolation_1d1_o;
      }

      /* S-Function Block: <S303>/motohawk_interpolation_2d1 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_RichEquivRatioTargetDelta_h = TableInterpolation2D_real_T
          (BaseEngineController_LS_B.s398_motohawk_prelookup1,
           BaseEngineController_LS_B.s400_motohawk_prelookup1, (real_T *)
           ((IAT_SpkOfstMultMap_DataStore())), 9, 9);
        (IAT_SpkOfstMult_DataStore()) = rtb_RichEquivRatioTargetDelta_h;
      }

      /* Product: '<S303>/Product1' incorporates:
       *  S-Function (motohawk_sfun_interpolation_1d): '<S303>/motohawk_interpolation_1d1'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S303>/motohawk_interpolation_2d1'
       */
      rtb_Product1_f = rtb_motohawk_interpolation_1d1_o *
        rtb_RichEquivRatioTargetDelta_h;

      /* S-Function Block: <S303>/motohawk_interpolation_1d2 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d2_m = TableInterpolation1D_real_T
          (BaseEngineController_LS_B.s395_motohawk_prelookup, (real_T *)
           ((CAT_SpkOfstTbl_DataStore())), 5);
        (CAT_SpkOfst_DataStore()) = rtb_motohawk_interpolation_1d2_m;
      }

      /* S-Function Block: <S303>/motohawk_interpolation_2d2 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_RichEquivRatioTargetDelta_i = TableInterpolation2D_real_T
          (BaseEngineController_LS_B.s398_motohawk_prelookup1,
           BaseEngineController_LS_B.s400_motohawk_prelookup1, (real_T *)
           ((CAT_SpkOfstMultMap_DataStore())), 9, 9);
        (CAT_SpkOfstMult_DataStore()) = rtb_RichEquivRatioTargetDelta_i;
      }

      /* Sum: '<S303>/Add' incorporates:
       *  Product: '<S303>/Product2'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S303>/motohawk_interpolation_1d2'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S303>/motohawk_interpolation_2d2'
       */
      BaseEngineController_LS_B.s303_Add = (rtb_Product_h + rtb_Product1_f) +
        rtb_motohawk_interpolation_1d2_m * rtb_RichEquivRatioTargetDelta_i;

      /* S-Function Block: <S300>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (Eth11IdxIn_DataStore()) = BaseEngineController_LS_B.s522_Merge;
        (Eth11IdxIdx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_LS_B.s522_Merge, (Eth11IdxIdxArr_DataStore()),
           11, (Eth11IdxIdx_DataStore()));
        rtb_motohawk_prelookup = (Eth11IdxIdx_DataStore());
      }

      /* S-Function Block: <S300>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d_k = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup, (real_T *) ((EthSpkModTbl_DataStore())), 11);
        (EthSpkMod_DataStore()) = rtb_motohawk_interpolation_1d_k;
      }

      /* S-Function Block: <S300>/motohawk_interpolation_2d3 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_RichEquivRatioTargetDelta_m = TableInterpolation2D_real_T
          (BaseEngineController_LS_B.s398_motohawk_prelookup1,
           BaseEngineController_LS_B.s400_motohawk_prelookup1, (real_T *)
           ((Ethanol_SpkOfstMultMap_DataStore())), 9, 9);
        (Ethanol_SpkOfstMult_DataStore()) = rtb_RichEquivRatioTargetDelta_m;
      }

      /* Product: '<S300>/Product' incorporates:
       *  S-Function (motohawk_sfun_interpolation_1d): '<S300>/motohawk_interpolation_1d'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S300>/motohawk_interpolation_2d3'
       *  S-Function (motohawk_sfun_prelookup): '<S300>/motohawk_prelookup'
       */
      BaseEngineController_LS_B.s300_Product = rtb_motohawk_interpolation_1d_k *
        rtb_RichEquivRatioTargetDelta_m;

      /* S-Function Block: <S299>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (DesEqRatio09In_DataStore()) = BaseEngineController_LS_B.s191_EquivOut;
        (DesEqRatio09Idx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_LS_B.s191_EquivOut,
           (DesEqRatio09IdxArr_DataStore()), 9, (DesEqRatio09Idx_DataStore()));
        rtb_motohawk_prelookup_g = (DesEqRatio09Idx_DataStore());
      }

      /* S-Function Block: <S299>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d_h = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup_g, (real_T *) ((EqRatio_SpkOfstTbl_DataStore())),
           9);
        (EqRatio_SpkOfst_DataStore()) = rtb_motohawk_interpolation_1d_h;
      }

      /* S-Function Block: <S299>/motohawk_interpolation_2d3 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_RichEquivRatioTargetDelta_e = TableInterpolation2D_real_T
          (BaseEngineController_LS_B.s398_motohawk_prelookup1,
           BaseEngineController_LS_B.s400_motohawk_prelookup1, (real_T *)
           ((EqRatio_SpkOfsMultMap_DataStore())), 9, 9);
        (EqRatio_SpkOfsMult_DataStore()) = rtb_RichEquivRatioTargetDelta_e;
      }

      /* Product: '<S299>/Product' incorporates:
       *  S-Function (motohawk_sfun_interpolation_1d): '<S299>/motohawk_interpolation_1d'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S299>/motohawk_interpolation_2d3'
       *  S-Function (motohawk_sfun_prelookup): '<S299>/motohawk_prelookup'
       */
      BaseEngineController_LS_B.s299_Product = rtb_motohawk_interpolation_1d_h *
        rtb_RichEquivRatioTargetDelta_e;

      /* Sum: '<S155>/Apply Offsets to Base Spark Advance1' incorporates:
       *  S-Function (motohawk_sfun_interpolation_2d): '<S155>/motohawk_interpolation_2d2'
       *  Sum: '<S155>/Apply Offsets to Base Spark Advance3'
       */
      BaseEngineController_LS_B.s155_ApplyOffsetstoBaseSparkAdvance1 =
        ((((rtb_RichEquivRatioTargetDelta + BaseEngineController_LS_B.s303_Add)
           + BaseEngineController_LS_B.s300_Product) +
          BaseEngineController_LS_B.s299_Product) +
         BaseEngineController_LS_B.s153_IdleSpk) +
        BaseEngineController_LS_B.s191_SparkOut;

      /* MinMax: '<S306>/MinMax' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S302>/motohawk_calibration5'
       */
      rtb_Product_h =
        (BaseEngineController_LS_B.s155_ApplyOffsetstoBaseSparkAdvance1 >=
         (MinSparkLimit_DataStore())) || rtIsNaN((MinSparkLimit_DataStore())) ?
        BaseEngineController_LS_B.s155_ApplyOffsetstoBaseSparkAdvance1 :
        (MinSparkLimit_DataStore());

      /* Switch: '<S302>/Switch1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S302>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S302>/motohawk_interpolation_1d4'
       */
      if (BaseEngineController_LS_B.s264_RelOp) {
        /* S-Function Block: <S302>/motohawk_interpolation_1d4 */
        {
          extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T
            *tbl_data, uint32_T sz);
          rtb_motohawk_interpolation_1d4_p = TableInterpolation1D_real_T
            (BaseEngineController_LS_B.s398_motohawk_prelookup1, (real_T *)
             ((MaxSparkLimitTbl_DataStore())), 9);
          (MaxSparkLimit_DataStore()) = rtb_motohawk_interpolation_1d4_p;
        }

        rtb_Product1_f = rtb_motohawk_interpolation_1d4_p;
      } else {
        rtb_Product1_f = (MaxSparkLimitOffIdle_DataStore());
      }

      /* End of Switch: '<S302>/Switch1' */

      /* MinMax: '<S306>/MinMax1' incorporates:
       *  MinMax: '<S306>/MinMax'
       */
      BaseEngineController_LS_B.s306_MinMax1 = (rtb_Product_h <= rtb_Product1_f)
        || rtIsNaN(rtb_Product1_f) ? rtb_Product_h : rtb_Product1_f;

      /* UnitDelay: '<S301>/Unit Delay' */
      rtb_Product_h = BaseEngineController_LS_DWork.s301_UnitDelay_DSTATE;

      /* Switch: '<S301>/Switch' incorporates:
       *  UnitDelay: '<S304>/Initial Condition is True'
       */
      if (BaseEngineController_LS_DWork.s304_InitialConditionisTrue_DSTATE) {
        BaseEngineController_LS_B.s301_Switch =
          BaseEngineController_LS_B.s306_MinMax1;
      } else {
        /* Sum: '<S301>/Sum' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S301>/motohawk_calibration'
         */
        rtb_Product1_f = rtb_Product_h + (SparkAdv_DeltaHi_DataStore());

        /* MinMax: '<S305>/MinMax' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S301>/motohawk_calibration1'
         *  Sum: '<S301>/Sum1'
         */
        rtb_Product_h -= (SparkAdv_DeltaLo_DataStore());

        /* MinMax: '<S305>/MinMax1' incorporates:
         *  MinMax: '<S305>/MinMax'
         */
        rtb_Product_h = (BaseEngineController_LS_B.s306_MinMax1 >= rtb_Product_h)
          || rtIsNaN(rtb_Product_h) ? BaseEngineController_LS_B.s306_MinMax1 :
          rtb_Product_h;
        BaseEngineController_LS_B.s301_Switch = (rtb_Product_h <= rtb_Product1_f)
          || rtIsNaN(rtb_Product1_f) ? rtb_Product_h : rtb_Product1_f;
      }

      /* End of Switch: '<S301>/Switch' */

      /* S-Function Block: <S155>/motohawk_interpolation_2d1 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        BaseEngineController_LS_B.s155_motohawk_interpolation_2d1 =
          TableInterpolation2D_real_T
          (BaseEngineController_LS_B.s398_motohawk_prelookup1,
           BaseEngineController_LS_B.s400_motohawk_prelookup1, (real_T *)
           ((BaseSparkEnergyMap_DataStore())), 9, 9);
        (BaseSparkEnergy_DataStore()) =
          BaseEngineController_LS_B.s155_motohawk_interpolation_2d1;
      }

      /* Update for UnitDelay: '<S304>/Initial Condition is True' incorporates:
       *  Constant: '<S304>/False After First Sample'
       */
      BaseEngineController_LS_DWork.s304_InitialConditionisTrue_DSTATE = FALSE;

      /* Update for UnitDelay: '<S301>/Unit Delay' */
      BaseEngineController_LS_DWork.s301_UnitDelay_DSTATE =
        BaseEngineController_LS_B.s301_Switch;
    }
  }
}
