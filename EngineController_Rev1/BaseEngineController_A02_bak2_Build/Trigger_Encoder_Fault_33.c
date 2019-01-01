/*
 * Trigger_Encoder_Fault_33.c
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

void Trigger_Encoder_Fault_33(void)
{
  /* Output and update for function-call system: '<S532>/motohawk_model_probe_eval_f' */

  /* Sum: '<S539>/Sum' incorporates:
   *  Constant: '<S539>/Constant'
   *  UnitDelay: '<S539>/Unit Delay'
   */
  BaseEngineController_A02_bak2_B.s539_Sum = 1U +
    BaseEngineController_A02_bak2_DWork.s539_UnitDelay_DSTATE;

  /* Update for UnitDelay: '<S539>/Unit Delay' */
  BaseEngineController_A02_bak2_DWork.s539_UnitDelay_DSTATE =
    BaseEngineController_A02_bak2_B.s539_Sum;
}
