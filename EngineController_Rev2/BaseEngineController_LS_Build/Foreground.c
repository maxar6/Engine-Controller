/*
 * File: Foreground.c
 *
 * Code generated for Simulink model 'BaseEngineController_LS'.
 *
 * Model version                  : 1.2021
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Mon Jul 11 23:56:32 2022
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

/* Named constants for Stateflow: '<S368>/Baro Stall State Delay' */
#define BaseEngineController_LS_IN_CrankRun (1U)
#define BaseEngineController_LS_IN_Stall (2U)
#define BaseEngineController_LS_IN_StallDelay (3U)

/* Named constants for Stateflow: '<S417>/Engine State Machine' */
#define BaseEngineController_LS_IN_Crank (1U)
#define BaseEngineController_LS_IN_Run (2U)
#define BaseEngineController_LS_IN_Stall_l (3U)

/*
 * Initial conditions for enable system:
 *    '<S375>/Collect Average'
 *    '<S413>/Collect Average'
 *    '<S414>/Collect Average'
 */
void BaseEngineController_LS_CollectAverage_Init
  (rtDW_CollectAverage_BaseEngineController_LS *localDW)
{
  /* InitializeConditions for UnitDelay: '<S379>/Unit Delay1' */
  localDW->s379_UnitDelay1_DSTATE = 0.0;
}

/*
 * Disable for enable system:
 *    '<S375>/Collect Average'
 *    '<S413>/Collect Average'
 *    '<S414>/Collect Average'
 */
void BaseEngineController_LS_CollectAverage_Disable
  (rtDW_CollectAverage_BaseEngineController_LS *localDW)
{
  localDW->s375_CollectAverage_MODE = FALSE;
}

/*
 * Start for enable system:
 *    '<S375>/Collect Average'
 *    '<S413>/Collect Average'
 *    '<S414>/Collect Average'
 */
void BaseEngineController_LS_CollectAverage_Start
  (rtDW_CollectAverage_BaseEngineController_LS *localDW)
{
  BaseEngineController_LS_CollectAverage_Init(localDW);
}

/*
 * Output and update for enable system:
 *    '<S375>/Collect Average'
 *    '<S413>/Collect Average'
 *    '<S414>/Collect Average'
 */
void BaseEngineController_LS_CollectAverage(boolean_T rtu_0, int8_T rtu_Count,
  real_T rtu_Signal, rtB_CollectAverage_BaseEngineController_LS *localB,
  rtDW_CollectAverage_BaseEngineController_LS *localDW)
{
  real_T rtb_Sum1_b4g;

  /* Outputs for Enabled SubSystem: '<S375>/Collect Average' incorporates:
   *  EnablePort: '<S379>/Enable'
   */
  if (rtu_0) {
    if (!localDW->s375_CollectAverage_MODE) {
      BaseEngineController_LS_CollectAverage_Init(localDW);
      localDW->s375_CollectAverage_MODE = TRUE;
    }

    /* Sum: '<S379>/Sum1' incorporates:
     *  UnitDelay: '<S379>/Unit Delay1'
     */
    rtb_Sum1_b4g = rtu_Signal + localDW->s379_UnitDelay1_DSTATE;

    /* Product: '<S379>/Product' incorporates:
     *  DataTypeConversion: '<S379>/Data Type Conversion'
     */
    localB->s379_Product = 1.0 / (real_T)rtu_Count * rtb_Sum1_b4g;

    /* Update for UnitDelay: '<S379>/Unit Delay1' */
    localDW->s379_UnitDelay1_DSTATE = rtb_Sum1_b4g;
  } else {
    if (localDW->s375_CollectAverage_MODE) {
      BaseEngineController_LS_CollectAverage_Disable(localDW);
    }
  }

  /* End of Outputs for SubSystem: '<S375>/Collect Average' */
}

/*
 * Start for enable system:
 *    '<S412>/PassThrough1'
 *    '<S412>/PassThrough2'
 */
void BaseEngineController_LS_PassThrough1_Start(real_T *rty_Out1)
{
  /* VirtualOutportStart for Outport: '<S428>/Out1' */
  (*rty_Out1) = 0.005;
}

/*
 * Output and update for enable system:
 *    '<S412>/PassThrough1'
 *    '<S412>/PassThrough2'
 */
void BaseEngineController_LS_PassThrough1(boolean_T rtu_0, real_T rtu_1, real_T *
  rty_Out1)
{
  /* Outputs for Enabled SubSystem: '<S412>/PassThrough1' incorporates:
   *  EnablePort: '<S428>/Enable'
   */
  if (rtu_0) {
    /* Inport: '<S428>/In1' */
    (*rty_Out1) = rtu_1;
  }

  /* End of Outputs for SubSystem: '<S412>/PassThrough1' */
}

/*
 * Output and update for action system:
 *    '<S498>/If Action Subsystem'
 *    '<S498>/If Action Subsystem1'
 *    '<S498>/If Action Subsystem2'
 *    '<S499>/If Action Subsystem'
 *    '<S499>/If Action Subsystem1'
 *    '<S499>/If Action Subsystem2'
 *    '<S573>/If Action Subsystem'
 *    '<S573>/If Action Subsystem1'
 *    '<S573>/If Action Subsystem2'
 *    '<S576>/If Action Subsystem'
 *    ...
 */
void BaseEngineController_LS_IfActionSubsystem(real_T rtu_0, real_T *rty_Out)
{
  /* Inport: '<S519>/In' */
  (*rty_Out) = rtu_0;
}

/*
 * Initial conditions for function-call system:
 *    '<S761>/Function-Call Subsystem'
 *    '<S763>/Function-Call Subsystem'
 */
void BaseEngineController_LS_FunctionCallSubsystem_Init
  (rtDW_FunctionCallSubsystem_BaseEngineController_LS *localDW)
{
  /* InitializeConditions for UnitDelay: '<S779>/Initial Condition is True' */
  localDW->s779_InitialConditionisTrue_DSTATE = TRUE;
}

/*
 * Output and update for function-call system:
 *    '<S761>/Function-Call Subsystem'
 *    '<S763>/Function-Call Subsystem'
 */
void BaseEngineController_LS_FunctionCallSubsystem
  (rtB_FunctionCallSubsystem_BaseEngineController_LS *localB,
   rtDW_FunctionCallSubsystem_BaseEngineController_LS *localDW)
{
  /* UnitDelay: '<S779>/Initial Condition is True' */
  localB->s779_InitialConditionisTrue =
    localDW->s779_InitialConditionisTrue_DSTATE;

  /* Update for UnitDelay: '<S779>/Initial Condition is True' incorporates:
   *  Constant: '<S779>/False After First Sample'
   */
  localDW->s779_InitialConditionisTrue_DSTATE = FALSE;
}

/* Initial conditions for function-call system: '<Root>/Foreground' */
void BaseEngineController_LS_Foreground_Init(void)
{
  /* Initial conditions for function-call system: '<S455>/Temp Sensors' */

  /* S-Function Block: <S733>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s733_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S751>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s751_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S742>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s742_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S724>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s724_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S606>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s606_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S615>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s615_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(-1);
  }

  /* S-Function Block: <S780>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s780_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S811>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s811_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S768>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s768_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S794>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s794_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S441>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s441_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for Stateflow: '<S417>/Engine State Machine' */

  /* Entry: Foreground/Control/VirtualSensors/RawProcessed/EngineState/Engine State Machine */
  /* Transition: '<S438>:4' */
  BaseEngineController_LS_DWork.s438_is_c2_BaseEngineController_LS =
    BaseEngineController_LS_IN_Stall_l;

  /* Entry 'Stall': '<S438>:1' */
  BaseEngineController_LS_B.s438_State = 1U;

  /* S-Function Block: <S637>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s637_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S620>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s620_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S828>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s828_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S845>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s845_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S654>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s654_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S650>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s650_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for Atomic SubSystem: '<S372>/Base TPS Request' */

  /* S-Function Block: <S430>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s430_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S412>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s412_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* End of InitializeConditions for SubSystem: '<S372>/Base TPS Request' */

  /* S-Function Block: <S526>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s526_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S518>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s518_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
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

  /* S-Function Block: <S666>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s666_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S368>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s368_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for Stateflow: '<S368>/Baro Stall State Delay' */
  BaseEngineController_LS_DWork.s374_TOld = 0.0;
  BaseEngineController_LS_B.s374_Timer = 0.0;

  /* Entry: Foreground/Control/VirtualSensors/AirCalcs/Baro Stall State Delay */
  /* Transition: '<S374>:4' */
  BaseEngineController_LS_DWork.s374_is_c19_BaseEngineController_LS =
    BaseEngineController_LS_IN_Stall;

  /* Entry 'Stall': '<S374>:1' */
  BaseEngineController_LS_B.s374_Enable = TRUE;

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

  /* S-Function Block: <S587>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s587_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
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
      Timer_FreeRunningCounter_GetRawTicksFromTime(-1);
  }

  /* S-Function Block: <S598>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s598_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S603>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s603_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S674>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s674_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* Initial conditions for function-call system: '<S455>/Fuel Level' */

  /* S-Function Block: <S711>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s711_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for UnitDelay: '<S389>/Initial Condition is True' */
  BaseEngineController_LS_DWork.s389_InitialConditionisTrue_DSTATE = TRUE;

  /* S-Function Block: <S369>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s369_motohawk_delta_time_DWORK1 = now -
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

  /* S-Function Block: <S684>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s684_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S938>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s938_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S445>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s445_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S692>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s692_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S618>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s618_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for S-Function (motohawk_sfun_trigger): '<S761>/motohawk_trigger' */
  BaseEngineController_LS_FunctionCallSubsystem_Init
    (&BaseEngineController_LS_DWork.s761_FunctionCallSubsystem);

  /* InitializeConditions for S-Function (motohawk_sfun_trigger): '<S763>/motohawk_trigger' */
  BaseEngineController_LS_FunctionCallSubsystem_Init
    (&BaseEngineController_LS_DWork.s763_FunctionCallSubsystem);
}

/* Enable for function-call system: '<Root>/Foreground' */
void BaseEngineController_LS_Foreground_Enable(void)
{
  /* Level2 S-Function Block: '<S455>/motohawk_trigger' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_5XRTI_PERIODIC_8400p0005 */
  BaseEngineController_LS_DWork.s455_motohawk_trigger_DWORK1 = 1;

  /* Level2 S-Function Block: '<S417>/motohawk_trigger' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_TDC_EVENT_7192p0001 */
  BaseEngineController_LS_DWork.s417_motohawk_trigger_DWORK1 = 1;

  /* Level2 S-Function Block: '<S633>/motohawk_trigger5' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_MID_TDC_EVENT_8120p0005 */
  BaseEngineController_LS_DWork.s633_motohawk_trigger5_DWORK1 = 1;

  /* Level2 S-Function Block: '<S455>/motohawk_trigger1' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_5XRTI_PERIODIC_11343p0129 */
  BaseEngineController_LS_DWork.s455_motohawk_trigger1_DWORK1 = 1;

  /* Level2 S-Function Block: '<S14>/motohawk_trigger1' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_5XRTI_PERIODIC_1412p0001 */
  BaseEngineController_LS_DWork.s14_motohawk_trigger1_DWORK1 = 1;

  /* Level2 S-Function Block: '<S14>/motohawk_trigger' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_5XRTI_PERIODIC_1411p0001 */
  BaseEngineController_LS_DWork.s14_motohawk_trigger_DWORK1 = 1;

  /* Level2 S-Function Block: '<S13>/motohawk_trigger' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_5XRTI_PERIODIC_9680p0004 */

  /* Enable for function-call system: '<S13>/Coil Control' */

  /* Enable for Atomic SubSystem: '<S888>/EST Enable TDC Counter' */

  /* Level2 S-Function Block: '<S893>/motohawk_trigger1' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_TDC_EVENT_9152p0001 */
  BaseEngineController_LS_DWork.s893_motohawk_trigger1_DWORK1 = 1;

  /* End of Enable for SubSystem: '<S888>/EST Enable TDC Counter' */
  BaseEngineController_LS_DWork.s13_motohawk_trigger_DWORK1 = 1;

  /* Level2 S-Function Block: '<S761>/motohawk_trigger' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_20XRTI_PERIODIC_8534p0002 */
  BaseEngineController_LS_DWork.s761_motohawk_trigger_DWORK1 = 1;

  /* Level2 S-Function Block: '<S763>/motohawk_trigger' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_20XRTI_PERIODIC_8664p0002 */
  BaseEngineController_LS_DWork.s763_motohawk_trigger_DWORK1 = 1;
}

/* Disable for function-call system: '<Root>/Foreground' */
void BaseEngineController_LS_Foreground_Disable(void)
{
  int32_T i;

  /* Level2 S-Function Block: '<S455>/motohawk_trigger' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_5XRTI_PERIODIC_8400p0005 */
  BaseEngineController_LS_DWork.s455_motohawk_trigger_DWORK1 = 0;

  /* Level2 S-Function Block: '<S417>/motohawk_trigger' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_TDC_EVENT_7192p0001 */
  BaseEngineController_LS_DWork.s417_motohawk_trigger_DWORK1 = 0;

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

  /* Level2 S-Function Block: '<S633>/motohawk_trigger5' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_MID_TDC_EVENT_8120p0005 */
  BaseEngineController_LS_DWork.s633_motohawk_trigger5_DWORK1 = 0;

  /* Disable for Enabled SubSystem: '<S368>/Capture Signal At Startup' */

  /* Disable for Enabled SubSystem: '<S375>/Collect Average' */
  BaseEngineController_LS_CollectAverage_Disable
    (&BaseEngineController_LS_DWork.s375_CollectAverage);

  /* End of Disable for SubSystem: '<S375>/Collect Average' */
  BaseEngineController_LS_DWork.s368_CaptureSignalAtStartup_MODE = FALSE;

  /* End of Disable for SubSystem: '<S368>/Capture Signal At Startup' */

  /* Disable for Enabled SubSystem: '<S372>/Capture ECT At Startup' */

  /* Disable for Enabled SubSystem: '<S413>/Collect Average' */
  BaseEngineController_LS_CollectAverage_Disable
    (&BaseEngineController_LS_DWork.s413_CollectAverage);

  /* End of Disable for SubSystem: '<S413>/Collect Average' */
  BaseEngineController_LS_DWork.s372_CaptureECTAtStartup_MODE = FALSE;

  /* End of Disable for SubSystem: '<S372>/Capture ECT At Startup' */

  /* Disable for Enabled SubSystem: '<S372>/Capture IAT At Startup' */

  /* Disable for Enabled SubSystem: '<S414>/Collect Average' */
  BaseEngineController_LS_CollectAverage_Disable
    (&BaseEngineController_LS_DWork.s414_CollectAverage);

  /* End of Disable for SubSystem: '<S414>/Collect Average' */
  BaseEngineController_LS_DWork.s372_CaptureIATAtStartup_MODE = FALSE;

  /* End of Disable for SubSystem: '<S372>/Capture IAT At Startup' */

  /* Disable for Enabled SubSystem: '<S15>/Run' */

  /* Level2 S-Function Block: '<S136>/motohawk_trigger1' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_5XRTI_PERIODIC_4910p0004 */
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

  /* Level2 S-Function Block: '<S455>/motohawk_trigger1' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_5XRTI_PERIODIC_11343p0129 */
  BaseEngineController_LS_DWork.s455_motohawk_trigger1_DWORK1 = 0;

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
  /* Disable for Trigger_FGND_TDC1_EVENT_1084p0001 */
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

  /* Level2 S-Function Block: '<S14>/motohawk_trigger1' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_5XRTI_PERIODIC_1412p0001 */
  BaseEngineController_LS_DWork.s14_motohawk_trigger1_DWORK1 = 0;

  /* Level2 S-Function Block: '<S14>/motohawk_trigger' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_5XRTI_PERIODIC_1411p0001 */
  BaseEngineController_LS_DWork.s14_motohawk_trigger_DWORK1 = 0;

  /* Level2 S-Function Block: '<S13>/motohawk_trigger' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_5XRTI_PERIODIC_9680p0004 */

  /* Disable for function-call system: '<S13>/Coil Control' */

  /* Disable for Atomic SubSystem: '<S888>/EST Enable TDC Counter' */

  /* Level2 S-Function Block: '<S893>/motohawk_trigger1' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_TDC_EVENT_9152p0001 */
  BaseEngineController_LS_DWork.s893_motohawk_trigger1_DWORK1 = 0;

  /* End of Disable for SubSystem: '<S888>/EST Enable TDC Counter' */
  BaseEngineController_LS_DWork.s13_motohawk_trigger_DWORK1 = 0;

  /* Disable for Enabled SubSystem: '<S14>/Electronic Throttle Controller' */
  /* Disable for Enabled SubSystem: '<S31>/PassThrough' */
  /* Disable for Outport: '<S52>/Out1' */
  BaseEngineController_LS_B.s52_In1 = 10.0;
  BaseEngineController_LS_DWork.s31_PassThrough_MODE = FALSE;

  /* End of Disable for SubSystem: '<S31>/PassThrough' */
  BaseEngineController_LS_DWork.s14_ElectronicThrottleController_MODE = FALSE;

  /* End of Disable for SubSystem: '<S14>/Electronic Throttle Controller' */

  /* Level2 S-Function Block: '<S761>/motohawk_trigger' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_20XRTI_PERIODIC_8534p0002 */
  BaseEngineController_LS_DWork.s761_motohawk_trigger_DWORK1 = 0;

  /* Level2 S-Function Block: '<S763>/motohawk_trigger' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_20XRTI_PERIODIC_8664p0002 */
  BaseEngineController_LS_DWork.s763_motohawk_trigger_DWORK1 = 0;
}

/* Start for function-call system: '<Root>/Foreground' */
void BaseEngineController_LS_Foreground_Start(void)
{
  /* Start for S-Function (motohawk_sfun_trigger): '<S455>/motohawk_trigger' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_5XRTI_PERIODIC_8400p0005 */
  BaseEngineController_LS_DWork.s455_motohawk_trigger_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S417>/motohawk_trigger' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_TDC_EVENT_7192p0001 */
  BaseEngineController_LS_DWork.s417_motohawk_trigger_DWORK1 = 0;

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

  /* Start for Atomic SubSystem: '<S372>/Base TPS Request' */

  /* Start for Enabled SubSystem: '<S412>/PassThrough1' */
  BaseEngineController_LS_PassThrough1_Start
    (&BaseEngineController_LS_B.s412_Merge);

  /* End of Start for SubSystem: '<S412>/PassThrough1' */

  /* Start for Enabled SubSystem: '<S412>/PassThrough2' */
  BaseEngineController_LS_PassThrough1_Start
    (&BaseEngineController_LS_B.s412_Merge);

  /* End of Start for SubSystem: '<S412>/PassThrough2' */

  /* End of Start for SubSystem: '<S372>/Base TPS Request' */

  /* Start for S-Function (motohawk_sfun_trigger): '<S633>/motohawk_trigger5' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_MID_TDC_EVENT_8120p0005 */
  BaseEngineController_LS_DWork.s633_motohawk_trigger5_DWORK1 = 0;

  /* Start for Enabled SubSystem: '<S368>/Capture Signal At Startup' */

  /* Start for Enabled SubSystem: '<S375>/Collect Average' */
  BaseEngineController_LS_CollectAverage_Start
    (&BaseEngineController_LS_DWork.s375_CollectAverage);

  /* End of Start for SubSystem: '<S375>/Collect Average' */

  /* InitializeConditions for UnitDelay: '<S375>/Unit Delay' */
  BaseEngineController_LS_DWork.s375_UnitDelay_DSTATE = 0;

  /* End of Start for SubSystem: '<S368>/Capture Signal At Startup' */

  /* Start for Enabled SubSystem: '<S393>/IncreasingFilter' */

  /* VirtualOutportStart for Outport: '<S397>/Out1' */
  BaseEngineController_LS_B.s393_Merge = 0.005;

  /* End of Start for SubSystem: '<S393>/IncreasingFilter' */

  /* Start for Enabled SubSystem: '<S393>/DecreasingFilter' */

  /* VirtualOutportStart for Outport: '<S395>/Out1' */
  BaseEngineController_LS_B.s393_Merge = 0.005;

  /* End of Start for SubSystem: '<S393>/DecreasingFilter' */

  /* Start for Enabled SubSystem: '<S394>/IncreasingFilter' */

  /* VirtualOutportStart for Outport: '<S400>/Out1' */
  BaseEngineController_LS_B.s394_Merge = 0.005;

  /* End of Start for SubSystem: '<S394>/IncreasingFilter' */

  /* Start for Enabled SubSystem: '<S394>/DecreasingFilter' */

  /* VirtualOutportStart for Outport: '<S398>/Out1' */
  BaseEngineController_LS_B.s394_Merge = 0.005;

  /* End of Start for SubSystem: '<S394>/DecreasingFilter' */

  /* Start for Enabled SubSystem: '<S372>/Capture ECT At Startup' */

  /* Start for Enabled SubSystem: '<S413>/Collect Average' */
  BaseEngineController_LS_CollectAverage_Start
    (&BaseEngineController_LS_DWork.s413_CollectAverage);

  /* End of Start for SubSystem: '<S413>/Collect Average' */

  /* InitializeConditions for UnitDelay: '<S413>/Unit Delay' */
  BaseEngineController_LS_DWork.s413_UnitDelay_DSTATE = 0;

  /* End of Start for SubSystem: '<S372>/Capture ECT At Startup' */

  /* Start for Enabled SubSystem: '<S372>/Capture IAT At Startup' */

  /* Start for Enabled SubSystem: '<S414>/Collect Average' */
  BaseEngineController_LS_CollectAverage_Start
    (&BaseEngineController_LS_DWork.s414_CollectAverage);

  /* End of Start for SubSystem: '<S414>/Collect Average' */

  /* InitializeConditions for UnitDelay: '<S414>/Unit Delay' */
  BaseEngineController_LS_DWork.s414_UnitDelay_DSTATE = 0;

  /* End of Start for SubSystem: '<S372>/Capture IAT At Startup' */

  /* Start for Enabled SubSystem: '<S15>/Run' */

  /* Start for S-Function (motohawk_sfun_trigger): '<S136>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_5XRTI_PERIODIC_4910p0004 */
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

  /* Start for S-Function (motohawk_sfun_trigger): '<S455>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_5XRTI_PERIODIC_11343p0129 */
  BaseEngineController_LS_DWork.s455_motohawk_trigger1_DWORK1 = 0;

  /* Start for Enabled SubSystem: '<S22>/SequenceCutMachine' */

  /* Start for function-call system: '<S102>/SequencyCutMachine' */

  /* VirtualOutportStart for Outport: '<S121>/CycleCounter' */
  BaseEngineController_LS_B.s121_Switch = 1U;

  /* VirtualOutportStart for Outport: '<S121>/CycleNumber' */
  BaseEngineController_LS_B.s121_Switch1 = 1.0;

  /* Clear enable/disable state for embedded trigger Trigger_FGND_TDC1_EVENT_1084p0001 */
  BaseEngineController_LS_DWork.s102_motohawk_trigger_DWORK1 = 0;

  /* InitializeConditions for UnitDelay: '<S102>/Unit Delay2' */
  BaseEngineController_LS_DWork.s102_UnitDelay2_DSTATE = 1.0;

  /* InitializeConditions for UnitDelay: '<S102>/Unit Delay1' */
  BaseEngineController_LS_DWork.s102_UnitDelay1_DSTATE = 1U;

  /* End of Start for SubSystem: '<S22>/SequenceCutMachine' */

  /* Start for S-Function (motohawk_sfun_trigger): '<S14>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_5XRTI_PERIODIC_1412p0001 */
  BaseEngineController_LS_DWork.s14_motohawk_trigger1_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S14>/motohawk_trigger' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_5XRTI_PERIODIC_1411p0001 */
  BaseEngineController_LS_DWork.s14_motohawk_trigger_DWORK1 = 0;

  /* Start for function-call system: '<S13>/Coil Control' */

  /* Start for Atomic SubSystem: '<S888>/EST Enable TDC Counter' */

  /* Start for S-Function (motohawk_sfun_trigger): '<S893>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_TDC_EVENT_9152p0001 */
  BaseEngineController_LS_DWork.s893_motohawk_trigger1_DWORK1 = 0;

  /* End of Start for SubSystem: '<S888>/EST Enable TDC Counter' */

  /* S-Function Block: <S862>/Spark Sequence */
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

  /* Clear enable/disable state for embedded trigger Trigger_FGND_5XRTI_PERIODIC_9680p0004 */
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

  /* S-Function Block: <S868>/Injector Sequence */
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

    BaseEngineController_LS_DWork.s868_InjectorSequence_DWORK1[0] = 0;
    BaseEngineController_LS_DWork.s868_InjectorSequence_DWORK1[1] = 0;
    BaseEngineController_LS_DWork.s868_InjectorSequence_DWORK1[2] = 0;
    BaseEngineController_LS_DWork.s868_InjectorSequence_DWORK1[3] = 0;
    BaseEngineController_LS_DWork.s868_InjectorSequence_DWORK1[4] = 0;
    BaseEngineController_LS_DWork.s868_InjectorSequence_DWORK1[5] = 0;
    BaseEngineController_LS_DWork.s868_InjectorSequence_DWORK1[6] = 0;
    BaseEngineController_LS_DWork.s868_InjectorSequence_DWORK1[7] = 0;
    BaseEngineController_LS_DWork.s868_InjectorSequence_DWORK2 = 0;
  }

  /* Start for Enabled SubSystem: '<S449>/Triggered Subsystem' incorporates:
   *  Start for S-Function (fcncallgen): '<S450>/Function-Call Generator'
   *  Start for SubSystem: '<S11>/Diagnostics'
   */

  /* Start for Enabled SubSystem: '<S449>/Triggered Subsystem' incorporates:
   *  InitializeConditions for S-Function (fcncallgen): '<S450>/Function-Call Generator'
   *  InitializeConditions for SubSystem: '<S11>/Diagnostics'
   */

  /* S-Function Block: <S335>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s335_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S334>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s334_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S338>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s338_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S337>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s337_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S339>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s339_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S345>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s345_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S349>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s349_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S350>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s350_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S351>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s351_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S367>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s367_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S366>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s366_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S342>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s342_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S347>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s347_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* Start for S-Function (motohawk_sfun_trigger): '<S761>/motohawk_trigger' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_20XRTI_PERIODIC_8534p0002 */
  BaseEngineController_LS_DWork.s761_motohawk_trigger_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S763>/motohawk_trigger' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_20XRTI_PERIODIC_8664p0002 */
  BaseEngineController_LS_DWork.s763_motohawk_trigger_DWORK1 = 0;
}

/* Output and update for function-call system: '<Root>/Foreground' */
void BaseEngineController_LS_Foreground(void)
{
  /* local block i/o variables */
  real_T rtb_UnitDelay_jw;
  real_T rtb_Merge_j;
  real_T rtb_motohawk_delta_time_o;
  real_T rtb_DataTypeConversion_f;
  real_T rtb_UnitDelay_jb;
  real_T rtb_Merge_c;
  real_T rtb_Sum1_b4;
  real_T rtb_UnitDelay1_ok;
  real_T rtb_Merge_m;
  real_T rtb_DataTypeConversion_hd;
  real_T rtb_UnitDelay_m;
  real_T rtb_Merge_oa;
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
  real_T rtb_Merge_gq;
  real_T rtb_UnitDelay1_m;
  real_T rtb_Merge_h;
  real_T rtb_Merge_as;
  real_T rtb_UnitDelay1_jn;
  real_T rtb_Merge_ox;
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
  real_T rtb_Gain;
  real_T rtb_motohawk_data_read_i4;
  real_T rtb_MathFunction;
  real_T rtb_UnitDelay1_pd;
  real_T rtb_Merge_b3f;
  real_T rtb_UnitDelay1_aa;
  real_T rtb_Merge_ol;
  real_T rtb_Product_hd;
  real_T rtb_motohawk_data_read2_m;
  real_T rtb_motohawk_data_read1_ka;
  real_T rtb_motohawk_data_read_bv;
  real_T rtb_motohawk_data_read_ki;
  real_T rtb_motohawk_data_read1_bz;
  real_T rtb_motohawk_data_read2_h;
  real_T rtb_motohawk_data_read_l;
  real_T rtb_motohawk_data_read1_b3;
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
  real_T rtb_motohawk_delta_time_nr;
  real_T rtb_motohawk_delta_time_lw;
  real_T rtb_Saturation_oy;
  real_T rtb_Saturation_d;
  real_T rtb_motohawk_delta_time_fj;
  real_T rtb_motohawk_delta_time_i0;
  real_T rtb_motohawk_delta_time_k;
  real_T rtb_Saturation_nn;
  real_T rtb_Saturation_a0;
  real_T rtb_Saturation_f;
  real_T rtb_motohawk_delta_time_eae;
  real_T rtb_Saturation_p;
  real_T rtb_motohawk_delta_time_ij;
  real_T rtb_motohawk_delta_time_hv;
  real_T rtb_motohawk_delta_time_hc;
  real_T rtb_Saturation_j;
  real_T rtb_Saturation_em;
  real_T rtb_Saturation_i;
  real_T rtb_motohawk_delta_time_ks;
  real_T rtb_motohawk_delta_time_dj;
  real_T rtb_Saturation_or;
  real_T rtb_Saturation_ph;
  real_T rtb_motohawk_delta_time_a;
  real_T rtb_motohawk_interpolation_1d_n;
  real_T rtb_Saturation_kn;
  real_T rtb_motohawk_interpolation_2d_h;
  real_T rtb_motohawk_delta_time_l0;
  real_T rtb_Divide_p;
  real_T rtb_motohawk_interpolation_1d_kd;
  real_T rtb_Divide1;
  real_T rtb_motohawk_delta_time_op;
  real_T rtb_motohawk_delta_time_cj;
  real_T rtb_Saturation_d1;
  real_T rtb_motohawk_interpolation_2d_f;
  real_T rtb_motohawk_interpolation_2d_fg;
  real_T rtb_motohawk_interpolation_2d_o;
  real_T rtb_motohawk_interpolation_1d2_l;
  real_T rtb_motohawk_interpolation_1d3_n;
  real_T rtb_motohawk_interpolation_1d1_g;
  real_T rtb_motohawk_interpolation_1d4_d;
  real_T rtb_motohawk_interpolation_1d5;
  real_T rtb_motohawk_interpolation_1d6;
  real_T rtb_motohawk_interpolation_1d_p;
  real_T rtb_motohawk_delta_time_p;
  real_T rtb_motohawk_interpolation_1d_n0;
  real_T rtb_motohawk_delta_time_eo;
  real_T rtb_MinMax1_d;
  real_T rtb_motohawk_delta_time_id;
  real_T rtb_Sum2_o;
  real_T rtb_motohawk_interpolation_1d2_l0;
  real_T rtb_motohawk_interpolation_1d3_l;
  real_T rtb_Product4_k;
  real_T rtb_motohawk_delta_time_ao;
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
  real_T rtb_motohawk_interpolation_2d2;
  real_T rtb_motohawk_interpolation_2d1_p;
  real_T rtb_motohawk_delta_time_m3;
  real_T rtb_Saturation_gs;
  real_T rtb_EOI;
  real_T rtb_PrimaryPulseInjectionTiming;
  real_T rtb_motohawk_interpolation_2d2_a;
  real_T rtb_motohawk_interpolation_2d1_a;
  real_T rtb_motohawk_interpolation_2d_o2;
  real_T rtb_motohawk_interpolation_2d_n;
  real_T rtb_motohawk_interpolation_2d_a;
  real_T rtb_MinMax1_if;
  real_T rtb_motohawk_delta_time_nb;
  real_T rtb_Saturation_cv;
  real_T rtb_motohawk_interpolation_1d1_gy;
  real_T rtb_motohawk_interpolation_2d2_f;
  real_T rtb_WarmUpRatio;
  real_T rtb_motohawk_interpolation_1d_fx;
  real_T rtb_IATEnrichment;
  real_T rtb_CATEnrichment;
  real_T rtb_motohawk_interpolation_2d3;
  real_T rtb_WarmUptimeRatio;
  real_T rtb_Product_bk;
  real_T rtb_motohawk_interpolation_2d_o1;
  real_T rtb_motohawk_interpolation_1d_hw;
  real_T rtb_motohawk_interpolation_1d1_os;
  real_T rtb_motohawk_interpolation_2d_g;
  real_T rtb_motohawk_interpolation_2d1_b;
  real_T rtb_motohawk_interpolation_1d4_m;
  real_T rtb_motohawk_interpolation_1d5_j;
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
  real_T rtb_Saturation_le;
  real_T rtb_motohawk_interpolation_2d_gj;
  real_T rtb_motohawk_interpolation_1d2_d;
  real_T rtb_motohawk_replicate[8];
  real_T rtb_motohawk_interpolation_1d1_ku;
  real_T rtb_MinMax_gy;
  real_T rtb_DataTypeConversion_ik;
  real_T rtb_Switch_m1;
  real_T rtb_Sum2_d;
  real_T rtb_Product_mq;
  real_T rtb_UnitDelay_gh;
  real_T rtb_motohawk_replicate1;
  real_T rtb_DataTypeConversion_gx;
  real_T rtb_DataTypeConversion_fq;
  real_T rtb_DataTypeConversion_c4;
  real_T rtb_Product5_o;
  real_T rtb_Switch_bn;
  real_T rtb_Switch_hp;
  real_T rtb_motohawk_interpolation_1d3_a;
  real_T rtb_DataTypeConversion_e;
  real_T rtb_Abs_co;
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
  int16_T rtb_DataTypeConversion3_c;
  int16_T rtb_DataTypeConversion3_k;
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
  uint16_T rtb_motohawk_data_read1_p;
  index_T rtb_motohawk_prelookup_n;
  index_T rtb_motohawk_prelookup_aq;
  index_T rtb_motohawk_prelookup_he;
  index_T rtb_motohawk_prelookup2;
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
  index_T rtb_motohawk_prelookup_l;
  index_T rtb_motohawk_prelookup1_d;
  index_T rtb_motohawk_prelookup_gv;
  index_T rtb_motohawk_prelookup_col;
  index_T rtb_motohawk_prelookup_row;
  index_T rtb_motohawk_prelookup_jn;
  index_T rtb_motohawk_prelookup_col_h;
  index_T rtb_motohawk_prelookup_row_g;
  index_T rtb_motohawk_prelookup_col_k;
  index_T rtb_motohawk_prelookup_row_c;
  index_T rtb_motohawk_prelookup_col_d;
  index_T rtb_motohawk_prelookup_row_l;
  index_T rtb_motohawk_prelookup_f;
  index_T rtb_motohawk_prelookup_p;
  index_T rtb_motohawk_prelookup1_n;
  index_T rtb_motohawk_prelookup_br;
  index_T rtb_ITermIdx;
  index_T rtb_motohawk_prelookup_hf;
  index_T rtb_motohawk_prelookup_ag;
  index_T rtb_motohawk_prelookup1_jq;
  index_T rtb_motohawk_prelookup3;
  index_T rtb_motohawk_prelookup_col_dt;
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
  uint8_T rtb_motohawk_data_read13;
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
  boolean_T rtb_RelationalOperator4_b;
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
  boolean_T rtb_RelationalOperator5_o;
  boolean_T rtb_LogicalOperator2_md;
  boolean_T rtb_RelationalOperator5_f;
  boolean_T rtb_RelationalOperator3_mn;
  boolean_T rtb_RelationalOperator4_f;
  boolean_T rtb_RelationalOperator5_ok;
  boolean_T rtb_RelationalOperator5_j;
  boolean_T rtb_RelationalOperator6;
  boolean_T rtb_RelationalOperator9_g;
  boolean_T rtb_RelationalOperator5_aj;
  boolean_T rtb_RelationalOperator2_c4;
  boolean_T rtb_LogicalOperator2_ie;
  boolean_T rtb_LogicalOperator4_jz;
  boolean_T rtb_RelationalOperator5_jx;
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
  boolean_T rtb_LogicalOperator_mh;
  boolean_T rtb_AND1[8];
  boolean_T rtb_LogicalOperator_iy;
  boolean_T rtb_LogicalOperator2_ig;
  boolean_T rtb_AboveHiTarget;
  boolean_T rtb_CombinatorialLogic_da[2];
  boolean_T rtb_RelationalOperator2_py;
  boolean_T rtb_Switch_oh;
  boolean_T rtb_RelOp_mp;
  boolean_T rtb_CombinatorialLogic_l[2];
  boolean_T rtb_LogicalOperator3_cj;
  boolean_T rtb_BelowLoTarget_j;
  boolean_T rtb_BelowLoTarget_b;
  boolean_T rtb_CombinatorialLogic_c[2];
  boolean_T rtb_AboveHiTarget_a;
  boolean_T rtb_RelationalOperator6_h0;
  boolean_T rtb_RelationalOperator5_fz;
  real_T minV;
  real_T minV_0;
  int32_T maxV;
  real_T rtb_UnitDelay_ju;
  real_T rtb_UnitDelay_cf;
  boolean_T rtb_LogicalOperator6_b;
  boolean_T rtb_LogicalOperator1_br;
  boolean_T rtb_LogicalOperator1_c;
  boolean_T rtb_RelOp_pu;
  real_T rtb_UnitDelay_nd;
  real_T rtb_UnitDelay1_h;
  real_T rtb_Sum2_gr;
  real_T rtb_Sum1_mz;
  boolean_T rtb_Merge_n2;
  real_T rtb_Switch_f;
  real_T rtb_Merge_b3;
  boolean_T rtb_RelationalOperator_e5;
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
  real_T rtb_UnitDelay4_i;
  real_T rtb_UnitDelay1_k;
  real_T rtb_UnitDelay3_j;
  real_T rtb_UnitDelay4_ie;
  real_T rtb_APP2;
  real_T rtb_Sum1_g3;
  real_T rtb_Sum1_nb;
  real_T rtb_Sum1_m;
  real_T rtb_Sum1_li;
  real_T rtb_Sum1_du;
  real_T rtb_Sum1_ir;
  real_T rtb_Sum1_nl;
  real_T rtb_Sum1_d4;
  real_T rtb_Sum1_fm;
  real_T rtb_Sum1_mzy;
  real_T rtb_Sum1_c;
  real_T rtb_Sum1_o;
  uint32_T rtb_Switch_kj;
  real_T rtb_Sum1_m3;
  real_T rtb_DataTypeConversion_m;
  real_T rtb_Switch1_f;
  real_T rtb_Product6_m;
  real_T rtb_Product7_i;
  real_T rtb_Product5_j;
  boolean_T rtb_RelationalOperator3_bp;
  uint16_T rtb_Product2_o;
  int8_T rtb_Add_k;
  int8_T rtb_Sum_l3;
  real_T rtb_Product_oj;
  real_T rtb_Switch_k2;
  int8_T rtb_Switch_d4[32];
  real_T rtb_Switch_c;
  boolean_T rtb_Switch1_mj;
  boolean_T rtb_Switch1_e;
  boolean_T rtb_Switch1_ow;
  boolean_T rtb_Switch1_l3;
  boolean_T rtb_Switch1_bv;
  boolean_T rtb_Switch1_l;
  uint8_T rtb_Gain5;
  uint8_T rtb_Gain4;
  uint8_T rtb_Gain3_m;
  uint8_T rtb_Gain2_m;
  uint8_T rtb_Gain1;
  int32_T i;
  real_T rtb_DesiredLambda_idx;
  real_T rtb_DesiredLambda_idx_0;
  real_T y;
  real_T u;

  /* S-Function (motohawk_sfun_trigger): '<S455>/motohawk_trigger' */
  /* Enable for Trigger_FGND_5XRTI_PERIODIC_8400p0005 */
  if (BaseEngineController_LS_DWork.s455_motohawk_trigger_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s455_motohawk_trigger_DWORK1 = 1;
  }

  /* UnitDelay: '<S577>/Unit Delay' */
  rtb_UnitDelay_ju = BaseEngineController_LS_DWork.s577_UnitDelay_DSTATE;

  /* UnitDelay: '<S615>/Unit Delay' */
  rtb_UnitDelay_cf = BaseEngineController_LS_DWork.s615_UnitDelay_DSTATE;

  /* S-Function Block: <S606>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s606_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_ik = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S606>/Product' incorporates:
   *  MinMax: '<S606>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S606>/motohawk_calibration'
   */
  rtb_DataTypeConversion_ik /= (rtb_DataTypeConversion_ik >=
    (VSPDFiltConst_DataStore())) || rtIsNaN((VSPDFiltConst_DataStore())) ?
    rtb_DataTypeConversion_ik : (VSPDFiltConst_DataStore());

  /* Logic: '<S576>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S576>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S576>/motohawk_fault_status4'
   */
  rtb_LogicalOperator_mh = (IsFaultActive(122) || IsFaultActive(123));

  /* Logic: '<S576>/Logical Operator6' */
  rtb_LogicalOperator6_b = !rtb_LogicalOperator_mh;

  /* Logic: '<S576>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S576>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S576>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_br = (IsFaultSuspected(122) || IsFaultSuspected(123));

  /* S-Function Block: <S452>/motohawk_frequency_in1 Frequency Input Get: VSPD_Pin */
  {
    extern NativeError_S VSPD_Pin_FrequencyInput_Get(uint32_T *frequency,
      int16_T *duty_cycle);
    VSPD_Pin_FrequencyInput_Get(&rtb_DataTypeConversion6,
      &rtb_DataTypeConversion2_pj);
  }

  /* DataTypeConversion: '<S452>/Data Type Conversion1' */
  rtb_DataTypeConversion_e = (real_T)rtb_DataTypeConversion6;

  /* Gain: '<S452>/Gain1' */
  BaseEngineController_LS_B.s452_Gain1 = 0.01 * rtb_DataTypeConversion_e;

  /* S-Function Block: <S611>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (VSPDIdx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s452_Gain1, (VSPDIdxArr_DataStore()), 13,
       (VSPDIdx_DataStore()));
    rtb_motohawk_prelookup_n = (VSPDIdx_DataStore());
  }

  /* S-Function Block: <S611>/motohawk_interpolation_1d */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    BaseEngineController_LS_B.s611_motohawk_interpolation_1d =
      TableInterpolation1D_real_T(rtb_motohawk_prelookup_n, (real_T *)
      ((VSPDTbl_DataStore())), 13);
  }

  /* UnitDelay: '<S576>/Unit Delay' */
  rtb_UnitDelay_jw = BaseEngineController_LS_DWork.s576_UnitDelay_DSTATE;

  /* If: '<S576>/If' incorporates:
   *  Logic: '<S576>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_b && rtb_LogicalOperator1_br) {
    /* Outputs for IfAction SubSystem: '<S576>/If Action Subsystem' incorporates:
     *  ActionPort: '<S607>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay_jw, &rtb_Merge_j);

    /* End of Outputs for SubSystem: '<S576>/If Action Subsystem' */
  } else if (rtb_LogicalOperator_mh) {
    /* Outputs for IfAction SubSystem: '<S576>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S608>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((VSPDDefault_DataStore()),
      &rtb_Merge_j);

    /* End of Outputs for SubSystem: '<S576>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S576>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S609>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      (BaseEngineController_LS_B.s611_motohawk_interpolation_1d, &rtb_Merge_j);

    /* End of Outputs for SubSystem: '<S576>/If Action Subsystem2' */
  }

  /* End of If: '<S576>/If' */

  /* Sum: '<S612>/Sum1' incorporates:
   *  Constant: '<S612>/Constant'
   *  Product: '<S612>/Product'
   *  Product: '<S612>/Product1'
   *  Sum: '<S612>/Sum'
   *  UnitDelay: '<S612>/Unit Delay'
   */
  rtb_Sum1_g3 = (1.0 - rtb_DataTypeConversion_ik) *
    BaseEngineController_LS_DWork.s612_UnitDelay_DSTATE + rtb_Merge_j *
    rtb_DataTypeConversion_ik;

  /* If: '<S610>/If' incorporates:
   *  Inport: '<S613>/In1'
   *  Inport: '<S614>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S610>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S610>/override_enable'
   */
  if ((VSPD_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S610>/NewValue' incorporates:
     *  ActionPort: '<S613>/Action Port'
     */
    BaseEngineController_LS_B.s610_Merge = (VSPD_new_DataStore());

    /* End of Outputs for SubSystem: '<S610>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S610>/OldValue' incorporates:
     *  ActionPort: '<S614>/Action Port'
     */
    BaseEngineController_LS_B.s610_Merge = rtb_Sum1_g3;

    /* End of Outputs for SubSystem: '<S610>/OldValue' */
  }

  /* End of If: '<S610>/If' */

  /* Sum: '<S615>/Sum2' */
  rtb_UnitDelay_cf = BaseEngineController_LS_B.s610_Merge - rtb_UnitDelay_cf;

  /* S-Function Block: <S615>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s615_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_o = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S615>/Product' incorporates:
   *  S-Function (motohawk_sfun_delta_time): '<S615>/motohawk_delta_time'
   */
  rtb_DataTypeConversion_e = rtb_UnitDelay_cf / rtb_motohawk_delta_time_o;

  /* Abs: '<S577>/Abs' */
  rtb_DataTypeConversion_e = fabs(rtb_DataTypeConversion_e);

  /* RelationalOperator: '<S577>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S577>/motohawk_calibration2'
   */
  rtb_LogicalOperator6_b = (rtb_DataTypeConversion_e >=
    (VSPD_RateReject_DataStore()));

  /* Logic: '<S577>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S577>/motohawk_calibration1'
   */
  BaseEngineController_LS_B.s577_LogicalOperator = ((rtb_LogicalOperator6_b &&
    (((uint8_T)(VSPD_RateReject_Enable_DataStore())) != 0)));

  /* Sum: '<S577>/Sum' incorporates:
   *  UnitDelay: '<S577>/Unit Delay1'
   */
  rtb_DataTypeConversion_e = BaseEngineController_LS_B.s610_Merge -
    BaseEngineController_LS_DWork.s577_UnitDelay1_DSTATE;

  /* Abs: '<S577>/Abs2' */
  rtb_DataTypeConversion_e = fabs(rtb_DataTypeConversion_e);

  /* RelationalOperator: '<S577>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S577>/motohawk_calibration4'
   */
  rtb_LogicalOperator6_b = (rtb_DataTypeConversion_e >=
    (VPSD_ChangeReject_DataStore()));

  /* Abs: '<S577>/Abs1' */
  rtb_DataTypeConversion_e = fabs(BaseEngineController_LS_B.s610_Merge);

  /* RelationalOperator: '<S577>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S577>/motohawk_calibration3'
   */
  rtb_LogicalOperator1_br = (rtb_DataTypeConversion_e <=
    (VSPD_ZeroSpeed_DataStore()));

  /* Logic: '<S577>/Logical Operator3' incorporates:
   *  Logic: '<S577>/Logical Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S577>/motohawk_calibration5'
   */
  BaseEngineController_LS_B.s577_LogicalOperator3 = ((rtb_LogicalOperator6_b &&
    rtb_LogicalOperator1_br && (((uint8_T)(VSPD_ChangeReject_Enable_DataStore()))
    != 0)));

  /* Logic: '<S577>/Logical Operator1' */
  rtb_LogicalOperator1_c = (BaseEngineController_LS_B.s577_LogicalOperator ||
    BaseEngineController_LS_B.s577_LogicalOperator3);

  /* Logic: '<S616>/Logical Operator' incorporates:
   *  Logic: '<S616>/Logical Operator2'
   *  UnitDelay: '<S616>/Unit Delay'
   */
  rtb_LogicalOperator_mh = ((!rtb_LogicalOperator1_c) &&
    BaseEngineController_LS_DWork.s616_UnitDelay_DSTATE);

  /* UnitDelay: '<S577>/Unit Delay2' */
  rtb_RelationalOperator6_h0 =
    BaseEngineController_LS_DWork.s577_UnitDelay2_DSTATE;

  /* Memory: '<S617>/Memory' */
  rtb_RelationalOperator5_fz =
    BaseEngineController_LS_DWork.s617_Memory_PreviousInput;

  /* CombinatorialLogic: '<S617>/Logic' */
  {
    uint_T rowidx= 0;

    /* Compute the truth table row index corresponding to the input */
    rowidx = (rowidx << 1) + (uint_T)(rtb_LogicalOperator_mh != 0);
    rowidx = (rowidx << 1) + (uint_T)(rtb_RelationalOperator6_h0 != 0);
    rowidx = (rowidx << 1) + (uint_T)(rtb_RelationalOperator5_fz != 0);

    /* Copy the appropriate row of the table into the block output vector */
    rtb_Logic_j[0] = BaseEngineController_LS_ConstP.pooled906[rowidx];
    rtb_Logic_j[1] = BaseEngineController_LS_ConstP.pooled906[rowidx + 8];
  }

  /* Switch: '<S577>/Switch' incorporates:
   *  Logic: '<S577>/Logical Operator5'
   */
  if (rtb_Logic_j[0] || rtb_LogicalOperator1_c) {
    BaseEngineController_LS_B.s577_Switch = rtb_UnitDelay_ju;
  } else {
    BaseEngineController_LS_B.s577_Switch = BaseEngineController_LS_B.s610_Merge;
  }

  /* End of Switch: '<S577>/Switch' */
  /* Logic: '<S762>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S762>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S762>/motohawk_fault_status4'
   */
  rtb_RelationalOperator5_fz = (IsFaultActive(12) || IsFaultActive(13));

  /* Logic: '<S762>/Logical Operator6' */
  rtb_LogicalOperator6_b = !rtb_RelationalOperator5_fz;

  /* Logic: '<S762>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S762>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S762>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_br = (IsFaultSuspected(12) || IsFaultSuspected(13));

  /* S-Function Block: <S456>/motohawk_ain2 Resource: APP2AnalogInput */
  {
    extern NativeError_S APP2AnalogInput_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    APP2AnalogInput_AnalogInput_Get
      (&BaseEngineController_LS_B.s456_motohawk_ain2, NULL);
  }

  /* DataTypeConversion: '<S762>/Data Type Conversion' */
  rtb_DataTypeConversion_f = (real_T)
    BaseEngineController_LS_B.s456_motohawk_ain2;

  /* S-Function Block: <S786>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (APP2Idx_DataStore()) = TablePrelookup_real_T(rtb_DataTypeConversion_f,
      (APP2IdxArr_DataStore()), 9, (APP2Idx_DataStore()));
    rtb_motohawk_prelookup_aq = (APP2Idx_DataStore());
  }

  /* S-Function Block: <S786>/motohawk_interpolation_1d */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    BaseEngineController_LS_B.s786_motohawk_interpolation_1d =
      TableInterpolation1D_real_T(rtb_motohawk_prelookup_aq, (real_T *)
      ((APP2Tbl_DataStore())), 9);
  }

  /* UnitDelay: '<S762>/Unit Delay' */
  rtb_UnitDelay_jb = BaseEngineController_LS_DWork.s762_UnitDelay_DSTATE;

  /* If: '<S762>/If' incorporates:
   *  Logic: '<S762>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_b && rtb_LogicalOperator1_br) {
    /* Outputs for IfAction SubSystem: '<S762>/If Action Subsystem' incorporates:
     *  ActionPort: '<S781>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay_jb, &rtb_Merge_c);

    /* End of Outputs for SubSystem: '<S762>/If Action Subsystem' */
  } else if (rtb_RelationalOperator5_fz) {
    /* Outputs for IfAction SubSystem: '<S762>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S782>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((APP2Default_DataStore()),
      &rtb_Merge_c);

    /* End of Outputs for SubSystem: '<S762>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S762>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S783>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      (BaseEngineController_LS_B.s786_motohawk_interpolation_1d, &rtb_Merge_c);

    /* End of Outputs for SubSystem: '<S762>/If Action Subsystem2' */
  }

  /* End of If: '<S762>/If' */

  /* MinMax: '<S785>/MinMax' incorporates:
   *  Constant: '<S762>/Constant1'
   */
  rtb_DataTypeConversion_e = rtb_Merge_c >= 0.0 ? rtb_Merge_c : 0.0;

  /* MinMax: '<S785>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S762>/motohawk_calibration2'
   */
  minV = (rtb_DataTypeConversion_e <= (APP2MaxLimit_DataStore())) || rtIsNaN
    ((APP2MaxLimit_DataStore())) ? rtb_DataTypeConversion_e :
    (APP2MaxLimit_DataStore());

  /* S-Function Block: <S780>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s780_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_e = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S780>/Product' incorporates:
   *  MinMax: '<S780>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S780>/motohawk_calibration'
   */
  rtb_DataTypeConversion_e /= (rtb_DataTypeConversion_e >=
    (APP2FiltConst_DataStore())) || rtIsNaN((APP2FiltConst_DataStore())) ?
    rtb_DataTypeConversion_e : (APP2FiltConst_DataStore());

  /* Sum: '<S787>/Sum1' incorporates:
   *  Constant: '<S787>/Constant'
   *  MinMax: '<S785>/MinMax1'
   *  Product: '<S787>/Product'
   *  Product: '<S787>/Product1'
   *  Sum: '<S787>/Sum'
   *  UnitDelay: '<S787>/Unit Delay'
   */
  rtb_Sum1_nb = (1.0 - rtb_DataTypeConversion_e) *
    BaseEngineController_LS_DWork.s787_UnitDelay_DSTATE + minV *
    rtb_DataTypeConversion_e;

  /* If: '<S784>/If' incorporates:
   *  Inport: '<S788>/In1'
   *  Inport: '<S789>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S784>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S784>/override_enable'
   */
  if ((APP2_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S784>/NewValue' incorporates:
     *  ActionPort: '<S788>/Action Port'
     */
    BaseEngineController_LS_B.s784_Merge = (APP2_new_DataStore());

    /* End of Outputs for SubSystem: '<S784>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S784>/OldValue' incorporates:
     *  ActionPort: '<S789>/Action Port'
     */
    BaseEngineController_LS_B.s784_Merge = rtb_Sum1_nb;

    /* End of Outputs for SubSystem: '<S784>/OldValue' */
  }

  /* End of If: '<S784>/If' */

  /* Logic: '<S812>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S812>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S812>/motohawk_fault_status4'
   */
  rtb_RelationalOperator5_fz = (IsFaultActive(18) || IsFaultActive(19));

  /* Logic: '<S812>/Logical Operator6' */
  rtb_LogicalOperator6_b = !rtb_RelationalOperator5_fz;

  /* Logic: '<S812>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S812>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S812>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_br = (IsFaultSuspected(18) || IsFaultSuspected(19));

  /* DataTypeConversion: '<S765>/Data Type Conversion1' */
  rtb_UnitDelay_cf = (real_T)BaseEngineController_LS_B.s456_motohawk_ain2;

  /* Switch: '<S765>/Switch' incorporates:
   *  Fcn: '<S765>/Fcn'
   *  S-Function (motohawk_sfun_calibration): '<S765>/motohawk_calibration2'
   */
  if ((APP2_AdaptRev_Polarity_DataStore())) {
    BaseEngineController_LS_B.s765_Switch = 1023.0 - rtb_UnitDelay_cf;
  } else {
    BaseEngineController_LS_B.s765_Switch = rtb_UnitDelay_cf;
  }

  /* End of Switch: '<S765>/Switch' */

  /* S-Function (motohawk_sfun_data_read): '<S809>/motohawk_data_read' */
  rtb_DataTypeConversion_iq = APP2_AdaptRaw_Adpt_Low_DataStore();

  /* MinMax: '<S809>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S765>/motohawk_calibration9'
   */
  u = (real_T)rtb_DataTypeConversion_iq;
  BaseEngineController_LS_B.s809_MinMax = (u <=
    (APP2_AdaptAdapt_Low_Max_DataStore())) || rtIsNaN
    ((APP2_AdaptAdapt_Low_Max_DataStore())) ? u :
    (APP2_AdaptAdapt_Low_Max_DataStore());

  /* Sum: '<S765>/Sum2' */
  rtb_UnitDelay_cf = BaseEngineController_LS_B.s765_Switch -
    BaseEngineController_LS_B.s809_MinMax;

  /* S-Function (motohawk_sfun_data_read): '<S809>/motohawk_data_read1' */
  rtb_DataTypeConversion_iq = APP2_AdaptRaw_Adpt_Hi_DataStore();

  /* MinMax: '<S809>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S765>/motohawk_calibration11'
   */
  u = (real_T)rtb_DataTypeConversion_iq;
  BaseEngineController_LS_B.s809_MinMax1 = (u >=
    (APP2_AdaptAdapt_Hi_Min_DataStore())) || rtIsNaN
    ((APP2_AdaptAdapt_Hi_Min_DataStore())) ? u :
    (APP2_AdaptAdapt_Hi_Min_DataStore());

  /* Gain: '<S765>/Gain2' incorporates:
   *  Product: '<S765>/Product1'
   *  Sum: '<S765>/Sum1'
   */
  rtb_DataTypeConversion_e = rtb_UnitDelay_cf /
    (BaseEngineController_LS_B.s809_MinMax1 -
     BaseEngineController_LS_B.s809_MinMax) * 100.0;

  /* MinMax: '<S813>/MinMax' incorporates:
   *  Constant: '<S765>/Constant1'
   */
  rtb_DataTypeConversion_e = rtb_DataTypeConversion_e >= 0.0 ?
    rtb_DataTypeConversion_e : 0.0;

  /* MinMax: '<S813>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S765>/motohawk_calibration1'
   */
  BaseEngineController_LS_B.s813_MinMax1 = (rtb_DataTypeConversion_e <=
    (APP2_AdaptMaxLimit_DataStore())) || rtIsNaN((APP2_AdaptMaxLimit_DataStore()))
    ? rtb_DataTypeConversion_e : (APP2_AdaptMaxLimit_DataStore());

  /* S-Function Block: <S811>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s811_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_e = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S811>/Product' incorporates:
   *  MinMax: '<S811>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S811>/motohawk_calibration'
   */
  rtb_DataTypeConversion_e /= (rtb_DataTypeConversion_e >=
    (APP2_AdaptFilterConst_DataStore())) || rtIsNaN
    ((APP2_AdaptFilterConst_DataStore())) ? rtb_DataTypeConversion_e :
    (APP2_AdaptFilterConst_DataStore());

  /* Sum: '<S819>/Sum1' incorporates:
   *  Constant: '<S819>/Constant'
   *  Product: '<S819>/Product'
   *  Product: '<S819>/Product1'
   *  Sum: '<S819>/Sum'
   *  UnitDelay: '<S819>/Unit Delay'
   */
  rtb_Sum1_b4 = (1.0 - rtb_DataTypeConversion_e) *
    BaseEngineController_LS_DWork.s819_UnitDelay_DSTATE +
    BaseEngineController_LS_B.s813_MinMax1 * rtb_DataTypeConversion_e;

  /* UnitDelay: '<S812>/Unit Delay1' */
  rtb_UnitDelay1_ok = BaseEngineController_LS_DWork.s812_UnitDelay1_DSTATE;

  /* If: '<S812>/If' incorporates:
   *  Logic: '<S812>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_b && rtb_LogicalOperator1_br) {
    /* Outputs for IfAction SubSystem: '<S812>/If Action Subsystem' incorporates:
     *  ActionPort: '<S820>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay1_ok, &rtb_Merge_m);

    /* End of Outputs for SubSystem: '<S812>/If Action Subsystem' */
  } else if (rtb_RelationalOperator5_fz) {
    /* Outputs for IfAction SubSystem: '<S812>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S821>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((APP2_AdaptDfltValue_DataStore()),
      &rtb_Merge_m);

    /* End of Outputs for SubSystem: '<S812>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S812>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S822>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_Sum1_b4, &rtb_Merge_m);

    /* End of Outputs for SubSystem: '<S812>/If Action Subsystem2' */
  }

  /* End of If: '<S812>/If' */

  /* If: '<S823>/If' incorporates:
   *  Inport: '<S824>/In1'
   *  Inport: '<S825>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S823>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S823>/override_enable'
   */
  if ((APP2_Adapt_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S823>/NewValue' incorporates:
     *  ActionPort: '<S824>/Action Port'
     */
    BaseEngineController_LS_B.s823_Merge = (APP2_Adapt_new_DataStore());

    /* End of Outputs for SubSystem: '<S823>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S823>/OldValue' incorporates:
     *  ActionPort: '<S825>/Action Port'
     */
    BaseEngineController_LS_B.s823_Merge = rtb_Merge_m;

    /* End of Outputs for SubSystem: '<S823>/OldValue' */
  }

  /* End of If: '<S823>/If' */

  /* Switch: '<S456>/Switch1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S456>/motohawk_calibration'
   */
  if (((uint8_T)(APP_AdaptMode_DataStore())) != 0) {
    rtb_APP2 = BaseEngineController_LS_B.s823_Merge;
  } else {
    rtb_APP2 = BaseEngineController_LS_B.s784_Merge;
  }

  /* End of Switch: '<S456>/Switch1' */
  /* Logic: '<S760>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S760>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S760>/motohawk_fault_status4'
   */
  rtb_RelationalOperator5_fz = (IsFaultActive(4) || IsFaultActive(5));

  /* Logic: '<S760>/Logical Operator6' */
  rtb_LogicalOperator6_b = !rtb_RelationalOperator5_fz;

  /* Logic: '<S760>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S760>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S760>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_br = (IsFaultSuspected(4) || IsFaultSuspected(5));

  /* S-Function Block: <S456>/motohawk_ain1 Resource: APP1AnalogInput */
  {
    extern NativeError_S APP1AnalogInput_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    APP1AnalogInput_AnalogInput_Get
      (&BaseEngineController_LS_B.s456_motohawk_ain1, NULL);
  }

  /* DataTypeConversion: '<S760>/Data Type Conversion' */
  rtb_DataTypeConversion_hd = (real_T)
    BaseEngineController_LS_B.s456_motohawk_ain1;

  /* S-Function Block: <S774>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (APP1Idx_DataStore()) = TablePrelookup_real_T(rtb_DataTypeConversion_hd,
      (APP1IdxArr_DataStore()), 9, (APP1Idx_DataStore()));
    rtb_motohawk_prelookup_he = (APP1Idx_DataStore());
  }

  /* S-Function Block: <S774>/motohawk_interpolation_1d */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    BaseEngineController_LS_B.s774_motohawk_interpolation_1d =
      TableInterpolation1D_real_T(rtb_motohawk_prelookup_he, (real_T *)
      ((APP1Tbl_DataStore())), 9);
  }

  /* UnitDelay: '<S760>/Unit Delay' */
  rtb_UnitDelay_m = BaseEngineController_LS_DWork.s760_UnitDelay_DSTATE;

  /* If: '<S760>/If' incorporates:
   *  Logic: '<S760>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_b && rtb_LogicalOperator1_br) {
    /* Outputs for IfAction SubSystem: '<S760>/If Action Subsystem' incorporates:
     *  ActionPort: '<S769>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay_m, &rtb_Merge_oa);

    /* End of Outputs for SubSystem: '<S760>/If Action Subsystem' */
  } else if (rtb_RelationalOperator5_fz) {
    /* Outputs for IfAction SubSystem: '<S760>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S770>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((APP1Default_DataStore()),
      &rtb_Merge_oa);

    /* End of Outputs for SubSystem: '<S760>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S760>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S771>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      (BaseEngineController_LS_B.s774_motohawk_interpolation_1d, &rtb_Merge_oa);

    /* End of Outputs for SubSystem: '<S760>/If Action Subsystem2' */
  }

  /* End of If: '<S760>/If' */

  /* MinMax: '<S773>/MinMax' incorporates:
   *  Constant: '<S760>/Constant1'
   */
  rtb_DataTypeConversion_e = rtb_Merge_oa >= 0.0 ? rtb_Merge_oa : 0.0;

  /* MinMax: '<S773>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S760>/motohawk_calibration2'
   */
  minV_0 = (rtb_DataTypeConversion_e <= (APP1MaxLimit_DataStore())) || rtIsNaN
    ((APP1MaxLimit_DataStore())) ? rtb_DataTypeConversion_e :
    (APP1MaxLimit_DataStore());

  /* S-Function Block: <S768>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s768_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_e = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S768>/Product' incorporates:
   *  MinMax: '<S768>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S768>/motohawk_calibration'
   */
  rtb_DataTypeConversion_e /= (rtb_DataTypeConversion_e >=
    (APP1FiltConst_DataStore())) || rtIsNaN((APP1FiltConst_DataStore())) ?
    rtb_DataTypeConversion_e : (APP1FiltConst_DataStore());

  /* Sum: '<S775>/Sum1' incorporates:
   *  Constant: '<S775>/Constant'
   *  MinMax: '<S773>/MinMax1'
   *  Product: '<S775>/Product'
   *  Product: '<S775>/Product1'
   *  Sum: '<S775>/Sum'
   *  UnitDelay: '<S775>/Unit Delay'
   */
  rtb_Sum1_m = (1.0 - rtb_DataTypeConversion_e) *
    BaseEngineController_LS_DWork.s775_UnitDelay_DSTATE + minV_0 *
    rtb_DataTypeConversion_e;

  /* If: '<S772>/If' incorporates:
   *  Inport: '<S776>/In1'
   *  Inport: '<S777>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S772>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S772>/override_enable'
   */
  if ((APP1_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S772>/NewValue' incorporates:
     *  ActionPort: '<S776>/Action Port'
     */
    BaseEngineController_LS_B.s772_Merge = (APP1_new_DataStore());

    /* End of Outputs for SubSystem: '<S772>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S772>/OldValue' incorporates:
     *  ActionPort: '<S777>/Action Port'
     */
    BaseEngineController_LS_B.s772_Merge = rtb_Sum1_m;

    /* End of Outputs for SubSystem: '<S772>/OldValue' */
  }

  /* End of If: '<S772>/If' */

  /* Logic: '<S795>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S795>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S795>/motohawk_fault_status4'
   */
  rtb_RelationalOperator5_fz = (IsFaultActive(10) || IsFaultActive(11));

  /* Logic: '<S795>/Logical Operator6' */
  rtb_LogicalOperator6_b = !rtb_RelationalOperator5_fz;

  /* Logic: '<S795>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S795>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S795>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_br = (IsFaultSuspected(10) || IsFaultSuspected(11));

  /* DataTypeConversion: '<S764>/Data Type Conversion1' */
  rtb_UnitDelay_cf = (real_T)BaseEngineController_LS_B.s456_motohawk_ain1;

  /* Switch: '<S764>/Switch' incorporates:
   *  Fcn: '<S764>/Fcn'
   *  S-Function (motohawk_sfun_calibration): '<S764>/motohawk_calibration2'
   */
  if ((APP1_AdaptRev_Polarity_DataStore())) {
    BaseEngineController_LS_B.s764_Switch = 1023.0 - rtb_UnitDelay_cf;
  } else {
    BaseEngineController_LS_B.s764_Switch = rtb_UnitDelay_cf;
  }

  /* End of Switch: '<S764>/Switch' */

  /* S-Function (motohawk_sfun_data_read): '<S792>/motohawk_data_read' */
  rtb_DataTypeConversion_iq = APP1_AdaptRaw_Adpt_Low_DataStore();

  /* MinMax: '<S792>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S764>/motohawk_calibration9'
   */
  u = (real_T)rtb_DataTypeConversion_iq;
  BaseEngineController_LS_B.s792_MinMax = (u <=
    (APP1_AdaptAdapt_Low_Max_DataStore())) || rtIsNaN
    ((APP1_AdaptAdapt_Low_Max_DataStore())) ? u :
    (APP1_AdaptAdapt_Low_Max_DataStore());

  /* Sum: '<S764>/Sum2' */
  rtb_UnitDelay_cf = BaseEngineController_LS_B.s764_Switch -
    BaseEngineController_LS_B.s792_MinMax;

  /* S-Function (motohawk_sfun_data_read): '<S792>/motohawk_data_read1' */
  rtb_DataTypeConversion_iq = APP1_AdaptRaw_Adpt_Hi_DataStore();

  /* MinMax: '<S792>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S764>/motohawk_calibration11'
   */
  u = (real_T)rtb_DataTypeConversion_iq;
  BaseEngineController_LS_B.s792_MinMax1 = (u >=
    (APP1_AdaptAdapt_Hi_Min_DataStore())) || rtIsNaN
    ((APP1_AdaptAdapt_Hi_Min_DataStore())) ? u :
    (APP1_AdaptAdapt_Hi_Min_DataStore());

  /* Gain: '<S764>/Gain2' incorporates:
   *  Product: '<S764>/Product1'
   *  Sum: '<S764>/Sum1'
   */
  rtb_DataTypeConversion_e = rtb_UnitDelay_cf /
    (BaseEngineController_LS_B.s792_MinMax1 -
     BaseEngineController_LS_B.s792_MinMax) * 100.0;

  /* MinMax: '<S796>/MinMax' incorporates:
   *  Constant: '<S764>/Constant1'
   */
  rtb_DataTypeConversion_e = rtb_DataTypeConversion_e >= 0.0 ?
    rtb_DataTypeConversion_e : 0.0;

  /* MinMax: '<S796>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S764>/motohawk_calibration1'
   */
  BaseEngineController_LS_B.s796_MinMax1 = (rtb_DataTypeConversion_e <=
    (APP1_AdaptMaxLimit_DataStore())) || rtIsNaN((APP1_AdaptMaxLimit_DataStore()))
    ? rtb_DataTypeConversion_e : (APP1_AdaptMaxLimit_DataStore());

  /* S-Function Block: <S794>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s794_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_e = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S794>/Product' incorporates:
   *  MinMax: '<S794>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S794>/motohawk_calibration'
   */
  rtb_DataTypeConversion_e /= (rtb_DataTypeConversion_e >=
    (APP1_AdaptFilterConst_DataStore())) || rtIsNaN
    ((APP1_AdaptFilterConst_DataStore())) ? rtb_DataTypeConversion_e :
    (APP1_AdaptFilterConst_DataStore());

  /* Sum: '<S802>/Sum1' incorporates:
   *  Constant: '<S802>/Constant'
   *  Product: '<S802>/Product'
   *  Product: '<S802>/Product1'
   *  Sum: '<S802>/Sum'
   *  UnitDelay: '<S802>/Unit Delay'
   */
  rtb_Sum1_h1 = (1.0 - rtb_DataTypeConversion_e) *
    BaseEngineController_LS_DWork.s802_UnitDelay_DSTATE +
    BaseEngineController_LS_B.s796_MinMax1 * rtb_DataTypeConversion_e;

  /* UnitDelay: '<S795>/Unit Delay1' */
  rtb_UnitDelay1_e = BaseEngineController_LS_DWork.s795_UnitDelay1_DSTATE;

  /* If: '<S795>/If' incorporates:
   *  Logic: '<S795>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_b && rtb_LogicalOperator1_br) {
    /* Outputs for IfAction SubSystem: '<S795>/If Action Subsystem' incorporates:
     *  ActionPort: '<S803>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay1_e, &rtb_Merge_ao);

    /* End of Outputs for SubSystem: '<S795>/If Action Subsystem' */
  } else if (rtb_RelationalOperator5_fz) {
    /* Outputs for IfAction SubSystem: '<S795>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S804>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((APP1_AdaptDfltValue_DataStore()),
      &rtb_Merge_ao);

    /* End of Outputs for SubSystem: '<S795>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S795>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S805>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_Sum1_h1, &rtb_Merge_ao);

    /* End of Outputs for SubSystem: '<S795>/If Action Subsystem2' */
  }

  /* End of If: '<S795>/If' */

  /* If: '<S806>/If' incorporates:
   *  Inport: '<S807>/In1'
   *  Inport: '<S808>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S806>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S806>/override_enable'
   */
  if ((APP1_Adapt_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S806>/NewValue' incorporates:
     *  ActionPort: '<S807>/Action Port'
     */
    BaseEngineController_LS_B.s806_Merge = (APP1_Adapt_new_DataStore());

    /* End of Outputs for SubSystem: '<S806>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S806>/OldValue' incorporates:
     *  ActionPort: '<S808>/Action Port'
     */
    BaseEngineController_LS_B.s806_Merge = rtb_Merge_ao;

    /* End of Outputs for SubSystem: '<S806>/OldValue' */
  }

  /* End of If: '<S806>/If' */

  /* Switch: '<S456>/Switch' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S456>/motohawk_calibration'
   */
  if (((uint8_T)(APP_AdaptMode_DataStore())) != 0) {
    rtb_APP1 = BaseEngineController_LS_B.s806_Merge;
  } else {
    rtb_APP1 = BaseEngineController_LS_B.s772_Merge;
  }

  /* End of Switch: '<S456>/Switch' */
  /* Logic: '<S411>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S411>/motohawk_fault_status'
   *  S-Function (motohawk_sfun_fault_status): '<S411>/motohawk_fault_status1'
   */
  rtb_LogicalOperator6_b = (IsFaultActive(4) || IsFaultActive(5));

  /* Logic: '<S411>/Logical Operator6' incorporates:
   *  Logic: '<S411>/Logical Operator5'
   *  S-Function (motohawk_sfun_fault_status): '<S411>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S411>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_br = (rtb_LogicalOperator6_b && (IsFaultActive(12) ||
    IsFaultActive(13)));

  /* Switch: '<S411>/Switch2' incorporates:
   *  Logic: '<S411>/Logical Operator1'
   *  S-Function (motohawk_sfun_fault_status): '<S411>/motohawk_fault_status4'
   */
  if (rtb_LogicalOperator1_br || IsFaultActive(20)) {
    /* MinMax: '<S411>/MinMax' */
    rtb_UnitDelay_cf = (rtb_APP2 <= rtb_APP1) || rtIsNaN(rtb_APP1) ? rtb_APP2 :
      rtb_APP1;
  } else {
    /* Switch: '<S411>/Switch1' */
    if (rtb_LogicalOperator6_b) {
      rtb_UnitDelay_cf = rtb_APP2;
    } else {
      rtb_UnitDelay_cf = rtb_APP1;
    }

    /* End of Switch: '<S411>/Switch1' */
  }

  /* End of Switch: '<S411>/Switch2' */
  /* Switch: '<S415>/Switch1' incorporates:
   *  S-Function (motohawk_sfun_fault_action): '<S415>/motohawk_fault_action1'
   */
  if (GetFaultActionStatus(0)) {
    /* MinMax: '<S434>/MinMax' incorporates:
     *  Constant: '<S415>/Constant1'
     *  Product: '<S415>/Product1'
     *  S-Function (motohawk_sfun_calibration): '<S415>/motohawk_calibration2'
     */
    u = (Overheat_ScaleAPP_DataStore()) * rtb_UnitDelay_cf;
    y = u >= 0.0 ? u : 0.0;

    /* MinMax: '<S434>/MinMax1' incorporates:
     *  Constant: '<S415>/Constant1'
     *  MinMax: '<S434>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S415>/motohawk_calibration1'
     */
    BaseEngineController_LS_B.s415_Switch1 = (y <= (Overheat_MaxAPP_DataStore()))
      || rtIsNaN((Overheat_MaxAPP_DataStore())) ? y : (Overheat_MaxAPP_DataStore
      ());
  } else {
    BaseEngineController_LS_B.s415_Switch1 = rtb_UnitDelay_cf;
  }

  /* End of Switch: '<S415>/Switch1' */
  /* S-Function Block: <S441>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s441_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_hb = ((real_T) delta) * 0.000001;
  }

  /* Sum: '<S441>/Sum' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S441>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S441>/motohawk_delta_time'
   */
  BaseEngineController_LS_B.s441_Sum = rtb_motohawk_delta_time_hb +
    TimeSinceKeyOnTimer_DataStore();

  /* S-Function Block: <S453>/motohawk_encoder_instant_rpm */
  {
    rtb_RPMInst = GetEncoderResourceInstantRPM();
  }

  /* DataTypeConversion: '<S453>/Data Type Conversion1' incorporates:
   *  S-Function (motohawk_sfun_encoder_instant_rpm): '<S453>/motohawk_encoder_instant_rpm'
   */
  BaseEngineController_LS_B.s453_RPMInst = (real_T)rtb_RPMInst;

  /* DataTypeConversion: '<S417>/Data Type Conversion' */
  if (BaseEngineController_LS_B.s453_RPMInst < 65536.0) {
    if (BaseEngineController_LS_B.s453_RPMInst >= 0.0) {
      rtb_DataTypeConversion_iq = (uint16_T)
        BaseEngineController_LS_B.s453_RPMInst;
    } else {
      rtb_DataTypeConversion_iq = 0U;
    }
  } else {
    rtb_DataTypeConversion_iq = MAX_uint16_T;
  }

  /* End of DataTypeConversion: '<S417>/Data Type Conversion' */
  /* Sum: '<S417>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S417>/motohawk_calibration3'
   *  S-Function (motohawk_sfun_calibration): '<S417>/motohawk_calibration4'
   */
  i = ((uint16_T)(StallRPMMinThreshold_DataStore())) - ((uint16_T)
    (StallRPMThresholdHyst_DataStore()));
  if (i <= 0) {
    i = 0;
  }

  rtb_motohawk_data_read1_p = (uint16_T)i;

  /* End of Sum: '<S417>/Sum' */

  /* RelationalOperator: '<S417>/Relational Operator1' */
  BaseEngineController_LS_B.s417_Stall = ((rtb_DataTypeConversion_iq <
    rtb_motohawk_data_read1_p));

  /* RelationalOperator: '<S417>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S417>/motohawk_calibration4'
   */
  BaseEngineController_LS_B.s417_Crank = ((rtb_DataTypeConversion_iq >
    ((uint16_T)(StallRPMMinThreshold_DataStore()))));

  /* RelationalOperator: '<S417>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S417>/motohawk_calibration1'
   */
  rtb_LogicalOperator6_b = (rtb_DataTypeConversion_iq > ((uint16_T)
    (CrankToRunRPMThresh_DataStore())));

  /* UnitDelay: '<S417>/Unit Delay' */
  BaseEngineController_LS_B.s417_UnitDelay =
    BaseEngineController_LS_DWork.s417_UnitDelay_DSTATE;

  /* S-Function (motohawk_sfun_trigger): '<S417>/motohawk_trigger' */
  /* Enable for Trigger_FGND_TDC_EVENT_7192p0001 */
  if (BaseEngineController_LS_DWork.s417_motohawk_trigger_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s417_motohawk_trigger_DWORK1 = 1;
  }

  /* Logic: '<S417>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S417>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S417>/motohawk_calibration2'
   */
  BaseEngineController_LS_B.s417_Run = ((rtb_LogicalOperator6_b &&
    (BaseEngineController_LS_B.s439_Switch >= ((uint8_T)(RunLatchTDCs_DataStore())))));

  /* Stateflow: '<S417>/Engine State Machine' */

  /* Gateway: Foreground/Control/VirtualSensors/RawProcessed/EngineState/Engine State Machine */
  /* During: Foreground/Control/VirtualSensors/RawProcessed/EngineState/Engine State Machine */
  switch (BaseEngineController_LS_DWork.s438_is_c2_BaseEngineController_LS) {
   case BaseEngineController_LS_IN_Crank:
    /* During 'Crank': '<S438>:3' */
    if (BaseEngineController_LS_B.s417_Stall) {
      /* Transition: '<S438>:8' */
      BaseEngineController_LS_DWork.s438_is_c2_BaseEngineController_LS =
        BaseEngineController_LS_IN_Stall_l;

      /* Entry 'Stall': '<S438>:1' */
      BaseEngineController_LS_B.s438_State = 1U;
    } else {
      if (BaseEngineController_LS_B.s417_Run) {
        /* Transition: '<S438>:6' */
        BaseEngineController_LS_DWork.s438_is_c2_BaseEngineController_LS =
          BaseEngineController_LS_IN_Run;

        /* Entry 'Run': '<S438>:2' */
        BaseEngineController_LS_B.s438_State = 3U;
      }
    }
    break;

   case BaseEngineController_LS_IN_Run:
    /* During 'Run': '<S438>:2' */
    if (BaseEngineController_LS_B.s417_Stall) {
      /* Transition: '<S438>:7' */
      BaseEngineController_LS_DWork.s438_is_c2_BaseEngineController_LS =
        BaseEngineController_LS_IN_Stall_l;

      /* Entry 'Stall': '<S438>:1' */
      BaseEngineController_LS_B.s438_State = 1U;
    }
    break;

   case BaseEngineController_LS_IN_Stall_l:
    /* During 'Stall': '<S438>:1' */
    if (BaseEngineController_LS_B.s417_Crank) {
      /* Transition: '<S438>:5' */
      BaseEngineController_LS_DWork.s438_is_c2_BaseEngineController_LS =
        BaseEngineController_LS_IN_Crank;

      /* Entry 'Crank': '<S438>:3' */
      BaseEngineController_LS_B.s438_State = 2U;
    }
    break;

   default:
    /* Transition: '<S438>:4' */
    BaseEngineController_LS_DWork.s438_is_c2_BaseEngineController_LS =
      BaseEngineController_LS_IN_Stall_l;

    /* Entry 'Stall': '<S438>:1' */
    BaseEngineController_LS_B.s438_State = 1U;
    break;
  }

  /* End of Stateflow: '<S417>/Engine State Machine' */

  /* RelationalOperator: '<S139>/RelOp' incorporates:
   *  Constant: '<S139>/Constant'
   */
  rtb_RelOp_pu = (BaseEngineController_LS_B.s438_State == 1);

  /* S-Function Block: <S452>/motohawk_ain5 Resource: ACSwPin */
  {
    extern NativeError_S ACSwPin_AnalogInput_Get(uint16_T *adc, uint16_T *status);
    ACSwPin_AnalogInput_Get(&rtb_motohawk_ain5_i, NULL);
  }

  /* DataTypeConversion: '<S570>/Data Type Conversion' incorporates:
   *  S-Function (motohawk_sfun_ain): '<S452>/motohawk_ain5'
   */
  BaseEngineController_LS_B.s570_DataTypeConversion = (real_T)
    rtb_motohawk_ain5_i;

  /* RelationalOperator: '<S570>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S570>/SwitchPoint'
   */
  rtb_LogicalOperator6_b = (BaseEngineController_LS_B.s570_DataTypeConversion >
                            (ACSwSwitchPt_DataStore()));

  /* Logic: '<S570>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S570>/0 = No Inversion 1 = Inversion'
   */
  rtb_LogicalOperator6_b ^= (ACSwPolarity_DataStore());

  /* If: '<S578>/If' incorporates:
   *  Inport: '<S579>/In1'
   *  Inport: '<S580>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S578>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S578>/override_enable'
   */
  if ((ACSw_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S578>/NewValue' incorporates:
     *  ActionPort: '<S579>/Action Port'
     */
    BaseEngineController_LS_B.s578_Merge = (ACSw_new_DataStore());

    /* End of Outputs for SubSystem: '<S578>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S578>/OldValue' incorporates:
     *  ActionPort: '<S580>/Action Port'
     */
    BaseEngineController_LS_B.s578_Merge = rtb_LogicalOperator6_b;

    /* End of Outputs for SubSystem: '<S578>/OldValue' */
  }

  /* End of If: '<S578>/If' */

  /* S-Function Block: <S637>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s637_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_e = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S637>/Product' incorporates:
   *  MinMax: '<S637>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S637>/motohawk_calibration'
   */
  rtb_DataTypeConversion_e /= (rtb_DataTypeConversion_e >=
    (ACPresFilterConst_DataStore())) || rtIsNaN((ACPresFilterConst_DataStore()))
    ? rtb_DataTypeConversion_e : (ACPresFilterConst_DataStore());

  /* Logic: '<S628>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S628>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S628>/motohawk_fault_status4'
   */
  rtb_RelationalOperator5_fz = (IsFaultActive(2) || IsFaultActive(3));

  /* Logic: '<S628>/Logical Operator6' */
  rtb_LogicalOperator6_b = !rtb_RelationalOperator5_fz;

  /* Logic: '<S628>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S628>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S628>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_br = (IsFaultSuspected(2) || IsFaultSuspected(3));

  /* S-Function Block: <S454>/motohawk_ain4 Resource: ACPresPin */
  {
    extern NativeError_S ACPresPin_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    ACPresPin_AnalogInput_Get(&BaseEngineController_LS_B.s454_motohawk_ain4,
      NULL);
  }

  /* DataTypeConversion: '<S628>/Data Type Conversion' */
  rtb_DataTypeConversion_ik = (real_T)
    BaseEngineController_LS_B.s454_motohawk_ain4;

  /* Product: '<S628>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S628>/motohawk_calibration4'
   */
  rtb_UnitDelay_cf = rtb_DataTypeConversion_ik * (ACPresGain_DataStore());

  /* Sum: '<S628>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S628>/motohawk_calibration5'
   */
  BaseEngineController_LS_B.s628_Sum1 = rtb_UnitDelay_cf + (ACPresOfst_DataStore
    ());

  /* UnitDelay: '<S628>/Unit Delay1' */
  rtb_UnitDelay1_i = BaseEngineController_LS_DWork.s628_UnitDelay1_DSTATE;

  /* If: '<S628>/If' incorporates:
   *  Logic: '<S628>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_b && rtb_LogicalOperator1_br) {
    /* Outputs for IfAction SubSystem: '<S628>/If Action Subsystem' incorporates:
     *  ActionPort: '<S638>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay1_i, &rtb_Merge_b);

    /* End of Outputs for SubSystem: '<S628>/If Action Subsystem' */
  } else if (rtb_RelationalOperator5_fz) {
    /* Outputs for IfAction SubSystem: '<S628>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S639>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((ACPresDfltValue_DataStore()),
      &rtb_Merge_b);

    /* End of Outputs for SubSystem: '<S628>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S628>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S640>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      (BaseEngineController_LS_B.s628_Sum1, &rtb_Merge_b);

    /* End of Outputs for SubSystem: '<S628>/If Action Subsystem2' */
  }

  /* End of If: '<S628>/If' */

  /* Sum: '<S642>/Sum1' incorporates:
   *  Constant: '<S642>/Constant'
   *  Product: '<S642>/Product'
   *  Product: '<S642>/Product1'
   *  Sum: '<S642>/Sum'
   *  UnitDelay: '<S642>/Unit Delay'
   */
  rtb_Sum1_li = (1.0 - rtb_DataTypeConversion_e) *
    BaseEngineController_LS_DWork.s642_UnitDelay_DSTATE + rtb_Merge_b *
    rtb_DataTypeConversion_e;

  /* If: '<S641>/If' incorporates:
   *  Inport: '<S643>/In1'
   *  Inport: '<S644>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S641>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S641>/override_enable'
   */
  if ((ACPres_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S641>/NewValue' incorporates:
     *  ActionPort: '<S643>/Action Port'
     */
    BaseEngineController_LS_B.s641_Merge = (ACPres_new_DataStore());

    /* End of Outputs for SubSystem: '<S641>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S641>/OldValue' incorporates:
     *  ActionPort: '<S644>/Action Port'
     */
    BaseEngineController_LS_B.s641_Merge = rtb_Sum1_li;

    /* End of Outputs for SubSystem: '<S641>/OldValue' */
  }

  /* End of If: '<S641>/If' */

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
    rtb_DataTypeConversion_m = (real_T)BaseEngineController_LS_B.s578_Merge;

    /* RelationalOperator: '<S312>/LT' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S309>/motohawk_calibration1'
     */
    rtb_RelationalOperator2_py = (BaseEngineController_LS_B.s737_Merge >=
      (ECTFanOn_DataStore()));

    /* RelationalOperator: '<S312>/LT1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S309>/motohawk_calibration'
     */
    rtb_Switch_oh = (BaseEngineController_LS_B.s737_Merge <=
                     (ECTFanOff_DataStore()));

    /* CombinatorialLogic: '<S318>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_RelationalOperator2_py != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_Switch_oh != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_da[0] =
        BaseEngineController_LS_ConstP.pooled905[rowidx];
      rtb_CombinatorialLogic_da[1] =
        BaseEngineController_LS_ConstP.pooled905[rowidx + 4];
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
    rtb_Switch_oh = (BaseEngineController_LS_B.s755_Merge >= (IATFanOn_DataStore
                      ()));

    /* RelationalOperator: '<S313>/LT1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S309>/motohawk_calibration2'
     */
    rtb_RelationalOperator2_py = (BaseEngineController_LS_B.s755_Merge <=
      (IATFanOff_DataStore()));

    /* CombinatorialLogic: '<S319>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_Switch_oh != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_RelationalOperator2_py != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_da[0] =
        BaseEngineController_LS_ConstP.pooled905[rowidx];
      rtb_CombinatorialLogic_da[1] =
        BaseEngineController_LS_ConstP.pooled905[rowidx + 4];
    }

    /* Switch: '<S319>/Switch1' incorporates:
     *  UnitDelay: '<S319>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_da[1]) {
      rtb_LogicalOperator1_br = rtb_CombinatorialLogic_da[0];
    } else {
      rtb_LogicalOperator1_br =
        BaseEngineController_LS_DWork.s319_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S319>/Switch1' */
    /* RelationalOperator: '<S314>/LT' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S309>/motohawk_calibration5'
     */
    rtb_Switch_oh = (BaseEngineController_LS_B.s641_Merge >=
                     (ACPresFanOn_DataStore()));

    /* RelationalOperator: '<S314>/LT1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S309>/motohawk_calibration4'
     */
    rtb_RelationalOperator2_py = (BaseEngineController_LS_B.s641_Merge <=
      (ACPresFanOff_DataStore()));

    /* CombinatorialLogic: '<S320>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_Switch_oh != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_RelationalOperator2_py != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_da[0] =
        BaseEngineController_LS_ConstP.pooled905[rowidx];
      rtb_CombinatorialLogic_da[1] =
        BaseEngineController_LS_ConstP.pooled905[rowidx + 4];
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
     *  S-Function (motohawk_sfun_interpolation_2d): '<S315>/motohawk_interpolation_2d'
     *  S-Function (motohawk_sfun_prelookup): '<S315>/motohawk_prelookup_col'
     *  S-Function (motohawk_sfun_prelookup): '<S315>/motohawk_prelookup_row'
     */
    if (((uint8_T)(FAN_Mode_DataStore())) >= 1) {
      rtb_UnitDelay_ju = (real_T)rtb_LogicalOperator6_b;
    } else {
      /* S-Function Block: <S315>/motohawk_prelookup_col */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (ECTFanSpeed_StallColIn_DataStore()) =
          BaseEngineController_LS_B.s577_Switch;
        (ECTFanSpeed_StallColIdx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_LS_B.s577_Switch,
           (ECTFanSpeed_StallColIdxArr_DataStore()), 7,
           (ECTFanSpeed_StallColIdx_DataStore()));
        rtb_motohawk_prelookup_col_h = (ECTFanSpeed_StallColIdx_DataStore());
      }

      /* S-Function Block: <S315>/motohawk_prelookup_row */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (ECTFanSpeed_StallRowIn_DataStore()) =
          BaseEngineController_LS_B.s737_Merge;
        (ECTFanSpeed_StallRowIdx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_LS_B.s737_Merge,
           (ECTFanSpeed_StallRowIdxArr_DataStore()), 7,
           (ECTFanSpeed_StallRowIdx_DataStore()));
        rtb_motohawk_prelookup_row_g = (ECTFanSpeed_StallRowIdx_DataStore());
      }

      /* S-Function Block: <S315>/motohawk_interpolation_2d */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_motohawk_interpolation_2d_f = TableInterpolation2D_real_T
          (rtb_motohawk_prelookup_row_g, rtb_motohawk_prelookup_col_h, (real_T *)
           ((ECTFanSpeed_StallMap_DataStore())), 7, 7);
        (ECTFanSpeed_Stall_DataStore()) = rtb_motohawk_interpolation_2d_f;
      }

      rtb_UnitDelay_ju = rtb_motohawk_interpolation_2d_f;
    }

    /* End of Switch: '<S309>/Switch' */
    /* Product: '<S309>/Product' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S309>/motohawk_calibration6'
     */
    rtb_UnitDelay_cf = rtb_UnitDelay_ju * (real_T)((uint8_T)(Fan1ECT_DataStore()));

    /* Switch: '<S309>/Switch1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S309>/motohawk_calibration15'
     *  S-Function (motohawk_sfun_interpolation_2d): '<S316>/motohawk_interpolation_2d'
     *  S-Function (motohawk_sfun_prelookup): '<S316>/motohawk_prelookup_col'
     *  S-Function (motohawk_sfun_prelookup): '<S316>/motohawk_prelookup_row'
     */
    if (((uint8_T)(FAN_Mode_DataStore())) >= 1) {
      rtb_Switch1_f = (real_T)rtb_LogicalOperator1_br;
    } else {
      /* S-Function Block: <S316>/motohawk_prelookup_col */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (IATFanSpeed_StallColIn_DataStore()) =
          BaseEngineController_LS_B.s577_Switch;
        (IATFanSpeed_StallColIdx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_LS_B.s577_Switch,
           (IATFanSpeed_StallColIdxArr_DataStore()), 7,
           (IATFanSpeed_StallColIdx_DataStore()));
        rtb_motohawk_prelookup_col_k = (IATFanSpeed_StallColIdx_DataStore());
      }

      /* S-Function Block: <S316>/motohawk_prelookup_row */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (IATFanSpeed_StallRowIn_DataStore()) =
          BaseEngineController_LS_B.s755_Merge;
        (IATFanSpeed_StallRowIdx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_LS_B.s755_Merge,
           (IATFanSpeed_StallRowIdxArr_DataStore()), 7,
           (IATFanSpeed_StallRowIdx_DataStore()));
        rtb_motohawk_prelookup_row_c = (IATFanSpeed_StallRowIdx_DataStore());
      }

      /* S-Function Block: <S316>/motohawk_interpolation_2d */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_motohawk_interpolation_2d_fg = TableInterpolation2D_real_T
          (rtb_motohawk_prelookup_row_c, rtb_motohawk_prelookup_col_k, (real_T *)
           ((IATFanSpeed_StallMap_DataStore())), 7, 7);
        (IATFanSpeed_Stall_DataStore()) = rtb_motohawk_interpolation_2d_fg;
      }

      rtb_Switch1_f = rtb_motohawk_interpolation_2d_fg;
    }

    /* End of Switch: '<S309>/Switch1' */
    /* Product: '<S309>/Product1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S309>/motohawk_calibration7'
     */
    rtb_Product6_m = rtb_Switch1_f * (real_T)((uint8_T)(Fan1IAT_DataStore()));

    /* Switch: '<S309>/Switch2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S309>/motohawk_calibration15'
     *  S-Function (motohawk_sfun_interpolation_2d): '<S317>/motohawk_interpolation_2d'
     *  S-Function (motohawk_sfun_prelookup): '<S317>/motohawk_prelookup_col'
     *  S-Function (motohawk_sfun_prelookup): '<S317>/motohawk_prelookup_row'
     */
    if (((uint8_T)(FAN_Mode_DataStore())) >= 1) {
      rtb_Product7_i = (real_T)rtb_RelOp_pu;
    } else {
      /* S-Function Block: <S317>/motohawk_prelookup_col */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (ACPresFanSpeed_StallColIn_DataStore()) =
          BaseEngineController_LS_B.s577_Switch;
        (ACPresFanSpeed_StallColIdx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_LS_B.s577_Switch,
           (ACPresFanSpeed_StallColIdxArr_DataStore()), 7,
           (ACPresFanSpeed_StallColIdx_DataStore()));
        rtb_motohawk_prelookup_col_d = (ACPresFanSpeed_StallColIdx_DataStore());
      }

      /* S-Function Block: <S317>/motohawk_prelookup_row */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (ACPresFanSpeed_StallRowIn_DataStore()) =
          BaseEngineController_LS_B.s641_Merge;
        (ACPresFanSpeed_StallRowIdx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_LS_B.s641_Merge,
           (ACPresFanSpeed_StallRowIdxArr_DataStore()), 7,
           (ACPresFanSpeed_StallRowIdx_DataStore()));
        rtb_motohawk_prelookup_row_l = (ACPresFanSpeed_StallRowIdx_DataStore());
      }

      /* S-Function Block: <S317>/motohawk_interpolation_2d */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_motohawk_interpolation_2d_o = TableInterpolation2D_real_T
          (rtb_motohawk_prelookup_row_l, rtb_motohawk_prelookup_col_d, (real_T *)
           ((ACPresFanSpeed_StallMap_DataStore())), 7, 7);
        (ACPresFanSpeed_Stall_DataStore()) = rtb_motohawk_interpolation_2d_o;
      }

      rtb_Product7_i = rtb_motohawk_interpolation_2d_o;
    }

    /* End of Switch: '<S309>/Switch2' */
    /* Product: '<S309>/Product2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S309>/motohawk_calibration8'
     */
    rtb_Product5_j = rtb_Product7_i * (real_T)((uint8_T)(Fan1ACPres_DataStore()));

    /* Switch: '<S309>/Switch3' incorporates:
     *  Product: '<S309>/Product8'
     *  S-Function (motohawk_sfun_calibration): '<S309>/motohawk_calibration14'
     *  S-Function (motohawk_sfun_calibration): '<S309>/motohawk_calibration15'
     */
    if (!(((uint8_T)(FAN_Mode_DataStore())) >= 1)) {
      rtb_DataTypeConversion_m *= (ACSwFanSpeed_Stall_DataStore());
    }

    /* End of Switch: '<S309>/Switch3' */
    /* MinMax: '<S309>/MinMax' incorporates:
     *  Product: '<S309>/Product3'
     *  S-Function (motohawk_sfun_calibration): '<S309>/motohawk_calibration9'
     */
    y = (rtb_UnitDelay_cf >= rtb_Product6_m) || rtIsNaN(rtb_Product6_m) ?
      rtb_UnitDelay_cf : rtb_Product6_m;
    y = (y >= rtb_Product5_j) || rtIsNaN(rtb_Product5_j) ? y : rtb_Product5_j;
    rtb_DesiredLambda_idx_0 = rtb_DataTypeConversion_m * (real_T)((uint8_T)
      (Fan1ACSw_DataStore()));

    /* Product: '<S309>/Product4' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S309>/motohawk_calibration10'
     */
    rtb_UnitDelay_cf = rtb_UnitDelay_ju * (real_T)((uint8_T)(Fan2ECT_DataStore()));

    /* Product: '<S309>/Product5' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S309>/motohawk_calibration11'
     */
    rtb_Product5_j = rtb_Switch1_f * (real_T)((uint8_T)(Fan2IAT_DataStore()));

    /* Product: '<S309>/Product6' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S309>/motohawk_calibration12'
     */
    rtb_Product6_m = rtb_Product7_i * (real_T)((uint8_T)(Fan2ACPres_DataStore()));

    /* MinMax: '<S309>/MinMax1' incorporates:
     *  Product: '<S309>/Product7'
     *  S-Function (motohawk_sfun_calibration): '<S309>/motohawk_calibration13'
     */
    rtb_DesiredLambda_idx = (rtb_UnitDelay_cf >= rtb_Product5_j) || rtIsNaN
      (rtb_Product5_j) ? rtb_UnitDelay_cf : rtb_Product5_j;
    rtb_DesiredLambda_idx = (rtb_DesiredLambda_idx >= rtb_Product6_m) || rtIsNaN
      (rtb_Product6_m) ? rtb_DesiredLambda_idx : rtb_Product6_m;
    u = rtb_DataTypeConversion_m * (real_T)((uint8_T)(Fan2ACSw_DataStore()));

    /* UnitDelay: '<S321>/Unit Delay' */
    BaseEngineController_LS_B.s321_UnitDelay =
      BaseEngineController_LS_DWork.s321_UnitDelay_DSTATE;

    /* Switch: '<S310>/Switch' incorporates:
     *  Constant: '<S310>/Constant'
     *  RelationalOperator: '<S310>/Relational Operator'
     *  S-Function (motohawk_sfun_calibration): '<S310>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S310>/motohawk_calibration1'
     */
    if ((Constant_Fuel_Pump_DataStore()) > 0.0) {
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
    rtb_UnitDelay_ju = rtb_motohawk_delta_time_op +
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
    rtb_RelationalOperator2_py = (BaseEngineController_LS_B.s415_Switch1 >=
      (ETC_StallAppOvrThesh_DataStore()));

    /* Switch: '<S323>/Switch' incorporates:
     *  Constant: '<S323>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S323>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S323>/motohawk_delta_time'
     *  Sum: '<S323>/Sum'
     */
    if (rtb_RelationalOperator2_py) {
      rtb_DataTypeConversion_m = rtb_motohawk_delta_time_cj +
        AppStallOvrTmr_DataStore();
    } else {
      rtb_DataTypeConversion_m = 0.0;
    }

    /* End of Switch: '<S323>/Switch' */
    /* RelationalOperator: '<S311>/Relational Operator3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S311>/motohawk_calibration4'
     */
    rtb_RelationalOperator3_bp = (rtb_DataTypeConversion_m >=
      (ETC_StallAppOvrTm_DataStore()));

    /* Product: '<S311>/Product1' */
    BaseEngineController_LS_B.s311_Product1 = (rtb_RelationalOperator3_bp ?
      (real_T)rtb_RelationalOperator2_py : 0.0) *
      BaseEngineController_LS_B.s415_Switch1;

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
        if (BaseEngineController_LS_B.s441_Sum < (ETC_IceBreakEnblTm_DataStore()))
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
        if (BaseEngineController_LS_B.s441_Sum > (ETC_IceBreakEnblTm_DataStore()))
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
    rtb_Saturation_d1 = rtb_DataTypeConversion_m >= 16000.0 ? 16000.0 :
      rtb_DataTypeConversion_m <= 0.0 ? 0.0 : rtb_DataTypeConversion_m;

    /* S-Function (motohawk_sfun_data_write): '<S323>/motohawk_data_write' */
    /* Write to Data Storage as scalar: AppStallOvrTmr */
    {
      AppStallOvrTmr_DataStore() = rtb_Saturation_d1;
    }

    /* ZeroOrderHold: '<S138>/Zero-Order Hold10' incorporates:
     *  Constant: '<S138>/No Mult'
     */
    BaseEngineController_LS_B.s135_FuelMult = 0.0;

    /* ZeroOrderHold: '<S138>/Zero-Order Hold12' incorporates:
     *  MinMax: '<S309>/MinMax'
     */
    BaseEngineController_LS_B.s135_FAN1 = (y >= rtb_DesiredLambda_idx_0) ||
      rtIsNaN(rtb_DesiredLambda_idx_0) ? y : rtb_DesiredLambda_idx_0;

    /* ZeroOrderHold: '<S138>/Zero-Order Hold13' incorporates:
     *  MinMax: '<S309>/MinMax1'
     */
    BaseEngineController_LS_B.s135_FAN2 = (rtb_DesiredLambda_idx >= u) ||
      rtIsNaN(u) ? rtb_DesiredLambda_idx : u;

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
      rtb_LogicalOperator1_br;

    /* Update for UnitDelay: '<S320>/Unit Delay' */
    BaseEngineController_LS_DWork.s320_UnitDelay_DSTATE = rtb_RelOp_pu;

    /* Update for UnitDelay: '<S321>/Unit Delay' */
    BaseEngineController_LS_DWork.s321_UnitDelay_DSTATE = rtb_UnitDelay_ju;
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
  /* S-Function Block: <S453>/motohawk_encoder_average_rpm */
  {
    rtb_RPM = GetEncoderResourceAverageRPM();
  }

  /* DataTypeConversion: '<S627>/Data Type Conversion' incorporates:
   *  S-Function (motohawk_sfun_encoder_average_rpm): '<S453>/motohawk_encoder_average_rpm'
   */
  rtb_UnitDelay_cf = (real_T)rtb_RPM;

  /* S-Function Block: <S620>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s620_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_e = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S620>/Product' incorporates:
   *  MinMax: '<S620>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S620>/motohawk_calibration'
   */
  rtb_DataTypeConversion_e /= (rtb_DataTypeConversion_e >=
    (RPMFiltConst_DataStore())) || rtIsNaN((RPMFiltConst_DataStore())) ?
    rtb_DataTypeConversion_e : (RPMFiltConst_DataStore());

  /* Sum: '<S627>/Sum1' incorporates:
   *  Constant: '<S627>/Constant'
   *  Product: '<S627>/Product'
   *  Product: '<S627>/Product1'
   *  Sum: '<S627>/Sum'
   *  UnitDelay: '<S627>/Unit Delay'
   */
  BaseEngineController_LS_B.s627_Sum1 = (1.0 - rtb_DataTypeConversion_e) *
    BaseEngineController_LS_DWork.s627_UnitDelay_DSTATE + rtb_UnitDelay_cf *
    rtb_DataTypeConversion_e;

  /* Logic: '<S829>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S829>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S829>/motohawk_fault_status4'
   */
  rtb_RelationalOperator5_fz = (IsFaultActive(113) || IsFaultActive(114));

  /* Logic: '<S829>/Logical Operator6' */
  rtb_LogicalOperator6_b = !rtb_RelationalOperator5_fz;

  /* Logic: '<S829>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S829>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S829>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_br = (IsFaultSuspected(113) || IsFaultSuspected(114));

  /* S-Function Block: <S456>/motohawk_ain6 Resource: TPS1AnalogInput */
  {
    extern NativeError_S TPS1AnalogInput_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    TPS1AnalogInput_AnalogInput_Get(&rtb_motohawk_ain6, NULL);
  }

  /* DataTypeConversion: '<S766>/Data Type Conversion1' incorporates:
   *  S-Function (motohawk_sfun_ain): '<S456>/motohawk_ain6'
   */
  rtb_UnitDelay_cf = (real_T)rtb_motohawk_ain6;

  /* Switch: '<S766>/Switch' incorporates:
   *  Fcn: '<S766>/Fcn'
   *  S-Function (motohawk_sfun_calibration): '<S766>/motohawk_calibration2'
   */
  if ((TPS1Rev_Polarity_DataStore())) {
    BaseEngineController_LS_B.s766_Switch = 1023.0 - rtb_UnitDelay_cf;
  } else {
    BaseEngineController_LS_B.s766_Switch = rtb_UnitDelay_cf;
  }

  /* End of Switch: '<S766>/Switch' */

  /* S-Function (motohawk_sfun_data_read): '<S826>/motohawk_data_read' */
  rtb_motohawk_data_read1_p = TPS1Raw_Adpt_Low_DataStore();

  /* MinMax: '<S826>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S766>/motohawk_calibration9'
   */
  u = (real_T)rtb_motohawk_data_read1_p;
  BaseEngineController_LS_B.s826_MinMax = (u <= (TPS1Adapt_Low_Max_DataStore()))
    || rtIsNaN((TPS1Adapt_Low_Max_DataStore())) ? u :
    (TPS1Adapt_Low_Max_DataStore());

  /* Sum: '<S766>/Sum2' */
  rtb_UnitDelay_cf = BaseEngineController_LS_B.s766_Switch -
    BaseEngineController_LS_B.s826_MinMax;

  /* S-Function (motohawk_sfun_data_read): '<S826>/motohawk_data_read1' */
  rtb_motohawk_data_read1_p = TPS1Raw_Adpt_Hi_DataStore();

  /* MinMax: '<S826>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S766>/motohawk_calibration11'
   */
  u = (real_T)rtb_motohawk_data_read1_p;
  BaseEngineController_LS_B.s826_MinMax1 = (u >= (TPS1Adapt_Hi_Min_DataStore()))
    || rtIsNaN((TPS1Adapt_Hi_Min_DataStore())) ? u : (TPS1Adapt_Hi_Min_DataStore
    ());

  /* Gain: '<S766>/Gain2' incorporates:
   *  Product: '<S766>/Product1'
   *  Sum: '<S766>/Sum1'
   */
  rtb_DataTypeConversion_e = rtb_UnitDelay_cf /
    (BaseEngineController_LS_B.s826_MinMax1 -
     BaseEngineController_LS_B.s826_MinMax) * 100.0;

  /* MinMax: '<S830>/MinMax' incorporates:
   *  Constant: '<S766>/Constant1'
   */
  rtb_DataTypeConversion_e = rtb_DataTypeConversion_e >= 0.0 ?
    rtb_DataTypeConversion_e : 0.0;

  /* MinMax: '<S830>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S766>/motohawk_calibration1'
   */
  BaseEngineController_LS_B.s830_MinMax1 = (rtb_DataTypeConversion_e <=
    (TPS1MaxLimit_DataStore())) || rtIsNaN((TPS1MaxLimit_DataStore())) ?
    rtb_DataTypeConversion_e : (TPS1MaxLimit_DataStore());

  /* S-Function Block: <S828>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s828_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_e = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S828>/Product' incorporates:
   *  MinMax: '<S828>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S828>/motohawk_calibration'
   */
  rtb_DataTypeConversion_e /= (rtb_DataTypeConversion_e >=
    (TPS1FilterConst_DataStore())) || rtIsNaN((TPS1FilterConst_DataStore())) ?
    rtb_DataTypeConversion_e : (TPS1FilterConst_DataStore());

  /* Sum: '<S836>/Sum1' incorporates:
   *  Constant: '<S836>/Constant'
   *  Product: '<S836>/Product'
   *  Product: '<S836>/Product1'
   *  Sum: '<S836>/Sum'
   *  UnitDelay: '<S836>/Unit Delay'
   */
  rtb_Sum1_hw = (1.0 - rtb_DataTypeConversion_e) *
    BaseEngineController_LS_DWork.s836_UnitDelay_DSTATE +
    BaseEngineController_LS_B.s830_MinMax1 * rtb_DataTypeConversion_e;

  /* UnitDelay: '<S829>/Unit Delay1' */
  rtb_UnitDelay1_d = BaseEngineController_LS_DWork.s829_UnitDelay1_DSTATE;

  /* If: '<S829>/If' incorporates:
   *  Logic: '<S829>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_b && rtb_LogicalOperator1_br) {
    /* Outputs for IfAction SubSystem: '<S829>/If Action Subsystem' incorporates:
     *  ActionPort: '<S837>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay1_d, &rtb_Merge_li);

    /* End of Outputs for SubSystem: '<S829>/If Action Subsystem' */
  } else if (rtb_RelationalOperator5_fz) {
    /* Outputs for IfAction SubSystem: '<S829>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S838>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((TPS1DfltValue_DataStore()),
      &rtb_Merge_li);

    /* End of Outputs for SubSystem: '<S829>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S829>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S839>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_Sum1_hw, &rtb_Merge_li);

    /* End of Outputs for SubSystem: '<S829>/If Action Subsystem2' */
  }

  /* End of If: '<S829>/If' */

  /* If: '<S840>/If' incorporates:
   *  Inport: '<S841>/In1'
   *  Inport: '<S842>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S840>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S840>/override_enable'
   */
  if ((TPS1_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S840>/NewValue' incorporates:
     *  ActionPort: '<S841>/Action Port'
     */
    BaseEngineController_LS_B.s840_Merge = (TPS1_new_DataStore());

    /* End of Outputs for SubSystem: '<S840>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S840>/OldValue' incorporates:
     *  ActionPort: '<S842>/Action Port'
     */
    BaseEngineController_LS_B.s840_Merge = rtb_Merge_li;

    /* End of Outputs for SubSystem: '<S840>/OldValue' */
  }

  /* End of If: '<S840>/If' */

  /* Logic: '<S846>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S846>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S846>/motohawk_fault_status4'
   */
  rtb_RelationalOperator5_fz = (IsFaultActive(119) || IsFaultActive(120));

  /* Logic: '<S846>/Logical Operator6' */
  rtb_LogicalOperator6_b = !rtb_RelationalOperator5_fz;

  /* Logic: '<S846>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S846>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S846>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_br = (IsFaultSuspected(119) || IsFaultSuspected(120));

  /* S-Function Block: <S456>/motohawk_ain9 Resource: TPS2AnalogInput */
  {
    extern NativeError_S TPS2AnalogInput_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    TPS2AnalogInput_AnalogInput_Get(&rtb_motohawk_ain9, NULL);
  }

  /* DataTypeConversion: '<S767>/Data Type Conversion1' incorporates:
   *  S-Function (motohawk_sfun_ain): '<S456>/motohawk_ain9'
   */
  rtb_UnitDelay_cf = (real_T)rtb_motohawk_ain9;

  /* Switch: '<S767>/Switch' incorporates:
   *  Fcn: '<S767>/Fcn'
   *  S-Function (motohawk_sfun_calibration): '<S767>/motohawk_calibration2'
   */
  if ((TPS2Rev_Polarity_DataStore())) {
    BaseEngineController_LS_B.s767_Switch = 1023.0 - rtb_UnitDelay_cf;
  } else {
    BaseEngineController_LS_B.s767_Switch = rtb_UnitDelay_cf;
  }

  /* End of Switch: '<S767>/Switch' */

  /* S-Function (motohawk_sfun_data_read): '<S843>/motohawk_data_read' */
  rtb_motohawk_data_read1_p = TPS2Raw_Adpt_Low_DataStore();

  /* MinMax: '<S843>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S767>/motohawk_calibration9'
   */
  u = (real_T)rtb_motohawk_data_read1_p;
  BaseEngineController_LS_B.s843_MinMax = (u <= (TPS2Adapt_Low_Max_DataStore()))
    || rtIsNaN((TPS2Adapt_Low_Max_DataStore())) ? u :
    (TPS2Adapt_Low_Max_DataStore());

  /* Sum: '<S767>/Sum2' */
  rtb_UnitDelay_cf = BaseEngineController_LS_B.s767_Switch -
    BaseEngineController_LS_B.s843_MinMax;

  /* S-Function (motohawk_sfun_data_read): '<S843>/motohawk_data_read1' */
  rtb_motohawk_data_read1_p = TPS2Raw_Adpt_Hi_DataStore();

  /* MinMax: '<S843>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S767>/motohawk_calibration11'
   */
  u = (real_T)rtb_motohawk_data_read1_p;
  BaseEngineController_LS_B.s843_MinMax1 = (u >= (TPS2Adapt_Hi_Min_DataStore()))
    || rtIsNaN((TPS2Adapt_Hi_Min_DataStore())) ? u : (TPS2Adapt_Hi_Min_DataStore
    ());

  /* Gain: '<S767>/Gain2' incorporates:
   *  Product: '<S767>/Product1'
   *  Sum: '<S767>/Sum1'
   */
  rtb_DataTypeConversion_e = rtb_UnitDelay_cf /
    (BaseEngineController_LS_B.s843_MinMax1 -
     BaseEngineController_LS_B.s843_MinMax) * 100.0;

  /* MinMax: '<S847>/MinMax' incorporates:
   *  Constant: '<S767>/Constant1'
   */
  rtb_DataTypeConversion_e = rtb_DataTypeConversion_e >= 0.0 ?
    rtb_DataTypeConversion_e : 0.0;

  /* MinMax: '<S847>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S767>/motohawk_calibration1'
   */
  BaseEngineController_LS_B.s847_MinMax1 = (rtb_DataTypeConversion_e <=
    (TPS2MaxLimit_DataStore())) || rtIsNaN((TPS2MaxLimit_DataStore())) ?
    rtb_DataTypeConversion_e : (TPS2MaxLimit_DataStore());

  /* S-Function Block: <S845>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s845_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_e = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S845>/Product' incorporates:
   *  MinMax: '<S845>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S845>/motohawk_calibration'
   */
  rtb_DataTypeConversion_e /= (rtb_DataTypeConversion_e >=
    (TPS2FilterConst_DataStore())) || rtIsNaN((TPS2FilterConst_DataStore())) ?
    rtb_DataTypeConversion_e : (TPS2FilterConst_DataStore());

  /* Sum: '<S853>/Sum1' incorporates:
   *  Constant: '<S853>/Constant'
   *  Product: '<S853>/Product'
   *  Product: '<S853>/Product1'
   *  Sum: '<S853>/Sum'
   *  UnitDelay: '<S853>/Unit Delay'
   */
  rtb_Sum1_lp = (1.0 - rtb_DataTypeConversion_e) *
    BaseEngineController_LS_DWork.s853_UnitDelay_DSTATE +
    BaseEngineController_LS_B.s847_MinMax1 * rtb_DataTypeConversion_e;

  /* UnitDelay: '<S846>/Unit Delay1' */
  rtb_UnitDelay1_p = BaseEngineController_LS_DWork.s846_UnitDelay1_DSTATE;

  /* If: '<S846>/If' incorporates:
   *  Logic: '<S846>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_b && rtb_LogicalOperator1_br) {
    /* Outputs for IfAction SubSystem: '<S846>/If Action Subsystem' incorporates:
     *  ActionPort: '<S854>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay1_p, &rtb_Merge_mv);

    /* End of Outputs for SubSystem: '<S846>/If Action Subsystem' */
  } else if (rtb_RelationalOperator5_fz) {
    /* Outputs for IfAction SubSystem: '<S846>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S855>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((TPS2DfltValue_DataStore()),
      &rtb_Merge_mv);

    /* End of Outputs for SubSystem: '<S846>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S846>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S856>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_Sum1_lp, &rtb_Merge_mv);

    /* End of Outputs for SubSystem: '<S846>/If Action Subsystem2' */
  }

  /* End of If: '<S846>/If' */

  /* If: '<S857>/If' incorporates:
   *  Inport: '<S858>/In1'
   *  Inport: '<S859>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S857>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S857>/override_enable'
   */
  if ((TPS2_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S857>/NewValue' incorporates:
     *  ActionPort: '<S858>/Action Port'
     */
    BaseEngineController_LS_B.s857_Merge = (TPS2_new_DataStore());

    /* End of Outputs for SubSystem: '<S857>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S857>/OldValue' incorporates:
     *  ActionPort: '<S859>/Action Port'
     */
    BaseEngineController_LS_B.s857_Merge = rtb_Merge_mv;

    /* End of Outputs for SubSystem: '<S857>/OldValue' */
  }

  /* End of If: '<S857>/If' */

  /* Logic: '<S422>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S422>/motohawk_fault_status'
   *  S-Function (motohawk_sfun_fault_status): '<S422>/motohawk_fault_status1'
   */
  rtb_LogicalOperator6_b = (IsFaultActive(113) || IsFaultActive(114));

  /* Logic: '<S422>/Logical Operator6' incorporates:
   *  Logic: '<S422>/Logical Operator5'
   *  S-Function (motohawk_sfun_fault_status): '<S422>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S422>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_br = (rtb_LogicalOperator6_b && (IsFaultActive(119) ||
    IsFaultActive(120)));

  /* Switch: '<S422>/Switch2' incorporates:
   *  Logic: '<S422>/Logical Operator1'
   *  S-Function (motohawk_sfun_fault_status): '<S422>/motohawk_fault_status4'
   */
  if (rtb_LogicalOperator1_br || IsFaultActive(121)) {
    /* MinMax: '<S422>/MinMax' */
    BaseEngineController_LS_B.s422_Switch2 =
      (BaseEngineController_LS_B.s857_Merge >=
       BaseEngineController_LS_B.s840_Merge) || rtIsNaN
      (BaseEngineController_LS_B.s840_Merge) ?
      BaseEngineController_LS_B.s857_Merge :
      BaseEngineController_LS_B.s840_Merge;
  } else {
    /* Switch: '<S422>/Switch1' */
    if (rtb_LogicalOperator6_b) {
      BaseEngineController_LS_B.s422_Switch2 =
        BaseEngineController_LS_B.s857_Merge;
    } else {
      BaseEngineController_LS_B.s422_Switch2 =
        BaseEngineController_LS_B.s840_Merge;
    }

    /* End of Switch: '<S422>/Switch1' */
  }

  /* End of Switch: '<S422>/Switch2' */

  /* RelationalOperator: '<S134>/RelOp' incorporates:
   *  Constant: '<S134>/Constant'
   */
  rtb_LogicalOperator6_b = (BaseEngineController_LS_B.s438_State == 2);

  /* S-Function Block: <S654>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s654_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_ea = ((real_T) delta) * 0.000001;
  }

  /* UnitDelay: '<S654>/Unit Delay' */
  rtb_UnitDelay_cf = BaseEngineController_LS_DWork.s654_UnitDelay_DSTATE;

  /* Logic: '<S629>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S629>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S629>/motohawk_fault_status4'
   */
  rtb_RelationalOperator5_fz = (IsFaultActive(62) || IsFaultActive(63));

  /* Logic: '<S629>/Logical Operator6' */
  rtb_LogicalOperator1_br = !rtb_RelationalOperator5_fz;

  /* Logic: '<S629>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S629>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S629>/motohawk_fault_status3'
   */
  rtb_RelOp_pu = (IsFaultSuspected(62) || IsFaultSuspected(63));

  /* S-Function Block: <S454>/motohawk_frequency_in Frequency Input Get: FuelSensorPin */
  {
    extern NativeError_S FuelSensorPin_FrequencyInput_Get(uint32_T *frequency,
      int16_T *duty_cycle);
    FuelSensorPin_FrequencyInput_Get
      (&BaseEngineController_LS_B.s454_motohawk_frequency_in, NULL);
  }

  /* DataTypeConversion: '<S629>/Data Type Conversion' */
  rtb_DataTypeConversion_e = (real_T)
    BaseEngineController_LS_B.s454_motohawk_frequency_in;

  /* Product: '<S629>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S629>/motohawk_calibration4'
   */
  rtb_UnitDelay_ju = rtb_DataTypeConversion_e * (FuelSensGain_DataStore());

  /* Sum: '<S629>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S629>/motohawk_calibration5'
   */
  BaseEngineController_LS_B.s629_Sum1 = rtb_UnitDelay_ju +
    (FuelSensOfst_DataStore());

  /* Saturate: '<S629>/Saturation' */
  rtb_Saturation_g = BaseEngineController_LS_B.s629_Sum1 >= 90.0 ? 90.0 :
    BaseEngineController_LS_B.s629_Sum1 <= 0.0 ? 0.0 :
    BaseEngineController_LS_B.s629_Sum1;

  /* UnitDelay: '<S629>/Unit Delay1' */
  rtb_UnitDelay1_ew = BaseEngineController_LS_DWork.s629_UnitDelay1_DSTATE;

  /* If: '<S629>/If' incorporates:
   *  Logic: '<S629>/Logical Operator5'
   */
  if (rtb_LogicalOperator1_br && rtb_RelOp_pu) {
    /* Outputs for IfAction SubSystem: '<S629>/If Action Subsystem' incorporates:
     *  ActionPort: '<S646>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay1_ew, &rtb_Merge_i);

    /* End of Outputs for SubSystem: '<S629>/If Action Subsystem' */
  } else if (rtb_RelationalOperator5_fz) {
    /* Outputs for IfAction SubSystem: '<S629>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S647>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((FuelSensDfltValue_DataStore()),
      &rtb_Merge_i);

    /* End of Outputs for SubSystem: '<S629>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S629>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S648>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_Saturation_g, &rtb_Merge_i);

    /* End of Outputs for SubSystem: '<S629>/If Action Subsystem2' */
  }

  /* End of If: '<S629>/If' */

  /* Product: '<S654>/Product1' incorporates:
   *  S-Function (motohawk_sfun_delta_time): '<S654>/motohawk_delta_time'
   *  Sum: '<S654>/Sum3'
   */
  rtb_DataTypeConversion_c4 = 1.0 / rtb_motohawk_delta_time_ea * (rtb_Merge_i -
    rtb_UnitDelay_cf);

  /* MinMax: '<S655>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S652>/motohawk_calibration1'
   */
  rtb_DataTypeConversion_c4 = (rtb_DataTypeConversion_c4 >= (Fall_Rate_DataStore
                                ())) || rtIsNaN((Fall_Rate_DataStore())) ?
    rtb_DataTypeConversion_c4 : (Fall_Rate_DataStore());

  /* Sum: '<S654>/Sum2' incorporates:
   *  MinMax: '<S655>/MinMax1'
   *  Product: '<S654>/Product'
   *  S-Function (motohawk_sfun_calibration): '<S652>/motohawk_calibration'
   *  S-Function (motohawk_sfun_delta_time): '<S654>/motohawk_delta_time'
   */
  rtb_Sum2_gr = ((rtb_DataTypeConversion_c4 <= (Rise_Rate_DataStore())) ||
                 rtIsNaN((Rise_Rate_DataStore())) ? rtb_DataTypeConversion_c4 :
                 (Rise_Rate_DataStore())) * rtb_motohawk_delta_time_ea +
    rtb_UnitDelay_cf;

  /* S-Function Block: <S650>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s650_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_c4 = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S650>/Product' incorporates:
   *  MinMax: '<S650>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S650>/motohawk_calibration'
   */
  rtb_DataTypeConversion_c4 /= (rtb_DataTypeConversion_c4 >=
    (FuelSensFilterConst_DataStore())) || rtIsNaN((FuelSensFilterConst_DataStore
    ())) ? rtb_DataTypeConversion_c4 : (FuelSensFilterConst_DataStore());

  /* Sum: '<S653>/Sum1' incorporates:
   *  Constant: '<S653>/Constant'
   *  Product: '<S653>/Product'
   *  Product: '<S653>/Product1'
   *  Sum: '<S653>/Sum'
   *  UnitDelay: '<S653>/Unit Delay'
   */
  rtb_Sum1_mz = (1.0 - rtb_DataTypeConversion_c4) *
    BaseEngineController_LS_DWork.s653_UnitDelay_DSTATE + rtb_Merge_i *
    rtb_DataTypeConversion_c4;

  /* UnitDelay: '<S651>/Unit Delay' */
  rtb_UnitDelay_nd = BaseEngineController_LS_DWork.s651_UnitDelay_DSTATE;

  /* UnitDelay: '<S651>/Unit Delay1' */
  rtb_UnitDelay1_h = BaseEngineController_LS_DWork.s651_UnitDelay1_DSTATE;

  /* UnitDelay: '<S651>/Unit Delay2' */
  rtb_UnitDelay_cf = BaseEngineController_LS_DWork.s651_UnitDelay2_DSTATE;

  /* MultiPortSwitch: '<S645>/Multiport Switch' incorporates:
   *  Product: '<S651>/Product'
   *  S-Function (motohawk_sfun_calibration): '<S645>/motohawk_calibration'
   *  S-Function (motohawk_sfun_calibration): '<S651>/motohawk_calibration'
   */
  switch (((uint8_T)(Filter_Type_Selection_DataStore()))) {
   case 0:
    rtb_UnitDelay_cf = rtb_Sum2_gr;
    break;

   case 1:
    rtb_UnitDelay_cf = rtb_Sum1_mz;
    break;

   default:
    /* Product: '<S651>/Product3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S651>/motohawk_calibration3'
     */
    rtb_UnitDelay_cf *= (Gain3_DataStore());

    /* Sum: '<S651>/Sum2' incorporates:
     *  Product: '<S651>/Product2'
     *  S-Function (motohawk_sfun_calibration): '<S651>/motohawk_calibration2'
     */
    rtb_UnitDelay_cf += (Gain2_DataStore()) * rtb_UnitDelay1_h;

    /* Sum: '<S651>/Sum' incorporates:
     *  Product: '<S651>/Product1'
     *  S-Function (motohawk_sfun_calibration): '<S651>/motohawk_calibration1'
     *  Sum: '<S651>/Sum1'
     */
    rtb_UnitDelay_cf = ((Gain1_DataStore()) * rtb_UnitDelay_nd +
                        rtb_UnitDelay_cf) + rtb_Merge_i;
    rtb_UnitDelay_cf *= (FinalGain_DataStore());
    break;
  }

  /* End of MultiPortSwitch: '<S645>/Multiport Switch' */
  /* If: '<S649>/If' incorporates:
   *  Inport: '<S656>/In1'
   *  Inport: '<S657>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S649>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S649>/override_enable'
   */
  if ((FuelSens_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S649>/NewValue' incorporates:
     *  ActionPort: '<S656>/Action Port'
     */
    BaseEngineController_LS_B.s649_Merge = (FuelSens_new_DataStore());

    /* End of Outputs for SubSystem: '<S649>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S649>/OldValue' incorporates:
     *  ActionPort: '<S657>/Action Port'
     */
    BaseEngineController_LS_B.s649_Merge = rtb_UnitDelay_cf;

    /* End of Outputs for SubSystem: '<S649>/OldValue' */
  }

  /* End of If: '<S649>/If' */

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
      rtb_UnitDelay_cf = 0.0;
    } else {
      rtb_UnitDelay_cf = (OpenThrottleFPCScalar_DataStore());
    }

    /* End of MultiPortSwitch: '<S140>/Multiport Switch2' */

    /* MultiPortSwitch: '<S140>/Multiport Switch1' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S140>/motohawk_data_read1'
     */
    if (AirControlSource_DataStore() == FALSE) {
      rtb_motohawk_replicate1 = rtb_APP1;
    } else {
      rtb_motohawk_replicate1 = BaseEngineController_LS_B.s422_Switch2;
    }

    /* End of MultiPortSwitch: '<S140>/Multiport Switch1' */

    /* Sum: '<S140>/Add' incorporates:
     *  Constant: '<S140>/ClearFloodFueling1'
     *  Gain: '<S140>/Gain'
     *  Product: '<S140>/Product1'
     */
    rtb_UnitDelay_cf = 0.01 * rtb_motohawk_replicate1 * rtb_UnitDelay_cf + 1.0;

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
        (BaseEngineController_LS_B.s737_Merge, (CrankECT05IdxArr_DataStore()), 5,
         (CrankECT05Idx_DataStore()));
      rtb_motohawk_prelookup1_nl = (CrankECT05Idx_DataStore());
    }

    /* S-Function Block: <S133>/motohawk_prelookup */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (CrankRPM05In_DataStore()) = BaseEngineController_LS_B.s627_Sum1;
      (CrankRPM05Idx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_LS_B.s627_Sum1, (CrankRPM05IdxArr_DataStore()), 5,
         (CrankRPM05Idx_DataStore()));
      rtb_motohawk_prelookup_c = (CrankRPM05Idx_DataStore());
    }

    /* S-Function Block: <S133>/motohawk_prelookup2 */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (CrankIAT05Idx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_LS_B.s755_Merge, (CrankIAT05IdxArr_DataStore()), 5,
         (CrankIAT05Idx_DataStore()));
      rtb_motohawk_prelookup2_h = (CrankIAT05Idx_DataStore());
    }

    /* S-Function Block: <S133>/motohawk_prelookup3 */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (CrankOXY05In_DataStore()) = BaseEngineController_LS_B.s649_Merge;
      (CrankOXY05Idx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_LS_B.s649_Merge, (CrankOXY05IdxArr_DataStore()), 5,
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
    rtb_Product_bk = rtb_UnitDelay_cf * rtb_motohawk_replicate1;

    /* S-Function Block: <S141>/motohawk_interpolation_2d */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_motohawk_interpolation_2d_o1 = TableInterpolation2D_real_T
        (rtb_motohawk_prelookup1_nl, rtb_motohawk_prelookup_c, (real_T *)
         ((CrankIACMap_DataStore())), 5, 5);
      (CrankIAC_DataStore()) = rtb_motohawk_interpolation_2d_o1;
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
    rtb_UnitDelay_cf = rtb_motohawk_interpolation_2d_o1 *
      rtb_motohawk_interpolation_1d_hw * rtb_motohawk_interpolation_1d1_os;

    /* Switch: '<S142>/Switch' */
    rtb_motohawk_replicate1 = rtb_UnitDelay_cf;

    /* DataTypeConversion: '<S133>/Data Type Conversion' */
    BaseEngineController_LS_B.s135_IACP = rtb_motohawk_replicate1;

    /* Switch: '<S142>/Switch1' incorporates:
     *  Constant: '<S142>/Constant'
     *  Constant: '<S142>/Constant1'
     *  S-Function (motohawk_sfun_data_read): '<S142>/motohawk_data_read'
     *  Sum: '<S142>/Sum'
     */
    if (((uint8_T)IACType_DataStore()) > 0) {
      rtb_motohawk_replicate1 = 100.0 - rtb_UnitDelay_cf;
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
      rtb_motohawk_interpolation_1d5_j = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_c, (real_T *) ((CrankMakeUpEOITbl_DataStore())),
         5);
      (CrankMakeUpEOI_DataStore()) = rtb_motohawk_interpolation_1d5_j;
    }

    /* ZeroOrderHold: '<S133>/Zero-Order Hold8' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S133>/motohawk_interpolation_1d5'
     *  S-Function (motohawk_sfun_prelookup): '<S133>/motohawk_prelookup'
     */
    BaseEngineController_LS_B.s135_MakeUpEOI = rtb_motohawk_interpolation_1d5_j;

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
  /* S-Function Block: <S409>/motohawk_prelookup2 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (TPS09In_DataStore()) = BaseEngineController_LS_B.s422_Switch2;
    (TPS09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s422_Switch2, (TPS09IdxArr_DataStore()), 9,
       (TPS09Idx_DataStore()));
    rtb_motohawk_prelookup2 = (TPS09Idx_DataStore());
  }

  /* Logic: '<S426>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S426>/motohawk_fault_status2'
   */
  rtb_LogicalOperator6_b = !IsFaultActive(66);

  /* Logic: '<S426>/Logical Operator2' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S426>/motohawk_fault_status1'
   */
  rtb_LogicalOperator1_br = !IsFaultActive(69);

  /* S-Function (motohawk_sfun_read_canmsg): '<S457>/Read CAN Message' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_24975p0015;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_24975p0015,
      &messageObj);
    if ((BaseEngineController_LS_B.s457_ReadCANMessage_o1 + 1) >
        BaseEngineController_LS_B.s457_ReadCANMessage_o1)
      BaseEngineController_LS_B.s457_ReadCANMessage_o1++;
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
      BaseEngineController_LS_B.s457_ReadCANMessage_o2 = (boolean_T) tmp0;
      BaseEngineController_LS_B.s457_ReadCANMessage_o3 = ((real_T) tmp1) +
        ((real_T) 2000);
      BaseEngineController_LS_B.s457_ReadCANMessage_o4 = (real_T) tmp2;
      BaseEngineController_LS_B.s457_ReadCANMessage_o5 = (real_T) tmp3;
      BaseEngineController_LS_B.s457_ReadCANMessage_o6 = (real_T) tmp4;
      BaseEngineController_LS_B.s457_ReadCANMessage_o7 = (real_T) tmp5;
      BaseEngineController_LS_B.s457_ReadCANMessage_o8 = (real_T) tmp6;
      BaseEngineController_LS_B.s457_ReadCANMessage_o1 = 0;
    }
  }

  /* If: '<S459>/If' incorporates:
   *  Inport: '<S472>/In1'
   *  Inport: '<S473>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S459>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S459>/override_enable'
   */
  if ((GPS_Valid_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S459>/NewValue' incorporates:
     *  ActionPort: '<S472>/Action Port'
     */
    rtb_Merge_n2 = (GPS_Valid_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S459>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S459>/OldValue' incorporates:
     *  ActionPort: '<S473>/Action Port'
     */
    rtb_Merge_n2 = BaseEngineController_LS_B.s457_ReadCANMessage_o2;

    /* End of Outputs for SubSystem: '<S459>/OldValue' */
  }

  /* End of If: '<S459>/If' */

  /* Logic: '<S426>/Logical Operator' */
  rtb_LogicalOperator6_b = (rtb_Merge_n2 && rtb_LogicalOperator6_b &&
    rtb_LogicalOperator1_br);

  /* S-Function (motohawk_sfun_read_canmsg): '<S457>/Read CAN Message2' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_24489p0043;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_24489p0043,
      &messageObj);
    if ((BaseEngineController_LS_B.s457_ReadCANMessage2_o1 + 1) >
        BaseEngineController_LS_B.s457_ReadCANMessage2_o1)
      BaseEngineController_LS_B.s457_ReadCANMessage2_o1++;
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
      BaseEngineController_LS_B.s457_ReadCANMessage2_o2 = ((real_T) tmp0) /
        ((real_T) 62.1373);
      BaseEngineController_LS_B.s457_ReadCANMessage2_o3 = ((real_T) tmp1) /
        ((real_T) 3.28084);
      BaseEngineController_LS_B.s457_ReadCANMessage2_o4 = ((real_T) tmp2) /
        ((real_T) 100);
      BaseEngineController_LS_B.s457_ReadCANMessage2_o5 = (real_T) tmp3;
      BaseEngineController_LS_B.s457_ReadCANMessage2_o1 = 0;
    }
  }

  /* If: '<S471>/If' incorporates:
   *  Inport: '<S496>/In1'
   *  Inport: '<S497>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S471>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S471>/override_enable'
   */
  if ((GPS_Speed_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S471>/NewValue' incorporates:
     *  ActionPort: '<S496>/Action Port'
     */
    rtb_UnitDelay_cf = (GPS_Speed_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S471>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S471>/OldValue' incorporates:
     *  ActionPort: '<S497>/Action Port'
     */
    rtb_UnitDelay_cf = BaseEngineController_LS_B.s457_ReadCANMessage2_o2;

    /* End of Outputs for SubSystem: '<S471>/OldValue' */
  }

  /* End of If: '<S471>/If' */

  /* Switch: '<S426>/Switch2' incorporates:
   *  Logic: '<S426>/Logical Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S426>/motohawk_calibration1'
   */
  if ((((uint8_T)(VSPD_GPSPreferred_DataStore())) != 0) &&
      rtb_LogicalOperator6_b) {
    /* Switch: '<S426>/Switch1' */
    BaseEngineController_LS_B.s426_Switch2 = rtb_UnitDelay_cf;
  } else {
    /* Switch: '<S426>/Switch' incorporates:
     *  Constant: '<S426>/Constant'
     *  S-Function (motohawk_sfun_calibration): '<S426>/motohawk_calibration'
     */
    if (((uint8_T)(VSPD_DigitalPresent_DataStore())) != 0) {
      BaseEngineController_LS_B.s426_Switch2 =
        BaseEngineController_LS_B.s577_Switch;
    } else {
      BaseEngineController_LS_B.s426_Switch2 = 0.0;
    }

    /* End of Switch: '<S426>/Switch' */
  }

  /* End of Switch: '<S426>/Switch2' */
  /* S-Function Block: <S410>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (VSPD17In_DataStore()) = BaseEngineController_LS_B.s426_Switch2;
    (VSPD17Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s426_Switch2, (VSPD17IdxArr_DataStore()), 17,
       (VSPD17Idx_DataStore()));
    rtb_motohawk_prelookup1_k = (VSPD17Idx_DataStore());
  }

  /* Outputs for Atomic SubSystem: '<S372>/Base TPS Request' */

  /* UnitDelay: '<S412>/Unit Delay2' */
  rtb_UnitDelay_gh = BaseEngineController_LS_DWork.s412_UnitDelay2_DSTATE;

  /* S-Function Block: <S412>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (APP17In_DataStore()) = BaseEngineController_LS_B.s415_Switch1;
    (APP17Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s415_Switch1, (APP17IdxArr_DataStore()), 17,
       (APP17Idx_DataStore()));
    rtb_motohawk_prelookup_gv = (APP17Idx_DataStore());
  }

  /* S-Function Block: <S412>/motohawk_interpolation_2d */
  {
    extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
      real_T *map_data, uint32_T row_sz, uint32_T col_sz);
    rtb_motohawk_interpolation_2d_h = TableInterpolation2D_real_T
      (rtb_motohawk_prelookup1_k, rtb_motohawk_prelookup_gv, (real_T *)
       ((ETCRequestMap_DataStore())), 17, 17);
    (ETCRequest_DataStore()) = rtb_motohawk_interpolation_2d_h;
  }

  /* RelationalOperator: '<S412>/Relational Operator3' */
  BaseEngineController_LS_B.s412_RelationalOperator3 = ((rtb_UnitDelay_gh <
    rtb_motohawk_interpolation_2d_h));

  /* Outputs for Enabled SubSystem: '<S412>/PassThrough1' */
  BaseEngineController_LS_PassThrough1
    (BaseEngineController_LS_B.s412_RelationalOperator3,
     (ETCReqIncFiltC_DataStore()), &BaseEngineController_LS_B.s412_Merge);

  /* End of Outputs for SubSystem: '<S412>/PassThrough1' */

  /* RelationalOperator: '<S412>/Relational Operator2' */
  rtb_RelationalOperator2_bw = (rtb_UnitDelay_gh >
    rtb_motohawk_interpolation_2d_h);

  /* Outputs for Enabled SubSystem: '<S412>/PassThrough2' */
  BaseEngineController_LS_PassThrough1(rtb_RelationalOperator2_bw,
    (ETCReqDecFiltC_DataStore()), &BaseEngineController_LS_B.s412_Merge);

  /* End of Outputs for SubSystem: '<S412>/PassThrough2' */

  /* S-Function Block: <S430>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s430_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_l0 = ((real_T) delta) * 0.000001;
  }

  /* S-Function Block: <S412>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s412_motohawk_delta_time_DWORK1, NULL);
    rtb_UnitDelay_gh = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S412>/Product' incorporates:
   *  MinMax: '<S412>/MinMax'
   */
  rtb_UnitDelay_gh /= (rtb_UnitDelay_gh >= BaseEngineController_LS_B.s412_Merge)
    || rtIsNaN(BaseEngineController_LS_B.s412_Merge) ? rtb_UnitDelay_gh :
    BaseEngineController_LS_B.s412_Merge;

  /* Product: '<S427>/Product' */
  rtb_UnitDelay_cf = rtb_motohawk_interpolation_2d_h * rtb_UnitDelay_gh;

  /* Sum: '<S427>/Sum' incorporates:
   *  Constant: '<S427>/Constant'
   */
  rtb_UnitDelay_ju = 1.0 - rtb_UnitDelay_gh;

  /* UnitDelay: '<S427>/Unit Delay' */
  rtb_UnitDelay_gh = BaseEngineController_LS_DWork.s427_UnitDelay_DSTATE;

  /* Sum: '<S427>/Sum1' incorporates:
   *  Product: '<S427>/Product1'
   */
  rtb_UnitDelay_ju = rtb_UnitDelay_ju * rtb_UnitDelay_gh + rtb_UnitDelay_cf;

  /* UnitDelay: '<S430>/Unit Delay' */
  rtb_UnitDelay_gh = BaseEngineController_LS_DWork.s430_UnitDelay_DSTATE;

  /* Product: '<S430>/Product1' incorporates:
   *  S-Function (motohawk_sfun_delta_time): '<S430>/motohawk_delta_time'
   *  Sum: '<S430>/Sum3'
   */
  rtb_UnitDelay_cf = 1.0 / rtb_motohawk_delta_time_l0 * (rtb_UnitDelay_ju -
    rtb_UnitDelay_gh);

  /* S-Function Block: <S412>/motohawk_interpolation_1d3 */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_motohawk_interpolation_1d1_ku = TableInterpolation1D_real_T
      (rtb_motohawk_prelookup2, (real_T *) ((ETCReqFallRateTbl_DataStore())), 9);
    (ETCReqFallRate_DataStore()) = rtb_motohawk_interpolation_1d1_ku;
  }

  /* MinMax: '<S431>/MinMax' */
  rtb_Abs_k = (rtb_UnitDelay_cf >= rtb_motohawk_interpolation_1d1_ku) || rtIsNaN
    (rtb_motohawk_interpolation_1d1_ku) ? rtb_UnitDelay_cf :
    rtb_motohawk_interpolation_1d1_ku;

  /* S-Function Block: <S412>/motohawk_interpolation_1d1 */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_motohawk_interpolation_1d1_ku = TableInterpolation1D_real_T
      (rtb_motohawk_prelookup2, (real_T *) ((ETCReqRiseRateTbl_DataStore())), 9);
    (ETCReqRiseRate_DataStore()) = rtb_motohawk_interpolation_1d1_ku;
  }

  /* Sum: '<S430>/Sum2' incorporates:
   *  MinMax: '<S431>/MinMax'
   *  MinMax: '<S431>/MinMax1'
   *  Product: '<S430>/Product'
   *  S-Function (motohawk_sfun_delta_time): '<S430>/motohawk_delta_time'
   */
  BaseEngineController_LS_B.s430_Sum2 = ((rtb_Abs_k <=
    rtb_motohawk_interpolation_1d1_ku) || rtIsNaN
    (rtb_motohawk_interpolation_1d1_ku) ? rtb_Abs_k :
    rtb_motohawk_interpolation_1d1_ku) * rtb_motohawk_delta_time_l0 +
    rtb_UnitDelay_gh;

  /* Update for UnitDelay: '<S412>/Unit Delay2' incorporates:
   *  UnitDelay: '<S412>/Unit Delay1'
   */
  BaseEngineController_LS_DWork.s412_UnitDelay2_DSTATE =
    BaseEngineController_LS_DWork.s412_UnitDelay1_DSTATE;

  /* Update for UnitDelay: '<S427>/Unit Delay' */
  BaseEngineController_LS_DWork.s427_UnitDelay_DSTATE = rtb_UnitDelay_ju;

  /* Update for UnitDelay: '<S430>/Unit Delay' */
  BaseEngineController_LS_DWork.s430_UnitDelay_DSTATE =
    BaseEngineController_LS_B.s430_Sum2;

  /* Update for UnitDelay: '<S412>/Unit Delay1' incorporates:
   *  UnitDelay: '<S412>/Unit Delay3'
   */
  BaseEngineController_LS_DWork.s412_UnitDelay1_DSTATE =
    BaseEngineController_LS_DWork.s412_UnitDelay3_DSTATE;

  /* Update for UnitDelay: '<S412>/Unit Delay3' incorporates:
   *  UnitDelay: '<S412>/Unit Delay4'
   */
  BaseEngineController_LS_DWork.s412_UnitDelay3_DSTATE =
    BaseEngineController_LS_DWork.s412_UnitDelay4_DSTATE;

  /* Update for UnitDelay: '<S412>/Unit Delay4' */
  BaseEngineController_LS_DWork.s412_UnitDelay4_DSTATE =
    rtb_motohawk_interpolation_2d_h;

  /* End of Outputs for SubSystem: '<S372>/Base TPS Request' */

  /* UnitDelay: '<S420>/Unit Delay' */
  rtb_UnitDelay_ju = BaseEngineController_LS_DWork.s420_UnitDelay_DSTATE;

  /* Sum: '<S420>/Sum' incorporates:
   *  Constant: '<S420>/Constant'
   *  S-Function (motohawk_sfun_calibration): '<S420>/motohawk_calibration'
   */
  rtb_Switch1_f = 1.0 - (O2DelagFilterConst_DataStore());

  /* S-Function Block: <S526>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s526_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_c4 = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S526>/Product' incorporates:
   *  MinMax: '<S526>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S526>/motohawk_calibration'
   */
  rtb_DataTypeConversion_c4 /= (rtb_DataTypeConversion_c4 >=
    (Bank2_EquivRatioFilterConst_DataStore())) || rtIsNaN
    ((Bank2_EquivRatioFilterConst_DataStore())) ? rtb_DataTypeConversion_c4 :
    (Bank2_EquivRatioFilterConst_DataStore());

  /* Logic: '<S499>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S499>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S499>/motohawk_fault_status4'
   */
  rtb_RelationalOperator5_fz = (IsFaultActive(23) || IsFaultActive(24));

  /* Logic: '<S499>/Logical Operator6' */
  rtb_LogicalOperator6_b = !rtb_RelationalOperator5_fz;

  /* Logic: '<S499>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S499>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S499>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_br = (IsFaultSuspected(23) || IsFaultSuspected(24));

  /* S-Function (motohawk_sfun_read_canmsg): '<S458>/Read CAN Message1' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_26754p0004;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_26754p0004,
      &messageObj);
    if ((BaseEngineController_LS_B.s458_ReadCANMessage1_o1 + 1) >
        BaseEngineController_LS_B.s458_ReadCANMessage1_o1)
      BaseEngineController_LS_B.s458_ReadCANMessage1_o1++;
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
      BaseEngineController_LS_B.s458_ReadCANMessage1_o2 = ((real_T) tmp0) /
        ((real_T) 10000);
      BaseEngineController_LS_B.s458_ReadCANMessage1_o3 = ((real_T) tmp1) /
        ((real_T) 1000);
      BaseEngineController_LS_B.s458_ReadCANMessage1_o4 = ((real_T) tmp2) /
        ((real_T) 10);
      BaseEngineController_LS_B.s458_ReadCANMessage1_o5 = ((real_T) tmp3) /
        ((real_T) 10);
      BaseEngineController_LS_B.s458_ReadCANMessage1_o6 = (real_T) tmp4;
      BaseEngineController_LS_B.s458_ReadCANMessage1_o7 = (real_T) tmp5;
      BaseEngineController_LS_B.s458_ReadCANMessage1_o8 = (real_T) tmp6;
      BaseEngineController_LS_B.s458_ReadCANMessage1_o9 = (real_T) tmp7;
      BaseEngineController_LS_B.s458_ReadCANMessage1_o10 = (real_T) tmp8;
      BaseEngineController_LS_B.s458_ReadCANMessage1_o1 = 0;
    }
  }

  /* If: '<S517>/If' incorporates:
   *  Inport: '<S568>/In1'
   *  Inport: '<S569>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S517>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S517>/override_enable'
   */
  if ((Bank2_Lambda_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S517>/NewValue' incorporates:
     *  ActionPort: '<S568>/Action Port'
     */
    rtb_Merge_gq = (Bank2_Lambda_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S517>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S517>/OldValue' incorporates:
     *  ActionPort: '<S569>/Action Port'
     */
    rtb_Merge_gq = BaseEngineController_LS_B.s458_ReadCANMessage1_o2;

    /* End of Outputs for SubSystem: '<S517>/OldValue' */
  }

  /* End of If: '<S517>/If' */

  /* Math: '<S458>/Math Function1' incorporates:
   *  Saturate: '<S458>/Saturation1'
   *
   * About '<S458>/Math Function1':
   *  Operator: reciprocal
   */
  BaseEngineController_LS_B.s458_MathFunction1 = 1.0 / (rtb_Merge_gq >= 0.1 ?
    rtb_Merge_gq : 0.1);

  /* Product: '<S499>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S499>/motohawk_calibration4'
   */
  rtb_UnitDelay_cf = BaseEngineController_LS_B.s458_MathFunction1 *
    (Bank2_EquivRatioGain_DataStore());

  /* Sum: '<S499>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S499>/motohawk_calibration5'
   */
  BaseEngineController_LS_B.s499_Sum1 = rtb_UnitDelay_cf +
    (Bank2_EquivRatioOfst_DataStore());

  /* UnitDelay: '<S499>/Unit Delay1' */
  rtb_UnitDelay1_m = BaseEngineController_LS_DWork.s499_UnitDelay1_DSTATE;

  /* If: '<S499>/If' incorporates:
   *  Logic: '<S499>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_b && rtb_LogicalOperator1_br) {
    /* Outputs for IfAction SubSystem: '<S499>/If Action Subsystem' incorporates:
     *  ActionPort: '<S527>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay1_m, &rtb_Merge_h);

    /* End of Outputs for SubSystem: '<S499>/If Action Subsystem' */
  } else if (rtb_RelationalOperator5_fz) {
    /* Outputs for IfAction SubSystem: '<S499>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S528>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      ((Bank2_EquivRatioDfltValue_DataStore()), &rtb_Merge_h);

    /* End of Outputs for SubSystem: '<S499>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S499>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S529>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      (BaseEngineController_LS_B.s499_Sum1, &rtb_Merge_h);

    /* End of Outputs for SubSystem: '<S499>/If Action Subsystem2' */
  }

  /* End of If: '<S499>/If' */

  /* Sum: '<S531>/Sum1' incorporates:
   *  Constant: '<S531>/Constant'
   *  Product: '<S531>/Product'
   *  Product: '<S531>/Product1'
   *  Sum: '<S531>/Sum'
   *  UnitDelay: '<S531>/Unit Delay'
   */
  rtb_Sum1_du = (1.0 - rtb_DataTypeConversion_c4) *
    BaseEngineController_LS_DWork.s531_UnitDelay_DSTATE + rtb_Merge_h *
    rtb_DataTypeConversion_c4;

  /* If: '<S530>/If' incorporates:
   *  Inport: '<S532>/In1'
   *  Inport: '<S533>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S530>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S530>/override_enable'
   */
  if ((Bank2_EquivRatio_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S530>/NewValue' incorporates:
     *  ActionPort: '<S532>/Action Port'
     */
    BaseEngineController_LS_B.s530_Merge = (Bank2_EquivRatio_new_DataStore());

    /* End of Outputs for SubSystem: '<S530>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S530>/OldValue' incorporates:
     *  ActionPort: '<S533>/Action Port'
     */
    BaseEngineController_LS_B.s530_Merge = rtb_Sum1_du;

    /* End of Outputs for SubSystem: '<S530>/OldValue' */
  }

  /* End of If: '<S530>/If' */

  /* MultiPortSwitch: '<S458>/Multiport Switch' incorporates:
   *  Constant: '<S458>/Constant'
   *  S-Function (motohawk_sfun_calibration): '<S458>/motohawk_calibration2'
   */
  if (((uint8_T)(Bank2_Enable_DataStore())) == 0) {
    rtb_DataTypeConversion_c4 = 0.0;
  } else {
    rtb_DataTypeConversion_c4 = BaseEngineController_LS_B.s530_Merge;
  }

  /* End of MultiPortSwitch: '<S458>/Multiport Switch' */
  /* S-Function Block: <S518>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s518_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_fq = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S518>/Product' incorporates:
   *  MinMax: '<S518>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S518>/motohawk_calibration'
   */
  rtb_DataTypeConversion_fq /= (rtb_DataTypeConversion_fq >=
    (Bank1_EquivRatioFilterConst_DataStore())) || rtIsNaN
    ((Bank1_EquivRatioFilterConst_DataStore())) ? rtb_DataTypeConversion_fq :
    (Bank1_EquivRatioFilterConst_DataStore());

  /* Logic: '<S498>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S498>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S498>/motohawk_fault_status4'
   */
  rtb_RelationalOperator5_fz = (IsFaultActive(21) || IsFaultActive(22));

  /* Logic: '<S498>/Logical Operator6' */
  rtb_LogicalOperator6_b = !rtb_RelationalOperator5_fz;

  /* Logic: '<S498>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S498>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S498>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_br = (IsFaultSuspected(21) || IsFaultSuspected(22));

  /* S-Function (motohawk_sfun_read_canmsg): '<S458>/Read CAN Message' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_26753p0004;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_26753p0004,
      &messageObj);
    if ((BaseEngineController_LS_B.s458_ReadCANMessage_o1 + 1) >
        BaseEngineController_LS_B.s458_ReadCANMessage_o1)
      BaseEngineController_LS_B.s458_ReadCANMessage_o1++;
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
      BaseEngineController_LS_B.s458_ReadCANMessage_o2 = ((real_T) tmp0) /
        ((real_T) 10000);
      BaseEngineController_LS_B.s458_ReadCANMessage_o3 = ((real_T) tmp1) /
        ((real_T) 1000);
      BaseEngineController_LS_B.s458_ReadCANMessage_o4 = ((real_T) tmp2) /
        ((real_T) 10);
      BaseEngineController_LS_B.s458_ReadCANMessage_o5 = ((real_T) tmp3) /
        ((real_T) 10);
      BaseEngineController_LS_B.s458_ReadCANMessage_o6 = (real_T) tmp4;
      BaseEngineController_LS_B.s458_ReadCANMessage_o7 = (real_T) tmp5;
      BaseEngineController_LS_B.s458_ReadCANMessage_o8 = (real_T) tmp6;
      BaseEngineController_LS_B.s458_ReadCANMessage_o9 = (real_T) tmp7;
      BaseEngineController_LS_B.s458_ReadCANMessage_o10 = (real_T) tmp8;
      BaseEngineController_LS_B.s458_ReadCANMessage_o1 = 0;
    }
  }

  /* If: '<S500>/If' incorporates:
   *  Inport: '<S534>/In1'
   *  Inport: '<S535>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S500>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S500>/override_enable'
   */
  if ((Bank1_Lambda_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S500>/NewValue' incorporates:
     *  ActionPort: '<S534>/Action Port'
     */
    rtb_Merge_as = (Bank1_Lambda_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S500>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S500>/OldValue' incorporates:
     *  ActionPort: '<S535>/Action Port'
     */
    rtb_Merge_as = BaseEngineController_LS_B.s458_ReadCANMessage_o2;

    /* End of Outputs for SubSystem: '<S500>/OldValue' */
  }

  /* End of If: '<S500>/If' */

  /* Math: '<S458>/Math Function' incorporates:
   *  Saturate: '<S458>/Saturation'
   *
   * About '<S458>/Math Function':
   *  Operator: reciprocal
   */
  BaseEngineController_LS_B.s458_MathFunction = 1.0 / (rtb_Merge_as >= 0.1 ?
    rtb_Merge_as : 0.1);

  /* Product: '<S498>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S498>/motohawk_calibration4'
   */
  rtb_UnitDelay_cf = BaseEngineController_LS_B.s458_MathFunction *
    (Bank1_EquivRatioGain_DataStore());

  /* Sum: '<S498>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S498>/motohawk_calibration5'
   */
  BaseEngineController_LS_B.s498_Sum1 = rtb_UnitDelay_cf +
    (Bank1_EquivRatioOfst_DataStore());

  /* UnitDelay: '<S498>/Unit Delay1' */
  rtb_UnitDelay1_jn = BaseEngineController_LS_DWork.s498_UnitDelay1_DSTATE;

  /* If: '<S498>/If' incorporates:
   *  Logic: '<S498>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_b && rtb_LogicalOperator1_br) {
    /* Outputs for IfAction SubSystem: '<S498>/If Action Subsystem' incorporates:
     *  ActionPort: '<S519>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay1_jn, &rtb_Merge_ox);

    /* End of Outputs for SubSystem: '<S498>/If Action Subsystem' */
  } else if (rtb_RelationalOperator5_fz) {
    /* Outputs for IfAction SubSystem: '<S498>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S520>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      ((Bank1_EquivRatioDfltValue_DataStore()), &rtb_Merge_ox);

    /* End of Outputs for SubSystem: '<S498>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S498>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S521>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      (BaseEngineController_LS_B.s498_Sum1, &rtb_Merge_ox);

    /* End of Outputs for SubSystem: '<S498>/If Action Subsystem2' */
  }

  /* End of If: '<S498>/If' */

  /* Sum: '<S523>/Sum1' incorporates:
   *  Constant: '<S523>/Constant'
   *  Product: '<S523>/Product'
   *  Product: '<S523>/Product1'
   *  Sum: '<S523>/Sum'
   *  UnitDelay: '<S523>/Unit Delay'
   */
  rtb_Sum1_ir = (1.0 - rtb_DataTypeConversion_fq) *
    BaseEngineController_LS_DWork.s523_UnitDelay_DSTATE + rtb_Merge_ox *
    rtb_DataTypeConversion_fq;

  /* If: '<S522>/If' incorporates:
   *  Inport: '<S524>/In1'
   *  Inport: '<S525>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S522>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S522>/override_enable'
   */
  if ((Bank1_EquivRatio_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S522>/NewValue' incorporates:
     *  ActionPort: '<S524>/Action Port'
     */
    BaseEngineController_LS_B.s522_Merge = (Bank1_EquivRatio_new_DataStore());

    /* End of Outputs for SubSystem: '<S522>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S522>/OldValue' incorporates:
     *  ActionPort: '<S525>/Action Port'
     */
    BaseEngineController_LS_B.s522_Merge = rtb_Sum1_ir;

    /* End of Outputs for SubSystem: '<S522>/OldValue' */
  }

  /* End of If: '<S522>/If' */

  /* Gain: '<S458>/Gain' incorporates:
   *  Sum: '<S458>/Add'
   */
  BaseEngineController_LS_B.s458_Gain = (BaseEngineController_LS_B.s522_Merge +
    rtb_DataTypeConversion_c4) * 0.5;

  /* Sum: '<S420>/Sum1' incorporates:
   *  Product: '<S420>/Product'
   *  Product: '<S420>/Product1'
   *  S-Function (motohawk_sfun_calibration): '<S420>/motohawk_calibration'
   */
  BaseEngineController_LS_B.s420_Sum1 = rtb_UnitDelay_ju * rtb_Switch1_f +
    (O2DelagFilterConst_DataStore()) * BaseEngineController_LS_B.s458_Gain;

  /* S-Function Block: <S443>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s443_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_f = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S443>/Switch' incorporates:
   *  Constant: '<S442>/Constant'
   *  Constant: '<S443>/Constant'
   *  RelationalOperator: '<S442>/RelOp'
   *  S-Function (motohawk_sfun_data_read): '<S424>/motohawk_data_read'
   *  S-Function (motohawk_sfun_data_read): '<S443>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S443>/motohawk_delta_time'
   *  Sum: '<S443>/Sum'
   */
  if (((uint8_T)EngineState_DataStore()) == 3) {
    BaseEngineController_LS_B.s443_Switch = rtb_motohawk_delta_time_f +
      TimeSinceRunTimer_DataStore();
  } else {
    BaseEngineController_LS_B.s443_Switch = 0.0;
  }

  /* End of Switch: '<S443>/Switch' */
  /* S-Function Block: <S407>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (RPM09In_DataStore()) = BaseEngineController_LS_B.s627_Sum1;
    (RPM09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s627_Sum1, (RPM09IdxArr_DataStore()), 9,
       (RPM09Idx_DataStore()));
    BaseEngineController_LS_B.s407_motohawk_prelookup1 = (RPM09Idx_DataStore());
  }

  /* S-Function Block: <S407>/motohawk_prelookup5 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (RPM17In_DataStore()) = BaseEngineController_LS_B.s627_Sum1;
    (RPM17Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s627_Sum1, (RPM17IdxArr_DataStore()), 17,
       (RPM17Idx_DataStore()));
    BaseEngineController_LS_B.s407_Indexes = (RPM17Idx_DataStore());
  }

  /* S-Function Block: <S403>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (ECT05In_DataStore()) = BaseEngineController_LS_B.s737_Merge;
    (ECT05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s737_Merge, (ECT05IdxArr_DataStore()), 5,
       (ECT05Idx_DataStore()));
    BaseEngineController_LS_B.s403_motohawk_prelookup = (ECT05Idx_DataStore());
  }

  /* S-Function Block: <S403>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (ECT09In_DataStore()) = BaseEngineController_LS_B.s737_Merge;
    (ECT09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s737_Merge, (ECT09IdxArr_DataStore()), 9,
       (ECT09Idx_DataStore()));
    rtb_motohawk_prelookup1_h = (ECT09Idx_DataStore());
  }

  /* S-Function Block: <S404>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (IAT05In_DataStore()) = BaseEngineController_LS_B.s755_Merge;
    (IAT05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s755_Merge, (IAT05IdxArr_DataStore()), 5,
       (IAT05Idx_DataStore()));
    BaseEngineController_LS_B.s404_motohawk_prelookup = (IAT05Idx_DataStore());
  }

  /* S-Function Block: <S700>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s700_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_fq = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S700>/Product' incorporates:
   *  MinMax: '<S700>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S700>/motohawk_calibration'
   */
  rtb_DataTypeConversion_fq /= (rtb_DataTypeConversion_fq >=
    (SysVoltFilterConst_DataStore())) || rtIsNaN((SysVoltFilterConst_DataStore()))
    ? rtb_DataTypeConversion_fq : (SysVoltFilterConst_DataStore());

  /* Logic: '<S636>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S636>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S636>/motohawk_fault_status4'
   */
  rtb_RelationalOperator5_fz = (IsFaultActive(107) || IsFaultActive(108));

  /* Logic: '<S636>/Logical Operator6' */
  rtb_LogicalOperator6_b = !rtb_RelationalOperator5_fz;

  /* Logic: '<S636>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S636>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S636>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_br = (IsFaultSuspected(107) || IsFaultSuspected(108));

  /* S-Function Block: <S454>/motohawk_ain14 Resource: SysVoltage */
  {
    extern NativeError_S SysVoltage_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    SysVoltage_AnalogInput_Get(&BaseEngineController_LS_B.s454_motohawk_ain14,
      NULL);
  }

  /* DataTypeConversion: '<S636>/Data Type Conversion' */
  rtb_DataTypeConversion_c4 = (real_T)
    BaseEngineController_LS_B.s454_motohawk_ain14;

  /* Product: '<S636>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S636>/motohawk_calibration4'
   */
  rtb_UnitDelay_cf = rtb_DataTypeConversion_c4 * (SysVoltGain_DataStore());

  /* Sum: '<S636>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S636>/motohawk_calibration5'
   */
  BaseEngineController_LS_B.s636_Sum1 = rtb_UnitDelay_cf +
    (SysVoltOfst_DataStore());

  /* UnitDelay: '<S636>/Unit Delay1' */
  rtb_UnitDelay1_f4 = BaseEngineController_LS_DWork.s636_UnitDelay1_DSTATE;

  /* If: '<S636>/If' incorporates:
   *  Logic: '<S636>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_b && rtb_LogicalOperator1_br) {
    /* Outputs for IfAction SubSystem: '<S636>/If Action Subsystem' incorporates:
     *  ActionPort: '<S701>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay1_f4, &rtb_Merge_f);

    /* End of Outputs for SubSystem: '<S636>/If Action Subsystem' */
  } else if (rtb_RelationalOperator5_fz) {
    /* Outputs for IfAction SubSystem: '<S636>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S702>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((SysVoltDfltValue_DataStore()),
      &rtb_Merge_f);

    /* End of Outputs for SubSystem: '<S636>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S636>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S703>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      (BaseEngineController_LS_B.s636_Sum1, &rtb_Merge_f);

    /* End of Outputs for SubSystem: '<S636>/If Action Subsystem2' */
  }

  /* End of If: '<S636>/If' */

  /* Sum: '<S705>/Sum1' incorporates:
   *  Constant: '<S705>/Constant'
   *  Product: '<S705>/Product'
   *  Product: '<S705>/Product1'
   *  Sum: '<S705>/Sum'
   *  UnitDelay: '<S705>/Unit Delay'
   */
  rtb_Sum1_nl = (1.0 - rtb_DataTypeConversion_fq) *
    BaseEngineController_LS_DWork.s705_UnitDelay_DSTATE + rtb_Merge_f *
    rtb_DataTypeConversion_fq;

  /* If: '<S704>/If' incorporates:
   *  Inport: '<S706>/In1'
   *  Inport: '<S707>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S704>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S704>/override_enable'
   */
  if ((SysVolt_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S704>/NewValue' incorporates:
     *  ActionPort: '<S706>/Action Port'
     */
    BaseEngineController_LS_B.s704_Merge = (SysVolt_new_DataStore());

    /* End of Outputs for SubSystem: '<S704>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S704>/OldValue' incorporates:
     *  ActionPort: '<S707>/Action Port'
     */
    BaseEngineController_LS_B.s704_Merge = rtb_Sum1_nl;

    /* End of Outputs for SubSystem: '<S704>/OldValue' */
  }

  /* End of If: '<S704>/If' */

  /* S-Function Block: <S408>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (SysVolt09In_DataStore()) = BaseEngineController_LS_B.s704_Merge;
    (SysVolt09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s704_Merge, (SysVolt09IdxArr_DataStore()), 9,
       (SysVolt09Idx_DataStore()));
    BaseEngineController_LS_B.s408_motohawk_prelookup = (SysVolt09Idx_DataStore());
  }

  /* S-Function Block: <S666>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s666_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_fq = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S666>/Product' incorporates:
   *  MinMax: '<S666>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S666>/motohawk_calibration'
   */
  rtb_DataTypeConversion_fq /= (rtb_DataTypeConversion_fq >=
    (MAPFilterConst_DataStore())) || rtIsNaN((MAPFilterConst_DataStore())) ?
    rtb_DataTypeConversion_fq : (MAPFilterConst_DataStore());

  /* Logic: '<S631>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S631>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S631>/motohawk_fault_status4'
   */
  rtb_RelationalOperator5_fz = (IsFaultActive(89) || IsFaultActive(90));

  /* Logic: '<S631>/Logical Operator6' */
  rtb_LogicalOperator6_b = !rtb_RelationalOperator5_fz;

  /* Logic: '<S631>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S631>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S631>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_br = (IsFaultSuspected(89) || IsFaultSuspected(90));

  /* S-Function (motohawk_sfun_trigger): '<S633>/motohawk_trigger5' */
  /* Enable for Trigger_FGND_MID_TDC_EVENT_8120p0005 */
  if (BaseEngineController_LS_DWork.s633_motohawk_trigger5_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s633_motohawk_trigger5_DWORK1 = 1;
  }

  /* Product: '<S631>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S631>/motohawk_calibration4'
   */
  rtb_UnitDelay_cf = BaseEngineController_LS_B.s633_Merge * (MAPGain_DataStore());

  /* Sum: '<S631>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S631>/motohawk_calibration5'
   */
  BaseEngineController_LS_B.s631_Sum1 = rtb_UnitDelay_cf + (MAPOfst_DataStore());

  /* UnitDelay: '<S631>/Unit Delay1' */
  rtb_UnitDelay1_a = BaseEngineController_LS_DWork.s631_UnitDelay1_DSTATE;

  /* If: '<S631>/If' incorporates:
   *  Logic: '<S631>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_b && rtb_LogicalOperator1_br) {
    /* Outputs for IfAction SubSystem: '<S631>/If Action Subsystem' incorporates:
     *  ActionPort: '<S667>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay1_a, &rtb_Merge_in);

    /* End of Outputs for SubSystem: '<S631>/If Action Subsystem' */
  } else if (rtb_RelationalOperator5_fz) {
    /* Outputs for IfAction SubSystem: '<S631>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S668>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((MAPDfltValue_DataStore()),
      &rtb_Merge_in);

    /* End of Outputs for SubSystem: '<S631>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S631>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S669>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      (BaseEngineController_LS_B.s631_Sum1, &rtb_Merge_in);

    /* End of Outputs for SubSystem: '<S631>/If Action Subsystem2' */
  }

  /* End of If: '<S631>/If' */

  /* Sum: '<S671>/Sum1' incorporates:
   *  Constant: '<S671>/Constant'
   *  Product: '<S671>/Product'
   *  Product: '<S671>/Product1'
   *  Sum: '<S671>/Sum'
   *  UnitDelay: '<S671>/Unit Delay'
   */
  rtb_Sum1_d4 = (1.0 - rtb_DataTypeConversion_fq) *
    BaseEngineController_LS_DWork.s671_UnitDelay_DSTATE + rtb_Merge_in *
    rtb_DataTypeConversion_fq;

  /* If: '<S670>/If' incorporates:
   *  Inport: '<S672>/In1'
   *  Inport: '<S673>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S670>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S670>/override_enable'
   */
  if ((MAP_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S670>/NewValue' incorporates:
     *  ActionPort: '<S672>/Action Port'
     */
    BaseEngineController_LS_B.s670_Merge = (MAP_new_DataStore());

    /* End of Outputs for SubSystem: '<S670>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S670>/OldValue' incorporates:
     *  ActionPort: '<S673>/Action Port'
     */
    BaseEngineController_LS_B.s670_Merge = rtb_Sum1_d4;

    /* End of Outputs for SubSystem: '<S670>/OldValue' */
  }

  /* End of If: '<S670>/If' */

  /* S-Function Block: <S405>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (MAP05In_DataStore()) = BaseEngineController_LS_B.s670_Merge;
    (MAP05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s670_Merge, (MAP05IdxArr_DataStore()), 5,
       (MAP05Idx_DataStore()));
    rtb_motohawk_prelookup_m = (MAP05Idx_DataStore());
  }

  /* S-Function Block: <S405>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (MAP09In_DataStore()) = BaseEngineController_LS_B.s670_Merge;
    (MAP09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s670_Merge, (MAP09IdxArr_DataStore()), 9,
       (MAP09Idx_DataStore()));
    BaseEngineController_LS_B.s405_motohawk_prelookup1 = (MAP09Idx_DataStore());
  }

  /* S-Function Block: <S405>/motohawk_prelookup5 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (MAP17In_DataStore()) = BaseEngineController_LS_B.s670_Merge;
    (MAP17Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s670_Merge, (MAP17IdxArr_DataStore()), 17,
       (MAP17Idx_DataStore()));
    BaseEngineController_LS_B.s405_Indexes = (MAP17Idx_DataStore());
  }

  /* S-Function Block: <S410>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (VSPD09In_DataStore()) = BaseEngineController_LS_B.s426_Switch2;
    (VSPD09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s426_Switch2, (VSPD09IdxArr_DataStore()), 9,
       (VSPD09Idx_DataStore()));
    rtb_motohawk_prelookup_i = (VSPD09Idx_DataStore());
  }

  /* S-Function Block: <S402>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (CAT05In_DataStore()) = BaseEngineController_LS_B.s728_Merge;
    (CAT05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s728_Merge, (CAT05IdxArr_DataStore()), 5,
       (CAT05Idx_DataStore()));
    BaseEngineController_LS_B.s402_motohawk_prelookup = (CAT05Idx_DataStore());
  }

  /* S-Function Block: <S406>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (OXY05In_DataStore()) = BaseEngineController_LS_B.s649_Merge;
    (OXY05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s649_Merge, (OXY05IdxArr_DataStore()), 5,
       (OXY05Idx_DataStore()));
    rtb_motohawk_prelookup_e = (OXY05Idx_DataStore());
  }

  /* S-Function (motohawk_sfun_data_read): '<S368>/motohawk_data_read1' */
  BaseEngineController_LS_B.s368_motohawk_data_read1 = EngineState_DataStore();

  /* S-Function Block: <S368>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s368_motohawk_delta_time_DWORK1, NULL);
    BaseEngineController_LS_B.s368_motohawk_delta_time = ((real_T) delta) *
      0.000001;
  }

  /* Stateflow: '<S368>/Baro Stall State Delay' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S368>/motohawk_calibration'
   */

  /* Gateway: Foreground/Control/VirtualSensors/AirCalcs/Baro Stall State Delay */
  /* During: Foreground/Control/VirtualSensors/AirCalcs/Baro Stall State Delay */
  switch (BaseEngineController_LS_DWork.s374_is_c19_BaseEngineController_LS) {
   case BaseEngineController_LS_IN_CrankRun:
    /* During 'CrankRun': '<S374>:2' */
    if (BaseEngineController_LS_B.s368_motohawk_data_read1 == 1) {
      /* Transition: '<S374>:6' */
      BaseEngineController_LS_DWork.s374_is_c19_BaseEngineController_LS =
        BaseEngineController_LS_IN_StallDelay;

      /* Entry 'StallDelay': '<S374>:3' */
      BaseEngineController_LS_B.s374_Enable = FALSE;
      BaseEngineController_LS_B.s374_Timer = 0.0;
      BaseEngineController_LS_DWork.s374_TOld = 0.0;
    }
    break;

   case BaseEngineController_LS_IN_Stall:
    /* During 'Stall': '<S374>:1' */
    if (BaseEngineController_LS_B.s368_motohawk_data_read1 > 1) {
      /* Transition: '<S374>:5' */
      BaseEngineController_LS_DWork.s374_is_c19_BaseEngineController_LS =
        BaseEngineController_LS_IN_CrankRun;

      /* Entry 'CrankRun': '<S374>:2' */
      BaseEngineController_LS_B.s374_Enable = FALSE;
    }
    break;

   case BaseEngineController_LS_IN_StallDelay:
    /* During 'StallDelay': '<S374>:3' */
    if (BaseEngineController_LS_B.s368_motohawk_data_read1 > 1) {
      /* Transition: '<S374>:8' */
      BaseEngineController_LS_DWork.s374_is_c19_BaseEngineController_LS =
        BaseEngineController_LS_IN_CrankRun;

      /* Entry 'CrankRun': '<S374>:2' */
      BaseEngineController_LS_B.s374_Enable = FALSE;
    } else if (((BaseEngineController_LS_B.s368_motohawk_data_read1 == 1) &
                (BaseEngineController_LS_B.s374_Timer >
                 (BaroRunStallDelay_DataStore()))) != 0) {
      /* Transition: '<S374>:7' */
      BaseEngineController_LS_DWork.s374_is_c19_BaseEngineController_LS =
        BaseEngineController_LS_IN_Stall;

      /* Entry 'Stall': '<S374>:1' */
      BaseEngineController_LS_B.s374_Enable = TRUE;
    } else {
      BaseEngineController_LS_B.s374_Timer =
        BaseEngineController_LS_DWork.s374_TOld +
        BaseEngineController_LS_B.s368_motohawk_delta_time;
      BaseEngineController_LS_DWork.s374_TOld =
        BaseEngineController_LS_B.s374_Timer;
    }
    break;

   default:
    /* Transition: '<S374>:4' */
    BaseEngineController_LS_DWork.s374_is_c19_BaseEngineController_LS =
      BaseEngineController_LS_IN_Stall;

    /* Entry 'Stall': '<S374>:1' */
    BaseEngineController_LS_B.s374_Enable = TRUE;
    break;
  }

  /* End of Stateflow: '<S368>/Baro Stall State Delay' */
  /* RelationalOperator: '<S376>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S376>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S376>/motohawk_data_read'
   */
  rtb_LogicalOperator6_b = (TPSFinal_DataStore() >= (BaroLearn_TPSPos_DataStore()));

  /* Logic: '<S632>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S632>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S632>/motohawk_fault_status4'
   */
  rtb_RelationalOperator5_fz = (IsFaultActive(91) || IsFaultActive(92));

  /* Logic: '<S632>/Logical Operator6' */
  rtb_LogicalOperator1_br = !rtb_RelationalOperator5_fz;

  /* Logic: '<S632>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S632>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S632>/motohawk_fault_status3'
   */
  rtb_RelOp_pu = (IsFaultSuspected(91) || IsFaultSuspected(92));

  /* S-Function Block: <S454>/motohawk_ain_read1 Resource: MAPSensorPin */
  {
    extern NativeError_S MAPSensorPin_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    MAPSensorPin_AnalogInput_Get
      (&BaseEngineController_LS_B.s454_motohawk_ain_read1, NULL);
  }

  /* DataTypeConversion: '<S632>/Data Type Conversion' */
  rtb_DataTypeConversion_fq = (real_T)
    BaseEngineController_LS_B.s454_motohawk_ain_read1;

  /* Product: '<S632>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S632>/motohawk_calibration4'
   */
  rtb_UnitDelay_cf = rtb_DataTypeConversion_fq * (MAPTimeGain_DataStore());

  /* Sum: '<S632>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S632>/motohawk_calibration5'
   */
  BaseEngineController_LS_B.s632_Sum1 = rtb_UnitDelay_cf +
    (MAPTimeOfst_DataStore());

  /* UnitDelay: '<S632>/Unit Delay1' */
  rtb_UnitDelay1_n = BaseEngineController_LS_DWork.s632_UnitDelay1_DSTATE;

  /* If: '<S632>/If' incorporates:
   *  Logic: '<S632>/Logical Operator5'
   */
  if (rtb_LogicalOperator1_br && rtb_RelOp_pu) {
    /* Outputs for IfAction SubSystem: '<S632>/If Action Subsystem' incorporates:
     *  ActionPort: '<S675>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay1_n, &rtb_Merge_jq);

    /* End of Outputs for SubSystem: '<S632>/If Action Subsystem' */
  } else if (rtb_RelationalOperator5_fz) {
    /* Outputs for IfAction SubSystem: '<S632>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S676>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((MAPTimeDfltValue_DataStore()),
      &rtb_Merge_jq);

    /* End of Outputs for SubSystem: '<S632>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S632>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S677>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      (BaseEngineController_LS_B.s632_Sum1, &rtb_Merge_jq);

    /* End of Outputs for SubSystem: '<S632>/If Action Subsystem2' */
  }

  /* End of If: '<S632>/If' */

  /* Logic: '<S376>/Logical Operator' incorporates:
   *  Constant: '<S380>/Constant'
   *  RelationalOperator: '<S376>/Relational Operator1'
   *  RelationalOperator: '<S380>/Compare'
   *  S-Function (motohawk_sfun_calibration): '<S376>/motohawk_calibration2'
   */
  rtb_RelationalOperator5_fz = (rtb_LogicalOperator6_b && (rtb_Merge_jq >=
    (BaroLearn_MAP_DataStore())) &&
    (BaseEngineController_LS_B.s368_motohawk_data_read1 > 1));

  /* S-Function Block: <S381>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s381_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_ok = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S381>/Switch' incorporates:
   *  Constant: '<S381>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S381>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S381>/motohawk_delta_time'
   *  Sum: '<S381>/Sum'
   */
  if (rtb_RelationalOperator5_fz) {
    rtb_Switch_f = rtb_motohawk_delta_time_ok + BaroLearnTmr_DataStore();
  } else {
    rtb_Switch_f = 0.0;
  }

  /* End of Switch: '<S381>/Switch' */
  /* Product: '<S376>/Product' incorporates:
   *  RelationalOperator: '<S376>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S376>/motohawk_calibration'
   */
  rtb_motohawk_data_read1_p = (uint16_T)(rtb_RelationalOperator5_fz ?
    rtb_Switch_f >= (BaroLearn_Tm_DataStore()) : 0);

  /* DataTypeConversion: '<S376>/Data Type Conversion' */
  rtb_RelationalOperator5_fz = (rtb_motohawk_data_read1_p != 0);

  /* Outputs for Enabled SubSystem: '<S368>/Capture Signal At Startup' incorporates:
   *  EnablePort: '<S375>/Enable'
   */
  /* Logic: '<S368>/Logical Operator' */
  if (BaseEngineController_LS_B.s374_Enable || rtb_RelationalOperator5_fz) {
    if (!BaseEngineController_LS_DWork.s368_CaptureSignalAtStartup_MODE) {
      /* InitializeConditions for UnitDelay: '<S375>/Unit Delay' */
      BaseEngineController_LS_DWork.s375_UnitDelay_DSTATE = 0;
      BaseEngineController_LS_DWork.s368_CaptureSignalAtStartup_MODE = TRUE;
    }

    /* Sum: '<S375>/Add' incorporates:
     *  Constant: '<S375>/TwoSampleBuffer ToIgnore'
     *  S-Function (motohawk_sfun_calibration): '<S375>/motohawk_calibration'
     */
    rtb_Add_k = (int8_T)(((int8_T)(BARO_Count_DataStore())) + 2);

    /* Sum: '<S375>/Sum' incorporates:
     *  Constant: '<S375>/Constant'
     *  UnitDelay: '<S375>/Unit Delay'
     */
    rtb_Sum_l3 = (int8_T)(BaseEngineController_LS_DWork.s375_UnitDelay_DSTATE +
                          1);

    /* RelationalOperator: '<S375>/Relational Operator' */
    rtb_LogicalOperator6_b = (rtb_Sum_l3 <= rtb_Add_k);

    /* Switch: '<S375>/Switch' */
    if (rtb_LogicalOperator6_b) {
      rtb_Add_k = rtb_Sum_l3;
    }

    /* End of Switch: '<S375>/Switch' */

    /* Sum: '<S375>/Add1' incorporates:
     *  Constant: '<S375>/TwoSampleBuffer ToIgnore'
     */
    rtb_Add1_e = (int8_T)(rtb_Add_k - 2);

    /* Logic: '<S375>/Logical Operator' incorporates:
     *  Constant: '<S375>/TwoSampleBuffer ToIgnore'
     *  RelationalOperator: '<S375>/Relational Operator1'
     */
    rtb_LogicalOperator_kz = (rtb_LogicalOperator6_b && (rtb_Sum_l3 > 2));

    /* Outputs for Enabled SubSystem: '<S375>/Collect Average' */
    BaseEngineController_LS_CollectAverage(rtb_LogicalOperator_kz, rtb_Add1_e,
      rtb_Merge_jq, &BaseEngineController_LS_B.s375_CollectAverage,
      &BaseEngineController_LS_DWork.s375_CollectAverage);

    /* End of Outputs for SubSystem: '<S375>/Collect Average' */

    /* Update for UnitDelay: '<S375>/Unit Delay' */
    BaseEngineController_LS_DWork.s375_UnitDelay_DSTATE = rtb_Add_k;
  } else {
    if (BaseEngineController_LS_DWork.s368_CaptureSignalAtStartup_MODE) {
      /* Disable for Enabled SubSystem: '<S375>/Collect Average' */
      BaseEngineController_LS_CollectAverage_Disable
        (&BaseEngineController_LS_DWork.s375_CollectAverage);

      /* End of Disable for SubSystem: '<S375>/Collect Average' */
      BaseEngineController_LS_DWork.s368_CaptureSignalAtStartup_MODE = FALSE;
    }
  }

  /* End of Logic: '<S368>/Logical Operator' */
  /* End of Outputs for SubSystem: '<S368>/Capture Signal At Startup' */

  /* If: '<S378>/If' incorporates:
   *  Inport: '<S386>/In1'
   *  Inport: '<S387>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S378>/override_enable'
   *  UnitDelay: '<S378>/Unit Delay'
   */
  if ((BARO_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S378>/NewValue' incorporates:
     *  ActionPort: '<S386>/Action Port'
     */
    rtb_Merge_b3 = BaseEngineController_LS_DWork.s378_UnitDelay_DSTATE;

    /* End of Outputs for SubSystem: '<S378>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S378>/OldValue' incorporates:
     *  ActionPort: '<S387>/Action Port'
     */
    rtb_Merge_b3 = BaseEngineController_LS_B.s375_CollectAverage.s379_Product;

    /* End of Outputs for SubSystem: '<S378>/OldValue' */
  }

  /* End of If: '<S378>/If' */

  /* Sum: '<S378>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S378>/offset'
   */
  BaseEngineController_LS_B.s378_Sum = rtb_Merge_b3 + (BARO_offset_DataStore());

  /* S-Function Block: <S377>/motohawk_prelookup2 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (VEMapIn_DataStore()) = BaseEngineController_LS_B.s670_Merge;
    (VEMapIdx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s670_Merge, (VEMapIdxArr_DataStore()), 17,
       (VEMapIdx_DataStore()));
    rtb_motohawk_prelookup2_c = (VEMapIdx_DataStore());
  }

  /* S-Function Block: <S377>/motohawk_interpolation_2d */
  {
    extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
      real_T *map_data, uint32_T row_sz, uint32_T col_sz);
    rtb_motohawk_interpolation_2d = TableInterpolation2D_real_T
      (rtb_motohawk_prelookup2_c, BaseEngineController_LS_B.s407_Indexes,
       (real_T *) ((VolEffMap_DataStore())), 17, 17);
    (VolEff_DataStore()) = rtb_motohawk_interpolation_2d;
  }

  /* S-Function Block: <S377>/motohawk_interpolation_2d2 */
  {
    extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
      real_T *map_data, uint32_T row_sz, uint32_T col_sz);
    BaseEngineController_LS_B.s377_motohawk_interpolation_2d2 =
      TableInterpolation2D_real_T(rtb_motohawk_prelookup2_c,
      BaseEngineController_LS_B.s407_Indexes, (real_T *)
      ((VolEffAdaptMap_DataStore())), 17, 17);
    (VolEffAdapt_DataStore()) =
      BaseEngineController_LS_B.s377_motohawk_interpolation_2d2;
  }

  /* Sum: '<S377>/Sum' incorporates:
   *  S-Function (motohawk_sfun_interpolation_2d): '<S377>/motohawk_interpolation_2d'
   *  S-Function (motohawk_sfun_prelookup): '<S377>/motohawk_prelookup2'
   */
  BaseEngineController_LS_B.s377_Sum = rtb_motohawk_interpolation_2d +
    BaseEngineController_LS_B.s377_motohawk_interpolation_2d2;

  /* Saturate: '<S368>/Saturation1' */
  rtb_Saturation1_c = BaseEngineController_LS_B.s378_Sum >= 1.0 ?
    BaseEngineController_LS_B.s378_Sum : 1.0;

  /* S-Function Block: <S377>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (BARO09Idx_DataStore()) = TablePrelookup_real_T(rtb_Saturation1_c,
      (BARO09IdxArr_DataStore()), 9, (BARO09Idx_DataStore()));
    rtb_motohawk_prelookup1_c = (BARO09Idx_DataStore());
  }

  /* S-Function Block: <S377>/motohawk_interpolation_1d1 */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_motohawk_interpolation_1d1_j = TableInterpolation1D_real_T
      (rtb_motohawk_prelookup1_c, (real_T *) ((VEBaroCorrTbl_DataStore())), 9);
    (VEBaroCorr_DataStore()) = rtb_motohawk_interpolation_1d1_j;
  }

  /* S-Function Block: <S404>/motohawk_prelookup2 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (IAT17In_DataStore()) = BaseEngineController_LS_B.s755_Merge;
    (IAT17Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s755_Merge, (IAT17IdxArr_DataStore()), 17,
       (IAT17Idx_DataStore()));
    rtb_motohawk_prelookup2_b = (IAT17Idx_DataStore());
  }

  /* S-Function Block: <S377>/motohawk_interpolation_2d1 */
  {
    extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
      real_T *map_data, uint32_T row_sz, uint32_T col_sz);
    rtb_motohawk_interpolation_2d1_n = TableInterpolation2D_real_T
      (rtb_motohawk_prelookup2_b, rtb_motohawk_prelookup1_h, (real_T *)
       ((VETempCorrMap_DataStore())), 17, 9);
    (VETempCorr_DataStore()) = rtb_motohawk_interpolation_2d1_n;
  }

  /* Product: '<S377>/Nominal Air Flow Rate' incorporates:
   *  Constant: '<S377>/Gas Const [J//kg-K]'
   *  Constant: '<S377>/Units Equivalency Factor'
   *  DataTypeConversion: '<S377>/Data Type Conversion'
   *  Fcn: '<S383>/C to K'
   *  S-Function (motohawk_sfun_data_read): '<S377>/Cylinder Swept Volume [cm3]'
   *  S-Function (motohawk_sfun_data_read): '<S377>/Number of Combustion Events Per Revolution'
   *  S-Function (motohawk_sfun_interpolation_1d): '<S377>/motohawk_interpolation_1d1'
   *  S-Function (motohawk_sfun_interpolation_2d): '<S377>/motohawk_interpolation_2d1'
   *  S-Function (motohawk_sfun_prelookup): '<S377>/motohawk_prelookup1'
   *  S-Function (motohawk_sfun_prelookup): '<S403>/motohawk_prelookup1'
   *  S-Function (motohawk_sfun_prelookup): '<S404>/motohawk_prelookup2'
   *  Saturate: '<S368>/Saturation1'
   */
  BaseEngineController_LS_B.s377_NominalAirFlowRate =
    BaseEngineController_LS_B.s627_Sum1 * BaseEngineController_LS_B.s670_Merge *
    rtb_motohawk_interpolation_1d1_j * rtb_motohawk_interpolation_2d1_n *
    CylSweptVol_DataStore() * (real_T)((uint8_T)CombEventsPerRev_DataStore()) /
    (BaseEngineController_LS_B.s755_Merge + 273.2) / 60.0 / 287.0;

  /* Product: '<S377>/Model Air Mass Flow Rate' */
  BaseEngineController_LS_B.s377_ModelAirMassFlowRate =
    BaseEngineController_LS_B.s377_Sum *
    BaseEngineController_LS_B.s377_NominalAirFlowRate;

  /* S-Function Block: <S587>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s587_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_m1 = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S587>/Product' incorporates:
   *  MinMax: '<S587>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S587>/motohawk_calibration'
   */
  rtb_Switch_m1 /= (rtb_Switch_m1 >= (MAFFiltConst_DataStore())) || rtIsNaN
    ((MAFFiltConst_DataStore())) ? rtb_Switch_m1 : (MAFFiltConst_DataStore());

  /* Logic: '<S573>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S573>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S573>/motohawk_fault_status4'
   */
  rtb_RelationalOperator5_fz = (IsFaultActive(87) || IsFaultActive(88));

  /* Logic: '<S573>/Logical Operator6' */
  rtb_LogicalOperator6_b = !rtb_RelationalOperator5_fz;

  /* Logic: '<S573>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S573>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S573>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_br = (IsFaultSuspected(87) || IsFaultSuspected(88));

  /* S-Function Block: <S452>/motohawk_frequency_in2 Frequency Input Get: MAF_Pin */
  {
    extern NativeError_S MAF_Pin_FrequencyInput_Get(uint32_T *frequency, int16_T
      *duty_cycle);
    MAF_Pin_FrequencyInput_Get(&rtb_DataTypeConversion6,
      &rtb_DataTypeConversion2_pj);
  }

  /* DataTypeConversion: '<S452>/Data Type Conversion' */
  rtb_Switch_bn = (real_T)rtb_DataTypeConversion6;

  /* Gain: '<S452>/Gain' */
  BaseEngineController_LS_B.s452_Gain = 0.01 * rtb_Switch_bn;

  /* S-Function Block: <S592>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (MAFIdx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s452_Gain, (MAFIdxArr_DataStore()), 13,
       (MAFIdx_DataStore()));
    rtb_motohawk_prelookup_k = (MAFIdx_DataStore());
  }

  /* S-Function Block: <S592>/motohawk_interpolation_1d */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    BaseEngineController_LS_B.s592_motohawk_interpolation_1d =
      TableInterpolation1D_real_T(rtb_motohawk_prelookup_k, (real_T *)
      ((MAFTbl_DataStore())), 13);
  }

  /* UnitDelay: '<S573>/Unit Delay' */
  rtb_UnitDelay_nr = BaseEngineController_LS_DWork.s573_UnitDelay_DSTATE;

  /* If: '<S573>/If' incorporates:
   *  Logic: '<S573>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_b && rtb_LogicalOperator1_br) {
    /* Outputs for IfAction SubSystem: '<S573>/If Action Subsystem' incorporates:
     *  ActionPort: '<S588>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay_nr, &rtb_Merge_dv);

    /* End of Outputs for SubSystem: '<S573>/If Action Subsystem' */
  } else if (rtb_RelationalOperator5_fz) {
    /* Outputs for IfAction SubSystem: '<S573>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S589>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((MAFDefault_DataStore()),
      &rtb_Merge_dv);

    /* End of Outputs for SubSystem: '<S573>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S573>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S590>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      (BaseEngineController_LS_B.s592_motohawk_interpolation_1d, &rtb_Merge_dv);

    /* End of Outputs for SubSystem: '<S573>/If Action Subsystem2' */
  }

  /* End of If: '<S573>/If' */

  /* Sum: '<S593>/Sum1' incorporates:
   *  Constant: '<S593>/Constant'
   *  Product: '<S593>/Product'
   *  Product: '<S593>/Product1'
   *  Sum: '<S593>/Sum'
   *  UnitDelay: '<S593>/Unit Delay'
   */
  rtb_Sum1_fm = (1.0 - rtb_Switch_m1) *
    BaseEngineController_LS_DWork.s593_UnitDelay_DSTATE + rtb_Merge_dv *
    rtb_Switch_m1;

  /* If: '<S591>/If' incorporates:
   *  Inport: '<S594>/In1'
   *  Inport: '<S595>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S591>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S591>/override_enable'
   */
  if ((MAF_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S591>/NewValue' incorporates:
     *  ActionPort: '<S594>/Action Port'
     */
    BaseEngineController_LS_B.s591_Merge = (MAF_new_DataStore());

    /* End of Outputs for SubSystem: '<S591>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S591>/OldValue' incorporates:
     *  ActionPort: '<S595>/Action Port'
     */
    BaseEngineController_LS_B.s591_Merge = rtb_Sum1_fm;

    /* End of Outputs for SubSystem: '<S591>/OldValue' */
  }

  /* End of If: '<S591>/If' */

  /* MultiPortSwitch: '<S377>/Multiport Switch' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S377>/motohawk_calibration1'
   */
  if (((uint8_T)(MAF_Source_DataStore())) == 0) {
    BaseEngineController_LS_B.s377_MultiportSwitch =
      BaseEngineController_LS_B.s377_ModelAirMassFlowRate;
  } else {
    BaseEngineController_LS_B.s377_MultiportSwitch =
      BaseEngineController_LS_B.s591_Merge;
  }

  /* End of MultiPortSwitch: '<S377>/Multiport Switch' */
  /* S-Function Block: <S393>/motohawk_delta_time */
  rtb_Switch_bn = 0.005;

  /* UnitDelay: '<S393>/Unit Delay2' */
  rtb_UnitDelay_cf = BaseEngineController_LS_DWork.s393_UnitDelay2_DSTATE;

  /* RelationalOperator: '<S393>/Relational Operator4' incorporates:
   *  UnitDelay: '<S393>/Unit Delay2'
   */
  BaseEngineController_LS_B.s393_RelationalOperator4 =
    ((BaseEngineController_LS_DWork.s393_UnitDelay2_DSTATE <
      BaseEngineController_LS_B.s627_Sum1));

  /* Outputs for Enabled SubSystem: '<S393>/IncreasingFilter' incorporates:
   *  EnablePort: '<S397>/Enable'
   */
  if (BaseEngineController_LS_B.s393_RelationalOperator4) {
    /* S-Function (motohawk_sfun_calibration): '<S397>/motohawk_calibration1' */
    BaseEngineController_LS_B.s393_Merge = (SSRPMIncFiltC_DataStore());
  }

  /* End of Outputs for SubSystem: '<S393>/IncreasingFilter' */

  /* Outputs for Enabled SubSystem: '<S393>/DecreasingFilter' incorporates:
   *  EnablePort: '<S395>/Enable'
   */
  /* RelationalOperator: '<S393>/Relational Operator3' */
  if (rtb_UnitDelay_cf > BaseEngineController_LS_B.s627_Sum1) {
    /* S-Function (motohawk_sfun_calibration): '<S395>/motohawk_calibration2' */
    BaseEngineController_LS_B.s393_Merge = (SSRPMDecFiltC_DataStore());
  }

  /* End of RelationalOperator: '<S393>/Relational Operator3' */
  /* End of Outputs for SubSystem: '<S393>/DecreasingFilter' */

  /* Product: '<S393>/Product' incorporates:
   *  MinMax: '<S393>/MinMax'
   */
  rtb_Switch_bn /= (rtb_Switch_bn >= BaseEngineController_LS_B.s393_Merge) ||
    rtIsNaN(BaseEngineController_LS_B.s393_Merge) ? rtb_Switch_bn :
    BaseEngineController_LS_B.s393_Merge;

  /* Sum: '<S396>/Sum1' incorporates:
   *  Constant: '<S396>/Constant'
   *  Product: '<S396>/Product'
   *  Product: '<S396>/Product1'
   *  Sum: '<S396>/Sum'
   *  UnitDelay: '<S396>/Unit Delay'
   */
  BaseEngineController_LS_B.s396_Sum1 = (1.0 - rtb_Switch_bn) *
    BaseEngineController_LS_DWork.s396_UnitDelay_DSTATE +
    BaseEngineController_LS_B.s627_Sum1 * rtb_Switch_bn;

  /* Sum: '<S392>/Sum1' */
  rtb_Switch_bn = BaseEngineController_LS_B.s627_Sum1 -
    BaseEngineController_LS_B.s396_Sum1;

  /* Abs: '<S392>/Abs1' */
  rtb_Switch_bn = fabs(rtb_Switch_bn);

  /* RelationalOperator: '<S392>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S392>/Steady-state RPM Tolerance [RPM]'
   */
  rtb_LogicalOperator6_b = (rtb_Switch_bn <= (SSRPMTol_DataStore()));

  /* RelationalOperator: '<S392>/Relational Operator2' incorporates:
   *  Constant: '<S392>/Constant'
   */
  rtb_LogicalOperator1_br = (BaseEngineController_LS_B.s627_Sum1 > 0.0);

  /* S-Function Block: <S394>/motohawk_delta_time */
  rtb_Switch_bn = 0.005;

  /* UnitDelay: '<S394>/Unit Delay2' */
  rtb_UnitDelay_cf = BaseEngineController_LS_DWork.s394_UnitDelay2_DSTATE;

  /* RelationalOperator: '<S394>/Relational Operator4' incorporates:
   *  UnitDelay: '<S394>/Unit Delay2'
   */
  BaseEngineController_LS_B.s394_RelationalOperator4 =
    ((BaseEngineController_LS_DWork.s394_UnitDelay2_DSTATE <
      BaseEngineController_LS_B.s670_Merge));

  /* Outputs for Enabled SubSystem: '<S394>/IncreasingFilter' incorporates:
   *  EnablePort: '<S400>/Enable'
   */
  if (BaseEngineController_LS_B.s394_RelationalOperator4) {
    /* S-Function (motohawk_sfun_calibration): '<S400>/motohawk_calibration1' */
    BaseEngineController_LS_B.s394_Merge = (SSLoadIncFiltC_DataStore());
  }

  /* End of Outputs for SubSystem: '<S394>/IncreasingFilter' */

  /* Outputs for Enabled SubSystem: '<S394>/DecreasingFilter' incorporates:
   *  EnablePort: '<S398>/Enable'
   */
  /* RelationalOperator: '<S394>/Relational Operator3' */
  if (rtb_UnitDelay_cf > BaseEngineController_LS_B.s670_Merge) {
    /* S-Function (motohawk_sfun_calibration): '<S398>/motohawk_calibration2' */
    BaseEngineController_LS_B.s394_Merge = (SSLoadDecFiltC_DataStore());
  }

  /* End of RelationalOperator: '<S394>/Relational Operator3' */
  /* End of Outputs for SubSystem: '<S394>/DecreasingFilter' */

  /* Product: '<S394>/Product' incorporates:
   *  MinMax: '<S394>/MinMax'
   */
  rtb_Switch_bn /= (rtb_Switch_bn >= BaseEngineController_LS_B.s394_Merge) ||
    rtIsNaN(BaseEngineController_LS_B.s394_Merge) ? rtb_Switch_bn :
    BaseEngineController_LS_B.s394_Merge;

  /* Sum: '<S399>/Sum1' incorporates:
   *  Constant: '<S399>/Constant'
   *  Product: '<S399>/Product'
   *  Product: '<S399>/Product1'
   *  Sum: '<S399>/Sum'
   *  UnitDelay: '<S399>/Unit Delay'
   */
  BaseEngineController_LS_B.s399_Sum1 = (1.0 - rtb_Switch_bn) *
    BaseEngineController_LS_DWork.s399_UnitDelay_DSTATE +
    BaseEngineController_LS_B.s670_Merge * rtb_Switch_bn;

  /* Sum: '<S392>/Sum' */
  rtb_Switch_bn = BaseEngineController_LS_B.s670_Merge -
    BaseEngineController_LS_B.s399_Sum1;

  /* Abs: '<S392>/Abs' */
  rtb_Switch_bn = fabs(rtb_Switch_bn);

  /* Logic: '<S392>/Logical Operator' incorporates:
   *  RelationalOperator: '<S392>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S392>/Steady-state Torque Tolerance [N.m]'
   */
  BaseEngineController_LS_B.s392_LogicalOperator = ((rtb_LogicalOperator6_b &&
    rtb_LogicalOperator1_br && (rtb_Switch_bn <= (SSLoadTol_DataStore()))));

  /* S-Function Block: <S448>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (MAFPort05In_DataStore()) = BaseEngineController_LS_B.s377_MultiportSwitch;
    (MAFPort05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s377_MultiportSwitch,
       (MAFPort05IdxArr_DataStore()), 5, (MAFPort05Idx_DataStore()));
    rtb_motohawk_prelookup_o = (MAFPort05Idx_DataStore());
  }

  /* RelationalOperator: '<S421>/RelOp' incorporates:
   *  Constant: '<S421>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S372>/motohawk_data_read'
   */
  rtb_LogicalOperator6_b = (((uint8_T)EngineState_DataStore()) == 1);

  /* Outputs for Enabled SubSystem: '<S372>/Capture ECT At Startup' incorporates:
   *  EnablePort: '<S413>/Enable'
   */
  if (rtb_LogicalOperator6_b) {
    if (!BaseEngineController_LS_DWork.s372_CaptureECTAtStartup_MODE) {
      /* InitializeConditions for UnitDelay: '<S413>/Unit Delay' */
      BaseEngineController_LS_DWork.s413_UnitDelay_DSTATE = 0;
      BaseEngineController_LS_DWork.s372_CaptureECTAtStartup_MODE = TRUE;
    }

    /* Sum: '<S413>/Sum' incorporates:
     *  Constant: '<S413>/Constant'
     *  UnitDelay: '<S413>/Unit Delay'
     */
    rtb_Add_k = (int8_T)(BaseEngineController_LS_DWork.s413_UnitDelay_DSTATE + 1);

    /* Sum: '<S413>/Add' incorporates:
     *  Constant: '<S413>/TwoSampleBuffer ToIgnore'
     *  S-Function (motohawk_sfun_calibration): '<S413>/motohawk_calibration'
     */
    rtb_Sum_l3 = (int8_T)(((int8_T)(ECT_KeyUp_Count_DataStore())) + 2);

    /* RelationalOperator: '<S413>/Relational Operator' */
    rtb_LogicalOperator1_br = (rtb_Add_k <= rtb_Sum_l3);

    /* Switch: '<S413>/Switch' */
    if (rtb_LogicalOperator1_br) {
      rtb_Sum_l3 = rtb_Add_k;
    }

    /* End of Switch: '<S413>/Switch' */

    /* Sum: '<S413>/Add1' incorporates:
     *  Constant: '<S413>/TwoSampleBuffer ToIgnore'
     */
    rtb_Add1_k3 = (int8_T)(rtb_Sum_l3 - 2);

    /* Logic: '<S413>/Logical Operator' incorporates:
     *  Constant: '<S413>/TwoSampleBuffer ToIgnore'
     *  RelationalOperator: '<S413>/Relational Operator1'
     */
    rtb_LogicalOperator_mr = (rtb_LogicalOperator1_br && (rtb_Add_k > 2));

    /* Outputs for Enabled SubSystem: '<S413>/Collect Average' */
    BaseEngineController_LS_CollectAverage(rtb_LogicalOperator_mr, rtb_Add1_k3,
      BaseEngineController_LS_B.s721_Merge,
      &BaseEngineController_LS_B.s413_CollectAverage,
      &BaseEngineController_LS_DWork.s413_CollectAverage);

    /* End of Outputs for SubSystem: '<S413>/Collect Average' */

    /* Update for UnitDelay: '<S413>/Unit Delay' */
    BaseEngineController_LS_DWork.s413_UnitDelay_DSTATE = rtb_Sum_l3;
  } else {
    if (BaseEngineController_LS_DWork.s372_CaptureECTAtStartup_MODE) {
      /* Disable for Enabled SubSystem: '<S413>/Collect Average' */
      BaseEngineController_LS_CollectAverage_Disable
        (&BaseEngineController_LS_DWork.s413_CollectAverage);

      /* End of Disable for SubSystem: '<S413>/Collect Average' */
      BaseEngineController_LS_DWork.s372_CaptureECTAtStartup_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S372>/Capture ECT At Startup' */
  /* S-Function Block: <S446>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (ECT_KeyUp09In_DataStore()) =
      BaseEngineController_LS_B.s413_CollectAverage.s379_Product;
    (ECT_KeyUp09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s413_CollectAverage.s379_Product,
       (ECT_KeyUp09IdxArr_DataStore()), 9, (ECT_KeyUp09Idx_DataStore()));
    rtb_motohawk_prelookup_j = (ECT_KeyUp09Idx_DataStore());
  }

  /* Sum: '<S435>/Sum2' incorporates:
   *  UnitDelay: '<S435>/Unit Delay'
   */
  rtb_UnitDelay_cf = BaseEngineController_LS_B.s627_Sum1 -
    BaseEngineController_LS_DWork.s435_UnitDelay_DSTATE;

  /* S-Function Block: <S435>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s435_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_ow = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S435>/Product' incorporates:
   *  S-Function (motohawk_sfun_delta_time): '<S435>/motohawk_delta_time'
   */
  rtb_UnitDelay_cf /= rtb_motohawk_delta_time_ow;

  /* S-Function Block: <S436>/motohawk_delta_time */
  rtb_Switch_bn = 0.005;

  /* Product: '<S436>/Product' incorporates:
   *  MinMax: '<S436>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S436>/motohawk_calibration'
   */
  rtb_Switch_bn /= (rtb_Switch_bn >= (EngineAccelFiltConst_DataStore())) ||
    rtIsNaN((EngineAccelFiltConst_DataStore())) ? rtb_Switch_bn :
    (EngineAccelFiltConst_DataStore());

  /* Sum: '<S437>/Sum1' incorporates:
   *  Constant: '<S437>/Constant'
   *  Product: '<S437>/Product'
   *  Product: '<S437>/Product1'
   *  Sum: '<S437>/Sum'
   *  UnitDelay: '<S437>/Unit Delay'
   */
  BaseEngineController_LS_B.s437_Sum1 = (1.0 - rtb_Switch_bn) *
    BaseEngineController_LS_DWork.s437_UnitDelay_DSTATE + rtb_UnitDelay_cf *
    rtb_Switch_bn;

  /* S-Function Block: <S373>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (RPMAccel17In_DataStore()) = BaseEngineController_LS_B.s437_Sum1;
    (RPMAccel17Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s437_Sum1, (RPMAccel17IdxArr_DataStore()), 17,
       (RPMAccel17Idx_DataStore()));
    BaseEngineController_LS_B.s373_RPMAccel17Idx = (RPMAccel17Idx_DataStore());
  }

  /* S-Function Block: <S373>/motohawk_prelookup2 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (TimeSinceRun09In_DataStore()) = BaseEngineController_LS_B.s443_Switch;
    (TimeSinceRun09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s443_Switch, (TimeSinceRun09IdxArr_DataStore()),
       9, (TimeSinceRun09Idx_DataStore()));
    rtb_TimeSinceRun09 = (TimeSinceRun09Idx_DataStore());
  }

  /* Outputs for Enabled SubSystem: '<S372>/Capture IAT At Startup' incorporates:
   *  EnablePort: '<S414>/Enable'
   */
  if (rtb_LogicalOperator6_b) {
    if (!BaseEngineController_LS_DWork.s372_CaptureIATAtStartup_MODE) {
      /* InitializeConditions for UnitDelay: '<S414>/Unit Delay' */
      BaseEngineController_LS_DWork.s414_UnitDelay_DSTATE = 0;
      BaseEngineController_LS_DWork.s372_CaptureIATAtStartup_MODE = TRUE;
    }

    /* Sum: '<S414>/Sum' incorporates:
     *  Constant: '<S414>/Constant'
     *  UnitDelay: '<S414>/Unit Delay'
     */
    rtb_Add_k = (int8_T)(BaseEngineController_LS_DWork.s414_UnitDelay_DSTATE + 1);

    /* Sum: '<S414>/Add' incorporates:
     *  Constant: '<S414>/TwoSampleBuffer ToIgnore'
     *  S-Function (motohawk_sfun_calibration): '<S414>/motohawk_calibration'
     */
    rtb_Sum_l3 = (int8_T)(((int8_T)(IAT_KeyUp_Count_DataStore())) + 2);

    /* RelationalOperator: '<S414>/Relational Operator' */
    rtb_LogicalOperator6_b = (rtb_Add_k <= rtb_Sum_l3);

    /* Switch: '<S414>/Switch' */
    if (rtb_LogicalOperator6_b) {
      rtb_Sum_l3 = rtb_Add_k;
    }

    /* End of Switch: '<S414>/Switch' */

    /* Sum: '<S414>/Add1' incorporates:
     *  Constant: '<S414>/TwoSampleBuffer ToIgnore'
     */
    rtb_Add1_k = (int8_T)(rtb_Sum_l3 - 2);

    /* Logic: '<S414>/Logical Operator' incorporates:
     *  Constant: '<S414>/TwoSampleBuffer ToIgnore'
     *  RelationalOperator: '<S414>/Relational Operator1'
     */
    rtb_LogicalOperator_g5 = (rtb_LogicalOperator6_b && (rtb_Add_k > 2));

    /* Outputs for Enabled SubSystem: '<S414>/Collect Average' */
    BaseEngineController_LS_CollectAverage(rtb_LogicalOperator_g5, rtb_Add1_k,
      BaseEngineController_LS_B.s723_Merge,
      &BaseEngineController_LS_B.s414_CollectAverage,
      &BaseEngineController_LS_DWork.s414_CollectAverage);

    /* End of Outputs for SubSystem: '<S414>/Collect Average' */

    /* Update for UnitDelay: '<S414>/Unit Delay' */
    BaseEngineController_LS_DWork.s414_UnitDelay_DSTATE = rtb_Sum_l3;
  } else {
    if (BaseEngineController_LS_DWork.s372_CaptureIATAtStartup_MODE) {
      /* Disable for Enabled SubSystem: '<S414>/Collect Average' */
      BaseEngineController_LS_CollectAverage_Disable
        (&BaseEngineController_LS_DWork.s414_CollectAverage);

      /* End of Disable for SubSystem: '<S414>/Collect Average' */
      BaseEngineController_LS_DWork.s372_CaptureIATAtStartup_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S372>/Capture IAT At Startup' */
  /* S-Function Block: <S447>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (IAT_KeyUp09In_DataStore()) =
      BaseEngineController_LS_B.s414_CollectAverage.s379_Product;
    (IAT_KeyUp09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s414_CollectAverage.s379_Product,
       (IAT_KeyUp09IdxArr_DataStore()), 9, (IAT_KeyUp09Idx_DataStore()));
    rtb_motohawk_prelookup_l = (IAT_KeyUp09Idx_DataStore());
  }

  /* RelationalOperator: '<S137>/RelOp' incorporates:
   *  Constant: '<S137>/Constant'
   */
  rtb_RelOp_hf = (BaseEngineController_LS_B.s438_State == 3);

  /* S-Function Block: <S452>/motohawk_ain1 Resource: ClutchSw_Pin */
  {
    extern NativeError_S ClutchSw_Pin_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    ClutchSw_Pin_AnalogInput_Get(&rtb_motohawk_ain1, NULL);
  }

  /* DataTypeConversion: '<S571>/Data Type Conversion' incorporates:
   *  S-Function (motohawk_sfun_ain): '<S452>/motohawk_ain1'
   */
  BaseEngineController_LS_B.s571_DataTypeConversion = (real_T)rtb_motohawk_ain1;

  /* RelationalOperator: '<S571>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S571>/SwitchPoint'
   */
  rtb_LogicalOperator6_b = (BaseEngineController_LS_B.s571_DataTypeConversion >
                            (ClutchSwSwitchPt_DataStore()));

  /* Logic: '<S571>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S571>/0 = No Inversion 1 = Inversion'
   */
  rtb_LogicalOperator6_b ^= (ClutchSwPolarity_DataStore());

  /* If: '<S581>/If' incorporates:
   *  Inport: '<S582>/In1'
   *  Inport: '<S583>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S581>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S581>/override_enable'
   */
  if ((ClutchSw_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S581>/NewValue' incorporates:
     *  ActionPort: '<S582>/Action Port'
     */
    BaseEngineController_LS_B.s581_Merge = (ClutchSw_new_DataStore());

    /* End of Outputs for SubSystem: '<S581>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S581>/OldValue' incorporates:
     *  ActionPort: '<S583>/Action Port'
     */
    BaseEngineController_LS_B.s581_Merge = rtb_LogicalOperator6_b;

    /* End of Outputs for SubSystem: '<S581>/OldValue' */
  }

  /* End of If: '<S581>/If' */

  /* S-Function Block: <S452>/motohawk_ain6 Resource: ScramblePin */
  {
    extern NativeError_S ScramblePin_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    ScramblePin_AnalogInput_Get(&rtb_motohawk_ain6_k, NULL);
  }

  /* DataTypeConversion: '<S574>/Data Type Conversion' incorporates:
   *  S-Function (motohawk_sfun_ain): '<S452>/motohawk_ain6'
   */
  BaseEngineController_LS_B.s574_DataTypeConversion = (real_T)
    rtb_motohawk_ain6_k;

  /* RelationalOperator: '<S574>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S574>/SwitchPoint'
   */
  rtb_LogicalOperator6_b = (BaseEngineController_LS_B.s574_DataTypeConversion >
                            (ScrambleSwitchPt_DataStore()));

  /* Logic: '<S574>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S574>/0 = No Inversion 1 = Inversion'
   */
  rtb_RelationalOperator5_fz = rtb_LogicalOperator6_b ^
    (ScramblePolarity_DataStore());

  /* S-Function Block: <S598>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s598_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_dd = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S598>/Switch' incorporates:
   *  Constant: '<S598>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S598>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S598>/motohawk_delta_time'
   *  Sum: '<S598>/Sum'
   */
  if (rtb_RelationalOperator5_fz) {
    rtb_Switch_bn = rtb_motohawk_delta_time_dd + ScrambleDelay_DataStore();
  } else {
    rtb_Switch_bn = 0.0;
  }

  /* End of Switch: '<S598>/Switch' */
  /* Logic: '<S596>/Logical Operator' incorporates:
   *  RelationalOperator: '<S596>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S574>/motohawk_calibration7'
   */
  rtb_LogicalOperator6_b = (rtb_RelationalOperator5_fz && (rtb_Switch_bn >=
    (ScrambleDebounceDelay_DataStore())));

  /* If: '<S597>/If' incorporates:
   *  Inport: '<S599>/In1'
   *  Inport: '<S600>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S597>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S597>/override_enable'
   */
  if ((Scramble_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S597>/NewValue' incorporates:
     *  ActionPort: '<S599>/Action Port'
     */
    BaseEngineController_LS_B.s597_Merge = (Scramble_new_DataStore());

    /* End of Outputs for SubSystem: '<S597>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S597>/OldValue' incorporates:
     *  ActionPort: '<S600>/Action Port'
     */
    BaseEngineController_LS_B.s597_Merge = rtb_LogicalOperator6_b;

    /* End of Outputs for SubSystem: '<S597>/OldValue' */
  }

  /* End of If: '<S597>/If' */

  /* S-Function Block: <S452>/motohawk_din2 Resource: TwoStepPin */
  {
    extern NativeError_S TwoStepPin_DigitalInput_Get(boolean_T *out, uint16_T
      *status);
    TwoStepPin_DigitalInput_Get(&BaseEngineController_LS_B.s452_motohawk_din2,
      NULL);
  }

  /* Logic: '<S575>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S575>/0 = No Inversion 1 = Inversion'
   */
  rtb_RelationalOperator5_fz = BaseEngineController_LS_B.s452_motohawk_din2 ^
    (TwoStepPolarity_DataStore());

  /* S-Function Block: <S603>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s603_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_ge = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S603>/Switch' incorporates:
   *  Constant: '<S603>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S603>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S603>/motohawk_delta_time'
   *  Sum: '<S603>/Sum'
   */
  if (rtb_RelationalOperator5_fz) {
    rtb_Switch_m1 = rtb_motohawk_delta_time_ge + TwoStepTimer_DataStore();
  } else {
    rtb_Switch_m1 = 0.0;
  }

  /* End of Switch: '<S603>/Switch' */
  /* Logic: '<S601>/Logical Operator' incorporates:
   *  RelationalOperator: '<S601>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S575>/motohawk_calibration7'
   */
  rtb_LogicalOperator6_b = (rtb_RelationalOperator5_fz && (rtb_Switch_m1 >=
    (TwoStepDebounceDelay_DataStore())));

  /* If: '<S602>/If' incorporates:
   *  Inport: '<S604>/In1'
   *  Inport: '<S605>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S602>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S602>/override_enable'
   */
  if ((TwoStep_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S602>/NewValue' incorporates:
     *  ActionPort: '<S604>/Action Port'
     */
    BaseEngineController_LS_B.s602_Merge = (TwoStep_new_DataStore());

    /* End of Outputs for SubSystem: '<S602>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S602>/OldValue' incorporates:
     *  ActionPort: '<S605>/Action Port'
     */
    BaseEngineController_LS_B.s602_Merge = rtb_LogicalOperator6_b;

    /* End of Outputs for SubSystem: '<S602>/OldValue' */
  }

  /* End of If: '<S602>/If' */

  /* S-Function Block: <S674>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s674_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_gx = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S674>/Product' incorporates:
   *  MinMax: '<S674>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S674>/motohawk_calibration'
   */
  rtb_DataTypeConversion_gx /= (rtb_DataTypeConversion_gx >=
    (MAPTimeFilterConst_DataStore())) || rtIsNaN((MAPTimeFilterConst_DataStore()))
    ? rtb_DataTypeConversion_gx : (MAPTimeFilterConst_DataStore());

  /* Sum: '<S679>/Sum1' incorporates:
   *  Constant: '<S679>/Constant'
   *  Product: '<S679>/Product'
   *  Product: '<S679>/Product1'
   *  Sum: '<S679>/Sum'
   *  UnitDelay: '<S679>/Unit Delay'
   */
  rtb_Sum1_mzy = (1.0 - rtb_DataTypeConversion_gx) *
    BaseEngineController_LS_DWork.s679_UnitDelay_DSTATE + rtb_Merge_jq *
    rtb_DataTypeConversion_gx;

  /* If: '<S678>/If' incorporates:
   *  Inport: '<S680>/In1'
   *  Inport: '<S681>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S678>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S678>/override_enable'
   */
  if ((MAPTime_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S678>/NewValue' incorporates:
     *  ActionPort: '<S680>/Action Port'
     */
    BaseEngineController_LS_B.s678_Merge = (MAPTime_new_DataStore());

    /* End of Outputs for SubSystem: '<S678>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S678>/OldValue' incorporates:
     *  ActionPort: '<S681>/Action Port'
     */
    BaseEngineController_LS_B.s678_Merge = rtb_Sum1_mzy;

    /* End of Outputs for SubSystem: '<S678>/OldValue' */
  }

  /* End of If: '<S678>/If' */

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

      /* Enable for Trigger_FGND_5XRTI_PERIODIC_4910p0004 */
      BaseEngineController_LS_DWork.s136_motohawk_trigger1_DWORK1 = 1;
      BaseEngineController_LS_DWork.s15_Run_MODE = TRUE;
    }

    /* S-Function Block: <S144>/motohawk_interpolation_1d2 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d2_l = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_l, (real_T *) ((ACTempOnTbl_DataStore())), 9);
      (ACTempOn_DataStore()) = rtb_motohawk_interpolation_1d2_l;
    }

    /* RelationalOperator: '<S161>/LT' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S144>/motohawk_interpolation_1d2'
     *  S-Function (motohawk_sfun_prelookup): '<S447>/motohawk_prelookup'
     */
    rtb_BelowLoTarget_b = (BaseEngineController_LS_B.s746_Merge >=
      rtb_motohawk_interpolation_1d2_l);

    /* S-Function Block: <S144>/motohawk_interpolation_1d3 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d3_n = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_l, (real_T *) ((ACTempOffTbl_DataStore())), 9);
      (ACTempOff_DataStore()) = rtb_motohawk_interpolation_1d3_n;
    }

    /* RelationalOperator: '<S161>/LT1' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S144>/motohawk_interpolation_1d3'
     *  S-Function (motohawk_sfun_prelookup): '<S447>/motohawk_prelookup'
     */
    rtb_AboveHiTarget_a = (BaseEngineController_LS_B.s746_Merge <=
      rtb_motohawk_interpolation_1d3_n);

    /* CombinatorialLogic: '<S167>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_b != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_AboveHiTarget_a != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_c[0] =
        BaseEngineController_LS_ConstP.pooled905[rowidx];
      rtb_CombinatorialLogic_c[1] =
        BaseEngineController_LS_ConstP.pooled905[rowidx + 4];
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

    /* RelationalOperator: '<S160>/LT' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S144>/motohawk_calibration2'
     */
    rtb_AboveHiTarget_a = (BaseEngineController_LS_B.s627_Sum1 >=
      (ACSpdSlowOn_DataStore()));

    /* RelationalOperator: '<S160>/LT1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S144>/motohawk_calibration1'
     */
    rtb_BelowLoTarget_b = (BaseEngineController_LS_B.s627_Sum1 <=
      (ACSpdSlowOff_DataStore()));

    /* CombinatorialLogic: '<S166>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_AboveHiTarget_a != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_b != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_c[0] =
        BaseEngineController_LS_ConstP.pooled905[rowidx];
      rtb_CombinatorialLogic_c[1] =
        BaseEngineController_LS_ConstP.pooled905[rowidx + 4];
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
    rtb_AboveHiTarget_a = (BaseEngineController_LS_B.s627_Sum1 >=
      (ACSpdFastOff_DataStore()));

    /* RelationalOperator: '<S158>/LT1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S144>/motohawk_calibration4'
     */
    rtb_BelowLoTarget_b = (BaseEngineController_LS_B.s627_Sum1 <=
      (ACSpdFastOn_DataStore()));

    /* CombinatorialLogic: '<S164>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_AboveHiTarget_a != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_b != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_c[0] =
        BaseEngineController_LS_ConstP.pooled905[rowidx];
      rtb_CombinatorialLogic_c[1] =
        BaseEngineController_LS_ConstP.pooled905[rowidx + 4];
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

    /* RelationalOperator: '<S159>/LT' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S144>/motohawk_calibration5'
     */
    rtb_AboveHiTarget_a = (BaseEngineController_LS_B.s422_Switch2 >=
      (AC_TPSOff_DataStore()));

    /* RelationalOperator: '<S159>/LT1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S144>/motohawk_calibration6'
     */
    rtb_BelowLoTarget_b = (BaseEngineController_LS_B.s422_Switch2 <=
      (AC_TPSOn_DataStore()));

    /* CombinatorialLogic: '<S165>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_AboveHiTarget_a != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_b != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_c[0] =
        BaseEngineController_LS_ConstP.pooled905[rowidx];
      rtb_CombinatorialLogic_c[1] =
        BaseEngineController_LS_ConstP.pooled905[rowidx + 4];
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

    /* S-Function Block: <S144>/motohawk_interpolation_1d1 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d1_g = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_l, (real_T *) ((ACLowPresOnTbl_DataStore())), 9);
      (ACLowPresOn_DataStore()) = rtb_motohawk_interpolation_1d1_g;
    }

    /* RelationalOperator: '<S157>/LT' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S144>/motohawk_interpolation_1d1'
     *  S-Function (motohawk_sfun_prelookup): '<S447>/motohawk_prelookup'
     */
    rtb_AboveHiTarget_a = (BaseEngineController_LS_B.s641_Merge >=
      rtb_motohawk_interpolation_1d1_g);

    /* S-Function Block: <S144>/motohawk_interpolation_1d4 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d4_d = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_l, (real_T *) ((ACLowPresOffTbl_DataStore())), 9);
      (ACLowPresOff_DataStore()) = rtb_motohawk_interpolation_1d4_d;
    }

    /* RelationalOperator: '<S157>/LT1' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S144>/motohawk_interpolation_1d4'
     *  S-Function (motohawk_sfun_prelookup): '<S447>/motohawk_prelookup'
     */
    rtb_BelowLoTarget_b = (BaseEngineController_LS_B.s641_Merge <=
      rtb_motohawk_interpolation_1d4_d);

    /* CombinatorialLogic: '<S163>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_AboveHiTarget_a != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_b != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_c[0] =
        BaseEngineController_LS_ConstP.pooled905[rowidx];
      rtb_CombinatorialLogic_c[1] =
        BaseEngineController_LS_ConstP.pooled905[rowidx + 4];
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
    /* S-Function Block: <S144>/motohawk_interpolation_1d5 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d5 = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_l, (real_T *) ((ACHighPresOffTbl_DataStore())),
         9);
      (ACHighPresOff_DataStore()) = rtb_motohawk_interpolation_1d5;
    }

    /* RelationalOperator: '<S156>/LT' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S144>/motohawk_interpolation_1d5'
     *  S-Function (motohawk_sfun_prelookup): '<S447>/motohawk_prelookup'
     */
    rtb_AboveHiTarget_a = (BaseEngineController_LS_B.s641_Merge >=
      rtb_motohawk_interpolation_1d5);

    /* S-Function Block: <S144>/motohawk_interpolation_1d6 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d6 = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_l, (real_T *) ((ACHighPresOnTbl_DataStore())), 9);
      (ACHighPresOn_DataStore()) = rtb_motohawk_interpolation_1d6;
    }

    /* RelationalOperator: '<S156>/LT1' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S144>/motohawk_interpolation_1d6'
     *  S-Function (motohawk_sfun_prelookup): '<S447>/motohawk_prelookup'
     */
    rtb_BelowLoTarget_b = (BaseEngineController_LS_B.s641_Merge <=
      rtb_motohawk_interpolation_1d6);

    /* CombinatorialLogic: '<S162>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_AboveHiTarget_a != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_b != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_c[0] =
        BaseEngineController_LS_ConstP.pooled905[rowidx];
      rtb_CombinatorialLogic_c[1] =
        BaseEngineController_LS_ConstP.pooled905[rowidx + 4];
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
    rtb_LogicalOperator1_br = (BaseEngineController_LS_B.s443_Switch >=
      (ACTimeFromStartDelay_DataStore()));

    /* Logic: '<S144>/Logical Operator' incorporates:
     *  Logic: '<S144>/Logical Operator6'
     *  S-Function (motohawk_sfun_fault_action): '<S144>/motohawk_fault_action'
     */
    BaseEngineController_LS_B.s144_LogicalOperator =
      ((BaseEngineController_LS_B.s578_Merge &&
        BaseEngineController_LS_B.s167_Switch1 && rtb_LogicalOperator6_b &&
        BaseEngineController_LS_B.s144_LogicalOperator4 &&
        BaseEngineController_LS_B.s163_Switch1 &&
        BaseEngineController_LS_B.s144_LogicalOperator1 &&
        rtb_LogicalOperator1_br && (!GetFaultActionStatus(3))));

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
        (BaseEngineController_LS_B.s403_motohawk_prelookup, (real_T *)
         ((Warmup_Time_HoldoffTbl_DataStore())), 5);
      (Warmup_Time_Holdoff_DataStore()) = rtb_motohawk_interpolation_1d_fx;
    }

    /* Switch: '<S170>/Switch' incorporates:
     *  Constant: '<S170>/Constant'
     *  RelationalOperator: '<S170>/Relational Operator'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S170>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_interpolation_2d): '<S146>/motohawk_interpolation_2d2'
     *  S-Function (motohawk_sfun_prelookup): '<S373>/motohawk_prelookup2'
     */
    if (BaseEngineController_LS_B.s443_Switch >=
        rtb_motohawk_interpolation_1d_fx) {
      /* S-Function Block: <S146>/motohawk_interpolation_2d2 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_WarmUptimeRatio = TableInterpolation2D_real_T(rtb_TimeSinceRun09,
          BaseEngineController_LS_B.s403_motohawk_prelookup, (real_T *)
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
        (BaseEngineController_LS_B.s405_motohawk_prelookup1,
         BaseEngineController_LS_B.s404_motohawk_prelookup, (real_T *)
         ((IntakeAirTempEnrichmentMap_DataStore())), 9, 5);
      (IntakeAirTempEnrichment_DataStore()) = rtb_IATEnrichment;
    }

    /* S-Function Block: <S146>/motohawk_interpolation_2d6 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_CATEnrichment = TableInterpolation2D_real_T
        (BaseEngineController_LS_B.s405_motohawk_prelookup1,
         BaseEngineController_LS_B.s402_motohawk_prelookup, (real_T *)
         ((ChargeAirTempEnrichmentMap_DataStore())), 9, 5);
      (ChargeAirTempEnrichment_DataStore()) = rtb_CATEnrichment;
    }

    /* S-Function Block: <S146>/motohawk_interpolation_2d3 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_motohawk_interpolation_2d3 = TableInterpolation2D_real_T
        (BaseEngineController_LS_B.s405_Indexes,
         BaseEngineController_LS_B.s407_Indexes, (real_T *)
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
      rtb_UnitDelay_cf = (EquivRatio_new_DataStore());

      /* End of Outputs for SubSystem: '<S171>/NewValue' */
    } else {
      /* Outputs for IfAction SubSystem: '<S171>/OldValue' incorporates:
       *  ActionPort: '<S173>/Action Port'
       */
      rtb_UnitDelay_cf = rtb_motohawk_interpolation_2d3;

      /* End of Outputs for SubSystem: '<S171>/OldValue' */
    }

    /* End of If: '<S171>/If' */

    /* MinMax: '<S146>/MinMax' */
    y = (rtb_UnitDelay_cf >= rtb_WarmUpRatio) || rtIsNaN(rtb_WarmUpRatio) ?
      rtb_UnitDelay_cf : rtb_WarmUpRatio;
    y = (y >= rtb_Switch_c) || rtIsNaN(rtb_Switch_c) ? y : rtb_Switch_c;
    y = (y >= rtb_IATEnrichment) || rtIsNaN(rtb_IATEnrichment) ? y :
      rtb_IATEnrichment;
    BaseEngineController_LS_B.s146_DesEquivRatio = (y >= rtb_CATEnrichment) ||
      rtIsNaN(rtb_CATEnrichment) ? y : rtb_CATEnrichment;

    /* End of Outputs for SubSystem: '<S136>/Base Equiv Ratio' */
    /* S-Function Block: <S194>/motohawk_prelookup */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (DFCOEntryRPMIn_DataStore()) = BaseEngineController_LS_B.s737_Merge;
      (DFCOEntryRPMIdx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_LS_B.s737_Merge, (DFCOEntryRPMIdxArr_DataStore()),
         10, (DFCOEntryRPMIdx_DataStore()));
      rtb_motohawk_prelookup_f = (DFCOEntryRPMIdx_DataStore());
    }

    /* S-Function Block: <S194>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_p = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_f, (real_T *) ((DFCOEntryRPMTbl_DataStore())),
         10);
      (DFCOEntryRPM_DataStore()) = rtb_motohawk_interpolation_1d_p;
    }

    /* RelationalOperator: '<S190>/Relational Operator' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S194>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_prelookup): '<S194>/motohawk_prelookup'
     */
    rtb_LogicalOperator6_b = (BaseEngineController_LS_B.s627_Sum1 >=
      rtb_motohawk_interpolation_1d_p);

    /* RelationalOperator: '<S190>/Relational Operator1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S190>/motohawk_calibration1'
     */
    rtb_LogicalOperator1_br = (BaseEngineController_LS_B.s415_Switch1 <=
      (DFCOEntryAPP_DataStore()));

    /* RelationalOperator: '<S190>/Relational Operator2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S190>/motohawk_calibration2'
     */
    rtb_RelationalOperator3_bp = (BaseEngineController_LS_B.s678_Merge <=
      (DFCOEntryMAP_DataStore()));

    /* Logic: '<S190>/Logical Operator1' incorporates:
     *  S-Function (motohawk_sfun_fault_action): '<S190>/motohawk_fault_action'
     */
    rtb_RelOp_pu = !GetFaultActionStatus(1);

    /* Logic: '<S190>/Logical Operator' incorporates:
     *  RelationalOperator: '<S190>/Relational Operator3'
     *  S-Function (motohawk_sfun_calibration): '<S190>/motohawk_calibration3'
     *  S-Function (motohawk_sfun_calibration): '<S190>/motohawk_calibration4'
     *  S-Function (motohawk_sfun_data_read): '<S190>/motohawk_data_read'
     *  Sum: '<S190>/Sum1'
     */
    BaseEngineController_LS_B.s190_LogicalOperator = ((rtb_LogicalOperator6_b &&
      rtb_LogicalOperator1_br && rtb_RelationalOperator3_bp && rtb_RelOp_pu &&
      (((uint8_T)(DFCOEnable_DataStore())) != 0) &&
      (BaseEngineController_LS_B.s627_Sum1 >= MinGovRPMSetPt_DataStore() +
       (DFCOEnterIdleSpeed_DataStore()))));

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
      rtb_Product_oj = rtb_motohawk_delta_time_p + DFCOEnterTimer_DataStore();
    } else {
      rtb_Product_oj = 0.0;
    }

    /* End of Switch: '<S193>/Switch' */
    /* Logic: '<S190>/Logical Operator2' incorporates:
     *  RelationalOperator: '<S190>/Relational Operator4'
     *  S-Function (motohawk_sfun_calibration): '<S190>/motohawk_calibration5'
     */
    rtb_AboveHiTarget_a = (BaseEngineController_LS_B.s190_LogicalOperator &&
      (rtb_Product_oj >= (DFCODelayTime_DataStore())));

    /* RelationalOperator: '<S190>/Relational Operator5' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S190>/motohawk_calibration9'
     *  S-Function (motohawk_sfun_data_read): '<S190>/motohawk_data_read'
     *  Sum: '<S190>/Sum'
     */
    rtb_LogicalOperator6_b = (BaseEngineController_LS_B.s627_Sum1 <=
      MinGovRPMSetPt_DataStore() + (DFCOExitIdleSpeed_DataStore()));

    /* S-Function Block: <S195>/motohawk_prelookup */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (DFCOExitRPMIn_DataStore()) = BaseEngineController_LS_B.s737_Merge;
      (DFCOExitRPMIdx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_LS_B.s737_Merge, (DFCOExitRPMIdxArr_DataStore()),
         10, (DFCOExitRPMIdx_DataStore()));
      rtb_motohawk_prelookup_p = (DFCOExitRPMIdx_DataStore());
    }

    /* S-Function Block: <S195>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_n0 = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_p, (real_T *) ((DFCOExitRPMTbl_DataStore())), 10);
      (DFCOExitRPM_DataStore()) = rtb_motohawk_interpolation_1d_n0;
    }

    /* RelationalOperator: '<S190>/Relational Operator8' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S195>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_prelookup): '<S195>/motohawk_prelookup'
     */
    rtb_LogicalOperator1_br = (BaseEngineController_LS_B.s627_Sum1 <=
      rtb_motohawk_interpolation_1d_n0);

    /* RelationalOperator: '<S190>/Relational Operator6' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S190>/motohawk_calibration6'
     */
    rtb_RelOp_pu = (BaseEngineController_LS_B.s415_Switch1 >=
                    (DFCOExitAPP_DataStore()));

    /* Logic: '<S190>/Logical Operator3' incorporates:
     *  RelationalOperator: '<S190>/Relational Operator7'
     *  S-Function (motohawk_sfun_calibration): '<S190>/motohawk_calibration7'
     */
    rtb_BelowLoTarget_b = (rtb_LogicalOperator6_b && rtb_LogicalOperator1_br &&
      rtb_RelOp_pu && (BaseEngineController_LS_B.s678_Merge >=
                       (DFCOExitMAP_DataStore())));

    /* CombinatorialLogic: '<S192>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_AboveHiTarget_a != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_b != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_c[0] =
        BaseEngineController_LS_ConstP.pooled905[rowidx];
      rtb_CombinatorialLogic_c[1] =
        BaseEngineController_LS_ConstP.pooled905[rowidx + 4];
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
        rtb_UnitDelay_cf = (DFCOExitRampTime_DataStore());
      } else {
        rtb_UnitDelay_cf = rtb_motohawk_delta_time_eo;
      }

      /* End of Switch: '<S191>/Switch' */
      rtb_Switch_k2 = rtb_motohawk_delta_time_eo / rtb_UnitDelay_cf * -1.0;
    } else {
      /* Switch: '<S191>/Switch1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S190>/motohawk_calibration8'
       *  S-Function (motohawk_sfun_delta_time): '<S191>/motohawk_delta_time'
       */
      if ((DFCOEnterRampTime_DataStore()) > 0.0) {
        rtb_UnitDelay_cf = (DFCOEnterRampTime_DataStore());
      } else {
        rtb_UnitDelay_cf = rtb_motohawk_delta_time_eo;
      }

      /* End of Switch: '<S191>/Switch1' */
      rtb_Switch_k2 = rtb_motohawk_delta_time_eo / rtb_UnitDelay_cf;
    }

    /* End of MultiPortSwitch: '<S191>/Multiport Switch' */

    /* Sum: '<S191>/Sum' incorporates:
     *  UnitDelay: '<S191>/state'
     */
    rtb_Switch_k2 += BaseEngineController_LS_DWork.s191_state_DSTATE;

    /* MinMax: '<S196>/MinMax' incorporates:
     *  Constant: '<S191>/Constant'
     */
    y = rtb_Switch_k2 >= 0.0 ? rtb_Switch_k2 : 0.0;

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
    /* Enable for Trigger_FGND_5XRTI_PERIODIC_4910p0004 */
    if (BaseEngineController_LS_DWork.s136_motohawk_trigger1_DWORK1 == 0) {
      BaseEngineController_LS_DWork.s136_motohawk_trigger1_DWORK1 = 1;
    }

    /* Sum: '<S145>/Sum2' */
    rtb_UnitDelay_cf =
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
            (BaseEngineController_LS_B.s407_motohawk_prelookup1, (real_T *)
             ((MaxETCSetPtLimitTbl_DataStore())), 9);
          (MaxETCSetPtLimit_DataStore()) = rtb_motohawk_interpolation_1d2_d;
        }

        /* Switch: '<S145>/Switch2' */
        if (BaseEngineController_LS_B.s231_MultiportSwitch) {
          rtb_UnitDelay_cf = BaseEngineController_LS_B.s234_Switch;
        } else {
          /* Switch: '<S145>/Switch4' incorporates:
           *  Logic: '<S145>/Logical Operator'
           *  Sum: '<S145>/Sum1'
           */
          if (!BaseEngineController_LS_B.s266_RelOp) {
            rtb_UnitDelay_cf = BaseEngineController_LS_B.s430_Sum2 +
              BaseEngineController_LS_B.s256_DontallowsetpointtoeverdropbelowtheTargetRPM;
          }

          /* End of Switch: '<S145>/Switch4' */
        }

        /* End of Switch: '<S145>/Switch2' */

        /* MinMax: '<S168>/MinMax' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S145>/motohawk_calibration3'
         */
        y = (rtb_UnitDelay_cf >= (MinETCSetpoint_DataStore())) || rtIsNaN
          ((MinETCSetpoint_DataStore())) ? rtb_UnitDelay_cf :
          (MinETCSetpoint_DataStore());

        /* MinMax: '<S168>/MinMax1' incorporates:
         *  MinMax: '<S168>/MinMax'
         */
        rtb_UnitDelay_cf = (y <= rtb_motohawk_interpolation_1d2_d) || rtIsNaN
          (rtb_motohawk_interpolation_1d2_d) ? y :
          rtb_motohawk_interpolation_1d2_d;
      } else {
        rtb_UnitDelay_cf = rtb_APP1;
      }

      /* End of Switch: '<S145>/Switch1' */
      BaseEngineController_LS_B.s145_MultiportSwitch = rtb_UnitDelay_cf;
    } else {
      BaseEngineController_LS_B.s145_MultiportSwitch = rtb_UnitDelay_cf;
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
    rtb_Switch_k2 = (BaseEngineController_LS_B.s678_Merge -
                     BaseEngineController_LS_B.s378_Sum) * 0.145038;

    /* RelationalOperator: '<S147>/Relational Operator' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S147>/motohawk_calibration2'
     */
    rtb_AboveHiTarget_a = (rtb_Switch_k2 < (BoostActivationThreshold_DataStore()));

    /* UnitDelay: '<S147>/Unit Delay' */
    rtb_UnitDelay_ju = BaseEngineController_LS_DWork.s147_UnitDelay_DSTATE;

    /* Outputs for Enabled SubSystem: '<S147>/BoostControl Adapt' incorporates:
     *  EnablePort: '<S174>/Enable'
     */
    /* Logic: '<S147>/Logical Operator' */
    if (!rtb_AboveHiTarget_a) {
      /* Product: '<S174>/Product0' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S174>/motohawk_calibration2'
       */
      rtb_UnitDelay_cf = rtb_UnitDelay_ju * (BoostControlAdaptGain_DataStore());

      /* MinMax: '<S181>/MinMax' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S179>/motohawk_calibration'
       */
      rtb_Abs_k = (rtb_UnitDelay_cf >= (BoostAdaptErrorLwrLim_DataStore())) ||
        rtIsNaN((BoostAdaptErrorLwrLim_DataStore())) ? rtb_UnitDelay_cf :
        (BoostAdaptErrorLwrLim_DataStore());

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
      rtb_UnitDelay_cf = rtb_motohawk_delta_time_nb + BoostTimer_DataStore();

      /* RelationalOperator: '<S178>/Relational Operator' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S178>/motohawk_calibration1'
       */
      rtb_LogicalOperator6_b = (rtb_UnitDelay_cf >
        (BoostAdaptDelayTime_DataStore()));

      /* Saturate: '<S180>/Saturation' */
      rtb_Saturation_cv = rtb_UnitDelay_cf >= 16000.0 ? 16000.0 :
        rtb_UnitDelay_cf <= 0.0 ? 0.0 : rtb_UnitDelay_cf;

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
          (fabs(rtb_UnitDelay_ju) <= (BoostControlAdaptDelta_DataStore()))));

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
    if (rtb_AboveHiTarget_a) {
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
    if (BaseEngineController_LS_B.s602_Merge) {
      /* S-Function Block: <S147>/motohawk_interpolation_1d1 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d1_gy = TableInterpolation1D_real_T
          (BaseEngineController_LS_B.s407_motohawk_prelookup1, (real_T *)
           ((BoostTarget_TwoStepTbl_DataStore())), 9);
        (BoostTarget_TwoStep_DataStore()) = rtb_motohawk_interpolation_1d1_gy;
      }

      BaseEngineController_LS_B.s147_Switch1 = rtb_motohawk_interpolation_1d1_gy;
    } else {
      /* S-Function Block: <S147>/motohawk_interpolation_1d3 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_Sum2_d = TableInterpolation1D_real_T
          (BaseEngineController_LS_B.s404_motohawk_prelookup, (real_T *)
           ((BoostIATLimitTbl_DataStore())), 5);
        (BoostIATLimit_DataStore()) = rtb_Sum2_d;
      }

      /* S-Function Block: <S147>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_MinMax_gy = TableInterpolation1D_real_T
          (BaseEngineController_LS_B.s403_motohawk_prelookup, (real_T *)
           ((BoostECTLimitTbl_DataStore())), 5);
        (BoostECTLimit_DataStore()) = rtb_MinMax_gy;
      }

      /* MinMax: '<S147>/MinMax' */
      rtb_MinMax_gy = (rtb_MinMax_gy <= rtb_Sum2_d) || rtIsNaN(rtb_Sum2_d) ?
        rtb_MinMax_gy : rtb_Sum2_d;

      /* Product: '<S147>/Product' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S147>/motohawk_calibration3'
       */
      rtb_Sum2_d = (real_T)BaseEngineController_LS_B.s597_Merge *
        (BoostScrambleAdder_DataStore());

      /* S-Function Block: <S147>/motohawk_interpolation_2d2 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_motohawk_interpolation_2d2_f = TableInterpolation2D_real_T
          (rtb_motohawk_prelookup_i,
           BaseEngineController_LS_B.s407_motohawk_prelookup1, (real_T *)
           ((BoostTargetMap_DataStore())), 9, 9);
        (BoostTarget_DataStore()) = rtb_motohawk_interpolation_2d2_f;
      }

      /* Sum: '<S147>/Sum2' incorporates:
       *  S-Function (motohawk_sfun_interpolation_2d): '<S147>/motohawk_interpolation_2d2'
       *  S-Function (motohawk_sfun_prelookup): '<S410>/motohawk_prelookup'
       */
      rtb_Sum2_d += rtb_motohawk_interpolation_2d2_f;

      /* MinMax: '<S147>/MinMax2' */
      BaseEngineController_LS_B.s147_Switch1 = (rtb_Sum2_d <= rtb_MinMax_gy) ||
        rtIsNaN(rtb_MinMax_gy) ? rtb_Sum2_d : rtb_MinMax_gy;
    }

    /* End of Switch: '<S147>/Switch1' */

    /* UnitDelay: '<S176>/Unit Delay' */
    rtb_UnitDelay_cf = BaseEngineController_LS_DWork.s176_UnitDelay_DSTATE;

    /* Product: '<S176>/Product1' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S176>/motohawk_delta_time'
     *  Sum: '<S176>/Sum3'
     *  UnitDelay: '<S176>/Unit Delay'
     */
    rtb_DataTypeConversion_m = 1.0 / rtb_motohawk_delta_time_id *
      (BaseEngineController_LS_B.s147_Switch1 -
       BaseEngineController_LS_DWork.s176_UnitDelay_DSTATE);

    /* MinMax: '<S189>/MinMax' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S147>/motohawk_calibration1'
     */
    rtb_Abs_k = (rtb_DataTypeConversion_m >= (BoostFallRate_DataStore())) ||
      rtIsNaN((BoostFallRate_DataStore())) ? rtb_DataTypeConversion_m :
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
      rtb_UnitDelay_cf;

    /* Sum: '<S184>/Sum2' */
    BaseEngineController_LS_B.s184_Sum2 = rtb_Sum2_o - rtb_Switch_k2;

    /* Product: '<S184>/Product5' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S175>/motohawk_calibration5'
     */
    rtb_DataTypeConversion_m = BaseEngineController_LS_B.s184_Sum2 *
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
      rtb_motohawk_interpolation_1d2_l0 = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup1_n, (real_T *)
         ((BoostCtlPGainErrorMultTbl_DataStore())), 9);
      (BoostCtlPGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d2_l0;
    }

    /* Product: '<S184>/Product2' incorporates:
     *  Product: '<S182>/Product2'
     *  S-Function (motohawk_sfun_calibration): '<S182>/motohawk_calibration3'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S182>/motohawk_interpolation_1d2'
     *  S-Function (motohawk_sfun_prelookup): '<S175>/motohawk_prelookup1'
     */
    BaseEngineController_LS_B.s184_Product2 = (BoostCtlPGain_DataStore()) *
      rtb_motohawk_interpolation_1d2_l0 * rtb_DataTypeConversion_m;

    /* UnitDelay: '<S185>/Unit Delay' */
    rtb_UnitDelay_cf = BaseEngineController_LS_DWork.s185_UnitDelay_DSTATE;

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
      rtb_motohawk_interpolation_1d3_l * rtb_DataTypeConversion_m;

    /* Sum: '<S185>/Sum2' */
    rtb_UnitDelay_cf = rtb_Product4_k - rtb_UnitDelay_cf;

    /* S-Function Block: <S185>/motohawk_delta_time */
    rtb_motohawk_delta_time_ao = 0.005;

    /* Product: '<S185>/Product' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S185>/motohawk_delta_time'
     */
    BaseEngineController_LS_B.s185_Product = rtb_UnitDelay_cf /
      rtb_motohawk_delta_time_ao;

    /* Switch: '<S175>/Switch' incorporates:
     *  Constant: '<S175>/Constant1'
     */
    if (rtb_AboveHiTarget_a) {
      BaseEngineController_LS_B.s175_Switch = 0.0;
    } else {
      /* MinMax: '<S183>/MinMax' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S175>/motohawk_calibration9'
       *  Sum: '<S184>/Sum1'
       */
      u = (BaseEngineController_LS_B.s184_Product2 +
           BaseEngineController_LS_B.s185_Product) +
        BaseEngineController_LS_B.s186_Switch1;
      y = (u >= (BoostCtlPIDOutLowerLimit_DataStore())) || rtIsNaN
        ((BoostCtlPIDOutLowerLimit_DataStore())) ? u :
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
      rtb_motohawk_prelookup_br = (BoostTargetIdx_DataStore());
    }

    /* S-Function Block: <S147>/motohawk_interpolation_2d1 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_motohawk_interpolation_2d1_d = TableInterpolation2D_real_T
        (rtb_motohawk_prelookup_br,
         BaseEngineController_LS_B.s407_motohawk_prelookup1, (real_T *)
         ((BoostControlBase_AdaptMap_DataStore())), 9, 9);
      (BoostControlBase_Adapt_DataStore()) = rtb_motohawk_interpolation_2d1_d;
    }

    /* S-Function Block: <S147>/motohawk_interpolation_2d */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      BaseEngineController_LS_B.s147_motohawk_interpolation_2d =
        TableInterpolation2D_real_T(rtb_motohawk_prelookup_br,
        BaseEngineController_LS_B.s407_motohawk_prelookup1, (real_T *)
        ((BoostControlBaseMap_DataStore())), 9, 9);
      (BoostControlBase_DataStore()) =
        BaseEngineController_LS_B.s147_motohawk_interpolation_2d;
    }

    /* Sum: '<S147>/Sum' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S147>/motohawk_interpolation_2d1'
     *  S-Function (motohawk_sfun_prelookup): '<S147>/motohawk_prelookup'
     */
    rtb_UnitDelay_cf = (rtb_motohawk_interpolation_2d1_d +
                        BaseEngineController_LS_B.s147_motohawk_interpolation_2d)
      + BaseEngineController_LS_B.s175_Switch;

    /* S-Function Block: <S147>/motohawk_interpolation_1d2 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d2_n = TableInterpolation1D_real_T
        (BaseEngineController_LS_B.s408_motohawk_prelookup, (real_T *)
         ((WGDeadTimeTbl_DataStore())), 9);
      (WGDeadTime_DataStore()) = rtb_motohawk_interpolation_1d2_n;
    }

    /* Sum: '<S147>/Sum3' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S147>/motohawk_interpolation_1d2'
     */
    BaseEngineController_LS_B.s147_Sum3 = rtb_UnitDelay_cf +
      rtb_motohawk_interpolation_1d2_n;

    /* Switch: '<S147>/Switch' incorporates:
     *  Constant: '<S147>/Constant'
     */
    if (rtb_AboveHiTarget_a) {
      rtb_Switch_k2 = 0.0;
    } else {
      rtb_Switch_k2 = BaseEngineController_LS_B.s147_Sum3;
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
    rtb_UnitDelay_cf = (BoostCtlIGain_DataStore()) *
      rtb_motohawk_interpolation_1d1_e * rtb_DataTypeConversion_m;

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
    rtb_DataTypeConversion_m = rtb_UnitDelay_cf * rtb_motohawk_delta_time_l3 +
      BaseEngineController_LS_B.s186_Switch1;

    /* MinMax: '<S188>/MinMax' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S175>/motohawk_calibration7'
     */
    rtb_Abs_k = (rtb_DataTypeConversion_m >= (BoostCtlITermLowerLimit_DataStore()))
      || rtIsNaN((BoostCtlITermLowerLimit_DataStore())) ?
      rtb_DataTypeConversion_m : (BoostCtlITermLowerLimit_DataStore());

    /* MinMax: '<S188>/MinMax1' incorporates:
     *  MinMax: '<S188>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S175>/motohawk_calibration8'
     */
    rtb_MinMax1_di = (rtb_Abs_k <= (BoostCtlITermUpperLimit_DataStore())) ||
      rtIsNaN((BoostCtlITermUpperLimit_DataStore())) ? rtb_Abs_k :
      (BoostCtlITermUpperLimit_DataStore());

    /* Saturate: '<S193>/Saturation' */
    rtb_Saturation_ao = rtb_Product_oj >= 16000.0 ? 16000.0 : rtb_Product_oj <=
      0.0 ? 0.0 : rtb_Product_oj;

    /* S-Function (motohawk_sfun_data_write): '<S193>/motohawk_data_write' */
    /* Write to Data Storage as scalar: DFCOEnterTimer */
    {
      DFCOEnterTimer_DataStore() = rtb_Saturation_ao;
    }

    /* RelationalOperator: '<S197>/LT' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S149>/motohawk_data_read'
     */
    rtb_AboveHiTarget_a = (BaseEngineController_LS_B.s737_Merge >=
      ECTFanOn_DataStore());

    /* RelationalOperator: '<S197>/LT1' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S149>/motohawk_data_read1'
     */
    rtb_BelowLoTarget_b = (BaseEngineController_LS_B.s737_Merge <=
      ECTFanOff_DataStore());

    /* CombinatorialLogic: '<S203>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_AboveHiTarget_a != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_b != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_c[0] =
        BaseEngineController_LS_ConstP.pooled905[rowidx];
      rtb_CombinatorialLogic_c[1] =
        BaseEngineController_LS_ConstP.pooled905[rowidx + 4];
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
    /* Switch: '<S149>/Switch' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S149>/motohawk_data_read14'
     *  S-Function (motohawk_sfun_interpolation_2d): '<S200>/motohawk_interpolation_2d'
     *  S-Function (motohawk_sfun_prelookup): '<S200>/motohawk_prelookup_col'
     *  S-Function (motohawk_sfun_prelookup): '<S200>/motohawk_prelookup_row'
     */
    if (((uint8_T)FAN_Mode_DataStore()) >= 1) {
      rtb_DataTypeConversion_m = (real_T)rtb_Switch1_em;
    } else {
      /* S-Function Block: <S200>/motohawk_prelookup_col */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (ECTFanSpeedColIn_DataStore()) = BaseEngineController_LS_B.s426_Switch2;
        (ECTFanSpeedColIdx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_LS_B.s426_Switch2,
           (ECTFanSpeedColIdxArr_DataStore()), 7, (ECTFanSpeedColIdx_DataStore()));
        rtb_motohawk_prelookup_col_dt = (ECTFanSpeedColIdx_DataStore());
      }

      /* S-Function Block: <S200>/motohawk_prelookup_row */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (ECTFanSpeedRowIn_DataStore()) = BaseEngineController_LS_B.s737_Merge;
        (ECTFanSpeedRowIdx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_LS_B.s737_Merge, (ECTFanSpeedRowIdxArr_DataStore
            ()), 7, (ECTFanSpeedRowIdx_DataStore()));
        rtb_motohawk_prelookup_row_o = (ECTFanSpeedRowIdx_DataStore());
      }

      /* S-Function Block: <S200>/motohawk_interpolation_2d */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_motohawk_interpolation_2d_o2 = TableInterpolation2D_real_T
          (rtb_motohawk_prelookup_row_o, rtb_motohawk_prelookup_col_dt, (real_T *)
           ((ECTFanSpeedMap_DataStore())), 7, 7);
        (ECTFanSpeed_DataStore()) = rtb_motohawk_interpolation_2d_o2;
      }

      rtb_DataTypeConversion_m = rtb_motohawk_interpolation_2d_o2;
    }

    /* End of Switch: '<S149>/Switch' */

    /* S-Function (motohawk_sfun_data_read): '<S149>/motohawk_data_read6' */
    rtb_motohawk_data_read13 = Fan1ECT_DataStore();

    /* Product: '<S149>/Product' */
    rtb_Product_oj = rtb_DataTypeConversion_m * (real_T)rtb_motohawk_data_read13;

    /* RelationalOperator: '<S198>/LT' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S149>/motohawk_data_read2'
     */
    rtb_AboveHiTarget_a = (BaseEngineController_LS_B.s755_Merge >=
      IATFanOn_DataStore());

    /* RelationalOperator: '<S198>/LT1' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S149>/motohawk_data_read3'
     */
    rtb_BelowLoTarget_b = (BaseEngineController_LS_B.s755_Merge <=
      IATFanOff_DataStore());

    /* CombinatorialLogic: '<S204>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_AboveHiTarget_a != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_b != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_c[0] =
        BaseEngineController_LS_ConstP.pooled905[rowidx];
      rtb_CombinatorialLogic_c[1] =
        BaseEngineController_LS_ConstP.pooled905[rowidx + 4];
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
      rtb_UnitDelay_ju = (real_T)rtb_Switch1_l4;
    } else {
      /* S-Function Block: <S201>/motohawk_prelookup_col */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (IATFanSpeedColIn_DataStore()) = BaseEngineController_LS_B.s426_Switch2;
        (IATFanSpeedColIdx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_LS_B.s426_Switch2,
           (IATFanSpeedColIdxArr_DataStore()), 7, (IATFanSpeedColIdx_DataStore()));
        rtb_motohawk_prelookup_col_e = (IATFanSpeedColIdx_DataStore());
      }

      /* S-Function Block: <S201>/motohawk_prelookup_row */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (IATFanSpeedRowIn_DataStore()) = BaseEngineController_LS_B.s755_Merge;
        (IATFanSpeedRowIdx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_LS_B.s755_Merge, (IATFanSpeedRowIdxArr_DataStore
            ()), 7, (IATFanSpeedRowIdx_DataStore()));
        rtb_motohawk_prelookup_row_h = (IATFanSpeedRowIdx_DataStore());
      }

      /* S-Function Block: <S201>/motohawk_interpolation_2d */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_motohawk_interpolation_2d_n = TableInterpolation2D_real_T
          (rtb_motohawk_prelookup_row_h, rtb_motohawk_prelookup_col_e, (real_T *)
           ((IATFanSpeedMap_DataStore())), 7, 7);
        (IATFanSpeed_DataStore()) = rtb_motohawk_interpolation_2d_n;
      }

      rtb_UnitDelay_ju = rtb_motohawk_interpolation_2d_n;
    }

    /* End of Switch: '<S149>/Switch1' */

    /* S-Function (motohawk_sfun_data_read): '<S149>/motohawk_data_read7' */
    rtb_motohawk_data_read13 = Fan1IAT_DataStore();

    /* Product: '<S149>/Product1' */
    rtb_Switch1_f = rtb_UnitDelay_ju * (real_T)rtb_motohawk_data_read13;

    /* RelationalOperator: '<S199>/LT' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S149>/motohawk_data_read4'
     */
    rtb_AboveHiTarget_a = (BaseEngineController_LS_B.s641_Merge >=
      ACPresFanOn_DataStore());

    /* RelationalOperator: '<S199>/LT1' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S149>/motohawk_data_read5'
     */
    rtb_BelowLoTarget_b = (BaseEngineController_LS_B.s641_Merge <=
      ACPresFanOff_DataStore());

    /* CombinatorialLogic: '<S205>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_AboveHiTarget_a != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_b != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_c[0] =
        BaseEngineController_LS_ConstP.pooled905[rowidx];
      rtb_CombinatorialLogic_c[1] =
        BaseEngineController_LS_ConstP.pooled905[rowidx + 4];
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
      rtb_Product6_m = (real_T)rtb_Switch1_mo;
    } else {
      /* S-Function Block: <S202>/motohawk_prelookup_col */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (ACPresFanSpeedColIn_DataStore()) =
          BaseEngineController_LS_B.s426_Switch2;
        (ACPresFanSpeedColIdx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_LS_B.s426_Switch2,
           (ACPresFanSpeedColIdxArr_DataStore()), 7,
           (ACPresFanSpeedColIdx_DataStore()));
        rtb_motohawk_prelookup_col_o = (ACPresFanSpeedColIdx_DataStore());
      }

      /* S-Function Block: <S202>/motohawk_prelookup_row */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (ACPresFanSpeedRowIn_DataStore()) = BaseEngineController_LS_B.s641_Merge;
        (ACPresFanSpeedRowIdx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_LS_B.s641_Merge,
           (ACPresFanSpeedRowIdxArr_DataStore()), 7,
           (ACPresFanSpeedRowIdx_DataStore()));
        rtb_motohawk_prelookup_row_a = (ACPresFanSpeedRowIdx_DataStore());
      }

      /* S-Function Block: <S202>/motohawk_interpolation_2d */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_motohawk_interpolation_2d_a = TableInterpolation2D_real_T
          (rtb_motohawk_prelookup_row_a, rtb_motohawk_prelookup_col_o, (real_T *)
           ((ACPresFanSpeedMap_DataStore())), 7, 7);
        (ACPresFanSpeed_DataStore()) = rtb_motohawk_interpolation_2d_a;
      }

      rtb_Product6_m = rtb_motohawk_interpolation_2d_a;
    }

    /* End of Switch: '<S149>/Switch2' */

    /* S-Function (motohawk_sfun_data_read): '<S149>/motohawk_data_read8' */
    rtb_motohawk_data_read13 = Fan1ACPres_DataStore();

    /* Product: '<S149>/Product2' */
    rtb_Product7_i = rtb_Product6_m * (real_T)rtb_motohawk_data_read13;

    /* DataTypeConversion: '<S149>/Data Type Conversion' */
    rtb_Product5_j = (real_T)BaseEngineController_LS_B.s578_Merge;

    /* Switch: '<S149>/Switch3' incorporates:
     *  Product: '<S149>/Product8'
     *  S-Function (motohawk_sfun_calibration): '<S149>/motohawk_calibration14'
     *  S-Function (motohawk_sfun_data_read): '<S149>/motohawk_data_read14'
     */
    if (!(((uint8_T)FAN_Mode_DataStore()) >= 1)) {
      rtb_Product5_j *= (ACSwFanSpeed_DataStore());
    }

    /* End of Switch: '<S149>/Switch3' */

    /* S-Function (motohawk_sfun_data_read): '<S149>/motohawk_data_read9' */
    rtb_motohawk_data_read13 = Fan1ACSw_DataStore();

    /* MinMax: '<S149>/MinMax' incorporates:
     *  Product: '<S149>/Product3'
     */
    y = (rtb_Product_oj >= rtb_Switch1_f) || rtIsNaN(rtb_Switch1_f) ?
      rtb_Product_oj : rtb_Switch1_f;
    y = (y >= rtb_Product7_i) || rtIsNaN(rtb_Product7_i) ? y : rtb_Product7_i;
    rtb_DesiredLambda_idx_0 = rtb_Product5_j * (real_T)rtb_motohawk_data_read13;
    BaseEngineController_LS_B.s149_MinMax = (y >= rtb_DesiredLambda_idx_0) ||
      rtIsNaN(rtb_DesiredLambda_idx_0) ? y : rtb_DesiredLambda_idx_0;

    /* S-Function (motohawk_sfun_data_read): '<S149>/motohawk_data_read10' */
    rtb_motohawk_data_read13 = Fan2ECT_DataStore();

    /* Product: '<S149>/Product4' */
    rtb_UnitDelay_cf = rtb_DataTypeConversion_m * (real_T)
      rtb_motohawk_data_read13;

    /* S-Function (motohawk_sfun_data_read): '<S149>/motohawk_data_read11' */
    rtb_motohawk_data_read13 = Fan2IAT_DataStore();

    /* Product: '<S149>/Product5' */
    rtb_Product7_i = rtb_UnitDelay_ju * (real_T)rtb_motohawk_data_read13;

    /* S-Function (motohawk_sfun_data_read): '<S149>/motohawk_data_read12' */
    rtb_motohawk_data_read13 = Fan2ACPres_DataStore();

    /* Product: '<S149>/Product6' */
    rtb_Switch1_f = rtb_Product6_m * (real_T)rtb_motohawk_data_read13;

    /* S-Function (motohawk_sfun_data_read): '<S149>/motohawk_data_read13' */
    rtb_motohawk_data_read13 = Fan2ACSw_DataStore();

    /* MinMax: '<S149>/MinMax1' incorporates:
     *  Product: '<S149>/Product7'
     */
    y = (rtb_UnitDelay_cf >= rtb_Product7_i) || rtIsNaN(rtb_Product7_i) ?
      rtb_UnitDelay_cf : rtb_Product7_i;
    y = (y >= rtb_Switch1_f) || rtIsNaN(rtb_Switch1_f) ? y : rtb_Switch1_f;
    rtb_DesiredLambda_idx_0 = rtb_Product5_j * (real_T)rtb_motohawk_data_read13;
    BaseEngineController_LS_B.s149_MinMax1 = (y >= rtb_DesiredLambda_idx_0) ||
      rtIsNaN(rtb_DesiredLambda_idx_0) ? y : rtb_DesiredLambda_idx_0;

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
     *  S-Function (motohawk_sfun_prelookup): '<S446>/motohawk_prelookup'
     */
    BaseEngineController_LS_B.s284_RelationalOperator5 =
      ((BaseEngineController_LS_B.s443_Switch >= rtb_motohawk_interpolation_1d_f));

    /* Logic: '<S284>/Logical Operator2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S284>/motohawk_calibration2'
     */
    BaseEngineController_LS_B.s284_LogicalOperator2 =
      ((BaseEngineController_LS_B.s392_LogicalOperator &&
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
        (BaseEngineController_LS_B.s405_motohawk_prelookup1,
         BaseEngineController_LS_B.s407_motohawk_prelookup1, (real_T *)
         ((RichSwPtDeltaMap_DataStore())), 9, 9);
      (RichSwPtDelta_DataStore()) = rtb_RichEquivRatioSwPtDelta;
    }

    /* S-Function Block: <S288>/motohawk_interpolation_2d3 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_LeanEquivRatioSwPtDelta = TableInterpolation2D_real_T
        (BaseEngineController_LS_B.s405_motohawk_prelookup1,
         BaseEngineController_LS_B.s407_motohawk_prelookup1, (real_T *)
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
     *  S-Function (motohawk_sfun_prelookup): '<S403>/motohawk_prelookup1'
     *  S-Function (motohawk_sfun_prelookup): '<S448>/motohawk_prelookup'
     */
    rtb_UnitDelay_cf = rtb_motohawk_interpolation_1d_i *
      rtb_motohawk_interpolation_1d1_o0;

    /* Logic: '<S154>/Logical Operator1' */
    rtb_LogicalOperator1_br = !rtb_RelOp_hf;

    /* Outputs for Atomic SubSystem: '<S154>/O2 PID Controller' */
    /* RelationalOperator: '<S290>/LT' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S288>/motohawk_interpolation_2d2'
     *  Sum: '<S290>/Sum3'
     */
    rtb_AboveRich = (BaseEngineController_LS_B.s420_Sum1 >=
                     rtb_DesiredLambda_idx + rtb_RichEquivRatioSwPtDelta);

    /* RelationalOperator: '<S290>/LT1' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S288>/motohawk_interpolation_2d3'
     *  Sum: '<S290>/Sum4'
     */
    rtb_LogicalOperator2_ig = (BaseEngineController_LS_B.s420_Sum1 <=
      rtb_DesiredLambda_idx - rtb_LeanEquivRatioSwPtDelta);

    /* CombinatorialLogic: '<S297>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_AboveRich != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_LogicalOperator2_ig != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic[0] =
        BaseEngineController_LS_ConstP.pooled905[rowidx];
      rtb_CombinatorialLogic[1] =
        BaseEngineController_LS_ConstP.pooled905[rowidx + 4];
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
        BaseEngineController_LS_B.s420_Sum1;
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
            (BaseEngineController_LS_B.s405_motohawk_prelookup1,
             BaseEngineController_LS_B.s407_motohawk_prelookup1, (real_T *)
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
            (BaseEngineController_LS_B.s405_motohawk_prelookup1,
             BaseEngineController_LS_B.s407_motohawk_prelookup1, (real_T *)
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
      - BaseEngineController_LS_B.s420_Sum1;

    /* Product: '<S292>/Product5' */
    rtb_Product6_m = BaseEngineController_LS_B.s292_Sum2 * rtb_UnitDelay_cf;

    /* Product: '<S292>/Product2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S285>/motohawk_calibration5'
     */
    BaseEngineController_LS_B.s292_Product2 = rtb_Product6_m *
      (O2CtrlPGain_DataStore());

    /* Switch: '<S294>/Switch1' incorporates:
     *  Constant: '<S289>/Constant'
     *  UnitDelay: '<S294>/Unit Delay'
     */
    if (rtb_LogicalOperator1_br) {
      BaseEngineController_LS_B.s294_Switch1 = 0.0;
    } else {
      BaseEngineController_LS_B.s294_Switch1 =
        BaseEngineController_LS_DWork.s294_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S294>/Switch1' */

    /* Product: '<S292>/Product4' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S285>/motohawk_calibration7'
     */
    rtb_Product5_j = rtb_Product6_m * (O2CtrlDGain_DataStore());

    /* Sum: '<S293>/Sum2' incorporates:
     *  UnitDelay: '<S293>/Unit Delay'
     */
    rtb_UnitDelay_cf = rtb_Product5_j -
      BaseEngineController_LS_DWork.s293_UnitDelay_DSTATE;

    /* S-Function Block: <S293>/motohawk_delta_time */
    rtb_motohawk_delta_time_kr = 0.005;

    /* Product: '<S293>/Product' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S293>/motohawk_delta_time'
     */
    BaseEngineController_LS_B.s293_Product = rtb_UnitDelay_cf /
      rtb_motohawk_delta_time_kr;

    /* MinMax: '<S291>/MinMax' incorporates:
     *  Constant: '<S289>/Convert to Fuel Multiplier'
     *  S-Function (motohawk_sfun_calibration): '<S285>/motohawk_calibration11'
     *  Sum: '<S289>/Sum'
     *  Sum: '<S292>/Sum1'
     */
    u = ((BaseEngineController_LS_B.s292_Product2 +
          BaseEngineController_LS_B.s293_Product) +
         BaseEngineController_LS_B.s294_Switch1) + 1.0;
    y = (u >= (O2CtrlPIDOutLowerLimit_DataStore())) || rtIsNaN
      ((O2CtrlPIDOutLowerLimit_DataStore())) ? u :
      (O2CtrlPIDOutLowerLimit_DataStore());

    /* MinMax: '<S291>/MinMax1' incorporates:
     *  MinMax: '<S291>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S285>/motohawk_calibration10'
     */
    rtb_Product7_i = (y <= (O2CtrlPIDOutUpperLimit_DataStore())) || rtIsNaN
      ((O2CtrlPIDOutUpperLimit_DataStore())) ? y :
      (O2CtrlPIDOutUpperLimit_DataStore());

    /* Product: '<S292>/Product1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S285>/motohawk_calibration6'
     */
    rtb_UnitDelay_cf = rtb_Product6_m * (O2CtrlIGain_DataStore());

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
    u = rtb_UnitDelay_cf * rtb_motohawk_delta_time_mn +
      BaseEngineController_LS_B.s294_Switch1;
    y = (u >= (O2ITermLowerLimit_DataStore())) || rtIsNaN
      ((O2ITermLowerLimit_DataStore())) ? u : (O2ITermLowerLimit_DataStore());

    /* MinMax: '<S296>/MinMax1' incorporates:
     *  MinMax: '<S296>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S285>/motohawk_calibration9'
     */
    u = (y <= (O2ITermUpperLimit_DataStore())) || rtIsNaN
      ((O2ITermUpperLimit_DataStore())) ? y : (O2ITermUpperLimit_DataStore());

    /* UnitDelay: '<S290>/Unit Delay1' */
    rtb_Product6_m = BaseEngineController_LS_DWork.s290_UnitDelay1_DSTATE;

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
    rtb_LogicalOperator1_br = !rtb_LogicalOperator1_br;

    /* Switch: '<S298>/Switch' incorporates:
     *  Constant: '<S298>/Constant'
     *  Logic: '<S290>/Logical Operator7'
     *  S-Function (motohawk_sfun_data_read): '<S298>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S298>/motohawk_delta_time'
     *  Sum: '<S298>/Sum'
     */
    if (rtb_LogicalOperator2_ig && rtb_RelOp_pu && rtb_LogicalOperator1_br) {
      rtb_UnitDelay_cf = rtb_motohawk_delta_time_bm + O2LeanTimer_DataStore();
    } else {
      rtb_UnitDelay_cf = 0.0;
    }

    /* End of Switch: '<S298>/Switch' */

    /* Switch: '<S290>/Switch3' */
    if (rtb_RelationalOperator3_bp) {
      BaseEngineController_LS_B.s290_Switch3 = rtb_Product6_m;
    } else {
      BaseEngineController_LS_B.s290_Switch3 = rtb_UnitDelay_cf;
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
    rtb_Product6_m = BaseEngineController_LS_DWork.s290_UnitDelay_DSTATE;

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
    if (rtb_AboveRich && rtb_RelOp_pu && rtb_LogicalOperator1_br) {
      rtb_UnitDelay_ju = rtb_motohawk_delta_time_oq + O2RichTimer_DataStore();
    } else {
      rtb_UnitDelay_ju = 0.0;
    }

    /* End of Switch: '<S300>/Switch' */

    /* Switch: '<S290>/Switch1' */
    if (rtb_LogicalOperator6_b) {
      BaseEngineController_LS_B.s290_Switch1 = rtb_Product6_m;
    } else {
      BaseEngineController_LS_B.s290_Switch1 = rtb_UnitDelay_ju;
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
    rtb_Product6_m = BaseEngineController_LS_DWork.s290_UnitDelay2_DSTATE;

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
    if (rtb_LogicalOperator2_ig && rtb_RelOp_pu && rtb_LogicalOperator1_br) {
      rtb_Switch1_f = rtb_motohawk_delta_time_ad + O2ActiveTimer_DataStore();
    } else {
      rtb_Switch1_f = 0.0;
    }

    /* End of Switch: '<S299>/Switch' */

    /* Switch: '<S290>/Switch4' */
    if (rtb_LogicalOperator6_b) {
      BaseEngineController_LS_B.s290_Switch4 = rtb_Product6_m;
    } else {
      BaseEngineController_LS_B.s290_Switch4 = rtb_Switch1_f;
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
    rtb_Saturation_nb = rtb_UnitDelay_cf >= 16000.0 ? 16000.0 : rtb_UnitDelay_cf
      <= 0.0 ? 0.0 : rtb_UnitDelay_cf;

    /* S-Function (motohawk_sfun_data_write): '<S298>/motohawk_data_write' */
    /* Write to Data Storage as scalar: O2LeanTimer */
    {
      O2LeanTimer_DataStore() = rtb_Saturation_nb;
    }

    /* Saturate: '<S299>/Saturation' */
    rtb_Saturation_mr = rtb_Switch1_f >= 16000.0 ? 16000.0 : rtb_Switch1_f <=
      0.0 ? 0.0 : rtb_Switch1_f;

    /* S-Function (motohawk_sfun_data_write): '<S299>/motohawk_data_write' */
    /* Write to Data Storage as scalar: O2ActiveTimer */
    {
      O2ActiveTimer_DataStore() = rtb_Saturation_mr;
    }

    /* Saturate: '<S300>/Saturation' */
    rtb_Saturation_c3 = rtb_UnitDelay_ju >= 16000.0 ? 16000.0 : rtb_UnitDelay_ju
      <= 0.0 ? 0.0 : rtb_UnitDelay_ju;

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
      rtb_Product7_i = 1.0;
    }

    /* End of InitialCondition: '<S286>/Multiply by 1.0 if not yet enabled' */

    /* Update for UnitDelay: '<S297>/Unit Delay' */
    BaseEngineController_LS_DWork.s297_UnitDelay_DSTATE = rtb_Switch1_mj;

    /* Update for UnitDelay: '<S294>/Unit Delay' incorporates:
     *  MinMax: '<S296>/MinMax1'
     */
    BaseEngineController_LS_DWork.s294_UnitDelay_DSTATE = u;

    /* Update for UnitDelay: '<S293>/Unit Delay' */
    BaseEngineController_LS_DWork.s293_UnitDelay_DSTATE = rtb_Product5_j;

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
    if ((((int8_T)(O2DisablmentMult_DataStore())) != 0) &&
        BaseEngineController_LS_B.s284_LogicalOperator2) {
      BaseEngineController_LS_B.s154_O2FuelMult = rtb_Product7_i;
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
      (DesAFRatioIn_DataStore()) = BaseEngineController_LS_B.s649_Merge;
      (DesAFRatioIdx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_LS_B.s649_Merge, (DesAFRatioIdxArr_DataStore()),
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
      = BaseEngineController_LS_B.s377_MultiportSwitch * rtb_DesiredLambda_idx /
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
        BaseEngineController_LS_B.s670_Merge * rtb_Product_mq;

      /* Sum: '<S212>/Sum1' */
      BaseEngineController_LS_B.s212_Sum1 = BaseEngineController_LS_B.s670_Merge
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
        BaseEngineController_LS_B.s422_Switch2 * rtb_Product_mq;

      /* Sum: '<S212>/Sum' */
      BaseEngineController_LS_B.s212_Sum =
        BaseEngineController_LS_B.s422_Switch2 -
        BaseEngineController_LS_B.s220_Sum1;

      /* S-Function Block: <S212>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (MAF09In_DataStore()) = BaseEngineController_LS_B.s377_MultiportSwitch;
        (MAF09Idx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_LS_B.s377_MultiportSwitch,
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
            (BaseEngineController_LS_B.s403_motohawk_prelookup, (real_T *)
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
    rtb_UnitDelay_cf = BaseEngineController_LS_B.s212_Product1 *
      BaseEngineController_LS_B.s206_ApplyMultipliersforO2KnockControlandEnrichment1;

    /* S-Function Block: <S207>/Make-Up Pulse End of Injection Timing1 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_EOI = TableInterpolation2D_real_T
        (BaseEngineController_LS_B.s405_motohawk_prelookup1,
         BaseEngineController_LS_B.s407_motohawk_prelookup1, (real_T *)
         ((MakeUpEOIMap_DataStore())), 9, 9);
      (MakeUpEOI_DataStore()) = rtb_EOI;
    }

    /* Outputs for Enabled SubSystem: '<S213>/Multiply and Divide, avoiding divde by zero' incorporates:
     *  EnablePort: '<S222>/Enable'
     */
    /* RelationalOperator: '<S223>/RelOp' incorporates:
     *  Constant: '<S223>/Constant'
     */
    if (BaseEngineController_LS_B.s627_Sum1 != 0.0) {
      /* Product: '<S222>/charge mass' incorporates:
       *  Constant: '<S213>/Units Equivalency Factor'
       */
      BaseEngineController_LS_B.s222_chargemass = rtb_UnitDelay_cf * 60000.0 /
        BaseEngineController_LS_B.s627_Sum1;
    }

    /* End of RelationalOperator: '<S223>/RelOp' */
    /* End of Outputs for SubSystem: '<S213>/Multiply and Divide, avoiding divde by zero' */
    /* S-Function Block: <S207>/Primary Pulse Injection Timing */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_PrimaryPulseInjectionTiming = TableInterpolation2D_real_T
        (BaseEngineController_LS_B.s405_motohawk_prelookup1,
         BaseEngineController_LS_B.s407_motohawk_prelookup1, (real_T *)
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
    rtb_UnitDelay_cf = BaseEngineController_LS_B.s294_Switch1 *
      rtb_motohawk_interpolation_1d1_m;

    /* MinMax: '<S229>/MinMax' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S226>/motohawk_calibration'
     */
    rtb_Abs_k = (rtb_UnitDelay_cf >= (FuelAdaptErrorLwrLim_DataStore())) ||
      rtIsNaN((FuelAdaptErrorLwrLim_DataStore())) ? rtb_UnitDelay_cf :
      (FuelAdaptErrorLwrLim_DataStore());

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
        (BaseEngineController_LS_B.s405_motohawk_prelookup1,
         BaseEngineController_LS_B.s407_motohawk_prelookup1, (real_T *)
         ((FuelFlowCompAdaptMap_DataStore())), 9, 9);
      (FuelFlowCompAdapt_DataStore()) = rtb_motohawk_interpolation_2d2;
    }

    /* Outputs for Atomic SubSystem: '<S208>/WarmUp Disable' */
    /* Outputs for Atomic SubSystem: '<S136>/O2 Control' */
    /* Logic: '<S227>/Logical Operator' incorporates:
     *  Constant: '<S227>/Constant'
     *  Inport: '<S154>/Desired_Equiv'
     *  MinMax: '<S227>/MinMax'
     *  RelationalOperator: '<S227>/Relational Operator'
     *  Sum: '<S227>/Sum'
     */
    BaseEngineController_LS_B.s227_LogicalOperator = !(((rtb_DesiredLambda_idx_0
      >= rtb_Switch_c) || rtIsNaN(rtb_Switch_c) ? rtb_DesiredLambda_idx_0 :
      rtb_Switch_c) - rtb_DesiredLambda_idx > 0.01);

    /* End of Outputs for SubSystem: '<S136>/O2 Control' */

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
      rtb_UnitDelay_cf = rtb_motohawk_delta_time_m3 + LiqDelayTime_DataStore();
    } else {
      rtb_UnitDelay_cf = 0.0;
    }

    /* End of Switch: '<S228>/Switch' */
    /* RelationalOperator: '<S225>/Relational Operator' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S225>/motohawk_calibration1'
     */
    rtb_LogicalOperator6_b = (rtb_UnitDelay_cf > (O2CtrlAdaptDelayTime_DataStore
                               ()));

    /* Saturate: '<S228>/Saturation' */
    rtb_Saturation_gs = rtb_UnitDelay_cf >= 16000.0 ? 16000.0 : rtb_UnitDelay_cf
      <= 0.0 ? 0.0 : rtb_UnitDelay_cf;

    /* S-Function (motohawk_sfun_data_write): '<S228>/motohawk_data_write' */
    /* Write to Data Storage as scalar: LiqDelayTime */
    {
      LiqDelayTime_DataStore() = rtb_Saturation_gs;
    }

    /* End of Outputs for SubSystem: '<S208>/O2 Control Enable Delay' */

    /* Abs: '<S208>/Abs' */
    rtb_UnitDelay_cf = fabs(BaseEngineController_LS_B.s294_Switch1);

    /* Logic: '<S208>/Logical Operator2' incorporates:
     *  RelationalOperator: '<S208>/Relational Operator'
     *  S-Function (motohawk_sfun_calibration): '<S208>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S208>/motohawk_calibration1'
     *  S-Function (motohawk_sfun_calibration): '<S208>/motohawk_calibration2'
     */
    BaseEngineController_LS_B.s208_LogicalOperator2 =
      (((FuelAdaptEnable_DataStore()) && (AdaptEnable_DataStore()) &&
        BaseEngineController_LS_B.s227_LogicalOperator && rtb_LogicalOperator6_b
        && (rtb_UnitDelay_cf <= (FuelAdaptDelta_DataStore()))));

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
        (BaseEngineController_LS_B.s405_motohawk_prelookup1,
         BaseEngineController_LS_B.s407_motohawk_prelookup1, (real_T *)
         ((FuelFlowCompMap_DataStore())), 9, 9);
      (FuelFlowComp_DataStore()) = rtb_motohawk_interpolation_2d1_p;
    }

    /* Product: '<S208>/Divide' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S208>/motohawk_interpolation_2d1'
     *  S-Function (motohawk_sfun_interpolation_2d): '<S208>/motohawk_interpolation_2d2'
     */
    rtb_UnitDelay_cf = rtb_motohawk_interpolation_2d1_p *
      rtb_motohawk_interpolation_2d2;

    /* End of Outputs for SubSystem: '<S150>/O2 Fuel Adapt' */
    /* End of Outputs for SubSystem: '<S136>/Fuel System Manager' */

    /* Switch: '<S151>/Switch4' incorporates:
     *  Constant: '<S151>/Constant2'
     *  Logic: '<S151>/Logical Operator'
     *  Sum: '<S151>/Sum2'
     */
    if (!BaseEngineController_LS_B.s266_RelOp) {
      rtb_UnitDelay_ju = 0.0;
    } else {
      rtb_UnitDelay_ju =
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
      BaseEngineController_LS_B.s135_IACS = 100.0 - rtb_UnitDelay_ju;
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
    BaseEngineController_LS_B.s135_WASTEGATE = rtb_Switch_k2;

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
    BaseEngineController_LS_B.s135_IACP = rtb_UnitDelay_ju;

    /* ZeroOrderHold: '<S136>/Zero-Order Hold3' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S207>/Make-Up Pulse End of Injection Timing1'
     */
    BaseEngineController_LS_B.s135_MakeUpEOI = rtb_EOI;

    /* ZeroOrderHold: '<S136>/Zero-Order Hold4' */
    BaseEngineController_LS_B.s135_FuelMult = rtb_UnitDelay_cf;

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
      /* Disable for Trigger_FGND_5XRTI_PERIODIC_4910p0004 */
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

  /* If: '<S871>/If' incorporates:
   *  Inport: '<S872>/In1'
   *  Inport: '<S873>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S871>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S871>/override_enable'
   */
  if ((AC_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S871>/NewValue' incorporates:
     *  ActionPort: '<S872>/Action Port'
     */
    rtb_LogicalOperator6_b = (AC_new_DataStore());

    /* End of Outputs for SubSystem: '<S871>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S871>/OldValue' incorporates:
     *  ActionPort: '<S873>/Action Port'
     */
    rtb_LogicalOperator6_b = BaseEngineController_LS_B.s135_AC;

    /* End of Outputs for SubSystem: '<S871>/OldValue' */
  }

  /* End of If: '<S871>/If' */

  /* Logic: '<S870>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S870>/0 = No Inversion 1 = Inversion'
   */
  BaseEngineController_LS_B.s870_LogicalOperator = rtb_LogicalOperator6_b ^
    (AC_Polarity_DataStore());

  /* S-Function (motohawk_sfun_trigger): '<S455>/motohawk_trigger1' */
  /* Enable for Trigger_FGND_5XRTI_PERIODIC_11343p0129 */
  if (BaseEngineController_LS_DWork.s455_motohawk_trigger1_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s455_motohawk_trigger1_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_data_read): '<S369>/motohawk_data_read' */
  BaseEngineController_LS_B.s369_motohawk_data_read = FuelLvl_NVM_DataStore();

  /* Sum: '<S369>/Sum1' */
  rtb_DataTypeConversion_gx = BaseEngineController_LS_B.s715_Merge -
    BaseEngineController_LS_B.s369_motohawk_data_read;

  /* Abs: '<S369>/Abs' */
  rtb_DataTypeConversion_gx = fabs(rtb_DataTypeConversion_gx);

  /* RelationalOperator: '<S369>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S369>/motohawk_calibration1'
   */
  rtb_LogicalOperator6_b = (rtb_DataTypeConversion_gx >=
    (FuelLevl_KeyUpDiff_DataStore()));

  /* RelationalOperator: '<S369>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S369>/motohawk_calibration10'
   */
  rtb_RelationalOperator_e5 = (BaseEngineController_LS_B.s441_Sum >=
    (FuelLevel_KeyUpDelay_DataStore()));

  /* Logic: '<S369>/Logical Operator' incorporates:
   *  Logic: '<S390>/Logical Operator'
   *  Logic: '<S390>/Logical Operator1'
   *  UnitDelay: '<S390>/Unit Delay'
   */
  rtb_LogicalOperator6_b = (rtb_LogicalOperator6_b && (rtb_RelationalOperator_e5
    && (!BaseEngineController_LS_DWork.s390_UnitDelay_DSTATE)));

  /* Switch: '<S369>/Switch' */
  if (rtb_LogicalOperator6_b) {
    rtb_DataTypeConversion_gx = BaseEngineController_LS_B.s715_Merge;
  } else {
    /* Switch: '<S369>/Switch1' */
    if (rtb_RelationalOperator_e5) {
      rtb_DataTypeConversion_gx = BaseEngineController_LS_B.s715_Merge;
    } else {
      rtb_DataTypeConversion_gx =
        BaseEngineController_LS_B.s369_motohawk_data_read;
    }

    /* End of Switch: '<S369>/Switch1' */
  }

  /* End of Switch: '<S369>/Switch' */

  /* UnitDelay: '<S389>/Initial Condition is True' */
  rtb_LogicalOperator1_br =
    BaseEngineController_LS_DWork.s389_InitialConditionisTrue_DSTATE;

  /* S-Function Block: <S369>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s369_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_oz = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S369>/Switch3' incorporates:
   *  Constant: '<S369>/Constant'
   */
  if (rtb_LogicalOperator1_br) {
    rtb_Switch_hp = 1.0;
  } else {
    /* Switch: '<S369>/Switch2' incorporates:
     *  MinMax: '<S369>/MinMax'
     *  Product: '<S369>/Product'
     *  S-Function (motohawk_sfun_calibration): '<S369>/motohawk_calibration2'
     */
    if (rtb_LogicalOperator6_b) {
      rtb_Switch_hp = (FuelLevel_FuelEevntAlpha_DataStore());
    } else {
      /* S-Function Block: <S391>/motohawk_prelookup_col */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (FuelLevel_FiltConstColIn_DataStore()) =
          BaseEngineController_LS_B.s426_Switch2;
        (FuelLevel_FiltConstColIdx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_LS_B.s426_Switch2,
           (FuelLevel_FiltConstColIdxArr_DataStore()), 7,
           (FuelLevel_FiltConstColIdx_DataStore()));
        rtb_motohawk_prelookup_col = (FuelLevel_FiltConstColIdx_DataStore());
      }

      /* S-Function Block: <S391>/motohawk_prelookup_row */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (FuelLevel_FiltConstRowIn_DataStore()) =
          BaseEngineController_LS_B.s441_Sum;
        (FuelLevel_FiltConstRowIdx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_LS_B.s441_Sum,
           (FuelLevel_FiltConstRowIdxArr_DataStore()), 7,
           (FuelLevel_FiltConstRowIdx_DataStore()));
        rtb_motohawk_prelookup_row = (FuelLevel_FiltConstRowIdx_DataStore());
      }

      /* S-Function Block: <S391>/motohawk_interpolation_2d */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_motohawk_interpolation_2d_gj = TableInterpolation2D_real_T
          (rtb_motohawk_prelookup_row, rtb_motohawk_prelookup_col, (real_T *)
           ((FuelLevel_FiltConstMap_DataStore())), 7, 7);
        (FuelLevel_FiltConst_DataStore()) = rtb_motohawk_interpolation_2d_gj;
      }

      rtb_Switch_hp = rtb_motohawk_delta_time_oz / ((rtb_motohawk_delta_time_oz >=
        rtb_motohawk_interpolation_2d_gj) || rtIsNaN
        (rtb_motohawk_interpolation_2d_gj) ? rtb_motohawk_delta_time_oz :
        rtb_motohawk_interpolation_2d_gj);
    }

    /* End of Switch: '<S369>/Switch2' */
  }

  /* End of Switch: '<S369>/Switch3' */

  /* Sum: '<S388>/Sum1' incorporates:
   *  Constant: '<S388>/Constant'
   *  Product: '<S388>/Product'
   *  Product: '<S388>/Product1'
   *  Sum: '<S388>/Sum'
   *  UnitDelay: '<S388>/Unit Delay'
   */
  BaseEngineController_LS_B.s388_Sum1 = (1.0 - rtb_Switch_hp) *
    BaseEngineController_LS_DWork.s388_UnitDelay_DSTATE +
    rtb_DataTypeConversion_gx * rtb_Switch_hp;

  /* S-Function (motohawk_sfun_send_canmsgs): '<S874>/Send CAN Messages' */
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
        if (BaseEngineController_LS_B.s388_Sum1 < 0.0000000000F) {
          tmp0 = (uint16_T)(0U);
        } else if (BaseEngineController_LS_B.s388_Sum1 > 99.9998565000F) {
          tmp0 = (uint16_T)(65535U);
        } else {
          tmp0 = (uint16_T)(BaseEngineController_LS_B.s388_Sum1 *
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

  /* S-Function (motohawk_sfun_send_canmsgs): '<S875>/Send CAN Messages' */
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
        if (BaseEngineController_LS_B.s627_Sum1 < 0.0000000000F) {
          tmp0 = (uint16_T)(0U);
        } else if (BaseEngineController_LS_B.s627_Sum1 > 25599.9370500000F) {
          tmp0 = (uint16_T)(65534U);
        } else {
          tmp0 = (uint16_T)(BaseEngineController_LS_B.s627_Sum1 * (2.5599672324F));
        }

        if (BaseEngineController_LS_B.s422_Switch2 < -50.0006912000F) {
          tmp1 = (int16_T)(-32768);
        } else if (BaseEngineController_LS_B.s422_Switch2 > 49.9991653000F) {
          tmp1 = (int16_T)(32767);
        } else {
          tmp1 = (int16_T)(BaseEngineController_LS_B.s422_Switch2 *
                           (655.3509404286F));
        }

        if (BaseEngineController_LS_B.s755_Merge < -128.0000000000F) {
          tmp2 = (int8_T)(-128);
        } else if (BaseEngineController_LS_B.s755_Merge > 127.0000000000F) {
          tmp2 = (int8_T)(127);
        } else {
          tmp2 = (int8_T)(BaseEngineController_LS_B.s755_Merge);
        }

        if (BaseEngineController_LS_B.s737_Merge < -128.0000000000F) {
          tmp3 = (int8_T)(-128);
        } else if (BaseEngineController_LS_B.s737_Merge > 127.0000000000F) {
          tmp3 = (int8_T)(127);
        } else {
          tmp3 = (int8_T)(BaseEngineController_LS_B.s737_Merge);
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

  /* Gain: '<S876>/Gain' */
  rtb_Gain = 1.60934 * BaseEngineController_LS_B.s426_Switch2;

  /* MultiPortSwitch: '<S419>/Multiport Switch' incorporates:
   *  Constant: '<S419>/Constant1'
   *  MinMax: '<S419>/MinMax'
   */
  if (BaseEngineController_LS_B.s581_Merge == FALSE) {
    /* Product: '<S419>/Product6' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S419>/motohawk_calibration5'
     *  S-Function (motohawk_sfun_calibration): '<S419>/motohawk_calibration6'
     */
    rtb_UnitDelay_cf = (Gear6Ratio_DataStore()) * (FDR_DataStore());

    /* Product: '<S419>/Product' incorporates:
     *  Constant: '<S419>/Constant'
     *  S-Function (motohawk_sfun_calibration): '<S419>/motohawk_calibration7'
     */
    rtb_UnitDelay_ju = (TireRadius_DataStore()) * 0.00595 *
      BaseEngineController_LS_B.s627_Sum1;

    /* Abs: '<S419>/Abs5' incorporates:
     *  Product: '<S419>/Product12'
     *  Sum: '<S419>/Sum5'
     */
    rtb_UnitDelay_cf = fabs(rtb_UnitDelay_ju / rtb_UnitDelay_cf -
      BaseEngineController_LS_B.s426_Switch2);

    /* Gain: '<S419>/Gain5' incorporates:
     *  RelationalOperator: '<S419>/M6'
     *  S-Function (motohawk_sfun_calibration): '<S419>/motohawk_calibration8'
     */
    rtb_Gain5 = (uint8_T)(rtb_UnitDelay_cf <= (GearMatchHyst_DataStore()) ? 192 :
                          0);

    /* Gain: '<S419>/Gain4' incorporates:
     *  Abs: '<S419>/Abs4'
     *  Product: '<S419>/Product11'
     *  Product: '<S419>/Product5'
     *  RelationalOperator: '<S419>/M5'
     *  S-Function (motohawk_sfun_calibration): '<S419>/motohawk_calibration4'
     *  S-Function (motohawk_sfun_calibration): '<S419>/motohawk_calibration6'
     *  S-Function (motohawk_sfun_calibration): '<S419>/motohawk_calibration8'
     *  Sum: '<S419>/Sum4'
     */
    rtb_Gain4 = (uint8_T)(fabs(rtb_UnitDelay_ju / ((Gear5Ratio_DataStore()) *
      (FDR_DataStore())) - BaseEngineController_LS_B.s426_Switch2) <=
                          (GearMatchHyst_DataStore()) ? 160 : 0);

    /* Gain: '<S419>/Gain3' incorporates:
     *  Abs: '<S419>/Abs3'
     *  Product: '<S419>/Product10'
     *  Product: '<S419>/Product4'
     *  RelationalOperator: '<S419>/M4'
     *  S-Function (motohawk_sfun_calibration): '<S419>/motohawk_calibration3'
     *  S-Function (motohawk_sfun_calibration): '<S419>/motohawk_calibration6'
     *  S-Function (motohawk_sfun_calibration): '<S419>/motohawk_calibration8'
     *  Sum: '<S419>/Sum3'
     */
    rtb_Gain3_m = (uint8_T)((fabs(rtb_UnitDelay_ju / ((Gear4Ratio_DataStore()) *
                               (FDR_DataStore())) -
      BaseEngineController_LS_B.s426_Switch2) <= (GearMatchHyst_DataStore())) <<
      7);

    /* Gain: '<S419>/Gain2' incorporates:
     *  Abs: '<S419>/Abs2'
     *  Product: '<S419>/Product3'
     *  Product: '<S419>/Product9'
     *  RelationalOperator: '<S419>/M3'
     *  S-Function (motohawk_sfun_calibration): '<S419>/motohawk_calibration2'
     *  S-Function (motohawk_sfun_calibration): '<S419>/motohawk_calibration6'
     *  S-Function (motohawk_sfun_calibration): '<S419>/motohawk_calibration8'
     *  Sum: '<S419>/Sum2'
     */
    rtb_Gain2_m = (uint8_T)(fabs(rtb_UnitDelay_ju / ((Gear3Ratio_DataStore()) *
                              (FDR_DataStore())) -
      BaseEngineController_LS_B.s426_Switch2) <= (GearMatchHyst_DataStore()) ?
      192 : 0);

    /* Gain: '<S419>/Gain1' incorporates:
     *  Abs: '<S419>/Abs1'
     *  Product: '<S419>/Product2'
     *  Product: '<S419>/Product8'
     *  RelationalOperator: '<S419>/M2'
     *  S-Function (motohawk_sfun_calibration): '<S419>/motohawk_calibration1'
     *  S-Function (motohawk_sfun_calibration): '<S419>/motohawk_calibration6'
     *  S-Function (motohawk_sfun_calibration): '<S419>/motohawk_calibration8'
     *  Sum: '<S419>/Sum1'
     */
    rtb_Gain1 = (uint8_T)((fabs(rtb_UnitDelay_ju / ((Gear2Ratio_DataStore()) *
      (FDR_DataStore())) - BaseEngineController_LS_B.s426_Switch2) <=
      (GearMatchHyst_DataStore())) << 7);

    /* MinMax: '<S419>/MinMax' incorporates:
     *  Abs: '<S419>/Abs'
     *  Gain: '<S419>/Gain'
     *  Product: '<S419>/Product1'
     *  Product: '<S419>/Product7'
     *  RelationalOperator: '<S419>/M1'
     *  S-Function (motohawk_sfun_calibration): '<S419>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S419>/motohawk_calibration6'
     *  S-Function (motohawk_sfun_calibration): '<S419>/motohawk_calibration8'
     *  Sum: '<S419>/Sum'
     */
    maxV = ((fabs(rtb_UnitDelay_ju / ((Gear1Ratio_DataStore()) * (FDR_DataStore()))
                  - BaseEngineController_LS_B.s426_Switch2) <=
             (GearMatchHyst_DataStore())) << 7) >> 2;
    i = rtb_Gain1 >> 1;
    maxV = (int32_T)((uint32_T)maxV >= (uint32_T)i ? (uint32_T)maxV : (uint32_T)
                     i);
    i = rtb_Gain2_m >> 1;
    maxV = (int32_T)((uint32_T)maxV >= (uint32_T)i ? (uint32_T)maxV : (uint32_T)
                     i);
    i = rtb_Gain3_m;
    maxV = (int32_T)((uint32_T)maxV >= (uint32_T)i ? (uint32_T)maxV : (uint32_T)
                     i);
    i = rtb_Gain4;
    maxV = (int32_T)((uint32_T)maxV >= (uint32_T)i ? (uint32_T)maxV : (uint32_T)
                     i);
    i = rtb_Gain5;
    BaseEngineController_LS_B.s419_MultiportSwitch = ldexp((real_T)((uint32_T)
      maxV >= (uint32_T)i ? (uint32_T)maxV : (uint32_T)i), -5);
  } else {
    BaseEngineController_LS_B.s419_MultiportSwitch = 0.0;
  }

  /* End of MultiPortSwitch: '<S419>/Multiport Switch' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S876>/Send CAN Messages' */
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
        if (rtb_Merge_as < 0.5000000000F) {
          tmp0 = (uint8_T)(0U);
        } else if (rtb_Merge_as > 1.4960937500F) {
          tmp0 = (uint8_T)(255U);
        } else {
          tmp0 = (uint8_T)((rtb_Merge_as - (0.5000000000F)) * (256.0000000000F));
        }

        if (rtb_Merge_gq < 0.5000000000F) {
          tmp1 = (uint8_T)(0U);
        } else if (rtb_Merge_gq > 1.4960937500F) {
          tmp1 = (uint8_T)(255U);
        } else {
          tmp1 = (uint8_T)((rtb_Merge_gq - (0.5000000000F)) * (256.0000000000F));
        }

        if (rtb_Gain < 0.0000000000F) {
          tmp2 = (uint16_T)(0U);
        } else if (rtb_Gain > 411.9857775000F) {
          tmp2 = (uint16_T)(65535U);
        } else {
          tmp2 = (uint16_T)(rtb_Gain * (159.0710252128F));
        }

        if (BaseEngineController_LS_B.s419_MultiportSwitch < 0.0000000000F) {
          tmp3 = (uint8_T)(0U);
        } else if (BaseEngineController_LS_B.s419_MultiportSwitch >
                   255.0000000000F) {
          tmp3 = (uint8_T)(255U);
        } else {
          tmp3 = (uint8_T)(BaseEngineController_LS_B.s419_MultiportSwitch);
        }

        if (BaseEngineController_LS_B.s135_SparkAdv < -17.0000000000F) {
          tmp4 = (uint8_T)(0U);
        } else if (BaseEngineController_LS_B.s135_SparkAdv > 72.6478000000F) {
          tmp4 = (uint8_T)(254U);
        } else {
          tmp4 = (uint8_T)((BaseEngineController_LS_B.s135_SparkAdv -
                            (-17.0000000000F)) * (2.8444646717F));
        }

        if (BaseEngineController_LS_B.s704_Merge < 0.0000000000F) {
          tmp5 = (uint16_T)(0U);
        } else if (BaseEngineController_LS_B.s704_Merge > 16.0888425000F) {
          tmp5 = (uint16_T)(65535U);
        } else {
          tmp5 = (uint16_T)(BaseEngineController_LS_B.s704_Merge *
                            (4073.3197556008F));
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

  /* S-Function (motohawk_sfun_data_read): '<S877>/motohawk_data_read' */
  rtb_motohawk_data_read_i4 = VEFin_DataStore();

  /* S-Function (motohawk_sfun_data_read): '<S877>/motohawk_data_read1' */
  rtb_Switch_hp = BaseEquivRatio_DataStore();

  /* Math: '<S877>/Math Function' incorporates:
   *  Saturate: '<S877>/Saturation'
   *
   * About '<S877>/Math Function':
   *  Operator: reciprocal
   */
  rtb_MathFunction = 1.0 / (rtb_Switch_hp >= 0.01 ? rtb_Switch_hp : 0.01);

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

  /* S-Function (motohawk_sfun_data_read): '<S877>/motohawk_data_read2' */
  rtb_motohawk_data_read2_l = O2CtrlMode_DataStore();

  /* S-Function (motohawk_sfun_fault_action): '<S877>/motohawk_fault_action'
   *
   * Regarding '<S877>/motohawk_fault_action':
     Get Fault Action Status: EngineProtectLED
   */
  {
    extern boolean_T GetFaultActionStatus(uint32_T action);
    rtb_motohawk_fault_action_o = GetFaultActionStatus(7);
  }

  /* S-Function (motohawk_sfun_fault_action): '<S877>/motohawk_fault_action1'
   *
   * Regarding '<S877>/motohawk_fault_action1':
     Get Fault Action Status: MIL_LED
   */
  {
    extern boolean_T GetFaultActionStatus(uint32_T action);
    rtb_motohawk_fault_action1_a = GetFaultActionStatus(10);
  }

  /* S-Function (motohawk_sfun_fault_status): '<S877>/motohawk_fault_status2'
   *
   * Regarding '<S877>/motohawk_fault_status2':
     Status : "Active"
   */
  {
    extern boolean_T IsFaultActive(uint32_T fault);
    rtb_motohawk_fault_status2_f2 = IsFaultActive(86);
  }

  /* S-Function (motohawk_sfun_fault_status): '<S877>/motohawk_fault_status1'
   *
   * Regarding '<S877>/motohawk_fault_status1':
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
  rtb_RelationalOperator6_h0 = !BaseEngineController_LS_B.s602_Merge;

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
  if (rtb_RelationalOperator6_h0) {
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
  if (rtb_RelationalOperator6_h0) {
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
  if (rtb_RelationalOperator6_h0) {
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

      /* Enable for Trigger_FGND_TDC1_EVENT_1084p0001 */
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
    /* Enable for Trigger_FGND_TDC1_EVENT_1084p0001 */
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
      /* Disable for Trigger_FGND_TDC1_EVENT_1084p0001 */
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

  /* Sum: '<S877>/    ' incorporates:
   *  Sum: '<S877>/      '
   */
  rtb_Switch_kj = rtb_AND1[0];
  for (i = 0; i < 7; i++) {
    rtb_Switch_kj += (uint32_T)rtb_AND1[1 + i];
  }

  /* End of Sum: '<S877>/    ' */

  /* RelationalOperator: '<S885>/Compare' incorporates:
   *  Constant: '<S885>/Constant'
   *  Sum: '<S877>/    '
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

  /* Sum: '<S877>/      ' incorporates:
   *  Sum: '<S877>/    '
   */
  rtb_Switch_kj = BaseEngineController_LS_B.s22_LogicalOperator2[0];
  for (i = 0; i < 7; i++) {
    rtb_Switch_kj += (uint32_T)BaseEngineController_LS_B.s22_LogicalOperator2[1
      + i];
  }

  /* End of Sum: '<S877>/      ' */

  /* RelationalOperator: '<S886>/Compare' incorporates:
   *  Constant: '<S886>/Constant'
   *  Sum: '<S877>/      '
   */
  rtb_Compare_d = (((uint8_T)rtb_Switch_kj >= 1));

  /* RelationalOperator: '<S887>/Compare' incorporates:
   *  Constant: '<S887>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S877>/motohawk_data_read3'
   */
  rtb_Compare_g = ((((uint8_T)EncoderState_DataStore()) >= 3));

  /* S-Function (motohawk_sfun_fault_status): '<S877>/motohawk_fault_status3'
   *
   * Regarding '<S877>/motohawk_fault_status3':
     Status : "Active"
   */
  {
    extern boolean_T IsFaultActive(uint32_T fault);
    rtb_motohawk_fault_status3_g = IsFaultActive(105);
  }

  /* S-Function (motohawk_sfun_fault_status): '<S877>/motohawk_fault_status4'
   *
   * Regarding '<S877>/motohawk_fault_status4':
     Status : "Active"
   */
  {
    extern boolean_T IsFaultActive(uint32_T fault);
    rtb_motohawk_fault_status4_gd3 = IsFaultActive(31);
  }

  /* S-Function Block: <S658>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s658_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_hp = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S658>/Product' incorporates:
   *  MinMax: '<S658>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S658>/motohawk_calibration'
   */
  rtb_Switch_hp /= (rtb_Switch_hp >= (FuelPresFilterConst_DataStore())) ||
    rtIsNaN((FuelPresFilterConst_DataStore())) ? rtb_Switch_hp :
    (FuelPresFilterConst_DataStore());

  /* Logic: '<S630>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S630>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S630>/motohawk_fault_status4'
   */
  rtb_RelationalOperator6_h0 = (IsFaultActive(60) || IsFaultActive(61));

  /* Logic: '<S630>/Logical Operator6' */
  rtb_LogicalOperator6_b = !rtb_RelationalOperator6_h0;

  /* Logic: '<S630>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S630>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S630>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_br = (IsFaultSuspected(60) || IsFaultSuspected(61));

  /* S-Function Block: <S454>/motohawk_ain2 Resource: FuelPresPin */
  {
    extern NativeError_S FuelPresPin_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    FuelPresPin_AnalogInput_Get(&BaseEngineController_LS_B.s454_motohawk_ain2,
      NULL);
  }

  /* DataTypeConversion: '<S630>/Data Type Conversion' */
  rtb_DataTypeConversion_gx = (real_T)
    BaseEngineController_LS_B.s454_motohawk_ain2;

  /* Product: '<S630>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S630>/motohawk_calibration4'
   */
  rtb_UnitDelay_cf = rtb_DataTypeConversion_gx * (FuelPresGain_DataStore());

  /* Sum: '<S630>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S630>/motohawk_calibration5'
   */
  BaseEngineController_LS_B.s630_Sum1 = rtb_UnitDelay_cf +
    (FuelPresOfst_DataStore());

  /* UnitDelay: '<S630>/Unit Delay1' */
  rtb_UnitDelay1_pd = BaseEngineController_LS_DWork.s630_UnitDelay1_DSTATE;

  /* If: '<S630>/If' incorporates:
   *  Logic: '<S630>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_b && rtb_LogicalOperator1_br) {
    /* Outputs for IfAction SubSystem: '<S630>/If Action Subsystem' incorporates:
     *  ActionPort: '<S659>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay1_pd, &rtb_Merge_b3f);

    /* End of Outputs for SubSystem: '<S630>/If Action Subsystem' */
  } else if (rtb_RelationalOperator6_h0) {
    /* Outputs for IfAction SubSystem: '<S630>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S660>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((FuelPresDfltValue_DataStore()),
      &rtb_Merge_b3f);

    /* End of Outputs for SubSystem: '<S630>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S630>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S661>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      (BaseEngineController_LS_B.s630_Sum1, &rtb_Merge_b3f);

    /* End of Outputs for SubSystem: '<S630>/If Action Subsystem2' */
  }

  /* End of If: '<S630>/If' */

  /* Sum: '<S663>/Sum1' incorporates:
   *  Constant: '<S663>/Constant'
   *  Product: '<S663>/Product'
   *  Product: '<S663>/Product1'
   *  Sum: '<S663>/Sum'
   *  UnitDelay: '<S663>/Unit Delay'
   */
  rtb_Sum1_c = (1.0 - rtb_Switch_hp) *
    BaseEngineController_LS_DWork.s663_UnitDelay_DSTATE + rtb_Merge_b3f *
    rtb_Switch_hp;

  /* If: '<S662>/If' incorporates:
   *  Inport: '<S664>/In1'
   *  Inport: '<S665>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S662>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S662>/override_enable'
   */
  if ((FuelPres_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S662>/NewValue' incorporates:
     *  ActionPort: '<S664>/Action Port'
     */
    BaseEngineController_LS_B.s662_Merge = (FuelPres_new_DataStore());

    /* End of Outputs for SubSystem: '<S662>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S662>/OldValue' incorporates:
     *  ActionPort: '<S665>/Action Port'
     */
    BaseEngineController_LS_B.s662_Merge = rtb_Sum1_c;

    /* End of Outputs for SubSystem: '<S662>/OldValue' */
  }

  /* End of If: '<S662>/If' */

  /* S-Function Block: <S684>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s684_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_hp = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S684>/Product' incorporates:
   *  MinMax: '<S684>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S684>/motohawk_calibration'
   */
  rtb_Switch_hp /= (rtb_Switch_hp >= (OilPresFilterConst_DataStore())) ||
    rtIsNaN((OilPresFilterConst_DataStore())) ? rtb_Switch_hp :
    (OilPresFilterConst_DataStore());

  /* Logic: '<S634>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S634>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S634>/motohawk_fault_status4'
   */
  rtb_RelationalOperator6_h0 = (IsFaultActive(101) || IsFaultActive(102));

  /* Logic: '<S634>/Logical Operator6' */
  rtb_LogicalOperator6_b = !rtb_RelationalOperator6_h0;

  /* Logic: '<S634>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S634>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S634>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_br = (IsFaultSuspected(101) || IsFaultSuspected(102));

  /* S-Function Block: <S454>/motohawk_ain1 Resource: OilPresPin */
  {
    extern NativeError_S OilPresPin_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    OilPresPin_AnalogInput_Get(&BaseEngineController_LS_B.s454_motohawk_ain1,
      NULL);
  }

  /* DataTypeConversion: '<S634>/Data Type Conversion' */
  rtb_Product_oj = (real_T)BaseEngineController_LS_B.s454_motohawk_ain1;

  /* Product: '<S634>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S634>/motohawk_calibration4'
   */
  rtb_UnitDelay_cf = rtb_Product_oj * (OilPresGain_DataStore());

  /* Sum: '<S634>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S634>/motohawk_calibration5'
   */
  BaseEngineController_LS_B.s634_Sum1 = rtb_UnitDelay_cf +
    (OilPresOfst_DataStore());

  /* UnitDelay: '<S634>/Unit Delay1' */
  rtb_UnitDelay1_aa = BaseEngineController_LS_DWork.s634_UnitDelay1_DSTATE;

  /* If: '<S634>/If' incorporates:
   *  Logic: '<S634>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_b && rtb_LogicalOperator1_br) {
    /* Outputs for IfAction SubSystem: '<S634>/If Action Subsystem' incorporates:
     *  ActionPort: '<S685>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay1_aa, &rtb_Merge_ol);

    /* End of Outputs for SubSystem: '<S634>/If Action Subsystem' */
  } else if (rtb_RelationalOperator6_h0) {
    /* Outputs for IfAction SubSystem: '<S634>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S686>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((OilPresDfltValue_DataStore()),
      &rtb_Merge_ol);

    /* End of Outputs for SubSystem: '<S634>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S634>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S687>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      (BaseEngineController_LS_B.s634_Sum1, &rtb_Merge_ol);

    /* End of Outputs for SubSystem: '<S634>/If Action Subsystem2' */
  }

  /* End of If: '<S634>/If' */

  /* Sum: '<S689>/Sum1' incorporates:
   *  Constant: '<S689>/Constant'
   *  Product: '<S689>/Product'
   *  Product: '<S689>/Product1'
   *  Sum: '<S689>/Sum'
   *  UnitDelay: '<S689>/Unit Delay'
   */
  rtb_Sum1_o = (1.0 - rtb_Switch_hp) *
    BaseEngineController_LS_DWork.s689_UnitDelay_DSTATE + rtb_Merge_ol *
    rtb_Switch_hp;

  /* If: '<S688>/If' incorporates:
   *  Inport: '<S690>/In1'
   *  Inport: '<S691>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S688>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S688>/override_enable'
   */
  if ((OilPres_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S688>/NewValue' incorporates:
     *  ActionPort: '<S690>/Action Port'
     */
    BaseEngineController_LS_B.s688_Merge = (OilPres_new_DataStore());

    /* End of Outputs for SubSystem: '<S688>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S688>/OldValue' incorporates:
     *  ActionPort: '<S691>/Action Port'
     */
    BaseEngineController_LS_B.s688_Merge = rtb_Sum1_o;

    /* End of Outputs for SubSystem: '<S688>/OldValue' */
  }

  /* End of If: '<S688>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S877>/Send CAN Messages' */
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
        if (BaseEngineController_LS_B.s678_Merge < 0.0000000000F) {
          tmp0 = (uint16_T)(0U);
        } else if (BaseEngineController_LS_B.s678_Merge > 6553.5000000000F) {
          tmp0 = (uint16_T)(65535U);
        } else {
          tmp0 = (uint16_T)(BaseEngineController_LS_B.s678_Merge *
                            (10.0000000000F));
        }

        if (rtb_motohawk_data_read_i4 < 0.0000000000F) {
          tmp1 = (uint8_T)(0U);
        } else if (rtb_motohawk_data_read_i4 > 255.0000000000F) {
          tmp1 = (uint8_T)(255U);
        } else {
          tmp1 = (uint8_T)(rtb_motohawk_data_read_i4);
        }

        if (BaseEngineController_LS_B.s662_Merge < 0.0000000000F) {
          tmp2 = (uint8_T)(0U);
        } else if (BaseEngineController_LS_B.s662_Merge > 10.2000000000F) {
          tmp2 = (uint8_T)(255U);
        } else {
          tmp2 = (uint8_T)(BaseEngineController_LS_B.s662_Merge *
                           (25.0000000000F));
        }

        if (BaseEngineController_LS_B.s688_Merge < 0.0000000000F) {
          tmp3 = (uint8_T)(0U);
        } else if (BaseEngineController_LS_B.s688_Merge > 10.2000000000F) {
          tmp3 = (uint8_T)(255U);
        } else {
          tmp3 = (uint8_T)(BaseEngineController_LS_B.s688_Merge *
                           (25.0000000000F));
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

  /* Product: '<S878>/Product' incorporates:
   *  Constant: '<S878>/Constant1'
   *  Saturate: '<S878>/Saturation'
   */
  rtb_Product_hd = BaseEngineController_LS_B.s377_MultiportSwitch * 60.0 /
    (BaseEngineController_LS_B.s627_Sum1 >= 0.01 ?
     BaseEngineController_LS_B.s627_Sum1 : 0.01);

  /* S-Function (motohawk_sfun_send_canmsgs): '<S878>/Send CAN Messages' */
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
        if (BaseEngineController_LS_B.s377_MultiportSwitch < 0.0000000000F) {
          tmp1 = (uint16_T)(0U);
        } else if (BaseEngineController_LS_B.s377_MultiportSwitch >
                   3276.7500000000F) {
          tmp1 = (uint16_T)(65535U);
        } else {
          tmp1 = (uint16_T)(BaseEngineController_LS_B.s377_MultiportSwitch *
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
        tmp5 = (uint8_T)(BaseEngineController_LS_B.s581_Merge != 0);
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

  /* S-Function (motohawk_sfun_data_read): '<S879>/motohawk_data_read2' incorporates:
   *  Constant: '<S879>/Constant5'
   */
  rtb_motohawk_data_read2_m = InjMPW_DataStore()[(uint32_T)1.0];

  /* S-Function (motohawk_sfun_data_read): '<S879>/motohawk_data_read1' incorporates:
   *  Constant: '<S879>/Constant4'
   */
  rtb_motohawk_data_read1_ka = InjDC_DataStore()[(uint32_T)1.0];

  /* S-Function (motohawk_sfun_send_canmsgs): '<S879>/Send CAN Messages' */
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

  /* S-Function (motohawk_sfun_data_read): '<S880>/motohawk_data_read' */
  rtb_motohawk_data_read_bv = BARO_DataStore();

  /* S-Function (motohawk_sfun_send_canmsgs): '<S880>/Send CAN Messages' */
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

        if (BaseEngineController_LS_B.s649_Merge < 0.0000000000F) {
          tmp4 = (uint8_T)(0U);
        } else if (BaseEngineController_LS_B.s649_Merge > 100.0000350000F) {
          tmp4 = (uint8_T)(255U);
        } else {
          tmp4 = (uint8_T)(BaseEngineController_LS_B.s649_Merge * (2.5499991075F));
        }

        if (BaseEngineController_LS_B.s414_CollectAverage.s379_Product <
            -50.0000000000F) {
          tmp5 = (uint8_T)(0U);
        } else if (BaseEngineController_LS_B.s414_CollectAverage.s379_Product >
                   205.0000000000F) {
          tmp5 = (uint8_T)(255U);
        } else {
          tmp5 = (uint8_T)
            (BaseEngineController_LS_B.s414_CollectAverage.s379_Product -
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

  /* S-Function (motohawk_sfun_data_read): '<S883>/motohawk_data_read' */
  rtb_motohawk_data_read_ki = BoostControlTarget_DataStore();

  /* S-Function (motohawk_sfun_data_read): '<S883>/motohawk_data_read1' */
  rtb_motohawk_data_read1_bz = BoostControlDutyCycleFF_DataStore();

  /* S-Function (motohawk_sfun_data_read): '<S883>/motohawk_data_read2' */
  rtb_motohawk_data_read2_h = BoostControlPID_DataStore();

  /* S-Function (motohawk_sfun_send_canmsgs): '<S883>/Send CAN Messages' */
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

        if (BaseEngineController_LS_B.s728_Merge < -50.0000000000F) {
          tmp4 = (uint8_T)(0U);
        } else if (BaseEngineController_LS_B.s728_Merge > 205.0000000000F) {
          tmp4 = (uint8_T)(255U);
        } else {
          tmp4 = (uint8_T)(BaseEngineController_LS_B.s728_Merge -
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

  /* S-Function (motohawk_sfun_fault_status): '<S884>/motohawk_fault_status9'
   *
   * Regarding '<S884>/motohawk_fault_status9':
     Status : "Active"
   */
  {
    extern boolean_T IsFaultActive(uint32_T fault);
    rtb_motohawk_fault_status9 = IsFaultActive(20);
  }

  /* Logic: '<S884>/Logical Operator3' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S884>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S884>/motohawk_fault_status10'
   */
  rtb_LogicalOperator3_m = ((IsFaultActive(5) || IsFaultActive(4)));

  /* Logic: '<S884>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S884>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S884>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_d1 = ((IsFaultActive(13) || IsFaultActive(12)));

  /* Logic: '<S884>/Logical Operator2' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S884>/motohawk_fault_status5'
   *  S-Function (motohawk_sfun_fault_status): '<S884>/motohawk_fault_status6'
   */
  rtb_LogicalOperator2_p1 = ((IsFaultActive(52) || IsFaultActive(53)));

  /* Logic: '<S884>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S884>/motohawk_fault_status4'
   *  S-Function (motohawk_sfun_fault_status): '<S884>/motohawk_fault_status7'
   */
  rtb_LogicalOperator4_c = ((IsFaultActive(114) || IsFaultActive(113)));

  /* Logic: '<S884>/Logical Operator5' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S884>/motohawk_fault_status11'
   *  S-Function (motohawk_sfun_fault_status): '<S884>/motohawk_fault_status8'
   */
  rtb_LogicalOperator5_g = ((IsFaultActive(120) || IsFaultActive(119)));

  /* S-Function (motohawk_sfun_data_read): '<S884>/motohawk_data_read1' */
  rtb_motohawk_data_read1_pg = ETB_Curr_Flt_DataStore();

  /* S-Function (motohawk_sfun_fault_status): '<S884>/motohawk_fault_status12'
   *
   * Regarding '<S884>/motohawk_fault_status12':
     Status : "Active"
   */
  {
    extern boolean_T IsFaultActive(uint32_T fault);
    rtb_motohawk_fault_status12 = IsFaultActive(121);
  }

  /* S-Function (motohawk_sfun_send_canmsgs): '<S884>/Send CAN Messages' */
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
        if (BaseEngineController_LS_B.s415_Switch1 < 0.0000000000F) {
          tmp0 = (uint8_T)(0U);
        } else if (BaseEngineController_LS_B.s415_Switch1 > 100.0000350000F) {
          tmp0 = (uint8_T)(255U);
        } else {
          tmp0 = (uint8_T)(BaseEngineController_LS_B.s415_Switch1 *
                           (2.5499991075F));
        }

        if (BaseEngineController_LS_B.s430_Sum2 < 0.0000000000F) {
          tmp1 = (uint8_T)(0U);
        } else if (BaseEngineController_LS_B.s430_Sum2 > 100.0000350000F) {
          tmp1 = (uint8_T)(255U);
        } else {
          tmp1 = (uint8_T)(BaseEngineController_LS_B.s430_Sum2 * (2.5499991075F));
        }

        if (BaseEngineController_LS_B.s840_Merge < 0.0000000000F) {
          tmp2 = (uint8_T)(0U);
        } else if (BaseEngineController_LS_B.s840_Merge > 100.0000350000F) {
          tmp2 = (uint8_T)(255U);
        } else {
          tmp2 = (uint8_T)(BaseEngineController_LS_B.s840_Merge * (2.5499991075F));
        }

        if (BaseEngineController_LS_B.s857_Merge < 0.0000000000F) {
          tmp3 = (uint8_T)(0U);
        } else if (BaseEngineController_LS_B.s857_Merge > 100.0000350000F) {
          tmp3 = (uint8_T)(255U);
        } else {
          tmp3 = (uint8_T)(BaseEngineController_LS_B.s857_Merge * (2.5499991075F));
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

  /* S-Function (motohawk_sfun_data_read): '<S881>/motohawk_data_read' */
  rtb_motohawk_data_read_l = BaseRevLimit_DataStore();

  /* S-Function (motohawk_sfun_data_read): '<S881>/motohawk_data_read1' */
  rtb_motohawk_data_read1_b3 = TwoStepRevLimit_DataStore();

  /* Logic: '<S881>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S881>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S881>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S881>/motohawk_fault_status3'
   *  S-Function (motohawk_sfun_fault_status): '<S881>/motohawk_fault_status4'
   */
  rtb_LogicalOperator_bi = ((IsFaultActive(114) || IsFaultActive(113) ||
    IsFaultActive(120) || IsFaultActive(119)));

  /* Logic: '<S881>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S881>/motohawk_fault_status5'
   *  S-Function (motohawk_sfun_fault_status): '<S881>/motohawk_fault_status7'
   */
  rtb_LogicalOperator1_jx = ((IsFaultActive(33) || IsFaultActive(32)));

  /* Logic: '<S881>/Logical Operator2' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S881>/motohawk_fault_status6'
   *  S-Function (motohawk_sfun_fault_status): '<S881>/motohawk_fault_status8'
   */
  rtb_LogicalOperator2_ps = ((IsFaultActive(61) || IsFaultActive(60)));

  /* Logic: '<S881>/Logical Operator3' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S881>/motohawk_fault_status10'
   *  S-Function (motohawk_sfun_fault_status): '<S881>/motohawk_fault_status9'
   */
  rtb_LogicalOperator3_n = ((IsFaultActive(102) || IsFaultActive(101)));

  /* Logic: '<S881>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S881>/motohawk_fault_status11'
   *  S-Function (motohawk_sfun_fault_status): '<S881>/motohawk_fault_status12'
   */
  rtb_LogicalOperator4_n = ((IsFaultActive(90) || IsFaultActive(89)));

  /* Logic: '<S881>/Logical Operator5' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S881>/motohawk_fault_status13'
   *  S-Function (motohawk_sfun_fault_status): '<S881>/motohawk_fault_status14'
   */
  rtb_LogicalOperator5_cx = ((IsFaultActive(73) || IsFaultActive(72)));

  /* S-Function (motohawk_sfun_send_canmsgs): '<S881>/Send CAN Messages' */
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
        if (rtb_motohawk_data_read_l < 0.0000000000F) {
          tmp1 = (uint16_T)(0U);
        } else if (rtb_motohawk_data_read_l > 25599.9370500000F) {
          tmp1 = (uint16_T)(65534U);
        } else {
          tmp1 = (uint16_T)(rtb_motohawk_data_read_l * (2.5599672324F));
        }

        if (rtb_motohawk_data_read_l < 0.0000000000F) {
          tmp2 = (uint16_T)(0U);
        } else if (rtb_motohawk_data_read_l > 25599.9370500000F) {
          tmp2 = (uint16_T)(65534U);
        } else {
          tmp2 = (uint16_T)(rtb_motohawk_data_read_l * (2.5599672324F));
        }

        if (rtb_motohawk_data_read1_b3 < 0.0000000000F) {
          tmp3 = (uint8_T)(0U);
        } else if (rtb_motohawk_data_read1_b3 > 25500.0000000000F) {
          tmp3 = (uint8_T)(255U);
        } else {
          tmp3 = (uint8_T)(rtb_motohawk_data_read1_b3 / (100.0000000000F));
        }

        if (rtb_motohawk_data_read1_b3 < 0.0000000000F) {
          tmp4 = (uint8_T)(0U);
        } else if (rtb_motohawk_data_read1_b3 > 25500.0000000000F) {
          tmp4 = (uint8_T)(255U);
        } else {
          tmp4 = (uint8_T)(rtb_motohawk_data_read1_b3 / (100.0000000000F));
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

  /* S-Function (motohawk_sfun_send_canmsgs): '<S882>/Send CAN Messages' */
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
  /* Enable for Trigger_FGND_5XRTI_PERIODIC_1412p0001 */
  if (BaseEngineController_LS_DWork.s14_motohawk_trigger1_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s14_motohawk_trigger1_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S14>/motohawk_trigger' */
  /* Enable for Trigger_FGND_5XRTI_PERIODIC_1411p0001 */
  if (BaseEngineController_LS_DWork.s14_motohawk_trigger_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s14_motohawk_trigger_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S13>/motohawk_trigger' */
  /* Enable for Trigger_FGND_5XRTI_PERIODIC_9680p0004 */
  if (BaseEngineController_LS_DWork.s13_motohawk_trigger_DWORK1 == 0) {
    /* Enable for function-call system: '<S13>/Coil Control' */

    /* Enable for Atomic SubSystem: '<S888>/EST Enable TDC Counter' */

    /* Level2 S-Function Block: '<S893>/motohawk_trigger1' (motohawk_sfun_trigger) */

    /* Enable for Trigger_FGND_TDC_EVENT_9152p0001 */
    BaseEngineController_LS_DWork.s893_motohawk_trigger1_DWORK1 = 1;

    /* End of Enable for SubSystem: '<S888>/EST Enable TDC Counter' */
    BaseEngineController_LS_DWork.s13_motohawk_trigger_DWORK1 = 1;
  }

  /* DataTypeConversion: '<S864>/Data Type Conversion' */
  rtb_LogicalOperator6_b = (BaseEngineController_LS_B.s135_FAN1 != 0.0);

  /* If: '<S920>/If' incorporates:
   *  Inport: '<S921>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S920>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S920>/override_enable'
   */
  if ((FAN1_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S920>/NewValue' incorporates:
     *  ActionPort: '<S921>/Action Port'
     */
    rtb_LogicalOperator6_b = (FAN1_new_DataStore());

    /* End of Outputs for SubSystem: '<S920>/NewValue' */
  } else {
  }

  /* End of If: '<S920>/If' */

  /* Logic: '<S916>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S916>/0 = No Inversion 1 = Inversion'
   */
  BaseEngineController_LS_B.s916_LogicalOperator = rtb_LogicalOperator6_b ^
    (FAN1_Polarity_DataStore());

  /* If: '<S927>/If' incorporates:
   *  Inport: '<S928>/In1'
   *  Inport: '<S929>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S927>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S927>/override_enable'
   */
  if ((FAN1_PWM_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S927>/NewValue' incorporates:
     *  ActionPort: '<S928>/Action Port'
     */
    rtb_UnitDelay_cf = (FAN1_PWM_new_DataStore());

    /* End of Outputs for SubSystem: '<S927>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S927>/OldValue' incorporates:
     *  ActionPort: '<S929>/Action Port'
     */
    rtb_UnitDelay_cf = BaseEngineController_LS_B.s135_FAN1;

    /* End of Outputs for SubSystem: '<S927>/OldValue' */
  }

  /* End of If: '<S927>/If' */

  /* Product: '<S918>/Product' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S918>/motohawk_calibration'
   */
  rtb_UnitDelay_cf *= (FAN1_PWMGain_DataStore());

  /* Sum: '<S918>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S918>/motohawk_calibration1'
   */
  rtb_Switch_hp = rtb_UnitDelay_cf + (FAN1_PWMOffset_DataStore());

  /* MinMax: '<S926>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S918>/motohawk_calibration2'
   */
  rtb_Switch_hp = (rtb_Switch_hp >= (FAN1_PWMMinLimit_DataStore())) || rtIsNaN
    ((FAN1_PWMMinLimit_DataStore())) ? rtb_Switch_hp :
    (FAN1_PWMMinLimit_DataStore());

  /* MinMax: '<S926>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S918>/motohawk_calibration3'
   */
  BaseEngineController_LS_B.s926_MinMax1 = (rtb_Switch_hp <=
    (FAN1_PWMMaxLimit_DataStore())) || rtIsNaN((FAN1_PWMMaxLimit_DataStore())) ?
    rtb_Switch_hp : (FAN1_PWMMaxLimit_DataStore());

  /* Gain: '<S918>/Convert to integer 14-bit PWM resolution' */
  rtb_Switch_hp = 40.95 * BaseEngineController_LS_B.s926_MinMax1;

  /* DataTypeConversion: '<S918>/Data Type Conversion3' */
  if (rtb_Switch_hp < 32768.0) {
    if (rtb_Switch_hp >= -32768.0) {
      rtb_DataTypeConversion3_c = (int16_T)rtb_Switch_hp;
    } else {
      rtb_DataTypeConversion3_c = MIN_int16_T;
    }
  } else {
    rtb_DataTypeConversion3_c = MAX_int16_T;
  }

  /* End of DataTypeConversion: '<S918>/Data Type Conversion3' */
  /* Gain: '<S918>/Convert to integer 0.01Hz resolution' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S918>/motohawk_calibration4'
   */
  rtb_Switch_hp = 100.0 * (FAN1_PWMFrequency_DataStore());

  /* DataTypeConversion: '<S918>/Data Type Conversion2' */
  if (rtb_Switch_hp < 4.294967296E+9) {
    if (rtb_Switch_hp >= 0.0) {
      rtb_DataTypeConversion2_j = (uint32_T)rtb_Switch_hp;
    } else {
      rtb_DataTypeConversion2_j = 0U;
    }
  } else {
    rtb_DataTypeConversion2_j = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S918>/Data Type Conversion2' */

  /* DataTypeConversion: '<S864>/Data Type Conversion1' */
  rtb_LogicalOperator6_b = (BaseEngineController_LS_B.s135_FAN2 != 0.0);

  /* If: '<S923>/If' incorporates:
   *  Inport: '<S924>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S923>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S923>/override_enable'
   */
  if ((FAN2_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S923>/NewValue' incorporates:
     *  ActionPort: '<S924>/Action Port'
     */
    rtb_LogicalOperator6_b = (FAN2_new_DataStore());

    /* End of Outputs for SubSystem: '<S923>/NewValue' */
  } else {
  }

  /* End of If: '<S923>/If' */

  /* Logic: '<S917>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S917>/0 = No Inversion 1 = Inversion'
   */
  BaseEngineController_LS_B.s917_LogicalOperator = rtb_LogicalOperator6_b ^
    (FAN2_Polarity_DataStore());

  /* If: '<S931>/If' incorporates:
   *  Inport: '<S932>/In1'
   *  Inport: '<S933>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S931>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S931>/override_enable'
   */
  if ((FAN2_PWM_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S931>/NewValue' incorporates:
     *  ActionPort: '<S932>/Action Port'
     */
    rtb_UnitDelay_cf = (FAN2_PWM_new_DataStore());

    /* End of Outputs for SubSystem: '<S931>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S931>/OldValue' incorporates:
     *  ActionPort: '<S933>/Action Port'
     */
    rtb_UnitDelay_cf = BaseEngineController_LS_B.s135_FAN2;

    /* End of Outputs for SubSystem: '<S931>/OldValue' */
  }

  /* End of If: '<S931>/If' */

  /* Product: '<S919>/Product' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S919>/motohawk_calibration'
   */
  rtb_UnitDelay_cf *= (FAN2_PWMGain_DataStore());

  /* Sum: '<S919>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S919>/motohawk_calibration1'
   */
  rtb_Switch_hp = rtb_UnitDelay_cf + (FAN2_PWMOffset_DataStore());

  /* MinMax: '<S930>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S919>/motohawk_calibration2'
   */
  rtb_Switch_hp = (rtb_Switch_hp >= (FAN2_PWMMinLimit_DataStore())) || rtIsNaN
    ((FAN2_PWMMinLimit_DataStore())) ? rtb_Switch_hp :
    (FAN2_PWMMinLimit_DataStore());

  /* MinMax: '<S930>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S919>/motohawk_calibration3'
   */
  BaseEngineController_LS_B.s930_MinMax1 = (rtb_Switch_hp <=
    (FAN2_PWMMaxLimit_DataStore())) || rtIsNaN((FAN2_PWMMaxLimit_DataStore())) ?
    rtb_Switch_hp : (FAN2_PWMMaxLimit_DataStore());

  /* Gain: '<S919>/Convert to integer 14-bit PWM resolution' */
  rtb_Switch_hp = 40.95 * BaseEngineController_LS_B.s930_MinMax1;

  /* DataTypeConversion: '<S919>/Data Type Conversion3' */
  if (rtb_Switch_hp < 32768.0) {
    if (rtb_Switch_hp >= -32768.0) {
      rtb_DataTypeConversion3_k = (int16_T)rtb_Switch_hp;
    } else {
      rtb_DataTypeConversion3_k = MIN_int16_T;
    }
  } else {
    rtb_DataTypeConversion3_k = MAX_int16_T;
  }

  /* End of DataTypeConversion: '<S919>/Data Type Conversion3' */
  /* Gain: '<S919>/Convert to integer 0.01Hz resolution' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S919>/motohawk_calibration4'
   */
  rtb_Switch_hp = 100.0 * (FAN2_PWMFrequency_DataStore());

  /* DataTypeConversion: '<S919>/Data Type Conversion2' */
  if (rtb_Switch_hp < 4.294967296E+9) {
    if (rtb_Switch_hp >= 0.0) {
      rtb_DataTypeConversion2_e = (uint32_T)rtb_Switch_hp;
    } else {
      rtb_DataTypeConversion2_e = 0U;
    }
  } else {
    rtb_DataTypeConversion2_e = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S919>/Data Type Conversion2' */

  /* S-Function Block: <S452>/motohawk_din Resource: ESTOPPin */
  {
    extern NativeError_S ESTOPPin_DigitalInput_Get(boolean_T *out, uint16_T
      *status);
    ESTOPPin_DigitalInput_Get(&BaseEngineController_LS_B.s452_motohawk_din, NULL);
  }

  /* Logic: '<S572>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S572>/0 = No Inversion 1 = Inversion'
   */
  rtb_LogicalOperator6_b = BaseEngineController_LS_B.s452_motohawk_din ^
    (ESTOPPolarity_DataStore());

  /* If: '<S584>/If' incorporates:
   *  Inport: '<S585>/In1'
   *  Inport: '<S586>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S584>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S584>/override_enable'
   */
  if ((ESTOP_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S584>/NewValue' incorporates:
     *  ActionPort: '<S585>/Action Port'
     */
    BaseEngineController_LS_B.s584_Merge = (ESTOP_new_DataStore());

    /* End of Outputs for SubSystem: '<S584>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S584>/OldValue' incorporates:
     *  ActionPort: '<S586>/Action Port'
     */
    BaseEngineController_LS_B.s584_Merge = rtb_LogicalOperator6_b;

    /* End of Outputs for SubSystem: '<S584>/OldValue' */
  }

  /* End of If: '<S584>/If' */

  /* Logic: '<S13>/Logical Operator5' incorporates:
   *  Logic: '<S13>/Logical Operator4'
   */
  rtb_LogicalOperator6_b = (rtb_RelationalOperator5_fz &&
    (!BaseEngineController_LS_B.s584_Merge));

  /* If: '<S935>/If' incorporates:
   *  Inport: '<S936>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S935>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S935>/override_enable'
   */
  if ((FUELP_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S935>/NewValue' incorporates:
     *  ActionPort: '<S936>/Action Port'
     */
    rtb_LogicalOperator6_b = (FUELP_new_DataStore());

    /* End of Outputs for SubSystem: '<S935>/NewValue' */
  } else {
  }

  /* End of If: '<S935>/If' */

  /* Logic: '<S934>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S934>/0 = No Inversion 1 = Inversion'
   */
  BaseEngineController_LS_B.s934_LogicalOperator = rtb_LogicalOperator6_b ^
    (FUELP_Polarity_DataStore());

  /* S-Function Block: <S938>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s938_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_oe = ((real_T) delta) * 0.000001;
  }

  /* S-Function Block: <S445>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s445_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_ds = ((real_T) delta) * 0.000001;
  }

  /* RelationalOperator: '<S444>/RelOp' incorporates:
   *  Constant: '<S444>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S425>/motohawk_data_read'
   */
  rtb_LogicalOperator6_b = (((uint8_T)EngineState_DataStore()) == 1);

  /* S-Function Block: <S425>/motohawk_ain_read Resource: ECUP */
  {
    extern NativeError_S ECUP_AnalogInput_Get(uint16_T *adc, uint16_T *status);
    ECUP_AnalogInput_Get(&rtb_motohawk_ain_read_o, NULL);
  }

  /* Switch: '<S445>/Switch' incorporates:
   *  Constant: '<S425>/Constant1'
   *  Constant: '<S445>/Constant'
   *  Logic: '<S425>/Logical Operator'
   *  RelationalOperator: '<S425>/Relational Operator'
   *  S-Function (motohawk_sfun_ain_read): '<S425>/motohawk_ain_read'
   *  S-Function (motohawk_sfun_data_read): '<S445>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S445>/motohawk_delta_time'
   *  Sum: '<S445>/Sum'
   */
  if (rtb_LogicalOperator6_b && (rtb_motohawk_ain_read_o > 150)) {
    BaseEngineController_LS_B.s445_Switch = rtb_motohawk_delta_time_ds +
      TimeSinceStallTimer_DataStore();
  } else {
    BaseEngineController_LS_B.s445_Switch = 0.0;
  }

  /* End of Switch: '<S445>/Switch' */
  /* RelationalOperator: '<S863>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S863>/motohawk_calibration3'
   */
  rtb_RelationalOperator3_bp = (BaseEngineController_LS_B.s445_Switch >
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
    rtb_LogicalOperator1_br = !ShutDownTasksComplete_DataStore();

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
      rtb_LogicalOperator1_br && rtb_AboveHiTarget));

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
    rtb_UnitDelay_cf = BaseEngineController_LS_DWork.s20_UnitDelay_DSTATE;

    /* RelationalOperator: '<S20>/Relational Operator5' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S20>/motohawk_calibration4'
     */
    BaseEngineController_LS_B.s20_RelationalOperator5 = ((rtb_UnitDelay_cf <
      (ETC_ShutdownLoAdaptError_DataStore())));

    /* RelationalOperator: '<S20>/Relational Operator2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S20>/motohawk_calibration5'
     */
    BaseEngineController_LS_B.s20_RelationalOperator2 =
      ((BaseEngineController_LS_B.s422_Switch2 >
        (ETC_SpringTestHiThresh_DataStore())));

    /* RelationalOperator: '<S20>/Relational Operator3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S20>/motohawk_calibration6'
     */
    BaseEngineController_LS_B.s20_RelationalOperator3 =
      ((BaseEngineController_LS_B.s422_Switch2 <
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
      rtb_DataTypeConversion_m = rtb_motohawk_delta_time_mz +
        ETC_Tune_Timer_DataStore();
    } else {
      rtb_DataTypeConversion_m = 0.0;
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
      rtb_UnitDelay_ju = (ETCReq_new_DataStore());

      /* End of Outputs for SubSystem: '<S57>/NewValue' */
    } else {
      /* Outputs for IfAction SubSystem: '<S57>/OldValue' incorporates:
       *  ActionPort: '<S59>/Action Port'
       */
      rtb_UnitDelay_ju = BaseEngineController_LS_B.s135_Throttle;

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
    rtb_UnitDelay_cf = BaseEngineController_LS_DWork.s55_UnitDelay_DSTATE;

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
    rtb_Product5_j = (rtb_Product5_o <= 100.0 ? rtb_Product5_o : 100.0) *
      rtb_motohawk_delta_time_jc + rtb_UnitDelay_cf;

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
          (ETCTuneFreq_DataStore()) * rtb_DataTypeConversion_m) *
          (ETCTuneAmp_DataStore()) + (ETCTuneAmp_DataStore())) +
          (ETCTuneOffset_DataStore());
      } else {
        BaseEngineController_LS_B.s31_MultiportSwitch = rtb_UnitDelay_ju;
      }

      /* End of Switch: '<S54>/Switch' */
      break;

     case 1:
      BaseEngineController_LS_B.s31_MultiportSwitch = rtb_Product5_j;
      break;

     default:
      BaseEngineController_LS_B.s31_MultiportSwitch = 10.0 +
        ETC_SpringTestHiThresh_DataStore();
      break;
    }

    /* End of MultiPortSwitch: '<S31>/Multiport Switch' */

    /* Sum: '<S31>/Add' */
    rtb_Product6_m = BaseEngineController_LS_B.s31_MultiportSwitch -
      BaseEngineController_LS_B.s422_Switch2;

    /* Logic: '<S25>/Logical Operator' incorporates:
     *  Constant: '<S25>/Constant1'
     *  RelationalOperator: '<S25>/Relational Operator4'
     *  S-Function (motohawk_sfun_data_read): '<S25>/motohawk_data_read1'
     *  Sum: '<S25>/Add1'
     */
    rtb_LogicalOperator_np = ((rtb_LogicalOperator6_b && (rtb_Product6_m <= 5.0
      + ETC_ShutdownLoAdaptError_DataStore())));

    /* S-Function (motohawk_sfun_data_write): '<S25>/motohawk_data_write1' */
    /* Write to Data Storage as scalar: TPSAdaptLoRequest */
    {
      TPSAdaptLoRequest_DataStore() = rtb_LogicalOperator_np;
    }

    /* Abs: '<S26>/Abs' */
    rtb_Product5_o = fabs(rtb_Product6_m);

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
    rtb_UnitDelay_ju = BaseEngineController_LS_DWork.s46_UnitDelay_DSTATE;

    /* UnitDelay: '<S42>/Unit Delay' */
    rtb_UnitDelay_cf = BaseEngineController_LS_DWork.s42_UnitDelay_DSTATE;

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
    rtb_Product7_i = (1.0 - rtb_Product5_o) *
      BaseEngineController_LS_DWork.s44_UnitDelay_DSTATE +
      BaseEngineController_LS_B.s422_Switch2 * rtb_Product5_o;

    /* S-Function Block: <S42>/motohawk_delta_time */
    rtb_motohawk_delta_time_hch = 0.005;

    /* Product: '<S42>/Product' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S42>/motohawk_delta_time'
     *  Sum: '<S42>/Sum2'
     */
    BaseEngineController_LS_B.s42_Product = (rtb_Product7_i - rtb_UnitDelay_cf) /
      rtb_motohawk_delta_time_hch;

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
        BaseEngineController_LS_ConstP.pooled905[rowidx];
      rtb_CombinatorialLogic_d[1] =
        BaseEngineController_LS_ConstP.pooled905[rowidx + 4];
    }

    /* Switch: '<S45>/Switch1' incorporates:
     *  UnitDelay: '<S45>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_d[1]) {
      rtb_LogicalOperator1_br = rtb_CombinatorialLogic_d[0];
    } else {
      rtb_LogicalOperator1_br =
        BaseEngineController_LS_DWork.s45_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S45>/Switch1' */

    /* Switch: '<S41>/Switch2' incorporates:
     *  Logic: '<S41>/Logical Operator'
     *  S-Function (motohawk_sfun_calibration): '<S35>/motohawk_calibration5'
     */
    if (!rtb_LogicalOperator1_br) {
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
    rtb_Switch1_f = rtb_Product5_o * BaseEngineController_LS_B.s422_Switch2;

    /* S-Function Block: <S46>/motohawk_delta_time */
    rtb_motohawk_delta_time_oy = 0.005;

    /* Product: '<S46>/Product' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S46>/motohawk_delta_time'
     *  Sum: '<S46>/Sum2'
     */
    BaseEngineController_LS_B.s46_Product = (rtb_Switch1_f - rtb_UnitDelay_ju) /
      rtb_motohawk_delta_time_oy;

    /* UnitDelay: '<S47>/Unit Delay' */
    rtb_UnitDelay_cf = BaseEngineController_LS_DWork.s47_UnitDelay_DSTATE;

    /* Sum: '<S38>/Sum2' */
    BaseEngineController_LS_B.s38_Sum2 =
      BaseEngineController_LS_B.s31_MultiportSwitch -
      BaseEngineController_LS_B.s422_Switch2;

    /* Product: '<S38>/Product5' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S29>/motohawk_calibration6'
     */
    rtb_Product5_o = BaseEngineController_LS_B.s38_Sum2 *
      (ETCErrorGain_DataStore());

    /* Product: '<S38>/Product4' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S29>/motohawk_calibration1'
     */
    rtb_UnitDelay_ju = (ETCDGain_DataStore()) * rtb_Product5_o;

    /* S-Function Block: <S47>/motohawk_delta_time */
    rtb_motohawk_delta_time_e0 = 0.005;

    /* Product: '<S47>/Product' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S47>/motohawk_delta_time'
     *  Sum: '<S47>/Sum2'
     */
    BaseEngineController_LS_B.s47_Product = (rtb_UnitDelay_ju - rtb_UnitDelay_cf)
      / rtb_motohawk_delta_time_e0;

    /* Sum: '<S29>/Add' */
    rtb_Add_g1 = BaseEngineController_LS_B.s31_MultiportSwitch -
      BaseEngineController_LS_B.s422_Switch2;

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
    rtb_UnitDelay_cf = (((BaseEngineController_LS_B.s47_Product -
                          BaseEngineController_LS_B.s46_Product) +
                         BaseEngineController_LS_B.s38_Product2) +
                        BaseEngineController_LS_B.s48_Switch1) +
      rtb_motohawk_interpolation_1d_d;

    /* MinMax: '<S51>/MinMax' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S39>/motohawk_calibration'
     */
    rtb_Abs_k = (rtb_UnitDelay_cf >= (ETCLwrLim_DataStore())) || rtIsNaN
      ((ETCLwrLim_DataStore())) ? rtb_UnitDelay_cf : (ETCLwrLim_DataStore());

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
    rtb_UnitDelay_cf = rtb_motohawk_interpolation_1d_on * (ETCIGain_DataStore())
      * rtb_Product5_o;

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
    rtb_UnitDelay_cf = rtb_UnitDelay_cf * rtb_motohawk_delta_time_l5 +
      BaseEngineController_LS_B.s48_Switch1;

    /* MinMax: '<S50>/MinMax' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S29>/motohawk_calibration3'
     */
    rtb_Abs_k = (rtb_UnitDelay_cf >= (ETCIMin_DataStore())) || rtIsNaN
      ((ETCIMin_DataStore())) ? rtb_UnitDelay_cf : (ETCIMin_DataStore());

    /* MinMax: '<S50>/MinMax1' incorporates:
     *  MinMax: '<S50>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S29>/motohawk_calibration4'
     */
    u = (rtb_Abs_k <= (ETCIMax_DataStore())) || rtIsNaN((ETCIMax_DataStore())) ?
      rtb_Abs_k : (ETCIMax_DataStore());

    /* Saturate: '<S56>/Saturation' */
    rtb_Saturation_pd = rtb_DataTypeConversion_m >= 16000.0 ? 16000.0 :
      rtb_DataTypeConversion_m <= 0.0 ? 0.0 : rtb_DataTypeConversion_m;

    /* S-Function (motohawk_sfun_data_write): '<S56>/motohawk_data_write' */
    /* Write to Data Storage as scalar: ETC_Tune_Timer */
    {
      ETC_Tune_Timer_DataStore() = rtb_Saturation_pd;
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
    BaseEngineController_LS_DWork.s20_UnitDelay_DSTATE = rtb_Product6_m;

    /* Update for UnitDelay: '<S55>/Unit Delay' */
    BaseEngineController_LS_DWork.s55_UnitDelay_DSTATE = rtb_Product5_j;

    /* Update for UnitDelay: '<S46>/Unit Delay' */
    BaseEngineController_LS_DWork.s46_UnitDelay_DSTATE = rtb_Switch1_f;

    /* Update for UnitDelay: '<S42>/Unit Delay' */
    BaseEngineController_LS_DWork.s42_UnitDelay_DSTATE = rtb_Product7_i;

    /* Update for UnitDelay: '<S44>/Unit Delay' */
    BaseEngineController_LS_DWork.s44_UnitDelay_DSTATE = rtb_Product7_i;

    /* Update for UnitDelay: '<S45>/Unit Delay' */
    BaseEngineController_LS_DWork.s45_UnitDelay_DSTATE = rtb_LogicalOperator1_br;

    /* Update for UnitDelay: '<S47>/Unit Delay' */
    BaseEngineController_LS_DWork.s47_UnitDelay_DSTATE = rtb_UnitDelay_ju;

    /* Update for UnitDelay: '<S48>/Unit Delay' incorporates:
     *  MinMax: '<S50>/MinMax1'
     */
    BaseEngineController_LS_DWork.s48_UnitDelay_DSTATE = u;
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
  /* Logic: '<S866>/Logical Operator1' incorporates:
   *  Logic: '<S863>/Logical Operator'
   *  Logic: '<S863>/Logical Operator9'
   *  RelationalOperator: '<S863>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S863>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S866>/motohawk_calibration5'
   */
  rtb_RelationalOperator5_fz = ((ETC_CutPower_Permitted_DataStore()) &&
    (BaseEngineController_LS_B.s584_Merge || (rtb_RelationalOperator3_bp &&
    (BaseEngineController_LS_B.s20_Switch < (ETC_CutPower_ETC_DataStore())))));

  /* Logic: '<S866>/Logical Operator' */
  rtb_LogicalOperator6_b = !rtb_RelationalOperator5_fz;

  /* If: '<S939>/If' incorporates:
   *  Inport: '<S940>/In1'
   *  Inport: '<S941>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S939>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S939>/override_enable'
   */
  if ((ETC_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S939>/NewValue' incorporates:
     *  ActionPort: '<S940>/Action Port'
     */
    rtb_UnitDelay_cf = (ETC_new_DataStore());

    /* End of Outputs for SubSystem: '<S939>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S939>/OldValue' incorporates:
     *  ActionPort: '<S941>/Action Port'
     */
    rtb_UnitDelay_cf = BaseEngineController_LS_B.s20_Switch;

    /* End of Outputs for SubSystem: '<S939>/OldValue' */
  }

  /* End of If: '<S939>/If' */

  /* Switch: '<S866>/Switch' incorporates:
   *  Constant: '<S866>/Constant2'
   *  Product: '<S866>/Product'
   *  S-Function (motohawk_sfun_calibration): '<S866>/motohawk_calibration2'
   *  S-Function (motohawk_sfun_interpolation_1d): '<S866>/motohawk_interpolation_1d'
   *  Sum: '<S866>/Sum'
   */
  if (rtb_RelationalOperator5_fz) {
    rtb_Switch_hp = 0.0;
  } else {
    /* S-Function Block: <S866>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_hr = TableInterpolation1D_real_T
        (BaseEngineController_LS_B.s408_motohawk_prelookup, (real_T *)
         ((ETC_VoltageCompTbl_DataStore())), 9);
      (ETC_VoltageComp_DataStore()) = rtb_motohawk_interpolation_1d_hr;
    }

    rtb_Switch_hp = rtb_UnitDelay_cf * rtb_motohawk_interpolation_1d_hr +
      (ETC_Offset_DataStore());
  }

  /* End of Switch: '<S866>/Switch' */

  /* Saturate: '<S866>/Saturation' */
  BaseEngineController_LS_B.s866_ETC = rtb_Switch_hp >= 100.0 ? 100.0 :
    rtb_Switch_hp <= -100.0 ? -100.0 : rtb_Switch_hp;

  /* Abs: '<S866>/Abs' */
  rtb_Switch_hp = fabs(BaseEngineController_LS_B.s866_ETC);

  /* RelationalOperator: '<S866>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S866>/motohawk_calibration3'
   */
  rtb_LogicalOperator1_br = (rtb_Switch_hp > (ETC_OC_MIN_DataStore()));

  /* S-Function (motohawk_sfun_pwm): '<S866>/motohawk_pwm1' */
  ETCPin_PWMOutput_PWMOutput_Outputs(NULL,
    &BaseEngineController_LS_B.s866_motohawk_pwm1);

  /* Abs: '<S866>/Abs1' */
  rtb_DataTypeConversion2_pj = (int16_T)
    (BaseEngineController_LS_B.s866_motohawk_pwm1 < 0 ? (int16_T)
     -BaseEngineController_LS_B.s866_motohawk_pwm1 :
     BaseEngineController_LS_B.s866_motohawk_pwm1);

  /* RelationalOperator: '<S866>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S866>/motohawk_calibration1'
   */
  BaseEngineController_LS_B.s866_RelationalOperator4 = (((real_T)
    rtb_DataTypeConversion2_pj < (ETC_I_MIN_DataStore())));

  /* Switch: '<S938>/Switch' incorporates:
   *  Constant: '<S938>/Constant'
   *  Logic: '<S866>/Logical Operator4'
   *  S-Function (motohawk_sfun_data_read): '<S938>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S938>/motohawk_delta_time'
   *  Sum: '<S938>/Sum'
   */
  if (rtb_LogicalOperator6_b && rtb_LogicalOperator1_br &&
      BaseEngineController_LS_B.s866_RelationalOperator4) {
    rtb_Switch_hp = rtb_motohawk_delta_time_oe + ETCOpenFaultTimer_DataStore();
  } else {
    rtb_Switch_hp = 0.0;
  }

  /* End of Switch: '<S938>/Switch' */

  /* RelationalOperator: '<S866>/Relational Operator5' incorporates:
   *  Constant: '<S866>/Constant'
   */
  rtb_RelationalOperator5 = ((rtb_Switch_hp > 5.0));

  /* S-Function (motohawk_sfun_fault_def): '<S866>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: ETC_Open_Fault */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(52, rtb_RelationalOperator5);
    UpdateFault(52);
  }

  /* Gain: '<S866>/Convert to integer 14-bit PWM resolution' */
  rtb_Abs_co = 40.95 * BaseEngineController_LS_B.s866_ETC;

  /* DataTypeConversion: '<S866>/Data Type Conversion3' incorporates:
   *  Gain: '<S866>/Convert to integer 0.01Hz resolution'
   *  S-Function (motohawk_sfun_calibration): '<S866>/motohawk_calibration4'
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

  /* End of DataTypeConversion: '<S866>/Data Type Conversion3' */

  /* DataTypeConversion: '<S866>/Data Type Conversion4' */
  if (rtb_Abs_co < 32768.0) {
    if (rtb_Abs_co >= -32768.0) {
      rtb_DataTypeConversion4_m = (int16_T)rtb_Abs_co;
    } else {
      rtb_DataTypeConversion4_m = MIN_int16_T;
    }
  } else {
    rtb_DataTypeConversion4_m = MAX_int16_T;
  }

  /* End of DataTypeConversion: '<S866>/Data Type Conversion4' */

  /* Saturate: '<S938>/Saturation' */
  rtb_Saturation_no = rtb_Switch_hp >= 16000.0 ? 16000.0 : rtb_Switch_hp <= 0.0 ?
    0.0 : rtb_Switch_hp;

  /* S-Function (motohawk_sfun_data_write): '<S938>/motohawk_data_write' */
  /* Write to Data Storage as scalar: ETCOpenFaultTimer */
  {
    ETCOpenFaultTimer_DataStore() = rtb_Saturation_no;
  }

  /* If: '<S945>/If' incorporates:
   *  Inport: '<S946>/In1'
   *  Inport: '<S947>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S945>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S945>/override_enable'
   */
  if ((IAC_P_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S945>/NewValue' incorporates:
     *  ActionPort: '<S946>/Action Port'
     */
    rtb_UnitDelay_cf = (IAC_P_new_DataStore());

    /* End of Outputs for SubSystem: '<S945>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S945>/OldValue' incorporates:
     *  ActionPort: '<S947>/Action Port'
     */
    rtb_UnitDelay_cf = BaseEngineController_LS_B.s135_IACP;

    /* End of Outputs for SubSystem: '<S945>/OldValue' */
  }

  /* End of If: '<S945>/If' */

  /* Product: '<S942>/Product' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S942>/motohawk_calibration'
   */
  rtb_UnitDelay_cf *= (IAC_PGain_DataStore());

  /* Sum: '<S942>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S942>/motohawk_calibration1'
   */
  rtb_Abs_co = rtb_UnitDelay_cf + (IAC_POffset_DataStore());

  /* MinMax: '<S944>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S942>/motohawk_calibration2'
   */
  rtb_Abs_co = (rtb_Abs_co >= (IAC_PMinLimit_DataStore())) || rtIsNaN
    ((IAC_PMinLimit_DataStore())) ? rtb_Abs_co : (IAC_PMinLimit_DataStore());

  /* MinMax: '<S944>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S942>/motohawk_calibration3'
   */
  BaseEngineController_LS_B.s944_MinMax1 = (rtb_Abs_co <=
    (IAC_PMaxLimit_DataStore())) || rtIsNaN((IAC_PMaxLimit_DataStore())) ?
    rtb_Abs_co : (IAC_PMaxLimit_DataStore());

  /* Gain: '<S942>/Convert to integer 14-bit PWM resolution' */
  rtb_Abs_co = 40.95 * BaseEngineController_LS_B.s944_MinMax1;

  /* DataTypeConversion: '<S942>/Data Type Conversion3' */
  if (rtb_Abs_co < 32768.0) {
    if (rtb_Abs_co >= -32768.0) {
      rtb_DataTypeConversion3_p = (int16_T)rtb_Abs_co;
    } else {
      rtb_DataTypeConversion3_p = MIN_int16_T;
    }
  } else {
    rtb_DataTypeConversion3_p = MAX_int16_T;
  }

  /* End of DataTypeConversion: '<S942>/Data Type Conversion3' */
  /* Gain: '<S942>/Convert to integer 0.01Hz resolution' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S942>/motohawk_calibration4'
   */
  rtb_Abs_co = 100.0 * (IAC_PFrequency_DataStore());

  /* DataTypeConversion: '<S942>/Data Type Conversion2' */
  if (rtb_Abs_co < 4.294967296E+9) {
    if (rtb_Abs_co >= 0.0) {
      rtb_DataTypeConversion2_l = (uint32_T)rtb_Abs_co;
    } else {
      rtb_DataTypeConversion2_l = 0U;
    }
  } else {
    rtb_DataTypeConversion2_l = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S942>/Data Type Conversion2' */

  /* If: '<S949>/If' incorporates:
   *  Inport: '<S950>/In1'
   *  Inport: '<S951>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S949>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S949>/override_enable'
   */
  if ((IAC_S_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S949>/NewValue' incorporates:
     *  ActionPort: '<S950>/Action Port'
     */
    rtb_UnitDelay_cf = (IAC_S_new_DataStore());

    /* End of Outputs for SubSystem: '<S949>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S949>/OldValue' incorporates:
     *  ActionPort: '<S951>/Action Port'
     */
    rtb_UnitDelay_cf = BaseEngineController_LS_B.s135_IACS;

    /* End of Outputs for SubSystem: '<S949>/OldValue' */
  }

  /* End of If: '<S949>/If' */

  /* Product: '<S943>/Product' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S943>/motohawk_calibration'
   */
  rtb_UnitDelay_cf *= (IAC_SGain_DataStore());

  /* Sum: '<S943>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S943>/motohawk_calibration1'
   */
  rtb_Abs_co = rtb_UnitDelay_cf + (IAC_SOffset_DataStore());

  /* MinMax: '<S948>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S943>/motohawk_calibration2'
   */
  rtb_Abs_co = (rtb_Abs_co >= (IAC_SMinLimit_DataStore())) || rtIsNaN
    ((IAC_SMinLimit_DataStore())) ? rtb_Abs_co : (IAC_SMinLimit_DataStore());

  /* MinMax: '<S948>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S943>/motohawk_calibration3'
   */
  BaseEngineController_LS_B.s948_MinMax1 = (rtb_Abs_co <=
    (IAC_SMaxLimit_DataStore())) || rtIsNaN((IAC_SMaxLimit_DataStore())) ?
    rtb_Abs_co : (IAC_SMaxLimit_DataStore());

  /* Gain: '<S943>/Convert to integer 14-bit PWM resolution' */
  rtb_Abs_co = 40.95 * BaseEngineController_LS_B.s948_MinMax1;

  /* DataTypeConversion: '<S943>/Data Type Conversion3' */
  if (rtb_Abs_co < 32768.0) {
    if (rtb_Abs_co >= -32768.0) {
      rtb_DataTypeConversion3_d = (int16_T)rtb_Abs_co;
    } else {
      rtb_DataTypeConversion3_d = MIN_int16_T;
    }
  } else {
    rtb_DataTypeConversion3_d = MAX_int16_T;
  }

  /* End of DataTypeConversion: '<S943>/Data Type Conversion3' */
  /* Gain: '<S943>/Convert to integer 0.01Hz resolution' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S943>/motohawk_calibration4'
   */
  rtb_Abs_co = 100.0 * (IAC_SFrequency_DataStore());

  /* DataTypeConversion: '<S943>/Data Type Conversion2' */
  if (rtb_Abs_co < 4.294967296E+9) {
    if (rtb_Abs_co >= 0.0) {
      rtb_DataTypeConversion2_i = (uint32_T)rtb_Abs_co;
    } else {
      rtb_DataTypeConversion2_i = 0U;
    }
  } else {
    rtb_DataTypeConversion2_i = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S943>/Data Type Conversion2' */
  /* If: '<S956>/If' incorporates:
   *  Inport: '<S966>/In1'
   *  Inport: '<S967>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S956>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S956>/override_enable'
   */
  if ((SOI_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S956>/NewValue' incorporates:
     *  ActionPort: '<S966>/Action Port'
     */
    rtb_UnitDelay_cf = (SOI_new_DataStore());

    /* End of Outputs for SubSystem: '<S956>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S956>/OldValue' incorporates:
     *  ActionPort: '<S967>/Action Port'
     */
    rtb_UnitDelay_cf = BaseEngineController_LS_B.s135_SOI;

    /* End of Outputs for SubSystem: '<S956>/OldValue' */
  }

  /* End of If: '<S956>/If' */

  /* Gain: '<S868>/Gain2' */
  rtb_Abs_co = 16.0 * rtb_UnitDelay_cf;

  /* DataTypeConversion: '<S868>/Data Type Conversion2' */
  if (rtb_Abs_co < 32768.0) {
    if (rtb_Abs_co >= -32768.0) {
      rtb_DataTypeConversion2_pj = (int16_T)rtb_Abs_co;
    } else {
      rtb_DataTypeConversion2_pj = MIN_int16_T;
    }
  } else {
    rtb_DataTypeConversion2_pj = MAX_int16_T;
  }

  /* End of DataTypeConversion: '<S868>/Data Type Conversion2' */
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
  rtb_UnitDelay_cf = rtb_Merge_da + (Fuel_Cyl8_offset_DataStore());

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
  rtb_UnitDelay_ju = rtb_Merge_a5 + (Fuel_Cyl7_offset_DataStore());

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
  rtb_Switch1_f = rtb_Merge_ie + (Fuel_Cyl6_offset_DataStore());

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
  rtb_Product6_m = rtb_Merge_ho + (Fuel_Cyl5_offset_DataStore());

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
  rtb_Product7_i = rtb_Merge_ab + (Fuel_Cyl4_offset_DataStore());

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
  rtb_Product5_j = rtb_Merge_gg + (Fuel_Cyl3_offset_DataStore());

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
  rtb_DataTypeConversion_m = rtb_Merge_db + (Fuel_Cyl2_offset_DataStore());

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
    rtb_Merge_bv[1] = rtb_DataTypeConversion_m;
    rtb_Merge_bv[2] = rtb_Product5_j;
    rtb_Merge_bv[3] = rtb_Product7_i;
    rtb_Merge_bv[4] = rtb_Product6_m;
    rtb_Merge_bv[5] = rtb_Switch1_f;
    rtb_Merge_bv[6] = rtb_UnitDelay_ju;
    rtb_Merge_bv[7] = rtb_UnitDelay_cf;

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
    (BaseEngineController_LS_B.s662_Merge + BaseEngineController_LS_B.s378_Sum)
    - BaseEngineController_LS_B.s670_Merge;

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
  y = BaseEngineController_LS_B.s627_Sum1 >= 0.01 ?
    BaseEngineController_LS_B.s627_Sum1 : 0.01;

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
      (BaseEngineController_LS_B.s408_motohawk_prelookup, (real_T *)
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
  /* If: '<S957>/If' incorporates:
   *  Inport: '<S968>/In1'
   *  Inport: '<S969>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S957>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S957>/override_enable'
   */
  if ((Mech_PW_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S957>/NewValue' incorporates:
     *  ActionPort: '<S968>/Action Port'
     */
    for (i = 0; i < 8; i++) {
      rtb_Product2_aa[i] = (Mech_PW_new_DataStore())[i];
    }

    /* End of Outputs for SubSystem: '<S957>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S957>/OldValue' incorporates:
     *  ActionPort: '<S969>/Action Port'
     */
    memcpy((void *)&rtb_Product2_aa[0], (void *)
           (&BaseEngineController_LS_B.s21_MinMax[0]), sizeof(real_T) << 3U);

    /* End of Outputs for SubSystem: '<S957>/OldValue' */
  }

  /* End of If: '<S957>/If' */

  /* DataTypeConversion: '<S868>/Data Type Conversion3' incorporates:
   *  Gain: '<S868>/Gain3'
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

  /* End of DataTypeConversion: '<S868>/Data Type Conversion3' */
  /* Gain: '<S868>/Gain5' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S868>/motohawk_calibration9'
   */
  rtb_Abs_co = 1000.0 * (InjectorMaxDuration_DataStore());

  /* DataTypeConversion: '<S868>/Data Type Conversion6' */
  if (rtb_Abs_co < 4.294967296E+9) {
    if (rtb_Abs_co >= 0.0) {
      rtb_DataTypeConversion6 = (uint32_T)rtb_Abs_co;
    } else {
      rtb_DataTypeConversion6 = 0U;
    }
  } else {
    rtb_DataTypeConversion6 = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S868>/Data Type Conversion6' */
  /* If: '<S954>/If' incorporates:
   *  Inport: '<S962>/In1'
   *  Inport: '<S963>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S954>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S954>/override_enable'
   */
  if ((Elec_PW_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S954>/NewValue' incorporates:
     *  ActionPort: '<S962>/Action Port'
     */
    rtb_UnitDelay_cf = (Elec_PW_new_DataStore());

    /* End of Outputs for SubSystem: '<S954>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S954>/OldValue' incorporates:
     *  ActionPort: '<S963>/Action Port'
     */
    rtb_UnitDelay_cf = BaseEngineController_LS_B.s21_Sum2;

    /* End of Outputs for SubSystem: '<S954>/OldValue' */
  }

  /* End of If: '<S954>/If' */

  /* Gain: '<S868>/Gain1' */
  rtb_Abs_co = 1000.0 * rtb_UnitDelay_cf;

  /* DataTypeConversion: '<S868>/Data Type Conversion1' */
  if (rtb_Abs_co < 4.294967296E+9) {
    if (rtb_Abs_co >= 0.0) {
      rtb_DataTypeConversion1_p = (uint32_T)rtb_Abs_co;
    } else {
      rtb_DataTypeConversion1_p = 0U;
    }
  } else {
    rtb_DataTypeConversion1_p = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S868>/Data Type Conversion1' */
  /* If: '<S955>/If' incorporates:
   *  Inport: '<S964>/In1'
   *  Inport: '<S965>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S955>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S955>/override_enable'
   */
  if ((MakeUp_EOI_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S955>/NewValue' incorporates:
     *  ActionPort: '<S964>/Action Port'
     */
    rtb_UnitDelay_cf = (MakeUp_EOI_new_DataStore());

    /* End of Outputs for SubSystem: '<S955>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S955>/OldValue' incorporates:
     *  ActionPort: '<S965>/Action Port'
     */
    rtb_UnitDelay_cf = BaseEngineController_LS_B.s135_MakeUpEOI;

    /* End of Outputs for SubSystem: '<S955>/OldValue' */
  }

  /* End of If: '<S955>/If' */

  /* Gain: '<S868>/Gain6' */
  rtb_Abs_co = 16.0 * rtb_UnitDelay_cf;

  /* DataTypeConversion: '<S868>/Data Type Conversion7' */
  if (rtb_Abs_co < 32768.0) {
    if (rtb_Abs_co >= -32768.0) {
      rtb_DataTypeConversion7 = (int16_T)rtb_Abs_co;
    } else {
      rtb_DataTypeConversion7 = MIN_int16_T;
    }
  } else {
    rtb_DataTypeConversion7 = MAX_int16_T;
  }

  /* End of DataTypeConversion: '<S868>/Data Type Conversion7' */
  /* Gain: '<S868>/Gain7' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S868>/motohawk_calibration6'
   */
  rtb_Abs_co = 1000.0 * (MinMakeUpPW_DataStore());

  /* DataTypeConversion: '<S868>/Data Type Conversion8' */
  if (rtb_Abs_co < 4.294967296E+9) {
    if (rtb_Abs_co >= 0.0) {
      rtb_Sum_hh = (uint32_T)rtb_Abs_co;
    } else {
      rtb_Sum_hh = 0U;
    }
  } else {
    rtb_Sum_hh = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S868>/Data Type Conversion8' */
  /* Gain: '<S868>/Gain8' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S868>/motohawk_calibration1'
   */
  rtb_Abs_co = 1000.0 * (InjectiorMinDuration_DataStore());

  /* DataTypeConversion: '<S868>/Data Type Conversion9' */
  if (rtb_Abs_co < 4.294967296E+9) {
    if (rtb_Abs_co >= 0.0) {
      rtb_UnitDelay_lk = (uint32_T)rtb_Abs_co;
    } else {
      rtb_UnitDelay_lk = 0U;
    }
  } else {
    rtb_UnitDelay_lk = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S868>/Data Type Conversion9' */
  /* Outputs for Atomic SubSystem: '<S868>/Injector Enable Manager' */

  /* S-Function Block: <S961>/motohawk_delta_time */
  rtb_motohawk_delta_time_i = 0.005;

  /* Switch: '<S961>/Switch' incorporates:
   *  Constant: '<S961>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S961>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S961>/motohawk_delta_time'
   *  S-Function (motohawk_sfun_fault_action): '<S953>/motohawk_fault_action'
   *  Sum: '<S961>/Sum'
   */
  if (GetFaultActionStatus(2)) {
    rtb_UnitDelay_cf = rtb_motohawk_delta_time_i +
      DelayedEngineShutdownTimer_DataStore();
  } else {
    rtb_UnitDelay_cf = 0.0;
  }

  /* End of Switch: '<S961>/Switch' */
  /* RelationalOperator: '<S953>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S953>/motohawk_calibration1'
   */
  rtb_LogicalOperator_iy = (rtb_UnitDelay_cf >
    (EngineShutdownDelayTime_DataStore()));

  /* S-Function (motohawk_sfun_data_write): '<S953>/motohawk_data_write' */
  /* Write to Data Storage as scalar: DelayedEngineShutdownAction */
  {
    DelayedEngineShutdownAction_DataStore() = rtb_LogicalOperator_iy;
  }

  /* RelationalOperator: '<S953>/Relational Operator1' incorporates:
   *  Gain: '<S953>/Gain'
   *  S-Function (motohawk_sfun_calibration): '<S953>/motohawk_calibration1'
   */
  rtb_RelationalOperator1_cf = ((rtb_UnitDelay_cf > 0.5 *
    (EngineShutdownDelayTime_DataStore())));

  /* S-Function (motohawk_sfun_data_write): '<S953>/motohawk_data_write1' */
  /* Write to Data Storage as scalar: DelayedEngineShutdownWarning */
  {
    DelayedEngineShutdownWarning_DataStore() = rtb_RelationalOperator1_cf;
  }

  /* RelationalOperator: '<S953>/Relational Operator2' incorporates:
   *  Constant: '<S953>/Constant'
   */
  rtb_RelationalOperator2_cd = ((rtb_UnitDelay_cf > 0.0));

  /* S-Function (motohawk_sfun_data_write): '<S953>/motohawk_data_write2' */
  /* Write to Data Storage as scalar: EngineShutdownTimerState */
  {
    EngineShutdownTimerState_DataStore() = rtb_RelationalOperator2_cd;
  }

  /* Logic: '<S953>/Logical Operator' */
  rtb_LogicalOperator_iy = !rtb_LogicalOperator_iy;

  /* Logic: '<S953>/Logical Operator2' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S953>/motohawk_data_read'
   */
  rtb_LogicalOperator6_b = !EngineShutdownAction_DataStore();

  /* S-Function (motohawk_sfun_data_read): '<S953>/motohawk_data_read1' */
  rtb_motohawk_data_read1_iz = ECUP_Enabled_DataStore();

  /* Logic: '<S953>/Logical Operator4' incorporates:
   *  Constant: '<S960>/Constant'
   *  RelationalOperator: '<S960>/RelOp'
   *  S-Function (motohawk_sfun_data_read): '<S953>/motohawk_data_read2'
   */
  rtb_LogicalOperator1_br = !(((uint8_T)EngineState_DataStore()) == 1);

  /* Logic: '<S953>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S953>/motohawk_calibration10'
   *  S-Function (motohawk_sfun_calibration): '<S953>/motohawk_calibration11'
   *  S-Function (motohawk_sfun_calibration): '<S953>/motohawk_calibration12'
   *  S-Function (motohawk_sfun_calibration): '<S953>/motohawk_calibration2'
   *  S-Function (motohawk_sfun_calibration): '<S953>/motohawk_calibration3'
   *  S-Function (motohawk_sfun_calibration): '<S953>/motohawk_calibration4'
   *  S-Function (motohawk_sfun_calibration): '<S953>/motohawk_calibration7'
   *  S-Function (motohawk_sfun_calibration): '<S953>/motohawk_calibration8'
   */
  rtb_LogicalOperator1_aj[0] = (rtb_LogicalOperator_iy && rtb_LogicalOperator6_b
    && rtb_motohawk_data_read1_iz && rtb_LogicalOperator1_br &&
    (Injector1Enable_DataStore()));
  rtb_LogicalOperator1_aj[1] = (rtb_LogicalOperator_iy && rtb_LogicalOperator6_b
    && rtb_motohawk_data_read1_iz && rtb_LogicalOperator1_br &&
    (Injector2Enable_DataStore()));
  rtb_LogicalOperator1_aj[2] = (rtb_LogicalOperator_iy && rtb_LogicalOperator6_b
    && rtb_motohawk_data_read1_iz && rtb_LogicalOperator1_br &&
    (Injector3Enable_DataStore()));
  rtb_LogicalOperator1_aj[3] = (rtb_LogicalOperator_iy && rtb_LogicalOperator6_b
    && rtb_motohawk_data_read1_iz && rtb_LogicalOperator1_br &&
    (Injector4Enable_DataStore()));
  rtb_LogicalOperator1_aj[4] = (rtb_LogicalOperator_iy && rtb_LogicalOperator6_b
    && rtb_motohawk_data_read1_iz && rtb_LogicalOperator1_br &&
    (Injector5Enable_DataStore()));
  rtb_LogicalOperator1_aj[5] = (rtb_LogicalOperator_iy && rtb_LogicalOperator6_b
    && rtb_motohawk_data_read1_iz && rtb_LogicalOperator1_br &&
    (Injector6Enable_DataStore()));
  rtb_LogicalOperator1_aj[6] = (rtb_LogicalOperator_iy && rtb_LogicalOperator6_b
    && rtb_motohawk_data_read1_iz && rtb_LogicalOperator1_br &&
    (Injector7Enable_DataStore()));
  rtb_LogicalOperator1_aj[7] = (rtb_LogicalOperator_iy && rtb_LogicalOperator6_b
    && rtb_motohawk_data_read1_iz && rtb_LogicalOperator1_br &&
    (Injector8Enable_DataStore()));

  /* Saturate: '<S961>/Saturation' */
  rtb_Saturation_k4 = rtb_UnitDelay_cf >= 16000.0 ? 16000.0 : rtb_UnitDelay_cf <=
    0.0 ? 0.0 : rtb_UnitDelay_cf;

  /* S-Function (motohawk_sfun_data_write): '<S961>/motohawk_data_write' */
  /* Write to Data Storage as scalar: DelayedEngineShutdownTimer */
  {
    DelayedEngineShutdownTimer_DataStore() = rtb_Saturation_k4;
  }

  /* End of Outputs for SubSystem: '<S868>/Injector Enable Manager' */
  /* Logic: '<S868>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S868>/motohawk_data_read'
   */
  rtb_LogicalOperator6_b = !ESTOP_DataStore();

  /* If: '<S959>/If' incorporates:
   *  Inport: '<S972>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S959>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S959>/override_enable'
   */
  if ((ESTOP_FuelInj_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S959>/NewValue' incorporates:
     *  ActionPort: '<S972>/Action Port'
     */
    rtb_LogicalOperator6_b = (ESTOP_FuelInj_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S959>/NewValue' */
  } else {
  }

  /* End of If: '<S959>/If' */

  /* Logic: '<S868>/Logical Operator' */
  for (i = 0; i < 8; i++) {
    rtb_LogicalOperator1_aj[i] = (rtb_LogicalOperator6_b && rtb_AND1[i] &&
      rtb_LogicalOperator1_aj[i]);
  }

  /* End of Logic: '<S868>/Logical Operator' */
  /* If: '<S958>/If' incorporates:
   *  Inport: '<S970>/In1'
   *  Inport: '<S971>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S958>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S958>/override_enable'
   */
  if ((InjEnable_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S958>/NewValue' incorporates:
     *  ActionPort: '<S970>/Action Port'
     */
    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_B.s958_Merge[i] = (InjEnable_new_DataStore())[i];
    }

    /* End of Outputs for SubSystem: '<S958>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S958>/OldValue' incorporates:
     *  ActionPort: '<S971>/Action Port'
     */
    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_B.s958_Merge[i] = rtb_LogicalOperator1_aj[i];
    }

    /* End of Outputs for SubSystem: '<S958>/OldValue' */
  }

  /* End of If: '<S958>/If' */

  /* S-Function Block: <S868>/Injector Sequence */
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
      enable = ((BaseEngineController_LS_B.s958_Merge)[index] &&
                pulse_scheduling_allowed);
      if ((INJ_SequenceType_DataStore()) == 0) {
        if ((enable) !=
            ((&BaseEngineController_LS_DWork.s868_InjectorSequence_DWORK1[0])
             [index])) {
          seq_enable = (enable) ? SEQ_ENABLED : SEQ_DISNEXT;
          SetSeqOutCond((E_ModuleResource) ((INJ_InitialPin_DataStore()) + index),
                        0, seq_enable);
          if ((INJ_Behavior_DataStore()) == 1)
            SetSeqOutCond((E_ModuleResource) ((INJ_InitialPin_DataStore()) +
              index), 1, (enable && 1) ? SEQ_ENABLED : SEQ_DISNEXT);
          (&BaseEngineController_LS_DWork.s868_InjectorSequence_DWORK1[0])[index]
            = enable;
        }

        if ((BaseEngineController_LS_ConstB.s868_DataTypeConversion5) !=
            (BaseEngineController_LS_DWork.s868_InjectorSequence_DWORK2)) {
          SetSeqOutInjPeakTime((E_ModuleResource) ((INJ_InitialPin_DataStore())
            + index), BaseEngineController_LS_ConstB.s868_DataTypeConversion5);
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
              ((&BaseEngineController_LS_DWork.s868_InjectorSequence_DWORK1[0])
               [index])) {
            seq_enable = (enable) ? SEQ_ENABLED : SEQ_DISNEXT;
            SetSeqOutCond((E_ModuleResource) ((INJ_InitialPin_DataStore()) +
              index), 0, seq_enable);
            SetSeqOutCond((E_ModuleResource) ((INJ_InitialPin_DataStore()) +
              index), 1, seq_enable);
            (&BaseEngineController_LS_DWork.s868_InjectorSequence_DWORK1[0])
              [index] = enable;
          }

          /* Update peak time only on primary Pulse */
          if ((BaseEngineController_LS_ConstB.s868_DataTypeConversion5) !=
              (BaseEngineController_LS_DWork.s868_InjectorSequence_DWORK2)) {
            SetSeqOutInjPeakTime((E_ModuleResource) ((INJ_InitialPin_DataStore())
              + index), BaseEngineController_LS_ConstB.s868_DataTypeConversion5);
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
            ((&BaseEngineController_LS_DWork.s868_InjectorSequence_DWORK1[0])
             [index])) {
          seq_enable = (enable) ? SEQ_ENABLED : SEQ_DISNEXT;
          SetSeqOutCond((E_ModuleResource) ((INJ_InitialPin_DataStore()) + index),
                        0, seq_enable);
          SetSeqOutCond((E_ModuleResource) ((INJ_InitialPin_DataStore()) + index),
                        1, seq_enable);
          (&BaseEngineController_LS_DWork.s868_InjectorSequence_DWORK1[0])[index]
            = enable;
        }

        if ((BaseEngineController_LS_ConstB.s868_DataTypeConversion5) !=
            (BaseEngineController_LS_DWork.s868_InjectorSequence_DWORK2)) {
          SetSeqOutInjPeakTime((E_ModuleResource) ((INJ_InitialPin_DataStore())
            + index), BaseEngineController_LS_ConstB.s868_DataTypeConversion5);
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

    BaseEngineController_LS_DWork.s868_InjectorSequence_DWORK2 =
      BaseEngineController_LS_ConstB.s868_DataTypeConversion5;

    /* Output per-cylinder diagnostics */
    {
      for (i=0; i < (EncoderNumCylinders_DataStore()); i++) {
        (BaseEngineController_LS_B.s868_InjectorSequence_o1)[i] =
          InjectorSeqDiagInfo_39[i].u1TXCnt;
      }

      for (i=0; i < (EncoderNumCylinders_DataStore()); i++) {
        (rtb_InjectorSequence_o2)[i] = InjectorSeqDiagInfo_39[i].
          u4TXTimeInMicroSecs;
      }
    }
  }

  /* RelationalOperator: '<S952>/==' incorporates:
   *  Constant: '<S952>/Zero'
   */
  for (i = 0; i < 8; i++) {
    rtb_LogicalOperator1_aj[i] =
      (BaseEngineController_LS_B.s868_InjectorSequence_o1[i] == 0);
  }

  /* End of RelationalOperator: '<S952>/==' */
  /* S-Function Block: <S952>/motohawk_encoder_average_rpm */
  {
    rtb_motohawk_encoder_average_rpm = GetEncoderResourceAverageRPM();
  }

  /* RelationalOperator: '<S952>/<1' incorporates:
   *  Constant: '<S952>/Zero1'
   *  S-Function (motohawk_sfun_encoder_average_rpm): '<S952>/motohawk_encoder_average_rpm'
   */
  rtb_LogicalOperator6_b = (rtb_motohawk_encoder_average_rpm > 100);

  /* Logic: '<S952>/AND1' */
  for (i = 0; i < 8; i++) {
    rtb_AND1[i] = (rtb_LogicalOperator1_aj[i] && rtb_LogicalOperator6_b &&
                   BaseEngineController_LS_B.s958_Merge[i]);
  }

  /* End of Logic: '<S952>/AND1' */

  /* S-Function (motohawk_sfun_fault_def): '<S952>/motohawk_fault_def' */

  /* Set Fault Suspected Status: Inj1Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(74, rtb_AND1[0]);
    UpdateFault(74);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S952>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: Inj2Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(75, rtb_AND1[1]);
    UpdateFault(75);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S952>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: Inj3Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(76, rtb_AND1[2]);
    UpdateFault(76);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S952>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: Inj4Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(77, rtb_AND1[3]);
    UpdateFault(77);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S952>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: Inj5Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(78, rtb_AND1[4]);
    UpdateFault(78);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S952>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: Inj6Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(79, rtb_AND1[5]);
    UpdateFault(79);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S952>/motohawk_fault_def6' */

  /* Set Fault Suspected Status: Inj7Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(80, rtb_AND1[6]);
    UpdateFault(80);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S952>/motohawk_fault_def7' */

  /* Set Fault Suspected Status: Inj8Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(81, rtb_AND1[7]);
    UpdateFault(81);
  }

  /* Logic: '<S869>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_fault_action): '<S869>/motohawk_fault_action'
   */
  rtb_RelationalOperator5_fz = !GetFaultActionStatus(6);

  /* Product: '<S869>/Product' */
  rtb_UnitDelay_cf = BaseEngineController_LS_B.s135_WASTEGATE * (real_T)
    rtb_RelationalOperator5_fz;

  /* If: '<S976>/If' incorporates:
   *  Inport: '<S977>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S976>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S976>/override_enable'
   */
  if ((WASTEGATE_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S976>/NewValue' incorporates:
     *  ActionPort: '<S977>/Action Port'
     */
    rtb_UnitDelay_cf = (WASTEGATE_new_DataStore());

    /* End of Outputs for SubSystem: '<S976>/NewValue' */
  } else {
  }

  /* End of If: '<S976>/If' */

  /* Product: '<S974>/Product' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S974>/motohawk_calibration'
   */
  rtb_UnitDelay_cf *= (WASTEGATEGain_DataStore());

  /* Sum: '<S974>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S974>/motohawk_calibration1'
   */
  rtb_Abs_co = rtb_UnitDelay_cf + (WASTEGATEOffset_DataStore());

  /* MinMax: '<S975>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S974>/motohawk_calibration2'
   */
  rtb_Abs_co = (rtb_Abs_co >= (WASTEGATEMinLimit_DataStore())) || rtIsNaN
    ((WASTEGATEMinLimit_DataStore())) ? rtb_Abs_co :
    (WASTEGATEMinLimit_DataStore());

  /* MinMax: '<S975>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S974>/motohawk_calibration3'
   */
  BaseEngineController_LS_B.s975_MinMax1 = (rtb_Abs_co <=
    (WASTEGATEMaxLimit_DataStore())) || rtIsNaN((WASTEGATEMaxLimit_DataStore()))
    ? rtb_Abs_co : (WASTEGATEMaxLimit_DataStore());

  /* Gain: '<S974>/Convert to integer 14-bit PWM resolution' */
  rtb_Abs_co = 40.95 * BaseEngineController_LS_B.s975_MinMax1;

  /* DataTypeConversion: '<S974>/Data Type Conversion3' */
  if (rtb_Abs_co < 32768.0) {
    if (rtb_Abs_co >= -32768.0) {
      rtb_DataTypeConversion3_e = (int16_T)rtb_Abs_co;
    } else {
      rtb_DataTypeConversion3_e = MIN_int16_T;
    }
  } else {
    rtb_DataTypeConversion3_e = MAX_int16_T;
  }

  /* End of DataTypeConversion: '<S974>/Data Type Conversion3' */
  /* Gain: '<S974>/Convert to integer 0.01Hz resolution' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S974>/motohawk_calibration4'
   */
  rtb_Abs_co = 100.0 * (WASTEGATEFrequency_DataStore());

  /* DataTypeConversion: '<S974>/Data Type Conversion2' */
  if (rtb_Abs_co < 4.294967296E+9) {
    if (rtb_Abs_co >= 0.0) {
      rtb_DataTypeConversion2_p = (uint32_T)rtb_Abs_co;
    } else {
      rtb_DataTypeConversion2_p = 0U;
    }
  } else {
    rtb_DataTypeConversion2_p = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S974>/Data Type Conversion2' */

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

  /* UnitDelay: '<S449>/Unit Delay' */
  rtb_UnitDelay_lk = BaseEngineController_LS_DWork.s449_UnitDelay_DSTATE;

  /* Sum: '<S449>/Sum' incorporates:
   *  Constant: '<S449>/Constant1'
   */
  rtb_Switch_kj = 1U + rtb_UnitDelay_lk;
  if (rtb_Switch_kj < 1U) {
    rtb_Switch_kj = MAX_uint32_T;
  }

  rtb_Sum_hh = rtb_Switch_kj;

  /* End of Sum: '<S449>/Sum' */

  /* RelationalOperator: '<S449>/Relational Operator' incorporates:
   *  Constant: '<S18>/Count'
   */
  rtb_RelationalOperator_jv = (rtb_Sum_hh >= 5U);

  /* S-Function Block: <S373>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (App05In_DataStore()) = rtb_APP1;
    (App05Idx_DataStore()) = TablePrelookup_real_T(rtb_APP1,
      (App05IdxArr_DataStore()), 5, (App05Idx_DataStore()));
    rtb_motohawk_prelookup_b2 = (App05Idx_DataStore());
  }

  /* S-Function Block: <S401>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (ACPres05In_DataStore()) = BaseEngineController_LS_B.s641_Merge;
    (ACPres05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s641_Merge, (ACPres05IdxArr_DataStore()), 5,
       (ACPres05Idx_DataStore()));
    rtb_motohawk_prelookup_b2 = (ACPres05Idx_DataStore());
  }

  /* S-Function Block: <S407>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (RPM05In_DataStore()) = BaseEngineController_LS_B.s627_Sum1;
    (RPM05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s627_Sum1, (RPM05IdxArr_DataStore()), 5,
       (RPM05Idx_DataStore()));
    rtb_motohawk_prelookup_b2 = (RPM05Idx_DataStore());
  }

  /* UnitDelay: '<S420>/Unit Delay1' */
  rtb_UnitDelay_cf = BaseEngineController_LS_DWork.s420_UnitDelay1_DSTATE;

  /* Sum: '<S420>/Sum3' incorporates:
   *  Constant: '<S420>/Constant1'
   *  Product: '<S420>/Product2'
   *  Product: '<S420>/Product3'
   *  S-Function (motohawk_sfun_calibration): '<S420>/motohawk_calibration1'
   *  Sum: '<S420>/Sum2'
   */
  BaseEngineController_LS_B.s420_Sum3 = (1.0 - (PostO2DelagFiltConst_DataStore()))
    * rtb_UnitDelay_cf + (PostO2DelagFiltConst_DataStore()) *
    BaseEngineController_LS_B.s458_Gain;

  /* Sum: '<S418>/Sum3' incorporates:
   *  Constant: '<S418>/kPa Gauge to kPa absolute'
   */
  BaseEngineController_LS_B.s418_Sum3 = (BaseEngineController_LS_B.s662_Merge +
    100.0) - BaseEngineController_LS_B.s678_Merge;

  /* If: '<S460>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S460>/override_enable'
   */
  if ((GPS_YearUTC_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S460>/If' */

  /* If: '<S461>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S461>/override_enable'
   */
  if ((GPS_Altitude_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S461>/If' */

  /* If: '<S462>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S462>/override_enable'
   */
  if ((GPS_Course_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S462>/If' */

  /* If: '<S463>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S463>/override_enable'
   */
  if ((GPS_SatelliteCount_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S463>/If' */

  /* If: '<S464>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S464>/override_enable'
   */
  if ((GPS_MonthUTC_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S464>/If' */

  /* If: '<S465>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S465>/override_enable'
   */
  if ((GPS_DayUTC_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S465>/If' */

  /* If: '<S466>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S466>/override_enable'
   */
  if ((GPS_HoursUTC_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S466>/If' */

  /* If: '<S467>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S467>/override_enable'
   */
  if ((GPS_MinutesUTC_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S467>/If' */

  /* If: '<S468>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S468>/override_enable'
   */
  if ((GPS_SecondsUTC_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S468>/If' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S457>/Read CAN Message1' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_24478p5417;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_24478p5417,
      &messageObj);
    if ((BaseEngineController_LS_B.s457_ReadCANMessage1_o1 + 1) >
        BaseEngineController_LS_B.s457_ReadCANMessage1_o1)
      BaseEngineController_LS_B.s457_ReadCANMessage1_o1++;
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
      BaseEngineController_LS_B.s457_ReadCANMessage1_o2 = (real_T) tmp0;
      BaseEngineController_LS_B.s457_ReadCANMessage1_o3 = (real_T) tmp1;
      BaseEngineController_LS_B.s457_ReadCANMessage1_o1 = 0;
    }
  }

  /* If: '<S469>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S469>/override_enable'
   */
  if ((GPS_Latitude_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S469>/If' */

  /* If: '<S470>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S470>/override_enable'
   */
  if ((GPS_Longitude_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S470>/If' */

  /* If: '<S501>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S501>/override_enable'
   */
  if ((Bank1_OxygenConcentration_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S501>/If' */

  /* If: '<S502>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S502>/override_enable'
   */
  if ((Bank2_OxygenConcentration_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S502>/If' */

  /* If: '<S503>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S503>/override_enable'
   */
  if ((Bank2_SystemVolts_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S503>/If' */

  /* If: '<S504>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S504>/override_enable'
   */
  if ((Bank2_HeaterVolts_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S504>/If' */

  /* If: '<S505>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S505>/override_enable'
   */
  if ((Bank2_SensorDetectedStatus_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S505>/If' */

  /* If: '<S506>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S506>/override_enable'
   */
  if ((Bank2_UsingFreeAreCalState_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S506>/If' */

  /* If: '<S507>/If' incorporates:
   *  Inport: '<S548>/In1'
   *  Inport: '<S549>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S507>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S507>/override_enable'
   */
  if ((Bank2_DataValidState_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S507>/NewValue' incorporates:
     *  ActionPort: '<S548>/Action Port'
     */
    rtb_Product6_m = (Bank2_DataValidState_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S507>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S507>/OldValue' incorporates:
     *  ActionPort: '<S549>/Action Port'
     */
    rtb_Product6_m = BaseEngineController_LS_B.s458_ReadCANMessage1_o8;

    /* End of Outputs for SubSystem: '<S507>/OldValue' */
  }

  /* End of If: '<S507>/If' */

  /* If: '<S508>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S508>/override_enable'
   */
  if ((Bank2_SensorStatus_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S508>/If' */

  /* If: '<S509>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S509>/override_enable'
   */
  if ((Bank2_SensorFaultState_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S509>/If' */

  /* If: '<S510>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S510>/override_enable'
   */
  if ((Bank1_SystemVolts_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S510>/If' */

  /* If: '<S511>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S511>/override_enable'
   */
  if ((Bank1_HeaterVolts_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S511>/If' */

  /* If: '<S512>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S512>/override_enable'
   */
  if ((Bank1_SensorDetectedStatus_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S512>/If' */

  /* If: '<S513>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S513>/override_enable'
   */
  if ((Bank1_UsingFreeAreCalState_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S513>/If' */

  /* If: '<S514>/If' incorporates:
   *  Inport: '<S562>/In1'
   *  Inport: '<S563>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S514>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S514>/override_enable'
   */
  if ((Bank1_DataValidState_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S514>/NewValue' incorporates:
     *  ActionPort: '<S562>/Action Port'
     */
    rtb_Product7_i = (Bank1_DataValidState_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S514>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S514>/OldValue' incorporates:
     *  ActionPort: '<S563>/Action Port'
     */
    rtb_Product7_i = BaseEngineController_LS_B.s458_ReadCANMessage_o8;

    /* End of Outputs for SubSystem: '<S514>/OldValue' */
  }

  /* End of If: '<S514>/If' */

  /* If: '<S515>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S515>/override_enable'
   */
  if ((Bank1_SensorStatus_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S515>/If' */

  /* If: '<S516>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S516>/override_enable'
   */
  if ((Bank1_SensorFaultState_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S516>/If' */

  /* S-Function Block: <S692>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s692_motohawk_delta_time_DWORK1, NULL);
    rtb_Abs_co = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S692>/Product' incorporates:
   *  MinMax: '<S692>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S692>/motohawk_calibration'
   */
  rtb_Abs_co /= (rtb_Abs_co >= (SensVoltFilterConst_DataStore())) || rtIsNaN
    ((SensVoltFilterConst_DataStore())) ? rtb_Abs_co :
    (SensVoltFilterConst_DataStore());

  /* Logic: '<S635>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S635>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S635>/motohawk_fault_status4'
   */
  rtb_RelationalOperator5_fz = (IsFaultActive(103) || IsFaultActive(104));

  /* Logic: '<S635>/Logical Operator6' */
  rtb_LogicalOperator6_b = !rtb_RelationalOperator5_fz;

  /* Logic: '<S635>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S635>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S635>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_br = (IsFaultSuspected(103) || IsFaultSuspected(104));

  /* S-Function Block: <S454>/motohawk_ain3 Resource: SensVoltSensorPin */
  {
    extern NativeError_S SensVoltSensorPin_AnalogInput_Get(uint16_T *adc,
      uint16_T *status);
    SensVoltSensorPin_AnalogInput_Get
      (&BaseEngineController_LS_B.s454_motohawk_ain3, NULL);
  }

  /* DataTypeConversion: '<S635>/Data Type Conversion' */
  rtb_Abs_k = (real_T)BaseEngineController_LS_B.s454_motohawk_ain3;

  /* Product: '<S635>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S635>/motohawk_calibration4'
   */
  rtb_UnitDelay_cf = rtb_Abs_k * (SensVoltGain_DataStore());

  /* Sum: '<S635>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S635>/motohawk_calibration5'
   */
  BaseEngineController_LS_B.s635_Sum1 = rtb_UnitDelay_cf +
    (SensVoltOfst_DataStore());

  /* UnitDelay: '<S635>/Unit Delay1' */
  rtb_UnitDelay1_c = BaseEngineController_LS_DWork.s635_UnitDelay1_DSTATE;

  /* If: '<S635>/If' incorporates:
   *  Logic: '<S635>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_b && rtb_LogicalOperator1_br) {
    /* Outputs for IfAction SubSystem: '<S635>/If Action Subsystem' incorporates:
     *  ActionPort: '<S693>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay1_c, &rtb_Merge_ht);

    /* End of Outputs for SubSystem: '<S635>/If Action Subsystem' */
  } else if (rtb_RelationalOperator5_fz) {
    /* Outputs for IfAction SubSystem: '<S635>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S694>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((SensVoltDfltValue_DataStore()),
      &rtb_Merge_ht);

    /* End of Outputs for SubSystem: '<S635>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S635>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S695>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      (BaseEngineController_LS_B.s635_Sum1, &rtb_Merge_ht);

    /* End of Outputs for SubSystem: '<S635>/If Action Subsystem2' */
  }

  /* End of If: '<S635>/If' */

  /* Sum: '<S697>/Sum1' incorporates:
   *  Constant: '<S697>/Constant'
   *  Product: '<S697>/Product'
   *  Product: '<S697>/Product1'
   *  Sum: '<S697>/Sum'
   *  UnitDelay: '<S697>/Unit Delay'
   */
  rtb_Sum1_m3 = (1.0 - rtb_Abs_co) *
    BaseEngineController_LS_DWork.s697_UnitDelay_DSTATE + rtb_Merge_ht *
    rtb_Abs_co;

  /* If: '<S696>/If' incorporates:
   *  Inport: '<S698>/In1'
   *  Inport: '<S699>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S696>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S696>/override_enable'
   */
  if ((SensVolt_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S696>/NewValue' incorporates:
     *  ActionPort: '<S698>/Action Port'
     */
    BaseEngineController_LS_B.s696_Merge = (SensVolt_new_DataStore());

    /* End of Outputs for SubSystem: '<S696>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S696>/OldValue' incorporates:
     *  ActionPort: '<S699>/Action Port'
     */
    BaseEngineController_LS_B.s696_Merge = rtb_Sum1_m3;

    /* End of Outputs for SubSystem: '<S696>/OldValue' */
  }

  /* End of If: '<S696>/If' */

  /* Outputs for Enabled SubSystem: '<S449>/Triggered Subsystem' incorporates:
   *  EnablePort: '<S450>/Enable'
   */
  if (rtb_RelationalOperator_jv) {
    /* Outputs for Function Call SubSystem: '<S11>/Diagnostics' */

    /* S-Function Block: <S335>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s335_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_nr = ((real_T) delta) * 0.000001;
    }

    /* RelationalOperator: '<S333>/RelOp' incorporates:
     *  Constant: '<S333>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S324>/motohawk_data_read'
     */
    rtb_BelowLoTarget_j = (((uint8_T)EngineState_DataStore()) == 3);

    /* Switch: '<S335>/Switch' incorporates:
     *  Constant: '<S335>/Constant'
     *  Logic: '<S324>/Logical Operator'
     *  RelationalOperator: '<S324>/Relational Operator'
     *  S-Function (motohawk_sfun_calibration): '<S324>/motohawk_calibration'
     *  S-Function (motohawk_sfun_data_read): '<S335>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S335>/motohawk_delta_time'
     *  Sum: '<S335>/Sum'
     */
    if (rtb_BelowLoTarget_j && (BaseEngineController_LS_B.s641_Merge >=
         (ACHighPressureDisable_DataStore()))) {
      rtb_UnitDelay_cf = rtb_motohawk_delta_time_nr +
        AChighPressureTimer_DataStore();
    } else {
      rtb_UnitDelay_cf = 0.0;
    }

    /* End of Switch: '<S335>/Switch' */
    /* RelationalOperator: '<S324>/Relational Operator5' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S324>/motohawk_calibration3'
     */
    rtb_RelationalOperator5_o = ((rtb_UnitDelay_cf >
      (ACHighPressureTime_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S324>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: ACChargeHigh_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(0, rtb_RelationalOperator5_o);
      UpdateFault(0);
    }

    /* S-Function Block: <S334>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s334_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_lw = ((real_T) delta) * 0.000001;
    }

    /* Switch: '<S334>/Switch' incorporates:
     *  Constant: '<S334>/Constant'
     *  Logic: '<S324>/Logical Operator1'
     *  RelationalOperator: '<S324>/Relational Operator1'
     *  S-Function (motohawk_sfun_calibration): '<S324>/motohawk_calibration2'
     *  S-Function (motohawk_sfun_data_read): '<S334>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S334>/motohawk_delta_time'
     *  Sum: '<S334>/Sum'
     */
    if (rtb_BelowLoTarget_j && (BaseEngineController_LS_B.s641_Merge <=
         (ACLowPressureDisable_DataStore())) &&
        BaseEngineController_LS_B.s135_AC) {
      rtb_Switch1_f = rtb_motohawk_delta_time_lw + ACLowPressureTimer_DataStore();
    } else {
      rtb_Switch1_f = 0.0;
    }

    /* End of Switch: '<S334>/Switch' */
    /* Logic: '<S324>/Logical Operator2' incorporates:
     *  RelationalOperator: '<S324>/Relational Operator3'
     *  S-Function (motohawk_sfun_calibration): '<S324>/motohawk_calibration1'
     */
    rtb_LogicalOperator2_md = (((rtb_Switch1_f > (ACLowPressureTime_DataStore()))
      && BaseEngineController_LS_B.s135_AC));

    /* S-Function (motohawk_sfun_fault_def): '<S324>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: ACChargeLow_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(1, rtb_LogicalOperator2_md);
      UpdateFault(1);
    }

    /* Saturate: '<S334>/Saturation' */
    rtb_Saturation_oy = rtb_Switch1_f >= 16000.0 ? 16000.0 : rtb_Switch1_f <=
      0.0 ? 0.0 : rtb_Switch1_f;

    /* S-Function (motohawk_sfun_data_write): '<S334>/motohawk_data_write' */
    /* Write to Data Storage as scalar: ACLowPressureTimer */
    {
      ACLowPressureTimer_DataStore() = rtb_Saturation_oy;
    }

    /* Saturate: '<S335>/Saturation' */
    rtb_Saturation_d = rtb_UnitDelay_cf >= 16000.0 ? 16000.0 : rtb_UnitDelay_cf <=
      0.0 ? 0.0 : rtb_UnitDelay_cf;

    /* S-Function (motohawk_sfun_data_write): '<S335>/motohawk_data_write' */
    /* Write to Data Storage as scalar: AChighPressureTimer */
    {
      AChighPressureTimer_DataStore() = rtb_Saturation_d;
    }

    /* S-Function Block: <S338>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s338_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_fj = ((real_T) delta) * 0.000001;
    }

    /* RelationalOperator: '<S336>/RelOp' incorporates:
     *  Constant: '<S336>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S325>/motohawk_data_read'
     */
    rtb_BelowLoTarget_j = (((uint8_T)EngineState_DataStore()) == 3);

    /* Gain: '<S325>/kPa to PSI' */
    rtb_Switch1_f = 0.145038 * BaseEngineController_LS_B.s670_Merge;

    /* Switch: '<S338>/Switch' incorporates:
     *  Constant: '<S338>/Constant'
     *  Logic: '<S325>/Logical Operator'
     *  RelationalOperator: '<S325>/Relational Operator'
     *  S-Function (motohawk_sfun_calibration): '<S325>/motohawk_calibration'
     *  S-Function (motohawk_sfun_data_read): '<S338>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S338>/motohawk_delta_time'
     *  Sum: '<S338>/Sum'
     */
    if (rtb_BelowLoTarget_j && (rtb_Switch1_f >= (SoftOverBoostLimit_DataStore())))
    {
      rtb_UnitDelay_cf = rtb_motohawk_delta_time_fj +
        SoftOverBoostTimer_DataStore();
    } else {
      rtb_UnitDelay_cf = 0.0;
    }

    /* End of Switch: '<S338>/Switch' */
    /* RelationalOperator: '<S325>/Relational Operator5' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S325>/motohawk_calibration3'
     */
    rtb_RelationalOperator5_f = ((rtb_UnitDelay_cf >
      (SoftOverBoostTime_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S325>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: SoftOverBoost_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(105, rtb_RelationalOperator5_f);
      UpdateFault(105);
    }

    /* S-Function Block: <S337>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s337_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_i0 = ((real_T) delta) * 0.000001;
    }

    /* Switch: '<S337>/Switch' incorporates:
     *  Constant: '<S337>/Constant'
     *  Logic: '<S325>/Logical Operator1'
     *  RelationalOperator: '<S325>/Relational Operator1'
     *  S-Function (motohawk_sfun_calibration): '<S325>/motohawk_calibration1'
     *  S-Function (motohawk_sfun_data_read): '<S337>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S337>/motohawk_delta_time'
     *  Sum: '<S337>/Sum'
     */
    if (rtb_BelowLoTarget_j && (rtb_Switch1_f >= (HardOverBoostLimit_DataStore())))
    {
      rtb_Switch1_f = rtb_motohawk_delta_time_i0 + HardOverBoostTimer_DataStore();
    } else {
      rtb_Switch1_f = 0.0;
    }

    /* End of Switch: '<S337>/Switch' */
    /* RelationalOperator: '<S325>/Relational Operator3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S325>/motohawk_calibration4'
     */
    rtb_RelationalOperator3_mn = ((rtb_Switch1_f > (HardOverBoostTime_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S325>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: HardOverBoost_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(70, rtb_RelationalOperator3_mn);
      UpdateFault(70);
    }

    /* S-Function Block: <S339>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s339_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_k = ((real_T) delta) * 0.000001;
    }

    /* Switch: '<S339>/Switch' incorporates:
     *  Constant: '<S339>/Constant'
     *  Logic: '<S325>/Logical Operator2'
     *  RelationalOperator: '<S325>/Relational Operator2'
     *  S-Function (motohawk_sfun_calibration): '<S325>/motohawk_calibration2'
     *  S-Function (motohawk_sfun_data_read): '<S339>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S339>/motohawk_delta_time'
     *  Sum: '<S339>/Sum'
     */
    if (rtb_BelowLoTarget_j && (BaseEngineController_LS_B.s135_WASTEGATE >=
         (WastegateLossOfControl_DataStore()))) {
      rtb_motohawk_interpolation_1d3_a = rtb_motohawk_delta_time_k +
        WastegateTimer_DataStore();
    } else {
      rtb_motohawk_interpolation_1d3_a = 0.0;
    }

    /* End of Switch: '<S339>/Switch' */
    /* RelationalOperator: '<S325>/Relational Operator4' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S325>/motohawk_calibration5'
     */
    rtb_RelationalOperator4_f = ((rtb_motohawk_interpolation_1d3_a >
      (WastegateTime_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S325>/motohawk_fault_def3' */

    /* Set Fault Suspected Status: Wastegate_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(124, rtb_RelationalOperator4_f);
      UpdateFault(124);
    }

    /* Saturate: '<S337>/Saturation' */
    rtb_Saturation_nn = rtb_Switch1_f >= 16000.0 ? 16000.0 : rtb_Switch1_f <=
      0.0 ? 0.0 : rtb_Switch1_f;

    /* S-Function (motohawk_sfun_data_write): '<S337>/motohawk_data_write' */
    /* Write to Data Storage as scalar: HardOverBoostTimer */
    {
      HardOverBoostTimer_DataStore() = rtb_Saturation_nn;
    }

    /* Saturate: '<S338>/Saturation' */
    rtb_Saturation_a0 = rtb_UnitDelay_cf >= 16000.0 ? 16000.0 : rtb_UnitDelay_cf
      <= 0.0 ? 0.0 : rtb_UnitDelay_cf;

    /* S-Function (motohawk_sfun_data_write): '<S338>/motohawk_data_write' */
    /* Write to Data Storage as scalar: SoftOverBoostTimer */
    {
      SoftOverBoostTimer_DataStore() = rtb_Saturation_a0;
    }

    /* Saturate: '<S339>/Saturation' */
    rtb_Saturation_f = rtb_motohawk_interpolation_1d3_a >= 16000.0 ? 16000.0 :
      rtb_motohawk_interpolation_1d3_a <= 0.0 ? 0.0 :
      rtb_motohawk_interpolation_1d3_a;

    /* S-Function (motohawk_sfun_data_write): '<S339>/motohawk_data_write' */
    /* Write to Data Storage as scalar: WastegateTimer */
    {
      WastegateTimer_DataStore() = rtb_Saturation_f;
    }

    /* S-Function Block: <S345>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s345_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_eae = ((real_T) delta) * 0.000001;
    }

    /* Product: '<S328>/Product' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S328>/motohawk_data_read'
     *  S-Function (motohawk_sfun_fault_status): '<S328>/motohawk_fault_status2'
     */
    rtb_Gain5 = (uint8_T)(IsFaultActive(23) ? ((uint8_T)Bank2_Enable_DataStore())
                          : 0);

    /* Product: '<S328>/Product1' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S328>/motohawk_data_read'
     *  S-Function (motohawk_sfun_fault_status): '<S328>/motohawk_fault_status3'
     */
    rtb_Gain4 = (uint8_T)(IsFaultActive(24) ? ((uint8_T)Bank2_Enable_DataStore())
                          : 0);

    /* Logic: '<S328>/Logical Operator3' incorporates:
     *  Logic: '<S328>/Logical Operator1'
     *  S-Function (motohawk_sfun_fault_status): '<S328>/motohawk_fault_status'
     *  S-Function (motohawk_sfun_fault_status): '<S328>/motohawk_fault_status1'
     */
    rtb_LogicalOperator6_b = !((rtb_Gain5 != 0) || (rtb_Gain4 != 0) ||
      IsFaultActive(21) || IsFaultActive(22) ||
      BaseEngineController_LS_B.s584_Merge);

    /* Switch: '<S345>/Switch' incorporates:
     *  Constant: '<S345>/Constant'
     *  Logic: '<S328>/Logical Operator4'
     *  RelationalOperator: '<S328>/Relational Operator1'
     *  S-Function (motohawk_sfun_calibration): '<S328>/motohawk_calibration3'
     *  S-Function (motohawk_sfun_data_read): '<S345>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S345>/motohawk_delta_time'
     *  Sum: '<S345>/Sum'
     */
    if (rtb_LogicalOperator6_b && (BaseEngineController_LS_B.s458_Gain <
         (LeanProtect_Threshold_DataStore()))) {
      rtb_motohawk_interpolation_1d3_a = rtb_motohawk_delta_time_eae +
        LeanProect_Tmr_DataStore();
    } else {
      rtb_motohawk_interpolation_1d3_a = 0.0;
    }

    /* End of Switch: '<S345>/Switch' */
    /* RelationalOperator: '<S328>/Relational Operator5' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S328>/motohawk_calibration1'
     */
    rtb_RelationalOperator5_ok = ((rtb_motohawk_interpolation_1d3_a >
      (LeanProtec_TmrThresh_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S328>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: LeanProtect_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(86, rtb_RelationalOperator5_ok);
      UpdateFault(86);
    }

    /* Saturate: '<S345>/Saturation' */
    rtb_Saturation_p = rtb_motohawk_interpolation_1d3_a >= 16000.0 ? 16000.0 :
      rtb_motohawk_interpolation_1d3_a <= 0.0 ? 0.0 :
      rtb_motohawk_interpolation_1d3_a;

    /* S-Function (motohawk_sfun_data_write): '<S345>/motohawk_data_write' */
    /* Write to Data Storage as scalar: LeanProect_Tmr */
    {
      LeanProect_Tmr_DataStore() = rtb_Saturation_p;
    }

    /* S-Function Block: <S349>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s349_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_ij = ((real_T) delta) * 0.000001;
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
    rtb_BelowLoTarget_j = !(IsFaultActive(113) || IsFaultActive(119) ||
      IsFaultActive(114) || IsFaultActive(120) || IsFaultActive(89) ||
      IsFaultActive(90));

    /* RelationalOperator: '<S348>/RelOp' incorporates:
     *  Constant: '<S348>/Constant'
     */
    rtb_RelOp_mp = (BaseEngineController_LS_B.s438_State == 3);

    /* RelationalOperator: '<S330>/Relational Operator3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S330>/motohawk_calibration2'
     */
    rtb_LogicalOperator6_b = (BaseEngineController_LS_B.s422_Switch2 <
      (MAP_IR_TPS_CL_DataStore()));

    /* Switch: '<S349>/Switch' incorporates:
     *  Constant: '<S349>/Constant'
     *  Logic: '<S330>/Logical Operator4'
     *  RelationalOperator: '<S330>/Relational Operator4'
     *  S-Function (motohawk_sfun_calibration): '<S330>/motohawk_calibration4'
     *  S-Function (motohawk_sfun_data_read): '<S349>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S349>/motohawk_delta_time'
     *  Sum: '<S349>/Sum'
     */
    if (rtb_BelowLoTarget_j && rtb_RelOp_mp && rtb_LogicalOperator6_b &&
        (BaseEngineController_LS_B.s670_Merge > (MAP_IR_HI_DataStore()))) {
      rtb_motohawk_interpolation_1d3_a = rtb_motohawk_delta_time_ij +
        MapHiFaultTimer_DataStore();
    } else {
      rtb_motohawk_interpolation_1d3_a = 0.0;
    }

    /* End of Switch: '<S349>/Switch' */

    /* RelationalOperator: '<S330>/Relational Operator5' incorporates:
     *  Constant: '<S330>/Constant'
     */
    rtb_RelationalOperator5_j = ((rtb_motohawk_interpolation_1d3_a > 5.0));

    /* S-Function (motohawk_sfun_fault_def): '<S330>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: MAP_IR_HI */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(93, rtb_RelationalOperator5_j);
      UpdateFault(93);
    }

    /* S-Function Block: <S350>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s350_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_hv = ((real_T) delta) * 0.000001;
    }

    /* RelationalOperator: '<S330>/Relational Operator1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S330>/motohawk_calibration6'
     */
    rtb_LogicalOperator6_b = (BaseEngineController_LS_B.s422_Switch2 >
      (MAP_IR_TPS_OP_DataStore()));

    /* Switch: '<S350>/Switch' incorporates:
     *  Constant: '<S350>/Constant'
     *  Logic: '<S330>/Logical Operator2'
     *  RelationalOperator: '<S330>/Relational Operator2'
     *  S-Function (motohawk_sfun_calibration): '<S330>/motohawk_calibration5'
     *  S-Function (motohawk_sfun_data_read): '<S350>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S350>/motohawk_delta_time'
     *  Sum: '<S350>/Sum'
     */
    if (rtb_BelowLoTarget_j && rtb_RelOp_mp && rtb_LogicalOperator6_b &&
        (BaseEngineController_LS_B.s670_Merge < (MAP_IR_LO_DataStore()))) {
      rtb_Switch1_f = rtb_motohawk_delta_time_hv + MapLoFaultTimer_DataStore();
    } else {
      rtb_Switch1_f = 0.0;
    }

    /* End of Switch: '<S350>/Switch' */

    /* RelationalOperator: '<S330>/Relational Operator6' incorporates:
     *  Constant: '<S330>/Constant1'
     */
    rtb_RelationalOperator6 = ((rtb_Switch1_f > 5.0));

    /* S-Function (motohawk_sfun_fault_def): '<S330>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: MAP_IR_LO */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(94, rtb_RelationalOperator6);
      UpdateFault(94);
    }

    /* S-Function Block: <S351>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s351_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_hc = ((real_T) delta) * 0.000001;
    }

    /* RelationalOperator: '<S330>/Relational Operator7' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S330>/motohawk_calibration8'
     */
    rtb_LogicalOperator6_b = (BaseEngineController_LS_B.s422_Switch2 <
      (MAP_TPS_STUCK_DataStore()));

    /* Sum: '<S330>/Add' */
    rtb_UnitDelay_cf = BaseEngineController_LS_B.s378_Sum -
      BaseEngineController_LS_B.s670_Merge;

    /* Switch: '<S351>/Switch' incorporates:
     *  Constant: '<S351>/Constant'
     *  Logic: '<S330>/Logical Operator5'
     *  RelationalOperator: '<S330>/Relational Operator8'
     *  S-Function (motohawk_sfun_calibration): '<S330>/motohawk_calibration7'
     *  S-Function (motohawk_sfun_data_read): '<S351>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S351>/motohawk_delta_time'
     *  Sum: '<S351>/Sum'
     */
    if (rtb_BelowLoTarget_j && rtb_RelOp_mp && rtb_LogicalOperator6_b &&
        (rtb_UnitDelay_cf < (MAP_STUCK_DataStore()))) {
      rtb_UnitDelay_cf = rtb_motohawk_delta_time_hc +
        MapStickFaultTimer_DataStore();
    } else {
      rtb_UnitDelay_cf = 0.0;
    }

    /* End of Switch: '<S351>/Switch' */

    /* RelationalOperator: '<S330>/Relational Operator9' incorporates:
     *  Constant: '<S330>/Constant2'
     */
    rtb_RelationalOperator9_g = ((rtb_UnitDelay_cf > 5.0));

    /* S-Function (motohawk_sfun_fault_def): '<S330>/motohawk_fault_def3' */

    /* Set Fault Suspected Status: MAP_STICKING */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(95, rtb_RelationalOperator9_g);
      UpdateFault(95);
    }

    /* Saturate: '<S349>/Saturation' */
    rtb_Saturation_j = rtb_motohawk_interpolation_1d3_a >= 16000.0 ? 16000.0 :
      rtb_motohawk_interpolation_1d3_a <= 0.0 ? 0.0 :
      rtb_motohawk_interpolation_1d3_a;

    /* S-Function (motohawk_sfun_data_write): '<S349>/motohawk_data_write' */
    /* Write to Data Storage as scalar: MapHiFaultTimer */
    {
      MapHiFaultTimer_DataStore() = rtb_Saturation_j;
    }

    /* Saturate: '<S350>/Saturation' */
    rtb_Saturation_em = rtb_Switch1_f >= 16000.0 ? 16000.0 : rtb_Switch1_f <=
      0.0 ? 0.0 : rtb_Switch1_f;

    /* S-Function (motohawk_sfun_data_write): '<S350>/motohawk_data_write' */
    /* Write to Data Storage as scalar: MapLoFaultTimer */
    {
      MapLoFaultTimer_DataStore() = rtb_Saturation_em;
    }

    /* Saturate: '<S351>/Saturation' */
    rtb_Saturation_i = rtb_UnitDelay_cf >= 16000.0 ? 16000.0 : rtb_UnitDelay_cf <=
      0.0 ? 0.0 : rtb_UnitDelay_cf;

    /* S-Function (motohawk_sfun_data_write): '<S351>/motohawk_data_write' */
    /* Write to Data Storage as scalar: MapStickFaultTimer */
    {
      MapStickFaultTimer_DataStore() = rtb_Saturation_i;
    }

    /* RelationalOperator: '<S354>/LT' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S352>/motohawk_calibration'
     */
    rtb_RelOp_mp = (BaseEngineController_LS_B.s453_RPMInst >=
                    (BaseRevLimit_DataStore()));

    /* Sum: '<S352>/Sum2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S352>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S352>/motohawk_calibration1'
     */
    rtb_UnitDelay_cf = (BaseRevLimit_DataStore()) - (RevLimitHyst_DataStore());

    /* RelationalOperator: '<S354>/LT1' */
    rtb_BelowLoTarget_j = (BaseEngineController_LS_B.s453_RPMInst <=
      rtb_UnitDelay_cf);

    /* CombinatorialLogic: '<S357>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_RelOp_mp != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_j != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_l[0] =
        BaseEngineController_LS_ConstP.pooled905[rowidx];
      rtb_CombinatorialLogic_l[1] =
        BaseEngineController_LS_ConstP.pooled905[rowidx + 4];
    }

    /* Switch: '<S357>/Switch1' incorporates:
     *  UnitDelay: '<S357>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_l[1]) {
      rtb_Switch1_mj = rtb_CombinatorialLogic_l[0];
    } else {
      rtb_Switch1_mj = BaseEngineController_LS_DWork.s357_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S357>/Switch1' */
    /* Sum: '<S352>/Sum3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S352>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S352>/motohawk_calibration2'
     */
    rtb_motohawk_interpolation_1d3_a = (BaseRevLimit_DataStore()) +
      (MediumRevOffset_DataStore());

    /* RelationalOperator: '<S355>/LT' */
    rtb_RelOp_mp = (BaseEngineController_LS_B.s453_RPMInst >=
                    rtb_motohawk_interpolation_1d3_a);

    /* Sum: '<S352>/Sum1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S352>/motohawk_calibration1'
     */
    rtb_Switch1_f = rtb_motohawk_interpolation_1d3_a - (RevLimitHyst_DataStore());

    /* RelationalOperator: '<S355>/LT1' */
    rtb_BelowLoTarget_j = (BaseEngineController_LS_B.s453_RPMInst <=
      rtb_Switch1_f);

    /* CombinatorialLogic: '<S358>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_RelOp_mp != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_j != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_l[0] =
        BaseEngineController_LS_ConstP.pooled905[rowidx];
      rtb_CombinatorialLogic_l[1] =
        BaseEngineController_LS_ConstP.pooled905[rowidx + 4];
    }

    /* Switch: '<S358>/Switch1' incorporates:
     *  UnitDelay: '<S358>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_l[1]) {
      rtb_Switch1_e = rtb_CombinatorialLogic_l[0];
    } else {
      rtb_Switch1_e = BaseEngineController_LS_DWork.s358_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S358>/Switch1' */

    /* Switch: '<S355>/Switch2' incorporates:
     *  Logic: '<S355>/Logical Operator'
     */
    if (rtb_Switch1_e) {
      rtb_motohawk_interpolation_1d3_a = rtb_Switch1_f;
    }

    /* End of Switch: '<S355>/Switch2' */

    /* RelationalOperator: '<S352>/Overspeed1' */
    rtb_LogicalOperator6_b = (BaseEngineController_LS_B.s453_RPMInst >
      rtb_motohawk_interpolation_1d3_a);

    /* Logic: '<S331>/Logical Operator' */
    rtb_RelOp_mp = !BaseEngineController_LS_B.s602_Merge;

    /* RelationalOperator: '<S360>/LT' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S353>/motohawk_calibration'
     */
    rtb_BelowLoTarget_j = (BaseEngineController_LS_B.s453_RPMInst >=
      (TwoStepRevLimit_DataStore()));

    /* Sum: '<S353>/Sum2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S353>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S353>/motohawk_calibration1'
     */
    rtb_UnitDelay_ju = (TwoStepRevLimit_DataStore()) -
      (TwoStepRevLimitHyst_DataStore());

    /* RelationalOperator: '<S360>/LT1' */
    rtb_LogicalOperator3_cj = (BaseEngineController_LS_B.s453_RPMInst <=
      rtb_UnitDelay_ju);

    /* CombinatorialLogic: '<S363>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_j != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_LogicalOperator3_cj != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_l[0] =
        BaseEngineController_LS_ConstP.pooled905[rowidx];
      rtb_CombinatorialLogic_l[1] =
        BaseEngineController_LS_ConstP.pooled905[rowidx + 4];
    }

    /* Switch: '<S363>/Switch1' incorporates:
     *  UnitDelay: '<S363>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_l[1]) {
      rtb_Switch1_l = rtb_CombinatorialLogic_l[0];
    } else {
      rtb_Switch1_l = BaseEngineController_LS_DWork.s363_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S363>/Switch1' */
    /* Sum: '<S353>/Sum3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S353>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S353>/motohawk_calibration2'
     */
    rtb_motohawk_interpolation_1d3_a = (TwoStepRevLimit_DataStore()) +
      (TwoStepMediumRevOffset_DataStore());

    /* RelationalOperator: '<S361>/LT' */
    rtb_LogicalOperator3_cj = (BaseEngineController_LS_B.s453_RPMInst >=
      rtb_motohawk_interpolation_1d3_a);

    /* Sum: '<S353>/Sum1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S353>/motohawk_calibration1'
     */
    rtb_Switch1_f = rtb_motohawk_interpolation_1d3_a -
      (TwoStepRevLimitHyst_DataStore());

    /* RelationalOperator: '<S361>/LT1' */
    rtb_BelowLoTarget_j = (BaseEngineController_LS_B.s453_RPMInst <=
      rtb_Switch1_f);

    /* CombinatorialLogic: '<S364>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_LogicalOperator3_cj != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_j != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_l[0] =
        BaseEngineController_LS_ConstP.pooled905[rowidx];
      rtb_CombinatorialLogic_l[1] =
        BaseEngineController_LS_ConstP.pooled905[rowidx + 4];
    }

    /* Switch: '<S364>/Switch1' incorporates:
     *  UnitDelay: '<S364>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_l[1]) {
      rtb_Switch1_ow = rtb_CombinatorialLogic_l[0];
    } else {
      rtb_Switch1_ow = BaseEngineController_LS_DWork.s364_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S364>/Switch1' */

    /* Switch: '<S361>/Switch2' incorporates:
     *  Logic: '<S361>/Logical Operator'
     */
    if (rtb_Switch1_ow) {
      rtb_motohawk_interpolation_1d3_a = rtb_Switch1_f;
    }

    /* End of Switch: '<S361>/Switch2' */

    /* RelationalOperator: '<S353>/Overspeed1' */
    rtb_LogicalOperator1_br = (BaseEngineController_LS_B.s453_RPMInst >
      rtb_motohawk_interpolation_1d3_a);

    /* Switch: '<S331>/Switch' incorporates:
     *  Logic: '<S352>/Logical Operator3'
     *  Logic: '<S352>/Logical Operator4'
     *  Logic: '<S353>/Logical Operator3'
     *  Logic: '<S353>/Logical Operator4'
     *  RelationalOperator: '<S352>/Overspeed'
     *  RelationalOperator: '<S353>/Overspeed'
     */
    if (rtb_RelOp_mp) {
      /* Switch: '<S354>/Switch2' incorporates:
       *  Logic: '<S354>/Logical Operator'
       *  S-Function (motohawk_sfun_calibration): '<S352>/motohawk_calibration'
       */
      if (!rtb_Switch1_mj) {
        rtb_UnitDelay_cf = (BaseRevLimit_DataStore());
      }

      /* End of Switch: '<S354>/Switch2' */
      rtb_LogicalOperator3_cj = ((BaseEngineController_LS_B.s453_RPMInst >
        rtb_UnitDelay_cf) && (!rtb_LogicalOperator6_b));
    } else {
      /* Switch: '<S360>/Switch2' incorporates:
       *  Logic: '<S360>/Logical Operator'
       *  S-Function (motohawk_sfun_calibration): '<S353>/motohawk_calibration'
       */
      if (!rtb_Switch1_l) {
        rtb_UnitDelay_ju = (TwoStepRevLimit_DataStore());
      }

      /* End of Switch: '<S360>/Switch2' */
      rtb_LogicalOperator3_cj = ((BaseEngineController_LS_B.s453_RPMInst >
        rtb_UnitDelay_ju) && (!rtb_LogicalOperator1_br));
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

    /* Sum: '<S352>/Sum5' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S352>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S352>/motohawk_calibration4'
     */
    rtb_motohawk_interpolation_1d3_a = (BaseRevLimit_DataStore()) +
      (HardRevOffset_DataStore());

    /* RelationalOperator: '<S356>/LT' */
    rtb_LogicalOperator3_cj = (BaseEngineController_LS_B.s453_RPMInst >=
      rtb_motohawk_interpolation_1d3_a);

    /* Sum: '<S352>/Sum4' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S352>/motohawk_calibration1'
     */
    rtb_Switch1_f = rtb_motohawk_interpolation_1d3_a - (RevLimitHyst_DataStore());

    /* RelationalOperator: '<S356>/LT1' */
    rtb_BelowLoTarget_j = (BaseEngineController_LS_B.s453_RPMInst <=
      rtb_Switch1_f);

    /* CombinatorialLogic: '<S359>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_LogicalOperator3_cj != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_j != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_l[0] =
        BaseEngineController_LS_ConstP.pooled905[rowidx];
      rtb_CombinatorialLogic_l[1] =
        BaseEngineController_LS_ConstP.pooled905[rowidx + 4];
    }

    /* Switch: '<S359>/Switch1' incorporates:
     *  UnitDelay: '<S359>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_l[1]) {
      rtb_Switch1_l3 = rtb_CombinatorialLogic_l[0];
    } else {
      rtb_Switch1_l3 = BaseEngineController_LS_DWork.s359_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S359>/Switch1' */

    /* Switch: '<S356>/Switch2' incorporates:
     *  Logic: '<S356>/Logical Operator'
     */
    if (rtb_Switch1_l3) {
      rtb_motohawk_interpolation_1d3_a = rtb_Switch1_f;
    }

    /* End of Switch: '<S356>/Switch2' */

    /* RelationalOperator: '<S352>/Overspeed2' */
    rtb_RelationalOperator3_bp = (BaseEngineController_LS_B.s453_RPMInst >
      rtb_motohawk_interpolation_1d3_a);

    /* Sum: '<S353>/Sum5' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S353>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S353>/motohawk_calibration4'
     */
    rtb_motohawk_interpolation_1d3_a = (TwoStepRevLimit_DataStore()) +
      (TwoStepHardRevOffset_DataStore());

    /* RelationalOperator: '<S362>/LT' */
    rtb_LogicalOperator3_cj = (BaseEngineController_LS_B.s453_RPMInst >=
      rtb_motohawk_interpolation_1d3_a);

    /* Sum: '<S353>/Sum4' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S353>/motohawk_calibration1'
     */
    rtb_Switch1_f = rtb_motohawk_interpolation_1d3_a -
      (TwoStepRevLimitHyst_DataStore());

    /* RelationalOperator: '<S362>/LT1' */
    rtb_BelowLoTarget_j = (BaseEngineController_LS_B.s453_RPMInst <=
      rtb_Switch1_f);

    /* CombinatorialLogic: '<S365>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_LogicalOperator3_cj != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_j != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_l[0] =
        BaseEngineController_LS_ConstP.pooled905[rowidx];
      rtb_CombinatorialLogic_l[1] =
        BaseEngineController_LS_ConstP.pooled905[rowidx + 4];
    }

    /* Switch: '<S365>/Switch1' incorporates:
     *  UnitDelay: '<S365>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_l[1]) {
      rtb_Switch1_bv = rtb_CombinatorialLogic_l[0];
    } else {
      rtb_Switch1_bv = BaseEngineController_LS_DWork.s365_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S365>/Switch1' */

    /* Switch: '<S362>/Switch2' incorporates:
     *  Logic: '<S362>/Logical Operator'
     */
    if (rtb_Switch1_bv) {
      rtb_motohawk_interpolation_1d3_a = rtb_Switch1_f;
    }

    /* End of Switch: '<S362>/Switch2' */

    /* RelationalOperator: '<S353>/Overspeed2' */
    rtb_RelOp_pu = (BaseEngineController_LS_B.s453_RPMInst >
                    rtb_motohawk_interpolation_1d3_a);

    /* Switch: '<S331>/Switch1' incorporates:
     *  Logic: '<S352>/Logical Operator5'
     *  Logic: '<S352>/Logical Operator6'
     *  Logic: '<S353>/Logical Operator5'
     *  Logic: '<S353>/Logical Operator6'
     */
    if (rtb_RelOp_mp) {
      rtb_LogicalOperator3_cj = (rtb_LogicalOperator6_b &&
        (!rtb_RelationalOperator3_bp));
    } else {
      rtb_LogicalOperator3_cj = (rtb_LogicalOperator1_br && (!rtb_RelOp_pu));
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

    /* S-Function Block: <S367>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s367_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_ks = ((real_T) delta) * 0.000001;
    }

    /* Logic: '<S332>/Logical Operator3' incorporates:
     *  Logic: '<S332>/Logical Operator1'
     *  S-Function (motohawk_sfun_fault_status): '<S332>/motohawk_fault_status'
     *  S-Function (motohawk_sfun_fault_status): '<S332>/motohawk_fault_status1'
     */
    rtb_LogicalOperator3_cj = !(IsFaultActive(60) || IsFaultActive(61) ||
      BaseEngineController_LS_B.s584_Merge);

    /* Sum: '<S332>/Sum3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S332>/motohawk_calibration2'
     */
    rtb_motohawk_interpolation_1d3_a = BaseEngineController_LS_B.s418_Sum3 -
      (FuelPres_DeltaTarget_DataStore());

    /* Switch: '<S367>/Switch' incorporates:
     *  Constant: '<S367>/Constant'
     *  Gain: '<S332>/invert'
     *  Logic: '<S332>/Logical Operator4'
     *  RelationalOperator: '<S332>/Relational Operator1'
     *  S-Function (motohawk_sfun_calibration): '<S332>/motohawk_calibration3'
     *  S-Function (motohawk_sfun_data_read): '<S367>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S367>/motohawk_delta_time'
     *  Sum: '<S367>/Sum'
     */
    if (rtb_LogicalOperator3_cj && (rtb_motohawk_interpolation_1d3_a <
         -(FuelPres_DeltaTolerance_DataStore()))) {
      rtb_Switch1_f = rtb_motohawk_delta_time_ks +
        FuelPresLow_FaultTimer_DataStore();
    } else {
      rtb_Switch1_f = 0.0;
    }

    /* End of Switch: '<S367>/Switch' */
    /* RelationalOperator: '<S332>/Relational Operator5' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S332>/motohawk_calibration1'
     */
    rtb_RelationalOperator5_aj = ((rtb_Switch1_f >
      (FuelPres_FaultTimer_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S332>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: FuelPresLow_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(59, rtb_RelationalOperator5_aj);
      UpdateFault(59);
    }

    /* S-Function Block: <S366>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s366_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_dj = ((real_T) delta) * 0.000001;
    }

    /* Switch: '<S366>/Switch' incorporates:
     *  Constant: '<S366>/Constant'
     *  Logic: '<S332>/Logical Operator2'
     *  RelationalOperator: '<S332>/Relational Operator3'
     *  S-Function (motohawk_sfun_calibration): '<S332>/motohawk_calibration3'
     *  S-Function (motohawk_sfun_data_read): '<S366>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S366>/motohawk_delta_time'
     *  Sum: '<S366>/Sum'
     */
    if (rtb_LogicalOperator3_cj && (rtb_motohawk_interpolation_1d3_a >
         (FuelPres_DeltaTolerance_DataStore()))) {
      rtb_motohawk_interpolation_1d3_a = rtb_motohawk_delta_time_dj +
        FuelPresHigh_FaultTimer_DataStore();
    } else {
      rtb_motohawk_interpolation_1d3_a = 0.0;
    }

    /* End of Switch: '<S366>/Switch' */

    /* RelationalOperator: '<S332>/Relational Operator2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S332>/motohawk_calibration1'
     */
    rtb_RelationalOperator2_c4 = ((rtb_motohawk_interpolation_1d3_a >
      (FuelPres_FaultTimer_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S332>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: FuelPresHigh_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(58, rtb_RelationalOperator2_c4);
      UpdateFault(58);
    }

    /* Saturate: '<S366>/Saturation' */
    rtb_Saturation_or = rtb_motohawk_interpolation_1d3_a >= 16000.0 ? 16000.0 :
      rtb_motohawk_interpolation_1d3_a <= 0.0 ? 0.0 :
      rtb_motohawk_interpolation_1d3_a;

    /* S-Function (motohawk_sfun_data_write): '<S366>/motohawk_data_write' */
    /* Write to Data Storage as scalar: FuelPresHigh_FaultTimer */
    {
      FuelPresHigh_FaultTimer_DataStore() = rtb_Saturation_or;
    }

    /* Saturate: '<S367>/Saturation' */
    rtb_Saturation_ph = rtb_Switch1_f >= 16000.0 ? 16000.0 : rtb_Switch1_f <=
      0.0 ? 0.0 : rtb_Switch1_f;

    /* S-Function (motohawk_sfun_data_write): '<S367>/motohawk_data_write' */
    /* Write to Data Storage as scalar: FuelPresLow_FaultTimer */
    {
      FuelPresLow_FaultTimer_DataStore() = rtb_Saturation_ph;
    }

    /* Logic: '<S326>/Logical Operator3' incorporates:
     *  Logic: '<S326>/Logical Operator1'
     *  S-Function (motohawk_sfun_fault_status): '<S326>/motohawk_fault_status'
     *  S-Function (motohawk_sfun_fault_status): '<S326>/motohawk_fault_status1'
     */
    rtb_LogicalOperator3_cj = !(IsFaultActive(32) || IsFaultActive(33));

    /* RelationalOperator: '<S340>/RelOp' incorporates:
     *  Constant: '<S340>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S326>/motohawk_data_read'
     */
    rtb_RelOp_mp = (((uint8_T)EngineState_DataStore()) == 3);

    /* Logic: '<S326>/Logical Operator2' incorporates:
     *  RelationalOperator: '<S326>/Relational Operator3'
     *  S-Function (motohawk_sfun_calibration): '<S326>/motohawk_calibration2'
     */
    rtb_LogicalOperator2_ie = ((rtb_LogicalOperator3_cj && rtb_RelOp_mp &&
      (BaseEngineController_LS_B.s737_Merge >= (TempOverheat_Fault_DataStore()))));

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
      (BaseEngineController_LS_B.s737_Merge >=
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
    rtb_UnitDelay_cf = BaseEngineController_LS_B.s627_Sum1 * (real_T)((uint8_T)
      CombEventsPerRev_DataStore()) * 60.0;

    /* Gain: '<S341>/Gain' */
    rtb_motohawk_interpolation_1d3_a = 0.01 *
      BaseEngineController_LS_B.s649_Merge;

    /* Gain: '<S327>/g to mg' incorporates:
     *  Constant: '<S341>/ '
     *  Constant: '<S341>/ Ethanol density (g//ml)'
     *  Constant: '<S341>/ Gasoline density (g//ml)'
     *  Product: '<S341>/Product1'
     *  Product: '<S341>/Product2'
     *  Sum: '<S341>/Add'
     *  Sum: '<S341>/Add1'
     */
    rtb_UnitDelay_ju = ((1.0 - rtb_motohawk_interpolation_1d3_a) * 0.737 + 0.789
                        * rtb_motohawk_interpolation_1d3_a) * 1000.0;
    for (i = 0; i < 8; i++) {
      /* Gain: '<S327>/ml//hr to gal//hr' incorporates:
       *  Product: '<S327>/Mass flow to Volume flow mg//hr to ml//hr'
       *  Product: '<S327>/inj//hr to mg//hr'
       */
      u = rtb_UnitDelay_cf * BaseEngineController_LS_B.s135_FPC[i] /
        rtb_UnitDelay_ju * 0.00026417205263729591;

      /* RelationalOperator: '<S327>/Relational Operator7' incorporates:
       *  Constant: '<S327>/Min fuel flow  for calc'
       */
      rtb_LogicalOperator1_aj[i] = (u > 0.1);

      /* Gain: '<S327>/ml//hr to gal//hr' */
      rtb_Product2_aa[i] = u;
    }

    /* Outputs for Enabled SubSystem: '<S327>/Multiply and Divide, avoiding divde by zero1' incorporates:
     *  EnablePort: '<S343>/Enable'
     */
    if (rtb_LogicalOperator1_aj[0] || rtb_LogicalOperator1_aj[1] ||
        rtb_LogicalOperator1_aj[2] || rtb_LogicalOperator1_aj[3] ||
        rtb_LogicalOperator1_aj[4] || rtb_LogicalOperator1_aj[5] ||
        rtb_LogicalOperator1_aj[6] || rtb_LogicalOperator1_aj[7]) {
      /* Product: '<S343>/charge mass' */
      for (i = 0; i < 8; i++) {
        BaseEngineController_LS_B.s343_chargemass[i] =
          BaseEngineController_LS_B.s426_Switch2 / rtb_Product2_aa[i];
      }

      /* End of Product: '<S343>/charge mass' */
    }

    /* End of Outputs for SubSystem: '<S327>/Multiply and Divide, avoiding divde by zero1' */

    /* Switch: '<S327>/Default (if no flow)' incorporates:
     *  Constant: '<S327>/Default value'
     */
    for (i = 0; i < 8; i++) {
      if (rtb_LogicalOperator1_aj[i]) {
        BaseEngineController_LS_B.s327_Defaultifnoflow[i] =
          BaseEngineController_LS_B.s343_chargemass[i];
      } else {
        BaseEngineController_LS_B.s327_Defaultifnoflow[i] = 0.0;
      }
    }

    /* End of Switch: '<S327>/Default (if no flow)' */

    /* S-Function Block: <S342>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s342_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_interpolation_1d3_a = ((real_T) delta) * 0.000001;
    }

    /* Product: '<S342>/Product' incorporates:
     *  MinMax: '<S342>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S342>/motohawk_calibration2'
     */
    rtb_motohawk_interpolation_1d3_a /= (rtb_motohawk_interpolation_1d3_a >=
      (FuelEconomy_FilterC_DataStore())) || rtIsNaN
      ((FuelEconomy_FilterC_DataStore())) ? rtb_motohawk_interpolation_1d3_a :
      (FuelEconomy_FilterC_DataStore());

    /* Sum: '<S344>/Sum' incorporates:
     *  Constant: '<S344>/Constant'
     */
    rtb_UnitDelay_cf = 1.0 - rtb_motohawk_interpolation_1d3_a;

    /* Sum: '<S344>/Sum1' incorporates:
     *  Product: '<S344>/Product'
     *  Product: '<S344>/Product1'
     *  UnitDelay: '<S344>/Unit Delay'
     */
    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_B.s344_Sum1[i] =
        BaseEngineController_LS_B.s327_Defaultifnoflow[i] *
        rtb_motohawk_interpolation_1d3_a + rtb_UnitDelay_cf *
        BaseEngineController_LS_DWork.s344_UnitDelay_DSTATE[i];
    }

    /* End of Sum: '<S344>/Sum1' */

    /* S-Function Block: <S347>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s347_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_a = ((real_T) delta) * 0.000001;
    }

    /* Logic: '<S329>/Logical Operator3' incorporates:
     *  Logic: '<S329>/Logical Operator1'
     *  S-Function (motohawk_sfun_fault_status): '<S329>/motohawk_fault_status'
     *  S-Function (motohawk_sfun_fault_status): '<S329>/motohawk_fault_status1'
     */
    rtb_LogicalOperator6_b = !(IsFaultActive(101) || IsFaultActive(102));

    /* RelationalOperator: '<S346>/RelOp' incorporates:
     *  Constant: '<S346>/Constant'
     */
    rtb_LogicalOperator1_br = (BaseEngineController_LS_B.s438_State == 3);

    /* S-Function Block: <S329>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_n = TableInterpolation1D_real_T
        (BaseEngineController_LS_B.s407_motohawk_prelookup1, (real_T *)
         ((MinOilPressure_FaultTbl_DataStore())), 9);
      (MinOilPressure_Fault_DataStore()) = rtb_motohawk_interpolation_1d_n;
    }

    /* Switch: '<S347>/Switch' incorporates:
     *  Constant: '<S347>/Constant'
     *  Logic: '<S329>/Logical Operator4'
     *  RelationalOperator: '<S329>/Relational Operator2'
     *  S-Function (motohawk_sfun_data_read): '<S347>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S347>/motohawk_delta_time'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S329>/motohawk_interpolation_1d'
     *  Sum: '<S347>/Sum'
     */
    if (rtb_LogicalOperator6_b && rtb_LogicalOperator1_br &&
        (BaseEngineController_LS_B.s688_Merge < rtb_motohawk_interpolation_1d_n))
    {
      rtb_motohawk_interpolation_1d3_a = rtb_motohawk_delta_time_a +
        OilPresFaultTimer_DataStore();
    } else {
      rtb_motohawk_interpolation_1d3_a = 0.0;
    }

    /* End of Switch: '<S347>/Switch' */
    /* RelationalOperator: '<S329>/Relational Operator5' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S329>/motohawk_calibration1'
     */
    rtb_RelationalOperator5_jx = ((rtb_motohawk_interpolation_1d3_a >
      (NoOilPres_FaultTime_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S329>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: NoOil_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(97, rtb_RelationalOperator5_jx);
      UpdateFault(97);
    }

    /* Saturate: '<S347>/Saturation' */
    rtb_Saturation_kn = rtb_motohawk_interpolation_1d3_a >= 16000.0 ? 16000.0 :
      rtb_motohawk_interpolation_1d3_a <= 0.0 ? 0.0 :
      rtb_motohawk_interpolation_1d3_a;

    /* S-Function (motohawk_sfun_data_write): '<S347>/motohawk_data_write' */
    /* Write to Data Storage as scalar: OilPresFaultTimer */
    {
      OilPresFaultTimer_DataStore() = rtb_Saturation_kn;
    }

    /* S-Function Block: <S329>/motohawk_interpolation_1d3 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d3_a = TableInterpolation1D_real_T
        (BaseEngineController_LS_B.s407_motohawk_prelookup1, (real_T *)
         ((MinOilPressure_WarnTbl_DataStore())), 9);
      (MinOilPressure_Warn_DataStore()) = rtb_motohawk_interpolation_1d3_a;
    }

    /* Update for UnitDelay: '<S357>/Unit Delay' */
    BaseEngineController_LS_DWork.s357_UnitDelay_DSTATE = rtb_Switch1_mj;

    /* Update for UnitDelay: '<S358>/Unit Delay' */
    BaseEngineController_LS_DWork.s358_UnitDelay_DSTATE = rtb_Switch1_e;

    /* Update for UnitDelay: '<S363>/Unit Delay' */
    BaseEngineController_LS_DWork.s363_UnitDelay_DSTATE = rtb_Switch1_l;

    /* Update for UnitDelay: '<S364>/Unit Delay' */
    BaseEngineController_LS_DWork.s364_UnitDelay_DSTATE = rtb_Switch1_ow;

    /* Update for UnitDelay: '<S359>/Unit Delay' */
    BaseEngineController_LS_DWork.s359_UnitDelay_DSTATE = rtb_Switch1_l3;

    /* Update for UnitDelay: '<S365>/Unit Delay' */
    BaseEngineController_LS_DWork.s365_UnitDelay_DSTATE = rtb_Switch1_bv;

    /* Update for UnitDelay: '<S344>/Unit Delay' */
    memcpy((void *)BaseEngineController_LS_DWork.s344_UnitDelay_DSTATE, (void *)
           (&BaseEngineController_LS_B.s344_Sum1[0]), sizeof(real_T) << 3U);

    /* End of Outputs for SubSystem: '<S11>/Diagnostics' */
  }

  /* Saturate: '<S381>/Saturation' */
  rtb_Saturation_k2 = rtb_Switch_f >= 16000.0 ? 16000.0 : rtb_Switch_f <= 0.0 ?
    0.0 : rtb_Switch_f;

  /* S-Function (motohawk_sfun_data_write): '<S381>/motohawk_data_write' */
  /* Write to Data Storage as scalar: BaroLearnTmr */
  {
    BaroLearnTmr_DataStore() = rtb_Saturation_k2;
  }

  /* RelationalOperator: '<S384>/Compare' incorporates:
   *  Constant: '<S384>/Constant'
   */
  rtb_LogicalOperator6_b = (BaseEngineController_LS_B.s438_State == 3);

  /* Logic: '<S377>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_action): '<S377>/motohawk_fault_action1'
   */
  rtb_LogicalOperator1_br = !GetFaultActionStatus(5);

  /* RelationalOperator: '<S377>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S377>/motohawk_calibration2'
   */
  rtb_RelationalOperator3_bp = (BaseEngineController_LS_B.s737_Merge >=
    (VEAdaptTemp_DataStore()));

  /* RelationalOperator: '<S377>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S377>/motohawk_calibration3'
   */
  rtb_RelOp_pu = (BaseEngineController_LS_B.s443_Switch >=
                  (VEAdaptTime_DataStore()));

  /* Logic: '<S377>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S377>/motohawk_calibration'
   */
  BaseEngineController_LS_B.s377_LogicalOperator = ((rtb_LogicalOperator6_b &&
    rtb_LogicalOperator1_br && BaseEngineController_LS_B.s392_LogicalOperator &&
    rtb_RelationalOperator3_bp && rtb_RelOp_pu && (VEAdaptEnable_DataStore())));

  /* Outputs for Enabled SubSystem: '<S377>/Adapt VolEff Map' incorporates:
   *  EnablePort: '<S382>/Enable'
   */
  if (BaseEngineController_LS_B.s377_LogicalOperator) {
    /* Product: '<S382>/Divide' incorporates:
     *  Sum: '<S382>/Add'
     */
    rtb_Divide_p = (BaseEngineController_LS_B.s591_Merge -
                    BaseEngineController_LS_B.s377_ModelAirMassFlowRate) /
      BaseEngineController_LS_B.s377_ModelAirMassFlowRate;

    /* S-Function Block: <S385>/motohawk_prelookup */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (VE_AdaptErrorIdxArrIn_DataStore()) = rtb_Divide_p;
      (VE_AdaptErrorIdxArrIdx_DataStore()) = TablePrelookup_real_T(rtb_Divide_p,
        (VE_AdaptErrorIdxArrIdxArr_DataStore()), 10,
        (VE_AdaptErrorIdxArrIdx_DataStore()));
      rtb_motohawk_prelookup_jn = (VE_AdaptErrorIdxArrIdx_DataStore());
    }

    /* S-Function Block: <S385>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_kd = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_jn, (real_T *) ((VEAdaptGainTblTbl_DataStore())),
         10);
      (VEAdaptGainTbl_DataStore()) = rtb_motohawk_interpolation_1d_kd;
    }

    /* Product: '<S382>/Divide1' incorporates:
     *  Product: '<S382>/Divide2'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S385>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_prelookup): '<S385>/motohawk_prelookup'
     */
    rtb_Divide1 = BaseEngineController_LS_B.s377_Sum * rtb_Divide_p *
      rtb_motohawk_interpolation_1d_kd;

    /* S-Function Block: <S382>/motohawk_adapt_table */
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

  /* End of Outputs for SubSystem: '<S377>/Adapt VolEff Map' */

  /* S-Function (motohawk_sfun_data_write): '<S369>/motohawk_data_write' */
  /* Write to Data Storage as scalar: FuelLvl_NVM */
  {
    FuelLvl_NVM_DataStore() = BaseEngineController_LS_B.s388_Sum1;
  }

  /* UnitDelay: '<S393>/Unit Delay1' */
  rtb_DesiredLambda_idx = BaseEngineController_LS_DWork.s393_UnitDelay1_DSTATE;

  /* UnitDelay: '<S393>/Unit Delay3' */
  rtb_DesiredLambda_idx_0 = BaseEngineController_LS_DWork.s393_UnitDelay3_DSTATE;

  /* UnitDelay: '<S393>/Unit Delay4' */
  rtb_UnitDelay4_i = BaseEngineController_LS_DWork.s393_UnitDelay4_DSTATE;

  /* UnitDelay: '<S394>/Unit Delay1' */
  rtb_UnitDelay1_k = BaseEngineController_LS_DWork.s394_UnitDelay1_DSTATE;

  /* UnitDelay: '<S394>/Unit Delay3' */
  rtb_UnitDelay3_j = BaseEngineController_LS_DWork.s394_UnitDelay3_DSTATE;

  /* UnitDelay: '<S394>/Unit Delay4' */
  rtb_UnitDelay4_ie = BaseEngineController_LS_DWork.s394_UnitDelay4_DSTATE;

  /* Sum: '<S411>/Sum' */
  rtb_Abs_co = rtb_APP1 - rtb_APP2;

  /* Abs: '<S411>/Abs' */
  rtb_Abs_co = fabs(rtb_Abs_co);

  /* RelationalOperator: '<S411>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S411>/motohawk_calibration2'
   */
  rtb_RelationalOperator3_h = ((rtb_Abs_co > (APP1_APP2_Max_Deviation_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S411>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: APP_Sensors_Conflict */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(20, rtb_RelationalOperator3_h);
    UpdateFault(20);
  }

  /* S-Function (motohawk_sfun_data_write): '<S417>/motohawk_data_write' */
  /* Write to Data Storage as scalar: EngineState */
  {
    EngineState_DataStore() = BaseEngineController_LS_B.s438_State;
  }

  /* Sum: '<S422>/Sum' */
  rtb_Abs_co = BaseEngineController_LS_B.s840_Merge -
    BaseEngineController_LS_B.s857_Merge;

  /* Abs: '<S422>/Abs' */
  rtb_Abs_co = fabs(rtb_Abs_co);

  /* RelationalOperator: '<S422>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S422>/motohawk_calibration2'
   */
  rtb_RelationalOperator3_or = ((rtb_Abs_co > (TPS1_TPS2_Max_Deviation_DataStore
                                  ())));

  /* S-Function (motohawk_sfun_fault_def): '<S422>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: TPS_Sensors_Conflict */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(121, rtb_RelationalOperator3_or);
    UpdateFault(121);
  }

  /* Saturate: '<S441>/Saturation' */
  rtb_Saturation_ah = BaseEngineController_LS_B.s441_Sum >= 16000.0 ? 16000.0 :
    BaseEngineController_LS_B.s441_Sum <= 0.0 ? 0.0 :
    BaseEngineController_LS_B.s441_Sum;

  /* S-Function (motohawk_sfun_data_write): '<S441>/motohawk_data_write' */
  /* Write to Data Storage as scalar: TimeSinceKeyOnTimer */
  {
    TimeSinceKeyOnTimer_DataStore() = rtb_Saturation_ah;
  }

  /* Saturate: '<S443>/Saturation' */
  rtb_Saturation_m = BaseEngineController_LS_B.s443_Switch >= 16000.0 ? 16000.0 :
    BaseEngineController_LS_B.s443_Switch <= 0.0 ? 0.0 :
    BaseEngineController_LS_B.s443_Switch;

  /* S-Function (motohawk_sfun_data_write): '<S443>/motohawk_data_write' */
  /* Write to Data Storage as scalar: TimeSinceRunTimer */
  {
    TimeSinceRunTimer_DataStore() = rtb_Saturation_m;
  }

  /* Saturate: '<S445>/Saturation' */
  rtb_Saturation_kf = BaseEngineController_LS_B.s445_Switch >= 16000.0 ? 16000.0
    : BaseEngineController_LS_B.s445_Switch <= 0.0 ? 0.0 :
    BaseEngineController_LS_B.s445_Switch;

  /* S-Function (motohawk_sfun_data_write): '<S445>/motohawk_data_write' */
  /* Write to Data Storage as scalar: TimeSinceStallTimer */
  {
    TimeSinceStallTimer_DataStore() = rtb_Saturation_kf;
  }

  /* Switch: '<S449>/Switch' incorporates:
   *  Constant: '<S449>/Constant2'
   */
  if (rtb_RelationalOperator_jv) {
    rtb_Switch_kj = 0U;
  } else {
    rtb_Switch_kj = rtb_Sum_hh;
  }

  /* End of Switch: '<S449>/Switch' */
  /* RelationalOperator: '<S457>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S457>/motohawk_calibration1'
   */
  rtb_RelationalOperator5_fz = ((real_T)
    BaseEngineController_LS_B.s457_ReadCANMessage1_o1 >=
    (GPS_LatLong_Timeout_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S457>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: GPS_LatLong_Timeout */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(67, rtb_RelationalOperator5_fz);
    UpdateFault(67);
  }

  /* RelationalOperator: '<S457>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S457>/motohawk_calibration'
   */
  rtb_RelationalOperator5_fz = ((real_T)
    BaseEngineController_LS_B.s457_ReadCANMessage_o1 >=
    (GPS_DateTime_Timeout_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S457>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: GPS_DateTime_Timeout */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(66, rtb_RelationalOperator5_fz);
    UpdateFault(66);
  }

  /* Logic: '<S457>/Logical Operator' */
  rtb_LogicalOperator_ay = !rtb_Merge_n2;

  /* S-Function (motohawk_sfun_fault_def): '<S457>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: GPS_NotReady */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(68, rtb_LogicalOperator_ay);
    UpdateFault(68);
  }

  /* RelationalOperator: '<S457>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S457>/motohawk_calibration2'
   */
  rtb_RelationalOperator5_fz = ((real_T)
    BaseEngineController_LS_B.s457_ReadCANMessage2_o1 >=
    (GPS_SpeedDir_Timeout_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S457>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: GPS_SpeedDir_Timeout */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(69, rtb_RelationalOperator5_fz);
    UpdateFault(69);
  }

  /* RelationalOperator: '<S458>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S458>/motohawk_calibration1'
   */
  rtb_RelationalOperator5_fz = ((real_T)
    BaseEngineController_LS_B.s458_ReadCANMessage1_o1 >=
    (Lambda_2_Timeout_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S458>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: Lambda_2_Timeout */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(85, rtb_RelationalOperator5_fz);
    UpdateFault(85);
  }

  /* RelationalOperator: '<S458>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S458>/motohawk_calibration'
   */
  rtb_RelationalOperator5_fz = ((real_T)
    BaseEngineController_LS_B.s458_ReadCANMessage_o1 >=
    (Lambda_1_Timeout_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S458>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: Lambda_1_Timeout */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(83, rtb_RelationalOperator5_fz);
    UpdateFault(83);
  }

  /* Logic: '<S458>/Logical Operator' */
  rtb_LogicalOperator_f0 = !(rtb_Product7_i != 0.0);

  /* S-Function (motohawk_sfun_fault_def): '<S458>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: Lambda_1_NotReady */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(82, rtb_LogicalOperator_f0);
    UpdateFault(82);
  }

  /* Logic: '<S458>/Logical Operator1' */
  rtb_LogicalOperator1_a5 = !(rtb_Product6_m != 0.0);

  /* S-Function (motohawk_sfun_fault_def): '<S458>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: Lambda_2_NotReady */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(84, rtb_LogicalOperator1_a5);
    UpdateFault(84);
  }

  /* Logic: '<S498>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S498>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S498>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S498>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_n = ((MPRD_DataStore() &&
    (BaseEngineController_LS_B.s458_MathFunction >
     (Bank1_EquivRatioInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S498>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: Bank1_EquivRatioRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(21, rtb_LogicalOperator2_n);
    UpdateFault(21);
  }

  /* Logic: '<S498>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S498>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S498>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S498>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_hv = ((MPRD_DataStore() &&
    (BaseEngineController_LS_B.s458_MathFunction <
     (Bank1_EquivRatioInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S498>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: Bank1_EquivRatioRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(22, rtb_LogicalOperator3_hv);
    UpdateFault(22);
  }

  /* Logic: '<S499>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S499>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S499>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S499>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_b = ((MPRD_DataStore() &&
    (BaseEngineController_LS_B.s458_MathFunction1 >
     (Bank2_EquivRatioInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S499>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: Bank2_EquivRatioRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(23, rtb_LogicalOperator2_b);
    UpdateFault(23);
  }

  /* Logic: '<S499>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S499>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S499>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S499>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_o = ((MPRD_DataStore() &&
    (BaseEngineController_LS_B.s458_MathFunction1 <
     (Bank2_EquivRatioInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S499>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: Bank2_EquivRatioRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(24, rtb_LogicalOperator3_o);
    UpdateFault(24);
  }

  /* Logic: '<S573>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S573>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S573>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S573>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_p5 = ((MPRD_DataStore() &&
    (BaseEngineController_LS_B.s452_Gain > (MAFMax_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S573>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: MAFRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(87, rtb_LogicalOperator2_p5);
    UpdateFault(87);
  }

  /* Logic: '<S573>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S573>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S573>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S573>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_k = ((MPRD_DataStore() &&
    (BaseEngineController_LS_B.s452_Gain < (MAFMin_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S573>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: MAFRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(88, rtb_LogicalOperator3_k);
    UpdateFault(88);
  }

  /* Saturate: '<S598>/Saturation' */
  rtb_Saturation_b = rtb_Switch_bn >= 86400.0 ? 86400.0 : rtb_Switch_bn <= 0.0 ?
    0.0 : rtb_Switch_bn;

  /* S-Function (motohawk_sfun_data_write): '<S598>/motohawk_data_write' */
  /* Write to Data Storage as scalar: ScrambleDelay */
  {
    ScrambleDelay_DataStore() = rtb_Saturation_b;
  }

  /* Saturate: '<S603>/Saturation' */
  rtb_Saturation_e = rtb_Switch_m1 >= 86400.0 ? 86400.0 : rtb_Switch_m1 <= 0.0 ?
    0.0 : rtb_Switch_m1;

  /* S-Function (motohawk_sfun_data_write): '<S603>/motohawk_data_write' */
  /* Write to Data Storage as scalar: TwoStepTimer */
  {
    TwoStepTimer_DataStore() = rtb_Saturation_e;
  }

  /* Logic: '<S576>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S576>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S576>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S576>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_m = ((MPRD_DataStore() &&
    (BaseEngineController_LS_B.s452_Gain1 > (VSPDMax_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S576>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: VSPDRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(122, rtb_LogicalOperator2_m);
    UpdateFault(122);
  }

  /* Logic: '<S576>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S576>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S576>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S576>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_jn = ((MPRD_DataStore() &&
    (BaseEngineController_LS_B.s452_Gain1 < (VSPDMin_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S576>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: VSPDRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(123, rtb_LogicalOperator3_jn);
    UpdateFault(123);
  }

  /* S-Function Block: <S618>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s618_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_ec = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S618>/Switch' incorporates:
   *  Constant: '<S618>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S618>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S618>/motohawk_delta_time'
   *  Sum: '<S618>/Sum'
   */
  if (rtb_Logic_j[0]) {
    rtb_Abs_co = rtb_motohawk_delta_time_ec + TimeSinceVSPDReject_DataStore();
  } else {
    rtb_Abs_co = 0.0;
  }

  /* End of Switch: '<S618>/Switch' */
  /* RelationalOperator: '<S577>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S577>/motohawk_calibration6'
   */
  rtb_Switch1_e = (rtb_Abs_co >= (VSPD_RejectHoldTime_DataStore()));

  /* Saturate: '<S618>/Saturation' */
  rtb_Saturation_l = rtb_Abs_co >= 16000.0 ? 16000.0 : rtb_Abs_co <= 0.0 ? 0.0 :
    rtb_Abs_co;

  /* S-Function (motohawk_sfun_data_write): '<S618>/motohawk_data_write' */
  /* Write to Data Storage as scalar: TimeSinceVSPDReject */
  {
    TimeSinceVSPDReject_DataStore() = rtb_Saturation_l;
  }

  /* RelationalOperator: '<S453>/Relational Operator' incorporates:
   *  Constant: '<S453>/Constant'
   *  S-Function (motohawk_sfun_calibration): '<S453>/motohawk_calibration'
   */
  rtb_RelationalOperator_l = ((0 != ((uint16_T)(PseudoRPM_DataStore()))));

  /* S-Function Block: <S453>/motohawk_encoder_pseudo */
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

  /* DataTypeConversion: '<S453>/Data Type Conversion3' incorporates:
   *  Gain: '<S453>/Gain'
   *  S-Function (motohawk_sfun_calibration): '<S453>/motohawk_calibration1'
   */
  u = 16.0 * (EngineToEncoderOffset_DataStore());
  if (rtIsNaN(u) || rtIsInf(u)) {
    u = 0.0;
  } else {
    y = u < 0.0 ? ceil(u) : floor(u);
    u = fmod(y, 65536.0);
  }

  rtb_DataTypeConversion3_dm = (int16_T)(u < 0.0 ? (int16_T)-(int16_T)(uint16_T)
    -u : (int16_T)(uint16_T)u);

  /* End of DataTypeConversion: '<S453>/Data Type Conversion3' */
  /* S-Function Block: <S453>/motohawk_encoder_offset */
  {
    S_EncoderResourceAttributes encoder_attributes;
    encoder_attributes.uValidAttributesMask = USE_ENC_TDC_OFFSET;
    encoder_attributes.s2TDCOffset = rtb_DataTypeConversion3_dm;
    SetResourceAttributes(RES_ENCODER, &encoder_attributes, BEHAVIOUR_ENCODER);
  }

  /* RelationalOperator: '<S623>/RelOp' incorporates:
   *  Constant: '<S623>/Constant'
   */
  rtb_RelationalOperator5_fz = (BaseEngineController_LS_B.s626_Sum > 100U);

  /* S-Function Block: <S453>/motohawk_encoder_fault */
  {
    extern uint8_T motohawk_encoder_fault;
    BaseEngineController_LS_B.s453_motohawk_encoder_fault =
      motohawk_encoder_fault;
  }

  /* Logic: '<S619>/Logical Operator' incorporates:
   *  Constant: '<S625>/Constant'
   *  RelationalOperator: '<S625>/RelOp'
   */
  rtb_LogicalOperator_f0c = ((rtb_RelationalOperator5_fz &&
    (BaseEngineController_LS_B.s453_motohawk_encoder_fault == 1)));

  /* S-Function (motohawk_sfun_fault_def): '<S619>/motohawk_fault_def' */

  /* Set Fault Suspected Status: CrankSyncFault */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(30, rtb_LogicalOperator_f0c);
    UpdateFault(30);
  }

  /* Logic: '<S619>/Logical Operator1' incorporates:
   *  Constant: '<S624>/Constant'
   *  RelationalOperator: '<S624>/RelOp'
   */
  rtb_LogicalOperator1_dw = ((rtb_RelationalOperator5_fz &&
    (BaseEngineController_LS_B.s453_motohawk_encoder_fault == 3)));

  /* S-Function (motohawk_sfun_fault_def): '<S619>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: CrankEdgesFault */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(29, rtb_LogicalOperator1_dw);
    UpdateFault(29);
  }

  /* Logic: '<S619>/Logical Operator2' incorporates:
   *  Constant: '<S621>/Constant'
   *  RelationalOperator: '<S621>/RelOp'
   */
  rtb_LogicalOperator2_g = ((rtb_RelationalOperator5_fz &&
    (BaseEngineController_LS_B.s453_motohawk_encoder_fault == 4)));

  /* S-Function (motohawk_sfun_fault_def): '<S619>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: CamEdgesFault */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(27, rtb_LogicalOperator2_g);
    UpdateFault(27);
  }

  /* Logic: '<S619>/Logical Operator3' incorporates:
   *  Constant: '<S622>/Constant'
   *  RelationalOperator: '<S622>/RelOp'
   */
  rtb_LogicalOperator3_nz = ((rtb_RelationalOperator5_fz &&
    (BaseEngineController_LS_B.s453_motohawk_encoder_fault == 5)));

  /* S-Function (motohawk_sfun_fault_def): '<S619>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: CamSyncFault */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(28, rtb_LogicalOperator3_nz);
    UpdateFault(28);
  }

  /* S-Function Block: <S453>/motohawk_encoder_state */
  {
    extern uint8_T motohawk_encoder_status;
    BaseEngineController_LS_B.s453_motohawk_encoder_state =
      motohawk_encoder_status;
  }

  /* Logic: '<S628>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S628>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S628>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S628>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_kx = ((MPRD_DataStore() && (rtb_DataTypeConversion_ik >
    (ACPresInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S628>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: ACPresRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(2, rtb_LogicalOperator2_kx);
    UpdateFault(2);
  }

  /* Logic: '<S628>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S628>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S628>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S628>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_mz = ((MPRD_DataStore() && (rtb_DataTypeConversion_ik <
    (ACPresInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S628>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: ACPresRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(3, rtb_LogicalOperator3_mz);
    UpdateFault(3);
  }

  /* Logic: '<S629>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S629>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S629>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S629>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_j = ((MPRD_DataStore() && (rtb_DataTypeConversion_e >
    (FuelSensInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S629>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: FuelSensRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(62, rtb_LogicalOperator2_j);
    UpdateFault(62);
  }

  /* Logic: '<S629>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S629>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S629>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S629>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_ij = ((MPRD_DataStore() && (rtb_DataTypeConversion_e <
    (FuelSensInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S629>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: FuelSensRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(63, rtb_LogicalOperator3_ij);
    UpdateFault(63);
  }

  /* Logic: '<S630>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S630>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S630>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S630>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_f4 = ((MPRD_DataStore() && (rtb_DataTypeConversion_gx >
    (FuelPresInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S630>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: FuelPresRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(60, rtb_LogicalOperator2_f4);
    UpdateFault(60);
  }

  /* Logic: '<S630>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S630>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S630>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S630>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_ns = ((MPRD_DataStore() && (rtb_DataTypeConversion_gx <
    (FuelPresInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S630>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: FuelPresRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(61, rtb_LogicalOperator3_ns);
    UpdateFault(61);
  }

  /* Logic: '<S631>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S631>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S631>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S631>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_fw = ((MPRD_DataStore() &&
    (BaseEngineController_LS_B.s633_Merge > (MAPInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S631>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: MAPRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(89, rtb_LogicalOperator2_fw);
    UpdateFault(89);
  }

  /* Logic: '<S631>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S631>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S631>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S631>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_l = ((MPRD_DataStore() &&
    (BaseEngineController_LS_B.s633_Merge < (MAPInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S631>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: MAPRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(90, rtb_LogicalOperator3_l);
    UpdateFault(90);
  }

  /* Logic: '<S632>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S632>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S632>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S632>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_a = ((MPRD_DataStore() && (rtb_DataTypeConversion_fq >
    (MAPTimeInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S632>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: MAPTimeRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(91, rtb_LogicalOperator2_a);
    UpdateFault(91);
  }

  /* Logic: '<S632>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S632>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S632>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S632>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_d = ((MPRD_DataStore() && (rtb_DataTypeConversion_fq <
    (MAPTimeInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S632>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: MAPTimeRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(92, rtb_LogicalOperator3_d);
    UpdateFault(92);
  }

  /* Logic: '<S634>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S634>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S634>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S634>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_fm = ((MPRD_DataStore() && (rtb_Product_oj >
    (OilPresInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S634>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: OilPresRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(101, rtb_LogicalOperator2_fm);
    UpdateFault(101);
  }

  /* Logic: '<S634>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S634>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S634>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S634>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_a = ((MPRD_DataStore() && (rtb_Product_oj <
    (OilPresInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S634>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: OilPresRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(102, rtb_LogicalOperator3_a);
    UpdateFault(102);
  }

  /* Logic: '<S635>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S635>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S635>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S635>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_gc = ((MPRD_DataStore() && (rtb_Abs_k >
    (SensVoltInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S635>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: SensVoltRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(103, rtb_LogicalOperator2_gc);
    UpdateFault(103);
  }

  /* Logic: '<S635>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S635>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S635>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S635>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_e = ((MPRD_DataStore() && (rtb_Abs_k <
    (SensVoltInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S635>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: SensVoltRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(104, rtb_LogicalOperator3_e);
    UpdateFault(104);
  }

  /* Logic: '<S636>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S636>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S636>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S636>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_bm = ((MPRD_DataStore() && (rtb_DataTypeConversion_c4 >
    (SysVoltInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S636>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: SysVoltRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(107, rtb_LogicalOperator2_bm);
    UpdateFault(107);
  }

  /* Logic: '<S636>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S636>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S636>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S636>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_g = ((MPRD_DataStore() && (rtb_DataTypeConversion_c4 <
    (SysVoltInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S636>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: SysVoltRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(108, rtb_LogicalOperator3_g);
    UpdateFault(108);
  }

  /* Logic: '<S760>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S760>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S760>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S760>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_ob = ((MPRD_DataStore() && (rtb_DataTypeConversion_hd >
    (APP1Max_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S760>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: APP1RangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(4, rtb_LogicalOperator2_ob);
    UpdateFault(4);
  }

  /* Logic: '<S760>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S760>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S760>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S760>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_in = ((MPRD_DataStore() && (rtb_DataTypeConversion_hd <
    (APP1Min_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S760>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: APP1RangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(5, rtb_LogicalOperator3_in);
    UpdateFault(5);
  }

  /* S-Function (motohawk_sfun_trigger): '<S761>/motohawk_trigger' */
  /* Enable for Trigger_FGND_20XRTI_PERIODIC_8534p0002 */
  if (BaseEngineController_LS_DWork.s761_motohawk_trigger_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s761_motohawk_trigger_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_data_read): '<S761>/motohawk_data_read1' */
  rtb_motohawk_data_read1_p = APP1ADC_DataStore();

  /* RelationalOperator: '<S761>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S761>/motohawk_calibration'
   */
  rtb_RelationalOperator5_fz = ((real_T)rtb_motohawk_data_read1_p <
    (APP1LowAdaptADCThresh_DataStore()));

  /* Logic: '<S761>/Logical Operator' */
  rtb_RelationalOperator3_bp =
    (BaseEngineController_LS_B.s761_FunctionCallSubsystem.s779_InitialConditionisTrue
     && rtb_RelationalOperator5_fz);

  /* RelationalOperator: '<S761>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S761>/motohawk_calibration1'
   */
  rtb_RelationalOperator5_fz = ((real_T)rtb_motohawk_data_read1_p >
    (APP1HiAdaptADCThresh_DataStore()));

  /* Logic: '<S761>/Logical Operator1' */
  rtb_LogicalOperator6_b =
    (BaseEngineController_LS_B.s761_FunctionCallSubsystem.s779_InitialConditionisTrue
     && rtb_RelationalOperator5_fz);

  /* Logic: '<S762>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S762>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S762>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S762>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_il = ((MPRD_DataStore() && (rtb_DataTypeConversion_f >
    (APP2Max_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S762>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: APP2RangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(12, rtb_LogicalOperator2_il);
    UpdateFault(12);
  }

  /* Logic: '<S762>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S762>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S762>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S762>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_dk = ((MPRD_DataStore() && (rtb_DataTypeConversion_f <
    (APP2Min_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S762>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: APP2RangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(13, rtb_LogicalOperator3_dk);
    UpdateFault(13);
  }

  /* S-Function (motohawk_sfun_trigger): '<S763>/motohawk_trigger' */
  /* Enable for Trigger_FGND_20XRTI_PERIODIC_8664p0002 */
  if (BaseEngineController_LS_DWork.s763_motohawk_trigger_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s763_motohawk_trigger_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_data_read): '<S763>/motohawk_data_read1' */
  rtb_motohawk_data_read1_p = APP2ADC_DataStore();

  /* RelationalOperator: '<S763>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S763>/motohawk_calibration'
   */
  rtb_RelationalOperator5_fz = ((real_T)rtb_motohawk_data_read1_p <
    (APP2LowAdaptADCThresh_DataStore()));

  /* Logic: '<S763>/Logical Operator' */
  rtb_Switch1_mj =
    (BaseEngineController_LS_B.s763_FunctionCallSubsystem.s779_InitialConditionisTrue
     && rtb_RelationalOperator5_fz);

  /* RelationalOperator: '<S763>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S763>/motohawk_calibration1'
   */
  rtb_RelationalOperator5_fz = ((real_T)rtb_motohawk_data_read1_p >
    (APP2HiAdaptADCThresh_DataStore()));

  /* Logic: '<S763>/Logical Operator1' */
  rtb_RelOp_pu =
    (BaseEngineController_LS_B.s763_FunctionCallSubsystem.s779_InitialConditionisTrue
     && rtb_RelationalOperator5_fz);

  /* RelationalOperator: '<S793>/Relational Operator5' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S793>/motohawk_calibration5'
   */
  rtb_RelationalOperator5_l = ((BaseEngineController_LS_B.s764_Switch >
    (APP1_AdaptInputHiFltPos_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S793>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: APP1_AdaptRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(10, rtb_RelationalOperator5_l);
    UpdateFault(10);
  }

  /* RelationalOperator: '<S793>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S793>/motohawk_calibration6'
   */
  rtb_RelationalOperator4_b = ((BaseEngineController_LS_B.s764_Switch <
    (APP1_AdaptInputLoFltPos_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S793>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: APP1_AdaptRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(11, rtb_RelationalOperator4_b);
    UpdateFault(11);
  }

  /* RelationalOperator: '<S793>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S764>/motohawk_calibration9'
   */
  rtb_RelationalOperator_c1 = ((BaseEngineController_LS_B.s792_MinMax >
    (APP1_AdaptAdapt_Low_Max_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S793>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: APP1_AdaptAdaptLoMax */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(8, rtb_RelationalOperator_c1);
    UpdateFault(8);
  }

  /* RelationalOperator: '<S793>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S764>/motohawk_calibration12'
   */
  rtb_RelationalOperator3_p4 = ((BaseEngineController_LS_B.s792_MinMax1 >
    (APP1_AdaptAdapt_Hi_Max_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S793>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: APP1_AdaptAdaptHiMax */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(6, rtb_RelationalOperator3_p4);
    UpdateFault(6);
  }

  /* RelationalOperator: '<S793>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S764>/motohawk_calibration11'
   */
  rtb_RelationalOperator2_k2 = ((BaseEngineController_LS_B.s792_MinMax1 <
    (APP1_AdaptAdapt_Hi_Min_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S793>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: APP1_AdaptAdaptHiMin */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(7, rtb_RelationalOperator2_k2);
    UpdateFault(7);
  }

  /* RelationalOperator: '<S793>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S764>/motohawk_calibration10'
   */
  rtb_RelationalOperator1_n = ((BaseEngineController_LS_B.s792_MinMax <
    (APP1_AdaptAdapt_Low_Min_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S793>/motohawk_fault_def8' */

  /* Set Fault Suspected Status: APP1_AdaptAdaptLoMin */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(9, rtb_RelationalOperator1_n);
    UpdateFault(9);
  }

  /* UnitDelay: '<S799>/Unit Delay1' */
  rtb_Abs_co = BaseEngineController_LS_DWork.s799_UnitDelay1_DSTATE;

  /* UnitDelay: '<S799>/Unit Delay' */
  rtb_UnitDelay_cf = BaseEngineController_LS_DWork.s799_UnitDelay_DSTATE;

  /* UnitDelay: '<S799>/Unit Delay3' */
  rtb_UnitDelay_ju = BaseEngineController_LS_DWork.s799_UnitDelay3_DSTATE;

  /* UnitDelay: '<S799>/Unit Delay4' */
  rtb_Switch1_f = BaseEngineController_LS_DWork.s799_UnitDelay4_DSTATE;

  /* MinMax: '<S799>/MinMax1' incorporates:
   *  UnitDelay: '<S799>/Unit Delay'
   *  UnitDelay: '<S799>/Unit Delay3'
   *  UnitDelay: '<S799>/Unit Delay4'
   */
  y = (rtb_Abs_co <= BaseEngineController_LS_DWork.s799_UnitDelay_DSTATE) ||
    rtIsNaN(BaseEngineController_LS_DWork.s799_UnitDelay_DSTATE) ? rtb_Abs_co :
    BaseEngineController_LS_DWork.s799_UnitDelay_DSTATE;
  y = (y <= BaseEngineController_LS_DWork.s799_UnitDelay3_DSTATE) || rtIsNaN
    (BaseEngineController_LS_DWork.s799_UnitDelay3_DSTATE) ? y :
    BaseEngineController_LS_DWork.s799_UnitDelay3_DSTATE;
  y = (y <= BaseEngineController_LS_DWork.s799_UnitDelay4_DSTATE) || rtIsNaN
    (BaseEngineController_LS_DWork.s799_UnitDelay4_DSTATE) ? y :
    BaseEngineController_LS_DWork.s799_UnitDelay4_DSTATE;
  u = (y <= BaseEngineController_LS_B.s764_Switch) || rtIsNaN
    (BaseEngineController_LS_B.s764_Switch) ? y :
    BaseEngineController_LS_B.s764_Switch;

  /* RelationalOperator: '<S797>/Relational Operator9' incorporates:
   *  MinMax: '<S799>/MinMax1'
   */
  rtb_LogicalOperator1_br = (u > BaseEngineController_LS_B.s792_MinMax1);

  /* RelationalOperator: '<S797>/Relational Operator5' incorporates:
   *  MinMax: '<S799>/MinMax1'
   *  S-Function (motohawk_sfun_calibration): '<S764>/motohawk_calibration12'
   */
  rtb_RelationalOperator5_fz = (u <= (APP1_AdaptAdapt_Hi_Max_DataStore()));

  /* RelationalOperator: '<S797>/Relational Operator6' incorporates:
   *  MinMax: '<S799>/MinMax1'
   *  S-Function (motohawk_sfun_calibration): '<S764>/motohawk_calibration11'
   */
  rtb_RelationalOperator6_h0 = (u >= (APP1_AdaptAdapt_Hi_Min_DataStore()));

  /* Sum: '<S797>/Sum2' incorporates:
   *  MinMax: '<S799>/MinMax1'
   */
  rtb_Abs_k = u - BaseEngineController_LS_B.s792_MinMax1;

  /* Abs: '<S797>/Abs' */
  rtb_Abs_k = fabs(rtb_Abs_k);

  /* Outputs for Enabled SubSystem: '<S797>/Store Current Position' incorporates:
   *  EnablePort: '<S800>/Enable'
   */
  /* Logic: '<S797>/Logical Operator2' incorporates:
   *  Logic: '<S797>/Logical Operator1'
   *  Logic: '<S797>/Logical Operator4'
   *  RelationalOperator: '<S797>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S792>/motohawk_calibration14'
   *  S-Function (motohawk_sfun_calibration): '<S792>/motohawk_calibration2'
   */
  if ((rtb_LogicalOperator1_br && rtb_RelationalOperator5_fz &&
       rtb_RelationalOperator6_h0 && (APP1_AdaptAdaptHiEnable_DataStore()) &&
       (rtb_Abs_k > (APP1_AdaptAdapt_Delta_DataStore()))) ||
      (rtb_RelationalOperator5_fz && rtb_RelationalOperator6_h0 &&
       (APP1_AdaptAdaptHiEnable_DataStore()) && rtb_LogicalOperator6_b)) {
    /* DataTypeConversion: '<S800>/Data Type Conversion2' incorporates:
     *  MinMax: '<S799>/MinMax1'
     */
    if (u < 65536.0) {
      if (u >= 0.0) {
        rtb_DataTypeConversion2_d = (uint16_T)u;
      } else {
        rtb_DataTypeConversion2_d = 0U;
      }
    } else {
      rtb_DataTypeConversion2_d = MAX_uint16_T;
    }

    /* End of DataTypeConversion: '<S800>/Data Type Conversion2' */

    /* S-Function (motohawk_sfun_data_write): '<S800>/motohawk_data_write' */
    /* Write to Data Storage as scalar: APP1_AdaptRaw_Adpt_Hi */
    {
      APP1_AdaptRaw_Adpt_Hi_DataStore() = rtb_DataTypeConversion2_d;
    }
  }

  /* End of Logic: '<S797>/Logical Operator2' */
  /* End of Outputs for SubSystem: '<S797>/Store Current Position' */

  /* MinMax: '<S799>/MinMax' */
  y = (BaseEngineController_LS_B.s764_Switch >= rtb_Switch1_f) || rtIsNaN
    (rtb_Switch1_f) ? BaseEngineController_LS_B.s764_Switch : rtb_Switch1_f;
  y = (y >= rtb_UnitDelay_ju) || rtIsNaN(rtb_UnitDelay_ju) ? y :
    rtb_UnitDelay_ju;
  y = (y >= rtb_UnitDelay_cf) || rtIsNaN(rtb_UnitDelay_cf) ? y :
    rtb_UnitDelay_cf;
  rtb_Abs_k = (y >= rtb_Abs_co) || rtIsNaN(rtb_Abs_co) ? y : rtb_Abs_co;

  /* RelationalOperator: '<S798>/Relational Operator9' incorporates:
   *  MinMax: '<S799>/MinMax'
   */
  rtb_LogicalOperator6_b = (rtb_Abs_k < BaseEngineController_LS_B.s792_MinMax);

  /* RelationalOperator: '<S798>/Relational Operator5' incorporates:
   *  MinMax: '<S799>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S764>/motohawk_calibration9'
   */
  rtb_RelationalOperator5_fz = (rtb_Abs_k <= (APP1_AdaptAdapt_Low_Max_DataStore()));

  /* RelationalOperator: '<S798>/Relational Operator6' incorporates:
   *  MinMax: '<S799>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S764>/motohawk_calibration10'
   */
  rtb_RelationalOperator6_h0 = (rtb_Abs_k >= (APP1_AdaptAdapt_Low_Min_DataStore()));

  /* Sum: '<S798>/Sum2' incorporates:
   *  MinMax: '<S799>/MinMax'
   */
  rtb_Abs_co = rtb_Abs_k - BaseEngineController_LS_B.s792_MinMax;

  /* Abs: '<S798>/Abs' */
  rtb_Abs_co = fabs(rtb_Abs_co);

  /* Outputs for Enabled SubSystem: '<S798>/Store Current Position' incorporates:
   *  EnablePort: '<S801>/Enable'
   */
  /* Logic: '<S798>/Logical Operator2' incorporates:
   *  Logic: '<S798>/Logical Operator1'
   *  Logic: '<S798>/Logical Operator4'
   *  RelationalOperator: '<S798>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S792>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S792>/motohawk_calibration14'
   */
  if ((rtb_LogicalOperator6_b && rtb_RelationalOperator5_fz &&
       rtb_RelationalOperator6_h0 && (APP1_AdaptAdaptLoEnable_DataStore()) &&
       (rtb_Abs_co > (APP1_AdaptAdapt_Delta_DataStore()))) ||
      (rtb_RelationalOperator5_fz && rtb_RelationalOperator6_h0 &&
       (APP1_AdaptAdaptLoEnable_DataStore()) && rtb_RelationalOperator3_bp)) {
    /* DataTypeConversion: '<S801>/Data Type Conversion2' incorporates:
     *  MinMax: '<S799>/MinMax'
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

    /* End of DataTypeConversion: '<S801>/Data Type Conversion2' */

    /* S-Function (motohawk_sfun_data_write): '<S801>/motohawk_data_write' */
    /* Write to Data Storage as scalar: APP1_AdaptRaw_Adpt_Low */
    {
      APP1_AdaptRaw_Adpt_Low_DataStore() = rtb_DataTypeConversion2_hr;
    }
  }

  /* End of Logic: '<S798>/Logical Operator2' */
  /* End of Outputs for SubSystem: '<S798>/Store Current Position' */

  /* RelationalOperator: '<S810>/Relational Operator5' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S810>/motohawk_calibration5'
   */
  rtb_RelationalOperator5_a = ((BaseEngineController_LS_B.s765_Switch >
    (APP2_AdaptInputHiFltPos_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S810>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: APP2_AdaptRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(18, rtb_RelationalOperator5_a);
    UpdateFault(18);
  }

  /* RelationalOperator: '<S810>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S810>/motohawk_calibration6'
   */
  rtb_RelationalOperator4_d = ((BaseEngineController_LS_B.s765_Switch <
    (APP2_AdaptInputLoFltPos_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S810>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: APP2_AdaptRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(19, rtb_RelationalOperator4_d);
    UpdateFault(19);
  }

  /* RelationalOperator: '<S810>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S765>/motohawk_calibration9'
   */
  rtb_RelationalOperator_f = ((BaseEngineController_LS_B.s809_MinMax >
    (APP2_AdaptAdapt_Low_Max_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S810>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: APP2_AdaptAdaptLoMax */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(16, rtb_RelationalOperator_f);
    UpdateFault(16);
  }

  /* RelationalOperator: '<S810>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S765>/motohawk_calibration12'
   */
  rtb_RelationalOperator3_n3 = ((BaseEngineController_LS_B.s809_MinMax1 >
    (APP2_AdaptAdapt_Hi_Max_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S810>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: APP2_AdaptAdaptHiMax */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(14, rtb_RelationalOperator3_n3);
    UpdateFault(14);
  }

  /* RelationalOperator: '<S810>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S765>/motohawk_calibration11'
   */
  rtb_RelationalOperator2_ma = ((BaseEngineController_LS_B.s809_MinMax1 <
    (APP2_AdaptAdapt_Hi_Min_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S810>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: APP2_AdaptAdaptHiMin */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(15, rtb_RelationalOperator2_ma);
    UpdateFault(15);
  }

  /* RelationalOperator: '<S810>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S765>/motohawk_calibration10'
   */
  rtb_RelationalOperator1_gr = ((BaseEngineController_LS_B.s809_MinMax <
    (APP2_AdaptAdapt_Low_Min_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S810>/motohawk_fault_def8' */

  /* Set Fault Suspected Status: APP2_AdaptAdaptLoMin */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(17, rtb_RelationalOperator1_gr);
    UpdateFault(17);
  }

  /* UnitDelay: '<S816>/Unit Delay1' */
  rtb_Abs_co = BaseEngineController_LS_DWork.s816_UnitDelay1_DSTATE;

  /* UnitDelay: '<S816>/Unit Delay' */
  rtb_Product6_m = BaseEngineController_LS_DWork.s816_UnitDelay_DSTATE;

  /* UnitDelay: '<S816>/Unit Delay3' */
  rtb_Product7_i = BaseEngineController_LS_DWork.s816_UnitDelay3_DSTATE;

  /* UnitDelay: '<S816>/Unit Delay4' */
  rtb_Product5_j = BaseEngineController_LS_DWork.s816_UnitDelay4_DSTATE;

  /* MinMax: '<S816>/MinMax1' incorporates:
   *  UnitDelay: '<S816>/Unit Delay'
   *  UnitDelay: '<S816>/Unit Delay3'
   *  UnitDelay: '<S816>/Unit Delay4'
   */
  y = (rtb_Abs_co <= BaseEngineController_LS_DWork.s816_UnitDelay_DSTATE) ||
    rtIsNaN(BaseEngineController_LS_DWork.s816_UnitDelay_DSTATE) ? rtb_Abs_co :
    BaseEngineController_LS_DWork.s816_UnitDelay_DSTATE;
  y = (y <= BaseEngineController_LS_DWork.s816_UnitDelay3_DSTATE) || rtIsNaN
    (BaseEngineController_LS_DWork.s816_UnitDelay3_DSTATE) ? y :
    BaseEngineController_LS_DWork.s816_UnitDelay3_DSTATE;
  y = (y <= BaseEngineController_LS_DWork.s816_UnitDelay4_DSTATE) || rtIsNaN
    (BaseEngineController_LS_DWork.s816_UnitDelay4_DSTATE) ? y :
    BaseEngineController_LS_DWork.s816_UnitDelay4_DSTATE;
  u = (y <= BaseEngineController_LS_B.s765_Switch) || rtIsNaN
    (BaseEngineController_LS_B.s765_Switch) ? y :
    BaseEngineController_LS_B.s765_Switch;

  /* RelationalOperator: '<S814>/Relational Operator9' incorporates:
   *  MinMax: '<S816>/MinMax1'
   */
  rtb_LogicalOperator6_b = (u > BaseEngineController_LS_B.s809_MinMax1);

  /* RelationalOperator: '<S814>/Relational Operator5' incorporates:
   *  MinMax: '<S816>/MinMax1'
   *  S-Function (motohawk_sfun_calibration): '<S765>/motohawk_calibration12'
   */
  rtb_RelationalOperator5_fz = (u <= (APP2_AdaptAdapt_Hi_Max_DataStore()));

  /* RelationalOperator: '<S814>/Relational Operator6' incorporates:
   *  MinMax: '<S816>/MinMax1'
   *  S-Function (motohawk_sfun_calibration): '<S765>/motohawk_calibration11'
   */
  rtb_RelationalOperator6_h0 = (u >= (APP2_AdaptAdapt_Hi_Min_DataStore()));

  /* Sum: '<S814>/Sum2' incorporates:
   *  MinMax: '<S816>/MinMax1'
   */
  rtb_Abs_k = u - BaseEngineController_LS_B.s809_MinMax1;

  /* Abs: '<S814>/Abs' */
  rtb_Abs_k = fabs(rtb_Abs_k);

  /* Outputs for Enabled SubSystem: '<S814>/Store Current Position' incorporates:
   *  EnablePort: '<S817>/Enable'
   */
  /* Logic: '<S814>/Logical Operator2' incorporates:
   *  Logic: '<S814>/Logical Operator1'
   *  Logic: '<S814>/Logical Operator4'
   *  RelationalOperator: '<S814>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S809>/motohawk_calibration14'
   *  S-Function (motohawk_sfun_calibration): '<S809>/motohawk_calibration2'
   */
  if ((rtb_LogicalOperator6_b && rtb_RelationalOperator5_fz &&
       rtb_RelationalOperator6_h0 && (APP2_AdaptAdaptHiEnable_DataStore()) &&
       (rtb_Abs_k > (APP2_AdaptAdapt_Delta_DataStore()))) ||
      (rtb_RelationalOperator5_fz && rtb_RelationalOperator6_h0 &&
       (APP2_AdaptAdaptHiEnable_DataStore()) && rtb_RelOp_pu)) {
    /* DataTypeConversion: '<S817>/Data Type Conversion2' incorporates:
     *  MinMax: '<S816>/MinMax1'
     */
    if (u < 65536.0) {
      if (u >= 0.0) {
        rtb_DataTypeConversion2_h = (uint16_T)u;
      } else {
        rtb_DataTypeConversion2_h = 0U;
      }
    } else {
      rtb_DataTypeConversion2_h = MAX_uint16_T;
    }

    /* End of DataTypeConversion: '<S817>/Data Type Conversion2' */

    /* S-Function (motohawk_sfun_data_write): '<S817>/motohawk_data_write' */
    /* Write to Data Storage as scalar: APP2_AdaptRaw_Adpt_Hi */
    {
      APP2_AdaptRaw_Adpt_Hi_DataStore() = rtb_DataTypeConversion2_h;
    }
  }

  /* End of Logic: '<S814>/Logical Operator2' */
  /* End of Outputs for SubSystem: '<S814>/Store Current Position' */

  /* MinMax: '<S816>/MinMax' */
  y = (BaseEngineController_LS_B.s765_Switch >= rtb_Product5_j) || rtIsNaN
    (rtb_Product5_j) ? BaseEngineController_LS_B.s765_Switch : rtb_Product5_j;
  y = (y >= rtb_Product7_i) || rtIsNaN(rtb_Product7_i) ? y : rtb_Product7_i;
  y = (y >= rtb_Product6_m) || rtIsNaN(rtb_Product6_m) ? y : rtb_Product6_m;
  rtb_Abs_k = (y >= rtb_Abs_co) || rtIsNaN(rtb_Abs_co) ? y : rtb_Abs_co;

  /* RelationalOperator: '<S815>/Relational Operator9' incorporates:
   *  MinMax: '<S816>/MinMax'
   */
  rtb_LogicalOperator6_b = (rtb_Abs_k < BaseEngineController_LS_B.s809_MinMax);

  /* RelationalOperator: '<S815>/Relational Operator5' incorporates:
   *  MinMax: '<S816>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S765>/motohawk_calibration9'
   */
  rtb_RelationalOperator5_fz = (rtb_Abs_k <= (APP2_AdaptAdapt_Low_Max_DataStore()));

  /* RelationalOperator: '<S815>/Relational Operator6' incorporates:
   *  MinMax: '<S816>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S765>/motohawk_calibration10'
   */
  rtb_RelationalOperator6_h0 = (rtb_Abs_k >= (APP2_AdaptAdapt_Low_Min_DataStore()));

  /* Sum: '<S815>/Sum2' incorporates:
   *  MinMax: '<S816>/MinMax'
   */
  rtb_Abs_co = rtb_Abs_k - BaseEngineController_LS_B.s809_MinMax;

  /* Abs: '<S815>/Abs' */
  rtb_Abs_co = fabs(rtb_Abs_co);

  /* Outputs for Enabled SubSystem: '<S815>/Store Current Position' incorporates:
   *  EnablePort: '<S818>/Enable'
   */
  /* Logic: '<S815>/Logical Operator2' incorporates:
   *  Logic: '<S815>/Logical Operator1'
   *  Logic: '<S815>/Logical Operator4'
   *  RelationalOperator: '<S815>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S809>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S809>/motohawk_calibration14'
   */
  if ((rtb_LogicalOperator6_b && rtb_RelationalOperator5_fz &&
       rtb_RelationalOperator6_h0 && (APP2_AdaptAdaptLoEnable_DataStore()) &&
       (rtb_Abs_co > (APP2_AdaptAdapt_Delta_DataStore()))) ||
      (rtb_RelationalOperator5_fz && rtb_RelationalOperator6_h0 &&
       (APP2_AdaptAdaptLoEnable_DataStore()) && rtb_Switch1_mj)) {
    /* DataTypeConversion: '<S818>/Data Type Conversion2' incorporates:
     *  MinMax: '<S816>/MinMax'
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

    /* End of DataTypeConversion: '<S818>/Data Type Conversion2' */

    /* S-Function (motohawk_sfun_data_write): '<S818>/motohawk_data_write' */
    /* Write to Data Storage as scalar: APP2_AdaptRaw_Adpt_Low */
    {
      APP2_AdaptRaw_Adpt_Low_DataStore() = rtb_DataTypeConversion2_p2;
    }
  }

  /* End of Logic: '<S815>/Logical Operator2' */
  /* End of Outputs for SubSystem: '<S815>/Store Current Position' */

  /* RelationalOperator: '<S827>/Relational Operator5' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S827>/motohawk_calibration5'
   */
  rtb_RelationalOperator5_k = ((BaseEngineController_LS_B.s766_Switch >
    (TPS1InputHiFltPos_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S827>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: TPS1RangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(113, rtb_RelationalOperator5_k);
    UpdateFault(113);
  }

  /* RelationalOperator: '<S827>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S827>/motohawk_calibration6'
   */
  rtb_RelationalOperator4_p = ((BaseEngineController_LS_B.s766_Switch <
    (TPS1InputLoFltPos_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S827>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: TPS1RangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(114, rtb_RelationalOperator4_p);
    UpdateFault(114);
  }

  /* RelationalOperator: '<S827>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S766>/motohawk_calibration9'
   */
  rtb_RelationalOperator_cz = ((BaseEngineController_LS_B.s826_MinMax >
    (TPS1Adapt_Low_Max_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S827>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: TPS1AdaptLoMax */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(111, rtb_RelationalOperator_cz);
    UpdateFault(111);
  }

  /* RelationalOperator: '<S827>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S766>/motohawk_calibration12'
   */
  rtb_RelationalOperator3_kn = ((BaseEngineController_LS_B.s826_MinMax1 >
    (TPS1Adapt_Hi_Max_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S827>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: TPS1AdaptHiMax */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(109, rtb_RelationalOperator3_kn);
    UpdateFault(109);
  }

  /* RelationalOperator: '<S827>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S766>/motohawk_calibration11'
   */
  rtb_RelationalOperator2_id = ((BaseEngineController_LS_B.s826_MinMax1 <
    (TPS1Adapt_Hi_Min_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S827>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: TPS1AdaptHiMin */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(110, rtb_RelationalOperator2_id);
    UpdateFault(110);
  }

  /* RelationalOperator: '<S827>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S766>/motohawk_calibration10'
   */
  rtb_RelationalOperator1_px = ((BaseEngineController_LS_B.s826_MinMax <
    (TPS1Adapt_Low_Min_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S827>/motohawk_fault_def8' */

  /* Set Fault Suspected Status: TPS1AdaptLoMin */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(112, rtb_RelationalOperator1_px);
    UpdateFault(112);
  }

  /* UnitDelay: '<S833>/Unit Delay1' */
  rtb_Abs_co = BaseEngineController_LS_DWork.s833_UnitDelay1_DSTATE;

  /* UnitDelay: '<S833>/Unit Delay' */
  rtb_DataTypeConversion_m = BaseEngineController_LS_DWork.s833_UnitDelay_DSTATE;

  /* UnitDelay: '<S833>/Unit Delay3' */
  rtb_Product_oj = BaseEngineController_LS_DWork.s833_UnitDelay3_DSTATE;

  /* UnitDelay: '<S833>/Unit Delay4' */
  rtb_Switch_c = BaseEngineController_LS_DWork.s833_UnitDelay4_DSTATE;

  /* MinMax: '<S833>/MinMax1' incorporates:
   *  UnitDelay: '<S833>/Unit Delay'
   *  UnitDelay: '<S833>/Unit Delay3'
   *  UnitDelay: '<S833>/Unit Delay4'
   */
  y = (rtb_Abs_co <= BaseEngineController_LS_DWork.s833_UnitDelay_DSTATE) ||
    rtIsNaN(BaseEngineController_LS_DWork.s833_UnitDelay_DSTATE) ? rtb_Abs_co :
    BaseEngineController_LS_DWork.s833_UnitDelay_DSTATE;
  y = (y <= BaseEngineController_LS_DWork.s833_UnitDelay3_DSTATE) || rtIsNaN
    (BaseEngineController_LS_DWork.s833_UnitDelay3_DSTATE) ? y :
    BaseEngineController_LS_DWork.s833_UnitDelay3_DSTATE;
  y = (y <= BaseEngineController_LS_DWork.s833_UnitDelay4_DSTATE) || rtIsNaN
    (BaseEngineController_LS_DWork.s833_UnitDelay4_DSTATE) ? y :
    BaseEngineController_LS_DWork.s833_UnitDelay4_DSTATE;
  u = (y <= BaseEngineController_LS_B.s766_Switch) || rtIsNaN
    (BaseEngineController_LS_B.s766_Switch) ? y :
    BaseEngineController_LS_B.s766_Switch;

  /* RelationalOperator: '<S831>/Relational Operator9' incorporates:
   *  MinMax: '<S833>/MinMax1'
   */
  rtb_LogicalOperator6_b = (u > BaseEngineController_LS_B.s826_MinMax1);

  /* RelationalOperator: '<S831>/Relational Operator5' incorporates:
   *  MinMax: '<S833>/MinMax1'
   *  S-Function (motohawk_sfun_calibration): '<S766>/motohawk_calibration12'
   */
  rtb_RelationalOperator5_fz = (u <= (TPS1Adapt_Hi_Max_DataStore()));

  /* RelationalOperator: '<S831>/Relational Operator6' incorporates:
   *  MinMax: '<S833>/MinMax1'
   *  S-Function (motohawk_sfun_calibration): '<S766>/motohawk_calibration11'
   */
  rtb_RelationalOperator6_h0 = (u >= (TPS1Adapt_Hi_Min_DataStore()));

  /* Sum: '<S831>/Sum2' incorporates:
   *  MinMax: '<S833>/MinMax1'
   */
  rtb_Abs_k = u - BaseEngineController_LS_B.s826_MinMax1;

  /* Abs: '<S831>/Abs' */
  rtb_Abs_k = fabs(rtb_Abs_k);

  /* Outputs for Enabled SubSystem: '<S831>/Store Current Position' incorporates:
   *  EnablePort: '<S834>/Enable'
   */
  /* Logic: '<S831>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S831>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S826>/motohawk_calibration14'
   *  S-Function (motohawk_sfun_calibration): '<S826>/motohawk_calibration2'
   */
  if (rtb_LogicalOperator6_b && rtb_RelationalOperator5_fz &&
      rtb_RelationalOperator6_h0 && (TPS1AdaptHiEnable_DataStore()) &&
      (rtb_Abs_k > (TPS1Adapt_Delta_DataStore()))) {
    /* DataTypeConversion: '<S834>/Data Type Conversion2' incorporates:
     *  MinMax: '<S833>/MinMax1'
     */
    if (u < 65536.0) {
      if (u >= 0.0) {
        rtb_DataTypeConversion2_k = (uint16_T)u;
      } else {
        rtb_DataTypeConversion2_k = 0U;
      }
    } else {
      rtb_DataTypeConversion2_k = MAX_uint16_T;
    }

    /* End of DataTypeConversion: '<S834>/Data Type Conversion2' */

    /* S-Function (motohawk_sfun_data_write): '<S834>/motohawk_data_write' */
    /* Write to Data Storage as scalar: TPS1Raw_Adpt_Hi */
    {
      TPS1Raw_Adpt_Hi_DataStore() = rtb_DataTypeConversion2_k;
    }
  }

  /* End of Logic: '<S831>/Logical Operator1' */
  /* End of Outputs for SubSystem: '<S831>/Store Current Position' */

  /* MinMax: '<S833>/MinMax' */
  y = (BaseEngineController_LS_B.s766_Switch >= rtb_Switch_c) || rtIsNaN
    (rtb_Switch_c) ? BaseEngineController_LS_B.s766_Switch : rtb_Switch_c;
  y = (y >= rtb_Product_oj) || rtIsNaN(rtb_Product_oj) ? y : rtb_Product_oj;
  y = (y >= rtb_DataTypeConversion_m) || rtIsNaN(rtb_DataTypeConversion_m) ? y :
    rtb_DataTypeConversion_m;
  rtb_Abs_k = (y >= rtb_Abs_co) || rtIsNaN(rtb_Abs_co) ? y : rtb_Abs_co;

  /* RelationalOperator: '<S832>/Relational Operator9' incorporates:
   *  MinMax: '<S833>/MinMax'
   */
  rtb_LogicalOperator6_b = (rtb_Abs_k < BaseEngineController_LS_B.s826_MinMax);

  /* RelationalOperator: '<S832>/Relational Operator5' incorporates:
   *  MinMax: '<S833>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S766>/motohawk_calibration9'
   */
  rtb_RelationalOperator5_fz = (rtb_Abs_k <= (TPS1Adapt_Low_Max_DataStore()));

  /* RelationalOperator: '<S832>/Relational Operator6' incorporates:
   *  MinMax: '<S833>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S766>/motohawk_calibration10'
   */
  rtb_RelationalOperator6_h0 = (rtb_Abs_k >= (TPS1Adapt_Low_Min_DataStore()));

  /* Sum: '<S832>/Sum2' incorporates:
   *  MinMax: '<S833>/MinMax'
   */
  rtb_Abs_co = rtb_Abs_k - BaseEngineController_LS_B.s826_MinMax;

  /* Abs: '<S832>/Abs' */
  rtb_Abs_co = fabs(rtb_Abs_co);

  /* Logic: '<S832>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S832>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S826>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S826>/motohawk_calibration14'
   */
  rtb_LogicalOperator6_b = (rtb_LogicalOperator6_b && rtb_RelationalOperator5_fz
    && rtb_RelationalOperator6_h0 && (TPS1AdaptLoEnable_DataStore()) &&
    (rtb_Abs_co > (TPS1Adapt_Delta_DataStore())));

  /* Outputs for Enabled SubSystem: '<S832>/Store Current Position' incorporates:
   *  EnablePort: '<S835>/Enable'
   */
  /* Logic: '<S832>/Logical Operator2' incorporates:
   *  Logic: '<S832>/Logical Operator4'
   *  S-Function (motohawk_sfun_calibration): '<S826>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S456>/motohawk_data_read'
   */
  if (rtb_LogicalOperator6_b || (rtb_RelationalOperator5_fz &&
       rtb_RelationalOperator6_h0 && (TPS1AdaptLoEnable_DataStore()) &&
       TPSAdaptLoRequest_DataStore())) {
    /* DataTypeConversion: '<S835>/Data Type Conversion2' incorporates:
     *  MinMax: '<S833>/MinMax'
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

    /* End of DataTypeConversion: '<S835>/Data Type Conversion2' */

    /* S-Function (motohawk_sfun_data_write): '<S835>/motohawk_data_write' */
    /* Write to Data Storage as scalar: TPS1Raw_Adpt_Low */
    {
      TPS1Raw_Adpt_Low_DataStore() = rtb_DataTypeConversion2_n;
    }
  }

  /* End of Logic: '<S832>/Logical Operator2' */
  /* End of Outputs for SubSystem: '<S832>/Store Current Position' */

  /* RelationalOperator: '<S844>/Relational Operator5' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S844>/motohawk_calibration5'
   */
  rtb_RelationalOperator5_g = ((BaseEngineController_LS_B.s767_Switch >
    (TPS2InputHiFltPos_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S844>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: TPS2RangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(119, rtb_RelationalOperator5_g);
    UpdateFault(119);
  }

  /* RelationalOperator: '<S844>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S844>/motohawk_calibration6'
   */
  rtb_RelationalOperator4_d1 = ((BaseEngineController_LS_B.s767_Switch <
    (TPS2InputLoFltPos_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S844>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: TPS2RangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(120, rtb_RelationalOperator4_d1);
    UpdateFault(120);
  }

  /* RelationalOperator: '<S844>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S767>/motohawk_calibration9'
   */
  rtb_RelationalOperator_fa = ((BaseEngineController_LS_B.s843_MinMax >
    (TPS2Adapt_Low_Max_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S844>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: TPS2AdaptLoMax */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(117, rtb_RelationalOperator_fa);
    UpdateFault(117);
  }

  /* RelationalOperator: '<S844>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S767>/motohawk_calibration12'
   */
  rtb_RelationalOperator3_jk = ((BaseEngineController_LS_B.s843_MinMax1 >
    (TPS2Adapt_Hi_Max_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S844>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: TPS2AdaptHiMax */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(115, rtb_RelationalOperator3_jk);
    UpdateFault(115);
  }

  /* RelationalOperator: '<S844>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S767>/motohawk_calibration11'
   */
  rtb_RelationalOperator2_or = ((BaseEngineController_LS_B.s843_MinMax1 <
    (TPS2Adapt_Hi_Min_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S844>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: TPS2AdaptHiMin */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(116, rtb_RelationalOperator2_or);
    UpdateFault(116);
  }

  /* RelationalOperator: '<S844>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S767>/motohawk_calibration10'
   */
  rtb_RelationalOperator1_d = ((BaseEngineController_LS_B.s843_MinMax <
    (TPS2Adapt_Low_Min_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S844>/motohawk_fault_def8' */

  /* Set Fault Suspected Status: TPS2AdaptLoMin */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(118, rtb_RelationalOperator1_d);
    UpdateFault(118);
  }

  /* UnitDelay: '<S850>/Unit Delay1' */
  rtb_Abs_co = BaseEngineController_LS_DWork.s850_UnitDelay1_DSTATE;

  /* UnitDelay: '<S850>/Unit Delay' */
  rtb_Switch_k2 = BaseEngineController_LS_DWork.s850_UnitDelay_DSTATE;

  /* UnitDelay: '<S850>/Unit Delay3' */
  rtb_Switch_f = BaseEngineController_LS_DWork.s850_UnitDelay3_DSTATE;

  /* UnitDelay: '<S850>/Unit Delay4' */
  rtb_APP2 = BaseEngineController_LS_DWork.s850_UnitDelay4_DSTATE;

  /* MinMax: '<S850>/MinMax1' incorporates:
   *  UnitDelay: '<S850>/Unit Delay'
   *  UnitDelay: '<S850>/Unit Delay3'
   *  UnitDelay: '<S850>/Unit Delay4'
   */
  y = (rtb_Abs_co <= BaseEngineController_LS_DWork.s850_UnitDelay_DSTATE) ||
    rtIsNaN(BaseEngineController_LS_DWork.s850_UnitDelay_DSTATE) ? rtb_Abs_co :
    BaseEngineController_LS_DWork.s850_UnitDelay_DSTATE;
  y = (y <= BaseEngineController_LS_DWork.s850_UnitDelay3_DSTATE) || rtIsNaN
    (BaseEngineController_LS_DWork.s850_UnitDelay3_DSTATE) ? y :
    BaseEngineController_LS_DWork.s850_UnitDelay3_DSTATE;
  y = (y <= BaseEngineController_LS_DWork.s850_UnitDelay4_DSTATE) || rtIsNaN
    (BaseEngineController_LS_DWork.s850_UnitDelay4_DSTATE) ? y :
    BaseEngineController_LS_DWork.s850_UnitDelay4_DSTATE;
  u = (y <= BaseEngineController_LS_B.s767_Switch) || rtIsNaN
    (BaseEngineController_LS_B.s767_Switch) ? y :
    BaseEngineController_LS_B.s767_Switch;

  /* RelationalOperator: '<S848>/Relational Operator9' incorporates:
   *  MinMax: '<S850>/MinMax1'
   */
  rtb_LogicalOperator6_b = (u > BaseEngineController_LS_B.s843_MinMax1);

  /* RelationalOperator: '<S848>/Relational Operator5' incorporates:
   *  MinMax: '<S850>/MinMax1'
   *  S-Function (motohawk_sfun_calibration): '<S767>/motohawk_calibration12'
   */
  rtb_RelationalOperator5_fz = (u <= (TPS2Adapt_Hi_Max_DataStore()));

  /* RelationalOperator: '<S848>/Relational Operator6' incorporates:
   *  MinMax: '<S850>/MinMax1'
   *  S-Function (motohawk_sfun_calibration): '<S767>/motohawk_calibration11'
   */
  rtb_RelationalOperator6_h0 = (u >= (TPS2Adapt_Hi_Min_DataStore()));

  /* Sum: '<S848>/Sum2' incorporates:
   *  MinMax: '<S850>/MinMax1'
   */
  rtb_Abs_k = u - BaseEngineController_LS_B.s843_MinMax1;

  /* Abs: '<S848>/Abs' */
  rtb_Abs_k = fabs(rtb_Abs_k);

  /* Outputs for Enabled SubSystem: '<S848>/Store Current Position' incorporates:
   *  EnablePort: '<S851>/Enable'
   */
  /* Logic: '<S848>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S848>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S843>/motohawk_calibration14'
   *  S-Function (motohawk_sfun_calibration): '<S843>/motohawk_calibration2'
   */
  if (rtb_LogicalOperator6_b && rtb_RelationalOperator5_fz &&
      rtb_RelationalOperator6_h0 && (TPS2AdaptHiEnable_DataStore()) &&
      (rtb_Abs_k > (TPS2Adapt_Delta_DataStore()))) {
    /* DataTypeConversion: '<S851>/Data Type Conversion2' incorporates:
     *  MinMax: '<S850>/MinMax1'
     */
    if (u < 65536.0) {
      if (u >= 0.0) {
        rtb_DataTypeConversion2_jn = (uint16_T)u;
      } else {
        rtb_DataTypeConversion2_jn = 0U;
      }
    } else {
      rtb_DataTypeConversion2_jn = MAX_uint16_T;
    }

    /* End of DataTypeConversion: '<S851>/Data Type Conversion2' */

    /* S-Function (motohawk_sfun_data_write): '<S851>/motohawk_data_write' */
    /* Write to Data Storage as scalar: TPS2Raw_Adpt_Hi */
    {
      TPS2Raw_Adpt_Hi_DataStore() = rtb_DataTypeConversion2_jn;
    }
  }

  /* End of Logic: '<S848>/Logical Operator1' */
  /* End of Outputs for SubSystem: '<S848>/Store Current Position' */

  /* MinMax: '<S850>/MinMax' */
  y = (BaseEngineController_LS_B.s767_Switch >= rtb_APP2) || rtIsNaN(rtb_APP2) ?
    BaseEngineController_LS_B.s767_Switch : rtb_APP2;
  y = (y >= rtb_Switch_f) || rtIsNaN(rtb_Switch_f) ? y : rtb_Switch_f;
  y = (y >= rtb_Switch_k2) || rtIsNaN(rtb_Switch_k2) ? y : rtb_Switch_k2;
  rtb_Abs_k = (y >= rtb_Abs_co) || rtIsNaN(rtb_Abs_co) ? y : rtb_Abs_co;

  /* RelationalOperator: '<S849>/Relational Operator9' incorporates:
   *  MinMax: '<S850>/MinMax'
   */
  rtb_LogicalOperator6_b = (rtb_Abs_k < BaseEngineController_LS_B.s843_MinMax);

  /* RelationalOperator: '<S849>/Relational Operator5' incorporates:
   *  MinMax: '<S850>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S767>/motohawk_calibration9'
   */
  rtb_RelationalOperator5_fz = (rtb_Abs_k <= (TPS2Adapt_Low_Max_DataStore()));

  /* RelationalOperator: '<S849>/Relational Operator6' incorporates:
   *  MinMax: '<S850>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S767>/motohawk_calibration10'
   */
  rtb_RelationalOperator6_h0 = (rtb_Abs_k >= (TPS2Adapt_Low_Min_DataStore()));

  /* Sum: '<S849>/Sum2' incorporates:
   *  MinMax: '<S850>/MinMax'
   */
  rtb_Abs_co = rtb_Abs_k - BaseEngineController_LS_B.s843_MinMax;

  /* Abs: '<S849>/Abs' */
  rtb_Abs_co = fabs(rtb_Abs_co);

  /* Outputs for Enabled SubSystem: '<S849>/Store Current Position' incorporates:
   *  EnablePort: '<S852>/Enable'
   */
  /* Logic: '<S849>/Logical Operator2' incorporates:
   *  Logic: '<S849>/Logical Operator1'
   *  Logic: '<S849>/Logical Operator4'
   *  RelationalOperator: '<S849>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S843>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S843>/motohawk_calibration14'
   *  S-Function (motohawk_sfun_data_read): '<S456>/motohawk_data_read'
   */
  if ((rtb_LogicalOperator6_b && rtb_RelationalOperator5_fz &&
       rtb_RelationalOperator6_h0 && (TPS2AdaptLoEnable_DataStore()) &&
       (rtb_Abs_co > (TPS2Adapt_Delta_DataStore()))) ||
      (rtb_RelationalOperator5_fz && rtb_RelationalOperator6_h0 &&
       (TPS2AdaptLoEnable_DataStore()) && TPSAdaptLoRequest_DataStore())) {
    /* DataTypeConversion: '<S852>/Data Type Conversion2' incorporates:
     *  MinMax: '<S850>/MinMax'
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

    /* End of DataTypeConversion: '<S852>/Data Type Conversion2' */

    /* S-Function (motohawk_sfun_data_write): '<S852>/motohawk_data_write' */
    /* Write to Data Storage as scalar: TPS2Raw_Adpt_Low */
    {
      TPS2Raw_Adpt_Low_DataStore() = rtb_DataTypeConversion2_o;
    }
  }

  /* End of Logic: '<S849>/Logical Operator2' */
  /* End of Outputs for SubSystem: '<S849>/Store Current Position' */

  /* Update for S-Function (motohawk_sfun_dout): '<S860>/motohawk_dout' */

  /* S-Function Block: DOut8754p0001 */
  {
    DOut8754p0001_DiscreteOutput_Set
      (BaseEngineController_LS_B.s870_LogicalOperator);
  }

  /* Update for UnitDelay: '<S577>/Unit Delay' */
  BaseEngineController_LS_DWork.s577_UnitDelay_DSTATE =
    BaseEngineController_LS_B.s577_Switch;

  /* Update for UnitDelay: '<S615>/Unit Delay' */
  BaseEngineController_LS_DWork.s615_UnitDelay_DSTATE =
    BaseEngineController_LS_B.s610_Merge;

  /* Update for UnitDelay: '<S576>/Unit Delay' */
  BaseEngineController_LS_DWork.s576_UnitDelay_DSTATE = rtb_Merge_j;

  /* Update for UnitDelay: '<S612>/Unit Delay' */
  BaseEngineController_LS_DWork.s612_UnitDelay_DSTATE = rtb_Sum1_g3;

  /* Update for UnitDelay: '<S577>/Unit Delay1' */
  BaseEngineController_LS_DWork.s577_UnitDelay1_DSTATE =
    BaseEngineController_LS_B.s610_Merge;

  /* Update for UnitDelay: '<S616>/Unit Delay' */
  BaseEngineController_LS_DWork.s616_UnitDelay_DSTATE = rtb_LogicalOperator1_c;

  /* Update for UnitDelay: '<S577>/Unit Delay2' */
  BaseEngineController_LS_DWork.s577_UnitDelay2_DSTATE = rtb_Switch1_e;

  /* Update for Memory: '<S617>/Memory' */
  BaseEngineController_LS_DWork.s617_Memory_PreviousInput = rtb_Logic_j[0];

  /* Update for UnitDelay: '<S762>/Unit Delay' incorporates:
   *  MinMax: '<S785>/MinMax1'
   */
  BaseEngineController_LS_DWork.s762_UnitDelay_DSTATE = minV;

  /* Update for UnitDelay: '<S787>/Unit Delay' */
  BaseEngineController_LS_DWork.s787_UnitDelay_DSTATE = rtb_Sum1_nb;

  /* Update for UnitDelay: '<S819>/Unit Delay' */
  BaseEngineController_LS_DWork.s819_UnitDelay_DSTATE = rtb_Sum1_b4;

  /* Update for UnitDelay: '<S812>/Unit Delay1' */
  BaseEngineController_LS_DWork.s812_UnitDelay1_DSTATE = rtb_Merge_m;

  /* Update for UnitDelay: '<S760>/Unit Delay' incorporates:
   *  MinMax: '<S773>/MinMax1'
   */
  BaseEngineController_LS_DWork.s760_UnitDelay_DSTATE = minV_0;

  /* Update for UnitDelay: '<S775>/Unit Delay' */
  BaseEngineController_LS_DWork.s775_UnitDelay_DSTATE = rtb_Sum1_m;

  /* Update for UnitDelay: '<S802>/Unit Delay' */
  BaseEngineController_LS_DWork.s802_UnitDelay_DSTATE = rtb_Sum1_h1;

  /* Update for UnitDelay: '<S795>/Unit Delay1' */
  BaseEngineController_LS_DWork.s795_UnitDelay1_DSTATE = rtb_Merge_ao;

  /* Update for UnitDelay: '<S417>/Unit Delay' */
  BaseEngineController_LS_DWork.s417_UnitDelay_DSTATE =
    BaseEngineController_LS_B.s438_State;

  /* Update for UnitDelay: '<S628>/Unit Delay1' */
  BaseEngineController_LS_DWork.s628_UnitDelay1_DSTATE = rtb_Merge_b;

  /* Update for UnitDelay: '<S642>/Unit Delay' */
  BaseEngineController_LS_DWork.s642_UnitDelay_DSTATE = rtb_Sum1_li;

  /* Update for UnitDelay: '<S627>/Unit Delay' */
  BaseEngineController_LS_DWork.s627_UnitDelay_DSTATE =
    BaseEngineController_LS_B.s627_Sum1;

  /* Update for UnitDelay: '<S836>/Unit Delay' */
  BaseEngineController_LS_DWork.s836_UnitDelay_DSTATE = rtb_Sum1_hw;

  /* Update for UnitDelay: '<S829>/Unit Delay1' */
  BaseEngineController_LS_DWork.s829_UnitDelay1_DSTATE = rtb_Merge_li;

  /* Update for UnitDelay: '<S853>/Unit Delay' */
  BaseEngineController_LS_DWork.s853_UnitDelay_DSTATE = rtb_Sum1_lp;

  /* Update for UnitDelay: '<S846>/Unit Delay1' */
  BaseEngineController_LS_DWork.s846_UnitDelay1_DSTATE = rtb_Merge_mv;

  /* Update for UnitDelay: '<S654>/Unit Delay' */
  BaseEngineController_LS_DWork.s654_UnitDelay_DSTATE = rtb_Sum2_gr;

  /* Update for UnitDelay: '<S629>/Unit Delay1' */
  BaseEngineController_LS_DWork.s629_UnitDelay1_DSTATE = rtb_Merge_i;

  /* Update for UnitDelay: '<S653>/Unit Delay' */
  BaseEngineController_LS_DWork.s653_UnitDelay_DSTATE = rtb_Sum1_mz;

  /* Update for UnitDelay: '<S651>/Unit Delay' */
  BaseEngineController_LS_DWork.s651_UnitDelay_DSTATE = rtb_Merge_i;

  /* Update for UnitDelay: '<S651>/Unit Delay1' */
  BaseEngineController_LS_DWork.s651_UnitDelay1_DSTATE = rtb_UnitDelay_nd;

  /* Update for UnitDelay: '<S651>/Unit Delay2' */
  BaseEngineController_LS_DWork.s651_UnitDelay2_DSTATE = rtb_UnitDelay1_h;

  /* Update for UnitDelay: '<S420>/Unit Delay' */
  BaseEngineController_LS_DWork.s420_UnitDelay_DSTATE =
    BaseEngineController_LS_B.s458_Gain;

  /* Update for UnitDelay: '<S499>/Unit Delay1' */
  BaseEngineController_LS_DWork.s499_UnitDelay1_DSTATE = rtb_Merge_h;

  /* Update for UnitDelay: '<S531>/Unit Delay' */
  BaseEngineController_LS_DWork.s531_UnitDelay_DSTATE = rtb_Sum1_du;

  /* Update for UnitDelay: '<S498>/Unit Delay1' */
  BaseEngineController_LS_DWork.s498_UnitDelay1_DSTATE = rtb_Merge_ox;

  /* Update for UnitDelay: '<S523>/Unit Delay' */
  BaseEngineController_LS_DWork.s523_UnitDelay_DSTATE = rtb_Sum1_ir;

  /* Update for UnitDelay: '<S636>/Unit Delay1' */
  BaseEngineController_LS_DWork.s636_UnitDelay1_DSTATE = rtb_Merge_f;

  /* Update for UnitDelay: '<S705>/Unit Delay' */
  BaseEngineController_LS_DWork.s705_UnitDelay_DSTATE = rtb_Sum1_nl;

  /* Update for UnitDelay: '<S631>/Unit Delay1' */
  BaseEngineController_LS_DWork.s631_UnitDelay1_DSTATE = rtb_Merge_in;

  /* Update for UnitDelay: '<S671>/Unit Delay' */
  BaseEngineController_LS_DWork.s671_UnitDelay_DSTATE = rtb_Sum1_d4;

  /* Update for UnitDelay: '<S632>/Unit Delay1' */
  BaseEngineController_LS_DWork.s632_UnitDelay1_DSTATE = rtb_Merge_jq;

  /* Update for UnitDelay: '<S378>/Unit Delay' */
  BaseEngineController_LS_DWork.s378_UnitDelay_DSTATE = rtb_Merge_b3;

  /* Update for UnitDelay: '<S573>/Unit Delay' */
  BaseEngineController_LS_DWork.s573_UnitDelay_DSTATE = rtb_Merge_dv;

  /* Update for UnitDelay: '<S593>/Unit Delay' */
  BaseEngineController_LS_DWork.s593_UnitDelay_DSTATE = rtb_Sum1_fm;

  /* Update for UnitDelay: '<S393>/Unit Delay2' */
  BaseEngineController_LS_DWork.s393_UnitDelay2_DSTATE = rtb_DesiredLambda_idx;

  /* Update for UnitDelay: '<S396>/Unit Delay' */
  BaseEngineController_LS_DWork.s396_UnitDelay_DSTATE =
    BaseEngineController_LS_B.s396_Sum1;

  /* Update for UnitDelay: '<S394>/Unit Delay2' */
  BaseEngineController_LS_DWork.s394_UnitDelay2_DSTATE = rtb_UnitDelay1_k;

  /* Update for UnitDelay: '<S399>/Unit Delay' */
  BaseEngineController_LS_DWork.s399_UnitDelay_DSTATE =
    BaseEngineController_LS_B.s399_Sum1;

  /* Update for UnitDelay: '<S435>/Unit Delay' */
  BaseEngineController_LS_DWork.s435_UnitDelay_DSTATE =
    BaseEngineController_LS_B.s627_Sum1;

  /* Update for UnitDelay: '<S437>/Unit Delay' */
  BaseEngineController_LS_DWork.s437_UnitDelay_DSTATE =
    BaseEngineController_LS_B.s437_Sum1;

  /* Update for UnitDelay: '<S679>/Unit Delay' */
  BaseEngineController_LS_DWork.s679_UnitDelay_DSTATE = rtb_Sum1_mzy;

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

  /* Update for UnitDelay: '<S390>/Unit Delay' */
  BaseEngineController_LS_DWork.s390_UnitDelay_DSTATE =
    rtb_RelationalOperator_e5;

  /* Update for UnitDelay: '<S389>/Initial Condition is True' incorporates:
   *  Constant: '<S389>/False After First Sample'
   */
  BaseEngineController_LS_DWork.s389_InitialConditionisTrue_DSTATE = FALSE;

  /* Update for UnitDelay: '<S388>/Unit Delay' */
  BaseEngineController_LS_DWork.s388_UnitDelay_DSTATE =
    BaseEngineController_LS_B.s388_Sum1;

  /* Update for UnitDelay: '<S630>/Unit Delay1' */
  BaseEngineController_LS_DWork.s630_UnitDelay1_DSTATE = rtb_Merge_b3f;

  /* Update for UnitDelay: '<S663>/Unit Delay' */
  BaseEngineController_LS_DWork.s663_UnitDelay_DSTATE = rtb_Sum1_c;

  /* Update for UnitDelay: '<S634>/Unit Delay1' */
  BaseEngineController_LS_DWork.s634_UnitDelay1_DSTATE = rtb_Merge_ol;

  /* Update for UnitDelay: '<S689>/Unit Delay' */
  BaseEngineController_LS_DWork.s689_UnitDelay_DSTATE = rtb_Sum1_o;

  /* Update for S-Function (motohawk_sfun_dout): '<S864>/motohawk_dout' */

  /* S-Function Block: DOut9366p0001 */
  {
    DOut9366p0001_DiscreteOutput_Set
      (BaseEngineController_LS_B.s916_LogicalOperator);
  }

  /* Update for S-Function (motohawk_sfun_pwm): '<S864>/motohawk_pwm' */

  /* S-Function Block: FAN1Pin_PWM_PWMOutput */
  FAN1Pin_PWM_PWMOutput_PWMOutput_Set(rtb_DataTypeConversion2_j,
    rtb_DataTypeConversion3_c, 0, 1);

  /* Update for S-Function (motohawk_sfun_dout): '<S864>/motohawk_dout1' */

  /* S-Function Block: DOut9367p0001 */
  {
    DOut9367p0001_DiscreteOutput_Set
      (BaseEngineController_LS_B.s917_LogicalOperator);
  }

  /* Update for S-Function (motohawk_sfun_pwm): '<S864>/motohawk_pwm1' */

  /* S-Function Block: FAN2Pin_PWM_PWMOutput */
  FAN2Pin_PWM_PWMOutput_PWMOutput_Set(rtb_DataTypeConversion2_e,
    rtb_DataTypeConversion3_k, 0, 1);

  /* Update for S-Function (motohawk_sfun_dout): '<S865>/motohawk_dout' */

  /* S-Function Block: DOut9387p0001 */
  {
    DOut9387p0001_DiscreteOutput_Set
      (BaseEngineController_LS_B.s934_LogicalOperator);
  }

  /* Update for S-Function (motohawk_sfun_pwm): '<S866>/motohawk_pwm1' */

  /* S-Function Block: ETCPin_PWMOutput */
  ETCPin_PWMOutput_PWMOutput_Set(rtb_DataTypeConversion3_j,
    rtb_DataTypeConversion4_m, 0, 1);

  /* Update for S-Function (motohawk_sfun_pwm): '<S867>/motohawk_pwm' */

  /* S-Function Block: IAC_PPin_PWMOutput */
  IAC_PPin_PWMOutput_PWMOutput_Set(rtb_DataTypeConversion2_l,
    rtb_DataTypeConversion3_p, 0, 1);

  /* Update for S-Function (motohawk_sfun_pwm): '<S867>/motohawk_pwm1' */

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

  /* Update for S-Function (motohawk_sfun_pwm): '<S869>/motohawk_pwm' */

  /* S-Function Block: WASTEGATE_PWMOutput */
  WASTEGATE_PWMOutput_PWMOutput_Set(rtb_DataTypeConversion2_p,
    rtb_DataTypeConversion3_e, 0, 1);

  /* Update for UnitDelay: '<S449>/Unit Delay' */
  BaseEngineController_LS_DWork.s449_UnitDelay_DSTATE = rtb_Switch_kj;

  /* Update for UnitDelay: '<S420>/Unit Delay1' */
  BaseEngineController_LS_DWork.s420_UnitDelay1_DSTATE =
    BaseEngineController_LS_B.s458_Gain;

  /* Update for UnitDelay: '<S635>/Unit Delay1' */
  BaseEngineController_LS_DWork.s635_UnitDelay1_DSTATE = rtb_Merge_ht;

  /* Update for UnitDelay: '<S697>/Unit Delay' */
  BaseEngineController_LS_DWork.s697_UnitDelay_DSTATE = rtb_Sum1_m3;

  /* Update for UnitDelay: '<S393>/Unit Delay1' */
  BaseEngineController_LS_DWork.s393_UnitDelay1_DSTATE = rtb_DesiredLambda_idx_0;

  /* Update for UnitDelay: '<S393>/Unit Delay3' */
  BaseEngineController_LS_DWork.s393_UnitDelay3_DSTATE = rtb_UnitDelay4_i;

  /* Update for UnitDelay: '<S393>/Unit Delay4' */
  BaseEngineController_LS_DWork.s393_UnitDelay4_DSTATE =
    BaseEngineController_LS_B.s627_Sum1;

  /* Update for UnitDelay: '<S394>/Unit Delay1' */
  BaseEngineController_LS_DWork.s394_UnitDelay1_DSTATE = rtb_UnitDelay3_j;

  /* Update for UnitDelay: '<S394>/Unit Delay3' */
  BaseEngineController_LS_DWork.s394_UnitDelay3_DSTATE = rtb_UnitDelay4_ie;

  /* Update for UnitDelay: '<S394>/Unit Delay4' */
  BaseEngineController_LS_DWork.s394_UnitDelay4_DSTATE =
    BaseEngineController_LS_B.s670_Merge;

  /* Update for UnitDelay: '<S799>/Unit Delay1' */
  BaseEngineController_LS_DWork.s799_UnitDelay1_DSTATE = rtb_UnitDelay_cf;

  /* Update for UnitDelay: '<S799>/Unit Delay' */
  BaseEngineController_LS_DWork.s799_UnitDelay_DSTATE = rtb_UnitDelay_ju;

  /* Update for UnitDelay: '<S799>/Unit Delay3' */
  BaseEngineController_LS_DWork.s799_UnitDelay3_DSTATE = rtb_Switch1_f;

  /* Update for UnitDelay: '<S799>/Unit Delay4' */
  BaseEngineController_LS_DWork.s799_UnitDelay4_DSTATE =
    BaseEngineController_LS_B.s764_Switch;

  /* Update for UnitDelay: '<S816>/Unit Delay1' */
  BaseEngineController_LS_DWork.s816_UnitDelay1_DSTATE = rtb_Product6_m;

  /* Update for UnitDelay: '<S816>/Unit Delay' */
  BaseEngineController_LS_DWork.s816_UnitDelay_DSTATE = rtb_Product7_i;

  /* Update for UnitDelay: '<S816>/Unit Delay3' */
  BaseEngineController_LS_DWork.s816_UnitDelay3_DSTATE = rtb_Product5_j;

  /* Update for UnitDelay: '<S816>/Unit Delay4' */
  BaseEngineController_LS_DWork.s816_UnitDelay4_DSTATE =
    BaseEngineController_LS_B.s765_Switch;

  /* Update for UnitDelay: '<S833>/Unit Delay1' */
  BaseEngineController_LS_DWork.s833_UnitDelay1_DSTATE =
    rtb_DataTypeConversion_m;

  /* Update for UnitDelay: '<S833>/Unit Delay' */
  BaseEngineController_LS_DWork.s833_UnitDelay_DSTATE = rtb_Product_oj;

  /* Update for UnitDelay: '<S833>/Unit Delay3' */
  BaseEngineController_LS_DWork.s833_UnitDelay3_DSTATE = rtb_Switch_c;

  /* Update for UnitDelay: '<S833>/Unit Delay4' */
  BaseEngineController_LS_DWork.s833_UnitDelay4_DSTATE =
    BaseEngineController_LS_B.s766_Switch;

  /* Update for UnitDelay: '<S850>/Unit Delay1' */
  BaseEngineController_LS_DWork.s850_UnitDelay1_DSTATE = rtb_Switch_k2;

  /* Update for UnitDelay: '<S850>/Unit Delay' */
  BaseEngineController_LS_DWork.s850_UnitDelay_DSTATE = rtb_Switch_f;

  /* Update for UnitDelay: '<S850>/Unit Delay3' */
  BaseEngineController_LS_DWork.s850_UnitDelay3_DSTATE = rtb_APP2;

  /* Update for UnitDelay: '<S850>/Unit Delay4' */
  BaseEngineController_LS_DWork.s850_UnitDelay4_DSTATE =
    BaseEngineController_LS_B.s767_Switch;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
