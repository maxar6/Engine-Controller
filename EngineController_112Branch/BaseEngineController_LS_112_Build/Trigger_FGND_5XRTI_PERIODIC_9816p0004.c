/*
 * Trigger_FGND_5XRTI_PERIODIC_9816p0004.c
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

void Trigger_FGND_5XRTI_PERIODIC_9816p0004(void)
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

  if (BaseEngineController_LS_112_DWork.s483_motohawk_trigger1_DWORK1) {
    /* Output and update for function-call system: '<S483>/Fuel Level' */
    {
      /* local block i/o variables */
      real_T rtb_DataTypeConversion_e;
      real_T rtb_UnitDelay_a;
      real_T rtb_Product_ch;
      index_T rtb_motohawk_prelookup_h;
      boolean_T rtb_LogicalOperator2_g5;
      boolean_T rtb_LogicalOperator3_h;
      boolean_T rtb_LogicalOperator4_dr;
      boolean_T rtb_LogicalOperator1_d;
      real_T rtb_Sum1_d;

      /* S-Function Block: <S639>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_112_DWork.s639_motohawk_delta_time_DWORK1,
           NULL);
        rtb_Product_ch = ((real_T) delta) * 0.000001;
      }

      /* Product: '<S639>/Product' incorporates:
       *  MinMax: '<S639>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S639>/motohawk_calibration'
       */
      rtb_Product_ch /= (rtb_Product_ch >= (Fuel_LvlFiltConst_DataStore())) ||
        rtIsNaN((Fuel_LvlFiltConst_DataStore())) ? rtb_Product_ch :
        (Fuel_LvlFiltConst_DataStore());

      /* Logic: '<S638>/Logical Operator4' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S638>/motohawk_fault_status1'
       *  S-Function (motohawk_sfun_fault_status): '<S638>/motohawk_fault_status4'
       */
      rtb_LogicalOperator4_dr = (IsFaultActive(77) || IsFaultActive(78));

      /* Logic: '<S638>/Logical Operator1' incorporates:
       *  S-Function (motohawk_sfun_fault_status): '<S638>/motohawk_fault_status2'
       *  S-Function (motohawk_sfun_fault_status): '<S638>/motohawk_fault_status3'
       */
      rtb_LogicalOperator1_d = (IsFaultSuspected(77) || IsFaultSuspected(78));

      /* S-Function Block: <S636>/motohawk_ain Resource: AN15 */
      BaseEngineController_LS_112_B.s636_motohawk_ain = AN15_AnalogInput_Get();

      /* DataTypeConversion: '<S638>/Data Type Conversion' */
      rtb_DataTypeConversion_e = (real_T)
        BaseEngineController_LS_112_B.s636_motohawk_ain;

      /* S-Function Block: <S644>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (Fuel_LvlIdx_DataStore()) = TablePrelookup_real_T
          (rtb_DataTypeConversion_e, (Fuel_LvlIdxArr_DataStore()), 5,
           (Fuel_LvlIdx_DataStore()));
        rtb_motohawk_prelookup_h = (Fuel_LvlIdx_DataStore());
      }

      /* S-Function Block: <S644>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        BaseEngineController_LS_112_B.s644_motohawk_interpolation_1d =
          TableInterpolation1D_real_T(rtb_motohawk_prelookup_h, (real_T *)
          ((Fuel_LvlTbl_DataStore())), 5);
      }

      /* UnitDelay: '<S638>/Unit Delay' */
      rtb_UnitDelay_a = BaseEngineController_LS_112_DWork.s638_UnitDelay_DSTATE;

      /* If: '<S638>/If' incorporates:
       *  Logic: '<S638>/Logical Operator5'
       *  Logic: '<S638>/Logical Operator6'
       */
      if ((!rtb_LogicalOperator4_dr) && rtb_LogicalOperator1_d) {
        /* Outputs for IfAction SubSystem: '<S638>/If Action Subsystem' incorporates:
         *  ActionPort: '<S640>/Action Port'
         */
        BaseEngineController_LS_112_IfActionSubsystem(rtb_UnitDelay_a,
          &BaseEngineController_LS_112_B.s638_Merge);

        /* End of Outputs for SubSystem: '<S638>/If Action Subsystem' */
      } else if (rtb_LogicalOperator4_dr) {
        /* Outputs for IfAction SubSystem: '<S638>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S641>/Action Port'
         */
        BaseEngineController_LS_112_IfActionSubsystem((Fuel_LvlDefault_DataStore
          ()), &BaseEngineController_LS_112_B.s638_Merge);

        /* End of Outputs for SubSystem: '<S638>/If Action Subsystem1' */
      } else {
        /* Outputs for IfAction SubSystem: '<S638>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S642>/Action Port'
         */
        BaseEngineController_LS_112_IfActionSubsystem
          (BaseEngineController_LS_112_B.s644_motohawk_interpolation_1d,
           &BaseEngineController_LS_112_B.s638_Merge);

        /* End of Outputs for SubSystem: '<S638>/If Action Subsystem2' */
      }

      /* End of If: '<S638>/If' */

      /* Sum: '<S645>/Sum1' incorporates:
       *  Constant: '<S645>/Constant'
       *  Product: '<S645>/Product'
       *  Product: '<S645>/Product1'
       *  Sum: '<S645>/Sum'
       *  UnitDelay: '<S645>/Unit Delay'
       */
      rtb_Sum1_d = (1.0 - rtb_Product_ch) *
        BaseEngineController_LS_112_DWork.s645_UnitDelay_DSTATE +
        BaseEngineController_LS_112_B.s638_Merge * rtb_Product_ch;

      /* If: '<S643>/If' incorporates:
       *  Inport: '<S646>/In1'
       *  Inport: '<S647>/In1'
       *  S-Function (motohawk_sfun_calibration): '<S643>/new_value'
       *  S-Function (motohawk_sfun_calibration): '<S643>/override_enable'
       */
      if ((Fuel_Lvl_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S643>/NewValue' incorporates:
         *  ActionPort: '<S646>/Action Port'
         */
        BaseEngineController_LS_112_B.s643_Merge = (Fuel_Lvl_new_DataStore());

        /* End of Outputs for SubSystem: '<S643>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S643>/OldValue' incorporates:
         *  ActionPort: '<S647>/Action Port'
         */
        BaseEngineController_LS_112_B.s643_Merge = rtb_Sum1_d;

        /* End of Outputs for SubSystem: '<S643>/OldValue' */
      }

      /* End of If: '<S643>/If' */

      /* Logic: '<S638>/Logical Operator2' incorporates:
       *  RelationalOperator: '<S638>/Relational Operator2'
       *  S-Function (motohawk_sfun_calibration): '<S638>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_data_read): '<S638>/motohawk_data_read1'
       */
      rtb_LogicalOperator2_g5 = ((MPRD_DataStore() && (rtb_DataTypeConversion_e >
                                   (Fuel_LvlMax_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S638>/motohawk_fault_def2' */

      /* Set Fault Suspected Status: Fuel_LvlRangeHigh */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(77, rtb_LogicalOperator2_g5);
        UpdateFault(77);
      }

      /* Logic: '<S638>/Logical Operator3' incorporates:
       *  RelationalOperator: '<S638>/Relational Operator3'
       *  S-Function (motohawk_sfun_calibration): '<S638>/motohawk_calibration6'
       *  S-Function (motohawk_sfun_data_read): '<S638>/motohawk_data_read1'
       */
      rtb_LogicalOperator3_h = ((MPRD_DataStore() && (rtb_DataTypeConversion_e <
                                  (Fuel_LvlMin_DataStore()))));

      /* S-Function (motohawk_sfun_fault_def): '<S638>/motohawk_fault_def3' */

      /* Set Fault Suspected Status: Fuel_LvlRangeLow */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(78, rtb_LogicalOperator3_h);
        UpdateFault(78);
      }

      /* Update for UnitDelay: '<S638>/Unit Delay' */
      BaseEngineController_LS_112_DWork.s638_UnitDelay_DSTATE =
        BaseEngineController_LS_112_B.s638_Merge;

      /* Update for UnitDelay: '<S645>/Unit Delay' */
      BaseEngineController_LS_112_DWork.s645_UnitDelay_DSTATE = rtb_Sum1_d;
    }
  }
}
