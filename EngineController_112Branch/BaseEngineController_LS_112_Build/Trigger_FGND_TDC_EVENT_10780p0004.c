/*
 * Trigger_FGND_TDC_EVENT_10780p0004.c
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

void Trigger_FGND_TDC_EVENT_10780p0004(void)
{
  /* Named constants for Stateflow: '<S930>/ECUP Latch' */
#define BaseEngineController_LS_112_IN_PowerDown (1U)
#define BaseEngineController_LS_112_IN_PowerUp (2U)

  {
    extern void Timer_FreeRunningCounter_GetTime(uint32_T *lower32Bits, uint32_T
      *upper32Bits);
    uint32_T lower32Bits;
    uint32_T upper32Bits;
    Timer_FreeRunningCounter_GetTime(&lower32Bits, &upper32Bits);
    BaseEngineController_LS_112_M->Timing.clockTick0 = lower32Bits;
    BaseEngineController_LS_112_M->Timing.clockTickH0 = upper32Bits;
  }

  if (BaseEngineController_LS_112_DWork.s852_motohawk_trigger1_DWORK1) {
    /* Output and update for function-call system: '<S852>/TDC_Counter' */
    {
      int32_T tmp;

      /* Switch: '<S854>/Switch1' incorporates:
       *  Constant: '<S854>/Constant1'
       *  Sum: '<S854>/Sum'
       */
      if (BaseEngineController_LS_112_B.s852_CrankCounter >= 1.0) {
        BaseEngineController_LS_112_B.s854_Switch1 = 0U;
      } else {
        /* Sum: '<S854>/Sum' incorporates:
         *  Constant: '<S854>/Constant'
         *  UnitDelay: '<S854>/CrankCounter'
         */
        tmp = (int32_T)(1U + (uint32_T)
                        BaseEngineController_LS_112_B.s854_Switch1);
        if ((uint32_T)tmp > 255U) {
          tmp = 255;
        }

        /* End of Sum: '<S854>/Sum' */
        BaseEngineController_LS_112_B.s854_Switch1 = (uint8_T)tmp;
      }

      /* End of Switch: '<S854>/Switch1' */
    }
  }
}