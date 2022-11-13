/*
 * Trigger_FGND_5XRTI_PERIODIC_1295p0007.c
 *
 * Code generation for model "BaseEngineController_LS.mdl".
 *
 * Model version              : 1.2107
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Sat Nov 12 21:04:35 2022
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_LS.h"
#include "BaseEngineController_LS_private.h"

void Trigger_FGND_5XRTI_PERIODIC_1295p0007(void)
{
  /* Named constants for Stateflow: '<S1000>/ECUP Latch' */
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
      real_T rtb_MinMax1_a;
      real_T rtb_motohawk_delta_time_e;
      real_T rtb_Saturation_cl;
      real_T rtb_motohawk_interpolation_1d2_p;
      real_T rtb_motohawk_delta_time_bc;
      real_T rtb_motohawk_interpolation_1d1_i;
      real_T rtb_Switch_e;
      int16_T rtb_motohawk_interpolation_1d2_i;
      index_T rtb_motohawk_prelookup1;
      index_T rtb_motohawk_prelookup1_j;
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

      /* Sum: '<S268>/Sum2' incorporates:
       *  UnitDelay: '<S268>/Unit Delay'
       */
      rtb_Sum2_g = BaseEngineController_LS_B.s444_RPMInst -
        BaseEngineController_LS_DWork.s268_UnitDelay_DSTATE;

      /* S-Function Block: <S268>/motohawk_delta_time */
      rtb_motohawk_delta_time_h = 0.005;

      /* Product: '<S268>/Product' incorporates:
       *  S-Function (motohawk_sfun_delta_time): '<S268>/motohawk_delta_time'
       */
      rtb_Sum2_g /= rtb_motohawk_delta_time_h;

      /* S-Function Block: <S269>/motohawk_delta_time */
      rtb_Switch_e = 0.005;

      /* Product: '<S269>/Product' incorporates:
       *  MinMax: '<S269>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S269>/motohawk_calibration'
       */
      rtb_Switch_e /= (rtb_Switch_e >= (RPMFallingFiltConst_DataStore())) ||
        rtIsNaN((RPMFallingFiltConst_DataStore())) ? rtb_Switch_e :
        (RPMFallingFiltConst_DataStore());

      /* Sum: '<S270>/Sum1' incorporates:
       *  Constant: '<S270>/Constant'
       *  Product: '<S270>/Product'
       *  Product: '<S270>/Product1'
       *  Sum: '<S270>/Sum'
       *  UnitDelay: '<S270>/Unit Delay'
       */
      rtb_Sum1_f = (1.0 - rtb_Switch_e) *
        BaseEngineController_LS_DWork.s270_UnitDelay_DSTATE + rtb_Sum2_g *
        rtb_Switch_e;

      /* RelationalOperator: '<S264>/Relational Operator' incorporates:
       *  Gain: '<S264>/Falling RPM is Negative Derivative'
       *  S-Function (motohawk_sfun_calibration): '<S264>/motohawk_calibration'
       */
      BaseEngineController_LS_B.s264_RelationalOperator = ((rtb_Sum1_f <
        -(RPMFallingRate_DataStore())));

      /* DataTypeConversion: '<S250>/Data Type Conversion' */
      if (rtIsNaN(BaseEngineController_LS_B.s444_RPMInst) || rtIsInf
          (BaseEngineController_LS_B.s444_RPMInst)) {
        rtb_Sum2_g = 0.0;
      } else {
        rtb_Sum2_g = fmod(floor(BaseEngineController_LS_B.s444_RPMInst), 65536.0);
      }

      rtb_DataTypeConversion_f = (int16_T)(rtb_Sum2_g < 0.0 ? (int16_T)-(int16_T)
        (uint16_T)-rtb_Sum2_g : (int16_T)(uint16_T)rtb_Sum2_g);

      /* End of DataTypeConversion: '<S250>/Data Type Conversion' */

      /* Outputs for Atomic SubSystem: '<S153>/Base RPM Set Pt' */

      /* S-Function Block: <S248>/motohawk_interpolation_1d2 */
      {
        extern int16_T TableInterpolation1D_int16_T(uint16_T idx, int16_T
          *tbl_data, uint32_T sz);
        rtb_motohawk_interpolation_1d2_i = TableInterpolation1D_int16_T
          (BaseEngineController_LS_B.s394_motohawk_prelookup, (int16_T *)
           ((MinGovClntRPMSetPtTbl_DataStore())), 5);
        (MinGovClntRPMSetPt_DataStore()) = rtb_motohawk_interpolation_1d2_i;
      }

      /* End of Outputs for SubSystem: '<S153>/Base RPM Set Pt' */

      /* Sum: '<S250>/Sum' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S250>/motohawk_calibration4'
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

      /* End of Sum: '<S250>/Sum' */

      /* RelationalOperator: '<S250>/Relational Operator' incorporates:
       *  Sum: '<S250>/Sum'
       */
      BaseEngineController_LS_B.s250_RelationalOperator =
        ((rtb_DataTypeConversion_f < tmp));

      /* Sum: '<S250>/Sum2' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S250>/motohawk_calibration6'
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

      /* End of Sum: '<S250>/Sum2' */

      /* RelationalOperator: '<S250>/Relational Operator3' incorporates:
       *  Sum: '<S250>/Sum2'
       */
      BaseEngineController_LS_B.s250_RelationalOperator3 =
        ((rtb_DataTypeConversion_f < tmp));

      /* MultiPortSwitch: '<S250>/Multiport Switch1' incorporates:
       *  S-Function (motohawk_sfun_data_read): '<S250>/motohawk_data_read1'
       */
      if (AirControlSource_DataStore() == FALSE) {
        rtb_Switch_e = BaseEngineController_LS_B.s406_Switch1;
      } else {
        rtb_Switch_e = BaseEngineController_LS_B.s413_Switch2;
      }

      /* End of MultiPortSwitch: '<S250>/Multiport Switch1' */
      /* RelationalOperator: '<S250>/Relational Operator1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S250>/motohawk_calibration5'
       */
      BaseEngineController_LS_B.s250_RelationalOperator1 = ((rtb_Switch_e <
        (MinGovEntryAirPcnt_DataStore())));

      /* MultiPortSwitch: '<S250>/Multiport Switch' incorporates:
       *  Constant: '<S250>/Constant'
       *  RelationalOperator: '<S250>/Relational Operator4'
       *  S-Function (motohawk_sfun_data_read): '<S250>/motohawk_data_read1'
       *  UnitDelay: '<S153>/Unit Delay3'
       */
      if (AirControlSource_DataStore() == FALSE) {
        rtb_RelationalOperator2_e = (BaseEngineController_LS_B.s421_Sum2 >
          BaseEngineController_LS_DWork.s153_UnitDelay3_DSTATE);
      } else {
        rtb_RelationalOperator2_e = TRUE;
      }

      /* End of MultiPortSwitch: '<S250>/Multiport Switch' */

      /* Logic: '<S250>/Logical Operator' incorporates:
       *  RelationalOperator: '<S250>/Relational Operator2'
       *  S-Function (motohawk_sfun_calibration): '<S250>/motohawk_calibration3'
       *  S-Function (motohawk_sfun_calibration): '<S250>/motohawk_calibration5'
       *  Sum: '<S250>/Sum1'
       */
      BaseEngineController_LS_B.s250_LogicalOperator = (((rtb_Switch_e >=
        (MinGovEntryAirPcnt_DataStore()) + (MinGovAirPcntHyst_DataStore())) &&
        rtb_RelationalOperator2_e));

      /* S-Function Block: <S267>/motohawk_delta_time */
      rtb_motohawk_delta_time_d = 0.005;

      /* Switch: '<S267>/Switch' incorporates:
       *  Constant: '<S267>/Constant'
       *  S-Function (motohawk_sfun_data_read): '<S267>/motohawk_data_read'
       *  S-Function (motohawk_sfun_delta_time): '<S267>/motohawk_delta_time'
       *  Sum: '<S267>/Sum'
       */
      if (BaseEngineController_LS_B.s250_RelationalOperator1) {
        rtb_Switch_e = rtb_motohawk_delta_time_d + IdleEnterTimer_DataStore();
      } else {
        rtb_Switch_e = 0.0;
      }

      /* End of Switch: '<S267>/Switch' */
      /* RelationalOperator: '<S250>/Relational Operator5' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S250>/motohawk_calibration2'
       */
      BaseEngineController_LS_B.s250_RelationalOperator5 = ((rtb_Switch_e >
        (MinGovEntryAirTimeThresh_DataStore())));

      /* Stateflow: '<S250>/IdleStateMachine' */
      BaseEngineController_LS_IdleStateMachine();

      /* RelationalOperator: '<S266>/RelOp' incorporates:
       *  Constant: '<S266>/Constant'
       */
      BaseEngineController_LS_B.s266_RelOp =
        ((BaseEngineController_LS_B.s265_IdleState == 2));

      /* UnitDelay: '<S153>/Unit Delay1' */
      rtb_UnitDelay1_j = BaseEngineController_LS_DWork.s153_UnitDelay1_DSTATE;

      /* Outputs for Enabled SubSystem: '<S153>/Base Airflow Table Adapt' incorporates:
       *  EnablePort: '<S247>/Enable'
       */
      if (BaseEngineController_LS_B.s266_RelOp) {
        /* Product: '<S247>/Product0' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S247>/motohawk_calibration2'
         */
        rtb_Sum2_g = rtb_UnitDelay1_j * (BaseAirflowAdaptGain_DataStore());

        /* MinMax: '<S262>/MinMax' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S260>/motohawk_calibration'
         */
        rtb_Sum2_g = (rtb_Sum2_g >= (BaseAirflowAdaptErrorLwrLim_DataStore())) ||
          rtIsNaN((BaseAirflowAdaptErrorLwrLim_DataStore())) ? rtb_Sum2_g :
          (BaseAirflowAdaptErrorLwrLim_DataStore());

        /* MinMax: '<S262>/MinMax1' incorporates:
         *  MinMax: '<S262>/MinMax'
         *  S-Function (motohawk_sfun_calibration): '<S260>/motohawk_calibration1'
         */
        rtb_MinMax1_a = (rtb_Sum2_g <= (BaseAirflowAdaptErrorUprLim_DataStore()))
          || rtIsNaN((BaseAirflowAdaptErrorUprLim_DataStore())) ? rtb_Sum2_g :
          (BaseAirflowAdaptErrorUprLim_DataStore());

        /* Outputs for Atomic SubSystem: '<S247>/Idle Control Enable Delay' */

        /* S-Function Block: <S261>/motohawk_delta_time */
        rtb_motohawk_delta_time_e = 0.005;

        /* Switch: '<S261>/Switch' incorporates:
         *  Constant: '<S261>/Constant'
         *  S-Function (motohawk_sfun_data_read): '<S261>/motohawk_data_read'
         *  S-Function (motohawk_sfun_delta_time): '<S261>/motohawk_delta_time'
         *  Sum: '<S261>/Sum'
         */
        if (BaseEngineController_LS_B.s266_RelOp) {
          rtb_Sum2_g = rtb_motohawk_delta_time_e + BaseAirflowTimer_DataStore();
        } else {
          rtb_Sum2_g = 0.0;
        }

        /* End of Switch: '<S261>/Switch' */
        /* RelationalOperator: '<S259>/Relational Operator' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S259>/motohawk_calibration1'
         */
        rtb_RelationalOperator2_e = (rtb_Sum2_g >
          (BaseAirflowAdaptDelayTime_DataStore()));

        /* Saturate: '<S261>/Saturation' */
        rtb_Saturation_cl = rtb_Sum2_g >= 16000.0 ? 16000.0 : rtb_Sum2_g <= 0.0 ?
          0.0 : rtb_Sum2_g;

        /* S-Function (motohawk_sfun_data_write): '<S261>/motohawk_data_write' */
        /* Write to Data Storage as scalar: BaseAirflowTimer */
        {
          BaseAirflowTimer_DataStore() = rtb_Saturation_cl;
        }

        /* End of Outputs for SubSystem: '<S247>/Idle Control Enable Delay' */

        /* Logic: '<S247>/Logical Operator1' incorporates:
         *  Abs: '<S247>/Abs'
         *  RelationalOperator: '<S247>/Relational Operator'
         *  S-Function (motohawk_sfun_calibration): '<S247>/motohawk_calibration3'
         *  S-Function (motohawk_sfun_calibration): '<S247>/motohawk_calibration4'
         */
        BaseEngineController_LS_B.s247_LogicalOperator1 =
          (((BaseAirflowAdaptEnable_DataStore()) && rtb_RelationalOperator2_e &&
            (fabs(rtb_UnitDelay1_j) <= (BaseAirflowAdaptDelta_DataStore()))));

        /* Outputs for Enabled SubSystem: '<S247>/Adapt Base Airflow Table' incorporates:
         *  EnablePort: '<S258>/Enable'
         */
        if (BaseEngineController_LS_B.s247_LogicalOperator1) {
          /* S-Function Block: <S258>/motohawk_adapt_table */
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

        /* End of Outputs for SubSystem: '<S247>/Adapt Base Airflow Table' */
      }

      /* End of Outputs for SubSystem: '<S153>/Base Airflow Table Adapt' */
      /* S-Function Block: <S249>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s249_motohawk_delta_time_DWORK1, NULL);
        rtb_motohawk_delta_time_c = ((real_T) delta) * 0.000001;
      }

      /* MultiPortSwitch: '<S249>/Multiport Switch' incorporates:
       *  Gain: '<S249>/Ramp Down'
       *  Product: '<S249>/Product'
       *  Product: '<S249>/Product1'
       *  S-Function (motohawk_sfun_delta_time): '<S249>/motohawk_delta_time'
       */
      if (BaseEngineController_LS_B.s266_RelOp == FALSE) {
        /* Switch: '<S249>/Switch' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S153>/motohawk_calibration3'
         *  S-Function (motohawk_sfun_delta_time): '<S249>/motohawk_delta_time'
         */
        if ((IdleExitTimeConst_DataStore()) > 0.0) {
          rtb_Sum2_g = (IdleExitTimeConst_DataStore());
        } else {
          rtb_Sum2_g = rtb_motohawk_delta_time_c;
        }

        /* End of Switch: '<S249>/Switch' */
        rtb_Product5 = rtb_motohawk_delta_time_c / rtb_Sum2_g * -1.0;
      } else {
        rtb_Product5 = rtb_motohawk_delta_time_c / rtb_motohawk_delta_time_c;
      }

      /* End of MultiPortSwitch: '<S249>/Multiport Switch' */

      /* Sum: '<S249>/Sum' incorporates:
       *  UnitDelay: '<S249>/state'
       */
      rtb_Product5 += BaseEngineController_LS_DWork.s249_state_DSTATE;

      /* MinMax: '<S263>/MinMax1' incorporates:
       *  Constant: '<S249>/Constant'
       *  Constant: '<S249>/Constant1'
       *  MinMax: '<S263>/MinMax'
       */
      rtb_Sum2_g = rtb_Product5 >= 0.0 ? rtb_Product5 : 0.0;
      BaseEngineController_LS_B.s263_MinMax1 = rtb_Sum2_g <= 1.0 ? rtb_Sum2_g :
        1.0;

      /* RelationalOperator: '<S252>/RelOp' incorporates:
       *  Constant: '<S252>/Constant'
       */
      rtb_RelationalOperator2_e = (BaseEngineController_LS_B.s263_MinMax1 == 0.0);

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
      BaseEngineController_LS_B.s153_LogicalOperator =
        ((rtb_RelationalOperator2_e ||
          BaseEngineController_LS_B.s153_HitCrossing1));

      /* DataTypeConversion: '<S153>/Data Type Conversion' */
      rtb_DataTypeConversion_c = (real_T)rtb_motohawk_interpolation_1d2_i;

      /* Logic: '<S253>/Logical Operator' */
      rtb_LogicalOperator_i = !BaseEngineController_LS_B.s266_RelOp;

      /* S-Function Block: <S253>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s253_motohawk_delta_time_DWORK1, NULL);
        rtb_motohawk_delta_time_b = ((real_T) delta) * 0.000001;
      }

      /* UnitDelay: '<S253>/Unit Delay' */
      rtb_Sum2_g = BaseEngineController_LS_DWork.s253_UnitDelay_DSTATE;

      /* Switch: '<S253>/Preload lowpass filter with current RPM while not on Idle' incorporates:
       *  Constant: '<S253>/Constant'
       *  Product: '<S253>/Product2'
       *  Product: '<S253>/Product3'
       *  Sum: '<S253>/Sum'
       *  Sum: '<S253>/Sum1'
       */
      if (rtb_LogicalOperator_i) {
        rtb_Product5 = BaseEngineController_LS_B.s444_RPMInst;
      } else {
        /* Product: '<S253>/Product1' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S253>/motohawk_calibration2'
         *  S-Function (motohawk_sfun_delta_time): '<S253>/motohawk_delta_time'
         */
        rtb_UnitDelay1_j = rtb_motohawk_delta_time_b /
          (InGearRPMCtrlEntryFiltC_DataStore());
        rtb_Product5 = (1.0 - rtb_UnitDelay1_j) * rtb_Sum2_g +
          rtb_DataTypeConversion_c * rtb_UnitDelay1_j;
      }

      /* End of Switch: '<S253>/Preload lowpass filter with current RPM while not on Idle' */

      /* MinMax: '<S253>/Don't allow setpoint to ever drop below the TargetRPM' */
      BaseEngineController_LS_B.s253_DontallowsetpointtoeverdropbelowtheTargetRPM
        = (rtb_DataTypeConversion_c >= rtb_Product5) || rtIsNaN(rtb_Product5) ?
        rtb_DataTypeConversion_c : rtb_Product5;

      /* Sum: '<S279>/Sum2' */
      BaseEngineController_LS_B.s279_Sum2 =
        BaseEngineController_LS_B.s253_DontallowsetpointtoeverdropbelowtheTargetRPM
        - BaseEngineController_LS_B.s617_Sum1;

      /* Product: '<S279>/Product5' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S255>/motohawk_calibration5'
       */
      rtb_Product5 = BaseEngineController_LS_B.s279_Sum2 *
        (AirMinGovErrorGain_DataStore());

      /* S-Function Block: <S255>/motohawk_prelookup1 */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (AirMinGovSpeedErrorIn_DataStore()) =
          BaseEngineController_LS_B.s279_Sum2;
        (AirMinGovSpeedErrorIdx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_LS_B.s279_Sum2,
           (AirMinGovSpeedErrorIdxArr_DataStore()), 9,
           (AirMinGovSpeedErrorIdx_DataStore()));
        rtb_motohawk_prelookup1 = (AirMinGovSpeedErrorIdx_DataStore());
      }

      /* S-Function Block: <S277>/motohawk_interpolation_1d2 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d2 = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1, (real_T *)
           ((AirMinGovPGainErrorMultTbl_DataStore())), 9);
        (AirMinGovPGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d2;
      }

      /* Product: '<S279>/Product2' incorporates:
       *  Product: '<S277>/Product2'
       *  S-Function (motohawk_sfun_calibration): '<S277>/motohawk_calibration3'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S277>/motohawk_interpolation_1d2'
       *  S-Function (motohawk_sfun_prelookup): '<S255>/motohawk_prelookup1'
       */
      BaseEngineController_LS_B.s279_Product2 = (AirMinGovPGain_DataStore()) *
        rtb_motohawk_interpolation_1d2 * rtb_Product5;

      /* UnitDelay: '<S280>/Unit Delay' */
      rtb_Sum2_g = BaseEngineController_LS_DWork.s280_UnitDelay_DSTATE;

      /* S-Function Block: <S277>/motohawk_interpolation_1d3 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d3 = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1, (real_T *)
           ((AirMinGovDGainErrorMultTbl_DataStore())), 9);
        (AirMinGovDGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d3;
      }

      /* Product: '<S279>/Product4' incorporates:
       *  Product: '<S277>/Product3'
       *  S-Function (motohawk_sfun_calibration): '<S277>/motohawk_calibration2'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S277>/motohawk_interpolation_1d3'
       *  S-Function (motohawk_sfun_prelookup): '<S255>/motohawk_prelookup1'
       */
      rtb_Product4 = (AirMinGovDGain_DataStore()) *
        rtb_motohawk_interpolation_1d3 * rtb_Product5;

      /* S-Function Block: <S280>/motohawk_delta_time */
      rtb_motohawk_delta_time_bi = 0.005;

      /* Product: '<S280>/Product' incorporates:
       *  S-Function (motohawk_sfun_delta_time): '<S280>/motohawk_delta_time'
       *  Sum: '<S280>/Sum2'
       */
      BaseEngineController_LS_B.s280_Product = (rtb_Product4 - rtb_Sum2_g) /
        rtb_motohawk_delta_time_bi;

      /* Switch: '<S281>/Switch1' incorporates:
       *  Constant: '<S255>/Constant'
       *  UnitDelay: '<S281>/Unit Delay'
       */
      if (BaseEngineController_LS_B.s153_LogicalOperator) {
        BaseEngineController_LS_B.s281_Switch1 = 0.0;
      } else {
        BaseEngineController_LS_B.s281_Switch1 =
          BaseEngineController_LS_DWork.s281_UnitDelay_DSTATE;
      }

      /* End of Switch: '<S281>/Switch1' */

      /* Switch: '<S255>/Switch' incorporates:
       *  Constant: '<S255>/Constant1'
       */
      if (BaseEngineController_LS_B.s153_LogicalOperator) {
        rtb_UnitDelay1_j = 0.0;
      } else {
        /* MinMax: '<S278>/MinMax' incorporates:
         *  Sum: '<S279>/Sum1'
         */
        rtb_Sum2_g = (BaseEngineController_LS_B.s279_Product2 +
                      BaseEngineController_LS_B.s280_Product) +
          BaseEngineController_LS_B.s281_Switch1;

        /* MinMax: '<S278>/MinMax1' incorporates:
         *  MinMax: '<S278>/MinMax'
         *  S-Function (motohawk_sfun_calibration): '<S255>/motohawk_calibration2'
         *  S-Function (motohawk_sfun_calibration): '<S255>/motohawk_calibration9'
         */
        rtb_Sum2_g = (rtb_Sum2_g >= (AirMinGovPIDOutLowerLimit_DataStore())) ||
          rtIsNaN((AirMinGovPIDOutLowerLimit_DataStore())) ? rtb_Sum2_g :
          (AirMinGovPIDOutLowerLimit_DataStore());
        rtb_UnitDelay1_j = (rtb_Sum2_g <= (AirMinGovPIDOutUpperLimit_DataStore()))
          || rtIsNaN((AirMinGovPIDOutUpperLimit_DataStore())) ? rtb_Sum2_g :
          (AirMinGovPIDOutUpperLimit_DataStore());
      }

      /* End of Switch: '<S255>/Switch' */

      /* Product: '<S153>/Product1' */
      BaseEngineController_LS_B.s153_MinGovAirPID =
        BaseEngineController_LS_B.s263_MinMax1 * rtb_UnitDelay1_j;

      /* Sum: '<S274>/Sum1' */
      BaseEngineController_LS_B.s274_Sum1 =
        BaseEngineController_LS_B.s253_DontallowsetpointtoeverdropbelowtheTargetRPM
        - BaseEngineController_LS_B.s617_Sum1;

      /* Product: '<S274>/Product4' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S254>/motohawk_calibration4'
       */
      rtb_UnitDelay1_j = BaseEngineController_LS_B.s274_Sum1 *
        (SpkMinGovErrorGain_DataStore());

      /* S-Function Block: <S254>/motohawk_prelookup1 */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (SpkMinGovSpeedErrorIn_DataStore()) =
          BaseEngineController_LS_B.s274_Sum1;
        (SpkMinGovSpeedErrorIdx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_LS_B.s274_Sum1,
           (SpkMinGovSpeedErrorIdxArr_DataStore()), 9,
           (SpkMinGovSpeedErrorIdx_DataStore()));
        rtb_motohawk_prelookup1_j = (SpkMinGovSpeedErrorIdx_DataStore());
      }

      /* S-Function Block: <S272>/motohawk_interpolation_1d2 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d2_f = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1_j, (real_T *)
           ((SpkMinGovPGainErrorMultTbl_DataStore())), 9);
        (SpkMinGovPGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d2_f;
      }

      /* Product: '<S274>/Product' incorporates:
       *  Product: '<S272>/Product2'
       *  S-Function (motohawk_sfun_calibration): '<S272>/motohawk_calibration3'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S272>/motohawk_interpolation_1d2'
       *  S-Function (motohawk_sfun_prelookup): '<S254>/motohawk_prelookup1'
       */
      BaseEngineController_LS_B.s274_Product = (SpkMinGovPGain_DataStore()) *
        rtb_motohawk_interpolation_1d2_f * rtb_UnitDelay1_j;

      /* UnitDelay: '<S275>/Unit Delay' */
      rtb_Sum2_g = BaseEngineController_LS_DWork.s275_UnitDelay_DSTATE;

      /* S-Function Block: <S272>/motohawk_interpolation_1d1 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d1 = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1_j, (real_T *)
           ((SpkMinGovDGainErrorMultTbl_DataStore())), 9);
        (SpkMinGovDGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d1;
      }

      /* Product: '<S274>/Product2' incorporates:
       *  Product: '<S272>/Product1'
       *  S-Function (motohawk_sfun_calibration): '<S272>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S272>/motohawk_interpolation_1d1'
       *  S-Function (motohawk_sfun_prelookup): '<S254>/motohawk_prelookup1'
       */
      rtb_Product2_j = (SpkMinGovDGain_DataStore()) *
        rtb_motohawk_interpolation_1d1 * rtb_UnitDelay1_j;

      /* S-Function Block: <S275>/motohawk_delta_time */
      rtb_motohawk_delta_time_n = 0.005;

      /* Product: '<S275>/Product' incorporates:
       *  S-Function (motohawk_sfun_delta_time): '<S275>/motohawk_delta_time'
       *  Sum: '<S275>/Sum2'
       */
      BaseEngineController_LS_B.s275_Product = (rtb_Product2_j - rtb_Sum2_g) /
        rtb_motohawk_delta_time_n;

      /* Switch: '<S254>/Switch' incorporates:
       *  Constant: '<S254>/Constant1'
       */
      if (rtb_RelationalOperator2_e) {
        rtb_UnitDelay1_j = 0.0;
      } else {
        /* MinMax: '<S273>/MinMax' incorporates:
         *  Sum: '<S274>/Sum'
         */
        rtb_Sum2_g = BaseEngineController_LS_B.s274_Product +
          BaseEngineController_LS_B.s275_Product;

        /* MinMax: '<S273>/MinMax1' incorporates:
         *  MinMax: '<S273>/MinMax'
         *  S-Function (motohawk_sfun_calibration): '<S254>/motohawk_calibration1'
         *  S-Function (motohawk_sfun_calibration): '<S254>/motohawk_calibration9'
         */
        rtb_Sum2_g = (rtb_Sum2_g >= (SpkMinGovPIDOutLowerLimit_DataStore())) ||
          rtIsNaN((SpkMinGovPIDOutLowerLimit_DataStore())) ? rtb_Sum2_g :
          (SpkMinGovPIDOutLowerLimit_DataStore());
        rtb_UnitDelay1_j = (rtb_Sum2_g <= (SpkMinGovPIDOutUpperLimit_DataStore()))
          || rtIsNaN((SpkMinGovPIDOutUpperLimit_DataStore())) ? rtb_Sum2_g :
          (SpkMinGovPIDOutUpperLimit_DataStore());
      }

      /* End of Switch: '<S254>/Switch' */

      /* Product: '<S153>/Product' */
      BaseEngineController_LS_B.s153_IdleSpk =
        BaseEngineController_LS_B.s263_MinMax1 * rtb_UnitDelay1_j;

      /* Outputs for Atomic SubSystem: '<S153>/AiflowOffset' */

      /* S-Function Block: <S246>/motohawk_interpolation_1d1 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d1_i = TableInterpolation1D_real_T
          (BaseEngineController_LS_B.s392_motohawk_prelookup, (real_T *)
           ((ACAirFlowOfstTbl_DataStore())), 5);
        (ACAirFlowOfst_DataStore()) = rtb_motohawk_interpolation_1d1_i;
      }

      /* Product: '<S246>/Product' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S246>/motohawk_calibration'
       */
      rtb_Sum2_g = ((ACAirFlowOfst_Enab_DataStore()) ? (real_T)
                    BaseEngineController_LS_B.s144_LogicalOperator : 0.0) *
        rtb_motohawk_interpolation_1d1_i;

      /* S-Function Block: <S246>/motohawk_interpolation_1d2 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d2_p = TableInterpolation1D_real_T
          (BaseEngineController_LS_B.s394_motohawk_prelookup, (real_T *)
           ((BaseAirflowOfstTbl_DataStore())), 5);
        (BaseAirflowOfst_DataStore()) = rtb_motohawk_interpolation_1d2_p;
      }

      /* Sum: '<S246>/Sum' incorporates:
       *  S-Function (motohawk_sfun_interpolation_1d): '<S246>/motohawk_interpolation_1d2'
       */
      rtb_DataTypeConversion_c = rtb_Sum2_g + rtb_motohawk_interpolation_1d2_p;

      /* RelationalOperator: '<S257>/RelOp' incorporates:
       *  Constant: '<S257>/Constant'
       *  S-Function (motohawk_sfun_data_read): '<S246>/motohawk_data_read'
       */
      rtb_RelationalOperator2_e = (((uint8_T)EngineState_DataStore()) == 3);

      /* Logic: '<S246>/Logical Operator' incorporates:
       *  RelationalOperator: '<S246>/Relational Operator'
       *  RelationalOperator: '<S246>/Relational Operator1'
       *  UnitDelay: '<S246>/Unit Delay'
       */
      rtb_LogicalOperator_i = ((rtb_RelationalOperator2_e <
        BaseEngineController_LS_DWork.s246_UnitDelay_DSTATE) ||
        (rtb_RelationalOperator2_e ==
         BaseEngineController_LS_DWork.s246_UnitDelay_DSTATE));

      /* S-Function Block: <S256>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s256_motohawk_delta_time_DWORK1, NULL);
        rtb_motohawk_delta_time_bc = ((real_T) delta) * 0.000001;
      }

      /* UnitDelay: '<S256>/Unit Delay' */
      rtb_Sum2_g = BaseEngineController_LS_DWork.s256_UnitDelay_DSTATE;

      /* Switch: '<S256>/Preload lowpass filter with current RPM while not on Idle' incorporates:
       *  Constant: '<S256>/Constant'
       *  Logic: '<S256>/Logical Operator'
       *  Product: '<S256>/Product2'
       *  Product: '<S256>/Product3'
       *  Sum: '<S256>/Sum'
       *  Sum: '<S256>/Sum1'
       */
      if (!rtb_LogicalOperator_i) {
        rtb_Sum2_g = BaseEngineController_LS_B.s413_Switch2;
      } else {
        /* Product: '<S256>/Product1' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S256>/motohawk_calibration2'
         *  S-Function (motohawk_sfun_delta_time): '<S256>/motohawk_delta_time'
         */
        rtb_UnitDelay1_j = rtb_motohawk_delta_time_bc /
          (IdleEntryAirRampInFiltC_DataStore());
        rtb_Sum2_g = (1.0 - rtb_UnitDelay1_j) * rtb_Sum2_g +
          rtb_DataTypeConversion_c * rtb_UnitDelay1_j;
      }

      /* End of Switch: '<S256>/Preload lowpass filter with current RPM while not on Idle' */

      /* MinMax: '<S256>/Don't allow setpoint to ever drop below the TargetRPM' */
      BaseEngineController_LS_B.s256_DontallowsetpointtoeverdropbelowtheTargetRPM
        = (rtb_DataTypeConversion_c >= rtb_Sum2_g) || rtIsNaN(rtb_Sum2_g) ?
        rtb_DataTypeConversion_c : rtb_Sum2_g;

      /* Update for UnitDelay: '<S246>/Unit Delay' */
      BaseEngineController_LS_DWork.s246_UnitDelay_DSTATE =
        rtb_RelationalOperator2_e;

      /* Update for UnitDelay: '<S256>/Unit Delay' */
      BaseEngineController_LS_DWork.s256_UnitDelay_DSTATE =
        BaseEngineController_LS_B.s256_DontallowsetpointtoeverdropbelowtheTargetRPM;

      /* End of Outputs for SubSystem: '<S153>/AiflowOffset' */

      /* Saturate: '<S267>/Saturation' */
      rtb_Saturation_c = rtb_Switch_e >= 16000.0 ? 16000.0 : rtb_Switch_e <= 0.0
        ? 0.0 : rtb_Switch_e;

      /* S-Function (motohawk_sfun_data_write): '<S267>/motohawk_data_write' */
      /* Write to Data Storage as scalar: IdleEnterTimer */
      {
        IdleEnterTimer_DataStore() = rtb_Saturation_c;
      }

      /* S-Function Block: <S271>/motohawk_delta_time */
      rtb_motohawk_delta_time_n2 = 0.005;

      /* Sum: '<S251>/Sum' */
      rtb_UnitDelay1_j = BaseEngineController_LS_B.s617_Sum1 -
        BaseEngineController_LS_B.s253_DontallowsetpointtoeverdropbelowtheTargetRPM;

      /* Switch: '<S271>/Switch' incorporates:
       *  Constant: '<S271>/Constant'
       *  RelationalOperator: '<S251>/Relational Operator2'
       *  S-Function (motohawk_sfun_calibration): '<S251>/motohawk_calibration3'
       *  S-Function (motohawk_sfun_data_read): '<S271>/motohawk_data_read'
       *  S-Function (motohawk_sfun_delta_time): '<S271>/motohawk_delta_time'
       *  Sum: '<S271>/Sum'
       */
      if (rtb_UnitDelay1_j > (real_T)((int16_T)(MotoringDeltaRPMLimit_DataStore())))
      {
        BaseEngineController_LS_B.s271_Switch = rtb_motohawk_delta_time_n2 +
          MotoringTimer_DataStore();
      } else {
        BaseEngineController_LS_B.s271_Switch = 0.0;
      }

      /* End of Switch: '<S271>/Switch' */

      /* RelationalOperator: '<S251>/Relational Operator1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S251>/motohawk_calibration1'
       */
      BaseEngineController_LS_B.s251_RelationalOperator1 =
        ((BaseEngineController_LS_B.s271_Switch >
          (MotoringDtctTimerLimit_DataStore())));

      /* DataTypeConversion: '<S251>/Data Type Conversion' */
      rtb_DataTypeConversion_c = (real_T)
        BaseEngineController_LS_B.s251_RelationalOperator1;

      /* Saturate: '<S271>/Saturation' */
      rtb_Saturation_k = BaseEngineController_LS_B.s271_Switch >= 16000.0 ?
        16000.0 : BaseEngineController_LS_B.s271_Switch <= 0.0 ? 0.0 :
        BaseEngineController_LS_B.s271_Switch;

      /* S-Function (motohawk_sfun_data_write): '<S271>/motohawk_data_write' */
      /* Write to Data Storage as scalar: MotoringTimer */
      {
        MotoringTimer_DataStore() = rtb_Saturation_k;
      }

      /* S-Function Block: <S277>/motohawk_interpolation_1d1 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d1_b = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1, (real_T *)
           ((AirMinGovIGainErrorMultTbl_DataStore())), 9);
        (AirMinGovIGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d1_b;
      }

      /* Product: '<S279>/Product1' incorporates:
       *  Product: '<S277>/Product1'
       *  S-Function (motohawk_sfun_calibration): '<S277>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S277>/motohawk_interpolation_1d1'
       *  S-Function (motohawk_sfun_prelookup): '<S255>/motohawk_prelookup1'
       */
      rtb_Sum2_g = (AirMinGovIGain_DataStore()) *
        rtb_motohawk_interpolation_1d1_b * rtb_Product5;

      /* S-Function Block: <S281>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s281_motohawk_delta_time_DWORK1, NULL);
        rtb_motohawk_delta_time_j = ((real_T) delta) * 0.000001;
      }

      /* Sum: '<S281>/Sum' incorporates:
       *  Product: '<S281>/Product'
       *  S-Function (motohawk_sfun_delta_time): '<S281>/motohawk_delta_time'
       */
      rtb_UnitDelay1_j = rtb_Sum2_g * rtb_motohawk_delta_time_j +
        BaseEngineController_LS_B.s281_Switch1;

      /* MinMax: '<S283>/MinMax' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S255>/motohawk_calibration7'
       */
      rtb_Sum2_g = (rtb_UnitDelay1_j >= (AirMinGovITermLowerLimit_DataStore())) ||
        rtIsNaN((AirMinGovITermLowerLimit_DataStore())) ? rtb_UnitDelay1_j :
        (AirMinGovITermLowerLimit_DataStore());

      /* Update for UnitDelay: '<S268>/Unit Delay' */
      BaseEngineController_LS_DWork.s268_UnitDelay_DSTATE =
        BaseEngineController_LS_B.s444_RPMInst;

      /* Update for UnitDelay: '<S270>/Unit Delay' */
      BaseEngineController_LS_DWork.s270_UnitDelay_DSTATE = rtb_Sum1_f;

      /* Update for UnitDelay: '<S153>/Unit Delay3' */
      BaseEngineController_LS_DWork.s153_UnitDelay3_DSTATE =
        BaseEngineController_LS_B.s153_MinGovAirPID;

      /* Update for UnitDelay: '<S153>/Unit Delay1' */
      BaseEngineController_LS_DWork.s153_UnitDelay1_DSTATE =
        BaseEngineController_LS_B.s281_Switch1;

      /* Update for UnitDelay: '<S249>/state' */
      BaseEngineController_LS_DWork.s249_state_DSTATE =
        BaseEngineController_LS_B.s263_MinMax1;

      /* Update for UnitDelay: '<S153>/Unit Delay2' */
      BaseEngineController_LS_DWork.s153_UnitDelay2_DSTATE =
        rtb_DataTypeConversion_c;

      /* Update for UnitDelay: '<S253>/Unit Delay' */
      BaseEngineController_LS_DWork.s253_UnitDelay_DSTATE =
        BaseEngineController_LS_B.s253_DontallowsetpointtoeverdropbelowtheTargetRPM;

      /* Update for UnitDelay: '<S280>/Unit Delay' */
      BaseEngineController_LS_DWork.s280_UnitDelay_DSTATE = rtb_Product4;

      /* Update for UnitDelay: '<S281>/Unit Delay' incorporates:
       *  MinMax: '<S283>/MinMax'
       *  MinMax: '<S283>/MinMax1'
       *  S-Function (motohawk_sfun_calibration): '<S255>/motohawk_calibration8'
       */
      BaseEngineController_LS_DWork.s281_UnitDelay_DSTATE = (rtb_Sum2_g <=
        (AirMinGovITermUpperLimit_DataStore())) || rtIsNaN
        ((AirMinGovITermUpperLimit_DataStore())) ? rtb_Sum2_g :
        (AirMinGovITermUpperLimit_DataStore());

      /* Update for UnitDelay: '<S275>/Unit Delay' */
      BaseEngineController_LS_DWork.s275_UnitDelay_DSTATE = rtb_Product2_j;
    }

    /* Output and update for function-call system: '<S136>/MaxGovernor' */
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
      boolean_T rtb_RelationalOperator_j;
      real_T rtb_DataTypeConversion_m;
      boolean_T rtb_RelationalOperator2_n;
      boolean_T rtb_RelationalOperator_c;
      boolean_T rtb_LogicalOperator1_l;
      real_T rtb_Reset;
      int32_T rtb_Hold;
      int32_T rtb_ETCMode;
      real_T rtb_alpha_o;

      /* Sum: '<S152>/Sum' */
      BaseEngineController_LS_B.s152_Sum =
        BaseEngineController_LS_B.s256_DontallowsetpointtoeverdropbelowtheTargetRPM
        + BaseEngineController_LS_B.s421_Sum2;

      /* Outputs for Enabled SubSystem: '<S233>/InGear' incorporates:
       *  EnablePort: '<S236>/Enable'
       */
      /* Outputs for Enabled SubSystem: '<S233>/InNeutral' incorporates:
       *  EnablePort: '<S237>/Enable'
       */
      if (BaseEngineController_LS_B.s572_Merge) {
        /* S-Function (motohawk_sfun_data_read): '<S236>/motohawk_data_read' */
        rtb_MinMax_ny = MaxGovInGearSetPoint_DataStore();

        /* MinMax: '<S238>/MinMax' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S236>/motohawk_calibration3'
         */
        rtb_MinMax_ny = (uint16_T)(rtb_MinMax_ny >= ((uint16_T)
          (MaxGovInGearLowerLim_DataStore())) ? rtb_MinMax_ny : ((uint16_T)
          (MaxGovInGearLowerLim_DataStore())));

        /* MinMax: '<S238>/MinMax1' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S236>/motohawk_calibration5'
         */
        rtb_Merge_a = (uint16_T)(rtb_MinMax_ny <= ((uint16_T)
          (MaxGovInGearUpperLim_DataStore())) ? rtb_MinMax_ny : ((uint16_T)
          (MaxGovInGearUpperLim_DataStore())));

        /* S-Function (motohawk_sfun_calibration): '<S236>/motohawk_calibration4' */
        rtb_Merge1 = (MaxGovInGearRPMThresh_DataStore());

        /* S-Function (motohawk_sfun_data_write): '<S236>/motohawk_data_write1' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S236>/motohawk_calibration2'
         */
        /* Write to Data Storage as scalar: MaxGovInGearSetPoint */
        {
          MaxGovInGearSetPoint_DataStore() = (MaxGovInGearRPMSetPt_DataStore());
        }
      } else {
        /* S-Function (motohawk_sfun_data_read): '<S237>/motohawk_data_read' */
        rtb_MinMax_c = MaxGovNtrlSetPoint_DataStore();

        /* MinMax: '<S239>/MinMax' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S237>/motohawk_calibration2'
         */
        rtb_MinMax_c = (uint16_T)(rtb_MinMax_c >= ((uint16_T)
          (MaxGovNtrlLowerLim_DataStore())) ? rtb_MinMax_c : ((uint16_T)
          (MaxGovNtrlLowerLim_DataStore())));

        /* MinMax: '<S239>/MinMax1' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S237>/motohawk_calibration5'
         */
        rtb_Merge_a = (uint16_T)(rtb_MinMax_c <= ((uint16_T)
          (MaxGovNtrlUpperLim_DataStore())) ? rtb_MinMax_c : ((uint16_T)
          (MaxGovNtrlUpperLim_DataStore())));

        /* S-Function (motohawk_sfun_calibration): '<S237>/motohawk_calibration3' */
        rtb_Merge1 = (MaxGovNtrlRPMThresh_DataStore());

        /* S-Function (motohawk_sfun_data_write): '<S237>/motohawk_data_write1' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S237>/motohawk_calibration4'
         */
        /* Write to Data Storage as scalar: MaxGovNtrlSetPoint */
        {
          MaxGovNtrlSetPoint_DataStore() = (MaxGovNtrlRPMSetPt_DataStore());
        }
      }

      /* End of Outputs for SubSystem: '<S233>/InNeutral' */
      /* End of Outputs for SubSystem: '<S233>/InGear' */

      /* RelationalOperator: '<S233>/Relational Operator' incorporates:
       *  Sum: '<S233>/Sum1'
       */
      rtb_RelationalOperator_j = (BaseEngineController_LS_B.s444_RPMInst >
        (real_T)(uint16_T)(rtb_Merge_a - rtb_Merge1));

      /* DataTypeConversion: '<S152>/Data Type Conversion' */
      rtb_DataTypeConversion_m = (real_T)rtb_Merge_a;

      /* RelationalOperator: '<S231>/Relational Operator2' */
      rtb_RelationalOperator2_n = (BaseEngineController_LS_B.s444_RPMInst >
        rtb_DataTypeConversion_m);

      /* RelationalOperator: '<S231>/Relational Operator' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S231>/motohawk_calibration5'
       *  Sum: '<S231>/Sum'
       */
      rtb_RelationalOperator_c = (BaseEngineController_LS_B.s152_Sum <=
        BaseEngineController_LS_B.s413_Switch2 - (MaxGovTPSHyst_DataStore()));

      /* Logic: '<S231>/Logical Operator1' incorporates:
       *  RelationalOperator: '<S231>/Relational Operator1'
       *  S-Function (motohawk_sfun_calibration): '<S231>/motohawk_calibration5'
       *  Sum: '<S231>/Sum1'
       */
      rtb_LogicalOperator1_l = (rtb_RelationalOperator_j &&
        (BaseEngineController_LS_B.s152_Sum > (MaxGovTPSHyst_DataStore()) +
         BaseEngineController_LS_B.s413_Switch2));

      /* MATLAB Function Block: '<S231>/MaxGOV Stateflow' incorporates:
       *  Logic: '<S231>/Logical Operator'
       *  Logic: '<S231>/Logical Operator2'
       *  Logic: '<S231>/Logical Operator3'
       *  S-Function (motohawk_sfun_data_read): '<S231>/motohawk_data_read'
       */

      /* MATLAB Function 'Foreground/Control/Controller/Run/MaxGovernor/MaxGovState/MaxGOV Stateflow': '<S235>:1' */
      if ((MaxGov_DataStore() == 0.0) && ((rtb_RelationalOperator_j ||
            rtb_RelationalOperator2_n) == 1)) {
        /* '<S235>:1:3' */
        /* '<S235>:1:4' */
        rtb_StateO = 1.0;
      } else if ((MaxGov_DataStore() == 1.0) && (rtb_RelationalOperator_c ==
                  TRUE)) {
        /* '<S235>:1:5' */
        /* '<S235>:1:6' */
        rtb_StateO = 2.0;
      } else if ((MaxGov_DataStore() == 2.0) && ((rtb_LogicalOperator1_l ||
                   rtb_RelationalOperator2_n) == 1)) {
        /* '<S235>:1:7' */
        /* '<S235>:1:8' */
        rtb_StateO = 1.0;
      } else if ((MaxGov_DataStore() == 2.0) && (!rtb_RelationalOperator_j ==
                  TRUE)) {
        /* '<S235>:1:9' */
        /* '<S235>:1:10' */
        rtb_StateO = 0.0;
      } else {
        /* '<S235>:1:12' */
        rtb_StateO = MaxGov_DataStore();
      }

      if (MaxGov_DataStore() == 0.0) {
        /* '<S235>:1:15' */
        /* '<S235>:1:16' */
        rtb_ETCMode = 0;

        /* '<S235>:1:17' */
        rtb_Hold = 0;

        /* '<S235>:1:18' */
      } else if (MaxGov_DataStore() == 1.0) {
        /* '<S235>:1:19' */
        /* '<S235>:1:20' */
        rtb_ETCMode = 1;

        /* '<S235>:1:21' */
        rtb_Hold = 0;

        /* '<S235>:1:22' */
      } else if (MaxGov_DataStore() == 2.0) {
        /* '<S235>:1:23' */
        /* '<S235>:1:24' */
        rtb_ETCMode = 0;

        /* '<S235>:1:25' */
        rtb_Hold = 1;

        /* '<S235>:1:26' */
      } else {
        /* '<S235>:1:28' */
        rtb_ETCMode = 0;

        /* '<S235>:1:29' */
        rtb_Hold = 0;

        /* '<S235>:1:30' */
      }

      /* End of MATLAB Function Block: '<S231>/MaxGOV Stateflow' */

      /* DataTypeConversion: '<S231>/Data Type Conversion' */
      BaseEngineController_LS_B.s231_DataTypeConversion = 0;

      /* Logic: '<S232>/Logical Operator' incorporates:
       *  UnitDelay: '<S152>/Unit Delay'
       */
      rtb_RelationalOperator_j =
        !BaseEngineController_LS_DWork.s152_UnitDelay_DSTATE;

      /* S-Function Block: <S232>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s232_motohawk_delta_time_DWORK1, NULL);
        rtb_motohawk_delta_time_d4 = ((real_T) delta) * 0.000001;
      }

      /* UnitDelay: '<S232>/Unit Delay' */
      rtb_Reset = BaseEngineController_LS_DWork.s232_UnitDelay_DSTATE;

      /* Switch: '<S232>/Preload lowpass filter with current RPM while not on Idle' incorporates:
       *  Constant: '<S232>/Constant'
       *  Product: '<S232>/Product2'
       *  Product: '<S232>/Product3'
       *  Sum: '<S232>/Sum'
       *  Sum: '<S232>/Sum1'
       */
      if (rtb_RelationalOperator_j) {
        rtb_alpha_o = BaseEngineController_LS_B.s444_RPMInst;
      } else {
        /* Product: '<S232>/Product1' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S232>/motohawk_calibration2'
         *  S-Function (motohawk_sfun_delta_time): '<S232>/motohawk_delta_time'
         */
        rtb_alpha_o = rtb_motohawk_delta_time_d4 /
          (MaxGovRPMCtrlEntryFiltC_DataStore());
        rtb_alpha_o = (1.0 - rtb_alpha_o) * rtb_Reset + rtb_DataTypeConversion_m
          * rtb_alpha_o;
      }

      /* End of Switch: '<S232>/Preload lowpass filter with current RPM while not on Idle' */

      /* MinMax: '<S232>/Don't allow setpoint to ever go above the TargetRPM' */
      BaseEngineController_LS_B.s232_DontallowsetpointtoevergoabovetheTargetRPM =
        (rtb_DataTypeConversion_m <= rtb_alpha_o) || rtIsNaN(rtb_alpha_o) ?
        rtb_DataTypeConversion_m : rtb_alpha_o;

      /* DataTypeConversion: '<S231>/Data Type Conversion1' */
      rtb_Reset = fmod((real_T)rtb_Hold, 256.0);
      BaseEngineController_LS_B.s231_DataTypeConversion1 = (int8_T)(rtb_Reset <
        0.0 ? (int8_T)-(int8_T)(uint8_T)-rtb_Reset : (int8_T)(uint8_T)rtb_Reset);

      /* Switch: '<S234>/Switch1' */
      if (BaseEngineController_LS_B.s231_DataTypeConversion1 >= 1) {
        rtb_alpha_o =
          BaseEngineController_LS_B.s232_DontallowsetpointtoevergoabovetheTargetRPM;
      } else {
        rtb_alpha_o = BaseEngineController_LS_B.s444_RPMInst;
      }

      /* End of Switch: '<S234>/Switch1' */

      /* Sum: '<S241>/Sum2' */
      BaseEngineController_LS_B.s241_Sum2 =
        BaseEngineController_LS_B.s232_DontallowsetpointtoevergoabovetheTargetRPM
        - rtb_alpha_o;

      /* Product: '<S241>/Product5' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S234>/motohawk_calibration5'
       */
      rtb_alpha_o = BaseEngineController_LS_B.s241_Sum2 *
        (MaxGovErrorGain_DataStore());

      /* S-Function Block: <S234>/motohawk_prelookup1 */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (MaxGovSpeedErrorIn_DataStore()) = BaseEngineController_LS_B.s241_Sum2;
        (MaxGovSpeedErrorIdx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_LS_B.s241_Sum2,
           (MaxGovSpeedErrorIdxArr_DataStore()), 9,
           (MaxGovSpeedErrorIdx_DataStore()));
        rtb_motohawk_prelookup1_f = (MaxGovSpeedErrorIdx_DataStore());
      }

      /* S-Function Block: <S234>/motohawk_interpolation_1d3 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d3_m = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1_f, (real_T *)
           ((MaxGovPGainErrorMultTbl_DataStore())), 9);
        (MaxGovPGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d3_m;
      }

      /* Product: '<S241>/Product2' incorporates:
       *  Product: '<S234>/Product4'
       *  S-Function (motohawk_sfun_calibration): '<S234>/motohawk_calibration3'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S234>/motohawk_interpolation_1d3'
       *  S-Function (motohawk_sfun_prelookup): '<S234>/motohawk_prelookup1'
       */
      BaseEngineController_LS_B.s241_Product2 = (MaxGovPGain_DataStore()) *
        rtb_motohawk_interpolation_1d3_m * rtb_alpha_o;

      /* UnitDelay: '<S242>/Unit Delay' */
      rtb_Reset = BaseEngineController_LS_DWork.s242_UnitDelay_DSTATE;

      /* S-Function Block: <S234>/motohawk_interpolation_1d2 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d2_c = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1_f, (real_T *)
           ((MaxGovDGainErrorMultTbl_DataStore())), 9);
        (MaxGovDGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d2_c;
      }

      /* Product: '<S241>/Product4' incorporates:
       *  Product: '<S234>/Product3'
       *  S-Function (motohawk_sfun_calibration): '<S234>/motohawk_calibration6'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S234>/motohawk_interpolation_1d2'
       *  S-Function (motohawk_sfun_prelookup): '<S234>/motohawk_prelookup1'
       */
      rtb_DataTypeConversion_m = (MaxGovDGain_DataStore()) *
        rtb_motohawk_interpolation_1d2_c * rtb_alpha_o;

      /* S-Function Block: <S242>/motohawk_delta_time */
      rtb_motohawk_delta_time_m = 0.005;

      /* Product: '<S242>/Product' incorporates:
       *  S-Function (motohawk_sfun_delta_time): '<S242>/motohawk_delta_time'
       *  Sum: '<S242>/Sum2'
       */
      BaseEngineController_LS_B.s242_Product = (rtb_DataTypeConversion_m -
        rtb_Reset) / rtb_motohawk_delta_time_m;

      /* Outputs for Atomic SubSystem: '<S152>/I-Term Preload' */

      /* S-Function Block: <S230>/motohawk_interpolation_1d4 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d4_k = TableInterpolation1D_real_T
          (BaseEngineController_LS_B.s363_RPMAccel17Idx, (real_T *)
           ((MaxGovPreloadITermTbl_DataStore())), 17);
        (MaxGovPreloadITerm_DataStore()) = rtb_motohawk_interpolation_1d4_k;
      }

      /* Sum: '<S230>/Sum' incorporates:
       *  S-Function (motohawk_sfun_interpolation_1d): '<S230>/motohawk_interpolation_1d4'
       */
      BaseEngineController_LS_B.s230_Sum = BaseEngineController_LS_B.s152_Sum -
        rtb_motohawk_interpolation_1d4_k;

      /* End of Outputs for SubSystem: '<S152>/I-Term Preload' */

      /* Switch: '<S243>/Switch1' incorporates:
       *  DataTypeConversion: '<S243>/Data Type Conversion'
       *  UnitDelay: '<S243>/Unit Delay'
       */
      if (BaseEngineController_LS_B.s231_DataTypeConversion != 0) {
        BaseEngineController_LS_B.s243_Switch1 =
          BaseEngineController_LS_B.s230_Sum;
      } else {
        BaseEngineController_LS_B.s243_Switch1 =
          BaseEngineController_LS_DWork.s243_UnitDelay_DSTATE;
      }

      /* End of Switch: '<S243>/Switch1' */

      /* Switch: '<S234>/Switch' incorporates:
       *  Constant: '<S234>/Constant'
       */
      if (BaseEngineController_LS_B.s231_DataTypeConversion >= 1) {
        BaseEngineController_LS_B.s234_Switch = 0.0;
      } else {
        /* MinMax: '<S240>/MinMax' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S234>/motohawk_calibration9'
         *  Sum: '<S241>/Sum1'
         */
        rtb_Reset = (BaseEngineController_LS_B.s241_Product2 +
                     BaseEngineController_LS_B.s242_Product) +
          BaseEngineController_LS_B.s243_Switch1;
        rtb_Reset = (rtb_Reset >= (MaxGovPIDOutLowerLimit_DataStore())) ||
          rtIsNaN((MaxGovPIDOutLowerLimit_DataStore())) ? rtb_Reset :
          (MaxGovPIDOutLowerLimit_DataStore());

        /* MinMax: '<S240>/MinMax1' incorporates:
         *  MinMax: '<S240>/MinMax'
         *  S-Function (motohawk_sfun_calibration): '<S234>/motohawk_calibration2'
         */
        BaseEngineController_LS_B.s234_Switch = (rtb_Reset <=
          (MaxGovPIDOutUpperLimit_DataStore())) || rtIsNaN
          ((MaxGovPIDOutUpperLimit_DataStore())) ? rtb_Reset :
          (MaxGovPIDOutUpperLimit_DataStore());
      }

      /* End of Switch: '<S234>/Switch' */

      /* S-Function (motohawk_sfun_data_write): '<S231>/motohawk_data_write' */
      /* Write to Data Storage as scalar: MaxGov */
      {
        MaxGov_DataStore() = rtb_StateO;
      }

      /* MultiPortSwitch: '<S231>/Multiport Switch' incorporates:
       *  Constant: '<S231>/Constant'
       *  DataTypeConversion: '<S231>/Data Type Conversion2'
       *  S-Function (motohawk_sfun_calibration): '<S231>/motohawk_calibration1'
       */
      if ((MaxGovDisable_DataStore()) == FALSE) {
        /* DataTypeConversion: '<S231>/Data Type Conversion2' */
        rtb_Reset = fmod((real_T)rtb_ETCMode, 256.0);
        BaseEngineController_LS_B.s231_MultiportSwitch = (((rtb_Reset < 0.0 ?
          (int8_T)-(int8_T)(uint8_T)-rtb_Reset : (int8_T)(uint8_T)rtb_Reset) !=
          0));
      } else {
        BaseEngineController_LS_B.s231_MultiportSwitch = FALSE;
      }

      /* End of MultiPortSwitch: '<S231>/Multiport Switch' */

      /* S-Function Block: <S234>/motohawk_interpolation_1d4 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d4 = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1_f, (real_T *)
           ((MaxGovIGainErrorMultTbl_DataStore())), 9);
        (MaxGovIGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d4;
      }

      /* Product: '<S241>/Product1' incorporates:
       *  Product: '<S234>/Product5'
       *  S-Function (motohawk_sfun_calibration): '<S234>/motohawk_calibration4'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S234>/motohawk_interpolation_1d4'
       *  S-Function (motohawk_sfun_prelookup): '<S234>/motohawk_prelookup1'
       */
      rtb_Reset = (MaxGovIGain_DataStore()) * rtb_motohawk_interpolation_1d4 *
        rtb_alpha_o;

      /* S-Function Block: <S243>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s243_motohawk_delta_time_DWORK1, NULL);
        rtb_motohawk_delta_time_l = ((real_T) delta) * 0.000001;
      }

      /* Sum: '<S243>/Sum' incorporates:
       *  Product: '<S243>/Product'
       *  S-Function (motohawk_sfun_delta_time): '<S243>/motohawk_delta_time'
       */
      rtb_alpha_o = rtb_Reset * rtb_motohawk_delta_time_l +
        BaseEngineController_LS_B.s243_Switch1;

      /* MinMax: '<S245>/MinMax' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S234>/motohawk_calibration7'
       */
      rtb_Reset = (rtb_alpha_o >= (MaxGovITermLowerLimit_DataStore())) ||
        rtIsNaN((MaxGovITermLowerLimit_DataStore())) ? rtb_alpha_o :
        (MaxGovITermLowerLimit_DataStore());

      /* Update for UnitDelay: '<S152>/Unit Delay' */
      BaseEngineController_LS_DWork.s152_UnitDelay_DSTATE =
        BaseEngineController_LS_B.s231_MultiportSwitch;

      /* Update for UnitDelay: '<S232>/Unit Delay' */
      BaseEngineController_LS_DWork.s232_UnitDelay_DSTATE =
        BaseEngineController_LS_B.s232_DontallowsetpointtoevergoabovetheTargetRPM;

      /* Update for UnitDelay: '<S242>/Unit Delay' */
      BaseEngineController_LS_DWork.s242_UnitDelay_DSTATE =
        rtb_DataTypeConversion_m;

      /* Update for UnitDelay: '<S243>/Unit Delay' incorporates:
       *  MinMax: '<S245>/MinMax'
       *  MinMax: '<S245>/MinMax1'
       *  S-Function (motohawk_sfun_calibration): '<S234>/motohawk_calibration8'
       */
      BaseEngineController_LS_DWork.s243_UnitDelay_DSTATE = (rtb_Reset <=
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
          (BaseEngineController_LS_B.s396_Indexes,
           BaseEngineController_LS_B.s398_Indexes, (real_T *)
           ((SparkAdvMap_DataStore())), 17, 17);
        (SparkAdv_DataStore()) = rtb_RichEquivRatioTargetDelta;
      }

      /* S-Function Block: <S306>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d = TableInterpolation1D_real_T
          (BaseEngineController_LS_B.s394_motohawk_prelookup, (real_T *)
           ((ECT_SpkOfstTbl_DataStore())), 5);
        (ECT_SpkOfst_DataStore()) = rtb_motohawk_interpolation_1d;
      }

      /* S-Function Block: <S306>/motohawk_interpolation_2d3 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_RichEquivRatioTargetDelta_l = TableInterpolation2D_real_T
          (BaseEngineController_LS_B.s396_motohawk_prelookup1,
           BaseEngineController_LS_B.s398_motohawk_prelookup1, (real_T *)
           ((ECT_SpkOfstMultMap_DataStore())), 9, 9);
        (ECT_SpkOfstMult_DataStore()) = rtb_RichEquivRatioTargetDelta_l;
      }

      /* Product: '<S306>/Product' incorporates:
       *  S-Function (motohawk_sfun_interpolation_1d): '<S306>/motohawk_interpolation_1d'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S306>/motohawk_interpolation_2d3'
       */
      rtb_Product_h = rtb_motohawk_interpolation_1d *
        rtb_RichEquivRatioTargetDelta_l;

      /* S-Function Block: <S306>/motohawk_interpolation_1d1 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d1_o = TableInterpolation1D_real_T
          (BaseEngineController_LS_B.s395_motohawk_prelookup, (real_T *)
           ((IAT_SpkOfstTbl_DataStore())), 5);
        (IAT_SpkOfst_DataStore()) = rtb_motohawk_interpolation_1d1_o;
      }

      /* S-Function Block: <S306>/motohawk_interpolation_2d1 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_RichEquivRatioTargetDelta_h = TableInterpolation2D_real_T
          (BaseEngineController_LS_B.s396_motohawk_prelookup1,
           BaseEngineController_LS_B.s398_motohawk_prelookup1, (real_T *)
           ((IAT_SpkOfstMultMap_DataStore())), 9, 9);
        (IAT_SpkOfstMult_DataStore()) = rtb_RichEquivRatioTargetDelta_h;
      }

      /* Product: '<S306>/Product1' incorporates:
       *  S-Function (motohawk_sfun_interpolation_1d): '<S306>/motohawk_interpolation_1d1'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S306>/motohawk_interpolation_2d1'
       */
      rtb_Product1_f = rtb_motohawk_interpolation_1d1_o *
        rtb_RichEquivRatioTargetDelta_h;

      /* S-Function Block: <S306>/motohawk_interpolation_1d2 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d2_m = TableInterpolation1D_real_T
          (BaseEngineController_LS_B.s393_motohawk_prelookup, (real_T *)
           ((CAT_SpkOfstTbl_DataStore())), 5);
        (CAT_SpkOfst_DataStore()) = rtb_motohawk_interpolation_1d2_m;
      }

      /* S-Function Block: <S306>/motohawk_interpolation_2d2 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_RichEquivRatioTargetDelta_i = TableInterpolation2D_real_T
          (BaseEngineController_LS_B.s396_motohawk_prelookup1,
           BaseEngineController_LS_B.s398_motohawk_prelookup1, (real_T *)
           ((CAT_SpkOfstMultMap_DataStore())), 9, 9);
        (CAT_SpkOfstMult_DataStore()) = rtb_RichEquivRatioTargetDelta_i;
      }

      /* Sum: '<S306>/Add' incorporates:
       *  Product: '<S306>/Product2'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S306>/motohawk_interpolation_1d2'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S306>/motohawk_interpolation_2d2'
       */
      BaseEngineController_LS_B.s306_Add = (rtb_Product_h + rtb_Product1_f) +
        rtb_motohawk_interpolation_1d2_m * rtb_RichEquivRatioTargetDelta_i;

      /* S-Function Block: <S303>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (Eth11IdxIn_DataStore()) = BaseEngineController_LS_B.s639_Merge;
        (Eth11IdxIdx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_LS_B.s639_Merge, (Eth11IdxIdxArr_DataStore()),
           11, (Eth11IdxIdx_DataStore()));
        rtb_motohawk_prelookup = (Eth11IdxIdx_DataStore());
      }

      /* S-Function Block: <S303>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d_k = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup, (real_T *) ((EthSpkModTbl_DataStore())), 11);
        (EthSpkMod_DataStore()) = rtb_motohawk_interpolation_1d_k;
      }

      /* S-Function Block: <S303>/motohawk_interpolation_2d3 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_RichEquivRatioTargetDelta_m = TableInterpolation2D_real_T
          (BaseEngineController_LS_B.s396_motohawk_prelookup1,
           BaseEngineController_LS_B.s398_motohawk_prelookup1, (real_T *)
           ((Ethanol_SpkOfstMultMap_DataStore())), 9, 9);
        (Ethanol_SpkOfstMult_DataStore()) = rtb_RichEquivRatioTargetDelta_m;
      }

      /* Product: '<S303>/Product' incorporates:
       *  S-Function (motohawk_sfun_interpolation_1d): '<S303>/motohawk_interpolation_1d'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S303>/motohawk_interpolation_2d3'
       *  S-Function (motohawk_sfun_prelookup): '<S303>/motohawk_prelookup'
       */
      BaseEngineController_LS_B.s303_Product = rtb_motohawk_interpolation_1d_k *
        rtb_RichEquivRatioTargetDelta_m;

      /* S-Function Block: <S302>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (DesEqRatio09In_DataStore()) = BaseEngineController_LS_B.s190_Product1;
        (DesEqRatio09Idx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_LS_B.s190_Product1,
           (DesEqRatio09IdxArr_DataStore()), 9, (DesEqRatio09Idx_DataStore()));
        rtb_motohawk_prelookup_g = (DesEqRatio09Idx_DataStore());
      }

      /* S-Function Block: <S302>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d_h = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup_g, (real_T *) ((EqRatio_SpkOfstTbl_DataStore())),
           9);
        (EqRatio_SpkOfst_DataStore()) = rtb_motohawk_interpolation_1d_h;
      }

      /* S-Function Block: <S302>/motohawk_interpolation_2d3 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_RichEquivRatioTargetDelta_e = TableInterpolation2D_real_T
          (BaseEngineController_LS_B.s396_motohawk_prelookup1,
           BaseEngineController_LS_B.s398_motohawk_prelookup1, (real_T *)
           ((EqRatio_SpkOfsMultMap_DataStore())), 9, 9);
        (EqRatio_SpkOfsMult_DataStore()) = rtb_RichEquivRatioTargetDelta_e;
      }

      /* Product: '<S302>/Product' incorporates:
       *  S-Function (motohawk_sfun_interpolation_1d): '<S302>/motohawk_interpolation_1d'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S302>/motohawk_interpolation_2d3'
       *  S-Function (motohawk_sfun_prelookup): '<S302>/motohawk_prelookup'
       */
      BaseEngineController_LS_B.s302_Product = rtb_motohawk_interpolation_1d_h *
        rtb_RichEquivRatioTargetDelta_e;

      /* Sum: '<S155>/Apply Offsets to Base Spark Advance1' incorporates:
       *  S-Function (motohawk_sfun_interpolation_2d): '<S155>/motohawk_interpolation_2d2'
       *  Sum: '<S155>/Apply Offsets to Base Spark Advance3'
       */
      BaseEngineController_LS_B.s155_ApplyOffsetstoBaseSparkAdvance1 =
        ((((rtb_RichEquivRatioTargetDelta + BaseEngineController_LS_B.s306_Add)
           + BaseEngineController_LS_B.s303_Product) +
          BaseEngineController_LS_B.s302_Product) +
         BaseEngineController_LS_B.s153_IdleSpk) +
        BaseEngineController_LS_B.s190_SpkOut;

      /* MinMax: '<S309>/MinMax' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S305>/motohawk_calibration5'
       */
      rtb_Product_h =
        (BaseEngineController_LS_B.s155_ApplyOffsetstoBaseSparkAdvance1 >=
         (MinSparkLimit_DataStore())) || rtIsNaN((MinSparkLimit_DataStore())) ?
        BaseEngineController_LS_B.s155_ApplyOffsetstoBaseSparkAdvance1 :
        (MinSparkLimit_DataStore());

      /* Switch: '<S305>/Switch1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S305>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_interpolation_1d): '<S305>/motohawk_interpolation_1d4'
       */
      if (BaseEngineController_LS_B.s266_RelOp) {
        /* S-Function Block: <S305>/motohawk_interpolation_1d4 */
        {
          extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T
            *tbl_data, uint32_T sz);
          rtb_motohawk_interpolation_1d4_p = TableInterpolation1D_real_T
            (BaseEngineController_LS_B.s396_motohawk_prelookup1, (real_T *)
             ((MaxSparkLimitTbl_DataStore())), 9);
          (MaxSparkLimit_DataStore()) = rtb_motohawk_interpolation_1d4_p;
        }

        rtb_Product1_f = rtb_motohawk_interpolation_1d4_p;
      } else {
        rtb_Product1_f = (MaxSparkLimitOffIdle_DataStore());
      }

      /* End of Switch: '<S305>/Switch1' */

      /* MinMax: '<S309>/MinMax1' incorporates:
       *  MinMax: '<S309>/MinMax'
       */
      BaseEngineController_LS_B.s309_MinMax1 = (rtb_Product_h <= rtb_Product1_f)
        || rtIsNaN(rtb_Product1_f) ? rtb_Product_h : rtb_Product1_f;

      /* UnitDelay: '<S304>/Unit Delay' */
      rtb_Product_h = BaseEngineController_LS_DWork.s304_UnitDelay_DSTATE;

      /* Switch: '<S304>/Switch' incorporates:
       *  UnitDelay: '<S307>/Initial Condition is True'
       */
      if (BaseEngineController_LS_DWork.s307_InitialConditionisTrue_DSTATE) {
        BaseEngineController_LS_B.s304_Switch =
          BaseEngineController_LS_B.s309_MinMax1;
      } else {
        /* Sum: '<S304>/Sum' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S304>/motohawk_calibration'
         */
        rtb_Product1_f = rtb_Product_h + (SparkAdv_DeltaHi_DataStore());

        /* MinMax: '<S308>/MinMax' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S304>/motohawk_calibration1'
         *  Sum: '<S304>/Sum1'
         */
        rtb_Product_h -= (SparkAdv_DeltaLo_DataStore());

        /* MinMax: '<S308>/MinMax1' incorporates:
         *  MinMax: '<S308>/MinMax'
         */
        rtb_Product_h = (BaseEngineController_LS_B.s309_MinMax1 >= rtb_Product_h)
          || rtIsNaN(rtb_Product_h) ? BaseEngineController_LS_B.s309_MinMax1 :
          rtb_Product_h;
        BaseEngineController_LS_B.s304_Switch = (rtb_Product_h <= rtb_Product1_f)
          || rtIsNaN(rtb_Product1_f) ? rtb_Product_h : rtb_Product1_f;
      }

      /* End of Switch: '<S304>/Switch' */

      /* S-Function Block: <S155>/motohawk_interpolation_2d1 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        BaseEngineController_LS_B.s155_motohawk_interpolation_2d1 =
          TableInterpolation2D_real_T
          (BaseEngineController_LS_B.s396_motohawk_prelookup1,
           BaseEngineController_LS_B.s398_motohawk_prelookup1, (real_T *)
           ((BaseSparkEnergyMap_DataStore())), 9, 9);
        (BaseSparkEnergy_DataStore()) =
          BaseEngineController_LS_B.s155_motohawk_interpolation_2d1;
      }

      /* Update for UnitDelay: '<S307>/Initial Condition is True' incorporates:
       *  Constant: '<S307>/False After First Sample'
       */
      BaseEngineController_LS_DWork.s307_InitialConditionisTrue_DSTATE = FALSE;

      /* Update for UnitDelay: '<S304>/Unit Delay' */
      BaseEngineController_LS_DWork.s304_UnitDelay_DSTATE =
        BaseEngineController_LS_B.s304_Switch;
    }
  }
}
