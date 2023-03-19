/*
 * Trigger_IDLE_EVENT_9p001.c
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

void Trigger_IDLE_EVENT_9p001(void)
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

  if (BaseEngineController_LS_112_DWork.s1_motohawk_trigger1_DWORK1) {
    /* Output and update for function-call system: '<S4>/CCP Command Driver' */
    {
      int32_T s9_iter;

      /* Outputs for Iterator SubSystem: '<S6>/While new CCP Command' incorporates:
       *  WhileIterator: '<S9>/While Iterator'
       */
      s9_iter = 1;
      do {
        /* S-Function (motohawk_sfun_read_can_raw): '<S9>/Read CAN Raw' */
        /* MotoHawk Read CAN Raw */
        {
          extern boolean_T CCP1_Receive(boolean_T *extended, uint32_T *id,
            uint8_T *length, uint8_T data[]);
          boolean_T msg_valid = CCP1_Receive
            (&BaseEngineController_LS_112_B.s9_ReadCANRaw_o3,
             &BaseEngineController_LS_112_B.s9_ReadCANRaw_o4,
             &BaseEngineController_LS_112_B.s9_ReadCANRaw_o5,
             BaseEngineController_LS_112_B.s9_ReadCANRaw_o6);
          BaseEngineController_LS_112_B.s9_ReadCANRaw_o1 = msg_valid;
          if (msg_valid) {
            BaseEngineController_LS_112_B.s9_ReadCANRaw_o2 = 0;
          } else {
            if ((BaseEngineController_LS_112_B.s9_ReadCANRaw_o2 + 1) >
                BaseEngineController_LS_112_B.s9_ReadCANRaw_o2)
              BaseEngineController_LS_112_B.s9_ReadCANRaw_o2++;
          }
        }

        /* <S9>/motohawk_sfun_ccp_protocol: CCP Protocol CCP1 */
        {
          extern S_CCPHandlerInstance mh_CCP1_CCPHandlerInstance;
          extern S_CCPHandlerConfig mh_CCP1_CCPHandlerConfig;

          /* Request */
          if (BaseEngineController_LS_112_B.s9_ReadCANRaw_o1) {
            if (BaseEngineController_LS_112_B.s10_motohawk_calibration3 !=
                mh_CCP1_CCPHandlerInstance.StationID) {
              mh_CCP1_CCPHandlerInstance.StationID =
                BaseEngineController_LS_112_B.s10_motohawk_calibration3;
              mh_InitCCP(&mh_CCP1_CCPHandlerConfig,
                         &mh_CCP1_CCPHandlerInstance);
            }

            mh_CCP1_CCPHandlerInstance.id =
              BaseEngineController_LS_112_B.s10_motohawk_calibration;
            mh_CCP1_CCPHandlerInstance.ext = TRUE;
            mh_ProcessCCP(BaseEngineController_LS_112_B.s9_ReadCANRaw_o5,
                          BaseEngineController_LS_112_B.s9_ReadCANRaw_o6,
                          &mh_CCP1_CCPHandlerConfig, &mh_CCP1_CCPHandlerInstance);
          }
        }

        s9_iter++;
      } while (BaseEngineController_LS_112_B.s9_ReadCANRaw_o1 && (s9_iter <= 5));

      /* End of Outputs for SubSystem: '<S6>/While new CCP Command' */
    }
  }
}
