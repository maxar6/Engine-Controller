/*
 * Trigger_FGND_5XRTI_PERIODIC_5522p0011.c
 *
 * Code generation for model "BaseEngineController_LS.mdl".
 *
 * Model version              : 1.2098
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Sat Nov 12 20:07:34 2022
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_LS.h"
#include "BaseEngineController_LS_private.h"

void Trigger_FGND_5XRTI_PERIODIC_5522p0011(void)
{
  /* Named constants for Stateflow: '<S999>/ECUP Latch' */
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

  if (BaseEngineController_LS_DWork.s445_motohawk_trigger_DWORK1) {
    /* Output and update for function-call system: '<S445>/Temp Sensors' */
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

      /* S-Function Block: <S722>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s722_motohawk_delta_time_DWORK1, NULL);
        rtb_Product_d0 = ((real_T) delta) * 0.000001;
      }

      /* Product: '<S722>/Product' incorporates:
       *  MinMax: '<S722>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S722>/motohawk_calibration'
       */
      rtb_Product_d0 /= (rtb_Product_d0 >= (ECTFiltConst_DataStore())) ||
        rtIsNaN((ECTFiltConst_DataStore())) ? rtb_Product_d0 :
        (ECTFiltConst_DataStore());

      /* Logic: '<S710>/Logical Operator4' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S710>/motohawk_fault_status1'
       *  S-Function (motohawk_sfun_fault_status): '<S710>/motohawk_fault_status4'
       */
      rtb_LogicalOperator4 = (IsFaultActive(32) || IsFaultActive(33));

      /* Logic: '<S710>/Logical Operator1' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S710>/motohawk_fault_status2'
       *  S-Function (motohawk_sfun_fault_status): '<S710>/motohawk_fault_status3'
       */
      rtb_LogicalOperator1_b = (IsFaultSuspected(32) || IsFaultSuspected(33));

      /* S-Function Block: <S698>/motohawk_ain Resource: ECTSensorPin */
      {
        extern NativeError_S ECTSensorPin_AnalogInput_Get(uint16_T *adc,
          uint16_T *status);
        ECTSensorPin_AnalogInput_Get
          (&BaseEngineController_LS_B.s698_motohawk_ain, NULL);
      }

      /* DataTypeConversion: '<S710>/Data Type Conversion' */
      rtb_DataTypeConversion_o = (real_T)
        BaseEngineController_LS_B.s698_motohawk_ain;

      /* S-Function Block: <S727>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (ECTIdx_DataStore()) = TablePrelookup_real_T(rtb_DataTypeConversion_o,
          (ECTIdxArr_DataStore()), 13, (ECTIdx_DataStore()));
        rtb_motohawk_prelookup_h = (ECTIdx_DataStore());
      }

      /* S-Function Block: <S727>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        BaseEngineController_LS_B.s727_motohawk_interpolation_1d =
          TableInterpolation1D_real_T(rtb_motohawk_prelookup_h, (real_T *)
          ((ECTTbl_DataStore())), 13);
      }

      /* UnitDelay: '<S710>/Unit Delay' */
      rtb_UnitDelay_di = BaseEngineController_LS_DWork.s710_UnitDelay_DSTATE;

      /* If: '<S710>/If' incorporates:
       *  Logic: '<S710>/Logical Operator5'
       *  Logic: '<S710>/Logical Operator6'
       */
      if ((!rtb_LogicalOperator4) && rtb_LogicalOperator1_b) {
        /* Outputs for IfAction SubSystem: '<S710>/If Action Subsystem' incorporates:
         *  ActionPort: '<S723>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay_di,
          &BaseEngineController_LS_B.s710_Merge);

        /* End of Outputs for SubSystem: '<S710>/If Action Subsystem' */
      } else if (rtb_LogicalOperator4) {
        /* Outputs for IfAction SubSystem: '<S710>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S724>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem((ECTDefault_DataStore()),
          &BaseEngineController_LS_B.s710_Merge);

        /* End of Outputs for SubSystem: '<S710>/If Action Subsystem1' */
      } else {
        /* Outputs for IfAction SubSystem: '<S710>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S725>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem
          (BaseEngineController_LS_B.s727_motohawk_interpolation_1d,
           &BaseEngineController_LS_B.s710_Merge);

        /* End of Outputs for SubSystem: '<S710>/If Action Subsystem2' */
      }

      /* End of If: '<S710>/If' */

      /* Sum: '<S728>/Sum1' incorporates:
       *  Constant: '<S728>/Constant'
       *  Product: '<S728>/Product'
       *  Product: '<S728>/Product1'
       *  Sum: '<S728>/Sum'
       *  UnitDelay: '<S728>/Unit Delay'
       */
      rtb_Sum1_h = (1.0 - rtb_Product_d0) *
        BaseEngineController_LS_DWork.s728_UnitDelay_DSTATE +
        BaseEngineController_LS_B.s710_Merge * rtb_Product_d0;

      /* If: '<S726>/If' incorporates:
       *  Inport: '<S729>/In1'
       *  Inport: '<S730>/In1'
       *  S-Function (motohawk_sfun_calibration): '<S726>/new_value'
       *  S-Function (motohawk_sfun_calibration): '<S726>/override_enable'
       */
      if ((ECT_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S726>/NewValue' incorporates:
         *  ActionPort: '<S729>/Action Port'
         */
        BaseEngineController_LS_B.s726_Merge = (ECT_new_DataStore());

        /* End of Outputs for SubSystem: '<S726>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S726>/OldValue' incorporates:
         *  ActionPort: '<S730>/Action Port'
         */
        BaseEngineController_LS_B.s726_Merge = rtb_Sum1_h;

        /* End of Outputs for SubSystem: '<S726>/OldValue' */
      }

      /* End of If: '<S726>/If' */

      /* Logic: '<S710>/Logical Operator2' incorporates:
       *  RelationalOperator: '<S710>/Relational Operator2'
       *  S-Function (motohawk_sfun_calibration): '<S710>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_data_read): '<S710>/motohawk_data_read1'
       */
      rtb_LogicalOperator2_k = ((MPRD_DataStore() && (rtb_DataTypeConversion_o >
                                  (ECTMax_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S710>/motohawk_fault_def2' */

      /* Set Fault Suspected Status: ECTRangeHigh */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(32, rtb_LogicalOperator2_k);
        UpdateFault(32);
      }

      /* Logic: '<S710>/Logical Operator3' incorporates:
       *  RelationalOperator: '<S710>/Relational Operator3'
       *  S-Function (motohawk_sfun_calibration): '<S710>/motohawk_calibration6'
       *  S-Function (motohawk_sfun_data_read): '<S710>/motohawk_data_read1'
       */
      rtb_LogicalOperator3_h = ((MPRD_DataStore() && (rtb_DataTypeConversion_o <
                                  (ECTMin_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S710>/motohawk_fault_def3' */

      /* Set Fault Suspected Status: ECTRangeLow */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(33, rtb_LogicalOperator3_h);
        UpdateFault(33);
      }

      /* S-Function Block: <S740>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s740_motohawk_delta_time_DWORK1, NULL);
        rtb_Product_d0 = ((real_T) delta) * 0.000001;
      }

      /* Product: '<S740>/Product' incorporates:
       *  MinMax: '<S740>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S740>/motohawk_calibration'
       */
      rtb_Product_d0 /= (rtb_Product_d0 >= (IATFiltConst_DataStore())) ||
        rtIsNaN((IATFiltConst_DataStore())) ? rtb_Product_d0 :
        (IATFiltConst_DataStore());

      /* Logic: '<S712>/Logical Operator4' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S712>/motohawk_fault_status1'
       *  S-Function (motohawk_sfun_fault_status): '<S712>/motohawk_fault_status4'
       */
      rtb_LogicalOperator4 = (IsFaultActive(72) || IsFaultActive(73));

      /* Logic: '<S712>/Logical Operator1' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S712>/motohawk_fault_status2'
       *  S-Function (motohawk_sfun_fault_status): '<S712>/motohawk_fault_status3'
       */
      rtb_LogicalOperator1_b = (IsFaultSuspected(72) || IsFaultSuspected(73));

      /* S-Function Block: <S698>/motohawk_ain1 Resource: IATSensorPin */
      {
        extern NativeError_S IATSensorPin_AnalogInput_Get(uint16_T *adc,
          uint16_T *status);
        IATSensorPin_AnalogInput_Get
          (&BaseEngineController_LS_B.s698_motohawk_ain1, NULL);
      }

      /* DataTypeConversion: '<S712>/Data Type Conversion' */
      rtb_DataTypeConversion_k = (real_T)
        BaseEngineController_LS_B.s698_motohawk_ain1;

      /* S-Function Block: <S745>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (IATIdx_DataStore()) = TablePrelookup_real_T(rtb_DataTypeConversion_k,
          (IATIdxArr_DataStore()), 13, (IATIdx_DataStore()));
        rtb_motohawk_prelookup_a = (IATIdx_DataStore());
      }

      /* S-Function Block: <S745>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        BaseEngineController_LS_B.s745_motohawk_interpolation_1d =
          TableInterpolation1D_real_T(rtb_motohawk_prelookup_a, (real_T *)
          ((IATTbl_DataStore())), 13);
      }

      /* UnitDelay: '<S712>/Unit Delay' */
      rtb_UnitDelay_jh = BaseEngineController_LS_DWork.s712_UnitDelay_DSTATE;

      /* If: '<S712>/If' incorporates:
       *  Logic: '<S712>/Logical Operator5'
       *  Logic: '<S712>/Logical Operator6'
       */
      if ((!rtb_LogicalOperator4) && rtb_LogicalOperator1_b) {
        /* Outputs for IfAction SubSystem: '<S712>/If Action Subsystem' incorporates:
         *  ActionPort: '<S741>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay_jh,
          &BaseEngineController_LS_B.s712_Merge);

        /* End of Outputs for SubSystem: '<S712>/If Action Subsystem' */
      } else if (rtb_LogicalOperator4) {
        /* Outputs for IfAction SubSystem: '<S712>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S742>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem((IATDefault_DataStore()),
          &BaseEngineController_LS_B.s712_Merge);

        /* End of Outputs for SubSystem: '<S712>/If Action Subsystem1' */
      } else {
        /* Outputs for IfAction SubSystem: '<S712>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S743>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem
          (BaseEngineController_LS_B.s745_motohawk_interpolation_1d,
           &BaseEngineController_LS_B.s712_Merge);

        /* End of Outputs for SubSystem: '<S712>/If Action Subsystem2' */
      }

      /* End of If: '<S712>/If' */

      /* Sum: '<S746>/Sum1' incorporates:
       *  Constant: '<S746>/Constant'
       *  Product: '<S746>/Product'
       *  Product: '<S746>/Product1'
       *  Sum: '<S746>/Sum'
       *  UnitDelay: '<S746>/Unit Delay'
       */
      rtb_Sum1_hn = (1.0 - rtb_Product_d0) *
        BaseEngineController_LS_DWork.s746_UnitDelay_DSTATE +
        BaseEngineController_LS_B.s712_Merge * rtb_Product_d0;

      /* If: '<S744>/If' incorporates:
       *  Inport: '<S747>/In1'
       *  Inport: '<S748>/In1'
       *  S-Function (motohawk_sfun_calibration): '<S744>/new_value'
       *  S-Function (motohawk_sfun_calibration): '<S744>/override_enable'
       */
      if ((IAT_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S744>/NewValue' incorporates:
         *  ActionPort: '<S747>/Action Port'
         */
        BaseEngineController_LS_B.s744_Merge = (IAT_new_DataStore());

        /* End of Outputs for SubSystem: '<S744>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S744>/OldValue' incorporates:
         *  ActionPort: '<S748>/Action Port'
         */
        BaseEngineController_LS_B.s744_Merge = rtb_Sum1_hn;

        /* End of Outputs for SubSystem: '<S744>/OldValue' */
      }

      /* End of If: '<S744>/If' */

      /* Logic: '<S712>/Logical Operator2' incorporates:
       *  RelationalOperator: '<S712>/Relational Operator2'
       *  S-Function (motohawk_sfun_calibration): '<S712>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_data_read): '<S712>/motohawk_data_read1'
       */
      rtb_LogicalOperator2_p = ((MPRD_DataStore() && (rtb_DataTypeConversion_k >
                                  (IATMax_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S712>/motohawk_fault_def2' */

      /* Set Fault Suspected Status: IATRangeHigh */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(72, rtb_LogicalOperator2_p);
        UpdateFault(72);
      }

      /* Logic: '<S712>/Logical Operator3' incorporates:
       *  RelationalOperator: '<S712>/Relational Operator3'
       *  S-Function (motohawk_sfun_calibration): '<S712>/motohawk_calibration6'
       *  S-Function (motohawk_sfun_data_read): '<S712>/motohawk_data_read1'
       */
      rtb_LogicalOperator3_ht = ((MPRD_DataStore() && (rtb_DataTypeConversion_k <
                                   (IATMin_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S712>/motohawk_fault_def3' */

      /* Set Fault Suspected Status: IATRangeLow */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(73, rtb_LogicalOperator3_ht);
        UpdateFault(73);
      }

      /* S-Function Block: <S731>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s731_motohawk_delta_time_DWORK1, NULL);
        rtb_Product_d0 = ((real_T) delta) * 0.000001;
      }

      /* Product: '<S731>/Product' incorporates:
       *  MinMax: '<S731>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S731>/motohawk_calibration'
       */
      rtb_Product_d0 /= (rtb_Product_d0 >= (EVAPFiltConst_DataStore())) ||
        rtIsNaN((EVAPFiltConst_DataStore())) ? rtb_Product_d0 :
        (EVAPFiltConst_DataStore());

      /* Logic: '<S711>/Logical Operator4' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S711>/motohawk_fault_status1'
       *  S-Function (motohawk_sfun_fault_status): '<S711>/motohawk_fault_status4'
       */
      rtb_LogicalOperator4 = (IsFaultActive(54) || IsFaultActive(55));

      /* Logic: '<S711>/Logical Operator1' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S711>/motohawk_fault_status2'
       *  S-Function (motohawk_sfun_fault_status): '<S711>/motohawk_fault_status3'
       */
      rtb_LogicalOperator1_b = (IsFaultSuspected(54) || IsFaultSuspected(55));

      /* S-Function Block: <S698>/motohawk_ain2 Resource: EVAPSensorPin */
      {
        extern NativeError_S EVAPSensorPin_AnalogInput_Get(uint16_T *adc,
          uint16_T *status);
        EVAPSensorPin_AnalogInput_Get
          (&BaseEngineController_LS_B.s698_motohawk_ain2, NULL);
      }

      /* DataTypeConversion: '<S711>/Data Type Conversion' */
      rtb_DataTypeConversion_k3 = (real_T)
        BaseEngineController_LS_B.s698_motohawk_ain2;

      /* S-Function Block: <S736>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (EVAPIdx_DataStore()) = TablePrelookup_real_T(rtb_DataTypeConversion_k3,
          (EVAPIdxArr_DataStore()), 13, (EVAPIdx_DataStore()));
        rtb_motohawk_prelookup_gz = (EVAPIdx_DataStore());
      }

      /* S-Function Block: <S736>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        BaseEngineController_LS_B.s736_motohawk_interpolation_1d =
          TableInterpolation1D_real_T(rtb_motohawk_prelookup_gz, (real_T *)
          ((EVAPTbl_DataStore())), 13);
      }

      /* UnitDelay: '<S711>/Unit Delay' */
      rtb_UnitDelay_i = BaseEngineController_LS_DWork.s711_UnitDelay_DSTATE;

      /* If: '<S711>/If' incorporates:
       *  Logic: '<S711>/Logical Operator5'
       *  Logic: '<S711>/Logical Operator6'
       */
      if ((!rtb_LogicalOperator4) && rtb_LogicalOperator1_b) {
        /* Outputs for IfAction SubSystem: '<S711>/If Action Subsystem' incorporates:
         *  ActionPort: '<S732>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay_i, &rtb_Merge_l);

        /* End of Outputs for SubSystem: '<S711>/If Action Subsystem' */
      } else if (rtb_LogicalOperator4) {
        /* Outputs for IfAction SubSystem: '<S711>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S733>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem((EVAPDefault_DataStore()),
          &rtb_Merge_l);

        /* End of Outputs for SubSystem: '<S711>/If Action Subsystem1' */
      } else {
        /* Outputs for IfAction SubSystem: '<S711>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S734>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem
          (BaseEngineController_LS_B.s736_motohawk_interpolation_1d,
           &rtb_Merge_l);

        /* End of Outputs for SubSystem: '<S711>/If Action Subsystem2' */
      }

      /* End of If: '<S711>/If' */

      /* Sum: '<S737>/Sum1' incorporates:
       *  Constant: '<S737>/Constant'
       *  Product: '<S737>/Product'
       *  Product: '<S737>/Product1'
       *  Sum: '<S737>/Sum'
       *  UnitDelay: '<S737>/Unit Delay'
       */
      rtb_Sum1_g = (1.0 - rtb_Product_d0) *
        BaseEngineController_LS_DWork.s737_UnitDelay_DSTATE + rtb_Merge_l *
        rtb_Product_d0;

      /* If: '<S735>/If' incorporates:
       *  Inport: '<S738>/In1'
       *  Inport: '<S739>/In1'
       *  S-Function (motohawk_sfun_calibration): '<S735>/new_value'
       *  S-Function (motohawk_sfun_calibration): '<S735>/override_enable'
       */
      if ((EVAP_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S735>/NewValue' incorporates:
         *  ActionPort: '<S738>/Action Port'
         */
        BaseEngineController_LS_B.s735_Merge = (EVAP_new_DataStore());

        /* End of Outputs for SubSystem: '<S735>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S735>/OldValue' incorporates:
         *  ActionPort: '<S739>/Action Port'
         */
        BaseEngineController_LS_B.s735_Merge = rtb_Sum1_g;

        /* End of Outputs for SubSystem: '<S735>/OldValue' */
      }

      /* End of If: '<S735>/If' */

      /* Logic: '<S711>/Logical Operator2' incorporates:
       *  RelationalOperator: '<S711>/Relational Operator2'
       *  S-Function (motohawk_sfun_calibration): '<S711>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_data_read): '<S711>/motohawk_data_read1'
       */
      rtb_LogicalOperator2_f = ((MPRD_DataStore() && (rtb_DataTypeConversion_k3 >
                                  (EVAPMax_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S711>/motohawk_fault_def2' */

      /* Set Fault Suspected Status: EVAPRangeHigh */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(54, rtb_LogicalOperator2_f);
        UpdateFault(54);
      }

      /* Logic: '<S711>/Logical Operator3' incorporates:
       *  RelationalOperator: '<S711>/Relational Operator3'
       *  S-Function (motohawk_sfun_calibration): '<S711>/motohawk_calibration6'
       *  S-Function (motohawk_sfun_data_read): '<S711>/motohawk_data_read1'
       */
      rtb_LogicalOperator3_j = ((MPRD_DataStore() && (rtb_DataTypeConversion_k3 <
                                  (EVAPMin_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S711>/motohawk_fault_def3' */

      /* Set Fault Suspected Status: EVAPRangeLow */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(55, rtb_LogicalOperator3_j);
        UpdateFault(55);
      }

      /* S-Function Block: <S713>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s713_motohawk_delta_time_DWORK1, NULL);
        rtb_Product_d0 = ((real_T) delta) * 0.000001;
      }

      /* Product: '<S713>/Product' incorporates:
       *  MinMax: '<S713>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S713>/motohawk_calibration'
       */
      rtb_Product_d0 /= (rtb_Product_d0 >= (CATFiltConst_DataStore())) ||
        rtIsNaN((CATFiltConst_DataStore())) ? rtb_Product_d0 :
        (CATFiltConst_DataStore());

      /* Logic: '<S709>/Logical Operator4' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S709>/motohawk_fault_status1'
       *  S-Function (motohawk_sfun_fault_status): '<S709>/motohawk_fault_status4'
       */
      rtb_LogicalOperator4 = (IsFaultActive(25) || IsFaultActive(26));

      /* Logic: '<S709>/Logical Operator1' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S709>/motohawk_fault_status2'
       *  S-Function (motohawk_sfun_fault_status): '<S709>/motohawk_fault_status3'
       */
      rtb_LogicalOperator1_b = (IsFaultSuspected(25) || IsFaultSuspected(26));

      /* S-Function Block: <S698>/motohawk_ain3 Resource: CATSensorPin */
      {
        extern NativeError_S CATSensorPin_AnalogInput_Get(uint16_T *adc,
          uint16_T *status);
        CATSensorPin_AnalogInput_Get
          (&BaseEngineController_LS_B.s698_motohawk_ain3, NULL);
      }

      /* DataTypeConversion: '<S709>/Data Type Conversion' */
      rtb_DataTypeConversion_i = (real_T)
        BaseEngineController_LS_B.s698_motohawk_ain3;

      /* S-Function Block: <S718>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (CATIdx_DataStore()) = TablePrelookup_real_T(rtb_DataTypeConversion_i,
          (CATIdxArr_DataStore()), 13, (CATIdx_DataStore()));
        rtb_motohawk_prelookup_b = (CATIdx_DataStore());
      }

      /* S-Function Block: <S718>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        BaseEngineController_LS_B.s718_motohawk_interpolation_1d =
          TableInterpolation1D_real_T(rtb_motohawk_prelookup_b, (real_T *)
          ((CATTbl_DataStore())), 13);
      }

      /* UnitDelay: '<S709>/Unit Delay' */
      rtb_UnitDelay_kw = BaseEngineController_LS_DWork.s709_UnitDelay_DSTATE;

      /* If: '<S709>/If' incorporates:
       *  Logic: '<S709>/Logical Operator5'
       *  Logic: '<S709>/Logical Operator6'
       */
      if ((!rtb_LogicalOperator4) && rtb_LogicalOperator1_b) {
        /* Outputs for IfAction SubSystem: '<S709>/If Action Subsystem' incorporates:
         *  ActionPort: '<S714>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay_kw,
          &rtb_Merge_l5);

        /* End of Outputs for SubSystem: '<S709>/If Action Subsystem' */
      } else if (rtb_LogicalOperator4) {
        /* Outputs for IfAction SubSystem: '<S709>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S715>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem((CATDefault_DataStore()),
          &rtb_Merge_l5);

        /* End of Outputs for SubSystem: '<S709>/If Action Subsystem1' */
      } else {
        /* Outputs for IfAction SubSystem: '<S709>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S716>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem
          (BaseEngineController_LS_B.s718_motohawk_interpolation_1d,
           &rtb_Merge_l5);

        /* End of Outputs for SubSystem: '<S709>/If Action Subsystem2' */
      }

      /* End of If: '<S709>/If' */

      /* Sum: '<S719>/Sum1' incorporates:
       *  Constant: '<S719>/Constant'
       *  Product: '<S719>/Product'
       *  Product: '<S719>/Product1'
       *  Sum: '<S719>/Sum'
       *  UnitDelay: '<S719>/Unit Delay'
       */
      rtb_Sum1_lf = (1.0 - rtb_Product_d0) *
        BaseEngineController_LS_DWork.s719_UnitDelay_DSTATE + rtb_Merge_l5 *
        rtb_Product_d0;

      /* If: '<S717>/If' incorporates:
       *  Inport: '<S720>/In1'
       *  Inport: '<S721>/In1'
       *  S-Function (motohawk_sfun_calibration): '<S717>/new_value'
       *  S-Function (motohawk_sfun_calibration): '<S717>/override_enable'
       */
      if ((CAT_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S717>/NewValue' incorporates:
         *  ActionPort: '<S720>/Action Port'
         */
        BaseEngineController_LS_B.s717_Merge = (CAT_new_DataStore());

        /* End of Outputs for SubSystem: '<S717>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S717>/OldValue' incorporates:
         *  ActionPort: '<S721>/Action Port'
         */
        BaseEngineController_LS_B.s717_Merge = rtb_Sum1_lf;

        /* End of Outputs for SubSystem: '<S717>/OldValue' */
      }

      /* End of If: '<S717>/If' */

      /* Logic: '<S709>/Logical Operator2' incorporates:
       *  RelationalOperator: '<S709>/Relational Operator2'
       *  S-Function (motohawk_sfun_calibration): '<S709>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_data_read): '<S709>/motohawk_data_read1'
       */
      rtb_LogicalOperator2_i = ((MPRD_DataStore() && (rtb_DataTypeConversion_i >
                                  (CATMax_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S709>/motohawk_fault_def2' */

      /* Set Fault Suspected Status: CATRangeHigh */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(25, rtb_LogicalOperator2_i);
        UpdateFault(25);
      }

      /* Logic: '<S709>/Logical Operator3' incorporates:
       *  RelationalOperator: '<S709>/Relational Operator3'
       *  S-Function (motohawk_sfun_calibration): '<S709>/motohawk_calibration6'
       *  S-Function (motohawk_sfun_data_read): '<S709>/motohawk_data_read1'
       */
      rtb_LogicalOperator3_p = ((MPRD_DataStore() && (rtb_DataTypeConversion_i <
                                  (CATMin_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S709>/motohawk_fault_def3' */

      /* Set Fault Suspected Status: CATRangeLow */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(26, rtb_LogicalOperator3_p);
        UpdateFault(26);
      }

      /* Update for UnitDelay: '<S710>/Unit Delay' */
      BaseEngineController_LS_DWork.s710_UnitDelay_DSTATE =
        BaseEngineController_LS_B.s710_Merge;

      /* Update for UnitDelay: '<S728>/Unit Delay' */
      BaseEngineController_LS_DWork.s728_UnitDelay_DSTATE = rtb_Sum1_h;

      /* Update for UnitDelay: '<S712>/Unit Delay' */
      BaseEngineController_LS_DWork.s712_UnitDelay_DSTATE =
        BaseEngineController_LS_B.s712_Merge;

      /* Update for UnitDelay: '<S746>/Unit Delay' */
      BaseEngineController_LS_DWork.s746_UnitDelay_DSTATE = rtb_Sum1_hn;

      /* Update for UnitDelay: '<S711>/Unit Delay' */
      BaseEngineController_LS_DWork.s711_UnitDelay_DSTATE = rtb_Merge_l;

      /* Update for UnitDelay: '<S737>/Unit Delay' */
      BaseEngineController_LS_DWork.s737_UnitDelay_DSTATE = rtb_Sum1_g;

      /* Update for UnitDelay: '<S709>/Unit Delay' */
      BaseEngineController_LS_DWork.s709_UnitDelay_DSTATE = rtb_Merge_l5;

      /* Update for UnitDelay: '<S719>/Unit Delay' */
      BaseEngineController_LS_DWork.s719_UnitDelay_DSTATE = rtb_Sum1_lf;
    }
  }
}
