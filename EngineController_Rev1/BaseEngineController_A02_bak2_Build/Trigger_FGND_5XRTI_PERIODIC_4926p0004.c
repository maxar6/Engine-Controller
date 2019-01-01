/*
 * Trigger_FGND_5XRTI_PERIODIC_4926p0004.c
 *
 * Code generation for model "BaseEngineController_A02_bak2.mdl".
 *
 * Model version              : 1.1532
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Tue Jan 01 10:29:48 2019
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_A02_bak2.h"
#include "BaseEngineController_A02_bak2_private.h"

void Trigger_FGND_5XRTI_PERIODIC_4926p0004(void)
{
  /* Named constants for Stateflow: '<S800>/ECUP Latch' */
#define BaseEngineController_A02_bak2_IN_PowerDown (1U)
#define BaseEngineController_A02_bak2_IN_PowerUp (2U)

  if (BaseEngineController_A02_bak2_DWork.s112_motohawk_trigger1_DWORK1) {
    /* Output and update for function-call system: '<S112>/MinGovernor' */
    {
      /* local block i/o variables */
      real_T rtb_motohawk_delta_time_m;
      real_T rtb_motohawk_delta_time_c;
      real_T rtb_motohawk_delta_time_e;
      real_T rtb_motohawk_delta_time_f;
      real_T rtb_motohawk_interpolation_1d2;
      real_T rtb_motohawk_interpolation_1d3;
      real_T rtb_motohawk_delta_time_p;
      real_T rtb_motohawk_interpolation_1d2_f;
      real_T rtb_motohawk_interpolation_1d1;
      real_T rtb_motohawk_delta_time_h;
      real_T rtb_Saturation_c;
      real_T rtb_motohawk_delta_time_ca;
      real_T rtb_Saturation_cw;
      real_T rtb_motohawk_interpolation_1d1_b;
      real_T rtb_motohawk_delta_time_b;
      real_T rtb_motohawk_interpolation_1d2_p;
      real_T rtb_MinMax1_p;
      real_T rtb_motohawk_delta_time_fb;
      real_T rtb_Saturation_o;
      real_T rtb_motohawk_interpolation_1d2_fr;
      real_T rtb_motohawk_delta_time_hs;
      real_T rtb_motohawk_interpolation_1d1_e;
      real_T rtb_Switch_dy;
      index_T rtb_motohawk_prelookup1;
      index_T rtb_motohawk_prelookup1_l;
      ZCEventType zcEvent;
      real_T rtb_Sum2_o;
      real_T rtb_Sum1_g;
      boolean_T rtb_RelOp_b;
      real_T rtb_UnitDelay1_c;
      real_T rtb_Product5;
      boolean_T rtb_LogicalOperator_k;
      real_T rtb_Product4;
      real_T rtb_Product2_k;
      real_T rtb_Sum_a;

      /* Sum: '<S255>/Sum2' incorporates:
       *  UnitDelay: '<S255>/Unit Delay'
       */
      rtb_Sum2_o = BaseEngineController_A02_bak2_B.s437_RPMInst -
        BaseEngineController_A02_bak2_DWork.s255_UnitDelay_DSTATE;

      /* S-Function Block: <S255>/motohawk_delta_time */
      rtb_motohawk_delta_time_m = 0.005;

      /* Product: '<S255>/Product' incorporates:
       *  S-Function (motohawk_sfun_delta_time): '<S255>/motohawk_delta_time'
       */
      rtb_Sum2_o /= rtb_motohawk_delta_time_m;

      /* S-Function Block: <S256>/motohawk_delta_time */
      rtb_Switch_dy = 0.005;

      /* Product: '<S256>/Product' incorporates:
       *  MinMax: '<S256>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S256>/motohawk_calibration'
       */
      rtb_Switch_dy /= (rtb_Switch_dy >= (RPMFallingFiltConst_DataStore())) ||
        rtIsNaN((RPMFallingFiltConst_DataStore())) ? rtb_Switch_dy :
        (RPMFallingFiltConst_DataStore());

      /* Sum: '<S257>/Sum1' incorporates:
       *  Constant: '<S257>/Constant'
       *  Product: '<S257>/Product'
       *  Product: '<S257>/Product1'
       *  Sum: '<S257>/Sum'
       *  UnitDelay: '<S257>/Unit Delay'
       */
      rtb_Sum1_g = (1.0 - rtb_Switch_dy) *
        BaseEngineController_A02_bak2_DWork.s257_UnitDelay_DSTATE + rtb_Sum2_o *
        rtb_Switch_dy;

      /* RelationalOperator: '<S251>/Relational Operator' incorporates:
       *  Gain: '<S251>/Falling RPM is Negative Derivative'
       *  S-Function (motohawk_sfun_calibration): '<S251>/motohawk_calibration'
       */
      BaseEngineController_A02_bak2_B.s251_RelationalOperator = ((rtb_Sum1_g <
        -(RPMFallingRate_DataStore())));

      /* Outputs for Atomic SubSystem: '<S130>/Base RPM Set Pt' */

      /* S-Function Block: <S235>/motohawk_interpolation_1d2 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d2_p = TableInterpolation1D_real_T
          (BaseEngineController_A02_bak2_B.s390_motohawk_prelookup, (real_T *)
           ((MinGovClntRPMSetPtTbl_DataStore())), 5);
        (MinGovClntRPMSetPt_DataStore()) = rtb_motohawk_interpolation_1d2_p;
      }

      /* End of Outputs for SubSystem: '<S130>/Base RPM Set Pt' */

      /* RelationalOperator: '<S237>/Relational Operator' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S237>/motohawk_calibration4'
       *  Sum: '<S237>/Sum'
       */
      BaseEngineController_A02_bak2_B.s237_RelationalOperator =
        ((BaseEngineController_A02_bak2_B.s437_RPMInst <
          (InGearMinGovEntryRPMDelta_DataStore()) +
          rtb_motohawk_interpolation_1d2_p));

      /* RelationalOperator: '<S237>/Relational Operator3' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S237>/motohawk_calibration6'
       *  Sum: '<S237>/Sum2'
       */
      BaseEngineController_A02_bak2_B.s237_RelationalOperator3 =
        ((BaseEngineController_A02_bak2_B.s437_RPMInst <
          rtb_motohawk_interpolation_1d2_p - (StallSaverDeltaRPM_DataStore())));

      /* MultiPortSwitch: '<S237>/Multiport Switch1' incorporates:
       *  S-Function (motohawk_sfun_data_read): '<S237>/motohawk_data_read1'
       */
      if (AirControlSource_DataStore() == FALSE) {
        rtb_Switch_dy = BaseEngineController_A02_bak2_B.s399_Switch1;
      } else {
        rtb_Switch_dy = BaseEngineController_A02_bak2_B.s405_Switch2;
      }

      /* End of MultiPortSwitch: '<S237>/Multiport Switch1' */
      /* RelationalOperator: '<S237>/Relational Operator1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S237>/motohawk_calibration5'
       */
      BaseEngineController_A02_bak2_B.s237_RelationalOperator1 = ((rtb_Switch_dy
        < (MinGovEntryAirPcnt_DataStore())));

      /* MultiPortSwitch: '<S237>/Multiport Switch' incorporates:
       *  Constant: '<S237>/Constant'
       *  RelationalOperator: '<S237>/Relational Operator4'
       *  S-Function (motohawk_sfun_data_read): '<S237>/motohawk_data_read1'
       *  UnitDelay: '<S130>/Unit Delay3'
       */
      if (AirControlSource_DataStore() == FALSE) {
        rtb_RelOp_b = (BaseEngineController_A02_bak2_B.s412_Sum2 >
                       BaseEngineController_A02_bak2_DWork.s130_UnitDelay3_DSTATE);
      } else {
        rtb_RelOp_b = TRUE;
      }

      /* End of MultiPortSwitch: '<S237>/Multiport Switch' */

      /* Logic: '<S237>/Logical Operator' incorporates:
       *  RelationalOperator: '<S237>/Relational Operator2'
       *  S-Function (motohawk_sfun_calibration): '<S237>/motohawk_calibration3'
       *  S-Function (motohawk_sfun_calibration): '<S237>/motohawk_calibration5'
       *  Sum: '<S237>/Sum1'
       */
      BaseEngineController_A02_bak2_B.s237_LogicalOperator = (((rtb_Switch_dy >=
        (MinGovEntryAirPcnt_DataStore()) + (MinGovAirPcntHyst_DataStore())) &&
        rtb_RelOp_b));

      /* S-Function Block: <S254>/motohawk_delta_time */
      rtb_motohawk_delta_time_c = 0.005;

      /* Switch: '<S254>/Switch' incorporates:
       *  Constant: '<S254>/Constant'
       *  S-Function (motohawk_sfun_data_read): '<S254>/motohawk_data_read'
       *  S-Function (motohawk_sfun_delta_time): '<S254>/motohawk_delta_time'
       *  Sum: '<S254>/Sum'
       */
      if (BaseEngineController_A02_bak2_B.s237_RelationalOperator1) {
        rtb_Switch_dy = rtb_motohawk_delta_time_c + IdleEnterTimer_DataStore();
      } else {
        rtb_Switch_dy = 0.0;
      }

      /* End of Switch: '<S254>/Switch' */
      /* RelationalOperator: '<S237>/Relational Operator5' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S237>/motohawk_calibration2'
       */
      BaseEngineController_A02_bak2_B.s237_RelationalOperator5 = ((rtb_Switch_dy
        > (MinGovEntryAirTimeThresh_DataStore())));

      /* Stateflow: '<S237>/IdleStateMachine' */
      BaseEngineController_A02_bak2_IdleStateMachine();

      /* RelationalOperator: '<S253>/RelOp' incorporates:
       *  Constant: '<S253>/Constant'
       */
      BaseEngineController_A02_bak2_B.s253_RelOp =
        ((BaseEngineController_A02_bak2_B.s252_IdleState == 2));

      /* UnitDelay: '<S130>/Unit Delay1' */
      rtb_UnitDelay1_c =
        BaseEngineController_A02_bak2_DWork.s130_UnitDelay1_DSTATE;

      /* Outputs for Enabled SubSystem: '<S130>/Base Airflow Table Adapt' incorporates:
       *  EnablePort: '<S234>/Enable'
       */
      if (BaseEngineController_A02_bak2_B.s253_RelOp) {
        /* Product: '<S234>/Product0' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S234>/motohawk_calibration2'
         */
        rtb_Sum2_o = rtb_UnitDelay1_c * (BaseAirflowAdaptGain_DataStore());

        /* MinMax: '<S249>/MinMax' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S247>/motohawk_calibration'
         */
        rtb_Sum2_o = (rtb_Sum2_o >= (BaseAirflowAdaptErrorLwrLim_DataStore())) ||
          rtIsNaN((BaseAirflowAdaptErrorLwrLim_DataStore())) ? rtb_Sum2_o :
          (BaseAirflowAdaptErrorLwrLim_DataStore());

        /* MinMax: '<S249>/MinMax1' incorporates:
         *  MinMax: '<S249>/MinMax'
         *  S-Function (motohawk_sfun_calibration): '<S247>/motohawk_calibration1'
         */
        rtb_MinMax1_p = (rtb_Sum2_o <= (BaseAirflowAdaptErrorUprLim_DataStore()))
          || rtIsNaN((BaseAirflowAdaptErrorUprLim_DataStore())) ? rtb_Sum2_o :
          (BaseAirflowAdaptErrorUprLim_DataStore());

        /* Outputs for Atomic SubSystem: '<S234>/Idle Control Enable Delay' */

        /* S-Function Block: <S248>/motohawk_delta_time */
        rtb_motohawk_delta_time_fb = 0.005;

        /* Switch: '<S248>/Switch' incorporates:
         *  Constant: '<S248>/Constant'
         *  S-Function (motohawk_sfun_data_read): '<S248>/motohawk_data_read'
         *  S-Function (motohawk_sfun_delta_time): '<S248>/motohawk_delta_time'
         *  Sum: '<S248>/Sum'
         */
        if (BaseEngineController_A02_bak2_B.s253_RelOp) {
          rtb_Sum2_o = rtb_motohawk_delta_time_fb + BaseAirflowTimer_DataStore();
        } else {
          rtb_Sum2_o = 0.0;
        }

        /* End of Switch: '<S248>/Switch' */
        /* RelationalOperator: '<S246>/Relational Operator' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S246>/motohawk_calibration1'
         */
        rtb_RelOp_b = (rtb_Sum2_o > (BaseAirflowAdaptDelayTime_DataStore()));

        /* Saturate: '<S248>/Saturation' */
        rtb_Saturation_o = rtb_Sum2_o >= 16000.0 ? 16000.0 : rtb_Sum2_o <= 0.0 ?
          0.0 : rtb_Sum2_o;

        /* S-Function (motohawk_sfun_data_write): '<S248>/motohawk_data_write' */
        /* Write to Data Storage as scalar: BaseAirflowTimer */
        {
          BaseAirflowTimer_DataStore() = rtb_Saturation_o;
        }

        /* End of Outputs for SubSystem: '<S234>/Idle Control Enable Delay' */

        /* Logic: '<S234>/Logical Operator1' incorporates:
         *  Abs: '<S234>/Abs'
         *  RelationalOperator: '<S234>/Relational Operator'
         *  S-Function (motohawk_sfun_calibration): '<S234>/motohawk_calibration3'
         *  S-Function (motohawk_sfun_calibration): '<S234>/motohawk_calibration4'
         */
        BaseEngineController_A02_bak2_B.s234_LogicalOperator1 =
          (((BaseAirflowAdaptEnable_DataStore()) && rtb_RelOp_b && (fabs
             (rtb_UnitDelay1_c) <= (BaseAirflowAdaptDelta_DataStore()))));

        /* Outputs for Enabled SubSystem: '<S234>/Adapt Base Airflow Table' incorporates:
         *  EnablePort: '<S245>/Enable'
         */
        if (BaseEngineController_A02_bak2_B.s234_LogicalOperator1) {
          /* S-Function Block: <S245>/motohawk_adapt_table */
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
              _new = (BaseAirflowOfstTbl_DataStore())[_i] + rtb_MinMax1_p;
              if (_new > (BaseAirflowOfstMaxValue_DataStore()))
                _new = (BaseAirflowOfstMaxValue_DataStore());
              if (_new < (BaseAirflowOfstMinValue_DataStore()))
                _new = (BaseAirflowOfstMinValue_DataStore());
              (BaseAirflowOfstTbl_DataStore())[_i] = _new;
            } else if (_frac == 3) {
              _new = (BaseAirflowOfstTbl_DataStore())[_i+1] + rtb_MinMax1_p;
              if (_new > (BaseAirflowOfstMaxValue_DataStore()))
                _new = (BaseAirflowOfstMaxValue_DataStore());
              if (_new < (BaseAirflowOfstMinValue_DataStore()))
                _new = (BaseAirflowOfstMinValue_DataStore());
              (BaseAirflowOfstTbl_DataStore())[_i+1] = _new;
            } else {
              real_T _half = rtb_MinMax1_p / 2;
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

        /* End of Outputs for SubSystem: '<S234>/Adapt Base Airflow Table' */
      }

      /* End of Outputs for SubSystem: '<S130>/Base Airflow Table Adapt' */
      /* S-Function Block: <S236>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_A02_bak2_DWork.s236_motohawk_delta_time_DWORK1,
           NULL);
        rtb_motohawk_delta_time_e = ((real_T) delta) * 0.000001;
      }

      /* MultiPortSwitch: '<S236>/Multiport Switch' incorporates:
       *  Gain: '<S236>/Ramp Down'
       *  Product: '<S236>/Product'
       *  Product: '<S236>/Product1'
       *  S-Function (motohawk_sfun_delta_time): '<S236>/motohawk_delta_time'
       */
      if (BaseEngineController_A02_bak2_B.s253_RelOp == FALSE) {
        /* Switch: '<S236>/Switch' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S130>/motohawk_calibration3'
         *  S-Function (motohawk_sfun_delta_time): '<S236>/motohawk_delta_time'
         */
        if ((IdleExitTimeConst_DataStore()) > 0.0) {
          rtb_Sum2_o = (IdleExitTimeConst_DataStore());
        } else {
          rtb_Sum2_o = rtb_motohawk_delta_time_e;
        }

        /* End of Switch: '<S236>/Switch' */
        rtb_Product5 = rtb_motohawk_delta_time_e / rtb_Sum2_o * -1.0;
      } else {
        rtb_Product5 = rtb_motohawk_delta_time_e / rtb_motohawk_delta_time_e;
      }

      /* End of MultiPortSwitch: '<S236>/Multiport Switch' */

      /* Sum: '<S236>/Sum' incorporates:
       *  UnitDelay: '<S236>/state'
       */
      rtb_Product5 += BaseEngineController_A02_bak2_DWork.s236_state_DSTATE;

      /* MinMax: '<S250>/MinMax1' incorporates:
       *  Constant: '<S236>/Constant'
       *  Constant: '<S236>/Constant1'
       *  MinMax: '<S250>/MinMax'
       */
      rtb_Sum2_o = rtb_Product5 >= 0.0 ? rtb_Product5 : 0.0;
      BaseEngineController_A02_bak2_B.s250_MinMax1 = rtb_Sum2_o <= 1.0 ?
        rtb_Sum2_o : 1.0;

      /* RelationalOperator: '<S239>/RelOp' incorporates:
       *  Constant: '<S239>/Constant'
       */
      rtb_RelOp_b = (BaseEngineController_A02_bak2_B.s250_MinMax1 == 0.0);

      /* UnitDelay: '<S130>/Unit Delay2' */
      rtb_Sum2_o = BaseEngineController_A02_bak2_DWork.s130_UnitDelay2_DSTATE;

      /* HitCross: '<S130>/Hit  Crossing1' incorporates:
       *  UnitDelay: '<S130>/Unit Delay2'
       */
      zcEvent = rt_ZCFcn(FALLING_ZERO_CROSSING,
                         &BaseEngineController_A02_bak2_PrevZCSigState.HitCrossing1_Input_ZCE,
                         (BaseEngineController_A02_bak2_DWork.s130_UnitDelay2_DSTATE
                          - 0.5));
      if (BaseEngineController_A02_bak2_DWork.s130_HitCrossing1_MODE == 0) {
        if (zcEvent != NO_ZCEVENT) {
          BaseEngineController_A02_bak2_B.s130_HitCrossing1 =
            !BaseEngineController_A02_bak2_B.s130_HitCrossing1;
          BaseEngineController_A02_bak2_DWork.s130_HitCrossing1_MODE = 1;
        } else {
          if (BaseEngineController_A02_bak2_B.s130_HitCrossing1 && (rtb_Sum2_o
               != 0.5)) {
            BaseEngineController_A02_bak2_B.s130_HitCrossing1 = FALSE;
          }
        }
      } else {
        if (rtb_Sum2_o != 0.5) {
          BaseEngineController_A02_bak2_B.s130_HitCrossing1 = FALSE;
        }

        BaseEngineController_A02_bak2_DWork.s130_HitCrossing1_MODE = 0;
      }

      /* End of HitCross: '<S130>/Hit  Crossing1' */

      /* Logic: '<S130>/Logical Operator' */
      BaseEngineController_A02_bak2_B.s130_LogicalOperator = ((rtb_RelOp_b ||
        BaseEngineController_A02_bak2_B.s130_HitCrossing1));

      /* Logic: '<S240>/Logical Operator' */
      rtb_LogicalOperator_k = !BaseEngineController_A02_bak2_B.s253_RelOp;

      /* S-Function Block: <S240>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_A02_bak2_DWork.s240_motohawk_delta_time_DWORK1,
           NULL);
        rtb_motohawk_delta_time_f = ((real_T) delta) * 0.000001;
      }

      /* UnitDelay: '<S240>/Unit Delay' */
      rtb_Sum2_o = BaseEngineController_A02_bak2_DWork.s240_UnitDelay_DSTATE;

      /* Switch: '<S240>/Preload lowpass filter with current RPM while not on Idle' incorporates:
       *  Constant: '<S240>/Constant'
       *  Product: '<S240>/Product2'
       *  Product: '<S240>/Product3'
       *  Sum: '<S240>/Sum'
       *  Sum: '<S240>/Sum1'
       */
      if (rtb_LogicalOperator_k) {
        rtb_Product5 = BaseEngineController_A02_bak2_B.s437_RPMInst;
      } else {
        /* Product: '<S240>/Product1' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S240>/motohawk_calibration2'
         *  S-Function (motohawk_sfun_delta_time): '<S240>/motohawk_delta_time'
         */
        rtb_UnitDelay1_c = rtb_motohawk_delta_time_f /
          (InGearRPMCtrlEntryFiltC_DataStore());
        rtb_Product5 = (1.0 - rtb_UnitDelay1_c) * rtb_Sum2_o +
          rtb_motohawk_interpolation_1d2_p * rtb_UnitDelay1_c;
      }

      /* End of Switch: '<S240>/Preload lowpass filter with current RPM while not on Idle' */

      /* MinMax: '<S240>/Don't allow setpoint to ever drop below the TargetRPM' */
      BaseEngineController_A02_bak2_B.s240_DontallowsetpointtoeverdropbelowtheTargetRPM
        = (rtb_motohawk_interpolation_1d2_p >= rtb_Product5) || rtIsNaN
        (rtb_Product5) ? rtb_motohawk_interpolation_1d2_p : rtb_Product5;

      /* Sum: '<S266>/Sum2' */
      BaseEngineController_A02_bak2_B.s266_Sum2 =
        BaseEngineController_A02_bak2_B.s240_DontallowsetpointtoeverdropbelowtheTargetRPM
        - BaseEngineController_A02_bak2_B.s540_Sum1;

      /* Product: '<S266>/Product5' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S242>/motohawk_calibration5'
       */
      rtb_Product5 = BaseEngineController_A02_bak2_B.s266_Sum2 *
        (AirMinGovErrorGain_DataStore());

      /* S-Function Block: <S242>/motohawk_prelookup1 */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (AirMinGovSpeedErrorIn_DataStore()) =
          BaseEngineController_A02_bak2_B.s266_Sum2;
        (AirMinGovSpeedErrorIdx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_A02_bak2_B.s266_Sum2,
           (AirMinGovSpeedErrorIdxArr_DataStore()), 9,
           (AirMinGovSpeedErrorIdx_DataStore()));
        rtb_motohawk_prelookup1 = (AirMinGovSpeedErrorIdx_DataStore());
      }

      /* S-Function Block: <S264>/motohawk_interpolation_1d2 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d2 = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1, (real_T *)
           ((AirMinGovPGainErrorMultTbl_DataStore())), 9);
        (AirMinGovPGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d2;
      }

      /* Product: '<S266>/Product2' incorporates:
       *  Product: '<S264>/Product2'
       *  S-Function (motohawk_sfun_calibration): '<S264>/motohawk_calibration3'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S264>/motohawk_interpolation_1d2'
       *  S-Function (motohawk_sfun_prelookup): '<S242>/motohawk_prelookup1'
       */
      BaseEngineController_A02_bak2_B.s266_Product2 = (AirMinGovPGain_DataStore())
        * rtb_motohawk_interpolation_1d2 * rtb_Product5;

      /* UnitDelay: '<S267>/Unit Delay' */
      rtb_Sum2_o = BaseEngineController_A02_bak2_DWork.s267_UnitDelay_DSTATE;

      /* S-Function Block: <S264>/motohawk_interpolation_1d3 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d3 = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1, (real_T *)
           ((AirMinGovDGainErrorMultTbl_DataStore())), 9);
        (AirMinGovDGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d3;
      }

      /* Product: '<S266>/Product4' incorporates:
       *  Product: '<S264>/Product3'
       *  S-Function (motohawk_sfun_calibration): '<S264>/motohawk_calibration2'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S264>/motohawk_interpolation_1d3'
       *  S-Function (motohawk_sfun_prelookup): '<S242>/motohawk_prelookup1'
       */
      rtb_Product4 = (AirMinGovDGain_DataStore()) *
        rtb_motohawk_interpolation_1d3 * rtb_Product5;

      /* S-Function Block: <S267>/motohawk_delta_time */
      rtb_motohawk_delta_time_p = 0.005;

      /* Product: '<S267>/Product' incorporates:
       *  S-Function (motohawk_sfun_delta_time): '<S267>/motohawk_delta_time'
       *  Sum: '<S267>/Sum2'
       */
      BaseEngineController_A02_bak2_B.s267_Product = (rtb_Product4 - rtb_Sum2_o)
        / rtb_motohawk_delta_time_p;

      /* Switch: '<S268>/Switch1' incorporates:
       *  Constant: '<S242>/Constant'
       *  UnitDelay: '<S268>/Unit Delay'
       */
      if (BaseEngineController_A02_bak2_B.s130_LogicalOperator) {
        BaseEngineController_A02_bak2_B.s268_Switch1 = 0.0;
      } else {
        BaseEngineController_A02_bak2_B.s268_Switch1 =
          BaseEngineController_A02_bak2_DWork.s268_UnitDelay_DSTATE;
      }

      /* End of Switch: '<S268>/Switch1' */

      /* Switch: '<S242>/Switch' incorporates:
       *  Constant: '<S242>/Constant1'
       */
      if (BaseEngineController_A02_bak2_B.s130_LogicalOperator) {
        rtb_UnitDelay1_c = 0.0;
      } else {
        /* MinMax: '<S265>/MinMax' incorporates:
         *  Sum: '<S266>/Sum1'
         */
        rtb_Sum2_o = (BaseEngineController_A02_bak2_B.s266_Product2 +
                      BaseEngineController_A02_bak2_B.s267_Product) +
          BaseEngineController_A02_bak2_B.s268_Switch1;

        /* MinMax: '<S265>/MinMax1' incorporates:
         *  MinMax: '<S265>/MinMax'
         *  S-Function (motohawk_sfun_calibration): '<S242>/motohawk_calibration2'
         *  S-Function (motohawk_sfun_calibration): '<S242>/motohawk_calibration9'
         */
        rtb_Sum2_o = (rtb_Sum2_o >= (AirMinGovPIDOutLowerLimit_DataStore())) ||
          rtIsNaN((AirMinGovPIDOutLowerLimit_DataStore())) ? rtb_Sum2_o :
          (AirMinGovPIDOutLowerLimit_DataStore());
        rtb_UnitDelay1_c = (rtb_Sum2_o <= (AirMinGovPIDOutUpperLimit_DataStore()))
          || rtIsNaN((AirMinGovPIDOutUpperLimit_DataStore())) ? rtb_Sum2_o :
          (AirMinGovPIDOutUpperLimit_DataStore());
      }

      /* End of Switch: '<S242>/Switch' */

      /* Product: '<S130>/Product1' */
      BaseEngineController_A02_bak2_B.s130_MinGovAirPID =
        BaseEngineController_A02_bak2_B.s250_MinMax1 * rtb_UnitDelay1_c;

      /* Sum: '<S261>/Sum1' */
      BaseEngineController_A02_bak2_B.s261_Sum1 =
        BaseEngineController_A02_bak2_B.s240_DontallowsetpointtoeverdropbelowtheTargetRPM
        - BaseEngineController_A02_bak2_B.s540_Sum1;

      /* Product: '<S261>/Product4' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S241>/motohawk_calibration4'
       */
      rtb_UnitDelay1_c = BaseEngineController_A02_bak2_B.s261_Sum1 *
        (SpkMinGovErrorGain_DataStore());

      /* S-Function Block: <S241>/motohawk_prelookup1 */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (SpkMinGovSpeedErrorIn_DataStore()) =
          BaseEngineController_A02_bak2_B.s261_Sum1;
        (SpkMinGovSpeedErrorIdx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_A02_bak2_B.s261_Sum1,
           (SpkMinGovSpeedErrorIdxArr_DataStore()), 9,
           (SpkMinGovSpeedErrorIdx_DataStore()));
        rtb_motohawk_prelookup1_l = (SpkMinGovSpeedErrorIdx_DataStore());
      }

      /* S-Function Block: <S259>/motohawk_interpolation_1d2 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d2_f = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1_l, (real_T *)
           ((SpkMinGovPGainErrorMultTbl_DataStore())), 9);
        (SpkMinGovPGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d2_f;
      }

      /* Product: '<S261>/Product' incorporates:
       *  Product: '<S259>/Product2'
       *  S-Function (motohawk_sfun_calibration): '<S259>/motohawk_calibration3'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S259>/motohawk_interpolation_1d2'
       *  S-Function (motohawk_sfun_prelookup): '<S241>/motohawk_prelookup1'
       */
      BaseEngineController_A02_bak2_B.s261_Product = (SpkMinGovPGain_DataStore())
        * rtb_motohawk_interpolation_1d2_f * rtb_UnitDelay1_c;

      /* UnitDelay: '<S262>/Unit Delay' */
      rtb_Sum2_o = BaseEngineController_A02_bak2_DWork.s262_UnitDelay_DSTATE;

      /* S-Function Block: <S259>/motohawk_interpolation_1d1 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d1 = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1_l, (real_T *)
           ((SpkMinGovDGainErrorMultTbl_DataStore())), 9);
        (SpkMinGovDGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d1;
      }

      /* Product: '<S261>/Product2' incorporates:
       *  Product: '<S259>/Product1'
       *  S-Function (motohawk_sfun_calibration): '<S259>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S259>/motohawk_interpolation_1d1'
       *  S-Function (motohawk_sfun_prelookup): '<S241>/motohawk_prelookup1'
       */
      rtb_Product2_k = (SpkMinGovDGain_DataStore()) *
        rtb_motohawk_interpolation_1d1 * rtb_UnitDelay1_c;

      /* S-Function Block: <S262>/motohawk_delta_time */
      rtb_motohawk_delta_time_h = 0.005;

      /* Product: '<S262>/Product' incorporates:
       *  S-Function (motohawk_sfun_delta_time): '<S262>/motohawk_delta_time'
       *  Sum: '<S262>/Sum2'
       */
      BaseEngineController_A02_bak2_B.s262_Product = (rtb_Product2_k -
        rtb_Sum2_o) / rtb_motohawk_delta_time_h;

      /* Switch: '<S241>/Switch' incorporates:
       *  Constant: '<S241>/Constant1'
       */
      if (rtb_RelOp_b) {
        rtb_UnitDelay1_c = 0.0;
      } else {
        /* MinMax: '<S260>/MinMax' incorporates:
         *  Sum: '<S261>/Sum'
         */
        rtb_Sum2_o = BaseEngineController_A02_bak2_B.s261_Product +
          BaseEngineController_A02_bak2_B.s262_Product;

        /* MinMax: '<S260>/MinMax1' incorporates:
         *  MinMax: '<S260>/MinMax'
         *  S-Function (motohawk_sfun_calibration): '<S241>/motohawk_calibration1'
         *  S-Function (motohawk_sfun_calibration): '<S241>/motohawk_calibration9'
         */
        rtb_Sum2_o = (rtb_Sum2_o >= (SpkMinGovPIDOutLowerLimit_DataStore())) ||
          rtIsNaN((SpkMinGovPIDOutLowerLimit_DataStore())) ? rtb_Sum2_o :
          (SpkMinGovPIDOutLowerLimit_DataStore());
        rtb_UnitDelay1_c = (rtb_Sum2_o <= (SpkMinGovPIDOutUpperLimit_DataStore()))
          || rtIsNaN((SpkMinGovPIDOutUpperLimit_DataStore())) ? rtb_Sum2_o :
          (SpkMinGovPIDOutUpperLimit_DataStore());
      }

      /* End of Switch: '<S241>/Switch' */

      /* Product: '<S130>/Product' */
      BaseEngineController_A02_bak2_B.s130_IdleSpk =
        BaseEngineController_A02_bak2_B.s250_MinMax1 * rtb_UnitDelay1_c;

      /* Outputs for Atomic SubSystem: '<S130>/AiflowOffset' */

      /* S-Function Block: <S233>/motohawk_interpolation_1d1 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d1_e = TableInterpolation1D_real_T
          (BaseEngineController_A02_bak2_B.s390_motohawk_prelookup, (real_T *)
           ((ACAirFlowOfstTbl_DataStore())), 5);
        (ACAirFlowOfst_DataStore()) = rtb_motohawk_interpolation_1d1_e;
      }

      /* Product: '<S233>/Product' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S233>/motohawk_calibration'
       */
      rtb_Sum2_o = (BaseEngineController_A02_bak2_B.s121_LogicalOperator ?
                    (real_T)((uint8_T)(ACAirFlowOfst_Enab_DataStore())) : 0.0) *
        rtb_motohawk_interpolation_1d1_e;

      /* S-Function Block: <S233>/motohawk_interpolation_1d2 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d2_fr = TableInterpolation1D_real_T
          (BaseEngineController_A02_bak2_B.s390_motohawk_prelookup, (real_T *)
           ((BaseAirflowOfstTbl_DataStore())), 5);
        (BaseAirflowOfst_DataStore()) = rtb_motohawk_interpolation_1d2_fr;
      }

      /* Sum: '<S233>/Sum' incorporates:
       *  S-Function (motohawk_sfun_interpolation_1d): '<S233>/motohawk_interpolation_1d2'
       */
      rtb_Sum_a = rtb_Sum2_o + rtb_motohawk_interpolation_1d2_fr;

      /* RelationalOperator: '<S244>/RelOp' incorporates:
       *  Constant: '<S244>/Constant'
       *  S-Function (motohawk_sfun_data_read): '<S233>/motohawk_data_read'
       */
      rtb_RelOp_b = (((uint8_T)EngineState_DataStore()) == 3);

      /* Logic: '<S233>/Logical Operator' incorporates:
       *  RelationalOperator: '<S233>/Relational Operator'
       *  RelationalOperator: '<S233>/Relational Operator1'
       *  UnitDelay: '<S233>/Unit Delay'
       */
      rtb_LogicalOperator_k = ((rtb_RelOp_b <
        BaseEngineController_A02_bak2_DWork.s233_UnitDelay_DSTATE) ||
        (rtb_RelOp_b ==
         BaseEngineController_A02_bak2_DWork.s233_UnitDelay_DSTATE));

      /* S-Function Block: <S243>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_A02_bak2_DWork.s243_motohawk_delta_time_DWORK1,
           NULL);
        rtb_motohawk_delta_time_hs = ((real_T) delta) * 0.000001;
      }

      /* UnitDelay: '<S243>/Unit Delay' */
      rtb_Sum2_o = BaseEngineController_A02_bak2_DWork.s243_UnitDelay_DSTATE;

      /* Switch: '<S243>/Preload lowpass filter with current RPM while not on Idle' incorporates:
       *  Constant: '<S243>/Constant'
       *  Logic: '<S243>/Logical Operator'
       *  Product: '<S243>/Product2'
       *  Product: '<S243>/Product3'
       *  Sum: '<S243>/Sum'
       *  Sum: '<S243>/Sum1'
       */
      if (!rtb_LogicalOperator_k) {
        rtb_Sum2_o = BaseEngineController_A02_bak2_B.s405_Switch2;
      } else {
        /* Product: '<S243>/Product1' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S243>/motohawk_calibration2'
         *  S-Function (motohawk_sfun_delta_time): '<S243>/motohawk_delta_time'
         */
        rtb_UnitDelay1_c = rtb_motohawk_delta_time_hs /
          (IdleEntryAirRampInFiltC_DataStore());
        rtb_Sum2_o = (1.0 - rtb_UnitDelay1_c) * rtb_Sum2_o + rtb_Sum_a *
          rtb_UnitDelay1_c;
      }

      /* End of Switch: '<S243>/Preload lowpass filter with current RPM while not on Idle' */

      /* MinMax: '<S243>/Don't allow setpoint to ever drop below the TargetRPM' */
      BaseEngineController_A02_bak2_B.s243_DontallowsetpointtoeverdropbelowtheTargetRPM
        = (rtb_Sum_a >= rtb_Sum2_o) || rtIsNaN(rtb_Sum2_o) ? rtb_Sum_a :
        rtb_Sum2_o;

      /* Update for UnitDelay: '<S233>/Unit Delay' */
      BaseEngineController_A02_bak2_DWork.s233_UnitDelay_DSTATE = rtb_RelOp_b;

      /* Update for UnitDelay: '<S243>/Unit Delay' */
      BaseEngineController_A02_bak2_DWork.s243_UnitDelay_DSTATE =
        BaseEngineController_A02_bak2_B.s243_DontallowsetpointtoeverdropbelowtheTargetRPM;

      /* End of Outputs for SubSystem: '<S130>/AiflowOffset' */

      /* Saturate: '<S254>/Saturation' */
      rtb_Saturation_c = rtb_Switch_dy >= 16000.0 ? 16000.0 : rtb_Switch_dy <=
        0.0 ? 0.0 : rtb_Switch_dy;

      /* S-Function (motohawk_sfun_data_write): '<S254>/motohawk_data_write' */
      /* Write to Data Storage as scalar: IdleEnterTimer */
      {
        IdleEnterTimer_DataStore() = rtb_Saturation_c;
      }

      /* S-Function Block: <S258>/motohawk_delta_time */
      rtb_motohawk_delta_time_ca = 0.005;

      /* Sum: '<S238>/Sum' */
      rtb_Sum2_o = BaseEngineController_A02_bak2_B.s540_Sum1 -
        BaseEngineController_A02_bak2_B.s240_DontallowsetpointtoeverdropbelowtheTargetRPM;

      /* Switch: '<S258>/Switch' incorporates:
       *  Constant: '<S258>/Constant'
       *  RelationalOperator: '<S238>/Relational Operator2'
       *  S-Function (motohawk_sfun_calibration): '<S238>/motohawk_calibration3'
       *  S-Function (motohawk_sfun_data_read): '<S258>/motohawk_data_read'
       *  S-Function (motohawk_sfun_delta_time): '<S258>/motohawk_delta_time'
       *  Sum: '<S258>/Sum'
       */
      if (rtb_Sum2_o > (MotoringDeltaRPMLimit_DataStore())) {
        BaseEngineController_A02_bak2_B.s258_Switch = rtb_motohawk_delta_time_ca
          + MotoringTimer_DataStore();
      } else {
        BaseEngineController_A02_bak2_B.s258_Switch = 0.0;
      }

      /* End of Switch: '<S258>/Switch' */

      /* RelationalOperator: '<S238>/Relational Operator1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S238>/motohawk_calibration1'
       */
      BaseEngineController_A02_bak2_B.s238_RelationalOperator1 =
        ((BaseEngineController_A02_bak2_B.s258_Switch >
          (MotoringDtctTimerLimit_DataStore())));

      /* DataTypeConversion: '<S238>/Data Type Conversion' */
      rtb_Sum_a = (real_T)
        BaseEngineController_A02_bak2_B.s238_RelationalOperator1;

      /* Saturate: '<S258>/Saturation' */
      rtb_Saturation_cw = BaseEngineController_A02_bak2_B.s258_Switch >= 16000.0
        ? 16000.0 : BaseEngineController_A02_bak2_B.s258_Switch <= 0.0 ? 0.0 :
        BaseEngineController_A02_bak2_B.s258_Switch;

      /* S-Function (motohawk_sfun_data_write): '<S258>/motohawk_data_write' */
      /* Write to Data Storage as scalar: MotoringTimer */
      {
        MotoringTimer_DataStore() = rtb_Saturation_cw;
      }

      /* S-Function Block: <S264>/motohawk_interpolation_1d1 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d1_b = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1, (real_T *)
           ((AirMinGovIGainErrorMultTbl_DataStore())), 9);
        (AirMinGovIGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d1_b;
      }

      /* Product: '<S264>/Product1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S264>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S264>/motohawk_interpolation_1d1'
       *  S-Function (motohawk_sfun_prelookup): '<S242>/motohawk_prelookup1'
       */
      rtb_Sum2_o = (AirMinGovIGain_DataStore()) *
        rtb_motohawk_interpolation_1d1_b;

      /* S-Function Block: <S268>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_A02_bak2_DWork.s268_motohawk_delta_time_DWORK1,
           NULL);
        rtb_motohawk_delta_time_b = ((real_T) delta) * 0.000001;
      }

      /* Sum: '<S268>/Sum' incorporates:
       *  Product: '<S266>/Product1'
       *  Product: '<S268>/Product'
       *  S-Function (motohawk_sfun_delta_time): '<S268>/motohawk_delta_time'
       */
      rtb_UnitDelay1_c = rtb_Product5 * rtb_Sum2_o * rtb_motohawk_delta_time_b +
        BaseEngineController_A02_bak2_B.s268_Switch1;

      /* MinMax: '<S270>/MinMax' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S242>/motohawk_calibration7'
       */
      rtb_Sum2_o = (rtb_UnitDelay1_c >= (AirMinGovITermLowerLimit_DataStore())) ||
        rtIsNaN((AirMinGovITermLowerLimit_DataStore())) ? rtb_UnitDelay1_c :
        (AirMinGovITermLowerLimit_DataStore());

      /* MinMax: '<S270>/MinMax1' incorporates:
       *  MinMax: '<S270>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S242>/motohawk_calibration8'
       */
      rtb_Sum2_o = (rtb_Sum2_o <= (AirMinGovITermUpperLimit_DataStore())) ||
        rtIsNaN((AirMinGovITermUpperLimit_DataStore())) ? rtb_Sum2_o :
        (AirMinGovITermUpperLimit_DataStore());

      /* Update for UnitDelay: '<S255>/Unit Delay' */
      BaseEngineController_A02_bak2_DWork.s255_UnitDelay_DSTATE =
        BaseEngineController_A02_bak2_B.s437_RPMInst;

      /* Update for UnitDelay: '<S257>/Unit Delay' */
      BaseEngineController_A02_bak2_DWork.s257_UnitDelay_DSTATE = rtb_Sum1_g;

      /* Update for UnitDelay: '<S130>/Unit Delay3' */
      BaseEngineController_A02_bak2_DWork.s130_UnitDelay3_DSTATE =
        BaseEngineController_A02_bak2_B.s130_MinGovAirPID;

      /* Update for UnitDelay: '<S130>/Unit Delay1' */
      BaseEngineController_A02_bak2_DWork.s130_UnitDelay1_DSTATE =
        BaseEngineController_A02_bak2_B.s268_Switch1;

      /* Update for UnitDelay: '<S236>/state' */
      BaseEngineController_A02_bak2_DWork.s236_state_DSTATE =
        BaseEngineController_A02_bak2_B.s250_MinMax1;

      /* Update for UnitDelay: '<S130>/Unit Delay2' */
      BaseEngineController_A02_bak2_DWork.s130_UnitDelay2_DSTATE = rtb_Sum_a;

      /* Update for UnitDelay: '<S240>/Unit Delay' */
      BaseEngineController_A02_bak2_DWork.s240_UnitDelay_DSTATE =
        BaseEngineController_A02_bak2_B.s240_DontallowsetpointtoeverdropbelowtheTargetRPM;

      /* Update for UnitDelay: '<S267>/Unit Delay' */
      BaseEngineController_A02_bak2_DWork.s267_UnitDelay_DSTATE = rtb_Product4;

      /* Update for UnitDelay: '<S268>/Unit Delay' incorporates:
       *  MinMax: '<S270>/MinMax1'
       */
      BaseEngineController_A02_bak2_DWork.s268_UnitDelay_DSTATE = rtb_Sum2_o;

      /* Update for UnitDelay: '<S262>/Unit Delay' */
      BaseEngineController_A02_bak2_DWork.s262_UnitDelay_DSTATE = rtb_Product2_k;
    }

    /* Output and update for function-call system: '<S112>/MaxGovernor' */
    {
      /* local block i/o variables */
      real_T rtb_Merge1;
      real_T rtb_motohawk_delta_time_mw;
      real_T rtb_motohawk_interpolation_1d3_e;
      real_T rtb_motohawk_interpolation_1d2_n;
      real_T rtb_motohawk_delta_time_j;
      real_T rtb_motohawk_interpolation_1d4;
      real_T rtb_motohawk_delta_time_cp;
      real_T rtb_StateO;
      real_T rtb_motohawk_interpolation_1d4_m;
      real_T rtb_MinMax_m;
      real_T rtb_MinMax_j;
      index_T rtb_motohawk_prelookup1_j;
      real_T rtb_Merge_d;
      boolean_T rtb_RelationalOperator_c;
      boolean_T rtb_Switch_f;
      boolean_T rtb_RelationalOperator_b;
      boolean_T rtb_LogicalOperator1_p;
      real_T rtb_Reset;
      int32_T rtb_Hold;
      int32_T rtb_ETCMode;
      real_T rtb_alpha_e;

      /* Sum: '<S129>/Sum' */
      BaseEngineController_A02_bak2_B.s129_Sum =
        BaseEngineController_A02_bak2_B.s243_DontallowsetpointtoeverdropbelowtheTargetRPM
        + BaseEngineController_A02_bak2_B.s412_Sum2;

      /* Outputs for Enabled SubSystem: '<S219>/InGear' incorporates:
       *  EnablePort: '<S222>/Enable'
       */
      /* Outputs for Enabled SubSystem: '<S219>/InNeutral' incorporates:
       *  EnablePort: '<S223>/Enable'
       */
      if (BaseEngineController_A02_bak2_B.s510_Merge) {
        /* S-Function (motohawk_sfun_data_read): '<S222>/motohawk_data_read' */
        rtb_MinMax_j = MaxGovInGearSetPoint_DataStore();

        /* MinMax: '<S224>/MinMax' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S222>/motohawk_calibration3'
         */
        rtb_MinMax_j = (rtb_MinMax_j >= (MaxGovInGearLowerLim_DataStore())) ||
          rtIsNaN((MaxGovInGearLowerLim_DataStore())) ? rtb_MinMax_j :
          (MaxGovInGearLowerLim_DataStore());

        /* MinMax: '<S224>/MinMax1' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S222>/motohawk_calibration5'
         */
        rtb_Merge_d = (rtb_MinMax_j <= (MaxGovInGearUpperLim_DataStore())) ||
          rtIsNaN((MaxGovInGearUpperLim_DataStore())) ? rtb_MinMax_j :
          (MaxGovInGearUpperLim_DataStore());

        /* S-Function (motohawk_sfun_calibration): '<S222>/motohawk_calibration4' */
        rtb_Merge1 = (MaxGovInGearRPMThresh_DataStore());

        /* S-Function (motohawk_sfun_data_write): '<S222>/motohawk_data_write' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S222>/motohawk_calibration1'
         */
        /* Write to Data Storage as scalar: MaxGovInGearSetPoint */
        {
          MaxGovInGearSetPoint_DataStore() = (MaxGovInGearSetPt_DataStore());
        }

        /* S-Function (motohawk_sfun_data_write): '<S222>/motohawk_data_write1' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S222>/motohawk_calibration2'
         */
        /* Write to Data Storage as scalar: MaxGovInGearSetPoint */
        {
          MaxGovInGearSetPoint_DataStore() = (MaxGovInGearRPMSetPt_DataStore());
        }
      } else {
        /* S-Function (motohawk_sfun_data_read): '<S223>/motohawk_data_read' */
        rtb_MinMax_m = MaxGovNtrlSetPoint_DataStore();

        /* MinMax: '<S225>/MinMax' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S223>/motohawk_calibration2'
         */
        rtb_MinMax_m = (rtb_MinMax_m >= (MaxGovNtrlLowerLim_DataStore())) ||
          rtIsNaN((MaxGovNtrlLowerLim_DataStore())) ? rtb_MinMax_m :
          (MaxGovNtrlLowerLim_DataStore());

        /* MinMax: '<S225>/MinMax1' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S223>/motohawk_calibration5'
         */
        rtb_Merge_d = (rtb_MinMax_m <= (MaxGovNtrlUpperLim_DataStore())) ||
          rtIsNaN((MaxGovNtrlUpperLim_DataStore())) ? rtb_MinMax_m :
          (MaxGovNtrlUpperLim_DataStore());

        /* S-Function (motohawk_sfun_calibration): '<S223>/motohawk_calibration3' */
        rtb_Merge1 = (MaxGovNtrlRPMThresh_DataStore());

        /* S-Function (motohawk_sfun_data_write): '<S223>/motohawk_data_write' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S223>/motohawk_calibration1'
         */
        /* Write to Data Storage as scalar: MaxGovNtrlSetPoint */
        {
          MaxGovNtrlSetPoint_DataStore() = (MaxGovNtrlSetPt_DataStore());
        }

        /* S-Function (motohawk_sfun_data_write): '<S223>/motohawk_data_write1' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S223>/motohawk_calibration4'
         */
        /* Write to Data Storage as scalar: MaxGovNtrlSetPoint */
        {
          MaxGovNtrlSetPoint_DataStore() = (MaxGovNtrlRPMSetPt_DataStore());
        }
      }

      /* End of Outputs for SubSystem: '<S219>/InNeutral' */
      /* End of Outputs for SubSystem: '<S219>/InGear' */

      /* RelationalOperator: '<S219>/Relational Operator' incorporates:
       *  Sum: '<S219>/Sum1'
       */
      rtb_RelationalOperator_c = (BaseEngineController_A02_bak2_B.s437_RPMInst >
        rtb_Merge_d - rtb_Merge1);

      /* RelationalOperator: '<S217>/Relational Operator2' */
      rtb_Switch_f = (BaseEngineController_A02_bak2_B.s437_RPMInst > rtb_Merge_d);

      /* RelationalOperator: '<S217>/Relational Operator' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S217>/motohawk_calibration5'
       *  Sum: '<S217>/Sum'
       */
      rtb_RelationalOperator_b = (BaseEngineController_A02_bak2_B.s129_Sum <=
        BaseEngineController_A02_bak2_B.s405_Switch2 - (MaxGovTPSHyst_DataStore()));

      /* Logic: '<S217>/Logical Operator1' incorporates:
       *  RelationalOperator: '<S217>/Relational Operator1'
       *  S-Function (motohawk_sfun_calibration): '<S217>/motohawk_calibration5'
       *  Sum: '<S217>/Sum1'
       */
      rtb_LogicalOperator1_p = (rtb_RelationalOperator_c &&
        (BaseEngineController_A02_bak2_B.s129_Sum > (MaxGovTPSHyst_DataStore())
         + BaseEngineController_A02_bak2_B.s405_Switch2));

      /* MATLAB Function Block: '<S217>/MaxGOV Stateflow' incorporates:
       *  Logic: '<S217>/Logical Operator'
       *  Logic: '<S217>/Logical Operator2'
       *  Logic: '<S217>/Logical Operator3'
       *  S-Function (motohawk_sfun_data_read): '<S217>/motohawk_data_read'
       */

      /* MATLAB Function 'Foreground/Control/Controller/Run/MaxGovernor/MaxGovState/MaxGOV Stateflow': '<S221>:1' */
      if ((MaxGov_DataStore() == 0.0) && ((rtb_RelationalOperator_c ||
            rtb_Switch_f) == 1)) {
        /* '<S221>:1:3' */
        /* '<S221>:1:4' */
        rtb_StateO = 1.0;
      } else if ((MaxGov_DataStore() == 1.0) && (rtb_RelationalOperator_b ==
                  TRUE)) {
        /* '<S221>:1:5' */
        /* '<S221>:1:6' */
        rtb_StateO = 2.0;
      } else if ((MaxGov_DataStore() == 2.0) && ((rtb_LogicalOperator1_p ||
                   rtb_Switch_f) == 1)) {
        /* '<S221>:1:7' */
        /* '<S221>:1:8' */
        rtb_StateO = 1.0;
      } else if ((MaxGov_DataStore() == 2.0) && (!rtb_RelationalOperator_c ==
                  TRUE)) {
        /* '<S221>:1:9' */
        /* '<S221>:1:10' */
        rtb_StateO = 0.0;
      } else {
        /* '<S221>:1:12' */
        rtb_StateO = MaxGov_DataStore();
      }

      if (MaxGov_DataStore() == 0.0) {
        /* '<S221>:1:15' */
        /* '<S221>:1:16' */
        rtb_ETCMode = 0;

        /* '<S221>:1:17' */
        rtb_Hold = 0;

        /* '<S221>:1:18' */
      } else if (MaxGov_DataStore() == 1.0) {
        /* '<S221>:1:19' */
        /* '<S221>:1:20' */
        rtb_ETCMode = 1;

        /* '<S221>:1:21' */
        rtb_Hold = 0;

        /* '<S221>:1:22' */
      } else if (MaxGov_DataStore() == 2.0) {
        /* '<S221>:1:23' */
        /* '<S221>:1:24' */
        rtb_ETCMode = 0;

        /* '<S221>:1:25' */
        rtb_Hold = 1;

        /* '<S221>:1:26' */
      } else {
        /* '<S221>:1:28' */
        rtb_ETCMode = 0;

        /* '<S221>:1:29' */
        rtb_Hold = 0;

        /* '<S221>:1:30' */
      }

      /* End of MATLAB Function Block: '<S217>/MaxGOV Stateflow' */

      /* DataTypeConversion: '<S217>/Data Type Conversion' */
      BaseEngineController_A02_bak2_B.s217_DataTypeConversion = 0;

      /* Logic: '<S218>/Logical Operator' incorporates:
       *  UnitDelay: '<S129>/Unit Delay'
       */
      rtb_RelationalOperator_c =
        !BaseEngineController_A02_bak2_DWork.s129_UnitDelay_DSTATE;

      /* S-Function Block: <S218>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_A02_bak2_DWork.s218_motohawk_delta_time_DWORK1,
           NULL);
        rtb_motohawk_delta_time_mw = ((real_T) delta) * 0.000001;
      }

      /* UnitDelay: '<S218>/Unit Delay' */
      rtb_Reset = BaseEngineController_A02_bak2_DWork.s218_UnitDelay_DSTATE;

      /* Switch: '<S218>/Preload lowpass filter with current RPM while not on Idle' incorporates:
       *  Constant: '<S218>/Constant'
       *  Product: '<S218>/Product2'
       *  Product: '<S218>/Product3'
       *  Sum: '<S218>/Sum'
       *  Sum: '<S218>/Sum1'
       */
      if (rtb_RelationalOperator_c) {
        rtb_alpha_e = BaseEngineController_A02_bak2_B.s437_RPMInst;
      } else {
        /* Product: '<S218>/Product1' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S218>/motohawk_calibration2'
         *  S-Function (motohawk_sfun_delta_time): '<S218>/motohawk_delta_time'
         */
        rtb_alpha_e = rtb_motohawk_delta_time_mw /
          (MaxGovRPMCtrlEntryFiltC_DataStore());
        rtb_alpha_e = (1.0 - rtb_alpha_e) * rtb_Reset + rtb_Merge_d *
          rtb_alpha_e;
      }

      /* End of Switch: '<S218>/Preload lowpass filter with current RPM while not on Idle' */

      /* MinMax: '<S218>/Don't allow setpoint to ever go above the TargetRPM' */
      BaseEngineController_A02_bak2_B.s218_DontallowsetpointtoevergoabovetheTargetRPM
        = (rtb_Merge_d <= rtb_alpha_e) || rtIsNaN(rtb_alpha_e) ? rtb_Merge_d :
        rtb_alpha_e;

      /* DataTypeConversion: '<S217>/Data Type Conversion1' */
      rtb_Reset = fmod((real_T)rtb_Hold, 256.0);
      BaseEngineController_A02_bak2_B.s217_DataTypeConversion1 = (int8_T)
        (rtb_Reset < 0.0 ? (int8_T)-(int8_T)(uint8_T)-rtb_Reset : (int8_T)
         (uint8_T)rtb_Reset);

      /* Switch: '<S220>/Switch1' */
      if (BaseEngineController_A02_bak2_B.s217_DataTypeConversion1 >= 1) {
        rtb_alpha_e =
          BaseEngineController_A02_bak2_B.s218_DontallowsetpointtoevergoabovetheTargetRPM;
      } else {
        rtb_alpha_e = BaseEngineController_A02_bak2_B.s437_RPMInst;
      }

      /* End of Switch: '<S220>/Switch1' */

      /* Sum: '<S228>/Sum2' */
      BaseEngineController_A02_bak2_B.s228_Sum2 =
        BaseEngineController_A02_bak2_B.s218_DontallowsetpointtoevergoabovetheTargetRPM
        - rtb_alpha_e;

      /* Product: '<S228>/Product5' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S220>/motohawk_calibration5'
       */
      rtb_alpha_e = BaseEngineController_A02_bak2_B.s228_Sum2 *
        (MaxGovErrorGain_DataStore());

      /* S-Function Block: <S220>/motohawk_prelookup1 */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (MaxGovSpeedErrorIn_DataStore()) =
          BaseEngineController_A02_bak2_B.s228_Sum2;
        (MaxGovSpeedErrorIdx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_A02_bak2_B.s228_Sum2,
           (MaxGovSpeedErrorIdxArr_DataStore()), 9,
           (MaxGovSpeedErrorIdx_DataStore()));
        rtb_motohawk_prelookup1_j = (MaxGovSpeedErrorIdx_DataStore());
      }

      /* S-Function Block: <S220>/motohawk_interpolation_1d3 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d3_e = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1_j, (real_T *)
           ((MaxGovPGainErrorMultTbl_DataStore())), 9);
        (MaxGovPGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d3_e;
      }

      /* Product: '<S228>/Product2' incorporates:
       *  Product: '<S220>/Product4'
       *  S-Function (motohawk_sfun_calibration): '<S220>/motohawk_calibration3'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S220>/motohawk_interpolation_1d3'
       *  S-Function (motohawk_sfun_prelookup): '<S220>/motohawk_prelookup1'
       */
      BaseEngineController_A02_bak2_B.s228_Product2 = (MaxGovPGain_DataStore()) *
        rtb_motohawk_interpolation_1d3_e * rtb_alpha_e;

      /* UnitDelay: '<S229>/Unit Delay' */
      rtb_Reset = BaseEngineController_A02_bak2_DWork.s229_UnitDelay_DSTATE;

      /* S-Function Block: <S220>/motohawk_interpolation_1d2 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d2_n = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1_j, (real_T *)
           ((MaxGovDGainErrorMultTbl_DataStore())), 9);
        (MaxGovDGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d2_n;
      }

      /* Product: '<S228>/Product4' incorporates:
       *  Product: '<S220>/Product3'
       *  S-Function (motohawk_sfun_calibration): '<S220>/motohawk_calibration6'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S220>/motohawk_interpolation_1d2'
       *  S-Function (motohawk_sfun_prelookup): '<S220>/motohawk_prelookup1'
       */
      rtb_Merge_d = (MaxGovDGain_DataStore()) * rtb_motohawk_interpolation_1d2_n
        * rtb_alpha_e;

      /* S-Function Block: <S229>/motohawk_delta_time */
      rtb_motohawk_delta_time_j = 0.005;

      /* Product: '<S229>/Product' incorporates:
       *  S-Function (motohawk_sfun_delta_time): '<S229>/motohawk_delta_time'
       *  Sum: '<S229>/Sum2'
       */
      BaseEngineController_A02_bak2_B.s229_Product = (rtb_Merge_d - rtb_Reset) /
        rtb_motohawk_delta_time_j;

      /* Outputs for Atomic SubSystem: '<S129>/I-Term Preload' */

      /* S-Function Block: <S216>/motohawk_interpolation_1d4 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d4_m = TableInterpolation1D_real_T
          (BaseEngineController_A02_bak2_B.s353_RPMAccel17Idx, (real_T *)
           ((MaxGovPreloadITermTbl_DataStore())), 17);
        (MaxGovPreloadITerm_DataStore()) = rtb_motohawk_interpolation_1d4_m;
      }

      /* Sum: '<S216>/Sum' incorporates:
       *  S-Function (motohawk_sfun_interpolation_1d): '<S216>/motohawk_interpolation_1d4'
       */
      BaseEngineController_A02_bak2_B.s216_Sum =
        BaseEngineController_A02_bak2_B.s129_Sum -
        rtb_motohawk_interpolation_1d4_m;

      /* End of Outputs for SubSystem: '<S129>/I-Term Preload' */

      /* Switch: '<S230>/Switch1' incorporates:
       *  DataTypeConversion: '<S230>/Data Type Conversion'
       *  UnitDelay: '<S230>/Unit Delay'
       */
      if (BaseEngineController_A02_bak2_B.s217_DataTypeConversion != 0) {
        BaseEngineController_A02_bak2_B.s230_Switch1 =
          BaseEngineController_A02_bak2_B.s216_Sum;
      } else {
        BaseEngineController_A02_bak2_B.s230_Switch1 =
          BaseEngineController_A02_bak2_DWork.s230_UnitDelay_DSTATE;
      }

      /* End of Switch: '<S230>/Switch1' */

      /* Switch: '<S220>/Switch' incorporates:
       *  Constant: '<S220>/Constant'
       */
      if (BaseEngineController_A02_bak2_B.s217_DataTypeConversion >= 1) {
        BaseEngineController_A02_bak2_B.s220_Switch = 0.0;
      } else {
        /* MinMax: '<S227>/MinMax' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S220>/motohawk_calibration9'
         *  Sum: '<S228>/Sum1'
         */
        rtb_Reset = (BaseEngineController_A02_bak2_B.s228_Product2 +
                     BaseEngineController_A02_bak2_B.s229_Product) +
          BaseEngineController_A02_bak2_B.s230_Switch1;
        rtb_Reset = (rtb_Reset >= (MaxGovPIDOutLowerLimit_DataStore())) ||
          rtIsNaN((MaxGovPIDOutLowerLimit_DataStore())) ? rtb_Reset :
          (MaxGovPIDOutLowerLimit_DataStore());

        /* MinMax: '<S227>/MinMax1' incorporates:
         *  MinMax: '<S227>/MinMax'
         *  S-Function (motohawk_sfun_calibration): '<S220>/motohawk_calibration2'
         */
        BaseEngineController_A02_bak2_B.s220_Switch = (rtb_Reset <=
          (MaxGovPIDOutUpperLimit_DataStore())) || rtIsNaN
          ((MaxGovPIDOutUpperLimit_DataStore())) ? rtb_Reset :
          (MaxGovPIDOutUpperLimit_DataStore());
      }

      /* End of Switch: '<S220>/Switch' */

      /* S-Function (motohawk_sfun_data_write): '<S217>/motohawk_data_write' */
      /* Write to Data Storage as scalar: MaxGov */
      {
        MaxGov_DataStore() = rtb_StateO;
      }

      /* Switch: '<S217>/Switch' incorporates:
       *  Constant: '<S217>/Constant1'
       *  Logic: '<S217>/Logical Operator4'
       *  S-Function (motohawk_sfun_calibration): '<S217>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_calibration): '<S217>/motohawk_calibration2'
       */
      if ((TwoStep_MaxGovDisable_DataStore()) &&
          BaseEngineController_A02_bak2_B.s528_Merge) {
        rtb_Switch_f = FALSE;
      } else {
        rtb_Switch_f = (MaxGovDisable_DataStore());
      }

      /* End of Switch: '<S217>/Switch' */

      /* MultiPortSwitch: '<S217>/Multiport Switch' incorporates:
       *  Constant: '<S217>/Constant'
       *  DataTypeConversion: '<S217>/Data Type Conversion2'
       */
      if (rtb_Switch_f == FALSE) {
        /* DataTypeConversion: '<S217>/Data Type Conversion2' */
        rtb_Reset = fmod((real_T)rtb_ETCMode, 256.0);
        BaseEngineController_A02_bak2_B.s217_MultiportSwitch = (((rtb_Reset <
          0.0 ? (int8_T)-(int8_T)(uint8_T)-rtb_Reset : (int8_T)(uint8_T)
          rtb_Reset) != 0));
      } else {
        BaseEngineController_A02_bak2_B.s217_MultiportSwitch = FALSE;
      }

      /* End of MultiPortSwitch: '<S217>/Multiport Switch' */

      /* S-Function Block: <S220>/motohawk_interpolation_1d4 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d4 = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1_j, (real_T *)
           ((MaxGovIGainErrorMultTbl_DataStore())), 9);
        (MaxGovIGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d4;
      }

      /* Product: '<S228>/Product1' incorporates:
       *  Product: '<S220>/Product5'
       *  S-Function (motohawk_sfun_calibration): '<S220>/motohawk_calibration4'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S220>/motohawk_interpolation_1d4'
       *  S-Function (motohawk_sfun_prelookup): '<S220>/motohawk_prelookup1'
       */
      rtb_Reset = (MaxGovIGain_DataStore()) * rtb_motohawk_interpolation_1d4 *
        rtb_alpha_e;

      /* S-Function Block: <S230>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_A02_bak2_DWork.s230_motohawk_delta_time_DWORK1,
           NULL);
        rtb_motohawk_delta_time_cp = ((real_T) delta) * 0.000001;
      }

      /* Sum: '<S230>/Sum' incorporates:
       *  Product: '<S230>/Product'
       *  S-Function (motohawk_sfun_delta_time): '<S230>/motohawk_delta_time'
       */
      rtb_alpha_e = rtb_Reset * rtb_motohawk_delta_time_cp +
        BaseEngineController_A02_bak2_B.s230_Switch1;

      /* MinMax: '<S232>/MinMax' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S220>/motohawk_calibration7'
       */
      rtb_Reset = (rtb_alpha_e >= (MaxGovITermLowerLimit_DataStore())) ||
        rtIsNaN((MaxGovITermLowerLimit_DataStore())) ? rtb_alpha_e :
        (MaxGovITermLowerLimit_DataStore());

      /* MinMax: '<S232>/MinMax1' incorporates:
       *  MinMax: '<S232>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S220>/motohawk_calibration8'
       */
      rtb_Reset = (rtb_Reset <= (MaxGovITermUpperLimit_DataStore())) || rtIsNaN
        ((MaxGovITermUpperLimit_DataStore())) ? rtb_Reset :
        (MaxGovITermUpperLimit_DataStore());

      /* Update for UnitDelay: '<S129>/Unit Delay' */
      BaseEngineController_A02_bak2_DWork.s129_UnitDelay_DSTATE =
        BaseEngineController_A02_bak2_B.s217_MultiportSwitch;

      /* Update for UnitDelay: '<S218>/Unit Delay' */
      BaseEngineController_A02_bak2_DWork.s218_UnitDelay_DSTATE =
        BaseEngineController_A02_bak2_B.s218_DontallowsetpointtoevergoabovetheTargetRPM;

      /* Update for UnitDelay: '<S229>/Unit Delay' */
      BaseEngineController_A02_bak2_DWork.s229_UnitDelay_DSTATE = rtb_Merge_d;

      /* Update for UnitDelay: '<S230>/Unit Delay' incorporates:
       *  MinMax: '<S232>/MinMax1'
       */
      BaseEngineController_A02_bak2_DWork.s230_UnitDelay_DSTATE = rtb_Reset;
    }

    /* Output and update for function-call system: '<S112>/Spark Manager' */
    {
      /* local block i/o variables */
      real_T rtb_RichEquivRatioTargetDelta;
      real_T rtb_motohawk_interpolation_1d;
      real_T rtb_RichEquivRatioTargetDelta_o;
      real_T rtb_motohawk_interpolation_1d1_i;
      real_T rtb_RichEquivRatioTargetDelta_h;
      real_T rtb_motohawk_interpolation_1d_n;
      real_T rtb_RichEquivRatioTargetDelta_e;
      real_T rtb_motohawk_interpolation_1d4_l;
      index_T rtb_motohawk_prelookup;
      real_T rtb_Product_ce;
      real_T rtb_Switch1_b;

      /* S-Function Block: <S132>/motohawk_interpolation_2d2 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_RichEquivRatioTargetDelta = TableInterpolation2D_real_T
          (BaseEngineController_A02_bak2_B.s433_motohawk_prelookup4,
           BaseEngineController_A02_bak2_B.s392_Indexes, (real_T *)
           ((SparkAdvMap_DataStore())), 17, 17);
        (SparkAdv_DataStore()) = rtb_RichEquivRatioTargetDelta;
      }

      /* S-Function Block: <S292>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d = TableInterpolation1D_real_T
          (BaseEngineController_A02_bak2_B.s390_motohawk_prelookup, (real_T *)
           ((ECT_SpkOfstTbl_DataStore())), 5);
        (ECT_SpkOfst_DataStore()) = rtb_motohawk_interpolation_1d;
      }

      /* S-Function Block: <S292>/motohawk_interpolation_2d3 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_RichEquivRatioTargetDelta_o = TableInterpolation2D_real_T
          (BaseEngineController_A02_bak2_B.s433_motohawk_prelookup1,
           BaseEngineController_A02_bak2_B.s392_motohawk_prelookup1, (real_T *)
           ((ECT_SpkOfstMultMap_DataStore())), 9, 9);
        (ECT_SpkOfstMult_DataStore()) = rtb_RichEquivRatioTargetDelta_o;
      }

      /* Product: '<S292>/Product' incorporates:
       *  S-Function (motohawk_sfun_interpolation_1d): '<S292>/motohawk_interpolation_1d'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S292>/motohawk_interpolation_2d3'
       */
      rtb_Product_ce = rtb_motohawk_interpolation_1d *
        rtb_RichEquivRatioTargetDelta_o;

      /* S-Function Block: <S292>/motohawk_interpolation_1d1 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d1_i = TableInterpolation1D_real_T
          (BaseEngineController_A02_bak2_B.s391_motohawk_prelookup, (real_T *)
           ((IAT_SpkOfstTbl_DataStore())), 5);
        (IAT_SpkOfst_DataStore()) = rtb_motohawk_interpolation_1d1_i;
      }

      /* S-Function Block: <S292>/motohawk_interpolation_2d1 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_RichEquivRatioTargetDelta_h = TableInterpolation2D_real_T
          (BaseEngineController_A02_bak2_B.s433_motohawk_prelookup1,
           BaseEngineController_A02_bak2_B.s392_motohawk_prelookup1, (real_T *)
           ((IAT_SpkOfstMultMap_DataStore())), 9, 9);
        (IAT_SpkOfstMult_DataStore()) = rtb_RichEquivRatioTargetDelta_h;
      }

      /* Sum: '<S292>/Add' incorporates:
       *  Product: '<S292>/Product1'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S292>/motohawk_interpolation_1d1'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S292>/motohawk_interpolation_2d1'
       */
      BaseEngineController_A02_bak2_B.s292_Add =
        rtb_motohawk_interpolation_1d1_i * rtb_RichEquivRatioTargetDelta_h +
        rtb_Product_ce;

      /* S-Function Block: <S289>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (EthanolPreLookupIn_DataStore()) =
          BaseEngineController_A02_bak2_B.s562_Merge;
        (EthanolPreLookupIdx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_A02_bak2_B.s562_Merge,
           (EthanolPreLookupIdxArr_DataStore()), 11,
           (EthanolPreLookupIdx_DataStore()));
        rtb_motohawk_prelookup = (EthanolPreLookupIdx_DataStore());
      }

      /* S-Function Block: <S289>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d_n = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup, (real_T *)
           ((EthanolInterpolationTbl_DataStore())), 11);
        (EthanolInterpolation_DataStore()) = rtb_motohawk_interpolation_1d_n;
      }

      /* S-Function Block: <S289>/motohawk_interpolation_2d3 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_RichEquivRatioTargetDelta_e = TableInterpolation2D_real_T
          (BaseEngineController_A02_bak2_B.s433_motohawk_prelookup1,
           BaseEngineController_A02_bak2_B.s392_motohawk_prelookup1, (real_T *)
           ((Ethanol_SpkOfstMultMap_DataStore())), 9, 9);
        (Ethanol_SpkOfstMult_DataStore()) = rtb_RichEquivRatioTargetDelta_e;
      }

      /* Product: '<S289>/Product' incorporates:
       *  S-Function (motohawk_sfun_interpolation_1d): '<S289>/motohawk_interpolation_1d'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S289>/motohawk_interpolation_2d3'
       *  S-Function (motohawk_sfun_prelookup): '<S289>/motohawk_prelookup'
       */
      BaseEngineController_A02_bak2_B.s289_Product =
        rtb_motohawk_interpolation_1d_n * rtb_RichEquivRatioTargetDelta_e;

      /* Sum: '<S132>/Apply Offsets to Base Spark Advance1' incorporates:
       *  S-Function (motohawk_sfun_interpolation_2d): '<S132>/motohawk_interpolation_2d2'
       *  Sum: '<S132>/Apply Offsets to Base Spark Advance3'
       */
      BaseEngineController_A02_bak2_B.s132_ApplyOffsetstoBaseSparkAdvance1 =
        ((rtb_RichEquivRatioTargetDelta +
          BaseEngineController_A02_bak2_B.s292_Add) +
         BaseEngineController_A02_bak2_B.s289_Product) +
        BaseEngineController_A02_bak2_B.s130_IdleSpk;

      /* MinMax: '<S295>/MinMax' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S291>/motohawk_calibration5'
       */
      rtb_Product_ce =
        (BaseEngineController_A02_bak2_B.s132_ApplyOffsetstoBaseSparkAdvance1 >=
         (MinSparkLimit_DataStore())) || rtIsNaN((MinSparkLimit_DataStore())) ?
        BaseEngineController_A02_bak2_B.s132_ApplyOffsetstoBaseSparkAdvance1 :
        (MinSparkLimit_DataStore());

      /* Switch: '<S291>/Switch1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S291>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S291>/motohawk_interpolation_1d4'
       */
      if (BaseEngineController_A02_bak2_B.s253_RelOp) {
        /* S-Function Block: <S291>/motohawk_interpolation_1d4 */
        {
          extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T
            *tbl_data, uint32_T sz);
          rtb_motohawk_interpolation_1d4_l = TableInterpolation1D_real_T
            (BaseEngineController_A02_bak2_B.s433_motohawk_prelookup1, (real_T *)
             ((MaxSparkLimitTbl_DataStore())), 9);
          (MaxSparkLimit_DataStore()) = rtb_motohawk_interpolation_1d4_l;
        }

        rtb_Switch1_b = rtb_motohawk_interpolation_1d4_l;
      } else {
        rtb_Switch1_b = (MaxSparkLimitOffIdle_DataStore());
      }

      /* End of Switch: '<S291>/Switch1' */

      /* MinMax: '<S295>/MinMax1' incorporates:
       *  MinMax: '<S295>/MinMax'
       */
      BaseEngineController_A02_bak2_B.s295_MinMax1 = (rtb_Product_ce <=
        rtb_Switch1_b) || rtIsNaN(rtb_Switch1_b) ? rtb_Product_ce :
        rtb_Switch1_b;

      /* UnitDelay: '<S290>/Unit Delay' */
      rtb_Product_ce = BaseEngineController_A02_bak2_DWork.s290_UnitDelay_DSTATE;

      /* Switch: '<S290>/Switch' incorporates:
       *  UnitDelay: '<S293>/Initial Condition is True'
       */
      if (BaseEngineController_A02_bak2_DWork.s293_InitialConditionisTrue_DSTATE)
      {
        BaseEngineController_A02_bak2_B.s290_Switch =
          BaseEngineController_A02_bak2_B.s295_MinMax1;
      } else {
        /* Sum: '<S290>/Sum' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S290>/motohawk_calibration'
         */
        rtb_Switch1_b = rtb_Product_ce + (SparkAdv_DeltaHi_DataStore());

        /* MinMax: '<S294>/MinMax' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S290>/motohawk_calibration1'
         *  Sum: '<S290>/Sum1'
         */
        rtb_Product_ce -= (SparkAdv_DeltaLo_DataStore());

        /* MinMax: '<S294>/MinMax1' incorporates:
         *  MinMax: '<S294>/MinMax'
         */
        rtb_Product_ce = (BaseEngineController_A02_bak2_B.s295_MinMax1 >=
                          rtb_Product_ce) || rtIsNaN(rtb_Product_ce) ?
          BaseEngineController_A02_bak2_B.s295_MinMax1 : rtb_Product_ce;
        BaseEngineController_A02_bak2_B.s290_Switch = (rtb_Product_ce <=
          rtb_Switch1_b) || rtIsNaN(rtb_Switch1_b) ? rtb_Product_ce :
          rtb_Switch1_b;
      }

      /* End of Switch: '<S290>/Switch' */

      /* S-Function Block: <S132>/motohawk_interpolation_2d1 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        BaseEngineController_A02_bak2_B.s132_motohawk_interpolation_2d1 =
          TableInterpolation2D_real_T
          (BaseEngineController_A02_bak2_B.s433_motohawk_prelookup1,
           BaseEngineController_A02_bak2_B.s392_motohawk_prelookup1, (real_T *)
           ((BaseSparkEnergyMap_DataStore())), 9, 9);
        (BaseSparkEnergy_DataStore()) =
          BaseEngineController_A02_bak2_B.s132_motohawk_interpolation_2d1;
      }

      /* Update for UnitDelay: '<S293>/Initial Condition is True' incorporates:
       *  Constant: '<S293>/False After First Sample'
       */
      BaseEngineController_A02_bak2_DWork.s293_InitialConditionisTrue_DSTATE =
        FALSE;

      /* Update for UnitDelay: '<S290>/Unit Delay' */
      BaseEngineController_A02_bak2_DWork.s290_UnitDelay_DSTATE =
        BaseEngineController_A02_bak2_B.s290_Switch;
    }
  }
}
