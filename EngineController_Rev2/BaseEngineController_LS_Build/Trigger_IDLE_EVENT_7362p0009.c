/*
 * Trigger_IDLE_EVENT_7362p0009.c
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

void Trigger_IDLE_EVENT_7362p0009(void)
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

  if (BaseEngineController_LS_DWork.s4_motohawk_trigger1_DWORK1) {
    /* Output and update for function-call system: '<S4>/CCP IDLE Processing' */
    {
      /* local block i/o variables */
      int8_T rtb_f;

      /* Outputs for Function Call SubSystem: '<S4>/CCP IDLE Processing' incorporates:
       *  TriggerPort: '<S8>/f'
       */
      rtb_f = 2;

      /* <S8>/motohawk_sfun_ccp_protocol: CCP Protocol CCP1 */
      {
        extern S_CCPHandlerInstance mh_CCP1_CCPHandlerInstance;
        extern S_CCPHandlerConfig mh_CCP1_CCPHandlerConfig;

        /* Is the CCP Master waiting on a checksum calculation? */
        mh_ProcessCCPChecksum(&mh_CCP1_CCPHandlerConfig,
                              &mh_CCP1_CCPHandlerInstance);
      }
    }
  }
}
