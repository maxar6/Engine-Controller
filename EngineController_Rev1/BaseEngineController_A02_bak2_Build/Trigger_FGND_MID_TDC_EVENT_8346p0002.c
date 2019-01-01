/*
 * Trigger_FGND_MID_TDC_EVENT_8346p0002.c
 *
 * Code generation for model "BaseEngineController_A02_bak2.mdl".
 *
 * Model version              : 1.1531
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Tue Jan 01 09:48:38 2019
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_A02_bak2.h"
#include "BaseEngineController_A02_bak2_private.h"

void Trigger_FGND_MID_TDC_EVENT_8346p0002(void)
{
  /* Named constants for Stateflow: '<S798>/ECUP Latch' */
#define BaseEngineController_A02_bak2_IN_PowerDown (1U)
#define BaseEngineController_A02_bak2_IN_PowerUp (2U)

  if (BaseEngineController_A02_bak2_DWork.s544_motohawk_trigger5_DWORK1) {
    /* Output and update for function-call system: '<S544>/MID_TDC' */
    {
      /* local block i/o variables */
      uint16_T rtb_motohawk_ain_read;

      /* S-Function Block: <S593>/motohawk_ain_read Resource: MAPSensorPin */
      {
        extern NativeError_S MAPSensorPin_AnalogInput_Get(uint16_T *adc,
          uint16_T *status);
        MAPSensorPin_AnalogInput_Get(&rtb_motohawk_ain_read, NULL);
      }

      /* DataTypeConversion: '<S593>/Data Type Conversion' incorporates:
       *  S-Function (motohawk_sfun_ain_read): '<S593>/motohawk_ain_read'
       */
      BaseEngineController_A02_bak2_B.s544_Merge = (real_T)rtb_motohawk_ain_read;
    }
  }
}
