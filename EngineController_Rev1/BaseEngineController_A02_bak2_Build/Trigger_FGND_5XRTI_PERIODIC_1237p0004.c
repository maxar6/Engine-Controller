/*
 * Trigger_FGND_5XRTI_PERIODIC_1237p0004.c
 *
 * Code generation for model "BaseEngineController_A02_bak2.mdl".
 *
 * Model version              : 1.1532
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Tue Jan 01 10:29:48 2019
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_A02_bak2.h"
#include "BaseEngineController_A02_bak2_private.h"

void Trigger_FGND_5XRTI_PERIODIC_1237p0004(void)
{
  /* Named constants for Stateflow: '<S800>/ECUP Latch' */
#define BaseEngineController_A02_bak2_IN_PowerDown (1U)
#define BaseEngineController_A02_bak2_IN_PowerUp (2U)

  if (BaseEngineController_A02_bak2_DWork.s6_motohawk_trigger1_DWORK1) {
    /* Output and update for function-call system: '<S6>/Spark Coil Characterization' */
    {
      /* local block i/o variables */
      real_T rtb_motohawk_interpolation_2d1;
      index_T rtb_SpkEnergy09Idx;
      real_T rtb_Merge_f;

      /* S-Function Block: <S16>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (SpkEnergy09In_DataStore()) =
          BaseEngineController_A02_bak2_B.s111_SparkEnergy;
        (SpkEnergy09Idx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_A02_bak2_B.s111_SparkEnergy,
           (SpkEnergy09IdxArr_DataStore()), 9, (SpkEnergy09Idx_DataStore()));
        rtb_SpkEnergy09Idx = (SpkEnergy09Idx_DataStore());
      }

      /* S-Function Block: <S16>/motohawk_interpolation_2d1 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_motohawk_interpolation_2d1 = TableInterpolation2D_real_T
          (rtb_SpkEnergy09Idx,
           BaseEngineController_A02_bak2_B.s393_motohawk_prelookup, (real_T *)
           ((CoilDwellMap_DataStore())), 9, 9);
        (CoilDwell_DataStore()) = rtb_motohawk_interpolation_2d1;
      }

      /* If: '<S106>/If' incorporates:
       *  Constant: '<S16>/Constant'
       *  Inport: '<S107>/In1'
       *  Inport: '<S108>/In1'
       *  Product: '<S16>/Product'
       *  S-Function (motohawk_sfun_calibration): '<S106>/override_enable'
       *  S-Function (motohawk_sfun_calibration): '<S16>/motohawk_calibration'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S16>/motohawk_interpolation_2d1'
       *  S-Function (motohawk_sfun_prelookup): '<S16>/motohawk_prelookup'
       *  Sum: '<S16>/Sum'
       *  UnitDelay: '<S106>/Unit Delay'
       */
      if ((SparkDwell_ovr_DataStore())) {
        /* Outputs for IfAction SubSystem: '<S106>/NewValue' incorporates:
         *  ActionPort: '<S107>/Action Port'
         */
        rtb_Merge_f = BaseEngineController_A02_bak2_DWork.s106_UnitDelay_DSTATE;

        /* End of Outputs for SubSystem: '<S106>/NewValue' */
      } else {
        /* Outputs for IfAction SubSystem: '<S106>/OldValue' incorporates:
         *  ActionPort: '<S108>/Action Port'
         */
        rtb_Merge_f = (CoilDrvrDlyTime_DataStore()) / 1000.0 +
          rtb_motohawk_interpolation_2d1;

        /* End of Outputs for SubSystem: '<S106>/OldValue' */
      }

      /* End of If: '<S106>/If' */

      /* Sum: '<S106>/Sum' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S106>/offset'
       */
      BaseEngineController_A02_bak2_B.s106_Sum = rtb_Merge_f +
        (SparkDwell_offset_DataStore());

      /* RelationalOperator: '<S16>/Only Enable Spark when Energy is Above Zero' incorporates:
       *  Constant: '<S16>/Constant1'
       */
      BaseEngineController_A02_bak2_B.s16_OnlyEnableSparkwhenEnergyisAboveZero =
        ((BaseEngineController_A02_bak2_B.s111_SparkEnergy > 0.0));

      /* Update for UnitDelay: '<S106>/Unit Delay' */
      BaseEngineController_A02_bak2_DWork.s106_UnitDelay_DSTATE = rtb_Merge_f;
    }
  }
}
