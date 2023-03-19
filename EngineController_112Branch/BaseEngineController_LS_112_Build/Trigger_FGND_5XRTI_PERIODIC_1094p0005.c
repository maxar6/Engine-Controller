/*
 * Trigger_FGND_5XRTI_PERIODIC_1094p0005.c
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

void Trigger_FGND_5XRTI_PERIODIC_1094p0005(void)
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

  if (BaseEngineController_LS_112_DWork.s14_motohawk_trigger1_DWORK1) {
    /* Output and update for function-call system: '<S14>/Spark Coil Characterization' */
    {
      /* local block i/o variables */
      real_T rtb_motohawk_interpolation_2d1;
      index_T rtb_SpkEnergy09Idx;
      real_T rtb_Merge_c;

      /* S-Function Block: <S24>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (SpkEnergy09In_DataStore()) =
          BaseEngineController_LS_112_B.s92_SparkEnergy;
        (SpkEnergy09Idx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_LS_112_B.s92_SparkEnergy,
           (SpkEnergy09IdxArr_DataStore()), 9, (SpkEnergy09Idx_DataStore()));
        rtb_SpkEnergy09Idx = (SpkEnergy09Idx_DataStore());
      }

      /* S-Function Block: <S24>/motohawk_interpolation_2d1 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_motohawk_interpolation_2d1 = TableInterpolation2D_real_T
          (rtb_SpkEnergy09Idx,
           BaseEngineController_LS_112_B.s436_motohawk_prelookup, (real_T *)
           ((CoilDwellMap_DataStore())), 9, 9);
        (CoilDwell_DataStore()) = rtb_motohawk_interpolation_2d1;
      }

      /* If: '<S87>/If' incorporates:
       *  Constant: '<S24>/Constant'
       *  Inport: '<S88>/In1'
       *  Inport: '<S89>/In1'
       *  Product: '<S24>/Product'
       *  S-Function (motohawk_sfun_calibration): '<S24>/motohawk_calibration'
       *  S-Function (motohawk_sfun_calibration): '<S87>/override_enable'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S24>/motohawk_interpolation_2d1'
       *  S-Function (motohawk_sfun_prelookup): '<S24>/motohawk_prelookup'
       *  Sum: '<S24>/Sum'
       *  UnitDelay: '<S87>/Unit Delay'
       */
      if ((SparkDwell_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S87>/NewValue' incorporates:
         *  ActionPort: '<S88>/Action Port'
         */
        rtb_Merge_c = BaseEngineController_LS_112_DWork.s87_UnitDelay_DSTATE;

        /* End of Outputs for SubSystem: '<S87>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S87>/OldValue' incorporates:
         *  ActionPort: '<S89>/Action Port'
         */
        rtb_Merge_c = (CoilDrvrDlyTime_DataStore()) / 1000.0 +
          rtb_motohawk_interpolation_2d1;

        /* End of Outputs for SubSystem: '<S87>/OldValue' */
      }

      /* End of If: '<S87>/If' */

      /* Sum: '<S87>/Sum' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S87>/offset'
       */
      BaseEngineController_LS_112_B.s87_Sum = rtb_Merge_c +
        (SparkDwell_offset_DataStore());

      /* RelationalOperator: '<S24>/Only Enable Spark when Energy is Above Zero' incorporates:
       *  Constant: '<S24>/Constant1'
       */
      BaseEngineController_LS_112_B.s24_OnlyEnableSparkwhenEnergyisAboveZero =
        ((BaseEngineController_LS_112_B.s92_SparkEnergy > 0.0));

      /* Update for UnitDelay: '<S87>/Unit Delay' */
      BaseEngineController_LS_112_DWork.s87_UnitDelay_DSTATE = rtb_Merge_c;
    }
  }
}