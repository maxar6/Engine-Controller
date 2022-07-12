/*
 * Trigger_FGND_5XRTI_PERIODIC_11343p0129.c
 *
 * Code generation for model "BaseEngineController_LS.mdl".
 *
 * Model version              : 1.2021
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Mon Jul 11 23:56:32 2022
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_LS.h"
#include "BaseEngineController_LS_private.h"

void Trigger_FGND_5XRTI_PERIODIC_11343p0129(void)
{
  /* Named constants for Stateflow: '<S979>/ECUP Latch' */
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

  if (BaseEngineController_LS_DWork.s455_motohawk_trigger1_DWORK1) {
    /* Output and update for function-call system: '<S455>/Fuel Level' */
    {
      /* local block i/o variables */
      real_T rtb_DataTypeConversion_b;
      real_T rtb_UnitDelay_f;
      real_T rtb_Merge_o;
      real_T rtb_Product_lb;
      index_T rtb_motohawk_prelookup_bc;
      boolean_T rtb_LogicalOperator2_dc;
      boolean_T rtb_LogicalOperator3_hn;
      boolean_T rtb_LogicalOperator4_i;
      boolean_T rtb_LogicalOperator1_a;
      real_T rtb_Sum1_e;

      /* S-Function Block: <S711>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s711_motohawk_delta_time_DWORK1, NULL);
        rtb_Product_lb = ((real_T) delta) * 0.000001;
      }

      /* Product: '<S711>/Product' incorporates:
       *  MinMax: '<S711>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S711>/motohawk_calibration'
       */
      rtb_Product_lb /= (rtb_Product_lb >= (Fuel_LvlFiltConst_DataStore())) ||
        rtIsNaN((Fuel_LvlFiltConst_DataStore())) ? rtb_Product_lb :
        (Fuel_LvlFiltConst_DataStore());

      /* Logic: '<S710>/Logical Operator4' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S710>/motohawk_fault_status1'
       *  S-Function (motohawk_sfun_fault_status): '<S710>/motohawk_fault_status4'
       */
      rtb_LogicalOperator4_i = (IsFaultActive(64) || IsFaultActive(65));

      /* Logic: '<S710>/Logical Operator1' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S710>/motohawk_fault_status2'
       *  S-Function (motohawk_sfun_fault_status): '<S710>/motohawk_fault_status3'
       */
      rtb_LogicalOperator1_a = (IsFaultSuspected(64) || IsFaultSuspected(65));

      /* S-Function Block: <S708>/motohawk_ain Resource: FuelLvlSensorPin */
      {
        extern NativeError_S FuelLvlSensorPin_AnalogInput_Get(uint16_T *adc,
          uint16_T *status);
        FuelLvlSensorPin_AnalogInput_Get
          (&BaseEngineController_LS_B.s708_motohawk_ain, NULL);
      }

      /* DataTypeConversion: '<S710>/Data Type Conversion' */
      rtb_DataTypeConversion_b = (real_T)
        BaseEngineController_LS_B.s708_motohawk_ain;

      /* S-Function Block: <S716>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (Fuel_LvlIdx_DataStore()) = TablePrelookup_real_T
          (rtb_DataTypeConversion_b, (Fuel_LvlIdxArr_DataStore()), 13,
           (Fuel_LvlIdx_DataStore()));
        rtb_motohawk_prelookup_bc = (Fuel_LvlIdx_DataStore());
      }

      /* S-Function Block: <S716>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        BaseEngineController_LS_B.s716_motohawk_interpolation_1d =
          TableInterpolation1D_real_T(rtb_motohawk_prelookup_bc, (real_T *)
          ((Fuel_LvlTbl_DataStore())), 13);
      }

      /* UnitDelay: '<S710>/Unit Delay' */
      rtb_UnitDelay_f = BaseEngineController_LS_DWork.s710_UnitDelay_DSTATE;

      /* If: '<S710>/If' incorporates:
       *  Logic: '<S710>/Logical Operator5'
       *  Logic: '<S710>/Logical Operator6'
       */
      if ((!rtb_LogicalOperator4_i) && rtb_LogicalOperator1_a) {
        /* Outputs for IfAction SubSystem: '<S710>/If Action Subsystem' incorporates:
         *  ActionPort: '<S712>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay_f, &rtb_Merge_o);

        /* End of Outputs for SubSystem: '<S710>/If Action Subsystem' */
      } else if (rtb_LogicalOperator4_i) {
        /* Outputs for IfAction SubSystem: '<S710>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S713>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem((Fuel_LvlDefault_DataStore()),
          &rtb_Merge_o);

        /* End of Outputs for SubSystem: '<S710>/If Action Subsystem1' */
      } else {
        /* Outputs for IfAction SubSystem: '<S710>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S714>/Action Port'
         */
        BaseEngineController_LS_IfActionSubsystem
          (BaseEngineController_LS_B.s716_motohawk_interpolation_1d,
           &rtb_Merge_o);

        /* End of Outputs for SubSystem: '<S710>/If Action Subsystem2' */
      }

      /* End of If: '<S710>/If' */

      /* Sum: '<S717>/Sum1' incorporates:
       *  Constant: '<S717>/Constant'
       *  Product: '<S717>/Product'
       *  Product: '<S717>/Product1'
       *  Sum: '<S717>/Sum'
       *  UnitDelay: '<S717>/Unit Delay'
       */
      rtb_Sum1_e = (1.0 - rtb_Product_lb) *
        BaseEngineController_LS_DWork.s717_UnitDelay_DSTATE + rtb_Merge_o *
        rtb_Product_lb;

      /* If: '<S715>/If' incorporates:
       *  Inport: '<S718>/In1'
       *  Inport: '<S719>/In1'
       *  S-Function (motohawk_sfun_calibration): '<S715>/new_value'
       *  S-Function (motohawk_sfun_calibration): '<S715>/override_enable'
       */
      if ((Fuel_Lvl_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S715>/NewValue' incorporates:
         *  ActionPort: '<S718>/Action Port'
         */
        BaseEngineController_LS_B.s715_Merge = (Fuel_Lvl_new_DataStore());

        /* End of Outputs for SubSystem: '<S715>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S715>/OldValue' incorporates:
         *  ActionPort: '<S719>/Action Port'
         */
        BaseEngineController_LS_B.s715_Merge = rtb_Sum1_e;

        /* End of Outputs for SubSystem: '<S715>/OldValue' */
      }

      /* End of If: '<S715>/If' */

      /* Logic: '<S710>/Logical Operator2' incorporates:
       *  RelationalOperator: '<S710>/Relational Operator2'
       *  S-Function (motohawk_sfun_calibration): '<S710>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_data_read): '<S710>/motohawk_data_read1'
       */
      rtb_LogicalOperator2_dc = ((MPRD_DataStore() && (rtb_DataTypeConversion_b >
                                   (Fuel_LvlMax_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S710>/motohawk_fault_def2' */

      /* Set Fault Suspected Status: Fuel_LvlRangeHigh */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(64, rtb_LogicalOperator2_dc);
        UpdateFault(64);
      }

      /* Logic: '<S710>/Logical Operator3' incorporates:
       *  RelationalOperator: '<S710>/Relational Operator3'
       *  S-Function (motohawk_sfun_calibration): '<S710>/motohawk_calibration6'
       *  S-Function (motohawk_sfun_data_read): '<S710>/motohawk_data_read1'
       */
      rtb_LogicalOperator3_hn = ((MPRD_DataStore() && (rtb_DataTypeConversion_b <
                                   (Fuel_LvlMin_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S710>/motohawk_fault_def3' */

      /* Set Fault Suspected Status: Fuel_LvlRangeLow */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(65, rtb_LogicalOperator3_hn);
        UpdateFault(65);
      }

      /* Update for UnitDelay: '<S710>/Unit Delay' */
      BaseEngineController_LS_DWork.s710_UnitDelay_DSTATE = rtb_Merge_o;

      /* Update for UnitDelay: '<S717>/Unit Delay' */
      BaseEngineController_LS_DWork.s717_UnitDelay_DSTATE = rtb_Sum1_e;
    }
  }
}
