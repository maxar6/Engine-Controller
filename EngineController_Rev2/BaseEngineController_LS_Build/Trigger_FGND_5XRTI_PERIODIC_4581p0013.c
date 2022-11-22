/*
 * Trigger_FGND_5XRTI_PERIODIC_4581p0013.c
 *
 * Code generation for model "BaseEngineController_LS.mdl".
 *
 * Model version              : 1.2185
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Mon Nov 21 23:22:06 2022
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_LS.h"
#include "BaseEngineController_LS_private.h"

void Trigger_FGND_5XRTI_PERIODIC_4581p0013(void)
{
  /* Named constants for Stateflow: '<S932>/ECUP Latch' */
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

  if (BaseEngineController_LS_DWork.s485_motohawk_trigger_DWORK1) {
    /* Output and update for function-call system: '<S485>/Temp Sensors' */
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

      /* S-Function Block: <S663>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s663_motohawk_delta_time_DWORK1, NULL);
        rtb_Product_d0 = ((real_T) delta) * 0.000001;
      }

      /* Product: '<S663>/Product' incorporates:
       *  MinMax: '<S663>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S663>/motohawk_calibration'
       */
      rtb_Product_d0 /= (rtb_Product_d0 >= (ECTFiltConst_DataStore())) ||
        rtIsNaN((ECTFiltConst_DataStore())) ? rtb_Product_d0 :
        (ECTFiltConst_DataStore());

      /* Logic: '<S651>/Logical Operator4' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S651>/motohawk_fault_status1'
       *  S-Function (motohawk_sfun_fault_status): '<S651>/motohawk_fault_status4'
       */
      rtb_LogicalOperator4_k = (IsFaultActive(43) || IsFaultActive(44));

      /* Logic: '<S651>/Logical Operator1' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S651>/motohawk_fault_status2'
       *  S-Function (motohawk_sfun_fault_status): '<S651>/motohawk_fault_status3'
       */
      rtb_LogicalOperator1_b = (IsFaultSuspected(43) || IsFaultSuspected(44));

      /* S-Function Block: <S639>/motohawk_ain Resource: ECTSensorPin */
      {
        extern NativeError_S ECTSensorPin_AnalogInput_Get(uint16_T *adc,
          uint16_T *status);
        ECTSensorPin_AnalogInput_Get
          (&BaseEngineController_LS_B.s639_motohawk_ain, NULL);
      }

      /* DataTypeConversion: '<S651>/Data Type Conversion' */
      rtb_DataTypeConversion_o = (real_T)
        BaseEngineController_LS_B.s639_motohawk_ain;

      /* S-Function Block: <S668>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (ECTIdx_DataStore()) = TablePrelookup_real_T(rtb_DataTypeConversion_o,
          (ECTIdxArr_DataStore()), 13, (ECTIdx_DataStore()));
        rtb_motohawk_prelookup_h = (ECTIdx_DataStore());
      }

      /* S-Function Block: <S668>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        BaseEngineController_LS_B.s668_motohawk_interpolation_1d =
          TableInterpolation1D_real_T(rtb_motohawk_prelookup_h, (real_T *)
          ((ECTTbl_DataStore())), 13);
      }

      /* UnitDelay: '<S651>/Unit Delay' */
      rtb_UnitDelay_di = BaseEngineController_LS_DWork.s651_UnitDelay_DSTATE;

      /* If: '<S651>/If' incorporates:
       *  Logic: '<S651>/Logical Operator5'
       *  Logic: '<S651>/Logical Operator6'
       */
      if ((!rtb_LogicalOperator4_k) && rtb_LogicalOperator1_b) {
        /* Outputs for IfAction SubSystem: '<S651>/If Action Subsystem' incorporates:
         *  ActionPort: '<S664>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay_di,
          &BaseEngineController_LS_B.s651_Merge);

        /* End of Outputs for SubSystem: '<S651>/If Action Subsystem' */
      } else if (rtb_LogicalOperator4_k) {
        /* Outputs for IfAction SubSystem: '<S651>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S665>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem((ECTDefault_DataStore()),
          &BaseEngineController_LS_B.s651_Merge);

        /* End of Outputs for SubSystem: '<S651>/If Action Subsystem1' */
      } else {
        /* Outputs for IfAction SubSystem: '<S651>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S666>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem
          (BaseEngineController_LS_B.s668_motohawk_interpolation_1d,
           &BaseEngineController_LS_B.s651_Merge);

        /* End of Outputs for SubSystem: '<S651>/If Action Subsystem2' */
      }

      /* End of If: '<S651>/If' */

      /* Sum: '<S669>/Sum1' incorporates:
       *  Constant: '<S669>/Constant'
       *  Product: '<S669>/Product'
       *  Product: '<S669>/Product1'
       *  Sum: '<S669>/Sum'
       *  UnitDelay: '<S669>/Unit Delay'
       */
      rtb_Sum1_hs = (1.0 - rtb_Product_d0) *
        BaseEngineController_LS_DWork.s669_UnitDelay_DSTATE +
        BaseEngineController_LS_B.s651_Merge * rtb_Product_d0;

      /* If: '<S667>/If' incorporates:
       *  Inport: '<S670>/In1'
       *  Inport: '<S671>/In1'
       *  S-Function (motohawk_sfun_calibration): '<S667>/new_value'
       *  S-Function (motohawk_sfun_calibration): '<S667>/override_enable'
       */
      if ((ECT_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S667>/NewValue' incorporates:
         *  ActionPort: '<S670>/Action Port'
         */
        BaseEngineController_LS_B.s667_Merge = (ECT_new_DataStore());

        /* End of Outputs for SubSystem: '<S667>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S667>/OldValue' incorporates:
         *  ActionPort: '<S671>/Action Port'
         */
        BaseEngineController_LS_B.s667_Merge = rtb_Sum1_hs;

        /* End of Outputs for SubSystem: '<S667>/OldValue' */
      }

      /* End of If: '<S667>/If' */

      /* Logic: '<S651>/Logical Operator2' incorporates:
       *  RelationalOperator: '<S651>/Relational Operator2'
       *  S-Function (motohawk_sfun_calibration): '<S651>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_data_read): '<S651>/motohawk_data_read1'
       */
      rtb_LogicalOperator2_k = ((MPRD_DataStore() && (rtb_DataTypeConversion_o >
                                  (ECTMax_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S651>/motohawk_fault_def2' */

      /* Set Fault Suspected Status: ECTRangeHigh */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(43, rtb_LogicalOperator2_k);
        UpdateFault(43);
      }

      /* Logic: '<S651>/Logical Operator3' incorporates:
       *  RelationalOperator: '<S651>/Relational Operator3'
       *  S-Function (motohawk_sfun_calibration): '<S651>/motohawk_calibration6'
       *  S-Function (motohawk_sfun_data_read): '<S651>/motohawk_data_read1'
       */
      rtb_LogicalOperator3_h = ((MPRD_DataStore() && (rtb_DataTypeConversion_o <
                                  (ECTMin_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S651>/motohawk_fault_def3' */

      /* Set Fault Suspected Status: ECTRangeLow */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(44, rtb_LogicalOperator3_h);
        UpdateFault(44);
      }

      /* S-Function Block: <S681>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s681_motohawk_delta_time_DWORK1, NULL);
        rtb_Product_d0 = ((real_T) delta) * 0.000001;
      }

      /* Product: '<S681>/Product' incorporates:
       *  MinMax: '<S681>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S681>/motohawk_calibration'
       */
      rtb_Product_d0 /= (rtb_Product_d0 >= (IATFiltConst_DataStore())) ||
        rtIsNaN((IATFiltConst_DataStore())) ? rtb_Product_d0 :
        (IATFiltConst_DataStore());

      /* Logic: '<S653>/Logical Operator4' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S653>/motohawk_fault_status1'
       *  S-Function (motohawk_sfun_fault_status): '<S653>/motohawk_fault_status4'
       */
      rtb_LogicalOperator4_k = (IsFaultActive(84) || IsFaultActive(85));

      /* Logic: '<S653>/Logical Operator1' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S653>/motohawk_fault_status2'
       *  S-Function (motohawk_sfun_fault_status): '<S653>/motohawk_fault_status3'
       */
      rtb_LogicalOperator1_b = (IsFaultSuspected(84) || IsFaultSuspected(85));

      /* S-Function Block: <S639>/motohawk_ain1 Resource: IATSensorPin */
      {
        extern NativeError_S IATSensorPin_AnalogInput_Get(uint16_T *adc,
          uint16_T *status);
        IATSensorPin_AnalogInput_Get
          (&BaseEngineController_LS_B.s639_motohawk_ain1, NULL);
      }

      /* DataTypeConversion: '<S653>/Data Type Conversion' */
      rtb_DataTypeConversion_k = (real_T)
        BaseEngineController_LS_B.s639_motohawk_ain1;

      /* S-Function Block: <S686>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (IATIdx_DataStore()) = TablePrelookup_real_T(rtb_DataTypeConversion_k,
          (IATIdxArr_DataStore()), 13, (IATIdx_DataStore()));
        rtb_motohawk_prelookup_a = (IATIdx_DataStore());
      }

      /* S-Function Block: <S686>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        BaseEngineController_LS_B.s686_motohawk_interpolation_1d =
          TableInterpolation1D_real_T(rtb_motohawk_prelookup_a, (real_T *)
          ((IATTbl_DataStore())), 13);
      }

      /* UnitDelay: '<S653>/Unit Delay' */
      rtb_UnitDelay_jh = BaseEngineController_LS_DWork.s653_UnitDelay_DSTATE;

      /* If: '<S653>/If' incorporates:
       *  Logic: '<S653>/Logical Operator5'
       *  Logic: '<S653>/Logical Operator6'
       */
      if ((!rtb_LogicalOperator4_k) && rtb_LogicalOperator1_b) {
        /* Outputs for IfAction SubSystem: '<S653>/If Action Subsystem' incorporates:
         *  ActionPort: '<S682>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay_jh,
          &BaseEngineController_LS_B.s653_Merge);

        /* End of Outputs for SubSystem: '<S653>/If Action Subsystem' */
      } else if (rtb_LogicalOperator4_k) {
        /* Outputs for IfAction SubSystem: '<S653>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S683>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem((IATDefault_DataStore()),
          &BaseEngineController_LS_B.s653_Merge);

        /* End of Outputs for SubSystem: '<S653>/If Action Subsystem1' */
      } else {
        /* Outputs for IfAction SubSystem: '<S653>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S684>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem
          (BaseEngineController_LS_B.s686_motohawk_interpolation_1d,
           &BaseEngineController_LS_B.s653_Merge);

        /* End of Outputs for SubSystem: '<S653>/If Action Subsystem2' */
      }

      /* End of If: '<S653>/If' */

      /* Sum: '<S687>/Sum1' incorporates:
       *  Constant: '<S687>/Constant'
       *  Product: '<S687>/Product'
       *  Product: '<S687>/Product1'
       *  Sum: '<S687>/Sum'
       *  UnitDelay: '<S687>/Unit Delay'
       */
      rtb_Sum1_hn = (1.0 - rtb_Product_d0) *
        BaseEngineController_LS_DWork.s687_UnitDelay_DSTATE +
        BaseEngineController_LS_B.s653_Merge * rtb_Product_d0;

      /* If: '<S685>/If' incorporates:
       *  Inport: '<S688>/In1'
       *  Inport: '<S689>/In1'
       *  S-Function (motohawk_sfun_calibration): '<S685>/new_value'
       *  S-Function (motohawk_sfun_calibration): '<S685>/override_enable'
       */
      if ((IAT_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S685>/NewValue' incorporates:
         *  ActionPort: '<S688>/Action Port'
         */
        BaseEngineController_LS_B.s685_Merge = (IAT_new_DataStore());

        /* End of Outputs for SubSystem: '<S685>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S685>/OldValue' incorporates:
         *  ActionPort: '<S689>/Action Port'
         */
        BaseEngineController_LS_B.s685_Merge = rtb_Sum1_hn;

        /* End of Outputs for SubSystem: '<S685>/OldValue' */
      }

      /* End of If: '<S685>/If' */

      /* Logic: '<S653>/Logical Operator2' incorporates:
       *  RelationalOperator: '<S653>/Relational Operator2'
       *  S-Function (motohawk_sfun_calibration): '<S653>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_data_read): '<S653>/motohawk_data_read1'
       */
      rtb_LogicalOperator2_p = ((MPRD_DataStore() && (rtb_DataTypeConversion_k >
                                  (IATMax_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S653>/motohawk_fault_def2' */

      /* Set Fault Suspected Status: IATRangeHigh */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(84, rtb_LogicalOperator2_p);
        UpdateFault(84);
      }

      /* Logic: '<S653>/Logical Operator3' incorporates:
       *  RelationalOperator: '<S653>/Relational Operator3'
       *  S-Function (motohawk_sfun_calibration): '<S653>/motohawk_calibration6'
       *  S-Function (motohawk_sfun_data_read): '<S653>/motohawk_data_read1'
       */
      rtb_LogicalOperator3_ht = ((MPRD_DataStore() && (rtb_DataTypeConversion_k <
                                   (IATMin_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S653>/motohawk_fault_def3' */

      /* Set Fault Suspected Status: IATRangeLow */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(85, rtb_LogicalOperator3_ht);
        UpdateFault(85);
      }

      /* S-Function Block: <S672>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s672_motohawk_delta_time_DWORK1, NULL);
        rtb_Product_d0 = ((real_T) delta) * 0.000001;
      }

      /* Product: '<S672>/Product' incorporates:
       *  MinMax: '<S672>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S672>/motohawk_calibration'
       */
      rtb_Product_d0 /= (rtb_Product_d0 >= (EVAPFiltConst_DataStore())) ||
        rtIsNaN((EVAPFiltConst_DataStore())) ? rtb_Product_d0 :
        (EVAPFiltConst_DataStore());

      /* Logic: '<S652>/Logical Operator4' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S652>/motohawk_fault_status1'
       *  S-Function (motohawk_sfun_fault_status): '<S652>/motohawk_fault_status4'
       */
      rtb_LogicalOperator4_k = (IsFaultActive(65) || IsFaultActive(66));

      /* Logic: '<S652>/Logical Operator1' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S652>/motohawk_fault_status2'
       *  S-Function (motohawk_sfun_fault_status): '<S652>/motohawk_fault_status3'
       */
      rtb_LogicalOperator1_b = (IsFaultSuspected(65) || IsFaultSuspected(66));

      /* S-Function Block: <S639>/motohawk_ain2 Resource: EVAPSensorPin */
      {
        extern NativeError_S EVAPSensorPin_AnalogInput_Get(uint16_T *adc,
          uint16_T *status);
        EVAPSensorPin_AnalogInput_Get
          (&BaseEngineController_LS_B.s639_motohawk_ain2, NULL);
      }

      /* DataTypeConversion: '<S652>/Data Type Conversion' */
      rtb_DataTypeConversion_k3 = (real_T)
        BaseEngineController_LS_B.s639_motohawk_ain2;

      /* S-Function Block: <S677>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (EVAPIdx_DataStore()) = TablePrelookup_real_T(rtb_DataTypeConversion_k3,
          (EVAPIdxArr_DataStore()), 13, (EVAPIdx_DataStore()));
        rtb_motohawk_prelookup_gz = (EVAPIdx_DataStore());
      }

      /* S-Function Block: <S677>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        BaseEngineController_LS_B.s677_motohawk_interpolation_1d =
          TableInterpolation1D_real_T(rtb_motohawk_prelookup_gz, (real_T *)
          ((EVAPTbl_DataStore())), 13);
      }

      /* UnitDelay: '<S652>/Unit Delay' */
      rtb_UnitDelay_i = BaseEngineController_LS_DWork.s652_UnitDelay_DSTATE;

      /* If: '<S652>/If' incorporates:
       *  Logic: '<S652>/Logical Operator5'
       *  Logic: '<S652>/Logical Operator6'
       */
      if ((!rtb_LogicalOperator4_k) && rtb_LogicalOperator1_b) {
        /* Outputs for IfAction SubSystem: '<S652>/If Action Subsystem' incorporates:
         *  ActionPort: '<S673>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay_i, &rtb_Merge_l);

        /* End of Outputs for SubSystem: '<S652>/If Action Subsystem' */
      } else if (rtb_LogicalOperator4_k) {
        /* Outputs for IfAction SubSystem: '<S652>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S674>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem((EVAPDefault_DataStore()),
          &rtb_Merge_l);

        /* End of Outputs for SubSystem: '<S652>/If Action Subsystem1' */
      } else {
        /* Outputs for IfAction SubSystem: '<S652>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S675>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem
          (BaseEngineController_LS_B.s677_motohawk_interpolation_1d,
           &rtb_Merge_l);

        /* End of Outputs for SubSystem: '<S652>/If Action Subsystem2' */
      }

      /* End of If: '<S652>/If' */

      /* Sum: '<S678>/Sum1' incorporates:
       *  Constant: '<S678>/Constant'
       *  Product: '<S678>/Product'
       *  Product: '<S678>/Product1'
       *  Sum: '<S678>/Sum'
       *  UnitDelay: '<S678>/Unit Delay'
       */
      rtb_Sum1_g = (1.0 - rtb_Product_d0) *
        BaseEngineController_LS_DWork.s678_UnitDelay_DSTATE + rtb_Merge_l *
        rtb_Product_d0;

      /* If: '<S676>/If' incorporates:
       *  Inport: '<S679>/In1'
       *  Inport: '<S680>/In1'
       *  S-Function (motohawk_sfun_calibration): '<S676>/new_value'
       *  S-Function (motohawk_sfun_calibration): '<S676>/override_enable'
       */
      if ((EVAP_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S676>/NewValue' incorporates:
         *  ActionPort: '<S679>/Action Port'
         */
        BaseEngineController_LS_B.s676_Merge = (EVAP_new_DataStore());

        /* End of Outputs for SubSystem: '<S676>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S676>/OldValue' incorporates:
         *  ActionPort: '<S680>/Action Port'
         */
        BaseEngineController_LS_B.s676_Merge = rtb_Sum1_g;

        /* End of Outputs for SubSystem: '<S676>/OldValue' */
      }

      /* End of If: '<S676>/If' */

      /* Logic: '<S652>/Logical Operator2' incorporates:
       *  RelationalOperator: '<S652>/Relational Operator2'
       *  S-Function (motohawk_sfun_calibration): '<S652>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_data_read): '<S652>/motohawk_data_read1'
       */
      rtb_LogicalOperator2_f = ((MPRD_DataStore() && (rtb_DataTypeConversion_k3 >
                                  (EVAPMax_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S652>/motohawk_fault_def2' */

      /* Set Fault Suspected Status: EVAPRangeHigh */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(65, rtb_LogicalOperator2_f);
        UpdateFault(65);
      }

      /* Logic: '<S652>/Logical Operator3' incorporates:
       *  RelationalOperator: '<S652>/Relational Operator3'
       *  S-Function (motohawk_sfun_calibration): '<S652>/motohawk_calibration6'
       *  S-Function (motohawk_sfun_data_read): '<S652>/motohawk_data_read1'
       */
      rtb_LogicalOperator3_j = ((MPRD_DataStore() && (rtb_DataTypeConversion_k3 <
                                  (EVAPMin_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S652>/motohawk_fault_def3' */

      /* Set Fault Suspected Status: EVAPRangeLow */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(66, rtb_LogicalOperator3_j);
        UpdateFault(66);
      }

      /* S-Function Block: <S654>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s654_motohawk_delta_time_DWORK1, NULL);
        rtb_Product_d0 = ((real_T) delta) * 0.000001;
      }

      /* Product: '<S654>/Product' incorporates:
       *  MinMax: '<S654>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S654>/motohawk_calibration'
       */
      rtb_Product_d0 /= (rtb_Product_d0 >= (CATFiltConst_DataStore())) ||
        rtIsNaN((CATFiltConst_DataStore())) ? rtb_Product_d0 :
        (CATFiltConst_DataStore());

      /* Logic: '<S650>/Logical Operator4' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S650>/motohawk_fault_status1'
       *  S-Function (motohawk_sfun_fault_status): '<S650>/motohawk_fault_status4'
       */
      rtb_LogicalOperator4_k = (IsFaultActive(27) || IsFaultActive(28));

      /* Logic: '<S650>/Logical Operator1' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S650>/motohawk_fault_status2'
       *  S-Function (motohawk_sfun_fault_status): '<S650>/motohawk_fault_status3'
       */
      rtb_LogicalOperator1_b = (IsFaultSuspected(27) || IsFaultSuspected(28));

      /* S-Function Block: <S639>/motohawk_ain3 Resource: CATSensorPin */
      {
        extern NativeError_S CATSensorPin_AnalogInput_Get(uint16_T *adc,
          uint16_T *status);
        CATSensorPin_AnalogInput_Get
          (&BaseEngineController_LS_B.s639_motohawk_ain3, NULL);
      }

      /* DataTypeConversion: '<S650>/Data Type Conversion' */
      rtb_DataTypeConversion_i = (real_T)
        BaseEngineController_LS_B.s639_motohawk_ain3;

      /* S-Function Block: <S659>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (CATIdx_DataStore()) = TablePrelookup_real_T(rtb_DataTypeConversion_i,
          (CATIdxArr_DataStore()), 13, (CATIdx_DataStore()));
        rtb_motohawk_prelookup_b = (CATIdx_DataStore());
      }

      /* S-Function Block: <S659>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        BaseEngineController_LS_B.s659_motohawk_interpolation_1d =
          TableInterpolation1D_real_T(rtb_motohawk_prelookup_b, (real_T *)
          ((CATTbl_DataStore())), 13);
      }

      /* UnitDelay: '<S650>/Unit Delay' */
      rtb_UnitDelay_kw = BaseEngineController_LS_DWork.s650_UnitDelay_DSTATE;

      /* If: '<S650>/If' incorporates:
       *  Logic: '<S650>/Logical Operator5'
       *  Logic: '<S650>/Logical Operator6'
       */
      if ((!rtb_LogicalOperator4_k) && rtb_LogicalOperator1_b) {
        /* Outputs for IfAction SubSystem: '<S650>/If Action Subsystem' incorporates:
         *  ActionPort: '<S655>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay_kw,
          &rtb_Merge_l5);

        /* End of Outputs for SubSystem: '<S650>/If Action Subsystem' */
      } else if (rtb_LogicalOperator4_k) {
        /* Outputs for IfAction SubSystem: '<S650>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S656>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem((CATDefault_DataStore()),
          &rtb_Merge_l5);

        /* End of Outputs for SubSystem: '<S650>/If Action Subsystem1' */
      } else {
        /* Outputs for IfAction SubSystem: '<S650>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S657>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem
          (BaseEngineController_LS_B.s659_motohawk_interpolation_1d,
           &rtb_Merge_l5);

        /* End of Outputs for SubSystem: '<S650>/If Action Subsystem2' */
      }

      /* End of If: '<S650>/If' */

      /* Sum: '<S660>/Sum1' incorporates:
       *  Constant: '<S660>/Constant'
       *  Product: '<S660>/Product'
       *  Product: '<S660>/Product1'
       *  Sum: '<S660>/Sum'
       *  UnitDelay: '<S660>/Unit Delay'
       */
      rtb_Sum1_lf = (1.0 - rtb_Product_d0) *
        BaseEngineController_LS_DWork.s660_UnitDelay_DSTATE + rtb_Merge_l5 *
        rtb_Product_d0;

      /* If: '<S658>/If' incorporates:
       *  Inport: '<S661>/In1'
       *  Inport: '<S662>/In1'
       *  S-Function (motohawk_sfun_calibration): '<S658>/new_value'
       *  S-Function (motohawk_sfun_calibration): '<S658>/override_enable'
       */
      if ((CAT_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S658>/NewValue' incorporates:
         *  ActionPort: '<S661>/Action Port'
         */
        BaseEngineController_LS_B.s658_Merge = (CAT_new_DataStore());

        /* End of Outputs for SubSystem: '<S658>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S658>/OldValue' incorporates:
         *  ActionPort: '<S662>/Action Port'
         */
        BaseEngineController_LS_B.s658_Merge = rtb_Sum1_lf;

        /* End of Outputs for SubSystem: '<S658>/OldValue' */
      }

      /* End of If: '<S658>/If' */

      /* Logic: '<S650>/Logical Operator2' incorporates:
       *  RelationalOperator: '<S650>/Relational Operator2'
       *  S-Function (motohawk_sfun_calibration): '<S650>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_data_read): '<S650>/motohawk_data_read1'
       */
      rtb_LogicalOperator2_i = ((MPRD_DataStore() && (rtb_DataTypeConversion_i >
                                  (CATMax_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S650>/motohawk_fault_def2' */

      /* Set Fault Suspected Status: CATRangeHigh */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(27, rtb_LogicalOperator2_i);
        UpdateFault(27);
      }

      /* Logic: '<S650>/Logical Operator3' incorporates:
       *  RelationalOperator: '<S650>/Relational Operator3'
       *  S-Function (motohawk_sfun_calibration): '<S650>/motohawk_calibration6'
       *  S-Function (motohawk_sfun_data_read): '<S650>/motohawk_data_read1'
       */
      rtb_LogicalOperator3_p = ((MPRD_DataStore() && (rtb_DataTypeConversion_i <
                                  (CATMin_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S650>/motohawk_fault_def3' */

      /* Set Fault Suspected Status: CATRangeLow */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(28, rtb_LogicalOperator3_p);
        UpdateFault(28);
      }

      /* Update for UnitDelay: '<S651>/Unit Delay' */
      BaseEngineController_LS_DWork.s651_UnitDelay_DSTATE =
        BaseEngineController_LS_B.s651_Merge;

      /* Update for UnitDelay: '<S669>/Unit Delay' */
      BaseEngineController_LS_DWork.s669_UnitDelay_DSTATE = rtb_Sum1_hs;

      /* Update for UnitDelay: '<S653>/Unit Delay' */
      BaseEngineController_LS_DWork.s653_UnitDelay_DSTATE =
        BaseEngineController_LS_B.s653_Merge;

      /* Update for UnitDelay: '<S687>/Unit Delay' */
      BaseEngineController_LS_DWork.s687_UnitDelay_DSTATE = rtb_Sum1_hn;

      /* Update for UnitDelay: '<S652>/Unit Delay' */
      BaseEngineController_LS_DWork.s652_UnitDelay_DSTATE = rtb_Merge_l;

      /* Update for UnitDelay: '<S678>/Unit Delay' */
      BaseEngineController_LS_DWork.s678_UnitDelay_DSTATE = rtb_Sum1_g;

      /* Update for UnitDelay: '<S650>/Unit Delay' */
      BaseEngineController_LS_DWork.s650_UnitDelay_DSTATE = rtb_Merge_l5;

      /* Update for UnitDelay: '<S660>/Unit Delay' */
      BaseEngineController_LS_DWork.s660_UnitDelay_DSTATE = rtb_Sum1_lf;
    }
  }
}
