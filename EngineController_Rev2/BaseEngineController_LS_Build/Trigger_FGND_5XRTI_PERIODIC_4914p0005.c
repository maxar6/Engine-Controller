/*
 * Trigger_FGND_5XRTI_PERIODIC_4914p0005.c
 *
 * Code generation for model "BaseEngineController_LS.mdl".
 *
 * Model version              : 1.2001
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Mon Apr 05 00:03:01 2021
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
  /* Named constants for Stateflow: '<S914>/ECUP Latch' */
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

      /* Sum: '<S267>/Sum2' incorporates:
       *  UnitDelay: '<S267>/Unit Delay'
       */
      rtb_Sum2_g = BaseEngineController_LS_B.s445_RPMInst -
        BaseEngineController_LS_DWork.s267_UnitDelay_DSTATE;

      /* S-Function Block: <S267>/motohawk_delta_time */
      rtb_motohawk_delta_time_h = 0.005;

      /* Product: '<S267>/Product' incorporates:
       *  S-Function (motohawk_sfun_delta_time): '<S267>/motohawk_delta_time'
       */
      rtb_Sum2_g /= rtb_motohawk_delta_time_h;

      /* S-Function Block: <S268>/motohawk_delta_time */
      rtb_Switch_e = 0.005;

      /* Product: '<S268>/Product' incorporates:
       *  MinMax: '<S268>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S268>/motohawk_calibration'
       */
      rtb_Switch_e /= (rtb_Switch_e >= (RPMFallingFiltConst_DataStore())) ||
        rtIsNaN((RPMFallingFiltConst_DataStore())) ? rtb_Switch_e :
        (RPMFallingFiltConst_DataStore());

      /* Sum: '<S269>/Sum1' incorporates:
       *  Constant: '<S269>/Constant'
       *  Product: '<S269>/Product'
       *  Product: '<S269>/Product1'
       *  Sum: '<S269>/Sum'
       *  UnitDelay: '<S269>/Unit Delay'
       */
      rtb_Sum1_f = (1.0 - rtb_Switch_e) *
        BaseEngineController_LS_DWork.s269_UnitDelay_DSTATE + rtb_Sum2_g *
        rtb_Switch_e;

      /* RelationalOperator: '<S263>/Relational Operator' incorporates:
       *  Gain: '<S263>/Falling RPM is Negative Derivative'
       *  S-Function (motohawk_sfun_calibration): '<S263>/motohawk_calibration'
       */
      BaseEngineController_LS_B.s263_RelationalOperator = ((rtb_Sum1_f <
        -(RPMFallingRate_DataStore())));

      /* Outputs for Atomic SubSystem: '<S153>/Base RPM Set Pt' */

      /* S-Function Block: <S247>/motohawk_interpolation_1d2 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d2_i = TableInterpolation1D_real_T
          (BaseEngineController_LS_B.s397_motohawk_prelookup, (real_T *)
           ((MinGovClntRPMSetPtTbl_DataStore())), 5);
        (MinGovClntRPMSetPt_DataStore()) = rtb_motohawk_interpolation_1d2_i;
      }

      /* End of Outputs for SubSystem: '<S153>/Base RPM Set Pt' */

      /* RelationalOperator: '<S249>/Relational Operator' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S249>/motohawk_calibration4'
       *  Sum: '<S249>/Sum'
       */
      BaseEngineController_LS_B.s249_RelationalOperator =
        ((BaseEngineController_LS_B.s445_RPMInst <
          (InGearMinGovEntryRPMDelta_DataStore()) +
          rtb_motohawk_interpolation_1d2_i));

      /* RelationalOperator: '<S249>/Relational Operator3' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S249>/motohawk_calibration6'
       *  Sum: '<S249>/Sum2'
       */
      BaseEngineController_LS_B.s249_RelationalOperator3 =
        ((BaseEngineController_LS_B.s445_RPMInst <
          rtb_motohawk_interpolation_1d2_i - (StallSaverDeltaRPM_DataStore())));

      /* MultiPortSwitch: '<S249>/Multiport Switch1' incorporates:
       *  S-Function (motohawk_sfun_data_read): '<S249>/motohawk_data_read1'
       */
      if (AirControlSource_DataStore() == FALSE) {
        rtb_Switch_e = BaseEngineController_LS_B.s409_Switch1;
      } else {
        rtb_Switch_e = BaseEngineController_LS_B.s416_Switch2;
      }

      /* End of MultiPortSwitch: '<S249>/Multiport Switch1' */
      /* RelationalOperator: '<S249>/Relational Operator1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S249>/motohawk_calibration5'
       */
      BaseEngineController_LS_B.s249_RelationalOperator1 = ((rtb_Switch_e <
        (MinGovEntryAirPcnt_DataStore())));

      /* MultiPortSwitch: '<S249>/Multiport Switch' incorporates:
       *  Constant: '<S249>/Constant'
       *  RelationalOperator: '<S249>/Relational Operator4'
       *  S-Function (motohawk_sfun_data_read): '<S249>/motohawk_data_read1'
       *  UnitDelay: '<S153>/Unit Delay3'
       */
      if (AirControlSource_DataStore() == FALSE) {
        rtb_RelOp_j = (BaseEngineController_LS_B.s423_Sum2 >
                       BaseEngineController_LS_DWork.s153_UnitDelay3_DSTATE);
      } else {
        rtb_RelOp_j = TRUE;
      }

      /* End of MultiPortSwitch: '<S249>/Multiport Switch' */

      /* Logic: '<S249>/Logical Operator' incorporates:
       *  RelationalOperator: '<S249>/Relational Operator2'
       *  S-Function (motohawk_sfun_calibration): '<S249>/motohawk_calibration3'
       *  S-Function (motohawk_sfun_calibration): '<S249>/motohawk_calibration5'
       *  Sum: '<S249>/Sum1'
       */
      BaseEngineController_LS_B.s249_LogicalOperator = (((rtb_Switch_e >=
        (MinGovEntryAirPcnt_DataStore()) + (MinGovAirPcntHyst_DataStore())) &&
        rtb_RelOp_j));

      /* S-Function Block: <S266>/motohawk_delta_time */
      rtb_motohawk_delta_time_d = 0.005;

      /* Switch: '<S266>/Switch' incorporates:
       *  Constant: '<S266>/Constant'
       *  S-Function (motohawk_sfun_data_read): '<S266>/motohawk_data_read'
       *  S-Function (motohawk_sfun_delta_time): '<S266>/motohawk_delta_time'
       *  Sum: '<S266>/Sum'
       */
      if (BaseEngineController_LS_B.s249_RelationalOperator1) {
        rtb_Switch_e = rtb_motohawk_delta_time_d + IdleEnterTimer_DataStore();
      } else {
        rtb_Switch_e = 0.0;
      }

      /* End of Switch: '<S266>/Switch' */
      /* RelationalOperator: '<S249>/Relational Operator5' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S249>/motohawk_calibration2'
       */
      BaseEngineController_LS_B.s249_RelationalOperator5 = ((rtb_Switch_e >
        (MinGovEntryAirTimeThresh_DataStore())));

      /* Stateflow: '<S249>/IdleStateMachine' */
      BaseEngineController_LS_IdleStateMachine();

      /* RelationalOperator: '<S265>/RelOp' incorporates:
       *  Constant: '<S265>/Constant'
       */
      BaseEngineController_LS_B.s265_RelOp =
        ((BaseEngineController_LS_B.s264_IdleState == 2));

      /* UnitDelay: '<S153>/Unit Delay1' */
      rtb_UnitDelay1_j = BaseEngineController_LS_DWork.s153_UnitDelay1_DSTATE;

      /* Outputs for Enabled SubSystem: '<S153>/Base Airflow Table Adapt' incorporates:
       *  EnablePort: '<S246>/Enable'
       */
      if (BaseEngineController_LS_B.s265_RelOp) {
        /* Product: '<S246>/Product0' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S246>/motohawk_calibration2'
         */
        rtb_Sum2_g = rtb_UnitDelay1_j * (BaseAirflowAdaptGain_DataStore());

        /* MinMax: '<S261>/MinMax' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S259>/motohawk_calibration'
         */
        rtb_Sum2_g = (rtb_Sum2_g >= (BaseAirflowAdaptErrorLwrLim_DataStore())) ||
          rtIsNaN((BaseAirflowAdaptErrorLwrLim_DataStore())) ? rtb_Sum2_g :
          (BaseAirflowAdaptErrorLwrLim_DataStore());

        /* MinMax: '<S261>/MinMax1' incorporates:
         *  MinMax: '<S261>/MinMax'
         *  S-Function (motohawk_sfun_calibration): '<S259>/motohawk_calibration1'
         */
        rtb_MinMax1_a = (rtb_Sum2_g <= (BaseAirflowAdaptErrorUprLim_DataStore()))
          || rtIsNaN((BaseAirflowAdaptErrorUprLim_DataStore())) ? rtb_Sum2_g :
          (BaseAirflowAdaptErrorUprLim_DataStore());

        /* Outputs for Atomic SubSystem: '<S246>/Idle Control Enable Delay' */

        /* S-Function Block: <S260>/motohawk_delta_time */
        rtb_motohawk_delta_time_e = 0.005;

        /* Switch: '<S260>/Switch' incorporates:
         *  Constant: '<S260>/Constant'
         *  S-Function (motohawk_sfun_data_read): '<S260>/motohawk_data_read'
         *  S-Function (motohawk_sfun_delta_time): '<S260>/motohawk_delta_time'
         *  Sum: '<S260>/Sum'
         */
        if (BaseEngineController_LS_B.s265_RelOp) {
          rtb_Sum2_g = rtb_motohawk_delta_time_e + BaseAirflowTimer_DataStore();
        } else {
          rtb_Sum2_g = 0.0;
        }

        /* End of Switch: '<S260>/Switch' */
        /* RelationalOperator: '<S258>/Relational Operator' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S258>/motohawk_calibration1'
         */
        rtb_RelOp_j = (rtb_Sum2_g > (BaseAirflowAdaptDelayTime_DataStore()));

        /* Saturate: '<S260>/Saturation' */
        rtb_Saturation_cl = rtb_Sum2_g >= 16000.0 ? 16000.0 : rtb_Sum2_g <= 0.0 ?
          0.0 : rtb_Sum2_g;

        /* S-Function (motohawk_sfun_data_write): '<S260>/motohawk_data_write' */
        /* Write to Data Storage as scalar: BaseAirflowTimer */
        {
          BaseAirflowTimer_DataStore() = rtb_Saturation_cl;
        }

        /* End of Outputs for SubSystem: '<S246>/Idle Control Enable Delay' */

        /* Logic: '<S246>/Logical Operator1' incorporates:
         *  Abs: '<S246>/Abs'
         *  RelationalOperator: '<S246>/Relational Operator'
         *  S-Function (motohawk_sfun_calibration): '<S246>/motohawk_calibration3'
         *  S-Function (motohawk_sfun_calibration): '<S246>/motohawk_calibration4'
         */
        BaseEngineController_LS_B.s246_LogicalOperator1 =
          (((BaseAirflowAdaptEnable_DataStore()) && rtb_RelOp_j && (fabs
             (rtb_UnitDelay1_j) <= (BaseAirflowAdaptDelta_DataStore()))));

        /* Outputs for Enabled SubSystem: '<S246>/Adapt Base Airflow Table' incorporates:
         *  EnablePort: '<S257>/Enable'
         */
        if (BaseEngineController_LS_B.s246_LogicalOperator1) {
          /* S-Function Block: <S257>/motohawk_adapt_table */
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

        /* End of Outputs for SubSystem: '<S246>/Adapt Base Airflow Table' */
      }

      /* End of Outputs for SubSystem: '<S153>/Base Airflow Table Adapt' */
      /* S-Function Block: <S248>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s248_motohawk_delta_time_DWORK1, NULL);
        rtb_motohawk_delta_time_c = ((real_T) delta) * 0.000001;
      }

      /* MultiPortSwitch: '<S248>/Multiport Switch' incorporates:
       *  Gain: '<S248>/Ramp Down'
       *  Product: '<S248>/Product'
       *  Product: '<S248>/Product1'
       *  S-Function (motohawk_sfun_delta_time): '<S248>/motohawk_delta_time'
       */
      if (BaseEngineController_LS_B.s265_RelOp == FALSE) {
        /* Switch: '<S248>/Switch' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S153>/motohawk_calibration3'
         *  S-Function (motohawk_sfun_delta_time): '<S248>/motohawk_delta_time'
         */
        if ((IdleExitTimeConst_DataStore()) > 0.0) {
          rtb_Sum2_g = (IdleExitTimeConst_DataStore());
        } else {
          rtb_Sum2_g = rtb_motohawk_delta_time_c;
        }

        /* End of Switch: '<S248>/Switch' */
        rtb_Product5 = rtb_motohawk_delta_time_c / rtb_Sum2_g * -1.0;
      } else {
        rtb_Product5 = rtb_motohawk_delta_time_c / rtb_motohawk_delta_time_c;
      }

      /* End of MultiPortSwitch: '<S248>/Multiport Switch' */

      /* Sum: '<S248>/Sum' incorporates:
       *  UnitDelay: '<S248>/state'
       */
      rtb_Product5 += BaseEngineController_LS_DWork.s248_state_DSTATE;

      /* MinMax: '<S262>/MinMax1' incorporates:
       *  Constant: '<S248>/Constant'
       *  Constant: '<S248>/Constant1'
       *  MinMax: '<S262>/MinMax'
       */
      rtb_Sum2_g = rtb_Product5 >= 0.0 ? rtb_Product5 : 0.0;
      BaseEngineController_LS_B.s262_MinMax1 = rtb_Sum2_g <= 1.0 ? rtb_Sum2_g :
        1.0;

      /* RelationalOperator: '<S251>/RelOp' incorporates:
       *  Constant: '<S251>/Constant'
       */
      rtb_RelOp_j = (BaseEngineController_LS_B.s262_MinMax1 == 0.0);

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

      /* Logic: '<S252>/Logical Operator' */
      rtb_LogicalOperator_i = !BaseEngineController_LS_B.s265_RelOp;

      /* S-Function Block: <S252>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s252_motohawk_delta_time_DWORK1, NULL);
        rtb_motohawk_delta_time_b = ((real_T) delta) * 0.000001;
      }

      /* UnitDelay: '<S252>/Unit Delay' */
      rtb_Sum2_g = BaseEngineController_LS_DWork.s252_UnitDelay_DSTATE;

      /* Switch: '<S252>/Preload lowpass filter with current RPM while not on Idle' incorporates:
       *  Constant: '<S252>/Constant'
       *  Product: '<S252>/Product2'
       *  Product: '<S252>/Product3'
       *  Sum: '<S252>/Sum'
       *  Sum: '<S252>/Sum1'
       */
      if (rtb_LogicalOperator_i) {
        rtb_Product5 = BaseEngineController_LS_B.s445_RPMInst;
      } else {
        /* Product: '<S252>/Product1' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S252>/motohawk_calibration2'
         *  S-Function (motohawk_sfun_delta_time): '<S252>/motohawk_delta_time'
         */
        rtb_UnitDelay1_j = rtb_motohawk_delta_time_b /
          (InGearRPMCtrlEntryFiltC_DataStore());
        rtb_Product5 = (1.0 - rtb_UnitDelay1_j) * rtb_Sum2_g +
          rtb_motohawk_interpolation_1d2_i * rtb_UnitDelay1_j;
      }

      /* End of Switch: '<S252>/Preload lowpass filter with current RPM while not on Idle' */

      /* MinMax: '<S252>/Don't allow setpoint to ever drop below the TargetRPM' */
      BaseEngineController_LS_B.s252_DontallowsetpointtoeverdropbelowtheTargetRPM
        = (rtb_motohawk_interpolation_1d2_i >= rtb_Product5) || rtIsNaN
        (rtb_Product5) ? rtb_motohawk_interpolation_1d2_i : rtb_Product5;

      /* Sum: '<S278>/Sum2' */
      BaseEngineController_LS_B.s278_Sum2 =
        BaseEngineController_LS_B.s252_DontallowsetpointtoeverdropbelowtheTargetRPM
        - BaseEngineController_LS_B.s501_Sum1;

      /* Product: '<S278>/Product5' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S254>/motohawk_calibration5'
       */
      rtb_Product5 = BaseEngineController_LS_B.s278_Sum2 *
        (AirMinGovErrorGain_DataStore());

      /* S-Function Block: <S254>/motohawk_prelookup1 */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (AirMinGovSpeedErrorIn_DataStore()) =
          BaseEngineController_LS_B.s278_Sum2;
        (AirMinGovSpeedErrorIdx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_LS_B.s278_Sum2,
           (AirMinGovSpeedErrorIdxArr_DataStore()), 9,
           (AirMinGovSpeedErrorIdx_DataStore()));
        rtb_motohawk_prelookup1 = (AirMinGovSpeedErrorIdx_DataStore());
      }

      /* S-Function Block: <S276>/motohawk_interpolation_1d2 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d2 = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1, (real_T *)
           ((AirMinGovPGainErrorMultTbl_DataStore())), 9);
        (AirMinGovPGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d2;
      }

      /* Product: '<S278>/Product2' incorporates:
       *  Product: '<S276>/Product2'
       *  S-Function (motohawk_sfun_calibration): '<S276>/motohawk_calibration3'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S276>/motohawk_interpolation_1d2'
       *  S-Function (motohawk_sfun_prelookup): '<S254>/motohawk_prelookup1'
       */
      BaseEngineController_LS_B.s278_Product2 = (AirMinGovPGain_DataStore()) *
        rtb_motohawk_interpolation_1d2 * rtb_Product5;

      /* UnitDelay: '<S279>/Unit Delay' */
      rtb_Sum2_g = BaseEngineController_LS_DWork.s279_UnitDelay_DSTATE;

      /* S-Function Block: <S276>/motohawk_interpolation_1d3 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d3 = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1, (real_T *)
           ((AirMinGovDGainErrorMultTbl_DataStore())), 9);
        (AirMinGovDGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d3;
      }

      /* Product: '<S278>/Product4' incorporates:
       *  Product: '<S276>/Product3'
       *  S-Function (motohawk_sfun_calibration): '<S276>/motohawk_calibration2'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S276>/motohawk_interpolation_1d3'
       *  S-Function (motohawk_sfun_prelookup): '<S254>/motohawk_prelookup1'
       */
      rtb_Product4 = (AirMinGovDGain_DataStore()) *
        rtb_motohawk_interpolation_1d3 * rtb_Product5;

      /* S-Function Block: <S279>/motohawk_delta_time */
      rtb_motohawk_delta_time_bi = 0.005;

      /* Product: '<S279>/Product' incorporates:
       *  S-Function (motohawk_sfun_delta_time): '<S279>/motohawk_delta_time'
       *  Sum: '<S279>/Sum2'
       */
      BaseEngineController_LS_B.s279_Product = (rtb_Product4 - rtb_Sum2_g) /
        rtb_motohawk_delta_time_bi;

      /* Switch: '<S280>/Switch1' incorporates:
       *  Constant: '<S254>/Constant'
       *  UnitDelay: '<S280>/Unit Delay'
       */
      if (BaseEngineController_LS_B.s153_LogicalOperator) {
        BaseEngineController_LS_B.s280_Switch1 = 0.0;
      } else {
        BaseEngineController_LS_B.s280_Switch1 =
          BaseEngineController_LS_DWork.s280_UnitDelay_DSTATE;
      }

      /* End of Switch: '<S280>/Switch1' */

      /* Switch: '<S254>/Switch' incorporates:
       *  Constant: '<S254>/Constant1'
       */
      if (BaseEngineController_LS_B.s153_LogicalOperator) {
        rtb_UnitDelay1_j = 0.0;
      } else {
        /* MinMax: '<S277>/MinMax' incorporates:
         *  Sum: '<S278>/Sum1'
         */
        rtb_Sum2_g = (BaseEngineController_LS_B.s278_Product2 +
                      BaseEngineController_LS_B.s279_Product) +
          BaseEngineController_LS_B.s280_Switch1;

        /* MinMax: '<S277>/MinMax1' incorporates:
         *  MinMax: '<S277>/MinMax'
         *  S-Function (motohawk_sfun_calibration): '<S254>/motohawk_calibration2'
         *  S-Function (motohawk_sfun_calibration): '<S254>/motohawk_calibration9'
         */
        rtb_Sum2_g = (rtb_Sum2_g >= (AirMinGovPIDOutLowerLimit_DataStore())) ||
          rtIsNaN((AirMinGovPIDOutLowerLimit_DataStore())) ? rtb_Sum2_g :
          (AirMinGovPIDOutLowerLimit_DataStore());
        rtb_UnitDelay1_j = (rtb_Sum2_g <= (AirMinGovPIDOutUpperLimit_DataStore()))
          || rtIsNaN((AirMinGovPIDOutUpperLimit_DataStore())) ? rtb_Sum2_g :
          (AirMinGovPIDOutUpperLimit_DataStore());
      }

      /* End of Switch: '<S254>/Switch' */

      /* Product: '<S153>/Product1' */
      BaseEngineController_LS_B.s153_MinGovAirPID =
        BaseEngineController_LS_B.s262_MinMax1 * rtb_UnitDelay1_j;

      /* Sum: '<S273>/Sum1' */
      BaseEngineController_LS_B.s273_Sum1 =
        BaseEngineController_LS_B.s252_DontallowsetpointtoeverdropbelowtheTargetRPM
        - BaseEngineController_LS_B.s501_Sum1;

      /* Product: '<S273>/Product4' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S253>/motohawk_calibration4'
       */
      rtb_UnitDelay1_j = BaseEngineController_LS_B.s273_Sum1 *
        (SpkMinGovErrorGain_DataStore());

      /* S-Function Block: <S253>/motohawk_prelookup1 */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (SpkMinGovSpeedErrorIn_DataStore()) =
          BaseEngineController_LS_B.s273_Sum1;
        (SpkMinGovSpeedErrorIdx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_LS_B.s273_Sum1,
           (SpkMinGovSpeedErrorIdxArr_DataStore()), 9,
           (SpkMinGovSpeedErrorIdx_DataStore()));
        rtb_motohawk_prelookup1_j = (SpkMinGovSpeedErrorIdx_DataStore());
      }

      /* S-Function Block: <S271>/motohawk_interpolation_1d2 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d2_f = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1_j, (real_T *)
           ((SpkMinGovPGainErrorMultTbl_DataStore())), 9);
        (SpkMinGovPGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d2_f;
      }

      /* Product: '<S273>/Product' incorporates:
       *  Product: '<S271>/Product2'
       *  S-Function (motohawk_sfun_calibration): '<S271>/motohawk_calibration3'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S271>/motohawk_interpolation_1d2'
       *  S-Function (motohawk_sfun_prelookup): '<S253>/motohawk_prelookup1'
       */
      BaseEngineController_LS_B.s273_Product = (SpkMinGovPGain_DataStore()) *
        rtb_motohawk_interpolation_1d2_f * rtb_UnitDelay1_j;

      /* UnitDelay: '<S274>/Unit Delay' */
      rtb_Sum2_g = BaseEngineController_LS_DWork.s274_UnitDelay_DSTATE;

      /* S-Function Block: <S271>/motohawk_interpolation_1d1 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d1 = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1_j, (real_T *)
           ((SpkMinGovDGainErrorMultTbl_DataStore())), 9);
        (SpkMinGovDGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d1;
      }

      /* Product: '<S273>/Product2' incorporates:
       *  Product: '<S271>/Product1'
       *  S-Function (motohawk_sfun_calibration): '<S271>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S271>/motohawk_interpolation_1d1'
       *  S-Function (motohawk_sfun_prelookup): '<S253>/motohawk_prelookup1'
       */
      rtb_Product2_j = (SpkMinGovDGain_DataStore()) *
        rtb_motohawk_interpolation_1d1 * rtb_UnitDelay1_j;

      /* S-Function Block: <S274>/motohawk_delta_time */
      rtb_motohawk_delta_time_n = 0.005;

      /* Product: '<S274>/Product' incorporates:
       *  S-Function (motohawk_sfun_delta_time): '<S274>/motohawk_delta_time'
       *  Sum: '<S274>/Sum2'
       */
      BaseEngineController_LS_B.s274_Product = (rtb_Product2_j - rtb_Sum2_g) /
        rtb_motohawk_delta_time_n;

      /* Switch: '<S253>/Switch' incorporates:
       *  Constant: '<S253>/Constant1'
       */
      if (rtb_RelOp_j) {
        rtb_UnitDelay1_j = 0.0;
      } else {
        /* MinMax: '<S272>/MinMax' incorporates:
         *  Sum: '<S273>/Sum'
         */
        rtb_Sum2_g = BaseEngineController_LS_B.s273_Product +
          BaseEngineController_LS_B.s274_Product;

        /* MinMax: '<S272>/MinMax1' incorporates:
         *  MinMax: '<S272>/MinMax'
         *  S-Function (motohawk_sfun_calibration): '<S253>/motohawk_calibration1'
         *  S-Function (motohawk_sfun_calibration): '<S253>/motohawk_calibration9'
         */
        rtb_Sum2_g = (rtb_Sum2_g >= (SpkMinGovPIDOutLowerLimit_DataStore())) ||
          rtIsNaN((SpkMinGovPIDOutLowerLimit_DataStore())) ? rtb_Sum2_g :
          (SpkMinGovPIDOutLowerLimit_DataStore());
        rtb_UnitDelay1_j = (rtb_Sum2_g <= (SpkMinGovPIDOutUpperLimit_DataStore()))
          || rtIsNaN((SpkMinGovPIDOutUpperLimit_DataStore())) ? rtb_Sum2_g :
          (SpkMinGovPIDOutUpperLimit_DataStore());
      }

      /* End of Switch: '<S253>/Switch' */

      /* Product: '<S153>/Product' */
      BaseEngineController_LS_B.s153_IdleSpk =
        BaseEngineController_LS_B.s262_MinMax1 * rtb_UnitDelay1_j;

      /* Outputs for Atomic SubSystem: '<S153>/AiflowOffset' */

      /* S-Function Block: <S245>/motohawk_interpolation_1d1 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d1_i = TableInterpolation1D_real_T
          (BaseEngineController_LS_B.s397_motohawk_prelookup, (real_T *)
           ((ACAirFlowOfstTbl_DataStore())), 5);
        (ACAirFlowOfst_DataStore()) = rtb_motohawk_interpolation_1d1_i;
      }

      /* Product: '<S245>/Product' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S245>/motohawk_calibration'
       */
      rtb_Sum2_g = (BaseEngineController_LS_B.s144_LogicalOperator ? (real_T)
                    ((uint8_T)(ACAirFlowOfst_Enab_DataStore())) : 0.0) *
        rtb_motohawk_interpolation_1d1_i;

      /* S-Function Block: <S245>/motohawk_interpolation_1d2 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d2_p = TableInterpolation1D_real_T
          (BaseEngineController_LS_B.s397_motohawk_prelookup, (real_T *)
           ((BaseAirflowOfstTbl_DataStore())), 5);
        (BaseAirflowOfst_DataStore()) = rtb_motohawk_interpolation_1d2_p;
      }

      /* Sum: '<S245>/Sum' incorporates:
       *  S-Function (motohawk_sfun_interpolation_1d): '<S245>/motohawk_interpolation_1d2'
       */
      rtb_Sum_e = rtb_Sum2_g + rtb_motohawk_interpolation_1d2_p;

      /* RelationalOperator: '<S256>/RelOp' incorporates:
       *  Constant: '<S256>/Constant'
       *  S-Function (motohawk_sfun_data_read): '<S245>/motohawk_data_read'
       */
      rtb_RelOp_j = (((uint8_T)EngineState_DataStore()) == 3);

      /* Logic: '<S245>/Logical Operator' incorporates:
       *  RelationalOperator: '<S245>/Relational Operator'
       *  RelationalOperator: '<S245>/Relational Operator1'
       *  UnitDelay: '<S245>/Unit Delay'
       */
      rtb_LogicalOperator_i = ((rtb_RelOp_j <
        BaseEngineController_LS_DWork.s245_UnitDelay_DSTATE) || (rtb_RelOp_j ==
        BaseEngineController_LS_DWork.s245_UnitDelay_DSTATE));

      /* S-Function Block: <S255>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s255_motohawk_delta_time_DWORK1, NULL);
        rtb_motohawk_delta_time_bc = ((real_T) delta) * 0.000001;
      }

      /* UnitDelay: '<S255>/Unit Delay' */
      rtb_Sum2_g = BaseEngineController_LS_DWork.s255_UnitDelay_DSTATE;

      /* Switch: '<S255>/Preload lowpass filter with current RPM while not on Idle' incorporates:
       *  Constant: '<S255>/Constant'
       *  Logic: '<S255>/Logical Operator'
       *  Product: '<S255>/Product2'
       *  Product: '<S255>/Product3'
       *  Sum: '<S255>/Sum'
       *  Sum: '<S255>/Sum1'
       */
      if (!rtb_LogicalOperator_i) {
        rtb_Sum2_g = BaseEngineController_LS_B.s416_Switch2;
      } else {
        /* Product: '<S255>/Product1' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S255>/motohawk_calibration2'
         *  S-Function (motohawk_sfun_delta_time): '<S255>/motohawk_delta_time'
         */
        rtb_UnitDelay1_j = rtb_motohawk_delta_time_bc /
          (IdleEntryAirRampInFiltC_DataStore());
        rtb_Sum2_g = (1.0 - rtb_UnitDelay1_j) * rtb_Sum2_g + rtb_Sum_e *
          rtb_UnitDelay1_j;
      }

      /* End of Switch: '<S255>/Preload lowpass filter with current RPM while not on Idle' */

      /* MinMax: '<S255>/Don't allow setpoint to ever drop below the TargetRPM' */
      BaseEngineController_LS_B.s255_DontallowsetpointtoeverdropbelowtheTargetRPM
        = (rtb_Sum_e >= rtb_Sum2_g) || rtIsNaN(rtb_Sum2_g) ? rtb_Sum_e :
        rtb_Sum2_g;

      /* Update for UnitDelay: '<S245>/Unit Delay' */
      BaseEngineController_LS_DWork.s245_UnitDelay_DSTATE = rtb_RelOp_j;

      /* Update for UnitDelay: '<S255>/Unit Delay' */
      BaseEngineController_LS_DWork.s255_UnitDelay_DSTATE =
        BaseEngineController_LS_B.s255_DontallowsetpointtoeverdropbelowtheTargetRPM;

      /* End of Outputs for SubSystem: '<S153>/AiflowOffset' */

      /* Saturate: '<S266>/Saturation' */
      rtb_Saturation_c = rtb_Switch_e >= 16000.0 ? 16000.0 : rtb_Switch_e <= 0.0
        ? 0.0 : rtb_Switch_e;

      /* S-Function (motohawk_sfun_data_write): '<S266>/motohawk_data_write' */
      /* Write to Data Storage as scalar: IdleEnterTimer */
      {
        IdleEnterTimer_DataStore() = rtb_Saturation_c;
      }

      /* S-Function Block: <S270>/motohawk_delta_time */
      rtb_motohawk_delta_time_n2 = 0.005;

      /* Sum: '<S250>/Sum' */
      rtb_Sum2_g = BaseEngineController_LS_B.s501_Sum1 -
        BaseEngineController_LS_B.s252_DontallowsetpointtoeverdropbelowtheTargetRPM;

      /* Switch: '<S270>/Switch' incorporates:
       *  Constant: '<S270>/Constant'
       *  RelationalOperator: '<S250>/Relational Operator2'
       *  S-Function (motohawk_sfun_calibration): '<S250>/motohawk_calibration3'
       *  S-Function (motohawk_sfun_data_read): '<S270>/motohawk_data_read'
       *  S-Function (motohawk_sfun_delta_time): '<S270>/motohawk_delta_time'
       *  Sum: '<S270>/Sum'
       */
      if (rtb_Sum2_g > (MotoringDeltaRPMLimit_DataStore())) {
        BaseEngineController_LS_B.s270_Switch = rtb_motohawk_delta_time_n2 +
          MotoringTimer_DataStore();
      } else {
        BaseEngineController_LS_B.s270_Switch = 0.0;
      }

      /* End of Switch: '<S270>/Switch' */

      /* RelationalOperator: '<S250>/Relational Operator1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S250>/motohawk_calibration1'
       */
      BaseEngineController_LS_B.s250_RelationalOperator1 =
        ((BaseEngineController_LS_B.s270_Switch >
          (MotoringDtctTimerLimit_DataStore())));

      /* DataTypeConversion: '<S250>/Data Type Conversion' */
      rtb_Sum_e = (real_T)BaseEngineController_LS_B.s250_RelationalOperator1;

      /* Saturate: '<S270>/Saturation' */
      rtb_Saturation_k = BaseEngineController_LS_B.s270_Switch >= 16000.0 ?
        16000.0 : BaseEngineController_LS_B.s270_Switch <= 0.0 ? 0.0 :
        BaseEngineController_LS_B.s270_Switch;

      /* S-Function (motohawk_sfun_data_write): '<S270>/motohawk_data_write' */
      /* Write to Data Storage as scalar: MotoringTimer */
      {
        MotoringTimer_DataStore() = rtb_Saturation_k;
      }

      /* S-Function Block: <S276>/motohawk_interpolation_1d1 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d1_b = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1, (real_T *)
           ((AirMinGovIGainErrorMultTbl_DataStore())), 9);
        (AirMinGovIGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d1_b;
      }

      /* Product: '<S278>/Product1' incorporates:
       *  Product: '<S276>/Product1'
       *  S-Function (motohawk_sfun_calibration): '<S276>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S276>/motohawk_interpolation_1d1'
       *  S-Function (motohawk_sfun_prelookup): '<S254>/motohawk_prelookup1'
       */
      rtb_Sum2_g = (AirMinGovIGain_DataStore()) *
        rtb_motohawk_interpolation_1d1_b * rtb_Product5;

      /* S-Function Block: <S280>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s280_motohawk_delta_time_DWORK1, NULL);
        rtb_motohawk_delta_time_j = ((real_T) delta) * 0.000001;
      }

      /* Sum: '<S280>/Sum' incorporates:
       *  Product: '<S280>/Product'
       *  S-Function (motohawk_sfun_delta_time): '<S280>/motohawk_delta_time'
       */
      rtb_UnitDelay1_j = rtb_Sum2_g * rtb_motohawk_delta_time_j +
        BaseEngineController_LS_B.s280_Switch1;

      /* MinMax: '<S282>/MinMax' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S254>/motohawk_calibration7'
       */
      rtb_Sum2_g = (rtb_UnitDelay1_j >= (AirMinGovITermLowerLimit_DataStore())) ||
        rtIsNaN((AirMinGovITermLowerLimit_DataStore())) ? rtb_UnitDelay1_j :
        (AirMinGovITermLowerLimit_DataStore());

      /* Update for UnitDelay: '<S267>/Unit Delay' */
      BaseEngineController_LS_DWork.s267_UnitDelay_DSTATE =
        BaseEngineController_LS_B.s445_RPMInst;

      /* Update for UnitDelay: '<S269>/Unit Delay' */
      BaseEngineController_LS_DWork.s269_UnitDelay_DSTATE = rtb_Sum1_f;

      /* Update for UnitDelay: '<S153>/Unit Delay3' */
      BaseEngineController_LS_DWork.s153_UnitDelay3_DSTATE =
        BaseEngineController_LS_B.s153_MinGovAirPID;

      /* Update for UnitDelay: '<S153>/Unit Delay1' */
      BaseEngineController_LS_DWork.s153_UnitDelay1_DSTATE =
        BaseEngineController_LS_B.s280_Switch1;

      /* Update for UnitDelay: '<S248>/state' */
      BaseEngineController_LS_DWork.s248_state_DSTATE =
        BaseEngineController_LS_B.s262_MinMax1;

      /* Update for UnitDelay: '<S153>/Unit Delay2' */
      BaseEngineController_LS_DWork.s153_UnitDelay2_DSTATE = rtb_Sum_e;

      /* Update for UnitDelay: '<S252>/Unit Delay' */
      BaseEngineController_LS_DWork.s252_UnitDelay_DSTATE =
        BaseEngineController_LS_B.s252_DontallowsetpointtoeverdropbelowtheTargetRPM;

      /* Update for UnitDelay: '<S279>/Unit Delay' */
      BaseEngineController_LS_DWork.s279_UnitDelay_DSTATE = rtb_Product4;

      /* Update for UnitDelay: '<S280>/Unit Delay' incorporates:
       *  MinMax: '<S282>/MinMax'
       *  MinMax: '<S282>/MinMax1'
       *  S-Function (motohawk_sfun_calibration): '<S254>/motohawk_calibration8'
       */
      BaseEngineController_LS_DWork.s280_UnitDelay_DSTATE = (rtb_Sum2_g <=
        (AirMinGovITermUpperLimit_DataStore())) || rtIsNaN
        ((AirMinGovITermUpperLimit_DataStore())) ? rtb_Sum2_g :
        (AirMinGovITermUpperLimit_DataStore());

      /* Update for UnitDelay: '<S274>/Unit Delay' */
      BaseEngineController_LS_DWork.s274_UnitDelay_DSTATE = rtb_Product2_j;
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
        BaseEngineController_LS_B.s255_DontallowsetpointtoeverdropbelowtheTargetRPM
        + BaseEngineController_LS_B.s423_Sum2;

      /* Outputs for Enabled SubSystem: '<S232>/InGear' incorporates:
       *  EnablePort: '<S235>/Enable'
       */
      /* Outputs for Enabled SubSystem: '<S232>/InNeutral' incorporates:
       *  EnablePort: '<S236>/Enable'
       */
      if (BaseEngineController_LS_B.s459_Merge) {
        /* S-Function (motohawk_sfun_data_read): '<S235>/motohawk_data_read' */
        rtb_MinMax_ny = MaxGovInGearSetPoint_DataStore();

        /* MinMax: '<S237>/MinMax' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S235>/motohawk_calibration3'
         */
        rtb_MinMax_ny = (rtb_MinMax_ny >= (MaxGovInGearLowerLim_DataStore())) ||
          rtIsNaN((MaxGovInGearLowerLim_DataStore())) ? rtb_MinMax_ny :
          (MaxGovInGearLowerLim_DataStore());

        /* MinMax: '<S237>/MinMax1' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S235>/motohawk_calibration5'
         */
        rtb_Merge_a = (rtb_MinMax_ny <= (MaxGovInGearUpperLim_DataStore())) ||
          rtIsNaN((MaxGovInGearUpperLim_DataStore())) ? rtb_MinMax_ny :
          (MaxGovInGearUpperLim_DataStore());

        /* S-Function (motohawk_sfun_calibration): '<S235>/motohawk_calibration4' */
        rtb_Merge1 = (MaxGovInGearRPMThresh_DataStore());

        /* S-Function (motohawk_sfun_data_write): '<S235>/motohawk_data_write' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S235>/motohawk_calibration1'
         */
        /* Write to Data Storage as scalar: MaxGovInGearSetPoint */
        {
          MaxGovInGearSetPoint_DataStore() = (MaxGovInGearSetPt_DataStore());
        }

        /* S-Function (motohawk_sfun_data_write): '<S235>/motohawk_data_write1' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S235>/motohawk_calibration2'
         */
        /* Write to Data Storage as scalar: MaxGovInGearSetPoint */
        {
          MaxGovInGearSetPoint_DataStore() = (MaxGovInGearRPMSetPt_DataStore());
        }
      } else {
        /* S-Function (motohawk_sfun_data_read): '<S236>/motohawk_data_read' */
        rtb_MinMax_c = MaxGovNtrlSetPoint_DataStore();

        /* MinMax: '<S238>/MinMax' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S236>/motohawk_calibration2'
         */
        rtb_MinMax_c = (rtb_MinMax_c >= (MaxGovNtrlLowerLim_DataStore())) ||
          rtIsNaN((MaxGovNtrlLowerLim_DataStore())) ? rtb_MinMax_c :
          (MaxGovNtrlLowerLim_DataStore());

        /* MinMax: '<S238>/MinMax1' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S236>/motohawk_calibration5'
         */
        rtb_Merge_a = (rtb_MinMax_c <= (MaxGovNtrlUpperLim_DataStore())) ||
          rtIsNaN((MaxGovNtrlUpperLim_DataStore())) ? rtb_MinMax_c :
          (MaxGovNtrlUpperLim_DataStore());

        /* S-Function (motohawk_sfun_calibration): '<S236>/motohawk_calibration3' */
        rtb_Merge1 = (MaxGovNtrlRPMThresh_DataStore());

        /* S-Function (motohawk_sfun_data_write): '<S236>/motohawk_data_write' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S236>/motohawk_calibration1'
         */
        /* Write to Data Storage as scalar: MaxGovNtrlSetPoint */
        {
          MaxGovNtrlSetPoint_DataStore() = (MaxGovNtrlSetPt_DataStore());
        }

        /* S-Function (motohawk_sfun_data_write): '<S236>/motohawk_data_write1' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S236>/motohawk_calibration4'
         */
        /* Write to Data Storage as scalar: MaxGovNtrlSetPoint */
        {
          MaxGovNtrlSetPoint_DataStore() = (MaxGovNtrlRPMSetPt_DataStore());
        }
      }

      /* End of Outputs for SubSystem: '<S232>/InNeutral' */
      /* End of Outputs for SubSystem: '<S232>/InGear' */

      /* RelationalOperator: '<S232>/Relational Operator' incorporates:
       *  Sum: '<S232>/Sum1'
       */
      rtb_RelationalOperator_j = (BaseEngineController_LS_B.s445_RPMInst >
        rtb_Merge_a - rtb_Merge1);

      /* RelationalOperator: '<S230>/Relational Operator2' */
      rtb_RelationalOperator2_n = (BaseEngineController_LS_B.s445_RPMInst >
        rtb_Merge_a);

      /* RelationalOperator: '<S230>/Relational Operator' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S230>/motohawk_calibration5'
       *  Sum: '<S230>/Sum'
       */
      rtb_RelationalOperator_c = (BaseEngineController_LS_B.s152_Sum <=
        BaseEngineController_LS_B.s416_Switch2 - (MaxGovTPSHyst_DataStore()));

      /* Logic: '<S230>/Logical Operator1' incorporates:
       *  RelationalOperator: '<S230>/Relational Operator1'
       *  S-Function (motohawk_sfun_calibration): '<S230>/motohawk_calibration5'
       *  Sum: '<S230>/Sum1'
       */
      rtb_LogicalOperator1_l = (rtb_RelationalOperator_j &&
        (BaseEngineController_LS_B.s152_Sum > (MaxGovTPSHyst_DataStore()) +
         BaseEngineController_LS_B.s416_Switch2));

      /* MATLAB Function Block: '<S230>/MaxGOV Stateflow' incorporates:
       *  Logic: '<S230>/Logical Operator'
       *  Logic: '<S230>/Logical Operator2'
       *  Logic: '<S230>/Logical Operator3'
       *  S-Function (motohawk_sfun_data_read): '<S230>/motohawk_data_read'
       */

      /* MATLAB Function 'Foreground/Control/Controller/Run/MaxGovernor/MaxGovState/MaxGOV Stateflow': '<S234>:1' */
      if ((MaxGov_DataStore() == 0.0) && ((rtb_RelationalOperator_j ||
            rtb_RelationalOperator2_n) == 1)) {
        /* '<S234>:1:3' */
        /* '<S234>:1:4' */
        rtb_StateO = 1.0;
      } else if ((MaxGov_DataStore() == 1.0) && (rtb_RelationalOperator_c ==
                  TRUE)) {
        /* '<S234>:1:5' */
        /* '<S234>:1:6' */
        rtb_StateO = 2.0;
      } else if ((MaxGov_DataStore() == 2.0) && ((rtb_LogicalOperator1_l ||
                   rtb_RelationalOperator2_n) == 1)) {
        /* '<S234>:1:7' */
        /* '<S234>:1:8' */
        rtb_StateO = 1.0;
      } else if ((MaxGov_DataStore() == 2.0) && (!rtb_RelationalOperator_j ==
                  TRUE)) {
        /* '<S234>:1:9' */
        /* '<S234>:1:10' */
        rtb_StateO = 0.0;
      } else {
        /* '<S234>:1:12' */
        rtb_StateO = MaxGov_DataStore();
      }

      if (MaxGov_DataStore() == 0.0) {
        /* '<S234>:1:15' */
        /* '<S234>:1:16' */
        rtb_ETCMode = 0;

        /* '<S234>:1:17' */
        rtb_Hold = 0;

        /* '<S234>:1:18' */
      } else if (MaxGov_DataStore() == 1.0) {
        /* '<S234>:1:19' */
        /* '<S234>:1:20' */
        rtb_ETCMode = 1;

        /* '<S234>:1:21' */
        rtb_Hold = 0;

        /* '<S234>:1:22' */
      } else if (MaxGov_DataStore() == 2.0) {
        /* '<S234>:1:23' */
        /* '<S234>:1:24' */
        rtb_ETCMode = 0;

        /* '<S234>:1:25' */
        rtb_Hold = 1;

        /* '<S234>:1:26' */
      } else {
        /* '<S234>:1:28' */
        rtb_ETCMode = 0;

        /* '<S234>:1:29' */
        rtb_Hold = 0;

        /* '<S234>:1:30' */
      }

      /* End of MATLAB Function Block: '<S230>/MaxGOV Stateflow' */

      /* DataTypeConversion: '<S230>/Data Type Conversion' */
      BaseEngineController_LS_B.s230_DataTypeConversion = 0;

      /* Logic: '<S231>/Logical Operator' incorporates:
       *  UnitDelay: '<S152>/Unit Delay'
       */
      rtb_RelationalOperator_j =
        !BaseEngineController_LS_DWork.s152_UnitDelay_DSTATE;

      /* S-Function Block: <S231>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s231_motohawk_delta_time_DWORK1, NULL);
        rtb_motohawk_delta_time_d4 = ((real_T) delta) * 0.000001;
      }

      /* UnitDelay: '<S231>/Unit Delay' */
      rtb_Reset = BaseEngineController_LS_DWork.s231_UnitDelay_DSTATE;

      /* Switch: '<S231>/Preload lowpass filter with current RPM while not on Idle' incorporates:
       *  Constant: '<S231>/Constant'
       *  Product: '<S231>/Product2'
       *  Product: '<S231>/Product3'
       *  Sum: '<S231>/Sum'
       *  Sum: '<S231>/Sum1'
       */
      if (rtb_RelationalOperator_j) {
        rtb_alpha_o = BaseEngineController_LS_B.s445_RPMInst;
      } else {
        /* Product: '<S231>/Product1' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S231>/motohawk_calibration2'
         *  S-Function (motohawk_sfun_delta_time): '<S231>/motohawk_delta_time'
         */
        rtb_alpha_o = rtb_motohawk_delta_time_d4 /
          (MaxGovRPMCtrlEntryFiltC_DataStore());
        rtb_alpha_o = (1.0 - rtb_alpha_o) * rtb_Reset + rtb_Merge_a *
          rtb_alpha_o;
      }

      /* End of Switch: '<S231>/Preload lowpass filter with current RPM while not on Idle' */

      /* MinMax: '<S231>/Don't allow setpoint to ever go above the TargetRPM' */
      BaseEngineController_LS_B.s231_DontallowsetpointtoevergoabovetheTargetRPM =
        (rtb_Merge_a <= rtb_alpha_o) || rtIsNaN(rtb_alpha_o) ? rtb_Merge_a :
        rtb_alpha_o;

      /* DataTypeConversion: '<S230>/Data Type Conversion1' */
      rtb_Reset = fmod((real_T)rtb_Hold, 256.0);
      BaseEngineController_LS_B.s230_DataTypeConversion1 = (int8_T)(rtb_Reset <
        0.0 ? (int8_T)-(int8_T)(uint8_T)-rtb_Reset : (int8_T)(uint8_T)rtb_Reset);

      /* Switch: '<S233>/Switch1' */
      if (BaseEngineController_LS_B.s230_DataTypeConversion1 >= 1) {
        rtb_alpha_o =
          BaseEngineController_LS_B.s231_DontallowsetpointtoevergoabovetheTargetRPM;
      } else {
        rtb_alpha_o = BaseEngineController_LS_B.s445_RPMInst;
      }

      /* End of Switch: '<S233>/Switch1' */

      /* Sum: '<S240>/Sum2' */
      BaseEngineController_LS_B.s240_Sum2 =
        BaseEngineController_LS_B.s231_DontallowsetpointtoevergoabovetheTargetRPM
        - rtb_alpha_o;

      /* Product: '<S240>/Product5' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S233>/motohawk_calibration5'
       */
      rtb_alpha_o = BaseEngineController_LS_B.s240_Sum2 *
        (MaxGovErrorGain_DataStore());

      /* S-Function Block: <S233>/motohawk_prelookup1 */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (MaxGovSpeedErrorIn_DataStore()) = BaseEngineController_LS_B.s240_Sum2;
        (MaxGovSpeedErrorIdx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_LS_B.s240_Sum2,
           (MaxGovSpeedErrorIdxArr_DataStore()), 9,
           (MaxGovSpeedErrorIdx_DataStore()));
        rtb_motohawk_prelookup1_f = (MaxGovSpeedErrorIdx_DataStore());
      }

      /* S-Function Block: <S233>/motohawk_interpolation_1d3 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d3_m = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1_f, (real_T *)
           ((MaxGovPGainErrorMultTbl_DataStore())), 9);
        (MaxGovPGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d3_m;
      }

      /* Product: '<S240>/Product2' incorporates:
       *  Product: '<S233>/Product4'
       *  S-Function (motohawk_sfun_calibration): '<S233>/motohawk_calibration3'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S233>/motohawk_interpolation_1d3'
       *  S-Function (motohawk_sfun_prelookup): '<S233>/motohawk_prelookup1'
       */
      BaseEngineController_LS_B.s240_Product2 = (MaxGovPGain_DataStore()) *
        rtb_motohawk_interpolation_1d3_m * rtb_alpha_o;

      /* UnitDelay: '<S241>/Unit Delay' */
      rtb_Reset = BaseEngineController_LS_DWork.s241_UnitDelay_DSTATE;

      /* S-Function Block: <S233>/motohawk_interpolation_1d2 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d2_c = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1_f, (real_T *)
           ((MaxGovDGainErrorMultTbl_DataStore())), 9);
        (MaxGovDGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d2_c;
      }

      /* Product: '<S240>/Product4' incorporates:
       *  Product: '<S233>/Product3'
       *  S-Function (motohawk_sfun_calibration): '<S233>/motohawk_calibration6'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S233>/motohawk_interpolation_1d2'
       *  S-Function (motohawk_sfun_prelookup): '<S233>/motohawk_prelookup1'
       */
      rtb_Merge_a = (MaxGovDGain_DataStore()) * rtb_motohawk_interpolation_1d2_c
        * rtb_alpha_o;

      /* S-Function Block: <S241>/motohawk_delta_time */
      rtb_motohawk_delta_time_m = 0.005;

      /* Product: '<S241>/Product' incorporates:
       *  S-Function (motohawk_sfun_delta_time): '<S241>/motohawk_delta_time'
       *  Sum: '<S241>/Sum2'
       */
      BaseEngineController_LS_B.s241_Product = (rtb_Merge_a - rtb_Reset) /
        rtb_motohawk_delta_time_m;

      /* Outputs for Atomic SubSystem: '<S152>/I-Term Preload' */

      /* S-Function Block: <S229>/motohawk_interpolation_1d4 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d4_k = TableInterpolation1D_real_T
          (BaseEngineController_LS_B.s371_RPMAccel17Idx, (real_T *)
           ((MaxGovPreloadITermTbl_DataStore())), 17);
        (MaxGovPreloadITerm_DataStore()) = rtb_motohawk_interpolation_1d4_k;
      }

      /* Sum: '<S229>/Sum' incorporates:
       *  S-Function (motohawk_sfun_interpolation_1d): '<S229>/motohawk_interpolation_1d4'
       */
      BaseEngineController_LS_B.s229_Sum = BaseEngineController_LS_B.s152_Sum -
        rtb_motohawk_interpolation_1d4_k;

      /* End of Outputs for SubSystem: '<S152>/I-Term Preload' */

      /* Switch: '<S242>/Switch1' incorporates:
       *  DataTypeConversion: '<S242>/Data Type Conversion'
       *  UnitDelay: '<S242>/Unit Delay'
       */
      if (BaseEngineController_LS_B.s230_DataTypeConversion != 0) {
        BaseEngineController_LS_B.s242_Switch1 =
          BaseEngineController_LS_B.s229_Sum;
      } else {
        BaseEngineController_LS_B.s242_Switch1 =
          BaseEngineController_LS_DWork.s242_UnitDelay_DSTATE;
      }

      /* End of Switch: '<S242>/Switch1' */

      /* Switch: '<S233>/Switch' incorporates:
       *  Constant: '<S233>/Constant'
       */
      if (BaseEngineController_LS_B.s230_DataTypeConversion >= 1) {
        BaseEngineController_LS_B.s233_Switch = 0.0;
      } else {
        /* MinMax: '<S239>/MinMax' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S233>/motohawk_calibration9'
         *  Sum: '<S240>/Sum1'
         */
        rtb_Reset = (BaseEngineController_LS_B.s240_Product2 +
                     BaseEngineController_LS_B.s241_Product) +
          BaseEngineController_LS_B.s242_Switch1;
        rtb_Reset = (rtb_Reset >= (MaxGovPIDOutLowerLimit_DataStore())) ||
          rtIsNaN((MaxGovPIDOutLowerLimit_DataStore())) ? rtb_Reset :
          (MaxGovPIDOutLowerLimit_DataStore());

        /* MinMax: '<S239>/MinMax1' incorporates:
         *  MinMax: '<S239>/MinMax'
         *  S-Function (motohawk_sfun_calibration): '<S233>/motohawk_calibration2'
         */
        BaseEngineController_LS_B.s233_Switch = (rtb_Reset <=
          (MaxGovPIDOutUpperLimit_DataStore())) || rtIsNaN
          ((MaxGovPIDOutUpperLimit_DataStore())) ? rtb_Reset :
          (MaxGovPIDOutUpperLimit_DataStore());
      }

      /* End of Switch: '<S233>/Switch' */

      /* S-Function (motohawk_sfun_data_write): '<S230>/motohawk_data_write' */
      /* Write to Data Storage as scalar: MaxGov */
      {
        MaxGov_DataStore() = rtb_StateO;
      }

      /* MultiPortSwitch: '<S230>/Multiport Switch' incorporates:
       *  Constant: '<S230>/Constant'
       *  DataTypeConversion: '<S230>/Data Type Conversion2'
       *  S-Function (motohawk_sfun_calibration): '<S230>/motohawk_calibration1'
       */
      if ((MaxGovDisable_DataStore()) == FALSE) {
        /* DataTypeConversion: '<S230>/Data Type Conversion2' */
        rtb_Reset = fmod((real_T)rtb_ETCMode, 256.0);
        BaseEngineController_LS_B.s230_MultiportSwitch = (((rtb_Reset < 0.0 ?
          (int8_T)-(int8_T)(uint8_T)-rtb_Reset : (int8_T)(uint8_T)rtb_Reset) !=
          0));
      } else {
        BaseEngineController_LS_B.s230_MultiportSwitch = FALSE;
      }

      /* End of MultiPortSwitch: '<S230>/Multiport Switch' */

      /* S-Function Block: <S233>/motohawk_interpolation_1d4 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d4 = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1_f, (real_T *)
           ((MaxGovIGainErrorMultTbl_DataStore())), 9);
        (MaxGovIGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d4;
      }

      /* Product: '<S240>/Product1' incorporates:
       *  Product: '<S233>/Product5'
       *  S-Function (motohawk_sfun_calibration): '<S233>/motohawk_calibration4'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S233>/motohawk_interpolation_1d4'
       *  S-Function (motohawk_sfun_prelookup): '<S233>/motohawk_prelookup1'
       */
      rtb_Reset = (MaxGovIGain_DataStore()) * rtb_motohawk_interpolation_1d4 *
        rtb_alpha_o;

      /* S-Function Block: <S242>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s242_motohawk_delta_time_DWORK1, NULL);
        rtb_motohawk_delta_time_l = ((real_T) delta) * 0.000001;
      }

      /* Sum: '<S242>/Sum' incorporates:
       *  Product: '<S242>/Product'
       *  S-Function (motohawk_sfun_delta_time): '<S242>/motohawk_delta_time'
       */
      rtb_alpha_o = rtb_Reset * rtb_motohawk_delta_time_l +
        BaseEngineController_LS_B.s242_Switch1;

      /* MinMax: '<S244>/MinMax' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S233>/motohawk_calibration7'
       */
      rtb_Reset = (rtb_alpha_o >= (MaxGovITermLowerLimit_DataStore())) ||
        rtIsNaN((MaxGovITermLowerLimit_DataStore())) ? rtb_alpha_o :
        (MaxGovITermLowerLimit_DataStore());

      /* Update for UnitDelay: '<S152>/Unit Delay' */
      BaseEngineController_LS_DWork.s152_UnitDelay_DSTATE =
        BaseEngineController_LS_B.s230_MultiportSwitch;

      /* Update for UnitDelay: '<S231>/Unit Delay' */
      BaseEngineController_LS_DWork.s231_UnitDelay_DSTATE =
        BaseEngineController_LS_B.s231_DontallowsetpointtoevergoabovetheTargetRPM;

      /* Update for UnitDelay: '<S241>/Unit Delay' */
      BaseEngineController_LS_DWork.s241_UnitDelay_DSTATE = rtb_Merge_a;

      /* Update for UnitDelay: '<S242>/Unit Delay' incorporates:
       *  MinMax: '<S244>/MinMax'
       *  MinMax: '<S244>/MinMax1'
       *  S-Function (motohawk_sfun_calibration): '<S233>/motohawk_calibration8'
       */
      BaseEngineController_LS_DWork.s242_UnitDelay_DSTATE = (rtb_Reset <=
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
          (BaseEngineController_LS_B.s399_Indexes,
           BaseEngineController_LS_B.s401_Indexes, (real_T *)
           ((SparkAdvMap_DataStore())), 17, 17);
        (SparkAdv_DataStore()) = rtb_RichEquivRatioTargetDelta;
      }

      /* S-Function Block: <S304>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d = TableInterpolation1D_real_T
          (BaseEngineController_LS_B.s397_motohawk_prelookup, (real_T *)
           ((ECT_SpkOfstTbl_DataStore())), 5);
        (ECT_SpkOfst_DataStore()) = rtb_motohawk_interpolation_1d;
      }

      /* S-Function Block: <S304>/motohawk_interpolation_2d3 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_RichEquivRatioTargetDelta_l = TableInterpolation2D_real_T
          (BaseEngineController_LS_B.s399_motohawk_prelookup1,
           BaseEngineController_LS_B.s401_motohawk_prelookup1, (real_T *)
           ((ECT_SpkOfstMultMap_DataStore())), 9, 9);
        (ECT_SpkOfstMult_DataStore()) = rtb_RichEquivRatioTargetDelta_l;
      }

      /* Product: '<S304>/Product' incorporates:
       *  S-Function (motohawk_sfun_interpolation_1d): '<S304>/motohawk_interpolation_1d'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S304>/motohawk_interpolation_2d3'
       */
      rtb_Product_h = rtb_motohawk_interpolation_1d *
        rtb_RichEquivRatioTargetDelta_l;

      /* S-Function Block: <S304>/motohawk_interpolation_1d1 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d1_o = TableInterpolation1D_real_T
          (BaseEngineController_LS_B.s398_motohawk_prelookup, (real_T *)
           ((IAT_SpkOfstTbl_DataStore())), 5);
        (IAT_SpkOfst_DataStore()) = rtb_motohawk_interpolation_1d1_o;
      }

      /* S-Function Block: <S304>/motohawk_interpolation_2d1 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_RichEquivRatioTargetDelta_h = TableInterpolation2D_real_T
          (BaseEngineController_LS_B.s399_motohawk_prelookup1,
           BaseEngineController_LS_B.s401_motohawk_prelookup1, (real_T *)
           ((IAT_SpkOfstMultMap_DataStore())), 9, 9);
        (IAT_SpkOfstMult_DataStore()) = rtb_RichEquivRatioTargetDelta_h;
      }

      /* Product: '<S304>/Product1' incorporates:
       *  S-Function (motohawk_sfun_interpolation_1d): '<S304>/motohawk_interpolation_1d1'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S304>/motohawk_interpolation_2d1'
       */
      rtb_Product1_f = rtb_motohawk_interpolation_1d1_o *
        rtb_RichEquivRatioTargetDelta_h;

      /* S-Function Block: <S304>/motohawk_interpolation_1d2 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d2_m = TableInterpolation1D_real_T
          (BaseEngineController_LS_B.s396_motohawk_prelookup, (real_T *)
           ((CAT_SpkOfstTbl_DataStore())), 5);
        (CAT_SpkOfst_DataStore()) = rtb_motohawk_interpolation_1d2_m;
      }

      /* S-Function Block: <S304>/motohawk_interpolation_2d2 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_RichEquivRatioTargetDelta_i = TableInterpolation2D_real_T
          (BaseEngineController_LS_B.s399_motohawk_prelookup1,
           BaseEngineController_LS_B.s401_motohawk_prelookup1, (real_T *)
           ((CAT_SpkOfstMultMap_DataStore())), 9, 9);
        (CAT_SpkOfstMult_DataStore()) = rtb_RichEquivRatioTargetDelta_i;
      }

      /* Sum: '<S304>/Add' incorporates:
       *  Product: '<S304>/Product2'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S304>/motohawk_interpolation_1d2'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S304>/motohawk_interpolation_2d2'
       */
      BaseEngineController_LS_B.s304_Add = (rtb_Product_h + rtb_Product1_f) +
        rtb_motohawk_interpolation_1d2_m * rtb_RichEquivRatioTargetDelta_i;

      /* S-Function Block: <S301>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (Eth11IdxIn_DataStore()) = BaseEngineController_LS_B.s523_Merge;
        (Eth11IdxIdx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_LS_B.s523_Merge, (Eth11IdxIdxArr_DataStore()),
           11, (Eth11IdxIdx_DataStore()));
        rtb_motohawk_prelookup = (Eth11IdxIdx_DataStore());
      }

      /* S-Function Block: <S301>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d_k = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup, (real_T *) ((EthSpkModTbl_DataStore())), 11);
        (EthSpkMod_DataStore()) = rtb_motohawk_interpolation_1d_k;
      }

      /* S-Function Block: <S301>/motohawk_interpolation_2d3 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_RichEquivRatioTargetDelta_m = TableInterpolation2D_real_T
          (BaseEngineController_LS_B.s399_motohawk_prelookup1,
           BaseEngineController_LS_B.s401_motohawk_prelookup1, (real_T *)
           ((Ethanol_SpkOfstMultMap_DataStore())), 9, 9);
        (Ethanol_SpkOfstMult_DataStore()) = rtb_RichEquivRatioTargetDelta_m;
      }

      /* Product: '<S301>/Product' incorporates:
       *  S-Function (motohawk_sfun_interpolation_1d): '<S301>/motohawk_interpolation_1d'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S301>/motohawk_interpolation_2d3'
       *  S-Function (motohawk_sfun_prelookup): '<S301>/motohawk_prelookup'
       */
      BaseEngineController_LS_B.s301_Product = rtb_motohawk_interpolation_1d_k *
        rtb_RichEquivRatioTargetDelta_m;

      /* S-Function Block: <S300>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (DesEqRatio09In_DataStore()) = BaseEngineController_LS_B.s191_EquivOut;
        (DesEqRatio09Idx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_LS_B.s191_EquivOut,
           (DesEqRatio09IdxArr_DataStore()), 9, (DesEqRatio09Idx_DataStore()));
        rtb_motohawk_prelookup_g = (DesEqRatio09Idx_DataStore());
      }

      /* S-Function Block: <S300>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d_h = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup_g, (real_T *) ((EqRatio_SpkOfstTbl_DataStore())),
           9);
        (EqRatio_SpkOfst_DataStore()) = rtb_motohawk_interpolation_1d_h;
      }

      /* S-Function Block: <S300>/motohawk_interpolation_2d3 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_RichEquivRatioTargetDelta_e = TableInterpolation2D_real_T
          (BaseEngineController_LS_B.s399_motohawk_prelookup1,
           BaseEngineController_LS_B.s401_motohawk_prelookup1, (real_T *)
           ((EqRatio_SpkOfsMultMap_DataStore())), 9, 9);
        (EqRatio_SpkOfsMult_DataStore()) = rtb_RichEquivRatioTargetDelta_e;
      }

      /* Product: '<S300>/Product' incorporates:
       *  S-Function (motohawk_sfun_interpolation_1d): '<S300>/motohawk_interpolation_1d'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S300>/motohawk_interpolation_2d3'
       *  S-Function (motohawk_sfun_prelookup): '<S300>/motohawk_prelookup'
       */
      BaseEngineController_LS_B.s300_Product = rtb_motohawk_interpolation_1d_h *
        rtb_RichEquivRatioTargetDelta_e;

      /* Sum: '<S155>/Apply Offsets to Base Spark Advance1' incorporates:
       *  S-Function (motohawk_sfun_interpolation_2d): '<S155>/motohawk_interpolation_2d2'
       *  Sum: '<S155>/Apply Offsets to Base Spark Advance3'
       */
      BaseEngineController_LS_B.s155_ApplyOffsetstoBaseSparkAdvance1 =
        ((((rtb_RichEquivRatioTargetDelta + BaseEngineController_LS_B.s304_Add)
           + BaseEngineController_LS_B.s301_Product) +
          BaseEngineController_LS_B.s300_Product) +
         BaseEngineController_LS_B.s153_IdleSpk) +
        BaseEngineController_LS_B.s191_SparkOut;

      /* MinMax: '<S307>/MinMax' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S303>/motohawk_calibration5'
       */
      rtb_Product_h =
        (BaseEngineController_LS_B.s155_ApplyOffsetstoBaseSparkAdvance1 >=
         (MinSparkLimit_DataStore())) || rtIsNaN((MinSparkLimit_DataStore())) ?
        BaseEngineController_LS_B.s155_ApplyOffsetstoBaseSparkAdvance1 :
        (MinSparkLimit_DataStore());

      /* Switch: '<S303>/Switch1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S303>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S303>/motohawk_interpolation_1d4'
       */
      if (BaseEngineController_LS_B.s265_RelOp) {
        /* S-Function Block: <S303>/motohawk_interpolation_1d4 */
        {
          extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T
            *tbl_data, uint32_T sz);
          rtb_motohawk_interpolation_1d4_p = TableInterpolation1D_real_T
            (BaseEngineController_LS_B.s399_motohawk_prelookup1, (real_T *)
             ((MaxSparkLimitTbl_DataStore())), 9);
          (MaxSparkLimit_DataStore()) = rtb_motohawk_interpolation_1d4_p;
        }

        rtb_Product1_f = rtb_motohawk_interpolation_1d4_p;
      } else {
        rtb_Product1_f = (MaxSparkLimitOffIdle_DataStore());
      }

      /* End of Switch: '<S303>/Switch1' */

      /* MinMax: '<S307>/MinMax1' incorporates:
       *  MinMax: '<S307>/MinMax'
       */
      BaseEngineController_LS_B.s307_MinMax1 = (rtb_Product_h <= rtb_Product1_f)
        || rtIsNaN(rtb_Product1_f) ? rtb_Product_h : rtb_Product1_f;

      /* UnitDelay: '<S302>/Unit Delay' */
      rtb_Product_h = BaseEngineController_LS_DWork.s302_UnitDelay_DSTATE;

      /* Switch: '<S302>/Switch' incorporates:
       *  UnitDelay: '<S305>/Initial Condition is True'
       */
      if (BaseEngineController_LS_DWork.s305_InitialConditionisTrue_DSTATE) {
        BaseEngineController_LS_B.s302_Switch =
          BaseEngineController_LS_B.s307_MinMax1;
      } else {
        /* Sum: '<S302>/Sum' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S302>/motohawk_calibration'
         */
        rtb_Product1_f = rtb_Product_h + (SparkAdv_DeltaHi_DataStore());

        /* MinMax: '<S306>/MinMax' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S302>/motohawk_calibration1'
         *  Sum: '<S302>/Sum1'
         */
        rtb_Product_h -= (SparkAdv_DeltaLo_DataStore());

        /* MinMax: '<S306>/MinMax1' incorporates:
         *  MinMax: '<S306>/MinMax'
         */
        rtb_Product_h = (BaseEngineController_LS_B.s307_MinMax1 >= rtb_Product_h)
          || rtIsNaN(rtb_Product_h) ? BaseEngineController_LS_B.s307_MinMax1 :
          rtb_Product_h;
        BaseEngineController_LS_B.s302_Switch = (rtb_Product_h <= rtb_Product1_f)
          || rtIsNaN(rtb_Product1_f) ? rtb_Product_h : rtb_Product1_f;
      }

      /* End of Switch: '<S302>/Switch' */

      /* S-Function Block: <S155>/motohawk_interpolation_2d1 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        BaseEngineController_LS_B.s155_motohawk_interpolation_2d1 =
          TableInterpolation2D_real_T
          (BaseEngineController_LS_B.s399_motohawk_prelookup1,
           BaseEngineController_LS_B.s401_motohawk_prelookup1, (real_T *)
           ((BaseSparkEnergyMap_DataStore())), 9, 9);
        (BaseSparkEnergy_DataStore()) =
          BaseEngineController_LS_B.s155_motohawk_interpolation_2d1;
      }

      /* Update for UnitDelay: '<S305>/Initial Condition is True' incorporates:
       *  Constant: '<S305>/False After First Sample'
       */
      BaseEngineController_LS_DWork.s305_InitialConditionisTrue_DSTATE = FALSE;

      /* Update for UnitDelay: '<S302>/Unit Delay' */
      BaseEngineController_LS_DWork.s302_UnitDelay_DSTATE =
        BaseEngineController_LS_B.s302_Switch;
    }
  }
}
