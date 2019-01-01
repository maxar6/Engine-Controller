/*
 * Trigger_FGND_5XRTI_PERIODIC_8535p0002.c
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

void Trigger_FGND_5XRTI_PERIODIC_8535p0002(void)
{
  /* Named constants for Stateflow: '<S800>/ECUP Latch' */
#define BaseEngineController_A02_bak2_IN_PowerDown (1U)
#define BaseEngineController_A02_bak2_IN_PowerUp (2U)

  if (BaseEngineController_A02_bak2_DWork.s439_motohawk_trigger_DWORK1) {
    /* Output and update for function-call system: '<S439>/Temp Sensors' */
    {
      /* local block i/o variables */
      real_T rtb_DataTypeConversion_m;
      real_T rtb_UnitDelay_bb;
      real_T rtb_DataTypeConversion_m5;
      real_T rtb_UnitDelay_bv;
      real_T rtb_DataTypeConversion_c;
      real_T rtb_UnitDelay_dn;
      real_T rtb_Merge_n;
      real_T rtb_Product_c1;
      index_T rtb_motohawk_prelookup_h;
      index_T rtb_motohawk_prelookup_i;
      index_T rtb_motohawk_prelookup_k;
      boolean_T rtb_LogicalOperator2_p;
      boolean_T rtb_LogicalOperator3_g;
      boolean_T rtb_LogicalOperator2_m;
      boolean_T rtb_LogicalOperator3_n;
      boolean_T rtb_LogicalOperator2_o;
      boolean_T rtb_LogicalOperator3_i;
      boolean_T rtb_LogicalOperator4_f;
      boolean_T rtb_LogicalOperator1_j2;
      real_T rtb_Sum1_c;
      real_T rtb_Sum1_b;
      real_T rtb_Sum1_o2;

      /* S-Function Block: <S635>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_A02_bak2_DWork.s635_motohawk_delta_time_DWORK1,
           NULL);
        rtb_Product_c1 = ((real_T) delta) * 0.000001;
      }

      /* Product: '<S635>/Product' incorporates:
       *  MinMax: '<S635>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S635>/motohawk_calibration'
       */
      rtb_Product_c1 /= (rtb_Product_c1 >= (ECTFiltConst_DataStore())) ||
        rtIsNaN((ECTFiltConst_DataStore())) ? rtb_Product_c1 :
        (ECTFiltConst_DataStore());

      /* Logic: '<S632>/Logical Operator4' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S632>/motohawk_fault_status1'
       *  S-Function (motohawk_sfun_fault_status): '<S632>/motohawk_fault_status4'
       */
      rtb_LogicalOperator4_f = (IsFaultActive(15) || IsFaultActive(16));

      /* Logic: '<S632>/Logical Operator1' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S632>/motohawk_fault_status2'
       *  S-Function (motohawk_sfun_fault_status): '<S632>/motohawk_fault_status3'
       */
      rtb_LogicalOperator1_j2 = (IsFaultSuspected(15) || IsFaultSuspected(16));

      /* S-Function Block: <S622>/motohawk_ain Resource: ECTSensorPin */
      {
        extern NativeError_S ECTSensorPin_AnalogInput_Get(uint16_T *adc,
          uint16_T *status);
        ECTSensorPin_AnalogInput_Get
          (&BaseEngineController_A02_bak2_B.s622_motohawk_ain, NULL);
      }

      /* DataTypeConversion: '<S632>/Data Type Conversion' */
      rtb_DataTypeConversion_m = (real_T)
        BaseEngineController_A02_bak2_B.s622_motohawk_ain;

      /* S-Function Block: <S640>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (ECTIdx_DataStore()) = TablePrelookup_real_T(rtb_DataTypeConversion_m,
          (ECTIdxArr_DataStore()), 13, (ECTIdx_DataStore()));
        rtb_motohawk_prelookup_h = (ECTIdx_DataStore());
      }

      /* S-Function Block: <S640>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        BaseEngineController_A02_bak2_B.s640_motohawk_interpolation_1d =
          TableInterpolation1D_real_T(rtb_motohawk_prelookup_h, (real_T *)
          ((ECTTbl_DataStore())), 13);
      }

      /* UnitDelay: '<S632>/Unit Delay' */
      rtb_UnitDelay_bb =
        BaseEngineController_A02_bak2_DWork.s632_UnitDelay_DSTATE;

      /* If: '<S632>/If' incorporates:
       *  Logic: '<S632>/Logical Operator5'
       *  Logic: '<S632>/Logical Operator6'
       */
      if ((!rtb_LogicalOperator4_f) && rtb_LogicalOperator1_j2) {
        /* Outputs for IfAction SubSystem: '<S632>/If Action Subsystem' incorporates:
         *  ActionPort: '<S636>/Action Port'
         */
        BaseEngineController_A02_bak2_IfActionSubsystem(rtb_UnitDelay_bb,
          &BaseEngineController_A02_bak2_B.s632_Merge);

        /* End of Outputs for SubSystem: '<S632>/If Action Subsystem' */
      } else if (rtb_LogicalOperator4_f) {
        /* Outputs for IfAction SubSystem: '<S632>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S637>/Action Port'
         */
        BaseEngineController_A02_bak2_IfActionSubsystem((ECTDefault_DataStore()),
          &BaseEngineController_A02_bak2_B.s632_Merge);

        /* End of Outputs for SubSystem: '<S632>/If Action Subsystem1' */
      } else {
        /* Outputs for IfAction SubSystem: '<S632>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S638>/Action Port'
         */
        BaseEngineController_A02_bak2_IfActionSubsystem
          (BaseEngineController_A02_bak2_B.s640_motohawk_interpolation_1d,
           &BaseEngineController_A02_bak2_B.s632_Merge);

        /* End of Outputs for SubSystem: '<S632>/If Action Subsystem2' */
      }

      /* End of If: '<S632>/If' */

      /* Sum: '<S641>/Sum1' incorporates:
       *  Constant: '<S641>/Constant'
       *  Product: '<S641>/Product'
       *  Product: '<S641>/Product1'
       *  Sum: '<S641>/Sum'
       *  UnitDelay: '<S641>/Unit Delay'
       */
      rtb_Sum1_c = (1.0 - rtb_Product_c1) *
        BaseEngineController_A02_bak2_DWork.s641_UnitDelay_DSTATE +
        BaseEngineController_A02_bak2_B.s632_Merge * rtb_Product_c1;

      /* If: '<S639>/If' incorporates:
       *  Inport: '<S642>/In1'
       *  Inport: '<S643>/In1'
       *  S-Function (motohawk_sfun_calibration): '<S639>/new_value'
       *  S-Function (motohawk_sfun_calibration): '<S639>/override_enable'
       */
      if ((ECT_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S639>/NewValue' incorporates:
         *  ActionPort: '<S642>/Action Port'
         */
        BaseEngineController_A02_bak2_B.s639_Merge = (ECT_new_DataStore());

        /* End of Outputs for SubSystem: '<S639>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S639>/OldValue' incorporates:
         *  ActionPort: '<S643>/Action Port'
         */
        BaseEngineController_A02_bak2_B.s639_Merge = rtb_Sum1_c;

        /* End of Outputs for SubSystem: '<S639>/OldValue' */
      }

      /* End of If: '<S639>/If' */

      /* Logic: '<S632>/Logical Operator2' incorporates:
       *  RelationalOperator: '<S632>/Relational Operator2'
       *  S-Function (motohawk_sfun_calibration): '<S632>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_data_read): '<S632>/motohawk_data_read1'
       */
      rtb_LogicalOperator2_p = ((MPRD_DataStore() && (rtb_DataTypeConversion_m >
                                  (ECTMax_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S632>/motohawk_fault_def2' */

      /* Set Fault Suspected Status: ECTRangeHigh */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(15, rtb_LogicalOperator2_p);
        UpdateFault(15);
      }

      /* Logic: '<S632>/Logical Operator3' incorporates:
       *  RelationalOperator: '<S632>/Relational Operator3'
       *  S-Function (motohawk_sfun_calibration): '<S632>/motohawk_calibration6'
       *  S-Function (motohawk_sfun_data_read): '<S632>/motohawk_data_read1'
       */
      rtb_LogicalOperator3_g = ((MPRD_DataStore() && (rtb_DataTypeConversion_m <
                                  (ECTMin_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S632>/motohawk_fault_def3' */

      /* Set Fault Suspected Status: ECTRangeLow */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(16, rtb_LogicalOperator3_g);
        UpdateFault(16);
      }

      /* S-Function Block: <S653>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_A02_bak2_DWork.s653_motohawk_delta_time_DWORK1,
           NULL);
        rtb_Product_c1 = ((real_T) delta) * 0.000001;
      }

      /* Product: '<S653>/Product' incorporates:
       *  MinMax: '<S653>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S653>/motohawk_calibration'
       */
      rtb_Product_c1 /= (rtb_Product_c1 >= (IATFiltConst_DataStore())) ||
        rtIsNaN((IATFiltConst_DataStore())) ? rtb_Product_c1 :
        (IATFiltConst_DataStore());

      /* Logic: '<S634>/Logical Operator4' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S634>/motohawk_fault_status1'
       *  S-Function (motohawk_sfun_fault_status): '<S634>/motohawk_fault_status4'
       */
      rtb_LogicalOperator4_f = (IsFaultActive(49) || IsFaultActive(50));

      /* Logic: '<S634>/Logical Operator1' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S634>/motohawk_fault_status2'
       *  S-Function (motohawk_sfun_fault_status): '<S634>/motohawk_fault_status3'
       */
      rtb_LogicalOperator1_j2 = (IsFaultSuspected(49) || IsFaultSuspected(50));

      /* S-Function Block: <S622>/motohawk_ain1 Resource: IATSensorPin */
      {
        extern NativeError_S IATSensorPin_AnalogInput_Get(uint16_T *adc,
          uint16_T *status);
        IATSensorPin_AnalogInput_Get
          (&BaseEngineController_A02_bak2_B.s622_motohawk_ain1, NULL);
      }

      /* DataTypeConversion: '<S634>/Data Type Conversion' */
      rtb_DataTypeConversion_m5 = (real_T)
        BaseEngineController_A02_bak2_B.s622_motohawk_ain1;

      /* S-Function Block: <S658>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (IATIdx_DataStore()) = TablePrelookup_real_T(rtb_DataTypeConversion_m5,
          (IATIdxArr_DataStore()), 13, (IATIdx_DataStore()));
        rtb_motohawk_prelookup_i = (IATIdx_DataStore());
      }

      /* S-Function Block: <S658>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        BaseEngineController_A02_bak2_B.s658_motohawk_interpolation_1d =
          TableInterpolation1D_real_T(rtb_motohawk_prelookup_i, (real_T *)
          ((IATTbl_DataStore())), 13);
      }

      /* UnitDelay: '<S634>/Unit Delay' */
      rtb_UnitDelay_bv =
        BaseEngineController_A02_bak2_DWork.s634_UnitDelay_DSTATE;

      /* If: '<S634>/If' incorporates:
       *  Logic: '<S634>/Logical Operator5'
       *  Logic: '<S634>/Logical Operator6'
       */
      if ((!rtb_LogicalOperator4_f) && rtb_LogicalOperator1_j2) {
        /* Outputs for IfAction SubSystem: '<S634>/If Action Subsystem' incorporates:
         *  ActionPort: '<S654>/Action Port'
         */
        BaseEngineController_A02_bak2_IfActionSubsystem(rtb_UnitDelay_bv,
          &BaseEngineController_A02_bak2_B.s634_Merge);

        /* End of Outputs for SubSystem: '<S634>/If Action Subsystem' */
      } else if (rtb_LogicalOperator4_f) {
        /* Outputs for IfAction SubSystem: '<S634>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S655>/Action Port'
         */
        BaseEngineController_A02_bak2_IfActionSubsystem((IATDefault_DataStore()),
          &BaseEngineController_A02_bak2_B.s634_Merge);

        /* End of Outputs for SubSystem: '<S634>/If Action Subsystem1' */
      } else {
        /* Outputs for IfAction SubSystem: '<S634>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S656>/Action Port'
         */
        BaseEngineController_A02_bak2_IfActionSubsystem
          (BaseEngineController_A02_bak2_B.s658_motohawk_interpolation_1d,
           &BaseEngineController_A02_bak2_B.s634_Merge);

        /* End of Outputs for SubSystem: '<S634>/If Action Subsystem2' */
      }

      /* End of If: '<S634>/If' */

      /* Sum: '<S659>/Sum1' incorporates:
       *  Constant: '<S659>/Constant'
       *  Product: '<S659>/Product'
       *  Product: '<S659>/Product1'
       *  Sum: '<S659>/Sum'
       *  UnitDelay: '<S659>/Unit Delay'
       */
      rtb_Sum1_b = (1.0 - rtb_Product_c1) *
        BaseEngineController_A02_bak2_DWork.s659_UnitDelay_DSTATE +
        BaseEngineController_A02_bak2_B.s634_Merge * rtb_Product_c1;

      /* If: '<S657>/If' incorporates:
       *  Inport: '<S660>/In1'
       *  Inport: '<S661>/In1'
       *  S-Function (motohawk_sfun_calibration): '<S657>/new_value'
       *  S-Function (motohawk_sfun_calibration): '<S657>/override_enable'
       */
      if ((IAT_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S657>/NewValue' incorporates:
         *  ActionPort: '<S660>/Action Port'
         */
        BaseEngineController_A02_bak2_B.s657_Merge = (IAT_new_DataStore());

        /* End of Outputs for SubSystem: '<S657>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S657>/OldValue' incorporates:
         *  ActionPort: '<S661>/Action Port'
         */
        BaseEngineController_A02_bak2_B.s657_Merge = rtb_Sum1_b;

        /* End of Outputs for SubSystem: '<S657>/OldValue' */
      }

      /* End of If: '<S657>/If' */

      /* Logic: '<S634>/Logical Operator2' incorporates:
       *  RelationalOperator: '<S634>/Relational Operator2'
       *  S-Function (motohawk_sfun_calibration): '<S634>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_data_read): '<S634>/motohawk_data_read1'
       */
      rtb_LogicalOperator2_m = ((MPRD_DataStore() && (rtb_DataTypeConversion_m5 >
                                  (IATMax_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S634>/motohawk_fault_def2' */

      /* Set Fault Suspected Status: IATRangeHigh */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(49, rtb_LogicalOperator2_m);
        UpdateFault(49);
      }

      /* Logic: '<S634>/Logical Operator3' incorporates:
       *  RelationalOperator: '<S634>/Relational Operator3'
       *  S-Function (motohawk_sfun_calibration): '<S634>/motohawk_calibration6'
       *  S-Function (motohawk_sfun_data_read): '<S634>/motohawk_data_read1'
       */
      rtb_LogicalOperator3_n = ((MPRD_DataStore() && (rtb_DataTypeConversion_m5 <
                                  (IATMin_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S634>/motohawk_fault_def3' */

      /* Set Fault Suspected Status: IATRangeLow */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(50, rtb_LogicalOperator3_n);
        UpdateFault(50);
      }

      /* S-Function Block: <S644>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_A02_bak2_DWork.s644_motohawk_delta_time_DWORK1,
           NULL);
        rtb_Product_c1 = ((real_T) delta) * 0.000001;
      }

      /* Product: '<S644>/Product' incorporates:
       *  MinMax: '<S644>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S644>/motohawk_calibration'
       */
      rtb_Product_c1 /= (rtb_Product_c1 >= (EVAPFiltConst_DataStore())) ||
        rtIsNaN((EVAPFiltConst_DataStore())) ? rtb_Product_c1 :
        (EVAPFiltConst_DataStore());

      /* Logic: '<S633>/Logical Operator4' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S633>/motohawk_fault_status1'
       *  S-Function (motohawk_sfun_fault_status): '<S633>/motohawk_fault_status4'
       */
      rtb_LogicalOperator4_f = (IsFaultActive(37) || IsFaultActive(38));

      /* Logic: '<S633>/Logical Operator1' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S633>/motohawk_fault_status2'
       *  S-Function (motohawk_sfun_fault_status): '<S633>/motohawk_fault_status3'
       */
      rtb_LogicalOperator1_j2 = (IsFaultSuspected(37) || IsFaultSuspected(38));

      /* S-Function Block: <S622>/motohawk_ain2 Resource: EVAPSensorPin */
      {
        extern NativeError_S EVAPSensorPin_AnalogInput_Get(uint16_T *adc,
          uint16_T *status);
        EVAPSensorPin_AnalogInput_Get
          (&BaseEngineController_A02_bak2_B.s622_motohawk_ain2, NULL);
      }

      /* DataTypeConversion: '<S633>/Data Type Conversion' */
      rtb_DataTypeConversion_c = (real_T)
        BaseEngineController_A02_bak2_B.s622_motohawk_ain2;

      /* S-Function Block: <S649>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (EVAPIdx_DataStore()) = TablePrelookup_real_T(rtb_DataTypeConversion_c,
          (EVAPIdxArr_DataStore()), 13, (EVAPIdx_DataStore()));
        rtb_motohawk_prelookup_k = (EVAPIdx_DataStore());
      }

      /* S-Function Block: <S649>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        BaseEngineController_A02_bak2_B.s649_motohawk_interpolation_1d =
          TableInterpolation1D_real_T(rtb_motohawk_prelookup_k, (real_T *)
          ((EVAPTbl_DataStore())), 13);
      }

      /* UnitDelay: '<S633>/Unit Delay' */
      rtb_UnitDelay_dn =
        BaseEngineController_A02_bak2_DWork.s633_UnitDelay_DSTATE;

      /* If: '<S633>/If' incorporates:
       *  Logic: '<S633>/Logical Operator5'
       *  Logic: '<S633>/Logical Operator6'
       */
      if ((!rtb_LogicalOperator4_f) && rtb_LogicalOperator1_j2) {
        /* Outputs for IfAction SubSystem: '<S633>/If Action Subsystem' incorporates:
         *  ActionPort: '<S645>/Action Port'
         */
        BaseEngineController_A02_bak2_IfActionSubsystem(rtb_UnitDelay_dn,
          &rtb_Merge_n);

        /* End of Outputs for SubSystem: '<S633>/If Action Subsystem' */
      } else if (rtb_LogicalOperator4_f) {
        /* Outputs for IfAction SubSystem: '<S633>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S646>/Action Port'
         */
        BaseEngineController_A02_bak2_IfActionSubsystem((EVAPDefault_DataStore()),
          &rtb_Merge_n);

        /* End of Outputs for SubSystem: '<S633>/If Action Subsystem1' */
      } else {
        /* Outputs for IfAction SubSystem: '<S633>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S647>/Action Port'
         */
        BaseEngineController_A02_bak2_IfActionSubsystem
          (BaseEngineController_A02_bak2_B.s649_motohawk_interpolation_1d,
           &rtb_Merge_n);

        /* End of Outputs for SubSystem: '<S633>/If Action Subsystem2' */
      }

      /* End of If: '<S633>/If' */

      /* Sum: '<S650>/Sum1' incorporates:
       *  Constant: '<S650>/Constant'
       *  Product: '<S650>/Product'
       *  Product: '<S650>/Product1'
       *  Sum: '<S650>/Sum'
       *  UnitDelay: '<S650>/Unit Delay'
       */
      rtb_Sum1_o2 = (1.0 - rtb_Product_c1) *
        BaseEngineController_A02_bak2_DWork.s650_UnitDelay_DSTATE + rtb_Merge_n *
        rtb_Product_c1;

      /* If: '<S648>/If' incorporates:
       *  Inport: '<S651>/In1'
       *  Inport: '<S652>/In1'
       *  S-Function (motohawk_sfun_calibration): '<S648>/new_value'
       *  S-Function (motohawk_sfun_calibration): '<S648>/override_enable'
       */
      if ((EVAP_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S648>/NewValue' incorporates:
         *  ActionPort: '<S651>/Action Port'
         */
        BaseEngineController_A02_bak2_B.s648_Merge = (EVAP_new_DataStore());

        /* End of Outputs for SubSystem: '<S648>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S648>/OldValue' incorporates:
         *  ActionPort: '<S652>/Action Port'
         */
        BaseEngineController_A02_bak2_B.s648_Merge = rtb_Sum1_o2;

        /* End of Outputs for SubSystem: '<S648>/OldValue' */
      }

      /* End of If: '<S648>/If' */

      /* Logic: '<S633>/Logical Operator2' incorporates:
       *  RelationalOperator: '<S633>/Relational Operator2'
       *  S-Function (motohawk_sfun_calibration): '<S633>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_data_read): '<S633>/motohawk_data_read1'
       */
      rtb_LogicalOperator2_o = ((MPRD_DataStore() && (rtb_DataTypeConversion_c >
                                  (EVAPMax_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S633>/motohawk_fault_def2' */

      /* Set Fault Suspected Status: EVAPRangeHigh */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(37, rtb_LogicalOperator2_o);
        UpdateFault(37);
      }

      /* Logic: '<S633>/Logical Operator3' incorporates:
       *  RelationalOperator: '<S633>/Relational Operator3'
       *  S-Function (motohawk_sfun_calibration): '<S633>/motohawk_calibration6'
       *  S-Function (motohawk_sfun_data_read): '<S633>/motohawk_data_read1'
       */
      rtb_LogicalOperator3_i = ((MPRD_DataStore() && (rtb_DataTypeConversion_c <
                                  (EVAPMin_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S633>/motohawk_fault_def3' */

      /* Set Fault Suspected Status: EVAPRangeLow */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(38, rtb_LogicalOperator3_i);
        UpdateFault(38);
      }

      /* Update for UnitDelay: '<S632>/Unit Delay' */
      BaseEngineController_A02_bak2_DWork.s632_UnitDelay_DSTATE =
        BaseEngineController_A02_bak2_B.s632_Merge;

      /* Update for UnitDelay: '<S641>/Unit Delay' */
      BaseEngineController_A02_bak2_DWork.s641_UnitDelay_DSTATE = rtb_Sum1_c;

      /* Update for UnitDelay: '<S634>/Unit Delay' */
      BaseEngineController_A02_bak2_DWork.s634_UnitDelay_DSTATE =
        BaseEngineController_A02_bak2_B.s634_Merge;

      /* Update for UnitDelay: '<S659>/Unit Delay' */
      BaseEngineController_A02_bak2_DWork.s659_UnitDelay_DSTATE = rtb_Sum1_b;

      /* Update for UnitDelay: '<S633>/Unit Delay' */
      BaseEngineController_A02_bak2_DWork.s633_UnitDelay_DSTATE = rtb_Merge_n;

      /* Update for UnitDelay: '<S650>/Unit Delay' */
      BaseEngineController_A02_bak2_DWork.s650_UnitDelay_DSTATE = rtb_Sum1_o2;
    }
  }
}
