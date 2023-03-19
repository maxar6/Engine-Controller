/*
 * Trigger_FGND_TDC1_EVENT_869p0001.c
 *
 * Code generation for model "BaseEngineController_LS.mdl".
 *
 * Model version              : 1.2195
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Sun Nov 27 15:42:41 2022
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_LS.h"
#include "BaseEngineController_LS_private.h"

void Trigger_FGND_TDC1_EVENT_869p0001(void)
{
  /* Named constants for Stateflow: '<S942>/ECUP Latch' */
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

  if (BaseEngineController_LS_DWork.s72_motohawk_trigger_DWORK1) {
    /* Output and update for function-call system: '<S72>/SequencyCutMachine' */
    {
      uint8_T rtb_Sum1_l;
      real_T rtb_Sum2;
      int32_T i;

      /* Inport: '<S82>/CutArray' */
      for (i = 0; i < 8; i++) {
        BaseEngineController_LS_B.s82_CutArray[i] =
          BaseEngineController_LS_B.s72_MultiportSwitch[i];
      }

      /* End of Inport: '<S82>/CutArray' */

      /* Sum: '<S82>/Sum1' incorporates:
       *  Constant: '<S82>/Constant'
       */
      i = (int32_T)((uint32_T)BaseEngineController_LS_B.s72_UnitDelay1 + 1U);
      if ((uint32_T)i > 255U) {
        i = 255;
      }

      rtb_Sum1_l = (uint8_T)i;

      /* End of Sum: '<S82>/Sum1' */

      /* Switch: '<S82>/Switch' incorporates:
       *  Constant: '<S82>/Constant10'
       *  Constant: '<S82>/Constant11'
       *  RelationalOperator: '<S82>/Relational Operator'
       */
      if (5 <= rtb_Sum1_l) {
        BaseEngineController_LS_B.s82_Switch = 1U;
      } else {
        BaseEngineController_LS_B.s82_Switch = rtb_Sum1_l;
      }

      /* End of Switch: '<S82>/Switch' */

      /* Sum: '<S82>/Sum2' incorporates:
       *  Constant: '<S82>/Constant1'
       *  RelationalOperator: '<S82>/Relational Operator1'
       */
      rtb_Sum2 = (real_T)(BaseEngineController_LS_B.s82_Switch == 4) +
        BaseEngineController_LS_B.s72_UnitDelay2;

      /* Switch: '<S82>/Switch1' incorporates:
       *  Constant: '<S82>/Constant2'
       *  Constant: '<S82>/Constant3'
       *  RelationalOperator: '<S82>/Relational Operator2'
       */
      if (5.0 <= rtb_Sum2) {
        BaseEngineController_LS_B.s82_Switch1 = 1.0;
      } else {
        BaseEngineController_LS_B.s82_Switch1 = rtb_Sum2;
      }

      /* End of Switch: '<S82>/Switch1' */
    }
  }
}
