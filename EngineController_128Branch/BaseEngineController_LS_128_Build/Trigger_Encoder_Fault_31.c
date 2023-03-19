/*
 * Trigger_Encoder_Fault_31.c
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

void Trigger_Encoder_Fault_31(void)
{
  {
    extern void Timer_FreeRunningCounter_GetTime(uint32_T *lower32Bits, uint32_T
      *upper32Bits);
    uint32_T lower32Bits;
    uint32_T upper32Bits;
    Timer_FreeRunningCounter_GetTime(&lower32Bits, &upper32Bits);
    BaseEngineController_LS_128_M->Timing.clockTick0 = lower32Bits;
    BaseEngineController_LS_128_M->Timing.clockTickH0 = upper32Bits;
  }

  /* Output and update for function-call system: '<S549>/motohawk_model_probe_eval_f' */

  /* Sum: '<S556>/Sum' incorporates:
   *  Constant: '<S556>/Constant'
   *  UnitDelay: '<S556>/Unit Delay'
   */
  BaseEngineController_LS_128_B.s556_Sum = 1U +
    BaseEngineController_LS_128_DWork.s556_UnitDelay_DSTATE;

  /* Update for UnitDelay: '<S556>/Unit Delay' */
  BaseEngineController_LS_128_DWork.s556_UnitDelay_DSTATE =
    BaseEngineController_LS_128_B.s556_Sum;
}
