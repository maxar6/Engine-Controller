/*
 * Trigger_FGND_HIRES_8806p0073.c
 *
 * Code generation for model "BaseEngineController_LS.mdl".
 *
 * Model version              : 1.2185
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Mon Nov 21 23:22:06 2022
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_LS.h"
#include "BaseEngineController_LS_private.h"

void Trigger_FGND_HIRES_8806p0073(void)
{
  /* Named constants for Stateflow: '<S932>/ECUP Latch' */
#define BaseEngineController_LS_IN_PowerDown (1U)
#define BaseEngineController_LS_IN_PowerUp (2U)

  {
    extern void Timer_FreeRunningCounter_GetTime(uint32_T *lower32Bits, uint32_T
      *upper32Bits);
    uint32_T lower32Bits;
    uint32_T upper32Bits;
    Timer_FreeRunningCounter_GetTime(&lower32Bits, &upper32Bits);
    BaseEngineController_LS_M->Timing.clockTick0 = lower32Bits;
    BaseEngineController_LS_M->Timing.clockTickH0 = upper32Bits;
  }

  {
    /* Output and update for function-call system: '<S350>/Tooth Time' */

    /* S-Function Block: <S351>/motohawk_abs_time */
    {
      extern void Timer_FreeRunningCounter_GetTime(uint32_T *lower32Bits_us,
        uint32_T *upper32Bits_us);
      Timer_FreeRunningCounter_GetTime
        (&BaseEngineController_LS_B.s351_motohawk_abs_time, NULL);
    }
  }
}
