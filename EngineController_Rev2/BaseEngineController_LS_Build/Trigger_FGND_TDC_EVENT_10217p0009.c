/*
 * Trigger_FGND_TDC_EVENT_10217p0009.c
 *
 * Code generation for model "BaseEngineController_LS.mdl".
 *
 * Model version              : 1.2222
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Sun Mar 19 22:34:25 2023
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_LS.h"
#include "BaseEngineController_LS_private.h"

void Trigger_FGND_TDC_EVENT_10217p0009(void)
{
  /* Named constants for Stateflow: '<S862>/ECUP Latch' */
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

  if (BaseEngineController_LS_DWork.s799_motohawk_trigger1_DWORK1) {
    /* Output and update for function-call system: '<S799>/TDC_Counter' */
    {
      int32_T tmp;

      /* Switch: '<S801>/Switch1' incorporates:
       *  Constant: '<S801>/Constant1'
       *  Sum: '<S801>/Sum'
       */
      if (BaseEngineController_LS_B.s799_CrankCounter >= 1.0) {
        BaseEngineController_LS_B.s801_Switch1 = 0U;
      } else {
        /* Sum: '<S801>/Sum' incorporates:
         *  Constant: '<S801>/Constant'
         *  UnitDelay: '<S801>/CrankCounter'
         */
        tmp = (int32_T)(1U + (uint32_T)BaseEngineController_LS_B.s801_Switch1);
        if ((uint32_T)tmp > 255U) {
          tmp = 255;
        }

        /* End of Sum: '<S801>/Sum' */
        BaseEngineController_LS_B.s801_Switch1 = (uint8_T)tmp;
      }

      /* End of Switch: '<S801>/Switch1' */
    }
  }
}
