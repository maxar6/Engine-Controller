/*
 * Trigger_FGND_TDC_EVENT_7194p0001.c
 *
 * Code generation for model "BaseEngineController_LS.mdl".
 *
 * Model version              : 1.2035
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Mon Aug 15 22:38:43 2022
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_LS.h"
#include "BaseEngineController_LS_private.h"

void Trigger_FGND_TDC_EVENT_7194p0001(void)
{
  /* Named constants for Stateflow: '<S1039>/ECUP Latch' */
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

  if (BaseEngineController_LS_DWork.s418_motohawk_trigger_DWORK1) {
    /* Output and update for function-call system: '<S418>/TDC_Counter' */
    {
      int32_T tmp;

      /* Switch: '<S440>/Switch' incorporates:
       *  Constant: '<S440>/Constant1'
       *  Constant: '<S441>/Constant'
       *  RelationalOperator: '<S441>/RelOp'
       *  Sum: '<S440>/Sum'
       */
      if (BaseEngineController_LS_B.s418_UnitDelay == 2) {
        /* Sum: '<S440>/Sum' incorporates:
         *  Constant: '<S440>/Constant'
         *  UnitDelay: '<S440>/CrankCounter'
         */
        tmp = (int32_T)((uint32_T)
                        BaseEngineController_LS_DWork.s440_CrankCounter_DSTATE +
                        1U);
        if ((uint32_T)tmp > 255U) {
          tmp = 255;
        }

        /* End of Sum: '<S440>/Sum' */
        BaseEngineController_LS_B.s440_Switch = (uint8_T)tmp;
      } else {
        BaseEngineController_LS_B.s440_Switch = 0U;
      }

      /* End of Switch: '<S440>/Switch' */

      /* Update for UnitDelay: '<S440>/CrankCounter' */
      BaseEngineController_LS_DWork.s440_CrankCounter_DSTATE =
        BaseEngineController_LS_B.s440_Switch;
    }
  }
}
