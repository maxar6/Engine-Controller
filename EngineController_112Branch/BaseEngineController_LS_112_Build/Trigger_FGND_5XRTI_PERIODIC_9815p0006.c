/*
 * Trigger_FGND_5XRTI_PERIODIC_9815p0006.c
 *
 * Code generation for model "BaseEngineController_LS_112.mdl".
 *
 * Model version              : 1.2194
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Tue Nov 22 13:56:25 2022
 *
 * Target selection: motohawk_motocoder_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_LS_112.h"
#include "BaseEngineController_LS_112_private.h"

void Trigger_FGND_5XRTI_PERIODIC_9815p0006(void)
{
  /* Named constants for Stateflow: '<S930>/ECUP Latch' */
#define BaseEngineController_LS_112_IN_PowerDown (1U)
#define BaseEngineController_LS_112_IN_PowerUp (2U)

  {
    extern void Timer_FreeRunningCounter_GetTime(uint32_T *lower32Bits, uint32_T
      *upper32Bits);
    uint32_T lower32Bits;
    uint32_T upper32Bits;
    Timer_FreeRunningCounter_GetTime(&lower32Bits, &upper32Bits);
    BaseEngineController_LS_112_M->Timing.clockTick0 = lower32Bits;
    BaseEngineController_LS_112_M->Timing.clockTickH0 = upper32Bits;
  }

  if (BaseEngineController_LS_112_DWork.s483_motohawk_trigger_DWORK1) {
    /* Output and update for function-call system: '<S483>/Temp Sensors' */
    {
      /* local block i/o variables */
      real_T rtb_DataTypeConversion_g5;
      real_T rtb_UnitDelay_ci;
      real_T rtb_DataTypeConversion_c;
      real_T rtb_UnitDelay_nv;
      real_T rtb_DataTypeConversion_jo;
      real_T rtb_UnitDelay_gx;
      real_T rtb_Merge_o;
      real_T rtb_DataTypeConversion_n;
      real_T rtb_UnitDelay_bqd;
      real_T rtb_Merge_p;
      real_T rtb_Product_l;
      index_T rtb_motohawk_prelookup_i;
      index_T rtb_motohawk_prelookup_p;
      index_T rtb_motohawk_prelookup_n;
      index_T rtb_motohawk_prelookup_m;
      boolean_T rtb_LogicalOperator2_k;
      boolean_T rtb_LogicalOperator3_jq;
      boolean_T rtb_LogicalOperator2_b;
      boolean_T rtb_LogicalOperator3_m;
      boolean_T rtb_LogicalOperator2_f;
      boolean_T rtb_LogicalOperator3_n;
      boolean_T rtb_LogicalOperator2_lm;
      boolean_T rtb_LogicalOperator3_d;
      boolean_T rtb_LogicalOperator4_d;
      boolean_T rtb_LogicalOperator1_n;
      real_T rtb_Sum1_h;
      real_T rtb_Sum1_n;
      real_T rtb_Sum1_g;
      real_T rtb_Sum1_a;

      /* S-Function Block: <S661>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_112_DWork.s661_motohawk_delta_time_DWORK1,
           NULL);
        rtb_Product_l = ((real_T) delta) * 0.000001;
      }

      /* Product: '<S661>/Product' incorporates:
       *  MinMax: '<S661>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S661>/motohawk_calibration'
       */
      rtb_Product_l /= (rtb_Product_l >= (ECTFiltConst_DataStore())) || rtIsNaN
        ((ECTFiltConst_DataStore())) ? rtb_Product_l : (ECTFiltConst_DataStore());

      /* Logic: '<S649>/Logical Operator4' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S649>/motohawk_fault_status1'
       *  S-Function (motohawk_sfun_fault_status): '<S649>/motohawk_fault_status4'
       */
      rtb_LogicalOperator4_d = (IsFaultActive(43) || IsFaultActive(44));

      /* Logic: '<S649>/Logical Operator1' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S649>/motohawk_fault_status2'
       *  S-Function (motohawk_sfun_fault_status): '<S649>/motohawk_fault_status3'
       */
      rtb_LogicalOperator1_n = (IsFaultSuspected(43) || IsFaultSuspected(44));

      /* S-Function Block: <S637>/motohawk_ain Resource: AN7 */
      BaseEngineController_LS_112_B.s637_motohawk_ain = AN7_AnalogInput_Get();

      /* DataTypeConversion: '<S649>/Data Type Conversion' */
      rtb_DataTypeConversion_g5 = (real_T)
        BaseEngineController_LS_112_B.s637_motohawk_ain;

      /* S-Function Block: <S666>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (ECTIdx_DataStore()) = TablePrelookup_real_T(rtb_DataTypeConversion_g5,
          (ECTIdxArr_DataStore()), 13, (ECTIdx_DataStore()));
        rtb_motohawk_prelookup_i = (ECTIdx_DataStore());
      }

      /* S-Function Block: <S666>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        BaseEngineController_LS_112_B.s666_motohawk_interpolation_1d =
          TableInterpolation1D_real_T(rtb_motohawk_prelookup_i, (real_T *)
          ((ECTTbl_DataStore())), 13);
      }

      /* UnitDelay: '<S649>/Unit Delay' */
      rtb_UnitDelay_ci = BaseEngineController_LS_112_DWork.s649_UnitDelay_DSTATE;

      /* If: '<S649>/If' incorporates:
       *  Logic: '<S649>/Logical Operator5'
       *  Logic: '<S649>/Logical Operator6'
       */
      if ((!rtb_LogicalOperator4_d) && rtb_LogicalOperator1_n) {
        /* Outputs for IfAction SubSystem: '<S649>/If Action Subsystem' incorporates:
         *  ActionPort: '<S662>/Action Port'
         */
        BaseEngineController_LS_112_IfActionSubsystem(rtb_UnitDelay_ci,
          &BaseEngineController_LS_112_B.s649_Merge);

        /* End of Outputs for SubSystem: '<S649>/If Action Subsystem' */
      } else if (rtb_LogicalOperator4_d) {
        /* Outputs for IfAction SubSystem: '<S649>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S663>/Action Port'
         */
        BaseEngineController_LS_112_IfActionSubsystem((ECTDefault_DataStore()),
          &BaseEngineController_LS_112_B.s649_Merge);

        /* End of Outputs for SubSystem: '<S649>/If Action Subsystem1' */
      } else {
        /* Outputs for IfAction SubSystem: '<S649>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S664>/Action Port'
         */
        BaseEngineController_LS_112_IfActionSubsystem
          (BaseEngineController_LS_112_B.s666_motohawk_interpolation_1d,
           &BaseEngineController_LS_112_B.s649_Merge);

        /* End of Outputs for SubSystem: '<S649>/If Action Subsystem2' */
      }

      /* End of If: '<S649>/If' */

      /* Sum: '<S667>/Sum1' incorporates:
       *  Constant: '<S667>/Constant'
       *  Product: '<S667>/Product'
       *  Product: '<S667>/Product1'
       *  Sum: '<S667>/Sum'
       *  UnitDelay: '<S667>/Unit Delay'
       */
      rtb_Sum1_h = (1.0 - rtb_Product_l) *
        BaseEngineController_LS_112_DWork.s667_UnitDelay_DSTATE +
        BaseEngineController_LS_112_B.s649_Merge * rtb_Product_l;

      /* If: '<S665>/If' incorporates:
       *  Inport: '<S668>/In1'
       *  Inport: '<S669>/In1'
       *  S-Function (motohawk_sfun_calibration): '<S665>/new_value'
       *  S-Function (motohawk_sfun_calibration): '<S665>/override_enable'
       */
      if ((ECT_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S665>/NewValue' incorporates:
         *  ActionPort: '<S668>/Action Port'
         */
        BaseEngineController_LS_112_B.s665_Merge = (ECT_new_DataStore());

        /* End of Outputs for SubSystem: '<S665>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S665>/OldValue' incorporates:
         *  ActionPort: '<S669>/Action Port'
         */
        BaseEngineController_LS_112_B.s665_Merge = rtb_Sum1_h;

        /* End of Outputs for SubSystem: '<S665>/OldValue' */
      }

      /* End of If: '<S665>/If' */

      /* Logic: '<S649>/Logical Operator2' incorporates:
       *  RelationalOperator: '<S649>/Relational Operator2'
       *  S-Function (motohawk_sfun_calibration): '<S649>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_data_read): '<S649>/motohawk_data_read1'
       */
      rtb_LogicalOperator2_k = ((MPRD_DataStore() && (rtb_DataTypeConversion_g5 >
                                  (ECTMax_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S649>/motohawk_fault_def2' */

      /* Set Fault Suspected Status: ECTRangeHigh */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(43, rtb_LogicalOperator2_k);
        UpdateFault(43);
      }

      /* Logic: '<S649>/Logical Operator3' incorporates:
       *  RelationalOperator: '<S649>/Relational Operator3'
       *  S-Function (motohawk_sfun_calibration): '<S649>/motohawk_calibration6'
       *  S-Function (motohawk_sfun_data_read): '<S649>/motohawk_data_read1'
       */
      rtb_LogicalOperator3_jq = ((MPRD_DataStore() && (rtb_DataTypeConversion_g5
        < (ECTMin_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S649>/motohawk_fault_def3' */

      /* Set Fault Suspected Status: ECTRangeLow */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(44, rtb_LogicalOperator3_jq);
        UpdateFault(44);
      }

      /* S-Function Block: <S679>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_112_DWork.s679_motohawk_delta_time_DWORK1,
           NULL);
        rtb_Product_l = ((real_T) delta) * 0.000001;
      }

      /* Product: '<S679>/Product' incorporates:
       *  MinMax: '<S679>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S679>/motohawk_calibration'
       */
      rtb_Product_l /= (rtb_Product_l >= (IATFiltConst_DataStore())) || rtIsNaN
        ((IATFiltConst_DataStore())) ? rtb_Product_l : (IATFiltConst_DataStore());

      /* Logic: '<S651>/Logical Operator4' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S651>/motohawk_fault_status1'
       *  S-Function (motohawk_sfun_fault_status): '<S651>/motohawk_fault_status4'
       */
      rtb_LogicalOperator4_d = (IsFaultActive(84) || IsFaultActive(85));

      /* Logic: '<S651>/Logical Operator1' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S651>/motohawk_fault_status2'
       *  S-Function (motohawk_sfun_fault_status): '<S651>/motohawk_fault_status3'
       */
      rtb_LogicalOperator1_n = (IsFaultSuspected(84) || IsFaultSuspected(85));

      /* S-Function Block: <S637>/motohawk_ain1 Resource: AN8 */
      BaseEngineController_LS_112_B.s637_motohawk_ain1 = AN8_AnalogInput_Get();

      /* DataTypeConversion: '<S651>/Data Type Conversion' */
      rtb_DataTypeConversion_c = (real_T)
        BaseEngineController_LS_112_B.s637_motohawk_ain1;

      /* S-Function Block: <S684>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (IATIdx_DataStore()) = TablePrelookup_real_T(rtb_DataTypeConversion_c,
          (IATIdxArr_DataStore()), 13, (IATIdx_DataStore()));
        rtb_motohawk_prelookup_p = (IATIdx_DataStore());
      }

      /* S-Function Block: <S684>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        BaseEngineController_LS_112_B.s684_motohawk_interpolation_1d =
          TableInterpolation1D_real_T(rtb_motohawk_prelookup_p, (real_T *)
          ((IATTbl_DataStore())), 13);
      }

      /* UnitDelay: '<S651>/Unit Delay' */
      rtb_UnitDelay_nv = BaseEngineController_LS_112_DWork.s651_UnitDelay_DSTATE;

      /* If: '<S651>/If' incorporates:
       *  Logic: '<S651>/Logical Operator5'
       *  Logic: '<S651>/Logical Operator6'
       */
      if ((!rtb_LogicalOperator4_d) && rtb_LogicalOperator1_n) {
        /* Outputs for IfAction SubSystem: '<S651>/If Action Subsystem' incorporates:
         *  ActionPort: '<S680>/Action Port'
         */
        BaseEngineController_LS_112_IfActionSubsystem(rtb_UnitDelay_nv,
          &BaseEngineController_LS_112_B.s651_Merge);

        /* End of Outputs for SubSystem: '<S651>/If Action Subsystem' */
      } else if (rtb_LogicalOperator4_d) {
        /* Outputs for IfAction SubSystem: '<S651>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S681>/Action Port'
         */
        BaseEngineController_LS_112_IfActionSubsystem((IATDefault_DataStore()),
          &BaseEngineController_LS_112_B.s651_Merge);

        /* End of Outputs for SubSystem: '<S651>/If Action Subsystem1' */
      } else {
        /* Outputs for IfAction SubSystem: '<S651>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S682>/Action Port'
         */
        BaseEngineController_LS_112_IfActionSubsystem
          (BaseEngineController_LS_112_B.s684_motohawk_interpolation_1d,
           &BaseEngineController_LS_112_B.s651_Merge);

        /* End of Outputs for SubSystem: '<S651>/If Action Subsystem2' */
      }

      /* End of If: '<S651>/If' */

      /* Sum: '<S685>/Sum1' incorporates:
       *  Constant: '<S685>/Constant'
       *  Product: '<S685>/Product'
       *  Product: '<S685>/Product1'
       *  Sum: '<S685>/Sum'
       *  UnitDelay: '<S685>/Unit Delay'
       */
      rtb_Sum1_n = (1.0 - rtb_Product_l) *
        BaseEngineController_LS_112_DWork.s685_UnitDelay_DSTATE +
        BaseEngineController_LS_112_B.s651_Merge * rtb_Product_l;

      /* If: '<S683>/If' incorporates:
       *  Inport: '<S686>/In1'
       *  Inport: '<S687>/In1'
       *  S-Function (motohawk_sfun_calibration): '<S683>/new_value'
       *  S-Function (motohawk_sfun_calibration): '<S683>/override_enable'
       */
      if ((IAT_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S683>/NewValue' incorporates:
         *  ActionPort: '<S686>/Action Port'
         */
        BaseEngineController_LS_112_B.s683_Merge = (IAT_new_DataStore());

        /* End of Outputs for SubSystem: '<S683>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S683>/OldValue' incorporates:
         *  ActionPort: '<S687>/Action Port'
         */
        BaseEngineController_LS_112_B.s683_Merge = rtb_Sum1_n;

        /* End of Outputs for SubSystem: '<S683>/OldValue' */
      }

      /* End of If: '<S683>/If' */

      /* Logic: '<S651>/Logical Operator2' incorporates:
       *  RelationalOperator: '<S651>/Relational Operator2'
       *  S-Function (motohawk_sfun_calibration): '<S651>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_data_read): '<S651>/motohawk_data_read1'
       */
      rtb_LogicalOperator2_b = ((MPRD_DataStore() && (rtb_DataTypeConversion_c >
                                  (IATMax_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S651>/motohawk_fault_def2' */

      /* Set Fault Suspected Status: IATRangeHigh */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(84, rtb_LogicalOperator2_b);
        UpdateFault(84);
      }

      /* Logic: '<S651>/Logical Operator3' incorporates:
       *  RelationalOperator: '<S651>/Relational Operator3'
       *  S-Function (motohawk_sfun_calibration): '<S651>/motohawk_calibration6'
       *  S-Function (motohawk_sfun_data_read): '<S651>/motohawk_data_read1'
       */
      rtb_LogicalOperator3_m = ((MPRD_DataStore() && (rtb_DataTypeConversion_c <
                                  (IATMin_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S651>/motohawk_fault_def3' */

      /* Set Fault Suspected Status: IATRangeLow */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(85, rtb_LogicalOperator3_m);
        UpdateFault(85);
      }

      /* S-Function Block: <S670>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_112_DWork.s670_motohawk_delta_time_DWORK1,
           NULL);
        rtb_Product_l = ((real_T) delta) * 0.000001;
      }

      /* Product: '<S670>/Product' incorporates:
       *  MinMax: '<S670>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S670>/motohawk_calibration'
       */
      rtb_Product_l /= (rtb_Product_l >= (EVAPFiltConst_DataStore())) || rtIsNaN
        ((EVAPFiltConst_DataStore())) ? rtb_Product_l : (EVAPFiltConst_DataStore
        ());

      /* Logic: '<S650>/Logical Operator4' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S650>/motohawk_fault_status1'
       *  S-Function (motohawk_sfun_fault_status): '<S650>/motohawk_fault_status4'
       */
      rtb_LogicalOperator4_d = (IsFaultActive(65) || IsFaultActive(66));

      /* Logic: '<S650>/Logical Operator1' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S650>/motohawk_fault_status2'
       *  S-Function (motohawk_sfun_fault_status): '<S650>/motohawk_fault_status3'
       */
      rtb_LogicalOperator1_n = (IsFaultSuspected(65) || IsFaultSuspected(66));

      /* S-Function Block: <S637>/motohawk_ain2 Resource: AN9 */
      BaseEngineController_LS_112_B.s637_motohawk_ain2 = AN9_AnalogInput_Get();

      /* DataTypeConversion: '<S650>/Data Type Conversion' */
      rtb_DataTypeConversion_jo = (real_T)
        BaseEngineController_LS_112_B.s637_motohawk_ain2;

      /* S-Function Block: <S675>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (EVAPIdx_DataStore()) = TablePrelookup_real_T(rtb_DataTypeConversion_jo,
          (EVAPIdxArr_DataStore()), 13, (EVAPIdx_DataStore()));
        rtb_motohawk_prelookup_n = (EVAPIdx_DataStore());
      }

      /* S-Function Block: <S675>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        BaseEngineController_LS_112_B.s675_motohawk_interpolation_1d =
          TableInterpolation1D_real_T(rtb_motohawk_prelookup_n, (real_T *)
          ((EVAPTbl_DataStore())), 13);
      }

      /* UnitDelay: '<S650>/Unit Delay' */
      rtb_UnitDelay_gx = BaseEngineController_LS_112_DWork.s650_UnitDelay_DSTATE;

      /* If: '<S650>/If' incorporates:
       *  Logic: '<S650>/Logical Operator5'
       *  Logic: '<S650>/Logical Operator6'
       */
      if ((!rtb_LogicalOperator4_d) && rtb_LogicalOperator1_n) {
        /* Outputs for IfAction SubSystem: '<S650>/If Action Subsystem' incorporates:
         *  ActionPort: '<S671>/Action Port'
         */
        BaseEngineController_LS_112_IfActionSubsystem(rtb_UnitDelay_gx,
          &rtb_Merge_o);

        /* End of Outputs for SubSystem: '<S650>/If Action Subsystem' */
      } else if (rtb_LogicalOperator4_d) {
        /* Outputs for IfAction SubSystem: '<S650>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S672>/Action Port'
         */
        BaseEngineController_LS_112_IfActionSubsystem((EVAPDefault_DataStore()),
          &rtb_Merge_o);

        /* End of Outputs for SubSystem: '<S650>/If Action Subsystem1' */
      } else {
        /* Outputs for IfAction SubSystem: '<S650>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S673>/Action Port'
         */
        BaseEngineController_LS_112_IfActionSubsystem
          (BaseEngineController_LS_112_B.s675_motohawk_interpolation_1d,
           &rtb_Merge_o);

        /* End of Outputs for SubSystem: '<S650>/If Action Subsystem2' */
      }

      /* End of If: '<S650>/If' */

      /* Sum: '<S676>/Sum1' incorporates:
       *  Constant: '<S676>/Constant'
       *  Product: '<S676>/Product'
       *  Product: '<S676>/Product1'
       *  Sum: '<S676>/Sum'
       *  UnitDelay: '<S676>/Unit Delay'
       */
      rtb_Sum1_g = (1.0 - rtb_Product_l) *
        BaseEngineController_LS_112_DWork.s676_UnitDelay_DSTATE + rtb_Merge_o *
        rtb_Product_l;

      /* If: '<S674>/If' incorporates:
       *  Inport: '<S677>/In1'
       *  Inport: '<S678>/In1'
       *  S-Function (motohawk_sfun_calibration): '<S674>/new_value'
       *  S-Function (motohawk_sfun_calibration): '<S674>/override_enable'
       */
      if ((EVAP_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S674>/NewValue' incorporates:
         *  ActionPort: '<S677>/Action Port'
         */
        BaseEngineController_LS_112_B.s674_Merge = (EVAP_new_DataStore());

        /* End of Outputs for SubSystem: '<S674>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S674>/OldValue' incorporates:
         *  ActionPort: '<S678>/Action Port'
         */
        BaseEngineController_LS_112_B.s674_Merge = rtb_Sum1_g;

        /* End of Outputs for SubSystem: '<S674>/OldValue' */
      }

      /* End of If: '<S674>/If' */

      /* Logic: '<S650>/Logical Operator2' incorporates:
       *  RelationalOperator: '<S650>/Relational Operator2'
       *  S-Function (motohawk_sfun_calibration): '<S650>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_data_read): '<S650>/motohawk_data_read1'
       */
      rtb_LogicalOperator2_f = ((MPRD_DataStore() && (rtb_DataTypeConversion_jo >
                                  (EVAPMax_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S650>/motohawk_fault_def2' */

      /* Set Fault Suspected Status: EVAPRangeHigh */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(65, rtb_LogicalOperator2_f);
        UpdateFault(65);
      }

      /* Logic: '<S650>/Logical Operator3' incorporates:
       *  RelationalOperator: '<S650>/Relational Operator3'
       *  S-Function (motohawk_sfun_calibration): '<S650>/motohawk_calibration6'
       *  S-Function (motohawk_sfun_data_read): '<S650>/motohawk_data_read1'
       */
      rtb_LogicalOperator3_n = ((MPRD_DataStore() && (rtb_DataTypeConversion_jo <
                                  (EVAPMin_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S650>/motohawk_fault_def3' */

      /* Set Fault Suspected Status: EVAPRangeLow */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(66, rtb_LogicalOperator3_n);
        UpdateFault(66);
      }

      /* S-Function Block: <S652>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_112_DWork.s652_motohawk_delta_time_DWORK1,
           NULL);
        rtb_Product_l = ((real_T) delta) * 0.000001;
      }

      /* Product: '<S652>/Product' incorporates:
       *  MinMax: '<S652>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S652>/motohawk_calibration'
       */
      rtb_Product_l /= (rtb_Product_l >= (CATFiltConst_DataStore())) || rtIsNaN
        ((CATFiltConst_DataStore())) ? rtb_Product_l : (CATFiltConst_DataStore());

      /* Logic: '<S648>/Logical Operator4' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S648>/motohawk_fault_status1'
       *  S-Function (motohawk_sfun_fault_status): '<S648>/motohawk_fault_status4'
       */
      rtb_LogicalOperator4_d = (IsFaultActive(27) || IsFaultActive(28));

      /* Logic: '<S648>/Logical Operator1' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S648>/motohawk_fault_status2'
       *  S-Function (motohawk_sfun_fault_status): '<S648>/motohawk_fault_status3'
       */
      rtb_LogicalOperator1_n = (IsFaultSuspected(27) || IsFaultSuspected(28));

      /* S-Function Block: <S637>/motohawk_ain3 Resource: AN10 */
      BaseEngineController_LS_112_B.s637_motohawk_ain3 = AN10_AnalogInput_Get();

      /* DataTypeConversion: '<S648>/Data Type Conversion' */
      rtb_DataTypeConversion_n = (real_T)
        BaseEngineController_LS_112_B.s637_motohawk_ain3;

      /* S-Function Block: <S657>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (CATIdx_DataStore()) = TablePrelookup_real_T(rtb_DataTypeConversion_n,
          (CATIdxArr_DataStore()), 13, (CATIdx_DataStore()));
        rtb_motohawk_prelookup_m = (CATIdx_DataStore());
      }

      /* S-Function Block: <S657>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        BaseEngineController_LS_112_B.s657_motohawk_interpolation_1d =
          TableInterpolation1D_real_T(rtb_motohawk_prelookup_m, (real_T *)
          ((CATTbl_DataStore())), 13);
      }

      /* UnitDelay: '<S648>/Unit Delay' */
      rtb_UnitDelay_bqd =
        BaseEngineController_LS_112_DWork.s648_UnitDelay_DSTATE;

      /* If: '<S648>/If' incorporates:
       *  Logic: '<S648>/Logical Operator5'
       *  Logic: '<S648>/Logical Operator6'
       */
      if ((!rtb_LogicalOperator4_d) && rtb_LogicalOperator1_n) {
        /* Outputs for IfAction SubSystem: '<S648>/If Action Subsystem' incorporates:
         *  ActionPort: '<S653>/Action Port'
         */
        BaseEngineController_LS_112_IfActionSubsystem(rtb_UnitDelay_bqd,
          &rtb_Merge_p);

        /* End of Outputs for SubSystem: '<S648>/If Action Subsystem' */
      } else if (rtb_LogicalOperator4_d) {
        /* Outputs for IfAction SubSystem: '<S648>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S654>/Action Port'
         */
        BaseEngineController_LS_112_IfActionSubsystem((CATDefault_DataStore()),
          &rtb_Merge_p);

        /* End of Outputs for SubSystem: '<S648>/If Action Subsystem1' */
      } else {
        /* Outputs for IfAction SubSystem: '<S648>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S655>/Action Port'
         */
        BaseEngineController_LS_112_IfActionSubsystem
          (BaseEngineController_LS_112_B.s657_motohawk_interpolation_1d,
           &rtb_Merge_p);

        /* End of Outputs for SubSystem: '<S648>/If Action Subsystem2' */
      }

      /* End of If: '<S648>/If' */

      /* Sum: '<S658>/Sum1' incorporates:
       *  Constant: '<S658>/Constant'
       *  Product: '<S658>/Product'
       *  Product: '<S658>/Product1'
       *  Sum: '<S658>/Sum'
       *  UnitDelay: '<S658>/Unit Delay'
       */
      rtb_Sum1_a = (1.0 - rtb_Product_l) *
        BaseEngineController_LS_112_DWork.s658_UnitDelay_DSTATE + rtb_Merge_p *
        rtb_Product_l;

      /* If: '<S656>/If' incorporates:
       *  Inport: '<S659>/In1'
       *  Inport: '<S660>/In1'
       *  S-Function (motohawk_sfun_calibration): '<S656>/new_value'
       *  S-Function (motohawk_sfun_calibration): '<S656>/override_enable'
       */
      if ((CAT_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S656>/NewValue' incorporates:
         *  ActionPort: '<S659>/Action Port'
         */
        BaseEngineController_LS_112_B.s656_Merge = (CAT_new_DataStore());

        /* End of Outputs for SubSystem: '<S656>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S656>/OldValue' incorporates:
         *  ActionPort: '<S660>/Action Port'
         */
        BaseEngineController_LS_112_B.s656_Merge = rtb_Sum1_a;

        /* End of Outputs for SubSystem: '<S656>/OldValue' */
      }

      /* End of If: '<S656>/If' */

      /* Logic: '<S648>/Logical Operator2' incorporates:
       *  RelationalOperator: '<S648>/Relational Operator2'
       *  S-Function (motohawk_sfun_calibration): '<S648>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_data_read): '<S648>/motohawk_data_read1'
       */
      rtb_LogicalOperator2_lm = ((MPRD_DataStore() && (rtb_DataTypeConversion_n >
                                   (CATMax_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S648>/motohawk_fault_def2' */

      /* Set Fault Suspected Status: CATRangeHigh */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(27, rtb_LogicalOperator2_lm);
        UpdateFault(27);
      }

      /* Logic: '<S648>/Logical Operator3' incorporates:
       *  RelationalOperator: '<S648>/Relational Operator3'
       *  S-Function (motohawk_sfun_calibration): '<S648>/motohawk_calibration6'
       *  S-Function (motohawk_sfun_data_read): '<S648>/motohawk_data_read1'
       */
      rtb_LogicalOperator3_d = ((MPRD_DataStore() && (rtb_DataTypeConversion_n <
                                  (CATMin_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S648>/motohawk_fault_def3' */

      /* Set Fault Suspected Status: CATRangeLow */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(28, rtb_LogicalOperator3_d);
        UpdateFault(28);
      }

      /* Update for UnitDelay: '<S649>/Unit Delay' */
      BaseEngineController_LS_112_DWork.s649_UnitDelay_DSTATE =
        BaseEngineController_LS_112_B.s649_Merge;

      /* Update for UnitDelay: '<S667>/Unit Delay' */
      BaseEngineController_LS_112_DWork.s667_UnitDelay_DSTATE = rtb_Sum1_h;

      /* Update for UnitDelay: '<S651>/Unit Delay' */
      BaseEngineController_LS_112_DWork.s651_UnitDelay_DSTATE =
        BaseEngineController_LS_112_B.s651_Merge;

      /* Update for UnitDelay: '<S685>/Unit Delay' */
      BaseEngineController_LS_112_DWork.s685_UnitDelay_DSTATE = rtb_Sum1_n;

      /* Update for UnitDelay: '<S650>/Unit Delay' */
      BaseEngineController_LS_112_DWork.s650_UnitDelay_DSTATE = rtb_Merge_o;

      /* Update for UnitDelay: '<S676>/Unit Delay' */
      BaseEngineController_LS_112_DWork.s676_UnitDelay_DSTATE = rtb_Sum1_g;

      /* Update for UnitDelay: '<S648>/Unit Delay' */
      BaseEngineController_LS_112_DWork.s648_UnitDelay_DSTATE = rtb_Merge_p;

      /* Update for UnitDelay: '<S658>/Unit Delay' */
      BaseEngineController_LS_112_DWork.s658_UnitDelay_DSTATE = rtb_Sum1_a;
    }
  }
}
