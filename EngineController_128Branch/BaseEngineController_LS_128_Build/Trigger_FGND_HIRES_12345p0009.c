/*
 * Trigger_FGND_HIRES_12345p0009.c
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

void Trigger_FGND_HIRES_12345p0009(void)
{
  /* Named constants for Stateflow: '<S932>/ECUP Latch' */
#define BaseEngineController_LS_128_IN_PowerDown (1U)
#define BaseEngineController_LS_128_IN_PowerUp (2U)

  {
    extern void Timer_FreeRunningCounter_GetTime(uint32_T *lower32Bits, uint32_T
      *upper32Bits);
    uint32_T lower32Bits;
    uint32_T upper32Bits;
    Timer_FreeRunningCounter_GetTime(&lower32Bits, &upper32Bits);
    BaseEngineController_LS_128_M->Timing.clockTick0 = lower32Bits;
    BaseEngineController_LS_128_M->Timing.clockTickH0 = upper32Bits;
  }

  {
    /* Output and update for function-call system: '<S350>/Tooth Time' */

    /* S-Function Block: <S351>/motohawk_abs_time */
    {
      extern void Timer_FreeRunningCounter_GetTime(uint32_T *lower32Bits_us,
        uint32_T *upper32Bits_us);
      Timer_FreeRunningCounter_GetTime
        (&BaseEngineController_LS_128_B.s351_motohawk_abs_time, NULL);
    }
  }
}