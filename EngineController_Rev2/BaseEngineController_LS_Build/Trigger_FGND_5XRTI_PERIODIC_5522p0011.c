/*
 * Trigger_FGND_5XRTI_PERIODIC_5522p0011.c
 *
 * Code generation for model "BaseEngineController_LS.mdl".
 *
 * Model version              : 1.2103
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Sat Nov 12 20:28:28 2022
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
  }

  if (BaseEngineController_LS_DWork.s446_motohawk_trigger_DWORK1) {
    /* Output and update for function-call system: '<S446>/Temp Sensors' */
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

      /* S-Function Block: <S723>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s723_motohawk_delta_time_DWORK1, NULL);
        rtb_Product_d0 = ((real_T) delta) * 0.000001;
      }

      /* Product: '<S723>/Product' incorporates:
       *  MinMax: '<S723>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S723>/motohawk_calibration'
       */
      rtb_Product_d0 /= (rtb_Product_d0 >= (ECTFiltConst_DataStore())) ||
        rtIsNaN((ECTFiltConst_DataStore())) ? rtb_Product_d0 :
        (ECTFiltConst_DataStore());

      /* Logic: '<S711>/Logical Operator4' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S711>/motohawk_fault_status1'
       *  S-Function (motohawk_sfun_fault_status): '<S711>/motohawk_fault_status4'
       */
      rtb_LogicalOperator4 = (IsFaultActive(32) || IsFaultActive(33));

      /* Logic: '<S711>/Logical Operator1' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S711>/motohawk_fault_status2'
       *  S-Function (motohawk_sfun_fault_status): '<S711>/motohawk_fault_status3'
       */
      rtb_LogicalOperator1_b = (IsFaultSuspected(32) || IsFaultSuspected(33));

      /* S-Function Block: <S699>/motohawk_ain Resource: ECTSensorPin */
      {
        extern NativeError_S ECTSensorPin_AnalogInput_Get(uint16_T *adc,
          uint16_T *status);
        ECTSensorPin_AnalogInput_Get
          (&BaseEngineController_LS_B.s699_motohawk_ain, NULL);
      }

      /* DataTypeConversion: '<S711>/Data Type Conversion' */
      rtb_DataTypeConversion_o = (real_T)
        BaseEngineController_LS_B.s699_motohawk_ain;

      /* S-Function Block: <S728>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (ECTIdx_DataStore()) = TablePrelookup_real_T(rtb_DataTypeConversion_o,
          (ECTIdxArr_DataStore()), 13, (ECTIdx_DataStore()));
        rtb_motohawk_prelookup_h = (ECTIdx_DataStore());
      }

      /* S-Function Block: <S728>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        BaseEngineController_LS_B.s728_motohawk_interpolation_1d =
          TableInterpolation1D_real_T(rtb_motohawk_prelookup_h, (real_T *)
          ((ECTTbl_DataStore())), 13);
      }

      /* UnitDelay: '<S711>/Unit Delay' */
      rtb_UnitDelay_di = BaseEngineController_LS_DWork.s711_UnitDelay_DSTATE;

      /* If: '<S711>/If' incorporates:
       *  Logic: '<S711>/Logical Operator5'
       *  Logic: '<S711>/Logical Operator6'
       */
      if ((!rtb_LogicalOperator4) && rtb_LogicalOperator1_b) {
        /* Outputs for IfAction SubSystem: '<S711>/If Action Subsystem' incorporates:
         *  ActionPort: '<S724>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay_di,
          &BaseEngineController_LS_B.s711_Merge);

        /* End of Outputs for SubSystem: '<S711>/If Action Subsystem' */
      } else if (rtb_LogicalOperator4) {
        /* Outputs for IfAction SubSystem: '<S711>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S725>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem((ECTDefault_DataStore()),
          &BaseEngineController_LS_B.s711_Merge);

        /* End of Outputs for SubSystem: '<S711>/If Action Subsystem1' */
      } else {
        /* Outputs for IfAction SubSystem: '<S711>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S726>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem
          (BaseEngineController_LS_B.s728_motohawk_interpolation_1d,
           &BaseEngineController_LS_B.s711_Merge);

        /* End of Outputs for SubSystem: '<S711>/If Action Subsystem2' */
      }

      /* End of If: '<S711>/If' */

      /* Sum: '<S729>/Sum1' incorporates:
       *  Constant: '<S729>/Constant'
       *  Product: '<S729>/Product'
       *  Product: '<S729>/Product1'
       *  Sum: '<S729>/Sum'
       *  UnitDelay: '<S729>/Unit Delay'
       */
      rtb_Sum1_h = (1.0 - rtb_Product_d0) *
        BaseEngineController_LS_DWork.s729_UnitDelay_DSTATE +
        BaseEngineController_LS_B.s711_Merge * rtb_Product_d0;

      /* If: '<S727>/If' incorporates:
       *  Inport: '<S730>/In1'
       *  Inport: '<S731>/In1'
       *  S-Function (motohawk_sfun_calibration): '<S727>/new_value'
       *  S-Function (motohawk_sfun_calibration): '<S727>/override_enable'
       */
      if ((ECT_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S727>/NewValue' incorporates:
         *  ActionPort: '<S730>/Action Port'
         */
        BaseEngineController_LS_B.s727_Merge = (ECT_new_DataStore());

        /* End of Outputs for SubSystem: '<S727>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S727>/OldValue' incorporates:
         *  ActionPort: '<S731>/Action Port'
         */
        BaseEngineController_LS_B.s727_Merge = rtb_Sum1_h;

        /* End of Outputs for SubSystem: '<S727>/OldValue' */
      }

      /* End of If: '<S727>/If' */

      /* Logic: '<S711>/Logical Operator2' incorporates:
       *  RelationalOperator: '<S711>/Relational Operator2'
       *  S-Function (motohawk_sfun_calibration): '<S711>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_data_read): '<S711>/motohawk_data_read1'
       */
      rtb_LogicalOperator2_k = ((MPRD_DataStore() && (rtb_DataTypeConversion_o >
                                  (ECTMax_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S711>/motohawk_fault_def2' */

      /* Set Fault Suspected Status: ECTRangeHigh */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(32, rtb_LogicalOperator2_k);
        UpdateFault(32);
      }

      /* Logic: '<S711>/Logical Operator3' incorporates:
       *  RelationalOperator: '<S711>/Relational Operator3'
       *  S-Function (motohawk_sfun_calibration): '<S711>/motohawk_calibration6'
       *  S-Function (motohawk_sfun_data_read): '<S711>/motohawk_data_read1'
       */
      rtb_LogicalOperator3_h = ((MPRD_DataStore() && (rtb_DataTypeConversion_o <
                                  (ECTMin_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S711>/motohawk_fault_def3' */

      /* Set Fault Suspected Status: ECTRangeLow */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(33, rtb_LogicalOperator3_h);
        UpdateFault(33);
      }

      /* S-Function Block: <S741>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s741_motohawk_delta_time_DWORK1, NULL);
        rtb_Product_d0 = ((real_T) delta) * 0.000001;
      }

      /* Product: '<S741>/Product' incorporates:
       *  MinMax: '<S741>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S741>/motohawk_calibration'
       */
      rtb_Product_d0 /= (rtb_Product_d0 >= (IATFiltConst_DataStore())) ||
        rtIsNaN((IATFiltConst_DataStore())) ? rtb_Product_d0 :
        (IATFiltConst_DataStore());

      /* Logic: '<S713>/Logical Operator4' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S713>/motohawk_fault_status1'
       *  S-Function (motohawk_sfun_fault_status): '<S713>/motohawk_fault_status4'
       */
      rtb_LogicalOperator4 = (IsFaultActive(71) || IsFaultActive(72));

      /* Logic: '<S713>/Logical Operator1' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S713>/motohawk_fault_status2'
       *  S-Function (motohawk_sfun_fault_status): '<S713>/motohawk_fault_status3'
       */
      rtb_LogicalOperator1_b = (IsFaultSuspected(71) || IsFaultSuspected(72));

      /* S-Function Block: <S699>/motohawk_ain1 Resource: IATSensorPin */
      {
        extern NativeError_S IATSensorPin_AnalogInput_Get(uint16_T *adc,
          uint16_T *status);
        IATSensorPin_AnalogInput_Get
          (&BaseEngineController_LS_B.s699_motohawk_ain1, NULL);
      }

      /* DataTypeConversion: '<S713>/Data Type Conversion' */
      rtb_DataTypeConversion_k = (real_T)
        BaseEngineController_LS_B.s699_motohawk_ain1;

      /* S-Function Block: <S746>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (IATIdx_DataStore()) = TablePrelookup_real_T(rtb_DataTypeConversion_k,
          (IATIdxArr_DataStore()), 13, (IATIdx_DataStore()));
        rtb_motohawk_prelookup_a = (IATIdx_DataStore());
      }

      /* S-Function Block: <S746>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        BaseEngineController_LS_B.s746_motohawk_interpolation_1d =
          TableInterpolation1D_real_T(rtb_motohawk_prelookup_a, (real_T *)
          ((IATTbl_DataStore())), 13);
      }

      /* UnitDelay: '<S713>/Unit Delay' */
      rtb_UnitDelay_jh = BaseEngineController_LS_DWork.s713_UnitDelay_DSTATE;

      /* If: '<S713>/If' incorporates:
       *  Logic: '<S713>/Logical Operator5'
       *  Logic: '<S713>/Logical Operator6'
       */
      if ((!rtb_LogicalOperator4) && rtb_LogicalOperator1_b) {
        /* Outputs for IfAction SubSystem: '<S713>/If Action Subsystem' incorporates:
         *  ActionPort: '<S742>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay_jh,
          &BaseEngineController_LS_B.s713_Merge);

        /* End of Outputs for SubSystem: '<S713>/If Action Subsystem' */
      } else if (rtb_LogicalOperator4) {
        /* Outputs for IfAction SubSystem: '<S713>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S743>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem((IATDefault_DataStore()),
          &BaseEngineController_LS_B.s713_Merge);

        /* End of Outputs for SubSystem: '<S713>/If Action Subsystem1' */
      } else {
        /* Outputs for IfAction SubSystem: '<S713>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S744>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem
          (BaseEngineController_LS_B.s746_motohawk_interpolation_1d,
           &BaseEngineController_LS_B.s713_Merge);

        /* End of Outputs for SubSystem: '<S713>/If Action Subsystem2' */
      }

      /* End of If: '<S713>/If' */

      /* Sum: '<S747>/Sum1' incorporates:
       *  Constant: '<S747>/Constant'
       *  Product: '<S747>/Product'
       *  Product: '<S747>/Product1'
       *  Sum: '<S747>/Sum'
       *  UnitDelay: '<S747>/Unit Delay'
       */
      rtb_Sum1_hn = (1.0 - rtb_Product_d0) *
        BaseEngineController_LS_DWork.s747_UnitDelay_DSTATE +
        BaseEngineController_LS_B.s713_Merge * rtb_Product_d0;

      /* If: '<S745>/If' incorporates:
       *  Inport: '<S748>/In1'
       *  Inport: '<S749>/In1'
       *  S-Function (motohawk_sfun_calibration): '<S745>/new_value'
       *  S-Function (motohawk_sfun_calibration): '<S745>/override_enable'
       */
      if ((IAT_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S745>/NewValue' incorporates:
         *  ActionPort: '<S748>/Action Port'
         */
        BaseEngineController_LS_B.s745_Merge = (IAT_new_DataStore());

        /* End of Outputs for SubSystem: '<S745>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S745>/OldValue' incorporates:
         *  ActionPort: '<S749>/Action Port'
         */
        BaseEngineController_LS_B.s745_Merge = rtb_Sum1_hn;

        /* End of Outputs for SubSystem: '<S745>/OldValue' */
      }

      /* End of If: '<S745>/If' */

      /* Logic: '<S713>/Logical Operator2' incorporates:
       *  RelationalOperator: '<S713>/Relational Operator2'
       *  S-Function (motohawk_sfun_calibration): '<S713>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_data_read): '<S713>/motohawk_data_read1'
       */
      rtb_LogicalOperator2_p = ((MPRD_DataStore() && (rtb_DataTypeConversion_k >
                                  (IATMax_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S713>/motohawk_fault_def2' */

      /* Set Fault Suspected Status: IATRangeHigh */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(71, rtb_LogicalOperator2_p);
        UpdateFault(71);
      }

      /* Logic: '<S713>/Logical Operator3' incorporates:
       *  RelationalOperator: '<S713>/Relational Operator3'
       *  S-Function (motohawk_sfun_calibration): '<S713>/motohawk_calibration6'
       *  S-Function (motohawk_sfun_data_read): '<S713>/motohawk_data_read1'
       */
      rtb_LogicalOperator3_ht = ((MPRD_DataStore() && (rtb_DataTypeConversion_k <
                                   (IATMin_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S713>/motohawk_fault_def3' */

      /* Set Fault Suspected Status: IATRangeLow */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(72, rtb_LogicalOperator3_ht);
        UpdateFault(72);
      }

      /* S-Function Block: <S732>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s732_motohawk_delta_time_DWORK1, NULL);
        rtb_Product_d0 = ((real_T) delta) * 0.000001;
      }

      /* Product: '<S732>/Product' incorporates:
       *  MinMax: '<S732>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S732>/motohawk_calibration'
       */
      rtb_Product_d0 /= (rtb_Product_d0 >= (EVAPFiltConst_DataStore())) ||
        rtIsNaN((EVAPFiltConst_DataStore())) ? rtb_Product_d0 :
        (EVAPFiltConst_DataStore());

      /* Logic: '<S712>/Logical Operator4' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S712>/motohawk_fault_status1'
       *  S-Function (motohawk_sfun_fault_status): '<S712>/motohawk_fault_status4'
       */
      rtb_LogicalOperator4 = (IsFaultActive(54) || IsFaultActive(55));

      /* Logic: '<S712>/Logical Operator1' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S712>/motohawk_fault_status2'
       *  S-Function (motohawk_sfun_fault_status): '<S712>/motohawk_fault_status3'
       */
      rtb_LogicalOperator1_b = (IsFaultSuspected(54) || IsFaultSuspected(55));

      /* S-Function Block: <S699>/motohawk_ain2 Resource: EVAPSensorPin */
      {
        extern NativeError_S EVAPSensorPin_AnalogInput_Get(uint16_T *adc,
          uint16_T *status);
        EVAPSensorPin_AnalogInput_Get
          (&BaseEngineController_LS_B.s699_motohawk_ain2, NULL);
      }

      /* DataTypeConversion: '<S712>/Data Type Conversion' */
      rtb_DataTypeConversion_k3 = (real_T)
        BaseEngineController_LS_B.s699_motohawk_ain2;

      /* S-Function Block: <S737>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (EVAPIdx_DataStore()) = TablePrelookup_real_T(rtb_DataTypeConversion_k3,
          (EVAPIdxArr_DataStore()), 13, (EVAPIdx_DataStore()));
        rtb_motohawk_prelookup_gz = (EVAPIdx_DataStore());
      }

      /* S-Function Block: <S737>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        BaseEngineController_LS_B.s737_motohawk_interpolation_1d =
          TableInterpolation1D_real_T(rtb_motohawk_prelookup_gz, (real_T *)
          ((EVAPTbl_DataStore())), 13);
      }

      /* UnitDelay: '<S712>/Unit Delay' */
      rtb_UnitDelay_i = BaseEngineController_LS_DWork.s712_UnitDelay_DSTATE;

      /* If: '<S712>/If' incorporates:
       *  Logic: '<S712>/Logical Operator5'
       *  Logic: '<S712>/Logical Operator6'
       */
      if ((!rtb_LogicalOperator4) && rtb_LogicalOperator1_b) {
        /* Outputs for IfAction SubSystem: '<S712>/If Action Subsystem' incorporates:
         *  ActionPort: '<S733>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay_i, &rtb_Merge_l);

        /* End of Outputs for SubSystem: '<S712>/If Action Subsystem' */
      } else if (rtb_LogicalOperator4) {
        /* Outputs for IfAction SubSystem: '<S712>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S734>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem((EVAPDefault_DataStore()),
          &rtb_Merge_l);

        /* End of Outputs for SubSystem: '<S712>/If Action Subsystem1' */
      } else {
        /* Outputs for IfAction SubSystem: '<S712>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S735>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem
          (BaseEngineController_LS_B.s737_motohawk_interpolation_1d,
           &rtb_Merge_l);

        /* End of Outputs for SubSystem: '<S712>/If Action Subsystem2' */
      }

      /* End of If: '<S712>/If' */

      /* Sum: '<S738>/Sum1' incorporates:
       *  Constant: '<S738>/Constant'
       *  Product: '<S738>/Product'
       *  Product: '<S738>/Product1'
       *  Sum: '<S738>/Sum'
       *  UnitDelay: '<S738>/Unit Delay'
       */
      rtb_Sum1_g = (1.0 - rtb_Product_d0) *
        BaseEngineController_LS_DWork.s738_UnitDelay_DSTATE + rtb_Merge_l *
        rtb_Product_d0;

      /* If: '<S736>/If' incorporates:
       *  Inport: '<S739>/In1'
       *  Inport: '<S740>/In1'
       *  S-Function (motohawk_sfun_calibration): '<S736>/new_value'
       *  S-Function (motohawk_sfun_calibration): '<S736>/override_enable'
       */
      if ((EVAP_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S736>/NewValue' incorporates:
         *  ActionPort: '<S739>/Action Port'
         */
        BaseEngineController_LS_B.s736_Merge = (EVAP_new_DataStore());

        /* End of Outputs for SubSystem: '<S736>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S736>/OldValue' incorporates:
         *  ActionPort: '<S740>/Action Port'
         */
        BaseEngineController_LS_B.s736_Merge = rtb_Sum1_g;

        /* End of Outputs for SubSystem: '<S736>/OldValue' */
      }

      /* End of If: '<S736>/If' */

      /* Logic: '<S712>/Logical Operator2' incorporates:
       *  RelationalOperator: '<S712>/Relational Operator2'
       *  S-Function (motohawk_sfun_calibration): '<S712>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_data_read): '<S712>/motohawk_data_read1'
       */
      rtb_LogicalOperator2_f = ((MPRD_DataStore() && (rtb_DataTypeConversion_k3 >
                                  (EVAPMax_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S712>/motohawk_fault_def2' */

      /* Set Fault Suspected Status: EVAPRangeHigh */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(54, rtb_LogicalOperator2_f);
        UpdateFault(54);
      }

      /* Logic: '<S712>/Logical Operator3' incorporates:
       *  RelationalOperator: '<S712>/Relational Operator3'
       *  S-Function (motohawk_sfun_calibration): '<S712>/motohawk_calibration6'
       *  S-Function (motohawk_sfun_data_read): '<S712>/motohawk_data_read1'
       */
      rtb_LogicalOperator3_j = ((MPRD_DataStore() && (rtb_DataTypeConversion_k3 <
                                  (EVAPMin_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S712>/motohawk_fault_def3' */

      /* Set Fault Suspected Status: EVAPRangeLow */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(55, rtb_LogicalOperator3_j);
        UpdateFault(55);
      }

      /* S-Function Block: <S714>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s714_motohawk_delta_time_DWORK1, NULL);
        rtb_Product_d0 = ((real_T) delta) * 0.000001;
      }

      /* Product: '<S714>/Product' incorporates:
       *  MinMax: '<S714>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S714>/motohawk_calibration'
       */
      rtb_Product_d0 /= (rtb_Product_d0 >= (CATFiltConst_DataStore())) ||
        rtIsNaN((CATFiltConst_DataStore())) ? rtb_Product_d0 :
        (CATFiltConst_DataStore());

      /* Logic: '<S710>/Logical Operator4' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S710>/motohawk_fault_status1'
       *  S-Function (motohawk_sfun_fault_status): '<S710>/motohawk_fault_status4'
       */
      rtb_LogicalOperator4 = (IsFaultActive(25) || IsFaultActive(26));

      /* Logic: '<S710>/Logical Operator1' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S710>/motohawk_fault_status2'
       *  S-Function (motohawk_sfun_fault_status): '<S710>/motohawk_fault_status3'
       */
      rtb_LogicalOperator1_b = (IsFaultSuspected(25) || IsFaultSuspected(26));

      /* S-Function Block: <S699>/motohawk_ain3 Resource: CATSensorPin */
      {
        extern NativeError_S CATSensorPin_AnalogInput_Get(uint16_T *adc,
          uint16_T *status);
        CATSensorPin_AnalogInput_Get
          (&BaseEngineController_LS_B.s699_motohawk_ain3, NULL);
      }

      /* DataTypeConversion: '<S710>/Data Type Conversion' */
      rtb_DataTypeConversion_i = (real_T)
        BaseEngineController_LS_B.s699_motohawk_ain3;

      /* S-Function Block: <S719>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (CATIdx_DataStore()) = TablePrelookup_real_T(rtb_DataTypeConversion_i,
          (CATIdxArr_DataStore()), 13, (CATIdx_DataStore()));
        rtb_motohawk_prelookup_b = (CATIdx_DataStore());
      }

      /* S-Function Block: <S719>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        BaseEngineController_LS_B.s719_motohawk_interpolation_1d =
          TableInterpolation1D_real_T(rtb_motohawk_prelookup_b, (real_T *)
          ((CATTbl_DataStore())), 13);
      }

      /* UnitDelay: '<S710>/Unit Delay' */
      rtb_UnitDelay_kw = BaseEngineController_LS_DWork.s710_UnitDelay_DSTATE;

      /* If: '<S710>/If' incorporates:
       *  Logic: '<S710>/Logical Operator5'
       *  Logic: '<S710>/Logical Operator6'
       */
      if ((!rtb_LogicalOperator4) && rtb_LogicalOperator1_b) {
        /* Outputs for IfAction SubSystem: '<S710>/If Action Subsystem' incorporates:
         *  ActionPort: '<S715>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay_kw,
          &rtb_Merge_l5);

        /* End of Outputs for SubSystem: '<S710>/If Action Subsystem' */
      } else if (rtb_LogicalOperator4) {
        /* Outputs for IfAction SubSystem: '<S710>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S716>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem((CATDefault_DataStore()),
          &rtb_Merge_l5);

        /* End of Outputs for SubSystem: '<S710>/If Action Subsystem1' */
      } else {
        /* Outputs for IfAction SubSystem: '<S710>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S717>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem
          (BaseEngineController_LS_B.s719_motohawk_interpolation_1d,
           &rtb_Merge_l5);

        /* End of Outputs for SubSystem: '<S710>/If Action Subsystem2' */
      }

      /* End of If: '<S710>/If' */

      /* Sum: '<S720>/Sum1' incorporates:
       *  Constant: '<S720>/Constant'
       *  Product: '<S720>/Product'
       *  Product: '<S720>/Product1'
       *  Sum: '<S720>/Sum'
       *  UnitDelay: '<S720>/Unit Delay'
       */
      rtb_Sum1_lf = (1.0 - rtb_Product_d0) *
        BaseEngineController_LS_DWork.s720_UnitDelay_DSTATE + rtb_Merge_l5 *
        rtb_Product_d0;

      /* If: '<S718>/If' incorporates:
       *  Inport: '<S721>/In1'
       *  Inport: '<S722>/In1'
       *  S-Function (motohawk_sfun_calibration): '<S718>/new_value'
       *  S-Function (motohawk_sfun_calibration): '<S718>/override_enable'
       */
      if ((CAT_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S718>/NewValue' incorporates:
         *  ActionPort: '<S721>/Action Port'
         */
        BaseEngineController_LS_B.s718_Merge = (CAT_new_DataStore());

        /* End of Outputs for SubSystem: '<S718>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S718>/OldValue' incorporates:
         *  ActionPort: '<S722>/Action Port'
         */
        BaseEngineController_LS_B.s718_Merge = rtb_Sum1_lf;

        /* End of Outputs for SubSystem: '<S718>/OldValue' */
      }

      /* End of If: '<S718>/If' */

      /* Logic: '<S710>/Logical Operator2' incorporates:
       *  RelationalOperator: '<S710>/Relational Operator2'
       *  S-Function (motohawk_sfun_calibration): '<S710>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_data_read): '<S710>/motohawk_data_read1'
       */
      rtb_LogicalOperator2_i = ((MPRD_DataStore() && (rtb_DataTypeConversion_i >
                                  (CATMax_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S710>/motohawk_fault_def2' */

      /* Set Fault Suspected Status: CATRangeHigh */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(25, rtb_LogicalOperator2_i);
        UpdateFault(25);
      }

      /* Logic: '<S710>/Logical Operator3' incorporates:
       *  RelationalOperator: '<S710>/Relational Operator3'
       *  S-Function (motohawk_sfun_calibration): '<S710>/motohawk_calibration6'
       *  S-Function (motohawk_sfun_data_read): '<S710>/motohawk_data_read1'
       */
      rtb_LogicalOperator3_p = ((MPRD_DataStore() && (rtb_DataTypeConversion_i <
                                  (CATMin_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S710>/motohawk_fault_def3' */

      /* Set Fault Suspected Status: CATRangeLow */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(26, rtb_LogicalOperator3_p);
        UpdateFault(26);
      }

      /* Update for UnitDelay: '<S711>/Unit Delay' */
      BaseEngineController_LS_DWork.s711_UnitDelay_DSTATE =
        BaseEngineController_LS_B.s711_Merge;

      /* Update for UnitDelay: '<S729>/Unit Delay' */
      BaseEngineController_LS_DWork.s729_UnitDelay_DSTATE = rtb_Sum1_h;

      /* Update for UnitDelay: '<S713>/Unit Delay' */
      BaseEngineController_LS_DWork.s713_UnitDelay_DSTATE =
        BaseEngineController_LS_B.s713_Merge;

      /* Update for UnitDelay: '<S747>/Unit Delay' */
      BaseEngineController_LS_DWork.s747_UnitDelay_DSTATE = rtb_Sum1_hn;

      /* Update for UnitDelay: '<S712>/Unit Delay' */
      BaseEngineController_LS_DWork.s712_UnitDelay_DSTATE = rtb_Merge_l;

      /* Update for UnitDelay: '<S738>/Unit Delay' */
      BaseEngineController_LS_DWork.s738_UnitDelay_DSTATE = rtb_Sum1_g;

      /* Update for UnitDelay: '<S710>/Unit Delay' */
      BaseEngineController_LS_DWork.s710_UnitDelay_DSTATE = rtb_Merge_l5;

      /* Update for UnitDelay: '<S720>/Unit Delay' */
      BaseEngineController_LS_DWork.s720_UnitDelay_DSTATE = rtb_Sum1_lf;
    }
  }
}
