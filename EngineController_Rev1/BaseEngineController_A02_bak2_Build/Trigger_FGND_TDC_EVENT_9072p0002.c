/*
 * Trigger_FGND_TDC_EVENT_9072p0002.c
 *
 * Code generation for model "BaseEngineController_A02_bak2.mdl".
 *
 * Model version              : 1.1531
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Tue Jan 01 09:48:38 2019
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_A02_bak2.h"
#include "BaseEngineController_A02_bak2_private.h"

void Trigger_FGND_TDC_EVENT_9072p0002(void)
{
  /* Named constants for Stateflow: '<S798>/ECUP Latch' */
#define BaseEngineController_A02_bak2_IN_PowerDown (1U)
#define BaseEngineController_A02_bak2_IN_PowerUp (2U)

  if (BaseEngineController_A02_bak2_DWork.s721_motohawk_trigger1_DWORK1) {
    /* Output and update for function-call system: '<S721>/TDC_Counter' */
    {
      int32_T tmp;

      /* Switch: '<S723>/Switch1' incorporates:
       *  Constant: '<S723>/Constant1'
       *  Sum: '<S723>/Sum'
       */
      if (BaseEngineController_A02_bak2_B.s721_CrankCounter >= 1.0) {
        BaseEngineController_A02_bak2_B.s723_Switch1 = 0U;
      } else {
        /* Sum: '<S723>/Sum' incorporates:
         *  Constant: '<S723>/Constant'
         *  UnitDelay: '<S723>/CrankCounter'
         */
        tmp = (int32_T)(1U + (uint32_T)
                        BaseEngineController_A02_bak2_B.s723_Switch1);
        if ((uint32_T)tmp > 255U) {
          tmp = 255;
        }

        /* End of Sum: '<S723>/Sum' */
        BaseEngineController_A02_bak2_B.s723_Switch1 = (uint8_T)tmp;
      }

      /* End of Switch: '<S723>/Switch1' */
    }
  }
}
