/*
 * Trigger_FGND_20XRTI_PERIODIC_5658p001.c
 *
 * Code generation for model "BaseEngineController_LS.mdl".
 *
 * Model version              : 1.2098
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Sat Nov 12 20:07:34 2022
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_LS.h"
#include "BaseEngineController_LS_private.h"

void Trigger_FGND_20XRTI_PERIODIC_5658p001(void)
{
  /* Named constants for Stateflow: '<S999>/ECUP Latch' */
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

  if (BaseEngineController_LS_DWork.s750_motohawk_trigger_DWORK1) {
    /* Output and update for function-call system: '<S750>/Function-Call Subsystem' */
    {
      boolean_T rtb_InitialConditionisTrue_a;

      /* UnitDelay: '<S768>/Initial Condition is True' */
      rtb_InitialConditionisTrue_a =
        BaseEngineController_LS_DWork.s768_InitialConditionisTrue_DSTATE;

      /* Logic: '<S767>/Logical Operator' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S767>/motohawk_calibration'
       */
      BaseEngineController_LS_B.s767_LogicalOperator =
        ((rtb_InitialConditionisTrue_a || (APP1_AlwaysAdapt_DataStore())));

      /* Update for UnitDelay: '<S768>/Initial Condition is True' incorporates:
       *  Constant: '<S768>/False After First Sample'
       */
      BaseEngineController_LS_DWork.s768_InitialConditionisTrue_DSTATE = FALSE;
    }
  }
}
