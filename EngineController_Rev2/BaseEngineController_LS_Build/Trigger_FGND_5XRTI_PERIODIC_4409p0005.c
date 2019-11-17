/*
 * Trigger_FGND_5XRTI_PERIODIC_4409p0005.c
 *
 * Code generation for model "BaseEngineController_LS.mdl".
 *
 * Model version              : 1.1767
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Sun Nov 17 02:36:28 2019
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_LS.h"
#include "BaseEngineController_LS_private.h"

void Trigger_FGND_5XRTI_PERIODIC_4409p0005(void)
{
  /* Named constants for Stateflow: '<S791>/ECUP Latch' */
#define BaseEngineController_LS_IN_PowerDown (1U)
#define BaseEngineController_LS_IN_PowerUp (2U)

  if (BaseEngineController_LS_DWork.s119_motohawk_trigger1_DWORK1) {
    /* Output and update for function-call system: '<S119>/MinGovernor' */
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

      /* Sum: '<S239>/Sum2' incorporates:
       *  UnitDelay: '<S239>/Unit Delay'
       */
      rtb_Sum2_g = BaseEngineController_LS_B.s403_RPMInst -
        BaseEngineController_LS_DWork.s239_UnitDelay_DSTATE;

      /* S-Function Block: <S239>/motohawk_delta_time */
      rtb_motohawk_delta_time_h = 0.005;

      /* Product: '<S239>/Product' incorporates:
       *  S-Function (motohawk_sfun_delta_time): '<S239>/motohawk_delta_time'
       */
      rtb_Sum2_g /= rtb_motohawk_delta_time_h;

      /* S-Function Block: <S240>/motohawk_delta_time */
      rtb_Switch_e = 0.005;

      /* Product: '<S240>/Product' incorporates:
       *  MinMax: '<S240>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S240>/motohawk_calibration'
       */
      rtb_Switch_e /= (rtb_Switch_e >= (RPMFallingFiltConst_DataStore())) ||
        rtIsNaN((RPMFallingFiltConst_DataStore())) ? rtb_Switch_e :
        (RPMFallingFiltConst_DataStore());

      /* Sum: '<S241>/Sum1' incorporates:
       *  Constant: '<S241>/Constant'
       *  Product: '<S241>/Product'
       *  Product: '<S241>/Product1'
       *  Sum: '<S241>/Sum'
       *  UnitDelay: '<S241>/Unit Delay'
       */
      rtb_Sum1_f = (1.0 - rtb_Switch_e) *
        BaseEngineController_LS_DWork.s241_UnitDelay_DSTATE + rtb_Sum2_g *
        rtb_Switch_e;

      /* RelationalOperator: '<S235>/Relational Operator' incorporates:
       *  Gain: '<S235>/Falling RPM is Negative Derivative'
       *  S-Function (motohawk_sfun_calibration): '<S235>/motohawk_calibration'
       */
      BaseEngineController_LS_B.s235_RelationalOperator = ((rtb_Sum1_f <
        -(RPMFallingRate_DataStore())));

      /* Outputs for Atomic SubSystem: '<S136>/Base RPM Set Pt' */

      /* S-Function Block: <S219>/motohawk_interpolation_1d2 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d2_i = TableInterpolation1D_real_T
          (BaseEngineController_LS_B.s357_motohawk_prelookup, (real_T *)
           ((MinGovClntRPMSetPtTbl_DataStore())), 5);
        (MinGovClntRPMSetPt_DataStore()) = rtb_motohawk_interpolation_1d2_i;
      }

      /* End of Outputs for SubSystem: '<S136>/Base RPM Set Pt' */

      /* RelationalOperator: '<S221>/Relational Operator' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S221>/motohawk_calibration4'
       *  Sum: '<S221>/Sum'
       */
      BaseEngineController_LS_B.s221_RelationalOperator =
        ((BaseEngineController_LS_B.s403_RPMInst <
          (InGearMinGovEntryRPMDelta_DataStore()) +
          rtb_motohawk_interpolation_1d2_i));

      /* RelationalOperator: '<S221>/Relational Operator3' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S221>/motohawk_calibration6'
       *  Sum: '<S221>/Sum2'
       */
      BaseEngineController_LS_B.s221_RelationalOperator3 =
        ((BaseEngineController_LS_B.s403_RPMInst <
          rtb_motohawk_interpolation_1d2_i - (StallSaverDeltaRPM_DataStore())));

      /* MultiPortSwitch: '<S221>/Multiport Switch1' incorporates:
       *  S-Function (motohawk_sfun_data_read): '<S221>/motohawk_data_read1'
       */
      if (AirControlSource_DataStore() == FALSE) {
        rtb_Switch_e = BaseEngineController_LS_B.s368_Switch1;
      } else {
        rtb_Switch_e = BaseEngineController_LS_B.s374_Switch2;
      }

      /* End of MultiPortSwitch: '<S221>/Multiport Switch1' */
      /* RelationalOperator: '<S221>/Relational Operator1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S221>/motohawk_calibration5'
       */
      BaseEngineController_LS_B.s221_RelationalOperator1 = ((rtb_Switch_e <
        (MinGovEntryAirPcnt_DataStore())));

      /* MultiPortSwitch: '<S221>/Multiport Switch' incorporates:
       *  Constant: '<S221>/Constant'
       *  RelationalOperator: '<S221>/Relational Operator4'
       *  S-Function (motohawk_sfun_data_read): '<S221>/motohawk_data_read1'
       *  UnitDelay: '<S136>/Unit Delay3'
       */
      if (AirControlSource_DataStore() == FALSE) {
        rtb_RelOp_j = (BaseEngineController_LS_B.s381_Sum2 >
                       BaseEngineController_LS_DWork.s136_UnitDelay3_DSTATE);
      } else {
        rtb_RelOp_j = TRUE;
      }

      /* End of MultiPortSwitch: '<S221>/Multiport Switch' */

      /* Logic: '<S221>/Logical Operator' incorporates:
       *  RelationalOperator: '<S221>/Relational Operator2'
       *  S-Function (motohawk_sfun_calibration): '<S221>/motohawk_calibration3'
       *  S-Function (motohawk_sfun_calibration): '<S221>/motohawk_calibration5'
       *  Sum: '<S221>/Sum1'
       */
      BaseEngineController_LS_B.s221_LogicalOperator = (((rtb_Switch_e >=
        (MinGovEntryAirPcnt_DataStore()) + (MinGovAirPcntHyst_DataStore())) &&
        rtb_RelOp_j));

      /* S-Function Block: <S238>/motohawk_delta_time */
      rtb_motohawk_delta_time_d = 0.005;

      /* Switch: '<S238>/Switch' incorporates:
       *  Constant: '<S238>/Constant'
       *  S-Function (motohawk_sfun_data_read): '<S238>/motohawk_data_read'
       *  S-Function (motohawk_sfun_delta_time): '<S238>/motohawk_delta_time'
       *  Sum: '<S238>/Sum'
       */
      if (BaseEngineController_LS_B.s221_RelationalOperator1) {
        rtb_Switch_e = rtb_motohawk_delta_time_d + IdleEnterTimer_DataStore();
      } else {
        rtb_Switch_e = 0.0;
      }

      /* End of Switch: '<S238>/Switch' */
      /* RelationalOperator: '<S221>/Relational Operator5' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S221>/motohawk_calibration2'
       */
      BaseEngineController_LS_B.s221_RelationalOperator5 = ((rtb_Switch_e >
        (MinGovEntryAirTimeThresh_DataStore())));

      /* Stateflow: '<S221>/IdleStateMachine' */
      BaseEngineController_LS_IdleStateMachine();

      /* RelationalOperator: '<S237>/RelOp' incorporates:
       *  Constant: '<S237>/Constant'
       */
      BaseEngineController_LS_B.s237_RelOp =
        ((BaseEngineController_LS_B.s236_IdleState == 2));

      /* UnitDelay: '<S136>/Unit Delay1' */
      rtb_UnitDelay1_j = BaseEngineController_LS_DWork.s136_UnitDelay1_DSTATE;

      /* Outputs for Enabled SubSystem: '<S136>/Base Airflow Table Adapt' incorporates:
       *  EnablePort: '<S218>/Enable'
       */
      if (BaseEngineController_LS_B.s237_RelOp) {
        /* Product: '<S218>/Product0' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S218>/motohawk_calibration2'
         */
        rtb_Sum2_g = rtb_UnitDelay1_j * (BaseAirflowAdaptGain_DataStore());

        /* MinMax: '<S233>/MinMax' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S231>/motohawk_calibration'
         */
        rtb_Sum2_g = (rtb_Sum2_g >= (BaseAirflowAdaptErrorLwrLim_DataStore())) ||
          rtIsNaN((BaseAirflowAdaptErrorLwrLim_DataStore())) ? rtb_Sum2_g :
          (BaseAirflowAdaptErrorLwrLim_DataStore());

        /* MinMax: '<S233>/MinMax1' incorporates:
         *  MinMax: '<S233>/MinMax'
         *  S-Function (motohawk_sfun_calibration): '<S231>/motohawk_calibration1'
         */
        rtb_MinMax1_a = (rtb_Sum2_g <= (BaseAirflowAdaptErrorUprLim_DataStore()))
          || rtIsNaN((BaseAirflowAdaptErrorUprLim_DataStore())) ? rtb_Sum2_g :
          (BaseAirflowAdaptErrorUprLim_DataStore());

        /* Outputs for Atomic SubSystem: '<S218>/Idle Control Enable Delay' */

        /* S-Function Block: <S232>/motohawk_delta_time */
        rtb_motohawk_delta_time_e = 0.005;

        /* Switch: '<S232>/Switch' incorporates:
         *  Constant: '<S232>/Constant'
         *  S-Function (motohawk_sfun_data_read): '<S232>/motohawk_data_read'
         *  S-Function (motohawk_sfun_delta_time): '<S232>/motohawk_delta_time'
         *  Sum: '<S232>/Sum'
         */
        if (BaseEngineController_LS_B.s237_RelOp) {
          rtb_Sum2_g = rtb_motohawk_delta_time_e + BaseAirflowTimer_DataStore();
        } else {
          rtb_Sum2_g = 0.0;
        }

        /* End of Switch: '<S232>/Switch' */
        /* RelationalOperator: '<S230>/Relational Operator' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S230>/motohawk_calibration1'
         */
        rtb_RelOp_j = (rtb_Sum2_g > (BaseAirflowAdaptDelayTime_DataStore()));

        /* Saturate: '<S232>/Saturation' */
        rtb_Saturation_cl = rtb_Sum2_g >= 16000.0 ? 16000.0 : rtb_Sum2_g <= 0.0 ?
          0.0 : rtb_Sum2_g;

        /* S-Function (motohawk_sfun_data_write): '<S232>/motohawk_data_write' */
        /* Write to Data Storage as scalar: BaseAirflowTimer */
        {
          BaseAirflowTimer_DataStore() = rtb_Saturation_cl;
        }

        /* End of Outputs for SubSystem: '<S218>/Idle Control Enable Delay' */

        /* Logic: '<S218>/Logical Operator1' incorporates:
         *  Abs: '<S218>/Abs'
         *  RelationalOperator: '<S218>/Relational Operator'
         *  S-Function (motohawk_sfun_calibration): '<S218>/motohawk_calibration3'
         *  S-Function (motohawk_sfun_calibration): '<S218>/motohawk_calibration4'
         */
        BaseEngineController_LS_B.s218_LogicalOperator1 =
          (((BaseAirflowAdaptEnable_DataStore()) && rtb_RelOp_j && (fabs
             (rtb_UnitDelay1_j) <= (BaseAirflowAdaptDelta_DataStore()))));

        /* Outputs for Enabled SubSystem: '<S218>/Adapt Base Airflow Table' incorporates:
         *  EnablePort: '<S229>/Enable'
         */
        if (BaseEngineController_LS_B.s218_LogicalOperator1) {
          /* S-Function Block: <S229>/motohawk_adapt_table */
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

        /* End of Outputs for SubSystem: '<S218>/Adapt Base Airflow Table' */
      }

      /* End of Outputs for SubSystem: '<S136>/Base Airflow Table Adapt' */
      /* S-Function Block: <S220>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s220_motohawk_delta_time_DWORK1, NULL);
        rtb_motohawk_delta_time_c = ((real_T) delta) * 0.000001;
      }

      /* MultiPortSwitch: '<S220>/Multiport Switch' incorporates:
       *  Gain: '<S220>/Ramp Down'
       *  Product: '<S220>/Product'
       *  Product: '<S220>/Product1'
       *  S-Function (motohawk_sfun_delta_time): '<S220>/motohawk_delta_time'
       */
      if (BaseEngineController_LS_B.s237_RelOp == FALSE) {
        /* Switch: '<S220>/Switch' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S136>/motohawk_calibration3'
         *  S-Function (motohawk_sfun_delta_time): '<S220>/motohawk_delta_time'
         */
        if ((IdleExitTimeConst_DataStore()) > 0.0) {
          rtb_Sum2_g = (IdleExitTimeConst_DataStore());
        } else {
          rtb_Sum2_g = rtb_motohawk_delta_time_c;
        }

        /* End of Switch: '<S220>/Switch' */
        rtb_Product5 = rtb_motohawk_delta_time_c / rtb_Sum2_g * -1.0;
      } else {
        rtb_Product5 = rtb_motohawk_delta_time_c / rtb_motohawk_delta_time_c;
      }

      /* End of MultiPortSwitch: '<S220>/Multiport Switch' */

      /* Sum: '<S220>/Sum' incorporates:
       *  UnitDelay: '<S220>/state'
       */
      rtb_Product5 += BaseEngineController_LS_DWork.s220_state_DSTATE;

      /* MinMax: '<S234>/MinMax1' incorporates:
       *  Constant: '<S220>/Constant'
       *  Constant: '<S220>/Constant1'
       *  MinMax: '<S234>/MinMax'
       */
      rtb_Sum2_g = rtb_Product5 >= 0.0 ? rtb_Product5 : 0.0;
      BaseEngineController_LS_B.s234_MinMax1 = rtb_Sum2_g <= 1.0 ? rtb_Sum2_g :
        1.0;

      /* RelationalOperator: '<S223>/RelOp' incorporates:
       *  Constant: '<S223>/Constant'
       */
      rtb_RelOp_j = (BaseEngineController_LS_B.s234_MinMax1 == 0.0);

      /* UnitDelay: '<S136>/Unit Delay2' */
      rtb_Sum2_g = BaseEngineController_LS_DWork.s136_UnitDelay2_DSTATE;

      /* HitCross: '<S136>/Hit  Crossing1' incorporates:
       *  UnitDelay: '<S136>/Unit Delay2'
       */
      zcEvent = rt_ZCFcn(FALLING_ZERO_CROSSING,
                         &BaseEngineController_LS_PrevZCSigState.HitCrossing1_Input_ZCE,
                         (BaseEngineController_LS_DWork.s136_UnitDelay2_DSTATE -
                          0.5));
      if (BaseEngineController_LS_DWork.s136_HitCrossing1_MODE == 0) {
        if (zcEvent != NO_ZCEVENT) {
          BaseEngineController_LS_B.s136_HitCrossing1 =
            !BaseEngineController_LS_B.s136_HitCrossing1;
          BaseEngineController_LS_DWork.s136_HitCrossing1_MODE = 1;
        } else {
          if (BaseEngineController_LS_B.s136_HitCrossing1 && (rtb_Sum2_g != 0.5))
          {
            BaseEngineController_LS_B.s136_HitCrossing1 = FALSE;
          }
        }
      } else {
        if (rtb_Sum2_g != 0.5) {
          BaseEngineController_LS_B.s136_HitCrossing1 = FALSE;
        }

        BaseEngineController_LS_DWork.s136_HitCrossing1_MODE = 0;
      }

      /* End of HitCross: '<S136>/Hit  Crossing1' */

      /* Logic: '<S136>/Logical Operator' */
      BaseEngineController_LS_B.s136_LogicalOperator = ((rtb_RelOp_j ||
        BaseEngineController_LS_B.s136_HitCrossing1));

      /* Logic: '<S224>/Logical Operator' */
      rtb_LogicalOperator_i = !BaseEngineController_LS_B.s237_RelOp;

      /* S-Function Block: <S224>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s224_motohawk_delta_time_DWORK1, NULL);
        rtb_motohawk_delta_time_b = ((real_T) delta) * 0.000001;
      }

      /* UnitDelay: '<S224>/Unit Delay' */
      rtb_Sum2_g = BaseEngineController_LS_DWork.s224_UnitDelay_DSTATE;

      /* Switch: '<S224>/Preload lowpass filter with current RPM while not on Idle' incorporates:
       *  Constant: '<S224>/Constant'
       *  Product: '<S224>/Product2'
       *  Product: '<S224>/Product3'
       *  Sum: '<S224>/Sum'
       *  Sum: '<S224>/Sum1'
       */
      if (rtb_LogicalOperator_i) {
        rtb_Product5 = BaseEngineController_LS_B.s403_RPMInst;
      } else {
        /* Product: '<S224>/Product1' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S224>/motohawk_calibration2'
         *  S-Function (motohawk_sfun_delta_time): '<S224>/motohawk_delta_time'
         */
        rtb_UnitDelay1_j = rtb_motohawk_delta_time_b /
          (InGearRPMCtrlEntryFiltC_DataStore());
        rtb_Product5 = (1.0 - rtb_UnitDelay1_j) * rtb_Sum2_g +
          rtb_motohawk_interpolation_1d2_i * rtb_UnitDelay1_j;
      }

      /* End of Switch: '<S224>/Preload lowpass filter with current RPM while not on Idle' */

      /* MinMax: '<S224>/Don't allow setpoint to ever drop below the TargetRPM' */
      BaseEngineController_LS_B.s224_DontallowsetpointtoeverdropbelowtheTargetRPM
        = (rtb_motohawk_interpolation_1d2_i >= rtb_Product5) || rtIsNaN
        (rtb_Product5) ? rtb_motohawk_interpolation_1d2_i : rtb_Product5;

      /* Sum: '<S250>/Sum2' */
      BaseEngineController_LS_B.s250_Sum2 =
        BaseEngineController_LS_B.s224_DontallowsetpointtoeverdropbelowtheTargetRPM
        - BaseEngineController_LS_B.s459_Sum1;

      /* Product: '<S250>/Product5' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S226>/motohawk_calibration5'
       */
      rtb_Product5 = BaseEngineController_LS_B.s250_Sum2 *
        (AirMinGovErrorGain_DataStore());

      /* S-Function Block: <S226>/motohawk_prelookup1 */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (AirMinGovSpeedErrorIn_DataStore()) =
          BaseEngineController_LS_B.s250_Sum2;
        (AirMinGovSpeedErrorIdx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_LS_B.s250_Sum2,
           (AirMinGovSpeedErrorIdxArr_DataStore()), 9,
           (AirMinGovSpeedErrorIdx_DataStore()));
        rtb_motohawk_prelookup1 = (AirMinGovSpeedErrorIdx_DataStore());
      }

      /* S-Function Block: <S248>/motohawk_interpolation_1d2 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d2 = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1, (real_T *)
           ((AirMinGovPGainErrorMultTbl_DataStore())), 9);
        (AirMinGovPGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d2;
      }

      /* Product: '<S250>/Product2' incorporates:
       *  Product: '<S248>/Product2'
       *  S-Function (motohawk_sfun_calibration): '<S248>/motohawk_calibration3'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S248>/motohawk_interpolation_1d2'
       *  S-Function (motohawk_sfun_prelookup): '<S226>/motohawk_prelookup1'
       */
      BaseEngineController_LS_B.s250_Product2 = (AirMinGovPGain_DataStore()) *
        rtb_motohawk_interpolation_1d2 * rtb_Product5;

      /* UnitDelay: '<S251>/Unit Delay' */
      rtb_Sum2_g = BaseEngineController_LS_DWork.s251_UnitDelay_DSTATE;

      /* S-Function Block: <S248>/motohawk_interpolation_1d3 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d3 = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1, (real_T *)
           ((AirMinGovDGainErrorMultTbl_DataStore())), 9);
        (AirMinGovDGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d3;
      }

      /* Product: '<S250>/Product4' incorporates:
       *  Product: '<S248>/Product3'
       *  S-Function (motohawk_sfun_calibration): '<S248>/motohawk_calibration2'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S248>/motohawk_interpolation_1d3'
       *  S-Function (motohawk_sfun_prelookup): '<S226>/motohawk_prelookup1'
       */
      rtb_Product4 = (AirMinGovDGain_DataStore()) *
        rtb_motohawk_interpolation_1d3 * rtb_Product5;

      /* S-Function Block: <S251>/motohawk_delta_time */
      rtb_motohawk_delta_time_bi = 0.005;

      /* Product: '<S251>/Product' incorporates:
       *  S-Function (motohawk_sfun_delta_time): '<S251>/motohawk_delta_time'
       *  Sum: '<S251>/Sum2'
       */
      BaseEngineController_LS_B.s251_Product = (rtb_Product4 - rtb_Sum2_g) /
        rtb_motohawk_delta_time_bi;

      /* Switch: '<S252>/Switch1' incorporates:
       *  Constant: '<S226>/Constant'
       *  UnitDelay: '<S252>/Unit Delay'
       */
      if (BaseEngineController_LS_B.s136_LogicalOperator) {
        BaseEngineController_LS_B.s252_Switch1 = 0.0;
      } else {
        BaseEngineController_LS_B.s252_Switch1 =
          BaseEngineController_LS_DWork.s252_UnitDelay_DSTATE;
      }

      /* End of Switch: '<S252>/Switch1' */

      /* Switch: '<S226>/Switch' incorporates:
       *  Constant: '<S226>/Constant1'
       */
      if (BaseEngineController_LS_B.s136_LogicalOperator) {
        rtb_UnitDelay1_j = 0.0;
      } else {
        /* MinMax: '<S249>/MinMax' incorporates:
         *  Sum: '<S250>/Sum1'
         */
        rtb_Sum2_g = (BaseEngineController_LS_B.s250_Product2 +
                      BaseEngineController_LS_B.s251_Product) +
          BaseEngineController_LS_B.s252_Switch1;

        /* MinMax: '<S249>/MinMax1' incorporates:
         *  MinMax: '<S249>/MinMax'
         *  S-Function (motohawk_sfun_calibration): '<S226>/motohawk_calibration2'
         *  S-Function (motohawk_sfun_calibration): '<S226>/motohawk_calibration9'
         */
        rtb_Sum2_g = (rtb_Sum2_g >= (AirMinGovPIDOutLowerLimit_DataStore())) ||
          rtIsNaN((AirMinGovPIDOutLowerLimit_DataStore())) ? rtb_Sum2_g :
          (AirMinGovPIDOutLowerLimit_DataStore());
        rtb_UnitDelay1_j = (rtb_Sum2_g <= (AirMinGovPIDOutUpperLimit_DataStore()))
          || rtIsNaN((AirMinGovPIDOutUpperLimit_DataStore())) ? rtb_Sum2_g :
          (AirMinGovPIDOutUpperLimit_DataStore());
      }

      /* End of Switch: '<S226>/Switch' */

      /* Product: '<S136>/Product1' */
      BaseEngineController_LS_B.s136_MinGovAirPID =
        BaseEngineController_LS_B.s234_MinMax1 * rtb_UnitDelay1_j;

      /* Sum: '<S245>/Sum1' */
      BaseEngineController_LS_B.s245_Sum1 =
        BaseEngineController_LS_B.s224_DontallowsetpointtoeverdropbelowtheTargetRPM
        - BaseEngineController_LS_B.s459_Sum1;

      /* Product: '<S245>/Product4' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S225>/motohawk_calibration4'
       */
      rtb_UnitDelay1_j = BaseEngineController_LS_B.s245_Sum1 *
        (SpkMinGovErrorGain_DataStore());

      /* S-Function Block: <S225>/motohawk_prelookup1 */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (SpkMinGovSpeedErrorIn_DataStore()) =
          BaseEngineController_LS_B.s245_Sum1;
        (SpkMinGovSpeedErrorIdx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_LS_B.s245_Sum1,
           (SpkMinGovSpeedErrorIdxArr_DataStore()), 9,
           (SpkMinGovSpeedErrorIdx_DataStore()));
        rtb_motohawk_prelookup1_j = (SpkMinGovSpeedErrorIdx_DataStore());
      }

      /* S-Function Block: <S243>/motohawk_interpolation_1d2 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d2_f = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1_j, (real_T *)
           ((SpkMinGovPGainErrorMultTbl_DataStore())), 9);
        (SpkMinGovPGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d2_f;
      }

      /* Product: '<S245>/Product' incorporates:
       *  Product: '<S243>/Product2'
       *  S-Function (motohawk_sfun_calibration): '<S243>/motohawk_calibration3'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S243>/motohawk_interpolation_1d2'
       *  S-Function (motohawk_sfun_prelookup): '<S225>/motohawk_prelookup1'
       */
      BaseEngineController_LS_B.s245_Product = (SpkMinGovPGain_DataStore()) *
        rtb_motohawk_interpolation_1d2_f * rtb_UnitDelay1_j;

      /* UnitDelay: '<S246>/Unit Delay' */
      rtb_Sum2_g = BaseEngineController_LS_DWork.s246_UnitDelay_DSTATE;

      /* S-Function Block: <S243>/motohawk_interpolation_1d1 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d1 = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1_j, (real_T *)
           ((SpkMinGovDGainErrorMultTbl_DataStore())), 9);
        (SpkMinGovDGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d1;
      }

      /* Product: '<S245>/Product2' incorporates:
       *  Product: '<S243>/Product1'
       *  S-Function (motohawk_sfun_calibration): '<S243>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S243>/motohawk_interpolation_1d1'
       *  S-Function (motohawk_sfun_prelookup): '<S225>/motohawk_prelookup1'
       */
      rtb_Product2_j = (SpkMinGovDGain_DataStore()) *
        rtb_motohawk_interpolation_1d1 * rtb_UnitDelay1_j;

      /* S-Function Block: <S246>/motohawk_delta_time */
      rtb_motohawk_delta_time_n = 0.005;

      /* Product: '<S246>/Product' incorporates:
       *  S-Function (motohawk_sfun_delta_time): '<S246>/motohawk_delta_time'
       *  Sum: '<S246>/Sum2'
       */
      BaseEngineController_LS_B.s246_Product = (rtb_Product2_j - rtb_Sum2_g) /
        rtb_motohawk_delta_time_n;

      /* Switch: '<S225>/Switch' incorporates:
       *  Constant: '<S225>/Constant1'
       */
      if (rtb_RelOp_j) {
        rtb_UnitDelay1_j = 0.0;
      } else {
        /* MinMax: '<S244>/MinMax' incorporates:
         *  Sum: '<S245>/Sum'
         */
        rtb_Sum2_g = BaseEngineController_LS_B.s245_Product +
          BaseEngineController_LS_B.s246_Product;

        /* MinMax: '<S244>/MinMax1' incorporates:
         *  MinMax: '<S244>/MinMax'
         *  S-Function (motohawk_sfun_calibration): '<S225>/motohawk_calibration1'
         *  S-Function (motohawk_sfun_calibration): '<S225>/motohawk_calibration9'
         */
        rtb_Sum2_g = (rtb_Sum2_g >= (SpkMinGovPIDOutLowerLimit_DataStore())) ||
          rtIsNaN((SpkMinGovPIDOutLowerLimit_DataStore())) ? rtb_Sum2_g :
          (SpkMinGovPIDOutLowerLimit_DataStore());
        rtb_UnitDelay1_j = (rtb_Sum2_g <= (SpkMinGovPIDOutUpperLimit_DataStore()))
          || rtIsNaN((SpkMinGovPIDOutUpperLimit_DataStore())) ? rtb_Sum2_g :
          (SpkMinGovPIDOutUpperLimit_DataStore());
      }

      /* End of Switch: '<S225>/Switch' */

      /* Product: '<S136>/Product' */
      BaseEngineController_LS_B.s136_IdleSpk =
        BaseEngineController_LS_B.s234_MinMax1 * rtb_UnitDelay1_j;

      /* Outputs for Atomic SubSystem: '<S136>/AiflowOffset' */

      /* S-Function Block: <S217>/motohawk_interpolation_1d1 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d1_i = TableInterpolation1D_real_T
          (BaseEngineController_LS_B.s357_motohawk_prelookup, (real_T *)
           ((ACAirFlowOfstTbl_DataStore())), 5);
        (ACAirFlowOfst_DataStore()) = rtb_motohawk_interpolation_1d1_i;
      }

      /* Product: '<S217>/Product' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S217>/motohawk_calibration'
       */
      rtb_Sum2_g = (BaseEngineController_LS_B.s127_LogicalOperator ? (real_T)
                    ((uint8_T)(ACAirFlowOfst_Enab_DataStore())) : 0.0) *
        rtb_motohawk_interpolation_1d1_i;

      /* S-Function Block: <S217>/motohawk_interpolation_1d2 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d2_p = TableInterpolation1D_real_T
          (BaseEngineController_LS_B.s357_motohawk_prelookup, (real_T *)
           ((BaseAirflowOfstTbl_DataStore())), 5);
        (BaseAirflowOfst_DataStore()) = rtb_motohawk_interpolation_1d2_p;
      }

      /* Sum: '<S217>/Sum' incorporates:
       *  S-Function (motohawk_sfun_interpolation_1d): '<S217>/motohawk_interpolation_1d2'
       */
      rtb_Sum_e = rtb_Sum2_g + rtb_motohawk_interpolation_1d2_p;

      /* RelationalOperator: '<S228>/RelOp' incorporates:
       *  Constant: '<S228>/Constant'
       *  S-Function (motohawk_sfun_data_read): '<S217>/motohawk_data_read'
       */
      rtb_RelOp_j = (((uint8_T)EngineState_DataStore()) == 3);

      /* Logic: '<S217>/Logical Operator' incorporates:
       *  RelationalOperator: '<S217>/Relational Operator'
       *  RelationalOperator: '<S217>/Relational Operator1'
       *  UnitDelay: '<S217>/Unit Delay'
       */
      rtb_LogicalOperator_i = ((rtb_RelOp_j <
        BaseEngineController_LS_DWork.s217_UnitDelay_DSTATE) || (rtb_RelOp_j ==
        BaseEngineController_LS_DWork.s217_UnitDelay_DSTATE));

      /* S-Function Block: <S227>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s227_motohawk_delta_time_DWORK1, NULL);
        rtb_motohawk_delta_time_bc = ((real_T) delta) * 0.000001;
      }

      /* UnitDelay: '<S227>/Unit Delay' */
      rtb_Sum2_g = BaseEngineController_LS_DWork.s227_UnitDelay_DSTATE;

      /* Switch: '<S227>/Preload lowpass filter with current RPM while not on Idle' incorporates:
       *  Constant: '<S227>/Constant'
       *  Logic: '<S227>/Logical Operator'
       *  Product: '<S227>/Product2'
       *  Product: '<S227>/Product3'
       *  Sum: '<S227>/Sum'
       *  Sum: '<S227>/Sum1'
       */
      if (!rtb_LogicalOperator_i) {
        rtb_Sum2_g = BaseEngineController_LS_B.s374_Switch2;
      } else {
        /* Product: '<S227>/Product1' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S227>/motohawk_calibration2'
         *  S-Function (motohawk_sfun_delta_time): '<S227>/motohawk_delta_time'
         */
        rtb_UnitDelay1_j = rtb_motohawk_delta_time_bc /
          (IdleEntryAirRampInFiltC_DataStore());
        rtb_Sum2_g = (1.0 - rtb_UnitDelay1_j) * rtb_Sum2_g + rtb_Sum_e *
          rtb_UnitDelay1_j;
      }

      /* End of Switch: '<S227>/Preload lowpass filter with current RPM while not on Idle' */

      /* MinMax: '<S227>/Don't allow setpoint to ever drop below the TargetRPM' */
      BaseEngineController_LS_B.s227_DontallowsetpointtoeverdropbelowtheTargetRPM
        = (rtb_Sum_e >= rtb_Sum2_g) || rtIsNaN(rtb_Sum2_g) ? rtb_Sum_e :
        rtb_Sum2_g;

      /* Update for UnitDelay: '<S217>/Unit Delay' */
      BaseEngineController_LS_DWork.s217_UnitDelay_DSTATE = rtb_RelOp_j;

      /* Update for UnitDelay: '<S227>/Unit Delay' */
      BaseEngineController_LS_DWork.s227_UnitDelay_DSTATE =
        BaseEngineController_LS_B.s227_DontallowsetpointtoeverdropbelowtheTargetRPM;

      /* End of Outputs for SubSystem: '<S136>/AiflowOffset' */

      /* Saturate: '<S238>/Saturation' */
      rtb_Saturation_c = rtb_Switch_e >= 16000.0 ? 16000.0 : rtb_Switch_e <= 0.0
        ? 0.0 : rtb_Switch_e;

      /* S-Function (motohawk_sfun_data_write): '<S238>/motohawk_data_write' */
      /* Write to Data Storage as scalar: IdleEnterTimer */
      {
        IdleEnterTimer_DataStore() = rtb_Saturation_c;
      }

      /* S-Function Block: <S242>/motohawk_delta_time */
      rtb_motohawk_delta_time_n2 = 0.005;

      /* Sum: '<S222>/Sum' */
      rtb_Sum2_g = BaseEngineController_LS_B.s459_Sum1 -
        BaseEngineController_LS_B.s224_DontallowsetpointtoeverdropbelowtheTargetRPM;

      /* Switch: '<S242>/Switch' incorporates:
       *  Constant: '<S242>/Constant'
       *  RelationalOperator: '<S222>/Relational Operator2'
       *  S-Function (motohawk_sfun_calibration): '<S222>/motohawk_calibration3'
       *  S-Function (motohawk_sfun_data_read): '<S242>/motohawk_data_read'
       *  S-Function (motohawk_sfun_delta_time): '<S242>/motohawk_delta_time'
       *  Sum: '<S242>/Sum'
       */
      if (rtb_Sum2_g > (MotoringDeltaRPMLimit_DataStore())) {
        BaseEngineController_LS_B.s242_Switch = rtb_motohawk_delta_time_n2 +
          MotoringTimer_DataStore();
      } else {
        BaseEngineController_LS_B.s242_Switch = 0.0;
      }

      /* End of Switch: '<S242>/Switch' */

      /* RelationalOperator: '<S222>/Relational Operator1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S222>/motohawk_calibration1'
       */
      BaseEngineController_LS_B.s222_RelationalOperator1 =
        ((BaseEngineController_LS_B.s242_Switch >
          (MotoringDtctTimerLimit_DataStore())));

      /* DataTypeConversion: '<S222>/Data Type Conversion' */
      rtb_Sum_e = (real_T)BaseEngineController_LS_B.s222_RelationalOperator1;

      /* Saturate: '<S242>/Saturation' */
      rtb_Saturation_k = BaseEngineController_LS_B.s242_Switch >= 16000.0 ?
        16000.0 : BaseEngineController_LS_B.s242_Switch <= 0.0 ? 0.0 :
        BaseEngineController_LS_B.s242_Switch;

      /* S-Function (motohawk_sfun_data_write): '<S242>/motohawk_data_write' */
      /* Write to Data Storage as scalar: MotoringTimer */
      {
        MotoringTimer_DataStore() = rtb_Saturation_k;
      }

      /* S-Function Block: <S248>/motohawk_interpolation_1d1 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d1_b = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1, (real_T *)
           ((AirMinGovIGainErrorMultTbl_DataStore())), 9);
        (AirMinGovIGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d1_b;
      }

      /* Product: '<S250>/Product1' incorporates:
       *  Product: '<S248>/Product1'
       *  S-Function (motohawk_sfun_calibration): '<S248>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S248>/motohawk_interpolation_1d1'
       *  S-Function (motohawk_sfun_prelookup): '<S226>/motohawk_prelookup1'
       */
      rtb_Sum2_g = (AirMinGovIGain_DataStore()) *
        rtb_motohawk_interpolation_1d1_b * rtb_Product5;

      /* S-Function Block: <S252>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s252_motohawk_delta_time_DWORK1, NULL);
        rtb_motohawk_delta_time_j = ((real_T) delta) * 0.000001;
      }

      /* Sum: '<S252>/Sum' incorporates:
       *  Product: '<S252>/Product'
       *  S-Function (motohawk_sfun_delta_time): '<S252>/motohawk_delta_time'
       */
      rtb_UnitDelay1_j = rtb_Sum2_g * rtb_motohawk_delta_time_j +
        BaseEngineController_LS_B.s252_Switch1;

      /* MinMax: '<S254>/MinMax' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S226>/motohawk_calibration7'
       */
      rtb_Sum2_g = (rtb_UnitDelay1_j >= (AirMinGovITermLowerLimit_DataStore())) ||
        rtIsNaN((AirMinGovITermLowerLimit_DataStore())) ? rtb_UnitDelay1_j :
        (AirMinGovITermLowerLimit_DataStore());

      /* Update for UnitDelay: '<S239>/Unit Delay' */
      BaseEngineController_LS_DWork.s239_UnitDelay_DSTATE =
        BaseEngineController_LS_B.s403_RPMInst;

      /* Update for UnitDelay: '<S241>/Unit Delay' */
      BaseEngineController_LS_DWork.s241_UnitDelay_DSTATE = rtb_Sum1_f;

      /* Update for UnitDelay: '<S136>/Unit Delay3' */
      BaseEngineController_LS_DWork.s136_UnitDelay3_DSTATE =
        BaseEngineController_LS_B.s136_MinGovAirPID;

      /* Update for UnitDelay: '<S136>/Unit Delay1' */
      BaseEngineController_LS_DWork.s136_UnitDelay1_DSTATE =
        BaseEngineController_LS_B.s252_Switch1;

      /* Update for UnitDelay: '<S220>/state' */
      BaseEngineController_LS_DWork.s220_state_DSTATE =
        BaseEngineController_LS_B.s234_MinMax1;

      /* Update for UnitDelay: '<S136>/Unit Delay2' */
      BaseEngineController_LS_DWork.s136_UnitDelay2_DSTATE = rtb_Sum_e;

      /* Update for UnitDelay: '<S224>/Unit Delay' */
      BaseEngineController_LS_DWork.s224_UnitDelay_DSTATE =
        BaseEngineController_LS_B.s224_DontallowsetpointtoeverdropbelowtheTargetRPM;

      /* Update for UnitDelay: '<S251>/Unit Delay' */
      BaseEngineController_LS_DWork.s251_UnitDelay_DSTATE = rtb_Product4;

      /* Update for UnitDelay: '<S252>/Unit Delay' incorporates:
       *  MinMax: '<S254>/MinMax'
       *  MinMax: '<S254>/MinMax1'
       *  S-Function (motohawk_sfun_calibration): '<S226>/motohawk_calibration8'
       */
      BaseEngineController_LS_DWork.s252_UnitDelay_DSTATE = (rtb_Sum2_g <=
        (AirMinGovITermUpperLimit_DataStore())) || rtIsNaN
        ((AirMinGovITermUpperLimit_DataStore())) ? rtb_Sum2_g :
        (AirMinGovITermUpperLimit_DataStore());

      /* Update for UnitDelay: '<S246>/Unit Delay' */
      BaseEngineController_LS_DWork.s246_UnitDelay_DSTATE = rtb_Product2_j;
    }

    /* Output and update for function-call system: '<S119>/MaxGovernor' */
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
      boolean_T rtb_Switch_l;
      boolean_T rtb_RelationalOperator_c;
      boolean_T rtb_LogicalOperator1_l;
      real_T rtb_Reset;
      int32_T rtb_Hold;
      int32_T rtb_ETCMode;
      real_T rtb_alpha_o;

      /* Sum: '<S135>/Sum' */
      BaseEngineController_LS_B.s135_Sum =
        BaseEngineController_LS_B.s227_DontallowsetpointtoeverdropbelowtheTargetRPM
        + BaseEngineController_LS_B.s381_Sum2;

      /* Outputs for Enabled SubSystem: '<S204>/InGear' incorporates:
       *  EnablePort: '<S207>/Enable'
       */
      /* Outputs for Enabled SubSystem: '<S204>/InNeutral' incorporates:
       *  EnablePort: '<S208>/Enable'
       */
      if (BaseEngineController_LS_B.s417_Merge) {
        /* S-Function (motohawk_sfun_data_read): '<S207>/motohawk_data_read' */
        rtb_MinMax_ny = MaxGovInGearSetPoint_DataStore();

        /* MinMax: '<S209>/MinMax' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S207>/motohawk_calibration3'
         */
        rtb_MinMax_ny = (rtb_MinMax_ny >= (MaxGovInGearLowerLim_DataStore())) ||
          rtIsNaN((MaxGovInGearLowerLim_DataStore())) ? rtb_MinMax_ny :
          (MaxGovInGearLowerLim_DataStore());

        /* MinMax: '<S209>/MinMax1' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S207>/motohawk_calibration5'
         */
        rtb_Merge_a = (rtb_MinMax_ny <= (MaxGovInGearUpperLim_DataStore())) ||
          rtIsNaN((MaxGovInGearUpperLim_DataStore())) ? rtb_MinMax_ny :
          (MaxGovInGearUpperLim_DataStore());

        /* S-Function (motohawk_sfun_calibration): '<S207>/motohawk_calibration4' */
        rtb_Merge1 = (MaxGovInGearRPMThresh_DataStore());

        /* S-Function (motohawk_sfun_data_write): '<S207>/motohawk_data_write' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S207>/motohawk_calibration1'
         */
        /* Write to Data Storage as scalar: MaxGovInGearSetPoint */
        {
          MaxGovInGearSetPoint_DataStore() = (MaxGovInGearSetPt_DataStore());
        }

        /* S-Function (motohawk_sfun_data_write): '<S207>/motohawk_data_write1' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S207>/motohawk_calibration2'
         */
        /* Write to Data Storage as scalar: MaxGovInGearSetPoint */
        {
          MaxGovInGearSetPoint_DataStore() = (MaxGovInGearRPMSetPt_DataStore());
        }
      } else {
        /* S-Function (motohawk_sfun_data_read): '<S208>/motohawk_data_read' */
        rtb_MinMax_c = MaxGovNtrlSetPoint_DataStore();

        /* MinMax: '<S210>/MinMax' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S208>/motohawk_calibration2'
         */
        rtb_MinMax_c = (rtb_MinMax_c >= (MaxGovNtrlLowerLim_DataStore())) ||
          rtIsNaN((MaxGovNtrlLowerLim_DataStore())) ? rtb_MinMax_c :
          (MaxGovNtrlLowerLim_DataStore());

        /* MinMax: '<S210>/MinMax1' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S208>/motohawk_calibration5'
         */
        rtb_Merge_a = (rtb_MinMax_c <= (MaxGovNtrlUpperLim_DataStore())) ||
          rtIsNaN((MaxGovNtrlUpperLim_DataStore())) ? rtb_MinMax_c :
          (MaxGovNtrlUpperLim_DataStore());

        /* S-Function (motohawk_sfun_calibration): '<S208>/motohawk_calibration3' */
        rtb_Merge1 = (MaxGovNtrlRPMThresh_DataStore());

        /* S-Function (motohawk_sfun_data_write): '<S208>/motohawk_data_write' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S208>/motohawk_calibration1'
         */
        /* Write to Data Storage as scalar: MaxGovNtrlSetPoint */
        {
          MaxGovNtrlSetPoint_DataStore() = (MaxGovNtrlSetPt_DataStore());
        }

        /* S-Function (motohawk_sfun_data_write): '<S208>/motohawk_data_write1' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S208>/motohawk_calibration4'
         */
        /* Write to Data Storage as scalar: MaxGovNtrlSetPoint */
        {
          MaxGovNtrlSetPoint_DataStore() = (MaxGovNtrlRPMSetPt_DataStore());
        }
      }

      /* End of Outputs for SubSystem: '<S204>/InNeutral' */
      /* End of Outputs for SubSystem: '<S204>/InGear' */

      /* RelationalOperator: '<S204>/Relational Operator' incorporates:
       *  Sum: '<S204>/Sum1'
       */
      rtb_RelationalOperator_j = (BaseEngineController_LS_B.s403_RPMInst >
        rtb_Merge_a - rtb_Merge1);

      /* RelationalOperator: '<S202>/Relational Operator2' */
      rtb_Switch_l = (BaseEngineController_LS_B.s403_RPMInst > rtb_Merge_a);

      /* RelationalOperator: '<S202>/Relational Operator' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S202>/motohawk_calibration5'
       *  Sum: '<S202>/Sum'
       */
      rtb_RelationalOperator_c = (BaseEngineController_LS_B.s135_Sum <=
        BaseEngineController_LS_B.s374_Switch2 - (MaxGovTPSHyst_DataStore()));

      /* Logic: '<S202>/Logical Operator1' incorporates:
       *  RelationalOperator: '<S202>/Relational Operator1'
       *  S-Function (motohawk_sfun_calibration): '<S202>/motohawk_calibration5'
       *  Sum: '<S202>/Sum1'
       */
      rtb_LogicalOperator1_l = (rtb_RelationalOperator_j &&
        (BaseEngineController_LS_B.s135_Sum > (MaxGovTPSHyst_DataStore()) +
         BaseEngineController_LS_B.s374_Switch2));

      /* MATLAB Function Block: '<S202>/MaxGOV Stateflow' incorporates:
       *  Logic: '<S202>/Logical Operator'
       *  Logic: '<S202>/Logical Operator2'
       *  Logic: '<S202>/Logical Operator3'
       *  S-Function (motohawk_sfun_data_read): '<S202>/motohawk_data_read'
       */

      /* MATLAB Function 'Foreground/Control/Controller/Run/MaxGovernor/MaxGovState/MaxGOV Stateflow': '<S206>:1' */
      if ((MaxGov_DataStore() == 0.0) && ((rtb_RelationalOperator_j ||
            rtb_Switch_l) == 1)) {
        /* '<S206>:1:3' */
        /* '<S206>:1:4' */
        rtb_StateO = 1.0;
      } else if ((MaxGov_DataStore() == 1.0) && (rtb_RelationalOperator_c ==
                  TRUE)) {
        /* '<S206>:1:5' */
        /* '<S206>:1:6' */
        rtb_StateO = 2.0;
      } else if ((MaxGov_DataStore() == 2.0) && ((rtb_LogicalOperator1_l ||
                   rtb_Switch_l) == 1)) {
        /* '<S206>:1:7' */
        /* '<S206>:1:8' */
        rtb_StateO = 1.0;
      } else if ((MaxGov_DataStore() == 2.0) && (!rtb_RelationalOperator_j ==
                  TRUE)) {
        /* '<S206>:1:9' */
        /* '<S206>:1:10' */
        rtb_StateO = 0.0;
      } else {
        /* '<S206>:1:12' */
        rtb_StateO = MaxGov_DataStore();
      }

      if (MaxGov_DataStore() == 0.0) {
        /* '<S206>:1:15' */
        /* '<S206>:1:16' */
        rtb_ETCMode = 0;

        /* '<S206>:1:17' */
        rtb_Hold = 0;

        /* '<S206>:1:18' */
      } else if (MaxGov_DataStore() == 1.0) {
        /* '<S206>:1:19' */
        /* '<S206>:1:20' */
        rtb_ETCMode = 1;

        /* '<S206>:1:21' */
        rtb_Hold = 0;

        /* '<S206>:1:22' */
      } else if (MaxGov_DataStore() == 2.0) {
        /* '<S206>:1:23' */
        /* '<S206>:1:24' */
        rtb_ETCMode = 0;

        /* '<S206>:1:25' */
        rtb_Hold = 1;

        /* '<S206>:1:26' */
      } else {
        /* '<S206>:1:28' */
        rtb_ETCMode = 0;

        /* '<S206>:1:29' */
        rtb_Hold = 0;

        /* '<S206>:1:30' */
      }

      /* End of MATLAB Function Block: '<S202>/MaxGOV Stateflow' */

      /* DataTypeConversion: '<S202>/Data Type Conversion' */
      BaseEngineController_LS_B.s202_DataTypeConversion = 0;

      /* Logic: '<S203>/Logical Operator' incorporates:
       *  UnitDelay: '<S135>/Unit Delay'
       */
      rtb_RelationalOperator_j =
        !BaseEngineController_LS_DWork.s135_UnitDelay_DSTATE;

      /* S-Function Block: <S203>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s203_motohawk_delta_time_DWORK1, NULL);
        rtb_motohawk_delta_time_d4 = ((real_T) delta) * 0.000001;
      }

      /* UnitDelay: '<S203>/Unit Delay' */
      rtb_Reset = BaseEngineController_LS_DWork.s203_UnitDelay_DSTATE;

      /* Switch: '<S203>/Preload lowpass filter with current RPM while not on Idle' incorporates:
       *  Constant: '<S203>/Constant'
       *  Product: '<S203>/Product2'
       *  Product: '<S203>/Product3'
       *  Sum: '<S203>/Sum'
       *  Sum: '<S203>/Sum1'
       */
      if (rtb_RelationalOperator_j) {
        rtb_alpha_o = BaseEngineController_LS_B.s403_RPMInst;
      } else {
        /* Product: '<S203>/Product1' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S203>/motohawk_calibration2'
         *  S-Function (motohawk_sfun_delta_time): '<S203>/motohawk_delta_time'
         */
        rtb_alpha_o = rtb_motohawk_delta_time_d4 /
          (MaxGovRPMCtrlEntryFiltC_DataStore());
        rtb_alpha_o = (1.0 - rtb_alpha_o) * rtb_Reset + rtb_Merge_a *
          rtb_alpha_o;
      }

      /* End of Switch: '<S203>/Preload lowpass filter with current RPM while not on Idle' */

      /* MinMax: '<S203>/Don't allow setpoint to ever go above the TargetRPM' */
      BaseEngineController_LS_B.s203_DontallowsetpointtoevergoabovetheTargetRPM =
        (rtb_Merge_a <= rtb_alpha_o) || rtIsNaN(rtb_alpha_o) ? rtb_Merge_a :
        rtb_alpha_o;

      /* DataTypeConversion: '<S202>/Data Type Conversion1' */
      rtb_Reset = fmod((real_T)rtb_Hold, 256.0);
      BaseEngineController_LS_B.s202_DataTypeConversion1 = (int8_T)(rtb_Reset <
        0.0 ? (int8_T)-(int8_T)(uint8_T)-rtb_Reset : (int8_T)(uint8_T)rtb_Reset);

      /* Switch: '<S205>/Switch1' */
      if (BaseEngineController_LS_B.s202_DataTypeConversion1 >= 1) {
        rtb_alpha_o =
          BaseEngineController_LS_B.s203_DontallowsetpointtoevergoabovetheTargetRPM;
      } else {
        rtb_alpha_o = BaseEngineController_LS_B.s403_RPMInst;
      }

      /* End of Switch: '<S205>/Switch1' */

      /* Sum: '<S212>/Sum2' */
      BaseEngineController_LS_B.s212_Sum2 =
        BaseEngineController_LS_B.s203_DontallowsetpointtoevergoabovetheTargetRPM
        - rtb_alpha_o;

      /* Product: '<S212>/Product5' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S205>/motohawk_calibration5'
       */
      rtb_alpha_o = BaseEngineController_LS_B.s212_Sum2 *
        (MaxGovErrorGain_DataStore());

      /* S-Function Block: <S205>/motohawk_prelookup1 */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (MaxGovSpeedErrorIn_DataStore()) = BaseEngineController_LS_B.s212_Sum2;
        (MaxGovSpeedErrorIdx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_LS_B.s212_Sum2,
           (MaxGovSpeedErrorIdxArr_DataStore()), 9,
           (MaxGovSpeedErrorIdx_DataStore()));
        rtb_motohawk_prelookup1_f = (MaxGovSpeedErrorIdx_DataStore());
      }

      /* S-Function Block: <S205>/motohawk_interpolation_1d3 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d3_m = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1_f, (real_T *)
           ((MaxGovPGainErrorMultTbl_DataStore())), 9);
        (MaxGovPGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d3_m;
      }

      /* Product: '<S212>/Product2' incorporates:
       *  Product: '<S205>/Product4'
       *  S-Function (motohawk_sfun_calibration): '<S205>/motohawk_calibration3'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S205>/motohawk_interpolation_1d3'
       *  S-Function (motohawk_sfun_prelookup): '<S205>/motohawk_prelookup1'
       */
      BaseEngineController_LS_B.s212_Product2 = (MaxGovPGain_DataStore()) *
        rtb_motohawk_interpolation_1d3_m * rtb_alpha_o;

      /* UnitDelay: '<S213>/Unit Delay' */
      rtb_Reset = BaseEngineController_LS_DWork.s213_UnitDelay_DSTATE;

      /* S-Function Block: <S205>/motohawk_interpolation_1d2 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d2_c = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1_f, (real_T *)
           ((MaxGovDGainErrorMultTbl_DataStore())), 9);
        (MaxGovDGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d2_c;
      }

      /* Product: '<S212>/Product4' incorporates:
       *  Product: '<S205>/Product3'
       *  S-Function (motohawk_sfun_calibration): '<S205>/motohawk_calibration6'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S205>/motohawk_interpolation_1d2'
       *  S-Function (motohawk_sfun_prelookup): '<S205>/motohawk_prelookup1'
       */
      rtb_Merge_a = (MaxGovDGain_DataStore()) * rtb_motohawk_interpolation_1d2_c
        * rtb_alpha_o;

      /* S-Function Block: <S213>/motohawk_delta_time */
      rtb_motohawk_delta_time_m = 0.005;

      /* Product: '<S213>/Product' incorporates:
       *  S-Function (motohawk_sfun_delta_time): '<S213>/motohawk_delta_time'
       *  Sum: '<S213>/Sum2'
       */
      BaseEngineController_LS_B.s213_Product = (rtb_Merge_a - rtb_Reset) /
        rtb_motohawk_delta_time_m;

      /* Outputs for Atomic SubSystem: '<S135>/I-Term Preload' */

      /* S-Function Block: <S201>/motohawk_interpolation_1d4 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d4_k = TableInterpolation1D_real_T
          (BaseEngineController_LS_B.s334_RPMAccel17Idx, (real_T *)
           ((MaxGovPreloadITermTbl_DataStore())), 17);
        (MaxGovPreloadITerm_DataStore()) = rtb_motohawk_interpolation_1d4_k;
      }

      /* Sum: '<S201>/Sum' incorporates:
       *  S-Function (motohawk_sfun_interpolation_1d): '<S201>/motohawk_interpolation_1d4'
       */
      BaseEngineController_LS_B.s201_Sum = BaseEngineController_LS_B.s135_Sum -
        rtb_motohawk_interpolation_1d4_k;

      /* End of Outputs for SubSystem: '<S135>/I-Term Preload' */

      /* Switch: '<S214>/Switch1' incorporates:
       *  DataTypeConversion: '<S214>/Data Type Conversion'
       *  UnitDelay: '<S214>/Unit Delay'
       */
      if (BaseEngineController_LS_B.s202_DataTypeConversion != 0) {
        BaseEngineController_LS_B.s214_Switch1 =
          BaseEngineController_LS_B.s201_Sum;
      } else {
        BaseEngineController_LS_B.s214_Switch1 =
          BaseEngineController_LS_DWork.s214_UnitDelay_DSTATE;
      }

      /* End of Switch: '<S214>/Switch1' */

      /* Switch: '<S205>/Switch' incorporates:
       *  Constant: '<S205>/Constant'
       */
      if (BaseEngineController_LS_B.s202_DataTypeConversion >= 1) {
        BaseEngineController_LS_B.s205_Switch = 0.0;
      } else {
        /* MinMax: '<S211>/MinMax' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S205>/motohawk_calibration9'
         *  Sum: '<S212>/Sum1'
         */
        rtb_Reset = (BaseEngineController_LS_B.s212_Product2 +
                     BaseEngineController_LS_B.s213_Product) +
          BaseEngineController_LS_B.s214_Switch1;
        rtb_Reset = (rtb_Reset >= (MaxGovPIDOutLowerLimit_DataStore())) ||
          rtIsNaN((MaxGovPIDOutLowerLimit_DataStore())) ? rtb_Reset :
          (MaxGovPIDOutLowerLimit_DataStore());

        /* MinMax: '<S211>/MinMax1' incorporates:
         *  MinMax: '<S211>/MinMax'
         *  S-Function (motohawk_sfun_calibration): '<S205>/motohawk_calibration2'
         */
        BaseEngineController_LS_B.s205_Switch = (rtb_Reset <=
          (MaxGovPIDOutUpperLimit_DataStore())) || rtIsNaN
          ((MaxGovPIDOutUpperLimit_DataStore())) ? rtb_Reset :
          (MaxGovPIDOutUpperLimit_DataStore());
      }

      /* End of Switch: '<S205>/Switch' */

      /* S-Function (motohawk_sfun_data_write): '<S202>/motohawk_data_write' */
      /* Write to Data Storage as scalar: MaxGov */
      {
        MaxGov_DataStore() = rtb_StateO;
      }

      /* Switch: '<S202>/Switch' incorporates:
       *  Constant: '<S202>/Constant1'
       *  Logic: '<S202>/Logical Operator4'
       *  S-Function (motohawk_sfun_calibration): '<S202>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_calibration): '<S202>/motohawk_calibration2'
       */
      if ((TwoStep_MaxGovDisable_DataStore()) &&
          BaseEngineController_LS_B.s447_Merge) {
        rtb_Switch_l = FALSE;
      } else {
        rtb_Switch_l = (MaxGovDisable_DataStore());
      }

      /* End of Switch: '<S202>/Switch' */

      /* MultiPortSwitch: '<S202>/Multiport Switch' incorporates:
       *  Constant: '<S202>/Constant'
       *  DataTypeConversion: '<S202>/Data Type Conversion2'
       */
      if (rtb_Switch_l == FALSE) {
        /* DataTypeConversion: '<S202>/Data Type Conversion2' */
        rtb_Reset = fmod((real_T)rtb_ETCMode, 256.0);
        BaseEngineController_LS_B.s202_MultiportSwitch = (((rtb_Reset < 0.0 ?
          (int8_T)-(int8_T)(uint8_T)-rtb_Reset : (int8_T)(uint8_T)rtb_Reset) !=
          0));
      } else {
        BaseEngineController_LS_B.s202_MultiportSwitch = FALSE;
      }

      /* End of MultiPortSwitch: '<S202>/Multiport Switch' */

      /* S-Function Block: <S205>/motohawk_interpolation_1d4 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d4 = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1_f, (real_T *)
           ((MaxGovIGainErrorMultTbl_DataStore())), 9);
        (MaxGovIGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d4;
      }

      /* Product: '<S212>/Product1' incorporates:
       *  Product: '<S205>/Product5'
       *  S-Function (motohawk_sfun_calibration): '<S205>/motohawk_calibration4'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S205>/motohawk_interpolation_1d4'
       *  S-Function (motohawk_sfun_prelookup): '<S205>/motohawk_prelookup1'
       */
      rtb_Reset = (MaxGovIGain_DataStore()) * rtb_motohawk_interpolation_1d4 *
        rtb_alpha_o;

      /* S-Function Block: <S214>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s214_motohawk_delta_time_DWORK1, NULL);
        rtb_motohawk_delta_time_l = ((real_T) delta) * 0.000001;
      }

      /* Sum: '<S214>/Sum' incorporates:
       *  Product: '<S214>/Product'
       *  S-Function (motohawk_sfun_delta_time): '<S214>/motohawk_delta_time'
       */
      rtb_alpha_o = rtb_Reset * rtb_motohawk_delta_time_l +
        BaseEngineController_LS_B.s214_Switch1;

      /* MinMax: '<S216>/MinMax' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S205>/motohawk_calibration7'
       */
      rtb_Reset = (rtb_alpha_o >= (MaxGovITermLowerLimit_DataStore())) ||
        rtIsNaN((MaxGovITermLowerLimit_DataStore())) ? rtb_alpha_o :
        (MaxGovITermLowerLimit_DataStore());

      /* Update for UnitDelay: '<S135>/Unit Delay' */
      BaseEngineController_LS_DWork.s135_UnitDelay_DSTATE =
        BaseEngineController_LS_B.s202_MultiportSwitch;

      /* Update for UnitDelay: '<S203>/Unit Delay' */
      BaseEngineController_LS_DWork.s203_UnitDelay_DSTATE =
        BaseEngineController_LS_B.s203_DontallowsetpointtoevergoabovetheTargetRPM;

      /* Update for UnitDelay: '<S213>/Unit Delay' */
      BaseEngineController_LS_DWork.s213_UnitDelay_DSTATE = rtb_Merge_a;

      /* Update for UnitDelay: '<S214>/Unit Delay' incorporates:
       *  MinMax: '<S216>/MinMax'
       *  MinMax: '<S216>/MinMax1'
       *  S-Function (motohawk_sfun_calibration): '<S205>/motohawk_calibration8'
       */
      BaseEngineController_LS_DWork.s214_UnitDelay_DSTATE = (rtb_Reset <=
        (MaxGovITermUpperLimit_DataStore())) || rtIsNaN
        ((MaxGovITermUpperLimit_DataStore())) ? rtb_Reset :
        (MaxGovITermUpperLimit_DataStore());
    }

    /* Output and update for function-call system: '<S119>/Spark Manager' */
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
      real_T rtb_motohawk_interpolation_1d4_p;
      index_T rtb_motohawk_prelookup;
      real_T rtb_Product_h;
      real_T rtb_Product1_f;

      /* S-Function Block: <S138>/motohawk_interpolation_2d2 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_RichEquivRatioTargetDelta = TableInterpolation2D_real_T
          (BaseEngineController_LS_B.s359_Indexes,
           BaseEngineController_LS_B.s360_Indexes, (real_T *)
           ((SparkAdvMap_DataStore())), 17, 17);
        (SparkAdv_DataStore()) = rtb_RichEquivRatioTargetDelta;
      }

      /* S-Function Block: <S275>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d = TableInterpolation1D_real_T
          (BaseEngineController_LS_B.s357_motohawk_prelookup, (real_T *)
           ((ECT_SpkOfstTbl_DataStore())), 5);
        (ECT_SpkOfst_DataStore()) = rtb_motohawk_interpolation_1d;
      }

      /* S-Function Block: <S275>/motohawk_interpolation_2d3 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_RichEquivRatioTargetDelta_l = TableInterpolation2D_real_T
          (BaseEngineController_LS_B.s359_motohawk_prelookup1,
           BaseEngineController_LS_B.s360_motohawk_prelookup1, (real_T *)
           ((ECT_SpkOfstMultMap_DataStore())), 9, 9);
        (ECT_SpkOfstMult_DataStore()) = rtb_RichEquivRatioTargetDelta_l;
      }

      /* Product: '<S275>/Product' incorporates:
       *  S-Function (motohawk_sfun_interpolation_1d): '<S275>/motohawk_interpolation_1d'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S275>/motohawk_interpolation_2d3'
       */
      rtb_Product_h = rtb_motohawk_interpolation_1d *
        rtb_RichEquivRatioTargetDelta_l;

      /* S-Function Block: <S275>/motohawk_interpolation_1d1 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d1_o = TableInterpolation1D_real_T
          (BaseEngineController_LS_B.s358_motohawk_prelookup, (real_T *)
           ((IAT_SpkOfstTbl_DataStore())), 5);
        (IAT_SpkOfst_DataStore()) = rtb_motohawk_interpolation_1d1_o;
      }

      /* S-Function Block: <S275>/motohawk_interpolation_2d1 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_RichEquivRatioTargetDelta_h = TableInterpolation2D_real_T
          (BaseEngineController_LS_B.s359_motohawk_prelookup1,
           BaseEngineController_LS_B.s360_motohawk_prelookup1, (real_T *)
           ((IAT_SpkOfstMultMap_DataStore())), 9, 9);
        (IAT_SpkOfstMult_DataStore()) = rtb_RichEquivRatioTargetDelta_h;
      }

      /* Product: '<S275>/Product1' incorporates:
       *  S-Function (motohawk_sfun_interpolation_1d): '<S275>/motohawk_interpolation_1d1'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S275>/motohawk_interpolation_2d1'
       */
      rtb_Product1_f = rtb_motohawk_interpolation_1d1_o *
        rtb_RichEquivRatioTargetDelta_h;

      /* S-Function Block: <S275>/motohawk_interpolation_1d2 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d2_m = TableInterpolation1D_real_T
          (BaseEngineController_LS_B.s356_motohawk_prelookup, (real_T *)
           ((CAT_SpkOfstTbl_DataStore())), 5);
        (CAT_SpkOfst_DataStore()) = rtb_motohawk_interpolation_1d2_m;
      }

      /* S-Function Block: <S275>/motohawk_interpolation_2d2 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_RichEquivRatioTargetDelta_i = TableInterpolation2D_real_T
          (BaseEngineController_LS_B.s359_motohawk_prelookup1,
           BaseEngineController_LS_B.s360_motohawk_prelookup1, (real_T *)
           ((CAT_SpkOfstMultMap_DataStore())), 9, 9);
        (CAT_SpkOfstMult_DataStore()) = rtb_RichEquivRatioTargetDelta_i;
      }

      /* Sum: '<S275>/Add' incorporates:
       *  Product: '<S275>/Product2'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S275>/motohawk_interpolation_1d2'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S275>/motohawk_interpolation_2d2'
       */
      BaseEngineController_LS_B.s275_Add = (rtb_Product_h + rtb_Product1_f) +
        rtb_motohawk_interpolation_1d2_m * rtb_RichEquivRatioTargetDelta_i;

      /* S-Function Block: <S272>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (Eth11IdxIn_DataStore()) = BaseEngineController_LS_B.s481_Merge;
        (Eth11IdxIdx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_LS_B.s481_Merge, (Eth11IdxIdxArr_DataStore()),
           11, (Eth11IdxIdx_DataStore()));
        rtb_motohawk_prelookup = (Eth11IdxIdx_DataStore());
      }

      /* S-Function Block: <S272>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d_k = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup, (real_T *) ((EthSpkModTbl_DataStore())), 11);
        (EthSpkMod_DataStore()) = rtb_motohawk_interpolation_1d_k;
      }

      /* S-Function Block: <S272>/motohawk_interpolation_2d3 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_RichEquivRatioTargetDelta_m = TableInterpolation2D_real_T
          (BaseEngineController_LS_B.s359_motohawk_prelookup1,
           BaseEngineController_LS_B.s360_motohawk_prelookup1, (real_T *)
           ((Ethanol_SpkOfstMultMap_DataStore())), 9, 9);
        (Ethanol_SpkOfstMult_DataStore()) = rtb_RichEquivRatioTargetDelta_m;
      }

      /* Product: '<S272>/Product' incorporates:
       *  S-Function (motohawk_sfun_interpolation_1d): '<S272>/motohawk_interpolation_1d'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S272>/motohawk_interpolation_2d3'
       *  S-Function (motohawk_sfun_prelookup): '<S272>/motohawk_prelookup'
       */
      BaseEngineController_LS_B.s272_Product = rtb_motohawk_interpolation_1d_k *
        rtb_RichEquivRatioTargetDelta_m;

      /* Sum: '<S138>/Apply Offsets to Base Spark Advance1' incorporates:
       *  S-Function (motohawk_sfun_interpolation_2d): '<S138>/motohawk_interpolation_2d2'
       *  Sum: '<S138>/Apply Offsets to Base Spark Advance3'
       */
      BaseEngineController_LS_B.s138_ApplyOffsetstoBaseSparkAdvance1 =
        (((rtb_RichEquivRatioTargetDelta + BaseEngineController_LS_B.s275_Add) +
          BaseEngineController_LS_B.s272_Product) +
         BaseEngineController_LS_B.s136_IdleSpk) +
        BaseEngineController_LS_B.s170_SparkOut;

      /* MinMax: '<S278>/MinMax' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S274>/motohawk_calibration5'
       */
      rtb_Product_h =
        (BaseEngineController_LS_B.s138_ApplyOffsetstoBaseSparkAdvance1 >=
         (MinSparkLimit_DataStore())) || rtIsNaN((MinSparkLimit_DataStore())) ?
        BaseEngineController_LS_B.s138_ApplyOffsetstoBaseSparkAdvance1 :
        (MinSparkLimit_DataStore());

      /* Switch: '<S274>/Switch1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S274>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S274>/motohawk_interpolation_1d4'
       */
      if (BaseEngineController_LS_B.s237_RelOp) {
        /* S-Function Block: <S274>/motohawk_interpolation_1d4 */
        {
          extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T
            *tbl_data, uint32_T sz);
          rtb_motohawk_interpolation_1d4_p = TableInterpolation1D_real_T
            (BaseEngineController_LS_B.s359_motohawk_prelookup1, (real_T *)
             ((MaxSparkLimitTbl_DataStore())), 9);
          (MaxSparkLimit_DataStore()) = rtb_motohawk_interpolation_1d4_p;
        }

        rtb_Product1_f = rtb_motohawk_interpolation_1d4_p;
      } else {
        rtb_Product1_f = (MaxSparkLimitOffIdle_DataStore());
      }

      /* End of Switch: '<S274>/Switch1' */

      /* MinMax: '<S278>/MinMax1' incorporates:
       *  MinMax: '<S278>/MinMax'
       */
      BaseEngineController_LS_B.s278_MinMax1 = (rtb_Product_h <= rtb_Product1_f)
        || rtIsNaN(rtb_Product1_f) ? rtb_Product_h : rtb_Product1_f;

      /* UnitDelay: '<S273>/Unit Delay' */
      rtb_Product_h = BaseEngineController_LS_DWork.s273_UnitDelay_DSTATE;

      /* Switch: '<S273>/Switch' incorporates:
       *  UnitDelay: '<S276>/Initial Condition is True'
       */
      if (BaseEngineController_LS_DWork.s276_InitialConditionisTrue_DSTATE) {
        BaseEngineController_LS_B.s273_Switch =
          BaseEngineController_LS_B.s278_MinMax1;
      } else {
        /* Sum: '<S273>/Sum' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S273>/motohawk_calibration'
         */
        rtb_Product1_f = rtb_Product_h + (SparkAdv_DeltaHi_DataStore());

        /* MinMax: '<S277>/MinMax' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S273>/motohawk_calibration1'
         *  Sum: '<S273>/Sum1'
         */
        rtb_Product_h -= (SparkAdv_DeltaLo_DataStore());

        /* MinMax: '<S277>/MinMax1' incorporates:
         *  MinMax: '<S277>/MinMax'
         */
        rtb_Product_h = (BaseEngineController_LS_B.s278_MinMax1 >= rtb_Product_h)
          || rtIsNaN(rtb_Product_h) ? BaseEngineController_LS_B.s278_MinMax1 :
          rtb_Product_h;
        BaseEngineController_LS_B.s273_Switch = (rtb_Product_h <= rtb_Product1_f)
          || rtIsNaN(rtb_Product1_f) ? rtb_Product_h : rtb_Product1_f;
      }

      /* End of Switch: '<S273>/Switch' */

      /* S-Function Block: <S138>/motohawk_interpolation_2d1 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        BaseEngineController_LS_B.s138_motohawk_interpolation_2d1 =
          TableInterpolation2D_real_T
          (BaseEngineController_LS_B.s359_motohawk_prelookup1,
           BaseEngineController_LS_B.s360_motohawk_prelookup1, (real_T *)
           ((BaseSparkEnergyMap_DataStore())), 9, 9);
        (BaseSparkEnergy_DataStore()) =
          BaseEngineController_LS_B.s138_motohawk_interpolation_2d1;
      }

      /* Update for UnitDelay: '<S276>/Initial Condition is True' incorporates:
       *  Constant: '<S276>/False After First Sample'
       */
      BaseEngineController_LS_DWork.s276_InitialConditionisTrue_DSTATE = FALSE;

      /* Update for UnitDelay: '<S273>/Unit Delay' */
      BaseEngineController_LS_DWork.s273_UnitDelay_DSTATE =
        BaseEngineController_LS_B.s273_Switch;
    }
  }
}
