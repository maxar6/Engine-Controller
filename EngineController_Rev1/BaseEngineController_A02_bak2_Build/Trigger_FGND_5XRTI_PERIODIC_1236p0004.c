/*
 * Trigger_FGND_5XRTI_PERIODIC_1236p0004.c
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

void Trigger_FGND_5XRTI_PERIODIC_1236p0004(void)
{
  /* Named constants for Stateflow: '<S800>/ECUP Latch' */
#define BaseEngineController_A02_bak2_IN_PowerDown (1U)
#define BaseEngineController_A02_bak2_IN_PowerUp (2U)

  if (BaseEngineController_A02_bak2_DWork.s6_motohawk_trigger_DWORK1) {
    /* Output and update for function-call system: '<S6>/Spark Advance to Start Angle' */

    /* Sum: '<S15>/Sum' incorporates:
     *  Constant: '<S15>/deg//rev'
     *  Constant: '<S15>/min//msec'
     *  Product: '<S15>/Product1'
     *  Product: '<S15>/Product2'
     */
    BaseEngineController_A02_bak2_B.s15_Sum =
      BaseEngineController_A02_bak2_B.s540_Sum1 * 360.0 / 60000.0 *
      BaseEngineController_A02_bak2_B.s106_Sum +
      BaseEngineController_A02_bak2_B.s111_SparkAdv;
  }
}
