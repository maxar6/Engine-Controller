/*
 * Trigger_FGND_20XRTI_PERIODIC_9522p0006.c
 *
 * Code generation for model "BaseEngineController_LS.mdl".
 *
 * Model version              : 1.2222
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Sun Mar 19 22:34:25 2023
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_LS.h"
#include "BaseEngineController_LS_private.h"

void Trigger_FGND_20XRTI_PERIODIC_9522p0006(void)
{
  /* Named constants for Stateflow: '<S862>/ECUP Latch' */
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

  if (BaseEngineController_LS_DWork.s660_motohawk_trigger_DWORK1) {
    /* Output and update for function-call system: '<S660>/Function-Call Subsystem' */
    {
      boolean_T rtb_InitialConditionisTrue_d;

      /* UnitDelay: '<S668>/Initial Condition is True' */
      rtb_InitialConditionisTrue_d =
        BaseEngineController_LS_DWork.s668_InitialConditionisTrue_DSTATE;

      /* Logic: '<S667>/Logical Operator' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S667>/motohawk_calibration'
       */
      BaseEngineController_LS_B.s667_LogicalOperator =
        ((rtb_InitialConditionisTrue_d || (APP2_AlwaysAdapt_DataStore())));

      /* Update for UnitDelay: '<S668>/Initial Condition is True' incorporates:
       *  Constant: '<S668>/False After First Sample'
       */
      BaseEngineController_LS_DWork.s668_InitialConditionisTrue_DSTATE = FALSE;
    }
  }
}
