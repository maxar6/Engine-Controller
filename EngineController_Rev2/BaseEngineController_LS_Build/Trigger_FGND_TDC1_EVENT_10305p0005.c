/*
 * Trigger_FGND_TDC1_EVENT_10305p0005.c
 *
 * Code generation for model "BaseEngineController_LS.mdl".
 *
 * Model version              : 1.2107
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Sat Nov 12 21:04:35 2022
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_LS.h"
#include "BaseEngineController_LS_private.h"

void Trigger_FGND_TDC1_EVENT_10305p0005(void)
{
  /* Named constants for Stateflow: '<S1000>/ECUP Latch' */
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

  if (BaseEngineController_LS_DWork.s102_motohawk_trigger_DWORK1) {
    /* Output and update for function-call system: '<S102>/SequencyCutMachine' */
    {
      uint8_T rtb_Sum1_l;
      real_T rtb_Sum2;
      int32_T i;

      /* Inport: '<S121>/CutArray' */
      for (i = 0; i < 8; i++) {
        BaseEngineController_LS_B.s121_CutArray[i] =
          BaseEngineController_LS_B.s102_MultiportSwitch[i];
      }

      /* End of Inport: '<S121>/CutArray' */

      /* Sum: '<S121>/Sum1' incorporates:
       *  Constant: '<S121>/Constant'
       */
      i = (int32_T)((uint32_T)BaseEngineController_LS_B.s102_UnitDelay1 + 1U);
      if ((uint32_T)i > 255U) {
        i = 255;
      }

      rtb_Sum1_l = (uint8_T)i;

      /* End of Sum: '<S121>/Sum1' */

      /* Switch: '<S121>/Switch' incorporates:
       *  Constant: '<S121>/Constant10'
       *  Constant: '<S121>/Constant11'
       *  RelationalOperator: '<S121>/Relational Operator'
       */
      if (5 <= rtb_Sum1_l) {
        BaseEngineController_LS_B.s121_Switch = 1U;
      } else {
        BaseEngineController_LS_B.s121_Switch = rtb_Sum1_l;
      }

      /* End of Switch: '<S121>/Switch' */

      /* Sum: '<S121>/Sum2' incorporates:
       *  Constant: '<S121>/Constant1'
       *  RelationalOperator: '<S121>/Relational Operator1'
       */
      rtb_Sum2 = (real_T)(BaseEngineController_LS_B.s121_Switch == 4) +
        BaseEngineController_LS_B.s102_UnitDelay2;

      /* Switch: '<S121>/Switch1' incorporates:
       *  Constant: '<S121>/Constant2'
       *  Constant: '<S121>/Constant3'
       *  RelationalOperator: '<S121>/Relational Operator2'
       */
      if (5.0 <= rtb_Sum2) {
        BaseEngineController_LS_B.s121_Switch1 = 1.0;
      } else {
        BaseEngineController_LS_B.s121_Switch1 = rtb_Sum2;
      }

      /* End of Switch: '<S121>/Switch1' */
    }
  }
}
