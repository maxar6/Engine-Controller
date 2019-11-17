/*
 * Trigger_FGND_TDC1_EVENT_865p0001.c
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

void Trigger_FGND_TDC1_EVENT_865p0001(void)
{
  /* Named constants for Stateflow: '<S791>/ECUP Latch' */
#define BaseEngineController_LS_IN_PowerDown (1U)
#define BaseEngineController_LS_IN_PowerUp (2U)

  if (BaseEngineController_LS_DWork.s98_motohawk_trigger_DWORK1) {
    /* Output and update for function-call system: '<S98>/SequencyCutMachine' */
    {
      uint8_T rtb_Sum1_l;
      real_T rtb_Sum2;
      int32_T i;

      /* Inport: '<S108>/CutArray' */
      for (i = 0; i < 8; i++) {
        BaseEngineController_LS_B.s108_CutArray[i] =
          BaseEngineController_LS_B.s98_MultiportSwitch[i];
      }

      /* End of Inport: '<S108>/CutArray' */

      /* Sum: '<S108>/Sum1' incorporates:
       *  Constant: '<S108>/Constant'
       */
      i = (int32_T)((uint32_T)BaseEngineController_LS_B.s98_UnitDelay1 + 1U);
      if ((uint32_T)i > 255U) {
        i = 255;
      }

      rtb_Sum1_l = (uint8_T)i;

      /* End of Sum: '<S108>/Sum1' */

      /* Switch: '<S108>/Switch' incorporates:
       *  Constant: '<S108>/Constant10'
       *  Constant: '<S108>/Constant11'
       *  RelationalOperator: '<S108>/Relational Operator'
       */
      if (5 <= rtb_Sum1_l) {
        BaseEngineController_LS_B.s108_Switch = 1U;
      } else {
        BaseEngineController_LS_B.s108_Switch = rtb_Sum1_l;
      }

      /* End of Switch: '<S108>/Switch' */

      /* Sum: '<S108>/Sum2' incorporates:
       *  Constant: '<S108>/Constant1'
       *  RelationalOperator: '<S108>/Relational Operator1'
       */
      rtb_Sum2 = (real_T)(BaseEngineController_LS_B.s108_Switch == 4) +
        BaseEngineController_LS_B.s98_UnitDelay2;

      /* Switch: '<S108>/Switch1' incorporates:
       *  Constant: '<S108>/Constant2'
       *  Constant: '<S108>/Constant3'
       *  RelationalOperator: '<S108>/Relational Operator2'
       */
      if (5.0 <= rtb_Sum2) {
        BaseEngineController_LS_B.s108_Switch1 = 1.0;
      } else {
        BaseEngineController_LS_B.s108_Switch1 = rtb_Sum2;
      }

      /* End of Switch: '<S108>/Switch1' */
    }
  }
}
