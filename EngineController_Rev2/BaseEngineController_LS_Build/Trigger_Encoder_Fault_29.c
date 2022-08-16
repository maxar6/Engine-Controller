/*
 * Trigger_Encoder_Fault_29.c
 *
 * Code generation for model "BaseEngineController_LS.mdl".
 *
 * Model version              : 1.2035
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Mon Aug 15 22:38:43 2022
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_LS.h"
#include "BaseEngineController_LS_private.h"

void Trigger_Encoder_Fault_29(void)
{
  {
    extern void Timer_FreeRunningCounter_GetTime(uint32_T *lower32Bits, uint32_T
      *upper32Bits);
    uint32_T lower32Bits;
    uint32_T upper32Bits;
    Timer_FreeRunningCounter_GetTime(&lower32Bits, &upper32Bits);
    BaseEngineController_LS_M->Timing.clockTick0 = lower32Bits;
    BaseEngineController_LS_M->Timing.clockTickH0 = upper32Bits;
  }

  /* Output and update for function-call system: '<S620>/motohawk_model_probe_eval_f' */

  /* Sum: '<S627>/Sum' incorporates:
   *  Constant: '<S627>/Constant'
   *  UnitDelay: '<S627>/Unit Delay'
   */
  BaseEngineController_LS_B.s627_Sum = 1U +
    BaseEngineController_LS_DWork.s627_UnitDelay_DSTATE;

  /* Update for UnitDelay: '<S627>/Unit Delay' */
  BaseEngineController_LS_DWork.s627_UnitDelay_DSTATE =
    BaseEngineController_LS_B.s627_Sum;
}
