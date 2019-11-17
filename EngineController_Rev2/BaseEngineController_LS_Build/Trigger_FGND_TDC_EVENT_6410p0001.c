/*
 * Trigger_FGND_TDC_EVENT_6410p0001.c
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

void Trigger_FGND_TDC_EVENT_6410p0001(void)
{
  /* Named constants for Stateflow: '<S791>/ECUP Latch' */
#define BaseEngineController_LS_IN_PowerDown (1U)
#define BaseEngineController_LS_IN_PowerUp (2U)

  if (BaseEngineController_LS_DWork.s370_motohawk_trigger_DWORK1) {
    /* Output and update for function-call system: '<S370>/TDC_Counter' */
    {
      int32_T tmp;

      /* Switch: '<S390>/Switch' incorporates:
       *  Constant: '<S390>/Constant1'
       *  Constant: '<S391>/Constant'
       *  RelationalOperator: '<S391>/RelOp'
       *  Sum: '<S390>/Sum'
       */
      if (BaseEngineController_LS_B.s370_UnitDelay == 2) {
        /* Sum: '<S390>/Sum' incorporates:
         *  Constant: '<S390>/Constant'
         *  UnitDelay: '<S390>/CrankCounter'
         */
        tmp = (int32_T)((uint32_T)
                        BaseEngineController_LS_DWork.s390_CrankCounter_DSTATE +
                        1U);
        if ((uint32_T)tmp > 255U) {
          tmp = 255;
        }

        /* End of Sum: '<S390>/Sum' */
        BaseEngineController_LS_B.s390_Switch = (uint8_T)tmp;
      } else {
        BaseEngineController_LS_B.s390_Switch = 0U;
      }

      /* End of Switch: '<S390>/Switch' */

      /* Update for UnitDelay: '<S390>/CrankCounter' */
      BaseEngineController_LS_DWork.s390_CrankCounter_DSTATE =
        BaseEngineController_LS_B.s390_Switch;
    }
  }
}
