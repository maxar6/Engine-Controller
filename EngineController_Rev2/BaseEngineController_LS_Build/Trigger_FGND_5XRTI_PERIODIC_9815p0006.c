/*
 * Trigger_FGND_5XRTI_PERIODIC_9815p0006.c
 *
 * Code generation for model "BaseEngineController_LS.mdl".
 *
 * Model version              : 1.2195
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Sun Nov 27 15:42:41 2022
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_LS.h"
#include "BaseEngineController_LS_private.h"

void Trigger_FGND_5XRTI_PERIODIC_9815p0006(void)
{
  /* Named constants for Stateflow: '<S942>/ECUP Latch' */
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

  if (BaseEngineController_LS_DWork.s495_motohawk_trigger_DWORK1) {
    /* Output and update for function-call system: '<S495>/Temp Sensors' */
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
      boolean_T rtb_LogicalOperator4_k;
      boolean_T rtb_LogicalOperator1_b;
      real_T rtb_Sum1_hs;
      real_T rtb_Sum1_hn;
      real_T rtb_Sum1_g;
      real_T rtb_Sum1_lf;

      /* S-Function Block: <S673>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s673_motohawk_delta_time_DWORK1, NULL);
        rtb_Product_d0 = ((real_T) delta) * 0.000001;
      }

      /* Product: '<S673>/Product' incorporates:
       *  MinMax: '<S673>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S673>/motohawk_calibration'
       */
      rtb_Product_d0 /= (rtb_Product_d0 >= (ECTFiltConst_DataStore())) ||
        rtIsNaN((ECTFiltConst_DataStore())) ? rtb_Product_d0 :
        (ECTFiltConst_DataStore());

      /* Logic: '<S661>/Logical Operator4' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S661>/motohawk_fault_status1'
       *  S-Function (motohawk_sfun_fault_status): '<S661>/motohawk_fault_status4'
       */
      rtb_LogicalOperator4_k = (IsFaultActive(43) || IsFaultActive(44));

      /* Logic: '<S661>/Logical Operator1' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S661>/motohawk_fault_status2'
       *  S-Function (motohawk_sfun_fault_status): '<S661>/motohawk_fault_status3'
       */
      rtb_LogicalOperator1_b = (IsFaultSuspected(43) || IsFaultSuspected(44));

      /* S-Function Block: <S649>/motohawk_ain Resource: ECTSensorPin */
      {
        extern NativeError_S ECTSensorPin_AnalogInput_Get(uint16_T *adc,
          uint16_T *status);
        ECTSensorPin_AnalogInput_Get
          (&BaseEngineController_LS_B.s649_motohawk_ain, NULL);
      }

      /* DataTypeConversion: '<S661>/Data Type Conversion' */
      rtb_DataTypeConversion_o = (real_T)
        BaseEngineController_LS_B.s649_motohawk_ain;

      /* S-Function Block: <S678>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (ECTIdx_DataStore()) = TablePrelookup_real_T(rtb_DataTypeConversion_o,
          (ECTIdxArr_DataStore()), 13, (ECTIdx_DataStore()));
        rtb_motohawk_prelookup_h = (ECTIdx_DataStore());
      }

      /* S-Function Block: <S678>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        BaseEngineController_LS_B.s678_motohawk_interpolation_1d =
          TableInterpolation1D_real_T(rtb_motohawk_prelookup_h, (real_T *)
          ((ECTTbl_DataStore())), 13);
      }

      /* UnitDelay: '<S661>/Unit Delay' */
      rtb_UnitDelay_di = BaseEngineController_LS_DWork.s661_UnitDelay_DSTATE;

      /* If: '<S661>/If' incorporates:
       *  Logic: '<S661>/Logical Operator5'
       *  Logic: '<S661>/Logical Operator6'
       */
      if ((!rtb_LogicalOperator4_k) && rtb_LogicalOperator1_b) {
        /* Outputs for IfAction SubSystem: '<S661>/If Action Subsystem' incorporates:
         *  ActionPort: '<S674>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay_di,
          &BaseEngineController_LS_B.s661_Merge);

        /* End of Outputs for SubSystem: '<S661>/If Action Subsystem' */
      } else if (rtb_LogicalOperator4_k) {
        /* Outputs for IfAction SubSystem: '<S661>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S675>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem((ECTDefault_DataStore()),
          &BaseEngineController_LS_B.s661_Merge);

        /* End of Outputs for SubSystem: '<S661>/If Action Subsystem1' */
      } else {
        /* Outputs for IfAction SubSystem: '<S661>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S676>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem
          (BaseEngineController_LS_B.s678_motohawk_interpolation_1d,
           &BaseEngineController_LS_B.s661_Merge);

        /* End of Outputs for SubSystem: '<S661>/If Action Subsystem2' */
      }

      /* End of If: '<S661>/If' */

      /* Sum: '<S679>/Sum1' incorporates:
       *  Constant: '<S679>/Constant'
       *  Product: '<S679>/Product'
       *  Product: '<S679>/Product1'
       *  Sum: '<S679>/Sum'
       *  UnitDelay: '<S679>/Unit Delay'
       */
      rtb_Sum1_hs = (1.0 - rtb_Product_d0) *
        BaseEngineController_LS_DWork.s679_UnitDelay_DSTATE +
        BaseEngineController_LS_B.s661_Merge * rtb_Product_d0;

      /* If: '<S677>/If' incorporates:
       *  Inport: '<S680>/In1'
       *  Inport: '<S681>/In1'
       *  S-Function (motohawk_sfun_calibration): '<S677>/new_value'
       *  S-Function (motohawk_sfun_calibration): '<S677>/override_enable'
       */
      if ((ECT_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S677>/NewValue' incorporates:
         *  ActionPort: '<S680>/Action Port'
         */
        BaseEngineController_LS_B.s677_Merge = (ECT_new_DataStore());

        /* End of Outputs for SubSystem: '<S677>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S677>/OldValue' incorporates:
         *  ActionPort: '<S681>/Action Port'
         */
        BaseEngineController_LS_B.s677_Merge = rtb_Sum1_hs;

        /* End of Outputs for SubSystem: '<S677>/OldValue' */
      }

      /* End of If: '<S677>/If' */

      /* Logic: '<S661>/Logical Operator2' incorporates:
       *  RelationalOperator: '<S661>/Relational Operator2'
       *  S-Function (motohawk_sfun_calibration): '<S661>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_data_read): '<S661>/motohawk_data_read1'
       */
      rtb_LogicalOperator2_k = ((MPRD_DataStore() && (rtb_DataTypeConversion_o >
                                  (ECTMax_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S661>/motohawk_fault_def2' */

      /* Set Fault Suspected Status: ECTRangeHigh */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(43, rtb_LogicalOperator2_k);
        UpdateFault(43);
      }

      /* Logic: '<S661>/Logical Operator3' incorporates:
       *  RelationalOperator: '<S661>/Relational Operator3'
       *  S-Function (motohawk_sfun_calibration): '<S661>/motohawk_calibration6'
       *  S-Function (motohawk_sfun_data_read): '<S661>/motohawk_data_read1'
       */
      rtb_LogicalOperator3_h = ((MPRD_DataStore() && (rtb_DataTypeConversion_o <
                                  (ECTMin_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S661>/motohawk_fault_def3' */

      /* Set Fault Suspected Status: ECTRangeLow */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(44, rtb_LogicalOperator3_h);
        UpdateFault(44);
      }

      /* S-Function Block: <S691>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s691_motohawk_delta_time_DWORK1, NULL);
        rtb_Product_d0 = ((real_T) delta) * 0.000001;
      }

      /* Product: '<S691>/Product' incorporates:
       *  MinMax: '<S691>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S691>/motohawk_calibration'
       */
      rtb_Product_d0 /= (rtb_Product_d0 >= (IATFiltConst_DataStore())) ||
        rtIsNaN((IATFiltConst_DataStore())) ? rtb_Product_d0 :
        (IATFiltConst_DataStore());

      /* Logic: '<S663>/Logical Operator4' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S663>/motohawk_fault_status1'
       *  S-Function (motohawk_sfun_fault_status): '<S663>/motohawk_fault_status4'
       */
      rtb_LogicalOperator4_k = (IsFaultActive(84) || IsFaultActive(85));

      /* Logic: '<S663>/Logical Operator1' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S663>/motohawk_fault_status2'
       *  S-Function (motohawk_sfun_fault_status): '<S663>/motohawk_fault_status3'
       */
      rtb_LogicalOperator1_b = (IsFaultSuspected(84) || IsFaultSuspected(85));

      /* S-Function Block: <S649>/motohawk_ain1 Resource: IATSensorPin */
      {
        extern NativeError_S IATSensorPin_AnalogInput_Get(uint16_T *adc,
          uint16_T *status);
        IATSensorPin_AnalogInput_Get
          (&BaseEngineController_LS_B.s649_motohawk_ain1, NULL);
      }

      /* DataTypeConversion: '<S663>/Data Type Conversion' */
      rtb_DataTypeConversion_k = (real_T)
        BaseEngineController_LS_B.s649_motohawk_ain1;

      /* S-Function Block: <S696>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (IATIdx_DataStore()) = TablePrelookup_real_T(rtb_DataTypeConversion_k,
          (IATIdxArr_DataStore()), 13, (IATIdx_DataStore()));
        rtb_motohawk_prelookup_a = (IATIdx_DataStore());
      }

      /* S-Function Block: <S696>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        BaseEngineController_LS_B.s696_motohawk_interpolation_1d =
          TableInterpolation1D_real_T(rtb_motohawk_prelookup_a, (real_T *)
          ((IATTbl_DataStore())), 13);
      }

      /* UnitDelay: '<S663>/Unit Delay' */
      rtb_UnitDelay_jh = BaseEngineController_LS_DWork.s663_UnitDelay_DSTATE;

      /* If: '<S663>/If' incorporates:
       *  Logic: '<S663>/Logical Operator5'
       *  Logic: '<S663>/Logical Operator6'
       */
      if ((!rtb_LogicalOperator4_k) && rtb_LogicalOperator1_b) {
        /* Outputs for IfAction SubSystem: '<S663>/If Action Subsystem' incorporates:
         *  ActionPort: '<S692>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay_jh,
          &BaseEngineController_LS_B.s663_Merge);

        /* End of Outputs for SubSystem: '<S663>/If Action Subsystem' */
      } else if (rtb_LogicalOperator4_k) {
        /* Outputs for IfAction SubSystem: '<S663>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S693>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem((IATDefault_DataStore()),
          &BaseEngineController_LS_B.s663_Merge);

        /* End of Outputs for SubSystem: '<S663>/If Action Subsystem1' */
      } else {
        /* Outputs for IfAction SubSystem: '<S663>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S694>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem
          (BaseEngineController_LS_B.s696_motohawk_interpolation_1d,
           &BaseEngineController_LS_B.s663_Merge);

        /* End of Outputs for SubSystem: '<S663>/If Action Subsystem2' */
      }

      /* End of If: '<S663>/If' */

      /* Sum: '<S697>/Sum1' incorporates:
       *  Constant: '<S697>/Constant'
       *  Product: '<S697>/Product'
       *  Product: '<S697>/Product1'
       *  Sum: '<S697>/Sum'
       *  UnitDelay: '<S697>/Unit Delay'
       */
      rtb_Sum1_hn = (1.0 - rtb_Product_d0) *
        BaseEngineController_LS_DWork.s697_UnitDelay_DSTATE +
        BaseEngineController_LS_B.s663_Merge * rtb_Product_d0;

      /* If: '<S695>/If' incorporates:
       *  Inport: '<S698>/In1'
       *  Inport: '<S699>/In1'
       *  S-Function (motohawk_sfun_calibration): '<S695>/new_value'
       *  S-Function (motohawk_sfun_calibration): '<S695>/override_enable'
       */
      if ((IAT_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S695>/NewValue' incorporates:
         *  ActionPort: '<S698>/Action Port'
         */
        BaseEngineController_LS_B.s695_Merge = (IAT_new_DataStore());

        /* End of Outputs for SubSystem: '<S695>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S695>/OldValue' incorporates:
         *  ActionPort: '<S699>/Action Port'
         */
        BaseEngineController_LS_B.s695_Merge = rtb_Sum1_hn;

        /* End of Outputs for SubSystem: '<S695>/OldValue' */
      }

      /* End of If: '<S695>/If' */

      /* Logic: '<S663>/Logical Operator2' incorporates:
       *  RelationalOperator: '<S663>/Relational Operator2'
       *  S-Function (motohawk_sfun_calibration): '<S663>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_data_read): '<S663>/motohawk_data_read1'
       */
      rtb_LogicalOperator2_p = ((MPRD_DataStore() && (rtb_DataTypeConversion_k >
                                  (IATMax_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S663>/motohawk_fault_def2' */

      /* Set Fault Suspected Status: IATRangeHigh */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(84, rtb_LogicalOperator2_p);
        UpdateFault(84);
      }

      /* Logic: '<S663>/Logical Operator3' incorporates:
       *  RelationalOperator: '<S663>/Relational Operator3'
       *  S-Function (motohawk_sfun_calibration): '<S663>/motohawk_calibration6'
       *  S-Function (motohawk_sfun_data_read): '<S663>/motohawk_data_read1'
       */
      rtb_LogicalOperator3_ht = ((MPRD_DataStore() && (rtb_DataTypeConversion_k <
                                   (IATMin_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S663>/motohawk_fault_def3' */

      /* Set Fault Suspected Status: IATRangeLow */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(85, rtb_LogicalOperator3_ht);
        UpdateFault(85);
      }

      /* S-Function Block: <S682>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s682_motohawk_delta_time_DWORK1, NULL);
        rtb_Product_d0 = ((real_T) delta) * 0.000001;
      }

      /* Product: '<S682>/Product' incorporates:
       *  MinMax: '<S682>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S682>/motohawk_calibration'
       */
      rtb_Product_d0 /= (rtb_Product_d0 >= (EVAPFiltConst_DataStore())) ||
        rtIsNaN((EVAPFiltConst_DataStore())) ? rtb_Product_d0 :
        (EVAPFiltConst_DataStore());

      /* Logic: '<S662>/Logical Operator4' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S662>/motohawk_fault_status1'
       *  S-Function (motohawk_sfun_fault_status): '<S662>/motohawk_fault_status4'
       */
      rtb_LogicalOperator4_k = (IsFaultActive(65) || IsFaultActive(66));

      /* Logic: '<S662>/Logical Operator1' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S662>/motohawk_fault_status2'
       *  S-Function (motohawk_sfun_fault_status): '<S662>/motohawk_fault_status3'
       */
      rtb_LogicalOperator1_b = (IsFaultSuspected(65) || IsFaultSuspected(66));

      /* S-Function Block: <S649>/motohawk_ain2 Resource: EVAPSensorPin */
      {
        extern NativeError_S EVAPSensorPin_AnalogInput_Get(uint16_T *adc,
          uint16_T *status);
        EVAPSensorPin_AnalogInput_Get
          (&BaseEngineController_LS_B.s649_motohawk_ain2, NULL);
      }

      /* DataTypeConversion: '<S662>/Data Type Conversion' */
      rtb_DataTypeConversion_k3 = (real_T)
        BaseEngineController_LS_B.s649_motohawk_ain2;

      /* S-Function Block: <S687>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (EVAPIdx_DataStore()) = TablePrelookup_real_T(rtb_DataTypeConversion_k3,
          (EVAPIdxArr_DataStore()), 13, (EVAPIdx_DataStore()));
        rtb_motohawk_prelookup_gz = (EVAPIdx_DataStore());
      }

      /* S-Function Block: <S687>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        BaseEngineController_LS_B.s687_motohawk_interpolation_1d =
          TableInterpolation1D_real_T(rtb_motohawk_prelookup_gz, (real_T *)
          ((EVAPTbl_DataStore())), 13);
      }

      /* UnitDelay: '<S662>/Unit Delay' */
      rtb_UnitDelay_i = BaseEngineController_LS_DWork.s662_UnitDelay_DSTATE;

      /* If: '<S662>/If' incorporates:
       *  Logic: '<S662>/Logical Operator5'
       *  Logic: '<S662>/Logical Operator6'
       */
      if ((!rtb_LogicalOperator4_k) && rtb_LogicalOperator1_b) {
        /* Outputs for IfAction SubSystem: '<S662>/If Action Subsystem' incorporates:
         *  ActionPort: '<S683>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay_i, &rtb_Merge_l);

        /* End of Outputs for SubSystem: '<S662>/If Action Subsystem' */
      } else if (rtb_LogicalOperator4_k) {
        /* Outputs for IfAction SubSystem: '<S662>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S684>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem((EVAPDefault_DataStore()),
          &rtb_Merge_l);

        /* End of Outputs for SubSystem: '<S662>/If Action Subsystem1' */
      } else {
        /* Outputs for IfAction SubSystem: '<S662>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S685>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem
          (BaseEngineController_LS_B.s687_motohawk_interpolation_1d,
           &rtb_Merge_l);

        /* End of Outputs for SubSystem: '<S662>/If Action Subsystem2' */
      }

      /* End of If: '<S662>/If' */

      /* Sum: '<S688>/Sum1' incorporates:
       *  Constant: '<S688>/Constant'
       *  Product: '<S688>/Product'
       *  Product: '<S688>/Product1'
       *  Sum: '<S688>/Sum'
       *  UnitDelay: '<S688>/Unit Delay'
       */
      rtb_Sum1_g = (1.0 - rtb_Product_d0) *
        BaseEngineController_LS_DWork.s688_UnitDelay_DSTATE + rtb_Merge_l *
        rtb_Product_d0;

      /* If: '<S686>/If' incorporates:
       *  Inport: '<S689>/In1'
       *  Inport: '<S690>/In1'
       *  S-Function (motohawk_sfun_calibration): '<S686>/new_value'
       *  S-Function (motohawk_sfun_calibration): '<S686>/override_enable'
       */
      if ((EVAP_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S686>/NewValue' incorporates:
         *  ActionPort: '<S689>/Action Port'
         */
        BaseEngineController_LS_B.s686_Merge = (EVAP_new_DataStore());

        /* End of Outputs for SubSystem: '<S686>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S686>/OldValue' incorporates:
         *  ActionPort: '<S690>/Action Port'
         */
        BaseEngineController_LS_B.s686_Merge = rtb_Sum1_g;

        /* End of Outputs for SubSystem: '<S686>/OldValue' */
      }

      /* End of If: '<S686>/If' */

      /* Logic: '<S662>/Logical Operator2' incorporates:
       *  RelationalOperator: '<S662>/Relational Operator2'
       *  S-Function (motohawk_sfun_calibration): '<S662>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_data_read): '<S662>/motohawk_data_read1'
       */
      rtb_LogicalOperator2_f = ((MPRD_DataStore() && (rtb_DataTypeConversion_k3 >
                                  (EVAPMax_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S662>/motohawk_fault_def2' */

      /* Set Fault Suspected Status: EVAPRangeHigh */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(65, rtb_LogicalOperator2_f);
        UpdateFault(65);
      }

      /* Logic: '<S662>/Logical Operator3' incorporates:
       *  RelationalOperator: '<S662>/Relational Operator3'
       *  S-Function (motohawk_sfun_calibration): '<S662>/motohawk_calibration6'
       *  S-Function (motohawk_sfun_data_read): '<S662>/motohawk_data_read1'
       */
      rtb_LogicalOperator3_j = ((MPRD_DataStore() && (rtb_DataTypeConversion_k3 <
                                  (EVAPMin_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S662>/motohawk_fault_def3' */

      /* Set Fault Suspected Status: EVAPRangeLow */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(66, rtb_LogicalOperator3_j);
        UpdateFault(66);
      }

      /* S-Function Block: <S664>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s664_motohawk_delta_time_DWORK1, NULL);
        rtb_Product_d0 = ((real_T) delta) * 0.000001;
      }

      /* Product: '<S664>/Product' incorporates:
       *  MinMax: '<S664>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S664>/motohawk_calibration'
       */
      rtb_Product_d0 /= (rtb_Product_d0 >= (CATFiltConst_DataStore())) ||
        rtIsNaN((CATFiltConst_DataStore())) ? rtb_Product_d0 :
        (CATFiltConst_DataStore());

      /* Logic: '<S660>/Logical Operator4' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S660>/motohawk_fault_status1'
       *  S-Function (motohawk_sfun_fault_status): '<S660>/motohawk_fault_status4'
       */
      rtb_LogicalOperator4_k = (IsFaultActive(27) || IsFaultActive(28));

      /* Logic: '<S660>/Logical Operator1' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S660>/motohawk_fault_status2'
       *  S-Function (motohawk_sfun_fault_status): '<S660>/motohawk_fault_status3'
       */
      rtb_LogicalOperator1_b = (IsFaultSuspected(27) || IsFaultSuspected(28));

      /* S-Function Block: <S649>/motohawk_ain3 Resource: CATSensorPin */
      {
        extern NativeError_S CATSensorPin_AnalogInput_Get(uint16_T *adc,
          uint16_T *status);
        CATSensorPin_AnalogInput_Get
          (&BaseEngineController_LS_B.s649_motohawk_ain3, NULL);
      }

      /* DataTypeConversion: '<S660>/Data Type Conversion' */
      rtb_DataTypeConversion_i = (real_T)
        BaseEngineController_LS_B.s649_motohawk_ain3;

      /* S-Function Block: <S669>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (CATIdx_DataStore()) = TablePrelookup_real_T(rtb_DataTypeConversion_i,
          (CATIdxArr_DataStore()), 13, (CATIdx_DataStore()));
        rtb_motohawk_prelookup_b = (CATIdx_DataStore());
      }

      /* S-Function Block: <S669>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        BaseEngineController_LS_B.s669_motohawk_interpolation_1d =
          TableInterpolation1D_real_T(rtb_motohawk_prelookup_b, (real_T *)
          ((CATTbl_DataStore())), 13);
      }

      /* UnitDelay: '<S660>/Unit Delay' */
      rtb_UnitDelay_kw = BaseEngineController_LS_DWork.s660_UnitDelay_DSTATE;

      /* If: '<S660>/If' incorporates:
       *  Logic: '<S660>/Logical Operator5'
       *  Logic: '<S660>/Logical Operator6'
       */
      if ((!rtb_LogicalOperator4_k) && rtb_LogicalOperator1_b) {
        /* Outputs for IfAction SubSystem: '<S660>/If Action Subsystem' incorporates:
         *  ActionPort: '<S665>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay_kw,
          &rtb_Merge_l5);

        /* End of Outputs for SubSystem: '<S660>/If Action Subsystem' */
      } else if (rtb_LogicalOperator4_k) {
        /* Outputs for IfAction SubSystem: '<S660>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S666>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem((CATDefault_DataStore()),
          &rtb_Merge_l5);

        /* End of Outputs for SubSystem: '<S660>/If Action Subsystem1' */
      } else {
        /* Outputs for IfAction SubSystem: '<S660>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S667>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem
          (BaseEngineController_LS_B.s669_motohawk_interpolation_1d,
           &rtb_Merge_l5);

        /* End of Outputs for SubSystem: '<S660>/If Action Subsystem2' */
      }

      /* End of If: '<S660>/If' */

      /* Sum: '<S670>/Sum1' incorporates:
       *  Constant: '<S670>/Constant'
       *  Product: '<S670>/Product'
       *  Product: '<S670>/Product1'
       *  Sum: '<S670>/Sum'
       *  UnitDelay: '<S670>/Unit Delay'
       */
      rtb_Sum1_lf = (1.0 - rtb_Product_d0) *
        BaseEngineController_LS_DWork.s670_UnitDelay_DSTATE + rtb_Merge_l5 *
        rtb_Product_d0;

      /* If: '<S668>/If' incorporates:
       *  Inport: '<S671>/In1'
       *  Inport: '<S672>/In1'
       *  S-Function (motohawk_sfun_calibration): '<S668>/new_value'
       *  S-Function (motohawk_sfun_calibration): '<S668>/override_enable'
       */
      if ((CAT_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S668>/NewValue' incorporates:
         *  ActionPort: '<S671>/Action Port'
         */
        BaseEngineController_LS_B.s668_Merge = (CAT_new_DataStore());

        /* End of Outputs for SubSystem: '<S668>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S668>/OldValue' incorporates:
         *  ActionPort: '<S672>/Action Port'
         */
        BaseEngineController_LS_B.s668_Merge = rtb_Sum1_lf;

        /* End of Outputs for SubSystem: '<S668>/OldValue' */
      }

      /* End of If: '<S668>/If' */

      /* Logic: '<S660>/Logical Operator2' incorporates:
       *  RelationalOperator: '<S660>/Relational Operator2'
       *  S-Function (motohawk_sfun_calibration): '<S660>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_data_read): '<S660>/motohawk_data_read1'
       */
      rtb_LogicalOperator2_i = ((MPRD_DataStore() && (rtb_DataTypeConversion_i >
                                  (CATMax_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S660>/motohawk_fault_def2' */

      /* Set Fault Suspected Status: CATRangeHigh */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(27, rtb_LogicalOperator2_i);
        UpdateFault(27);
      }

      /* Logic: '<S660>/Logical Operator3' incorporates:
       *  RelationalOperator: '<S660>/Relational Operator3'
       *  S-Function (motohawk_sfun_calibration): '<S660>/motohawk_calibration6'
       *  S-Function (motohawk_sfun_data_read): '<S660>/motohawk_data_read1'
       */
      rtb_LogicalOperator3_p = ((MPRD_DataStore() && (rtb_DataTypeConversion_i <
                                  (CATMin_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S660>/motohawk_fault_def3' */

      /* Set Fault Suspected Status: CATRangeLow */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(28, rtb_LogicalOperator3_p);
        UpdateFault(28);
      }

      /* Update for UnitDelay: '<S661>/Unit Delay' */
      BaseEngineController_LS_DWork.s661_UnitDelay_DSTATE =
        BaseEngineController_LS_B.s661_Merge;

      /* Update for UnitDelay: '<S679>/Unit Delay' */
      BaseEngineController_LS_DWork.s679_UnitDelay_DSTATE = rtb_Sum1_hs;

      /* Update for UnitDelay: '<S663>/Unit Delay' */
      BaseEngineController_LS_DWork.s663_UnitDelay_DSTATE =
        BaseEngineController_LS_B.s663_Merge;

      /* Update for UnitDelay: '<S697>/Unit Delay' */
      BaseEngineController_LS_DWork.s697_UnitDelay_DSTATE = rtb_Sum1_hn;

      /* Update for UnitDelay: '<S662>/Unit Delay' */
      BaseEngineController_LS_DWork.s662_UnitDelay_DSTATE = rtb_Merge_l;

      /* Update for UnitDelay: '<S688>/Unit Delay' */
      BaseEngineController_LS_DWork.s688_UnitDelay_DSTATE = rtb_Sum1_g;

      /* Update for UnitDelay: '<S660>/Unit Delay' */
      BaseEngineController_LS_DWork.s660_UnitDelay_DSTATE = rtb_Merge_l5;

      /* Update for UnitDelay: '<S670>/Unit Delay' */
      BaseEngineController_LS_DWork.s670_UnitDelay_DSTATE = rtb_Sum1_lf;
    }
  }
}
