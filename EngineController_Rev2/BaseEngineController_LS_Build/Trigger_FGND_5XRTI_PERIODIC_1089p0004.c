/*
 * Trigger_FGND_5XRTI_PERIODIC_1089p0004.c
 *
 * Code generation for model "BaseEngineController_LS.mdl".
 *
 * Model version              : 1.1767
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Sun Nov 17 02:36:28 2019
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_LS.h"
#include "BaseEngineController_LS_private.h"

void Trigger_FGND_5XRTI_PERIODIC_1089p0004(void)
{
  /* Named constants for Stateflow: '<S791>/ECUP Latch' */
#define BaseEngineController_LS_IN_PowerDown (1U)
#define BaseEngineController_LS_IN_PowerUp (2U)

  if (BaseEngineController_LS_DWork.s14_motohawk_trigger_DWORK1) {
    /* Output and update for function-call system: '<S14>/Spark Advance to Start Angle' */

    /* Sum: '<S23>/Sum' incorporates:
     *  Constant: '<S23>/deg//rev'
     *  Constant: '<S23>/min//msec'
     *  Product: '<S23>/Product1'
     *  Product: '<S23>/Product2'
     */
    BaseEngineController_LS_B.s23_Sum = BaseEngineController_LS_B.s459_Sum1 *
      360.0 / 60000.0 * BaseEngineController_LS_B.s113_Sum +
      BaseEngineController_LS_B.s118_SparkAdv;
  }
}
