/*
 * Trigger_FGND_MID_TDC_EVENT_7170p0004.c
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

void Trigger_FGND_MID_TDC_EVENT_7170p0004(void)
{
  /* Named constants for Stateflow: '<S791>/ECUP Latch' */
#define BaseEngineController_LS_IN_PowerDown (1U)
#define BaseEngineController_LS_IN_PowerUp (2U)

  if (BaseEngineController_LS_DWork.s465_motohawk_trigger5_DWORK1) {
    /* Output and update for function-call system: '<S465>/MID_TDC' */
    {
      /* local block i/o variables */
      uint16_T rtb_motohawk_ain_read;

      /* S-Function Block: <S514>/motohawk_ain_read Resource: MAPSensorPin */
      {
        extern NativeError_S MAPSensorPin_AnalogInput_Get(uint16_T *adc,
          uint16_T *status);
        MAPSensorPin_AnalogInput_Get(&rtb_motohawk_ain_read, NULL);
      }

      /* DataTypeConversion: '<S514>/Data Type Conversion' incorporates:
       *  S-Function (motohawk_sfun_ain_read): '<S514>/motohawk_ain_read'
       */
      BaseEngineController_LS_B.s465_Merge = (real_T)rtb_motohawk_ain_read;
    }
  }
}
