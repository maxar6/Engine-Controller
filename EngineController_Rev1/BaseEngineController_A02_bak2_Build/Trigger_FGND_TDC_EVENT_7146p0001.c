/*
 * Trigger_FGND_TDC_EVENT_7146p0001.c
 *
 * Code generation for model "BaseEngineController_A02_bak2.mdl".
 *
 * Model version              : 1.1532
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Tue Jan 01 10:29:48 2019
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_A02_bak2.h"
#include "BaseEngineController_A02_bak2_private.h"

void Trigger_FGND_TDC_EVENT_7146p0001(void)
{
  /* Named constants for Stateflow: '<S800>/ECUP Latch' */
#define BaseEngineController_A02_bak2_IN_PowerDown (1U)
#define BaseEngineController_A02_bak2_IN_PowerUp (2U)

  if (BaseEngineController_A02_bak2_DWork.s401_motohawk_trigger_DWORK1) {
    /* Output and update for function-call system: '<S401>/TDC_Counter' */
    {
      int32_T tmp;

      /* Switch: '<S421>/Switch' incorporates:
       *  Constant: '<S421>/Constant1'
       *  Constant: '<S422>/Constant'
       *  RelationalOperator: '<S422>/RelOp'
       *  Sum: '<S421>/Sum'
       */
      if (BaseEngineController_A02_bak2_B.s401_UnitDelay == 2) {
        /* Sum: '<S421>/Sum' incorporates:
         *  Constant: '<S421>/Constant'
         *  UnitDelay: '<S421>/CrankCounter'
         */
        tmp = (int32_T)((uint32_T)
                        BaseEngineController_A02_bak2_DWork.s421_CrankCounter_DSTATE
                        + 1U);
        if ((uint32_T)tmp > 255U) {
          tmp = 255;
        }

        /* End of Sum: '<S421>/Sum' */
        BaseEngineController_A02_bak2_B.s421_Switch = (uint8_T)tmp;
      } else {
        BaseEngineController_A02_bak2_B.s421_Switch = 0U;
      }

      /* End of Switch: '<S421>/Switch' */

      /* Update for UnitDelay: '<S421>/CrankCounter' */
      BaseEngineController_A02_bak2_DWork.s421_CrankCounter_DSTATE =
        BaseEngineController_A02_bak2_B.s421_Switch;
    }
  }
}
