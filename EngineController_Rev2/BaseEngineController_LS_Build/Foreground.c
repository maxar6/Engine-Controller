/*
 * File: Foreground.c
 *
 * Code generated for Simulink model 'BaseEngineController_LS'.
 *
 * Model version                  : 1.1767
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Sun Nov 17 02:36:28 2019
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Foreground.h"

/* Include model header file for global data */
#include "BaseEngineController_LS.h"
#include "BaseEngineController_LS_private.h"

/* Named constants for Stateflow: '<S20>/ETC Test  Manager' */
#define BaseEngineController_LS_IN_ForcedShutdown (1U)
#define BaseEngineController_LS_IN_LowAdapt (2U)
#define BaseEngineController_LS_IN_PassThrough (3U)
#define BaseEngineController_LS_IN_SpringTest (4U)
#define BaseEngineController_LS_IN_SpringTestComplete (5U)
#define BaseEngineController_LS_IN_SpringTestSetpoint (6U)

/* Named constants for Stateflow: '<S169>/Chart' */
#define BaseEngineController_LS_IN_DFCO_Off (1U)
#define BaseEngineController_LS_IN_DFCO_On (2U)
#define BaseEngineController_LS_IN_Normal (3U)

/* Named constants for Stateflow: '<S330>/Baro Stall State Delay' */
#define BaseEngineController_LS_IN_CrankRun (1U)
#define BaseEngineController_LS_IN_Stall (2U)
#define BaseEngineController_LS_IN_StallDelay (3U)

/* Named constants for Stateflow: '<S370>/Engine State Machine' */
#define BaseEngineController_LS_IN_Crank (1U)
#define BaseEngineController_LS_IN_Run (2U)
#define BaseEngineController_LS_IN_Stall_b (3U)

/*
 * Initial conditions for enable system:
 *    '<S336>/Collect Average'
 *    '<S366>/Collect Average'
 *    '<S367>/Collect Average'
 */
void BaseEngineController_LS_CollectAverage_Init
  (rtDW_CollectAverage_BaseEngineController_LS *localDW)
{
  /* InitializeConditions for UnitDelay: '<S339>/Unit Delay1' */
  localDW->s339_UnitDelay1_DSTATE = 0.0;
}

/*
 * Disable for enable system:
 *    '<S336>/Collect Average'
 *    '<S366>/Collect Average'
 *    '<S367>/Collect Average'
 */
void BaseEngineController_LS_CollectAverage_Disable
  (rtDW_CollectAverage_BaseEngineController_LS *localDW)
{
  localDW->s336_CollectAverage_MODE = FALSE;
}

/*
 * Start for enable system:
 *    '<S336>/Collect Average'
 *    '<S366>/Collect Average'
 *    '<S367>/Collect Average'
 */
void BaseEngineController_LS_CollectAverage_Start
  (rtDW_CollectAverage_BaseEngineController_LS *localDW)
{
  BaseEngineController_LS_CollectAverage_Init(localDW);
}

/*
 * Output and update for enable system:
 *    '<S336>/Collect Average'
 *    '<S366>/Collect Average'
 *    '<S367>/Collect Average'
 */
void BaseEngineController_LS_CollectAverage(boolean_T rtu_0, int8_T rtu_Count,
  real_T rtu_Signal, rtB_CollectAverage_BaseEngineController_LS *localB,
  rtDW_CollectAverage_BaseEngineController_LS *localDW)
{
  real_T rtb_Sum1_b4;

  /* Outputs for Enabled SubSystem: '<S336>/Collect Average' incorporates:
   *  EnablePort: '<S339>/Enable'
   */
  if (rtu_0) {
    if (!localDW->s336_CollectAverage_MODE) {
      BaseEngineController_LS_CollectAverage_Init(localDW);
      localDW->s336_CollectAverage_MODE = TRUE;
    }

    /* Sum: '<S339>/Sum1' incorporates:
     *  UnitDelay: '<S339>/Unit Delay1'
     */
    rtb_Sum1_b4 = rtu_Signal + localDW->s339_UnitDelay1_DSTATE;

    /* Product: '<S339>/Product' incorporates:
     *  DataTypeConversion: '<S339>/Data Type Conversion'
     */
    localB->s339_Product = 1.0 / (real_T)rtu_Count * rtb_Sum1_b4;

    /* Update for UnitDelay: '<S339>/Unit Delay1' */
    localDW->s339_UnitDelay1_DSTATE = rtb_Sum1_b4;
  } else {
    if (localDW->s336_CollectAverage_MODE) {
      BaseEngineController_LS_CollectAverage_Disable(localDW);
    }
  }

  /* End of Outputs for SubSystem: '<S336>/Collect Average' */
}

/*
 * Start for enable system:
 *    '<S365>/PassThrough1'
 *    '<S365>/PassThrough2'
 */
void BaseEngineController_LS_PassThrough1_Start(real_T *rty_Out1)
{
  /* VirtualOutportStart for Outport: '<S379>/Out1' */
  (*rty_Out1) = 0.005;
}

/*
 * Output and update for enable system:
 *    '<S365>/PassThrough1'
 *    '<S365>/PassThrough2'
 */
void BaseEngineController_LS_PassThrough1(boolean_T rtu_0, real_T rtu_1, real_T *
  rty_Out1)
{
  /* Outputs for Enabled SubSystem: '<S365>/PassThrough1' incorporates:
   *  EnablePort: '<S379>/Enable'
   */
  if (rtu_0) {
    /* Inport: '<S379>/In1' */
    (*rty_Out1) = rtu_1;
  }

  /* End of Outputs for SubSystem: '<S365>/PassThrough1' */
}

/*
 * Output and update for action system:
 *    '<S410>/If Action Subsystem'
 *    '<S410>/If Action Subsystem1'
 *    '<S410>/If Action Subsystem2'
 *    '<S411>/If Action Subsystem'
 *    '<S411>/If Action Subsystem1'
 *    '<S411>/If Action Subsystem2'
 *    '<S460>/If Action Subsystem'
 *    '<S460>/If Action Subsystem1'
 *    '<S460>/If Action Subsystem2'
 *    '<S461>/If Action Subsystem'
 *    ...
 */
void BaseEngineController_LS_IfActionSubsystem(real_T rtu_0, real_T *rty_Out)
{
  /* Inport: '<S424>/In' */
  (*rty_Out) = rtu_0;
}

/* Initial conditions for function-call system: '<Root>/Foreground' */
void BaseEngineController_LS_Foreground_Init(void)
{
  /* Initial conditions for function-call system: '<S405>/Temp Sensors' */

  /* S-Function Block: <S618>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s618_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S645>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s645_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S627>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s627_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S636>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s636_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for Stateflow: '<S370>/Engine State Machine' */

  /* Entry: Foreground/Control/VirtualSensors/RawProcessed/EngineState/Engine State Machine */
  /* Transition: '<S389>:4' */
  BaseEngineController_LS_DWork.s389_is_c2_BaseEngineController_LS =
    BaseEngineController_LS_IN_Stall_b;

  /* Entry 'Stall': '<S389>:1' */
  BaseEngineController_LS_B.s389_State = 1U;

  /* S-Function Block: <S469>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s469_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S452>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s452_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S658>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s658_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S668>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s668_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S678>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s678_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S688>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s688_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S486>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s486_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S482>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s482_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for Atomic SubSystem: '<S333>/Base TPS Request' */

  /* S-Function Block: <S381>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s381_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S365>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s365_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* End of InitializeConditions for SubSystem: '<S333>/Base TPS Request' */

  /* S-Function Block: <S570>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s570_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S562>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s562_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S394>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s394_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S532>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s532_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S498>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s498_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S432>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s432_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S330>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s330_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for Stateflow: '<S330>/Baro Stall State Delay' */
  BaseEngineController_LS_DWork.s335_TOld = 0.0;
  BaseEngineController_LS_B.s335_Timer = 0.0;

  /* Entry: Foreground/Control/VirtualSensors/AirCalcs/Baro Stall State Delay */
  /* Transition: '<S335>:4' */
  BaseEngineController_LS_DWork.s335_is_c19_BaseEngineController_LS =
    BaseEngineController_LS_IN_Stall;

  /* Entry 'Stall': '<S335>:1' */
  BaseEngineController_LS_B.s335_Enable = TRUE;

  /* S-Function Block: <S423>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s423_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S386>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s386_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(-1);
  }

  /* S-Function Block: <S443>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s443_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S448>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s448_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S506>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s506_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S750>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s750_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S396>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s396_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S490>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s490_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S392>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s392_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S516>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s516_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S524>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s524_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }
}

/* Enable for function-call system: '<Root>/Foreground' */
void BaseEngineController_LS_Foreground_Enable(void)
{
  /* Level2 S-Function Block: '<S405>/motohawk_trigger' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_5XRTI_PERIODIC_7437p0006 */
  BaseEngineController_LS_DWork.s405_motohawk_trigger_DWORK1 = 1;

  /* Level2 S-Function Block: '<S370>/motohawk_trigger' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_TDC_EVENT_6410p0001 */
  BaseEngineController_LS_DWork.s370_motohawk_trigger_DWORK1 = 1;

  /* Level2 S-Function Block: '<S465>/motohawk_trigger5' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_MID_TDC_EVENT_7170p0004 */
  BaseEngineController_LS_DWork.s465_motohawk_trigger5_DWORK1 = 1;

  /* Level2 S-Function Block: '<S14>/motohawk_trigger1' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_5XRTI_PERIODIC_1090p0004 */
  BaseEngineController_LS_DWork.s14_motohawk_trigger1_DWORK1 = 1;

  /* Level2 S-Function Block: '<S14>/motohawk_trigger' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_5XRTI_PERIODIC_1089p0004 */
  BaseEngineController_LS_DWork.s14_motohawk_trigger_DWORK1 = 1;

  /* Level2 S-Function Block: '<S13>/motohawk_trigger' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_5XRTI_PERIODIC_8449p0001 */

  /* Enable for function-call system: '<S13>/Coil Control' */

  /* Enable for Atomic SubSystem: '<S710>/EST Enable TDC Counter' */

  /* Level2 S-Function Block: '<S715>/motohawk_trigger1' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_TDC_EVENT_7962p0001 */
  BaseEngineController_LS_DWork.s715_motohawk_trigger1_DWORK1 = 1;

  /* End of Enable for SubSystem: '<S710>/EST Enable TDC Counter' */
  BaseEngineController_LS_DWork.s13_motohawk_trigger_DWORK1 = 1;
}

/* Disable for function-call system: '<Root>/Foreground' */
void BaseEngineController_LS_Foreground_Disable(void)
{
  int32_T i;

  /* Level2 S-Function Block: '<S405>/motohawk_trigger' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_5XRTI_PERIODIC_7437p0006 */
  BaseEngineController_LS_DWork.s405_motohawk_trigger_DWORK1 = 0;

  /* Level2 S-Function Block: '<S370>/motohawk_trigger' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_TDC_EVENT_6410p0001 */
  BaseEngineController_LS_DWork.s370_motohawk_trigger_DWORK1 = 0;

  /* Disable for Enabled SubSystem: '<S15>/Stall' */
  BaseEngineController_LS_DWork.s15_Stall_MODE = FALSE;

  /* End of Disable for SubSystem: '<S15>/Stall' */

  /* Disable for Enabled SubSystem: '<S15>/Crank' */
  BaseEngineController_LS_DWork.s15_Crank_MODE = FALSE;

  /* End of Disable for SubSystem: '<S15>/Crank' */

  /* Level2 S-Function Block: '<S465>/motohawk_trigger5' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_MID_TDC_EVENT_7170p0004 */
  BaseEngineController_LS_DWork.s465_motohawk_trigger5_DWORK1 = 0;

  /* Disable for Enabled SubSystem: '<S330>/Capture Signal At Startup' */

  /* Disable for Enabled SubSystem: '<S336>/Collect Average' */
  BaseEngineController_LS_CollectAverage_Disable
    (&BaseEngineController_LS_DWork.s336_CollectAverage);

  /* End of Disable for SubSystem: '<S336>/Collect Average' */
  BaseEngineController_LS_DWork.s330_CaptureSignalAtStartup_MODE = FALSE;

  /* End of Disable for SubSystem: '<S330>/Capture Signal At Startup' */

  /* Disable for Enabled SubSystem: '<S333>/Capture ECT At Startup' */

  /* Disable for Enabled SubSystem: '<S366>/Collect Average' */
  BaseEngineController_LS_CollectAverage_Disable
    (&BaseEngineController_LS_DWork.s366_CollectAverage);

  /* End of Disable for SubSystem: '<S366>/Collect Average' */
  BaseEngineController_LS_DWork.s333_CaptureECTAtStartup_MODE = FALSE;

  /* End of Disable for SubSystem: '<S333>/Capture ECT At Startup' */

  /* Disable for Enabled SubSystem: '<S333>/Capture IAT At Startup' */

  /* Disable for Enabled SubSystem: '<S367>/Collect Average' */
  BaseEngineController_LS_CollectAverage_Disable
    (&BaseEngineController_LS_DWork.s367_CollectAverage);

  /* End of Disable for SubSystem: '<S367>/Collect Average' */
  BaseEngineController_LS_DWork.s333_CaptureIATAtStartup_MODE = FALSE;

  /* End of Disable for SubSystem: '<S333>/Capture IAT At Startup' */

  /* Disable for Enabled SubSystem: '<S15>/Run' */

  /* Level2 S-Function Block: '<S119>/motohawk_trigger1' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_5XRTI_PERIODIC_4409p0005 */
  BaseEngineController_LS_DWork.s119_motohawk_trigger1_DWORK1 = 0;

  /* Disable for Atomic SubSystem: '<S119>/Fuel System Manager' */
  /* Disable for Atomic SubSystem: '<S133>/Injector Manager' */
  /* Disable for Enabled SubSystem: '<S180>/Delta TPS Transient Fueling' */
  /* Disable for Enabled SubSystem: '<S185>/ECT Transient Fueling' */
  /* Disable for Outport: '<S188>/Mult' */
  BaseEngineController_LS_B.s188_motohawk_interpolation_1d = 1.0;
  BaseEngineController_LS_DWork.s185_ECTTransientFueling_MODE = FALSE;

  /* End of Disable for SubSystem: '<S185>/ECT Transient Fueling' */

  /* Disable for Outport: '<S185>/DeltaTPSMult' */
  BaseEngineController_LS_B.s185_Product1 = 1.0;
  BaseEngineController_LS_DWork.s180_DeltaTPSTransientFueling_MODE = FALSE;

  /* End of Disable for SubSystem: '<S180>/Delta TPS Transient Fueling' */
  /* End of Disable for SubSystem: '<S133>/Injector Manager' */
  /* End of Disable for SubSystem: '<S119>/Fuel System Manager' */
  BaseEngineController_LS_DWork.s15_Run_MODE = FALSE;

  /* End of Disable for SubSystem: '<S15>/Run' */

  /* Level2 S-Function Block: '<S14>/motohawk_trigger1' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_5XRTI_PERIODIC_1090p0004 */
  BaseEngineController_LS_DWork.s14_motohawk_trigger1_DWORK1 = 0;

  /* Level2 S-Function Block: '<S14>/motohawk_trigger' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_5XRTI_PERIODIC_1089p0004 */
  BaseEngineController_LS_DWork.s14_motohawk_trigger_DWORK1 = 0;

  /* Disable for Enabled SubSystem: '<S22>/PassThrough1' */
  BaseEngineController_LS_DWork.s22_PassThrough1_MODE = FALSE;

  /* Disable for Enabled SubSystem: '<S22>/PassThrough3' */
  for (i = 0; i < 32; i++) {
    /* Disable for Outport: '<S93>/Out1' */
    BaseEngineController_LS_B.s22_Merge1[i] = 0;

    /* Disable for Outport: '<S95>/Out1' */
    BaseEngineController_LS_B.s22_Merge1[i] = 0;
  }

  /* End of Disable for SubSystem: '<S22>/PassThrough1' */
  BaseEngineController_LS_DWork.s22_PassThrough3_MODE = FALSE;

  /* End of Disable for SubSystem: '<S22>/PassThrough3' */

  /* Disable for Enabled SubSystem: '<S22>/SequenceCutMachine' */

  /* Level2 S-Function Block: '<S98>/motohawk_trigger' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_TDC1_EVENT_865p0001 */
  BaseEngineController_LS_DWork.s98_motohawk_trigger_DWORK1 = 0;
  BaseEngineController_LS_DWork.s22_SequenceCutMachine_MODE = FALSE;

  /* End of Disable for SubSystem: '<S22>/SequenceCutMachine' */

  /* Disable for Enabled SubSystem: '<S22>/PassThrough4' */
  /* Disable for Outport: '<S96>/Out1' */
  for (i = 0; i < 8; i++) {
    BaseEngineController_LS_B.s96_DataTypeConversion[i] = FALSE;
  }

  /* End of Outport: '<S96>/Out1' */
  BaseEngineController_LS_DWork.s22_PassThrough4_MODE = FALSE;

  /* End of Disable for SubSystem: '<S22>/PassThrough4' */

  /* Level2 S-Function Block: '<S13>/motohawk_trigger' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_5XRTI_PERIODIC_8449p0001 */

  /* Disable for function-call system: '<S13>/Coil Control' */

  /* Disable for Atomic SubSystem: '<S710>/EST Enable TDC Counter' */

  /* Level2 S-Function Block: '<S715>/motohawk_trigger1' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_TDC_EVENT_7962p0001 */
  BaseEngineController_LS_DWork.s715_motohawk_trigger1_DWORK1 = 0;

  /* End of Disable for SubSystem: '<S710>/EST Enable TDC Counter' */
  BaseEngineController_LS_DWork.s13_motohawk_trigger_DWORK1 = 0;

  /* Disable for Enabled SubSystem: '<S14>/Electronic Throttle Controller' */
  /* Disable for Enabled SubSystem: '<S30>/PassThrough' */
  /* Disable for Outport: '<S50>/Out1' */
  BaseEngineController_LS_B.s50_In1 = 10.0;
  BaseEngineController_LS_DWork.s30_PassThrough_MODE = FALSE;

  /* End of Disable for SubSystem: '<S30>/PassThrough' */
  BaseEngineController_LS_DWork.s14_ElectronicThrottleController_MODE = FALSE;

  /* End of Disable for SubSystem: '<S14>/Electronic Throttle Controller' */

  /* Disable for Enabled SubSystem: '<S22>/PassThrough5' */
  /* Disable for Outport: '<S97>/Out1' */
  for (i = 0; i < 8; i++) {
    BaseEngineController_LS_B.s97_DataTypeConversion1[i] = FALSE;
  }

  /* End of Outport: '<S97>/Out1' */
  BaseEngineController_LS_DWork.s22_PassThrough5_MODE = FALSE;

  /* End of Disable for SubSystem: '<S22>/PassThrough5' */
}

/* Start for function-call system: '<Root>/Foreground' */
void BaseEngineController_LS_Foreground_Start(void)
{
  /* Start for S-Function (motohawk_sfun_trigger): '<S405>/motohawk_trigger' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_5XRTI_PERIODIC_7437p0006 */
  BaseEngineController_LS_DWork.s405_motohawk_trigger_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S370>/motohawk_trigger' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_TDC_EVENT_6410p0001 */
  BaseEngineController_LS_DWork.s370_motohawk_trigger_DWORK1 = 0;

  /* Start for Enabled SubSystem: '<S15>/Stall' */

  /* InitializeConditions for UnitDelay: '<S284>/Unit Delay' */
  BaseEngineController_LS_DWork.s284_UnitDelay_DSTATE = FALSE;

  /* InitializeConditions for UnitDelay: '<S285>/Unit Delay' */
  BaseEngineController_LS_DWork.s285_UnitDelay_DSTATE = FALSE;

  /* InitializeConditions for UnitDelay: '<S286>/Unit Delay' */
  BaseEngineController_LS_DWork.s286_UnitDelay_DSTATE = FALSE;

  /* InitializeConditions for UnitDelay: '<S287>/Unit Delay' */
  BaseEngineController_LS_DWork.s287_UnitDelay_DSTATE = 0.0;

  /* End of Start for SubSystem: '<S15>/Stall' */

  /* Start for Atomic SubSystem: '<S333>/Base TPS Request' */

  /* Start for Enabled SubSystem: '<S365>/PassThrough1' */
  BaseEngineController_LS_PassThrough1_Start
    (&BaseEngineController_LS_B.s365_Merge);

  /* End of Start for SubSystem: '<S365>/PassThrough1' */

  /* Start for Enabled SubSystem: '<S365>/PassThrough2' */
  BaseEngineController_LS_PassThrough1_Start
    (&BaseEngineController_LS_B.s365_Merge);

  /* End of Start for SubSystem: '<S365>/PassThrough2' */

  /* End of Start for SubSystem: '<S333>/Base TPS Request' */

  /* Start for S-Function (motohawk_sfun_trigger): '<S465>/motohawk_trigger5' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_MID_TDC_EVENT_7170p0004 */
  BaseEngineController_LS_DWork.s465_motohawk_trigger5_DWORK1 = 0;

  /* Start for Enabled SubSystem: '<S330>/Capture Signal At Startup' */

  /* Start for Enabled SubSystem: '<S336>/Collect Average' */
  BaseEngineController_LS_CollectAverage_Start
    (&BaseEngineController_LS_DWork.s336_CollectAverage);

  /* End of Start for SubSystem: '<S336>/Collect Average' */

  /* InitializeConditions for UnitDelay: '<S336>/Unit Delay' */
  BaseEngineController_LS_DWork.s336_UnitDelay_DSTATE = 0;

  /* End of Start for SubSystem: '<S330>/Capture Signal At Startup' */

  /* Start for Enabled SubSystem: '<S347>/IncreasingFilter' */

  /* VirtualOutportStart for Outport: '<S351>/Out1' */
  BaseEngineController_LS_B.s347_Merge = 0.005;

  /* End of Start for SubSystem: '<S347>/IncreasingFilter' */

  /* Start for Enabled SubSystem: '<S347>/DecreasingFilter' */

  /* VirtualOutportStart for Outport: '<S349>/Out1' */
  BaseEngineController_LS_B.s347_Merge = 0.005;

  /* End of Start for SubSystem: '<S347>/DecreasingFilter' */

  /* Start for Enabled SubSystem: '<S348>/IncreasingFilter' */

  /* VirtualOutportStart for Outport: '<S354>/Out1' */
  BaseEngineController_LS_B.s348_Merge = 0.005;

  /* End of Start for SubSystem: '<S348>/IncreasingFilter' */

  /* Start for Enabled SubSystem: '<S348>/DecreasingFilter' */

  /* VirtualOutportStart for Outport: '<S352>/Out1' */
  BaseEngineController_LS_B.s348_Merge = 0.005;

  /* End of Start for SubSystem: '<S348>/DecreasingFilter' */

  /* Start for Enabled SubSystem: '<S333>/Capture ECT At Startup' */

  /* Start for Enabled SubSystem: '<S366>/Collect Average' */
  BaseEngineController_LS_CollectAverage_Start
    (&BaseEngineController_LS_DWork.s366_CollectAverage);

  /* End of Start for SubSystem: '<S366>/Collect Average' */

  /* InitializeConditions for UnitDelay: '<S366>/Unit Delay' */
  BaseEngineController_LS_DWork.s366_UnitDelay_DSTATE = 0;

  /* End of Start for SubSystem: '<S333>/Capture ECT At Startup' */

  /* Start for Enabled SubSystem: '<S333>/Capture IAT At Startup' */

  /* Start for Enabled SubSystem: '<S367>/Collect Average' */
  BaseEngineController_LS_CollectAverage_Start
    (&BaseEngineController_LS_DWork.s367_CollectAverage);

  /* End of Start for SubSystem: '<S367>/Collect Average' */

  /* InitializeConditions for UnitDelay: '<S367>/Unit Delay' */
  BaseEngineController_LS_DWork.s367_UnitDelay_DSTATE = 0;

  /* End of Start for SubSystem: '<S333>/Capture IAT At Startup' */

  /* Start for Enabled SubSystem: '<S15>/Run' */

  /* Start for S-Function (motohawk_sfun_trigger): '<S119>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_5XRTI_PERIODIC_4409p0005 */
  BaseEngineController_LS_DWork.s119_motohawk_trigger1_DWORK1 = 0;

  /* Start for Atomic SubSystem: '<S119>/O2 Control' */

  /* Start for Atomic SubSystem: '<S137>/O2 PID Controller' */

  /* Start for InitialCondition: '<S257>/Multiply by 1.0 if not yet enabled' */
  BaseEngineController_LS_DWork.s257_Multiplyby10ifnotyetenabled_FirstOutputTime
    = TRUE;

  /* End of Start for SubSystem: '<S137>/O2 PID Controller' */

  /* End of Start for SubSystem: '<S119>/O2 Control' */

  /* Start for Atomic SubSystem: '<S119>/Fuel System Manager' */

  /* Start for Atomic SubSystem: '<S133>/Injector Manager' */

  /* Start for Enabled SubSystem: '<S180>/Delta TPS Transient Fueling' */

  /* Start for Enabled SubSystem: '<S185>/ECT Transient Fueling' */

  /* VirtualOutportStart for Outport: '<S188>/Mult' */
  BaseEngineController_LS_B.s188_motohawk_interpolation_1d = 1.0;

  /* End of Start for SubSystem: '<S185>/ECT Transient Fueling' */

  /* S-Function Block: <S190>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s190_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for UnitDelay: '<S192>/Unit Delay' */
  BaseEngineController_LS_DWork.s192_UnitDelay_DSTATE = 0.0;

  /* S-Function Block: <S189>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s189_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for UnitDelay: '<S191>/Unit Delay' */
  BaseEngineController_LS_DWork.s191_UnitDelay_DSTATE = 0.0;

  /* VirtualOutportStart for Outport: '<S185>/DeltaTPSMult' */
  BaseEngineController_LS_B.s185_Product1 = 1.0;

  /* End of Start for SubSystem: '<S180>/Delta TPS Transient Fueling' */

  /* End of Start for SubSystem: '<S133>/Injector Manager' */

  /* End of Start for SubSystem: '<S119>/Fuel System Manager' */

  /* InitializeConditions for UnitDelay: '<S146>/Unit Delay' */
  BaseEngineController_LS_DWork.s146_UnitDelay_DSTATE = FALSE;

  /* InitializeConditions for UnitDelay: '<S145>/Unit Delay' */
  BaseEngineController_LS_DWork.s145_UnitDelay_DSTATE = FALSE;

  /* InitializeConditions for UnitDelay: '<S143>/Unit Delay' */
  BaseEngineController_LS_DWork.s143_UnitDelay_DSTATE = FALSE;

  /* InitializeConditions for UnitDelay: '<S144>/Unit Delay' */
  BaseEngineController_LS_DWork.s144_UnitDelay_DSTATE = FALSE;

  /* S-Function Block: <S172>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s172_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for UnitDelay: '<S171>/Unit Delay' */
  BaseEngineController_LS_DWork.s171_UnitDelay_DSTATE = FALSE;

  /* InitializeConditions for Stateflow: '<S169>/Chart' */
  BaseEngineController_LS_DWork.s170_is_active_c1_BaseEngineController_LS = 0U;
  BaseEngineController_LS_DWork.s170_is_c1_BaseEngineController_LS = 0U;
  BaseEngineController_LS_DWork.s170_count = 0.0;
  BaseEngineController_LS_DWork.s170_EquivStart = 0.0;
  BaseEngineController_LS_B.s170_EquivOut = 0.0;
  BaseEngineController_LS_B.s170_SparkOut = 0.0;

  /* InitializeConditions for S-Function (motohawk_sfun_trigger): '<S119>/motohawk_trigger1' */
  if (rtmIsFirstInitCond(BaseEngineController_LS_M)) {
    /* Initial conditions for function-call system: '<S119>/MinGovernor' */

    /* InitializeConditions for Stateflow: '<S221>/IdleStateMachine' */
    BaseEngineController_LS_IdleStateMachine_Init();

    /* S-Function Block: <S220>/motohawk_delta_time */
    {
      uint32_T now = 0;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
        u32Time_us);
      Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
      BaseEngineController_LS_DWork.s220_motohawk_delta_time_DWORK1 = now -
        Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
    }

    /* S-Function Block: <S224>/motohawk_delta_time */
    {
      uint32_T now = 0;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
        u32Time_us);
      Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
      BaseEngineController_LS_DWork.s224_motohawk_delta_time_DWORK1 = now -
        Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
    }

    /* InitializeConditions for Atomic SubSystem: '<S136>/AiflowOffset' */

    /* S-Function Block: <S227>/motohawk_delta_time */
    {
      uint32_T now = 0;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
        u32Time_us);
      Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
      BaseEngineController_LS_DWork.s227_motohawk_delta_time_DWORK1 = now -
        Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
    }

    /* End of InitializeConditions for SubSystem: '<S136>/AiflowOffset' */

    /* S-Function Block: <S252>/motohawk_delta_time */
    {
      uint32_T now = 0;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
        u32Time_us);
      Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
      BaseEngineController_LS_DWork.s252_motohawk_delta_time_DWORK1 = now -
        Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
    }
  }

  if (rtmIsFirstInitCond(BaseEngineController_LS_M)) {
    /* Initial conditions for function-call system: '<S119>/MaxGovernor' */

    /* S-Function Block: <S203>/motohawk_delta_time */
    {
      uint32_T now = 0;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
        u32Time_us);
      Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
      BaseEngineController_LS_DWork.s203_motohawk_delta_time_DWORK1 = now -
        Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
    }

    /* S-Function Block: <S214>/motohawk_delta_time */
    {
      uint32_T now = 0;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
        u32Time_us);
      Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
      BaseEngineController_LS_DWork.s214_motohawk_delta_time_DWORK1 = now -
        Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
    }
  }

  if (rtmIsFirstInitCond(BaseEngineController_LS_M)) {
    /* Initial conditions for function-call system: '<S119>/Spark Manager' */

    /* InitializeConditions for UnitDelay: '<S276>/Initial Condition is True' */
    BaseEngineController_LS_DWork.s276_InitialConditionisTrue_DSTATE = TRUE;
  }

  /* InitializeConditions for UnitDelay: '<S130>/Unit Delay' */
  BaseEngineController_LS_DWork.s130_UnitDelay_DSTATE = 0.0;

  /* InitializeConditions for UnitDelay: '<S165>/Unit Delay' */
  BaseEngineController_LS_DWork.s165_UnitDelay_DSTATE = 0.0;

  /* S-Function Block: <S155>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s155_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for UnitDelay: '<S155>/Unit Delay' */
  BaseEngineController_LS_DWork.s155_UnitDelay_DSTATE = 0.0;

  /* InitializeConditions for UnitDelay: '<S164>/Unit Delay' */
  BaseEngineController_LS_DWork.s164_UnitDelay_DSTATE = 0.0;

  /* S-Function Block: <S165>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s165_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for UnitDelay: '<S176>/Unit Delay' */
  BaseEngineController_LS_DWork.s176_UnitDelay_DSTATE = FALSE;

  /* InitializeConditions for UnitDelay: '<S177>/Unit Delay' */
  BaseEngineController_LS_DWork.s177_UnitDelay_DSTATE = FALSE;

  /* InitializeConditions for UnitDelay: '<S178>/Unit Delay' */
  BaseEngineController_LS_DWork.s178_UnitDelay_DSTATE = FALSE;

  /* InitializeConditions for Atomic SubSystem: '<S119>/O2 Control' */

  /* InitializeConditions for Atomic SubSystem: '<S137>/O2 PID Controller' */
  /* InitializeConditions for UnitDelay: '<S268>/Unit Delay' */
  BaseEngineController_LS_DWork.s268_UnitDelay_DSTATE = FALSE;

  /* InitializeConditions for UnitDelay: '<S265>/Unit Delay' */
  BaseEngineController_LS_DWork.s265_UnitDelay_DSTATE = 0.0;

  /* InitializeConditions for UnitDelay: '<S264>/Unit Delay' */
  BaseEngineController_LS_DWork.s264_UnitDelay_DSTATE = 0.0;

  /* S-Function Block: <S265>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s265_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for UnitDelay: '<S261>/Unit Delay1' */
  BaseEngineController_LS_DWork.s261_UnitDelay1_DSTATE = 0.0;

  /* S-Function Block: <S269>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s269_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for UnitDelay: '<S261>/Unit Delay' */
  BaseEngineController_LS_DWork.s261_UnitDelay_DSTATE = 0.0;

  /* S-Function Block: <S271>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s271_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for UnitDelay: '<S261>/Unit Delay2' */
  BaseEngineController_LS_DWork.s261_UnitDelay2_DSTATE = 0.0;

  /* S-Function Block: <S270>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s270_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* End of InitializeConditions for SubSystem: '<S137>/O2 PID Controller' */
  /* End of InitializeConditions for SubSystem: '<S119>/O2 Control' */

  /* End of Start for SubSystem: '<S15>/Run' */

  /* Start for S-Function (motohawk_sfun_trigger): '<S14>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_5XRTI_PERIODIC_1090p0004 */
  BaseEngineController_LS_DWork.s14_motohawk_trigger1_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S14>/motohawk_trigger' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_5XRTI_PERIODIC_1089p0004 */
  BaseEngineController_LS_DWork.s14_motohawk_trigger_DWORK1 = 0;

  /* Start for Enabled SubSystem: '<S22>/SequenceCutMachine' */

  /* Start for function-call system: '<S98>/SequencyCutMachine' */

  /* VirtualOutportStart for Outport: '<S108>/CycleCounter' */
  BaseEngineController_LS_B.s108_Switch = 1U;

  /* VirtualOutportStart for Outport: '<S108>/CycleNumber' */
  BaseEngineController_LS_B.s108_Switch1 = 1.0;

  /* Clear enable/disable state for embedded trigger Trigger_FGND_TDC1_EVENT_865p0001 */
  BaseEngineController_LS_DWork.s98_motohawk_trigger_DWORK1 = 0;

  /* InitializeConditions for UnitDelay: '<S98>/Unit Delay2' */
  BaseEngineController_LS_DWork.s98_UnitDelay2_DSTATE = 1.0;

  /* InitializeConditions for UnitDelay: '<S98>/Unit Delay1' */
  BaseEngineController_LS_DWork.s98_UnitDelay1_DSTATE = 1U;

  /* End of Start for SubSystem: '<S22>/SequenceCutMachine' */

  /* Start for function-call system: '<S13>/Coil Control' */

  /* Start for Atomic SubSystem: '<S710>/EST Enable TDC Counter' */

  /* Start for S-Function (motohawk_sfun_trigger): '<S715>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_TDC_EVENT_7962p0001 */
  BaseEngineController_LS_DWork.s715_motohawk_trigger1_DWORK1 = 0;

  /* End of Start for SubSystem: '<S710>/EST Enable TDC Counter' */

  /* S-Function Block: <S699>/Spark Sequence */
  {
    NativeError_S createErrorResult;
    int32_T i;
    extern void SparkSeqDiagCallback_21(S_SeqOutDiagReportPtr report,
      NativePtrSizedInt_U userData);
    if ((EST_SequenceType_DataStore()) == 0) {
      S_ESTSeqCreateAttributes CreateObj;
      CreateObj.uValidAttributesMask = USE_SEQ_GRANULARITY;
      CreateObj.u1NumPulsesToCreate = 1;
      CreateObj.eGranularity = FINE_GRANULARITY;
      CreateObj.uValidAttributesMask |= USE_SEQ_DIAG_REPORT_COND;
      CreateObj.ReportsObj.pfDiagCback = SparkSeqDiagCallback_21;
      for (i=0; i < (EncoderNumCylinders_DataStore()); i++) {
        CreateObj.s2PulseOffsetDegATDC1Arr[0] = (EncoderTDCAngles_DataStore())[i];
        if ((EST_InitialPin_DataStore()) + i <= 43) {
          CreateObj.ReportsObj.uDiagCbackUserData = i;
          createErrorResult = CreateResource((E_ModuleResource)
            ((EST_InitialPin_DataStore()) + i), &CreateObj, BEHAVIOUR_EST_SEQ);
        }
      }
    } else if ((EST_SequenceType_DataStore()) == 1) {
      S_BankedESTSeqCreateAttributes CreateObj;
      CreateObj.uValidAttributesMask = USE_SEQ_GRANULARITY;
      CreateObj.eGranularity = FINE_GRANULARITY;
      CreateObj.uValidAttributesMask |= USE_SEQ_DIAG_REPORT_COND;
      CreateObj.ReportsObj.pfDiagCback = SparkSeqDiagCallback_21;
      for (i=0; i < (EncoderNumCylinders_DataStore()); i++) {
        CreateObj.s2OffsetDegATDC1 = (EncoderTDCAngles_DataStore())[i];
        if ((EST_InitialPin_DataStore()) + i <= 43) {
          CreateObj.ReportsObj.uDiagCbackUserData = i;
          createErrorResult = CreateResource((E_ModuleResource)
            ((EST_InitialPin_DataStore()) + i), &CreateObj,
            BEHAVIOUR_BANK_EST_SEQ);
        }
      }
    } else if ((EST_SequenceType_DataStore()) == 2) {
      S_ESTSeqCreateAttributes CreateObj;
      CreateObj.uValidAttributesMask = USE_SEQ_GRANULARITY;
      CreateObj.u1NumPulsesToCreate = 2;
      CreateObj.eGranularity = FINE_GRANULARITY;
      CreateObj.uValidAttributesMask |= USE_SEQ_DIAG_REPORT_COND;
      CreateObj.ReportsObj.pfDiagCback = SparkSeqDiagCallback_21;

      /* Batch sequences may only be used with an even number of cylinders */
      if (((EncoderNumCylinders_DataStore()) % 2) == 0) {
        int half_cylinders = (EncoderNumCylinders_DataStore()) / 2;
        for (i=0; i < half_cylinders; i++) {
          int cyl = (EncoderTDCOrder_DataStore())[i];
          int opp_cyl = (EncoderTDCOrder_DataStore())[i + half_cylinders];
          int pin = i;
          sint2 p0;
          sint2 p1;
          if (cyl < half_cylinders) {
            p0 = (EncoderTDCAngles_DataStore())[cyl];
            p1 = (EncoderTDCAngles_DataStore())[opp_cyl];
            (ESTPinMapArr_PulseNum_21_DataStore())[cyl] = 0;
            (ESTPinMapArr_PulseNum_21_DataStore())[opp_cyl] = 1;/* p1 aligns with opp_cyl */
          } else {
            p0 = (EncoderTDCAngles_DataStore())[opp_cyl];
            p1 = (EncoderTDCAngles_DataStore())[cyl];
            (ESTPinMapArr_PulseNum_21_DataStore())[cyl] = 1;
            (ESTPinMapArr_PulseNum_21_DataStore())[opp_cyl] = 0;/* p0 aligns with opp_cyl */
          }

          (ESTPinMapArr_Resource_21_DataStore())[cyl] = (E_ModuleResource)
            ((EST_InitialPin_DataStore()) + pin);
          (ESTPinMapArr_Resource_21_DataStore())[opp_cyl] = (E_ModuleResource)
            ((EST_InitialPin_DataStore()) + pin);
          memcpy((uint1 *)&CreateObj.u1NumPulsesToCreate + sizeof(uint1), (uint1
                  *)&p0, sizeof(sint2));
          memcpy((uint1 *)&CreateObj.u1NumPulsesToCreate + sizeof(uint1) +
                 sizeof(sint2), (uint1 *)&p1, sizeof(sint2));
          if ((EST_InitialPin_DataStore()) + pin <= 43) {
            CreateObj.ReportsObj.uDiagCbackUserData = pin;
            createErrorResult = CreateResource((E_ModuleResource)
              ((EST_InitialPin_DataStore()) + pin), &CreateObj,
              BEHAVIOUR_EST_SEQ);
          }
        }
      }
    } else if ((EST_SequenceType_DataStore()) == 3) {
      S_MuxESTSeqCreateAttributes CreateObj;
      CreateObj.uValidAttributesMask = USE_SEQ_GRANULARITY;
      if ((EncoderNumCylinders_DataStore()) < MAX_MUX_PULSES_SUPPORTED) {
        CreateObj.u1NumPulsesToCreate = (EncoderNumCylinders_DataStore());
      } else {
        CreateObj.u1NumPulsesToCreate = MAX_MUX_PULSES_SUPPORTED;
      }

      CreateObj.eGranularity = FINE_GRANULARITY;
      CreateObj.uValidAttributesMask |= USE_SEQ_DIAG_REPORT_COND;
      CreateObj.ReportsObj.pfDiagCback = SparkSeqDiagCallback_21;
      CreateObj.ReportsObj.uDiagCbackUserData = 0;
      for (i=0; i < (EncoderNumCylinders_DataStore()); i++) {
        if (i < MAX_MUX_PULSES_SUPPORTED) {
          CreateObj.s2PulseOffsetDegATDC1Arr[i] = (EncoderTDCAngles_DataStore())
            [i];
        }
      }

      createErrorResult = CreateResource((E_ModuleResource)
        (EST_InitialPin_DataStore()), &CreateObj, BEHAVIOUR_MUX_EST_SEQ);
    }

    {
      extern uint8_T EST_SparkCreate;
      if (SUCCESS(createErrorResult))
        EST_SparkCreate = 0;
      else
        EST_SparkCreate = (uint8_T) GetErrorCode(createErrorResult);
    }
  }

  /* Clear enable/disable state for embedded trigger Trigger_FGND_5XRTI_PERIODIC_8449p0001 */
  BaseEngineController_LS_DWork.s13_motohawk_trigger_DWORK1 = 0;

  /* Start for Enabled SubSystem: '<S14>/Electronic Throttle Controller' */

  /* Start for Enabled SubSystem: '<S30>/PassThrough' */
  /* VirtualOutportStart for Outport: '<S50>/Out1' */
  BaseEngineController_LS_B.s50_In1 = 10.0;

  /* End of Start for SubSystem: '<S30>/PassThrough' */

  /* S-Function Block: <S61>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s61_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for Stateflow: '<S20>/ETC Test  Manager' */
  BaseEngineController_LS_DWork.s26_TimerOld = 0.0;

  /* Entry: Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/ETC Test  Manager */
  /* Transition: '<S26>:7' */
  BaseEngineController_LS_DWork.s26_is_c9_BaseEngineController_LS =
    BaseEngineController_LS_IN_PassThrough;

  /* Entry 'PassThrough': '<S26>:1' */
  BaseEngineController_LS_B.s26_DC_Override = 0;
  BaseEngineController_LS_B.s26_TestComplete = FALSE;
  BaseEngineController_LS_B.s26_SetpointMode = 0;
  BaseEngineController_LS_B.s26_TestTime = 0.0;

  /* S-Function Block: <S53>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s53_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S41>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s41_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S46>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s46_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* End of Start for SubSystem: '<S14>/Electronic Throttle Controller' */

  /* S-Function Block: <S704>/Injector Sequence */
  {
    S_SeqOutAttributes DynamicObj;
    NativeError_S createErrorResult = ERROR_BEHAVIOUR_METHOD_UNSUPPORTED;
    NativeError_S dynamicErrorResult = ERROR_BEHAVIOUR_METHOD_UNSUPPORTED;
    NativeError_S dynamicErrorResult2 = ERROR_BEHAVIOUR_METHOD_UNSUPPORTED;
    int32_T i;
    extern void InjectorSeqDiagCallback_40(S_SeqOutDiagReportPtr report,
      NativePtrSizedInt_U userData);
    extern S_SeqOutInjDiagReport InjectorSeqDiagInfo_40[8];
    extern int32_T InjectorSeqDiagLastPin_40;
    DynamicObj.uMinPulseDurationInMicroSecs = 1500;
    for (i=0; i < (EncoderNumCylinders_DataStore()); i++) {
      InjectorSeqDiagInfo_40[i].u4TXTimeInMicroSecs = 0xFFFFFFFF;
      InjectorSeqDiagInfo_40[i].u1TXCnt = 1;
    }

    InjectorSeqDiagLastPin_40 = -1;
    DynamicObj.eDiagCond = RES_ENABLED;
    DynamicObj.eUpdateMode = SEQ_UPDATE_OS_PROTECTED;
    DynamicObj.uValidAttributesMask = USE_SEQ_UPDATE_MODE | USE_SEQ_MIN_DURATION
      | USE_SEQ_DIAG_REPORT_COND;
    if ((INJ_SequenceType_DataStore()) == 0) {
      if ((INJ_Behavior_DataStore()) == 0) {
        S_InjSeqCreateAttributes CreateObj;
        CreateObj.uValidAttributesMask = USE_SEQ_GRANULARITY |
          USE_SEQ_DIAG_REPORT_COND;
        CreateObj.u1NumPulsesToCreate = 1;
        CreateObj.eGranularity = FINE_GRANULARITY;
        CreateObj.ReportsObj.pfDiagCback = InjectorSeqDiagCallback_40;
        DynamicObj.u1AffectedPulse = 0;
        for (i=0; i < (EncoderNumCylinders_DataStore()); i++) {
          if ((INJ_InitialPin_DataStore()) + i <= 23) {
            CreateObj.ReportsObj.uDiagCbackUserData = (NativePtrSizedInt_U) i;
            CreateObj.s2PulseOffsetDegATDC1Arr[0] = (EncoderTDCAngles_DataStore())
              [i];
            createErrorResult = CreateResource((E_ModuleResource)
              ((INJ_InitialPin_DataStore()) + i), &CreateObj, BEHAVIOUR_INJ_SEQ);
            dynamicErrorResult = SetResourceAttributesSequenceOut
              ((E_ModuleResource) ((INJ_InitialPin_DataStore()) + i),
               &DynamicObj, BEHAVIOUR_INJ_SEQ);
          }
        }
      } else if ((INJ_Behavior_DataStore()) == 1) {
        extern void TransientInjectorSeqReportCallback_40
          (S_SeqOutInjEndEventReportPtr report, NativePtrSizedInt_U userData);
        extern TransientInjectorSeqInfo_T TransientInjectorSeqInfo_40[8];
        S_TranInjSeqCreateAttributes CreateObj;
        CreateObj.uValidAttributesMask = USE_SEQ_GRANULARITY |
          USE_SEQ_ENDEVENT_REPORT_COND | USE_SEQ_DIAG_REPORT_COND;
        CreateObj.ReportsObj.pfReportCback =
          TransientInjectorSeqReportCallback_40;
        CreateObj.ReportsObj.pfDiagCback = InjectorSeqDiagCallback_40;
        DynamicObj.u1AffectedPulse = 0;
        DynamicObj.eReportCond = RES_ENABLED;
        DynamicObj.uValidAttributesMask |= USE_SEQ_ENDEVENT_REPORT_COND;
        for (i=0; i < (EncoderNumCylinders_DataStore()); i++) {
          if ((INJ_InitialPin_DataStore()) + i <= 23) {
            TransientInjectorSeqInfo_40[i].primaryComplete = 0;
            TransientInjectorSeqInfo_40[i].primaryDuration = 0;
            TransientInjectorSeqInfo_40[i].pinResource =
              ((INJ_InitialPin_DataStore()) + i);
            CreateObj.ReportsObj.uReportCbackUserData = (NativePtrSizedInt_U) i;
            CreateObj.ReportsObj.uDiagCbackUserData = (NativePtrSizedInt_U) i;
            CreateObj.s2OffsetDegATDC1 = (EncoderTDCAngles_DataStore())[i];
            createErrorResult = CreateResource((E_ModuleResource)
              ((INJ_InitialPin_DataStore()) + i), &CreateObj,
              BEHAVIOUR_TRAN_FUEL_SEQ);
            dynamicErrorResult = SetResourceAttributesSequenceOut
              ((E_ModuleResource) ((INJ_InitialPin_DataStore()) + i),
               &DynamicObj, BEHAVIOUR_TRAN_FUEL_SEQ);
          }
        }
      }
    } else if ((INJ_SequenceType_DataStore()) == 1)/* Batch Mode */
    {
      S_InjSeqCreateAttributes CreateObj;
      CreateObj.uValidAttributesMask = USE_SEQ_GRANULARITY |
        USE_SEQ_DIAG_REPORT_COND;
      CreateObj.u1NumPulsesToCreate = 2;
      CreateObj.eGranularity = FINE_GRANULARITY;
      CreateObj.ReportsObj.pfDiagCback = InjectorSeqDiagCallback_40;
      if ((EncoderNumCylinders_DataStore()) % 2 == 0) {
        int half_cylinders = (EncoderNumCylinders_DataStore()) / 2;
        for (i=0; i < half_cylinders; i++) {
          if ((INJ_InitialPin_DataStore()) + i <= 23) {
            int cyl = (EncoderTDCOrder_DataStore())[i];
            int opp_cyl = (EncoderTDCOrder_DataStore())[i + half_cylinders];
            sint2 p0;
            sint2 p1;
            if (cyl < half_cylinders) {
              p0 = (EncoderTDCAngles_DataStore())[cyl];
              p1 = (EncoderTDCAngles_DataStore())[opp_cyl];
            } else {
              p0 = (EncoderTDCAngles_DataStore())[opp_cyl];
              p1 = (EncoderTDCAngles_DataStore())[cyl];
            }

            CreateObj.ReportsObj.uDiagCbackUserData = (NativePtrSizedInt_U) i;
            CreateObj.s2PulseOffsetDegATDC1Arr[0] = p0;
            CreateObj.s2PulseOffsetDegATDC1Arr[1] = p1;
            createErrorResult = CreateResource((E_ModuleResource)
              ((INJ_InitialPin_DataStore()) + i), &CreateObj, BEHAVIOUR_INJ_SEQ);
            DynamicObj.u1AffectedPulse = 0;
            dynamicErrorResult = SetResourceAttributesSequenceOut
              ((E_ModuleResource) ((INJ_InitialPin_DataStore()) + i),
               &DynamicObj, BEHAVIOUR_INJ_SEQ);
            DynamicObj.u1AffectedPulse = 1;
            dynamicErrorResult2 = SetResourceAttributesSequenceOut
              ((E_ModuleResource) ((INJ_InitialPin_DataStore()) + i),
               &DynamicObj, BEHAVIOUR_INJ_SEQ);
          }
        }
      }
    } else if ((INJ_SequenceType_DataStore()) == 2)/* Wasted Fuel Mode */
    {
      S_InjSeqCreateAttributes CreateObj;
      CreateObj.uValidAttributesMask = USE_SEQ_GRANULARITY |
        USE_SEQ_DIAG_REPORT_COND;
      CreateObj.u1NumPulsesToCreate = 2;
      CreateObj.eGranularity = FINE_GRANULARITY;
      CreateObj.ReportsObj.pfDiagCback = InjectorSeqDiagCallback_40;
      for (i=0; i < (EncoderNumCylinders_DataStore()); i++) {
        if ((INJ_InitialPin_DataStore()) + i <= 23) {
          CreateObj.ReportsObj.uDiagCbackUserData = (NativePtrSizedInt_U) i;
          CreateObj.s2PulseOffsetDegATDC1Arr[0] = (EncoderTDCAngles_DataStore())
            [i];
          CreateObj.s2PulseOffsetDegATDC1Arr[1] = (((EncoderTDCAngles_DataStore())
            [i] + (360*16)) % (720*16));
          createErrorResult = CreateResource((E_ModuleResource)
            ((INJ_InitialPin_DataStore()) + i), &CreateObj, BEHAVIOUR_INJ_SEQ);
          DynamicObj.u1AffectedPulse = 0;
          dynamicErrorResult = SetResourceAttributesSequenceOut
            ((E_ModuleResource) ((INJ_InitialPin_DataStore()) + i), &DynamicObj,
             BEHAVIOUR_INJ_SEQ);
          DynamicObj.u1AffectedPulse = 1;
          dynamicErrorResult2 = SetResourceAttributesSequenceOut
            ((E_ModuleResource) ((INJ_InitialPin_DataStore()) + i), &DynamicObj,
             BEHAVIOUR_INJ_SEQ);
        }
      }
    } else if ((INJ_SequenceType_DataStore()) == 3) {
      /* Throttle-Body unsupported */
    }

    {
      extern uint8_T INJ_InjectorCreate;
      if (SUCCESS(createErrorResult))
        INJ_InjectorCreate = 0;
      else
        INJ_InjectorCreate = (uint8_T) GetErrorCode(createErrorResult);
    }

    BaseEngineController_LS_DWork.s704_InjectorSequence_DWORK1[0] = 0;
    BaseEngineController_LS_DWork.s704_InjectorSequence_DWORK1[1] = 0;
    BaseEngineController_LS_DWork.s704_InjectorSequence_DWORK1[2] = 0;
    BaseEngineController_LS_DWork.s704_InjectorSequence_DWORK1[3] = 0;
    BaseEngineController_LS_DWork.s704_InjectorSequence_DWORK1[4] = 0;
    BaseEngineController_LS_DWork.s704_InjectorSequence_DWORK1[5] = 0;
    BaseEngineController_LS_DWork.s704_InjectorSequence_DWORK1[6] = 0;
    BaseEngineController_LS_DWork.s704_InjectorSequence_DWORK1[7] = 0;
    BaseEngineController_LS_DWork.s704_InjectorSequence_DWORK2 = 0;
  }

  /* Start for Enabled SubSystem: '<S400>/Triggered Subsystem' incorporates:
   *  Start for S-Function (fcncallgen): '<S401>/Function-Call Generator'
   *  Start for SubSystem: '<S11>/Diagnostics'
   */

  /* Start for Enabled SubSystem: '<S400>/Triggered Subsystem' incorporates:
   *  InitializeConditions for S-Function (fcncallgen): '<S401>/Function-Call Generator'
   *  InitializeConditions for SubSystem: '<S11>/Diagnostics'
   */

  /* S-Function Block: <S298>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s298_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S297>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s297_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S301>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s301_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S300>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s300_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S302>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s302_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S311>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s311_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S312>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s312_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S313>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s313_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S329>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s329_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S328>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s328_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S305>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s305_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S309>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s309_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }
}

/* Output and update for function-call system: '<Root>/Foreground' */
void BaseEngineController_LS_Foreground(void)
{
  /* local block i/o variables */
  real_T rtb_UnitDelay1_i;
  real_T rtb_Merge_b;
  real_T rtb_DataTypeConversion_hd;
  real_T rtb_UnitDelay_m;
  real_T rtb_Merge_o;
  real_T rtb_DataTypeConversion_f;
  real_T rtb_UnitDelay_jb;
  real_T rtb_Merge_c;
  real_T rtb_Switch2;
  real_T rtb_DataTypeConversion_n;
  real_T rtb_UnitDelay_gr;
  real_T rtb_Merge_h;
  real_T rtb_DataTypeConversion_fv;
  real_T rtb_UnitDelay_db;
  real_T rtb_Merge_oi;
  real_T rtb_motohawk_delta_time_ea;
  real_T rtb_Saturation_g;
  real_T rtb_UnitDelay1_e;
  real_T rtb_Merge_i;
  real_T rtb_UnitDelay1_ij;
  real_T rtb_Merge_j;
  real_T rtb_UnitDelay1_l;
  real_T rtb_Merge_hw;
  real_T rtb_motohawk_delta_time_f;
  real_T rtb_UnitDelay1_f;
  real_T rtb_Merge_f;
  real_T rtb_UnitDelay1_a;
  real_T rtb_Merge_in;
  real_T rtb_UnitDelay_ge;
  real_T rtb_Merge_if;
  real_T rtb_UnitDelay1_n;
  real_T rtb_Merge_jq;
  real_T rtb_motohawk_interpolation_2d;
  real_T rtb_motohawk_interpolation_2d2;
  real_T rtb_Saturation1;
  real_T rtb_motohawk_interpolation_1d1_j;
  real_T rtb_motohawk_interpolation_2d1_n;
  real_T rtb_UnitDelay_nr;
  real_T rtb_Merge_dv;
  real_T rtb_motohawk_delta_time_o;
  real_T rtb_motohawk_delta_time_dd;
  real_T rtb_motohawk_delta_time_g;
  real_T rtb_motohawk_delta_time_oe;
  real_T rtb_motohawk_delta_time_ds;
  real_T rtb_Saturation_n;
  real_T rtb_UnitDelay1_p;
  real_T rtb_Merge_b3f;
  real_T rtb_motohawk_interpolation_1d3_k;
  real_T rtb_motohawk_interpolation_1d4_c;
  real_T rtb_motohawk_interpolation_1d1_oh;
  real_T rtb_motohawk_delta_time_hb;
  real_T rtb_UnitDelay1_aa;
  real_T rtb_Merge_ol;
  real_T rtb_UnitDelay1_c;
  real_T rtb_Merge_ht;
  real_T rtb_Saturation_ah;
  real_T rtb_Saturation_m;
  real_T rtb_Saturation_kf;
  real_T rtb_Saturation_b;
  real_T rtb_Saturation_e;
  real_T rtb_motohawk_delta_time_i;
  real_T rtb_Saturation_k4;
  real_T rtb_motohawk_interpolation_1d_h;
  real_T rtb_motohawk_delta_time_nr;
  real_T rtb_motohawk_delta_time_lw;
  real_T rtb_Saturation_o;
  real_T rtb_Saturation_d;
  real_T rtb_motohawk_delta_time_fj;
  real_T rtb_motohawk_delta_time_i0;
  real_T rtb_motohawk_delta_time_k;
  real_T rtb_Saturation_nn;
  real_T rtb_Saturation_a0;
  real_T rtb_Saturation_f;
  real_T rtb_motohawk_delta_time_ij;
  real_T rtb_motohawk_delta_time_hv;
  real_T rtb_motohawk_delta_time_hc;
  real_T rtb_Saturation_j;
  real_T rtb_Saturation_em;
  real_T rtb_Saturation_i;
  real_T rtb_motohawk_delta_time_ks;
  real_T rtb_motohawk_delta_time_dj;
  real_T rtb_Saturation_or;
  real_T rtb_Saturation_p;
  real_T rtb_motohawk_delta_time_a;
  real_T rtb_motohawk_interpolation_1d_n;
  real_T rtb_Saturation_kn;
  real_T rtb_motohawk_interpolation_1d2_a;
  real_T rtb_motohawk_delta_time_l0;
  real_T rtb_Divide_p;
  real_T rtb_motohawk_interpolation_1d_kd;
  real_T rtb_Divide1;
  real_T rtb_motohawk_delta_time_op;
  real_T rtb_motohawk_interpolation_1d2_l;
  real_T rtb_motohawk_interpolation_1d3_n;
  real_T rtb_motohawk_delta_time_p;
  real_T rtb_motohawk_delta_time_id;
  real_T rtb_Sum2_o;
  real_T rtb_motohawk_interpolation_1d2_l0;
  real_T rtb_motohawk_interpolation_1d3_l;
  real_T rtb_Product4_k;
  real_T rtb_motohawk_delta_time_ao;
  real_T rtb_motohawk_interpolation_2d1_d;
  real_T rtb_motohawk_interpolation_2d_i;
  real_T rtb_motohawk_interpolation_1d2_n;
  real_T rtb_motohawk_interpolation_1d1_e;
  real_T rtb_motohawk_delta_time_l3;
  real_T rtb_MinMax1_d;
  real_T rtb_Saturation_ao;
  real_T rtb_motohawk_interpolation_1d_f;
  real_T rtb_RichEquivRatioSwPtDelta;
  real_T rtb_LeanEquivRatioSwPtDelta;
  real_T rtb_motohawk_interpolation_1d_i;
  real_T rtb_motohawk_interpolation_1d1_o0;
  real_T rtb_motohawk_delta_time_kr;
  real_T rtb_motohawk_delta_time_mn;
  real_T rtb_motohawk_delta_time_bm;
  real_T rtb_motohawk_delta_time_oq;
  real_T rtb_motohawk_delta_time_ad;
  real_T rtb_Saturation_nb;
  real_T rtb_Saturation_mr;
  real_T rtb_Saturation_c3;
  real_T rtb_RichEquivRatioTargetDelta_p;
  real_T rtb_LeanEquivRatioTargetDelta;
  real_T rtb_motohawk_interpolation_1d1_m;
  real_T rtb_motohawk_interpolation_2d2_h;
  real_T rtb_motohawk_interpolation_2d1_p;
  real_T rtb_motohawk_delta_time_m3;
  real_T rtb_Saturation_gs;
  real_T rtb_EOI;
  real_T rtb_PrimaryPulseInjectionTiming;
  real_T rtb_motohawk_interpolation_2d2_a;
  real_T rtb_motohawk_interpolation_2d1_a;
  real_T rtb_MinMax1_if;
  real_T rtb_motohawk_delta_time_nb;
  real_T rtb_Saturation_cv;
  real_T rtb_motohawk_interpolation_1d1_g;
  real_T rtb_motohawk_interpolation_2d2_f;
  real_T rtb_WarmUpMult;
  real_T rtb_motohawk_interpolation_1d_fx;
  real_T rtb_ECTEnrichment;
  real_T rtb_IATEnrichment;
  real_T rtb_CATEnrichment;
  real_T rtb_motohawk_interpolation_2d3;
  real_T rtb_WarmUptimeMult;
  real_T rtb_Product_bk;
  real_T rtb_motohawk_interpolation_2d_o;
  real_T rtb_motohawk_interpolation_1d_hw;
  real_T rtb_motohawk_interpolation_1d1_os;
  real_T rtb_motohawk_interpolation_2d_g;
  real_T rtb_motohawk_interpolation_2d1_b;
  real_T rtb_motohawk_interpolation_1d4_m;
  real_T rtb_motohawk_interpolation_1d5;
  real_T rtb_motohawk_interpolation_1d1_k;
  real_T rtb_motohawk_interpolation_1d1_bc;
  real_T rtb_motohawk_interpolation_1d_o;
  real_T rtb_motohawk_interpolation_2d_j;
  real_T rtb_motohawk_delta_time_dr;
  real_T rtb_motohawk_delta_time_mz;
  real_T rtb_motohawk_delta_time_jc;
  real_T rtb_motohawk_interpolation_1d_d;
  real_T rtb_motohawk_delta_time_hch;
  real_T rtb_motohawk_delta_time_oy;
  real_T rtb_motohawk_delta_time_e0;
  real_T rtb_Add_g1;
  real_T rtb_motohawk_interpolation_1d_kf;
  real_T rtb_motohawk_interpolation_1d_on;
  real_T rtb_motohawk_delta_time_l5;
  real_T rtb_Saturation_pd;
  real_T rtb_Saturation_l;
  real_T rtb_motohawk_interpolation_1d2_d;
  real_T rtb_motohawk_replicate[8];
  real_T rtb_motohawk_interpolation_1d1_ku;
  real_T rtb_Product_mq;
  real_T rtb_UnitDelay_gh;
  real_T rtb_motohawk_replicate1;
  real_T rtb_DataTypeConversion_m0;
  real_T rtb_DataTypeConversion_c;
  real_T rtb_Product5_o;
  real_T rtb_Switch_m;
  real_T rtb_Switch_bn;
  real_T rtb_DataTypeConversion_e;
  real_T rtb_motohawk_interpolation_1d3_a;
  real_T rtb_Abs_p;
  uint32_T rtb_DataTypeConversion3_j;
  uint32_T rtb_DataTypeConversion2_l;
  uint32_T rtb_DataTypeConversion2_i;
  uint32_T rtb_DataTypeConversion2_p;
  uint32_T rtb_InjectorSequence_o2[8];
  uint32_T rtb_Sum_hh;
  uint32_T rtb_UnitDelay_lk;
  uint32_T rtb_DataTypeConversion6;
  int16_T rtb_DataTypeConversion4_m;
  int16_T rtb_DataTypeConversion3_p;
  int16_T rtb_DataTypeConversion3_d;
  int16_T rtb_DataTypeConversion3_e;
  int16_T rtb_DataTypeConversion3_dm;
  int16_T rtb_DataTypeConversion7;
  int16_T rtb_DataTypeConversion2_pj;
  uint16_T rtb_RPMInst;
  uint16_T rtb_motohawk_ain5_i;
  uint16_T rtb_RPM;
  uint16_T rtb_motohawk_ain1;
  uint16_T rtb_motohawk_ain6;
  uint16_T rtb_motohawk_ain_read_o;
  uint16_T rtb_motohawk_encoder_average_rpm;
  uint16_T rtb_motohawk_ain_read_a;
  uint16_T rtb_motohawk_ain_read_g;
  index_T rtb_motohawk_prelookup_he;
  index_T rtb_motohawk_prelookup_aq;
  index_T rtb_motohawk_prelookup_br;
  index_T rtb_motohawk_prelookup_ao;
  index_T rtb_motohawk_prelookup2;
  index_T rtb_motohawk_prelookup1_h;
  index_T rtb_motohawk_prelookup_m;
  index_T rtb_motohawk_prelookup_e;
  index_T rtb_motohawk_prelookup_i;
  index_T rtb_motohawk_prelookup2_c;
  index_T rtb_motohawk_prelookup1_c;
  index_T rtb_motohawk_prelookup2_b;
  index_T rtb_motohawk_prelookup_k;
  index_T rtb_motohawk_prelookup_o;
  index_T rtb_motohawk_prelookup_j;
  index_T rtb_TimeSinceRun09;
  index_T rtb_motohawk_prelookup_l;
  index_T rtb_motohawk_prelookup1_d;
  index_T rtb_motohawk_prelookup_gv;
  index_T rtb_motohawk_prelookup_jn;
  index_T rtb_motohawk_prelookup1_n;
  index_T rtb_motohawk_prelookup_brx;
  index_T rtb_ITermIdx;
  index_T rtb_motohawk_prelookup_hf;
  index_T rtb_motohawk_prelookup_ag;
  index_T rtb_motohawk_prelookup1_jq;
  index_T rtb_motohawk_prelookup3;
  index_T rtb_motohawk_prelookup1_nl;
  index_T rtb_motohawk_prelookup_c;
  index_T rtb_motohawk_prelookup2_h;
  index_T rtb_motohawk_prelookup3_n;
  index_T rtb_motohawk_prelookup2_a;
  index_T rtb_motohawk_prelookup_bs;
  index_T rtb_motohawk_prelookup_b2;
  int8_T rtb_Add1_k;
  int8_T rtb_Add1_k3;
  int8_T rtb_Add1_e;
  uint8_T rtb_motohawk_data_read9;
  uint8_T rtb_Product_o;
  boolean_T rtb_RelOp_hf;
  boolean_T rtb_motohawk_fault_action1_o;
  boolean_T rtb_motohawk_fault_action2;
  boolean_T rtb_motohawk_fault_action3;
  boolean_T rtb_RelationalOperator5;
  boolean_T rtb_RelationalOperator_jv;
  boolean_T rtb_RelationalOperator3_h;
  boolean_T rtb_RelationalOperator3_or;
  boolean_T rtb_LogicalOperator2_p5;
  boolean_T rtb_LogicalOperator3_kf;
  boolean_T rtb_LogicalOperator2_i;
  boolean_T rtb_LogicalOperator3_g;
  boolean_T rtb_RelationalOperator_l;
  boolean_T rtb_LogicalOperator_f0;
  boolean_T rtb_LogicalOperator1_dw;
  boolean_T rtb_LogicalOperator2_g;
  boolean_T rtb_LogicalOperator3_n;
  boolean_T rtb_LogicalOperator2_kx;
  boolean_T rtb_LogicalOperator3_m;
  boolean_T rtb_LogicalOperator2_js;
  boolean_T rtb_LogicalOperator3_i;
  boolean_T rtb_LogicalOperator2_f4;
  boolean_T rtb_LogicalOperator3_ns;
  boolean_T rtb_LogicalOperator2_fw;
  boolean_T rtb_LogicalOperator3_l;
  boolean_T rtb_LogicalOperator2_a;
  boolean_T rtb_LogicalOperator3_d;
  boolean_T rtb_LogicalOperator2_fm;
  boolean_T rtb_LogicalOperator3_a;
  boolean_T rtb_LogicalOperator2_gc;
  boolean_T rtb_LogicalOperator3_e;
  boolean_T rtb_LogicalOperator2_b;
  boolean_T rtb_LogicalOperator3_gd;
  boolean_T rtb_LogicalOperator_o;
  boolean_T rtb_LogicalOperator1_h;
  boolean_T rtb_LogicalOperator2_p4;
  boolean_T rtb_LogicalOperator3_p;
  boolean_T rtb_LogicalOperator2_do;
  boolean_T rtb_LogicalOperator3_ly;
  boolean_T rtb_LogicalOperator2_ob;
  boolean_T rtb_LogicalOperator3_in;
  boolean_T rtb_LogicalOperator2_il;
  boolean_T rtb_LogicalOperator3_dk;
  boolean_T rtb_LogicalOperator2_bi;
  boolean_T rtb_LogicalOperator3_bk;
  boolean_T rtb_LogicalOperator2_kj;
  boolean_T rtb_LogicalOperator3_nb;
  boolean_T rtb_RelationalOperator1_cf;
  boolean_T rtb_RelationalOperator2_cd;
  boolean_T rtb_RelationalOperator5_o;
  boolean_T rtb_LogicalOperator2_m;
  boolean_T rtb_RelationalOperator5_f;
  boolean_T rtb_RelationalOperator3_mn;
  boolean_T rtb_RelationalOperator4_f;
  boolean_T rtb_RelationalOperator5_j;
  boolean_T rtb_RelationalOperator6;
  boolean_T rtb_RelationalOperator9;
  boolean_T rtb_RelationalOperator5_a;
  boolean_T rtb_RelationalOperator2_c4;
  boolean_T rtb_LogicalOperator2_ie;
  boolean_T rtb_LogicalOperator4_jz;
  boolean_T rtb_RelationalOperator5_jx;
  boolean_T rtb_LogicalOperator_g5;
  boolean_T rtb_LogicalOperator_mr;
  boolean_T rtb_RelationalOperator2_b;
  boolean_T rtb_LogicalOperator_kz;
  boolean_T rtb_Switch1_n1;
  boolean_T rtb_Switch1_k;
  boolean_T rtb_LT3;
  boolean_T rtb_LT2;
  boolean_T rtb_LT4;
  boolean_T rtb_RelationalOperator2_pk;
  boolean_T rtb_RelationalOperator1_n;
  boolean_T rtb_LogicalOperator_di;
  boolean_T rtb_RelationalOperator1_hq;
  boolean_T rtb_motohawk_data_read1_kw;
  boolean_T rtb_AND1[8];
  boolean_T rtb_motohawk_data_read1_iz;
  boolean_T rtb_motohawk_fault_action_b;
  boolean_T rtb_AboveRich;
  boolean_T rtb_CombinatorialLogic[2];
  boolean_T rtb_BelowLoTarget;
  boolean_T rtb_CombinatorialLogic_d[2];
  boolean_T rtb_LogicalOperator_iy;
  boolean_T rtb_LogicalOperator2_ig;
  boolean_T rtb_AboveHiTarget;
  boolean_T rtb_BelowLoTarget_g;
  boolean_T rtb_CombinatorialLogic_da[2];
  boolean_T rtb_Switch_oh;
  boolean_T rtb_RelOp_mp;
  boolean_T rtb_CombinatorialLogic_l[2];
  boolean_T rtb_BelowLoTarget_b;
  boolean_T rtb_LogicalOperator3_c;
  boolean_T rtb_AboveHiTarget_a;
  boolean_T rtb_CombinatorialLogic_c[2];
  boolean_T rtb_BelowLoTarget_j;
  boolean_T rtb_RelationalOperator_ipv;
  real_T minV;
  real_T minV_0;
  real_T minV_1;
  real_T minV_2;
  boolean_T rtb_RelationalOperator2_i;
  boolean_T rtb_RelOp_pu;
  boolean_T rtb_LogicalOperator1_j;
  int32_T rtb_DataTypeConversion_ik;
  real_T rtb_Product1_l2;
  real_T rtb_Product1_ii;
  real_T rtb_UnitDelay_n;
  real_T rtb_UnitDelay1_h;
  real_T rtb_Sum2_gr;
  real_T rtb_Sum1_mz;
  real_T rtb_Sum_cy;
  int32_T rtb_DataTypeConversion_fq;
  real_T rtb_Merge_b3;
  real_T rtb_Sum_ol;
  int32_T rtb_DataTypeConversion_gx;
  real_T rtb_Merge_ie;
  real_T rtb_Merge_ho;
  real_T rtb_Merge_ab;
  real_T rtb_Merge_gg;
  real_T rtb_Merge_db;
  real_T rtb_Merge_fp;
  real_T rtb_Merge_bv[8];
  real_T rtb_Product2_aa[8];
  boolean_T rtb_LogicalOperator3_jj[8];
  boolean_T rtb_LogicalOperator1_aj[8];
  int32_T rtb_DataTypeConversion_ii;
  real_T rtb_Sum1_li;
  real_T rtb_Sum1_m;
  real_T rtb_Sum1_nb;
  real_T rtb_Sum1_hw;
  real_T rtb_Sum1_lp;
  real_T rtb_Sum1_o;
  real_T rtb_Sum1_c;
  real_T rtb_Sum1_nl;
  real_T rtb_Sum1_d4;
  real_T rtb_Sum1_a;
  real_T rtb_Sum1_fm;
  real_T rtb_Sum1_mzy;
  real_T rtb_Sum1_cs;
  uint32_T rtb_Switch_kj;
  real_T rtb_Sum1_oh;
  uint8_T rtb_Product2_m;
  uint8_T rtb_Product1_gw;
  uint8_T rtb_Product_ln;
  int8_T rtb_Add_k;
  int8_T rtb_Sum_l3;
  boolean_T rtb_LogicalOperator1_dv;
  real_T rtb_Switch_k2;
  real_T rtb_Switch1_n;
  real_T rtb_Sum_dn;
  real_T rtb_Switch_c;
  boolean_T rtb_LogicalOperator2_dx;
  real_T rtb_Product4_o;
  boolean_T rtb_Switch1_mj;
  boolean_T rtb_Switch1_o;
  boolean_T rtb_Switch1_l3;
  boolean_T rtb_Switch1_bv;
  boolean_T rtb_Switch1_l;
  int32_T i;
  real_T rtb_DesiredLambda_idx;
  real_T rtb_DesiredLambda_idx_0;
  real_T rtb_DesiredLambda_idx_1;
  uint16_T rtb_DataTypeConversion_iq_0;
  real_T u;

  /* S-Function (motohawk_sfun_trigger): '<S405>/motohawk_trigger' */
  /* Enable for Trigger_FGND_5XRTI_PERIODIC_7437p0006 */
  if (BaseEngineController_LS_DWork.s405_motohawk_trigger_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s405_motohawk_trigger_DWORK1 = 1;
  }

  /* S-Function Block: <S403>/motohawk_encoder_instant_rpm */
  {
    rtb_RPMInst = GetEncoderResourceInstantRPM();
  }

  /* DataTypeConversion: '<S403>/Data Type Conversion1' incorporates:
   *  S-Function (motohawk_sfun_encoder_instant_rpm): '<S403>/motohawk_encoder_instant_rpm'
   */
  BaseEngineController_LS_B.s403_RPMInst = (real_T)rtb_RPMInst;

  /* DataTypeConversion: '<S370>/Data Type Conversion' */
  if (BaseEngineController_LS_B.s403_RPMInst < 65536.0) {
    if (BaseEngineController_LS_B.s403_RPMInst >= 0.0) {
      rtb_DataTypeConversion_iq_0 = (uint16_T)
        BaseEngineController_LS_B.s403_RPMInst;
    } else {
      rtb_DataTypeConversion_iq_0 = 0U;
    }
  } else {
    rtb_DataTypeConversion_iq_0 = MAX_uint16_T;
  }

  /* End of DataTypeConversion: '<S370>/Data Type Conversion' */
  /* Sum: '<S370>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S370>/motohawk_calibration3'
   *  S-Function (motohawk_sfun_calibration): '<S370>/motohawk_calibration4'
   */
  i = ((uint16_T)(StallRPMMinThreshold_DataStore())) - ((uint16_T)
    (StallRPMThresholdHyst_DataStore()));
  if (i <= 0) {
    i = 0;
  }

  /* End of Sum: '<S370>/Sum' */

  /* RelationalOperator: '<S370>/Relational Operator1' incorporates:
   *  DataTypeConversion: '<S370>/Data Type Conversion'
   *  Sum: '<S370>/Sum'
   */
  BaseEngineController_LS_B.s370_Stall = ((rtb_DataTypeConversion_iq_0 < i));

  /* RelationalOperator: '<S370>/Relational Operator4' incorporates:
   *  DataTypeConversion: '<S370>/Data Type Conversion'
   *  S-Function (motohawk_sfun_calibration): '<S370>/motohawk_calibration4'
   */
  BaseEngineController_LS_B.s370_Crank = ((rtb_DataTypeConversion_iq_0 >
    ((uint16_T)(StallRPMMinThreshold_DataStore()))));

  /* RelationalOperator: '<S370>/Relational Operator2' incorporates:
   *  DataTypeConversion: '<S370>/Data Type Conversion'
   *  S-Function (motohawk_sfun_calibration): '<S370>/motohawk_calibration1'
   */
  rtb_RelationalOperator2_i = (rtb_DataTypeConversion_iq_0 > ((uint16_T)
    (CrankToRunRPMThresh_DataStore())));

  /* UnitDelay: '<S370>/Unit Delay' */
  BaseEngineController_LS_B.s370_UnitDelay =
    BaseEngineController_LS_DWork.s370_UnitDelay_DSTATE;

  /* S-Function (motohawk_sfun_trigger): '<S370>/motohawk_trigger' */
  /* Enable for Trigger_FGND_TDC_EVENT_6410p0001 */
  if (BaseEngineController_LS_DWork.s370_motohawk_trigger_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s370_motohawk_trigger_DWORK1 = 1;
  }

  /* Logic: '<S370>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S370>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S370>/motohawk_calibration2'
   */
  BaseEngineController_LS_B.s370_Run = ((rtb_RelationalOperator2_i &&
    (BaseEngineController_LS_B.s390_Switch >= ((uint8_T)(RunLatchTDCs_DataStore())))));

  /* Stateflow: '<S370>/Engine State Machine' */

  /* Gateway: Foreground/Control/VirtualSensors/RawProcessed/EngineState/Engine State Machine */
  /* During: Foreground/Control/VirtualSensors/RawProcessed/EngineState/Engine State Machine */
  switch (BaseEngineController_LS_DWork.s389_is_c2_BaseEngineController_LS) {
   case BaseEngineController_LS_IN_Crank:
    /* During 'Crank': '<S389>:3' */
    if (BaseEngineController_LS_B.s370_Stall) {
      /* Transition: '<S389>:8' */
      BaseEngineController_LS_DWork.s389_is_c2_BaseEngineController_LS =
        BaseEngineController_LS_IN_Stall_b;

      /* Entry 'Stall': '<S389>:1' */
      BaseEngineController_LS_B.s389_State = 1U;
    } else {
      if (BaseEngineController_LS_B.s370_Run) {
        /* Transition: '<S389>:6' */
        BaseEngineController_LS_DWork.s389_is_c2_BaseEngineController_LS =
          BaseEngineController_LS_IN_Run;

        /* Entry 'Run': '<S389>:2' */
        BaseEngineController_LS_B.s389_State = 3U;
      }
    }
    break;

   case BaseEngineController_LS_IN_Run:
    /* During 'Run': '<S389>:2' */
    if (BaseEngineController_LS_B.s370_Stall) {
      /* Transition: '<S389>:7' */
      BaseEngineController_LS_DWork.s389_is_c2_BaseEngineController_LS =
        BaseEngineController_LS_IN_Stall_b;

      /* Entry 'Stall': '<S389>:1' */
      BaseEngineController_LS_B.s389_State = 1U;
    }
    break;

   case BaseEngineController_LS_IN_Stall_b:
    /* During 'Stall': '<S389>:1' */
    if (BaseEngineController_LS_B.s370_Crank) {
      /* Transition: '<S389>:5' */
      BaseEngineController_LS_DWork.s389_is_c2_BaseEngineController_LS =
        BaseEngineController_LS_IN_Crank;

      /* Entry 'Crank': '<S389>:3' */
      BaseEngineController_LS_B.s389_State = 2U;
    }
    break;

   default:
    /* Transition: '<S389>:4' */
    BaseEngineController_LS_DWork.s389_is_c2_BaseEngineController_LS =
      BaseEngineController_LS_IN_Stall_b;

    /* Entry 'Stall': '<S389>:1' */
    BaseEngineController_LS_B.s389_State = 1U;
    break;
  }

  /* End of Stateflow: '<S370>/Engine State Machine' */

  /* RelationalOperator: '<S122>/RelOp' incorporates:
   *  Constant: '<S122>/Constant'
   */
  rtb_RelOp_pu = (BaseEngineController_LS_B.s389_State == 1);

  /* S-Function Block: <S402>/motohawk_ain5 Resource: ACSwPin */
  {
    extern NativeError_S ACSwPin_AnalogInput_Get(uint16_T *adc, uint16_T *status);
    ACSwPin_AnalogInput_Get(&rtb_motohawk_ain5_i, NULL);
  }

  /* DataTypeConversion: '<S407>/Data Type Conversion' incorporates:
   *  S-Function (motohawk_sfun_ain): '<S402>/motohawk_ain5'
   */
  BaseEngineController_LS_B.s407_DataTypeConversion = (real_T)
    rtb_motohawk_ain5_i;

  /* RelationalOperator: '<S407>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S407>/SwitchPoint'
   */
  rtb_RelationalOperator2_i = (BaseEngineController_LS_B.s407_DataTypeConversion
    > (ACSwSwitchPt_DataStore()));

  /* Logic: '<S407>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S407>/0 = No Inversion 1 = Inversion'
   */
  rtb_RelationalOperator2_i ^= (ACSwPolarity_DataStore());

  /* If: '<S414>/If' incorporates:
   *  Inport: '<S415>/In1'
   *  Inport: '<S416>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S414>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S414>/override_enable'
   */
  if ((ACSw_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S414>/NewValue' incorporates:
     *  ActionPort: '<S415>/Action Port'
     */
    BaseEngineController_LS_B.s414_Merge = (ACSw_new_DataStore());

    /* End of Outputs for SubSystem: '<S414>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S414>/OldValue' incorporates:
     *  ActionPort: '<S416>/Action Port'
     */
    BaseEngineController_LS_B.s414_Merge = rtb_RelationalOperator2_i;

    /* End of Outputs for SubSystem: '<S414>/OldValue' */
  }

  /* End of If: '<S414>/If' */

  /* S-Function Block: <S469>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s469_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_e = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S469>/Product' incorporates:
   *  MinMax: '<S469>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S469>/motohawk_calibration'
   */
  rtb_DataTypeConversion_e /= (rtb_DataTypeConversion_e >=
    (ACPresFilterConst_DataStore())) || rtIsNaN((ACPresFilterConst_DataStore()))
    ? rtb_DataTypeConversion_e : (ACPresFilterConst_DataStore());

  /* Logic: '<S460>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S460>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S460>/motohawk_fault_status4'
   */
  rtb_RelationalOperator_ipv = (IsFaultActive(2) || IsFaultActive(3));

  /* Logic: '<S460>/Logical Operator6' */
  rtb_RelationalOperator2_i = !rtb_RelationalOperator_ipv;

  /* Logic: '<S460>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S460>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S460>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_j = (IsFaultSuspected(2) || IsFaultSuspected(3));

  /* S-Function Block: <S404>/motohawk_ain4 Resource: ACPresPin */
  {
    extern NativeError_S ACPresPin_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    ACPresPin_AnalogInput_Get(&BaseEngineController_LS_B.s404_motohawk_ain4,
      NULL);
  }

  /* DataTypeConversion: '<S460>/Data Type Conversion' */
  rtb_DataTypeConversion_ik = BaseEngineController_LS_B.s404_motohawk_ain4;

  /* Product: '<S460>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S460>/motohawk_calibration4'
   */
  rtb_Product1_l2 = (real_T)rtb_DataTypeConversion_ik * (ACPresGain_DataStore());

  /* Sum: '<S460>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S460>/motohawk_calibration5'
   */
  BaseEngineController_LS_B.s460_Sum1 = rtb_Product1_l2 + (ACPresOfst_DataStore());

  /* UnitDelay: '<S460>/Unit Delay1' */
  rtb_UnitDelay1_i = BaseEngineController_LS_DWork.s460_UnitDelay1_DSTATE;

  /* If: '<S460>/If' incorporates:
   *  Logic: '<S460>/Logical Operator5'
   */
  if (rtb_RelationalOperator2_i && rtb_LogicalOperator1_j) {
    /* Outputs for IfAction SubSystem: '<S460>/If Action Subsystem' incorporates:
     *  ActionPort: '<S470>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay1_i, &rtb_Merge_b);

    /* End of Outputs for SubSystem: '<S460>/If Action Subsystem' */
  } else if (rtb_RelationalOperator_ipv) {
    /* Outputs for IfAction SubSystem: '<S460>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S471>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((ACPresDfltValue_DataStore()),
      &rtb_Merge_b);

    /* End of Outputs for SubSystem: '<S460>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S460>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S472>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      (BaseEngineController_LS_B.s460_Sum1, &rtb_Merge_b);

    /* End of Outputs for SubSystem: '<S460>/If Action Subsystem2' */
  }

  /* End of If: '<S460>/If' */

  /* Sum: '<S474>/Sum1' incorporates:
   *  Constant: '<S474>/Constant'
   *  Product: '<S474>/Product'
   *  Product: '<S474>/Product1'
   *  Sum: '<S474>/Sum'
   *  UnitDelay: '<S474>/Unit Delay'
   */
  rtb_Sum1_li = (1.0 - rtb_DataTypeConversion_e) *
    BaseEngineController_LS_DWork.s474_UnitDelay_DSTATE + rtb_Merge_b *
    rtb_DataTypeConversion_e;

  /* If: '<S473>/If' incorporates:
   *  Inport: '<S475>/In1'
   *  Inport: '<S476>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S473>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S473>/override_enable'
   */
  if ((ACPres_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S473>/NewValue' incorporates:
     *  ActionPort: '<S475>/Action Port'
     */
    BaseEngineController_LS_B.s473_Merge = (ACPres_new_DataStore());

    /* End of Outputs for SubSystem: '<S473>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S473>/OldValue' incorporates:
     *  ActionPort: '<S476>/Action Port'
     */
    BaseEngineController_LS_B.s473_Merge = rtb_Sum1_li;

    /* End of Outputs for SubSystem: '<S473>/OldValue' */
  }

  /* End of If: '<S473>/If' */

  /* Outputs for Enabled SubSystem: '<S15>/Stall' incorporates:
   *  EnablePort: '<S121>/Enable'
   */
  if (rtb_RelOp_pu) {
    if (!BaseEngineController_LS_DWork.s15_Stall_MODE) {
      /* InitializeConditions for UnitDelay: '<S284>/Unit Delay' */
      BaseEngineController_LS_DWork.s284_UnitDelay_DSTATE = FALSE;

      /* InitializeConditions for UnitDelay: '<S285>/Unit Delay' */
      BaseEngineController_LS_DWork.s285_UnitDelay_DSTATE = FALSE;

      /* InitializeConditions for UnitDelay: '<S286>/Unit Delay' */
      BaseEngineController_LS_DWork.s286_UnitDelay_DSTATE = FALSE;

      /* InitializeConditions for UnitDelay: '<S287>/Unit Delay' */
      BaseEngineController_LS_DWork.s287_UnitDelay_DSTATE = 0.0;
      BaseEngineController_LS_DWork.s15_Stall_MODE = TRUE;
    }

    /* DataTypeConversion: '<S121>/Data Type Conversion' incorporates:
     *  Constant: '<S121>/OFF'
     */
    BaseEngineController_LS_B.s118_WASTEGATE = 0.0;

    /* DataTypeConversion: '<S121>/Data Type Conversion1' incorporates:
     *  Constant: '<S121>/OFF1'
     */
    BaseEngineController_LS_B.s118_IACS = 0.0;

    /* DataTypeConversion: '<S121>/Data Type Conversion2' incorporates:
     *  Constant: '<S121>/OFF2'
     */
    BaseEngineController_LS_B.s118_IACP = 0.0;

    /* RelationalOperator: '<S281>/LT' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S279>/motohawk_calibration1'
     */
    rtb_BelowLoTarget_g = (BaseEngineController_LS_B.s622_Merge >=
      (ECTFanOn_DataStore()));

    /* RelationalOperator: '<S281>/LT1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S279>/motohawk_calibration'
     */
    rtb_Switch_oh = (BaseEngineController_LS_B.s622_Merge <=
                     (ECTFanOff_DataStore()));

    /* CombinatorialLogic: '<S284>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_g != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_Switch_oh != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_da[0] =
        BaseEngineController_LS_ConstP.pooled728[rowidx];
      rtb_CombinatorialLogic_da[1] =
        BaseEngineController_LS_ConstP.pooled728[rowidx + 4];
    }

    /* Switch: '<S284>/Switch1' incorporates:
     *  UnitDelay: '<S284>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_da[1]) {
      rtb_RelationalOperator2_i = rtb_CombinatorialLogic_da[0];
    } else {
      rtb_RelationalOperator2_i =
        BaseEngineController_LS_DWork.s284_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S284>/Switch1' */
    /* Product: '<S279>/Product4' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S279>/motohawk_calibration10'
     */
    rtb_Product2_m = (uint8_T)(rtb_RelationalOperator2_i ? ((uint8_T)
      (Fan2ECT_DataStore())) : 0);

    /* RelationalOperator: '<S282>/LT' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S279>/motohawk_calibration3'
     */
    rtb_Switch_oh = (BaseEngineController_LS_B.s649_Merge >= (IATFanOn_DataStore
                      ()));

    /* RelationalOperator: '<S282>/LT1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S279>/motohawk_calibration2'
     */
    rtb_BelowLoTarget_g = (BaseEngineController_LS_B.s649_Merge <=
      (IATFanOff_DataStore()));

    /* CombinatorialLogic: '<S285>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_Switch_oh != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_g != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_da[0] =
        BaseEngineController_LS_ConstP.pooled728[rowidx];
      rtb_CombinatorialLogic_da[1] =
        BaseEngineController_LS_ConstP.pooled728[rowidx + 4];
    }

    /* Switch: '<S285>/Switch1' incorporates:
     *  UnitDelay: '<S285>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_da[1]) {
      rtb_LogicalOperator1_j = rtb_CombinatorialLogic_da[0];
    } else {
      rtb_LogicalOperator1_j =
        BaseEngineController_LS_DWork.s285_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S285>/Switch1' */
    /* Product: '<S279>/Product5' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S279>/motohawk_calibration11'
     */
    rtb_Product1_gw = (uint8_T)(rtb_LogicalOperator1_j ? ((uint8_T)
      (Fan2IAT_DataStore())) : 0);

    /* RelationalOperator: '<S283>/LT' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S279>/motohawk_calibration5'
     */
    rtb_Switch_oh = (BaseEngineController_LS_B.s473_Merge >=
                     (ACPresFanOn_DataStore()));

    /* RelationalOperator: '<S283>/LT1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S279>/motohawk_calibration4'
     */
    rtb_BelowLoTarget_g = (BaseEngineController_LS_B.s473_Merge <=
      (ACPresFanOff_DataStore()));

    /* CombinatorialLogic: '<S286>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_Switch_oh != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_g != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_da[0] =
        BaseEngineController_LS_ConstP.pooled728[rowidx];
      rtb_CombinatorialLogic_da[1] =
        BaseEngineController_LS_ConstP.pooled728[rowidx + 4];
    }

    /* Switch: '<S286>/Switch1' incorporates:
     *  UnitDelay: '<S286>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_da[1]) {
      rtb_RelOp_pu = rtb_CombinatorialLogic_da[0];
    } else {
      rtb_RelOp_pu = BaseEngineController_LS_DWork.s286_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S286>/Switch1' */
    /* Product: '<S279>/Product6' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S279>/motohawk_calibration12'
     */
    rtb_Product_ln = (uint8_T)(rtb_RelOp_pu ? ((uint8_T)(Fan2ACPres_DataStore()))
      : 0);

    /* DataTypeConversion: '<S279>/Data Type Conversion' */
    rtb_Product1_l2 = (real_T)BaseEngineController_LS_B.s414_Merge;

    /* MinMax: '<S279>/MinMax1' incorporates:
     *  Product: '<S279>/Product7'
     *  S-Function (motohawk_sfun_calibration): '<S279>/motohawk_calibration13'
     */
    u = (real_T)rtb_Product2_m;
    rtb_DesiredLambda_idx = (real_T)rtb_Product1_gw;
    u = u >= rtb_DesiredLambda_idx ? u : rtb_DesiredLambda_idx;
    rtb_DesiredLambda_idx = (real_T)rtb_Product_ln;
    u = u >= rtb_DesiredLambda_idx ? u : rtb_DesiredLambda_idx;
    rtb_DesiredLambda_idx = rtb_Product1_l2 * (real_T)((uint8_T)
      (Fan2ACSw_DataStore()));

    /* DataTypeConversion: '<S121>/Data Type Conversion3' incorporates:
     *  MinMax: '<S279>/MinMax1'
     */
    BaseEngineController_LS_B.s118_FAN2 = (((u >= rtb_DesiredLambda_idx ? u :
      rtb_DesiredLambda_idx) != 0.0));

    /* Product: '<S279>/Product' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S279>/motohawk_calibration6'
     */
    rtb_Product_ln = (uint8_T)(rtb_RelationalOperator2_i ? ((uint8_T)
      (Fan1ECT_DataStore())) : 0);

    /* Product: '<S279>/Product1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S279>/motohawk_calibration7'
     */
    rtb_Product1_gw = (uint8_T)(rtb_LogicalOperator1_j ? ((uint8_T)
      (Fan1IAT_DataStore())) : 0);

    /* Product: '<S279>/Product2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S279>/motohawk_calibration8'
     */
    rtb_Product2_m = (uint8_T)(rtb_RelOp_pu ? ((uint8_T)(Fan1ACPres_DataStore()))
      : 0);

    /* MinMax: '<S279>/MinMax' incorporates:
     *  Product: '<S279>/Product3'
     *  S-Function (motohawk_sfun_calibration): '<S279>/motohawk_calibration9'
     */
    u = (real_T)rtb_Product_ln;
    rtb_DesiredLambda_idx = (real_T)rtb_Product1_gw;
    u = u >= rtb_DesiredLambda_idx ? u : rtb_DesiredLambda_idx;
    rtb_DesiredLambda_idx = (real_T)rtb_Product2_m;
    u = u >= rtb_DesiredLambda_idx ? u : rtb_DesiredLambda_idx;
    rtb_DesiredLambda_idx = rtb_Product1_l2 * (real_T)((uint8_T)
      (Fan1ACSw_DataStore()));

    /* DataTypeConversion: '<S121>/Data Type Conversion4' incorporates:
     *  MinMax: '<S279>/MinMax'
     */
    BaseEngineController_LS_B.s118_FAN1 = (((u >= rtb_DesiredLambda_idx ? u :
      rtb_DesiredLambda_idx) != 0.0));

    /* UnitDelay: '<S287>/Unit Delay' */
    BaseEngineController_LS_B.s287_UnitDelay =
      BaseEngineController_LS_DWork.s287_UnitDelay_DSTATE;

    /* Switch: '<S280>/Switch' incorporates:
     *  Constant: '<S280>/Constant'
     *  RelationalOperator: '<S280>/Relational Operator'
     *  S-Function (motohawk_sfun_calibration): '<S280>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S280>/motohawk_calibration1'
     */
    if ((Constant_Fuel_Pump_DataStore()) > 0.0) {
      rtb_Switch_oh = TRUE;
    } else {
      rtb_Switch_oh = (BaseEngineController_LS_B.s287_UnitDelay <
                       (FuelPumpStartTime_DataStore()));
    }

    /* End of Switch: '<S280>/Switch' */
    /* S-Function Block: <S287>/motohawk_delta_time */
    rtb_motohawk_delta_time_op = 0.005;

    /* ZeroOrderHold: '<S121>/Zero-Order Hold10' incorporates:
     *  Constant: '<S121>/No Mult'
     */
    BaseEngineController_LS_B.s118_FuelMult = 0.0;

    /* ZeroOrderHold: '<S121>/Zero-Order Hold14' incorporates:
     *  Constant: '<S121>/OFF3'
     */
    BaseEngineController_LS_B.s118_AC = FALSE;

    /* ZeroOrderHold: '<S121>/Zero-Order Hold3' */
    BaseEngineController_LS_B.s118_SparkAdv =
      BaseEngineController_LS_ConstB.s121_motohawk_replicate2;

    /* ZeroOrderHold: '<S121>/Zero-Order Hold4' incorporates:
     *  Constant: '<S121>/No Spark'
     */
    BaseEngineController_LS_B.s118_SparkEnergy = 0.0;

    /* ZeroOrderHold: '<S121>/Zero-Order Hold5' incorporates:
     *  Constant: '<S121>/No Start EOI'
     */
    BaseEngineController_LS_B.s118_MakeUpEOI = 0.0;

    /* ZeroOrderHold: '<S121>/Zero-Order Hold6' */
    memcpy((void *)(&BaseEngineController_LS_B.s118_FPC[0]), (void *)
           (&BaseEngineController_LS_ConstB.s121_motohawk_replicate[0]), sizeof
           (real_T) << 3U);

    /* ZeroOrderHold: '<S121>/Zero-Order Hold7' */
    BaseEngineController_LS_B.s118_FUELP = rtb_Switch_oh;

    /* ZeroOrderHold: '<S121>/Zero-Order Hold8' incorporates:
     *  Constant: '<S121>/No Start Fuel Timing'
     */
    BaseEngineController_LS_B.s118_SOI = 0.0;

    /* ZeroOrderHold: '<S121>/Zero-Order Hold9' incorporates:
     *  Constant: '<S121>/Closed Throttle'
     */
    BaseEngineController_LS_B.s118_Throttle = 0.0;

    /* Update for UnitDelay: '<S284>/Unit Delay' */
    BaseEngineController_LS_DWork.s284_UnitDelay_DSTATE =
      rtb_RelationalOperator2_i;

    /* Update for UnitDelay: '<S285>/Unit Delay' */
    BaseEngineController_LS_DWork.s285_UnitDelay_DSTATE = rtb_LogicalOperator1_j;

    /* Update for UnitDelay: '<S286>/Unit Delay' */
    BaseEngineController_LS_DWork.s286_UnitDelay_DSTATE = rtb_RelOp_pu;

    /* Update for UnitDelay: '<S287>/Unit Delay' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S287>/motohawk_delta_time'
     *  Sum: '<S287>/Sum'
     */
    BaseEngineController_LS_DWork.s287_UnitDelay_DSTATE =
      rtb_motohawk_delta_time_op + BaseEngineController_LS_B.s287_UnitDelay;
  } else {
    if (BaseEngineController_LS_DWork.s15_Stall_MODE) {
      BaseEngineController_LS_DWork.s15_Stall_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S15>/Stall' */
  /* S-Function Block: <S403>/motohawk_encoder_average_rpm */
  {
    rtb_RPM = GetEncoderResourceAverageRPM();
  }

  /* DataTypeConversion: '<S459>/Data Type Conversion' incorporates:
   *  S-Function (motohawk_sfun_encoder_average_rpm): '<S403>/motohawk_encoder_average_rpm'
   */
  rtb_Product1_l2 = (real_T)rtb_RPM;

  /* S-Function Block: <S452>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s452_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_e = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S452>/Product' incorporates:
   *  MinMax: '<S452>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S452>/motohawk_calibration'
   */
  rtb_DataTypeConversion_e /= (rtb_DataTypeConversion_e >=
    (RPMFiltConst_DataStore())) || rtIsNaN((RPMFiltConst_DataStore())) ?
    rtb_DataTypeConversion_e : (RPMFiltConst_DataStore());

  /* Sum: '<S459>/Sum1' incorporates:
   *  Constant: '<S459>/Constant'
   *  Product: '<S459>/Product'
   *  Product: '<S459>/Product1'
   *  Sum: '<S459>/Sum'
   *  UnitDelay: '<S459>/Unit Delay'
   */
  BaseEngineController_LS_B.s459_Sum1 = (1.0 - rtb_DataTypeConversion_e) *
    BaseEngineController_LS_DWork.s459_UnitDelay_DSTATE + rtb_Product1_l2 *
    rtb_DataTypeConversion_e;

  /* Logic: '<S654>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S654>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S654>/motohawk_fault_status4'
   */
  rtb_RelationalOperator_ipv = (IsFaultActive(4) || IsFaultActive(5));

  /* Logic: '<S654>/Logical Operator6' */
  rtb_RelationalOperator2_i = !rtb_RelationalOperator_ipv;

  /* Logic: '<S654>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S654>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S654>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_j = (IsFaultSuspected(4) || IsFaultSuspected(5));

  /* S-Function Block: <S406>/motohawk_ain1 Resource: APP1AnalogInput */
  {
    extern NativeError_S APP1AnalogInput_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    APP1AnalogInput_AnalogInput_Get
      (&BaseEngineController_LS_B.s406_motohawk_ain1, NULL);
  }

  /* DataTypeConversion: '<S654>/Data Type Conversion' */
  rtb_DataTypeConversion_hd = (real_T)
    BaseEngineController_LS_B.s406_motohawk_ain1;

  /* S-Function Block: <S664>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (APP1Idx_DataStore()) = TablePrelookup_real_T(rtb_DataTypeConversion_hd,
      (APP1IdxArr_DataStore()), 9, (APP1Idx_DataStore()));
    rtb_motohawk_prelookup_he = (APP1Idx_DataStore());
  }

  /* S-Function Block: <S664>/motohawk_interpolation_1d */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    BaseEngineController_LS_B.s664_motohawk_interpolation_1d =
      TableInterpolation1D_real_T(rtb_motohawk_prelookup_he, (real_T *)
      ((APP1Tbl_DataStore())), 9);
  }

  /* UnitDelay: '<S654>/Unit Delay' */
  rtb_UnitDelay_m = BaseEngineController_LS_DWork.s654_UnitDelay_DSTATE;

  /* If: '<S654>/If' incorporates:
   *  Logic: '<S654>/Logical Operator5'
   */
  if (rtb_RelationalOperator2_i && rtb_LogicalOperator1_j) {
    /* Outputs for IfAction SubSystem: '<S654>/If Action Subsystem' incorporates:
     *  ActionPort: '<S659>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay_m, &rtb_Merge_o);

    /* End of Outputs for SubSystem: '<S654>/If Action Subsystem' */
  } else if (rtb_RelationalOperator_ipv) {
    /* Outputs for IfAction SubSystem: '<S654>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S660>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((APP1Default_DataStore()),
      &rtb_Merge_o);

    /* End of Outputs for SubSystem: '<S654>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S654>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S661>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      (BaseEngineController_LS_B.s664_motohawk_interpolation_1d, &rtb_Merge_o);

    /* End of Outputs for SubSystem: '<S654>/If Action Subsystem2' */
  }

  /* End of If: '<S654>/If' */

  /* MinMax: '<S663>/MinMax' incorporates:
   *  Constant: '<S654>/Constant1'
   */
  rtb_DataTypeConversion_e = rtb_Merge_o >= 0.0 ? rtb_Merge_o : 0.0;

  /* MinMax: '<S663>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S654>/motohawk_calibration2'
   */
  minV = (rtb_DataTypeConversion_e <= (APP1MaxLimit_DataStore())) || rtIsNaN
    ((APP1MaxLimit_DataStore())) ? rtb_DataTypeConversion_e :
    (APP1MaxLimit_DataStore());

  /* S-Function Block: <S658>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s658_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_e = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S658>/Product' incorporates:
   *  MinMax: '<S658>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S658>/motohawk_calibration'
   */
  rtb_DataTypeConversion_e /= (rtb_DataTypeConversion_e >=
    (APP1FiltConst_DataStore())) || rtIsNaN((APP1FiltConst_DataStore())) ?
    rtb_DataTypeConversion_e : (APP1FiltConst_DataStore());

  /* Sum: '<S665>/Sum1' incorporates:
   *  Constant: '<S665>/Constant'
   *  MinMax: '<S663>/MinMax1'
   *  Product: '<S665>/Product'
   *  Product: '<S665>/Product1'
   *  Sum: '<S665>/Sum'
   *  UnitDelay: '<S665>/Unit Delay'
   */
  rtb_Sum1_m = (1.0 - rtb_DataTypeConversion_e) *
    BaseEngineController_LS_DWork.s665_UnitDelay_DSTATE + minV *
    rtb_DataTypeConversion_e;

  /* If: '<S662>/If' incorporates:
   *  Inport: '<S666>/In1'
   *  Inport: '<S667>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S662>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S662>/override_enable'
   */
  if ((APP1_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S662>/NewValue' incorporates:
     *  ActionPort: '<S666>/Action Port'
     */
    BaseEngineController_LS_B.s662_Merge = (APP1_new_DataStore());

    /* End of Outputs for SubSystem: '<S662>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S662>/OldValue' incorporates:
     *  ActionPort: '<S667>/Action Port'
     */
    BaseEngineController_LS_B.s662_Merge = rtb_Sum1_m;

    /* End of Outputs for SubSystem: '<S662>/OldValue' */
  }

  /* End of If: '<S662>/If' */

  /* Logic: '<S655>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S655>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S655>/motohawk_fault_status4'
   */
  rtb_RelationalOperator_ipv = (IsFaultActive(6) || IsFaultActive(7));

  /* Logic: '<S655>/Logical Operator6' */
  rtb_RelationalOperator2_i = !rtb_RelationalOperator_ipv;

  /* Logic: '<S655>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S655>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S655>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_j = (IsFaultSuspected(6) || IsFaultSuspected(7));

  /* S-Function Block: <S406>/motohawk_ain2 Resource: APP2AnalogInput */
  {
    extern NativeError_S APP2AnalogInput_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    APP2AnalogInput_AnalogInput_Get
      (&BaseEngineController_LS_B.s406_motohawk_ain2, NULL);
  }

  /* DataTypeConversion: '<S655>/Data Type Conversion' */
  rtb_DataTypeConversion_f = (real_T)
    BaseEngineController_LS_B.s406_motohawk_ain2;

  /* S-Function Block: <S674>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (APP2Idx_DataStore()) = TablePrelookup_real_T(rtb_DataTypeConversion_f,
      (APP2IdxArr_DataStore()), 9, (APP2Idx_DataStore()));
    rtb_motohawk_prelookup_aq = (APP2Idx_DataStore());
  }

  /* S-Function Block: <S674>/motohawk_interpolation_1d */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    BaseEngineController_LS_B.s674_motohawk_interpolation_1d =
      TableInterpolation1D_real_T(rtb_motohawk_prelookup_aq, (real_T *)
      ((APP2Tbl_DataStore())), 9);
  }

  /* UnitDelay: '<S655>/Unit Delay' */
  rtb_UnitDelay_jb = BaseEngineController_LS_DWork.s655_UnitDelay_DSTATE;

  /* If: '<S655>/If' incorporates:
   *  Logic: '<S655>/Logical Operator5'
   */
  if (rtb_RelationalOperator2_i && rtb_LogicalOperator1_j) {
    /* Outputs for IfAction SubSystem: '<S655>/If Action Subsystem' incorporates:
     *  ActionPort: '<S669>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay_jb, &rtb_Merge_c);

    /* End of Outputs for SubSystem: '<S655>/If Action Subsystem' */
  } else if (rtb_RelationalOperator_ipv) {
    /* Outputs for IfAction SubSystem: '<S655>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S670>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((APP2Default_DataStore()),
      &rtb_Merge_c);

    /* End of Outputs for SubSystem: '<S655>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S655>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S671>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      (BaseEngineController_LS_B.s674_motohawk_interpolation_1d, &rtb_Merge_c);

    /* End of Outputs for SubSystem: '<S655>/If Action Subsystem2' */
  }

  /* End of If: '<S655>/If' */

  /* MinMax: '<S673>/MinMax' incorporates:
   *  Constant: '<S655>/Constant1'
   */
  rtb_DataTypeConversion_e = rtb_Merge_c >= 0.0 ? rtb_Merge_c : 0.0;

  /* MinMax: '<S673>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S655>/motohawk_calibration2'
   */
  minV_0 = (rtb_DataTypeConversion_e <= (APP2MaxLimit_DataStore())) || rtIsNaN
    ((APP2MaxLimit_DataStore())) ? rtb_DataTypeConversion_e :
    (APP2MaxLimit_DataStore());

  /* S-Function Block: <S668>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s668_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_e = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S668>/Product' incorporates:
   *  MinMax: '<S668>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S668>/motohawk_calibration'
   */
  rtb_DataTypeConversion_e /= (rtb_DataTypeConversion_e >=
    (APP2FiltConst_DataStore())) || rtIsNaN((APP2FiltConst_DataStore())) ?
    rtb_DataTypeConversion_e : (APP2FiltConst_DataStore());

  /* Sum: '<S675>/Sum1' incorporates:
   *  Constant: '<S675>/Constant'
   *  MinMax: '<S673>/MinMax1'
   *  Product: '<S675>/Product'
   *  Product: '<S675>/Product1'
   *  Sum: '<S675>/Sum'
   *  UnitDelay: '<S675>/Unit Delay'
   */
  rtb_Sum1_nb = (1.0 - rtb_DataTypeConversion_e) *
    BaseEngineController_LS_DWork.s675_UnitDelay_DSTATE + minV_0 *
    rtb_DataTypeConversion_e;

  /* If: '<S672>/If' incorporates:
   *  Inport: '<S676>/In1'
   *  Inport: '<S677>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S672>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S672>/override_enable'
   */
  if ((APP2_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S672>/NewValue' incorporates:
     *  ActionPort: '<S676>/Action Port'
     */
    BaseEngineController_LS_B.s672_Merge = (APP2_new_DataStore());

    /* End of Outputs for SubSystem: '<S672>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S672>/OldValue' incorporates:
     *  ActionPort: '<S677>/Action Port'
     */
    BaseEngineController_LS_B.s672_Merge = rtb_Sum1_nb;

    /* End of Outputs for SubSystem: '<S672>/OldValue' */
  }

  /* End of If: '<S672>/If' */

  /* Logic: '<S364>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S364>/motohawk_fault_status'
   *  S-Function (motohawk_sfun_fault_status): '<S364>/motohawk_fault_status1'
   */
  rtb_RelationalOperator2_i = (IsFaultActive(4) || IsFaultActive(5));

  /* Logic: '<S364>/Logical Operator6' incorporates:
   *  Logic: '<S364>/Logical Operator5'
   *  S-Function (motohawk_sfun_fault_status): '<S364>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S364>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_j = (rtb_RelationalOperator2_i && (IsFaultActive(6) ||
    IsFaultActive(7)));

  /* Switch: '<S364>/Switch2' incorporates:
   *  Logic: '<S364>/Logical Operator1'
   *  S-Function (motohawk_sfun_fault_status): '<S364>/motohawk_fault_status4'
   */
  if (rtb_LogicalOperator1_j || IsFaultActive(8)) {
    /* MinMax: '<S364>/MinMax' */
    rtb_Switch2 = (BaseEngineController_LS_B.s672_Merge >=
                   BaseEngineController_LS_B.s662_Merge) || rtIsNaN
      (BaseEngineController_LS_B.s662_Merge) ?
      BaseEngineController_LS_B.s672_Merge :
      BaseEngineController_LS_B.s662_Merge;
  } else {
    /* Switch: '<S364>/Switch1' */
    if (rtb_RelationalOperator2_i) {
      rtb_Switch2 = BaseEngineController_LS_B.s672_Merge;
    } else {
      rtb_Switch2 = BaseEngineController_LS_B.s662_Merge;
    }

    /* End of Switch: '<S364>/Switch1' */
  }

  /* End of Switch: '<S364>/Switch2' */
  /* Logic: '<S656>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S656>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S656>/motohawk_fault_status4'
   */
  rtb_RelationalOperator_ipv = (IsFaultActive(90) || IsFaultActive(91));

  /* Logic: '<S656>/Logical Operator6' */
  rtb_RelationalOperator2_i = !rtb_RelationalOperator_ipv;

  /* Logic: '<S656>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S656>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S656>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_j = (IsFaultSuspected(90) || IsFaultSuspected(91));

  /* S-Function Block: <S406>/motohawk_ain6 Resource: TPS1AnalogInput */
  {
    extern NativeError_S TPS1AnalogInput_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    TPS1AnalogInput_AnalogInput_Get
      (&BaseEngineController_LS_B.s406_motohawk_ain6, NULL);
  }

  /* DataTypeConversion: '<S656>/Data Type Conversion' */
  rtb_DataTypeConversion_n = (real_T)
    BaseEngineController_LS_B.s406_motohawk_ain6;

  /* S-Function Block: <S684>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (TPS1Idx_DataStore()) = TablePrelookup_real_T(rtb_DataTypeConversion_n,
      (TPS1IdxArr_DataStore()), 9, (TPS1Idx_DataStore()));
    rtb_motohawk_prelookup_br = (TPS1Idx_DataStore());
  }

  /* S-Function Block: <S684>/motohawk_interpolation_1d */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    BaseEngineController_LS_B.s684_motohawk_interpolation_1d =
      TableInterpolation1D_real_T(rtb_motohawk_prelookup_br, (real_T *)
      ((TPS1Tbl_DataStore())), 9);
  }

  /* UnitDelay: '<S656>/Unit Delay' */
  rtb_UnitDelay_gr = BaseEngineController_LS_DWork.s656_UnitDelay_DSTATE;

  /* If: '<S656>/If' incorporates:
   *  Logic: '<S656>/Logical Operator5'
   */
  if (rtb_RelationalOperator2_i && rtb_LogicalOperator1_j) {
    /* Outputs for IfAction SubSystem: '<S656>/If Action Subsystem' incorporates:
     *  ActionPort: '<S679>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay_gr, &rtb_Merge_h);

    /* End of Outputs for SubSystem: '<S656>/If Action Subsystem' */
  } else if (rtb_RelationalOperator_ipv) {
    /* Outputs for IfAction SubSystem: '<S656>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S680>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((TPS1Default_DataStore()),
      &rtb_Merge_h);

    /* End of Outputs for SubSystem: '<S656>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S656>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S681>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      (BaseEngineController_LS_B.s684_motohawk_interpolation_1d, &rtb_Merge_h);

    /* End of Outputs for SubSystem: '<S656>/If Action Subsystem2' */
  }

  /* End of If: '<S656>/If' */

  /* MinMax: '<S683>/MinMax' incorporates:
   *  Constant: '<S656>/Constant1'
   */
  rtb_DataTypeConversion_e = rtb_Merge_h >= 0.0 ? rtb_Merge_h : 0.0;

  /* MinMax: '<S683>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S656>/motohawk_calibration2'
   */
  minV_1 = (rtb_DataTypeConversion_e <= (TPS1MaxLimit_DataStore())) || rtIsNaN
    ((TPS1MaxLimit_DataStore())) ? rtb_DataTypeConversion_e :
    (TPS1MaxLimit_DataStore());

  /* S-Function Block: <S678>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s678_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_e = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S678>/Product' incorporates:
   *  MinMax: '<S678>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S678>/motohawk_calibration'
   */
  rtb_DataTypeConversion_e /= (rtb_DataTypeConversion_e >=
    (TPS1FiltConst_DataStore())) || rtIsNaN((TPS1FiltConst_DataStore())) ?
    rtb_DataTypeConversion_e : (TPS1FiltConst_DataStore());

  /* Sum: '<S685>/Sum1' incorporates:
   *  Constant: '<S685>/Constant'
   *  MinMax: '<S683>/MinMax1'
   *  Product: '<S685>/Product'
   *  Product: '<S685>/Product1'
   *  Sum: '<S685>/Sum'
   *  UnitDelay: '<S685>/Unit Delay'
   */
  rtb_Sum1_hw = (1.0 - rtb_DataTypeConversion_e) *
    BaseEngineController_LS_DWork.s685_UnitDelay_DSTATE + minV_1 *
    rtb_DataTypeConversion_e;

  /* If: '<S682>/If' incorporates:
   *  Inport: '<S686>/In1'
   *  Inport: '<S687>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S682>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S682>/override_enable'
   */
  if ((TPS1_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S682>/NewValue' incorporates:
     *  ActionPort: '<S686>/Action Port'
     */
    BaseEngineController_LS_B.s682_Merge = (TPS1_new_DataStore());

    /* End of Outputs for SubSystem: '<S682>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S682>/OldValue' incorporates:
     *  ActionPort: '<S687>/Action Port'
     */
    BaseEngineController_LS_B.s682_Merge = rtb_Sum1_hw;

    /* End of Outputs for SubSystem: '<S682>/OldValue' */
  }

  /* End of If: '<S682>/If' */

  /* Logic: '<S657>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S657>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S657>/motohawk_fault_status4'
   */
  rtb_RelationalOperator_ipv = (IsFaultActive(92) || IsFaultActive(93));

  /* Logic: '<S657>/Logical Operator6' */
  rtb_RelationalOperator2_i = !rtb_RelationalOperator_ipv;

  /* Logic: '<S657>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S657>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S657>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_j = (IsFaultSuspected(92) || IsFaultSuspected(93));

  /* S-Function Block: <S406>/motohawk_ain9 Resource: TPS2AnalogInput */
  {
    extern NativeError_S TPS2AnalogInput_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    TPS2AnalogInput_AnalogInput_Get
      (&BaseEngineController_LS_B.s406_motohawk_ain9, NULL);
  }

  /* DataTypeConversion: '<S657>/Data Type Conversion' */
  rtb_DataTypeConversion_fv = (real_T)
    BaseEngineController_LS_B.s406_motohawk_ain9;

  /* S-Function Block: <S694>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (TPS2Idx_DataStore()) = TablePrelookup_real_T(rtb_DataTypeConversion_fv,
      (TPS2IdxArr_DataStore()), 9, (TPS2Idx_DataStore()));
    rtb_motohawk_prelookup_ao = (TPS2Idx_DataStore());
  }

  /* S-Function Block: <S694>/motohawk_interpolation_1d */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    BaseEngineController_LS_B.s694_motohawk_interpolation_1d =
      TableInterpolation1D_real_T(rtb_motohawk_prelookup_ao, (real_T *)
      ((TPS2Tbl_DataStore())), 9);
  }

  /* UnitDelay: '<S657>/Unit Delay' */
  rtb_UnitDelay_db = BaseEngineController_LS_DWork.s657_UnitDelay_DSTATE;

  /* If: '<S657>/If' incorporates:
   *  Logic: '<S657>/Logical Operator5'
   */
  if (rtb_RelationalOperator2_i && rtb_LogicalOperator1_j) {
    /* Outputs for IfAction SubSystem: '<S657>/If Action Subsystem' incorporates:
     *  ActionPort: '<S689>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay_db, &rtb_Merge_oi);

    /* End of Outputs for SubSystem: '<S657>/If Action Subsystem' */
  } else if (rtb_RelationalOperator_ipv) {
    /* Outputs for IfAction SubSystem: '<S657>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S690>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((TPS2Default_DataStore()),
      &rtb_Merge_oi);

    /* End of Outputs for SubSystem: '<S657>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S657>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S691>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      (BaseEngineController_LS_B.s694_motohawk_interpolation_1d, &rtb_Merge_oi);

    /* End of Outputs for SubSystem: '<S657>/If Action Subsystem2' */
  }

  /* End of If: '<S657>/If' */

  /* MinMax: '<S693>/MinMax' incorporates:
   *  Constant: '<S657>/Constant1'
   */
  rtb_DataTypeConversion_e = rtb_Merge_oi >= 0.0 ? rtb_Merge_oi : 0.0;

  /* MinMax: '<S693>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S657>/motohawk_calibration2'
   */
  minV_2 = (rtb_DataTypeConversion_e <= (TPS2MaxLimit_DataStore())) || rtIsNaN
    ((TPS2MaxLimit_DataStore())) ? rtb_DataTypeConversion_e :
    (TPS2MaxLimit_DataStore());

  /* S-Function Block: <S688>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s688_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_e = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S688>/Product' incorporates:
   *  MinMax: '<S688>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S688>/motohawk_calibration'
   */
  rtb_DataTypeConversion_e /= (rtb_DataTypeConversion_e >=
    (TPS2FiltConst_DataStore())) || rtIsNaN((TPS2FiltConst_DataStore())) ?
    rtb_DataTypeConversion_e : (TPS2FiltConst_DataStore());

  /* Sum: '<S695>/Sum1' incorporates:
   *  Constant: '<S695>/Constant'
   *  MinMax: '<S693>/MinMax1'
   *  Product: '<S695>/Product'
   *  Product: '<S695>/Product1'
   *  Sum: '<S695>/Sum'
   *  UnitDelay: '<S695>/Unit Delay'
   */
  rtb_Sum1_lp = (1.0 - rtb_DataTypeConversion_e) *
    BaseEngineController_LS_DWork.s695_UnitDelay_DSTATE + minV_2 *
    rtb_DataTypeConversion_e;

  /* If: '<S692>/If' incorporates:
   *  Inport: '<S696>/In1'
   *  Inport: '<S697>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S692>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S692>/override_enable'
   */
  if ((TPS2_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S692>/NewValue' incorporates:
     *  ActionPort: '<S696>/Action Port'
     */
    BaseEngineController_LS_B.s692_Merge = (TPS2_new_DataStore());

    /* End of Outputs for SubSystem: '<S692>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S692>/OldValue' incorporates:
     *  ActionPort: '<S697>/Action Port'
     */
    BaseEngineController_LS_B.s692_Merge = rtb_Sum1_lp;

    /* End of Outputs for SubSystem: '<S692>/OldValue' */
  }

  /* End of If: '<S692>/If' */

  /* Logic: '<S374>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S374>/motohawk_fault_status'
   *  S-Function (motohawk_sfun_fault_status): '<S374>/motohawk_fault_status1'
   */
  rtb_RelationalOperator2_i = (IsFaultActive(90) || IsFaultActive(91));

  /* Logic: '<S374>/Logical Operator6' incorporates:
   *  Logic: '<S374>/Logical Operator5'
   *  S-Function (motohawk_sfun_fault_status): '<S374>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S374>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_j = (rtb_RelationalOperator2_i && (IsFaultActive(92) ||
    IsFaultActive(93)));

  /* Switch: '<S374>/Switch2' incorporates:
   *  Logic: '<S374>/Logical Operator1'
   *  S-Function (motohawk_sfun_fault_status): '<S374>/motohawk_fault_status4'
   */
  if (rtb_LogicalOperator1_j || IsFaultActive(94)) {
    /* MinMax: '<S374>/MinMax' */
    BaseEngineController_LS_B.s374_Switch2 =
      (BaseEngineController_LS_B.s692_Merge >=
       BaseEngineController_LS_B.s682_Merge) || rtIsNaN
      (BaseEngineController_LS_B.s682_Merge) ?
      BaseEngineController_LS_B.s692_Merge :
      BaseEngineController_LS_B.s682_Merge;
  } else {
    /* Switch: '<S374>/Switch1' */
    if (rtb_RelationalOperator2_i) {
      BaseEngineController_LS_B.s374_Switch2 =
        BaseEngineController_LS_B.s692_Merge;
    } else {
      BaseEngineController_LS_B.s374_Switch2 =
        BaseEngineController_LS_B.s682_Merge;
    }

    /* End of Switch: '<S374>/Switch1' */
  }

  /* End of Switch: '<S374>/Switch2' */

  /* RelationalOperator: '<S117>/RelOp' incorporates:
   *  Constant: '<S117>/Constant'
   */
  rtb_RelationalOperator2_i = (BaseEngineController_LS_B.s389_State == 2);

  /* S-Function Block: <S486>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s486_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_ea = ((real_T) delta) * 0.000001;
  }

  /* UnitDelay: '<S486>/Unit Delay' */
  rtb_Product1_l2 = BaseEngineController_LS_DWork.s486_UnitDelay_DSTATE;

  /* Logic: '<S461>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S461>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S461>/motohawk_fault_status4'
   */
  rtb_RelationalOperator_ipv = (IsFaultActive(50) || IsFaultActive(51));

  /* Logic: '<S461>/Logical Operator6' */
  rtb_LogicalOperator1_j = !rtb_RelationalOperator_ipv;

  /* Logic: '<S461>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S461>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S461>/motohawk_fault_status3'
   */
  rtb_RelOp_pu = (IsFaultSuspected(50) || IsFaultSuspected(51));

  /* S-Function Block: <S404>/motohawk_frequency_in Frequency Input Get: FuelSensorPin */
  {
    extern NativeError_S FuelSensorPin_FrequencyInput_Get(uint32_T *frequency,
      int16_T *duty_cycle);
    FuelSensorPin_FrequencyInput_Get
      (&BaseEngineController_LS_B.s404_motohawk_frequency_in, NULL);
  }

  /* DataTypeConversion: '<S461>/Data Type Conversion' */
  rtb_DataTypeConversion_e = (real_T)
    BaseEngineController_LS_B.s404_motohawk_frequency_in;

  /* Product: '<S461>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S461>/motohawk_calibration4'
   */
  rtb_Product1_ii = rtb_DataTypeConversion_e * (FuelSensGain_DataStore());

  /* Sum: '<S461>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S461>/motohawk_calibration5'
   */
  BaseEngineController_LS_B.s461_Sum1 = rtb_Product1_ii +
    (FuelSensOfst_DataStore());

  /* Saturate: '<S461>/Saturation' */
  rtb_Saturation_g = BaseEngineController_LS_B.s461_Sum1 >= 90.0 ? 90.0 :
    BaseEngineController_LS_B.s461_Sum1 <= 0.0 ? 0.0 :
    BaseEngineController_LS_B.s461_Sum1;

  /* UnitDelay: '<S461>/Unit Delay1' */
  rtb_UnitDelay1_e = BaseEngineController_LS_DWork.s461_UnitDelay1_DSTATE;

  /* If: '<S461>/If' incorporates:
   *  Logic: '<S461>/Logical Operator5'
   */
  if (rtb_LogicalOperator1_j && rtb_RelOp_pu) {
    /* Outputs for IfAction SubSystem: '<S461>/If Action Subsystem' incorporates:
     *  ActionPort: '<S478>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay1_e, &rtb_Merge_i);

    /* End of Outputs for SubSystem: '<S461>/If Action Subsystem' */
  } else if (rtb_RelationalOperator_ipv) {
    /* Outputs for IfAction SubSystem: '<S461>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S479>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((FuelSensDfltValue_DataStore()),
      &rtb_Merge_i);

    /* End of Outputs for SubSystem: '<S461>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S461>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S480>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_Saturation_g, &rtb_Merge_i);

    /* End of Outputs for SubSystem: '<S461>/If Action Subsystem2' */
  }

  /* End of If: '<S461>/If' */

  /* Product: '<S486>/Product1' incorporates:
   *  S-Function (motohawk_sfun_delta_time): '<S486>/motohawk_delta_time'
   *  Sum: '<S486>/Sum3'
   */
  rtb_DataTypeConversion_c = 1.0 / rtb_motohawk_delta_time_ea * (rtb_Merge_i -
    rtb_Product1_l2);

  /* MinMax: '<S487>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S484>/motohawk_calibration1'
   */
  rtb_DataTypeConversion_c = (rtb_DataTypeConversion_c >= (Fall_Rate_DataStore()))
    || rtIsNaN((Fall_Rate_DataStore())) ? rtb_DataTypeConversion_c :
    (Fall_Rate_DataStore());

  /* Sum: '<S486>/Sum2' incorporates:
   *  MinMax: '<S487>/MinMax1'
   *  Product: '<S486>/Product'
   *  S-Function (motohawk_sfun_calibration): '<S484>/motohawk_calibration'
   *  S-Function (motohawk_sfun_delta_time): '<S486>/motohawk_delta_time'
   */
  rtb_Sum2_gr = ((rtb_DataTypeConversion_c <= (Rise_Rate_DataStore())) ||
                 rtIsNaN((Rise_Rate_DataStore())) ? rtb_DataTypeConversion_c :
                 (Rise_Rate_DataStore())) * rtb_motohawk_delta_time_ea +
    rtb_Product1_l2;

  /* S-Function Block: <S482>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s482_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_c = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S482>/Product' incorporates:
   *  MinMax: '<S482>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S482>/motohawk_calibration'
   */
  rtb_DataTypeConversion_c /= (rtb_DataTypeConversion_c >=
    (FuelSensFilterConst_DataStore())) || rtIsNaN((FuelSensFilterConst_DataStore
    ())) ? rtb_DataTypeConversion_c : (FuelSensFilterConst_DataStore());

  /* Sum: '<S485>/Sum1' incorporates:
   *  Constant: '<S485>/Constant'
   *  Product: '<S485>/Product'
   *  Product: '<S485>/Product1'
   *  Sum: '<S485>/Sum'
   *  UnitDelay: '<S485>/Unit Delay'
   */
  rtb_Sum1_mz = (1.0 - rtb_DataTypeConversion_c) *
    BaseEngineController_LS_DWork.s485_UnitDelay_DSTATE + rtb_Merge_i *
    rtb_DataTypeConversion_c;

  /* UnitDelay: '<S483>/Unit Delay' */
  rtb_UnitDelay_n = BaseEngineController_LS_DWork.s483_UnitDelay_DSTATE;

  /* UnitDelay: '<S483>/Unit Delay1' */
  rtb_UnitDelay1_h = BaseEngineController_LS_DWork.s483_UnitDelay1_DSTATE;

  /* UnitDelay: '<S483>/Unit Delay2' */
  rtb_Product1_l2 = BaseEngineController_LS_DWork.s483_UnitDelay2_DSTATE;

  /* MultiPortSwitch: '<S477>/Multiport Switch' incorporates:
   *  Product: '<S483>/Product'
   *  S-Function (motohawk_sfun_calibration): '<S477>/motohawk_calibration'
   *  S-Function (motohawk_sfun_calibration): '<S483>/motohawk_calibration'
   */
  switch (((uint8_T)(Filter_Type_Selection_DataStore()))) {
   case 1:
    rtb_Product1_l2 = rtb_Sum2_gr;
    break;

   case 2:
    rtb_Product1_l2 = rtb_Sum1_mz;
    break;

   default:
    /* Product: '<S483>/Product3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S483>/motohawk_calibration3'
     */
    rtb_Product1_l2 *= (Gain3_DataStore());

    /* Sum: '<S483>/Sum2' incorporates:
     *  Product: '<S483>/Product2'
     *  S-Function (motohawk_sfun_calibration): '<S483>/motohawk_calibration2'
     */
    rtb_Product1_l2 += (Gain2_DataStore()) * rtb_UnitDelay1_h;

    /* Sum: '<S483>/Sum' incorporates:
     *  Product: '<S483>/Product1'
     *  S-Function (motohawk_sfun_calibration): '<S483>/motohawk_calibration1'
     *  Sum: '<S483>/Sum1'
     */
    rtb_Product1_l2 = ((Gain1_DataStore()) * rtb_UnitDelay_n + rtb_Product1_l2)
      + rtb_Merge_i;
    rtb_Product1_l2 *= (FinalGain_DataStore());
    break;
  }

  /* End of MultiPortSwitch: '<S477>/Multiport Switch' */
  /* If: '<S481>/If' incorporates:
   *  Inport: '<S488>/In1'
   *  Inport: '<S489>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S481>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S481>/override_enable'
   */
  if ((FuelSens_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S481>/NewValue' incorporates:
     *  ActionPort: '<S488>/Action Port'
     */
    BaseEngineController_LS_B.s481_Merge = (FuelSens_new_DataStore());

    /* End of Outputs for SubSystem: '<S481>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S481>/OldValue' incorporates:
     *  ActionPort: '<S489>/Action Port'
     */
    BaseEngineController_LS_B.s481_Merge = rtb_Product1_l2;

    /* End of Outputs for SubSystem: '<S481>/OldValue' */
  }

  /* End of If: '<S481>/If' */

  /* Outputs for Enabled SubSystem: '<S15>/Crank' incorporates:
   *  EnablePort: '<S116>/Enable'
   */
  if (rtb_RelationalOperator2_i) {
    if (!BaseEngineController_LS_DWork.s15_Crank_MODE) {
      BaseEngineController_LS_DWork.s15_Crank_MODE = TRUE;
    }

    /* MultiPortSwitch: '<S123>/Multiport Switch2' incorporates:
     *  Constant: '<S123>/ClearFloodFueling3'
     *  S-Function (motohawk_sfun_calibration): '<S123>/motohawk_calibration1'
     *  S-Function (motohawk_sfun_data_read): '<S123>/motohawk_data_read1'
     */
    if (AirControlSource_DataStore() == FALSE) {
      rtb_Product1_l2 = 0.0;
    } else {
      rtb_Product1_l2 = (OpenThrottleFPCScalar_DataStore());
    }

    /* End of MultiPortSwitch: '<S123>/Multiport Switch2' */

    /* MultiPortSwitch: '<S123>/Multiport Switch1' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S123>/motohawk_data_read1'
     */
    if (AirControlSource_DataStore() == FALSE) {
      rtb_motohawk_replicate1 = rtb_Switch2;
    } else {
      rtb_motohawk_replicate1 = BaseEngineController_LS_B.s374_Switch2;
    }

    /* End of MultiPortSwitch: '<S123>/Multiport Switch1' */

    /* Sum: '<S123>/Add' incorporates:
     *  Constant: '<S123>/ClearFloodFueling1'
     *  Gain: '<S123>/Gain'
     *  Product: '<S123>/Product1'
     */
    rtb_Product1_l2 = 0.01 * rtb_motohawk_replicate1 * rtb_Product1_l2 + 1.0;

    /* RelationalOperator: '<S123>/Relational Operator' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S123>/motohawk_calibration2'
     */
    rtb_RelationalOperator2_i = (rtb_motohawk_replicate1 >=
      (ClearFloodThreshold_DataStore()));

    /* S-Function Block: <S116>/motohawk_prelookup1 */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (CrankECT05Idx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_LS_B.s622_Merge, (CrankECT05IdxArr_DataStore()), 5,
         (CrankECT05Idx_DataStore()));
      rtb_motohawk_prelookup1_nl = (CrankECT05Idx_DataStore());
    }

    /* S-Function Block: <S116>/motohawk_prelookup */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (CrankRPM05In_DataStore()) = BaseEngineController_LS_B.s459_Sum1;
      (CrankRPM05Idx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_LS_B.s459_Sum1, (CrankRPM05IdxArr_DataStore()), 5,
         (CrankRPM05Idx_DataStore()));
      rtb_motohawk_prelookup_c = (CrankRPM05Idx_DataStore());
    }

    /* S-Function Block: <S116>/motohawk_prelookup2 */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (CrankIAT05Idx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_LS_B.s649_Merge, (CrankIAT05IdxArr_DataStore()), 5,
         (CrankIAT05Idx_DataStore()));
      rtb_motohawk_prelookup2_h = (CrankIAT05Idx_DataStore());
    }

    /* S-Function Block: <S116>/motohawk_prelookup3 */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (CrankOXY05In_DataStore()) = BaseEngineController_LS_B.s481_Merge;
      (CrankOXY05Idx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_LS_B.s481_Merge, (CrankOXY05IdxArr_DataStore()), 5,
         (CrankOXY05Idx_DataStore()));
      rtb_motohawk_prelookup3_n = (CrankOXY05Idx_DataStore());
    }

    /* Switch: '<S123>/Switch' incorporates:
     *  Constant: '<S123>/ClearFloodFueling'
     *  Product: '<S123>/Product2'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S123>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S123>/motohawk_interpolation_1d1'
     *  S-Function (motohawk_sfun_interpolation_2d): '<S123>/motohawk_interpolation_2d'
     *  S-Function (motohawk_sfun_prelookup): '<S116>/motohawk_prelookup'
     *  S-Function (motohawk_sfun_prelookup): '<S116>/motohawk_prelookup1'
     *  S-Function (motohawk_sfun_prelookup): '<S116>/motohawk_prelookup2'
     *  S-Function (motohawk_sfun_prelookup): '<S116>/motohawk_prelookup3'
     */
    if (rtb_RelationalOperator2_i) {
      rtb_motohawk_replicate1 = 0.0;
    } else {
      /* S-Function Block: <S123>/motohawk_interpolation_1d1 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d1_bc = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup3_n, (real_T *) ((CrankFPC_OXYMultTbl_DataStore
             ())), 5);
        (CrankFPC_OXYMult_DataStore()) = rtb_motohawk_interpolation_1d1_bc;
      }

      /* S-Function Block: <S123>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d_o = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup2_h, (real_T *) ((CrankFPC_IATMultTbl_DataStore
             ())), 5);
        (CrankFPC_IATMult_DataStore()) = rtb_motohawk_interpolation_1d_o;
      }

      /* S-Function Block: <S123>/motohawk_interpolation_2d */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_motohawk_interpolation_2d_j = TableInterpolation2D_real_T
          (rtb_motohawk_prelookup1_nl, rtb_motohawk_prelookup_c, (real_T *)
           ((CrankFPCMap_DataStore())), 5, 5);
        (CrankFPC_DataStore()) = rtb_motohawk_interpolation_2d_j;
      }

      rtb_motohawk_replicate1 = rtb_motohawk_interpolation_2d_j *
        rtb_motohawk_interpolation_1d_o * rtb_motohawk_interpolation_1d1_bc;
    }

    /* End of Switch: '<S123>/Switch' */

    /* Product: '<S123>/Product' */
    rtb_Product_bk = rtb_Product1_l2 * rtb_motohawk_replicate1;

    /* S-Function Block: <S124>/motohawk_interpolation_2d */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_motohawk_interpolation_2d_o = TableInterpolation2D_real_T
        (rtb_motohawk_prelookup1_nl, rtb_motohawk_prelookup_c, (real_T *)
         ((CrankIACMap_DataStore())), 5, 5);
      (CrankIAC_DataStore()) = rtb_motohawk_interpolation_2d_o;
    }

    /* S-Function Block: <S124>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_hw = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup2_h, (real_T *) ((CrankIAC_IATMultTbl_DataStore())),
         5);
      (CrankIAC_IATMult_DataStore()) = rtb_motohawk_interpolation_1d_hw;
    }

    /* S-Function Block: <S124>/motohawk_interpolation_1d1 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d1_os = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup3_n, (real_T *) ((CrankIAC_OXYMultTbl_DataStore())),
         5);
      (CrankIAC_OXYMult_DataStore()) = rtb_motohawk_interpolation_1d1_os;
    }

    /* Product: '<S124>/Product' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S124>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S124>/motohawk_interpolation_1d1'
     *  S-Function (motohawk_sfun_interpolation_2d): '<S124>/motohawk_interpolation_2d'
     *  S-Function (motohawk_sfun_prelookup): '<S116>/motohawk_prelookup'
     *  S-Function (motohawk_sfun_prelookup): '<S116>/motohawk_prelookup1'
     *  S-Function (motohawk_sfun_prelookup): '<S116>/motohawk_prelookup2'
     *  S-Function (motohawk_sfun_prelookup): '<S116>/motohawk_prelookup3'
     */
    rtb_Product1_l2 = rtb_motohawk_interpolation_2d_o *
      rtb_motohawk_interpolation_1d_hw * rtb_motohawk_interpolation_1d1_os;

    /* Switch: '<S125>/Switch' */
    rtb_motohawk_replicate1 = rtb_Product1_l2;

    /* DataTypeConversion: '<S116>/Data Type Conversion' */
    BaseEngineController_LS_B.s118_IACP = rtb_motohawk_replicate1;

    /* Switch: '<S125>/Switch1' incorporates:
     *  Constant: '<S125>/Constant'
     *  Constant: '<S125>/Constant1'
     *  S-Function (motohawk_sfun_data_read): '<S125>/motohawk_data_read'
     *  Sum: '<S125>/Sum'
     */
    if (((uint8_T)IACType_DataStore()) > 0) {
      rtb_motohawk_replicate1 = 100.0 - rtb_Product1_l2;
    } else {
      rtb_motohawk_replicate1 = 0.0;
    }

    /* End of Switch: '<S125>/Switch1' */

    /* DataTypeConversion: '<S116>/Data Type Conversion1' */
    BaseEngineController_LS_B.s118_IACS = rtb_motohawk_replicate1;

    /* DataTypeConversion: '<S116>/Data Type Conversion2' incorporates:
     *  Constant: '<S116>/OFF'
     */
    BaseEngineController_LS_B.s118_WASTEGATE = 0.0;

    /* ZeroOrderHold: '<S116>/Zero-Order Hold10' incorporates:
     *  Constant: '<S116>/Mult'
     */
    BaseEngineController_LS_B.s118_FuelMult = 1.0;

    /* ZeroOrderHold: '<S116>/Zero-Order Hold12' incorporates:
     *  Constant: '<S116>/OFF1'
     */
    BaseEngineController_LS_B.s118_FAN1 = FALSE;

    /* ZeroOrderHold: '<S116>/Zero-Order Hold13' incorporates:
     *  Constant: '<S116>/OFF2'
     */
    BaseEngineController_LS_B.s118_FAN2 = FALSE;

    /* ZeroOrderHold: '<S116>/Zero-Order Hold14' incorporates:
     *  Constant: '<S116>/OFF3'
     */
    BaseEngineController_LS_B.s118_AC = FALSE;

    /* S-Function Block: <S116>/motohawk_interpolation_2d */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_motohawk_interpolation_2d_g = TableInterpolation2D_real_T
        (rtb_motohawk_prelookup1_nl, rtb_motohawk_prelookup_c, (real_T *)
         ((CrankSparkMap_DataStore())), 5, 5);
      (CrankSpark_DataStore()) = rtb_motohawk_interpolation_2d_g;
    }

    /* S-Function (motohawk_sfun_replicate): '<S116>/motohawk_replicate1' */

    /* S-Function Block: <S116>/motohawk_replicate1 */
    rtb_motohawk_replicate1 = rtb_motohawk_interpolation_2d_g;

    /* ZeroOrderHold: '<S116>/Zero-Order Hold3' */
    BaseEngineController_LS_B.s118_SparkAdv = rtb_motohawk_replicate1;

    /* S-Function Block: <S116>/motohawk_interpolation_2d1 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_motohawk_interpolation_2d1_b = TableInterpolation2D_real_T
        (rtb_motohawk_prelookup1_nl, rtb_motohawk_prelookup_c, (real_T *)
         ((CrankSpkEnergyMap_DataStore())), 5, 5);
      (CrankSpkEnergy_DataStore()) = rtb_motohawk_interpolation_2d1_b;
    }

    /* ZeroOrderHold: '<S116>/Zero-Order Hold4' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S116>/motohawk_interpolation_2d1'
     *  S-Function (motohawk_sfun_prelookup): '<S116>/motohawk_prelookup'
     *  S-Function (motohawk_sfun_prelookup): '<S116>/motohawk_prelookup1'
     */
    BaseEngineController_LS_B.s118_SparkEnergy =
      rtb_motohawk_interpolation_2d1_b;

    /* S-Function Block: <S116>/motohawk_interpolation_1d4 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d4_m = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_c, (real_T *) ((CrankSOITbl_DataStore())), 5);
      (CrankSOI_DataStore()) = rtb_motohawk_interpolation_1d4_m;
    }

    /* ZeroOrderHold: '<S116>/Zero-Order Hold5' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S116>/motohawk_interpolation_1d4'
     *  S-Function (motohawk_sfun_prelookup): '<S116>/motohawk_prelookup'
     */
    BaseEngineController_LS_B.s118_SOI = rtb_motohawk_interpolation_1d4_m;

    /* S-Function (motohawk_sfun_replicate): '<S116>/motohawk_replicate' */

    /* S-Function Block: <S116>/motohawk_replicate */
    {
      int_T i1;
      real_T *y0 = rtb_motohawk_replicate;
      for (i1=0; i1 < 8; i1++) {
        y0[i1] = rtb_Product_bk;
      }
    }

    /* ZeroOrderHold: '<S116>/Zero-Order Hold6' */
    memcpy((void *)(&BaseEngineController_LS_B.s118_FPC[0]), (void *)
           &rtb_motohawk_replicate[0], sizeof(real_T) << 3U);

    /* ZeroOrderHold: '<S116>/Zero-Order Hold7' incorporates:
     *  Constant: '<S116>/ON'
     */
    BaseEngineController_LS_B.s118_FUELP = TRUE;

    /* S-Function Block: <S116>/motohawk_interpolation_1d5 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d5 = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_c, (real_T *) ((CrankMakeUpEOITbl_DataStore())),
         5);
      (CrankMakeUpEOI_DataStore()) = rtb_motohawk_interpolation_1d5;
    }

    /* ZeroOrderHold: '<S116>/Zero-Order Hold8' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S116>/motohawk_interpolation_1d5'
     *  S-Function (motohawk_sfun_prelookup): '<S116>/motohawk_prelookup'
     */
    BaseEngineController_LS_B.s118_MakeUpEOI = rtb_motohawk_interpolation_1d5;

    /* S-Function Block: <S116>/motohawk_interpolation_1d1 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d1_k = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup1_nl, (real_T *) ((CrankAirflowSetPtTbl_DataStore
           ())), 5);
      (CrankAirflowSetPt_DataStore()) = rtb_motohawk_interpolation_1d1_k;
    }

    /* ZeroOrderHold: '<S116>/Zero-Order Hold9' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S116>/motohawk_interpolation_1d1'
     *  S-Function (motohawk_sfun_prelookup): '<S116>/motohawk_prelookup1'
     */
    BaseEngineController_LS_B.s118_Throttle = rtb_motohawk_interpolation_1d1_k;
  } else {
    if (BaseEngineController_LS_DWork.s15_Crank_MODE) {
      BaseEngineController_LS_DWork.s15_Crank_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S15>/Crank' */
  /* Switch: '<S368>/Switch1' incorporates:
   *  S-Function (motohawk_sfun_fault_action): '<S368>/motohawk_fault_action1'
   */
  if (GetFaultActionStatus(0)) {
    /* MinMax: '<S385>/MinMax' incorporates:
     *  Constant: '<S368>/Constant1'
     *  Product: '<S368>/Product1'
     *  S-Function (motohawk_sfun_calibration): '<S368>/motohawk_calibration2'
     */
    u = (Overheat_ScaleAPP_DataStore()) * rtb_Switch2;
    u = u >= 0.0 ? u : 0.0;

    /* MinMax: '<S385>/MinMax1' incorporates:
     *  Constant: '<S368>/Constant1'
     *  MinMax: '<S385>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S368>/motohawk_calibration1'
     */
    BaseEngineController_LS_B.s368_Switch1 = (u <= (Overheat_MaxAPP_DataStore()))
      || rtIsNaN((Overheat_MaxAPP_DataStore())) ? u : (Overheat_MaxAPP_DataStore
      ());
  } else {
    BaseEngineController_LS_B.s368_Switch1 = rtb_Switch2;
  }

  /* End of Switch: '<S368>/Switch1' */
  /* S-Function Block: <S362>/motohawk_prelookup2 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (TPS09In_DataStore()) = BaseEngineController_LS_B.s374_Switch2;
    (TPS09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s374_Switch2, (TPS09IdxArr_DataStore()), 9,
       (TPS09Idx_DataStore()));
    rtb_motohawk_prelookup2 = (TPS09Idx_DataStore());
  }

  /* Outputs for Atomic SubSystem: '<S333>/Base TPS Request' */

  /* UnitDelay: '<S365>/Unit Delay2' */
  rtb_UnitDelay_gh = BaseEngineController_LS_DWork.s365_UnitDelay2_DSTATE;

  /* S-Function Block: <S365>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (APP17In_DataStore()) = BaseEngineController_LS_B.s368_Switch1;
    (APP17Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s368_Switch1, (APP17IdxArr_DataStore()), 17,
       (APP17Idx_DataStore()));
    rtb_motohawk_prelookup_gv = (APP17Idx_DataStore());
  }

  /* S-Function Block: <S365>/motohawk_interpolation_1d2 */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_motohawk_interpolation_1d2_a = TableInterpolation1D_real_T
      (rtb_motohawk_prelookup_gv, (real_T *) ((ETCRequestTbl_DataStore())), 17);
    (ETCRequest_DataStore()) = rtb_motohawk_interpolation_1d2_a;
  }

  /* RelationalOperator: '<S365>/Relational Operator3' */
  BaseEngineController_LS_B.s365_RelationalOperator3 = ((rtb_UnitDelay_gh <
    rtb_motohawk_interpolation_1d2_a));

  /* Outputs for Enabled SubSystem: '<S365>/PassThrough1' */
  BaseEngineController_LS_PassThrough1
    (BaseEngineController_LS_B.s365_RelationalOperator3,
     (ETCReqIncFiltC_DataStore()), &BaseEngineController_LS_B.s365_Merge);

  /* End of Outputs for SubSystem: '<S365>/PassThrough1' */

  /* RelationalOperator: '<S365>/Relational Operator2' */
  rtb_RelationalOperator2_b = (rtb_UnitDelay_gh >
    rtb_motohawk_interpolation_1d2_a);

  /* Outputs for Enabled SubSystem: '<S365>/PassThrough2' */
  BaseEngineController_LS_PassThrough1(rtb_RelationalOperator2_b,
    (ETCReqDecFiltC_DataStore()), &BaseEngineController_LS_B.s365_Merge);

  /* End of Outputs for SubSystem: '<S365>/PassThrough2' */

  /* S-Function Block: <S381>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s381_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_l0 = ((real_T) delta) * 0.000001;
  }

  /* S-Function Block: <S365>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s365_motohawk_delta_time_DWORK1, NULL);
    rtb_UnitDelay_gh = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S365>/Product' incorporates:
   *  MinMax: '<S365>/MinMax'
   */
  rtb_UnitDelay_gh /= (rtb_UnitDelay_gh >= BaseEngineController_LS_B.s365_Merge)
    || rtIsNaN(BaseEngineController_LS_B.s365_Merge) ? rtb_UnitDelay_gh :
    BaseEngineController_LS_B.s365_Merge;

  /* Product: '<S378>/Product' */
  rtb_Product1_l2 = rtb_motohawk_interpolation_1d2_a * rtb_UnitDelay_gh;

  /* Sum: '<S378>/Sum' incorporates:
   *  Constant: '<S378>/Constant'
   */
  rtb_Product1_ii = 1.0 - rtb_UnitDelay_gh;

  /* UnitDelay: '<S378>/Unit Delay' */
  rtb_UnitDelay_gh = BaseEngineController_LS_DWork.s378_UnitDelay_DSTATE;

  /* Sum: '<S378>/Sum1' incorporates:
   *  Product: '<S378>/Product1'
   */
  rtb_Product1_ii = rtb_Product1_ii * rtb_UnitDelay_gh + rtb_Product1_l2;

  /* UnitDelay: '<S381>/Unit Delay' */
  rtb_UnitDelay_gh = BaseEngineController_LS_DWork.s381_UnitDelay_DSTATE;

  /* Product: '<S381>/Product1' incorporates:
   *  S-Function (motohawk_sfun_delta_time): '<S381>/motohawk_delta_time'
   *  Sum: '<S381>/Sum3'
   */
  rtb_Product1_l2 = 1.0 / rtb_motohawk_delta_time_l0 * (rtb_Product1_ii -
    rtb_UnitDelay_gh);

  /* S-Function Block: <S365>/motohawk_interpolation_1d3 */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_motohawk_interpolation_1d1_ku = TableInterpolation1D_real_T
      (rtb_motohawk_prelookup2, (real_T *) ((ETCReqFallRateTbl_DataStore())), 9);
    (ETCReqFallRate_DataStore()) = rtb_motohawk_interpolation_1d1_ku;
  }

  /* MinMax: '<S382>/MinMax' */
  rtb_Product4_o = (rtb_Product1_l2 >= rtb_motohawk_interpolation_1d1_ku) ||
    rtIsNaN(rtb_motohawk_interpolation_1d1_ku) ? rtb_Product1_l2 :
    rtb_motohawk_interpolation_1d1_ku;

  /* S-Function Block: <S365>/motohawk_interpolation_1d1 */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_motohawk_interpolation_1d1_ku = TableInterpolation1D_real_T
      (rtb_motohawk_prelookup2, (real_T *) ((ETCReqRiseRateTbl_DataStore())), 9);
    (ETCReqRiseRate_DataStore()) = rtb_motohawk_interpolation_1d1_ku;
  }

  /* Sum: '<S381>/Sum2' incorporates:
   *  MinMax: '<S382>/MinMax'
   *  MinMax: '<S382>/MinMax1'
   *  Product: '<S381>/Product'
   *  S-Function (motohawk_sfun_delta_time): '<S381>/motohawk_delta_time'
   */
  BaseEngineController_LS_B.s381_Sum2 = ((rtb_Product4_o <=
    rtb_motohawk_interpolation_1d1_ku) || rtIsNaN
    (rtb_motohawk_interpolation_1d1_ku) ? rtb_Product4_o :
    rtb_motohawk_interpolation_1d1_ku) * rtb_motohawk_delta_time_l0 +
    rtb_UnitDelay_gh;

  /* Update for UnitDelay: '<S365>/Unit Delay2' incorporates:
   *  UnitDelay: '<S365>/Unit Delay1'
   */
  BaseEngineController_LS_DWork.s365_UnitDelay2_DSTATE =
    BaseEngineController_LS_DWork.s365_UnitDelay1_DSTATE;

  /* Update for UnitDelay: '<S378>/Unit Delay' */
  BaseEngineController_LS_DWork.s378_UnitDelay_DSTATE = rtb_Product1_ii;

  /* Update for UnitDelay: '<S381>/Unit Delay' */
  BaseEngineController_LS_DWork.s381_UnitDelay_DSTATE =
    BaseEngineController_LS_B.s381_Sum2;

  /* Update for UnitDelay: '<S365>/Unit Delay1' incorporates:
   *  UnitDelay: '<S365>/Unit Delay3'
   */
  BaseEngineController_LS_DWork.s365_UnitDelay1_DSTATE =
    BaseEngineController_LS_DWork.s365_UnitDelay3_DSTATE;

  /* Update for UnitDelay: '<S365>/Unit Delay3' incorporates:
   *  UnitDelay: '<S365>/Unit Delay4'
   */
  BaseEngineController_LS_DWork.s365_UnitDelay3_DSTATE =
    BaseEngineController_LS_DWork.s365_UnitDelay4_DSTATE;

  /* Update for UnitDelay: '<S365>/Unit Delay4' */
  BaseEngineController_LS_DWork.s365_UnitDelay4_DSTATE =
    rtb_motohawk_interpolation_1d2_a;

  /* End of Outputs for SubSystem: '<S333>/Base TPS Request' */

  /* UnitDelay: '<S372>/Unit Delay' */
  rtb_Product1_ii = BaseEngineController_LS_DWork.s372_UnitDelay_DSTATE;

  /* Sum: '<S372>/Sum' incorporates:
   *  Constant: '<S372>/Constant'
   *  S-Function (motohawk_sfun_calibration): '<S372>/motohawk_calibration'
   */
  rtb_Sum_cy = 1.0 - (O2DelagFilterConst_DataStore());

  /* S-Function Block: <S570>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s570_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_c = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S570>/Product' incorporates:
   *  MinMax: '<S570>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S570>/motohawk_calibration'
   */
  rtb_DataTypeConversion_c /= (rtb_DataTypeConversion_c >=
    (Bank2_EquivRatioFilterConst_DataStore())) || rtIsNaN
    ((Bank2_EquivRatioFilterConst_DataStore())) ? rtb_DataTypeConversion_c :
    (Bank2_EquivRatioFilterConst_DataStore());

  /* Logic: '<S543>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S543>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S543>/motohawk_fault_status4'
   */
  rtb_RelationalOperator_ipv = (IsFaultActive(11) || IsFaultActive(12));

  /* Logic: '<S543>/Logical Operator6' */
  rtb_RelationalOperator2_i = !rtb_RelationalOperator_ipv;

  /* Logic: '<S543>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S543>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S543>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_j = (IsFaultSuspected(11) || IsFaultSuspected(12));

  /* S-Function (motohawk_sfun_read_canmsg): '<S540>/Read CAN Message1' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_7243p0004;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_7243p0004,
      &messageObj);
    if ((BaseEngineController_LS_B.s540_ReadCANMessage1_o1 + 1) >
        BaseEngineController_LS_B.s540_ReadCANMessage1_o1)
      BaseEngineController_LS_B.s540_ReadCANMessage1_o1++;
    if (msg_valid) {
      uint16_T tmp0 = 0;
      int16_T tmp1 = 0;
      uint8_T tmp2 = 0;
      uint8_T tmp3 = 0;
      uint8_T tmp4 = 0;
      uint8_T tmp5 = 0;
      uint8_T tmp6 = 0;
      uint8_T tmp7 = 0;
      uint8_T tmp8 = 0;
      ((uint8_T *)(&tmp0))[0] = ((messageObj.u1DataArr[0])) ;
      ((uint8_T *)(&tmp0))[1] = ((messageObj.u1DataArr[1])) ;
      ((uint8_T *)(&tmp1))[0] = ((messageObj.u1DataArr[2])) ;
      ((uint8_T *)(&tmp1))[1] = ((messageObj.u1DataArr[3])) ;
      ((uint8_T *)(&tmp2))[0] = ((messageObj.u1DataArr[4])) ;
      ((uint8_T *)(&tmp3))[0] = ((messageObj.u1DataArr[5])) ;
      ((uint8_T *)(&tmp4))[0] = ((messageObj.u1DataArr[6] & 0x0000000F)) ;
      ((uint8_T *)(&tmp5))[0] = ((messageObj.u1DataArr[6] & 0x00000020) >> 5) ;
      ((uint8_T *)(&tmp6))[0] = ((messageObj.u1DataArr[6] & 0x00000080) >> 7) ;
      ((uint8_T *)(&tmp7))[0] = ((messageObj.u1DataArr[7] & 0x0000001F)) ;
      ((uint8_T *)(&tmp8))[0] = ((messageObj.u1DataArr[7] & 0x00000040) >> 6) ;
      BaseEngineController_LS_B.s540_ReadCANMessage1_o2 = ((real_T) tmp0) /
        ((real_T) 10000);
      BaseEngineController_LS_B.s540_ReadCANMessage1_o3 = ((real_T) tmp1) /
        ((real_T) 1000);
      BaseEngineController_LS_B.s540_ReadCANMessage1_o4 = ((real_T) tmp2) /
        ((real_T) 10);
      BaseEngineController_LS_B.s540_ReadCANMessage1_o5 = ((real_T) tmp3) /
        ((real_T) 10);
      BaseEngineController_LS_B.s540_ReadCANMessage1_o6 = (real_T) tmp4;
      BaseEngineController_LS_B.s540_ReadCANMessage1_o7 = (real_T) tmp5;
      BaseEngineController_LS_B.s540_ReadCANMessage1_o8 = (real_T) tmp6;
      BaseEngineController_LS_B.s540_ReadCANMessage1_o9 = (real_T) tmp7;
      BaseEngineController_LS_B.s540_ReadCANMessage1_o10 = (real_T) tmp8;
      BaseEngineController_LS_B.s540_ReadCANMessage1_o1 = 0;
    }
  }

  /* If: '<S561>/If' incorporates:
   *  Inport: '<S612>/In1'
   *  Inport: '<S613>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S561>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S561>/override_enable'
   */
  if ((Bank2_Lambda_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S561>/NewValue' incorporates:
     *  ActionPort: '<S612>/Action Port'
     */
    rtb_Product1_l2 = (Bank2_Lambda_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S561>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S561>/OldValue' incorporates:
     *  ActionPort: '<S613>/Action Port'
     */
    rtb_Product1_l2 = BaseEngineController_LS_B.s540_ReadCANMessage1_o2;

    /* End of Outputs for SubSystem: '<S561>/OldValue' */
  }

  /* End of If: '<S561>/If' */

  /* Math: '<S540>/Math Function1'
   *
   * About '<S540>/Math Function1':
   *  Operator: reciprocal
   */
  BaseEngineController_LS_B.s540_MathFunction1 = 1.0 / rtb_Product1_l2;

  /* Product: '<S543>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S543>/motohawk_calibration4'
   */
  rtb_Product1_l2 = BaseEngineController_LS_B.s540_MathFunction1 *
    (Bank2_EquivRatioGain_DataStore());

  /* Sum: '<S543>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S543>/motohawk_calibration5'
   */
  BaseEngineController_LS_B.s543_Sum1 = rtb_Product1_l2 +
    (Bank2_EquivRatioOfst_DataStore());

  /* UnitDelay: '<S543>/Unit Delay1' */
  rtb_UnitDelay1_ij = BaseEngineController_LS_DWork.s543_UnitDelay1_DSTATE;

  /* If: '<S543>/If' incorporates:
   *  Logic: '<S543>/Logical Operator5'
   */
  if (rtb_RelationalOperator2_i && rtb_LogicalOperator1_j) {
    /* Outputs for IfAction SubSystem: '<S543>/If Action Subsystem' incorporates:
     *  ActionPort: '<S571>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay1_ij, &rtb_Merge_j);

    /* End of Outputs for SubSystem: '<S543>/If Action Subsystem' */
  } else if (rtb_RelationalOperator_ipv) {
    /* Outputs for IfAction SubSystem: '<S543>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S572>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      ((Bank2_EquivRatioDfltValue_DataStore()), &rtb_Merge_j);

    /* End of Outputs for SubSystem: '<S543>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S543>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S573>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      (BaseEngineController_LS_B.s543_Sum1, &rtb_Merge_j);

    /* End of Outputs for SubSystem: '<S543>/If Action Subsystem2' */
  }

  /* End of If: '<S543>/If' */

  /* Sum: '<S575>/Sum1' incorporates:
   *  Constant: '<S575>/Constant'
   *  Product: '<S575>/Product'
   *  Product: '<S575>/Product1'
   *  Sum: '<S575>/Sum'
   *  UnitDelay: '<S575>/Unit Delay'
   */
  rtb_Sum1_o = (1.0 - rtb_DataTypeConversion_c) *
    BaseEngineController_LS_DWork.s575_UnitDelay_DSTATE + rtb_Merge_j *
    rtb_DataTypeConversion_c;

  /* If: '<S574>/If' incorporates:
   *  Inport: '<S576>/In1'
   *  Inport: '<S577>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S574>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S574>/override_enable'
   */
  if ((Bank2_EquivRatio_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S574>/NewValue' incorporates:
     *  ActionPort: '<S576>/Action Port'
     */
    BaseEngineController_LS_B.s574_Merge = (Bank2_EquivRatio_new_DataStore());

    /* End of Outputs for SubSystem: '<S574>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S574>/OldValue' incorporates:
     *  ActionPort: '<S577>/Action Port'
     */
    BaseEngineController_LS_B.s574_Merge = rtb_Sum1_o;

    /* End of Outputs for SubSystem: '<S574>/OldValue' */
  }

  /* End of If: '<S574>/If' */

  /* MultiPortSwitch: '<S540>/Multiport Switch' incorporates:
   *  Constant: '<S540>/Constant'
   *  S-Function (motohawk_sfun_calibration): '<S540>/motohawk_calibration2'
   */
  if (((uint8_T)(Bank2_Enable_DataStore())) == 0) {
    rtb_DataTypeConversion_c = 0.0;
  } else {
    rtb_DataTypeConversion_c = BaseEngineController_LS_B.s574_Merge;
  }

  /* End of MultiPortSwitch: '<S540>/Multiport Switch' */
  /* S-Function Block: <S562>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s562_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_m = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S562>/Product' incorporates:
   *  MinMax: '<S562>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S562>/motohawk_calibration'
   */
  rtb_Switch_m /= (rtb_Switch_m >= (Bank1_EquivRatioFilterConst_DataStore())) ||
    rtIsNaN((Bank1_EquivRatioFilterConst_DataStore())) ? rtb_Switch_m :
    (Bank1_EquivRatioFilterConst_DataStore());

  /* Logic: '<S542>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S542>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S542>/motohawk_fault_status4'
   */
  rtb_RelationalOperator_ipv = (IsFaultActive(9) || IsFaultActive(10));

  /* Logic: '<S542>/Logical Operator6' */
  rtb_RelationalOperator2_i = !rtb_RelationalOperator_ipv;

  /* Logic: '<S542>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S542>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S542>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_j = (IsFaultSuspected(9) || IsFaultSuspected(10));

  /* S-Function (motohawk_sfun_read_canmsg): '<S540>/Read CAN Message' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_7242p0005;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_7242p0005,
      &messageObj);
    if ((BaseEngineController_LS_B.s540_ReadCANMessage_o1 + 1) >
        BaseEngineController_LS_B.s540_ReadCANMessage_o1)
      BaseEngineController_LS_B.s540_ReadCANMessage_o1++;
    if (msg_valid) {
      uint16_T tmp0 = 0;
      int16_T tmp1 = 0;
      uint8_T tmp2 = 0;
      uint8_T tmp3 = 0;
      uint8_T tmp4 = 0;
      uint8_T tmp5 = 0;
      uint8_T tmp6 = 0;
      uint8_T tmp7 = 0;
      uint8_T tmp8 = 0;
      ((uint8_T *)(&tmp0))[0] = ((messageObj.u1DataArr[0])) ;
      ((uint8_T *)(&tmp0))[1] = ((messageObj.u1DataArr[1])) ;
      ((uint8_T *)(&tmp1))[0] = ((messageObj.u1DataArr[2])) ;
      ((uint8_T *)(&tmp1))[1] = ((messageObj.u1DataArr[3])) ;
      ((uint8_T *)(&tmp2))[0] = ((messageObj.u1DataArr[4])) ;
      ((uint8_T *)(&tmp3))[0] = ((messageObj.u1DataArr[5])) ;
      ((uint8_T *)(&tmp4))[0] = ((messageObj.u1DataArr[6] & 0x0000000F)) ;
      ((uint8_T *)(&tmp5))[0] = ((messageObj.u1DataArr[6] & 0x00000020) >> 5) ;
      ((uint8_T *)(&tmp6))[0] = ((messageObj.u1DataArr[6] & 0x00000080) >> 7) ;
      ((uint8_T *)(&tmp7))[0] = ((messageObj.u1DataArr[7] & 0x0000001F)) ;
      ((uint8_T *)(&tmp8))[0] = ((messageObj.u1DataArr[7] & 0x00000040) >> 6) ;
      BaseEngineController_LS_B.s540_ReadCANMessage_o2 = ((real_T) tmp0) /
        ((real_T) 10000);
      BaseEngineController_LS_B.s540_ReadCANMessage_o3 = ((real_T) tmp1) /
        ((real_T) 1000);
      BaseEngineController_LS_B.s540_ReadCANMessage_o4 = ((real_T) tmp2) /
        ((real_T) 10);
      BaseEngineController_LS_B.s540_ReadCANMessage_o5 = ((real_T) tmp3) /
        ((real_T) 10);
      BaseEngineController_LS_B.s540_ReadCANMessage_o6 = (real_T) tmp4;
      BaseEngineController_LS_B.s540_ReadCANMessage_o7 = (real_T) tmp5;
      BaseEngineController_LS_B.s540_ReadCANMessage_o8 = (real_T) tmp6;
      BaseEngineController_LS_B.s540_ReadCANMessage_o9 = (real_T) tmp7;
      BaseEngineController_LS_B.s540_ReadCANMessage_o10 = (real_T) tmp8;
      BaseEngineController_LS_B.s540_ReadCANMessage_o1 = 0;
    }
  }

  /* If: '<S544>/If' incorporates:
   *  Inport: '<S578>/In1'
   *  Inport: '<S579>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S544>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S544>/override_enable'
   */
  if ((Bank1_Lambda_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S544>/NewValue' incorporates:
     *  ActionPort: '<S578>/Action Port'
     */
    rtb_Product1_l2 = (Bank1_Lambda_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S544>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S544>/OldValue' incorporates:
     *  ActionPort: '<S579>/Action Port'
     */
    rtb_Product1_l2 = BaseEngineController_LS_B.s540_ReadCANMessage_o2;

    /* End of Outputs for SubSystem: '<S544>/OldValue' */
  }

  /* End of If: '<S544>/If' */

  /* Math: '<S540>/Math Function'
   *
   * About '<S540>/Math Function':
   *  Operator: reciprocal
   */
  BaseEngineController_LS_B.s540_MathFunction = 1.0 / rtb_Product1_l2;

  /* Product: '<S542>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S542>/motohawk_calibration4'
   */
  rtb_Product1_l2 = BaseEngineController_LS_B.s540_MathFunction *
    (Bank1_EquivRatioGain_DataStore());

  /* Sum: '<S542>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S542>/motohawk_calibration5'
   */
  BaseEngineController_LS_B.s542_Sum1 = rtb_Product1_l2 +
    (Bank1_EquivRatioOfst_DataStore());

  /* UnitDelay: '<S542>/Unit Delay1' */
  rtb_UnitDelay1_l = BaseEngineController_LS_DWork.s542_UnitDelay1_DSTATE;

  /* If: '<S542>/If' incorporates:
   *  Logic: '<S542>/Logical Operator5'
   */
  if (rtb_RelationalOperator2_i && rtb_LogicalOperator1_j) {
    /* Outputs for IfAction SubSystem: '<S542>/If Action Subsystem' incorporates:
     *  ActionPort: '<S563>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay1_l, &rtb_Merge_hw);

    /* End of Outputs for SubSystem: '<S542>/If Action Subsystem' */
  } else if (rtb_RelationalOperator_ipv) {
    /* Outputs for IfAction SubSystem: '<S542>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S564>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      ((Bank1_EquivRatioDfltValue_DataStore()), &rtb_Merge_hw);

    /* End of Outputs for SubSystem: '<S542>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S542>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S565>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      (BaseEngineController_LS_B.s542_Sum1, &rtb_Merge_hw);

    /* End of Outputs for SubSystem: '<S542>/If Action Subsystem2' */
  }

  /* End of If: '<S542>/If' */

  /* Sum: '<S567>/Sum1' incorporates:
   *  Constant: '<S567>/Constant'
   *  Product: '<S567>/Product'
   *  Product: '<S567>/Product1'
   *  Sum: '<S567>/Sum'
   *  UnitDelay: '<S567>/Unit Delay'
   */
  rtb_Sum1_c = (1.0 - rtb_Switch_m) *
    BaseEngineController_LS_DWork.s567_UnitDelay_DSTATE + rtb_Merge_hw *
    rtb_Switch_m;

  /* If: '<S566>/If' incorporates:
   *  Inport: '<S568>/In1'
   *  Inport: '<S569>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S566>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S566>/override_enable'
   */
  if ((Bank1_EquivRatio_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S566>/NewValue' incorporates:
     *  ActionPort: '<S568>/Action Port'
     */
    BaseEngineController_LS_B.s566_Merge = (Bank1_EquivRatio_new_DataStore());

    /* End of Outputs for SubSystem: '<S566>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S566>/OldValue' incorporates:
     *  ActionPort: '<S569>/Action Port'
     */
    BaseEngineController_LS_B.s566_Merge = rtb_Sum1_c;

    /* End of Outputs for SubSystem: '<S566>/OldValue' */
  }

  /* End of If: '<S566>/If' */

  /* Gain: '<S540>/Gain' incorporates:
   *  Sum: '<S540>/Add'
   */
  BaseEngineController_LS_B.s540_Gain = (BaseEngineController_LS_B.s566_Merge +
    rtb_DataTypeConversion_c) * 0.5;

  /* Sum: '<S372>/Sum1' incorporates:
   *  Product: '<S372>/Product'
   *  Product: '<S372>/Product1'
   *  S-Function (motohawk_sfun_calibration): '<S372>/motohawk_calibration'
   */
  BaseEngineController_LS_B.s372_Sum1 = rtb_Product1_ii * rtb_Sum_cy +
    (O2DelagFilterConst_DataStore()) * BaseEngineController_LS_B.s540_Gain;

  /* S-Function Block: <S394>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s394_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_f = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S394>/Switch' incorporates:
   *  Constant: '<S393>/Constant'
   *  Constant: '<S394>/Constant'
   *  RelationalOperator: '<S393>/RelOp'
   *  S-Function (motohawk_sfun_data_read): '<S376>/motohawk_data_read'
   *  S-Function (motohawk_sfun_data_read): '<S394>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S394>/motohawk_delta_time'
   *  Sum: '<S394>/Sum'
   */
  if (((uint8_T)EngineState_DataStore()) == 3) {
    BaseEngineController_LS_B.s394_Switch = rtb_motohawk_delta_time_f +
      TimeSinceRunTimer_DataStore();
  } else {
    BaseEngineController_LS_B.s394_Switch = 0.0;
  }

  /* End of Switch: '<S394>/Switch' */
  /* S-Function Block: <S360>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (RPM09In_DataStore()) = BaseEngineController_LS_B.s459_Sum1;
    (RPM09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s459_Sum1, (RPM09IdxArr_DataStore()), 9,
       (RPM09Idx_DataStore()));
    BaseEngineController_LS_B.s360_motohawk_prelookup1 = (RPM09Idx_DataStore());
  }

  /* S-Function Block: <S360>/motohawk_prelookup5 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (RPM17In_DataStore()) = BaseEngineController_LS_B.s459_Sum1;
    (RPM17Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s459_Sum1, (RPM17IdxArr_DataStore()), 17,
       (RPM17Idx_DataStore()));
    BaseEngineController_LS_B.s360_Indexes = (RPM17Idx_DataStore());
  }

  /* S-Function Block: <S357>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (ECT05In_DataStore()) = BaseEngineController_LS_B.s622_Merge;
    (ECT05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s622_Merge, (ECT05IdxArr_DataStore()), 5,
       (ECT05Idx_DataStore()));
    BaseEngineController_LS_B.s357_motohawk_prelookup = (ECT05Idx_DataStore());
  }

  /* S-Function Block: <S357>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (ECT09In_DataStore()) = BaseEngineController_LS_B.s622_Merge;
    (ECT09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s622_Merge, (ECT09IdxArr_DataStore()), 9,
       (ECT09Idx_DataStore()));
    rtb_motohawk_prelookup1_h = (ECT09Idx_DataStore());
  }

  /* S-Function Block: <S358>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (IAT05In_DataStore()) = BaseEngineController_LS_B.s649_Merge;
    (IAT05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s649_Merge, (IAT05IdxArr_DataStore()), 5,
       (IAT05Idx_DataStore()));
    BaseEngineController_LS_B.s358_motohawk_prelookup = (IAT05Idx_DataStore());
  }

  /* S-Function Block: <S532>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s532_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_m = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S532>/Product' incorporates:
   *  MinMax: '<S532>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S532>/motohawk_calibration'
   */
  rtb_Switch_m /= (rtb_Switch_m >= (SysVoltFilterConst_DataStore())) || rtIsNaN
    ((SysVoltFilterConst_DataStore())) ? rtb_Switch_m :
    (SysVoltFilterConst_DataStore());

  /* Logic: '<S468>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S468>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S468>/motohawk_fault_status4'
   */
  rtb_RelationalOperator_ipv = (IsFaultActive(88) || IsFaultActive(89));

  /* Logic: '<S468>/Logical Operator6' */
  rtb_RelationalOperator2_i = !rtb_RelationalOperator_ipv;

  /* Logic: '<S468>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S468>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S468>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_j = (IsFaultSuspected(88) || IsFaultSuspected(89));

  /* S-Function Block: <S404>/motohawk_ain14 Resource: SysVoltage */
  {
    extern NativeError_S SysVoltage_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    SysVoltage_AnalogInput_Get(&BaseEngineController_LS_B.s404_motohawk_ain14,
      NULL);
  }

  /* DataTypeConversion: '<S468>/Data Type Conversion' */
  rtb_DataTypeConversion_c = (real_T)
    BaseEngineController_LS_B.s404_motohawk_ain14;

  /* Product: '<S468>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S468>/motohawk_calibration4'
   */
  rtb_Product1_l2 = rtb_DataTypeConversion_c * (SysVoltGain_DataStore());

  /* Sum: '<S468>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S468>/motohawk_calibration5'
   */
  BaseEngineController_LS_B.s468_Sum1 = rtb_Product1_l2 + (SysVoltOfst_DataStore
    ());

  /* UnitDelay: '<S468>/Unit Delay1' */
  rtb_UnitDelay1_f = BaseEngineController_LS_DWork.s468_UnitDelay1_DSTATE;

  /* If: '<S468>/If' incorporates:
   *  Logic: '<S468>/Logical Operator5'
   */
  if (rtb_RelationalOperator2_i && rtb_LogicalOperator1_j) {
    /* Outputs for IfAction SubSystem: '<S468>/If Action Subsystem' incorporates:
     *  ActionPort: '<S533>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay1_f, &rtb_Merge_f);

    /* End of Outputs for SubSystem: '<S468>/If Action Subsystem' */
  } else if (rtb_RelationalOperator_ipv) {
    /* Outputs for IfAction SubSystem: '<S468>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S534>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((SysVoltDfltValue_DataStore()),
      &rtb_Merge_f);

    /* End of Outputs for SubSystem: '<S468>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S468>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S535>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      (BaseEngineController_LS_B.s468_Sum1, &rtb_Merge_f);

    /* End of Outputs for SubSystem: '<S468>/If Action Subsystem2' */
  }

  /* End of If: '<S468>/If' */

  /* Sum: '<S537>/Sum1' incorporates:
   *  Constant: '<S537>/Constant'
   *  Product: '<S537>/Product'
   *  Product: '<S537>/Product1'
   *  Sum: '<S537>/Sum'
   *  UnitDelay: '<S537>/Unit Delay'
   */
  rtb_Sum1_nl = (1.0 - rtb_Switch_m) *
    BaseEngineController_LS_DWork.s537_UnitDelay_DSTATE + rtb_Merge_f *
    rtb_Switch_m;

  /* If: '<S536>/If' incorporates:
   *  Inport: '<S538>/In1'
   *  Inport: '<S539>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S536>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S536>/override_enable'
   */
  if ((SysVolt_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S536>/NewValue' incorporates:
     *  ActionPort: '<S538>/Action Port'
     */
    BaseEngineController_LS_B.s536_Merge = (SysVolt_new_DataStore());

    /* End of Outputs for SubSystem: '<S536>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S536>/OldValue' incorporates:
     *  ActionPort: '<S539>/Action Port'
     */
    BaseEngineController_LS_B.s536_Merge = rtb_Sum1_nl;

    /* End of Outputs for SubSystem: '<S536>/OldValue' */
  }

  /* End of If: '<S536>/If' */

  /* S-Function Block: <S361>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (SysVolt09In_DataStore()) = BaseEngineController_LS_B.s536_Merge;
    (SysVolt09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s536_Merge, (SysVolt09IdxArr_DataStore()), 9,
       (SysVolt09Idx_DataStore()));
    BaseEngineController_LS_B.s361_motohawk_prelookup = (SysVolt09Idx_DataStore());
  }

  /* S-Function Block: <S498>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s498_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_m = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S498>/Product' incorporates:
   *  MinMax: '<S498>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S498>/motohawk_calibration'
   */
  rtb_Switch_m /= (rtb_Switch_m >= (MAPFilterConst_DataStore())) || rtIsNaN
    ((MAPFilterConst_DataStore())) ? rtb_Switch_m : (MAPFilterConst_DataStore());

  /* Logic: '<S463>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S463>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S463>/motohawk_fault_status4'
   */
  rtb_RelationalOperator_ipv = (IsFaultActive(70) || IsFaultActive(71));

  /* Logic: '<S463>/Logical Operator6' */
  rtb_RelationalOperator2_i = !rtb_RelationalOperator_ipv;

  /* Logic: '<S463>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S463>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S463>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_j = (IsFaultSuspected(70) || IsFaultSuspected(71));

  /* S-Function (motohawk_sfun_trigger): '<S465>/motohawk_trigger5' */
  /* Enable for Trigger_FGND_MID_TDC_EVENT_7170p0004 */
  if (BaseEngineController_LS_DWork.s465_motohawk_trigger5_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s465_motohawk_trigger5_DWORK1 = 1;
  }

  /* Product: '<S463>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S463>/motohawk_calibration4'
   */
  rtb_Product1_l2 = BaseEngineController_LS_B.s465_Merge * (MAPGain_DataStore());

  /* Sum: '<S463>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S463>/motohawk_calibration5'
   */
  BaseEngineController_LS_B.s463_Sum1 = rtb_Product1_l2 + (MAPOfst_DataStore());

  /* UnitDelay: '<S463>/Unit Delay1' */
  rtb_UnitDelay1_a = BaseEngineController_LS_DWork.s463_UnitDelay1_DSTATE;

  /* If: '<S463>/If' incorporates:
   *  Logic: '<S463>/Logical Operator5'
   */
  if (rtb_RelationalOperator2_i && rtb_LogicalOperator1_j) {
    /* Outputs for IfAction SubSystem: '<S463>/If Action Subsystem' incorporates:
     *  ActionPort: '<S499>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay1_a, &rtb_Merge_in);

    /* End of Outputs for SubSystem: '<S463>/If Action Subsystem' */
  } else if (rtb_RelationalOperator_ipv) {
    /* Outputs for IfAction SubSystem: '<S463>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S500>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((MAPDfltValue_DataStore()),
      &rtb_Merge_in);

    /* End of Outputs for SubSystem: '<S463>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S463>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S501>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      (BaseEngineController_LS_B.s463_Sum1, &rtb_Merge_in);

    /* End of Outputs for SubSystem: '<S463>/If Action Subsystem2' */
  }

  /* End of If: '<S463>/If' */

  /* Sum: '<S503>/Sum1' incorporates:
   *  Constant: '<S503>/Constant'
   *  Product: '<S503>/Product'
   *  Product: '<S503>/Product1'
   *  Sum: '<S503>/Sum'
   *  UnitDelay: '<S503>/Unit Delay'
   */
  rtb_Sum1_d4 = (1.0 - rtb_Switch_m) *
    BaseEngineController_LS_DWork.s503_UnitDelay_DSTATE + rtb_Merge_in *
    rtb_Switch_m;

  /* If: '<S502>/If' incorporates:
   *  Inport: '<S504>/In1'
   *  Inport: '<S505>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S502>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S502>/override_enable'
   */
  if ((MAP_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S502>/NewValue' incorporates:
     *  ActionPort: '<S504>/Action Port'
     */
    BaseEngineController_LS_B.s502_Merge = (MAP_new_DataStore());

    /* End of Outputs for SubSystem: '<S502>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S502>/OldValue' incorporates:
     *  ActionPort: '<S505>/Action Port'
     */
    BaseEngineController_LS_B.s502_Merge = rtb_Sum1_d4;

    /* End of Outputs for SubSystem: '<S502>/OldValue' */
  }

  /* End of If: '<S502>/If' */

  /* S-Function Block: <S359>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (MAP05In_DataStore()) = BaseEngineController_LS_B.s502_Merge;
    (MAP05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s502_Merge, (MAP05IdxArr_DataStore()), 5,
       (MAP05Idx_DataStore()));
    rtb_motohawk_prelookup_m = (MAP05Idx_DataStore());
  }

  /* S-Function Block: <S359>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (MAP09In_DataStore()) = BaseEngineController_LS_B.s502_Merge;
    (MAP09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s502_Merge, (MAP09IdxArr_DataStore()), 9,
       (MAP09Idx_DataStore()));
    BaseEngineController_LS_B.s359_motohawk_prelookup1 = (MAP09Idx_DataStore());
  }

  /* S-Function Block: <S359>/motohawk_prelookup5 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (MAP17In_DataStore()) = BaseEngineController_LS_B.s502_Merge;
    (MAP17Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s502_Merge, (MAP17IdxArr_DataStore()), 17,
       (MAP17Idx_DataStore()));
    BaseEngineController_LS_B.s359_Indexes = (MAP17Idx_DataStore());
  }

  /* S-Function Block: <S432>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s432_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_m = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S432>/Product' incorporates:
   *  MinMax: '<S432>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S432>/motohawk_calibration'
   */
  rtb_Switch_m /= (rtb_Switch_m >= (VSPDFiltConst_DataStore())) || rtIsNaN
    ((VSPDFiltConst_DataStore())) ? rtb_Switch_m : (VSPDFiltConst_DataStore());

  /* Logic: '<S411>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S411>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S411>/motohawk_fault_status4'
   */
  rtb_RelationalOperator_ipv = (IsFaultActive(95) || IsFaultActive(96));

  /* Logic: '<S411>/Logical Operator6' */
  rtb_RelationalOperator2_i = !rtb_RelationalOperator_ipv;

  /* Logic: '<S411>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S411>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S411>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_j = (IsFaultSuspected(95) || IsFaultSuspected(96));

  /* S-Function Block: <S402>/motohawk_frequency_in1 Frequency Input Get: VSPD_Pin */
  {
    extern NativeError_S VSPD_Pin_FrequencyInput_Get(uint32_T *frequency,
      int16_T *duty_cycle);
    VSPD_Pin_FrequencyInput_Get(&rtb_DataTypeConversion6,
      &rtb_DataTypeConversion2_pj);
  }

  /* Gain: '<S402>/Gain1' incorporates:
   *  DataTypeConversion: '<S402>/Data Type Conversion1'
   */
  BaseEngineController_LS_B.s402_Gain1 = 0.01 * (real_T)rtb_DataTypeConversion6;

  /* S-Function Block: <S437>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (VSPDIdx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s402_Gain1, (VSPDIdxArr_DataStore()), 13,
       (VSPDIdx_DataStore()));
    rtb_motohawk_prelookup_e = (VSPDIdx_DataStore());
  }

  /* S-Function Block: <S437>/motohawk_interpolation_1d */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    BaseEngineController_LS_B.s437_motohawk_interpolation_1d =
      TableInterpolation1D_real_T(rtb_motohawk_prelookup_e, (real_T *)
      ((VSPDTbl_DataStore())), 13);
  }

  /* UnitDelay: '<S411>/Unit Delay' */
  rtb_UnitDelay_ge = BaseEngineController_LS_DWork.s411_UnitDelay_DSTATE;

  /* If: '<S411>/If' incorporates:
   *  Logic: '<S411>/Logical Operator5'
   */
  if (rtb_RelationalOperator2_i && rtb_LogicalOperator1_j) {
    /* Outputs for IfAction SubSystem: '<S411>/If Action Subsystem' incorporates:
     *  ActionPort: '<S433>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay_ge, &rtb_Merge_if);

    /* End of Outputs for SubSystem: '<S411>/If Action Subsystem' */
  } else if (rtb_RelationalOperator_ipv) {
    /* Outputs for IfAction SubSystem: '<S411>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S434>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((VSPDDefault_DataStore()),
      &rtb_Merge_if);

    /* End of Outputs for SubSystem: '<S411>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S411>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S435>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      (BaseEngineController_LS_B.s437_motohawk_interpolation_1d, &rtb_Merge_if);

    /* End of Outputs for SubSystem: '<S411>/If Action Subsystem2' */
  }

  /* End of If: '<S411>/If' */

  /* Sum: '<S438>/Sum1' incorporates:
   *  Constant: '<S438>/Constant'
   *  Product: '<S438>/Product'
   *  Product: '<S438>/Product1'
   *  Sum: '<S438>/Sum'
   *  UnitDelay: '<S438>/Unit Delay'
   */
  rtb_Sum1_a = (1.0 - rtb_Switch_m) *
    BaseEngineController_LS_DWork.s438_UnitDelay_DSTATE + rtb_Merge_if *
    rtb_Switch_m;

  /* If: '<S436>/If' incorporates:
   *  Inport: '<S439>/In1'
   *  Inport: '<S440>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S436>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S436>/override_enable'
   */
  if ((VSPD_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S436>/NewValue' incorporates:
     *  ActionPort: '<S439>/Action Port'
     */
    BaseEngineController_LS_B.s436_Merge = (VSPD_new_DataStore());

    /* End of Outputs for SubSystem: '<S436>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S436>/OldValue' incorporates:
     *  ActionPort: '<S440>/Action Port'
     */
    BaseEngineController_LS_B.s436_Merge = rtb_Sum1_a;

    /* End of Outputs for SubSystem: '<S436>/OldValue' */
  }

  /* End of If: '<S436>/If' */

  /* S-Function Block: <S363>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (VSPD09In_DataStore()) = BaseEngineController_LS_B.s436_Merge;
    (VSPD09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s436_Merge, (VSPD09IdxArr_DataStore()), 9,
       (VSPD09Idx_DataStore()));
    rtb_motohawk_prelookup_i = (VSPD09Idx_DataStore());
  }

  /* S-Function Block: <S356>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (CAT05In_DataStore()) = BaseEngineController_LS_B.s640_Merge;
    (CAT05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s640_Merge, (CAT05IdxArr_DataStore()), 5,
       (CAT05Idx_DataStore()));
    BaseEngineController_LS_B.s356_motohawk_prelookup = (CAT05Idx_DataStore());
  }

  /* S-Function (motohawk_sfun_data_read): '<S330>/motohawk_data_read1' */
  BaseEngineController_LS_B.s330_motohawk_data_read1 = EngineState_DataStore();

  /* S-Function Block: <S330>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s330_motohawk_delta_time_DWORK1, NULL);
    BaseEngineController_LS_B.s330_motohawk_delta_time = ((real_T) delta) *
      0.000001;
  }

  /* Stateflow: '<S330>/Baro Stall State Delay' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S330>/motohawk_calibration'
   */

  /* Gateway: Foreground/Control/VirtualSensors/AirCalcs/Baro Stall State Delay */
  /* During: Foreground/Control/VirtualSensors/AirCalcs/Baro Stall State Delay */
  switch (BaseEngineController_LS_DWork.s335_is_c19_BaseEngineController_LS) {
   case BaseEngineController_LS_IN_CrankRun:
    /* During 'CrankRun': '<S335>:2' */
    if (BaseEngineController_LS_B.s330_motohawk_data_read1 == 1) {
      /* Transition: '<S335>:6' */
      BaseEngineController_LS_DWork.s335_is_c19_BaseEngineController_LS =
        BaseEngineController_LS_IN_StallDelay;

      /* Entry 'StallDelay': '<S335>:3' */
      BaseEngineController_LS_B.s335_Enable = FALSE;
      BaseEngineController_LS_B.s335_Timer = 0.0;
      BaseEngineController_LS_DWork.s335_TOld = 0.0;
    }
    break;

   case BaseEngineController_LS_IN_Stall:
    /* During 'Stall': '<S335>:1' */
    if (BaseEngineController_LS_B.s330_motohawk_data_read1 > 1) {
      /* Transition: '<S335>:5' */
      BaseEngineController_LS_DWork.s335_is_c19_BaseEngineController_LS =
        BaseEngineController_LS_IN_CrankRun;

      /* Entry 'CrankRun': '<S335>:2' */
      BaseEngineController_LS_B.s335_Enable = FALSE;
    }
    break;

   case BaseEngineController_LS_IN_StallDelay:
    /* During 'StallDelay': '<S335>:3' */
    if (BaseEngineController_LS_B.s330_motohawk_data_read1 > 1) {
      /* Transition: '<S335>:8' */
      BaseEngineController_LS_DWork.s335_is_c19_BaseEngineController_LS =
        BaseEngineController_LS_IN_CrankRun;

      /* Entry 'CrankRun': '<S335>:2' */
      BaseEngineController_LS_B.s335_Enable = FALSE;
    } else if (((BaseEngineController_LS_B.s330_motohawk_data_read1 == 1) &
                (BaseEngineController_LS_B.s335_Timer >
                 (BaroRunStallDelay_DataStore()))) != 0) {
      /* Transition: '<S335>:7' */
      BaseEngineController_LS_DWork.s335_is_c19_BaseEngineController_LS =
        BaseEngineController_LS_IN_Stall;

      /* Entry 'Stall': '<S335>:1' */
      BaseEngineController_LS_B.s335_Enable = TRUE;
    } else {
      BaseEngineController_LS_B.s335_Timer =
        BaseEngineController_LS_DWork.s335_TOld +
        BaseEngineController_LS_B.s330_motohawk_delta_time;
      BaseEngineController_LS_DWork.s335_TOld =
        BaseEngineController_LS_B.s335_Timer;
    }
    break;

   default:
    /* Transition: '<S335>:4' */
    BaseEngineController_LS_DWork.s335_is_c19_BaseEngineController_LS =
      BaseEngineController_LS_IN_Stall;

    /* Entry 'Stall': '<S335>:1' */
    BaseEngineController_LS_B.s335_Enable = TRUE;
    break;
  }

  /* End of Stateflow: '<S330>/Baro Stall State Delay' */
  /* Logic: '<S464>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S464>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S464>/motohawk_fault_status4'
   */
  rtb_RelationalOperator_ipv = (IsFaultActive(72) || IsFaultActive(73));

  /* Logic: '<S464>/Logical Operator6' */
  rtb_RelationalOperator2_i = !rtb_RelationalOperator_ipv;

  /* Logic: '<S464>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S464>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S464>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_j = (IsFaultSuspected(72) || IsFaultSuspected(73));

  /* S-Function Block: <S404>/motohawk_ain_read1 Resource: MAPSensorPin */
  {
    extern NativeError_S MAPSensorPin_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    MAPSensorPin_AnalogInput_Get
      (&BaseEngineController_LS_B.s404_motohawk_ain_read1, NULL);
  }

  /* DataTypeConversion: '<S464>/Data Type Conversion' */
  rtb_DataTypeConversion_fq = BaseEngineController_LS_B.s404_motohawk_ain_read1;

  /* Product: '<S464>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S464>/motohawk_calibration4'
   */
  rtb_Product1_l2 = (real_T)rtb_DataTypeConversion_fq * (MAPTimeGain_DataStore());

  /* Sum: '<S464>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S464>/motohawk_calibration5'
   */
  BaseEngineController_LS_B.s464_Sum1 = rtb_Product1_l2 + (MAPTimeOfst_DataStore
    ());

  /* UnitDelay: '<S464>/Unit Delay1' */
  rtb_UnitDelay1_n = BaseEngineController_LS_DWork.s464_UnitDelay1_DSTATE;

  /* If: '<S464>/If' incorporates:
   *  Logic: '<S464>/Logical Operator5'
   */
  if (rtb_RelationalOperator2_i && rtb_LogicalOperator1_j) {
    /* Outputs for IfAction SubSystem: '<S464>/If Action Subsystem' incorporates:
     *  ActionPort: '<S507>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay1_n, &rtb_Merge_jq);

    /* End of Outputs for SubSystem: '<S464>/If Action Subsystem' */
  } else if (rtb_RelationalOperator_ipv) {
    /* Outputs for IfAction SubSystem: '<S464>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S508>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((MAPTimeDfltValue_DataStore()),
      &rtb_Merge_jq);

    /* End of Outputs for SubSystem: '<S464>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S464>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S509>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      (BaseEngineController_LS_B.s464_Sum1, &rtb_Merge_jq);

    /* End of Outputs for SubSystem: '<S464>/If Action Subsystem2' */
  }

  /* End of If: '<S464>/If' */

  /* Outputs for Enabled SubSystem: '<S330>/Capture Signal At Startup' incorporates:
   *  EnablePort: '<S336>/Enable'
   */
  if (BaseEngineController_LS_B.s335_Enable) {
    if (!BaseEngineController_LS_DWork.s330_CaptureSignalAtStartup_MODE) {
      /* InitializeConditions for UnitDelay: '<S336>/Unit Delay' */
      BaseEngineController_LS_DWork.s336_UnitDelay_DSTATE = 0;
      BaseEngineController_LS_DWork.s330_CaptureSignalAtStartup_MODE = TRUE;
    }

    /* Sum: '<S336>/Add' incorporates:
     *  Constant: '<S336>/TwoSampleBuffer ToIgnore'
     *  S-Function (motohawk_sfun_calibration): '<S336>/motohawk_calibration'
     */
    rtb_Add_k = (int8_T)(((int8_T)(BARO_Count_DataStore())) + 2);

    /* Sum: '<S336>/Sum' incorporates:
     *  Constant: '<S336>/Constant'
     *  UnitDelay: '<S336>/Unit Delay'
     */
    rtb_Sum_l3 = (int8_T)(BaseEngineController_LS_DWork.s336_UnitDelay_DSTATE +
                          1);

    /* RelationalOperator: '<S336>/Relational Operator' */
    rtb_RelationalOperator2_i = (rtb_Sum_l3 <= rtb_Add_k);

    /* Switch: '<S336>/Switch' */
    if (rtb_RelationalOperator2_i) {
      rtb_Add_k = rtb_Sum_l3;
    }

    /* End of Switch: '<S336>/Switch' */

    /* Sum: '<S336>/Add1' incorporates:
     *  Constant: '<S336>/TwoSampleBuffer ToIgnore'
     */
    rtb_Add1_e = (int8_T)(rtb_Add_k - 2);

    /* Logic: '<S336>/Logical Operator' incorporates:
     *  Constant: '<S336>/TwoSampleBuffer ToIgnore'
     *  RelationalOperator: '<S336>/Relational Operator1'
     */
    rtb_LogicalOperator_kz = (rtb_RelationalOperator2_i && (rtb_Sum_l3 > 2));

    /* Outputs for Enabled SubSystem: '<S336>/Collect Average' */
    BaseEngineController_LS_CollectAverage(rtb_LogicalOperator_kz, rtb_Add1_e,
      rtb_Merge_jq, &BaseEngineController_LS_B.s336_CollectAverage,
      &BaseEngineController_LS_DWork.s336_CollectAverage);

    /* End of Outputs for SubSystem: '<S336>/Collect Average' */

    /* Update for UnitDelay: '<S336>/Unit Delay' */
    BaseEngineController_LS_DWork.s336_UnitDelay_DSTATE = rtb_Add_k;
  } else {
    if (BaseEngineController_LS_DWork.s330_CaptureSignalAtStartup_MODE) {
      /* Disable for Enabled SubSystem: '<S336>/Collect Average' */
      BaseEngineController_LS_CollectAverage_Disable
        (&BaseEngineController_LS_DWork.s336_CollectAverage);

      /* End of Disable for SubSystem: '<S336>/Collect Average' */
      BaseEngineController_LS_DWork.s330_CaptureSignalAtStartup_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S330>/Capture Signal At Startup' */

  /* If: '<S338>/If' incorporates:
   *  Inport: '<S344>/In1'
   *  Inport: '<S345>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S338>/override_enable'
   *  UnitDelay: '<S338>/Unit Delay'
   */
  if ((BARO_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S338>/NewValue' incorporates:
     *  ActionPort: '<S344>/Action Port'
     */
    rtb_Merge_b3 = BaseEngineController_LS_DWork.s338_UnitDelay_DSTATE;

    /* End of Outputs for SubSystem: '<S338>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S338>/OldValue' incorporates:
     *  ActionPort: '<S345>/Action Port'
     */
    rtb_Merge_b3 = BaseEngineController_LS_B.s336_CollectAverage.s339_Product;

    /* End of Outputs for SubSystem: '<S338>/OldValue' */
  }

  /* End of If: '<S338>/If' */

  /* Sum: '<S338>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S338>/offset'
   */
  BaseEngineController_LS_B.s338_Sum = rtb_Merge_b3 + (BARO_offset_DataStore());

  /* S-Function Block: <S337>/motohawk_prelookup2 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (VEIdxIn_DataStore()) = BaseEngineController_LS_B.s502_Merge;
    (VEIdxIdx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s502_Merge, (VEIdxIdxArr_DataStore()), 17,
       (VEIdxIdx_DataStore()));
    rtb_motohawk_prelookup2_c = (VEIdxIdx_DataStore());
  }

  /* S-Function Block: <S337>/motohawk_interpolation_2d */
  {
    extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
      real_T *map_data, uint32_T row_sz, uint32_T col_sz);
    rtb_motohawk_interpolation_2d = TableInterpolation2D_real_T
      (rtb_motohawk_prelookup2_c, BaseEngineController_LS_B.s360_Indexes,
       (real_T *) ((VolEffMap_DataStore())), 17, 17);
    (VolEff_DataStore()) = rtb_motohawk_interpolation_2d;
  }

  /* S-Function Block: <S337>/motohawk_interpolation_2d2 */
  {
    extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
      real_T *map_data, uint32_T row_sz, uint32_T col_sz);
    rtb_motohawk_interpolation_2d2 = TableInterpolation2D_real_T
      (rtb_motohawk_prelookup2_c, BaseEngineController_LS_B.s360_Indexes,
       (real_T *) ((VolEffAdaptMap_DataStore())), 17, 17);
    (VolEffAdapt_DataStore()) = rtb_motohawk_interpolation_2d2;
  }

  /* Sum: '<S337>/Sum' incorporates:
   *  S-Function (motohawk_sfun_interpolation_2d): '<S337>/motohawk_interpolation_2d'
   *  S-Function (motohawk_sfun_interpolation_2d): '<S337>/motohawk_interpolation_2d2'
   *  S-Function (motohawk_sfun_prelookup): '<S337>/motohawk_prelookup2'
   */
  rtb_Sum_ol = rtb_motohawk_interpolation_2d + rtb_motohawk_interpolation_2d2;

  /* Saturate: '<S330>/Saturation1' */
  rtb_Saturation1 = BaseEngineController_LS_B.s338_Sum >= 1.0 ?
    BaseEngineController_LS_B.s338_Sum : 1.0;

  /* S-Function Block: <S337>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (BARO09Idx_DataStore()) = TablePrelookup_real_T(rtb_Saturation1,
      (BARO09IdxArr_DataStore()), 9, (BARO09Idx_DataStore()));
    rtb_motohawk_prelookup1_c = (BARO09Idx_DataStore());
  }

  /* S-Function Block: <S337>/motohawk_interpolation_1d1 */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_motohawk_interpolation_1d1_j = TableInterpolation1D_real_T
      (rtb_motohawk_prelookup1_c, (real_T *) ((VEBaroCorrTbl_DataStore())), 9);
    (VEBaroCorr_DataStore()) = rtb_motohawk_interpolation_1d1_j;
  }

  /* S-Function Block: <S358>/motohawk_prelookup2 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (IAT17In_DataStore()) = BaseEngineController_LS_B.s649_Merge;
    (IAT17Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s649_Merge, (IAT17IdxArr_DataStore()), 17,
       (IAT17Idx_DataStore()));
    rtb_motohawk_prelookup2_b = (IAT17Idx_DataStore());
  }

  /* S-Function Block: <S337>/motohawk_interpolation_2d1 */
  {
    extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
      real_T *map_data, uint32_T row_sz, uint32_T col_sz);
    rtb_motohawk_interpolation_2d1_n = TableInterpolation2D_real_T
      (rtb_motohawk_prelookup2_b, rtb_motohawk_prelookup1_h, (real_T *)
       ((VETempCorrMap_DataStore())), 17, 9);
    (VETempCorr_DataStore()) = rtb_motohawk_interpolation_2d1_n;
  }

  /* Product: '<S337>/Nominal Air Flow Rate' incorporates:
   *  Constant: '<S337>/Gas Const [J//kg-K]'
   *  Constant: '<S337>/Units Equivalency Factor'
   *  DataTypeConversion: '<S337>/Data Type Conversion'
   *  Fcn: '<S341>/C to K'
   *  S-Function (motohawk_sfun_data_read): '<S337>/Cylinder Swept Volume [cm3]'
   *  S-Function (motohawk_sfun_data_read): '<S337>/Number of Combustion Events Per Revolution'
   *  S-Function (motohawk_sfun_interpolation_1d): '<S337>/motohawk_interpolation_1d1'
   *  S-Function (motohawk_sfun_interpolation_2d): '<S337>/motohawk_interpolation_2d1'
   *  S-Function (motohawk_sfun_prelookup): '<S337>/motohawk_prelookup1'
   *  S-Function (motohawk_sfun_prelookup): '<S357>/motohawk_prelookup1'
   *  S-Function (motohawk_sfun_prelookup): '<S358>/motohawk_prelookup2'
   *  Saturate: '<S330>/Saturation1'
   */
  BaseEngineController_LS_B.s337_NominalAirFlowRate =
    BaseEngineController_LS_B.s459_Sum1 * BaseEngineController_LS_B.s502_Merge *
    rtb_motohawk_interpolation_1d1_j * rtb_motohawk_interpolation_2d1_n *
    CylSweptVol_DataStore() * (real_T)((uint8_T)CombEventsPerRev_DataStore()) /
    (BaseEngineController_LS_B.s649_Merge + 273.2) / 60.0 / 287.0;

  /* Product: '<S337>/Model Air Mass Flow Rate' */
  BaseEngineController_LS_B.s337_ModelAirMassFlowRate = rtb_Sum_ol *
    BaseEngineController_LS_B.s337_NominalAirFlowRate;

  /* S-Function Block: <S423>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s423_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_m = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S423>/Product' incorporates:
   *  MinMax: '<S423>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S423>/motohawk_calibration'
   */
  rtb_Switch_m /= (rtb_Switch_m >= (MAFFiltConst_DataStore())) || rtIsNaN
    ((MAFFiltConst_DataStore())) ? rtb_Switch_m : (MAFFiltConst_DataStore());

  /* Logic: '<S410>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S410>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S410>/motohawk_fault_status4'
   */
  rtb_RelationalOperator_ipv = (IsFaultActive(68) || IsFaultActive(69));

  /* Logic: '<S410>/Logical Operator6' */
  rtb_RelationalOperator2_i = !rtb_RelationalOperator_ipv;

  /* Logic: '<S410>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S410>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S410>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_j = (IsFaultSuspected(68) || IsFaultSuspected(69));

  /* S-Function Block: <S402>/motohawk_frequency_in2 Frequency Input Get: MAF_Pin */
  {
    extern NativeError_S MAF_Pin_FrequencyInput_Get(uint32_T *frequency, int16_T
      *duty_cycle);
    MAF_Pin_FrequencyInput_Get(&rtb_DataTypeConversion6,
      &rtb_DataTypeConversion2_pj);
  }

  /* DataTypeConversion: '<S402>/Data Type Conversion' */
  rtb_Switch_bn = (real_T)rtb_DataTypeConversion6;

  /* Gain: '<S402>/Gain' */
  BaseEngineController_LS_B.s402_Gain = 0.01 * rtb_Switch_bn;

  /* S-Function Block: <S428>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (MAFIdx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s402_Gain, (MAFIdxArr_DataStore()), 13,
       (MAFIdx_DataStore()));
    rtb_motohawk_prelookup_k = (MAFIdx_DataStore());
  }

  /* S-Function Block: <S428>/motohawk_interpolation_1d */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    BaseEngineController_LS_B.s428_motohawk_interpolation_1d =
      TableInterpolation1D_real_T(rtb_motohawk_prelookup_k, (real_T *)
      ((MAFTbl_DataStore())), 13);
  }

  /* UnitDelay: '<S410>/Unit Delay' */
  rtb_UnitDelay_nr = BaseEngineController_LS_DWork.s410_UnitDelay_DSTATE;

  /* If: '<S410>/If' incorporates:
   *  Logic: '<S410>/Logical Operator5'
   */
  if (rtb_RelationalOperator2_i && rtb_LogicalOperator1_j) {
    /* Outputs for IfAction SubSystem: '<S410>/If Action Subsystem' incorporates:
     *  ActionPort: '<S424>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay_nr, &rtb_Merge_dv);

    /* End of Outputs for SubSystem: '<S410>/If Action Subsystem' */
  } else if (rtb_RelationalOperator_ipv) {
    /* Outputs for IfAction SubSystem: '<S410>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S425>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((MAFDefault_DataStore()),
      &rtb_Merge_dv);

    /* End of Outputs for SubSystem: '<S410>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S410>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S426>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      (BaseEngineController_LS_B.s428_motohawk_interpolation_1d, &rtb_Merge_dv);

    /* End of Outputs for SubSystem: '<S410>/If Action Subsystem2' */
  }

  /* End of If: '<S410>/If' */

  /* Sum: '<S429>/Sum1' incorporates:
   *  Constant: '<S429>/Constant'
   *  Product: '<S429>/Product'
   *  Product: '<S429>/Product1'
   *  Sum: '<S429>/Sum'
   *  UnitDelay: '<S429>/Unit Delay'
   */
  rtb_Sum1_fm = (1.0 - rtb_Switch_m) *
    BaseEngineController_LS_DWork.s429_UnitDelay_DSTATE + rtb_Merge_dv *
    rtb_Switch_m;

  /* If: '<S427>/If' incorporates:
   *  Inport: '<S430>/In1'
   *  Inport: '<S431>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S427>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S427>/override_enable'
   */
  if ((MAF_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S427>/NewValue' incorporates:
     *  ActionPort: '<S430>/Action Port'
     */
    BaseEngineController_LS_B.s427_Merge = (MAF_new_DataStore());

    /* End of Outputs for SubSystem: '<S427>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S427>/OldValue' incorporates:
     *  ActionPort: '<S431>/Action Port'
     */
    BaseEngineController_LS_B.s427_Merge = rtb_Sum1_fm;

    /* End of Outputs for SubSystem: '<S427>/OldValue' */
  }

  /* End of If: '<S427>/If' */

  /* MultiPortSwitch: '<S337>/Multiport Switch' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S337>/motohawk_calibration1'
   */
  if (((uint8_T)(MAF_Source_DataStore())) == 0) {
    BaseEngineController_LS_B.s337_MultiportSwitch =
      BaseEngineController_LS_B.s337_ModelAirMassFlowRate;
  } else {
    BaseEngineController_LS_B.s337_MultiportSwitch =
      BaseEngineController_LS_B.s427_Merge;
  }

  /* End of MultiPortSwitch: '<S337>/Multiport Switch' */
  /* S-Function Block: <S347>/motohawk_delta_time */
  rtb_Switch_bn = 0.005;

  /* UnitDelay: '<S347>/Unit Delay2' */
  rtb_Product1_l2 = BaseEngineController_LS_DWork.s347_UnitDelay2_DSTATE;

  /* RelationalOperator: '<S347>/Relational Operator4' incorporates:
   *  UnitDelay: '<S347>/Unit Delay2'
   */
  BaseEngineController_LS_B.s347_RelationalOperator4 =
    ((BaseEngineController_LS_DWork.s347_UnitDelay2_DSTATE <
      BaseEngineController_LS_B.s459_Sum1));

  /* Outputs for Enabled SubSystem: '<S347>/IncreasingFilter' incorporates:
   *  EnablePort: '<S351>/Enable'
   */
  if (BaseEngineController_LS_B.s347_RelationalOperator4) {
    /* S-Function (motohawk_sfun_calibration): '<S351>/motohawk_calibration1' */
    BaseEngineController_LS_B.s347_Merge = (SSRPMIncFiltC_DataStore());
  }

  /* End of Outputs for SubSystem: '<S347>/IncreasingFilter' */

  /* Outputs for Enabled SubSystem: '<S347>/DecreasingFilter' incorporates:
   *  EnablePort: '<S349>/Enable'
   */
  /* RelationalOperator: '<S347>/Relational Operator3' */
  if (rtb_Product1_l2 > BaseEngineController_LS_B.s459_Sum1) {
    /* S-Function (motohawk_sfun_calibration): '<S349>/motohawk_calibration2' */
    BaseEngineController_LS_B.s347_Merge = (SSRPMDecFiltC_DataStore());
  }

  /* End of RelationalOperator: '<S347>/Relational Operator3' */
  /* End of Outputs for SubSystem: '<S347>/DecreasingFilter' */

  /* Product: '<S347>/Product' incorporates:
   *  MinMax: '<S347>/MinMax'
   */
  rtb_Switch_bn /= (rtb_Switch_bn >= BaseEngineController_LS_B.s347_Merge) ||
    rtIsNaN(BaseEngineController_LS_B.s347_Merge) ? rtb_Switch_bn :
    BaseEngineController_LS_B.s347_Merge;

  /* Sum: '<S350>/Sum1' incorporates:
   *  Constant: '<S350>/Constant'
   *  Product: '<S350>/Product'
   *  Product: '<S350>/Product1'
   *  Sum: '<S350>/Sum'
   *  UnitDelay: '<S350>/Unit Delay'
   */
  BaseEngineController_LS_B.s350_Sum1 = (1.0 - rtb_Switch_bn) *
    BaseEngineController_LS_DWork.s350_UnitDelay_DSTATE +
    BaseEngineController_LS_B.s459_Sum1 * rtb_Switch_bn;

  /* Sum: '<S346>/Sum1' */
  rtb_Switch_bn = BaseEngineController_LS_B.s459_Sum1 -
    BaseEngineController_LS_B.s350_Sum1;

  /* Abs: '<S346>/Abs1' */
  rtb_Switch_bn = fabs(rtb_Switch_bn);

  /* RelationalOperator: '<S346>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S346>/Steady-state RPM Tolerance [RPM]'
   */
  rtb_RelationalOperator2_i = (rtb_Switch_bn <= (SSRPMTol_DataStore()));

  /* RelationalOperator: '<S346>/Relational Operator2' incorporates:
   *  Constant: '<S346>/Constant'
   */
  rtb_LogicalOperator1_j = (BaseEngineController_LS_B.s459_Sum1 > 0.0);

  /* S-Function Block: <S348>/motohawk_delta_time */
  rtb_Switch_bn = 0.005;

  /* UnitDelay: '<S348>/Unit Delay2' */
  rtb_Product1_l2 = BaseEngineController_LS_DWork.s348_UnitDelay2_DSTATE;

  /* RelationalOperator: '<S348>/Relational Operator4' incorporates:
   *  UnitDelay: '<S348>/Unit Delay2'
   */
  BaseEngineController_LS_B.s348_RelationalOperator4 =
    ((BaseEngineController_LS_DWork.s348_UnitDelay2_DSTATE <
      BaseEngineController_LS_B.s502_Merge));

  /* Outputs for Enabled SubSystem: '<S348>/IncreasingFilter' incorporates:
   *  EnablePort: '<S354>/Enable'
   */
  if (BaseEngineController_LS_B.s348_RelationalOperator4) {
    /* S-Function (motohawk_sfun_calibration): '<S354>/motohawk_calibration1' */
    BaseEngineController_LS_B.s348_Merge = (SSLoadIncFiltC_DataStore());
  }

  /* End of Outputs for SubSystem: '<S348>/IncreasingFilter' */

  /* Outputs for Enabled SubSystem: '<S348>/DecreasingFilter' incorporates:
   *  EnablePort: '<S352>/Enable'
   */
  /* RelationalOperator: '<S348>/Relational Operator3' */
  if (rtb_Product1_l2 > BaseEngineController_LS_B.s502_Merge) {
    /* S-Function (motohawk_sfun_calibration): '<S352>/motohawk_calibration2' */
    BaseEngineController_LS_B.s348_Merge = (SSLoadDecFiltC_DataStore());
  }

  /* End of RelationalOperator: '<S348>/Relational Operator3' */
  /* End of Outputs for SubSystem: '<S348>/DecreasingFilter' */

  /* Product: '<S348>/Product' incorporates:
   *  MinMax: '<S348>/MinMax'
   */
  rtb_Switch_bn /= (rtb_Switch_bn >= BaseEngineController_LS_B.s348_Merge) ||
    rtIsNaN(BaseEngineController_LS_B.s348_Merge) ? rtb_Switch_bn :
    BaseEngineController_LS_B.s348_Merge;

  /* Sum: '<S353>/Sum1' incorporates:
   *  Constant: '<S353>/Constant'
   *  Product: '<S353>/Product'
   *  Product: '<S353>/Product1'
   *  Sum: '<S353>/Sum'
   *  UnitDelay: '<S353>/Unit Delay'
   */
  BaseEngineController_LS_B.s353_Sum1 = (1.0 - rtb_Switch_bn) *
    BaseEngineController_LS_DWork.s353_UnitDelay_DSTATE +
    BaseEngineController_LS_B.s502_Merge * rtb_Switch_bn;

  /* Sum: '<S346>/Sum' */
  rtb_Switch_bn = BaseEngineController_LS_B.s502_Merge -
    BaseEngineController_LS_B.s353_Sum1;

  /* Abs: '<S346>/Abs' */
  rtb_Switch_bn = fabs(rtb_Switch_bn);

  /* Logic: '<S346>/Logical Operator' incorporates:
   *  RelationalOperator: '<S346>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S346>/Steady-state Torque Tolerance [N.m]'
   */
  BaseEngineController_LS_B.s346_LogicalOperator = ((rtb_RelationalOperator2_i &&
    rtb_LogicalOperator1_j && (rtb_Switch_bn <= (SSLoadTol_DataStore()))));

  /* S-Function Block: <S399>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (MAFPort05In_DataStore()) = BaseEngineController_LS_B.s337_MultiportSwitch;
    (MAFPort05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s337_MultiportSwitch,
       (MAFPort05IdxArr_DataStore()), 5, (MAFPort05Idx_DataStore()));
    rtb_motohawk_prelookup_o = (MAFPort05Idx_DataStore());
  }

  /* RelationalOperator: '<S373>/RelOp' incorporates:
   *  Constant: '<S373>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S333>/motohawk_data_read'
   */
  rtb_RelationalOperator2_i = (((uint8_T)EngineState_DataStore()) == 1);

  /* Outputs for Enabled SubSystem: '<S333>/Capture ECT At Startup' incorporates:
   *  EnablePort: '<S366>/Enable'
   */
  if (rtb_RelationalOperator2_i) {
    if (!BaseEngineController_LS_DWork.s333_CaptureECTAtStartup_MODE) {
      /* InitializeConditions for UnitDelay: '<S366>/Unit Delay' */
      BaseEngineController_LS_DWork.s366_UnitDelay_DSTATE = 0;
      BaseEngineController_LS_DWork.s333_CaptureECTAtStartup_MODE = TRUE;
    }

    /* Sum: '<S366>/Sum' incorporates:
     *  Constant: '<S366>/Constant'
     *  UnitDelay: '<S366>/Unit Delay'
     */
    rtb_Add_k = (int8_T)(BaseEngineController_LS_DWork.s366_UnitDelay_DSTATE + 1);

    /* Sum: '<S366>/Add' incorporates:
     *  Constant: '<S366>/TwoSampleBuffer ToIgnore'
     *  S-Function (motohawk_sfun_calibration): '<S366>/motohawk_calibration'
     */
    rtb_Sum_l3 = (int8_T)(((int8_T)(ECT_KeyUp_Count_DataStore())) + 2);

    /* RelationalOperator: '<S366>/Relational Operator' */
    rtb_LogicalOperator1_j = (rtb_Add_k <= rtb_Sum_l3);

    /* Switch: '<S366>/Switch' */
    if (rtb_LogicalOperator1_j) {
      rtb_Sum_l3 = rtb_Add_k;
    }

    /* End of Switch: '<S366>/Switch' */

    /* Sum: '<S366>/Add1' incorporates:
     *  Constant: '<S366>/TwoSampleBuffer ToIgnore'
     */
    rtb_Add1_k3 = (int8_T)(rtb_Sum_l3 - 2);

    /* Logic: '<S366>/Logical Operator' incorporates:
     *  Constant: '<S366>/TwoSampleBuffer ToIgnore'
     *  RelationalOperator: '<S366>/Relational Operator1'
     */
    rtb_LogicalOperator_mr = (rtb_LogicalOperator1_j && (rtb_Add_k > 2));

    /* Outputs for Enabled SubSystem: '<S366>/Collect Average' */
    BaseEngineController_LS_CollectAverage(rtb_LogicalOperator_mr, rtb_Add1_k3,
      BaseEngineController_LS_B.s614_Merge,
      &BaseEngineController_LS_B.s366_CollectAverage,
      &BaseEngineController_LS_DWork.s366_CollectAverage);

    /* End of Outputs for SubSystem: '<S366>/Collect Average' */

    /* Update for UnitDelay: '<S366>/Unit Delay' */
    BaseEngineController_LS_DWork.s366_UnitDelay_DSTATE = rtb_Sum_l3;
  } else {
    if (BaseEngineController_LS_DWork.s333_CaptureECTAtStartup_MODE) {
      /* Disable for Enabled SubSystem: '<S366>/Collect Average' */
      BaseEngineController_LS_CollectAverage_Disable
        (&BaseEngineController_LS_DWork.s366_CollectAverage);

      /* End of Disable for SubSystem: '<S366>/Collect Average' */
      BaseEngineController_LS_DWork.s333_CaptureECTAtStartup_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S333>/Capture ECT At Startup' */
  /* S-Function Block: <S397>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (ECT_KeyUp09In_DataStore()) =
      BaseEngineController_LS_B.s366_CollectAverage.s339_Product;
    (ECT_KeyUp09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s366_CollectAverage.s339_Product,
       (ECT_KeyUp09IdxArr_DataStore()), 9, (ECT_KeyUp09Idx_DataStore()));
    rtb_motohawk_prelookup_j = (ECT_KeyUp09Idx_DataStore());
  }

  /* Sum: '<S386>/Sum2' incorporates:
   *  UnitDelay: '<S386>/Unit Delay'
   */
  rtb_Product1_l2 = BaseEngineController_LS_B.s459_Sum1 -
    BaseEngineController_LS_DWork.s386_UnitDelay_DSTATE;

  /* S-Function Block: <S386>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s386_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_o = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S386>/Product' incorporates:
   *  S-Function (motohawk_sfun_delta_time): '<S386>/motohawk_delta_time'
   */
  rtb_Product1_l2 /= rtb_motohawk_delta_time_o;

  /* S-Function Block: <S387>/motohawk_delta_time */
  rtb_Switch_bn = 0.005;

  /* Product: '<S387>/Product' incorporates:
   *  MinMax: '<S387>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S387>/motohawk_calibration'
   */
  rtb_Switch_bn /= (rtb_Switch_bn >= (EngineAccelFiltConst_DataStore())) ||
    rtIsNaN((EngineAccelFiltConst_DataStore())) ? rtb_Switch_bn :
    (EngineAccelFiltConst_DataStore());

  /* Sum: '<S388>/Sum1' incorporates:
   *  Constant: '<S388>/Constant'
   *  Product: '<S388>/Product'
   *  Product: '<S388>/Product1'
   *  Sum: '<S388>/Sum'
   *  UnitDelay: '<S388>/Unit Delay'
   */
  BaseEngineController_LS_B.s388_Sum1 = (1.0 - rtb_Switch_bn) *
    BaseEngineController_LS_DWork.s388_UnitDelay_DSTATE + rtb_Product1_l2 *
    rtb_Switch_bn;

  /* S-Function Block: <S334>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (RPMAccel17In_DataStore()) = BaseEngineController_LS_B.s388_Sum1;
    (RPMAccel17Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s388_Sum1, (RPMAccel17IdxArr_DataStore()), 17,
       (RPMAccel17Idx_DataStore()));
    BaseEngineController_LS_B.s334_RPMAccel17Idx = (RPMAccel17Idx_DataStore());
  }

  /* S-Function Block: <S334>/motohawk_prelookup2 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (TimeSinceRun09In_DataStore()) = BaseEngineController_LS_B.s394_Switch;
    (TimeSinceRun09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s394_Switch, (TimeSinceRun09IdxArr_DataStore()),
       9, (TimeSinceRun09Idx_DataStore()));
    rtb_TimeSinceRun09 = (TimeSinceRun09Idx_DataStore());
  }

  /* Outputs for Enabled SubSystem: '<S333>/Capture IAT At Startup' incorporates:
   *  EnablePort: '<S367>/Enable'
   */
  if (rtb_RelationalOperator2_i) {
    if (!BaseEngineController_LS_DWork.s333_CaptureIATAtStartup_MODE) {
      /* InitializeConditions for UnitDelay: '<S367>/Unit Delay' */
      BaseEngineController_LS_DWork.s367_UnitDelay_DSTATE = 0;
      BaseEngineController_LS_DWork.s333_CaptureIATAtStartup_MODE = TRUE;
    }

    /* Sum: '<S367>/Sum' incorporates:
     *  Constant: '<S367>/Constant'
     *  UnitDelay: '<S367>/Unit Delay'
     */
    rtb_Add_k = (int8_T)(BaseEngineController_LS_DWork.s367_UnitDelay_DSTATE + 1);

    /* Sum: '<S367>/Add' incorporates:
     *  Constant: '<S367>/TwoSampleBuffer ToIgnore'
     *  S-Function (motohawk_sfun_calibration): '<S367>/motohawk_calibration'
     */
    rtb_Sum_l3 = (int8_T)(((int8_T)(IAT_KeyUp_Count_DataStore())) + 2);

    /* RelationalOperator: '<S367>/Relational Operator' */
    rtb_RelationalOperator2_i = (rtb_Add_k <= rtb_Sum_l3);

    /* Switch: '<S367>/Switch' */
    if (rtb_RelationalOperator2_i) {
      rtb_Sum_l3 = rtb_Add_k;
    }

    /* End of Switch: '<S367>/Switch' */

    /* Sum: '<S367>/Add1' incorporates:
     *  Constant: '<S367>/TwoSampleBuffer ToIgnore'
     */
    rtb_Add1_k = (int8_T)(rtb_Sum_l3 - 2);

    /* Logic: '<S367>/Logical Operator' incorporates:
     *  Constant: '<S367>/TwoSampleBuffer ToIgnore'
     *  RelationalOperator: '<S367>/Relational Operator1'
     */
    rtb_LogicalOperator_g5 = (rtb_RelationalOperator2_i && (rtb_Add_k > 2));

    /* Outputs for Enabled SubSystem: '<S367>/Collect Average' */
    BaseEngineController_LS_CollectAverage(rtb_LogicalOperator_g5, rtb_Add1_k,
      BaseEngineController_LS_B.s617_Merge,
      &BaseEngineController_LS_B.s367_CollectAverage,
      &BaseEngineController_LS_DWork.s367_CollectAverage);

    /* End of Outputs for SubSystem: '<S367>/Collect Average' */

    /* Update for UnitDelay: '<S367>/Unit Delay' */
    BaseEngineController_LS_DWork.s367_UnitDelay_DSTATE = rtb_Sum_l3;
  } else {
    if (BaseEngineController_LS_DWork.s333_CaptureIATAtStartup_MODE) {
      /* Disable for Enabled SubSystem: '<S367>/Collect Average' */
      BaseEngineController_LS_CollectAverage_Disable
        (&BaseEngineController_LS_DWork.s367_CollectAverage);

      /* End of Disable for SubSystem: '<S367>/Collect Average' */
      BaseEngineController_LS_DWork.s333_CaptureIATAtStartup_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S333>/Capture IAT At Startup' */
  /* S-Function Block: <S398>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (IAT_KeyUp09In_DataStore()) =
      BaseEngineController_LS_B.s367_CollectAverage.s339_Product;
    (IAT_KeyUp09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s367_CollectAverage.s339_Product,
       (IAT_KeyUp09IdxArr_DataStore()), 9, (IAT_KeyUp09Idx_DataStore()));
    rtb_motohawk_prelookup_l = (IAT_KeyUp09Idx_DataStore());
  }

  /* RelationalOperator: '<S120>/RelOp' incorporates:
   *  Constant: '<S120>/Constant'
   */
  rtb_RelOp_hf = (BaseEngineController_LS_B.s389_State == 3);

  /* S-Function Block: <S402>/motohawk_ain1 Resource: ClutchSw_Pin */
  {
    extern NativeError_S ClutchSw_Pin_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    ClutchSw_Pin_AnalogInput_Get(&rtb_motohawk_ain1, NULL);
  }

  /* DataTypeConversion: '<S408>/Data Type Conversion' incorporates:
   *  S-Function (motohawk_sfun_ain): '<S402>/motohawk_ain1'
   */
  BaseEngineController_LS_B.s408_DataTypeConversion = (real_T)rtb_motohawk_ain1;

  /* RelationalOperator: '<S408>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S408>/SwitchPoint'
   */
  rtb_RelationalOperator2_i = (BaseEngineController_LS_B.s408_DataTypeConversion
    > (ClutchSwSwitchPt_DataStore()));

  /* Logic: '<S408>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S408>/0 = No Inversion 1 = Inversion'
   */
  rtb_RelationalOperator2_i ^= (ClutchSwPolarity_DataStore());

  /* If: '<S417>/If' incorporates:
   *  Inport: '<S418>/In1'
   *  Inport: '<S419>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S417>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S417>/override_enable'
   */
  if ((ClutchSw_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S417>/NewValue' incorporates:
     *  ActionPort: '<S418>/Action Port'
     */
    BaseEngineController_LS_B.s417_Merge = (ClutchSw_new_DataStore());

    /* End of Outputs for SubSystem: '<S417>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S417>/OldValue' incorporates:
     *  ActionPort: '<S419>/Action Port'
     */
    BaseEngineController_LS_B.s417_Merge = rtb_RelationalOperator2_i;

    /* End of Outputs for SubSystem: '<S417>/OldValue' */
  }

  /* End of If: '<S417>/If' */

  /* S-Function Block: <S402>/motohawk_ain6 Resource: ScramblePin */
  {
    extern NativeError_S ScramblePin_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    ScramblePin_AnalogInput_Get(&rtb_motohawk_ain6, NULL);
  }

  /* DataTypeConversion: '<S412>/Data Type Conversion' incorporates:
   *  S-Function (motohawk_sfun_ain): '<S402>/motohawk_ain6'
   */
  BaseEngineController_LS_B.s412_DataTypeConversion = (real_T)rtb_motohawk_ain6;

  /* RelationalOperator: '<S412>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S412>/SwitchPoint'
   */
  rtb_RelationalOperator2_i = (BaseEngineController_LS_B.s412_DataTypeConversion
    > (ScrambleSwitchPt_DataStore()));

  /* Logic: '<S412>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S412>/0 = No Inversion 1 = Inversion'
   */
  rtb_RelationalOperator_ipv = rtb_RelationalOperator2_i ^
    (ScramblePolarity_DataStore());

  /* S-Function Block: <S443>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s443_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_dd = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S443>/Switch' incorporates:
   *  Constant: '<S443>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S443>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S443>/motohawk_delta_time'
   *  Sum: '<S443>/Sum'
   */
  if (rtb_RelationalOperator_ipv) {
    rtb_Switch_bn = rtb_motohawk_delta_time_dd + ScrambleDelay_DataStore();
  } else {
    rtb_Switch_bn = 0.0;
  }

  /* End of Switch: '<S443>/Switch' */
  /* Logic: '<S441>/Logical Operator' incorporates:
   *  RelationalOperator: '<S441>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S412>/motohawk_calibration7'
   */
  rtb_RelationalOperator2_i = (rtb_RelationalOperator_ipv && (rtb_Switch_bn >=
    (ScrambleDebounceDelay_DataStore())));

  /* If: '<S442>/If' incorporates:
   *  Inport: '<S444>/In1'
   *  Inport: '<S445>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S442>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S442>/override_enable'
   */
  if ((Scramble_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S442>/NewValue' incorporates:
     *  ActionPort: '<S444>/Action Port'
     */
    BaseEngineController_LS_B.s442_Merge = (Scramble_new_DataStore());

    /* End of Outputs for SubSystem: '<S442>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S442>/OldValue' incorporates:
     *  ActionPort: '<S445>/Action Port'
     */
    BaseEngineController_LS_B.s442_Merge = rtb_RelationalOperator2_i;

    /* End of Outputs for SubSystem: '<S442>/OldValue' */
  }

  /* End of If: '<S442>/If' */

  /* S-Function Block: <S402>/motohawk_din2 Resource: TwoStepPin */
  {
    extern NativeError_S TwoStepPin_DigitalInput_Get(boolean_T *out, uint16_T
      *status);
    TwoStepPin_DigitalInput_Get(&BaseEngineController_LS_B.s402_motohawk_din2,
      NULL);
  }

  /* Logic: '<S413>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S413>/0 = No Inversion 1 = Inversion'
   */
  rtb_RelationalOperator_ipv = BaseEngineController_LS_B.s402_motohawk_din2 ^
    (TwoStepPolarity_DataStore());

  /* S-Function Block: <S448>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s448_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_g = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S448>/Switch' incorporates:
   *  Constant: '<S448>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S448>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S448>/motohawk_delta_time'
   *  Sum: '<S448>/Sum'
   */
  if (rtb_RelationalOperator_ipv) {
    rtb_Switch_m = rtb_motohawk_delta_time_g + TwoStepTimer_DataStore();
  } else {
    rtb_Switch_m = 0.0;
  }

  /* End of Switch: '<S448>/Switch' */
  /* Logic: '<S446>/Logical Operator' incorporates:
   *  RelationalOperator: '<S446>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S413>/motohawk_calibration7'
   */
  rtb_RelationalOperator2_i = (rtb_RelationalOperator_ipv && (rtb_Switch_m >=
    (TwoStepDebounceDelay_DataStore())));

  /* If: '<S447>/If' incorporates:
   *  Inport: '<S449>/In1'
   *  Inport: '<S450>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S447>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S447>/override_enable'
   */
  if ((TwoStep_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S447>/NewValue' incorporates:
     *  ActionPort: '<S449>/Action Port'
     */
    BaseEngineController_LS_B.s447_Merge = (TwoStep_new_DataStore());

    /* End of Outputs for SubSystem: '<S447>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S447>/OldValue' incorporates:
     *  ActionPort: '<S450>/Action Port'
     */
    BaseEngineController_LS_B.s447_Merge = rtb_RelationalOperator2_i;

    /* End of Outputs for SubSystem: '<S447>/OldValue' */
  }

  /* End of If: '<S447>/If' */

  /* S-Function Block: <S506>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s506_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_m0 = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S506>/Product' incorporates:
   *  MinMax: '<S506>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S506>/motohawk_calibration'
   */
  rtb_DataTypeConversion_m0 /= (rtb_DataTypeConversion_m0 >=
    (MAPTimeFilterConst_DataStore())) || rtIsNaN((MAPTimeFilterConst_DataStore()))
    ? rtb_DataTypeConversion_m0 : (MAPTimeFilterConst_DataStore());

  /* Sum: '<S511>/Sum1' incorporates:
   *  Constant: '<S511>/Constant'
   *  Product: '<S511>/Product'
   *  Product: '<S511>/Product1'
   *  Sum: '<S511>/Sum'
   *  UnitDelay: '<S511>/Unit Delay'
   */
  rtb_Sum1_mzy = (1.0 - rtb_DataTypeConversion_m0) *
    BaseEngineController_LS_DWork.s511_UnitDelay_DSTATE + rtb_Merge_jq *
    rtb_DataTypeConversion_m0;

  /* If: '<S510>/If' incorporates:
   *  Inport: '<S512>/In1'
   *  Inport: '<S513>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S510>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S510>/override_enable'
   */
  if ((MAPTime_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S510>/NewValue' incorporates:
     *  ActionPort: '<S512>/Action Port'
     */
    BaseEngineController_LS_B.s510_Merge = (MAPTime_new_DataStore());

    /* End of Outputs for SubSystem: '<S510>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S510>/OldValue' incorporates:
     *  ActionPort: '<S513>/Action Port'
     */
    BaseEngineController_LS_B.s510_Merge = rtb_Sum1_mzy;

    /* End of Outputs for SubSystem: '<S510>/OldValue' */
  }

  /* End of If: '<S510>/If' */

  /* Outputs for Enabled SubSystem: '<S15>/Run' incorporates:
   *  EnablePort: '<S119>/Enable'
   */
  if (rtb_RelOp_hf) {
    if (!BaseEngineController_LS_DWork.s15_Run_MODE) {
      /* InitializeConditions for UnitDelay: '<S146>/Unit Delay' */
      BaseEngineController_LS_DWork.s146_UnitDelay_DSTATE = FALSE;

      /* InitializeConditions for UnitDelay: '<S145>/Unit Delay' */
      BaseEngineController_LS_DWork.s145_UnitDelay_DSTATE = FALSE;

      /* InitializeConditions for UnitDelay: '<S143>/Unit Delay' */
      BaseEngineController_LS_DWork.s143_UnitDelay_DSTATE = FALSE;

      /* InitializeConditions for UnitDelay: '<S144>/Unit Delay' */
      BaseEngineController_LS_DWork.s144_UnitDelay_DSTATE = FALSE;

      /* S-Function Block: <S172>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BaseEngineController_LS_DWork.s172_motohawk_delta_time_DWORK1 = now -
          Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
      }

      /* InitializeConditions for UnitDelay: '<S171>/Unit Delay' */
      BaseEngineController_LS_DWork.s171_UnitDelay_DSTATE = FALSE;

      /* InitializeConditions for Stateflow: '<S169>/Chart' */
      BaseEngineController_LS_DWork.s170_is_active_c1_BaseEngineController_LS =
        0U;
      BaseEngineController_LS_DWork.s170_is_c1_BaseEngineController_LS = 0U;
      BaseEngineController_LS_DWork.s170_count = 0.0;
      BaseEngineController_LS_DWork.s170_EquivStart = 0.0;
      BaseEngineController_LS_B.s170_EquivOut = 0.0;
      BaseEngineController_LS_B.s170_SparkOut = 0.0;

      /* InitializeConditions for S-Function (motohawk_sfun_trigger): '<S119>/motohawk_trigger1' */
      if (rtmIsFirstInitCond(BaseEngineController_LS_M)) {
        /* Initial conditions for function-call system: '<S119>/MinGovernor' */

        /* InitializeConditions for Stateflow: '<S221>/IdleStateMachine' */
        BaseEngineController_LS_IdleStateMachine_Init();

        /* S-Function Block: <S220>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_LS_DWork.s220_motohawk_delta_time_DWORK1 = now -
            Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }

        /* S-Function Block: <S224>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_LS_DWork.s224_motohawk_delta_time_DWORK1 = now -
            Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }

        /* InitializeConditions for Atomic SubSystem: '<S136>/AiflowOffset' */

        /* S-Function Block: <S227>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_LS_DWork.s227_motohawk_delta_time_DWORK1 = now -
            Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }

        /* End of InitializeConditions for SubSystem: '<S136>/AiflowOffset' */

        /* S-Function Block: <S252>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_LS_DWork.s252_motohawk_delta_time_DWORK1 = now -
            Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }
      }

      if (rtmIsFirstInitCond(BaseEngineController_LS_M)) {
        /* Initial conditions for function-call system: '<S119>/MaxGovernor' */

        /* S-Function Block: <S203>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_LS_DWork.s203_motohawk_delta_time_DWORK1 = now -
            Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }

        /* S-Function Block: <S214>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_LS_DWork.s214_motohawk_delta_time_DWORK1 = now -
            Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }
      }

      if (rtmIsFirstInitCond(BaseEngineController_LS_M)) {
        /* Initial conditions for function-call system: '<S119>/Spark Manager' */

        /* InitializeConditions for UnitDelay: '<S276>/Initial Condition is True' */
        BaseEngineController_LS_DWork.s276_InitialConditionisTrue_DSTATE = TRUE;
      }

      /* InitializeConditions for UnitDelay: '<S130>/Unit Delay' */
      BaseEngineController_LS_DWork.s130_UnitDelay_DSTATE = 0.0;

      /* InitializeConditions for UnitDelay: '<S165>/Unit Delay' */
      BaseEngineController_LS_DWork.s165_UnitDelay_DSTATE = 0.0;

      /* S-Function Block: <S155>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BaseEngineController_LS_DWork.s155_motohawk_delta_time_DWORK1 = now -
          Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
      }

      /* InitializeConditions for UnitDelay: '<S155>/Unit Delay' */
      BaseEngineController_LS_DWork.s155_UnitDelay_DSTATE = 0.0;

      /* InitializeConditions for UnitDelay: '<S164>/Unit Delay' */
      BaseEngineController_LS_DWork.s164_UnitDelay_DSTATE = 0.0;

      /* S-Function Block: <S165>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BaseEngineController_LS_DWork.s165_motohawk_delta_time_DWORK1 = now -
          Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
      }

      /* InitializeConditions for UnitDelay: '<S176>/Unit Delay' */
      BaseEngineController_LS_DWork.s176_UnitDelay_DSTATE = FALSE;

      /* InitializeConditions for UnitDelay: '<S177>/Unit Delay' */
      BaseEngineController_LS_DWork.s177_UnitDelay_DSTATE = FALSE;

      /* InitializeConditions for UnitDelay: '<S178>/Unit Delay' */
      BaseEngineController_LS_DWork.s178_UnitDelay_DSTATE = FALSE;

      /* InitializeConditions for Atomic SubSystem: '<S119>/O2 Control' */

      /* InitializeConditions for Atomic SubSystem: '<S137>/O2 PID Controller' */
      /* InitializeConditions for UnitDelay: '<S268>/Unit Delay' */
      BaseEngineController_LS_DWork.s268_UnitDelay_DSTATE = FALSE;

      /* InitializeConditions for UnitDelay: '<S265>/Unit Delay' */
      BaseEngineController_LS_DWork.s265_UnitDelay_DSTATE = 0.0;

      /* InitializeConditions for UnitDelay: '<S264>/Unit Delay' */
      BaseEngineController_LS_DWork.s264_UnitDelay_DSTATE = 0.0;

      /* S-Function Block: <S265>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BaseEngineController_LS_DWork.s265_motohawk_delta_time_DWORK1 = now -
          Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
      }

      /* InitializeConditions for UnitDelay: '<S261>/Unit Delay1' */
      BaseEngineController_LS_DWork.s261_UnitDelay1_DSTATE = 0.0;

      /* S-Function Block: <S269>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BaseEngineController_LS_DWork.s269_motohawk_delta_time_DWORK1 = now -
          Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
      }

      /* InitializeConditions for UnitDelay: '<S261>/Unit Delay' */
      BaseEngineController_LS_DWork.s261_UnitDelay_DSTATE = 0.0;

      /* S-Function Block: <S271>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BaseEngineController_LS_DWork.s271_motohawk_delta_time_DWORK1 = now -
          Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
      }

      /* InitializeConditions for UnitDelay: '<S261>/Unit Delay2' */
      BaseEngineController_LS_DWork.s261_UnitDelay2_DSTATE = 0.0;

      /* S-Function Block: <S270>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BaseEngineController_LS_DWork.s270_motohawk_delta_time_DWORK1 = now -
          Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
      }

      /* End of InitializeConditions for SubSystem: '<S137>/O2 PID Controller' */
      /* End of InitializeConditions for SubSystem: '<S119>/O2 Control' */

      /* Level2 S-Function Block: '<S119>/motohawk_trigger1' (motohawk_sfun_trigger) */

      /* Enable for Trigger_FGND_5XRTI_PERIODIC_4409p0005 */
      BaseEngineController_LS_DWork.s119_motohawk_trigger1_DWORK1 = 1;
      BaseEngineController_LS_DWork.s15_Run_MODE = TRUE;
    }

    /* S-Function Block: <S127>/motohawk_interpolation_1d2 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d2_l = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_l, (real_T *) ((ACTempOnTbl_DataStore())), 9);
      (ACTempOn_DataStore()) = rtb_motohawk_interpolation_1d2_l;
    }

    /* RelationalOperator: '<S142>/LT' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S127>/motohawk_interpolation_1d2'
     *  S-Function (motohawk_sfun_prelookup): '<S398>/motohawk_prelookup'
     */
    rtb_BelowLoTarget_b = (BaseEngineController_LS_B.s631_Merge >=
      rtb_motohawk_interpolation_1d2_l);

    /* S-Function Block: <S127>/motohawk_interpolation_1d3 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d3_n = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_l, (real_T *) ((ACTempOffTbl_DataStore())), 9);
      (ACTempOff_DataStore()) = rtb_motohawk_interpolation_1d3_n;
    }

    /* RelationalOperator: '<S142>/LT1' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S127>/motohawk_interpolation_1d3'
     *  S-Function (motohawk_sfun_prelookup): '<S398>/motohawk_prelookup'
     */
    rtb_AboveHiTarget_a = (BaseEngineController_LS_B.s631_Merge <=
      rtb_motohawk_interpolation_1d3_n);

    /* CombinatorialLogic: '<S146>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_b != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_AboveHiTarget_a != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_c[0] =
        BaseEngineController_LS_ConstP.pooled728[rowidx];
      rtb_CombinatorialLogic_c[1] =
        BaseEngineController_LS_ConstP.pooled728[rowidx + 4];
    }

    /* Switch: '<S146>/Switch1' incorporates:
     *  UnitDelay: '<S146>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_c[1]) {
      BaseEngineController_LS_B.s146_Switch1 = rtb_CombinatorialLogic_c[0];
    } else {
      BaseEngineController_LS_B.s146_Switch1 =
        BaseEngineController_LS_DWork.s146_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S146>/Switch1' */

    /* RelationalOperator: '<S141>/LT' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S127>/motohawk_calibration2'
     */
    rtb_AboveHiTarget_a = (BaseEngineController_LS_B.s459_Sum1 >=
      (ACSpdSlowOn_DataStore()));

    /* RelationalOperator: '<S141>/LT1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S127>/motohawk_calibration1'
     */
    rtb_BelowLoTarget_b = (BaseEngineController_LS_B.s459_Sum1 <=
      (ACSpdSlowOff_DataStore()));

    /* CombinatorialLogic: '<S145>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_AboveHiTarget_a != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_b != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_c[0] =
        BaseEngineController_LS_ConstP.pooled728[rowidx];
      rtb_CombinatorialLogic_c[1] =
        BaseEngineController_LS_ConstP.pooled728[rowidx + 4];
    }

    /* Switch: '<S145>/Switch1' incorporates:
     *  UnitDelay: '<S145>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_c[1]) {
      BaseEngineController_LS_B.s145_Switch1 = rtb_CombinatorialLogic_c[0];
    } else {
      BaseEngineController_LS_B.s145_Switch1 =
        BaseEngineController_LS_DWork.s145_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S145>/Switch1' */

    /* RelationalOperator: '<S139>/LT' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S127>/motohawk_calibration3'
     */
    rtb_AboveHiTarget_a = (BaseEngineController_LS_B.s459_Sum1 >=
      (ACSpdFastOff_DataStore()));

    /* RelationalOperator: '<S139>/LT1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S127>/motohawk_calibration4'
     */
    rtb_BelowLoTarget_b = (BaseEngineController_LS_B.s459_Sum1 <=
      (ACSpdFastOn_DataStore()));

    /* CombinatorialLogic: '<S143>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_AboveHiTarget_a != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_b != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_c[0] =
        BaseEngineController_LS_ConstP.pooled728[rowidx];
      rtb_CombinatorialLogic_c[1] =
        BaseEngineController_LS_ConstP.pooled728[rowidx + 4];
    }

    /* Switch: '<S143>/Switch1' incorporates:
     *  UnitDelay: '<S143>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_c[1]) {
      rtb_Switch1_n1 = rtb_CombinatorialLogic_c[0];
    } else {
      rtb_Switch1_n1 = BaseEngineController_LS_DWork.s143_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S143>/Switch1' */

    /* Logic: '<S127>/Logical Operator2' */
    BaseEngineController_LS_B.s127_LogicalOperator2 = !rtb_Switch1_n1;

    /* RelationalOperator: '<S140>/LT' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S127>/motohawk_calibration5'
     */
    rtb_AboveHiTarget_a = (BaseEngineController_LS_B.s374_Switch2 >=
      (AC_TPSOff_DataStore()));

    /* RelationalOperator: '<S140>/LT1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S127>/motohawk_calibration6'
     */
    rtb_BelowLoTarget_b = (BaseEngineController_LS_B.s374_Switch2 <=
      (AC_TPSOn_DataStore()));

    /* CombinatorialLogic: '<S144>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_AboveHiTarget_a != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_b != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_c[0] =
        BaseEngineController_LS_ConstP.pooled728[rowidx];
      rtb_CombinatorialLogic_c[1] =
        BaseEngineController_LS_ConstP.pooled728[rowidx + 4];
    }

    /* Switch: '<S144>/Switch1' incorporates:
     *  UnitDelay: '<S144>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_c[1]) {
      rtb_Switch1_k = rtb_CombinatorialLogic_c[0];
    } else {
      rtb_Switch1_k = BaseEngineController_LS_DWork.s144_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S144>/Switch1' */

    /* Logic: '<S127>/Logical Operator4' */
    BaseEngineController_LS_B.s127_LogicalOperator4 = !rtb_Switch1_k;

    /* Logic: '<S127>/Logical Operator3' */
    rtb_RelationalOperator2_i = (BaseEngineController_LS_B.s145_Switch1 &&
      BaseEngineController_LS_B.s127_LogicalOperator2);

    /* Logic: '<S127>/Logical Operator' incorporates:
     *  S-Function (motohawk_sfun_fault_action): '<S127>/motohawk_fault_action'
     */
    BaseEngineController_LS_B.s127_LogicalOperator =
      ((BaseEngineController_LS_B.s414_Merge &&
        BaseEngineController_LS_B.s146_Switch1 && rtb_RelationalOperator2_i &&
        BaseEngineController_LS_B.s127_LogicalOperator4 && GetFaultActionStatus
        (3)));

    /* Outputs for Enabled SubSystem: '<S128>/ShutDownTasksComplete Reset' incorporates:
     *  EnablePort: '<S148>/Enable'
     */
    /* S-Function (motohawk_sfun_calibration): '<S128>/motohawk_calibration2' */
    if ((AirControlSource_DataStore())) {
      /* S-Function (motohawk_sfun_data_write): '<S148>/motohawk_data_write' incorporates:
       *  Constant: '<S148>/Constant'
       */
      /* Write to Data Storage as scalar: ShutDownTasksComplete */
      {
        ShutDownTasksComplete_DataStore() = TRUE;
      }
    }

    /* End of S-Function (motohawk_sfun_calibration): '<S128>/motohawk_calibration2' */
    /* End of Outputs for SubSystem: '<S128>/ShutDownTasksComplete Reset' */

    /* Outputs for Atomic SubSystem: '<S119>/Base Equiv Ratio' */

    /* S-Function Block: <S129>/motohawk_interpolation_2d1 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_WarmUpMult = TableInterpolation2D_real_T(rtb_motohawk_prelookup_m,
        rtb_motohawk_prelookup1_h, (real_T *) ((WarmUpEqRatioMultMap_DataStore())),
        5, 9);
      (WarmUpEqRatioMult_DataStore()) = rtb_WarmUpMult;
    }

    /* S-Function Block: <S149>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_fx = TableInterpolation1D_real_T
        (BaseEngineController_LS_B.s357_motohawk_prelookup, (real_T *)
         ((Warmup_Time_HoldoffTbl_DataStore())), 5);
      (Warmup_Time_Holdoff_DataStore()) = rtb_motohawk_interpolation_1d_fx;
    }

    /* Switch: '<S149>/Switch' incorporates:
     *  Constant: '<S149>/Constant'
     *  RelationalOperator: '<S149>/Relational Operator'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S149>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_interpolation_2d): '<S129>/motohawk_interpolation_2d2'
     *  S-Function (motohawk_sfun_prelookup): '<S334>/motohawk_prelookup2'
     */
    if (BaseEngineController_LS_B.s394_Switch >=
        rtb_motohawk_interpolation_1d_fx) {
      /* S-Function Block: <S129>/motohawk_interpolation_2d2 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_WarmUptimeMult = TableInterpolation2D_real_T(rtb_TimeSinceRun09,
          BaseEngineController_LS_B.s357_motohawk_prelookup, (real_T *)
          ((WarmUpTimeMultMap_DataStore())), 9, 5);
        (WarmUpTimeMult_DataStore()) = rtb_WarmUptimeMult;
      }

      rtb_Switch_c = rtb_WarmUptimeMult;
    } else {
      rtb_Switch_c = 1.0;
    }

    /* End of Switch: '<S149>/Switch' */
    /* S-Function Block: <S129>/motohawk_interpolation_2d4 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_ECTEnrichment = TableInterpolation2D_real_T
        (BaseEngineController_LS_B.s359_motohawk_prelookup1,
         BaseEngineController_LS_B.s357_motohawk_prelookup, (real_T *)
         ((CoolantTempEnrichmentMap_DataStore())), 9, 5);
      (CoolantTempEnrichment_DataStore()) = rtb_ECTEnrichment;
    }

    /* S-Function Block: <S129>/motohawk_interpolation_2d5 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_IATEnrichment = TableInterpolation2D_real_T
        (BaseEngineController_LS_B.s359_motohawk_prelookup1,
         BaseEngineController_LS_B.s358_motohawk_prelookup, (real_T *)
         ((IntakeAirTempEnrichmentMap_DataStore())), 9, 5);
      (IntakeAirTempEnrichment_DataStore()) = rtb_IATEnrichment;
    }

    /* S-Function Block: <S129>/motohawk_interpolation_2d6 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_CATEnrichment = TableInterpolation2D_real_T
        (BaseEngineController_LS_B.s359_motohawk_prelookup1,
         BaseEngineController_LS_B.s356_motohawk_prelookup, (real_T *)
         ((ChargeAirTempEnrichmentMap_DataStore())), 9, 5);
      (ChargeAirTempEnrichment_DataStore()) = rtb_CATEnrichment;
    }

    /* S-Function Block: <S129>/motohawk_interpolation_2d3 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_motohawk_interpolation_2d3 = TableInterpolation2D_real_T
        (BaseEngineController_LS_B.s359_Indexes,
         BaseEngineController_LS_B.s360_Indexes, (real_T *)
         ((DesEquivRatioMap_DataStore())), 17, 17);
      (DesEquivRatio_DataStore()) = rtb_motohawk_interpolation_2d3;
    }

    /* If: '<S150>/If' incorporates:
     *  Inport: '<S151>/In1'
     *  Inport: '<S152>/In1'
     *  S-Function (motohawk_sfun_calibration): '<S150>/new_value'
     *  S-Function (motohawk_sfun_calibration): '<S150>/override_enable'
     */
    if ((EquivRatio_ovr_DataStore())) {
      /* Outputs for IfAction SubSystem: '<S150>/NewValue' incorporates:
       *  ActionPort: '<S151>/Action Port'
       */
      rtb_Product1_l2 = (EquivRatio_new_DataStore());

      /* End of Outputs for SubSystem: '<S150>/NewValue' */
    } else {
      /* Outputs for IfAction SubSystem: '<S150>/OldValue' incorporates:
       *  ActionPort: '<S152>/Action Port'
       */
      rtb_Product1_l2 = rtb_motohawk_interpolation_2d3;

      /* End of Outputs for SubSystem: '<S150>/OldValue' */
    }

    /* End of If: '<S150>/If' */

    /* Product: '<S129>/Product1' */
    BaseEngineController_LS_B.s129_DesEquivRatio = rtb_Product1_l2 *
      rtb_WarmUpMult * rtb_Switch_c * rtb_ECTEnrichment * rtb_IATEnrichment *
      rtb_CATEnrichment;

    /* End of Outputs for SubSystem: '<S119>/Base Equiv Ratio' */
    /* RelationalOperator: '<S169>/Relational Operator' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S169>/motohawk_calibration'
     */
    rtb_RelationalOperator2_i = (BaseEngineController_LS_B.s459_Sum1 >=
      (DFCOEntryRPM_DataStore()));

    /* RelationalOperator: '<S169>/Relational Operator1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S169>/motohawk_calibration1'
     */
    rtb_LogicalOperator1_j = (BaseEngineController_LS_B.s368_Switch1 <=
      (DFCOEntryAPP_DataStore()));

    /* RelationalOperator: '<S169>/Relational Operator2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S169>/motohawk_calibration2'
     */
    rtb_RelOp_pu = (BaseEngineController_LS_B.s510_Merge <=
                    (DFCOEntryMAP_DataStore()));

    /* Logic: '<S169>/Logical Operator1' incorporates:
     *  S-Function (motohawk_sfun_fault_action): '<S169>/motohawk_fault_action'
     */
    rtb_LogicalOperator1_dv = !GetFaultActionStatus(1);

    /* Sum: '<S169>/Sum1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S169>/motohawk_calibration4'
     *  S-Function (motohawk_sfun_data_read): '<S169>/motohawk_data_read'
     */
    rtb_Switch_k2 = MinGovRPMSetPt_DataStore() +
      (IdleSpeed_DFCOEnterHyst_DataStore());

    /* Sum: '<S169>/Sum' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S169>/motohawk_calibration9'
     *  S-Function (motohawk_sfun_data_read): '<S169>/motohawk_data_read'
     */
    rtb_Sum_cy = MinGovRPMSetPt_DataStore() + (IdleSpeed_DFCOExitHyst_DataStore());

    /* Logic: '<S169>/Logical Operator' incorporates:
     *  RelationalOperator: '<S169>/Relational Operator3'
     *  S-Function (motohawk_sfun_calibration): '<S169>/motohawk_calibration3'
     */
    BaseEngineController_LS_B.s169_LogicalOperator = ((rtb_RelationalOperator2_i
      && rtb_LogicalOperator1_j && rtb_RelOp_pu && rtb_LogicalOperator1_dv &&
      (((uint8_T)(DFCOEnable_DataStore())) != 0) && (rtb_Switch_k2 >= rtb_Sum_cy)));

    /* S-Function Block: <S172>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s172_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_p = ((real_T) delta) * 0.000001;
    }

    /* Switch: '<S172>/Switch' incorporates:
     *  Constant: '<S172>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S172>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S172>/motohawk_delta_time'
     *  Sum: '<S172>/Sum'
     */
    if (BaseEngineController_LS_B.s169_LogicalOperator) {
      rtb_Switch1_n = rtb_motohawk_delta_time_p + DFCOEnterTimer_DataStore();
    } else {
      rtb_Switch1_n = 0.0;
    }

    /* End of Switch: '<S172>/Switch' */
    /* Logic: '<S169>/Logical Operator2' incorporates:
     *  RelationalOperator: '<S169>/Relational Operator4'
     *  S-Function (motohawk_sfun_calibration): '<S169>/motohawk_calibration5'
     */
    BaseEngineController_LS_B.s169_LogicalOperator2 =
      ((BaseEngineController_LS_B.s169_LogicalOperator && (rtb_Switch1_n >=
         (DFCODelayTime_DataStore()))));

    /* RelationalOperator: '<S169>/Relational Operator8' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S169>/motohawk_calibration8'
     */
    rtb_RelationalOperator2_i = (BaseEngineController_LS_B.s459_Sum1 <=
      (DFCOExitRPM_DataStore()));

    /* RelationalOperator: '<S169>/Relational Operator6' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S169>/motohawk_calibration6'
     */
    rtb_LogicalOperator1_j = (BaseEngineController_LS_B.s368_Switch1 >=
      (DFCOExitAPP_DataStore()));

    /* Logic: '<S169>/Logical Operator3' incorporates:
     *  RelationalOperator: '<S169>/Relational Operator5'
     *  RelationalOperator: '<S169>/Relational Operator7'
     *  S-Function (motohawk_sfun_calibration): '<S169>/motohawk_calibration7'
     */
    BaseEngineController_LS_B.s169_LogicalOperator3 = (((rtb_Switch_k2 <=
      rtb_Sum_cy) && rtb_RelationalOperator2_i && rtb_LogicalOperator1_j &&
      (BaseEngineController_LS_B.s510_Merge >= (DFCOExitMAP_DataStore()))));

    /* CombinatorialLogic: '<S171>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)
        (BaseEngineController_LS_B.s169_LogicalOperator2 != 0);
      rowidx = (rowidx << 1) + (uint_T)
        (BaseEngineController_LS_B.s169_LogicalOperator3 != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_c[0] =
        BaseEngineController_LS_ConstP.pooled728[rowidx];
      rtb_CombinatorialLogic_c[1] =
        BaseEngineController_LS_ConstP.pooled728[rowidx + 4];
    }

    /* Switch: '<S171>/Switch1' incorporates:
     *  UnitDelay: '<S171>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_c[1]) {
      BaseEngineController_LS_B.s171_Switch1 = rtb_CombinatorialLogic_c[0];
    } else {
      BaseEngineController_LS_B.s171_Switch1 =
        BaseEngineController_LS_DWork.s171_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S171>/Switch1' */
    /* Product: '<S169>/Product' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S169>/motohawk_calibration11'
     *  S-Function (motohawk_sfun_calibration): '<S169>/motohawk_calibration12'
     */
    rtb_Product1_l2 = (DFCOExitRampTime_DataStore()) / (LoopTime_DataStore());

    /* Stateflow: '<S169>/Chart' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S169>/motohawk_calibration10'
     */

    /* Gateway: Foreground/Control/Controller/Run/DFCO/DesEquivRatioMod/Chart */
    /* During: Foreground/Control/Controller/Run/DFCO/DesEquivRatioMod/Chart */
    if (BaseEngineController_LS_DWork.s170_is_active_c1_BaseEngineController_LS ==
        0) {
      /* Entry: Foreground/Control/Controller/Run/DFCO/DesEquivRatioMod/Chart */
      BaseEngineController_LS_DWork.s170_is_active_c1_BaseEngineController_LS =
        1U;

      /* Transition: '<S170>:24' */
      BaseEngineController_LS_DWork.s170_is_c1_BaseEngineController_LS =
        BaseEngineController_LS_IN_Normal;
    } else {
      switch (BaseEngineController_LS_DWork.s170_is_c1_BaseEngineController_LS)
  {
       case BaseEngineController_LS_IN_DFCO_Off:
        /* During 'DFCO_Off': '<S170>:11' */
        if (BaseEngineController_LS_DWork.s170_count >= rtb_Product1_l2) {
          /* Transition: '<S170>:12' */
          BaseEngineController_LS_DWork.s170_is_c1_BaseEngineController_LS =
            BaseEngineController_LS_IN_Normal;
        } else if (BaseEngineController_LS_B.s171_Switch1 == TRUE) {
          /* Transition: '<S170>:15' */
          BaseEngineController_LS_DWork.s170_is_c1_BaseEngineController_LS =
            BaseEngineController_LS_IN_DFCO_On;
        } else {
          BaseEngineController_LS_DWork.s170_count =
            BaseEngineController_LS_DWork.s170_count + 1.0;
          BaseEngineController_LS_B.s170_EquivOut =
            BaseEngineController_LS_DWork.s170_EquivStart / rtb_Product1_l2 *
            BaseEngineController_LS_DWork.s170_count;
          BaseEngineController_LS_B.s170_SparkOut = (DFCOExitSparkRet_DataStore())
            / rtb_Product1_l2 * BaseEngineController_LS_DWork.s170_count;
        }
        break;

       case BaseEngineController_LS_IN_DFCO_On:
        /* During 'DFCO_On': '<S170>:9' */
        if (BaseEngineController_LS_B.s171_Switch1 == FALSE) {
          /* Transition: '<S170>:13' */
          BaseEngineController_LS_DWork.s170_is_c1_BaseEngineController_LS =
            BaseEngineController_LS_IN_DFCO_Off;

          /* Entry 'DFCO_Off': '<S170>:11' */
          BaseEngineController_LS_DWork.s170_count = 0.0;
          BaseEngineController_LS_DWork.s170_EquivStart =
            BaseEngineController_LS_B.s129_DesEquivRatio;
        } else {
          BaseEngineController_LS_B.s170_EquivOut = 0.0;
          BaseEngineController_LS_B.s170_SparkOut = 0.0;
        }
        break;

       case BaseEngineController_LS_IN_Normal:
        /* During 'Normal': '<S170>:8' */
        if (BaseEngineController_LS_B.s171_Switch1 == TRUE) {
          /* Transition: '<S170>:10' */
          BaseEngineController_LS_DWork.s170_is_c1_BaseEngineController_LS =
            BaseEngineController_LS_IN_DFCO_On;
        } else {
          BaseEngineController_LS_B.s170_EquivOut =
            BaseEngineController_LS_B.s129_DesEquivRatio;
          BaseEngineController_LS_B.s170_SparkOut = 0.0;
        }
        break;

       default:
        /* Transition: '<S170>:24' */
        BaseEngineController_LS_DWork.s170_is_c1_BaseEngineController_LS =
          BaseEngineController_LS_IN_Normal;
        break;
      }
    }

    /* End of Stateflow: '<S169>/Chart' */

    /* S-Function (motohawk_sfun_trigger): '<S119>/motohawk_trigger1' */
    /* Enable for Trigger_FGND_5XRTI_PERIODIC_4409p0005 */
    if (BaseEngineController_LS_DWork.s119_motohawk_trigger1_DWORK1 == 0) {
      BaseEngineController_LS_DWork.s119_motohawk_trigger1_DWORK1 = 1;
    }

    /* Sum: '<S128>/Sum2' */
    rtb_Product1_l2 =
      BaseEngineController_LS_B.s227_DontallowsetpointtoeverdropbelowtheTargetRPM
      + BaseEngineController_LS_B.s136_MinGovAirPID;

    /* MultiPortSwitch: '<S128>/Multiport Switch' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S128>/motohawk_calibration2'
     */
    if ((AirControlSource_DataStore()) == FALSE) {
      /* Switch: '<S128>/Switch1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S128>/motohawk_calibration1'
       */
      if ((ThrottleSource_DataStore())) {
        /* S-Function Block: <S128>/motohawk_interpolation_1d2 */
        {
          extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T
            *tbl_data, uint32_T sz);
          rtb_motohawk_interpolation_1d2_d = TableInterpolation1D_real_T
            (BaseEngineController_LS_B.s360_motohawk_prelookup1, (real_T *)
             ((MaxETCSetPtLimitTbl_DataStore())), 9);
          (MaxETCSetPtLimit_DataStore()) = rtb_motohawk_interpolation_1d2_d;
        }

        /* Switch: '<S128>/Switch2' */
        if (BaseEngineController_LS_B.s202_MultiportSwitch) {
          rtb_Product1_l2 = BaseEngineController_LS_B.s205_Switch;
        } else {
          /* Switch: '<S128>/Switch4' incorporates:
           *  Logic: '<S128>/Logical Operator'
           *  Sum: '<S128>/Sum1'
           */
          if (!BaseEngineController_LS_B.s237_RelOp) {
            rtb_Product1_l2 = BaseEngineController_LS_B.s381_Sum2 +
              BaseEngineController_LS_B.s227_DontallowsetpointtoeverdropbelowtheTargetRPM;
          }

          /* End of Switch: '<S128>/Switch4' */
        }

        /* End of Switch: '<S128>/Switch2' */

        /* MinMax: '<S147>/MinMax' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S128>/motohawk_calibration3'
         */
        u = (rtb_Product1_l2 >= (MinETCSetpoint_DataStore())) || rtIsNaN
          ((MinETCSetpoint_DataStore())) ? rtb_Product1_l2 :
          (MinETCSetpoint_DataStore());

        /* MinMax: '<S147>/MinMax1' incorporates:
         *  MinMax: '<S147>/MinMax'
         */
        rtb_Product1_l2 = (u <= rtb_motohawk_interpolation_1d2_d) || rtIsNaN
          (rtb_motohawk_interpolation_1d2_d) ? u :
          rtb_motohawk_interpolation_1d2_d;
      } else {
        rtb_Product1_l2 = BaseEngineController_LS_B.s662_Merge;
      }

      /* End of Switch: '<S128>/Switch1' */
      BaseEngineController_LS_B.s128_MultiportSwitch = rtb_Product1_l2;
    } else {
      BaseEngineController_LS_B.s128_MultiportSwitch = rtb_Product1_l2;
    }

    /* End of MultiPortSwitch: '<S128>/Multiport Switch' */

    /* S-Function (motohawk_sfun_data_write): '<S128>/motohawk_data_write' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S128>/motohawk_calibration'
     */
    /* Write to Data Storage as scalar: IACType */
    {
      IACType_DataStore() = (IACTypeCal_DataStore());
    }

    /* Gain: '<S130>/kPa to PSI' incorporates:
     *  Sum: '<S130>/Sum1'
     */
    rtb_Sum_cy = (BaseEngineController_LS_B.s510_Merge -
                  BaseEngineController_LS_B.s338_Sum) * 0.145038;

    /* RelationalOperator: '<S130>/Relational Operator' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S130>/motohawk_calibration2'
     */
    rtb_AboveHiTarget_a = (rtb_Sum_cy < (BoostActivationThreshold_DataStore()));

    /* UnitDelay: '<S130>/Unit Delay' */
    rtb_Product1_ii = BaseEngineController_LS_DWork.s130_UnitDelay_DSTATE;

    /* Outputs for Enabled SubSystem: '<S130>/BoostControl Adapt' incorporates:
     *  EnablePort: '<S153>/Enable'
     */
    /* Logic: '<S130>/Logical Operator' */
    if (!rtb_AboveHiTarget_a) {
      /* Product: '<S153>/Product0' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S153>/motohawk_calibration2'
       */
      rtb_Product1_l2 = rtb_Product1_ii * (BoostControlAdaptGain_DataStore());

      /* MinMax: '<S160>/MinMax' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S158>/motohawk_calibration'
       */
      rtb_Product4_o = (rtb_Product1_l2 >= (BoostAdaptErrorLwrLim_DataStore())) ||
        rtIsNaN((BoostAdaptErrorLwrLim_DataStore())) ? rtb_Product1_l2 :
        (BoostAdaptErrorLwrLim_DataStore());

      /* MinMax: '<S160>/MinMax1' incorporates:
       *  MinMax: '<S160>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S158>/motohawk_calibration1'
       */
      rtb_MinMax1_if = (rtb_Product4_o <= (BoostAdaptErrorUprLim_DataStore())) ||
        rtIsNaN((BoostAdaptErrorUprLim_DataStore())) ? rtb_Product4_o :
        (BoostAdaptErrorUprLim_DataStore());

      /* Outputs for Atomic SubSystem: '<S153>/BoostControl Enable Delay' */

      /* S-Function Block: <S159>/motohawk_delta_time */
      rtb_motohawk_delta_time_nb = 0.005;
      rtb_Product1_l2 = rtb_motohawk_delta_time_nb + BoostTimer_DataStore();

      /* RelationalOperator: '<S157>/Relational Operator' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S157>/motohawk_calibration1'
       */
      rtb_RelationalOperator2_i = (rtb_Product1_l2 >
        (BoostAdaptDelayTime_DataStore()));

      /* Saturate: '<S159>/Saturation' */
      rtb_Saturation_cv = rtb_Product1_l2 >= 16000.0 ? 16000.0 : rtb_Product1_l2
        <= 0.0 ? 0.0 : rtb_Product1_l2;

      /* S-Function (motohawk_sfun_data_write): '<S159>/motohawk_data_write' */
      /* Write to Data Storage as scalar: BoostTimer */
      {
        BoostTimer_DataStore() = rtb_Saturation_cv;
      }

      /* End of Outputs for SubSystem: '<S153>/BoostControl Enable Delay' */

      /* Logic: '<S153>/Logical Operator1' incorporates:
       *  Abs: '<S153>/Abs'
       *  RelationalOperator: '<S153>/Relational Operator'
       *  S-Function (motohawk_sfun_calibration): '<S153>/motohawk_calibration3'
       *  S-Function (motohawk_sfun_calibration): '<S153>/motohawk_calibration4'
       */
      BaseEngineController_LS_B.s153_LogicalOperator1 =
        (((BoostControlAdaptEnable_DataStore()) && rtb_RelationalOperator2_i &&
          (fabs(rtb_Product1_ii) <= (BoostControlAdaptDelta_DataStore()))));

      /* Outputs for Enabled SubSystem: '<S153>/Adapt Boost Table' incorporates:
       *  EnablePort: '<S156>/Enable'
       */
      if (BaseEngineController_LS_B.s153_LogicalOperator1) {
        /* S-Function Block: <S156>/motohawk_adapt_table */
        /* Adapt 2-D Table */
        {
          uint32_T _row = ((BoostTargetIdxIdx_DataStore())) >> 9;
          uint32_T _row_frac = (((BoostTargetIdxIdx_DataStore())) & 0x01FF) >> 7;
          uint32_T _col = ((RPM09Idx_DataStore())) >> 9;
          uint32_T _col_frac = (((RPM09Idx_DataStore())) & 0x01FF) >> 7;
          real_T _new;
          if (_row >= 8) {
            _row = 8;
            _row_frac = 0;
          }

          if (_col >= 8) {
            _col = 8;
            _col_frac = 0;
          }

          if (_row_frac == 3) {
            _row++;
            _row_frac = 0;
          }

          if (_row_frac == 0) {
            if (_col_frac == 0) {
              _new = (BoostControlBase_AdaptMap_DataStore())[_row][_col] +
                rtb_MinMax1_if;
              if (_new > (BoostControlOfstMaxValue_DataStore()))
                _new = (BoostControlOfstMaxValue_DataStore());
              if (_new < (BoostControlOfstMinValue_DataStore()))
                _new = (BoostControlOfstMinValue_DataStore());
              (BoostControlBase_AdaptMap_DataStore())[_row][_col] = _new;
            } else if (_col_frac == 3) {
              _new = (BoostControlBase_AdaptMap_DataStore())[_row][_col+1] +
                rtb_MinMax1_if;
              if (_new > (BoostControlOfstMaxValue_DataStore()))
                _new = (BoostControlOfstMaxValue_DataStore());
              if (_new < (BoostControlOfstMinValue_DataStore()))
                _new = (BoostControlOfstMinValue_DataStore());
              (BoostControlBase_AdaptMap_DataStore())[_row][_col+1] = _new;
            } else {
              real_T _half = (rtb_MinMax1_if) / 2;
              _new = (BoostControlBase_AdaptMap_DataStore())[_row][_col] + _half;
              if (_new > (BoostControlOfstMaxValue_DataStore()))
                _new = (BoostControlOfstMaxValue_DataStore());
              if (_new < (BoostControlOfstMinValue_DataStore()))
                _new = (BoostControlOfstMinValue_DataStore());
              (BoostControlBase_AdaptMap_DataStore())[_row][_col] = _new;
              _new = (BoostControlBase_AdaptMap_DataStore())[_row][_col+1] +
                _half;
              if (_new > (BoostControlOfstMaxValue_DataStore()))
                _new = (BoostControlOfstMaxValue_DataStore());
              if (_new < (BoostControlOfstMinValue_DataStore()))
                _new = (BoostControlOfstMinValue_DataStore());
              (BoostControlBase_AdaptMap_DataStore())[_row][_col+1] = _new;
            }
          } else {
            if (_col_frac == 3) {
              _col++;
              _col_frac = 0;
            }

            if (_col_frac == 0) {
              real_T _half = (rtb_MinMax1_if) / 2;
              _new = (BoostControlBase_AdaptMap_DataStore())[_row][_col] + _half;
              if (_new > (BoostControlOfstMaxValue_DataStore()))
                _new = (BoostControlOfstMaxValue_DataStore());
              if (_new < (BoostControlOfstMinValue_DataStore()))
                _new = (BoostControlOfstMinValue_DataStore());
              (BoostControlBase_AdaptMap_DataStore())[_row][_col] = _new;
              _new = (BoostControlBase_AdaptMap_DataStore())[_row+1][_col] +
                _half;
              if (_new > (BoostControlOfstMaxValue_DataStore()))
                _new = (BoostControlOfstMaxValue_DataStore());
              if (_new < (BoostControlOfstMinValue_DataStore()))
                _new = (BoostControlOfstMinValue_DataStore());
              (BoostControlBase_AdaptMap_DataStore())[_row+1][_col] = _new;
            } else {
              real_T _quarter = (rtb_MinMax1_if) / 4;
              _new = (BoostControlBase_AdaptMap_DataStore())[_row][_col] +
                _quarter;
              if (_new > (BoostControlOfstMaxValue_DataStore()))
                _new = (BoostControlOfstMaxValue_DataStore());
              if (_new < (BoostControlOfstMinValue_DataStore()))
                _new = (BoostControlOfstMinValue_DataStore());
              (BoostControlBase_AdaptMap_DataStore())[_row][_col] = _new;
              _new = (BoostControlBase_AdaptMap_DataStore())[_row+1][_col] +
                _quarter;
              if (_new > (BoostControlOfstMaxValue_DataStore()))
                _new = (BoostControlOfstMaxValue_DataStore());
              if (_new < (BoostControlOfstMinValue_DataStore()))
                _new = (BoostControlOfstMinValue_DataStore());
              (BoostControlBase_AdaptMap_DataStore())[_row+1][_col] = _new;
              _new = (BoostControlBase_AdaptMap_DataStore())[_row][_col+1] +
                _quarter;
              if (_new > (BoostControlOfstMaxValue_DataStore()))
                _new = (BoostControlOfstMaxValue_DataStore());
              if (_new < (BoostControlOfstMinValue_DataStore()))
                _new = (BoostControlOfstMinValue_DataStore());
              (BoostControlBase_AdaptMap_DataStore())[_row][_col+1] = _new;
              _new = (BoostControlBase_AdaptMap_DataStore())[_row+1][_col+1] +
                _quarter;
              if (_new > (BoostControlOfstMaxValue_DataStore()))
                _new = (BoostControlOfstMaxValue_DataStore());
              if (_new < (BoostControlOfstMinValue_DataStore()))
                _new = (BoostControlOfstMinValue_DataStore());
              (BoostControlBase_AdaptMap_DataStore())[_row+1][_col+1] = _new;
            }
          }
        }
      }

      /* End of Outputs for SubSystem: '<S153>/Adapt Boost Table' */
    }

    /* End of Logic: '<S130>/Logical Operator' */
    /* End of Outputs for SubSystem: '<S130>/BoostControl Adapt' */

    /* Switch: '<S165>/Switch1' incorporates:
     *  Constant: '<S154>/Constant'
     *  UnitDelay: '<S165>/Unit Delay'
     */
    if (rtb_AboveHiTarget_a) {
      BaseEngineController_LS_B.s165_Switch1 = 0.0;
    } else {
      BaseEngineController_LS_B.s165_Switch1 =
        BaseEngineController_LS_DWork.s165_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S165>/Switch1' */

    /* S-Function Block: <S155>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s155_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_id = ((real_T) delta) * 0.000001;
    }

    /* Switch: '<S130>/Switch1' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S130>/motohawk_interpolation_1d1'
     *  S-Function (motohawk_sfun_interpolation_2d): '<S130>/motohawk_interpolation_2d2'
     *  S-Function (motohawk_sfun_prelookup): '<S363>/motohawk_prelookup'
     *  Sum: '<S130>/Sum2'
     */
    if (BaseEngineController_LS_B.s447_Merge) {
      /* S-Function Block: <S130>/motohawk_interpolation_1d1 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d1_g = TableInterpolation1D_real_T
          (BaseEngineController_LS_B.s360_motohawk_prelookup1, (real_T *)
           ((BoostTarget_TwoStepTbl_DataStore())), 9);
        (BoostTarget_TwoStep_DataStore()) = rtb_motohawk_interpolation_1d1_g;
      }

      BaseEngineController_LS_B.s130_Switch1 = rtb_motohawk_interpolation_1d1_g;
    } else {
      /* Product: '<S130>/Product' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S130>/motohawk_calibration3'
       */
      rtb_Product1_l2 = (real_T)BaseEngineController_LS_B.s442_Merge *
        (BoostScrambleAdder_DataStore());

      /* S-Function Block: <S130>/motohawk_interpolation_2d2 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_motohawk_interpolation_2d2_f = TableInterpolation2D_real_T
          (rtb_motohawk_prelookup_i,
           BaseEngineController_LS_B.s360_motohawk_prelookup1, (real_T *)
           ((BoostTargetMap_DataStore())), 9, 9);
        (BoostTarget_DataStore()) = rtb_motohawk_interpolation_2d2_f;
      }

      BaseEngineController_LS_B.s130_Switch1 = rtb_motohawk_interpolation_2d2_f
        + rtb_Product1_l2;
    }

    /* End of Switch: '<S130>/Switch1' */

    /* UnitDelay: '<S155>/Unit Delay' */
    rtb_Product1_l2 = BaseEngineController_LS_DWork.s155_UnitDelay_DSTATE;

    /* Product: '<S155>/Product1' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S155>/motohawk_delta_time'
     *  Sum: '<S155>/Sum3'
     *  UnitDelay: '<S155>/Unit Delay'
     */
    rtb_Switch_k2 = 1.0 / rtb_motohawk_delta_time_id *
      (BaseEngineController_LS_B.s130_Switch1 -
       BaseEngineController_LS_DWork.s155_UnitDelay_DSTATE);

    /* MinMax: '<S168>/MinMax' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S130>/motohawk_calibration1'
     */
    rtb_Product4_o = (rtb_Switch_k2 >= (BoostFallRate_DataStore())) || rtIsNaN
      ((BoostFallRate_DataStore())) ? rtb_Switch_k2 : (BoostFallRate_DataStore());

    /* Sum: '<S155>/Sum2' incorporates:
     *  MinMax: '<S168>/MinMax'
     *  MinMax: '<S168>/MinMax1'
     *  Product: '<S155>/Product'
     *  S-Function (motohawk_sfun_calibration): '<S130>/motohawk_calibration'
     *  S-Function (motohawk_sfun_delta_time): '<S155>/motohawk_delta_time'
     */
    rtb_Sum2_o = ((rtb_Product4_o <= (BoostRiseRate_DataStore())) || rtIsNaN
                  ((BoostRiseRate_DataStore())) ? rtb_Product4_o :
                  (BoostRiseRate_DataStore())) * rtb_motohawk_delta_time_id +
      rtb_Product1_l2;

    /* Sum: '<S163>/Sum2' */
    BaseEngineController_LS_B.s163_Sum2 = rtb_Sum2_o - rtb_Sum_cy;

    /* Product: '<S163>/Product5' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S154>/motohawk_calibration5'
     */
    rtb_Sum_cy = BaseEngineController_LS_B.s163_Sum2 *
      (BoostCtlErrorGain_DataStore());

    /* S-Function Block: <S154>/motohawk_prelookup1 */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (BoostCtlSpeedErrorIn_DataStore()) = BaseEngineController_LS_B.s163_Sum2;
      (BoostCtlSpeedErrorIdx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_LS_B.s163_Sum2,
         (BoostCtlSpeedErrorIdxArr_DataStore()), 9,
         (BoostCtlSpeedErrorIdx_DataStore()));
      rtb_motohawk_prelookup1_n = (BoostCtlSpeedErrorIdx_DataStore());
    }

    /* S-Function Block: <S161>/motohawk_interpolation_1d2 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d2_l0 = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup1_n, (real_T *)
         ((BoostCtlPGainErrorMultTbl_DataStore())), 9);
      (BoostCtlPGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d2_l0;
    }

    /* Product: '<S163>/Product2' incorporates:
     *  Product: '<S161>/Product2'
     *  S-Function (motohawk_sfun_calibration): '<S161>/motohawk_calibration3'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S161>/motohawk_interpolation_1d2'
     *  S-Function (motohawk_sfun_prelookup): '<S154>/motohawk_prelookup1'
     */
    BaseEngineController_LS_B.s163_Product2 = (BoostCtlPGain_DataStore()) *
      rtb_motohawk_interpolation_1d2_l0 * rtb_Sum_cy;

    /* UnitDelay: '<S164>/Unit Delay' */
    rtb_Product1_l2 = BaseEngineController_LS_DWork.s164_UnitDelay_DSTATE;

    /* S-Function Block: <S161>/motohawk_interpolation_1d3 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d3_l = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup1_n, (real_T *)
         ((BoostCtlDGainErrorMultTbl_DataStore())), 9);
      (BoostCtlDGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d3_l;
    }

    /* Product: '<S163>/Product4' incorporates:
     *  Product: '<S161>/Product3'
     *  S-Function (motohawk_sfun_calibration): '<S161>/motohawk_calibration2'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S161>/motohawk_interpolation_1d3'
     *  S-Function (motohawk_sfun_prelookup): '<S154>/motohawk_prelookup1'
     */
    rtb_Product4_k = (BoostCtlDGain_DataStore()) *
      rtb_motohawk_interpolation_1d3_l * rtb_Sum_cy;

    /* Sum: '<S164>/Sum2' */
    rtb_Product1_l2 = rtb_Product4_k - rtb_Product1_l2;

    /* S-Function Block: <S164>/motohawk_delta_time */
    rtb_motohawk_delta_time_ao = 0.005;

    /* Product: '<S164>/Product' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S164>/motohawk_delta_time'
     */
    BaseEngineController_LS_B.s164_Product = rtb_Product1_l2 /
      rtb_motohawk_delta_time_ao;

    /* Switch: '<S154>/Switch' incorporates:
     *  Constant: '<S154>/Constant1'
     */
    if (rtb_AboveHiTarget_a) {
      BaseEngineController_LS_B.s154_Switch = 0.0;
    } else {
      /* MinMax: '<S162>/MinMax' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S154>/motohawk_calibration9'
       *  Sum: '<S163>/Sum1'
       */
      u = (BaseEngineController_LS_B.s163_Product2 +
           BaseEngineController_LS_B.s164_Product) +
        BaseEngineController_LS_B.s165_Switch1;
      u = (u >= (BoostCtlPIDOutLowerLimit_DataStore())) || rtIsNaN
        ((BoostCtlPIDOutLowerLimit_DataStore())) ? u :
        (BoostCtlPIDOutLowerLimit_DataStore());

      /* MinMax: '<S162>/MinMax1' incorporates:
       *  MinMax: '<S162>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S154>/motohawk_calibration2'
       */
      BaseEngineController_LS_B.s154_Switch = (u <=
        (BoostCtlPIDOutUpperLimit_DataStore())) || rtIsNaN
        ((BoostCtlPIDOutUpperLimit_DataStore())) ? u :
        (BoostCtlPIDOutUpperLimit_DataStore());
    }

    /* End of Switch: '<S154>/Switch' */

    /* S-Function Block: <S130>/motohawk_prelookup */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (BoostTargetIdxIn_DataStore()) = BaseEngineController_LS_B.s130_Switch1;
      (BoostTargetIdxIdx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_LS_B.s130_Switch1, (BoostTargetIdxIdxArr_DataStore
          ()), 9, (BoostTargetIdxIdx_DataStore()));
      rtb_motohawk_prelookup_brx = (BoostTargetIdxIdx_DataStore());
    }

    /* S-Function Block: <S130>/motohawk_interpolation_2d1 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_motohawk_interpolation_2d1_d = TableInterpolation2D_real_T
        (rtb_motohawk_prelookup_brx,
         BaseEngineController_LS_B.s360_motohawk_prelookup1, (real_T *)
         ((BoostControlBase_AdaptMap_DataStore())), 9, 9);
      (BoostControlBase_Adapt_DataStore()) = rtb_motohawk_interpolation_2d1_d;
    }

    /* S-Function Block: <S130>/motohawk_interpolation_2d */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_motohawk_interpolation_2d_i = TableInterpolation2D_real_T
        (rtb_motohawk_prelookup_brx,
         BaseEngineController_LS_B.s360_motohawk_prelookup1, (real_T *)
         ((BoostControlBaseMap_DataStore())), 9, 9);
      (BoostControlBase_DataStore()) = rtb_motohawk_interpolation_2d_i;
    }

    /* Sum: '<S130>/Sum' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S130>/motohawk_interpolation_2d'
     *  S-Function (motohawk_sfun_interpolation_2d): '<S130>/motohawk_interpolation_2d1'
     *  S-Function (motohawk_sfun_prelookup): '<S130>/motohawk_prelookup'
     */
    rtb_Product1_l2 = (rtb_motohawk_interpolation_2d1_d +
                       rtb_motohawk_interpolation_2d_i) +
      BaseEngineController_LS_B.s154_Switch;

    /* S-Function Block: <S130>/motohawk_interpolation_1d2 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d2_n = TableInterpolation1D_real_T
        (BaseEngineController_LS_B.s361_motohawk_prelookup, (real_T *)
         ((WGDeadTimeTbl_DataStore())), 9);
      (WGDeadTime_DataStore()) = rtb_motohawk_interpolation_1d2_n;
    }

    /* Sum: '<S130>/Sum3' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S130>/motohawk_interpolation_1d2'
     */
    BaseEngineController_LS_B.s130_Sum3 = rtb_Product1_l2 +
      rtb_motohawk_interpolation_1d2_n;

    /* Switch: '<S130>/Switch' incorporates:
     *  Constant: '<S130>/Constant'
     */
    if (rtb_AboveHiTarget_a) {
      rtb_Switch_k2 = 0.0;
    } else {
      rtb_Switch_k2 = BaseEngineController_LS_B.s130_Sum3;
    }

    /* End of Switch: '<S130>/Switch' */

    /* S-Function Block: <S161>/motohawk_interpolation_1d1 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d1_e = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup1_n, (real_T *)
         ((BoostCtlIGainErrorMultTbl_DataStore())), 9);
      (BoostCtlIGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d1_e;
    }

    /* Product: '<S163>/Product1' incorporates:
     *  Product: '<S161>/Product1'
     *  S-Function (motohawk_sfun_calibration): '<S161>/motohawk_calibration1'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S161>/motohawk_interpolation_1d1'
     *  S-Function (motohawk_sfun_prelookup): '<S154>/motohawk_prelookup1'
     */
    rtb_Product1_l2 = (BoostCtlIGain_DataStore()) *
      rtb_motohawk_interpolation_1d1_e * rtb_Sum_cy;

    /* S-Function Block: <S165>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s165_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_l3 = ((real_T) delta) * 0.000001;
    }

    /* Sum: '<S165>/Sum' incorporates:
     *  Product: '<S165>/Product'
     *  S-Function (motohawk_sfun_delta_time): '<S165>/motohawk_delta_time'
     */
    rtb_Sum_cy = rtb_Product1_l2 * rtb_motohawk_delta_time_l3 +
      BaseEngineController_LS_B.s165_Switch1;

    /* MinMax: '<S167>/MinMax' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S154>/motohawk_calibration7'
     */
    rtb_Product4_o = (rtb_Sum_cy >= (BoostCtlITermLowerLimit_DataStore())) ||
      rtIsNaN((BoostCtlITermLowerLimit_DataStore())) ? rtb_Sum_cy :
      (BoostCtlITermLowerLimit_DataStore());

    /* MinMax: '<S167>/MinMax1' incorporates:
     *  MinMax: '<S167>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S154>/motohawk_calibration8'
     */
    rtb_MinMax1_d = (rtb_Product4_o <= (BoostCtlITermUpperLimit_DataStore())) ||
      rtIsNaN((BoostCtlITermUpperLimit_DataStore())) ? rtb_Product4_o :
      (BoostCtlITermUpperLimit_DataStore());

    /* Saturate: '<S172>/Saturation' */
    rtb_Saturation_ao = rtb_Switch1_n >= 16000.0 ? 16000.0 : rtb_Switch1_n <=
      0.0 ? 0.0 : rtb_Switch1_n;

    /* S-Function (motohawk_sfun_data_write): '<S172>/motohawk_data_write' */
    /* Write to Data Storage as scalar: DFCOEnterTimer */
    {
      DFCOEnterTimer_DataStore() = rtb_Saturation_ao;
    }

    /* RelationalOperator: '<S173>/LT' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S132>/motohawk_data_read'
     */
    rtb_AboveHiTarget_a = (BaseEngineController_LS_B.s622_Merge >=
      ECTFanOn_DataStore());

    /* RelationalOperator: '<S173>/LT1' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S132>/motohawk_data_read1'
     */
    rtb_BelowLoTarget_b = (BaseEngineController_LS_B.s622_Merge <=
      ECTFanOff_DataStore());

    /* CombinatorialLogic: '<S176>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_AboveHiTarget_a != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_b != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_c[0] =
        BaseEngineController_LS_ConstP.pooled728[rowidx];
      rtb_CombinatorialLogic_c[1] =
        BaseEngineController_LS_ConstP.pooled728[rowidx + 4];
    }

    /* Switch: '<S176>/Switch1' incorporates:
     *  UnitDelay: '<S176>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_c[1]) {
      BaseEngineController_LS_B.s176_Switch1 = rtb_CombinatorialLogic_c[0];
    } else {
      BaseEngineController_LS_B.s176_Switch1 =
        BaseEngineController_LS_DWork.s176_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S176>/Switch1' */
    /* Product: '<S132>/Product4' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S132>/motohawk_data_read10'
     */
    rtb_motohawk_data_read9 = (uint8_T)(BaseEngineController_LS_B.s176_Switch1 ?
                                        ((uint8_T)Fan2ECT_DataStore()) : 0);

    /* RelationalOperator: '<S174>/LT' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S132>/motohawk_data_read2'
     */
    rtb_AboveHiTarget_a = (BaseEngineController_LS_B.s649_Merge >=
      IATFanOn_DataStore());

    /* RelationalOperator: '<S174>/LT1' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S132>/motohawk_data_read3'
     */
    rtb_BelowLoTarget_b = (BaseEngineController_LS_B.s649_Merge <=
      IATFanOff_DataStore());

    /* CombinatorialLogic: '<S177>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_AboveHiTarget_a != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_b != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_c[0] =
        BaseEngineController_LS_ConstP.pooled728[rowidx];
      rtb_CombinatorialLogic_c[1] =
        BaseEngineController_LS_ConstP.pooled728[rowidx + 4];
    }

    /* Switch: '<S177>/Switch1' incorporates:
     *  UnitDelay: '<S177>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_c[1]) {
      BaseEngineController_LS_B.s177_Switch1 = rtb_CombinatorialLogic_c[0];
    } else {
      BaseEngineController_LS_B.s177_Switch1 =
        BaseEngineController_LS_DWork.s177_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S177>/Switch1' */
    /* Product: '<S132>/Product5' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S132>/motohawk_data_read11'
     */
    rtb_Product2_m = (uint8_T)(BaseEngineController_LS_B.s177_Switch1 ?
      ((uint8_T)Fan2IAT_DataStore()) : 0);

    /* RelationalOperator: '<S175>/LT' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S132>/motohawk_data_read4'
     */
    rtb_AboveHiTarget_a = (BaseEngineController_LS_B.s473_Merge >=
      ACPresFanOn_DataStore());

    /* RelationalOperator: '<S175>/LT1' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S132>/motohawk_data_read5'
     */
    rtb_BelowLoTarget_b = (BaseEngineController_LS_B.s473_Merge <=
      ACPresFanOff_DataStore());

    /* CombinatorialLogic: '<S178>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_AboveHiTarget_a != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_b != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_c[0] =
        BaseEngineController_LS_ConstP.pooled728[rowidx];
      rtb_CombinatorialLogic_c[1] =
        BaseEngineController_LS_ConstP.pooled728[rowidx + 4];
    }

    /* Switch: '<S178>/Switch1' incorporates:
     *  UnitDelay: '<S178>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_c[1]) {
      BaseEngineController_LS_B.s178_Switch1 = rtb_CombinatorialLogic_c[0];
    } else {
      BaseEngineController_LS_B.s178_Switch1 =
        BaseEngineController_LS_DWork.s178_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S178>/Switch1' */
    /* Product: '<S132>/Product6' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S132>/motohawk_data_read12'
     */
    rtb_Product1_gw = (uint8_T)(BaseEngineController_LS_B.s178_Switch1 ?
      ((uint8_T)Fan2ACPres_DataStore()) : 0);

    /* DataTypeConversion: '<S132>/Data Type Conversion' */
    rtb_Switch1_n = (real_T)BaseEngineController_LS_B.s414_Merge;

    /* S-Function (motohawk_sfun_data_read): '<S132>/motohawk_data_read13' */
    rtb_Product_o = Fan2ACSw_DataStore();

    /* MinMax: '<S132>/MinMax1' incorporates:
     *  Product: '<S132>/Product7'
     */
    u = (real_T)rtb_motohawk_data_read9;
    rtb_DesiredLambda_idx = (real_T)rtb_Product2_m;
    u = u >= rtb_DesiredLambda_idx ? u : rtb_DesiredLambda_idx;
    rtb_DesiredLambda_idx = (real_T)rtb_Product1_gw;
    u = u >= rtb_DesiredLambda_idx ? u : rtb_DesiredLambda_idx;
    rtb_DesiredLambda_idx = rtb_Switch1_n * (real_T)rtb_Product_o;
    BaseEngineController_LS_B.s132_MinMax1 = u >= rtb_DesiredLambda_idx ? u :
      rtb_DesiredLambda_idx;

    /* DataTypeConversion: '<S119>/Data Type Conversion' */
    BaseEngineController_LS_B.s118_FAN2 =
      ((BaseEngineController_LS_B.s132_MinMax1 != 0.0));

    /* Product: '<S132>/Product' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S132>/motohawk_data_read6'
     */
    rtb_Product_o = (uint8_T)(BaseEngineController_LS_B.s176_Switch1 ? ((uint8_T)
      Fan1ECT_DataStore()) : 0);

    /* Product: '<S132>/Product1' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S132>/motohawk_data_read7'
     */
    rtb_Product1_gw = (uint8_T)(BaseEngineController_LS_B.s177_Switch1 ?
      ((uint8_T)Fan1IAT_DataStore()) : 0);

    /* Product: '<S132>/Product2' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S132>/motohawk_data_read8'
     */
    rtb_Product2_m = (uint8_T)(BaseEngineController_LS_B.s178_Switch1 ?
      ((uint8_T)Fan1ACPres_DataStore()) : 0);

    /* S-Function (motohawk_sfun_data_read): '<S132>/motohawk_data_read9' */
    rtb_motohawk_data_read9 = Fan1ACSw_DataStore();

    /* MinMax: '<S132>/MinMax' incorporates:
     *  Product: '<S132>/Product3'
     */
    u = (real_T)rtb_Product_o;
    rtb_DesiredLambda_idx = (real_T)rtb_Product1_gw;
    u = u >= rtb_DesiredLambda_idx ? u : rtb_DesiredLambda_idx;
    rtb_DesiredLambda_idx = (real_T)rtb_Product2_m;
    u = u >= rtb_DesiredLambda_idx ? u : rtb_DesiredLambda_idx;
    rtb_DesiredLambda_idx = rtb_Switch1_n * (real_T)rtb_motohawk_data_read9;
    BaseEngineController_LS_B.s132_MinMax = u >= rtb_DesiredLambda_idx ? u :
      rtb_DesiredLambda_idx;

    /* DataTypeConversion: '<S119>/Data Type Conversion1' */
    BaseEngineController_LS_B.s118_FAN1 =
      ((BaseEngineController_LS_B.s132_MinMax != 0.0));

    /* Outputs for Atomic SubSystem: '<S119>/O2 Control' */

    /* S-Function (motohawk_sfun_fault_action): '<S137>/motohawk_fault_action'
     *
     * Regarding '<S137>/motohawk_fault_action':
       Get Fault Action Status: DisableO2Ctrl
     */
    {
      extern boolean_T GetFaultActionStatus(uint32_T action);
      rtb_motohawk_fault_action_b = GetFaultActionStatus(4);
    }

    /* S-Function (motohawk_sfun_data_write): '<S137>/motohawk_data_write' */
    /* Write to Data Storage as scalar: DisableO2FaultAction */
    {
      DisableO2FaultAction_DataStore() = rtb_motohawk_fault_action_b;
    }

    /* Inport: '<S137>/Desired_Equiv' */
    rtb_DesiredLambda_idx = BaseEngineController_LS_B.s170_EquivOut;
    rtb_DesiredLambda_idx_0 = rtb_WarmUpMult;
    rtb_DesiredLambda_idx_1 = rtb_Switch_c;

    /* Logic: '<S255>/Logical Operator' incorporates:
     *  Constant: '<S255>/Constant'
     *  RelationalOperator: '<S255>/Relational Operator'
     *  RelationalOperator: '<S255>/Relational Operator1'
     *  S-Function (motohawk_sfun_calibration): '<S255>/motohawk_calibration1'
     *  Sum: '<S255>/Sum'
     *  Sum: '<S255>/Sum1'
     */
    BaseEngineController_LS_B.s255_LogicalOperator = (((rtb_DesiredLambda_idx <=
      (EquivRatioDelta_DataStore()) + 1.0) && (rtb_DesiredLambda_idx >= 1.0 -
      (EquivRatioDelta_DataStore()))));

    /* Logic: '<S255>/Logical Operator3' */
    BaseEngineController_LS_B.s255_LogicalOperator3 =
      !rtb_motohawk_fault_action_b;

    /* S-Function Block: <S255>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_f = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_j, (real_T *) ((O2StartUpDelayTbl_DataStore())),
         9);
      (O2StartUpDelay_DataStore()) = rtb_motohawk_interpolation_1d_f;
    }

    /* RelationalOperator: '<S255>/Relational Operator5' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S255>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_prelookup): '<S397>/motohawk_prelookup'
     */
    BaseEngineController_LS_B.s255_RelationalOperator5 =
      ((BaseEngineController_LS_B.s394_Switch >= rtb_motohawk_interpolation_1d_f));

    /* Logic: '<S255>/Logical Operator2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S255>/motohawk_calibration2'
     */
    BaseEngineController_LS_B.s255_LogicalOperator2 =
      ((BaseEngineController_LS_B.s346_LogicalOperator &&
        BaseEngineController_LS_B.s255_LogicalOperator &&
        BaseEngineController_LS_B.s255_LogicalOperator3 &&
        (O2ControlEnable_DataStore()) &&
        BaseEngineController_LS_B.s255_RelationalOperator5));

    /* Logic: '<S137>/Logical Operator2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S137>/motohawk_calibration'
     */
    rtb_LogicalOperator2_dx = ((((int8_T)(O2DisablmentMult_DataStore())) != 0) &&
      BaseEngineController_LS_B.s255_LogicalOperator2);

    /* Logic: '<S137>/Logical Operator' */
    rtb_RelationalOperator2_i = !BaseEngineController_LS_B.s255_LogicalOperator2;

    /* S-Function Block: <S259>/motohawk_interpolation_2d2 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_RichEquivRatioSwPtDelta = TableInterpolation2D_real_T
        (BaseEngineController_LS_B.s359_motohawk_prelookup1,
         BaseEngineController_LS_B.s360_motohawk_prelookup1, (real_T *)
         ((RichSwPtDeltaMap_DataStore())), 9, 9);
      (RichSwPtDelta_DataStore()) = rtb_RichEquivRatioSwPtDelta;
    }

    /* S-Function Block: <S259>/motohawk_interpolation_2d3 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_LeanEquivRatioSwPtDelta = TableInterpolation2D_real_T
        (BaseEngineController_LS_B.s359_motohawk_prelookup1,
         BaseEngineController_LS_B.s360_motohawk_prelookup1, (real_T *)
         ((LeanSwPtDeltaMap_DataStore())), 9, 9);
      (LeanSwPtDelta_DataStore()) = rtb_LeanEquivRatioSwPtDelta;
    }

    /* S-Function Block: <S258>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_i = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup1_h, (real_T *) ((O2NECCTErrGainMultTbl_DataStore
           ())), 9);
      (O2NECCTErrGainMult_DataStore()) = rtb_motohawk_interpolation_1d_i;
    }

    /* S-Function Block: <S258>/motohawk_interpolation_1d1 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d1_o0 = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_o, (real_T *) ((O2MAFErrGainMultTbl_DataStore())),
         5);
      (O2MAFErrGainMult_DataStore()) = rtb_motohawk_interpolation_1d1_o0;
    }

    /* Product: '<S258>/Product' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S258>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S258>/motohawk_interpolation_1d1'
     *  S-Function (motohawk_sfun_prelookup): '<S357>/motohawk_prelookup1'
     *  S-Function (motohawk_sfun_prelookup): '<S399>/motohawk_prelookup'
     */
    rtb_Product1_l2 = rtb_motohawk_interpolation_1d_i *
      rtb_motohawk_interpolation_1d1_o0;

    /* Logic: '<S137>/Logical Operator1' */
    rtb_LogicalOperator1_j = !rtb_RelOp_hf;

    /* Outputs for Atomic SubSystem: '<S137>/O2 PID Controller' */
    /* RelationalOperator: '<S261>/LT' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S259>/motohawk_interpolation_2d2'
     *  Sum: '<S261>/Sum3'
     */
    rtb_AboveRich = (BaseEngineController_LS_B.s372_Sum1 >=
                     rtb_DesiredLambda_idx + rtb_RichEquivRatioSwPtDelta);

    /* RelationalOperator: '<S261>/LT1' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S259>/motohawk_interpolation_2d3'
     *  Sum: '<S261>/Sum4'
     */
    rtb_LogicalOperator2_ig = (BaseEngineController_LS_B.s372_Sum1 <=
      rtb_DesiredLambda_idx - rtb_LeanEquivRatioSwPtDelta);

    /* CombinatorialLogic: '<S268>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_AboveRich != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_LogicalOperator2_ig != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic[0] =
        BaseEngineController_LS_ConstP.pooled728[rowidx];
      rtb_CombinatorialLogic[1] =
        BaseEngineController_LS_ConstP.pooled728[rowidx + 4];
    }

    /* Switch: '<S268>/Switch1' incorporates:
     *  UnitDelay: '<S268>/Unit Delay'
     */
    if (rtb_CombinatorialLogic[1]) {
      rtb_Switch1_mj = rtb_CombinatorialLogic[0];
    } else {
      rtb_Switch1_mj = BaseEngineController_LS_DWork.s268_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S268>/Switch1' */

    /* Switch: '<S257>/Switch' */
    if (rtb_RelationalOperator2_i) {
      BaseEngineController_LS_B.s257_Switch =
        BaseEngineController_LS_B.s372_Sum1;
    } else {
      /* Switch: '<S261>/Switch2' incorporates:
       *  Logic: '<S261>/Logical Operator'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S259>/motohawk_interpolation_2d'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S259>/motohawk_interpolation_2d1'
       *  Sum: '<S261>/Sum1'
       *  Sum: '<S261>/Sum2'
       */
      if (!rtb_Switch1_mj) {
        /* S-Function Block: <S259>/motohawk_interpolation_2d */
        {
          extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
            col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
          rtb_RichEquivRatioTargetDelta_p = TableInterpolation2D_real_T
            (BaseEngineController_LS_B.s359_motohawk_prelookup1,
             BaseEngineController_LS_B.s360_motohawk_prelookup1, (real_T *)
             ((RichTargetDeltaMap_DataStore())), 9, 9);
          (RichTargetDelta_DataStore()) = rtb_RichEquivRatioTargetDelta_p;
        }

        BaseEngineController_LS_B.s257_Switch = rtb_RichEquivRatioTargetDelta_p
          + rtb_DesiredLambda_idx;
      } else {
        /* S-Function Block: <S259>/motohawk_interpolation_2d1 */
        {
          extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
            col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
          rtb_LeanEquivRatioTargetDelta = TableInterpolation2D_real_T
            (BaseEngineController_LS_B.s359_motohawk_prelookup1,
             BaseEngineController_LS_B.s360_motohawk_prelookup1, (real_T *)
             ((LeanTargetDeltaMap_DataStore())), 9, 9);
          (LeanTargetDelta_DataStore()) = rtb_LeanEquivRatioTargetDelta;
        }

        BaseEngineController_LS_B.s257_Switch = rtb_DesiredLambda_idx -
          rtb_LeanEquivRatioTargetDelta;
      }

      /* End of Switch: '<S261>/Switch2' */
    }

    /* End of Switch: '<S257>/Switch' */

    /* Sum: '<S263>/Sum2' */
    BaseEngineController_LS_B.s263_Sum2 = BaseEngineController_LS_B.s257_Switch
      - BaseEngineController_LS_B.s372_Sum1;

    /* Product: '<S263>/Product5' */
    rtb_Switch1_n = BaseEngineController_LS_B.s263_Sum2 * rtb_Product1_l2;

    /* Product: '<S263>/Product2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S256>/motohawk_calibration5'
     */
    BaseEngineController_LS_B.s263_Product2 = rtb_Switch1_n *
      (O2CtrlPGain_DataStore());

    /* Switch: '<S265>/Switch1' incorporates:
     *  Constant: '<S260>/Constant'
     *  UnitDelay: '<S265>/Unit Delay'
     */
    if (rtb_LogicalOperator1_j) {
      BaseEngineController_LS_B.s265_Switch1 = 0.0;
    } else {
      BaseEngineController_LS_B.s265_Switch1 =
        BaseEngineController_LS_DWork.s265_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S265>/Switch1' */

    /* Product: '<S263>/Product4' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S256>/motohawk_calibration7'
     */
    rtb_Product4_o = rtb_Switch1_n * (O2CtrlDGain_DataStore());

    /* Sum: '<S264>/Sum2' incorporates:
     *  UnitDelay: '<S264>/Unit Delay'
     */
    rtb_Product1_l2 = rtb_Product4_o -
      BaseEngineController_LS_DWork.s264_UnitDelay_DSTATE;

    /* S-Function Block: <S264>/motohawk_delta_time */
    rtb_motohawk_delta_time_kr = 0.005;

    /* Product: '<S264>/Product' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S264>/motohawk_delta_time'
     */
    BaseEngineController_LS_B.s264_Product = rtb_Product1_l2 /
      rtb_motohawk_delta_time_kr;

    /* MinMax: '<S262>/MinMax' incorporates:
     *  Constant: '<S260>/Convert to Fuel Multiplier'
     *  S-Function (motohawk_sfun_calibration): '<S256>/motohawk_calibration11'
     *  Sum: '<S260>/Sum'
     *  Sum: '<S263>/Sum1'
     */
    u = ((BaseEngineController_LS_B.s263_Product2 +
          BaseEngineController_LS_B.s264_Product) +
         BaseEngineController_LS_B.s265_Switch1) + 1.0;
    u = (u >= (O2CtrlPIDOutLowerLimit_DataStore())) || rtIsNaN
      ((O2CtrlPIDOutLowerLimit_DataStore())) ? u :
      (O2CtrlPIDOutLowerLimit_DataStore());

    /* MinMax: '<S262>/MinMax1' incorporates:
     *  MinMax: '<S262>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S256>/motohawk_calibration10'
     */
    rtb_Switch_c = (u <= (O2CtrlPIDOutUpperLimit_DataStore())) || rtIsNaN
      ((O2CtrlPIDOutUpperLimit_DataStore())) ? u :
      (O2CtrlPIDOutUpperLimit_DataStore());

    /* Product: '<S263>/Product1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S256>/motohawk_calibration6'
     */
    rtb_Product1_l2 = rtb_Switch1_n * (O2CtrlIGain_DataStore());

    /* S-Function Block: <S265>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s265_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_mn = ((real_T) delta) * 0.000001;
    }

    /* MinMax: '<S267>/MinMax' incorporates:
     *  Product: '<S265>/Product'
     *  S-Function (motohawk_sfun_calibration): '<S256>/motohawk_calibration8'
     *  S-Function (motohawk_sfun_delta_time): '<S265>/motohawk_delta_time'
     *  Sum: '<S265>/Sum'
     */
    u = rtb_Product1_l2 * rtb_motohawk_delta_time_mn +
      BaseEngineController_LS_B.s265_Switch1;
    u = (u >= (O2ITermLowerLimit_DataStore())) || rtIsNaN
      ((O2ITermLowerLimit_DataStore())) ? u : (O2ITermLowerLimit_DataStore());

    /* MinMax: '<S267>/MinMax1' incorporates:
     *  MinMax: '<S267>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S256>/motohawk_calibration9'
     */
    rtb_Sum_dn = (u <= (O2ITermUpperLimit_DataStore())) || rtIsNaN
      ((O2ITermUpperLimit_DataStore())) ? u : (O2ITermUpperLimit_DataStore());

    /* UnitDelay: '<S261>/Unit Delay1' */
    rtb_Switch1_n = BaseEngineController_LS_DWork.s261_UnitDelay1_DSTATE;

    /* Logic: '<S261>/Logical Operator10' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S261>/motohawk_data_read'
     */
    rtb_LogicalOperator1_dv = (rtb_LogicalOperator2_ig &&
      DisableO2FaultAction_DataStore());

    /* S-Function Block: <S269>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s269_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_bm = ((real_T) delta) * 0.000001;
    }

    /* Logic: '<S261>/Logical Operator4' */
    rtb_RelOp_pu = !rtb_RelationalOperator2_i;

    /* Logic: '<S261>/Logical Operator6' */
    rtb_LogicalOperator1_j = !rtb_LogicalOperator1_j;

    /* Switch: '<S269>/Switch' incorporates:
     *  Constant: '<S269>/Constant'
     *  Logic: '<S261>/Logical Operator7'
     *  S-Function (motohawk_sfun_data_read): '<S269>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S269>/motohawk_delta_time'
     *  Sum: '<S269>/Sum'
     */
    if (rtb_LogicalOperator2_ig && rtb_RelOp_pu && rtb_LogicalOperator1_j) {
      rtb_Product1_l2 = rtb_motohawk_delta_time_bm + O2LeanTimer_DataStore();
    } else {
      rtb_Product1_l2 = 0.0;
    }

    /* End of Switch: '<S269>/Switch' */

    /* Switch: '<S261>/Switch3' */
    if (rtb_LogicalOperator1_dv) {
      BaseEngineController_LS_B.s261_Switch3 = rtb_Switch1_n;
    } else {
      BaseEngineController_LS_B.s261_Switch3 = rtb_Product1_l2;
    }

    /* End of Switch: '<S261>/Switch3' */
    /* RelationalOperator: '<S261>/LT3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S261>/motohawk_calibration2'
     */
    rtb_LT3 = ((BaseEngineController_LS_B.s261_Switch3 >=
                (O2LeanTimeThresh_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S261>/motohawk_fault_def' */

    /* Set Fault Suspected Status: O2FailedLean */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(79, rtb_LT3);
      UpdateFault(79);
    }

    /* UnitDelay: '<S261>/Unit Delay' */
    rtb_Switch1_n = BaseEngineController_LS_DWork.s261_UnitDelay_DSTATE;

    /* Logic: '<S261>/Logical Operator9' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S261>/motohawk_data_read'
     */
    rtb_RelationalOperator2_i = (rtb_AboveRich && DisableO2FaultAction_DataStore
                                 ());

    /* S-Function Block: <S271>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s271_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_oq = ((real_T) delta) * 0.000001;
    }

    /* Switch: '<S271>/Switch' incorporates:
     *  Constant: '<S271>/Constant'
     *  Logic: '<S261>/Logical Operator5'
     *  S-Function (motohawk_sfun_data_read): '<S271>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S271>/motohawk_delta_time'
     *  Sum: '<S271>/Sum'
     */
    if (rtb_AboveRich && rtb_RelOp_pu && rtb_LogicalOperator1_j) {
      rtb_Product1_ii = rtb_motohawk_delta_time_oq + O2RichTimer_DataStore();
    } else {
      rtb_Product1_ii = 0.0;
    }

    /* End of Switch: '<S271>/Switch' */

    /* Switch: '<S261>/Switch1' */
    if (rtb_RelationalOperator2_i) {
      BaseEngineController_LS_B.s261_Switch1 = rtb_Switch1_n;
    } else {
      BaseEngineController_LS_B.s261_Switch1 = rtb_Product1_ii;
    }

    /* End of Switch: '<S261>/Switch1' */
    /* RelationalOperator: '<S261>/LT2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S261>/motohawk_calibration1'
     */
    rtb_LT2 = ((BaseEngineController_LS_B.s261_Switch1 >=
                (O2RichTimeThresh_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S261>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: O2FailedRich */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(80, rtb_LT2);
      UpdateFault(80);
    }

    /* UnitDelay: '<S261>/Unit Delay2' */
    rtb_Switch1_n = BaseEngineController_LS_DWork.s261_UnitDelay2_DSTATE;

    /* Logic: '<S261>/Logical Operator2' incorporates:
     *  Logic: '<S261>/Logical Operator1'
     *  Logic: '<S261>/Logical Operator3'
     */
    rtb_LogicalOperator2_ig = ((!rtb_LogicalOperator2_ig) && (!rtb_AboveRich));

    /* Logic: '<S261>/Logical Operator11' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S261>/motohawk_data_read'
     */
    rtb_RelationalOperator2_i = (rtb_LogicalOperator2_ig &&
      DisableO2FaultAction_DataStore());

    /* S-Function Block: <S270>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s270_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_ad = ((real_T) delta) * 0.000001;
    }

    /* Switch: '<S270>/Switch' incorporates:
     *  Constant: '<S270>/Constant'
     *  Logic: '<S261>/Logical Operator8'
     *  S-Function (motohawk_sfun_data_read): '<S270>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S270>/motohawk_delta_time'
     *  Sum: '<S270>/Sum'
     */
    if (rtb_LogicalOperator2_ig && rtb_RelOp_pu && rtb_LogicalOperator1_j) {
      rtb_Sum_cy = rtb_motohawk_delta_time_ad + O2ActiveTimer_DataStore();
    } else {
      rtb_Sum_cy = 0.0;
    }

    /* End of Switch: '<S270>/Switch' */

    /* Switch: '<S261>/Switch4' */
    if (rtb_RelationalOperator2_i) {
      BaseEngineController_LS_B.s261_Switch4 = rtb_Switch1_n;
    } else {
      BaseEngineController_LS_B.s261_Switch4 = rtb_Sum_cy;
    }

    /* End of Switch: '<S261>/Switch4' */
    /* RelationalOperator: '<S261>/LT4' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S261>/motohawk_calibration3'
     */
    rtb_LT4 = ((BaseEngineController_LS_B.s261_Switch4 >=
                (O2ActiveTimeThresh_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S261>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: O2NotActive */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(81, rtb_LT4);
      UpdateFault(81);
    }

    /* Saturate: '<S269>/Saturation' */
    rtb_Saturation_nb = rtb_Product1_l2 >= 16000.0 ? 16000.0 : rtb_Product1_l2 <=
      0.0 ? 0.0 : rtb_Product1_l2;

    /* S-Function (motohawk_sfun_data_write): '<S269>/motohawk_data_write' */
    /* Write to Data Storage as scalar: O2LeanTimer */
    {
      O2LeanTimer_DataStore() = rtb_Saturation_nb;
    }

    /* Saturate: '<S270>/Saturation' */
    rtb_Saturation_mr = rtb_Sum_cy >= 16000.0 ? 16000.0 : rtb_Sum_cy <= 0.0 ?
      0.0 : rtb_Sum_cy;

    /* S-Function (motohawk_sfun_data_write): '<S270>/motohawk_data_write' */
    /* Write to Data Storage as scalar: O2ActiveTimer */
    {
      O2ActiveTimer_DataStore() = rtb_Saturation_mr;
    }

    /* Saturate: '<S271>/Saturation' */
    rtb_Saturation_c3 = rtb_Product1_ii >= 16000.0 ? 16000.0 : rtb_Product1_ii <=
      0.0 ? 0.0 : rtb_Product1_ii;

    /* S-Function (motohawk_sfun_data_write): '<S271>/motohawk_data_write' */
    /* Write to Data Storage as scalar: O2RichTimer */
    {
      O2RichTimer_DataStore() = rtb_Saturation_c3;
    }

    /* InitialCondition: '<S257>/Multiply by 1.0 if not yet enabled' */
    if (BaseEngineController_LS_DWork.s257_Multiplyby10ifnotyetenabled_FirstOutputTime)
    {
      BaseEngineController_LS_DWork.s257_Multiplyby10ifnotyetenabled_FirstOutputTime
        = FALSE;
      rtb_Switch_c = 1.0;
    }

    /* End of InitialCondition: '<S257>/Multiply by 1.0 if not yet enabled' */

    /* Update for UnitDelay: '<S268>/Unit Delay' */
    BaseEngineController_LS_DWork.s268_UnitDelay_DSTATE = rtb_Switch1_mj;

    /* Update for UnitDelay: '<S265>/Unit Delay' incorporates:
     *  MinMax: '<S267>/MinMax1'
     */
    BaseEngineController_LS_DWork.s265_UnitDelay_DSTATE = rtb_Sum_dn;

    /* Update for UnitDelay: '<S264>/Unit Delay' */
    BaseEngineController_LS_DWork.s264_UnitDelay_DSTATE = rtb_Product4_o;

    /* Update for UnitDelay: '<S261>/Unit Delay1' */
    BaseEngineController_LS_DWork.s261_UnitDelay1_DSTATE =
      BaseEngineController_LS_B.s261_Switch3;

    /* Update for UnitDelay: '<S261>/Unit Delay' */
    BaseEngineController_LS_DWork.s261_UnitDelay_DSTATE =
      BaseEngineController_LS_B.s261_Switch1;

    /* Update for UnitDelay: '<S261>/Unit Delay2' */
    BaseEngineController_LS_DWork.s261_UnitDelay2_DSTATE =
      BaseEngineController_LS_B.s261_Switch4;

    /* End of Outputs for SubSystem: '<S137>/O2 PID Controller' */

    /* Switch: '<S137>/Switch' incorporates:
     *  Constant: '<S137>/Constant'
     */
    if (rtb_LogicalOperator2_dx) {
      BaseEngineController_LS_B.s137_O2FuelMult = 1.0;
    } else {
      BaseEngineController_LS_B.s137_O2FuelMult = rtb_Switch_c;
    }

    /* End of Switch: '<S137>/Switch' */

    /* S-Function (motohawk_sfun_probe): '<S255>/motohawk_probe9' */
    (O2Calibration_DataStore()) = (O2ControlEnable_DataStore());

    /* S-Function Block: <S137>/motohawk_prelookup13 */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (O2ITermIn_DataStore()) = BaseEngineController_LS_B.s265_Switch1;
      (O2ITermIdx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_LS_B.s265_Switch1, (O2ITermIdxArr_DataStore()), 9,
         (O2ITermIdx_DataStore()));
      rtb_ITermIdx = (O2ITermIdx_DataStore());
    }

    /* End of Outputs for SubSystem: '<S119>/O2 Control' */

    /* Outputs for Atomic SubSystem: '<S119>/Fuel System Manager' */

    /* S-Function Block: <S184>/motohawk_prelookup */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (DesAFRatioIn_DataStore()) = BaseEngineController_LS_B.s481_Merge;
      (DesAFRatioIdx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_LS_B.s481_Merge, (DesAFRatioIdxArr_DataStore()),
         11, (DesAFRatioIdx_DataStore()));
      rtb_motohawk_prelookup_hf = (DesAFRatioIdx_DataStore());
    }

    /* S-Function Block: <S184>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      BaseEngineController_LS_B.s184_motohawk_interpolation_1d =
        TableInterpolation1D_real_T(rtb_motohawk_prelookup_hf, (real_T *)
        ((DesAFRatioTbl_DataStore())), 11);
      (DesAFRatio_DataStore()) =
        BaseEngineController_LS_B.s184_motohawk_interpolation_1d;
    }

    /* Product: '<S182>/Fuel Flow = Mass Airflow * Equivalence Ratio // Air-to-fuel Ratio' */
    BaseEngineController_LS_B.s182_FuelFlowMassAirflowEquivalenceRatioAirtofuelRatio
      = BaseEngineController_LS_B.s337_MultiportSwitch * rtb_DesiredLambda_idx /
      BaseEngineController_LS_B.s184_motohawk_interpolation_1d;

    /* Product: '<S179>/Per-Cylinder Mass Flow Rate' incorporates:
     *  DataTypeConversion: '<S179>/Data Type Conversion'
     *  S-Function (motohawk_sfun_data_read): '<S179>/Number of Combustion Events Per Revolution'
     */
    BaseEngineController_LS_B.s179_PerCylinderMassFlowRate =
      BaseEngineController_LS_B.s182_FuelFlowMassAirflowEquivalenceRatioAirtofuelRatio
      / (real_T)((uint8_T)CombEventsPerRev_DataStore());

    /* Product: '<S179>/Apply Multipliers for O2, Knock Control, and Enrichment1' */
    BaseEngineController_LS_B.s179_ApplyMultipliersforO2KnockControlandEnrichment1
      = BaseEngineController_LS_B.s179_PerCylinderMassFlowRate *
      BaseEngineController_LS_B.s137_O2FuelMult;

    /* Outputs for Atomic SubSystem: '<S133>/Injector Manager' */

    /* Outputs for Enabled SubSystem: '<S180>/Delta TPS Transient Fueling' incorporates:
     *  EnablePort: '<S185>/Enable'
     */
    /* S-Function (motohawk_sfun_calibration): '<S180>/motohawk_calibration1' incorporates:
     *  Constant: '<S187>/Constant'
     *  RelationalOperator: '<S187>/RelOp'
     *  S-Function (motohawk_sfun_interpolation_2d): '<S185>/motohawk_interpolation_2d2'
     *  S-Function (motohawk_sfun_prelookup): '<S185>/motohawk_prelookup'
     *  S-Function (motohawk_sfun_prelookup): '<S185>/motohawk_prelookup1'
     */
    if ((DeltaTPSFuelingEnable_DataStore())) {
      if (!BaseEngineController_LS_DWork.s180_DeltaTPSTransientFueling_MODE) {
        /* S-Function Block: <S190>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_LS_DWork.s190_motohawk_delta_time_DWORK1 = now -
            Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }

        /* InitializeConditions for UnitDelay: '<S192>/Unit Delay' */
        BaseEngineController_LS_DWork.s192_UnitDelay_DSTATE = 0.0;

        /* S-Function Block: <S189>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_LS_DWork.s189_motohawk_delta_time_DWORK1 = now -
            Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }

        /* InitializeConditions for UnitDelay: '<S191>/Unit Delay' */
        BaseEngineController_LS_DWork.s191_UnitDelay_DSTATE = 0.0;
        BaseEngineController_LS_DWork.s180_DeltaTPSTransientFueling_MODE = TRUE;
      }

      /* S-Function Block: <S190>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s190_motohawk_delta_time_DWORK1, NULL);
        rtb_Product_mq = ((real_T) delta) * 0.000001;
      }

      /* Product: '<S190>/Product' incorporates:
       *  MinMax: '<S190>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S190>/motohawk_calibration'
       */
      rtb_Product_mq /= (rtb_Product_mq >= (DeltaMAP_FiltConst_DataStore())) ||
        rtIsNaN((DeltaMAP_FiltConst_DataStore())) ? rtb_Product_mq :
        (DeltaMAP_FiltConst_DataStore());

      /* Sum: '<S192>/Sum1' incorporates:
       *  Constant: '<S192>/Constant'
       *  Product: '<S192>/Product'
       *  Product: '<S192>/Product1'
       *  Sum: '<S192>/Sum'
       *  UnitDelay: '<S192>/Unit Delay'
       */
      BaseEngineController_LS_B.s192_Sum1 = (1.0 - rtb_Product_mq) *
        BaseEngineController_LS_DWork.s192_UnitDelay_DSTATE +
        BaseEngineController_LS_B.s502_Merge * rtb_Product_mq;

      /* Sum: '<S185>/Sum1' */
      BaseEngineController_LS_B.s185_Sum1 = BaseEngineController_LS_B.s502_Merge
        - BaseEngineController_LS_B.s192_Sum1;

      /* S-Function Block: <S189>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s189_motohawk_delta_time_DWORK1, NULL);
        rtb_Product_mq = ((real_T) delta) * 0.000001;
      }

      /* Product: '<S189>/Product' incorporates:
       *  MinMax: '<S189>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S189>/motohawk_calibration'
       */
      rtb_Product_mq /= (rtb_Product_mq >= (DeltaTPS_FiltConst_DataStore())) ||
        rtIsNaN((DeltaTPS_FiltConst_DataStore())) ? rtb_Product_mq :
        (DeltaTPS_FiltConst_DataStore());

      /* Sum: '<S191>/Sum1' incorporates:
       *  Constant: '<S191>/Constant'
       *  Product: '<S191>/Product'
       *  Product: '<S191>/Product1'
       *  Sum: '<S191>/Sum'
       *  UnitDelay: '<S191>/Unit Delay'
       */
      BaseEngineController_LS_B.s191_Sum1 = (1.0 - rtb_Product_mq) *
        BaseEngineController_LS_DWork.s191_UnitDelay_DSTATE +
        BaseEngineController_LS_B.s374_Switch2 * rtb_Product_mq;

      /* Sum: '<S185>/Sum' */
      BaseEngineController_LS_B.s185_Sum =
        BaseEngineController_LS_B.s374_Switch2 -
        BaseEngineController_LS_B.s191_Sum1;

      /* S-Function Block: <S185>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (MAF09In_DataStore()) = BaseEngineController_LS_B.s337_MultiportSwitch;
        (MAF09Idx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_LS_B.s337_MultiportSwitch,
           (MAF09IdxArr_DataStore()), 9, (MAF09Idx_DataStore()));
        rtb_motohawk_prelookup_ag = (MAF09Idx_DataStore());
      }

      /* S-Function Block: <S185>/motohawk_prelookup1 */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (DeltaTPS17In_DataStore()) = BaseEngineController_LS_B.s185_Sum;
        (DeltaTPS17Idx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_LS_B.s185_Sum, (DeltaTPS17IdxArr_DataStore()),
           17, (DeltaTPS17Idx_DataStore()));
        rtb_motohawk_prelookup1_jq = (DeltaTPS17Idx_DataStore());
      }

      /* S-Function Block: <S185>/motohawk_interpolation_2d2 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_motohawk_interpolation_2d2_a = TableInterpolation2D_real_T
          (rtb_motohawk_prelookup_ag, rtb_motohawk_prelookup1_jq, (real_T *)
           ((DeltaTPS_MultMap_DataStore())), 9, 17);
        (DeltaTPS_Mult_DataStore()) = rtb_motohawk_interpolation_2d2_a;
      }

      /* Outputs for Enabled SubSystem: '<S185>/ECT Transient Fueling' incorporates:
       *  EnablePort: '<S188>/Enable'
       */
      if (rtb_motohawk_interpolation_2d2_a != 1.0) {
        if (!BaseEngineController_LS_DWork.s185_ECTTransientFueling_MODE) {
          BaseEngineController_LS_DWork.s185_ECTTransientFueling_MODE = TRUE;
        }

        /* S-Function Block: <S188>/motohawk_interpolation_1d */
        {
          extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T
            *tbl_data, uint32_T sz);
          BaseEngineController_LS_B.s188_motohawk_interpolation_1d =
            TableInterpolation1D_real_T
            (BaseEngineController_LS_B.s357_motohawk_prelookup, (real_T *)
             ((ECTTransFuelMultTbl_DataStore())), 5);
          (ECTTransFuelMult_DataStore()) =
            BaseEngineController_LS_B.s188_motohawk_interpolation_1d;
        }
      } else {
        if (BaseEngineController_LS_DWork.s185_ECTTransientFueling_MODE) {
          /* Disable for Outport: '<S188>/Mult' */
          BaseEngineController_LS_B.s188_motohawk_interpolation_1d = 1.0;
          BaseEngineController_LS_DWork.s185_ECTTransientFueling_MODE = FALSE;
        }
      }

      /* End of Outputs for SubSystem: '<S185>/ECT Transient Fueling' */
      /* S-Function Block: <S185>/motohawk_prelookup3 */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (DeltaMAP17In_DataStore()) = BaseEngineController_LS_B.s185_Sum1;
        (DeltaMAP17Idx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_LS_B.s185_Sum1, (DeltaMAP17IdxArr_DataStore()),
           17, (DeltaMAP17Idx_DataStore()));
        rtb_motohawk_prelookup3 = (DeltaMAP17Idx_DataStore());
      }

      /* S-Function Block: <S185>/motohawk_interpolation_2d1 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_motohawk_interpolation_2d1_a = TableInterpolation2D_real_T
          (rtb_motohawk_prelookup_ag, rtb_motohawk_prelookup3, (real_T *)
           ((DeltaMAP_MultMap_DataStore())), 9, 17);
        (DeltaMAP_Mult_DataStore()) = rtb_motohawk_interpolation_2d1_a;
      }

      /* Product: '<S185>/Product1' incorporates:
       *  Constant: '<S187>/Constant'
       *  RelationalOperator: '<S187>/RelOp'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S185>/motohawk_interpolation_2d1'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S185>/motohawk_interpolation_2d2'
       *  S-Function (motohawk_sfun_prelookup): '<S185>/motohawk_prelookup'
       *  S-Function (motohawk_sfun_prelookup): '<S185>/motohawk_prelookup1'
       *  S-Function (motohawk_sfun_prelookup): '<S185>/motohawk_prelookup3'
       */
      BaseEngineController_LS_B.s185_Product1 = rtb_motohawk_interpolation_2d2_a
        * BaseEngineController_LS_B.s188_motohawk_interpolation_1d *
        rtb_motohawk_interpolation_2d1_a;

      /* Update for UnitDelay: '<S192>/Unit Delay' */
      BaseEngineController_LS_DWork.s192_UnitDelay_DSTATE =
        BaseEngineController_LS_B.s192_Sum1;

      /* Update for UnitDelay: '<S191>/Unit Delay' */
      BaseEngineController_LS_DWork.s191_UnitDelay_DSTATE =
        BaseEngineController_LS_B.s191_Sum1;
    } else {
      if (BaseEngineController_LS_DWork.s180_DeltaTPSTransientFueling_MODE) {
        /* Disable for Enabled SubSystem: '<S185>/ECT Transient Fueling' */
        /* Disable for Outport: '<S188>/Mult' */
        BaseEngineController_LS_B.s188_motohawk_interpolation_1d = 1.0;
        BaseEngineController_LS_DWork.s185_ECTTransientFueling_MODE = FALSE;

        /* End of Disable for SubSystem: '<S185>/ECT Transient Fueling' */

        /* Disable for Outport: '<S185>/DeltaTPSMult' */
        BaseEngineController_LS_B.s185_Product1 = 1.0;
        BaseEngineController_LS_DWork.s180_DeltaTPSTransientFueling_MODE = FALSE;
      }
    }

    /* End of S-Function (motohawk_sfun_calibration): '<S180>/motohawk_calibration1' */
    /* End of Outputs for SubSystem: '<S180>/Delta TPS Transient Fueling' */

    /* Product: '<S180>/Divide' */
    rtb_Product1_l2 = BaseEngineController_LS_B.s185_Product1 *
      BaseEngineController_LS_B.s179_ApplyMultipliersforO2KnockControlandEnrichment1;

    /* S-Function Block: <S180>/Make-Up Pulse End of Injection Timing1 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_EOI = TableInterpolation2D_real_T
        (BaseEngineController_LS_B.s359_motohawk_prelookup1,
         BaseEngineController_LS_B.s360_motohawk_prelookup1, (real_T *)
         ((MakeUpEOIMap_DataStore())), 9, 9);
      (MakeUpEOI_DataStore()) = rtb_EOI;
    }

    /* Outputs for Enabled SubSystem: '<S186>/Multiply and Divide, avoiding divde by zero' incorporates:
     *  EnablePort: '<S193>/Enable'
     */
    /* RelationalOperator: '<S194>/RelOp' incorporates:
     *  Constant: '<S194>/Constant'
     */
    if (BaseEngineController_LS_B.s459_Sum1 != 0.0) {
      /* Product: '<S193>/charge mass' incorporates:
       *  Constant: '<S186>/Units Equivalency Factor'
       */
      BaseEngineController_LS_B.s193_chargemass = rtb_Product1_l2 * 60000.0 /
        BaseEngineController_LS_B.s459_Sum1;
    }

    /* End of RelationalOperator: '<S194>/RelOp' */
    /* End of Outputs for SubSystem: '<S186>/Multiply and Divide, avoiding divde by zero' */
    /* S-Function Block: <S180>/Primary Pulse Injection Timing */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_PrimaryPulseInjectionTiming = TableInterpolation2D_real_T
        (BaseEngineController_LS_B.s359_motohawk_prelookup1,
         BaseEngineController_LS_B.s360_motohawk_prelookup1, (real_T *)
         ((PrimarySOIMap_DataStore())), 9, 9);
      (PrimarySOI_DataStore()) = rtb_PrimaryPulseInjectionTiming;
    }

    /* End of Outputs for SubSystem: '<S133>/Injector Manager' */

    /* Outputs for Atomic SubSystem: '<S133>/O2 Fuel Adapt' */

    /* S-Function Block: <S181>/motohawk_interpolation_1d1 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d1_m = TableInterpolation1D_real_T
        (rtb_ITermIdx, (real_T *) ((FuelAdaptGainTbl_DataStore())), 9);
      (FuelAdaptGain_DataStore()) = rtb_motohawk_interpolation_1d1_m;
    }

    /* Product: '<S181>/Product0' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S181>/motohawk_interpolation_1d1'
     *  S-Function (motohawk_sfun_prelookup): '<S137>/motohawk_prelookup13'
     */
    rtb_Product1_l2 = BaseEngineController_LS_B.s265_Switch1 *
      rtb_motohawk_interpolation_1d1_m;

    /* MinMax: '<S200>/MinMax' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S197>/motohawk_calibration'
     */
    rtb_Product4_o = (rtb_Product1_l2 >= (FuelAdaptErrorLwrLim_DataStore())) ||
      rtIsNaN((FuelAdaptErrorLwrLim_DataStore())) ? rtb_Product1_l2 :
      (FuelAdaptErrorLwrLim_DataStore());

    /* MinMax: '<S200>/MinMax1' incorporates:
     *  MinMax: '<S200>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S197>/motohawk_calibration1'
     */
    BaseEngineController_LS_B.s200_MinMax1 = (rtb_Product4_o <=
      (FuelAdaptErrorUprLim_DataStore())) || rtIsNaN
      ((FuelAdaptErrorUprLim_DataStore())) ? rtb_Product4_o :
      (FuelAdaptErrorUprLim_DataStore());

    /* S-Function Block: <S181>/motohawk_interpolation_2d2 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_motohawk_interpolation_2d2_h = TableInterpolation2D_real_T
        (BaseEngineController_LS_B.s359_motohawk_prelookup1,
         BaseEngineController_LS_B.s360_motohawk_prelookup1, (real_T *)
         ((FuelFlowCompAdaptMap_DataStore())), 9, 9);
      (FuelFlowCompAdapt_DataStore()) = rtb_motohawk_interpolation_2d2_h;
    }

    /* Outputs for Atomic SubSystem: '<S181>/WarmUp Disable' */
    /* Logic: '<S198>/Logical Operator' incorporates:
     *  Constant: '<S198>/Constant'
     *  MinMax: '<S133>/MinMax'
     *  RelationalOperator: '<S198>/Relational Operator'
     */
    BaseEngineController_LS_B.s198_LogicalOperator = !(((rtb_DesiredLambda_idx_0
      >= rtb_DesiredLambda_idx_1) || rtIsNaN(rtb_DesiredLambda_idx_1) ?
      rtb_DesiredLambda_idx_0 : rtb_DesiredLambda_idx_1) > 1.01);

    /* End of Outputs for SubSystem: '<S181>/WarmUp Disable' */

    /* Outputs for Atomic SubSystem: '<S181>/O2 Control Enable Delay' */

    /* S-Function Block: <S199>/motohawk_delta_time */
    rtb_motohawk_delta_time_m3 = 0.005;

    /* Switch: '<S199>/Switch' incorporates:
     *  Constant: '<S199>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S199>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S199>/motohawk_delta_time'
     *  Sum: '<S199>/Sum'
     */
    if (BaseEngineController_LS_B.s255_LogicalOperator2) {
      rtb_Product1_l2 = rtb_motohawk_delta_time_m3 + LiqDelayTime_DataStore();
    } else {
      rtb_Product1_l2 = 0.0;
    }

    /* End of Switch: '<S199>/Switch' */
    /* RelationalOperator: '<S196>/Relational Operator' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S196>/motohawk_calibration1'
     */
    rtb_RelationalOperator2_i = (rtb_Product1_l2 >
      (O2CtrlAdaptDelayTime_DataStore()));

    /* Saturate: '<S199>/Saturation' */
    rtb_Saturation_gs = rtb_Product1_l2 >= 16000.0 ? 16000.0 : rtb_Product1_l2 <=
      0.0 ? 0.0 : rtb_Product1_l2;

    /* S-Function (motohawk_sfun_data_write): '<S199>/motohawk_data_write' */
    /* Write to Data Storage as scalar: LiqDelayTime */
    {
      LiqDelayTime_DataStore() = rtb_Saturation_gs;
    }

    /* End of Outputs for SubSystem: '<S181>/O2 Control Enable Delay' */

    /* Abs: '<S181>/Abs' */
    rtb_Product1_l2 = fabs(BaseEngineController_LS_B.s265_Switch1);

    /* Logic: '<S181>/Logical Operator2' incorporates:
     *  RelationalOperator: '<S181>/Relational Operator'
     *  S-Function (motohawk_sfun_calibration): '<S181>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S181>/motohawk_calibration1'
     *  S-Function (motohawk_sfun_calibration): '<S181>/motohawk_calibration2'
     */
    BaseEngineController_LS_B.s181_LogicalOperator2 =
      (((FuelAdaptEnable_DataStore()) && (AdaptEnable_DataStore()) &&
        BaseEngineController_LS_B.s198_LogicalOperator &&
        rtb_RelationalOperator2_i && (rtb_Product1_l2 <=
         (FuelAdaptDelta_DataStore()))));

    /* Outputs for Enabled SubSystem: '<S181>/Adapt FuelFlowComp Map' incorporates:
     *  EnablePort: '<S195>/Enable'
     */
    if (BaseEngineController_LS_B.s181_LogicalOperator2) {
      /* S-Function Block: <S195>/motohawk_adapt_table */
      /* Adapt 2-D Table */
      {
        uint32_T _row = ((MAP09Idx_DataStore())) >> 9;
        uint32_T _row_frac = (((MAP09Idx_DataStore())) & 0x01FF) >> 7;
        uint32_T _col = ((RPM09Idx_DataStore())) >> 9;
        uint32_T _col_frac = (((RPM09Idx_DataStore())) & 0x01FF) >> 7;
        real_T _new;
        if (_row >= 8) {
          _row = 8;
          _row_frac = 0;
        }

        if (_col >= 8) {
          _col = 8;
          _col_frac = 0;
        }

        if (_row_frac == 3) {
          _row++;
          _row_frac = 0;
        }

        if (_row_frac == 0) {
          if (_col_frac == 0) {
            _new = (FuelFlowCompAdaptMap_DataStore())[_row][_col] +
              BaseEngineController_LS_B.s200_MinMax1;
            if (_new > (FuelFlowCompMaxValue_DataStore()))
              _new = (FuelFlowCompMaxValue_DataStore());
            if (_new < (FuelFlowCompMinValue_DataStore()))
              _new = (FuelFlowCompMinValue_DataStore());
            (FuelFlowCompAdaptMap_DataStore())[_row][_col] = _new;
          } else if (_col_frac == 3) {
            _new = (FuelFlowCompAdaptMap_DataStore())[_row][_col+1] +
              BaseEngineController_LS_B.s200_MinMax1;
            if (_new > (FuelFlowCompMaxValue_DataStore()))
              _new = (FuelFlowCompMaxValue_DataStore());
            if (_new < (FuelFlowCompMinValue_DataStore()))
              _new = (FuelFlowCompMinValue_DataStore());
            (FuelFlowCompAdaptMap_DataStore())[_row][_col+1] = _new;
          }
        } else {
          if (_col_frac == 3) {
            _col++;
            _col_frac = 0;
          }
        }
      }

      /* RelationalOperator: '<S195>/Relational Operator2' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S195>/motohawk_calibration2'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S181>/motohawk_interpolation_2d2'
       */
      rtb_RelationalOperator2_pk = ((rtb_motohawk_interpolation_2d2_h >=
        (FuelFlowCompMaxValue_DataStore())));

      /* S-Function (motohawk_sfun_fault_def): '<S195>/motohawk_fault_def' */

      /* Set Fault Suspected Status: FuelAdaptRangeHi */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(44, rtb_RelationalOperator2_pk);
        UpdateFault(44);
      }

      /* RelationalOperator: '<S195>/Relational Operator1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S195>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S181>/motohawk_interpolation_2d2'
       */
      rtb_RelationalOperator1_n = ((rtb_motohawk_interpolation_2d2_h <=
        (FuelFlowCompMinValue_DataStore())));

      /* S-Function (motohawk_sfun_fault_def): '<S195>/motohawk_fault_def1' */

      /* Set Fault Suspected Status: FuelAdaptRangeLow */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(45, rtb_RelationalOperator1_n);
        UpdateFault(45);
      }
    }

    /* End of Outputs for SubSystem: '<S181>/Adapt FuelFlowComp Map' */

    /* S-Function Block: <S181>/motohawk_interpolation_2d1 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_motohawk_interpolation_2d1_p = TableInterpolation2D_real_T
        (BaseEngineController_LS_B.s359_motohawk_prelookup1,
         BaseEngineController_LS_B.s360_motohawk_prelookup1, (real_T *)
         ((FuelFlowCompMap_DataStore())), 9, 9);
      (FuelFlowComp_DataStore()) = rtb_motohawk_interpolation_2d1_p;
    }

    /* Product: '<S181>/Divide' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S181>/motohawk_interpolation_2d1'
     *  S-Function (motohawk_sfun_interpolation_2d): '<S181>/motohawk_interpolation_2d2'
     */
    rtb_Product1_l2 = rtb_motohawk_interpolation_2d1_p *
      rtb_motohawk_interpolation_2d2_h;

    /* End of Outputs for SubSystem: '<S133>/O2 Fuel Adapt' */
    /* End of Outputs for SubSystem: '<S119>/Fuel System Manager' */

    /* Switch: '<S134>/Switch4' incorporates:
     *  Constant: '<S134>/Constant2'
     *  Logic: '<S134>/Logical Operator'
     *  Sum: '<S134>/Sum2'
     */
    if (!BaseEngineController_LS_B.s237_RelOp) {
      rtb_Product1_ii = 0.0;
    } else {
      rtb_Product1_ii =
        BaseEngineController_LS_B.s227_DontallowsetpointtoeverdropbelowtheTargetRPM
        + BaseEngineController_LS_B.s136_MinGovAirPID;
    }

    /* End of Switch: '<S134>/Switch4' */
    /* Switch: '<S134>/Switch1' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S134>/motohawk_data_read'
     */
    if (((uint8_T)IACType_DataStore()) > 0) {
      /* ZeroOrderHold: '<S119>/Zero-Order Hold5' incorporates:
       *  Constant: '<S134>/Constant1'
       *  Sum: '<S134>/Sum'
       */
      BaseEngineController_LS_B.s118_IACS = 100.0 - rtb_Product1_ii;
    } else {
      /* ZeroOrderHold: '<S119>/Zero-Order Hold5' incorporates:
       *  Constant: '<S134>/Constant'
       */
      BaseEngineController_LS_B.s118_IACS = 0.0;
    }

    /* End of Switch: '<S134>/Switch1' */

    /* ZeroOrderHold: '<S119>/Zero-Order Hold1' */
    BaseEngineController_LS_B.s118_SparkEnergy =
      BaseEngineController_LS_B.s138_motohawk_interpolation_2d1;

    /* ZeroOrderHold: '<S119>/Zero-Order Hold11' */
    BaseEngineController_LS_B.s118_WASTEGATE = rtb_Switch_k2;

    /* ZeroOrderHold: '<S119>/Zero-Order Hold12' */
    BaseEngineController_LS_B.s118_SparkAdv =
      BaseEngineController_LS_B.s273_Switch;

    /* ZeroOrderHold: '<S119>/Zero-Order Hold16' incorporates:
     *  Constant: '<S119>/ON1'
     */
    BaseEngineController_LS_B.s118_FUELP = TRUE;

    /* ZeroOrderHold: '<S119>/Zero-Order Hold17' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S180>/Primary Pulse Injection Timing'
     */
    BaseEngineController_LS_B.s118_SOI = rtb_PrimaryPulseInjectionTiming;

    /* ZeroOrderHold: '<S119>/Zero-Order Hold18' */
    BaseEngineController_LS_B.s118_Throttle =
      BaseEngineController_LS_B.s128_MultiportSwitch;

    /* ZeroOrderHold: '<S119>/Zero-Order Hold2' */
    BaseEngineController_LS_B.s118_IACP = rtb_Product1_ii;

    /* ZeroOrderHold: '<S119>/Zero-Order Hold3' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S180>/Make-Up Pulse End of Injection Timing1'
     */
    BaseEngineController_LS_B.s118_MakeUpEOI = rtb_EOI;

    /* ZeroOrderHold: '<S119>/Zero-Order Hold4' */
    BaseEngineController_LS_B.s118_FuelMult = rtb_Product1_l2;

    /* ZeroOrderHold: '<S119>/Zero-Order Hold8' */
    BaseEngineController_LS_B.s118_AC =
      BaseEngineController_LS_B.s127_LogicalOperator;

    /* S-Function (motohawk_sfun_replicate): '<S119>/motohawk_replicate1' */

    /* S-Function Block: <S119>/motohawk_replicate1 */
    {
      int_T i1;
      real_T *y0 = BaseEngineController_LS_B.s118_FPC;
      for (i1=0; i1 < 8; i1++) {
        y0[i1] = BaseEngineController_LS_B.s193_chargemass;
      }
    }
  } else {
    if (BaseEngineController_LS_DWork.s15_Run_MODE) {
      /* Level2 S-Function Block: '<S119>/motohawk_trigger1' (motohawk_sfun_trigger) */
      /* Disable for Trigger_FGND_5XRTI_PERIODIC_4409p0005 */
      BaseEngineController_LS_DWork.s119_motohawk_trigger1_DWORK1 = 0;

      /* Disable for Atomic SubSystem: '<S119>/Fuel System Manager' */
      /* Disable for Atomic SubSystem: '<S133>/Injector Manager' */
      /* Disable for Enabled SubSystem: '<S180>/Delta TPS Transient Fueling' */
      /* Disable for Enabled SubSystem: '<S185>/ECT Transient Fueling' */
      /* Disable for Outport: '<S188>/Mult' */
      BaseEngineController_LS_B.s188_motohawk_interpolation_1d = 1.0;
      BaseEngineController_LS_DWork.s185_ECTTransientFueling_MODE = FALSE;

      /* End of Disable for SubSystem: '<S185>/ECT Transient Fueling' */

      /* Disable for Outport: '<S185>/DeltaTPSMult' */
      BaseEngineController_LS_B.s185_Product1 = 1.0;
      BaseEngineController_LS_DWork.s180_DeltaTPSTransientFueling_MODE = FALSE;

      /* End of Disable for SubSystem: '<S180>/Delta TPS Transient Fueling' */
      /* End of Disable for SubSystem: '<S133>/Injector Manager' */
      /* End of Disable for SubSystem: '<S119>/Fuel System Manager' */
      BaseEngineController_LS_DWork.s15_Run_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S15>/Run' */

  /* If: '<S707>/If' incorporates:
   *  Inport: '<S708>/In1'
   *  Inport: '<S709>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S707>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S707>/override_enable'
   */
  if ((AC_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S707>/NewValue' incorporates:
     *  ActionPort: '<S708>/Action Port'
     */
    rtb_RelationalOperator2_i = (AC_new_DataStore());

    /* End of Outputs for SubSystem: '<S707>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S707>/OldValue' incorporates:
     *  ActionPort: '<S709>/Action Port'
     */
    rtb_RelationalOperator2_i = BaseEngineController_LS_B.s118_AC;

    /* End of Outputs for SubSystem: '<S707>/OldValue' */
  }

  /* End of If: '<S707>/If' */

  /* Logic: '<S706>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S706>/0 = No Inversion 1 = Inversion'
   */
  BaseEngineController_LS_B.s706_LogicalOperator = rtb_RelationalOperator2_i ^
    (AC_Polarity_DataStore());

  /* S-Function (motohawk_sfun_trigger): '<S14>/motohawk_trigger1' */
  /* Enable for Trigger_FGND_5XRTI_PERIODIC_1090p0004 */
  if (BaseEngineController_LS_DWork.s14_motohawk_trigger1_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s14_motohawk_trigger1_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S14>/motohawk_trigger' */
  /* Enable for Trigger_FGND_5XRTI_PERIODIC_1089p0004 */
  if (BaseEngineController_LS_DWork.s14_motohawk_trigger_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s14_motohawk_trigger_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_fault_action): '<S22>/motohawk_fault_action1'
   *
   * Regarding '<S22>/motohawk_fault_action1':
     Get Fault Action Status: SoftRevLimit
   */
  {
    extern boolean_T GetFaultActionStatus(uint32_T action);
    rtb_motohawk_fault_action1_o = GetFaultActionStatus(10);
  }

  /* S-Function (motohawk_sfun_fault_action): '<S22>/motohawk_fault_action2'
   *
   * Regarding '<S22>/motohawk_fault_action2':
     Get Fault Action Status: MediumRevLimit
   */
  {
    extern boolean_T GetFaultActionStatus(uint32_T action);
    rtb_motohawk_fault_action2 = GetFaultActionStatus(9);
  }

  /* S-Function (motohawk_sfun_fault_action): '<S22>/motohawk_fault_action3'
   *
   * Regarding '<S22>/motohawk_fault_action3':
     Get Fault Action Status: HardRevLimit
   */
  {
    extern boolean_T GetFaultActionStatus(uint32_T action);
    rtb_motohawk_fault_action3 = GetFaultActionStatus(8);
  }

  /* Logic: '<S22>/Logical Operator4' */
  rtb_RelationalOperator2_i = (rtb_motohawk_fault_action1_o ||
    rtb_motohawk_fault_action2 || rtb_motohawk_fault_action3);

  /* Outputs for Enabled SubSystem: '<S22>/PassThrough1' incorporates:
   *  EnablePort: '<S93>/Enable'
   */
  if (rtb_motohawk_fault_action1_o) {
    if (!BaseEngineController_LS_DWork.s22_PassThrough1_MODE) {
      BaseEngineController_LS_DWork.s22_PassThrough1_MODE = TRUE;
    }

    /* Inport: '<S93>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S109>/motohawk_calibration10'
     *  S-Function (motohawk_sfun_calibration): '<S109>/motohawk_calibration11'
     *  S-Function (motohawk_sfun_calibration): '<S109>/motohawk_calibration12'
     *  S-Function (motohawk_sfun_calibration): '<S109>/motohawk_calibration13'
     *  S-Function (motohawk_sfun_calibration): '<S109>/motohawk_calibration14'
     *  S-Function (motohawk_sfun_calibration): '<S109>/motohawk_calibration15'
     *  S-Function (motohawk_sfun_calibration): '<S109>/motohawk_calibration8'
     *  S-Function (motohawk_sfun_calibration): '<S109>/motohawk_calibration9'
     *  S-Function (motohawk_sfun_calibration): '<S110>/motohawk_calibration10'
     *  S-Function (motohawk_sfun_calibration): '<S110>/motohawk_calibration11'
     *  S-Function (motohawk_sfun_calibration): '<S110>/motohawk_calibration12'
     *  S-Function (motohawk_sfun_calibration): '<S110>/motohawk_calibration13'
     *  S-Function (motohawk_sfun_calibration): '<S110>/motohawk_calibration14'
     *  S-Function (motohawk_sfun_calibration): '<S110>/motohawk_calibration15'
     *  S-Function (motohawk_sfun_calibration): '<S110>/motohawk_calibration8'
     *  S-Function (motohawk_sfun_calibration): '<S110>/motohawk_calibration9'
     *  S-Function (motohawk_sfun_calibration): '<S111>/motohawk_calibration10'
     *  S-Function (motohawk_sfun_calibration): '<S111>/motohawk_calibration11'
     *  S-Function (motohawk_sfun_calibration): '<S111>/motohawk_calibration12'
     *  S-Function (motohawk_sfun_calibration): '<S111>/motohawk_calibration13'
     *  S-Function (motohawk_sfun_calibration): '<S111>/motohawk_calibration14'
     *  S-Function (motohawk_sfun_calibration): '<S111>/motohawk_calibration15'
     *  S-Function (motohawk_sfun_calibration): '<S111>/motohawk_calibration8'
     *  S-Function (motohawk_sfun_calibration): '<S111>/motohawk_calibration9'
     *  S-Function (motohawk_sfun_calibration): '<S112>/motohawk_calibration10'
     *  S-Function (motohawk_sfun_calibration): '<S112>/motohawk_calibration11'
     *  S-Function (motohawk_sfun_calibration): '<S112>/motohawk_calibration12'
     *  S-Function (motohawk_sfun_calibration): '<S112>/motohawk_calibration13'
     *  S-Function (motohawk_sfun_calibration): '<S112>/motohawk_calibration14'
     *  S-Function (motohawk_sfun_calibration): '<S112>/motohawk_calibration15'
     *  S-Function (motohawk_sfun_calibration): '<S112>/motohawk_calibration8'
     *  S-Function (motohawk_sfun_calibration): '<S112>/motohawk_calibration9'
     */
    BaseEngineController_LS_B.s22_Merge1[0] = ((int8_T)(SoftCycle1Cyl1_DataStore
      ()));
    BaseEngineController_LS_B.s22_Merge1[1] = ((int8_T)(SoftCycle1Cyl2_DataStore
      ()));
    BaseEngineController_LS_B.s22_Merge1[2] = ((int8_T)(SoftCycle1Cyl3_DataStore
      ()));
    BaseEngineController_LS_B.s22_Merge1[3] = ((int8_T)(SoftCycle1Cyl4_DataStore
      ()));
    BaseEngineController_LS_B.s22_Merge1[4] = ((int8_T)(SoftCycle1Cyl5_DataStore
      ()));
    BaseEngineController_LS_B.s22_Merge1[5] = ((int8_T)(SoftCycle1Cyl6_DataStore
      ()));
    BaseEngineController_LS_B.s22_Merge1[6] = ((int8_T)(SoftCycle1Cyl7_DataStore
      ()));
    BaseEngineController_LS_B.s22_Merge1[7] = ((int8_T)(SoftCycle1Cyl8_DataStore
      ()));
    BaseEngineController_LS_B.s22_Merge1[8] = ((int8_T)(SoftCycle2Cyl1_DataStore
      ()));
    BaseEngineController_LS_B.s22_Merge1[9] = ((int8_T)(SoftCycle2Cyl2_DataStore
      ()));
    BaseEngineController_LS_B.s22_Merge1[10] = ((int8_T)
      (SoftCycle2Cyl3_DataStore()));
    BaseEngineController_LS_B.s22_Merge1[11] = ((int8_T)
      (SoftCycle2Cyl4_DataStore()));
    BaseEngineController_LS_B.s22_Merge1[12] = ((int8_T)
      (SoftCycle2Cyl5_DataStore()));
    BaseEngineController_LS_B.s22_Merge1[13] = ((int8_T)
      (SoftCycle2Cyl6_DataStore()));
    BaseEngineController_LS_B.s22_Merge1[14] = ((int8_T)
      (SoftCycle2Cyl7_DataStore()));
    BaseEngineController_LS_B.s22_Merge1[15] = ((int8_T)
      (SoftCycle2Cyl8_DataStore()));
    BaseEngineController_LS_B.s22_Merge1[16] = ((int8_T)
      (SoftCycle3Cyl1_DataStore()));
    BaseEngineController_LS_B.s22_Merge1[17] = ((int8_T)
      (SoftCycle3Cyl2_DataStore()));
    BaseEngineController_LS_B.s22_Merge1[18] = ((int8_T)
      (SoftCycle3Cyl3_DataStore()));
    BaseEngineController_LS_B.s22_Merge1[19] = ((int8_T)
      (SoftCycle3Cyl4_DataStore()));
    BaseEngineController_LS_B.s22_Merge1[20] = ((int8_T)
      (SoftCycle3Cyl5_DataStore()));
    BaseEngineController_LS_B.s22_Merge1[21] = ((int8_T)
      (SoftCycle3Cyl6_DataStore()));
    BaseEngineController_LS_B.s22_Merge1[22] = ((int8_T)
      (SoftCycle3Cyl7_DataStore()));
    BaseEngineController_LS_B.s22_Merge1[23] = ((int8_T)
      (SoftCycle3Cyl8_DataStore()));
    BaseEngineController_LS_B.s22_Merge1[24] = ((int8_T)
      (SoftCycle4Cyl1_DataStore()));
    BaseEngineController_LS_B.s22_Merge1[25] = ((int8_T)
      (SoftCycle4Cyl2_DataStore()));
    BaseEngineController_LS_B.s22_Merge1[26] = ((int8_T)
      (SoftCycle4Cyl3_DataStore()));
    BaseEngineController_LS_B.s22_Merge1[27] = ((int8_T)
      (SoftCycle4Cyl4_DataStore()));
    BaseEngineController_LS_B.s22_Merge1[28] = ((int8_T)
      (SoftCycle4Cyl5_DataStore()));
    BaseEngineController_LS_B.s22_Merge1[29] = ((int8_T)
      (SoftCycle4Cyl6_DataStore()));
    BaseEngineController_LS_B.s22_Merge1[30] = ((int8_T)
      (SoftCycle4Cyl7_DataStore()));
    BaseEngineController_LS_B.s22_Merge1[31] = ((int8_T)
      (SoftCycle4Cyl8_DataStore()));
  } else {
    if (BaseEngineController_LS_DWork.s22_PassThrough1_MODE) {
      /* Disable for Outport: '<S93>/Out1' */
      for (i = 0; i < 32; i++) {
        BaseEngineController_LS_B.s22_Merge1[i] = 0;
      }

      /* End of Outport: '<S93>/Out1' */
      BaseEngineController_LS_DWork.s22_PassThrough1_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S22>/PassThrough1' */
  /* Outputs for Enabled SubSystem: '<S22>/PassThrough2' incorporates:
   *  EnablePort: '<S94>/Enable'
   */
  if (rtb_motohawk_fault_action2) {
    /* Inport: '<S94>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S104>/motohawk_calibration10'
     *  S-Function (motohawk_sfun_calibration): '<S104>/motohawk_calibration11'
     *  S-Function (motohawk_sfun_calibration): '<S104>/motohawk_calibration12'
     *  S-Function (motohawk_sfun_calibration): '<S104>/motohawk_calibration13'
     *  S-Function (motohawk_sfun_calibration): '<S104>/motohawk_calibration14'
     *  S-Function (motohawk_sfun_calibration): '<S104>/motohawk_calibration15'
     *  S-Function (motohawk_sfun_calibration): '<S104>/motohawk_calibration8'
     *  S-Function (motohawk_sfun_calibration): '<S104>/motohawk_calibration9'
     *  S-Function (motohawk_sfun_calibration): '<S105>/motohawk_calibration10'
     *  S-Function (motohawk_sfun_calibration): '<S105>/motohawk_calibration11'
     *  S-Function (motohawk_sfun_calibration): '<S105>/motohawk_calibration12'
     *  S-Function (motohawk_sfun_calibration): '<S105>/motohawk_calibration13'
     *  S-Function (motohawk_sfun_calibration): '<S105>/motohawk_calibration14'
     *  S-Function (motohawk_sfun_calibration): '<S105>/motohawk_calibration15'
     *  S-Function (motohawk_sfun_calibration): '<S105>/motohawk_calibration8'
     *  S-Function (motohawk_sfun_calibration): '<S105>/motohawk_calibration9'
     *  S-Function (motohawk_sfun_calibration): '<S106>/motohawk_calibration10'
     *  S-Function (motohawk_sfun_calibration): '<S106>/motohawk_calibration11'
     *  S-Function (motohawk_sfun_calibration): '<S106>/motohawk_calibration12'
     *  S-Function (motohawk_sfun_calibration): '<S106>/motohawk_calibration13'
     *  S-Function (motohawk_sfun_calibration): '<S106>/motohawk_calibration14'
     *  S-Function (motohawk_sfun_calibration): '<S106>/motohawk_calibration15'
     *  S-Function (motohawk_sfun_calibration): '<S106>/motohawk_calibration8'
     *  S-Function (motohawk_sfun_calibration): '<S106>/motohawk_calibration9'
     *  S-Function (motohawk_sfun_calibration): '<S107>/motohawk_calibration10'
     *  S-Function (motohawk_sfun_calibration): '<S107>/motohawk_calibration11'
     *  S-Function (motohawk_sfun_calibration): '<S107>/motohawk_calibration12'
     *  S-Function (motohawk_sfun_calibration): '<S107>/motohawk_calibration13'
     *  S-Function (motohawk_sfun_calibration): '<S107>/motohawk_calibration14'
     *  S-Function (motohawk_sfun_calibration): '<S107>/motohawk_calibration15'
     *  S-Function (motohawk_sfun_calibration): '<S107>/motohawk_calibration8'
     *  S-Function (motohawk_sfun_calibration): '<S107>/motohawk_calibration9'
     */
    BaseEngineController_LS_B.s22_Merge1[0] = ((int8_T)
      (MediumCycle1Cyl1_DataStore()));
    BaseEngineController_LS_B.s22_Merge1[1] = ((int8_T)
      (MediumCycle1Cyl2_DataStore()));
    BaseEngineController_LS_B.s22_Merge1[2] = ((int8_T)
      (MediumCycle1Cyl3_DataStore()));
    BaseEngineController_LS_B.s22_Merge1[3] = ((int8_T)
      (MediumCycle1Cyl4_DataStore()));
    BaseEngineController_LS_B.s22_Merge1[4] = ((int8_T)
      (MediumCycle1Cyl5_DataStore()));
    BaseEngineController_LS_B.s22_Merge1[5] = ((int8_T)
      (MediumCycle1Cyl6_DataStore()));
    BaseEngineController_LS_B.s22_Merge1[6] = ((int8_T)
      (MediumCycle1Cyl7_DataStore()));
    BaseEngineController_LS_B.s22_Merge1[7] = ((int8_T)
      (MediumCycle1Cyl8_DataStore()));
    BaseEngineController_LS_B.s22_Merge1[8] = ((int8_T)
      (MediumCycle2Cyl1_DataStore()));
    BaseEngineController_LS_B.s22_Merge1[9] = ((int8_T)
      (MediumCycle2Cyl2_DataStore()));
    BaseEngineController_LS_B.s22_Merge1[10] = ((int8_T)
      (MediumCycle2Cyl3_DataStore()));
    BaseEngineController_LS_B.s22_Merge1[11] = ((int8_T)
      (MediumCycle2Cyl4_DataStore()));
    BaseEngineController_LS_B.s22_Merge1[12] = ((int8_T)
      (MediumCycle2Cyl5_DataStore()));
    BaseEngineController_LS_B.s22_Merge1[13] = ((int8_T)
      (MediumCycle2Cyl6_DataStore()));
    BaseEngineController_LS_B.s22_Merge1[14] = ((int8_T)
      (MediumCycle2Cyl7_DataStore()));
    BaseEngineController_LS_B.s22_Merge1[15] = ((int8_T)
      (MediumCycle2Cyl8_DataStore()));
    BaseEngineController_LS_B.s22_Merge1[16] = ((int8_T)
      (MediumCycle3Cyl1_DataStore()));
    BaseEngineController_LS_B.s22_Merge1[17] = ((int8_T)
      (MediumCycle3Cyl2_DataStore()));
    BaseEngineController_LS_B.s22_Merge1[18] = ((int8_T)
      (MediumCycle3Cyl3_DataStore()));
    BaseEngineController_LS_B.s22_Merge1[19] = ((int8_T)
      (MediumCycle3Cyl4_DataStore()));
    BaseEngineController_LS_B.s22_Merge1[20] = ((int8_T)
      (MediumCycle3Cyl5_DataStore()));
    BaseEngineController_LS_B.s22_Merge1[21] = ((int8_T)
      (MediumCycle3Cyl6_DataStore()));
    BaseEngineController_LS_B.s22_Merge1[22] = ((int8_T)
      (MediumCycle3Cyl7_DataStore()));
    BaseEngineController_LS_B.s22_Merge1[23] = ((int8_T)
      (MediumCycle3Cyl8_DataStore()));
    BaseEngineController_LS_B.s22_Merge1[24] = ((int8_T)
      (MediumCycle4Cyl1_DataStore()));
    BaseEngineController_LS_B.s22_Merge1[25] = ((int8_T)
      (MediumCycle4Cyl2_DataStore()));
    BaseEngineController_LS_B.s22_Merge1[26] = ((int8_T)
      (MediumCycle4Cyl3_DataStore()));
    BaseEngineController_LS_B.s22_Merge1[27] = ((int8_T)
      (MediumCycle4Cyl4_DataStore()));
    BaseEngineController_LS_B.s22_Merge1[28] = ((int8_T)
      (MediumCycle4Cyl5_DataStore()));
    BaseEngineController_LS_B.s22_Merge1[29] = ((int8_T)
      (MediumCycle4Cyl6_DataStore()));
    BaseEngineController_LS_B.s22_Merge1[30] = ((int8_T)
      (MediumCycle4Cyl7_DataStore()));
    BaseEngineController_LS_B.s22_Merge1[31] = ((int8_T)
      (MediumCycle4Cyl8_DataStore()));
  }

  /* End of Outputs for SubSystem: '<S22>/PassThrough2' */
  /* Outputs for Enabled SubSystem: '<S22>/PassThrough3' incorporates:
   *  EnablePort: '<S95>/Enable'
   */
  if (rtb_motohawk_fault_action3) {
    if (!BaseEngineController_LS_DWork.s22_PassThrough3_MODE) {
      BaseEngineController_LS_DWork.s22_PassThrough3_MODE = TRUE;
    }

    /* Inport: '<S95>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S100>/motohawk_calibration10'
     *  S-Function (motohawk_sfun_calibration): '<S100>/motohawk_calibration11'
     *  S-Function (motohawk_sfun_calibration): '<S100>/motohawk_calibration12'
     *  S-Function (motohawk_sfun_calibration): '<S100>/motohawk_calibration13'
     *  S-Function (motohawk_sfun_calibration): '<S100>/motohawk_calibration14'
     *  S-Function (motohawk_sfun_calibration): '<S100>/motohawk_calibration15'
     *  S-Function (motohawk_sfun_calibration): '<S100>/motohawk_calibration8'
     *  S-Function (motohawk_sfun_calibration): '<S100>/motohawk_calibration9'
     *  S-Function (motohawk_sfun_calibration): '<S101>/motohawk_calibration10'
     *  S-Function (motohawk_sfun_calibration): '<S101>/motohawk_calibration11'
     *  S-Function (motohawk_sfun_calibration): '<S101>/motohawk_calibration12'
     *  S-Function (motohawk_sfun_calibration): '<S101>/motohawk_calibration13'
     *  S-Function (motohawk_sfun_calibration): '<S101>/motohawk_calibration14'
     *  S-Function (motohawk_sfun_calibration): '<S101>/motohawk_calibration15'
     *  S-Function (motohawk_sfun_calibration): '<S101>/motohawk_calibration8'
     *  S-Function (motohawk_sfun_calibration): '<S101>/motohawk_calibration9'
     *  S-Function (motohawk_sfun_calibration): '<S102>/motohawk_calibration10'
     *  S-Function (motohawk_sfun_calibration): '<S102>/motohawk_calibration11'
     *  S-Function (motohawk_sfun_calibration): '<S102>/motohawk_calibration12'
     *  S-Function (motohawk_sfun_calibration): '<S102>/motohawk_calibration13'
     *  S-Function (motohawk_sfun_calibration): '<S102>/motohawk_calibration14'
     *  S-Function (motohawk_sfun_calibration): '<S102>/motohawk_calibration15'
     *  S-Function (motohawk_sfun_calibration): '<S102>/motohawk_calibration8'
     *  S-Function (motohawk_sfun_calibration): '<S102>/motohawk_calibration9'
     *  S-Function (motohawk_sfun_calibration): '<S103>/motohawk_calibration10'
     *  S-Function (motohawk_sfun_calibration): '<S103>/motohawk_calibration11'
     *  S-Function (motohawk_sfun_calibration): '<S103>/motohawk_calibration12'
     *  S-Function (motohawk_sfun_calibration): '<S103>/motohawk_calibration13'
     *  S-Function (motohawk_sfun_calibration): '<S103>/motohawk_calibration14'
     *  S-Function (motohawk_sfun_calibration): '<S103>/motohawk_calibration15'
     *  S-Function (motohawk_sfun_calibration): '<S103>/motohawk_calibration8'
     *  S-Function (motohawk_sfun_calibration): '<S103>/motohawk_calibration9'
     */
    BaseEngineController_LS_B.s22_Merge1[0] = ((int8_T)(HardCycle1Cyl1_DataStore
      ()));
    BaseEngineController_LS_B.s22_Merge1[1] = ((int8_T)(HardCycle1Cyl2_DataStore
      ()));
    BaseEngineController_LS_B.s22_Merge1[2] = ((int8_T)(HardCycle1Cyl3_DataStore
      ()));
    BaseEngineController_LS_B.s22_Merge1[3] = ((int8_T)(HardCycle1Cyl4_DataStore
      ()));
    BaseEngineController_LS_B.s22_Merge1[4] = ((int8_T)(HardCycle1Cyl5_DataStore
      ()));
    BaseEngineController_LS_B.s22_Merge1[5] = ((int8_T)(HardCycle1Cyl6_DataStore
      ()));
    BaseEngineController_LS_B.s22_Merge1[6] = ((int8_T)(HardCycle1Cyl7_DataStore
      ()));
    BaseEngineController_LS_B.s22_Merge1[7] = ((int8_T)(HardCycle1Cyl8_DataStore
      ()));
    BaseEngineController_LS_B.s22_Merge1[8] = ((int8_T)(HardCycle2Cyl1_DataStore
      ()));
    BaseEngineController_LS_B.s22_Merge1[9] = ((int8_T)(HardCycle2Cyl2_DataStore
      ()));
    BaseEngineController_LS_B.s22_Merge1[10] = ((int8_T)
      (HardCycle2Cyl3_DataStore()));
    BaseEngineController_LS_B.s22_Merge1[11] = ((int8_T)
      (HardCycle2Cyl4_DataStore()));
    BaseEngineController_LS_B.s22_Merge1[12] = ((int8_T)
      (HardCycle2Cyl5_DataStore()));
    BaseEngineController_LS_B.s22_Merge1[13] = ((int8_T)
      (HardCycle2Cyl6_DataStore()));
    BaseEngineController_LS_B.s22_Merge1[14] = ((int8_T)
      (HardCycle2Cyl7_DataStore()));
    BaseEngineController_LS_B.s22_Merge1[15] = ((int8_T)
      (HardCycle2Cyl8_DataStore()));
    BaseEngineController_LS_B.s22_Merge1[16] = ((int8_T)
      (HardCycle3Cyl1_DataStore()));
    BaseEngineController_LS_B.s22_Merge1[17] = ((int8_T)
      (HardCycle3Cyl2_DataStore()));
    BaseEngineController_LS_B.s22_Merge1[18] = ((int8_T)
      (HardCycle3Cyl3_DataStore()));
    BaseEngineController_LS_B.s22_Merge1[19] = ((int8_T)
      (HardCycle3Cyl4_DataStore()));
    BaseEngineController_LS_B.s22_Merge1[20] = ((int8_T)
      (HardCycle3Cyl5_DataStore()));
    BaseEngineController_LS_B.s22_Merge1[21] = ((int8_T)
      (HardCycle3Cyl6_DataStore()));
    BaseEngineController_LS_B.s22_Merge1[22] = ((int8_T)
      (HardCycle3Cyl7_DataStore()));
    BaseEngineController_LS_B.s22_Merge1[23] = ((int8_T)
      (HardCycle3Cyl8_DataStore()));
    BaseEngineController_LS_B.s22_Merge1[24] = ((int8_T)
      (HardCycle4Cyl1_DataStore()));
    BaseEngineController_LS_B.s22_Merge1[25] = ((int8_T)
      (HardCycle4Cyl2_DataStore()));
    BaseEngineController_LS_B.s22_Merge1[26] = ((int8_T)
      (HardCycle4Cyl3_DataStore()));
    BaseEngineController_LS_B.s22_Merge1[27] = ((int8_T)
      (HardCycle4Cyl4_DataStore()));
    BaseEngineController_LS_B.s22_Merge1[28] = ((int8_T)
      (HardCycle4Cyl5_DataStore()));
    BaseEngineController_LS_B.s22_Merge1[29] = ((int8_T)
      (HardCycle4Cyl6_DataStore()));
    BaseEngineController_LS_B.s22_Merge1[30] = ((int8_T)
      (HardCycle4Cyl7_DataStore()));
    BaseEngineController_LS_B.s22_Merge1[31] = ((int8_T)
      (HardCycle4Cyl8_DataStore()));
  } else {
    if (BaseEngineController_LS_DWork.s22_PassThrough3_MODE) {
      /* Disable for Outport: '<S95>/Out1' */
      for (i = 0; i < 32; i++) {
        BaseEngineController_LS_B.s22_Merge1[i] = 0;
      }

      /* End of Outport: '<S95>/Out1' */
      BaseEngineController_LS_DWork.s22_PassThrough3_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S22>/PassThrough3' */

  /* Outputs for Enabled SubSystem: '<S22>/SequenceCutMachine' incorporates:
   *  EnablePort: '<S98>/Enable'
   */
  if (rtb_RelationalOperator2_i) {
    if (!BaseEngineController_LS_DWork.s22_SequenceCutMachine_MODE) {
      /* InitializeConditions for UnitDelay: '<S98>/Unit Delay2' */
      BaseEngineController_LS_DWork.s98_UnitDelay2_DSTATE = 1.0;

      /* InitializeConditions for UnitDelay: '<S98>/Unit Delay1' */
      BaseEngineController_LS_DWork.s98_UnitDelay1_DSTATE = 1U;

      /* Level2 S-Function Block: '<S98>/motohawk_trigger' (motohawk_sfun_trigger) */

      /* Enable for Trigger_FGND_TDC1_EVENT_865p0001 */
      BaseEngineController_LS_DWork.s98_motohawk_trigger_DWORK1 = 1;
      BaseEngineController_LS_DWork.s22_SequenceCutMachine_MODE = TRUE;
    }

    /* UnitDelay: '<S98>/Unit Delay2' */
    BaseEngineController_LS_B.s98_UnitDelay2 =
      BaseEngineController_LS_DWork.s98_UnitDelay2_DSTATE;

    /* MultiPortSwitch: '<S98>/Multiport Switch' */
    switch ((int32_T)BaseEngineController_LS_B.s98_UnitDelay2) {
     case 1:
      for (i = 0; i < 8; i++) {
        BaseEngineController_LS_B.s98_MultiportSwitch[i] =
          BaseEngineController_LS_B.s22_Merge1[i];
      }
      break;

     case 2:
      for (i = 0; i < 8; i++) {
        BaseEngineController_LS_B.s98_MultiportSwitch[i] =
          BaseEngineController_LS_B.s22_Merge1[i + 8];
      }
      break;

     case 3:
      for (i = 0; i < 8; i++) {
        BaseEngineController_LS_B.s98_MultiportSwitch[i] =
          BaseEngineController_LS_B.s22_Merge1[i + 16];
      }
      break;

     default:
      for (i = 0; i < 8; i++) {
        BaseEngineController_LS_B.s98_MultiportSwitch[i] =
          BaseEngineController_LS_B.s22_Merge1[i + 24];
      }
      break;
    }

    /* End of MultiPortSwitch: '<S98>/Multiport Switch' */

    /* UnitDelay: '<S98>/Unit Delay1' */
    BaseEngineController_LS_B.s98_UnitDelay1 =
      BaseEngineController_LS_DWork.s98_UnitDelay1_DSTATE;

    /* S-Function (motohawk_sfun_trigger): '<S98>/motohawk_trigger' */
    /* Enable for Trigger_FGND_TDC1_EVENT_865p0001 */
    if (BaseEngineController_LS_DWork.s98_motohawk_trigger_DWORK1 == 0) {
      BaseEngineController_LS_DWork.s98_motohawk_trigger_DWORK1 = 1;
    }

    /* Update for UnitDelay: '<S98>/Unit Delay2' */
    BaseEngineController_LS_DWork.s98_UnitDelay2_DSTATE =
      BaseEngineController_LS_B.s108_Switch1;

    /* Update for UnitDelay: '<S98>/Unit Delay1' */
    BaseEngineController_LS_DWork.s98_UnitDelay1_DSTATE =
      BaseEngineController_LS_B.s108_Switch;
  } else {
    if (BaseEngineController_LS_DWork.s22_SequenceCutMachine_MODE) {
      /* Level2 S-Function Block: '<S98>/motohawk_trigger' (motohawk_sfun_trigger) */
      /* Disable for Trigger_FGND_TDC1_EVENT_865p0001 */
      BaseEngineController_LS_DWork.s98_motohawk_trigger_DWORK1 = 0;
      BaseEngineController_LS_DWork.s22_SequenceCutMachine_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S22>/SequenceCutMachine' */
  /* Outputs for Enabled SubSystem: '<S22>/PassThrough4' incorporates:
   *  EnablePort: '<S96>/Enable'
   */
  /* Logic: '<S22>/Logical Operator' incorporates:
   *  Constant: '<S22>/Constant'
   *  Constant: '<S22>/Constant1'
   *  RelationalOperator: '<S22>/Relational Operator'
   *  RelationalOperator: '<S22>/Relational Operator1'
   *  S-Function (motohawk_sfun_calibration): '<S22>/motohawk_calibration1'
   */
  if ((((int8_T)(RevLimitType_DataStore())) == 0) || (((int8_T)
        (RevLimitType_DataStore())) == 2)) {
    if (!BaseEngineController_LS_DWork.s22_PassThrough4_MODE) {
      BaseEngineController_LS_DWork.s22_PassThrough4_MODE = TRUE;
    }

    /* DataTypeConversion: '<S96>/Data Type Conversion' */
    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_B.s96_DataTypeConversion[i] =
        ((BaseEngineController_LS_B.s108_CutArray[i] != 0));
    }

    /* End of DataTypeConversion: '<S96>/Data Type Conversion' */
  } else {
    if (BaseEngineController_LS_DWork.s22_PassThrough4_MODE) {
      /* Disable for Outport: '<S96>/Out1' */
      for (i = 0; i < 8; i++) {
        BaseEngineController_LS_B.s96_DataTypeConversion[i] = FALSE;
      }

      /* End of Outport: '<S96>/Out1' */
      BaseEngineController_LS_DWork.s22_PassThrough4_MODE = FALSE;
    }
  }

  /* End of Logic: '<S22>/Logical Operator' */
  /* End of Outputs for SubSystem: '<S22>/PassThrough4' */

  /* Logic: '<S22>/Logical Operator2' */
  for (i = 0; i < 8; i++) {
    BaseEngineController_LS_B.s22_LogicalOperator2[i] =
      !BaseEngineController_LS_B.s96_DataTypeConversion[i];
  }

  /* End of Logic: '<S22>/Logical Operator2' */

  /* S-Function (motohawk_sfun_trigger): '<S13>/motohawk_trigger' */
  /* Enable for Trigger_FGND_5XRTI_PERIODIC_8449p0001 */
  if (BaseEngineController_LS_DWork.s13_motohawk_trigger_DWORK1 == 0) {
    /* Enable for function-call system: '<S13>/Coil Control' */

    /* Enable for Atomic SubSystem: '<S710>/EST Enable TDC Counter' */

    /* Level2 S-Function Block: '<S715>/motohawk_trigger1' (motohawk_sfun_trigger) */

    /* Enable for Trigger_FGND_TDC_EVENT_7962p0001 */
    BaseEngineController_LS_DWork.s715_motohawk_trigger1_DWORK1 = 1;

    /* End of Enable for SubSystem: '<S710>/EST Enable TDC Counter' */
    BaseEngineController_LS_DWork.s13_motohawk_trigger_DWORK1 = 1;
  }

  /* If: '<S740>/If' incorporates:
   *  Inport: '<S741>/In1'
   *  Inport: '<S742>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S740>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S740>/override_enable'
   */
  if ((FAN1_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S740>/NewValue' incorporates:
     *  ActionPort: '<S741>/Action Port'
     */
    rtb_RelationalOperator2_i = (FAN1_new_DataStore());

    /* End of Outputs for SubSystem: '<S740>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S740>/OldValue' incorporates:
     *  ActionPort: '<S742>/Action Port'
     */
    rtb_RelationalOperator2_i = BaseEngineController_LS_B.s118_FAN1;

    /* End of Outputs for SubSystem: '<S740>/OldValue' */
  }

  /* End of If: '<S740>/If' */

  /* Logic: '<S738>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S738>/0 = No Inversion 1 = Inversion'
   */
  BaseEngineController_LS_B.s738_LogicalOperator = rtb_RelationalOperator2_i ^
    (FAN1_Polarity_DataStore());

  /* If: '<S743>/If' incorporates:
   *  Inport: '<S744>/In1'
   *  Inport: '<S745>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S743>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S743>/override_enable'
   */
  if ((FAN2_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S743>/NewValue' incorporates:
     *  ActionPort: '<S744>/Action Port'
     */
    rtb_RelationalOperator2_i = (FAN2_new_DataStore());

    /* End of Outputs for SubSystem: '<S743>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S743>/OldValue' incorporates:
     *  ActionPort: '<S745>/Action Port'
     */
    rtb_RelationalOperator2_i = BaseEngineController_LS_B.s118_FAN2;

    /* End of Outputs for SubSystem: '<S743>/OldValue' */
  }

  /* End of If: '<S743>/If' */

  /* Logic: '<S739>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S739>/0 = No Inversion 1 = Inversion'
   */
  BaseEngineController_LS_B.s739_LogicalOperator = rtb_RelationalOperator2_i ^
    (FAN2_Polarity_DataStore());

  /* Switch: '<S126>/Switch' incorporates:
   *  Constant: '<S126>/OFF'
   *  Logic: '<S126>/Logical Operator'
   *  S-Function (motohawk_sfun_data_read): '<S126>/motohawk_data_read'
   *  S-Function (motohawk_sfun_data_read): '<S126>/motohawk_data_read1'
   */
  if (DelayedEngineShutdownAction_DataStore() || EngineShutdownAction_DataStore())
  {
    rtb_RelationalOperator_ipv = FALSE;
  } else {
    rtb_RelationalOperator_ipv = BaseEngineController_LS_B.s118_FUELP;
  }

  /* End of Switch: '<S126>/Switch' */

  /* S-Function Block: <S402>/motohawk_din Resource: ESTOPPin */
  {
    extern NativeError_S ESTOPPin_DigitalInput_Get(boolean_T *out, uint16_T
      *status);
    ESTOPPin_DigitalInput_Get(&BaseEngineController_LS_B.s402_motohawk_din, NULL);
  }

  /* Logic: '<S409>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S409>/0 = No Inversion 1 = Inversion'
   */
  rtb_RelationalOperator2_i = BaseEngineController_LS_B.s402_motohawk_din ^
    (ESTOPPolarity_DataStore());

  /* If: '<S420>/If' incorporates:
   *  Inport: '<S421>/In1'
   *  Inport: '<S422>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S420>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S420>/override_enable'
   */
  if ((ESTOP_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S420>/NewValue' incorporates:
     *  ActionPort: '<S421>/Action Port'
     */
    BaseEngineController_LS_B.s420_Merge = (ESTOP_new_DataStore());

    /* End of Outputs for SubSystem: '<S420>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S420>/OldValue' incorporates:
     *  ActionPort: '<S422>/Action Port'
     */
    BaseEngineController_LS_B.s420_Merge = rtb_RelationalOperator2_i;

    /* End of Outputs for SubSystem: '<S420>/OldValue' */
  }

  /* End of If: '<S420>/If' */

  /* Logic: '<S13>/Logical Operator5' incorporates:
   *  Logic: '<S13>/Logical Operator4'
   */
  rtb_RelationalOperator2_i = (rtb_RelationalOperator_ipv &&
    (!BaseEngineController_LS_B.s420_Merge));

  /* If: '<S747>/If' incorporates:
   *  Inport: '<S748>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S747>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S747>/override_enable'
   */
  if ((FUELP_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S747>/NewValue' incorporates:
     *  ActionPort: '<S748>/Action Port'
     */
    rtb_RelationalOperator2_i = (FUELP_new_DataStore());

    /* End of Outputs for SubSystem: '<S747>/NewValue' */
  } else {
  }

  /* End of If: '<S747>/If' */

  /* Logic: '<S746>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S746>/0 = No Inversion 1 = Inversion'
   */
  BaseEngineController_LS_B.s746_LogicalOperator = rtb_RelationalOperator2_i ^
    (FUELP_Polarity_DataStore());

  /* S-Function Block: <S750>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s750_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_oe = ((real_T) delta) * 0.000001;
  }

  /* S-Function Block: <S396>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s396_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_ds = ((real_T) delta) * 0.000001;
  }

  /* RelationalOperator: '<S395>/RelOp' incorporates:
   *  Constant: '<S395>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S377>/motohawk_data_read'
   */
  rtb_RelationalOperator2_i = (((uint8_T)EngineState_DataStore()) == 1);

  /* S-Function Block: <S377>/motohawk_ain_read Resource: ECUP */
  {
    extern NativeError_S ECUP_AnalogInput_Get(uint16_T *adc, uint16_T *status);
    ECUP_AnalogInput_Get(&rtb_motohawk_ain_read_o, NULL);
  }

  /* Switch: '<S396>/Switch' incorporates:
   *  Constant: '<S377>/Constant1'
   *  Constant: '<S396>/Constant'
   *  Logic: '<S377>/Logical Operator'
   *  RelationalOperator: '<S377>/Relational Operator'
   *  S-Function (motohawk_sfun_ain_read): '<S377>/motohawk_ain_read'
   *  S-Function (motohawk_sfun_data_read): '<S396>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S396>/motohawk_delta_time'
   *  Sum: '<S396>/Sum'
   */
  if (rtb_RelationalOperator2_i && (rtb_motohawk_ain_read_o > 150)) {
    BaseEngineController_LS_B.s396_Switch = rtb_motohawk_delta_time_ds +
      TimeSinceStallTimer_DataStore();
  } else {
    BaseEngineController_LS_B.s396_Switch = 0.0;
  }

  /* End of Switch: '<S396>/Switch' */
  /* Logic: '<S702>/Logical Operator1' incorporates:
   *  Logic: '<S13>/Logical Operator9'
   *  RelationalOperator: '<S13>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S13>/motohawk_calibration3'
   *  S-Function (motohawk_sfun_calibration): '<S702>/motohawk_calibration5'
   */
  rtb_RelationalOperator_ipv = ((ETC_CutPower_Permitted_DataStore()) &&
    (BaseEngineController_LS_B.s420_Merge ||
     (BaseEngineController_LS_B.s396_Switch > (ETC_CutPower_StallTime_DataStore()))));

  /* Logic: '<S702>/Logical Operator' */
  rtb_LogicalOperator1_dv = !rtb_RelationalOperator_ipv;

  /* Outputs for Enabled SubSystem: '<S14>/Electronic Throttle Controller' incorporates:
   *  EnablePort: '<S20>/Enable'
   */
  /* RelationalOperator: '<S19>/RelOp' incorporates:
   *  Constant: '<S19>/Constant'
   *  Constant: '<S30>/Constant2'
   *  Constant: '<S51>/Constant'
   *  Inport: '<S50>/In1'
   *  RelationalOperator: '<S51>/RelOp'
   *  S-Function (motohawk_sfun_data_read): '<S14>/motohawk_data_read'
   *  S-Function (motohawk_sfun_data_read): '<S30>/motohawk_data_read3'
   *  Sum: '<S30>/Add2'
   */
  if (!AirControlSource_DataStore()) {
    if (!BaseEngineController_LS_DWork.s14_ElectronicThrottleController_MODE) {
      BaseEngineController_LS_DWork.s14_ElectronicThrottleController_MODE = TRUE;
    }

    /* RelationalOperator: '<S60>/RelOp' incorporates:
     *  Constant: '<S60>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S31>/motohawk_data_read3'
     */
    rtb_RelationalOperator2_i = (((uint8_T)EngineState_DataStore()) == 1);

    /* Logic: '<S31>/Logical Operator2' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S31>/motohawk_data_read2'
     */
    rtb_LogicalOperator1_j = !ShutDownTasksComplete_DataStore();

    /* S-Function Block: <S31>/motohawk_ain_read Resource: ECUP */
    {
      extern NativeError_S ECUP_AnalogInput_Get(uint16_T *adc, uint16_T *status);
      ECUP_AnalogInput_Get(&rtb_motohawk_ain_read_a, NULL);
    }

    /* RelationalOperator: '<S31>/Relational Operator' incorporates:
     *  Constant: '<S31>/Constant1'
     *  S-Function (motohawk_sfun_ain_read): '<S31>/motohawk_ain_read'
     */
    rtb_AboveHiTarget = (rtb_motohawk_ain_read_a < 150);

    /* Logic: '<S31>/Logical Operator3' */
    BaseEngineController_LS_B.s31_LogicalOperator3 = ((rtb_RelationalOperator2_i
      && rtb_LogicalOperator1_j && rtb_AboveHiTarget));

    /* S-Function Block: <S61>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s61_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_dr = ((real_T) delta) * 0.000001;
    }

    /* Switch: '<S61>/Switch' incorporates:
     *  Constant: '<S61>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S61>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S61>/motohawk_delta_time'
     *  Sum: '<S61>/Sum'
     */
    if (rtb_AboveHiTarget) {
      BaseEngineController_LS_B.s61_Switch = rtb_motohawk_delta_time_dr +
        ETCShutDownTimer_DataStore();
    } else {
      BaseEngineController_LS_B.s61_Switch = 0.0;
    }

    /* End of Switch: '<S61>/Switch' */

    /* UnitDelay: '<S20>/Unit Delay' */
    rtb_Product1_l2 = BaseEngineController_LS_DWork.s20_UnitDelay_DSTATE;

    /* RelationalOperator: '<S20>/Relational Operator5' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S20>/motohawk_calibration4'
     */
    BaseEngineController_LS_B.s20_RelationalOperator5 = ((rtb_Product1_l2 <
      (ETC_ShutdownLoAdaptError_DataStore())));

    /* RelationalOperator: '<S20>/Relational Operator2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S20>/motohawk_calibration5'
     */
    BaseEngineController_LS_B.s20_RelationalOperator2 =
      ((BaseEngineController_LS_B.s374_Switch2 >
        (ETC_SpringTestHiThresh_DataStore())));

    /* RelationalOperator: '<S20>/Relational Operator3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S20>/motohawk_calibration6'
     */
    BaseEngineController_LS_B.s20_RelationalOperator3 =
      ((BaseEngineController_LS_B.s374_Switch2 <
        (ETC_SpringTestLoThresh_DataStore())));

    /* Stateflow: '<S20>/ETC Test  Manager' */

    /* Gateway: Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/ETC Test  Manager */
    /* During: Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/ETC Test  Manager */
    switch (BaseEngineController_LS_DWork.s26_is_c9_BaseEngineController_LS) {
     case BaseEngineController_LS_IN_ForcedShutdown:
      /* During 'ForcedShutdown': '<S26>:6' */
      if (!BaseEngineController_LS_B.s31_LogicalOperator3) {
        /* Transition: '<S26>:19' */
        BaseEngineController_LS_DWork.s26_is_c9_BaseEngineController_LS =
          BaseEngineController_LS_IN_SpringTestComplete;

        /* Entry 'SpringTestComplete': '<S26>:5' */
        BaseEngineController_LS_B.s26_DC_Override = 1;
        BaseEngineController_LS_B.s26_TestComplete = TRUE;
        BaseEngineController_LS_B.s26_SetpointMode = 0;
        BaseEngineController_LS_B.s26_TestTime =
          BaseEngineController_LS_B.s61_Switch -
          BaseEngineController_LS_DWork.s26_TimerOld;
      }
      break;

     case BaseEngineController_LS_IN_LowAdapt:
      /* During 'LowAdapt': '<S26>:2' */
      if (BaseEngineController_LS_B.s61_Switch > 5.0) {
        /* Transition: '<S26>:17' */
        BaseEngineController_LS_DWork.s26_is_c9_BaseEngineController_LS =
          BaseEngineController_LS_IN_ForcedShutdown;

        /* Entry 'ForcedShutdown': '<S26>:6' */
        BaseEngineController_LS_B.s26_DC_Override = 1;
        BaseEngineController_LS_B.s26_TestComplete = TRUE;
        BaseEngineController_LS_B.s26_SetpointMode = 0;
        BaseEngineController_LS_B.s26_TestTime = 0.0;
      } else if (BaseEngineController_LS_B.s31_LogicalOperator3 &&
                 BaseEngineController_LS_B.s20_RelationalOperator5) {
        /* Transition: '<S26>:9' */
        BaseEngineController_LS_DWork.s26_is_c9_BaseEngineController_LS =
          BaseEngineController_LS_IN_SpringTestSetpoint;

        /* Entry 'SpringTestSetpoint': '<S26>:3' */
        BaseEngineController_LS_B.s26_DC_Override = 0;
        BaseEngineController_LS_B.s26_TestComplete = FALSE;
        BaseEngineController_LS_B.s26_SetpointMode = 2;
        BaseEngineController_LS_B.s26_TestTime = 0.0;
      } else {
        if (!BaseEngineController_LS_B.s31_LogicalOperator3) {
          /* Transition: '<S26>:12' */
          BaseEngineController_LS_DWork.s26_is_c9_BaseEngineController_LS =
            BaseEngineController_LS_IN_PassThrough;

          /* Entry 'PassThrough': '<S26>:1' */
          BaseEngineController_LS_B.s26_DC_Override = 0;
          BaseEngineController_LS_B.s26_TestComplete = FALSE;
          BaseEngineController_LS_B.s26_SetpointMode = 0;
          BaseEngineController_LS_B.s26_TestTime = 0.0;
        }
      }
      break;

     case BaseEngineController_LS_IN_PassThrough:
      /* During 'PassThrough': '<S26>:1' */
      if (BaseEngineController_LS_B.s31_LogicalOperator3) {
        /* Transition: '<S26>:8' */
        BaseEngineController_LS_DWork.s26_is_c9_BaseEngineController_LS =
          BaseEngineController_LS_IN_LowAdapt;

        /* Entry 'LowAdapt': '<S26>:2' */
        BaseEngineController_LS_B.s26_DC_Override = 0;
        BaseEngineController_LS_B.s26_TestComplete = FALSE;
        BaseEngineController_LS_B.s26_SetpointMode = 1;
        BaseEngineController_LS_B.s26_TestTime = 0.0;
      }
      break;

     case BaseEngineController_LS_IN_SpringTest:
      /* During 'SpringTest': '<S26>:4' */
      if (BaseEngineController_LS_B.s61_Switch > 5.0) {
        /* Transition: '<S26>:16' */
        BaseEngineController_LS_DWork.s26_is_c9_BaseEngineController_LS =
          BaseEngineController_LS_IN_ForcedShutdown;

        /* Entry 'ForcedShutdown': '<S26>:6' */
        BaseEngineController_LS_B.s26_DC_Override = 1;
        BaseEngineController_LS_B.s26_TestComplete = TRUE;
        BaseEngineController_LS_B.s26_SetpointMode = 0;
        BaseEngineController_LS_B.s26_TestTime = 0.0;
      } else if (BaseEngineController_LS_B.s31_LogicalOperator3 &&
                 BaseEngineController_LS_B.s20_RelationalOperator3) {
        /* Transition: '<S26>:11' */
        BaseEngineController_LS_DWork.s26_is_c9_BaseEngineController_LS =
          BaseEngineController_LS_IN_SpringTestComplete;

        /* Entry 'SpringTestComplete': '<S26>:5' */
        BaseEngineController_LS_B.s26_DC_Override = 1;
        BaseEngineController_LS_B.s26_TestComplete = TRUE;
        BaseEngineController_LS_B.s26_SetpointMode = 0;
        BaseEngineController_LS_B.s26_TestTime =
          BaseEngineController_LS_B.s61_Switch -
          BaseEngineController_LS_DWork.s26_TimerOld;
      } else {
        if (!BaseEngineController_LS_B.s31_LogicalOperator3) {
          /* Transition: '<S26>:15' */
          BaseEngineController_LS_DWork.s26_is_c9_BaseEngineController_LS =
            BaseEngineController_LS_IN_PassThrough;

          /* Entry 'PassThrough': '<S26>:1' */
          BaseEngineController_LS_B.s26_DC_Override = 0;
          BaseEngineController_LS_B.s26_TestComplete = FALSE;
          BaseEngineController_LS_B.s26_SetpointMode = 0;
          BaseEngineController_LS_B.s26_TestTime = 0.0;
        }
      }
      break;

     case BaseEngineController_LS_IN_SpringTestComplete:
      /* During 'SpringTestComplete': '<S26>:5' */
      if (!BaseEngineController_LS_B.s31_LogicalOperator3) {
        /* Transition: '<S26>:14' */
        BaseEngineController_LS_DWork.s26_is_c9_BaseEngineController_LS =
          BaseEngineController_LS_IN_PassThrough;

        /* Entry 'PassThrough': '<S26>:1' */
        BaseEngineController_LS_B.s26_DC_Override = 0;
        BaseEngineController_LS_B.s26_TestComplete = FALSE;
        BaseEngineController_LS_B.s26_SetpointMode = 0;
        BaseEngineController_LS_B.s26_TestTime = 0.0;
      }
      break;

     case BaseEngineController_LS_IN_SpringTestSetpoint:
      /* During 'SpringTestSetpoint': '<S26>:3' */
      if (!BaseEngineController_LS_B.s31_LogicalOperator3) {
        /* Transition: '<S26>:13' */
        BaseEngineController_LS_DWork.s26_is_c9_BaseEngineController_LS =
          BaseEngineController_LS_IN_PassThrough;

        /* Entry 'PassThrough': '<S26>:1' */
        BaseEngineController_LS_B.s26_DC_Override = 0;
        BaseEngineController_LS_B.s26_TestComplete = FALSE;
        BaseEngineController_LS_B.s26_SetpointMode = 0;
        BaseEngineController_LS_B.s26_TestTime = 0.0;
      } else if (BaseEngineController_LS_B.s31_LogicalOperator3 &&
                 BaseEngineController_LS_B.s20_RelationalOperator2) {
        /* Transition: '<S26>:10' */
        BaseEngineController_LS_DWork.s26_is_c9_BaseEngineController_LS =
          BaseEngineController_LS_IN_SpringTest;

        /* Entry 'SpringTest': '<S26>:4' */
        BaseEngineController_LS_B.s26_DC_Override = 1;
        BaseEngineController_LS_B.s26_TestComplete = FALSE;
        BaseEngineController_LS_B.s26_SetpointMode = 0;
        BaseEngineController_LS_B.s26_TestTime = 0.0;
        BaseEngineController_LS_DWork.s26_TimerOld =
          BaseEngineController_LS_B.s61_Switch;
      } else {
        if (BaseEngineController_LS_B.s61_Switch > 5.0) {
          /* Transition: '<S26>:18' */
          BaseEngineController_LS_DWork.s26_is_c9_BaseEngineController_LS =
            BaseEngineController_LS_IN_ForcedShutdown;

          /* Entry 'ForcedShutdown': '<S26>:6' */
          BaseEngineController_LS_B.s26_DC_Override = 1;
          BaseEngineController_LS_B.s26_TestComplete = TRUE;
          BaseEngineController_LS_B.s26_SetpointMode = 0;
          BaseEngineController_LS_B.s26_TestTime = 0.0;
        }
      }
      break;

     default:
      /* Transition: '<S26>:7' */
      BaseEngineController_LS_DWork.s26_is_c9_BaseEngineController_LS =
        BaseEngineController_LS_IN_PassThrough;

      /* Entry 'PassThrough': '<S26>:1' */
      BaseEngineController_LS_B.s26_DC_Override = 0;
      BaseEngineController_LS_B.s26_TestComplete = FALSE;
      BaseEngineController_LS_B.s26_SetpointMode = 0;
      BaseEngineController_LS_B.s26_TestTime = 0.0;
      break;
    }

    /* End of Stateflow: '<S20>/ETC Test  Manager' */
    /* S-Function Block: <S54>/motohawk_delta_time */
    rtb_motohawk_delta_time_mz = 0.005;

    /* Switch: '<S54>/Switch' incorporates:
     *  Constant: '<S54>/Constant'
     *  S-Function (motohawk_sfun_calibration): '<S52>/motohawk_calibration'
     *  S-Function (motohawk_sfun_data_read): '<S54>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S54>/motohawk_delta_time'
     *  Sum: '<S54>/Sum'
     */
    if ((ETCTuneEnable_DataStore())) {
      rtb_DesiredLambda_idx = rtb_motohawk_delta_time_mz +
        ETC_Tune_Timer_DataStore();
    } else {
      rtb_DesiredLambda_idx = 0.0;
    }

    /* End of Switch: '<S54>/Switch' */
    /* If: '<S55>/If' incorporates:
     *  Inport: '<S56>/In1'
     *  Inport: '<S57>/In1'
     *  S-Function (motohawk_sfun_calibration): '<S55>/new_value'
     *  S-Function (motohawk_sfun_calibration): '<S55>/override_enable'
     */
    if ((ETCReq_ovr_DataStore())) {
      /* Outputs for IfAction SubSystem: '<S55>/NewValue' incorporates:
       *  ActionPort: '<S56>/Action Port'
       */
      rtb_Product1_ii = (ETCReq_new_DataStore());

      /* End of Outputs for SubSystem: '<S55>/NewValue' */
    } else {
      /* Outputs for IfAction SubSystem: '<S55>/OldValue' incorporates:
       *  ActionPort: '<S57>/Action Port'
       */
      rtb_Product1_ii = BaseEngineController_LS_B.s118_Throttle;

      /* End of Outputs for SubSystem: '<S55>/OldValue' */
    }

    /* End of If: '<S55>/If' */

    /* S-Function Block: <S53>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s53_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_jc = ((real_T) delta) * 0.000001;
    }

    /* Outputs for Enabled SubSystem: '<S30>/PassThrough' incorporates:
     *  EnablePort: '<S50>/Enable'
     */
    if (BaseEngineController_LS_B.s26_SetpointMode == 1) {
      if (!BaseEngineController_LS_DWork.s30_PassThrough_MODE) {
        BaseEngineController_LS_DWork.s30_PassThrough_MODE = TRUE;
      }

      BaseEngineController_LS_B.s50_In1 = -5.0 +
        ETC_ShutdownLoAdaptError_DataStore();
    } else {
      if (BaseEngineController_LS_DWork.s30_PassThrough_MODE) {
        /* Disable for Outport: '<S50>/Out1' */
        BaseEngineController_LS_B.s50_In1 = 10.0;
        BaseEngineController_LS_DWork.s30_PassThrough_MODE = FALSE;
      }
    }

    /* End of Outputs for SubSystem: '<S30>/PassThrough' */

    /* UnitDelay: '<S53>/Unit Delay' incorporates:
     *  Constant: '<S30>/Constant2'
     *  Constant: '<S51>/Constant'
     *  Inport: '<S50>/In1'
     *  RelationalOperator: '<S51>/RelOp'
     *  S-Function (motohawk_sfun_data_read): '<S30>/motohawk_data_read3'
     *  Sum: '<S30>/Add2'
     */
    rtb_Product1_l2 = BaseEngineController_LS_DWork.s53_UnitDelay_DSTATE;

    /* Product: '<S53>/Product1' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S53>/motohawk_delta_time'
     *  Sum: '<S53>/Sum3'
     *  UnitDelay: '<S53>/Unit Delay'
     */
    rtb_Product5_o = 1.0 / rtb_motohawk_delta_time_jc *
      (BaseEngineController_LS_B.s50_In1 -
       BaseEngineController_LS_DWork.s53_UnitDelay_DSTATE);

    /* MinMax: '<S58>/MinMax' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S30>/motohawk_calibration2'
     */
    rtb_Product5_o = (rtb_Product5_o >= (ETC_LoAdaptRateLimit_DataStore())) ||
      rtIsNaN((ETC_LoAdaptRateLimit_DataStore())) ? rtb_Product5_o :
      (ETC_LoAdaptRateLimit_DataStore());

    /* Sum: '<S53>/Sum2' incorporates:
     *  Constant: '<S30>/Constant7'
     *  MinMax: '<S58>/MinMax1'
     *  Product: '<S53>/Product'
     *  S-Function (motohawk_sfun_delta_time): '<S53>/motohawk_delta_time'
     */
    rtb_Switch_k2 = (rtb_Product5_o <= 100.0 ? rtb_Product5_o : 100.0) *
      rtb_motohawk_delta_time_jc + rtb_Product1_l2;

    /* MultiPortSwitch: '<S30>/Multiport Switch' incorporates:
     *  Constant: '<S30>/Constant1'
     *  S-Function (motohawk_sfun_data_read): '<S30>/motohawk_data_read1'
     *  Sum: '<S30>/Add1'
     */
    switch (BaseEngineController_LS_B.s26_SetpointMode) {
     case 0:
      /* Switch: '<S52>/Switch' incorporates:
       *  Fcn: '<S52>/Sine Wave'
       *  S-Function (motohawk_sfun_calibration): '<S52>/motohawk_calibration'
       *  S-Function (motohawk_sfun_calibration): '<S52>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_calibration): '<S52>/motohawk_calibration2'
       *  S-Function (motohawk_sfun_calibration): '<S52>/motohawk_calibration4'
       *  Sum: '<S52>/Sum'
       */
      if ((ETCTuneEnable_DataStore())) {
        BaseEngineController_LS_B.s30_MultiportSwitch = (sin(6.2831853071795862 *
          (ETCTuneFreq_DataStore()) * rtb_DesiredLambda_idx) *
          (ETCTuneAmp_DataStore()) + (ETCTuneAmp_DataStore())) +
          (ETCTuneOffset_DataStore());
      } else {
        BaseEngineController_LS_B.s30_MultiportSwitch = rtb_Product1_ii;
      }

      /* End of Switch: '<S52>/Switch' */
      break;

     case 1:
      BaseEngineController_LS_B.s30_MultiportSwitch = rtb_Switch_k2;
      break;

     default:
      BaseEngineController_LS_B.s30_MultiportSwitch = 10.0 +
        ETC_SpringTestHiThresh_DataStore();
      break;
    }

    /* End of MultiPortSwitch: '<S30>/Multiport Switch' */

    /* Sum: '<S30>/Add' */
    rtb_Switch1_n = BaseEngineController_LS_B.s30_MultiportSwitch -
      BaseEngineController_LS_B.s374_Switch2;

    /* Abs: '<S25>/Abs' */
    rtb_Product5_o = fabs(rtb_Switch1_n);

    /* Logic: '<S25>/Logical Operator' incorporates:
     *  Constant: '<S32>/Constant'
     *  RelationalOperator: '<S25>/Relational Operator4'
     *  RelationalOperator: '<S32>/RelOp'
     *  S-Function (motohawk_sfun_calibration): '<S25>/motohawk_calibration1'
     */
    rtb_LogicalOperator_di = (((rtb_Product5_o > (ETC_StickingThresh_DataStore()))
      && (BaseEngineController_LS_B.s26_SetpointMode == 0)));

    /* S-Function (motohawk_sfun_fault_def): '<S25>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: ETC_Sticking */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(41, rtb_LogicalOperator_di);
      UpdateFault(41);
    }

    /* Outputs for Triggered SubSystem: '<S20>/Reset TasksComplete To True' incorporates:
     *  TriggerPort: '<S29>/Trigger'
     */
    if (BaseEngineController_LS_B.s26_TestComplete &&
        (BaseEngineController_LS_PrevZCSigState.ResetTasksCompleteToTrue_Trig_ZCE
         != POS_ZCSIG)) {
      /* S-Function (motohawk_sfun_data_write): '<S29>/motohawk_data_write' incorporates:
       *  Constant: '<S29>/Constant2'
       */
      /* Write to Data Storage as scalar: ShutDownTasksComplete */
      {
        ShutDownTasksComplete_DataStore() = TRUE;
      }
    }

    BaseEngineController_LS_PrevZCSigState.ResetTasksCompleteToTrue_Trig_ZCE =
      (uint8_T)(BaseEngineController_LS_B.s26_TestComplete ? (int32_T)POS_ZCSIG :
                (int32_T)ZERO_ZCSIG);

    /* End of Outputs for SubSystem: '<S20>/Reset TasksComplete To True' */

    /* S-Function (motohawk_sfun_data_write): '<S20>/motohawk_data_write' */
    /* Write to Data Storage as scalar: SpringTestTime */
    {
      SpringTestTime_DataStore() = BaseEngineController_LS_B.s26_TestTime;
    }

    /* RelationalOperator: '<S20>/Relational Operator1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S20>/motohawk_calibration3'
     */
    rtb_RelationalOperator1_hq = (((ETC_SpringTestTimerThresh_DataStore()) <
      BaseEngineController_LS_B.s26_TestTime));

    /* S-Function (motohawk_sfun_fault_def): '<S20>/motohawk_fault_def' */

    /* Set Fault Suspected Status: ETCSpringTest */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(39, rtb_RelationalOperator1_hq);
      UpdateFault(39);
    }

    /* RelationalOperator: '<S27>/Relational Operator6' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S27>/motohawk_calibration4'
     *  S-Function (motohawk_sfun_data_read): '<S27>/motohawk_data_read'
     */
    rtb_RelationalOperator2_i = (TimeSinceStall_DataStore() >
      (ETCShutdownTimerThresh_DataStore()));

    /* S-Function Block: <S27>/motohawk_ain_read Resource: ECUP */
    {
      extern NativeError_S ECUP_AnalogInput_Get(uint16_T *adc, uint16_T *status);
      ECUP_AnalogInput_Get(&rtb_motohawk_ain_read_g, NULL);
    }

    /* Logic: '<S27>/Logical Operator' incorporates:
     *  Constant: '<S27>/Constant1'
     *  RelationalOperator: '<S27>/Relational Operator'
     *  S-Function (motohawk_sfun_ain_read): '<S27>/motohawk_ain_read'
     */
    BaseEngineController_LS_B.s27_LogicalOperator = ((rtb_RelationalOperator2_i &&
      (rtb_motohawk_ain_read_g > 150)));

    /* Logic: '<S20>/Logical Operator' */
    rtb_RelationalOperator2_i = ((BaseEngineController_LS_B.s26_DC_Override != 0)
      || BaseEngineController_LS_B.s27_LogicalOperator);

    /* S-Function Block: <S28>/motohawk_prelookup2 */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (ETC_SetpointIn_DataStore()) =
        BaseEngineController_LS_B.s30_MultiportSwitch;
      (ETC_SetpointIdx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_LS_B.s30_MultiportSwitch,
         (ETC_SetpointIdxArr_DataStore()), 20, (ETC_SetpointIdx_DataStore()));
      rtb_motohawk_prelookup2_a = (ETC_SetpointIdx_DataStore());
    }

    /* S-Function Block: <S28>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_d = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup2_a, (real_T *) ((ETCDCOffsetTbl_DataStore())),
         20);
      (ETCDCOffset_DataStore()) = rtb_motohawk_interpolation_1d_d;
    }

    /* UnitDelay: '<S44>/Unit Delay' */
    rtb_Product1_ii = BaseEngineController_LS_DWork.s44_UnitDelay_DSTATE;

    /* UnitDelay: '<S40>/Unit Delay' */
    rtb_Product1_l2 = BaseEngineController_LS_DWork.s40_UnitDelay_DSTATE;

    /* S-Function Block: <S41>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s41_motohawk_delta_time_DWORK1, NULL);
      rtb_Product5_o = ((real_T) delta) * 0.000001;
    }

    /* Product: '<S41>/Product' incorporates:
     *  MinMax: '<S41>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S41>/motohawk_calibration'
     */
    rtb_Product5_o /= (rtb_Product5_o >= (ETCDamperTPSFilt_DataStore())) ||
      rtIsNaN((ETCDamperTPSFilt_DataStore())) ? rtb_Product5_o :
      (ETCDamperTPSFilt_DataStore());

    /* Sum: '<S42>/Sum1' incorporates:
     *  Constant: '<S42>/Constant'
     *  Product: '<S42>/Product'
     *  Product: '<S42>/Product1'
     *  Sum: '<S42>/Sum'
     *  UnitDelay: '<S42>/Unit Delay'
     */
    rtb_Switch_c = (1.0 - rtb_Product5_o) *
      BaseEngineController_LS_DWork.s42_UnitDelay_DSTATE +
      BaseEngineController_LS_B.s374_Switch2 * rtb_Product5_o;

    /* S-Function Block: <S40>/motohawk_delta_time */
    rtb_motohawk_delta_time_hch = 0.005;

    /* Product: '<S40>/Product' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S40>/motohawk_delta_time'
     *  Sum: '<S40>/Sum2'
     */
    BaseEngineController_LS_B.s40_Product = (rtb_Switch_c - rtb_Product1_l2) /
      rtb_motohawk_delta_time_hch;

    /* Sum: '<S33>/Sum1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S33>/motohawk_calibration10'
     *  S-Function (motohawk_sfun_calibration): '<S33>/motohawk_calibration5'
     */
    rtb_Product5_o = (ETCDamperSwitchThresh_DataStore()) -
      (ETCDamperSwitchHyst_DataStore());

    /* RelationalOperator: '<S39>/LT' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S33>/motohawk_calibration5'
     */
    rtb_AboveHiTarget = (rtb_Product5_o >= (ETCDamperSwitchThresh_DataStore()));

    /* RelationalOperator: '<S39>/LT1' */
    rtb_BelowLoTarget = (rtb_Product5_o <= BaseEngineController_LS_B.s40_Product);

    /* CombinatorialLogic: '<S43>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_AboveHiTarget != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_d[0] =
        BaseEngineController_LS_ConstP.pooled728[rowidx];
      rtb_CombinatorialLogic_d[1] =
        BaseEngineController_LS_ConstP.pooled728[rowidx + 4];
    }

    /* Switch: '<S43>/Switch1' incorporates:
     *  UnitDelay: '<S43>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_d[1]) {
      rtb_LogicalOperator1_j = rtb_CombinatorialLogic_d[0];
    } else {
      rtb_LogicalOperator1_j =
        BaseEngineController_LS_DWork.s43_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S43>/Switch1' */

    /* Switch: '<S39>/Switch2' incorporates:
     *  Logic: '<S39>/Logical Operator'
     *  S-Function (motohawk_sfun_calibration): '<S33>/motohawk_calibration5'
     */
    if (!rtb_LogicalOperator1_j) {
      BaseEngineController_LS_B.s39_Switch2 = (ETCDamperSwitchThresh_DataStore());
    } else {
      BaseEngineController_LS_B.s39_Switch2 =
        BaseEngineController_LS_B.s40_Product;
    }

    /* End of Switch: '<S39>/Switch2' */

    /* RelationalOperator: '<S33>/Relational Operator' */
    BaseEngineController_LS_B.s33_RelationalOperator =
      ((BaseEngineController_LS_B.s40_Product >
        BaseEngineController_LS_B.s39_Switch2));

    /* Switch: '<S36>/Switch' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S28>/motohawk_calibration7'
     *  S-Function (motohawk_sfun_calibration): '<S28>/motohawk_calibration8'
     */
    if (BaseEngineController_LS_B.s33_RelationalOperator) {
      rtb_Product5_o = (ETCDampGainUp_DataStore());
    } else {
      rtb_Product5_o = (ETCDampGainDown_DataStore());
    }

    /* End of Switch: '<S36>/Switch' */

    /* Product: '<S36>/Product3' */
    rtb_Sum_cy = rtb_Product5_o * BaseEngineController_LS_B.s374_Switch2;

    /* S-Function Block: <S44>/motohawk_delta_time */
    rtb_motohawk_delta_time_oy = 0.005;

    /* Product: '<S44>/Product' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S44>/motohawk_delta_time'
     *  Sum: '<S44>/Sum2'
     */
    BaseEngineController_LS_B.s44_Product = (rtb_Sum_cy - rtb_Product1_ii) /
      rtb_motohawk_delta_time_oy;

    /* UnitDelay: '<S45>/Unit Delay' */
    rtb_Product1_l2 = BaseEngineController_LS_DWork.s45_UnitDelay_DSTATE;

    /* Sum: '<S36>/Sum2' */
    BaseEngineController_LS_B.s36_Sum2 =
      BaseEngineController_LS_B.s30_MultiportSwitch -
      BaseEngineController_LS_B.s374_Switch2;

    /* Product: '<S36>/Product5' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S28>/motohawk_calibration6'
     */
    rtb_Product5_o = BaseEngineController_LS_B.s36_Sum2 *
      (ETCErrorGain_DataStore());

    /* Product: '<S36>/Product4' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S28>/motohawk_calibration1'
     */
    rtb_Product1_ii = (ETCDGain_DataStore()) * rtb_Product5_o;

    /* S-Function Block: <S45>/motohawk_delta_time */
    rtb_motohawk_delta_time_e0 = 0.005;

    /* Product: '<S45>/Product' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S45>/motohawk_delta_time'
     *  Sum: '<S45>/Sum2'
     */
    BaseEngineController_LS_B.s45_Product = (rtb_Product1_ii - rtb_Product1_l2) /
      rtb_motohawk_delta_time_e0;

    /* Sum: '<S28>/Add' */
    rtb_Add_g1 = BaseEngineController_LS_B.s30_MultiportSwitch -
      BaseEngineController_LS_B.s374_Switch2;

    /* S-Function Block: <S28>/motohawk_prelookup */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (ETC_ErrorIn_DataStore()) = rtb_Add_g1;
      (ETC_ErrorIdx_DataStore()) = TablePrelookup_real_T(rtb_Add_g1,
        (ETC_ErrorIdxArr_DataStore()), 10, (ETC_ErrorIdx_DataStore()));
      rtb_motohawk_prelookup_bs = (ETC_ErrorIdx_DataStore());
    }

    /* S-Function Block: <S35>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_kf = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_bs, (real_T *) ((ETC_PGainMultTbl_DataStore())),
         10);
      (ETC_PGainMult_DataStore()) = rtb_motohawk_interpolation_1d_kf;
    }

    /* Product: '<S36>/Product2' incorporates:
     *  Product: '<S35>/Product'
     *  S-Function (motohawk_sfun_calibration): '<S35>/motohawk_calibration'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S35>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_prelookup): '<S28>/motohawk_prelookup'
     *  Sum: '<S28>/Add'
     */
    BaseEngineController_LS_B.s36_Product2 = rtb_motohawk_interpolation_1d_kf *
      (ETCPGain_DataStore()) * rtb_Product5_o;

    /* Switch: '<S46>/Switch1' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S20>/motohawk_data_read'
     *  UnitDelay: '<S46>/Unit Delay'
     */
    if (ETCStallStateShutdown_DataStore()) {
      BaseEngineController_LS_B.s46_Switch1 = 0.0;
    } else {
      BaseEngineController_LS_B.s46_Switch1 =
        BaseEngineController_LS_DWork.s46_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S46>/Switch1' */

    /* Sum: '<S28>/Sum' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S28>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_prelookup): '<S28>/motohawk_prelookup2'
     *  Sum: '<S36>/Sum'
     */
    rtb_Product1_l2 = (((BaseEngineController_LS_B.s45_Product -
                         BaseEngineController_LS_B.s44_Product) +
                        BaseEngineController_LS_B.s36_Product2) +
                       BaseEngineController_LS_B.s46_Switch1) +
      rtb_motohawk_interpolation_1d_d;

    /* MinMax: '<S49>/MinMax' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S37>/motohawk_calibration'
     */
    rtb_Product4_o = (rtb_Product1_l2 >= (ETCLwrLim_DataStore())) || rtIsNaN
      ((ETCLwrLim_DataStore())) ? rtb_Product1_l2 : (ETCLwrLim_DataStore());

    /* MinMax: '<S49>/MinMax1' incorporates:
     *  MinMax: '<S49>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S37>/motohawk_calibration1'
     */
    BaseEngineController_LS_B.s49_MinMax1 = (rtb_Product4_o <=
      (ETCUprLim_DataStore())) || rtIsNaN((ETCUprLim_DataStore())) ?
      rtb_Product4_o : (ETCUprLim_DataStore());

    /* S-Function Block: <S34>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_on = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_bs, (real_T *) ((ETC_IGainMultTbl_DataStore())),
         10);
      (ETC_IGainMult_DataStore()) = rtb_motohawk_interpolation_1d_on;
    }

    /* Product: '<S36>/Product1' incorporates:
     *  Product: '<S34>/Product'
     *  S-Function (motohawk_sfun_calibration): '<S34>/motohawk_calibration2'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S34>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_prelookup): '<S28>/motohawk_prelookup'
     *  Sum: '<S28>/Add'
     */
    rtb_Product1_l2 = rtb_motohawk_interpolation_1d_on * (ETCIGain_DataStore()) *
      rtb_Product5_o;

    /* S-Function Block: <S46>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s46_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_l5 = ((real_T) delta) * 0.000001;
    }

    /* Sum: '<S46>/Sum' incorporates:
     *  Product: '<S46>/Product'
     *  S-Function (motohawk_sfun_delta_time): '<S46>/motohawk_delta_time'
     */
    rtb_Product1_l2 = rtb_Product1_l2 * rtb_motohawk_delta_time_l5 +
      BaseEngineController_LS_B.s46_Switch1;

    /* MinMax: '<S48>/MinMax' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S28>/motohawk_calibration3'
     */
    rtb_Product4_o = (rtb_Product1_l2 >= (ETCIMin_DataStore())) || rtIsNaN
      ((ETCIMin_DataStore())) ? rtb_Product1_l2 : (ETCIMin_DataStore());

    /* MinMax: '<S48>/MinMax1' incorporates:
     *  MinMax: '<S48>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S28>/motohawk_calibration4'
     */
    rtb_Sum_dn = (rtb_Product4_o <= (ETCIMax_DataStore())) || rtIsNaN
      ((ETCIMax_DataStore())) ? rtb_Product4_o : (ETCIMax_DataStore());

    /* Saturate: '<S54>/Saturation' */
    rtb_Saturation_pd = rtb_DesiredLambda_idx >= 16000.0 ? 16000.0 :
      rtb_DesiredLambda_idx <= 0.0 ? 0.0 : rtb_DesiredLambda_idx;

    /* S-Function (motohawk_sfun_data_write): '<S54>/motohawk_data_write' */
    /* Write to Data Storage as scalar: ETC_Tune_Timer */
    {
      ETC_Tune_Timer_DataStore() = rtb_Saturation_pd;
    }

    /* Saturate: '<S61>/Saturation' */
    rtb_Saturation_l = BaseEngineController_LS_B.s61_Switch >= 16000.0 ? 16000.0
      : BaseEngineController_LS_B.s61_Switch <= 0.0 ? 0.0 :
      BaseEngineController_LS_B.s61_Switch;

    /* S-Function (motohawk_sfun_data_write): '<S61>/motohawk_data_write' */
    /* Write to Data Storage as scalar: ETCShutDownTimer */
    {
      ETCShutDownTimer_DataStore() = rtb_Saturation_l;
    }

    /* S-Function (motohawk_sfun_data_read): '<S31>/motohawk_data_read1' */
    rtb_motohawk_data_read1_kw = MPRD_DataStore();

    /* Outputs for Triggered SubSystem: '<S31>/Reset TasksComplete To False' incorporates:
     *  TriggerPort: '<S59>/Trigger'
     */
    if (rtb_motohawk_data_read1_kw &&
        (BaseEngineController_LS_PrevZCSigState.ResetTasksCompleteToFalse_Trig_ZCE
         != POS_ZCSIG)) {
      /* S-Function (motohawk_sfun_data_write): '<S59>/motohawk_data_write' incorporates:
       *  Constant: '<S59>/Constant2'
       */
      /* Write to Data Storage as scalar: ShutDownTasksComplete */
      {
        ShutDownTasksComplete_DataStore() = FALSE;
      }
    }

    BaseEngineController_LS_PrevZCSigState.ResetTasksCompleteToFalse_Trig_ZCE =
      (uint8_T)(rtb_motohawk_data_read1_kw ? (int32_T)POS_ZCSIG : (int32_T)
                ZERO_ZCSIG);

    /* End of Outputs for SubSystem: '<S31>/Reset TasksComplete To False' */

    /* Switch: '<S20>/Switch' incorporates:
     *  Constant: '<S20>/Constant2'
     */
    if (rtb_RelationalOperator2_i) {
      BaseEngineController_LS_B.s20_Switch = 0.0;
    } else {
      BaseEngineController_LS_B.s20_Switch =
        BaseEngineController_LS_B.s49_MinMax1;
    }

    /* End of Switch: '<S20>/Switch' */

    /* Update for UnitDelay: '<S20>/Unit Delay' */
    BaseEngineController_LS_DWork.s20_UnitDelay_DSTATE = rtb_Switch1_n;

    /* Update for UnitDelay: '<S53>/Unit Delay' */
    BaseEngineController_LS_DWork.s53_UnitDelay_DSTATE = rtb_Switch_k2;

    /* Update for UnitDelay: '<S44>/Unit Delay' */
    BaseEngineController_LS_DWork.s44_UnitDelay_DSTATE = rtb_Sum_cy;

    /* Update for UnitDelay: '<S40>/Unit Delay' */
    BaseEngineController_LS_DWork.s40_UnitDelay_DSTATE = rtb_Switch_c;

    /* Update for UnitDelay: '<S42>/Unit Delay' */
    BaseEngineController_LS_DWork.s42_UnitDelay_DSTATE = rtb_Switch_c;

    /* Update for UnitDelay: '<S43>/Unit Delay' */
    BaseEngineController_LS_DWork.s43_UnitDelay_DSTATE = rtb_LogicalOperator1_j;

    /* Update for UnitDelay: '<S45>/Unit Delay' */
    BaseEngineController_LS_DWork.s45_UnitDelay_DSTATE = rtb_Product1_ii;

    /* Update for UnitDelay: '<S46>/Unit Delay' incorporates:
     *  MinMax: '<S48>/MinMax1'
     */
    BaseEngineController_LS_DWork.s46_UnitDelay_DSTATE = rtb_Sum_dn;
  } else {
    if (BaseEngineController_LS_DWork.s14_ElectronicThrottleController_MODE) {
      /* Disable for Enabled SubSystem: '<S30>/PassThrough' */
      /* Disable for Outport: '<S50>/Out1' */
      BaseEngineController_LS_B.s50_In1 = 10.0;
      BaseEngineController_LS_DWork.s30_PassThrough_MODE = FALSE;

      /* End of Disable for SubSystem: '<S30>/PassThrough' */
      BaseEngineController_LS_DWork.s14_ElectronicThrottleController_MODE =
        FALSE;
    }
  }

  /* End of RelationalOperator: '<S19>/RelOp' */
  /* End of Outputs for SubSystem: '<S14>/Electronic Throttle Controller' */
  /* If: '<S751>/If' incorporates:
   *  Inport: '<S752>/In1'
   *  Inport: '<S753>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S751>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S751>/override_enable'
   */
  if ((ETC_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S751>/NewValue' incorporates:
     *  ActionPort: '<S752>/Action Port'
     */
    rtb_Product1_l2 = (ETC_new_DataStore());

    /* End of Outputs for SubSystem: '<S751>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S751>/OldValue' incorporates:
     *  ActionPort: '<S753>/Action Port'
     */
    rtb_Product1_l2 = BaseEngineController_LS_B.s20_Switch;

    /* End of Outputs for SubSystem: '<S751>/OldValue' */
  }

  /* End of If: '<S751>/If' */

  /* Switch: '<S702>/Switch' incorporates:
   *  Constant: '<S702>/Constant2'
   *  Product: '<S702>/Product'
   *  S-Function (motohawk_sfun_calibration): '<S702>/motohawk_calibration2'
   *  S-Function (motohawk_sfun_interpolation_1d): '<S702>/motohawk_interpolation_1d'
   *  Sum: '<S702>/Sum'
   */
  if (rtb_RelationalOperator_ipv) {
    rtb_DataTypeConversion_m0 = 0.0;
  } else {
    /* S-Function Block: <S702>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_h = TableInterpolation1D_real_T
        (BaseEngineController_LS_B.s361_motohawk_prelookup, (real_T *)
         ((ETC_VoltageCompTbl_DataStore())), 9);
      (ETC_VoltageComp_DataStore()) = rtb_motohawk_interpolation_1d_h;
    }

    rtb_DataTypeConversion_m0 = rtb_Product1_l2 *
      rtb_motohawk_interpolation_1d_h + (ETC_Offset_DataStore());
  }

  /* End of Switch: '<S702>/Switch' */

  /* Saturate: '<S702>/Saturation' */
  BaseEngineController_LS_B.s702_ETC = rtb_DataTypeConversion_m0 >= 100.0 ?
    100.0 : rtb_DataTypeConversion_m0 <= -100.0 ? -100.0 :
    rtb_DataTypeConversion_m0;

  /* Abs: '<S702>/Abs' */
  rtb_DataTypeConversion_m0 = fabs(BaseEngineController_LS_B.s702_ETC);

  /* RelationalOperator: '<S702>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S702>/motohawk_calibration3'
   */
  rtb_RelationalOperator2_i = (rtb_DataTypeConversion_m0 > (ETC_OC_MIN_DataStore
                                ()));

  /* S-Function (motohawk_sfun_pwm): '<S702>/motohawk_pwm1' */
  ETCPin_PWMOutput_PWMOutput_Outputs(NULL,
    &BaseEngineController_LS_B.s702_motohawk_pwm1);

  /* Abs: '<S702>/Abs1' */
  rtb_DataTypeConversion2_pj = (int16_T)
    (BaseEngineController_LS_B.s702_motohawk_pwm1 < 0 ? (int16_T)
     -BaseEngineController_LS_B.s702_motohawk_pwm1 :
     BaseEngineController_LS_B.s702_motohawk_pwm1);

  /* RelationalOperator: '<S702>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S702>/motohawk_calibration1'
   */
  rtb_RelationalOperator_ipv = ((real_T)rtb_DataTypeConversion2_pj <
    (ETC_I_MIN_DataStore()));

  /* Switch: '<S750>/Switch' incorporates:
   *  Constant: '<S750>/Constant'
   *  Logic: '<S702>/Logical Operator4'
   *  S-Function (motohawk_sfun_data_read): '<S750>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S750>/motohawk_delta_time'
   *  Sum: '<S750>/Sum'
   */
  if (rtb_LogicalOperator1_dv && rtb_RelationalOperator2_i &&
      rtb_RelationalOperator_ipv) {
    rtb_DataTypeConversion_m0 = rtb_motohawk_delta_time_oe +
      ETCOpenFaultTimer_DataStore();
  } else {
    rtb_DataTypeConversion_m0 = 0.0;
  }

  /* End of Switch: '<S750>/Switch' */

  /* RelationalOperator: '<S702>/Relational Operator5' incorporates:
   *  Constant: '<S702>/Constant'
   */
  rtb_RelationalOperator5 = ((rtb_DataTypeConversion_m0 > 5.0));

  /* S-Function (motohawk_sfun_fault_def): '<S702>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: ETC_Open_Fault */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(40, rtb_RelationalOperator5);
    UpdateFault(40);
  }

  /* Gain: '<S702>/Convert to integer 14-bit PWM resolution' */
  rtb_Abs_p = 40.95 * BaseEngineController_LS_B.s702_ETC;

  /* DataTypeConversion: '<S702>/Data Type Conversion3' incorporates:
   *  Gain: '<S702>/Convert to integer 0.01Hz resolution'
   *  S-Function (motohawk_sfun_calibration): '<S702>/motohawk_calibration4'
   */
  u = 100.0 * (ETC_Frequency_DataStore());
  if (u < 4.294967296E+9) {
    if (u >= 0.0) {
      rtb_DataTypeConversion3_j = (uint32_T)u;
    } else {
      rtb_DataTypeConversion3_j = 0U;
    }
  } else {
    rtb_DataTypeConversion3_j = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S702>/Data Type Conversion3' */

  /* DataTypeConversion: '<S702>/Data Type Conversion4' */
  if (rtb_Abs_p < 32768.0) {
    if (rtb_Abs_p >= -32768.0) {
      rtb_DataTypeConversion4_m = (int16_T)rtb_Abs_p;
    } else {
      rtb_DataTypeConversion4_m = MIN_int16_T;
    }
  } else {
    rtb_DataTypeConversion4_m = MAX_int16_T;
  }

  /* End of DataTypeConversion: '<S702>/Data Type Conversion4' */

  /* Saturate: '<S750>/Saturation' */
  rtb_Saturation_n = rtb_DataTypeConversion_m0 >= 16000.0 ? 16000.0 :
    rtb_DataTypeConversion_m0 <= 0.0 ? 0.0 : rtb_DataTypeConversion_m0;

  /* S-Function (motohawk_sfun_data_write): '<S750>/motohawk_data_write' */
  /* Write to Data Storage as scalar: ETCOpenFaultTimer */
  {
    ETCOpenFaultTimer_DataStore() = rtb_Saturation_n;
  }

  /* If: '<S757>/If' incorporates:
   *  Inport: '<S758>/In1'
   *  Inport: '<S759>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S757>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S757>/override_enable'
   */
  if ((IAC_P_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S757>/NewValue' incorporates:
     *  ActionPort: '<S758>/Action Port'
     */
    rtb_Product1_l2 = (IAC_P_new_DataStore());

    /* End of Outputs for SubSystem: '<S757>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S757>/OldValue' incorporates:
     *  ActionPort: '<S759>/Action Port'
     */
    rtb_Product1_l2 = BaseEngineController_LS_B.s118_IACP;

    /* End of Outputs for SubSystem: '<S757>/OldValue' */
  }

  /* End of If: '<S757>/If' */

  /* Product: '<S754>/Product' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S754>/motohawk_calibration'
   */
  rtb_Product1_l2 *= (IAC_PGain_DataStore());

  /* Sum: '<S754>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S754>/motohawk_calibration1'
   */
  rtb_Abs_p = rtb_Product1_l2 + (IAC_POffset_DataStore());

  /* MinMax: '<S756>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S754>/motohawk_calibration2'
   */
  rtb_Abs_p = (rtb_Abs_p >= (IAC_PMinLimit_DataStore())) || rtIsNaN
    ((IAC_PMinLimit_DataStore())) ? rtb_Abs_p : (IAC_PMinLimit_DataStore());

  /* MinMax: '<S756>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S754>/motohawk_calibration3'
   */
  BaseEngineController_LS_B.s756_MinMax1 = (rtb_Abs_p <=
    (IAC_PMaxLimit_DataStore())) || rtIsNaN((IAC_PMaxLimit_DataStore())) ?
    rtb_Abs_p : (IAC_PMaxLimit_DataStore());

  /* Gain: '<S754>/Convert to integer 14-bit PWM resolution' */
  rtb_Abs_p = 40.95 * BaseEngineController_LS_B.s756_MinMax1;

  /* DataTypeConversion: '<S754>/Data Type Conversion3' */
  if (rtb_Abs_p < 32768.0) {
    if (rtb_Abs_p >= -32768.0) {
      rtb_DataTypeConversion3_p = (int16_T)rtb_Abs_p;
    } else {
      rtb_DataTypeConversion3_p = MIN_int16_T;
    }
  } else {
    rtb_DataTypeConversion3_p = MAX_int16_T;
  }

  /* End of DataTypeConversion: '<S754>/Data Type Conversion3' */
  /* Gain: '<S754>/Convert to integer 0.01Hz resolution' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S754>/motohawk_calibration4'
   */
  rtb_Abs_p = 100.0 * (IAC_PFrequency_DataStore());

  /* DataTypeConversion: '<S754>/Data Type Conversion2' */
  if (rtb_Abs_p < 4.294967296E+9) {
    if (rtb_Abs_p >= 0.0) {
      rtb_DataTypeConversion2_l = (uint32_T)rtb_Abs_p;
    } else {
      rtb_DataTypeConversion2_l = 0U;
    }
  } else {
    rtb_DataTypeConversion2_l = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S754>/Data Type Conversion2' */

  /* If: '<S761>/If' incorporates:
   *  Inport: '<S762>/In1'
   *  Inport: '<S763>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S761>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S761>/override_enable'
   */
  if ((IAC_S_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S761>/NewValue' incorporates:
     *  ActionPort: '<S762>/Action Port'
     */
    rtb_Product1_l2 = (IAC_S_new_DataStore());

    /* End of Outputs for SubSystem: '<S761>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S761>/OldValue' incorporates:
     *  ActionPort: '<S763>/Action Port'
     */
    rtb_Product1_l2 = BaseEngineController_LS_B.s118_IACS;

    /* End of Outputs for SubSystem: '<S761>/OldValue' */
  }

  /* End of If: '<S761>/If' */

  /* Product: '<S755>/Product' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S755>/motohawk_calibration'
   */
  rtb_Product1_l2 *= (IAC_SGain_DataStore());

  /* Sum: '<S755>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S755>/motohawk_calibration1'
   */
  rtb_Abs_p = rtb_Product1_l2 + (IAC_SOffset_DataStore());

  /* MinMax: '<S760>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S755>/motohawk_calibration2'
   */
  rtb_Abs_p = (rtb_Abs_p >= (IAC_SMinLimit_DataStore())) || rtIsNaN
    ((IAC_SMinLimit_DataStore())) ? rtb_Abs_p : (IAC_SMinLimit_DataStore());

  /* MinMax: '<S760>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S755>/motohawk_calibration3'
   */
  BaseEngineController_LS_B.s760_MinMax1 = (rtb_Abs_p <=
    (IAC_SMaxLimit_DataStore())) || rtIsNaN((IAC_SMaxLimit_DataStore())) ?
    rtb_Abs_p : (IAC_SMaxLimit_DataStore());

  /* Gain: '<S755>/Convert to integer 14-bit PWM resolution' */
  rtb_Abs_p = 40.95 * BaseEngineController_LS_B.s760_MinMax1;

  /* DataTypeConversion: '<S755>/Data Type Conversion3' */
  if (rtb_Abs_p < 32768.0) {
    if (rtb_Abs_p >= -32768.0) {
      rtb_DataTypeConversion3_d = (int16_T)rtb_Abs_p;
    } else {
      rtb_DataTypeConversion3_d = MIN_int16_T;
    }
  } else {
    rtb_DataTypeConversion3_d = MAX_int16_T;
  }

  /* End of DataTypeConversion: '<S755>/Data Type Conversion3' */
  /* Gain: '<S755>/Convert to integer 0.01Hz resolution' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S755>/motohawk_calibration4'
   */
  rtb_Abs_p = 100.0 * (IAC_SFrequency_DataStore());

  /* DataTypeConversion: '<S755>/Data Type Conversion2' */
  if (rtb_Abs_p < 4.294967296E+9) {
    if (rtb_Abs_p >= 0.0) {
      rtb_DataTypeConversion2_i = (uint32_T)rtb_Abs_p;
    } else {
      rtb_DataTypeConversion2_i = 0U;
    }
  } else {
    rtb_DataTypeConversion2_i = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S755>/Data Type Conversion2' */
  /* If: '<S768>/If' incorporates:
   *  Inport: '<S778>/In1'
   *  Inport: '<S779>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S768>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S768>/override_enable'
   */
  if ((SOI_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S768>/NewValue' incorporates:
     *  ActionPort: '<S778>/Action Port'
     */
    rtb_Product1_l2 = (SOI_new_DataStore());

    /* End of Outputs for SubSystem: '<S768>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S768>/OldValue' incorporates:
     *  ActionPort: '<S779>/Action Port'
     */
    rtb_Product1_l2 = BaseEngineController_LS_B.s118_SOI;

    /* End of Outputs for SubSystem: '<S768>/OldValue' */
  }

  /* End of If: '<S768>/If' */

  /* Gain: '<S704>/Gain2' */
  rtb_Abs_p = 16.0 * rtb_Product1_l2;

  /* DataTypeConversion: '<S704>/Data Type Conversion2' */
  if (rtb_Abs_p < 32768.0) {
    if (rtb_Abs_p >= -32768.0) {
      rtb_DataTypeConversion2_pj = (int16_T)rtb_Abs_p;
    } else {
      rtb_DataTypeConversion2_pj = MIN_int16_T;
    }
  } else {
    rtb_DataTypeConversion2_pj = MAX_int16_T;
  }

  /* End of DataTypeConversion: '<S704>/Data Type Conversion2' */
  /* If: '<S72>/If' incorporates:
   *  Inport: '<S89>/In1'
   *  Inport: '<S90>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S72>/override_enable'
   *  UnitDelay: '<S72>/Unit Delay'
   */
  if ((Fuel_Cyl8_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S72>/NewValue' incorporates:
     *  ActionPort: '<S89>/Action Port'
     */
    rtb_DesiredLambda_idx_0 = BaseEngineController_LS_DWork.s72_UnitDelay_DSTATE;

    /* End of Outputs for SubSystem: '<S72>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S72>/OldValue' incorporates:
     *  ActionPort: '<S90>/Action Port'
     */
    rtb_DesiredLambda_idx_0 = BaseEngineController_LS_B.s118_FPC[7];

    /* End of Outputs for SubSystem: '<S72>/OldValue' */
  }

  /* End of If: '<S72>/If' */

  /* Sum: '<S72>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S72>/offset'
   */
  rtb_Product1_l2 = rtb_DesiredLambda_idx_0 + (Fuel_Cyl8_offset_DataStore());

  /* If: '<S71>/If' incorporates:
   *  Inport: '<S87>/In1'
   *  Inport: '<S88>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S71>/override_enable'
   *  UnitDelay: '<S71>/Unit Delay'
   */
  if ((Fuel_Cyl7_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S71>/NewValue' incorporates:
     *  ActionPort: '<S87>/Action Port'
     */
    rtb_DesiredLambda_idx_1 = BaseEngineController_LS_DWork.s71_UnitDelay_DSTATE;

    /* End of Outputs for SubSystem: '<S71>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S71>/OldValue' incorporates:
     *  ActionPort: '<S88>/Action Port'
     */
    rtb_DesiredLambda_idx_1 = BaseEngineController_LS_B.s118_FPC[6];

    /* End of Outputs for SubSystem: '<S71>/OldValue' */
  }

  /* End of If: '<S71>/If' */

  /* Sum: '<S71>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S71>/offset'
   */
  rtb_Product1_ii = rtb_DesiredLambda_idx_1 + (Fuel_Cyl7_offset_DataStore());

  /* If: '<S69>/If' incorporates:
   *  Inport: '<S83>/In1'
   *  Inport: '<S84>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S69>/override_enable'
   *  UnitDelay: '<S69>/Unit Delay'
   */
  if ((Fuel_Cyl6_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S69>/NewValue' incorporates:
     *  ActionPort: '<S83>/Action Port'
     */
    rtb_Merge_ie = BaseEngineController_LS_DWork.s69_UnitDelay_DSTATE;

    /* End of Outputs for SubSystem: '<S69>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S69>/OldValue' incorporates:
     *  ActionPort: '<S84>/Action Port'
     */
    rtb_Merge_ie = BaseEngineController_LS_B.s118_FPC[5];

    /* End of Outputs for SubSystem: '<S69>/OldValue' */
  }

  /* End of If: '<S69>/If' */

  /* Sum: '<S69>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S69>/offset'
   */
  rtb_Sum_cy = rtb_Merge_ie + (Fuel_Cyl6_offset_DataStore());

  /* If: '<S68>/If' incorporates:
   *  Inport: '<S81>/In1'
   *  Inport: '<S82>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S68>/override_enable'
   *  UnitDelay: '<S68>/Unit Delay'
   */
  if ((Fuel_Cyl5_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S68>/NewValue' incorporates:
     *  ActionPort: '<S81>/Action Port'
     */
    rtb_Merge_ho = BaseEngineController_LS_DWork.s68_UnitDelay_DSTATE;

    /* End of Outputs for SubSystem: '<S68>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S68>/OldValue' incorporates:
     *  ActionPort: '<S82>/Action Port'
     */
    rtb_Merge_ho = BaseEngineController_LS_B.s118_FPC[4];

    /* End of Outputs for SubSystem: '<S68>/OldValue' */
  }

  /* End of If: '<S68>/If' */

  /* Sum: '<S68>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S68>/offset'
   */
  rtb_Switch1_n = rtb_Merge_ho + (Fuel_Cyl5_offset_DataStore());

  /* If: '<S67>/If' incorporates:
   *  Inport: '<S79>/In1'
   *  Inport: '<S80>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S67>/override_enable'
   *  UnitDelay: '<S67>/Unit Delay'
   */
  if ((Fuel_Cyl4_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S67>/NewValue' incorporates:
     *  ActionPort: '<S79>/Action Port'
     */
    rtb_Merge_ab = BaseEngineController_LS_DWork.s67_UnitDelay_DSTATE;

    /* End of Outputs for SubSystem: '<S67>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S67>/OldValue' incorporates:
     *  ActionPort: '<S80>/Action Port'
     */
    rtb_Merge_ab = BaseEngineController_LS_B.s118_FPC[3];

    /* End of Outputs for SubSystem: '<S67>/OldValue' */
  }

  /* End of If: '<S67>/If' */

  /* Sum: '<S67>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S67>/offset'
   */
  rtb_Switch_c = rtb_Merge_ab + (Fuel_Cyl4_offset_DataStore());

  /* If: '<S66>/If' incorporates:
   *  Inport: '<S77>/In1'
   *  Inport: '<S78>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S66>/override_enable'
   *  UnitDelay: '<S66>/Unit Delay'
   */
  if ((Fuel_Cyl3_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S66>/NewValue' incorporates:
     *  ActionPort: '<S77>/Action Port'
     */
    rtb_Merge_gg = BaseEngineController_LS_DWork.s66_UnitDelay_DSTATE;

    /* End of Outputs for SubSystem: '<S66>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S66>/OldValue' incorporates:
     *  ActionPort: '<S78>/Action Port'
     */
    rtb_Merge_gg = BaseEngineController_LS_B.s118_FPC[2];

    /* End of Outputs for SubSystem: '<S66>/OldValue' */
  }

  /* End of If: '<S66>/If' */

  /* Sum: '<S66>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S66>/offset'
   */
  rtb_Product4_o = rtb_Merge_gg + (Fuel_Cyl3_offset_DataStore());

  /* If: '<S65>/If' incorporates:
   *  Inport: '<S75>/In1'
   *  Inport: '<S76>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S65>/override_enable'
   *  UnitDelay: '<S65>/Unit Delay'
   */
  if ((Fuel_Cyl2_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S65>/NewValue' incorporates:
     *  ActionPort: '<S75>/Action Port'
     */
    rtb_Merge_db = BaseEngineController_LS_DWork.s65_UnitDelay_DSTATE;

    /* End of Outputs for SubSystem: '<S65>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S65>/OldValue' incorporates:
     *  ActionPort: '<S76>/Action Port'
     */
    rtb_Merge_db = BaseEngineController_LS_B.s118_FPC[1];

    /* End of Outputs for SubSystem: '<S65>/OldValue' */
  }

  /* End of If: '<S65>/If' */

  /* Sum: '<S65>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S65>/offset'
   */
  rtb_Sum_dn = rtb_Merge_db + (Fuel_Cyl2_offset_DataStore());

  /* If: '<S64>/If' incorporates:
   *  Inport: '<S73>/In1'
   *  Inport: '<S74>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S64>/override_enable'
   *  UnitDelay: '<S64>/Unit Delay'
   */
  if ((Fuel_Cyl1_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S64>/NewValue' incorporates:
     *  ActionPort: '<S73>/Action Port'
     */
    rtb_Merge_fp = BaseEngineController_LS_DWork.s64_UnitDelay_DSTATE;

    /* End of Outputs for SubSystem: '<S64>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S64>/OldValue' incorporates:
     *  ActionPort: '<S74>/Action Port'
     */
    rtb_Merge_fp = BaseEngineController_LS_B.s118_FPC[0];

    /* End of Outputs for SubSystem: '<S64>/OldValue' */
  }

  /* End of If: '<S64>/If' */

  /* If: '<S70>/If' incorporates:
   *  Inport: '<S85>/In1'
   *  Inport: '<S86>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S64>/offset'
   *  S-Function (motohawk_sfun_calibration): '<S70>/override_enable'
   *  Sum: '<S64>/Sum'
   *  UnitDelay: '<S70>/Unit Delay'
   */
  if ((Fuel_Global_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S70>/NewValue' incorporates:
     *  ActionPort: '<S85>/Action Port'
     */
    memcpy((void *)&rtb_Merge_bv[0], (void *)
           BaseEngineController_LS_DWork.s70_UnitDelay_DSTATE, sizeof(real_T) <<
           3U);

    /* End of Outputs for SubSystem: '<S70>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S70>/OldValue' incorporates:
     *  ActionPort: '<S86>/Action Port'
     */
    rtb_Merge_bv[0] = rtb_Merge_fp + (Fuel_Cyl1_offset_DataStore());
    rtb_Merge_bv[1] = rtb_Sum_dn;
    rtb_Merge_bv[2] = rtb_Product4_o;
    rtb_Merge_bv[3] = rtb_Switch_c;
    rtb_Merge_bv[4] = rtb_Switch1_n;
    rtb_Merge_bv[5] = rtb_Sum_cy;
    rtb_Merge_bv[6] = rtb_Product1_ii;
    rtb_Merge_bv[7] = rtb_Product1_l2;

    /* End of Outputs for SubSystem: '<S70>/OldValue' */
  }

  /* End of If: '<S70>/If' */

  /* Sum: '<S70>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S70>/offset'
   */
  for (i = 0; i < 8; i++) {
    BaseEngineController_LS_B.s70_Sum[i] = rtb_Merge_bv[i] +
      (Fuel_Global_offset_DataStore());
  }

  /* End of Sum: '<S70>/Sum' */
  /* Product: '<S21>/Product2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S21>/Injector Gain [ms//mg]'
   */
  for (i = 0; i < 8; i++) {
    rtb_Product2_aa[i] = BaseEngineController_LS_B.s70_Sum[i] *
      (InjGain_DataStore());
  }

  /* End of Product: '<S21>/Product2' */
  /* Sum: '<S21>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S21>/Injector Offset [ms]'
   */
  for (i = 0; i < 8; i++) {
    rtb_Product2_aa[i] += (InjOffset_DataStore());
  }

  /* End of Sum: '<S21>/Sum' */
  /* S-Function Block: <S490>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s490_motohawk_delta_time_DWORK1, NULL);
    rtb_Abs_p = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S490>/Product' incorporates:
   *  MinMax: '<S490>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S490>/motohawk_calibration'
   */
  rtb_Abs_p /= (rtb_Abs_p >= (FuelPresFilterConst_DataStore())) || rtIsNaN
    ((FuelPresFilterConst_DataStore())) ? rtb_Abs_p :
    (FuelPresFilterConst_DataStore());

  /* Logic: '<S462>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S462>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S462>/motohawk_fault_status4'
   */
  rtb_RelationalOperator_ipv = (IsFaultActive(48) || IsFaultActive(49));

  /* Logic: '<S462>/Logical Operator6' */
  rtb_RelationalOperator2_i = !rtb_RelationalOperator_ipv;

  /* Logic: '<S462>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S462>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S462>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_j = (IsFaultSuspected(48) || IsFaultSuspected(49));

  /* S-Function Block: <S404>/motohawk_ain2 Resource: FuelPresPin */
  {
    extern NativeError_S FuelPresPin_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    FuelPresPin_AnalogInput_Get(&BaseEngineController_LS_B.s404_motohawk_ain2,
      NULL);
  }

  /* DataTypeConversion: '<S462>/Data Type Conversion' */
  rtb_DataTypeConversion_gx = BaseEngineController_LS_B.s404_motohawk_ain2;

  /* Product: '<S462>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S462>/motohawk_calibration4'
   */
  rtb_Product1_l2 = (real_T)rtb_DataTypeConversion_gx * (FuelPresGain_DataStore());

  /* Sum: '<S462>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S462>/motohawk_calibration5'
   */
  BaseEngineController_LS_B.s462_Sum1 = rtb_Product1_l2 +
    (FuelPresOfst_DataStore());

  /* UnitDelay: '<S462>/Unit Delay1' */
  rtb_UnitDelay1_p = BaseEngineController_LS_DWork.s462_UnitDelay1_DSTATE;

  /* If: '<S462>/If' incorporates:
   *  Logic: '<S462>/Logical Operator5'
   */
  if (rtb_RelationalOperator2_i && rtb_LogicalOperator1_j) {
    /* Outputs for IfAction SubSystem: '<S462>/If Action Subsystem' incorporates:
     *  ActionPort: '<S491>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay1_p, &rtb_Merge_b3f);

    /* End of Outputs for SubSystem: '<S462>/If Action Subsystem' */
  } else if (rtb_RelationalOperator_ipv) {
    /* Outputs for IfAction SubSystem: '<S462>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S492>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((FuelPresDfltValue_DataStore()),
      &rtb_Merge_b3f);

    /* End of Outputs for SubSystem: '<S462>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S462>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S493>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      (BaseEngineController_LS_B.s462_Sum1, &rtb_Merge_b3f);

    /* End of Outputs for SubSystem: '<S462>/If Action Subsystem2' */
  }

  /* End of If: '<S462>/If' */

  /* Sum: '<S495>/Sum1' incorporates:
   *  Constant: '<S495>/Constant'
   *  Product: '<S495>/Product'
   *  Product: '<S495>/Product1'
   *  Sum: '<S495>/Sum'
   *  UnitDelay: '<S495>/Unit Delay'
   */
  rtb_Sum1_cs = (1.0 - rtb_Abs_p) *
    BaseEngineController_LS_DWork.s495_UnitDelay_DSTATE + rtb_Merge_b3f *
    rtb_Abs_p;

  /* If: '<S494>/If' incorporates:
   *  Inport: '<S496>/In1'
   *  Inport: '<S497>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S494>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S494>/override_enable'
   */
  if ((FuelPres_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S494>/NewValue' incorporates:
     *  ActionPort: '<S496>/Action Port'
     */
    BaseEngineController_LS_B.s494_Merge = (FuelPres_new_DataStore());

    /* End of Outputs for SubSystem: '<S494>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S494>/OldValue' incorporates:
     *  ActionPort: '<S497>/Action Port'
     */
    BaseEngineController_LS_B.s494_Merge = rtb_Sum1_cs;

    /* End of Outputs for SubSystem: '<S494>/OldValue' */
  }

  /* End of If: '<S494>/If' */

  /* Fcn: '<S62>/const ref to atm' */
  BaseEngineController_LS_B.s62_constreftoatm =
    (BaseEngineController_LS_B.s494_Merge + BaseEngineController_LS_B.s338_Sum)
    - BaseEngineController_LS_B.s502_Merge;

  /* S-Function Block: <S62>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (InjDeltaPress09In_DataStore()) =
      BaseEngineController_LS_B.s62_constreftoatm;
    (InjDeltaPress09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s62_constreftoatm,
       (InjDeltaPress09IdxArr_DataStore()), 9, (InjDeltaPress09Idx_DataStore()));
    rtb_motohawk_prelookup1_d = (InjDeltaPress09Idx_DataStore());
  }

  /* S-Function Block: <S21>/motohawk_interpolation_1d3 */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_motohawk_interpolation_1d3_k = TableInterpolation1D_real_T
      (rtb_motohawk_prelookup1_d, (real_T *) ((InjdPCompTbl_DataStore())), 9);
    (InjdPComp_DataStore()) = rtb_motohawk_interpolation_1d3_k;
  }

  /* Product: '<S21>/Product3' incorporates:
   *  S-Function (motohawk_sfun_interpolation_1d): '<S21>/motohawk_interpolation_1d3'
   *  S-Function (motohawk_sfun_prelookup): '<S62>/motohawk_prelookup1'
   */
  for (i = 0; i < 8; i++) {
    rtb_Product2_aa[i] = BaseEngineController_LS_B.s118_FuelMult *
      rtb_Product2_aa[i] * rtb_motohawk_interpolation_1d3_k;
  }

  /* End of Product: '<S21>/Product3' */

  /* Saturate: '<S21>/Saturation' */
  u = BaseEngineController_LS_B.s459_Sum1 >= 0.01 ?
    BaseEngineController_LS_B.s459_Sum1 : 0.01;

  /* S-Function Block: <S21>/motohawk_interpolation_1d4 */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_motohawk_interpolation_1d4_c = TableInterpolation1D_real_T
      (rtb_motohawk_prelookup1_d, (real_T *) ((InjTurnOffTbl_DataStore())), 9);
    (InjTurnOff_DataStore()) = rtb_motohawk_interpolation_1d4_c;
  }

  /* S-Function Block: <S21>/motohawk_interpolation_1d1 */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_motohawk_interpolation_1d1_oh = TableInterpolation1D_real_T
      (BaseEngineController_LS_B.s361_motohawk_prelookup, (real_T *)
       ((InjTurnOnTbl_DataStore())), 9);
    (InjTurnOn_DataStore()) = rtb_motohawk_interpolation_1d1_oh;
  }

  /* Sum: '<S21>/Sum2' incorporates:
   *  S-Function (motohawk_sfun_interpolation_1d): '<S21>/motohawk_interpolation_1d1'
   *  S-Function (motohawk_sfun_interpolation_1d): '<S21>/motohawk_interpolation_1d4'
   *  S-Function (motohawk_sfun_prelookup): '<S62>/motohawk_prelookup1'
   */
  BaseEngineController_LS_B.s21_Sum2 = rtb_motohawk_interpolation_1d1_oh -
    rtb_motohawk_interpolation_1d4_c;

  /* Sum: '<S21>/Sum1' incorporates:
   *  Constant: '<S21>/Constant'
   *  Product: '<S21>/Divide'
   *  Saturate: '<S21>/Saturation'
   */
  BaseEngineController_LS_B.s21_Sum1 = 120000.0 / u -
    BaseEngineController_LS_B.s21_Sum2;

  /* MinMax: '<S21>/MinMax' */
  for (i = 0; i < 8; i++) {
    BaseEngineController_LS_B.s21_MinMax[i] = (rtb_Product2_aa[i] <=
      BaseEngineController_LS_B.s21_Sum1) || rtIsNaN
      (BaseEngineController_LS_B.s21_Sum1) ? rtb_Product2_aa[i] :
      BaseEngineController_LS_B.s21_Sum1;
  }

  /* End of MinMax: '<S21>/MinMax' */
  /* If: '<S769>/If' incorporates:
   *  Inport: '<S780>/In1'
   *  Inport: '<S781>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S769>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S769>/override_enable'
   */
  if ((Mech_PW_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S769>/NewValue' incorporates:
     *  ActionPort: '<S780>/Action Port'
     */
    for (i = 0; i < 8; i++) {
      rtb_Product2_aa[i] = (Mech_PW_new_DataStore())[i];
    }

    /* End of Outputs for SubSystem: '<S769>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S769>/OldValue' incorporates:
     *  ActionPort: '<S781>/Action Port'
     */
    memcpy((void *)&rtb_Product2_aa[0], (void *)
           (&BaseEngineController_LS_B.s21_MinMax[0]), sizeof(real_T) << 3U);

    /* End of Outputs for SubSystem: '<S769>/OldValue' */
  }

  /* End of If: '<S769>/If' */

  /* DataTypeConversion: '<S704>/Data Type Conversion3' incorporates:
   *  Gain: '<S704>/Gain3'
   */
  for (i = 0; i < 8; i++) {
    u = 1000.0 * rtb_Product2_aa[i];
    if (u < 4.294967296E+9) {
      if (u >= 0.0) {
        rtb_Switch_kj = (uint32_T)u;
      } else {
        rtb_Switch_kj = 0U;
      }
    } else {
      rtb_Switch_kj = MAX_uint32_T;
    }

    rtb_InjectorSequence_o2[i] = rtb_Switch_kj;
  }

  /* End of DataTypeConversion: '<S704>/Data Type Conversion3' */
  /* Gain: '<S704>/Gain5' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S704>/motohawk_calibration9'
   */
  rtb_Abs_p = 1000.0 * (InjectorMaxDuration_DataStore());

  /* DataTypeConversion: '<S704>/Data Type Conversion6' */
  if (rtb_Abs_p < 4.294967296E+9) {
    if (rtb_Abs_p >= 0.0) {
      rtb_DataTypeConversion6 = (uint32_T)rtb_Abs_p;
    } else {
      rtb_DataTypeConversion6 = 0U;
    }
  } else {
    rtb_DataTypeConversion6 = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S704>/Data Type Conversion6' */
  /* If: '<S766>/If' incorporates:
   *  Inport: '<S774>/In1'
   *  Inport: '<S775>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S766>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S766>/override_enable'
   */
  if ((Elec_PW_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S766>/NewValue' incorporates:
     *  ActionPort: '<S774>/Action Port'
     */
    rtb_Product1_l2 = (Elec_PW_new_DataStore());

    /* End of Outputs for SubSystem: '<S766>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S766>/OldValue' incorporates:
     *  ActionPort: '<S775>/Action Port'
     */
    rtb_Product1_l2 = BaseEngineController_LS_B.s21_Sum2;

    /* End of Outputs for SubSystem: '<S766>/OldValue' */
  }

  /* End of If: '<S766>/If' */

  /* Gain: '<S704>/Gain1' */
  rtb_Abs_p = 1000.0 * rtb_Product1_l2;

  /* DataTypeConversion: '<S704>/Data Type Conversion1' */
  if (rtb_Abs_p < 4.294967296E+9) {
    if (rtb_Abs_p >= 0.0) {
      rtb_Sum_hh = (uint32_T)rtb_Abs_p;
    } else {
      rtb_Sum_hh = 0U;
    }
  } else {
    rtb_Sum_hh = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S704>/Data Type Conversion1' */
  /* If: '<S767>/If' incorporates:
   *  Inport: '<S776>/In1'
   *  Inport: '<S777>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S767>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S767>/override_enable'
   */
  if ((MakeUp_EOI_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S767>/NewValue' incorporates:
     *  ActionPort: '<S776>/Action Port'
     */
    rtb_Product1_l2 = (MakeUp_EOI_new_DataStore());

    /* End of Outputs for SubSystem: '<S767>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S767>/OldValue' incorporates:
     *  ActionPort: '<S777>/Action Port'
     */
    rtb_Product1_l2 = BaseEngineController_LS_B.s118_MakeUpEOI;

    /* End of Outputs for SubSystem: '<S767>/OldValue' */
  }

  /* End of If: '<S767>/If' */

  /* Gain: '<S704>/Gain6' */
  rtb_Abs_p = 16.0 * rtb_Product1_l2;

  /* DataTypeConversion: '<S704>/Data Type Conversion7' */
  if (rtb_Abs_p < 32768.0) {
    if (rtb_Abs_p >= -32768.0) {
      rtb_DataTypeConversion7 = (int16_T)rtb_Abs_p;
    } else {
      rtb_DataTypeConversion7 = MIN_int16_T;
    }
  } else {
    rtb_DataTypeConversion7 = MAX_int16_T;
  }

  /* End of DataTypeConversion: '<S704>/Data Type Conversion7' */
  /* Gain: '<S704>/Gain7' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S704>/motohawk_calibration6'
   */
  rtb_Abs_p = 1000.0 * (MinMakeUpPW_DataStore());

  /* DataTypeConversion: '<S704>/Data Type Conversion8' */
  if (rtb_Abs_p < 4.294967296E+9) {
    if (rtb_Abs_p >= 0.0) {
      rtb_UnitDelay_lk = (uint32_T)rtb_Abs_p;
    } else {
      rtb_UnitDelay_lk = 0U;
    }
  } else {
    rtb_UnitDelay_lk = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S704>/Data Type Conversion8' */
  /* Outputs for Enabled SubSystem: '<S22>/PassThrough5' incorporates:
   *  EnablePort: '<S97>/Enable'
   */
  /* Logic: '<S22>/Logical Operator1' incorporates:
   *  Constant: '<S22>/Constant2'
   *  Constant: '<S22>/Constant3'
   *  RelationalOperator: '<S22>/Relational Operator2'
   *  RelationalOperator: '<S22>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S22>/motohawk_calibration1'
   */
  if ((((int8_T)(RevLimitType_DataStore())) == 1) || (((int8_T)
        (RevLimitType_DataStore())) == 2)) {
    if (!BaseEngineController_LS_DWork.s22_PassThrough5_MODE) {
      BaseEngineController_LS_DWork.s22_PassThrough5_MODE = TRUE;
    }

    /* DataTypeConversion: '<S97>/Data Type Conversion1' */
    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_B.s97_DataTypeConversion1[i] =
        ((BaseEngineController_LS_B.s108_CutArray[i] != 0));
    }

    /* End of DataTypeConversion: '<S97>/Data Type Conversion1' */
  } else {
    if (BaseEngineController_LS_DWork.s22_PassThrough5_MODE) {
      /* Disable for Outport: '<S97>/Out1' */
      for (i = 0; i < 8; i++) {
        BaseEngineController_LS_B.s97_DataTypeConversion1[i] = FALSE;
      }

      /* End of Outport: '<S97>/Out1' */
      BaseEngineController_LS_DWork.s22_PassThrough5_MODE = FALSE;
    }
  }

  /* End of Logic: '<S22>/Logical Operator1' */
  /* End of Outputs for SubSystem: '<S22>/PassThrough5' */

  /* Logic: '<S22>/Logical Operator3' */
  for (i = 0; i < 8; i++) {
    rtb_LogicalOperator3_jj[i] =
      !BaseEngineController_LS_B.s97_DataTypeConversion1[i];
  }

  /* End of Logic: '<S22>/Logical Operator3' */

  /* Outputs for Atomic SubSystem: '<S704>/Injector Enable Manager' */

  /* S-Function Block: <S773>/motohawk_delta_time */
  rtb_motohawk_delta_time_i = 0.005;

  /* Switch: '<S773>/Switch' incorporates:
   *  Constant: '<S773>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S773>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S773>/motohawk_delta_time'
   *  S-Function (motohawk_sfun_fault_action): '<S765>/motohawk_fault_action'
   *  Sum: '<S773>/Sum'
   */
  if (GetFaultActionStatus(2)) {
    rtb_Product1_l2 = rtb_motohawk_delta_time_i +
      DelayedEngineShutdownTimer_DataStore();
  } else {
    rtb_Product1_l2 = 0.0;
  }

  /* End of Switch: '<S773>/Switch' */
  /* RelationalOperator: '<S765>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S765>/motohawk_calibration1'
   */
  rtb_LogicalOperator_iy = (rtb_Product1_l2 > (EngineShutdownDelayTime_DataStore
                             ()));

  /* S-Function (motohawk_sfun_data_write): '<S765>/motohawk_data_write' */
  /* Write to Data Storage as scalar: DelayedEngineShutdownAction */
  {
    DelayedEngineShutdownAction_DataStore() = rtb_LogicalOperator_iy;
  }

  /* RelationalOperator: '<S765>/Relational Operator1' incorporates:
   *  Gain: '<S765>/Gain'
   *  S-Function (motohawk_sfun_calibration): '<S765>/motohawk_calibration1'
   */
  rtb_RelationalOperator1_cf = ((rtb_Product1_l2 > 0.5 *
    (EngineShutdownDelayTime_DataStore())));

  /* S-Function (motohawk_sfun_data_write): '<S765>/motohawk_data_write1' */
  /* Write to Data Storage as scalar: DelayedEngineShutdownWarning */
  {
    DelayedEngineShutdownWarning_DataStore() = rtb_RelationalOperator1_cf;
  }

  /* RelationalOperator: '<S765>/Relational Operator2' incorporates:
   *  Constant: '<S765>/Constant'
   */
  rtb_RelationalOperator2_cd = ((rtb_Product1_l2 > 0.0));

  /* S-Function (motohawk_sfun_data_write): '<S765>/motohawk_data_write2' */
  /* Write to Data Storage as scalar: EngineShutdownTimerState */
  {
    EngineShutdownTimerState_DataStore() = rtb_RelationalOperator2_cd;
  }

  /* Logic: '<S765>/Logical Operator' */
  rtb_LogicalOperator_iy = !rtb_LogicalOperator_iy;

  /* Logic: '<S765>/Logical Operator2' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S765>/motohawk_data_read'
   */
  rtb_RelationalOperator2_i = !EngineShutdownAction_DataStore();

  /* S-Function (motohawk_sfun_data_read): '<S765>/motohawk_data_read1' */
  rtb_motohawk_data_read1_iz = ECUP_Enabled_DataStore();

  /* Logic: '<S765>/Logical Operator4' incorporates:
   *  Constant: '<S772>/Constant'
   *  RelationalOperator: '<S772>/RelOp'
   *  S-Function (motohawk_sfun_data_read): '<S765>/motohawk_data_read2'
   */
  rtb_LogicalOperator1_j = !(((uint8_T)EngineState_DataStore()) == 1);

  /* Logic: '<S765>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S765>/motohawk_calibration10'
   *  S-Function (motohawk_sfun_calibration): '<S765>/motohawk_calibration11'
   *  S-Function (motohawk_sfun_calibration): '<S765>/motohawk_calibration12'
   *  S-Function (motohawk_sfun_calibration): '<S765>/motohawk_calibration2'
   *  S-Function (motohawk_sfun_calibration): '<S765>/motohawk_calibration3'
   *  S-Function (motohawk_sfun_calibration): '<S765>/motohawk_calibration4'
   *  S-Function (motohawk_sfun_calibration): '<S765>/motohawk_calibration7'
   *  S-Function (motohawk_sfun_calibration): '<S765>/motohawk_calibration8'
   */
  rtb_LogicalOperator1_aj[0] = (rtb_LogicalOperator_iy &&
    rtb_RelationalOperator2_i && rtb_motohawk_data_read1_iz &&
    rtb_LogicalOperator1_j && (Injector1Enable_DataStore()));
  rtb_LogicalOperator1_aj[1] = (rtb_LogicalOperator_iy &&
    rtb_RelationalOperator2_i && rtb_motohawk_data_read1_iz &&
    rtb_LogicalOperator1_j && (Injector2Enable_DataStore()));
  rtb_LogicalOperator1_aj[2] = (rtb_LogicalOperator_iy &&
    rtb_RelationalOperator2_i && rtb_motohawk_data_read1_iz &&
    rtb_LogicalOperator1_j && (Injector3Enable_DataStore()));
  rtb_LogicalOperator1_aj[3] = (rtb_LogicalOperator_iy &&
    rtb_RelationalOperator2_i && rtb_motohawk_data_read1_iz &&
    rtb_LogicalOperator1_j && (Injector4Enable_DataStore()));
  rtb_LogicalOperator1_aj[4] = (rtb_LogicalOperator_iy &&
    rtb_RelationalOperator2_i && rtb_motohawk_data_read1_iz &&
    rtb_LogicalOperator1_j && (Injector5Enable_DataStore()));
  rtb_LogicalOperator1_aj[5] = (rtb_LogicalOperator_iy &&
    rtb_RelationalOperator2_i && rtb_motohawk_data_read1_iz &&
    rtb_LogicalOperator1_j && (Injector6Enable_DataStore()));
  rtb_LogicalOperator1_aj[6] = (rtb_LogicalOperator_iy &&
    rtb_RelationalOperator2_i && rtb_motohawk_data_read1_iz &&
    rtb_LogicalOperator1_j && (Injector7Enable_DataStore()));
  rtb_LogicalOperator1_aj[7] = (rtb_LogicalOperator_iy &&
    rtb_RelationalOperator2_i && rtb_motohawk_data_read1_iz &&
    rtb_LogicalOperator1_j && (Injector8Enable_DataStore()));

  /* Saturate: '<S773>/Saturation' */
  rtb_Saturation_k4 = rtb_Product1_l2 >= 16000.0 ? 16000.0 : rtb_Product1_l2 <=
    0.0 ? 0.0 : rtb_Product1_l2;

  /* S-Function (motohawk_sfun_data_write): '<S773>/motohawk_data_write' */
  /* Write to Data Storage as scalar: DelayedEngineShutdownTimer */
  {
    DelayedEngineShutdownTimer_DataStore() = rtb_Saturation_k4;
  }

  /* End of Outputs for SubSystem: '<S704>/Injector Enable Manager' */
  /* Logic: '<S704>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S704>/motohawk_data_read'
   */
  rtb_RelationalOperator2_i = !ESTOP_DataStore();

  /* If: '<S771>/If' incorporates:
   *  Inport: '<S784>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S771>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S771>/override_enable'
   */
  if ((ESTOP_FuelInj_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S771>/NewValue' incorporates:
     *  ActionPort: '<S784>/Action Port'
     */
    rtb_RelationalOperator2_i = (ESTOP_FuelInj_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S771>/NewValue' */
  } else {
  }

  /* End of If: '<S771>/If' */

  /* If: '<S770>/If' incorporates:
   *  Inport: '<S782>/In1'
   *  Inport: '<S783>/In1'
   *  Logic: '<S704>/Logical Operator'
   *  S-Function (motohawk_sfun_calibration): '<S770>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S770>/override_enable'
   */
  if ((InjEnable_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S770>/NewValue' incorporates:
     *  ActionPort: '<S782>/Action Port'
     */
    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_B.s770_Merge[i] = (InjEnable_new_DataStore())[i];
    }

    /* End of Outputs for SubSystem: '<S770>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S770>/OldValue' incorporates:
     *  ActionPort: '<S783>/Action Port'
     */
    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_B.s770_Merge[i] = ((rtb_RelationalOperator2_i &&
        rtb_LogicalOperator3_jj[i] && rtb_LogicalOperator1_aj[i]));
    }

    /* End of Outputs for SubSystem: '<S770>/OldValue' */
  }

  /* End of If: '<S770>/If' */

  /* S-Function Block: <S704>/Injector Sequence */
  {
    extern TransientInjectorSeqInfo_T TransientInjectorSeqInfo_40[8];
    uint32_T makeup_duration;
    int16_T makeup_angle;
    extern S_SeqOutInjDiagReport InjectorSeqDiagInfo_40[8];
    extern int32_T InjectorSeqDiagLastPin_40;
    extern uint8_T motohawk_encoder_status;
    uint32_T elec_duration;
    S_SeqOutPulseTiming TimingObj;
    E_SeqOutCond seq_enable;
    NativeError_S sErrorResult;
    int32_T i;
    int32_T index;
    int32_T j;
    boolean_T enable, pulse_scheduling_allowed;
    S_SeqOutAttributes DynamicObj;
    DynamicObj.uValidAttributesMask = USE_SEQ_TIMING ;
    DynamicObj.TimingObj.eCtrlMode = DURATION_CTRL;
    index = 0;
    if ((INJ_SequenceType_DataStore()) == 1) {
      for (j=0; j < (EncoderNumCylinders_DataStore()); j++) {
        int32_T next_index = 0;
        int16_T min_angle_diff = 32767;
        int16_T angle_diff;
        int16_T current_angle;
        current_angle = 720*16 - GetEncoderEngAngle();
        for (index=0; index < (EncoderNumCylinders_DataStore()); index++) {
          int16_T cylinder_angle;
          int32_T cyl = (EncoderTDCOrder_DataStore())[index];
          cylinder_angle = (EncoderTDCAngles_DataStore())[cyl] -
            rtb_DataTypeConversion2_pj;
          angle_diff = current_angle - cylinder_angle;
          while (angle_diff < 0) {
            angle_diff += 720*16;
          }

          while (angle_diff >= 720*16) {
            angle_diff -= 720*16;
          }

          if (angle_diff < min_angle_diff) {
            min_angle_diff = angle_diff;
            next_index = index;
          }
        }

        index = next_index;

        {
          extern real_T NextInjectorAngle;
          NextInjectorAngle = (real_T) (EncoderTDCAngles_DataStore())
            [(EncoderTDCOrder_DataStore())[index]]/16.0;
        }

        {
          extern uint8_T NextCylinderToInject;
          NextCylinderToInject = (uint8_T) (EncoderTDCOrder_DataStore())[index]+
            1;
        }
      }
    }

    pulse_scheduling_allowed = (motohawk_encoder_status >= (uint8_T)
      ENC_SYNC_CAM_UNKNOWN) && (GetEncoderResourceInstantRPM() > 10);
    for (j=0; j < (EncoderNumCylinders_DataStore()); j++) {
      enable = ((BaseEngineController_LS_B.s770_Merge)[index] &&
                pulse_scheduling_allowed);
      if ((INJ_SequenceType_DataStore()) == 0) {
        if ((enable) !=
            ((&BaseEngineController_LS_DWork.s704_InjectorSequence_DWORK1[0])
             [index])) {
          seq_enable = (enable) ? SEQ_ENABLED : SEQ_DISNEXT;
          SetSeqOutCond((E_ModuleResource) ((INJ_InitialPin_DataStore()) + index),
                        0, seq_enable);
          if ((INJ_Behavior_DataStore()) == 1)
            SetSeqOutCond((E_ModuleResource) ((INJ_InitialPin_DataStore()) +
              index), 1, (enable && 1) ? SEQ_ENABLED : SEQ_DISNEXT);
          (&BaseEngineController_LS_DWork.s704_InjectorSequence_DWORK1[0])[index]
            = enable;
        }

        if ((BaseEngineController_LS_ConstB.s704_DataTypeConversion5) !=
            (BaseEngineController_LS_DWork.s704_InjectorSequence_DWORK2)) {
          SetSeqOutInjPeakTime((E_ModuleResource) ((INJ_InitialPin_DataStore())
            + index), BaseEngineController_LS_ConstB.s704_DataTypeConversion5);
        }

        elec_duration = ((rtb_InjectorSequence_o2)[index]) + (rtb_Sum_hh);

        /* Primary Pulse */
        DynamicObj.u1AffectedPulse = 0;
        DynamicObj.TimingObj.s2StartAngle = rtb_DataTypeConversion2_pj;
        DynamicObj.TimingObj.u4Duration = elec_duration;
        if ((INJ_Behavior_DataStore()) == 0) {
          SetResourceAttributesSequenceOut((E_ModuleResource)
            ((INJ_InitialPin_DataStore()) + index), &DynamicObj,
            BEHAVIOUR_INJ_SEQ);
        } else if ((INJ_Behavior_DataStore()) == 1) {
          SetResourceAttributesSequenceOut((E_ModuleResource)
            ((INJ_InitialPin_DataStore()) + index), &DynamicObj,
            BEHAVIOUR_TRAN_FUEL_SEQ);
          DynamicObj.u1AffectedPulse = 1;
          DynamicObj.TimingObj.s2StartAngle = rtb_DataTypeConversion2_pj + 6400;
          DynamicObj.TimingObj.u4Duration = 0;
          while (DynamicObj.TimingObj.s2StartAngle >= 720*16)
            DynamicObj.TimingObj.s2StartAngle -= 720*16;
          if (TransientInjectorSeqInfo_40[index].primaryComplete) {
            if (elec_duration > TransientInjectorSeqInfo_40[index].
                primaryDuration) {
              makeup_duration = elec_duration -
                TransientInjectorSeqInfo_40[index].primaryDuration;
              if (makeup_duration >= (rtb_UnitDelay_lk)) {
                makeup_duration += (rtb_Sum_hh);
                if (rtb_DataTypeConversion6 > 0) {
                  if (makeup_duration > (rtb_DataTypeConversion6))
                    makeup_duration = rtb_DataTypeConversion6;
                }

                makeup_angle = (rtb_DataTypeConversion2_pj + 6400) + (int16_T)
                  ((makeup_duration * ((uint32_T) GetEncoderResourceInstantRPM())
                    * 96UL) / 1000000UL);
                while (makeup_angle >= 720*16)
                  makeup_angle -= 720*16;
                DynamicObj.TimingObj.s2StartAngle = makeup_angle;
                DynamicObj.TimingObj.u4Duration = makeup_duration;
              }
            }
          }

          SetResourceAttributesSequenceOut((E_ModuleResource)
            ((INJ_InitialPin_DataStore()) + index), &DynamicObj,
            BEHAVIOUR_TRAN_FUEL_SEQ);
        }
      } else if ((INJ_SequenceType_DataStore()) == 1) {
        int half_cylinders = (EncoderNumCylinders_DataStore()) / 2;
        if (index < half_cylinders) {
          S_SeqOutPulseTiming TimingObj;
          if ((enable) !=
              ((&BaseEngineController_LS_DWork.s704_InjectorSequence_DWORK1[0])
               [index])) {
            seq_enable = (enable) ? SEQ_ENABLED : SEQ_DISNEXT;
            SetSeqOutCond((E_ModuleResource) ((INJ_InitialPin_DataStore()) +
              index), 0, seq_enable);
            SetSeqOutCond((E_ModuleResource) ((INJ_InitialPin_DataStore()) +
              index), 1, seq_enable);
            (&BaseEngineController_LS_DWork.s704_InjectorSequence_DWORK1[0])
              [index] = enable;
          }

          /* Update peak time only on primary Pulse */
          if ((BaseEngineController_LS_ConstB.s704_DataTypeConversion5) !=
              (BaseEngineController_LS_DWork.s704_InjectorSequence_DWORK2)) {
            SetSeqOutInjPeakTime((E_ModuleResource) ((INJ_InitialPin_DataStore())
              + index), BaseEngineController_LS_ConstB.s704_DataTypeConversion5);
          }

          elec_duration = ((rtb_InjectorSequence_o2)[index]) / 2 + (rtb_Sum_hh);
          DynamicObj.u1AffectedPulse = 0;
          DynamicObj.TimingObj.s2StartAngle = rtb_DataTypeConversion2_pj;
          DynamicObj.TimingObj.u4Duration = elec_duration;
          SetResourceAttributesSequenceOut((E_ModuleResource)
            ((INJ_InitialPin_DataStore()) + index), &DynamicObj,
            BEHAVIOUR_INJ_SEQ);
          DynamicObj.u1AffectedPulse = 1;
          SetResourceAttributesSequenceOut((E_ModuleResource)
            ((INJ_InitialPin_DataStore()) + index), &DynamicObj,
            BEHAVIOUR_INJ_SEQ);
        }
      } else if ((INJ_SequenceType_DataStore()) == 2) {
        S_SeqOutPulseTiming TimingObj_pulse1;
        if ((enable) !=
            ((&BaseEngineController_LS_DWork.s704_InjectorSequence_DWORK1[0])
             [index])) {
          seq_enable = (enable) ? SEQ_ENABLED : SEQ_DISNEXT;
          SetSeqOutCond((E_ModuleResource) ((INJ_InitialPin_DataStore()) + index),
                        0, seq_enable);
          SetSeqOutCond((E_ModuleResource) ((INJ_InitialPin_DataStore()) + index),
                        1, seq_enable);
          (&BaseEngineController_LS_DWork.s704_InjectorSequence_DWORK1[0])[index]
            = enable;
        }

        if ((BaseEngineController_LS_ConstB.s704_DataTypeConversion5) !=
            (BaseEngineController_LS_DWork.s704_InjectorSequence_DWORK2)) {
          SetSeqOutInjPeakTime((E_ModuleResource) ((INJ_InitialPin_DataStore())
            + index), BaseEngineController_LS_ConstB.s704_DataTypeConversion5);
        }

        elec_duration = ((rtb_InjectorSequence_o2)[index])/2 + (rtb_Sum_hh);
        DynamicObj.u1AffectedPulse = 0;
        DynamicObj.TimingObj.s2StartAngle = rtb_DataTypeConversion2_pj;
        DynamicObj.TimingObj.u4Duration = elec_duration;
        SetResourceAttributesSequenceOut((E_ModuleResource)
          ((INJ_InitialPin_DataStore()) + index), &DynamicObj, BEHAVIOUR_INJ_SEQ);
        DynamicObj.u1AffectedPulse = 1;
        SetResourceAttributesSequenceOut((E_ModuleResource)
          ((INJ_InitialPin_DataStore()) + index), &DynamicObj, BEHAVIOUR_INJ_SEQ);
      } else {
        /* Only standard & batch sequence types are supported */
      }

      index++;
      if (index >= (EncoderNumCylinders_DataStore())) {
        index = 0;
      }
    }

    BaseEngineController_LS_DWork.s704_InjectorSequence_DWORK2 =
      BaseEngineController_LS_ConstB.s704_DataTypeConversion5;

    /* Output per-cylinder diagnostics */
    {
      for (i=0; i < (EncoderNumCylinders_DataStore()); i++) {
        (BaseEngineController_LS_B.s704_InjectorSequence_o1)[i] =
          InjectorSeqDiagInfo_40[i].u1TXCnt;
      }

      for (i=0; i < (EncoderNumCylinders_DataStore()); i++) {
        (rtb_InjectorSequence_o2)[i] = InjectorSeqDiagInfo_40[i].
          u4TXTimeInMicroSecs;
      }
    }
  }

  /* RelationalOperator: '<S764>/==' incorporates:
   *  Constant: '<S764>/Zero'
   */
  for (i = 0; i < 8; i++) {
    rtb_LogicalOperator3_jj[i] =
      (BaseEngineController_LS_B.s704_InjectorSequence_o1[i] == 0);
  }

  /* End of RelationalOperator: '<S764>/==' */
  /* S-Function Block: <S764>/motohawk_encoder_average_rpm */
  {
    rtb_motohawk_encoder_average_rpm = GetEncoderResourceAverageRPM();
  }

  /* RelationalOperator: '<S764>/<1' incorporates:
   *  Constant: '<S764>/Zero1'
   *  S-Function (motohawk_sfun_encoder_average_rpm): '<S764>/motohawk_encoder_average_rpm'
   */
  rtb_RelationalOperator2_i = (rtb_motohawk_encoder_average_rpm > 100);

  /* Logic: '<S764>/AND1' */
  for (i = 0; i < 8; i++) {
    rtb_AND1[i] = (rtb_LogicalOperator3_jj[i] && rtb_RelationalOperator2_i &&
                   BaseEngineController_LS_B.s770_Merge[i]);
  }

  /* End of Logic: '<S764>/AND1' */

  /* S-Function (motohawk_sfun_fault_def): '<S764>/motohawk_fault_def' */

  /* Set Fault Suspected Status: Inj1Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(56, rtb_AND1[0]);
    UpdateFault(56);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S764>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: Inj2Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(57, rtb_AND1[1]);
    UpdateFault(57);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S764>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: Inj3Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(58, rtb_AND1[2]);
    UpdateFault(58);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S764>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: Inj4Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(59, rtb_AND1[3]);
    UpdateFault(59);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S764>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: Inj5Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(60, rtb_AND1[4]);
    UpdateFault(60);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S764>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: Inj6Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(61, rtb_AND1[5]);
    UpdateFault(61);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S764>/motohawk_fault_def6' */

  /* Set Fault Suspected Status: Inj7Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(62, rtb_AND1[6]);
    UpdateFault(62);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S764>/motohawk_fault_def7' */

  /* Set Fault Suspected Status: Inj8Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(63, rtb_AND1[7]);
    UpdateFault(63);
  }

  /* Logic: '<S705>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_fault_action): '<S705>/motohawk_fault_action'
   */
  rtb_RelationalOperator_ipv = !GetFaultActionStatus(6);

  /* Product: '<S705>/Product' */
  rtb_Product1_l2 = BaseEngineController_LS_B.s118_WASTEGATE * (real_T)
    rtb_RelationalOperator_ipv;

  /* If: '<S788>/If' incorporates:
   *  Inport: '<S789>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S788>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S788>/override_enable'
   */
  if ((WASTEGATE_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S788>/NewValue' incorporates:
     *  ActionPort: '<S789>/Action Port'
     */
    rtb_Product1_l2 = (WASTEGATE_new_DataStore());

    /* End of Outputs for SubSystem: '<S788>/NewValue' */
  } else {
  }

  /* End of If: '<S788>/If' */

  /* Product: '<S786>/Product' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S786>/motohawk_calibration'
   */
  rtb_Product1_l2 *= (WASTEGATEGain_DataStore());

  /* Sum: '<S786>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S786>/motohawk_calibration1'
   */
  rtb_Abs_p = rtb_Product1_l2 + (WASTEGATEOffset_DataStore());

  /* MinMax: '<S787>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S786>/motohawk_calibration2'
   */
  rtb_Abs_p = (rtb_Abs_p >= (WASTEGATEMinLimit_DataStore())) || rtIsNaN
    ((WASTEGATEMinLimit_DataStore())) ? rtb_Abs_p : (WASTEGATEMinLimit_DataStore
    ());

  /* MinMax: '<S787>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S786>/motohawk_calibration3'
   */
  BaseEngineController_LS_B.s787_MinMax1 = (rtb_Abs_p <=
    (WASTEGATEMaxLimit_DataStore())) || rtIsNaN((WASTEGATEMaxLimit_DataStore()))
    ? rtb_Abs_p : (WASTEGATEMaxLimit_DataStore());

  /* Gain: '<S786>/Convert to integer 14-bit PWM resolution' */
  rtb_Abs_p = 40.95 * BaseEngineController_LS_B.s787_MinMax1;

  /* DataTypeConversion: '<S786>/Data Type Conversion3' */
  if (rtb_Abs_p < 32768.0) {
    if (rtb_Abs_p >= -32768.0) {
      rtb_DataTypeConversion3_e = (int16_T)rtb_Abs_p;
    } else {
      rtb_DataTypeConversion3_e = MIN_int16_T;
    }
  } else {
    rtb_DataTypeConversion3_e = MAX_int16_T;
  }

  /* End of DataTypeConversion: '<S786>/Data Type Conversion3' */
  /* Gain: '<S786>/Convert to integer 0.01Hz resolution' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S786>/motohawk_calibration4'
   */
  rtb_Abs_p = 100.0 * (WASTEGATEFrequency_DataStore());

  /* DataTypeConversion: '<S786>/Data Type Conversion2' */
  if (rtb_Abs_p < 4.294967296E+9) {
    if (rtb_Abs_p >= 0.0) {
      rtb_DataTypeConversion2_p = (uint32_T)rtb_Abs_p;
    } else {
      rtb_DataTypeConversion2_p = 0U;
    }
  } else {
    rtb_DataTypeConversion2_p = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S786>/Data Type Conversion2' */

  /* Sum: '<S22>/Sum1' incorporates:
   *  DataTypeConversion: '<S22>/Data Type Conversion2'
   *  DataTypeConversion: '<S22>/Data Type Conversion3'
   *  DataTypeConversion: '<S22>/Data Type Conversion4'
   *  Fcn: '<S22>/Fcn1'
   *  Fcn: '<S22>/Fcn2'
   */
  rtb_Abs_p = ((real_T)rtb_motohawk_fault_action3 * 3.0 + (real_T)
               rtb_motohawk_fault_action2 * 2.0) + (real_T)
    rtb_motohawk_fault_action1_o;

  /* DataTypeConversion: '<S22>/Data Type Conversion5' */
  if (rtb_Abs_p < 256.0) {
    if (rtb_Abs_p >= 0.0) {
      BaseEngineController_LS_B.s22_DataTypeConversion5 = (uint8_T)rtb_Abs_p;
    } else {
      BaseEngineController_LS_B.s22_DataTypeConversion5 = 0U;
    }
  } else {
    BaseEngineController_LS_B.s22_DataTypeConversion5 = MAX_uint8_T;
  }

  /* End of DataTypeConversion: '<S22>/Data Type Conversion5' */

  /* UnitDelay: '<S400>/Unit Delay' */
  rtb_UnitDelay_lk = BaseEngineController_LS_DWork.s400_UnitDelay_DSTATE;

  /* Sum: '<S400>/Sum' incorporates:
   *  Constant: '<S400>/Constant1'
   */
  rtb_Switch_kj = 1U + rtb_UnitDelay_lk;
  if (rtb_Switch_kj < 1U) {
    rtb_Switch_kj = MAX_uint32_T;
  }

  rtb_Sum_hh = rtb_Switch_kj;

  /* End of Sum: '<S400>/Sum' */

  /* RelationalOperator: '<S400>/Relational Operator' incorporates:
   *  Constant: '<S18>/Count'
   */
  rtb_RelationalOperator_jv = (rtb_Sum_hh >= 5U);

  /* S-Function Block: <S334>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (App05In_DataStore()) = rtb_Switch2;
    (App05Idx_DataStore()) = TablePrelookup_real_T(rtb_Switch2,
      (App05IdxArr_DataStore()), 5, (App05Idx_DataStore()));
    rtb_motohawk_prelookup_b2 = (App05Idx_DataStore());
  }

  /* S-Function Block: <S355>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (ACPres05In_DataStore()) = BaseEngineController_LS_B.s473_Merge;
    (ACPres05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s473_Merge, (ACPres05IdxArr_DataStore()), 5,
       (ACPres05Idx_DataStore()));
    rtb_motohawk_prelookup_b2 = (ACPres05Idx_DataStore());
  }

  /* S-Function Block: <S360>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (RPM05In_DataStore()) = BaseEngineController_LS_B.s459_Sum1;
    (RPM05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s459_Sum1, (RPM05IdxArr_DataStore()), 5,
       (RPM05Idx_DataStore()));
    rtb_motohawk_prelookup_b2 = (RPM05Idx_DataStore());
  }

  /* S-Function Block: <S392>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s392_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_hb = ((real_T) delta) * 0.000001;
  }

  /* Sum: '<S392>/Sum' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S392>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S392>/motohawk_delta_time'
   */
  BaseEngineController_LS_B.s392_Sum = rtb_motohawk_delta_time_hb +
    TimeSinceKeyOnTimer_DataStore();

  /* UnitDelay: '<S372>/Unit Delay1' */
  rtb_Product1_l2 = BaseEngineController_LS_DWork.s372_UnitDelay1_DSTATE;

  /* Sum: '<S372>/Sum3' incorporates:
   *  Constant: '<S372>/Constant1'
   *  Product: '<S372>/Product2'
   *  Product: '<S372>/Product3'
   *  S-Function (motohawk_sfun_calibration): '<S372>/motohawk_calibration1'
   *  Sum: '<S372>/Sum2'
   */
  BaseEngineController_LS_B.s372_Sum3 = (1.0 - (PostO2DelagFiltConst_DataStore()))
    * rtb_Product1_l2 + (PostO2DelagFiltConst_DataStore()) *
    BaseEngineController_LS_B.s540_Gain;

  /* Sum: '<S371>/Sum3' incorporates:
   *  Constant: '<S371>/kPa Gauge to kPa absolute'
   */
  BaseEngineController_LS_B.s371_Sum3 = (BaseEngineController_LS_B.s494_Merge +
    100.0) - BaseEngineController_LS_B.s510_Merge;

  /* S-Function Block: <S516>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s516_motohawk_delta_time_DWORK1, NULL);
    rtb_Abs_p = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S516>/Product' incorporates:
   *  MinMax: '<S516>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S516>/motohawk_calibration'
   */
  rtb_Abs_p /= (rtb_Abs_p >= (OilPresFilterConst_DataStore())) || rtIsNaN
    ((OilPresFilterConst_DataStore())) ? rtb_Abs_p :
    (OilPresFilterConst_DataStore());

  /* Logic: '<S466>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S466>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S466>/motohawk_fault_status4'
   */
  rtb_RelationalOperator_ipv = (IsFaultActive(82) || IsFaultActive(83));

  /* Logic: '<S466>/Logical Operator6' */
  rtb_RelationalOperator2_i = !rtb_RelationalOperator_ipv;

  /* Logic: '<S466>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S466>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S466>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_j = (IsFaultSuspected(82) || IsFaultSuspected(83));

  /* S-Function Block: <S404>/motohawk_ain1 Resource: OilPresPin */
  {
    extern NativeError_S OilPresPin_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    OilPresPin_AnalogInput_Get(&BaseEngineController_LS_B.s404_motohawk_ain1,
      NULL);
  }

  /* DataTypeConversion: '<S466>/Data Type Conversion' */
  rtb_DataTypeConversion_m0 = (real_T)
    BaseEngineController_LS_B.s404_motohawk_ain1;

  /* Product: '<S466>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S466>/motohawk_calibration4'
   */
  rtb_Product1_l2 = rtb_DataTypeConversion_m0 * (OilPresGain_DataStore());

  /* Sum: '<S466>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S466>/motohawk_calibration5'
   */
  BaseEngineController_LS_B.s466_Sum1 = rtb_Product1_l2 + (OilPresOfst_DataStore
    ());

  /* UnitDelay: '<S466>/Unit Delay1' */
  rtb_UnitDelay1_aa = BaseEngineController_LS_DWork.s466_UnitDelay1_DSTATE;

  /* If: '<S466>/If' incorporates:
   *  Logic: '<S466>/Logical Operator5'
   */
  if (rtb_RelationalOperator2_i && rtb_LogicalOperator1_j) {
    /* Outputs for IfAction SubSystem: '<S466>/If Action Subsystem' incorporates:
     *  ActionPort: '<S517>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay1_aa, &rtb_Merge_ol);

    /* End of Outputs for SubSystem: '<S466>/If Action Subsystem' */
  } else if (rtb_RelationalOperator_ipv) {
    /* Outputs for IfAction SubSystem: '<S466>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S518>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((OilPresDfltValue_DataStore()),
      &rtb_Merge_ol);

    /* End of Outputs for SubSystem: '<S466>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S466>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S519>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      (BaseEngineController_LS_B.s466_Sum1, &rtb_Merge_ol);

    /* End of Outputs for SubSystem: '<S466>/If Action Subsystem2' */
  }

  /* End of If: '<S466>/If' */

  /* Sum: '<S521>/Sum1' incorporates:
   *  Constant: '<S521>/Constant'
   *  Product: '<S521>/Product'
   *  Product: '<S521>/Product1'
   *  Sum: '<S521>/Sum'
   *  UnitDelay: '<S521>/Unit Delay'
   */
  rtb_Sum1_oh = (1.0 - rtb_Abs_p) *
    BaseEngineController_LS_DWork.s521_UnitDelay_DSTATE + rtb_Merge_ol *
    rtb_Abs_p;

  /* If: '<S520>/If' incorporates:
   *  Inport: '<S522>/In1'
   *  Inport: '<S523>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S520>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S520>/override_enable'
   */
  if ((OilPres_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S520>/NewValue' incorporates:
     *  ActionPort: '<S522>/Action Port'
     */
    BaseEngineController_LS_B.s520_Merge = (OilPres_new_DataStore());

    /* End of Outputs for SubSystem: '<S520>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S520>/OldValue' incorporates:
     *  ActionPort: '<S523>/Action Port'
     */
    BaseEngineController_LS_B.s520_Merge = rtb_Sum1_oh;

    /* End of Outputs for SubSystem: '<S520>/OldValue' */
  }

  /* End of If: '<S520>/If' */

  /* S-Function Block: <S524>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s524_motohawk_delta_time_DWORK1, NULL);
    rtb_Abs_p = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S524>/Product' incorporates:
   *  MinMax: '<S524>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S524>/motohawk_calibration'
   */
  rtb_Abs_p /= (rtb_Abs_p >= (SensVoltFilterConst_DataStore())) || rtIsNaN
    ((SensVoltFilterConst_DataStore())) ? rtb_Abs_p :
    (SensVoltFilterConst_DataStore());

  /* Logic: '<S467>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S467>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S467>/motohawk_fault_status4'
   */
  rtb_RelationalOperator_ipv = (IsFaultActive(84) || IsFaultActive(85));

  /* Logic: '<S467>/Logical Operator6' */
  rtb_RelationalOperator2_i = !rtb_RelationalOperator_ipv;

  /* Logic: '<S467>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S467>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S467>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_j = (IsFaultSuspected(84) || IsFaultSuspected(85));

  /* S-Function Block: <S404>/motohawk_ain3 Resource: SensVoltSensorPin */
  {
    extern NativeError_S SensVoltSensorPin_AnalogInput_Get(uint16_T *adc,
      uint16_T *status);
    SensVoltSensorPin_AnalogInput_Get
      (&BaseEngineController_LS_B.s404_motohawk_ain3, NULL);
  }

  /* DataTypeConversion: '<S467>/Data Type Conversion' */
  rtb_DataTypeConversion_ii = BaseEngineController_LS_B.s404_motohawk_ain3;

  /* Product: '<S467>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S467>/motohawk_calibration4'
   */
  rtb_Product1_l2 = (real_T)rtb_DataTypeConversion_ii * (SensVoltGain_DataStore());

  /* Sum: '<S467>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S467>/motohawk_calibration5'
   */
  BaseEngineController_LS_B.s467_Sum1 = rtb_Product1_l2 +
    (SensVoltOfst_DataStore());

  /* UnitDelay: '<S467>/Unit Delay1' */
  rtb_UnitDelay1_c = BaseEngineController_LS_DWork.s467_UnitDelay1_DSTATE;

  /* If: '<S467>/If' incorporates:
   *  Logic: '<S467>/Logical Operator5'
   */
  if (rtb_RelationalOperator2_i && rtb_LogicalOperator1_j) {
    /* Outputs for IfAction SubSystem: '<S467>/If Action Subsystem' incorporates:
     *  ActionPort: '<S525>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay1_c, &rtb_Merge_ht);

    /* End of Outputs for SubSystem: '<S467>/If Action Subsystem' */
  } else if (rtb_RelationalOperator_ipv) {
    /* Outputs for IfAction SubSystem: '<S467>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S526>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((SensVoltDfltValue_DataStore()),
      &rtb_Merge_ht);

    /* End of Outputs for SubSystem: '<S467>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S467>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S527>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      (BaseEngineController_LS_B.s467_Sum1, &rtb_Merge_ht);

    /* End of Outputs for SubSystem: '<S467>/If Action Subsystem2' */
  }

  /* End of If: '<S467>/If' */

  /* Sum: '<S529>/Sum1' incorporates:
   *  Constant: '<S529>/Constant'
   *  Product: '<S529>/Product'
   *  Product: '<S529>/Product1'
   *  Sum: '<S529>/Sum'
   *  UnitDelay: '<S529>/Unit Delay'
   */
  rtb_Sum_dn = (1.0 - rtb_Abs_p) *
    BaseEngineController_LS_DWork.s529_UnitDelay_DSTATE + rtb_Merge_ht *
    rtb_Abs_p;

  /* If: '<S528>/If' incorporates:
   *  Inport: '<S530>/In1'
   *  Inport: '<S531>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S528>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S528>/override_enable'
   */
  if ((SensVolt_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S528>/NewValue' incorporates:
     *  ActionPort: '<S530>/Action Port'
     */
    BaseEngineController_LS_B.s528_Merge = (SensVolt_new_DataStore());

    /* End of Outputs for SubSystem: '<S528>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S528>/OldValue' incorporates:
     *  ActionPort: '<S531>/Action Port'
     */
    BaseEngineController_LS_B.s528_Merge = rtb_Sum_dn;

    /* End of Outputs for SubSystem: '<S528>/OldValue' */
  }

  /* End of If: '<S528>/If' */

  /* If: '<S545>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S545>/override_enable'
   */
  if ((Bank1_OxygenConcentration_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S545>/If' */

  /* If: '<S546>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S546>/override_enable'
   */
  if ((Bank2_OxygenConcentration_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S546>/If' */

  /* If: '<S547>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S547>/override_enable'
   */
  if ((Bank2_SystemVolts_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S547>/If' */

  /* If: '<S548>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S548>/override_enable'
   */
  if ((Bank2_HeaterVolts_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S548>/If' */

  /* If: '<S549>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S549>/override_enable'
   */
  if ((Bank2_SensorDetectedStatus_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S549>/If' */

  /* If: '<S550>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S550>/override_enable'
   */
  if ((Bank2_UsingFreeAreCalState_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S550>/If' */

  /* If: '<S551>/If' incorporates:
   *  Inport: '<S592>/In1'
   *  Inport: '<S593>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S551>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S551>/override_enable'
   */
  if ((Bank2_DataValidState_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S551>/NewValue' incorporates:
     *  ActionPort: '<S592>/Action Port'
     */
    rtb_Switch1_n = (Bank2_DataValidState_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S551>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S551>/OldValue' incorporates:
     *  ActionPort: '<S593>/Action Port'
     */
    rtb_Switch1_n = BaseEngineController_LS_B.s540_ReadCANMessage1_o8;

    /* End of Outputs for SubSystem: '<S551>/OldValue' */
  }

  /* End of If: '<S551>/If' */

  /* If: '<S552>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S552>/override_enable'
   */
  if ((Bank2_SensorStatus_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S552>/If' */

  /* If: '<S553>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S553>/override_enable'
   */
  if ((Bank2_SensorFaultState_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S553>/If' */

  /* If: '<S554>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S554>/override_enable'
   */
  if ((Bank1_SystemVolts_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S554>/If' */

  /* If: '<S555>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S555>/override_enable'
   */
  if ((Bank1_HeaterVolts_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S555>/If' */

  /* If: '<S556>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S556>/override_enable'
   */
  if ((Bank1_SensorDetectedStatus_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S556>/If' */

  /* If: '<S557>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S557>/override_enable'
   */
  if ((Bank1_UsingFreeAreCalState_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S557>/If' */

  /* If: '<S558>/If' incorporates:
   *  Inport: '<S606>/In1'
   *  Inport: '<S607>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S558>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S558>/override_enable'
   */
  if ((Bank1_DataValidState_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S558>/NewValue' incorporates:
     *  ActionPort: '<S606>/Action Port'
     */
    rtb_Switch_c = (Bank1_DataValidState_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S558>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S558>/OldValue' incorporates:
     *  ActionPort: '<S607>/Action Port'
     */
    rtb_Switch_c = BaseEngineController_LS_B.s540_ReadCANMessage_o8;

    /* End of Outputs for SubSystem: '<S558>/OldValue' */
  }

  /* End of If: '<S558>/If' */

  /* If: '<S559>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S559>/override_enable'
   */
  if ((Bank1_SensorStatus_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S559>/If' */

  /* If: '<S560>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S560>/override_enable'
   */
  if ((Bank1_SensorFaultState_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S560>/If' */

  /* Outputs for Enabled SubSystem: '<S400>/Triggered Subsystem' incorporates:
   *  EnablePort: '<S401>/Enable'
   */
  if (rtb_RelationalOperator_jv) {
    /* Outputs for Function Call SubSystem: '<S11>/Diagnostics' */

    /* S-Function Block: <S298>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s298_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_nr = ((real_T) delta) * 0.000001;
    }

    /* RelationalOperator: '<S296>/RelOp' incorporates:
     *  Constant: '<S296>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S288>/motohawk_data_read'
     */
    rtb_BelowLoTarget_j = (((uint8_T)EngineState_DataStore()) == 3);

    /* Switch: '<S298>/Switch' incorporates:
     *  Constant: '<S298>/Constant'
     *  Logic: '<S288>/Logical Operator'
     *  RelationalOperator: '<S288>/Relational Operator'
     *  S-Function (motohawk_sfun_calibration): '<S288>/motohawk_calibration'
     *  S-Function (motohawk_sfun_data_read): '<S298>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S298>/motohawk_delta_time'
     *  Sum: '<S298>/Sum'
     */
    if (rtb_BelowLoTarget_j && (BaseEngineController_LS_B.s473_Merge >=
         (ACHighPressureDisable_DataStore()))) {
      rtb_Product1_l2 = rtb_motohawk_delta_time_nr +
        AChighPressureTimer_DataStore();
    } else {
      rtb_Product1_l2 = 0.0;
    }

    /* End of Switch: '<S298>/Switch' */
    /* RelationalOperator: '<S288>/Relational Operator5' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S288>/motohawk_calibration3'
     */
    rtb_RelationalOperator5_o = ((rtb_Product1_l2 >
      (ACHighPressureTime_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S288>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: ACChargeHigh_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(0, rtb_RelationalOperator5_o);
      UpdateFault(0);
    }

    /* S-Function Block: <S297>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s297_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_lw = ((real_T) delta) * 0.000001;
    }

    /* Switch: '<S297>/Switch' incorporates:
     *  Constant: '<S297>/Constant'
     *  Logic: '<S288>/Logical Operator1'
     *  RelationalOperator: '<S288>/Relational Operator1'
     *  S-Function (motohawk_sfun_calibration): '<S288>/motohawk_calibration2'
     *  S-Function (motohawk_sfun_data_read): '<S297>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S297>/motohawk_delta_time'
     *  Sum: '<S297>/Sum'
     */
    if (rtb_BelowLoTarget_j && (BaseEngineController_LS_B.s473_Merge <=
         (ACLowPressureDisable_DataStore())) &&
        BaseEngineController_LS_B.s118_AC) {
      rtb_Sum_cy = rtb_motohawk_delta_time_lw + ACLowPressureTimer_DataStore();
    } else {
      rtb_Sum_cy = 0.0;
    }

    /* End of Switch: '<S297>/Switch' */
    /* Logic: '<S288>/Logical Operator2' incorporates:
     *  RelationalOperator: '<S288>/Relational Operator3'
     *  S-Function (motohawk_sfun_calibration): '<S288>/motohawk_calibration1'
     */
    rtb_LogicalOperator2_m = (((rtb_Sum_cy > (ACLowPressureTime_DataStore())) &&
      BaseEngineController_LS_B.s118_AC));

    /* S-Function (motohawk_sfun_fault_def): '<S288>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: ACChargeLow_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(1, rtb_LogicalOperator2_m);
      UpdateFault(1);
    }

    /* Saturate: '<S297>/Saturation' */
    rtb_Saturation_o = rtb_Sum_cy >= 16000.0 ? 16000.0 : rtb_Sum_cy <= 0.0 ? 0.0
      : rtb_Sum_cy;

    /* S-Function (motohawk_sfun_data_write): '<S297>/motohawk_data_write' */
    /* Write to Data Storage as scalar: ACLowPressureTimer */
    {
      ACLowPressureTimer_DataStore() = rtb_Saturation_o;
    }

    /* Saturate: '<S298>/Saturation' */
    rtb_Saturation_d = rtb_Product1_l2 >= 16000.0 ? 16000.0 : rtb_Product1_l2 <=
      0.0 ? 0.0 : rtb_Product1_l2;

    /* S-Function (motohawk_sfun_data_write): '<S298>/motohawk_data_write' */
    /* Write to Data Storage as scalar: AChighPressureTimer */
    {
      AChighPressureTimer_DataStore() = rtb_Saturation_d;
    }

    /* S-Function Block: <S301>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s301_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_fj = ((real_T) delta) * 0.000001;
    }

    /* RelationalOperator: '<S299>/RelOp' incorporates:
     *  Constant: '<S299>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S289>/motohawk_data_read'
     */
    rtb_BelowLoTarget_j = (((uint8_T)EngineState_DataStore()) == 3);

    /* Gain: '<S289>/kPa to PSI' */
    rtb_Sum_cy = 0.145038 * BaseEngineController_LS_B.s502_Merge;

    /* Switch: '<S301>/Switch' incorporates:
     *  Constant: '<S301>/Constant'
     *  Logic: '<S289>/Logical Operator'
     *  RelationalOperator: '<S289>/Relational Operator'
     *  S-Function (motohawk_sfun_calibration): '<S289>/motohawk_calibration'
     *  S-Function (motohawk_sfun_data_read): '<S301>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S301>/motohawk_delta_time'
     *  Sum: '<S301>/Sum'
     */
    if (rtb_BelowLoTarget_j && (rtb_Sum_cy >= (SoftOverBoostLimit_DataStore())))
    {
      rtb_Product1_l2 = rtb_motohawk_delta_time_fj +
        SoftOverBoostTimer_DataStore();
    } else {
      rtb_Product1_l2 = 0.0;
    }

    /* End of Switch: '<S301>/Switch' */
    /* RelationalOperator: '<S289>/Relational Operator5' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S289>/motohawk_calibration3'
     */
    rtb_RelationalOperator5_f = ((rtb_Product1_l2 > (SoftOverBoostTime_DataStore
                                   ())));

    /* S-Function (motohawk_sfun_fault_def): '<S289>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: SoftOverBoost_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(86, rtb_RelationalOperator5_f);
      UpdateFault(86);
    }

    /* S-Function Block: <S300>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s300_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_i0 = ((real_T) delta) * 0.000001;
    }

    /* Switch: '<S300>/Switch' incorporates:
     *  Constant: '<S300>/Constant'
     *  Logic: '<S289>/Logical Operator1'
     *  RelationalOperator: '<S289>/Relational Operator1'
     *  S-Function (motohawk_sfun_calibration): '<S289>/motohawk_calibration1'
     *  S-Function (motohawk_sfun_data_read): '<S300>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S300>/motohawk_delta_time'
     *  Sum: '<S300>/Sum'
     */
    if (rtb_BelowLoTarget_j && (rtb_Sum_cy >= (HardOverBoostLimit_DataStore())))
    {
      rtb_Sum_cy = rtb_motohawk_delta_time_i0 + HardOverBoostTimer_DataStore();
    } else {
      rtb_Sum_cy = 0.0;
    }

    /* End of Switch: '<S300>/Switch' */
    /* RelationalOperator: '<S289>/Relational Operator3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S289>/motohawk_calibration4'
     */
    rtb_RelationalOperator3_mn = ((rtb_Sum_cy > (HardOverBoostTime_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S289>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: HardOverBoost_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(52, rtb_RelationalOperator3_mn);
      UpdateFault(52);
    }

    /* S-Function Block: <S302>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s302_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_k = ((real_T) delta) * 0.000001;
    }

    /* Switch: '<S302>/Switch' incorporates:
     *  Constant: '<S302>/Constant'
     *  Logic: '<S289>/Logical Operator2'
     *  RelationalOperator: '<S289>/Relational Operator2'
     *  S-Function (motohawk_sfun_calibration): '<S289>/motohawk_calibration2'
     *  S-Function (motohawk_sfun_data_read): '<S302>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S302>/motohawk_delta_time'
     *  Sum: '<S302>/Sum'
     */
    if (rtb_BelowLoTarget_j && (BaseEngineController_LS_B.s118_WASTEGATE >=
         (WastegateLossOfControl_DataStore()))) {
      rtb_motohawk_interpolation_1d3_a = rtb_motohawk_delta_time_k +
        WastegateTimer_DataStore();
    } else {
      rtb_motohawk_interpolation_1d3_a = 0.0;
    }

    /* End of Switch: '<S302>/Switch' */
    /* RelationalOperator: '<S289>/Relational Operator4' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S289>/motohawk_calibration5'
     */
    rtb_RelationalOperator4_f = ((rtb_motohawk_interpolation_1d3_a >
      (WastegateTime_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S289>/motohawk_fault_def3' */

    /* Set Fault Suspected Status: Wastegate_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(97, rtb_RelationalOperator4_f);
      UpdateFault(97);
    }

    /* Saturate: '<S300>/Saturation' */
    rtb_Saturation_nn = rtb_Sum_cy >= 16000.0 ? 16000.0 : rtb_Sum_cy <= 0.0 ?
      0.0 : rtb_Sum_cy;

    /* S-Function (motohawk_sfun_data_write): '<S300>/motohawk_data_write' */
    /* Write to Data Storage as scalar: HardOverBoostTimer */
    {
      HardOverBoostTimer_DataStore() = rtb_Saturation_nn;
    }

    /* Saturate: '<S301>/Saturation' */
    rtb_Saturation_a0 = rtb_Product1_l2 >= 16000.0 ? 16000.0 : rtb_Product1_l2 <=
      0.0 ? 0.0 : rtb_Product1_l2;

    /* S-Function (motohawk_sfun_data_write): '<S301>/motohawk_data_write' */
    /* Write to Data Storage as scalar: SoftOverBoostTimer */
    {
      SoftOverBoostTimer_DataStore() = rtb_Saturation_a0;
    }

    /* Saturate: '<S302>/Saturation' */
    rtb_Saturation_f = rtb_motohawk_interpolation_1d3_a >= 16000.0 ? 16000.0 :
      rtb_motohawk_interpolation_1d3_a <= 0.0 ? 0.0 :
      rtb_motohawk_interpolation_1d3_a;

    /* S-Function (motohawk_sfun_data_write): '<S302>/motohawk_data_write' */
    /* Write to Data Storage as scalar: WastegateTimer */
    {
      WastegateTimer_DataStore() = rtb_Saturation_f;
    }

    /* S-Function Block: <S311>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s311_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_ij = ((real_T) delta) * 0.000001;
    }

    /* Logic: '<S293>/Logical Operator3' incorporates:
     *  Logic: '<S293>/Logical Operator1'
     *  S-Function (motohawk_sfun_fault_status): '<S293>/motohawk_fault_status'
     *  S-Function (motohawk_sfun_fault_status): '<S293>/motohawk_fault_status1'
     *  S-Function (motohawk_sfun_fault_status): '<S293>/motohawk_fault_status2'
     *  S-Function (motohawk_sfun_fault_status): '<S293>/motohawk_fault_status3'
     *  S-Function (motohawk_sfun_fault_status): '<S293>/motohawk_fault_status4'
     *  S-Function (motohawk_sfun_fault_status): '<S293>/motohawk_fault_status5'
     */
    rtb_BelowLoTarget_j = !(IsFaultActive(90) || IsFaultActive(92) ||
      IsFaultActive(91) || IsFaultActive(93) || IsFaultActive(70) ||
      IsFaultActive(71));

    /* RelationalOperator: '<S310>/RelOp' incorporates:
     *  Constant: '<S310>/Constant'
     */
    rtb_RelOp_mp = (BaseEngineController_LS_B.s389_State == 3);

    /* RelationalOperator: '<S293>/Relational Operator3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S293>/motohawk_calibration2'
     */
    rtb_RelationalOperator2_i = (BaseEngineController_LS_B.s374_Switch2 <
      (MAP_IR_TPS_CL_DataStore()));

    /* Switch: '<S311>/Switch' incorporates:
     *  Constant: '<S311>/Constant'
     *  Logic: '<S293>/Logical Operator4'
     *  RelationalOperator: '<S293>/Relational Operator4'
     *  S-Function (motohawk_sfun_calibration): '<S293>/motohawk_calibration4'
     *  S-Function (motohawk_sfun_data_read): '<S311>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S311>/motohawk_delta_time'
     *  Sum: '<S311>/Sum'
     */
    if (rtb_BelowLoTarget_j && rtb_RelOp_mp && rtb_RelationalOperator2_i &&
        (BaseEngineController_LS_B.s502_Merge > (MAP_IR_HI_DataStore()))) {
      rtb_motohawk_interpolation_1d3_a = rtb_motohawk_delta_time_ij +
        MapHiFaultTimer_DataStore();
    } else {
      rtb_motohawk_interpolation_1d3_a = 0.0;
    }

    /* End of Switch: '<S311>/Switch' */

    /* RelationalOperator: '<S293>/Relational Operator5' incorporates:
     *  Constant: '<S293>/Constant'
     */
    rtb_RelationalOperator5_j = ((rtb_motohawk_interpolation_1d3_a > 5.0));

    /* S-Function (motohawk_sfun_fault_def): '<S293>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: MAP_IR_HI */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(74, rtb_RelationalOperator5_j);
      UpdateFault(74);
    }

    /* S-Function Block: <S312>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s312_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_hv = ((real_T) delta) * 0.000001;
    }

    /* RelationalOperator: '<S293>/Relational Operator1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S293>/motohawk_calibration6'
     */
    rtb_RelationalOperator2_i = (BaseEngineController_LS_B.s374_Switch2 >
      (MAP_IR_TPS_OP_DataStore()));

    /* Switch: '<S312>/Switch' incorporates:
     *  Constant: '<S312>/Constant'
     *  Logic: '<S293>/Logical Operator2'
     *  RelationalOperator: '<S293>/Relational Operator2'
     *  S-Function (motohawk_sfun_calibration): '<S293>/motohawk_calibration5'
     *  S-Function (motohawk_sfun_data_read): '<S312>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S312>/motohawk_delta_time'
     *  Sum: '<S312>/Sum'
     */
    if (rtb_BelowLoTarget_j && rtb_RelOp_mp && rtb_RelationalOperator2_i &&
        (BaseEngineController_LS_B.s502_Merge < (MAP_IR_LO_DataStore()))) {
      rtb_Sum_cy = rtb_motohawk_delta_time_hv + MapLoFaultTimer_DataStore();
    } else {
      rtb_Sum_cy = 0.0;
    }

    /* End of Switch: '<S312>/Switch' */

    /* RelationalOperator: '<S293>/Relational Operator6' incorporates:
     *  Constant: '<S293>/Constant1'
     */
    rtb_RelationalOperator6 = ((rtb_Sum_cy > 5.0));

    /* S-Function (motohawk_sfun_fault_def): '<S293>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: MAP_IR_LO */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(75, rtb_RelationalOperator6);
      UpdateFault(75);
    }

    /* S-Function Block: <S313>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s313_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_hc = ((real_T) delta) * 0.000001;
    }

    /* RelationalOperator: '<S293>/Relational Operator7' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S293>/motohawk_calibration8'
     */
    rtb_RelationalOperator2_i = (BaseEngineController_LS_B.s374_Switch2 <
      (MAP_TPS_STUCK_DataStore()));

    /* Sum: '<S293>/Add' */
    rtb_Product1_l2 = BaseEngineController_LS_B.s338_Sum -
      BaseEngineController_LS_B.s502_Merge;

    /* Switch: '<S313>/Switch' incorporates:
     *  Constant: '<S313>/Constant'
     *  Logic: '<S293>/Logical Operator5'
     *  RelationalOperator: '<S293>/Relational Operator8'
     *  S-Function (motohawk_sfun_calibration): '<S293>/motohawk_calibration7'
     *  S-Function (motohawk_sfun_data_read): '<S313>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S313>/motohawk_delta_time'
     *  Sum: '<S313>/Sum'
     */
    if (rtb_BelowLoTarget_j && rtb_RelOp_mp && rtb_RelationalOperator2_i &&
        (rtb_Product1_l2 < (MAP_STUCK_DataStore()))) {
      rtb_Product1_l2 = rtb_motohawk_delta_time_hc +
        MapStickFaultTimer_DataStore();
    } else {
      rtb_Product1_l2 = 0.0;
    }

    /* End of Switch: '<S313>/Switch' */

    /* RelationalOperator: '<S293>/Relational Operator9' incorporates:
     *  Constant: '<S293>/Constant2'
     */
    rtb_RelationalOperator9 = ((rtb_Product1_l2 > 5.0));

    /* S-Function (motohawk_sfun_fault_def): '<S293>/motohawk_fault_def3' */

    /* Set Fault Suspected Status: MAP_STICKING */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(76, rtb_RelationalOperator9);
      UpdateFault(76);
    }

    /* Saturate: '<S311>/Saturation' */
    rtb_Saturation_j = rtb_motohawk_interpolation_1d3_a >= 16000.0 ? 16000.0 :
      rtb_motohawk_interpolation_1d3_a <= 0.0 ? 0.0 :
      rtb_motohawk_interpolation_1d3_a;

    /* S-Function (motohawk_sfun_data_write): '<S311>/motohawk_data_write' */
    /* Write to Data Storage as scalar: MapHiFaultTimer */
    {
      MapHiFaultTimer_DataStore() = rtb_Saturation_j;
    }

    /* Saturate: '<S312>/Saturation' */
    rtb_Saturation_em = rtb_Sum_cy >= 16000.0 ? 16000.0 : rtb_Sum_cy <= 0.0 ?
      0.0 : rtb_Sum_cy;

    /* S-Function (motohawk_sfun_data_write): '<S312>/motohawk_data_write' */
    /* Write to Data Storage as scalar: MapLoFaultTimer */
    {
      MapLoFaultTimer_DataStore() = rtb_Saturation_em;
    }

    /* Saturate: '<S313>/Saturation' */
    rtb_Saturation_i = rtb_Product1_l2 >= 16000.0 ? 16000.0 : rtb_Product1_l2 <=
      0.0 ? 0.0 : rtb_Product1_l2;

    /* S-Function (motohawk_sfun_data_write): '<S313>/motohawk_data_write' */
    /* Write to Data Storage as scalar: MapStickFaultTimer */
    {
      MapStickFaultTimer_DataStore() = rtb_Saturation_i;
    }

    /* RelationalOperator: '<S316>/LT' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S314>/motohawk_calibration'
     */
    rtb_RelOp_mp = (BaseEngineController_LS_B.s403_RPMInst >=
                    (BaseRevLimit_DataStore()));

    /* Sum: '<S314>/Sum2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S314>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S314>/motohawk_calibration1'
     */
    rtb_Product1_l2 = (BaseRevLimit_DataStore()) - (RevLimitHyst_DataStore());

    /* RelationalOperator: '<S316>/LT1' */
    rtb_BelowLoTarget_j = (BaseEngineController_LS_B.s403_RPMInst <=
      rtb_Product1_l2);

    /* CombinatorialLogic: '<S319>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_RelOp_mp != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_j != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_l[0] =
        BaseEngineController_LS_ConstP.pooled728[rowidx];
      rtb_CombinatorialLogic_l[1] =
        BaseEngineController_LS_ConstP.pooled728[rowidx + 4];
    }

    /* Switch: '<S319>/Switch1' incorporates:
     *  UnitDelay: '<S319>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_l[1]) {
      rtb_LogicalOperator2_dx = rtb_CombinatorialLogic_l[0];
    } else {
      rtb_LogicalOperator2_dx =
        BaseEngineController_LS_DWork.s319_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S319>/Switch1' */
    /* Sum: '<S314>/Sum3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S314>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S314>/motohawk_calibration2'
     */
    rtb_motohawk_interpolation_1d3_a = (BaseRevLimit_DataStore()) +
      (MediumRevOffset_DataStore());

    /* RelationalOperator: '<S317>/LT' */
    rtb_RelOp_mp = (BaseEngineController_LS_B.s403_RPMInst >=
                    rtb_motohawk_interpolation_1d3_a);

    /* Sum: '<S314>/Sum1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S314>/motohawk_calibration1'
     */
    rtb_Sum_cy = rtb_motohawk_interpolation_1d3_a - (RevLimitHyst_DataStore());

    /* RelationalOperator: '<S317>/LT1' */
    rtb_BelowLoTarget_j = (BaseEngineController_LS_B.s403_RPMInst <= rtb_Sum_cy);

    /* CombinatorialLogic: '<S320>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_RelOp_mp != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_j != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_l[0] =
        BaseEngineController_LS_ConstP.pooled728[rowidx];
      rtb_CombinatorialLogic_l[1] =
        BaseEngineController_LS_ConstP.pooled728[rowidx + 4];
    }

    /* Switch: '<S320>/Switch1' incorporates:
     *  UnitDelay: '<S320>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_l[1]) {
      rtb_Switch1_mj = rtb_CombinatorialLogic_l[0];
    } else {
      rtb_Switch1_mj = BaseEngineController_LS_DWork.s320_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S320>/Switch1' */

    /* Switch: '<S317>/Switch2' incorporates:
     *  Logic: '<S317>/Logical Operator'
     */
    if (rtb_Switch1_mj) {
      rtb_motohawk_interpolation_1d3_a = rtb_Sum_cy;
    }

    /* End of Switch: '<S317>/Switch2' */

    /* RelationalOperator: '<S314>/Overspeed1' */
    rtb_RelationalOperator2_i = (BaseEngineController_LS_B.s403_RPMInst >
      rtb_motohawk_interpolation_1d3_a);

    /* Logic: '<S294>/Logical Operator' */
    rtb_RelOp_mp = !BaseEngineController_LS_B.s447_Merge;

    /* RelationalOperator: '<S322>/LT' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S315>/motohawk_calibration'
     */
    rtb_BelowLoTarget_j = (BaseEngineController_LS_B.s403_RPMInst >=
      (TwoStepRevLimit_DataStore()));

    /* Sum: '<S315>/Sum2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S315>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S315>/motohawk_calibration1'
     */
    rtb_Product1_ii = (TwoStepRevLimit_DataStore()) -
      (TwoStepRevLimitHyst_DataStore());

    /* RelationalOperator: '<S322>/LT1' */
    rtb_LogicalOperator3_c = (BaseEngineController_LS_B.s403_RPMInst <=
      rtb_Product1_ii);

    /* CombinatorialLogic: '<S325>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_j != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_LogicalOperator3_c != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_l[0] =
        BaseEngineController_LS_ConstP.pooled728[rowidx];
      rtb_CombinatorialLogic_l[1] =
        BaseEngineController_LS_ConstP.pooled728[rowidx + 4];
    }

    /* Switch: '<S325>/Switch1' incorporates:
     *  UnitDelay: '<S325>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_l[1]) {
      rtb_Switch1_l = rtb_CombinatorialLogic_l[0];
    } else {
      rtb_Switch1_l = BaseEngineController_LS_DWork.s325_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S325>/Switch1' */
    /* Sum: '<S315>/Sum3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S315>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S315>/motohawk_calibration2'
     */
    rtb_motohawk_interpolation_1d3_a = (TwoStepRevLimit_DataStore()) +
      (TwoStepMediumRevOffset_DataStore());

    /* RelationalOperator: '<S323>/LT' */
    rtb_LogicalOperator3_c = (BaseEngineController_LS_B.s403_RPMInst >=
      rtb_motohawk_interpolation_1d3_a);

    /* Sum: '<S315>/Sum1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S315>/motohawk_calibration1'
     */
    rtb_Sum_cy = rtb_motohawk_interpolation_1d3_a -
      (TwoStepRevLimitHyst_DataStore());

    /* RelationalOperator: '<S323>/LT1' */
    rtb_BelowLoTarget_j = (BaseEngineController_LS_B.s403_RPMInst <= rtb_Sum_cy);

    /* CombinatorialLogic: '<S326>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_LogicalOperator3_c != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_j != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_l[0] =
        BaseEngineController_LS_ConstP.pooled728[rowidx];
      rtb_CombinatorialLogic_l[1] =
        BaseEngineController_LS_ConstP.pooled728[rowidx + 4];
    }

    /* Switch: '<S326>/Switch1' incorporates:
     *  UnitDelay: '<S326>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_l[1]) {
      rtb_Switch1_o = rtb_CombinatorialLogic_l[0];
    } else {
      rtb_Switch1_o = BaseEngineController_LS_DWork.s326_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S326>/Switch1' */

    /* Switch: '<S323>/Switch2' incorporates:
     *  Logic: '<S323>/Logical Operator'
     */
    if (rtb_Switch1_o) {
      rtb_motohawk_interpolation_1d3_a = rtb_Sum_cy;
    }

    /* End of Switch: '<S323>/Switch2' */

    /* RelationalOperator: '<S315>/Overspeed1' */
    rtb_LogicalOperator1_j = (BaseEngineController_LS_B.s403_RPMInst >
      rtb_motohawk_interpolation_1d3_a);

    /* Switch: '<S294>/Switch' incorporates:
     *  Logic: '<S314>/Logical Operator3'
     *  Logic: '<S314>/Logical Operator4'
     *  Logic: '<S315>/Logical Operator3'
     *  Logic: '<S315>/Logical Operator4'
     *  RelationalOperator: '<S314>/Overspeed'
     *  RelationalOperator: '<S315>/Overspeed'
     */
    if (rtb_RelOp_mp) {
      /* Switch: '<S316>/Switch2' incorporates:
       *  Logic: '<S316>/Logical Operator'
       *  S-Function (motohawk_sfun_calibration): '<S314>/motohawk_calibration'
       */
      if (!rtb_LogicalOperator2_dx) {
        rtb_Product1_l2 = (BaseRevLimit_DataStore());
      }

      /* End of Switch: '<S316>/Switch2' */
      rtb_LogicalOperator3_c = ((BaseEngineController_LS_B.s403_RPMInst >
        rtb_Product1_l2) && (!rtb_RelationalOperator2_i));
    } else {
      /* Switch: '<S322>/Switch2' incorporates:
       *  Logic: '<S322>/Logical Operator'
       *  S-Function (motohawk_sfun_calibration): '<S315>/motohawk_calibration'
       */
      if (!rtb_Switch1_l) {
        rtb_Product1_ii = (TwoStepRevLimit_DataStore());
      }

      /* End of Switch: '<S322>/Switch2' */
      rtb_LogicalOperator3_c = ((BaseEngineController_LS_B.s403_RPMInst >
        rtb_Product1_ii) && (!rtb_LogicalOperator1_j));
    }

    /* End of Switch: '<S294>/Switch' */

    /* S-Function (motohawk_sfun_fault_def): '<S294>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: SoftOverspeed */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(87, rtb_LogicalOperator3_c);
      UpdateFault(87);
    }

    /* Sum: '<S314>/Sum5' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S314>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S314>/motohawk_calibration4'
     */
    rtb_motohawk_interpolation_1d3_a = (BaseRevLimit_DataStore()) +
      (HardRevOffset_DataStore());

    /* RelationalOperator: '<S318>/LT' */
    rtb_LogicalOperator3_c = (BaseEngineController_LS_B.s403_RPMInst >=
      rtb_motohawk_interpolation_1d3_a);

    /* Sum: '<S314>/Sum4' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S314>/motohawk_calibration1'
     */
    rtb_Sum_cy = rtb_motohawk_interpolation_1d3_a - (RevLimitHyst_DataStore());

    /* RelationalOperator: '<S318>/LT1' */
    rtb_BelowLoTarget_j = (BaseEngineController_LS_B.s403_RPMInst <= rtb_Sum_cy);

    /* CombinatorialLogic: '<S321>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_LogicalOperator3_c != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_j != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_l[0] =
        BaseEngineController_LS_ConstP.pooled728[rowidx];
      rtb_CombinatorialLogic_l[1] =
        BaseEngineController_LS_ConstP.pooled728[rowidx + 4];
    }

    /* Switch: '<S321>/Switch1' incorporates:
     *  UnitDelay: '<S321>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_l[1]) {
      rtb_Switch1_l3 = rtb_CombinatorialLogic_l[0];
    } else {
      rtb_Switch1_l3 = BaseEngineController_LS_DWork.s321_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S321>/Switch1' */

    /* Switch: '<S318>/Switch2' incorporates:
     *  Logic: '<S318>/Logical Operator'
     */
    if (rtb_Switch1_l3) {
      rtb_motohawk_interpolation_1d3_a = rtb_Sum_cy;
    }

    /* End of Switch: '<S318>/Switch2' */

    /* RelationalOperator: '<S314>/Overspeed2' */
    rtb_LogicalOperator1_dv = (BaseEngineController_LS_B.s403_RPMInst >
      rtb_motohawk_interpolation_1d3_a);

    /* Sum: '<S315>/Sum5' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S315>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S315>/motohawk_calibration4'
     */
    rtb_motohawk_interpolation_1d3_a = (TwoStepRevLimit_DataStore()) +
      (TwoStepHardRevOffset_DataStore());

    /* RelationalOperator: '<S324>/LT' */
    rtb_LogicalOperator3_c = (BaseEngineController_LS_B.s403_RPMInst >=
      rtb_motohawk_interpolation_1d3_a);

    /* Sum: '<S315>/Sum4' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S315>/motohawk_calibration1'
     */
    rtb_Sum_cy = rtb_motohawk_interpolation_1d3_a -
      (TwoStepRevLimitHyst_DataStore());

    /* RelationalOperator: '<S324>/LT1' */
    rtb_BelowLoTarget_j = (BaseEngineController_LS_B.s403_RPMInst <= rtb_Sum_cy);

    /* CombinatorialLogic: '<S327>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_LogicalOperator3_c != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_j != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_l[0] =
        BaseEngineController_LS_ConstP.pooled728[rowidx];
      rtb_CombinatorialLogic_l[1] =
        BaseEngineController_LS_ConstP.pooled728[rowidx + 4];
    }

    /* Switch: '<S327>/Switch1' incorporates:
     *  UnitDelay: '<S327>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_l[1]) {
      rtb_Switch1_bv = rtb_CombinatorialLogic_l[0];
    } else {
      rtb_Switch1_bv = BaseEngineController_LS_DWork.s327_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S327>/Switch1' */

    /* Switch: '<S324>/Switch2' incorporates:
     *  Logic: '<S324>/Logical Operator'
     */
    if (rtb_Switch1_bv) {
      rtb_motohawk_interpolation_1d3_a = rtb_Sum_cy;
    }

    /* End of Switch: '<S324>/Switch2' */

    /* RelationalOperator: '<S315>/Overspeed2' */
    rtb_RelOp_pu = (BaseEngineController_LS_B.s403_RPMInst >
                    rtb_motohawk_interpolation_1d3_a);

    /* Switch: '<S294>/Switch1' incorporates:
     *  Logic: '<S314>/Logical Operator5'
     *  Logic: '<S314>/Logical Operator6'
     *  Logic: '<S315>/Logical Operator5'
     *  Logic: '<S315>/Logical Operator6'
     */
    if (rtb_RelOp_mp) {
      rtb_LogicalOperator3_c = (rtb_RelationalOperator2_i &&
        (!rtb_LogicalOperator1_dv));
    } else {
      rtb_LogicalOperator3_c = (rtb_LogicalOperator1_j && (!rtb_RelOp_pu));
    }

    /* End of Switch: '<S294>/Switch1' */

    /* S-Function (motohawk_sfun_fault_def): '<S294>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: MediumOverspeed */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(77, rtb_LogicalOperator3_c);
      UpdateFault(77);
    }

    /* Switch: '<S294>/Switch2' */
    if (rtb_RelOp_mp) {
      rtb_RelOp_mp = rtb_LogicalOperator1_dv;
    } else {
      rtb_RelOp_mp = rtb_RelOp_pu;
    }

    /* End of Switch: '<S294>/Switch2' */

    /* S-Function (motohawk_sfun_fault_def): '<S294>/motohawk_fault_def3' */

    /* Set Fault Suspected Status: HardOverspeed */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(53, rtb_RelOp_mp);
      UpdateFault(53);
    }

    /* S-Function Block: <S329>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s329_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_ks = ((real_T) delta) * 0.000001;
    }

    /* Logic: '<S295>/Logical Operator3' incorporates:
     *  Logic: '<S295>/Logical Operator1'
     *  S-Function (motohawk_sfun_fault_status): '<S295>/motohawk_fault_status'
     *  S-Function (motohawk_sfun_fault_status): '<S295>/motohawk_fault_status1'
     */
    rtb_LogicalOperator3_c = !(IsFaultActive(48) || IsFaultActive(49) ||
      BaseEngineController_LS_B.s420_Merge);

    /* Sum: '<S295>/Sum3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S295>/motohawk_calibration2'
     */
    rtb_motohawk_interpolation_1d3_a = BaseEngineController_LS_B.s371_Sum3 -
      (FuelPres_DeltaTarget_DataStore());

    /* Switch: '<S329>/Switch' incorporates:
     *  Constant: '<S329>/Constant'
     *  Gain: '<S295>/invert'
     *  Logic: '<S295>/Logical Operator4'
     *  RelationalOperator: '<S295>/Relational Operator1'
     *  S-Function (motohawk_sfun_calibration): '<S295>/motohawk_calibration3'
     *  S-Function (motohawk_sfun_data_read): '<S329>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S329>/motohawk_delta_time'
     *  Sum: '<S329>/Sum'
     */
    if (rtb_LogicalOperator3_c && (rtb_motohawk_interpolation_1d3_a <
         -(FuelPres_DeltaTolerance_DataStore()))) {
      rtb_Sum_cy = rtb_motohawk_delta_time_ks + FuelPresLow_FaultTimer_DataStore
        ();
    } else {
      rtb_Sum_cy = 0.0;
    }

    /* End of Switch: '<S329>/Switch' */
    /* RelationalOperator: '<S295>/Relational Operator5' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S295>/motohawk_calibration1'
     */
    rtb_RelationalOperator5_a = ((rtb_Sum_cy > (FuelPres_FaultTimer_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S295>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: FuelPresLow_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(47, rtb_RelationalOperator5_a);
      UpdateFault(47);
    }

    /* S-Function Block: <S328>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s328_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_dj = ((real_T) delta) * 0.000001;
    }

    /* Switch: '<S328>/Switch' incorporates:
     *  Constant: '<S328>/Constant'
     *  Logic: '<S295>/Logical Operator2'
     *  RelationalOperator: '<S295>/Relational Operator3'
     *  S-Function (motohawk_sfun_calibration): '<S295>/motohawk_calibration3'
     *  S-Function (motohawk_sfun_data_read): '<S328>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S328>/motohawk_delta_time'
     *  Sum: '<S328>/Sum'
     */
    if (rtb_LogicalOperator3_c && (rtb_motohawk_interpolation_1d3_a >
         (FuelPres_DeltaTolerance_DataStore()))) {
      rtb_motohawk_interpolation_1d3_a = rtb_motohawk_delta_time_dj +
        FuelPresHigh_FaultTimer_DataStore();
    } else {
      rtb_motohawk_interpolation_1d3_a = 0.0;
    }

    /* End of Switch: '<S328>/Switch' */

    /* RelationalOperator: '<S295>/Relational Operator2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S295>/motohawk_calibration1'
     */
    rtb_RelationalOperator2_c4 = ((rtb_motohawk_interpolation_1d3_a >
      (FuelPres_FaultTimer_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S295>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: FuelPresHigh_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(46, rtb_RelationalOperator2_c4);
      UpdateFault(46);
    }

    /* Saturate: '<S328>/Saturation' */
    rtb_Saturation_or = rtb_motohawk_interpolation_1d3_a >= 16000.0 ? 16000.0 :
      rtb_motohawk_interpolation_1d3_a <= 0.0 ? 0.0 :
      rtb_motohawk_interpolation_1d3_a;

    /* S-Function (motohawk_sfun_data_write): '<S328>/motohawk_data_write' */
    /* Write to Data Storage as scalar: FuelPresHigh_FaultTimer */
    {
      FuelPresHigh_FaultTimer_DataStore() = rtb_Saturation_or;
    }

    /* Saturate: '<S329>/Saturation' */
    rtb_Saturation_p = rtb_Sum_cy >= 16000.0 ? 16000.0 : rtb_Sum_cy <= 0.0 ? 0.0
      : rtb_Sum_cy;

    /* S-Function (motohawk_sfun_data_write): '<S329>/motohawk_data_write' */
    /* Write to Data Storage as scalar: FuelPresLow_FaultTimer */
    {
      FuelPresLow_FaultTimer_DataStore() = rtb_Saturation_p;
    }

    /* Logic: '<S290>/Logical Operator3' incorporates:
     *  Logic: '<S290>/Logical Operator1'
     *  S-Function (motohawk_sfun_fault_status): '<S290>/motohawk_fault_status'
     *  S-Function (motohawk_sfun_fault_status): '<S290>/motohawk_fault_status1'
     */
    rtb_LogicalOperator3_c = !(IsFaultActive(20) || IsFaultActive(21));

    /* RelationalOperator: '<S303>/RelOp' incorporates:
     *  Constant: '<S303>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S290>/motohawk_data_read'
     */
    rtb_RelOp_mp = (((uint8_T)EngineState_DataStore()) == 3);

    /* Logic: '<S290>/Logical Operator2' incorporates:
     *  RelationalOperator: '<S290>/Relational Operator3'
     *  S-Function (motohawk_sfun_calibration): '<S290>/motohawk_calibration2'
     */
    rtb_LogicalOperator2_ie = ((rtb_LogicalOperator3_c && rtb_RelOp_mp &&
      (BaseEngineController_LS_B.s622_Merge >= (TempOverheat_Fault_DataStore()))));

    /* S-Function (motohawk_sfun_fault_def): '<S290>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: ECTOverTempFault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(19, rtb_LogicalOperator2_ie);
      UpdateFault(19);
    }

    /* Logic: '<S290>/Logical Operator4' incorporates:
     *  RelationalOperator: '<S290>/Relational Operator2'
     *  S-Function (motohawk_sfun_calibration): '<S290>/motohawk_calibration3'
     */
    rtb_LogicalOperator4_jz = ((rtb_LogicalOperator3_c && rtb_RelOp_mp &&
      (BaseEngineController_LS_B.s622_Merge >=
       (TempOverheatSevere_Fault_DataStore()))));

    /* S-Function (motohawk_sfun_fault_def): '<S290>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: ECTSevereOverTempFault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(22, rtb_LogicalOperator4_jz);
      UpdateFault(22);
    }

    /* S-Function (motohawk_sfun_calibration): '<S290>/motohawk_calibration1' */
    rtb_motohawk_interpolation_1d3_a = (TempOverheat_Warn_DataStore());

    /* Gain: '<S291>/inj//min to inj//hr' incorporates:
     *  DataTypeConversion: '<S291>/Data Type Conversion'
     *  Product: '<S291>/RPM to inj//min'
     *  S-Function (motohawk_sfun_data_read): '<S291>/Number of Combustion Events Per Revolution'
     */
    rtb_Product1_l2 = BaseEngineController_LS_B.s459_Sum1 * (real_T)((uint8_T)
      CombEventsPerRev_DataStore()) * 60.0;

    /* Gain: '<S304>/Gain' */
    rtb_motohawk_interpolation_1d3_a = 0.01 *
      BaseEngineController_LS_B.s481_Merge;

    /* Gain: '<S291>/g to mg' incorporates:
     *  Constant: '<S304>/ '
     *  Constant: '<S304>/ Ethanol density (g//ml)'
     *  Constant: '<S304>/ Gasoline density (g//ml)'
     *  Product: '<S304>/Product1'
     *  Product: '<S304>/Product2'
     *  Sum: '<S304>/Add'
     *  Sum: '<S304>/Add1'
     */
    rtb_Product1_ii = ((1.0 - rtb_motohawk_interpolation_1d3_a) * 0.737 + 0.789 *
                       rtb_motohawk_interpolation_1d3_a) * 1000.0;
    for (i = 0; i < 8; i++) {
      /* Gain: '<S291>/ml//hr to gal//hr' incorporates:
       *  Product: '<S291>/Mass flow to Volume flow mg//hr to ml//hr'
       *  Product: '<S291>/inj//hr to mg//hr'
       */
      u = rtb_Product1_l2 * BaseEngineController_LS_B.s118_FPC[i] /
        rtb_Product1_ii * 0.00026417205263729591;

      /* RelationalOperator: '<S291>/Relational Operator7' incorporates:
       *  Constant: '<S291>/Min fuel flow  for calc'
       */
      rtb_LogicalOperator3_jj[i] = (u > 0.1);

      /* Gain: '<S291>/ml//hr to gal//hr' */
      rtb_Product2_aa[i] = u;
    }

    /* Outputs for Enabled SubSystem: '<S291>/Multiply and Divide, avoiding divde by zero1' incorporates:
     *  EnablePort: '<S306>/Enable'
     */
    if (rtb_LogicalOperator3_jj[0] || rtb_LogicalOperator3_jj[1] ||
        rtb_LogicalOperator3_jj[2] || rtb_LogicalOperator3_jj[3] ||
        rtb_LogicalOperator3_jj[4] || rtb_LogicalOperator3_jj[5] ||
        rtb_LogicalOperator3_jj[6] || rtb_LogicalOperator3_jj[7]) {
      /* Product: '<S306>/charge mass' */
      for (i = 0; i < 8; i++) {
        BaseEngineController_LS_B.s306_chargemass[i] =
          BaseEngineController_LS_B.s436_Merge / rtb_Product2_aa[i];
      }

      /* End of Product: '<S306>/charge mass' */
    }

    /* End of Outputs for SubSystem: '<S291>/Multiply and Divide, avoiding divde by zero1' */

    /* Switch: '<S291>/Default (if no flow)' incorporates:
     *  Constant: '<S291>/Default value'
     */
    for (i = 0; i < 8; i++) {
      if (rtb_LogicalOperator3_jj[i]) {
        BaseEngineController_LS_B.s291_Defaultifnoflow[i] =
          BaseEngineController_LS_B.s306_chargemass[i];
      } else {
        BaseEngineController_LS_B.s291_Defaultifnoflow[i] = 0.0;
      }
    }

    /* End of Switch: '<S291>/Default (if no flow)' */

    /* S-Function Block: <S305>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s305_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_interpolation_1d3_a = ((real_T) delta) * 0.000001;
    }

    /* Product: '<S305>/Product' incorporates:
     *  MinMax: '<S305>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S305>/motohawk_calibration2'
     */
    rtb_motohawk_interpolation_1d3_a /= (rtb_motohawk_interpolation_1d3_a >=
      (FuelEconomy_FilterC_DataStore())) || rtIsNaN
      ((FuelEconomy_FilterC_DataStore())) ? rtb_motohawk_interpolation_1d3_a :
      (FuelEconomy_FilterC_DataStore());

    /* Sum: '<S307>/Sum' incorporates:
     *  Constant: '<S307>/Constant'
     */
    rtb_Product1_l2 = 1.0 - rtb_motohawk_interpolation_1d3_a;

    /* Sum: '<S307>/Sum1' incorporates:
     *  Product: '<S307>/Product'
     *  Product: '<S307>/Product1'
     *  UnitDelay: '<S307>/Unit Delay'
     */
    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_B.s307_Sum1[i] =
        BaseEngineController_LS_B.s291_Defaultifnoflow[i] *
        rtb_motohawk_interpolation_1d3_a + rtb_Product1_l2 *
        BaseEngineController_LS_DWork.s307_UnitDelay_DSTATE[i];
    }

    /* End of Sum: '<S307>/Sum1' */

    /* S-Function Block: <S309>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s309_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_a = ((real_T) delta) * 0.000001;
    }

    /* Logic: '<S292>/Logical Operator3' incorporates:
     *  Logic: '<S292>/Logical Operator1'
     *  S-Function (motohawk_sfun_fault_status): '<S292>/motohawk_fault_status'
     *  S-Function (motohawk_sfun_fault_status): '<S292>/motohawk_fault_status1'
     */
    rtb_RelationalOperator2_i = !(IsFaultActive(82) || IsFaultActive(83));

    /* RelationalOperator: '<S308>/RelOp' incorporates:
     *  Constant: '<S308>/Constant'
     */
    rtb_LogicalOperator1_j = (BaseEngineController_LS_B.s389_State == 3);

    /* S-Function Block: <S292>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_n = TableInterpolation1D_real_T
        (BaseEngineController_LS_B.s360_motohawk_prelookup1, (real_T *)
         ((MinOilPressure_FaultTbl_DataStore())), 9);
      (MinOilPressure_Fault_DataStore()) = rtb_motohawk_interpolation_1d_n;
    }

    /* Switch: '<S309>/Switch' incorporates:
     *  Constant: '<S309>/Constant'
     *  Logic: '<S292>/Logical Operator4'
     *  RelationalOperator: '<S292>/Relational Operator2'
     *  S-Function (motohawk_sfun_data_read): '<S309>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S309>/motohawk_delta_time'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S292>/motohawk_interpolation_1d'
     *  Sum: '<S309>/Sum'
     */
    if (rtb_RelationalOperator2_i && rtb_LogicalOperator1_j &&
        (BaseEngineController_LS_B.s520_Merge < rtb_motohawk_interpolation_1d_n))
    {
      rtb_motohawk_interpolation_1d3_a = rtb_motohawk_delta_time_a +
        OilPresFaultTimer_DataStore();
    } else {
      rtb_motohawk_interpolation_1d3_a = 0.0;
    }

    /* End of Switch: '<S309>/Switch' */
    /* RelationalOperator: '<S292>/Relational Operator5' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S292>/motohawk_calibration1'
     */
    rtb_RelationalOperator5_jx = ((rtb_motohawk_interpolation_1d3_a >
      (NoOilPres_FaultTime_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S292>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: NoOil_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(78, rtb_RelationalOperator5_jx);
      UpdateFault(78);
    }

    /* Saturate: '<S309>/Saturation' */
    rtb_Saturation_kn = rtb_motohawk_interpolation_1d3_a >= 16000.0 ? 16000.0 :
      rtb_motohawk_interpolation_1d3_a <= 0.0 ? 0.0 :
      rtb_motohawk_interpolation_1d3_a;

    /* S-Function (motohawk_sfun_data_write): '<S309>/motohawk_data_write' */
    /* Write to Data Storage as scalar: OilPresFaultTimer */
    {
      OilPresFaultTimer_DataStore() = rtb_Saturation_kn;
    }

    /* S-Function Block: <S292>/motohawk_interpolation_1d3 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d3_a = TableInterpolation1D_real_T
        (BaseEngineController_LS_B.s360_motohawk_prelookup1, (real_T *)
         ((MinOilPressure_WarnTbl_DataStore())), 9);
      (MinOilPressure_Warn_DataStore()) = rtb_motohawk_interpolation_1d3_a;
    }

    /* Update for UnitDelay: '<S319>/Unit Delay' */
    BaseEngineController_LS_DWork.s319_UnitDelay_DSTATE =
      rtb_LogicalOperator2_dx;

    /* Update for UnitDelay: '<S320>/Unit Delay' */
    BaseEngineController_LS_DWork.s320_UnitDelay_DSTATE = rtb_Switch1_mj;

    /* Update for UnitDelay: '<S325>/Unit Delay' */
    BaseEngineController_LS_DWork.s325_UnitDelay_DSTATE = rtb_Switch1_l;

    /* Update for UnitDelay: '<S326>/Unit Delay' */
    BaseEngineController_LS_DWork.s326_UnitDelay_DSTATE = rtb_Switch1_o;

    /* Update for UnitDelay: '<S321>/Unit Delay' */
    BaseEngineController_LS_DWork.s321_UnitDelay_DSTATE = rtb_Switch1_l3;

    /* Update for UnitDelay: '<S327>/Unit Delay' */
    BaseEngineController_LS_DWork.s327_UnitDelay_DSTATE = rtb_Switch1_bv;

    /* Update for UnitDelay: '<S307>/Unit Delay' */
    memcpy((void *)BaseEngineController_LS_DWork.s307_UnitDelay_DSTATE, (void *)
           (&BaseEngineController_LS_B.s307_Sum1[0]), sizeof(real_T) << 3U);

    /* End of Outputs for SubSystem: '<S11>/Diagnostics' */
  }

  /* RelationalOperator: '<S342>/Compare' incorporates:
   *  Constant: '<S342>/Constant'
   */
  rtb_RelationalOperator2_i = (BaseEngineController_LS_B.s389_State == 3);

  /* Logic: '<S337>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_action): '<S337>/motohawk_fault_action1'
   */
  rtb_LogicalOperator1_j = !GetFaultActionStatus(5);

  /* RelationalOperator: '<S337>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S337>/motohawk_calibration2'
   */
  rtb_RelOp_pu = (BaseEngineController_LS_B.s622_Merge >= (VEAdaptTemp_DataStore
                   ()));

  /* RelationalOperator: '<S337>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S337>/motohawk_calibration3'
   */
  rtb_LogicalOperator1_dv = (BaseEngineController_LS_B.s394_Switch >=
    (VEAdaptTime_DataStore()));

  /* Logic: '<S337>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S337>/motohawk_calibration'
   */
  BaseEngineController_LS_B.s337_LogicalOperator = ((rtb_RelationalOperator2_i &&
    rtb_LogicalOperator1_j && BaseEngineController_LS_B.s346_LogicalOperator &&
    rtb_RelOp_pu && rtb_LogicalOperator1_dv && (VEAdaptEnable_DataStore())));

  /* Outputs for Enabled SubSystem: '<S337>/Adapt VolEff Map' incorporates:
   *  EnablePort: '<S340>/Enable'
   */
  if (BaseEngineController_LS_B.s337_LogicalOperator) {
    /* Product: '<S340>/Divide' incorporates:
     *  Sum: '<S340>/Add'
     */
    rtb_Divide_p = (BaseEngineController_LS_B.s427_Merge -
                    BaseEngineController_LS_B.s337_ModelAirMassFlowRate) /
      BaseEngineController_LS_B.s337_ModelAirMassFlowRate;

    /* S-Function Block: <S343>/motohawk_prelookup */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (VE_AdaptErrorIdxArrIn_DataStore()) = rtb_Divide_p;
      (VE_AdaptErrorIdxArrIdx_DataStore()) = TablePrelookup_real_T(rtb_Divide_p,
        (VE_AdaptErrorIdxArrIdxArr_DataStore()), 10,
        (VE_AdaptErrorIdxArrIdx_DataStore()));
      rtb_motohawk_prelookup_jn = (VE_AdaptErrorIdxArrIdx_DataStore());
    }

    /* S-Function Block: <S343>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_kd = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_jn, (real_T *) ((VEAdaptGainTblTbl_DataStore())),
         10);
      (VEAdaptGainTbl_DataStore()) = rtb_motohawk_interpolation_1d_kd;
    }

    /* Product: '<S340>/Divide1' incorporates:
     *  Product: '<S340>/Divide2'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S343>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_prelookup): '<S343>/motohawk_prelookup'
     */
    rtb_Divide1 = rtb_Sum_ol * rtb_Divide_p * rtb_motohawk_interpolation_1d_kd;

    /* S-Function Block: <S340>/motohawk_adapt_table */
    /* Adapt 2-D Table */
    {
      uint32_T _row = ((VEIdxIdx_DataStore())) >> 9;
      uint32_T _row_frac = (((VEIdxIdx_DataStore())) & 0x01FF) >> 7;
      uint32_T _col = ((RPM17Idx_DataStore())) >> 9;
      uint32_T _col_frac = (((RPM17Idx_DataStore())) & 0x01FF) >> 7;
      real_T _new;
      if (_row >= 16) {
        _row = 16;
        _row_frac = 0;
      }

      if (_col >= 16) {
        _col = 16;
        _col_frac = 0;
      }

      if (_row_frac == 3) {
        _row++;
        _row_frac = 0;
      }

      if (_row_frac == 0) {
        if (_col_frac == 0) {
          _new = (VolEffAdaptMap_DataStore())[_row][_col] + rtb_Divide1;
          if (_new > (VEAdaptMax_DataStore()))
            _new = (VEAdaptMax_DataStore());
          if (_new < (VEAdaptMin_DataStore()))
            _new = (VEAdaptMin_DataStore());
          (VolEffAdaptMap_DataStore())[_row][_col] = _new;
        } else if (_col_frac == 3) {
          _new = (VolEffAdaptMap_DataStore())[_row][_col+1] + rtb_Divide1;
          if (_new > (VEAdaptMax_DataStore()))
            _new = (VEAdaptMax_DataStore());
          if (_new < (VEAdaptMin_DataStore()))
            _new = (VEAdaptMin_DataStore());
          (VolEffAdaptMap_DataStore())[_row][_col+1] = _new;
        } else {
          real_T _half = (rtb_Divide1) / 2;
          _new = (VolEffAdaptMap_DataStore())[_row][_col] + _half;
          if (_new > (VEAdaptMax_DataStore()))
            _new = (VEAdaptMax_DataStore());
          if (_new < (VEAdaptMin_DataStore()))
            _new = (VEAdaptMin_DataStore());
          (VolEffAdaptMap_DataStore())[_row][_col] = _new;
          _new = (VolEffAdaptMap_DataStore())[_row][_col+1] + _half;
          if (_new > (VEAdaptMax_DataStore()))
            _new = (VEAdaptMax_DataStore());
          if (_new < (VEAdaptMin_DataStore()))
            _new = (VEAdaptMin_DataStore());
          (VolEffAdaptMap_DataStore())[_row][_col+1] = _new;
        }
      } else {
        if (_col_frac == 3) {
          _col++;
          _col_frac = 0;
        }

        if (_col_frac == 0) {
          real_T _half = (rtb_Divide1) / 2;
          _new = (VolEffAdaptMap_DataStore())[_row][_col] + _half;
          if (_new > (VEAdaptMax_DataStore()))
            _new = (VEAdaptMax_DataStore());
          if (_new < (VEAdaptMin_DataStore()))
            _new = (VEAdaptMin_DataStore());
          (VolEffAdaptMap_DataStore())[_row][_col] = _new;
          _new = (VolEffAdaptMap_DataStore())[_row+1][_col] + _half;
          if (_new > (VEAdaptMax_DataStore()))
            _new = (VEAdaptMax_DataStore());
          if (_new < (VEAdaptMin_DataStore()))
            _new = (VEAdaptMin_DataStore());
          (VolEffAdaptMap_DataStore())[_row+1][_col] = _new;
        } else {
          real_T _quarter = (rtb_Divide1) / 4;
          _new = (VolEffAdaptMap_DataStore())[_row][_col] + _quarter;
          if (_new > (VEAdaptMax_DataStore()))
            _new = (VEAdaptMax_DataStore());
          if (_new < (VEAdaptMin_DataStore()))
            _new = (VEAdaptMin_DataStore());
          (VolEffAdaptMap_DataStore())[_row][_col] = _new;
          _new = (VolEffAdaptMap_DataStore())[_row+1][_col] + _quarter;
          if (_new > (VEAdaptMax_DataStore()))
            _new = (VEAdaptMax_DataStore());
          if (_new < (VEAdaptMin_DataStore()))
            _new = (VEAdaptMin_DataStore());
          (VolEffAdaptMap_DataStore())[_row+1][_col] = _new;
          _new = (VolEffAdaptMap_DataStore())[_row][_col+1] + _quarter;
          if (_new > (VEAdaptMax_DataStore()))
            _new = (VEAdaptMax_DataStore());
          if (_new < (VEAdaptMin_DataStore()))
            _new = (VEAdaptMin_DataStore());
          (VolEffAdaptMap_DataStore())[_row][_col+1] = _new;
          _new = (VolEffAdaptMap_DataStore())[_row+1][_col+1] + _quarter;
          if (_new > (VEAdaptMax_DataStore()))
            _new = (VEAdaptMax_DataStore());
          if (_new < (VEAdaptMin_DataStore()))
            _new = (VEAdaptMin_DataStore());
          (VolEffAdaptMap_DataStore())[_row+1][_col+1] = _new;
        }
      }
    }
  }

  /* End of Outputs for SubSystem: '<S337>/Adapt VolEff Map' */

  /* UnitDelay: '<S347>/Unit Delay1' */
  rtb_Product1_l2 = BaseEngineController_LS_DWork.s347_UnitDelay1_DSTATE;

  /* UnitDelay: '<S347>/Unit Delay3' */
  rtb_Product1_ii = BaseEngineController_LS_DWork.s347_UnitDelay3_DSTATE;

  /* UnitDelay: '<S347>/Unit Delay4' */
  rtb_Sum_cy = BaseEngineController_LS_DWork.s347_UnitDelay4_DSTATE;

  /* UnitDelay: '<S348>/Unit Delay1' */
  rtb_Product4_o = BaseEngineController_LS_DWork.s348_UnitDelay1_DSTATE;

  /* UnitDelay: '<S348>/Unit Delay3' */
  rtb_Switch_k2 = BaseEngineController_LS_DWork.s348_UnitDelay3_DSTATE;

  /* UnitDelay: '<S348>/Unit Delay4' */
  rtb_DesiredLambda_idx = BaseEngineController_LS_DWork.s348_UnitDelay4_DSTATE;

  /* Sum: '<S364>/Sum' */
  rtb_Abs_p = BaseEngineController_LS_B.s662_Merge -
    BaseEngineController_LS_B.s672_Merge;

  /* Abs: '<S364>/Abs' */
  rtb_Abs_p = fabs(rtb_Abs_p);

  /* RelationalOperator: '<S364>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S364>/motohawk_calibration2'
   */
  rtb_RelationalOperator3_h = ((rtb_Abs_p > (APP1_APP2_Max_Deviation_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S364>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: APP_Sensors_Conflict */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(8, rtb_RelationalOperator3_h);
    UpdateFault(8);
  }

  /* S-Function (motohawk_sfun_data_write): '<S370>/motohawk_data_write' */
  /* Write to Data Storage as scalar: EngineState */
  {
    EngineState_DataStore() = BaseEngineController_LS_B.s389_State;
  }

  /* Sum: '<S374>/Sum' */
  rtb_Abs_p = BaseEngineController_LS_B.s682_Merge -
    BaseEngineController_LS_B.s692_Merge;

  /* Abs: '<S374>/Abs' */
  rtb_Abs_p = fabs(rtb_Abs_p);

  /* RelationalOperator: '<S374>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S374>/motohawk_calibration2'
   */
  rtb_RelationalOperator3_or = ((rtb_Abs_p > (TPS1_TPS2_Max_Deviation_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S374>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: TPS_Sensors_Conflict */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(94, rtb_RelationalOperator3_or);
    UpdateFault(94);
  }

  /* Saturate: '<S392>/Saturation' */
  rtb_Saturation_ah = BaseEngineController_LS_B.s392_Sum >= 16000.0 ? 16000.0 :
    BaseEngineController_LS_B.s392_Sum <= 0.0 ? 0.0 :
    BaseEngineController_LS_B.s392_Sum;

  /* S-Function (motohawk_sfun_data_write): '<S392>/motohawk_data_write' */
  /* Write to Data Storage as scalar: TimeSinceKeyOnTimer */
  {
    TimeSinceKeyOnTimer_DataStore() = rtb_Saturation_ah;
  }

  /* Saturate: '<S394>/Saturation' */
  rtb_Saturation_m = BaseEngineController_LS_B.s394_Switch >= 16000.0 ? 16000.0 :
    BaseEngineController_LS_B.s394_Switch <= 0.0 ? 0.0 :
    BaseEngineController_LS_B.s394_Switch;

  /* S-Function (motohawk_sfun_data_write): '<S394>/motohawk_data_write' */
  /* Write to Data Storage as scalar: TimeSinceRunTimer */
  {
    TimeSinceRunTimer_DataStore() = rtb_Saturation_m;
  }

  /* Saturate: '<S396>/Saturation' */
  rtb_Saturation_kf = BaseEngineController_LS_B.s396_Switch >= 16000.0 ? 16000.0
    : BaseEngineController_LS_B.s396_Switch <= 0.0 ? 0.0 :
    BaseEngineController_LS_B.s396_Switch;

  /* S-Function (motohawk_sfun_data_write): '<S396>/motohawk_data_write' */
  /* Write to Data Storage as scalar: TimeSinceStallTimer */
  {
    TimeSinceStallTimer_DataStore() = rtb_Saturation_kf;
  }

  /* Switch: '<S400>/Switch' incorporates:
   *  Constant: '<S400>/Constant2'
   */
  if (rtb_RelationalOperator_jv) {
    rtb_Switch_kj = 0U;
  } else {
    rtb_Switch_kj = rtb_Sum_hh;
  }

  /* End of Switch: '<S400>/Switch' */

  /* Logic: '<S410>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S410>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S410>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S410>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_p5 = ((MPRD_DataStore() &&
    (BaseEngineController_LS_B.s402_Gain > (MAFMax_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S410>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: MAFRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(68, rtb_LogicalOperator2_p5);
    UpdateFault(68);
  }

  /* Logic: '<S410>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S410>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S410>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S410>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_kf = ((MPRD_DataStore() &&
    (BaseEngineController_LS_B.s402_Gain < (MAFMin_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S410>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: MAFRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(69, rtb_LogicalOperator3_kf);
    UpdateFault(69);
  }

  /* Logic: '<S411>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S411>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S411>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S411>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_i = ((MPRD_DataStore() &&
    (BaseEngineController_LS_B.s402_Gain1 > (VSPDMax_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S411>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: VSPDRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(95, rtb_LogicalOperator2_i);
    UpdateFault(95);
  }

  /* Logic: '<S411>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S411>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S411>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S411>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_g = ((MPRD_DataStore() &&
    (BaseEngineController_LS_B.s402_Gain1 < (VSPDMin_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S411>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: VSPDRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(96, rtb_LogicalOperator3_g);
    UpdateFault(96);
  }

  /* Saturate: '<S443>/Saturation' */
  rtb_Saturation_b = rtb_Switch_bn >= 86400.0 ? 86400.0 : rtb_Switch_bn <= 0.0 ?
    0.0 : rtb_Switch_bn;

  /* S-Function (motohawk_sfun_data_write): '<S443>/motohawk_data_write' */
  /* Write to Data Storage as scalar: ScrambleDelay */
  {
    ScrambleDelay_DataStore() = rtb_Saturation_b;
  }

  /* Saturate: '<S448>/Saturation' */
  rtb_Saturation_e = rtb_Switch_m >= 86400.0 ? 86400.0 : rtb_Switch_m <= 0.0 ?
    0.0 : rtb_Switch_m;

  /* S-Function (motohawk_sfun_data_write): '<S448>/motohawk_data_write' */
  /* Write to Data Storage as scalar: TwoStepTimer */
  {
    TwoStepTimer_DataStore() = rtb_Saturation_e;
  }

  /* RelationalOperator: '<S403>/Relational Operator' incorporates:
   *  Constant: '<S403>/Constant'
   *  S-Function (motohawk_sfun_calibration): '<S403>/motohawk_calibration'
   */
  rtb_RelationalOperator_l = ((0 != ((uint16_T)(PseudoRPM_DataStore()))));

  /* S-Function Block: <S403>/motohawk_encoder_pseudo */
  {
    S_EncoderResourceAttributes EncoderAttribsObj;
    EncoderAttribsObj.uValidAttributesMask = USE_ENC_CONDITION;
    if (rtb_RelationalOperator_l) {
      EncoderAttribsObj.u2PseudoRPM = (PseudoRPM_DataStore());
      EncoderAttribsObj.eResourceCond = ENCODER_ENABLED_INTERNAL;
      EncoderAttribsObj.uValidAttributesMask |= USE_ENC_PSEUDO_RPM;
    } else {
      EncoderAttribsObj.eResourceCond = ENCODER_ENABLE_EXTERNAL;
    }

    SetResourceAttributes(RES_ENCODER, &EncoderAttribsObj, BEHAVIOUR_ENCODER);
  }

  /* DataTypeConversion: '<S403>/Data Type Conversion3' incorporates:
   *  Gain: '<S403>/Gain'
   *  S-Function (motohawk_sfun_calibration): '<S403>/motohawk_calibration1'
   */
  u = 16.0 * (EngineToEncoderOffset_DataStore());
  if (rtIsNaN(u) || rtIsInf(u)) {
    u = 0.0;
  } else {
    u = u < 0.0 ? ceil(u) : floor(u);
    u = fmod(u, 65536.0);
  }

  rtb_DataTypeConversion3_dm = (int16_T)(u < 0.0 ? (int16_T)-(int16_T)(uint16_T)
    -u : (int16_T)(uint16_T)u);

  /* End of DataTypeConversion: '<S403>/Data Type Conversion3' */
  /* S-Function Block: <S403>/motohawk_encoder_offset */
  {
    S_EncoderResourceAttributes encoder_attributes;
    encoder_attributes.uValidAttributesMask = USE_ENC_TDC_OFFSET;
    encoder_attributes.s2TDCOffset = rtb_DataTypeConversion3_dm;
    SetResourceAttributes(RES_ENCODER, &encoder_attributes, BEHAVIOUR_ENCODER);
  }

  /* RelationalOperator: '<S455>/RelOp' incorporates:
   *  Constant: '<S455>/Constant'
   */
  rtb_RelationalOperator_ipv = (BaseEngineController_LS_B.s458_Sum > 100U);

  /* S-Function Block: <S403>/motohawk_encoder_fault */
  {
    extern uint8_T motohawk_encoder_fault;
    BaseEngineController_LS_B.s403_motohawk_encoder_fault =
      motohawk_encoder_fault;
  }

  /* Logic: '<S451>/Logical Operator' incorporates:
   *  Constant: '<S457>/Constant'
   *  RelationalOperator: '<S457>/RelOp'
   */
  rtb_LogicalOperator_f0 = ((rtb_RelationalOperator_ipv &&
    (BaseEngineController_LS_B.s403_motohawk_encoder_fault == 1)));

  /* S-Function (motohawk_sfun_fault_def): '<S451>/motohawk_fault_def' */

  /* Set Fault Suspected Status: CrankSyncFault */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(18, rtb_LogicalOperator_f0);
    UpdateFault(18);
  }

  /* Logic: '<S451>/Logical Operator1' incorporates:
   *  Constant: '<S456>/Constant'
   *  RelationalOperator: '<S456>/RelOp'
   */
  rtb_LogicalOperator1_dw = ((rtb_RelationalOperator_ipv &&
    (BaseEngineController_LS_B.s403_motohawk_encoder_fault == 3)));

  /* S-Function (motohawk_sfun_fault_def): '<S451>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: CrankEdgesFault */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(17, rtb_LogicalOperator1_dw);
    UpdateFault(17);
  }

  /* Logic: '<S451>/Logical Operator2' incorporates:
   *  Constant: '<S453>/Constant'
   *  RelationalOperator: '<S453>/RelOp'
   */
  rtb_LogicalOperator2_g = ((rtb_RelationalOperator_ipv &&
    (BaseEngineController_LS_B.s403_motohawk_encoder_fault == 4)));

  /* S-Function (motohawk_sfun_fault_def): '<S451>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: CamEdgesFault */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(15, rtb_LogicalOperator2_g);
    UpdateFault(15);
  }

  /* Logic: '<S451>/Logical Operator3' incorporates:
   *  Constant: '<S454>/Constant'
   *  RelationalOperator: '<S454>/RelOp'
   */
  rtb_LogicalOperator3_n = ((rtb_RelationalOperator_ipv &&
    (BaseEngineController_LS_B.s403_motohawk_encoder_fault == 5)));

  /* S-Function (motohawk_sfun_fault_def): '<S451>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: CamSyncFault */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(16, rtb_LogicalOperator3_n);
    UpdateFault(16);
  }

  /* S-Function Block: <S403>/motohawk_encoder_state */
  {
    extern uint8_T motohawk_encoder_status;
    BaseEngineController_LS_B.s403_motohawk_encoder_state =
      motohawk_encoder_status;
  }

  /* Logic: '<S460>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S460>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S460>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S460>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_kx = ((MPRD_DataStore() && ((real_T)
    rtb_DataTypeConversion_ik > (ACPresInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S460>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: ACPresRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(2, rtb_LogicalOperator2_kx);
    UpdateFault(2);
  }

  /* Logic: '<S460>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S460>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S460>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S460>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_m = ((MPRD_DataStore() && ((real_T)
    rtb_DataTypeConversion_ik < (ACPresInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S460>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: ACPresRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(3, rtb_LogicalOperator3_m);
    UpdateFault(3);
  }

  /* Logic: '<S461>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S461>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S461>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S461>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_js = ((MPRD_DataStore() && (rtb_DataTypeConversion_e >
    (FuelSensInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S461>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: FuelSensRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(50, rtb_LogicalOperator2_js);
    UpdateFault(50);
  }

  /* Logic: '<S461>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S461>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S461>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S461>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_i = ((MPRD_DataStore() && (rtb_DataTypeConversion_e <
    (FuelSensInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S461>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: FuelSensRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(51, rtb_LogicalOperator3_i);
    UpdateFault(51);
  }

  /* Logic: '<S462>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S462>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S462>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S462>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_f4 = ((MPRD_DataStore() && ((real_T)
    rtb_DataTypeConversion_gx > (FuelPresInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S462>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: FuelPresRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(48, rtb_LogicalOperator2_f4);
    UpdateFault(48);
  }

  /* Logic: '<S462>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S462>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S462>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S462>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_ns = ((MPRD_DataStore() && ((real_T)
    rtb_DataTypeConversion_gx < (FuelPresInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S462>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: FuelPresRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(49, rtb_LogicalOperator3_ns);
    UpdateFault(49);
  }

  /* Logic: '<S463>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S463>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S463>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S463>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_fw = ((MPRD_DataStore() &&
    (BaseEngineController_LS_B.s465_Merge > (MAPInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S463>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: MAPRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(70, rtb_LogicalOperator2_fw);
    UpdateFault(70);
  }

  /* Logic: '<S463>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S463>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S463>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S463>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_l = ((MPRD_DataStore() &&
    (BaseEngineController_LS_B.s465_Merge < (MAPInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S463>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: MAPRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(71, rtb_LogicalOperator3_l);
    UpdateFault(71);
  }

  /* Logic: '<S464>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S464>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S464>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S464>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_a = ((MPRD_DataStore() && ((real_T)
    rtb_DataTypeConversion_fq > (MAPTimeInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S464>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: MAPTimeRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(72, rtb_LogicalOperator2_a);
    UpdateFault(72);
  }

  /* Logic: '<S464>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S464>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S464>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S464>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_d = ((MPRD_DataStore() && ((real_T)
    rtb_DataTypeConversion_fq < (MAPTimeInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S464>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: MAPTimeRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(73, rtb_LogicalOperator3_d);
    UpdateFault(73);
  }

  /* Logic: '<S466>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S466>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S466>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S466>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_fm = ((MPRD_DataStore() && (rtb_DataTypeConversion_m0 >
    (OilPresInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S466>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: OilPresRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(82, rtb_LogicalOperator2_fm);
    UpdateFault(82);
  }

  /* Logic: '<S466>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S466>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S466>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S466>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_a = ((MPRD_DataStore() && (rtb_DataTypeConversion_m0 <
    (OilPresInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S466>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: OilPresRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(83, rtb_LogicalOperator3_a);
    UpdateFault(83);
  }

  /* Logic: '<S467>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S467>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S467>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S467>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_gc = ((MPRD_DataStore() && ((real_T)
    rtb_DataTypeConversion_ii > (SensVoltInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S467>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: SensVoltRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(84, rtb_LogicalOperator2_gc);
    UpdateFault(84);
  }

  /* Logic: '<S467>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S467>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S467>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S467>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_e = ((MPRD_DataStore() && ((real_T)
    rtb_DataTypeConversion_ii < (SensVoltInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S467>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: SensVoltRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(85, rtb_LogicalOperator3_e);
    UpdateFault(85);
  }

  /* Logic: '<S468>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S468>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S468>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S468>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_b = ((MPRD_DataStore() && (rtb_DataTypeConversion_c >
    (SysVoltInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S468>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: SysVoltRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(88, rtb_LogicalOperator2_b);
    UpdateFault(88);
  }

  /* Logic: '<S468>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S468>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S468>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S468>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_gd = ((MPRD_DataStore() && (rtb_DataTypeConversion_c <
    (SysVoltInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S468>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: SysVoltRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(89, rtb_LogicalOperator3_gd);
    UpdateFault(89);
  }

  /* RelationalOperator: '<S540>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S540>/motohawk_calibration1'
   */
  rtb_RelationalOperator_ipv = ((real_T)
    BaseEngineController_LS_B.s540_ReadCANMessage1_o1 >=
    (Lambda_2_Timeout_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S540>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: Lambda_2_Timeout */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(67, rtb_RelationalOperator_ipv);
    UpdateFault(67);
  }

  /* RelationalOperator: '<S540>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S540>/motohawk_calibration'
   */
  rtb_RelationalOperator_ipv = ((real_T)
    BaseEngineController_LS_B.s540_ReadCANMessage_o1 >=
    (Lambda_1_Timeout_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S540>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: Lambda_1_Timeout */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(65, rtb_RelationalOperator_ipv);
    UpdateFault(65);
  }

  /* Logic: '<S540>/Logical Operator' */
  rtb_LogicalOperator_o = !(rtb_Switch_c != 0.0);

  /* S-Function (motohawk_sfun_fault_def): '<S540>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: Lambda_1_NotReady */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(64, rtb_LogicalOperator_o);
    UpdateFault(64);
  }

  /* Logic: '<S540>/Logical Operator1' */
  rtb_LogicalOperator1_h = !(rtb_Switch1_n != 0.0);

  /* S-Function (motohawk_sfun_fault_def): '<S540>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: Lambda_2_NotReady */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(66, rtb_LogicalOperator1_h);
    UpdateFault(66);
  }

  /* Logic: '<S542>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S542>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S542>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S542>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_p4 = ((MPRD_DataStore() &&
    (BaseEngineController_LS_B.s540_MathFunction >
     (Bank1_EquivRatioInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S542>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: Bank1_EquivRatioRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(9, rtb_LogicalOperator2_p4);
    UpdateFault(9);
  }

  /* Logic: '<S542>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S542>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S542>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S542>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_p = ((MPRD_DataStore() &&
    (BaseEngineController_LS_B.s540_MathFunction <
     (Bank1_EquivRatioInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S542>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: Bank1_EquivRatioRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(10, rtb_LogicalOperator3_p);
    UpdateFault(10);
  }

  /* Logic: '<S543>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S543>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S543>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S543>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_do = ((MPRD_DataStore() &&
    (BaseEngineController_LS_B.s540_MathFunction1 >
     (Bank2_EquivRatioInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S543>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: Bank2_EquivRatioRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(11, rtb_LogicalOperator2_do);
    UpdateFault(11);
  }

  /* Logic: '<S543>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S543>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S543>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S543>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_ly = ((MPRD_DataStore() &&
    (BaseEngineController_LS_B.s540_MathFunction1 <
     (Bank2_EquivRatioInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S543>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: Bank2_EquivRatioRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(12, rtb_LogicalOperator3_ly);
    UpdateFault(12);
  }

  /* Logic: '<S654>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S654>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S654>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S654>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_ob = ((MPRD_DataStore() && (rtb_DataTypeConversion_hd >
    (APP1Max_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S654>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: APP1RangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(4, rtb_LogicalOperator2_ob);
    UpdateFault(4);
  }

  /* Logic: '<S654>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S654>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S654>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S654>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_in = ((MPRD_DataStore() && (rtb_DataTypeConversion_hd <
    (APP1Min_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S654>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: APP1RangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(5, rtb_LogicalOperator3_in);
    UpdateFault(5);
  }

  /* Logic: '<S655>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S655>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S655>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S655>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_il = ((MPRD_DataStore() && (rtb_DataTypeConversion_f >
    (APP2Max_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S655>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: APP2RangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(6, rtb_LogicalOperator2_il);
    UpdateFault(6);
  }

  /* Logic: '<S655>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S655>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S655>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S655>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_dk = ((MPRD_DataStore() && (rtb_DataTypeConversion_f <
    (APP2Min_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S655>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: APP2RangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(7, rtb_LogicalOperator3_dk);
    UpdateFault(7);
  }

  /* Logic: '<S656>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S656>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S656>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S656>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_bi = ((MPRD_DataStore() && (rtb_DataTypeConversion_n >
    (TPS1Max_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S656>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: TPS1RangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(90, rtb_LogicalOperator2_bi);
    UpdateFault(90);
  }

  /* Logic: '<S656>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S656>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S656>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S656>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_bk = ((MPRD_DataStore() && (rtb_DataTypeConversion_n <
    (TPS1Min_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S656>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: TPS1RangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(91, rtb_LogicalOperator3_bk);
    UpdateFault(91);
  }

  /* Logic: '<S657>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S657>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S657>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S657>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_kj = ((MPRD_DataStore() && (rtb_DataTypeConversion_fv >
    (TPS2Max_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S657>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: TPS2RangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(92, rtb_LogicalOperator2_kj);
    UpdateFault(92);
  }

  /* Logic: '<S657>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S657>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S657>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S657>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_nb = ((MPRD_DataStore() && (rtb_DataTypeConversion_fv <
    (TPS2Min_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S657>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: TPS2RangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(93, rtb_LogicalOperator3_nb);
    UpdateFault(93);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S698>/motohawk_dout' */

  /* S-Function Block: DOut7896p0001 */
  {
    DOut7896p0001_DiscreteOutput_Set
      (BaseEngineController_LS_B.s706_LogicalOperator);
  }

  /* Update for UnitDelay: '<S370>/Unit Delay' */
  BaseEngineController_LS_DWork.s370_UnitDelay_DSTATE =
    BaseEngineController_LS_B.s389_State;

  /* Update for UnitDelay: '<S460>/Unit Delay1' */
  BaseEngineController_LS_DWork.s460_UnitDelay1_DSTATE = rtb_Merge_b;

  /* Update for UnitDelay: '<S474>/Unit Delay' */
  BaseEngineController_LS_DWork.s474_UnitDelay_DSTATE = rtb_Sum1_li;

  /* Update for UnitDelay: '<S459>/Unit Delay' */
  BaseEngineController_LS_DWork.s459_UnitDelay_DSTATE =
    BaseEngineController_LS_B.s459_Sum1;

  /* Update for UnitDelay: '<S654>/Unit Delay' incorporates:
   *  MinMax: '<S663>/MinMax1'
   */
  BaseEngineController_LS_DWork.s654_UnitDelay_DSTATE = minV;

  /* Update for UnitDelay: '<S665>/Unit Delay' */
  BaseEngineController_LS_DWork.s665_UnitDelay_DSTATE = rtb_Sum1_m;

  /* Update for UnitDelay: '<S655>/Unit Delay' incorporates:
   *  MinMax: '<S673>/MinMax1'
   */
  BaseEngineController_LS_DWork.s655_UnitDelay_DSTATE = minV_0;

  /* Update for UnitDelay: '<S675>/Unit Delay' */
  BaseEngineController_LS_DWork.s675_UnitDelay_DSTATE = rtb_Sum1_nb;

  /* Update for UnitDelay: '<S656>/Unit Delay' incorporates:
   *  MinMax: '<S683>/MinMax1'
   */
  BaseEngineController_LS_DWork.s656_UnitDelay_DSTATE = minV_1;

  /* Update for UnitDelay: '<S685>/Unit Delay' */
  BaseEngineController_LS_DWork.s685_UnitDelay_DSTATE = rtb_Sum1_hw;

  /* Update for UnitDelay: '<S657>/Unit Delay' incorporates:
   *  MinMax: '<S693>/MinMax1'
   */
  BaseEngineController_LS_DWork.s657_UnitDelay_DSTATE = minV_2;

  /* Update for UnitDelay: '<S695>/Unit Delay' */
  BaseEngineController_LS_DWork.s695_UnitDelay_DSTATE = rtb_Sum1_lp;

  /* Update for UnitDelay: '<S486>/Unit Delay' */
  BaseEngineController_LS_DWork.s486_UnitDelay_DSTATE = rtb_Sum2_gr;

  /* Update for UnitDelay: '<S461>/Unit Delay1' */
  BaseEngineController_LS_DWork.s461_UnitDelay1_DSTATE = rtb_Merge_i;

  /* Update for UnitDelay: '<S485>/Unit Delay' */
  BaseEngineController_LS_DWork.s485_UnitDelay_DSTATE = rtb_Sum1_mz;

  /* Update for UnitDelay: '<S483>/Unit Delay' */
  BaseEngineController_LS_DWork.s483_UnitDelay_DSTATE = rtb_Merge_i;

  /* Update for UnitDelay: '<S483>/Unit Delay1' */
  BaseEngineController_LS_DWork.s483_UnitDelay1_DSTATE = rtb_UnitDelay_n;

  /* Update for UnitDelay: '<S483>/Unit Delay2' */
  BaseEngineController_LS_DWork.s483_UnitDelay2_DSTATE = rtb_UnitDelay1_h;

  /* Update for UnitDelay: '<S372>/Unit Delay' */
  BaseEngineController_LS_DWork.s372_UnitDelay_DSTATE =
    BaseEngineController_LS_B.s540_Gain;

  /* Update for UnitDelay: '<S543>/Unit Delay1' */
  BaseEngineController_LS_DWork.s543_UnitDelay1_DSTATE = rtb_Merge_j;

  /* Update for UnitDelay: '<S575>/Unit Delay' */
  BaseEngineController_LS_DWork.s575_UnitDelay_DSTATE = rtb_Sum1_o;

  /* Update for UnitDelay: '<S542>/Unit Delay1' */
  BaseEngineController_LS_DWork.s542_UnitDelay1_DSTATE = rtb_Merge_hw;

  /* Update for UnitDelay: '<S567>/Unit Delay' */
  BaseEngineController_LS_DWork.s567_UnitDelay_DSTATE = rtb_Sum1_c;

  /* Update for UnitDelay: '<S468>/Unit Delay1' */
  BaseEngineController_LS_DWork.s468_UnitDelay1_DSTATE = rtb_Merge_f;

  /* Update for UnitDelay: '<S537>/Unit Delay' */
  BaseEngineController_LS_DWork.s537_UnitDelay_DSTATE = rtb_Sum1_nl;

  /* Update for UnitDelay: '<S463>/Unit Delay1' */
  BaseEngineController_LS_DWork.s463_UnitDelay1_DSTATE = rtb_Merge_in;

  /* Update for UnitDelay: '<S503>/Unit Delay' */
  BaseEngineController_LS_DWork.s503_UnitDelay_DSTATE = rtb_Sum1_d4;

  /* Update for UnitDelay: '<S411>/Unit Delay' */
  BaseEngineController_LS_DWork.s411_UnitDelay_DSTATE = rtb_Merge_if;

  /* Update for UnitDelay: '<S438>/Unit Delay' */
  BaseEngineController_LS_DWork.s438_UnitDelay_DSTATE = rtb_Sum1_a;

  /* Update for UnitDelay: '<S464>/Unit Delay1' */
  BaseEngineController_LS_DWork.s464_UnitDelay1_DSTATE = rtb_Merge_jq;

  /* Update for UnitDelay: '<S338>/Unit Delay' */
  BaseEngineController_LS_DWork.s338_UnitDelay_DSTATE = rtb_Merge_b3;

  /* Update for UnitDelay: '<S410>/Unit Delay' */
  BaseEngineController_LS_DWork.s410_UnitDelay_DSTATE = rtb_Merge_dv;

  /* Update for UnitDelay: '<S429>/Unit Delay' */
  BaseEngineController_LS_DWork.s429_UnitDelay_DSTATE = rtb_Sum1_fm;

  /* Update for UnitDelay: '<S347>/Unit Delay2' */
  BaseEngineController_LS_DWork.s347_UnitDelay2_DSTATE = rtb_Product1_l2;

  /* Update for UnitDelay: '<S350>/Unit Delay' */
  BaseEngineController_LS_DWork.s350_UnitDelay_DSTATE =
    BaseEngineController_LS_B.s350_Sum1;

  /* Update for UnitDelay: '<S348>/Unit Delay2' */
  BaseEngineController_LS_DWork.s348_UnitDelay2_DSTATE = rtb_Product4_o;

  /* Update for UnitDelay: '<S353>/Unit Delay' */
  BaseEngineController_LS_DWork.s353_UnitDelay_DSTATE =
    BaseEngineController_LS_B.s353_Sum1;

  /* Update for UnitDelay: '<S386>/Unit Delay' */
  BaseEngineController_LS_DWork.s386_UnitDelay_DSTATE =
    BaseEngineController_LS_B.s459_Sum1;

  /* Update for UnitDelay: '<S388>/Unit Delay' */
  BaseEngineController_LS_DWork.s388_UnitDelay_DSTATE =
    BaseEngineController_LS_B.s388_Sum1;

  /* Update for UnitDelay: '<S511>/Unit Delay' */
  BaseEngineController_LS_DWork.s511_UnitDelay_DSTATE = rtb_Sum1_mzy;

  /* Update for Enabled SubSystem: '<S15>/Run' incorporates:
   *  Update for EnablePort: '<S119>/Enable'
   */
  if (BaseEngineController_LS_DWork.s15_Run_MODE) {
    /* Update for UnitDelay: '<S146>/Unit Delay' */
    BaseEngineController_LS_DWork.s146_UnitDelay_DSTATE =
      BaseEngineController_LS_B.s146_Switch1;

    /* Update for UnitDelay: '<S145>/Unit Delay' */
    BaseEngineController_LS_DWork.s145_UnitDelay_DSTATE =
      BaseEngineController_LS_B.s145_Switch1;

    /* Update for UnitDelay: '<S143>/Unit Delay' */
    BaseEngineController_LS_DWork.s143_UnitDelay_DSTATE = rtb_Switch1_n1;

    /* Update for UnitDelay: '<S144>/Unit Delay' */
    BaseEngineController_LS_DWork.s144_UnitDelay_DSTATE = rtb_Switch1_k;

    /* Update for UnitDelay: '<S171>/Unit Delay' */
    BaseEngineController_LS_DWork.s171_UnitDelay_DSTATE =
      BaseEngineController_LS_B.s171_Switch1;

    /* Update for UnitDelay: '<S130>/Unit Delay' */
    BaseEngineController_LS_DWork.s130_UnitDelay_DSTATE =
      BaseEngineController_LS_B.s165_Switch1;

    /* Update for UnitDelay: '<S165>/Unit Delay' */
    BaseEngineController_LS_DWork.s165_UnitDelay_DSTATE = rtb_MinMax1_d;

    /* Update for UnitDelay: '<S155>/Unit Delay' */
    BaseEngineController_LS_DWork.s155_UnitDelay_DSTATE = rtb_Sum2_o;

    /* Update for UnitDelay: '<S164>/Unit Delay' */
    BaseEngineController_LS_DWork.s164_UnitDelay_DSTATE = rtb_Product4_k;

    /* Update for UnitDelay: '<S176>/Unit Delay' */
    BaseEngineController_LS_DWork.s176_UnitDelay_DSTATE =
      BaseEngineController_LS_B.s176_Switch1;

    /* Update for UnitDelay: '<S177>/Unit Delay' */
    BaseEngineController_LS_DWork.s177_UnitDelay_DSTATE =
      BaseEngineController_LS_B.s177_Switch1;

    /* Update for UnitDelay: '<S178>/Unit Delay' */
    BaseEngineController_LS_DWork.s178_UnitDelay_DSTATE =
      BaseEngineController_LS_B.s178_Switch1;
  }

  /* End of Update for SubSystem: '<S15>/Run' */

  /* Update for S-Function (motohawk_sfun_dout): '<S700>/motohawk_dout' */

  /* S-Function Block: DOut8152p0001 */
  {
    DOut8152p0001_DiscreteOutput_Set
      (BaseEngineController_LS_B.s738_LogicalOperator);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S700>/motohawk_dout1' */

  /* S-Function Block: DOut8153p0001 */
  {
    DOut8153p0001_DiscreteOutput_Set
      (BaseEngineController_LS_B.s739_LogicalOperator);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S701>/motohawk_dout' */

  /* S-Function Block: DOut8161p0001 */
  {
    DOut8161p0001_DiscreteOutput_Set
      (BaseEngineController_LS_B.s746_LogicalOperator);
  }

  /* Update for S-Function (motohawk_sfun_pwm): '<S702>/motohawk_pwm1' */

  /* S-Function Block: ETCPin_PWMOutput */
  ETCPin_PWMOutput_PWMOutput_Set(rtb_DataTypeConversion3_j,
    rtb_DataTypeConversion4_m, 0, 1);

  /* Update for S-Function (motohawk_sfun_pwm): '<S703>/motohawk_pwm' */

  /* S-Function Block: IAC_PPin_PWMOutput */
  IAC_PPin_PWMOutput_PWMOutput_Set(rtb_DataTypeConversion2_l,
    rtb_DataTypeConversion3_p, 0, 1);

  /* Update for S-Function (motohawk_sfun_pwm): '<S703>/motohawk_pwm1' */

  /* S-Function Block: IAC_SPin_PWMOutput */
  IAC_SPin_PWMOutput_PWMOutput_Set(rtb_DataTypeConversion2_i,
    rtb_DataTypeConversion3_d, 0, 1);

  /* Update for UnitDelay: '<S72>/Unit Delay' */
  BaseEngineController_LS_DWork.s72_UnitDelay_DSTATE = rtb_DesiredLambda_idx_0;

  /* Update for UnitDelay: '<S71>/Unit Delay' */
  BaseEngineController_LS_DWork.s71_UnitDelay_DSTATE = rtb_DesiredLambda_idx_1;

  /* Update for UnitDelay: '<S69>/Unit Delay' */
  BaseEngineController_LS_DWork.s69_UnitDelay_DSTATE = rtb_Merge_ie;

  /* Update for UnitDelay: '<S68>/Unit Delay' */
  BaseEngineController_LS_DWork.s68_UnitDelay_DSTATE = rtb_Merge_ho;

  /* Update for UnitDelay: '<S67>/Unit Delay' */
  BaseEngineController_LS_DWork.s67_UnitDelay_DSTATE = rtb_Merge_ab;

  /* Update for UnitDelay: '<S66>/Unit Delay' */
  BaseEngineController_LS_DWork.s66_UnitDelay_DSTATE = rtb_Merge_gg;

  /* Update for UnitDelay: '<S65>/Unit Delay' */
  BaseEngineController_LS_DWork.s65_UnitDelay_DSTATE = rtb_Merge_db;

  /* Update for UnitDelay: '<S64>/Unit Delay' */
  BaseEngineController_LS_DWork.s64_UnitDelay_DSTATE = rtb_Merge_fp;

  /* Update for UnitDelay: '<S70>/Unit Delay' */
  memcpy((void *)BaseEngineController_LS_DWork.s70_UnitDelay_DSTATE, (void *)
         &rtb_Merge_bv[0], sizeof(real_T) << 3U);

  /* Update for UnitDelay: '<S462>/Unit Delay1' */
  BaseEngineController_LS_DWork.s462_UnitDelay1_DSTATE = rtb_Merge_b3f;

  /* Update for UnitDelay: '<S495>/Unit Delay' */
  BaseEngineController_LS_DWork.s495_UnitDelay_DSTATE = rtb_Sum1_cs;

  /* Update for S-Function (motohawk_sfun_pwm): '<S705>/motohawk_pwm' */

  /* S-Function Block: WASTEGATE_PWMOutput */
  WASTEGATE_PWMOutput_PWMOutput_Set(rtb_DataTypeConversion2_p,
    rtb_DataTypeConversion3_e, 0, 1);

  /* Update for UnitDelay: '<S400>/Unit Delay' */
  BaseEngineController_LS_DWork.s400_UnitDelay_DSTATE = rtb_Switch_kj;

  /* Update for UnitDelay: '<S372>/Unit Delay1' */
  BaseEngineController_LS_DWork.s372_UnitDelay1_DSTATE =
    BaseEngineController_LS_B.s540_Gain;

  /* Update for UnitDelay: '<S466>/Unit Delay1' */
  BaseEngineController_LS_DWork.s466_UnitDelay1_DSTATE = rtb_Merge_ol;

  /* Update for UnitDelay: '<S521>/Unit Delay' */
  BaseEngineController_LS_DWork.s521_UnitDelay_DSTATE = rtb_Sum1_oh;

  /* Update for UnitDelay: '<S467>/Unit Delay1' */
  BaseEngineController_LS_DWork.s467_UnitDelay1_DSTATE = rtb_Merge_ht;

  /* Update for UnitDelay: '<S529>/Unit Delay' */
  BaseEngineController_LS_DWork.s529_UnitDelay_DSTATE = rtb_Sum_dn;

  /* Update for UnitDelay: '<S347>/Unit Delay1' */
  BaseEngineController_LS_DWork.s347_UnitDelay1_DSTATE = rtb_Product1_ii;

  /* Update for UnitDelay: '<S347>/Unit Delay3' */
  BaseEngineController_LS_DWork.s347_UnitDelay3_DSTATE = rtb_Sum_cy;

  /* Update for UnitDelay: '<S347>/Unit Delay4' */
  BaseEngineController_LS_DWork.s347_UnitDelay4_DSTATE =
    BaseEngineController_LS_B.s459_Sum1;

  /* Update for UnitDelay: '<S348>/Unit Delay1' */
  BaseEngineController_LS_DWork.s348_UnitDelay1_DSTATE = rtb_Switch_k2;

  /* Update for UnitDelay: '<S348>/Unit Delay3' */
  BaseEngineController_LS_DWork.s348_UnitDelay3_DSTATE = rtb_DesiredLambda_idx;

  /* Update for UnitDelay: '<S348>/Unit Delay4' */
  BaseEngineController_LS_DWork.s348_UnitDelay4_DSTATE =
    BaseEngineController_LS_B.s502_Merge;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
