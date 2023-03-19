/*
 * Trigger_FGND_MID_TDC_EVENT_9721p0004.c
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

void Trigger_FGND_MID_TDC_EVENT_9721p0004(void)
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

  if (BaseEngineController_LS_112_DWork.s561_motohawk_trigger5_DWORK1) {
    /* Output and update for function-call system: '<S561>/MID_TDC' */
    {
      /* local block i/o variables */
      uint16_T rtb_motohawk_ain_read;

      /* S-Function Block: <S610>/motohawk_ain_read Resource: MAPSensorPin */
      rtb_motohawk_ain_read = MAPSensorPin_AnalogInput_Get();

      /* DataTypeConversion: '<S610>/Data Type Conversion' incorporates:
       *  S-Function (motohawk_sfun_ain_read): '<S610>/motohawk_ain_read'
       */
      BaseEngineController_LS_112_B.s561_Merge = (real_T)rtb_motohawk_ain_read;
    }
  }
}
