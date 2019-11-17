/*
 * Trigger_FGND_TDC_EVENT_7962p0001.c
 *
 * Code generation for model "BaseEngineController_LS.mdl".
 *
 * Model version              : 1.1767
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Sun Nov 17 02:36:28 2019
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_LS.h"
#include "BaseEngineController_LS_private.h"

void Trigger_FGND_TDC_EVENT_7962p0001(void)
{
  /* Named constants for Stateflow: '<S791>/ECUP Latch' */
#define BaseEngineController_LS_IN_PowerDown (1U)
#define BaseEngineController_LS_IN_PowerUp (2U)

  if (BaseEngineController_LS_DWork.s715_motohawk_trigger1_DWORK1) {
    /* Output and update for function-call system: '<S715>/TDC_Counter' */
    {
      int32_T tmp;

      /* Switch: '<S717>/Switch1' incorporates:
       *  Constant: '<S717>/Constant1'
       *  Sum: '<S717>/Sum'
       */
      if (BaseEngineController_LS_B.s715_CrankCounter >= 1.0) {
        BaseEngineController_LS_B.s717_Switch1 = 0U;
      } else {
        /* Sum: '<S717>/Sum' incorporates:
         *  Constant: '<S717>/Constant'
         *  UnitDelay: '<S717>/CrankCounter'
         */
        tmp = (int32_T)(1U + (uint32_T)BaseEngineController_LS_B.s717_Switch1);
        if ((uint32_T)tmp > 255U) {
          tmp = 255;
        }

        /* End of Sum: '<S717>/Sum' */
        BaseEngineController_LS_B.s717_Switch1 = (uint8_T)tmp;
      }

      /* End of Switch: '<S717>/Switch1' */
    }
  }
}
