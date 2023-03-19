/*
 * Trigger_FGND_20XRTI_PERIODIC_10085p0004.c
 *
 * Code generation for model "BaseEngineController_LS_128.mdl".
 *
 * Model version              : 1.2189
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Tue Nov 22 13:22:09 2022
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_LS_128.h"
#include "BaseEngineController_LS_128_private.h"

void Trigger_FGND_20XRTI_PERIODIC_10085p0004(void)
{
  /* Named constants for Stateflow: '<S932>/ECUP Latch' */
#define BaseEngineController_LS_128_IN_PowerDown (1U)
#define BaseEngineController_LS_128_IN_PowerUp (2U)

  {
    extern void Timer_FreeRunningCounter_GetTime(uint32_T *lower32Bits, uint32_T
      *upper32Bits);
    uint32_T lower32Bits;
    uint32_T upper32Bits;
    Timer_FreeRunningCounter_GetTime(&lower32Bits, &upper32Bits);
    BaseEngineController_LS_128_M->Timing.clockTick0 = lower32Bits;
    BaseEngineController_LS_128_M->Timing.clockTickH0 = upper32Bits;
  }

  if (BaseEngineController_LS_128_DWork.s693_motohawk_trigger_DWORK1) {
    /* Output and update for function-call system: '<S693>/Function-Call Subsystem' */
    {
      boolean_T rtb_InitialConditionisTrue_k;

      /* UnitDelay: '<S721>/Initial Condition is True' */
      rtb_InitialConditionisTrue_k =
        BaseEngineController_LS_128_DWork.s721_InitialConditionisTrue_DSTATE;

      /* Logic: '<S720>/Logical Operator' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S720>/motohawk_calibration'
       */
      BaseEngineController_LS_128_B.s720_LogicalOperator =
        ((rtb_InitialConditionisTrue_k || (APP2_AlwaysAdapt_DataStore())));

      /* Update for UnitDelay: '<S721>/Initial Condition is True' incorporates:
       *  Constant: '<S721>/False After First Sample'
       */
      BaseEngineController_LS_128_DWork.s721_InitialConditionisTrue_DSTATE =
        FALSE;
    }
  }
}