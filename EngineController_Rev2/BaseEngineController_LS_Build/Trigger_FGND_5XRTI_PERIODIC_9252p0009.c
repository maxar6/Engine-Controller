/*
 * Trigger_FGND_5XRTI_PERIODIC_9252p0009.c
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

void Trigger_FGND_5XRTI_PERIODIC_9252p0009(void)
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
  }

  if (BaseEngineController_LS_DWork.s474_motohawk_trigger_DWORK1) {
    /* Output and update for function-call system: '<S474>/Temp Sensors' */
    {
      /* local block i/o variables */
      real_T rtb_DataTypeConversion_o;
      real_T rtb_UnitDelay_di;
      real_T rtb_DataTypeConversion_k;
      real_T rtb_UnitDelay_jh;
      real_T rtb_DataTypeConversion_k3;
      real_T rtb_UnitDelay_i;
      real_T rtb_Merge_l;
      real_T rtb_Product_ns;
      index_T rtb_motohawk_prelookup_h;
      index_T rtb_motohawk_prelookup_a;
      index_T rtb_motohawk_prelookup_g;
      boolean_T rtb_LogicalOperator2_k;
      boolean_T rtb_LogicalOperator3_h;
      boolean_T rtb_LogicalOperator2_p;
      boolean_T rtb_LogicalOperator3_ht;
      boolean_T rtb_LogicalOperator2_f;
      boolean_T rtb_LogicalOperator3_j;
      boolean_T rtb_LogicalOperator4_h;
      boolean_T rtb_LogicalOperator1_b;
      real_T rtb_Sum1_hs;
      real_T rtb_Sum1_hn;
      real_T rtb_Sum1_g;

      /* S-Function Block: <S632>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s632_motohawk_delta_time_DWORK1, NULL);
        rtb_Product_ns = ((real_T) delta) * 0.000001;
      }

      /* Product: '<S632>/Product' incorporates:
       *  MinMax: '<S632>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S632>/motohawk_calibration'
       */
      rtb_Product_ns /= (rtb_Product_ns >= (ECTFiltConst_DataStore())) ||
        rtIsNaN((ECTFiltConst_DataStore())) ? rtb_Product_ns :
        (ECTFiltConst_DataStore());

      /* Logic: '<S629>/Logical Operator4' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S629>/motohawk_fault_status1'
       *  S-Function (motohawk_sfun_fault_status): '<S629>/motohawk_fault_status4'
       */
      rtb_LogicalOperator4_h = (IsFaultActive(37) || IsFaultActive(38));

      /* Logic: '<S629>/Logical Operator1' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S629>/motohawk_fault_status2'
       *  S-Function (motohawk_sfun_fault_status): '<S629>/motohawk_fault_status3'
       */
      rtb_LogicalOperator1_b = (IsFaultSuspected(37) || IsFaultSuspected(38));

      /* S-Function Block: <S618>/motohawk_ain Resource: ECTSensorPin */
      {
        extern NativeError_S ECTSensorPin_AnalogInput_Get(uint16_T *adc,
          uint16_T *status);
        ECTSensorPin_AnalogInput_Get
          (&BaseEngineController_LS_B.s618_motohawk_ain, NULL);
      }

      /* DataTypeConversion: '<S629>/Data Type Conversion' */
      rtb_DataTypeConversion_o = (real_T)
        BaseEngineController_LS_B.s618_motohawk_ain;

      /* S-Function Block: <S637>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (ECTIdx_DataStore()) = TablePrelookup_real_T(rtb_DataTypeConversion_o,
          (ECTIdxArr_DataStore()), 13, (ECTIdx_DataStore()));
        rtb_motohawk_prelookup_h = (ECTIdx_DataStore());
      }

      /* S-Function Block: <S637>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        BaseEngineController_LS_B.s637_motohawk_interpolation_1d =
          TableInterpolation1D_real_T(rtb_motohawk_prelookup_h, (real_T *)
          ((ECTTbl_DataStore())), 13);
      }

      /* UnitDelay: '<S629>/Unit Delay' */
      rtb_UnitDelay_di = BaseEngineController_LS_DWork.s629_UnitDelay_DSTATE;

      /* If: '<S629>/If' incorporates:
       *  Logic: '<S629>/Logical Operator5'
       *  Logic: '<S629>/Logical Operator6'
       */
      if ((!rtb_LogicalOperator4_h) && rtb_LogicalOperator1_b) {
        /* Outputs for IfAction SubSystem: '<S629>/If Action Subsystem' incorporates:
         *  ActionPort: '<S633>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay_di,
          &BaseEngineController_LS_B.s629_Merge);

        /* End of Outputs for SubSystem: '<S629>/If Action Subsystem' */
      } else if (rtb_LogicalOperator4_h) {
        /* Outputs for IfAction SubSystem: '<S629>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S634>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem((ECTDefault_DataStore()),
          &BaseEngineController_LS_B.s629_Merge);

        /* End of Outputs for SubSystem: '<S629>/If Action Subsystem1' */
      } else {
        /* Outputs for IfAction SubSystem: '<S629>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S635>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem
          (BaseEngineController_LS_B.s637_motohawk_interpolation_1d,
           &BaseEngineController_LS_B.s629_Merge);

        /* End of Outputs for SubSystem: '<S629>/If Action Subsystem2' */
      }

      /* End of If: '<S629>/If' */

      /* Sum: '<S638>/Sum1' incorporates:
       *  Constant: '<S638>/Constant'
       *  Product: '<S638>/Product'
       *  Product: '<S638>/Product1'
       *  Sum: '<S638>/Sum'
       *  UnitDelay: '<S638>/Unit Delay'
       */
      rtb_Sum1_hs = (1.0 - rtb_Product_ns) *
        BaseEngineController_LS_DWork.s638_UnitDelay_DSTATE +
        BaseEngineController_LS_B.s629_Merge * rtb_Product_ns;

      /* If: '<S636>/If' incorporates:
       *  Inport: '<S639>/In1'
       *  Inport: '<S640>/In1'
       *  S-Function (motohawk_sfun_calibration): '<S636>/new_value'
       *  S-Function (motohawk_sfun_calibration): '<S636>/override_enable'
       */
      if ((ECT_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S636>/NewValue' incorporates:
         *  ActionPort: '<S639>/Action Port'
         */
        BaseEngineController_LS_B.s636_Merge = (ECT_new_DataStore());

        /* End of Outputs for SubSystem: '<S636>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S636>/OldValue' incorporates:
         *  ActionPort: '<S640>/Action Port'
         */
        BaseEngineController_LS_B.s636_Merge = rtb_Sum1_hs;

        /* End of Outputs for SubSystem: '<S636>/OldValue' */
      }

      /* End of If: '<S636>/If' */

      /* Logic: '<S629>/Logical Operator2' incorporates:
       *  RelationalOperator: '<S629>/Relational Operator2'
       *  S-Function (motohawk_sfun_calibration): '<S629>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_data_read): '<S629>/motohawk_data_read1'
       */
      rtb_LogicalOperator2_k = ((MPRD_DataStore() && (rtb_DataTypeConversion_o >
                                  (ECTMax_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S629>/motohawk_fault_def2' */

      /* Set Fault Suspected Status: ECTRangeHigh */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(37, rtb_LogicalOperator2_k);
        UpdateFault(37);
      }

      /* Logic: '<S629>/Logical Operator3' incorporates:
       *  RelationalOperator: '<S629>/Relational Operator3'
       *  S-Function (motohawk_sfun_calibration): '<S629>/motohawk_calibration6'
       *  S-Function (motohawk_sfun_data_read): '<S629>/motohawk_data_read1'
       */
      rtb_LogicalOperator3_h = ((MPRD_DataStore() && (rtb_DataTypeConversion_o <
                                  (ECTMin_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S629>/motohawk_fault_def3' */

      /* Set Fault Suspected Status: ECTRangeLow */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(38, rtb_LogicalOperator3_h);
        UpdateFault(38);
      }

      /* S-Function Block: <S650>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s650_motohawk_delta_time_DWORK1, NULL);
        rtb_Product_ns = ((real_T) delta) * 0.000001;
      }

      /* Product: '<S650>/Product' incorporates:
       *  MinMax: '<S650>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S650>/motohawk_calibration'
       */
      rtb_Product_ns /= (rtb_Product_ns >= (IATFiltConst_DataStore())) ||
        rtIsNaN((IATFiltConst_DataStore())) ? rtb_Product_ns :
        (IATFiltConst_DataStore());

      /* Logic: '<S631>/Logical Operator4' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S631>/motohawk_fault_status1'
       *  S-Function (motohawk_sfun_fault_status): '<S631>/motohawk_fault_status4'
       */
      rtb_LogicalOperator4_h = (IsFaultActive(77) || IsFaultActive(78));

      /* Logic: '<S631>/Logical Operator1' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S631>/motohawk_fault_status2'
       *  S-Function (motohawk_sfun_fault_status): '<S631>/motohawk_fault_status3'
       */
      rtb_LogicalOperator1_b = (IsFaultSuspected(77) || IsFaultSuspected(78));

      /* S-Function Block: <S618>/motohawk_ain1 Resource: IATSensorPin */
      {
        extern NativeError_S IATSensorPin_AnalogInput_Get(uint16_T *adc,
          uint16_T *status);
        IATSensorPin_AnalogInput_Get
          (&BaseEngineController_LS_B.s618_motohawk_ain1, NULL);
      }

      /* DataTypeConversion: '<S631>/Data Type Conversion' */
      rtb_DataTypeConversion_k = (real_T)
        BaseEngineController_LS_B.s618_motohawk_ain1;

      /* S-Function Block: <S655>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (IATIdx_DataStore()) = TablePrelookup_real_T(rtb_DataTypeConversion_k,
          (IATIdxArr_DataStore()), 13, (IATIdx_DataStore()));
        rtb_motohawk_prelookup_a = (IATIdx_DataStore());
      }

      /* S-Function Block: <S655>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        BaseEngineController_LS_B.s655_motohawk_interpolation_1d =
          TableInterpolation1D_real_T(rtb_motohawk_prelookup_a, (real_T *)
          ((IATTbl_DataStore())), 13);
      }

      /* UnitDelay: '<S631>/Unit Delay' */
      rtb_UnitDelay_jh = BaseEngineController_LS_DWork.s631_UnitDelay_DSTATE;

      /* If: '<S631>/If' incorporates:
       *  Logic: '<S631>/Logical Operator5'
       *  Logic: '<S631>/Logical Operator6'
       */
      if ((!rtb_LogicalOperator4_h) && rtb_LogicalOperator1_b) {
        /* Outputs for IfAction SubSystem: '<S631>/If Action Subsystem' incorporates:
         *  ActionPort: '<S651>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay_jh,
          &BaseEngineController_LS_B.s631_Merge);

        /* End of Outputs for SubSystem: '<S631>/If Action Subsystem' */
      } else if (rtb_LogicalOperator4_h) {
        /* Outputs for IfAction SubSystem: '<S631>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S652>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem((IATDefault_DataStore()),
          &BaseEngineController_LS_B.s631_Merge);

        /* End of Outputs for SubSystem: '<S631>/If Action Subsystem1' */
      } else {
        /* Outputs for IfAction SubSystem: '<S631>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S653>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem
          (BaseEngineController_LS_B.s655_motohawk_interpolation_1d,
           &BaseEngineController_LS_B.s631_Merge);

        /* End of Outputs for SubSystem: '<S631>/If Action Subsystem2' */
      }

      /* End of If: '<S631>/If' */

      /* Sum: '<S656>/Sum1' incorporates:
       *  Constant: '<S656>/Constant'
       *  Product: '<S656>/Product'
       *  Product: '<S656>/Product1'
       *  Sum: '<S656>/Sum'
       *  UnitDelay: '<S656>/Unit Delay'
       */
      rtb_Sum1_hn = (1.0 - rtb_Product_ns) *
        BaseEngineController_LS_DWork.s656_UnitDelay_DSTATE +
        BaseEngineController_LS_B.s631_Merge * rtb_Product_ns;

      /* If: '<S654>/If' incorporates:
       *  Inport: '<S657>/In1'
       *  Inport: '<S658>/In1'
       *  S-Function (motohawk_sfun_calibration): '<S654>/new_value'
       *  S-Function (motohawk_sfun_calibration): '<S654>/override_enable'
       */
      if ((IAT_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S654>/NewValue' incorporates:
         *  ActionPort: '<S657>/Action Port'
         */
        BaseEngineController_LS_B.s654_Merge = (IAT_new_DataStore());

        /* End of Outputs for SubSystem: '<S654>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S654>/OldValue' incorporates:
         *  ActionPort: '<S658>/Action Port'
         */
        BaseEngineController_LS_B.s654_Merge = rtb_Sum1_hn;

        /* End of Outputs for SubSystem: '<S654>/OldValue' */
      }

      /* End of If: '<S654>/If' */

      /* Logic: '<S631>/Logical Operator2' incorporates:
       *  RelationalOperator: '<S631>/Relational Operator2'
       *  S-Function (motohawk_sfun_calibration): '<S631>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_data_read): '<S631>/motohawk_data_read1'
       */
      rtb_LogicalOperator2_p = ((MPRD_DataStore() && (rtb_DataTypeConversion_k >
                                  (IATMax_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S631>/motohawk_fault_def2' */

      /* Set Fault Suspected Status: IATRangeHigh */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(77, rtb_LogicalOperator2_p);
        UpdateFault(77);
      }

      /* Logic: '<S631>/Logical Operator3' incorporates:
       *  RelationalOperator: '<S631>/Relational Operator3'
       *  S-Function (motohawk_sfun_calibration): '<S631>/motohawk_calibration6'
       *  S-Function (motohawk_sfun_data_read): '<S631>/motohawk_data_read1'
       */
      rtb_LogicalOperator3_ht = ((MPRD_DataStore() && (rtb_DataTypeConversion_k <
                                   (IATMin_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S631>/motohawk_fault_def3' */

      /* Set Fault Suspected Status: IATRangeLow */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(78, rtb_LogicalOperator3_ht);
        UpdateFault(78);
      }

      /* S-Function Block: <S641>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s641_motohawk_delta_time_DWORK1, NULL);
        rtb_Product_ns = ((real_T) delta) * 0.000001;
      }

      /* Product: '<S641>/Product' incorporates:
       *  MinMax: '<S641>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S641>/motohawk_calibration'
       */
      rtb_Product_ns /= (rtb_Product_ns >= (EVAPFiltConst_DataStore())) ||
        rtIsNaN((EVAPFiltConst_DataStore())) ? rtb_Product_ns :
        (EVAPFiltConst_DataStore());

      /* Logic: '<S630>/Logical Operator4' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S630>/motohawk_fault_status1'
       *  S-Function (motohawk_sfun_fault_status): '<S630>/motohawk_fault_status4'
       */
      rtb_LogicalOperator4_h = (IsFaultActive(59) || IsFaultActive(60));

      /* Logic: '<S630>/Logical Operator1' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S630>/motohawk_fault_status2'
       *  S-Function (motohawk_sfun_fault_status): '<S630>/motohawk_fault_status3'
       */
      rtb_LogicalOperator1_b = (IsFaultSuspected(59) || IsFaultSuspected(60));

      /* S-Function Block: <S618>/motohawk_ain2 Resource: EVAPSensorPin */
      {
        extern NativeError_S EVAPSensorPin_AnalogInput_Get(uint16_T *adc,
          uint16_T *status);
        EVAPSensorPin_AnalogInput_Get
          (&BaseEngineController_LS_B.s618_motohawk_ain2, NULL);
      }

      /* DataTypeConversion: '<S630>/Data Type Conversion' */
      rtb_DataTypeConversion_k3 = (real_T)
        BaseEngineController_LS_B.s618_motohawk_ain2;

      /* S-Function Block: <S646>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (EVAPIdx_DataStore()) = TablePrelookup_real_T(rtb_DataTypeConversion_k3,
          (EVAPIdxArr_DataStore()), 13, (EVAPIdx_DataStore()));
        rtb_motohawk_prelookup_g = (EVAPIdx_DataStore());
      }

      /* S-Function Block: <S646>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        BaseEngineController_LS_B.s646_motohawk_interpolation_1d =
          TableInterpolation1D_real_T(rtb_motohawk_prelookup_g, (real_T *)
          ((EVAPTbl_DataStore())), 13);
      }

      /* UnitDelay: '<S630>/Unit Delay' */
      rtb_UnitDelay_i = BaseEngineController_LS_DWork.s630_UnitDelay_DSTATE;

      /* If: '<S630>/If' incorporates:
       *  Logic: '<S630>/Logical Operator5'
       *  Logic: '<S630>/Logical Operator6'
       */
      if ((!rtb_LogicalOperator4_h) && rtb_LogicalOperator1_b) {
        /* Outputs for IfAction SubSystem: '<S630>/If Action Subsystem' incorporates:
         *  ActionPort: '<S642>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay_i, &rtb_Merge_l);

        /* End of Outputs for SubSystem: '<S630>/If Action Subsystem' */
      } else if (rtb_LogicalOperator4_h) {
        /* Outputs for IfAction SubSystem: '<S630>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S643>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem((EVAPDefault_DataStore()),
          &rtb_Merge_l);

        /* End of Outputs for SubSystem: '<S630>/If Action Subsystem1' */
      } else {
        /* Outputs for IfAction SubSystem: '<S630>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S644>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem
          (BaseEngineController_LS_B.s646_motohawk_interpolation_1d,
           &rtb_Merge_l);

        /* End of Outputs for SubSystem: '<S630>/If Action Subsystem2' */
      }

      /* End of If: '<S630>/If' */

      /* Sum: '<S647>/Sum1' incorporates:
       *  Constant: '<S647>/Constant'
       *  Product: '<S647>/Product'
       *  Product: '<S647>/Product1'
       *  Sum: '<S647>/Sum'
       *  UnitDelay: '<S647>/Unit Delay'
       */
      rtb_Sum1_g = (1.0 - rtb_Product_ns) *
        BaseEngineController_LS_DWork.s647_UnitDelay_DSTATE + rtb_Merge_l *
        rtb_Product_ns;

      /* If: '<S645>/If' incorporates:
       *  Inport: '<S648>/In1'
       *  Inport: '<S649>/In1'
       *  S-Function (motohawk_sfun_calibration): '<S645>/new_value'
       *  S-Function (motohawk_sfun_calibration): '<S645>/override_enable'
       */
      if ((EVAP_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S645>/NewValue' incorporates:
         *  ActionPort: '<S648>/Action Port'
         */
        BaseEngineController_LS_B.s645_Merge = (EVAP_new_DataStore());

        /* End of Outputs for SubSystem: '<S645>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S645>/OldValue' incorporates:
         *  ActionPort: '<S649>/Action Port'
         */
        BaseEngineController_LS_B.s645_Merge = rtb_Sum1_g;

        /* End of Outputs for SubSystem: '<S645>/OldValue' */
      }

      /* End of If: '<S645>/If' */

      /* Logic: '<S630>/Logical Operator2' incorporates:
       *  RelationalOperator: '<S630>/Relational Operator2'
       *  S-Function (motohawk_sfun_calibration): '<S630>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_data_read): '<S630>/motohawk_data_read1'
       */
      rtb_LogicalOperator2_f = ((MPRD_DataStore() && (rtb_DataTypeConversion_k3 >
                                  (EVAPMax_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S630>/motohawk_fault_def2' */

      /* Set Fault Suspected Status: EVAPRangeHigh */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(59, rtb_LogicalOperator2_f);
        UpdateFault(59);
      }

      /* Logic: '<S630>/Logical Operator3' incorporates:
       *  RelationalOperator: '<S630>/Relational Operator3'
       *  S-Function (motohawk_sfun_calibration): '<S630>/motohawk_calibration6'
       *  S-Function (motohawk_sfun_data_read): '<S630>/motohawk_data_read1'
       */
      rtb_LogicalOperator3_j = ((MPRD_DataStore() && (rtb_DataTypeConversion_k3 <
                                  (EVAPMin_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S630>/motohawk_fault_def3' */

      /* Set Fault Suspected Status: EVAPRangeLow */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(60, rtb_LogicalOperator3_j);
        UpdateFault(60);
      }

      /* Update for UnitDelay: '<S629>/Unit Delay' */
      BaseEngineController_LS_DWork.s629_UnitDelay_DSTATE =
        BaseEngineController_LS_B.s629_Merge;

      /* Update for UnitDelay: '<S638>/Unit Delay' */
      BaseEngineController_LS_DWork.s638_UnitDelay_DSTATE = rtb_Sum1_hs;

      /* Update for UnitDelay: '<S631>/Unit Delay' */
      BaseEngineController_LS_DWork.s631_UnitDelay_DSTATE =
        BaseEngineController_LS_B.s631_Merge;

      /* Update for UnitDelay: '<S656>/Unit Delay' */
      BaseEngineController_LS_DWork.s656_UnitDelay_DSTATE = rtb_Sum1_hn;

      /* Update for UnitDelay: '<S630>/Unit Delay' */
      BaseEngineController_LS_DWork.s630_UnitDelay_DSTATE = rtb_Merge_l;

      /* Update for UnitDelay: '<S647>/Unit Delay' */
      BaseEngineController_LS_DWork.s647_UnitDelay_DSTATE = rtb_Sum1_g;
    }
  }
}
