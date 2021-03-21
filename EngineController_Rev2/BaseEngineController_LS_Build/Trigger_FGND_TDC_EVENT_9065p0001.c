/*
 * Trigger_FGND_TDC_EVENT_9065p0001.c
 *
 * Code generation for model "BaseEngineController_LS.mdl".
 *
 * Model version              : 1.1996
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Thu Mar 18 14:59:10 2021
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_LS.h"
#include "BaseEngineController_LS_private.h"

void Trigger_FGND_TDC_EVENT_9065p0001(void)
{
  /* Named constants for Stateflow: '<S913>/ECUP Latch' */
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

  if (BaseEngineController_LS_DWork.s827_motohawk_trigger1_DWORK1) {
    /* Output and update for function-call system: '<S827>/TDC_Counter' */
    {
      int32_T tmp;

      /* Switch: '<S829>/Switch1' incorporates:
       *  Constant: '<S829>/Constant1'
       *  Sum: '<S829>/Sum'
       */
      if (BaseEngineController_LS_B.s827_CrankCounter >= 1.0) {
        BaseEngineController_LS_B.s829_Switch1 = 0U;
      } else {
        /* Sum: '<S829>/Sum' incorporates:
         *  Constant: '<S829>/Constant'
         *  UnitDelay: '<S829>/CrankCounter'
         */
        tmp = (int32_T)(1U + (uint32_T)BaseEngineController_LS_B.s829_Switch1);
        if ((uint32_T)tmp > 255U) {
          tmp = 255;
        }

        /* End of Sum: '<S829>/Sum' */
        BaseEngineController_LS_B.s829_Switch1 = (uint8_T)tmp;
      }

      /* End of Switch: '<S829>/Switch1' */
    }
  }
}
