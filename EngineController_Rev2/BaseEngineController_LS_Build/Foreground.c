/*
 * File: Foreground.c
 *
 * Code generated for Simulink model 'BaseEngineController_LS'.
 *
 * Model version                  : 1.2098
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Sat Nov 12 20:07:34 2022
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

/* Named constants for Stateflow: '<S311>/Ice Break' */
#define BaseEngineController_LS_IN_Init (1U)
#define BaseEngineController_LS_IN_Open (2U)
#define BaseEngineController_LS_IN_Wait (3U)

/* Named constants for Stateflow: '<S357>/Baro Stall State Delay' */
#define BaseEngineController_LS_IN_CrankRun (1U)
#define BaseEngineController_LS_IN_Stall (2U)
#define BaseEngineController_LS_IN_StallDelay (3U)

/* Named constants for Stateflow: '<S407>/Engine State Machine' */
#define BaseEngineController_LS_IN_Crank (1U)
#define BaseEngineController_LS_IN_Run (2U)
#define BaseEngineController_LS_IN_Stall_l (3U)

/*
 * Initial conditions for enable system:
 *    '<S364>/Collect Average'
 *    '<S403>/Collect Average'
 *    '<S404>/Collect Average'
 */
void BaseEngineController_LS_CollectAverage_Init
  (rtDW_CollectAverage_BaseEngineController_LS *localDW)
{
  /* InitializeConditions for UnitDelay: '<S368>/Unit Delay1' */
  localDW->s368_UnitDelay1_DSTATE = 0.0;
}

/*
 * Disable for enable system:
 *    '<S364>/Collect Average'
 *    '<S403>/Collect Average'
 *    '<S404>/Collect Average'
 */
void BaseEngineController_LS_CollectAverage_Disable
  (rtDW_CollectAverage_BaseEngineController_LS *localDW)
{
  localDW->s364_CollectAverage_MODE = FALSE;
}

/*
 * Start for enable system:
 *    '<S364>/Collect Average'
 *    '<S403>/Collect Average'
 *    '<S404>/Collect Average'
 */
void BaseEngineController_LS_CollectAverage_Start
  (rtDW_CollectAverage_BaseEngineController_LS *localDW)
{
  BaseEngineController_LS_CollectAverage_Init(localDW);
}

/*
 * Output and update for enable system:
 *    '<S364>/Collect Average'
 *    '<S403>/Collect Average'
 *    '<S404>/Collect Average'
 */
void BaseEngineController_LS_CollectAverage(boolean_T rtu_0, int8_T rtu_Count,
  real_T rtu_Signal, rtB_CollectAverage_BaseEngineController_LS *localB,
  rtDW_CollectAverage_BaseEngineController_LS *localDW)
{
  real_T rtb_Sum1_b4g;

  /* Outputs for Enabled SubSystem: '<S364>/Collect Average' incorporates:
   *  EnablePort: '<S368>/Enable'
   */
  if (rtu_0) {
    if (!localDW->s364_CollectAverage_MODE) {
      BaseEngineController_LS_CollectAverage_Init(localDW);
      localDW->s364_CollectAverage_MODE = TRUE;
    }

    /* Sum: '<S368>/Sum1' incorporates:
     *  UnitDelay: '<S368>/Unit Delay1'
     */
    rtb_Sum1_b4g = rtu_Signal + localDW->s368_UnitDelay1_DSTATE;

    /* Product: '<S368>/Product' incorporates:
     *  DataTypeConversion: '<S368>/Data Type Conversion'
     */
    localB->s368_Product = 1.0 / (real_T)rtu_Count * rtb_Sum1_b4g;

    /* Update for UnitDelay: '<S368>/Unit Delay1' */
    localDW->s368_UnitDelay1_DSTATE = rtb_Sum1_b4g;
  } else {
    if (localDW->s364_CollectAverage_MODE) {
      BaseEngineController_LS_CollectAverage_Disable(localDW);
    }
  }

  /* End of Outputs for SubSystem: '<S364>/Collect Average' */
}

/*
 * Start for enable system:
 *    '<S402>/PassThrough1'
 *    '<S402>/PassThrough2'
 */
void BaseEngineController_LS_PassThrough1_Start(real_T *rty_Out1)
{
  /* VirtualOutportStart for Outport: '<S418>/Out1' */
  (*rty_Out1) = 0.005;
}

/*
 * Output and update for enable system:
 *    '<S402>/PassThrough1'
 *    '<S402>/PassThrough2'
 */
void BaseEngineController_LS_PassThrough1(boolean_T rtu_0, real_T rtu_1, real_T *
  rty_Out1)
{
  /* Outputs for Enabled SubSystem: '<S402>/PassThrough1' incorporates:
   *  EnablePort: '<S418>/Enable'
   */
  if (rtu_0) {
    /* Inport: '<S418>/In1' */
    (*rty_Out1) = rtu_1;
  }

  /* End of Outputs for SubSystem: '<S402>/PassThrough1' */
}

/*
 * Output and update for action system:
 *    '<S488>/If Action Subsystem'
 *    '<S488>/If Action Subsystem1'
 *    '<S488>/If Action Subsystem2'
 *    '<S489>/If Action Subsystem'
 *    '<S489>/If Action Subsystem1'
 *    '<S489>/If Action Subsystem2'
 *    '<S563>/If Action Subsystem'
 *    '<S563>/If Action Subsystem1'
 *    '<S563>/If Action Subsystem2'
 *    '<S566>/If Action Subsystem'
 *    ...
 */
void BaseEngineController_LS_IfActionSubsystem(real_T rtu_0, real_T *rty_Out)
{
  /* Inport: '<S509>/In' */
  (*rty_Out) = rtu_0;
}

real_T rt_roundd_snf(real_T u)
{
  real_T y;
  if (fabs(u) < 4.5035996273705E+15) {
    y = u >= 0.5 ? floor(u + 0.5) : u > -0.5 ? u * 0.0 : ceil(u - 0.5);
  } else {
    y = u;
  }

  return y;
}

/* Initial conditions for function-call system: '<Root>/Foreground' */
void BaseEngineController_LS_Foreground_Init(void)
{
  /* Initial conditions for function-call system: '<S445>/Temp Sensors' */

  /* S-Function Block: <S722>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s722_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S740>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s740_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S731>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s731_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S713>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s713_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S769>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s769_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S800>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s800_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S757>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s757_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S783>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s783_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S431>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s431_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for Stateflow: '<S407>/Engine State Machine' */

  /* Entry: Foreground/Control/VirtualSensors/RawProcessed/EngineState/Engine State Machine */
  /* Transition: '<S428>:4' */
  BaseEngineController_LS_DWork.s428_is_c2_BaseEngineController_LS =
    BaseEngineController_LS_IN_Stall_l;

  /* Entry 'Stall': '<S428>:1' */
  BaseEngineController_LS_B.s428_State = 1U;

  /* S-Function Block: <S626>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s626_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S609>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s609_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S817>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s817_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S834>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s834_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S643>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s643_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S639>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s639_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S596>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s596_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S605>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s605_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(-1);
  }

  /* InitializeConditions for Atomic SubSystem: '<S361>/Base TPS Request' */

  /* S-Function Block: <S420>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s420_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S402>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s402_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* End of InitializeConditions for SubSystem: '<S361>/Base TPS Request' */

  /* S-Function Block: <S508>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s508_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
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

  /* S-Function Block: <S433>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s433_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S689>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s689_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S655>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s655_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S357>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s357_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for Stateflow: '<S357>/Baro Stall State Delay' */
  BaseEngineController_LS_DWork.s363_TOld = 0.0;
  BaseEngineController_LS_B.s363_Timer = 0.0;

  /* Entry: Foreground/Control/VirtualSensors/AirCalcs/Baro Stall State Delay */
  /* Transition: '<S363>:4' */
  BaseEngineController_LS_DWork.s363_is_c19_BaseEngineController_LS =
    BaseEngineController_LS_IN_Stall;

  /* Entry 'Stall': '<S363>:1' */
  BaseEngineController_LS_B.s363_Enable = TRUE;

  /* S-Function Block: <S370>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s370_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S577>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s577_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S425>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s425_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(-1);
  }

  /* S-Function Block: <S588>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s588_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S593>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s593_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S663>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s663_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* Initial conditions for function-call system: '<S445>/Fuel Level' */

  /* S-Function Block: <S700>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s700_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S358>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s358_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S877>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s877_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S874>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s874_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S879>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s879_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S880>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s880_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S881>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s881_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S896>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s896_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S647>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s647_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S897>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s897_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S673>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s673_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S898>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s898_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S902>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s902_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S905>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s905_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S904>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s904_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S958>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s958_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S435>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s435_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S681>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s681_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S607>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s607_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* Initial conditions for function-call system: '<S750>/Function-Call Subsystem' */

  /* InitializeConditions for UnitDelay: '<S768>/Initial Condition is True' */
  BaseEngineController_LS_DWork.s768_InitialConditionisTrue_DSTATE = TRUE;

  /* Initial conditions for function-call system: '<S752>/Function-Call Subsystem' */

  /* InitializeConditions for UnitDelay: '<S780>/Initial Condition is True' */
  BaseEngineController_LS_DWork.s780_InitialConditionisTrue_DSTATE = TRUE;
}

/* Enable for function-call system: '<Root>/Foreground' */
void BaseEngineController_LS_Foreground_Enable(void)
{
  /* Level2 S-Function Block: '<S445>/motohawk_trigger' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_5XRTI_PERIODIC_5522p0011 */
  BaseEngineController_LS_DWork.s445_motohawk_trigger_DWORK1 = 1;

  /* Level2 S-Function Block: '<S407>/motohawk_trigger' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_TDC_EVENT_4025p001 */
  BaseEngineController_LS_DWork.s407_motohawk_trigger_DWORK1 = 1;

  /* Level2 S-Function Block: '<S622>/motohawk_trigger5' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_MID_TDC_EVENT_5428p0009 */
  BaseEngineController_LS_DWork.s622_motohawk_trigger5_DWORK1 = 1;

  /* Level2 S-Function Block: '<S445>/motohawk_trigger1' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_5XRTI_PERIODIC_5523p0009 */
  BaseEngineController_LS_DWork.s445_motohawk_trigger1_DWORK1 = 1;

  /* Level2 S-Function Block: '<S14>/motohawk_trigger1' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_5XRTI_PERIODIC_11481p0005 */
  BaseEngineController_LS_DWork.s14_motohawk_trigger1_DWORK1 = 1;

  /* Level2 S-Function Block: '<S14>/motohawk_trigger' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_5XRTI_PERIODIC_11480p0002 */
  BaseEngineController_LS_DWork.s14_motohawk_trigger_DWORK1 = 1;

  /* Level2 S-Function Block: '<S13>/motohawk_trigger' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_5XRTI_PERIODIC_7015p0012 */

  /* Enable for function-call system: '<S13>/Coil Control' */

  /* Enable for Atomic SubSystem: '<S908>/EST Enable TDC Counter' */

  /* Level2 S-Function Block: '<S913>/motohawk_trigger1' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_TDC_EVENT_6487p001 */
  BaseEngineController_LS_DWork.s913_motohawk_trigger1_DWORK1 = 1;

  /* End of Enable for SubSystem: '<S908>/EST Enable TDC Counter' */
  BaseEngineController_LS_DWork.s13_motohawk_trigger_DWORK1 = 1;

  /* Level2 S-Function Block: '<S750>/motohawk_trigger' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_20XRTI_PERIODIC_5658p001 */
  BaseEngineController_LS_DWork.s750_motohawk_trigger_DWORK1 = 1;

  /* Level2 S-Function Block: '<S752>/motohawk_trigger' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_20XRTI_PERIODIC_5792p001 */
  BaseEngineController_LS_DWork.s752_motohawk_trigger_DWORK1 = 1;
}

/* Disable for function-call system: '<Root>/Foreground' */
void BaseEngineController_LS_Foreground_Disable(void)
{
  int32_T i;

  /* Level2 S-Function Block: '<S445>/motohawk_trigger' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_5XRTI_PERIODIC_5522p0011 */
  BaseEngineController_LS_DWork.s445_motohawk_trigger_DWORK1 = 0;

  /* Level2 S-Function Block: '<S407>/motohawk_trigger' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_TDC_EVENT_4025p001 */
  BaseEngineController_LS_DWork.s407_motohawk_trigger_DWORK1 = 0;

  /* Disable for Enabled SubSystem: '<S15>/Stall' */
  /* Disable for Stateflow: '<S311>/Ice Break' */
  BaseEngineController_LS_DWork.s322_presentTicks =
    BaseEngineController_LS_M->Timing.clockTick0;
  BaseEngineController_LS_DWork.s322_elapsedTicks =
    BaseEngineController_LS_DWork.s322_presentTicks -
    BaseEngineController_LS_DWork.s322_previousTicks;
  BaseEngineController_LS_DWork.s322_previousTicks =
    BaseEngineController_LS_DWork.s322_presentTicks;
  BaseEngineController_LS_DWork.s322_temporalCounter_i1 =
    BaseEngineController_LS_DWork.s322_temporalCounter_i1 +
    BaseEngineController_LS_DWork.s322_elapsedTicks;
  BaseEngineController_LS_DWork.s15_Stall_MODE = FALSE;

  /* End of Disable for SubSystem: '<S15>/Stall' */

  /* Disable for Enabled SubSystem: '<S15>/Crank' */
  BaseEngineController_LS_DWork.s15_Crank_MODE = FALSE;

  /* End of Disable for SubSystem: '<S15>/Crank' */

  /* Level2 S-Function Block: '<S622>/motohawk_trigger5' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_MID_TDC_EVENT_5428p0009 */
  BaseEngineController_LS_DWork.s622_motohawk_trigger5_DWORK1 = 0;

  /* Disable for Enabled SubSystem: '<S357>/Capture Signal At Startup' */

  /* Disable for Enabled SubSystem: '<S364>/Collect Average' */
  BaseEngineController_LS_CollectAverage_Disable
    (&BaseEngineController_LS_DWork.s364_CollectAverage);

  /* End of Disable for SubSystem: '<S364>/Collect Average' */
  BaseEngineController_LS_DWork.s357_CaptureSignalAtStartup_MODE = FALSE;

  /* End of Disable for SubSystem: '<S357>/Capture Signal At Startup' */

  /* Disable for Enabled SubSystem: '<S361>/Capture ECT At Startup' */

  /* Disable for Enabled SubSystem: '<S403>/Collect Average' */
  BaseEngineController_LS_CollectAverage_Disable
    (&BaseEngineController_LS_DWork.s403_CollectAverage);

  /* End of Disable for SubSystem: '<S403>/Collect Average' */
  BaseEngineController_LS_DWork.s361_CaptureECTAtStartup_MODE = FALSE;

  /* End of Disable for SubSystem: '<S361>/Capture ECT At Startup' */

  /* Disable for Enabled SubSystem: '<S15>/Run' */

  /* Level2 S-Function Block: '<S136>/motohawk_trigger1' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_5XRTI_PERIODIC_1295p0007 */
  BaseEngineController_LS_DWork.s136_motohawk_trigger1_DWORK1 = 0;

  /* Disable for Atomic SubSystem: '<S136>/Fuel System Manager' */
  /* Disable for Atomic SubSystem: '<S150>/Injector Manager' */
  /* Disable for Enabled SubSystem: '<S207>/Delta TPS Transient Fueling' */
  /* Disable for Enabled SubSystem: '<S212>/ECT Transient Fueling' */
  /* Disable for Outport: '<S216>/Mult' */
  BaseEngineController_LS_B.s216_motohawk_interpolation_1d = 1.0;
  BaseEngineController_LS_DWork.s212_ECTTransientFueling_MODE = FALSE;

  /* End of Disable for SubSystem: '<S212>/ECT Transient Fueling' */

  /* Disable for Enabled SubSystem: '<S212>/OXY Transient Fueling' */
  /* Disable for Outport: '<S219>/Mult' */
  BaseEngineController_LS_B.s219_motohawk_interpolation_1d = 1.0;
  BaseEngineController_LS_DWork.s212_OXYTransientFueling_MODE = FALSE;

  /* End of Disable for SubSystem: '<S212>/OXY Transient Fueling' */

  /* Disable for Outport: '<S212>/DeltaTPSMult' */
  BaseEngineController_LS_B.s212_Product1 = 1.0;
  BaseEngineController_LS_DWork.s207_DeltaTPSTransientFueling_MODE = FALSE;

  /* End of Disable for SubSystem: '<S207>/Delta TPS Transient Fueling' */
  /* End of Disable for SubSystem: '<S150>/Injector Manager' */
  /* End of Disable for SubSystem: '<S136>/Fuel System Manager' */
  BaseEngineController_LS_DWork.s15_Run_MODE = FALSE;

  /* End of Disable for SubSystem: '<S15>/Run' */

  /* Level2 S-Function Block: '<S445>/motohawk_trigger1' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_5XRTI_PERIODIC_5523p0009 */
  BaseEngineController_LS_DWork.s445_motohawk_trigger1_DWORK1 = 0;

  /* Disable for Enabled SubSystem: '<S22>/PassThrough1' */
  BaseEngineController_LS_DWork.s22_PassThrough1_MODE = FALSE;

  /* Disable for Enabled SubSystem: '<S22>/PassThrough3' */
  for (i = 0; i < 32; i++) {
    /* Disable for Outport: '<S97>/Out1' */
    BaseEngineController_LS_B.s22_Merge1[i] = 0;

    /* Disable for Outport: '<S99>/Out1' */
    BaseEngineController_LS_B.s22_Merge1[i] = 0;
  }

  /* End of Disable for SubSystem: '<S22>/PassThrough1' */
  BaseEngineController_LS_DWork.s22_PassThrough3_MODE = FALSE;

  /* End of Disable for SubSystem: '<S22>/PassThrough3' */

  /* Disable for Enabled SubSystem: '<S22>/SequenceCutMachine' */

  /* Level2 S-Function Block: '<S102>/motohawk_trigger' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_TDC1_EVENT_10305p0005 */
  BaseEngineController_LS_DWork.s102_motohawk_trigger_DWORK1 = 0;
  BaseEngineController_LS_DWork.s22_SequenceCutMachine_MODE = FALSE;

  /* End of Disable for SubSystem: '<S22>/SequenceCutMachine' */

  /* Disable for Enabled SubSystem: '<S22>/PassThrough5' */
  BaseEngineController_LS_DWork.s22_PassThrough5_MODE = FALSE;

  /* Disable for Enabled SubSystem: '<S22>/PassThrough4' */
  for (i = 0; i < 8; i++) {
    /* Disable for Outport: '<S101>/Out1' */
    BaseEngineController_LS_B.s101_DataTypeConversion1[i] = FALSE;

    /* Disable for Outport: '<S100>/Out1' */
    BaseEngineController_LS_B.s100_DataTypeConversion[i] = FALSE;
  }

  /* End of Disable for SubSystem: '<S22>/PassThrough5' */
  BaseEngineController_LS_DWork.s22_PassThrough4_MODE = FALSE;

  /* End of Disable for SubSystem: '<S22>/PassThrough4' */

  /* Disable for Enabled SubSystem: '<S361>/Capture IAT At Startup' */

  /* Disable for Enabled SubSystem: '<S404>/Collect Average' */
  BaseEngineController_LS_CollectAverage_Disable
    (&BaseEngineController_LS_DWork.s404_CollectAverage);

  /* End of Disable for SubSystem: '<S404>/Collect Average' */
  BaseEngineController_LS_DWork.s361_CaptureIATAtStartup_MODE = FALSE;

  /* End of Disable for SubSystem: '<S361>/Capture IAT At Startup' */

  /* Level2 S-Function Block: '<S14>/motohawk_trigger1' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_5XRTI_PERIODIC_11481p0005 */
  BaseEngineController_LS_DWork.s14_motohawk_trigger1_DWORK1 = 0;

  /* Level2 S-Function Block: '<S14>/motohawk_trigger' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_5XRTI_PERIODIC_11480p0002 */
  BaseEngineController_LS_DWork.s14_motohawk_trigger_DWORK1 = 0;

  /* Level2 S-Function Block: '<S13>/motohawk_trigger' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_5XRTI_PERIODIC_7015p0012 */

  /* Disable for function-call system: '<S13>/Coil Control' */

  /* Disable for Atomic SubSystem: '<S908>/EST Enable TDC Counter' */

  /* Level2 S-Function Block: '<S913>/motohawk_trigger1' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_TDC_EVENT_6487p001 */
  BaseEngineController_LS_DWork.s913_motohawk_trigger1_DWORK1 = 0;

  /* End of Disable for SubSystem: '<S908>/EST Enable TDC Counter' */
  BaseEngineController_LS_DWork.s13_motohawk_trigger_DWORK1 = 0;

  /* Disable for Enabled SubSystem: '<S14>/Electronic Throttle Controller' */
  /* Disable for Enabled SubSystem: '<S31>/PassThrough' */
  /* Disable for Outport: '<S52>/Out1' */
  BaseEngineController_LS_B.s52_In1 = 10.0;
  BaseEngineController_LS_DWork.s31_PassThrough_MODE = FALSE;

  /* End of Disable for SubSystem: '<S31>/PassThrough' */
  BaseEngineController_LS_DWork.s14_ElectronicThrottleController_MODE = FALSE;

  /* End of Disable for SubSystem: '<S14>/Electronic Throttle Controller' */

  /* Level2 S-Function Block: '<S750>/motohawk_trigger' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_20XRTI_PERIODIC_5658p001 */
  BaseEngineController_LS_DWork.s750_motohawk_trigger_DWORK1 = 0;

  /* Level2 S-Function Block: '<S752>/motohawk_trigger' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_20XRTI_PERIODIC_5792p001 */
  BaseEngineController_LS_DWork.s752_motohawk_trigger_DWORK1 = 0;
}

/* Start for function-call system: '<Root>/Foreground' */
void BaseEngineController_LS_Foreground_Start(void)
{
  /* Start for S-Function (motohawk_sfun_trigger): '<S445>/motohawk_trigger' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_5XRTI_PERIODIC_5522p0011 */
  BaseEngineController_LS_DWork.s445_motohawk_trigger_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S407>/motohawk_trigger' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_TDC_EVENT_4025p001 */
  BaseEngineController_LS_DWork.s407_motohawk_trigger_DWORK1 = 0;

  /* Start for Enabled SubSystem: '<S15>/Stall' */

  /* InitializeConditions for UnitDelay: '<S318>/Unit Delay' */
  BaseEngineController_LS_DWork.s318_UnitDelay_DSTATE = FALSE;

  /* InitializeConditions for UnitDelay: '<S319>/Unit Delay' */
  BaseEngineController_LS_DWork.s319_UnitDelay_DSTATE = FALSE;

  /* InitializeConditions for UnitDelay: '<S320>/Unit Delay' */
  BaseEngineController_LS_DWork.s320_UnitDelay_DSTATE = FALSE;

  /* InitializeConditions for UnitDelay: '<S321>/Unit Delay' */
  BaseEngineController_LS_DWork.s321_UnitDelay_DSTATE = 0.0;

  /* S-Function Block: <S323>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s323_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for Stateflow: '<S311>/Ice Break' */
  BaseEngineController_LS_DWork.s322_is_active_c3_BaseEngineController_LS = 0U;
  BaseEngineController_LS_DWork.s322_is_c3_BaseEngineController_LS = 0U;
  BaseEngineController_LS_B.s322_etc = 0.0;
  BaseEngineController_LS_DWork.s322_presentTicks = 0U;
  BaseEngineController_LS_DWork.s322_elapsedTicks = 0U;
  BaseEngineController_LS_DWork.s322_previousTicks = 0U;

  /* End of Start for SubSystem: '<S15>/Stall' */

  /* Start for Atomic SubSystem: '<S361>/Base TPS Request' */

  /* Start for Enabled SubSystem: '<S402>/PassThrough1' */
  BaseEngineController_LS_PassThrough1_Start
    (&BaseEngineController_LS_B.s402_Merge);

  /* End of Start for SubSystem: '<S402>/PassThrough1' */

  /* Start for Enabled SubSystem: '<S402>/PassThrough2' */
  BaseEngineController_LS_PassThrough1_Start
    (&BaseEngineController_LS_B.s402_Merge);

  /* End of Start for SubSystem: '<S402>/PassThrough2' */

  /* End of Start for SubSystem: '<S361>/Base TPS Request' */

  /* Start for S-Function (motohawk_sfun_trigger): '<S622>/motohawk_trigger5' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_MID_TDC_EVENT_5428p0009 */
  BaseEngineController_LS_DWork.s622_motohawk_trigger5_DWORK1 = 0;

  /* Start for Enabled SubSystem: '<S357>/Capture Signal At Startup' */

  /* Start for Enabled SubSystem: '<S364>/Collect Average' */
  BaseEngineController_LS_CollectAverage_Start
    (&BaseEngineController_LS_DWork.s364_CollectAverage);

  /* End of Start for SubSystem: '<S364>/Collect Average' */

  /* InitializeConditions for UnitDelay: '<S364>/Unit Delay' */
  BaseEngineController_LS_DWork.s364_UnitDelay_DSTATE = 0;

  /* End of Start for SubSystem: '<S357>/Capture Signal At Startup' */

  /* Start for Enabled SubSystem: '<S383>/IncreasingFilter' */

  /* VirtualOutportStart for Outport: '<S387>/Out1' */
  BaseEngineController_LS_B.s383_Merge = 0.005;

  /* End of Start for SubSystem: '<S383>/IncreasingFilter' */

  /* Start for Enabled SubSystem: '<S383>/DecreasingFilter' */

  /* VirtualOutportStart for Outport: '<S385>/Out1' */
  BaseEngineController_LS_B.s383_Merge = 0.005;

  /* End of Start for SubSystem: '<S383>/DecreasingFilter' */

  /* Start for Enabled SubSystem: '<S384>/IncreasingFilter' */

  /* VirtualOutportStart for Outport: '<S390>/Out1' */
  BaseEngineController_LS_B.s384_Merge = 0.005;

  /* End of Start for SubSystem: '<S384>/IncreasingFilter' */

  /* Start for Enabled SubSystem: '<S384>/DecreasingFilter' */

  /* VirtualOutportStart for Outport: '<S388>/Out1' */
  BaseEngineController_LS_B.s384_Merge = 0.005;

  /* End of Start for SubSystem: '<S384>/DecreasingFilter' */

  /* Start for Enabled SubSystem: '<S361>/Capture ECT At Startup' */

  /* Start for Enabled SubSystem: '<S403>/Collect Average' */
  BaseEngineController_LS_CollectAverage_Start
    (&BaseEngineController_LS_DWork.s403_CollectAverage);

  /* End of Start for SubSystem: '<S403>/Collect Average' */

  /* InitializeConditions for UnitDelay: '<S403>/Unit Delay' */
  BaseEngineController_LS_DWork.s403_UnitDelay_DSTATE = 0;

  /* End of Start for SubSystem: '<S361>/Capture ECT At Startup' */

  /* Start for Enabled SubSystem: '<S15>/Run' */

  /* Start for S-Function (motohawk_sfun_trigger): '<S136>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_5XRTI_PERIODIC_1295p0007 */
  BaseEngineController_LS_DWork.s136_motohawk_trigger1_DWORK1 = 0;

  /* Start for Atomic SubSystem: '<S136>/O2 Control' */

  /* Start for Atomic SubSystem: '<S154>/O2 PID Controller' */

  /* Start for InitialCondition: '<S286>/Multiply by 1.0 if not yet enabled' */
  BaseEngineController_LS_DWork.s286_Multiplyby10ifnotyetenabled_FirstOutputTime
    = TRUE;

  /* End of Start for SubSystem: '<S154>/O2 PID Controller' */

  /* End of Start for SubSystem: '<S136>/O2 Control' */

  /* Start for Atomic SubSystem: '<S136>/Fuel System Manager' */

  /* Start for Atomic SubSystem: '<S150>/Injector Manager' */

  /* Start for Enabled SubSystem: '<S207>/Delta TPS Transient Fueling' */

  /* Start for Enabled SubSystem: '<S212>/ECT Transient Fueling' */

  /* VirtualOutportStart for Outport: '<S216>/Mult' */
  BaseEngineController_LS_B.s216_motohawk_interpolation_1d = 1.0;

  /* End of Start for SubSystem: '<S212>/ECT Transient Fueling' */

  /* Start for Enabled SubSystem: '<S212>/OXY Transient Fueling' */

  /* VirtualOutportStart for Outport: '<S219>/Mult' */
  BaseEngineController_LS_B.s219_motohawk_interpolation_1d = 1.0;

  /* End of Start for SubSystem: '<S212>/OXY Transient Fueling' */

  /* S-Function Block: <S218>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s218_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for UnitDelay: '<S221>/Unit Delay' */
  BaseEngineController_LS_DWork.s221_UnitDelay_DSTATE = 0.0;

  /* S-Function Block: <S217>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s217_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for UnitDelay: '<S220>/Unit Delay' */
  BaseEngineController_LS_DWork.s220_UnitDelay_DSTATE = 0.0;

  /* VirtualOutportStart for Outport: '<S212>/DeltaTPSMult' */
  BaseEngineController_LS_B.s212_Product1 = 1.0;

  /* End of Start for SubSystem: '<S207>/Delta TPS Transient Fueling' */

  /* End of Start for SubSystem: '<S150>/Injector Manager' */

  /* End of Start for SubSystem: '<S136>/Fuel System Manager' */

  /* InitializeConditions for UnitDelay: '<S167>/Unit Delay' */
  BaseEngineController_LS_DWork.s167_UnitDelay_DSTATE = FALSE;

  /* InitializeConditions for UnitDelay: '<S166>/Unit Delay' */
  BaseEngineController_LS_DWork.s166_UnitDelay_DSTATE = FALSE;

  /* InitializeConditions for UnitDelay: '<S164>/Unit Delay' */
  BaseEngineController_LS_DWork.s164_UnitDelay_DSTATE = FALSE;

  /* InitializeConditions for UnitDelay: '<S165>/Unit Delay' */
  BaseEngineController_LS_DWork.s165_UnitDelay_DSTATE = FALSE;

  /* InitializeConditions for UnitDelay: '<S163>/Unit Delay' */
  BaseEngineController_LS_DWork.s163_UnitDelay_DSTATE = FALSE;

  /* InitializeConditions for UnitDelay: '<S162>/Unit Delay' */
  BaseEngineController_LS_DWork.s162_UnitDelay_DSTATE = FALSE;

  /* S-Function Block: <S193>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s193_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for UnitDelay: '<S192>/Unit Delay' */
  BaseEngineController_LS_DWork.s192_UnitDelay_DSTATE = FALSE;

  /* S-Function Block: <S191>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s191_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for UnitDelay: '<S191>/state' */
  BaseEngineController_LS_DWork.s191_state_DSTATE = 0.0;

  /* InitializeConditions for S-Function (motohawk_sfun_trigger): '<S136>/motohawk_trigger1' */
  if (rtmIsFirstInitCond(BaseEngineController_LS_M)) {
    /* Initial conditions for function-call system: '<S136>/MinGovernor' */

    /* InitializeConditions for Stateflow: '<S250>/IdleStateMachine' */
    BaseEngineController_LS_IdleStateMachine_Init();

    /* S-Function Block: <S249>/motohawk_delta_time */
    {
      uint32_T now = 0;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
        u32Time_us);
      Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
      BaseEngineController_LS_DWork.s249_motohawk_delta_time_DWORK1 = now -
        Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
    }

    /* S-Function Block: <S253>/motohawk_delta_time */
    {
      uint32_T now = 0;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
        u32Time_us);
      Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
      BaseEngineController_LS_DWork.s253_motohawk_delta_time_DWORK1 = now -
        Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
    }

    /* InitializeConditions for Atomic SubSystem: '<S153>/AiflowOffset' */

    /* S-Function Block: <S256>/motohawk_delta_time */
    {
      uint32_T now = 0;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
        u32Time_us);
      Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
      BaseEngineController_LS_DWork.s256_motohawk_delta_time_DWORK1 = now -
        Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
    }

    /* End of InitializeConditions for SubSystem: '<S153>/AiflowOffset' */

    /* S-Function Block: <S281>/motohawk_delta_time */
    {
      uint32_T now = 0;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
        u32Time_us);
      Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
      BaseEngineController_LS_DWork.s281_motohawk_delta_time_DWORK1 = now -
        Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
    }
  }

  if (rtmIsFirstInitCond(BaseEngineController_LS_M)) {
    /* Initial conditions for function-call system: '<S136>/MaxGovernor' */

    /* S-Function Block: <S232>/motohawk_delta_time */
    {
      uint32_T now = 0;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
        u32Time_us);
      Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
      BaseEngineController_LS_DWork.s232_motohawk_delta_time_DWORK1 = now -
        Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
    }

    /* S-Function Block: <S243>/motohawk_delta_time */
    {
      uint32_T now = 0;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
        u32Time_us);
      Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
      BaseEngineController_LS_DWork.s243_motohawk_delta_time_DWORK1 = now -
        Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
    }
  }

  if (rtmIsFirstInitCond(BaseEngineController_LS_M)) {
    /* Initial conditions for function-call system: '<S136>/Spark Manager' */

    /* InitializeConditions for UnitDelay: '<S306>/Initial Condition is True' */
    BaseEngineController_LS_DWork.s306_InitialConditionisTrue_DSTATE = TRUE;
  }

  /* InitializeConditions for UnitDelay: '<S147>/Unit Delay' */
  BaseEngineController_LS_DWork.s147_UnitDelay_DSTATE = 0.0;

  /* InitializeConditions for UnitDelay: '<S186>/Unit Delay' */
  BaseEngineController_LS_DWork.s186_UnitDelay_DSTATE = 0.0;

  /* S-Function Block: <S176>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s176_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for UnitDelay: '<S176>/Unit Delay' */
  BaseEngineController_LS_DWork.s176_UnitDelay_DSTATE = 0.0;

  /* InitializeConditions for UnitDelay: '<S185>/Unit Delay' */
  BaseEngineController_LS_DWork.s185_UnitDelay_DSTATE = 0.0;

  /* S-Function Block: <S186>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s186_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for UnitDelay: '<S203>/Unit Delay' */
  BaseEngineController_LS_DWork.s203_UnitDelay_DSTATE = FALSE;

  /* InitializeConditions for UnitDelay: '<S204>/Unit Delay' */
  BaseEngineController_LS_DWork.s204_UnitDelay_DSTATE = FALSE;

  /* InitializeConditions for UnitDelay: '<S205>/Unit Delay' */
  BaseEngineController_LS_DWork.s205_UnitDelay_DSTATE = FALSE;

  /* InitializeConditions for Atomic SubSystem: '<S136>/O2 Control' */

  /* InitializeConditions for Atomic SubSystem: '<S154>/O2 PID Controller' */
  /* InitializeConditions for UnitDelay: '<S297>/Unit Delay' */
  BaseEngineController_LS_DWork.s297_UnitDelay_DSTATE = FALSE;

  /* InitializeConditions for UnitDelay: '<S294>/Unit Delay' */
  BaseEngineController_LS_DWork.s294_UnitDelay_DSTATE = 0.0;

  /* InitializeConditions for UnitDelay: '<S293>/Unit Delay' */
  BaseEngineController_LS_DWork.s293_UnitDelay_DSTATE = 0.0;

  /* S-Function Block: <S294>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s294_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for UnitDelay: '<S290>/Unit Delay1' */
  BaseEngineController_LS_DWork.s290_UnitDelay1_DSTATE = 0.0;

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

  /* InitializeConditions for UnitDelay: '<S290>/Unit Delay' */
  BaseEngineController_LS_DWork.s290_UnitDelay_DSTATE = 0.0;

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

  /* InitializeConditions for UnitDelay: '<S290>/Unit Delay2' */
  BaseEngineController_LS_DWork.s290_UnitDelay2_DSTATE = 0.0;

  /* S-Function Block: <S299>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s299_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* End of InitializeConditions for SubSystem: '<S154>/O2 PID Controller' */
  /* End of InitializeConditions for SubSystem: '<S136>/O2 Control' */

  /* End of Start for SubSystem: '<S15>/Run' */

  /* Start for S-Function (motohawk_sfun_trigger): '<S445>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_5XRTI_PERIODIC_5523p0009 */
  BaseEngineController_LS_DWork.s445_motohawk_trigger1_DWORK1 = 0;

  /* Start for Enabled SubSystem: '<S882>/IncreasingFilter' */

  /* VirtualOutportStart for Outport: '<S889>/Out1' */
  BaseEngineController_LS_B.s882_Merge = 0.005;

  /* End of Start for SubSystem: '<S882>/IncreasingFilter' */

  /* Start for Enabled SubSystem: '<S882>/DecreasingFilter' */

  /* VirtualOutportStart for Outport: '<S887>/Out1' */
  BaseEngineController_LS_B.s882_Merge = 0.005;

  /* End of Start for SubSystem: '<S882>/DecreasingFilter' */

  /* Start for Enabled SubSystem: '<S883>/IncreasingFilter' */

  /* VirtualOutportStart for Outport: '<S892>/Out1' */
  BaseEngineController_LS_B.s883_Merge = 0.005;

  /* End of Start for SubSystem: '<S883>/IncreasingFilter' */

  /* Start for Enabled SubSystem: '<S883>/DecreasingFilter' */

  /* VirtualOutportStart for Outport: '<S890>/Out1' */
  BaseEngineController_LS_B.s883_Merge = 0.005;

  /* End of Start for SubSystem: '<S883>/DecreasingFilter' */

  /* Start for Enabled SubSystem: '<S22>/SequenceCutMachine' */

  /* Start for function-call system: '<S102>/SequencyCutMachine' */

  /* VirtualOutportStart for Outport: '<S121>/CycleCounter' */
  BaseEngineController_LS_B.s121_Switch = 1U;

  /* VirtualOutportStart for Outport: '<S121>/CycleNumber' */
  BaseEngineController_LS_B.s121_Switch1 = 1.0;

  /* Clear enable/disable state for embedded trigger Trigger_FGND_TDC1_EVENT_10305p0005 */
  BaseEngineController_LS_DWork.s102_motohawk_trigger_DWORK1 = 0;

  /* InitializeConditions for UnitDelay: '<S102>/Unit Delay2' */
  BaseEngineController_LS_DWork.s102_UnitDelay2_DSTATE = 1.0;

  /* InitializeConditions for UnitDelay: '<S102>/Unit Delay1' */
  BaseEngineController_LS_DWork.s102_UnitDelay1_DSTATE = 1U;

  /* End of Start for SubSystem: '<S22>/SequenceCutMachine' */

  /* Start for Enabled SubSystem: '<S361>/Capture IAT At Startup' */

  /* Start for Enabled SubSystem: '<S404>/Collect Average' */
  BaseEngineController_LS_CollectAverage_Start
    (&BaseEngineController_LS_DWork.s404_CollectAverage);

  /* End of Start for SubSystem: '<S404>/Collect Average' */

  /* InitializeConditions for UnitDelay: '<S404>/Unit Delay' */
  BaseEngineController_LS_DWork.s404_UnitDelay_DSTATE = 0;

  /* End of Start for SubSystem: '<S361>/Capture IAT At Startup' */

  /* Start for S-Function (motohawk_sfun_trigger): '<S14>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_5XRTI_PERIODIC_11481p0005 */
  BaseEngineController_LS_DWork.s14_motohawk_trigger1_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S14>/motohawk_trigger' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_5XRTI_PERIODIC_11480p0002 */
  BaseEngineController_LS_DWork.s14_motohawk_trigger_DWORK1 = 0;

  /* Start for function-call system: '<S13>/Coil Control' */

  /* Start for Atomic SubSystem: '<S908>/EST Enable TDC Counter' */

  /* Start for S-Function (motohawk_sfun_trigger): '<S913>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_TDC_EVENT_6487p001 */
  BaseEngineController_LS_DWork.s913_motohawk_trigger1_DWORK1 = 0;

  /* End of Start for SubSystem: '<S908>/EST Enable TDC Counter' */

  /* S-Function Block: <S851>/Spark Sequence */
  {
    NativeError_S createErrorResult;
    int32_T i;
    extern void SparkSeqDiagCallback_22(S_SeqOutDiagReportPtr report,
      NativePtrSizedInt_U userData);
    if ((EST_SequenceType_DataStore()) == 0) {
      S_ESTSeqCreateAttributes CreateObj;
      CreateObj.uValidAttributesMask = USE_SEQ_GRANULARITY;
      CreateObj.u1NumPulsesToCreate = 1;
      CreateObj.eGranularity = FINE_GRANULARITY;
      CreateObj.uValidAttributesMask |= USE_SEQ_DIAG_REPORT_COND;
      CreateObj.ReportsObj.pfDiagCback = SparkSeqDiagCallback_22;
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
      CreateObj.ReportsObj.pfDiagCback = SparkSeqDiagCallback_22;
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
      CreateObj.ReportsObj.pfDiagCback = SparkSeqDiagCallback_22;

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
            (ESTPinMapArr_PulseNum_22_DataStore())[cyl] = 0;
            (ESTPinMapArr_PulseNum_22_DataStore())[opp_cyl] = 1;/* p1 aligns with opp_cyl */
          } else {
            p0 = (EncoderTDCAngles_DataStore())[opp_cyl];
            p1 = (EncoderTDCAngles_DataStore())[cyl];
            (ESTPinMapArr_PulseNum_22_DataStore())[cyl] = 1;
            (ESTPinMapArr_PulseNum_22_DataStore())[opp_cyl] = 0;/* p0 aligns with opp_cyl */
          }

          (ESTPinMapArr_Resource_22_DataStore())[cyl] = (E_ModuleResource)
            ((EST_InitialPin_DataStore()) + pin);
          (ESTPinMapArr_Resource_22_DataStore())[opp_cyl] = (E_ModuleResource)
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
      CreateObj.ReportsObj.pfDiagCback = SparkSeqDiagCallback_22;
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

  /* Clear enable/disable state for embedded trigger Trigger_FGND_5XRTI_PERIODIC_7015p0012 */
  BaseEngineController_LS_DWork.s13_motohawk_trigger_DWORK1 = 0;

  /* Start for Enabled SubSystem: '<S14>/Electronic Throttle Controller' */

  /* Start for Enabled SubSystem: '<S31>/PassThrough' */
  /* VirtualOutportStart for Outport: '<S52>/Out1' */
  BaseEngineController_LS_B.s52_In1 = 10.0;

  /* End of Start for SubSystem: '<S31>/PassThrough' */

  /* S-Function Block: <S63>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s63_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for Stateflow: '<S20>/ETC Test  Manager' */
  BaseEngineController_LS_DWork.s27_TimerOld = 0.0;

  /* Entry: Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/ETC Test  Manager */
  /* Transition: '<S27>:7' */
  BaseEngineController_LS_DWork.s27_is_c9_BaseEngineController_LS =
    BaseEngineController_LS_IN_PassThrough;

  /* Entry 'PassThrough': '<S27>:1' */
  BaseEngineController_LS_B.s27_DC_Override = 0;
  BaseEngineController_LS_B.s27_TestComplete = FALSE;
  BaseEngineController_LS_B.s27_SetpointMode = 0;
  BaseEngineController_LS_B.s27_TestTime = 0.0;

  /* S-Function Block: <S55>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s55_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S43>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s43_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S48>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s48_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* End of Start for SubSystem: '<S14>/Electronic Throttle Controller' */

  /* S-Function Block: <S857>/Injector Sequence */
  {
    S_SeqOutAttributes DynamicObj;
    NativeError_S createErrorResult = ERROR_BEHAVIOUR_METHOD_UNSUPPORTED;
    NativeError_S dynamicErrorResult = ERROR_BEHAVIOUR_METHOD_UNSUPPORTED;
    NativeError_S dynamicErrorResult2 = ERROR_BEHAVIOUR_METHOD_UNSUPPORTED;
    int32_T i;
    extern void InjectorSeqDiagCallback_39(S_SeqOutDiagReportPtr report,
      NativePtrSizedInt_U userData);
    extern S_SeqOutInjDiagReport InjectorSeqDiagInfo_39[8];
    extern int32_T InjectorSeqDiagLastPin_39;
    DynamicObj.uMinPulseDurationInMicroSecs = 1500;
    for (i=0; i < (EncoderNumCylinders_DataStore()); i++) {
      InjectorSeqDiagInfo_39[i].u4TXTimeInMicroSecs = 0xFFFFFFFF;
      InjectorSeqDiagInfo_39[i].u1TXCnt = 1;
    }

    InjectorSeqDiagLastPin_39 = -1;
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
        CreateObj.ReportsObj.pfDiagCback = InjectorSeqDiagCallback_39;
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
        extern void TransientInjectorSeqReportCallback_39
          (S_SeqOutInjEndEventReportPtr report, NativePtrSizedInt_U userData);
        extern TransientInjectorSeqInfo_T TransientInjectorSeqInfo_39[8];
        S_TranInjSeqCreateAttributes CreateObj;
        CreateObj.uValidAttributesMask = USE_SEQ_GRANULARITY |
          USE_SEQ_ENDEVENT_REPORT_COND | USE_SEQ_DIAG_REPORT_COND;
        CreateObj.ReportsObj.pfReportCback =
          TransientInjectorSeqReportCallback_39;
        CreateObj.ReportsObj.pfDiagCback = InjectorSeqDiagCallback_39;
        DynamicObj.u1AffectedPulse = 0;
        DynamicObj.eReportCond = RES_ENABLED;
        DynamicObj.uValidAttributesMask |= USE_SEQ_ENDEVENT_REPORT_COND;
        for (i=0; i < (EncoderNumCylinders_DataStore()); i++) {
          if ((INJ_InitialPin_DataStore()) + i <= 23) {
            TransientInjectorSeqInfo_39[i].primaryComplete = 0;
            TransientInjectorSeqInfo_39[i].primaryDuration = 0;
            TransientInjectorSeqInfo_39[i].pinResource =
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
      CreateObj.ReportsObj.pfDiagCback = InjectorSeqDiagCallback_39;
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
      CreateObj.ReportsObj.pfDiagCback = InjectorSeqDiagCallback_39;
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

    BaseEngineController_LS_DWork.s857_InjectorSequence_DWORK1[0] = 0;
    BaseEngineController_LS_DWork.s857_InjectorSequence_DWORK1[1] = 0;
    BaseEngineController_LS_DWork.s857_InjectorSequence_DWORK1[2] = 0;
    BaseEngineController_LS_DWork.s857_InjectorSequence_DWORK1[3] = 0;
    BaseEngineController_LS_DWork.s857_InjectorSequence_DWORK1[4] = 0;
    BaseEngineController_LS_DWork.s857_InjectorSequence_DWORK1[5] = 0;
    BaseEngineController_LS_DWork.s857_InjectorSequence_DWORK1[6] = 0;
    BaseEngineController_LS_DWork.s857_InjectorSequence_DWORK1[7] = 0;
    BaseEngineController_LS_DWork.s857_InjectorSequence_DWORK2 = 0;
  }

  /* Start for Enabled SubSystem: '<S439>/Triggered Subsystem' incorporates:
   *  Start for S-Function (fcncallgen): '<S440>/Function-Call Generator'
   *  Start for SubSystem: '<S11>/Diagnostics'
   */

  /* Start for Enabled SubSystem: '<S439>/Triggered Subsystem' incorporates:
   *  InitializeConditions for S-Function (fcncallgen): '<S440>/Function-Call Generator'
   *  InitializeConditions for SubSystem: '<S11>/Diagnostics'
   */

  /* S-Function Block: <S337>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s337_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* Start for S-Function (motohawk_sfun_trigger): '<S750>/motohawk_trigger' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_20XRTI_PERIODIC_5658p001 */
  BaseEngineController_LS_DWork.s750_motohawk_trigger_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S752>/motohawk_trigger' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_20XRTI_PERIODIC_5792p001 */
  BaseEngineController_LS_DWork.s752_motohawk_trigger_DWORK1 = 0;
}

/* Output and update for function-call system: '<Root>/Foreground' */
void BaseEngineController_LS_Foreground(void)
{
  /* local block i/o variables */
  real_T rtb_DataTypeConversion_fc;
  real_T rtb_UnitDelay_jb;
  real_T rtb_Merge_c;
  real_T rtb_Sum1_b4;
  real_T rtb_UnitDelay1_ok;
  real_T rtb_Merge_m;
  real_T rtb_DataTypeConversion_hd;
  real_T rtb_UnitDelay_m;
  real_T rtb_Merge_o;
  real_T rtb_Sum1_h1;
  real_T rtb_UnitDelay1_e;
  real_T rtb_Merge_ao;
  real_T rtb_APP1;
  real_T rtb_motohawk_delta_time_hb;
  real_T rtb_UnitDelay1_i;
  real_T rtb_Merge_b;
  real_T rtb_Sum1_hw;
  real_T rtb_UnitDelay1_d;
  real_T rtb_Merge_li;
  real_T rtb_Sum1_lp;
  real_T rtb_UnitDelay1_p;
  real_T rtb_Merge_mv;
  real_T rtb_motohawk_delta_time_ea;
  real_T rtb_Saturation_g;
  real_T rtb_UnitDelay1_ew;
  real_T rtb_Merge_i;
  real_T rtb_UnitDelay_jw;
  real_T rtb_Merge_j;
  real_T rtb_motohawk_delta_time_o;
  real_T rtb_Merge_as;
  real_T rtb_UnitDelay1_jn;
  real_T rtb_Merge_ox;
  real_T rtb_UnitDelay1_m;
  real_T rtb_Merge_h;
  real_T rtb_motohawk_delta_time_f;
  real_T rtb_UnitDelay1_f4;
  real_T rtb_Merge_f;
  real_T rtb_UnitDelay1_a;
  real_T rtb_Merge_in;
  real_T rtb_UnitDelay1_n;
  real_T rtb_Merge_jq;
  real_T rtb_motohawk_delta_time_ok;
  real_T rtb_motohawk_interpolation_2d;
  real_T rtb_Saturation1_c;
  real_T rtb_motohawk_interpolation_1d1_j;
  real_T rtb_motohawk_interpolation_2d1_n;
  real_T rtb_UnitDelay_nr;
  real_T rtb_Merge_dv;
  real_T rtb_motohawk_delta_time_ow;
  real_T rtb_motohawk_delta_time_dd;
  real_T rtb_motohawk_delta_time_ge;
  real_T rtb_motohawk_delta_time_oz;
  real_T rtb_Sum1_hu;
  real_T rtb_motohawk_delta_time_b3;
  real_T rtb_motohawk_delta_time_lc;
  real_T rtb_Gain;
  real_T rtb_Sum1_a;
  real_T rtb_Sum1_j2;
  real_T rtb_Sum1_cn;
  real_T rtb_motohawk_data_read_i4;
  real_T rtb_UnitDelay1_pd;
  real_T rtb_Merge_b3f;
  real_T rtb_Sum1_ay;
  real_T rtb_UnitDelay1_aa;
  real_T rtb_Merge_ol;
  real_T rtb_Sum1_co;
  real_T rtb_MathFunction;
  real_T rtb_Product_hd;
  real_T rtb_motohawk_data_read2_m;
  real_T rtb_motohawk_data_read1_ka;
  real_T rtb_motohawk_data_read_bv;
  real_T rtb_Sum1_kv;
  real_T rtb_motohawk_data_read_ki;
  real_T rtb_motohawk_data_read1_bz;
  real_T rtb_motohawk_data_read2_h;
  real_T rtb_Sum1_mn;
  real_T rtb_Sum1_mw;
  real_T rtb_motohawk_delta_time_oe;
  real_T rtb_motohawk_delta_time_ds;
  real_T rtb_Saturation_no;
  real_T rtb_motohawk_interpolation_1d3_k;
  real_T rtb_motohawk_interpolation_1d4_c;
  real_T rtb_motohawk_interpolation_1d1_oh;
  real_T rtb_UnitDelay1_c;
  real_T rtb_Merge_ht;
  real_T rtb_Saturation_k2;
  real_T rtb_Saturation_ah;
  real_T rtb_Saturation_m;
  real_T rtb_Saturation_kf;
  real_T rtb_Saturation_b;
  real_T rtb_Saturation_e;
  real_T rtb_motohawk_delta_time_ec;
  real_T rtb_Saturation_l;
  real_T rtb_motohawk_delta_time_i;
  real_T rtb_Saturation_k4;
  real_T rtb_motohawk_interpolation_1d_hr;
  real_T rtb_motohawk_interpolation_1d_n;
  real_T rtb_motohawk_interpolation_2d_h;
  real_T rtb_motohawk_delta_time_l0;
  real_T rtb_Divide_p;
  real_T rtb_motohawk_interpolation_1d_kd;
  real_T rtb_Divide1;
  real_T rtb_motohawk_delta_time_op;
  real_T rtb_motohawk_delta_time_cj;
  real_T rtb_Saturation_d;
  real_T rtb_motohawk_delta_time_p;
  real_T rtb_motohawk_delta_time_eo;
  real_T rtb_MinMax1_d;
  real_T rtb_motohawk_delta_time_id;
  real_T rtb_Sum2_o;
  real_T rtb_motohawk_interpolation_1d2_l;
  real_T rtb_motohawk_interpolation_1d3_l;
  real_T rtb_Product4_k;
  real_T rtb_motohawk_delta_time_a;
  real_T rtb_motohawk_interpolation_2d1_d;
  real_T rtb_motohawk_interpolation_1d2_n;
  real_T rtb_motohawk_interpolation_1d1_e;
  real_T rtb_motohawk_delta_time_l3;
  real_T rtb_MinMax1_di;
  real_T rtb_Saturation_ao;
  real_T rtb_motohawk_interpolation_1d_f;
  real_T rtb_RichEquivRatioSwPtDelta;
  real_T rtb_LeanEquivRatioSwPtDelta;
  real_T rtb_motohawk_interpolation_1d_i;
  real_T rtb_motohawk_interpolation_1d1_o0;
  real_T rtb_motohawk_delta_time_k;
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
  real_T rtb_motohawk_interpolation_2d2;
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
  real_T rtb_WarmUpRatio;
  real_T rtb_motohawk_interpolation_1d_fx;
  real_T rtb_IATEnrichment;
  real_T rtb_CATEnrichment;
  real_T rtb_motohawk_interpolation_2d3;
  real_T rtb_WarmUptimeRatio;
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
  real_T rtb_motohawk_delta_time_hc;
  real_T rtb_motohawk_delta_time_oy;
  real_T rtb_motohawk_delta_time_e0;
  real_T rtb_Add_g1;
  real_T rtb_motohawk_interpolation_1d_kf;
  real_T rtb_motohawk_interpolation_1d_on;
  real_T rtb_motohawk_delta_time_l5;
  real_T rtb_Saturation_p;
  real_T rtb_Saturation_le;
  real_T rtb_motohawk_interpolation_2d_gj;
  real_T rtb_motohawk_interpolation_1d2_d;
  real_T rtb_motohawk_interpolation_1d1_c;
  real_T rtb_motohawk_replicate[8];
  real_T rtb_motohawk_interpolation_1d1_ku;
  real_T rtb_MinMax_gy;
  real_T rtb_Switch_m;
  real_T rtb_Sum2_d;
  real_T rtb_DataTypeConversion_gx;
  real_T rtb_Product_mq;
  real_T rtb_UnitDelay_gh;
  real_T rtb_motohawk_replicate1;
  real_T rtb_DataTypeConversion_c4;
  real_T rtb_motohawk_interpolation_1d3_a;
  real_T rtb_Product5_o;
  real_T rtb_Switch_bn;
  real_T rtb_DataTypeConversion_fq;
  real_T rtb_DataTypeConversion_e;
  real_T rtb_Abs_co;
  real_T rtb_Switch_h;
  uint32_T rtb_DataTypeConversion2_j;
  uint32_T rtb_DataTypeConversion2_e;
  uint32_T rtb_DataTypeConversion3_j;
  uint32_T rtb_DataTypeConversion2_l;
  uint32_T rtb_DataTypeConversion2_i;
  uint32_T rtb_DataTypeConversion2_p;
  uint32_T rtb_DataTypeConversion1_p;
  uint32_T rtb_InjectorSequence_o2[8];
  uint32_T rtb_Sum_hh;
  uint32_T rtb_UnitDelay_lk;
  uint32_T rtb_DataTypeConversion6;
  int16_T rtb_motohawk_data_read_l;
  int16_T rtb_motohawk_data_read1_b3;
  int16_T rtb_DataTypeConversion3_c;
  int16_T rtb_DataTypeConversion3_k;
  int16_T rtb_DataTypeConversion4_m;
  int16_T rtb_DataTypeConversion3_p;
  int16_T rtb_DataTypeConversion3_d;
  int16_T rtb_DataTypeConversion3_e;
  int16_T rtb_DataTypeConversion3_dm;
  int16_T rtb_DataTypeConversion1_i;
  int16_T rtb_DataTypeConversion2_g5;
  int16_T rtb_DataTypeConversion3_g;
  int16_T rtb_DataTypeConversion_d;
  int16_T rtb_DataTypeConversion3_eb;
  int16_T rtb_DataTypeConversion1_f;
  int16_T rtb_DataTypeConversion2_eo;
  int16_T rtb_DataTypeConversion7;
  int16_T rtb_DataTypeConversion2_pj;
  uint16_T rtb_RPMInst;
  uint16_T rtb_motohawk_ain5_i;
  uint16_T rtb_RPM;
  uint16_T rtb_motohawk_ain6;
  uint16_T rtb_motohawk_ain9;
  uint16_T rtb_motohawk_ain1;
  uint16_T rtb_motohawk_ain6_k;
  uint16_T rtb_motohawk_ain_read_o;
  uint16_T rtb_motohawk_encoder_average_rpm;
  uint16_T rtb_motohawk_ain_read_a;
  uint16_T rtb_motohawk_ain_read_g;
  uint16_T rtb_DataTypeConversion2_o;
  uint16_T rtb_DataTypeConversion2_jn;
  uint16_T rtb_DataTypeConversion2_n;
  uint16_T rtb_DataTypeConversion2_k;
  uint16_T rtb_DataTypeConversion2_p2;
  uint16_T rtb_DataTypeConversion2_h;
  uint16_T rtb_DataTypeConversion2_hr;
  uint16_T rtb_DataTypeConversion2_d;
  uint16_T rtb_DataTypeConversion_iq;
  uint16_T rtb_motohawk_interpolation_1d_n0;
  uint16_T rtb_Product_mp;
  index_T rtb_motohawk_prelookup_aq;
  index_T rtb_motohawk_prelookup_he;
  index_T rtb_motohawk_prelookup2;
  index_T rtb_motohawk_prelookup_n;
  index_T rtb_motohawk_prelookup1_k;
  index_T rtb_motohawk_prelookup1_h;
  index_T rtb_motohawk_prelookup_m;
  index_T rtb_motohawk_prelookup_i;
  index_T rtb_motohawk_prelookup_e;
  index_T rtb_motohawk_prelookup2_c;
  index_T rtb_motohawk_prelookup1_c;
  index_T rtb_motohawk_prelookup2_b;
  index_T rtb_motohawk_prelookup_k;
  index_T rtb_motohawk_prelookup_o;
  index_T rtb_motohawk_prelookup_j;
  index_T rtb_TimeSinceRun09;
  index_T rtb_motohawk_prelookup1_d;
  index_T rtb_motohawk_prelookup_gv;
  index_T rtb_motohawk_prelookup_col;
  index_T rtb_motohawk_prelookup_row;
  index_T rtb_motohawk_prelookup_jn;
  index_T rtb_motohawk_prelookup_kl;
  index_T rtb_motohawk_prelookup_nn;
  index_T rtb_motohawk_prelookup_br;
  index_T rtb_motohawk_prelookup_f;
  index_T rtb_motohawk_prelookup_p;
  index_T rtb_motohawk_prelookup1_n;
  index_T rtb_motohawk_prelookup_brx;
  index_T rtb_ITermIdx;
  index_T rtb_motohawk_prelookup_hf;
  index_T rtb_motohawk_prelookup_ag;
  index_T rtb_motohawk_prelookup1_jq;
  index_T rtb_motohawk_prelookup3;
  index_T rtb_motohawk_prelookup_col_d;
  index_T rtb_motohawk_prelookup_row_o;
  index_T rtb_motohawk_prelookup_col_e;
  index_T rtb_motohawk_prelookup_row_h;
  index_T rtb_motohawk_prelookup_col_o;
  index_T rtb_motohawk_prelookup_row_a;
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
  uint8_T rtb_Compare_b;
  uint8_T rtb_Compare_d;
  uint8_T rtb_Compare_g;
  uint8_T rtb_motohawk_interpolation_1d_kl;
  uint8_T rtb_motohawk_interpolation_1d_l;
  uint8_T rtb_motohawk_interpolation_1d_lt;
  uint8_T rtb_DataTypeConversion4_k;
  uint8_T rtb_motohawk_interpolation_2d_o2;
  uint8_T rtb_motohawk_interpolation_2d_n;
  uint8_T rtb_motohawk_interpolation_2d_a;
  boolean_T rtb_Logic_j[2];
  boolean_T rtb_RelOp_hf;
  boolean_T rtb_motohawk_data_read2_l;
  boolean_T rtb_motohawk_fault_action_o;
  boolean_T rtb_motohawk_fault_action1_a;
  boolean_T rtb_motohawk_fault_status2_f2;
  boolean_T rtb_motohawk_fault_status1_i;
  boolean_T rtb_motohawk_fault_action1_o;
  boolean_T rtb_motohawk_fault_action2;
  boolean_T rtb_motohawk_fault_action3;
  boolean_T rtb_motohawk_fault_status3_g;
  boolean_T rtb_motohawk_fault_status4_gd3;
  boolean_T rtb_motohawk_fault_status9;
  boolean_T rtb_LogicalOperator3_m;
  boolean_T rtb_LogicalOperator1_d1;
  boolean_T rtb_LogicalOperator2_p1;
  boolean_T rtb_LogicalOperator4_c;
  boolean_T rtb_LogicalOperator5_g;
  boolean_T rtb_motohawk_data_read1_pg;
  boolean_T rtb_motohawk_fault_status12;
  boolean_T rtb_LogicalOperator_bi;
  boolean_T rtb_LogicalOperator1_jx;
  boolean_T rtb_LogicalOperator2_ps;
  boolean_T rtb_LogicalOperator3_n;
  boolean_T rtb_LogicalOperator4_n;
  boolean_T rtb_LogicalOperator5_cx;
  boolean_T rtb_RelationalOperator5;
  boolean_T rtb_RelationalOperator_jv;
  boolean_T rtb_RelationalOperator3_h;
  boolean_T rtb_RelationalOperator3_or;
  boolean_T rtb_LogicalOperator_ay;
  boolean_T rtb_LogicalOperator_f0;
  boolean_T rtb_LogicalOperator1_a5;
  boolean_T rtb_LogicalOperator2_n;
  boolean_T rtb_LogicalOperator3_hv;
  boolean_T rtb_LogicalOperator2_b;
  boolean_T rtb_LogicalOperator3_o;
  boolean_T rtb_LogicalOperator2_p5;
  boolean_T rtb_LogicalOperator3_k;
  boolean_T rtb_LogicalOperator2_m;
  boolean_T rtb_LogicalOperator3_jn;
  boolean_T rtb_RelationalOperator_l;
  boolean_T rtb_LogicalOperator_f0c;
  boolean_T rtb_LogicalOperator1_dw;
  boolean_T rtb_LogicalOperator2_g;
  boolean_T rtb_LogicalOperator3_nz;
  boolean_T rtb_LogicalOperator2_kx;
  boolean_T rtb_LogicalOperator3_mz;
  boolean_T rtb_LogicalOperator2_j;
  boolean_T rtb_LogicalOperator3_ij;
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
  boolean_T rtb_LogicalOperator2_bm;
  boolean_T rtb_LogicalOperator3_g;
  boolean_T rtb_LogicalOperator2_ob;
  boolean_T rtb_LogicalOperator3_in;
  boolean_T rtb_LogicalOperator2_il;
  boolean_T rtb_LogicalOperator3_dk;
  boolean_T rtb_RelationalOperator5_l;
  boolean_T rtb_RelationalOperator4_bl;
  boolean_T rtb_RelationalOperator_c1;
  boolean_T rtb_RelationalOperator3_p4;
  boolean_T rtb_RelationalOperator2_k2;
  boolean_T rtb_RelationalOperator1_n;
  boolean_T rtb_RelationalOperator5_a;
  boolean_T rtb_RelationalOperator4_d;
  boolean_T rtb_RelationalOperator_f;
  boolean_T rtb_RelationalOperator3_n3;
  boolean_T rtb_RelationalOperator2_ma;
  boolean_T rtb_RelationalOperator1_gr;
  boolean_T rtb_RelationalOperator5_k;
  boolean_T rtb_RelationalOperator4_p;
  boolean_T rtb_RelationalOperator_cz;
  boolean_T rtb_RelationalOperator3_kn;
  boolean_T rtb_RelationalOperator2_id;
  boolean_T rtb_RelationalOperator1_px;
  boolean_T rtb_RelationalOperator5_g;
  boolean_T rtb_RelationalOperator4_d1;
  boolean_T rtb_RelationalOperator_fa;
  boolean_T rtb_RelationalOperator3_jk;
  boolean_T rtb_RelationalOperator2_or;
  boolean_T rtb_RelationalOperator1_d;
  boolean_T rtb_RelationalOperator1_cf;
  boolean_T rtb_RelationalOperator2_cd;
  boolean_T rtb_LogicalOperator_ct;
  boolean_T rtb_LogicalOperator1_o;
  boolean_T rtb_LogicalOperator_bx;
  boolean_T rtb_LogicalOperator1_joj;
  boolean_T rtb_LogicalOperator2_bv;
  boolean_T rtb_LogicalOperator4_l;
  boolean_T rtb_LogicalOperator4_k;
  boolean_T rtb_LogicalOperator2_ip;
  boolean_T rtb_LogicalOperator5_oa;
  boolean_T rtb_LogicalOperator4_j;
  boolean_T rtb_LogicalOperator2_o4;
  boolean_T rtb_LogicalOperator2_ie;
  boolean_T rtb_LogicalOperator4_jz;
  boolean_T rtb_LogicalOperator4_mv;
  boolean_T rtb_LogicalOperator_g5;
  boolean_T rtb_LogicalOperator_mr;
  boolean_T rtb_RelationalOperator2_bw;
  boolean_T rtb_LogicalOperator_kz;
  boolean_T rtb_Switch1_n1;
  boolean_T rtb_Switch1_k;
  boolean_T rtb_Switch1_eq;
  boolean_T rtb_Switch1_em;
  boolean_T rtb_Switch1_l4;
  boolean_T rtb_Switch1_mo;
  boolean_T rtb_LT3;
  boolean_T rtb_LT2;
  boolean_T rtb_LT4;
  boolean_T rtb_RelationalOperator2_pk;
  boolean_T rtb_RelationalOperator1_nn;
  boolean_T rtb_LogicalOperator_np;
  boolean_T rtb_LogicalOperator_di;
  boolean_T rtb_RelationalOperator1_hq;
  boolean_T rtb_motohawk_data_read1_kw;
  boolean_T rtb_motohawk_data_read1_iz;
  boolean_T rtb_motohawk_fault_action_b;
  boolean_T rtb_AboveRich;
  boolean_T rtb_CombinatorialLogic[2];
  boolean_T rtb_BelowLoTarget;
  boolean_T rtb_CombinatorialLogic_d[2];
  boolean_T rtb_AND1[8];
  boolean_T rtb_LogicalOperator_iy;
  boolean_T rtb_LogicalOperator2_ig;
  boolean_T rtb_AboveHiTarget;
  boolean_T rtb_CombinatorialLogic_da[2];
  boolean_T rtb_RelationalOperator2_py;
  boolean_T rtb_Switch_oh;
  boolean_T rtb_BelowLoTarget_b;
  boolean_T rtb_CombinatorialLogic_l[2];
  boolean_T rtb_motohawk_data_read13;
  boolean_T rtb_BelowLoTarget_j;
  boolean_T rtb_LogicalOperator3_cj;
  boolean_T rtb_RelationalOperator8_o;
  boolean_T rtb_LogicalOperator2_l;
  boolean_T rtb_RelOp_mp;
  boolean_T rtb_LogicalOperator1_cv;
  boolean_T rtb_RelationalOperator6_h;
  boolean_T rtb_CombinatorialLogic_c[2];
  boolean_T rtb_RelationalOperator5_fz;
  real_T minV;
  real_T minV_0;
  int32_T maxV;
  boolean_T rtb_LogicalOperator6_b;
  boolean_T rtb_LogicalOperator1_al;
  real_T rtb_DataTypeConversion1_e;
  boolean_T rtb_RelOp_pu;
  real_T rtb_DataTypeConversion_ik;
  real_T rtb_UnitDelay_n;
  real_T rtb_UnitDelay1_h;
  real_T rtb_Sum2_gr;
  real_T rtb_Sum1_mz;
  boolean_T rtb_Merge_n2;
  real_T rtb_Switch_f;
  real_T rtb_Merge_b3;
  boolean_T rtb_RelOp_d;
  boolean_T rtb_RelationalOperator_h;
  boolean_T rtb_LogicalOperator_c;
  real_T rtb_Sum1_p;
  real_T rtb_UnitDelay1_ad;
  real_T rtb_UnitDelay3_m;
  real_T rtb_UnitDelay4_b;
  real_T rtb_UnitDelay1_pn;
  real_T rtb_UnitDelay3_p;
  real_T rtb_UnitDelay4_a;
  real_T rtb_DataTypeConversion_m0;
  real_T rtb_Abs_k;
  real_T rtb_Merge_da;
  real_T rtb_Merge_a5;
  real_T rtb_Merge_ie;
  real_T rtb_Merge_ho;
  real_T rtb_Merge_ab;
  real_T rtb_Merge_gg;
  real_T rtb_Merge_db;
  real_T rtb_Merge_fp;
  real_T rtb_Merge_bv[8];
  real_T rtb_Product2_aa[8];
  boolean_T rtb_LogicalOperator1_aj[8];
  real_T rtb_UnitDelay1_k;
  real_T rtb_UnitDelay3_j;
  real_T rtb_UnitDelay4_ie;
  real_T rtb_APP2;
  boolean_T rtb_Merge_iz;
  boolean_T rtb_Merge_oq;
  real_T rtb_UnitDelay4_b3;
  real_T rtb_Sum1_nb;
  real_T rtb_Sum1_m;
  real_T rtb_Sum1_li;
  real_T rtb_Sum1_g3;
  real_T rtb_Sum1_ir;
  real_T rtb_Sum1_du;
  real_T rtb_Sum1_nl;
  real_T rtb_Sum1_d4;
  real_T rtb_Sum1_fm;
  real_T rtb_Sum1_mzy;
  real_T rtb_Sum1_c;
  real_T rtb_Sum1_lm;
  real_T rtb_Sum1_cs;
  real_T rtb_Sum1_o;
  uint32_T rtb_Switch_kj;
  real_T rtb_Sum1_m3;
  uint8_T rtb_Switch_om;
  uint8_T rtb_Product_ln;
  uint8_T rtb_Product6_m;
  uint8_T rtb_Product5_j;
  uint8_T rtb_Switch2_a;
  uint8_T rtb_Product4_i;
  real_T rtb_Switch_mq;
  boolean_T rtb_RelationalOperator3_bp;
  uint16_T rtb_Product2_o;
  int8_T rtb_Add_k;
  int8_T rtb_Sum_l3;
  real_T rtb_Switch_k;
  int8_T rtb_Switch_d4[32];
  real_T rtb_DataTypeConversion_b2;
  real_T rtb_Switch_c;
  real_T rtb_Product4_o;
  real_T rtb_Multiplyby10ifnotyetenabled;
  boolean_T rtb_Switch1_mj;
  int16_T rtb_DataTypeConversion_ol;
  int16_T rtb_Sum2_lt;
  int16_T rtb_Sum4_e;
  int16_T rtb_Switch2_m;
  int16_T rtb_Sum2_b5;
  boolean_T rtb_Switch1_o;
  boolean_T rtb_Switch1_l3;
  boolean_T rtb_Switch1_bv;
  boolean_T rtb_Switch1_l;
  int32_T i;
  real_T rtb_DesiredLambda_idx;
  real_T rtb_DesiredLambda_idx_0;
  real_T rtb_DesiredLambda_idx_1;
  real_T y;

  /* S-Function (motohawk_sfun_trigger): '<S445>/motohawk_trigger' */
  /* Enable for Trigger_FGND_5XRTI_PERIODIC_5522p0011 */
  if (BaseEngineController_LS_DWork.s445_motohawk_trigger_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s445_motohawk_trigger_DWORK1 = 1;
  }

  /* Logic: '<S751>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S751>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S751>/motohawk_fault_status4'
   */
  rtb_LogicalOperator1_cv = (IsFaultActive(12) || IsFaultActive(13));

  /* Logic: '<S751>/Logical Operator6' */
  rtb_LogicalOperator6_b = !rtb_LogicalOperator1_cv;

  /* Logic: '<S751>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S751>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S751>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_al = (IsFaultSuspected(12) || IsFaultSuspected(13));

  /* S-Function Block: <S446>/motohawk_ain2 Resource: APP2AnalogInput */
  {
    extern NativeError_S APP2AnalogInput_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    APP2AnalogInput_AnalogInput_Get
      (&BaseEngineController_LS_B.s446_motohawk_ain2, NULL);
  }

  /* DataTypeConversion: '<S751>/Data Type Conversion' */
  rtb_DataTypeConversion_fc = (real_T)
    BaseEngineController_LS_B.s446_motohawk_ain2;

  /* S-Function Block: <S775>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (APP2Idx_DataStore()) = TablePrelookup_real_T(rtb_DataTypeConversion_fc,
      (APP2IdxArr_DataStore()), 9, (APP2Idx_DataStore()));
    rtb_motohawk_prelookup_aq = (APP2Idx_DataStore());
  }

  /* S-Function Block: <S775>/motohawk_interpolation_1d */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    BaseEngineController_LS_B.s775_motohawk_interpolation_1d =
      TableInterpolation1D_real_T(rtb_motohawk_prelookup_aq, (real_T *)
      ((APP2Tbl_DataStore())), 9);
  }

  /* UnitDelay: '<S751>/Unit Delay' */
  rtb_UnitDelay_jb = BaseEngineController_LS_DWork.s751_UnitDelay_DSTATE;

  /* If: '<S751>/If' incorporates:
   *  Logic: '<S751>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_b && rtb_LogicalOperator1_al) {
    /* Outputs for IfAction SubSystem: '<S751>/If Action Subsystem' incorporates:
     *  ActionPort: '<S770>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay_jb, &rtb_Merge_c);

    /* End of Outputs for SubSystem: '<S751>/If Action Subsystem' */
  } else if (rtb_LogicalOperator1_cv) {
    /* Outputs for IfAction SubSystem: '<S751>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S771>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((APP2Default_DataStore()),
      &rtb_Merge_c);

    /* End of Outputs for SubSystem: '<S751>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S751>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S772>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      (BaseEngineController_LS_B.s775_motohawk_interpolation_1d, &rtb_Merge_c);

    /* End of Outputs for SubSystem: '<S751>/If Action Subsystem2' */
  }

  /* End of If: '<S751>/If' */

  /* MinMax: '<S774>/MinMax' incorporates:
   *  Constant: '<S751>/Constant1'
   */
  rtb_DataTypeConversion_e = rtb_Merge_c >= 0.0 ? rtb_Merge_c : 0.0;

  /* MinMax: '<S774>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S751>/motohawk_calibration2'
   */
  minV = (rtb_DataTypeConversion_e <= (APP2MaxLimit_DataStore())) || rtIsNaN
    ((APP2MaxLimit_DataStore())) ? rtb_DataTypeConversion_e :
    (APP2MaxLimit_DataStore());

  /* S-Function Block: <S769>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s769_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_e = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S769>/Product' incorporates:
   *  MinMax: '<S769>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S769>/motohawk_calibration'
   */
  rtb_DataTypeConversion_e /= (rtb_DataTypeConversion_e >=
    (APP2FiltConst_DataStore())) || rtIsNaN((APP2FiltConst_DataStore())) ?
    rtb_DataTypeConversion_e : (APP2FiltConst_DataStore());

  /* Sum: '<S776>/Sum1' incorporates:
   *  Constant: '<S776>/Constant'
   *  MinMax: '<S774>/MinMax1'
   *  Product: '<S776>/Product'
   *  Product: '<S776>/Product1'
   *  Sum: '<S776>/Sum'
   *  UnitDelay: '<S776>/Unit Delay'
   */
  rtb_Sum1_nb = (1.0 - rtb_DataTypeConversion_e) *
    BaseEngineController_LS_DWork.s776_UnitDelay_DSTATE + minV *
    rtb_DataTypeConversion_e;

  /* If: '<S773>/If' incorporates:
   *  Inport: '<S777>/In1'
   *  Inport: '<S778>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S773>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S773>/override_enable'
   */
  if ((APP2_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S773>/NewValue' incorporates:
     *  ActionPort: '<S777>/Action Port'
     */
    BaseEngineController_LS_B.s773_Merge = (APP2_new_DataStore());

    /* End of Outputs for SubSystem: '<S773>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S773>/OldValue' incorporates:
     *  ActionPort: '<S778>/Action Port'
     */
    BaseEngineController_LS_B.s773_Merge = rtb_Sum1_nb;

    /* End of Outputs for SubSystem: '<S773>/OldValue' */
  }

  /* End of If: '<S773>/If' */

  /* Logic: '<S801>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S801>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S801>/motohawk_fault_status4'
   */
  rtb_LogicalOperator1_cv = (IsFaultActive(18) || IsFaultActive(19));

  /* Logic: '<S801>/Logical Operator6' */
  rtb_LogicalOperator6_b = !rtb_LogicalOperator1_cv;

  /* Logic: '<S801>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S801>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S801>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_al = (IsFaultSuspected(18) || IsFaultSuspected(19));

  /* DataTypeConversion: '<S754>/Data Type Conversion1' */
  rtb_DataTypeConversion1_e = (real_T)
    BaseEngineController_LS_B.s446_motohawk_ain2;

  /* Switch: '<S754>/Switch' incorporates:
   *  Fcn: '<S754>/Fcn'
   *  S-Function (motohawk_sfun_calibration): '<S754>/motohawk_calibration2'
   */
  if ((APP2_AdaptRev_Polarity_DataStore())) {
    BaseEngineController_LS_B.s754_Switch = 1023.0 - rtb_DataTypeConversion1_e;
  } else {
    BaseEngineController_LS_B.s754_Switch = rtb_DataTypeConversion1_e;
  }

  /* End of Switch: '<S754>/Switch' */

  /* S-Function (motohawk_sfun_data_read): '<S798>/motohawk_data_read' */
  rtb_DataTypeConversion_iq = APP2_AdaptRaw_Adpt_Low_DataStore();

  /* MinMax: '<S798>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S754>/motohawk_calibration9'
   */
  rtb_UnitDelay4_b3 = (real_T)rtb_DataTypeConversion_iq;
  BaseEngineController_LS_B.s798_MinMax = (rtb_UnitDelay4_b3 <=
    (APP2_AdaptAdapt_Low_Max_DataStore())) || rtIsNaN
    ((APP2_AdaptAdapt_Low_Max_DataStore())) ? rtb_UnitDelay4_b3 :
    (APP2_AdaptAdapt_Low_Max_DataStore());

  /* Sum: '<S754>/Sum2' */
  rtb_DataTypeConversion1_e = BaseEngineController_LS_B.s754_Switch -
    BaseEngineController_LS_B.s798_MinMax;

  /* S-Function (motohawk_sfun_data_read): '<S798>/motohawk_data_read1' */
  rtb_DataTypeConversion_iq = APP2_AdaptRaw_Adpt_Hi_DataStore();

  /* MinMax: '<S798>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S754>/motohawk_calibration11'
   */
  rtb_UnitDelay4_b3 = (real_T)rtb_DataTypeConversion_iq;
  BaseEngineController_LS_B.s798_MinMax1 = (rtb_UnitDelay4_b3 >=
    (APP2_AdaptAdapt_Hi_Min_DataStore())) || rtIsNaN
    ((APP2_AdaptAdapt_Hi_Min_DataStore())) ? rtb_UnitDelay4_b3 :
    (APP2_AdaptAdapt_Hi_Min_DataStore());

  /* Gain: '<S754>/Gain2' incorporates:
   *  Product: '<S754>/Product1'
   *  Sum: '<S754>/Sum1'
   */
  rtb_DataTypeConversion_e = rtb_DataTypeConversion1_e /
    (BaseEngineController_LS_B.s798_MinMax1 -
     BaseEngineController_LS_B.s798_MinMax) * 100.0;

  /* MinMax: '<S802>/MinMax' incorporates:
   *  Constant: '<S754>/Constant1'
   */
  rtb_DataTypeConversion_e = rtb_DataTypeConversion_e >= 0.0 ?
    rtb_DataTypeConversion_e : 0.0;

  /* MinMax: '<S802>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S754>/motohawk_calibration1'
   */
  BaseEngineController_LS_B.s802_MinMax1 = (rtb_DataTypeConversion_e <=
    (APP2_AdaptMaxLimit_DataStore())) || rtIsNaN((APP2_AdaptMaxLimit_DataStore()))
    ? rtb_DataTypeConversion_e : (APP2_AdaptMaxLimit_DataStore());

  /* S-Function Block: <S800>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s800_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_e = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S800>/Product' incorporates:
   *  MinMax: '<S800>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S800>/motohawk_calibration'
   */
  rtb_DataTypeConversion_e /= (rtb_DataTypeConversion_e >=
    (APP2_AdaptFilterConst_DataStore())) || rtIsNaN
    ((APP2_AdaptFilterConst_DataStore())) ? rtb_DataTypeConversion_e :
    (APP2_AdaptFilterConst_DataStore());

  /* Sum: '<S808>/Sum1' incorporates:
   *  Constant: '<S808>/Constant'
   *  Product: '<S808>/Product'
   *  Product: '<S808>/Product1'
   *  Sum: '<S808>/Sum'
   *  UnitDelay: '<S808>/Unit Delay'
   */
  rtb_Sum1_b4 = (1.0 - rtb_DataTypeConversion_e) *
    BaseEngineController_LS_DWork.s808_UnitDelay_DSTATE +
    BaseEngineController_LS_B.s802_MinMax1 * rtb_DataTypeConversion_e;

  /* UnitDelay: '<S801>/Unit Delay1' */
  rtb_UnitDelay1_ok = BaseEngineController_LS_DWork.s801_UnitDelay1_DSTATE;

  /* If: '<S801>/If' incorporates:
   *  Logic: '<S801>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_b && rtb_LogicalOperator1_al) {
    /* Outputs for IfAction SubSystem: '<S801>/If Action Subsystem' incorporates:
     *  ActionPort: '<S809>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay1_ok, &rtb_Merge_m);

    /* End of Outputs for SubSystem: '<S801>/If Action Subsystem' */
  } else if (rtb_LogicalOperator1_cv) {
    /* Outputs for IfAction SubSystem: '<S801>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S810>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((APP2_AdaptDfltValue_DataStore()),
      &rtb_Merge_m);

    /* End of Outputs for SubSystem: '<S801>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S801>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S811>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_Sum1_b4, &rtb_Merge_m);

    /* End of Outputs for SubSystem: '<S801>/If Action Subsystem2' */
  }

  /* End of If: '<S801>/If' */

  /* If: '<S812>/If' incorporates:
   *  Inport: '<S813>/In1'
   *  Inport: '<S814>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S812>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S812>/override_enable'
   */
  if ((APP2_Adapt_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S812>/NewValue' incorporates:
     *  ActionPort: '<S813>/Action Port'
     */
    BaseEngineController_LS_B.s812_Merge = (APP2_Adapt_new_DataStore());

    /* End of Outputs for SubSystem: '<S812>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S812>/OldValue' incorporates:
     *  ActionPort: '<S814>/Action Port'
     */
    BaseEngineController_LS_B.s812_Merge = rtb_Merge_m;

    /* End of Outputs for SubSystem: '<S812>/OldValue' */
  }

  /* End of If: '<S812>/If' */

  /* Switch: '<S446>/Switch1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S446>/motohawk_calibration'
   */
  if ((APP_AdaptMode_DataStore())) {
    rtb_APP2 = BaseEngineController_LS_B.s812_Merge;
  } else {
    rtb_APP2 = BaseEngineController_LS_B.s773_Merge;
  }

  /* End of Switch: '<S446>/Switch1' */
  /* Logic: '<S749>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S749>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S749>/motohawk_fault_status4'
   */
  rtb_LogicalOperator1_cv = (IsFaultActive(4) || IsFaultActive(5));

  /* Logic: '<S749>/Logical Operator6' */
  rtb_LogicalOperator6_b = !rtb_LogicalOperator1_cv;

  /* Logic: '<S749>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S749>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S749>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_al = (IsFaultSuspected(4) || IsFaultSuspected(5));

  /* S-Function Block: <S446>/motohawk_ain1 Resource: APP1AnalogInput */
  {
    extern NativeError_S APP1AnalogInput_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    APP1AnalogInput_AnalogInput_Get
      (&BaseEngineController_LS_B.s446_motohawk_ain1, NULL);
  }

  /* DataTypeConversion: '<S749>/Data Type Conversion' */
  rtb_DataTypeConversion_hd = (real_T)
    BaseEngineController_LS_B.s446_motohawk_ain1;

  /* S-Function Block: <S763>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (APP1Idx_DataStore()) = TablePrelookup_real_T(rtb_DataTypeConversion_hd,
      (APP1IdxArr_DataStore()), 9, (APP1Idx_DataStore()));
    rtb_motohawk_prelookup_he = (APP1Idx_DataStore());
  }

  /* S-Function Block: <S763>/motohawk_interpolation_1d */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    BaseEngineController_LS_B.s763_motohawk_interpolation_1d =
      TableInterpolation1D_real_T(rtb_motohawk_prelookup_he, (real_T *)
      ((APP1Tbl_DataStore())), 9);
  }

  /* UnitDelay: '<S749>/Unit Delay' */
  rtb_UnitDelay_m = BaseEngineController_LS_DWork.s749_UnitDelay_DSTATE;

  /* If: '<S749>/If' incorporates:
   *  Logic: '<S749>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_b && rtb_LogicalOperator1_al) {
    /* Outputs for IfAction SubSystem: '<S749>/If Action Subsystem' incorporates:
     *  ActionPort: '<S758>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay_m, &rtb_Merge_o);

    /* End of Outputs for SubSystem: '<S749>/If Action Subsystem' */
  } else if (rtb_LogicalOperator1_cv) {
    /* Outputs for IfAction SubSystem: '<S749>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S759>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((APP1Default_DataStore()),
      &rtb_Merge_o);

    /* End of Outputs for SubSystem: '<S749>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S749>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S760>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      (BaseEngineController_LS_B.s763_motohawk_interpolation_1d, &rtb_Merge_o);

    /* End of Outputs for SubSystem: '<S749>/If Action Subsystem2' */
  }

  /* End of If: '<S749>/If' */

  /* MinMax: '<S762>/MinMax' incorporates:
   *  Constant: '<S749>/Constant1'
   */
  rtb_DataTypeConversion_e = rtb_Merge_o >= 0.0 ? rtb_Merge_o : 0.0;

  /* MinMax: '<S762>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S749>/motohawk_calibration2'
   */
  minV_0 = (rtb_DataTypeConversion_e <= (APP1MaxLimit_DataStore())) || rtIsNaN
    ((APP1MaxLimit_DataStore())) ? rtb_DataTypeConversion_e :
    (APP1MaxLimit_DataStore());

  /* S-Function Block: <S757>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s757_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_e = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S757>/Product' incorporates:
   *  MinMax: '<S757>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S757>/motohawk_calibration'
   */
  rtb_DataTypeConversion_e /= (rtb_DataTypeConversion_e >=
    (APP1FiltConst_DataStore())) || rtIsNaN((APP1FiltConst_DataStore())) ?
    rtb_DataTypeConversion_e : (APP1FiltConst_DataStore());

  /* Sum: '<S764>/Sum1' incorporates:
   *  Constant: '<S764>/Constant'
   *  MinMax: '<S762>/MinMax1'
   *  Product: '<S764>/Product'
   *  Product: '<S764>/Product1'
   *  Sum: '<S764>/Sum'
   *  UnitDelay: '<S764>/Unit Delay'
   */
  rtb_Sum1_m = (1.0 - rtb_DataTypeConversion_e) *
    BaseEngineController_LS_DWork.s764_UnitDelay_DSTATE + minV_0 *
    rtb_DataTypeConversion_e;

  /* If: '<S761>/If' incorporates:
   *  Inport: '<S765>/In1'
   *  Inport: '<S766>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S761>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S761>/override_enable'
   */
  if ((APP1_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S761>/NewValue' incorporates:
     *  ActionPort: '<S765>/Action Port'
     */
    BaseEngineController_LS_B.s761_Merge = (APP1_new_DataStore());

    /* End of Outputs for SubSystem: '<S761>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S761>/OldValue' incorporates:
     *  ActionPort: '<S766>/Action Port'
     */
    BaseEngineController_LS_B.s761_Merge = rtb_Sum1_m;

    /* End of Outputs for SubSystem: '<S761>/OldValue' */
  }

  /* End of If: '<S761>/If' */

  /* Logic: '<S784>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S784>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S784>/motohawk_fault_status4'
   */
  rtb_LogicalOperator1_cv = (IsFaultActive(10) || IsFaultActive(11));

  /* Logic: '<S784>/Logical Operator6' */
  rtb_LogicalOperator6_b = !rtb_LogicalOperator1_cv;

  /* Logic: '<S784>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S784>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S784>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_al = (IsFaultSuspected(10) || IsFaultSuspected(11));

  /* DataTypeConversion: '<S753>/Data Type Conversion1' */
  rtb_DataTypeConversion1_e = (real_T)
    BaseEngineController_LS_B.s446_motohawk_ain1;

  /* Switch: '<S753>/Switch' incorporates:
   *  Fcn: '<S753>/Fcn'
   *  S-Function (motohawk_sfun_calibration): '<S753>/motohawk_calibration2'
   */
  if ((APP1_AdaptRev_Polarity_DataStore())) {
    BaseEngineController_LS_B.s753_Switch = 1023.0 - rtb_DataTypeConversion1_e;
  } else {
    BaseEngineController_LS_B.s753_Switch = rtb_DataTypeConversion1_e;
  }

  /* End of Switch: '<S753>/Switch' */

  /* S-Function (motohawk_sfun_data_read): '<S781>/motohawk_data_read' */
  rtb_DataTypeConversion_iq = APP1_AdaptRaw_Adpt_Low_DataStore();

  /* MinMax: '<S781>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S753>/motohawk_calibration9'
   */
  rtb_UnitDelay4_b3 = (real_T)rtb_DataTypeConversion_iq;
  BaseEngineController_LS_B.s781_MinMax = (rtb_UnitDelay4_b3 <=
    (APP1_AdaptAdapt_Low_Max_DataStore())) || rtIsNaN
    ((APP1_AdaptAdapt_Low_Max_DataStore())) ? rtb_UnitDelay4_b3 :
    (APP1_AdaptAdapt_Low_Max_DataStore());

  /* Sum: '<S753>/Sum2' */
  rtb_DataTypeConversion1_e = BaseEngineController_LS_B.s753_Switch -
    BaseEngineController_LS_B.s781_MinMax;

  /* S-Function (motohawk_sfun_data_read): '<S781>/motohawk_data_read1' */
  rtb_DataTypeConversion_iq = APP1_AdaptRaw_Adpt_Hi_DataStore();

  /* MinMax: '<S781>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S753>/motohawk_calibration11'
   */
  rtb_UnitDelay4_b3 = (real_T)rtb_DataTypeConversion_iq;
  BaseEngineController_LS_B.s781_MinMax1 = (rtb_UnitDelay4_b3 >=
    (APP1_AdaptAdapt_Hi_Min_DataStore())) || rtIsNaN
    ((APP1_AdaptAdapt_Hi_Min_DataStore())) ? rtb_UnitDelay4_b3 :
    (APP1_AdaptAdapt_Hi_Min_DataStore());

  /* Gain: '<S753>/Gain2' incorporates:
   *  Product: '<S753>/Product1'
   *  Sum: '<S753>/Sum1'
   */
  rtb_DataTypeConversion_e = rtb_DataTypeConversion1_e /
    (BaseEngineController_LS_B.s781_MinMax1 -
     BaseEngineController_LS_B.s781_MinMax) * 100.0;

  /* MinMax: '<S785>/MinMax' incorporates:
   *  Constant: '<S753>/Constant1'
   */
  rtb_DataTypeConversion_e = rtb_DataTypeConversion_e >= 0.0 ?
    rtb_DataTypeConversion_e : 0.0;

  /* MinMax: '<S785>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S753>/motohawk_calibration1'
   */
  BaseEngineController_LS_B.s785_MinMax1 = (rtb_DataTypeConversion_e <=
    (APP1_AdaptMaxLimit_DataStore())) || rtIsNaN((APP1_AdaptMaxLimit_DataStore()))
    ? rtb_DataTypeConversion_e : (APP1_AdaptMaxLimit_DataStore());

  /* S-Function Block: <S783>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s783_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_e = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S783>/Product' incorporates:
   *  MinMax: '<S783>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S783>/motohawk_calibration'
   */
  rtb_DataTypeConversion_e /= (rtb_DataTypeConversion_e >=
    (APP1_AdaptFilterConst_DataStore())) || rtIsNaN
    ((APP1_AdaptFilterConst_DataStore())) ? rtb_DataTypeConversion_e :
    (APP1_AdaptFilterConst_DataStore());

  /* Sum: '<S791>/Sum1' incorporates:
   *  Constant: '<S791>/Constant'
   *  Product: '<S791>/Product'
   *  Product: '<S791>/Product1'
   *  Sum: '<S791>/Sum'
   *  UnitDelay: '<S791>/Unit Delay'
   */
  rtb_Sum1_h1 = (1.0 - rtb_DataTypeConversion_e) *
    BaseEngineController_LS_DWork.s791_UnitDelay_DSTATE +
    BaseEngineController_LS_B.s785_MinMax1 * rtb_DataTypeConversion_e;

  /* UnitDelay: '<S784>/Unit Delay1' */
  rtb_UnitDelay1_e = BaseEngineController_LS_DWork.s784_UnitDelay1_DSTATE;

  /* If: '<S784>/If' incorporates:
   *  Logic: '<S784>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_b && rtb_LogicalOperator1_al) {
    /* Outputs for IfAction SubSystem: '<S784>/If Action Subsystem' incorporates:
     *  ActionPort: '<S792>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay1_e, &rtb_Merge_ao);

    /* End of Outputs for SubSystem: '<S784>/If Action Subsystem' */
  } else if (rtb_LogicalOperator1_cv) {
    /* Outputs for IfAction SubSystem: '<S784>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S793>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((APP1_AdaptDfltValue_DataStore()),
      &rtb_Merge_ao);

    /* End of Outputs for SubSystem: '<S784>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S784>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S794>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_Sum1_h1, &rtb_Merge_ao);

    /* End of Outputs for SubSystem: '<S784>/If Action Subsystem2' */
  }

  /* End of If: '<S784>/If' */

  /* If: '<S795>/If' incorporates:
   *  Inport: '<S796>/In1'
   *  Inport: '<S797>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S795>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S795>/override_enable'
   */
  if ((APP1_Adapt_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S795>/NewValue' incorporates:
     *  ActionPort: '<S796>/Action Port'
     */
    BaseEngineController_LS_B.s795_Merge = (APP1_Adapt_new_DataStore());

    /* End of Outputs for SubSystem: '<S795>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S795>/OldValue' incorporates:
     *  ActionPort: '<S797>/Action Port'
     */
    BaseEngineController_LS_B.s795_Merge = rtb_Merge_ao;

    /* End of Outputs for SubSystem: '<S795>/OldValue' */
  }

  /* End of If: '<S795>/If' */

  /* Switch: '<S446>/Switch' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S446>/motohawk_calibration'
   */
  if ((APP_AdaptMode_DataStore())) {
    rtb_APP1 = BaseEngineController_LS_B.s795_Merge;
  } else {
    rtb_APP1 = BaseEngineController_LS_B.s761_Merge;
  }

  /* End of Switch: '<S446>/Switch' */
  /* Logic: '<S401>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S401>/motohawk_fault_status'
   *  S-Function (motohawk_sfun_fault_status): '<S401>/motohawk_fault_status1'
   */
  rtb_LogicalOperator6_b = (IsFaultActive(4) || IsFaultActive(5));

  /* Logic: '<S401>/Logical Operator6' incorporates:
   *  Logic: '<S401>/Logical Operator5'
   *  S-Function (motohawk_sfun_fault_status): '<S401>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S401>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_al = (rtb_LogicalOperator6_b && (IsFaultActive(12) ||
    IsFaultActive(13)));

  /* Switch: '<S401>/Switch2' incorporates:
   *  Logic: '<S401>/Logical Operator1'
   *  S-Function (motohawk_sfun_fault_status): '<S401>/motohawk_fault_status4'
   */
  if (rtb_LogicalOperator1_al || IsFaultActive(20)) {
    /* MinMax: '<S401>/MinMax' */
    rtb_DataTypeConversion1_e = (rtb_APP2 <= rtb_APP1) || rtIsNaN(rtb_APP1) ?
      rtb_APP2 : rtb_APP1;
  } else {
    /* Switch: '<S401>/Switch1' */
    if (rtb_LogicalOperator6_b) {
      rtb_DataTypeConversion1_e = rtb_APP2;
    } else {
      rtb_DataTypeConversion1_e = rtb_APP1;
    }

    /* End of Switch: '<S401>/Switch1' */
  }

  /* End of Switch: '<S401>/Switch2' */
  /* Switch: '<S405>/Switch1' incorporates:
   *  S-Function (motohawk_sfun_fault_action): '<S405>/motohawk_fault_action1'
   */
  if (GetFaultActionStatus(0)) {
    /* DataTypeConversion: '<S405>/Data Type Conversion' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S405>/motohawk_calibration1'
     */
    rtb_DataTypeConversion_b2 = (real_T)((uint8_T)(Overheat_MaxAPP_DataStore()));

    /* MinMax: '<S424>/MinMax' incorporates:
     *  Constant: '<S405>/Constant1'
     *  Product: '<S405>/Product1'
     *  S-Function (motohawk_sfun_calibration): '<S405>/motohawk_calibration2'
     */
    rtb_UnitDelay4_b3 = (Overheat_ScaleAPP_DataStore()) *
      rtb_DataTypeConversion1_e;
    y = rtb_UnitDelay4_b3 >= 0.0 ? rtb_UnitDelay4_b3 : 0.0;

    /* MinMax: '<S424>/MinMax1' incorporates:
     *  Constant: '<S405>/Constant1'
     *  MinMax: '<S424>/MinMax'
     */
    BaseEngineController_LS_B.s405_Switch1 = y <= rtb_DataTypeConversion_b2 ? y :
      rtb_DataTypeConversion_b2;
  } else {
    BaseEngineController_LS_B.s405_Switch1 = rtb_DataTypeConversion1_e;
  }

  /* End of Switch: '<S405>/Switch1' */
  /* S-Function Block: <S431>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s431_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_hb = ((real_T) delta) * 0.000001;
  }

  /* Sum: '<S431>/Sum' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S431>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S431>/motohawk_delta_time'
   */
  BaseEngineController_LS_B.s431_Sum = rtb_motohawk_delta_time_hb +
    TimeSinceKeyOnTimer_DataStore();

  /* S-Function Block: <S443>/motohawk_encoder_instant_rpm */
  {
    rtb_RPMInst = GetEncoderResourceInstantRPM();
  }

  /* DataTypeConversion: '<S443>/Data Type Conversion1' incorporates:
   *  S-Function (motohawk_sfun_encoder_instant_rpm): '<S443>/motohawk_encoder_instant_rpm'
   */
  BaseEngineController_LS_B.s443_RPMInst = (real_T)rtb_RPMInst;

  /* DataTypeConversion: '<S407>/Data Type Conversion' */
  if (BaseEngineController_LS_B.s443_RPMInst < 65536.0) {
    if (BaseEngineController_LS_B.s443_RPMInst >= 0.0) {
      rtb_DataTypeConversion_iq = (uint16_T)
        BaseEngineController_LS_B.s443_RPMInst;
    } else {
      rtb_DataTypeConversion_iq = 0U;
    }
  } else {
    rtb_DataTypeConversion_iq = MAX_uint16_T;
  }

  /* End of DataTypeConversion: '<S407>/Data Type Conversion' */
  /* Sum: '<S407>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S407>/motohawk_calibration3'
   *  S-Function (motohawk_sfun_calibration): '<S407>/motohawk_calibration4'
   */
  i = ((uint16_T)(StallRPMMinThreshold_DataStore())) - ((uint16_T)
    (StallRPMThresholdHyst_DataStore()));
  if (i <= 0) {
    i = 0;
  }

  rtb_Product_mp = (uint16_T)i;

  /* End of Sum: '<S407>/Sum' */

  /* RelationalOperator: '<S407>/Relational Operator1' */
  BaseEngineController_LS_B.s407_Stall = ((rtb_DataTypeConversion_iq <
    rtb_Product_mp));

  /* RelationalOperator: '<S407>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S407>/motohawk_calibration4'
   */
  BaseEngineController_LS_B.s407_Crank = ((rtb_DataTypeConversion_iq >
    ((uint16_T)(StallRPMMinThreshold_DataStore()))));

  /* RelationalOperator: '<S407>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S407>/motohawk_calibration1'
   */
  rtb_LogicalOperator6_b = (rtb_DataTypeConversion_iq > ((uint16_T)
    (CrankToRunRPMThresh_DataStore())));

  /* UnitDelay: '<S407>/Unit Delay' */
  BaseEngineController_LS_B.s407_UnitDelay =
    BaseEngineController_LS_DWork.s407_UnitDelay_DSTATE;

  /* S-Function (motohawk_sfun_trigger): '<S407>/motohawk_trigger' */
  /* Enable for Trigger_FGND_TDC_EVENT_4025p001 */
  if (BaseEngineController_LS_DWork.s407_motohawk_trigger_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s407_motohawk_trigger_DWORK1 = 1;
  }

  /* Logic: '<S407>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S407>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S407>/motohawk_calibration2'
   */
  BaseEngineController_LS_B.s407_Run = ((rtb_LogicalOperator6_b &&
    (BaseEngineController_LS_B.s429_Switch >= ((uint8_T)(RunLatchTDCs_DataStore())))));

  /* Stateflow: '<S407>/Engine State Machine' */

  /* Gateway: Foreground/Control/VirtualSensors/RawProcessed/EngineState/Engine State Machine */
  /* During: Foreground/Control/VirtualSensors/RawProcessed/EngineState/Engine State Machine */
  switch (BaseEngineController_LS_DWork.s428_is_c2_BaseEngineController_LS) {
   case BaseEngineController_LS_IN_Crank:
    /* During 'Crank': '<S428>:3' */
    if (BaseEngineController_LS_B.s407_Stall) {
      /* Transition: '<S428>:8' */
      BaseEngineController_LS_DWork.s428_is_c2_BaseEngineController_LS =
        BaseEngineController_LS_IN_Stall_l;

      /* Entry 'Stall': '<S428>:1' */
      BaseEngineController_LS_B.s428_State = 1U;
    } else {
      if (BaseEngineController_LS_B.s407_Run) {
        /* Transition: '<S428>:6' */
        BaseEngineController_LS_DWork.s428_is_c2_BaseEngineController_LS =
          BaseEngineController_LS_IN_Run;

        /* Entry 'Run': '<S428>:2' */
        BaseEngineController_LS_B.s428_State = 3U;
      }
    }
    break;

   case BaseEngineController_LS_IN_Run:
    /* During 'Run': '<S428>:2' */
    if (BaseEngineController_LS_B.s407_Stall) {
      /* Transition: '<S428>:7' */
      BaseEngineController_LS_DWork.s428_is_c2_BaseEngineController_LS =
        BaseEngineController_LS_IN_Stall_l;

      /* Entry 'Stall': '<S428>:1' */
      BaseEngineController_LS_B.s428_State = 1U;
    }
    break;

   case BaseEngineController_LS_IN_Stall_l:
    /* During 'Stall': '<S428>:1' */
    if (BaseEngineController_LS_B.s407_Crank) {
      /* Transition: '<S428>:5' */
      BaseEngineController_LS_DWork.s428_is_c2_BaseEngineController_LS =
        BaseEngineController_LS_IN_Crank;

      /* Entry 'Crank': '<S428>:3' */
      BaseEngineController_LS_B.s428_State = 2U;
    }
    break;

   default:
    /* Transition: '<S428>:4' */
    BaseEngineController_LS_DWork.s428_is_c2_BaseEngineController_LS =
      BaseEngineController_LS_IN_Stall_l;

    /* Entry 'Stall': '<S428>:1' */
    BaseEngineController_LS_B.s428_State = 1U;
    break;
  }

  /* End of Stateflow: '<S407>/Engine State Machine' */

  /* RelationalOperator: '<S139>/RelOp' incorporates:
   *  Constant: '<S139>/Constant'
   */
  rtb_RelOp_pu = (BaseEngineController_LS_B.s428_State == 1);

  /* S-Function Block: <S442>/motohawk_ain5 Resource: ACSwPin */
  {
    extern NativeError_S ACSwPin_AnalogInput_Get(uint16_T *adc, uint16_T *status);
    ACSwPin_AnalogInput_Get(&rtb_motohawk_ain5_i, NULL);
  }

  /* DataTypeConversion: '<S560>/Data Type Conversion' incorporates:
   *  S-Function (motohawk_sfun_ain): '<S442>/motohawk_ain5'
   */
  BaseEngineController_LS_B.s560_DataTypeConversion = (real_T)
    rtb_motohawk_ain5_i;

  /* RelationalOperator: '<S560>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S560>/SwitchPoint'
   */
  rtb_LogicalOperator6_b = (BaseEngineController_LS_B.s560_DataTypeConversion >
                            (ACSwSwitchPt_DataStore()));

  /* Logic: '<S560>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S560>/0 = No Inversion 1 = Inversion'
   */
  rtb_LogicalOperator6_b ^= (ACSwPolarity_DataStore());

  /* If: '<S568>/If' incorporates:
   *  Inport: '<S569>/In1'
   *  Inport: '<S570>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S568>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S568>/override_enable'
   */
  if ((ACSw_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S568>/NewValue' incorporates:
     *  ActionPort: '<S569>/Action Port'
     */
    BaseEngineController_LS_B.s568_Merge = (ACSw_new_DataStore());

    /* End of Outputs for SubSystem: '<S568>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S568>/OldValue' incorporates:
     *  ActionPort: '<S570>/Action Port'
     */
    BaseEngineController_LS_B.s568_Merge = rtb_LogicalOperator6_b;

    /* End of Outputs for SubSystem: '<S568>/OldValue' */
  }

  /* End of If: '<S568>/If' */

  /* S-Function Block: <S626>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s626_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_e = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S626>/Product' incorporates:
   *  MinMax: '<S626>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S626>/motohawk_calibration'
   */
  rtb_DataTypeConversion_e /= (rtb_DataTypeConversion_e >=
    (ACPresFilterConst_DataStore())) || rtIsNaN((ACPresFilterConst_DataStore()))
    ? rtb_DataTypeConversion_e : (ACPresFilterConst_DataStore());

  /* Logic: '<S617>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S617>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S617>/motohawk_fault_status4'
   */
  rtb_LogicalOperator1_cv = (IsFaultActive(2) || IsFaultActive(3));

  /* Logic: '<S617>/Logical Operator6' */
  rtb_LogicalOperator6_b = !rtb_LogicalOperator1_cv;

  /* Logic: '<S617>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S617>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S617>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_al = (IsFaultSuspected(2) || IsFaultSuspected(3));

  /* S-Function Block: <S444>/motohawk_ain4 Resource: ACPresPin */
  {
    extern NativeError_S ACPresPin_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    ACPresPin_AnalogInput_Get(&BaseEngineController_LS_B.s444_motohawk_ain4,
      NULL);
  }

  /* DataTypeConversion: '<S617>/Data Type Conversion' */
  rtb_DataTypeConversion_ik = (real_T)
    BaseEngineController_LS_B.s444_motohawk_ain4;

  /* Product: '<S617>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S617>/motohawk_calibration4'
   */
  rtb_DataTypeConversion1_e = rtb_DataTypeConversion_ik * (ACPresGain_DataStore());

  /* Sum: '<S617>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S617>/motohawk_calibration5'
   */
  BaseEngineController_LS_B.s617_Sum1 = rtb_DataTypeConversion1_e +
    (ACPresOfst_DataStore());

  /* UnitDelay: '<S617>/Unit Delay1' */
  rtb_UnitDelay1_i = BaseEngineController_LS_DWork.s617_UnitDelay1_DSTATE;

  /* If: '<S617>/If' incorporates:
   *  Logic: '<S617>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_b && rtb_LogicalOperator1_al) {
    /* Outputs for IfAction SubSystem: '<S617>/If Action Subsystem' incorporates:
     *  ActionPort: '<S627>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay1_i, &rtb_Merge_b);

    /* End of Outputs for SubSystem: '<S617>/If Action Subsystem' */
  } else if (rtb_LogicalOperator1_cv) {
    /* Outputs for IfAction SubSystem: '<S617>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S628>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((ACPresDfltValue_DataStore()),
      &rtb_Merge_b);

    /* End of Outputs for SubSystem: '<S617>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S617>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S629>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      (BaseEngineController_LS_B.s617_Sum1, &rtb_Merge_b);

    /* End of Outputs for SubSystem: '<S617>/If Action Subsystem2' */
  }

  /* End of If: '<S617>/If' */

  /* Sum: '<S631>/Sum1' incorporates:
   *  Constant: '<S631>/Constant'
   *  Product: '<S631>/Product'
   *  Product: '<S631>/Product1'
   *  Sum: '<S631>/Sum'
   *  UnitDelay: '<S631>/Unit Delay'
   */
  rtb_Sum1_li = (1.0 - rtb_DataTypeConversion_e) *
    BaseEngineController_LS_DWork.s631_UnitDelay_DSTATE + rtb_Merge_b *
    rtb_DataTypeConversion_e;

  /* If: '<S630>/If' incorporates:
   *  Inport: '<S632>/In1'
   *  Inport: '<S633>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S630>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S630>/override_enable'
   */
  if ((ACPres_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S630>/NewValue' incorporates:
     *  ActionPort: '<S632>/Action Port'
     */
    BaseEngineController_LS_B.s630_Merge = (ACPres_new_DataStore());

    /* End of Outputs for SubSystem: '<S630>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S630>/OldValue' incorporates:
     *  ActionPort: '<S633>/Action Port'
     */
    BaseEngineController_LS_B.s630_Merge = rtb_Sum1_li;

    /* End of Outputs for SubSystem: '<S630>/OldValue' */
  }

  /* End of If: '<S630>/If' */

  /* Outputs for Enabled SubSystem: '<S15>/Stall' incorporates:
   *  EnablePort: '<S138>/Enable'
   */
  if (rtb_RelOp_pu) {
    if (!BaseEngineController_LS_DWork.s15_Stall_MODE) {
      /* InitializeConditions for UnitDelay: '<S318>/Unit Delay' */
      BaseEngineController_LS_DWork.s318_UnitDelay_DSTATE = FALSE;

      /* InitializeConditions for UnitDelay: '<S319>/Unit Delay' */
      BaseEngineController_LS_DWork.s319_UnitDelay_DSTATE = FALSE;

      /* InitializeConditions for UnitDelay: '<S320>/Unit Delay' */
      BaseEngineController_LS_DWork.s320_UnitDelay_DSTATE = FALSE;

      /* InitializeConditions for UnitDelay: '<S321>/Unit Delay' */
      BaseEngineController_LS_DWork.s321_UnitDelay_DSTATE = 0.0;

      /* S-Function Block: <S323>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BaseEngineController_LS_DWork.s323_motohawk_delta_time_DWORK1 = now -
          Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
      }

      /* InitializeConditions for Stateflow: '<S311>/Ice Break' */
      BaseEngineController_LS_DWork.s322_is_active_c3_BaseEngineController_LS =
        0U;
      BaseEngineController_LS_DWork.s322_is_c3_BaseEngineController_LS = 0U;
      BaseEngineController_LS_B.s322_etc = 0.0;
      BaseEngineController_LS_DWork.s322_presentTicks = 0U;
      BaseEngineController_LS_DWork.s322_elapsedTicks = 0U;
      BaseEngineController_LS_DWork.s322_previousTicks = 0U;

      /* Enable for Stateflow: '<S311>/Ice Break' */
      BaseEngineController_LS_DWork.s322_presentTicks =
        BaseEngineController_LS_M->Timing.clockTick0;
      BaseEngineController_LS_DWork.s322_previousTicks =
        BaseEngineController_LS_DWork.s322_presentTicks;
      BaseEngineController_LS_DWork.s15_Stall_MODE = TRUE;
    }

    /* DataTypeConversion: '<S138>/Data Type Conversion' incorporates:
     *  Constant: '<S138>/OFF'
     */
    BaseEngineController_LS_B.s135_WASTEGATE = 0.0;

    /* DataTypeConversion: '<S138>/Data Type Conversion1' incorporates:
     *  Constant: '<S138>/OFF1'
     */
    BaseEngineController_LS_B.s135_IACS = 0.0;

    /* DataTypeConversion: '<S138>/Data Type Conversion2' incorporates:
     *  Constant: '<S138>/OFF2'
     */
    BaseEngineController_LS_B.s135_IACP = 0.0;

    /* DataTypeConversion: '<S309>/Data Type Conversion' */
    rtb_DataTypeConversion1_e = (real_T)BaseEngineController_LS_B.s568_Merge;

    /* DataTypeConversion: '<S309>/Data Type Conversion1' */
    if (rtIsNaN(BaseEngineController_LS_B.s726_Merge) || rtIsInf
        (BaseEngineController_LS_B.s726_Merge)) {
      rtb_UnitDelay4_b3 = 0.0;
    } else {
      rtb_UnitDelay4_b3 = fmod(floor(BaseEngineController_LS_B.s726_Merge),
        65536.0);
    }

    rtb_DataTypeConversion1_i = (int16_T)(rtb_UnitDelay4_b3 < 0.0 ? (int16_T)
      -(int16_T)(uint16_T)-rtb_UnitDelay4_b3 : (int16_T)(uint16_T)
      rtb_UnitDelay4_b3);

    /* End of DataTypeConversion: '<S309>/Data Type Conversion1' */

    /* DataTypeConversion: '<S309>/Data Type Conversion2' */
    if (rtIsNaN(BaseEngineController_LS_B.s744_Merge) || rtIsInf
        (BaseEngineController_LS_B.s744_Merge)) {
      rtb_UnitDelay4_b3 = 0.0;
    } else {
      rtb_UnitDelay4_b3 = fmod(floor(BaseEngineController_LS_B.s744_Merge),
        65536.0);
    }

    rtb_DataTypeConversion2_g5 = (int16_T)(rtb_UnitDelay4_b3 < 0.0 ? (int16_T)
      -(int16_T)(uint16_T)-rtb_UnitDelay4_b3 : (int16_T)(uint16_T)
      rtb_UnitDelay4_b3);

    /* End of DataTypeConversion: '<S309>/Data Type Conversion2' */

    /* DataTypeConversion: '<S309>/Data Type Conversion3' */
    if (rtIsNaN(BaseEngineController_LS_B.s630_Merge) || rtIsInf
        (BaseEngineController_LS_B.s630_Merge)) {
      rtb_UnitDelay4_b3 = 0.0;
    } else {
      rtb_UnitDelay4_b3 = fmod(floor(BaseEngineController_LS_B.s630_Merge),
        65536.0);
    }

    rtb_DataTypeConversion3_g = (int16_T)(rtb_UnitDelay4_b3 < 0.0 ? (int16_T)
      -(int16_T)(uint16_T)-rtb_UnitDelay4_b3 : (int16_T)(uint16_T)
      rtb_UnitDelay4_b3);

    /* End of DataTypeConversion: '<S309>/Data Type Conversion3' */
    /* RelationalOperator: '<S312>/LT' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S309>/motohawk_calibration1'
     */
    rtb_RelationalOperator2_py = (rtb_DataTypeConversion1_i >= ((int16_T)
      (ECTFanOn_DataStore())));

    /* RelationalOperator: '<S312>/LT1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S309>/motohawk_calibration'
     */
    rtb_Switch_oh = (rtb_DataTypeConversion1_i <= ((int16_T)(ECTFanOff_DataStore
                       ())));

    /* CombinatorialLogic: '<S318>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_RelationalOperator2_py != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_Switch_oh != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_da[0] =
        BaseEngineController_LS_ConstP.pooled908[rowidx];
      rtb_CombinatorialLogic_da[1] =
        BaseEngineController_LS_ConstP.pooled908[rowidx + 4];
    }

    /* Switch: '<S318>/Switch1' incorporates:
     *  UnitDelay: '<S318>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_da[1]) {
      rtb_LogicalOperator6_b = rtb_CombinatorialLogic_da[0];
    } else {
      rtb_LogicalOperator6_b =
        BaseEngineController_LS_DWork.s318_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S318>/Switch1' */
    /* RelationalOperator: '<S313>/LT' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S309>/motohawk_calibration3'
     */
    rtb_Switch_oh = (rtb_DataTypeConversion2_g5 >= ((int16_T)(IATFanOn_DataStore
                       ())));

    /* RelationalOperator: '<S313>/LT1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S309>/motohawk_calibration2'
     */
    rtb_RelationalOperator2_py = (rtb_DataTypeConversion2_g5 <= ((int16_T)
      (IATFanOff_DataStore())));

    /* CombinatorialLogic: '<S319>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_Switch_oh != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_RelationalOperator2_py != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_da[0] =
        BaseEngineController_LS_ConstP.pooled908[rowidx];
      rtb_CombinatorialLogic_da[1] =
        BaseEngineController_LS_ConstP.pooled908[rowidx + 4];
    }

    /* Switch: '<S319>/Switch1' incorporates:
     *  UnitDelay: '<S319>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_da[1]) {
      rtb_LogicalOperator1_al = rtb_CombinatorialLogic_da[0];
    } else {
      rtb_LogicalOperator1_al =
        BaseEngineController_LS_DWork.s319_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S319>/Switch1' */
    /* RelationalOperator: '<S314>/LT' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S309>/motohawk_calibration5'
     */
    rtb_Switch_oh = (rtb_DataTypeConversion3_g >= ((int16_T)
      (ACPresFanOn_DataStore())));

    /* RelationalOperator: '<S314>/LT1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S309>/motohawk_calibration4'
     */
    rtb_RelationalOperator2_py = (rtb_DataTypeConversion3_g <= ((int16_T)
      (ACPresFanOff_DataStore())));

    /* CombinatorialLogic: '<S320>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_Switch_oh != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_RelationalOperator2_py != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_da[0] =
        BaseEngineController_LS_ConstP.pooled908[rowidx];
      rtb_CombinatorialLogic_da[1] =
        BaseEngineController_LS_ConstP.pooled908[rowidx + 4];
    }

    /* Switch: '<S320>/Switch1' incorporates:
     *  UnitDelay: '<S320>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_da[1]) {
      rtb_RelOp_pu = rtb_CombinatorialLogic_da[0];
    } else {
      rtb_RelOp_pu = BaseEngineController_LS_DWork.s320_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S320>/Switch1' */
    /* Switch: '<S309>/Switch' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S309>/motohawk_calibration15'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S315>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_prelookup): '<S315>/motohawk_prelookup'
     */
    if (((uint8_T)(FAN_Mode_DataStore())) >= 1) {
      rtb_Switch_om = rtb_LogicalOperator6_b;
    } else {
      /* S-Function Block: <S315>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_int16_T(int16_T in, const volatile
          int16_T ordarr[], uint32_T sz, uint16_T prev);
        (ECTFanSpeed_StallIn_DataStore()) = rtb_DataTypeConversion1_i;
        (ECTFanSpeed_StallIdx_DataStore()) = TablePrelookup_int16_T
          (rtb_DataTypeConversion1_i, (ECTFanSpeed_StallIdxArr_DataStore()), 7,
           (ECTFanSpeed_StallIdx_DataStore()));
        rtb_motohawk_prelookup_kl = (ECTFanSpeed_StallIdx_DataStore());
      }

      /* S-Function Block: <S315>/motohawk_interpolation_1d */
      {
        extern uint8_T TableInterpolation1D_uint8_T(uint16_T idx, uint8_T
          *tbl_data, uint32_T sz);
        rtb_motohawk_interpolation_1d_kl = TableInterpolation1D_uint8_T
          (rtb_motohawk_prelookup_kl, (uint8_T *)
           ((ECTFanSpeed_StallTbl_DataStore())), 7);
        (ECTFanSpeed_Stall_DataStore()) = rtb_motohawk_interpolation_1d_kl;
      }

      rtb_Switch_om = rtb_motohawk_interpolation_1d_kl;
    }

    /* End of Switch: '<S309>/Switch' */
    /* Product: '<S309>/Product' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S309>/motohawk_calibration6'
     */
    rtb_Product_ln = (uint8_T)((Fan1ECT_DataStore()) ? rtb_Switch_om : 0);

    /* Switch: '<S309>/Switch1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S309>/motohawk_calibration15'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S317>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_prelookup): '<S317>/motohawk_prelookup'
     */
    if (((uint8_T)(FAN_Mode_DataStore())) >= 1) {
      rtb_Product6_m = rtb_LogicalOperator1_al;
    } else {
      /* S-Function Block: <S317>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_int16_T(int16_T in, const volatile
          int16_T ordarr[], uint32_T sz, uint16_T prev);
        (IATFanSpeed_StallIn_DataStore()) = rtb_DataTypeConversion2_g5;
        (IATFanSpeed_StallIdx_DataStore()) = TablePrelookup_int16_T
          (rtb_DataTypeConversion2_g5, (IATFanSpeed_StallIdxArr_DataStore()), 7,
           (IATFanSpeed_StallIdx_DataStore()));
        rtb_motohawk_prelookup_nn = (IATFanSpeed_StallIdx_DataStore());
      }

      /* S-Function Block: <S317>/motohawk_interpolation_1d */
      {
        extern uint8_T TableInterpolation1D_uint8_T(uint16_T idx, uint8_T
          *tbl_data, uint32_T sz);
        rtb_motohawk_interpolation_1d_l = TableInterpolation1D_uint8_T
          (rtb_motohawk_prelookup_nn, (uint8_T *)
           ((IATFanSpeed_StallTbl_DataStore())), 7);
        (IATFanSpeed_Stall_DataStore()) = rtb_motohawk_interpolation_1d_l;
      }

      rtb_Product6_m = rtb_motohawk_interpolation_1d_l;
    }

    /* End of Switch: '<S309>/Switch1' */
    /* Product: '<S309>/Product1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S309>/motohawk_calibration7'
     */
    rtb_Product5_j = (uint8_T)((Fan1IAT_DataStore()) ? rtb_Product6_m : 0);

    /* Switch: '<S309>/Switch2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S309>/motohawk_calibration15'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S316>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_prelookup): '<S316>/motohawk_prelookup'
     */
    if (((uint8_T)(FAN_Mode_DataStore())) >= 1) {
      rtb_Switch2_a = rtb_RelOp_pu;
    } else {
      /* S-Function Block: <S316>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_int16_T(int16_T in, const volatile
          int16_T ordarr[], uint32_T sz, uint16_T prev);
        (ACPresFanSpeed_StallIn_DataStore()) = rtb_DataTypeConversion3_g;
        (ACPresFanSpeed_StallIdx_DataStore()) = TablePrelookup_int16_T
          (rtb_DataTypeConversion3_g, (ACPresFanSpeed_StallIdxArr_DataStore()),
           7, (ACPresFanSpeed_StallIdx_DataStore()));
        rtb_motohawk_prelookup_br = (ACPresFanSpeed_StallIdx_DataStore());
      }

      /* S-Function Block: <S316>/motohawk_interpolation_1d */
      {
        extern uint8_T TableInterpolation1D_uint8_T(uint16_T idx, uint8_T
          *tbl_data, uint32_T sz);
        rtb_motohawk_interpolation_1d_lt = TableInterpolation1D_uint8_T
          (rtb_motohawk_prelookup_br, (uint8_T *)
           ((ACPresFanSpeed_StallTbl_DataStore())), 7);
        (ACPresFanSpeed_Stall_DataStore()) = rtb_motohawk_interpolation_1d_lt;
      }

      rtb_Switch2_a = rtb_motohawk_interpolation_1d_lt;
    }

    /* End of Switch: '<S309>/Switch2' */
    /* Product: '<S309>/Product2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S309>/motohawk_calibration8'
     */
    rtb_Product4_i = (uint8_T)((Fan1ACPres_DataStore()) ? rtb_Switch2_a : 0);

    /* Switch: '<S309>/Switch3' incorporates:
     *  Product: '<S309>/Product8'
     *  S-Function (motohawk_sfun_calibration): '<S309>/motohawk_calibration14'
     *  S-Function (motohawk_sfun_calibration): '<S309>/motohawk_calibration15'
     */
    if (!(((uint8_T)(FAN_Mode_DataStore())) >= 1)) {
      rtb_DataTypeConversion1_e *= (real_T)((uint8_T)
        (ACSwFanSpeed_Stall_DataStore()));
    }

    /* End of Switch: '<S309>/Switch3' */
    /* MinMax: '<S309>/MinMax' incorporates:
     *  Product: '<S309>/Product3'
     *  S-Function (motohawk_sfun_calibration): '<S309>/motohawk_calibration9'
     */
    rtb_UnitDelay4_b3 = (real_T)rtb_Product_ln;
    rtb_DesiredLambda_idx_0 = (real_T)rtb_Product5_j;
    y = rtb_UnitDelay4_b3 >= rtb_DesiredLambda_idx_0 ? rtb_UnitDelay4_b3 :
      rtb_DesiredLambda_idx_0;
    rtb_DesiredLambda_idx_0 = (real_T)rtb_Product4_i;
    y = y >= rtb_DesiredLambda_idx_0 ? y : rtb_DesiredLambda_idx_0;
    rtb_DesiredLambda_idx_0 = rtb_DataTypeConversion1_e * (real_T)
      (Fan1ACSw_DataStore());

    /* Product: '<S309>/Product4' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S309>/motohawk_calibration10'
     */
    rtb_Product4_i = (uint8_T)((Fan2ECT_DataStore()) ? rtb_Switch_om : 0);

    /* Product: '<S309>/Product5' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S309>/motohawk_calibration11'
     */
    rtb_Product5_j = (uint8_T)((Fan2IAT_DataStore()) ? rtb_Product6_m : 0);

    /* Product: '<S309>/Product6' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S309>/motohawk_calibration12'
     */
    rtb_Product6_m = (uint8_T)((Fan2ACPres_DataStore()) ? rtb_Switch2_a : 0);

    /* MinMax: '<S309>/MinMax1' incorporates:
     *  Product: '<S309>/Product7'
     *  S-Function (motohawk_sfun_calibration): '<S309>/motohawk_calibration13'
     */
    rtb_UnitDelay4_b3 = (real_T)rtb_Product4_i;
    rtb_DesiredLambda_idx = (real_T)rtb_Product5_j;
    rtb_UnitDelay4_b3 = rtb_UnitDelay4_b3 >= rtb_DesiredLambda_idx ?
      rtb_UnitDelay4_b3 : rtb_DesiredLambda_idx;
    rtb_DesiredLambda_idx = (real_T)rtb_Product6_m;
    rtb_UnitDelay4_b3 = rtb_UnitDelay4_b3 >= rtb_DesiredLambda_idx ?
      rtb_UnitDelay4_b3 : rtb_DesiredLambda_idx;
    rtb_DesiredLambda_idx = rtb_DataTypeConversion1_e * (real_T)
      (Fan2ACSw_DataStore());

    /* UnitDelay: '<S321>/Unit Delay' */
    BaseEngineController_LS_B.s321_UnitDelay =
      BaseEngineController_LS_DWork.s321_UnitDelay_DSTATE;

    /* Switch: '<S310>/Switch' incorporates:
     *  Constant: '<S310>/Constant'
     *  RelationalOperator: '<S310>/Relational Operator'
     *  S-Function (motohawk_sfun_calibration): '<S310>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S310>/motohawk_calibration1'
     */
    if ((Constant_Fuel_Pump_DataStore())) {
      rtb_Switch_oh = TRUE;
    } else {
      rtb_Switch_oh = (BaseEngineController_LS_B.s321_UnitDelay <
                       (FuelPumpStartTime_DataStore()));
    }

    /* End of Switch: '<S310>/Switch' */
    /* S-Function Block: <S321>/motohawk_delta_time */
    rtb_motohawk_delta_time_op = 0.005;

    /* Sum: '<S321>/Sum' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S321>/motohawk_delta_time'
     */
    rtb_DataTypeConversion_b2 = rtb_motohawk_delta_time_op +
      BaseEngineController_LS_B.s321_UnitDelay;

    /* S-Function Block: <S323>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s323_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_cj = ((real_T) delta) * 0.000001;
    }

    /* RelationalOperator: '<S311>/Relational Operator2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S311>/motohawk_calibration3'
     */
    rtb_RelationalOperator2_py = (BaseEngineController_LS_B.s405_Switch1 >=
      (ETC_StallAppOvrThesh_DataStore()));

    /* Switch: '<S323>/Switch' incorporates:
     *  Constant: '<S323>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S323>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S323>/motohawk_delta_time'
     *  Sum: '<S323>/Sum'
     */
    if (rtb_RelationalOperator2_py) {
      rtb_Switch_mq = rtb_motohawk_delta_time_cj + AppStallOvrTmr_DataStore();
    } else {
      rtb_Switch_mq = 0.0;
    }

    /* End of Switch: '<S323>/Switch' */
    /* RelationalOperator: '<S311>/Relational Operator3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S311>/motohawk_calibration4'
     */
    rtb_RelationalOperator3_bp = (rtb_Switch_mq >= (ETC_StallAppOvrTm_DataStore()));

    /* Product: '<S311>/Product1' */
    BaseEngineController_LS_B.s311_Product1 = (rtb_RelationalOperator3_bp ?
      (real_T)rtb_RelationalOperator2_py : 0.0) *
      BaseEngineController_LS_B.s405_Switch1;

    /* Product: '<S311>/Product2' */
    rtb_Product2_o = (uint16_T)(rtb_RelationalOperator3_bp ?
      rtb_RelationalOperator2_py : 0);

    /* Stateflow: '<S311>/Ice Break' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S311>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S311>/motohawk_calibration1'
     *  S-Function (motohawk_sfun_calibration): '<S311>/motohawk_calibration2'
     */
    BaseEngineController_LS_DWork.s322_presentTicks =
      BaseEngineController_LS_M->Timing.clockTick0;
    BaseEngineController_LS_DWork.s322_elapsedTicks =
      BaseEngineController_LS_DWork.s322_presentTicks -
      BaseEngineController_LS_DWork.s322_previousTicks;
    BaseEngineController_LS_DWork.s322_previousTicks =
      BaseEngineController_LS_DWork.s322_presentTicks;
    BaseEngineController_LS_DWork.s322_temporalCounter_i1 =
      BaseEngineController_LS_DWork.s322_temporalCounter_i1 +
      BaseEngineController_LS_DWork.s322_elapsedTicks;

    /* Gateway: Foreground/Control/Controller/Stall/Stall Throttle/Ice Break */
    /* During: Foreground/Control/Controller/Stall/Stall Throttle/Ice Break */
    if (BaseEngineController_LS_DWork.s322_is_active_c3_BaseEngineController_LS ==
        0) {
      /* Entry: Foreground/Control/Controller/Stall/Stall Throttle/Ice Break */
      BaseEngineController_LS_DWork.s322_is_active_c3_BaseEngineController_LS =
        1U;

      /* Transition: '<S322>:2' */
      BaseEngineController_LS_DWork.s322_is_c3_BaseEngineController_LS =
        BaseEngineController_LS_IN_Init;
    } else {
      switch (BaseEngineController_LS_DWork.s322_is_c3_BaseEngineController_LS)
  {
       case BaseEngineController_LS_IN_Init:
        /* During 'Init': '<S322>:1' */
        if (BaseEngineController_LS_B.s431_Sum < (ETC_IceBreakEnblTm_DataStore()))
        {
          /* Transition: '<S322>:5' */
          BaseEngineController_LS_DWork.s322_is_c3_BaseEngineController_LS =
            BaseEngineController_LS_IN_Open;
          BaseEngineController_LS_DWork.s322_temporalCounter_i1 = 0U;
        } else {
          BaseEngineController_LS_B.s322_etc = 0.0;
        }
        break;

       case BaseEngineController_LS_IN_Open:
        /* During 'Open': '<S322>:4' */
        if (BaseEngineController_LS_DWork.s322_temporalCounter_i1 >= (uint32_T)
            ceil((ETC_IceBreakHoldTm_DataStore()) / 0.2 - 2.0E-9)) {
          /* Transition: '<S322>:14' */
          BaseEngineController_LS_DWork.s322_is_c3_BaseEngineController_LS =
            BaseEngineController_LS_IN_Wait;
        } else {
          BaseEngineController_LS_B.s322_etc = (ETC_IceBreakPos_DataStore());
        }
        break;

       case BaseEngineController_LS_IN_Wait:
        /* During 'Wait': '<S322>:15' */
        if (BaseEngineController_LS_B.s431_Sum > (ETC_IceBreakEnblTm_DataStore()))
        {
          /* Transition: '<S322>:16' */
          BaseEngineController_LS_DWork.s322_is_c3_BaseEngineController_LS =
            BaseEngineController_LS_IN_Init;
        } else {
          BaseEngineController_LS_B.s322_etc = 0.0;
        }
        break;

       default:
        /* Transition: '<S322>:2' */
        BaseEngineController_LS_DWork.s322_is_c3_BaseEngineController_LS =
          BaseEngineController_LS_IN_Init;
        break;
      }
    }

    /* End of Stateflow: '<S311>/Ice Break' */

    /* Switch: '<S311>/Switch' */
    if (rtb_Product2_o != 0) {
      BaseEngineController_LS_B.s311_Switch =
        BaseEngineController_LS_B.s311_Product1;
    } else {
      BaseEngineController_LS_B.s311_Switch = BaseEngineController_LS_B.s322_etc;
    }

    /* End of Switch: '<S311>/Switch' */

    /* Saturate: '<S323>/Saturation' */
    rtb_Saturation_d = rtb_Switch_mq >= 16000.0 ? 16000.0 : rtb_Switch_mq <= 0.0
      ? 0.0 : rtb_Switch_mq;

    /* S-Function (motohawk_sfun_data_write): '<S323>/motohawk_data_write' */
    /* Write to Data Storage as scalar: AppStallOvrTmr */
    {
      AppStallOvrTmr_DataStore() = rtb_Saturation_d;
    }

    /* ZeroOrderHold: '<S138>/Zero-Order Hold10' incorporates:
     *  Constant: '<S138>/No Mult'
     */
    BaseEngineController_LS_B.s135_FuelMult = 0.0;

    /* ZeroOrderHold: '<S138>/Zero-Order Hold12' incorporates:
     *  MinMax: '<S309>/MinMax'
     */
    BaseEngineController_LS_B.s135_FAN1 = y >= rtb_DesiredLambda_idx_0 ? y :
      rtb_DesiredLambda_idx_0;

    /* ZeroOrderHold: '<S138>/Zero-Order Hold13' incorporates:
     *  MinMax: '<S309>/MinMax1'
     */
    BaseEngineController_LS_B.s135_FAN2 = rtb_UnitDelay4_b3 >=
      rtb_DesiredLambda_idx ? rtb_UnitDelay4_b3 : rtb_DesiredLambda_idx;

    /* ZeroOrderHold: '<S138>/Zero-Order Hold14' incorporates:
     *  Constant: '<S138>/OFF3'
     */
    BaseEngineController_LS_B.s135_AC = FALSE;

    /* ZeroOrderHold: '<S138>/Zero-Order Hold3' */
    BaseEngineController_LS_B.s135_SparkAdv =
      BaseEngineController_LS_ConstB.s138_motohawk_replicate2;

    /* ZeroOrderHold: '<S138>/Zero-Order Hold4' incorporates:
     *  Constant: '<S138>/No Spark'
     */
    BaseEngineController_LS_B.s135_SparkEnergy = 0.0;

    /* ZeroOrderHold: '<S138>/Zero-Order Hold5' incorporates:
     *  Constant: '<S138>/No Start EOI'
     */
    BaseEngineController_LS_B.s135_MakeUpEOI = 0.0;

    /* ZeroOrderHold: '<S138>/Zero-Order Hold6' */
    memcpy((void *)(&BaseEngineController_LS_B.s135_FPC[0]), (void *)
           (&BaseEngineController_LS_ConstB.s138_motohawk_replicate[0]), sizeof
           (real_T) << 3U);

    /* ZeroOrderHold: '<S138>/Zero-Order Hold7' */
    BaseEngineController_LS_B.s135_FUELP = rtb_Switch_oh;

    /* ZeroOrderHold: '<S138>/Zero-Order Hold8' incorporates:
     *  Constant: '<S138>/No Start Fuel Timing'
     */
    BaseEngineController_LS_B.s135_SOI = 0.0;

    /* ZeroOrderHold: '<S138>/Zero-Order Hold9' */
    BaseEngineController_LS_B.s135_Throttle =
      BaseEngineController_LS_B.s311_Switch;

    /* Update for UnitDelay: '<S318>/Unit Delay' */
    BaseEngineController_LS_DWork.s318_UnitDelay_DSTATE = rtb_LogicalOperator6_b;

    /* Update for UnitDelay: '<S319>/Unit Delay' */
    BaseEngineController_LS_DWork.s319_UnitDelay_DSTATE =
      rtb_LogicalOperator1_al;

    /* Update for UnitDelay: '<S320>/Unit Delay' */
    BaseEngineController_LS_DWork.s320_UnitDelay_DSTATE = rtb_RelOp_pu;

    /* Update for UnitDelay: '<S321>/Unit Delay' */
    BaseEngineController_LS_DWork.s321_UnitDelay_DSTATE =
      rtb_DataTypeConversion_b2;
  } else {
    if (BaseEngineController_LS_DWork.s15_Stall_MODE) {
      /* Disable for Stateflow: '<S311>/Ice Break' */
      BaseEngineController_LS_DWork.s322_presentTicks =
        BaseEngineController_LS_M->Timing.clockTick0;
      BaseEngineController_LS_DWork.s322_elapsedTicks =
        BaseEngineController_LS_DWork.s322_presentTicks -
        BaseEngineController_LS_DWork.s322_previousTicks;
      BaseEngineController_LS_DWork.s322_previousTicks =
        BaseEngineController_LS_DWork.s322_presentTicks;
      BaseEngineController_LS_DWork.s322_temporalCounter_i1 =
        BaseEngineController_LS_DWork.s322_temporalCounter_i1 +
        BaseEngineController_LS_DWork.s322_elapsedTicks;
      BaseEngineController_LS_DWork.s15_Stall_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S15>/Stall' */
  /* S-Function Block: <S443>/motohawk_encoder_average_rpm */
  {
    rtb_RPM = GetEncoderResourceAverageRPM();
  }

  /* DataTypeConversion: '<S616>/Data Type Conversion' incorporates:
   *  S-Function (motohawk_sfun_encoder_average_rpm): '<S443>/motohawk_encoder_average_rpm'
   */
  rtb_DataTypeConversion1_e = (real_T)rtb_RPM;

  /* S-Function Block: <S609>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s609_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_e = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S609>/Product' incorporates:
   *  MinMax: '<S609>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S609>/motohawk_calibration'
   */
  rtb_DataTypeConversion_e /= (rtb_DataTypeConversion_e >=
    (RPMFiltConst_DataStore())) || rtIsNaN((RPMFiltConst_DataStore())) ?
    rtb_DataTypeConversion_e : (RPMFiltConst_DataStore());

  /* Sum: '<S616>/Sum1' incorporates:
   *  Constant: '<S616>/Constant'
   *  Product: '<S616>/Product'
   *  Product: '<S616>/Product1'
   *  Sum: '<S616>/Sum'
   *  UnitDelay: '<S616>/Unit Delay'
   */
  BaseEngineController_LS_B.s616_Sum1 = (1.0 - rtb_DataTypeConversion_e) *
    BaseEngineController_LS_DWork.s616_UnitDelay_DSTATE +
    rtb_DataTypeConversion1_e * rtb_DataTypeConversion_e;

  /* Logic: '<S818>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S818>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S818>/motohawk_fault_status4'
   */
  rtb_LogicalOperator1_cv = (IsFaultActive(113) || IsFaultActive(114));

  /* Logic: '<S818>/Logical Operator6' */
  rtb_LogicalOperator6_b = !rtb_LogicalOperator1_cv;

  /* Logic: '<S818>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S818>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S818>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_al = (IsFaultSuspected(113) || IsFaultSuspected(114));

  /* S-Function Block: <S446>/motohawk_ain6 Resource: TPS1AnalogInput */
  {
    extern NativeError_S TPS1AnalogInput_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    TPS1AnalogInput_AnalogInput_Get(&rtb_motohawk_ain6, NULL);
  }

  /* DataTypeConversion: '<S755>/Data Type Conversion1' incorporates:
   *  S-Function (motohawk_sfun_ain): '<S446>/motohawk_ain6'
   */
  rtb_DataTypeConversion1_e = (real_T)rtb_motohawk_ain6;

  /* Switch: '<S755>/Switch' incorporates:
   *  Fcn: '<S755>/Fcn'
   *  S-Function (motohawk_sfun_calibration): '<S755>/motohawk_calibration2'
   */
  if ((TPS1Rev_Polarity_DataStore())) {
    BaseEngineController_LS_B.s755_Switch = 1023.0 - rtb_DataTypeConversion1_e;
  } else {
    BaseEngineController_LS_B.s755_Switch = rtb_DataTypeConversion1_e;
  }

  /* End of Switch: '<S755>/Switch' */

  /* S-Function (motohawk_sfun_data_read): '<S815>/motohawk_data_read' */
  rtb_Product_mp = TPS1Raw_Adpt_Low_DataStore();

  /* MinMax: '<S815>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S755>/motohawk_calibration9'
   */
  rtb_UnitDelay4_b3 = (real_T)rtb_Product_mp;
  BaseEngineController_LS_B.s815_MinMax = (rtb_UnitDelay4_b3 <=
    (TPS1Adapt_Low_Max_DataStore())) || rtIsNaN((TPS1Adapt_Low_Max_DataStore()))
    ? rtb_UnitDelay4_b3 : (TPS1Adapt_Low_Max_DataStore());

  /* Sum: '<S755>/Sum2' */
  rtb_DataTypeConversion1_e = BaseEngineController_LS_B.s755_Switch -
    BaseEngineController_LS_B.s815_MinMax;

  /* S-Function (motohawk_sfun_data_read): '<S815>/motohawk_data_read1' */
  rtb_Product_mp = TPS1Raw_Adpt_Hi_DataStore();

  /* MinMax: '<S815>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S755>/motohawk_calibration11'
   */
  rtb_UnitDelay4_b3 = (real_T)rtb_Product_mp;
  BaseEngineController_LS_B.s815_MinMax1 = (rtb_UnitDelay4_b3 >=
    (TPS1Adapt_Hi_Min_DataStore())) || rtIsNaN((TPS1Adapt_Hi_Min_DataStore())) ?
    rtb_UnitDelay4_b3 : (TPS1Adapt_Hi_Min_DataStore());

  /* Gain: '<S755>/Gain2' incorporates:
   *  Product: '<S755>/Product1'
   *  Sum: '<S755>/Sum1'
   */
  rtb_DataTypeConversion_e = rtb_DataTypeConversion1_e /
    (BaseEngineController_LS_B.s815_MinMax1 -
     BaseEngineController_LS_B.s815_MinMax) * 100.0;

  /* MinMax: '<S819>/MinMax' incorporates:
   *  Constant: '<S755>/Constant1'
   */
  rtb_DataTypeConversion_e = rtb_DataTypeConversion_e >= 0.0 ?
    rtb_DataTypeConversion_e : 0.0;

  /* MinMax: '<S819>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S755>/motohawk_calibration1'
   */
  BaseEngineController_LS_B.s819_MinMax1 = (rtb_DataTypeConversion_e <=
    (TPS1MaxLimit_DataStore())) || rtIsNaN((TPS1MaxLimit_DataStore())) ?
    rtb_DataTypeConversion_e : (TPS1MaxLimit_DataStore());

  /* S-Function Block: <S817>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s817_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_e = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S817>/Product' incorporates:
   *  MinMax: '<S817>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S817>/motohawk_calibration'
   */
  rtb_DataTypeConversion_e /= (rtb_DataTypeConversion_e >=
    (TPS1FilterConst_DataStore())) || rtIsNaN((TPS1FilterConst_DataStore())) ?
    rtb_DataTypeConversion_e : (TPS1FilterConst_DataStore());

  /* Sum: '<S825>/Sum1' incorporates:
   *  Constant: '<S825>/Constant'
   *  Product: '<S825>/Product'
   *  Product: '<S825>/Product1'
   *  Sum: '<S825>/Sum'
   *  UnitDelay: '<S825>/Unit Delay'
   */
  rtb_Sum1_hw = (1.0 - rtb_DataTypeConversion_e) *
    BaseEngineController_LS_DWork.s825_UnitDelay_DSTATE +
    BaseEngineController_LS_B.s819_MinMax1 * rtb_DataTypeConversion_e;

  /* UnitDelay: '<S818>/Unit Delay1' */
  rtb_UnitDelay1_d = BaseEngineController_LS_DWork.s818_UnitDelay1_DSTATE;

  /* If: '<S818>/If' incorporates:
   *  Logic: '<S818>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_b && rtb_LogicalOperator1_al) {
    /* Outputs for IfAction SubSystem: '<S818>/If Action Subsystem' incorporates:
     *  ActionPort: '<S826>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay1_d, &rtb_Merge_li);

    /* End of Outputs for SubSystem: '<S818>/If Action Subsystem' */
  } else if (rtb_LogicalOperator1_cv) {
    /* Outputs for IfAction SubSystem: '<S818>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S827>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((TPS1DfltValue_DataStore()),
      &rtb_Merge_li);

    /* End of Outputs for SubSystem: '<S818>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S818>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S828>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_Sum1_hw, &rtb_Merge_li);

    /* End of Outputs for SubSystem: '<S818>/If Action Subsystem2' */
  }

  /* End of If: '<S818>/If' */

  /* If: '<S829>/If' incorporates:
   *  Inport: '<S830>/In1'
   *  Inport: '<S831>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S829>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S829>/override_enable'
   */
  if ((TPS1_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S829>/NewValue' incorporates:
     *  ActionPort: '<S830>/Action Port'
     */
    BaseEngineController_LS_B.s829_Merge = (TPS1_new_DataStore());

    /* End of Outputs for SubSystem: '<S829>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S829>/OldValue' incorporates:
     *  ActionPort: '<S831>/Action Port'
     */
    BaseEngineController_LS_B.s829_Merge = rtb_Merge_li;

    /* End of Outputs for SubSystem: '<S829>/OldValue' */
  }

  /* End of If: '<S829>/If' */

  /* Logic: '<S835>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S835>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S835>/motohawk_fault_status4'
   */
  rtb_LogicalOperator1_cv = (IsFaultActive(119) || IsFaultActive(120));

  /* Logic: '<S835>/Logical Operator6' */
  rtb_LogicalOperator6_b = !rtb_LogicalOperator1_cv;

  /* Logic: '<S835>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S835>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S835>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_al = (IsFaultSuspected(119) || IsFaultSuspected(120));

  /* S-Function Block: <S446>/motohawk_ain9 Resource: TPS2AnalogInput */
  {
    extern NativeError_S TPS2AnalogInput_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    TPS2AnalogInput_AnalogInput_Get(&rtb_motohawk_ain9, NULL);
  }

  /* DataTypeConversion: '<S756>/Data Type Conversion1' incorporates:
   *  S-Function (motohawk_sfun_ain): '<S446>/motohawk_ain9'
   */
  rtb_DataTypeConversion1_e = (real_T)rtb_motohawk_ain9;

  /* Switch: '<S756>/Switch' incorporates:
   *  Fcn: '<S756>/Fcn'
   *  S-Function (motohawk_sfun_calibration): '<S756>/motohawk_calibration2'
   */
  if ((TPS2Rev_Polarity_DataStore())) {
    BaseEngineController_LS_B.s756_Switch = 1023.0 - rtb_DataTypeConversion1_e;
  } else {
    BaseEngineController_LS_B.s756_Switch = rtb_DataTypeConversion1_e;
  }

  /* End of Switch: '<S756>/Switch' */

  /* S-Function (motohawk_sfun_data_read): '<S832>/motohawk_data_read' */
  rtb_Product_mp = TPS2Raw_Adpt_Low_DataStore();

  /* MinMax: '<S832>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S756>/motohawk_calibration9'
   */
  rtb_UnitDelay4_b3 = (real_T)rtb_Product_mp;
  BaseEngineController_LS_B.s832_MinMax = (rtb_UnitDelay4_b3 <=
    (TPS2Adapt_Low_Max_DataStore())) || rtIsNaN((TPS2Adapt_Low_Max_DataStore()))
    ? rtb_UnitDelay4_b3 : (TPS2Adapt_Low_Max_DataStore());

  /* Sum: '<S756>/Sum2' */
  rtb_DataTypeConversion1_e = BaseEngineController_LS_B.s756_Switch -
    BaseEngineController_LS_B.s832_MinMax;

  /* S-Function (motohawk_sfun_data_read): '<S832>/motohawk_data_read1' */
  rtb_Product_mp = TPS2Raw_Adpt_Hi_DataStore();

  /* MinMax: '<S832>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S756>/motohawk_calibration11'
   */
  rtb_UnitDelay4_b3 = (real_T)rtb_Product_mp;
  BaseEngineController_LS_B.s832_MinMax1 = (rtb_UnitDelay4_b3 >=
    (TPS2Adapt_Hi_Min_DataStore())) || rtIsNaN((TPS2Adapt_Hi_Min_DataStore())) ?
    rtb_UnitDelay4_b3 : (TPS2Adapt_Hi_Min_DataStore());

  /* Gain: '<S756>/Gain2' incorporates:
   *  Product: '<S756>/Product1'
   *  Sum: '<S756>/Sum1'
   */
  rtb_DataTypeConversion_e = rtb_DataTypeConversion1_e /
    (BaseEngineController_LS_B.s832_MinMax1 -
     BaseEngineController_LS_B.s832_MinMax) * 100.0;

  /* MinMax: '<S836>/MinMax' incorporates:
   *  Constant: '<S756>/Constant1'
   */
  rtb_DataTypeConversion_e = rtb_DataTypeConversion_e >= 0.0 ?
    rtb_DataTypeConversion_e : 0.0;

  /* MinMax: '<S836>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S756>/motohawk_calibration1'
   */
  BaseEngineController_LS_B.s836_MinMax1 = (rtb_DataTypeConversion_e <=
    (TPS2MaxLimit_DataStore())) || rtIsNaN((TPS2MaxLimit_DataStore())) ?
    rtb_DataTypeConversion_e : (TPS2MaxLimit_DataStore());

  /* S-Function Block: <S834>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s834_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_e = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S834>/Product' incorporates:
   *  MinMax: '<S834>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S834>/motohawk_calibration'
   */
  rtb_DataTypeConversion_e /= (rtb_DataTypeConversion_e >=
    (TPS2FilterConst_DataStore())) || rtIsNaN((TPS2FilterConst_DataStore())) ?
    rtb_DataTypeConversion_e : (TPS2FilterConst_DataStore());

  /* Sum: '<S842>/Sum1' incorporates:
   *  Constant: '<S842>/Constant'
   *  Product: '<S842>/Product'
   *  Product: '<S842>/Product1'
   *  Sum: '<S842>/Sum'
   *  UnitDelay: '<S842>/Unit Delay'
   */
  rtb_Sum1_lp = (1.0 - rtb_DataTypeConversion_e) *
    BaseEngineController_LS_DWork.s842_UnitDelay_DSTATE +
    BaseEngineController_LS_B.s836_MinMax1 * rtb_DataTypeConversion_e;

  /* UnitDelay: '<S835>/Unit Delay1' */
  rtb_UnitDelay1_p = BaseEngineController_LS_DWork.s835_UnitDelay1_DSTATE;

  /* If: '<S835>/If' incorporates:
   *  Logic: '<S835>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_b && rtb_LogicalOperator1_al) {
    /* Outputs for IfAction SubSystem: '<S835>/If Action Subsystem' incorporates:
     *  ActionPort: '<S843>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay1_p, &rtb_Merge_mv);

    /* End of Outputs for SubSystem: '<S835>/If Action Subsystem' */
  } else if (rtb_LogicalOperator1_cv) {
    /* Outputs for IfAction SubSystem: '<S835>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S844>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((TPS2DfltValue_DataStore()),
      &rtb_Merge_mv);

    /* End of Outputs for SubSystem: '<S835>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S835>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S845>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_Sum1_lp, &rtb_Merge_mv);

    /* End of Outputs for SubSystem: '<S835>/If Action Subsystem2' */
  }

  /* End of If: '<S835>/If' */

  /* If: '<S846>/If' incorporates:
   *  Inport: '<S847>/In1'
   *  Inport: '<S848>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S846>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S846>/override_enable'
   */
  if ((TPS2_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S846>/NewValue' incorporates:
     *  ActionPort: '<S847>/Action Port'
     */
    BaseEngineController_LS_B.s846_Merge = (TPS2_new_DataStore());

    /* End of Outputs for SubSystem: '<S846>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S846>/OldValue' incorporates:
     *  ActionPort: '<S848>/Action Port'
     */
    BaseEngineController_LS_B.s846_Merge = rtb_Merge_mv;

    /* End of Outputs for SubSystem: '<S846>/OldValue' */
  }

  /* End of If: '<S846>/If' */

  /* Logic: '<S412>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S412>/motohawk_fault_status'
   *  S-Function (motohawk_sfun_fault_status): '<S412>/motohawk_fault_status1'
   */
  rtb_LogicalOperator6_b = (IsFaultActive(113) || IsFaultActive(114));

  /* Logic: '<S412>/Logical Operator6' incorporates:
   *  Logic: '<S412>/Logical Operator5'
   *  S-Function (motohawk_sfun_fault_status): '<S412>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S412>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_al = (rtb_LogicalOperator6_b && (IsFaultActive(119) ||
    IsFaultActive(120)));

  /* Switch: '<S412>/Switch2' incorporates:
   *  Logic: '<S412>/Logical Operator1'
   *  S-Function (motohawk_sfun_fault_status): '<S412>/motohawk_fault_status4'
   */
  if (rtb_LogicalOperator1_al || IsFaultActive(121)) {
    /* MinMax: '<S412>/MinMax' */
    BaseEngineController_LS_B.s412_Switch2 =
      (BaseEngineController_LS_B.s846_Merge >=
       BaseEngineController_LS_B.s829_Merge) || rtIsNaN
      (BaseEngineController_LS_B.s829_Merge) ?
      BaseEngineController_LS_B.s846_Merge :
      BaseEngineController_LS_B.s829_Merge;
  } else {
    /* Switch: '<S412>/Switch1' */
    if (rtb_LogicalOperator6_b) {
      BaseEngineController_LS_B.s412_Switch2 =
        BaseEngineController_LS_B.s846_Merge;
    } else {
      BaseEngineController_LS_B.s412_Switch2 =
        BaseEngineController_LS_B.s829_Merge;
    }

    /* End of Switch: '<S412>/Switch1' */
  }

  /* End of Switch: '<S412>/Switch2' */

  /* RelationalOperator: '<S134>/RelOp' incorporates:
   *  Constant: '<S134>/Constant'
   */
  rtb_LogicalOperator6_b = (BaseEngineController_LS_B.s428_State == 2);

  /* S-Function Block: <S643>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s643_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_ea = ((real_T) delta) * 0.000001;
  }

  /* UnitDelay: '<S643>/Unit Delay' */
  rtb_DataTypeConversion1_e =
    BaseEngineController_LS_DWork.s643_UnitDelay_DSTATE;

  /* Logic: '<S618>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S618>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S618>/motohawk_fault_status4'
   */
  rtb_LogicalOperator1_cv = (IsFaultActive(62) || IsFaultActive(63));

  /* Logic: '<S618>/Logical Operator6' */
  rtb_LogicalOperator1_al = !rtb_LogicalOperator1_cv;

  /* Logic: '<S618>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S618>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S618>/motohawk_fault_status3'
   */
  rtb_RelOp_pu = (IsFaultSuspected(62) || IsFaultSuspected(63));

  /* S-Function Block: <S444>/motohawk_frequency_in Frequency Input Get: FuelSensorPin */
  {
    extern NativeError_S FuelSensorPin_FrequencyInput_Get(uint32_T *frequency,
      int16_T *duty_cycle);
    FuelSensorPin_FrequencyInput_Get
      (&BaseEngineController_LS_B.s444_motohawk_frequency_in, NULL);
  }

  /* DataTypeConversion: '<S618>/Data Type Conversion' */
  rtb_DataTypeConversion_e = (real_T)
    BaseEngineController_LS_B.s444_motohawk_frequency_in;

  /* Product: '<S618>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S618>/motohawk_calibration4'
   */
  rtb_DataTypeConversion_b2 = rtb_DataTypeConversion_e * (FuelSensGain_DataStore
    ());

  /* Sum: '<S618>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S618>/motohawk_calibration5'
   */
  BaseEngineController_LS_B.s618_Sum1 = rtb_DataTypeConversion_b2 +
    (FuelSensOfst_DataStore());

  /* Saturate: '<S618>/Saturation' */
  rtb_Saturation_g = BaseEngineController_LS_B.s618_Sum1 >= 90.0 ? 90.0 :
    BaseEngineController_LS_B.s618_Sum1 <= 0.0 ? 0.0 :
    BaseEngineController_LS_B.s618_Sum1;

  /* UnitDelay: '<S618>/Unit Delay1' */
  rtb_UnitDelay1_ew = BaseEngineController_LS_DWork.s618_UnitDelay1_DSTATE;

  /* If: '<S618>/If' incorporates:
   *  Logic: '<S618>/Logical Operator5'
   */
  if (rtb_LogicalOperator1_al && rtb_RelOp_pu) {
    /* Outputs for IfAction SubSystem: '<S618>/If Action Subsystem' incorporates:
     *  ActionPort: '<S635>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay1_ew, &rtb_Merge_i);

    /* End of Outputs for SubSystem: '<S618>/If Action Subsystem' */
  } else if (rtb_LogicalOperator1_cv) {
    /* Outputs for IfAction SubSystem: '<S618>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S636>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((FuelSensDfltValue_DataStore()),
      &rtb_Merge_i);

    /* End of Outputs for SubSystem: '<S618>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S618>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S637>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_Saturation_g, &rtb_Merge_i);

    /* End of Outputs for SubSystem: '<S618>/If Action Subsystem2' */
  }

  /* End of If: '<S618>/If' */

  /* Product: '<S643>/Product1' incorporates:
   *  S-Function (motohawk_sfun_delta_time): '<S643>/motohawk_delta_time'
   *  Sum: '<S643>/Sum3'
   */
  rtb_DataTypeConversion_c4 = 1.0 / rtb_motohawk_delta_time_ea * (rtb_Merge_i -
    rtb_DataTypeConversion1_e);

  /* MinMax: '<S644>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S641>/motohawk_calibration1'
   */
  rtb_DataTypeConversion_c4 = (rtb_DataTypeConversion_c4 >= (Fall_Rate_DataStore
                                ())) || rtIsNaN((Fall_Rate_DataStore())) ?
    rtb_DataTypeConversion_c4 : (Fall_Rate_DataStore());

  /* Sum: '<S643>/Sum2' incorporates:
   *  MinMax: '<S644>/MinMax1'
   *  Product: '<S643>/Product'
   *  S-Function (motohawk_sfun_calibration): '<S641>/motohawk_calibration'
   *  S-Function (motohawk_sfun_delta_time): '<S643>/motohawk_delta_time'
   */
  rtb_Sum2_gr = ((rtb_DataTypeConversion_c4 <= (Rise_Rate_DataStore())) ||
                 rtIsNaN((Rise_Rate_DataStore())) ? rtb_DataTypeConversion_c4 :
                 (Rise_Rate_DataStore())) * rtb_motohawk_delta_time_ea +
    rtb_DataTypeConversion1_e;

  /* S-Function Block: <S639>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s639_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_c4 = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S639>/Product' incorporates:
   *  MinMax: '<S639>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S639>/motohawk_calibration'
   */
  rtb_DataTypeConversion_c4 /= (rtb_DataTypeConversion_c4 >=
    (FuelSensFilterConst_DataStore())) || rtIsNaN((FuelSensFilterConst_DataStore
    ())) ? rtb_DataTypeConversion_c4 : (FuelSensFilterConst_DataStore());

  /* Sum: '<S642>/Sum1' incorporates:
   *  Constant: '<S642>/Constant'
   *  Product: '<S642>/Product'
   *  Product: '<S642>/Product1'
   *  Sum: '<S642>/Sum'
   *  UnitDelay: '<S642>/Unit Delay'
   */
  rtb_Sum1_mz = (1.0 - rtb_DataTypeConversion_c4) *
    BaseEngineController_LS_DWork.s642_UnitDelay_DSTATE + rtb_Merge_i *
    rtb_DataTypeConversion_c4;

  /* UnitDelay: '<S640>/Unit Delay' */
  rtb_UnitDelay_n = BaseEngineController_LS_DWork.s640_UnitDelay_DSTATE;

  /* UnitDelay: '<S640>/Unit Delay1' */
  rtb_UnitDelay1_h = BaseEngineController_LS_DWork.s640_UnitDelay1_DSTATE;

  /* UnitDelay: '<S640>/Unit Delay2' */
  rtb_DataTypeConversion1_e =
    BaseEngineController_LS_DWork.s640_UnitDelay2_DSTATE;

  /* MultiPortSwitch: '<S634>/Multiport Switch' incorporates:
   *  Product: '<S640>/Product'
   *  S-Function (motohawk_sfun_calibration): '<S634>/motohawk_calibration'
   *  S-Function (motohawk_sfun_calibration): '<S640>/motohawk_calibration'
   */
  switch (((uint8_T)(Filter_Type_Selection_DataStore()))) {
   case 0:
    rtb_DataTypeConversion1_e = rtb_Sum2_gr;
    break;

   case 1:
    rtb_DataTypeConversion1_e = rtb_Sum1_mz;
    break;

   default:
    /* Product: '<S640>/Product3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S640>/motohawk_calibration3'
     */
    rtb_DataTypeConversion1_e *= (Gain3_DataStore());

    /* Sum: '<S640>/Sum2' incorporates:
     *  Product: '<S640>/Product2'
     *  S-Function (motohawk_sfun_calibration): '<S640>/motohawk_calibration2'
     */
    rtb_DataTypeConversion1_e += (Gain2_DataStore()) * rtb_UnitDelay1_h;

    /* Sum: '<S640>/Sum' incorporates:
     *  Product: '<S640>/Product1'
     *  S-Function (motohawk_sfun_calibration): '<S640>/motohawk_calibration1'
     *  Sum: '<S640>/Sum1'
     */
    rtb_DataTypeConversion1_e = ((Gain1_DataStore()) * rtb_UnitDelay_n +
      rtb_DataTypeConversion1_e) + rtb_Merge_i;
    rtb_DataTypeConversion1_e *= (FinalGain_DataStore());
    break;
  }

  /* End of MultiPortSwitch: '<S634>/Multiport Switch' */
  /* If: '<S638>/If' incorporates:
   *  Inport: '<S645>/In1'
   *  Inport: '<S646>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S638>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S638>/override_enable'
   */
  if ((FuelSens_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S638>/NewValue' incorporates:
     *  ActionPort: '<S645>/Action Port'
     */
    BaseEngineController_LS_B.s638_Merge = (FuelSens_new_DataStore());

    /* End of Outputs for SubSystem: '<S638>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S638>/OldValue' incorporates:
     *  ActionPort: '<S646>/Action Port'
     */
    BaseEngineController_LS_B.s638_Merge = rtb_DataTypeConversion1_e;

    /* End of Outputs for SubSystem: '<S638>/OldValue' */
  }

  /* End of If: '<S638>/If' */

  /* Outputs for Enabled SubSystem: '<S15>/Crank' incorporates:
   *  EnablePort: '<S133>/Enable'
   */
  if (rtb_LogicalOperator6_b) {
    if (!BaseEngineController_LS_DWork.s15_Crank_MODE) {
      BaseEngineController_LS_DWork.s15_Crank_MODE = TRUE;
    }

    /* MultiPortSwitch: '<S140>/Multiport Switch2' incorporates:
     *  Constant: '<S140>/ClearFloodFueling3'
     *  S-Function (motohawk_sfun_calibration): '<S140>/motohawk_calibration1'
     *  S-Function (motohawk_sfun_data_read): '<S140>/motohawk_data_read1'
     */
    if (AirControlSource_DataStore() == FALSE) {
      rtb_DataTypeConversion1_e = 0.0;
    } else {
      rtb_DataTypeConversion1_e = (OpenThrottleFPCScalar_DataStore());
    }

    /* End of MultiPortSwitch: '<S140>/Multiport Switch2' */

    /* MultiPortSwitch: '<S140>/Multiport Switch1' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S140>/motohawk_data_read1'
     */
    if (AirControlSource_DataStore() == FALSE) {
      rtb_motohawk_replicate1 = rtb_APP1;
    } else {
      rtb_motohawk_replicate1 = BaseEngineController_LS_B.s412_Switch2;
    }

    /* End of MultiPortSwitch: '<S140>/Multiport Switch1' */

    /* Sum: '<S140>/Add' incorporates:
     *  Constant: '<S140>/ClearFloodFueling1'
     *  Gain: '<S140>/Gain'
     *  Product: '<S140>/Product1'
     */
    rtb_DataTypeConversion1_e = 0.01 * rtb_motohawk_replicate1 *
      rtb_DataTypeConversion1_e + 1.0;

    /* RelationalOperator: '<S140>/Relational Operator' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S140>/motohawk_calibration2'
     */
    rtb_LogicalOperator6_b = (rtb_motohawk_replicate1 >=
      (ClearFloodThreshold_DataStore()));

    /* S-Function Block: <S133>/motohawk_prelookup1 */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (CrankECT05Idx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_LS_B.s726_Merge, (CrankECT05IdxArr_DataStore()), 5,
         (CrankECT05Idx_DataStore()));
      rtb_motohawk_prelookup1_nl = (CrankECT05Idx_DataStore());
    }

    /* S-Function Block: <S133>/motohawk_prelookup */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (CrankRPM05In_DataStore()) = BaseEngineController_LS_B.s616_Sum1;
      (CrankRPM05Idx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_LS_B.s616_Sum1, (CrankRPM05IdxArr_DataStore()), 5,
         (CrankRPM05Idx_DataStore()));
      rtb_motohawk_prelookup_c = (CrankRPM05Idx_DataStore());
    }

    /* S-Function Block: <S133>/motohawk_prelookup2 */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (CrankIAT05Idx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_LS_B.s744_Merge, (CrankIAT05IdxArr_DataStore()), 5,
         (CrankIAT05Idx_DataStore()));
      rtb_motohawk_prelookup2_h = (CrankIAT05Idx_DataStore());
    }

    /* S-Function Block: <S133>/motohawk_prelookup3 */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (CrankOXY05In_DataStore()) = BaseEngineController_LS_B.s638_Merge;
      (CrankOXY05Idx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_LS_B.s638_Merge, (CrankOXY05IdxArr_DataStore()), 5,
         (CrankOXY05Idx_DataStore()));
      rtb_motohawk_prelookup3_n = (CrankOXY05Idx_DataStore());
    }

    /* Switch: '<S140>/Switch' incorporates:
     *  Constant: '<S140>/ClearFloodFueling'
     *  Product: '<S140>/Product2'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S140>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S140>/motohawk_interpolation_1d1'
     *  S-Function (motohawk_sfun_interpolation_2d): '<S140>/motohawk_interpolation_2d'
     *  S-Function (motohawk_sfun_prelookup): '<S133>/motohawk_prelookup'
     *  S-Function (motohawk_sfun_prelookup): '<S133>/motohawk_prelookup1'
     *  S-Function (motohawk_sfun_prelookup): '<S133>/motohawk_prelookup2'
     *  S-Function (motohawk_sfun_prelookup): '<S133>/motohawk_prelookup3'
     */
    if (rtb_LogicalOperator6_b) {
      rtb_motohawk_replicate1 = 0.0;
    } else {
      /* S-Function Block: <S140>/motohawk_interpolation_1d1 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d1_bc = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup3_n, (real_T *) ((CrankFPC_OXYMultTbl_DataStore
             ())), 5);
        (CrankFPC_OXYMult_DataStore()) = rtb_motohawk_interpolation_1d1_bc;
      }

      /* S-Function Block: <S140>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d_o = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup2_h, (real_T *) ((CrankFPC_IATMultTbl_DataStore
             ())), 5);
        (CrankFPC_IATMult_DataStore()) = rtb_motohawk_interpolation_1d_o;
      }

      /* S-Function Block: <S140>/motohawk_interpolation_2d */
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

    /* End of Switch: '<S140>/Switch' */

    /* Product: '<S140>/Product' */
    rtb_Product_bk = rtb_DataTypeConversion1_e * rtb_motohawk_replicate1;

    /* S-Function Block: <S141>/motohawk_interpolation_2d */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_motohawk_interpolation_2d_o = TableInterpolation2D_real_T
        (rtb_motohawk_prelookup1_nl, rtb_motohawk_prelookup_c, (real_T *)
         ((CrankIACMap_DataStore())), 5, 5);
      (CrankIAC_DataStore()) = rtb_motohawk_interpolation_2d_o;
    }

    /* S-Function Block: <S141>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_hw = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup2_h, (real_T *) ((CrankIAC_IATMultTbl_DataStore())),
         5);
      (CrankIAC_IATMult_DataStore()) = rtb_motohawk_interpolation_1d_hw;
    }

    /* S-Function Block: <S141>/motohawk_interpolation_1d1 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d1_os = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup3_n, (real_T *) ((CrankIAC_OXYMultTbl_DataStore())),
         5);
      (CrankIAC_OXYMult_DataStore()) = rtb_motohawk_interpolation_1d1_os;
    }

    /* Product: '<S141>/Product' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S141>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S141>/motohawk_interpolation_1d1'
     *  S-Function (motohawk_sfun_interpolation_2d): '<S141>/motohawk_interpolation_2d'
     *  S-Function (motohawk_sfun_prelookup): '<S133>/motohawk_prelookup'
     *  S-Function (motohawk_sfun_prelookup): '<S133>/motohawk_prelookup1'
     *  S-Function (motohawk_sfun_prelookup): '<S133>/motohawk_prelookup2'
     *  S-Function (motohawk_sfun_prelookup): '<S133>/motohawk_prelookup3'
     */
    rtb_DataTypeConversion1_e = rtb_motohawk_interpolation_2d_o *
      rtb_motohawk_interpolation_1d_hw * rtb_motohawk_interpolation_1d1_os;

    /* Switch: '<S142>/Switch' */
    rtb_motohawk_replicate1 = rtb_DataTypeConversion1_e;

    /* DataTypeConversion: '<S133>/Data Type Conversion' */
    BaseEngineController_LS_B.s135_IACP = rtb_motohawk_replicate1;

    /* Switch: '<S142>/Switch1' incorporates:
     *  Constant: '<S142>/Constant'
     *  Constant: '<S142>/Constant1'
     *  S-Function (motohawk_sfun_data_read): '<S142>/motohawk_data_read'
     *  Sum: '<S142>/Sum'
     */
    if (((uint8_T)IACType_DataStore()) > 0) {
      rtb_motohawk_replicate1 = 100.0 - rtb_DataTypeConversion1_e;
    } else {
      rtb_motohawk_replicate1 = 0.0;
    }

    /* End of Switch: '<S142>/Switch1' */

    /* DataTypeConversion: '<S133>/Data Type Conversion1' */
    BaseEngineController_LS_B.s135_IACS = rtb_motohawk_replicate1;

    /* DataTypeConversion: '<S133>/Data Type Conversion2' incorporates:
     *  Constant: '<S133>/OFF'
     */
    BaseEngineController_LS_B.s135_WASTEGATE = 0.0;

    /* ZeroOrderHold: '<S133>/Zero-Order Hold10' incorporates:
     *  Constant: '<S133>/Mult'
     */
    BaseEngineController_LS_B.s135_FuelMult = 1.0;

    /* ZeroOrderHold: '<S133>/Zero-Order Hold12' incorporates:
     *  Constant: '<S133>/Mult1'
     */
    BaseEngineController_LS_B.s135_FAN1 = 0.0;

    /* ZeroOrderHold: '<S133>/Zero-Order Hold13' incorporates:
     *  Constant: '<S133>/Mult2'
     */
    BaseEngineController_LS_B.s135_FAN2 = 0.0;

    /* ZeroOrderHold: '<S133>/Zero-Order Hold14' incorporates:
     *  Constant: '<S133>/OFF3'
     */
    BaseEngineController_LS_B.s135_AC = FALSE;

    /* S-Function Block: <S133>/motohawk_interpolation_2d */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_motohawk_interpolation_2d_g = TableInterpolation2D_real_T
        (rtb_motohawk_prelookup1_nl, rtb_motohawk_prelookup_c, (real_T *)
         ((CrankSparkMap_DataStore())), 5, 5);
      (CrankSpark_DataStore()) = rtb_motohawk_interpolation_2d_g;
    }

    /* S-Function (motohawk_sfun_replicate): '<S133>/motohawk_replicate1' */

    /* S-Function Block: <S133>/motohawk_replicate1 */
    rtb_motohawk_replicate1 = rtb_motohawk_interpolation_2d_g;

    /* ZeroOrderHold: '<S133>/Zero-Order Hold3' */
    BaseEngineController_LS_B.s135_SparkAdv = rtb_motohawk_replicate1;

    /* S-Function Block: <S133>/motohawk_interpolation_2d1 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_motohawk_interpolation_2d1_b = TableInterpolation2D_real_T
        (rtb_motohawk_prelookup1_nl, rtb_motohawk_prelookup_c, (real_T *)
         ((CrankSpkEnergyMap_DataStore())), 5, 5);
      (CrankSpkEnergy_DataStore()) = rtb_motohawk_interpolation_2d1_b;
    }

    /* ZeroOrderHold: '<S133>/Zero-Order Hold4' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S133>/motohawk_interpolation_2d1'
     *  S-Function (motohawk_sfun_prelookup): '<S133>/motohawk_prelookup'
     *  S-Function (motohawk_sfun_prelookup): '<S133>/motohawk_prelookup1'
     */
    BaseEngineController_LS_B.s135_SparkEnergy =
      rtb_motohawk_interpolation_2d1_b;

    /* S-Function Block: <S133>/motohawk_interpolation_1d4 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d4_m = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_c, (real_T *) ((CrankSOITbl_DataStore())), 5);
      (CrankSOI_DataStore()) = rtb_motohawk_interpolation_1d4_m;
    }

    /* ZeroOrderHold: '<S133>/Zero-Order Hold5' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S133>/motohawk_interpolation_1d4'
     *  S-Function (motohawk_sfun_prelookup): '<S133>/motohawk_prelookup'
     */
    BaseEngineController_LS_B.s135_SOI = rtb_motohawk_interpolation_1d4_m;

    /* S-Function (motohawk_sfun_replicate): '<S133>/motohawk_replicate' */

    /* S-Function Block: <S133>/motohawk_replicate */
    {
      int_T i1;
      real_T *y0 = rtb_motohawk_replicate;
      for (i1=0; i1 < 8; i1++) {
        y0[i1] = rtb_Product_bk;
      }
    }

    /* ZeroOrderHold: '<S133>/Zero-Order Hold6' */
    memcpy((void *)(&BaseEngineController_LS_B.s135_FPC[0]), (void *)
           &rtb_motohawk_replicate[0], sizeof(real_T) << 3U);

    /* ZeroOrderHold: '<S133>/Zero-Order Hold7' incorporates:
     *  Constant: '<S133>/ON'
     */
    BaseEngineController_LS_B.s135_FUELP = TRUE;

    /* S-Function Block: <S133>/motohawk_interpolation_1d5 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d5 = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_c, (real_T *) ((CrankMakeUpEOITbl_DataStore())),
         5);
      (CrankMakeUpEOI_DataStore()) = rtb_motohawk_interpolation_1d5;
    }

    /* ZeroOrderHold: '<S133>/Zero-Order Hold8' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S133>/motohawk_interpolation_1d5'
     *  S-Function (motohawk_sfun_prelookup): '<S133>/motohawk_prelookup'
     */
    BaseEngineController_LS_B.s135_MakeUpEOI = rtb_motohawk_interpolation_1d5;

    /* S-Function Block: <S133>/motohawk_interpolation_1d1 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d1_k = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup1_nl, (real_T *) ((CrankAirflowSetPtTbl_DataStore
           ())), 5);
      (CrankAirflowSetPt_DataStore()) = rtb_motohawk_interpolation_1d1_k;
    }

    /* ZeroOrderHold: '<S133>/Zero-Order Hold9' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S133>/motohawk_interpolation_1d1'
     *  S-Function (motohawk_sfun_prelookup): '<S133>/motohawk_prelookup1'
     */
    BaseEngineController_LS_B.s135_Throttle = rtb_motohawk_interpolation_1d1_k;
  } else {
    if (BaseEngineController_LS_DWork.s15_Crank_MODE) {
      BaseEngineController_LS_DWork.s15_Crank_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S15>/Crank' */
  /* S-Function Block: <S399>/motohawk_prelookup2 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (TPS09In_DataStore()) = BaseEngineController_LS_B.s412_Switch2;
    (TPS09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s412_Switch2, (TPS09IdxArr_DataStore()), 9,
       (TPS09Idx_DataStore()));
    rtb_motohawk_prelookup2 = (TPS09Idx_DataStore());
  }

  /* Logic: '<S416>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S416>/motohawk_fault_status2'
   */
  rtb_LogicalOperator6_b = !IsFaultActive(66);

  /* Logic: '<S416>/Logical Operator2' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S416>/motohawk_fault_status1'
   */
  rtb_LogicalOperator1_al = !IsFaultActive(69);

  /* S-Function (motohawk_sfun_read_canmsg): '<S447>/Read CAN Message' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_4602p0007;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_4602p0007,
      &messageObj);
    if ((BaseEngineController_LS_B.s447_ReadCANMessage_o1 + 1) >
        BaseEngineController_LS_B.s447_ReadCANMessage_o1)
      BaseEngineController_LS_B.s447_ReadCANMessage_o1++;
    if (msg_valid) {
      uint8_T tmp0 = 0;
      uint8_T tmp1 = 0;
      uint8_T tmp2 = 0;
      uint8_T tmp3 = 0;
      uint8_T tmp4 = 0;
      uint8_T tmp5 = 0;
      uint8_T tmp6 = 0;
      ((uint8_T *)(&tmp0))[0] = ((messageObj.u1DataArr[0])) ;
      ((uint8_T *)(&tmp1))[0] = ((messageObj.u1DataArr[1])) ;
      ((uint8_T *)(&tmp2))[0] = ((messageObj.u1DataArr[2])) ;
      ((uint8_T *)(&tmp3))[0] = ((messageObj.u1DataArr[3])) ;
      ((uint8_T *)(&tmp4))[0] = ((messageObj.u1DataArr[5])) ;
      ((uint8_T *)(&tmp5))[0] = ((messageObj.u1DataArr[6])) ;
      ((uint8_T *)(&tmp6))[0] = ((messageObj.u1DataArr[7])) ;
      BaseEngineController_LS_B.s447_ReadCANMessage_o2 = (boolean_T) tmp0;
      BaseEngineController_LS_B.s447_ReadCANMessage_o3 = ((real_T) tmp1) +
        ((real_T) 2000);
      BaseEngineController_LS_B.s447_ReadCANMessage_o4 = (real_T) tmp2;
      BaseEngineController_LS_B.s447_ReadCANMessage_o5 = (real_T) tmp3;
      BaseEngineController_LS_B.s447_ReadCANMessage_o6 = (real_T) tmp4;
      BaseEngineController_LS_B.s447_ReadCANMessage_o7 = (real_T) tmp5;
      BaseEngineController_LS_B.s447_ReadCANMessage_o8 = (real_T) tmp6;
      BaseEngineController_LS_B.s447_ReadCANMessage_o1 = 0;
    }
  }

  /* If: '<S449>/If' incorporates:
   *  Inport: '<S462>/In1'
   *  Inport: '<S463>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S449>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S449>/override_enable'
   */
  if ((GPS_Valid_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S449>/NewValue' incorporates:
     *  ActionPort: '<S462>/Action Port'
     */
    rtb_Merge_n2 = (GPS_Valid_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S449>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S449>/OldValue' incorporates:
     *  ActionPort: '<S463>/Action Port'
     */
    rtb_Merge_n2 = BaseEngineController_LS_B.s447_ReadCANMessage_o2;

    /* End of Outputs for SubSystem: '<S449>/OldValue' */
  }

  /* End of If: '<S449>/If' */

  /* Logic: '<S416>/Logical Operator' */
  rtb_RelationalOperator3_bp = (rtb_Merge_n2 && rtb_LogicalOperator6_b &&
    rtb_LogicalOperator1_al);

  /* S-Function (motohawk_sfun_read_canmsg): '<S447>/Read CAN Message2' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_4604p0006;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_4604p0006,
      &messageObj);
    if ((BaseEngineController_LS_B.s447_ReadCANMessage2_o1 + 1) >
        BaseEngineController_LS_B.s447_ReadCANMessage2_o1)
      BaseEngineController_LS_B.s447_ReadCANMessage2_o1++;
    if (msg_valid) {
      uint16_T tmp0 = 0;
      int16_T tmp1 = 0;
      uint16_T tmp2 = 0;
      uint8_T tmp3 = 0;
      ((uint8_T *)(&tmp0))[0] = ((messageObj.u1DataArr[0])) ;
      ((uint8_T *)(&tmp0))[1] = ((messageObj.u1DataArr[1])) ;
      ((uint8_T *)(&tmp1))[0] = ((messageObj.u1DataArr[2])) ;
      ((uint8_T *)(&tmp1))[1] = ((messageObj.u1DataArr[3])) ;
      ((uint8_T *)(&tmp2))[0] = ((messageObj.u1DataArr[4])) ;
      ((uint8_T *)(&tmp2))[1] = ((messageObj.u1DataArr[5])) ;
      ((uint8_T *)(&tmp3))[0] = ((messageObj.u1DataArr[6])) ;
      BaseEngineController_LS_B.s447_ReadCANMessage2_o2 = ((real_T) tmp0) /
        ((real_T) 62.1373);
      BaseEngineController_LS_B.s447_ReadCANMessage2_o3 = ((real_T) tmp1) /
        ((real_T) 3.28084);
      BaseEngineController_LS_B.s447_ReadCANMessage2_o4 = ((real_T) tmp2) /
        ((real_T) 100);
      BaseEngineController_LS_B.s447_ReadCANMessage2_o5 = (real_T) tmp3;
      BaseEngineController_LS_B.s447_ReadCANMessage2_o1 = 0;
    }
  }

  /* If: '<S461>/If' incorporates:
   *  Inport: '<S486>/In1'
   *  Inport: '<S487>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S461>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S461>/override_enable'
   */
  if ((GPS_Speed_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S461>/NewValue' incorporates:
     *  ActionPort: '<S486>/Action Port'
     */
    rtb_DataTypeConversion_b2 = (GPS_Speed_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S461>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S461>/OldValue' incorporates:
     *  ActionPort: '<S487>/Action Port'
     */
    rtb_DataTypeConversion_b2 =
      BaseEngineController_LS_B.s447_ReadCANMessage2_o2;

    /* End of Outputs for SubSystem: '<S461>/OldValue' */
  }

  /* End of If: '<S461>/If' */

  /* Logic: '<S416>/Logical Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S416>/motohawk_calibration1'
   */
  rtb_RelOp_pu = ((VSPD_GPSPreferred_DataStore()) && rtb_RelationalOperator3_bp);

  /* UnitDelay: '<S567>/Unit Delay' */
  rtb_Switch_mq = BaseEngineController_LS_DWork.s567_UnitDelay_DSTATE;

  /* UnitDelay: '<S605>/Unit Delay' */
  rtb_DataTypeConversion1_e =
    BaseEngineController_LS_DWork.s605_UnitDelay_DSTATE;

  /* S-Function Block: <S596>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s596_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_c4 = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S596>/Product' incorporates:
   *  MinMax: '<S596>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S596>/motohawk_calibration'
   */
  rtb_DataTypeConversion_c4 /= (rtb_DataTypeConversion_c4 >=
    (VSPDFiltConst_DataStore())) || rtIsNaN((VSPDFiltConst_DataStore())) ?
    rtb_DataTypeConversion_c4 : (VSPDFiltConst_DataStore());

  /* Logic: '<S566>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S566>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S566>/motohawk_fault_status4'
   */
  rtb_LogicalOperator1_cv = (IsFaultActive(122) || IsFaultActive(123));

  /* Logic: '<S566>/Logical Operator6' */
  rtb_LogicalOperator6_b = !rtb_LogicalOperator1_cv;

  /* Logic: '<S566>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S566>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S566>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_al = (IsFaultSuspected(122) || IsFaultSuspected(123));

  /* S-Function Block: <S442>/motohawk_frequency_in1 Frequency Input Get: VSPD_Pin */
  {
    extern NativeError_S VSPD_Pin_FrequencyInput_Get(uint32_T *frequency,
      int16_T *duty_cycle);
    VSPD_Pin_FrequencyInput_Get(&rtb_DataTypeConversion6,
      &rtb_DataTypeConversion2_pj);
  }

  /* DataTypeConversion: '<S442>/Data Type Conversion1' */
  rtb_DataTypeConversion_fq = (real_T)rtb_DataTypeConversion6;

  /* Gain: '<S442>/Gain1' */
  BaseEngineController_LS_B.s442_Gain1 = 0.01 * rtb_DataTypeConversion_fq;

  /* S-Function Block: <S601>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (VSPDIdx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s442_Gain1, (VSPDIdxArr_DataStore()), 13,
       (VSPDIdx_DataStore()));
    rtb_motohawk_prelookup_n = (VSPDIdx_DataStore());
  }

  /* S-Function Block: <S601>/motohawk_interpolation_1d */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    BaseEngineController_LS_B.s601_motohawk_interpolation_1d =
      TableInterpolation1D_real_T(rtb_motohawk_prelookup_n, (real_T *)
      ((VSPDTbl_DataStore())), 13);
  }

  /* UnitDelay: '<S566>/Unit Delay' */
  rtb_UnitDelay_jw = BaseEngineController_LS_DWork.s566_UnitDelay_DSTATE;

  /* If: '<S566>/If' incorporates:
   *  Logic: '<S566>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_b && rtb_LogicalOperator1_al) {
    /* Outputs for IfAction SubSystem: '<S566>/If Action Subsystem' incorporates:
     *  ActionPort: '<S597>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay_jw, &rtb_Merge_j);

    /* End of Outputs for SubSystem: '<S566>/If Action Subsystem' */
  } else if (rtb_LogicalOperator1_cv) {
    /* Outputs for IfAction SubSystem: '<S566>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S598>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((VSPDDefault_DataStore()),
      &rtb_Merge_j);

    /* End of Outputs for SubSystem: '<S566>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S566>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S599>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      (BaseEngineController_LS_B.s601_motohawk_interpolation_1d, &rtb_Merge_j);

    /* End of Outputs for SubSystem: '<S566>/If Action Subsystem2' */
  }

  /* End of If: '<S566>/If' */

  /* Sum: '<S602>/Sum1' incorporates:
   *  Constant: '<S602>/Constant'
   *  Product: '<S602>/Product'
   *  Product: '<S602>/Product1'
   *  Sum: '<S602>/Sum'
   *  UnitDelay: '<S602>/Unit Delay'
   */
  rtb_Sum1_g3 = (1.0 - rtb_DataTypeConversion_c4) *
    BaseEngineController_LS_DWork.s602_UnitDelay_DSTATE + rtb_Merge_j *
    rtb_DataTypeConversion_c4;

  /* If: '<S600>/If' incorporates:
   *  Inport: '<S603>/In1'
   *  Inport: '<S604>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S600>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S600>/override_enable'
   */
  if ((VSPD_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S600>/NewValue' incorporates:
     *  ActionPort: '<S603>/Action Port'
     */
    BaseEngineController_LS_B.s600_Merge = (VSPD_new_DataStore());

    /* End of Outputs for SubSystem: '<S600>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S600>/OldValue' incorporates:
     *  ActionPort: '<S604>/Action Port'
     */
    BaseEngineController_LS_B.s600_Merge = rtb_Sum1_g3;

    /* End of Outputs for SubSystem: '<S600>/OldValue' */
  }

  /* End of If: '<S600>/If' */

  /* Sum: '<S605>/Sum2' */
  rtb_DataTypeConversion1_e = BaseEngineController_LS_B.s600_Merge -
    rtb_DataTypeConversion1_e;

  /* S-Function Block: <S605>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s605_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_o = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S605>/Product' incorporates:
   *  S-Function (motohawk_sfun_delta_time): '<S605>/motohawk_delta_time'
   */
  rtb_DataTypeConversion_fq = rtb_DataTypeConversion1_e /
    rtb_motohawk_delta_time_o;

  /* Abs: '<S567>/Abs' */
  rtb_DataTypeConversion_fq = fabs(rtb_DataTypeConversion_fq);

  /* RelationalOperator: '<S567>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S567>/motohawk_calibration2'
   */
  rtb_LogicalOperator6_b = (rtb_DataTypeConversion_fq >=
    (VSPD_RateReject_DataStore()));

  /* Logic: '<S567>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S567>/motohawk_calibration1'
   */
  BaseEngineController_LS_B.s567_LogicalOperator = ((rtb_LogicalOperator6_b &&
    (VSPD_RateReject_Enable_DataStore())));

  /* Sum: '<S567>/Sum' incorporates:
   *  UnitDelay: '<S567>/Unit Delay1'
   */
  rtb_DataTypeConversion_fq = BaseEngineController_LS_B.s600_Merge -
    BaseEngineController_LS_DWork.s567_UnitDelay1_DSTATE;

  /* Abs: '<S567>/Abs2' */
  rtb_DataTypeConversion_fq = fabs(rtb_DataTypeConversion_fq);

  /* RelationalOperator: '<S567>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S567>/motohawk_calibration4'
   */
  rtb_LogicalOperator6_b = (rtb_DataTypeConversion_fq >=
    (VPSD_ChangeReject_DataStore()));

  /* Abs: '<S567>/Abs1' */
  rtb_DataTypeConversion_fq = fabs(BaseEngineController_LS_B.s600_Merge);

  /* RelationalOperator: '<S567>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S567>/motohawk_calibration3'
   */
  rtb_LogicalOperator1_al = (rtb_DataTypeConversion_fq <=
    (VSPD_ZeroSpeed_DataStore()));

  /* Logic: '<S567>/Logical Operator3' incorporates:
   *  Logic: '<S567>/Logical Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S567>/motohawk_calibration5'
   */
  BaseEngineController_LS_B.s567_LogicalOperator3 = ((rtb_LogicalOperator6_b &&
    rtb_LogicalOperator1_al && (VSPD_ChangeReject_Enable_DataStore())));

  /* Logic: '<S567>/Logical Operator1' */
  rtb_LogicalOperator1_cv = (BaseEngineController_LS_B.s567_LogicalOperator ||
    BaseEngineController_LS_B.s567_LogicalOperator3);

  /* UnitDelay: '<S567>/Unit Delay2' */
  rtb_RelationalOperator6_h =
    BaseEngineController_LS_DWork.s567_UnitDelay2_DSTATE;

  /* Memory: '<S606>/Memory' */
  rtb_RelationalOperator5_fz =
    BaseEngineController_LS_DWork.s606_Memory_PreviousInput;

  /* CombinatorialLogic: '<S606>/Logic' */
  {
    uint_T rowidx= 0;

    /* Compute the truth table row index corresponding to the input */
    rowidx = (rowidx << 1) + (uint_T)(rtb_LogicalOperator1_cv != 0);
    rowidx = (rowidx << 1) + (uint_T)(rtb_RelationalOperator6_h != 0);
    rowidx = (rowidx << 1) + (uint_T)(rtb_RelationalOperator5_fz != 0);

    /* Copy the appropriate row of the table into the block output vector */
    rtb_Logic_j[0] = BaseEngineController_LS_ConstP.pooled909[rowidx];
    rtb_Logic_j[1] = BaseEngineController_LS_ConstP.pooled909[rowidx + 8];
  }

  /* Switch: '<S567>/Switch' incorporates:
   *  Logic: '<S567>/Logical Operator5'
   *  UnitDelay: '<S567>/Unit Delay3'
   */
  if (rtb_Logic_j[0] || rtb_LogicalOperator1_cv) {
    BaseEngineController_LS_B.s567_Switch = rtb_Switch_mq;
  } else {
    BaseEngineController_LS_B.s567_Switch =
      BaseEngineController_LS_DWork.s567_UnitDelay3_DSTATE;
  }

  /* End of Switch: '<S567>/Switch' */

  /* Switch: '<S416>/Switch2' */
  if (rtb_RelOp_pu) {
    /* Switch: '<S416>/Switch1' incorporates:
     *  Constant: '<S416>/Constant1'
     */
    if (rtb_RelationalOperator3_bp) {
      BaseEngineController_LS_B.s416_Switch2 = rtb_DataTypeConversion_b2;
    } else {
      BaseEngineController_LS_B.s416_Switch2 = 0.0;
    }

    /* End of Switch: '<S416>/Switch1' */
  } else {
    /* Switch: '<S416>/Switch' incorporates:
     *  Constant: '<S416>/Constant'
     *  S-Function (motohawk_sfun_calibration): '<S416>/motohawk_calibration'
     */
    if ((VSPD_DigitalPresent_DataStore())) {
      BaseEngineController_LS_B.s416_Switch2 =
        BaseEngineController_LS_B.s567_Switch;
    } else {
      BaseEngineController_LS_B.s416_Switch2 = 0.0;
    }

    /* End of Switch: '<S416>/Switch' */
  }

  /* End of Switch: '<S416>/Switch2' */
  /* S-Function Block: <S400>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (VSPD17In_DataStore()) = BaseEngineController_LS_B.s416_Switch2;
    (VSPD17Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s416_Switch2, (VSPD17IdxArr_DataStore()), 17,
       (VSPD17Idx_DataStore()));
    rtb_motohawk_prelookup1_k = (VSPD17Idx_DataStore());
  }

  /* Outputs for Atomic SubSystem: '<S361>/Base TPS Request' */

  /* UnitDelay: '<S402>/Unit Delay2' */
  rtb_UnitDelay_gh = BaseEngineController_LS_DWork.s402_UnitDelay2_DSTATE;

  /* S-Function Block: <S402>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (APP17In_DataStore()) = BaseEngineController_LS_B.s405_Switch1;
    (APP17Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s405_Switch1, (APP17IdxArr_DataStore()), 17,
       (APP17Idx_DataStore()));
    rtb_motohawk_prelookup_gv = (APP17Idx_DataStore());
  }

  /* S-Function Block: <S402>/motohawk_interpolation_2d */
  {
    extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
      real_T *map_data, uint32_T row_sz, uint32_T col_sz);
    rtb_motohawk_interpolation_2d_h = TableInterpolation2D_real_T
      (rtb_motohawk_prelookup1_k, rtb_motohawk_prelookup_gv, (real_T *)
       ((ETCRequestMap_DataStore())), 17, 17);
    (ETCRequest_DataStore()) = rtb_motohawk_interpolation_2d_h;
  }

  /* RelationalOperator: '<S402>/Relational Operator3' */
  BaseEngineController_LS_B.s402_RelationalOperator3 = ((rtb_UnitDelay_gh <
    rtb_motohawk_interpolation_2d_h));

  /* Outputs for Enabled SubSystem: '<S402>/PassThrough1' */
  BaseEngineController_LS_PassThrough1
    (BaseEngineController_LS_B.s402_RelationalOperator3,
     (ETCReqIncFiltC_DataStore()), &BaseEngineController_LS_B.s402_Merge);

  /* End of Outputs for SubSystem: '<S402>/PassThrough1' */

  /* RelationalOperator: '<S402>/Relational Operator2' */
  rtb_RelationalOperator2_bw = (rtb_UnitDelay_gh >
    rtb_motohawk_interpolation_2d_h);

  /* Outputs for Enabled SubSystem: '<S402>/PassThrough2' */
  BaseEngineController_LS_PassThrough1(rtb_RelationalOperator2_bw,
    (ETCReqDecFiltC_DataStore()), &BaseEngineController_LS_B.s402_Merge);

  /* End of Outputs for SubSystem: '<S402>/PassThrough2' */

  /* S-Function Block: <S420>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s420_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_l0 = ((real_T) delta) * 0.000001;
  }

  /* S-Function Block: <S402>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s402_motohawk_delta_time_DWORK1, NULL);
    rtb_UnitDelay_gh = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S402>/Product' incorporates:
   *  MinMax: '<S402>/MinMax'
   */
  rtb_UnitDelay_gh /= (rtb_UnitDelay_gh >= BaseEngineController_LS_B.s402_Merge)
    || rtIsNaN(BaseEngineController_LS_B.s402_Merge) ? rtb_UnitDelay_gh :
    BaseEngineController_LS_B.s402_Merge;

  /* Product: '<S417>/Product' */
  rtb_DataTypeConversion1_e = rtb_motohawk_interpolation_2d_h * rtb_UnitDelay_gh;

  /* Sum: '<S417>/Sum' incorporates:
   *  Constant: '<S417>/Constant'
   */
  rtb_DataTypeConversion_b2 = 1.0 - rtb_UnitDelay_gh;

  /* UnitDelay: '<S417>/Unit Delay' */
  rtb_UnitDelay_gh = BaseEngineController_LS_DWork.s417_UnitDelay_DSTATE;

  /* Sum: '<S417>/Sum1' incorporates:
   *  Product: '<S417>/Product1'
   */
  rtb_DataTypeConversion_b2 = rtb_DataTypeConversion_b2 * rtb_UnitDelay_gh +
    rtb_DataTypeConversion1_e;

  /* UnitDelay: '<S420>/Unit Delay' */
  rtb_UnitDelay_gh = BaseEngineController_LS_DWork.s420_UnitDelay_DSTATE;

  /* Product: '<S420>/Product1' incorporates:
   *  S-Function (motohawk_sfun_delta_time): '<S420>/motohawk_delta_time'
   *  Sum: '<S420>/Sum3'
   */
  rtb_DataTypeConversion1_e = 1.0 / rtb_motohawk_delta_time_l0 *
    (rtb_DataTypeConversion_b2 - rtb_UnitDelay_gh);

  /* S-Function Block: <S402>/motohawk_interpolation_1d3 */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_motohawk_interpolation_1d1_ku = TableInterpolation1D_real_T
      (rtb_motohawk_prelookup2, (real_T *) ((ETCReqFallRateTbl_DataStore())), 9);
    (ETCReqFallRate_DataStore()) = rtb_motohawk_interpolation_1d1_ku;
  }

  /* MinMax: '<S421>/MinMax' */
  rtb_Abs_k = (rtb_DataTypeConversion1_e >= rtb_motohawk_interpolation_1d1_ku) ||
    rtIsNaN(rtb_motohawk_interpolation_1d1_ku) ? rtb_DataTypeConversion1_e :
    rtb_motohawk_interpolation_1d1_ku;

  /* S-Function Block: <S402>/motohawk_interpolation_1d1 */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_motohawk_interpolation_1d1_ku = TableInterpolation1D_real_T
      (rtb_motohawk_prelookup2, (real_T *) ((ETCReqRiseRateTbl_DataStore())), 9);
    (ETCReqRiseRate_DataStore()) = rtb_motohawk_interpolation_1d1_ku;
  }

  /* Sum: '<S420>/Sum2' incorporates:
   *  MinMax: '<S421>/MinMax'
   *  MinMax: '<S421>/MinMax1'
   *  Product: '<S420>/Product'
   *  S-Function (motohawk_sfun_delta_time): '<S420>/motohawk_delta_time'
   */
  BaseEngineController_LS_B.s420_Sum2 = ((rtb_Abs_k <=
    rtb_motohawk_interpolation_1d1_ku) || rtIsNaN
    (rtb_motohawk_interpolation_1d1_ku) ? rtb_Abs_k :
    rtb_motohawk_interpolation_1d1_ku) * rtb_motohawk_delta_time_l0 +
    rtb_UnitDelay_gh;

  /* Update for UnitDelay: '<S402>/Unit Delay2' incorporates:
   *  UnitDelay: '<S402>/Unit Delay1'
   */
  BaseEngineController_LS_DWork.s402_UnitDelay2_DSTATE =
    BaseEngineController_LS_DWork.s402_UnitDelay1_DSTATE;

  /* Update for UnitDelay: '<S417>/Unit Delay' */
  BaseEngineController_LS_DWork.s417_UnitDelay_DSTATE =
    rtb_DataTypeConversion_b2;

  /* Update for UnitDelay: '<S420>/Unit Delay' */
  BaseEngineController_LS_DWork.s420_UnitDelay_DSTATE =
    BaseEngineController_LS_B.s420_Sum2;

  /* Update for UnitDelay: '<S402>/Unit Delay1' incorporates:
   *  UnitDelay: '<S402>/Unit Delay3'
   */
  BaseEngineController_LS_DWork.s402_UnitDelay1_DSTATE =
    BaseEngineController_LS_DWork.s402_UnitDelay3_DSTATE;

  /* Update for UnitDelay: '<S402>/Unit Delay3' incorporates:
   *  UnitDelay: '<S402>/Unit Delay4'
   */
  BaseEngineController_LS_DWork.s402_UnitDelay3_DSTATE =
    BaseEngineController_LS_DWork.s402_UnitDelay4_DSTATE;

  /* Update for UnitDelay: '<S402>/Unit Delay4' */
  BaseEngineController_LS_DWork.s402_UnitDelay4_DSTATE =
    rtb_motohawk_interpolation_2d_h;

  /* End of Outputs for SubSystem: '<S361>/Base TPS Request' */

  /* UnitDelay: '<S410>/Unit Delay' */
  rtb_DataTypeConversion_b2 =
    BaseEngineController_LS_DWork.s410_UnitDelay_DSTATE;

  /* Sum: '<S410>/Sum' incorporates:
   *  Constant: '<S410>/Constant'
   *  S-Function (motohawk_sfun_calibration): '<S410>/motohawk_calibration'
   */
  rtb_Switch_mq = 1.0 - (O2DelagFilterConst_DataStore());

  /* S-Function Block: <S508>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s508_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_fq = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S508>/Product' incorporates:
   *  MinMax: '<S508>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S508>/motohawk_calibration'
   */
  rtb_DataTypeConversion_fq /= (rtb_DataTypeConversion_fq >=
    (Bank1_EquivRatioFilterConst_DataStore())) || rtIsNaN
    ((Bank1_EquivRatioFilterConst_DataStore())) ? rtb_DataTypeConversion_fq :
    (Bank1_EquivRatioFilterConst_DataStore());

  /* Logic: '<S488>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S488>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S488>/motohawk_fault_status4'
   */
  rtb_RelationalOperator5_fz = (IsFaultActive(21) || IsFaultActive(22));

  /* Logic: '<S488>/Logical Operator6' */
  rtb_LogicalOperator6_b = !rtb_RelationalOperator5_fz;

  /* Logic: '<S488>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S488>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S488>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_al = (IsFaultSuspected(21) || IsFaultSuspected(22));

  /* S-Function (motohawk_sfun_read_canmsg): '<S448>/Read CAN Message' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_4748p0007;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_4748p0007,
      &messageObj);
    if ((BaseEngineController_LS_B.s448_ReadCANMessage_o1 + 1) >
        BaseEngineController_LS_B.s448_ReadCANMessage_o1)
      BaseEngineController_LS_B.s448_ReadCANMessage_o1++;
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
      ((uint8_T *)(&tmp4))[0] = ((messageObj.u1DataArr[6] & 0x00000002) >> 1) ;
      ((uint8_T *)(&tmp5))[0] = ((messageObj.u1DataArr[6] & 0x00000020) >> 5) ;
      ((uint8_T *)(&tmp6))[0] = ((messageObj.u1DataArr[6] & 0x00000080) >> 7) ;
      ((uint8_T *)(&tmp7))[0] = ((messageObj.u1DataArr[7] & 0x0000001F)) ;
      ((uint8_T *)(&tmp8))[0] = ((messageObj.u1DataArr[7] & 0x00000040) >> 6) ;
      BaseEngineController_LS_B.s448_ReadCANMessage_o2 = ((real_T) tmp0) /
        ((real_T) 10000);
      BaseEngineController_LS_B.s448_ReadCANMessage_o3 = ((real_T) tmp1) /
        ((real_T) 1000);
      BaseEngineController_LS_B.s448_ReadCANMessage_o4 = ((real_T) tmp2) /
        ((real_T) 10);
      BaseEngineController_LS_B.s448_ReadCANMessage_o5 = ((real_T) tmp3) /
        ((real_T) 10);
      BaseEngineController_LS_B.s448_ReadCANMessage_o6 = (real_T) tmp4;
      BaseEngineController_LS_B.s448_ReadCANMessage_o7 = (real_T) tmp5;
      BaseEngineController_LS_B.s448_ReadCANMessage_o8 = (real_T) tmp6;
      BaseEngineController_LS_B.s448_ReadCANMessage_o9 = (real_T) tmp7;
      BaseEngineController_LS_B.s448_ReadCANMessage_o10 = (real_T) tmp8;
      BaseEngineController_LS_B.s448_ReadCANMessage_o1 = 0;
    }
  }

  /* If: '<S490>/If' incorporates:
   *  Inport: '<S524>/In1'
   *  Inport: '<S525>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S490>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S490>/override_enable'
   */
  if ((Bank1_Lambda_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S490>/NewValue' incorporates:
     *  ActionPort: '<S524>/Action Port'
     */
    rtb_Merge_as = (Bank1_Lambda_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S490>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S490>/OldValue' incorporates:
     *  ActionPort: '<S525>/Action Port'
     */
    rtb_Merge_as = BaseEngineController_LS_B.s448_ReadCANMessage_o2;

    /* End of Outputs for SubSystem: '<S490>/OldValue' */
  }

  /* End of If: '<S490>/If' */

  /* Math: '<S448>/Math Function' incorporates:
   *  Saturate: '<S448>/Saturation'
   *
   * About '<S448>/Math Function':
   *  Operator: reciprocal
   */
  BaseEngineController_LS_B.s448_MathFunction = 1.0 / (rtb_Merge_as >= 0.1 ?
    rtb_Merge_as : 0.1);

  /* Product: '<S488>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S488>/motohawk_calibration4'
   */
  rtb_DataTypeConversion1_e = BaseEngineController_LS_B.s448_MathFunction *
    (Bank1_EquivRatioGain_DataStore());

  /* Sum: '<S488>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S488>/motohawk_calibration5'
   */
  BaseEngineController_LS_B.s488_Sum1 = rtb_DataTypeConversion1_e +
    (Bank1_EquivRatioOfst_DataStore());

  /* UnitDelay: '<S488>/Unit Delay1' */
  rtb_UnitDelay1_jn = BaseEngineController_LS_DWork.s488_UnitDelay1_DSTATE;

  /* If: '<S488>/If' incorporates:
   *  Logic: '<S488>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_b && rtb_LogicalOperator1_al) {
    /* Outputs for IfAction SubSystem: '<S488>/If Action Subsystem' incorporates:
     *  ActionPort: '<S509>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay1_jn, &rtb_Merge_ox);

    /* End of Outputs for SubSystem: '<S488>/If Action Subsystem' */
  } else if (rtb_RelationalOperator5_fz) {
    /* Outputs for IfAction SubSystem: '<S488>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S510>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      ((Bank1_EquivRatioDfltValue_DataStore()), &rtb_Merge_ox);

    /* End of Outputs for SubSystem: '<S488>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S488>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S511>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      (BaseEngineController_LS_B.s488_Sum1, &rtb_Merge_ox);

    /* End of Outputs for SubSystem: '<S488>/If Action Subsystem2' */
  }

  /* End of If: '<S488>/If' */

  /* Sum: '<S513>/Sum1' incorporates:
   *  Constant: '<S513>/Constant'
   *  Product: '<S513>/Product'
   *  Product: '<S513>/Product1'
   *  Sum: '<S513>/Sum'
   *  UnitDelay: '<S513>/Unit Delay'
   */
  rtb_Sum1_ir = (1.0 - rtb_DataTypeConversion_fq) *
    BaseEngineController_LS_DWork.s513_UnitDelay_DSTATE + rtb_Merge_ox *
    rtb_DataTypeConversion_fq;

  /* If: '<S512>/If' incorporates:
   *  Inport: '<S514>/In1'
   *  Inport: '<S515>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S512>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S512>/override_enable'
   */
  if ((Bank1_EquivRatio_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S512>/NewValue' incorporates:
     *  ActionPort: '<S514>/Action Port'
     */
    BaseEngineController_LS_B.s512_Merge = (Bank1_EquivRatio_new_DataStore());

    /* End of Outputs for SubSystem: '<S512>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S512>/OldValue' incorporates:
     *  ActionPort: '<S515>/Action Port'
     */
    BaseEngineController_LS_B.s512_Merge = rtb_Sum1_ir;

    /* End of Outputs for SubSystem: '<S512>/OldValue' */
  }

  /* End of If: '<S512>/If' */

  /* S-Function Block: <S516>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s516_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_fq = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S516>/Product' incorporates:
   *  MinMax: '<S516>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S516>/motohawk_calibration'
   */
  rtb_DataTypeConversion_fq /= (rtb_DataTypeConversion_fq >=
    (Bank2_EquivRatioFilterConst_DataStore())) || rtIsNaN
    ((Bank2_EquivRatioFilterConst_DataStore())) ? rtb_DataTypeConversion_fq :
    (Bank2_EquivRatioFilterConst_DataStore());

  /* Logic: '<S489>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S489>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S489>/motohawk_fault_status4'
   */
  rtb_RelationalOperator5_fz = (IsFaultActive(23) || IsFaultActive(24));

  /* Logic: '<S489>/Logical Operator6' */
  rtb_LogicalOperator6_b = !rtb_RelationalOperator5_fz;

  /* Logic: '<S489>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S489>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S489>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_al = (IsFaultSuspected(23) || IsFaultSuspected(24));

  /* S-Function (motohawk_sfun_read_canmsg): '<S448>/Read CAN Message1' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_4749p0006;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_4749p0006,
      &messageObj);
    if ((BaseEngineController_LS_B.s448_ReadCANMessage1_o1 + 1) >
        BaseEngineController_LS_B.s448_ReadCANMessage1_o1)
      BaseEngineController_LS_B.s448_ReadCANMessage1_o1++;
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
      ((uint8_T *)(&tmp4))[0] = ((messageObj.u1DataArr[6] & 0x00000002) >> 1) ;
      ((uint8_T *)(&tmp5))[0] = ((messageObj.u1DataArr[6] & 0x00000020) >> 5) ;
      ((uint8_T *)(&tmp6))[0] = ((messageObj.u1DataArr[6] & 0x00000080) >> 7) ;
      ((uint8_T *)(&tmp7))[0] = ((messageObj.u1DataArr[7] & 0x0000001F)) ;
      ((uint8_T *)(&tmp8))[0] = ((messageObj.u1DataArr[7] & 0x00000040) >> 6) ;
      BaseEngineController_LS_B.s448_ReadCANMessage1_o2 = ((real_T) tmp0) /
        ((real_T) 10000);
      BaseEngineController_LS_B.s448_ReadCANMessage1_o3 = ((real_T) tmp1) /
        ((real_T) 1000);
      BaseEngineController_LS_B.s448_ReadCANMessage1_o4 = ((real_T) tmp2) /
        ((real_T) 10);
      BaseEngineController_LS_B.s448_ReadCANMessage1_o5 = ((real_T) tmp3) /
        ((real_T) 10);
      BaseEngineController_LS_B.s448_ReadCANMessage1_o6 = (real_T) tmp4;
      BaseEngineController_LS_B.s448_ReadCANMessage1_o7 = (real_T) tmp5;
      BaseEngineController_LS_B.s448_ReadCANMessage1_o8 = (real_T) tmp6;
      BaseEngineController_LS_B.s448_ReadCANMessage1_o9 = (real_T) tmp7;
      BaseEngineController_LS_B.s448_ReadCANMessage1_o10 = (real_T) tmp8;
      BaseEngineController_LS_B.s448_ReadCANMessage1_o1 = 0;
    }
  }

  /* If: '<S507>/If' incorporates:
   *  Inport: '<S558>/In1'
   *  Inport: '<S559>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S507>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S507>/override_enable'
   */
  if ((Bank2_Lambda_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S507>/NewValue' incorporates:
     *  ActionPort: '<S558>/Action Port'
     */
    rtb_DataTypeConversion1_e = (Bank2_Lambda_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S507>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S507>/OldValue' incorporates:
     *  ActionPort: '<S559>/Action Port'
     */
    rtb_DataTypeConversion1_e =
      BaseEngineController_LS_B.s448_ReadCANMessage1_o2;

    /* End of Outputs for SubSystem: '<S507>/OldValue' */
  }

  /* End of If: '<S507>/If' */

  /* Math: '<S448>/Math Function1' incorporates:
   *  Saturate: '<S448>/Saturation1'
   *
   * About '<S448>/Math Function1':
   *  Operator: reciprocal
   */
  BaseEngineController_LS_B.s448_MathFunction1 = 1.0 /
    (rtb_DataTypeConversion1_e >= 0.1 ? rtb_DataTypeConversion1_e : 0.1);

  /* Product: '<S489>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S489>/motohawk_calibration4'
   */
  rtb_DataTypeConversion1_e = BaseEngineController_LS_B.s448_MathFunction1 *
    (Bank2_EquivRatioGain_DataStore());

  /* Sum: '<S489>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S489>/motohawk_calibration5'
   */
  BaseEngineController_LS_B.s489_Sum1 = rtb_DataTypeConversion1_e +
    (Bank2_EquivRatioOfst_DataStore());

  /* UnitDelay: '<S489>/Unit Delay1' */
  rtb_UnitDelay1_m = BaseEngineController_LS_DWork.s489_UnitDelay1_DSTATE;

  /* If: '<S489>/If' incorporates:
   *  Logic: '<S489>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_b && rtb_LogicalOperator1_al) {
    /* Outputs for IfAction SubSystem: '<S489>/If Action Subsystem' incorporates:
     *  ActionPort: '<S517>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay1_m, &rtb_Merge_h);

    /* End of Outputs for SubSystem: '<S489>/If Action Subsystem' */
  } else if (rtb_RelationalOperator5_fz) {
    /* Outputs for IfAction SubSystem: '<S489>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S518>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      ((Bank2_EquivRatioDfltValue_DataStore()), &rtb_Merge_h);

    /* End of Outputs for SubSystem: '<S489>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S489>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S519>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      (BaseEngineController_LS_B.s489_Sum1, &rtb_Merge_h);

    /* End of Outputs for SubSystem: '<S489>/If Action Subsystem2' */
  }

  /* End of If: '<S489>/If' */

  /* Sum: '<S521>/Sum1' incorporates:
   *  Constant: '<S521>/Constant'
   *  Product: '<S521>/Product'
   *  Product: '<S521>/Product1'
   *  Sum: '<S521>/Sum'
   *  UnitDelay: '<S521>/Unit Delay'
   */
  rtb_Sum1_du = (1.0 - rtb_DataTypeConversion_fq) *
    BaseEngineController_LS_DWork.s521_UnitDelay_DSTATE + rtb_Merge_h *
    rtb_DataTypeConversion_fq;

  /* If: '<S520>/If' incorporates:
   *  Inport: '<S522>/In1'
   *  Inport: '<S523>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S520>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S520>/override_enable'
   */
  if ((Bank2_EquivRatio_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S520>/NewValue' incorporates:
     *  ActionPort: '<S522>/Action Port'
     */
    BaseEngineController_LS_B.s520_Merge = (Bank2_EquivRatio_new_DataStore());

    /* End of Outputs for SubSystem: '<S520>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S520>/OldValue' incorporates:
     *  ActionPort: '<S523>/Action Port'
     */
    BaseEngineController_LS_B.s520_Merge = rtb_Sum1_du;

    /* End of Outputs for SubSystem: '<S520>/OldValue' */
  }

  /* End of If: '<S520>/If' */

  /* MultiPortSwitch: '<S448>/Multiport Switch' incorporates:
   *  Gain: '<S448>/Gain'
   *  S-Function (motohawk_sfun_calibration): '<S448>/motohawk_calibration2'
   *  Sum: '<S448>/Add'
   */
  if (((uint8_T)(Bank2_Enable_DataStore())) == 0) {
    BaseEngineController_LS_B.s448_MultiportSwitch =
      BaseEngineController_LS_B.s512_Merge;
  } else {
    BaseEngineController_LS_B.s448_MultiportSwitch =
      (BaseEngineController_LS_B.s512_Merge +
       BaseEngineController_LS_B.s520_Merge) * 0.5;
  }

  /* End of MultiPortSwitch: '<S448>/Multiport Switch' */

  /* Sum: '<S410>/Sum1' incorporates:
   *  Product: '<S410>/Product'
   *  Product: '<S410>/Product1'
   *  S-Function (motohawk_sfun_calibration): '<S410>/motohawk_calibration'
   */
  BaseEngineController_LS_B.s410_Sum1 = rtb_DataTypeConversion_b2 *
    rtb_Switch_mq + (O2DelagFilterConst_DataStore()) *
    BaseEngineController_LS_B.s448_MultiportSwitch;

  /* S-Function Block: <S433>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s433_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_f = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S433>/Switch' incorporates:
   *  Constant: '<S432>/Constant'
   *  Constant: '<S433>/Constant'
   *  RelationalOperator: '<S432>/RelOp'
   *  S-Function (motohawk_sfun_data_read): '<S414>/motohawk_data_read'
   *  S-Function (motohawk_sfun_data_read): '<S433>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S433>/motohawk_delta_time'
   *  Sum: '<S433>/Sum'
   */
  if (((uint8_T)EngineState_DataStore()) == 3) {
    BaseEngineController_LS_B.s433_Switch = rtb_motohawk_delta_time_f +
      TimeSinceRunTimer_DataStore();
  } else {
    BaseEngineController_LS_B.s433_Switch = 0.0;
  }

  /* End of Switch: '<S433>/Switch' */
  /* S-Function Block: <S397>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (RPM09In_DataStore()) = BaseEngineController_LS_B.s616_Sum1;
    (RPM09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s616_Sum1, (RPM09IdxArr_DataStore()), 9,
       (RPM09Idx_DataStore()));
    BaseEngineController_LS_B.s397_motohawk_prelookup1 = (RPM09Idx_DataStore());
  }

  /* S-Function Block: <S397>/motohawk_prelookup5 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (RPM17In_DataStore()) = BaseEngineController_LS_B.s616_Sum1;
    (RPM17Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s616_Sum1, (RPM17IdxArr_DataStore()), 17,
       (RPM17Idx_DataStore()));
    BaseEngineController_LS_B.s397_Indexes = (RPM17Idx_DataStore());
  }

  /* S-Function Block: <S393>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (ECT05In_DataStore()) = BaseEngineController_LS_B.s726_Merge;
    (ECT05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s726_Merge, (ECT05IdxArr_DataStore()), 5,
       (ECT05Idx_DataStore()));
    BaseEngineController_LS_B.s393_motohawk_prelookup = (ECT05Idx_DataStore());
  }

  /* S-Function Block: <S393>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (ECT09In_DataStore()) = BaseEngineController_LS_B.s726_Merge;
    (ECT09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s726_Merge, (ECT09IdxArr_DataStore()), 9,
       (ECT09Idx_DataStore()));
    rtb_motohawk_prelookup1_h = (ECT09Idx_DataStore());
  }

  /* S-Function Block: <S394>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (IAT05In_DataStore()) = BaseEngineController_LS_B.s744_Merge;
    (IAT05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s744_Merge, (IAT05IdxArr_DataStore()), 5,
       (IAT05Idx_DataStore()));
    BaseEngineController_LS_B.s394_motohawk_prelookup = (IAT05Idx_DataStore());
  }

  /* S-Function Block: <S689>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s689_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_fq = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S689>/Product' incorporates:
   *  MinMax: '<S689>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S689>/motohawk_calibration'
   */
  rtb_DataTypeConversion_fq /= (rtb_DataTypeConversion_fq >=
    (SysVoltFilterConst_DataStore())) || rtIsNaN((SysVoltFilterConst_DataStore()))
    ? rtb_DataTypeConversion_fq : (SysVoltFilterConst_DataStore());

  /* Logic: '<S625>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S625>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S625>/motohawk_fault_status4'
   */
  rtb_RelationalOperator5_fz = (IsFaultActive(107) || IsFaultActive(108));

  /* Logic: '<S625>/Logical Operator6' */
  rtb_LogicalOperator6_b = !rtb_RelationalOperator5_fz;

  /* Logic: '<S625>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S625>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S625>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_al = (IsFaultSuspected(107) || IsFaultSuspected(108));

  /* S-Function Block: <S444>/motohawk_ain14 Resource: SysVoltage */
  {
    extern NativeError_S SysVoltage_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    SysVoltage_AnalogInput_Get(&BaseEngineController_LS_B.s444_motohawk_ain14,
      NULL);
  }

  /* DataTypeConversion: '<S625>/Data Type Conversion' */
  rtb_DataTypeConversion_c4 = (real_T)
    BaseEngineController_LS_B.s444_motohawk_ain14;

  /* Product: '<S625>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S625>/motohawk_calibration4'
   */
  rtb_DataTypeConversion1_e = rtb_DataTypeConversion_c4 * (SysVoltGain_DataStore
    ());

  /* Sum: '<S625>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S625>/motohawk_calibration5'
   */
  BaseEngineController_LS_B.s625_Sum1 = rtb_DataTypeConversion1_e +
    (SysVoltOfst_DataStore());

  /* UnitDelay: '<S625>/Unit Delay1' */
  rtb_UnitDelay1_f4 = BaseEngineController_LS_DWork.s625_UnitDelay1_DSTATE;

  /* If: '<S625>/If' incorporates:
   *  Logic: '<S625>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_b && rtb_LogicalOperator1_al) {
    /* Outputs for IfAction SubSystem: '<S625>/If Action Subsystem' incorporates:
     *  ActionPort: '<S690>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay1_f4, &rtb_Merge_f);

    /* End of Outputs for SubSystem: '<S625>/If Action Subsystem' */
  } else if (rtb_RelationalOperator5_fz) {
    /* Outputs for IfAction SubSystem: '<S625>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S691>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((SysVoltDfltValue_DataStore()),
      &rtb_Merge_f);

    /* End of Outputs for SubSystem: '<S625>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S625>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S692>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      (BaseEngineController_LS_B.s625_Sum1, &rtb_Merge_f);

    /* End of Outputs for SubSystem: '<S625>/If Action Subsystem2' */
  }

  /* End of If: '<S625>/If' */

  /* Sum: '<S694>/Sum1' incorporates:
   *  Constant: '<S694>/Constant'
   *  Product: '<S694>/Product'
   *  Product: '<S694>/Product1'
   *  Sum: '<S694>/Sum'
   *  UnitDelay: '<S694>/Unit Delay'
   */
  rtb_Sum1_nl = (1.0 - rtb_DataTypeConversion_fq) *
    BaseEngineController_LS_DWork.s694_UnitDelay_DSTATE + rtb_Merge_f *
    rtb_DataTypeConversion_fq;

  /* If: '<S693>/If' incorporates:
   *  Inport: '<S695>/In1'
   *  Inport: '<S696>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S693>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S693>/override_enable'
   */
  if ((SysVolt_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S693>/NewValue' incorporates:
     *  ActionPort: '<S695>/Action Port'
     */
    BaseEngineController_LS_B.s693_Merge = (SysVolt_new_DataStore());

    /* End of Outputs for SubSystem: '<S693>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S693>/OldValue' incorporates:
     *  ActionPort: '<S696>/Action Port'
     */
    BaseEngineController_LS_B.s693_Merge = rtb_Sum1_nl;

    /* End of Outputs for SubSystem: '<S693>/OldValue' */
  }

  /* End of If: '<S693>/If' */

  /* S-Function Block: <S398>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (SysVolt09In_DataStore()) = BaseEngineController_LS_B.s693_Merge;
    (SysVolt09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s693_Merge, (SysVolt09IdxArr_DataStore()), 9,
       (SysVolt09Idx_DataStore()));
    BaseEngineController_LS_B.s398_motohawk_prelookup = (SysVolt09Idx_DataStore());
  }

  /* S-Function Block: <S391>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (ACPres05In_DataStore()) = BaseEngineController_LS_B.s630_Merge;
    (ACPres05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s630_Merge, (ACPres05IdxArr_DataStore()), 5,
       (ACPres05Idx_DataStore()));
    BaseEngineController_LS_B.s391_motohawk_prelookup = (ACPres05Idx_DataStore());
  }

  /* S-Function Block: <S655>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s655_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_fq = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S655>/Product' incorporates:
   *  MinMax: '<S655>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S655>/motohawk_calibration'
   */
  rtb_DataTypeConversion_fq /= (rtb_DataTypeConversion_fq >=
    (MAPFilterConst_DataStore())) || rtIsNaN((MAPFilterConst_DataStore())) ?
    rtb_DataTypeConversion_fq : (MAPFilterConst_DataStore());

  /* Logic: '<S620>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S620>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S620>/motohawk_fault_status4'
   */
  rtb_RelationalOperator5_fz = (IsFaultActive(89) || IsFaultActive(90));

  /* Logic: '<S620>/Logical Operator6' */
  rtb_LogicalOperator6_b = !rtb_RelationalOperator5_fz;

  /* Logic: '<S620>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S620>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S620>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_al = (IsFaultSuspected(89) || IsFaultSuspected(90));

  /* S-Function (motohawk_sfun_trigger): '<S622>/motohawk_trigger5' */
  /* Enable for Trigger_FGND_MID_TDC_EVENT_5428p0009 */
  if (BaseEngineController_LS_DWork.s622_motohawk_trigger5_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s622_motohawk_trigger5_DWORK1 = 1;
  }

  /* Product: '<S620>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S620>/motohawk_calibration4'
   */
  rtb_DataTypeConversion1_e = BaseEngineController_LS_B.s622_Merge *
    (MAPGain_DataStore());

  /* Sum: '<S620>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S620>/motohawk_calibration5'
   */
  BaseEngineController_LS_B.s620_Sum1 = rtb_DataTypeConversion1_e +
    (MAPOfst_DataStore());

  /* UnitDelay: '<S620>/Unit Delay1' */
  rtb_UnitDelay1_a = BaseEngineController_LS_DWork.s620_UnitDelay1_DSTATE;

  /* If: '<S620>/If' incorporates:
   *  Logic: '<S620>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_b && rtb_LogicalOperator1_al) {
    /* Outputs for IfAction SubSystem: '<S620>/If Action Subsystem' incorporates:
     *  ActionPort: '<S656>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay1_a, &rtb_Merge_in);

    /* End of Outputs for SubSystem: '<S620>/If Action Subsystem' */
  } else if (rtb_RelationalOperator5_fz) {
    /* Outputs for IfAction SubSystem: '<S620>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S657>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((MAPDfltValue_DataStore()),
      &rtb_Merge_in);

    /* End of Outputs for SubSystem: '<S620>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S620>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S658>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      (BaseEngineController_LS_B.s620_Sum1, &rtb_Merge_in);

    /* End of Outputs for SubSystem: '<S620>/If Action Subsystem2' */
  }

  /* End of If: '<S620>/If' */

  /* Sum: '<S660>/Sum1' incorporates:
   *  Constant: '<S660>/Constant'
   *  Product: '<S660>/Product'
   *  Product: '<S660>/Product1'
   *  Sum: '<S660>/Sum'
   *  UnitDelay: '<S660>/Unit Delay'
   */
  rtb_Sum1_d4 = (1.0 - rtb_DataTypeConversion_fq) *
    BaseEngineController_LS_DWork.s660_UnitDelay_DSTATE + rtb_Merge_in *
    rtb_DataTypeConversion_fq;

  /* If: '<S659>/If' incorporates:
   *  Inport: '<S661>/In1'
   *  Inport: '<S662>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S659>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S659>/override_enable'
   */
  if ((MAP_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S659>/NewValue' incorporates:
     *  ActionPort: '<S661>/Action Port'
     */
    BaseEngineController_LS_B.s659_Merge = (MAP_new_DataStore());

    /* End of Outputs for SubSystem: '<S659>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S659>/OldValue' incorporates:
     *  ActionPort: '<S662>/Action Port'
     */
    BaseEngineController_LS_B.s659_Merge = rtb_Sum1_d4;

    /* End of Outputs for SubSystem: '<S659>/OldValue' */
  }

  /* End of If: '<S659>/If' */

  /* S-Function Block: <S395>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (MAP05In_DataStore()) = BaseEngineController_LS_B.s659_Merge;
    (MAP05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s659_Merge, (MAP05IdxArr_DataStore()), 5,
       (MAP05Idx_DataStore()));
    rtb_motohawk_prelookup_m = (MAP05Idx_DataStore());
  }

  /* S-Function Block: <S395>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (MAP09In_DataStore()) = BaseEngineController_LS_B.s659_Merge;
    (MAP09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s659_Merge, (MAP09IdxArr_DataStore()), 9,
       (MAP09Idx_DataStore()));
    BaseEngineController_LS_B.s395_motohawk_prelookup1 = (MAP09Idx_DataStore());
  }

  /* S-Function Block: <S395>/motohawk_prelookup5 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (MAP17In_DataStore()) = BaseEngineController_LS_B.s659_Merge;
    (MAP17Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s659_Merge, (MAP17IdxArr_DataStore()), 17,
       (MAP17Idx_DataStore()));
    BaseEngineController_LS_B.s395_Indexes = (MAP17Idx_DataStore());
  }

  /* S-Function Block: <S400>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (VSPD09In_DataStore()) = BaseEngineController_LS_B.s416_Switch2;
    (VSPD09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s416_Switch2, (VSPD09IdxArr_DataStore()), 9,
       (VSPD09Idx_DataStore()));
    rtb_motohawk_prelookup_i = (VSPD09Idx_DataStore());
  }

  /* S-Function Block: <S392>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (CAT05In_DataStore()) = BaseEngineController_LS_B.s717_Merge;
    (CAT05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s717_Merge, (CAT05IdxArr_DataStore()), 5,
       (CAT05Idx_DataStore()));
    BaseEngineController_LS_B.s392_motohawk_prelookup = (CAT05Idx_DataStore());
  }

  /* S-Function Block: <S396>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (OXY05In_DataStore()) = BaseEngineController_LS_B.s638_Merge;
    (OXY05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s638_Merge, (OXY05IdxArr_DataStore()), 5,
       (OXY05Idx_DataStore()));
    rtb_motohawk_prelookup_e = (OXY05Idx_DataStore());
  }

  /* S-Function (motohawk_sfun_data_read): '<S357>/motohawk_data_read1' */
  BaseEngineController_LS_B.s357_motohawk_data_read1 = EngineState_DataStore();

  /* S-Function Block: <S357>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s357_motohawk_delta_time_DWORK1, NULL);
    BaseEngineController_LS_B.s357_motohawk_delta_time = ((real_T) delta) *
      0.000001;
  }

  /* Stateflow: '<S357>/Baro Stall State Delay' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S357>/motohawk_calibration'
   */

  /* Gateway: Foreground/Control/VirtualSensors/AirCalcs/Baro Stall State Delay */
  /* During: Foreground/Control/VirtualSensors/AirCalcs/Baro Stall State Delay */
  switch (BaseEngineController_LS_DWork.s363_is_c19_BaseEngineController_LS) {
   case BaseEngineController_LS_IN_CrankRun:
    /* During 'CrankRun': '<S363>:2' */
    if (BaseEngineController_LS_B.s357_motohawk_data_read1 == 1) {
      /* Transition: '<S363>:6' */
      BaseEngineController_LS_DWork.s363_is_c19_BaseEngineController_LS =
        BaseEngineController_LS_IN_StallDelay;

      /* Entry 'StallDelay': '<S363>:3' */
      BaseEngineController_LS_B.s363_Enable = FALSE;
      BaseEngineController_LS_B.s363_Timer = 0.0;
      BaseEngineController_LS_DWork.s363_TOld = 0.0;
    }
    break;

   case BaseEngineController_LS_IN_Stall:
    /* During 'Stall': '<S363>:1' */
    if (BaseEngineController_LS_B.s357_motohawk_data_read1 > 1) {
      /* Transition: '<S363>:5' */
      BaseEngineController_LS_DWork.s363_is_c19_BaseEngineController_LS =
        BaseEngineController_LS_IN_CrankRun;

      /* Entry 'CrankRun': '<S363>:2' */
      BaseEngineController_LS_B.s363_Enable = FALSE;
    }
    break;

   case BaseEngineController_LS_IN_StallDelay:
    /* During 'StallDelay': '<S363>:3' */
    if (BaseEngineController_LS_B.s357_motohawk_data_read1 > 1) {
      /* Transition: '<S363>:8' */
      BaseEngineController_LS_DWork.s363_is_c19_BaseEngineController_LS =
        BaseEngineController_LS_IN_CrankRun;

      /* Entry 'CrankRun': '<S363>:2' */
      BaseEngineController_LS_B.s363_Enable = FALSE;
    } else if (((BaseEngineController_LS_B.s357_motohawk_data_read1 == 1) &
                (BaseEngineController_LS_B.s363_Timer >
                 (BaroRunStallDelay_DataStore()))) != 0) {
      /* Transition: '<S363>:7' */
      BaseEngineController_LS_DWork.s363_is_c19_BaseEngineController_LS =
        BaseEngineController_LS_IN_Stall;

      /* Entry 'Stall': '<S363>:1' */
      BaseEngineController_LS_B.s363_Enable = TRUE;
    } else {
      BaseEngineController_LS_B.s363_Timer =
        BaseEngineController_LS_DWork.s363_TOld +
        BaseEngineController_LS_B.s357_motohawk_delta_time;
      BaseEngineController_LS_DWork.s363_TOld =
        BaseEngineController_LS_B.s363_Timer;
    }
    break;

   default:
    /* Transition: '<S363>:4' */
    BaseEngineController_LS_DWork.s363_is_c19_BaseEngineController_LS =
      BaseEngineController_LS_IN_Stall;

    /* Entry 'Stall': '<S363>:1' */
    BaseEngineController_LS_B.s363_Enable = TRUE;
    break;
  }

  /* End of Stateflow: '<S357>/Baro Stall State Delay' */
  /* RelationalOperator: '<S365>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S365>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S365>/motohawk_data_read'
   */
  rtb_LogicalOperator6_b = (TPSFinal_DataStore() >= (BaroLearn_TPSPos_DataStore()));

  /* Logic: '<S621>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S621>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S621>/motohawk_fault_status4'
   */
  rtb_RelationalOperator5_fz = (IsFaultActive(91) || IsFaultActive(92));

  /* Logic: '<S621>/Logical Operator6' */
  rtb_LogicalOperator1_al = !rtb_RelationalOperator5_fz;

  /* Logic: '<S621>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S621>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S621>/motohawk_fault_status3'
   */
  rtb_RelOp_pu = (IsFaultSuspected(91) || IsFaultSuspected(92));

  /* S-Function Block: <S444>/motohawk_ain_read1 Resource: MAPSensorPin */
  {
    extern NativeError_S MAPSensorPin_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    MAPSensorPin_AnalogInput_Get
      (&BaseEngineController_LS_B.s444_motohawk_ain_read1, NULL);
  }

  /* DataTypeConversion: '<S621>/Data Type Conversion' */
  rtb_DataTypeConversion_fq = (real_T)
    BaseEngineController_LS_B.s444_motohawk_ain_read1;

  /* Product: '<S621>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S621>/motohawk_calibration4'
   */
  rtb_DataTypeConversion1_e = rtb_DataTypeConversion_fq * (MAPTimeGain_DataStore
    ());

  /* Sum: '<S621>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S621>/motohawk_calibration5'
   */
  BaseEngineController_LS_B.s621_Sum1 = rtb_DataTypeConversion1_e +
    (MAPTimeOfst_DataStore());

  /* UnitDelay: '<S621>/Unit Delay1' */
  rtb_UnitDelay1_n = BaseEngineController_LS_DWork.s621_UnitDelay1_DSTATE;

  /* If: '<S621>/If' incorporates:
   *  Logic: '<S621>/Logical Operator5'
   */
  if (rtb_LogicalOperator1_al && rtb_RelOp_pu) {
    /* Outputs for IfAction SubSystem: '<S621>/If Action Subsystem' incorporates:
     *  ActionPort: '<S664>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay1_n, &rtb_Merge_jq);

    /* End of Outputs for SubSystem: '<S621>/If Action Subsystem' */
  } else if (rtb_RelationalOperator5_fz) {
    /* Outputs for IfAction SubSystem: '<S621>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S665>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((MAPTimeDfltValue_DataStore()),
      &rtb_Merge_jq);

    /* End of Outputs for SubSystem: '<S621>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S621>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S666>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      (BaseEngineController_LS_B.s621_Sum1, &rtb_Merge_jq);

    /* End of Outputs for SubSystem: '<S621>/If Action Subsystem2' */
  }

  /* End of If: '<S621>/If' */

  /* Logic: '<S365>/Logical Operator' incorporates:
   *  Constant: '<S369>/Constant'
   *  RelationalOperator: '<S365>/Relational Operator1'
   *  RelationalOperator: '<S369>/Compare'
   *  S-Function (motohawk_sfun_calibration): '<S365>/motohawk_calibration2'
   */
  rtb_RelationalOperator5_fz = (rtb_LogicalOperator6_b && (rtb_Merge_jq >=
    (BaroLearn_MAP_DataStore())) &&
    (BaseEngineController_LS_B.s357_motohawk_data_read1 > 1));

  /* S-Function Block: <S370>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s370_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_ok = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S370>/Switch' incorporates:
   *  Constant: '<S370>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S370>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S370>/motohawk_delta_time'
   *  Sum: '<S370>/Sum'
   */
  if (rtb_RelationalOperator5_fz) {
    rtb_Switch_f = rtb_motohawk_delta_time_ok + BaroLearnTmr_DataStore();
  } else {
    rtb_Switch_f = 0.0;
  }

  /* End of Switch: '<S370>/Switch' */
  /* Product: '<S365>/Product' incorporates:
   *  RelationalOperator: '<S365>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S365>/motohawk_calibration'
   */
  rtb_Product_mp = (uint16_T)(rtb_RelationalOperator5_fz ? rtb_Switch_f >=
    (BaroLearn_Tm_DataStore()) : 0);

  /* DataTypeConversion: '<S365>/Data Type Conversion' */
  rtb_RelationalOperator5_fz = (rtb_Product_mp != 0);

  /* Outputs for Enabled SubSystem: '<S357>/Capture Signal At Startup' incorporates:
   *  EnablePort: '<S364>/Enable'
   */
  /* Logic: '<S357>/Logical Operator' */
  if (BaseEngineController_LS_B.s363_Enable || rtb_RelationalOperator5_fz) {
    if (!BaseEngineController_LS_DWork.s357_CaptureSignalAtStartup_MODE) {
      /* InitializeConditions for UnitDelay: '<S364>/Unit Delay' */
      BaseEngineController_LS_DWork.s364_UnitDelay_DSTATE = 0;
      BaseEngineController_LS_DWork.s357_CaptureSignalAtStartup_MODE = TRUE;
    }

    /* Sum: '<S364>/Add' incorporates:
     *  Constant: '<S364>/TwoSampleBuffer ToIgnore'
     *  S-Function (motohawk_sfun_calibration): '<S364>/motohawk_calibration'
     */
    rtb_Add_k = (int8_T)(((int8_T)(BARO_Count_DataStore())) + 2);

    /* Sum: '<S364>/Sum' incorporates:
     *  Constant: '<S364>/Constant'
     *  UnitDelay: '<S364>/Unit Delay'
     */
    rtb_Sum_l3 = (int8_T)(BaseEngineController_LS_DWork.s364_UnitDelay_DSTATE +
                          1);

    /* RelationalOperator: '<S364>/Relational Operator' */
    rtb_LogicalOperator6_b = (rtb_Sum_l3 <= rtb_Add_k);

    /* Switch: '<S364>/Switch' */
    if (rtb_LogicalOperator6_b) {
      rtb_Add_k = rtb_Sum_l3;
    }

    /* End of Switch: '<S364>/Switch' */

    /* Sum: '<S364>/Add1' incorporates:
     *  Constant: '<S364>/TwoSampleBuffer ToIgnore'
     */
    rtb_Add1_e = (int8_T)(rtb_Add_k - 2);

    /* Logic: '<S364>/Logical Operator' incorporates:
     *  Constant: '<S364>/TwoSampleBuffer ToIgnore'
     *  RelationalOperator: '<S364>/Relational Operator1'
     */
    rtb_LogicalOperator_kz = (rtb_LogicalOperator6_b && (rtb_Sum_l3 > 2));

    /* Outputs for Enabled SubSystem: '<S364>/Collect Average' */
    BaseEngineController_LS_CollectAverage(rtb_LogicalOperator_kz, rtb_Add1_e,
      rtb_Merge_jq, &BaseEngineController_LS_B.s364_CollectAverage,
      &BaseEngineController_LS_DWork.s364_CollectAverage);

    /* End of Outputs for SubSystem: '<S364>/Collect Average' */

    /* Update for UnitDelay: '<S364>/Unit Delay' */
    BaseEngineController_LS_DWork.s364_UnitDelay_DSTATE = rtb_Add_k;
  } else {
    if (BaseEngineController_LS_DWork.s357_CaptureSignalAtStartup_MODE) {
      /* Disable for Enabled SubSystem: '<S364>/Collect Average' */
      BaseEngineController_LS_CollectAverage_Disable
        (&BaseEngineController_LS_DWork.s364_CollectAverage);

      /* End of Disable for SubSystem: '<S364>/Collect Average' */
      BaseEngineController_LS_DWork.s357_CaptureSignalAtStartup_MODE = FALSE;
    }
  }

  /* End of Logic: '<S357>/Logical Operator' */
  /* End of Outputs for SubSystem: '<S357>/Capture Signal At Startup' */

  /* If: '<S367>/If' incorporates:
   *  Inport: '<S375>/In1'
   *  Inport: '<S376>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S367>/override_enable'
   *  UnitDelay: '<S367>/Unit Delay'
   */
  if ((BARO_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S367>/NewValue' incorporates:
     *  ActionPort: '<S375>/Action Port'
     */
    rtb_Merge_b3 = BaseEngineController_LS_DWork.s367_UnitDelay_DSTATE;

    /* End of Outputs for SubSystem: '<S367>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S367>/OldValue' incorporates:
     *  ActionPort: '<S376>/Action Port'
     */
    rtb_Merge_b3 = BaseEngineController_LS_B.s364_CollectAverage.s368_Product;

    /* End of Outputs for SubSystem: '<S367>/OldValue' */
  }

  /* End of If: '<S367>/If' */

  /* Sum: '<S367>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S367>/offset'
   */
  BaseEngineController_LS_B.s367_Sum = rtb_Merge_b3 + (BARO_offset_DataStore());

  /* S-Function Block: <S366>/motohawk_prelookup2 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (VEMapIn_DataStore()) = BaseEngineController_LS_B.s659_Merge;
    (VEMapIdx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s659_Merge, (VEMapIdxArr_DataStore()), 17,
       (VEMapIdx_DataStore()));
    rtb_motohawk_prelookup2_c = (VEMapIdx_DataStore());
  }

  /* S-Function Block: <S366>/motohawk_interpolation_2d */
  {
    extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
      real_T *map_data, uint32_T row_sz, uint32_T col_sz);
    rtb_motohawk_interpolation_2d = TableInterpolation2D_real_T
      (rtb_motohawk_prelookup2_c, BaseEngineController_LS_B.s397_Indexes,
       (real_T *) ((VolEffMap_DataStore())), 17, 17);
    (VolEff_DataStore()) = rtb_motohawk_interpolation_2d;
  }

  /* S-Function Block: <S366>/motohawk_interpolation_2d2 */
  {
    extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
      real_T *map_data, uint32_T row_sz, uint32_T col_sz);
    BaseEngineController_LS_B.s366_motohawk_interpolation_2d2 =
      TableInterpolation2D_real_T(rtb_motohawk_prelookup2_c,
      BaseEngineController_LS_B.s397_Indexes, (real_T *)
      ((VolEffAdaptMap_DataStore())), 17, 17);
    (VolEffAdapt_DataStore()) =
      BaseEngineController_LS_B.s366_motohawk_interpolation_2d2;
  }

  /* Sum: '<S366>/Sum' incorporates:
   *  S-Function (motohawk_sfun_interpolation_2d): '<S366>/motohawk_interpolation_2d'
   *  S-Function (motohawk_sfun_prelookup): '<S366>/motohawk_prelookup2'
   */
  BaseEngineController_LS_B.s366_Sum = rtb_motohawk_interpolation_2d +
    BaseEngineController_LS_B.s366_motohawk_interpolation_2d2;

  /* Saturate: '<S357>/Saturation1' */
  rtb_Saturation1_c = BaseEngineController_LS_B.s367_Sum >= 1.0 ?
    BaseEngineController_LS_B.s367_Sum : 1.0;

  /* S-Function Block: <S366>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (BARO09Idx_DataStore()) = TablePrelookup_real_T(rtb_Saturation1_c,
      (BARO09IdxArr_DataStore()), 9, (BARO09Idx_DataStore()));
    rtb_motohawk_prelookup1_c = (BARO09Idx_DataStore());
  }

  /* S-Function Block: <S366>/motohawk_interpolation_1d1 */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_motohawk_interpolation_1d1_j = TableInterpolation1D_real_T
      (rtb_motohawk_prelookup1_c, (real_T *) ((VEBaroCorrTbl_DataStore())), 9);
    (VEBaroCorr_DataStore()) = rtb_motohawk_interpolation_1d1_j;
  }

  /* S-Function Block: <S394>/motohawk_prelookup2 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (IAT17In_DataStore()) = BaseEngineController_LS_B.s744_Merge;
    (IAT17Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s744_Merge, (IAT17IdxArr_DataStore()), 17,
       (IAT17Idx_DataStore()));
    rtb_motohawk_prelookup2_b = (IAT17Idx_DataStore());
  }

  /* S-Function Block: <S366>/motohawk_interpolation_2d1 */
  {
    extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
      real_T *map_data, uint32_T row_sz, uint32_T col_sz);
    rtb_motohawk_interpolation_2d1_n = TableInterpolation2D_real_T
      (rtb_motohawk_prelookup2_b, rtb_motohawk_prelookup1_h, (real_T *)
       ((VETempCorrMap_DataStore())), 17, 9);
    (VETempCorr_DataStore()) = rtb_motohawk_interpolation_2d1_n;
  }

  /* Product: '<S366>/Nominal Air Flow Rate' incorporates:
   *  Constant: '<S366>/Gas Const [J//kg-K]'
   *  Constant: '<S366>/Units Equivalency Factor'
   *  DataTypeConversion: '<S366>/Data Type Conversion'
   *  Fcn: '<S372>/C to K'
   *  S-Function (motohawk_sfun_data_read): '<S366>/Cylinder Swept Volume [cm3]'
   *  S-Function (motohawk_sfun_data_read): '<S366>/Number of Combustion Events Per Revolution'
   *  S-Function (motohawk_sfun_interpolation_1d): '<S366>/motohawk_interpolation_1d1'
   *  S-Function (motohawk_sfun_interpolation_2d): '<S366>/motohawk_interpolation_2d1'
   *  S-Function (motohawk_sfun_prelookup): '<S366>/motohawk_prelookup1'
   *  S-Function (motohawk_sfun_prelookup): '<S393>/motohawk_prelookup1'
   *  S-Function (motohawk_sfun_prelookup): '<S394>/motohawk_prelookup2'
   *  Saturate: '<S357>/Saturation1'
   */
  BaseEngineController_LS_B.s366_NominalAirFlowRate =
    BaseEngineController_LS_B.s616_Sum1 * BaseEngineController_LS_B.s659_Merge *
    rtb_motohawk_interpolation_1d1_j * rtb_motohawk_interpolation_2d1_n *
    CylSweptVol_DataStore() * (real_T)((uint8_T)CombEventsPerRev_DataStore()) /
    (BaseEngineController_LS_B.s744_Merge + 273.2) / 60.0 / 287.0;

  /* Product: '<S366>/Model Air Mass Flow Rate' */
  BaseEngineController_LS_B.s366_ModelAirMassFlowRate =
    BaseEngineController_LS_B.s366_Sum *
    BaseEngineController_LS_B.s366_NominalAirFlowRate;

  /* S-Function Block: <S577>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s577_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_m = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S577>/Product' incorporates:
   *  MinMax: '<S577>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S577>/motohawk_calibration'
   */
  rtb_Switch_m /= (rtb_Switch_m >= (MAFFiltConst_DataStore())) || rtIsNaN
    ((MAFFiltConst_DataStore())) ? rtb_Switch_m : (MAFFiltConst_DataStore());

  /* Logic: '<S563>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S563>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S563>/motohawk_fault_status4'
   */
  rtb_RelationalOperator5_fz = (IsFaultActive(87) || IsFaultActive(88));

  /* Logic: '<S563>/Logical Operator6' */
  rtb_LogicalOperator6_b = !rtb_RelationalOperator5_fz;

  /* Logic: '<S563>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S563>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S563>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_al = (IsFaultSuspected(87) || IsFaultSuspected(88));

  /* S-Function Block: <S442>/motohawk_frequency_in2 Frequency Input Get: MAF_Pin */
  {
    extern NativeError_S MAF_Pin_FrequencyInput_Get(uint32_T *frequency, int16_T
      *duty_cycle);
    MAF_Pin_FrequencyInput_Get(&rtb_DataTypeConversion6,
      &rtb_DataTypeConversion2_pj);
  }

  /* DataTypeConversion: '<S442>/Data Type Conversion' */
  rtb_Switch_bn = (real_T)rtb_DataTypeConversion6;

  /* Gain: '<S442>/Gain' */
  BaseEngineController_LS_B.s442_Gain = 0.01 * rtb_Switch_bn;

  /* S-Function Block: <S582>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (MAFIdx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s442_Gain, (MAFIdxArr_DataStore()), 13,
       (MAFIdx_DataStore()));
    rtb_motohawk_prelookup_k = (MAFIdx_DataStore());
  }

  /* S-Function Block: <S582>/motohawk_interpolation_1d */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    BaseEngineController_LS_B.s582_motohawk_interpolation_1d =
      TableInterpolation1D_real_T(rtb_motohawk_prelookup_k, (real_T *)
      ((MAFTbl_DataStore())), 13);
  }

  /* UnitDelay: '<S563>/Unit Delay' */
  rtb_UnitDelay_nr = BaseEngineController_LS_DWork.s563_UnitDelay_DSTATE;

  /* If: '<S563>/If' incorporates:
   *  Logic: '<S563>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_b && rtb_LogicalOperator1_al) {
    /* Outputs for IfAction SubSystem: '<S563>/If Action Subsystem' incorporates:
     *  ActionPort: '<S578>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay_nr, &rtb_Merge_dv);

    /* End of Outputs for SubSystem: '<S563>/If Action Subsystem' */
  } else if (rtb_RelationalOperator5_fz) {
    /* Outputs for IfAction SubSystem: '<S563>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S579>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((MAFDefault_DataStore()),
      &rtb_Merge_dv);

    /* End of Outputs for SubSystem: '<S563>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S563>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S580>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      (BaseEngineController_LS_B.s582_motohawk_interpolation_1d, &rtb_Merge_dv);

    /* End of Outputs for SubSystem: '<S563>/If Action Subsystem2' */
  }

  /* End of If: '<S563>/If' */

  /* Sum: '<S583>/Sum1' incorporates:
   *  Constant: '<S583>/Constant'
   *  Product: '<S583>/Product'
   *  Product: '<S583>/Product1'
   *  Sum: '<S583>/Sum'
   *  UnitDelay: '<S583>/Unit Delay'
   */
  rtb_Sum1_fm = (1.0 - rtb_Switch_m) *
    BaseEngineController_LS_DWork.s583_UnitDelay_DSTATE + rtb_Merge_dv *
    rtb_Switch_m;

  /* If: '<S581>/If' incorporates:
   *  Inport: '<S584>/In1'
   *  Inport: '<S585>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S581>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S581>/override_enable'
   */
  if ((MAF_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S581>/NewValue' incorporates:
     *  ActionPort: '<S584>/Action Port'
     */
    BaseEngineController_LS_B.s581_Merge = (MAF_new_DataStore());

    /* End of Outputs for SubSystem: '<S581>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S581>/OldValue' incorporates:
     *  ActionPort: '<S585>/Action Port'
     */
    BaseEngineController_LS_B.s581_Merge = rtb_Sum1_fm;

    /* End of Outputs for SubSystem: '<S581>/OldValue' */
  }

  /* End of If: '<S581>/If' */

  /* MultiPortSwitch: '<S366>/Multiport Switch' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S366>/motohawk_calibration1'
   */
  if (((uint8_T)(MAF_Source_DataStore())) == 0) {
    BaseEngineController_LS_B.s366_MultiportSwitch =
      BaseEngineController_LS_B.s366_ModelAirMassFlowRate;
  } else {
    BaseEngineController_LS_B.s366_MultiportSwitch =
      BaseEngineController_LS_B.s581_Merge;
  }

  /* End of MultiPortSwitch: '<S366>/Multiport Switch' */
  /* S-Function Block: <S383>/motohawk_delta_time */
  rtb_Switch_bn = 0.005;

  /* UnitDelay: '<S383>/Unit Delay2' */
  rtb_DataTypeConversion1_e =
    BaseEngineController_LS_DWork.s383_UnitDelay2_DSTATE;

  /* RelationalOperator: '<S383>/Relational Operator4' incorporates:
   *  UnitDelay: '<S383>/Unit Delay2'
   */
  BaseEngineController_LS_B.s383_RelationalOperator4 =
    ((BaseEngineController_LS_DWork.s383_UnitDelay2_DSTATE <
      BaseEngineController_LS_B.s616_Sum1));

  /* Outputs for Enabled SubSystem: '<S383>/IncreasingFilter' incorporates:
   *  EnablePort: '<S387>/Enable'
   */
  if (BaseEngineController_LS_B.s383_RelationalOperator4) {
    /* S-Function (motohawk_sfun_calibration): '<S387>/motohawk_calibration1' */
    BaseEngineController_LS_B.s383_Merge = (SSRPMIncFiltC_DataStore());
  }

  /* End of Outputs for SubSystem: '<S383>/IncreasingFilter' */

  /* Outputs for Enabled SubSystem: '<S383>/DecreasingFilter' incorporates:
   *  EnablePort: '<S385>/Enable'
   */
  /* RelationalOperator: '<S383>/Relational Operator3' */
  if (rtb_DataTypeConversion1_e > BaseEngineController_LS_B.s616_Sum1) {
    /* S-Function (motohawk_sfun_calibration): '<S385>/motohawk_calibration2' */
    BaseEngineController_LS_B.s383_Merge = (SSRPMDecFiltC_DataStore());
  }

  /* End of RelationalOperator: '<S383>/Relational Operator3' */
  /* End of Outputs for SubSystem: '<S383>/DecreasingFilter' */

  /* Product: '<S383>/Product' incorporates:
   *  MinMax: '<S383>/MinMax'
   */
  rtb_Switch_bn /= (rtb_Switch_bn >= BaseEngineController_LS_B.s383_Merge) ||
    rtIsNaN(BaseEngineController_LS_B.s383_Merge) ? rtb_Switch_bn :
    BaseEngineController_LS_B.s383_Merge;

  /* Sum: '<S386>/Sum1' incorporates:
   *  Constant: '<S386>/Constant'
   *  Product: '<S386>/Product'
   *  Product: '<S386>/Product1'
   *  Sum: '<S386>/Sum'
   *  UnitDelay: '<S386>/Unit Delay'
   */
  BaseEngineController_LS_B.s386_Sum1 = (1.0 - rtb_Switch_bn) *
    BaseEngineController_LS_DWork.s386_UnitDelay_DSTATE +
    BaseEngineController_LS_B.s616_Sum1 * rtb_Switch_bn;

  /* Sum: '<S382>/Sum1' */
  rtb_Switch_bn = BaseEngineController_LS_B.s616_Sum1 -
    BaseEngineController_LS_B.s386_Sum1;

  /* Abs: '<S382>/Abs1' */
  rtb_Switch_bn = fabs(rtb_Switch_bn);

  /* RelationalOperator: '<S382>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S382>/Steady-state RPM Tolerance [RPM]'
   */
  rtb_LogicalOperator6_b = (rtb_Switch_bn <= (SSRPMTol_DataStore()));

  /* RelationalOperator: '<S382>/Relational Operator2' incorporates:
   *  Constant: '<S382>/Constant'
   */
  rtb_LogicalOperator1_al = (BaseEngineController_LS_B.s616_Sum1 > 0.0);

  /* S-Function Block: <S384>/motohawk_delta_time */
  rtb_Switch_bn = 0.005;

  /* UnitDelay: '<S384>/Unit Delay2' */
  rtb_DataTypeConversion1_e =
    BaseEngineController_LS_DWork.s384_UnitDelay2_DSTATE;

  /* RelationalOperator: '<S384>/Relational Operator4' incorporates:
   *  UnitDelay: '<S384>/Unit Delay2'
   */
  BaseEngineController_LS_B.s384_RelationalOperator4 =
    ((BaseEngineController_LS_DWork.s384_UnitDelay2_DSTATE <
      BaseEngineController_LS_B.s659_Merge));

  /* Outputs for Enabled SubSystem: '<S384>/IncreasingFilter' incorporates:
   *  EnablePort: '<S390>/Enable'
   */
  if (BaseEngineController_LS_B.s384_RelationalOperator4) {
    /* S-Function (motohawk_sfun_calibration): '<S390>/motohawk_calibration1' */
    BaseEngineController_LS_B.s384_Merge = (SSLoadIncFiltC_DataStore());
  }

  /* End of Outputs for SubSystem: '<S384>/IncreasingFilter' */

  /* Outputs for Enabled SubSystem: '<S384>/DecreasingFilter' incorporates:
   *  EnablePort: '<S388>/Enable'
   */
  /* RelationalOperator: '<S384>/Relational Operator3' */
  if (rtb_DataTypeConversion1_e > BaseEngineController_LS_B.s659_Merge) {
    /* S-Function (motohawk_sfun_calibration): '<S388>/motohawk_calibration2' */
    BaseEngineController_LS_B.s384_Merge = (SSLoadDecFiltC_DataStore());
  }

  /* End of RelationalOperator: '<S384>/Relational Operator3' */
  /* End of Outputs for SubSystem: '<S384>/DecreasingFilter' */

  /* Product: '<S384>/Product' incorporates:
   *  MinMax: '<S384>/MinMax'
   */
  rtb_Switch_bn /= (rtb_Switch_bn >= BaseEngineController_LS_B.s384_Merge) ||
    rtIsNaN(BaseEngineController_LS_B.s384_Merge) ? rtb_Switch_bn :
    BaseEngineController_LS_B.s384_Merge;

  /* Sum: '<S389>/Sum1' incorporates:
   *  Constant: '<S389>/Constant'
   *  Product: '<S389>/Product'
   *  Product: '<S389>/Product1'
   *  Sum: '<S389>/Sum'
   *  UnitDelay: '<S389>/Unit Delay'
   */
  BaseEngineController_LS_B.s389_Sum1 = (1.0 - rtb_Switch_bn) *
    BaseEngineController_LS_DWork.s389_UnitDelay_DSTATE +
    BaseEngineController_LS_B.s659_Merge * rtb_Switch_bn;

  /* Sum: '<S382>/Sum' */
  rtb_Switch_bn = BaseEngineController_LS_B.s659_Merge -
    BaseEngineController_LS_B.s389_Sum1;

  /* Abs: '<S382>/Abs' */
  rtb_Switch_bn = fabs(rtb_Switch_bn);

  /* Logic: '<S382>/Logical Operator' incorporates:
   *  RelationalOperator: '<S382>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S382>/Steady-state Torque Tolerance [N.m]'
   */
  BaseEngineController_LS_B.s382_LogicalOperator = ((rtb_LogicalOperator6_b &&
    rtb_LogicalOperator1_al && (rtb_Switch_bn <= (SSLoadTol_DataStore()))));

  /* S-Function Block: <S438>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (MAFPort05In_DataStore()) = BaseEngineController_LS_B.s366_MultiportSwitch;
    (MAFPort05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s366_MultiportSwitch,
       (MAFPort05IdxArr_DataStore()), 5, (MAFPort05Idx_DataStore()));
    rtb_motohawk_prelookup_o = (MAFPort05Idx_DataStore());
  }

  /* RelationalOperator: '<S411>/RelOp' incorporates:
   *  Constant: '<S411>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S361>/motohawk_data_read'
   */
  rtb_RelOp_d = (((uint8_T)EngineState_DataStore()) == 1);

  /* Outputs for Enabled SubSystem: '<S361>/Capture ECT At Startup' incorporates:
   *  EnablePort: '<S403>/Enable'
   */
  if (rtb_RelOp_d) {
    if (!BaseEngineController_LS_DWork.s361_CaptureECTAtStartup_MODE) {
      /* InitializeConditions for UnitDelay: '<S403>/Unit Delay' */
      BaseEngineController_LS_DWork.s403_UnitDelay_DSTATE = 0;
      BaseEngineController_LS_DWork.s361_CaptureECTAtStartup_MODE = TRUE;
    }

    /* Sum: '<S403>/Sum' incorporates:
     *  Constant: '<S403>/Constant'
     *  UnitDelay: '<S403>/Unit Delay'
     */
    rtb_Add_k = (int8_T)(BaseEngineController_LS_DWork.s403_UnitDelay_DSTATE + 1);

    /* Sum: '<S403>/Add' incorporates:
     *  Constant: '<S403>/TwoSampleBuffer ToIgnore'
     *  S-Function (motohawk_sfun_calibration): '<S403>/motohawk_calibration'
     */
    rtb_Sum_l3 = (int8_T)(((int8_T)(ECT_KeyUp_Count_DataStore())) + 2);

    /* RelationalOperator: '<S403>/Relational Operator' */
    rtb_LogicalOperator6_b = (rtb_Add_k <= rtb_Sum_l3);

    /* Switch: '<S403>/Switch' */
    if (rtb_LogicalOperator6_b) {
      rtb_Sum_l3 = rtb_Add_k;
    }

    /* End of Switch: '<S403>/Switch' */

    /* Sum: '<S403>/Add1' incorporates:
     *  Constant: '<S403>/TwoSampleBuffer ToIgnore'
     */
    rtb_Add1_k3 = (int8_T)(rtb_Sum_l3 - 2);

    /* Logic: '<S403>/Logical Operator' incorporates:
     *  Constant: '<S403>/TwoSampleBuffer ToIgnore'
     *  RelationalOperator: '<S403>/Relational Operator1'
     */
    rtb_LogicalOperator_mr = (rtb_LogicalOperator6_b && (rtb_Add_k > 2));

    /* Outputs for Enabled SubSystem: '<S403>/Collect Average' */
    BaseEngineController_LS_CollectAverage(rtb_LogicalOperator_mr, rtb_Add1_k3,
      BaseEngineController_LS_B.s710_Merge,
      &BaseEngineController_LS_B.s403_CollectAverage,
      &BaseEngineController_LS_DWork.s403_CollectAverage);

    /* End of Outputs for SubSystem: '<S403>/Collect Average' */

    /* Update for UnitDelay: '<S403>/Unit Delay' */
    BaseEngineController_LS_DWork.s403_UnitDelay_DSTATE = rtb_Sum_l3;
  } else {
    if (BaseEngineController_LS_DWork.s361_CaptureECTAtStartup_MODE) {
      /* Disable for Enabled SubSystem: '<S403>/Collect Average' */
      BaseEngineController_LS_CollectAverage_Disable
        (&BaseEngineController_LS_DWork.s403_CollectAverage);

      /* End of Disable for SubSystem: '<S403>/Collect Average' */
      BaseEngineController_LS_DWork.s361_CaptureECTAtStartup_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S361>/Capture ECT At Startup' */
  /* S-Function Block: <S436>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (ECT_KeyUp09In_DataStore()) =
      BaseEngineController_LS_B.s403_CollectAverage.s368_Product;
    (ECT_KeyUp09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s403_CollectAverage.s368_Product,
       (ECT_KeyUp09IdxArr_DataStore()), 9, (ECT_KeyUp09Idx_DataStore()));
    rtb_motohawk_prelookup_j = (ECT_KeyUp09Idx_DataStore());
  }

  /* Sum: '<S425>/Sum2' incorporates:
   *  UnitDelay: '<S425>/Unit Delay'
   */
  rtb_DataTypeConversion1_e = BaseEngineController_LS_B.s616_Sum1 -
    BaseEngineController_LS_DWork.s425_UnitDelay_DSTATE;

  /* S-Function Block: <S425>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s425_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_ow = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S425>/Product' incorporates:
   *  S-Function (motohawk_sfun_delta_time): '<S425>/motohawk_delta_time'
   */
  rtb_DataTypeConversion1_e /= rtb_motohawk_delta_time_ow;

  /* S-Function Block: <S426>/motohawk_delta_time */
  rtb_Switch_bn = 0.005;

  /* Product: '<S426>/Product' incorporates:
   *  MinMax: '<S426>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S426>/motohawk_calibration'
   */
  rtb_Switch_bn /= (rtb_Switch_bn >= (EngineAccelFiltConst_DataStore())) ||
    rtIsNaN((EngineAccelFiltConst_DataStore())) ? rtb_Switch_bn :
    (EngineAccelFiltConst_DataStore());

  /* Sum: '<S427>/Sum1' incorporates:
   *  Constant: '<S427>/Constant'
   *  Product: '<S427>/Product'
   *  Product: '<S427>/Product1'
   *  Sum: '<S427>/Sum'
   *  UnitDelay: '<S427>/Unit Delay'
   */
  BaseEngineController_LS_B.s427_Sum1 = (1.0 - rtb_Switch_bn) *
    BaseEngineController_LS_DWork.s427_UnitDelay_DSTATE +
    rtb_DataTypeConversion1_e * rtb_Switch_bn;

  /* S-Function Block: <S362>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (RPMAccel17In_DataStore()) = BaseEngineController_LS_B.s427_Sum1;
    (RPMAccel17Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s427_Sum1, (RPMAccel17IdxArr_DataStore()), 17,
       (RPMAccel17Idx_DataStore()));
    BaseEngineController_LS_B.s362_RPMAccel17Idx = (RPMAccel17Idx_DataStore());
  }

  /* S-Function Block: <S362>/motohawk_prelookup2 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (TimeSinceRun09In_DataStore()) = BaseEngineController_LS_B.s433_Switch;
    (TimeSinceRun09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s433_Switch, (TimeSinceRun09IdxArr_DataStore()),
       9, (TimeSinceRun09Idx_DataStore()));
    rtb_TimeSinceRun09 = (TimeSinceRun09Idx_DataStore());
  }

  /* RelationalOperator: '<S137>/RelOp' incorporates:
   *  Constant: '<S137>/Constant'
   */
  rtb_RelOp_hf = (BaseEngineController_LS_B.s428_State == 3);

  /* S-Function Block: <S442>/motohawk_ain1 Resource: ClutchSw_Pin */
  {
    extern NativeError_S ClutchSw_Pin_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    ClutchSw_Pin_AnalogInput_Get(&rtb_motohawk_ain1, NULL);
  }

  /* DataTypeConversion: '<S561>/Data Type Conversion' incorporates:
   *  S-Function (motohawk_sfun_ain): '<S442>/motohawk_ain1'
   */
  BaseEngineController_LS_B.s561_DataTypeConversion = (real_T)rtb_motohawk_ain1;

  /* RelationalOperator: '<S561>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S561>/SwitchPoint'
   */
  rtb_LogicalOperator6_b = (BaseEngineController_LS_B.s561_DataTypeConversion >
                            (ClutchSwSwitchPt_DataStore()));

  /* Logic: '<S561>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S561>/0 = No Inversion 1 = Inversion'
   */
  rtb_LogicalOperator6_b ^= (ClutchSwPolarity_DataStore());

  /* If: '<S571>/If' incorporates:
   *  Inport: '<S572>/In1'
   *  Inport: '<S573>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S571>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S571>/override_enable'
   */
  if ((ClutchSw_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S571>/NewValue' incorporates:
     *  ActionPort: '<S572>/Action Port'
     */
    BaseEngineController_LS_B.s571_Merge = (ClutchSw_new_DataStore());

    /* End of Outputs for SubSystem: '<S571>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S571>/OldValue' incorporates:
     *  ActionPort: '<S573>/Action Port'
     */
    BaseEngineController_LS_B.s571_Merge = rtb_LogicalOperator6_b;

    /* End of Outputs for SubSystem: '<S571>/OldValue' */
  }

  /* End of If: '<S571>/If' */

  /* S-Function Block: <S442>/motohawk_ain6 Resource: ScramblePin */
  {
    extern NativeError_S ScramblePin_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    ScramblePin_AnalogInput_Get(&rtb_motohawk_ain6_k, NULL);
  }

  /* DataTypeConversion: '<S564>/Data Type Conversion' incorporates:
   *  S-Function (motohawk_sfun_ain): '<S442>/motohawk_ain6'
   */
  BaseEngineController_LS_B.s564_DataTypeConversion = (real_T)
    rtb_motohawk_ain6_k;

  /* RelationalOperator: '<S564>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S564>/SwitchPoint'
   */
  rtb_LogicalOperator6_b = (BaseEngineController_LS_B.s564_DataTypeConversion >
                            (ScrambleSwitchPt_DataStore()));

  /* Logic: '<S564>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S564>/0 = No Inversion 1 = Inversion'
   */
  rtb_RelationalOperator5_fz = rtb_LogicalOperator6_b ^
    (ScramblePolarity_DataStore());

  /* S-Function Block: <S588>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s588_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_dd = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S588>/Switch' incorporates:
   *  Constant: '<S588>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S588>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S588>/motohawk_delta_time'
   *  Sum: '<S588>/Sum'
   */
  if (rtb_RelationalOperator5_fz) {
    rtb_Switch_bn = rtb_motohawk_delta_time_dd + ScrambleDelay_DataStore();
  } else {
    rtb_Switch_bn = 0.0;
  }

  /* End of Switch: '<S588>/Switch' */
  /* Logic: '<S586>/Logical Operator' incorporates:
   *  RelationalOperator: '<S586>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S564>/motohawk_calibration7'
   */
  rtb_LogicalOperator6_b = (rtb_RelationalOperator5_fz && (rtb_Switch_bn >=
    (ScrambleDebounceDelay_DataStore())));

  /* If: '<S587>/If' incorporates:
   *  Inport: '<S589>/In1'
   *  Inport: '<S590>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S587>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S587>/override_enable'
   */
  if ((Scramble_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S587>/NewValue' incorporates:
     *  ActionPort: '<S589>/Action Port'
     */
    BaseEngineController_LS_B.s587_Merge = (Scramble_new_DataStore());

    /* End of Outputs for SubSystem: '<S587>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S587>/OldValue' incorporates:
     *  ActionPort: '<S590>/Action Port'
     */
    BaseEngineController_LS_B.s587_Merge = rtb_LogicalOperator6_b;

    /* End of Outputs for SubSystem: '<S587>/OldValue' */
  }

  /* End of If: '<S587>/If' */

  /* S-Function Block: <S442>/motohawk_din2 Resource: TwoStepPin */
  {
    extern NativeError_S TwoStepPin_DigitalInput_Get(boolean_T *out, uint16_T
      *status);
    TwoStepPin_DigitalInput_Get(&BaseEngineController_LS_B.s442_motohawk_din2,
      NULL);
  }

  /* Logic: '<S565>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S565>/0 = No Inversion 1 = Inversion'
   */
  rtb_RelationalOperator5_fz = BaseEngineController_LS_B.s442_motohawk_din2 ^
    (TwoStepPolarity_DataStore());

  /* S-Function Block: <S593>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s593_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_ge = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S593>/Switch' incorporates:
   *  Constant: '<S593>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S593>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S593>/motohawk_delta_time'
   *  Sum: '<S593>/Sum'
   */
  if (rtb_RelationalOperator5_fz) {
    rtb_Switch_m = rtb_motohawk_delta_time_ge + TwoStepTimer_DataStore();
  } else {
    rtb_Switch_m = 0.0;
  }

  /* End of Switch: '<S593>/Switch' */
  /* Logic: '<S591>/Logical Operator' incorporates:
   *  RelationalOperator: '<S591>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S565>/motohawk_calibration7'
   */
  rtb_LogicalOperator6_b = (rtb_RelationalOperator5_fz && (rtb_Switch_m >=
    (TwoStepDebounceDelay_DataStore())));

  /* If: '<S592>/If' incorporates:
   *  Inport: '<S594>/In1'
   *  Inport: '<S595>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S592>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S592>/override_enable'
   */
  if ((TwoStep_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S592>/NewValue' incorporates:
     *  ActionPort: '<S594>/Action Port'
     */
    BaseEngineController_LS_B.s592_Merge = (TwoStep_new_DataStore());

    /* End of Outputs for SubSystem: '<S592>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S592>/OldValue' incorporates:
     *  ActionPort: '<S595>/Action Port'
     */
    BaseEngineController_LS_B.s592_Merge = rtb_LogicalOperator6_b;

    /* End of Outputs for SubSystem: '<S592>/OldValue' */
  }

  /* End of If: '<S592>/If' */

  /* S-Function Block: <S663>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s663_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_gx = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S663>/Product' incorporates:
   *  MinMax: '<S663>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S663>/motohawk_calibration'
   */
  rtb_DataTypeConversion_gx /= (rtb_DataTypeConversion_gx >=
    (MAPTimeFilterConst_DataStore())) || rtIsNaN((MAPTimeFilterConst_DataStore()))
    ? rtb_DataTypeConversion_gx : (MAPTimeFilterConst_DataStore());

  /* Sum: '<S668>/Sum1' incorporates:
   *  Constant: '<S668>/Constant'
   *  Product: '<S668>/Product'
   *  Product: '<S668>/Product1'
   *  Sum: '<S668>/Sum'
   *  UnitDelay: '<S668>/Unit Delay'
   */
  rtb_Sum1_mzy = (1.0 - rtb_DataTypeConversion_gx) *
    BaseEngineController_LS_DWork.s668_UnitDelay_DSTATE + rtb_Merge_jq *
    rtb_DataTypeConversion_gx;

  /* If: '<S667>/If' incorporates:
   *  Inport: '<S669>/In1'
   *  Inport: '<S670>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S667>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S667>/override_enable'
   */
  if ((MAPTime_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S667>/NewValue' incorporates:
     *  ActionPort: '<S669>/Action Port'
     */
    BaseEngineController_LS_B.s667_Merge = (MAPTime_new_DataStore());

    /* End of Outputs for SubSystem: '<S667>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S667>/OldValue' incorporates:
     *  ActionPort: '<S670>/Action Port'
     */
    BaseEngineController_LS_B.s667_Merge = rtb_Sum1_mzy;

    /* End of Outputs for SubSystem: '<S667>/OldValue' */
  }

  /* End of If: '<S667>/If' */

  /* Outputs for Enabled SubSystem: '<S15>/Run' incorporates:
   *  EnablePort: '<S136>/Enable'
   */
  if (rtb_RelOp_hf) {
    if (!BaseEngineController_LS_DWork.s15_Run_MODE) {
      /* InitializeConditions for UnitDelay: '<S167>/Unit Delay' */
      BaseEngineController_LS_DWork.s167_UnitDelay_DSTATE = FALSE;

      /* InitializeConditions for UnitDelay: '<S166>/Unit Delay' */
      BaseEngineController_LS_DWork.s166_UnitDelay_DSTATE = FALSE;

      /* InitializeConditions for UnitDelay: '<S164>/Unit Delay' */
      BaseEngineController_LS_DWork.s164_UnitDelay_DSTATE = FALSE;

      /* InitializeConditions for UnitDelay: '<S165>/Unit Delay' */
      BaseEngineController_LS_DWork.s165_UnitDelay_DSTATE = FALSE;

      /* InitializeConditions for UnitDelay: '<S163>/Unit Delay' */
      BaseEngineController_LS_DWork.s163_UnitDelay_DSTATE = FALSE;

      /* InitializeConditions for UnitDelay: '<S162>/Unit Delay' */
      BaseEngineController_LS_DWork.s162_UnitDelay_DSTATE = FALSE;

      /* S-Function Block: <S193>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BaseEngineController_LS_DWork.s193_motohawk_delta_time_DWORK1 = now -
          Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
      }

      /* InitializeConditions for UnitDelay: '<S192>/Unit Delay' */
      BaseEngineController_LS_DWork.s192_UnitDelay_DSTATE = FALSE;

      /* S-Function Block: <S191>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BaseEngineController_LS_DWork.s191_motohawk_delta_time_DWORK1 = now -
          Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
      }

      /* InitializeConditions for UnitDelay: '<S191>/state' */
      BaseEngineController_LS_DWork.s191_state_DSTATE = 0.0;

      /* InitializeConditions for S-Function (motohawk_sfun_trigger): '<S136>/motohawk_trigger1' */
      if (rtmIsFirstInitCond(BaseEngineController_LS_M)) {
        /* Initial conditions for function-call system: '<S136>/MinGovernor' */

        /* InitializeConditions for Stateflow: '<S250>/IdleStateMachine' */
        BaseEngineController_LS_IdleStateMachine_Init();

        /* S-Function Block: <S249>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_LS_DWork.s249_motohawk_delta_time_DWORK1 = now -
            Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }

        /* S-Function Block: <S253>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_LS_DWork.s253_motohawk_delta_time_DWORK1 = now -
            Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }

        /* InitializeConditions for Atomic SubSystem: '<S153>/AiflowOffset' */

        /* S-Function Block: <S256>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_LS_DWork.s256_motohawk_delta_time_DWORK1 = now -
            Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }

        /* End of InitializeConditions for SubSystem: '<S153>/AiflowOffset' */

        /* S-Function Block: <S281>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_LS_DWork.s281_motohawk_delta_time_DWORK1 = now -
            Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }
      }

      if (rtmIsFirstInitCond(BaseEngineController_LS_M)) {
        /* Initial conditions for function-call system: '<S136>/MaxGovernor' */

        /* S-Function Block: <S232>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_LS_DWork.s232_motohawk_delta_time_DWORK1 = now -
            Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }

        /* S-Function Block: <S243>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_LS_DWork.s243_motohawk_delta_time_DWORK1 = now -
            Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }
      }

      if (rtmIsFirstInitCond(BaseEngineController_LS_M)) {
        /* Initial conditions for function-call system: '<S136>/Spark Manager' */

        /* InitializeConditions for UnitDelay: '<S306>/Initial Condition is True' */
        BaseEngineController_LS_DWork.s306_InitialConditionisTrue_DSTATE = TRUE;
      }

      /* InitializeConditions for UnitDelay: '<S147>/Unit Delay' */
      BaseEngineController_LS_DWork.s147_UnitDelay_DSTATE = 0.0;

      /* InitializeConditions for UnitDelay: '<S186>/Unit Delay' */
      BaseEngineController_LS_DWork.s186_UnitDelay_DSTATE = 0.0;

      /* S-Function Block: <S176>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BaseEngineController_LS_DWork.s176_motohawk_delta_time_DWORK1 = now -
          Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
      }

      /* InitializeConditions for UnitDelay: '<S176>/Unit Delay' */
      BaseEngineController_LS_DWork.s176_UnitDelay_DSTATE = 0.0;

      /* InitializeConditions for UnitDelay: '<S185>/Unit Delay' */
      BaseEngineController_LS_DWork.s185_UnitDelay_DSTATE = 0.0;

      /* S-Function Block: <S186>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BaseEngineController_LS_DWork.s186_motohawk_delta_time_DWORK1 = now -
          Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
      }

      /* InitializeConditions for UnitDelay: '<S203>/Unit Delay' */
      BaseEngineController_LS_DWork.s203_UnitDelay_DSTATE = FALSE;

      /* InitializeConditions for UnitDelay: '<S204>/Unit Delay' */
      BaseEngineController_LS_DWork.s204_UnitDelay_DSTATE = FALSE;

      /* InitializeConditions for UnitDelay: '<S205>/Unit Delay' */
      BaseEngineController_LS_DWork.s205_UnitDelay_DSTATE = FALSE;

      /* InitializeConditions for Atomic SubSystem: '<S136>/O2 Control' */

      /* InitializeConditions for Atomic SubSystem: '<S154>/O2 PID Controller' */
      /* InitializeConditions for UnitDelay: '<S297>/Unit Delay' */
      BaseEngineController_LS_DWork.s297_UnitDelay_DSTATE = FALSE;

      /* InitializeConditions for UnitDelay: '<S294>/Unit Delay' */
      BaseEngineController_LS_DWork.s294_UnitDelay_DSTATE = 0.0;

      /* InitializeConditions for UnitDelay: '<S293>/Unit Delay' */
      BaseEngineController_LS_DWork.s293_UnitDelay_DSTATE = 0.0;

      /* S-Function Block: <S294>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BaseEngineController_LS_DWork.s294_motohawk_delta_time_DWORK1 = now -
          Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
      }

      /* InitializeConditions for UnitDelay: '<S290>/Unit Delay1' */
      BaseEngineController_LS_DWork.s290_UnitDelay1_DSTATE = 0.0;

      /* S-Function Block: <S298>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BaseEngineController_LS_DWork.s298_motohawk_delta_time_DWORK1 = now -
          Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
      }

      /* InitializeConditions for UnitDelay: '<S290>/Unit Delay' */
      BaseEngineController_LS_DWork.s290_UnitDelay_DSTATE = 0.0;

      /* S-Function Block: <S300>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BaseEngineController_LS_DWork.s300_motohawk_delta_time_DWORK1 = now -
          Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
      }

      /* InitializeConditions for UnitDelay: '<S290>/Unit Delay2' */
      BaseEngineController_LS_DWork.s290_UnitDelay2_DSTATE = 0.0;

      /* S-Function Block: <S299>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BaseEngineController_LS_DWork.s299_motohawk_delta_time_DWORK1 = now -
          Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
      }

      /* End of InitializeConditions for SubSystem: '<S154>/O2 PID Controller' */
      /* End of InitializeConditions for SubSystem: '<S136>/O2 Control' */

      /* Level2 S-Function Block: '<S136>/motohawk_trigger1' (motohawk_sfun_trigger) */

      /* Enable for Trigger_FGND_5XRTI_PERIODIC_1295p0007 */
      BaseEngineController_LS_DWork.s136_motohawk_trigger1_DWORK1 = 1;
      BaseEngineController_LS_DWork.s15_Run_MODE = TRUE;
    }

    /* RelationalOperator: '<S161>/LT' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S144>/motohawk_calibration'
     */
    rtb_RelationalOperator8_o = (BaseEngineController_LS_B.s735_Merge >=
      (ACTempOn_DataStore()));

    /* RelationalOperator: '<S161>/LT1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S144>/motohawk_calibration8'
     */
    rtb_LogicalOperator2_l = (BaseEngineController_LS_B.s735_Merge <=
      (ACTempOff_DataStore()));

    /* CombinatorialLogic: '<S167>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_RelationalOperator8_o != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_LogicalOperator2_l != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_c[0] =
        BaseEngineController_LS_ConstP.pooled908[rowidx];
      rtb_CombinatorialLogic_c[1] =
        BaseEngineController_LS_ConstP.pooled908[rowidx + 4];
    }

    /* Switch: '<S167>/Switch1' incorporates:
     *  UnitDelay: '<S167>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_c[1]) {
      BaseEngineController_LS_B.s167_Switch1 = rtb_CombinatorialLogic_c[0];
    } else {
      BaseEngineController_LS_B.s167_Switch1 =
        BaseEngineController_LS_DWork.s167_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S167>/Switch1' */

    /* DataTypeConversion: '<S144>/Data Type Conversion' */
    if (rtIsNaN(BaseEngineController_LS_B.s616_Sum1) || rtIsInf
        (BaseEngineController_LS_B.s616_Sum1)) {
      rtb_UnitDelay4_b3 = 0.0;
    } else {
      rtb_UnitDelay4_b3 = fmod(floor(BaseEngineController_LS_B.s616_Sum1),
        65536.0);
    }

    rtb_motohawk_interpolation_1d_n0 = (uint16_T)(rtb_UnitDelay4_b3 < 0.0 ?
      (uint16_T)(int32_T)(int16_T)-(int16_T)(uint16_T)-rtb_UnitDelay4_b3 :
      (uint16_T)rtb_UnitDelay4_b3);

    /* End of DataTypeConversion: '<S144>/Data Type Conversion' */
    /* RelationalOperator: '<S160>/LT' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S144>/motohawk_calibration2'
     */
    rtb_LogicalOperator2_l = (rtb_motohawk_interpolation_1d_n0 >= ((uint16_T)
      (ACSpdSlowOn_DataStore())));

    /* RelationalOperator: '<S160>/LT1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S144>/motohawk_calibration1'
     */
    rtb_RelationalOperator8_o = (rtb_motohawk_interpolation_1d_n0 <= ((uint16_T)
                                  (ACSpdSlowOff_DataStore())));

    /* CombinatorialLogic: '<S166>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_LogicalOperator2_l != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_RelationalOperator8_o != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_c[0] =
        BaseEngineController_LS_ConstP.pooled908[rowidx];
      rtb_CombinatorialLogic_c[1] =
        BaseEngineController_LS_ConstP.pooled908[rowidx + 4];
    }

    /* Switch: '<S166>/Switch1' incorporates:
     *  UnitDelay: '<S166>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_c[1]) {
      BaseEngineController_LS_B.s166_Switch1 = rtb_CombinatorialLogic_c[0];
    } else {
      BaseEngineController_LS_B.s166_Switch1 =
        BaseEngineController_LS_DWork.s166_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S166>/Switch1' */

    /* RelationalOperator: '<S158>/LT' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S144>/motohawk_calibration3'
     */
    rtb_LogicalOperator2_l = (rtb_motohawk_interpolation_1d_n0 >= ((uint16_T)
      (ACSpdFastOff_DataStore())));

    /* RelationalOperator: '<S158>/LT1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S144>/motohawk_calibration4'
     */
    rtb_RelationalOperator8_o = (rtb_motohawk_interpolation_1d_n0 <= ((uint16_T)
                                  (ACSpdFastOn_DataStore())));

    /* CombinatorialLogic: '<S164>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_LogicalOperator2_l != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_RelationalOperator8_o != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_c[0] =
        BaseEngineController_LS_ConstP.pooled908[rowidx];
      rtb_CombinatorialLogic_c[1] =
        BaseEngineController_LS_ConstP.pooled908[rowidx + 4];
    }

    /* Switch: '<S164>/Switch1' incorporates:
     *  UnitDelay: '<S164>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_c[1]) {
      rtb_Switch1_n1 = rtb_CombinatorialLogic_c[0];
    } else {
      rtb_Switch1_n1 = BaseEngineController_LS_DWork.s164_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S164>/Switch1' */

    /* Logic: '<S144>/Logical Operator2' */
    BaseEngineController_LS_B.s144_LogicalOperator2 = !rtb_Switch1_n1;

    /* DataTypeConversion: '<S144>/Data Type Conversion2' */
    if (rtIsNaN(BaseEngineController_LS_B.s412_Switch2) || rtIsInf
        (BaseEngineController_LS_B.s412_Switch2)) {
      rtb_UnitDelay4_b3 = 0.0;
    } else {
      rtb_UnitDelay4_b3 = fmod(floor(BaseEngineController_LS_B.s412_Switch2),
        65536.0);
    }

    rtb_motohawk_interpolation_1d_n0 = (uint16_T)(rtb_UnitDelay4_b3 < 0.0 ?
      (uint16_T)(int32_T)(int16_T)-(int16_T)(uint16_T)-rtb_UnitDelay4_b3 :
      (uint16_T)rtb_UnitDelay4_b3);

    /* End of DataTypeConversion: '<S144>/Data Type Conversion2' */
    /* RelationalOperator: '<S159>/LT' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S144>/motohawk_calibration5'
     */
    rtb_LogicalOperator2_l = (rtb_motohawk_interpolation_1d_n0 >= ((uint16_T)
      (AC_TPSOff_DataStore())));

    /* RelationalOperator: '<S159>/LT1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S144>/motohawk_calibration6'
     */
    rtb_RelationalOperator8_o = (rtb_motohawk_interpolation_1d_n0 <= ((uint16_T)
                                  (AC_TPSOn_DataStore())));

    /* CombinatorialLogic: '<S165>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_LogicalOperator2_l != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_RelationalOperator8_o != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_c[0] =
        BaseEngineController_LS_ConstP.pooled908[rowidx];
      rtb_CombinatorialLogic_c[1] =
        BaseEngineController_LS_ConstP.pooled908[rowidx + 4];
    }

    /* Switch: '<S165>/Switch1' incorporates:
     *  UnitDelay: '<S165>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_c[1]) {
      rtb_Switch1_k = rtb_CombinatorialLogic_c[0];
    } else {
      rtb_Switch1_k = BaseEngineController_LS_DWork.s165_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S165>/Switch1' */

    /* Logic: '<S144>/Logical Operator4' */
    BaseEngineController_LS_B.s144_LogicalOperator4 = !rtb_Switch1_k;

    /* Logic: '<S144>/Logical Operator3' */
    rtb_LogicalOperator6_b = (BaseEngineController_LS_B.s166_Switch1 &&
      BaseEngineController_LS_B.s144_LogicalOperator2);

    /* DataTypeConversion: '<S144>/Data Type Conversion1' */
    if (rtIsNaN(BaseEngineController_LS_B.s630_Merge) || rtIsInf
        (BaseEngineController_LS_B.s630_Merge)) {
      rtb_UnitDelay4_b3 = 0.0;
    } else {
      rtb_UnitDelay4_b3 = fmod(floor(BaseEngineController_LS_B.s630_Merge),
        65536.0);
    }

    rtb_motohawk_interpolation_1d_n0 = (uint16_T)(rtb_UnitDelay4_b3 < 0.0 ?
      (uint16_T)(int32_T)(int16_T)-(int16_T)(uint16_T)-rtb_UnitDelay4_b3 :
      (uint16_T)rtb_UnitDelay4_b3);

    /* End of DataTypeConversion: '<S144>/Data Type Conversion1' */
    /* RelationalOperator: '<S157>/LT' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S144>/motohawk_calibration9'
     */
    rtb_LogicalOperator2_l = (rtb_motohawk_interpolation_1d_n0 >= ((uint16_T)
      (ACLowPresOn_DataStore())));

    /* RelationalOperator: '<S157>/LT1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S144>/motohawk_calibration10'
     */
    rtb_RelationalOperator8_o = (rtb_motohawk_interpolation_1d_n0 <= ((uint16_T)
                                  (ACLowPresOff_DataStore())));

    /* CombinatorialLogic: '<S163>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_LogicalOperator2_l != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_RelationalOperator8_o != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_c[0] =
        BaseEngineController_LS_ConstP.pooled908[rowidx];
      rtb_CombinatorialLogic_c[1] =
        BaseEngineController_LS_ConstP.pooled908[rowidx + 4];
    }

    /* Switch: '<S163>/Switch1' incorporates:
     *  UnitDelay: '<S163>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_c[1]) {
      BaseEngineController_LS_B.s163_Switch1 = rtb_CombinatorialLogic_c[0];
    } else {
      BaseEngineController_LS_B.s163_Switch1 =
        BaseEngineController_LS_DWork.s163_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S163>/Switch1' */
    /* RelationalOperator: '<S156>/LT' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S144>/motohawk_calibration11'
     */
    rtb_LogicalOperator2_l = (rtb_motohawk_interpolation_1d_n0 >= ((uint16_T)
      (ACHighPresOff_DataStore())));

    /* RelationalOperator: '<S156>/LT1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S144>/motohawk_calibration12'
     */
    rtb_RelationalOperator8_o = (rtb_motohawk_interpolation_1d_n0 <= ((uint16_T)
                                  (ACHighPresOn_DataStore())));

    /* CombinatorialLogic: '<S162>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_LogicalOperator2_l != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_RelationalOperator8_o != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_c[0] =
        BaseEngineController_LS_ConstP.pooled908[rowidx];
      rtb_CombinatorialLogic_c[1] =
        BaseEngineController_LS_ConstP.pooled908[rowidx + 4];
    }

    /* Switch: '<S162>/Switch1' incorporates:
     *  UnitDelay: '<S162>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_c[1]) {
      rtb_Switch1_eq = rtb_CombinatorialLogic_c[0];
    } else {
      rtb_Switch1_eq = BaseEngineController_LS_DWork.s162_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S162>/Switch1' */

    /* Logic: '<S144>/Logical Operator1' */
    BaseEngineController_LS_B.s144_LogicalOperator1 = !rtb_Switch1_eq;

    /* RelationalOperator: '<S144>/Relational Operator' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S144>/motohawk_calibration7'
     */
    rtb_LogicalOperator1_al = (BaseEngineController_LS_B.s433_Switch >=
      (ACTimeFromStartDelay_DataStore()));

    /* Logic: '<S144>/Logical Operator' incorporates:
     *  Logic: '<S144>/Logical Operator6'
     *  S-Function (motohawk_sfun_fault_action): '<S144>/motohawk_fault_action'
     */
    BaseEngineController_LS_B.s144_LogicalOperator =
      ((BaseEngineController_LS_B.s568_Merge &&
        BaseEngineController_LS_B.s167_Switch1 && rtb_LogicalOperator6_b &&
        BaseEngineController_LS_B.s144_LogicalOperator4 &&
        BaseEngineController_LS_B.s163_Switch1 &&
        BaseEngineController_LS_B.s144_LogicalOperator1 &&
        rtb_LogicalOperator1_al && (!GetFaultActionStatus(3))));

    /* Outputs for Enabled SubSystem: '<S145>/ShutDownTasksComplete Reset' incorporates:
     *  EnablePort: '<S169>/Enable'
     */
    /* S-Function (motohawk_sfun_calibration): '<S145>/motohawk_calibration2' */
    if ((AirControlSource_DataStore())) {
      /* S-Function (motohawk_sfun_data_write): '<S169>/motohawk_data_write' incorporates:
       *  Constant: '<S169>/Constant'
       */
      /* Write to Data Storage as scalar: ShutDownTasksComplete */
      {
        ShutDownTasksComplete_DataStore() = TRUE;
      }
    }

    /* End of S-Function (motohawk_sfun_calibration): '<S145>/motohawk_calibration2' */
    /* End of Outputs for SubSystem: '<S145>/ShutDownTasksComplete Reset' */

    /* Outputs for Atomic SubSystem: '<S136>/Base Equiv Ratio' */

    /* S-Function Block: <S146>/motohawk_interpolation_2d1 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_WarmUpRatio = TableInterpolation2D_real_T(rtb_motohawk_prelookup_m,
        rtb_motohawk_prelookup1_h, (real_T *) ((WarmUpEqRatioMap_DataStore())),
        5, 9);
      (WarmUpEqRatio_DataStore()) = rtb_WarmUpRatio;
    }

    /* S-Function Block: <S170>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_fx = TableInterpolation1D_real_T
        (BaseEngineController_LS_B.s393_motohawk_prelookup, (real_T *)
         ((Warmup_Time_HoldoffTbl_DataStore())), 5);
      (Warmup_Time_Holdoff_DataStore()) = rtb_motohawk_interpolation_1d_fx;
    }

    /* Switch: '<S170>/Switch' incorporates:
     *  Constant: '<S170>/Constant'
     *  RelationalOperator: '<S170>/Relational Operator'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S170>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_interpolation_2d): '<S146>/motohawk_interpolation_2d2'
     *  S-Function (motohawk_sfun_prelookup): '<S362>/motohawk_prelookup2'
     */
    if (BaseEngineController_LS_B.s433_Switch >=
        rtb_motohawk_interpolation_1d_fx) {
      /* S-Function Block: <S146>/motohawk_interpolation_2d2 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_WarmUptimeRatio = TableInterpolation2D_real_T(rtb_TimeSinceRun09,
          BaseEngineController_LS_B.s393_motohawk_prelookup, (real_T *)
          ((WarmUpTimeRatioMap_DataStore())), 9, 5);
        (WarmUpTimeRatio_DataStore()) = rtb_WarmUptimeRatio;
      }

      rtb_Switch_c = rtb_WarmUptimeRatio;
    } else {
      rtb_Switch_c = 1.0;
    }

    /* End of Switch: '<S170>/Switch' */
    /* S-Function Block: <S146>/motohawk_interpolation_2d5 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_IATEnrichment = TableInterpolation2D_real_T
        (BaseEngineController_LS_B.s395_motohawk_prelookup1,
         BaseEngineController_LS_B.s394_motohawk_prelookup, (real_T *)
         ((IntakeAirTempEnrichmentMap_DataStore())), 9, 5);
      (IntakeAirTempEnrichment_DataStore()) = rtb_IATEnrichment;
    }

    /* S-Function Block: <S146>/motohawk_interpolation_2d6 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_CATEnrichment = TableInterpolation2D_real_T
        (BaseEngineController_LS_B.s395_motohawk_prelookup1,
         BaseEngineController_LS_B.s392_motohawk_prelookup, (real_T *)
         ((ChargeAirTempEnrichmentMap_DataStore())), 9, 5);
      (ChargeAirTempEnrichment_DataStore()) = rtb_CATEnrichment;
    }

    /* S-Function Block: <S146>/motohawk_interpolation_2d3 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_motohawk_interpolation_2d3 = TableInterpolation2D_real_T
        (BaseEngineController_LS_B.s395_Indexes,
         BaseEngineController_LS_B.s397_Indexes, (real_T *)
         ((DesEquivRatioMap_DataStore())), 17, 17);
      (DesEquivRatio_DataStore()) = rtb_motohawk_interpolation_2d3;
    }

    /* If: '<S171>/If' incorporates:
     *  Inport: '<S172>/In1'
     *  Inport: '<S173>/In1'
     *  S-Function (motohawk_sfun_calibration): '<S171>/new_value'
     *  S-Function (motohawk_sfun_calibration): '<S171>/override_enable'
     */
    if ((EquivRatio_ovr_DataStore())) {
      /* Outputs for IfAction SubSystem: '<S171>/NewValue' incorporates:
       *  ActionPort: '<S172>/Action Port'
       */
      rtb_DataTypeConversion1_e = (EquivRatio_new_DataStore());

      /* End of Outputs for SubSystem: '<S171>/NewValue' */
    } else {
      /* Outputs for IfAction SubSystem: '<S171>/OldValue' incorporates:
       *  ActionPort: '<S173>/Action Port'
       */
      rtb_DataTypeConversion1_e = rtb_motohawk_interpolation_2d3;

      /* End of Outputs for SubSystem: '<S171>/OldValue' */
    }

    /* End of If: '<S171>/If' */

    /* MinMax: '<S146>/MinMax' */
    y = (rtb_DataTypeConversion1_e >= rtb_WarmUpRatio) || rtIsNaN
      (rtb_WarmUpRatio) ? rtb_DataTypeConversion1_e : rtb_WarmUpRatio;
    y = (y >= rtb_Switch_c) || rtIsNaN(rtb_Switch_c) ? y : rtb_Switch_c;
    y = (y >= rtb_IATEnrichment) || rtIsNaN(rtb_IATEnrichment) ? y :
      rtb_IATEnrichment;
    BaseEngineController_LS_B.s146_DesEquivRatio = (y >= rtb_CATEnrichment) ||
      rtIsNaN(rtb_CATEnrichment) ? y : rtb_CATEnrichment;

    /* End of Outputs for SubSystem: '<S136>/Base Equiv Ratio' */

    /* DataTypeConversion: '<S190>/Data Type Conversion' */
    if (rtIsNaN(BaseEngineController_LS_B.s726_Merge) || rtIsInf
        (BaseEngineController_LS_B.s726_Merge)) {
      rtb_UnitDelay4_b3 = 0.0;
    } else {
      rtb_UnitDelay4_b3 = fmod(floor(BaseEngineController_LS_B.s726_Merge),
        65536.0);
    }

    rtb_DataTypeConversion_d = (int16_T)(rtb_UnitDelay4_b3 < 0.0 ? (int16_T)
      -(int16_T)(uint16_T)-rtb_UnitDelay4_b3 : (int16_T)(uint16_T)
      rtb_UnitDelay4_b3);

    /* End of DataTypeConversion: '<S190>/Data Type Conversion' */
    /* S-Function Block: <S194>/motohawk_prelookup */
    {
      extern uint16_T TablePrelookup_int16_T(int16_T in, const volatile int16_T
        ordarr[], uint32_T sz, uint16_T prev);
      (DFCOEntryRPMIn_DataStore()) = rtb_DataTypeConversion_d;
      (DFCOEntryRPMIdx_DataStore()) = TablePrelookup_int16_T
        (rtb_DataTypeConversion_d, (DFCOEntryRPMIdxArr_DataStore()), 10,
         (DFCOEntryRPMIdx_DataStore()));
      rtb_motohawk_prelookup_f = (DFCOEntryRPMIdx_DataStore());
    }

    /* S-Function Block: <S194>/motohawk_interpolation_1d */
    {
      extern uint16_T TableInterpolation1D_uint16_T(uint16_T idx, uint16_T
        *tbl_data, uint32_T sz);
      rtb_motohawk_interpolation_1d_n0 = TableInterpolation1D_uint16_T
        (rtb_motohawk_prelookup_f, (uint16_T *) ((DFCOEntryRPMTbl_DataStore())),
         10);
      (DFCOEntryRPM_DataStore()) = rtb_motohawk_interpolation_1d_n0;
    }

    /* RelationalOperator: '<S190>/Relational Operator' */
    rtb_LogicalOperator2_l = (BaseEngineController_LS_B.s616_Sum1 >= (real_T)
      rtb_motohawk_interpolation_1d_n0);

    /* RelationalOperator: '<S190>/Relational Operator1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S190>/motohawk_calibration1'
     */
    rtb_LogicalOperator6_b = (BaseEngineController_LS_B.s405_Switch1 <=
      (DFCOEntryAPP_DataStore()));

    /* RelationalOperator: '<S190>/Relational Operator2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S190>/motohawk_calibration2'
     */
    rtb_RelationalOperator8_o = (BaseEngineController_LS_B.s667_Merge <= (real_T)
                                 ((uint8_T)(DFCOEntryMAP_DataStore())));

    /* S-Function (motohawk_sfun_fault_action): '<S190>/motohawk_fault_action'
     *
     * Regarding '<S190>/motohawk_fault_action':
       Get Fault Action Status: DFCODisable
     */
    {
      extern boolean_T GetFaultActionStatus(uint32_T action);
      rtb_BelowLoTarget_b = GetFaultActionStatus(1);
    }

    /* Logic: '<S190>/Logical Operator1' */
    rtb_LogicalOperator1_al = !rtb_BelowLoTarget_b;

    /* Logic: '<S190>/Logical Operator' incorporates:
     *  RelationalOperator: '<S190>/Relational Operator3'
     *  S-Function (motohawk_sfun_calibration): '<S190>/motohawk_calibration3'
     *  S-Function (motohawk_sfun_calibration): '<S190>/motohawk_calibration4'
     *  S-Function (motohawk_sfun_data_read): '<S190>/motohawk_data_read'
     *  Sum: '<S190>/Sum1'
     */
    BaseEngineController_LS_B.s190_LogicalOperator = ((rtb_LogicalOperator2_l &&
      rtb_LogicalOperator6_b && rtb_RelationalOperator8_o &&
      rtb_LogicalOperator1_al && (DFCOEnable_DataStore()) &&
      (BaseEngineController_LS_B.s616_Sum1 >= MinGovRPMSetPt_DataStore() +
       (real_T)((int16_T)(DFCOEnterIdleSpeed_DataStore())))));

    /* S-Function Block: <S193>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s193_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_p = ((real_T) delta) * 0.000001;
    }

    /* Switch: '<S193>/Switch' incorporates:
     *  Constant: '<S193>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S193>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S193>/motohawk_delta_time'
     *  Sum: '<S193>/Sum'
     */
    if (BaseEngineController_LS_B.s190_LogicalOperator) {
      rtb_Switch_mq = rtb_motohawk_delta_time_p + DFCOEnterTimer_DataStore();
    } else {
      rtb_Switch_mq = 0.0;
    }

    /* End of Switch: '<S193>/Switch' */
    /* Logic: '<S190>/Logical Operator2' incorporates:
     *  RelationalOperator: '<S190>/Relational Operator4'
     *  S-Function (motohawk_sfun_calibration): '<S190>/motohawk_calibration5'
     */
    rtb_LogicalOperator2_l = (BaseEngineController_LS_B.s190_LogicalOperator &&
                              (rtb_Switch_mq >= (DFCODelayTime_DataStore())));

    /* RelationalOperator: '<S190>/Relational Operator5' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S190>/motohawk_calibration9'
     *  S-Function (motohawk_sfun_data_read): '<S190>/motohawk_data_read'
     *  Sum: '<S190>/Sum'
     */
    rtb_LogicalOperator6_b = (BaseEngineController_LS_B.s616_Sum1 <=
      MinGovRPMSetPt_DataStore() + (real_T)((int16_T)
      (DFCOExitIdleSpeed_DataStore())));

    /* S-Function Block: <S195>/motohawk_prelookup */
    {
      extern uint16_T TablePrelookup_int16_T(int16_T in, const volatile int16_T
        ordarr[], uint32_T sz, uint16_T prev);
      (DFCOExitRPMIn_DataStore()) = rtb_DataTypeConversion_d;
      (DFCOExitRPMIdx_DataStore()) = TablePrelookup_int16_T
        (rtb_DataTypeConversion_d, (DFCOExitRPMIdxArr_DataStore()), 10,
         (DFCOExitRPMIdx_DataStore()));
      rtb_motohawk_prelookup_p = (DFCOExitRPMIdx_DataStore());
    }

    /* S-Function Block: <S195>/motohawk_interpolation_1d */
    {
      extern uint16_T TableInterpolation1D_uint16_T(uint16_T idx, uint16_T
        *tbl_data, uint32_T sz);
      rtb_motohawk_interpolation_1d_n0 = TableInterpolation1D_uint16_T
        (rtb_motohawk_prelookup_p, (uint16_T *) ((DFCOExitRPMTbl_DataStore())),
         10);
      (DFCOExitRPM_DataStore()) = rtb_motohawk_interpolation_1d_n0;
    }

    /* RelationalOperator: '<S190>/Relational Operator8' */
    rtb_RelationalOperator8_o = (BaseEngineController_LS_B.s616_Sum1 <= (real_T)
      rtb_motohawk_interpolation_1d_n0);

    /* RelationalOperator: '<S190>/Relational Operator6' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S190>/motohawk_calibration6'
     */
    rtb_LogicalOperator1_al = (BaseEngineController_LS_B.s405_Switch1 >=
      (DFCOExitAPP_DataStore()));

    /* RelationalOperator: '<S190>/Relational Operator7' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S190>/motohawk_calibration7'
     */
    rtb_motohawk_data_read13 = (BaseEngineController_LS_B.s667_Merge >= (real_T)
                                ((uint8_T)(DFCOExitMAP_DataStore())));

    /* Logic: '<S190>/Logical Operator4' incorporates:
     *  Logic: '<S190>/Logical Operator3'
     */
    rtb_BelowLoTarget_b = ((rtb_LogicalOperator6_b && rtb_RelationalOperator8_o &&
      rtb_LogicalOperator1_al && rtb_motohawk_data_read13) ||
      rtb_BelowLoTarget_b);

    /* CombinatorialLogic: '<S192>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_LogicalOperator2_l != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_b != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_c[0] =
        BaseEngineController_LS_ConstP.pooled908[rowidx];
      rtb_CombinatorialLogic_c[1] =
        BaseEngineController_LS_ConstP.pooled908[rowidx + 4];
    }

    /* Switch: '<S192>/Switch1' incorporates:
     *  UnitDelay: '<S192>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_c[1]) {
      BaseEngineController_LS_B.s192_Switch1 = rtb_CombinatorialLogic_c[0];
    } else {
      BaseEngineController_LS_B.s192_Switch1 =
        BaseEngineController_LS_DWork.s192_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S192>/Switch1' */
    /* S-Function Block: <S191>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s191_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_eo = ((real_T) delta) * 0.000001;
    }

    /* MultiPortSwitch: '<S191>/Multiport Switch' incorporates:
     *  Gain: '<S191>/Ramp Down'
     *  Product: '<S191>/Product'
     *  Product: '<S191>/Product1'
     *  S-Function (motohawk_sfun_delta_time): '<S191>/motohawk_delta_time'
     */
    if (BaseEngineController_LS_B.s192_Switch1 == FALSE) {
      /* Switch: '<S191>/Switch' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S190>/motohawk_calibration11'
       *  S-Function (motohawk_sfun_delta_time): '<S191>/motohawk_delta_time'
       */
      if ((DFCOExitRampTime_DataStore()) > 0.0) {
        rtb_DataTypeConversion1_e = (DFCOExitRampTime_DataStore());
      } else {
        rtb_DataTypeConversion1_e = rtb_motohawk_delta_time_eo;
      }

      /* End of Switch: '<S191>/Switch' */
      rtb_Switch_k = rtb_motohawk_delta_time_eo / rtb_DataTypeConversion1_e *
        -1.0;
    } else {
      /* Switch: '<S191>/Switch1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S190>/motohawk_calibration8'
       *  S-Function (motohawk_sfun_delta_time): '<S191>/motohawk_delta_time'
       */
      if ((DFCOEnterRampTime_DataStore()) > 0.0) {
        rtb_DataTypeConversion1_e = (DFCOEnterRampTime_DataStore());
      } else {
        rtb_DataTypeConversion1_e = rtb_motohawk_delta_time_eo;
      }

      /* End of Switch: '<S191>/Switch1' */
      rtb_Switch_k = rtb_motohawk_delta_time_eo / rtb_DataTypeConversion1_e;
    }

    /* End of MultiPortSwitch: '<S191>/Multiport Switch' */

    /* Sum: '<S191>/Sum' incorporates:
     *  UnitDelay: '<S191>/state'
     */
    rtb_Switch_k += BaseEngineController_LS_DWork.s191_state_DSTATE;

    /* MinMax: '<S196>/MinMax' incorporates:
     *  Constant: '<S191>/Constant'
     */
    y = rtb_Switch_k >= 0.0 ? rtb_Switch_k : 0.0;

    /* MinMax: '<S196>/MinMax1' incorporates:
     *  Constant: '<S191>/Constant'
     *  Constant: '<S191>/Constant1'
     *  MinMax: '<S196>/MinMax'
     */
    rtb_MinMax1_d = y <= 1.0 ? y : 1.0;

    /* Product: '<S190>/Product1' incorporates:
     *  Constant: '<S190>/Constant'
     *  Sum: '<S190>/Sum2'
     */
    BaseEngineController_LS_B.s190_Product1 = (1.0 - rtb_MinMax1_d) *
      BaseEngineController_LS_B.s146_DesEquivRatio;

    /* Product: '<S190>/Product2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S190>/motohawk_calibration10'
     */
    BaseEngineController_LS_B.s190_SpkOut = rtb_MinMax1_d *
      (DFCOExitSparkRet_DataStore());

    /* S-Function (motohawk_sfun_trigger): '<S136>/motohawk_trigger1' */
    /* Enable for Trigger_FGND_5XRTI_PERIODIC_1295p0007 */
    if (BaseEngineController_LS_DWork.s136_motohawk_trigger1_DWORK1 == 0) {
      BaseEngineController_LS_DWork.s136_motohawk_trigger1_DWORK1 = 1;
    }

    /* Sum: '<S145>/Sum2' */
    rtb_DataTypeConversion1_e =
      BaseEngineController_LS_B.s256_DontallowsetpointtoeverdropbelowtheTargetRPM
      + BaseEngineController_LS_B.s153_MinGovAirPID;

    /* MultiPortSwitch: '<S145>/Multiport Switch' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S145>/motohawk_calibration2'
     */
    if ((AirControlSource_DataStore()) == FALSE) {
      /* Switch: '<S145>/Switch1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S145>/motohawk_calibration1'
       */
      if ((ThrottleSource_DataStore())) {
        /* S-Function Block: <S145>/motohawk_interpolation_1d2 */
        {
          extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T
            *tbl_data, uint32_T sz);
          rtb_motohawk_interpolation_1d2_d = TableInterpolation1D_real_T
            (BaseEngineController_LS_B.s397_motohawk_prelookup1, (real_T *)
             ((MaxETCSetPtLimitTbl_DataStore())), 9);
          (MaxETCSetPtLimit_DataStore()) = rtb_motohawk_interpolation_1d2_d;
        }

        /* S-Function Block: <S145>/motohawk_interpolation_1d1 */
        {
          extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T
            *tbl_data, uint32_T sz);
          rtb_motohawk_interpolation_1d1_c = TableInterpolation1D_real_T
            (BaseEngineController_LS_B.s397_motohawk_prelookup1, (real_T *)
             ((MinETCSetPtLimitTbl_DataStore())), 9);
          (MinETCSetPtLimit_DataStore()) = rtb_motohawk_interpolation_1d1_c;
        }

        /* Switch: '<S145>/Switch2' */
        if (BaseEngineController_LS_B.s231_MultiportSwitch) {
          rtb_DataTypeConversion1_e = BaseEngineController_LS_B.s234_Switch;
        } else {
          /* Switch: '<S145>/Switch4' incorporates:
           *  Logic: '<S145>/Logical Operator'
           *  Sum: '<S145>/Sum1'
           */
          if (!BaseEngineController_LS_B.s266_RelOp) {
            rtb_DataTypeConversion1_e = BaseEngineController_LS_B.s420_Sum2 +
              BaseEngineController_LS_B.s256_DontallowsetpointtoeverdropbelowtheTargetRPM;
          }

          /* End of Switch: '<S145>/Switch4' */
        }

        /* End of Switch: '<S145>/Switch2' */

        /* MinMax: '<S168>/MinMax' */
        y = (rtb_DataTypeConversion1_e >= rtb_motohawk_interpolation_1d1_c) ||
          rtIsNaN(rtb_motohawk_interpolation_1d1_c) ? rtb_DataTypeConversion1_e :
          rtb_motohawk_interpolation_1d1_c;

        /* MinMax: '<S168>/MinMax1' incorporates:
         *  MinMax: '<S168>/MinMax'
         */
        rtb_DataTypeConversion1_e = (y <= rtb_motohawk_interpolation_1d2_d) ||
          rtIsNaN(rtb_motohawk_interpolation_1d2_d) ? y :
          rtb_motohawk_interpolation_1d2_d;
      } else {
        rtb_DataTypeConversion1_e = rtb_APP1;
      }

      /* End of Switch: '<S145>/Switch1' */
      BaseEngineController_LS_B.s145_MultiportSwitch = rtb_DataTypeConversion1_e;
    } else {
      BaseEngineController_LS_B.s145_MultiportSwitch = rtb_DataTypeConversion1_e;
    }

    /* End of MultiPortSwitch: '<S145>/Multiport Switch' */

    /* S-Function (motohawk_sfun_data_write): '<S145>/motohawk_data_write' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S145>/motohawk_calibration'
     */
    /* Write to Data Storage as scalar: IACType */
    {
      IACType_DataStore() = (IACTypeCal_DataStore());
    }

    /* Gain: '<S147>/kPa to PSI' incorporates:
     *  Sum: '<S147>/Sum1'
     */
    rtb_Switch_k = (BaseEngineController_LS_B.s667_Merge -
                    BaseEngineController_LS_B.s367_Sum) * 0.145038;

    /* RelationalOperator: '<S147>/Relational Operator' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S147>/motohawk_calibration2'
     */
    rtb_motohawk_data_read13 = (rtb_Switch_k <
      (BoostActivationThreshold_DataStore()));

    /* UnitDelay: '<S147>/Unit Delay' */
    rtb_DataTypeConversion_b2 =
      BaseEngineController_LS_DWork.s147_UnitDelay_DSTATE;

    /* Outputs for Enabled SubSystem: '<S147>/BoostControl Adapt' incorporates:
     *  EnablePort: '<S174>/Enable'
     */
    /* Logic: '<S147>/Logical Operator' */
    if (!rtb_motohawk_data_read13) {
      /* Product: '<S174>/Product0' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S174>/motohawk_calibration2'
       */
      rtb_DataTypeConversion1_e = rtb_DataTypeConversion_b2 *
        (BoostControlAdaptGain_DataStore());

      /* MinMax: '<S181>/MinMax' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S179>/motohawk_calibration'
       */
      rtb_Abs_k = (rtb_DataTypeConversion1_e >= (BoostAdaptErrorLwrLim_DataStore
                    ())) || rtIsNaN((BoostAdaptErrorLwrLim_DataStore())) ?
        rtb_DataTypeConversion1_e : (BoostAdaptErrorLwrLim_DataStore());

      /* MinMax: '<S181>/MinMax1' incorporates:
       *  MinMax: '<S181>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S179>/motohawk_calibration1'
       */
      rtb_MinMax1_if = (rtb_Abs_k <= (BoostAdaptErrorUprLim_DataStore())) ||
        rtIsNaN((BoostAdaptErrorUprLim_DataStore())) ? rtb_Abs_k :
        (BoostAdaptErrorUprLim_DataStore());

      /* Outputs for Atomic SubSystem: '<S174>/BoostControl Enable Delay' */

      /* S-Function Block: <S180>/motohawk_delta_time */
      rtb_motohawk_delta_time_nb = 0.005;
      rtb_DataTypeConversion1_e = rtb_motohawk_delta_time_nb +
        BoostTimer_DataStore();

      /* RelationalOperator: '<S178>/Relational Operator' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S178>/motohawk_calibration1'
       */
      rtb_LogicalOperator6_b = (rtb_DataTypeConversion1_e >
        (BoostAdaptDelayTime_DataStore()));

      /* Saturate: '<S180>/Saturation' */
      rtb_Saturation_cv = rtb_DataTypeConversion1_e >= 16000.0 ? 16000.0 :
        rtb_DataTypeConversion1_e <= 0.0 ? 0.0 : rtb_DataTypeConversion1_e;

      /* S-Function (motohawk_sfun_data_write): '<S180>/motohawk_data_write' */
      /* Write to Data Storage as scalar: BoostTimer */
      {
        BoostTimer_DataStore() = rtb_Saturation_cv;
      }

      /* End of Outputs for SubSystem: '<S174>/BoostControl Enable Delay' */

      /* Logic: '<S174>/Logical Operator1' incorporates:
       *  Abs: '<S174>/Abs'
       *  RelationalOperator: '<S174>/Relational Operator'
       *  S-Function (motohawk_sfun_calibration): '<S174>/motohawk_calibration3'
       *  S-Function (motohawk_sfun_calibration): '<S174>/motohawk_calibration4'
       */
      BaseEngineController_LS_B.s174_LogicalOperator1 =
        (((BoostControlAdaptEnable_DataStore()) && rtb_LogicalOperator6_b &&
          (fabs(rtb_DataTypeConversion_b2) <= (BoostControlAdaptDelta_DataStore()))));

      /* Outputs for Enabled SubSystem: '<S174>/Adapt Boost Table' incorporates:
       *  EnablePort: '<S177>/Enable'
       */
      if (BaseEngineController_LS_B.s174_LogicalOperator1) {
        /* S-Function Block: <S177>/motohawk_adapt_table */
        /* Adapt 2-D Table */
        {
          uint32_T _row = ((BoostTargetIdx_DataStore())) >> 9;
          uint32_T _row_frac = (((BoostTargetIdx_DataStore())) & 0x01FF) >> 7;
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

      /* End of Outputs for SubSystem: '<S174>/Adapt Boost Table' */
    }

    /* End of Logic: '<S147>/Logical Operator' */
    /* End of Outputs for SubSystem: '<S147>/BoostControl Adapt' */

    /* Switch: '<S186>/Switch1' incorporates:
     *  Constant: '<S175>/Constant'
     *  UnitDelay: '<S186>/Unit Delay'
     */
    if (rtb_motohawk_data_read13) {
      BaseEngineController_LS_B.s186_Switch1 = 0.0;
    } else {
      BaseEngineController_LS_B.s186_Switch1 =
        BaseEngineController_LS_DWork.s186_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S186>/Switch1' */

    /* S-Function Block: <S176>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s176_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_id = ((real_T) delta) * 0.000001;
    }

    /* Switch: '<S147>/Switch1' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S147>/motohawk_interpolation_1d1'
     */
    if (BaseEngineController_LS_B.s592_Merge) {
      /* S-Function Block: <S147>/motohawk_interpolation_1d1 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d1_g = TableInterpolation1D_real_T
          (BaseEngineController_LS_B.s397_motohawk_prelookup1, (real_T *)
           ((BoostTarget_TwoStepTbl_DataStore())), 9);
        (BoostTarget_TwoStep_DataStore()) = rtb_motohawk_interpolation_1d1_g;
      }

      BaseEngineController_LS_B.s147_Switch1 = rtb_motohawk_interpolation_1d1_g;
    } else {
      /* S-Function Block: <S147>/motohawk_interpolation_1d3 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_Sum2_d = TableInterpolation1D_real_T
          (BaseEngineController_LS_B.s394_motohawk_prelookup, (real_T *)
           ((BoostIATLimitTbl_DataStore())), 5);
        (BoostIATLimit_DataStore()) = rtb_Sum2_d;
      }

      /* S-Function Block: <S147>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_MinMax_gy = TableInterpolation1D_real_T
          (BaseEngineController_LS_B.s393_motohawk_prelookup, (real_T *)
           ((BoostECTLimitTbl_DataStore())), 5);
        (BoostECTLimit_DataStore()) = rtb_MinMax_gy;
      }

      /* MinMax: '<S147>/MinMax' */
      rtb_MinMax_gy = (rtb_MinMax_gy <= rtb_Sum2_d) || rtIsNaN(rtb_Sum2_d) ?
        rtb_MinMax_gy : rtb_Sum2_d;

      /* Product: '<S147>/Product' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S147>/motohawk_calibration3'
       */
      rtb_Sum2_d = (real_T)BaseEngineController_LS_B.s587_Merge *
        (BoostScrambleAdder_DataStore());

      /* S-Function Block: <S147>/motohawk_interpolation_2d2 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_motohawk_interpolation_2d2_f = TableInterpolation2D_real_T
          (rtb_motohawk_prelookup_i,
           BaseEngineController_LS_B.s397_motohawk_prelookup1, (real_T *)
           ((BoostTargetMap_DataStore())), 9, 9);
        (BoostTarget_DataStore()) = rtb_motohawk_interpolation_2d2_f;
      }

      /* Sum: '<S147>/Sum2' incorporates:
       *  S-Function (motohawk_sfun_interpolation_2d): '<S147>/motohawk_interpolation_2d2'
       *  S-Function (motohawk_sfun_prelookup): '<S400>/motohawk_prelookup'
       */
      rtb_Sum2_d += rtb_motohawk_interpolation_2d2_f;

      /* MinMax: '<S147>/MinMax2' */
      BaseEngineController_LS_B.s147_Switch1 = (rtb_Sum2_d <= rtb_MinMax_gy) ||
        rtIsNaN(rtb_MinMax_gy) ? rtb_Sum2_d : rtb_MinMax_gy;
    }

    /* End of Switch: '<S147>/Switch1' */

    /* UnitDelay: '<S176>/Unit Delay' */
    rtb_DataTypeConversion1_e =
      BaseEngineController_LS_DWork.s176_UnitDelay_DSTATE;

    /* Product: '<S176>/Product1' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S176>/motohawk_delta_time'
     *  Sum: '<S176>/Sum3'
     *  UnitDelay: '<S176>/Unit Delay'
     */
    rtb_DataTypeConversion_b2 = 1.0 / rtb_motohawk_delta_time_id *
      (BaseEngineController_LS_B.s147_Switch1 -
       BaseEngineController_LS_DWork.s176_UnitDelay_DSTATE);

    /* MinMax: '<S189>/MinMax' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S147>/motohawk_calibration1'
     */
    rtb_Abs_k = (rtb_DataTypeConversion_b2 >= (BoostFallRate_DataStore())) ||
      rtIsNaN((BoostFallRate_DataStore())) ? rtb_DataTypeConversion_b2 :
      (BoostFallRate_DataStore());

    /* Sum: '<S176>/Sum2' incorporates:
     *  MinMax: '<S189>/MinMax'
     *  MinMax: '<S189>/MinMax1'
     *  Product: '<S176>/Product'
     *  S-Function (motohawk_sfun_calibration): '<S147>/motohawk_calibration'
     *  S-Function (motohawk_sfun_delta_time): '<S176>/motohawk_delta_time'
     */
    rtb_Sum2_o = ((rtb_Abs_k <= (BoostRiseRate_DataStore())) || rtIsNaN
                  ((BoostRiseRate_DataStore())) ? rtb_Abs_k :
                  (BoostRiseRate_DataStore())) * rtb_motohawk_delta_time_id +
      rtb_DataTypeConversion1_e;

    /* Sum: '<S184>/Sum2' */
    BaseEngineController_LS_B.s184_Sum2 = rtb_Sum2_o - rtb_Switch_k;

    /* Product: '<S184>/Product5' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S175>/motohawk_calibration5'
     */
    rtb_DataTypeConversion_b2 = BaseEngineController_LS_B.s184_Sum2 *
      (BoostCtlErrorGain_DataStore());

    /* S-Function Block: <S175>/motohawk_prelookup1 */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (BoostCtlSpeedErrorIn_DataStore()) = BaseEngineController_LS_B.s184_Sum2;
      (BoostCtlSpeedErrorIdx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_LS_B.s184_Sum2,
         (BoostCtlSpeedErrorIdxArr_DataStore()), 9,
         (BoostCtlSpeedErrorIdx_DataStore()));
      rtb_motohawk_prelookup1_n = (BoostCtlSpeedErrorIdx_DataStore());
    }

    /* S-Function Block: <S182>/motohawk_interpolation_1d2 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d2_l = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup1_n, (real_T *)
         ((BoostCtlPGainErrorMultTbl_DataStore())), 9);
      (BoostCtlPGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d2_l;
    }

    /* Product: '<S184>/Product2' incorporates:
     *  Product: '<S182>/Product2'
     *  S-Function (motohawk_sfun_calibration): '<S182>/motohawk_calibration3'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S182>/motohawk_interpolation_1d2'
     *  S-Function (motohawk_sfun_prelookup): '<S175>/motohawk_prelookup1'
     */
    BaseEngineController_LS_B.s184_Product2 = (BoostCtlPGain_DataStore()) *
      rtb_motohawk_interpolation_1d2_l * rtb_DataTypeConversion_b2;

    /* UnitDelay: '<S185>/Unit Delay' */
    rtb_DataTypeConversion1_e =
      BaseEngineController_LS_DWork.s185_UnitDelay_DSTATE;

    /* S-Function Block: <S182>/motohawk_interpolation_1d3 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d3_l = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup1_n, (real_T *)
         ((BoostCtlDGainErrorMultTbl_DataStore())), 9);
      (BoostCtlDGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d3_l;
    }

    /* Product: '<S184>/Product4' incorporates:
     *  Product: '<S182>/Product3'
     *  S-Function (motohawk_sfun_calibration): '<S182>/motohawk_calibration2'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S182>/motohawk_interpolation_1d3'
     *  S-Function (motohawk_sfun_prelookup): '<S175>/motohawk_prelookup1'
     */
    rtb_Product4_k = (BoostCtlDGain_DataStore()) *
      rtb_motohawk_interpolation_1d3_l * rtb_DataTypeConversion_b2;

    /* Sum: '<S185>/Sum2' */
    rtb_DataTypeConversion1_e = rtb_Product4_k - rtb_DataTypeConversion1_e;

    /* S-Function Block: <S185>/motohawk_delta_time */
    rtb_motohawk_delta_time_a = 0.005;

    /* Product: '<S185>/Product' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S185>/motohawk_delta_time'
     */
    BaseEngineController_LS_B.s185_Product = rtb_DataTypeConversion1_e /
      rtb_motohawk_delta_time_a;

    /* Switch: '<S175>/Switch' incorporates:
     *  Constant: '<S175>/Constant1'
     */
    if (rtb_motohawk_data_read13) {
      BaseEngineController_LS_B.s175_Switch = 0.0;
    } else {
      /* MinMax: '<S183>/MinMax' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S175>/motohawk_calibration9'
       *  Sum: '<S184>/Sum1'
       */
      rtb_UnitDelay4_b3 = (BaseEngineController_LS_B.s184_Product2 +
                           BaseEngineController_LS_B.s185_Product) +
        BaseEngineController_LS_B.s186_Switch1;
      y = (rtb_UnitDelay4_b3 >= (BoostCtlPIDOutLowerLimit_DataStore())) ||
        rtIsNaN((BoostCtlPIDOutLowerLimit_DataStore())) ? rtb_UnitDelay4_b3 :
        (BoostCtlPIDOutLowerLimit_DataStore());

      /* MinMax: '<S183>/MinMax1' incorporates:
       *  MinMax: '<S183>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S175>/motohawk_calibration2'
       */
      BaseEngineController_LS_B.s175_Switch = (y <=
        (BoostCtlPIDOutUpperLimit_DataStore())) || rtIsNaN
        ((BoostCtlPIDOutUpperLimit_DataStore())) ? y :
        (BoostCtlPIDOutUpperLimit_DataStore());
    }

    /* End of Switch: '<S175>/Switch' */

    /* S-Function Block: <S147>/motohawk_prelookup */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (BoostTargetIn_DataStore()) = BaseEngineController_LS_B.s147_Switch1;
      (BoostTargetIdx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_LS_B.s147_Switch1, (BoostTargetIdxArr_DataStore()),
         9, (BoostTargetIdx_DataStore()));
      rtb_motohawk_prelookup_brx = (BoostTargetIdx_DataStore());
    }

    /* S-Function Block: <S147>/motohawk_interpolation_2d1 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_motohawk_interpolation_2d1_d = TableInterpolation2D_real_T
        (rtb_motohawk_prelookup_brx,
         BaseEngineController_LS_B.s397_motohawk_prelookup1, (real_T *)
         ((BoostControlBase_AdaptMap_DataStore())), 9, 9);
      (BoostControlBase_Adapt_DataStore()) = rtb_motohawk_interpolation_2d1_d;
    }

    /* S-Function Block: <S147>/motohawk_interpolation_2d */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      BaseEngineController_LS_B.s147_motohawk_interpolation_2d =
        TableInterpolation2D_real_T(rtb_motohawk_prelookup_brx,
        BaseEngineController_LS_B.s397_motohawk_prelookup1, (real_T *)
        ((BoostControlBaseMap_DataStore())), 9, 9);
      (BoostControlBase_DataStore()) =
        BaseEngineController_LS_B.s147_motohawk_interpolation_2d;
    }

    /* Sum: '<S147>/Sum' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S147>/motohawk_interpolation_2d1'
     *  S-Function (motohawk_sfun_prelookup): '<S147>/motohawk_prelookup'
     */
    rtb_DataTypeConversion1_e = (rtb_motohawk_interpolation_2d1_d +
      BaseEngineController_LS_B.s147_motohawk_interpolation_2d) +
      BaseEngineController_LS_B.s175_Switch;

    /* S-Function Block: <S147>/motohawk_interpolation_1d2 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d2_n = TableInterpolation1D_real_T
        (BaseEngineController_LS_B.s398_motohawk_prelookup, (real_T *)
         ((WGDeadTimeTbl_DataStore())), 9);
      (WGDeadTime_DataStore()) = rtb_motohawk_interpolation_1d2_n;
    }

    /* Sum: '<S147>/Sum3' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S147>/motohawk_interpolation_1d2'
     */
    BaseEngineController_LS_B.s147_Sum3 = rtb_DataTypeConversion1_e +
      rtb_motohawk_interpolation_1d2_n;

    /* Switch: '<S147>/Switch' incorporates:
     *  Constant: '<S147>/Constant'
     */
    if (rtb_motohawk_data_read13) {
      rtb_Switch_k = 0.0;
    } else {
      rtb_Switch_k = BaseEngineController_LS_B.s147_Sum3;
    }

    /* End of Switch: '<S147>/Switch' */

    /* S-Function Block: <S182>/motohawk_interpolation_1d1 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d1_e = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup1_n, (real_T *)
         ((BoostCtlIGainErrorMultTbl_DataStore())), 9);
      (BoostCtlIGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d1_e;
    }

    /* Product: '<S184>/Product1' incorporates:
     *  Product: '<S182>/Product1'
     *  S-Function (motohawk_sfun_calibration): '<S182>/motohawk_calibration1'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S182>/motohawk_interpolation_1d1'
     *  S-Function (motohawk_sfun_prelookup): '<S175>/motohawk_prelookup1'
     */
    rtb_DataTypeConversion1_e = (BoostCtlIGain_DataStore()) *
      rtb_motohawk_interpolation_1d1_e * rtb_DataTypeConversion_b2;

    /* S-Function Block: <S186>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s186_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_l3 = ((real_T) delta) * 0.000001;
    }

    /* Sum: '<S186>/Sum' incorporates:
     *  Product: '<S186>/Product'
     *  S-Function (motohawk_sfun_delta_time): '<S186>/motohawk_delta_time'
     */
    rtb_DataTypeConversion_b2 = rtb_DataTypeConversion1_e *
      rtb_motohawk_delta_time_l3 + BaseEngineController_LS_B.s186_Switch1;

    /* MinMax: '<S188>/MinMax' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S175>/motohawk_calibration7'
     */
    rtb_Abs_k = (rtb_DataTypeConversion_b2 >= (BoostCtlITermLowerLimit_DataStore
                  ())) || rtIsNaN((BoostCtlITermLowerLimit_DataStore())) ?
      rtb_DataTypeConversion_b2 : (BoostCtlITermLowerLimit_DataStore());

    /* MinMax: '<S188>/MinMax1' incorporates:
     *  MinMax: '<S188>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S175>/motohawk_calibration8'
     */
    rtb_MinMax1_di = (rtb_Abs_k <= (BoostCtlITermUpperLimit_DataStore())) ||
      rtIsNaN((BoostCtlITermUpperLimit_DataStore())) ? rtb_Abs_k :
      (BoostCtlITermUpperLimit_DataStore());

    /* Saturate: '<S193>/Saturation' */
    rtb_Saturation_ao = rtb_Switch_mq >= 16000.0 ? 16000.0 : rtb_Switch_mq <=
      0.0 ? 0.0 : rtb_Switch_mq;

    /* S-Function (motohawk_sfun_data_write): '<S193>/motohawk_data_write' */
    /* Write to Data Storage as scalar: DFCOEnterTimer */
    {
      DFCOEnterTimer_DataStore() = rtb_Saturation_ao;
    }

    /* DataTypeConversion: '<S149>/Data Type Conversion3' */
    if (rtIsNaN(BaseEngineController_LS_B.s726_Merge) || rtIsInf
        (BaseEngineController_LS_B.s726_Merge)) {
      rtb_UnitDelay4_b3 = 0.0;
    } else {
      rtb_UnitDelay4_b3 = fmod(floor(BaseEngineController_LS_B.s726_Merge),
        65536.0);
    }

    rtb_DataTypeConversion3_eb = (int16_T)(rtb_UnitDelay4_b3 < 0.0 ? (int16_T)
      -(int16_T)(uint16_T)-rtb_UnitDelay4_b3 : (int16_T)(uint16_T)
      rtb_UnitDelay4_b3);

    /* End of DataTypeConversion: '<S149>/Data Type Conversion3' */
    /* RelationalOperator: '<S197>/LT' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S149>/motohawk_data_read'
     */
    rtb_motohawk_data_read13 = (rtb_DataTypeConversion3_eb >= ((int16_T)
      ECTFanOn_DataStore()));

    /* RelationalOperator: '<S197>/LT1' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S149>/motohawk_data_read1'
     */
    rtb_BelowLoTarget_b = (rtb_DataTypeConversion3_eb <= ((int16_T)
      ECTFanOff_DataStore()));

    /* CombinatorialLogic: '<S203>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_motohawk_data_read13 != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_b != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_c[0] =
        BaseEngineController_LS_ConstP.pooled908[rowidx];
      rtb_CombinatorialLogic_c[1] =
        BaseEngineController_LS_ConstP.pooled908[rowidx + 4];
    }

    /* Switch: '<S203>/Switch1' incorporates:
     *  UnitDelay: '<S203>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_c[1]) {
      rtb_Switch1_em = rtb_CombinatorialLogic_c[0];
    } else {
      rtb_Switch1_em = BaseEngineController_LS_DWork.s203_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S203>/Switch1' */
    /* DataTypeConversion: '<S149>/Data Type Conversion4' */
    if (rtIsNaN(BaseEngineController_LS_B.s416_Switch2) || rtIsInf
        (BaseEngineController_LS_B.s416_Switch2)) {
      rtb_UnitDelay4_b3 = 0.0;
    } else {
      rtb_UnitDelay4_b3 = fmod(floor(BaseEngineController_LS_B.s416_Switch2),
        256.0);
    }

    rtb_DataTypeConversion4_k = (uint8_T)(rtb_UnitDelay4_b3 < 0.0 ? (uint8_T)
      (int32_T)(int8_T)-(int8_T)(uint8_T)-rtb_UnitDelay4_b3 : (uint8_T)
      rtb_UnitDelay4_b3);

    /* End of DataTypeConversion: '<S149>/Data Type Conversion4' */

    /* Switch: '<S149>/Switch' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S149>/motohawk_data_read14'
     *  S-Function (motohawk_sfun_interpolation_2d): '<S200>/motohawk_interpolation_2d'
     *  S-Function (motohawk_sfun_prelookup): '<S200>/motohawk_prelookup_col'
     *  S-Function (motohawk_sfun_prelookup): '<S200>/motohawk_prelookup_row'
     */
    if (((uint8_T)FAN_Mode_DataStore()) >= 1) {
      rtb_Switch_om = rtb_Switch1_em;
    } else {
      /* S-Function Block: <S200>/motohawk_prelookup_col */
      {
        extern uint16_T TablePrelookup_uint8_T(uint8_T in, const volatile
          uint8_T ordarr[], uint32_T sz, uint16_T prev);
        (ECTFanSpeedColIn_DataStore()) = rtb_DataTypeConversion4_k;
        (ECTFanSpeedColIdx_DataStore()) = TablePrelookup_uint8_T
          (rtb_DataTypeConversion4_k, (ECTFanSpeedColIdxArr_DataStore()), 7,
           (ECTFanSpeedColIdx_DataStore()));
        rtb_motohawk_prelookup_col_d = (ECTFanSpeedColIdx_DataStore());
      }

      /* S-Function Block: <S200>/motohawk_prelookup_row */
      {
        extern uint16_T TablePrelookup_int16_T(int16_T in, const volatile
          int16_T ordarr[], uint32_T sz, uint16_T prev);
        (ECTFanSpeedRowIn_DataStore()) = rtb_DataTypeConversion3_eb;
        (ECTFanSpeedRowIdx_DataStore()) = TablePrelookup_int16_T
          (rtb_DataTypeConversion3_eb, (ECTFanSpeedRowIdxArr_DataStore()), 7,
           (ECTFanSpeedRowIdx_DataStore()));
        rtb_motohawk_prelookup_row_o = (ECTFanSpeedRowIdx_DataStore());
      }

      /* S-Function Block: <S200>/motohawk_interpolation_2d */
      {
        extern uint8_T TableInterpolation2D_uint8_T(uint16_T row_in, uint16_T
          col_in, uint8_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_motohawk_interpolation_2d_o2 = TableInterpolation2D_uint8_T
          (rtb_motohawk_prelookup_row_o, rtb_motohawk_prelookup_col_d, (uint8_T *)
           ((ECTFanSpeedMap_DataStore())), 7, 7);
        (ECTFanSpeed_DataStore()) = rtb_motohawk_interpolation_2d_o2;
      }

      rtb_Switch_om = rtb_motohawk_interpolation_2d_o2;
    }

    /* End of Switch: '<S149>/Switch' */
    /* Product: '<S149>/Product' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S149>/motohawk_data_read6'
     */
    rtb_Product_ln = (uint8_T)(Fan1ECT_DataStore() ? rtb_Switch_om : 0);

    /* DataTypeConversion: '<S149>/Data Type Conversion1' */
    if (rtIsNaN(BaseEngineController_LS_B.s744_Merge) || rtIsInf
        (BaseEngineController_LS_B.s744_Merge)) {
      rtb_UnitDelay4_b3 = 0.0;
    } else {
      rtb_UnitDelay4_b3 = fmod(floor(BaseEngineController_LS_B.s744_Merge),
        65536.0);
    }

    rtb_DataTypeConversion1_f = (int16_T)(rtb_UnitDelay4_b3 < 0.0 ? (int16_T)
      -(int16_T)(uint16_T)-rtb_UnitDelay4_b3 : (int16_T)(uint16_T)
      rtb_UnitDelay4_b3);

    /* End of DataTypeConversion: '<S149>/Data Type Conversion1' */
    /* RelationalOperator: '<S198>/LT' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S149>/motohawk_data_read2'
     */
    rtb_motohawk_data_read13 = (rtb_DataTypeConversion1_f >= ((int16_T)
      IATFanOn_DataStore()));

    /* RelationalOperator: '<S198>/LT1' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S149>/motohawk_data_read3'
     */
    rtb_BelowLoTarget_b = (rtb_DataTypeConversion1_f <= ((int16_T)
      IATFanOff_DataStore()));

    /* CombinatorialLogic: '<S204>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_motohawk_data_read13 != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_b != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_c[0] =
        BaseEngineController_LS_ConstP.pooled908[rowidx];
      rtb_CombinatorialLogic_c[1] =
        BaseEngineController_LS_ConstP.pooled908[rowidx + 4];
    }

    /* Switch: '<S204>/Switch1' incorporates:
     *  UnitDelay: '<S204>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_c[1]) {
      rtb_Switch1_l4 = rtb_CombinatorialLogic_c[0];
    } else {
      rtb_Switch1_l4 = BaseEngineController_LS_DWork.s204_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S204>/Switch1' */

    /* Switch: '<S149>/Switch1' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S149>/motohawk_data_read14'
     *  S-Function (motohawk_sfun_interpolation_2d): '<S201>/motohawk_interpolation_2d'
     *  S-Function (motohawk_sfun_prelookup): '<S201>/motohawk_prelookup_col'
     *  S-Function (motohawk_sfun_prelookup): '<S201>/motohawk_prelookup_row'
     */
    if (((uint8_T)FAN_Mode_DataStore()) >= 1) {
      rtb_Product6_m = rtb_Switch1_l4;
    } else {
      /* S-Function Block: <S201>/motohawk_prelookup_col */
      {
        extern uint16_T TablePrelookup_uint8_T(uint8_T in, const volatile
          uint8_T ordarr[], uint32_T sz, uint16_T prev);
        (IATFanSpeedColIn_DataStore()) = rtb_DataTypeConversion4_k;
        (IATFanSpeedColIdx_DataStore()) = TablePrelookup_uint8_T
          (rtb_DataTypeConversion4_k, (IATFanSpeedColIdxArr_DataStore()), 7,
           (IATFanSpeedColIdx_DataStore()));
        rtb_motohawk_prelookup_col_e = (IATFanSpeedColIdx_DataStore());
      }

      /* S-Function Block: <S201>/motohawk_prelookup_row */
      {
        extern uint16_T TablePrelookup_int16_T(int16_T in, const volatile
          int16_T ordarr[], uint32_T sz, uint16_T prev);
        (IATFanSpeedRowIn_DataStore()) = rtb_DataTypeConversion1_f;
        (IATFanSpeedRowIdx_DataStore()) = TablePrelookup_int16_T
          (rtb_DataTypeConversion1_f, (IATFanSpeedRowIdxArr_DataStore()), 7,
           (IATFanSpeedRowIdx_DataStore()));
        rtb_motohawk_prelookup_row_h = (IATFanSpeedRowIdx_DataStore());
      }

      /* S-Function Block: <S201>/motohawk_interpolation_2d */
      {
        extern uint8_T TableInterpolation2D_uint8_T(uint16_T row_in, uint16_T
          col_in, uint8_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_motohawk_interpolation_2d_n = TableInterpolation2D_uint8_T
          (rtb_motohawk_prelookup_row_h, rtb_motohawk_prelookup_col_e, (uint8_T *)
           ((IATFanSpeedMap_DataStore())), 7, 7);
        (IATFanSpeed_DataStore()) = rtb_motohawk_interpolation_2d_n;
      }

      rtb_Product6_m = rtb_motohawk_interpolation_2d_n;
    }

    /* End of Switch: '<S149>/Switch1' */
    /* Product: '<S149>/Product1' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S149>/motohawk_data_read7'
     */
    rtb_Product5_j = (uint8_T)(Fan1IAT_DataStore() ? rtb_Product6_m : 0);

    /* DataTypeConversion: '<S149>/Data Type Conversion2' */
    if (rtIsNaN(BaseEngineController_LS_B.s630_Merge) || rtIsInf
        (BaseEngineController_LS_B.s630_Merge)) {
      rtb_UnitDelay4_b3 = 0.0;
    } else {
      rtb_UnitDelay4_b3 = fmod(floor(BaseEngineController_LS_B.s630_Merge),
        65536.0);
    }

    rtb_DataTypeConversion2_eo = (int16_T)(rtb_UnitDelay4_b3 < 0.0 ? (int16_T)
      -(int16_T)(uint16_T)-rtb_UnitDelay4_b3 : (int16_T)(uint16_T)
      rtb_UnitDelay4_b3);

    /* End of DataTypeConversion: '<S149>/Data Type Conversion2' */
    /* RelationalOperator: '<S199>/LT' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S149>/motohawk_data_read4'
     */
    rtb_motohawk_data_read13 = (rtb_DataTypeConversion2_eo >= ((int16_T)
      ACPresFanOn_DataStore()));

    /* RelationalOperator: '<S199>/LT1' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S149>/motohawk_data_read5'
     */
    rtb_BelowLoTarget_b = (rtb_DataTypeConversion2_eo <= ((int16_T)
      ACPresFanOff_DataStore()));

    /* CombinatorialLogic: '<S205>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_motohawk_data_read13 != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_b != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_c[0] =
        BaseEngineController_LS_ConstP.pooled908[rowidx];
      rtb_CombinatorialLogic_c[1] =
        BaseEngineController_LS_ConstP.pooled908[rowidx + 4];
    }

    /* Switch: '<S205>/Switch1' incorporates:
     *  UnitDelay: '<S205>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_c[1]) {
      rtb_Switch1_mo = rtb_CombinatorialLogic_c[0];
    } else {
      rtb_Switch1_mo = BaseEngineController_LS_DWork.s205_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S205>/Switch1' */

    /* Switch: '<S149>/Switch2' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S149>/motohawk_data_read14'
     *  S-Function (motohawk_sfun_interpolation_2d): '<S202>/motohawk_interpolation_2d'
     *  S-Function (motohawk_sfun_prelookup): '<S202>/motohawk_prelookup_col'
     *  S-Function (motohawk_sfun_prelookup): '<S202>/motohawk_prelookup_row'
     */
    if (((uint8_T)FAN_Mode_DataStore()) >= 1) {
      rtb_Switch2_a = rtb_Switch1_mo;
    } else {
      /* S-Function Block: <S202>/motohawk_prelookup_col */
      {
        extern uint16_T TablePrelookup_uint8_T(uint8_T in, const volatile
          uint8_T ordarr[], uint32_T sz, uint16_T prev);
        (ACPresFanSpeedColIn_DataStore()) = rtb_DataTypeConversion4_k;
        (ACPresFanSpeedColIdx_DataStore()) = TablePrelookup_uint8_T
          (rtb_DataTypeConversion4_k, (ACPresFanSpeedColIdxArr_DataStore()), 7,
           (ACPresFanSpeedColIdx_DataStore()));
        rtb_motohawk_prelookup_col_o = (ACPresFanSpeedColIdx_DataStore());
      }

      /* S-Function Block: <S202>/motohawk_prelookup_row */
      {
        extern uint16_T TablePrelookup_int16_T(int16_T in, const volatile
          int16_T ordarr[], uint32_T sz, uint16_T prev);
        (ACPresFanSpeedRowIn_DataStore()) = rtb_DataTypeConversion2_eo;
        (ACPresFanSpeedRowIdx_DataStore()) = TablePrelookup_int16_T
          (rtb_DataTypeConversion2_eo, (ACPresFanSpeedRowIdxArr_DataStore()), 7,
           (ACPresFanSpeedRowIdx_DataStore()));
        rtb_motohawk_prelookup_row_a = (ACPresFanSpeedRowIdx_DataStore());
      }

      /* S-Function Block: <S202>/motohawk_interpolation_2d */
      {
        extern uint8_T TableInterpolation2D_uint8_T(uint16_T row_in, uint16_T
          col_in, uint8_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_motohawk_interpolation_2d_a = TableInterpolation2D_uint8_T
          (rtb_motohawk_prelookup_row_a, rtb_motohawk_prelookup_col_o, (uint8_T *)
           ((ACPresFanSpeedMap_DataStore())), 7, 7);
        (ACPresFanSpeed_DataStore()) = rtb_motohawk_interpolation_2d_a;
      }

      rtb_Switch2_a = rtb_motohawk_interpolation_2d_a;
    }

    /* End of Switch: '<S149>/Switch2' */
    /* Product: '<S149>/Product2' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S149>/motohawk_data_read8'
     */
    rtb_Product4_i = (uint8_T)(Fan1ACPres_DataStore() ? rtb_Switch2_a : 0);

    /* DataTypeConversion: '<S149>/Data Type Conversion' */
    rtb_DataTypeConversion_b2 = (real_T)BaseEngineController_LS_B.s568_Merge;

    /* Switch: '<S149>/Switch3' incorporates:
     *  Product: '<S149>/Product8'
     *  S-Function (motohawk_sfun_calibration): '<S149>/motohawk_calibration14'
     *  S-Function (motohawk_sfun_data_read): '<S149>/motohawk_data_read14'
     */
    if (!(((uint8_T)FAN_Mode_DataStore()) >= 1)) {
      rtb_DataTypeConversion_b2 *= (real_T)((uint8_T)(ACSwFanSpeed_DataStore()));
    }

    /* End of Switch: '<S149>/Switch3' */

    /* S-Function (motohawk_sfun_data_read): '<S149>/motohawk_data_read9' */
    rtb_motohawk_data_read13 = Fan1ACSw_DataStore();

    /* MinMax: '<S149>/MinMax' incorporates:
     *  Product: '<S149>/Product3'
     */
    rtb_UnitDelay4_b3 = (real_T)rtb_Product_ln;
    rtb_DesiredLambda_idx_0 = (real_T)rtb_Product5_j;
    y = rtb_UnitDelay4_b3 >= rtb_DesiredLambda_idx_0 ? rtb_UnitDelay4_b3 :
      rtb_DesiredLambda_idx_0;
    rtb_DesiredLambda_idx_0 = (real_T)rtb_Product4_i;
    y = y >= rtb_DesiredLambda_idx_0 ? y : rtb_DesiredLambda_idx_0;
    rtb_DesiredLambda_idx_0 = rtb_DataTypeConversion_b2 * (real_T)
      rtb_motohawk_data_read13;
    BaseEngineController_LS_B.s149_MinMax = y >= rtb_DesiredLambda_idx_0 ? y :
      rtb_DesiredLambda_idx_0;

    /* Product: '<S149>/Product4' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S149>/motohawk_data_read10'
     */
    rtb_Product4_i = (uint8_T)(Fan2ECT_DataStore() ? rtb_Switch_om : 0);

    /* Product: '<S149>/Product5' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S149>/motohawk_data_read11'
     */
    rtb_Product5_j = (uint8_T)(Fan2IAT_DataStore() ? rtb_Product6_m : 0);

    /* Product: '<S149>/Product6' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S149>/motohawk_data_read12'
     */
    rtb_Product6_m = (uint8_T)(Fan2ACPres_DataStore() ? rtb_Switch2_a : 0);

    /* S-Function (motohawk_sfun_data_read): '<S149>/motohawk_data_read13' */
    rtb_motohawk_data_read13 = Fan2ACSw_DataStore();

    /* MinMax: '<S149>/MinMax1' incorporates:
     *  Product: '<S149>/Product7'
     */
    rtb_UnitDelay4_b3 = (real_T)rtb_Product4_i;
    rtb_DesiredLambda_idx_0 = (real_T)rtb_Product5_j;
    y = rtb_UnitDelay4_b3 >= rtb_DesiredLambda_idx_0 ? rtb_UnitDelay4_b3 :
      rtb_DesiredLambda_idx_0;
    rtb_DesiredLambda_idx_0 = (real_T)rtb_Product6_m;
    y = y >= rtb_DesiredLambda_idx_0 ? y : rtb_DesiredLambda_idx_0;
    rtb_DesiredLambda_idx_0 = rtb_DataTypeConversion_b2 * (real_T)
      rtb_motohawk_data_read13;
    BaseEngineController_LS_B.s149_MinMax1 = y >= rtb_DesiredLambda_idx_0 ? y :
      rtb_DesiredLambda_idx_0;

    /* Outputs for Atomic SubSystem: '<S136>/O2 Control' */

    /* S-Function (motohawk_sfun_fault_action): '<S154>/motohawk_fault_action'
     *
     * Regarding '<S154>/motohawk_fault_action':
       Get Fault Action Status: DisableO2Ctrl
     */
    {
      extern boolean_T GetFaultActionStatus(uint32_T action);
      rtb_motohawk_fault_action_b = GetFaultActionStatus(4);
    }

    /* S-Function (motohawk_sfun_data_write): '<S154>/motohawk_data_write' */
    /* Write to Data Storage as scalar: DisableO2FaultAction */
    {
      DisableO2FaultAction_DataStore() = rtb_motohawk_fault_action_b;
    }

    /* Inport: '<S154>/Desired_Equiv' */
    rtb_DesiredLambda_idx = BaseEngineController_LS_B.s190_Product1;
    rtb_DesiredLambda_idx_0 = rtb_WarmUpRatio;
    rtb_DesiredLambda_idx_1 = rtb_Switch_c;

    /* Logic: '<S284>/Logical Operator' incorporates:
     *  Constant: '<S284>/Constant'
     *  RelationalOperator: '<S284>/Relational Operator'
     *  RelationalOperator: '<S284>/Relational Operator1'
     *  S-Function (motohawk_sfun_calibration): '<S284>/motohawk_calibration1'
     *  Sum: '<S284>/Sum'
     *  Sum: '<S284>/Sum1'
     */
    BaseEngineController_LS_B.s284_LogicalOperator = (((rtb_DesiredLambda_idx <=
      (EquivRatioDelta_DataStore()) + 1.0) && (rtb_DesiredLambda_idx >= 1.0 -
      (EquivRatioDelta_DataStore()))));

    /* Logic: '<S284>/Logical Operator3' */
    BaseEngineController_LS_B.s284_LogicalOperator3 =
      !rtb_motohawk_fault_action_b;

    /* S-Function Block: <S284>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_f = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_j, (real_T *) ((O2StartUpDelayTbl_DataStore())),
         9);
      (O2StartUpDelay_DataStore()) = rtb_motohawk_interpolation_1d_f;
    }

    /* RelationalOperator: '<S284>/Relational Operator5' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S284>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_prelookup): '<S436>/motohawk_prelookup'
     */
    BaseEngineController_LS_B.s284_RelationalOperator5 =
      ((BaseEngineController_LS_B.s433_Switch >= rtb_motohawk_interpolation_1d_f));

    /* Logic: '<S284>/Logical Operator2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S284>/motohawk_calibration2'
     */
    BaseEngineController_LS_B.s284_LogicalOperator2 =
      ((BaseEngineController_LS_B.s382_LogicalOperator &&
        BaseEngineController_LS_B.s284_LogicalOperator &&
        BaseEngineController_LS_B.s284_LogicalOperator3 &&
        (O2ControlEnable_DataStore()) &&
        BaseEngineController_LS_B.s284_RelationalOperator5));

    /* Logic: '<S154>/Logical Operator' */
    rtb_LogicalOperator6_b = !BaseEngineController_LS_B.s284_LogicalOperator2;

    /* S-Function Block: <S288>/motohawk_interpolation_2d2 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_RichEquivRatioSwPtDelta = TableInterpolation2D_real_T
        (BaseEngineController_LS_B.s395_motohawk_prelookup1,
         BaseEngineController_LS_B.s397_motohawk_prelookup1, (real_T *)
         ((RichSwPtDeltaMap_DataStore())), 9, 9);
      (RichSwPtDelta_DataStore()) = rtb_RichEquivRatioSwPtDelta;
    }

    /* S-Function Block: <S288>/motohawk_interpolation_2d3 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_LeanEquivRatioSwPtDelta = TableInterpolation2D_real_T
        (BaseEngineController_LS_B.s395_motohawk_prelookup1,
         BaseEngineController_LS_B.s397_motohawk_prelookup1, (real_T *)
         ((LeanSwPtDeltaMap_DataStore())), 9, 9);
      (LeanSwPtDelta_DataStore()) = rtb_LeanEquivRatioSwPtDelta;
    }

    /* S-Function Block: <S287>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_i = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup1_h, (real_T *) ((O2NECCTErrGainMultTbl_DataStore
           ())), 9);
      (O2NECCTErrGainMult_DataStore()) = rtb_motohawk_interpolation_1d_i;
    }

    /* S-Function Block: <S287>/motohawk_interpolation_1d1 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d1_o0 = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_o, (real_T *) ((O2MAFErrGainMultTbl_DataStore())),
         5);
      (O2MAFErrGainMult_DataStore()) = rtb_motohawk_interpolation_1d1_o0;
    }

    /* Product: '<S287>/Product' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S287>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S287>/motohawk_interpolation_1d1'
     *  S-Function (motohawk_sfun_prelookup): '<S393>/motohawk_prelookup1'
     *  S-Function (motohawk_sfun_prelookup): '<S438>/motohawk_prelookup'
     */
    rtb_DataTypeConversion1_e = rtb_motohawk_interpolation_1d_i *
      rtb_motohawk_interpolation_1d1_o0;

    /* Logic: '<S154>/Logical Operator1' */
    rtb_LogicalOperator1_al = !rtb_RelOp_hf;

    /* Outputs for Atomic SubSystem: '<S154>/O2 PID Controller' */
    /* RelationalOperator: '<S290>/LT' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S288>/motohawk_interpolation_2d2'
     *  Sum: '<S290>/Sum3'
     */
    rtb_AboveRich = (BaseEngineController_LS_B.s410_Sum1 >=
                     rtb_DesiredLambda_idx + rtb_RichEquivRatioSwPtDelta);

    /* RelationalOperator: '<S290>/LT1' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S288>/motohawk_interpolation_2d3'
     *  Sum: '<S290>/Sum4'
     */
    rtb_LogicalOperator2_ig = (BaseEngineController_LS_B.s410_Sum1 <=
      rtb_DesiredLambda_idx - rtb_LeanEquivRatioSwPtDelta);

    /* CombinatorialLogic: '<S297>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_AboveRich != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_LogicalOperator2_ig != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic[0] =
        BaseEngineController_LS_ConstP.pooled908[rowidx];
      rtb_CombinatorialLogic[1] =
        BaseEngineController_LS_ConstP.pooled908[rowidx + 4];
    }

    /* Switch: '<S297>/Switch1' incorporates:
     *  UnitDelay: '<S297>/Unit Delay'
     */
    if (rtb_CombinatorialLogic[1]) {
      rtb_Switch1_mj = rtb_CombinatorialLogic[0];
    } else {
      rtb_Switch1_mj = BaseEngineController_LS_DWork.s297_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S297>/Switch1' */

    /* Switch: '<S286>/Switch' */
    if (rtb_LogicalOperator6_b) {
      BaseEngineController_LS_B.s286_Switch =
        BaseEngineController_LS_B.s410_Sum1;
    } else {
      /* Switch: '<S290>/Switch2' incorporates:
       *  Logic: '<S290>/Logical Operator'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S288>/motohawk_interpolation_2d'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S288>/motohawk_interpolation_2d1'
       *  Sum: '<S290>/Sum1'
       *  Sum: '<S290>/Sum2'
       */
      if (!rtb_Switch1_mj) {
        /* S-Function Block: <S288>/motohawk_interpolation_2d */
        {
          extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
            col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
          rtb_RichEquivRatioTargetDelta_p = TableInterpolation2D_real_T
            (BaseEngineController_LS_B.s395_motohawk_prelookup1,
             BaseEngineController_LS_B.s397_motohawk_prelookup1, (real_T *)
             ((RichTargetDeltaMap_DataStore())), 9, 9);
          (RichTargetDelta_DataStore()) = rtb_RichEquivRatioTargetDelta_p;
        }

        BaseEngineController_LS_B.s286_Switch = rtb_RichEquivRatioTargetDelta_p
          + rtb_DesiredLambda_idx;
      } else {
        /* S-Function Block: <S288>/motohawk_interpolation_2d1 */
        {
          extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
            col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
          rtb_LeanEquivRatioTargetDelta = TableInterpolation2D_real_T
            (BaseEngineController_LS_B.s395_motohawk_prelookup1,
             BaseEngineController_LS_B.s397_motohawk_prelookup1, (real_T *)
             ((LeanTargetDeltaMap_DataStore())), 9, 9);
          (LeanTargetDelta_DataStore()) = rtb_LeanEquivRatioTargetDelta;
        }

        BaseEngineController_LS_B.s286_Switch = rtb_DesiredLambda_idx -
          rtb_LeanEquivRatioTargetDelta;
      }

      /* End of Switch: '<S290>/Switch2' */
    }

    /* End of Switch: '<S286>/Switch' */

    /* Sum: '<S292>/Sum2' */
    BaseEngineController_LS_B.s292_Sum2 = BaseEngineController_LS_B.s286_Switch
      - BaseEngineController_LS_B.s410_Sum1;

    /* Product: '<S292>/Product5' */
    rtb_Switch_c = BaseEngineController_LS_B.s292_Sum2 *
      rtb_DataTypeConversion1_e;

    /* Product: '<S292>/Product2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S285>/motohawk_calibration5'
     */
    BaseEngineController_LS_B.s292_Product2 = rtb_Switch_c *
      (O2CtrlPGain_DataStore());

    /* Switch: '<S294>/Switch1' incorporates:
     *  Constant: '<S289>/Constant'
     *  UnitDelay: '<S294>/Unit Delay'
     */
    if (rtb_LogicalOperator1_al) {
      BaseEngineController_LS_B.s294_Switch1 = 0.0;
    } else {
      BaseEngineController_LS_B.s294_Switch1 =
        BaseEngineController_LS_DWork.s294_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S294>/Switch1' */

    /* Product: '<S292>/Product4' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S285>/motohawk_calibration7'
     */
    rtb_Product4_o = rtb_Switch_c * (O2CtrlDGain_DataStore());

    /* Sum: '<S293>/Sum2' incorporates:
     *  UnitDelay: '<S293>/Unit Delay'
     */
    rtb_DataTypeConversion1_e = rtb_Product4_o -
      BaseEngineController_LS_DWork.s293_UnitDelay_DSTATE;

    /* S-Function Block: <S293>/motohawk_delta_time */
    rtb_motohawk_delta_time_k = 0.005;

    /* Product: '<S293>/Product' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S293>/motohawk_delta_time'
     */
    BaseEngineController_LS_B.s293_Product = rtb_DataTypeConversion1_e /
      rtb_motohawk_delta_time_k;

    /* MinMax: '<S291>/MinMax' incorporates:
     *  Constant: '<S289>/Convert to Fuel Multiplier'
     *  S-Function (motohawk_sfun_calibration): '<S285>/motohawk_calibration11'
     *  Sum: '<S289>/Sum'
     *  Sum: '<S292>/Sum1'
     */
    rtb_UnitDelay4_b3 = ((BaseEngineController_LS_B.s292_Product2 +
                          BaseEngineController_LS_B.s293_Product) +
                         BaseEngineController_LS_B.s294_Switch1) + 1.0;
    y = (rtb_UnitDelay4_b3 >= (O2CtrlPIDOutLowerLimit_DataStore())) || rtIsNaN
      ((O2CtrlPIDOutLowerLimit_DataStore())) ? rtb_UnitDelay4_b3 :
      (O2CtrlPIDOutLowerLimit_DataStore());

    /* MinMax: '<S291>/MinMax1' incorporates:
     *  MinMax: '<S291>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S285>/motohawk_calibration10'
     */
    rtb_Multiplyby10ifnotyetenabled = (y <= (O2CtrlPIDOutUpperLimit_DataStore()))
      || rtIsNaN((O2CtrlPIDOutUpperLimit_DataStore())) ? y :
      (O2CtrlPIDOutUpperLimit_DataStore());

    /* Product: '<S292>/Product1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S285>/motohawk_calibration6'
     */
    rtb_DataTypeConversion1_e = rtb_Switch_c * (O2CtrlIGain_DataStore());

    /* S-Function Block: <S294>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s294_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_mn = ((real_T) delta) * 0.000001;
    }

    /* MinMax: '<S296>/MinMax' incorporates:
     *  Product: '<S294>/Product'
     *  S-Function (motohawk_sfun_calibration): '<S285>/motohawk_calibration8'
     *  S-Function (motohawk_sfun_delta_time): '<S294>/motohawk_delta_time'
     *  Sum: '<S294>/Sum'
     */
    rtb_UnitDelay4_b3 = rtb_DataTypeConversion1_e * rtb_motohawk_delta_time_mn +
      BaseEngineController_LS_B.s294_Switch1;
    y = (rtb_UnitDelay4_b3 >= (O2ITermLowerLimit_DataStore())) || rtIsNaN
      ((O2ITermLowerLimit_DataStore())) ? rtb_UnitDelay4_b3 :
      (O2ITermLowerLimit_DataStore());

    /* MinMax: '<S296>/MinMax1' incorporates:
     *  MinMax: '<S296>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S285>/motohawk_calibration9'
     */
    y = (y <= (O2ITermUpperLimit_DataStore())) || rtIsNaN
      ((O2ITermUpperLimit_DataStore())) ? y : (O2ITermUpperLimit_DataStore());

    /* UnitDelay: '<S290>/Unit Delay1' */
    rtb_Switch_c = BaseEngineController_LS_DWork.s290_UnitDelay1_DSTATE;

    /* Logic: '<S290>/Logical Operator10' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S290>/motohawk_data_read'
     */
    rtb_RelationalOperator3_bp = (rtb_LogicalOperator2_ig &&
      DisableO2FaultAction_DataStore());

    /* S-Function Block: <S298>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s298_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_bm = ((real_T) delta) * 0.000001;
    }

    /* Logic: '<S290>/Logical Operator4' */
    rtb_RelOp_pu = !rtb_LogicalOperator6_b;

    /* Logic: '<S290>/Logical Operator6' */
    rtb_LogicalOperator1_al = !rtb_LogicalOperator1_al;

    /* Switch: '<S298>/Switch' incorporates:
     *  Constant: '<S298>/Constant'
     *  Logic: '<S290>/Logical Operator7'
     *  S-Function (motohawk_sfun_data_read): '<S298>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S298>/motohawk_delta_time'
     *  Sum: '<S298>/Sum'
     */
    if (rtb_LogicalOperator2_ig && rtb_RelOp_pu && rtb_LogicalOperator1_al) {
      rtb_DataTypeConversion1_e = rtb_motohawk_delta_time_bm +
        O2LeanTimer_DataStore();
    } else {
      rtb_DataTypeConversion1_e = 0.0;
    }

    /* End of Switch: '<S298>/Switch' */

    /* Switch: '<S290>/Switch3' */
    if (rtb_RelationalOperator3_bp) {
      BaseEngineController_LS_B.s290_Switch3 = rtb_Switch_c;
    } else {
      BaseEngineController_LS_B.s290_Switch3 = rtb_DataTypeConversion1_e;
    }

    /* End of Switch: '<S290>/Switch3' */
    /* RelationalOperator: '<S290>/LT3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S290>/motohawk_calibration2'
     */
    rtb_LT3 = ((BaseEngineController_LS_B.s290_Switch3 >=
                (O2LeanTimeThresh_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S290>/motohawk_fault_def' */

    /* Set Fault Suspected Status: O2FailedLean */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(98, rtb_LT3);
      UpdateFault(98);
    }

    /* UnitDelay: '<S290>/Unit Delay' */
    rtb_Switch_c = BaseEngineController_LS_DWork.s290_UnitDelay_DSTATE;

    /* Logic: '<S290>/Logical Operator9' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S290>/motohawk_data_read'
     */
    rtb_LogicalOperator6_b = (rtb_AboveRich && DisableO2FaultAction_DataStore());

    /* S-Function Block: <S300>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s300_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_oq = ((real_T) delta) * 0.000001;
    }

    /* Switch: '<S300>/Switch' incorporates:
     *  Constant: '<S300>/Constant'
     *  Logic: '<S290>/Logical Operator5'
     *  S-Function (motohawk_sfun_data_read): '<S300>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S300>/motohawk_delta_time'
     *  Sum: '<S300>/Sum'
     */
    if (rtb_AboveRich && rtb_RelOp_pu && rtb_LogicalOperator1_al) {
      rtb_DataTypeConversion_b2 = rtb_motohawk_delta_time_oq +
        O2RichTimer_DataStore();
    } else {
      rtb_DataTypeConversion_b2 = 0.0;
    }

    /* End of Switch: '<S300>/Switch' */

    /* Switch: '<S290>/Switch1' */
    if (rtb_LogicalOperator6_b) {
      BaseEngineController_LS_B.s290_Switch1 = rtb_Switch_c;
    } else {
      BaseEngineController_LS_B.s290_Switch1 = rtb_DataTypeConversion_b2;
    }

    /* End of Switch: '<S290>/Switch1' */
    /* RelationalOperator: '<S290>/LT2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S290>/motohawk_calibration1'
     */
    rtb_LT2 = ((BaseEngineController_LS_B.s290_Switch1 >=
                (O2RichTimeThresh_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S290>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: O2FailedRich */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(99, rtb_LT2);
      UpdateFault(99);
    }

    /* UnitDelay: '<S290>/Unit Delay2' */
    rtb_Switch_c = BaseEngineController_LS_DWork.s290_UnitDelay2_DSTATE;

    /* Logic: '<S290>/Logical Operator2' incorporates:
     *  Logic: '<S290>/Logical Operator1'
     *  Logic: '<S290>/Logical Operator3'
     */
    rtb_LogicalOperator2_ig = ((!rtb_LogicalOperator2_ig) && (!rtb_AboveRich));

    /* Logic: '<S290>/Logical Operator11' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S290>/motohawk_data_read'
     */
    rtb_LogicalOperator6_b = (rtb_LogicalOperator2_ig &&
      DisableO2FaultAction_DataStore());

    /* S-Function Block: <S299>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s299_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_ad = ((real_T) delta) * 0.000001;
    }

    /* Switch: '<S299>/Switch' incorporates:
     *  Constant: '<S299>/Constant'
     *  Logic: '<S290>/Logical Operator8'
     *  S-Function (motohawk_sfun_data_read): '<S299>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S299>/motohawk_delta_time'
     *  Sum: '<S299>/Sum'
     */
    if (rtb_LogicalOperator2_ig && rtb_RelOp_pu && rtb_LogicalOperator1_al) {
      rtb_Switch_mq = rtb_motohawk_delta_time_ad + O2ActiveTimer_DataStore();
    } else {
      rtb_Switch_mq = 0.0;
    }

    /* End of Switch: '<S299>/Switch' */

    /* Switch: '<S290>/Switch4' */
    if (rtb_LogicalOperator6_b) {
      BaseEngineController_LS_B.s290_Switch4 = rtb_Switch_c;
    } else {
      BaseEngineController_LS_B.s290_Switch4 = rtb_Switch_mq;
    }

    /* End of Switch: '<S290>/Switch4' */
    /* RelationalOperator: '<S290>/LT4' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S290>/motohawk_calibration3'
     */
    rtb_LT4 = ((BaseEngineController_LS_B.s290_Switch4 >=
                (O2ActiveTimeThresh_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S290>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: O2NotActive */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(100, rtb_LT4);
      UpdateFault(100);
    }

    /* Saturate: '<S298>/Saturation' */
    rtb_Saturation_nb = rtb_DataTypeConversion1_e >= 16000.0 ? 16000.0 :
      rtb_DataTypeConversion1_e <= 0.0 ? 0.0 : rtb_DataTypeConversion1_e;

    /* S-Function (motohawk_sfun_data_write): '<S298>/motohawk_data_write' */
    /* Write to Data Storage as scalar: O2LeanTimer */
    {
      O2LeanTimer_DataStore() = rtb_Saturation_nb;
    }

    /* Saturate: '<S299>/Saturation' */
    rtb_Saturation_mr = rtb_Switch_mq >= 16000.0 ? 16000.0 : rtb_Switch_mq <=
      0.0 ? 0.0 : rtb_Switch_mq;

    /* S-Function (motohawk_sfun_data_write): '<S299>/motohawk_data_write' */
    /* Write to Data Storage as scalar: O2ActiveTimer */
    {
      O2ActiveTimer_DataStore() = rtb_Saturation_mr;
    }

    /* Saturate: '<S300>/Saturation' */
    rtb_Saturation_c3 = rtb_DataTypeConversion_b2 >= 16000.0 ? 16000.0 :
      rtb_DataTypeConversion_b2 <= 0.0 ? 0.0 : rtb_DataTypeConversion_b2;

    /* S-Function (motohawk_sfun_data_write): '<S300>/motohawk_data_write' */
    /* Write to Data Storage as scalar: O2RichTimer */
    {
      O2RichTimer_DataStore() = rtb_Saturation_c3;
    }

    /* InitialCondition: '<S286>/Multiply by 1.0 if not yet enabled' */
    if (BaseEngineController_LS_DWork.s286_Multiplyby10ifnotyetenabled_FirstOutputTime)
    {
      BaseEngineController_LS_DWork.s286_Multiplyby10ifnotyetenabled_FirstOutputTime
        = FALSE;
      rtb_Multiplyby10ifnotyetenabled = 1.0;
    }

    /* End of InitialCondition: '<S286>/Multiply by 1.0 if not yet enabled' */

    /* Update for UnitDelay: '<S297>/Unit Delay' */
    BaseEngineController_LS_DWork.s297_UnitDelay_DSTATE = rtb_Switch1_mj;

    /* Update for UnitDelay: '<S294>/Unit Delay' incorporates:
     *  MinMax: '<S296>/MinMax1'
     */
    BaseEngineController_LS_DWork.s294_UnitDelay_DSTATE = y;

    /* Update for UnitDelay: '<S293>/Unit Delay' */
    BaseEngineController_LS_DWork.s293_UnitDelay_DSTATE = rtb_Product4_o;

    /* Update for UnitDelay: '<S290>/Unit Delay1' */
    BaseEngineController_LS_DWork.s290_UnitDelay1_DSTATE =
      BaseEngineController_LS_B.s290_Switch3;

    /* Update for UnitDelay: '<S290>/Unit Delay' */
    BaseEngineController_LS_DWork.s290_UnitDelay_DSTATE =
      BaseEngineController_LS_B.s290_Switch1;

    /* Update for UnitDelay: '<S290>/Unit Delay2' */
    BaseEngineController_LS_DWork.s290_UnitDelay2_DSTATE =
      BaseEngineController_LS_B.s290_Switch4;

    /* End of Outputs for SubSystem: '<S154>/O2 PID Controller' */
    /* Switch: '<S154>/Switch' incorporates:
     *  Constant: '<S154>/Constant'
     *  Logic: '<S154>/Logical Operator2'
     *  S-Function (motohawk_sfun_calibration): '<S154>/motohawk_calibration'
     */
    if ((O2DisablmentMult_DataStore()) &&
        BaseEngineController_LS_B.s284_LogicalOperator2) {
      BaseEngineController_LS_B.s154_O2FuelMult =
        rtb_Multiplyby10ifnotyetenabled;
    } else {
      BaseEngineController_LS_B.s154_O2FuelMult = 1.0;
    }

    /* End of Switch: '<S154>/Switch' */

    /* S-Function (motohawk_sfun_probe): '<S284>/motohawk_probe9' */
    (O2Calibration_DataStore()) = (O2ControlEnable_DataStore());

    /* S-Function Block: <S154>/motohawk_prelookup13 */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (O2ITermIn_DataStore()) = BaseEngineController_LS_B.s294_Switch1;
      (O2ITermIdx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_LS_B.s294_Switch1, (O2ITermIdxArr_DataStore()), 9,
         (O2ITermIdx_DataStore()));
      rtb_ITermIdx = (O2ITermIdx_DataStore());
    }

    /* End of Outputs for SubSystem: '<S136>/O2 Control' */

    /* Outputs for Atomic SubSystem: '<S136>/Fuel System Manager' */

    /* S-Function Block: <S211>/motohawk_prelookup */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (DesAFRatioIn_DataStore()) = BaseEngineController_LS_B.s638_Merge;
      (DesAFRatioIdx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_LS_B.s638_Merge, (DesAFRatioIdxArr_DataStore()),
         11, (DesAFRatioIdx_DataStore()));
      rtb_motohawk_prelookup_hf = (DesAFRatioIdx_DataStore());
    }

    /* S-Function Block: <S211>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      BaseEngineController_LS_B.s211_motohawk_interpolation_1d =
        TableInterpolation1D_real_T(rtb_motohawk_prelookup_hf, (real_T *)
        ((DesAFRatioTbl_DataStore())), 11);
      (DesAFRatio_DataStore()) =
        BaseEngineController_LS_B.s211_motohawk_interpolation_1d;
    }

    /* Product: '<S209>/Fuel Flow = Mass Airflow * Equivalence Ratio // Air-to-fuel Ratio' */
    BaseEngineController_LS_B.s209_FuelFlowMassAirflowEquivalenceRatioAirtofuelRatio
      = BaseEngineController_LS_B.s366_MultiportSwitch * rtb_DesiredLambda_idx /
      BaseEngineController_LS_B.s211_motohawk_interpolation_1d;

    /* Product: '<S206>/Per-Cylinder Mass Flow Rate' incorporates:
     *  DataTypeConversion: '<S206>/Data Type Conversion'
     *  S-Function (motohawk_sfun_data_read): '<S206>/Number of Combustion Events Per Revolution'
     */
    BaseEngineController_LS_B.s206_PerCylinderMassFlowRate =
      BaseEngineController_LS_B.s209_FuelFlowMassAirflowEquivalenceRatioAirtofuelRatio
      / (real_T)((uint8_T)CombEventsPerRev_DataStore());

    /* Product: '<S206>/Apply Multipliers for O2, Knock Control, and Enrichment1' */
    BaseEngineController_LS_B.s206_ApplyMultipliersforO2KnockControlandEnrichment1
      = BaseEngineController_LS_B.s206_PerCylinderMassFlowRate *
      BaseEngineController_LS_B.s154_O2FuelMult;

    /* Outputs for Atomic SubSystem: '<S150>/Injector Manager' */

    /* Outputs for Enabled SubSystem: '<S207>/Delta TPS Transient Fueling' incorporates:
     *  EnablePort: '<S212>/Enable'
     */
    /* S-Function (motohawk_sfun_calibration): '<S207>/motohawk_calibration1' */
    if ((DeltaTPSFuelingEnable_DataStore())) {
      if (!BaseEngineController_LS_DWork.s207_DeltaTPSTransientFueling_MODE) {
        /* S-Function Block: <S218>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_LS_DWork.s218_motohawk_delta_time_DWORK1 = now -
            Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }

        /* InitializeConditions for UnitDelay: '<S221>/Unit Delay' */
        BaseEngineController_LS_DWork.s221_UnitDelay_DSTATE = 0.0;

        /* S-Function Block: <S217>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_LS_DWork.s217_motohawk_delta_time_DWORK1 = now -
            Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }

        /* InitializeConditions for UnitDelay: '<S220>/Unit Delay' */
        BaseEngineController_LS_DWork.s220_UnitDelay_DSTATE = 0.0;
        BaseEngineController_LS_DWork.s207_DeltaTPSTransientFueling_MODE = TRUE;
      }

      /* S-Function Block: <S218>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s218_motohawk_delta_time_DWORK1, NULL);
        rtb_Product_mq = ((real_T) delta) * 0.000001;
      }

      /* Product: '<S218>/Product' incorporates:
       *  MinMax: '<S218>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S218>/motohawk_calibration'
       */
      rtb_Product_mq /= (rtb_Product_mq >= (DeltaMAP_FiltConst_DataStore())) ||
        rtIsNaN((DeltaMAP_FiltConst_DataStore())) ? rtb_Product_mq :
        (DeltaMAP_FiltConst_DataStore());

      /* Sum: '<S221>/Sum1' incorporates:
       *  Constant: '<S221>/Constant'
       *  Product: '<S221>/Product'
       *  Product: '<S221>/Product1'
       *  Sum: '<S221>/Sum'
       *  UnitDelay: '<S221>/Unit Delay'
       */
      BaseEngineController_LS_B.s221_Sum1 = (1.0 - rtb_Product_mq) *
        BaseEngineController_LS_DWork.s221_UnitDelay_DSTATE +
        BaseEngineController_LS_B.s659_Merge * rtb_Product_mq;

      /* Sum: '<S212>/Sum1' */
      BaseEngineController_LS_B.s212_Sum1 = BaseEngineController_LS_B.s659_Merge
        - BaseEngineController_LS_B.s221_Sum1;

      /* S-Function Block: <S217>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s217_motohawk_delta_time_DWORK1, NULL);
        rtb_Product_mq = ((real_T) delta) * 0.000001;
      }

      /* Product: '<S217>/Product' incorporates:
       *  MinMax: '<S217>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S217>/motohawk_calibration'
       */
      rtb_Product_mq /= (rtb_Product_mq >= (DeltaTPS_FiltConst_DataStore())) ||
        rtIsNaN((DeltaTPS_FiltConst_DataStore())) ? rtb_Product_mq :
        (DeltaTPS_FiltConst_DataStore());

      /* Sum: '<S220>/Sum1' incorporates:
       *  Constant: '<S220>/Constant'
       *  Product: '<S220>/Product'
       *  Product: '<S220>/Product1'
       *  Sum: '<S220>/Sum'
       *  UnitDelay: '<S220>/Unit Delay'
       */
      BaseEngineController_LS_B.s220_Sum1 = (1.0 - rtb_Product_mq) *
        BaseEngineController_LS_DWork.s220_UnitDelay_DSTATE +
        BaseEngineController_LS_B.s412_Switch2 * rtb_Product_mq;

      /* Sum: '<S212>/Sum' */
      BaseEngineController_LS_B.s212_Sum =
        BaseEngineController_LS_B.s412_Switch2 -
        BaseEngineController_LS_B.s220_Sum1;

      /* S-Function Block: <S212>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (MAF09In_DataStore()) = BaseEngineController_LS_B.s366_MultiportSwitch;
        (MAF09Idx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_LS_B.s366_MultiportSwitch,
           (MAF09IdxArr_DataStore()), 9, (MAF09Idx_DataStore()));
        rtb_motohawk_prelookup_ag = (MAF09Idx_DataStore());
      }

      /* S-Function Block: <S212>/motohawk_prelookup1 */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (DeltaTPS17In_DataStore()) = BaseEngineController_LS_B.s212_Sum;
        (DeltaTPS17Idx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_LS_B.s212_Sum, (DeltaTPS17IdxArr_DataStore()),
           17, (DeltaTPS17Idx_DataStore()));
        rtb_motohawk_prelookup1_jq = (DeltaTPS17Idx_DataStore());
      }

      /* S-Function Block: <S212>/motohawk_interpolation_2d2 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_motohawk_interpolation_2d2_a = TableInterpolation2D_real_T
          (rtb_motohawk_prelookup_ag, rtb_motohawk_prelookup1_jq, (real_T *)
           ((DeltaTPS_MultMap_DataStore())), 9, 17);
        (DeltaTPS_Mult_DataStore()) = rtb_motohawk_interpolation_2d2_a;
      }

      /* RelationalOperator: '<S214>/RelOp' incorporates:
       *  Constant: '<S214>/Constant'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S212>/motohawk_interpolation_2d2'
       *  S-Function (motohawk_sfun_prelookup): '<S212>/motohawk_prelookup'
       *  S-Function (motohawk_sfun_prelookup): '<S212>/motohawk_prelookup1'
       */
      rtb_LogicalOperator6_b = (rtb_motohawk_interpolation_2d2_a != 1.0);

      /* S-Function Block: <S212>/motohawk_prelookup3 */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (DeltaMAP17In_DataStore()) = BaseEngineController_LS_B.s212_Sum1;
        (DeltaMAP17Idx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_LS_B.s212_Sum1, (DeltaMAP17IdxArr_DataStore()),
           17, (DeltaMAP17Idx_DataStore()));
        rtb_motohawk_prelookup3 = (DeltaMAP17Idx_DataStore());
      }

      /* S-Function Block: <S212>/motohawk_interpolation_2d1 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_motohawk_interpolation_2d1_a = TableInterpolation2D_real_T
          (rtb_motohawk_prelookup_ag, rtb_motohawk_prelookup3, (real_T *)
           ((DeltaMAP_MultMap_DataStore())), 9, 17);
        (DeltaMAP_Mult_DataStore()) = rtb_motohawk_interpolation_2d1_a;
      }

      /* Logic: '<S212>/Logical Operator' incorporates:
       *  Constant: '<S215>/Constant'
       *  RelationalOperator: '<S215>/RelOp'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S212>/motohawk_interpolation_2d1'
       *  S-Function (motohawk_sfun_prelookup): '<S212>/motohawk_prelookup'
       *  S-Function (motohawk_sfun_prelookup): '<S212>/motohawk_prelookup3'
       */
      rtb_LogicalOperator6_b = ((rtb_motohawk_interpolation_2d1_a != 1.0) ||
        rtb_LogicalOperator6_b);

      /* Outputs for Enabled SubSystem: '<S212>/ECT Transient Fueling' incorporates:
       *  EnablePort: '<S216>/Enable'
       */
      if (rtb_LogicalOperator6_b) {
        if (!BaseEngineController_LS_DWork.s212_ECTTransientFueling_MODE) {
          BaseEngineController_LS_DWork.s212_ECTTransientFueling_MODE = TRUE;
        }

        /* S-Function Block: <S216>/motohawk_interpolation_1d */
        {
          extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T
            *tbl_data, uint32_T sz);
          BaseEngineController_LS_B.s216_motohawk_interpolation_1d =
            TableInterpolation1D_real_T
            (BaseEngineController_LS_B.s393_motohawk_prelookup, (real_T *)
             ((ECTTransFuelMultTbl_DataStore())), 5);
          (ECTTransFuelMult_DataStore()) =
            BaseEngineController_LS_B.s216_motohawk_interpolation_1d;
        }
      } else {
        if (BaseEngineController_LS_DWork.s212_ECTTransientFueling_MODE) {
          /* Disable for Outport: '<S216>/Mult' */
          BaseEngineController_LS_B.s216_motohawk_interpolation_1d = 1.0;
          BaseEngineController_LS_DWork.s212_ECTTransientFueling_MODE = FALSE;
        }
      }

      /* End of Outputs for SubSystem: '<S212>/ECT Transient Fueling' */

      /* Outputs for Enabled SubSystem: '<S212>/OXY Transient Fueling' incorporates:
       *  EnablePort: '<S219>/Enable'
       */
      if (rtb_LogicalOperator6_b) {
        if (!BaseEngineController_LS_DWork.s212_OXYTransientFueling_MODE) {
          BaseEngineController_LS_DWork.s212_OXYTransientFueling_MODE = TRUE;
        }

        /* S-Function Block: <S219>/motohawk_interpolation_1d */
        {
          extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T
            *tbl_data, uint32_T sz);
          BaseEngineController_LS_B.s219_motohawk_interpolation_1d =
            TableInterpolation1D_real_T(rtb_motohawk_prelookup_e, (real_T *)
            ((OXYTransFuelMultTbl_DataStore())), 5);
          (OXYTransFuelMult_DataStore()) =
            BaseEngineController_LS_B.s219_motohawk_interpolation_1d;
        }
      } else {
        if (BaseEngineController_LS_DWork.s212_OXYTransientFueling_MODE) {
          /* Disable for Outport: '<S219>/Mult' */
          BaseEngineController_LS_B.s219_motohawk_interpolation_1d = 1.0;
          BaseEngineController_LS_DWork.s212_OXYTransientFueling_MODE = FALSE;
        }
      }

      /* End of Outputs for SubSystem: '<S212>/OXY Transient Fueling' */

      /* Product: '<S212>/Product1' incorporates:
       *  S-Function (motohawk_sfun_interpolation_2d): '<S212>/motohawk_interpolation_2d1'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S212>/motohawk_interpolation_2d2'
       *  S-Function (motohawk_sfun_prelookup): '<S212>/motohawk_prelookup'
       *  S-Function (motohawk_sfun_prelookup): '<S212>/motohawk_prelookup1'
       *  S-Function (motohawk_sfun_prelookup): '<S212>/motohawk_prelookup3'
       */
      BaseEngineController_LS_B.s212_Product1 = rtb_motohawk_interpolation_2d2_a
        * BaseEngineController_LS_B.s216_motohawk_interpolation_1d *
        rtb_motohawk_interpolation_2d1_a *
        BaseEngineController_LS_B.s219_motohawk_interpolation_1d;

      /* Update for UnitDelay: '<S221>/Unit Delay' */
      BaseEngineController_LS_DWork.s221_UnitDelay_DSTATE =
        BaseEngineController_LS_B.s221_Sum1;

      /* Update for UnitDelay: '<S220>/Unit Delay' */
      BaseEngineController_LS_DWork.s220_UnitDelay_DSTATE =
        BaseEngineController_LS_B.s220_Sum1;
    } else {
      if (BaseEngineController_LS_DWork.s207_DeltaTPSTransientFueling_MODE) {
        /* Disable for Enabled SubSystem: '<S212>/ECT Transient Fueling' */
        /* Disable for Outport: '<S216>/Mult' */
        BaseEngineController_LS_B.s216_motohawk_interpolation_1d = 1.0;
        BaseEngineController_LS_DWork.s212_ECTTransientFueling_MODE = FALSE;

        /* End of Disable for SubSystem: '<S212>/ECT Transient Fueling' */

        /* Disable for Enabled SubSystem: '<S212>/OXY Transient Fueling' */
        /* Disable for Outport: '<S219>/Mult' */
        BaseEngineController_LS_B.s219_motohawk_interpolation_1d = 1.0;
        BaseEngineController_LS_DWork.s212_OXYTransientFueling_MODE = FALSE;

        /* End of Disable for SubSystem: '<S212>/OXY Transient Fueling' */

        /* Disable for Outport: '<S212>/DeltaTPSMult' */
        BaseEngineController_LS_B.s212_Product1 = 1.0;
        BaseEngineController_LS_DWork.s207_DeltaTPSTransientFueling_MODE = FALSE;
      }
    }

    /* End of S-Function (motohawk_sfun_calibration): '<S207>/motohawk_calibration1' */
    /* End of Outputs for SubSystem: '<S207>/Delta TPS Transient Fueling' */

    /* Product: '<S207>/Divide' */
    rtb_DataTypeConversion1_e = BaseEngineController_LS_B.s212_Product1 *
      BaseEngineController_LS_B.s206_ApplyMultipliersforO2KnockControlandEnrichment1;

    /* S-Function Block: <S207>/Make-Up Pulse End of Injection Timing1 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_EOI = TableInterpolation2D_real_T
        (BaseEngineController_LS_B.s395_motohawk_prelookup1,
         BaseEngineController_LS_B.s397_motohawk_prelookup1, (real_T *)
         ((MakeUpEOIMap_DataStore())), 9, 9);
      (MakeUpEOI_DataStore()) = rtb_EOI;
    }

    /* Outputs for Enabled SubSystem: '<S213>/Multiply and Divide, avoiding divde by zero' incorporates:
     *  EnablePort: '<S222>/Enable'
     */
    /* RelationalOperator: '<S223>/RelOp' incorporates:
     *  Constant: '<S223>/Constant'
     */
    if (BaseEngineController_LS_B.s616_Sum1 != 0.0) {
      /* Product: '<S222>/charge mass' incorporates:
       *  Constant: '<S213>/Units Equivalency Factor'
       */
      BaseEngineController_LS_B.s222_chargemass = rtb_DataTypeConversion1_e *
        60000.0 / BaseEngineController_LS_B.s616_Sum1;
    }

    /* End of RelationalOperator: '<S223>/RelOp' */
    /* End of Outputs for SubSystem: '<S213>/Multiply and Divide, avoiding divde by zero' */
    /* S-Function Block: <S207>/Primary Pulse Injection Timing */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_PrimaryPulseInjectionTiming = TableInterpolation2D_real_T
        (BaseEngineController_LS_B.s395_motohawk_prelookup1,
         BaseEngineController_LS_B.s397_motohawk_prelookup1, (real_T *)
         ((PrimarySOIMap_DataStore())), 9, 9);
      (PrimarySOI_DataStore()) = rtb_PrimaryPulseInjectionTiming;
    }

    /* End of Outputs for SubSystem: '<S150>/Injector Manager' */

    /* Outputs for Atomic SubSystem: '<S150>/O2 Fuel Adapt' */

    /* S-Function Block: <S208>/motohawk_interpolation_1d1 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d1_m = TableInterpolation1D_real_T
        (rtb_ITermIdx, (real_T *) ((FuelAdaptGainTbl_DataStore())), 9);
      (FuelAdaptGain_DataStore()) = rtb_motohawk_interpolation_1d1_m;
    }

    /* Product: '<S208>/Product0' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S208>/motohawk_interpolation_1d1'
     *  S-Function (motohawk_sfun_prelookup): '<S154>/motohawk_prelookup13'
     */
    rtb_DataTypeConversion1_e = BaseEngineController_LS_B.s294_Switch1 *
      rtb_motohawk_interpolation_1d1_m;

    /* MinMax: '<S229>/MinMax' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S226>/motohawk_calibration'
     */
    rtb_Abs_k = (rtb_DataTypeConversion1_e >= (FuelAdaptErrorLwrLim_DataStore()))
      || rtIsNaN((FuelAdaptErrorLwrLim_DataStore())) ? rtb_DataTypeConversion1_e
      : (FuelAdaptErrorLwrLim_DataStore());

    /* MinMax: '<S229>/MinMax1' incorporates:
     *  MinMax: '<S229>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S226>/motohawk_calibration1'
     */
    BaseEngineController_LS_B.s229_MinMax1 = (rtb_Abs_k <=
      (FuelAdaptErrorUprLim_DataStore())) || rtIsNaN
      ((FuelAdaptErrorUprLim_DataStore())) ? rtb_Abs_k :
      (FuelAdaptErrorUprLim_DataStore());

    /* S-Function Block: <S208>/motohawk_interpolation_2d2 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_motohawk_interpolation_2d2 = TableInterpolation2D_real_T
        (BaseEngineController_LS_B.s395_motohawk_prelookup1,
         BaseEngineController_LS_B.s397_motohawk_prelookup1, (real_T *)
         ((FuelFlowCompAdaptMap_DataStore())), 9, 9);
      (FuelFlowCompAdapt_DataStore()) = rtb_motohawk_interpolation_2d2;
    }

    /* Outputs for Atomic SubSystem: '<S208>/WarmUp Disable' */
    /* Logic: '<S227>/Logical Operator' incorporates:
     *  Constant: '<S227>/Constant'
     *  MinMax: '<S227>/MinMax'
     *  RelationalOperator: '<S227>/Relational Operator'
     *  Sum: '<S227>/Sum'
     */
    BaseEngineController_LS_B.s227_LogicalOperator = !(((rtb_DesiredLambda_idx_0
      >= rtb_DesiredLambda_idx_1) || rtIsNaN(rtb_DesiredLambda_idx_1) ?
      rtb_DesiredLambda_idx_0 : rtb_DesiredLambda_idx_1) - rtb_DesiredLambda_idx
      > 0.01);

    /* End of Outputs for SubSystem: '<S208>/WarmUp Disable' */

    /* Outputs for Atomic SubSystem: '<S208>/O2 Control Enable Delay' */

    /* S-Function Block: <S228>/motohawk_delta_time */
    rtb_motohawk_delta_time_m3 = 0.005;

    /* Switch: '<S228>/Switch' incorporates:
     *  Constant: '<S228>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S228>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S228>/motohawk_delta_time'
     *  Sum: '<S228>/Sum'
     */
    if (BaseEngineController_LS_B.s284_LogicalOperator2) {
      rtb_DataTypeConversion1_e = rtb_motohawk_delta_time_m3 +
        LiqDelayTime_DataStore();
    } else {
      rtb_DataTypeConversion1_e = 0.0;
    }

    /* End of Switch: '<S228>/Switch' */
    /* RelationalOperator: '<S225>/Relational Operator' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S225>/motohawk_calibration1'
     */
    rtb_LogicalOperator6_b = (rtb_DataTypeConversion1_e >
      (O2CtrlAdaptDelayTime_DataStore()));

    /* Saturate: '<S228>/Saturation' */
    rtb_Saturation_gs = rtb_DataTypeConversion1_e >= 16000.0 ? 16000.0 :
      rtb_DataTypeConversion1_e <= 0.0 ? 0.0 : rtb_DataTypeConversion1_e;

    /* S-Function (motohawk_sfun_data_write): '<S228>/motohawk_data_write' */
    /* Write to Data Storage as scalar: LiqDelayTime */
    {
      LiqDelayTime_DataStore() = rtb_Saturation_gs;
    }

    /* End of Outputs for SubSystem: '<S208>/O2 Control Enable Delay' */

    /* Abs: '<S208>/Abs' */
    rtb_DataTypeConversion1_e = fabs(BaseEngineController_LS_B.s294_Switch1);

    /* Logic: '<S208>/Logical Operator2' incorporates:
     *  RelationalOperator: '<S208>/Relational Operator'
     *  S-Function (motohawk_sfun_calibration): '<S208>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S208>/motohawk_calibration1'
     *  S-Function (motohawk_sfun_calibration): '<S208>/motohawk_calibration2'
     */
    BaseEngineController_LS_B.s208_LogicalOperator2 =
      (((FuelAdaptEnable_DataStore()) && (AdaptEnable_DataStore()) &&
        BaseEngineController_LS_B.s227_LogicalOperator && rtb_LogicalOperator6_b
        && (rtb_DataTypeConversion1_e <= (FuelAdaptDelta_DataStore()))));

    /* Outputs for Enabled SubSystem: '<S208>/Adapt FuelFlowComp Map' incorporates:
     *  EnablePort: '<S224>/Enable'
     */
    if (BaseEngineController_LS_B.s208_LogicalOperator2) {
      /* S-Function Block: <S224>/motohawk_adapt_table */
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
              BaseEngineController_LS_B.s229_MinMax1;
            if (_new > (FuelFlowCompMaxValue_DataStore()))
              _new = (FuelFlowCompMaxValue_DataStore());
            if (_new < (FuelFlowCompMinValue_DataStore()))
              _new = (FuelFlowCompMinValue_DataStore());
            (FuelFlowCompAdaptMap_DataStore())[_row][_col] = _new;
          } else if (_col_frac == 3) {
            _new = (FuelFlowCompAdaptMap_DataStore())[_row][_col+1] +
              BaseEngineController_LS_B.s229_MinMax1;
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

      /* RelationalOperator: '<S224>/Relational Operator2' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S224>/motohawk_calibration2'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S208>/motohawk_interpolation_2d2'
       */
      rtb_RelationalOperator2_pk = ((rtb_motohawk_interpolation_2d2 >=
        (FuelFlowCompMaxValue_DataStore())));

      /* S-Function (motohawk_sfun_fault_def): '<S224>/motohawk_fault_def' */

      /* Set Fault Suspected Status: FuelAdaptRangeHi */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(56, rtb_RelationalOperator2_pk);
        UpdateFault(56);
      }

      /* RelationalOperator: '<S224>/Relational Operator1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S224>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S208>/motohawk_interpolation_2d2'
       */
      rtb_RelationalOperator1_nn = ((rtb_motohawk_interpolation_2d2 <=
        (FuelFlowCompMinValue_DataStore())));

      /* S-Function (motohawk_sfun_fault_def): '<S224>/motohawk_fault_def1' */

      /* Set Fault Suspected Status: FuelAdaptRangeLow */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(57, rtb_RelationalOperator1_nn);
        UpdateFault(57);
      }
    }

    /* End of Outputs for SubSystem: '<S208>/Adapt FuelFlowComp Map' */

    /* S-Function Block: <S208>/motohawk_interpolation_2d1 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_motohawk_interpolation_2d1_p = TableInterpolation2D_real_T
        (BaseEngineController_LS_B.s395_motohawk_prelookup1,
         BaseEngineController_LS_B.s397_motohawk_prelookup1, (real_T *)
         ((FuelFlowCompMap_DataStore())), 9, 9);
      (FuelFlowComp_DataStore()) = rtb_motohawk_interpolation_2d1_p;
    }

    /* Product: '<S208>/Divide' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S208>/motohawk_interpolation_2d1'
     *  S-Function (motohawk_sfun_interpolation_2d): '<S208>/motohawk_interpolation_2d2'
     */
    rtb_DataTypeConversion1_e = rtb_motohawk_interpolation_2d1_p *
      rtb_motohawk_interpolation_2d2;

    /* End of Outputs for SubSystem: '<S150>/O2 Fuel Adapt' */
    /* End of Outputs for SubSystem: '<S136>/Fuel System Manager' */

    /* Switch: '<S151>/Switch4' incorporates:
     *  Constant: '<S151>/Constant2'
     *  Logic: '<S151>/Logical Operator'
     *  Sum: '<S151>/Sum2'
     */
    if (!BaseEngineController_LS_B.s266_RelOp) {
      rtb_DataTypeConversion_b2 = 0.0;
    } else {
      rtb_DataTypeConversion_b2 =
        BaseEngineController_LS_B.s256_DontallowsetpointtoeverdropbelowtheTargetRPM
        + BaseEngineController_LS_B.s153_MinGovAirPID;
    }

    /* End of Switch: '<S151>/Switch4' */
    /* Switch: '<S151>/Switch1' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S151>/motohawk_data_read'
     */
    if (((uint8_T)IACType_DataStore()) > 0) {
      /* ZeroOrderHold: '<S136>/Zero-Order Hold5' incorporates:
       *  Constant: '<S151>/Constant1'
       *  Sum: '<S151>/Sum'
       */
      BaseEngineController_LS_B.s135_IACS = 100.0 - rtb_DataTypeConversion_b2;
    } else {
      /* ZeroOrderHold: '<S136>/Zero-Order Hold5' incorporates:
       *  Constant: '<S151>/Constant'
       */
      BaseEngineController_LS_B.s135_IACS = 0.0;
    }

    /* End of Switch: '<S151>/Switch1' */

    /* ZeroOrderHold: '<S136>/Zero-Order Hold1' */
    BaseEngineController_LS_B.s135_SparkEnergy =
      BaseEngineController_LS_B.s155_motohawk_interpolation_2d1;

    /* ZeroOrderHold: '<S136>/Zero-Order Hold11' */
    BaseEngineController_LS_B.s135_WASTEGATE = rtb_Switch_k;

    /* ZeroOrderHold: '<S136>/Zero-Order Hold12' */
    BaseEngineController_LS_B.s135_SparkAdv =
      BaseEngineController_LS_B.s303_Switch;

    /* ZeroOrderHold: '<S136>/Zero-Order Hold16' incorporates:
     *  Constant: '<S136>/ON1'
     */
    BaseEngineController_LS_B.s135_FUELP = TRUE;

    /* ZeroOrderHold: '<S136>/Zero-Order Hold17' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S207>/Primary Pulse Injection Timing'
     */
    BaseEngineController_LS_B.s135_SOI = rtb_PrimaryPulseInjectionTiming;

    /* ZeroOrderHold: '<S136>/Zero-Order Hold18' */
    BaseEngineController_LS_B.s135_Throttle =
      BaseEngineController_LS_B.s145_MultiportSwitch;

    /* ZeroOrderHold: '<S136>/Zero-Order Hold2' */
    BaseEngineController_LS_B.s135_IACP = rtb_DataTypeConversion_b2;

    /* ZeroOrderHold: '<S136>/Zero-Order Hold3' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S207>/Make-Up Pulse End of Injection Timing1'
     */
    BaseEngineController_LS_B.s135_MakeUpEOI = rtb_EOI;

    /* ZeroOrderHold: '<S136>/Zero-Order Hold4' */
    BaseEngineController_LS_B.s135_FuelMult = rtb_DataTypeConversion1_e;

    /* ZeroOrderHold: '<S136>/Zero-Order Hold6' */
    BaseEngineController_LS_B.s135_FAN1 = BaseEngineController_LS_B.s149_MinMax;

    /* ZeroOrderHold: '<S136>/Zero-Order Hold7' */
    BaseEngineController_LS_B.s135_FAN2 = BaseEngineController_LS_B.s149_MinMax1;

    /* ZeroOrderHold: '<S136>/Zero-Order Hold8' */
    BaseEngineController_LS_B.s135_AC =
      BaseEngineController_LS_B.s144_LogicalOperator;

    /* S-Function (motohawk_sfun_replicate): '<S136>/motohawk_replicate1' */

    /* S-Function Block: <S136>/motohawk_replicate1 */
    {
      int_T i1;
      real_T *y0 = BaseEngineController_LS_B.s135_FPC;
      for (i1=0; i1 < 8; i1++) {
        y0[i1] = BaseEngineController_LS_B.s222_chargemass;
      }
    }
  } else {
    if (BaseEngineController_LS_DWork.s15_Run_MODE) {
      /* Level2 S-Function Block: '<S136>/motohawk_trigger1' (motohawk_sfun_trigger) */
      /* Disable for Trigger_FGND_5XRTI_PERIODIC_1295p0007 */
      BaseEngineController_LS_DWork.s136_motohawk_trigger1_DWORK1 = 0;

      /* Disable for Atomic SubSystem: '<S136>/Fuel System Manager' */
      /* Disable for Atomic SubSystem: '<S150>/Injector Manager' */
      /* Disable for Enabled SubSystem: '<S207>/Delta TPS Transient Fueling' */
      /* Disable for Enabled SubSystem: '<S212>/ECT Transient Fueling' */
      /* Disable for Outport: '<S216>/Mult' */
      BaseEngineController_LS_B.s216_motohawk_interpolation_1d = 1.0;
      BaseEngineController_LS_DWork.s212_ECTTransientFueling_MODE = FALSE;

      /* End of Disable for SubSystem: '<S212>/ECT Transient Fueling' */

      /* Disable for Enabled SubSystem: '<S212>/OXY Transient Fueling' */
      /* Disable for Outport: '<S219>/Mult' */
      BaseEngineController_LS_B.s219_motohawk_interpolation_1d = 1.0;
      BaseEngineController_LS_DWork.s212_OXYTransientFueling_MODE = FALSE;

      /* End of Disable for SubSystem: '<S212>/OXY Transient Fueling' */

      /* Disable for Outport: '<S212>/DeltaTPSMult' */
      BaseEngineController_LS_B.s212_Product1 = 1.0;
      BaseEngineController_LS_DWork.s207_DeltaTPSTransientFueling_MODE = FALSE;

      /* End of Disable for SubSystem: '<S207>/Delta TPS Transient Fueling' */
      /* End of Disable for SubSystem: '<S150>/Injector Manager' */
      /* End of Disable for SubSystem: '<S136>/Fuel System Manager' */
      BaseEngineController_LS_DWork.s15_Run_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S15>/Run' */

  /* If: '<S860>/If' incorporates:
   *  Inport: '<S861>/In1'
   *  Inport: '<S862>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S860>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S860>/override_enable'
   */
  if ((AC_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S860>/NewValue' incorporates:
     *  ActionPort: '<S861>/Action Port'
     */
    rtb_LogicalOperator6_b = (AC_new_DataStore());

    /* End of Outputs for SubSystem: '<S860>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S860>/OldValue' incorporates:
     *  ActionPort: '<S862>/Action Port'
     */
    rtb_LogicalOperator6_b = BaseEngineController_LS_B.s135_AC;

    /* End of Outputs for SubSystem: '<S860>/OldValue' */
  }

  /* End of If: '<S860>/If' */

  /* Logic: '<S859>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S859>/0 = No Inversion 1 = Inversion'
   */
  BaseEngineController_LS_B.s859_LogicalOperator = rtb_LogicalOperator6_b ^
    (AC_Polarity_DataStore());

  /* S-Function (motohawk_sfun_trigger): '<S445>/motohawk_trigger1' */
  /* Enable for Trigger_FGND_5XRTI_PERIODIC_5523p0009 */
  if (BaseEngineController_LS_DWork.s445_motohawk_trigger1_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s445_motohawk_trigger1_DWORK1 = 1;
  }

  /* RelationalOperator: '<S379>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S379>/motohawk_calibration10'
   */
  rtb_RelationalOperator_h = (BaseEngineController_LS_B.s431_Sum >=
    (FuelLevel_KeyUpDelay_DataStore()));

  /* S-Function (motohawk_sfun_data_read): '<S358>/motohawk_data_read' */
  BaseEngineController_LS_B.s358_motohawk_data_read = FuelLvl_NVM_DataStore();

  /* Switch: '<S358>/Switch2' */
  if (rtb_RelationalOperator_h) {
    rtb_DataTypeConversion_gx = BaseEngineController_LS_B.s699_Merge;
  } else {
    rtb_DataTypeConversion_gx =
      BaseEngineController_LS_B.s358_motohawk_data_read;
  }

  /* End of Switch: '<S358>/Switch2' */

  /* Sum: '<S379>/Sum' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S379>/motohawk_data_read'
   */
  rtb_DataTypeConversion1_e = BaseEngineController_LS_B.s699_Merge -
    FuelLvl_NVM_DataStore();

  /* Logic: '<S379>/Logical Operator' incorporates:
   *  RelationalOperator: '<S379>/Relational Operator1'
   *  S-Function (motohawk_sfun_calibration): '<S379>/motohawk_calibration1'
   */
  rtb_LogicalOperator_c = ((rtb_DataTypeConversion1_e >=
    (FuelLevl_KeyUpDiff_DataStore())) && rtb_RelationalOperator_h);

  /* Logic: '<S381>/Logical Operator' incorporates:
   *  Logic: '<S381>/Logical Operator1'
   *  UnitDelay: '<S381>/Unit Delay'
   */
  BaseEngineController_LS_B.s381_LogicalOperator = ((rtb_LogicalOperator_c &&
    (!BaseEngineController_LS_DWork.s381_UnitDelay_DSTATE)));

  /* Logic: '<S358>/Logical Operator1' incorporates:
   *  Logic: '<S358>/Logical Operator'
   */
  rtb_LogicalOperator6_b = ((!rtb_RelationalOperator_h) ||
    BaseEngineController_LS_B.s381_LogicalOperator);

  /* S-Function Block: <S358>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s358_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_oz = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S358>/Switch3' incorporates:
   *  MinMax: '<S358>/MinMax'
   *  Product: '<S358>/Product'
   *  S-Function (motohawk_sfun_calibration): '<S358>/motohawk_calibration2'
   */
  if (rtb_LogicalOperator6_b) {
    rtb_Switch_h = (FuelLevel_FuelEevntAlpha_DataStore());
  } else {
    /* S-Function Block: <S380>/motohawk_prelookup_col */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (FuelLevel_FiltConstColIn_DataStore()) =
        BaseEngineController_LS_B.s416_Switch2;
      (FuelLevel_FiltConstColIdx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_LS_B.s416_Switch2,
         (FuelLevel_FiltConstColIdxArr_DataStore()), 7,
         (FuelLevel_FiltConstColIdx_DataStore()));
      rtb_motohawk_prelookup_col = (FuelLevel_FiltConstColIdx_DataStore());
    }

    /* S-Function Block: <S380>/motohawk_prelookup_row */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (FuelLevel_FiltConstRowIn_DataStore()) =
        BaseEngineController_LS_B.s431_Sum;
      (FuelLevel_FiltConstRowIdx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_LS_B.s431_Sum,
         (FuelLevel_FiltConstRowIdxArr_DataStore()), 7,
         (FuelLevel_FiltConstRowIdx_DataStore()));
      rtb_motohawk_prelookup_row = (FuelLevel_FiltConstRowIdx_DataStore());
    }

    /* S-Function Block: <S380>/motohawk_interpolation_2d */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_motohawk_interpolation_2d_gj = TableInterpolation2D_real_T
        (rtb_motohawk_prelookup_row, rtb_motohawk_prelookup_col, (real_T *)
         ((FuelLevel_FiltConstMap_DataStore())), 7, 7);
      (FuelLevel_FiltConst_DataStore()) = rtb_motohawk_interpolation_2d_gj;
    }

    rtb_Switch_h = rtb_motohawk_delta_time_oz / ((rtb_motohawk_delta_time_oz >=
      rtb_motohawk_interpolation_2d_gj) || rtIsNaN
      (rtb_motohawk_interpolation_2d_gj) ? rtb_motohawk_delta_time_oz :
      rtb_motohawk_interpolation_2d_gj);
  }

  /* End of Switch: '<S358>/Switch3' */

  /* Sum: '<S377>/Sum1' incorporates:
   *  Constant: '<S377>/Constant'
   *  Product: '<S377>/Product'
   *  Product: '<S377>/Product1'
   *  Sum: '<S377>/Sum'
   *  UnitDelay: '<S377>/Unit Delay'
   */
  BaseEngineController_LS_B.s377_Sum1 = (1.0 - rtb_Switch_h) *
    BaseEngineController_LS_DWork.s377_UnitDelay_DSTATE +
    rtb_DataTypeConversion_gx * rtb_Switch_h;

  /* S-Function (motohawk_sfun_send_canmsgs): '<S863>/Send CAN Messages' */
  /* Send CAN Message(s) */
  {
    static uint32_T LastTxtime32 = 0;
    uint32_T time32;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    time32 = LastTxtime32;

    /* Transmit All Messages on Periodic Schedule (20.0 ms nominal) */
    /* Allow 0.5 ms "fuzz" to allow for different code execution paths on */
    /* subsequent block executions, e.g. long path followed by short path */
    if (Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&time32, NULL) >=
        ((uint32_T)
         (19500U)
         )) {
      /* 0x1f0a100 */
      {
        extern boolean_T CAN_1_Transmit(boolean_T extended, uint32_T id, uint8_T
          length, const uint8_T data[]);
        uint8_T msg_data[8];
        uint16_T tmp0;
        if (BaseEngineController_LS_B.s377_Sum1 < 0.0000000000F) {
          tmp0 = (uint16_T)(0U);
        } else if (BaseEngineController_LS_B.s377_Sum1 > 99.9998565000F) {
          tmp0 = (uint16_T)(65535U);
        } else {
          tmp0 = (uint16_T)(BaseEngineController_LS_B.s377_Sum1 *
                            (655.3509404286F));
        }

        msg_data[0] = ((((uint8_T *)(&tmp0))[0])) ;
        msg_data[1] = ((((uint8_T *)(&tmp0))[1])) ;
        msg_data[2] = 0 ;
        msg_data[3] = 0 ;
        msg_data[4] = 0 ;
        msg_data[5] = 0 ;
        msg_data[6] = 0 ;
        msg_data[7] = 0 ;
        CAN_1_Transmit(1, 0x1f0a100UL, 8, msg_data);
      }

      LastTxtime32 = time32;
    }
  }

  /* S-Function Block: <S877>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s877_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_h = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S877>/Product' incorporates:
   *  MinMax: '<S877>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S877>/motohawk_calibration'
   */
  rtb_Switch_h /= (rtb_Switch_h >= (RPMFilt_LowPass_DataStore())) || rtIsNaN
    ((RPMFilt_LowPass_DataStore())) ? rtb_Switch_h : (RPMFilt_LowPass_DataStore());

  /* Sum: '<S878>/Sum1' incorporates:
   *  Constant: '<S878>/Constant'
   *  Product: '<S878>/Product'
   *  Product: '<S878>/Product1'
   *  Sum: '<S878>/Sum'
   *  UnitDelay: '<S878>/Unit Delay'
   */
  BaseEngineController_LS_B.s878_Sum1 = (1.0 - rtb_Switch_h) *
    BaseEngineController_LS_DWork.s878_UnitDelay_DSTATE +
    BaseEngineController_LS_B.s616_Sum1 * rtb_Switch_h;

  /* Switch: '<S875>/Switch' incorporates:
   *  MinMax: '<S875>/MinMax'
   *  Product: '<S875>/Product'
   *  Product: '<S875>/Product1'
   *  Rounding: '<S875>/Rounding Function'
   *  S-Function (motohawk_sfun_calibration): '<S875>/motohawk_calibration'
   */
  if (((uint8_T)(RPMFilt_Enable_DataStore())) >= 1) {
    /* MinMax: '<S875>/MinMax' incorporates:
     *  Constant: '<S875>/Constant'
     *  S-Function (motohawk_sfun_calibration): '<S875>/motohawk_calibration1'
     */
    rtb_UnitDelay4_b3 = (real_T)((uint16_T)(RPMFilt_RoundValue_DataStore()));
    rtb_Abs_k = rtb_UnitDelay4_b3 >= 1.0 ? rtb_UnitDelay4_b3 : 1.0;
    BaseEngineController_LS_B.s875_Switch = rt_roundd_snf
      (BaseEngineController_LS_B.s878_Sum1 / rtb_Abs_k) * rtb_Abs_k;
  } else {
    BaseEngineController_LS_B.s875_Switch = BaseEngineController_LS_B.s616_Sum1;
  }

  /* End of Switch: '<S875>/Switch' */
  /* S-Function Block: <S874>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s874_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_h = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S874>/Product' incorporates:
   *  MinMax: '<S874>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S874>/motohawk_calibration'
   */
  rtb_Switch_h /= (rtb_Switch_h >= (TPS_Filt_DataStore())) || rtIsNaN
    ((TPS_Filt_DataStore())) ? rtb_Switch_h : (TPS_Filt_DataStore());

  /* Sum: '<S876>/Sum1' incorporates:
   *  Constant: '<S876>/Constant'
   *  Product: '<S876>/Product'
   *  Product: '<S876>/Product1'
   *  Sum: '<S876>/Sum'
   *  UnitDelay: '<S876>/Unit Delay'
   */
  rtb_Sum1_hu = (1.0 - rtb_Switch_h) *
    BaseEngineController_LS_DWork.s876_UnitDelay_DSTATE +
    BaseEngineController_LS_B.s412_Switch2 * rtb_Switch_h;

  /* S-Function (motohawk_sfun_send_canmsgs): '<S864>/Send CAN Messages' */
  /* Send CAN Message(s) */
  {
    static uint32_T LastTxtime32 = 0;
    uint32_T time32;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    time32 = LastTxtime32;

    /* Transmit All Messages on Periodic Schedule (20.0 ms nominal) */
    /* Allow 0.5 ms "fuzz" to allow for different code execution paths on */
    /* subsequent block executions, e.g. long path followed by short path */
    if (Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&time32, NULL) >=
        ((uint32_T)
         (19500U)
         )) {
      /* 0x1f0a000 */
      {
        extern boolean_T CAN_1_Transmit(boolean_T extended, uint32_T id, uint8_T
          length, const uint8_T data[]);
        uint8_T msg_data[8];
        uint16_T tmp0;
        int16_T tmp1;
        int8_T tmp2;
        int8_T tmp3;
        if (BaseEngineController_LS_B.s875_Switch < 0.0000000000F) {
          tmp0 = (uint16_T)(0U);
        } else if (BaseEngineController_LS_B.s875_Switch > 25599.9370500000F) {
          tmp0 = (uint16_T)(65534U);
        } else {
          tmp0 = (uint16_T)(BaseEngineController_LS_B.s875_Switch *
                            (2.5599672324F));
        }

        if (rtb_Sum1_hu < -50.0006912000F) {
          tmp1 = (int16_T)(-32768);
        } else if (rtb_Sum1_hu > 49.9991653000F) {
          tmp1 = (int16_T)(32767);
        } else {
          tmp1 = (int16_T)(rtb_Sum1_hu * (655.3509404286F));
        }

        if (BaseEngineController_LS_B.s744_Merge < -128.0000000000F) {
          tmp2 = (int8_T)(-128);
        } else if (BaseEngineController_LS_B.s744_Merge > 127.0000000000F) {
          tmp2 = (int8_T)(127);
        } else {
          tmp2 = (int8_T)(BaseEngineController_LS_B.s744_Merge);
        }

        if (BaseEngineController_LS_B.s726_Merge < -128.0000000000F) {
          tmp3 = (int8_T)(-128);
        } else if (BaseEngineController_LS_B.s726_Merge > 127.0000000000F) {
          tmp3 = (int8_T)(127);
        } else {
          tmp3 = (int8_T)(BaseEngineController_LS_B.s726_Merge);
        }

        msg_data[0] = ((((uint8_T *)(&tmp0))[0])) ;
        msg_data[1] = ((((uint8_T *)(&tmp0))[1])) ;
        msg_data[2] = 0 ;
        msg_data[3] = 0 ;
        msg_data[4] = ((((uint8_T *)(&tmp1))[0])) ;
        msg_data[5] = ((((uint8_T *)(&tmp1))[1])) ;
        msg_data[6] = ((((uint8_T *)(&tmp2))[0])) ;
        msg_data[7] = ((((uint8_T *)(&tmp3))[0])) ;
        CAN_1_Transmit(1, 0x1f0a000UL, 8, msg_data);
      }

      LastTxtime32 = time32;
    }
  }

  /* S-Function Block: <S882>/motohawk_delta_time */
  rtb_motohawk_delta_time_b3 = 0.005;

  /* UnitDelay: '<S882>/Unit Delay2' */
  rtb_DataTypeConversion1_e =
    BaseEngineController_LS_DWork.s882_UnitDelay2_DSTATE;

  /* Outputs for Enabled SubSystem: '<S882>/IncreasingFilter' incorporates:
   *  EnablePort: '<S889>/Enable'
   */
  /* RelationalOperator: '<S882>/Relational Operator4' incorporates:
   *  UnitDelay: '<S882>/Unit Delay2'
   */
  if (BaseEngineController_LS_DWork.s882_UnitDelay2_DSTATE <
      BaseEngineController_LS_B.s448_MathFunction) {
    /* S-Function (motohawk_sfun_calibration): '<S889>/motohawk_calibration1' */
    BaseEngineController_LS_B.s882_Merge = (PH1_FiltIncConst_DataStore());
  }

  /* End of RelationalOperator: '<S882>/Relational Operator4' */
  /* End of Outputs for SubSystem: '<S882>/IncreasingFilter' */

  /* Outputs for Enabled SubSystem: '<S882>/DecreasingFilter' incorporates:
   *  EnablePort: '<S887>/Enable'
   */
  /* RelationalOperator: '<S882>/Relational Operator3' */
  if (rtb_DataTypeConversion1_e > BaseEngineController_LS_B.s448_MathFunction) {
    /* S-Function (motohawk_sfun_calibration): '<S887>/motohawk_calibration2' */
    BaseEngineController_LS_B.s882_Merge = (PH1_FiltDecConst_DataStore());
  }

  /* End of RelationalOperator: '<S882>/Relational Operator3' */
  /* End of Outputs for SubSystem: '<S882>/DecreasingFilter' */

  /* Switch: '<S882>/Switch1' incorporates:
   *  Constant: '<S882>/Constant'
   *  MinMax: '<S882>/MinMax'
   *  Product: '<S882>/Product'
   *  UnitDelay: '<S882>/Unit Delay5'
   */
  if (BaseEngineController_LS_DWork.s882_UnitDelay5_DSTATE) {
    rtb_Switch_h = rtb_motohawk_delta_time_b3 / ((rtb_motohawk_delta_time_b3 >=
      BaseEngineController_LS_B.s882_Merge) || rtIsNaN
      (BaseEngineController_LS_B.s882_Merge) ? rtb_motohawk_delta_time_b3 :
      BaseEngineController_LS_B.s882_Merge);
  } else {
    rtb_Switch_h = 1.0;
  }

  /* End of Switch: '<S882>/Switch1' */

  /* Sum: '<S888>/Sum1' incorporates:
   *  Constant: '<S888>/Constant'
   *  Product: '<S888>/Product'
   *  Product: '<S888>/Product1'
   *  Sum: '<S888>/Sum'
   *  UnitDelay: '<S888>/Unit Delay'
   */
  rtb_Sum1_c = (1.0 - rtb_Switch_h) *
    BaseEngineController_LS_DWork.s888_UnitDelay_DSTATE +
    BaseEngineController_LS_B.s448_MathFunction * rtb_Switch_h;

  /* Switch: '<S882>/Switch' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S882>/motohawk_calibration'
   *  UnitDelay: '<S882>/Unit Delay5'
   */
  if (BaseEngineController_LS_DWork.s882_UnitDelay5_DSTATE) {
    BaseEngineController_LS_B.s882_Switch = rtb_Sum1_c;
  } else {
    BaseEngineController_LS_B.s882_Switch = (PHI1_DefaultVal_DataStore());
  }

  /* End of Switch: '<S882>/Switch' */
  /* S-Function Block: <S883>/motohawk_delta_time */
  rtb_motohawk_delta_time_lc = 0.005;

  /* UnitDelay: '<S883>/Unit Delay2' */
  rtb_DataTypeConversion1_e =
    BaseEngineController_LS_DWork.s883_UnitDelay2_DSTATE;

  /* Outputs for Enabled SubSystem: '<S883>/IncreasingFilter' incorporates:
   *  EnablePort: '<S892>/Enable'
   */
  /* RelationalOperator: '<S883>/Relational Operator4' incorporates:
   *  UnitDelay: '<S883>/Unit Delay2'
   */
  if (BaseEngineController_LS_DWork.s883_UnitDelay2_DSTATE <
      BaseEngineController_LS_B.s448_MathFunction1) {
    /* S-Function (motohawk_sfun_calibration): '<S892>/motohawk_calibration1' */
    BaseEngineController_LS_B.s883_Merge = (PH2_FiltIncConst_DataStore());
  }

  /* End of RelationalOperator: '<S883>/Relational Operator4' */
  /* End of Outputs for SubSystem: '<S883>/IncreasingFilter' */

  /* Outputs for Enabled SubSystem: '<S883>/DecreasingFilter' incorporates:
   *  EnablePort: '<S890>/Enable'
   */
  /* RelationalOperator: '<S883>/Relational Operator3' */
  if (rtb_DataTypeConversion1_e > BaseEngineController_LS_B.s448_MathFunction1)
  {
    /* S-Function (motohawk_sfun_calibration): '<S890>/motohawk_calibration2' */
    BaseEngineController_LS_B.s883_Merge = (PH2_FiltDecConst_DataStore());
  }

  /* End of RelationalOperator: '<S883>/Relational Operator3' */
  /* End of Outputs for SubSystem: '<S883>/DecreasingFilter' */

  /* Switch: '<S883>/Switch1' incorporates:
   *  Constant: '<S883>/Constant'
   *  MinMax: '<S883>/MinMax'
   *  Product: '<S883>/Product'
   *  UnitDelay: '<S883>/Unit Delay5'
   */
  if (BaseEngineController_LS_DWork.s883_UnitDelay5_DSTATE) {
    rtb_Switch_h = rtb_motohawk_delta_time_lc / ((rtb_motohawk_delta_time_lc >=
      BaseEngineController_LS_B.s883_Merge) || rtIsNaN
      (BaseEngineController_LS_B.s883_Merge) ? rtb_motohawk_delta_time_lc :
      BaseEngineController_LS_B.s883_Merge);
  } else {
    rtb_Switch_h = 1.0;
  }

  /* End of Switch: '<S883>/Switch1' */

  /* Sum: '<S891>/Sum1' incorporates:
   *  Constant: '<S891>/Constant'
   *  Product: '<S891>/Product'
   *  Product: '<S891>/Product1'
   *  Sum: '<S891>/Sum'
   *  UnitDelay: '<S891>/Unit Delay'
   */
  rtb_Sum1_lm = (1.0 - rtb_Switch_h) *
    BaseEngineController_LS_DWork.s891_UnitDelay_DSTATE +
    BaseEngineController_LS_B.s448_MathFunction1 * rtb_Switch_h;

  /* Switch: '<S883>/Switch' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S883>/motohawk_calibration'
   *  UnitDelay: '<S883>/Unit Delay5'
   */
  if (BaseEngineController_LS_DWork.s883_UnitDelay5_DSTATE) {
    BaseEngineController_LS_B.s883_Switch = rtb_Sum1_lm;
  } else {
    BaseEngineController_LS_B.s883_Switch = (PHI2_DefaultVal_DataStore());
  }

  /* End of Switch: '<S883>/Switch' */
  /* S-Function Block: <S879>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s879_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_h = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S879>/Product' incorporates:
   *  MinMax: '<S879>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S879>/motohawk_calibration'
   */
  rtb_Switch_h /= (rtb_Switch_h >= (VSPD_Filt_DataStore())) || rtIsNaN
    ((VSPD_Filt_DataStore())) ? rtb_Switch_h : (VSPD_Filt_DataStore());

  /* Sum: '<S884>/Sum1' incorporates:
   *  Constant: '<S884>/Constant'
   *  Product: '<S884>/Product'
   *  Product: '<S884>/Product1'
   *  Sum: '<S884>/Sum'
   *  UnitDelay: '<S884>/Unit Delay'
   */
  rtb_Sum1_p = (1.0 - rtb_Switch_h) *
    BaseEngineController_LS_DWork.s884_UnitDelay_DSTATE +
    BaseEngineController_LS_B.s416_Switch2 * rtb_Switch_h;

  /* Gain: '<S865>/Gain' */
  rtb_Gain = 1.60934 * rtb_Sum1_p;

  /* MultiPortSwitch: '<S409>/Multiport Switch' incorporates:
   *  Constant: '<S409>/Constant1'
   *  MinMax: '<S409>/MinMax'
   */
  if (BaseEngineController_LS_B.s571_Merge == FALSE) {
    /* Product: '<S409>/Product6' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S409>/motohawk_calibration5'
     *  S-Function (motohawk_sfun_calibration): '<S409>/motohawk_calibration6'
     */
    rtb_DataTypeConversion1_e = (Gear6Ratio_DataStore()) * (FDR_DataStore());

    /* Product: '<S409>/Product' incorporates:
     *  Constant: '<S409>/Constant'
     *  S-Function (motohawk_sfun_calibration): '<S409>/motohawk_calibration7'
     */
    rtb_DataTypeConversion_b2 = (TireRadius_DataStore()) * 0.00595 *
      BaseEngineController_LS_B.s616_Sum1;

    /* Abs: '<S409>/Abs5' incorporates:
     *  Product: '<S409>/Product12'
     *  Sum: '<S409>/Sum5'
     */
    rtb_DataTypeConversion1_e = fabs(rtb_DataTypeConversion_b2 /
      rtb_DataTypeConversion1_e - BaseEngineController_LS_B.s416_Switch2);

    /* Gain: '<S409>/Gain5' incorporates:
     *  RelationalOperator: '<S409>/M6'
     *  S-Function (motohawk_sfun_calibration): '<S409>/motohawk_calibration8'
     */
    rtb_Switch_om = (uint8_T)(rtb_DataTypeConversion1_e <=
      (GearMatchHyst_DataStore()) ? 192 : 0);

    /* Gain: '<S409>/Gain4' incorporates:
     *  Abs: '<S409>/Abs4'
     *  Product: '<S409>/Product11'
     *  Product: '<S409>/Product5'
     *  RelationalOperator: '<S409>/M5'
     *  S-Function (motohawk_sfun_calibration): '<S409>/motohawk_calibration4'
     *  S-Function (motohawk_sfun_calibration): '<S409>/motohawk_calibration6'
     *  S-Function (motohawk_sfun_calibration): '<S409>/motohawk_calibration8'
     *  Sum: '<S409>/Sum4'
     */
    rtb_Product_ln = (uint8_T)(fabs(rtb_DataTypeConversion_b2 /
      ((Gear5Ratio_DataStore()) * (FDR_DataStore())) -
      BaseEngineController_LS_B.s416_Switch2) <= (GearMatchHyst_DataStore()) ?
      160 : 0);

    /* Gain: '<S409>/Gain3' incorporates:
     *  Abs: '<S409>/Abs3'
     *  Product: '<S409>/Product10'
     *  Product: '<S409>/Product4'
     *  RelationalOperator: '<S409>/M4'
     *  S-Function (motohawk_sfun_calibration): '<S409>/motohawk_calibration3'
     *  S-Function (motohawk_sfun_calibration): '<S409>/motohawk_calibration6'
     *  S-Function (motohawk_sfun_calibration): '<S409>/motohawk_calibration8'
     *  Sum: '<S409>/Sum3'
     */
    rtb_Product6_m = (uint8_T)((fabs(rtb_DataTypeConversion_b2 /
      ((Gear4Ratio_DataStore()) * (FDR_DataStore())) -
      BaseEngineController_LS_B.s416_Switch2) <= (GearMatchHyst_DataStore())) <<
      7);

    /* Gain: '<S409>/Gain2' incorporates:
     *  Abs: '<S409>/Abs2'
     *  Product: '<S409>/Product3'
     *  Product: '<S409>/Product9'
     *  RelationalOperator: '<S409>/M3'
     *  S-Function (motohawk_sfun_calibration): '<S409>/motohawk_calibration2'
     *  S-Function (motohawk_sfun_calibration): '<S409>/motohawk_calibration6'
     *  S-Function (motohawk_sfun_calibration): '<S409>/motohawk_calibration8'
     *  Sum: '<S409>/Sum2'
     */
    rtb_Product5_j = (uint8_T)(fabs(rtb_DataTypeConversion_b2 /
      ((Gear3Ratio_DataStore()) * (FDR_DataStore())) -
      BaseEngineController_LS_B.s416_Switch2) <= (GearMatchHyst_DataStore()) ?
      192 : 0);

    /* Gain: '<S409>/Gain1' incorporates:
     *  Abs: '<S409>/Abs1'
     *  Product: '<S409>/Product2'
     *  Product: '<S409>/Product8'
     *  RelationalOperator: '<S409>/M2'
     *  S-Function (motohawk_sfun_calibration): '<S409>/motohawk_calibration1'
     *  S-Function (motohawk_sfun_calibration): '<S409>/motohawk_calibration6'
     *  S-Function (motohawk_sfun_calibration): '<S409>/motohawk_calibration8'
     *  Sum: '<S409>/Sum1'
     */
    rtb_Switch2_a = (uint8_T)((fabs(rtb_DataTypeConversion_b2 /
      ((Gear2Ratio_DataStore()) * (FDR_DataStore())) -
      BaseEngineController_LS_B.s416_Switch2) <= (GearMatchHyst_DataStore())) <<
      7);

    /* MinMax: '<S409>/MinMax' incorporates:
     *  Abs: '<S409>/Abs'
     *  Gain: '<S409>/Gain'
     *  Product: '<S409>/Product1'
     *  Product: '<S409>/Product7'
     *  RelationalOperator: '<S409>/M1'
     *  S-Function (motohawk_sfun_calibration): '<S409>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S409>/motohawk_calibration6'
     *  S-Function (motohawk_sfun_calibration): '<S409>/motohawk_calibration8'
     *  Sum: '<S409>/Sum'
     */
    maxV = ((fabs(rtb_DataTypeConversion_b2 / ((Gear1Ratio_DataStore()) *
               (FDR_DataStore())) - BaseEngineController_LS_B.s416_Switch2) <=
             (GearMatchHyst_DataStore())) << 7) >> 2;
    i = rtb_Switch2_a >> 1;
    maxV = (int32_T)((uint32_T)maxV >= (uint32_T)i ? (uint32_T)maxV : (uint32_T)
                     i);
    i = rtb_Product5_j >> 1;
    maxV = (int32_T)((uint32_T)maxV >= (uint32_T)i ? (uint32_T)maxV : (uint32_T)
                     i);
    i = rtb_Product6_m;
    maxV = (int32_T)((uint32_T)maxV >= (uint32_T)i ? (uint32_T)maxV : (uint32_T)
                     i);
    i = rtb_Product_ln;
    maxV = (int32_T)((uint32_T)maxV >= (uint32_T)i ? (uint32_T)maxV : (uint32_T)
                     i);
    i = rtb_Switch_om;
    BaseEngineController_LS_B.s409_MultiportSwitch = ldexp((real_T)((uint32_T)
      maxV >= (uint32_T)i ? (uint32_T)maxV : (uint32_T)i), -5);
  } else {
    BaseEngineController_LS_B.s409_MultiportSwitch = 0.0;
  }

  /* End of MultiPortSwitch: '<S409>/Multiport Switch' */
  /* S-Function Block: <S880>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s880_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_h = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S880>/Product' incorporates:
   *  MinMax: '<S880>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S880>/motohawk_calibration'
   */
  rtb_Switch_h /= (rtb_Switch_h >= (SparkAdv_Filt_DataStore())) || rtIsNaN
    ((SparkAdv_Filt_DataStore())) ? rtb_Switch_h : (SparkAdv_Filt_DataStore());

  /* Sum: '<S885>/Sum1' incorporates:
   *  Constant: '<S885>/Constant'
   *  Product: '<S885>/Product'
   *  Product: '<S885>/Product1'
   *  Sum: '<S885>/Sum'
   *  UnitDelay: '<S885>/Unit Delay'
   */
  rtb_Sum1_a = (1.0 - rtb_Switch_h) *
    BaseEngineController_LS_DWork.s885_UnitDelay_DSTATE +
    BaseEngineController_LS_B.s135_SparkAdv * rtb_Switch_h;

  /* S-Function Block: <S881>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s881_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_h = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S881>/Product' incorporates:
   *  MinMax: '<S881>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S881>/motohawk_calibration'
   */
  rtb_Switch_h /= (rtb_Switch_h >= (ECUVolt_Filt_DataStore())) || rtIsNaN
    ((ECUVolt_Filt_DataStore())) ? rtb_Switch_h : (ECUVolt_Filt_DataStore());

  /* Sum: '<S886>/Sum1' incorporates:
   *  Constant: '<S886>/Constant'
   *  Product: '<S886>/Product'
   *  Product: '<S886>/Product1'
   *  Sum: '<S886>/Sum'
   *  UnitDelay: '<S886>/Unit Delay'
   */
  rtb_Sum1_j2 = (1.0 - rtb_Switch_h) *
    BaseEngineController_LS_DWork.s886_UnitDelay_DSTATE +
    BaseEngineController_LS_B.s693_Merge * rtb_Switch_h;

  /* S-Function (motohawk_sfun_send_canmsgs): '<S865>/Send CAN Messages' */
  /* Send CAN Message(s) */
  {
    static uint32_T LastTxtime32 = 0;
    uint32_T time32;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    time32 = LastTxtime32;

    /* Transmit All Messages on Periodic Schedule (20.0 ms nominal) */
    /* Allow 0.5 ms "fuzz" to allow for different code execution paths on */
    /* subsequent block executions, e.g. long path followed by short path */
    if (Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&time32, NULL) >=
        ((uint32_T)
         (19500U)
         )) {
      /* 0x1f0a003 */
      {
        extern boolean_T CAN_1_Transmit(boolean_T extended, uint32_T id, uint8_T
          length, const uint8_T data[]);
        uint8_T msg_data[8];
        uint8_T tmp0;
        uint8_T tmp1;
        uint16_T tmp2;
        uint8_T tmp3;
        uint8_T tmp4;
        uint16_T tmp5;
        if (BaseEngineController_LS_B.s882_Switch < 0.5000000000F) {
          tmp0 = (uint8_T)(0U);
        } else if (BaseEngineController_LS_B.s882_Switch > 1.4960937500F) {
          tmp0 = (uint8_T)(255U);
        } else {
          tmp0 = (uint8_T)((BaseEngineController_LS_B.s882_Switch -
                            (0.5000000000F)) * (256.0000000000F));
        }

        if (BaseEngineController_LS_B.s883_Switch < 0.5000000000F) {
          tmp1 = (uint8_T)(0U);
        } else if (BaseEngineController_LS_B.s883_Switch > 1.4960937500F) {
          tmp1 = (uint8_T)(255U);
        } else {
          tmp1 = (uint8_T)((BaseEngineController_LS_B.s883_Switch -
                            (0.5000000000F)) * (256.0000000000F));
        }

        if (rtb_Gain < 0.0000000000F) {
          tmp2 = (uint16_T)(0U);
        } else if (rtb_Gain > 411.9857775000F) {
          tmp2 = (uint16_T)(65535U);
        } else {
          tmp2 = (uint16_T)(rtb_Gain * (159.0710252128F));
        }

        if (BaseEngineController_LS_B.s409_MultiportSwitch < 0.0000000000F) {
          tmp3 = (uint8_T)(0U);
        } else if (BaseEngineController_LS_B.s409_MultiportSwitch >
                   255.0000000000F) {
          tmp3 = (uint8_T)(255U);
        } else {
          tmp3 = (uint8_T)(BaseEngineController_LS_B.s409_MultiportSwitch);
        }

        if (rtb_Sum1_a < -17.0000000000F) {
          tmp4 = (uint8_T)(0U);
        } else if (rtb_Sum1_a > 72.6478000000F) {
          tmp4 = (uint8_T)(254U);
        } else {
          tmp4 = (uint8_T)((rtb_Sum1_a - (-17.0000000000F)) * (2.8444646717F));
        }

        if (rtb_Sum1_j2 < 0.0000000000F) {
          tmp5 = (uint16_T)(0U);
        } else if (rtb_Sum1_j2 > 16.0888425000F) {
          tmp5 = (uint16_T)(65535U);
        } else {
          tmp5 = (uint16_T)(rtb_Sum1_j2 * (4073.3197556008F));
        }

        msg_data[0] = ((((uint8_T *)(&tmp0))[0])) ;
        msg_data[1] = ((((uint8_T *)(&tmp1))[0])) ;
        msg_data[2] = ((((uint8_T *)(&tmp2))[0])) ;
        msg_data[3] = ((((uint8_T *)(&tmp2))[1])) ;
        msg_data[4] = ((((uint8_T *)(&tmp3))[0])) ;
        msg_data[5] = ((((uint8_T *)(&tmp4))[0])) ;
        msg_data[6] = ((((uint8_T *)(&tmp5))[0])) ;
        msg_data[7] = ((((uint8_T *)(&tmp5))[1])) ;
        CAN_1_Transmit(1, 0x1f0a003UL, 8, msg_data);
      }

      LastTxtime32 = time32;
    }
  }

  /* UnitDelay: '<S882>/Unit Delay1' */
  rtb_UnitDelay1_ad = BaseEngineController_LS_DWork.s882_UnitDelay1_DSTATE;

  /* UnitDelay: '<S882>/Unit Delay3' */
  rtb_UnitDelay3_m = BaseEngineController_LS_DWork.s882_UnitDelay3_DSTATE;

  /* UnitDelay: '<S882>/Unit Delay4' */
  rtb_UnitDelay4_b = BaseEngineController_LS_DWork.s882_UnitDelay4_DSTATE;

  /* UnitDelay: '<S883>/Unit Delay1' */
  rtb_UnitDelay1_pn = BaseEngineController_LS_DWork.s883_UnitDelay1_DSTATE;

  /* UnitDelay: '<S883>/Unit Delay3' */
  rtb_UnitDelay3_p = BaseEngineController_LS_DWork.s883_UnitDelay3_DSTATE;

  /* UnitDelay: '<S883>/Unit Delay4' */
  rtb_UnitDelay4_a = BaseEngineController_LS_DWork.s883_UnitDelay4_DSTATE;

  /* S-Function Block: <S896>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s896_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_h = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S896>/Product' incorporates:
   *  MinMax: '<S896>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S896>/motohawk_calibration'
   */
  rtb_Switch_h /= (rtb_Switch_h >= (MAP_filt_DataStore())) || rtIsNaN
    ((MAP_filt_DataStore())) ? rtb_Switch_h : (MAP_filt_DataStore());

  /* Sum: '<S899>/Sum1' incorporates:
   *  Constant: '<S899>/Constant'
   *  Product: '<S899>/Product'
   *  Product: '<S899>/Product1'
   *  Sum: '<S899>/Sum'
   *  UnitDelay: '<S899>/Unit Delay'
   */
  rtb_Sum1_cn = (1.0 - rtb_Switch_h) *
    BaseEngineController_LS_DWork.s899_UnitDelay_DSTATE +
    BaseEngineController_LS_B.s659_Merge * rtb_Switch_h;

  /* S-Function (motohawk_sfun_data_read): '<S866>/motohawk_data_read' */
  rtb_motohawk_data_read_i4 = VEFin_DataStore();

  /* S-Function Block: <S647>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s647_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_h = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S647>/Product' incorporates:
   *  MinMax: '<S647>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S647>/motohawk_calibration'
   */
  rtb_Switch_h /= (rtb_Switch_h >= (FuelPresFilterConst_DataStore())) || rtIsNaN
    ((FuelPresFilterConst_DataStore())) ? rtb_Switch_h :
    (FuelPresFilterConst_DataStore());

  /* Logic: '<S619>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S619>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S619>/motohawk_fault_status4'
   */
  rtb_RelationalOperator5_fz = (IsFaultActive(60) || IsFaultActive(61));

  /* Logic: '<S619>/Logical Operator6' */
  rtb_LogicalOperator6_b = !rtb_RelationalOperator5_fz;

  /* Logic: '<S619>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S619>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S619>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_al = (IsFaultSuspected(60) || IsFaultSuspected(61));

  /* S-Function Block: <S444>/motohawk_ain2 Resource: FuelPresPin */
  {
    extern NativeError_S FuelPresPin_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    FuelPresPin_AnalogInput_Get(&BaseEngineController_LS_B.s444_motohawk_ain2,
      NULL);
  }

  /* DataTypeConversion: '<S619>/Data Type Conversion' */
  rtb_DataTypeConversion_gx = (real_T)
    BaseEngineController_LS_B.s444_motohawk_ain2;

  /* Product: '<S619>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S619>/motohawk_calibration4'
   */
  rtb_DataTypeConversion1_e = rtb_DataTypeConversion_gx *
    (FuelPresGain_DataStore());

  /* Sum: '<S619>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S619>/motohawk_calibration5'
   */
  BaseEngineController_LS_B.s619_Sum1 = rtb_DataTypeConversion1_e +
    (FuelPresOfst_DataStore());

  /* UnitDelay: '<S619>/Unit Delay1' */
  rtb_UnitDelay1_pd = BaseEngineController_LS_DWork.s619_UnitDelay1_DSTATE;

  /* If: '<S619>/If' incorporates:
   *  Logic: '<S619>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_b && rtb_LogicalOperator1_al) {
    /* Outputs for IfAction SubSystem: '<S619>/If Action Subsystem' incorporates:
     *  ActionPort: '<S648>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay1_pd, &rtb_Merge_b3f);

    /* End of Outputs for SubSystem: '<S619>/If Action Subsystem' */
  } else if (rtb_RelationalOperator5_fz) {
    /* Outputs for IfAction SubSystem: '<S619>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S649>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((FuelPresDfltValue_DataStore()),
      &rtb_Merge_b3f);

    /* End of Outputs for SubSystem: '<S619>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S619>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S650>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      (BaseEngineController_LS_B.s619_Sum1, &rtb_Merge_b3f);

    /* End of Outputs for SubSystem: '<S619>/If Action Subsystem2' */
  }

  /* End of If: '<S619>/If' */

  /* Sum: '<S652>/Sum1' incorporates:
   *  Constant: '<S652>/Constant'
   *  Product: '<S652>/Product'
   *  Product: '<S652>/Product1'
   *  Sum: '<S652>/Sum'
   *  UnitDelay: '<S652>/Unit Delay'
   */
  rtb_Sum1_cs = (1.0 - rtb_Switch_h) *
    BaseEngineController_LS_DWork.s652_UnitDelay_DSTATE + rtb_Merge_b3f *
    rtb_Switch_h;

  /* If: '<S651>/If' incorporates:
   *  Inport: '<S653>/In1'
   *  Inport: '<S654>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S651>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S651>/override_enable'
   */
  if ((FuelPres_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S651>/NewValue' incorporates:
     *  ActionPort: '<S653>/Action Port'
     */
    BaseEngineController_LS_B.s651_Merge = (FuelPres_new_DataStore());

    /* End of Outputs for SubSystem: '<S651>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S651>/OldValue' incorporates:
     *  ActionPort: '<S654>/Action Port'
     */
    BaseEngineController_LS_B.s651_Merge = rtb_Sum1_cs;

    /* End of Outputs for SubSystem: '<S651>/OldValue' */
  }

  /* End of If: '<S651>/If' */

  /* Gain: '<S866>/Gain' */
  rtb_DataTypeConversion1_e = 0.01 * BaseEngineController_LS_B.s651_Merge;

  /* S-Function Block: <S897>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s897_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_h = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S897>/Product' incorporates:
   *  MinMax: '<S897>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S897>/motohawk_calibration'
   */
  rtb_Switch_h /= (rtb_Switch_h >= (FuelPres_Filt_DataStore())) || rtIsNaN
    ((FuelPres_Filt_DataStore())) ? rtb_Switch_h : (FuelPres_Filt_DataStore());

  /* Sum: '<S900>/Sum1' incorporates:
   *  Constant: '<S900>/Constant'
   *  Product: '<S900>/Product'
   *  Product: '<S900>/Product1'
   *  Sum: '<S900>/Sum'
   *  UnitDelay: '<S900>/Unit Delay'
   */
  rtb_Sum1_ay = (1.0 - rtb_Switch_h) *
    BaseEngineController_LS_DWork.s900_UnitDelay_DSTATE +
    rtb_DataTypeConversion1_e * rtb_Switch_h;

  /* S-Function Block: <S673>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s673_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_h = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S673>/Product' incorporates:
   *  MinMax: '<S673>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S673>/motohawk_calibration'
   */
  rtb_Switch_h /= (rtb_Switch_h >= (OilPresFilterConst_DataStore())) || rtIsNaN
    ((OilPresFilterConst_DataStore())) ? rtb_Switch_h :
    (OilPresFilterConst_DataStore());

  /* Logic: '<S623>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S623>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S623>/motohawk_fault_status4'
   */
  rtb_RelationalOperator5_fz = (IsFaultActive(101) || IsFaultActive(102));

  /* Logic: '<S623>/Logical Operator6' */
  rtb_LogicalOperator6_b = !rtb_RelationalOperator5_fz;

  /* Logic: '<S623>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S623>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S623>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_al = (IsFaultSuspected(101) || IsFaultSuspected(102));

  /* S-Function Block: <S444>/motohawk_ain1 Resource: OilPresPin */
  {
    extern NativeError_S OilPresPin_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    OilPresPin_AnalogInput_Get(&BaseEngineController_LS_B.s444_motohawk_ain1,
      NULL);
  }

  /* DataTypeConversion: '<S623>/Data Type Conversion' */
  rtb_DataTypeConversion_m0 = (real_T)
    BaseEngineController_LS_B.s444_motohawk_ain1;

  /* Product: '<S623>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S623>/motohawk_calibration4'
   */
  rtb_DataTypeConversion1_e = rtb_DataTypeConversion_m0 * (OilPresGain_DataStore
    ());

  /* Sum: '<S623>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S623>/motohawk_calibration5'
   */
  BaseEngineController_LS_B.s623_Sum1 = rtb_DataTypeConversion1_e +
    (OilPresOfst_DataStore());

  /* UnitDelay: '<S623>/Unit Delay1' */
  rtb_UnitDelay1_aa = BaseEngineController_LS_DWork.s623_UnitDelay1_DSTATE;

  /* If: '<S623>/If' incorporates:
   *  Logic: '<S623>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_b && rtb_LogicalOperator1_al) {
    /* Outputs for IfAction SubSystem: '<S623>/If Action Subsystem' incorporates:
     *  ActionPort: '<S674>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay1_aa, &rtb_Merge_ol);

    /* End of Outputs for SubSystem: '<S623>/If Action Subsystem' */
  } else if (rtb_RelationalOperator5_fz) {
    /* Outputs for IfAction SubSystem: '<S623>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S675>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((OilPresDfltValue_DataStore()),
      &rtb_Merge_ol);

    /* End of Outputs for SubSystem: '<S623>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S623>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S676>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      (BaseEngineController_LS_B.s623_Sum1, &rtb_Merge_ol);

    /* End of Outputs for SubSystem: '<S623>/If Action Subsystem2' */
  }

  /* End of If: '<S623>/If' */

  /* Sum: '<S678>/Sum1' incorporates:
   *  Constant: '<S678>/Constant'
   *  Product: '<S678>/Product'
   *  Product: '<S678>/Product1'
   *  Sum: '<S678>/Sum'
   *  UnitDelay: '<S678>/Unit Delay'
   */
  rtb_Sum1_o = (1.0 - rtb_Switch_h) *
    BaseEngineController_LS_DWork.s678_UnitDelay_DSTATE + rtb_Merge_ol *
    rtb_Switch_h;

  /* If: '<S677>/If' incorporates:
   *  Inport: '<S679>/In1'
   *  Inport: '<S680>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S677>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S677>/override_enable'
   */
  if ((OilPres_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S677>/NewValue' incorporates:
     *  ActionPort: '<S679>/Action Port'
     */
    BaseEngineController_LS_B.s677_Merge = (OilPres_new_DataStore());

    /* End of Outputs for SubSystem: '<S677>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S677>/OldValue' incorporates:
     *  ActionPort: '<S680>/Action Port'
     */
    BaseEngineController_LS_B.s677_Merge = rtb_Sum1_o;

    /* End of Outputs for SubSystem: '<S677>/OldValue' */
  }

  /* End of If: '<S677>/If' */

  /* Gain: '<S866>/Gain1' */
  rtb_DataTypeConversion1_e = 0.068948 * BaseEngineController_LS_B.s677_Merge;

  /* S-Function Block: <S898>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s898_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_h = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S898>/Product' incorporates:
   *  MinMax: '<S898>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S898>/motohawk_calibration'
   */
  rtb_Switch_h /= (rtb_Switch_h >= (OilPres_Filt_DataStore())) || rtIsNaN
    ((OilPres_Filt_DataStore())) ? rtb_Switch_h : (OilPres_Filt_DataStore());

  /* Sum: '<S901>/Sum1' incorporates:
   *  Constant: '<S901>/Constant'
   *  Product: '<S901>/Product'
   *  Product: '<S901>/Product1'
   *  Sum: '<S901>/Sum'
   *  UnitDelay: '<S901>/Unit Delay'
   */
  rtb_Sum1_co = (1.0 - rtb_Switch_h) *
    BaseEngineController_LS_DWork.s901_UnitDelay_DSTATE +
    rtb_DataTypeConversion1_e * rtb_Switch_h;

  /* S-Function (motohawk_sfun_data_read): '<S866>/motohawk_data_read1' */
  rtb_Switch_h = BaseEquivRatio_DataStore();

  /* Math: '<S866>/Math Function' incorporates:
   *  Saturate: '<S866>/Saturation'
   *
   * About '<S866>/Math Function':
   *  Operator: reciprocal
   */
  rtb_MathFunction = 1.0 / (rtb_Switch_h >= 0.01 ? rtb_Switch_h : 0.01);

  /* Switch: '<S143>/Switch' incorporates:
   *  Constant: '<S143>/OFF'
   *  Logic: '<S143>/Logical Operator'
   *  S-Function (motohawk_sfun_data_read): '<S143>/motohawk_data_read'
   *  S-Function (motohawk_sfun_data_read): '<S143>/motohawk_data_read1'
   */
  if (DelayedEngineShutdownAction_DataStore() || EngineShutdownAction_DataStore())
  {
    rtb_RelationalOperator5_fz = FALSE;
  } else {
    rtb_RelationalOperator5_fz = BaseEngineController_LS_B.s135_FUELP;
  }

  /* End of Switch: '<S143>/Switch' */

  /* S-Function (motohawk_sfun_data_read): '<S866>/motohawk_data_read2' */
  rtb_motohawk_data_read2_l = O2CtrlMode_DataStore();

  /* S-Function (motohawk_sfun_fault_action): '<S866>/motohawk_fault_action'
   *
   * Regarding '<S866>/motohawk_fault_action':
     Get Fault Action Status: EngineProtectLED
   */
  {
    extern boolean_T GetFaultActionStatus(uint32_T action);
    rtb_motohawk_fault_action_o = GetFaultActionStatus(7);
  }

  /* S-Function (motohawk_sfun_fault_action): '<S866>/motohawk_fault_action1'
   *
   * Regarding '<S866>/motohawk_fault_action1':
     Get Fault Action Status: MIL_LED
   */
  {
    extern boolean_T GetFaultActionStatus(uint32_T action);
    rtb_motohawk_fault_action1_a = GetFaultActionStatus(10);
  }

  /* S-Function (motohawk_sfun_fault_status): '<S866>/motohawk_fault_status2'
   *
   * Regarding '<S866>/motohawk_fault_status2':
     Status : "Active"
   */
  {
    extern boolean_T IsFaultActive(uint32_T fault);
    rtb_motohawk_fault_status2_f2 = IsFaultActive(86);
  }

  /* S-Function (motohawk_sfun_fault_status): '<S866>/motohawk_fault_status1'
   *
   * Regarding '<S866>/motohawk_fault_status1':
     Status : "Active"
   */
  {
    extern boolean_T IsFaultActive(uint32_T fault);
    rtb_motohawk_fault_status1_i = IsFaultActive(97);
  }

  /* S-Function (motohawk_sfun_fault_action): '<S22>/motohawk_fault_action1'
   *
   * Regarding '<S22>/motohawk_fault_action1':
     Get Fault Action Status: SoftRevLimit
   */
  {
    extern boolean_T GetFaultActionStatus(uint32_T action);
    rtb_motohawk_fault_action1_o = GetFaultActionStatus(12);
  }

  /* S-Function (motohawk_sfun_fault_action): '<S22>/motohawk_fault_action2'
   *
   * Regarding '<S22>/motohawk_fault_action2':
     Get Fault Action Status: MediumRevLimit
   */
  {
    extern boolean_T GetFaultActionStatus(uint32_T action);
    rtb_motohawk_fault_action2 = GetFaultActionStatus(11);
  }

  /* S-Function (motohawk_sfun_fault_action): '<S22>/motohawk_fault_action3'
   *
   * Regarding '<S22>/motohawk_fault_action3':
     Get Fault Action Status: HardRevLimit
   */
  {
    extern boolean_T GetFaultActionStatus(uint32_T action);
    rtb_motohawk_fault_action3 = GetFaultActionStatus(9);
  }

  /* Logic: '<S22>/Logical Operator4' */
  rtb_LogicalOperator6_b = (rtb_motohawk_fault_action1_o ||
    rtb_motohawk_fault_action2 || rtb_motohawk_fault_action3);

  /* Logic: '<S22>/Logical Operator5' */
  rtb_RelationalOperator6_h = !BaseEngineController_LS_B.s592_Merge;

  /* Switch: '<S22>/Switch' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S122>/motohawk_calibration10'
   *  S-Function (motohawk_sfun_calibration): '<S122>/motohawk_calibration11'
   *  S-Function (motohawk_sfun_calibration): '<S122>/motohawk_calibration12'
   *  S-Function (motohawk_sfun_calibration): '<S122>/motohawk_calibration13'
   *  S-Function (motohawk_sfun_calibration): '<S122>/motohawk_calibration14'
   *  S-Function (motohawk_sfun_calibration): '<S122>/motohawk_calibration15'
   *  S-Function (motohawk_sfun_calibration): '<S122>/motohawk_calibration8'
   *  S-Function (motohawk_sfun_calibration): '<S122>/motohawk_calibration9'
   *  S-Function (motohawk_sfun_calibration): '<S123>/motohawk_calibration10'
   *  S-Function (motohawk_sfun_calibration): '<S123>/motohawk_calibration11'
   *  S-Function (motohawk_sfun_calibration): '<S123>/motohawk_calibration12'
   *  S-Function (motohawk_sfun_calibration): '<S123>/motohawk_calibration13'
   *  S-Function (motohawk_sfun_calibration): '<S123>/motohawk_calibration14'
   *  S-Function (motohawk_sfun_calibration): '<S123>/motohawk_calibration15'
   *  S-Function (motohawk_sfun_calibration): '<S123>/motohawk_calibration8'
   *  S-Function (motohawk_sfun_calibration): '<S123>/motohawk_calibration9'
   *  S-Function (motohawk_sfun_calibration): '<S124>/motohawk_calibration10'
   *  S-Function (motohawk_sfun_calibration): '<S124>/motohawk_calibration11'
   *  S-Function (motohawk_sfun_calibration): '<S124>/motohawk_calibration12'
   *  S-Function (motohawk_sfun_calibration): '<S124>/motohawk_calibration13'
   *  S-Function (motohawk_sfun_calibration): '<S124>/motohawk_calibration14'
   *  S-Function (motohawk_sfun_calibration): '<S124>/motohawk_calibration15'
   *  S-Function (motohawk_sfun_calibration): '<S124>/motohawk_calibration8'
   *  S-Function (motohawk_sfun_calibration): '<S124>/motohawk_calibration9'
   *  S-Function (motohawk_sfun_calibration): '<S125>/motohawk_calibration10'
   *  S-Function (motohawk_sfun_calibration): '<S125>/motohawk_calibration11'
   *  S-Function (motohawk_sfun_calibration): '<S125>/motohawk_calibration12'
   *  S-Function (motohawk_sfun_calibration): '<S125>/motohawk_calibration13'
   *  S-Function (motohawk_sfun_calibration): '<S125>/motohawk_calibration14'
   *  S-Function (motohawk_sfun_calibration): '<S125>/motohawk_calibration15'
   *  S-Function (motohawk_sfun_calibration): '<S125>/motohawk_calibration8'
   *  S-Function (motohawk_sfun_calibration): '<S125>/motohawk_calibration9'
   *  S-Function (motohawk_sfun_calibration): '<S126>/motohawk_calibration10'
   *  S-Function (motohawk_sfun_calibration): '<S126>/motohawk_calibration11'
   *  S-Function (motohawk_sfun_calibration): '<S126>/motohawk_calibration12'
   *  S-Function (motohawk_sfun_calibration): '<S126>/motohawk_calibration13'
   *  S-Function (motohawk_sfun_calibration): '<S126>/motohawk_calibration14'
   *  S-Function (motohawk_sfun_calibration): '<S126>/motohawk_calibration15'
   *  S-Function (motohawk_sfun_calibration): '<S126>/motohawk_calibration8'
   *  S-Function (motohawk_sfun_calibration): '<S126>/motohawk_calibration9'
   *  S-Function (motohawk_sfun_calibration): '<S127>/motohawk_calibration10'
   *  S-Function (motohawk_sfun_calibration): '<S127>/motohawk_calibration11'
   *  S-Function (motohawk_sfun_calibration): '<S127>/motohawk_calibration12'
   *  S-Function (motohawk_sfun_calibration): '<S127>/motohawk_calibration13'
   *  S-Function (motohawk_sfun_calibration): '<S127>/motohawk_calibration14'
   *  S-Function (motohawk_sfun_calibration): '<S127>/motohawk_calibration15'
   *  S-Function (motohawk_sfun_calibration): '<S127>/motohawk_calibration8'
   *  S-Function (motohawk_sfun_calibration): '<S127>/motohawk_calibration9'
   *  S-Function (motohawk_sfun_calibration): '<S128>/motohawk_calibration10'
   *  S-Function (motohawk_sfun_calibration): '<S128>/motohawk_calibration11'
   *  S-Function (motohawk_sfun_calibration): '<S128>/motohawk_calibration12'
   *  S-Function (motohawk_sfun_calibration): '<S128>/motohawk_calibration13'
   *  S-Function (motohawk_sfun_calibration): '<S128>/motohawk_calibration14'
   *  S-Function (motohawk_sfun_calibration): '<S128>/motohawk_calibration15'
   *  S-Function (motohawk_sfun_calibration): '<S128>/motohawk_calibration8'
   *  S-Function (motohawk_sfun_calibration): '<S128>/motohawk_calibration9'
   *  S-Function (motohawk_sfun_calibration): '<S129>/motohawk_calibration10'
   *  S-Function (motohawk_sfun_calibration): '<S129>/motohawk_calibration11'
   *  S-Function (motohawk_sfun_calibration): '<S129>/motohawk_calibration12'
   *  S-Function (motohawk_sfun_calibration): '<S129>/motohawk_calibration13'
   *  S-Function (motohawk_sfun_calibration): '<S129>/motohawk_calibration14'
   *  S-Function (motohawk_sfun_calibration): '<S129>/motohawk_calibration15'
   *  S-Function (motohawk_sfun_calibration): '<S129>/motohawk_calibration8'
   *  S-Function (motohawk_sfun_calibration): '<S129>/motohawk_calibration9'
   */
  if (rtb_RelationalOperator6_h) {
    rtb_Switch_d4[0] = ((int8_T)(SoftCycle1Cyl1_DataStore()));
    rtb_Switch_d4[1] = ((int8_T)(SoftCycle1Cyl2_DataStore()));
    rtb_Switch_d4[2] = ((int8_T)(SoftCycle1Cyl3_DataStore()));
    rtb_Switch_d4[3] = ((int8_T)(SoftCycle1Cyl4_DataStore()));
    rtb_Switch_d4[4] = ((int8_T)(SoftCycle1Cyl5_DataStore()));
    rtb_Switch_d4[5] = ((int8_T)(SoftCycle1Cyl6_DataStore()));
    rtb_Switch_d4[6] = ((int8_T)(SoftCycle1Cyl7_DataStore()));
    rtb_Switch_d4[7] = ((int8_T)(SoftCycle1Cyl8_DataStore()));
    rtb_Switch_d4[8] = ((int8_T)(SoftCycle2Cyl1_DataStore()));
    rtb_Switch_d4[9] = ((int8_T)(SoftCycle2Cyl2_DataStore()));
    rtb_Switch_d4[10] = ((int8_T)(SoftCycle2Cyl3_DataStore()));
    rtb_Switch_d4[11] = ((int8_T)(SoftCycle2Cyl4_DataStore()));
    rtb_Switch_d4[12] = ((int8_T)(SoftCycle2Cyl5_DataStore()));
    rtb_Switch_d4[13] = ((int8_T)(SoftCycle2Cyl6_DataStore()));
    rtb_Switch_d4[14] = ((int8_T)(SoftCycle2Cyl7_DataStore()));
    rtb_Switch_d4[15] = ((int8_T)(SoftCycle2Cyl8_DataStore()));
    rtb_Switch_d4[16] = ((int8_T)(SoftCycle3Cyl1_DataStore()));
    rtb_Switch_d4[17] = ((int8_T)(SoftCycle3Cyl2_DataStore()));
    rtb_Switch_d4[18] = ((int8_T)(SoftCycle3Cyl3_DataStore()));
    rtb_Switch_d4[19] = ((int8_T)(SoftCycle3Cyl4_DataStore()));
    rtb_Switch_d4[20] = ((int8_T)(SoftCycle3Cyl5_DataStore()));
    rtb_Switch_d4[21] = ((int8_T)(SoftCycle3Cyl6_DataStore()));
    rtb_Switch_d4[22] = ((int8_T)(SoftCycle3Cyl7_DataStore()));
    rtb_Switch_d4[23] = ((int8_T)(SoftCycle3Cyl8_DataStore()));
    rtb_Switch_d4[24] = ((int8_T)(SoftCycle4Cyl1_DataStore()));
    rtb_Switch_d4[25] = ((int8_T)(SoftCycle4Cyl2_DataStore()));
    rtb_Switch_d4[26] = ((int8_T)(SoftCycle4Cyl3_DataStore()));
    rtb_Switch_d4[27] = ((int8_T)(SoftCycle4Cyl4_DataStore()));
    rtb_Switch_d4[28] = ((int8_T)(SoftCycle4Cyl5_DataStore()));
    rtb_Switch_d4[29] = ((int8_T)(SoftCycle4Cyl6_DataStore()));
    rtb_Switch_d4[30] = ((int8_T)(SoftCycle4Cyl7_DataStore()));
    rtb_Switch_d4[31] = ((int8_T)(SoftCycle4Cyl8_DataStore()));
  } else {
    rtb_Switch_d4[0] = ((int8_T)(SoftCycle1Cyl1_TwoStep_DataStore()));
    rtb_Switch_d4[1] = ((int8_T)(SoftCycle1Cyl2_TwoStep_DataStore()));
    rtb_Switch_d4[2] = ((int8_T)(SoftCycle1Cyl3_TwoStep_DataStore()));
    rtb_Switch_d4[3] = ((int8_T)(SoftCycle1Cyl4_TwoStep_DataStore()));
    rtb_Switch_d4[4] = ((int8_T)(SoftCycle1Cyl5_TwoStep_DataStore()));
    rtb_Switch_d4[5] = ((int8_T)(SoftCycle1Cyl6_TwoStep_DataStore()));
    rtb_Switch_d4[6] = ((int8_T)(SoftCycle1Cyl7_TwoStep_DataStore()));
    rtb_Switch_d4[7] = ((int8_T)(SoftCycle1Cyl8_TwoStep_DataStore()));
    rtb_Switch_d4[8] = ((int8_T)(SoftCycle2Cyl1_TwoStep_DataStore()));
    rtb_Switch_d4[9] = ((int8_T)(SoftCycle2Cyl2_TwoStep_DataStore()));
    rtb_Switch_d4[10] = ((int8_T)(SoftCycle2Cyl3_TwoStep_DataStore()));
    rtb_Switch_d4[11] = ((int8_T)(SoftCycle2Cyl4_TwoStep_DataStore()));
    rtb_Switch_d4[12] = ((int8_T)(SoftCycle2Cyl5_TwoStep_DataStore()));
    rtb_Switch_d4[13] = ((int8_T)(SoftCycle2Cyl6_TwoStep_DataStore()));
    rtb_Switch_d4[14] = ((int8_T)(SoftCycle2Cyl7_TwoStep_DataStore()));
    rtb_Switch_d4[15] = ((int8_T)(SoftCycle2Cyl8_TwoStep_DataStore()));
    rtb_Switch_d4[16] = ((int8_T)(SoftCycle3Cyl1_TwoStep_DataStore()));
    rtb_Switch_d4[17] = ((int8_T)(SoftCycle3Cyl2_TwoStep_DataStore()));
    rtb_Switch_d4[18] = ((int8_T)(SoftCycle3Cyl3_TwoStep_DataStore()));
    rtb_Switch_d4[19] = ((int8_T)(SoftCycle3Cyl4_TwoStep_DataStore()));
    rtb_Switch_d4[20] = ((int8_T)(SoftCycle3Cyl5_TwoStep_DataStore()));
    rtb_Switch_d4[21] = ((int8_T)(SoftCycle3Cyl6_TwoStep_DataStore()));
    rtb_Switch_d4[22] = ((int8_T)(SoftCycle3Cyl7_TwoStep_DataStore()));
    rtb_Switch_d4[23] = ((int8_T)(SoftCycle3Cyl8_TwoStep_DataStore()));
    rtb_Switch_d4[24] = ((int8_T)(SoftCycle4Cyl1_TwoStep_DataStore()));
    rtb_Switch_d4[25] = ((int8_T)(SoftCycle4Cyl2_TwoStep_DataStore()));
    rtb_Switch_d4[26] = ((int8_T)(SoftCycle4Cyl3_TwoStep_DataStore()));
    rtb_Switch_d4[27] = ((int8_T)(SoftCycle4Cyl4_TwoStep_DataStore()));
    rtb_Switch_d4[28] = ((int8_T)(SoftCycle4Cyl5_TwoStep_DataStore()));
    rtb_Switch_d4[29] = ((int8_T)(SoftCycle4Cyl6_TwoStep_DataStore()));
    rtb_Switch_d4[30] = ((int8_T)(SoftCycle4Cyl7_TwoStep_DataStore()));
    rtb_Switch_d4[31] = ((int8_T)(SoftCycle4Cyl8_TwoStep_DataStore()));
  }

  /* End of Switch: '<S22>/Switch' */

  /* Outputs for Enabled SubSystem: '<S22>/PassThrough1' incorporates:
   *  EnablePort: '<S97>/Enable'
   */
  if (rtb_motohawk_fault_action1_o) {
    if (!BaseEngineController_LS_DWork.s22_PassThrough1_MODE) {
      BaseEngineController_LS_DWork.s22_PassThrough1_MODE = TRUE;
    }

    /* Inport: '<S97>/In1' */
    for (i = 0; i < 32; i++) {
      BaseEngineController_LS_B.s22_Merge1[i] = rtb_Switch_d4[i];
    }

    /* End of Inport: '<S97>/In1' */
  } else {
    if (BaseEngineController_LS_DWork.s22_PassThrough1_MODE) {
      /* Disable for Outport: '<S97>/Out1' */
      for (i = 0; i < 32; i++) {
        BaseEngineController_LS_B.s22_Merge1[i] = 0;
      }

      /* End of Outport: '<S97>/Out1' */
      BaseEngineController_LS_DWork.s22_PassThrough1_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S22>/PassThrough1' */

  /* Switch: '<S22>/Switch1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S113>/motohawk_calibration10'
   *  S-Function (motohawk_sfun_calibration): '<S113>/motohawk_calibration11'
   *  S-Function (motohawk_sfun_calibration): '<S113>/motohawk_calibration12'
   *  S-Function (motohawk_sfun_calibration): '<S113>/motohawk_calibration13'
   *  S-Function (motohawk_sfun_calibration): '<S113>/motohawk_calibration14'
   *  S-Function (motohawk_sfun_calibration): '<S113>/motohawk_calibration15'
   *  S-Function (motohawk_sfun_calibration): '<S113>/motohawk_calibration8'
   *  S-Function (motohawk_sfun_calibration): '<S113>/motohawk_calibration9'
   *  S-Function (motohawk_sfun_calibration): '<S114>/motohawk_calibration10'
   *  S-Function (motohawk_sfun_calibration): '<S114>/motohawk_calibration11'
   *  S-Function (motohawk_sfun_calibration): '<S114>/motohawk_calibration12'
   *  S-Function (motohawk_sfun_calibration): '<S114>/motohawk_calibration13'
   *  S-Function (motohawk_sfun_calibration): '<S114>/motohawk_calibration14'
   *  S-Function (motohawk_sfun_calibration): '<S114>/motohawk_calibration15'
   *  S-Function (motohawk_sfun_calibration): '<S114>/motohawk_calibration8'
   *  S-Function (motohawk_sfun_calibration): '<S114>/motohawk_calibration9'
   *  S-Function (motohawk_sfun_calibration): '<S115>/motohawk_calibration10'
   *  S-Function (motohawk_sfun_calibration): '<S115>/motohawk_calibration11'
   *  S-Function (motohawk_sfun_calibration): '<S115>/motohawk_calibration12'
   *  S-Function (motohawk_sfun_calibration): '<S115>/motohawk_calibration13'
   *  S-Function (motohawk_sfun_calibration): '<S115>/motohawk_calibration14'
   *  S-Function (motohawk_sfun_calibration): '<S115>/motohawk_calibration15'
   *  S-Function (motohawk_sfun_calibration): '<S115>/motohawk_calibration8'
   *  S-Function (motohawk_sfun_calibration): '<S115>/motohawk_calibration9'
   *  S-Function (motohawk_sfun_calibration): '<S116>/motohawk_calibration10'
   *  S-Function (motohawk_sfun_calibration): '<S116>/motohawk_calibration11'
   *  S-Function (motohawk_sfun_calibration): '<S116>/motohawk_calibration12'
   *  S-Function (motohawk_sfun_calibration): '<S116>/motohawk_calibration13'
   *  S-Function (motohawk_sfun_calibration): '<S116>/motohawk_calibration14'
   *  S-Function (motohawk_sfun_calibration): '<S116>/motohawk_calibration15'
   *  S-Function (motohawk_sfun_calibration): '<S116>/motohawk_calibration8'
   *  S-Function (motohawk_sfun_calibration): '<S116>/motohawk_calibration9'
   *  S-Function (motohawk_sfun_calibration): '<S117>/motohawk_calibration10'
   *  S-Function (motohawk_sfun_calibration): '<S117>/motohawk_calibration11'
   *  S-Function (motohawk_sfun_calibration): '<S117>/motohawk_calibration12'
   *  S-Function (motohawk_sfun_calibration): '<S117>/motohawk_calibration13'
   *  S-Function (motohawk_sfun_calibration): '<S117>/motohawk_calibration14'
   *  S-Function (motohawk_sfun_calibration): '<S117>/motohawk_calibration15'
   *  S-Function (motohawk_sfun_calibration): '<S117>/motohawk_calibration8'
   *  S-Function (motohawk_sfun_calibration): '<S117>/motohawk_calibration9'
   *  S-Function (motohawk_sfun_calibration): '<S118>/motohawk_calibration10'
   *  S-Function (motohawk_sfun_calibration): '<S118>/motohawk_calibration11'
   *  S-Function (motohawk_sfun_calibration): '<S118>/motohawk_calibration12'
   *  S-Function (motohawk_sfun_calibration): '<S118>/motohawk_calibration13'
   *  S-Function (motohawk_sfun_calibration): '<S118>/motohawk_calibration14'
   *  S-Function (motohawk_sfun_calibration): '<S118>/motohawk_calibration15'
   *  S-Function (motohawk_sfun_calibration): '<S118>/motohawk_calibration8'
   *  S-Function (motohawk_sfun_calibration): '<S118>/motohawk_calibration9'
   *  S-Function (motohawk_sfun_calibration): '<S119>/motohawk_calibration10'
   *  S-Function (motohawk_sfun_calibration): '<S119>/motohawk_calibration11'
   *  S-Function (motohawk_sfun_calibration): '<S119>/motohawk_calibration12'
   *  S-Function (motohawk_sfun_calibration): '<S119>/motohawk_calibration13'
   *  S-Function (motohawk_sfun_calibration): '<S119>/motohawk_calibration14'
   *  S-Function (motohawk_sfun_calibration): '<S119>/motohawk_calibration15'
   *  S-Function (motohawk_sfun_calibration): '<S119>/motohawk_calibration8'
   *  S-Function (motohawk_sfun_calibration): '<S119>/motohawk_calibration9'
   *  S-Function (motohawk_sfun_calibration): '<S120>/motohawk_calibration10'
   *  S-Function (motohawk_sfun_calibration): '<S120>/motohawk_calibration11'
   *  S-Function (motohawk_sfun_calibration): '<S120>/motohawk_calibration12'
   *  S-Function (motohawk_sfun_calibration): '<S120>/motohawk_calibration13'
   *  S-Function (motohawk_sfun_calibration): '<S120>/motohawk_calibration14'
   *  S-Function (motohawk_sfun_calibration): '<S120>/motohawk_calibration15'
   *  S-Function (motohawk_sfun_calibration): '<S120>/motohawk_calibration8'
   *  S-Function (motohawk_sfun_calibration): '<S120>/motohawk_calibration9'
   */
  if (rtb_RelationalOperator6_h) {
    rtb_Switch_d4[0] = ((int8_T)(MediumCycle1Cyl1_DataStore()));
    rtb_Switch_d4[1] = ((int8_T)(MediumCycle1Cyl2_DataStore()));
    rtb_Switch_d4[2] = ((int8_T)(MediumCycle1Cyl3_DataStore()));
    rtb_Switch_d4[3] = ((int8_T)(MediumCycle1Cyl4_DataStore()));
    rtb_Switch_d4[4] = ((int8_T)(MediumCycle1Cyl5_DataStore()));
    rtb_Switch_d4[5] = ((int8_T)(MediumCycle1Cyl6_DataStore()));
    rtb_Switch_d4[6] = ((int8_T)(MediumCycle1Cyl7_DataStore()));
    rtb_Switch_d4[7] = ((int8_T)(MediumCycle1Cyl8_DataStore()));
    rtb_Switch_d4[8] = ((int8_T)(MediumCycle2Cyl1_DataStore()));
    rtb_Switch_d4[9] = ((int8_T)(MediumCycle2Cyl2_DataStore()));
    rtb_Switch_d4[10] = ((int8_T)(MediumCycle2Cyl3_DataStore()));
    rtb_Switch_d4[11] = ((int8_T)(MediumCycle2Cyl4_DataStore()));
    rtb_Switch_d4[12] = ((int8_T)(MediumCycle2Cyl5_DataStore()));
    rtb_Switch_d4[13] = ((int8_T)(MediumCycle2Cyl6_DataStore()));
    rtb_Switch_d4[14] = ((int8_T)(MediumCycle2Cyl7_DataStore()));
    rtb_Switch_d4[15] = ((int8_T)(MediumCycle2Cyl8_DataStore()));
    rtb_Switch_d4[16] = ((int8_T)(MediumCycle3Cyl1_DataStore()));
    rtb_Switch_d4[17] = ((int8_T)(MediumCycle3Cyl2_DataStore()));
    rtb_Switch_d4[18] = ((int8_T)(MediumCycle3Cyl3_DataStore()));
    rtb_Switch_d4[19] = ((int8_T)(MediumCycle3Cyl4_DataStore()));
    rtb_Switch_d4[20] = ((int8_T)(MediumCycle3Cyl5_DataStore()));
    rtb_Switch_d4[21] = ((int8_T)(MediumCycle3Cyl6_DataStore()));
    rtb_Switch_d4[22] = ((int8_T)(MediumCycle3Cyl7_DataStore()));
    rtb_Switch_d4[23] = ((int8_T)(MediumCycle3Cyl8_DataStore()));
    rtb_Switch_d4[24] = ((int8_T)(MediumCycle4Cyl1_DataStore()));
    rtb_Switch_d4[25] = ((int8_T)(MediumCycle4Cyl2_DataStore()));
    rtb_Switch_d4[26] = ((int8_T)(MediumCycle4Cyl3_DataStore()));
    rtb_Switch_d4[27] = ((int8_T)(MediumCycle4Cyl4_DataStore()));
    rtb_Switch_d4[28] = ((int8_T)(MediumCycle4Cyl5_DataStore()));
    rtb_Switch_d4[29] = ((int8_T)(MediumCycle4Cyl6_DataStore()));
    rtb_Switch_d4[30] = ((int8_T)(MediumCycle4Cyl7_DataStore()));
    rtb_Switch_d4[31] = ((int8_T)(MediumCycle4Cyl8_DataStore()));
  } else {
    rtb_Switch_d4[0] = ((int8_T)(MediumCycle1Cyl1_TwoStep_DataStore()));
    rtb_Switch_d4[1] = ((int8_T)(MediumCycle1Cyl2_TwoStep_DataStore()));
    rtb_Switch_d4[2] = ((int8_T)(MediumCycle1Cyl3_TwoStep_DataStore()));
    rtb_Switch_d4[3] = ((int8_T)(MediumCycle1Cyl4_TwoStep_DataStore()));
    rtb_Switch_d4[4] = ((int8_T)(MediumCycle1Cyl5_TwoStep_DataStore()));
    rtb_Switch_d4[5] = ((int8_T)(MediumCycle1Cyl6_TwoStep_DataStore()));
    rtb_Switch_d4[6] = ((int8_T)(MediumCycle1Cyl7_TwoStep_DataStore()));
    rtb_Switch_d4[7] = ((int8_T)(MediumCycle1Cyl8_TwoStep_DataStore()));
    rtb_Switch_d4[8] = ((int8_T)(MediumCycle2Cyl1_TwoStep_DataStore()));
    rtb_Switch_d4[9] = ((int8_T)(MediumCycle2Cyl2_TwoStep_DataStore()));
    rtb_Switch_d4[10] = ((int8_T)(MediumCycle2Cyl3_TwoStep_DataStore()));
    rtb_Switch_d4[11] = ((int8_T)(MediumCycle2Cyl4_TwoStep_DataStore()));
    rtb_Switch_d4[12] = ((int8_T)(MediumCycle2Cyl5_TwoStep_DataStore()));
    rtb_Switch_d4[13] = ((int8_T)(MediumCycle2Cyl6_TwoStep_DataStore()));
    rtb_Switch_d4[14] = ((int8_T)(MediumCycle2Cyl7_TwoStep_DataStore()));
    rtb_Switch_d4[15] = ((int8_T)(MediumCycle2Cyl8_TwoStep_DataStore()));
    rtb_Switch_d4[16] = ((int8_T)(MediumCycle3Cyl1_TwoStep_DataStore()));
    rtb_Switch_d4[17] = ((int8_T)(MediumCycle3Cyl2_TwoStep_DataStore()));
    rtb_Switch_d4[18] = ((int8_T)(MediumCycle3Cyl3_TwoStep_DataStore()));
    rtb_Switch_d4[19] = ((int8_T)(MediumCycle3Cyl4_TwoStep_DataStore()));
    rtb_Switch_d4[20] = ((int8_T)(MediumCycle3Cyl5_TwoStep_DataStore()));
    rtb_Switch_d4[21] = ((int8_T)(MediumCycle3Cyl6_TwoStep_DataStore()));
    rtb_Switch_d4[22] = ((int8_T)(MediumCycle3Cyl7_TwoStep_DataStore()));
    rtb_Switch_d4[23] = ((int8_T)(MediumCycle3Cyl8_TwoStep_DataStore()));
    rtb_Switch_d4[24] = ((int8_T)(MediumCycle4Cyl1_TwoStep_DataStore()));
    rtb_Switch_d4[25] = ((int8_T)(MediumCycle4Cyl2_TwoStep_DataStore()));
    rtb_Switch_d4[26] = ((int8_T)(MediumCycle4Cyl3_TwoStep_DataStore()));
    rtb_Switch_d4[27] = ((int8_T)(MediumCycle4Cyl4_TwoStep_DataStore()));
    rtb_Switch_d4[28] = ((int8_T)(MediumCycle4Cyl5_TwoStep_DataStore()));
    rtb_Switch_d4[29] = ((int8_T)(MediumCycle4Cyl6_TwoStep_DataStore()));
    rtb_Switch_d4[30] = ((int8_T)(MediumCycle4Cyl7_TwoStep_DataStore()));
    rtb_Switch_d4[31] = ((int8_T)(MediumCycle4Cyl8_TwoStep_DataStore()));
  }

  /* End of Switch: '<S22>/Switch1' */

  /* Outputs for Enabled SubSystem: '<S22>/PassThrough2' incorporates:
   *  EnablePort: '<S98>/Enable'
   */
  if (rtb_motohawk_fault_action2) {
    /* Inport: '<S98>/In1' */
    for (i = 0; i < 32; i++) {
      BaseEngineController_LS_B.s22_Merge1[i] = rtb_Switch_d4[i];
    }

    /* End of Inport: '<S98>/In1' */
  }

  /* End of Outputs for SubSystem: '<S22>/PassThrough2' */

  /* Switch: '<S22>/Switch2' incorporates:
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
   *  S-Function (motohawk_sfun_calibration): '<S108>/motohawk_calibration10'
   *  S-Function (motohawk_sfun_calibration): '<S108>/motohawk_calibration11'
   *  S-Function (motohawk_sfun_calibration): '<S108>/motohawk_calibration12'
   *  S-Function (motohawk_sfun_calibration): '<S108>/motohawk_calibration13'
   *  S-Function (motohawk_sfun_calibration): '<S108>/motohawk_calibration14'
   *  S-Function (motohawk_sfun_calibration): '<S108>/motohawk_calibration15'
   *  S-Function (motohawk_sfun_calibration): '<S108>/motohawk_calibration8'
   *  S-Function (motohawk_sfun_calibration): '<S108>/motohawk_calibration9'
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
  if (rtb_RelationalOperator6_h) {
    rtb_Switch_d4[0] = ((int8_T)(HardCycle1Cyl1_DataStore()));
    rtb_Switch_d4[1] = ((int8_T)(HardCycle1Cyl2_DataStore()));
    rtb_Switch_d4[2] = ((int8_T)(HardCycle1Cyl3_DataStore()));
    rtb_Switch_d4[3] = ((int8_T)(HardCycle1Cyl4_DataStore()));
    rtb_Switch_d4[4] = ((int8_T)(HardCycle1Cyl5_DataStore()));
    rtb_Switch_d4[5] = ((int8_T)(HardCycle1Cyl6_DataStore()));
    rtb_Switch_d4[6] = ((int8_T)(HardCycle1Cyl7_DataStore()));
    rtb_Switch_d4[7] = ((int8_T)(HardCycle1Cyl8_DataStore()));
    rtb_Switch_d4[8] = ((int8_T)(HardCycle2Cyl1_DataStore()));
    rtb_Switch_d4[9] = ((int8_T)(HardCycle2Cyl2_DataStore()));
    rtb_Switch_d4[10] = ((int8_T)(HardCycle2Cyl3_DataStore()));
    rtb_Switch_d4[11] = ((int8_T)(HardCycle2Cyl4_DataStore()));
    rtb_Switch_d4[12] = ((int8_T)(HardCycle2Cyl5_DataStore()));
    rtb_Switch_d4[13] = ((int8_T)(HardCycle2Cyl6_DataStore()));
    rtb_Switch_d4[14] = ((int8_T)(HardCycle2Cyl7_DataStore()));
    rtb_Switch_d4[15] = ((int8_T)(HardCycle2Cyl8_DataStore()));
    rtb_Switch_d4[16] = ((int8_T)(HardCycle3Cyl1_DataStore()));
    rtb_Switch_d4[17] = ((int8_T)(HardCycle3Cyl2_DataStore()));
    rtb_Switch_d4[18] = ((int8_T)(HardCycle3Cyl3_DataStore()));
    rtb_Switch_d4[19] = ((int8_T)(HardCycle3Cyl4_DataStore()));
    rtb_Switch_d4[20] = ((int8_T)(HardCycle3Cyl5_DataStore()));
    rtb_Switch_d4[21] = ((int8_T)(HardCycle3Cyl6_DataStore()));
    rtb_Switch_d4[22] = ((int8_T)(HardCycle3Cyl7_DataStore()));
    rtb_Switch_d4[23] = ((int8_T)(HardCycle3Cyl8_DataStore()));
    rtb_Switch_d4[24] = ((int8_T)(HardCycle4Cyl1_DataStore()));
    rtb_Switch_d4[25] = ((int8_T)(HardCycle4Cyl2_DataStore()));
    rtb_Switch_d4[26] = ((int8_T)(HardCycle4Cyl3_DataStore()));
    rtb_Switch_d4[27] = ((int8_T)(HardCycle4Cyl4_DataStore()));
    rtb_Switch_d4[28] = ((int8_T)(HardCycle4Cyl5_DataStore()));
    rtb_Switch_d4[29] = ((int8_T)(HardCycle4Cyl6_DataStore()));
    rtb_Switch_d4[30] = ((int8_T)(HardCycle4Cyl7_DataStore()));
    rtb_Switch_d4[31] = ((int8_T)(HardCycle4Cyl8_DataStore()));
  } else {
    rtb_Switch_d4[0] = ((int8_T)(HardCycle1Cyl1_TwoStep_DataStore()));
    rtb_Switch_d4[1] = ((int8_T)(HardCycle1Cyl2_TwoStep_DataStore()));
    rtb_Switch_d4[2] = ((int8_T)(HardCycle1Cyl3_TwoStep_DataStore()));
    rtb_Switch_d4[3] = ((int8_T)(HardCycle1Cyl4_TwoStep_DataStore()));
    rtb_Switch_d4[4] = ((int8_T)(HardCycle1Cyl5_TwoStep_DataStore()));
    rtb_Switch_d4[5] = ((int8_T)(HardCycle1Cyl6_TwoStep_DataStore()));
    rtb_Switch_d4[6] = ((int8_T)(HardCycle1Cyl7_TwoStep_DataStore()));
    rtb_Switch_d4[7] = ((int8_T)(HardCycle1Cyl8_TwoStep_DataStore()));
    rtb_Switch_d4[8] = ((int8_T)(HardCycle2Cyl1_TwoStep_DataStore()));
    rtb_Switch_d4[9] = ((int8_T)(HardCycle2Cyl2_TwoStep_DataStore()));
    rtb_Switch_d4[10] = ((int8_T)(HardCycle2Cyl3_TwoStep_DataStore()));
    rtb_Switch_d4[11] = ((int8_T)(HardCycle2Cyl4_TwoStep_DataStore()));
    rtb_Switch_d4[12] = ((int8_T)(HardCycle2Cyl5_TwoStep_DataStore()));
    rtb_Switch_d4[13] = ((int8_T)(HardCycle2Cyl6_TwoStep_DataStore()));
    rtb_Switch_d4[14] = ((int8_T)(HardCycle2Cyl7_TwoStep_DataStore()));
    rtb_Switch_d4[15] = ((int8_T)(HardCycle2Cyl8_TwoStep_DataStore()));
    rtb_Switch_d4[16] = ((int8_T)(HardCycle3Cyl1_TwoStep_DataStore()));
    rtb_Switch_d4[17] = ((int8_T)(HardCycle3Cyl2_TwoStep_DataStore()));
    rtb_Switch_d4[18] = ((int8_T)(HardCycle3Cyl3_TwoStep_DataStore()));
    rtb_Switch_d4[19] = ((int8_T)(HardCycle3Cyl4_TwoStep_DataStore()));
    rtb_Switch_d4[20] = ((int8_T)(HardCycle3Cyl5_TwoStep_DataStore()));
    rtb_Switch_d4[21] = ((int8_T)(HardCycle3Cyl6_TwoStep_DataStore()));
    rtb_Switch_d4[22] = ((int8_T)(HardCycle3Cyl7_TwoStep_DataStore()));
    rtb_Switch_d4[23] = ((int8_T)(HardCycle3Cyl8_TwoStep_DataStore()));
    rtb_Switch_d4[24] = ((int8_T)(HardCycle4Cyl1_TwoStep_DataStore()));
    rtb_Switch_d4[25] = ((int8_T)(HardCycle4Cyl2_TwoStep_DataStore()));
    rtb_Switch_d4[26] = ((int8_T)(HardCycle4Cyl3_TwoStep_DataStore()));
    rtb_Switch_d4[27] = ((int8_T)(HardCycle4Cyl4_TwoStep_DataStore()));
    rtb_Switch_d4[28] = ((int8_T)(HardCycle4Cyl5_TwoStep_DataStore()));
    rtb_Switch_d4[29] = ((int8_T)(HardCycle4Cyl6_TwoStep_DataStore()));
    rtb_Switch_d4[30] = ((int8_T)(HardCycle4Cyl7_TwoStep_DataStore()));
    rtb_Switch_d4[31] = ((int8_T)(HardCycle4Cyl8_TwoStep_DataStore()));
  }

  /* End of Switch: '<S22>/Switch2' */

  /* Outputs for Enabled SubSystem: '<S22>/PassThrough3' incorporates:
   *  EnablePort: '<S99>/Enable'
   */
  if (rtb_motohawk_fault_action3) {
    if (!BaseEngineController_LS_DWork.s22_PassThrough3_MODE) {
      BaseEngineController_LS_DWork.s22_PassThrough3_MODE = TRUE;
    }

    /* Inport: '<S99>/In1' */
    for (i = 0; i < 32; i++) {
      BaseEngineController_LS_B.s22_Merge1[i] = rtb_Switch_d4[i];
    }

    /* End of Inport: '<S99>/In1' */
  } else {
    if (BaseEngineController_LS_DWork.s22_PassThrough3_MODE) {
      /* Disable for Outport: '<S99>/Out1' */
      for (i = 0; i < 32; i++) {
        BaseEngineController_LS_B.s22_Merge1[i] = 0;
      }

      /* End of Outport: '<S99>/Out1' */
      BaseEngineController_LS_DWork.s22_PassThrough3_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S22>/PassThrough3' */

  /* Outputs for Enabled SubSystem: '<S22>/SequenceCutMachine' incorporates:
   *  EnablePort: '<S102>/Enable'
   */
  if (rtb_LogicalOperator6_b) {
    if (!BaseEngineController_LS_DWork.s22_SequenceCutMachine_MODE) {
      /* InitializeConditions for UnitDelay: '<S102>/Unit Delay2' */
      BaseEngineController_LS_DWork.s102_UnitDelay2_DSTATE = 1.0;

      /* InitializeConditions for UnitDelay: '<S102>/Unit Delay1' */
      BaseEngineController_LS_DWork.s102_UnitDelay1_DSTATE = 1U;

      /* Level2 S-Function Block: '<S102>/motohawk_trigger' (motohawk_sfun_trigger) */

      /* Enable for Trigger_FGND_TDC1_EVENT_10305p0005 */
      BaseEngineController_LS_DWork.s102_motohawk_trigger_DWORK1 = 1;
      BaseEngineController_LS_DWork.s22_SequenceCutMachine_MODE = TRUE;
    }

    /* UnitDelay: '<S102>/Unit Delay2' */
    BaseEngineController_LS_B.s102_UnitDelay2 =
      BaseEngineController_LS_DWork.s102_UnitDelay2_DSTATE;

    /* MultiPortSwitch: '<S102>/Multiport Switch' */
    switch ((int32_T)BaseEngineController_LS_B.s102_UnitDelay2) {
     case 1:
      for (i = 0; i < 8; i++) {
        BaseEngineController_LS_B.s102_MultiportSwitch[i] =
          BaseEngineController_LS_B.s22_Merge1[i];
      }
      break;

     case 2:
      for (i = 0; i < 8; i++) {
        BaseEngineController_LS_B.s102_MultiportSwitch[i] =
          BaseEngineController_LS_B.s22_Merge1[i + 8];
      }
      break;

     case 3:
      for (i = 0; i < 8; i++) {
        BaseEngineController_LS_B.s102_MultiportSwitch[i] =
          BaseEngineController_LS_B.s22_Merge1[i + 16];
      }
      break;

     default:
      for (i = 0; i < 8; i++) {
        BaseEngineController_LS_B.s102_MultiportSwitch[i] =
          BaseEngineController_LS_B.s22_Merge1[i + 24];
      }
      break;
    }

    /* End of MultiPortSwitch: '<S102>/Multiport Switch' */

    /* UnitDelay: '<S102>/Unit Delay1' */
    BaseEngineController_LS_B.s102_UnitDelay1 =
      BaseEngineController_LS_DWork.s102_UnitDelay1_DSTATE;

    /* S-Function (motohawk_sfun_trigger): '<S102>/motohawk_trigger' */
    /* Enable for Trigger_FGND_TDC1_EVENT_10305p0005 */
    if (BaseEngineController_LS_DWork.s102_motohawk_trigger_DWORK1 == 0) {
      BaseEngineController_LS_DWork.s102_motohawk_trigger_DWORK1 = 1;
    }

    /* Update for UnitDelay: '<S102>/Unit Delay2' */
    BaseEngineController_LS_DWork.s102_UnitDelay2_DSTATE =
      BaseEngineController_LS_B.s121_Switch1;

    /* Update for UnitDelay: '<S102>/Unit Delay1' */
    BaseEngineController_LS_DWork.s102_UnitDelay1_DSTATE =
      BaseEngineController_LS_B.s121_Switch;
  } else {
    if (BaseEngineController_LS_DWork.s22_SequenceCutMachine_MODE) {
      /* Level2 S-Function Block: '<S102>/motohawk_trigger' (motohawk_sfun_trigger) */
      /* Disable for Trigger_FGND_TDC1_EVENT_10305p0005 */
      BaseEngineController_LS_DWork.s102_motohawk_trigger_DWORK1 = 0;
      BaseEngineController_LS_DWork.s22_SequenceCutMachine_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S22>/SequenceCutMachine' */
  /* Outputs for Enabled SubSystem: '<S22>/PassThrough5' incorporates:
   *  EnablePort: '<S101>/Enable'
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

    /* DataTypeConversion: '<S101>/Data Type Conversion1' */
    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_B.s101_DataTypeConversion1[i] =
        ((BaseEngineController_LS_B.s121_CutArray[i] != 0));
    }

    /* End of DataTypeConversion: '<S101>/Data Type Conversion1' */
  } else {
    if (BaseEngineController_LS_DWork.s22_PassThrough5_MODE) {
      /* Disable for Outport: '<S101>/Out1' */
      for (i = 0; i < 8; i++) {
        BaseEngineController_LS_B.s101_DataTypeConversion1[i] = FALSE;
      }

      /* End of Outport: '<S101>/Out1' */
      BaseEngineController_LS_DWork.s22_PassThrough5_MODE = FALSE;
    }
  }

  /* End of Logic: '<S22>/Logical Operator1' */
  /* End of Outputs for SubSystem: '<S22>/PassThrough5' */

  /* Logic: '<S22>/Logical Operator3' */
  for (i = 0; i < 8; i++) {
    rtb_AND1[i] = !BaseEngineController_LS_B.s101_DataTypeConversion1[i];
  }

  /* End of Logic: '<S22>/Logical Operator3' */

  /* Sum: '<S866>/    ' incorporates:
   *  Sum: '<S866>/      '
   */
  rtb_Switch_kj = rtb_AND1[0];
  for (i = 0; i < 7; i++) {
    rtb_Switch_kj += (uint32_T)rtb_AND1[1 + i];
  }

  /* End of Sum: '<S866>/    ' */

  /* RelationalOperator: '<S893>/Compare' incorporates:
   *  Constant: '<S893>/Constant'
   *  Sum: '<S866>/    '
   */
  rtb_Compare_b = (((uint8_T)rtb_Switch_kj >= 1));

  /* Outputs for Enabled SubSystem: '<S22>/PassThrough4' incorporates:
   *  EnablePort: '<S100>/Enable'
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

    /* DataTypeConversion: '<S100>/Data Type Conversion' */
    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_B.s100_DataTypeConversion[i] =
        ((BaseEngineController_LS_B.s121_CutArray[i] != 0));
    }

    /* End of DataTypeConversion: '<S100>/Data Type Conversion' */
  } else {
    if (BaseEngineController_LS_DWork.s22_PassThrough4_MODE) {
      /* Disable for Outport: '<S100>/Out1' */
      for (i = 0; i < 8; i++) {
        BaseEngineController_LS_B.s100_DataTypeConversion[i] = FALSE;
      }

      /* End of Outport: '<S100>/Out1' */
      BaseEngineController_LS_DWork.s22_PassThrough4_MODE = FALSE;
    }
  }

  /* End of Logic: '<S22>/Logical Operator' */
  /* End of Outputs for SubSystem: '<S22>/PassThrough4' */

  /* Logic: '<S22>/Logical Operator2' */
  for (i = 0; i < 8; i++) {
    BaseEngineController_LS_B.s22_LogicalOperator2[i] =
      !BaseEngineController_LS_B.s100_DataTypeConversion[i];
  }

  /* End of Logic: '<S22>/Logical Operator2' */

  /* Sum: '<S866>/      ' incorporates:
   *  Sum: '<S866>/    '
   */
  rtb_Switch_kj = BaseEngineController_LS_B.s22_LogicalOperator2[0];
  for (i = 0; i < 7; i++) {
    rtb_Switch_kj += (uint32_T)BaseEngineController_LS_B.s22_LogicalOperator2[1
      + i];
  }

  /* End of Sum: '<S866>/      ' */

  /* RelationalOperator: '<S894>/Compare' incorporates:
   *  Constant: '<S894>/Constant'
   *  Sum: '<S866>/      '
   */
  rtb_Compare_d = (((uint8_T)rtb_Switch_kj >= 1));

  /* RelationalOperator: '<S895>/Compare' incorporates:
   *  Constant: '<S895>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S866>/motohawk_data_read3'
   */
  rtb_Compare_g = ((((uint8_T)EncoderState_DataStore()) >= 3));

  /* S-Function (motohawk_sfun_fault_status): '<S866>/motohawk_fault_status3'
   *
   * Regarding '<S866>/motohawk_fault_status3':
     Status : "Active"
   */
  {
    extern boolean_T IsFaultActive(uint32_T fault);
    rtb_motohawk_fault_status3_g = IsFaultActive(105);
  }

  /* S-Function (motohawk_sfun_fault_status): '<S866>/motohawk_fault_status4'
   *
   * Regarding '<S866>/motohawk_fault_status4':
     Status : "Active"
   */
  {
    extern boolean_T IsFaultActive(uint32_T fault);
    rtb_motohawk_fault_status4_gd3 = IsFaultActive(31);
  }

  /* S-Function (motohawk_sfun_send_canmsgs): '<S866>/Send CAN Messages' */
  /* Send CAN Message(s) */
  {
    static uint32_T LastTxtime32 = 0;
    uint32_T time32;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    time32 = LastTxtime32;

    /* Transmit All Messages on Periodic Schedule (20.0 ms nominal) */
    /* Allow 0.5 ms "fuzz" to allow for different code execution paths on */
    /* subsequent block executions, e.g. long path followed by short path */
    if (Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&time32, NULL) >=
        ((uint32_T)
         (19500U)
         )) {
      /* 0x1f0a004 */
      {
        extern boolean_T CAN_1_Transmit(boolean_T extended, uint32_T id, uint8_T
          length, const uint8_T data[]);
        uint8_T msg_data[8];
        uint16_T tmp0;
        uint8_T tmp1;
        uint8_T tmp2;
        uint8_T tmp3;
        uint8_T tmp4;
        uint8_T tmp5;
        uint8_T tmp6;
        uint8_T tmp7;
        uint8_T tmp8;
        uint8_T tmp9;
        uint8_T tmp10;
        uint8_T tmp11;
        uint8_T tmp12;
        uint8_T tmp13;
        uint8_T tmp14;
        uint8_T tmp15;
        uint8_T tmp16;
        uint8_T tmp17;
        uint8_T tmp18;
        uint8_T tmp19;
        uint8_T tmp20;
        if (rtb_Sum1_cn < 0.0000000000F) {
          tmp0 = (uint16_T)(0U);
        } else if (rtb_Sum1_cn > 6553.5000000000F) {
          tmp0 = (uint16_T)(65535U);
        } else {
          tmp0 = (uint16_T)(rtb_Sum1_cn * (10.0000000000F));
        }

        if (rtb_motohawk_data_read_i4 < 0.0000000000F) {
          tmp1 = (uint8_T)(0U);
        } else if (rtb_motohawk_data_read_i4 > 255.0000000000F) {
          tmp1 = (uint8_T)(255U);
        } else {
          tmp1 = (uint8_T)(rtb_motohawk_data_read_i4);
        }

        if (rtb_Sum1_ay < 0.0000000000F) {
          tmp2 = (uint8_T)(0U);
        } else if (rtb_Sum1_ay > 10.2000000000F) {
          tmp2 = (uint8_T)(255U);
        } else {
          tmp2 = (uint8_T)(rtb_Sum1_ay * (25.0000000000F));
        }

        if (rtb_Sum1_co < 0.0000000000F) {
          tmp3 = (uint8_T)(0U);
        } else if (rtb_Sum1_co > 10.2000000000F) {
          tmp3 = (uint8_T)(255U);
        } else {
          tmp3 = (uint8_T)(rtb_Sum1_co * (25.0000000000F));
        }

        if (rtb_MathFunction < 0.5000000000F) {
          tmp4 = (uint8_T)(0U);
        } else if (rtb_MathFunction > 1.4960937500F) {
          tmp4 = (uint8_T)(255U);
        } else {
          tmp4 = (uint8_T)((rtb_MathFunction - (0.5000000000F)) *
                           (256.0000000000F));
        }

        tmp5 = (uint8_T)(rtb_RelationalOperator5_fz != 0);
        if (BaseEngineController_LS_B.s135_FAN1 < 0.0000000000F) {
          tmp6 = (uint8_T)(0U);
        } else if (BaseEngineController_LS_B.s135_FAN1 > 1.0000000000F) {
          tmp6 = (uint8_T)(1U);
        } else {
          tmp6 = (uint8_T)(BaseEngineController_LS_B.s135_FAN1 != 0);
        }

        if (BaseEngineController_LS_B.s135_FAN2 < 0.0000000000F) {
          tmp7 = (uint8_T)(0U);
        } else if (BaseEngineController_LS_B.s135_FAN2 > 1.0000000000F) {
          tmp7 = (uint8_T)(1U);
        } else {
          tmp7 = (uint8_T)(BaseEngineController_LS_B.s135_FAN2 != 0);
        }

        tmp8 = (uint8_T)(0U);
        tmp9 = (uint8_T)(rtb_motohawk_data_read2_l != 0);
        tmp10 = (uint8_T)(rtb_motohawk_fault_action_o != 0);
        tmp11 = (uint8_T)(rtb_motohawk_fault_action1_a != 0);
        tmp12 = (uint8_T)(rtb_motohawk_fault_status2_f2 != 0);
        tmp13 = (uint8_T)(rtb_motohawk_fault_status1_i != 0);
        if (rtb_Compare_b > 1U) {
          tmp14 = (uint8_T)(1U);
        } else {
          tmp14 = (uint8_T)(rtb_Compare_b != 0);
        }

        if (rtb_Compare_d > 1U) {
          tmp15 = (uint8_T)(1U);
        } else {
          tmp15 = (uint8_T)(rtb_Compare_d != 0);
        }

        if (rtb_Compare_g > 1U) {
          tmp16 = (uint8_T)(1U);
        } else {
          tmp16 = (uint8_T)(rtb_Compare_g != 0);
        }

        tmp17 = (uint8_T)(BaseEngineController_LS_B.s135_AC != 0);
        tmp18 = (uint8_T)(rtb_motohawk_fault_status3_g != 0);
        tmp19 = (uint8_T)(rtb_motohawk_fault_status4_gd3 != 0);
        tmp20 = (uint8_T)(0U);
        msg_data[0] = ((((uint8_T *)(&tmp0))[0])) ;
        msg_data[1] = ((((uint8_T *)(&tmp0))[1])) ;
        msg_data[2] = ((((uint8_T *)(&tmp1))[0])) ;
        msg_data[3] = ((((uint8_T *)(&tmp2))[0])) ;
        msg_data[4] = ((((uint8_T *)(&tmp3))[0])) ;
        msg_data[5] = ((((uint8_T *)(&tmp4))[0])) ;
        msg_data[6] = ((((uint8_T *)(&tmp5))[0] & 0x00000001)) | ((((uint8_T *)(
          &tmp6))[0] & 0x00000001) << 1) | ((((uint8_T *)(&tmp7))[0] &
          0x00000001) << 2) | ((((uint8_T *)(&tmp8))[0] & 0x00000001) << 3) |
          ((((uint8_T *)(&tmp9))[0] & 0x00000001) << 4) | ((((uint8_T *)(&tmp10))
          [0] & 0x00000001) << 5) | ((((uint8_T *)(&tmp11))[0] & 0x00000001) <<
          6) | ((((uint8_T *)(&tmp12))[0] & 0x00000001) << 7) ;
        msg_data[7] = ((((uint8_T *)(&tmp13))[0] & 0x00000001)) | ((((uint8_T *)
          (&tmp14))[0] & 0x00000001) << 1) | ((((uint8_T *)(&tmp15))[0] &
          0x00000001) << 2) | ((((uint8_T *)(&tmp16))[0] & 0x00000001) << 3) |
          ((((uint8_T *)(&tmp17))[0] & 0x00000001) << 4) | ((((uint8_T *)(&tmp18))
          [0] & 0x00000001) << 5) | ((((uint8_T *)(&tmp19))[0] & 0x00000001) <<
          6) | ((((uint8_T *)(&tmp20))[0] & 0x00000001) << 7) ;
        CAN_1_Transmit(1, 0x1f0a004UL, 8, msg_data);
      }

      LastTxtime32 = time32;
    }
  }

  /* Product: '<S867>/Product' incorporates:
   *  Constant: '<S867>/Constant1'
   *  Saturate: '<S867>/Saturation'
   */
  rtb_Product_hd = BaseEngineController_LS_B.s366_MultiportSwitch * 60.0 /
    (BaseEngineController_LS_B.s616_Sum1 >= 0.01 ?
     BaseEngineController_LS_B.s616_Sum1 : 0.01);

  /* S-Function (motohawk_sfun_send_canmsgs): '<S867>/Send CAN Messages' */
  /* Send CAN Message(s) */
  {
    static uint32_T LastTxtime32 = 0;
    uint32_T time32;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    time32 = LastTxtime32;

    /* Transmit All Messages on Periodic Schedule (20.0 ms nominal) */
    /* Allow 0.5 ms "fuzz" to allow for different code execution paths on */
    /* subsequent block executions, e.g. long path followed by short path */
    if (Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&time32, NULL) >=
        ((uint32_T)
         (19500U)
         )) {
      /* 0x1f0a005 */
      {
        extern boolean_T CAN_1_Transmit(boolean_T extended, uint32_T id, uint8_T
          length, const uint8_T data[]);
        uint8_T msg_data[8];
        uint16_T tmp0;
        uint16_T tmp1;
        uint16_T tmp2;
        uint8_T tmp3;
        uint8_T tmp4;
        uint8_T tmp5;
        uint8_T tmp6;
        uint8_T tmp7;
        tmp0 = (uint16_T)(0U);
        if (BaseEngineController_LS_B.s366_MultiportSwitch < 0.0000000000F) {
          tmp1 = (uint16_T)(0U);
        } else if (BaseEngineController_LS_B.s366_MultiportSwitch >
                   3276.7500000000F) {
          tmp1 = (uint16_T)(65535U);
        } else {
          tmp1 = (uint16_T)(BaseEngineController_LS_B.s366_MultiportSwitch *
                            (20.0000000000F));
        }

        if (rtb_Product_hd < 0.0000000000F) {
          tmp2 = (uint16_T)(0U);
        } else if (rtb_Product_hd > 32.7675000000F) {
          tmp2 = (uint16_T)(65534U);
        } else {
          tmp2 = (uint16_T)(rtb_Product_hd * (2000.0000000000F));
        }

        tmp3 = (uint8_T)(0U);
        tmp4 = (uint8_T)(0U);
        tmp5 = (uint8_T)(BaseEngineController_LS_B.s571_Merge != 0);
        tmp6 = (uint8_T)(0U);
        tmp7 = (uint8_T)(0U);
        msg_data[0] = ((((uint8_T *)(&tmp0))[0])) ;
        msg_data[1] = ((((uint8_T *)(&tmp0))[1])) ;
        msg_data[2] = ((((uint8_T *)(&tmp1))[0])) ;
        msg_data[3] = ((((uint8_T *)(&tmp1))[1])) ;
        msg_data[4] = ((((uint8_T *)(&tmp2))[0])) ;
        msg_data[5] = ((((uint8_T *)(&tmp2))[1])) ;
        msg_data[6] = ((((uint8_T *)(&tmp3))[0])) ;
        msg_data[7] = ((((uint8_T *)(&tmp4))[0] & 0x00000001)) | ((((uint8_T *)(
          &tmp5))[0] & 0x00000001) << 1) | ((((uint8_T *)(&tmp6))[0] &
          0x00000001) << 2) | ((((uint8_T *)(&tmp7))[0] & 0x00000001) << 3) ;
        CAN_1_Transmit(1, 0x1f0a005UL, 8, msg_data);
      }

      LastTxtime32 = time32;
    }
  }

  /* S-Function (motohawk_sfun_data_read): '<S868>/motohawk_data_read2' incorporates:
   *  Constant: '<S868>/Constant5'
   */
  rtb_motohawk_data_read2_m = InjMPW_DataStore()[(uint32_T)1.0];

  /* S-Function (motohawk_sfun_data_read): '<S868>/motohawk_data_read1' incorporates:
   *  Constant: '<S868>/Constant4'
   */
  rtb_motohawk_data_read1_ka = InjDC_DataStore()[(uint32_T)1.0];

  /* S-Function (motohawk_sfun_send_canmsgs): '<S868>/Send CAN Messages' */
  /* Send CAN Message(s) */
  {
    static uint32_T LastTxtime32 = 0;
    uint32_T time32;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    time32 = LastTxtime32;

    /* Transmit All Messages on Periodic Schedule (40.0 ms nominal) */
    /* Allow 0.5 ms "fuzz" to allow for different code execution paths on */
    /* subsequent block executions, e.g. long path followed by short path */
    if (Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&time32, NULL) >=
        ((uint32_T)
         (39500U)
         )) {
      /* 0x1f0a006 */
      {
        extern boolean_T CAN_1_Transmit(boolean_T extended, uint32_T id, uint8_T
          length, const uint8_T data[]);
        uint8_T msg_data[8];
        uint8_T tmp0;
        uint8_T tmp1;
        uint8_T tmp2;
        uint8_T tmp3;
        uint8_T tmp4;
        uint8_T tmp5;
        uint16_T tmp6;
        if (rtb_motohawk_data_read2_m < 0.0000000000F) {
          tmp0 = (uint8_T)(0U);
        } else if (rtb_motohawk_data_read2_m > 25.5000000000F) {
          tmp0 = (uint8_T)(255U);
        } else {
          tmp0 = (uint8_T)(rtb_motohawk_data_read2_m * (10.0000000000F));
        }

        if (rtb_Merge_as < -64.0000000000F) {
          tmp1 = (uint8_T)(0U);
        } else if (rtb_Merge_as > 63.5000000000F) {
          tmp1 = (uint8_T)(255U);
        } else {
          tmp1 = (uint8_T)((rtb_Merge_as - (-64.0000000000F)) * (2.0000000000F));
        }

        if (rtb_motohawk_data_read1_ka < 0.0000000000F) {
          tmp2 = (uint8_T)(0U);
        } else if (rtb_motohawk_data_read1_ka > 100.0000350000F) {
          tmp2 = (uint8_T)(255U);
        } else {
          tmp2 = (uint8_T)(rtb_motohawk_data_read1_ka * (2.5499991075F));
        }

        tmp3 = (uint8_T)(0U);
        tmp4 = (uint8_T)(0U);
        tmp5 = (uint8_T)(0U);
        tmp6 = (uint16_T)(32768U);
        msg_data[0] = ((((uint8_T *)(&tmp0))[0])) ;
        msg_data[1] = ((((uint8_T *)(&tmp1))[0])) ;
        msg_data[2] = ((((uint8_T *)(&tmp2))[0])) ;
        msg_data[3] = ((((uint8_T *)(&tmp3))[0])) ;
        msg_data[4] = ((((uint8_T *)(&tmp4))[0])) ;
        msg_data[5] = ((((uint8_T *)(&tmp5))[0])) ;
        msg_data[6] = ((((uint8_T *)(&tmp6))[0])) ;
        msg_data[7] = ((((uint8_T *)(&tmp6))[1])) ;
        CAN_1_Transmit(1, 0x1f0a006UL, 8, msg_data);
      }

      LastTxtime32 = time32;
    }
  }

  /* S-Function (motohawk_sfun_data_read): '<S869>/motohawk_data_read' */
  rtb_motohawk_data_read_bv = BARO_DataStore();

  /* S-Function Block: <S902>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s902_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_h = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S902>/Product' incorporates:
   *  MinMax: '<S902>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S902>/motohawk_calibration'
   */
  rtb_Switch_h /= (rtb_Switch_h >= (Flex_Filt_DataStore())) || rtIsNaN
    ((Flex_Filt_DataStore())) ? rtb_Switch_h : (Flex_Filt_DataStore());

  /* Sum: '<S903>/Sum1' incorporates:
   *  Constant: '<S903>/Constant'
   *  Product: '<S903>/Product'
   *  Product: '<S903>/Product1'
   *  Sum: '<S903>/Sum'
   *  UnitDelay: '<S903>/Unit Delay'
   */
  rtb_Sum1_kv = (1.0 - rtb_Switch_h) *
    BaseEngineController_LS_DWork.s903_UnitDelay_DSTATE +
    BaseEngineController_LS_B.s638_Merge * rtb_Switch_h;

  /* Outputs for Enabled SubSystem: '<S361>/Capture IAT At Startup' incorporates:
   *  EnablePort: '<S404>/Enable'
   */
  if (rtb_RelOp_d) {
    if (!BaseEngineController_LS_DWork.s361_CaptureIATAtStartup_MODE) {
      /* InitializeConditions for UnitDelay: '<S404>/Unit Delay' */
      BaseEngineController_LS_DWork.s404_UnitDelay_DSTATE = 0;
      BaseEngineController_LS_DWork.s361_CaptureIATAtStartup_MODE = TRUE;
    }

    /* Sum: '<S404>/Sum' incorporates:
     *  Constant: '<S404>/Constant'
     *  UnitDelay: '<S404>/Unit Delay'
     */
    rtb_Add_k = (int8_T)(BaseEngineController_LS_DWork.s404_UnitDelay_DSTATE + 1);

    /* Sum: '<S404>/Add' incorporates:
     *  Constant: '<S404>/TwoSampleBuffer ToIgnore'
     *  S-Function (motohawk_sfun_calibration): '<S404>/motohawk_calibration'
     */
    rtb_Sum_l3 = (int8_T)(((int8_T)(IAT_KeyUp_Count_DataStore())) + 2);

    /* RelationalOperator: '<S404>/Relational Operator' */
    rtb_LogicalOperator6_b = (rtb_Add_k <= rtb_Sum_l3);

    /* Switch: '<S404>/Switch' */
    if (rtb_LogicalOperator6_b) {
      rtb_Sum_l3 = rtb_Add_k;
    }

    /* End of Switch: '<S404>/Switch' */

    /* Sum: '<S404>/Add1' incorporates:
     *  Constant: '<S404>/TwoSampleBuffer ToIgnore'
     */
    rtb_Add1_k = (int8_T)(rtb_Sum_l3 - 2);

    /* Logic: '<S404>/Logical Operator' incorporates:
     *  Constant: '<S404>/TwoSampleBuffer ToIgnore'
     *  RelationalOperator: '<S404>/Relational Operator1'
     */
    rtb_LogicalOperator_g5 = (rtb_LogicalOperator6_b && (rtb_Add_k > 2));

    /* Outputs for Enabled SubSystem: '<S404>/Collect Average' */
    BaseEngineController_LS_CollectAverage(rtb_LogicalOperator_g5, rtb_Add1_k,
      BaseEngineController_LS_B.s712_Merge,
      &BaseEngineController_LS_B.s404_CollectAverage,
      &BaseEngineController_LS_DWork.s404_CollectAverage);

    /* End of Outputs for SubSystem: '<S404>/Collect Average' */

    /* Update for UnitDelay: '<S404>/Unit Delay' */
    BaseEngineController_LS_DWork.s404_UnitDelay_DSTATE = rtb_Sum_l3;
  } else {
    if (BaseEngineController_LS_DWork.s361_CaptureIATAtStartup_MODE) {
      /* Disable for Enabled SubSystem: '<S404>/Collect Average' */
      BaseEngineController_LS_CollectAverage_Disable
        (&BaseEngineController_LS_DWork.s404_CollectAverage);

      /* End of Disable for SubSystem: '<S404>/Collect Average' */
      BaseEngineController_LS_DWork.s361_CaptureIATAtStartup_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S361>/Capture IAT At Startup' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S869>/Send CAN Messages' */
  /* Send CAN Message(s) */
  {
    static uint32_T LastTxtime32 = 0;
    uint32_T time32;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    time32 = LastTxtime32;

    /* Transmit All Messages on Periodic Schedule (40.0 ms nominal) */
    /* Allow 0.5 ms "fuzz" to allow for different code execution paths on */
    /* subsequent block executions, e.g. long path followed by short path */
    if (Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&time32, NULL) >=
        ((uint32_T)
         (39500U)
         )) {
      /* 0x1f0a007 */
      {
        extern boolean_T CAN_1_Transmit(boolean_T extended, uint32_T id, uint8_T
          length, const uint8_T data[]);
        uint8_T msg_data[8];
        uint8_T tmp0;
        uint8_T tmp1;
        uint8_T tmp2;
        uint8_T tmp3;
        uint8_T tmp4;
        uint8_T tmp5;
        uint8_T tmp6;
        uint8_T tmp7;
        uint8_T tmp8;
        uint8_T tmp9;
        uint8_T tmp10;
        uint8_T tmp11;
        uint8_T tmp12;
        tmp0 = (uint8_T)(254U);
        tmp1 = (uint8_T)(254U);
        tmp2 = (uint8_T)(0U);
        if (rtb_motohawk_data_read_bv < 50.0000000000F) {
          tmp3 = (uint8_T)(0U);
        } else if (rtb_motohawk_data_read_bv > 113.7500000000F) {
          tmp3 = (uint8_T)(255U);
        } else {
          tmp3 = (uint8_T)((rtb_motohawk_data_read_bv - (50.0000000000F)) *
                           (4.0000000000F));
        }

        if (rtb_Sum1_kv < 0.0000000000F) {
          tmp4 = (uint8_T)(0U);
        } else if (rtb_Sum1_kv > 100.0000350000F) {
          tmp4 = (uint8_T)(255U);
        } else {
          tmp4 = (uint8_T)(rtb_Sum1_kv * (2.5499991075F));
        }

        if (BaseEngineController_LS_B.s404_CollectAverage.s368_Product <
            -50.0000000000F) {
          tmp5 = (uint8_T)(0U);
        } else if (BaseEngineController_LS_B.s404_CollectAverage.s368_Product >
                   205.0000000000F) {
          tmp5 = (uint8_T)(255U);
        } else {
          tmp5 = (uint8_T)
            (BaseEngineController_LS_B.s404_CollectAverage.s368_Product -
             (-50.0000000000F));
        }

        tmp6 = (uint8_T)(0U);
        tmp7 = (uint8_T)(0U);
        tmp8 = (uint8_T)(0U);
        tmp9 = (uint8_T)(0U);
        tmp10 = (uint8_T)(0U);
        tmp11 = (uint8_T)(0U);
        tmp12 = (uint8_T)(0U);
        msg_data[0] = ((((uint8_T *)(&tmp0))[0])) ;
        msg_data[1] = ((((uint8_T *)(&tmp1))[0])) ;
        msg_data[2] = ((((uint8_T *)(&tmp2))[0])) ;
        msg_data[3] = ((((uint8_T *)(&tmp3))[0])) ;
        msg_data[4] = ((((uint8_T *)(&tmp4))[0])) ;
        msg_data[5] = ((((uint8_T *)(&tmp5))[0])) ;
        msg_data[6] = ((((uint8_T *)(&tmp6))[0])) ;
        msg_data[7] = ((((uint8_T *)(&tmp7))[0] & 0x00000001)) | ((((uint8_T *)(
          &tmp8))[0] & 0x00000001) << 1) | ((((uint8_T *)(&tmp9))[0] &
          0x00000003) << 2) | ((((uint8_T *)(&tmp10))[0] & 0x00000003) << 4) |
          ((((uint8_T *)(&tmp11))[0] & 0x00000001) << 6) | ((((uint8_T *)(&tmp12))
          [0] & 0x00000001) << 7) ;
        CAN_1_Transmit(1, 0x1f0a007UL, 8, msg_data);
      }

      LastTxtime32 = time32;
    }
  }

  /* S-Function (motohawk_sfun_data_read): '<S872>/motohawk_data_read' */
  rtb_motohawk_data_read_ki = BoostControlTarget_DataStore();

  /* S-Function (motohawk_sfun_data_read): '<S872>/motohawk_data_read1' */
  rtb_motohawk_data_read1_bz = BoostControlDutyCycleFF_DataStore();

  /* S-Function (motohawk_sfun_data_read): '<S872>/motohawk_data_read2' */
  rtb_motohawk_data_read2_h = BoostControlPID_DataStore();

  /* S-Function (motohawk_sfun_send_canmsgs): '<S872>/Send CAN Messages' */
  /* Send CAN Message(s) */
  {
    static uint32_T LastTxtime32 = 0;
    uint32_T time32;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    time32 = LastTxtime32;

    /* Transmit All Messages on Periodic Schedule (40.0 ms nominal) */
    /* Allow 0.5 ms "fuzz" to allow for different code execution paths on */
    /* subsequent block executions, e.g. long path followed by short path */
    if (Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&time32, NULL) >=
        ((uint32_T)
         (39500U)
         )) {
      /* 0x1f0a00b */
      {
        extern boolean_T CAN_1_Transmit(boolean_T extended, uint32_T id, uint8_T
          length, const uint8_T data[]);
        uint8_T msg_data[8];
        uint16_T tmp0;
        uint16_T tmp1;
        uint8_T tmp2;
        uint8_T tmp3;
        uint8_T tmp4;
        uint8_T tmp5;
        if (rtb_motohawk_data_read_ki < 0.0000000000F) {
          tmp0 = (uint16_T)(0U);
        } else if (rtb_motohawk_data_read_ki > 6553.5000000000F) {
          tmp0 = (uint16_T)(65535U);
        } else {
          tmp0 = (uint16_T)(rtb_motohawk_data_read_ki * (10.0000000000F));
        }

        tmp1 = (uint16_T)(0U);
        if (rtb_motohawk_data_read1_bz < 0.0000000000F) {
          tmp2 = (uint8_T)(0U);
        } else if (rtb_motohawk_data_read1_bz > 100.0000350000F) {
          tmp2 = (uint8_T)(255U);
        } else {
          tmp2 = (uint8_T)(rtb_motohawk_data_read1_bz * (2.5499991075F));
        }

        if (rtb_motohawk_data_read2_h < 0.0000000000F) {
          tmp3 = (uint8_T)(0U);
        } else if (rtb_motohawk_data_read2_h > 100.0000350000F) {
          tmp3 = (uint8_T)(255U);
        } else {
          tmp3 = (uint8_T)(rtb_motohawk_data_read2_h * (2.5499991075F));
        }

        if (BaseEngineController_LS_B.s717_Merge < -50.0000000000F) {
          tmp4 = (uint8_T)(0U);
        } else if (BaseEngineController_LS_B.s717_Merge > 205.0000000000F) {
          tmp4 = (uint8_T)(255U);
        } else {
          tmp4 = (uint8_T)(BaseEngineController_LS_B.s717_Merge -
                           (-50.0000000000F));
        }

        tmp5 = (uint8_T)(0U);
        msg_data[0] = ((((uint8_T *)(&tmp0))[0])) ;
        msg_data[1] = ((((uint8_T *)(&tmp0))[1])) ;
        msg_data[2] = ((((uint8_T *)(&tmp1))[0])) ;
        msg_data[3] = ((((uint8_T *)(&tmp1))[1])) ;
        msg_data[4] = ((((uint8_T *)(&tmp2))[0])) ;
        msg_data[5] = ((((uint8_T *)(&tmp3))[0])) ;
        msg_data[6] = ((((uint8_T *)(&tmp4))[0])) ;
        msg_data[7] = ((((uint8_T *)(&tmp5))[0])) ;
        CAN_1_Transmit(1, 0x1f0a00bUL, 8, msg_data);
      }

      LastTxtime32 = time32;
    }
  }

  /* S-Function Block: <S905>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s905_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_h = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S905>/Product' incorporates:
   *  MinMax: '<S905>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S905>/motohawk_calibration'
   */
  rtb_Switch_h /= (rtb_Switch_h >= (APP_Filt_DataStore())) || rtIsNaN
    ((APP_Filt_DataStore())) ? rtb_Switch_h : (APP_Filt_DataStore());

  /* Sum: '<S907>/Sum1' incorporates:
   *  Constant: '<S907>/Constant'
   *  Product: '<S907>/Product'
   *  Product: '<S907>/Product1'
   *  Sum: '<S907>/Sum'
   *  UnitDelay: '<S907>/Unit Delay'
   */
  rtb_Sum1_mn = (1.0 - rtb_Switch_h) *
    BaseEngineController_LS_DWork.s907_UnitDelay_DSTATE +
    BaseEngineController_LS_B.s405_Switch1 * rtb_Switch_h;

  /* S-Function Block: <S904>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s904_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_h = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S904>/Product' incorporates:
   *  MinMax: '<S904>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S904>/motohawk_calibration'
   */
  rtb_Switch_h /= (rtb_Switch_h >= (ETCReq_Filt_DataStore())) || rtIsNaN
    ((ETCReq_Filt_DataStore())) ? rtb_Switch_h : (ETCReq_Filt_DataStore());

  /* Sum: '<S906>/Sum1' incorporates:
   *  Constant: '<S906>/Constant'
   *  Product: '<S906>/Product'
   *  Product: '<S906>/Product1'
   *  Sum: '<S906>/Sum'
   *  UnitDelay: '<S906>/Unit Delay'
   */
  rtb_Sum1_mw = (1.0 - rtb_Switch_h) *
    BaseEngineController_LS_DWork.s906_UnitDelay_DSTATE +
    BaseEngineController_LS_B.s420_Sum2 * rtb_Switch_h;

  /* S-Function (motohawk_sfun_fault_status): '<S873>/motohawk_fault_status9'
   *
   * Regarding '<S873>/motohawk_fault_status9':
     Status : "Active"
   */
  {
    extern boolean_T IsFaultActive(uint32_T fault);
    rtb_motohawk_fault_status9 = IsFaultActive(20);
  }

  /* Logic: '<S873>/Logical Operator3' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S873>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S873>/motohawk_fault_status10'
   */
  rtb_LogicalOperator3_m = ((IsFaultActive(5) || IsFaultActive(4)));

  /* Logic: '<S873>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S873>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S873>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_d1 = ((IsFaultActive(13) || IsFaultActive(12)));

  /* Logic: '<S873>/Logical Operator2' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S873>/motohawk_fault_status5'
   *  S-Function (motohawk_sfun_fault_status): '<S873>/motohawk_fault_status6'
   */
  rtb_LogicalOperator2_p1 = ((IsFaultActive(52) || IsFaultActive(53)));

  /* Logic: '<S873>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S873>/motohawk_fault_status4'
   *  S-Function (motohawk_sfun_fault_status): '<S873>/motohawk_fault_status7'
   */
  rtb_LogicalOperator4_c = ((IsFaultActive(114) || IsFaultActive(113)));

  /* Logic: '<S873>/Logical Operator5' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S873>/motohawk_fault_status11'
   *  S-Function (motohawk_sfun_fault_status): '<S873>/motohawk_fault_status8'
   */
  rtb_LogicalOperator5_g = ((IsFaultActive(120) || IsFaultActive(119)));

  /* S-Function (motohawk_sfun_data_read): '<S873>/motohawk_data_read1' */
  rtb_motohawk_data_read1_pg = ETB_Curr_Flt_DataStore();

  /* S-Function (motohawk_sfun_fault_status): '<S873>/motohawk_fault_status12'
   *
   * Regarding '<S873>/motohawk_fault_status12':
     Status : "Active"
   */
  {
    extern boolean_T IsFaultActive(uint32_T fault);
    rtb_motohawk_fault_status12 = IsFaultActive(121);
  }

  /* S-Function (motohawk_sfun_send_canmsgs): '<S873>/Send CAN Messages' */
  /* Send CAN Message(s) */
  {
    static uint32_T LastTxtime32 = 0;
    uint32_T time32;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    time32 = LastTxtime32;

    /* Transmit All Messages on Periodic Schedule (40.0 ms nominal) */
    /* Allow 0.5 ms "fuzz" to allow for different code execution paths on */
    /* subsequent block executions, e.g. long path followed by short path */
    if (Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&time32, NULL) >=
        ((uint32_T)
         (39500U)
         )) {
      /* 0x1f0a00d */
      {
        extern boolean_T CAN_1_Transmit(boolean_T extended, uint32_T id, uint8_T
          length, const uint8_T data[]);
        uint8_T msg_data[8];
        uint8_T tmp0;
        uint8_T tmp1;
        uint8_T tmp2;
        uint8_T tmp3;
        uint8_T tmp4;
        uint8_T tmp5;
        uint8_T tmp6;
        uint8_T tmp7;
        uint8_T tmp8;
        uint8_T tmp9;
        uint8_T tmp10;
        uint8_T tmp11;
        uint8_T tmp12;
        uint8_T tmp13;
        uint8_T tmp14;
        uint8_T tmp15;
        uint8_T tmp16;
        uint8_T tmp17;
        uint8_T tmp18;
        uint8_T tmp19;
        if (rtb_Sum1_mn < 0.0000000000F) {
          tmp0 = (uint8_T)(0U);
        } else if (rtb_Sum1_mn > 100.0000350000F) {
          tmp0 = (uint8_T)(255U);
        } else {
          tmp0 = (uint8_T)(rtb_Sum1_mn * (2.5499991075F));
        }

        if (rtb_Sum1_mw < 0.0000000000F) {
          tmp1 = (uint8_T)(0U);
        } else if (rtb_Sum1_mw > 100.0000350000F) {
          tmp1 = (uint8_T)(255U);
        } else {
          tmp1 = (uint8_T)(rtb_Sum1_mw * (2.5499991075F));
        }

        if (BaseEngineController_LS_B.s829_Merge < 0.0000000000F) {
          tmp2 = (uint8_T)(0U);
        } else if (BaseEngineController_LS_B.s829_Merge > 100.0000350000F) {
          tmp2 = (uint8_T)(255U);
        } else {
          tmp2 = (uint8_T)(BaseEngineController_LS_B.s829_Merge * (2.5499991075F));
        }

        if (BaseEngineController_LS_B.s846_Merge < 0.0000000000F) {
          tmp3 = (uint8_T)(0U);
        } else if (BaseEngineController_LS_B.s846_Merge > 100.0000350000F) {
          tmp3 = (uint8_T)(255U);
        } else {
          tmp3 = (uint8_T)(BaseEngineController_LS_B.s846_Merge * (2.5499991075F));
        }

        tmp4 = (uint8_T)(rtb_motohawk_fault_status9 != 0);
        tmp5 = (uint8_T)(rtb_LogicalOperator3_m != 0);
        tmp6 = (uint8_T)(rtb_LogicalOperator1_d1 != 0);
        tmp7 = (uint8_T)(0U);
        tmp8 = (uint8_T)(rtb_LogicalOperator2_p1 != 0);
        tmp9 = (uint8_T)(rtb_LogicalOperator4_c != 0);
        tmp10 = (uint8_T)(rtb_LogicalOperator5_g != 0);
        tmp11 = (uint8_T)(0U);
        tmp12 = (uint8_T)(rtb_motohawk_data_read1_pg != 0);
        tmp13 = (uint8_T)(rtb_motohawk_fault_status12 != 0);
        tmp14 = (uint8_T)(0U);
        tmp15 = (uint8_T)(0U);
        tmp16 = (uint8_T)(0U);
        tmp17 = (uint8_T)(0U);
        tmp18 = (uint8_T)(0U);
        tmp19 = (uint8_T)(0U);
        msg_data[0] = ((((uint8_T *)(&tmp0))[0])) ;
        msg_data[1] = ((((uint8_T *)(&tmp1))[0])) ;
        msg_data[2] = ((((uint8_T *)(&tmp2))[0])) ;
        msg_data[3] = ((((uint8_T *)(&tmp3))[0])) ;
        msg_data[4] = 0 ;
        msg_data[5] = ((((uint8_T *)(&tmp4))[0] & 0x00000001)) | ((((uint8_T *)(
          &tmp5))[0] & 0x00000001) << 1) | ((((uint8_T *)(&tmp6))[0] &
          0x00000001) << 2) | ((((uint8_T *)(&tmp7))[0] & 0x00000001) << 3) ;
        msg_data[6] = ((((uint8_T *)(&tmp8))[0] & 0x00000001)) | ((((uint8_T *)(
          &tmp9))[0] & 0x00000001) << 1) | ((((uint8_T *)(&tmp10))[0] &
          0x00000001) << 2) | ((((uint8_T *)(&tmp11))[0] & 0x00000001) << 3) |
          ((((uint8_T *)(&tmp12))[0] & 0x00000001) << 4) | ((((uint8_T *)(&tmp13))
          [0] & 0x00000001) << 5) ;
        msg_data[7] = ((((uint8_T *)(&tmp14))[0] & 0x00000001)) | ((((uint8_T *)
          (&tmp15))[0] & 0x00000001) << 1) | ((((uint8_T *)(&tmp16))[0] &
          0x00000001) << 2) | ((((uint8_T *)(&tmp17))[0] & 0x00000001) << 3) |
          ((((uint8_T *)(&tmp18))[0] & 0x00000001) << 4) | ((((uint8_T *)(&tmp19))
          [0] & 0x00000001) << 5) ;
        CAN_1_Transmit(1, 0x1f0a00dUL, 8, msg_data);
      }

      LastTxtime32 = time32;
    }
  }

  /* S-Function (motohawk_sfun_data_read): '<S870>/motohawk_data_read' */
  rtb_motohawk_data_read_l = BaseRevLimit_DataStore();

  /* S-Function (motohawk_sfun_data_read): '<S870>/motohawk_data_read1' */
  rtb_motohawk_data_read1_b3 = TwoStepRevLimit_DataStore();

  /* Logic: '<S870>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S870>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S870>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S870>/motohawk_fault_status3'
   *  S-Function (motohawk_sfun_fault_status): '<S870>/motohawk_fault_status4'
   */
  rtb_LogicalOperator_bi = ((IsFaultActive(114) || IsFaultActive(113) ||
    IsFaultActive(120) || IsFaultActive(119)));

  /* Logic: '<S870>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S870>/motohawk_fault_status5'
   *  S-Function (motohawk_sfun_fault_status): '<S870>/motohawk_fault_status7'
   */
  rtb_LogicalOperator1_jx = ((IsFaultActive(33) || IsFaultActive(32)));

  /* Logic: '<S870>/Logical Operator2' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S870>/motohawk_fault_status6'
   *  S-Function (motohawk_sfun_fault_status): '<S870>/motohawk_fault_status8'
   */
  rtb_LogicalOperator2_ps = ((IsFaultActive(61) || IsFaultActive(60)));

  /* Logic: '<S870>/Logical Operator3' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S870>/motohawk_fault_status10'
   *  S-Function (motohawk_sfun_fault_status): '<S870>/motohawk_fault_status9'
   */
  rtb_LogicalOperator3_n = ((IsFaultActive(102) || IsFaultActive(101)));

  /* Logic: '<S870>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S870>/motohawk_fault_status11'
   *  S-Function (motohawk_sfun_fault_status): '<S870>/motohawk_fault_status12'
   */
  rtb_LogicalOperator4_n = ((IsFaultActive(90) || IsFaultActive(89)));

  /* Logic: '<S870>/Logical Operator5' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S870>/motohawk_fault_status13'
   *  S-Function (motohawk_sfun_fault_status): '<S870>/motohawk_fault_status14'
   */
  rtb_LogicalOperator5_cx = ((IsFaultActive(73) || IsFaultActive(72)));

  /* S-Function (motohawk_sfun_send_canmsgs): '<S870>/Send CAN Messages' */
  /* Send CAN Message(s) */
  {
    static uint32_T LastTxtime32 = 0;
    uint32_T time32;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    time32 = LastTxtime32;

    /* Transmit All Messages on Periodic Schedule (200.0 ms nominal) */
    /* Allow 0.5 ms "fuzz" to allow for different code execution paths on */
    /* subsequent block executions, e.g. long path followed by short path */
    if (Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&time32, NULL) >=
        ((uint32_T)
         (199500U)
         )) {
      /* 0x1f0a008 */
      {
        extern boolean_T CAN_1_Transmit(boolean_T extended, uint32_T id, uint8_T
          length, const uint8_T data[]);
        uint8_T msg_data[8];
        uint8_T tmp0;
        uint16_T tmp1;
        uint16_T tmp2;
        uint8_T tmp3;
        uint8_T tmp4;
        uint8_T tmp5;
        uint8_T tmp6;
        uint8_T tmp7;
        uint8_T tmp8;
        uint8_T tmp9;
        uint8_T tmp10;
        uint8_T tmp11;
        uint8_T tmp12;
        tmp0 = (uint8_T)(0U);
        if (rtb_motohawk_data_read_l < 0) {
          tmp1 = (uint16_T)(0U);
        } else if (rtb_motohawk_data_read_l > 25599) {
          tmp1 = (uint16_T)(65534U);
        } else {
          tmp1 = (uint16_T)(rtb_motohawk_data_read_l * (2));
        }

        if (rtb_motohawk_data_read_l < 0) {
          tmp2 = (uint16_T)(0U);
        } else if (rtb_motohawk_data_read_l > 25599) {
          tmp2 = (uint16_T)(65534U);
        } else {
          tmp2 = (uint16_T)(rtb_motohawk_data_read_l * (2));
        }

        if (rtb_motohawk_data_read1_b3 < 0) {
          tmp3 = (uint8_T)(0U);
        } else if (rtb_motohawk_data_read1_b3 > 25500) {
          tmp3 = (uint8_T)(255U);
        } else {
          tmp3 = (uint8_T)(rtb_motohawk_data_read1_b3 / (100));
        }

        if (rtb_motohawk_data_read1_b3 < 0) {
          tmp4 = (uint8_T)(0U);
        } else if (rtb_motohawk_data_read1_b3 > 25500) {
          tmp4 = (uint8_T)(255U);
        } else {
          tmp4 = (uint8_T)(rtb_motohawk_data_read1_b3 / (100));
        }

        tmp5 = (uint8_T)(rtb_LogicalOperator_bi != 0);
        tmp6 = (uint8_T)(rtb_LogicalOperator1_jx != 0);
        tmp7 = (uint8_T)(rtb_LogicalOperator2_ps != 0);
        tmp8 = (uint8_T)(rtb_LogicalOperator3_n != 0);
        tmp9 = (uint8_T)(0U);
        tmp10 = (uint8_T)(rtb_LogicalOperator4_n != 0);
        tmp11 = (uint8_T)(rtb_LogicalOperator5_cx != 0);
        tmp12 = (uint8_T)(0U);
        msg_data[0] = ((((uint8_T *)(&tmp0))[0])) ;
        msg_data[1] = ((((uint8_T *)(&tmp1))[0])) ;
        msg_data[2] = ((((uint8_T *)(&tmp1))[1])) ;
        msg_data[3] = ((((uint8_T *)(&tmp2))[0])) ;
        msg_data[4] = ((((uint8_T *)(&tmp2))[1])) ;
        msg_data[5] = ((((uint8_T *)(&tmp3))[0])) ;
        msg_data[6] = ((((uint8_T *)(&tmp4))[0])) ;
        msg_data[7] = ((((uint8_T *)(&tmp5))[0] & 0x00000001)) | ((((uint8_T *)(
          &tmp6))[0] & 0x00000001) << 1) | ((((uint8_T *)(&tmp7))[0] &
          0x00000001) << 2) | ((((uint8_T *)(&tmp8))[0] & 0x00000001) << 3) |
          ((((uint8_T *)(&tmp9))[0] & 0x00000001) << 4) | ((((uint8_T *)(&tmp10))
          [0] & 0x00000001) << 5) | ((((uint8_T *)(&tmp11))[0] & 0x00000001) <<
          6) | ((((uint8_T *)(&tmp12))[0] & 0x00000001) << 7) ;
        CAN_1_Transmit(1, 0x1f0a008UL, 8, msg_data);
      }

      LastTxtime32 = time32;
    }
  }

  /* S-Function (motohawk_sfun_send_canmsgs): '<S871>/Send CAN Messages' */
  /* Send CAN Message(s) */
  {
    static uint32_T LastTxtime32 = 0;
    uint32_T time32;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    time32 = LastTxtime32;

    /* Transmit All Messages on Periodic Schedule (40.0 ms nominal) */
    /* Allow 0.5 ms "fuzz" to allow for different code execution paths on */
    /* subsequent block executions, e.g. long path followed by short path */
    if (Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&time32, NULL) >=
        ((uint32_T)
         (39500U)
         )) {
      /* 0x1f0a009 */
      {
        extern boolean_T CAN_1_Transmit(boolean_T extended, uint32_T id, uint8_T
          length, const uint8_T data[]);
        uint8_T msg_data[8];
        uint16_T tmp0;
        uint16_T tmp1;
        uint16_T tmp2;
        tmp0 = (uint16_T)(0U);
        tmp1 = (uint16_T)(32768U);
        tmp2 = (uint16_T)(0U);
        msg_data[0] = ((((uint8_T *)(&tmp0))[0])) ;
        msg_data[1] = ((((uint8_T *)(&tmp0))[1])) ;
        msg_data[2] = ((((uint8_T *)(&tmp1))[0])) ;
        msg_data[3] = ((((uint8_T *)(&tmp1))[1])) ;
        msg_data[4] = ((((uint8_T *)(&tmp2))[0])) ;
        msg_data[5] = ((((uint8_T *)(&tmp2))[1])) ;
        msg_data[6] = 0 ;
        msg_data[7] = 0 ;
        CAN_1_Transmit(1, 0x1f0a009UL, 8, msg_data);
      }

      LastTxtime32 = time32;
    }
  }

  /* S-Function (motohawk_sfun_trigger): '<S14>/motohawk_trigger1' */
  /* Enable for Trigger_FGND_5XRTI_PERIODIC_11481p0005 */
  if (BaseEngineController_LS_DWork.s14_motohawk_trigger1_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s14_motohawk_trigger1_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S14>/motohawk_trigger' */
  /* Enable for Trigger_FGND_5XRTI_PERIODIC_11480p0002 */
  if (BaseEngineController_LS_DWork.s14_motohawk_trigger_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s14_motohawk_trigger_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S13>/motohawk_trigger' */
  /* Enable for Trigger_FGND_5XRTI_PERIODIC_7015p0012 */
  if (BaseEngineController_LS_DWork.s13_motohawk_trigger_DWORK1 == 0) {
    /* Enable for function-call system: '<S13>/Coil Control' */

    /* Enable for Atomic SubSystem: '<S908>/EST Enable TDC Counter' */

    /* Level2 S-Function Block: '<S913>/motohawk_trigger1' (motohawk_sfun_trigger) */

    /* Enable for Trigger_FGND_TDC_EVENT_6487p001 */
    BaseEngineController_LS_DWork.s913_motohawk_trigger1_DWORK1 = 1;

    /* End of Enable for SubSystem: '<S908>/EST Enable TDC Counter' */
    BaseEngineController_LS_DWork.s13_motohawk_trigger_DWORK1 = 1;
  }

  /* DataTypeConversion: '<S853>/Data Type Conversion' */
  rtb_LogicalOperator6_b = (BaseEngineController_LS_B.s135_FAN1 != 0.0);

  /* If: '<S940>/If' incorporates:
   *  Inport: '<S941>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S940>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S940>/override_enable'
   */
  if ((FAN1_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S940>/NewValue' incorporates:
     *  ActionPort: '<S941>/Action Port'
     */
    rtb_LogicalOperator6_b = (FAN1_new_DataStore());

    /* End of Outputs for SubSystem: '<S940>/NewValue' */
  } else {
  }

  /* End of If: '<S940>/If' */

  /* Logic: '<S936>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S936>/0 = No Inversion 1 = Inversion'
   */
  BaseEngineController_LS_B.s936_LogicalOperator = rtb_LogicalOperator6_b ^
    (FAN1_Polarity_DataStore());

  /* If: '<S947>/If' incorporates:
   *  Inport: '<S948>/In1'
   *  Inport: '<S949>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S947>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S947>/override_enable'
   */
  if ((FAN1_PWM_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S947>/NewValue' incorporates:
     *  ActionPort: '<S948>/Action Port'
     */
    rtb_DataTypeConversion1_e = (FAN1_PWM_new_DataStore());

    /* End of Outputs for SubSystem: '<S947>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S947>/OldValue' incorporates:
     *  ActionPort: '<S949>/Action Port'
     */
    rtb_DataTypeConversion1_e = BaseEngineController_LS_B.s135_FAN1;

    /* End of Outputs for SubSystem: '<S947>/OldValue' */
  }

  /* End of If: '<S947>/If' */

  /* Product: '<S938>/Product' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S938>/motohawk_calibration'
   */
  rtb_DataTypeConversion1_e *= (FAN1_PWMGain_DataStore());

  /* Sum: '<S938>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S938>/motohawk_calibration1'
   */
  rtb_Switch_h = rtb_DataTypeConversion1_e + (FAN1_PWMOffset_DataStore());

  /* MinMax: '<S946>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S938>/motohawk_calibration2'
   */
  rtb_Switch_h = (rtb_Switch_h >= (FAN1_PWMMinLimit_DataStore())) || rtIsNaN
    ((FAN1_PWMMinLimit_DataStore())) ? rtb_Switch_h :
    (FAN1_PWMMinLimit_DataStore());

  /* MinMax: '<S946>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S938>/motohawk_calibration3'
   */
  BaseEngineController_LS_B.s946_MinMax1 = (rtb_Switch_h <=
    (FAN1_PWMMaxLimit_DataStore())) || rtIsNaN((FAN1_PWMMaxLimit_DataStore())) ?
    rtb_Switch_h : (FAN1_PWMMaxLimit_DataStore());

  /* Gain: '<S938>/Convert to integer 14-bit PWM resolution' */
  rtb_Switch_h = 40.95 * BaseEngineController_LS_B.s946_MinMax1;

  /* DataTypeConversion: '<S938>/Data Type Conversion3' */
  if (rtb_Switch_h < 32768.0) {
    if (rtb_Switch_h >= -32768.0) {
      rtb_DataTypeConversion3_c = (int16_T)rtb_Switch_h;
    } else {
      rtb_DataTypeConversion3_c = MIN_int16_T;
    }
  } else {
    rtb_DataTypeConversion3_c = MAX_int16_T;
  }

  /* End of DataTypeConversion: '<S938>/Data Type Conversion3' */
  /* Gain: '<S938>/Convert to integer 0.01Hz resolution' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S938>/motohawk_calibration4'
   */
  rtb_Switch_h = 100.0 * (FAN1_PWMFrequency_DataStore());

  /* DataTypeConversion: '<S938>/Data Type Conversion2' */
  if (rtb_Switch_h < 4.294967296E+9) {
    if (rtb_Switch_h >= 0.0) {
      rtb_DataTypeConversion2_j = (uint32_T)rtb_Switch_h;
    } else {
      rtb_DataTypeConversion2_j = 0U;
    }
  } else {
    rtb_DataTypeConversion2_j = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S938>/Data Type Conversion2' */

  /* DataTypeConversion: '<S853>/Data Type Conversion1' */
  rtb_LogicalOperator6_b = (BaseEngineController_LS_B.s135_FAN2 != 0.0);

  /* If: '<S943>/If' incorporates:
   *  Inport: '<S944>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S943>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S943>/override_enable'
   */
  if ((FAN2_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S943>/NewValue' incorporates:
     *  ActionPort: '<S944>/Action Port'
     */
    rtb_LogicalOperator6_b = (FAN2_new_DataStore());

    /* End of Outputs for SubSystem: '<S943>/NewValue' */
  } else {
  }

  /* End of If: '<S943>/If' */

  /* Logic: '<S937>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S937>/0 = No Inversion 1 = Inversion'
   */
  BaseEngineController_LS_B.s937_LogicalOperator = rtb_LogicalOperator6_b ^
    (FAN2_Polarity_DataStore());

  /* If: '<S951>/If' incorporates:
   *  Inport: '<S952>/In1'
   *  Inport: '<S953>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S951>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S951>/override_enable'
   */
  if ((FAN2_PWM_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S951>/NewValue' incorporates:
     *  ActionPort: '<S952>/Action Port'
     */
    rtb_DataTypeConversion1_e = (FAN2_PWM_new_DataStore());

    /* End of Outputs for SubSystem: '<S951>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S951>/OldValue' incorporates:
     *  ActionPort: '<S953>/Action Port'
     */
    rtb_DataTypeConversion1_e = BaseEngineController_LS_B.s135_FAN2;

    /* End of Outputs for SubSystem: '<S951>/OldValue' */
  }

  /* End of If: '<S951>/If' */

  /* Product: '<S939>/Product' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S939>/motohawk_calibration'
   */
  rtb_DataTypeConversion1_e *= (FAN2_PWMGain_DataStore());

  /* Sum: '<S939>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S939>/motohawk_calibration1'
   */
  rtb_Switch_h = rtb_DataTypeConversion1_e + (FAN2_PWMOffset_DataStore());

  /* MinMax: '<S950>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S939>/motohawk_calibration2'
   */
  rtb_Switch_h = (rtb_Switch_h >= (FAN2_PWMMinLimit_DataStore())) || rtIsNaN
    ((FAN2_PWMMinLimit_DataStore())) ? rtb_Switch_h :
    (FAN2_PWMMinLimit_DataStore());

  /* MinMax: '<S950>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S939>/motohawk_calibration3'
   */
  BaseEngineController_LS_B.s950_MinMax1 = (rtb_Switch_h <=
    (FAN2_PWMMaxLimit_DataStore())) || rtIsNaN((FAN2_PWMMaxLimit_DataStore())) ?
    rtb_Switch_h : (FAN2_PWMMaxLimit_DataStore());

  /* Gain: '<S939>/Convert to integer 14-bit PWM resolution' */
  rtb_Switch_h = 40.95 * BaseEngineController_LS_B.s950_MinMax1;

  /* DataTypeConversion: '<S939>/Data Type Conversion3' */
  if (rtb_Switch_h < 32768.0) {
    if (rtb_Switch_h >= -32768.0) {
      rtb_DataTypeConversion3_k = (int16_T)rtb_Switch_h;
    } else {
      rtb_DataTypeConversion3_k = MIN_int16_T;
    }
  } else {
    rtb_DataTypeConversion3_k = MAX_int16_T;
  }

  /* End of DataTypeConversion: '<S939>/Data Type Conversion3' */
  /* Gain: '<S939>/Convert to integer 0.01Hz resolution' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S939>/motohawk_calibration4'
   */
  rtb_Switch_h = 100.0 * (FAN2_PWMFrequency_DataStore());

  /* DataTypeConversion: '<S939>/Data Type Conversion2' */
  if (rtb_Switch_h < 4.294967296E+9) {
    if (rtb_Switch_h >= 0.0) {
      rtb_DataTypeConversion2_e = (uint32_T)rtb_Switch_h;
    } else {
      rtb_DataTypeConversion2_e = 0U;
    }
  } else {
    rtb_DataTypeConversion2_e = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S939>/Data Type Conversion2' */

  /* S-Function Block: <S442>/motohawk_din Resource: ESTOPPin */
  {
    extern NativeError_S ESTOPPin_DigitalInput_Get(boolean_T *out, uint16_T
      *status);
    ESTOPPin_DigitalInput_Get(&BaseEngineController_LS_B.s442_motohawk_din, NULL);
  }

  /* Logic: '<S562>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S562>/0 = No Inversion 1 = Inversion'
   */
  rtb_LogicalOperator6_b = BaseEngineController_LS_B.s442_motohawk_din ^
    (ESTOPPolarity_DataStore());

  /* If: '<S574>/If' incorporates:
   *  Inport: '<S575>/In1'
   *  Inport: '<S576>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S574>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S574>/override_enable'
   */
  if ((ESTOP_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S574>/NewValue' incorporates:
     *  ActionPort: '<S575>/Action Port'
     */
    BaseEngineController_LS_B.s574_Merge = (ESTOP_new_DataStore());

    /* End of Outputs for SubSystem: '<S574>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S574>/OldValue' incorporates:
     *  ActionPort: '<S576>/Action Port'
     */
    BaseEngineController_LS_B.s574_Merge = rtb_LogicalOperator6_b;

    /* End of Outputs for SubSystem: '<S574>/OldValue' */
  }

  /* End of If: '<S574>/If' */

  /* Logic: '<S13>/Logical Operator5' incorporates:
   *  Logic: '<S13>/Logical Operator4'
   */
  rtb_LogicalOperator6_b = (rtb_RelationalOperator5_fz &&
    (!BaseEngineController_LS_B.s574_Merge));

  /* If: '<S955>/If' incorporates:
   *  Inport: '<S956>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S955>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S955>/override_enable'
   */
  if ((FUELP_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S955>/NewValue' incorporates:
     *  ActionPort: '<S956>/Action Port'
     */
    rtb_LogicalOperator6_b = (FUELP_new_DataStore());

    /* End of Outputs for SubSystem: '<S955>/NewValue' */
  } else {
  }

  /* End of If: '<S955>/If' */

  /* Logic: '<S954>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S954>/0 = No Inversion 1 = Inversion'
   */
  BaseEngineController_LS_B.s954_LogicalOperator = rtb_LogicalOperator6_b ^
    (FUELP_Polarity_DataStore());

  /* S-Function Block: <S958>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s958_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_oe = ((real_T) delta) * 0.000001;
  }

  /* S-Function Block: <S435>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s435_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_ds = ((real_T) delta) * 0.000001;
  }

  /* RelationalOperator: '<S434>/RelOp' incorporates:
   *  Constant: '<S434>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S415>/motohawk_data_read'
   */
  rtb_LogicalOperator6_b = (((uint8_T)EngineState_DataStore()) == 1);

  /* S-Function Block: <S415>/motohawk_ain_read Resource: ECUP */
  {
    extern NativeError_S ECUP_AnalogInput_Get(uint16_T *adc, uint16_T *status);
    ECUP_AnalogInput_Get(&rtb_motohawk_ain_read_o, NULL);
  }

  /* Switch: '<S435>/Switch' incorporates:
   *  Constant: '<S415>/Constant1'
   *  Constant: '<S435>/Constant'
   *  Logic: '<S415>/Logical Operator'
   *  RelationalOperator: '<S415>/Relational Operator'
   *  S-Function (motohawk_sfun_ain_read): '<S415>/motohawk_ain_read'
   *  S-Function (motohawk_sfun_data_read): '<S435>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S435>/motohawk_delta_time'
   *  Sum: '<S435>/Sum'
   */
  if (rtb_LogicalOperator6_b && (rtb_motohawk_ain_read_o > 150)) {
    BaseEngineController_LS_B.s435_Switch = rtb_motohawk_delta_time_ds +
      TimeSinceStallTimer_DataStore();
  } else {
    BaseEngineController_LS_B.s435_Switch = 0.0;
  }

  /* End of Switch: '<S435>/Switch' */
  /* RelationalOperator: '<S852>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S852>/motohawk_calibration3'
   */
  rtb_RelationalOperator3_bp = (BaseEngineController_LS_B.s435_Switch >
    (ETC_CutPower_StallTime_DataStore()));

  /* Outputs for Enabled SubSystem: '<S14>/Electronic Throttle Controller' incorporates:
   *  EnablePort: '<S20>/Enable'
   */
  /* RelationalOperator: '<S19>/RelOp' incorporates:
   *  Constant: '<S19>/Constant'
   *  Constant: '<S31>/Constant2'
   *  Constant: '<S53>/Constant'
   *  Inport: '<S52>/In1'
   *  RelationalOperator: '<S53>/RelOp'
   *  S-Function (motohawk_sfun_data_read): '<S14>/motohawk_data_read'
   *  S-Function (motohawk_sfun_data_read): '<S31>/motohawk_data_read3'
   *  Sum: '<S31>/Add2'
   */
  if (!AirControlSource_DataStore()) {
    if (!BaseEngineController_LS_DWork.s14_ElectronicThrottleController_MODE) {
      BaseEngineController_LS_DWork.s14_ElectronicThrottleController_MODE = TRUE;
    }

    /* RelationalOperator: '<S62>/RelOp' incorporates:
     *  Constant: '<S62>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S32>/motohawk_data_read3'
     */
    rtb_LogicalOperator6_b = (((uint8_T)EngineState_DataStore()) == 1);

    /* Logic: '<S32>/Logical Operator2' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S32>/motohawk_data_read2'
     */
    rtb_LogicalOperator1_al = !ShutDownTasksComplete_DataStore();

    /* S-Function Block: <S32>/motohawk_ain_read Resource: ECUP */
    {
      extern NativeError_S ECUP_AnalogInput_Get(uint16_T *adc, uint16_T *status);
      ECUP_AnalogInput_Get(&rtb_motohawk_ain_read_a, NULL);
    }

    /* RelationalOperator: '<S32>/Relational Operator' incorporates:
     *  Constant: '<S32>/Constant1'
     *  S-Function (motohawk_sfun_ain_read): '<S32>/motohawk_ain_read'
     */
    rtb_AboveHiTarget = (rtb_motohawk_ain_read_a < 150);

    /* Logic: '<S32>/Logical Operator3' */
    BaseEngineController_LS_B.s32_LogicalOperator3 = ((rtb_LogicalOperator6_b &&
      rtb_LogicalOperator1_al && rtb_AboveHiTarget));

    /* S-Function Block: <S63>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s63_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_dr = ((real_T) delta) * 0.000001;
    }

    /* Switch: '<S63>/Switch' incorporates:
     *  Constant: '<S63>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S63>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S63>/motohawk_delta_time'
     *  Sum: '<S63>/Sum'
     */
    if (rtb_AboveHiTarget) {
      BaseEngineController_LS_B.s63_Switch = rtb_motohawk_delta_time_dr +
        ETCShutDownTimer_DataStore();
    } else {
      BaseEngineController_LS_B.s63_Switch = 0.0;
    }

    /* End of Switch: '<S63>/Switch' */

    /* UnitDelay: '<S20>/Unit Delay' */
    rtb_DataTypeConversion1_e =
      BaseEngineController_LS_DWork.s20_UnitDelay_DSTATE;

    /* RelationalOperator: '<S20>/Relational Operator5' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S20>/motohawk_calibration4'
     */
    BaseEngineController_LS_B.s20_RelationalOperator5 =
      ((rtb_DataTypeConversion1_e < (ETC_ShutdownLoAdaptError_DataStore())));

    /* RelationalOperator: '<S20>/Relational Operator2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S20>/motohawk_calibration5'
     */
    BaseEngineController_LS_B.s20_RelationalOperator2 =
      ((BaseEngineController_LS_B.s412_Switch2 >
        (ETC_SpringTestHiThresh_DataStore())));

    /* RelationalOperator: '<S20>/Relational Operator3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S20>/motohawk_calibration6'
     */
    BaseEngineController_LS_B.s20_RelationalOperator3 =
      ((BaseEngineController_LS_B.s412_Switch2 <
        (ETC_SpringTestLoThresh_DataStore())));

    /* Stateflow: '<S20>/ETC Test  Manager' */

    /* Gateway: Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/ETC Test  Manager */
    /* During: Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/ETC Test  Manager */
    switch (BaseEngineController_LS_DWork.s27_is_c9_BaseEngineController_LS) {
     case BaseEngineController_LS_IN_ForcedShutdown:
      /* During 'ForcedShutdown': '<S27>:6' */
      if (!BaseEngineController_LS_B.s32_LogicalOperator3) {
        /* Transition: '<S27>:19' */
        BaseEngineController_LS_DWork.s27_is_c9_BaseEngineController_LS =
          BaseEngineController_LS_IN_SpringTestComplete;

        /* Entry 'SpringTestComplete': '<S27>:5' */
        BaseEngineController_LS_B.s27_DC_Override = 1;
        BaseEngineController_LS_B.s27_TestComplete = TRUE;
        BaseEngineController_LS_B.s27_SetpointMode = 0;
        BaseEngineController_LS_B.s27_TestTime =
          BaseEngineController_LS_B.s63_Switch -
          BaseEngineController_LS_DWork.s27_TimerOld;
      }
      break;

     case BaseEngineController_LS_IN_LowAdapt:
      /* During 'LowAdapt': '<S27>:2' */
      if (BaseEngineController_LS_B.s63_Switch > 5.0) {
        /* Transition: '<S27>:17' */
        BaseEngineController_LS_DWork.s27_is_c9_BaseEngineController_LS =
          BaseEngineController_LS_IN_ForcedShutdown;

        /* Entry 'ForcedShutdown': '<S27>:6' */
        BaseEngineController_LS_B.s27_DC_Override = 1;
        BaseEngineController_LS_B.s27_TestComplete = TRUE;
        BaseEngineController_LS_B.s27_SetpointMode = 0;
        BaseEngineController_LS_B.s27_TestTime = 0.0;
      } else if (BaseEngineController_LS_B.s32_LogicalOperator3 &&
                 BaseEngineController_LS_B.s20_RelationalOperator5) {
        /* Transition: '<S27>:9' */
        BaseEngineController_LS_DWork.s27_is_c9_BaseEngineController_LS =
          BaseEngineController_LS_IN_SpringTestSetpoint;

        /* Entry 'SpringTestSetpoint': '<S27>:3' */
        BaseEngineController_LS_B.s27_DC_Override = 0;
        BaseEngineController_LS_B.s27_TestComplete = FALSE;
        BaseEngineController_LS_B.s27_SetpointMode = 2;
        BaseEngineController_LS_B.s27_TestTime = 0.0;
      } else {
        if (!BaseEngineController_LS_B.s32_LogicalOperator3) {
          /* Transition: '<S27>:12' */
          BaseEngineController_LS_DWork.s27_is_c9_BaseEngineController_LS =
            BaseEngineController_LS_IN_PassThrough;

          /* Entry 'PassThrough': '<S27>:1' */
          BaseEngineController_LS_B.s27_DC_Override = 0;
          BaseEngineController_LS_B.s27_TestComplete = FALSE;
          BaseEngineController_LS_B.s27_SetpointMode = 0;
          BaseEngineController_LS_B.s27_TestTime = 0.0;
        }
      }
      break;

     case BaseEngineController_LS_IN_PassThrough:
      /* During 'PassThrough': '<S27>:1' */
      if (BaseEngineController_LS_B.s32_LogicalOperator3) {
        /* Transition: '<S27>:8' */
        BaseEngineController_LS_DWork.s27_is_c9_BaseEngineController_LS =
          BaseEngineController_LS_IN_LowAdapt;

        /* Entry 'LowAdapt': '<S27>:2' */
        BaseEngineController_LS_B.s27_DC_Override = 0;
        BaseEngineController_LS_B.s27_TestComplete = FALSE;
        BaseEngineController_LS_B.s27_SetpointMode = 1;
        BaseEngineController_LS_B.s27_TestTime = 0.0;
      }
      break;

     case BaseEngineController_LS_IN_SpringTest:
      /* During 'SpringTest': '<S27>:4' */
      if (BaseEngineController_LS_B.s63_Switch > 5.0) {
        /* Transition: '<S27>:16' */
        BaseEngineController_LS_DWork.s27_is_c9_BaseEngineController_LS =
          BaseEngineController_LS_IN_ForcedShutdown;

        /* Entry 'ForcedShutdown': '<S27>:6' */
        BaseEngineController_LS_B.s27_DC_Override = 1;
        BaseEngineController_LS_B.s27_TestComplete = TRUE;
        BaseEngineController_LS_B.s27_SetpointMode = 0;
        BaseEngineController_LS_B.s27_TestTime = 0.0;
      } else if (BaseEngineController_LS_B.s32_LogicalOperator3 &&
                 BaseEngineController_LS_B.s20_RelationalOperator3) {
        /* Transition: '<S27>:11' */
        BaseEngineController_LS_DWork.s27_is_c9_BaseEngineController_LS =
          BaseEngineController_LS_IN_SpringTestComplete;

        /* Entry 'SpringTestComplete': '<S27>:5' */
        BaseEngineController_LS_B.s27_DC_Override = 1;
        BaseEngineController_LS_B.s27_TestComplete = TRUE;
        BaseEngineController_LS_B.s27_SetpointMode = 0;
        BaseEngineController_LS_B.s27_TestTime =
          BaseEngineController_LS_B.s63_Switch -
          BaseEngineController_LS_DWork.s27_TimerOld;
      } else {
        if (!BaseEngineController_LS_B.s32_LogicalOperator3) {
          /* Transition: '<S27>:15' */
          BaseEngineController_LS_DWork.s27_is_c9_BaseEngineController_LS =
            BaseEngineController_LS_IN_PassThrough;

          /* Entry 'PassThrough': '<S27>:1' */
          BaseEngineController_LS_B.s27_DC_Override = 0;
          BaseEngineController_LS_B.s27_TestComplete = FALSE;
          BaseEngineController_LS_B.s27_SetpointMode = 0;
          BaseEngineController_LS_B.s27_TestTime = 0.0;
        }
      }
      break;

     case BaseEngineController_LS_IN_SpringTestComplete:
      /* During 'SpringTestComplete': '<S27>:5' */
      if (!BaseEngineController_LS_B.s32_LogicalOperator3) {
        /* Transition: '<S27>:14' */
        BaseEngineController_LS_DWork.s27_is_c9_BaseEngineController_LS =
          BaseEngineController_LS_IN_PassThrough;

        /* Entry 'PassThrough': '<S27>:1' */
        BaseEngineController_LS_B.s27_DC_Override = 0;
        BaseEngineController_LS_B.s27_TestComplete = FALSE;
        BaseEngineController_LS_B.s27_SetpointMode = 0;
        BaseEngineController_LS_B.s27_TestTime = 0.0;
      }
      break;

     case BaseEngineController_LS_IN_SpringTestSetpoint:
      /* During 'SpringTestSetpoint': '<S27>:3' */
      if (!BaseEngineController_LS_B.s32_LogicalOperator3) {
        /* Transition: '<S27>:13' */
        BaseEngineController_LS_DWork.s27_is_c9_BaseEngineController_LS =
          BaseEngineController_LS_IN_PassThrough;

        /* Entry 'PassThrough': '<S27>:1' */
        BaseEngineController_LS_B.s27_DC_Override = 0;
        BaseEngineController_LS_B.s27_TestComplete = FALSE;
        BaseEngineController_LS_B.s27_SetpointMode = 0;
        BaseEngineController_LS_B.s27_TestTime = 0.0;
      } else if (BaseEngineController_LS_B.s32_LogicalOperator3 &&
                 BaseEngineController_LS_B.s20_RelationalOperator2) {
        /* Transition: '<S27>:10' */
        BaseEngineController_LS_DWork.s27_is_c9_BaseEngineController_LS =
          BaseEngineController_LS_IN_SpringTest;

        /* Entry 'SpringTest': '<S27>:4' */
        BaseEngineController_LS_B.s27_DC_Override = 1;
        BaseEngineController_LS_B.s27_TestComplete = FALSE;
        BaseEngineController_LS_B.s27_SetpointMode = 0;
        BaseEngineController_LS_B.s27_TestTime = 0.0;
        BaseEngineController_LS_DWork.s27_TimerOld =
          BaseEngineController_LS_B.s63_Switch;
      } else {
        if (BaseEngineController_LS_B.s63_Switch > 5.0) {
          /* Transition: '<S27>:18' */
          BaseEngineController_LS_DWork.s27_is_c9_BaseEngineController_LS =
            BaseEngineController_LS_IN_ForcedShutdown;

          /* Entry 'ForcedShutdown': '<S27>:6' */
          BaseEngineController_LS_B.s27_DC_Override = 1;
          BaseEngineController_LS_B.s27_TestComplete = TRUE;
          BaseEngineController_LS_B.s27_SetpointMode = 0;
          BaseEngineController_LS_B.s27_TestTime = 0.0;
        }
      }
      break;

     default:
      /* Transition: '<S27>:7' */
      BaseEngineController_LS_DWork.s27_is_c9_BaseEngineController_LS =
        BaseEngineController_LS_IN_PassThrough;

      /* Entry 'PassThrough': '<S27>:1' */
      BaseEngineController_LS_B.s27_DC_Override = 0;
      BaseEngineController_LS_B.s27_TestComplete = FALSE;
      BaseEngineController_LS_B.s27_SetpointMode = 0;
      BaseEngineController_LS_B.s27_TestTime = 0.0;
      break;
    }

    /* End of Stateflow: '<S20>/ETC Test  Manager' */

    /* RelationalOperator: '<S33>/RelOp' incorporates:
     *  Constant: '<S33>/Constant'
     */
    rtb_LogicalOperator6_b = (BaseEngineController_LS_B.s27_SetpointMode == 1);

    /* S-Function Block: <S56>/motohawk_delta_time */
    rtb_motohawk_delta_time_mz = 0.005;

    /* Switch: '<S56>/Switch' incorporates:
     *  Constant: '<S56>/Constant'
     *  S-Function (motohawk_sfun_calibration): '<S54>/motohawk_calibration'
     *  S-Function (motohawk_sfun_data_read): '<S56>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S56>/motohawk_delta_time'
     *  Sum: '<S56>/Sum'
     */
    if ((ETCTuneEnable_DataStore())) {
      rtb_Switch_k = rtb_motohawk_delta_time_mz + ETC_Tune_Timer_DataStore();
    } else {
      rtb_Switch_k = 0.0;
    }

    /* End of Switch: '<S56>/Switch' */
    /* If: '<S57>/If' incorporates:
     *  Inport: '<S58>/In1'
     *  Inport: '<S59>/In1'
     *  S-Function (motohawk_sfun_calibration): '<S57>/new_value'
     *  S-Function (motohawk_sfun_calibration): '<S57>/override_enable'
     */
    if ((ETCReq_ovr_DataStore())) {
      /* Outputs for IfAction SubSystem: '<S57>/NewValue' incorporates:
       *  ActionPort: '<S58>/Action Port'
       */
      rtb_DataTypeConversion_b2 = (ETCReq_new_DataStore());

      /* End of Outputs for SubSystem: '<S57>/NewValue' */
    } else {
      /* Outputs for IfAction SubSystem: '<S57>/OldValue' incorporates:
       *  ActionPort: '<S59>/Action Port'
       */
      rtb_DataTypeConversion_b2 = BaseEngineController_LS_B.s135_Throttle;

      /* End of Outputs for SubSystem: '<S57>/OldValue' */
    }

    /* End of If: '<S57>/If' */

    /* S-Function Block: <S55>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s55_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_jc = ((real_T) delta) * 0.000001;
    }

    /* Outputs for Enabled SubSystem: '<S31>/PassThrough' incorporates:
     *  EnablePort: '<S52>/Enable'
     */
    if (BaseEngineController_LS_B.s27_SetpointMode == 1) {
      if (!BaseEngineController_LS_DWork.s31_PassThrough_MODE) {
        BaseEngineController_LS_DWork.s31_PassThrough_MODE = TRUE;
      }

      BaseEngineController_LS_B.s52_In1 = -5.0 +
        ETC_ShutdownLoAdaptError_DataStore();
    } else {
      if (BaseEngineController_LS_DWork.s31_PassThrough_MODE) {
        /* Disable for Outport: '<S52>/Out1' */
        BaseEngineController_LS_B.s52_In1 = 10.0;
        BaseEngineController_LS_DWork.s31_PassThrough_MODE = FALSE;
      }
    }

    /* End of Outputs for SubSystem: '<S31>/PassThrough' */

    /* UnitDelay: '<S55>/Unit Delay' incorporates:
     *  Constant: '<S31>/Constant2'
     *  Constant: '<S53>/Constant'
     *  Inport: '<S52>/In1'
     *  RelationalOperator: '<S53>/RelOp'
     *  S-Function (motohawk_sfun_data_read): '<S31>/motohawk_data_read3'
     *  Sum: '<S31>/Add2'
     */
    rtb_DataTypeConversion1_e =
      BaseEngineController_LS_DWork.s55_UnitDelay_DSTATE;

    /* Product: '<S55>/Product1' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S55>/motohawk_delta_time'
     *  Sum: '<S55>/Sum3'
     *  UnitDelay: '<S55>/Unit Delay'
     */
    rtb_Product5_o = 1.0 / rtb_motohawk_delta_time_jc *
      (BaseEngineController_LS_B.s52_In1 -
       BaseEngineController_LS_DWork.s55_UnitDelay_DSTATE);

    /* MinMax: '<S60>/MinMax' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S31>/motohawk_calibration2'
     */
    rtb_Product5_o = (rtb_Product5_o >= (ETC_LoAdaptRateLimit_DataStore())) ||
      rtIsNaN((ETC_LoAdaptRateLimit_DataStore())) ? rtb_Product5_o :
      (ETC_LoAdaptRateLimit_DataStore());

    /* Sum: '<S55>/Sum2' incorporates:
     *  Constant: '<S31>/Constant7'
     *  MinMax: '<S60>/MinMax1'
     *  Product: '<S55>/Product'
     *  S-Function (motohawk_sfun_delta_time): '<S55>/motohawk_delta_time'
     */
    rtb_Switch_c = (rtb_Product5_o <= 100.0 ? rtb_Product5_o : 100.0) *
      rtb_motohawk_delta_time_jc + rtb_DataTypeConversion1_e;

    /* MultiPortSwitch: '<S31>/Multiport Switch' incorporates:
     *  Constant: '<S31>/Constant1'
     *  S-Function (motohawk_sfun_data_read): '<S31>/motohawk_data_read1'
     *  Sum: '<S31>/Add1'
     */
    switch (BaseEngineController_LS_B.s27_SetpointMode) {
     case 0:
      /* Switch: '<S54>/Switch' incorporates:
       *  Fcn: '<S54>/Sine Wave'
       *  S-Function (motohawk_sfun_calibration): '<S54>/motohawk_calibration'
       *  S-Function (motohawk_sfun_calibration): '<S54>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_calibration): '<S54>/motohawk_calibration2'
       *  S-Function (motohawk_sfun_calibration): '<S54>/motohawk_calibration4'
       *  Sum: '<S54>/Sum'
       */
      if ((ETCTuneEnable_DataStore())) {
        BaseEngineController_LS_B.s31_MultiportSwitch = (sin(6.2831853071795862 *
          (ETCTuneFreq_DataStore()) * rtb_Switch_k) * (ETCTuneAmp_DataStore()) +
          (ETCTuneAmp_DataStore())) + (ETCTuneOffset_DataStore());
      } else {
        BaseEngineController_LS_B.s31_MultiportSwitch =
          rtb_DataTypeConversion_b2;
      }

      /* End of Switch: '<S54>/Switch' */
      break;

     case 1:
      BaseEngineController_LS_B.s31_MultiportSwitch = rtb_Switch_c;
      break;

     default:
      BaseEngineController_LS_B.s31_MultiportSwitch = 10.0 +
        ETC_SpringTestHiThresh_DataStore();
      break;
    }

    /* End of MultiPortSwitch: '<S31>/Multiport Switch' */

    /* Sum: '<S31>/Add' */
    rtb_Multiplyby10ifnotyetenabled =
      BaseEngineController_LS_B.s31_MultiportSwitch -
      BaseEngineController_LS_B.s412_Switch2;

    /* Logic: '<S25>/Logical Operator' incorporates:
     *  Constant: '<S25>/Constant1'
     *  RelationalOperator: '<S25>/Relational Operator4'
     *  S-Function (motohawk_sfun_data_read): '<S25>/motohawk_data_read1'
     *  Sum: '<S25>/Add1'
     */
    rtb_LogicalOperator_np = ((rtb_LogicalOperator6_b &&
      (rtb_Multiplyby10ifnotyetenabled <= 5.0 +
       ETC_ShutdownLoAdaptError_DataStore())));

    /* S-Function (motohawk_sfun_data_write): '<S25>/motohawk_data_write1' */
    /* Write to Data Storage as scalar: TPSAdaptLoRequest */
    {
      TPSAdaptLoRequest_DataStore() = rtb_LogicalOperator_np;
    }

    /* Abs: '<S26>/Abs' */
    rtb_Product5_o = fabs(rtb_Multiplyby10ifnotyetenabled);

    /* Logic: '<S26>/Logical Operator' incorporates:
     *  Constant: '<S34>/Constant'
     *  RelationalOperator: '<S26>/Relational Operator4'
     *  RelationalOperator: '<S34>/RelOp'
     *  S-Function (motohawk_sfun_calibration): '<S26>/motohawk_calibration1'
     */
    rtb_LogicalOperator_di = (((rtb_Product5_o > (ETC_StickingThresh_DataStore()))
      && (BaseEngineController_LS_B.s27_SetpointMode == 0)));

    /* S-Function (motohawk_sfun_fault_def): '<S26>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: ETC_Sticking */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(53, rtb_LogicalOperator_di);
      UpdateFault(53);
    }

    /* Outputs for Triggered SubSystem: '<S20>/Reset TasksComplete To True' incorporates:
     *  TriggerPort: '<S30>/Trigger'
     */
    if (BaseEngineController_LS_B.s27_TestComplete &&
        (BaseEngineController_LS_PrevZCSigState.ResetTasksCompleteToTrue_Trig_ZCE
         != POS_ZCSIG)) {
      /* S-Function (motohawk_sfun_data_write): '<S30>/motohawk_data_write' incorporates:
       *  Constant: '<S30>/Constant2'
       */
      /* Write to Data Storage as scalar: ShutDownTasksComplete */
      {
        ShutDownTasksComplete_DataStore() = TRUE;
      }
    }

    BaseEngineController_LS_PrevZCSigState.ResetTasksCompleteToTrue_Trig_ZCE =
      (uint8_T)(BaseEngineController_LS_B.s27_TestComplete ? (int32_T)POS_ZCSIG :
                (int32_T)ZERO_ZCSIG);

    /* End of Outputs for SubSystem: '<S20>/Reset TasksComplete To True' */

    /* S-Function (motohawk_sfun_data_write): '<S20>/motohawk_data_write' */
    /* Write to Data Storage as scalar: SpringTestTime */
    {
      SpringTestTime_DataStore() = BaseEngineController_LS_B.s27_TestTime;
    }

    /* RelationalOperator: '<S20>/Relational Operator1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S20>/motohawk_calibration3'
     */
    rtb_RelationalOperator1_hq = (((ETC_SpringTestTimerThresh_DataStore()) <
      BaseEngineController_LS_B.s27_TestTime));

    /* S-Function (motohawk_sfun_fault_def): '<S20>/motohawk_fault_def' */

    /* Set Fault Suspected Status: ETCSpringTest */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(51, rtb_RelationalOperator1_hq);
      UpdateFault(51);
    }

    /* RelationalOperator: '<S28>/Relational Operator6' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S28>/motohawk_calibration4'
     *  S-Function (motohawk_sfun_data_read): '<S28>/motohawk_data_read'
     */
    rtb_LogicalOperator6_b = (TimeSinceStall_DataStore() >
      (ETCShutdownTimerThresh_DataStore()));

    /* S-Function Block: <S28>/motohawk_ain_read Resource: ECUP */
    {
      extern NativeError_S ECUP_AnalogInput_Get(uint16_T *adc, uint16_T *status);
      ECUP_AnalogInput_Get(&rtb_motohawk_ain_read_g, NULL);
    }

    /* Logic: '<S28>/Logical Operator' incorporates:
     *  Constant: '<S28>/Constant1'
     *  RelationalOperator: '<S28>/Relational Operator'
     *  S-Function (motohawk_sfun_ain_read): '<S28>/motohawk_ain_read'
     */
    BaseEngineController_LS_B.s28_LogicalOperator = ((rtb_LogicalOperator6_b &&
      (rtb_motohawk_ain_read_g > 150)));

    /* Logic: '<S20>/Logical Operator' */
    rtb_LogicalOperator6_b = ((BaseEngineController_LS_B.s27_DC_Override != 0) ||
      BaseEngineController_LS_B.s28_LogicalOperator);

    /* S-Function Block: <S29>/motohawk_prelookup2 */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (ETC_SetpointIn_DataStore()) =
        BaseEngineController_LS_B.s31_MultiportSwitch;
      (ETC_SetpointIdx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_LS_B.s31_MultiportSwitch,
         (ETC_SetpointIdxArr_DataStore()), 20, (ETC_SetpointIdx_DataStore()));
      rtb_motohawk_prelookup2_a = (ETC_SetpointIdx_DataStore());
    }

    /* S-Function Block: <S29>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_d = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup2_a, (real_T *) ((ETCDCOffsetTbl_DataStore())),
         20);
      (ETCDCOffset_DataStore()) = rtb_motohawk_interpolation_1d_d;
    }

    /* UnitDelay: '<S46>/Unit Delay' */
    rtb_DataTypeConversion_b2 =
      BaseEngineController_LS_DWork.s46_UnitDelay_DSTATE;

    /* UnitDelay: '<S42>/Unit Delay' */
    rtb_DataTypeConversion1_e =
      BaseEngineController_LS_DWork.s42_UnitDelay_DSTATE;

    /* S-Function Block: <S43>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s43_motohawk_delta_time_DWORK1, NULL);
      rtb_Product5_o = ((real_T) delta) * 0.000001;
    }

    /* Product: '<S43>/Product' incorporates:
     *  MinMax: '<S43>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S43>/motohawk_calibration'
     */
    rtb_Product5_o /= (rtb_Product5_o >= (ETCDamperTPSFilt_DataStore())) ||
      rtIsNaN((ETCDamperTPSFilt_DataStore())) ? rtb_Product5_o :
      (ETCDamperTPSFilt_DataStore());

    /* Sum: '<S44>/Sum1' incorporates:
     *  Constant: '<S44>/Constant'
     *  Product: '<S44>/Product'
     *  Product: '<S44>/Product1'
     *  Sum: '<S44>/Sum'
     *  UnitDelay: '<S44>/Unit Delay'
     */
    rtb_Product4_o = (1.0 - rtb_Product5_o) *
      BaseEngineController_LS_DWork.s44_UnitDelay_DSTATE +
      BaseEngineController_LS_B.s412_Switch2 * rtb_Product5_o;

    /* S-Function Block: <S42>/motohawk_delta_time */
    rtb_motohawk_delta_time_hc = 0.005;

    /* Product: '<S42>/Product' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S42>/motohawk_delta_time'
     *  Sum: '<S42>/Sum2'
     */
    BaseEngineController_LS_B.s42_Product = (rtb_Product4_o -
      rtb_DataTypeConversion1_e) / rtb_motohawk_delta_time_hc;

    /* Sum: '<S35>/Sum1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S35>/motohawk_calibration10'
     *  S-Function (motohawk_sfun_calibration): '<S35>/motohawk_calibration5'
     */
    rtb_Product5_o = (ETCDamperSwitchThresh_DataStore()) -
      (ETCDamperSwitchHyst_DataStore());

    /* RelationalOperator: '<S41>/LT' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S35>/motohawk_calibration5'
     */
    rtb_AboveHiTarget = (rtb_Product5_o >= (ETCDamperSwitchThresh_DataStore()));

    /* RelationalOperator: '<S41>/LT1' */
    rtb_BelowLoTarget = (rtb_Product5_o <= BaseEngineController_LS_B.s42_Product);

    /* CombinatorialLogic: '<S45>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_AboveHiTarget != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_d[0] =
        BaseEngineController_LS_ConstP.pooled908[rowidx];
      rtb_CombinatorialLogic_d[1] =
        BaseEngineController_LS_ConstP.pooled908[rowidx + 4];
    }

    /* Switch: '<S45>/Switch1' incorporates:
     *  UnitDelay: '<S45>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_d[1]) {
      rtb_LogicalOperator1_al = rtb_CombinatorialLogic_d[0];
    } else {
      rtb_LogicalOperator1_al =
        BaseEngineController_LS_DWork.s45_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S45>/Switch1' */

    /* Switch: '<S41>/Switch2' incorporates:
     *  Logic: '<S41>/Logical Operator'
     *  S-Function (motohawk_sfun_calibration): '<S35>/motohawk_calibration5'
     */
    if (!rtb_LogicalOperator1_al) {
      BaseEngineController_LS_B.s41_Switch2 = (ETCDamperSwitchThresh_DataStore());
    } else {
      BaseEngineController_LS_B.s41_Switch2 =
        BaseEngineController_LS_B.s42_Product;
    }

    /* End of Switch: '<S41>/Switch2' */

    /* RelationalOperator: '<S35>/Relational Operator' */
    BaseEngineController_LS_B.s35_RelationalOperator =
      ((BaseEngineController_LS_B.s42_Product >
        BaseEngineController_LS_B.s41_Switch2));

    /* Switch: '<S38>/Switch' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S29>/motohawk_calibration7'
     *  S-Function (motohawk_sfun_calibration): '<S29>/motohawk_calibration8'
     */
    if (BaseEngineController_LS_B.s35_RelationalOperator) {
      rtb_Product5_o = (ETCDampGainUp_DataStore());
    } else {
      rtb_Product5_o = (ETCDampGainDown_DataStore());
    }

    /* End of Switch: '<S38>/Switch' */

    /* Product: '<S38>/Product3' */
    rtb_Switch_mq = rtb_Product5_o * BaseEngineController_LS_B.s412_Switch2;

    /* S-Function Block: <S46>/motohawk_delta_time */
    rtb_motohawk_delta_time_oy = 0.005;

    /* Product: '<S46>/Product' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S46>/motohawk_delta_time'
     *  Sum: '<S46>/Sum2'
     */
    BaseEngineController_LS_B.s46_Product = (rtb_Switch_mq -
      rtb_DataTypeConversion_b2) / rtb_motohawk_delta_time_oy;

    /* UnitDelay: '<S47>/Unit Delay' */
    rtb_DataTypeConversion1_e =
      BaseEngineController_LS_DWork.s47_UnitDelay_DSTATE;

    /* Sum: '<S38>/Sum2' */
    BaseEngineController_LS_B.s38_Sum2 =
      BaseEngineController_LS_B.s31_MultiportSwitch -
      BaseEngineController_LS_B.s412_Switch2;

    /* Product: '<S38>/Product5' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S29>/motohawk_calibration6'
     */
    rtb_Product5_o = BaseEngineController_LS_B.s38_Sum2 *
      (ETCErrorGain_DataStore());

    /* Product: '<S38>/Product4' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S29>/motohawk_calibration1'
     */
    rtb_DataTypeConversion_b2 = (ETCDGain_DataStore()) * rtb_Product5_o;

    /* S-Function Block: <S47>/motohawk_delta_time */
    rtb_motohawk_delta_time_e0 = 0.005;

    /* Product: '<S47>/Product' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S47>/motohawk_delta_time'
     *  Sum: '<S47>/Sum2'
     */
    BaseEngineController_LS_B.s47_Product = (rtb_DataTypeConversion_b2 -
      rtb_DataTypeConversion1_e) / rtb_motohawk_delta_time_e0;

    /* Sum: '<S29>/Add' */
    rtb_Add_g1 = BaseEngineController_LS_B.s31_MultiportSwitch -
      BaseEngineController_LS_B.s412_Switch2;

    /* S-Function Block: <S29>/motohawk_prelookup */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (ETC_ErrorIn_DataStore()) = rtb_Add_g1;
      (ETC_ErrorIdx_DataStore()) = TablePrelookup_real_T(rtb_Add_g1,
        (ETC_ErrorIdxArr_DataStore()), 10, (ETC_ErrorIdx_DataStore()));
      rtb_motohawk_prelookup_bs = (ETC_ErrorIdx_DataStore());
    }

    /* S-Function Block: <S37>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_kf = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_bs, (real_T *) ((ETC_PGainMultTbl_DataStore())),
         10);
      (ETC_PGainMult_DataStore()) = rtb_motohawk_interpolation_1d_kf;
    }

    /* Product: '<S38>/Product2' incorporates:
     *  Product: '<S37>/Product'
     *  S-Function (motohawk_sfun_calibration): '<S37>/motohawk_calibration'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S37>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_prelookup): '<S29>/motohawk_prelookup'
     *  Sum: '<S29>/Add'
     */
    BaseEngineController_LS_B.s38_Product2 = rtb_motohawk_interpolation_1d_kf *
      (ETCPGain_DataStore()) * rtb_Product5_o;

    /* Switch: '<S48>/Switch1' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S20>/motohawk_data_read'
     *  UnitDelay: '<S48>/Unit Delay'
     */
    if (ETCStallStateShutdown_DataStore()) {
      BaseEngineController_LS_B.s48_Switch1 = 0.0;
    } else {
      BaseEngineController_LS_B.s48_Switch1 =
        BaseEngineController_LS_DWork.s48_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S48>/Switch1' */

    /* Sum: '<S29>/Sum' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S29>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_prelookup): '<S29>/motohawk_prelookup2'
     *  Sum: '<S38>/Sum'
     */
    rtb_DataTypeConversion1_e = (((BaseEngineController_LS_B.s47_Product -
      BaseEngineController_LS_B.s46_Product) +
      BaseEngineController_LS_B.s38_Product2) +
      BaseEngineController_LS_B.s48_Switch1) + rtb_motohawk_interpolation_1d_d;

    /* MinMax: '<S51>/MinMax' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S39>/motohawk_calibration'
     */
    rtb_Abs_k = (rtb_DataTypeConversion1_e >= (ETCLwrLim_DataStore())) ||
      rtIsNaN((ETCLwrLim_DataStore())) ? rtb_DataTypeConversion1_e :
      (ETCLwrLim_DataStore());

    /* MinMax: '<S51>/MinMax1' incorporates:
     *  MinMax: '<S51>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S39>/motohawk_calibration1'
     */
    BaseEngineController_LS_B.s51_MinMax1 = (rtb_Abs_k <= (ETCUprLim_DataStore()))
      || rtIsNaN((ETCUprLim_DataStore())) ? rtb_Abs_k : (ETCUprLim_DataStore());

    /* S-Function Block: <S36>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_on = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_bs, (real_T *) ((ETC_IGainMultTbl_DataStore())),
         10);
      (ETC_IGainMult_DataStore()) = rtb_motohawk_interpolation_1d_on;
    }

    /* Product: '<S38>/Product1' incorporates:
     *  Product: '<S36>/Product'
     *  S-Function (motohawk_sfun_calibration): '<S36>/motohawk_calibration2'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S36>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_prelookup): '<S29>/motohawk_prelookup'
     *  Sum: '<S29>/Add'
     */
    rtb_DataTypeConversion1_e = rtb_motohawk_interpolation_1d_on *
      (ETCIGain_DataStore()) * rtb_Product5_o;

    /* S-Function Block: <S48>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s48_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_l5 = ((real_T) delta) * 0.000001;
    }

    /* Sum: '<S48>/Sum' incorporates:
     *  Product: '<S48>/Product'
     *  S-Function (motohawk_sfun_delta_time): '<S48>/motohawk_delta_time'
     */
    rtb_DataTypeConversion1_e = rtb_DataTypeConversion1_e *
      rtb_motohawk_delta_time_l5 + BaseEngineController_LS_B.s48_Switch1;

    /* MinMax: '<S50>/MinMax' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S29>/motohawk_calibration3'
     */
    rtb_Abs_k = (rtb_DataTypeConversion1_e >= (ETCIMin_DataStore())) || rtIsNaN
      ((ETCIMin_DataStore())) ? rtb_DataTypeConversion1_e : (ETCIMin_DataStore());

    /* MinMax: '<S50>/MinMax1' incorporates:
     *  MinMax: '<S50>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S29>/motohawk_calibration4'
     */
    y = (rtb_Abs_k <= (ETCIMax_DataStore())) || rtIsNaN((ETCIMax_DataStore())) ?
      rtb_Abs_k : (ETCIMax_DataStore());

    /* Saturate: '<S56>/Saturation' */
    rtb_Saturation_p = rtb_Switch_k >= 16000.0 ? 16000.0 : rtb_Switch_k <= 0.0 ?
      0.0 : rtb_Switch_k;

    /* S-Function (motohawk_sfun_data_write): '<S56>/motohawk_data_write' */
    /* Write to Data Storage as scalar: ETC_Tune_Timer */
    {
      ETC_Tune_Timer_DataStore() = rtb_Saturation_p;
    }

    /* Saturate: '<S63>/Saturation' */
    rtb_Saturation_le = BaseEngineController_LS_B.s63_Switch >= 16000.0 ?
      16000.0 : BaseEngineController_LS_B.s63_Switch <= 0.0 ? 0.0 :
      BaseEngineController_LS_B.s63_Switch;

    /* S-Function (motohawk_sfun_data_write): '<S63>/motohawk_data_write' */
    /* Write to Data Storage as scalar: ETCShutDownTimer */
    {
      ETCShutDownTimer_DataStore() = rtb_Saturation_le;
    }

    /* S-Function (motohawk_sfun_data_read): '<S32>/motohawk_data_read1' */
    rtb_motohawk_data_read1_kw = MPRD_DataStore();

    /* Outputs for Triggered SubSystem: '<S32>/Reset TasksComplete To False' incorporates:
     *  TriggerPort: '<S61>/Trigger'
     */
    if (rtb_motohawk_data_read1_kw &&
        (BaseEngineController_LS_PrevZCSigState.ResetTasksCompleteToFalse_Trig_ZCE
         != POS_ZCSIG)) {
      /* S-Function (motohawk_sfun_data_write): '<S61>/motohawk_data_write' incorporates:
       *  Constant: '<S61>/Constant2'
       */
      /* Write to Data Storage as scalar: ShutDownTasksComplete */
      {
        ShutDownTasksComplete_DataStore() = FALSE;
      }
    }

    BaseEngineController_LS_PrevZCSigState.ResetTasksCompleteToFalse_Trig_ZCE =
      (uint8_T)(rtb_motohawk_data_read1_kw ? (int32_T)POS_ZCSIG : (int32_T)
                ZERO_ZCSIG);

    /* End of Outputs for SubSystem: '<S32>/Reset TasksComplete To False' */

    /* Switch: '<S20>/Switch' incorporates:
     *  Constant: '<S20>/Constant2'
     */
    if (rtb_LogicalOperator6_b) {
      BaseEngineController_LS_B.s20_Switch = 0.0;
    } else {
      BaseEngineController_LS_B.s20_Switch =
        BaseEngineController_LS_B.s51_MinMax1;
    }

    /* End of Switch: '<S20>/Switch' */

    /* Update for UnitDelay: '<S20>/Unit Delay' */
    BaseEngineController_LS_DWork.s20_UnitDelay_DSTATE =
      rtb_Multiplyby10ifnotyetenabled;

    /* Update for UnitDelay: '<S55>/Unit Delay' */
    BaseEngineController_LS_DWork.s55_UnitDelay_DSTATE = rtb_Switch_c;

    /* Update for UnitDelay: '<S46>/Unit Delay' */
    BaseEngineController_LS_DWork.s46_UnitDelay_DSTATE = rtb_Switch_mq;

    /* Update for UnitDelay: '<S42>/Unit Delay' */
    BaseEngineController_LS_DWork.s42_UnitDelay_DSTATE = rtb_Product4_o;

    /* Update for UnitDelay: '<S44>/Unit Delay' */
    BaseEngineController_LS_DWork.s44_UnitDelay_DSTATE = rtb_Product4_o;

    /* Update for UnitDelay: '<S45>/Unit Delay' */
    BaseEngineController_LS_DWork.s45_UnitDelay_DSTATE = rtb_LogicalOperator1_al;

    /* Update for UnitDelay: '<S47>/Unit Delay' */
    BaseEngineController_LS_DWork.s47_UnitDelay_DSTATE =
      rtb_DataTypeConversion_b2;

    /* Update for UnitDelay: '<S48>/Unit Delay' incorporates:
     *  MinMax: '<S50>/MinMax1'
     */
    BaseEngineController_LS_DWork.s48_UnitDelay_DSTATE = y;
  } else {
    if (BaseEngineController_LS_DWork.s14_ElectronicThrottleController_MODE) {
      /* Disable for Enabled SubSystem: '<S31>/PassThrough' */
      /* Disable for Outport: '<S52>/Out1' */
      BaseEngineController_LS_B.s52_In1 = 10.0;
      BaseEngineController_LS_DWork.s31_PassThrough_MODE = FALSE;

      /* End of Disable for SubSystem: '<S31>/PassThrough' */
      BaseEngineController_LS_DWork.s14_ElectronicThrottleController_MODE =
        FALSE;
    }
  }

  /* End of RelationalOperator: '<S19>/RelOp' */
  /* End of Outputs for SubSystem: '<S14>/Electronic Throttle Controller' */
  /* Logic: '<S855>/Logical Operator1' incorporates:
   *  Logic: '<S852>/Logical Operator'
   *  Logic: '<S852>/Logical Operator9'
   *  RelationalOperator: '<S852>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S852>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S855>/motohawk_calibration5'
   */
  rtb_RelationalOperator5_fz = ((ETC_CutPower_Permitted_DataStore()) &&
    (BaseEngineController_LS_B.s574_Merge || (rtb_RelationalOperator3_bp &&
    (BaseEngineController_LS_B.s20_Switch < (ETC_CutPower_ETC_DataStore())))));

  /* Logic: '<S855>/Logical Operator' */
  rtb_LogicalOperator6_b = !rtb_RelationalOperator5_fz;

  /* If: '<S959>/If' incorporates:
   *  Inport: '<S960>/In1'
   *  Inport: '<S961>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S959>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S959>/override_enable'
   */
  if ((ETC_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S959>/NewValue' incorporates:
     *  ActionPort: '<S960>/Action Port'
     */
    rtb_DataTypeConversion1_e = (ETC_new_DataStore());

    /* End of Outputs for SubSystem: '<S959>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S959>/OldValue' incorporates:
     *  ActionPort: '<S961>/Action Port'
     */
    rtb_DataTypeConversion1_e = BaseEngineController_LS_B.s20_Switch;

    /* End of Outputs for SubSystem: '<S959>/OldValue' */
  }

  /* End of If: '<S959>/If' */

  /* Switch: '<S855>/Switch' incorporates:
   *  Constant: '<S855>/Constant2'
   *  Product: '<S855>/Product'
   *  S-Function (motohawk_sfun_calibration): '<S855>/motohawk_calibration2'
   *  S-Function (motohawk_sfun_interpolation_1d): '<S855>/motohawk_interpolation_1d'
   *  Sum: '<S855>/Sum'
   */
  if (rtb_RelationalOperator5_fz) {
    rtb_Switch_h = 0.0;
  } else {
    /* S-Function Block: <S855>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_hr = TableInterpolation1D_real_T
        (BaseEngineController_LS_B.s398_motohawk_prelookup, (real_T *)
         ((ETC_VoltageCompTbl_DataStore())), 9);
      (ETC_VoltageComp_DataStore()) = rtb_motohawk_interpolation_1d_hr;
    }

    rtb_Switch_h = rtb_DataTypeConversion1_e * rtb_motohawk_interpolation_1d_hr
      + (ETC_Offset_DataStore());
  }

  /* End of Switch: '<S855>/Switch' */

  /* Saturate: '<S855>/Saturation' */
  BaseEngineController_LS_B.s855_ETC = rtb_Switch_h >= 100.0 ? 100.0 :
    rtb_Switch_h <= -100.0 ? -100.0 : rtb_Switch_h;

  /* Abs: '<S855>/Abs' */
  rtb_Switch_h = fabs(BaseEngineController_LS_B.s855_ETC);

  /* RelationalOperator: '<S855>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S855>/motohawk_calibration3'
   */
  rtb_LogicalOperator1_al = (rtb_Switch_h > (ETC_OC_MIN_DataStore()));

  /* S-Function (motohawk_sfun_pwm): '<S855>/motohawk_pwm1' */
  ETCPin_PWMOutput_PWMOutput_Outputs(NULL,
    &BaseEngineController_LS_B.s855_motohawk_pwm1);

  /* Abs: '<S855>/Abs1' */
  rtb_DataTypeConversion2_pj = (int16_T)
    (BaseEngineController_LS_B.s855_motohawk_pwm1 < 0 ? (int16_T)
     -BaseEngineController_LS_B.s855_motohawk_pwm1 :
     BaseEngineController_LS_B.s855_motohawk_pwm1);

  /* RelationalOperator: '<S855>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S855>/motohawk_calibration1'
   */
  BaseEngineController_LS_B.s855_RelationalOperator4 = (((real_T)
    rtb_DataTypeConversion2_pj < (ETC_I_MIN_DataStore())));

  /* Switch: '<S958>/Switch' incorporates:
   *  Constant: '<S958>/Constant'
   *  Logic: '<S855>/Logical Operator4'
   *  S-Function (motohawk_sfun_data_read): '<S958>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S958>/motohawk_delta_time'
   *  Sum: '<S958>/Sum'
   */
  if (rtb_LogicalOperator6_b && rtb_LogicalOperator1_al &&
      BaseEngineController_LS_B.s855_RelationalOperator4) {
    rtb_Switch_h = rtb_motohawk_delta_time_oe + ETCOpenFaultTimer_DataStore();
  } else {
    rtb_Switch_h = 0.0;
  }

  /* End of Switch: '<S958>/Switch' */

  /* RelationalOperator: '<S855>/Relational Operator5' incorporates:
   *  Constant: '<S855>/Constant'
   */
  rtb_RelationalOperator5 = ((rtb_Switch_h > 5.0));

  /* S-Function (motohawk_sfun_fault_def): '<S855>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: ETC_Open_Fault */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(52, rtb_RelationalOperator5);
    UpdateFault(52);
  }

  /* Gain: '<S855>/Convert to integer 14-bit PWM resolution' */
  rtb_Abs_co = 40.95 * BaseEngineController_LS_B.s855_ETC;

  /* DataTypeConversion: '<S855>/Data Type Conversion3' incorporates:
   *  Gain: '<S855>/Convert to integer 0.01Hz resolution'
   *  S-Function (motohawk_sfun_calibration): '<S855>/motohawk_calibration4'
   */
  rtb_UnitDelay4_b3 = 100.0 * (ETC_Frequency_DataStore());
  if (rtb_UnitDelay4_b3 < 4.294967296E+9) {
    if (rtb_UnitDelay4_b3 >= 0.0) {
      rtb_DataTypeConversion3_j = (uint32_T)rtb_UnitDelay4_b3;
    } else {
      rtb_DataTypeConversion3_j = 0U;
    }
  } else {
    rtb_DataTypeConversion3_j = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S855>/Data Type Conversion3' */

  /* DataTypeConversion: '<S855>/Data Type Conversion4' */
  if (rtb_Abs_co < 32768.0) {
    if (rtb_Abs_co >= -32768.0) {
      rtb_DataTypeConversion4_m = (int16_T)rtb_Abs_co;
    } else {
      rtb_DataTypeConversion4_m = MIN_int16_T;
    }
  } else {
    rtb_DataTypeConversion4_m = MAX_int16_T;
  }

  /* End of DataTypeConversion: '<S855>/Data Type Conversion4' */

  /* Saturate: '<S958>/Saturation' */
  rtb_Saturation_no = rtb_Switch_h >= 16000.0 ? 16000.0 : rtb_Switch_h <= 0.0 ?
    0.0 : rtb_Switch_h;

  /* S-Function (motohawk_sfun_data_write): '<S958>/motohawk_data_write' */
  /* Write to Data Storage as scalar: ETCOpenFaultTimer */
  {
    ETCOpenFaultTimer_DataStore() = rtb_Saturation_no;
  }

  /* If: '<S965>/If' incorporates:
   *  Inport: '<S966>/In1'
   *  Inport: '<S967>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S965>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S965>/override_enable'
   */
  if ((IAC_P_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S965>/NewValue' incorporates:
     *  ActionPort: '<S966>/Action Port'
     */
    rtb_DataTypeConversion1_e = (IAC_P_new_DataStore());

    /* End of Outputs for SubSystem: '<S965>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S965>/OldValue' incorporates:
     *  ActionPort: '<S967>/Action Port'
     */
    rtb_DataTypeConversion1_e = BaseEngineController_LS_B.s135_IACP;

    /* End of Outputs for SubSystem: '<S965>/OldValue' */
  }

  /* End of If: '<S965>/If' */

  /* Product: '<S962>/Product' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S962>/motohawk_calibration'
   */
  rtb_DataTypeConversion1_e *= (IAC_PGain_DataStore());

  /* Sum: '<S962>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S962>/motohawk_calibration1'
   */
  rtb_Abs_co = rtb_DataTypeConversion1_e + (IAC_POffset_DataStore());

  /* MinMax: '<S964>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S962>/motohawk_calibration2'
   */
  rtb_Abs_co = (rtb_Abs_co >= (IAC_PMinLimit_DataStore())) || rtIsNaN
    ((IAC_PMinLimit_DataStore())) ? rtb_Abs_co : (IAC_PMinLimit_DataStore());

  /* MinMax: '<S964>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S962>/motohawk_calibration3'
   */
  BaseEngineController_LS_B.s964_MinMax1 = (rtb_Abs_co <=
    (IAC_PMaxLimit_DataStore())) || rtIsNaN((IAC_PMaxLimit_DataStore())) ?
    rtb_Abs_co : (IAC_PMaxLimit_DataStore());

  /* Gain: '<S962>/Convert to integer 14-bit PWM resolution' */
  rtb_Abs_co = 40.95 * BaseEngineController_LS_B.s964_MinMax1;

  /* DataTypeConversion: '<S962>/Data Type Conversion3' */
  if (rtb_Abs_co < 32768.0) {
    if (rtb_Abs_co >= -32768.0) {
      rtb_DataTypeConversion3_p = (int16_T)rtb_Abs_co;
    } else {
      rtb_DataTypeConversion3_p = MIN_int16_T;
    }
  } else {
    rtb_DataTypeConversion3_p = MAX_int16_T;
  }

  /* End of DataTypeConversion: '<S962>/Data Type Conversion3' */
  /* Gain: '<S962>/Convert to integer 0.01Hz resolution' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S962>/motohawk_calibration4'
   */
  rtb_Abs_co = 100.0 * (IAC_PFrequency_DataStore());

  /* DataTypeConversion: '<S962>/Data Type Conversion2' */
  if (rtb_Abs_co < 4.294967296E+9) {
    if (rtb_Abs_co >= 0.0) {
      rtb_DataTypeConversion2_l = (uint32_T)rtb_Abs_co;
    } else {
      rtb_DataTypeConversion2_l = 0U;
    }
  } else {
    rtb_DataTypeConversion2_l = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S962>/Data Type Conversion2' */

  /* If: '<S969>/If' incorporates:
   *  Inport: '<S970>/In1'
   *  Inport: '<S971>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S969>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S969>/override_enable'
   */
  if ((IAC_S_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S969>/NewValue' incorporates:
     *  ActionPort: '<S970>/Action Port'
     */
    rtb_DataTypeConversion1_e = (IAC_S_new_DataStore());

    /* End of Outputs for SubSystem: '<S969>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S969>/OldValue' incorporates:
     *  ActionPort: '<S971>/Action Port'
     */
    rtb_DataTypeConversion1_e = BaseEngineController_LS_B.s135_IACS;

    /* End of Outputs for SubSystem: '<S969>/OldValue' */
  }

  /* End of If: '<S969>/If' */

  /* Product: '<S963>/Product' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S963>/motohawk_calibration'
   */
  rtb_DataTypeConversion1_e *= (IAC_SGain_DataStore());

  /* Sum: '<S963>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S963>/motohawk_calibration1'
   */
  rtb_Abs_co = rtb_DataTypeConversion1_e + (IAC_SOffset_DataStore());

  /* MinMax: '<S968>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S963>/motohawk_calibration2'
   */
  rtb_Abs_co = (rtb_Abs_co >= (IAC_SMinLimit_DataStore())) || rtIsNaN
    ((IAC_SMinLimit_DataStore())) ? rtb_Abs_co : (IAC_SMinLimit_DataStore());

  /* MinMax: '<S968>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S963>/motohawk_calibration3'
   */
  BaseEngineController_LS_B.s968_MinMax1 = (rtb_Abs_co <=
    (IAC_SMaxLimit_DataStore())) || rtIsNaN((IAC_SMaxLimit_DataStore())) ?
    rtb_Abs_co : (IAC_SMaxLimit_DataStore());

  /* Gain: '<S963>/Convert to integer 14-bit PWM resolution' */
  rtb_Abs_co = 40.95 * BaseEngineController_LS_B.s968_MinMax1;

  /* DataTypeConversion: '<S963>/Data Type Conversion3' */
  if (rtb_Abs_co < 32768.0) {
    if (rtb_Abs_co >= -32768.0) {
      rtb_DataTypeConversion3_d = (int16_T)rtb_Abs_co;
    } else {
      rtb_DataTypeConversion3_d = MIN_int16_T;
    }
  } else {
    rtb_DataTypeConversion3_d = MAX_int16_T;
  }

  /* End of DataTypeConversion: '<S963>/Data Type Conversion3' */
  /* Gain: '<S963>/Convert to integer 0.01Hz resolution' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S963>/motohawk_calibration4'
   */
  rtb_Abs_co = 100.0 * (IAC_SFrequency_DataStore());

  /* DataTypeConversion: '<S963>/Data Type Conversion2' */
  if (rtb_Abs_co < 4.294967296E+9) {
    if (rtb_Abs_co >= 0.0) {
      rtb_DataTypeConversion2_i = (uint32_T)rtb_Abs_co;
    } else {
      rtb_DataTypeConversion2_i = 0U;
    }
  } else {
    rtb_DataTypeConversion2_i = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S963>/Data Type Conversion2' */
  /* If: '<S976>/If' incorporates:
   *  Inport: '<S986>/In1'
   *  Inport: '<S987>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S976>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S976>/override_enable'
   */
  if ((SOI_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S976>/NewValue' incorporates:
     *  ActionPort: '<S986>/Action Port'
     */
    rtb_DataTypeConversion1_e = (SOI_new_DataStore());

    /* End of Outputs for SubSystem: '<S976>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S976>/OldValue' incorporates:
     *  ActionPort: '<S987>/Action Port'
     */
    rtb_DataTypeConversion1_e = BaseEngineController_LS_B.s135_SOI;

    /* End of Outputs for SubSystem: '<S976>/OldValue' */
  }

  /* End of If: '<S976>/If' */

  /* Gain: '<S857>/Gain2' */
  rtb_Abs_co = 16.0 * rtb_DataTypeConversion1_e;

  /* DataTypeConversion: '<S857>/Data Type Conversion2' */
  if (rtb_Abs_co < 32768.0) {
    if (rtb_Abs_co >= -32768.0) {
      rtb_DataTypeConversion2_pj = (int16_T)rtb_Abs_co;
    } else {
      rtb_DataTypeConversion2_pj = MIN_int16_T;
    }
  } else {
    rtb_DataTypeConversion2_pj = MAX_int16_T;
  }

  /* End of DataTypeConversion: '<S857>/Data Type Conversion2' */
  /* If: '<S74>/If' incorporates:
   *  Inport: '<S91>/In1'
   *  Inport: '<S92>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S74>/override_enable'
   *  UnitDelay: '<S74>/Unit Delay'
   */
  if ((Fuel_Cyl8_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S74>/NewValue' incorporates:
     *  ActionPort: '<S91>/Action Port'
     */
    rtb_Merge_da = BaseEngineController_LS_DWork.s74_UnitDelay_DSTATE;

    /* End of Outputs for SubSystem: '<S74>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S74>/OldValue' incorporates:
     *  ActionPort: '<S92>/Action Port'
     */
    rtb_Merge_da = BaseEngineController_LS_B.s135_FPC[7];

    /* End of Outputs for SubSystem: '<S74>/OldValue' */
  }

  /* End of If: '<S74>/If' */

  /* Sum: '<S74>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S74>/offset'
   */
  rtb_DataTypeConversion1_e = rtb_Merge_da + (Fuel_Cyl8_offset_DataStore());

  /* If: '<S73>/If' incorporates:
   *  Inport: '<S89>/In1'
   *  Inport: '<S90>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S73>/override_enable'
   *  UnitDelay: '<S73>/Unit Delay'
   */
  if ((Fuel_Cyl7_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S73>/NewValue' incorporates:
     *  ActionPort: '<S89>/Action Port'
     */
    rtb_Merge_a5 = BaseEngineController_LS_DWork.s73_UnitDelay_DSTATE;

    /* End of Outputs for SubSystem: '<S73>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S73>/OldValue' incorporates:
     *  ActionPort: '<S90>/Action Port'
     */
    rtb_Merge_a5 = BaseEngineController_LS_B.s135_FPC[6];

    /* End of Outputs for SubSystem: '<S73>/OldValue' */
  }

  /* End of If: '<S73>/If' */

  /* Sum: '<S73>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S73>/offset'
   */
  rtb_DataTypeConversion_b2 = rtb_Merge_a5 + (Fuel_Cyl7_offset_DataStore());

  /* If: '<S71>/If' incorporates:
   *  Inport: '<S85>/In1'
   *  Inport: '<S86>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S71>/override_enable'
   *  UnitDelay: '<S71>/Unit Delay'
   */
  if ((Fuel_Cyl6_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S71>/NewValue' incorporates:
     *  ActionPort: '<S85>/Action Port'
     */
    rtb_Merge_ie = BaseEngineController_LS_DWork.s71_UnitDelay_DSTATE;

    /* End of Outputs for SubSystem: '<S71>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S71>/OldValue' incorporates:
     *  ActionPort: '<S86>/Action Port'
     */
    rtb_Merge_ie = BaseEngineController_LS_B.s135_FPC[5];

    /* End of Outputs for SubSystem: '<S71>/OldValue' */
  }

  /* End of If: '<S71>/If' */

  /* Sum: '<S71>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S71>/offset'
   */
  rtb_Switch_mq = rtb_Merge_ie + (Fuel_Cyl6_offset_DataStore());

  /* If: '<S70>/If' incorporates:
   *  Inport: '<S83>/In1'
   *  Inport: '<S84>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S70>/override_enable'
   *  UnitDelay: '<S70>/Unit Delay'
   */
  if ((Fuel_Cyl5_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S70>/NewValue' incorporates:
     *  ActionPort: '<S83>/Action Port'
     */
    rtb_Merge_ho = BaseEngineController_LS_DWork.s70_UnitDelay_DSTATE;

    /* End of Outputs for SubSystem: '<S70>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S70>/OldValue' incorporates:
     *  ActionPort: '<S84>/Action Port'
     */
    rtb_Merge_ho = BaseEngineController_LS_B.s135_FPC[4];

    /* End of Outputs for SubSystem: '<S70>/OldValue' */
  }

  /* End of If: '<S70>/If' */

  /* Sum: '<S70>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S70>/offset'
   */
  rtb_Multiplyby10ifnotyetenabled = rtb_Merge_ho + (Fuel_Cyl5_offset_DataStore());

  /* If: '<S69>/If' incorporates:
   *  Inport: '<S81>/In1'
   *  Inport: '<S82>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S69>/override_enable'
   *  UnitDelay: '<S69>/Unit Delay'
   */
  if ((Fuel_Cyl4_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S69>/NewValue' incorporates:
     *  ActionPort: '<S81>/Action Port'
     */
    rtb_Merge_ab = BaseEngineController_LS_DWork.s69_UnitDelay_DSTATE;

    /* End of Outputs for SubSystem: '<S69>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S69>/OldValue' incorporates:
     *  ActionPort: '<S82>/Action Port'
     */
    rtb_Merge_ab = BaseEngineController_LS_B.s135_FPC[3];

    /* End of Outputs for SubSystem: '<S69>/OldValue' */
  }

  /* End of If: '<S69>/If' */

  /* Sum: '<S69>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S69>/offset'
   */
  rtb_Product4_o = rtb_Merge_ab + (Fuel_Cyl4_offset_DataStore());

  /* If: '<S68>/If' incorporates:
   *  Inport: '<S79>/In1'
   *  Inport: '<S80>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S68>/override_enable'
   *  UnitDelay: '<S68>/Unit Delay'
   */
  if ((Fuel_Cyl3_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S68>/NewValue' incorporates:
     *  ActionPort: '<S79>/Action Port'
     */
    rtb_Merge_gg = BaseEngineController_LS_DWork.s68_UnitDelay_DSTATE;

    /* End of Outputs for SubSystem: '<S68>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S68>/OldValue' incorporates:
     *  ActionPort: '<S80>/Action Port'
     */
    rtb_Merge_gg = BaseEngineController_LS_B.s135_FPC[2];

    /* End of Outputs for SubSystem: '<S68>/OldValue' */
  }

  /* End of If: '<S68>/If' */

  /* Sum: '<S68>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S68>/offset'
   */
  rtb_Switch_c = rtb_Merge_gg + (Fuel_Cyl3_offset_DataStore());

  /* If: '<S67>/If' incorporates:
   *  Inport: '<S77>/In1'
   *  Inport: '<S78>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S67>/override_enable'
   *  UnitDelay: '<S67>/Unit Delay'
   */
  if ((Fuel_Cyl2_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S67>/NewValue' incorporates:
     *  ActionPort: '<S77>/Action Port'
     */
    rtb_Merge_db = BaseEngineController_LS_DWork.s67_UnitDelay_DSTATE;

    /* End of Outputs for SubSystem: '<S67>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S67>/OldValue' incorporates:
     *  ActionPort: '<S78>/Action Port'
     */
    rtb_Merge_db = BaseEngineController_LS_B.s135_FPC[1];

    /* End of Outputs for SubSystem: '<S67>/OldValue' */
  }

  /* End of If: '<S67>/If' */

  /* Sum: '<S67>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S67>/offset'
   */
  rtb_Switch_k = rtb_Merge_db + (Fuel_Cyl2_offset_DataStore());

  /* If: '<S66>/If' incorporates:
   *  Inport: '<S75>/In1'
   *  Inport: '<S76>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S66>/override_enable'
   *  UnitDelay: '<S66>/Unit Delay'
   */
  if ((Fuel_Cyl1_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S66>/NewValue' incorporates:
     *  ActionPort: '<S75>/Action Port'
     */
    rtb_Merge_fp = BaseEngineController_LS_DWork.s66_UnitDelay_DSTATE;

    /* End of Outputs for SubSystem: '<S66>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S66>/OldValue' incorporates:
     *  ActionPort: '<S76>/Action Port'
     */
    rtb_Merge_fp = BaseEngineController_LS_B.s135_FPC[0];

    /* End of Outputs for SubSystem: '<S66>/OldValue' */
  }

  /* End of If: '<S66>/If' */

  /* If: '<S72>/If' incorporates:
   *  Inport: '<S87>/In1'
   *  Inport: '<S88>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S66>/offset'
   *  S-Function (motohawk_sfun_calibration): '<S72>/override_enable'
   *  Sum: '<S66>/Sum'
   *  UnitDelay: '<S72>/Unit Delay'
   */
  if ((Fuel_Global_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S72>/NewValue' incorporates:
     *  ActionPort: '<S87>/Action Port'
     */
    memcpy((void *)&rtb_Merge_bv[0], (void *)
           BaseEngineController_LS_DWork.s72_UnitDelay_DSTATE, sizeof(real_T) <<
           3U);

    /* End of Outputs for SubSystem: '<S72>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S72>/OldValue' incorporates:
     *  ActionPort: '<S88>/Action Port'
     */
    rtb_Merge_bv[0] = rtb_Merge_fp + (Fuel_Cyl1_offset_DataStore());
    rtb_Merge_bv[1] = rtb_Switch_k;
    rtb_Merge_bv[2] = rtb_Switch_c;
    rtb_Merge_bv[3] = rtb_Product4_o;
    rtb_Merge_bv[4] = rtb_Multiplyby10ifnotyetenabled;
    rtb_Merge_bv[5] = rtb_Switch_mq;
    rtb_Merge_bv[6] = rtb_DataTypeConversion_b2;
    rtb_Merge_bv[7] = rtb_DataTypeConversion1_e;

    /* End of Outputs for SubSystem: '<S72>/OldValue' */
  }

  /* End of If: '<S72>/If' */

  /* Sum: '<S72>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S72>/offset'
   */
  for (i = 0; i < 8; i++) {
    BaseEngineController_LS_B.s72_Sum[i] = rtb_Merge_bv[i] +
      (Fuel_Global_offset_DataStore());
  }

  /* End of Sum: '<S72>/Sum' */
  /* Product: '<S21>/Product2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S21>/Injector Gain [ms//mg]'
   */
  for (i = 0; i < 8; i++) {
    rtb_Product2_aa[i] = BaseEngineController_LS_B.s72_Sum[i] *
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

  /* Fcn: '<S64>/const ref to atm' */
  BaseEngineController_LS_B.s64_constreftoatm =
    (BaseEngineController_LS_B.s651_Merge + BaseEngineController_LS_B.s367_Sum)
    - BaseEngineController_LS_B.s659_Merge;

  /* S-Function Block: <S64>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (InjDeltaPress09In_DataStore()) =
      BaseEngineController_LS_B.s64_constreftoatm;
    (InjDeltaPress09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s64_constreftoatm,
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
   *  S-Function (motohawk_sfun_prelookup): '<S64>/motohawk_prelookup1'
   */
  for (i = 0; i < 8; i++) {
    rtb_Product2_aa[i] = BaseEngineController_LS_B.s135_FuelMult *
      rtb_Product2_aa[i] * rtb_motohawk_interpolation_1d3_k;
  }

  /* End of Product: '<S21>/Product3' */

  /* Saturate: '<S21>/Saturation' */
  y = BaseEngineController_LS_B.s616_Sum1 >= 0.01 ?
    BaseEngineController_LS_B.s616_Sum1 : 0.01;

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
      (BaseEngineController_LS_B.s398_motohawk_prelookup, (real_T *)
       ((InjTurnOnTbl_DataStore())), 9);
    (InjTurnOn_DataStore()) = rtb_motohawk_interpolation_1d1_oh;
  }

  /* Sum: '<S21>/Sum2' incorporates:
   *  S-Function (motohawk_sfun_interpolation_1d): '<S21>/motohawk_interpolation_1d1'
   *  S-Function (motohawk_sfun_interpolation_1d): '<S21>/motohawk_interpolation_1d4'
   *  S-Function (motohawk_sfun_prelookup): '<S64>/motohawk_prelookup1'
   */
  BaseEngineController_LS_B.s21_Sum2 = rtb_motohawk_interpolation_1d1_oh -
    rtb_motohawk_interpolation_1d4_c;

  /* Sum: '<S21>/Sum1' incorporates:
   *  Constant: '<S21>/Constant'
   *  Product: '<S21>/Divide'
   *  Saturate: '<S21>/Saturation'
   */
  BaseEngineController_LS_B.s21_Sum1 = 120000.0 / y -
    BaseEngineController_LS_B.s21_Sum2;

  /* MinMax: '<S21>/MinMax' */
  for (i = 0; i < 8; i++) {
    BaseEngineController_LS_B.s21_MinMax[i] = (rtb_Product2_aa[i] <=
      BaseEngineController_LS_B.s21_Sum1) || rtIsNaN
      (BaseEngineController_LS_B.s21_Sum1) ? rtb_Product2_aa[i] :
      BaseEngineController_LS_B.s21_Sum1;
  }

  /* End of MinMax: '<S21>/MinMax' */
  /* If: '<S977>/If' incorporates:
   *  Inport: '<S988>/In1'
   *  Inport: '<S989>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S977>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S977>/override_enable'
   */
  if ((Mech_PW_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S977>/NewValue' incorporates:
     *  ActionPort: '<S988>/Action Port'
     */
    for (i = 0; i < 8; i++) {
      rtb_Product2_aa[i] = (Mech_PW_new_DataStore())[i];
    }

    /* End of Outputs for SubSystem: '<S977>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S977>/OldValue' incorporates:
     *  ActionPort: '<S989>/Action Port'
     */
    memcpy((void *)&rtb_Product2_aa[0], (void *)
           (&BaseEngineController_LS_B.s21_MinMax[0]), sizeof(real_T) << 3U);

    /* End of Outputs for SubSystem: '<S977>/OldValue' */
  }

  /* End of If: '<S977>/If' */

  /* DataTypeConversion: '<S857>/Data Type Conversion3' incorporates:
   *  Gain: '<S857>/Gain3'
   */
  for (i = 0; i < 8; i++) {
    rtb_UnitDelay4_b3 = 1000.0 * rtb_Product2_aa[i];
    if (rtb_UnitDelay4_b3 < 4.294967296E+9) {
      if (rtb_UnitDelay4_b3 >= 0.0) {
        rtb_Switch_kj = (uint32_T)rtb_UnitDelay4_b3;
      } else {
        rtb_Switch_kj = 0U;
      }
    } else {
      rtb_Switch_kj = MAX_uint32_T;
    }

    rtb_InjectorSequence_o2[i] = rtb_Switch_kj;
  }

  /* End of DataTypeConversion: '<S857>/Data Type Conversion3' */
  /* Gain: '<S857>/Gain5' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S857>/motohawk_calibration9'
   */
  rtb_Abs_co = 1000.0 * (InjectorMaxDuration_DataStore());

  /* DataTypeConversion: '<S857>/Data Type Conversion6' */
  if (rtb_Abs_co < 4.294967296E+9) {
    if (rtb_Abs_co >= 0.0) {
      rtb_DataTypeConversion6 = (uint32_T)rtb_Abs_co;
    } else {
      rtb_DataTypeConversion6 = 0U;
    }
  } else {
    rtb_DataTypeConversion6 = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S857>/Data Type Conversion6' */
  /* If: '<S974>/If' incorporates:
   *  Inport: '<S982>/In1'
   *  Inport: '<S983>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S974>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S974>/override_enable'
   */
  if ((Elec_PW_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S974>/NewValue' incorporates:
     *  ActionPort: '<S982>/Action Port'
     */
    rtb_DataTypeConversion1_e = (Elec_PW_new_DataStore());

    /* End of Outputs for SubSystem: '<S974>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S974>/OldValue' incorporates:
     *  ActionPort: '<S983>/Action Port'
     */
    rtb_DataTypeConversion1_e = BaseEngineController_LS_B.s21_Sum2;

    /* End of Outputs for SubSystem: '<S974>/OldValue' */
  }

  /* End of If: '<S974>/If' */

  /* Gain: '<S857>/Gain1' */
  rtb_Abs_co = 1000.0 * rtb_DataTypeConversion1_e;

  /* DataTypeConversion: '<S857>/Data Type Conversion1' */
  if (rtb_Abs_co < 4.294967296E+9) {
    if (rtb_Abs_co >= 0.0) {
      rtb_DataTypeConversion1_p = (uint32_T)rtb_Abs_co;
    } else {
      rtb_DataTypeConversion1_p = 0U;
    }
  } else {
    rtb_DataTypeConversion1_p = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S857>/Data Type Conversion1' */
  /* If: '<S975>/If' incorporates:
   *  Inport: '<S984>/In1'
   *  Inport: '<S985>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S975>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S975>/override_enable'
   */
  if ((MakeUp_EOI_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S975>/NewValue' incorporates:
     *  ActionPort: '<S984>/Action Port'
     */
    rtb_DataTypeConversion1_e = (MakeUp_EOI_new_DataStore());

    /* End of Outputs for SubSystem: '<S975>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S975>/OldValue' incorporates:
     *  ActionPort: '<S985>/Action Port'
     */
    rtb_DataTypeConversion1_e = BaseEngineController_LS_B.s135_MakeUpEOI;

    /* End of Outputs for SubSystem: '<S975>/OldValue' */
  }

  /* End of If: '<S975>/If' */

  /* Gain: '<S857>/Gain6' */
  rtb_Abs_co = 16.0 * rtb_DataTypeConversion1_e;

  /* DataTypeConversion: '<S857>/Data Type Conversion7' */
  if (rtb_Abs_co < 32768.0) {
    if (rtb_Abs_co >= -32768.0) {
      rtb_DataTypeConversion7 = (int16_T)rtb_Abs_co;
    } else {
      rtb_DataTypeConversion7 = MIN_int16_T;
    }
  } else {
    rtb_DataTypeConversion7 = MAX_int16_T;
  }

  /* End of DataTypeConversion: '<S857>/Data Type Conversion7' */
  /* Gain: '<S857>/Gain7' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S857>/motohawk_calibration6'
   */
  rtb_Abs_co = 1000.0 * (MinMakeUpPW_DataStore());

  /* DataTypeConversion: '<S857>/Data Type Conversion8' */
  if (rtb_Abs_co < 4.294967296E+9) {
    if (rtb_Abs_co >= 0.0) {
      rtb_Sum_hh = (uint32_T)rtb_Abs_co;
    } else {
      rtb_Sum_hh = 0U;
    }
  } else {
    rtb_Sum_hh = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S857>/Data Type Conversion8' */
  /* Gain: '<S857>/Gain8' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S857>/motohawk_calibration1'
   */
  rtb_Abs_co = 1000.0 * (InjectiorMinDuration_DataStore());

  /* DataTypeConversion: '<S857>/Data Type Conversion9' */
  if (rtb_Abs_co < 4.294967296E+9) {
    if (rtb_Abs_co >= 0.0) {
      rtb_UnitDelay_lk = (uint32_T)rtb_Abs_co;
    } else {
      rtb_UnitDelay_lk = 0U;
    }
  } else {
    rtb_UnitDelay_lk = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S857>/Data Type Conversion9' */
  /* Outputs for Atomic SubSystem: '<S857>/Injector Enable Manager' */

  /* S-Function Block: <S981>/motohawk_delta_time */
  rtb_motohawk_delta_time_i = 0.005;

  /* Switch: '<S981>/Switch' incorporates:
   *  Constant: '<S981>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S981>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S981>/motohawk_delta_time'
   *  S-Function (motohawk_sfun_fault_action): '<S973>/motohawk_fault_action'
   *  Sum: '<S981>/Sum'
   */
  if (GetFaultActionStatus(2)) {
    rtb_DataTypeConversion1_e = rtb_motohawk_delta_time_i +
      DelayedEngineShutdownTimer_DataStore();
  } else {
    rtb_DataTypeConversion1_e = 0.0;
  }

  /* End of Switch: '<S981>/Switch' */
  /* RelationalOperator: '<S973>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S973>/motohawk_calibration1'
   */
  rtb_LogicalOperator_iy = (rtb_DataTypeConversion1_e >
    (EngineShutdownDelayTime_DataStore()));

  /* S-Function (motohawk_sfun_data_write): '<S973>/motohawk_data_write' */
  /* Write to Data Storage as scalar: DelayedEngineShutdownAction */
  {
    DelayedEngineShutdownAction_DataStore() = rtb_LogicalOperator_iy;
  }

  /* RelationalOperator: '<S973>/Relational Operator1' incorporates:
   *  Gain: '<S973>/Gain'
   *  S-Function (motohawk_sfun_calibration): '<S973>/motohawk_calibration1'
   */
  rtb_RelationalOperator1_cf = ((rtb_DataTypeConversion1_e > 0.5 *
    (EngineShutdownDelayTime_DataStore())));

  /* S-Function (motohawk_sfun_data_write): '<S973>/motohawk_data_write1' */
  /* Write to Data Storage as scalar: DelayedEngineShutdownWarning */
  {
    DelayedEngineShutdownWarning_DataStore() = rtb_RelationalOperator1_cf;
  }

  /* RelationalOperator: '<S973>/Relational Operator2' incorporates:
   *  Constant: '<S973>/Constant'
   */
  rtb_RelationalOperator2_cd = ((rtb_DataTypeConversion1_e > 0.0));

  /* S-Function (motohawk_sfun_data_write): '<S973>/motohawk_data_write2' */
  /* Write to Data Storage as scalar: EngineShutdownTimerState */
  {
    EngineShutdownTimerState_DataStore() = rtb_RelationalOperator2_cd;
  }

  /* Logic: '<S973>/Logical Operator' */
  rtb_LogicalOperator_iy = !rtb_LogicalOperator_iy;

  /* Logic: '<S973>/Logical Operator2' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S973>/motohawk_data_read'
   */
  rtb_LogicalOperator6_b = !EngineShutdownAction_DataStore();

  /* S-Function (motohawk_sfun_data_read): '<S973>/motohawk_data_read1' */
  rtb_motohawk_data_read1_iz = ECUP_Enabled_DataStore();

  /* Logic: '<S973>/Logical Operator4' incorporates:
   *  Constant: '<S980>/Constant'
   *  RelationalOperator: '<S980>/RelOp'
   *  S-Function (motohawk_sfun_data_read): '<S973>/motohawk_data_read2'
   */
  rtb_LogicalOperator1_al = !(((uint8_T)EngineState_DataStore()) == 1);

  /* Logic: '<S973>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S973>/motohawk_calibration10'
   *  S-Function (motohawk_sfun_calibration): '<S973>/motohawk_calibration11'
   *  S-Function (motohawk_sfun_calibration): '<S973>/motohawk_calibration12'
   *  S-Function (motohawk_sfun_calibration): '<S973>/motohawk_calibration2'
   *  S-Function (motohawk_sfun_calibration): '<S973>/motohawk_calibration3'
   *  S-Function (motohawk_sfun_calibration): '<S973>/motohawk_calibration4'
   *  S-Function (motohawk_sfun_calibration): '<S973>/motohawk_calibration7'
   *  S-Function (motohawk_sfun_calibration): '<S973>/motohawk_calibration8'
   */
  rtb_LogicalOperator1_aj[0] = (rtb_LogicalOperator_iy && rtb_LogicalOperator6_b
    && rtb_motohawk_data_read1_iz && rtb_LogicalOperator1_al &&
    (Injector1Enable_DataStore()));
  rtb_LogicalOperator1_aj[1] = (rtb_LogicalOperator_iy && rtb_LogicalOperator6_b
    && rtb_motohawk_data_read1_iz && rtb_LogicalOperator1_al &&
    (Injector2Enable_DataStore()));
  rtb_LogicalOperator1_aj[2] = (rtb_LogicalOperator_iy && rtb_LogicalOperator6_b
    && rtb_motohawk_data_read1_iz && rtb_LogicalOperator1_al &&
    (Injector3Enable_DataStore()));
  rtb_LogicalOperator1_aj[3] = (rtb_LogicalOperator_iy && rtb_LogicalOperator6_b
    && rtb_motohawk_data_read1_iz && rtb_LogicalOperator1_al &&
    (Injector4Enable_DataStore()));
  rtb_LogicalOperator1_aj[4] = (rtb_LogicalOperator_iy && rtb_LogicalOperator6_b
    && rtb_motohawk_data_read1_iz && rtb_LogicalOperator1_al &&
    (Injector5Enable_DataStore()));
  rtb_LogicalOperator1_aj[5] = (rtb_LogicalOperator_iy && rtb_LogicalOperator6_b
    && rtb_motohawk_data_read1_iz && rtb_LogicalOperator1_al &&
    (Injector6Enable_DataStore()));
  rtb_LogicalOperator1_aj[6] = (rtb_LogicalOperator_iy && rtb_LogicalOperator6_b
    && rtb_motohawk_data_read1_iz && rtb_LogicalOperator1_al &&
    (Injector7Enable_DataStore()));
  rtb_LogicalOperator1_aj[7] = (rtb_LogicalOperator_iy && rtb_LogicalOperator6_b
    && rtb_motohawk_data_read1_iz && rtb_LogicalOperator1_al &&
    (Injector8Enable_DataStore()));

  /* Saturate: '<S981>/Saturation' */
  rtb_Saturation_k4 = rtb_DataTypeConversion1_e >= 16000.0 ? 16000.0 :
    rtb_DataTypeConversion1_e <= 0.0 ? 0.0 : rtb_DataTypeConversion1_e;

  /* S-Function (motohawk_sfun_data_write): '<S981>/motohawk_data_write' */
  /* Write to Data Storage as scalar: DelayedEngineShutdownTimer */
  {
    DelayedEngineShutdownTimer_DataStore() = rtb_Saturation_k4;
  }

  /* End of Outputs for SubSystem: '<S857>/Injector Enable Manager' */
  /* Logic: '<S857>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S857>/motohawk_data_read'
   */
  rtb_LogicalOperator6_b = !ESTOP_DataStore();

  /* If: '<S979>/If' incorporates:
   *  Inport: '<S992>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S979>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S979>/override_enable'
   */
  if ((ESTOP_FuelInj_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S979>/NewValue' incorporates:
     *  ActionPort: '<S992>/Action Port'
     */
    rtb_LogicalOperator6_b = (ESTOP_FuelInj_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S979>/NewValue' */
  } else {
  }

  /* End of If: '<S979>/If' */

  /* Logic: '<S857>/Logical Operator' */
  for (i = 0; i < 8; i++) {
    rtb_LogicalOperator1_aj[i] = (rtb_LogicalOperator6_b && rtb_AND1[i] &&
      rtb_LogicalOperator1_aj[i]);
  }

  /* End of Logic: '<S857>/Logical Operator' */
  /* If: '<S978>/If' incorporates:
   *  Inport: '<S990>/In1'
   *  Inport: '<S991>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S978>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S978>/override_enable'
   */
  if ((InjEnable_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S978>/NewValue' incorporates:
     *  ActionPort: '<S990>/Action Port'
     */
    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_B.s978_Merge[i] = (InjEnable_new_DataStore())[i];
    }

    /* End of Outputs for SubSystem: '<S978>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S978>/OldValue' incorporates:
     *  ActionPort: '<S991>/Action Port'
     */
    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_B.s978_Merge[i] = rtb_LogicalOperator1_aj[i];
    }

    /* End of Outputs for SubSystem: '<S978>/OldValue' */
  }

  /* End of If: '<S978>/If' */

  /* S-Function Block: <S857>/Injector Sequence */
  {
    extern TransientInjectorSeqInfo_T TransientInjectorSeqInfo_39[8];
    uint32_T makeup_duration;
    int16_T makeup_angle;
    extern S_SeqOutInjDiagReport InjectorSeqDiagInfo_39[8];
    extern int32_T InjectorSeqDiagLastPin_39;
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
    DynamicObj.uMinPulseDurationInMicroSecs = rtb_UnitDelay_lk;
    DynamicObj.uValidAttributesMask = USE_SEQ_TIMING | USE_SEQ_MIN_DURATION;
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
      enable = ((BaseEngineController_LS_B.s978_Merge)[index] &&
                pulse_scheduling_allowed);
      if ((INJ_SequenceType_DataStore()) == 0) {
        if ((enable) !=
            ((&BaseEngineController_LS_DWork.s857_InjectorSequence_DWORK1[0])
             [index])) {
          seq_enable = (enable) ? SEQ_ENABLED : SEQ_DISNEXT;
          SetSeqOutCond((E_ModuleResource) ((INJ_InitialPin_DataStore()) + index),
                        0, seq_enable);
          if ((INJ_Behavior_DataStore()) == 1)
            SetSeqOutCond((E_ModuleResource) ((INJ_InitialPin_DataStore()) +
              index), 1, (enable && 1) ? SEQ_ENABLED : SEQ_DISNEXT);
          (&BaseEngineController_LS_DWork.s857_InjectorSequence_DWORK1[0])[index]
            = enable;
        }

        if ((BaseEngineController_LS_ConstB.s857_DataTypeConversion5) !=
            (BaseEngineController_LS_DWork.s857_InjectorSequence_DWORK2)) {
          SetSeqOutInjPeakTime((E_ModuleResource) ((INJ_InitialPin_DataStore())
            + index), BaseEngineController_LS_ConstB.s857_DataTypeConversion5);
        }

        elec_duration = ((rtb_InjectorSequence_o2)[index]) +
          (rtb_DataTypeConversion1_p);

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
          if (TransientInjectorSeqInfo_39[index].primaryComplete) {
            if (elec_duration > TransientInjectorSeqInfo_39[index].
                primaryDuration) {
              makeup_duration = elec_duration -
                TransientInjectorSeqInfo_39[index].primaryDuration;
              if (makeup_duration >= (rtb_Sum_hh)) {
                makeup_duration += (rtb_DataTypeConversion1_p);
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
              ((&BaseEngineController_LS_DWork.s857_InjectorSequence_DWORK1[0])
               [index])) {
            seq_enable = (enable) ? SEQ_ENABLED : SEQ_DISNEXT;
            SetSeqOutCond((E_ModuleResource) ((INJ_InitialPin_DataStore()) +
              index), 0, seq_enable);
            SetSeqOutCond((E_ModuleResource) ((INJ_InitialPin_DataStore()) +
              index), 1, seq_enable);
            (&BaseEngineController_LS_DWork.s857_InjectorSequence_DWORK1[0])
              [index] = enable;
          }

          /* Update peak time only on primary Pulse */
          if ((BaseEngineController_LS_ConstB.s857_DataTypeConversion5) !=
              (BaseEngineController_LS_DWork.s857_InjectorSequence_DWORK2)) {
            SetSeqOutInjPeakTime((E_ModuleResource) ((INJ_InitialPin_DataStore())
              + index), BaseEngineController_LS_ConstB.s857_DataTypeConversion5);
          }

          elec_duration = ((rtb_InjectorSequence_o2)[index]) / 2 +
            (rtb_DataTypeConversion1_p);
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
            ((&BaseEngineController_LS_DWork.s857_InjectorSequence_DWORK1[0])
             [index])) {
          seq_enable = (enable) ? SEQ_ENABLED : SEQ_DISNEXT;
          SetSeqOutCond((E_ModuleResource) ((INJ_InitialPin_DataStore()) + index),
                        0, seq_enable);
          SetSeqOutCond((E_ModuleResource) ((INJ_InitialPin_DataStore()) + index),
                        1, seq_enable);
          (&BaseEngineController_LS_DWork.s857_InjectorSequence_DWORK1[0])[index]
            = enable;
        }

        if ((BaseEngineController_LS_ConstB.s857_DataTypeConversion5) !=
            (BaseEngineController_LS_DWork.s857_InjectorSequence_DWORK2)) {
          SetSeqOutInjPeakTime((E_ModuleResource) ((INJ_InitialPin_DataStore())
            + index), BaseEngineController_LS_ConstB.s857_DataTypeConversion5);
        }

        elec_duration = ((rtb_InjectorSequence_o2)[index])/2 +
          (rtb_DataTypeConversion1_p);
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

    BaseEngineController_LS_DWork.s857_InjectorSequence_DWORK2 =
      BaseEngineController_LS_ConstB.s857_DataTypeConversion5;

    /* Output per-cylinder diagnostics */
    {
      for (i=0; i < (EncoderNumCylinders_DataStore()); i++) {
        (BaseEngineController_LS_B.s857_InjectorSequence_o1)[i] =
          InjectorSeqDiagInfo_39[i].u1TXCnt;
      }

      for (i=0; i < (EncoderNumCylinders_DataStore()); i++) {
        (rtb_InjectorSequence_o2)[i] = InjectorSeqDiagInfo_39[i].
          u4TXTimeInMicroSecs;
      }
    }
  }

  /* RelationalOperator: '<S972>/==' incorporates:
   *  Constant: '<S972>/Zero'
   */
  for (i = 0; i < 8; i++) {
    rtb_LogicalOperator1_aj[i] =
      (BaseEngineController_LS_B.s857_InjectorSequence_o1[i] == 0);
  }

  /* End of RelationalOperator: '<S972>/==' */
  /* S-Function Block: <S972>/motohawk_encoder_average_rpm */
  {
    rtb_motohawk_encoder_average_rpm = GetEncoderResourceAverageRPM();
  }

  /* RelationalOperator: '<S972>/<1' incorporates:
   *  Constant: '<S972>/Zero1'
   *  S-Function (motohawk_sfun_encoder_average_rpm): '<S972>/motohawk_encoder_average_rpm'
   */
  rtb_LogicalOperator6_b = (rtb_motohawk_encoder_average_rpm > 100);

  /* Logic: '<S972>/AND1' */
  for (i = 0; i < 8; i++) {
    rtb_AND1[i] = (rtb_LogicalOperator1_aj[i] && rtb_LogicalOperator6_b &&
                   BaseEngineController_LS_B.s978_Merge[i]);
  }

  /* End of Logic: '<S972>/AND1' */

  /* S-Function (motohawk_sfun_fault_def): '<S972>/motohawk_fault_def' */

  /* Set Fault Suspected Status: Inj1Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(74, rtb_AND1[0]);
    UpdateFault(74);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S972>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: Inj2Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(75, rtb_AND1[1]);
    UpdateFault(75);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S972>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: Inj3Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(76, rtb_AND1[2]);
    UpdateFault(76);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S972>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: Inj4Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(77, rtb_AND1[3]);
    UpdateFault(77);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S972>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: Inj5Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(78, rtb_AND1[4]);
    UpdateFault(78);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S972>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: Inj6Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(79, rtb_AND1[5]);
    UpdateFault(79);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S972>/motohawk_fault_def6' */

  /* Set Fault Suspected Status: Inj7Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(80, rtb_AND1[6]);
    UpdateFault(80);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S972>/motohawk_fault_def7' */

  /* Set Fault Suspected Status: Inj8Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(81, rtb_AND1[7]);
    UpdateFault(81);
  }

  /* Logic: '<S858>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_fault_action): '<S858>/motohawk_fault_action'
   */
  rtb_RelationalOperator5_fz = !GetFaultActionStatus(6);

  /* Product: '<S858>/Product' */
  rtb_DataTypeConversion1_e = BaseEngineController_LS_B.s135_WASTEGATE * (real_T)
    rtb_RelationalOperator5_fz;

  /* If: '<S996>/If' incorporates:
   *  Inport: '<S997>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S996>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S996>/override_enable'
   */
  if ((WASTEGATE_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S996>/NewValue' incorporates:
     *  ActionPort: '<S997>/Action Port'
     */
    rtb_DataTypeConversion1_e = (WASTEGATE_new_DataStore());

    /* End of Outputs for SubSystem: '<S996>/NewValue' */
  } else {
  }

  /* End of If: '<S996>/If' */

  /* Product: '<S994>/Product' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S994>/motohawk_calibration'
   */
  rtb_DataTypeConversion1_e *= (WASTEGATEGain_DataStore());

  /* Sum: '<S994>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S994>/motohawk_calibration1'
   */
  rtb_Abs_co = rtb_DataTypeConversion1_e + (WASTEGATEOffset_DataStore());

  /* MinMax: '<S995>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S994>/motohawk_calibration2'
   */
  rtb_Abs_co = (rtb_Abs_co >= (WASTEGATEMinLimit_DataStore())) || rtIsNaN
    ((WASTEGATEMinLimit_DataStore())) ? rtb_Abs_co :
    (WASTEGATEMinLimit_DataStore());

  /* MinMax: '<S995>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S994>/motohawk_calibration3'
   */
  BaseEngineController_LS_B.s995_MinMax1 = (rtb_Abs_co <=
    (WASTEGATEMaxLimit_DataStore())) || rtIsNaN((WASTEGATEMaxLimit_DataStore()))
    ? rtb_Abs_co : (WASTEGATEMaxLimit_DataStore());

  /* Gain: '<S994>/Convert to integer 14-bit PWM resolution' */
  rtb_Abs_co = 40.95 * BaseEngineController_LS_B.s995_MinMax1;

  /* DataTypeConversion: '<S994>/Data Type Conversion3' */
  if (rtb_Abs_co < 32768.0) {
    if (rtb_Abs_co >= -32768.0) {
      rtb_DataTypeConversion3_e = (int16_T)rtb_Abs_co;
    } else {
      rtb_DataTypeConversion3_e = MIN_int16_T;
    }
  } else {
    rtb_DataTypeConversion3_e = MAX_int16_T;
  }

  /* End of DataTypeConversion: '<S994>/Data Type Conversion3' */
  /* Gain: '<S994>/Convert to integer 0.01Hz resolution' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S994>/motohawk_calibration4'
   */
  rtb_Abs_co = 100.0 * (WASTEGATEFrequency_DataStore());

  /* DataTypeConversion: '<S994>/Data Type Conversion2' */
  if (rtb_Abs_co < 4.294967296E+9) {
    if (rtb_Abs_co >= 0.0) {
      rtb_DataTypeConversion2_p = (uint32_T)rtb_Abs_co;
    } else {
      rtb_DataTypeConversion2_p = 0U;
    }
  } else {
    rtb_DataTypeConversion2_p = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S994>/Data Type Conversion2' */

  /* Gain: '<S21>/Gain' incorporates:
   *  Product: '<S21>/Product'
   */
  for (i = 0; i < 8; i++) {
    BaseEngineController_LS_B.s21_Gain[i] =
      BaseEngineController_LS_B.s21_MinMax[i] /
      BaseEngineController_LS_B.s21_Sum1 * 100.0;
  }

  /* End of Gain: '<S21>/Gain' */

  /* Sum: '<S22>/Sum1' incorporates:
   *  DataTypeConversion: '<S22>/Data Type Conversion2'
   *  DataTypeConversion: '<S22>/Data Type Conversion3'
   *  DataTypeConversion: '<S22>/Data Type Conversion4'
   *  Fcn: '<S22>/Fcn1'
   *  Fcn: '<S22>/Fcn2'
   */
  rtb_Abs_co = ((real_T)rtb_motohawk_fault_action3 * 3.0 + (real_T)
                rtb_motohawk_fault_action2 * 2.0) + (real_T)
    rtb_motohawk_fault_action1_o;

  /* DataTypeConversion: '<S22>/Data Type Conversion5' */
  if (rtb_Abs_co < 256.0) {
    if (rtb_Abs_co >= 0.0) {
      BaseEngineController_LS_B.s22_DataTypeConversion5 = (uint8_T)rtb_Abs_co;
    } else {
      BaseEngineController_LS_B.s22_DataTypeConversion5 = 0U;
    }
  } else {
    BaseEngineController_LS_B.s22_DataTypeConversion5 = MAX_uint8_T;
  }

  /* End of DataTypeConversion: '<S22>/Data Type Conversion5' */

  /* UnitDelay: '<S439>/Unit Delay' */
  rtb_UnitDelay_lk = BaseEngineController_LS_DWork.s439_UnitDelay_DSTATE;

  /* Sum: '<S439>/Sum' incorporates:
   *  Constant: '<S439>/Constant1'
   */
  rtb_Switch_kj = 1U + rtb_UnitDelay_lk;
  if (rtb_Switch_kj < 1U) {
    rtb_Switch_kj = MAX_uint32_T;
  }

  rtb_Sum_hh = rtb_Switch_kj;

  /* End of Sum: '<S439>/Sum' */

  /* RelationalOperator: '<S439>/Relational Operator' incorporates:
   *  Constant: '<S18>/Count'
   */
  rtb_RelationalOperator_jv = (rtb_Sum_hh >= 5U);

  /* S-Function Block: <S437>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (IAT_KeyUp09In_DataStore()) =
      BaseEngineController_LS_B.s404_CollectAverage.s368_Product;
    (IAT_KeyUp09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s404_CollectAverage.s368_Product,
       (IAT_KeyUp09IdxArr_DataStore()), 9, (IAT_KeyUp09Idx_DataStore()));
    rtb_motohawk_prelookup_b2 = (IAT_KeyUp09Idx_DataStore());
  }

  /* S-Function Block: <S362>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (App05In_DataStore()) = rtb_APP1;
    (App05Idx_DataStore()) = TablePrelookup_real_T(rtb_APP1,
      (App05IdxArr_DataStore()), 5, (App05Idx_DataStore()));
    rtb_motohawk_prelookup_b2 = (App05Idx_DataStore());
  }

  /* S-Function Block: <S397>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (RPM05In_DataStore()) = BaseEngineController_LS_B.s616_Sum1;
    (RPM05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s616_Sum1, (RPM05IdxArr_DataStore()), 5,
       (RPM05Idx_DataStore()));
    rtb_motohawk_prelookup_b2 = (RPM05Idx_DataStore());
  }

  /* UnitDelay: '<S410>/Unit Delay1' */
  rtb_DataTypeConversion1_e =
    BaseEngineController_LS_DWork.s410_UnitDelay1_DSTATE;

  /* Sum: '<S410>/Sum3' incorporates:
   *  Constant: '<S410>/Constant1'
   *  Product: '<S410>/Product2'
   *  Product: '<S410>/Product3'
   *  S-Function (motohawk_sfun_calibration): '<S410>/motohawk_calibration1'
   *  Sum: '<S410>/Sum2'
   */
  BaseEngineController_LS_B.s410_Sum3 = (1.0 - (PostO2DelagFiltConst_DataStore()))
    * rtb_DataTypeConversion1_e + (PostO2DelagFiltConst_DataStore()) *
    BaseEngineController_LS_B.s448_MultiportSwitch;

  /* Sum: '<S408>/Sum3' incorporates:
   *  Constant: '<S408>/kPa Gauge to kPa absolute'
   */
  BaseEngineController_LS_B.s408_Sum3 = (BaseEngineController_LS_B.s651_Merge +
    100.0) - BaseEngineController_LS_B.s667_Merge;

  /* DataTypeConversion: '<S447>/Data Type Conversion' */
  if (rtIsNaN(BaseEngineController_LS_B.s447_ReadCANMessage_o3) || rtIsInf
      (BaseEngineController_LS_B.s447_ReadCANMessage_o3)) {
    rtb_UnitDelay4_b3 = 0.0;
  } else {
    rtb_UnitDelay4_b3 = fmod(floor
      (BaseEngineController_LS_B.s447_ReadCANMessage_o3), 256.0);
  }

  BaseEngineController_LS_B.s447_DataTypeConversion = (uint8_T)
    (rtb_UnitDelay4_b3 < 0.0 ? (uint8_T)(int32_T)(int8_T)-(int8_T)(uint8_T)
     -rtb_UnitDelay4_b3 : (uint8_T)rtb_UnitDelay4_b3);

  /* End of DataTypeConversion: '<S447>/Data Type Conversion' */
  /* If: '<S450>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S450>/override_enable'
   */
  if ((GPS_YearUTC_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S450>/If' */

  /* If: '<S451>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S451>/override_enable'
   */
  if ((GPS_Altitude_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S451>/If' */

  /* If: '<S452>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S452>/override_enable'
   */
  if ((GPS_Course_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S452>/If' */

  /* DataTypeConversion: '<S447>/Data Type Conversion8' */
  if (rtIsNaN(BaseEngineController_LS_B.s447_ReadCANMessage2_o5) || rtIsInf
      (BaseEngineController_LS_B.s447_ReadCANMessage2_o5)) {
    rtb_UnitDelay4_b3 = 0.0;
  } else {
    rtb_UnitDelay4_b3 = fmod(floor
      (BaseEngineController_LS_B.s447_ReadCANMessage2_o5), 256.0);
  }

  BaseEngineController_LS_B.s447_DataTypeConversion8 = (uint8_T)
    (rtb_UnitDelay4_b3 < 0.0 ? (uint8_T)(int32_T)(int8_T)-(int8_T)(uint8_T)
     -rtb_UnitDelay4_b3 : (uint8_T)rtb_UnitDelay4_b3);

  /* End of DataTypeConversion: '<S447>/Data Type Conversion8' */
  /* If: '<S453>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S453>/override_enable'
   */
  if ((GPS_SatelliteCount_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S453>/If' */

  /* DataTypeConversion: '<S447>/Data Type Conversion1' */
  if (rtIsNaN(BaseEngineController_LS_B.s447_ReadCANMessage_o4) || rtIsInf
      (BaseEngineController_LS_B.s447_ReadCANMessage_o4)) {
    rtb_UnitDelay4_b3 = 0.0;
  } else {
    rtb_UnitDelay4_b3 = fmod(floor
      (BaseEngineController_LS_B.s447_ReadCANMessage_o4), 256.0);
  }

  BaseEngineController_LS_B.s447_DataTypeConversion1 = (uint8_T)
    (rtb_UnitDelay4_b3 < 0.0 ? (uint8_T)(int32_T)(int8_T)-(int8_T)(uint8_T)
     -rtb_UnitDelay4_b3 : (uint8_T)rtb_UnitDelay4_b3);

  /* End of DataTypeConversion: '<S447>/Data Type Conversion1' */
  /* If: '<S454>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S454>/override_enable'
   */
  if ((GPS_MonthUTC_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S454>/If' */

  /* DataTypeConversion: '<S447>/Data Type Conversion2' */
  if (rtIsNaN(BaseEngineController_LS_B.s447_ReadCANMessage_o5) || rtIsInf
      (BaseEngineController_LS_B.s447_ReadCANMessage_o5)) {
    rtb_UnitDelay4_b3 = 0.0;
  } else {
    rtb_UnitDelay4_b3 = fmod(floor
      (BaseEngineController_LS_B.s447_ReadCANMessage_o5), 256.0);
  }

  BaseEngineController_LS_B.s447_DataTypeConversion2 = (uint8_T)
    (rtb_UnitDelay4_b3 < 0.0 ? (uint8_T)(int32_T)(int8_T)-(int8_T)(uint8_T)
     -rtb_UnitDelay4_b3 : (uint8_T)rtb_UnitDelay4_b3);

  /* End of DataTypeConversion: '<S447>/Data Type Conversion2' */
  /* If: '<S455>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S455>/override_enable'
   */
  if ((GPS_DayUTC_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S455>/If' */

  /* DataTypeConversion: '<S447>/Data Type Conversion3' */
  if (rtIsNaN(BaseEngineController_LS_B.s447_ReadCANMessage_o6) || rtIsInf
      (BaseEngineController_LS_B.s447_ReadCANMessage_o6)) {
    rtb_UnitDelay4_b3 = 0.0;
  } else {
    rtb_UnitDelay4_b3 = fmod(floor
      (BaseEngineController_LS_B.s447_ReadCANMessage_o6), 256.0);
  }

  BaseEngineController_LS_B.s447_DataTypeConversion3 = (uint8_T)
    (rtb_UnitDelay4_b3 < 0.0 ? (uint8_T)(int32_T)(int8_T)-(int8_T)(uint8_T)
     -rtb_UnitDelay4_b3 : (uint8_T)rtb_UnitDelay4_b3);

  /* End of DataTypeConversion: '<S447>/Data Type Conversion3' */
  /* If: '<S456>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S456>/override_enable'
   */
  if ((GPS_HoursUTC_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S456>/If' */

  /* DataTypeConversion: '<S447>/Data Type Conversion4' */
  if (rtIsNaN(BaseEngineController_LS_B.s447_ReadCANMessage_o7) || rtIsInf
      (BaseEngineController_LS_B.s447_ReadCANMessage_o7)) {
    rtb_UnitDelay4_b3 = 0.0;
  } else {
    rtb_UnitDelay4_b3 = fmod(floor
      (BaseEngineController_LS_B.s447_ReadCANMessage_o7), 256.0);
  }

  BaseEngineController_LS_B.s447_DataTypeConversion4 = (uint8_T)
    (rtb_UnitDelay4_b3 < 0.0 ? (uint8_T)(int32_T)(int8_T)-(int8_T)(uint8_T)
     -rtb_UnitDelay4_b3 : (uint8_T)rtb_UnitDelay4_b3);

  /* End of DataTypeConversion: '<S447>/Data Type Conversion4' */
  /* If: '<S457>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S457>/override_enable'
   */
  if ((GPS_MinutesUTC_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S457>/If' */

  /* DataTypeConversion: '<S447>/Data Type Conversion5' */
  if (rtIsNaN(BaseEngineController_LS_B.s447_ReadCANMessage_o8) || rtIsInf
      (BaseEngineController_LS_B.s447_ReadCANMessage_o8)) {
    rtb_UnitDelay4_b3 = 0.0;
  } else {
    rtb_UnitDelay4_b3 = fmod(floor
      (BaseEngineController_LS_B.s447_ReadCANMessage_o8), 256.0);
  }

  BaseEngineController_LS_B.s447_DataTypeConversion5 = (uint8_T)
    (rtb_UnitDelay4_b3 < 0.0 ? (uint8_T)(int32_T)(int8_T)-(int8_T)(uint8_T)
     -rtb_UnitDelay4_b3 : (uint8_T)rtb_UnitDelay4_b3);

  /* End of DataTypeConversion: '<S447>/Data Type Conversion5' */
  /* If: '<S458>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S458>/override_enable'
   */
  if ((GPS_SecondsUTC_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S458>/If' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S447>/Read CAN Message1' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_4603p0006;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_4603p0006,
      &messageObj);
    if ((BaseEngineController_LS_B.s447_ReadCANMessage1_o1 + 1) >
        BaseEngineController_LS_B.s447_ReadCANMessage1_o1)
      BaseEngineController_LS_B.s447_ReadCANMessage1_o1++;
    if (msg_valid) {
      real32_T tmp0 = 0;
      real32_T tmp1 = 0;
      ((uint8_T *)(&tmp0))[0] = ((messageObj.u1DataArr[0])) ;
      ((uint8_T *)(&tmp0))[1] = ((messageObj.u1DataArr[1])) ;
      ((uint8_T *)(&tmp0))[2] = ((messageObj.u1DataArr[2])) ;
      ((uint8_T *)(&tmp0))[3] = ((messageObj.u1DataArr[3])) ;
      ((uint8_T *)(&tmp1))[0] = ((messageObj.u1DataArr[4])) ;
      ((uint8_T *)(&tmp1))[1] = ((messageObj.u1DataArr[5])) ;
      ((uint8_T *)(&tmp1))[2] = ((messageObj.u1DataArr[6])) ;
      ((uint8_T *)(&tmp1))[3] = ((messageObj.u1DataArr[7])) ;
      BaseEngineController_LS_B.s447_ReadCANMessage1_o2 = (real_T) tmp0;
      BaseEngineController_LS_B.s447_ReadCANMessage1_o3 = (real_T) tmp1;
      BaseEngineController_LS_B.s447_ReadCANMessage1_o1 = 0;
    }
  }

  /* If: '<S459>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S459>/override_enable'
   */
  if ((GPS_Latitude_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S459>/If' */

  /* If: '<S460>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S460>/override_enable'
   */
  if ((GPS_Longitude_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S460>/If' */

  /* If: '<S491>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S491>/override_enable'
   */
  if ((Bank1_OxygenConcentration_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S491>/If' */

  /* If: '<S492>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S492>/override_enable'
   */
  if ((Bank2_OxygenConcentration_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S492>/If' */

  /* If: '<S493>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S493>/override_enable'
   */
  if ((Bank2_SystemVolts_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S493>/If' */

  /* If: '<S494>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S494>/override_enable'
   */
  if ((Bank2_HeaterVolts_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S494>/If' */

  /* DataTypeConversion: '<S448>/Data Type Conversion8' */
  BaseEngineController_LS_B.s448_DataTypeConversion8 =
    ((BaseEngineController_LS_B.s448_ReadCANMessage1_o6 != 0.0));

  /* If: '<S495>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S495>/override_enable'
   */
  if ((Bank2_SensorDetectedStatus_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S495>/If' */

  /* DataTypeConversion: '<S448>/Data Type Conversion7' */
  BaseEngineController_LS_B.s448_DataTypeConversion7 =
    ((BaseEngineController_LS_B.s448_ReadCANMessage1_o7 != 0.0));

  /* If: '<S496>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S496>/override_enable'
   */
  if ((Bank2_UsingFreeAreCalState_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S496>/If' */

  /* DataTypeConversion: '<S448>/Data Type Conversion6' */
  BaseEngineController_LS_B.s448_DataTypeConversion6 =
    ((BaseEngineController_LS_B.s448_ReadCANMessage1_o8 != 0.0));

  /* If: '<S497>/If' incorporates:
   *  Inport: '<S538>/In1'
   *  Inport: '<S539>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S497>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S497>/override_enable'
   */
  if ((Bank2_DataValidState_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S497>/NewValue' incorporates:
     *  ActionPort: '<S538>/Action Port'
     */
    rtb_Merge_oq = (Bank2_DataValidState_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S497>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S497>/OldValue' incorporates:
     *  ActionPort: '<S539>/Action Port'
     */
    rtb_Merge_oq = BaseEngineController_LS_B.s448_DataTypeConversion6;

    /* End of Outputs for SubSystem: '<S497>/OldValue' */
  }

  /* End of If: '<S497>/If' */

  /* DataTypeConversion: '<S448>/Data Type Conversion9' */
  if (rtIsNaN(BaseEngineController_LS_B.s448_ReadCANMessage1_o9) || rtIsInf
      (BaseEngineController_LS_B.s448_ReadCANMessage1_o9)) {
    rtb_UnitDelay4_b3 = 0.0;
  } else {
    rtb_UnitDelay4_b3 = fmod(floor
      (BaseEngineController_LS_B.s448_ReadCANMessage1_o9), 256.0);
  }

  BaseEngineController_LS_B.s448_DataTypeConversion9 = (uint8_T)
    (rtb_UnitDelay4_b3 < 0.0 ? (uint8_T)(int32_T)(int8_T)-(int8_T)(uint8_T)
     -rtb_UnitDelay4_b3 : (uint8_T)rtb_UnitDelay4_b3);

  /* End of DataTypeConversion: '<S448>/Data Type Conversion9' */
  /* If: '<S498>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S498>/override_enable'
   */
  if ((Bank2_SensorStatus_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S498>/If' */

  /* DataTypeConversion: '<S448>/Data Type Conversion5' */
  BaseEngineController_LS_B.s448_DataTypeConversion5 =
    ((BaseEngineController_LS_B.s448_ReadCANMessage1_o10 != 0.0));

  /* If: '<S499>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S499>/override_enable'
   */
  if ((Bank2_SensorFaultState_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S499>/If' */

  /* If: '<S500>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S500>/override_enable'
   */
  if ((Bank1_SystemVolts_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S500>/If' */

  /* If: '<S501>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S501>/override_enable'
   */
  if ((Bank1_HeaterVolts_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S501>/If' */

  /* DataTypeConversion: '<S448>/Data Type Conversion' */
  BaseEngineController_LS_B.s448_DataTypeConversion =
    ((BaseEngineController_LS_B.s448_ReadCANMessage_o6 != 0.0));

  /* If: '<S502>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S502>/override_enable'
   */
  if ((Bank1_SensorDetectedStatus_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S502>/If' */

  /* DataTypeConversion: '<S448>/Data Type Conversion1' */
  BaseEngineController_LS_B.s448_DataTypeConversion1 =
    ((BaseEngineController_LS_B.s448_ReadCANMessage_o7 != 0.0));

  /* If: '<S503>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S503>/override_enable'
   */
  if ((Bank1_UsingFreeAreCalState_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S503>/If' */

  /* DataTypeConversion: '<S448>/Data Type Conversion2' */
  BaseEngineController_LS_B.s448_DataTypeConversion2 =
    ((BaseEngineController_LS_B.s448_ReadCANMessage_o8 != 0.0));

  /* If: '<S504>/If' incorporates:
   *  Inport: '<S552>/In1'
   *  Inport: '<S553>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S504>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S504>/override_enable'
   */
  if ((Bank1_DataValidState_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S504>/NewValue' incorporates:
     *  ActionPort: '<S552>/Action Port'
     */
    rtb_Merge_iz = (Bank1_DataValidState_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S504>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S504>/OldValue' incorporates:
     *  ActionPort: '<S553>/Action Port'
     */
    rtb_Merge_iz = BaseEngineController_LS_B.s448_DataTypeConversion2;

    /* End of Outputs for SubSystem: '<S504>/OldValue' */
  }

  /* End of If: '<S504>/If' */

  /* DataTypeConversion: '<S448>/Data Type Conversion3' */
  if (rtIsNaN(BaseEngineController_LS_B.s448_ReadCANMessage_o9) || rtIsInf
      (BaseEngineController_LS_B.s448_ReadCANMessage_o9)) {
    rtb_UnitDelay4_b3 = 0.0;
  } else {
    rtb_UnitDelay4_b3 = fmod(floor
      (BaseEngineController_LS_B.s448_ReadCANMessage_o9), 256.0);
  }

  BaseEngineController_LS_B.s448_DataTypeConversion3 = (uint8_T)
    (rtb_UnitDelay4_b3 < 0.0 ? (uint8_T)(int32_T)(int8_T)-(int8_T)(uint8_T)
     -rtb_UnitDelay4_b3 : (uint8_T)rtb_UnitDelay4_b3);

  /* End of DataTypeConversion: '<S448>/Data Type Conversion3' */
  /* If: '<S505>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S505>/override_enable'
   */
  if ((Bank1_SensorStatus_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S505>/If' */

  /* DataTypeConversion: '<S448>/Data Type Conversion4' */
  BaseEngineController_LS_B.s448_DataTypeConversion4 =
    ((BaseEngineController_LS_B.s448_ReadCANMessage_o10 != 0.0));

  /* If: '<S506>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S506>/override_enable'
   */
  if ((Bank1_SensorFaultState_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S506>/If' */

  /* S-Function Block: <S681>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s681_motohawk_delta_time_DWORK1, NULL);
    rtb_Abs_co = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S681>/Product' incorporates:
   *  MinMax: '<S681>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S681>/motohawk_calibration'
   */
  rtb_Abs_co /= (rtb_Abs_co >= (SensVoltFilterConst_DataStore())) || rtIsNaN
    ((SensVoltFilterConst_DataStore())) ? rtb_Abs_co :
    (SensVoltFilterConst_DataStore());

  /* Logic: '<S624>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S624>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S624>/motohawk_fault_status4'
   */
  rtb_RelationalOperator5_fz = (IsFaultActive(103) || IsFaultActive(104));

  /* Logic: '<S624>/Logical Operator6' */
  rtb_LogicalOperator6_b = !rtb_RelationalOperator5_fz;

  /* Logic: '<S624>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S624>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S624>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_al = (IsFaultSuspected(103) || IsFaultSuspected(104));

  /* S-Function Block: <S444>/motohawk_ain3 Resource: SensVoltSensorPin */
  {
    extern NativeError_S SensVoltSensorPin_AnalogInput_Get(uint16_T *adc,
      uint16_T *status);
    SensVoltSensorPin_AnalogInput_Get
      (&BaseEngineController_LS_B.s444_motohawk_ain3, NULL);
  }

  /* DataTypeConversion: '<S624>/Data Type Conversion' */
  rtb_Abs_k = (real_T)BaseEngineController_LS_B.s444_motohawk_ain3;

  /* Product: '<S624>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S624>/motohawk_calibration4'
   */
  rtb_DataTypeConversion1_e = rtb_Abs_k * (SensVoltGain_DataStore());

  /* Sum: '<S624>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S624>/motohawk_calibration5'
   */
  BaseEngineController_LS_B.s624_Sum1 = rtb_DataTypeConversion1_e +
    (SensVoltOfst_DataStore());

  /* UnitDelay: '<S624>/Unit Delay1' */
  rtb_UnitDelay1_c = BaseEngineController_LS_DWork.s624_UnitDelay1_DSTATE;

  /* If: '<S624>/If' incorporates:
   *  Logic: '<S624>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_b && rtb_LogicalOperator1_al) {
    /* Outputs for IfAction SubSystem: '<S624>/If Action Subsystem' incorporates:
     *  ActionPort: '<S682>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay1_c, &rtb_Merge_ht);

    /* End of Outputs for SubSystem: '<S624>/If Action Subsystem' */
  } else if (rtb_RelationalOperator5_fz) {
    /* Outputs for IfAction SubSystem: '<S624>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S683>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((SensVoltDfltValue_DataStore()),
      &rtb_Merge_ht);

    /* End of Outputs for SubSystem: '<S624>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S624>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S684>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      (BaseEngineController_LS_B.s624_Sum1, &rtb_Merge_ht);

    /* End of Outputs for SubSystem: '<S624>/If Action Subsystem2' */
  }

  /* End of If: '<S624>/If' */

  /* Sum: '<S686>/Sum1' incorporates:
   *  Constant: '<S686>/Constant'
   *  Product: '<S686>/Product'
   *  Product: '<S686>/Product1'
   *  Sum: '<S686>/Sum'
   *  UnitDelay: '<S686>/Unit Delay'
   */
  rtb_Sum1_m3 = (1.0 - rtb_Abs_co) *
    BaseEngineController_LS_DWork.s686_UnitDelay_DSTATE + rtb_Merge_ht *
    rtb_Abs_co;

  /* If: '<S685>/If' incorporates:
   *  Inport: '<S687>/In1'
   *  Inport: '<S688>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S685>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S685>/override_enable'
   */
  if ((SensVolt_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S685>/NewValue' incorporates:
     *  ActionPort: '<S687>/Action Port'
     */
    BaseEngineController_LS_B.s685_Merge = (SensVolt_new_DataStore());

    /* End of Outputs for SubSystem: '<S685>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S685>/OldValue' incorporates:
     *  ActionPort: '<S688>/Action Port'
     */
    BaseEngineController_LS_B.s685_Merge = rtb_Sum1_m3;

    /* End of Outputs for SubSystem: '<S685>/OldValue' */
  }

  /* End of If: '<S685>/If' */

  /* Outputs for Enabled SubSystem: '<S439>/Triggered Subsystem' incorporates:
   *  EnablePort: '<S440>/Enable'
   */
  if (rtb_RelationalOperator_jv) {
    /* Outputs for Function Call SubSystem: '<S11>/Diagnostics' */

    /* RelationalOperator: '<S333>/RelOp' incorporates:
     *  Constant: '<S333>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S324>/motohawk_data_read'
     */
    rtb_BelowLoTarget_j = (((uint8_T)EngineState_DataStore()) == 3);

    /* RelationalOperator: '<S324>/Relational Operator' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S324>/motohawk_calibration'
     */
    rtb_RelOp_mp = (BaseEngineController_LS_B.s630_Merge >= (real_T)((uint16_T)
      (ACHighPressureDisable_DataStore())));

    /* Logic: '<S324>/Logical Operator' */
    rtb_LogicalOperator_ct = ((rtb_BelowLoTarget_j && rtb_RelOp_mp));

    /* S-Function (motohawk_sfun_fault_def): '<S324>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: ACChargeHigh_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(0, rtb_LogicalOperator_ct);
      UpdateFault(0);
    }

    /* RelationalOperator: '<S324>/Relational Operator1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S324>/motohawk_calibration2'
     */
    rtb_RelOp_mp = (BaseEngineController_LS_B.s630_Merge <= (real_T)((uint16_T)
      (ACLowPressureDisable_DataStore())));

    /* Logic: '<S324>/Logical Operator1' */
    rtb_LogicalOperator1_o = ((rtb_BelowLoTarget_j && rtb_RelOp_mp &&
      BaseEngineController_LS_B.s135_AC));

    /* S-Function (motohawk_sfun_fault_def): '<S324>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: ACChargeLow_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(1, rtb_LogicalOperator1_o);
      UpdateFault(1);
    }

    /* RelationalOperator: '<S334>/RelOp' incorporates:
     *  Constant: '<S334>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S325>/motohawk_data_read'
     */
    rtb_RelOp_mp = (((uint8_T)EngineState_DataStore()) == 3);

    /* Gain: '<S325>/kPa to PSI' */
    rtb_motohawk_interpolation_1d3_a = 0.145038 *
      BaseEngineController_LS_B.s659_Merge;

    /* Logic: '<S325>/Logical Operator' incorporates:
     *  RelationalOperator: '<S325>/Relational Operator'
     *  S-Function (motohawk_sfun_calibration): '<S325>/motohawk_calibration'
     */
    rtb_LogicalOperator_bx = ((rtb_RelOp_mp && (rtb_motohawk_interpolation_1d3_a
      >= (SoftOverBoostLimit_DataStore()))));

    /* S-Function (motohawk_sfun_fault_def): '<S325>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: SoftOverBoost_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(105, rtb_LogicalOperator_bx);
      UpdateFault(105);
    }

    /* Logic: '<S325>/Logical Operator1' incorporates:
     *  RelationalOperator: '<S325>/Relational Operator1'
     *  S-Function (motohawk_sfun_calibration): '<S325>/motohawk_calibration1'
     */
    rtb_LogicalOperator1_joj = ((rtb_RelOp_mp &&
      (rtb_motohawk_interpolation_1d3_a >= (HardOverBoostLimit_DataStore()))));

    /* S-Function (motohawk_sfun_fault_def): '<S325>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: HardOverBoost_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(70, rtb_LogicalOperator1_joj);
      UpdateFault(70);
    }

    /* Logic: '<S325>/Logical Operator2' incorporates:
     *  RelationalOperator: '<S325>/Relational Operator2'
     *  S-Function (motohawk_sfun_calibration): '<S325>/motohawk_calibration2'
     */
    rtb_LogicalOperator2_bv = ((rtb_RelOp_mp &&
      (BaseEngineController_LS_B.s135_WASTEGATE >=
       (WastegateLossOfControl_DataStore()))));

    /* S-Function (motohawk_sfun_fault_def): '<S325>/motohawk_fault_def3' */

    /* Set Fault Suspected Status: Wastegate_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(124, rtb_LogicalOperator2_bv);
      UpdateFault(124);
    }

    /* Product: '<S328>/Product' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S328>/motohawk_data_read'
     *  S-Function (motohawk_sfun_fault_status): '<S328>/motohawk_fault_status2'
     */
    rtb_Switch_om = (uint8_T)(IsFaultActive(23) ? ((uint8_T)
      Bank2_Enable_DataStore()) : 0);

    /* Product: '<S328>/Product1' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S328>/motohawk_data_read'
     *  S-Function (motohawk_sfun_fault_status): '<S328>/motohawk_fault_status3'
     */
    rtb_Product_ln = (uint8_T)(IsFaultActive(24) ? ((uint8_T)
      Bank2_Enable_DataStore()) : 0);

    /* Logic: '<S328>/Logical Operator1' incorporates:
     *  S-Function (motohawk_sfun_fault_status): '<S328>/motohawk_fault_status'
     *  S-Function (motohawk_sfun_fault_status): '<S328>/motohawk_fault_status1'
     */
    rtb_LogicalOperator6_b = ((rtb_Switch_om != 0) || (rtb_Product_ln != 0) ||
      IsFaultActive(21) || IsFaultActive(22) ||
      BaseEngineController_LS_B.s574_Merge);

    /* RelationalOperator: '<S328>/Relational Operator1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S328>/motohawk_calibration3'
     */
    rtb_LogicalOperator1_al = (BaseEngineController_LS_B.s448_MultiportSwitch <
                               (LeanProtect_Threshold_DataStore()));

    /* Logic: '<S328>/Logical Operator4' incorporates:
     *  Constant: '<S340>/Constant'
     *  Logic: '<S328>/Logical Operator3'
     *  RelationalOperator: '<S340>/RelOp'
     *  S-Function (motohawk_sfun_data_read): '<S328>/motohawk_data_read1'
     */
    rtb_LogicalOperator4_l = (((!rtb_LogicalOperator6_b) &&
      rtb_LogicalOperator1_al && (((uint8_T)EngineState_DataStore()) == 3)));

    /* S-Function (motohawk_sfun_fault_def): '<S328>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: LeanProtect_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(86, rtb_LogicalOperator4_l);
      UpdateFault(86);
    }

    /* Logic: '<S330>/Logical Operator3' incorporates:
     *  Logic: '<S330>/Logical Operator1'
     *  S-Function (motohawk_sfun_fault_status): '<S330>/motohawk_fault_status'
     *  S-Function (motohawk_sfun_fault_status): '<S330>/motohawk_fault_status1'
     *  S-Function (motohawk_sfun_fault_status): '<S330>/motohawk_fault_status2'
     *  S-Function (motohawk_sfun_fault_status): '<S330>/motohawk_fault_status3'
     *  S-Function (motohawk_sfun_fault_status): '<S330>/motohawk_fault_status4'
     *  S-Function (motohawk_sfun_fault_status): '<S330>/motohawk_fault_status5'
     */
    rtb_RelOp_mp = !(IsFaultActive(113) || IsFaultActive(119) || IsFaultActive
                     (114) || IsFaultActive(120) || IsFaultActive(89) ||
                     IsFaultActive(90));

    /* RelationalOperator: '<S342>/RelOp' incorporates:
     *  Constant: '<S342>/Constant'
     */
    rtb_BelowLoTarget_j = (BaseEngineController_LS_B.s428_State == 3);

    /* RelationalOperator: '<S330>/Relational Operator3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S330>/motohawk_calibration2'
     */
    rtb_LogicalOperator6_b = (BaseEngineController_LS_B.s412_Switch2 <
      (MAP_IR_TPS_CL_DataStore()));

    /* Logic: '<S330>/Logical Operator4' incorporates:
     *  RelationalOperator: '<S330>/Relational Operator4'
     *  S-Function (motohawk_sfun_calibration): '<S330>/motohawk_calibration4'
     */
    rtb_LogicalOperator4_k = ((rtb_RelOp_mp && rtb_BelowLoTarget_j &&
      rtb_LogicalOperator6_b && (BaseEngineController_LS_B.s659_Merge >
      (MAP_IR_HI_DataStore()))));

    /* S-Function (motohawk_sfun_fault_def): '<S330>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: MAP_IR_HI */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(93, rtb_LogicalOperator4_k);
      UpdateFault(93);
    }

    /* RelationalOperator: '<S330>/Relational Operator1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S330>/motohawk_calibration6'
     */
    rtb_LogicalOperator6_b = (BaseEngineController_LS_B.s412_Switch2 >
      (MAP_IR_TPS_OP_DataStore()));

    /* Logic: '<S330>/Logical Operator2' incorporates:
     *  RelationalOperator: '<S330>/Relational Operator2'
     *  S-Function (motohawk_sfun_calibration): '<S330>/motohawk_calibration5'
     */
    rtb_LogicalOperator2_ip = ((rtb_RelOp_mp && rtb_BelowLoTarget_j &&
      rtb_LogicalOperator6_b && (BaseEngineController_LS_B.s659_Merge <
      (MAP_IR_LO_DataStore()))));

    /* S-Function (motohawk_sfun_fault_def): '<S330>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: MAP_IR_LO */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(94, rtb_LogicalOperator2_ip);
      UpdateFault(94);
    }

    /* RelationalOperator: '<S330>/Relational Operator7' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S330>/motohawk_calibration8'
     */
    rtb_LogicalOperator6_b = (BaseEngineController_LS_B.s412_Switch2 <
      (MAP_TPS_STUCK_DataStore()));

    /* Sum: '<S330>/Add' */
    rtb_DataTypeConversion1_e = BaseEngineController_LS_B.s367_Sum -
      BaseEngineController_LS_B.s659_Merge;

    /* Logic: '<S330>/Logical Operator5' incorporates:
     *  RelationalOperator: '<S330>/Relational Operator8'
     *  S-Function (motohawk_sfun_calibration): '<S330>/motohawk_calibration7'
     */
    rtb_LogicalOperator5_oa = ((rtb_RelOp_mp && rtb_BelowLoTarget_j &&
      rtb_LogicalOperator6_b && (rtb_DataTypeConversion1_e <
      (MAP_STUCK_DataStore()))));

    /* S-Function (motohawk_sfun_fault_def): '<S330>/motohawk_fault_def3' */

    /* Set Fault Suspected Status: MAP_STICKING */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(95, rtb_LogicalOperator5_oa);
      UpdateFault(95);
    }

    /* DataTypeConversion: '<S331>/Data Type Conversion' */
    if (rtIsNaN(BaseEngineController_LS_B.s443_RPMInst) || rtIsInf
        (BaseEngineController_LS_B.s443_RPMInst)) {
      rtb_UnitDelay4_b3 = 0.0;
    } else {
      rtb_UnitDelay4_b3 = fmod(floor(BaseEngineController_LS_B.s443_RPMInst),
        65536.0);
    }

    rtb_DataTypeConversion_ol = (int16_T)(rtb_UnitDelay4_b3 < 0.0 ? (int16_T)
      -(int16_T)(uint16_T)-rtb_UnitDelay4_b3 : (int16_T)(uint16_T)
      rtb_UnitDelay4_b3);

    /* End of DataTypeConversion: '<S331>/Data Type Conversion' */
    /* RelationalOperator: '<S345>/LT' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S343>/motohawk_calibration'
     */
    rtb_RelOp_mp = (rtb_DataTypeConversion_ol >= ((int16_T)
      (BaseRevLimit_DataStore())));

    /* Sum: '<S343>/Sum2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S343>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S343>/motohawk_calibration1'
     */
    i = ((int16_T)(BaseRevLimit_DataStore())) - ((int16_T)
      (RevLimitHyst_DataStore()));
    if (i > 32767) {
      i = 32767;
    } else {
      if (i <= -32768) {
        i = -32768;
      }
    }

    rtb_Sum2_lt = (int16_T)i;

    /* End of Sum: '<S343>/Sum2' */

    /* RelationalOperator: '<S345>/LT1' */
    rtb_BelowLoTarget_j = (rtb_DataTypeConversion_ol <= rtb_Sum2_lt);

    /* CombinatorialLogic: '<S348>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_RelOp_mp != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_j != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_l[0] =
        BaseEngineController_LS_ConstP.pooled908[rowidx];
      rtb_CombinatorialLogic_l[1] =
        BaseEngineController_LS_ConstP.pooled908[rowidx + 4];
    }

    /* Switch: '<S348>/Switch1' incorporates:
     *  UnitDelay: '<S348>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_l[1]) {
      rtb_Switch1_mj = rtb_CombinatorialLogic_l[0];
    } else {
      rtb_Switch1_mj = BaseEngineController_LS_DWork.s348_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S348>/Switch1' */
    /* Sum: '<S343>/Sum3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S343>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S343>/motohawk_calibration2'
     */
    i = ((int16_T)(BaseRevLimit_DataStore())) + ((int16_T)
      (MediumRevOffset_DataStore()));
    if (i > 32767) {
      i = 32767;
    } else {
      if (i <= -32768) {
        i = -32768;
      }
    }

    rtb_Sum4_e = (int16_T)i;

    /* End of Sum: '<S343>/Sum3' */

    /* RelationalOperator: '<S346>/LT' */
    rtb_RelOp_mp = (rtb_DataTypeConversion_ol >= rtb_Sum4_e);

    /* Sum: '<S343>/Sum1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S343>/motohawk_calibration1'
     */
    i = rtb_Sum4_e - ((int16_T)(RevLimitHyst_DataStore()));
    if (i > 32767) {
      i = 32767;
    } else {
      if (i <= -32768) {
        i = -32768;
      }
    }

    rtb_Switch2_m = (int16_T)i;

    /* End of Sum: '<S343>/Sum1' */

    /* RelationalOperator: '<S346>/LT1' */
    rtb_BelowLoTarget_j = (rtb_DataTypeConversion_ol <= rtb_Switch2_m);

    /* CombinatorialLogic: '<S349>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_RelOp_mp != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_j != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_l[0] =
        BaseEngineController_LS_ConstP.pooled908[rowidx];
      rtb_CombinatorialLogic_l[1] =
        BaseEngineController_LS_ConstP.pooled908[rowidx + 4];
    }

    /* Switch: '<S349>/Switch1' incorporates:
     *  UnitDelay: '<S349>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_l[1]) {
      rtb_RelOp_d = rtb_CombinatorialLogic_l[0];
    } else {
      rtb_RelOp_d = BaseEngineController_LS_DWork.s349_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S349>/Switch1' */

    /* Switch: '<S346>/Switch2' incorporates:
     *  Logic: '<S346>/Logical Operator'
     */
    if (rtb_RelOp_d) {
      rtb_Sum4_e = rtb_Switch2_m;
    }

    /* End of Switch: '<S346>/Switch2' */

    /* RelationalOperator: '<S343>/Overspeed1' */
    rtb_LogicalOperator6_b = (rtb_DataTypeConversion_ol > rtb_Sum4_e);

    /* Logic: '<S331>/Logical Operator' */
    rtb_RelOp_mp = !BaseEngineController_LS_B.s592_Merge;

    /* RelationalOperator: '<S351>/LT' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S344>/motohawk_calibration'
     */
    rtb_BelowLoTarget_j = (rtb_DataTypeConversion_ol >= ((int16_T)
      (TwoStepRevLimit_DataStore())));

    /* Sum: '<S344>/Sum2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S344>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S344>/motohawk_calibration1'
     */
    i = ((int16_T)(TwoStepRevLimit_DataStore())) - ((int16_T)
      (TwoStepRevLimitHyst_DataStore()));
    if (i > 32767) {
      i = 32767;
    } else {
      if (i <= -32768) {
        i = -32768;
      }
    }

    rtb_Sum2_b5 = (int16_T)i;

    /* End of Sum: '<S344>/Sum2' */

    /* RelationalOperator: '<S351>/LT1' */
    rtb_LogicalOperator3_cj = (rtb_DataTypeConversion_ol <= rtb_Sum2_b5);

    /* CombinatorialLogic: '<S354>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_j != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_LogicalOperator3_cj != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_l[0] =
        BaseEngineController_LS_ConstP.pooled908[rowidx];
      rtb_CombinatorialLogic_l[1] =
        BaseEngineController_LS_ConstP.pooled908[rowidx + 4];
    }

    /* Switch: '<S354>/Switch1' incorporates:
     *  UnitDelay: '<S354>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_l[1]) {
      rtb_Switch1_l = rtb_CombinatorialLogic_l[0];
    } else {
      rtb_Switch1_l = BaseEngineController_LS_DWork.s354_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S354>/Switch1' */
    /* Sum: '<S344>/Sum3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S344>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S344>/motohawk_calibration2'
     */
    i = ((int16_T)(TwoStepRevLimit_DataStore())) + ((int16_T)
      (TwoStepMediumRevOffset_DataStore()));
    if (i > 32767) {
      i = 32767;
    } else {
      if (i <= -32768) {
        i = -32768;
      }
    }

    rtb_Switch2_m = (int16_T)i;

    /* End of Sum: '<S344>/Sum3' */

    /* RelationalOperator: '<S352>/LT' */
    rtb_LogicalOperator3_cj = (rtb_DataTypeConversion_ol >= rtb_Switch2_m);

    /* Sum: '<S344>/Sum1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S344>/motohawk_calibration1'
     */
    i = rtb_Switch2_m - ((int16_T)(TwoStepRevLimitHyst_DataStore()));
    if (i > 32767) {
      i = 32767;
    } else {
      if (i <= -32768) {
        i = -32768;
      }
    }

    rtb_Sum4_e = (int16_T)i;

    /* End of Sum: '<S344>/Sum1' */

    /* RelationalOperator: '<S352>/LT1' */
    rtb_BelowLoTarget_j = (rtb_DataTypeConversion_ol <= rtb_Sum4_e);

    /* CombinatorialLogic: '<S355>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_LogicalOperator3_cj != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_j != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_l[0] =
        BaseEngineController_LS_ConstP.pooled908[rowidx];
      rtb_CombinatorialLogic_l[1] =
        BaseEngineController_LS_ConstP.pooled908[rowidx + 4];
    }

    /* Switch: '<S355>/Switch1' incorporates:
     *  UnitDelay: '<S355>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_l[1]) {
      rtb_Switch1_o = rtb_CombinatorialLogic_l[0];
    } else {
      rtb_Switch1_o = BaseEngineController_LS_DWork.s355_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S355>/Switch1' */

    /* Switch: '<S352>/Switch2' incorporates:
     *  Logic: '<S352>/Logical Operator'
     */
    if (rtb_Switch1_o) {
      rtb_Switch2_m = rtb_Sum4_e;
    }

    /* End of Switch: '<S352>/Switch2' */

    /* RelationalOperator: '<S344>/Overspeed1' */
    rtb_LogicalOperator1_al = (rtb_DataTypeConversion_ol > rtb_Switch2_m);

    /* Switch: '<S331>/Switch' incorporates:
     *  Logic: '<S343>/Logical Operator3'
     *  Logic: '<S343>/Logical Operator4'
     *  Logic: '<S344>/Logical Operator3'
     *  Logic: '<S344>/Logical Operator4'
     *  RelationalOperator: '<S343>/Overspeed'
     *  RelationalOperator: '<S344>/Overspeed'
     */
    if (rtb_RelOp_mp) {
      /* Switch: '<S345>/Switch2' incorporates:
       *  Logic: '<S345>/Logical Operator'
       *  S-Function (motohawk_sfun_calibration): '<S343>/motohawk_calibration'
       */
      if (!rtb_Switch1_mj) {
        rtb_Sum2_lt = ((int16_T)(BaseRevLimit_DataStore()));
      }

      /* End of Switch: '<S345>/Switch2' */
      rtb_LogicalOperator3_cj = ((rtb_DataTypeConversion_ol > rtb_Sum2_lt) &&
        (!rtb_LogicalOperator6_b));
    } else {
      /* Switch: '<S351>/Switch2' incorporates:
       *  Logic: '<S351>/Logical Operator'
       *  S-Function (motohawk_sfun_calibration): '<S344>/motohawk_calibration'
       */
      if (!rtb_Switch1_l) {
        rtb_Sum2_b5 = ((int16_T)(TwoStepRevLimit_DataStore()));
      }

      /* End of Switch: '<S351>/Switch2' */
      rtb_LogicalOperator3_cj = ((rtb_DataTypeConversion_ol > rtb_Sum2_b5) &&
        (!rtb_LogicalOperator1_al));
    }

    /* End of Switch: '<S331>/Switch' */

    /* S-Function (motohawk_sfun_fault_def): '<S331>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: SoftOverspeed */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(106, rtb_LogicalOperator3_cj);
      UpdateFault(106);
    }

    /* Sum: '<S343>/Sum5' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S343>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S343>/motohawk_calibration4'
     */
    i = ((int16_T)(BaseRevLimit_DataStore())) + ((int16_T)
      (HardRevOffset_DataStore()));
    if (i > 32767) {
      i = 32767;
    } else {
      if (i <= -32768) {
        i = -32768;
      }
    }

    rtb_Switch2_m = (int16_T)i;

    /* End of Sum: '<S343>/Sum5' */

    /* RelationalOperator: '<S347>/LT' */
    rtb_LogicalOperator3_cj = (rtb_DataTypeConversion_ol >= rtb_Switch2_m);

    /* Sum: '<S343>/Sum4' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S343>/motohawk_calibration1'
     */
    i = rtb_Switch2_m - ((int16_T)(RevLimitHyst_DataStore()));
    if (i > 32767) {
      i = 32767;
    } else {
      if (i <= -32768) {
        i = -32768;
      }
    }

    rtb_Sum4_e = (int16_T)i;

    /* End of Sum: '<S343>/Sum4' */

    /* RelationalOperator: '<S347>/LT1' */
    rtb_BelowLoTarget_j = (rtb_DataTypeConversion_ol <= rtb_Sum4_e);

    /* CombinatorialLogic: '<S350>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_LogicalOperator3_cj != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_j != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_l[0] =
        BaseEngineController_LS_ConstP.pooled908[rowidx];
      rtb_CombinatorialLogic_l[1] =
        BaseEngineController_LS_ConstP.pooled908[rowidx + 4];
    }

    /* Switch: '<S350>/Switch1' incorporates:
     *  UnitDelay: '<S350>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_l[1]) {
      rtb_Switch1_l3 = rtb_CombinatorialLogic_l[0];
    } else {
      rtb_Switch1_l3 = BaseEngineController_LS_DWork.s350_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S350>/Switch1' */

    /* Switch: '<S347>/Switch2' incorporates:
     *  Logic: '<S347>/Logical Operator'
     */
    if (rtb_Switch1_l3) {
      rtb_Switch2_m = rtb_Sum4_e;
    }

    /* End of Switch: '<S347>/Switch2' */

    /* RelationalOperator: '<S343>/Overspeed2' */
    rtb_RelationalOperator3_bp = (rtb_DataTypeConversion_ol > rtb_Switch2_m);

    /* Sum: '<S344>/Sum5' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S344>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S344>/motohawk_calibration4'
     */
    i = ((int16_T)(TwoStepRevLimit_DataStore())) + ((int16_T)
      (TwoStepHardRevOffset_DataStore()));
    if (i > 32767) {
      i = 32767;
    } else {
      if (i <= -32768) {
        i = -32768;
      }
    }

    rtb_Switch2_m = (int16_T)i;

    /* End of Sum: '<S344>/Sum5' */

    /* RelationalOperator: '<S353>/LT' */
    rtb_LogicalOperator3_cj = (rtb_DataTypeConversion_ol >= rtb_Switch2_m);

    /* Sum: '<S344>/Sum4' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S344>/motohawk_calibration1'
     */
    i = rtb_Switch2_m - ((int16_T)(TwoStepRevLimitHyst_DataStore()));
    if (i > 32767) {
      i = 32767;
    } else {
      if (i <= -32768) {
        i = -32768;
      }
    }

    rtb_Sum4_e = (int16_T)i;

    /* End of Sum: '<S344>/Sum4' */

    /* RelationalOperator: '<S353>/LT1' */
    rtb_BelowLoTarget_j = (rtb_DataTypeConversion_ol <= rtb_Sum4_e);

    /* CombinatorialLogic: '<S356>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_LogicalOperator3_cj != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_j != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_l[0] =
        BaseEngineController_LS_ConstP.pooled908[rowidx];
      rtb_CombinatorialLogic_l[1] =
        BaseEngineController_LS_ConstP.pooled908[rowidx + 4];
    }

    /* Switch: '<S356>/Switch1' incorporates:
     *  UnitDelay: '<S356>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_l[1]) {
      rtb_Switch1_bv = rtb_CombinatorialLogic_l[0];
    } else {
      rtb_Switch1_bv = BaseEngineController_LS_DWork.s356_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S356>/Switch1' */

    /* Switch: '<S353>/Switch2' incorporates:
     *  Logic: '<S353>/Logical Operator'
     */
    if (rtb_Switch1_bv) {
      rtb_Switch2_m = rtb_Sum4_e;
    }

    /* End of Switch: '<S353>/Switch2' */

    /* RelationalOperator: '<S344>/Overspeed2' */
    rtb_RelOp_pu = (rtb_DataTypeConversion_ol > rtb_Switch2_m);

    /* Switch: '<S331>/Switch1' incorporates:
     *  Logic: '<S343>/Logical Operator5'
     *  Logic: '<S343>/Logical Operator6'
     *  Logic: '<S344>/Logical Operator5'
     *  Logic: '<S344>/Logical Operator6'
     */
    if (rtb_RelOp_mp) {
      rtb_LogicalOperator3_cj = (rtb_LogicalOperator6_b &&
        (!rtb_RelationalOperator3_bp));
    } else {
      rtb_LogicalOperator3_cj = (rtb_LogicalOperator1_al && (!rtb_RelOp_pu));
    }

    /* End of Switch: '<S331>/Switch1' */

    /* S-Function (motohawk_sfun_fault_def): '<S331>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: MediumOverspeed */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(96, rtb_LogicalOperator3_cj);
      UpdateFault(96);
    }

    /* Switch: '<S331>/Switch2' */
    if (rtb_RelOp_mp) {
      rtb_RelOp_mp = rtb_RelationalOperator3_bp;
    } else {
      rtb_RelOp_mp = rtb_RelOp_pu;
    }

    /* End of Switch: '<S331>/Switch2' */

    /* S-Function (motohawk_sfun_fault_def): '<S331>/motohawk_fault_def3' */

    /* Set Fault Suspected Status: HardOverspeed */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(71, rtb_RelOp_mp);
      UpdateFault(71);
    }

    /* Logic: '<S332>/Logical Operator3' incorporates:
     *  Logic: '<S332>/Logical Operator1'
     *  S-Function (motohawk_sfun_fault_status): '<S332>/motohawk_fault_status'
     *  S-Function (motohawk_sfun_fault_status): '<S332>/motohawk_fault_status1'
     */
    rtb_LogicalOperator3_cj = !(IsFaultActive(60) || IsFaultActive(61) ||
      BaseEngineController_LS_B.s574_Merge);

    /* Sum: '<S332>/Sum3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S332>/motohawk_calibration2'
     */
    rtb_motohawk_interpolation_1d3_a = BaseEngineController_LS_B.s408_Sum3 -
      (FuelPres_DeltaTarget_DataStore());

    /* Logic: '<S332>/Logical Operator4' incorporates:
     *  Gain: '<S332>/invert'
     *  RelationalOperator: '<S332>/Relational Operator1'
     *  S-Function (motohawk_sfun_calibration): '<S332>/motohawk_calibration3'
     */
    rtb_LogicalOperator4_j = ((rtb_LogicalOperator3_cj &&
      (rtb_motohawk_interpolation_1d3_a < -(FuelPres_DeltaTolerance_DataStore()))));

    /* S-Function (motohawk_sfun_fault_def): '<S332>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: FuelPresLow_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(59, rtb_LogicalOperator4_j);
      UpdateFault(59);
    }

    /* Logic: '<S332>/Logical Operator2' incorporates:
     *  RelationalOperator: '<S332>/Relational Operator3'
     *  S-Function (motohawk_sfun_calibration): '<S332>/motohawk_calibration3'
     */
    rtb_LogicalOperator2_o4 = ((rtb_LogicalOperator3_cj &&
      (rtb_motohawk_interpolation_1d3_a > (FuelPres_DeltaTolerance_DataStore()))));

    /* S-Function (motohawk_sfun_fault_def): '<S332>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: FuelPresHigh_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(58, rtb_LogicalOperator2_o4);
      UpdateFault(58);
    }

    /* Logic: '<S326>/Logical Operator3' incorporates:
     *  Logic: '<S326>/Logical Operator1'
     *  S-Function (motohawk_sfun_fault_status): '<S326>/motohawk_fault_status'
     *  S-Function (motohawk_sfun_fault_status): '<S326>/motohawk_fault_status1'
     */
    rtb_LogicalOperator3_cj = !(IsFaultActive(32) || IsFaultActive(33));

    /* RelationalOperator: '<S335>/RelOp' incorporates:
     *  Constant: '<S335>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S326>/motohawk_data_read'
     */
    rtb_RelOp_mp = (((uint8_T)EngineState_DataStore()) == 3);

    /* Logic: '<S326>/Logical Operator2' incorporates:
     *  RelationalOperator: '<S326>/Relational Operator3'
     *  S-Function (motohawk_sfun_calibration): '<S326>/motohawk_calibration2'
     */
    rtb_LogicalOperator2_ie = ((rtb_LogicalOperator3_cj && rtb_RelOp_mp &&
      (BaseEngineController_LS_B.s726_Merge >= (TempOverheat_Fault_DataStore()))));

    /* S-Function (motohawk_sfun_fault_def): '<S326>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: ECTOverTempFault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(31, rtb_LogicalOperator2_ie);
      UpdateFault(31);
    }

    /* Logic: '<S326>/Logical Operator4' incorporates:
     *  RelationalOperator: '<S326>/Relational Operator2'
     *  S-Function (motohawk_sfun_calibration): '<S326>/motohawk_calibration3'
     */
    rtb_LogicalOperator4_jz = ((rtb_LogicalOperator3_cj && rtb_RelOp_mp &&
      (BaseEngineController_LS_B.s726_Merge >=
       (TempOverheatSevere_Fault_DataStore()))));

    /* S-Function (motohawk_sfun_fault_def): '<S326>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: ECTSevereOverTempFault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(34, rtb_LogicalOperator4_jz);
      UpdateFault(34);
    }

    /* S-Function (motohawk_sfun_calibration): '<S326>/motohawk_calibration1' */
    rtb_motohawk_interpolation_1d3_a = (TempOverheat_Warn_DataStore());

    /* Gain: '<S327>/inj//min to inj//hr' incorporates:
     *  DataTypeConversion: '<S327>/Data Type Conversion'
     *  Product: '<S327>/RPM to inj//min'
     *  S-Function (motohawk_sfun_data_read): '<S327>/Number of Combustion Events Per Revolution'
     */
    rtb_DataTypeConversion1_e = BaseEngineController_LS_B.s616_Sum1 * (real_T)
      ((uint8_T)CombEventsPerRev_DataStore()) * 60.0;

    /* Gain: '<S336>/Gain' */
    rtb_motohawk_interpolation_1d3_a = 0.01 *
      BaseEngineController_LS_B.s638_Merge;

    /* Gain: '<S327>/g to mg' incorporates:
     *  Constant: '<S336>/ '
     *  Constant: '<S336>/ Ethanol density (g//ml)'
     *  Constant: '<S336>/ Gasoline density (g//ml)'
     *  Product: '<S336>/Product1'
     *  Product: '<S336>/Product2'
     *  Sum: '<S336>/Add'
     *  Sum: '<S336>/Add1'
     */
    rtb_DataTypeConversion_b2 = ((1.0 - rtb_motohawk_interpolation_1d3_a) *
      0.737 + 0.789 * rtb_motohawk_interpolation_1d3_a) * 1000.0;
    for (i = 0; i < 8; i++) {
      /* Gain: '<S327>/ml//hr to gal//hr' incorporates:
       *  Product: '<S327>/Mass flow to Volume flow mg//hr to ml//hr'
       *  Product: '<S327>/inj//hr to mg//hr'
       */
      rtb_UnitDelay4_b3 = rtb_DataTypeConversion1_e *
        BaseEngineController_LS_B.s135_FPC[i] / rtb_DataTypeConversion_b2 *
        0.00026417205263729591;

      /* RelationalOperator: '<S327>/Relational Operator7' incorporates:
       *  Constant: '<S327>/Min fuel flow  for calc'
       */
      rtb_LogicalOperator1_aj[i] = (rtb_UnitDelay4_b3 > 0.1);

      /* Gain: '<S327>/ml//hr to gal//hr' */
      rtb_Product2_aa[i] = rtb_UnitDelay4_b3;
    }

    /* Outputs for Enabled SubSystem: '<S327>/Multiply and Divide, avoiding divde by zero1' incorporates:
     *  EnablePort: '<S338>/Enable'
     */
    if (rtb_LogicalOperator1_aj[0] || rtb_LogicalOperator1_aj[1] ||
        rtb_LogicalOperator1_aj[2] || rtb_LogicalOperator1_aj[3] ||
        rtb_LogicalOperator1_aj[4] || rtb_LogicalOperator1_aj[5] ||
        rtb_LogicalOperator1_aj[6] || rtb_LogicalOperator1_aj[7]) {
      /* Product: '<S338>/charge mass' */
      for (i = 0; i < 8; i++) {
        BaseEngineController_LS_B.s338_chargemass[i] =
          BaseEngineController_LS_B.s416_Switch2 / rtb_Product2_aa[i];
      }

      /* End of Product: '<S338>/charge mass' */
    }

    /* End of Outputs for SubSystem: '<S327>/Multiply and Divide, avoiding divde by zero1' */

    /* Switch: '<S327>/Default (if no flow)' incorporates:
     *  Constant: '<S327>/Default value'
     */
    for (i = 0; i < 8; i++) {
      if (rtb_LogicalOperator1_aj[i]) {
        BaseEngineController_LS_B.s327_Defaultifnoflow[i] =
          BaseEngineController_LS_B.s338_chargemass[i];
      } else {
        BaseEngineController_LS_B.s327_Defaultifnoflow[i] = 0.0;
      }
    }

    /* End of Switch: '<S327>/Default (if no flow)' */

    /* S-Function Block: <S337>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s337_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_interpolation_1d3_a = ((real_T) delta) * 0.000001;
    }

    /* Product: '<S337>/Product' incorporates:
     *  MinMax: '<S337>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S337>/motohawk_calibration2'
     */
    rtb_motohawk_interpolation_1d3_a /= (rtb_motohawk_interpolation_1d3_a >=
      (FuelEconomy_FilterC_DataStore())) || rtIsNaN
      ((FuelEconomy_FilterC_DataStore())) ? rtb_motohawk_interpolation_1d3_a :
      (FuelEconomy_FilterC_DataStore());

    /* Sum: '<S339>/Sum' incorporates:
     *  Constant: '<S339>/Constant'
     */
    rtb_DataTypeConversion1_e = 1.0 - rtb_motohawk_interpolation_1d3_a;

    /* Sum: '<S339>/Sum1' incorporates:
     *  Product: '<S339>/Product'
     *  Product: '<S339>/Product1'
     *  UnitDelay: '<S339>/Unit Delay'
     */
    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_B.s339_Sum1[i] =
        BaseEngineController_LS_B.s327_Defaultifnoflow[i] *
        rtb_motohawk_interpolation_1d3_a + rtb_DataTypeConversion1_e *
        BaseEngineController_LS_DWork.s339_UnitDelay_DSTATE[i];
    }

    /* End of Sum: '<S339>/Sum1' */

    /* Logic: '<S329>/Logical Operator1' incorporates:
     *  S-Function (motohawk_sfun_fault_status): '<S329>/motohawk_fault_status'
     *  S-Function (motohawk_sfun_fault_status): '<S329>/motohawk_fault_status1'
     */
    rtb_LogicalOperator6_b = (IsFaultActive(101) || IsFaultActive(102));

    /* RelationalOperator: '<S341>/RelOp' incorporates:
     *  Constant: '<S341>/Constant'
     */
    rtb_LogicalOperator1_al = (BaseEngineController_LS_B.s428_State == 3);

    /* S-Function Block: <S329>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_n = TableInterpolation1D_real_T
        (BaseEngineController_LS_B.s397_motohawk_prelookup1, (real_T *)
         ((MinOilPressure_FaultTbl_DataStore())), 9);
      (MinOilPressure_Fault_DataStore()) = rtb_motohawk_interpolation_1d_n;
    }

    /* Logic: '<S329>/Logical Operator4' incorporates:
     *  Logic: '<S329>/Logical Operator3'
     *  RelationalOperator: '<S329>/Relational Operator2'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S329>/motohawk_interpolation_1d'
     */
    rtb_LogicalOperator4_mv = (((!rtb_LogicalOperator6_b) &&
      rtb_LogicalOperator1_al && (BaseEngineController_LS_B.s677_Merge <
      rtb_motohawk_interpolation_1d_n)));

    /* S-Function (motohawk_sfun_fault_def): '<S329>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: NoOil_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(97, rtb_LogicalOperator4_mv);
      UpdateFault(97);
    }

    /* S-Function Block: <S329>/motohawk_interpolation_1d3 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d3_a = TableInterpolation1D_real_T
        (BaseEngineController_LS_B.s397_motohawk_prelookup1, (real_T *)
         ((MinOilPressure_WarnTbl_DataStore())), 9);
      (MinOilPressure_Warn_DataStore()) = rtb_motohawk_interpolation_1d3_a;
    }

    /* Update for UnitDelay: '<S348>/Unit Delay' */
    BaseEngineController_LS_DWork.s348_UnitDelay_DSTATE = rtb_Switch1_mj;

    /* Update for UnitDelay: '<S349>/Unit Delay' */
    BaseEngineController_LS_DWork.s349_UnitDelay_DSTATE = rtb_RelOp_d;

    /* Update for UnitDelay: '<S354>/Unit Delay' */
    BaseEngineController_LS_DWork.s354_UnitDelay_DSTATE = rtb_Switch1_l;

    /* Update for UnitDelay: '<S355>/Unit Delay' */
    BaseEngineController_LS_DWork.s355_UnitDelay_DSTATE = rtb_Switch1_o;

    /* Update for UnitDelay: '<S350>/Unit Delay' */
    BaseEngineController_LS_DWork.s350_UnitDelay_DSTATE = rtb_Switch1_l3;

    /* Update for UnitDelay: '<S356>/Unit Delay' */
    BaseEngineController_LS_DWork.s356_UnitDelay_DSTATE = rtb_Switch1_bv;

    /* Update for UnitDelay: '<S339>/Unit Delay' */
    memcpy((void *)BaseEngineController_LS_DWork.s339_UnitDelay_DSTATE, (void *)
           (&BaseEngineController_LS_B.s339_Sum1[0]), sizeof(real_T) << 3U);

    /* End of Outputs for SubSystem: '<S11>/Diagnostics' */
  }

  /* Saturate: '<S370>/Saturation' */
  rtb_Saturation_k2 = rtb_Switch_f >= 16000.0 ? 16000.0 : rtb_Switch_f <= 0.0 ?
    0.0 : rtb_Switch_f;

  /* S-Function (motohawk_sfun_data_write): '<S370>/motohawk_data_write' */
  /* Write to Data Storage as scalar: BaroLearnTmr */
  {
    BaroLearnTmr_DataStore() = rtb_Saturation_k2;
  }

  /* RelationalOperator: '<S373>/Compare' incorporates:
   *  Constant: '<S373>/Constant'
   */
  rtb_LogicalOperator6_b = (BaseEngineController_LS_B.s428_State == 3);

  /* Logic: '<S366>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_action): '<S366>/motohawk_fault_action1'
   */
  rtb_LogicalOperator1_al = !GetFaultActionStatus(5);

  /* RelationalOperator: '<S366>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S366>/motohawk_calibration2'
   */
  rtb_RelationalOperator3_bp = (BaseEngineController_LS_B.s726_Merge >=
    (VEAdaptTemp_DataStore()));

  /* RelationalOperator: '<S366>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S366>/motohawk_calibration3'
   */
  rtb_RelOp_pu = (BaseEngineController_LS_B.s433_Switch >=
                  (VEAdaptTime_DataStore()));

  /* Logic: '<S366>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S366>/motohawk_calibration'
   */
  BaseEngineController_LS_B.s366_LogicalOperator = ((rtb_LogicalOperator6_b &&
    rtb_LogicalOperator1_al && BaseEngineController_LS_B.s382_LogicalOperator &&
    rtb_RelationalOperator3_bp && rtb_RelOp_pu && (VEAdaptEnable_DataStore())));

  /* Outputs for Enabled SubSystem: '<S366>/Adapt VolEff Map' incorporates:
   *  EnablePort: '<S371>/Enable'
   */
  if (BaseEngineController_LS_B.s366_LogicalOperator) {
    /* Product: '<S371>/Divide' incorporates:
     *  Sum: '<S371>/Add'
     */
    rtb_Divide_p = (BaseEngineController_LS_B.s581_Merge -
                    BaseEngineController_LS_B.s366_ModelAirMassFlowRate) /
      BaseEngineController_LS_B.s366_ModelAirMassFlowRate;

    /* S-Function Block: <S374>/motohawk_prelookup */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (VE_AdaptErrorIdxArrIn_DataStore()) = rtb_Divide_p;
      (VE_AdaptErrorIdxArrIdx_DataStore()) = TablePrelookup_real_T(rtb_Divide_p,
        (VE_AdaptErrorIdxArrIdxArr_DataStore()), 10,
        (VE_AdaptErrorIdxArrIdx_DataStore()));
      rtb_motohawk_prelookup_jn = (VE_AdaptErrorIdxArrIdx_DataStore());
    }

    /* S-Function Block: <S374>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_kd = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_jn, (real_T *) ((VEAdaptGainTblTbl_DataStore())),
         10);
      (VEAdaptGainTbl_DataStore()) = rtb_motohawk_interpolation_1d_kd;
    }

    /* Product: '<S371>/Divide1' incorporates:
     *  Product: '<S371>/Divide2'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S374>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_prelookup): '<S374>/motohawk_prelookup'
     */
    rtb_Divide1 = BaseEngineController_LS_B.s366_Sum * rtb_Divide_p *
      rtb_motohawk_interpolation_1d_kd;

    /* S-Function Block: <S371>/motohawk_adapt_table */
    /* Adapt 2-D Table */
    {
      uint32_T _row = ((VEMapIdx_DataStore())) >> 9;
      uint32_T _row_frac = (((VEMapIdx_DataStore())) & 0x01FF) >> 7;
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

  /* End of Outputs for SubSystem: '<S366>/Adapt VolEff Map' */

  /* Outputs for Enabled SubSystem: '<S358>/FuelLevelWrite' incorporates:
   *  EnablePort: '<S378>/Enable'
   */
  if (rtb_RelationalOperator_h) {
    /* S-Function (motohawk_sfun_data_write): '<S378>/motohawk_data_write' */
    /* Write to Data Storage as scalar: FuelLvl_NVM */
    {
      FuelLvl_NVM_DataStore() = BaseEngineController_LS_B.s377_Sum1;
    }
  }

  /* End of Outputs for SubSystem: '<S358>/FuelLevelWrite' */

  /* UnitDelay: '<S383>/Unit Delay1' */
  rtb_DesiredLambda_idx = BaseEngineController_LS_DWork.s383_UnitDelay1_DSTATE;

  /* UnitDelay: '<S383>/Unit Delay3' */
  rtb_DesiredLambda_idx_0 = BaseEngineController_LS_DWork.s383_UnitDelay3_DSTATE;

  /* UnitDelay: '<S383>/Unit Delay4' */
  rtb_DesiredLambda_idx_1 = BaseEngineController_LS_DWork.s383_UnitDelay4_DSTATE;

  /* UnitDelay: '<S384>/Unit Delay1' */
  rtb_UnitDelay1_k = BaseEngineController_LS_DWork.s384_UnitDelay1_DSTATE;

  /* UnitDelay: '<S384>/Unit Delay3' */
  rtb_UnitDelay3_j = BaseEngineController_LS_DWork.s384_UnitDelay3_DSTATE;

  /* UnitDelay: '<S384>/Unit Delay4' */
  rtb_UnitDelay4_ie = BaseEngineController_LS_DWork.s384_UnitDelay4_DSTATE;

  /* Sum: '<S401>/Sum' */
  rtb_Abs_co = rtb_APP1 - rtb_APP2;

  /* Abs: '<S401>/Abs' */
  rtb_Abs_co = fabs(rtb_Abs_co);

  /* RelationalOperator: '<S401>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S401>/motohawk_calibration2'
   */
  rtb_RelationalOperator3_h = ((rtb_Abs_co > (APP1_APP2_Max_Deviation_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S401>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: APP_Sensors_Conflict */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(20, rtb_RelationalOperator3_h);
    UpdateFault(20);
  }

  /* S-Function (motohawk_sfun_data_write): '<S407>/motohawk_data_write' */
  /* Write to Data Storage as scalar: EngineState */
  {
    EngineState_DataStore() = BaseEngineController_LS_B.s428_State;
  }

  /* Sum: '<S412>/Sum' */
  rtb_Abs_co = BaseEngineController_LS_B.s829_Merge -
    BaseEngineController_LS_B.s846_Merge;

  /* Abs: '<S412>/Abs' */
  rtb_Abs_co = fabs(rtb_Abs_co);

  /* RelationalOperator: '<S412>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S412>/motohawk_calibration2'
   */
  rtb_RelationalOperator3_or = ((rtb_Abs_co > (TPS1_TPS2_Max_Deviation_DataStore
                                  ())));

  /* S-Function (motohawk_sfun_fault_def): '<S412>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: TPS_Sensors_Conflict */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(121, rtb_RelationalOperator3_or);
    UpdateFault(121);
  }

  /* Saturate: '<S431>/Saturation' */
  rtb_Saturation_ah = BaseEngineController_LS_B.s431_Sum >= 16000.0 ? 16000.0 :
    BaseEngineController_LS_B.s431_Sum <= 0.0 ? 0.0 :
    BaseEngineController_LS_B.s431_Sum;

  /* S-Function (motohawk_sfun_data_write): '<S431>/motohawk_data_write' */
  /* Write to Data Storage as scalar: TimeSinceKeyOnTimer */
  {
    TimeSinceKeyOnTimer_DataStore() = rtb_Saturation_ah;
  }

  /* Saturate: '<S433>/Saturation' */
  rtb_Saturation_m = BaseEngineController_LS_B.s433_Switch >= 16000.0 ? 16000.0 :
    BaseEngineController_LS_B.s433_Switch <= 0.0 ? 0.0 :
    BaseEngineController_LS_B.s433_Switch;

  /* S-Function (motohawk_sfun_data_write): '<S433>/motohawk_data_write' */
  /* Write to Data Storage as scalar: TimeSinceRunTimer */
  {
    TimeSinceRunTimer_DataStore() = rtb_Saturation_m;
  }

  /* Saturate: '<S435>/Saturation' */
  rtb_Saturation_kf = BaseEngineController_LS_B.s435_Switch >= 16000.0 ? 16000.0
    : BaseEngineController_LS_B.s435_Switch <= 0.0 ? 0.0 :
    BaseEngineController_LS_B.s435_Switch;

  /* S-Function (motohawk_sfun_data_write): '<S435>/motohawk_data_write' */
  /* Write to Data Storage as scalar: TimeSinceStallTimer */
  {
    TimeSinceStallTimer_DataStore() = rtb_Saturation_kf;
  }

  /* Switch: '<S439>/Switch' incorporates:
   *  Constant: '<S439>/Constant2'
   */
  if (rtb_RelationalOperator_jv) {
    rtb_Switch_kj = 0U;
  } else {
    rtb_Switch_kj = rtb_Sum_hh;
  }

  /* End of Switch: '<S439>/Switch' */
  /* RelationalOperator: '<S447>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S447>/motohawk_calibration1'
   */
  rtb_RelationalOperator5_fz =
    (BaseEngineController_LS_B.s447_ReadCANMessage1_o1 >= (uint32_T)((uint16_T)
      (GPS_LatLong_Timeout_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S447>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: GPS_LatLong_Timeout */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(67, rtb_RelationalOperator5_fz);
    UpdateFault(67);
  }

  /* RelationalOperator: '<S447>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S447>/motohawk_calibration'
   */
  rtb_RelationalOperator5_fz = (BaseEngineController_LS_B.s447_ReadCANMessage_o1
    >= (uint32_T)((uint16_T)(GPS_DateTime_Timeout_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S447>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: GPS_DateTime_Timeout */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(66, rtb_RelationalOperator5_fz);
    UpdateFault(66);
  }

  /* Logic: '<S447>/Logical Operator' */
  rtb_LogicalOperator_ay = !rtb_Merge_n2;

  /* S-Function (motohawk_sfun_fault_def): '<S447>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: GPS_NotReady */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(68, rtb_LogicalOperator_ay);
    UpdateFault(68);
  }

  /* RelationalOperator: '<S447>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S447>/motohawk_calibration2'
   */
  rtb_RelationalOperator5_fz =
    (BaseEngineController_LS_B.s447_ReadCANMessage2_o1 >= (uint32_T)((uint16_T)
      (GPS_SpeedDir_Timeout_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S447>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: GPS_SpeedDir_Timeout */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(69, rtb_RelationalOperator5_fz);
    UpdateFault(69);
  }

  /* RelationalOperator: '<S448>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S448>/motohawk_calibration1'
   */
  rtb_RelationalOperator5_fz =
    (BaseEngineController_LS_B.s448_ReadCANMessage1_o1 >= (uint32_T)((uint16_T)
      (Lambda_2_Timeout_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S448>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: Lambda_2_Timeout */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(85, rtb_RelationalOperator5_fz);
    UpdateFault(85);
  }

  /* RelationalOperator: '<S448>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S448>/motohawk_calibration'
   */
  rtb_RelationalOperator5_fz = (BaseEngineController_LS_B.s448_ReadCANMessage_o1
    >= (uint32_T)((uint16_T)(Lambda_1_Timeout_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S448>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: Lambda_1_Timeout */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(83, rtb_RelationalOperator5_fz);
    UpdateFault(83);
  }

  /* Logic: '<S448>/Logical Operator' */
  rtb_LogicalOperator_f0 = !rtb_Merge_iz;

  /* S-Function (motohawk_sfun_fault_def): '<S448>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: Lambda_1_NotReady */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(82, rtb_LogicalOperator_f0);
    UpdateFault(82);
  }

  /* Logic: '<S448>/Logical Operator1' */
  rtb_LogicalOperator1_a5 = !rtb_Merge_oq;

  /* S-Function (motohawk_sfun_fault_def): '<S448>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: Lambda_2_NotReady */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(84, rtb_LogicalOperator1_a5);
    UpdateFault(84);
  }

  /* Logic: '<S488>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S488>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S488>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S488>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_n = ((MPRD_DataStore() &&
    (BaseEngineController_LS_B.s448_MathFunction >
     (Bank1_EquivRatioInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S488>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: Bank1_EquivRatioRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(21, rtb_LogicalOperator2_n);
    UpdateFault(21);
  }

  /* Logic: '<S488>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S488>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S488>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S488>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_hv = ((MPRD_DataStore() &&
    (BaseEngineController_LS_B.s448_MathFunction <
     (Bank1_EquivRatioInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S488>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: Bank1_EquivRatioRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(22, rtb_LogicalOperator3_hv);
    UpdateFault(22);
  }

  /* Logic: '<S489>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S489>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S489>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S489>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_b = ((MPRD_DataStore() &&
    (BaseEngineController_LS_B.s448_MathFunction1 >
     (Bank2_EquivRatioInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S489>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: Bank2_EquivRatioRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(23, rtb_LogicalOperator2_b);
    UpdateFault(23);
  }

  /* Logic: '<S489>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S489>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S489>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S489>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_o = ((MPRD_DataStore() &&
    (BaseEngineController_LS_B.s448_MathFunction1 <
     (Bank2_EquivRatioInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S489>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: Bank2_EquivRatioRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(24, rtb_LogicalOperator3_o);
    UpdateFault(24);
  }

  /* Logic: '<S563>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S563>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S563>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S563>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_p5 = ((MPRD_DataStore() &&
    (BaseEngineController_LS_B.s442_Gain > (MAFMax_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S563>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: MAFRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(87, rtb_LogicalOperator2_p5);
    UpdateFault(87);
  }

  /* Logic: '<S563>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S563>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S563>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S563>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_k = ((MPRD_DataStore() &&
    (BaseEngineController_LS_B.s442_Gain < (MAFMin_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S563>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: MAFRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(88, rtb_LogicalOperator3_k);
    UpdateFault(88);
  }

  /* Saturate: '<S588>/Saturation' */
  rtb_Saturation_b = rtb_Switch_bn >= 86400.0 ? 86400.0 : rtb_Switch_bn <= 0.0 ?
    0.0 : rtb_Switch_bn;

  /* S-Function (motohawk_sfun_data_write): '<S588>/motohawk_data_write' */
  /* Write to Data Storage as scalar: ScrambleDelay */
  {
    ScrambleDelay_DataStore() = rtb_Saturation_b;
  }

  /* Saturate: '<S593>/Saturation' */
  rtb_Saturation_e = rtb_Switch_m >= 86400.0 ? 86400.0 : rtb_Switch_m <= 0.0 ?
    0.0 : rtb_Switch_m;

  /* S-Function (motohawk_sfun_data_write): '<S593>/motohawk_data_write' */
  /* Write to Data Storage as scalar: TwoStepTimer */
  {
    TwoStepTimer_DataStore() = rtb_Saturation_e;
  }

  /* Logic: '<S566>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S566>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S566>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S566>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_m = ((MPRD_DataStore() &&
    (BaseEngineController_LS_B.s442_Gain1 > (VSPDMax_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S566>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: VSPDRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(122, rtb_LogicalOperator2_m);
    UpdateFault(122);
  }

  /* Logic: '<S566>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S566>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S566>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S566>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_jn = ((MPRD_DataStore() &&
    (BaseEngineController_LS_B.s442_Gain1 < (VSPDMin_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S566>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: VSPDRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(123, rtb_LogicalOperator3_jn);
    UpdateFault(123);
  }

  /* S-Function Block: <S607>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s607_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_ec = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S607>/Switch' incorporates:
   *  Constant: '<S607>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S607>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S607>/motohawk_delta_time'
   *  Sum: '<S607>/Sum'
   */
  if (rtb_Logic_j[0]) {
    rtb_Abs_co = rtb_motohawk_delta_time_ec + TimeSinceVSPDReject_DataStore();
  } else {
    rtb_Abs_co = 0.0;
  }

  /* End of Switch: '<S607>/Switch' */
  /* RelationalOperator: '<S567>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S567>/motohawk_calibration6'
   */
  rtb_RelOp_d = (rtb_Abs_co >= (real_T)((uint8_T)(VSPD_RejectHoldTime_DataStore())));

  /* Saturate: '<S607>/Saturation' */
  rtb_Saturation_l = rtb_Abs_co >= 16000.0 ? 16000.0 : rtb_Abs_co <= 0.0 ? 0.0 :
    rtb_Abs_co;

  /* S-Function (motohawk_sfun_data_write): '<S607>/motohawk_data_write' */
  /* Write to Data Storage as scalar: TimeSinceVSPDReject */
  {
    TimeSinceVSPDReject_DataStore() = rtb_Saturation_l;
  }

  /* RelationalOperator: '<S443>/Relational Operator' incorporates:
   *  Constant: '<S443>/Constant'
   *  S-Function (motohawk_sfun_calibration): '<S443>/motohawk_calibration'
   */
  rtb_RelationalOperator_l = ((0 != ((uint16_T)(PseudoRPM_DataStore()))));

  /* S-Function Block: <S443>/motohawk_encoder_pseudo */
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

  /* DataTypeConversion: '<S443>/Data Type Conversion3' incorporates:
   *  Gain: '<S443>/Gain'
   *  S-Function (motohawk_sfun_calibration): '<S443>/motohawk_calibration1'
   */
  rtb_UnitDelay4_b3 = 16.0 * (EngineToEncoderOffset_DataStore());
  if (rtIsNaN(rtb_UnitDelay4_b3) || rtIsInf(rtb_UnitDelay4_b3)) {
    rtb_UnitDelay4_b3 = 0.0;
  } else {
    y = rtb_UnitDelay4_b3 < 0.0 ? ceil(rtb_UnitDelay4_b3) : floor
      (rtb_UnitDelay4_b3);
    rtb_UnitDelay4_b3 = fmod(y, 65536.0);
  }

  rtb_DataTypeConversion3_dm = (int16_T)(rtb_UnitDelay4_b3 < 0.0 ? (int16_T)
    -(int16_T)(uint16_T)-rtb_UnitDelay4_b3 : (int16_T)(uint16_T)
    rtb_UnitDelay4_b3);

  /* End of DataTypeConversion: '<S443>/Data Type Conversion3' */
  /* S-Function Block: <S443>/motohawk_encoder_offset */
  {
    S_EncoderResourceAttributes encoder_attributes;
    encoder_attributes.uValidAttributesMask = USE_ENC_TDC_OFFSET;
    encoder_attributes.s2TDCOffset = rtb_DataTypeConversion3_dm;
    SetResourceAttributes(RES_ENCODER, &encoder_attributes, BEHAVIOUR_ENCODER);
  }

  /* RelationalOperator: '<S612>/RelOp' incorporates:
   *  Constant: '<S612>/Constant'
   */
  rtb_RelationalOperator5_fz = (BaseEngineController_LS_B.s615_Sum > 100U);

  /* S-Function Block: <S443>/motohawk_encoder_fault */
  {
    extern uint8_T motohawk_encoder_fault;
    BaseEngineController_LS_B.s443_motohawk_encoder_fault =
      motohawk_encoder_fault;
  }

  /* Logic: '<S608>/Logical Operator' incorporates:
   *  Constant: '<S614>/Constant'
   *  RelationalOperator: '<S614>/RelOp'
   */
  rtb_LogicalOperator_f0c = ((rtb_RelationalOperator5_fz &&
    (BaseEngineController_LS_B.s443_motohawk_encoder_fault == 1)));

  /* S-Function (motohawk_sfun_fault_def): '<S608>/motohawk_fault_def' */

  /* Set Fault Suspected Status: CrankSyncFault */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(30, rtb_LogicalOperator_f0c);
    UpdateFault(30);
  }

  /* Logic: '<S608>/Logical Operator1' incorporates:
   *  Constant: '<S613>/Constant'
   *  RelationalOperator: '<S613>/RelOp'
   */
  rtb_LogicalOperator1_dw = ((rtb_RelationalOperator5_fz &&
    (BaseEngineController_LS_B.s443_motohawk_encoder_fault == 3)));

  /* S-Function (motohawk_sfun_fault_def): '<S608>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: CrankEdgesFault */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(29, rtb_LogicalOperator1_dw);
    UpdateFault(29);
  }

  /* Logic: '<S608>/Logical Operator2' incorporates:
   *  Constant: '<S610>/Constant'
   *  RelationalOperator: '<S610>/RelOp'
   */
  rtb_LogicalOperator2_g = ((rtb_RelationalOperator5_fz &&
    (BaseEngineController_LS_B.s443_motohawk_encoder_fault == 4)));

  /* S-Function (motohawk_sfun_fault_def): '<S608>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: CamEdgesFault */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(27, rtb_LogicalOperator2_g);
    UpdateFault(27);
  }

  /* Logic: '<S608>/Logical Operator3' incorporates:
   *  Constant: '<S611>/Constant'
   *  RelationalOperator: '<S611>/RelOp'
   */
  rtb_LogicalOperator3_nz = ((rtb_RelationalOperator5_fz &&
    (BaseEngineController_LS_B.s443_motohawk_encoder_fault == 5)));

  /* S-Function (motohawk_sfun_fault_def): '<S608>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: CamSyncFault */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(28, rtb_LogicalOperator3_nz);
    UpdateFault(28);
  }

  /* S-Function Block: <S443>/motohawk_encoder_state */
  {
    extern uint8_T motohawk_encoder_status;
    BaseEngineController_LS_B.s443_motohawk_encoder_state =
      motohawk_encoder_status;
  }

  /* Logic: '<S617>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S617>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S617>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S617>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_kx = ((MPRD_DataStore() && (rtb_DataTypeConversion_ik >
    (ACPresInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S617>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: ACPresRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(2, rtb_LogicalOperator2_kx);
    UpdateFault(2);
  }

  /* Logic: '<S617>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S617>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S617>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S617>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_mz = ((MPRD_DataStore() && (rtb_DataTypeConversion_ik <
    (ACPresInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S617>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: ACPresRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(3, rtb_LogicalOperator3_mz);
    UpdateFault(3);
  }

  /* Logic: '<S618>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S618>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S618>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S618>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_j = ((MPRD_DataStore() && (rtb_DataTypeConversion_e >
    (FuelSensInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S618>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: FuelSensRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(62, rtb_LogicalOperator2_j);
    UpdateFault(62);
  }

  /* Logic: '<S618>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S618>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S618>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S618>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_ij = ((MPRD_DataStore() && (rtb_DataTypeConversion_e <
    (FuelSensInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S618>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: FuelSensRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(63, rtb_LogicalOperator3_ij);
    UpdateFault(63);
  }

  /* Logic: '<S619>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S619>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S619>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S619>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_f4 = ((MPRD_DataStore() && (rtb_DataTypeConversion_gx >
    (FuelPresInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S619>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: FuelPresRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(60, rtb_LogicalOperator2_f4);
    UpdateFault(60);
  }

  /* Logic: '<S619>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S619>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S619>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S619>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_ns = ((MPRD_DataStore() && (rtb_DataTypeConversion_gx <
    (FuelPresInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S619>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: FuelPresRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(61, rtb_LogicalOperator3_ns);
    UpdateFault(61);
  }

  /* Logic: '<S620>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S620>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S620>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S620>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_fw = ((MPRD_DataStore() &&
    (BaseEngineController_LS_B.s622_Merge > (MAPInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S620>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: MAPRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(89, rtb_LogicalOperator2_fw);
    UpdateFault(89);
  }

  /* Logic: '<S620>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S620>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S620>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S620>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_l = ((MPRD_DataStore() &&
    (BaseEngineController_LS_B.s622_Merge < (MAPInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S620>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: MAPRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(90, rtb_LogicalOperator3_l);
    UpdateFault(90);
  }

  /* Logic: '<S621>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S621>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S621>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S621>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_a = ((MPRD_DataStore() && (rtb_DataTypeConversion_fq >
    (MAPTimeInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S621>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: MAPTimeRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(91, rtb_LogicalOperator2_a);
    UpdateFault(91);
  }

  /* Logic: '<S621>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S621>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S621>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S621>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_d = ((MPRD_DataStore() && (rtb_DataTypeConversion_fq <
    (MAPTimeInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S621>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: MAPTimeRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(92, rtb_LogicalOperator3_d);
    UpdateFault(92);
  }

  /* Logic: '<S623>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S623>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S623>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S623>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_fm = ((MPRD_DataStore() && (rtb_DataTypeConversion_m0 >
    (OilPresInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S623>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: OilPresRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(101, rtb_LogicalOperator2_fm);
    UpdateFault(101);
  }

  /* Logic: '<S623>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S623>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S623>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S623>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_a = ((MPRD_DataStore() && (rtb_DataTypeConversion_m0 <
    (OilPresInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S623>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: OilPresRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(102, rtb_LogicalOperator3_a);
    UpdateFault(102);
  }

  /* Logic: '<S624>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S624>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S624>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S624>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_gc = ((MPRD_DataStore() && (rtb_Abs_k >
    (SensVoltInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S624>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: SensVoltRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(103, rtb_LogicalOperator2_gc);
    UpdateFault(103);
  }

  /* Logic: '<S624>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S624>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S624>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S624>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_e = ((MPRD_DataStore() && (rtb_Abs_k <
    (SensVoltInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S624>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: SensVoltRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(104, rtb_LogicalOperator3_e);
    UpdateFault(104);
  }

  /* Logic: '<S625>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S625>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S625>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S625>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_bm = ((MPRD_DataStore() && (rtb_DataTypeConversion_c4 >
    (SysVoltInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S625>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: SysVoltRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(107, rtb_LogicalOperator2_bm);
    UpdateFault(107);
  }

  /* Logic: '<S625>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S625>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S625>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S625>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_g = ((MPRD_DataStore() && (rtb_DataTypeConversion_c4 <
    (SysVoltInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S625>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: SysVoltRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(108, rtb_LogicalOperator3_g);
    UpdateFault(108);
  }

  /* Logic: '<S749>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S749>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S749>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S749>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_ob = ((MPRD_DataStore() && (rtb_DataTypeConversion_hd >
    (APP1Max_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S749>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: APP1RangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(4, rtb_LogicalOperator2_ob);
    UpdateFault(4);
  }

  /* Logic: '<S749>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S749>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S749>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S749>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_in = ((MPRD_DataStore() && (rtb_DataTypeConversion_hd <
    (APP1Min_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S749>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: APP1RangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(5, rtb_LogicalOperator3_in);
    UpdateFault(5);
  }

  /* S-Function (motohawk_sfun_trigger): '<S750>/motohawk_trigger' */
  /* Enable for Trigger_FGND_20XRTI_PERIODIC_5658p001 */
  if (BaseEngineController_LS_DWork.s750_motohawk_trigger_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s750_motohawk_trigger_DWORK1 = 1;
  }

  /* Logic: '<S750>/Logical Operator' incorporates:
   *  RelationalOperator: '<S750>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S750>/motohawk_calibration'
   *  S-Function (motohawk_sfun_data_read): '<S750>/motohawk_data_read1'
   */
  rtb_RelationalOperator3_bp = (BaseEngineController_LS_B.s767_LogicalOperator &&
                                (APP1_AdaptADC_DataStore() <
    (APP1LowAdaptADCThresh_DataStore())));

  /* Logic: '<S750>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S750>/Relational Operator1'
   *  S-Function (motohawk_sfun_calibration): '<S750>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S750>/motohawk_data_read1'
   */
  rtb_LogicalOperator6_b = (BaseEngineController_LS_B.s767_LogicalOperator &&
    (APP1_AdaptADC_DataStore() > (APP1HiAdaptADCThresh_DataStore())));

  /* Logic: '<S751>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S751>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S751>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S751>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_il = ((MPRD_DataStore() && (rtb_DataTypeConversion_fc >
    (APP2Max_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S751>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: APP2RangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(12, rtb_LogicalOperator2_il);
    UpdateFault(12);
  }

  /* Logic: '<S751>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S751>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S751>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S751>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_dk = ((MPRD_DataStore() && (rtb_DataTypeConversion_fc <
    (APP2Min_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S751>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: APP2RangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(13, rtb_LogicalOperator3_dk);
    UpdateFault(13);
  }

  /* S-Function (motohawk_sfun_trigger): '<S752>/motohawk_trigger' */
  /* Enable for Trigger_FGND_20XRTI_PERIODIC_5792p001 */
  if (BaseEngineController_LS_DWork.s752_motohawk_trigger_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s752_motohawk_trigger_DWORK1 = 1;
  }

  /* Logic: '<S752>/Logical Operator' incorporates:
   *  RelationalOperator: '<S752>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S752>/motohawk_calibration'
   *  S-Function (motohawk_sfun_data_read): '<S752>/motohawk_data_read1'
   */
  rtb_Switch1_mj = (BaseEngineController_LS_B.s779_LogicalOperator &&
                    (APP2_AdaptADC_DataStore() <
                     (APP2LowAdaptADCThresh_DataStore())));

  /* Logic: '<S752>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S752>/Relational Operator1'
   *  S-Function (motohawk_sfun_calibration): '<S752>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S752>/motohawk_data_read1'
   */
  rtb_RelOp_pu = (BaseEngineController_LS_B.s779_LogicalOperator &&
                  (APP2_AdaptADC_DataStore() > (APP2HiAdaptADCThresh_DataStore())));

  /* RelationalOperator: '<S782>/Relational Operator5' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S782>/motohawk_calibration5'
   */
  rtb_RelationalOperator5_l = ((BaseEngineController_LS_B.s753_Switch >
    (APP1_AdaptInputHiFltPos_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S782>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: APP1_AdaptRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(10, rtb_RelationalOperator5_l);
    UpdateFault(10);
  }

  /* RelationalOperator: '<S782>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S782>/motohawk_calibration6'
   */
  rtb_RelationalOperator4_bl = ((BaseEngineController_LS_B.s753_Switch <
    (APP1_AdaptInputLoFltPos_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S782>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: APP1_AdaptRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(11, rtb_RelationalOperator4_bl);
    UpdateFault(11);
  }

  /* RelationalOperator: '<S782>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S753>/motohawk_calibration9'
   */
  rtb_RelationalOperator_c1 = ((BaseEngineController_LS_B.s781_MinMax >
    (APP1_AdaptAdapt_Low_Max_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S782>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: APP1_AdaptAdaptLoMax */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(8, rtb_RelationalOperator_c1);
    UpdateFault(8);
  }

  /* RelationalOperator: '<S782>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S753>/motohawk_calibration12'
   */
  rtb_RelationalOperator3_p4 = ((BaseEngineController_LS_B.s781_MinMax1 >
    (APP1_AdaptAdapt_Hi_Max_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S782>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: APP1_AdaptAdaptHiMax */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(6, rtb_RelationalOperator3_p4);
    UpdateFault(6);
  }

  /* RelationalOperator: '<S782>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S753>/motohawk_calibration11'
   */
  rtb_RelationalOperator2_k2 = ((BaseEngineController_LS_B.s781_MinMax1 <
    (APP1_AdaptAdapt_Hi_Min_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S782>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: APP1_AdaptAdaptHiMin */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(7, rtb_RelationalOperator2_k2);
    UpdateFault(7);
  }

  /* RelationalOperator: '<S782>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S753>/motohawk_calibration10'
   */
  rtb_RelationalOperator1_n = ((BaseEngineController_LS_B.s781_MinMax <
    (APP1_AdaptAdapt_Low_Min_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S782>/motohawk_fault_def8' */

  /* Set Fault Suspected Status: APP1_AdaptAdaptLoMin */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(9, rtb_RelationalOperator1_n);
    UpdateFault(9);
  }

  /* UnitDelay: '<S788>/Unit Delay1' */
  rtb_Abs_co = BaseEngineController_LS_DWork.s788_UnitDelay1_DSTATE;

  /* UnitDelay: '<S788>/Unit Delay' */
  rtb_DataTypeConversion1_e =
    BaseEngineController_LS_DWork.s788_UnitDelay_DSTATE;

  /* UnitDelay: '<S788>/Unit Delay3' */
  rtb_DataTypeConversion_b2 =
    BaseEngineController_LS_DWork.s788_UnitDelay3_DSTATE;

  /* UnitDelay: '<S788>/Unit Delay4' */
  rtb_Switch_mq = BaseEngineController_LS_DWork.s788_UnitDelay4_DSTATE;

  /* MinMax: '<S788>/MinMax1' incorporates:
   *  UnitDelay: '<S788>/Unit Delay'
   *  UnitDelay: '<S788>/Unit Delay3'
   *  UnitDelay: '<S788>/Unit Delay4'
   */
  y = (rtb_Abs_co <= BaseEngineController_LS_DWork.s788_UnitDelay_DSTATE) ||
    rtIsNaN(BaseEngineController_LS_DWork.s788_UnitDelay_DSTATE) ? rtb_Abs_co :
    BaseEngineController_LS_DWork.s788_UnitDelay_DSTATE;
  y = (y <= BaseEngineController_LS_DWork.s788_UnitDelay3_DSTATE) || rtIsNaN
    (BaseEngineController_LS_DWork.s788_UnitDelay3_DSTATE) ? y :
    BaseEngineController_LS_DWork.s788_UnitDelay3_DSTATE;
  y = (y <= BaseEngineController_LS_DWork.s788_UnitDelay4_DSTATE) || rtIsNaN
    (BaseEngineController_LS_DWork.s788_UnitDelay4_DSTATE) ? y :
    BaseEngineController_LS_DWork.s788_UnitDelay4_DSTATE;
  y = (y <= BaseEngineController_LS_B.s753_Switch) || rtIsNaN
    (BaseEngineController_LS_B.s753_Switch) ? y :
    BaseEngineController_LS_B.s753_Switch;

  /* RelationalOperator: '<S786>/Relational Operator9' incorporates:
   *  MinMax: '<S788>/MinMax1'
   */
  rtb_LogicalOperator1_al = (y > BaseEngineController_LS_B.s781_MinMax1);

  /* RelationalOperator: '<S786>/Relational Operator5' incorporates:
   *  MinMax: '<S788>/MinMax1'
   *  S-Function (motohawk_sfun_calibration): '<S753>/motohawk_calibration12'
   */
  rtb_RelationalOperator5_fz = (y <= (APP1_AdaptAdapt_Hi_Max_DataStore()));

  /* RelationalOperator: '<S786>/Relational Operator6' incorporates:
   *  MinMax: '<S788>/MinMax1'
   *  S-Function (motohawk_sfun_calibration): '<S753>/motohawk_calibration11'
   */
  rtb_RelationalOperator6_h = (y >= (APP1_AdaptAdapt_Hi_Min_DataStore()));

  /* Sum: '<S786>/Sum2' incorporates:
   *  MinMax: '<S788>/MinMax1'
   */
  rtb_Abs_k = y - BaseEngineController_LS_B.s781_MinMax1;

  /* Abs: '<S786>/Abs' */
  rtb_Abs_k = fabs(rtb_Abs_k);

  /* Outputs for Enabled SubSystem: '<S786>/Store Current Position' incorporates:
   *  EnablePort: '<S789>/Enable'
   */
  /* Logic: '<S786>/Logical Operator2' incorporates:
   *  Logic: '<S786>/Logical Operator1'
   *  Logic: '<S786>/Logical Operator4'
   *  RelationalOperator: '<S786>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S781>/motohawk_calibration14'
   *  S-Function (motohawk_sfun_calibration): '<S781>/motohawk_calibration2'
   */
  if ((rtb_LogicalOperator1_al && rtb_RelationalOperator5_fz &&
       rtb_RelationalOperator6_h && (APP1_AdaptAdaptHiEnable_DataStore()) &&
       (rtb_Abs_k > (APP1_AdaptAdapt_Delta_DataStore()))) ||
      (rtb_RelationalOperator5_fz && rtb_RelationalOperator6_h &&
       (APP1_AdaptAdaptHiEnable_DataStore()) && rtb_LogicalOperator6_b)) {
    /* DataTypeConversion: '<S789>/Data Type Conversion2' incorporates:
     *  MinMax: '<S788>/MinMax1'
     */
    if (y < 65536.0) {
      if (y >= 0.0) {
        rtb_DataTypeConversion2_d = (uint16_T)y;
      } else {
        rtb_DataTypeConversion2_d = 0U;
      }
    } else {
      rtb_DataTypeConversion2_d = MAX_uint16_T;
    }

    /* End of DataTypeConversion: '<S789>/Data Type Conversion2' */

    /* S-Function (motohawk_sfun_data_write): '<S789>/motohawk_data_write' */
    /* Write to Data Storage as scalar: APP1_AdaptRaw_Adpt_Hi */
    {
      APP1_AdaptRaw_Adpt_Hi_DataStore() = rtb_DataTypeConversion2_d;
    }
  }

  /* End of Logic: '<S786>/Logical Operator2' */
  /* End of Outputs for SubSystem: '<S786>/Store Current Position' */

  /* MinMax: '<S788>/MinMax' */
  y = (BaseEngineController_LS_B.s753_Switch >= rtb_Switch_mq) || rtIsNaN
    (rtb_Switch_mq) ? BaseEngineController_LS_B.s753_Switch : rtb_Switch_mq;
  y = (y >= rtb_DataTypeConversion_b2) || rtIsNaN(rtb_DataTypeConversion_b2) ? y
    : rtb_DataTypeConversion_b2;
  y = (y >= rtb_DataTypeConversion1_e) || rtIsNaN(rtb_DataTypeConversion1_e) ? y
    : rtb_DataTypeConversion1_e;
  rtb_Abs_k = (y >= rtb_Abs_co) || rtIsNaN(rtb_Abs_co) ? y : rtb_Abs_co;

  /* RelationalOperator: '<S787>/Relational Operator9' incorporates:
   *  MinMax: '<S788>/MinMax'
   */
  rtb_LogicalOperator6_b = (rtb_Abs_k < BaseEngineController_LS_B.s781_MinMax);

  /* RelationalOperator: '<S787>/Relational Operator5' incorporates:
   *  MinMax: '<S788>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S753>/motohawk_calibration9'
   */
  rtb_RelationalOperator5_fz = (rtb_Abs_k <= (APP1_AdaptAdapt_Low_Max_DataStore()));

  /* RelationalOperator: '<S787>/Relational Operator6' incorporates:
   *  MinMax: '<S788>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S753>/motohawk_calibration10'
   */
  rtb_RelationalOperator6_h = (rtb_Abs_k >= (APP1_AdaptAdapt_Low_Min_DataStore()));

  /* Sum: '<S787>/Sum2' incorporates:
   *  MinMax: '<S788>/MinMax'
   */
  rtb_Abs_co = rtb_Abs_k - BaseEngineController_LS_B.s781_MinMax;

  /* Abs: '<S787>/Abs' */
  rtb_Abs_co = fabs(rtb_Abs_co);

  /* Outputs for Enabled SubSystem: '<S787>/Store Current Position' incorporates:
   *  EnablePort: '<S790>/Enable'
   */
  /* Logic: '<S787>/Logical Operator2' incorporates:
   *  Logic: '<S787>/Logical Operator1'
   *  Logic: '<S787>/Logical Operator4'
   *  RelationalOperator: '<S787>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S781>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S781>/motohawk_calibration14'
   */
  if ((rtb_LogicalOperator6_b && rtb_RelationalOperator5_fz &&
       rtb_RelationalOperator6_h && (APP1_AdaptAdaptLoEnable_DataStore()) &&
       (rtb_Abs_co > (APP1_AdaptAdapt_Delta_DataStore()))) ||
      (rtb_RelationalOperator5_fz && rtb_RelationalOperator6_h &&
       (APP1_AdaptAdaptLoEnable_DataStore()) && rtb_RelationalOperator3_bp)) {
    /* DataTypeConversion: '<S790>/Data Type Conversion2' incorporates:
     *  MinMax: '<S788>/MinMax'
     */
    if (rtb_Abs_k < 65536.0) {
      if (rtb_Abs_k >= 0.0) {
        rtb_DataTypeConversion2_hr = (uint16_T)rtb_Abs_k;
      } else {
        rtb_DataTypeConversion2_hr = 0U;
      }
    } else {
      rtb_DataTypeConversion2_hr = MAX_uint16_T;
    }

    /* End of DataTypeConversion: '<S790>/Data Type Conversion2' */

    /* S-Function (motohawk_sfun_data_write): '<S790>/motohawk_data_write' */
    /* Write to Data Storage as scalar: APP1_AdaptRaw_Adpt_Low */
    {
      APP1_AdaptRaw_Adpt_Low_DataStore() = rtb_DataTypeConversion2_hr;
    }
  }

  /* End of Logic: '<S787>/Logical Operator2' */
  /* End of Outputs for SubSystem: '<S787>/Store Current Position' */

  /* RelationalOperator: '<S799>/Relational Operator5' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S799>/motohawk_calibration5'
   */
  rtb_RelationalOperator5_a = ((BaseEngineController_LS_B.s754_Switch >
    (APP2_AdaptInputHiFltPos_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S799>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: APP2_AdaptRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(18, rtb_RelationalOperator5_a);
    UpdateFault(18);
  }

  /* RelationalOperator: '<S799>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S799>/motohawk_calibration6'
   */
  rtb_RelationalOperator4_d = ((BaseEngineController_LS_B.s754_Switch <
    (APP2_AdaptInputLoFltPos_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S799>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: APP2_AdaptRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(19, rtb_RelationalOperator4_d);
    UpdateFault(19);
  }

  /* RelationalOperator: '<S799>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S754>/motohawk_calibration9'
   */
  rtb_RelationalOperator_f = ((BaseEngineController_LS_B.s798_MinMax >
    (APP2_AdaptAdapt_Low_Max_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S799>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: APP2_AdaptAdaptLoMax */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(16, rtb_RelationalOperator_f);
    UpdateFault(16);
  }

  /* RelationalOperator: '<S799>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S754>/motohawk_calibration12'
   */
  rtb_RelationalOperator3_n3 = ((BaseEngineController_LS_B.s798_MinMax1 >
    (APP2_AdaptAdapt_Hi_Max_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S799>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: APP2_AdaptAdaptHiMax */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(14, rtb_RelationalOperator3_n3);
    UpdateFault(14);
  }

  /* RelationalOperator: '<S799>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S754>/motohawk_calibration11'
   */
  rtb_RelationalOperator2_ma = ((BaseEngineController_LS_B.s798_MinMax1 <
    (APP2_AdaptAdapt_Hi_Min_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S799>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: APP2_AdaptAdaptHiMin */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(15, rtb_RelationalOperator2_ma);
    UpdateFault(15);
  }

  /* RelationalOperator: '<S799>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S754>/motohawk_calibration10'
   */
  rtb_RelationalOperator1_gr = ((BaseEngineController_LS_B.s798_MinMax <
    (APP2_AdaptAdapt_Low_Min_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S799>/motohawk_fault_def8' */

  /* Set Fault Suspected Status: APP2_AdaptAdaptLoMin */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(17, rtb_RelationalOperator1_gr);
    UpdateFault(17);
  }

  /* UnitDelay: '<S805>/Unit Delay1' */
  rtb_Abs_co = BaseEngineController_LS_DWork.s805_UnitDelay1_DSTATE;

  /* UnitDelay: '<S805>/Unit Delay' */
  rtb_Multiplyby10ifnotyetenabled =
    BaseEngineController_LS_DWork.s805_UnitDelay_DSTATE;

  /* UnitDelay: '<S805>/Unit Delay3' */
  rtb_Product4_o = BaseEngineController_LS_DWork.s805_UnitDelay3_DSTATE;

  /* UnitDelay: '<S805>/Unit Delay4' */
  rtb_Switch_c = BaseEngineController_LS_DWork.s805_UnitDelay4_DSTATE;

  /* MinMax: '<S805>/MinMax1' incorporates:
   *  UnitDelay: '<S805>/Unit Delay'
   *  UnitDelay: '<S805>/Unit Delay3'
   *  UnitDelay: '<S805>/Unit Delay4'
   */
  y = (rtb_Abs_co <= BaseEngineController_LS_DWork.s805_UnitDelay_DSTATE) ||
    rtIsNaN(BaseEngineController_LS_DWork.s805_UnitDelay_DSTATE) ? rtb_Abs_co :
    BaseEngineController_LS_DWork.s805_UnitDelay_DSTATE;
  y = (y <= BaseEngineController_LS_DWork.s805_UnitDelay3_DSTATE) || rtIsNaN
    (BaseEngineController_LS_DWork.s805_UnitDelay3_DSTATE) ? y :
    BaseEngineController_LS_DWork.s805_UnitDelay3_DSTATE;
  y = (y <= BaseEngineController_LS_DWork.s805_UnitDelay4_DSTATE) || rtIsNaN
    (BaseEngineController_LS_DWork.s805_UnitDelay4_DSTATE) ? y :
    BaseEngineController_LS_DWork.s805_UnitDelay4_DSTATE;
  y = (y <= BaseEngineController_LS_B.s754_Switch) || rtIsNaN
    (BaseEngineController_LS_B.s754_Switch) ? y :
    BaseEngineController_LS_B.s754_Switch;

  /* RelationalOperator: '<S803>/Relational Operator9' incorporates:
   *  MinMax: '<S805>/MinMax1'
   */
  rtb_LogicalOperator6_b = (y > BaseEngineController_LS_B.s798_MinMax1);

  /* RelationalOperator: '<S803>/Relational Operator5' incorporates:
   *  MinMax: '<S805>/MinMax1'
   *  S-Function (motohawk_sfun_calibration): '<S754>/motohawk_calibration12'
   */
  rtb_RelationalOperator5_fz = (y <= (APP2_AdaptAdapt_Hi_Max_DataStore()));

  /* RelationalOperator: '<S803>/Relational Operator6' incorporates:
   *  MinMax: '<S805>/MinMax1'
   *  S-Function (motohawk_sfun_calibration): '<S754>/motohawk_calibration11'
   */
  rtb_RelationalOperator6_h = (y >= (APP2_AdaptAdapt_Hi_Min_DataStore()));

  /* Sum: '<S803>/Sum2' incorporates:
   *  MinMax: '<S805>/MinMax1'
   */
  rtb_Abs_k = y - BaseEngineController_LS_B.s798_MinMax1;

  /* Abs: '<S803>/Abs' */
  rtb_Abs_k = fabs(rtb_Abs_k);

  /* Outputs for Enabled SubSystem: '<S803>/Store Current Position' incorporates:
   *  EnablePort: '<S806>/Enable'
   */
  /* Logic: '<S803>/Logical Operator2' incorporates:
   *  Logic: '<S803>/Logical Operator1'
   *  Logic: '<S803>/Logical Operator4'
   *  RelationalOperator: '<S803>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S798>/motohawk_calibration14'
   *  S-Function (motohawk_sfun_calibration): '<S798>/motohawk_calibration2'
   */
  if ((rtb_LogicalOperator6_b && rtb_RelationalOperator5_fz &&
       rtb_RelationalOperator6_h && (APP2_AdaptAdaptHiEnable_DataStore()) &&
       (rtb_Abs_k > (APP2_AdaptAdapt_Delta_DataStore()))) ||
      (rtb_RelationalOperator5_fz && rtb_RelationalOperator6_h &&
       (APP2_AdaptAdaptHiEnable_DataStore()) && rtb_RelOp_pu)) {
    /* DataTypeConversion: '<S806>/Data Type Conversion2' incorporates:
     *  MinMax: '<S805>/MinMax1'
     */
    if (y < 65536.0) {
      if (y >= 0.0) {
        rtb_DataTypeConversion2_h = (uint16_T)y;
      } else {
        rtb_DataTypeConversion2_h = 0U;
      }
    } else {
      rtb_DataTypeConversion2_h = MAX_uint16_T;
    }

    /* End of DataTypeConversion: '<S806>/Data Type Conversion2' */

    /* S-Function (motohawk_sfun_data_write): '<S806>/motohawk_data_write' */
    /* Write to Data Storage as scalar: APP2_AdaptRaw_Adpt_Hi */
    {
      APP2_AdaptRaw_Adpt_Hi_DataStore() = rtb_DataTypeConversion2_h;
    }
  }

  /* End of Logic: '<S803>/Logical Operator2' */
  /* End of Outputs for SubSystem: '<S803>/Store Current Position' */

  /* MinMax: '<S805>/MinMax' */
  y = (BaseEngineController_LS_B.s754_Switch >= rtb_Switch_c) || rtIsNaN
    (rtb_Switch_c) ? BaseEngineController_LS_B.s754_Switch : rtb_Switch_c;
  y = (y >= rtb_Product4_o) || rtIsNaN(rtb_Product4_o) ? y : rtb_Product4_o;
  y = (y >= rtb_Multiplyby10ifnotyetenabled) || rtIsNaN
    (rtb_Multiplyby10ifnotyetenabled) ? y : rtb_Multiplyby10ifnotyetenabled;
  rtb_Abs_k = (y >= rtb_Abs_co) || rtIsNaN(rtb_Abs_co) ? y : rtb_Abs_co;

  /* RelationalOperator: '<S804>/Relational Operator9' incorporates:
   *  MinMax: '<S805>/MinMax'
   */
  rtb_LogicalOperator6_b = (rtb_Abs_k < BaseEngineController_LS_B.s798_MinMax);

  /* RelationalOperator: '<S804>/Relational Operator5' incorporates:
   *  MinMax: '<S805>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S754>/motohawk_calibration9'
   */
  rtb_RelationalOperator5_fz = (rtb_Abs_k <= (APP2_AdaptAdapt_Low_Max_DataStore()));

  /* RelationalOperator: '<S804>/Relational Operator6' incorporates:
   *  MinMax: '<S805>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S754>/motohawk_calibration10'
   */
  rtb_RelationalOperator6_h = (rtb_Abs_k >= (APP2_AdaptAdapt_Low_Min_DataStore()));

  /* Sum: '<S804>/Sum2' incorporates:
   *  MinMax: '<S805>/MinMax'
   */
  rtb_Abs_co = rtb_Abs_k - BaseEngineController_LS_B.s798_MinMax;

  /* Abs: '<S804>/Abs' */
  rtb_Abs_co = fabs(rtb_Abs_co);

  /* Outputs for Enabled SubSystem: '<S804>/Store Current Position' incorporates:
   *  EnablePort: '<S807>/Enable'
   */
  /* Logic: '<S804>/Logical Operator2' incorporates:
   *  Logic: '<S804>/Logical Operator1'
   *  Logic: '<S804>/Logical Operator4'
   *  RelationalOperator: '<S804>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S798>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S798>/motohawk_calibration14'
   */
  if ((rtb_LogicalOperator6_b && rtb_RelationalOperator5_fz &&
       rtb_RelationalOperator6_h && (APP2_AdaptAdaptLoEnable_DataStore()) &&
       (rtb_Abs_co > (APP2_AdaptAdapt_Delta_DataStore()))) ||
      (rtb_RelationalOperator5_fz && rtb_RelationalOperator6_h &&
       (APP2_AdaptAdaptLoEnable_DataStore()) && rtb_Switch1_mj)) {
    /* DataTypeConversion: '<S807>/Data Type Conversion2' incorporates:
     *  MinMax: '<S805>/MinMax'
     */
    if (rtb_Abs_k < 65536.0) {
      if (rtb_Abs_k >= 0.0) {
        rtb_DataTypeConversion2_p2 = (uint16_T)rtb_Abs_k;
      } else {
        rtb_DataTypeConversion2_p2 = 0U;
      }
    } else {
      rtb_DataTypeConversion2_p2 = MAX_uint16_T;
    }

    /* End of DataTypeConversion: '<S807>/Data Type Conversion2' */

    /* S-Function (motohawk_sfun_data_write): '<S807>/motohawk_data_write' */
    /* Write to Data Storage as scalar: APP2_AdaptRaw_Adpt_Low */
    {
      APP2_AdaptRaw_Adpt_Low_DataStore() = rtb_DataTypeConversion2_p2;
    }
  }

  /* End of Logic: '<S804>/Logical Operator2' */
  /* End of Outputs for SubSystem: '<S804>/Store Current Position' */

  /* RelationalOperator: '<S816>/Relational Operator5' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S816>/motohawk_calibration5'
   */
  rtb_RelationalOperator5_k = ((BaseEngineController_LS_B.s755_Switch >
    (TPS1InputHiFltPos_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S816>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: TPS1RangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(113, rtb_RelationalOperator5_k);
    UpdateFault(113);
  }

  /* RelationalOperator: '<S816>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S816>/motohawk_calibration6'
   */
  rtb_RelationalOperator4_p = ((BaseEngineController_LS_B.s755_Switch <
    (TPS1InputLoFltPos_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S816>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: TPS1RangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(114, rtb_RelationalOperator4_p);
    UpdateFault(114);
  }

  /* RelationalOperator: '<S816>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S755>/motohawk_calibration9'
   */
  rtb_RelationalOperator_cz = ((BaseEngineController_LS_B.s815_MinMax >
    (TPS1Adapt_Low_Max_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S816>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: TPS1AdaptLoMax */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(111, rtb_RelationalOperator_cz);
    UpdateFault(111);
  }

  /* RelationalOperator: '<S816>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S755>/motohawk_calibration12'
   */
  rtb_RelationalOperator3_kn = ((BaseEngineController_LS_B.s815_MinMax1 >
    (TPS1Adapt_Hi_Max_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S816>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: TPS1AdaptHiMax */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(109, rtb_RelationalOperator3_kn);
    UpdateFault(109);
  }

  /* RelationalOperator: '<S816>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S755>/motohawk_calibration11'
   */
  rtb_RelationalOperator2_id = ((BaseEngineController_LS_B.s815_MinMax1 <
    (TPS1Adapt_Hi_Min_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S816>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: TPS1AdaptHiMin */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(110, rtb_RelationalOperator2_id);
    UpdateFault(110);
  }

  /* RelationalOperator: '<S816>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S755>/motohawk_calibration10'
   */
  rtb_RelationalOperator1_px = ((BaseEngineController_LS_B.s815_MinMax <
    (TPS1Adapt_Low_Min_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S816>/motohawk_fault_def8' */

  /* Set Fault Suspected Status: TPS1AdaptLoMin */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(112, rtb_RelationalOperator1_px);
    UpdateFault(112);
  }

  /* UnitDelay: '<S822>/Unit Delay1' */
  rtb_Abs_co = BaseEngineController_LS_DWork.s822_UnitDelay1_DSTATE;

  /* UnitDelay: '<S822>/Unit Delay' */
  rtb_Switch_k = BaseEngineController_LS_DWork.s822_UnitDelay_DSTATE;

  /* UnitDelay: '<S822>/Unit Delay3' */
  rtb_DataTypeConversion_m0 =
    BaseEngineController_LS_DWork.s822_UnitDelay3_DSTATE;

  /* UnitDelay: '<S822>/Unit Delay4' */
  rtb_Switch_f = BaseEngineController_LS_DWork.s822_UnitDelay4_DSTATE;

  /* MinMax: '<S822>/MinMax1' incorporates:
   *  UnitDelay: '<S822>/Unit Delay'
   *  UnitDelay: '<S822>/Unit Delay3'
   *  UnitDelay: '<S822>/Unit Delay4'
   */
  y = (rtb_Abs_co <= BaseEngineController_LS_DWork.s822_UnitDelay_DSTATE) ||
    rtIsNaN(BaseEngineController_LS_DWork.s822_UnitDelay_DSTATE) ? rtb_Abs_co :
    BaseEngineController_LS_DWork.s822_UnitDelay_DSTATE;
  y = (y <= BaseEngineController_LS_DWork.s822_UnitDelay3_DSTATE) || rtIsNaN
    (BaseEngineController_LS_DWork.s822_UnitDelay3_DSTATE) ? y :
    BaseEngineController_LS_DWork.s822_UnitDelay3_DSTATE;
  y = (y <= BaseEngineController_LS_DWork.s822_UnitDelay4_DSTATE) || rtIsNaN
    (BaseEngineController_LS_DWork.s822_UnitDelay4_DSTATE) ? y :
    BaseEngineController_LS_DWork.s822_UnitDelay4_DSTATE;
  y = (y <= BaseEngineController_LS_B.s755_Switch) || rtIsNaN
    (BaseEngineController_LS_B.s755_Switch) ? y :
    BaseEngineController_LS_B.s755_Switch;

  /* RelationalOperator: '<S820>/Relational Operator9' incorporates:
   *  MinMax: '<S822>/MinMax1'
   */
  rtb_LogicalOperator6_b = (y > BaseEngineController_LS_B.s815_MinMax1);

  /* RelationalOperator: '<S820>/Relational Operator5' incorporates:
   *  MinMax: '<S822>/MinMax1'
   *  S-Function (motohawk_sfun_calibration): '<S755>/motohawk_calibration12'
   */
  rtb_RelationalOperator5_fz = (y <= (TPS1Adapt_Hi_Max_DataStore()));

  /* RelationalOperator: '<S820>/Relational Operator6' incorporates:
   *  MinMax: '<S822>/MinMax1'
   *  S-Function (motohawk_sfun_calibration): '<S755>/motohawk_calibration11'
   */
  rtb_RelationalOperator6_h = (y >= (TPS1Adapt_Hi_Min_DataStore()));

  /* Sum: '<S820>/Sum2' incorporates:
   *  MinMax: '<S822>/MinMax1'
   */
  rtb_Abs_k = y - BaseEngineController_LS_B.s815_MinMax1;

  /* Abs: '<S820>/Abs' */
  rtb_Abs_k = fabs(rtb_Abs_k);

  /* Outputs for Enabled SubSystem: '<S820>/Store Current Position' incorporates:
   *  EnablePort: '<S823>/Enable'
   */
  /* Logic: '<S820>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S820>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S815>/motohawk_calibration14'
   *  S-Function (motohawk_sfun_calibration): '<S815>/motohawk_calibration2'
   */
  if (rtb_LogicalOperator6_b && rtb_RelationalOperator5_fz &&
      rtb_RelationalOperator6_h && (TPS1AdaptHiEnable_DataStore()) && (rtb_Abs_k
       > (TPS1Adapt_Delta_DataStore()))) {
    /* DataTypeConversion: '<S823>/Data Type Conversion2' incorporates:
     *  MinMax: '<S822>/MinMax1'
     */
    if (y < 65536.0) {
      if (y >= 0.0) {
        rtb_DataTypeConversion2_k = (uint16_T)y;
      } else {
        rtb_DataTypeConversion2_k = 0U;
      }
    } else {
      rtb_DataTypeConversion2_k = MAX_uint16_T;
    }

    /* End of DataTypeConversion: '<S823>/Data Type Conversion2' */

    /* S-Function (motohawk_sfun_data_write): '<S823>/motohawk_data_write' */
    /* Write to Data Storage as scalar: TPS1Raw_Adpt_Hi */
    {
      TPS1Raw_Adpt_Hi_DataStore() = rtb_DataTypeConversion2_k;
    }
  }

  /* End of Logic: '<S820>/Logical Operator1' */
  /* End of Outputs for SubSystem: '<S820>/Store Current Position' */

  /* MinMax: '<S822>/MinMax' */
  y = (BaseEngineController_LS_B.s755_Switch >= rtb_Switch_f) || rtIsNaN
    (rtb_Switch_f) ? BaseEngineController_LS_B.s755_Switch : rtb_Switch_f;
  y = (y >= rtb_DataTypeConversion_m0) || rtIsNaN(rtb_DataTypeConversion_m0) ? y
    : rtb_DataTypeConversion_m0;
  y = (y >= rtb_Switch_k) || rtIsNaN(rtb_Switch_k) ? y : rtb_Switch_k;
  rtb_Abs_k = (y >= rtb_Abs_co) || rtIsNaN(rtb_Abs_co) ? y : rtb_Abs_co;

  /* RelationalOperator: '<S821>/Relational Operator9' incorporates:
   *  MinMax: '<S822>/MinMax'
   */
  rtb_LogicalOperator6_b = (rtb_Abs_k < BaseEngineController_LS_B.s815_MinMax);

  /* RelationalOperator: '<S821>/Relational Operator5' incorporates:
   *  MinMax: '<S822>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S755>/motohawk_calibration9'
   */
  rtb_RelationalOperator5_fz = (rtb_Abs_k <= (TPS1Adapt_Low_Max_DataStore()));

  /* RelationalOperator: '<S821>/Relational Operator6' incorporates:
   *  MinMax: '<S822>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S755>/motohawk_calibration10'
   */
  rtb_RelationalOperator6_h = (rtb_Abs_k >= (TPS1Adapt_Low_Min_DataStore()));

  /* Sum: '<S821>/Sum2' incorporates:
   *  MinMax: '<S822>/MinMax'
   */
  rtb_Abs_co = rtb_Abs_k - BaseEngineController_LS_B.s815_MinMax;

  /* Abs: '<S821>/Abs' */
  rtb_Abs_co = fabs(rtb_Abs_co);

  /* Logic: '<S821>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S821>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S815>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S815>/motohawk_calibration14'
   */
  rtb_LogicalOperator6_b = (rtb_LogicalOperator6_b && rtb_RelationalOperator5_fz
    && rtb_RelationalOperator6_h && (TPS1AdaptLoEnable_DataStore()) &&
    (rtb_Abs_co > (TPS1Adapt_Delta_DataStore())));

  /* Outputs for Enabled SubSystem: '<S821>/Store Current Position' incorporates:
   *  EnablePort: '<S824>/Enable'
   */
  /* Logic: '<S821>/Logical Operator2' incorporates:
   *  Logic: '<S821>/Logical Operator4'
   *  S-Function (motohawk_sfun_calibration): '<S815>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S446>/motohawk_data_read'
   */
  if (rtb_LogicalOperator6_b || (rtb_RelationalOperator5_fz &&
       rtb_RelationalOperator6_h && (TPS1AdaptLoEnable_DataStore()) &&
       TPSAdaptLoRequest_DataStore())) {
    /* DataTypeConversion: '<S824>/Data Type Conversion2' incorporates:
     *  MinMax: '<S822>/MinMax'
     */
    if (rtb_Abs_k < 65536.0) {
      if (rtb_Abs_k >= 0.0) {
        rtb_DataTypeConversion2_n = (uint16_T)rtb_Abs_k;
      } else {
        rtb_DataTypeConversion2_n = 0U;
      }
    } else {
      rtb_DataTypeConversion2_n = MAX_uint16_T;
    }

    /* End of DataTypeConversion: '<S824>/Data Type Conversion2' */

    /* S-Function (motohawk_sfun_data_write): '<S824>/motohawk_data_write' */
    /* Write to Data Storage as scalar: TPS1Raw_Adpt_Low */
    {
      TPS1Raw_Adpt_Low_DataStore() = rtb_DataTypeConversion2_n;
    }
  }

  /* End of Logic: '<S821>/Logical Operator2' */
  /* End of Outputs for SubSystem: '<S821>/Store Current Position' */

  /* RelationalOperator: '<S833>/Relational Operator5' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S833>/motohawk_calibration5'
   */
  rtb_RelationalOperator5_g = ((BaseEngineController_LS_B.s756_Switch >
    (TPS2InputHiFltPos_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S833>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: TPS2RangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(119, rtb_RelationalOperator5_g);
    UpdateFault(119);
  }

  /* RelationalOperator: '<S833>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S833>/motohawk_calibration6'
   */
  rtb_RelationalOperator4_d1 = ((BaseEngineController_LS_B.s756_Switch <
    (TPS2InputLoFltPos_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S833>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: TPS2RangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(120, rtb_RelationalOperator4_d1);
    UpdateFault(120);
  }

  /* RelationalOperator: '<S833>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S756>/motohawk_calibration9'
   */
  rtb_RelationalOperator_fa = ((BaseEngineController_LS_B.s832_MinMax >
    (TPS2Adapt_Low_Max_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S833>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: TPS2AdaptLoMax */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(117, rtb_RelationalOperator_fa);
    UpdateFault(117);
  }

  /* RelationalOperator: '<S833>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S756>/motohawk_calibration12'
   */
  rtb_RelationalOperator3_jk = ((BaseEngineController_LS_B.s832_MinMax1 >
    (TPS2Adapt_Hi_Max_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S833>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: TPS2AdaptHiMax */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(115, rtb_RelationalOperator3_jk);
    UpdateFault(115);
  }

  /* RelationalOperator: '<S833>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S756>/motohawk_calibration11'
   */
  rtb_RelationalOperator2_or = ((BaseEngineController_LS_B.s832_MinMax1 <
    (TPS2Adapt_Hi_Min_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S833>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: TPS2AdaptHiMin */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(116, rtb_RelationalOperator2_or);
    UpdateFault(116);
  }

  /* RelationalOperator: '<S833>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S756>/motohawk_calibration10'
   */
  rtb_RelationalOperator1_d = ((BaseEngineController_LS_B.s832_MinMax <
    (TPS2Adapt_Low_Min_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S833>/motohawk_fault_def8' */

  /* Set Fault Suspected Status: TPS2AdaptLoMin */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(118, rtb_RelationalOperator1_d);
    UpdateFault(118);
  }

  /* UnitDelay: '<S839>/Unit Delay1' */
  rtb_Abs_co = BaseEngineController_LS_DWork.s839_UnitDelay1_DSTATE;

  /* UnitDelay: '<S839>/Unit Delay' */
  rtb_DataTypeConversion_ik =
    BaseEngineController_LS_DWork.s839_UnitDelay_DSTATE;

  /* UnitDelay: '<S839>/Unit Delay3' */
  rtb_APP2 = BaseEngineController_LS_DWork.s839_UnitDelay3_DSTATE;

  /* UnitDelay: '<S839>/Unit Delay4' */
  rtb_UnitDelay4_b3 = BaseEngineController_LS_DWork.s839_UnitDelay4_DSTATE;

  /* MinMax: '<S839>/MinMax1' incorporates:
   *  UnitDelay: '<S839>/Unit Delay'
   *  UnitDelay: '<S839>/Unit Delay3'
   *  UnitDelay: '<S839>/Unit Delay4'
   */
  y = (rtb_Abs_co <= BaseEngineController_LS_DWork.s839_UnitDelay_DSTATE) ||
    rtIsNaN(BaseEngineController_LS_DWork.s839_UnitDelay_DSTATE) ? rtb_Abs_co :
    BaseEngineController_LS_DWork.s839_UnitDelay_DSTATE;
  y = (y <= BaseEngineController_LS_DWork.s839_UnitDelay3_DSTATE) || rtIsNaN
    (BaseEngineController_LS_DWork.s839_UnitDelay3_DSTATE) ? y :
    BaseEngineController_LS_DWork.s839_UnitDelay3_DSTATE;
  y = (y <= BaseEngineController_LS_DWork.s839_UnitDelay4_DSTATE) || rtIsNaN
    (BaseEngineController_LS_DWork.s839_UnitDelay4_DSTATE) ? y :
    BaseEngineController_LS_DWork.s839_UnitDelay4_DSTATE;
  y = (y <= BaseEngineController_LS_B.s756_Switch) || rtIsNaN
    (BaseEngineController_LS_B.s756_Switch) ? y :
    BaseEngineController_LS_B.s756_Switch;

  /* RelationalOperator: '<S837>/Relational Operator9' incorporates:
   *  MinMax: '<S839>/MinMax1'
   */
  rtb_LogicalOperator6_b = (y > BaseEngineController_LS_B.s832_MinMax1);

  /* RelationalOperator: '<S837>/Relational Operator5' incorporates:
   *  MinMax: '<S839>/MinMax1'
   *  S-Function (motohawk_sfun_calibration): '<S756>/motohawk_calibration12'
   */
  rtb_RelationalOperator5_fz = (y <= (TPS2Adapt_Hi_Max_DataStore()));

  /* RelationalOperator: '<S837>/Relational Operator6' incorporates:
   *  MinMax: '<S839>/MinMax1'
   *  S-Function (motohawk_sfun_calibration): '<S756>/motohawk_calibration11'
   */
  rtb_RelationalOperator6_h = (y >= (TPS2Adapt_Hi_Min_DataStore()));

  /* Sum: '<S837>/Sum2' incorporates:
   *  MinMax: '<S839>/MinMax1'
   */
  rtb_Abs_k = y - BaseEngineController_LS_B.s832_MinMax1;

  /* Abs: '<S837>/Abs' */
  rtb_Abs_k = fabs(rtb_Abs_k);

  /* Outputs for Enabled SubSystem: '<S837>/Store Current Position' incorporates:
   *  EnablePort: '<S840>/Enable'
   */
  /* Logic: '<S837>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S837>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S832>/motohawk_calibration14'
   *  S-Function (motohawk_sfun_calibration): '<S832>/motohawk_calibration2'
   */
  if (rtb_LogicalOperator6_b && rtb_RelationalOperator5_fz &&
      rtb_RelationalOperator6_h && (TPS2AdaptHiEnable_DataStore()) && (rtb_Abs_k
       > (TPS2Adapt_Delta_DataStore()))) {
    /* DataTypeConversion: '<S840>/Data Type Conversion2' incorporates:
     *  MinMax: '<S839>/MinMax1'
     */
    if (y < 65536.0) {
      if (y >= 0.0) {
        rtb_DataTypeConversion2_jn = (uint16_T)y;
      } else {
        rtb_DataTypeConversion2_jn = 0U;
      }
    } else {
      rtb_DataTypeConversion2_jn = MAX_uint16_T;
    }

    /* End of DataTypeConversion: '<S840>/Data Type Conversion2' */

    /* S-Function (motohawk_sfun_data_write): '<S840>/motohawk_data_write' */
    /* Write to Data Storage as scalar: TPS2Raw_Adpt_Hi */
    {
      TPS2Raw_Adpt_Hi_DataStore() = rtb_DataTypeConversion2_jn;
    }
  }

  /* End of Logic: '<S837>/Logical Operator1' */
  /* End of Outputs for SubSystem: '<S837>/Store Current Position' */

  /* MinMax: '<S839>/MinMax' */
  y = (BaseEngineController_LS_B.s756_Switch >= rtb_UnitDelay4_b3) || rtIsNaN
    (rtb_UnitDelay4_b3) ? BaseEngineController_LS_B.s756_Switch :
    rtb_UnitDelay4_b3;
  y = (y >= rtb_APP2) || rtIsNaN(rtb_APP2) ? y : rtb_APP2;
  y = (y >= rtb_DataTypeConversion_ik) || rtIsNaN(rtb_DataTypeConversion_ik) ? y
    : rtb_DataTypeConversion_ik;
  rtb_Abs_k = (y >= rtb_Abs_co) || rtIsNaN(rtb_Abs_co) ? y : rtb_Abs_co;

  /* RelationalOperator: '<S838>/Relational Operator9' incorporates:
   *  MinMax: '<S839>/MinMax'
   */
  rtb_LogicalOperator6_b = (rtb_Abs_k < BaseEngineController_LS_B.s832_MinMax);

  /* RelationalOperator: '<S838>/Relational Operator5' incorporates:
   *  MinMax: '<S839>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S756>/motohawk_calibration9'
   */
  rtb_RelationalOperator5_fz = (rtb_Abs_k <= (TPS2Adapt_Low_Max_DataStore()));

  /* RelationalOperator: '<S838>/Relational Operator6' incorporates:
   *  MinMax: '<S839>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S756>/motohawk_calibration10'
   */
  rtb_RelationalOperator6_h = (rtb_Abs_k >= (TPS2Adapt_Low_Min_DataStore()));

  /* Sum: '<S838>/Sum2' incorporates:
   *  MinMax: '<S839>/MinMax'
   */
  rtb_Abs_co = rtb_Abs_k - BaseEngineController_LS_B.s832_MinMax;

  /* Abs: '<S838>/Abs' */
  rtb_Abs_co = fabs(rtb_Abs_co);

  /* Outputs for Enabled SubSystem: '<S838>/Store Current Position' incorporates:
   *  EnablePort: '<S841>/Enable'
   */
  /* Logic: '<S838>/Logical Operator2' incorporates:
   *  Logic: '<S838>/Logical Operator1'
   *  Logic: '<S838>/Logical Operator4'
   *  RelationalOperator: '<S838>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S832>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S832>/motohawk_calibration14'
   *  S-Function (motohawk_sfun_data_read): '<S446>/motohawk_data_read'
   */
  if ((rtb_LogicalOperator6_b && rtb_RelationalOperator5_fz &&
       rtb_RelationalOperator6_h && (TPS2AdaptLoEnable_DataStore()) &&
       (rtb_Abs_co > (TPS2Adapt_Delta_DataStore()))) ||
      (rtb_RelationalOperator5_fz && rtb_RelationalOperator6_h &&
       (TPS2AdaptLoEnable_DataStore()) && TPSAdaptLoRequest_DataStore())) {
    /* DataTypeConversion: '<S841>/Data Type Conversion2' incorporates:
     *  MinMax: '<S839>/MinMax'
     */
    if (rtb_Abs_k < 65536.0) {
      if (rtb_Abs_k >= 0.0) {
        rtb_DataTypeConversion2_o = (uint16_T)rtb_Abs_k;
      } else {
        rtb_DataTypeConversion2_o = 0U;
      }
    } else {
      rtb_DataTypeConversion2_o = MAX_uint16_T;
    }

    /* End of DataTypeConversion: '<S841>/Data Type Conversion2' */

    /* S-Function (motohawk_sfun_data_write): '<S841>/motohawk_data_write' */
    /* Write to Data Storage as scalar: TPS2Raw_Adpt_Low */
    {
      TPS2Raw_Adpt_Low_DataStore() = rtb_DataTypeConversion2_o;
    }
  }

  /* End of Logic: '<S838>/Logical Operator2' */
  /* End of Outputs for SubSystem: '<S838>/Store Current Position' */

  /* Update for S-Function (motohawk_sfun_dout): '<S849>/motohawk_dout' */

  /* S-Function Block: DOut5883p001 */
  {
    DOut5883p001_DiscreteOutput_Set
      (BaseEngineController_LS_B.s859_LogicalOperator);
  }

  /* Update for UnitDelay: '<S751>/Unit Delay' incorporates:
   *  MinMax: '<S774>/MinMax1'
   */
  BaseEngineController_LS_DWork.s751_UnitDelay_DSTATE = minV;

  /* Update for UnitDelay: '<S776>/Unit Delay' */
  BaseEngineController_LS_DWork.s776_UnitDelay_DSTATE = rtb_Sum1_nb;

  /* Update for UnitDelay: '<S808>/Unit Delay' */
  BaseEngineController_LS_DWork.s808_UnitDelay_DSTATE = rtb_Sum1_b4;

  /* Update for UnitDelay: '<S801>/Unit Delay1' */
  BaseEngineController_LS_DWork.s801_UnitDelay1_DSTATE = rtb_Merge_m;

  /* Update for UnitDelay: '<S749>/Unit Delay' incorporates:
   *  MinMax: '<S762>/MinMax1'
   */
  BaseEngineController_LS_DWork.s749_UnitDelay_DSTATE = minV_0;

  /* Update for UnitDelay: '<S764>/Unit Delay' */
  BaseEngineController_LS_DWork.s764_UnitDelay_DSTATE = rtb_Sum1_m;

  /* Update for UnitDelay: '<S791>/Unit Delay' */
  BaseEngineController_LS_DWork.s791_UnitDelay_DSTATE = rtb_Sum1_h1;

  /* Update for UnitDelay: '<S784>/Unit Delay1' */
  BaseEngineController_LS_DWork.s784_UnitDelay1_DSTATE = rtb_Merge_ao;

  /* Update for UnitDelay: '<S407>/Unit Delay' */
  BaseEngineController_LS_DWork.s407_UnitDelay_DSTATE =
    BaseEngineController_LS_B.s428_State;

  /* Update for UnitDelay: '<S617>/Unit Delay1' */
  BaseEngineController_LS_DWork.s617_UnitDelay1_DSTATE = rtb_Merge_b;

  /* Update for UnitDelay: '<S631>/Unit Delay' */
  BaseEngineController_LS_DWork.s631_UnitDelay_DSTATE = rtb_Sum1_li;

  /* Update for UnitDelay: '<S616>/Unit Delay' */
  BaseEngineController_LS_DWork.s616_UnitDelay_DSTATE =
    BaseEngineController_LS_B.s616_Sum1;

  /* Update for UnitDelay: '<S825>/Unit Delay' */
  BaseEngineController_LS_DWork.s825_UnitDelay_DSTATE = rtb_Sum1_hw;

  /* Update for UnitDelay: '<S818>/Unit Delay1' */
  BaseEngineController_LS_DWork.s818_UnitDelay1_DSTATE = rtb_Merge_li;

  /* Update for UnitDelay: '<S842>/Unit Delay' */
  BaseEngineController_LS_DWork.s842_UnitDelay_DSTATE = rtb_Sum1_lp;

  /* Update for UnitDelay: '<S835>/Unit Delay1' */
  BaseEngineController_LS_DWork.s835_UnitDelay1_DSTATE = rtb_Merge_mv;

  /* Update for UnitDelay: '<S643>/Unit Delay' */
  BaseEngineController_LS_DWork.s643_UnitDelay_DSTATE = rtb_Sum2_gr;

  /* Update for UnitDelay: '<S618>/Unit Delay1' */
  BaseEngineController_LS_DWork.s618_UnitDelay1_DSTATE = rtb_Merge_i;

  /* Update for UnitDelay: '<S642>/Unit Delay' */
  BaseEngineController_LS_DWork.s642_UnitDelay_DSTATE = rtb_Sum1_mz;

  /* Update for UnitDelay: '<S640>/Unit Delay' */
  BaseEngineController_LS_DWork.s640_UnitDelay_DSTATE = rtb_Merge_i;

  /* Update for UnitDelay: '<S640>/Unit Delay1' */
  BaseEngineController_LS_DWork.s640_UnitDelay1_DSTATE = rtb_UnitDelay_n;

  /* Update for UnitDelay: '<S640>/Unit Delay2' */
  BaseEngineController_LS_DWork.s640_UnitDelay2_DSTATE = rtb_UnitDelay1_h;

  /* Update for UnitDelay: '<S567>/Unit Delay' */
  BaseEngineController_LS_DWork.s567_UnitDelay_DSTATE =
    BaseEngineController_LS_B.s567_Switch;

  /* Update for UnitDelay: '<S605>/Unit Delay' */
  BaseEngineController_LS_DWork.s605_UnitDelay_DSTATE =
    BaseEngineController_LS_B.s600_Merge;

  /* Update for UnitDelay: '<S566>/Unit Delay' */
  BaseEngineController_LS_DWork.s566_UnitDelay_DSTATE = rtb_Merge_j;

  /* Update for UnitDelay: '<S602>/Unit Delay' */
  BaseEngineController_LS_DWork.s602_UnitDelay_DSTATE = rtb_Sum1_g3;

  /* Update for UnitDelay: '<S567>/Unit Delay1' */
  BaseEngineController_LS_DWork.s567_UnitDelay1_DSTATE =
    BaseEngineController_LS_B.s600_Merge;

  /* Update for UnitDelay: '<S567>/Unit Delay2' */
  BaseEngineController_LS_DWork.s567_UnitDelay2_DSTATE = rtb_RelOp_d;

  /* Update for Memory: '<S606>/Memory' */
  BaseEngineController_LS_DWork.s606_Memory_PreviousInput = rtb_Logic_j[0];

  /* Update for UnitDelay: '<S567>/Unit Delay3' */
  BaseEngineController_LS_DWork.s567_UnitDelay3_DSTATE =
    BaseEngineController_LS_B.s600_Merge;

  /* Update for UnitDelay: '<S410>/Unit Delay' */
  BaseEngineController_LS_DWork.s410_UnitDelay_DSTATE =
    BaseEngineController_LS_B.s448_MultiportSwitch;

  /* Update for UnitDelay: '<S488>/Unit Delay1' */
  BaseEngineController_LS_DWork.s488_UnitDelay1_DSTATE = rtb_Merge_ox;

  /* Update for UnitDelay: '<S513>/Unit Delay' */
  BaseEngineController_LS_DWork.s513_UnitDelay_DSTATE = rtb_Sum1_ir;

  /* Update for UnitDelay: '<S489>/Unit Delay1' */
  BaseEngineController_LS_DWork.s489_UnitDelay1_DSTATE = rtb_Merge_h;

  /* Update for UnitDelay: '<S521>/Unit Delay' */
  BaseEngineController_LS_DWork.s521_UnitDelay_DSTATE = rtb_Sum1_du;

  /* Update for UnitDelay: '<S625>/Unit Delay1' */
  BaseEngineController_LS_DWork.s625_UnitDelay1_DSTATE = rtb_Merge_f;

  /* Update for UnitDelay: '<S694>/Unit Delay' */
  BaseEngineController_LS_DWork.s694_UnitDelay_DSTATE = rtb_Sum1_nl;

  /* Update for UnitDelay: '<S620>/Unit Delay1' */
  BaseEngineController_LS_DWork.s620_UnitDelay1_DSTATE = rtb_Merge_in;

  /* Update for UnitDelay: '<S660>/Unit Delay' */
  BaseEngineController_LS_DWork.s660_UnitDelay_DSTATE = rtb_Sum1_d4;

  /* Update for UnitDelay: '<S621>/Unit Delay1' */
  BaseEngineController_LS_DWork.s621_UnitDelay1_DSTATE = rtb_Merge_jq;

  /* Update for UnitDelay: '<S367>/Unit Delay' */
  BaseEngineController_LS_DWork.s367_UnitDelay_DSTATE = rtb_Merge_b3;

  /* Update for UnitDelay: '<S563>/Unit Delay' */
  BaseEngineController_LS_DWork.s563_UnitDelay_DSTATE = rtb_Merge_dv;

  /* Update for UnitDelay: '<S583>/Unit Delay' */
  BaseEngineController_LS_DWork.s583_UnitDelay_DSTATE = rtb_Sum1_fm;

  /* Update for UnitDelay: '<S383>/Unit Delay2' */
  BaseEngineController_LS_DWork.s383_UnitDelay2_DSTATE = rtb_DesiredLambda_idx;

  /* Update for UnitDelay: '<S386>/Unit Delay' */
  BaseEngineController_LS_DWork.s386_UnitDelay_DSTATE =
    BaseEngineController_LS_B.s386_Sum1;

  /* Update for UnitDelay: '<S384>/Unit Delay2' */
  BaseEngineController_LS_DWork.s384_UnitDelay2_DSTATE = rtb_UnitDelay1_k;

  /* Update for UnitDelay: '<S389>/Unit Delay' */
  BaseEngineController_LS_DWork.s389_UnitDelay_DSTATE =
    BaseEngineController_LS_B.s389_Sum1;

  /* Update for UnitDelay: '<S425>/Unit Delay' */
  BaseEngineController_LS_DWork.s425_UnitDelay_DSTATE =
    BaseEngineController_LS_B.s616_Sum1;

  /* Update for UnitDelay: '<S427>/Unit Delay' */
  BaseEngineController_LS_DWork.s427_UnitDelay_DSTATE =
    BaseEngineController_LS_B.s427_Sum1;

  /* Update for UnitDelay: '<S668>/Unit Delay' */
  BaseEngineController_LS_DWork.s668_UnitDelay_DSTATE = rtb_Sum1_mzy;

  /* Update for Enabled SubSystem: '<S15>/Run' incorporates:
   *  Update for EnablePort: '<S136>/Enable'
   */
  if (BaseEngineController_LS_DWork.s15_Run_MODE) {
    /* Update for UnitDelay: '<S167>/Unit Delay' */
    BaseEngineController_LS_DWork.s167_UnitDelay_DSTATE =
      BaseEngineController_LS_B.s167_Switch1;

    /* Update for UnitDelay: '<S166>/Unit Delay' */
    BaseEngineController_LS_DWork.s166_UnitDelay_DSTATE =
      BaseEngineController_LS_B.s166_Switch1;

    /* Update for UnitDelay: '<S164>/Unit Delay' */
    BaseEngineController_LS_DWork.s164_UnitDelay_DSTATE = rtb_Switch1_n1;

    /* Update for UnitDelay: '<S165>/Unit Delay' */
    BaseEngineController_LS_DWork.s165_UnitDelay_DSTATE = rtb_Switch1_k;

    /* Update for UnitDelay: '<S163>/Unit Delay' */
    BaseEngineController_LS_DWork.s163_UnitDelay_DSTATE =
      BaseEngineController_LS_B.s163_Switch1;

    /* Update for UnitDelay: '<S162>/Unit Delay' */
    BaseEngineController_LS_DWork.s162_UnitDelay_DSTATE = rtb_Switch1_eq;

    /* Update for UnitDelay: '<S192>/Unit Delay' */
    BaseEngineController_LS_DWork.s192_UnitDelay_DSTATE =
      BaseEngineController_LS_B.s192_Switch1;

    /* Update for UnitDelay: '<S191>/state' */
    BaseEngineController_LS_DWork.s191_state_DSTATE = rtb_MinMax1_d;

    /* Update for UnitDelay: '<S147>/Unit Delay' */
    BaseEngineController_LS_DWork.s147_UnitDelay_DSTATE =
      BaseEngineController_LS_B.s186_Switch1;

    /* Update for UnitDelay: '<S186>/Unit Delay' */
    BaseEngineController_LS_DWork.s186_UnitDelay_DSTATE = rtb_MinMax1_di;

    /* Update for UnitDelay: '<S176>/Unit Delay' */
    BaseEngineController_LS_DWork.s176_UnitDelay_DSTATE = rtb_Sum2_o;

    /* Update for UnitDelay: '<S185>/Unit Delay' */
    BaseEngineController_LS_DWork.s185_UnitDelay_DSTATE = rtb_Product4_k;

    /* Update for UnitDelay: '<S203>/Unit Delay' */
    BaseEngineController_LS_DWork.s203_UnitDelay_DSTATE = rtb_Switch1_em;

    /* Update for UnitDelay: '<S204>/Unit Delay' */
    BaseEngineController_LS_DWork.s204_UnitDelay_DSTATE = rtb_Switch1_l4;

    /* Update for UnitDelay: '<S205>/Unit Delay' */
    BaseEngineController_LS_DWork.s205_UnitDelay_DSTATE = rtb_Switch1_mo;
  }

  /* End of Update for SubSystem: '<S15>/Run' */

  /* Update for UnitDelay: '<S381>/Unit Delay' */
  BaseEngineController_LS_DWork.s381_UnitDelay_DSTATE = rtb_LogicalOperator_c;

  /* Update for UnitDelay: '<S377>/Unit Delay' */
  BaseEngineController_LS_DWork.s377_UnitDelay_DSTATE =
    BaseEngineController_LS_B.s377_Sum1;

  /* Update for UnitDelay: '<S878>/Unit Delay' */
  BaseEngineController_LS_DWork.s878_UnitDelay_DSTATE =
    BaseEngineController_LS_B.s878_Sum1;

  /* Update for UnitDelay: '<S876>/Unit Delay' */
  BaseEngineController_LS_DWork.s876_UnitDelay_DSTATE = rtb_Sum1_hu;

  /* Update for UnitDelay: '<S882>/Unit Delay2' */
  BaseEngineController_LS_DWork.s882_UnitDelay2_DSTATE = rtb_UnitDelay1_ad;

  /* Update for UnitDelay: '<S882>/Unit Delay5' */
  BaseEngineController_LS_DWork.s882_UnitDelay5_DSTATE = rtb_Merge_iz;

  /* Update for UnitDelay: '<S888>/Unit Delay' */
  BaseEngineController_LS_DWork.s888_UnitDelay_DSTATE = rtb_Sum1_c;

  /* Update for UnitDelay: '<S883>/Unit Delay2' */
  BaseEngineController_LS_DWork.s883_UnitDelay2_DSTATE = rtb_UnitDelay1_pn;

  /* Update for UnitDelay: '<S883>/Unit Delay5' */
  BaseEngineController_LS_DWork.s883_UnitDelay5_DSTATE = rtb_Merge_oq;

  /* Update for UnitDelay: '<S891>/Unit Delay' */
  BaseEngineController_LS_DWork.s891_UnitDelay_DSTATE = rtb_Sum1_lm;

  /* Update for UnitDelay: '<S884>/Unit Delay' */
  BaseEngineController_LS_DWork.s884_UnitDelay_DSTATE = rtb_Sum1_p;

  /* Update for UnitDelay: '<S885>/Unit Delay' */
  BaseEngineController_LS_DWork.s885_UnitDelay_DSTATE = rtb_Sum1_a;

  /* Update for UnitDelay: '<S886>/Unit Delay' */
  BaseEngineController_LS_DWork.s886_UnitDelay_DSTATE = rtb_Sum1_j2;

  /* Update for UnitDelay: '<S882>/Unit Delay1' */
  BaseEngineController_LS_DWork.s882_UnitDelay1_DSTATE = rtb_UnitDelay3_m;

  /* Update for UnitDelay: '<S882>/Unit Delay3' */
  BaseEngineController_LS_DWork.s882_UnitDelay3_DSTATE = rtb_UnitDelay4_b;

  /* Update for UnitDelay: '<S882>/Unit Delay4' */
  BaseEngineController_LS_DWork.s882_UnitDelay4_DSTATE =
    BaseEngineController_LS_B.s448_MathFunction;

  /* Update for UnitDelay: '<S883>/Unit Delay1' */
  BaseEngineController_LS_DWork.s883_UnitDelay1_DSTATE = rtb_UnitDelay3_p;

  /* Update for UnitDelay: '<S883>/Unit Delay3' */
  BaseEngineController_LS_DWork.s883_UnitDelay3_DSTATE = rtb_UnitDelay4_a;

  /* Update for UnitDelay: '<S883>/Unit Delay4' */
  BaseEngineController_LS_DWork.s883_UnitDelay4_DSTATE =
    BaseEngineController_LS_B.s448_MathFunction1;

  /* Update for UnitDelay: '<S899>/Unit Delay' */
  BaseEngineController_LS_DWork.s899_UnitDelay_DSTATE = rtb_Sum1_cn;

  /* Update for UnitDelay: '<S619>/Unit Delay1' */
  BaseEngineController_LS_DWork.s619_UnitDelay1_DSTATE = rtb_Merge_b3f;

  /* Update for UnitDelay: '<S652>/Unit Delay' */
  BaseEngineController_LS_DWork.s652_UnitDelay_DSTATE = rtb_Sum1_cs;

  /* Update for UnitDelay: '<S900>/Unit Delay' */
  BaseEngineController_LS_DWork.s900_UnitDelay_DSTATE = rtb_Sum1_ay;

  /* Update for UnitDelay: '<S623>/Unit Delay1' */
  BaseEngineController_LS_DWork.s623_UnitDelay1_DSTATE = rtb_Merge_ol;

  /* Update for UnitDelay: '<S678>/Unit Delay' */
  BaseEngineController_LS_DWork.s678_UnitDelay_DSTATE = rtb_Sum1_o;

  /* Update for UnitDelay: '<S901>/Unit Delay' */
  BaseEngineController_LS_DWork.s901_UnitDelay_DSTATE = rtb_Sum1_co;

  /* Update for UnitDelay: '<S903>/Unit Delay' */
  BaseEngineController_LS_DWork.s903_UnitDelay_DSTATE = rtb_Sum1_kv;

  /* Update for UnitDelay: '<S907>/Unit Delay' */
  BaseEngineController_LS_DWork.s907_UnitDelay_DSTATE = rtb_Sum1_mn;

  /* Update for UnitDelay: '<S906>/Unit Delay' */
  BaseEngineController_LS_DWork.s906_UnitDelay_DSTATE = rtb_Sum1_mw;

  /* Update for S-Function (motohawk_sfun_dout): '<S853>/motohawk_dout' */

  /* S-Function Block: DOut6701p001 */
  {
    DOut6701p001_DiscreteOutput_Set
      (BaseEngineController_LS_B.s936_LogicalOperator);
  }

  /* Update for S-Function (motohawk_sfun_pwm): '<S853>/motohawk_pwm' */

  /* S-Function Block: FAN1Pin_PWM_PWMOutput */
  FAN1Pin_PWM_PWMOutput_PWMOutput_Set(rtb_DataTypeConversion2_j,
    rtb_DataTypeConversion3_c, 0, 1);

  /* Update for S-Function (motohawk_sfun_dout): '<S853>/motohawk_dout1' */

  /* S-Function Block: DOut6702p001 */
  {
    DOut6702p001_DiscreteOutput_Set
      (BaseEngineController_LS_B.s937_LogicalOperator);
  }

  /* Update for S-Function (motohawk_sfun_pwm): '<S853>/motohawk_pwm1' */

  /* S-Function Block: FAN2Pin_PWM_PWMOutput */
  FAN2Pin_PWM_PWMOutput_PWMOutput_Set(rtb_DataTypeConversion2_e,
    rtb_DataTypeConversion3_k, 0, 1);

  /* Update for S-Function (motohawk_sfun_dout): '<S854>/motohawk_dout' */

  /* S-Function Block: DOut6722p001 */
  {
    DOut6722p001_DiscreteOutput_Set
      (BaseEngineController_LS_B.s954_LogicalOperator);
  }

  /* Update for S-Function (motohawk_sfun_pwm): '<S855>/motohawk_pwm1' */

  /* S-Function Block: ETCPin_PWMOutput */
  ETCPin_PWMOutput_PWMOutput_Set(rtb_DataTypeConversion3_j,
    rtb_DataTypeConversion4_m, 0, 1);

  /* Update for S-Function (motohawk_sfun_pwm): '<S856>/motohawk_pwm' */

  /* S-Function Block: IAC_PPin_PWMOutput */
  IAC_PPin_PWMOutput_PWMOutput_Set(rtb_DataTypeConversion2_l,
    rtb_DataTypeConversion3_p, 0, 1);

  /* Update for S-Function (motohawk_sfun_pwm): '<S856>/motohawk_pwm1' */

  /* S-Function Block: IAC_SPin_PWMOutput */
  IAC_SPin_PWMOutput_PWMOutput_Set(rtb_DataTypeConversion2_i,
    rtb_DataTypeConversion3_d, 0, 1);

  /* Update for UnitDelay: '<S74>/Unit Delay' */
  BaseEngineController_LS_DWork.s74_UnitDelay_DSTATE = rtb_Merge_da;

  /* Update for UnitDelay: '<S73>/Unit Delay' */
  BaseEngineController_LS_DWork.s73_UnitDelay_DSTATE = rtb_Merge_a5;

  /* Update for UnitDelay: '<S71>/Unit Delay' */
  BaseEngineController_LS_DWork.s71_UnitDelay_DSTATE = rtb_Merge_ie;

  /* Update for UnitDelay: '<S70>/Unit Delay' */
  BaseEngineController_LS_DWork.s70_UnitDelay_DSTATE = rtb_Merge_ho;

  /* Update for UnitDelay: '<S69>/Unit Delay' */
  BaseEngineController_LS_DWork.s69_UnitDelay_DSTATE = rtb_Merge_ab;

  /* Update for UnitDelay: '<S68>/Unit Delay' */
  BaseEngineController_LS_DWork.s68_UnitDelay_DSTATE = rtb_Merge_gg;

  /* Update for UnitDelay: '<S67>/Unit Delay' */
  BaseEngineController_LS_DWork.s67_UnitDelay_DSTATE = rtb_Merge_db;

  /* Update for UnitDelay: '<S66>/Unit Delay' */
  BaseEngineController_LS_DWork.s66_UnitDelay_DSTATE = rtb_Merge_fp;

  /* Update for UnitDelay: '<S72>/Unit Delay' */
  memcpy((void *)BaseEngineController_LS_DWork.s72_UnitDelay_DSTATE, (void *)
         &rtb_Merge_bv[0], sizeof(real_T) << 3U);

  /* Update for S-Function (motohawk_sfun_pwm): '<S858>/motohawk_pwm' */

  /* S-Function Block: WASTEGATE_PWMOutput */
  WASTEGATE_PWMOutput_PWMOutput_Set(rtb_DataTypeConversion2_p,
    rtb_DataTypeConversion3_e, 0, 1);

  /* Update for UnitDelay: '<S439>/Unit Delay' */
  BaseEngineController_LS_DWork.s439_UnitDelay_DSTATE = rtb_Switch_kj;

  /* Update for UnitDelay: '<S410>/Unit Delay1' */
  BaseEngineController_LS_DWork.s410_UnitDelay1_DSTATE =
    BaseEngineController_LS_B.s448_MultiportSwitch;

  /* Update for UnitDelay: '<S624>/Unit Delay1' */
  BaseEngineController_LS_DWork.s624_UnitDelay1_DSTATE = rtb_Merge_ht;

  /* Update for UnitDelay: '<S686>/Unit Delay' */
  BaseEngineController_LS_DWork.s686_UnitDelay_DSTATE = rtb_Sum1_m3;

  /* Update for UnitDelay: '<S383>/Unit Delay1' */
  BaseEngineController_LS_DWork.s383_UnitDelay1_DSTATE = rtb_DesiredLambda_idx_0;

  /* Update for UnitDelay: '<S383>/Unit Delay3' */
  BaseEngineController_LS_DWork.s383_UnitDelay3_DSTATE = rtb_DesiredLambda_idx_1;

  /* Update for UnitDelay: '<S383>/Unit Delay4' */
  BaseEngineController_LS_DWork.s383_UnitDelay4_DSTATE =
    BaseEngineController_LS_B.s616_Sum1;

  /* Update for UnitDelay: '<S384>/Unit Delay1' */
  BaseEngineController_LS_DWork.s384_UnitDelay1_DSTATE = rtb_UnitDelay3_j;

  /* Update for UnitDelay: '<S384>/Unit Delay3' */
  BaseEngineController_LS_DWork.s384_UnitDelay3_DSTATE = rtb_UnitDelay4_ie;

  /* Update for UnitDelay: '<S384>/Unit Delay4' */
  BaseEngineController_LS_DWork.s384_UnitDelay4_DSTATE =
    BaseEngineController_LS_B.s659_Merge;

  /* Update for UnitDelay: '<S788>/Unit Delay1' */
  BaseEngineController_LS_DWork.s788_UnitDelay1_DSTATE =
    rtb_DataTypeConversion1_e;

  /* Update for UnitDelay: '<S788>/Unit Delay' */
  BaseEngineController_LS_DWork.s788_UnitDelay_DSTATE =
    rtb_DataTypeConversion_b2;

  /* Update for UnitDelay: '<S788>/Unit Delay3' */
  BaseEngineController_LS_DWork.s788_UnitDelay3_DSTATE = rtb_Switch_mq;

  /* Update for UnitDelay: '<S788>/Unit Delay4' */
  BaseEngineController_LS_DWork.s788_UnitDelay4_DSTATE =
    BaseEngineController_LS_B.s753_Switch;

  /* Update for UnitDelay: '<S805>/Unit Delay1' */
  BaseEngineController_LS_DWork.s805_UnitDelay1_DSTATE =
    rtb_Multiplyby10ifnotyetenabled;

  /* Update for UnitDelay: '<S805>/Unit Delay' */
  BaseEngineController_LS_DWork.s805_UnitDelay_DSTATE = rtb_Product4_o;

  /* Update for UnitDelay: '<S805>/Unit Delay3' */
  BaseEngineController_LS_DWork.s805_UnitDelay3_DSTATE = rtb_Switch_c;

  /* Update for UnitDelay: '<S805>/Unit Delay4' */
  BaseEngineController_LS_DWork.s805_UnitDelay4_DSTATE =
    BaseEngineController_LS_B.s754_Switch;

  /* Update for UnitDelay: '<S822>/Unit Delay1' */
  BaseEngineController_LS_DWork.s822_UnitDelay1_DSTATE = rtb_Switch_k;

  /* Update for UnitDelay: '<S822>/Unit Delay' */
  BaseEngineController_LS_DWork.s822_UnitDelay_DSTATE =
    rtb_DataTypeConversion_m0;

  /* Update for UnitDelay: '<S822>/Unit Delay3' */
  BaseEngineController_LS_DWork.s822_UnitDelay3_DSTATE = rtb_Switch_f;

  /* Update for UnitDelay: '<S822>/Unit Delay4' */
  BaseEngineController_LS_DWork.s822_UnitDelay4_DSTATE =
    BaseEngineController_LS_B.s755_Switch;

  /* Update for UnitDelay: '<S839>/Unit Delay1' */
  BaseEngineController_LS_DWork.s839_UnitDelay1_DSTATE =
    rtb_DataTypeConversion_ik;

  /* Update for UnitDelay: '<S839>/Unit Delay' */
  BaseEngineController_LS_DWork.s839_UnitDelay_DSTATE = rtb_APP2;

  /* Update for UnitDelay: '<S839>/Unit Delay3' */
  BaseEngineController_LS_DWork.s839_UnitDelay3_DSTATE = rtb_UnitDelay4_b3;

  /* Update for UnitDelay: '<S839>/Unit Delay4' */
  BaseEngineController_LS_DWork.s839_UnitDelay4_DSTATE =
    BaseEngineController_LS_B.s756_Switch;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
