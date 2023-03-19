/*
 * Trigger_FGND_5XRTI_PERIODIC_9816p0004.c
 *
 * Code generation for model "BaseEngineController_LS_128.mdl".
 *
 * Model version              : 1.2189
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Tue Nov 22 13:22:09 2022
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_LS_128.h"
#include "BaseEngineController_LS_128_private.h"

void Trigger_FGND_5XRTI_PERIODIC_9816p0004(void)
{
  /* Named constants for Stateflow: '<S932>/ECUP Latch' */
#define BaseEngineController_LS_128_IN_PowerDown (1U)
#define BaseEngineController_LS_128_IN_PowerUp (2U)

  {
    extern void Timer_FreeRunningCounter_GetTime(uint32_T *lower32Bits, uint32_T
      *upper32Bits);
    uint32_T lower32Bits;
    uint32_T upper32Bits;
    Timer_FreeRunningCounter_GetTime(&lower32Bits, &upper32Bits);
    BaseEngineController_LS_128_M->Timing.clockTick0 = lower32Bits;
    BaseEngineController_LS_128_M->Timing.clockTickH0 = upper32Bits;
  }

  if (BaseEngineController_LS_128_DWork.s485_motohawk_trigger1_DWORK1) {
    /* Output and update for function-call system: '<S485>/Fuel Level' */
    {
      /* local block i/o variables */
      real_T rtb_DataTypeConversion_h;
      real_T rtb_UnitDelay_n;
      real_T rtb_Product_l;
      index_T rtb_motohawk_prelookup_n;
      boolean_T rtb_LogicalOperator2_j1;
      boolean_T rtb_LogicalOperator3_kh;
      boolean_T rtb_LogicalOperator4_hy;
      boolean_T rtb_LogicalOperator1_gz;
      real_T rtb_Sum1_lhi;

      /* S-Function Block: <S641>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_128_DWork.s641_motohawk_delta_time_DWORK1,
           NULL);
        rtb_Product_l = ((real_T) delta) * 0.000001;
      }

      /* Product: '<S641>/Product' incorporates:
       *  MinMax: '<S641>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S641>/motohawk_calibration'
       */
      rtb_Product_l /= (rtb_Product_l >= (Fuel_LvlFiltConst_DataStore())) ||
        rtIsNaN((Fuel_LvlFiltConst_DataStore())) ? rtb_Product_l :
        (Fuel_LvlFiltConst_DataStore());

      /* Logic: '<S640>/Logical Operator4' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S640>/motohawk_fault_status1'
       *  S-Function (motohawk_sfun_fault_status): '<S640>/motohawk_fault_status4'
       */
      rtb_LogicalOperator4_hy = (IsFaultActive(77) || IsFaultActive(78));

      /* Logic: '<S640>/Logical Operator1' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S640>/motohawk_fault_status2'
       *  S-Function (motohawk_sfun_fault_status): '<S640>/motohawk_fault_status3'
       */
      rtb_LogicalOperator1_gz = (IsFaultSuspected(77) || IsFaultSuspected(78));

      /* S-Function Block: <S638>/motohawk_ain Resource: FuelLvlSensorPin */
      {
        extern NativeError_S FuelLvlSensorPin_AnalogInput_Get(uint16_T *adc,
          uint16_T *status);
        FuelLvlSensorPin_AnalogInput_Get
          (&BaseEngineController_LS_128_B.s638_motohawk_ain, NULL);
      }

      /* DataTypeConversion: '<S640>/Data Type Conversion' */
      rtb_DataTypeConversion_h = (real_T)
        BaseEngineController_LS_128_B.s638_motohawk_ain;

      /* S-Function Block: <S646>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (Fuel_LvlIdx_DataStore()) = TablePrelookup_real_T
          (rtb_DataTypeConversion_h, (Fuel_LvlIdxArr_DataStore()), 5,
           (Fuel_LvlIdx_DataStore()));
        rtb_motohawk_prelookup_n = (Fuel_LvlIdx_DataStore());
      }

      /* S-Function Block: <S646>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        BaseEngineController_LS_128_B.s646_motohawk_interpolation_1d =
          TableInterpolation1D_real_T(rtb_motohawk_prelookup_n, (real_T *)
          ((Fuel_LvlTbl_DataStore())), 5);
      }

      /* UnitDelay: '<S640>/Unit Delay' */
      rtb_UnitDelay_n = BaseEngineController_LS_128_DWork.s640_UnitDelay_DSTATE;

      /* If: '<S640>/If' incorporates:
       *  Logic: '<S640>/Logical Operator5'
       *  Logic: '<S640>/Logical Operator6'
       */
      if ((!rtb_LogicalOperator4_hy) && rtb_LogicalOperator1_gz) {
        /* Outputs for IfAction SubSystem: '<S640>/If Action Subsystem' incorporates:
         *  ActionPort: '<S642>/Action Port'
         */
        BaseEngineController_LS_128_IfActionSubsystem(rtb_UnitDelay_n,
          &BaseEngineController_LS_128_B.s640_Merge);

        /* End of Outputs for SubSystem: '<S640>/If Action Subsystem' */
      } else if (rtb_LogicalOperator4_hy) {
        /* Outputs for IfAction SubSystem: '<S640>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S643>/Action Port'
         */
        BaseEngineController_LS_128_IfActionSubsystem((Fuel_LvlDefault_DataStore
          ()), &BaseEngineController_LS_128_B.s640_Merge);

        /* End of Outputs for SubSystem: '<S640>/If Action Subsystem1' */
      } else {
        /* Outputs for IfAction SubSystem: '<S640>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S644>/Action Port'
         */
        BaseEngineController_LS_128_IfActionSubsystem
          (BaseEngineController_LS_128_B.s646_motohawk_interpolation_1d,
           &BaseEngineController_LS_128_B.s640_Merge);

        /* End of Outputs for SubSystem: '<S640>/If Action Subsystem2' */
      }

      /* End of If: '<S640>/If' */

      /* Sum: '<S647>/Sum1' incorporates:
       *  Constant: '<S647>/Constant'
       *  Product: '<S647>/Product'
       *  Product: '<S647>/Product1'
       *  Sum: '<S647>/Sum'
       *  UnitDelay: '<S647>/Unit Delay'
       */
      rtb_Sum1_lhi = (1.0 - rtb_Product_l) *
        BaseEngineController_LS_128_DWork.s647_UnitDelay_DSTATE +
        BaseEngineController_LS_128_B.s640_Merge * rtb_Product_l;

      /* If: '<S645>/If' incorporates:
       *  Inport: '<S648>/In1'
       *  Inport: '<S649>/In1'
       *  S-Function (motohawk_sfun_calibration): '<S645>/new_value'
       *  S-Function (motohawk_sfun_calibration): '<S645>/override_enable'
       */
      if ((Fuel_Lvl_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S645>/NewValue' incorporates:
         *  ActionPort: '<S648>/Action Port'
         */
        BaseEngineController_LS_128_B.s645_Merge = (Fuel_Lvl_new_DataStore());

        /* End of Outputs for SubSystem: '<S645>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S645>/OldValue' incorporates:
         *  ActionPort: '<S649>/Action Port'
         */
        BaseEngineController_LS_128_B.s645_Merge = rtb_Sum1_lhi;

        /* End of Outputs for SubSystem: '<S645>/OldValue' */
      }

      /* End of If: '<S645>/If' */

      /* Logic: '<S640>/Logical Operator2' incorporates:
       *  RelationalOperator: '<S640>/Relational Operator2'
       *  S-Function (motohawk_sfun_calibration): '<S640>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_data_read): '<S640>/motohawk_data_read1'
       */
      rtb_LogicalOperator2_j1 = ((MPRD_DataStore() && (rtb_DataTypeConversion_h >
                                   (Fuel_LvlMax_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S640>/motohawk_fault_def2' */

      /* Set Fault Suspected Status: Fuel_LvlRangeHigh */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(77, rtb_LogicalOperator2_j1);
        UpdateFault(77);
      }

      /* Logic: '<S640>/Logical Operator3' incorporates:
       *  RelationalOperator: '<S640>/Relational Operator3'
       *  S-Function (motohawk_sfun_calibration): '<S640>/motohawk_calibration6'
       *  S-Function (motohawk_sfun_data_read): '<S640>/motohawk_data_read1'
       */
      rtb_LogicalOperator3_kh = ((MPRD_DataStore() && (rtb_DataTypeConversion_h <
                                   (Fuel_LvlMin_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S640>/motohawk_fault_def3' */

      /* Set Fault Suspected Status: Fuel_LvlRangeLow */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(78, rtb_LogicalOperator3_kh);
        UpdateFault(78);
      }

      /* Update for UnitDelay: '<S640>/Unit Delay' */
      BaseEngineController_LS_128_DWork.s640_UnitDelay_DSTATE =
        BaseEngineController_LS_128_B.s640_Merge;

      /* Update for UnitDelay: '<S647>/Unit Delay' */
      BaseEngineController_LS_128_DWork.s647_UnitDelay_DSTATE = rtb_Sum1_lhi;
    }
  }
}
