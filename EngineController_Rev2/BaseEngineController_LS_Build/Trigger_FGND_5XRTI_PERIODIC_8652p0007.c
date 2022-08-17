/*
 * Trigger_FGND_5XRTI_PERIODIC_8652p0007.c
 *
 * Code generation for model "BaseEngineController_LS.mdl".
 *
 * Model version              : 1.2049
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Tue Aug 16 23:25:15 2022
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_LS.h"
#include "BaseEngineController_LS_private.h"

void Trigger_FGND_5XRTI_PERIODIC_8652p0007(void)
{
  /* Named constants for Stateflow: '<S1039>/ECUP Latch' */
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
  }

  if (BaseEngineController_LS_DWork.s456_motohawk_trigger_DWORK1) {
    /* Output and update for function-call system: '<S456>/Temp Sensors' */
    {
      /* local block i/o variables */
      real_T rtb_DataTypeConversion_o;
      real_T rtb_UnitDelay_di;
      real_T rtb_DataTypeConversion_k;
      real_T rtb_UnitDelay_jh;
      real_T rtb_DataTypeConversion_k3;
      real_T rtb_UnitDelay_i;
      real_T rtb_Merge_l;
      real_T rtb_DataTypeConversion_i;
      real_T rtb_UnitDelay_kw;
      real_T rtb_Merge_l5;
      real_T rtb_Product_d0;
      index_T rtb_motohawk_prelookup_h;
      index_T rtb_motohawk_prelookup_a;
      index_T rtb_motohawk_prelookup_gz;
      index_T rtb_motohawk_prelookup_b;
      boolean_T rtb_LogicalOperator2_k;
      boolean_T rtb_LogicalOperator3_h;
      boolean_T rtb_LogicalOperator2_p;
      boolean_T rtb_LogicalOperator3_ht;
      boolean_T rtb_LogicalOperator2_f;
      boolean_T rtb_LogicalOperator3_j;
      boolean_T rtb_LogicalOperator2_i;
      boolean_T rtb_LogicalOperator3_p;
      boolean_T rtb_LogicalOperator4;
      boolean_T rtb_LogicalOperator1_b;
      real_T rtb_Sum1_h;
      real_T rtb_Sum1_hn;
      real_T rtb_Sum1_g;
      real_T rtb_Sum1_lf;

      /* S-Function Block: <S734>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s734_motohawk_delta_time_DWORK1, NULL);
        rtb_Product_d0 = ((real_T) delta) * 0.000001;
      }

      /* Product: '<S734>/Product' incorporates:
       *  MinMax: '<S734>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S734>/motohawk_calibration'
       */
      rtb_Product_d0 /= (rtb_Product_d0 >= (ECTFiltConst_DataStore())) ||
        rtIsNaN((ECTFiltConst_DataStore())) ? rtb_Product_d0 :
        (ECTFiltConst_DataStore());

      /* Logic: '<S722>/Logical Operator4' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S722>/motohawk_fault_status1'
       *  S-Function (motohawk_sfun_fault_status): '<S722>/motohawk_fault_status4'
       */
      rtb_LogicalOperator4 = (IsFaultActive(32) || IsFaultActive(33));

      /* Logic: '<S722>/Logical Operator1' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S722>/motohawk_fault_status2'
       *  S-Function (motohawk_sfun_fault_status): '<S722>/motohawk_fault_status3'
       */
      rtb_LogicalOperator1_b = (IsFaultSuspected(32) || IsFaultSuspected(33));

      /* S-Function Block: <S710>/motohawk_ain Resource: ECTSensorPin */
      {
        extern NativeError_S ECTSensorPin_AnalogInput_Get(uint16_T *adc,
          uint16_T *status);
        ECTSensorPin_AnalogInput_Get
          (&BaseEngineController_LS_B.s710_motohawk_ain, NULL);
      }

      /* DataTypeConversion: '<S722>/Data Type Conversion' */
      rtb_DataTypeConversion_o = (real_T)
        BaseEngineController_LS_B.s710_motohawk_ain;

      /* S-Function Block: <S739>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (ECTIdx_DataStore()) = TablePrelookup_real_T(rtb_DataTypeConversion_o,
          (ECTIdxArr_DataStore()), 13, (ECTIdx_DataStore()));
        rtb_motohawk_prelookup_h = (ECTIdx_DataStore());
      }

      /* S-Function Block: <S739>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        BaseEngineController_LS_B.s739_motohawk_interpolation_1d =
          TableInterpolation1D_real_T(rtb_motohawk_prelookup_h, (real_T *)
          ((ECTTbl_DataStore())), 13);
      }

      /* UnitDelay: '<S722>/Unit Delay' */
      rtb_UnitDelay_di = BaseEngineController_LS_DWork.s722_UnitDelay_DSTATE;

      /* If: '<S722>/If' incorporates:
       *  Logic: '<S722>/Logical Operator5'
       *  Logic: '<S722>/Logical Operator6'
       */
      if ((!rtb_LogicalOperator4) && rtb_LogicalOperator1_b) {
        /* Outputs for IfAction SubSystem: '<S722>/If Action Subsystem' incorporates:
         *  ActionPort: '<S735>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay_di,
          &BaseEngineController_LS_B.s722_Merge);

        /* End of Outputs for SubSystem: '<S722>/If Action Subsystem' */
      } else if (rtb_LogicalOperator4) {
        /* Outputs for IfAction SubSystem: '<S722>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S736>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem((ECTDefault_DataStore()),
          &BaseEngineController_LS_B.s722_Merge);

        /* End of Outputs for SubSystem: '<S722>/If Action Subsystem1' */
      } else {
        /* Outputs for IfAction SubSystem: '<S722>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S737>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem
          (BaseEngineController_LS_B.s739_motohawk_interpolation_1d,
           &BaseEngineController_LS_B.s722_Merge);

        /* End of Outputs for SubSystem: '<S722>/If Action Subsystem2' */
      }

      /* End of If: '<S722>/If' */

      /* Sum: '<S740>/Sum1' incorporates:
       *  Constant: '<S740>/Constant'
       *  Product: '<S740>/Product'
       *  Product: '<S740>/Product1'
       *  Sum: '<S740>/Sum'
       *  UnitDelay: '<S740>/Unit Delay'
       */
      rtb_Sum1_h = (1.0 - rtb_Product_d0) *
        BaseEngineController_LS_DWork.s740_UnitDelay_DSTATE +
        BaseEngineController_LS_B.s722_Merge * rtb_Product_d0;

      /* If: '<S738>/If' incorporates:
       *  Inport: '<S741>/In1'
       *  Inport: '<S742>/In1'
       *  S-Function (motohawk_sfun_calibration): '<S738>/new_value'
       *  S-Function (motohawk_sfun_calibration): '<S738>/override_enable'
       */
      if ((ECT_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S738>/NewValue' incorporates:
         *  ActionPort: '<S741>/Action Port'
         */
        BaseEngineController_LS_B.s738_Merge = (ECT_new_DataStore());

        /* End of Outputs for SubSystem: '<S738>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S738>/OldValue' incorporates:
         *  ActionPort: '<S742>/Action Port'
         */
        BaseEngineController_LS_B.s738_Merge = rtb_Sum1_h;

        /* End of Outputs for SubSystem: '<S738>/OldValue' */
      }

      /* End of If: '<S738>/If' */

      /* Logic: '<S722>/Logical Operator2' incorporates:
       *  RelationalOperator: '<S722>/Relational Operator2'
       *  S-Function (motohawk_sfun_calibration): '<S722>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_data_read): '<S722>/motohawk_data_read1'
       */
      rtb_LogicalOperator2_k = ((MPRD_DataStore() && (rtb_DataTypeConversion_o >
                                  (ECTMax_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S722>/motohawk_fault_def2' */

      /* Set Fault Suspected Status: ECTRangeHigh */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(32, rtb_LogicalOperator2_k);
        UpdateFault(32);
      }

      /* Logic: '<S722>/Logical Operator3' incorporates:
       *  RelationalOperator: '<S722>/Relational Operator3'
       *  S-Function (motohawk_sfun_calibration): '<S722>/motohawk_calibration6'
       *  S-Function (motohawk_sfun_data_read): '<S722>/motohawk_data_read1'
       */
      rtb_LogicalOperator3_h = ((MPRD_DataStore() && (rtb_DataTypeConversion_o <
                                  (ECTMin_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S722>/motohawk_fault_def3' */

      /* Set Fault Suspected Status: ECTRangeLow */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(33, rtb_LogicalOperator3_h);
        UpdateFault(33);
      }

      /* S-Function Block: <S752>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s752_motohawk_delta_time_DWORK1, NULL);
        rtb_Product_d0 = ((real_T) delta) * 0.000001;
      }

      /* Product: '<S752>/Product' incorporates:
       *  MinMax: '<S752>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S752>/motohawk_calibration'
       */
      rtb_Product_d0 /= (rtb_Product_d0 >= (IATFiltConst_DataStore())) ||
        rtIsNaN((IATFiltConst_DataStore())) ? rtb_Product_d0 :
        (IATFiltConst_DataStore());

      /* Logic: '<S724>/Logical Operator4' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S724>/motohawk_fault_status1'
       *  S-Function (motohawk_sfun_fault_status): '<S724>/motohawk_fault_status4'
       */
      rtb_LogicalOperator4 = (IsFaultActive(72) || IsFaultActive(73));

      /* Logic: '<S724>/Logical Operator1' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S724>/motohawk_fault_status2'
       *  S-Function (motohawk_sfun_fault_status): '<S724>/motohawk_fault_status3'
       */
      rtb_LogicalOperator1_b = (IsFaultSuspected(72) || IsFaultSuspected(73));

      /* S-Function Block: <S710>/motohawk_ain1 Resource: IATSensorPin */
      {
        extern NativeError_S IATSensorPin_AnalogInput_Get(uint16_T *adc,
          uint16_T *status);
        IATSensorPin_AnalogInput_Get
          (&BaseEngineController_LS_B.s710_motohawk_ain1, NULL);
      }

      /* DataTypeConversion: '<S724>/Data Type Conversion' */
      rtb_DataTypeConversion_k = (real_T)
        BaseEngineController_LS_B.s710_motohawk_ain1;

      /* S-Function Block: <S757>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (IATIdx_DataStore()) = TablePrelookup_real_T(rtb_DataTypeConversion_k,
          (IATIdxArr_DataStore()), 13, (IATIdx_DataStore()));
        rtb_motohawk_prelookup_a = (IATIdx_DataStore());
      }

      /* S-Function Block: <S757>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        BaseEngineController_LS_B.s757_motohawk_interpolation_1d =
          TableInterpolation1D_real_T(rtb_motohawk_prelookup_a, (real_T *)
          ((IATTbl_DataStore())), 13);
      }

      /* UnitDelay: '<S724>/Unit Delay' */
      rtb_UnitDelay_jh = BaseEngineController_LS_DWork.s724_UnitDelay_DSTATE;

      /* If: '<S724>/If' incorporates:
       *  Logic: '<S724>/Logical Operator5'
       *  Logic: '<S724>/Logical Operator6'
       */
      if ((!rtb_LogicalOperator4) && rtb_LogicalOperator1_b) {
        /* Outputs for IfAction SubSystem: '<S724>/If Action Subsystem' incorporates:
         *  ActionPort: '<S753>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay_jh,
          &BaseEngineController_LS_B.s724_Merge);

        /* End of Outputs for SubSystem: '<S724>/If Action Subsystem' */
      } else if (rtb_LogicalOperator4) {
        /* Outputs for IfAction SubSystem: '<S724>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S754>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem((IATDefault_DataStore()),
          &BaseEngineController_LS_B.s724_Merge);

        /* End of Outputs for SubSystem: '<S724>/If Action Subsystem1' */
      } else {
        /* Outputs for IfAction SubSystem: '<S724>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S755>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem
          (BaseEngineController_LS_B.s757_motohawk_interpolation_1d,
           &BaseEngineController_LS_B.s724_Merge);

        /* End of Outputs for SubSystem: '<S724>/If Action Subsystem2' */
      }

      /* End of If: '<S724>/If' */

      /* Sum: '<S758>/Sum1' incorporates:
       *  Constant: '<S758>/Constant'
       *  Product: '<S758>/Product'
       *  Product: '<S758>/Product1'
       *  Sum: '<S758>/Sum'
       *  UnitDelay: '<S758>/Unit Delay'
       */
      rtb_Sum1_hn = (1.0 - rtb_Product_d0) *
        BaseEngineController_LS_DWork.s758_UnitDelay_DSTATE +
        BaseEngineController_LS_B.s724_Merge * rtb_Product_d0;

      /* If: '<S756>/If' incorporates:
       *  Inport: '<S759>/In1'
       *  Inport: '<S760>/In1'
       *  S-Function (motohawk_sfun_calibration): '<S756>/new_value'
       *  S-Function (motohawk_sfun_calibration): '<S756>/override_enable'
       */
      if ((IAT_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S756>/NewValue' incorporates:
         *  ActionPort: '<S759>/Action Port'
         */
        BaseEngineController_LS_B.s756_Merge = (IAT_new_DataStore());

        /* End of Outputs for SubSystem: '<S756>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S756>/OldValue' incorporates:
         *  ActionPort: '<S760>/Action Port'
         */
        BaseEngineController_LS_B.s756_Merge = rtb_Sum1_hn;

        /* End of Outputs for SubSystem: '<S756>/OldValue' */
      }

      /* End of If: '<S756>/If' */

      /* Logic: '<S724>/Logical Operator2' incorporates:
       *  RelationalOperator: '<S724>/Relational Operator2'
       *  S-Function (motohawk_sfun_calibration): '<S724>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_data_read): '<S724>/motohawk_data_read1'
       */
      rtb_LogicalOperator2_p = ((MPRD_DataStore() && (rtb_DataTypeConversion_k >
                                  (IATMax_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S724>/motohawk_fault_def2' */

      /* Set Fault Suspected Status: IATRangeHigh */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(72, rtb_LogicalOperator2_p);
        UpdateFault(72);
      }

      /* Logic: '<S724>/Logical Operator3' incorporates:
       *  RelationalOperator: '<S724>/Relational Operator3'
       *  S-Function (motohawk_sfun_calibration): '<S724>/motohawk_calibration6'
       *  S-Function (motohawk_sfun_data_read): '<S724>/motohawk_data_read1'
       */
      rtb_LogicalOperator3_ht = ((MPRD_DataStore() && (rtb_DataTypeConversion_k <
                                   (IATMin_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S724>/motohawk_fault_def3' */

      /* Set Fault Suspected Status: IATRangeLow */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(73, rtb_LogicalOperator3_ht);
        UpdateFault(73);
      }

      /* S-Function Block: <S743>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s743_motohawk_delta_time_DWORK1, NULL);
        rtb_Product_d0 = ((real_T) delta) * 0.000001;
      }

      /* Product: '<S743>/Product' incorporates:
       *  MinMax: '<S743>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S743>/motohawk_calibration'
       */
      rtb_Product_d0 /= (rtb_Product_d0 >= (EVAPFiltConst_DataStore())) ||
        rtIsNaN((EVAPFiltConst_DataStore())) ? rtb_Product_d0 :
        (EVAPFiltConst_DataStore());

      /* Logic: '<S723>/Logical Operator4' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S723>/motohawk_fault_status1'
       *  S-Function (motohawk_sfun_fault_status): '<S723>/motohawk_fault_status4'
       */
      rtb_LogicalOperator4 = (IsFaultActive(54) || IsFaultActive(55));

      /* Logic: '<S723>/Logical Operator1' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S723>/motohawk_fault_status2'
       *  S-Function (motohawk_sfun_fault_status): '<S723>/motohawk_fault_status3'
       */
      rtb_LogicalOperator1_b = (IsFaultSuspected(54) || IsFaultSuspected(55));

      /* S-Function Block: <S710>/motohawk_ain2 Resource: EVAPSensorPin */
      {
        extern NativeError_S EVAPSensorPin_AnalogInput_Get(uint16_T *adc,
          uint16_T *status);
        EVAPSensorPin_AnalogInput_Get
          (&BaseEngineController_LS_B.s710_motohawk_ain2, NULL);
      }

      /* DataTypeConversion: '<S723>/Data Type Conversion' */
      rtb_DataTypeConversion_k3 = (real_T)
        BaseEngineController_LS_B.s710_motohawk_ain2;

      /* S-Function Block: <S748>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (EVAPIdx_DataStore()) = TablePrelookup_real_T(rtb_DataTypeConversion_k3,
          (EVAPIdxArr_DataStore()), 13, (EVAPIdx_DataStore()));
        rtb_motohawk_prelookup_gz = (EVAPIdx_DataStore());
      }

      /* S-Function Block: <S748>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        BaseEngineController_LS_B.s748_motohawk_interpolation_1d =
          TableInterpolation1D_real_T(rtb_motohawk_prelookup_gz, (real_T *)
          ((EVAPTbl_DataStore())), 13);
      }

      /* UnitDelay: '<S723>/Unit Delay' */
      rtb_UnitDelay_i = BaseEngineController_LS_DWork.s723_UnitDelay_DSTATE;

      /* If: '<S723>/If' incorporates:
       *  Logic: '<S723>/Logical Operator5'
       *  Logic: '<S723>/Logical Operator6'
       */
      if ((!rtb_LogicalOperator4) && rtb_LogicalOperator1_b) {
        /* Outputs for IfAction SubSystem: '<S723>/If Action Subsystem' incorporates:
         *  ActionPort: '<S744>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay_i, &rtb_Merge_l);

        /* End of Outputs for SubSystem: '<S723>/If Action Subsystem' */
      } else if (rtb_LogicalOperator4) {
        /* Outputs for IfAction SubSystem: '<S723>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S745>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem((EVAPDefault_DataStore()),
          &rtb_Merge_l);

        /* End of Outputs for SubSystem: '<S723>/If Action Subsystem1' */
      } else {
        /* Outputs for IfAction SubSystem: '<S723>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S746>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem
          (BaseEngineController_LS_B.s748_motohawk_interpolation_1d,
           &rtb_Merge_l);

        /* End of Outputs for SubSystem: '<S723>/If Action Subsystem2' */
      }

      /* End of If: '<S723>/If' */

      /* Sum: '<S749>/Sum1' incorporates:
       *  Constant: '<S749>/Constant'
       *  Product: '<S749>/Product'
       *  Product: '<S749>/Product1'
       *  Sum: '<S749>/Sum'
       *  UnitDelay: '<S749>/Unit Delay'
       */
      rtb_Sum1_g = (1.0 - rtb_Product_d0) *
        BaseEngineController_LS_DWork.s749_UnitDelay_DSTATE + rtb_Merge_l *
        rtb_Product_d0;

      /* If: '<S747>/If' incorporates:
       *  Inport: '<S750>/In1'
       *  Inport: '<S751>/In1'
       *  S-Function (motohawk_sfun_calibration): '<S747>/new_value'
       *  S-Function (motohawk_sfun_calibration): '<S747>/override_enable'
       */
      if ((EVAP_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S747>/NewValue' incorporates:
         *  ActionPort: '<S750>/Action Port'
         */
        BaseEngineController_LS_B.s747_Merge = (EVAP_new_DataStore());

        /* End of Outputs for SubSystem: '<S747>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S747>/OldValue' incorporates:
         *  ActionPort: '<S751>/Action Port'
         */
        BaseEngineController_LS_B.s747_Merge = rtb_Sum1_g;

        /* End of Outputs for SubSystem: '<S747>/OldValue' */
      }

      /* End of If: '<S747>/If' */

      /* Logic: '<S723>/Logical Operator2' incorporates:
       *  RelationalOperator: '<S723>/Relational Operator2'
       *  S-Function (motohawk_sfun_calibration): '<S723>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_data_read): '<S723>/motohawk_data_read1'
       */
      rtb_LogicalOperator2_f = ((MPRD_DataStore() && (rtb_DataTypeConversion_k3 >
                                  (EVAPMax_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S723>/motohawk_fault_def2' */

      /* Set Fault Suspected Status: EVAPRangeHigh */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(54, rtb_LogicalOperator2_f);
        UpdateFault(54);
      }

      /* Logic: '<S723>/Logical Operator3' incorporates:
       *  RelationalOperator: '<S723>/Relational Operator3'
       *  S-Function (motohawk_sfun_calibration): '<S723>/motohawk_calibration6'
       *  S-Function (motohawk_sfun_data_read): '<S723>/motohawk_data_read1'
       */
      rtb_LogicalOperator3_j = ((MPRD_DataStore() && (rtb_DataTypeConversion_k3 <
                                  (EVAPMin_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S723>/motohawk_fault_def3' */

      /* Set Fault Suspected Status: EVAPRangeLow */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(55, rtb_LogicalOperator3_j);
        UpdateFault(55);
      }

      /* S-Function Block: <S725>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s725_motohawk_delta_time_DWORK1, NULL);
        rtb_Product_d0 = ((real_T) delta) * 0.000001;
      }

      /* Product: '<S725>/Product' incorporates:
       *  MinMax: '<S725>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S725>/motohawk_calibration'
       */
      rtb_Product_d0 /= (rtb_Product_d0 >= (CATFiltConst_DataStore())) ||
        rtIsNaN((CATFiltConst_DataStore())) ? rtb_Product_d0 :
        (CATFiltConst_DataStore());

      /* Logic: '<S721>/Logical Operator4' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S721>/motohawk_fault_status1'
       *  S-Function (motohawk_sfun_fault_status): '<S721>/motohawk_fault_status4'
       */
      rtb_LogicalOperator4 = (IsFaultActive(25) || IsFaultActive(26));

      /* Logic: '<S721>/Logical Operator1' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S721>/motohawk_fault_status2'
       *  S-Function (motohawk_sfun_fault_status): '<S721>/motohawk_fault_status3'
       */
      rtb_LogicalOperator1_b = (IsFaultSuspected(25) || IsFaultSuspected(26));

      /* S-Function Block: <S710>/motohawk_ain3 Resource: CATSensorPin */
      {
        extern NativeError_S CATSensorPin_AnalogInput_Get(uint16_T *adc,
          uint16_T *status);
        CATSensorPin_AnalogInput_Get
          (&BaseEngineController_LS_B.s710_motohawk_ain3, NULL);
      }

      /* DataTypeConversion: '<S721>/Data Type Conversion' */
      rtb_DataTypeConversion_i = (real_T)
        BaseEngineController_LS_B.s710_motohawk_ain3;

      /* S-Function Block: <S730>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (CATIdx_DataStore()) = TablePrelookup_real_T(rtb_DataTypeConversion_i,
          (CATIdxArr_DataStore()), 13, (CATIdx_DataStore()));
        rtb_motohawk_prelookup_b = (CATIdx_DataStore());
      }

      /* S-Function Block: <S730>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        BaseEngineController_LS_B.s730_motohawk_interpolation_1d =
          TableInterpolation1D_real_T(rtb_motohawk_prelookup_b, (real_T *)
          ((CATTbl_DataStore())), 13);
      }

      /* UnitDelay: '<S721>/Unit Delay' */
      rtb_UnitDelay_kw = BaseEngineController_LS_DWork.s721_UnitDelay_DSTATE;

      /* If: '<S721>/If' incorporates:
       *  Logic: '<S721>/Logical Operator5'
       *  Logic: '<S721>/Logical Operator6'
       */
      if ((!rtb_LogicalOperator4) && rtb_LogicalOperator1_b) {
        /* Outputs for IfAction SubSystem: '<S721>/If Action Subsystem' incorporates:
         *  ActionPort: '<S726>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay_kw,
          &rtb_Merge_l5);

        /* End of Outputs for SubSystem: '<S721>/If Action Subsystem' */
      } else if (rtb_LogicalOperator4) {
        /* Outputs for IfAction SubSystem: '<S721>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S727>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem((CATDefault_DataStore()),
          &rtb_Merge_l5);

        /* End of Outputs for SubSystem: '<S721>/If Action Subsystem1' */
      } else {
        /* Outputs for IfAction SubSystem: '<S721>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S728>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem
          (BaseEngineController_LS_B.s730_motohawk_interpolation_1d,
           &rtb_Merge_l5);

        /* End of Outputs for SubSystem: '<S721>/If Action Subsystem2' */
      }

      /* End of If: '<S721>/If' */

      /* Sum: '<S731>/Sum1' incorporates:
       *  Constant: '<S731>/Constant'
       *  Product: '<S731>/Product'
       *  Product: '<S731>/Product1'
       *  Sum: '<S731>/Sum'
       *  UnitDelay: '<S731>/Unit Delay'
       */
      rtb_Sum1_lf = (1.0 - rtb_Product_d0) *
        BaseEngineController_LS_DWork.s731_UnitDelay_DSTATE + rtb_Merge_l5 *
        rtb_Product_d0;

      /* If: '<S729>/If' incorporates:
       *  Inport: '<S732>/In1'
       *  Inport: '<S733>/In1'
       *  S-Function (motohawk_sfun_calibration): '<S729>/new_value'
       *  S-Function (motohawk_sfun_calibration): '<S729>/override_enable'
       */
      if ((CAT_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S729>/NewValue' incorporates:
         *  ActionPort: '<S732>/Action Port'
         */
        BaseEngineController_LS_B.s729_Merge = (CAT_new_DataStore());

        /* End of Outputs for SubSystem: '<S729>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S729>/OldValue' incorporates:
         *  ActionPort: '<S733>/Action Port'
         */
        BaseEngineController_LS_B.s729_Merge = rtb_Sum1_lf;

        /* End of Outputs for SubSystem: '<S729>/OldValue' */
      }

      /* End of If: '<S729>/If' */

      /* Logic: '<S721>/Logical Operator2' incorporates:
       *  RelationalOperator: '<S721>/Relational Operator2'
       *  S-Function (motohawk_sfun_calibration): '<S721>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_data_read): '<S721>/motohawk_data_read1'
       */
      rtb_LogicalOperator2_i = ((MPRD_DataStore() && (rtb_DataTypeConversion_i >
                                  (CATMax_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S721>/motohawk_fault_def2' */

      /* Set Fault Suspected Status: CATRangeHigh */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(25, rtb_LogicalOperator2_i);
        UpdateFault(25);
      }

      /* Logic: '<S721>/Logical Operator3' incorporates:
       *  RelationalOperator: '<S721>/Relational Operator3'
       *  S-Function (motohawk_sfun_calibration): '<S721>/motohawk_calibration6'
       *  S-Function (motohawk_sfun_data_read): '<S721>/motohawk_data_read1'
       */
      rtb_LogicalOperator3_p = ((MPRD_DataStore() && (rtb_DataTypeConversion_i <
                                  (CATMin_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S721>/motohawk_fault_def3' */

      /* Set Fault Suspected Status: CATRangeLow */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(26, rtb_LogicalOperator3_p);
        UpdateFault(26);
      }

      /* Update for UnitDelay: '<S722>/Unit Delay' */
      BaseEngineController_LS_DWork.s722_UnitDelay_DSTATE =
        BaseEngineController_LS_B.s722_Merge;

      /* Update for UnitDelay: '<S740>/Unit Delay' */
      BaseEngineController_LS_DWork.s740_UnitDelay_DSTATE = rtb_Sum1_h;

      /* Update for UnitDelay: '<S724>/Unit Delay' */
      BaseEngineController_LS_DWork.s724_UnitDelay_DSTATE =
        BaseEngineController_LS_B.s724_Merge;

      /* Update for UnitDelay: '<S758>/Unit Delay' */
      BaseEngineController_LS_DWork.s758_UnitDelay_DSTATE = rtb_Sum1_hn;

      /* Update for UnitDelay: '<S723>/Unit Delay' */
      BaseEngineController_LS_DWork.s723_UnitDelay_DSTATE = rtb_Merge_l;

      /* Update for UnitDelay: '<S749>/Unit Delay' */
      BaseEngineController_LS_DWork.s749_UnitDelay_DSTATE = rtb_Sum1_g;

      /* Update for UnitDelay: '<S721>/Unit Delay' */
      BaseEngineController_LS_DWork.s721_UnitDelay_DSTATE = rtb_Merge_l5;

      /* Update for UnitDelay: '<S731>/Unit Delay' */
      BaseEngineController_LS_DWork.s731_UnitDelay_DSTATE = rtb_Sum1_lf;
    }
  }
}
