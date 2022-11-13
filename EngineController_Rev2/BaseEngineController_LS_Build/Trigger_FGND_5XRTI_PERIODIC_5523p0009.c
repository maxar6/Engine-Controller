/*
 * Trigger_FGND_5XRTI_PERIODIC_5523p0009.c
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

void Trigger_FGND_5XRTI_PERIODIC_5523p0009(void)
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

  if (BaseEngineController_LS_DWork.s445_motohawk_trigger1_DWORK1) {
    /* Output and update for function-call system: '<S445>/Fuel Level' */
    {
      /* local block i/o variables */
      real_T rtb_DataTypeConversion_b;
      real_T rtb_UnitDelay_f;
      real_T rtb_Product_lb;
      index_T rtb_motohawk_prelookup_bc;
      boolean_T rtb_LogicalOperator2_dc;
      boolean_T rtb_LogicalOperator3_hn;
      boolean_T rtb_LogicalOperator4_i;
      boolean_T rtb_LogicalOperator1_a;
      real_T rtb_Sum1_e;

      /* S-Function Block: <S700>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s700_motohawk_delta_time_DWORK1, NULL);
        rtb_Product_lb = ((real_T) delta) * 0.000001;
      }

      /* Product: '<S700>/Product' incorporates:
       *  MinMax: '<S700>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S700>/motohawk_calibration'
       */
      rtb_Product_lb /= (rtb_Product_lb >= (Fuel_LvlFiltConst_DataStore())) ||
        rtIsNaN((Fuel_LvlFiltConst_DataStore())) ? rtb_Product_lb :
        (Fuel_LvlFiltConst_DataStore());

      /* Logic: '<S699>/Logical Operator4' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S699>/motohawk_fault_status1'
       *  S-Function (motohawk_sfun_fault_status): '<S699>/motohawk_fault_status4'
       */
      rtb_LogicalOperator4_i = (IsFaultActive(64) || IsFaultActive(65));

      /* Logic: '<S699>/Logical Operator1' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S699>/motohawk_fault_status2'
       *  S-Function (motohawk_sfun_fault_status): '<S699>/motohawk_fault_status3'
       */
      rtb_LogicalOperator1_a = (IsFaultSuspected(64) || IsFaultSuspected(65));

      /* S-Function Block: <S697>/motohawk_ain Resource: FuelLvlSensorPin */
      {
        extern NativeError_S FuelLvlSensorPin_AnalogInput_Get(uint16_T *adc,
          uint16_T *status);
        FuelLvlSensorPin_AnalogInput_Get
          (&BaseEngineController_LS_B.s697_motohawk_ain, NULL);
      }

      /* DataTypeConversion: '<S699>/Data Type Conversion' */
      rtb_DataTypeConversion_b = (real_T)
        BaseEngineController_LS_B.s697_motohawk_ain;

      /* S-Function Block: <S705>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (Fuel_LvlIdx_DataStore()) = TablePrelookup_real_T
          (rtb_DataTypeConversion_b, (Fuel_LvlIdxArr_DataStore()), 13,
           (Fuel_LvlIdx_DataStore()));
        rtb_motohawk_prelookup_bc = (Fuel_LvlIdx_DataStore());
      }

      /* S-Function Block: <S705>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        BaseEngineController_LS_B.s705_motohawk_interpolation_1d =
          TableInterpolation1D_real_T(rtb_motohawk_prelookup_bc, (real_T *)
          ((Fuel_LvlTbl_DataStore())), 13);
      }

      /* UnitDelay: '<S699>/Unit Delay' */
      rtb_UnitDelay_f = BaseEngineController_LS_DWork.s699_UnitDelay_DSTATE;

      /* If: '<S699>/If' incorporates:
       *  Logic: '<S699>/Logical Operator5'
       *  Logic: '<S699>/Logical Operator6'
       */
      if ((!rtb_LogicalOperator4_i) && rtb_LogicalOperator1_a) {
        /* Outputs for IfAction SubSystem: '<S699>/If Action Subsystem' incorporates:
         *  ActionPort: '<S701>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay_f,
          &BaseEngineController_LS_B.s699_Merge);

        /* End of Outputs for SubSystem: '<S699>/If Action Subsystem' */
      } else if (rtb_LogicalOperator4_i) {
        /* Outputs for IfAction SubSystem: '<S699>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S702>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem((Fuel_LvlDefault_DataStore()),
          &BaseEngineController_LS_B.s699_Merge);

        /* End of Outputs for SubSystem: '<S699>/If Action Subsystem1' */
      } else {
        /* Outputs for IfAction SubSystem: '<S699>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S703>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem
          (BaseEngineController_LS_B.s705_motohawk_interpolation_1d,
           &BaseEngineController_LS_B.s699_Merge);

        /* End of Outputs for SubSystem: '<S699>/If Action Subsystem2' */
      }

      /* End of If: '<S699>/If' */

      /* Sum: '<S706>/Sum1' incorporates:
       *  Constant: '<S706>/Constant'
       *  Product: '<S706>/Product'
       *  Product: '<S706>/Product1'
       *  Sum: '<S706>/Sum'
       *  UnitDelay: '<S706>/Unit Delay'
       */
      rtb_Sum1_e = (1.0 - rtb_Product_lb) *
        BaseEngineController_LS_DWork.s706_UnitDelay_DSTATE +
        BaseEngineController_LS_B.s699_Merge * rtb_Product_lb;

      /* If: '<S704>/If' incorporates:
       *  Inport: '<S707>/In1'
       *  Inport: '<S708>/In1'
       *  S-Function (motohawk_sfun_calibration): '<S704>/new_value'
       *  S-Function (motohawk_sfun_calibration): '<S704>/override_enable'
       */
      if ((Fuel_Lvl_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S704>/NewValue' incorporates:
         *  ActionPort: '<S707>/Action Port'
         */
        BaseEngineController_LS_B.s704_Merge = (Fuel_Lvl_new_DataStore());

        /* End of Outputs for SubSystem: '<S704>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S704>/OldValue' incorporates:
         *  ActionPort: '<S708>/Action Port'
         */
        BaseEngineController_LS_B.s704_Merge = rtb_Sum1_e;

        /* End of Outputs for SubSystem: '<S704>/OldValue' */
      }

      /* End of If: '<S704>/If' */

      /* Logic: '<S699>/Logical Operator2' incorporates:
       *  RelationalOperator: '<S699>/Relational Operator2'
       *  S-Function (motohawk_sfun_calibration): '<S699>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_data_read): '<S699>/motohawk_data_read1'
       */
      rtb_LogicalOperator2_dc = ((MPRD_DataStore() && (rtb_DataTypeConversion_b >
                                   (Fuel_LvlMax_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S699>/motohawk_fault_def2' */

      /* Set Fault Suspected Status: Fuel_LvlRangeHigh */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(64, rtb_LogicalOperator2_dc);
        UpdateFault(64);
      }

      /* Logic: '<S699>/Logical Operator3' incorporates:
       *  RelationalOperator: '<S699>/Relational Operator3'
       *  S-Function (motohawk_sfun_calibration): '<S699>/motohawk_calibration6'
       *  S-Function (motohawk_sfun_data_read): '<S699>/motohawk_data_read1'
       */
      rtb_LogicalOperator3_hn = ((MPRD_DataStore() && (rtb_DataTypeConversion_b <
                                   (Fuel_LvlMin_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S699>/motohawk_fault_def3' */

      /* Set Fault Suspected Status: Fuel_LvlRangeLow */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(65, rtb_LogicalOperator3_hn);
        UpdateFault(65);
      }

      /* Update for UnitDelay: '<S699>/Unit Delay' */
      BaseEngineController_LS_DWork.s699_UnitDelay_DSTATE =
        BaseEngineController_LS_B.s699_Merge;

      /* Update for UnitDelay: '<S706>/Unit Delay' */
      BaseEngineController_LS_DWork.s706_UnitDelay_DSTATE = rtb_Sum1_e;
    }
  }
}
