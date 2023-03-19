/*
 * Trigger_IDLE_EVENT_9p001.c
 *
 * Code generation for model "BaseEngineController_LS.mdl".
 *
 * Model version              : 1.2195
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Sun Nov 27 15:42:41 2022
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_LS.h"
#include "BaseEngineController_LS_private.h"

void Trigger_IDLE_EVENT_9p001(void)
{
  /* Named constants for Stateflow: '<S942>/ECUP Latch' */
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

  if (BaseEngineController_LS_DWork.s1_motohawk_trigger1_DWORK1) {
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
          S_CANMessage messageObj;
          int i;
          static uint32_T queue_tail = 0;
          extern struct {
            uint32_T head;
            S_CANMessage messages[4];
          } MHCAN_queue_CCP1;

          extern boolean_T MHCAN_dequeue(MHCAN_queue *queue, uint32_T queue_size,
            uint32_T *tail, S_CANMessage *messageObj);
          boolean_T retval = MHCAN_dequeue((MHCAN_queue *) &MHCAN_queue_CCP1, 4,
            &queue_tail, &messageObj);
          BaseEngineController_LS_B.s9_ReadCANRaw_o1 = retval;
          if ((BaseEngineController_LS_B.s9_ReadCANRaw_o2 + 1) >
              BaseEngineController_LS_B.s9_ReadCANRaw_o2)
            BaseEngineController_LS_B.s9_ReadCANRaw_o2++;
          if (retval) {
            BaseEngineController_LS_B.s9_ReadCANRaw_o3 = ((messageObj.eFlags &
              CAN_MESSAGE_EXTENDED) != 0);
            BaseEngineController_LS_B.s9_ReadCANRaw_o4 = messageObj.u4MessageID;
            if (messageObj.u1Length > 8) {
              messageObj.u1Length = 8;
            }

            BaseEngineController_LS_B.s9_ReadCANRaw_o5 = messageObj.u1Length;
            for (i=0; i < messageObj.u1Length; i++) {
              BaseEngineController_LS_B.s9_ReadCANRaw_o6[i] =
                messageObj.u1DataArr[i];
            }

            BaseEngineController_LS_B.s9_ReadCANRaw_o2 = 0;
          }
        }

        /* <S9>/motohawk_sfun_ccp_protocol: CCP Protocol CCP1 */
        {
          extern S_CCPHandlerInstance mh_CCP1_CCPHandlerInstance;
          extern S_CCPHandlerConfig mh_CCP1_CCPHandlerConfig;

          /* Request */
          if (BaseEngineController_LS_B.s9_ReadCANRaw_o1) {
            if (BaseEngineController_LS_B.s10_motohawk_calibration3 !=
                mh_CCP1_CCPHandlerInstance.StationID) {
              mh_CCP1_CCPHandlerInstance.StationID =
                BaseEngineController_LS_B.s10_motohawk_calibration3;
              mh_InitCCP(&mh_CCP1_CCPHandlerConfig,
                         &mh_CCP1_CCPHandlerInstance);
            }

            mh_CCP1_CCPHandlerInstance.id =
              BaseEngineController_LS_B.s10_motohawk_calibration;
            mh_CCP1_CCPHandlerInstance.ext = TRUE;
            mh_ProcessCCP(BaseEngineController_LS_B.s9_ReadCANRaw_o5,
                          BaseEngineController_LS_B.s9_ReadCANRaw_o6,
                          &mh_CCP1_CCPHandlerConfig, &mh_CCP1_CCPHandlerInstance);
          }
        }

        s9_iter++;
      } while (BaseEngineController_LS_B.s9_ReadCANRaw_o1 && (s9_iter <= 5));

      /* End of Outputs for SubSystem: '<S6>/While new CCP Command' */
    }
  }
}
