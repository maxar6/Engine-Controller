/*
 * Trigger_STARTUP_EVENT_7337p0009.c
 *
 * Code generation for model "BaseEngineController_LS.mdl".
 *
 * Model version              : 1.2094
 * Simulink Coder version : 8.0 (R2011a) 09-Mar-2011
 * C source code generated on : Tue Nov 08 22:17:40 2022
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BaseEngineController_LS.h"
#include "BaseEngineController_LS_private.h"

void Trigger_STARTUP_EVENT_7337p0009(void)
{
  /* Named constants for Stateflow: '<S998>/ECUP Latch' */
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

  {
    /* Output and update for function-call system: '<S9>/Adjust ID' */

    /* S-Function (motohawk_sfun_calibration): '<S10>/motohawk_calibration3' */
    BaseEngineController_LS_B.s10_motohawk_calibration3 =
      (CCP1_StationAddr_DataStore());

    /* S-Function (motohawk_sfun_calibration): '<S10>/motohawk_calibration' */
    BaseEngineController_LS_B.s10_motohawk_calibration = (CCP1TxID_DataStore());

    /* S-Function (motohawk_sfun_can_slot_properties): '<S10>/CAN Receive Slot Properties' */
    /* MotoHawk Update CAN Receive Slot Properties */
    {
      extern uint32_T RxSlot_CCP1_ID;
      extern uint32_T RxSlot_CCP1_IDMask;
      RxSlot_CCP1_ID = (CCP1RxID_DataStore());
      RxSlot_CCP1_IDMask = (CCP1RxIDMask_DataStore());
    }
  }
}
