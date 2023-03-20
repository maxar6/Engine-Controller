/*
 * Trigger_FGND_TDC_EVENT_7871p001.c
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

void Trigger_FGND_TDC_EVENT_7871p001(void)
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

  if (BaseEngineController_LS_DWork.s432_motohawk_trigger_DWORK1) {
    /* Output and update for function-call system: '<S432>/TDC_Counter' */
    {
      int32_T tmp;

      /* Switch: '<S455>/Switch' incorporates:
       *  Constant: '<S455>/Constant1'
       *  Constant: '<S459>/Constant'
       *  RelationalOperator: '<S459>/RelOp'
       *  Sum: '<S455>/Sum'
       */
      if (BaseEngineController_LS_B.s432_UnitDelay == 2) {
        /* Sum: '<S455>/Sum' incorporates:
         *  Constant: '<S455>/Constant'
         *  UnitDelay: '<S455>/CrankCounter'
         */
        tmp = (int32_T)((uint32_T)
                        BaseEngineController_LS_DWork.s455_CrankCounter_DSTATE +
                        1U);
        if ((uint32_T)tmp > 255U) {
          tmp = 255;
        }

        /* End of Sum: '<S455>/Sum' */
        BaseEngineController_LS_B.s455_Switch = (uint8_T)tmp;
      } else {
        BaseEngineController_LS_B.s455_Switch = 0U;
      }

      /* End of Switch: '<S455>/Switch' */

      /* Update for UnitDelay: '<S455>/CrankCounter' */
      BaseEngineController_LS_DWork.s455_CrankCounter_DSTATE =
        BaseEngineController_LS_B.s455_Switch;
    }
  }
}
