/*
 * Trigger_FGND_5XRTI_PERIODIC_7437p0006.c
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

void Trigger_FGND_5XRTI_PERIODIC_7437p0006(void)
{
  /* Named constants for Stateflow: '<S791>/ECUP Latch' */
#define BaseEngineController_LS_IN_PowerDown (1U)
#define BaseEngineController_LS_IN_PowerUp (2U)

  if (BaseEngineController_LS_DWork.s405_motohawk_trigger_DWORK1) {
    /* Output and update for function-call system: '<S405>/Temp Sensors' */
    {
      /* local block i/o variables */
      real_T rtb_DataTypeConversion_o;
      real_T rtb_UnitDelay_di;
      real_T rtb_DataTypeConversion_k;
      real_T rtb_UnitDelay_jh;
      real_T rtb_DataTypeConversion_k3;
      real_T rtb_UnitDelay_i;
      real_T rtb_Merge_l;
      real_T rtb_DataTypeConversion_l;
      real_T rtb_UnitDelay_ki;
      real_T rtb_Merge_k;
      real_T rtb_Product_fc;
      index_T rtb_motohawk_prelookup_h;
      index_T rtb_motohawk_prelookup_a;
      index_T rtb_motohawk_prelookup_g;
      index_T rtb_motohawk_prelookup_b;
      boolean_T rtb_LogicalOperator2_k;
      boolean_T rtb_LogicalOperator3_h;
      boolean_T rtb_LogicalOperator2_p;
      boolean_T rtb_LogicalOperator3_ht;
      boolean_T rtb_LogicalOperator2_f;
      boolean_T rtb_LogicalOperator3_j;
      boolean_T rtb_LogicalOperator2_j;
      boolean_T rtb_LogicalOperator3_k;
      boolean_T rtb_LogicalOperator4_n;
      boolean_T rtb_LogicalOperator1_b;
      real_T rtb_Sum1_h;
      real_T rtb_Sum1_hn;
      real_T rtb_Sum1_g;
      real_T rtb_Sum1_j;

      /* S-Function Block: <S618>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s618_motohawk_delta_time_DWORK1, NULL);
        rtb_Product_fc = ((real_T) delta) * 0.000001;
      }

      /* Product: '<S618>/Product' incorporates:
       *  MinMax: '<S618>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S618>/motohawk_calibration'
       */
      rtb_Product_fc /= (rtb_Product_fc >= (ECTFiltConst_DataStore())) ||
        rtIsNaN((ECTFiltConst_DataStore())) ? rtb_Product_fc :
        (ECTFiltConst_DataStore());

      /* Logic: '<S614>/Logical Operator4' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S614>/motohawk_fault_status1'
       *  S-Function (motohawk_sfun_fault_status): '<S614>/motohawk_fault_status4'
       */
      rtb_LogicalOperator4_n = (IsFaultActive(20) || IsFaultActive(21));

      /* Logic: '<S614>/Logical Operator1' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S614>/motohawk_fault_status2'
       *  S-Function (motohawk_sfun_fault_status): '<S614>/motohawk_fault_status3'
       */
      rtb_LogicalOperator1_b = (IsFaultSuspected(20) || IsFaultSuspected(21));

      /* S-Function Block: <S541>/motohawk_ain Resource: ECTSensorPin */
      {
        extern NativeError_S ECTSensorPin_AnalogInput_Get(uint16_T *adc,
          uint16_T *status);
        ECTSensorPin_AnalogInput_Get
          (&BaseEngineController_LS_B.s541_motohawk_ain, NULL);
      }

      /* DataTypeConversion: '<S614>/Data Type Conversion' */
      rtb_DataTypeConversion_o = (real_T)
        BaseEngineController_LS_B.s541_motohawk_ain;

      /* S-Function Block: <S623>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (ECTIdx_DataStore()) = TablePrelookup_real_T(rtb_DataTypeConversion_o,
          (ECTIdxArr_DataStore()), 13, (ECTIdx_DataStore()));
        rtb_motohawk_prelookup_h = (ECTIdx_DataStore());
      }

      /* S-Function Block: <S623>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        BaseEngineController_LS_B.s623_motohawk_interpolation_1d =
          TableInterpolation1D_real_T(rtb_motohawk_prelookup_h, (real_T *)
          ((ECTTbl_DataStore())), 13);
      }

      /* UnitDelay: '<S614>/Unit Delay' */
      rtb_UnitDelay_di = BaseEngineController_LS_DWork.s614_UnitDelay_DSTATE;

      /* If: '<S614>/If' incorporates:
       *  Logic: '<S614>/Logical Operator5'
       *  Logic: '<S614>/Logical Operator6'
       */
      if ((!rtb_LogicalOperator4_n) && rtb_LogicalOperator1_b) {
        /* Outputs for IfAction SubSystem: '<S614>/If Action Subsystem' incorporates:
         *  ActionPort: '<S619>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay_di,
          &BaseEngineController_LS_B.s614_Merge);

        /* End of Outputs for SubSystem: '<S614>/If Action Subsystem' */
      } else if (rtb_LogicalOperator4_n) {
        /* Outputs for IfAction SubSystem: '<S614>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S620>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem((ECTDefault_DataStore()),
          &BaseEngineController_LS_B.s614_Merge);

        /* End of Outputs for SubSystem: '<S614>/If Action Subsystem1' */
      } else {
        /* Outputs for IfAction SubSystem: '<S614>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S621>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem
          (BaseEngineController_LS_B.s623_motohawk_interpolation_1d,
           &BaseEngineController_LS_B.s614_Merge);

        /* End of Outputs for SubSystem: '<S614>/If Action Subsystem2' */
      }

      /* End of If: '<S614>/If' */

      /* Sum: '<S624>/Sum1' incorporates:
       *  Constant: '<S624>/Constant'
       *  Product: '<S624>/Product'
       *  Product: '<S624>/Product1'
       *  Sum: '<S624>/Sum'
       *  UnitDelay: '<S624>/Unit Delay'
       */
      rtb_Sum1_h = (1.0 - rtb_Product_fc) *
        BaseEngineController_LS_DWork.s624_UnitDelay_DSTATE +
        BaseEngineController_LS_B.s614_Merge * rtb_Product_fc;

      /* If: '<S622>/If' incorporates:
       *  Inport: '<S625>/In1'
       *  Inport: '<S626>/In1'
       *  S-Function (motohawk_sfun_calibration): '<S622>/new_value'
       *  S-Function (motohawk_sfun_calibration): '<S622>/override_enable'
       */
      if ((ECT_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S622>/NewValue' incorporates:
         *  ActionPort: '<S625>/Action Port'
         */
        BaseEngineController_LS_B.s622_Merge = (ECT_new_DataStore());

        /* End of Outputs for SubSystem: '<S622>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S622>/OldValue' incorporates:
         *  ActionPort: '<S626>/Action Port'
         */
        BaseEngineController_LS_B.s622_Merge = rtb_Sum1_h;

        /* End of Outputs for SubSystem: '<S622>/OldValue' */
      }

      /* End of If: '<S622>/If' */

      /* Logic: '<S614>/Logical Operator2' incorporates:
       *  RelationalOperator: '<S614>/Relational Operator2'
       *  S-Function (motohawk_sfun_calibration): '<S614>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_data_read): '<S614>/motohawk_data_read1'
       */
      rtb_LogicalOperator2_k = ((MPRD_DataStore() && (rtb_DataTypeConversion_o >
                                  (ECTMax_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S614>/motohawk_fault_def2' */

      /* Set Fault Suspected Status: ECTRangeHigh */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(20, rtb_LogicalOperator2_k);
        UpdateFault(20);
      }

      /* Logic: '<S614>/Logical Operator3' incorporates:
       *  RelationalOperator: '<S614>/Relational Operator3'
       *  S-Function (motohawk_sfun_calibration): '<S614>/motohawk_calibration6'
       *  S-Function (motohawk_sfun_data_read): '<S614>/motohawk_data_read1'
       */
      rtb_LogicalOperator3_h = ((MPRD_DataStore() && (rtb_DataTypeConversion_o <
                                  (ECTMin_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S614>/motohawk_fault_def3' */

      /* Set Fault Suspected Status: ECTRangeLow */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(21, rtb_LogicalOperator3_h);
        UpdateFault(21);
      }

      /* S-Function Block: <S645>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s645_motohawk_delta_time_DWORK1, NULL);
        rtb_Product_fc = ((real_T) delta) * 0.000001;
      }

      /* Product: '<S645>/Product' incorporates:
       *  MinMax: '<S645>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S645>/motohawk_calibration'
       */
      rtb_Product_fc /= (rtb_Product_fc >= (IATFiltConst_DataStore())) ||
        rtIsNaN((IATFiltConst_DataStore())) ? rtb_Product_fc :
        (IATFiltConst_DataStore());

      /* Logic: '<S617>/Logical Operator4' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S617>/motohawk_fault_status1'
       *  S-Function (motohawk_sfun_fault_status): '<S617>/motohawk_fault_status4'
       */
      rtb_LogicalOperator4_n = (IsFaultActive(54) || IsFaultActive(55));

      /* Logic: '<S617>/Logical Operator1' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S617>/motohawk_fault_status2'
       *  S-Function (motohawk_sfun_fault_status): '<S617>/motohawk_fault_status3'
       */
      rtb_LogicalOperator1_b = (IsFaultSuspected(54) || IsFaultSuspected(55));

      /* S-Function Block: <S541>/motohawk_ain1 Resource: IATSensorPin */
      {
        extern NativeError_S IATSensorPin_AnalogInput_Get(uint16_T *adc,
          uint16_T *status);
        IATSensorPin_AnalogInput_Get
          (&BaseEngineController_LS_B.s541_motohawk_ain1, NULL);
      }

      /* DataTypeConversion: '<S617>/Data Type Conversion' */
      rtb_DataTypeConversion_k = (real_T)
        BaseEngineController_LS_B.s541_motohawk_ain1;

      /* S-Function Block: <S650>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (IATIdx_DataStore()) = TablePrelookup_real_T(rtb_DataTypeConversion_k,
          (IATIdxArr_DataStore()), 13, (IATIdx_DataStore()));
        rtb_motohawk_prelookup_a = (IATIdx_DataStore());
      }

      /* S-Function Block: <S650>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        BaseEngineController_LS_B.s650_motohawk_interpolation_1d =
          TableInterpolation1D_real_T(rtb_motohawk_prelookup_a, (real_T *)
          ((IATTbl_DataStore())), 13);
      }

      /* UnitDelay: '<S617>/Unit Delay' */
      rtb_UnitDelay_jh = BaseEngineController_LS_DWork.s617_UnitDelay_DSTATE;

      /* If: '<S617>/If' incorporates:
       *  Logic: '<S617>/Logical Operator5'
       *  Logic: '<S617>/Logical Operator6'
       */
      if ((!rtb_LogicalOperator4_n) && rtb_LogicalOperator1_b) {
        /* Outputs for IfAction SubSystem: '<S617>/If Action Subsystem' incorporates:
         *  ActionPort: '<S646>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay_jh,
          &BaseEngineController_LS_B.s617_Merge);

        /* End of Outputs for SubSystem: '<S617>/If Action Subsystem' */
      } else if (rtb_LogicalOperator4_n) {
        /* Outputs for IfAction SubSystem: '<S617>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S647>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem((IATDefault_DataStore()),
          &BaseEngineController_LS_B.s617_Merge);

        /* End of Outputs for SubSystem: '<S617>/If Action Subsystem1' */
      } else {
        /* Outputs for IfAction SubSystem: '<S617>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S648>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem
          (BaseEngineController_LS_B.s650_motohawk_interpolation_1d,
           &BaseEngineController_LS_B.s617_Merge);

        /* End of Outputs for SubSystem: '<S617>/If Action Subsystem2' */
      }

      /* End of If: '<S617>/If' */

      /* Sum: '<S651>/Sum1' incorporates:
       *  Constant: '<S651>/Constant'
       *  Product: '<S651>/Product'
       *  Product: '<S651>/Product1'
       *  Sum: '<S651>/Sum'
       *  UnitDelay: '<S651>/Unit Delay'
       */
      rtb_Sum1_hn = (1.0 - rtb_Product_fc) *
        BaseEngineController_LS_DWork.s651_UnitDelay_DSTATE +
        BaseEngineController_LS_B.s617_Merge * rtb_Product_fc;

      /* If: '<S649>/If' incorporates:
       *  Inport: '<S652>/In1'
       *  Inport: '<S653>/In1'
       *  S-Function (motohawk_sfun_calibration): '<S649>/new_value'
       *  S-Function (motohawk_sfun_calibration): '<S649>/override_enable'
       */
      if ((IAT_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S649>/NewValue' incorporates:
         *  ActionPort: '<S652>/Action Port'
         */
        BaseEngineController_LS_B.s649_Merge = (IAT_new_DataStore());

        /* End of Outputs for SubSystem: '<S649>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S649>/OldValue' incorporates:
         *  ActionPort: '<S653>/Action Port'
         */
        BaseEngineController_LS_B.s649_Merge = rtb_Sum1_hn;

        /* End of Outputs for SubSystem: '<S649>/OldValue' */
      }

      /* End of If: '<S649>/If' */

      /* Logic: '<S617>/Logical Operator2' incorporates:
       *  RelationalOperator: '<S617>/Relational Operator2'
       *  S-Function (motohawk_sfun_calibration): '<S617>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_data_read): '<S617>/motohawk_data_read1'
       */
      rtb_LogicalOperator2_p = ((MPRD_DataStore() && (rtb_DataTypeConversion_k >
                                  (IATMax_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S617>/motohawk_fault_def2' */

      /* Set Fault Suspected Status: IATRangeHigh */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(54, rtb_LogicalOperator2_p);
        UpdateFault(54);
      }

      /* Logic: '<S617>/Logical Operator3' incorporates:
       *  RelationalOperator: '<S617>/Relational Operator3'
       *  S-Function (motohawk_sfun_calibration): '<S617>/motohawk_calibration6'
       *  S-Function (motohawk_sfun_data_read): '<S617>/motohawk_data_read1'
       */
      rtb_LogicalOperator3_ht = ((MPRD_DataStore() && (rtb_DataTypeConversion_k <
                                   (IATMin_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S617>/motohawk_fault_def3' */

      /* Set Fault Suspected Status: IATRangeLow */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(55, rtb_LogicalOperator3_ht);
        UpdateFault(55);
      }

      /* S-Function Block: <S627>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s627_motohawk_delta_time_DWORK1, NULL);
        rtb_Product_fc = ((real_T) delta) * 0.000001;
      }

      /* Product: '<S627>/Product' incorporates:
       *  MinMax: '<S627>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S627>/motohawk_calibration'
       */
      rtb_Product_fc /= (rtb_Product_fc >= (EVAPFiltConst_DataStore())) ||
        rtIsNaN((EVAPFiltConst_DataStore())) ? rtb_Product_fc :
        (EVAPFiltConst_DataStore());

      /* Logic: '<S615>/Logical Operator4' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S615>/motohawk_fault_status1'
       *  S-Function (motohawk_sfun_fault_status): '<S615>/motohawk_fault_status4'
       */
      rtb_LogicalOperator4_n = (IsFaultActive(42) || IsFaultActive(43));

      /* Logic: '<S615>/Logical Operator1' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S615>/motohawk_fault_status2'
       *  S-Function (motohawk_sfun_fault_status): '<S615>/motohawk_fault_status3'
       */
      rtb_LogicalOperator1_b = (IsFaultSuspected(42) || IsFaultSuspected(43));

      /* S-Function Block: <S541>/motohawk_ain2 Resource: EVAPSensorPin */
      {
        extern NativeError_S EVAPSensorPin_AnalogInput_Get(uint16_T *adc,
          uint16_T *status);
        EVAPSensorPin_AnalogInput_Get
          (&BaseEngineController_LS_B.s541_motohawk_ain2, NULL);
      }

      /* DataTypeConversion: '<S615>/Data Type Conversion' */
      rtb_DataTypeConversion_k3 = (real_T)
        BaseEngineController_LS_B.s541_motohawk_ain2;

      /* S-Function Block: <S632>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (EVAPIdx_DataStore()) = TablePrelookup_real_T(rtb_DataTypeConversion_k3,
          (EVAPIdxArr_DataStore()), 13, (EVAPIdx_DataStore()));
        rtb_motohawk_prelookup_g = (EVAPIdx_DataStore());
      }

      /* S-Function Block: <S632>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        BaseEngineController_LS_B.s632_motohawk_interpolation_1d =
          TableInterpolation1D_real_T(rtb_motohawk_prelookup_g, (real_T *)
          ((EVAPTbl_DataStore())), 13);
      }

      /* UnitDelay: '<S615>/Unit Delay' */
      rtb_UnitDelay_i = BaseEngineController_LS_DWork.s615_UnitDelay_DSTATE;

      /* If: '<S615>/If' incorporates:
       *  Logic: '<S615>/Logical Operator5'
       *  Logic: '<S615>/Logical Operator6'
       */
      if ((!rtb_LogicalOperator4_n) && rtb_LogicalOperator1_b) {
        /* Outputs for IfAction SubSystem: '<S615>/If Action Subsystem' incorporates:
         *  ActionPort: '<S628>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay_i, &rtb_Merge_l);

        /* End of Outputs for SubSystem: '<S615>/If Action Subsystem' */
      } else if (rtb_LogicalOperator4_n) {
        /* Outputs for IfAction SubSystem: '<S615>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S629>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem((EVAPDefault_DataStore()),
          &rtb_Merge_l);

        /* End of Outputs for SubSystem: '<S615>/If Action Subsystem1' */
      } else {
        /* Outputs for IfAction SubSystem: '<S615>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S630>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem
          (BaseEngineController_LS_B.s632_motohawk_interpolation_1d,
           &rtb_Merge_l);

        /* End of Outputs for SubSystem: '<S615>/If Action Subsystem2' */
      }

      /* End of If: '<S615>/If' */

      /* Sum: '<S633>/Sum1' incorporates:
       *  Constant: '<S633>/Constant'
       *  Product: '<S633>/Product'
       *  Product: '<S633>/Product1'
       *  Sum: '<S633>/Sum'
       *  UnitDelay: '<S633>/Unit Delay'
       */
      rtb_Sum1_g = (1.0 - rtb_Product_fc) *
        BaseEngineController_LS_DWork.s633_UnitDelay_DSTATE + rtb_Merge_l *
        rtb_Product_fc;

      /* If: '<S631>/If' incorporates:
       *  Inport: '<S634>/In1'
       *  Inport: '<S635>/In1'
       *  S-Function (motohawk_sfun_calibration): '<S631>/new_value'
       *  S-Function (motohawk_sfun_calibration): '<S631>/override_enable'
       */
      if ((EVAP_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S631>/NewValue' incorporates:
         *  ActionPort: '<S634>/Action Port'
         */
        BaseEngineController_LS_B.s631_Merge = (EVAP_new_DataStore());

        /* End of Outputs for SubSystem: '<S631>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S631>/OldValue' incorporates:
         *  ActionPort: '<S635>/Action Port'
         */
        BaseEngineController_LS_B.s631_Merge = rtb_Sum1_g;

        /* End of Outputs for SubSystem: '<S631>/OldValue' */
      }

      /* End of If: '<S631>/If' */

      /* Logic: '<S615>/Logical Operator2' incorporates:
       *  RelationalOperator: '<S615>/Relational Operator2'
       *  S-Function (motohawk_sfun_calibration): '<S615>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_data_read): '<S615>/motohawk_data_read1'
       */
      rtb_LogicalOperator2_f = ((MPRD_DataStore() && (rtb_DataTypeConversion_k3 >
                                  (EVAPMax_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S615>/motohawk_fault_def2' */

      /* Set Fault Suspected Status: EVAPRangeHigh */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(42, rtb_LogicalOperator2_f);
        UpdateFault(42);
      }

      /* Logic: '<S615>/Logical Operator3' incorporates:
       *  RelationalOperator: '<S615>/Relational Operator3'
       *  S-Function (motohawk_sfun_calibration): '<S615>/motohawk_calibration6'
       *  S-Function (motohawk_sfun_data_read): '<S615>/motohawk_data_read1'
       */
      rtb_LogicalOperator3_j = ((MPRD_DataStore() && (rtb_DataTypeConversion_k3 <
                                  (EVAPMin_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S615>/motohawk_fault_def3' */

      /* Set Fault Suspected Status: EVAPRangeLow */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(43, rtb_LogicalOperator3_j);
        UpdateFault(43);
      }

      /* S-Function Block: <S636>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s636_motohawk_delta_time_DWORK1, NULL);
        rtb_Product_fc = ((real_T) delta) * 0.000001;
      }

      /* Product: '<S636>/Product' incorporates:
       *  MinMax: '<S636>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S636>/motohawk_calibration'
       */
      rtb_Product_fc /= (rtb_Product_fc >= (CATFiltConst_DataStore())) ||
        rtIsNaN((CATFiltConst_DataStore())) ? rtb_Product_fc :
        (CATFiltConst_DataStore());

      /* Logic: '<S616>/Logical Operator4' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S616>/motohawk_fault_status1'
       *  S-Function (motohawk_sfun_fault_status): '<S616>/motohawk_fault_status4'
       */
      rtb_LogicalOperator4_n = (IsFaultActive(13) || IsFaultActive(14));

      /* Logic: '<S616>/Logical Operator1' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S616>/motohawk_fault_status2'
       *  S-Function (motohawk_sfun_fault_status): '<S616>/motohawk_fault_status3'
       */
      rtb_LogicalOperator1_b = (IsFaultSuspected(13) || IsFaultSuspected(14));

      /* S-Function Block: <S541>/motohawk_ain3 Resource: CATSensorPin */
      {
        extern NativeError_S CATSensorPin_AnalogInput_Get(uint16_T *adc,
          uint16_T *status);
        CATSensorPin_AnalogInput_Get
          (&BaseEngineController_LS_B.s541_motohawk_ain3, NULL);
      }

      /* DataTypeConversion: '<S616>/Data Type Conversion' */
      rtb_DataTypeConversion_l = (real_T)
        BaseEngineController_LS_B.s541_motohawk_ain3;

      /* S-Function Block: <S641>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (CATIdx_DataStore()) = TablePrelookup_real_T(rtb_DataTypeConversion_l,
          (CATIdxArr_DataStore()), 13, (CATIdx_DataStore()));
        rtb_motohawk_prelookup_b = (CATIdx_DataStore());
      }

      /* S-Function Block: <S641>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        BaseEngineController_LS_B.s641_motohawk_interpolation_1d =
          TableInterpolation1D_real_T(rtb_motohawk_prelookup_b, (real_T *)
          ((CATTbl_DataStore())), 13);
      }

      /* UnitDelay: '<S616>/Unit Delay' */
      rtb_UnitDelay_ki = BaseEngineController_LS_DWork.s616_UnitDelay_DSTATE;

      /* If: '<S616>/If' incorporates:
       *  Logic: '<S616>/Logical Operator5'
       *  Logic: '<S616>/Logical Operator6'
       */
      if ((!rtb_LogicalOperator4_n) && rtb_LogicalOperator1_b) {
        /* Outputs for IfAction SubSystem: '<S616>/If Action Subsystem' incorporates:
         *  ActionPort: '<S637>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay_ki, &rtb_Merge_k);

        /* End of Outputs for SubSystem: '<S616>/If Action Subsystem' */
      } else if (rtb_LogicalOperator4_n) {
        /* Outputs for IfAction SubSystem: '<S616>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S638>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem((CATDefault_DataStore()),
          &rtb_Merge_k);

        /* End of Outputs for SubSystem: '<S616>/If Action Subsystem1' */
      } else {
        /* Outputs for IfAction SubSystem: '<S616>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S639>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem
          (BaseEngineController_LS_B.s641_motohawk_interpolation_1d,
           &rtb_Merge_k);

        /* End of Outputs for SubSystem: '<S616>/If Action Subsystem2' */
      }

      /* End of If: '<S616>/If' */

      /* Sum: '<S642>/Sum1' incorporates:
       *  Constant: '<S642>/Constant'
       *  Product: '<S642>/Product'
       *  Product: '<S642>/Product1'
       *  Sum: '<S642>/Sum'
       *  UnitDelay: '<S642>/Unit Delay'
       */
      rtb_Sum1_j = (1.0 - rtb_Product_fc) *
        BaseEngineController_LS_DWork.s642_UnitDelay_DSTATE + rtb_Merge_k *
        rtb_Product_fc;

      /* If: '<S640>/If' incorporates:
       *  Inport: '<S643>/In1'
       *  Inport: '<S644>/In1'
       *  S-Function (motohawk_sfun_calibration): '<S640>/new_value'
       *  S-Function (motohawk_sfun_calibration): '<S640>/override_enable'
       */
      if ((CAT_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S640>/NewValue' incorporates:
         *  ActionPort: '<S643>/Action Port'
         */
        BaseEngineController_LS_B.s640_Merge = (CAT_new_DataStore());

        /* End of Outputs for SubSystem: '<S640>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S640>/OldValue' incorporates:
         *  ActionPort: '<S644>/Action Port'
         */
        BaseEngineController_LS_B.s640_Merge = rtb_Sum1_j;

        /* End of Outputs for SubSystem: '<S640>/OldValue' */
      }

      /* End of If: '<S640>/If' */

      /* Logic: '<S616>/Logical Operator2' incorporates:
       *  RelationalOperator: '<S616>/Relational Operator2'
       *  S-Function (motohawk_sfun_calibration): '<S616>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_data_read): '<S616>/motohawk_data_read1'
       */
      rtb_LogicalOperator2_j = ((MPRD_DataStore() && (rtb_DataTypeConversion_l >
                                  (CATMax_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S616>/motohawk_fault_def2' */

      /* Set Fault Suspected Status: CATRangeHigh */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(13, rtb_LogicalOperator2_j);
        UpdateFault(13);
      }

      /* Logic: '<S616>/Logical Operator3' incorporates:
       *  RelationalOperator: '<S616>/Relational Operator3'
       *  S-Function (motohawk_sfun_calibration): '<S616>/motohawk_calibration6'
       *  S-Function (motohawk_sfun_data_read): '<S616>/motohawk_data_read1'
       */
      rtb_LogicalOperator3_k = ((MPRD_DataStore() && (rtb_DataTypeConversion_l <
                                  (CATMin_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S616>/motohawk_fault_def3' */

      /* Set Fault Suspected Status: CATRangeLow */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(14, rtb_LogicalOperator3_k);
        UpdateFault(14);
      }

      /* Update for UnitDelay: '<S614>/Unit Delay' */
      BaseEngineController_LS_DWork.s614_UnitDelay_DSTATE =
        BaseEngineController_LS_B.s614_Merge;

      /* Update for UnitDelay: '<S624>/Unit Delay' */
      BaseEngineController_LS_DWork.s624_UnitDelay_DSTATE = rtb_Sum1_h;

      /* Update for UnitDelay: '<S617>/Unit Delay' */
      BaseEngineController_LS_DWork.s617_UnitDelay_DSTATE =
        BaseEngineController_LS_B.s617_Merge;

      /* Update for UnitDelay: '<S651>/Unit Delay' */
      BaseEngineController_LS_DWork.s651_UnitDelay_DSTATE = rtb_Sum1_hn;

      /* Update for UnitDelay: '<S615>/Unit Delay' */
      BaseEngineController_LS_DWork.s615_UnitDelay_DSTATE = rtb_Merge_l;

      /* Update for UnitDelay: '<S633>/Unit Delay' */
      BaseEngineController_LS_DWork.s633_UnitDelay_DSTATE = rtb_Sum1_g;

      /* Update for UnitDelay: '<S616>/Unit Delay' */
      BaseEngineController_LS_DWork.s616_UnitDelay_DSTATE = rtb_Merge_k;

      /* Update for UnitDelay: '<S642>/Unit Delay' */
      BaseEngineController_LS_DWork.s642_UnitDelay_DSTATE = rtb_Sum1_j;
    }
  }
}
