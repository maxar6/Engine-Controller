/*
 * Trigger_FGND_TDC_EVENT_7146p0001.c
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

void Trigger_FGND_TDC_EVENT_7146p0001(void)
{
  /* Named constants for Stateflow: '<S798>/ECUP Latch' */
#define BaseEngineController_A02_bak2_IN_PowerDown (1U)
#define BaseEngineController_A02_bak2_IN_PowerUp (2U)

  if (BaseEngineController_A02_bak2_DWork.s399_motohawk_trigger_DWORK1) {
    /* Output and update for function-call system: '<S399>/TDC_Counter' */
    {
      int32_T tmp;

      /* Switch: '<S419>/Switch' incorporates:
       *  Constant: '<S419>/Constant1'
       *  Constant: '<S420>/Constant'
       *  RelationalOperator: '<S420>/RelOp'
       *  Sum: '<S419>/Sum'
       */
      if (BaseEngineController_A02_bak2_B.s399_UnitDelay == 2) {
        /* Sum: '<S419>/Sum' incorporates:
         *  Constant: '<S419>/Constant'
         *  UnitDelay: '<S419>/CrankCounter'
         */
        tmp = (int32_T)((uint32_T)
                        BaseEngineController_A02_bak2_DWork.s419_CrankCounter_DSTATE
                        + 1U);
        if ((uint32_T)tmp > 255U) {
          tmp = 255;
        }

        /* End of Sum: '<S419>/Sum' */
        BaseEngineController_A02_bak2_B.s419_Switch = (uint8_T)tmp;
      } else {
        BaseEngineController_A02_bak2_B.s419_Switch = 0U;
      }

      /* End of Switch: '<S419>/Switch' */

      /* Update for UnitDelay: '<S419>/CrankCounter' */
      BaseEngineController_A02_bak2_DWork.s419_CrankCounter_DSTATE =
        BaseEngineController_A02_bak2_B.s419_Switch;
    }
  }
}
