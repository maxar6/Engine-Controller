/*
 * Trigger_FGND_TDC_EVENT_5546p0017.c
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

void Trigger_FGND_TDC_EVENT_5546p0017(void)
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

  if (BaseEngineController_LS_DWork.s854_motohawk_trigger1_DWORK1) {
    /* Output and update for function-call system: '<S854>/TDC_Counter' */
    {
      int32_T tmp;

      /* Switch: '<S856>/Switch1' incorporates:
       *  Constant: '<S856>/Constant1'
       *  Sum: '<S856>/Sum'
       */
      if (BaseEngineController_LS_B.s854_CrankCounter >= 1.0) {
        BaseEngineController_LS_B.s856_Switch1 = 0U;
      } else {
        /* Sum: '<S856>/Sum' incorporates:
         *  Constant: '<S856>/Constant'
         *  UnitDelay: '<S856>/CrankCounter'
         */
        tmp = (int32_T)(1U + (uint32_T)BaseEngineController_LS_B.s856_Switch1);
        if ((uint32_T)tmp > 255U) {
          tmp = 255;
        }

        /* End of Sum: '<S856>/Sum' */
        BaseEngineController_LS_B.s856_Switch1 = (uint8_T)tmp;
      }

      /* End of Switch: '<S856>/Switch1' */
    }
  }
}
