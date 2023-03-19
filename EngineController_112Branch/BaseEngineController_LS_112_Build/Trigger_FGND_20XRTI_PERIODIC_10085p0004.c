/*
 * Trigger_FGND_20XRTI_PERIODIC_10085p0004.c
 *
 * Code generation for model "BaseEngineController_LS_112.mdl".
 *
 * Model version              : 1.2194
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Tue Nov 22 13:56:25 2022
 *
 * Target selection: motohawk_motocoder_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_LS_112.h"
#include "BaseEngineController_LS_112_private.h"

void Trigger_FGND_20XRTI_PERIODIC_10085p0004(void)
{
  /* Named constants for Stateflow: '<S930>/ECUP Latch' */
#define BaseEngineController_LS_112_IN_PowerDown (1U)
#define BaseEngineController_LS_112_IN_PowerUp (2U)

  {
    extern void Timer_FreeRunningCounter_GetTime(uint32_T *lower32Bits, uint32_T
      *upper32Bits);
    uint32_T lower32Bits;
    uint32_T upper32Bits;
    Timer_FreeRunningCounter_GetTime(&lower32Bits, &upper32Bits);
    BaseEngineController_LS_112_M->Timing.clockTick0 = lower32Bits;
    BaseEngineController_LS_112_M->Timing.clockTickH0 = upper32Bits;
  }

  if (BaseEngineController_LS_112_DWork.s691_motohawk_trigger_DWORK1) {
    /* Output and update for function-call system: '<S691>/Function-Call Subsystem' */
    {
      boolean_T rtb_InitialConditionisTrue_p;

      /* UnitDelay: '<S719>/Initial Condition is True' */
      rtb_InitialConditionisTrue_p =
        BaseEngineController_LS_112_DWork.s719_InitialConditionisTrue_DSTATE;

      /* Logic: '<S718>/Logical Operator' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S718>/motohawk_calibration'
       */
      BaseEngineController_LS_112_B.s718_LogicalOperator =
        ((rtb_InitialConditionisTrue_p || (APP2_AlwaysAdapt_DataStore())));

      /* Update for UnitDelay: '<S719>/Initial Condition is True' incorporates:
       *  Constant: '<S719>/False After First Sample'
       */
      BaseEngineController_LS_112_DWork.s719_InitialConditionisTrue_DSTATE =
        FALSE;
    }
  }
}