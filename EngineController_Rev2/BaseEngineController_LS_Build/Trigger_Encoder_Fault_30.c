/*
 * Trigger_Encoder_Fault_30.c
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

void Trigger_Encoder_Fault_30(void)
{
  /* Output and update for function-call system: '<S451>/motohawk_model_probe_eval_f' */

  /* Sum: '<S458>/Sum' incorporates:
   *  Constant: '<S458>/Constant'
   *  UnitDelay: '<S458>/Unit Delay'
   */
  BaseEngineController_LS_B.s458_Sum = 1U +
    BaseEngineController_LS_DWork.s458_UnitDelay_DSTATE;

  /* Update for UnitDelay: '<S458>/Unit Delay' */
  BaseEngineController_LS_DWork.s458_UnitDelay_DSTATE =
    BaseEngineController_LS_B.s458_Sum;
}
