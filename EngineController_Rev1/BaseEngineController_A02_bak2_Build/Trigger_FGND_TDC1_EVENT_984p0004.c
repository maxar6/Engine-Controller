/*
 * Trigger_FGND_TDC1_EVENT_984p0004.c
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

void Trigger_FGND_TDC1_EVENT_984p0004(void)
{
  /* Named constants for Stateflow: '<S798>/ECUP Latch' */
#define BaseEngineController_A02_bak2_IN_PowerDown (1U)
#define BaseEngineController_A02_bak2_IN_PowerUp (2U)

  if (BaseEngineController_A02_bak2_DWork.s91_motohawk_trigger_DWORK1) {
    /* Output and update for function-call system: '<S91>/SequencyCutMachine' */
    {
      uint8_T rtb_Sum1_d;
      real_T rtb_Sum2;
      int32_T i;

      /* Inport: '<S101>/CutArray' */
      for (i = 0; i < 8; i++) {
        BaseEngineController_A02_bak2_B.s101_CutArray[i] =
          BaseEngineController_A02_bak2_B.s91_MultiportSwitch[i];
      }

      /* End of Inport: '<S101>/CutArray' */

      /* Sum: '<S101>/Sum1' incorporates:
       *  Constant: '<S101>/Constant'
       */
      i = (int32_T)((uint32_T)BaseEngineController_A02_bak2_B.s91_UnitDelay1 +
                    1U);
      if ((uint32_T)i > 255U) {
        i = 255;
      }

      rtb_Sum1_d = (uint8_T)i;

      /* End of Sum: '<S101>/Sum1' */

      /* Switch: '<S101>/Switch' incorporates:
       *  Constant: '<S101>/Constant10'
       *  Constant: '<S101>/Constant11'
       *  RelationalOperator: '<S101>/Relational Operator'
       */
      if (5 <= rtb_Sum1_d) {
        BaseEngineController_A02_bak2_B.s101_Switch = 1U;
      } else {
        BaseEngineController_A02_bak2_B.s101_Switch = rtb_Sum1_d;
      }

      /* End of Switch: '<S101>/Switch' */

      /* Sum: '<S101>/Sum2' incorporates:
       *  Constant: '<S101>/Constant1'
       *  RelationalOperator: '<S101>/Relational Operator1'
       */
      rtb_Sum2 = (real_T)(BaseEngineController_A02_bak2_B.s101_Switch == 4) +
        BaseEngineController_A02_bak2_B.s91_UnitDelay2;

      /* Switch: '<S101>/Switch1' incorporates:
       *  Constant: '<S101>/Constant2'
       *  Constant: '<S101>/Constant3'
       *  RelationalOperator: '<S101>/Relational Operator2'
       */
      if (5.0 <= rtb_Sum2) {
        BaseEngineController_A02_bak2_B.s101_Switch1 = 1.0;
      } else {
        BaseEngineController_A02_bak2_B.s101_Switch1 = rtb_Sum2;
      }

      /* End of Switch: '<S101>/Switch1' */
    }
  }
}
