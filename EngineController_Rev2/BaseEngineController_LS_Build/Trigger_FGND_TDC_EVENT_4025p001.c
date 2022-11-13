/*
 * Trigger_FGND_TDC_EVENT_4025p001.c
 *
 * Code generation for model "BaseEngineController_LS.mdl".
 *
 * Model version              : 1.2098
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Sat Nov 12 20:07:34 2022
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_LS.h"
#include "BaseEngineController_LS_private.h"

void Trigger_FGND_TDC_EVENT_4025p001(void)
{
  /* Named constants for Stateflow: '<S999>/ECUP Latch' */
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

  if (BaseEngineController_LS_DWork.s407_motohawk_trigger_DWORK1) {
    /* Output and update for function-call system: '<S407>/TDC_Counter' */
    {
      int32_T tmp;

      /* Switch: '<S429>/Switch' incorporates:
       *  Constant: '<S429>/Constant1'
       *  Constant: '<S430>/Constant'
       *  RelationalOperator: '<S430>/RelOp'
       *  Sum: '<S429>/Sum'
       */
      if (BaseEngineController_LS_B.s407_UnitDelay == 2) {
        /* Sum: '<S429>/Sum' incorporates:
         *  Constant: '<S429>/Constant'
         *  UnitDelay: '<S429>/CrankCounter'
         */
        tmp = (int32_T)((uint32_T)
                        BaseEngineController_LS_DWork.s429_CrankCounter_DSTATE +
                        1U);
        if ((uint32_T)tmp > 255U) {
          tmp = 255;
        }

        /* End of Sum: '<S429>/Sum' */
        BaseEngineController_LS_B.s429_Switch = (uint8_T)tmp;
      } else {
        BaseEngineController_LS_B.s429_Switch = 0U;
      }

      /* End of Switch: '<S429>/Switch' */

      /* Update for UnitDelay: '<S429>/CrankCounter' */
      BaseEngineController_LS_DWork.s429_CrankCounter_DSTATE =
        BaseEngineController_LS_B.s429_Switch;
    }
  }
}
