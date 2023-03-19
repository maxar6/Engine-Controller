/*
 * Trigger_Encoder_Fault_30.c
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

void Trigger_Encoder_Fault_30(void)
{
  {
    extern void Timer_FreeRunningCounter_GetTime(uint32_T *lower32Bits, uint32_T
      *upper32Bits);
    uint32_T lower32Bits;
    uint32_T upper32Bits;
    Timer_FreeRunningCounter_GetTime(&lower32Bits, &upper32Bits);
    BaseEngineController_LS_112_M->Timing.clockTick0 = lower32Bits;
    BaseEngineController_LS_112_M->Timing.clockTickH0 = upper32Bits;
  }

  /* Output and update for function-call system: '<S547>/motohawk_model_probe_eval_f' */

  /* Sum: '<S554>/Sum' incorporates:
   *  Constant: '<S554>/Constant'
   *  UnitDelay: '<S554>/Unit Delay'
   */
  BaseEngineController_LS_112_B.s554_Sum = 1U +
    BaseEngineController_LS_112_DWork.s554_UnitDelay_DSTATE;

  /* Update for UnitDelay: '<S554>/Unit Delay' */
  BaseEngineController_LS_112_DWork.s554_UnitDelay_DSTATE =
    BaseEngineController_LS_112_B.s554_Sum;
}