/*
 * Trigger_FGND_5XRTI_PERIODIC_1411p0001.c
 *
 * Code generation for model "BaseEngineController_LS.mdl".
 *
 * Model version              : 1.2049
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Tue Aug 16 23:25:15 2022
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_LS.h"
#include "BaseEngineController_LS_private.h"

void Trigger_FGND_5XRTI_PERIODIC_1411p0001(void)
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

  if (BaseEngineController_LS_DWork.s14_motohawk_trigger_DWORK1) {
    /* Output and update for function-call system: '<S14>/Spark Advance to Start Angle' */

    /* Sum: '<S23>/Sum' incorporates:
     *  Constant: '<S23>/deg//rev'
     *  Constant: '<S23>/min//msec'
     *  Product: '<S23>/Product1'
     *  Product: '<S23>/Product2'
     */
    BaseEngineController_LS_B.s23_Sum = BaseEngineController_LS_B.s628_Sum1 *
      360.0 / 60000.0 * BaseEngineController_LS_B.s130_Sum +
      BaseEngineController_LS_B.s135_SparkAdv;
  }
}
