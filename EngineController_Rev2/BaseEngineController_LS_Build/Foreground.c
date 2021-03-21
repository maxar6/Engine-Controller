/*
 * File: Foreground.c
 *
 * Code generated for Simulink model 'BaseEngineController_LS'.
 *
 * Model version                  : 1.1996
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Thu Mar 18 14:59:10 2021
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

/* Named constants for Stateflow: '<S190>/Chart' */
#define BaseEngineController_LS_IN_DFCO_Off (1U)
#define BaseEngineController_LS_IN_DFCO_On (2U)
#define BaseEngineController_LS_IN_Normal (3U)

/* Named constants for Stateflow: '<S309>/Ice Break' */
#define BaseEngineController_LS_IN_Init (1U)
#define BaseEngineController_LS_IN_Open (2U)
#define BaseEngineController_LS_IN_Wait (3U)

/* Named constants for Stateflow: '<S366>/Baro Stall State Delay' */
#define BaseEngineController_LS_IN_CrankRun (1U)
#define BaseEngineController_LS_IN_Stall (2U)
#define BaseEngineController_LS_IN_StallDelay (3U)

/* Named constants for Stateflow: '<S410>/Engine State Machine' */
#define BaseEngineController_LS_IN_Crank (1U)
#define BaseEngineController_LS_IN_Run (2U)
#define BaseEngineController_LS_IN_Stall_m (3U)

/*
 * Initial conditions for enable system:
 *    '<S372>/Collect Average'
 *    '<S406>/Collect Average'
 *    '<S407>/Collect Average'
 */
void BaseEngineController_LS_CollectAverage_Init
  (rtDW_CollectAverage_BaseEngineController_LS *localDW)
{
  /* InitializeConditions for UnitDelay: '<S376>/Unit Delay1' */
  localDW->s376_UnitDelay1_DSTATE = 0.0;
}

/*
 * Disable for enable system:
 *    '<S372>/Collect Average'
 *    '<S406>/Collect Average'
 *    '<S407>/Collect Average'
 */
void BaseEngineController_LS_CollectAverage_Disable
  (rtDW_CollectAverage_BaseEngineController_LS *localDW)
{
  localDW->s372_CollectAverage_MODE = FALSE;
}

/*
 * Start for enable system:
 *    '<S372>/Collect Average'
 *    '<S406>/Collect Average'
 *    '<S407>/Collect Average'
 */
void BaseEngineController_LS_CollectAverage_Start
  (rtDW_CollectAverage_BaseEngineController_LS *localDW)
{
  BaseEngineController_LS_CollectAverage_Init(localDW);
}

/*
 * Output and update for enable system:
 *    '<S372>/Collect Average'
 *    '<S406>/Collect Average'
 *    '<S407>/Collect Average'
 */
void BaseEngineController_LS_CollectAverage(boolean_T rtu_0, int8_T rtu_Count,
  real_T rtu_Signal, rtB_CollectAverage_BaseEngineController_LS *localB,
  rtDW_CollectAverage_BaseEngineController_LS *localDW)
{
  real_T rtb_Sum1_b4g;

  /* Outputs for Enabled SubSystem: '<S372>/Collect Average' incorporates:
   *  EnablePort: '<S376>/Enable'
   */
  if (rtu_0) {
    if (!localDW->s372_CollectAverage_MODE) {
      BaseEngineController_LS_CollectAverage_Init(localDW);
      localDW->s372_CollectAverage_MODE = TRUE;
    }

    /* Sum: '<S376>/Sum1' incorporates:
     *  UnitDelay: '<S376>/Unit Delay1'
     */
    rtb_Sum1_b4g = rtu_Signal + localDW->s376_UnitDelay1_DSTATE;

    /* Product: '<S376>/Product' incorporates:
     *  DataTypeConversion: '<S376>/Data Type Conversion'
     */
    localB->s376_Product = 1.0 / (real_T)rtu_Count * rtb_Sum1_b4g;

    /* Update for UnitDelay: '<S376>/Unit Delay1' */
    localDW->s376_UnitDelay1_DSTATE = rtb_Sum1_b4g;
  } else {
    if (localDW->s372_CollectAverage_MODE) {
      BaseEngineController_LS_CollectAverage_Disable(localDW);
    }
  }

  /* End of Outputs for SubSystem: '<S372>/Collect Average' */
}

/*
 * Start for enable system:
 *    '<S405>/PassThrough1'
 *    '<S405>/PassThrough2'
 */
void BaseEngineController_LS_PassThrough1_Start(real_T *rty_Out1)
{
  /* VirtualOutportStart for Outport: '<S420>/Out1' */
  (*rty_Out1) = 0.005;
}

/*
 * Output and update for enable system:
 *    '<S405>/PassThrough1'
 *    '<S405>/PassThrough2'
 */
void BaseEngineController_LS_PassThrough1(boolean_T rtu_0, real_T rtu_1, real_T *
  rty_Out1)
{
  /* Outputs for Enabled SubSystem: '<S405>/PassThrough1' incorporates:
   *  EnablePort: '<S420>/Enable'
   */
  if (rtu_0) {
    /* Inport: '<S420>/In1' */
    (*rty_Out1) = rtu_1;
  }

  /* End of Outputs for SubSystem: '<S405>/PassThrough1' */
}

/*
 * Output and update for action system:
 *    '<S451>/If Action Subsystem'
 *    '<S451>/If Action Subsystem1'
 *    '<S451>/If Action Subsystem2'
 *    '<S452>/If Action Subsystem'
 *    '<S452>/If Action Subsystem1'
 *    '<S452>/If Action Subsystem2'
 *    '<S501>/If Action Subsystem'
 *    '<S501>/If Action Subsystem1'
 *    '<S501>/If Action Subsystem2'
 *    '<S502>/If Action Subsystem'
 *    ...
 */
void BaseEngineController_LS_IfActionSubsystem(real_T rtu_0, real_T *rty_Out)
{
  /* Inport: '<S465>/In' */
  (*rty_Out) = rtu_0;
}

/*
 * Initial conditions for function-call system:
 *    '<S696>/Function-Call Subsystem'
 *    '<S698>/Function-Call Subsystem'
 */
void BaseEngineController_LS_FunctionCallSubsystem_Init
  (rtDW_FunctionCallSubsystem_BaseEngineController_LS *localDW)
{
  /* InitializeConditions for UnitDelay: '<S714>/Initial Condition is True' */
  localDW->s714_InitialConditionisTrue_DSTATE = TRUE;
}

/*
 * Output and update for function-call system:
 *    '<S696>/Function-Call Subsystem'
 *    '<S698>/Function-Call Subsystem'
 */
void BaseEngineController_LS_FunctionCallSubsystem
  (rtB_FunctionCallSubsystem_BaseEngineController_LS *localB,
   rtDW_FunctionCallSubsystem_BaseEngineController_LS *localDW)
{
  /* UnitDelay: '<S714>/Initial Condition is True' */
  localB->s714_InitialConditionisTrue =
    localDW->s714_InitialConditionisTrue_DSTATE;

  /* Update for UnitDelay: '<S714>/Initial Condition is True' incorporates:
   *  Constant: '<S714>/False After First Sample'
   */
  localDW->s714_InitialConditionisTrue_DSTATE = FALSE;
}

/* Initial conditions for function-call system: '<Root>/Foreground' */
void BaseEngineController_LS_Foreground_Init(void)
{
  /* Initial conditions for function-call system: '<S446>/Temp Sensors' */

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

  /* S-Function Block: <S686>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s686_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S677>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s677_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S659>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s659_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S715>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s715_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S746>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s746_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S703>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s703_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S729>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s729_motohawk_delta_time_DWORK1 = now -
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

  /* InitializeConditions for Stateflow: '<S410>/Engine State Machine' */

  /* Entry: Foreground/Control/VirtualSensors/RawProcessed/EngineState/Engine State Machine */
  /* Transition: '<S430>:4' */
  BaseEngineController_LS_DWork.s430_is_c2_BaseEngineController_LS =
    BaseEngineController_LS_IN_Stall_m;

  /* Entry 'Stall': '<S430>:1' */
  BaseEngineController_LS_B.s430_State = 1U;

  /* S-Function Block: <S473>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s473_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S510>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s510_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S493>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s493_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S763>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s763_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
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

  /* S-Function Block: <S527>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s527_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S523>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s523_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for Atomic SubSystem: '<S369>/Base TPS Request' */

  /* S-Function Block: <S422>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s422_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S405>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s405_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* End of InitializeConditions for SubSystem: '<S369>/Base TPS Request' */

  /* S-Function Block: <S611>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s611_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
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
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S573>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s573_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S539>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s539_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
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

  /* InitializeConditions for Stateflow: '<S366>/Baro Stall State Delay' */
  BaseEngineController_LS_DWork.s371_TOld = 0.0;
  BaseEngineController_LS_B.s371_Timer = 0.0;

  /* Entry: Foreground/Control/VirtualSensors/AirCalcs/Baro Stall State Delay */
  /* Transition: '<S371>:4' */
  BaseEngineController_LS_DWork.s371_is_c19_BaseEngineController_LS =
    BaseEngineController_LS_IN_Stall;

  /* Entry 'Stall': '<S371>:1' */
  BaseEngineController_LS_B.s371_Enable = TRUE;

  /* S-Function Block: <S378>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s378_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S464>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s464_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S427>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s427_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(-1);
  }

  /* S-Function Block: <S484>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s484_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S489>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s489_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S547>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s547_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S531>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s531_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S557>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s557_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S872>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s872_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S437>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s437_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S565>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s565_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for S-Function (motohawk_sfun_trigger): '<S696>/motohawk_trigger' */
  BaseEngineController_LS_FunctionCallSubsystem_Init
    (&BaseEngineController_LS_DWork.s696_FunctionCallSubsystem);

  /* InitializeConditions for S-Function (motohawk_sfun_trigger): '<S698>/motohawk_trigger' */
  BaseEngineController_LS_FunctionCallSubsystem_Init
    (&BaseEngineController_LS_DWork.s698_FunctionCallSubsystem);
}

/* Enable for function-call system: '<Root>/Foreground' */
void BaseEngineController_LS_Foreground_Enable(void)
{
  /* Level2 S-Function Block: '<S446>/motohawk_trigger' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_5XRTI_PERIODIC_8325p0005 */
  BaseEngineController_LS_DWork.s446_motohawk_trigger_DWORK1 = 1;

  /* Level2 S-Function Block: '<S410>/motohawk_trigger' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_TDC_EVENT_7131p0001 */
  BaseEngineController_LS_DWork.s410_motohawk_trigger_DWORK1 = 1;

  /* Level2 S-Function Block: '<S506>/motohawk_trigger5' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_MID_TDC_EVENT_8054p0001 */
  BaseEngineController_LS_DWork.s506_motohawk_trigger5_DWORK1 = 1;

  /* Level2 S-Function Block: '<S14>/motohawk_trigger1' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_5XRTI_PERIODIC_1412p0001 */
  BaseEngineController_LS_DWork.s14_motohawk_trigger1_DWORK1 = 1;

  /* Level2 S-Function Block: '<S14>/motohawk_trigger' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_5XRTI_PERIODIC_1411p0001 */
  BaseEngineController_LS_DWork.s14_motohawk_trigger_DWORK1 = 1;

  /* Level2 S-Function Block: '<S13>/motohawk_trigger' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_5XRTI_PERIODIC_9589p0004 */

  /* Enable for function-call system: '<S13>/Coil Control' */

  /* Enable for Atomic SubSystem: '<S822>/EST Enable TDC Counter' */

  /* Level2 S-Function Block: '<S827>/motohawk_trigger1' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_TDC_EVENT_9065p0001 */
  BaseEngineController_LS_DWork.s827_motohawk_trigger1_DWORK1 = 1;

  /* End of Enable for SubSystem: '<S822>/EST Enable TDC Counter' */
  BaseEngineController_LS_DWork.s13_motohawk_trigger_DWORK1 = 1;

  /* Level2 S-Function Block: '<S696>/motohawk_trigger' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_20XRTI_PERIODIC_8455p0002 */
  BaseEngineController_LS_DWork.s696_motohawk_trigger_DWORK1 = 1;

  /* Level2 S-Function Block: '<S698>/motohawk_trigger' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_20XRTI_PERIODIC_8585p0002 */
  BaseEngineController_LS_DWork.s698_motohawk_trigger_DWORK1 = 1;
}

/* Disable for function-call system: '<Root>/Foreground' */
void BaseEngineController_LS_Foreground_Disable(void)
{
  int32_T i;

  /* Level2 S-Function Block: '<S446>/motohawk_trigger' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_5XRTI_PERIODIC_8325p0005 */
  BaseEngineController_LS_DWork.s446_motohawk_trigger_DWORK1 = 0;

  /* Level2 S-Function Block: '<S410>/motohawk_trigger' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_TDC_EVENT_7131p0001 */
  BaseEngineController_LS_DWork.s410_motohawk_trigger_DWORK1 = 0;

  /* Disable for Enabled SubSystem: '<S15>/Stall' */
  /* Disable for Stateflow: '<S309>/Ice Break' */
  BaseEngineController_LS_DWork.s320_presentTicks =
    BaseEngineController_LS_M->Timing.clockTick0;
  BaseEngineController_LS_DWork.s320_elapsedTicks =
    BaseEngineController_LS_DWork.s320_presentTicks -
    BaseEngineController_LS_DWork.s320_previousTicks;
  BaseEngineController_LS_DWork.s320_previousTicks =
    BaseEngineController_LS_DWork.s320_presentTicks;
  BaseEngineController_LS_DWork.s320_temporalCounter_i1 =
    BaseEngineController_LS_DWork.s320_temporalCounter_i1 +
    BaseEngineController_LS_DWork.s320_elapsedTicks;
  BaseEngineController_LS_DWork.s15_Stall_MODE = FALSE;

  /* End of Disable for SubSystem: '<S15>/Stall' */

  /* Disable for Enabled SubSystem: '<S15>/Crank' */
  BaseEngineController_LS_DWork.s15_Crank_MODE = FALSE;

  /* End of Disable for SubSystem: '<S15>/Crank' */

  /* Level2 S-Function Block: '<S506>/motohawk_trigger5' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_MID_TDC_EVENT_8054p0001 */
  BaseEngineController_LS_DWork.s506_motohawk_trigger5_DWORK1 = 0;

  /* Disable for Enabled SubSystem: '<S366>/Capture Signal At Startup' */

  /* Disable for Enabled SubSystem: '<S372>/Collect Average' */
  BaseEngineController_LS_CollectAverage_Disable
    (&BaseEngineController_LS_DWork.s372_CollectAverage);

  /* End of Disable for SubSystem: '<S372>/Collect Average' */
  BaseEngineController_LS_DWork.s366_CaptureSignalAtStartup_MODE = FALSE;

  /* End of Disable for SubSystem: '<S366>/Capture Signal At Startup' */

  /* Disable for Enabled SubSystem: '<S369>/Capture ECT At Startup' */

  /* Disable for Enabled SubSystem: '<S406>/Collect Average' */
  BaseEngineController_LS_CollectAverage_Disable
    (&BaseEngineController_LS_DWork.s406_CollectAverage);

  /* End of Disable for SubSystem: '<S406>/Collect Average' */
  BaseEngineController_LS_DWork.s369_CaptureECTAtStartup_MODE = FALSE;

  /* End of Disable for SubSystem: '<S369>/Capture ECT At Startup' */

  /* Disable for Enabled SubSystem: '<S369>/Capture IAT At Startup' */

  /* Disable for Enabled SubSystem: '<S407>/Collect Average' */
  BaseEngineController_LS_CollectAverage_Disable
    (&BaseEngineController_LS_DWork.s407_CollectAverage);

  /* End of Disable for SubSystem: '<S407>/Collect Average' */
  BaseEngineController_LS_DWork.s369_CaptureIATAtStartup_MODE = FALSE;

  /* End of Disable for SubSystem: '<S369>/Capture IAT At Startup' */

  /* Disable for Enabled SubSystem: '<S15>/Run' */

  /* Level2 S-Function Block: '<S136>/motohawk_trigger1' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_5XRTI_PERIODIC_4914p0005 */
  BaseEngineController_LS_DWork.s136_motohawk_trigger1_DWORK1 = 0;

  /* Disable for Atomic SubSystem: '<S136>/Fuel System Manager' */
  /* Disable for Atomic SubSystem: '<S150>/Injector Manager' */
  /* Disable for Enabled SubSystem: '<S206>/Delta TPS Transient Fueling' */
  /* Disable for Enabled SubSystem: '<S211>/ECT Transient Fueling' */
  /* Disable for Outport: '<S214>/Mult' */
  BaseEngineController_LS_B.s214_motohawk_interpolation_1d = 1.0;
  BaseEngineController_LS_DWork.s211_ECTTransientFueling_MODE = FALSE;

  /* End of Disable for SubSystem: '<S211>/ECT Transient Fueling' */

  /* Disable for Enabled SubSystem: '<S211>/OXY Transient Fueling' */
  /* Disable for Outport: '<S217>/Mult' */
  BaseEngineController_LS_B.s217_motohawk_interpolation_1d = 1.0;
  BaseEngineController_LS_DWork.s211_OXYTransientFueling_MODE = FALSE;

  /* End of Disable for SubSystem: '<S211>/OXY Transient Fueling' */

  /* Disable for Outport: '<S211>/DeltaTPSMult' */
  BaseEngineController_LS_B.s211_Product1 = 1.0;
  BaseEngineController_LS_DWork.s206_DeltaTPSTransientFueling_MODE = FALSE;

  /* End of Disable for SubSystem: '<S206>/Delta TPS Transient Fueling' */
  /* End of Disable for SubSystem: '<S150>/Injector Manager' */
  /* End of Disable for SubSystem: '<S136>/Fuel System Manager' */
  BaseEngineController_LS_DWork.s15_Run_MODE = FALSE;

  /* End of Disable for SubSystem: '<S15>/Run' */

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
  /* Disable for Trigger_FGND_5XRTI_PERIODIC_9589p0004 */

  /* Disable for function-call system: '<S13>/Coil Control' */

  /* Disable for Atomic SubSystem: '<S822>/EST Enable TDC Counter' */

  /* Level2 S-Function Block: '<S827>/motohawk_trigger1' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_TDC_EVENT_9065p0001 */
  BaseEngineController_LS_DWork.s827_motohawk_trigger1_DWORK1 = 0;

  /* End of Disable for SubSystem: '<S822>/EST Enable TDC Counter' */
  BaseEngineController_LS_DWork.s13_motohawk_trigger_DWORK1 = 0;

  /* Disable for Enabled SubSystem: '<S14>/Electronic Throttle Controller' */
  /* Disable for Enabled SubSystem: '<S31>/PassThrough' */
  /* Disable for Outport: '<S52>/Out1' */
  BaseEngineController_LS_B.s52_In1 = 10.0;
  BaseEngineController_LS_DWork.s31_PassThrough_MODE = FALSE;

  /* End of Disable for SubSystem: '<S31>/PassThrough' */
  BaseEngineController_LS_DWork.s14_ElectronicThrottleController_MODE = FALSE;

  /* End of Disable for SubSystem: '<S14>/Electronic Throttle Controller' */

  /* Level2 S-Function Block: '<S696>/motohawk_trigger' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_20XRTI_PERIODIC_8455p0002 */
  BaseEngineController_LS_DWork.s696_motohawk_trigger_DWORK1 = 0;

  /* Level2 S-Function Block: '<S698>/motohawk_trigger' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_20XRTI_PERIODIC_8585p0002 */
  BaseEngineController_LS_DWork.s698_motohawk_trigger_DWORK1 = 0;
}

/* Start for function-call system: '<Root>/Foreground' */
void BaseEngineController_LS_Foreground_Start(void)
{
  /* Start for S-Function (motohawk_sfun_trigger): '<S446>/motohawk_trigger' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_5XRTI_PERIODIC_8325p0005 */
  BaseEngineController_LS_DWork.s446_motohawk_trigger_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S410>/motohawk_trigger' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_TDC_EVENT_7131p0001 */
  BaseEngineController_LS_DWork.s410_motohawk_trigger_DWORK1 = 0;

  /* Start for Enabled SubSystem: '<S15>/Stall' */

  /* InitializeConditions for UnitDelay: '<S316>/Unit Delay' */
  BaseEngineController_LS_DWork.s316_UnitDelay_DSTATE = FALSE;

  /* InitializeConditions for UnitDelay: '<S317>/Unit Delay' */
  BaseEngineController_LS_DWork.s317_UnitDelay_DSTATE = FALSE;

  /* InitializeConditions for UnitDelay: '<S318>/Unit Delay' */
  BaseEngineController_LS_DWork.s318_UnitDelay_DSTATE = FALSE;

  /* InitializeConditions for UnitDelay: '<S319>/Unit Delay' */
  BaseEngineController_LS_DWork.s319_UnitDelay_DSTATE = 0.0;

  /* S-Function Block: <S321>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s321_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for Stateflow: '<S309>/Ice Break' */
  BaseEngineController_LS_DWork.s320_is_active_c3_BaseEngineController_LS = 0U;
  BaseEngineController_LS_DWork.s320_is_c3_BaseEngineController_LS = 0U;
  BaseEngineController_LS_B.s320_etc = 0.0;
  BaseEngineController_LS_DWork.s320_presentTicks = 0U;
  BaseEngineController_LS_DWork.s320_elapsedTicks = 0U;
  BaseEngineController_LS_DWork.s320_previousTicks = 0U;

  /* End of Start for SubSystem: '<S15>/Stall' */

  /* Start for Atomic SubSystem: '<S369>/Base TPS Request' */

  /* Start for Enabled SubSystem: '<S405>/PassThrough1' */
  BaseEngineController_LS_PassThrough1_Start
    (&BaseEngineController_LS_B.s405_Merge);

  /* End of Start for SubSystem: '<S405>/PassThrough1' */

  /* Start for Enabled SubSystem: '<S405>/PassThrough2' */
  BaseEngineController_LS_PassThrough1_Start
    (&BaseEngineController_LS_B.s405_Merge);

  /* End of Start for SubSystem: '<S405>/PassThrough2' */

  /* End of Start for SubSystem: '<S369>/Base TPS Request' */

  /* Start for S-Function (motohawk_sfun_trigger): '<S506>/motohawk_trigger5' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_MID_TDC_EVENT_8054p0001 */
  BaseEngineController_LS_DWork.s506_motohawk_trigger5_DWORK1 = 0;

  /* Start for Enabled SubSystem: '<S366>/Capture Signal At Startup' */

  /* Start for Enabled SubSystem: '<S372>/Collect Average' */
  BaseEngineController_LS_CollectAverage_Start
    (&BaseEngineController_LS_DWork.s372_CollectAverage);

  /* End of Start for SubSystem: '<S372>/Collect Average' */

  /* InitializeConditions for UnitDelay: '<S372>/Unit Delay' */
  BaseEngineController_LS_DWork.s372_UnitDelay_DSTATE = 0;

  /* End of Start for SubSystem: '<S366>/Capture Signal At Startup' */

  /* Start for Enabled SubSystem: '<S386>/IncreasingFilter' */

  /* VirtualOutportStart for Outport: '<S390>/Out1' */
  BaseEngineController_LS_B.s386_Merge = 0.005;

  /* End of Start for SubSystem: '<S386>/IncreasingFilter' */

  /* Start for Enabled SubSystem: '<S386>/DecreasingFilter' */

  /* VirtualOutportStart for Outport: '<S388>/Out1' */
  BaseEngineController_LS_B.s386_Merge = 0.005;

  /* End of Start for SubSystem: '<S386>/DecreasingFilter' */

  /* Start for Enabled SubSystem: '<S387>/IncreasingFilter' */

  /* VirtualOutportStart for Outport: '<S393>/Out1' */
  BaseEngineController_LS_B.s387_Merge = 0.005;

  /* End of Start for SubSystem: '<S387>/IncreasingFilter' */

  /* Start for Enabled SubSystem: '<S387>/DecreasingFilter' */

  /* VirtualOutportStart for Outport: '<S391>/Out1' */
  BaseEngineController_LS_B.s387_Merge = 0.005;

  /* End of Start for SubSystem: '<S387>/DecreasingFilter' */

  /* Start for Enabled SubSystem: '<S369>/Capture ECT At Startup' */

  /* Start for Enabled SubSystem: '<S406>/Collect Average' */
  BaseEngineController_LS_CollectAverage_Start
    (&BaseEngineController_LS_DWork.s406_CollectAverage);

  /* End of Start for SubSystem: '<S406>/Collect Average' */

  /* InitializeConditions for UnitDelay: '<S406>/Unit Delay' */
  BaseEngineController_LS_DWork.s406_UnitDelay_DSTATE = 0;

  /* End of Start for SubSystem: '<S369>/Capture ECT At Startup' */

  /* Start for Enabled SubSystem: '<S369>/Capture IAT At Startup' */

  /* Start for Enabled SubSystem: '<S407>/Collect Average' */
  BaseEngineController_LS_CollectAverage_Start
    (&BaseEngineController_LS_DWork.s407_CollectAverage);

  /* End of Start for SubSystem: '<S407>/Collect Average' */

  /* InitializeConditions for UnitDelay: '<S407>/Unit Delay' */
  BaseEngineController_LS_DWork.s407_UnitDelay_DSTATE = 0;

  /* End of Start for SubSystem: '<S369>/Capture IAT At Startup' */

  /* Start for Enabled SubSystem: '<S15>/Run' */

  /* Start for S-Function (motohawk_sfun_trigger): '<S136>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_5XRTI_PERIODIC_4914p0005 */
  BaseEngineController_LS_DWork.s136_motohawk_trigger1_DWORK1 = 0;

  /* Start for Atomic SubSystem: '<S136>/O2 Control' */

  /* Start for Atomic SubSystem: '<S154>/O2 PID Controller' */

  /* Start for InitialCondition: '<S284>/Multiply by 1.0 if not yet enabled' */
  BaseEngineController_LS_DWork.s284_Multiplyby10ifnotyetenabled_FirstOutputTime
    = TRUE;

  /* End of Start for SubSystem: '<S154>/O2 PID Controller' */

  /* End of Start for SubSystem: '<S136>/O2 Control' */

  /* Start for Atomic SubSystem: '<S136>/Fuel System Manager' */

  /* Start for Atomic SubSystem: '<S150>/Injector Manager' */

  /* Start for Enabled SubSystem: '<S206>/Delta TPS Transient Fueling' */

  /* Start for Enabled SubSystem: '<S211>/ECT Transient Fueling' */

  /* VirtualOutportStart for Outport: '<S214>/Mult' */
  BaseEngineController_LS_B.s214_motohawk_interpolation_1d = 1.0;

  /* End of Start for SubSystem: '<S211>/ECT Transient Fueling' */

  /* Start for Enabled SubSystem: '<S211>/OXY Transient Fueling' */

  /* VirtualOutportStart for Outport: '<S217>/Mult' */
  BaseEngineController_LS_B.s217_motohawk_interpolation_1d = 1.0;

  /* End of Start for SubSystem: '<S211>/OXY Transient Fueling' */

  /* S-Function Block: <S216>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s216_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for UnitDelay: '<S219>/Unit Delay' */
  BaseEngineController_LS_DWork.s219_UnitDelay_DSTATE = 0.0;

  /* S-Function Block: <S215>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s215_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for UnitDelay: '<S218>/Unit Delay' */
  BaseEngineController_LS_DWork.s218_UnitDelay_DSTATE = 0.0;

  /* VirtualOutportStart for Outport: '<S211>/DeltaTPSMult' */
  BaseEngineController_LS_B.s211_Product1 = 1.0;

  /* End of Start for SubSystem: '<S206>/Delta TPS Transient Fueling' */

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

  /* S-Function Block: <S190>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s190_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for Stateflow: '<S190>/Chart' */
  BaseEngineController_LS_DWork.s191_is_active_c1_BaseEngineController_LS = 0U;
  BaseEngineController_LS_DWork.s191_is_c1_BaseEngineController_LS = 0U;
  BaseEngineController_LS_DWork.s191_count = 0.0;
  BaseEngineController_LS_DWork.s191_EquivStart = 0.0;
  BaseEngineController_LS_B.s191_EquivOut = 0.0;
  BaseEngineController_LS_B.s191_SparkOut = 0.0;

  /* InitializeConditions for S-Function (motohawk_sfun_trigger): '<S136>/motohawk_trigger1' */
  if (rtmIsFirstInitCond(BaseEngineController_LS_M)) {
    /* Initial conditions for function-call system: '<S136>/MinGovernor' */

    /* InitializeConditions for Stateflow: '<S248>/IdleStateMachine' */
    BaseEngineController_LS_IdleStateMachine_Init();

    /* S-Function Block: <S247>/motohawk_delta_time */
    {
      uint32_T now = 0;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
        u32Time_us);
      Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
      BaseEngineController_LS_DWork.s247_motohawk_delta_time_DWORK1 = now -
        Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
    }

    /* S-Function Block: <S251>/motohawk_delta_time */
    {
      uint32_T now = 0;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
        u32Time_us);
      Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
      BaseEngineController_LS_DWork.s251_motohawk_delta_time_DWORK1 = now -
        Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
    }

    /* InitializeConditions for Atomic SubSystem: '<S153>/AiflowOffset' */

    /* S-Function Block: <S254>/motohawk_delta_time */
    {
      uint32_T now = 0;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
        u32Time_us);
      Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
      BaseEngineController_LS_DWork.s254_motohawk_delta_time_DWORK1 = now -
        Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
    }

    /* End of InitializeConditions for SubSystem: '<S153>/AiflowOffset' */

    /* S-Function Block: <S279>/motohawk_delta_time */
    {
      uint32_T now = 0;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
        u32Time_us);
      Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
      BaseEngineController_LS_DWork.s279_motohawk_delta_time_DWORK1 = now -
        Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
    }
  }

  if (rtmIsFirstInitCond(BaseEngineController_LS_M)) {
    /* Initial conditions for function-call system: '<S136>/MaxGovernor' */

    /* S-Function Block: <S230>/motohawk_delta_time */
    {
      uint32_T now = 0;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
        u32Time_us);
      Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
      BaseEngineController_LS_DWork.s230_motohawk_delta_time_DWORK1 = now -
        Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
    }

    /* S-Function Block: <S241>/motohawk_delta_time */
    {
      uint32_T now = 0;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
        u32Time_us);
      Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
      BaseEngineController_LS_DWork.s241_motohawk_delta_time_DWORK1 = now -
        Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
    }
  }

  if (rtmIsFirstInitCond(BaseEngineController_LS_M)) {
    /* Initial conditions for function-call system: '<S136>/Spark Manager' */

    /* InitializeConditions for UnitDelay: '<S304>/Initial Condition is True' */
    BaseEngineController_LS_DWork.s304_InitialConditionisTrue_DSTATE = TRUE;
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

  /* InitializeConditions for UnitDelay: '<S202>/Unit Delay' */
  BaseEngineController_LS_DWork.s202_UnitDelay_DSTATE = FALSE;

  /* InitializeConditions for UnitDelay: '<S203>/Unit Delay' */
  BaseEngineController_LS_DWork.s203_UnitDelay_DSTATE = FALSE;

  /* InitializeConditions for UnitDelay: '<S204>/Unit Delay' */
  BaseEngineController_LS_DWork.s204_UnitDelay_DSTATE = FALSE;

  /* InitializeConditions for Atomic SubSystem: '<S136>/O2 Control' */

  /* InitializeConditions for Atomic SubSystem: '<S154>/O2 PID Controller' */
  /* InitializeConditions for UnitDelay: '<S295>/Unit Delay' */
  BaseEngineController_LS_DWork.s295_UnitDelay_DSTATE = FALSE;

  /* InitializeConditions for UnitDelay: '<S292>/Unit Delay' */
  BaseEngineController_LS_DWork.s292_UnitDelay_DSTATE = 0.0;

  /* InitializeConditions for UnitDelay: '<S291>/Unit Delay' */
  BaseEngineController_LS_DWork.s291_UnitDelay_DSTATE = 0.0;

  /* S-Function Block: <S292>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s292_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for UnitDelay: '<S288>/Unit Delay1' */
  BaseEngineController_LS_DWork.s288_UnitDelay1_DSTATE = 0.0;

  /* S-Function Block: <S296>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s296_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for UnitDelay: '<S288>/Unit Delay' */
  BaseEngineController_LS_DWork.s288_UnitDelay_DSTATE = 0.0;

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

  /* InitializeConditions for UnitDelay: '<S288>/Unit Delay2' */
  BaseEngineController_LS_DWork.s288_UnitDelay2_DSTATE = 0.0;

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

  /* End of InitializeConditions for SubSystem: '<S154>/O2 PID Controller' */
  /* End of InitializeConditions for SubSystem: '<S136>/O2 Control' */

  /* End of Start for SubSystem: '<S15>/Run' */

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

  /* Start for Atomic SubSystem: '<S822>/EST Enable TDC Counter' */

  /* Start for S-Function (motohawk_sfun_trigger): '<S827>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_TDC_EVENT_9065p0001 */
  BaseEngineController_LS_DWork.s827_motohawk_trigger1_DWORK1 = 0;

  /* End of Start for SubSystem: '<S822>/EST Enable TDC Counter' */

  /* S-Function Block: <S797>/Spark Sequence */
  {
    NativeError_S createErrorResult;
    int32_T i;
    extern void SparkSeqDiagCallback_23(S_SeqOutDiagReportPtr report,
      NativePtrSizedInt_U userData);
    if ((EST_SequenceType_DataStore()) == 0) {
      S_ESTSeqCreateAttributes CreateObj;
      CreateObj.uValidAttributesMask = USE_SEQ_GRANULARITY;
      CreateObj.u1NumPulsesToCreate = 1;
      CreateObj.eGranularity = FINE_GRANULARITY;
      CreateObj.uValidAttributesMask |= USE_SEQ_DIAG_REPORT_COND;
      CreateObj.ReportsObj.pfDiagCback = SparkSeqDiagCallback_23;
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
      CreateObj.ReportsObj.pfDiagCback = SparkSeqDiagCallback_23;
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
      CreateObj.ReportsObj.pfDiagCback = SparkSeqDiagCallback_23;

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
            (ESTPinMapArr_PulseNum_23_DataStore())[cyl] = 0;
            (ESTPinMapArr_PulseNum_23_DataStore())[opp_cyl] = 1;/* p1 aligns with opp_cyl */
          } else {
            p0 = (EncoderTDCAngles_DataStore())[opp_cyl];
            p1 = (EncoderTDCAngles_DataStore())[cyl];
            (ESTPinMapArr_PulseNum_23_DataStore())[cyl] = 1;
            (ESTPinMapArr_PulseNum_23_DataStore())[opp_cyl] = 0;/* p0 aligns with opp_cyl */
          }

          (ESTPinMapArr_Resource_23_DataStore())[cyl] = (E_ModuleResource)
            ((EST_InitialPin_DataStore()) + pin);
          (ESTPinMapArr_Resource_23_DataStore())[opp_cyl] = (E_ModuleResource)
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
      CreateObj.ReportsObj.pfDiagCback = SparkSeqDiagCallback_23;
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

  /* Clear enable/disable state for embedded trigger Trigger_FGND_5XRTI_PERIODIC_9589p0004 */
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

  /* S-Function Block: <S803>/Injector Sequence */
  {
    S_SeqOutAttributes DynamicObj;
    NativeError_S createErrorResult = ERROR_BEHAVIOUR_METHOD_UNSUPPORTED;
    NativeError_S dynamicErrorResult = ERROR_BEHAVIOUR_METHOD_UNSUPPORTED;
    NativeError_S dynamicErrorResult2 = ERROR_BEHAVIOUR_METHOD_UNSUPPORTED;
    int32_T i;
    extern void InjectorSeqDiagCallback_41(S_SeqOutDiagReportPtr report,
      NativePtrSizedInt_U userData);
    extern S_SeqOutInjDiagReport InjectorSeqDiagInfo_41[8];
    extern int32_T InjectorSeqDiagLastPin_41;
    DynamicObj.uMinPulseDurationInMicroSecs = 1500;
    for (i=0; i < (EncoderNumCylinders_DataStore()); i++) {
      InjectorSeqDiagInfo_41[i].u4TXTimeInMicroSecs = 0xFFFFFFFF;
      InjectorSeqDiagInfo_41[i].u1TXCnt = 1;
    }

    InjectorSeqDiagLastPin_41 = -1;
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
        CreateObj.ReportsObj.pfDiagCback = InjectorSeqDiagCallback_41;
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
        extern void TransientInjectorSeqReportCallback_41
          (S_SeqOutInjEndEventReportPtr report, NativePtrSizedInt_U userData);
        extern TransientInjectorSeqInfo_T TransientInjectorSeqInfo_41[8];
        S_TranInjSeqCreateAttributes CreateObj;
        CreateObj.uValidAttributesMask = USE_SEQ_GRANULARITY |
          USE_SEQ_ENDEVENT_REPORT_COND | USE_SEQ_DIAG_REPORT_COND;
        CreateObj.ReportsObj.pfReportCback =
          TransientInjectorSeqReportCallback_41;
        CreateObj.ReportsObj.pfDiagCback = InjectorSeqDiagCallback_41;
        DynamicObj.u1AffectedPulse = 0;
        DynamicObj.eReportCond = RES_ENABLED;
        DynamicObj.uValidAttributesMask |= USE_SEQ_ENDEVENT_REPORT_COND;
        for (i=0; i < (EncoderNumCylinders_DataStore()); i++) {
          if ((INJ_InitialPin_DataStore()) + i <= 23) {
            TransientInjectorSeqInfo_41[i].primaryComplete = 0;
            TransientInjectorSeqInfo_41[i].primaryDuration = 0;
            TransientInjectorSeqInfo_41[i].pinResource =
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
      CreateObj.ReportsObj.pfDiagCback = InjectorSeqDiagCallback_41;
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
      CreateObj.ReportsObj.pfDiagCback = InjectorSeqDiagCallback_41;
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

    BaseEngineController_LS_DWork.s803_InjectorSequence_DWORK1[0] = 0;
    BaseEngineController_LS_DWork.s803_InjectorSequence_DWORK1[1] = 0;
    BaseEngineController_LS_DWork.s803_InjectorSequence_DWORK1[2] = 0;
    BaseEngineController_LS_DWork.s803_InjectorSequence_DWORK1[3] = 0;
    BaseEngineController_LS_DWork.s803_InjectorSequence_DWORK1[4] = 0;
    BaseEngineController_LS_DWork.s803_InjectorSequence_DWORK1[5] = 0;
    BaseEngineController_LS_DWork.s803_InjectorSequence_DWORK1[6] = 0;
    BaseEngineController_LS_DWork.s803_InjectorSequence_DWORK1[7] = 0;
    BaseEngineController_LS_DWork.s803_InjectorSequence_DWORK2 = 0;
  }

  /* Start for Enabled SubSystem: '<S441>/Triggered Subsystem' incorporates:
   *  Start for S-Function (fcncallgen): '<S442>/Function-Call Generator'
   *  Start for SubSystem: '<S11>/Diagnostics'
   */

  /* Start for Enabled SubSystem: '<S441>/Triggered Subsystem' incorporates:
   *  InitializeConditions for S-Function (fcncallgen): '<S442>/Function-Call Generator'
   *  InitializeConditions for SubSystem: '<S11>/Diagnostics'
   */

  /* S-Function Block: <S333>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s333_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S332>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s332_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S336>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s336_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

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

  /* S-Function Block: <S343>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s343_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
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

  /* S-Function Block: <S348>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s348_motohawk_delta_time_DWORK1 = now -
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

  /* S-Function Block: <S365>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s365_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S364>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s364_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S340>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s340_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
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

  /* Start for S-Function (motohawk_sfun_trigger): '<S696>/motohawk_trigger' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_20XRTI_PERIODIC_8455p0002 */
  BaseEngineController_LS_DWork.s696_motohawk_trigger_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S698>/motohawk_trigger' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_20XRTI_PERIODIC_8585p0002 */
  BaseEngineController_LS_DWork.s698_motohawk_trigger_DWORK1 = 0;
}

/* Output and update for function-call system: '<Root>/Foreground' */
void BaseEngineController_LS_Foreground(void)
{
  /* local block i/o variables */
  real_T rtb_DataTypeConversion_f;
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
  real_T rtb_UnitDelay_ge;
  real_T rtb_Merge_i;
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
  real_T rtb_Merge_i5;
  real_T rtb_Merge_l52;
  real_T rtb_UnitDelay1_ij;
  real_T rtb_Merge_j;
  real_T rtb_Merge_js;
  real_T rtb_UnitDelay1_l;
  real_T rtb_Merge_h;
  real_T rtb_motohawk_delta_time_f;
  real_T rtb_UnitDelay1_f;
  real_T rtb_Merge_f;
  real_T rtb_UnitDelay1_a;
  real_T rtb_Merge_in;
  real_T rtb_UnitDelay1_n;
  real_T rtb_Merge_jq;
  real_T rtb_motohawk_delta_time_o;
  real_T rtb_motohawk_interpolation_2d;
  real_T rtb_Saturation1_c;
  real_T rtb_motohawk_interpolation_1d1_j;
  real_T rtb_motohawk_interpolation_2d1_n;
  real_T rtb_UnitDelay_nr;
  real_T rtb_Merge_dv;
  real_T rtb_motohawk_delta_time_ow;
  real_T rtb_motohawk_delta_time_dd;
  real_T rtb_motohawk_delta_time_g;
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
  real_T rtb_motohawk_data_read1_b;
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
  real_T rtb_Saturation_ei;
  real_T rtb_motohawk_delta_time_i;
  real_T rtb_Saturation_k4;
  real_T rtb_motohawk_interpolation_1d_hr;
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
  real_T rtb_motohawk_delta_time_gz;
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
  real_T rtb_motohawk_interpolation_2d2;
  real_T rtb_motohawk_interpolation_2d1_p;
  real_T rtb_motohawk_delta_time_m3;
  real_T rtb_Saturation_gs;
  real_T rtb_EOI;
  real_T rtb_PrimaryPulseInjectionTiming;
  real_T rtb_motohawk_interpolation_2d1_a;
  real_T rtb_motohawk_interpolation_2d2_a;
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
  real_T rtb_Saturation_l;
  real_T rtb_motohawk_interpolation_1d2_d;
  real_T rtb_motohawk_replicate[8];
  real_T rtb_motohawk_interpolation_1d1_ku;
  real_T rtb_MinMax_gy;
  real_T rtb_Switch_m1;
  real_T rtb_Sum2_d;
  real_T rtb_Product_mq;
  real_T rtb_UnitDelay_gh;
  real_T rtb_motohawk_replicate1;
  real_T rtb_DataTypeConversion_fq;
  real_T rtb_DataTypeConversion_c4;
  real_T rtb_Product5_o;
  real_T rtb_Switch_bn;
  real_T rtb_DataTypeConversion_e;
  real_T rtb_DataTypeConversion_ik;
  real_T rtb_Switch_hp;
  real_T rtb_motohawk_interpolation_1d3_a;
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
  index_T rtb_motohawk_prelookup_aq;
  index_T rtb_motohawk_prelookup_he;
  index_T rtb_motohawk_prelookup_e;
  index_T rtb_motohawk_prelookup2;
  index_T rtb_motohawk_prelookup1_k;
  index_T rtb_motohawk_prelookup1_h;
  index_T rtb_motohawk_prelookup_m;
  index_T rtb_motohawk_prelookup_i;
  index_T rtb_motohawk_prelookup_e1;
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
  index_T rtb_motohawk_prelookup_col;
  index_T rtb_motohawk_prelookup_row;
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
  index_T rtb_motohawk_prelookup3;
  index_T rtb_motohawk_prelookup1_jq;
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
  boolean_T rtb_RelOp_hf;
  boolean_T rtb_motohawk_data_read2_l;
  boolean_T rtb_motohawk_fault_action_o;
  boolean_T rtb_motohawk_fault_action1_a;
  boolean_T rtb_motohawk_fault_status2_f2;
  boolean_T rtb_motohawk_fault_status1_ip;
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
  boolean_T rtb_LogicalOperator2_p5;
  boolean_T rtb_LogicalOperator3_k;
  boolean_T rtb_LogicalOperator2_ip;
  boolean_T rtb_LogicalOperator3_g;
  boolean_T rtb_RelationalOperator_l;
  boolean_T rtb_LogicalOperator_f0;
  boolean_T rtb_LogicalOperator1_dw;
  boolean_T rtb_LogicalOperator2_g;
  boolean_T rtb_LogicalOperator3_nz;
  boolean_T rtb_LogicalOperator2_kx;
  boolean_T rtb_LogicalOperator3_mz;
  boolean_T rtb_LogicalOperator2_j;
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
  boolean_T rtb_LogicalOperator3_pm;
  boolean_T rtb_LogicalOperator2_do;
  boolean_T rtb_LogicalOperator3_ly;
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
  boolean_T rtb_LogicalOperator2_m;
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
  boolean_T rtb_RelationalOperator2_b;
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
  boolean_T rtb_RelOp_mp;
  boolean_T rtb_CombinatorialLogic_l[2];
  boolean_T rtb_LogicalOperator3_cj;
  boolean_T rtb_BelowLoTarget_j;
  boolean_T rtb_BelowLoTarget_b;
  boolean_T rtb_CombinatorialLogic_c[2];
  boolean_T rtb_AboveHiTarget_a;
  boolean_T rtb_RelationalOperator5_fz;
  boolean_T rtb_RelationalOperator6_h0;
  real_T minV;
  real_T minV_0;
  int32_T maxV;
  boolean_T rtb_LogicalOperator6_b;
  boolean_T rtb_LogicalOperator1_a;
  real_T rtb_DataTypeConversion1_e;
  boolean_T rtb_RelOp_pu;
  real_T rtb_UnitDelay_n;
  real_T rtb_UnitDelay1_h;
  real_T rtb_Sum2_gr;
  real_T rtb_Sum1_mz;
  real_T rtb_Switch_f;
  real_T rtb_Merge_b3;
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
  real_T rtb_Sum1_nb;
  real_T rtb_Sum1_m;
  real_T rtb_Sum1_a;
  real_T rtb_Sum1_li;
  real_T rtb_Sum1_o;
  real_T rtb_Sum1_c;
  real_T rtb_Sum1_nl;
  real_T rtb_Sum1_d4;
  real_T rtb_Sum1_fm;
  real_T rtb_Sum1_mzy;
  real_T rtb_Sum1_cs;
  real_T rtb_Sum1_oh;
  uint32_T rtb_Switch_kj;
  real_T rtb_Sum1_m3;
  real_T rtb_DataTypeConversion_m;
  real_T rtb_Switch_o;
  real_T rtb_Switch1_f;
  real_T rtb_Product6_m;
  real_T rtb_Product7_i;
  real_T rtb_Product5_j;
  boolean_T rtb_RelationalOperator3_bp;
  uint16_T rtb_Product2_o;
  int8_T rtb_Add_k;
  int8_T rtb_Sum_l3;
  real_T rtb_Product_o;
  real_T rtb_Switch_k;
  int8_T rtb_Switch_d4[32];
  real_T rtb_Switch_c;
  boolean_T rtb_Switch1_mj;
  boolean_T rtb_Switch1_e;
  boolean_T rtb_Switch1_o;
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

  /* S-Function (motohawk_sfun_trigger): '<S446>/motohawk_trigger' */
  /* Enable for Trigger_FGND_5XRTI_PERIODIC_8325p0005 */
  if (BaseEngineController_LS_DWork.s446_motohawk_trigger_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s446_motohawk_trigger_DWORK1 = 1;
  }

  /* Logic: '<S697>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S697>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S697>/motohawk_fault_status4'
   */
  rtb_RelationalOperator6_h0 = (IsFaultActive(12) || IsFaultActive(13));

  /* Logic: '<S697>/Logical Operator6' */
  rtb_LogicalOperator6_b = !rtb_RelationalOperator6_h0;

  /* Logic: '<S697>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S697>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S697>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_a = (IsFaultSuspected(12) || IsFaultSuspected(13));

  /* S-Function Block: <S447>/motohawk_ain2 Resource: APP2AnalogInput */
  {
    extern NativeError_S APP2AnalogInput_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    APP2AnalogInput_AnalogInput_Get
      (&BaseEngineController_LS_B.s447_motohawk_ain2, NULL);
  }

  /* DataTypeConversion: '<S697>/Data Type Conversion' */
  rtb_DataTypeConversion_f = (real_T)
    BaseEngineController_LS_B.s447_motohawk_ain2;

  /* S-Function Block: <S721>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (APP2Idx_DataStore()) = TablePrelookup_real_T(rtb_DataTypeConversion_f,
      (APP2IdxArr_DataStore()), 9, (APP2Idx_DataStore()));
    rtb_motohawk_prelookup_aq = (APP2Idx_DataStore());
  }

  /* S-Function Block: <S721>/motohawk_interpolation_1d */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    BaseEngineController_LS_B.s721_motohawk_interpolation_1d =
      TableInterpolation1D_real_T(rtb_motohawk_prelookup_aq, (real_T *)
      ((APP2Tbl_DataStore())), 9);
  }

  /* UnitDelay: '<S697>/Unit Delay' */
  rtb_UnitDelay_jb = BaseEngineController_LS_DWork.s697_UnitDelay_DSTATE;

  /* If: '<S697>/If' incorporates:
   *  Logic: '<S697>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_b && rtb_LogicalOperator1_a) {
    /* Outputs for IfAction SubSystem: '<S697>/If Action Subsystem' incorporates:
     *  ActionPort: '<S716>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay_jb, &rtb_Merge_c);

    /* End of Outputs for SubSystem: '<S697>/If Action Subsystem' */
  } else if (rtb_RelationalOperator6_h0) {
    /* Outputs for IfAction SubSystem: '<S697>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S717>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((APP2Default_DataStore()),
      &rtb_Merge_c);

    /* End of Outputs for SubSystem: '<S697>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S697>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S718>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      (BaseEngineController_LS_B.s721_motohawk_interpolation_1d, &rtb_Merge_c);

    /* End of Outputs for SubSystem: '<S697>/If Action Subsystem2' */
  }

  /* End of If: '<S697>/If' */

  /* MinMax: '<S720>/MinMax' incorporates:
   *  Constant: '<S697>/Constant1'
   */
  rtb_DataTypeConversion_ik = rtb_Merge_c >= 0.0 ? rtb_Merge_c : 0.0;

  /* MinMax: '<S720>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S697>/motohawk_calibration2'
   */
  minV = (rtb_DataTypeConversion_ik <= (APP2MaxLimit_DataStore())) || rtIsNaN
    ((APP2MaxLimit_DataStore())) ? rtb_DataTypeConversion_ik :
    (APP2MaxLimit_DataStore());

  /* S-Function Block: <S715>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s715_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_ik = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S715>/Product' incorporates:
   *  MinMax: '<S715>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S715>/motohawk_calibration'
   */
  rtb_DataTypeConversion_ik /= (rtb_DataTypeConversion_ik >=
    (APP2FiltConst_DataStore())) || rtIsNaN((APP2FiltConst_DataStore())) ?
    rtb_DataTypeConversion_ik : (APP2FiltConst_DataStore());

  /* Sum: '<S722>/Sum1' incorporates:
   *  Constant: '<S722>/Constant'
   *  MinMax: '<S720>/MinMax1'
   *  Product: '<S722>/Product'
   *  Product: '<S722>/Product1'
   *  Sum: '<S722>/Sum'
   *  UnitDelay: '<S722>/Unit Delay'
   */
  rtb_Sum1_nb = (1.0 - rtb_DataTypeConversion_ik) *
    BaseEngineController_LS_DWork.s722_UnitDelay_DSTATE + minV *
    rtb_DataTypeConversion_ik;

  /* If: '<S719>/If' incorporates:
   *  Inport: '<S723>/In1'
   *  Inport: '<S724>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S719>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S719>/override_enable'
   */
  if ((APP2_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S719>/NewValue' incorporates:
     *  ActionPort: '<S723>/Action Port'
     */
    BaseEngineController_LS_B.s719_Merge = (APP2_new_DataStore());

    /* End of Outputs for SubSystem: '<S719>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S719>/OldValue' incorporates:
     *  ActionPort: '<S724>/Action Port'
     */
    BaseEngineController_LS_B.s719_Merge = rtb_Sum1_nb;

    /* End of Outputs for SubSystem: '<S719>/OldValue' */
  }

  /* End of If: '<S719>/If' */

  /* Logic: '<S747>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S747>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S747>/motohawk_fault_status4'
   */
  rtb_RelationalOperator6_h0 = (IsFaultActive(18) || IsFaultActive(19));

  /* Logic: '<S747>/Logical Operator6' */
  rtb_LogicalOperator6_b = !rtb_RelationalOperator6_h0;

  /* Logic: '<S747>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S747>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S747>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_a = (IsFaultSuspected(18) || IsFaultSuspected(19));

  /* DataTypeConversion: '<S700>/Data Type Conversion1' */
  rtb_DataTypeConversion1_e = (real_T)
    BaseEngineController_LS_B.s447_motohawk_ain2;

  /* Switch: '<S700>/Switch' incorporates:
   *  Fcn: '<S700>/Fcn'
   *  S-Function (motohawk_sfun_calibration): '<S700>/motohawk_calibration2'
   */
  if ((APP2_AdaptRev_Polarity_DataStore())) {
    BaseEngineController_LS_B.s700_Switch = 1023.0 - rtb_DataTypeConversion1_e;
  } else {
    BaseEngineController_LS_B.s700_Switch = rtb_DataTypeConversion1_e;
  }

  /* End of Switch: '<S700>/Switch' */

  /* S-Function (motohawk_sfun_data_read): '<S744>/motohawk_data_read' */
  rtb_DataTypeConversion_iq = APP2_AdaptRaw_Adpt_Low_DataStore();

  /* MinMax: '<S744>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S700>/motohawk_calibration9'
   */
  u = (real_T)rtb_DataTypeConversion_iq;
  BaseEngineController_LS_B.s744_MinMax = (u <=
    (APP2_AdaptAdapt_Low_Max_DataStore())) || rtIsNaN
    ((APP2_AdaptAdapt_Low_Max_DataStore())) ? u :
    (APP2_AdaptAdapt_Low_Max_DataStore());

  /* Sum: '<S700>/Sum2' */
  rtb_DataTypeConversion1_e = BaseEngineController_LS_B.s700_Switch -
    BaseEngineController_LS_B.s744_MinMax;

  /* S-Function (motohawk_sfun_data_read): '<S744>/motohawk_data_read1' */
  rtb_DataTypeConversion_iq = APP2_AdaptRaw_Adpt_Hi_DataStore();

  /* MinMax: '<S744>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S700>/motohawk_calibration11'
   */
  u = (real_T)rtb_DataTypeConversion_iq;
  BaseEngineController_LS_B.s744_MinMax1 = (u >=
    (APP2_AdaptAdapt_Hi_Min_DataStore())) || rtIsNaN
    ((APP2_AdaptAdapt_Hi_Min_DataStore())) ? u :
    (APP2_AdaptAdapt_Hi_Min_DataStore());

  /* Gain: '<S700>/Gain2' incorporates:
   *  Product: '<S700>/Product1'
   *  Sum: '<S700>/Sum1'
   */
  rtb_DataTypeConversion_ik = rtb_DataTypeConversion1_e /
    (BaseEngineController_LS_B.s744_MinMax1 -
     BaseEngineController_LS_B.s744_MinMax) * 100.0;

  /* MinMax: '<S748>/MinMax' incorporates:
   *  Constant: '<S700>/Constant1'
   */
  rtb_DataTypeConversion_ik = rtb_DataTypeConversion_ik >= 0.0 ?
    rtb_DataTypeConversion_ik : 0.0;

  /* MinMax: '<S748>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S700>/motohawk_calibration1'
   */
  BaseEngineController_LS_B.s748_MinMax1 = (rtb_DataTypeConversion_ik <=
    (APP2_AdaptMaxLimit_DataStore())) || rtIsNaN((APP2_AdaptMaxLimit_DataStore()))
    ? rtb_DataTypeConversion_ik : (APP2_AdaptMaxLimit_DataStore());

  /* S-Function Block: <S746>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s746_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_ik = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S746>/Product' incorporates:
   *  MinMax: '<S746>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S746>/motohawk_calibration'
   */
  rtb_DataTypeConversion_ik /= (rtb_DataTypeConversion_ik >=
    (APP2_AdaptFilterConst_DataStore())) || rtIsNaN
    ((APP2_AdaptFilterConst_DataStore())) ? rtb_DataTypeConversion_ik :
    (APP2_AdaptFilterConst_DataStore());

  /* Sum: '<S754>/Sum1' incorporates:
   *  Constant: '<S754>/Constant'
   *  Product: '<S754>/Product'
   *  Product: '<S754>/Product1'
   *  Sum: '<S754>/Sum'
   *  UnitDelay: '<S754>/Unit Delay'
   */
  rtb_Sum1_b4 = (1.0 - rtb_DataTypeConversion_ik) *
    BaseEngineController_LS_DWork.s754_UnitDelay_DSTATE +
    BaseEngineController_LS_B.s748_MinMax1 * rtb_DataTypeConversion_ik;

  /* UnitDelay: '<S747>/Unit Delay1' */
  rtb_UnitDelay1_ok = BaseEngineController_LS_DWork.s747_UnitDelay1_DSTATE;

  /* If: '<S747>/If' incorporates:
   *  Logic: '<S747>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_b && rtb_LogicalOperator1_a) {
    /* Outputs for IfAction SubSystem: '<S747>/If Action Subsystem' incorporates:
     *  ActionPort: '<S755>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay1_ok, &rtb_Merge_m);

    /* End of Outputs for SubSystem: '<S747>/If Action Subsystem' */
  } else if (rtb_RelationalOperator6_h0) {
    /* Outputs for IfAction SubSystem: '<S747>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S756>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((APP2_AdaptDfltValue_DataStore()),
      &rtb_Merge_m);

    /* End of Outputs for SubSystem: '<S747>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S747>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S757>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_Sum1_b4, &rtb_Merge_m);

    /* End of Outputs for SubSystem: '<S747>/If Action Subsystem2' */
  }

  /* End of If: '<S747>/If' */

  /* If: '<S758>/If' incorporates:
   *  Inport: '<S759>/In1'
   *  Inport: '<S760>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S758>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S758>/override_enable'
   */
  if ((APP2_Adapt_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S758>/NewValue' incorporates:
     *  ActionPort: '<S759>/Action Port'
     */
    BaseEngineController_LS_B.s758_Merge = (APP2_Adapt_new_DataStore());

    /* End of Outputs for SubSystem: '<S758>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S758>/OldValue' incorporates:
     *  ActionPort: '<S760>/Action Port'
     */
    BaseEngineController_LS_B.s758_Merge = rtb_Merge_m;

    /* End of Outputs for SubSystem: '<S758>/OldValue' */
  }

  /* End of If: '<S758>/If' */

  /* Switch: '<S447>/Switch1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S447>/motohawk_calibration'
   */
  if (((uint8_T)(APP_AdaptMode_DataStore())) != 0) {
    rtb_APP2 = BaseEngineController_LS_B.s758_Merge;
  } else {
    rtb_APP2 = BaseEngineController_LS_B.s719_Merge;
  }

  /* End of Switch: '<S447>/Switch1' */
  /* Logic: '<S695>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S695>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S695>/motohawk_fault_status4'
   */
  rtb_RelationalOperator6_h0 = (IsFaultActive(4) || IsFaultActive(5));

  /* Logic: '<S695>/Logical Operator6' */
  rtb_LogicalOperator6_b = !rtb_RelationalOperator6_h0;

  /* Logic: '<S695>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S695>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S695>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_a = (IsFaultSuspected(4) || IsFaultSuspected(5));

  /* S-Function Block: <S447>/motohawk_ain1 Resource: APP1AnalogInput */
  {
    extern NativeError_S APP1AnalogInput_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    APP1AnalogInput_AnalogInput_Get
      (&BaseEngineController_LS_B.s447_motohawk_ain1, NULL);
  }

  /* DataTypeConversion: '<S695>/Data Type Conversion' */
  rtb_DataTypeConversion_hd = (real_T)
    BaseEngineController_LS_B.s447_motohawk_ain1;

  /* S-Function Block: <S709>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (APP1Idx_DataStore()) = TablePrelookup_real_T(rtb_DataTypeConversion_hd,
      (APP1IdxArr_DataStore()), 9, (APP1Idx_DataStore()));
    rtb_motohawk_prelookup_he = (APP1Idx_DataStore());
  }

  /* S-Function Block: <S709>/motohawk_interpolation_1d */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    BaseEngineController_LS_B.s709_motohawk_interpolation_1d =
      TableInterpolation1D_real_T(rtb_motohawk_prelookup_he, (real_T *)
      ((APP1Tbl_DataStore())), 9);
  }

  /* UnitDelay: '<S695>/Unit Delay' */
  rtb_UnitDelay_m = BaseEngineController_LS_DWork.s695_UnitDelay_DSTATE;

  /* If: '<S695>/If' incorporates:
   *  Logic: '<S695>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_b && rtb_LogicalOperator1_a) {
    /* Outputs for IfAction SubSystem: '<S695>/If Action Subsystem' incorporates:
     *  ActionPort: '<S704>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay_m, &rtb_Merge_o);

    /* End of Outputs for SubSystem: '<S695>/If Action Subsystem' */
  } else if (rtb_RelationalOperator6_h0) {
    /* Outputs for IfAction SubSystem: '<S695>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S705>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((APP1Default_DataStore()),
      &rtb_Merge_o);

    /* End of Outputs for SubSystem: '<S695>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S695>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S706>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      (BaseEngineController_LS_B.s709_motohawk_interpolation_1d, &rtb_Merge_o);

    /* End of Outputs for SubSystem: '<S695>/If Action Subsystem2' */
  }

  /* End of If: '<S695>/If' */

  /* MinMax: '<S708>/MinMax' incorporates:
   *  Constant: '<S695>/Constant1'
   */
  rtb_DataTypeConversion_ik = rtb_Merge_o >= 0.0 ? rtb_Merge_o : 0.0;

  /* MinMax: '<S708>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S695>/motohawk_calibration2'
   */
  minV_0 = (rtb_DataTypeConversion_ik <= (APP1MaxLimit_DataStore())) || rtIsNaN
    ((APP1MaxLimit_DataStore())) ? rtb_DataTypeConversion_ik :
    (APP1MaxLimit_DataStore());

  /* S-Function Block: <S703>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s703_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_ik = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S703>/Product' incorporates:
   *  MinMax: '<S703>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S703>/motohawk_calibration'
   */
  rtb_DataTypeConversion_ik /= (rtb_DataTypeConversion_ik >=
    (APP1FiltConst_DataStore())) || rtIsNaN((APP1FiltConst_DataStore())) ?
    rtb_DataTypeConversion_ik : (APP1FiltConst_DataStore());

  /* Sum: '<S710>/Sum1' incorporates:
   *  Constant: '<S710>/Constant'
   *  MinMax: '<S708>/MinMax1'
   *  Product: '<S710>/Product'
   *  Product: '<S710>/Product1'
   *  Sum: '<S710>/Sum'
   *  UnitDelay: '<S710>/Unit Delay'
   */
  rtb_Sum1_m = (1.0 - rtb_DataTypeConversion_ik) *
    BaseEngineController_LS_DWork.s710_UnitDelay_DSTATE + minV_0 *
    rtb_DataTypeConversion_ik;

  /* If: '<S707>/If' incorporates:
   *  Inport: '<S711>/In1'
   *  Inport: '<S712>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S707>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S707>/override_enable'
   */
  if ((APP1_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S707>/NewValue' incorporates:
     *  ActionPort: '<S711>/Action Port'
     */
    BaseEngineController_LS_B.s707_Merge = (APP1_new_DataStore());

    /* End of Outputs for SubSystem: '<S707>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S707>/OldValue' incorporates:
     *  ActionPort: '<S712>/Action Port'
     */
    BaseEngineController_LS_B.s707_Merge = rtb_Sum1_m;

    /* End of Outputs for SubSystem: '<S707>/OldValue' */
  }

  /* End of If: '<S707>/If' */

  /* Logic: '<S730>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S730>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S730>/motohawk_fault_status4'
   */
  rtb_RelationalOperator6_h0 = (IsFaultActive(10) || IsFaultActive(11));

  /* Logic: '<S730>/Logical Operator6' */
  rtb_LogicalOperator6_b = !rtb_RelationalOperator6_h0;

  /* Logic: '<S730>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S730>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S730>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_a = (IsFaultSuspected(10) || IsFaultSuspected(11));

  /* DataTypeConversion: '<S699>/Data Type Conversion1' */
  rtb_DataTypeConversion1_e = (real_T)
    BaseEngineController_LS_B.s447_motohawk_ain1;

  /* Switch: '<S699>/Switch' incorporates:
   *  Fcn: '<S699>/Fcn'
   *  S-Function (motohawk_sfun_calibration): '<S699>/motohawk_calibration2'
   */
  if ((APP1_AdaptRev_Polarity_DataStore())) {
    BaseEngineController_LS_B.s699_Switch = 1023.0 - rtb_DataTypeConversion1_e;
  } else {
    BaseEngineController_LS_B.s699_Switch = rtb_DataTypeConversion1_e;
  }

  /* End of Switch: '<S699>/Switch' */

  /* S-Function (motohawk_sfun_data_read): '<S727>/motohawk_data_read' */
  rtb_DataTypeConversion_iq = APP1_AdaptRaw_Adpt_Low_DataStore();

  /* MinMax: '<S727>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S699>/motohawk_calibration9'
   */
  u = (real_T)rtb_DataTypeConversion_iq;
  BaseEngineController_LS_B.s727_MinMax = (u <=
    (APP1_AdaptAdapt_Low_Max_DataStore())) || rtIsNaN
    ((APP1_AdaptAdapt_Low_Max_DataStore())) ? u :
    (APP1_AdaptAdapt_Low_Max_DataStore());

  /* Sum: '<S699>/Sum2' */
  rtb_DataTypeConversion1_e = BaseEngineController_LS_B.s699_Switch -
    BaseEngineController_LS_B.s727_MinMax;

  /* S-Function (motohawk_sfun_data_read): '<S727>/motohawk_data_read1' */
  rtb_DataTypeConversion_iq = APP1_AdaptRaw_Adpt_Hi_DataStore();

  /* MinMax: '<S727>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S699>/motohawk_calibration11'
   */
  u = (real_T)rtb_DataTypeConversion_iq;
  BaseEngineController_LS_B.s727_MinMax1 = (u >=
    (APP1_AdaptAdapt_Hi_Min_DataStore())) || rtIsNaN
    ((APP1_AdaptAdapt_Hi_Min_DataStore())) ? u :
    (APP1_AdaptAdapt_Hi_Min_DataStore());

  /* Gain: '<S699>/Gain2' incorporates:
   *  Product: '<S699>/Product1'
   *  Sum: '<S699>/Sum1'
   */
  rtb_DataTypeConversion_ik = rtb_DataTypeConversion1_e /
    (BaseEngineController_LS_B.s727_MinMax1 -
     BaseEngineController_LS_B.s727_MinMax) * 100.0;

  /* MinMax: '<S731>/MinMax' incorporates:
   *  Constant: '<S699>/Constant1'
   */
  rtb_DataTypeConversion_ik = rtb_DataTypeConversion_ik >= 0.0 ?
    rtb_DataTypeConversion_ik : 0.0;

  /* MinMax: '<S731>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S699>/motohawk_calibration1'
   */
  BaseEngineController_LS_B.s731_MinMax1 = (rtb_DataTypeConversion_ik <=
    (APP1_AdaptMaxLimit_DataStore())) || rtIsNaN((APP1_AdaptMaxLimit_DataStore()))
    ? rtb_DataTypeConversion_ik : (APP1_AdaptMaxLimit_DataStore());

  /* S-Function Block: <S729>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s729_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_ik = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S729>/Product' incorporates:
   *  MinMax: '<S729>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S729>/motohawk_calibration'
   */
  rtb_DataTypeConversion_ik /= (rtb_DataTypeConversion_ik >=
    (APP1_AdaptFilterConst_DataStore())) || rtIsNaN
    ((APP1_AdaptFilterConst_DataStore())) ? rtb_DataTypeConversion_ik :
    (APP1_AdaptFilterConst_DataStore());

  /* Sum: '<S737>/Sum1' incorporates:
   *  Constant: '<S737>/Constant'
   *  Product: '<S737>/Product'
   *  Product: '<S737>/Product1'
   *  Sum: '<S737>/Sum'
   *  UnitDelay: '<S737>/Unit Delay'
   */
  rtb_Sum1_h1 = (1.0 - rtb_DataTypeConversion_ik) *
    BaseEngineController_LS_DWork.s737_UnitDelay_DSTATE +
    BaseEngineController_LS_B.s731_MinMax1 * rtb_DataTypeConversion_ik;

  /* UnitDelay: '<S730>/Unit Delay1' */
  rtb_UnitDelay1_e = BaseEngineController_LS_DWork.s730_UnitDelay1_DSTATE;

  /* If: '<S730>/If' incorporates:
   *  Logic: '<S730>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_b && rtb_LogicalOperator1_a) {
    /* Outputs for IfAction SubSystem: '<S730>/If Action Subsystem' incorporates:
     *  ActionPort: '<S738>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay1_e, &rtb_Merge_ao);

    /* End of Outputs for SubSystem: '<S730>/If Action Subsystem' */
  } else if (rtb_RelationalOperator6_h0) {
    /* Outputs for IfAction SubSystem: '<S730>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S739>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((APP1_AdaptDfltValue_DataStore()),
      &rtb_Merge_ao);

    /* End of Outputs for SubSystem: '<S730>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S730>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S740>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_Sum1_h1, &rtb_Merge_ao);

    /* End of Outputs for SubSystem: '<S730>/If Action Subsystem2' */
  }

  /* End of If: '<S730>/If' */

  /* If: '<S741>/If' incorporates:
   *  Inport: '<S742>/In1'
   *  Inport: '<S743>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S741>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S741>/override_enable'
   */
  if ((APP1_Adapt_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S741>/NewValue' incorporates:
     *  ActionPort: '<S742>/Action Port'
     */
    BaseEngineController_LS_B.s741_Merge = (APP1_Adapt_new_DataStore());

    /* End of Outputs for SubSystem: '<S741>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S741>/OldValue' incorporates:
     *  ActionPort: '<S743>/Action Port'
     */
    BaseEngineController_LS_B.s741_Merge = rtb_Merge_ao;

    /* End of Outputs for SubSystem: '<S741>/OldValue' */
  }

  /* End of If: '<S741>/If' */

  /* Switch: '<S447>/Switch' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S447>/motohawk_calibration'
   */
  if (((uint8_T)(APP_AdaptMode_DataStore())) != 0) {
    rtb_APP1 = BaseEngineController_LS_B.s741_Merge;
  } else {
    rtb_APP1 = BaseEngineController_LS_B.s707_Merge;
  }

  /* End of Switch: '<S447>/Switch' */
  /* Logic: '<S404>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S404>/motohawk_fault_status'
   *  S-Function (motohawk_sfun_fault_status): '<S404>/motohawk_fault_status1'
   */
  rtb_LogicalOperator6_b = (IsFaultActive(4) || IsFaultActive(5));

  /* Logic: '<S404>/Logical Operator6' incorporates:
   *  Logic: '<S404>/Logical Operator5'
   *  S-Function (motohawk_sfun_fault_status): '<S404>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S404>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_a = (rtb_LogicalOperator6_b && (IsFaultActive(12) ||
    IsFaultActive(13)));

  /* Switch: '<S404>/Switch2' incorporates:
   *  Logic: '<S404>/Logical Operator1'
   *  S-Function (motohawk_sfun_fault_status): '<S404>/motohawk_fault_status4'
   */
  if (rtb_LogicalOperator1_a || IsFaultActive(20)) {
    /* MinMax: '<S404>/MinMax' */
    rtb_DataTypeConversion1_e = (rtb_APP2 <= rtb_APP1) || rtIsNaN(rtb_APP1) ?
      rtb_APP2 : rtb_APP1;
  } else {
    /* Switch: '<S404>/Switch1' */
    if (rtb_LogicalOperator6_b) {
      rtb_DataTypeConversion1_e = rtb_APP2;
    } else {
      rtb_DataTypeConversion1_e = rtb_APP1;
    }

    /* End of Switch: '<S404>/Switch1' */
  }

  /* End of Switch: '<S404>/Switch2' */
  /* Switch: '<S408>/Switch1' incorporates:
   *  S-Function (motohawk_sfun_fault_action): '<S408>/motohawk_fault_action1'
   */
  if (GetFaultActionStatus(0)) {
    /* MinMax: '<S426>/MinMax' incorporates:
     *  Constant: '<S408>/Constant1'
     *  Product: '<S408>/Product1'
     *  S-Function (motohawk_sfun_calibration): '<S408>/motohawk_calibration2'
     */
    u = (Overheat_ScaleAPP_DataStore()) * rtb_DataTypeConversion1_e;
    y = u >= 0.0 ? u : 0.0;

    /* MinMax: '<S426>/MinMax1' incorporates:
     *  Constant: '<S408>/Constant1'
     *  MinMax: '<S426>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S408>/motohawk_calibration1'
     */
    BaseEngineController_LS_B.s408_Switch1 = (y <= (Overheat_MaxAPP_DataStore()))
      || rtIsNaN((Overheat_MaxAPP_DataStore())) ? y : (Overheat_MaxAPP_DataStore
      ());
  } else {
    BaseEngineController_LS_B.s408_Switch1 = rtb_DataTypeConversion1_e;
  }

  /* End of Switch: '<S408>/Switch1' */
  /* S-Function Block: <S433>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s433_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_hb = ((real_T) delta) * 0.000001;
  }

  /* Sum: '<S433>/Sum' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S433>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S433>/motohawk_delta_time'
   */
  BaseEngineController_LS_B.s433_Sum = rtb_motohawk_delta_time_hb +
    TimeSinceKeyOnTimer_DataStore();

  /* S-Function Block: <S444>/motohawk_encoder_instant_rpm */
  {
    rtb_RPMInst = GetEncoderResourceInstantRPM();
  }

  /* DataTypeConversion: '<S444>/Data Type Conversion1' incorporates:
   *  S-Function (motohawk_sfun_encoder_instant_rpm): '<S444>/motohawk_encoder_instant_rpm'
   */
  BaseEngineController_LS_B.s444_RPMInst = (real_T)rtb_RPMInst;

  /* DataTypeConversion: '<S410>/Data Type Conversion' */
  if (BaseEngineController_LS_B.s444_RPMInst < 65536.0) {
    if (BaseEngineController_LS_B.s444_RPMInst >= 0.0) {
      rtb_DataTypeConversion_iq = (uint16_T)
        BaseEngineController_LS_B.s444_RPMInst;
    } else {
      rtb_DataTypeConversion_iq = 0U;
    }
  } else {
    rtb_DataTypeConversion_iq = MAX_uint16_T;
  }

  /* End of DataTypeConversion: '<S410>/Data Type Conversion' */
  /* Sum: '<S410>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S410>/motohawk_calibration3'
   *  S-Function (motohawk_sfun_calibration): '<S410>/motohawk_calibration4'
   */
  i = ((uint16_T)(StallRPMMinThreshold_DataStore())) - ((uint16_T)
    (StallRPMThresholdHyst_DataStore()));
  if (i <= 0) {
    i = 0;
  }

  rtb_motohawk_data_read1_p = (uint16_T)i;

  /* End of Sum: '<S410>/Sum' */

  /* RelationalOperator: '<S410>/Relational Operator1' */
  BaseEngineController_LS_B.s410_Stall = ((rtb_DataTypeConversion_iq <
    rtb_motohawk_data_read1_p));

  /* RelationalOperator: '<S410>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S410>/motohawk_calibration4'
   */
  BaseEngineController_LS_B.s410_Crank = ((rtb_DataTypeConversion_iq >
    ((uint16_T)(StallRPMMinThreshold_DataStore()))));

  /* RelationalOperator: '<S410>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S410>/motohawk_calibration1'
   */
  rtb_LogicalOperator6_b = (rtb_DataTypeConversion_iq > ((uint16_T)
    (CrankToRunRPMThresh_DataStore())));

  /* UnitDelay: '<S410>/Unit Delay' */
  BaseEngineController_LS_B.s410_UnitDelay =
    BaseEngineController_LS_DWork.s410_UnitDelay_DSTATE;

  /* S-Function (motohawk_sfun_trigger): '<S410>/motohawk_trigger' */
  /* Enable for Trigger_FGND_TDC_EVENT_7131p0001 */
  if (BaseEngineController_LS_DWork.s410_motohawk_trigger_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s410_motohawk_trigger_DWORK1 = 1;
  }

  /* Logic: '<S410>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S410>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S410>/motohawk_calibration2'
   */
  BaseEngineController_LS_B.s410_Run = ((rtb_LogicalOperator6_b &&
    (BaseEngineController_LS_B.s431_Switch >= ((uint8_T)(RunLatchTDCs_DataStore())))));

  /* Stateflow: '<S410>/Engine State Machine' */

  /* Gateway: Foreground/Control/VirtualSensors/RawProcessed/EngineState/Engine State Machine */
  /* During: Foreground/Control/VirtualSensors/RawProcessed/EngineState/Engine State Machine */
  switch (BaseEngineController_LS_DWork.s430_is_c2_BaseEngineController_LS) {
   case BaseEngineController_LS_IN_Crank:
    /* During 'Crank': '<S430>:3' */
    if (BaseEngineController_LS_B.s410_Stall) {
      /* Transition: '<S430>:8' */
      BaseEngineController_LS_DWork.s430_is_c2_BaseEngineController_LS =
        BaseEngineController_LS_IN_Stall_m;

      /* Entry 'Stall': '<S430>:1' */
      BaseEngineController_LS_B.s430_State = 1U;
    } else {
      if (BaseEngineController_LS_B.s410_Run) {
        /* Transition: '<S430>:6' */
        BaseEngineController_LS_DWork.s430_is_c2_BaseEngineController_LS =
          BaseEngineController_LS_IN_Run;

        /* Entry 'Run': '<S430>:2' */
        BaseEngineController_LS_B.s430_State = 3U;
      }
    }
    break;

   case BaseEngineController_LS_IN_Run:
    /* During 'Run': '<S430>:2' */
    if (BaseEngineController_LS_B.s410_Stall) {
      /* Transition: '<S430>:7' */
      BaseEngineController_LS_DWork.s430_is_c2_BaseEngineController_LS =
        BaseEngineController_LS_IN_Stall_m;

      /* Entry 'Stall': '<S430>:1' */
      BaseEngineController_LS_B.s430_State = 1U;
    }
    break;

   case BaseEngineController_LS_IN_Stall_m:
    /* During 'Stall': '<S430>:1' */
    if (BaseEngineController_LS_B.s410_Crank) {
      /* Transition: '<S430>:5' */
      BaseEngineController_LS_DWork.s430_is_c2_BaseEngineController_LS =
        BaseEngineController_LS_IN_Crank;

      /* Entry 'Crank': '<S430>:3' */
      BaseEngineController_LS_B.s430_State = 2U;
    }
    break;

   default:
    /* Transition: '<S430>:4' */
    BaseEngineController_LS_DWork.s430_is_c2_BaseEngineController_LS =
      BaseEngineController_LS_IN_Stall_m;

    /* Entry 'Stall': '<S430>:1' */
    BaseEngineController_LS_B.s430_State = 1U;
    break;
  }

  /* End of Stateflow: '<S410>/Engine State Machine' */

  /* RelationalOperator: '<S139>/RelOp' incorporates:
   *  Constant: '<S139>/Constant'
   */
  rtb_RelOp_pu = (BaseEngineController_LS_B.s430_State == 1);

  /* S-Function Block: <S443>/motohawk_ain5 Resource: ACSwPin */
  {
    extern NativeError_S ACSwPin_AnalogInput_Get(uint16_T *adc, uint16_T *status);
    ACSwPin_AnalogInput_Get(&rtb_motohawk_ain5_i, NULL);
  }

  /* DataTypeConversion: '<S448>/Data Type Conversion' incorporates:
   *  S-Function (motohawk_sfun_ain): '<S443>/motohawk_ain5'
   */
  BaseEngineController_LS_B.s448_DataTypeConversion = (real_T)
    rtb_motohawk_ain5_i;

  /* RelationalOperator: '<S448>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S448>/SwitchPoint'
   */
  rtb_LogicalOperator6_b = (BaseEngineController_LS_B.s448_DataTypeConversion >
                            (ACSwSwitchPt_DataStore()));

  /* Logic: '<S448>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S448>/0 = No Inversion 1 = Inversion'
   */
  rtb_LogicalOperator6_b ^= (ACSwPolarity_DataStore());

  /* If: '<S455>/If' incorporates:
   *  Inport: '<S456>/In1'
   *  Inport: '<S457>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S455>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S455>/override_enable'
   */
  if ((ACSw_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S455>/NewValue' incorporates:
     *  ActionPort: '<S456>/Action Port'
     */
    BaseEngineController_LS_B.s455_Merge = (ACSw_new_DataStore());

    /* End of Outputs for SubSystem: '<S455>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S455>/OldValue' incorporates:
     *  ActionPort: '<S457>/Action Port'
     */
    BaseEngineController_LS_B.s455_Merge = rtb_LogicalOperator6_b;

    /* End of Outputs for SubSystem: '<S455>/OldValue' */
  }

  /* End of If: '<S455>/If' */

  /* S-Function Block: <S473>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s473_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_ik = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S473>/Product' incorporates:
   *  MinMax: '<S473>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S473>/motohawk_calibration'
   */
  rtb_DataTypeConversion_ik /= (rtb_DataTypeConversion_ik >=
    (VSPDFiltConst_DataStore())) || rtIsNaN((VSPDFiltConst_DataStore())) ?
    rtb_DataTypeConversion_ik : (VSPDFiltConst_DataStore());

  /* Logic: '<S452>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S452>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S452>/motohawk_fault_status4'
   */
  rtb_RelationalOperator6_h0 = (IsFaultActive(116) || IsFaultActive(117));

  /* Logic: '<S452>/Logical Operator6' */
  rtb_LogicalOperator6_b = !rtb_RelationalOperator6_h0;

  /* Logic: '<S452>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S452>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S452>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_a = (IsFaultSuspected(116) || IsFaultSuspected(117));

  /* S-Function Block: <S443>/motohawk_frequency_in1 Frequency Input Get: VSPD_Pin */
  {
    extern NativeError_S VSPD_Pin_FrequencyInput_Get(uint32_T *frequency,
      int16_T *duty_cycle);
    VSPD_Pin_FrequencyInput_Get(&rtb_DataTypeConversion6,
      &rtb_DataTypeConversion2_pj);
  }

  /* DataTypeConversion: '<S443>/Data Type Conversion1' */
  rtb_DataTypeConversion_e = (real_T)rtb_DataTypeConversion6;

  /* Gain: '<S443>/Gain1' */
  BaseEngineController_LS_B.s443_Gain1 = 0.01 * rtb_DataTypeConversion_e;

  /* S-Function Block: <S478>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (VSPDIdx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s443_Gain1, (VSPDIdxArr_DataStore()), 13,
       (VSPDIdx_DataStore()));
    rtb_motohawk_prelookup_e = (VSPDIdx_DataStore());
  }

  /* S-Function Block: <S478>/motohawk_interpolation_1d */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    BaseEngineController_LS_B.s478_motohawk_interpolation_1d =
      TableInterpolation1D_real_T(rtb_motohawk_prelookup_e, (real_T *)
      ((VSPDTbl_DataStore())), 13);
  }

  /* UnitDelay: '<S452>/Unit Delay' */
  rtb_UnitDelay_ge = BaseEngineController_LS_DWork.s452_UnitDelay_DSTATE;

  /* If: '<S452>/If' incorporates:
   *  Logic: '<S452>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_b && rtb_LogicalOperator1_a) {
    /* Outputs for IfAction SubSystem: '<S452>/If Action Subsystem' incorporates:
     *  ActionPort: '<S474>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay_ge, &rtb_Merge_i);

    /* End of Outputs for SubSystem: '<S452>/If Action Subsystem' */
  } else if (rtb_RelationalOperator6_h0) {
    /* Outputs for IfAction SubSystem: '<S452>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S475>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((VSPDDefault_DataStore()),
      &rtb_Merge_i);

    /* End of Outputs for SubSystem: '<S452>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S452>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S476>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      (BaseEngineController_LS_B.s478_motohawk_interpolation_1d, &rtb_Merge_i);

    /* End of Outputs for SubSystem: '<S452>/If Action Subsystem2' */
  }

  /* End of If: '<S452>/If' */

  /* Sum: '<S479>/Sum1' incorporates:
   *  Constant: '<S479>/Constant'
   *  Product: '<S479>/Product'
   *  Product: '<S479>/Product1'
   *  Sum: '<S479>/Sum'
   *  UnitDelay: '<S479>/Unit Delay'
   */
  rtb_Sum1_a = (1.0 - rtb_DataTypeConversion_ik) *
    BaseEngineController_LS_DWork.s479_UnitDelay_DSTATE + rtb_Merge_i *
    rtb_DataTypeConversion_ik;

  /* If: '<S477>/If' incorporates:
   *  Inport: '<S480>/In1'
   *  Inport: '<S481>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S477>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S477>/override_enable'
   */
  if ((VSPD_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S477>/NewValue' incorporates:
     *  ActionPort: '<S480>/Action Port'
     */
    BaseEngineController_LS_B.s477_Merge = (VSPD_new_DataStore());

    /* End of Outputs for SubSystem: '<S477>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S477>/OldValue' incorporates:
     *  ActionPort: '<S481>/Action Port'
     */
    BaseEngineController_LS_B.s477_Merge = rtb_Sum1_a;

    /* End of Outputs for SubSystem: '<S477>/OldValue' */
  }

  /* End of If: '<S477>/If' */

  /* S-Function Block: <S510>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s510_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_e = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S510>/Product' incorporates:
   *  MinMax: '<S510>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S510>/motohawk_calibration'
   */
  rtb_DataTypeConversion_e /= (rtb_DataTypeConversion_e >=
    (ACPresFilterConst_DataStore())) || rtIsNaN((ACPresFilterConst_DataStore()))
    ? rtb_DataTypeConversion_e : (ACPresFilterConst_DataStore());

  /* Logic: '<S501>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S501>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S501>/motohawk_fault_status4'
   */
  rtb_RelationalOperator6_h0 = (IsFaultActive(2) || IsFaultActive(3));

  /* Logic: '<S501>/Logical Operator6' */
  rtb_LogicalOperator6_b = !rtb_RelationalOperator6_h0;

  /* Logic: '<S501>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S501>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S501>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_a = (IsFaultSuspected(2) || IsFaultSuspected(3));

  /* S-Function Block: <S445>/motohawk_ain4 Resource: ACPresPin */
  {
    extern NativeError_S ACPresPin_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    ACPresPin_AnalogInput_Get(&BaseEngineController_LS_B.s445_motohawk_ain4,
      NULL);
  }

  /* DataTypeConversion: '<S501>/Data Type Conversion' */
  rtb_DataTypeConversion_ik = (real_T)
    BaseEngineController_LS_B.s445_motohawk_ain4;

  /* Product: '<S501>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S501>/motohawk_calibration4'
   */
  rtb_DataTypeConversion1_e = rtb_DataTypeConversion_ik * (ACPresGain_DataStore());

  /* Sum: '<S501>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S501>/motohawk_calibration5'
   */
  BaseEngineController_LS_B.s501_Sum1 = rtb_DataTypeConversion1_e +
    (ACPresOfst_DataStore());

  /* UnitDelay: '<S501>/Unit Delay1' */
  rtb_UnitDelay1_i = BaseEngineController_LS_DWork.s501_UnitDelay1_DSTATE;

  /* If: '<S501>/If' incorporates:
   *  Logic: '<S501>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_b && rtb_LogicalOperator1_a) {
    /* Outputs for IfAction SubSystem: '<S501>/If Action Subsystem' incorporates:
     *  ActionPort: '<S511>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay1_i, &rtb_Merge_b);

    /* End of Outputs for SubSystem: '<S501>/If Action Subsystem' */
  } else if (rtb_RelationalOperator6_h0) {
    /* Outputs for IfAction SubSystem: '<S501>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S512>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((ACPresDfltValue_DataStore()),
      &rtb_Merge_b);

    /* End of Outputs for SubSystem: '<S501>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S501>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S513>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      (BaseEngineController_LS_B.s501_Sum1, &rtb_Merge_b);

    /* End of Outputs for SubSystem: '<S501>/If Action Subsystem2' */
  }

  /* End of If: '<S501>/If' */

  /* Sum: '<S515>/Sum1' incorporates:
   *  Constant: '<S515>/Constant'
   *  Product: '<S515>/Product'
   *  Product: '<S515>/Product1'
   *  Sum: '<S515>/Sum'
   *  UnitDelay: '<S515>/Unit Delay'
   */
  rtb_Sum1_li = (1.0 - rtb_DataTypeConversion_e) *
    BaseEngineController_LS_DWork.s515_UnitDelay_DSTATE + rtb_Merge_b *
    rtb_DataTypeConversion_e;

  /* If: '<S514>/If' incorporates:
   *  Inport: '<S516>/In1'
   *  Inport: '<S517>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S514>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S514>/override_enable'
   */
  if ((ACPres_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S514>/NewValue' incorporates:
     *  ActionPort: '<S516>/Action Port'
     */
    BaseEngineController_LS_B.s514_Merge = (ACPres_new_DataStore());

    /* End of Outputs for SubSystem: '<S514>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S514>/OldValue' incorporates:
     *  ActionPort: '<S517>/Action Port'
     */
    BaseEngineController_LS_B.s514_Merge = rtb_Sum1_li;

    /* End of Outputs for SubSystem: '<S514>/OldValue' */
  }

  /* End of If: '<S514>/If' */

  /* Outputs for Enabled SubSystem: '<S15>/Stall' incorporates:
   *  EnablePort: '<S138>/Enable'
   */
  if (rtb_RelOp_pu) {
    if (!BaseEngineController_LS_DWork.s15_Stall_MODE) {
      /* InitializeConditions for UnitDelay: '<S316>/Unit Delay' */
      BaseEngineController_LS_DWork.s316_UnitDelay_DSTATE = FALSE;

      /* InitializeConditions for UnitDelay: '<S317>/Unit Delay' */
      BaseEngineController_LS_DWork.s317_UnitDelay_DSTATE = FALSE;

      /* InitializeConditions for UnitDelay: '<S318>/Unit Delay' */
      BaseEngineController_LS_DWork.s318_UnitDelay_DSTATE = FALSE;

      /* InitializeConditions for UnitDelay: '<S319>/Unit Delay' */
      BaseEngineController_LS_DWork.s319_UnitDelay_DSTATE = 0.0;

      /* S-Function Block: <S321>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BaseEngineController_LS_DWork.s321_motohawk_delta_time_DWORK1 = now -
          Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
      }

      /* InitializeConditions for Stateflow: '<S309>/Ice Break' */
      BaseEngineController_LS_DWork.s320_is_active_c3_BaseEngineController_LS =
        0U;
      BaseEngineController_LS_DWork.s320_is_c3_BaseEngineController_LS = 0U;
      BaseEngineController_LS_B.s320_etc = 0.0;
      BaseEngineController_LS_DWork.s320_presentTicks = 0U;
      BaseEngineController_LS_DWork.s320_elapsedTicks = 0U;
      BaseEngineController_LS_DWork.s320_previousTicks = 0U;

      /* Enable for Stateflow: '<S309>/Ice Break' */
      BaseEngineController_LS_DWork.s320_presentTicks =
        BaseEngineController_LS_M->Timing.clockTick0;
      BaseEngineController_LS_DWork.s320_previousTicks =
        BaseEngineController_LS_DWork.s320_presentTicks;
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

    /* DataTypeConversion: '<S307>/Data Type Conversion' */
    rtb_DataTypeConversion_m = (real_T)BaseEngineController_LS_B.s455_Merge;

    /* RelationalOperator: '<S310>/LT' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S307>/motohawk_calibration1'
     */
    rtb_RelationalOperator2_py = (BaseEngineController_LS_B.s672_Merge >=
      (ECTFanOn_DataStore()));

    /* RelationalOperator: '<S310>/LT1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S307>/motohawk_calibration'
     */
    rtb_Switch_oh = (BaseEngineController_LS_B.s672_Merge <=
                     (ECTFanOff_DataStore()));

    /* CombinatorialLogic: '<S316>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_RelationalOperator2_py != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_Switch_oh != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_da[0] =
        BaseEngineController_LS_ConstP.pooled863[rowidx];
      rtb_CombinatorialLogic_da[1] =
        BaseEngineController_LS_ConstP.pooled863[rowidx + 4];
    }

    /* Switch: '<S316>/Switch1' incorporates:
     *  UnitDelay: '<S316>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_da[1]) {
      rtb_LogicalOperator6_b = rtb_CombinatorialLogic_da[0];
    } else {
      rtb_LogicalOperator6_b =
        BaseEngineController_LS_DWork.s316_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S316>/Switch1' */
    /* RelationalOperator: '<S311>/LT' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S307>/motohawk_calibration3'
     */
    rtb_Switch_oh = (BaseEngineController_LS_B.s690_Merge >= (IATFanOn_DataStore
                      ()));

    /* RelationalOperator: '<S311>/LT1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S307>/motohawk_calibration2'
     */
    rtb_RelationalOperator2_py = (BaseEngineController_LS_B.s690_Merge <=
      (IATFanOff_DataStore()));

    /* CombinatorialLogic: '<S317>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_Switch_oh != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_RelationalOperator2_py != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_da[0] =
        BaseEngineController_LS_ConstP.pooled863[rowidx];
      rtb_CombinatorialLogic_da[1] =
        BaseEngineController_LS_ConstP.pooled863[rowidx + 4];
    }

    /* Switch: '<S317>/Switch1' incorporates:
     *  UnitDelay: '<S317>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_da[1]) {
      rtb_LogicalOperator1_a = rtb_CombinatorialLogic_da[0];
    } else {
      rtb_LogicalOperator1_a =
        BaseEngineController_LS_DWork.s317_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S317>/Switch1' */
    /* RelationalOperator: '<S312>/LT' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S307>/motohawk_calibration5'
     */
    rtb_Switch_oh = (BaseEngineController_LS_B.s514_Merge >=
                     (ACPresFanOn_DataStore()));

    /* RelationalOperator: '<S312>/LT1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S307>/motohawk_calibration4'
     */
    rtb_RelationalOperator2_py = (BaseEngineController_LS_B.s514_Merge <=
      (ACPresFanOff_DataStore()));

    /* CombinatorialLogic: '<S318>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_Switch_oh != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_RelationalOperator2_py != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_da[0] =
        BaseEngineController_LS_ConstP.pooled863[rowidx];
      rtb_CombinatorialLogic_da[1] =
        BaseEngineController_LS_ConstP.pooled863[rowidx + 4];
    }

    /* Switch: '<S318>/Switch1' incorporates:
     *  UnitDelay: '<S318>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_da[1]) {
      rtb_RelOp_pu = rtb_CombinatorialLogic_da[0];
    } else {
      rtb_RelOp_pu = BaseEngineController_LS_DWork.s318_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S318>/Switch1' */
    /* Switch: '<S307>/Switch' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S307>/motohawk_calibration15'
     *  S-Function (motohawk_sfun_interpolation_2d): '<S313>/motohawk_interpolation_2d'
     *  S-Function (motohawk_sfun_prelookup): '<S313>/motohawk_prelookup_col'
     *  S-Function (motohawk_sfun_prelookup): '<S313>/motohawk_prelookup_row'
     */
    if (((uint8_T)(FAN_Mode_DataStore())) >= 1) {
      rtb_Switch_o = (real_T)rtb_LogicalOperator6_b;
    } else {
      /* S-Function Block: <S313>/motohawk_prelookup_col */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (ECTFanSpeed_StallColIn_DataStore()) =
          BaseEngineController_LS_B.s477_Merge;
        (ECTFanSpeed_StallColIdx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_LS_B.s477_Merge,
           (ECTFanSpeed_StallColIdxArr_DataStore()), 7,
           (ECTFanSpeed_StallColIdx_DataStore()));
        rtb_motohawk_prelookup_col = (ECTFanSpeed_StallColIdx_DataStore());
      }

      /* S-Function Block: <S313>/motohawk_prelookup_row */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (ECTFanSpeed_StallRowIn_DataStore()) =
          BaseEngineController_LS_B.s672_Merge;
        (ECTFanSpeed_StallRowIdx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_LS_B.s672_Merge,
           (ECTFanSpeed_StallRowIdxArr_DataStore()), 7,
           (ECTFanSpeed_StallRowIdx_DataStore()));
        rtb_motohawk_prelookup_row = (ECTFanSpeed_StallRowIdx_DataStore());
      }

      /* S-Function Block: <S313>/motohawk_interpolation_2d */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_motohawk_interpolation_2d_f = TableInterpolation2D_real_T
          (rtb_motohawk_prelookup_row, rtb_motohawk_prelookup_col, (real_T *)
           ((ECTFanSpeed_StallMap_DataStore())), 7, 7);
        (ECTFanSpeed_Stall_DataStore()) = rtb_motohawk_interpolation_2d_f;
      }

      rtb_Switch_o = rtb_motohawk_interpolation_2d_f;
    }

    /* End of Switch: '<S307>/Switch' */
    /* Product: '<S307>/Product' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S307>/motohawk_calibration6'
     */
    rtb_DataTypeConversion1_e = rtb_Switch_o * (real_T)((uint8_T)
      (Fan1ECT_DataStore()));

    /* Switch: '<S307>/Switch1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S307>/motohawk_calibration15'
     *  S-Function (motohawk_sfun_interpolation_2d): '<S314>/motohawk_interpolation_2d'
     *  S-Function (motohawk_sfun_prelookup): '<S314>/motohawk_prelookup_col'
     *  S-Function (motohawk_sfun_prelookup): '<S314>/motohawk_prelookup_row'
     */
    if (((uint8_T)(FAN_Mode_DataStore())) >= 1) {
      rtb_Switch1_f = (real_T)rtb_LogicalOperator1_a;
    } else {
      /* S-Function Block: <S314>/motohawk_prelookup_col */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (IATFanSpeed_StallColIn_DataStore()) =
          BaseEngineController_LS_B.s477_Merge;
        (IATFanSpeed_StallColIdx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_LS_B.s477_Merge,
           (IATFanSpeed_StallColIdxArr_DataStore()), 7,
           (IATFanSpeed_StallColIdx_DataStore()));
        rtb_motohawk_prelookup_col_k = (IATFanSpeed_StallColIdx_DataStore());
      }

      /* S-Function Block: <S314>/motohawk_prelookup_row */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (IATFanSpeed_StallRowIn_DataStore()) =
          BaseEngineController_LS_B.s690_Merge;
        (IATFanSpeed_StallRowIdx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_LS_B.s690_Merge,
           (IATFanSpeed_StallRowIdxArr_DataStore()), 7,
           (IATFanSpeed_StallRowIdx_DataStore()));
        rtb_motohawk_prelookup_row_c = (IATFanSpeed_StallRowIdx_DataStore());
      }

      /* S-Function Block: <S314>/motohawk_interpolation_2d */
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

    /* End of Switch: '<S307>/Switch1' */
    /* Product: '<S307>/Product1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S307>/motohawk_calibration7'
     */
    rtb_Product6_m = rtb_Switch1_f * (real_T)((uint8_T)(Fan1IAT_DataStore()));

    /* Switch: '<S307>/Switch2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S307>/motohawk_calibration15'
     *  S-Function (motohawk_sfun_interpolation_2d): '<S315>/motohawk_interpolation_2d'
     *  S-Function (motohawk_sfun_prelookup): '<S315>/motohawk_prelookup_col'
     *  S-Function (motohawk_sfun_prelookup): '<S315>/motohawk_prelookup_row'
     */
    if (((uint8_T)(FAN_Mode_DataStore())) >= 1) {
      rtb_Product7_i = (real_T)rtb_RelOp_pu;
    } else {
      /* S-Function Block: <S315>/motohawk_prelookup_col */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (ACPresFanSpeed_StallColIn_DataStore()) =
          BaseEngineController_LS_B.s477_Merge;
        (ACPresFanSpeed_StallColIdx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_LS_B.s477_Merge,
           (ACPresFanSpeed_StallColIdxArr_DataStore()), 7,
           (ACPresFanSpeed_StallColIdx_DataStore()));
        rtb_motohawk_prelookup_col_d = (ACPresFanSpeed_StallColIdx_DataStore());
      }

      /* S-Function Block: <S315>/motohawk_prelookup_row */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (ACPresFanSpeed_StallRowIn_DataStore()) =
          BaseEngineController_LS_B.s514_Merge;
        (ACPresFanSpeed_StallRowIdx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_LS_B.s514_Merge,
           (ACPresFanSpeed_StallRowIdxArr_DataStore()), 7,
           (ACPresFanSpeed_StallRowIdx_DataStore()));
        rtb_motohawk_prelookup_row_l = (ACPresFanSpeed_StallRowIdx_DataStore());
      }

      /* S-Function Block: <S315>/motohawk_interpolation_2d */
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

    /* End of Switch: '<S307>/Switch2' */
    /* Product: '<S307>/Product2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S307>/motohawk_calibration8'
     */
    rtb_Product5_j = rtb_Product7_i * (real_T)((uint8_T)(Fan1ACPres_DataStore()));

    /* Switch: '<S307>/Switch3' incorporates:
     *  Product: '<S307>/Product8'
     *  S-Function (motohawk_sfun_calibration): '<S307>/motohawk_calibration14'
     *  S-Function (motohawk_sfun_calibration): '<S307>/motohawk_calibration15'
     */
    if (!(((uint8_T)(FAN_Mode_DataStore())) >= 1)) {
      rtb_DataTypeConversion_m *= (ACSwFanSpeed_Stall_DataStore());
    }

    /* End of Switch: '<S307>/Switch3' */
    /* MinMax: '<S307>/MinMax' incorporates:
     *  Product: '<S307>/Product3'
     *  S-Function (motohawk_sfun_calibration): '<S307>/motohawk_calibration9'
     */
    y = (rtb_DataTypeConversion1_e >= rtb_Product6_m) || rtIsNaN(rtb_Product6_m)
      ? rtb_DataTypeConversion1_e : rtb_Product6_m;
    y = (y >= rtb_Product5_j) || rtIsNaN(rtb_Product5_j) ? y : rtb_Product5_j;
    rtb_DesiredLambda_idx_0 = rtb_DataTypeConversion_m * (real_T)((uint8_T)
      (Fan1ACSw_DataStore()));

    /* Product: '<S307>/Product4' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S307>/motohawk_calibration10'
     */
    rtb_DataTypeConversion1_e = rtb_Switch_o * (real_T)((uint8_T)
      (Fan2ECT_DataStore()));

    /* Product: '<S307>/Product5' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S307>/motohawk_calibration11'
     */
    rtb_Product5_j = rtb_Switch1_f * (real_T)((uint8_T)(Fan2IAT_DataStore()));

    /* Product: '<S307>/Product6' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S307>/motohawk_calibration12'
     */
    rtb_Product6_m = rtb_Product7_i * (real_T)((uint8_T)(Fan2ACPres_DataStore()));

    /* MinMax: '<S307>/MinMax1' incorporates:
     *  Product: '<S307>/Product7'
     *  S-Function (motohawk_sfun_calibration): '<S307>/motohawk_calibration13'
     */
    rtb_DesiredLambda_idx = (rtb_DataTypeConversion1_e >= rtb_Product5_j) ||
      rtIsNaN(rtb_Product5_j) ? rtb_DataTypeConversion1_e : rtb_Product5_j;
    rtb_DesiredLambda_idx = (rtb_DesiredLambda_idx >= rtb_Product6_m) || rtIsNaN
      (rtb_Product6_m) ? rtb_DesiredLambda_idx : rtb_Product6_m;
    u = rtb_DataTypeConversion_m * (real_T)((uint8_T)(Fan2ACSw_DataStore()));

    /* UnitDelay: '<S319>/Unit Delay' */
    BaseEngineController_LS_B.s319_UnitDelay =
      BaseEngineController_LS_DWork.s319_UnitDelay_DSTATE;

    /* Switch: '<S308>/Switch' incorporates:
     *  Constant: '<S308>/Constant'
     *  RelationalOperator: '<S308>/Relational Operator'
     *  S-Function (motohawk_sfun_calibration): '<S308>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S308>/motohawk_calibration1'
     */
    if ((Constant_Fuel_Pump_DataStore()) > 0.0) {
      rtb_Switch_oh = TRUE;
    } else {
      rtb_Switch_oh = (BaseEngineController_LS_B.s319_UnitDelay <
                       (FuelPumpStartTime_DataStore()));
    }

    /* End of Switch: '<S308>/Switch' */
    /* S-Function Block: <S319>/motohawk_delta_time */
    rtb_motohawk_delta_time_op = 0.005;

    /* Sum: '<S319>/Sum' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S319>/motohawk_delta_time'
     */
    rtb_Switch_o = rtb_motohawk_delta_time_op +
      BaseEngineController_LS_B.s319_UnitDelay;

    /* S-Function Block: <S321>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s321_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_cj = ((real_T) delta) * 0.000001;
    }

    /* RelationalOperator: '<S309>/Relational Operator2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S309>/motohawk_calibration3'
     */
    rtb_RelationalOperator2_py = (BaseEngineController_LS_B.s408_Switch1 >=
      (ETC_StallAppOvrThesh_DataStore()));

    /* Switch: '<S321>/Switch' incorporates:
     *  Constant: '<S321>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S321>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S321>/motohawk_delta_time'
     *  Sum: '<S321>/Sum'
     */
    if (rtb_RelationalOperator2_py) {
      rtb_DataTypeConversion_m = rtb_motohawk_delta_time_cj +
        AppStallOvrTmr_DataStore();
    } else {
      rtb_DataTypeConversion_m = 0.0;
    }

    /* End of Switch: '<S321>/Switch' */
    /* RelationalOperator: '<S309>/Relational Operator3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S309>/motohawk_calibration4'
     */
    rtb_RelationalOperator3_bp = (rtb_DataTypeConversion_m >=
      (ETC_StallAppOvrTm_DataStore()));

    /* Product: '<S309>/Product1' */
    BaseEngineController_LS_B.s309_Product1 = (rtb_RelationalOperator3_bp ?
      (real_T)rtb_RelationalOperator2_py : 0.0) *
      BaseEngineController_LS_B.s408_Switch1;

    /* Product: '<S309>/Product2' */
    rtb_Product2_o = (uint16_T)(rtb_RelationalOperator3_bp ?
      rtb_RelationalOperator2_py : 0);

    /* Stateflow: '<S309>/Ice Break' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S309>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S309>/motohawk_calibration1'
     *  S-Function (motohawk_sfun_calibration): '<S309>/motohawk_calibration2'
     */
    BaseEngineController_LS_DWork.s320_presentTicks =
      BaseEngineController_LS_M->Timing.clockTick0;
    BaseEngineController_LS_DWork.s320_elapsedTicks =
      BaseEngineController_LS_DWork.s320_presentTicks -
      BaseEngineController_LS_DWork.s320_previousTicks;
    BaseEngineController_LS_DWork.s320_previousTicks =
      BaseEngineController_LS_DWork.s320_presentTicks;
    BaseEngineController_LS_DWork.s320_temporalCounter_i1 =
      BaseEngineController_LS_DWork.s320_temporalCounter_i1 +
      BaseEngineController_LS_DWork.s320_elapsedTicks;

    /* Gateway: Foreground/Control/Controller/Stall/Stall Throttle/Ice Break */
    /* During: Foreground/Control/Controller/Stall/Stall Throttle/Ice Break */
    if (BaseEngineController_LS_DWork.s320_is_active_c3_BaseEngineController_LS ==
        0) {
      /* Entry: Foreground/Control/Controller/Stall/Stall Throttle/Ice Break */
      BaseEngineController_LS_DWork.s320_is_active_c3_BaseEngineController_LS =
        1U;

      /* Transition: '<S320>:2' */
      BaseEngineController_LS_DWork.s320_is_c3_BaseEngineController_LS =
        BaseEngineController_LS_IN_Init;
    } else {
      switch (BaseEngineController_LS_DWork.s320_is_c3_BaseEngineController_LS)
  {
       case BaseEngineController_LS_IN_Init:
        /* During 'Init': '<S320>:1' */
        if (BaseEngineController_LS_B.s433_Sum < (ETC_IceBreakEnblTm_DataStore()))
        {
          /* Transition: '<S320>:5' */
          BaseEngineController_LS_DWork.s320_is_c3_BaseEngineController_LS =
            BaseEngineController_LS_IN_Open;
          BaseEngineController_LS_DWork.s320_temporalCounter_i1 = 0U;
        } else {
          BaseEngineController_LS_B.s320_etc = 0.0;
        }
        break;

       case BaseEngineController_LS_IN_Open:
        /* During 'Open': '<S320>:4' */
        if (BaseEngineController_LS_DWork.s320_temporalCounter_i1 >= (uint32_T)
            ceil((ETC_IceBreakHoldTm_DataStore()) / 0.2 - 2.0E-9)) {
          /* Transition: '<S320>:14' */
          BaseEngineController_LS_DWork.s320_is_c3_BaseEngineController_LS =
            BaseEngineController_LS_IN_Wait;
        } else {
          BaseEngineController_LS_B.s320_etc = (ETC_IceBreakPos_DataStore());
        }
        break;

       case BaseEngineController_LS_IN_Wait:
        /* During 'Wait': '<S320>:15' */
        if (BaseEngineController_LS_B.s433_Sum > (ETC_IceBreakEnblTm_DataStore()))
        {
          /* Transition: '<S320>:16' */
          BaseEngineController_LS_DWork.s320_is_c3_BaseEngineController_LS =
            BaseEngineController_LS_IN_Init;
        } else {
          BaseEngineController_LS_B.s320_etc = 0.0;
        }
        break;

       default:
        /* Transition: '<S320>:2' */
        BaseEngineController_LS_DWork.s320_is_c3_BaseEngineController_LS =
          BaseEngineController_LS_IN_Init;
        break;
      }
    }

    /* End of Stateflow: '<S309>/Ice Break' */

    /* Switch: '<S309>/Switch' */
    if (rtb_Product2_o != 0) {
      BaseEngineController_LS_B.s309_Switch =
        BaseEngineController_LS_B.s309_Product1;
    } else {
      BaseEngineController_LS_B.s309_Switch = BaseEngineController_LS_B.s320_etc;
    }

    /* End of Switch: '<S309>/Switch' */

    /* Saturate: '<S321>/Saturation' */
    rtb_Saturation_d1 = rtb_DataTypeConversion_m >= 16000.0 ? 16000.0 :
      rtb_DataTypeConversion_m <= 0.0 ? 0.0 : rtb_DataTypeConversion_m;

    /* S-Function (motohawk_sfun_data_write): '<S321>/motohawk_data_write' */
    /* Write to Data Storage as scalar: AppStallOvrTmr */
    {
      AppStallOvrTmr_DataStore() = rtb_Saturation_d1;
    }

    /* ZeroOrderHold: '<S138>/Zero-Order Hold10' incorporates:
     *  Constant: '<S138>/No Mult'
     */
    BaseEngineController_LS_B.s135_FuelMult = 0.0;

    /* ZeroOrderHold: '<S138>/Zero-Order Hold12' incorporates:
     *  MinMax: '<S307>/MinMax'
     */
    BaseEngineController_LS_B.s135_FAN1 = (y >= rtb_DesiredLambda_idx_0) ||
      rtIsNaN(rtb_DesiredLambda_idx_0) ? y : rtb_DesiredLambda_idx_0;

    /* ZeroOrderHold: '<S138>/Zero-Order Hold13' incorporates:
     *  MinMax: '<S307>/MinMax1'
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
      BaseEngineController_LS_B.s309_Switch;

    /* Update for UnitDelay: '<S316>/Unit Delay' */
    BaseEngineController_LS_DWork.s316_UnitDelay_DSTATE = rtb_LogicalOperator6_b;

    /* Update for UnitDelay: '<S317>/Unit Delay' */
    BaseEngineController_LS_DWork.s317_UnitDelay_DSTATE = rtb_LogicalOperator1_a;

    /* Update for UnitDelay: '<S318>/Unit Delay' */
    BaseEngineController_LS_DWork.s318_UnitDelay_DSTATE = rtb_RelOp_pu;

    /* Update for UnitDelay: '<S319>/Unit Delay' */
    BaseEngineController_LS_DWork.s319_UnitDelay_DSTATE = rtb_Switch_o;
  } else {
    if (BaseEngineController_LS_DWork.s15_Stall_MODE) {
      /* Disable for Stateflow: '<S309>/Ice Break' */
      BaseEngineController_LS_DWork.s320_presentTicks =
        BaseEngineController_LS_M->Timing.clockTick0;
      BaseEngineController_LS_DWork.s320_elapsedTicks =
        BaseEngineController_LS_DWork.s320_presentTicks -
        BaseEngineController_LS_DWork.s320_previousTicks;
      BaseEngineController_LS_DWork.s320_previousTicks =
        BaseEngineController_LS_DWork.s320_presentTicks;
      BaseEngineController_LS_DWork.s320_temporalCounter_i1 =
        BaseEngineController_LS_DWork.s320_temporalCounter_i1 +
        BaseEngineController_LS_DWork.s320_elapsedTicks;
      BaseEngineController_LS_DWork.s15_Stall_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S15>/Stall' */
  /* S-Function Block: <S444>/motohawk_encoder_average_rpm */
  {
    rtb_RPM = GetEncoderResourceAverageRPM();
  }

  /* DataTypeConversion: '<S500>/Data Type Conversion' incorporates:
   *  S-Function (motohawk_sfun_encoder_average_rpm): '<S444>/motohawk_encoder_average_rpm'
   */
  rtb_DataTypeConversion1_e = (real_T)rtb_RPM;

  /* S-Function Block: <S493>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s493_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_e = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S493>/Product' incorporates:
   *  MinMax: '<S493>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S493>/motohawk_calibration'
   */
  rtb_DataTypeConversion_e /= (rtb_DataTypeConversion_e >=
    (RPMFiltConst_DataStore())) || rtIsNaN((RPMFiltConst_DataStore())) ?
    rtb_DataTypeConversion_e : (RPMFiltConst_DataStore());

  /* Sum: '<S500>/Sum1' incorporates:
   *  Constant: '<S500>/Constant'
   *  Product: '<S500>/Product'
   *  Product: '<S500>/Product1'
   *  Sum: '<S500>/Sum'
   *  UnitDelay: '<S500>/Unit Delay'
   */
  BaseEngineController_LS_B.s500_Sum1 = (1.0 - rtb_DataTypeConversion_e) *
    BaseEngineController_LS_DWork.s500_UnitDelay_DSTATE +
    rtb_DataTypeConversion1_e * rtb_DataTypeConversion_e;

  /* Logic: '<S764>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S764>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S764>/motohawk_fault_status4'
   */
  rtb_RelationalOperator6_h0 = (IsFaultActive(107) || IsFaultActive(108));

  /* Logic: '<S764>/Logical Operator6' */
  rtb_LogicalOperator6_b = !rtb_RelationalOperator6_h0;

  /* Logic: '<S764>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S764>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S764>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_a = (IsFaultSuspected(107) || IsFaultSuspected(108));

  /* S-Function Block: <S447>/motohawk_ain6 Resource: TPS1AnalogInput */
  {
    extern NativeError_S TPS1AnalogInput_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    TPS1AnalogInput_AnalogInput_Get(&rtb_motohawk_ain6, NULL);
  }

  /* DataTypeConversion: '<S701>/Data Type Conversion1' incorporates:
   *  S-Function (motohawk_sfun_ain): '<S447>/motohawk_ain6'
   */
  rtb_DataTypeConversion1_e = (real_T)rtb_motohawk_ain6;

  /* Switch: '<S701>/Switch' incorporates:
   *  Fcn: '<S701>/Fcn'
   *  S-Function (motohawk_sfun_calibration): '<S701>/motohawk_calibration2'
   */
  if ((TPS1Rev_Polarity_DataStore())) {
    BaseEngineController_LS_B.s701_Switch = 1023.0 - rtb_DataTypeConversion1_e;
  } else {
    BaseEngineController_LS_B.s701_Switch = rtb_DataTypeConversion1_e;
  }

  /* End of Switch: '<S701>/Switch' */

  /* S-Function (motohawk_sfun_data_read): '<S761>/motohawk_data_read' */
  rtb_motohawk_data_read1_p = TPS1Raw_Adpt_Low_DataStore();

  /* MinMax: '<S761>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S701>/motohawk_calibration9'
   */
  u = (real_T)rtb_motohawk_data_read1_p;
  BaseEngineController_LS_B.s761_MinMax = (u <= (TPS1Adapt_Low_Max_DataStore()))
    || rtIsNaN((TPS1Adapt_Low_Max_DataStore())) ? u :
    (TPS1Adapt_Low_Max_DataStore());

  /* Sum: '<S701>/Sum2' */
  rtb_DataTypeConversion1_e = BaseEngineController_LS_B.s701_Switch -
    BaseEngineController_LS_B.s761_MinMax;

  /* S-Function (motohawk_sfun_data_read): '<S761>/motohawk_data_read1' */
  rtb_motohawk_data_read1_p = TPS1Raw_Adpt_Hi_DataStore();

  /* MinMax: '<S761>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S701>/motohawk_calibration11'
   */
  u = (real_T)rtb_motohawk_data_read1_p;
  BaseEngineController_LS_B.s761_MinMax1 = (u >= (TPS1Adapt_Hi_Min_DataStore()))
    || rtIsNaN((TPS1Adapt_Hi_Min_DataStore())) ? u : (TPS1Adapt_Hi_Min_DataStore
    ());

  /* Gain: '<S701>/Gain2' incorporates:
   *  Product: '<S701>/Product1'
   *  Sum: '<S701>/Sum1'
   */
  rtb_DataTypeConversion_e = rtb_DataTypeConversion1_e /
    (BaseEngineController_LS_B.s761_MinMax1 -
     BaseEngineController_LS_B.s761_MinMax) * 100.0;

  /* MinMax: '<S765>/MinMax' incorporates:
   *  Constant: '<S701>/Constant1'
   */
  rtb_DataTypeConversion_e = rtb_DataTypeConversion_e >= 0.0 ?
    rtb_DataTypeConversion_e : 0.0;

  /* MinMax: '<S765>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S701>/motohawk_calibration1'
   */
  BaseEngineController_LS_B.s765_MinMax1 = (rtb_DataTypeConversion_e <=
    (TPS1MaxLimit_DataStore())) || rtIsNaN((TPS1MaxLimit_DataStore())) ?
    rtb_DataTypeConversion_e : (TPS1MaxLimit_DataStore());

  /* S-Function Block: <S763>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s763_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_e = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S763>/Product' incorporates:
   *  MinMax: '<S763>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S763>/motohawk_calibration'
   */
  rtb_DataTypeConversion_e /= (rtb_DataTypeConversion_e >=
    (TPS1FilterConst_DataStore())) || rtIsNaN((TPS1FilterConst_DataStore())) ?
    rtb_DataTypeConversion_e : (TPS1FilterConst_DataStore());

  /* Sum: '<S771>/Sum1' incorporates:
   *  Constant: '<S771>/Constant'
   *  Product: '<S771>/Product'
   *  Product: '<S771>/Product1'
   *  Sum: '<S771>/Sum'
   *  UnitDelay: '<S771>/Unit Delay'
   */
  rtb_Sum1_hw = (1.0 - rtb_DataTypeConversion_e) *
    BaseEngineController_LS_DWork.s771_UnitDelay_DSTATE +
    BaseEngineController_LS_B.s765_MinMax1 * rtb_DataTypeConversion_e;

  /* UnitDelay: '<S764>/Unit Delay1' */
  rtb_UnitDelay1_d = BaseEngineController_LS_DWork.s764_UnitDelay1_DSTATE;

  /* If: '<S764>/If' incorporates:
   *  Logic: '<S764>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_b && rtb_LogicalOperator1_a) {
    /* Outputs for IfAction SubSystem: '<S764>/If Action Subsystem' incorporates:
     *  ActionPort: '<S772>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay1_d, &rtb_Merge_li);

    /* End of Outputs for SubSystem: '<S764>/If Action Subsystem' */
  } else if (rtb_RelationalOperator6_h0) {
    /* Outputs for IfAction SubSystem: '<S764>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S773>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((TPS1DfltValue_DataStore()),
      &rtb_Merge_li);

    /* End of Outputs for SubSystem: '<S764>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S764>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S774>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_Sum1_hw, &rtb_Merge_li);

    /* End of Outputs for SubSystem: '<S764>/If Action Subsystem2' */
  }

  /* End of If: '<S764>/If' */

  /* If: '<S775>/If' incorporates:
   *  Inport: '<S776>/In1'
   *  Inport: '<S777>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S775>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S775>/override_enable'
   */
  if ((TPS1_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S775>/NewValue' incorporates:
     *  ActionPort: '<S776>/Action Port'
     */
    BaseEngineController_LS_B.s775_Merge = (TPS1_new_DataStore());

    /* End of Outputs for SubSystem: '<S775>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S775>/OldValue' incorporates:
     *  ActionPort: '<S777>/Action Port'
     */
    BaseEngineController_LS_B.s775_Merge = rtb_Merge_li;

    /* End of Outputs for SubSystem: '<S775>/OldValue' */
  }

  /* End of If: '<S775>/If' */

  /* Logic: '<S781>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S781>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S781>/motohawk_fault_status4'
   */
  rtb_RelationalOperator6_h0 = (IsFaultActive(113) || IsFaultActive(114));

  /* Logic: '<S781>/Logical Operator6' */
  rtb_LogicalOperator6_b = !rtb_RelationalOperator6_h0;

  /* Logic: '<S781>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S781>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S781>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_a = (IsFaultSuspected(113) || IsFaultSuspected(114));

  /* S-Function Block: <S447>/motohawk_ain9 Resource: TPS2AnalogInput */
  {
    extern NativeError_S TPS2AnalogInput_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    TPS2AnalogInput_AnalogInput_Get(&rtb_motohawk_ain9, NULL);
  }

  /* DataTypeConversion: '<S702>/Data Type Conversion1' incorporates:
   *  S-Function (motohawk_sfun_ain): '<S447>/motohawk_ain9'
   */
  rtb_DataTypeConversion1_e = (real_T)rtb_motohawk_ain9;

  /* Switch: '<S702>/Switch' incorporates:
   *  Fcn: '<S702>/Fcn'
   *  S-Function (motohawk_sfun_calibration): '<S702>/motohawk_calibration2'
   */
  if ((TPS2Rev_Polarity_DataStore())) {
    BaseEngineController_LS_B.s702_Switch = 1023.0 - rtb_DataTypeConversion1_e;
  } else {
    BaseEngineController_LS_B.s702_Switch = rtb_DataTypeConversion1_e;
  }

  /* End of Switch: '<S702>/Switch' */

  /* S-Function (motohawk_sfun_data_read): '<S778>/motohawk_data_read' */
  rtb_motohawk_data_read1_p = TPS2Raw_Adpt_Low_DataStore();

  /* MinMax: '<S778>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S702>/motohawk_calibration9'
   */
  u = (real_T)rtb_motohawk_data_read1_p;
  BaseEngineController_LS_B.s778_MinMax = (u <= (TPS2Adapt_Low_Max_DataStore()))
    || rtIsNaN((TPS2Adapt_Low_Max_DataStore())) ? u :
    (TPS2Adapt_Low_Max_DataStore());

  /* Sum: '<S702>/Sum2' */
  rtb_DataTypeConversion1_e = BaseEngineController_LS_B.s702_Switch -
    BaseEngineController_LS_B.s778_MinMax;

  /* S-Function (motohawk_sfun_data_read): '<S778>/motohawk_data_read1' */
  rtb_motohawk_data_read1_p = TPS2Raw_Adpt_Hi_DataStore();

  /* MinMax: '<S778>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S702>/motohawk_calibration11'
   */
  u = (real_T)rtb_motohawk_data_read1_p;
  BaseEngineController_LS_B.s778_MinMax1 = (u >= (TPS2Adapt_Hi_Min_DataStore()))
    || rtIsNaN((TPS2Adapt_Hi_Min_DataStore())) ? u : (TPS2Adapt_Hi_Min_DataStore
    ());

  /* Gain: '<S702>/Gain2' incorporates:
   *  Product: '<S702>/Product1'
   *  Sum: '<S702>/Sum1'
   */
  rtb_DataTypeConversion_e = rtb_DataTypeConversion1_e /
    (BaseEngineController_LS_B.s778_MinMax1 -
     BaseEngineController_LS_B.s778_MinMax) * 100.0;

  /* MinMax: '<S782>/MinMax' incorporates:
   *  Constant: '<S702>/Constant1'
   */
  rtb_DataTypeConversion_e = rtb_DataTypeConversion_e >= 0.0 ?
    rtb_DataTypeConversion_e : 0.0;

  /* MinMax: '<S782>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S702>/motohawk_calibration1'
   */
  BaseEngineController_LS_B.s782_MinMax1 = (rtb_DataTypeConversion_e <=
    (TPS2MaxLimit_DataStore())) || rtIsNaN((TPS2MaxLimit_DataStore())) ?
    rtb_DataTypeConversion_e : (TPS2MaxLimit_DataStore());

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
    (TPS2FilterConst_DataStore())) || rtIsNaN((TPS2FilterConst_DataStore())) ?
    rtb_DataTypeConversion_e : (TPS2FilterConst_DataStore());

  /* Sum: '<S788>/Sum1' incorporates:
   *  Constant: '<S788>/Constant'
   *  Product: '<S788>/Product'
   *  Product: '<S788>/Product1'
   *  Sum: '<S788>/Sum'
   *  UnitDelay: '<S788>/Unit Delay'
   */
  rtb_Sum1_lp = (1.0 - rtb_DataTypeConversion_e) *
    BaseEngineController_LS_DWork.s788_UnitDelay_DSTATE +
    BaseEngineController_LS_B.s782_MinMax1 * rtb_DataTypeConversion_e;

  /* UnitDelay: '<S781>/Unit Delay1' */
  rtb_UnitDelay1_p = BaseEngineController_LS_DWork.s781_UnitDelay1_DSTATE;

  /* If: '<S781>/If' incorporates:
   *  Logic: '<S781>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_b && rtb_LogicalOperator1_a) {
    /* Outputs for IfAction SubSystem: '<S781>/If Action Subsystem' incorporates:
     *  ActionPort: '<S789>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay1_p, &rtb_Merge_mv);

    /* End of Outputs for SubSystem: '<S781>/If Action Subsystem' */
  } else if (rtb_RelationalOperator6_h0) {
    /* Outputs for IfAction SubSystem: '<S781>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S790>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((TPS2DfltValue_DataStore()),
      &rtb_Merge_mv);

    /* End of Outputs for SubSystem: '<S781>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S781>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S791>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_Sum1_lp, &rtb_Merge_mv);

    /* End of Outputs for SubSystem: '<S781>/If Action Subsystem2' */
  }

  /* End of If: '<S781>/If' */

  /* If: '<S792>/If' incorporates:
   *  Inport: '<S793>/In1'
   *  Inport: '<S794>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S792>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S792>/override_enable'
   */
  if ((TPS2_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S792>/NewValue' incorporates:
     *  ActionPort: '<S793>/Action Port'
     */
    BaseEngineController_LS_B.s792_Merge = (TPS2_new_DataStore());

    /* End of Outputs for SubSystem: '<S792>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S792>/OldValue' incorporates:
     *  ActionPort: '<S794>/Action Port'
     */
    BaseEngineController_LS_B.s792_Merge = rtb_Merge_mv;

    /* End of Outputs for SubSystem: '<S792>/OldValue' */
  }

  /* End of If: '<S792>/If' */

  /* Logic: '<S415>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S415>/motohawk_fault_status'
   *  S-Function (motohawk_sfun_fault_status): '<S415>/motohawk_fault_status1'
   */
  rtb_LogicalOperator6_b = (IsFaultActive(107) || IsFaultActive(108));

  /* Logic: '<S415>/Logical Operator6' incorporates:
   *  Logic: '<S415>/Logical Operator5'
   *  S-Function (motohawk_sfun_fault_status): '<S415>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S415>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_a = (rtb_LogicalOperator6_b && (IsFaultActive(113) ||
    IsFaultActive(114)));

  /* Switch: '<S415>/Switch2' incorporates:
   *  Logic: '<S415>/Logical Operator1'
   *  S-Function (motohawk_sfun_fault_status): '<S415>/motohawk_fault_status4'
   */
  if (rtb_LogicalOperator1_a || IsFaultActive(115)) {
    /* MinMax: '<S415>/MinMax' */
    BaseEngineController_LS_B.s415_Switch2 =
      (BaseEngineController_LS_B.s792_Merge >=
       BaseEngineController_LS_B.s775_Merge) || rtIsNaN
      (BaseEngineController_LS_B.s775_Merge) ?
      BaseEngineController_LS_B.s792_Merge :
      BaseEngineController_LS_B.s775_Merge;
  } else {
    /* Switch: '<S415>/Switch1' */
    if (rtb_LogicalOperator6_b) {
      BaseEngineController_LS_B.s415_Switch2 =
        BaseEngineController_LS_B.s792_Merge;
    } else {
      BaseEngineController_LS_B.s415_Switch2 =
        BaseEngineController_LS_B.s775_Merge;
    }

    /* End of Switch: '<S415>/Switch1' */
  }

  /* End of Switch: '<S415>/Switch2' */

  /* RelationalOperator: '<S134>/RelOp' incorporates:
   *  Constant: '<S134>/Constant'
   */
  rtb_LogicalOperator6_b = (BaseEngineController_LS_B.s430_State == 2);

  /* S-Function Block: <S527>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s527_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_ea = ((real_T) delta) * 0.000001;
  }

  /* UnitDelay: '<S527>/Unit Delay' */
  rtb_DataTypeConversion1_e =
    BaseEngineController_LS_DWork.s527_UnitDelay_DSTATE;

  /* Logic: '<S502>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S502>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S502>/motohawk_fault_status4'
   */
  rtb_RelationalOperator6_h0 = (IsFaultActive(62) || IsFaultActive(63));

  /* Logic: '<S502>/Logical Operator6' */
  rtb_LogicalOperator1_a = !rtb_RelationalOperator6_h0;

  /* Logic: '<S502>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S502>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S502>/motohawk_fault_status3'
   */
  rtb_RelOp_pu = (IsFaultSuspected(62) || IsFaultSuspected(63));

  /* S-Function Block: <S445>/motohawk_frequency_in Frequency Input Get: FuelSensorPin */
  {
    extern NativeError_S FuelSensorPin_FrequencyInput_Get(uint32_T *frequency,
      int16_T *duty_cycle);
    FuelSensorPin_FrequencyInput_Get
      (&BaseEngineController_LS_B.s445_motohawk_frequency_in, NULL);
  }

  /* DataTypeConversion: '<S502>/Data Type Conversion' */
  rtb_DataTypeConversion_e = (real_T)
    BaseEngineController_LS_B.s445_motohawk_frequency_in;

  /* Product: '<S502>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S502>/motohawk_calibration4'
   */
  rtb_Switch_o = rtb_DataTypeConversion_e * (FuelSensGain_DataStore());

  /* Sum: '<S502>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S502>/motohawk_calibration5'
   */
  BaseEngineController_LS_B.s502_Sum1 = rtb_Switch_o + (FuelSensOfst_DataStore());

  /* Saturate: '<S502>/Saturation' */
  rtb_Saturation_g = BaseEngineController_LS_B.s502_Sum1 >= 90.0 ? 90.0 :
    BaseEngineController_LS_B.s502_Sum1 <= 0.0 ? 0.0 :
    BaseEngineController_LS_B.s502_Sum1;

  /* UnitDelay: '<S502>/Unit Delay1' */
  rtb_UnitDelay1_ew = BaseEngineController_LS_DWork.s502_UnitDelay1_DSTATE;

  /* If: '<S502>/If' incorporates:
   *  Logic: '<S502>/Logical Operator5'
   */
  if (rtb_LogicalOperator1_a && rtb_RelOp_pu) {
    /* Outputs for IfAction SubSystem: '<S502>/If Action Subsystem' incorporates:
     *  ActionPort: '<S519>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay1_ew, &rtb_Merge_i5);

    /* End of Outputs for SubSystem: '<S502>/If Action Subsystem' */
  } else if (rtb_RelationalOperator6_h0) {
    /* Outputs for IfAction SubSystem: '<S502>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S520>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((FuelSensDfltValue_DataStore()),
      &rtb_Merge_i5);

    /* End of Outputs for SubSystem: '<S502>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S502>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S521>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_Saturation_g, &rtb_Merge_i5);

    /* End of Outputs for SubSystem: '<S502>/If Action Subsystem2' */
  }

  /* End of If: '<S502>/If' */

  /* Product: '<S527>/Product1' incorporates:
   *  S-Function (motohawk_sfun_delta_time): '<S527>/motohawk_delta_time'
   *  Sum: '<S527>/Sum3'
   */
  rtb_DataTypeConversion_c4 = 1.0 / rtb_motohawk_delta_time_ea * (rtb_Merge_i5 -
    rtb_DataTypeConversion1_e);

  /* MinMax: '<S528>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S525>/motohawk_calibration1'
   */
  rtb_DataTypeConversion_c4 = (rtb_DataTypeConversion_c4 >= (Fall_Rate_DataStore
                                ())) || rtIsNaN((Fall_Rate_DataStore())) ?
    rtb_DataTypeConversion_c4 : (Fall_Rate_DataStore());

  /* Sum: '<S527>/Sum2' incorporates:
   *  MinMax: '<S528>/MinMax1'
   *  Product: '<S527>/Product'
   *  S-Function (motohawk_sfun_calibration): '<S525>/motohawk_calibration'
   *  S-Function (motohawk_sfun_delta_time): '<S527>/motohawk_delta_time'
   */
  rtb_Sum2_gr = ((rtb_DataTypeConversion_c4 <= (Rise_Rate_DataStore())) ||
                 rtIsNaN((Rise_Rate_DataStore())) ? rtb_DataTypeConversion_c4 :
                 (Rise_Rate_DataStore())) * rtb_motohawk_delta_time_ea +
    rtb_DataTypeConversion1_e;

  /* S-Function Block: <S523>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s523_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_c4 = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S523>/Product' incorporates:
   *  MinMax: '<S523>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S523>/motohawk_calibration'
   */
  rtb_DataTypeConversion_c4 /= (rtb_DataTypeConversion_c4 >=
    (FuelSensFilterConst_DataStore())) || rtIsNaN((FuelSensFilterConst_DataStore
    ())) ? rtb_DataTypeConversion_c4 : (FuelSensFilterConst_DataStore());

  /* Sum: '<S526>/Sum1' incorporates:
   *  Constant: '<S526>/Constant'
   *  Product: '<S526>/Product'
   *  Product: '<S526>/Product1'
   *  Sum: '<S526>/Sum'
   *  UnitDelay: '<S526>/Unit Delay'
   */
  rtb_Sum1_mz = (1.0 - rtb_DataTypeConversion_c4) *
    BaseEngineController_LS_DWork.s526_UnitDelay_DSTATE + rtb_Merge_i5 *
    rtb_DataTypeConversion_c4;

  /* UnitDelay: '<S524>/Unit Delay' */
  rtb_UnitDelay_n = BaseEngineController_LS_DWork.s524_UnitDelay_DSTATE;

  /* UnitDelay: '<S524>/Unit Delay1' */
  rtb_UnitDelay1_h = BaseEngineController_LS_DWork.s524_UnitDelay1_DSTATE;

  /* UnitDelay: '<S524>/Unit Delay2' */
  rtb_DataTypeConversion1_e =
    BaseEngineController_LS_DWork.s524_UnitDelay2_DSTATE;

  /* MultiPortSwitch: '<S518>/Multiport Switch' incorporates:
   *  Product: '<S524>/Product'
   *  S-Function (motohawk_sfun_calibration): '<S518>/motohawk_calibration'
   *  S-Function (motohawk_sfun_calibration): '<S524>/motohawk_calibration'
   */
  switch (((uint8_T)(Filter_Type_Selection_DataStore()))) {
   case 0:
    rtb_DataTypeConversion1_e = rtb_Sum2_gr;
    break;

   case 1:
    rtb_DataTypeConversion1_e = rtb_Sum1_mz;
    break;

   default:
    /* Product: '<S524>/Product3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S524>/motohawk_calibration3'
     */
    rtb_DataTypeConversion1_e *= (Gain3_DataStore());

    /* Sum: '<S524>/Sum2' incorporates:
     *  Product: '<S524>/Product2'
     *  S-Function (motohawk_sfun_calibration): '<S524>/motohawk_calibration2'
     */
    rtb_DataTypeConversion1_e += (Gain2_DataStore()) * rtb_UnitDelay1_h;

    /* Sum: '<S524>/Sum' incorporates:
     *  Product: '<S524>/Product1'
     *  S-Function (motohawk_sfun_calibration): '<S524>/motohawk_calibration1'
     *  Sum: '<S524>/Sum1'
     */
    rtb_DataTypeConversion1_e = ((Gain1_DataStore()) * rtb_UnitDelay_n +
      rtb_DataTypeConversion1_e) + rtb_Merge_i5;
    rtb_DataTypeConversion1_e *= (FinalGain_DataStore());
    break;
  }

  /* End of MultiPortSwitch: '<S518>/Multiport Switch' */
  /* If: '<S522>/If' incorporates:
   *  Inport: '<S529>/In1'
   *  Inport: '<S530>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S522>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S522>/override_enable'
   */
  if ((FuelSens_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S522>/NewValue' incorporates:
     *  ActionPort: '<S529>/Action Port'
     */
    BaseEngineController_LS_B.s522_Merge = (FuelSens_new_DataStore());

    /* End of Outputs for SubSystem: '<S522>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S522>/OldValue' incorporates:
     *  ActionPort: '<S530>/Action Port'
     */
    BaseEngineController_LS_B.s522_Merge = rtb_DataTypeConversion1_e;

    /* End of Outputs for SubSystem: '<S522>/OldValue' */
  }

  /* End of If: '<S522>/If' */

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
      rtb_motohawk_replicate1 = BaseEngineController_LS_B.s415_Switch2;
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
        (BaseEngineController_LS_B.s672_Merge, (CrankECT05IdxArr_DataStore()), 5,
         (CrankECT05Idx_DataStore()));
      rtb_motohawk_prelookup1_nl = (CrankECT05Idx_DataStore());
    }

    /* S-Function Block: <S133>/motohawk_prelookup */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (CrankRPM05In_DataStore()) = BaseEngineController_LS_B.s500_Sum1;
      (CrankRPM05Idx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_LS_B.s500_Sum1, (CrankRPM05IdxArr_DataStore()), 5,
         (CrankRPM05Idx_DataStore()));
      rtb_motohawk_prelookup_c = (CrankRPM05Idx_DataStore());
    }

    /* S-Function Block: <S133>/motohawk_prelookup2 */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (CrankIAT05Idx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_LS_B.s690_Merge, (CrankIAT05IdxArr_DataStore()), 5,
         (CrankIAT05Idx_DataStore()));
      rtb_motohawk_prelookup2_h = (CrankIAT05Idx_DataStore());
    }

    /* S-Function Block: <S133>/motohawk_prelookup3 */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (CrankOXY05In_DataStore()) = BaseEngineController_LS_B.s522_Merge;
      (CrankOXY05Idx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_LS_B.s522_Merge, (CrankOXY05IdxArr_DataStore()), 5,
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
    rtb_DataTypeConversion1_e = rtb_motohawk_interpolation_2d_o1 *
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
  /* S-Function Block: <S402>/motohawk_prelookup2 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (TPS09In_DataStore()) = BaseEngineController_LS_B.s415_Switch2;
    (TPS09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s415_Switch2, (TPS09IdxArr_DataStore()), 9,
       (TPS09Idx_DataStore()));
    rtb_motohawk_prelookup2 = (TPS09Idx_DataStore());
  }

  /* S-Function Block: <S403>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (VSPD17In_DataStore()) = BaseEngineController_LS_B.s477_Merge;
    (VSPD17Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s477_Merge, (VSPD17IdxArr_DataStore()), 17,
       (VSPD17Idx_DataStore()));
    rtb_motohawk_prelookup1_k = (VSPD17Idx_DataStore());
  }

  /* Outputs for Atomic SubSystem: '<S369>/Base TPS Request' */

  /* UnitDelay: '<S405>/Unit Delay2' */
  rtb_UnitDelay_gh = BaseEngineController_LS_DWork.s405_UnitDelay2_DSTATE;

  /* S-Function Block: <S405>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (APP17In_DataStore()) = BaseEngineController_LS_B.s408_Switch1;
    (APP17Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s408_Switch1, (APP17IdxArr_DataStore()), 17,
       (APP17Idx_DataStore()));
    rtb_motohawk_prelookup_gv = (APP17Idx_DataStore());
  }

  /* S-Function Block: <S405>/motohawk_interpolation_2d */
  {
    extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
      real_T *map_data, uint32_T row_sz, uint32_T col_sz);
    rtb_motohawk_interpolation_2d_h = TableInterpolation2D_real_T
      (rtb_motohawk_prelookup1_k, rtb_motohawk_prelookup_gv, (real_T *)
       ((ETCRequestMap_DataStore())), 17, 17);
    (ETCRequest_DataStore()) = rtb_motohawk_interpolation_2d_h;
  }

  /* RelationalOperator: '<S405>/Relational Operator3' */
  BaseEngineController_LS_B.s405_RelationalOperator3 = ((rtb_UnitDelay_gh <
    rtb_motohawk_interpolation_2d_h));

  /* Outputs for Enabled SubSystem: '<S405>/PassThrough1' */
  BaseEngineController_LS_PassThrough1
    (BaseEngineController_LS_B.s405_RelationalOperator3,
     (ETCReqIncFiltC_DataStore()), &BaseEngineController_LS_B.s405_Merge);

  /* End of Outputs for SubSystem: '<S405>/PassThrough1' */

  /* RelationalOperator: '<S405>/Relational Operator2' */
  rtb_RelationalOperator2_b = (rtb_UnitDelay_gh >
    rtb_motohawk_interpolation_2d_h);

  /* Outputs for Enabled SubSystem: '<S405>/PassThrough2' */
  BaseEngineController_LS_PassThrough1(rtb_RelationalOperator2_b,
    (ETCReqDecFiltC_DataStore()), &BaseEngineController_LS_B.s405_Merge);

  /* End of Outputs for SubSystem: '<S405>/PassThrough2' */

  /* S-Function Block: <S422>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s422_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_l0 = ((real_T) delta) * 0.000001;
  }

  /* S-Function Block: <S405>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s405_motohawk_delta_time_DWORK1, NULL);
    rtb_UnitDelay_gh = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S405>/Product' incorporates:
   *  MinMax: '<S405>/MinMax'
   */
  rtb_UnitDelay_gh /= (rtb_UnitDelay_gh >= BaseEngineController_LS_B.s405_Merge)
    || rtIsNaN(BaseEngineController_LS_B.s405_Merge) ? rtb_UnitDelay_gh :
    BaseEngineController_LS_B.s405_Merge;

  /* Product: '<S419>/Product' */
  rtb_DataTypeConversion1_e = rtb_motohawk_interpolation_2d_h * rtb_UnitDelay_gh;

  /* Sum: '<S419>/Sum' incorporates:
   *  Constant: '<S419>/Constant'
   */
  rtb_Switch_o = 1.0 - rtb_UnitDelay_gh;

  /* UnitDelay: '<S419>/Unit Delay' */
  rtb_UnitDelay_gh = BaseEngineController_LS_DWork.s419_UnitDelay_DSTATE;

  /* Sum: '<S419>/Sum1' incorporates:
   *  Product: '<S419>/Product1'
   */
  rtb_Switch_o = rtb_Switch_o * rtb_UnitDelay_gh + rtb_DataTypeConversion1_e;

  /* UnitDelay: '<S422>/Unit Delay' */
  rtb_UnitDelay_gh = BaseEngineController_LS_DWork.s422_UnitDelay_DSTATE;

  /* Product: '<S422>/Product1' incorporates:
   *  S-Function (motohawk_sfun_delta_time): '<S422>/motohawk_delta_time'
   *  Sum: '<S422>/Sum3'
   */
  rtb_DataTypeConversion1_e = 1.0 / rtb_motohawk_delta_time_l0 * (rtb_Switch_o -
    rtb_UnitDelay_gh);

  /* S-Function Block: <S405>/motohawk_interpolation_1d3 */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_motohawk_interpolation_1d1_ku = TableInterpolation1D_real_T
      (rtb_motohawk_prelookup2, (real_T *) ((ETCReqFallRateTbl_DataStore())), 9);
    (ETCReqFallRate_DataStore()) = rtb_motohawk_interpolation_1d1_ku;
  }

  /* MinMax: '<S423>/MinMax' */
  rtb_Abs_k = (rtb_DataTypeConversion1_e >= rtb_motohawk_interpolation_1d1_ku) ||
    rtIsNaN(rtb_motohawk_interpolation_1d1_ku) ? rtb_DataTypeConversion1_e :
    rtb_motohawk_interpolation_1d1_ku;

  /* S-Function Block: <S405>/motohawk_interpolation_1d1 */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_motohawk_interpolation_1d1_ku = TableInterpolation1D_real_T
      (rtb_motohawk_prelookup2, (real_T *) ((ETCReqRiseRateTbl_DataStore())), 9);
    (ETCReqRiseRate_DataStore()) = rtb_motohawk_interpolation_1d1_ku;
  }

  /* Sum: '<S422>/Sum2' incorporates:
   *  MinMax: '<S423>/MinMax'
   *  MinMax: '<S423>/MinMax1'
   *  Product: '<S422>/Product'
   *  S-Function (motohawk_sfun_delta_time): '<S422>/motohawk_delta_time'
   */
  BaseEngineController_LS_B.s422_Sum2 = ((rtb_Abs_k <=
    rtb_motohawk_interpolation_1d1_ku) || rtIsNaN
    (rtb_motohawk_interpolation_1d1_ku) ? rtb_Abs_k :
    rtb_motohawk_interpolation_1d1_ku) * rtb_motohawk_delta_time_l0 +
    rtb_UnitDelay_gh;

  /* Update for UnitDelay: '<S405>/Unit Delay2' incorporates:
   *  UnitDelay: '<S405>/Unit Delay1'
   */
  BaseEngineController_LS_DWork.s405_UnitDelay2_DSTATE =
    BaseEngineController_LS_DWork.s405_UnitDelay1_DSTATE;

  /* Update for UnitDelay: '<S419>/Unit Delay' */
  BaseEngineController_LS_DWork.s419_UnitDelay_DSTATE = rtb_Switch_o;

  /* Update for UnitDelay: '<S422>/Unit Delay' */
  BaseEngineController_LS_DWork.s422_UnitDelay_DSTATE =
    BaseEngineController_LS_B.s422_Sum2;

  /* Update for UnitDelay: '<S405>/Unit Delay1' incorporates:
   *  UnitDelay: '<S405>/Unit Delay3'
   */
  BaseEngineController_LS_DWork.s405_UnitDelay1_DSTATE =
    BaseEngineController_LS_DWork.s405_UnitDelay3_DSTATE;

  /* Update for UnitDelay: '<S405>/Unit Delay3' incorporates:
   *  UnitDelay: '<S405>/Unit Delay4'
   */
  BaseEngineController_LS_DWork.s405_UnitDelay3_DSTATE =
    BaseEngineController_LS_DWork.s405_UnitDelay4_DSTATE;

  /* Update for UnitDelay: '<S405>/Unit Delay4' */
  BaseEngineController_LS_DWork.s405_UnitDelay4_DSTATE =
    rtb_motohawk_interpolation_2d_h;

  /* End of Outputs for SubSystem: '<S369>/Base TPS Request' */

  /* UnitDelay: '<S413>/Unit Delay' */
  rtb_Switch_o = BaseEngineController_LS_DWork.s413_UnitDelay_DSTATE;

  /* Sum: '<S413>/Sum' incorporates:
   *  Constant: '<S413>/Constant'
   *  S-Function (motohawk_sfun_calibration): '<S413>/motohawk_calibration'
   */
  rtb_Switch1_f = 1.0 - (O2DelagFilterConst_DataStore());

  /* S-Function Block: <S611>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s611_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_c4 = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S611>/Product' incorporates:
   *  MinMax: '<S611>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S611>/motohawk_calibration'
   */
  rtb_DataTypeConversion_c4 /= (rtb_DataTypeConversion_c4 >=
    (Bank2_EquivRatioFilterConst_DataStore())) || rtIsNaN
    ((Bank2_EquivRatioFilterConst_DataStore())) ? rtb_DataTypeConversion_c4 :
    (Bank2_EquivRatioFilterConst_DataStore());

  /* Logic: '<S584>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S584>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S584>/motohawk_fault_status4'
   */
  rtb_RelationalOperator6_h0 = (IsFaultActive(23) || IsFaultActive(24));

  /* Logic: '<S584>/Logical Operator6' */
  rtb_LogicalOperator6_b = !rtb_RelationalOperator6_h0;

  /* Logic: '<S584>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S584>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S584>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_a = (IsFaultSuspected(23) || IsFaultSuspected(24));

  /* S-Function (motohawk_sfun_read_canmsg): '<S581>/Read CAN Message1' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_8127p0001;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_8127p0001,
      &messageObj);
    if ((BaseEngineController_LS_B.s581_ReadCANMessage1_o1 + 1) >
        BaseEngineController_LS_B.s581_ReadCANMessage1_o1)
      BaseEngineController_LS_B.s581_ReadCANMessage1_o1++;
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
      BaseEngineController_LS_B.s581_ReadCANMessage1_o2 = ((real_T) tmp0) /
        ((real_T) 10000);
      BaseEngineController_LS_B.s581_ReadCANMessage1_o3 = ((real_T) tmp1) /
        ((real_T) 1000);
      BaseEngineController_LS_B.s581_ReadCANMessage1_o4 = ((real_T) tmp2) /
        ((real_T) 10);
      BaseEngineController_LS_B.s581_ReadCANMessage1_o5 = ((real_T) tmp3) /
        ((real_T) 10);
      BaseEngineController_LS_B.s581_ReadCANMessage1_o6 = (real_T) tmp4;
      BaseEngineController_LS_B.s581_ReadCANMessage1_o7 = (real_T) tmp5;
      BaseEngineController_LS_B.s581_ReadCANMessage1_o8 = (real_T) tmp6;
      BaseEngineController_LS_B.s581_ReadCANMessage1_o9 = (real_T) tmp7;
      BaseEngineController_LS_B.s581_ReadCANMessage1_o10 = (real_T) tmp8;
      BaseEngineController_LS_B.s581_ReadCANMessage1_o1 = 0;
    }
  }

  /* If: '<S602>/If' incorporates:
   *  Inport: '<S653>/In1'
   *  Inport: '<S654>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S602>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S602>/override_enable'
   */
  if ((Bank2_Lambda_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S602>/NewValue' incorporates:
     *  ActionPort: '<S653>/Action Port'
     */
    rtb_Merge_l52 = (Bank2_Lambda_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S602>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S602>/OldValue' incorporates:
     *  ActionPort: '<S654>/Action Port'
     */
    rtb_Merge_l52 = BaseEngineController_LS_B.s581_ReadCANMessage1_o2;

    /* End of Outputs for SubSystem: '<S602>/OldValue' */
  }

  /* End of If: '<S602>/If' */

  /* Math: '<S581>/Math Function1' incorporates:
   *  Saturate: '<S581>/Saturation1'
   *
   * About '<S581>/Math Function1':
   *  Operator: reciprocal
   */
  BaseEngineController_LS_B.s581_MathFunction1 = 1.0 / (rtb_Merge_l52 >= 0.1 ?
    rtb_Merge_l52 : 0.1);

  /* Product: '<S584>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S584>/motohawk_calibration4'
   */
  rtb_DataTypeConversion1_e = BaseEngineController_LS_B.s581_MathFunction1 *
    (Bank2_EquivRatioGain_DataStore());

  /* Sum: '<S584>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S584>/motohawk_calibration5'
   */
  BaseEngineController_LS_B.s584_Sum1 = rtb_DataTypeConversion1_e +
    (Bank2_EquivRatioOfst_DataStore());

  /* UnitDelay: '<S584>/Unit Delay1' */
  rtb_UnitDelay1_ij = BaseEngineController_LS_DWork.s584_UnitDelay1_DSTATE;

  /* If: '<S584>/If' incorporates:
   *  Logic: '<S584>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_b && rtb_LogicalOperator1_a) {
    /* Outputs for IfAction SubSystem: '<S584>/If Action Subsystem' incorporates:
     *  ActionPort: '<S612>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay1_ij, &rtb_Merge_j);

    /* End of Outputs for SubSystem: '<S584>/If Action Subsystem' */
  } else if (rtb_RelationalOperator6_h0) {
    /* Outputs for IfAction SubSystem: '<S584>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S613>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      ((Bank2_EquivRatioDfltValue_DataStore()), &rtb_Merge_j);

    /* End of Outputs for SubSystem: '<S584>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S584>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S614>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      (BaseEngineController_LS_B.s584_Sum1, &rtb_Merge_j);

    /* End of Outputs for SubSystem: '<S584>/If Action Subsystem2' */
  }

  /* End of If: '<S584>/If' */

  /* Sum: '<S616>/Sum1' incorporates:
   *  Constant: '<S616>/Constant'
   *  Product: '<S616>/Product'
   *  Product: '<S616>/Product1'
   *  Sum: '<S616>/Sum'
   *  UnitDelay: '<S616>/Unit Delay'
   */
  rtb_Sum1_o = (1.0 - rtb_DataTypeConversion_c4) *
    BaseEngineController_LS_DWork.s616_UnitDelay_DSTATE + rtb_Merge_j *
    rtb_DataTypeConversion_c4;

  /* If: '<S615>/If' incorporates:
   *  Inport: '<S617>/In1'
   *  Inport: '<S618>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S615>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S615>/override_enable'
   */
  if ((Bank2_EquivRatio_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S615>/NewValue' incorporates:
     *  ActionPort: '<S617>/Action Port'
     */
    BaseEngineController_LS_B.s615_Merge = (Bank2_EquivRatio_new_DataStore());

    /* End of Outputs for SubSystem: '<S615>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S615>/OldValue' incorporates:
     *  ActionPort: '<S618>/Action Port'
     */
    BaseEngineController_LS_B.s615_Merge = rtb_Sum1_o;

    /* End of Outputs for SubSystem: '<S615>/OldValue' */
  }

  /* End of If: '<S615>/If' */

  /* MultiPortSwitch: '<S581>/Multiport Switch' incorporates:
   *  Constant: '<S581>/Constant'
   *  S-Function (motohawk_sfun_calibration): '<S581>/motohawk_calibration2'
   */
  if (((uint8_T)(Bank2_Enable_DataStore())) == 0) {
    rtb_DataTypeConversion_c4 = 0.0;
  } else {
    rtb_DataTypeConversion_c4 = BaseEngineController_LS_B.s615_Merge;
  }

  /* End of MultiPortSwitch: '<S581>/Multiport Switch' */
  /* S-Function Block: <S603>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s603_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_fq = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S603>/Product' incorporates:
   *  MinMax: '<S603>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S603>/motohawk_calibration'
   */
  rtb_DataTypeConversion_fq /= (rtb_DataTypeConversion_fq >=
    (Bank1_EquivRatioFilterConst_DataStore())) || rtIsNaN
    ((Bank1_EquivRatioFilterConst_DataStore())) ? rtb_DataTypeConversion_fq :
    (Bank1_EquivRatioFilterConst_DataStore());

  /* Logic: '<S583>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S583>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S583>/motohawk_fault_status4'
   */
  rtb_RelationalOperator6_h0 = (IsFaultActive(21) || IsFaultActive(22));

  /* Logic: '<S583>/Logical Operator6' */
  rtb_LogicalOperator6_b = !rtb_RelationalOperator6_h0;

  /* Logic: '<S583>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S583>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S583>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_a = (IsFaultSuspected(21) || IsFaultSuspected(22));

  /* S-Function (motohawk_sfun_read_canmsg): '<S581>/Read CAN Message' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_8126p0002;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_8126p0002,
      &messageObj);
    if ((BaseEngineController_LS_B.s581_ReadCANMessage_o1 + 1) >
        BaseEngineController_LS_B.s581_ReadCANMessage_o1)
      BaseEngineController_LS_B.s581_ReadCANMessage_o1++;
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
      BaseEngineController_LS_B.s581_ReadCANMessage_o2 = ((real_T) tmp0) /
        ((real_T) 10000);
      BaseEngineController_LS_B.s581_ReadCANMessage_o3 = ((real_T) tmp1) /
        ((real_T) 1000);
      BaseEngineController_LS_B.s581_ReadCANMessage_o4 = ((real_T) tmp2) /
        ((real_T) 10);
      BaseEngineController_LS_B.s581_ReadCANMessage_o5 = ((real_T) tmp3) /
        ((real_T) 10);
      BaseEngineController_LS_B.s581_ReadCANMessage_o6 = (real_T) tmp4;
      BaseEngineController_LS_B.s581_ReadCANMessage_o7 = (real_T) tmp5;
      BaseEngineController_LS_B.s581_ReadCANMessage_o8 = (real_T) tmp6;
      BaseEngineController_LS_B.s581_ReadCANMessage_o9 = (real_T) tmp7;
      BaseEngineController_LS_B.s581_ReadCANMessage_o10 = (real_T) tmp8;
      BaseEngineController_LS_B.s581_ReadCANMessage_o1 = 0;
    }
  }

  /* If: '<S585>/If' incorporates:
   *  Inport: '<S619>/In1'
   *  Inport: '<S620>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S585>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S585>/override_enable'
   */
  if ((Bank1_Lambda_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S585>/NewValue' incorporates:
     *  ActionPort: '<S619>/Action Port'
     */
    rtb_Merge_js = (Bank1_Lambda_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S585>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S585>/OldValue' incorporates:
     *  ActionPort: '<S620>/Action Port'
     */
    rtb_Merge_js = BaseEngineController_LS_B.s581_ReadCANMessage_o2;

    /* End of Outputs for SubSystem: '<S585>/OldValue' */
  }

  /* End of If: '<S585>/If' */

  /* Math: '<S581>/Math Function' incorporates:
   *  Saturate: '<S581>/Saturation'
   *
   * About '<S581>/Math Function':
   *  Operator: reciprocal
   */
  BaseEngineController_LS_B.s581_MathFunction = 1.0 / (rtb_Merge_js >= 0.1 ?
    rtb_Merge_js : 0.1);

  /* Product: '<S583>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S583>/motohawk_calibration4'
   */
  rtb_DataTypeConversion1_e = BaseEngineController_LS_B.s581_MathFunction *
    (Bank1_EquivRatioGain_DataStore());

  /* Sum: '<S583>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S583>/motohawk_calibration5'
   */
  BaseEngineController_LS_B.s583_Sum1 = rtb_DataTypeConversion1_e +
    (Bank1_EquivRatioOfst_DataStore());

  /* UnitDelay: '<S583>/Unit Delay1' */
  rtb_UnitDelay1_l = BaseEngineController_LS_DWork.s583_UnitDelay1_DSTATE;

  /* If: '<S583>/If' incorporates:
   *  Logic: '<S583>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_b && rtb_LogicalOperator1_a) {
    /* Outputs for IfAction SubSystem: '<S583>/If Action Subsystem' incorporates:
     *  ActionPort: '<S604>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay1_l, &rtb_Merge_h);

    /* End of Outputs for SubSystem: '<S583>/If Action Subsystem' */
  } else if (rtb_RelationalOperator6_h0) {
    /* Outputs for IfAction SubSystem: '<S583>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S605>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      ((Bank1_EquivRatioDfltValue_DataStore()), &rtb_Merge_h);

    /* End of Outputs for SubSystem: '<S583>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S583>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S606>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      (BaseEngineController_LS_B.s583_Sum1, &rtb_Merge_h);

    /* End of Outputs for SubSystem: '<S583>/If Action Subsystem2' */
  }

  /* End of If: '<S583>/If' */

  /* Sum: '<S608>/Sum1' incorporates:
   *  Constant: '<S608>/Constant'
   *  Product: '<S608>/Product'
   *  Product: '<S608>/Product1'
   *  Sum: '<S608>/Sum'
   *  UnitDelay: '<S608>/Unit Delay'
   */
  rtb_Sum1_c = (1.0 - rtb_DataTypeConversion_fq) *
    BaseEngineController_LS_DWork.s608_UnitDelay_DSTATE + rtb_Merge_h *
    rtb_DataTypeConversion_fq;

  /* If: '<S607>/If' incorporates:
   *  Inport: '<S609>/In1'
   *  Inport: '<S610>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S607>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S607>/override_enable'
   */
  if ((Bank1_EquivRatio_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S607>/NewValue' incorporates:
     *  ActionPort: '<S609>/Action Port'
     */
    BaseEngineController_LS_B.s607_Merge = (Bank1_EquivRatio_new_DataStore());

    /* End of Outputs for SubSystem: '<S607>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S607>/OldValue' incorporates:
     *  ActionPort: '<S610>/Action Port'
     */
    BaseEngineController_LS_B.s607_Merge = rtb_Sum1_c;

    /* End of Outputs for SubSystem: '<S607>/OldValue' */
  }

  /* End of If: '<S607>/If' */

  /* Gain: '<S581>/Gain' incorporates:
   *  Sum: '<S581>/Add'
   */
  BaseEngineController_LS_B.s581_Gain = (BaseEngineController_LS_B.s607_Merge +
    rtb_DataTypeConversion_c4) * 0.5;

  /* Sum: '<S413>/Sum1' incorporates:
   *  Product: '<S413>/Product'
   *  Product: '<S413>/Product1'
   *  S-Function (motohawk_sfun_calibration): '<S413>/motohawk_calibration'
   */
  BaseEngineController_LS_B.s413_Sum1 = rtb_Switch_o * rtb_Switch1_f +
    (O2DelagFilterConst_DataStore()) * BaseEngineController_LS_B.s581_Gain;

  /* S-Function Block: <S435>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s435_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_f = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S435>/Switch' incorporates:
   *  Constant: '<S434>/Constant'
   *  Constant: '<S435>/Constant'
   *  RelationalOperator: '<S434>/RelOp'
   *  S-Function (motohawk_sfun_data_read): '<S417>/motohawk_data_read'
   *  S-Function (motohawk_sfun_data_read): '<S435>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S435>/motohawk_delta_time'
   *  Sum: '<S435>/Sum'
   */
  if (((uint8_T)EngineState_DataStore()) == 3) {
    BaseEngineController_LS_B.s435_Switch = rtb_motohawk_delta_time_f +
      TimeSinceRunTimer_DataStore();
  } else {
    BaseEngineController_LS_B.s435_Switch = 0.0;
  }

  /* End of Switch: '<S435>/Switch' */
  /* S-Function Block: <S400>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (RPM09In_DataStore()) = BaseEngineController_LS_B.s500_Sum1;
    (RPM09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s500_Sum1, (RPM09IdxArr_DataStore()), 9,
       (RPM09Idx_DataStore()));
    BaseEngineController_LS_B.s400_motohawk_prelookup1 = (RPM09Idx_DataStore());
  }

  /* S-Function Block: <S400>/motohawk_prelookup5 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (RPM17In_DataStore()) = BaseEngineController_LS_B.s500_Sum1;
    (RPM17Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s500_Sum1, (RPM17IdxArr_DataStore()), 17,
       (RPM17Idx_DataStore()));
    BaseEngineController_LS_B.s400_Indexes = (RPM17Idx_DataStore());
  }

  /* S-Function Block: <S396>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (ECT05In_DataStore()) = BaseEngineController_LS_B.s672_Merge;
    (ECT05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s672_Merge, (ECT05IdxArr_DataStore()), 5,
       (ECT05Idx_DataStore()));
    BaseEngineController_LS_B.s396_motohawk_prelookup = (ECT05Idx_DataStore());
  }

  /* S-Function Block: <S396>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (ECT09In_DataStore()) = BaseEngineController_LS_B.s672_Merge;
    (ECT09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s672_Merge, (ECT09IdxArr_DataStore()), 9,
       (ECT09Idx_DataStore()));
    rtb_motohawk_prelookup1_h = (ECT09Idx_DataStore());
  }

  /* S-Function Block: <S397>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (IAT05In_DataStore()) = BaseEngineController_LS_B.s690_Merge;
    (IAT05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s690_Merge, (IAT05IdxArr_DataStore()), 5,
       (IAT05Idx_DataStore()));
    BaseEngineController_LS_B.s397_motohawk_prelookup = (IAT05Idx_DataStore());
  }

  /* S-Function Block: <S573>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s573_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_fq = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S573>/Product' incorporates:
   *  MinMax: '<S573>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S573>/motohawk_calibration'
   */
  rtb_DataTypeConversion_fq /= (rtb_DataTypeConversion_fq >=
    (SysVoltFilterConst_DataStore())) || rtIsNaN((SysVoltFilterConst_DataStore()))
    ? rtb_DataTypeConversion_fq : (SysVoltFilterConst_DataStore());

  /* Logic: '<S509>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S509>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S509>/motohawk_fault_status4'
   */
  rtb_RelationalOperator6_h0 = (IsFaultActive(101) || IsFaultActive(102));

  /* Logic: '<S509>/Logical Operator6' */
  rtb_LogicalOperator6_b = !rtb_RelationalOperator6_h0;

  /* Logic: '<S509>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S509>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S509>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_a = (IsFaultSuspected(101) || IsFaultSuspected(102));

  /* S-Function Block: <S445>/motohawk_ain14 Resource: SysVoltage */
  {
    extern NativeError_S SysVoltage_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    SysVoltage_AnalogInput_Get(&BaseEngineController_LS_B.s445_motohawk_ain14,
      NULL);
  }

  /* DataTypeConversion: '<S509>/Data Type Conversion' */
  rtb_DataTypeConversion_c4 = (real_T)
    BaseEngineController_LS_B.s445_motohawk_ain14;

  /* Product: '<S509>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S509>/motohawk_calibration4'
   */
  rtb_DataTypeConversion1_e = rtb_DataTypeConversion_c4 * (SysVoltGain_DataStore
    ());

  /* Sum: '<S509>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S509>/motohawk_calibration5'
   */
  BaseEngineController_LS_B.s509_Sum1 = rtb_DataTypeConversion1_e +
    (SysVoltOfst_DataStore());

  /* UnitDelay: '<S509>/Unit Delay1' */
  rtb_UnitDelay1_f = BaseEngineController_LS_DWork.s509_UnitDelay1_DSTATE;

  /* If: '<S509>/If' incorporates:
   *  Logic: '<S509>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_b && rtb_LogicalOperator1_a) {
    /* Outputs for IfAction SubSystem: '<S509>/If Action Subsystem' incorporates:
     *  ActionPort: '<S574>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay1_f, &rtb_Merge_f);

    /* End of Outputs for SubSystem: '<S509>/If Action Subsystem' */
  } else if (rtb_RelationalOperator6_h0) {
    /* Outputs for IfAction SubSystem: '<S509>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S575>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((SysVoltDfltValue_DataStore()),
      &rtb_Merge_f);

    /* End of Outputs for SubSystem: '<S509>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S509>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S576>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      (BaseEngineController_LS_B.s509_Sum1, &rtb_Merge_f);

    /* End of Outputs for SubSystem: '<S509>/If Action Subsystem2' */
  }

  /* End of If: '<S509>/If' */

  /* Sum: '<S578>/Sum1' incorporates:
   *  Constant: '<S578>/Constant'
   *  Product: '<S578>/Product'
   *  Product: '<S578>/Product1'
   *  Sum: '<S578>/Sum'
   *  UnitDelay: '<S578>/Unit Delay'
   */
  rtb_Sum1_nl = (1.0 - rtb_DataTypeConversion_fq) *
    BaseEngineController_LS_DWork.s578_UnitDelay_DSTATE + rtb_Merge_f *
    rtb_DataTypeConversion_fq;

  /* If: '<S577>/If' incorporates:
   *  Inport: '<S579>/In1'
   *  Inport: '<S580>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S577>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S577>/override_enable'
   */
  if ((SysVolt_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S577>/NewValue' incorporates:
     *  ActionPort: '<S579>/Action Port'
     */
    BaseEngineController_LS_B.s577_Merge = (SysVolt_new_DataStore());

    /* End of Outputs for SubSystem: '<S577>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S577>/OldValue' incorporates:
     *  ActionPort: '<S580>/Action Port'
     */
    BaseEngineController_LS_B.s577_Merge = rtb_Sum1_nl;

    /* End of Outputs for SubSystem: '<S577>/OldValue' */
  }

  /* End of If: '<S577>/If' */

  /* S-Function Block: <S401>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (SysVolt09In_DataStore()) = BaseEngineController_LS_B.s577_Merge;
    (SysVolt09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s577_Merge, (SysVolt09IdxArr_DataStore()), 9,
       (SysVolt09Idx_DataStore()));
    BaseEngineController_LS_B.s401_motohawk_prelookup = (SysVolt09Idx_DataStore());
  }

  /* S-Function Block: <S539>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s539_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_fq = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S539>/Product' incorporates:
   *  MinMax: '<S539>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S539>/motohawk_calibration'
   */
  rtb_DataTypeConversion_fq /= (rtb_DataTypeConversion_fq >=
    (MAPFilterConst_DataStore())) || rtIsNaN((MAPFilterConst_DataStore())) ?
    rtb_DataTypeConversion_fq : (MAPFilterConst_DataStore());

  /* Logic: '<S504>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S504>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S504>/motohawk_fault_status4'
   */
  rtb_RelationalOperator6_h0 = (IsFaultActive(83) || IsFaultActive(84));

  /* Logic: '<S504>/Logical Operator6' */
  rtb_LogicalOperator6_b = !rtb_RelationalOperator6_h0;

  /* Logic: '<S504>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S504>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S504>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_a = (IsFaultSuspected(83) || IsFaultSuspected(84));

  /* S-Function (motohawk_sfun_trigger): '<S506>/motohawk_trigger5' */
  /* Enable for Trigger_FGND_MID_TDC_EVENT_8054p0001 */
  if (BaseEngineController_LS_DWork.s506_motohawk_trigger5_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s506_motohawk_trigger5_DWORK1 = 1;
  }

  /* Product: '<S504>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S504>/motohawk_calibration4'
   */
  rtb_DataTypeConversion1_e = BaseEngineController_LS_B.s506_Merge *
    (MAPGain_DataStore());

  /* Sum: '<S504>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S504>/motohawk_calibration5'
   */
  BaseEngineController_LS_B.s504_Sum1 = rtb_DataTypeConversion1_e +
    (MAPOfst_DataStore());

  /* UnitDelay: '<S504>/Unit Delay1' */
  rtb_UnitDelay1_a = BaseEngineController_LS_DWork.s504_UnitDelay1_DSTATE;

  /* If: '<S504>/If' incorporates:
   *  Logic: '<S504>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_b && rtb_LogicalOperator1_a) {
    /* Outputs for IfAction SubSystem: '<S504>/If Action Subsystem' incorporates:
     *  ActionPort: '<S540>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay1_a, &rtb_Merge_in);

    /* End of Outputs for SubSystem: '<S504>/If Action Subsystem' */
  } else if (rtb_RelationalOperator6_h0) {
    /* Outputs for IfAction SubSystem: '<S504>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S541>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((MAPDfltValue_DataStore()),
      &rtb_Merge_in);

    /* End of Outputs for SubSystem: '<S504>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S504>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S542>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      (BaseEngineController_LS_B.s504_Sum1, &rtb_Merge_in);

    /* End of Outputs for SubSystem: '<S504>/If Action Subsystem2' */
  }

  /* End of If: '<S504>/If' */

  /* Sum: '<S544>/Sum1' incorporates:
   *  Constant: '<S544>/Constant'
   *  Product: '<S544>/Product'
   *  Product: '<S544>/Product1'
   *  Sum: '<S544>/Sum'
   *  UnitDelay: '<S544>/Unit Delay'
   */
  rtb_Sum1_d4 = (1.0 - rtb_DataTypeConversion_fq) *
    BaseEngineController_LS_DWork.s544_UnitDelay_DSTATE + rtb_Merge_in *
    rtb_DataTypeConversion_fq;

  /* If: '<S543>/If' incorporates:
   *  Inport: '<S545>/In1'
   *  Inport: '<S546>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S543>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S543>/override_enable'
   */
  if ((MAP_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S543>/NewValue' incorporates:
     *  ActionPort: '<S545>/Action Port'
     */
    BaseEngineController_LS_B.s543_Merge = (MAP_new_DataStore());

    /* End of Outputs for SubSystem: '<S543>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S543>/OldValue' incorporates:
     *  ActionPort: '<S546>/Action Port'
     */
    BaseEngineController_LS_B.s543_Merge = rtb_Sum1_d4;

    /* End of Outputs for SubSystem: '<S543>/OldValue' */
  }

  /* End of If: '<S543>/If' */

  /* S-Function Block: <S398>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (MAP05In_DataStore()) = BaseEngineController_LS_B.s543_Merge;
    (MAP05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s543_Merge, (MAP05IdxArr_DataStore()), 5,
       (MAP05Idx_DataStore()));
    rtb_motohawk_prelookup_m = (MAP05Idx_DataStore());
  }

  /* S-Function Block: <S398>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (MAP09In_DataStore()) = BaseEngineController_LS_B.s543_Merge;
    (MAP09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s543_Merge, (MAP09IdxArr_DataStore()), 9,
       (MAP09Idx_DataStore()));
    BaseEngineController_LS_B.s398_motohawk_prelookup1 = (MAP09Idx_DataStore());
  }

  /* S-Function Block: <S398>/motohawk_prelookup5 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (MAP17In_DataStore()) = BaseEngineController_LS_B.s543_Merge;
    (MAP17Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s543_Merge, (MAP17IdxArr_DataStore()), 17,
       (MAP17Idx_DataStore()));
    BaseEngineController_LS_B.s398_Indexes = (MAP17Idx_DataStore());
  }

  /* S-Function Block: <S403>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (VSPD09In_DataStore()) = BaseEngineController_LS_B.s477_Merge;
    (VSPD09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s477_Merge, (VSPD09IdxArr_DataStore()), 9,
       (VSPD09Idx_DataStore()));
    rtb_motohawk_prelookup_i = (VSPD09Idx_DataStore());
  }

  /* S-Function Block: <S395>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (CAT05In_DataStore()) = BaseEngineController_LS_B.s663_Merge;
    (CAT05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s663_Merge, (CAT05IdxArr_DataStore()), 5,
       (CAT05Idx_DataStore()));
    BaseEngineController_LS_B.s395_motohawk_prelookup = (CAT05Idx_DataStore());
  }

  /* S-Function Block: <S399>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (OXY05In_DataStore()) = BaseEngineController_LS_B.s522_Merge;
    (OXY05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s522_Merge, (OXY05IdxArr_DataStore()), 5,
       (OXY05Idx_DataStore()));
    rtb_motohawk_prelookup_e1 = (OXY05Idx_DataStore());
  }

  /* S-Function (motohawk_sfun_data_read): '<S366>/motohawk_data_read1' */
  BaseEngineController_LS_B.s366_motohawk_data_read1 = EngineState_DataStore();

  /* S-Function Block: <S366>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s366_motohawk_delta_time_DWORK1, NULL);
    BaseEngineController_LS_B.s366_motohawk_delta_time = ((real_T) delta) *
      0.000001;
  }

  /* Stateflow: '<S366>/Baro Stall State Delay' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S366>/motohawk_calibration'
   */

  /* Gateway: Foreground/Control/VirtualSensors/AirCalcs/Baro Stall State Delay */
  /* During: Foreground/Control/VirtualSensors/AirCalcs/Baro Stall State Delay */
  switch (BaseEngineController_LS_DWork.s371_is_c19_BaseEngineController_LS) {
   case BaseEngineController_LS_IN_CrankRun:
    /* During 'CrankRun': '<S371>:2' */
    if (BaseEngineController_LS_B.s366_motohawk_data_read1 == 1) {
      /* Transition: '<S371>:6' */
      BaseEngineController_LS_DWork.s371_is_c19_BaseEngineController_LS =
        BaseEngineController_LS_IN_StallDelay;

      /* Entry 'StallDelay': '<S371>:3' */
      BaseEngineController_LS_B.s371_Enable = FALSE;
      BaseEngineController_LS_B.s371_Timer = 0.0;
      BaseEngineController_LS_DWork.s371_TOld = 0.0;
    }
    break;

   case BaseEngineController_LS_IN_Stall:
    /* During 'Stall': '<S371>:1' */
    if (BaseEngineController_LS_B.s366_motohawk_data_read1 > 1) {
      /* Transition: '<S371>:5' */
      BaseEngineController_LS_DWork.s371_is_c19_BaseEngineController_LS =
        BaseEngineController_LS_IN_CrankRun;

      /* Entry 'CrankRun': '<S371>:2' */
      BaseEngineController_LS_B.s371_Enable = FALSE;
    }
    break;

   case BaseEngineController_LS_IN_StallDelay:
    /* During 'StallDelay': '<S371>:3' */
    if (BaseEngineController_LS_B.s366_motohawk_data_read1 > 1) {
      /* Transition: '<S371>:8' */
      BaseEngineController_LS_DWork.s371_is_c19_BaseEngineController_LS =
        BaseEngineController_LS_IN_CrankRun;

      /* Entry 'CrankRun': '<S371>:2' */
      BaseEngineController_LS_B.s371_Enable = FALSE;
    } else if (((BaseEngineController_LS_B.s366_motohawk_data_read1 == 1) &
                (BaseEngineController_LS_B.s371_Timer >
                 (BaroRunStallDelay_DataStore()))) != 0) {
      /* Transition: '<S371>:7' */
      BaseEngineController_LS_DWork.s371_is_c19_BaseEngineController_LS =
        BaseEngineController_LS_IN_Stall;

      /* Entry 'Stall': '<S371>:1' */
      BaseEngineController_LS_B.s371_Enable = TRUE;
    } else {
      BaseEngineController_LS_B.s371_Timer =
        BaseEngineController_LS_DWork.s371_TOld +
        BaseEngineController_LS_B.s366_motohawk_delta_time;
      BaseEngineController_LS_DWork.s371_TOld =
        BaseEngineController_LS_B.s371_Timer;
    }
    break;

   default:
    /* Transition: '<S371>:4' */
    BaseEngineController_LS_DWork.s371_is_c19_BaseEngineController_LS =
      BaseEngineController_LS_IN_Stall;

    /* Entry 'Stall': '<S371>:1' */
    BaseEngineController_LS_B.s371_Enable = TRUE;
    break;
  }

  /* End of Stateflow: '<S366>/Baro Stall State Delay' */
  /* RelationalOperator: '<S373>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S373>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S373>/motohawk_data_read'
   */
  rtb_LogicalOperator6_b = (TPSFinal_DataStore() >= (BaroLearn_TPSPos_DataStore()));

  /* Logic: '<S505>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S505>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S505>/motohawk_fault_status4'
   */
  rtb_RelationalOperator6_h0 = (IsFaultActive(85) || IsFaultActive(86));

  /* Logic: '<S505>/Logical Operator6' */
  rtb_LogicalOperator1_a = !rtb_RelationalOperator6_h0;

  /* Logic: '<S505>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S505>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S505>/motohawk_fault_status3'
   */
  rtb_RelOp_pu = (IsFaultSuspected(85) || IsFaultSuspected(86));

  /* S-Function Block: <S445>/motohawk_ain_read1 Resource: MAPSensorPin */
  {
    extern NativeError_S MAPSensorPin_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    MAPSensorPin_AnalogInput_Get
      (&BaseEngineController_LS_B.s445_motohawk_ain_read1, NULL);
  }

  /* DataTypeConversion: '<S505>/Data Type Conversion' */
  rtb_DataTypeConversion_fq = (real_T)
    BaseEngineController_LS_B.s445_motohawk_ain_read1;

  /* Product: '<S505>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S505>/motohawk_calibration4'
   */
  rtb_DataTypeConversion1_e = rtb_DataTypeConversion_fq * (MAPTimeGain_DataStore
    ());

  /* Sum: '<S505>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S505>/motohawk_calibration5'
   */
  BaseEngineController_LS_B.s505_Sum1 = rtb_DataTypeConversion1_e +
    (MAPTimeOfst_DataStore());

  /* UnitDelay: '<S505>/Unit Delay1' */
  rtb_UnitDelay1_n = BaseEngineController_LS_DWork.s505_UnitDelay1_DSTATE;

  /* If: '<S505>/If' incorporates:
   *  Logic: '<S505>/Logical Operator5'
   */
  if (rtb_LogicalOperator1_a && rtb_RelOp_pu) {
    /* Outputs for IfAction SubSystem: '<S505>/If Action Subsystem' incorporates:
     *  ActionPort: '<S548>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay1_n, &rtb_Merge_jq);

    /* End of Outputs for SubSystem: '<S505>/If Action Subsystem' */
  } else if (rtb_RelationalOperator6_h0) {
    /* Outputs for IfAction SubSystem: '<S505>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S549>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((MAPTimeDfltValue_DataStore()),
      &rtb_Merge_jq);

    /* End of Outputs for SubSystem: '<S505>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S505>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S550>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      (BaseEngineController_LS_B.s505_Sum1, &rtb_Merge_jq);

    /* End of Outputs for SubSystem: '<S505>/If Action Subsystem2' */
  }

  /* End of If: '<S505>/If' */

  /* Logic: '<S373>/Logical Operator' incorporates:
   *  Constant: '<S377>/Constant'
   *  RelationalOperator: '<S373>/Relational Operator1'
   *  RelationalOperator: '<S377>/Compare'
   *  S-Function (motohawk_sfun_calibration): '<S373>/motohawk_calibration2'
   */
  rtb_RelationalOperator6_h0 = (rtb_LogicalOperator6_b && (rtb_Merge_jq >=
    (BaroLearn_MAP_DataStore())) &&
    (BaseEngineController_LS_B.s366_motohawk_data_read1 > 1));

  /* S-Function Block: <S378>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s378_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_o = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S378>/Switch' incorporates:
   *  Constant: '<S378>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S378>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S378>/motohawk_delta_time'
   *  Sum: '<S378>/Sum'
   */
  if (rtb_RelationalOperator6_h0) {
    rtb_Switch_f = rtb_motohawk_delta_time_o + BaroLearnTmr_DataStore();
  } else {
    rtb_Switch_f = 0.0;
  }

  /* End of Switch: '<S378>/Switch' */
  /* Product: '<S373>/Product' incorporates:
   *  RelationalOperator: '<S373>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S373>/motohawk_calibration'
   */
  rtb_motohawk_data_read1_p = (uint16_T)(rtb_RelationalOperator6_h0 ?
    rtb_Switch_f >= (BaroLearn_Tm_DataStore()) : 0);

  /* DataTypeConversion: '<S373>/Data Type Conversion' */
  rtb_RelationalOperator6_h0 = (rtb_motohawk_data_read1_p != 0);

  /* Outputs for Enabled SubSystem: '<S366>/Capture Signal At Startup' incorporates:
   *  EnablePort: '<S372>/Enable'
   */
  /* Logic: '<S366>/Logical Operator' */
  if (BaseEngineController_LS_B.s371_Enable || rtb_RelationalOperator6_h0) {
    if (!BaseEngineController_LS_DWork.s366_CaptureSignalAtStartup_MODE) {
      /* InitializeConditions for UnitDelay: '<S372>/Unit Delay' */
      BaseEngineController_LS_DWork.s372_UnitDelay_DSTATE = 0;
      BaseEngineController_LS_DWork.s366_CaptureSignalAtStartup_MODE = TRUE;
    }

    /* Sum: '<S372>/Add' incorporates:
     *  Constant: '<S372>/TwoSampleBuffer ToIgnore'
     *  S-Function (motohawk_sfun_calibration): '<S372>/motohawk_calibration'
     */
    rtb_Add_k = (int8_T)(((int8_T)(BARO_Count_DataStore())) + 2);

    /* Sum: '<S372>/Sum' incorporates:
     *  Constant: '<S372>/Constant'
     *  UnitDelay: '<S372>/Unit Delay'
     */
    rtb_Sum_l3 = (int8_T)(BaseEngineController_LS_DWork.s372_UnitDelay_DSTATE +
                          1);

    /* RelationalOperator: '<S372>/Relational Operator' */
    rtb_LogicalOperator6_b = (rtb_Sum_l3 <= rtb_Add_k);

    /* Switch: '<S372>/Switch' */
    if (rtb_LogicalOperator6_b) {
      rtb_Add_k = rtb_Sum_l3;
    }

    /* End of Switch: '<S372>/Switch' */

    /* Sum: '<S372>/Add1' incorporates:
     *  Constant: '<S372>/TwoSampleBuffer ToIgnore'
     */
    rtb_Add1_e = (int8_T)(rtb_Add_k - 2);

    /* Logic: '<S372>/Logical Operator' incorporates:
     *  Constant: '<S372>/TwoSampleBuffer ToIgnore'
     *  RelationalOperator: '<S372>/Relational Operator1'
     */
    rtb_LogicalOperator_kz = (rtb_LogicalOperator6_b && (rtb_Sum_l3 > 2));

    /* Outputs for Enabled SubSystem: '<S372>/Collect Average' */
    BaseEngineController_LS_CollectAverage(rtb_LogicalOperator_kz, rtb_Add1_e,
      rtb_Merge_jq, &BaseEngineController_LS_B.s372_CollectAverage,
      &BaseEngineController_LS_DWork.s372_CollectAverage);

    /* End of Outputs for SubSystem: '<S372>/Collect Average' */

    /* Update for UnitDelay: '<S372>/Unit Delay' */
    BaseEngineController_LS_DWork.s372_UnitDelay_DSTATE = rtb_Add_k;
  } else {
    if (BaseEngineController_LS_DWork.s366_CaptureSignalAtStartup_MODE) {
      /* Disable for Enabled SubSystem: '<S372>/Collect Average' */
      BaseEngineController_LS_CollectAverage_Disable
        (&BaseEngineController_LS_DWork.s372_CollectAverage);

      /* End of Disable for SubSystem: '<S372>/Collect Average' */
      BaseEngineController_LS_DWork.s366_CaptureSignalAtStartup_MODE = FALSE;
    }
  }

  /* End of Logic: '<S366>/Logical Operator' */
  /* End of Outputs for SubSystem: '<S366>/Capture Signal At Startup' */

  /* If: '<S375>/If' incorporates:
   *  Inport: '<S383>/In1'
   *  Inport: '<S384>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S375>/override_enable'
   *  UnitDelay: '<S375>/Unit Delay'
   */
  if ((BARO_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S375>/NewValue' incorporates:
     *  ActionPort: '<S383>/Action Port'
     */
    rtb_Merge_b3 = BaseEngineController_LS_DWork.s375_UnitDelay_DSTATE;

    /* End of Outputs for SubSystem: '<S375>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S375>/OldValue' incorporates:
     *  ActionPort: '<S384>/Action Port'
     */
    rtb_Merge_b3 = BaseEngineController_LS_B.s372_CollectAverage.s376_Product;

    /* End of Outputs for SubSystem: '<S375>/OldValue' */
  }

  /* End of If: '<S375>/If' */

  /* Sum: '<S375>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S375>/offset'
   */
  BaseEngineController_LS_B.s375_Sum = rtb_Merge_b3 + (BARO_offset_DataStore());

  /* S-Function Block: <S374>/motohawk_prelookup2 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (VEMapIn_DataStore()) = BaseEngineController_LS_B.s543_Merge;
    (VEMapIdx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s543_Merge, (VEMapIdxArr_DataStore()), 17,
       (VEMapIdx_DataStore()));
    rtb_motohawk_prelookup2_c = (VEMapIdx_DataStore());
  }

  /* S-Function Block: <S374>/motohawk_interpolation_2d */
  {
    extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
      real_T *map_data, uint32_T row_sz, uint32_T col_sz);
    rtb_motohawk_interpolation_2d = TableInterpolation2D_real_T
      (rtb_motohawk_prelookup2_c, BaseEngineController_LS_B.s400_Indexes,
       (real_T *) ((VolEffMap_DataStore())), 17, 17);
    (VolEff_DataStore()) = rtb_motohawk_interpolation_2d;
  }

  /* S-Function Block: <S374>/motohawk_interpolation_2d2 */
  {
    extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
      real_T *map_data, uint32_T row_sz, uint32_T col_sz);
    BaseEngineController_LS_B.s374_motohawk_interpolation_2d2 =
      TableInterpolation2D_real_T(rtb_motohawk_prelookup2_c,
      BaseEngineController_LS_B.s400_Indexes, (real_T *)
      ((VolEffAdaptMap_DataStore())), 17, 17);
    (VolEffAdapt_DataStore()) =
      BaseEngineController_LS_B.s374_motohawk_interpolation_2d2;
  }

  /* Sum: '<S374>/Sum' incorporates:
   *  S-Function (motohawk_sfun_interpolation_2d): '<S374>/motohawk_interpolation_2d'
   *  S-Function (motohawk_sfun_prelookup): '<S374>/motohawk_prelookup2'
   */
  BaseEngineController_LS_B.s374_Sum = rtb_motohawk_interpolation_2d +
    BaseEngineController_LS_B.s374_motohawk_interpolation_2d2;

  /* Saturate: '<S366>/Saturation1' */
  rtb_Saturation1_c = BaseEngineController_LS_B.s375_Sum >= 1.0 ?
    BaseEngineController_LS_B.s375_Sum : 1.0;

  /* S-Function Block: <S374>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (BARO09Idx_DataStore()) = TablePrelookup_real_T(rtb_Saturation1_c,
      (BARO09IdxArr_DataStore()), 9, (BARO09Idx_DataStore()));
    rtb_motohawk_prelookup1_c = (BARO09Idx_DataStore());
  }

  /* S-Function Block: <S374>/motohawk_interpolation_1d1 */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_motohawk_interpolation_1d1_j = TableInterpolation1D_real_T
      (rtb_motohawk_prelookup1_c, (real_T *) ((VEBaroCorrTbl_DataStore())), 9);
    (VEBaroCorr_DataStore()) = rtb_motohawk_interpolation_1d1_j;
  }

  /* S-Function Block: <S397>/motohawk_prelookup2 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (IAT17In_DataStore()) = BaseEngineController_LS_B.s690_Merge;
    (IAT17Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s690_Merge, (IAT17IdxArr_DataStore()), 17,
       (IAT17Idx_DataStore()));
    rtb_motohawk_prelookup2_b = (IAT17Idx_DataStore());
  }

  /* S-Function Block: <S374>/motohawk_interpolation_2d1 */
  {
    extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
      real_T *map_data, uint32_T row_sz, uint32_T col_sz);
    rtb_motohawk_interpolation_2d1_n = TableInterpolation2D_real_T
      (rtb_motohawk_prelookup2_b, rtb_motohawk_prelookup1_h, (real_T *)
       ((VETempCorrMap_DataStore())), 17, 9);
    (VETempCorr_DataStore()) = rtb_motohawk_interpolation_2d1_n;
  }

  /* Product: '<S374>/Nominal Air Flow Rate' incorporates:
   *  Constant: '<S374>/Gas Const [J//kg-K]'
   *  Constant: '<S374>/Units Equivalency Factor'
   *  DataTypeConversion: '<S374>/Data Type Conversion'
   *  Fcn: '<S380>/C to K'
   *  S-Function (motohawk_sfun_data_read): '<S374>/Cylinder Swept Volume [cm3]'
   *  S-Function (motohawk_sfun_data_read): '<S374>/Number of Combustion Events Per Revolution'
   *  S-Function (motohawk_sfun_interpolation_1d): '<S374>/motohawk_interpolation_1d1'
   *  S-Function (motohawk_sfun_interpolation_2d): '<S374>/motohawk_interpolation_2d1'
   *  S-Function (motohawk_sfun_prelookup): '<S374>/motohawk_prelookup1'
   *  S-Function (motohawk_sfun_prelookup): '<S396>/motohawk_prelookup1'
   *  S-Function (motohawk_sfun_prelookup): '<S397>/motohawk_prelookup2'
   *  Saturate: '<S366>/Saturation1'
   */
  BaseEngineController_LS_B.s374_NominalAirFlowRate =
    BaseEngineController_LS_B.s500_Sum1 * BaseEngineController_LS_B.s543_Merge *
    rtb_motohawk_interpolation_1d1_j * rtb_motohawk_interpolation_2d1_n *
    CylSweptVol_DataStore() * (real_T)((uint8_T)CombEventsPerRev_DataStore()) /
    (BaseEngineController_LS_B.s690_Merge + 273.2) / 60.0 / 287.0;

  /* Product: '<S374>/Model Air Mass Flow Rate' */
  BaseEngineController_LS_B.s374_ModelAirMassFlowRate =
    BaseEngineController_LS_B.s374_Sum *
    BaseEngineController_LS_B.s374_NominalAirFlowRate;

  /* S-Function Block: <S464>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s464_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_m1 = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S464>/Product' incorporates:
   *  MinMax: '<S464>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S464>/motohawk_calibration'
   */
  rtb_Switch_m1 /= (rtb_Switch_m1 >= (MAFFiltConst_DataStore())) || rtIsNaN
    ((MAFFiltConst_DataStore())) ? rtb_Switch_m1 : (MAFFiltConst_DataStore());

  /* Logic: '<S451>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S451>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S451>/motohawk_fault_status4'
   */
  rtb_RelationalOperator6_h0 = (IsFaultActive(81) || IsFaultActive(82));

  /* Logic: '<S451>/Logical Operator6' */
  rtb_LogicalOperator6_b = !rtb_RelationalOperator6_h0;

  /* Logic: '<S451>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S451>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S451>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_a = (IsFaultSuspected(81) || IsFaultSuspected(82));

  /* S-Function Block: <S443>/motohawk_frequency_in2 Frequency Input Get: MAF_Pin */
  {
    extern NativeError_S MAF_Pin_FrequencyInput_Get(uint32_T *frequency, int16_T
      *duty_cycle);
    MAF_Pin_FrequencyInput_Get(&rtb_DataTypeConversion6,
      &rtb_DataTypeConversion2_pj);
  }

  /* DataTypeConversion: '<S443>/Data Type Conversion' */
  rtb_Switch_bn = (real_T)rtb_DataTypeConversion6;

  /* Gain: '<S443>/Gain' */
  BaseEngineController_LS_B.s443_Gain = 0.01 * rtb_Switch_bn;

  /* S-Function Block: <S469>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (MAFIdx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s443_Gain, (MAFIdxArr_DataStore()), 13,
       (MAFIdx_DataStore()));
    rtb_motohawk_prelookup_k = (MAFIdx_DataStore());
  }

  /* S-Function Block: <S469>/motohawk_interpolation_1d */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    BaseEngineController_LS_B.s469_motohawk_interpolation_1d =
      TableInterpolation1D_real_T(rtb_motohawk_prelookup_k, (real_T *)
      ((MAFTbl_DataStore())), 13);
  }

  /* UnitDelay: '<S451>/Unit Delay' */
  rtb_UnitDelay_nr = BaseEngineController_LS_DWork.s451_UnitDelay_DSTATE;

  /* If: '<S451>/If' incorporates:
   *  Logic: '<S451>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_b && rtb_LogicalOperator1_a) {
    /* Outputs for IfAction SubSystem: '<S451>/If Action Subsystem' incorporates:
     *  ActionPort: '<S465>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay_nr, &rtb_Merge_dv);

    /* End of Outputs for SubSystem: '<S451>/If Action Subsystem' */
  } else if (rtb_RelationalOperator6_h0) {
    /* Outputs for IfAction SubSystem: '<S451>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S466>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((MAFDefault_DataStore()),
      &rtb_Merge_dv);

    /* End of Outputs for SubSystem: '<S451>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S451>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S467>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      (BaseEngineController_LS_B.s469_motohawk_interpolation_1d, &rtb_Merge_dv);

    /* End of Outputs for SubSystem: '<S451>/If Action Subsystem2' */
  }

  /* End of If: '<S451>/If' */

  /* Sum: '<S470>/Sum1' incorporates:
   *  Constant: '<S470>/Constant'
   *  Product: '<S470>/Product'
   *  Product: '<S470>/Product1'
   *  Sum: '<S470>/Sum'
   *  UnitDelay: '<S470>/Unit Delay'
   */
  rtb_Sum1_fm = (1.0 - rtb_Switch_m1) *
    BaseEngineController_LS_DWork.s470_UnitDelay_DSTATE + rtb_Merge_dv *
    rtb_Switch_m1;

  /* If: '<S468>/If' incorporates:
   *  Inport: '<S471>/In1'
   *  Inport: '<S472>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S468>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S468>/override_enable'
   */
  if ((MAF_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S468>/NewValue' incorporates:
     *  ActionPort: '<S471>/Action Port'
     */
    BaseEngineController_LS_B.s468_Merge = (MAF_new_DataStore());

    /* End of Outputs for SubSystem: '<S468>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S468>/OldValue' incorporates:
     *  ActionPort: '<S472>/Action Port'
     */
    BaseEngineController_LS_B.s468_Merge = rtb_Sum1_fm;

    /* End of Outputs for SubSystem: '<S468>/OldValue' */
  }

  /* End of If: '<S468>/If' */

  /* MultiPortSwitch: '<S374>/Multiport Switch' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S374>/motohawk_calibration1'
   */
  if (((uint8_T)(MAF_Source_DataStore())) == 0) {
    BaseEngineController_LS_B.s374_MultiportSwitch =
      BaseEngineController_LS_B.s374_ModelAirMassFlowRate;
  } else {
    BaseEngineController_LS_B.s374_MultiportSwitch =
      BaseEngineController_LS_B.s468_Merge;
  }

  /* End of MultiPortSwitch: '<S374>/Multiport Switch' */
  /* S-Function Block: <S386>/motohawk_delta_time */
  rtb_Switch_bn = 0.005;

  /* UnitDelay: '<S386>/Unit Delay2' */
  rtb_DataTypeConversion1_e =
    BaseEngineController_LS_DWork.s386_UnitDelay2_DSTATE;

  /* RelationalOperator: '<S386>/Relational Operator4' incorporates:
   *  UnitDelay: '<S386>/Unit Delay2'
   */
  BaseEngineController_LS_B.s386_RelationalOperator4 =
    ((BaseEngineController_LS_DWork.s386_UnitDelay2_DSTATE <
      BaseEngineController_LS_B.s500_Sum1));

  /* Outputs for Enabled SubSystem: '<S386>/IncreasingFilter' incorporates:
   *  EnablePort: '<S390>/Enable'
   */
  if (BaseEngineController_LS_B.s386_RelationalOperator4) {
    /* S-Function (motohawk_sfun_calibration): '<S390>/motohawk_calibration1' */
    BaseEngineController_LS_B.s386_Merge = (SSRPMIncFiltC_DataStore());
  }

  /* End of Outputs for SubSystem: '<S386>/IncreasingFilter' */

  /* Outputs for Enabled SubSystem: '<S386>/DecreasingFilter' incorporates:
   *  EnablePort: '<S388>/Enable'
   */
  /* RelationalOperator: '<S386>/Relational Operator3' */
  if (rtb_DataTypeConversion1_e > BaseEngineController_LS_B.s500_Sum1) {
    /* S-Function (motohawk_sfun_calibration): '<S388>/motohawk_calibration2' */
    BaseEngineController_LS_B.s386_Merge = (SSRPMDecFiltC_DataStore());
  }

  /* End of RelationalOperator: '<S386>/Relational Operator3' */
  /* End of Outputs for SubSystem: '<S386>/DecreasingFilter' */

  /* Product: '<S386>/Product' incorporates:
   *  MinMax: '<S386>/MinMax'
   */
  rtb_Switch_bn /= (rtb_Switch_bn >= BaseEngineController_LS_B.s386_Merge) ||
    rtIsNaN(BaseEngineController_LS_B.s386_Merge) ? rtb_Switch_bn :
    BaseEngineController_LS_B.s386_Merge;

  /* Sum: '<S389>/Sum1' incorporates:
   *  Constant: '<S389>/Constant'
   *  Product: '<S389>/Product'
   *  Product: '<S389>/Product1'
   *  Sum: '<S389>/Sum'
   *  UnitDelay: '<S389>/Unit Delay'
   */
  BaseEngineController_LS_B.s389_Sum1 = (1.0 - rtb_Switch_bn) *
    BaseEngineController_LS_DWork.s389_UnitDelay_DSTATE +
    BaseEngineController_LS_B.s500_Sum1 * rtb_Switch_bn;

  /* Sum: '<S385>/Sum1' */
  rtb_Switch_bn = BaseEngineController_LS_B.s500_Sum1 -
    BaseEngineController_LS_B.s389_Sum1;

  /* Abs: '<S385>/Abs1' */
  rtb_Switch_bn = fabs(rtb_Switch_bn);

  /* RelationalOperator: '<S385>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S385>/Steady-state RPM Tolerance [RPM]'
   */
  rtb_LogicalOperator6_b = (rtb_Switch_bn <= (SSRPMTol_DataStore()));

  /* RelationalOperator: '<S385>/Relational Operator2' incorporates:
   *  Constant: '<S385>/Constant'
   */
  rtb_LogicalOperator1_a = (BaseEngineController_LS_B.s500_Sum1 > 0.0);

  /* S-Function Block: <S387>/motohawk_delta_time */
  rtb_Switch_bn = 0.005;

  /* UnitDelay: '<S387>/Unit Delay2' */
  rtb_DataTypeConversion1_e =
    BaseEngineController_LS_DWork.s387_UnitDelay2_DSTATE;

  /* RelationalOperator: '<S387>/Relational Operator4' incorporates:
   *  UnitDelay: '<S387>/Unit Delay2'
   */
  BaseEngineController_LS_B.s387_RelationalOperator4 =
    ((BaseEngineController_LS_DWork.s387_UnitDelay2_DSTATE <
      BaseEngineController_LS_B.s543_Merge));

  /* Outputs for Enabled SubSystem: '<S387>/IncreasingFilter' incorporates:
   *  EnablePort: '<S393>/Enable'
   */
  if (BaseEngineController_LS_B.s387_RelationalOperator4) {
    /* S-Function (motohawk_sfun_calibration): '<S393>/motohawk_calibration1' */
    BaseEngineController_LS_B.s387_Merge = (SSLoadIncFiltC_DataStore());
  }

  /* End of Outputs for SubSystem: '<S387>/IncreasingFilter' */

  /* Outputs for Enabled SubSystem: '<S387>/DecreasingFilter' incorporates:
   *  EnablePort: '<S391>/Enable'
   */
  /* RelationalOperator: '<S387>/Relational Operator3' */
  if (rtb_DataTypeConversion1_e > BaseEngineController_LS_B.s543_Merge) {
    /* S-Function (motohawk_sfun_calibration): '<S391>/motohawk_calibration2' */
    BaseEngineController_LS_B.s387_Merge = (SSLoadDecFiltC_DataStore());
  }

  /* End of RelationalOperator: '<S387>/Relational Operator3' */
  /* End of Outputs for SubSystem: '<S387>/DecreasingFilter' */

  /* Product: '<S387>/Product' incorporates:
   *  MinMax: '<S387>/MinMax'
   */
  rtb_Switch_bn /= (rtb_Switch_bn >= BaseEngineController_LS_B.s387_Merge) ||
    rtIsNaN(BaseEngineController_LS_B.s387_Merge) ? rtb_Switch_bn :
    BaseEngineController_LS_B.s387_Merge;

  /* Sum: '<S392>/Sum1' incorporates:
   *  Constant: '<S392>/Constant'
   *  Product: '<S392>/Product'
   *  Product: '<S392>/Product1'
   *  Sum: '<S392>/Sum'
   *  UnitDelay: '<S392>/Unit Delay'
   */
  BaseEngineController_LS_B.s392_Sum1 = (1.0 - rtb_Switch_bn) *
    BaseEngineController_LS_DWork.s392_UnitDelay_DSTATE +
    BaseEngineController_LS_B.s543_Merge * rtb_Switch_bn;

  /* Sum: '<S385>/Sum' */
  rtb_Switch_bn = BaseEngineController_LS_B.s543_Merge -
    BaseEngineController_LS_B.s392_Sum1;

  /* Abs: '<S385>/Abs' */
  rtb_Switch_bn = fabs(rtb_Switch_bn);

  /* Logic: '<S385>/Logical Operator' incorporates:
   *  RelationalOperator: '<S385>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S385>/Steady-state Torque Tolerance [N.m]'
   */
  BaseEngineController_LS_B.s385_LogicalOperator = ((rtb_LogicalOperator6_b &&
    rtb_LogicalOperator1_a && (rtb_Switch_bn <= (SSLoadTol_DataStore()))));

  /* S-Function Block: <S440>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (MAFPort05In_DataStore()) = BaseEngineController_LS_B.s374_MultiportSwitch;
    (MAFPort05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s374_MultiportSwitch,
       (MAFPort05IdxArr_DataStore()), 5, (MAFPort05Idx_DataStore()));
    rtb_motohawk_prelookup_o = (MAFPort05Idx_DataStore());
  }

  /* RelationalOperator: '<S414>/RelOp' incorporates:
   *  Constant: '<S414>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S369>/motohawk_data_read'
   */
  rtb_LogicalOperator6_b = (((uint8_T)EngineState_DataStore()) == 1);

  /* Outputs for Enabled SubSystem: '<S369>/Capture ECT At Startup' incorporates:
   *  EnablePort: '<S406>/Enable'
   */
  if (rtb_LogicalOperator6_b) {
    if (!BaseEngineController_LS_DWork.s369_CaptureECTAtStartup_MODE) {
      /* InitializeConditions for UnitDelay: '<S406>/Unit Delay' */
      BaseEngineController_LS_DWork.s406_UnitDelay_DSTATE = 0;
      BaseEngineController_LS_DWork.s369_CaptureECTAtStartup_MODE = TRUE;
    }

    /* Sum: '<S406>/Sum' incorporates:
     *  Constant: '<S406>/Constant'
     *  UnitDelay: '<S406>/Unit Delay'
     */
    rtb_Add_k = (int8_T)(BaseEngineController_LS_DWork.s406_UnitDelay_DSTATE + 1);

    /* Sum: '<S406>/Add' incorporates:
     *  Constant: '<S406>/TwoSampleBuffer ToIgnore'
     *  S-Function (motohawk_sfun_calibration): '<S406>/motohawk_calibration'
     */
    rtb_Sum_l3 = (int8_T)(((int8_T)(ECT_KeyUp_Count_DataStore())) + 2);

    /* RelationalOperator: '<S406>/Relational Operator' */
    rtb_LogicalOperator1_a = (rtb_Add_k <= rtb_Sum_l3);

    /* Switch: '<S406>/Switch' */
    if (rtb_LogicalOperator1_a) {
      rtb_Sum_l3 = rtb_Add_k;
    }

    /* End of Switch: '<S406>/Switch' */

    /* Sum: '<S406>/Add1' incorporates:
     *  Constant: '<S406>/TwoSampleBuffer ToIgnore'
     */
    rtb_Add1_k3 = (int8_T)(rtb_Sum_l3 - 2);

    /* Logic: '<S406>/Logical Operator' incorporates:
     *  Constant: '<S406>/TwoSampleBuffer ToIgnore'
     *  RelationalOperator: '<S406>/Relational Operator1'
     */
    rtb_LogicalOperator_mr = (rtb_LogicalOperator1_a && (rtb_Add_k > 2));

    /* Outputs for Enabled SubSystem: '<S406>/Collect Average' */
    BaseEngineController_LS_CollectAverage(rtb_LogicalOperator_mr, rtb_Add1_k3,
      BaseEngineController_LS_B.s656_Merge,
      &BaseEngineController_LS_B.s406_CollectAverage,
      &BaseEngineController_LS_DWork.s406_CollectAverage);

    /* End of Outputs for SubSystem: '<S406>/Collect Average' */

    /* Update for UnitDelay: '<S406>/Unit Delay' */
    BaseEngineController_LS_DWork.s406_UnitDelay_DSTATE = rtb_Sum_l3;
  } else {
    if (BaseEngineController_LS_DWork.s369_CaptureECTAtStartup_MODE) {
      /* Disable for Enabled SubSystem: '<S406>/Collect Average' */
      BaseEngineController_LS_CollectAverage_Disable
        (&BaseEngineController_LS_DWork.s406_CollectAverage);

      /* End of Disable for SubSystem: '<S406>/Collect Average' */
      BaseEngineController_LS_DWork.s369_CaptureECTAtStartup_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S369>/Capture ECT At Startup' */
  /* S-Function Block: <S438>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (ECT_KeyUp09In_DataStore()) =
      BaseEngineController_LS_B.s406_CollectAverage.s376_Product;
    (ECT_KeyUp09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s406_CollectAverage.s376_Product,
       (ECT_KeyUp09IdxArr_DataStore()), 9, (ECT_KeyUp09Idx_DataStore()));
    rtb_motohawk_prelookup_j = (ECT_KeyUp09Idx_DataStore());
  }

  /* Sum: '<S427>/Sum2' incorporates:
   *  UnitDelay: '<S427>/Unit Delay'
   */
  rtb_DataTypeConversion1_e = BaseEngineController_LS_B.s500_Sum1 -
    BaseEngineController_LS_DWork.s427_UnitDelay_DSTATE;

  /* S-Function Block: <S427>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s427_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_ow = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S427>/Product' incorporates:
   *  S-Function (motohawk_sfun_delta_time): '<S427>/motohawk_delta_time'
   */
  rtb_DataTypeConversion1_e /= rtb_motohawk_delta_time_ow;

  /* S-Function Block: <S428>/motohawk_delta_time */
  rtb_Switch_bn = 0.005;

  /* Product: '<S428>/Product' incorporates:
   *  MinMax: '<S428>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S428>/motohawk_calibration'
   */
  rtb_Switch_bn /= (rtb_Switch_bn >= (EngineAccelFiltConst_DataStore())) ||
    rtIsNaN((EngineAccelFiltConst_DataStore())) ? rtb_Switch_bn :
    (EngineAccelFiltConst_DataStore());

  /* Sum: '<S429>/Sum1' incorporates:
   *  Constant: '<S429>/Constant'
   *  Product: '<S429>/Product'
   *  Product: '<S429>/Product1'
   *  Sum: '<S429>/Sum'
   *  UnitDelay: '<S429>/Unit Delay'
   */
  BaseEngineController_LS_B.s429_Sum1 = (1.0 - rtb_Switch_bn) *
    BaseEngineController_LS_DWork.s429_UnitDelay_DSTATE +
    rtb_DataTypeConversion1_e * rtb_Switch_bn;

  /* S-Function Block: <S370>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (RPMAccel17In_DataStore()) = BaseEngineController_LS_B.s429_Sum1;
    (RPMAccel17Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s429_Sum1, (RPMAccel17IdxArr_DataStore()), 17,
       (RPMAccel17Idx_DataStore()));
    BaseEngineController_LS_B.s370_RPMAccel17Idx = (RPMAccel17Idx_DataStore());
  }

  /* S-Function Block: <S370>/motohawk_prelookup2 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (TimeSinceRun09In_DataStore()) = BaseEngineController_LS_B.s435_Switch;
    (TimeSinceRun09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s435_Switch, (TimeSinceRun09IdxArr_DataStore()),
       9, (TimeSinceRun09Idx_DataStore()));
    rtb_TimeSinceRun09 = (TimeSinceRun09Idx_DataStore());
  }

  /* Outputs for Enabled SubSystem: '<S369>/Capture IAT At Startup' incorporates:
   *  EnablePort: '<S407>/Enable'
   */
  if (rtb_LogicalOperator6_b) {
    if (!BaseEngineController_LS_DWork.s369_CaptureIATAtStartup_MODE) {
      /* InitializeConditions for UnitDelay: '<S407>/Unit Delay' */
      BaseEngineController_LS_DWork.s407_UnitDelay_DSTATE = 0;
      BaseEngineController_LS_DWork.s369_CaptureIATAtStartup_MODE = TRUE;
    }

    /* Sum: '<S407>/Sum' incorporates:
     *  Constant: '<S407>/Constant'
     *  UnitDelay: '<S407>/Unit Delay'
     */
    rtb_Add_k = (int8_T)(BaseEngineController_LS_DWork.s407_UnitDelay_DSTATE + 1);

    /* Sum: '<S407>/Add' incorporates:
     *  Constant: '<S407>/TwoSampleBuffer ToIgnore'
     *  S-Function (motohawk_sfun_calibration): '<S407>/motohawk_calibration'
     */
    rtb_Sum_l3 = (int8_T)(((int8_T)(IAT_KeyUp_Count_DataStore())) + 2);

    /* RelationalOperator: '<S407>/Relational Operator' */
    rtb_LogicalOperator6_b = (rtb_Add_k <= rtb_Sum_l3);

    /* Switch: '<S407>/Switch' */
    if (rtb_LogicalOperator6_b) {
      rtb_Sum_l3 = rtb_Add_k;
    }

    /* End of Switch: '<S407>/Switch' */

    /* Sum: '<S407>/Add1' incorporates:
     *  Constant: '<S407>/TwoSampleBuffer ToIgnore'
     */
    rtb_Add1_k = (int8_T)(rtb_Sum_l3 - 2);

    /* Logic: '<S407>/Logical Operator' incorporates:
     *  Constant: '<S407>/TwoSampleBuffer ToIgnore'
     *  RelationalOperator: '<S407>/Relational Operator1'
     */
    rtb_LogicalOperator_g5 = (rtb_LogicalOperator6_b && (rtb_Add_k > 2));

    /* Outputs for Enabled SubSystem: '<S407>/Collect Average' */
    BaseEngineController_LS_CollectAverage(rtb_LogicalOperator_g5, rtb_Add1_k,
      BaseEngineController_LS_B.s658_Merge,
      &BaseEngineController_LS_B.s407_CollectAverage,
      &BaseEngineController_LS_DWork.s407_CollectAverage);

    /* End of Outputs for SubSystem: '<S407>/Collect Average' */

    /* Update for UnitDelay: '<S407>/Unit Delay' */
    BaseEngineController_LS_DWork.s407_UnitDelay_DSTATE = rtb_Sum_l3;
  } else {
    if (BaseEngineController_LS_DWork.s369_CaptureIATAtStartup_MODE) {
      /* Disable for Enabled SubSystem: '<S407>/Collect Average' */
      BaseEngineController_LS_CollectAverage_Disable
        (&BaseEngineController_LS_DWork.s407_CollectAverage);

      /* End of Disable for SubSystem: '<S407>/Collect Average' */
      BaseEngineController_LS_DWork.s369_CaptureIATAtStartup_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S369>/Capture IAT At Startup' */
  /* S-Function Block: <S439>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (IAT_KeyUp09In_DataStore()) =
      BaseEngineController_LS_B.s407_CollectAverage.s376_Product;
    (IAT_KeyUp09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s407_CollectAverage.s376_Product,
       (IAT_KeyUp09IdxArr_DataStore()), 9, (IAT_KeyUp09Idx_DataStore()));
    rtb_motohawk_prelookup_l = (IAT_KeyUp09Idx_DataStore());
  }

  /* RelationalOperator: '<S137>/RelOp' incorporates:
   *  Constant: '<S137>/Constant'
   */
  rtb_RelOp_hf = (BaseEngineController_LS_B.s430_State == 3);

  /* S-Function Block: <S443>/motohawk_ain1 Resource: ClutchSw_Pin */
  {
    extern NativeError_S ClutchSw_Pin_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    ClutchSw_Pin_AnalogInput_Get(&rtb_motohawk_ain1, NULL);
  }

  /* DataTypeConversion: '<S449>/Data Type Conversion' incorporates:
   *  S-Function (motohawk_sfun_ain): '<S443>/motohawk_ain1'
   */
  BaseEngineController_LS_B.s449_DataTypeConversion = (real_T)rtb_motohawk_ain1;

  /* RelationalOperator: '<S449>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S449>/SwitchPoint'
   */
  rtb_LogicalOperator6_b = (BaseEngineController_LS_B.s449_DataTypeConversion >
                            (ClutchSwSwitchPt_DataStore()));

  /* Logic: '<S449>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S449>/0 = No Inversion 1 = Inversion'
   */
  rtb_LogicalOperator6_b ^= (ClutchSwPolarity_DataStore());

  /* If: '<S458>/If' incorporates:
   *  Inport: '<S459>/In1'
   *  Inport: '<S460>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S458>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S458>/override_enable'
   */
  if ((ClutchSw_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S458>/NewValue' incorporates:
     *  ActionPort: '<S459>/Action Port'
     */
    BaseEngineController_LS_B.s458_Merge = (ClutchSw_new_DataStore());

    /* End of Outputs for SubSystem: '<S458>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S458>/OldValue' incorporates:
     *  ActionPort: '<S460>/Action Port'
     */
    BaseEngineController_LS_B.s458_Merge = rtb_LogicalOperator6_b;

    /* End of Outputs for SubSystem: '<S458>/OldValue' */
  }

  /* End of If: '<S458>/If' */

  /* S-Function Block: <S443>/motohawk_ain6 Resource: ScramblePin */
  {
    extern NativeError_S ScramblePin_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    ScramblePin_AnalogInput_Get(&rtb_motohawk_ain6_k, NULL);
  }

  /* DataTypeConversion: '<S453>/Data Type Conversion' incorporates:
   *  S-Function (motohawk_sfun_ain): '<S443>/motohawk_ain6'
   */
  BaseEngineController_LS_B.s453_DataTypeConversion = (real_T)
    rtb_motohawk_ain6_k;

  /* RelationalOperator: '<S453>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S453>/SwitchPoint'
   */
  rtb_LogicalOperator6_b = (BaseEngineController_LS_B.s453_DataTypeConversion >
                            (ScrambleSwitchPt_DataStore()));

  /* Logic: '<S453>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S453>/0 = No Inversion 1 = Inversion'
   */
  rtb_RelationalOperator6_h0 = rtb_LogicalOperator6_b ^
    (ScramblePolarity_DataStore());

  /* S-Function Block: <S484>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s484_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_dd = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S484>/Switch' incorporates:
   *  Constant: '<S484>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S484>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S484>/motohawk_delta_time'
   *  Sum: '<S484>/Sum'
   */
  if (rtb_RelationalOperator6_h0) {
    rtb_Switch_bn = rtb_motohawk_delta_time_dd + ScrambleDelay_DataStore();
  } else {
    rtb_Switch_bn = 0.0;
  }

  /* End of Switch: '<S484>/Switch' */
  /* Logic: '<S482>/Logical Operator' incorporates:
   *  RelationalOperator: '<S482>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S453>/motohawk_calibration7'
   */
  rtb_LogicalOperator6_b = (rtb_RelationalOperator6_h0 && (rtb_Switch_bn >=
    (ScrambleDebounceDelay_DataStore())));

  /* If: '<S483>/If' incorporates:
   *  Inport: '<S485>/In1'
   *  Inport: '<S486>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S483>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S483>/override_enable'
   */
  if ((Scramble_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S483>/NewValue' incorporates:
     *  ActionPort: '<S485>/Action Port'
     */
    BaseEngineController_LS_B.s483_Merge = (Scramble_new_DataStore());

    /* End of Outputs for SubSystem: '<S483>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S483>/OldValue' incorporates:
     *  ActionPort: '<S486>/Action Port'
     */
    BaseEngineController_LS_B.s483_Merge = rtb_LogicalOperator6_b;

    /* End of Outputs for SubSystem: '<S483>/OldValue' */
  }

  /* End of If: '<S483>/If' */

  /* S-Function Block: <S443>/motohawk_din2 Resource: TwoStepPin */
  {
    extern NativeError_S TwoStepPin_DigitalInput_Get(boolean_T *out, uint16_T
      *status);
    TwoStepPin_DigitalInput_Get(&BaseEngineController_LS_B.s443_motohawk_din2,
      NULL);
  }

  /* Logic: '<S454>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S454>/0 = No Inversion 1 = Inversion'
   */
  rtb_RelationalOperator6_h0 = BaseEngineController_LS_B.s443_motohawk_din2 ^
    (TwoStepPolarity_DataStore());

  /* S-Function Block: <S489>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s489_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_g = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S489>/Switch' incorporates:
   *  Constant: '<S489>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S489>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S489>/motohawk_delta_time'
   *  Sum: '<S489>/Sum'
   */
  if (rtb_RelationalOperator6_h0) {
    rtb_Switch_m1 = rtb_motohawk_delta_time_g + TwoStepTimer_DataStore();
  } else {
    rtb_Switch_m1 = 0.0;
  }

  /* End of Switch: '<S489>/Switch' */
  /* Logic: '<S487>/Logical Operator' incorporates:
   *  RelationalOperator: '<S487>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S454>/motohawk_calibration7'
   */
  rtb_LogicalOperator6_b = (rtb_RelationalOperator6_h0 && (rtb_Switch_m1 >=
    (TwoStepDebounceDelay_DataStore())));

  /* If: '<S488>/If' incorporates:
   *  Inport: '<S490>/In1'
   *  Inport: '<S491>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S488>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S488>/override_enable'
   */
  if ((TwoStep_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S488>/NewValue' incorporates:
     *  ActionPort: '<S490>/Action Port'
     */
    BaseEngineController_LS_B.s488_Merge = (TwoStep_new_DataStore());

    /* End of Outputs for SubSystem: '<S488>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S488>/OldValue' incorporates:
     *  ActionPort: '<S491>/Action Port'
     */
    BaseEngineController_LS_B.s488_Merge = rtb_LogicalOperator6_b;

    /* End of Outputs for SubSystem: '<S488>/OldValue' */
  }

  /* End of If: '<S488>/If' */

  /* S-Function Block: <S547>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s547_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_hp = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S547>/Product' incorporates:
   *  MinMax: '<S547>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S547>/motohawk_calibration'
   */
  rtb_Switch_hp /= (rtb_Switch_hp >= (MAPTimeFilterConst_DataStore())) ||
    rtIsNaN((MAPTimeFilterConst_DataStore())) ? rtb_Switch_hp :
    (MAPTimeFilterConst_DataStore());

  /* Sum: '<S552>/Sum1' incorporates:
   *  Constant: '<S552>/Constant'
   *  Product: '<S552>/Product'
   *  Product: '<S552>/Product1'
   *  Sum: '<S552>/Sum'
   *  UnitDelay: '<S552>/Unit Delay'
   */
  rtb_Sum1_mzy = (1.0 - rtb_Switch_hp) *
    BaseEngineController_LS_DWork.s552_UnitDelay_DSTATE + rtb_Merge_jq *
    rtb_Switch_hp;

  /* If: '<S551>/If' incorporates:
   *  Inport: '<S553>/In1'
   *  Inport: '<S554>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S551>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S551>/override_enable'
   */
  if ((MAPTime_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S551>/NewValue' incorporates:
     *  ActionPort: '<S553>/Action Port'
     */
    BaseEngineController_LS_B.s551_Merge = (MAPTime_new_DataStore());

    /* End of Outputs for SubSystem: '<S551>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S551>/OldValue' incorporates:
     *  ActionPort: '<S554>/Action Port'
     */
    BaseEngineController_LS_B.s551_Merge = rtb_Sum1_mzy;

    /* End of Outputs for SubSystem: '<S551>/OldValue' */
  }

  /* End of If: '<S551>/If' */

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

      /* S-Function Block: <S190>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BaseEngineController_LS_DWork.s190_motohawk_delta_time_DWORK1 = now -
          Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
      }

      /* InitializeConditions for Stateflow: '<S190>/Chart' */
      BaseEngineController_LS_DWork.s191_is_active_c1_BaseEngineController_LS =
        0U;
      BaseEngineController_LS_DWork.s191_is_c1_BaseEngineController_LS = 0U;
      BaseEngineController_LS_DWork.s191_count = 0.0;
      BaseEngineController_LS_DWork.s191_EquivStart = 0.0;
      BaseEngineController_LS_B.s191_EquivOut = 0.0;
      BaseEngineController_LS_B.s191_SparkOut = 0.0;

      /* InitializeConditions for S-Function (motohawk_sfun_trigger): '<S136>/motohawk_trigger1' */
      if (rtmIsFirstInitCond(BaseEngineController_LS_M)) {
        /* Initial conditions for function-call system: '<S136>/MinGovernor' */

        /* InitializeConditions for Stateflow: '<S248>/IdleStateMachine' */
        BaseEngineController_LS_IdleStateMachine_Init();

        /* S-Function Block: <S247>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_LS_DWork.s247_motohawk_delta_time_DWORK1 = now -
            Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }

        /* S-Function Block: <S251>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_LS_DWork.s251_motohawk_delta_time_DWORK1 = now -
            Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }

        /* InitializeConditions for Atomic SubSystem: '<S153>/AiflowOffset' */

        /* S-Function Block: <S254>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_LS_DWork.s254_motohawk_delta_time_DWORK1 = now -
            Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }

        /* End of InitializeConditions for SubSystem: '<S153>/AiflowOffset' */

        /* S-Function Block: <S279>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_LS_DWork.s279_motohawk_delta_time_DWORK1 = now -
            Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }
      }

      if (rtmIsFirstInitCond(BaseEngineController_LS_M)) {
        /* Initial conditions for function-call system: '<S136>/MaxGovernor' */

        /* S-Function Block: <S230>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_LS_DWork.s230_motohawk_delta_time_DWORK1 = now -
            Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }

        /* S-Function Block: <S241>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_LS_DWork.s241_motohawk_delta_time_DWORK1 = now -
            Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }
      }

      if (rtmIsFirstInitCond(BaseEngineController_LS_M)) {
        /* Initial conditions for function-call system: '<S136>/Spark Manager' */

        /* InitializeConditions for UnitDelay: '<S304>/Initial Condition is True' */
        BaseEngineController_LS_DWork.s304_InitialConditionisTrue_DSTATE = TRUE;
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

      /* InitializeConditions for UnitDelay: '<S202>/Unit Delay' */
      BaseEngineController_LS_DWork.s202_UnitDelay_DSTATE = FALSE;

      /* InitializeConditions for UnitDelay: '<S203>/Unit Delay' */
      BaseEngineController_LS_DWork.s203_UnitDelay_DSTATE = FALSE;

      /* InitializeConditions for UnitDelay: '<S204>/Unit Delay' */
      BaseEngineController_LS_DWork.s204_UnitDelay_DSTATE = FALSE;

      /* InitializeConditions for Atomic SubSystem: '<S136>/O2 Control' */

      /* InitializeConditions for Atomic SubSystem: '<S154>/O2 PID Controller' */
      /* InitializeConditions for UnitDelay: '<S295>/Unit Delay' */
      BaseEngineController_LS_DWork.s295_UnitDelay_DSTATE = FALSE;

      /* InitializeConditions for UnitDelay: '<S292>/Unit Delay' */
      BaseEngineController_LS_DWork.s292_UnitDelay_DSTATE = 0.0;

      /* InitializeConditions for UnitDelay: '<S291>/Unit Delay' */
      BaseEngineController_LS_DWork.s291_UnitDelay_DSTATE = 0.0;

      /* S-Function Block: <S292>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BaseEngineController_LS_DWork.s292_motohawk_delta_time_DWORK1 = now -
          Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
      }

      /* InitializeConditions for UnitDelay: '<S288>/Unit Delay1' */
      BaseEngineController_LS_DWork.s288_UnitDelay1_DSTATE = 0.0;

      /* S-Function Block: <S296>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BaseEngineController_LS_DWork.s296_motohawk_delta_time_DWORK1 = now -
          Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
      }

      /* InitializeConditions for UnitDelay: '<S288>/Unit Delay' */
      BaseEngineController_LS_DWork.s288_UnitDelay_DSTATE = 0.0;

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

      /* InitializeConditions for UnitDelay: '<S288>/Unit Delay2' */
      BaseEngineController_LS_DWork.s288_UnitDelay2_DSTATE = 0.0;

      /* S-Function Block: <S297>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BaseEngineController_LS_DWork.s297_motohawk_delta_time_DWORK1 = now -
          Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
      }

      /* End of InitializeConditions for SubSystem: '<S154>/O2 PID Controller' */
      /* End of InitializeConditions for SubSystem: '<S136>/O2 Control' */

      /* Level2 S-Function Block: '<S136>/motohawk_trigger1' (motohawk_sfun_trigger) */

      /* Enable for Trigger_FGND_5XRTI_PERIODIC_4914p0005 */
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
     *  S-Function (motohawk_sfun_prelookup): '<S439>/motohawk_prelookup'
     */
    rtb_BelowLoTarget_b = (BaseEngineController_LS_B.s681_Merge >=
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
     *  S-Function (motohawk_sfun_prelookup): '<S439>/motohawk_prelookup'
     */
    rtb_AboveHiTarget_a = (BaseEngineController_LS_B.s681_Merge <=
      rtb_motohawk_interpolation_1d3_n);

    /* CombinatorialLogic: '<S167>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_b != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_AboveHiTarget_a != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_c[0] =
        BaseEngineController_LS_ConstP.pooled863[rowidx];
      rtb_CombinatorialLogic_c[1] =
        BaseEngineController_LS_ConstP.pooled863[rowidx + 4];
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
    rtb_AboveHiTarget_a = (BaseEngineController_LS_B.s500_Sum1 >=
      (ACSpdSlowOn_DataStore()));

    /* RelationalOperator: '<S160>/LT1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S144>/motohawk_calibration1'
     */
    rtb_BelowLoTarget_b = (BaseEngineController_LS_B.s500_Sum1 <=
      (ACSpdSlowOff_DataStore()));

    /* CombinatorialLogic: '<S166>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_AboveHiTarget_a != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_b != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_c[0] =
        BaseEngineController_LS_ConstP.pooled863[rowidx];
      rtb_CombinatorialLogic_c[1] =
        BaseEngineController_LS_ConstP.pooled863[rowidx + 4];
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
    rtb_AboveHiTarget_a = (BaseEngineController_LS_B.s500_Sum1 >=
      (ACSpdFastOff_DataStore()));

    /* RelationalOperator: '<S158>/LT1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S144>/motohawk_calibration4'
     */
    rtb_BelowLoTarget_b = (BaseEngineController_LS_B.s500_Sum1 <=
      (ACSpdFastOn_DataStore()));

    /* CombinatorialLogic: '<S164>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_AboveHiTarget_a != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_b != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_c[0] =
        BaseEngineController_LS_ConstP.pooled863[rowidx];
      rtb_CombinatorialLogic_c[1] =
        BaseEngineController_LS_ConstP.pooled863[rowidx + 4];
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
    rtb_AboveHiTarget_a = (BaseEngineController_LS_B.s415_Switch2 >=
      (AC_TPSOff_DataStore()));

    /* RelationalOperator: '<S159>/LT1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S144>/motohawk_calibration6'
     */
    rtb_BelowLoTarget_b = (BaseEngineController_LS_B.s415_Switch2 <=
      (AC_TPSOn_DataStore()));

    /* CombinatorialLogic: '<S165>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_AboveHiTarget_a != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_b != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_c[0] =
        BaseEngineController_LS_ConstP.pooled863[rowidx];
      rtb_CombinatorialLogic_c[1] =
        BaseEngineController_LS_ConstP.pooled863[rowidx + 4];
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
     *  S-Function (motohawk_sfun_prelookup): '<S439>/motohawk_prelookup'
     */
    rtb_AboveHiTarget_a = (BaseEngineController_LS_B.s514_Merge >=
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
     *  S-Function (motohawk_sfun_prelookup): '<S439>/motohawk_prelookup'
     */
    rtb_BelowLoTarget_b = (BaseEngineController_LS_B.s514_Merge <=
      rtb_motohawk_interpolation_1d4_d);

    /* CombinatorialLogic: '<S163>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_AboveHiTarget_a != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_b != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_c[0] =
        BaseEngineController_LS_ConstP.pooled863[rowidx];
      rtb_CombinatorialLogic_c[1] =
        BaseEngineController_LS_ConstP.pooled863[rowidx + 4];
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
     *  S-Function (motohawk_sfun_prelookup): '<S439>/motohawk_prelookup'
     */
    rtb_AboveHiTarget_a = (BaseEngineController_LS_B.s514_Merge >=
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
     *  S-Function (motohawk_sfun_prelookup): '<S439>/motohawk_prelookup'
     */
    rtb_BelowLoTarget_b = (BaseEngineController_LS_B.s514_Merge <=
      rtb_motohawk_interpolation_1d6);

    /* CombinatorialLogic: '<S162>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_AboveHiTarget_a != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_b != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_c[0] =
        BaseEngineController_LS_ConstP.pooled863[rowidx];
      rtb_CombinatorialLogic_c[1] =
        BaseEngineController_LS_ConstP.pooled863[rowidx + 4];
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

    /* Logic: '<S144>/Logical Operator5' */
    rtb_LogicalOperator1_a = (BaseEngineController_LS_B.s163_Switch1 &&
      BaseEngineController_LS_B.s144_LogicalOperator1);

    /* Logic: '<S144>/Logical Operator' incorporates:
     *  Logic: '<S144>/Logical Operator6'
     *  S-Function (motohawk_sfun_fault_action): '<S144>/motohawk_fault_action'
     */
    BaseEngineController_LS_B.s144_LogicalOperator =
      ((BaseEngineController_LS_B.s455_Merge &&
        BaseEngineController_LS_B.s167_Switch1 && rtb_LogicalOperator6_b &&
        BaseEngineController_LS_B.s144_LogicalOperator4 &&
        rtb_LogicalOperator1_a && (!GetFaultActionStatus(3))));

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
        (BaseEngineController_LS_B.s396_motohawk_prelookup, (real_T *)
         ((Warmup_Time_HoldoffTbl_DataStore())), 5);
      (Warmup_Time_Holdoff_DataStore()) = rtb_motohawk_interpolation_1d_fx;
    }

    /* Switch: '<S170>/Switch' incorporates:
     *  Constant: '<S170>/Constant'
     *  RelationalOperator: '<S170>/Relational Operator'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S170>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_interpolation_2d): '<S146>/motohawk_interpolation_2d2'
     *  S-Function (motohawk_sfun_prelookup): '<S370>/motohawk_prelookup2'
     */
    if (BaseEngineController_LS_B.s435_Switch >=
        rtb_motohawk_interpolation_1d_fx) {
      /* S-Function Block: <S146>/motohawk_interpolation_2d2 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_WarmUptimeRatio = TableInterpolation2D_real_T(rtb_TimeSinceRun09,
          BaseEngineController_LS_B.s396_motohawk_prelookup, (real_T *)
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
        (BaseEngineController_LS_B.s398_motohawk_prelookup1,
         BaseEngineController_LS_B.s397_motohawk_prelookup, (real_T *)
         ((IntakeAirTempEnrichmentMap_DataStore())), 9, 5);
      (IntakeAirTempEnrichment_DataStore()) = rtb_IATEnrichment;
    }

    /* S-Function Block: <S146>/motohawk_interpolation_2d6 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_CATEnrichment = TableInterpolation2D_real_T
        (BaseEngineController_LS_B.s398_motohawk_prelookup1,
         BaseEngineController_LS_B.s395_motohawk_prelookup, (real_T *)
         ((ChargeAirTempEnrichmentMap_DataStore())), 9, 5);
      (ChargeAirTempEnrichment_DataStore()) = rtb_CATEnrichment;
    }

    /* S-Function Block: <S146>/motohawk_interpolation_2d3 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_motohawk_interpolation_2d3 = TableInterpolation2D_real_T
        (BaseEngineController_LS_B.s398_Indexes,
         BaseEngineController_LS_B.s400_Indexes, (real_T *)
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
    /* S-Function Block: <S194>/motohawk_prelookup */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (DFCOEntryRPMIn_DataStore()) = BaseEngineController_LS_B.s672_Merge;
      (DFCOEntryRPMIdx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_LS_B.s672_Merge, (DFCOEntryRPMIdxArr_DataStore()),
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
    rtb_LogicalOperator6_b = (BaseEngineController_LS_B.s500_Sum1 >=
      rtb_motohawk_interpolation_1d_p);

    /* RelationalOperator: '<S190>/Relational Operator1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S190>/motohawk_calibration1'
     */
    rtb_LogicalOperator1_a = (BaseEngineController_LS_B.s408_Switch1 <=
      (DFCOEntryAPP_DataStore()));

    /* RelationalOperator: '<S190>/Relational Operator2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S190>/motohawk_calibration2'
     */
    rtb_RelOp_pu = (BaseEngineController_LS_B.s551_Merge <=
                    (DFCOEntryMAP_DataStore()));

    /* Logic: '<S190>/Logical Operator1' incorporates:
     *  S-Function (motohawk_sfun_fault_action): '<S190>/motohawk_fault_action'
     */
    rtb_RelationalOperator3_bp = !GetFaultActionStatus(1);

    /* Logic: '<S190>/Logical Operator' incorporates:
     *  RelationalOperator: '<S190>/Relational Operator3'
     *  S-Function (motohawk_sfun_calibration): '<S190>/motohawk_calibration3'
     *  S-Function (motohawk_sfun_calibration): '<S190>/motohawk_calibration4'
     *  S-Function (motohawk_sfun_data_read): '<S190>/motohawk_data_read'
     *  Sum: '<S190>/Sum1'
     */
    BaseEngineController_LS_B.s190_LogicalOperator = ((rtb_LogicalOperator6_b &&
      rtb_LogicalOperator1_a && rtb_RelOp_pu && rtb_RelationalOperator3_bp &&
      (((uint8_T)(DFCOEnable_DataStore())) != 0) &&
      (BaseEngineController_LS_B.s500_Sum1 >= MinGovRPMSetPt_DataStore() +
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
      rtb_Product_o = rtb_motohawk_delta_time_p + DFCOEnterTimer_DataStore();
    } else {
      rtb_Product_o = 0.0;
    }

    /* End of Switch: '<S193>/Switch' */
    /* Logic: '<S190>/Logical Operator2' incorporates:
     *  RelationalOperator: '<S190>/Relational Operator4'
     *  S-Function (motohawk_sfun_calibration): '<S190>/motohawk_calibration5'
     */
    rtb_AboveHiTarget_a = (BaseEngineController_LS_B.s190_LogicalOperator &&
      (rtb_Product_o >= (DFCODelayTime_DataStore())));

    /* RelationalOperator: '<S190>/Relational Operator5' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S190>/motohawk_calibration9'
     *  S-Function (motohawk_sfun_data_read): '<S190>/motohawk_data_read'
     *  Sum: '<S190>/Sum'
     */
    rtb_LogicalOperator6_b = (BaseEngineController_LS_B.s500_Sum1 <=
      MinGovRPMSetPt_DataStore() + (DFCOExitIdleSpeed_DataStore()));

    /* S-Function Block: <S195>/motohawk_prelookup */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (DFCOExitRPMIn_DataStore()) = BaseEngineController_LS_B.s672_Merge;
      (DFCOExitRPMIdx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_LS_B.s672_Merge, (DFCOExitRPMIdxArr_DataStore()),
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
    rtb_LogicalOperator1_a = (BaseEngineController_LS_B.s500_Sum1 <=
      rtb_motohawk_interpolation_1d_n0);

    /* RelationalOperator: '<S190>/Relational Operator6' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S190>/motohawk_calibration6'
     */
    rtb_RelOp_pu = (BaseEngineController_LS_B.s408_Switch1 >=
                    (DFCOExitAPP_DataStore()));

    /* Logic: '<S190>/Logical Operator3' incorporates:
     *  RelationalOperator: '<S190>/Relational Operator7'
     *  S-Function (motohawk_sfun_calibration): '<S190>/motohawk_calibration7'
     */
    rtb_BelowLoTarget_b = (rtb_LogicalOperator6_b && rtb_LogicalOperator1_a &&
      rtb_RelOp_pu && (BaseEngineController_LS_B.s551_Merge >=
                       (DFCOExitMAP_DataStore())));

    /* CombinatorialLogic: '<S192>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_AboveHiTarget_a != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_b != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_c[0] =
        BaseEngineController_LS_ConstP.pooled863[rowidx];
      rtb_CombinatorialLogic_c[1] =
        BaseEngineController_LS_ConstP.pooled863[rowidx + 4];
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
    /* S-Function Block: <S190>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s190_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_gz = ((real_T) delta) * 0.000001;
    }

    /* Product: '<S190>/Product' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S190>/motohawk_calibration11'
     *  S-Function (motohawk_sfun_delta_time): '<S190>/motohawk_delta_time'
     */
    rtb_DataTypeConversion1_e = (DFCOExitRampTime_DataStore()) /
      rtb_motohawk_delta_time_gz;

    /* Stateflow: '<S190>/Chart' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S190>/motohawk_calibration10'
     */

    /* Gateway: Foreground/Control/Controller/Run/DFCO/DesEquivRatioMod/Chart */
    /* During: Foreground/Control/Controller/Run/DFCO/DesEquivRatioMod/Chart */
    if (BaseEngineController_LS_DWork.s191_is_active_c1_BaseEngineController_LS ==
        0) {
      /* Entry: Foreground/Control/Controller/Run/DFCO/DesEquivRatioMod/Chart */
      BaseEngineController_LS_DWork.s191_is_active_c1_BaseEngineController_LS =
        1U;

      /* Transition: '<S191>:24' */
      BaseEngineController_LS_DWork.s191_is_c1_BaseEngineController_LS =
        BaseEngineController_LS_IN_Normal;
    } else {
      switch (BaseEngineController_LS_DWork.s191_is_c1_BaseEngineController_LS)
  {
       case BaseEngineController_LS_IN_DFCO_Off:
        /* During 'DFCO_Off': '<S191>:11' */
        if (BaseEngineController_LS_DWork.s191_count >=
            rtb_DataTypeConversion1_e) {
          /* Transition: '<S191>:12' */
          BaseEngineController_LS_DWork.s191_is_c1_BaseEngineController_LS =
            BaseEngineController_LS_IN_Normal;
        } else if (BaseEngineController_LS_B.s192_Switch1 == TRUE) {
          /* Transition: '<S191>:15' */
          BaseEngineController_LS_DWork.s191_is_c1_BaseEngineController_LS =
            BaseEngineController_LS_IN_DFCO_On;
        } else {
          BaseEngineController_LS_DWork.s191_count =
            BaseEngineController_LS_DWork.s191_count + 1.0;
          BaseEngineController_LS_B.s191_EquivOut =
            BaseEngineController_LS_DWork.s191_EquivStart /
            rtb_DataTypeConversion1_e * BaseEngineController_LS_DWork.s191_count;
          BaseEngineController_LS_B.s191_SparkOut = (DFCOExitSparkRet_DataStore())
            / rtb_DataTypeConversion1_e *
            BaseEngineController_LS_DWork.s191_count;
        }
        break;

       case BaseEngineController_LS_IN_DFCO_On:
        /* During 'DFCO_On': '<S191>:9' */
        if (BaseEngineController_LS_B.s192_Switch1 == FALSE) {
          /* Transition: '<S191>:13' */
          BaseEngineController_LS_DWork.s191_is_c1_BaseEngineController_LS =
            BaseEngineController_LS_IN_DFCO_Off;

          /* Entry 'DFCO_Off': '<S191>:11' */
          BaseEngineController_LS_DWork.s191_count = 0.0;
          BaseEngineController_LS_DWork.s191_EquivStart =
            BaseEngineController_LS_B.s146_DesEquivRatio;
        } else {
          BaseEngineController_LS_B.s191_EquivOut = 0.0;
          BaseEngineController_LS_B.s191_SparkOut = 0.0;
        }
        break;

       case BaseEngineController_LS_IN_Normal:
        /* During 'Normal': '<S191>:8' */
        if (BaseEngineController_LS_B.s192_Switch1 == TRUE) {
          /* Transition: '<S191>:10' */
          BaseEngineController_LS_DWork.s191_is_c1_BaseEngineController_LS =
            BaseEngineController_LS_IN_DFCO_On;
        } else {
          BaseEngineController_LS_B.s191_EquivOut =
            BaseEngineController_LS_B.s146_DesEquivRatio;
          BaseEngineController_LS_B.s191_SparkOut = 0.0;
        }
        break;

       default:
        /* Transition: '<S191>:24' */
        BaseEngineController_LS_DWork.s191_is_c1_BaseEngineController_LS =
          BaseEngineController_LS_IN_Normal;
        break;
      }
    }

    /* End of Stateflow: '<S190>/Chart' */

    /* S-Function (motohawk_sfun_trigger): '<S136>/motohawk_trigger1' */
    /* Enable for Trigger_FGND_5XRTI_PERIODIC_4914p0005 */
    if (BaseEngineController_LS_DWork.s136_motohawk_trigger1_DWORK1 == 0) {
      BaseEngineController_LS_DWork.s136_motohawk_trigger1_DWORK1 = 1;
    }

    /* Sum: '<S145>/Sum2' */
    rtb_DataTypeConversion1_e =
      BaseEngineController_LS_B.s254_DontallowsetpointtoeverdropbelowtheTargetRPM
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
            (BaseEngineController_LS_B.s400_motohawk_prelookup1, (real_T *)
             ((MaxETCSetPtLimitTbl_DataStore())), 9);
          (MaxETCSetPtLimit_DataStore()) = rtb_motohawk_interpolation_1d2_d;
        }

        /* Switch: '<S145>/Switch2' */
        if (BaseEngineController_LS_B.s229_MultiportSwitch) {
          rtb_DataTypeConversion1_e = BaseEngineController_LS_B.s232_Switch;
        } else {
          /* Switch: '<S145>/Switch4' incorporates:
           *  Logic: '<S145>/Logical Operator'
           *  Sum: '<S145>/Sum1'
           */
          if (!BaseEngineController_LS_B.s264_RelOp) {
            rtb_DataTypeConversion1_e = BaseEngineController_LS_B.s422_Sum2 +
              BaseEngineController_LS_B.s254_DontallowsetpointtoeverdropbelowtheTargetRPM;
          }

          /* End of Switch: '<S145>/Switch4' */
        }

        /* End of Switch: '<S145>/Switch2' */

        /* MinMax: '<S168>/MinMax' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S145>/motohawk_calibration3'
         */
        y = (rtb_DataTypeConversion1_e >= (MinETCSetpoint_DataStore())) ||
          rtIsNaN((MinETCSetpoint_DataStore())) ? rtb_DataTypeConversion1_e :
          (MinETCSetpoint_DataStore());

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
    rtb_Switch_k = (BaseEngineController_LS_B.s551_Merge -
                    BaseEngineController_LS_B.s375_Sum) * 0.145038;

    /* RelationalOperator: '<S147>/Relational Operator' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S147>/motohawk_calibration2'
     */
    rtb_AboveHiTarget_a = (rtb_Switch_k < (BoostActivationThreshold_DataStore()));

    /* UnitDelay: '<S147>/Unit Delay' */
    rtb_Switch_o = BaseEngineController_LS_DWork.s147_UnitDelay_DSTATE;

    /* Outputs for Enabled SubSystem: '<S147>/BoostControl Adapt' incorporates:
     *  EnablePort: '<S174>/Enable'
     */
    /* Logic: '<S147>/Logical Operator' */
    if (!rtb_AboveHiTarget_a) {
      /* Product: '<S174>/Product0' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S174>/motohawk_calibration2'
       */
      rtb_DataTypeConversion1_e = rtb_Switch_o *
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
          (fabs(rtb_Switch_o) <= (BoostControlAdaptDelta_DataStore()))));

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
    if (BaseEngineController_LS_B.s488_Merge) {
      /* S-Function Block: <S147>/motohawk_interpolation_1d1 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d1_gy = TableInterpolation1D_real_T
          (BaseEngineController_LS_B.s400_motohawk_prelookup1, (real_T *)
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
          (BaseEngineController_LS_B.s397_motohawk_prelookup, (real_T *)
           ((BoostIATLimitTbl_DataStore())), 5);
        (BoostIATLimit_DataStore()) = rtb_Sum2_d;
      }

      /* S-Function Block: <S147>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_MinMax_gy = TableInterpolation1D_real_T
          (BaseEngineController_LS_B.s396_motohawk_prelookup, (real_T *)
           ((BoostECTLimitTbl_DataStore())), 5);
        (BoostECTLimit_DataStore()) = rtb_MinMax_gy;
      }

      /* MinMax: '<S147>/MinMax' */
      rtb_MinMax_gy = (rtb_MinMax_gy <= rtb_Sum2_d) || rtIsNaN(rtb_Sum2_d) ?
        rtb_MinMax_gy : rtb_Sum2_d;

      /* Product: '<S147>/Product' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S147>/motohawk_calibration3'
       */
      rtb_Sum2_d = (real_T)BaseEngineController_LS_B.s483_Merge *
        (BoostScrambleAdder_DataStore());

      /* S-Function Block: <S147>/motohawk_interpolation_2d2 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_motohawk_interpolation_2d2_f = TableInterpolation2D_real_T
          (rtb_motohawk_prelookup_i,
           BaseEngineController_LS_B.s400_motohawk_prelookup1, (real_T *)
           ((BoostTargetMap_DataStore())), 9, 9);
        (BoostTarget_DataStore()) = rtb_motohawk_interpolation_2d2_f;
      }

      /* Sum: '<S147>/Sum2' incorporates:
       *  S-Function (motohawk_sfun_interpolation_2d): '<S147>/motohawk_interpolation_2d2'
       *  S-Function (motohawk_sfun_prelookup): '<S403>/motohawk_prelookup'
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
      rtb_DataTypeConversion1_e;

    /* Sum: '<S184>/Sum2' */
    BaseEngineController_LS_B.s184_Sum2 = rtb_Sum2_o - rtb_Switch_k;

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
      rtb_motohawk_interpolation_1d3_l * rtb_DataTypeConversion_m;

    /* Sum: '<S185>/Sum2' */
    rtb_DataTypeConversion1_e = rtb_Product4_k - rtb_DataTypeConversion1_e;

    /* S-Function Block: <S185>/motohawk_delta_time */
    rtb_motohawk_delta_time_ao = 0.005;

    /* Product: '<S185>/Product' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S185>/motohawk_delta_time'
     */
    BaseEngineController_LS_B.s185_Product = rtb_DataTypeConversion1_e /
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
         BaseEngineController_LS_B.s400_motohawk_prelookup1, (real_T *)
         ((BoostControlBase_AdaptMap_DataStore())), 9, 9);
      (BoostControlBase_Adapt_DataStore()) = rtb_motohawk_interpolation_2d1_d;
    }

    /* S-Function Block: <S147>/motohawk_interpolation_2d */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      BaseEngineController_LS_B.s147_motohawk_interpolation_2d =
        TableInterpolation2D_real_T(rtb_motohawk_prelookup_br,
        BaseEngineController_LS_B.s400_motohawk_prelookup1, (real_T *)
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
        (BaseEngineController_LS_B.s401_motohawk_prelookup, (real_T *)
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
    if (rtb_AboveHiTarget_a) {
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
    rtb_DataTypeConversion_m = rtb_DataTypeConversion1_e *
      rtb_motohawk_delta_time_l3 + BaseEngineController_LS_B.s186_Switch1;

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
    rtb_MinMax1_d = (rtb_Abs_k <= (BoostCtlITermUpperLimit_DataStore())) ||
      rtIsNaN((BoostCtlITermUpperLimit_DataStore())) ? rtb_Abs_k :
      (BoostCtlITermUpperLimit_DataStore());

    /* Saturate: '<S193>/Saturation' */
    rtb_Saturation_ao = rtb_Product_o >= 16000.0 ? 16000.0 : rtb_Product_o <=
      0.0 ? 0.0 : rtb_Product_o;

    /* S-Function (motohawk_sfun_data_write): '<S193>/motohawk_data_write' */
    /* Write to Data Storage as scalar: DFCOEnterTimer */
    {
      DFCOEnterTimer_DataStore() = rtb_Saturation_ao;
    }

    /* RelationalOperator: '<S196>/LT' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S149>/motohawk_data_read'
     */
    rtb_AboveHiTarget_a = (BaseEngineController_LS_B.s672_Merge >=
      ECTFanOn_DataStore());

    /* RelationalOperator: '<S196>/LT1' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S149>/motohawk_data_read1'
     */
    rtb_BelowLoTarget_b = (BaseEngineController_LS_B.s672_Merge <=
      ECTFanOff_DataStore());

    /* CombinatorialLogic: '<S202>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_AboveHiTarget_a != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_b != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_c[0] =
        BaseEngineController_LS_ConstP.pooled863[rowidx];
      rtb_CombinatorialLogic_c[1] =
        BaseEngineController_LS_ConstP.pooled863[rowidx + 4];
    }

    /* Switch: '<S202>/Switch1' incorporates:
     *  UnitDelay: '<S202>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_c[1]) {
      rtb_Switch1_em = rtb_CombinatorialLogic_c[0];
    } else {
      rtb_Switch1_em = BaseEngineController_LS_DWork.s202_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S202>/Switch1' */
    /* Switch: '<S149>/Switch' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S149>/motohawk_data_read14'
     *  S-Function (motohawk_sfun_interpolation_2d): '<S199>/motohawk_interpolation_2d'
     *  S-Function (motohawk_sfun_prelookup): '<S199>/motohawk_prelookup_col'
     *  S-Function (motohawk_sfun_prelookup): '<S199>/motohawk_prelookup_row'
     */
    if (((uint8_T)FAN_Mode_DataStore()) >= 1) {
      rtb_DataTypeConversion_m = (real_T)rtb_Switch1_em;
    } else {
      /* S-Function Block: <S199>/motohawk_prelookup_col */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (ECTFanSpeedColIn_DataStore()) = BaseEngineController_LS_B.s477_Merge;
        (ECTFanSpeedColIdx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_LS_B.s477_Merge, (ECTFanSpeedColIdxArr_DataStore
            ()), 7, (ECTFanSpeedColIdx_DataStore()));
        rtb_motohawk_prelookup_col_dt = (ECTFanSpeedColIdx_DataStore());
      }

      /* S-Function Block: <S199>/motohawk_prelookup_row */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (ECTFanSpeedRowIn_DataStore()) = BaseEngineController_LS_B.s672_Merge;
        (ECTFanSpeedRowIdx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_LS_B.s672_Merge, (ECTFanSpeedRowIdxArr_DataStore
            ()), 7, (ECTFanSpeedRowIdx_DataStore()));
        rtb_motohawk_prelookup_row_o = (ECTFanSpeedRowIdx_DataStore());
      }

      /* S-Function Block: <S199>/motohawk_interpolation_2d */
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
    rtb_Product_o = rtb_DataTypeConversion_m * (real_T)rtb_motohawk_data_read13;

    /* RelationalOperator: '<S197>/LT' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S149>/motohawk_data_read2'
     */
    rtb_AboveHiTarget_a = (BaseEngineController_LS_B.s690_Merge >=
      IATFanOn_DataStore());

    /* RelationalOperator: '<S197>/LT1' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S149>/motohawk_data_read3'
     */
    rtb_BelowLoTarget_b = (BaseEngineController_LS_B.s690_Merge <=
      IATFanOff_DataStore());

    /* CombinatorialLogic: '<S203>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_AboveHiTarget_a != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_b != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_c[0] =
        BaseEngineController_LS_ConstP.pooled863[rowidx];
      rtb_CombinatorialLogic_c[1] =
        BaseEngineController_LS_ConstP.pooled863[rowidx + 4];
    }

    /* Switch: '<S203>/Switch1' incorporates:
     *  UnitDelay: '<S203>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_c[1]) {
      rtb_Switch1_l4 = rtb_CombinatorialLogic_c[0];
    } else {
      rtb_Switch1_l4 = BaseEngineController_LS_DWork.s203_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S203>/Switch1' */

    /* Switch: '<S149>/Switch1' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S149>/motohawk_data_read14'
     *  S-Function (motohawk_sfun_interpolation_2d): '<S200>/motohawk_interpolation_2d'
     *  S-Function (motohawk_sfun_prelookup): '<S200>/motohawk_prelookup_col'
     *  S-Function (motohawk_sfun_prelookup): '<S200>/motohawk_prelookup_row'
     */
    if (((uint8_T)FAN_Mode_DataStore()) >= 1) {
      rtb_Switch_o = (real_T)rtb_Switch1_l4;
    } else {
      /* S-Function Block: <S200>/motohawk_prelookup_col */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (IATFanSpeedColIn_DataStore()) = BaseEngineController_LS_B.s477_Merge;
        (IATFanSpeedColIdx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_LS_B.s477_Merge, (IATFanSpeedColIdxArr_DataStore
            ()), 7, (IATFanSpeedColIdx_DataStore()));
        rtb_motohawk_prelookup_col_e = (IATFanSpeedColIdx_DataStore());
      }

      /* S-Function Block: <S200>/motohawk_prelookup_row */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (IATFanSpeedRowIn_DataStore()) = BaseEngineController_LS_B.s690_Merge;
        (IATFanSpeedRowIdx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_LS_B.s690_Merge, (IATFanSpeedRowIdxArr_DataStore
            ()), 7, (IATFanSpeedRowIdx_DataStore()));
        rtb_motohawk_prelookup_row_h = (IATFanSpeedRowIdx_DataStore());
      }

      /* S-Function Block: <S200>/motohawk_interpolation_2d */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_motohawk_interpolation_2d_n = TableInterpolation2D_real_T
          (rtb_motohawk_prelookup_row_h, rtb_motohawk_prelookup_col_e, (real_T *)
           ((IATFanSpeedMap_DataStore())), 7, 7);
        (IATFanSpeed_DataStore()) = rtb_motohawk_interpolation_2d_n;
      }

      rtb_Switch_o = rtb_motohawk_interpolation_2d_n;
    }

    /* End of Switch: '<S149>/Switch1' */

    /* S-Function (motohawk_sfun_data_read): '<S149>/motohawk_data_read7' */
    rtb_motohawk_data_read13 = Fan1IAT_DataStore();

    /* Product: '<S149>/Product1' */
    rtb_Switch1_f = rtb_Switch_o * (real_T)rtb_motohawk_data_read13;

    /* RelationalOperator: '<S198>/LT' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S149>/motohawk_data_read4'
     */
    rtb_AboveHiTarget_a = (BaseEngineController_LS_B.s514_Merge >=
      ACPresFanOn_DataStore());

    /* RelationalOperator: '<S198>/LT1' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S149>/motohawk_data_read5'
     */
    rtb_BelowLoTarget_b = (BaseEngineController_LS_B.s514_Merge <=
      ACPresFanOff_DataStore());

    /* CombinatorialLogic: '<S204>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_AboveHiTarget_a != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_b != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_c[0] =
        BaseEngineController_LS_ConstP.pooled863[rowidx];
      rtb_CombinatorialLogic_c[1] =
        BaseEngineController_LS_ConstP.pooled863[rowidx + 4];
    }

    /* Switch: '<S204>/Switch1' incorporates:
     *  UnitDelay: '<S204>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_c[1]) {
      rtb_Switch1_mo = rtb_CombinatorialLogic_c[0];
    } else {
      rtb_Switch1_mo = BaseEngineController_LS_DWork.s204_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S204>/Switch1' */

    /* Switch: '<S149>/Switch2' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S149>/motohawk_data_read14'
     *  S-Function (motohawk_sfun_interpolation_2d): '<S201>/motohawk_interpolation_2d'
     *  S-Function (motohawk_sfun_prelookup): '<S201>/motohawk_prelookup_col'
     *  S-Function (motohawk_sfun_prelookup): '<S201>/motohawk_prelookup_row'
     */
    if (((uint8_T)FAN_Mode_DataStore()) >= 1) {
      rtb_Product6_m = (real_T)rtb_Switch1_mo;
    } else {
      /* S-Function Block: <S201>/motohawk_prelookup_col */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (ACPresFanSpeedColIn_DataStore()) = BaseEngineController_LS_B.s477_Merge;
        (ACPresFanSpeedColIdx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_LS_B.s477_Merge,
           (ACPresFanSpeedColIdxArr_DataStore()), 7,
           (ACPresFanSpeedColIdx_DataStore()));
        rtb_motohawk_prelookup_col_o = (ACPresFanSpeedColIdx_DataStore());
      }

      /* S-Function Block: <S201>/motohawk_prelookup_row */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (ACPresFanSpeedRowIn_DataStore()) = BaseEngineController_LS_B.s514_Merge;
        (ACPresFanSpeedRowIdx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_LS_B.s514_Merge,
           (ACPresFanSpeedRowIdxArr_DataStore()), 7,
           (ACPresFanSpeedRowIdx_DataStore()));
        rtb_motohawk_prelookup_row_a = (ACPresFanSpeedRowIdx_DataStore());
      }

      /* S-Function Block: <S201>/motohawk_interpolation_2d */
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
    rtb_Product5_j = (real_T)BaseEngineController_LS_B.s455_Merge;

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
    y = (rtb_Product_o >= rtb_Switch1_f) || rtIsNaN(rtb_Switch1_f) ?
      rtb_Product_o : rtb_Switch1_f;
    y = (y >= rtb_Product7_i) || rtIsNaN(rtb_Product7_i) ? y : rtb_Product7_i;
    rtb_DesiredLambda_idx_0 = rtb_Product5_j * (real_T)rtb_motohawk_data_read13;
    BaseEngineController_LS_B.s149_MinMax = (y >= rtb_DesiredLambda_idx_0) ||
      rtIsNaN(rtb_DesiredLambda_idx_0) ? y : rtb_DesiredLambda_idx_0;

    /* S-Function (motohawk_sfun_data_read): '<S149>/motohawk_data_read10' */
    rtb_motohawk_data_read13 = Fan2ECT_DataStore();

    /* Product: '<S149>/Product4' */
    rtb_DataTypeConversion1_e = rtb_DataTypeConversion_m * (real_T)
      rtb_motohawk_data_read13;

    /* S-Function (motohawk_sfun_data_read): '<S149>/motohawk_data_read11' */
    rtb_motohawk_data_read13 = Fan2IAT_DataStore();

    /* Product: '<S149>/Product5' */
    rtb_Product7_i = rtb_Switch_o * (real_T)rtb_motohawk_data_read13;

    /* S-Function (motohawk_sfun_data_read): '<S149>/motohawk_data_read12' */
    rtb_motohawk_data_read13 = Fan2ACPres_DataStore();

    /* Product: '<S149>/Product6' */
    rtb_Switch1_f = rtb_Product6_m * (real_T)rtb_motohawk_data_read13;

    /* S-Function (motohawk_sfun_data_read): '<S149>/motohawk_data_read13' */
    rtb_motohawk_data_read13 = Fan2ACSw_DataStore();

    /* MinMax: '<S149>/MinMax1' incorporates:
     *  Product: '<S149>/Product7'
     */
    y = (rtb_DataTypeConversion1_e >= rtb_Product7_i) || rtIsNaN(rtb_Product7_i)
      ? rtb_DataTypeConversion1_e : rtb_Product7_i;
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
    rtb_DesiredLambda_idx = BaseEngineController_LS_B.s191_EquivOut;
    rtb_DesiredLambda_idx_0 = rtb_WarmUpRatio;

    /* Logic: '<S282>/Logical Operator' incorporates:
     *  Constant: '<S282>/Constant'
     *  RelationalOperator: '<S282>/Relational Operator'
     *  RelationalOperator: '<S282>/Relational Operator1'
     *  S-Function (motohawk_sfun_calibration): '<S282>/motohawk_calibration1'
     *  Sum: '<S282>/Sum'
     *  Sum: '<S282>/Sum1'
     */
    BaseEngineController_LS_B.s282_LogicalOperator = (((rtb_DesiredLambda_idx <=
      (EquivRatioDelta_DataStore()) + 1.0) && (rtb_DesiredLambda_idx >= 1.0 -
      (EquivRatioDelta_DataStore()))));

    /* Logic: '<S282>/Logical Operator3' */
    BaseEngineController_LS_B.s282_LogicalOperator3 =
      !rtb_motohawk_fault_action_b;

    /* S-Function Block: <S282>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_f = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_j, (real_T *) ((O2StartUpDelayTbl_DataStore())),
         9);
      (O2StartUpDelay_DataStore()) = rtb_motohawk_interpolation_1d_f;
    }

    /* RelationalOperator: '<S282>/Relational Operator5' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S282>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_prelookup): '<S438>/motohawk_prelookup'
     */
    BaseEngineController_LS_B.s282_RelationalOperator5 =
      ((BaseEngineController_LS_B.s435_Switch >= rtb_motohawk_interpolation_1d_f));

    /* Logic: '<S282>/Logical Operator2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S282>/motohawk_calibration2'
     */
    BaseEngineController_LS_B.s282_LogicalOperator2 =
      ((BaseEngineController_LS_B.s385_LogicalOperator &&
        BaseEngineController_LS_B.s282_LogicalOperator &&
        BaseEngineController_LS_B.s282_LogicalOperator3 &&
        (O2ControlEnable_DataStore()) &&
        BaseEngineController_LS_B.s282_RelationalOperator5));

    /* Logic: '<S154>/Logical Operator' */
    rtb_LogicalOperator6_b = !BaseEngineController_LS_B.s282_LogicalOperator2;

    /* S-Function Block: <S286>/motohawk_interpolation_2d2 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_RichEquivRatioSwPtDelta = TableInterpolation2D_real_T
        (BaseEngineController_LS_B.s398_motohawk_prelookup1,
         BaseEngineController_LS_B.s400_motohawk_prelookup1, (real_T *)
         ((RichSwPtDeltaMap_DataStore())), 9, 9);
      (RichSwPtDelta_DataStore()) = rtb_RichEquivRatioSwPtDelta;
    }

    /* S-Function Block: <S286>/motohawk_interpolation_2d3 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_LeanEquivRatioSwPtDelta = TableInterpolation2D_real_T
        (BaseEngineController_LS_B.s398_motohawk_prelookup1,
         BaseEngineController_LS_B.s400_motohawk_prelookup1, (real_T *)
         ((LeanSwPtDeltaMap_DataStore())), 9, 9);
      (LeanSwPtDelta_DataStore()) = rtb_LeanEquivRatioSwPtDelta;
    }

    /* S-Function Block: <S285>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_i = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup1_h, (real_T *) ((O2NECCTErrGainMultTbl_DataStore
           ())), 9);
      (O2NECCTErrGainMult_DataStore()) = rtb_motohawk_interpolation_1d_i;
    }

    /* S-Function Block: <S285>/motohawk_interpolation_1d1 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d1_o0 = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_o, (real_T *) ((O2MAFErrGainMultTbl_DataStore())),
         5);
      (O2MAFErrGainMult_DataStore()) = rtb_motohawk_interpolation_1d1_o0;
    }

    /* Product: '<S285>/Product' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S285>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S285>/motohawk_interpolation_1d1'
     *  S-Function (motohawk_sfun_prelookup): '<S396>/motohawk_prelookup1'
     *  S-Function (motohawk_sfun_prelookup): '<S440>/motohawk_prelookup'
     */
    rtb_DataTypeConversion1_e = rtb_motohawk_interpolation_1d_i *
      rtb_motohawk_interpolation_1d1_o0;

    /* Logic: '<S154>/Logical Operator1' */
    rtb_LogicalOperator1_a = !rtb_RelOp_hf;

    /* Outputs for Atomic SubSystem: '<S154>/O2 PID Controller' */
    /* RelationalOperator: '<S288>/LT' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S286>/motohawk_interpolation_2d2'
     *  Sum: '<S288>/Sum3'
     */
    rtb_AboveRich = (BaseEngineController_LS_B.s413_Sum1 >=
                     rtb_DesiredLambda_idx + rtb_RichEquivRatioSwPtDelta);

    /* RelationalOperator: '<S288>/LT1' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S286>/motohawk_interpolation_2d3'
     *  Sum: '<S288>/Sum4'
     */
    rtb_LogicalOperator2_ig = (BaseEngineController_LS_B.s413_Sum1 <=
      rtb_DesiredLambda_idx - rtb_LeanEquivRatioSwPtDelta);

    /* CombinatorialLogic: '<S295>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_AboveRich != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_LogicalOperator2_ig != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic[0] =
        BaseEngineController_LS_ConstP.pooled863[rowidx];
      rtb_CombinatorialLogic[1] =
        BaseEngineController_LS_ConstP.pooled863[rowidx + 4];
    }

    /* Switch: '<S295>/Switch1' incorporates:
     *  UnitDelay: '<S295>/Unit Delay'
     */
    if (rtb_CombinatorialLogic[1]) {
      rtb_Switch1_mj = rtb_CombinatorialLogic[0];
    } else {
      rtb_Switch1_mj = BaseEngineController_LS_DWork.s295_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S295>/Switch1' */

    /* Switch: '<S284>/Switch' */
    if (rtb_LogicalOperator6_b) {
      BaseEngineController_LS_B.s284_Switch =
        BaseEngineController_LS_B.s413_Sum1;
    } else {
      /* Switch: '<S288>/Switch2' incorporates:
       *  Logic: '<S288>/Logical Operator'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S286>/motohawk_interpolation_2d'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S286>/motohawk_interpolation_2d1'
       *  Sum: '<S288>/Sum1'
       *  Sum: '<S288>/Sum2'
       */
      if (!rtb_Switch1_mj) {
        /* S-Function Block: <S286>/motohawk_interpolation_2d */
        {
          extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
            col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
          rtb_RichEquivRatioTargetDelta_p = TableInterpolation2D_real_T
            (BaseEngineController_LS_B.s398_motohawk_prelookup1,
             BaseEngineController_LS_B.s400_motohawk_prelookup1, (real_T *)
             ((RichTargetDeltaMap_DataStore())), 9, 9);
          (RichTargetDelta_DataStore()) = rtb_RichEquivRatioTargetDelta_p;
        }

        BaseEngineController_LS_B.s284_Switch = rtb_RichEquivRatioTargetDelta_p
          + rtb_DesiredLambda_idx;
      } else {
        /* S-Function Block: <S286>/motohawk_interpolation_2d1 */
        {
          extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
            col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
          rtb_LeanEquivRatioTargetDelta = TableInterpolation2D_real_T
            (BaseEngineController_LS_B.s398_motohawk_prelookup1,
             BaseEngineController_LS_B.s400_motohawk_prelookup1, (real_T *)
             ((LeanTargetDeltaMap_DataStore())), 9, 9);
          (LeanTargetDelta_DataStore()) = rtb_LeanEquivRatioTargetDelta;
        }

        BaseEngineController_LS_B.s284_Switch = rtb_DesiredLambda_idx -
          rtb_LeanEquivRatioTargetDelta;
      }

      /* End of Switch: '<S288>/Switch2' */
    }

    /* End of Switch: '<S284>/Switch' */

    /* Sum: '<S290>/Sum2' */
    BaseEngineController_LS_B.s290_Sum2 = BaseEngineController_LS_B.s284_Switch
      - BaseEngineController_LS_B.s413_Sum1;

    /* Product: '<S290>/Product5' */
    rtb_Product6_m = BaseEngineController_LS_B.s290_Sum2 *
      rtb_DataTypeConversion1_e;

    /* Product: '<S290>/Product2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S283>/motohawk_calibration5'
     */
    BaseEngineController_LS_B.s290_Product2 = rtb_Product6_m *
      (O2CtrlPGain_DataStore());

    /* Switch: '<S292>/Switch1' incorporates:
     *  Constant: '<S287>/Constant'
     *  UnitDelay: '<S292>/Unit Delay'
     */
    if (rtb_LogicalOperator1_a) {
      BaseEngineController_LS_B.s292_Switch1 = 0.0;
    } else {
      BaseEngineController_LS_B.s292_Switch1 =
        BaseEngineController_LS_DWork.s292_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S292>/Switch1' */

    /* Product: '<S290>/Product4' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S283>/motohawk_calibration7'
     */
    rtb_Product5_j = rtb_Product6_m * (O2CtrlDGain_DataStore());

    /* Sum: '<S291>/Sum2' incorporates:
     *  UnitDelay: '<S291>/Unit Delay'
     */
    rtb_DataTypeConversion1_e = rtb_Product5_j -
      BaseEngineController_LS_DWork.s291_UnitDelay_DSTATE;

    /* S-Function Block: <S291>/motohawk_delta_time */
    rtb_motohawk_delta_time_kr = 0.005;

    /* Product: '<S291>/Product' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S291>/motohawk_delta_time'
     */
    BaseEngineController_LS_B.s291_Product = rtb_DataTypeConversion1_e /
      rtb_motohawk_delta_time_kr;

    /* MinMax: '<S289>/MinMax' incorporates:
     *  Constant: '<S287>/Convert to Fuel Multiplier'
     *  S-Function (motohawk_sfun_calibration): '<S283>/motohawk_calibration11'
     *  Sum: '<S287>/Sum'
     *  Sum: '<S290>/Sum1'
     */
    u = ((BaseEngineController_LS_B.s290_Product2 +
          BaseEngineController_LS_B.s291_Product) +
         BaseEngineController_LS_B.s292_Switch1) + 1.0;
    y = (u >= (O2CtrlPIDOutLowerLimit_DataStore())) || rtIsNaN
      ((O2CtrlPIDOutLowerLimit_DataStore())) ? u :
      (O2CtrlPIDOutLowerLimit_DataStore());

    /* MinMax: '<S289>/MinMax1' incorporates:
     *  MinMax: '<S289>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S283>/motohawk_calibration10'
     */
    rtb_Product7_i = (y <= (O2CtrlPIDOutUpperLimit_DataStore())) || rtIsNaN
      ((O2CtrlPIDOutUpperLimit_DataStore())) ? y :
      (O2CtrlPIDOutUpperLimit_DataStore());

    /* Product: '<S290>/Product1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S283>/motohawk_calibration6'
     */
    rtb_DataTypeConversion1_e = rtb_Product6_m * (O2CtrlIGain_DataStore());

    /* S-Function Block: <S292>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s292_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_mn = ((real_T) delta) * 0.000001;
    }

    /* MinMax: '<S294>/MinMax' incorporates:
     *  Product: '<S292>/Product'
     *  S-Function (motohawk_sfun_calibration): '<S283>/motohawk_calibration8'
     *  S-Function (motohawk_sfun_delta_time): '<S292>/motohawk_delta_time'
     *  Sum: '<S292>/Sum'
     */
    u = rtb_DataTypeConversion1_e * rtb_motohawk_delta_time_mn +
      BaseEngineController_LS_B.s292_Switch1;
    y = (u >= (O2ITermLowerLimit_DataStore())) || rtIsNaN
      ((O2ITermLowerLimit_DataStore())) ? u : (O2ITermLowerLimit_DataStore());

    /* MinMax: '<S294>/MinMax1' incorporates:
     *  MinMax: '<S294>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S283>/motohawk_calibration9'
     */
    u = (y <= (O2ITermUpperLimit_DataStore())) || rtIsNaN
      ((O2ITermUpperLimit_DataStore())) ? y : (O2ITermUpperLimit_DataStore());

    /* UnitDelay: '<S288>/Unit Delay1' */
    rtb_Product6_m = BaseEngineController_LS_DWork.s288_UnitDelay1_DSTATE;

    /* Logic: '<S288>/Logical Operator10' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S288>/motohawk_data_read'
     */
    rtb_RelOp_pu = (rtb_LogicalOperator2_ig && DisableO2FaultAction_DataStore());

    /* S-Function Block: <S296>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s296_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_bm = ((real_T) delta) * 0.000001;
    }

    /* Logic: '<S288>/Logical Operator4' */
    rtb_RelationalOperator3_bp = !rtb_LogicalOperator6_b;

    /* Logic: '<S288>/Logical Operator6' */
    rtb_LogicalOperator1_a = !rtb_LogicalOperator1_a;

    /* Switch: '<S296>/Switch' incorporates:
     *  Constant: '<S296>/Constant'
     *  Logic: '<S288>/Logical Operator7'
     *  S-Function (motohawk_sfun_data_read): '<S296>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S296>/motohawk_delta_time'
     *  Sum: '<S296>/Sum'
     */
    if (rtb_LogicalOperator2_ig && rtb_RelationalOperator3_bp &&
        rtb_LogicalOperator1_a) {
      rtb_DataTypeConversion1_e = rtb_motohawk_delta_time_bm +
        O2LeanTimer_DataStore();
    } else {
      rtb_DataTypeConversion1_e = 0.0;
    }

    /* End of Switch: '<S296>/Switch' */

    /* Switch: '<S288>/Switch3' */
    if (rtb_RelOp_pu) {
      BaseEngineController_LS_B.s288_Switch3 = rtb_Product6_m;
    } else {
      BaseEngineController_LS_B.s288_Switch3 = rtb_DataTypeConversion1_e;
    }

    /* End of Switch: '<S288>/Switch3' */
    /* RelationalOperator: '<S288>/LT3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S288>/motohawk_calibration2'
     */
    rtb_LT3 = ((BaseEngineController_LS_B.s288_Switch3 >=
                (O2LeanTimeThresh_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S288>/motohawk_fault_def' */

    /* Set Fault Suspected Status: O2FailedLean */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(92, rtb_LT3);
      UpdateFault(92);
    }

    /* UnitDelay: '<S288>/Unit Delay' */
    rtb_Product6_m = BaseEngineController_LS_DWork.s288_UnitDelay_DSTATE;

    /* Logic: '<S288>/Logical Operator9' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S288>/motohawk_data_read'
     */
    rtb_LogicalOperator6_b = (rtb_AboveRich && DisableO2FaultAction_DataStore());

    /* S-Function Block: <S298>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s298_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_oq = ((real_T) delta) * 0.000001;
    }

    /* Switch: '<S298>/Switch' incorporates:
     *  Constant: '<S298>/Constant'
     *  Logic: '<S288>/Logical Operator5'
     *  S-Function (motohawk_sfun_data_read): '<S298>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S298>/motohawk_delta_time'
     *  Sum: '<S298>/Sum'
     */
    if (rtb_AboveRich && rtb_RelationalOperator3_bp && rtb_LogicalOperator1_a) {
      rtb_Switch_o = rtb_motohawk_delta_time_oq + O2RichTimer_DataStore();
    } else {
      rtb_Switch_o = 0.0;
    }

    /* End of Switch: '<S298>/Switch' */

    /* Switch: '<S288>/Switch1' */
    if (rtb_LogicalOperator6_b) {
      BaseEngineController_LS_B.s288_Switch1 = rtb_Product6_m;
    } else {
      BaseEngineController_LS_B.s288_Switch1 = rtb_Switch_o;
    }

    /* End of Switch: '<S288>/Switch1' */
    /* RelationalOperator: '<S288>/LT2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S288>/motohawk_calibration1'
     */
    rtb_LT2 = ((BaseEngineController_LS_B.s288_Switch1 >=
                (O2RichTimeThresh_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S288>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: O2FailedRich */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(93, rtb_LT2);
      UpdateFault(93);
    }

    /* UnitDelay: '<S288>/Unit Delay2' */
    rtb_Product6_m = BaseEngineController_LS_DWork.s288_UnitDelay2_DSTATE;

    /* Logic: '<S288>/Logical Operator2' incorporates:
     *  Logic: '<S288>/Logical Operator1'
     *  Logic: '<S288>/Logical Operator3'
     */
    rtb_LogicalOperator2_ig = ((!rtb_LogicalOperator2_ig) && (!rtb_AboveRich));

    /* Logic: '<S288>/Logical Operator11' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S288>/motohawk_data_read'
     */
    rtb_LogicalOperator6_b = (rtb_LogicalOperator2_ig &&
      DisableO2FaultAction_DataStore());

    /* S-Function Block: <S297>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s297_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_ad = ((real_T) delta) * 0.000001;
    }

    /* Switch: '<S297>/Switch' incorporates:
     *  Constant: '<S297>/Constant'
     *  Logic: '<S288>/Logical Operator8'
     *  S-Function (motohawk_sfun_data_read): '<S297>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S297>/motohawk_delta_time'
     *  Sum: '<S297>/Sum'
     */
    if (rtb_LogicalOperator2_ig && rtb_RelationalOperator3_bp &&
        rtb_LogicalOperator1_a) {
      rtb_Switch1_f = rtb_motohawk_delta_time_ad + O2ActiveTimer_DataStore();
    } else {
      rtb_Switch1_f = 0.0;
    }

    /* End of Switch: '<S297>/Switch' */

    /* Switch: '<S288>/Switch4' */
    if (rtb_LogicalOperator6_b) {
      BaseEngineController_LS_B.s288_Switch4 = rtb_Product6_m;
    } else {
      BaseEngineController_LS_B.s288_Switch4 = rtb_Switch1_f;
    }

    /* End of Switch: '<S288>/Switch4' */
    /* RelationalOperator: '<S288>/LT4' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S288>/motohawk_calibration3'
     */
    rtb_LT4 = ((BaseEngineController_LS_B.s288_Switch4 >=
                (O2ActiveTimeThresh_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S288>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: O2NotActive */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(94, rtb_LT4);
      UpdateFault(94);
    }

    /* Saturate: '<S296>/Saturation' */
    rtb_Saturation_nb = rtb_DataTypeConversion1_e >= 16000.0 ? 16000.0 :
      rtb_DataTypeConversion1_e <= 0.0 ? 0.0 : rtb_DataTypeConversion1_e;

    /* S-Function (motohawk_sfun_data_write): '<S296>/motohawk_data_write' */
    /* Write to Data Storage as scalar: O2LeanTimer */
    {
      O2LeanTimer_DataStore() = rtb_Saturation_nb;
    }

    /* Saturate: '<S297>/Saturation' */
    rtb_Saturation_mr = rtb_Switch1_f >= 16000.0 ? 16000.0 : rtb_Switch1_f <=
      0.0 ? 0.0 : rtb_Switch1_f;

    /* S-Function (motohawk_sfun_data_write): '<S297>/motohawk_data_write' */
    /* Write to Data Storage as scalar: O2ActiveTimer */
    {
      O2ActiveTimer_DataStore() = rtb_Saturation_mr;
    }

    /* Saturate: '<S298>/Saturation' */
    rtb_Saturation_c3 = rtb_Switch_o >= 16000.0 ? 16000.0 : rtb_Switch_o <= 0.0 ?
      0.0 : rtb_Switch_o;

    /* S-Function (motohawk_sfun_data_write): '<S298>/motohawk_data_write' */
    /* Write to Data Storage as scalar: O2RichTimer */
    {
      O2RichTimer_DataStore() = rtb_Saturation_c3;
    }

    /* InitialCondition: '<S284>/Multiply by 1.0 if not yet enabled' */
    if (BaseEngineController_LS_DWork.s284_Multiplyby10ifnotyetenabled_FirstOutputTime)
    {
      BaseEngineController_LS_DWork.s284_Multiplyby10ifnotyetenabled_FirstOutputTime
        = FALSE;
      rtb_Product7_i = 1.0;
    }

    /* End of InitialCondition: '<S284>/Multiply by 1.0 if not yet enabled' */

    /* Update for UnitDelay: '<S295>/Unit Delay' */
    BaseEngineController_LS_DWork.s295_UnitDelay_DSTATE = rtb_Switch1_mj;

    /* Update for UnitDelay: '<S292>/Unit Delay' incorporates:
     *  MinMax: '<S294>/MinMax1'
     */
    BaseEngineController_LS_DWork.s292_UnitDelay_DSTATE = u;

    /* Update for UnitDelay: '<S291>/Unit Delay' */
    BaseEngineController_LS_DWork.s291_UnitDelay_DSTATE = rtb_Product5_j;

    /* Update for UnitDelay: '<S288>/Unit Delay1' */
    BaseEngineController_LS_DWork.s288_UnitDelay1_DSTATE =
      BaseEngineController_LS_B.s288_Switch3;

    /* Update for UnitDelay: '<S288>/Unit Delay' */
    BaseEngineController_LS_DWork.s288_UnitDelay_DSTATE =
      BaseEngineController_LS_B.s288_Switch1;

    /* Update for UnitDelay: '<S288>/Unit Delay2' */
    BaseEngineController_LS_DWork.s288_UnitDelay2_DSTATE =
      BaseEngineController_LS_B.s288_Switch4;

    /* End of Outputs for SubSystem: '<S154>/O2 PID Controller' */
    /* Switch: '<S154>/Switch' incorporates:
     *  Constant: '<S154>/Constant'
     *  Logic: '<S154>/Logical Operator2'
     *  S-Function (motohawk_sfun_calibration): '<S154>/motohawk_calibration'
     */
    if ((((int8_T)(O2DisablmentMult_DataStore())) != 0) &&
        BaseEngineController_LS_B.s282_LogicalOperator2) {
      BaseEngineController_LS_B.s154_O2FuelMult = rtb_Product7_i;
    } else {
      BaseEngineController_LS_B.s154_O2FuelMult = 1.0;
    }

    /* End of Switch: '<S154>/Switch' */

    /* S-Function (motohawk_sfun_probe): '<S282>/motohawk_probe9' */
    (O2Calibration_DataStore()) = (O2ControlEnable_DataStore());

    /* S-Function Block: <S154>/motohawk_prelookup13 */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (O2ITermIn_DataStore()) = BaseEngineController_LS_B.s292_Switch1;
      (O2ITermIdx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_LS_B.s292_Switch1, (O2ITermIdxArr_DataStore()), 9,
         (O2ITermIdx_DataStore()));
      rtb_ITermIdx = (O2ITermIdx_DataStore());
    }

    /* End of Outputs for SubSystem: '<S136>/O2 Control' */

    /* Outputs for Atomic SubSystem: '<S136>/Fuel System Manager' */

    /* S-Function Block: <S210>/motohawk_prelookup */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (DesAFRatioIn_DataStore()) = BaseEngineController_LS_B.s522_Merge;
      (DesAFRatioIdx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_LS_B.s522_Merge, (DesAFRatioIdxArr_DataStore()),
         11, (DesAFRatioIdx_DataStore()));
      rtb_motohawk_prelookup_hf = (DesAFRatioIdx_DataStore());
    }

    /* S-Function Block: <S210>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      BaseEngineController_LS_B.s210_motohawk_interpolation_1d =
        TableInterpolation1D_real_T(rtb_motohawk_prelookup_hf, (real_T *)
        ((DesAFRatioTbl_DataStore())), 11);
      (DesAFRatio_DataStore()) =
        BaseEngineController_LS_B.s210_motohawk_interpolation_1d;
    }

    /* Product: '<S208>/Fuel Flow = Mass Airflow * Equivalence Ratio // Air-to-fuel Ratio' */
    BaseEngineController_LS_B.s208_FuelFlowMassAirflowEquivalenceRatioAirtofuelRatio
      = BaseEngineController_LS_B.s374_MultiportSwitch * rtb_DesiredLambda_idx /
      BaseEngineController_LS_B.s210_motohawk_interpolation_1d;

    /* Product: '<S205>/Per-Cylinder Mass Flow Rate' incorporates:
     *  DataTypeConversion: '<S205>/Data Type Conversion'
     *  S-Function (motohawk_sfun_data_read): '<S205>/Number of Combustion Events Per Revolution'
     */
    BaseEngineController_LS_B.s205_PerCylinderMassFlowRate =
      BaseEngineController_LS_B.s208_FuelFlowMassAirflowEquivalenceRatioAirtofuelRatio
      / (real_T)((uint8_T)CombEventsPerRev_DataStore());

    /* Product: '<S205>/Apply Multipliers for O2, Knock Control, and Enrichment1' */
    BaseEngineController_LS_B.s205_ApplyMultipliersforO2KnockControlandEnrichment1
      = BaseEngineController_LS_B.s205_PerCylinderMassFlowRate *
      BaseEngineController_LS_B.s154_O2FuelMult;

    /* Outputs for Atomic SubSystem: '<S150>/Injector Manager' */

    /* Outputs for Enabled SubSystem: '<S206>/Delta TPS Transient Fueling' incorporates:
     *  EnablePort: '<S211>/Enable'
     */
    /* S-Function (motohawk_sfun_calibration): '<S206>/motohawk_calibration1' */
    if ((DeltaTPSFuelingEnable_DataStore())) {
      if (!BaseEngineController_LS_DWork.s206_DeltaTPSTransientFueling_MODE) {
        /* S-Function Block: <S216>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_LS_DWork.s216_motohawk_delta_time_DWORK1 = now -
            Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }

        /* InitializeConditions for UnitDelay: '<S219>/Unit Delay' */
        BaseEngineController_LS_DWork.s219_UnitDelay_DSTATE = 0.0;

        /* S-Function Block: <S215>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_LS_DWork.s215_motohawk_delta_time_DWORK1 = now -
            Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }

        /* InitializeConditions for UnitDelay: '<S218>/Unit Delay' */
        BaseEngineController_LS_DWork.s218_UnitDelay_DSTATE = 0.0;
        BaseEngineController_LS_DWork.s206_DeltaTPSTransientFueling_MODE = TRUE;
      }

      /* S-Function Block: <S216>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s216_motohawk_delta_time_DWORK1, NULL);
        rtb_Product_mq = ((real_T) delta) * 0.000001;
      }

      /* Product: '<S216>/Product' incorporates:
       *  MinMax: '<S216>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S216>/motohawk_calibration'
       */
      rtb_Product_mq /= (rtb_Product_mq >= (DeltaMAP_FiltConst_DataStore())) ||
        rtIsNaN((DeltaMAP_FiltConst_DataStore())) ? rtb_Product_mq :
        (DeltaMAP_FiltConst_DataStore());

      /* Sum: '<S219>/Sum1' incorporates:
       *  Constant: '<S219>/Constant'
       *  Product: '<S219>/Product'
       *  Product: '<S219>/Product1'
       *  Sum: '<S219>/Sum'
       *  UnitDelay: '<S219>/Unit Delay'
       */
      BaseEngineController_LS_B.s219_Sum1 = (1.0 - rtb_Product_mq) *
        BaseEngineController_LS_DWork.s219_UnitDelay_DSTATE +
        BaseEngineController_LS_B.s543_Merge * rtb_Product_mq;

      /* Sum: '<S211>/Sum1' */
      BaseEngineController_LS_B.s211_Sum1 = BaseEngineController_LS_B.s543_Merge
        - BaseEngineController_LS_B.s219_Sum1;

      /* S-Function Block: <S215>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s215_motohawk_delta_time_DWORK1, NULL);
        rtb_Product_mq = ((real_T) delta) * 0.000001;
      }

      /* Product: '<S215>/Product' incorporates:
       *  MinMax: '<S215>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S215>/motohawk_calibration'
       */
      rtb_Product_mq /= (rtb_Product_mq >= (DeltaTPS_FiltConst_DataStore())) ||
        rtIsNaN((DeltaTPS_FiltConst_DataStore())) ? rtb_Product_mq :
        (DeltaTPS_FiltConst_DataStore());

      /* Sum: '<S218>/Sum1' incorporates:
       *  Constant: '<S218>/Constant'
       *  Product: '<S218>/Product'
       *  Product: '<S218>/Product1'
       *  Sum: '<S218>/Sum'
       *  UnitDelay: '<S218>/Unit Delay'
       */
      BaseEngineController_LS_B.s218_Sum1 = (1.0 - rtb_Product_mq) *
        BaseEngineController_LS_DWork.s218_UnitDelay_DSTATE +
        BaseEngineController_LS_B.s415_Switch2 * rtb_Product_mq;

      /* Sum: '<S211>/Sum' */
      BaseEngineController_LS_B.s211_Sum =
        BaseEngineController_LS_B.s415_Switch2 -
        BaseEngineController_LS_B.s218_Sum1;

      /* S-Function Block: <S211>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (MAF09In_DataStore()) = BaseEngineController_LS_B.s374_MultiportSwitch;
        (MAF09Idx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_LS_B.s374_MultiportSwitch,
           (MAF09IdxArr_DataStore()), 9, (MAF09Idx_DataStore()));
        rtb_motohawk_prelookup_ag = (MAF09Idx_DataStore());
      }

      /* S-Function Block: <S211>/motohawk_prelookup3 */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (DeltaMAP17In_DataStore()) = BaseEngineController_LS_B.s211_Sum1;
        (DeltaMAP17Idx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_LS_B.s211_Sum1, (DeltaMAP17IdxArr_DataStore()),
           17, (DeltaMAP17Idx_DataStore()));
        rtb_motohawk_prelookup3 = (DeltaMAP17Idx_DataStore());
      }

      /* S-Function Block: <S211>/motohawk_interpolation_2d1 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_motohawk_interpolation_2d1_a = TableInterpolation2D_real_T
          (rtb_motohawk_prelookup_ag, rtb_motohawk_prelookup3, (real_T *)
           ((DeltaMAP_MultMap_DataStore())), 9, 17);
        (DeltaMAP_Mult_DataStore()) = rtb_motohawk_interpolation_2d1_a;
      }

      /* S-Function Block: <S211>/motohawk_prelookup1 */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (DeltaTPS17In_DataStore()) = BaseEngineController_LS_B.s211_Sum;
        (DeltaTPS17Idx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_LS_B.s211_Sum, (DeltaTPS17IdxArr_DataStore()),
           17, (DeltaTPS17Idx_DataStore()));
        rtb_motohawk_prelookup1_jq = (DeltaTPS17Idx_DataStore());
      }

      /* S-Function Block: <S211>/motohawk_interpolation_2d2 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_motohawk_interpolation_2d2_a = TableInterpolation2D_real_T
          (rtb_motohawk_prelookup_ag, rtb_motohawk_prelookup1_jq, (real_T *)
           ((DeltaTPS_MultMap_DataStore())), 9, 17);
        (DeltaTPS_Mult_DataStore()) = rtb_motohawk_interpolation_2d2_a;
      }

      /* RelationalOperator: '<S213>/RelOp' incorporates:
       *  Constant: '<S213>/Constant'
       *  Logic: '<S211>/Logical Operator'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S211>/motohawk_interpolation_2d1'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S211>/motohawk_interpolation_2d2'
       *  S-Function (motohawk_sfun_prelookup): '<S211>/motohawk_prelookup'
       *  S-Function (motohawk_sfun_prelookup): '<S211>/motohawk_prelookup1'
       *  S-Function (motohawk_sfun_prelookup): '<S211>/motohawk_prelookup3'
       */
      rtb_LogicalOperator6_b = !((rtb_motohawk_interpolation_2d1_a != 0.0) ||
        (rtb_motohawk_interpolation_2d2_a != 0.0));

      /* Outputs for Enabled SubSystem: '<S211>/ECT Transient Fueling' incorporates:
       *  EnablePort: '<S214>/Enable'
       */
      if (rtb_LogicalOperator6_b) {
        if (!BaseEngineController_LS_DWork.s211_ECTTransientFueling_MODE) {
          BaseEngineController_LS_DWork.s211_ECTTransientFueling_MODE = TRUE;
        }

        /* S-Function Block: <S214>/motohawk_interpolation_1d */
        {
          extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T
            *tbl_data, uint32_T sz);
          BaseEngineController_LS_B.s214_motohawk_interpolation_1d =
            TableInterpolation1D_real_T
            (BaseEngineController_LS_B.s396_motohawk_prelookup, (real_T *)
             ((ECTTransFuelMultTbl_DataStore())), 5);
          (ECTTransFuelMult_DataStore()) =
            BaseEngineController_LS_B.s214_motohawk_interpolation_1d;
        }
      } else {
        if (BaseEngineController_LS_DWork.s211_ECTTransientFueling_MODE) {
          /* Disable for Outport: '<S214>/Mult' */
          BaseEngineController_LS_B.s214_motohawk_interpolation_1d = 1.0;
          BaseEngineController_LS_DWork.s211_ECTTransientFueling_MODE = FALSE;
        }
      }

      /* End of Outputs for SubSystem: '<S211>/ECT Transient Fueling' */

      /* Outputs for Enabled SubSystem: '<S211>/OXY Transient Fueling' incorporates:
       *  EnablePort: '<S217>/Enable'
       */
      if (rtb_LogicalOperator6_b) {
        if (!BaseEngineController_LS_DWork.s211_OXYTransientFueling_MODE) {
          BaseEngineController_LS_DWork.s211_OXYTransientFueling_MODE = TRUE;
        }

        /* S-Function Block: <S217>/motohawk_interpolation_1d */
        {
          extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T
            *tbl_data, uint32_T sz);
          BaseEngineController_LS_B.s217_motohawk_interpolation_1d =
            TableInterpolation1D_real_T(rtb_motohawk_prelookup_e1, (real_T *)
            ((OXYTransFuelMultTbl_DataStore())), 5);
          (OXYTransFuelMult_DataStore()) =
            BaseEngineController_LS_B.s217_motohawk_interpolation_1d;
        }
      } else {
        if (BaseEngineController_LS_DWork.s211_OXYTransientFueling_MODE) {
          /* Disable for Outport: '<S217>/Mult' */
          BaseEngineController_LS_B.s217_motohawk_interpolation_1d = 1.0;
          BaseEngineController_LS_DWork.s211_OXYTransientFueling_MODE = FALSE;
        }
      }

      /* End of Outputs for SubSystem: '<S211>/OXY Transient Fueling' */

      /* Product: '<S211>/Product1' incorporates:
       *  S-Function (motohawk_sfun_interpolation_2d): '<S211>/motohawk_interpolation_2d1'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S211>/motohawk_interpolation_2d2'
       *  S-Function (motohawk_sfun_prelookup): '<S211>/motohawk_prelookup'
       *  S-Function (motohawk_sfun_prelookup): '<S211>/motohawk_prelookup1'
       *  S-Function (motohawk_sfun_prelookup): '<S211>/motohawk_prelookup3'
       */
      BaseEngineController_LS_B.s211_Product1 = rtb_motohawk_interpolation_2d2_a
        * BaseEngineController_LS_B.s214_motohawk_interpolation_1d *
        rtb_motohawk_interpolation_2d1_a *
        BaseEngineController_LS_B.s217_motohawk_interpolation_1d;

      /* Update for UnitDelay: '<S219>/Unit Delay' */
      BaseEngineController_LS_DWork.s219_UnitDelay_DSTATE =
        BaseEngineController_LS_B.s219_Sum1;

      /* Update for UnitDelay: '<S218>/Unit Delay' */
      BaseEngineController_LS_DWork.s218_UnitDelay_DSTATE =
        BaseEngineController_LS_B.s218_Sum1;
    } else {
      if (BaseEngineController_LS_DWork.s206_DeltaTPSTransientFueling_MODE) {
        /* Disable for Enabled SubSystem: '<S211>/ECT Transient Fueling' */
        /* Disable for Outport: '<S214>/Mult' */
        BaseEngineController_LS_B.s214_motohawk_interpolation_1d = 1.0;
        BaseEngineController_LS_DWork.s211_ECTTransientFueling_MODE = FALSE;

        /* End of Disable for SubSystem: '<S211>/ECT Transient Fueling' */

        /* Disable for Enabled SubSystem: '<S211>/OXY Transient Fueling' */
        /* Disable for Outport: '<S217>/Mult' */
        BaseEngineController_LS_B.s217_motohawk_interpolation_1d = 1.0;
        BaseEngineController_LS_DWork.s211_OXYTransientFueling_MODE = FALSE;

        /* End of Disable for SubSystem: '<S211>/OXY Transient Fueling' */

        /* Disable for Outport: '<S211>/DeltaTPSMult' */
        BaseEngineController_LS_B.s211_Product1 = 1.0;
        BaseEngineController_LS_DWork.s206_DeltaTPSTransientFueling_MODE = FALSE;
      }
    }

    /* End of S-Function (motohawk_sfun_calibration): '<S206>/motohawk_calibration1' */
    /* End of Outputs for SubSystem: '<S206>/Delta TPS Transient Fueling' */

    /* Product: '<S206>/Divide' */
    rtb_DataTypeConversion1_e = BaseEngineController_LS_B.s211_Product1 *
      BaseEngineController_LS_B.s205_ApplyMultipliersforO2KnockControlandEnrichment1;

    /* S-Function Block: <S206>/Make-Up Pulse End of Injection Timing1 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_EOI = TableInterpolation2D_real_T
        (BaseEngineController_LS_B.s398_motohawk_prelookup1,
         BaseEngineController_LS_B.s400_motohawk_prelookup1, (real_T *)
         ((MakeUpEOIMap_DataStore())), 9, 9);
      (MakeUpEOI_DataStore()) = rtb_EOI;
    }

    /* Outputs for Enabled SubSystem: '<S212>/Multiply and Divide, avoiding divde by zero' incorporates:
     *  EnablePort: '<S220>/Enable'
     */
    /* RelationalOperator: '<S221>/RelOp' incorporates:
     *  Constant: '<S221>/Constant'
     */
    if (BaseEngineController_LS_B.s500_Sum1 != 0.0) {
      /* Product: '<S220>/charge mass' incorporates:
       *  Constant: '<S212>/Units Equivalency Factor'
       */
      BaseEngineController_LS_B.s220_chargemass = rtb_DataTypeConversion1_e *
        60000.0 / BaseEngineController_LS_B.s500_Sum1;
    }

    /* End of RelationalOperator: '<S221>/RelOp' */
    /* End of Outputs for SubSystem: '<S212>/Multiply and Divide, avoiding divde by zero' */
    /* S-Function Block: <S206>/Primary Pulse Injection Timing */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_PrimaryPulseInjectionTiming = TableInterpolation2D_real_T
        (BaseEngineController_LS_B.s398_motohawk_prelookup1,
         BaseEngineController_LS_B.s400_motohawk_prelookup1, (real_T *)
         ((PrimarySOIMap_DataStore())), 9, 9);
      (PrimarySOI_DataStore()) = rtb_PrimaryPulseInjectionTiming;
    }

    /* End of Outputs for SubSystem: '<S150>/Injector Manager' */

    /* Outputs for Atomic SubSystem: '<S150>/O2 Fuel Adapt' */

    /* S-Function Block: <S207>/motohawk_interpolation_1d1 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d1_m = TableInterpolation1D_real_T
        (rtb_ITermIdx, (real_T *) ((FuelAdaptGainTbl_DataStore())), 9);
      (FuelAdaptGain_DataStore()) = rtb_motohawk_interpolation_1d1_m;
    }

    /* Product: '<S207>/Product0' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S207>/motohawk_interpolation_1d1'
     *  S-Function (motohawk_sfun_prelookup): '<S154>/motohawk_prelookup13'
     */
    rtb_DataTypeConversion1_e = BaseEngineController_LS_B.s292_Switch1 *
      rtb_motohawk_interpolation_1d1_m;

    /* MinMax: '<S227>/MinMax' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S224>/motohawk_calibration'
     */
    rtb_Abs_k = (rtb_DataTypeConversion1_e >= (FuelAdaptErrorLwrLim_DataStore()))
      || rtIsNaN((FuelAdaptErrorLwrLim_DataStore())) ? rtb_DataTypeConversion1_e
      : (FuelAdaptErrorLwrLim_DataStore());

    /* MinMax: '<S227>/MinMax1' incorporates:
     *  MinMax: '<S227>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S224>/motohawk_calibration1'
     */
    BaseEngineController_LS_B.s227_MinMax1 = (rtb_Abs_k <=
      (FuelAdaptErrorUprLim_DataStore())) || rtIsNaN
      ((FuelAdaptErrorUprLim_DataStore())) ? rtb_Abs_k :
      (FuelAdaptErrorUprLim_DataStore());

    /* S-Function Block: <S207>/motohawk_interpolation_2d2 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_motohawk_interpolation_2d2 = TableInterpolation2D_real_T
        (BaseEngineController_LS_B.s398_motohawk_prelookup1,
         BaseEngineController_LS_B.s400_motohawk_prelookup1, (real_T *)
         ((FuelFlowCompAdaptMap_DataStore())), 9, 9);
      (FuelFlowCompAdapt_DataStore()) = rtb_motohawk_interpolation_2d2;
    }

    /* Outputs for Atomic SubSystem: '<S207>/WarmUp Disable' */
    /* Outputs for Atomic SubSystem: '<S136>/O2 Control' */
    /* Logic: '<S225>/Logical Operator' incorporates:
     *  Constant: '<S225>/Constant'
     *  Inport: '<S154>/Desired_Equiv'
     *  MinMax: '<S225>/MinMax'
     *  RelationalOperator: '<S225>/Relational Operator'
     *  Sum: '<S225>/Sum'
     */
    BaseEngineController_LS_B.s225_LogicalOperator = !(((rtb_DesiredLambda_idx_0
      >= rtb_Switch_c) || rtIsNaN(rtb_Switch_c) ? rtb_DesiredLambda_idx_0 :
      rtb_Switch_c) - rtb_DesiredLambda_idx > 0.01);

    /* End of Outputs for SubSystem: '<S136>/O2 Control' */

    /* End of Outputs for SubSystem: '<S207>/WarmUp Disable' */

    /* Outputs for Atomic SubSystem: '<S207>/O2 Control Enable Delay' */

    /* S-Function Block: <S226>/motohawk_delta_time */
    rtb_motohawk_delta_time_m3 = 0.005;

    /* Switch: '<S226>/Switch' incorporates:
     *  Constant: '<S226>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S226>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S226>/motohawk_delta_time'
     *  Sum: '<S226>/Sum'
     */
    if (BaseEngineController_LS_B.s282_LogicalOperator2) {
      rtb_DataTypeConversion1_e = rtb_motohawk_delta_time_m3 +
        LiqDelayTime_DataStore();
    } else {
      rtb_DataTypeConversion1_e = 0.0;
    }

    /* End of Switch: '<S226>/Switch' */
    /* RelationalOperator: '<S223>/Relational Operator' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S223>/motohawk_calibration1'
     */
    rtb_LogicalOperator6_b = (rtb_DataTypeConversion1_e >
      (O2CtrlAdaptDelayTime_DataStore()));

    /* Saturate: '<S226>/Saturation' */
    rtb_Saturation_gs = rtb_DataTypeConversion1_e >= 16000.0 ? 16000.0 :
      rtb_DataTypeConversion1_e <= 0.0 ? 0.0 : rtb_DataTypeConversion1_e;

    /* S-Function (motohawk_sfun_data_write): '<S226>/motohawk_data_write' */
    /* Write to Data Storage as scalar: LiqDelayTime */
    {
      LiqDelayTime_DataStore() = rtb_Saturation_gs;
    }

    /* End of Outputs for SubSystem: '<S207>/O2 Control Enable Delay' */

    /* Abs: '<S207>/Abs' */
    rtb_DataTypeConversion1_e = fabs(BaseEngineController_LS_B.s292_Switch1);

    /* Logic: '<S207>/Logical Operator2' incorporates:
     *  RelationalOperator: '<S207>/Relational Operator'
     *  S-Function (motohawk_sfun_calibration): '<S207>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S207>/motohawk_calibration1'
     *  S-Function (motohawk_sfun_calibration): '<S207>/motohawk_calibration2'
     */
    BaseEngineController_LS_B.s207_LogicalOperator2 =
      (((FuelAdaptEnable_DataStore()) && (AdaptEnable_DataStore()) &&
        BaseEngineController_LS_B.s225_LogicalOperator && rtb_LogicalOperator6_b
        && (rtb_DataTypeConversion1_e <= (FuelAdaptDelta_DataStore()))));

    /* Outputs for Enabled SubSystem: '<S207>/Adapt FuelFlowComp Map' incorporates:
     *  EnablePort: '<S222>/Enable'
     */
    if (BaseEngineController_LS_B.s207_LogicalOperator2) {
      /* S-Function Block: <S222>/motohawk_adapt_table */
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
              BaseEngineController_LS_B.s227_MinMax1;
            if (_new > (FuelFlowCompMaxValue_DataStore()))
              _new = (FuelFlowCompMaxValue_DataStore());
            if (_new < (FuelFlowCompMinValue_DataStore()))
              _new = (FuelFlowCompMinValue_DataStore());
            (FuelFlowCompAdaptMap_DataStore())[_row][_col] = _new;
          } else if (_col_frac == 3) {
            _new = (FuelFlowCompAdaptMap_DataStore())[_row][_col+1] +
              BaseEngineController_LS_B.s227_MinMax1;
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

      /* RelationalOperator: '<S222>/Relational Operator2' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S222>/motohawk_calibration2'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S207>/motohawk_interpolation_2d2'
       */
      rtb_RelationalOperator2_pk = ((rtb_motohawk_interpolation_2d2 >=
        (FuelFlowCompMaxValue_DataStore())));

      /* S-Function (motohawk_sfun_fault_def): '<S222>/motohawk_fault_def' */

      /* Set Fault Suspected Status: FuelAdaptRangeHi */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(56, rtb_RelationalOperator2_pk);
        UpdateFault(56);
      }

      /* RelationalOperator: '<S222>/Relational Operator1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S222>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S207>/motohawk_interpolation_2d2'
       */
      rtb_RelationalOperator1_nn = ((rtb_motohawk_interpolation_2d2 <=
        (FuelFlowCompMinValue_DataStore())));

      /* S-Function (motohawk_sfun_fault_def): '<S222>/motohawk_fault_def1' */

      /* Set Fault Suspected Status: FuelAdaptRangeLow */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(57, rtb_RelationalOperator1_nn);
        UpdateFault(57);
      }
    }

    /* End of Outputs for SubSystem: '<S207>/Adapt FuelFlowComp Map' */

    /* S-Function Block: <S207>/motohawk_interpolation_2d1 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_motohawk_interpolation_2d1_p = TableInterpolation2D_real_T
        (BaseEngineController_LS_B.s398_motohawk_prelookup1,
         BaseEngineController_LS_B.s400_motohawk_prelookup1, (real_T *)
         ((FuelFlowCompMap_DataStore())), 9, 9);
      (FuelFlowComp_DataStore()) = rtb_motohawk_interpolation_2d1_p;
    }

    /* Product: '<S207>/Divide' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S207>/motohawk_interpolation_2d1'
     *  S-Function (motohawk_sfun_interpolation_2d): '<S207>/motohawk_interpolation_2d2'
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
    if (!BaseEngineController_LS_B.s264_RelOp) {
      rtb_Switch_o = 0.0;
    } else {
      rtb_Switch_o =
        BaseEngineController_LS_B.s254_DontallowsetpointtoeverdropbelowtheTargetRPM
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
      BaseEngineController_LS_B.s135_IACS = 100.0 - rtb_Switch_o;
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
      BaseEngineController_LS_B.s301_Switch;

    /* ZeroOrderHold: '<S136>/Zero-Order Hold16' incorporates:
     *  Constant: '<S136>/ON1'
     */
    BaseEngineController_LS_B.s135_FUELP = TRUE;

    /* ZeroOrderHold: '<S136>/Zero-Order Hold17' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S206>/Primary Pulse Injection Timing'
     */
    BaseEngineController_LS_B.s135_SOI = rtb_PrimaryPulseInjectionTiming;

    /* ZeroOrderHold: '<S136>/Zero-Order Hold18' */
    BaseEngineController_LS_B.s135_Throttle =
      BaseEngineController_LS_B.s145_MultiportSwitch;

    /* ZeroOrderHold: '<S136>/Zero-Order Hold2' */
    BaseEngineController_LS_B.s135_IACP = rtb_Switch_o;

    /* ZeroOrderHold: '<S136>/Zero-Order Hold3' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S206>/Make-Up Pulse End of Injection Timing1'
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
        y0[i1] = BaseEngineController_LS_B.s220_chargemass;
      }
    }
  } else {
    if (BaseEngineController_LS_DWork.s15_Run_MODE) {
      /* Level2 S-Function Block: '<S136>/motohawk_trigger1' (motohawk_sfun_trigger) */
      /* Disable for Trigger_FGND_5XRTI_PERIODIC_4914p0005 */
      BaseEngineController_LS_DWork.s136_motohawk_trigger1_DWORK1 = 0;

      /* Disable for Atomic SubSystem: '<S136>/Fuel System Manager' */
      /* Disable for Atomic SubSystem: '<S150>/Injector Manager' */
      /* Disable for Enabled SubSystem: '<S206>/Delta TPS Transient Fueling' */
      /* Disable for Enabled SubSystem: '<S211>/ECT Transient Fueling' */
      /* Disable for Outport: '<S214>/Mult' */
      BaseEngineController_LS_B.s214_motohawk_interpolation_1d = 1.0;
      BaseEngineController_LS_DWork.s211_ECTTransientFueling_MODE = FALSE;

      /* End of Disable for SubSystem: '<S211>/ECT Transient Fueling' */

      /* Disable for Enabled SubSystem: '<S211>/OXY Transient Fueling' */
      /* Disable for Outport: '<S217>/Mult' */
      BaseEngineController_LS_B.s217_motohawk_interpolation_1d = 1.0;
      BaseEngineController_LS_DWork.s211_OXYTransientFueling_MODE = FALSE;

      /* End of Disable for SubSystem: '<S211>/OXY Transient Fueling' */

      /* Disable for Outport: '<S211>/DeltaTPSMult' */
      BaseEngineController_LS_B.s211_Product1 = 1.0;
      BaseEngineController_LS_DWork.s206_DeltaTPSTransientFueling_MODE = FALSE;

      /* End of Disable for SubSystem: '<S206>/Delta TPS Transient Fueling' */
      /* End of Disable for SubSystem: '<S150>/Injector Manager' */
      /* End of Disable for SubSystem: '<S136>/Fuel System Manager' */
      BaseEngineController_LS_DWork.s15_Run_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S15>/Run' */

  /* If: '<S806>/If' incorporates:
   *  Inport: '<S807>/In1'
   *  Inport: '<S808>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S806>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S806>/override_enable'
   */
  if ((AC_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S806>/NewValue' incorporates:
     *  ActionPort: '<S807>/Action Port'
     */
    rtb_LogicalOperator6_b = (AC_new_DataStore());

    /* End of Outputs for SubSystem: '<S806>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S806>/OldValue' incorporates:
     *  ActionPort: '<S808>/Action Port'
     */
    rtb_LogicalOperator6_b = BaseEngineController_LS_B.s135_AC;

    /* End of Outputs for SubSystem: '<S806>/OldValue' */
  }

  /* End of If: '<S806>/If' */

  /* Logic: '<S805>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S805>/0 = No Inversion 1 = Inversion'
   */
  BaseEngineController_LS_B.s805_LogicalOperator = rtb_LogicalOperator6_b ^
    (AC_Polarity_DataStore());

  /* S-Function (motohawk_sfun_send_canmsgs): '<S809>/Send CAN Messages' */
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
        if (BaseEngineController_LS_B.s500_Sum1 < 0.0000000000F) {
          tmp0 = (uint16_T)(0U);
        } else if (BaseEngineController_LS_B.s500_Sum1 > 25599.9370500000F) {
          tmp0 = (uint16_T)(65534U);
        } else {
          tmp0 = (uint16_T)(BaseEngineController_LS_B.s500_Sum1 * (2.5599672324F));
        }

        if (BaseEngineController_LS_B.s415_Switch2 < -50.0006912000F) {
          tmp1 = (int16_T)(-32768);
        } else if (BaseEngineController_LS_B.s415_Switch2 > 49.9991653000F) {
          tmp1 = (int16_T)(32767);
        } else {
          tmp1 = (int16_T)(BaseEngineController_LS_B.s415_Switch2 *
                           (655.3509404286F));
        }

        if (BaseEngineController_LS_B.s690_Merge < -128.0000000000F) {
          tmp2 = (int8_T)(-128);
        } else if (BaseEngineController_LS_B.s690_Merge > 127.0000000000F) {
          tmp2 = (int8_T)(127);
        } else {
          tmp2 = (int8_T)(BaseEngineController_LS_B.s690_Merge);
        }

        if (BaseEngineController_LS_B.s672_Merge < -128.0000000000F) {
          tmp3 = (int8_T)(-128);
        } else if (BaseEngineController_LS_B.s672_Merge > 127.0000000000F) {
          tmp3 = (int8_T)(127);
        } else {
          tmp3 = (int8_T)(BaseEngineController_LS_B.s672_Merge);
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

  /* Gain: '<S810>/Gain' */
  rtb_Gain = 1.60934 * BaseEngineController_LS_B.s477_Merge;

  /* MultiPortSwitch: '<S412>/Multiport Switch' incorporates:
   *  Constant: '<S412>/Constant1'
   *  MinMax: '<S412>/MinMax'
   */
  if (BaseEngineController_LS_B.s458_Merge == FALSE) {
    /* Product: '<S412>/Product6' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S412>/motohawk_calibration5'
     *  S-Function (motohawk_sfun_calibration): '<S412>/motohawk_calibration6'
     */
    rtb_DataTypeConversion1_e = (Gear6Ratio_DataStore()) * (FDR_DataStore());

    /* Product: '<S412>/Product' incorporates:
     *  Constant: '<S412>/Constant'
     *  S-Function (motohawk_sfun_calibration): '<S412>/motohawk_calibration7'
     */
    rtb_Switch_o = (TireRadius_DataStore()) * 0.00595 *
      BaseEngineController_LS_B.s500_Sum1;

    /* Abs: '<S412>/Abs5' incorporates:
     *  Product: '<S412>/Product12'
     *  Sum: '<S412>/Sum5'
     */
    rtb_DataTypeConversion1_e = fabs(rtb_Switch_o / rtb_DataTypeConversion1_e -
      BaseEngineController_LS_B.s477_Merge);

    /* Gain: '<S412>/Gain5' incorporates:
     *  RelationalOperator: '<S412>/M6'
     *  S-Function (motohawk_sfun_calibration): '<S412>/motohawk_calibration8'
     */
    rtb_Gain5 = (uint8_T)(rtb_DataTypeConversion1_e <= (GearMatchHyst_DataStore())
                          ? 192 : 0);

    /* Gain: '<S412>/Gain4' incorporates:
     *  Abs: '<S412>/Abs4'
     *  Product: '<S412>/Product11'
     *  Product: '<S412>/Product5'
     *  RelationalOperator: '<S412>/M5'
     *  S-Function (motohawk_sfun_calibration): '<S412>/motohawk_calibration4'
     *  S-Function (motohawk_sfun_calibration): '<S412>/motohawk_calibration6'
     *  S-Function (motohawk_sfun_calibration): '<S412>/motohawk_calibration8'
     *  Sum: '<S412>/Sum4'
     */
    rtb_Gain4 = (uint8_T)(fabs(rtb_Switch_o / ((Gear5Ratio_DataStore()) *
      (FDR_DataStore())) - BaseEngineController_LS_B.s477_Merge) <=
                          (GearMatchHyst_DataStore()) ? 160 : 0);

    /* Gain: '<S412>/Gain3' incorporates:
     *  Abs: '<S412>/Abs3'
     *  Product: '<S412>/Product10'
     *  Product: '<S412>/Product4'
     *  RelationalOperator: '<S412>/M4'
     *  S-Function (motohawk_sfun_calibration): '<S412>/motohawk_calibration3'
     *  S-Function (motohawk_sfun_calibration): '<S412>/motohawk_calibration6'
     *  S-Function (motohawk_sfun_calibration): '<S412>/motohawk_calibration8'
     *  Sum: '<S412>/Sum3'
     */
    rtb_Gain3_m = (uint8_T)((fabs(rtb_Switch_o / ((Gear4Ratio_DataStore()) *
      (FDR_DataStore())) - BaseEngineController_LS_B.s477_Merge) <=
      (GearMatchHyst_DataStore())) << 7);

    /* Gain: '<S412>/Gain2' incorporates:
     *  Abs: '<S412>/Abs2'
     *  Product: '<S412>/Product3'
     *  Product: '<S412>/Product9'
     *  RelationalOperator: '<S412>/M3'
     *  S-Function (motohawk_sfun_calibration): '<S412>/motohawk_calibration2'
     *  S-Function (motohawk_sfun_calibration): '<S412>/motohawk_calibration6'
     *  S-Function (motohawk_sfun_calibration): '<S412>/motohawk_calibration8'
     *  Sum: '<S412>/Sum2'
     */
    rtb_Gain2_m = (uint8_T)(fabs(rtb_Switch_o / ((Gear3Ratio_DataStore()) *
      (FDR_DataStore())) - BaseEngineController_LS_B.s477_Merge) <=
      (GearMatchHyst_DataStore()) ? 192 : 0);

    /* Gain: '<S412>/Gain1' incorporates:
     *  Abs: '<S412>/Abs1'
     *  Product: '<S412>/Product2'
     *  Product: '<S412>/Product8'
     *  RelationalOperator: '<S412>/M2'
     *  S-Function (motohawk_sfun_calibration): '<S412>/motohawk_calibration1'
     *  S-Function (motohawk_sfun_calibration): '<S412>/motohawk_calibration6'
     *  S-Function (motohawk_sfun_calibration): '<S412>/motohawk_calibration8'
     *  Sum: '<S412>/Sum1'
     */
    rtb_Gain1 = (uint8_T)((fabs(rtb_Switch_o / ((Gear2Ratio_DataStore()) *
      (FDR_DataStore())) - BaseEngineController_LS_B.s477_Merge) <=
      (GearMatchHyst_DataStore())) << 7);

    /* MinMax: '<S412>/MinMax' incorporates:
     *  Abs: '<S412>/Abs'
     *  Gain: '<S412>/Gain'
     *  Product: '<S412>/Product1'
     *  Product: '<S412>/Product7'
     *  RelationalOperator: '<S412>/M1'
     *  S-Function (motohawk_sfun_calibration): '<S412>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S412>/motohawk_calibration6'
     *  S-Function (motohawk_sfun_calibration): '<S412>/motohawk_calibration8'
     *  Sum: '<S412>/Sum'
     */
    maxV = ((fabs(rtb_Switch_o / ((Gear1Ratio_DataStore()) * (FDR_DataStore()))
                  - BaseEngineController_LS_B.s477_Merge) <=
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
    BaseEngineController_LS_B.s412_MultiportSwitch = ldexp((real_T)((uint32_T)
      maxV >= (uint32_T)i ? (uint32_T)maxV : (uint32_T)i), -5);
  } else {
    BaseEngineController_LS_B.s412_MultiportSwitch = 0.0;
  }

  /* End of MultiPortSwitch: '<S412>/Multiport Switch' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S810>/Send CAN Messages' */
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
        if (rtb_Merge_js < 0.5000000000F) {
          tmp0 = (uint8_T)(0U);
        } else if (rtb_Merge_js > 1.4960937500F) {
          tmp0 = (uint8_T)(255U);
        } else {
          tmp0 = (uint8_T)((rtb_Merge_js - (0.5000000000F)) * (256.0000000000F));
        }

        if (rtb_Merge_l52 < 0.5000000000F) {
          tmp1 = (uint8_T)(0U);
        } else if (rtb_Merge_l52 > 1.4960937500F) {
          tmp1 = (uint8_T)(255U);
        } else {
          tmp1 = (uint8_T)((rtb_Merge_l52 - (0.5000000000F)) * (256.0000000000F));
        }

        if (rtb_Gain < 0.0000000000F) {
          tmp2 = (uint16_T)(0U);
        } else if (rtb_Gain > 411.9857775000F) {
          tmp2 = (uint16_T)(65535U);
        } else {
          tmp2 = (uint16_T)(rtb_Gain * (159.0710252128F));
        }

        if (BaseEngineController_LS_B.s412_MultiportSwitch < 0.0000000000F) {
          tmp3 = (uint8_T)(0U);
        } else if (BaseEngineController_LS_B.s412_MultiportSwitch >
                   255.0000000000F) {
          tmp3 = (uint8_T)(255U);
        } else {
          tmp3 = (uint8_T)(BaseEngineController_LS_B.s412_MultiportSwitch);
        }

        if (BaseEngineController_LS_B.s135_SparkAdv < -17.0000000000F) {
          tmp4 = (uint8_T)(0U);
        } else if (BaseEngineController_LS_B.s135_SparkAdv > 72.6478000000F) {
          tmp4 = (uint8_T)(254U);
        } else {
          tmp4 = (uint8_T)((BaseEngineController_LS_B.s135_SparkAdv -
                            (-17.0000000000F)) * (2.8444646717F));
        }

        if (BaseEngineController_LS_B.s577_Merge < 0.0000000000F) {
          tmp5 = (uint16_T)(0U);
        } else if (BaseEngineController_LS_B.s577_Merge > 16.0888425000F) {
          tmp5 = (uint16_T)(65535U);
        } else {
          tmp5 = (uint16_T)(BaseEngineController_LS_B.s577_Merge *
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

  /* S-Function (motohawk_sfun_data_read): '<S811>/motohawk_data_read' */
  rtb_motohawk_data_read_i4 = VEFin_DataStore();

  /* S-Function (motohawk_sfun_data_read): '<S811>/motohawk_data_read1' */
  rtb_Switch_hp = BaseEquivRatio_DataStore();

  /* Math: '<S811>/Math Function' incorporates:
   *  Saturate: '<S811>/Saturation'
   *
   * About '<S811>/Math Function':
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
    rtb_RelationalOperator6_h0 = FALSE;
  } else {
    rtb_RelationalOperator6_h0 = BaseEngineController_LS_B.s135_FUELP;
  }

  /* End of Switch: '<S143>/Switch' */

  /* S-Function (motohawk_sfun_data_read): '<S811>/motohawk_data_read2' */
  rtb_motohawk_data_read2_l = O2CtrlMode_DataStore();

  /* S-Function (motohawk_sfun_fault_action): '<S811>/motohawk_fault_action'
   *
   * Regarding '<S811>/motohawk_fault_action':
     Get Fault Action Status: EngineProtectLED
   */
  {
    extern boolean_T GetFaultActionStatus(uint32_T action);
    rtb_motohawk_fault_action_o = GetFaultActionStatus(7);
  }

  /* S-Function (motohawk_sfun_fault_action): '<S811>/motohawk_fault_action1'
   *
   * Regarding '<S811>/motohawk_fault_action1':
     Get Fault Action Status: MIL_LED
   */
  {
    extern boolean_T GetFaultActionStatus(uint32_T action);
    rtb_motohawk_fault_action1_a = GetFaultActionStatus(10);
  }

  /* S-Function (motohawk_sfun_fault_status): '<S811>/motohawk_fault_status2'
   *
   * Regarding '<S811>/motohawk_fault_status2':
     Status : "Active"
   */
  {
    extern boolean_T IsFaultActive(uint32_T fault);
    rtb_motohawk_fault_status2_f2 = IsFaultActive(80);
  }

  /* S-Function (motohawk_sfun_fault_status): '<S811>/motohawk_fault_status1'
   *
   * Regarding '<S811>/motohawk_fault_status1':
     Status : "Active"
   */
  {
    extern boolean_T IsFaultActive(uint32_T fault);
    rtb_motohawk_fault_status1_ip = IsFaultActive(91);
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
  rtb_RelationalOperator5_fz = !BaseEngineController_LS_B.s488_Merge;

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
  if (rtb_RelationalOperator5_fz) {
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
  if (rtb_RelationalOperator5_fz) {
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
  if (rtb_RelationalOperator5_fz) {
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

  /* Sum: '<S811>/    ' incorporates:
   *  Sum: '<S811>/      '
   */
  rtb_Switch_kj = rtb_AND1[0];
  for (i = 0; i < 7; i++) {
    rtb_Switch_kj += (uint32_T)rtb_AND1[1 + i];
  }

  /* End of Sum: '<S811>/    ' */

  /* RelationalOperator: '<S819>/Compare' incorporates:
   *  Constant: '<S819>/Constant'
   *  Sum: '<S811>/    '
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

  /* Sum: '<S811>/      ' incorporates:
   *  Sum: '<S811>/    '
   */
  rtb_Switch_kj = BaseEngineController_LS_B.s22_LogicalOperator2[0];
  for (i = 0; i < 7; i++) {
    rtb_Switch_kj += (uint32_T)BaseEngineController_LS_B.s22_LogicalOperator2[1
      + i];
  }

  /* End of Sum: '<S811>/      ' */

  /* RelationalOperator: '<S820>/Compare' incorporates:
   *  Constant: '<S820>/Constant'
   *  Sum: '<S811>/      '
   */
  rtb_Compare_d = (((uint8_T)rtb_Switch_kj >= 1));

  /* RelationalOperator: '<S821>/Compare' incorporates:
   *  Constant: '<S821>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S811>/motohawk_data_read3'
   */
  rtb_Compare_g = ((((uint8_T)EncoderState_DataStore()) >= 3));

  /* S-Function (motohawk_sfun_fault_status): '<S811>/motohawk_fault_status3'
   *
   * Regarding '<S811>/motohawk_fault_status3':
     Status : "Active"
   */
  {
    extern boolean_T IsFaultActive(uint32_T fault);
    rtb_motohawk_fault_status3_g = IsFaultActive(99);
  }

  /* S-Function (motohawk_sfun_fault_status): '<S811>/motohawk_fault_status4'
   *
   * Regarding '<S811>/motohawk_fault_status4':
     Status : "Active"
   */
  {
    extern boolean_T IsFaultActive(uint32_T fault);
    rtb_motohawk_fault_status4_gd3 = IsFaultActive(31);
  }

  /* S-Function Block: <S531>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s531_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_hp = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S531>/Product' incorporates:
   *  MinMax: '<S531>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S531>/motohawk_calibration'
   */
  rtb_Switch_hp /= (rtb_Switch_hp >= (FuelPresFilterConst_DataStore())) ||
    rtIsNaN((FuelPresFilterConst_DataStore())) ? rtb_Switch_hp :
    (FuelPresFilterConst_DataStore());

  /* Logic: '<S503>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S503>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S503>/motohawk_fault_status4'
   */
  rtb_RelationalOperator5_fz = (IsFaultActive(60) || IsFaultActive(61));

  /* Logic: '<S503>/Logical Operator6' */
  rtb_LogicalOperator6_b = !rtb_RelationalOperator5_fz;

  /* Logic: '<S503>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S503>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S503>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_a = (IsFaultSuspected(60) || IsFaultSuspected(61));

  /* S-Function Block: <S445>/motohawk_ain2 Resource: FuelPresPin */
  {
    extern NativeError_S FuelPresPin_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    FuelPresPin_AnalogInput_Get(&BaseEngineController_LS_B.s445_motohawk_ain2,
      NULL);
  }

  /* DataTypeConversion: '<S503>/Data Type Conversion' */
  rtb_Switch_c = (real_T)BaseEngineController_LS_B.s445_motohawk_ain2;

  /* Product: '<S503>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S503>/motohawk_calibration4'
   */
  rtb_DataTypeConversion1_e = rtb_Switch_c * (FuelPresGain_DataStore());

  /* Sum: '<S503>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S503>/motohawk_calibration5'
   */
  BaseEngineController_LS_B.s503_Sum1 = rtb_DataTypeConversion1_e +
    (FuelPresOfst_DataStore());

  /* UnitDelay: '<S503>/Unit Delay1' */
  rtb_UnitDelay1_pd = BaseEngineController_LS_DWork.s503_UnitDelay1_DSTATE;

  /* If: '<S503>/If' incorporates:
   *  Logic: '<S503>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_b && rtb_LogicalOperator1_a) {
    /* Outputs for IfAction SubSystem: '<S503>/If Action Subsystem' incorporates:
     *  ActionPort: '<S532>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay1_pd, &rtb_Merge_b3f);

    /* End of Outputs for SubSystem: '<S503>/If Action Subsystem' */
  } else if (rtb_RelationalOperator5_fz) {
    /* Outputs for IfAction SubSystem: '<S503>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S533>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((FuelPresDfltValue_DataStore()),
      &rtb_Merge_b3f);

    /* End of Outputs for SubSystem: '<S503>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S503>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S534>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      (BaseEngineController_LS_B.s503_Sum1, &rtb_Merge_b3f);

    /* End of Outputs for SubSystem: '<S503>/If Action Subsystem2' */
  }

  /* End of If: '<S503>/If' */

  /* Sum: '<S536>/Sum1' incorporates:
   *  Constant: '<S536>/Constant'
   *  Product: '<S536>/Product'
   *  Product: '<S536>/Product1'
   *  Sum: '<S536>/Sum'
   *  UnitDelay: '<S536>/Unit Delay'
   */
  rtb_Sum1_cs = (1.0 - rtb_Switch_hp) *
    BaseEngineController_LS_DWork.s536_UnitDelay_DSTATE + rtb_Merge_b3f *
    rtb_Switch_hp;

  /* If: '<S535>/If' incorporates:
   *  Inport: '<S537>/In1'
   *  Inport: '<S538>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S535>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S535>/override_enable'
   */
  if ((FuelPres_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S535>/NewValue' incorporates:
     *  ActionPort: '<S537>/Action Port'
     */
    BaseEngineController_LS_B.s535_Merge = (FuelPres_new_DataStore());

    /* End of Outputs for SubSystem: '<S535>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S535>/OldValue' incorporates:
     *  ActionPort: '<S538>/Action Port'
     */
    BaseEngineController_LS_B.s535_Merge = rtb_Sum1_cs;

    /* End of Outputs for SubSystem: '<S535>/OldValue' */
  }

  /* End of If: '<S535>/If' */

  /* S-Function Block: <S557>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s557_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_hp = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S557>/Product' incorporates:
   *  MinMax: '<S557>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S557>/motohawk_calibration'
   */
  rtb_Switch_hp /= (rtb_Switch_hp >= (OilPresFilterConst_DataStore())) ||
    rtIsNaN((OilPresFilterConst_DataStore())) ? rtb_Switch_hp :
    (OilPresFilterConst_DataStore());

  /* Logic: '<S507>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S507>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S507>/motohawk_fault_status4'
   */
  rtb_RelationalOperator5_fz = (IsFaultActive(95) || IsFaultActive(96));

  /* Logic: '<S507>/Logical Operator6' */
  rtb_LogicalOperator6_b = !rtb_RelationalOperator5_fz;

  /* Logic: '<S507>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S507>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S507>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_a = (IsFaultSuspected(95) || IsFaultSuspected(96));

  /* S-Function Block: <S445>/motohawk_ain1 Resource: OilPresPin */
  {
    extern NativeError_S OilPresPin_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    OilPresPin_AnalogInput_Get(&BaseEngineController_LS_B.s445_motohawk_ain1,
      NULL);
  }

  /* DataTypeConversion: '<S507>/Data Type Conversion' */
  rtb_Product_o = (real_T)BaseEngineController_LS_B.s445_motohawk_ain1;

  /* Product: '<S507>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S507>/motohawk_calibration4'
   */
  rtb_DataTypeConversion1_e = rtb_Product_o * (OilPresGain_DataStore());

  /* Sum: '<S507>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S507>/motohawk_calibration5'
   */
  BaseEngineController_LS_B.s507_Sum1 = rtb_DataTypeConversion1_e +
    (OilPresOfst_DataStore());

  /* UnitDelay: '<S507>/Unit Delay1' */
  rtb_UnitDelay1_aa = BaseEngineController_LS_DWork.s507_UnitDelay1_DSTATE;

  /* If: '<S507>/If' incorporates:
   *  Logic: '<S507>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_b && rtb_LogicalOperator1_a) {
    /* Outputs for IfAction SubSystem: '<S507>/If Action Subsystem' incorporates:
     *  ActionPort: '<S558>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay1_aa, &rtb_Merge_ol);

    /* End of Outputs for SubSystem: '<S507>/If Action Subsystem' */
  } else if (rtb_RelationalOperator5_fz) {
    /* Outputs for IfAction SubSystem: '<S507>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S559>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((OilPresDfltValue_DataStore()),
      &rtb_Merge_ol);

    /* End of Outputs for SubSystem: '<S507>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S507>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S560>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      (BaseEngineController_LS_B.s507_Sum1, &rtb_Merge_ol);

    /* End of Outputs for SubSystem: '<S507>/If Action Subsystem2' */
  }

  /* End of If: '<S507>/If' */

  /* Sum: '<S562>/Sum1' incorporates:
   *  Constant: '<S562>/Constant'
   *  Product: '<S562>/Product'
   *  Product: '<S562>/Product1'
   *  Sum: '<S562>/Sum'
   *  UnitDelay: '<S562>/Unit Delay'
   */
  rtb_Sum1_oh = (1.0 - rtb_Switch_hp) *
    BaseEngineController_LS_DWork.s562_UnitDelay_DSTATE + rtb_Merge_ol *
    rtb_Switch_hp;

  /* If: '<S561>/If' incorporates:
   *  Inport: '<S563>/In1'
   *  Inport: '<S564>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S561>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S561>/override_enable'
   */
  if ((OilPres_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S561>/NewValue' incorporates:
     *  ActionPort: '<S563>/Action Port'
     */
    BaseEngineController_LS_B.s561_Merge = (OilPres_new_DataStore());

    /* End of Outputs for SubSystem: '<S561>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S561>/OldValue' incorporates:
     *  ActionPort: '<S564>/Action Port'
     */
    BaseEngineController_LS_B.s561_Merge = rtb_Sum1_oh;

    /* End of Outputs for SubSystem: '<S561>/OldValue' */
  }

  /* End of If: '<S561>/If' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S811>/Send CAN Messages' */
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
        if (BaseEngineController_LS_B.s551_Merge < 0.0000000000F) {
          tmp0 = (uint16_T)(0U);
        } else if (BaseEngineController_LS_B.s551_Merge > 6553.5000000000F) {
          tmp0 = (uint16_T)(65535U);
        } else {
          tmp0 = (uint16_T)(BaseEngineController_LS_B.s551_Merge *
                            (10.0000000000F));
        }

        if (rtb_motohawk_data_read_i4 < 0.0000000000F) {
          tmp1 = (uint8_T)(0U);
        } else if (rtb_motohawk_data_read_i4 > 255.0000000000F) {
          tmp1 = (uint8_T)(255U);
        } else {
          tmp1 = (uint8_T)(rtb_motohawk_data_read_i4);
        }

        if (BaseEngineController_LS_B.s535_Merge < 0.0000000000F) {
          tmp2 = (uint8_T)(0U);
        } else if (BaseEngineController_LS_B.s535_Merge > 10.2000000000F) {
          tmp2 = (uint8_T)(255U);
        } else {
          tmp2 = (uint8_T)(BaseEngineController_LS_B.s535_Merge *
                           (25.0000000000F));
        }

        if (BaseEngineController_LS_B.s561_Merge < 0.0000000000F) {
          tmp3 = (uint8_T)(0U);
        } else if (BaseEngineController_LS_B.s561_Merge > 10.2000000000F) {
          tmp3 = (uint8_T)(255U);
        } else {
          tmp3 = (uint8_T)(BaseEngineController_LS_B.s561_Merge *
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

        tmp5 = (uint8_T)(rtb_RelationalOperator6_h0 != 0);
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
        tmp13 = (uint8_T)(rtb_motohawk_fault_status1_ip != 0);
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

  /* Product: '<S812>/Product' incorporates:
   *  Constant: '<S812>/Constant1'
   *  Saturate: '<S812>/Saturation'
   */
  rtb_Product_hd = BaseEngineController_LS_B.s374_MultiportSwitch * 60.0 /
    (BaseEngineController_LS_B.s500_Sum1 >= 0.01 ?
     BaseEngineController_LS_B.s500_Sum1 : 0.01);

  /* S-Function (motohawk_sfun_send_canmsgs): '<S812>/Send CAN Messages' */
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
        if (BaseEngineController_LS_B.s374_MultiportSwitch < 0.0000000000F) {
          tmp1 = (uint16_T)(0U);
        } else if (BaseEngineController_LS_B.s374_MultiportSwitch >
                   3276.7500000000F) {
          tmp1 = (uint16_T)(65535U);
        } else {
          tmp1 = (uint16_T)(BaseEngineController_LS_B.s374_MultiportSwitch *
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
        tmp5 = (uint8_T)(BaseEngineController_LS_B.s458_Merge != 0);
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

  /* S-Function (motohawk_sfun_data_read): '<S813>/motohawk_data_read2' incorporates:
   *  Constant: '<S813>/Constant5'
   */
  rtb_motohawk_data_read2_m = InjMPW_DataStore()[(uint32_T)1.0];

  /* S-Function (motohawk_sfun_data_read): '<S813>/motohawk_data_read1' incorporates:
   *  Constant: '<S813>/Constant4'
   */
  rtb_motohawk_data_read1_ka = InjDC_DataStore()[(uint32_T)1.0];

  /* S-Function (motohawk_sfun_send_canmsgs): '<S813>/Send CAN Messages' */
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

        if (rtb_Merge_js < -64.0000000000F) {
          tmp1 = (uint8_T)(0U);
        } else if (rtb_Merge_js > 63.5000000000F) {
          tmp1 = (uint8_T)(255U);
        } else {
          tmp1 = (uint8_T)((rtb_Merge_js - (-64.0000000000F)) * (2.0000000000F));
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

  /* S-Function (motohawk_sfun_data_read): '<S814>/motohawk_data_read' */
  rtb_motohawk_data_read_bv = BARO_DataStore();

  /* S-Function (motohawk_sfun_send_canmsgs): '<S814>/Send CAN Messages' */
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

        if (BaseEngineController_LS_B.s522_Merge < 0.0000000000F) {
          tmp4 = (uint8_T)(0U);
        } else if (BaseEngineController_LS_B.s522_Merge > 100.0000350000F) {
          tmp4 = (uint8_T)(255U);
        } else {
          tmp4 = (uint8_T)(BaseEngineController_LS_B.s522_Merge * (2.5499991075F));
        }

        if (BaseEngineController_LS_B.s407_CollectAverage.s376_Product <
            -50.0000000000F) {
          tmp5 = (uint8_T)(0U);
        } else if (BaseEngineController_LS_B.s407_CollectAverage.s376_Product >
                   205.0000000000F) {
          tmp5 = (uint8_T)(255U);
        } else {
          tmp5 = (uint8_T)
            (BaseEngineController_LS_B.s407_CollectAverage.s376_Product -
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

  /* S-Function (motohawk_sfun_data_read): '<S817>/motohawk_data_read' */
  rtb_motohawk_data_read_ki = BoostControlTarget_DataStore();

  /* S-Function (motohawk_sfun_data_read): '<S817>/motohawk_data_read1' */
  rtb_motohawk_data_read1_b = BoostControlDutyCycleFF_DataStore();

  /* S-Function (motohawk_sfun_data_read): '<S817>/motohawk_data_read2' */
  rtb_motohawk_data_read2_h = BoostControlPID_DataStore();

  /* S-Function (motohawk_sfun_send_canmsgs): '<S817>/Send CAN Messages' */
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
        if (rtb_motohawk_data_read1_b < 0.0000000000F) {
          tmp2 = (uint8_T)(0U);
        } else if (rtb_motohawk_data_read1_b > 100.0000350000F) {
          tmp2 = (uint8_T)(255U);
        } else {
          tmp2 = (uint8_T)(rtb_motohawk_data_read1_b * (2.5499991075F));
        }

        if (rtb_motohawk_data_read2_h < 0.0000000000F) {
          tmp3 = (uint8_T)(0U);
        } else if (rtb_motohawk_data_read2_h > 100.0000350000F) {
          tmp3 = (uint8_T)(255U);
        } else {
          tmp3 = (uint8_T)(rtb_motohawk_data_read2_h * (2.5499991075F));
        }

        if (BaseEngineController_LS_B.s663_Merge < -50.0000000000F) {
          tmp4 = (uint8_T)(0U);
        } else if (BaseEngineController_LS_B.s663_Merge > 205.0000000000F) {
          tmp4 = (uint8_T)(255U);
        } else {
          tmp4 = (uint8_T)(BaseEngineController_LS_B.s663_Merge -
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

  /* S-Function (motohawk_sfun_fault_status): '<S818>/motohawk_fault_status9'
   *
   * Regarding '<S818>/motohawk_fault_status9':
     Status : "Active"
   */
  {
    extern boolean_T IsFaultActive(uint32_T fault);
    rtb_motohawk_fault_status9 = IsFaultActive(20);
  }

  /* Logic: '<S818>/Logical Operator3' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S818>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S818>/motohawk_fault_status10'
   */
  rtb_LogicalOperator3_m = ((IsFaultActive(5) || IsFaultActive(4)));

  /* Logic: '<S818>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S818>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S818>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_d1 = ((IsFaultActive(13) || IsFaultActive(12)));

  /* Logic: '<S818>/Logical Operator2' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S818>/motohawk_fault_status5'
   *  S-Function (motohawk_sfun_fault_status): '<S818>/motohawk_fault_status6'
   */
  rtb_LogicalOperator2_p1 = ((IsFaultActive(52) || IsFaultActive(53)));

  /* Logic: '<S818>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S818>/motohawk_fault_status4'
   *  S-Function (motohawk_sfun_fault_status): '<S818>/motohawk_fault_status7'
   */
  rtb_LogicalOperator4_c = ((IsFaultActive(108) || IsFaultActive(107)));

  /* Logic: '<S818>/Logical Operator5' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S818>/motohawk_fault_status11'
   *  S-Function (motohawk_sfun_fault_status): '<S818>/motohawk_fault_status8'
   */
  rtb_LogicalOperator5_g = ((IsFaultActive(114) || IsFaultActive(113)));

  /* S-Function (motohawk_sfun_data_read): '<S818>/motohawk_data_read1' */
  rtb_motohawk_data_read1_pg = ETB_Curr_Flt_DataStore();

  /* S-Function (motohawk_sfun_fault_status): '<S818>/motohawk_fault_status12'
   *
   * Regarding '<S818>/motohawk_fault_status12':
     Status : "Active"
   */
  {
    extern boolean_T IsFaultActive(uint32_T fault);
    rtb_motohawk_fault_status12 = IsFaultActive(115);
  }

  /* S-Function (motohawk_sfun_send_canmsgs): '<S818>/Send CAN Messages' */
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
        if (BaseEngineController_LS_B.s408_Switch1 < 0.0000000000F) {
          tmp0 = (uint8_T)(0U);
        } else if (BaseEngineController_LS_B.s408_Switch1 > 100.0000350000F) {
          tmp0 = (uint8_T)(255U);
        } else {
          tmp0 = (uint8_T)(BaseEngineController_LS_B.s408_Switch1 *
                           (2.5499991075F));
        }

        if (BaseEngineController_LS_B.s422_Sum2 < 0.0000000000F) {
          tmp1 = (uint8_T)(0U);
        } else if (BaseEngineController_LS_B.s422_Sum2 > 100.0000350000F) {
          tmp1 = (uint8_T)(255U);
        } else {
          tmp1 = (uint8_T)(BaseEngineController_LS_B.s422_Sum2 * (2.5499991075F));
        }

        if (BaseEngineController_LS_B.s775_Merge < 0.0000000000F) {
          tmp2 = (uint8_T)(0U);
        } else if (BaseEngineController_LS_B.s775_Merge > 100.0000350000F) {
          tmp2 = (uint8_T)(255U);
        } else {
          tmp2 = (uint8_T)(BaseEngineController_LS_B.s775_Merge * (2.5499991075F));
        }

        if (BaseEngineController_LS_B.s792_Merge < 0.0000000000F) {
          tmp3 = (uint8_T)(0U);
        } else if (BaseEngineController_LS_B.s792_Merge > 100.0000350000F) {
          tmp3 = (uint8_T)(255U);
        } else {
          tmp3 = (uint8_T)(BaseEngineController_LS_B.s792_Merge * (2.5499991075F));
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

  /* S-Function (motohawk_sfun_data_read): '<S815>/motohawk_data_read' */
  rtb_motohawk_data_read_l = BaseRevLimit_DataStore();

  /* S-Function (motohawk_sfun_data_read): '<S815>/motohawk_data_read1' */
  rtb_motohawk_data_read1_b3 = TwoStepRevLimit_DataStore();

  /* Logic: '<S815>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S815>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S815>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S815>/motohawk_fault_status3'
   *  S-Function (motohawk_sfun_fault_status): '<S815>/motohawk_fault_status4'
   */
  rtb_LogicalOperator_bi = ((IsFaultActive(108) || IsFaultActive(107) ||
    IsFaultActive(114) || IsFaultActive(113)));

  /* Logic: '<S815>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S815>/motohawk_fault_status5'
   *  S-Function (motohawk_sfun_fault_status): '<S815>/motohawk_fault_status7'
   */
  rtb_LogicalOperator1_jx = ((IsFaultActive(33) || IsFaultActive(32)));

  /* Logic: '<S815>/Logical Operator2' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S815>/motohawk_fault_status6'
   *  S-Function (motohawk_sfun_fault_status): '<S815>/motohawk_fault_status8'
   */
  rtb_LogicalOperator2_ps = ((IsFaultActive(61) || IsFaultActive(60)));

  /* Logic: '<S815>/Logical Operator3' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S815>/motohawk_fault_status10'
   *  S-Function (motohawk_sfun_fault_status): '<S815>/motohawk_fault_status9'
   */
  rtb_LogicalOperator3_n = ((IsFaultActive(96) || IsFaultActive(95)));

  /* Logic: '<S815>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S815>/motohawk_fault_status11'
   *  S-Function (motohawk_sfun_fault_status): '<S815>/motohawk_fault_status12'
   */
  rtb_LogicalOperator4_n = ((IsFaultActive(84) || IsFaultActive(83)));

  /* Logic: '<S815>/Logical Operator5' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S815>/motohawk_fault_status13'
   *  S-Function (motohawk_sfun_fault_status): '<S815>/motohawk_fault_status14'
   */
  rtb_LogicalOperator5_cx = ((IsFaultActive(67) || IsFaultActive(66)));

  /* S-Function (motohawk_sfun_send_canmsgs): '<S815>/Send CAN Messages' */
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

  /* S-Function (motohawk_sfun_send_canmsgs): '<S816>/Send CAN Messages' */
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
  /* Enable for Trigger_FGND_5XRTI_PERIODIC_9589p0004 */
  if (BaseEngineController_LS_DWork.s13_motohawk_trigger_DWORK1 == 0) {
    /* Enable for function-call system: '<S13>/Coil Control' */

    /* Enable for Atomic SubSystem: '<S822>/EST Enable TDC Counter' */

    /* Level2 S-Function Block: '<S827>/motohawk_trigger1' (motohawk_sfun_trigger) */

    /* Enable for Trigger_FGND_TDC_EVENT_9065p0001 */
    BaseEngineController_LS_DWork.s827_motohawk_trigger1_DWORK1 = 1;

    /* End of Enable for SubSystem: '<S822>/EST Enable TDC Counter' */
    BaseEngineController_LS_DWork.s13_motohawk_trigger_DWORK1 = 1;
  }

  /* DataTypeConversion: '<S799>/Data Type Conversion' */
  rtb_LogicalOperator6_b = (BaseEngineController_LS_B.s135_FAN1 != 0.0);

  /* If: '<S854>/If' incorporates:
   *  Inport: '<S855>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S854>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S854>/override_enable'
   */
  if ((FAN1_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S854>/NewValue' incorporates:
     *  ActionPort: '<S855>/Action Port'
     */
    rtb_LogicalOperator6_b = (FAN1_new_DataStore());

    /* End of Outputs for SubSystem: '<S854>/NewValue' */
  } else {
  }

  /* End of If: '<S854>/If' */

  /* Logic: '<S850>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S850>/0 = No Inversion 1 = Inversion'
   */
  BaseEngineController_LS_B.s850_LogicalOperator = rtb_LogicalOperator6_b ^
    (FAN1_Polarity_DataStore());

  /* If: '<S861>/If' incorporates:
   *  Inport: '<S862>/In1'
   *  Inport: '<S863>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S861>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S861>/override_enable'
   */
  if ((FAN1_PWM_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S861>/NewValue' incorporates:
     *  ActionPort: '<S862>/Action Port'
     */
    rtb_DataTypeConversion1_e = (FAN1_PWM_new_DataStore());

    /* End of Outputs for SubSystem: '<S861>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S861>/OldValue' incorporates:
     *  ActionPort: '<S863>/Action Port'
     */
    rtb_DataTypeConversion1_e = BaseEngineController_LS_B.s135_FAN1;

    /* End of Outputs for SubSystem: '<S861>/OldValue' */
  }

  /* End of If: '<S861>/If' */

  /* Product: '<S852>/Product' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S852>/motohawk_calibration'
   */
  rtb_DataTypeConversion1_e *= (FAN1_PWMGain_DataStore());

  /* Sum: '<S852>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S852>/motohawk_calibration1'
   */
  rtb_Switch_hp = rtb_DataTypeConversion1_e + (FAN1_PWMOffset_DataStore());

  /* MinMax: '<S860>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S852>/motohawk_calibration2'
   */
  rtb_Switch_hp = (rtb_Switch_hp >= (FAN1_PWMMinLimit_DataStore())) || rtIsNaN
    ((FAN1_PWMMinLimit_DataStore())) ? rtb_Switch_hp :
    (FAN1_PWMMinLimit_DataStore());

  /* MinMax: '<S860>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S852>/motohawk_calibration3'
   */
  BaseEngineController_LS_B.s860_MinMax1 = (rtb_Switch_hp <=
    (FAN1_PWMMaxLimit_DataStore())) || rtIsNaN((FAN1_PWMMaxLimit_DataStore())) ?
    rtb_Switch_hp : (FAN1_PWMMaxLimit_DataStore());

  /* Gain: '<S852>/Convert to integer 14-bit PWM resolution' */
  rtb_Switch_hp = 40.95 * BaseEngineController_LS_B.s860_MinMax1;

  /* DataTypeConversion: '<S852>/Data Type Conversion3' */
  if (rtb_Switch_hp < 32768.0) {
    if (rtb_Switch_hp >= -32768.0) {
      rtb_DataTypeConversion3_c = (int16_T)rtb_Switch_hp;
    } else {
      rtb_DataTypeConversion3_c = MIN_int16_T;
    }
  } else {
    rtb_DataTypeConversion3_c = MAX_int16_T;
  }

  /* End of DataTypeConversion: '<S852>/Data Type Conversion3' */
  /* Gain: '<S852>/Convert to integer 0.01Hz resolution' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S852>/motohawk_calibration4'
   */
  rtb_Switch_hp = 100.0 * (FAN1_PWMFrequency_DataStore());

  /* DataTypeConversion: '<S852>/Data Type Conversion2' */
  if (rtb_Switch_hp < 4.294967296E+9) {
    if (rtb_Switch_hp >= 0.0) {
      rtb_DataTypeConversion2_j = (uint32_T)rtb_Switch_hp;
    } else {
      rtb_DataTypeConversion2_j = 0U;
    }
  } else {
    rtb_DataTypeConversion2_j = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S852>/Data Type Conversion2' */

  /* DataTypeConversion: '<S799>/Data Type Conversion1' */
  rtb_LogicalOperator6_b = (BaseEngineController_LS_B.s135_FAN2 != 0.0);

  /* If: '<S857>/If' incorporates:
   *  Inport: '<S858>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S857>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S857>/override_enable'
   */
  if ((FAN2_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S857>/NewValue' incorporates:
     *  ActionPort: '<S858>/Action Port'
     */
    rtb_LogicalOperator6_b = (FAN2_new_DataStore());

    /* End of Outputs for SubSystem: '<S857>/NewValue' */
  } else {
  }

  /* End of If: '<S857>/If' */

  /* Logic: '<S851>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S851>/0 = No Inversion 1 = Inversion'
   */
  BaseEngineController_LS_B.s851_LogicalOperator = rtb_LogicalOperator6_b ^
    (FAN2_Polarity_DataStore());

  /* If: '<S865>/If' incorporates:
   *  Inport: '<S866>/In1'
   *  Inport: '<S867>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S865>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S865>/override_enable'
   */
  if ((FAN2_PWM_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S865>/NewValue' incorporates:
     *  ActionPort: '<S866>/Action Port'
     */
    rtb_DataTypeConversion1_e = (FAN2_PWM_new_DataStore());

    /* End of Outputs for SubSystem: '<S865>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S865>/OldValue' incorporates:
     *  ActionPort: '<S867>/Action Port'
     */
    rtb_DataTypeConversion1_e = BaseEngineController_LS_B.s135_FAN2;

    /* End of Outputs for SubSystem: '<S865>/OldValue' */
  }

  /* End of If: '<S865>/If' */

  /* Product: '<S853>/Product' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S853>/motohawk_calibration'
   */
  rtb_DataTypeConversion1_e *= (FAN2_PWMGain_DataStore());

  /* Sum: '<S853>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S853>/motohawk_calibration1'
   */
  rtb_Switch_hp = rtb_DataTypeConversion1_e + (FAN2_PWMOffset_DataStore());

  /* MinMax: '<S864>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S853>/motohawk_calibration2'
   */
  rtb_Switch_hp = (rtb_Switch_hp >= (FAN2_PWMMinLimit_DataStore())) || rtIsNaN
    ((FAN2_PWMMinLimit_DataStore())) ? rtb_Switch_hp :
    (FAN2_PWMMinLimit_DataStore());

  /* MinMax: '<S864>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S853>/motohawk_calibration3'
   */
  BaseEngineController_LS_B.s864_MinMax1 = (rtb_Switch_hp <=
    (FAN2_PWMMaxLimit_DataStore())) || rtIsNaN((FAN2_PWMMaxLimit_DataStore())) ?
    rtb_Switch_hp : (FAN2_PWMMaxLimit_DataStore());

  /* Gain: '<S853>/Convert to integer 14-bit PWM resolution' */
  rtb_Switch_hp = 40.95 * BaseEngineController_LS_B.s864_MinMax1;

  /* DataTypeConversion: '<S853>/Data Type Conversion3' */
  if (rtb_Switch_hp < 32768.0) {
    if (rtb_Switch_hp >= -32768.0) {
      rtb_DataTypeConversion3_k = (int16_T)rtb_Switch_hp;
    } else {
      rtb_DataTypeConversion3_k = MIN_int16_T;
    }
  } else {
    rtb_DataTypeConversion3_k = MAX_int16_T;
  }

  /* End of DataTypeConversion: '<S853>/Data Type Conversion3' */
  /* Gain: '<S853>/Convert to integer 0.01Hz resolution' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S853>/motohawk_calibration4'
   */
  rtb_Switch_hp = 100.0 * (FAN2_PWMFrequency_DataStore());

  /* DataTypeConversion: '<S853>/Data Type Conversion2' */
  if (rtb_Switch_hp < 4.294967296E+9) {
    if (rtb_Switch_hp >= 0.0) {
      rtb_DataTypeConversion2_e = (uint32_T)rtb_Switch_hp;
    } else {
      rtb_DataTypeConversion2_e = 0U;
    }
  } else {
    rtb_DataTypeConversion2_e = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S853>/Data Type Conversion2' */

  /* S-Function Block: <S443>/motohawk_din Resource: ESTOPPin */
  {
    extern NativeError_S ESTOPPin_DigitalInput_Get(boolean_T *out, uint16_T
      *status);
    ESTOPPin_DigitalInput_Get(&BaseEngineController_LS_B.s443_motohawk_din, NULL);
  }

  /* Logic: '<S450>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S450>/0 = No Inversion 1 = Inversion'
   */
  rtb_LogicalOperator6_b = BaseEngineController_LS_B.s443_motohawk_din ^
    (ESTOPPolarity_DataStore());

  /* If: '<S461>/If' incorporates:
   *  Inport: '<S462>/In1'
   *  Inport: '<S463>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S461>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S461>/override_enable'
   */
  if ((ESTOP_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S461>/NewValue' incorporates:
     *  ActionPort: '<S462>/Action Port'
     */
    BaseEngineController_LS_B.s461_Merge = (ESTOP_new_DataStore());

    /* End of Outputs for SubSystem: '<S461>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S461>/OldValue' incorporates:
     *  ActionPort: '<S463>/Action Port'
     */
    BaseEngineController_LS_B.s461_Merge = rtb_LogicalOperator6_b;

    /* End of Outputs for SubSystem: '<S461>/OldValue' */
  }

  /* End of If: '<S461>/If' */

  /* Logic: '<S13>/Logical Operator5' incorporates:
   *  Logic: '<S13>/Logical Operator4'
   */
  rtb_LogicalOperator6_b = (rtb_RelationalOperator6_h0 &&
    (!BaseEngineController_LS_B.s461_Merge));

  /* If: '<S869>/If' incorporates:
   *  Inport: '<S870>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S869>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S869>/override_enable'
   */
  if ((FUELP_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S869>/NewValue' incorporates:
     *  ActionPort: '<S870>/Action Port'
     */
    rtb_LogicalOperator6_b = (FUELP_new_DataStore());

    /* End of Outputs for SubSystem: '<S869>/NewValue' */
  } else {
  }

  /* End of If: '<S869>/If' */

  /* Logic: '<S868>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S868>/0 = No Inversion 1 = Inversion'
   */
  BaseEngineController_LS_B.s868_LogicalOperator = rtb_LogicalOperator6_b ^
    (FUELP_Polarity_DataStore());

  /* S-Function Block: <S872>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s872_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_oe = ((real_T) delta) * 0.000001;
  }

  /* S-Function Block: <S437>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s437_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_ds = ((real_T) delta) * 0.000001;
  }

  /* RelationalOperator: '<S436>/RelOp' incorporates:
   *  Constant: '<S436>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S418>/motohawk_data_read'
   */
  rtb_LogicalOperator6_b = (((uint8_T)EngineState_DataStore()) == 1);

  /* S-Function Block: <S418>/motohawk_ain_read Resource: ECUP */
  {
    extern NativeError_S ECUP_AnalogInput_Get(uint16_T *adc, uint16_T *status);
    ECUP_AnalogInput_Get(&rtb_motohawk_ain_read_o, NULL);
  }

  /* Switch: '<S437>/Switch' incorporates:
   *  Constant: '<S418>/Constant1'
   *  Constant: '<S437>/Constant'
   *  Logic: '<S418>/Logical Operator'
   *  RelationalOperator: '<S418>/Relational Operator'
   *  S-Function (motohawk_sfun_ain_read): '<S418>/motohawk_ain_read'
   *  S-Function (motohawk_sfun_data_read): '<S437>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S437>/motohawk_delta_time'
   *  Sum: '<S437>/Sum'
   */
  if (rtb_LogicalOperator6_b && (rtb_motohawk_ain_read_o > 150)) {
    BaseEngineController_LS_B.s437_Switch = rtb_motohawk_delta_time_ds +
      TimeSinceStallTimer_DataStore();
  } else {
    BaseEngineController_LS_B.s437_Switch = 0.0;
  }

  /* End of Switch: '<S437>/Switch' */
  /* RelationalOperator: '<S798>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S798>/motohawk_calibration3'
   */
  rtb_RelationalOperator3_bp = (BaseEngineController_LS_B.s437_Switch >
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
    rtb_LogicalOperator1_a = !ShutDownTasksComplete_DataStore();

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
      rtb_LogicalOperator1_a && rtb_AboveHiTarget));

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
      ((BaseEngineController_LS_B.s415_Switch2 >
        (ETC_SpringTestHiThresh_DataStore())));

    /* RelationalOperator: '<S20>/Relational Operator3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S20>/motohawk_calibration6'
     */
    BaseEngineController_LS_B.s20_RelationalOperator3 =
      ((BaseEngineController_LS_B.s415_Switch2 <
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
      rtb_Switch_o = (ETCReq_new_DataStore());

      /* End of Outputs for SubSystem: '<S57>/NewValue' */
    } else {
      /* Outputs for IfAction SubSystem: '<S57>/OldValue' incorporates:
       *  ActionPort: '<S59>/Action Port'
       */
      rtb_Switch_o = BaseEngineController_LS_B.s135_Throttle;

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
    rtb_Product5_j = (rtb_Product5_o <= 100.0 ? rtb_Product5_o : 100.0) *
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
          (ETCTuneFreq_DataStore()) * rtb_DataTypeConversion_m) *
          (ETCTuneAmp_DataStore()) + (ETCTuneAmp_DataStore())) +
          (ETCTuneOffset_DataStore());
      } else {
        BaseEngineController_LS_B.s31_MultiportSwitch = rtb_Switch_o;
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
      BaseEngineController_LS_B.s415_Switch2;

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
    rtb_Switch_o = BaseEngineController_LS_DWork.s46_UnitDelay_DSTATE;

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
    rtb_Product7_i = (1.0 - rtb_Product5_o) *
      BaseEngineController_LS_DWork.s44_UnitDelay_DSTATE +
      BaseEngineController_LS_B.s415_Switch2 * rtb_Product5_o;

    /* S-Function Block: <S42>/motohawk_delta_time */
    rtb_motohawk_delta_time_hch = 0.005;

    /* Product: '<S42>/Product' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S42>/motohawk_delta_time'
     *  Sum: '<S42>/Sum2'
     */
    BaseEngineController_LS_B.s42_Product = (rtb_Product7_i -
      rtb_DataTypeConversion1_e) / rtb_motohawk_delta_time_hch;

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
        BaseEngineController_LS_ConstP.pooled863[rowidx];
      rtb_CombinatorialLogic_d[1] =
        BaseEngineController_LS_ConstP.pooled863[rowidx + 4];
    }

    /* Switch: '<S45>/Switch1' incorporates:
     *  UnitDelay: '<S45>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_d[1]) {
      rtb_LogicalOperator1_a = rtb_CombinatorialLogic_d[0];
    } else {
      rtb_LogicalOperator1_a =
        BaseEngineController_LS_DWork.s45_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S45>/Switch1' */

    /* Switch: '<S41>/Switch2' incorporates:
     *  Logic: '<S41>/Logical Operator'
     *  S-Function (motohawk_sfun_calibration): '<S35>/motohawk_calibration5'
     */
    if (!rtb_LogicalOperator1_a) {
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
    rtb_Switch1_f = rtb_Product5_o * BaseEngineController_LS_B.s415_Switch2;

    /* S-Function Block: <S46>/motohawk_delta_time */
    rtb_motohawk_delta_time_oy = 0.005;

    /* Product: '<S46>/Product' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S46>/motohawk_delta_time'
     *  Sum: '<S46>/Sum2'
     */
    BaseEngineController_LS_B.s46_Product = (rtb_Switch1_f - rtb_Switch_o) /
      rtb_motohawk_delta_time_oy;

    /* UnitDelay: '<S47>/Unit Delay' */
    rtb_DataTypeConversion1_e =
      BaseEngineController_LS_DWork.s47_UnitDelay_DSTATE;

    /* Sum: '<S38>/Sum2' */
    BaseEngineController_LS_B.s38_Sum2 =
      BaseEngineController_LS_B.s31_MultiportSwitch -
      BaseEngineController_LS_B.s415_Switch2;

    /* Product: '<S38>/Product5' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S29>/motohawk_calibration6'
     */
    rtb_Product5_o = BaseEngineController_LS_B.s38_Sum2 *
      (ETCErrorGain_DataStore());

    /* Product: '<S38>/Product4' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S29>/motohawk_calibration1'
     */
    rtb_Switch_o = (ETCDGain_DataStore()) * rtb_Product5_o;

    /* S-Function Block: <S47>/motohawk_delta_time */
    rtb_motohawk_delta_time_e0 = 0.005;

    /* Product: '<S47>/Product' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S47>/motohawk_delta_time'
     *  Sum: '<S47>/Sum2'
     */
    BaseEngineController_LS_B.s47_Product = (rtb_Switch_o -
      rtb_DataTypeConversion1_e) / rtb_motohawk_delta_time_e0;

    /* Sum: '<S29>/Add' */
    rtb_Add_g1 = BaseEngineController_LS_B.s31_MultiportSwitch -
      BaseEngineController_LS_B.s415_Switch2;

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
    rtb_Saturation_l = BaseEngineController_LS_B.s63_Switch >= 16000.0 ? 16000.0
      : BaseEngineController_LS_B.s63_Switch <= 0.0 ? 0.0 :
      BaseEngineController_LS_B.s63_Switch;

    /* S-Function (motohawk_sfun_data_write): '<S63>/motohawk_data_write' */
    /* Write to Data Storage as scalar: ETCShutDownTimer */
    {
      ETCShutDownTimer_DataStore() = rtb_Saturation_l;
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
    BaseEngineController_LS_DWork.s45_UnitDelay_DSTATE = rtb_LogicalOperator1_a;

    /* Update for UnitDelay: '<S47>/Unit Delay' */
    BaseEngineController_LS_DWork.s47_UnitDelay_DSTATE = rtb_Switch_o;

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
  /* Logic: '<S801>/Logical Operator1' incorporates:
   *  Logic: '<S798>/Logical Operator'
   *  Logic: '<S798>/Logical Operator9'
   *  RelationalOperator: '<S798>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S798>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S801>/motohawk_calibration5'
   */
  rtb_RelationalOperator5_fz = ((ETC_CutPower_Permitted_DataStore()) &&
    (BaseEngineController_LS_B.s461_Merge || (rtb_RelationalOperator3_bp &&
    (BaseEngineController_LS_B.s20_Switch < (ETC_CutPower_ETC_DataStore())))));

  /* Logic: '<S801>/Logical Operator' */
  rtb_LogicalOperator6_b = !rtb_RelationalOperator5_fz;

  /* If: '<S873>/If' incorporates:
   *  Inport: '<S874>/In1'
   *  Inport: '<S875>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S873>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S873>/override_enable'
   */
  if ((ETC_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S873>/NewValue' incorporates:
     *  ActionPort: '<S874>/Action Port'
     */
    rtb_DataTypeConversion1_e = (ETC_new_DataStore());

    /* End of Outputs for SubSystem: '<S873>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S873>/OldValue' incorporates:
     *  ActionPort: '<S875>/Action Port'
     */
    rtb_DataTypeConversion1_e = BaseEngineController_LS_B.s20_Switch;

    /* End of Outputs for SubSystem: '<S873>/OldValue' */
  }

  /* End of If: '<S873>/If' */

  /* Switch: '<S801>/Switch' incorporates:
   *  Constant: '<S801>/Constant2'
   *  Product: '<S801>/Product'
   *  S-Function (motohawk_sfun_calibration): '<S801>/motohawk_calibration2'
   *  S-Function (motohawk_sfun_interpolation_1d): '<S801>/motohawk_interpolation_1d'
   *  Sum: '<S801>/Sum'
   */
  if (rtb_RelationalOperator5_fz) {
    rtb_Switch_hp = 0.0;
  } else {
    /* S-Function Block: <S801>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_hr = TableInterpolation1D_real_T
        (BaseEngineController_LS_B.s401_motohawk_prelookup, (real_T *)
         ((ETC_VoltageCompTbl_DataStore())), 9);
      (ETC_VoltageComp_DataStore()) = rtb_motohawk_interpolation_1d_hr;
    }

    rtb_Switch_hp = rtb_DataTypeConversion1_e * rtb_motohawk_interpolation_1d_hr
      + (ETC_Offset_DataStore());
  }

  /* End of Switch: '<S801>/Switch' */

  /* Saturate: '<S801>/Saturation' */
  BaseEngineController_LS_B.s801_ETC = rtb_Switch_hp >= 100.0 ? 100.0 :
    rtb_Switch_hp <= -100.0 ? -100.0 : rtb_Switch_hp;

  /* Abs: '<S801>/Abs' */
  rtb_Switch_hp = fabs(BaseEngineController_LS_B.s801_ETC);

  /* RelationalOperator: '<S801>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S801>/motohawk_calibration3'
   */
  rtb_LogicalOperator1_a = (rtb_Switch_hp > (ETC_OC_MIN_DataStore()));

  /* S-Function (motohawk_sfun_pwm): '<S801>/motohawk_pwm1' */
  ETCPin_PWMOutput_PWMOutput_Outputs(NULL,
    &BaseEngineController_LS_B.s801_motohawk_pwm1);

  /* Abs: '<S801>/Abs1' */
  rtb_DataTypeConversion2_pj = (int16_T)
    (BaseEngineController_LS_B.s801_motohawk_pwm1 < 0 ? (int16_T)
     -BaseEngineController_LS_B.s801_motohawk_pwm1 :
     BaseEngineController_LS_B.s801_motohawk_pwm1);

  /* RelationalOperator: '<S801>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S801>/motohawk_calibration1'
   */
  BaseEngineController_LS_B.s801_RelationalOperator4 = (((real_T)
    rtb_DataTypeConversion2_pj < (ETC_I_MIN_DataStore())));

  /* Switch: '<S872>/Switch' incorporates:
   *  Constant: '<S872>/Constant'
   *  Logic: '<S801>/Logical Operator4'
   *  S-Function (motohawk_sfun_data_read): '<S872>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S872>/motohawk_delta_time'
   *  Sum: '<S872>/Sum'
   */
  if (rtb_LogicalOperator6_b && rtb_LogicalOperator1_a &&
      BaseEngineController_LS_B.s801_RelationalOperator4) {
    rtb_Switch_hp = rtb_motohawk_delta_time_oe + ETCOpenFaultTimer_DataStore();
  } else {
    rtb_Switch_hp = 0.0;
  }

  /* End of Switch: '<S872>/Switch' */

  /* RelationalOperator: '<S801>/Relational Operator5' incorporates:
   *  Constant: '<S801>/Constant'
   */
  rtb_RelationalOperator5 = ((rtb_Switch_hp > 5.0));

  /* S-Function (motohawk_sfun_fault_def): '<S801>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: ETC_Open_Fault */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(52, rtb_RelationalOperator5);
    UpdateFault(52);
  }

  /* Gain: '<S801>/Convert to integer 14-bit PWM resolution' */
  rtb_Abs_co = 40.95 * BaseEngineController_LS_B.s801_ETC;

  /* DataTypeConversion: '<S801>/Data Type Conversion3' incorporates:
   *  Gain: '<S801>/Convert to integer 0.01Hz resolution'
   *  S-Function (motohawk_sfun_calibration): '<S801>/motohawk_calibration4'
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

  /* End of DataTypeConversion: '<S801>/Data Type Conversion3' */

  /* DataTypeConversion: '<S801>/Data Type Conversion4' */
  if (rtb_Abs_co < 32768.0) {
    if (rtb_Abs_co >= -32768.0) {
      rtb_DataTypeConversion4_m = (int16_T)rtb_Abs_co;
    } else {
      rtb_DataTypeConversion4_m = MIN_int16_T;
    }
  } else {
    rtb_DataTypeConversion4_m = MAX_int16_T;
  }

  /* End of DataTypeConversion: '<S801>/Data Type Conversion4' */

  /* Saturate: '<S872>/Saturation' */
  rtb_Saturation_no = rtb_Switch_hp >= 16000.0 ? 16000.0 : rtb_Switch_hp <= 0.0 ?
    0.0 : rtb_Switch_hp;

  /* S-Function (motohawk_sfun_data_write): '<S872>/motohawk_data_write' */
  /* Write to Data Storage as scalar: ETCOpenFaultTimer */
  {
    ETCOpenFaultTimer_DataStore() = rtb_Saturation_no;
  }

  /* If: '<S879>/If' incorporates:
   *  Inport: '<S880>/In1'
   *  Inport: '<S881>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S879>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S879>/override_enable'
   */
  if ((IAC_P_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S879>/NewValue' incorporates:
     *  ActionPort: '<S880>/Action Port'
     */
    rtb_DataTypeConversion1_e = (IAC_P_new_DataStore());

    /* End of Outputs for SubSystem: '<S879>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S879>/OldValue' incorporates:
     *  ActionPort: '<S881>/Action Port'
     */
    rtb_DataTypeConversion1_e = BaseEngineController_LS_B.s135_IACP;

    /* End of Outputs for SubSystem: '<S879>/OldValue' */
  }

  /* End of If: '<S879>/If' */

  /* Product: '<S876>/Product' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S876>/motohawk_calibration'
   */
  rtb_DataTypeConversion1_e *= (IAC_PGain_DataStore());

  /* Sum: '<S876>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S876>/motohawk_calibration1'
   */
  rtb_Abs_co = rtb_DataTypeConversion1_e + (IAC_POffset_DataStore());

  /* MinMax: '<S878>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S876>/motohawk_calibration2'
   */
  rtb_Abs_co = (rtb_Abs_co >= (IAC_PMinLimit_DataStore())) || rtIsNaN
    ((IAC_PMinLimit_DataStore())) ? rtb_Abs_co : (IAC_PMinLimit_DataStore());

  /* MinMax: '<S878>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S876>/motohawk_calibration3'
   */
  BaseEngineController_LS_B.s878_MinMax1 = (rtb_Abs_co <=
    (IAC_PMaxLimit_DataStore())) || rtIsNaN((IAC_PMaxLimit_DataStore())) ?
    rtb_Abs_co : (IAC_PMaxLimit_DataStore());

  /* Gain: '<S876>/Convert to integer 14-bit PWM resolution' */
  rtb_Abs_co = 40.95 * BaseEngineController_LS_B.s878_MinMax1;

  /* DataTypeConversion: '<S876>/Data Type Conversion3' */
  if (rtb_Abs_co < 32768.0) {
    if (rtb_Abs_co >= -32768.0) {
      rtb_DataTypeConversion3_p = (int16_T)rtb_Abs_co;
    } else {
      rtb_DataTypeConversion3_p = MIN_int16_T;
    }
  } else {
    rtb_DataTypeConversion3_p = MAX_int16_T;
  }

  /* End of DataTypeConversion: '<S876>/Data Type Conversion3' */
  /* Gain: '<S876>/Convert to integer 0.01Hz resolution' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S876>/motohawk_calibration4'
   */
  rtb_Abs_co = 100.0 * (IAC_PFrequency_DataStore());

  /* DataTypeConversion: '<S876>/Data Type Conversion2' */
  if (rtb_Abs_co < 4.294967296E+9) {
    if (rtb_Abs_co >= 0.0) {
      rtb_DataTypeConversion2_l = (uint32_T)rtb_Abs_co;
    } else {
      rtb_DataTypeConversion2_l = 0U;
    }
  } else {
    rtb_DataTypeConversion2_l = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S876>/Data Type Conversion2' */

  /* If: '<S883>/If' incorporates:
   *  Inport: '<S884>/In1'
   *  Inport: '<S885>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S883>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S883>/override_enable'
   */
  if ((IAC_S_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S883>/NewValue' incorporates:
     *  ActionPort: '<S884>/Action Port'
     */
    rtb_DataTypeConversion1_e = (IAC_S_new_DataStore());

    /* End of Outputs for SubSystem: '<S883>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S883>/OldValue' incorporates:
     *  ActionPort: '<S885>/Action Port'
     */
    rtb_DataTypeConversion1_e = BaseEngineController_LS_B.s135_IACS;

    /* End of Outputs for SubSystem: '<S883>/OldValue' */
  }

  /* End of If: '<S883>/If' */

  /* Product: '<S877>/Product' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S877>/motohawk_calibration'
   */
  rtb_DataTypeConversion1_e *= (IAC_SGain_DataStore());

  /* Sum: '<S877>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S877>/motohawk_calibration1'
   */
  rtb_Abs_co = rtb_DataTypeConversion1_e + (IAC_SOffset_DataStore());

  /* MinMax: '<S882>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S877>/motohawk_calibration2'
   */
  rtb_Abs_co = (rtb_Abs_co >= (IAC_SMinLimit_DataStore())) || rtIsNaN
    ((IAC_SMinLimit_DataStore())) ? rtb_Abs_co : (IAC_SMinLimit_DataStore());

  /* MinMax: '<S882>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S877>/motohawk_calibration3'
   */
  BaseEngineController_LS_B.s882_MinMax1 = (rtb_Abs_co <=
    (IAC_SMaxLimit_DataStore())) || rtIsNaN((IAC_SMaxLimit_DataStore())) ?
    rtb_Abs_co : (IAC_SMaxLimit_DataStore());

  /* Gain: '<S877>/Convert to integer 14-bit PWM resolution' */
  rtb_Abs_co = 40.95 * BaseEngineController_LS_B.s882_MinMax1;

  /* DataTypeConversion: '<S877>/Data Type Conversion3' */
  if (rtb_Abs_co < 32768.0) {
    if (rtb_Abs_co >= -32768.0) {
      rtb_DataTypeConversion3_d = (int16_T)rtb_Abs_co;
    } else {
      rtb_DataTypeConversion3_d = MIN_int16_T;
    }
  } else {
    rtb_DataTypeConversion3_d = MAX_int16_T;
  }

  /* End of DataTypeConversion: '<S877>/Data Type Conversion3' */
  /* Gain: '<S877>/Convert to integer 0.01Hz resolution' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S877>/motohawk_calibration4'
   */
  rtb_Abs_co = 100.0 * (IAC_SFrequency_DataStore());

  /* DataTypeConversion: '<S877>/Data Type Conversion2' */
  if (rtb_Abs_co < 4.294967296E+9) {
    if (rtb_Abs_co >= 0.0) {
      rtb_DataTypeConversion2_i = (uint32_T)rtb_Abs_co;
    } else {
      rtb_DataTypeConversion2_i = 0U;
    }
  } else {
    rtb_DataTypeConversion2_i = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S877>/Data Type Conversion2' */
  /* If: '<S890>/If' incorporates:
   *  Inport: '<S900>/In1'
   *  Inport: '<S901>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S890>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S890>/override_enable'
   */
  if ((SOI_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S890>/NewValue' incorporates:
     *  ActionPort: '<S900>/Action Port'
     */
    rtb_DataTypeConversion1_e = (SOI_new_DataStore());

    /* End of Outputs for SubSystem: '<S890>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S890>/OldValue' incorporates:
     *  ActionPort: '<S901>/Action Port'
     */
    rtb_DataTypeConversion1_e = BaseEngineController_LS_B.s135_SOI;

    /* End of Outputs for SubSystem: '<S890>/OldValue' */
  }

  /* End of If: '<S890>/If' */

  /* Gain: '<S803>/Gain2' */
  rtb_Abs_co = 16.0 * rtb_DataTypeConversion1_e;

  /* DataTypeConversion: '<S803>/Data Type Conversion2' */
  if (rtb_Abs_co < 32768.0) {
    if (rtb_Abs_co >= -32768.0) {
      rtb_DataTypeConversion2_pj = (int16_T)rtb_Abs_co;
    } else {
      rtb_DataTypeConversion2_pj = MIN_int16_T;
    }
  } else {
    rtb_DataTypeConversion2_pj = MAX_int16_T;
  }

  /* End of DataTypeConversion: '<S803>/Data Type Conversion2' */
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
  rtb_Switch_o = rtb_Merge_a5 + (Fuel_Cyl7_offset_DataStore());

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
    rtb_Merge_bv[6] = rtb_Switch_o;
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
    (BaseEngineController_LS_B.s535_Merge + BaseEngineController_LS_B.s375_Sum)
    - BaseEngineController_LS_B.s543_Merge;

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
  y = BaseEngineController_LS_B.s500_Sum1 >= 0.01 ?
    BaseEngineController_LS_B.s500_Sum1 : 0.01;

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
      (BaseEngineController_LS_B.s401_motohawk_prelookup, (real_T *)
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
  /* If: '<S891>/If' incorporates:
   *  Inport: '<S902>/In1'
   *  Inport: '<S903>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S891>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S891>/override_enable'
   */
  if ((Mech_PW_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S891>/NewValue' incorporates:
     *  ActionPort: '<S902>/Action Port'
     */
    for (i = 0; i < 8; i++) {
      rtb_Product2_aa[i] = (Mech_PW_new_DataStore())[i];
    }

    /* End of Outputs for SubSystem: '<S891>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S891>/OldValue' incorporates:
     *  ActionPort: '<S903>/Action Port'
     */
    memcpy((void *)&rtb_Product2_aa[0], (void *)
           (&BaseEngineController_LS_B.s21_MinMax[0]), sizeof(real_T) << 3U);

    /* End of Outputs for SubSystem: '<S891>/OldValue' */
  }

  /* End of If: '<S891>/If' */

  /* DataTypeConversion: '<S803>/Data Type Conversion3' incorporates:
   *  Gain: '<S803>/Gain3'
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

  /* End of DataTypeConversion: '<S803>/Data Type Conversion3' */
  /* Gain: '<S803>/Gain5' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S803>/motohawk_calibration9'
   */
  rtb_Abs_co = 1000.0 * (InjectorMaxDuration_DataStore());

  /* DataTypeConversion: '<S803>/Data Type Conversion6' */
  if (rtb_Abs_co < 4.294967296E+9) {
    if (rtb_Abs_co >= 0.0) {
      rtb_DataTypeConversion6 = (uint32_T)rtb_Abs_co;
    } else {
      rtb_DataTypeConversion6 = 0U;
    }
  } else {
    rtb_DataTypeConversion6 = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S803>/Data Type Conversion6' */
  /* If: '<S888>/If' incorporates:
   *  Inport: '<S896>/In1'
   *  Inport: '<S897>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S888>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S888>/override_enable'
   */
  if ((Elec_PW_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S888>/NewValue' incorporates:
     *  ActionPort: '<S896>/Action Port'
     */
    rtb_DataTypeConversion1_e = (Elec_PW_new_DataStore());

    /* End of Outputs for SubSystem: '<S888>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S888>/OldValue' incorporates:
     *  ActionPort: '<S897>/Action Port'
     */
    rtb_DataTypeConversion1_e = BaseEngineController_LS_B.s21_Sum2;

    /* End of Outputs for SubSystem: '<S888>/OldValue' */
  }

  /* End of If: '<S888>/If' */

  /* Gain: '<S803>/Gain1' */
  rtb_Abs_co = 1000.0 * rtb_DataTypeConversion1_e;

  /* DataTypeConversion: '<S803>/Data Type Conversion1' */
  if (rtb_Abs_co < 4.294967296E+9) {
    if (rtb_Abs_co >= 0.0) {
      rtb_DataTypeConversion1_p = (uint32_T)rtb_Abs_co;
    } else {
      rtb_DataTypeConversion1_p = 0U;
    }
  } else {
    rtb_DataTypeConversion1_p = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S803>/Data Type Conversion1' */
  /* If: '<S889>/If' incorporates:
   *  Inport: '<S898>/In1'
   *  Inport: '<S899>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S889>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S889>/override_enable'
   */
  if ((MakeUp_EOI_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S889>/NewValue' incorporates:
     *  ActionPort: '<S898>/Action Port'
     */
    rtb_DataTypeConversion1_e = (MakeUp_EOI_new_DataStore());

    /* End of Outputs for SubSystem: '<S889>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S889>/OldValue' incorporates:
     *  ActionPort: '<S899>/Action Port'
     */
    rtb_DataTypeConversion1_e = BaseEngineController_LS_B.s135_MakeUpEOI;

    /* End of Outputs for SubSystem: '<S889>/OldValue' */
  }

  /* End of If: '<S889>/If' */

  /* Gain: '<S803>/Gain6' */
  rtb_Abs_co = 16.0 * rtb_DataTypeConversion1_e;

  /* DataTypeConversion: '<S803>/Data Type Conversion7' */
  if (rtb_Abs_co < 32768.0) {
    if (rtb_Abs_co >= -32768.0) {
      rtb_DataTypeConversion7 = (int16_T)rtb_Abs_co;
    } else {
      rtb_DataTypeConversion7 = MIN_int16_T;
    }
  } else {
    rtb_DataTypeConversion7 = MAX_int16_T;
  }

  /* End of DataTypeConversion: '<S803>/Data Type Conversion7' */
  /* Gain: '<S803>/Gain7' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S803>/motohawk_calibration6'
   */
  rtb_Abs_co = 1000.0 * (MinMakeUpPW_DataStore());

  /* DataTypeConversion: '<S803>/Data Type Conversion8' */
  if (rtb_Abs_co < 4.294967296E+9) {
    if (rtb_Abs_co >= 0.0) {
      rtb_Sum_hh = (uint32_T)rtb_Abs_co;
    } else {
      rtb_Sum_hh = 0U;
    }
  } else {
    rtb_Sum_hh = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S803>/Data Type Conversion8' */
  /* Gain: '<S803>/Gain8' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S803>/motohawk_calibration1'
   */
  rtb_Abs_co = 1000.0 * (InjectiorMinDuration_DataStore());

  /* DataTypeConversion: '<S803>/Data Type Conversion9' */
  if (rtb_Abs_co < 4.294967296E+9) {
    if (rtb_Abs_co >= 0.0) {
      rtb_UnitDelay_lk = (uint32_T)rtb_Abs_co;
    } else {
      rtb_UnitDelay_lk = 0U;
    }
  } else {
    rtb_UnitDelay_lk = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S803>/Data Type Conversion9' */
  /* Outputs for Atomic SubSystem: '<S803>/Injector Enable Manager' */

  /* S-Function Block: <S895>/motohawk_delta_time */
  rtb_motohawk_delta_time_i = 0.005;

  /* Switch: '<S895>/Switch' incorporates:
   *  Constant: '<S895>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S895>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S895>/motohawk_delta_time'
   *  S-Function (motohawk_sfun_fault_action): '<S887>/motohawk_fault_action'
   *  Sum: '<S895>/Sum'
   */
  if (GetFaultActionStatus(2)) {
    rtb_DataTypeConversion1_e = rtb_motohawk_delta_time_i +
      DelayedEngineShutdownTimer_DataStore();
  } else {
    rtb_DataTypeConversion1_e = 0.0;
  }

  /* End of Switch: '<S895>/Switch' */
  /* RelationalOperator: '<S887>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S887>/motohawk_calibration1'
   */
  rtb_LogicalOperator_iy = (rtb_DataTypeConversion1_e >
    (EngineShutdownDelayTime_DataStore()));

  /* S-Function (motohawk_sfun_data_write): '<S887>/motohawk_data_write' */
  /* Write to Data Storage as scalar: DelayedEngineShutdownAction */
  {
    DelayedEngineShutdownAction_DataStore() = rtb_LogicalOperator_iy;
  }

  /* RelationalOperator: '<S887>/Relational Operator1' incorporates:
   *  Gain: '<S887>/Gain'
   *  S-Function (motohawk_sfun_calibration): '<S887>/motohawk_calibration1'
   */
  rtb_RelationalOperator1_cf = ((rtb_DataTypeConversion1_e > 0.5 *
    (EngineShutdownDelayTime_DataStore())));

  /* S-Function (motohawk_sfun_data_write): '<S887>/motohawk_data_write1' */
  /* Write to Data Storage as scalar: DelayedEngineShutdownWarning */
  {
    DelayedEngineShutdownWarning_DataStore() = rtb_RelationalOperator1_cf;
  }

  /* RelationalOperator: '<S887>/Relational Operator2' incorporates:
   *  Constant: '<S887>/Constant'
   */
  rtb_RelationalOperator2_cd = ((rtb_DataTypeConversion1_e > 0.0));

  /* S-Function (motohawk_sfun_data_write): '<S887>/motohawk_data_write2' */
  /* Write to Data Storage as scalar: EngineShutdownTimerState */
  {
    EngineShutdownTimerState_DataStore() = rtb_RelationalOperator2_cd;
  }

  /* Logic: '<S887>/Logical Operator' */
  rtb_LogicalOperator_iy = !rtb_LogicalOperator_iy;

  /* Logic: '<S887>/Logical Operator2' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S887>/motohawk_data_read'
   */
  rtb_LogicalOperator6_b = !EngineShutdownAction_DataStore();

  /* S-Function (motohawk_sfun_data_read): '<S887>/motohawk_data_read1' */
  rtb_motohawk_data_read1_iz = ECUP_Enabled_DataStore();

  /* Logic: '<S887>/Logical Operator4' incorporates:
   *  Constant: '<S894>/Constant'
   *  RelationalOperator: '<S894>/RelOp'
   *  S-Function (motohawk_sfun_data_read): '<S887>/motohawk_data_read2'
   */
  rtb_LogicalOperator1_a = !(((uint8_T)EngineState_DataStore()) == 1);

  /* Logic: '<S887>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S887>/motohawk_calibration10'
   *  S-Function (motohawk_sfun_calibration): '<S887>/motohawk_calibration11'
   *  S-Function (motohawk_sfun_calibration): '<S887>/motohawk_calibration12'
   *  S-Function (motohawk_sfun_calibration): '<S887>/motohawk_calibration2'
   *  S-Function (motohawk_sfun_calibration): '<S887>/motohawk_calibration3'
   *  S-Function (motohawk_sfun_calibration): '<S887>/motohawk_calibration4'
   *  S-Function (motohawk_sfun_calibration): '<S887>/motohawk_calibration7'
   *  S-Function (motohawk_sfun_calibration): '<S887>/motohawk_calibration8'
   */
  rtb_LogicalOperator1_aj[0] = (rtb_LogicalOperator_iy && rtb_LogicalOperator6_b
    && rtb_motohawk_data_read1_iz && rtb_LogicalOperator1_a &&
    (Injector1Enable_DataStore()));
  rtb_LogicalOperator1_aj[1] = (rtb_LogicalOperator_iy && rtb_LogicalOperator6_b
    && rtb_motohawk_data_read1_iz && rtb_LogicalOperator1_a &&
    (Injector2Enable_DataStore()));
  rtb_LogicalOperator1_aj[2] = (rtb_LogicalOperator_iy && rtb_LogicalOperator6_b
    && rtb_motohawk_data_read1_iz && rtb_LogicalOperator1_a &&
    (Injector3Enable_DataStore()));
  rtb_LogicalOperator1_aj[3] = (rtb_LogicalOperator_iy && rtb_LogicalOperator6_b
    && rtb_motohawk_data_read1_iz && rtb_LogicalOperator1_a &&
    (Injector4Enable_DataStore()));
  rtb_LogicalOperator1_aj[4] = (rtb_LogicalOperator_iy && rtb_LogicalOperator6_b
    && rtb_motohawk_data_read1_iz && rtb_LogicalOperator1_a &&
    (Injector5Enable_DataStore()));
  rtb_LogicalOperator1_aj[5] = (rtb_LogicalOperator_iy && rtb_LogicalOperator6_b
    && rtb_motohawk_data_read1_iz && rtb_LogicalOperator1_a &&
    (Injector6Enable_DataStore()));
  rtb_LogicalOperator1_aj[6] = (rtb_LogicalOperator_iy && rtb_LogicalOperator6_b
    && rtb_motohawk_data_read1_iz && rtb_LogicalOperator1_a &&
    (Injector7Enable_DataStore()));
  rtb_LogicalOperator1_aj[7] = (rtb_LogicalOperator_iy && rtb_LogicalOperator6_b
    && rtb_motohawk_data_read1_iz && rtb_LogicalOperator1_a &&
    (Injector8Enable_DataStore()));

  /* Saturate: '<S895>/Saturation' */
  rtb_Saturation_k4 = rtb_DataTypeConversion1_e >= 16000.0 ? 16000.0 :
    rtb_DataTypeConversion1_e <= 0.0 ? 0.0 : rtb_DataTypeConversion1_e;

  /* S-Function (motohawk_sfun_data_write): '<S895>/motohawk_data_write' */
  /* Write to Data Storage as scalar: DelayedEngineShutdownTimer */
  {
    DelayedEngineShutdownTimer_DataStore() = rtb_Saturation_k4;
  }

  /* End of Outputs for SubSystem: '<S803>/Injector Enable Manager' */
  /* Logic: '<S803>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S803>/motohawk_data_read'
   */
  rtb_LogicalOperator6_b = !ESTOP_DataStore();

  /* If: '<S893>/If' incorporates:
   *  Inport: '<S906>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S893>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S893>/override_enable'
   */
  if ((ESTOP_FuelInj_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S893>/NewValue' incorporates:
     *  ActionPort: '<S906>/Action Port'
     */
    rtb_LogicalOperator6_b = (ESTOP_FuelInj_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S893>/NewValue' */
  } else {
  }

  /* End of If: '<S893>/If' */

  /* Logic: '<S803>/Logical Operator' */
  for (i = 0; i < 8; i++) {
    rtb_LogicalOperator1_aj[i] = (rtb_LogicalOperator6_b && rtb_AND1[i] &&
      rtb_LogicalOperator1_aj[i]);
  }

  /* End of Logic: '<S803>/Logical Operator' */
  /* If: '<S892>/If' incorporates:
   *  Inport: '<S904>/In1'
   *  Inport: '<S905>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S892>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S892>/override_enable'
   */
  if ((InjEnable_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S892>/NewValue' incorporates:
     *  ActionPort: '<S904>/Action Port'
     */
    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_B.s892_Merge[i] = (InjEnable_new_DataStore())[i];
    }

    /* End of Outputs for SubSystem: '<S892>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S892>/OldValue' incorporates:
     *  ActionPort: '<S905>/Action Port'
     */
    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_B.s892_Merge[i] = rtb_LogicalOperator1_aj[i];
    }

    /* End of Outputs for SubSystem: '<S892>/OldValue' */
  }

  /* End of If: '<S892>/If' */

  /* S-Function Block: <S803>/Injector Sequence */
  {
    extern TransientInjectorSeqInfo_T TransientInjectorSeqInfo_41[8];
    uint32_T makeup_duration;
    int16_T makeup_angle;
    extern S_SeqOutInjDiagReport InjectorSeqDiagInfo_41[8];
    extern int32_T InjectorSeqDiagLastPin_41;
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
      enable = ((BaseEngineController_LS_B.s892_Merge)[index] &&
                pulse_scheduling_allowed);
      if ((INJ_SequenceType_DataStore()) == 0) {
        if ((enable) !=
            ((&BaseEngineController_LS_DWork.s803_InjectorSequence_DWORK1[0])
             [index])) {
          seq_enable = (enable) ? SEQ_ENABLED : SEQ_DISNEXT;
          SetSeqOutCond((E_ModuleResource) ((INJ_InitialPin_DataStore()) + index),
                        0, seq_enable);
          if ((INJ_Behavior_DataStore()) == 1)
            SetSeqOutCond((E_ModuleResource) ((INJ_InitialPin_DataStore()) +
              index), 1, (enable && 1) ? SEQ_ENABLED : SEQ_DISNEXT);
          (&BaseEngineController_LS_DWork.s803_InjectorSequence_DWORK1[0])[index]
            = enable;
        }

        if ((BaseEngineController_LS_ConstB.s803_DataTypeConversion5) !=
            (BaseEngineController_LS_DWork.s803_InjectorSequence_DWORK2)) {
          SetSeqOutInjPeakTime((E_ModuleResource) ((INJ_InitialPin_DataStore())
            + index), BaseEngineController_LS_ConstB.s803_DataTypeConversion5);
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
          if (TransientInjectorSeqInfo_41[index].primaryComplete) {
            if (elec_duration > TransientInjectorSeqInfo_41[index].
                primaryDuration) {
              makeup_duration = elec_duration -
                TransientInjectorSeqInfo_41[index].primaryDuration;
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
              ((&BaseEngineController_LS_DWork.s803_InjectorSequence_DWORK1[0])
               [index])) {
            seq_enable = (enable) ? SEQ_ENABLED : SEQ_DISNEXT;
            SetSeqOutCond((E_ModuleResource) ((INJ_InitialPin_DataStore()) +
              index), 0, seq_enable);
            SetSeqOutCond((E_ModuleResource) ((INJ_InitialPin_DataStore()) +
              index), 1, seq_enable);
            (&BaseEngineController_LS_DWork.s803_InjectorSequence_DWORK1[0])
              [index] = enable;
          }

          /* Update peak time only on primary Pulse */
          if ((BaseEngineController_LS_ConstB.s803_DataTypeConversion5) !=
              (BaseEngineController_LS_DWork.s803_InjectorSequence_DWORK2)) {
            SetSeqOutInjPeakTime((E_ModuleResource) ((INJ_InitialPin_DataStore())
              + index), BaseEngineController_LS_ConstB.s803_DataTypeConversion5);
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
            ((&BaseEngineController_LS_DWork.s803_InjectorSequence_DWORK1[0])
             [index])) {
          seq_enable = (enable) ? SEQ_ENABLED : SEQ_DISNEXT;
          SetSeqOutCond((E_ModuleResource) ((INJ_InitialPin_DataStore()) + index),
                        0, seq_enable);
          SetSeqOutCond((E_ModuleResource) ((INJ_InitialPin_DataStore()) + index),
                        1, seq_enable);
          (&BaseEngineController_LS_DWork.s803_InjectorSequence_DWORK1[0])[index]
            = enable;
        }

        if ((BaseEngineController_LS_ConstB.s803_DataTypeConversion5) !=
            (BaseEngineController_LS_DWork.s803_InjectorSequence_DWORK2)) {
          SetSeqOutInjPeakTime((E_ModuleResource) ((INJ_InitialPin_DataStore())
            + index), BaseEngineController_LS_ConstB.s803_DataTypeConversion5);
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

    BaseEngineController_LS_DWork.s803_InjectorSequence_DWORK2 =
      BaseEngineController_LS_ConstB.s803_DataTypeConversion5;

    /* Output per-cylinder diagnostics */
    {
      for (i=0; i < (EncoderNumCylinders_DataStore()); i++) {
        (BaseEngineController_LS_B.s803_InjectorSequence_o1)[i] =
          InjectorSeqDiagInfo_41[i].u1TXCnt;
      }

      for (i=0; i < (EncoderNumCylinders_DataStore()); i++) {
        (rtb_InjectorSequence_o2)[i] = InjectorSeqDiagInfo_41[i].
          u4TXTimeInMicroSecs;
      }
    }
  }

  /* RelationalOperator: '<S886>/==' incorporates:
   *  Constant: '<S886>/Zero'
   */
  for (i = 0; i < 8; i++) {
    rtb_LogicalOperator1_aj[i] =
      (BaseEngineController_LS_B.s803_InjectorSequence_o1[i] == 0);
  }

  /* End of RelationalOperator: '<S886>/==' */
  /* S-Function Block: <S886>/motohawk_encoder_average_rpm */
  {
    rtb_motohawk_encoder_average_rpm = GetEncoderResourceAverageRPM();
  }

  /* RelationalOperator: '<S886>/<1' incorporates:
   *  Constant: '<S886>/Zero1'
   *  S-Function (motohawk_sfun_encoder_average_rpm): '<S886>/motohawk_encoder_average_rpm'
   */
  rtb_LogicalOperator6_b = (rtb_motohawk_encoder_average_rpm > 100);

  /* Logic: '<S886>/AND1' */
  for (i = 0; i < 8; i++) {
    rtb_AND1[i] = (rtb_LogicalOperator1_aj[i] && rtb_LogicalOperator6_b &&
                   BaseEngineController_LS_B.s892_Merge[i]);
  }

  /* End of Logic: '<S886>/AND1' */

  /* S-Function (motohawk_sfun_fault_def): '<S886>/motohawk_fault_def' */

  /* Set Fault Suspected Status: Inj1Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(68, rtb_AND1[0]);
    UpdateFault(68);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S886>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: Inj2Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(69, rtb_AND1[1]);
    UpdateFault(69);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S886>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: Inj3Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(70, rtb_AND1[2]);
    UpdateFault(70);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S886>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: Inj4Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(71, rtb_AND1[3]);
    UpdateFault(71);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S886>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: Inj5Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(72, rtb_AND1[4]);
    UpdateFault(72);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S886>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: Inj6Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(73, rtb_AND1[5]);
    UpdateFault(73);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S886>/motohawk_fault_def6' */

  /* Set Fault Suspected Status: Inj7Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(74, rtb_AND1[6]);
    UpdateFault(74);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S886>/motohawk_fault_def7' */

  /* Set Fault Suspected Status: Inj8Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(75, rtb_AND1[7]);
    UpdateFault(75);
  }

  /* Logic: '<S804>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_fault_action): '<S804>/motohawk_fault_action'
   */
  rtb_RelationalOperator5_fz = !GetFaultActionStatus(6);

  /* Product: '<S804>/Product' */
  rtb_DataTypeConversion1_e = BaseEngineController_LS_B.s135_WASTEGATE * (real_T)
    rtb_RelationalOperator5_fz;

  /* If: '<S910>/If' incorporates:
   *  Inport: '<S911>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S910>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S910>/override_enable'
   */
  if ((WASTEGATE_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S910>/NewValue' incorporates:
     *  ActionPort: '<S911>/Action Port'
     */
    rtb_DataTypeConversion1_e = (WASTEGATE_new_DataStore());

    /* End of Outputs for SubSystem: '<S910>/NewValue' */
  } else {
  }

  /* End of If: '<S910>/If' */

  /* Product: '<S908>/Product' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S908>/motohawk_calibration'
   */
  rtb_DataTypeConversion1_e *= (WASTEGATEGain_DataStore());

  /* Sum: '<S908>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S908>/motohawk_calibration1'
   */
  rtb_Abs_co = rtb_DataTypeConversion1_e + (WASTEGATEOffset_DataStore());

  /* MinMax: '<S909>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S908>/motohawk_calibration2'
   */
  rtb_Abs_co = (rtb_Abs_co >= (WASTEGATEMinLimit_DataStore())) || rtIsNaN
    ((WASTEGATEMinLimit_DataStore())) ? rtb_Abs_co :
    (WASTEGATEMinLimit_DataStore());

  /* MinMax: '<S909>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S908>/motohawk_calibration3'
   */
  BaseEngineController_LS_B.s909_MinMax1 = (rtb_Abs_co <=
    (WASTEGATEMaxLimit_DataStore())) || rtIsNaN((WASTEGATEMaxLimit_DataStore()))
    ? rtb_Abs_co : (WASTEGATEMaxLimit_DataStore());

  /* Gain: '<S908>/Convert to integer 14-bit PWM resolution' */
  rtb_Abs_co = 40.95 * BaseEngineController_LS_B.s909_MinMax1;

  /* DataTypeConversion: '<S908>/Data Type Conversion3' */
  if (rtb_Abs_co < 32768.0) {
    if (rtb_Abs_co >= -32768.0) {
      rtb_DataTypeConversion3_e = (int16_T)rtb_Abs_co;
    } else {
      rtb_DataTypeConversion3_e = MIN_int16_T;
    }
  } else {
    rtb_DataTypeConversion3_e = MAX_int16_T;
  }

  /* End of DataTypeConversion: '<S908>/Data Type Conversion3' */
  /* Gain: '<S908>/Convert to integer 0.01Hz resolution' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S908>/motohawk_calibration4'
   */
  rtb_Abs_co = 100.0 * (WASTEGATEFrequency_DataStore());

  /* DataTypeConversion: '<S908>/Data Type Conversion2' */
  if (rtb_Abs_co < 4.294967296E+9) {
    if (rtb_Abs_co >= 0.0) {
      rtb_DataTypeConversion2_p = (uint32_T)rtb_Abs_co;
    } else {
      rtb_DataTypeConversion2_p = 0U;
    }
  } else {
    rtb_DataTypeConversion2_p = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S908>/Data Type Conversion2' */

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

  /* UnitDelay: '<S441>/Unit Delay' */
  rtb_UnitDelay_lk = BaseEngineController_LS_DWork.s441_UnitDelay_DSTATE;

  /* Sum: '<S441>/Sum' incorporates:
   *  Constant: '<S441>/Constant1'
   */
  rtb_Switch_kj = 1U + rtb_UnitDelay_lk;
  if (rtb_Switch_kj < 1U) {
    rtb_Switch_kj = MAX_uint32_T;
  }

  rtb_Sum_hh = rtb_Switch_kj;

  /* End of Sum: '<S441>/Sum' */

  /* RelationalOperator: '<S441>/Relational Operator' incorporates:
   *  Constant: '<S18>/Count'
   */
  rtb_RelationalOperator_jv = (rtb_Sum_hh >= 5U);

  /* S-Function Block: <S370>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (App05In_DataStore()) = rtb_APP1;
    (App05Idx_DataStore()) = TablePrelookup_real_T(rtb_APP1,
      (App05IdxArr_DataStore()), 5, (App05Idx_DataStore()));
    rtb_motohawk_prelookup_b2 = (App05Idx_DataStore());
  }

  /* S-Function Block: <S394>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (ACPres05In_DataStore()) = BaseEngineController_LS_B.s514_Merge;
    (ACPres05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s514_Merge, (ACPres05IdxArr_DataStore()), 5,
       (ACPres05Idx_DataStore()));
    rtb_motohawk_prelookup_b2 = (ACPres05Idx_DataStore());
  }

  /* S-Function Block: <S400>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (RPM05In_DataStore()) = BaseEngineController_LS_B.s500_Sum1;
    (RPM05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s500_Sum1, (RPM05IdxArr_DataStore()), 5,
       (RPM05Idx_DataStore()));
    rtb_motohawk_prelookup_b2 = (RPM05Idx_DataStore());
  }

  /* UnitDelay: '<S413>/Unit Delay1' */
  rtb_DataTypeConversion1_e =
    BaseEngineController_LS_DWork.s413_UnitDelay1_DSTATE;

  /* Sum: '<S413>/Sum3' incorporates:
   *  Constant: '<S413>/Constant1'
   *  Product: '<S413>/Product2'
   *  Product: '<S413>/Product3'
   *  S-Function (motohawk_sfun_calibration): '<S413>/motohawk_calibration1'
   *  Sum: '<S413>/Sum2'
   */
  BaseEngineController_LS_B.s413_Sum3 = (1.0 - (PostO2DelagFiltConst_DataStore()))
    * rtb_DataTypeConversion1_e + (PostO2DelagFiltConst_DataStore()) *
    BaseEngineController_LS_B.s581_Gain;

  /* Sum: '<S411>/Sum3' incorporates:
   *  Constant: '<S411>/kPa Gauge to kPa absolute'
   */
  BaseEngineController_LS_B.s411_Sum3 = (BaseEngineController_LS_B.s535_Merge +
    100.0) - BaseEngineController_LS_B.s551_Merge;

  /* S-Function Block: <S565>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s565_motohawk_delta_time_DWORK1, NULL);
    rtb_Abs_co = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S565>/Product' incorporates:
   *  MinMax: '<S565>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S565>/motohawk_calibration'
   */
  rtb_Abs_co /= (rtb_Abs_co >= (SensVoltFilterConst_DataStore())) || rtIsNaN
    ((SensVoltFilterConst_DataStore())) ? rtb_Abs_co :
    (SensVoltFilterConst_DataStore());

  /* Logic: '<S508>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S508>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S508>/motohawk_fault_status4'
   */
  rtb_RelationalOperator5_fz = (IsFaultActive(97) || IsFaultActive(98));

  /* Logic: '<S508>/Logical Operator6' */
  rtb_LogicalOperator6_b = !rtb_RelationalOperator5_fz;

  /* Logic: '<S508>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S508>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S508>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_a = (IsFaultSuspected(97) || IsFaultSuspected(98));

  /* S-Function Block: <S445>/motohawk_ain3 Resource: SensVoltSensorPin */
  {
    extern NativeError_S SensVoltSensorPin_AnalogInput_Get(uint16_T *adc,
      uint16_T *status);
    SensVoltSensorPin_AnalogInput_Get
      (&BaseEngineController_LS_B.s445_motohawk_ain3, NULL);
  }

  /* DataTypeConversion: '<S508>/Data Type Conversion' */
  rtb_Abs_k = (real_T)BaseEngineController_LS_B.s445_motohawk_ain3;

  /* Product: '<S508>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S508>/motohawk_calibration4'
   */
  rtb_DataTypeConversion1_e = rtb_Abs_k * (SensVoltGain_DataStore());

  /* Sum: '<S508>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S508>/motohawk_calibration5'
   */
  BaseEngineController_LS_B.s508_Sum1 = rtb_DataTypeConversion1_e +
    (SensVoltOfst_DataStore());

  /* UnitDelay: '<S508>/Unit Delay1' */
  rtb_UnitDelay1_c = BaseEngineController_LS_DWork.s508_UnitDelay1_DSTATE;

  /* If: '<S508>/If' incorporates:
   *  Logic: '<S508>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_b && rtb_LogicalOperator1_a) {
    /* Outputs for IfAction SubSystem: '<S508>/If Action Subsystem' incorporates:
     *  ActionPort: '<S566>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay1_c, &rtb_Merge_ht);

    /* End of Outputs for SubSystem: '<S508>/If Action Subsystem' */
  } else if (rtb_RelationalOperator5_fz) {
    /* Outputs for IfAction SubSystem: '<S508>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S567>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((SensVoltDfltValue_DataStore()),
      &rtb_Merge_ht);

    /* End of Outputs for SubSystem: '<S508>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S508>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S568>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      (BaseEngineController_LS_B.s508_Sum1, &rtb_Merge_ht);

    /* End of Outputs for SubSystem: '<S508>/If Action Subsystem2' */
  }

  /* End of If: '<S508>/If' */

  /* Sum: '<S570>/Sum1' incorporates:
   *  Constant: '<S570>/Constant'
   *  Product: '<S570>/Product'
   *  Product: '<S570>/Product1'
   *  Sum: '<S570>/Sum'
   *  UnitDelay: '<S570>/Unit Delay'
   */
  rtb_Sum1_m3 = (1.0 - rtb_Abs_co) *
    BaseEngineController_LS_DWork.s570_UnitDelay_DSTATE + rtb_Merge_ht *
    rtb_Abs_co;

  /* If: '<S569>/If' incorporates:
   *  Inport: '<S571>/In1'
   *  Inport: '<S572>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S569>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S569>/override_enable'
   */
  if ((SensVolt_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S569>/NewValue' incorporates:
     *  ActionPort: '<S571>/Action Port'
     */
    BaseEngineController_LS_B.s569_Merge = (SensVolt_new_DataStore());

    /* End of Outputs for SubSystem: '<S569>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S569>/OldValue' incorporates:
     *  ActionPort: '<S572>/Action Port'
     */
    BaseEngineController_LS_B.s569_Merge = rtb_Sum1_m3;

    /* End of Outputs for SubSystem: '<S569>/OldValue' */
  }

  /* End of If: '<S569>/If' */

  /* If: '<S586>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S586>/override_enable'
   */
  if ((Bank1_OxygenConcentration_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S586>/If' */

  /* If: '<S587>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S587>/override_enable'
   */
  if ((Bank2_OxygenConcentration_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S587>/If' */

  /* If: '<S588>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S588>/override_enable'
   */
  if ((Bank2_SystemVolts_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S588>/If' */

  /* If: '<S589>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S589>/override_enable'
   */
  if ((Bank2_HeaterVolts_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S589>/If' */

  /* If: '<S590>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S590>/override_enable'
   */
  if ((Bank2_SensorDetectedStatus_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S590>/If' */

  /* If: '<S591>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S591>/override_enable'
   */
  if ((Bank2_UsingFreeAreCalState_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S591>/If' */

  /* If: '<S592>/If' incorporates:
   *  Inport: '<S633>/In1'
   *  Inport: '<S634>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S592>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S592>/override_enable'
   */
  if ((Bank2_DataValidState_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S592>/NewValue' incorporates:
     *  ActionPort: '<S633>/Action Port'
     */
    rtb_Product6_m = (Bank2_DataValidState_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S592>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S592>/OldValue' incorporates:
     *  ActionPort: '<S634>/Action Port'
     */
    rtb_Product6_m = BaseEngineController_LS_B.s581_ReadCANMessage1_o8;

    /* End of Outputs for SubSystem: '<S592>/OldValue' */
  }

  /* End of If: '<S592>/If' */

  /* If: '<S593>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S593>/override_enable'
   */
  if ((Bank2_SensorStatus_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S593>/If' */

  /* If: '<S594>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S594>/override_enable'
   */
  if ((Bank2_SensorFaultState_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S594>/If' */

  /* If: '<S595>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S595>/override_enable'
   */
  if ((Bank1_SystemVolts_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S595>/If' */

  /* If: '<S596>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S596>/override_enable'
   */
  if ((Bank1_HeaterVolts_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S596>/If' */

  /* If: '<S597>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S597>/override_enable'
   */
  if ((Bank1_SensorDetectedStatus_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S597>/If' */

  /* If: '<S598>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S598>/override_enable'
   */
  if ((Bank1_UsingFreeAreCalState_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S598>/If' */

  /* If: '<S599>/If' incorporates:
   *  Inport: '<S647>/In1'
   *  Inport: '<S648>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S599>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S599>/override_enable'
   */
  if ((Bank1_DataValidState_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S599>/NewValue' incorporates:
     *  ActionPort: '<S647>/Action Port'
     */
    rtb_Product7_i = (Bank1_DataValidState_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S599>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S599>/OldValue' incorporates:
     *  ActionPort: '<S648>/Action Port'
     */
    rtb_Product7_i = BaseEngineController_LS_B.s581_ReadCANMessage_o8;

    /* End of Outputs for SubSystem: '<S599>/OldValue' */
  }

  /* End of If: '<S599>/If' */

  /* If: '<S600>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S600>/override_enable'
   */
  if ((Bank1_SensorStatus_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S600>/If' */

  /* If: '<S601>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S601>/override_enable'
   */
  if ((Bank1_SensorFaultState_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S601>/If' */

  /* Outputs for Enabled SubSystem: '<S441>/Triggered Subsystem' incorporates:
   *  EnablePort: '<S442>/Enable'
   */
  if (rtb_RelationalOperator_jv) {
    /* Outputs for Function Call SubSystem: '<S11>/Diagnostics' */

    /* S-Function Block: <S333>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s333_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_nr = ((real_T) delta) * 0.000001;
    }

    /* RelationalOperator: '<S331>/RelOp' incorporates:
     *  Constant: '<S331>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S322>/motohawk_data_read'
     */
    rtb_BelowLoTarget_j = (((uint8_T)EngineState_DataStore()) == 3);

    /* Switch: '<S333>/Switch' incorporates:
     *  Constant: '<S333>/Constant'
     *  Logic: '<S322>/Logical Operator'
     *  RelationalOperator: '<S322>/Relational Operator'
     *  S-Function (motohawk_sfun_calibration): '<S322>/motohawk_calibration'
     *  S-Function (motohawk_sfun_data_read): '<S333>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S333>/motohawk_delta_time'
     *  Sum: '<S333>/Sum'
     */
    if (rtb_BelowLoTarget_j && (BaseEngineController_LS_B.s514_Merge >=
         (ACHighPressureDisable_DataStore()))) {
      rtb_DataTypeConversion1_e = rtb_motohawk_delta_time_nr +
        AChighPressureTimer_DataStore();
    } else {
      rtb_DataTypeConversion1_e = 0.0;
    }

    /* End of Switch: '<S333>/Switch' */
    /* RelationalOperator: '<S322>/Relational Operator5' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S322>/motohawk_calibration3'
     */
    rtb_RelationalOperator5_o = ((rtb_DataTypeConversion1_e >
      (ACHighPressureTime_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S322>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: ACChargeHigh_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(0, rtb_RelationalOperator5_o);
      UpdateFault(0);
    }

    /* S-Function Block: <S332>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s332_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_lw = ((real_T) delta) * 0.000001;
    }

    /* Switch: '<S332>/Switch' incorporates:
     *  Constant: '<S332>/Constant'
     *  Logic: '<S322>/Logical Operator1'
     *  RelationalOperator: '<S322>/Relational Operator1'
     *  S-Function (motohawk_sfun_calibration): '<S322>/motohawk_calibration2'
     *  S-Function (motohawk_sfun_data_read): '<S332>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S332>/motohawk_delta_time'
     *  Sum: '<S332>/Sum'
     */
    if (rtb_BelowLoTarget_j && (BaseEngineController_LS_B.s514_Merge <=
         (ACLowPressureDisable_DataStore())) &&
        BaseEngineController_LS_B.s135_AC) {
      rtb_Switch1_f = rtb_motohawk_delta_time_lw + ACLowPressureTimer_DataStore();
    } else {
      rtb_Switch1_f = 0.0;
    }

    /* End of Switch: '<S332>/Switch' */
    /* Logic: '<S322>/Logical Operator2' incorporates:
     *  RelationalOperator: '<S322>/Relational Operator3'
     *  S-Function (motohawk_sfun_calibration): '<S322>/motohawk_calibration1'
     */
    rtb_LogicalOperator2_m = (((rtb_Switch1_f > (ACLowPressureTime_DataStore()))
      && BaseEngineController_LS_B.s135_AC));

    /* S-Function (motohawk_sfun_fault_def): '<S322>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: ACChargeLow_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(1, rtb_LogicalOperator2_m);
      UpdateFault(1);
    }

    /* Saturate: '<S332>/Saturation' */
    rtb_Saturation_o = rtb_Switch1_f >= 16000.0 ? 16000.0 : rtb_Switch1_f <= 0.0
      ? 0.0 : rtb_Switch1_f;

    /* S-Function (motohawk_sfun_data_write): '<S332>/motohawk_data_write' */
    /* Write to Data Storage as scalar: ACLowPressureTimer */
    {
      ACLowPressureTimer_DataStore() = rtb_Saturation_o;
    }

    /* Saturate: '<S333>/Saturation' */
    rtb_Saturation_d = rtb_DataTypeConversion1_e >= 16000.0 ? 16000.0 :
      rtb_DataTypeConversion1_e <= 0.0 ? 0.0 : rtb_DataTypeConversion1_e;

    /* S-Function (motohawk_sfun_data_write): '<S333>/motohawk_data_write' */
    /* Write to Data Storage as scalar: AChighPressureTimer */
    {
      AChighPressureTimer_DataStore() = rtb_Saturation_d;
    }

    /* S-Function Block: <S336>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s336_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_fj = ((real_T) delta) * 0.000001;
    }

    /* RelationalOperator: '<S334>/RelOp' incorporates:
     *  Constant: '<S334>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S323>/motohawk_data_read'
     */
    rtb_BelowLoTarget_j = (((uint8_T)EngineState_DataStore()) == 3);

    /* Gain: '<S323>/kPa to PSI' */
    rtb_Switch1_f = 0.145038 * BaseEngineController_LS_B.s543_Merge;

    /* Switch: '<S336>/Switch' incorporates:
     *  Constant: '<S336>/Constant'
     *  Logic: '<S323>/Logical Operator'
     *  RelationalOperator: '<S323>/Relational Operator'
     *  S-Function (motohawk_sfun_calibration): '<S323>/motohawk_calibration'
     *  S-Function (motohawk_sfun_data_read): '<S336>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S336>/motohawk_delta_time'
     *  Sum: '<S336>/Sum'
     */
    if (rtb_BelowLoTarget_j && (rtb_Switch1_f >= (SoftOverBoostLimit_DataStore())))
    {
      rtb_DataTypeConversion1_e = rtb_motohawk_delta_time_fj +
        SoftOverBoostTimer_DataStore();
    } else {
      rtb_DataTypeConversion1_e = 0.0;
    }

    /* End of Switch: '<S336>/Switch' */
    /* RelationalOperator: '<S323>/Relational Operator5' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S323>/motohawk_calibration3'
     */
    rtb_RelationalOperator5_f = ((rtb_DataTypeConversion1_e >
      (SoftOverBoostTime_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S323>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: SoftOverBoost_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(99, rtb_RelationalOperator5_f);
      UpdateFault(99);
    }

    /* S-Function Block: <S335>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s335_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_i0 = ((real_T) delta) * 0.000001;
    }

    /* Switch: '<S335>/Switch' incorporates:
     *  Constant: '<S335>/Constant'
     *  Logic: '<S323>/Logical Operator1'
     *  RelationalOperator: '<S323>/Relational Operator1'
     *  S-Function (motohawk_sfun_calibration): '<S323>/motohawk_calibration1'
     *  S-Function (motohawk_sfun_data_read): '<S335>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S335>/motohawk_delta_time'
     *  Sum: '<S335>/Sum'
     */
    if (rtb_BelowLoTarget_j && (rtb_Switch1_f >= (HardOverBoostLimit_DataStore())))
    {
      rtb_Switch1_f = rtb_motohawk_delta_time_i0 + HardOverBoostTimer_DataStore();
    } else {
      rtb_Switch1_f = 0.0;
    }

    /* End of Switch: '<S335>/Switch' */
    /* RelationalOperator: '<S323>/Relational Operator3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S323>/motohawk_calibration4'
     */
    rtb_RelationalOperator3_mn = ((rtb_Switch1_f > (HardOverBoostTime_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S323>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: HardOverBoost_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(64, rtb_RelationalOperator3_mn);
      UpdateFault(64);
    }

    /* S-Function Block: <S337>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s337_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_k = ((real_T) delta) * 0.000001;
    }

    /* Switch: '<S337>/Switch' incorporates:
     *  Constant: '<S337>/Constant'
     *  Logic: '<S323>/Logical Operator2'
     *  RelationalOperator: '<S323>/Relational Operator2'
     *  S-Function (motohawk_sfun_calibration): '<S323>/motohawk_calibration2'
     *  S-Function (motohawk_sfun_data_read): '<S337>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S337>/motohawk_delta_time'
     *  Sum: '<S337>/Sum'
     */
    if (rtb_BelowLoTarget_j && (BaseEngineController_LS_B.s135_WASTEGATE >=
         (WastegateLossOfControl_DataStore()))) {
      rtb_motohawk_interpolation_1d3_a = rtb_motohawk_delta_time_k +
        WastegateTimer_DataStore();
    } else {
      rtb_motohawk_interpolation_1d3_a = 0.0;
    }

    /* End of Switch: '<S337>/Switch' */
    /* RelationalOperator: '<S323>/Relational Operator4' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S323>/motohawk_calibration5'
     */
    rtb_RelationalOperator4_f = ((rtb_motohawk_interpolation_1d3_a >
      (WastegateTime_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S323>/motohawk_fault_def3' */

    /* Set Fault Suspected Status: Wastegate_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(118, rtb_RelationalOperator4_f);
      UpdateFault(118);
    }

    /* Saturate: '<S335>/Saturation' */
    rtb_Saturation_nn = rtb_Switch1_f >= 16000.0 ? 16000.0 : rtb_Switch1_f <=
      0.0 ? 0.0 : rtb_Switch1_f;

    /* S-Function (motohawk_sfun_data_write): '<S335>/motohawk_data_write' */
    /* Write to Data Storage as scalar: HardOverBoostTimer */
    {
      HardOverBoostTimer_DataStore() = rtb_Saturation_nn;
    }

    /* Saturate: '<S336>/Saturation' */
    rtb_Saturation_a0 = rtb_DataTypeConversion1_e >= 16000.0 ? 16000.0 :
      rtb_DataTypeConversion1_e <= 0.0 ? 0.0 : rtb_DataTypeConversion1_e;

    /* S-Function (motohawk_sfun_data_write): '<S336>/motohawk_data_write' */
    /* Write to Data Storage as scalar: SoftOverBoostTimer */
    {
      SoftOverBoostTimer_DataStore() = rtb_Saturation_a0;
    }

    /* Saturate: '<S337>/Saturation' */
    rtb_Saturation_f = rtb_motohawk_interpolation_1d3_a >= 16000.0 ? 16000.0 :
      rtb_motohawk_interpolation_1d3_a <= 0.0 ? 0.0 :
      rtb_motohawk_interpolation_1d3_a;

    /* S-Function (motohawk_sfun_data_write): '<S337>/motohawk_data_write' */
    /* Write to Data Storage as scalar: WastegateTimer */
    {
      WastegateTimer_DataStore() = rtb_Saturation_f;
    }

    /* S-Function Block: <S343>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s343_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_eae = ((real_T) delta) * 0.000001;
    }

    /* Product: '<S326>/Product' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S326>/motohawk_data_read'
     *  S-Function (motohawk_sfun_fault_status): '<S326>/motohawk_fault_status2'
     */
    rtb_Gain5 = (uint8_T)(IsFaultActive(23) ? ((uint8_T)Bank2_Enable_DataStore())
                          : 0);

    /* Product: '<S326>/Product1' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S326>/motohawk_data_read'
     *  S-Function (motohawk_sfun_fault_status): '<S326>/motohawk_fault_status3'
     */
    rtb_Gain4 = (uint8_T)(IsFaultActive(24) ? ((uint8_T)Bank2_Enable_DataStore())
                          : 0);

    /* Logic: '<S326>/Logical Operator3' incorporates:
     *  Logic: '<S326>/Logical Operator1'
     *  S-Function (motohawk_sfun_fault_status): '<S326>/motohawk_fault_status'
     *  S-Function (motohawk_sfun_fault_status): '<S326>/motohawk_fault_status1'
     */
    rtb_LogicalOperator6_b = !((rtb_Gain5 != 0) || (rtb_Gain4 != 0) ||
      IsFaultActive(21) || IsFaultActive(22) ||
      BaseEngineController_LS_B.s461_Merge);

    /* Switch: '<S343>/Switch' incorporates:
     *  Constant: '<S343>/Constant'
     *  Logic: '<S326>/Logical Operator4'
     *  RelationalOperator: '<S326>/Relational Operator1'
     *  S-Function (motohawk_sfun_calibration): '<S326>/motohawk_calibration3'
     *  S-Function (motohawk_sfun_data_read): '<S343>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S343>/motohawk_delta_time'
     *  Sum: '<S343>/Sum'
     */
    if (rtb_LogicalOperator6_b && (BaseEngineController_LS_B.s581_Gain <
         (LeanProtect_Threshold_DataStore()))) {
      rtb_motohawk_interpolation_1d3_a = rtb_motohawk_delta_time_eae +
        LeanProect_Tmr_DataStore();
    } else {
      rtb_motohawk_interpolation_1d3_a = 0.0;
    }

    /* End of Switch: '<S343>/Switch' */
    /* RelationalOperator: '<S326>/Relational Operator5' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S326>/motohawk_calibration1'
     */
    rtb_RelationalOperator5_ok = ((rtb_motohawk_interpolation_1d3_a >
      (LeanProtec_TmrThresh_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S326>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: LeanProtect_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(80, rtb_RelationalOperator5_ok);
      UpdateFault(80);
    }

    /* Saturate: '<S343>/Saturation' */
    rtb_Saturation_p = rtb_motohawk_interpolation_1d3_a >= 16000.0 ? 16000.0 :
      rtb_motohawk_interpolation_1d3_a <= 0.0 ? 0.0 :
      rtb_motohawk_interpolation_1d3_a;

    /* S-Function (motohawk_sfun_data_write): '<S343>/motohawk_data_write' */
    /* Write to Data Storage as scalar: LeanProect_Tmr */
    {
      LeanProect_Tmr_DataStore() = rtb_Saturation_p;
    }

    /* S-Function Block: <S347>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s347_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_ij = ((real_T) delta) * 0.000001;
    }

    /* Logic: '<S328>/Logical Operator3' incorporates:
     *  Logic: '<S328>/Logical Operator1'
     *  S-Function (motohawk_sfun_fault_status): '<S328>/motohawk_fault_status'
     *  S-Function (motohawk_sfun_fault_status): '<S328>/motohawk_fault_status1'
     *  S-Function (motohawk_sfun_fault_status): '<S328>/motohawk_fault_status2'
     *  S-Function (motohawk_sfun_fault_status): '<S328>/motohawk_fault_status3'
     *  S-Function (motohawk_sfun_fault_status): '<S328>/motohawk_fault_status4'
     *  S-Function (motohawk_sfun_fault_status): '<S328>/motohawk_fault_status5'
     */
    rtb_BelowLoTarget_j = !(IsFaultActive(107) || IsFaultActive(113) ||
      IsFaultActive(108) || IsFaultActive(114) || IsFaultActive(83) ||
      IsFaultActive(84));

    /* RelationalOperator: '<S346>/RelOp' incorporates:
     *  Constant: '<S346>/Constant'
     */
    rtb_RelOp_mp = (BaseEngineController_LS_B.s430_State == 3);

    /* RelationalOperator: '<S328>/Relational Operator3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S328>/motohawk_calibration2'
     */
    rtb_LogicalOperator6_b = (BaseEngineController_LS_B.s415_Switch2 <
      (MAP_IR_TPS_CL_DataStore()));

    /* Switch: '<S347>/Switch' incorporates:
     *  Constant: '<S347>/Constant'
     *  Logic: '<S328>/Logical Operator4'
     *  RelationalOperator: '<S328>/Relational Operator4'
     *  S-Function (motohawk_sfun_calibration): '<S328>/motohawk_calibration4'
     *  S-Function (motohawk_sfun_data_read): '<S347>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S347>/motohawk_delta_time'
     *  Sum: '<S347>/Sum'
     */
    if (rtb_BelowLoTarget_j && rtb_RelOp_mp && rtb_LogicalOperator6_b &&
        (BaseEngineController_LS_B.s543_Merge > (MAP_IR_HI_DataStore()))) {
      rtb_motohawk_interpolation_1d3_a = rtb_motohawk_delta_time_ij +
        MapHiFaultTimer_DataStore();
    } else {
      rtb_motohawk_interpolation_1d3_a = 0.0;
    }

    /* End of Switch: '<S347>/Switch' */

    /* RelationalOperator: '<S328>/Relational Operator5' incorporates:
     *  Constant: '<S328>/Constant'
     */
    rtb_RelationalOperator5_j = ((rtb_motohawk_interpolation_1d3_a > 5.0));

    /* S-Function (motohawk_sfun_fault_def): '<S328>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: MAP_IR_HI */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(87, rtb_RelationalOperator5_j);
      UpdateFault(87);
    }

    /* S-Function Block: <S348>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s348_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_hv = ((real_T) delta) * 0.000001;
    }

    /* RelationalOperator: '<S328>/Relational Operator1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S328>/motohawk_calibration6'
     */
    rtb_LogicalOperator6_b = (BaseEngineController_LS_B.s415_Switch2 >
      (MAP_IR_TPS_OP_DataStore()));

    /* Switch: '<S348>/Switch' incorporates:
     *  Constant: '<S348>/Constant'
     *  Logic: '<S328>/Logical Operator2'
     *  RelationalOperator: '<S328>/Relational Operator2'
     *  S-Function (motohawk_sfun_calibration): '<S328>/motohawk_calibration5'
     *  S-Function (motohawk_sfun_data_read): '<S348>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S348>/motohawk_delta_time'
     *  Sum: '<S348>/Sum'
     */
    if (rtb_BelowLoTarget_j && rtb_RelOp_mp && rtb_LogicalOperator6_b &&
        (BaseEngineController_LS_B.s543_Merge < (MAP_IR_LO_DataStore()))) {
      rtb_Switch1_f = rtb_motohawk_delta_time_hv + MapLoFaultTimer_DataStore();
    } else {
      rtb_Switch1_f = 0.0;
    }

    /* End of Switch: '<S348>/Switch' */

    /* RelationalOperator: '<S328>/Relational Operator6' incorporates:
     *  Constant: '<S328>/Constant1'
     */
    rtb_RelationalOperator6 = ((rtb_Switch1_f > 5.0));

    /* S-Function (motohawk_sfun_fault_def): '<S328>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: MAP_IR_LO */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(88, rtb_RelationalOperator6);
      UpdateFault(88);
    }

    /* S-Function Block: <S349>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s349_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_hc = ((real_T) delta) * 0.000001;
    }

    /* RelationalOperator: '<S328>/Relational Operator7' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S328>/motohawk_calibration8'
     */
    rtb_LogicalOperator6_b = (BaseEngineController_LS_B.s415_Switch2 <
      (MAP_TPS_STUCK_DataStore()));

    /* Sum: '<S328>/Add' */
    rtb_DataTypeConversion1_e = BaseEngineController_LS_B.s375_Sum -
      BaseEngineController_LS_B.s543_Merge;

    /* Switch: '<S349>/Switch' incorporates:
     *  Constant: '<S349>/Constant'
     *  Logic: '<S328>/Logical Operator5'
     *  RelationalOperator: '<S328>/Relational Operator8'
     *  S-Function (motohawk_sfun_calibration): '<S328>/motohawk_calibration7'
     *  S-Function (motohawk_sfun_data_read): '<S349>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S349>/motohawk_delta_time'
     *  Sum: '<S349>/Sum'
     */
    if (rtb_BelowLoTarget_j && rtb_RelOp_mp && rtb_LogicalOperator6_b &&
        (rtb_DataTypeConversion1_e < (MAP_STUCK_DataStore()))) {
      rtb_DataTypeConversion1_e = rtb_motohawk_delta_time_hc +
        MapStickFaultTimer_DataStore();
    } else {
      rtb_DataTypeConversion1_e = 0.0;
    }

    /* End of Switch: '<S349>/Switch' */

    /* RelationalOperator: '<S328>/Relational Operator9' incorporates:
     *  Constant: '<S328>/Constant2'
     */
    rtb_RelationalOperator9_g = ((rtb_DataTypeConversion1_e > 5.0));

    /* S-Function (motohawk_sfun_fault_def): '<S328>/motohawk_fault_def3' */

    /* Set Fault Suspected Status: MAP_STICKING */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(89, rtb_RelationalOperator9_g);
      UpdateFault(89);
    }

    /* Saturate: '<S347>/Saturation' */
    rtb_Saturation_j = rtb_motohawk_interpolation_1d3_a >= 16000.0 ? 16000.0 :
      rtb_motohawk_interpolation_1d3_a <= 0.0 ? 0.0 :
      rtb_motohawk_interpolation_1d3_a;

    /* S-Function (motohawk_sfun_data_write): '<S347>/motohawk_data_write' */
    /* Write to Data Storage as scalar: MapHiFaultTimer */
    {
      MapHiFaultTimer_DataStore() = rtb_Saturation_j;
    }

    /* Saturate: '<S348>/Saturation' */
    rtb_Saturation_em = rtb_Switch1_f >= 16000.0 ? 16000.0 : rtb_Switch1_f <=
      0.0 ? 0.0 : rtb_Switch1_f;

    /* S-Function (motohawk_sfun_data_write): '<S348>/motohawk_data_write' */
    /* Write to Data Storage as scalar: MapLoFaultTimer */
    {
      MapLoFaultTimer_DataStore() = rtb_Saturation_em;
    }

    /* Saturate: '<S349>/Saturation' */
    rtb_Saturation_i = rtb_DataTypeConversion1_e >= 16000.0 ? 16000.0 :
      rtb_DataTypeConversion1_e <= 0.0 ? 0.0 : rtb_DataTypeConversion1_e;

    /* S-Function (motohawk_sfun_data_write): '<S349>/motohawk_data_write' */
    /* Write to Data Storage as scalar: MapStickFaultTimer */
    {
      MapStickFaultTimer_DataStore() = rtb_Saturation_i;
    }

    /* RelationalOperator: '<S352>/LT' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S350>/motohawk_calibration'
     */
    rtb_RelOp_mp = (BaseEngineController_LS_B.s444_RPMInst >=
                    (BaseRevLimit_DataStore()));

    /* Sum: '<S350>/Sum2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S350>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S350>/motohawk_calibration1'
     */
    rtb_DataTypeConversion1_e = (BaseRevLimit_DataStore()) -
      (RevLimitHyst_DataStore());

    /* RelationalOperator: '<S352>/LT1' */
    rtb_BelowLoTarget_j = (BaseEngineController_LS_B.s444_RPMInst <=
      rtb_DataTypeConversion1_e);

    /* CombinatorialLogic: '<S355>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_RelOp_mp != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_j != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_l[0] =
        BaseEngineController_LS_ConstP.pooled863[rowidx];
      rtb_CombinatorialLogic_l[1] =
        BaseEngineController_LS_ConstP.pooled863[rowidx + 4];
    }

    /* Switch: '<S355>/Switch1' incorporates:
     *  UnitDelay: '<S355>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_l[1]) {
      rtb_Switch1_mj = rtb_CombinatorialLogic_l[0];
    } else {
      rtb_Switch1_mj = BaseEngineController_LS_DWork.s355_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S355>/Switch1' */
    /* Sum: '<S350>/Sum3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S350>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S350>/motohawk_calibration2'
     */
    rtb_motohawk_interpolation_1d3_a = (BaseRevLimit_DataStore()) +
      (MediumRevOffset_DataStore());

    /* RelationalOperator: '<S353>/LT' */
    rtb_RelOp_mp = (BaseEngineController_LS_B.s444_RPMInst >=
                    rtb_motohawk_interpolation_1d3_a);

    /* Sum: '<S350>/Sum1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S350>/motohawk_calibration1'
     */
    rtb_Switch1_f = rtb_motohawk_interpolation_1d3_a - (RevLimitHyst_DataStore());

    /* RelationalOperator: '<S353>/LT1' */
    rtb_BelowLoTarget_j = (BaseEngineController_LS_B.s444_RPMInst <=
      rtb_Switch1_f);

    /* CombinatorialLogic: '<S356>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_RelOp_mp != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_j != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_l[0] =
        BaseEngineController_LS_ConstP.pooled863[rowidx];
      rtb_CombinatorialLogic_l[1] =
        BaseEngineController_LS_ConstP.pooled863[rowidx + 4];
    }

    /* Switch: '<S356>/Switch1' incorporates:
     *  UnitDelay: '<S356>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_l[1]) {
      rtb_Switch1_e = rtb_CombinatorialLogic_l[0];
    } else {
      rtb_Switch1_e = BaseEngineController_LS_DWork.s356_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S356>/Switch1' */

    /* Switch: '<S353>/Switch2' incorporates:
     *  Logic: '<S353>/Logical Operator'
     */
    if (rtb_Switch1_e) {
      rtb_motohawk_interpolation_1d3_a = rtb_Switch1_f;
    }

    /* End of Switch: '<S353>/Switch2' */

    /* RelationalOperator: '<S350>/Overspeed1' */
    rtb_LogicalOperator6_b = (BaseEngineController_LS_B.s444_RPMInst >
      rtb_motohawk_interpolation_1d3_a);

    /* Logic: '<S329>/Logical Operator' */
    rtb_RelOp_mp = !BaseEngineController_LS_B.s488_Merge;

    /* RelationalOperator: '<S358>/LT' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S351>/motohawk_calibration'
     */
    rtb_BelowLoTarget_j = (BaseEngineController_LS_B.s444_RPMInst >=
      (TwoStepRevLimit_DataStore()));

    /* Sum: '<S351>/Sum2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S351>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S351>/motohawk_calibration1'
     */
    rtb_Switch_o = (TwoStepRevLimit_DataStore()) -
      (TwoStepRevLimitHyst_DataStore());

    /* RelationalOperator: '<S358>/LT1' */
    rtb_LogicalOperator3_cj = (BaseEngineController_LS_B.s444_RPMInst <=
      rtb_Switch_o);

    /* CombinatorialLogic: '<S361>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_j != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_LogicalOperator3_cj != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_l[0] =
        BaseEngineController_LS_ConstP.pooled863[rowidx];
      rtb_CombinatorialLogic_l[1] =
        BaseEngineController_LS_ConstP.pooled863[rowidx + 4];
    }

    /* Switch: '<S361>/Switch1' incorporates:
     *  UnitDelay: '<S361>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_l[1]) {
      rtb_Switch1_l = rtb_CombinatorialLogic_l[0];
    } else {
      rtb_Switch1_l = BaseEngineController_LS_DWork.s361_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S361>/Switch1' */
    /* Sum: '<S351>/Sum3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S351>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S351>/motohawk_calibration2'
     */
    rtb_motohawk_interpolation_1d3_a = (TwoStepRevLimit_DataStore()) +
      (TwoStepMediumRevOffset_DataStore());

    /* RelationalOperator: '<S359>/LT' */
    rtb_LogicalOperator3_cj = (BaseEngineController_LS_B.s444_RPMInst >=
      rtb_motohawk_interpolation_1d3_a);

    /* Sum: '<S351>/Sum1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S351>/motohawk_calibration1'
     */
    rtb_Switch1_f = rtb_motohawk_interpolation_1d3_a -
      (TwoStepRevLimitHyst_DataStore());

    /* RelationalOperator: '<S359>/LT1' */
    rtb_BelowLoTarget_j = (BaseEngineController_LS_B.s444_RPMInst <=
      rtb_Switch1_f);

    /* CombinatorialLogic: '<S362>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_LogicalOperator3_cj != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_j != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_l[0] =
        BaseEngineController_LS_ConstP.pooled863[rowidx];
      rtb_CombinatorialLogic_l[1] =
        BaseEngineController_LS_ConstP.pooled863[rowidx + 4];
    }

    /* Switch: '<S362>/Switch1' incorporates:
     *  UnitDelay: '<S362>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_l[1]) {
      rtb_Switch1_o = rtb_CombinatorialLogic_l[0];
    } else {
      rtb_Switch1_o = BaseEngineController_LS_DWork.s362_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S362>/Switch1' */

    /* Switch: '<S359>/Switch2' incorporates:
     *  Logic: '<S359>/Logical Operator'
     */
    if (rtb_Switch1_o) {
      rtb_motohawk_interpolation_1d3_a = rtb_Switch1_f;
    }

    /* End of Switch: '<S359>/Switch2' */

    /* RelationalOperator: '<S351>/Overspeed1' */
    rtb_LogicalOperator1_a = (BaseEngineController_LS_B.s444_RPMInst >
      rtb_motohawk_interpolation_1d3_a);

    /* Switch: '<S329>/Switch' incorporates:
     *  Logic: '<S350>/Logical Operator3'
     *  Logic: '<S350>/Logical Operator4'
     *  Logic: '<S351>/Logical Operator3'
     *  Logic: '<S351>/Logical Operator4'
     *  RelationalOperator: '<S350>/Overspeed'
     *  RelationalOperator: '<S351>/Overspeed'
     */
    if (rtb_RelOp_mp) {
      /* Switch: '<S352>/Switch2' incorporates:
       *  Logic: '<S352>/Logical Operator'
       *  S-Function (motohawk_sfun_calibration): '<S350>/motohawk_calibration'
       */
      if (!rtb_Switch1_mj) {
        rtb_DataTypeConversion1_e = (BaseRevLimit_DataStore());
      }

      /* End of Switch: '<S352>/Switch2' */
      rtb_LogicalOperator3_cj = ((BaseEngineController_LS_B.s444_RPMInst >
        rtb_DataTypeConversion1_e) && (!rtb_LogicalOperator6_b));
    } else {
      /* Switch: '<S358>/Switch2' incorporates:
       *  Logic: '<S358>/Logical Operator'
       *  S-Function (motohawk_sfun_calibration): '<S351>/motohawk_calibration'
       */
      if (!rtb_Switch1_l) {
        rtb_Switch_o = (TwoStepRevLimit_DataStore());
      }

      /* End of Switch: '<S358>/Switch2' */
      rtb_LogicalOperator3_cj = ((BaseEngineController_LS_B.s444_RPMInst >
        rtb_Switch_o) && (!rtb_LogicalOperator1_a));
    }

    /* End of Switch: '<S329>/Switch' */

    /* S-Function (motohawk_sfun_fault_def): '<S329>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: SoftOverspeed */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(100, rtb_LogicalOperator3_cj);
      UpdateFault(100);
    }

    /* Sum: '<S350>/Sum5' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S350>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S350>/motohawk_calibration4'
     */
    rtb_motohawk_interpolation_1d3_a = (BaseRevLimit_DataStore()) +
      (HardRevOffset_DataStore());

    /* RelationalOperator: '<S354>/LT' */
    rtb_LogicalOperator3_cj = (BaseEngineController_LS_B.s444_RPMInst >=
      rtb_motohawk_interpolation_1d3_a);

    /* Sum: '<S350>/Sum4' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S350>/motohawk_calibration1'
     */
    rtb_Switch1_f = rtb_motohawk_interpolation_1d3_a - (RevLimitHyst_DataStore());

    /* RelationalOperator: '<S354>/LT1' */
    rtb_BelowLoTarget_j = (BaseEngineController_LS_B.s444_RPMInst <=
      rtb_Switch1_f);

    /* CombinatorialLogic: '<S357>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_LogicalOperator3_cj != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_j != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_l[0] =
        BaseEngineController_LS_ConstP.pooled863[rowidx];
      rtb_CombinatorialLogic_l[1] =
        BaseEngineController_LS_ConstP.pooled863[rowidx + 4];
    }

    /* Switch: '<S357>/Switch1' incorporates:
     *  UnitDelay: '<S357>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_l[1]) {
      rtb_Switch1_l3 = rtb_CombinatorialLogic_l[0];
    } else {
      rtb_Switch1_l3 = BaseEngineController_LS_DWork.s357_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S357>/Switch1' */

    /* Switch: '<S354>/Switch2' incorporates:
     *  Logic: '<S354>/Logical Operator'
     */
    if (rtb_Switch1_l3) {
      rtb_motohawk_interpolation_1d3_a = rtb_Switch1_f;
    }

    /* End of Switch: '<S354>/Switch2' */

    /* RelationalOperator: '<S350>/Overspeed2' */
    rtb_RelationalOperator3_bp = (BaseEngineController_LS_B.s444_RPMInst >
      rtb_motohawk_interpolation_1d3_a);

    /* Sum: '<S351>/Sum5' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S351>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S351>/motohawk_calibration4'
     */
    rtb_motohawk_interpolation_1d3_a = (TwoStepRevLimit_DataStore()) +
      (TwoStepHardRevOffset_DataStore());

    /* RelationalOperator: '<S360>/LT' */
    rtb_LogicalOperator3_cj = (BaseEngineController_LS_B.s444_RPMInst >=
      rtb_motohawk_interpolation_1d3_a);

    /* Sum: '<S351>/Sum4' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S351>/motohawk_calibration1'
     */
    rtb_Switch1_f = rtb_motohawk_interpolation_1d3_a -
      (TwoStepRevLimitHyst_DataStore());

    /* RelationalOperator: '<S360>/LT1' */
    rtb_BelowLoTarget_j = (BaseEngineController_LS_B.s444_RPMInst <=
      rtb_Switch1_f);

    /* CombinatorialLogic: '<S363>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_LogicalOperator3_cj != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_j != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_l[0] =
        BaseEngineController_LS_ConstP.pooled863[rowidx];
      rtb_CombinatorialLogic_l[1] =
        BaseEngineController_LS_ConstP.pooled863[rowidx + 4];
    }

    /* Switch: '<S363>/Switch1' incorporates:
     *  UnitDelay: '<S363>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_l[1]) {
      rtb_Switch1_bv = rtb_CombinatorialLogic_l[0];
    } else {
      rtb_Switch1_bv = BaseEngineController_LS_DWork.s363_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S363>/Switch1' */

    /* Switch: '<S360>/Switch2' incorporates:
     *  Logic: '<S360>/Logical Operator'
     */
    if (rtb_Switch1_bv) {
      rtb_motohawk_interpolation_1d3_a = rtb_Switch1_f;
    }

    /* End of Switch: '<S360>/Switch2' */

    /* RelationalOperator: '<S351>/Overspeed2' */
    rtb_RelOp_pu = (BaseEngineController_LS_B.s444_RPMInst >
                    rtb_motohawk_interpolation_1d3_a);

    /* Switch: '<S329>/Switch1' incorporates:
     *  Logic: '<S350>/Logical Operator5'
     *  Logic: '<S350>/Logical Operator6'
     *  Logic: '<S351>/Logical Operator5'
     *  Logic: '<S351>/Logical Operator6'
     */
    if (rtb_RelOp_mp) {
      rtb_LogicalOperator3_cj = (rtb_LogicalOperator6_b &&
        (!rtb_RelationalOperator3_bp));
    } else {
      rtb_LogicalOperator3_cj = (rtb_LogicalOperator1_a && (!rtb_RelOp_pu));
    }

    /* End of Switch: '<S329>/Switch1' */

    /* S-Function (motohawk_sfun_fault_def): '<S329>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: MediumOverspeed */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(90, rtb_LogicalOperator3_cj);
      UpdateFault(90);
    }

    /* Switch: '<S329>/Switch2' */
    if (rtb_RelOp_mp) {
      rtb_RelOp_mp = rtb_RelationalOperator3_bp;
    } else {
      rtb_RelOp_mp = rtb_RelOp_pu;
    }

    /* End of Switch: '<S329>/Switch2' */

    /* S-Function (motohawk_sfun_fault_def): '<S329>/motohawk_fault_def3' */

    /* Set Fault Suspected Status: HardOverspeed */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(65, rtb_RelOp_mp);
      UpdateFault(65);
    }

    /* S-Function Block: <S365>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s365_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_ks = ((real_T) delta) * 0.000001;
    }

    /* Logic: '<S330>/Logical Operator3' incorporates:
     *  Logic: '<S330>/Logical Operator1'
     *  S-Function (motohawk_sfun_fault_status): '<S330>/motohawk_fault_status'
     *  S-Function (motohawk_sfun_fault_status): '<S330>/motohawk_fault_status1'
     */
    rtb_LogicalOperator3_cj = !(IsFaultActive(60) || IsFaultActive(61) ||
      BaseEngineController_LS_B.s461_Merge);

    /* Sum: '<S330>/Sum3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S330>/motohawk_calibration2'
     */
    rtb_motohawk_interpolation_1d3_a = BaseEngineController_LS_B.s411_Sum3 -
      (FuelPres_DeltaTarget_DataStore());

    /* Switch: '<S365>/Switch' incorporates:
     *  Constant: '<S365>/Constant'
     *  Gain: '<S330>/invert'
     *  Logic: '<S330>/Logical Operator4'
     *  RelationalOperator: '<S330>/Relational Operator1'
     *  S-Function (motohawk_sfun_calibration): '<S330>/motohawk_calibration3'
     *  S-Function (motohawk_sfun_data_read): '<S365>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S365>/motohawk_delta_time'
     *  Sum: '<S365>/Sum'
     */
    if (rtb_LogicalOperator3_cj && (rtb_motohawk_interpolation_1d3_a <
         -(FuelPres_DeltaTolerance_DataStore()))) {
      rtb_Switch1_f = rtb_motohawk_delta_time_ks +
        FuelPresLow_FaultTimer_DataStore();
    } else {
      rtb_Switch1_f = 0.0;
    }

    /* End of Switch: '<S365>/Switch' */
    /* RelationalOperator: '<S330>/Relational Operator5' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S330>/motohawk_calibration1'
     */
    rtb_RelationalOperator5_aj = ((rtb_Switch1_f >
      (FuelPres_FaultTimer_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S330>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: FuelPresLow_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(59, rtb_RelationalOperator5_aj);
      UpdateFault(59);
    }

    /* S-Function Block: <S364>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s364_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_dj = ((real_T) delta) * 0.000001;
    }

    /* Switch: '<S364>/Switch' incorporates:
     *  Constant: '<S364>/Constant'
     *  Logic: '<S330>/Logical Operator2'
     *  RelationalOperator: '<S330>/Relational Operator3'
     *  S-Function (motohawk_sfun_calibration): '<S330>/motohawk_calibration3'
     *  S-Function (motohawk_sfun_data_read): '<S364>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S364>/motohawk_delta_time'
     *  Sum: '<S364>/Sum'
     */
    if (rtb_LogicalOperator3_cj && (rtb_motohawk_interpolation_1d3_a >
         (FuelPres_DeltaTolerance_DataStore()))) {
      rtb_motohawk_interpolation_1d3_a = rtb_motohawk_delta_time_dj +
        FuelPresHigh_FaultTimer_DataStore();
    } else {
      rtb_motohawk_interpolation_1d3_a = 0.0;
    }

    /* End of Switch: '<S364>/Switch' */

    /* RelationalOperator: '<S330>/Relational Operator2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S330>/motohawk_calibration1'
     */
    rtb_RelationalOperator2_c4 = ((rtb_motohawk_interpolation_1d3_a >
      (FuelPres_FaultTimer_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S330>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: FuelPresHigh_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(58, rtb_RelationalOperator2_c4);
      UpdateFault(58);
    }

    /* Saturate: '<S364>/Saturation' */
    rtb_Saturation_or = rtb_motohawk_interpolation_1d3_a >= 16000.0 ? 16000.0 :
      rtb_motohawk_interpolation_1d3_a <= 0.0 ? 0.0 :
      rtb_motohawk_interpolation_1d3_a;

    /* S-Function (motohawk_sfun_data_write): '<S364>/motohawk_data_write' */
    /* Write to Data Storage as scalar: FuelPresHigh_FaultTimer */
    {
      FuelPresHigh_FaultTimer_DataStore() = rtb_Saturation_or;
    }

    /* Saturate: '<S365>/Saturation' */
    rtb_Saturation_ph = rtb_Switch1_f >= 16000.0 ? 16000.0 : rtb_Switch1_f <=
      0.0 ? 0.0 : rtb_Switch1_f;

    /* S-Function (motohawk_sfun_data_write): '<S365>/motohawk_data_write' */
    /* Write to Data Storage as scalar: FuelPresLow_FaultTimer */
    {
      FuelPresLow_FaultTimer_DataStore() = rtb_Saturation_ph;
    }

    /* Logic: '<S324>/Logical Operator3' incorporates:
     *  Logic: '<S324>/Logical Operator1'
     *  S-Function (motohawk_sfun_fault_status): '<S324>/motohawk_fault_status'
     *  S-Function (motohawk_sfun_fault_status): '<S324>/motohawk_fault_status1'
     */
    rtb_LogicalOperator3_cj = !(IsFaultActive(32) || IsFaultActive(33));

    /* RelationalOperator: '<S338>/RelOp' incorporates:
     *  Constant: '<S338>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S324>/motohawk_data_read'
     */
    rtb_RelOp_mp = (((uint8_T)EngineState_DataStore()) == 3);

    /* Logic: '<S324>/Logical Operator2' incorporates:
     *  RelationalOperator: '<S324>/Relational Operator3'
     *  S-Function (motohawk_sfun_calibration): '<S324>/motohawk_calibration2'
     */
    rtb_LogicalOperator2_ie = ((rtb_LogicalOperator3_cj && rtb_RelOp_mp &&
      (BaseEngineController_LS_B.s672_Merge >= (TempOverheat_Fault_DataStore()))));

    /* S-Function (motohawk_sfun_fault_def): '<S324>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: ECTOverTempFault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(31, rtb_LogicalOperator2_ie);
      UpdateFault(31);
    }

    /* Logic: '<S324>/Logical Operator4' incorporates:
     *  RelationalOperator: '<S324>/Relational Operator2'
     *  S-Function (motohawk_sfun_calibration): '<S324>/motohawk_calibration3'
     */
    rtb_LogicalOperator4_jz = ((rtb_LogicalOperator3_cj && rtb_RelOp_mp &&
      (BaseEngineController_LS_B.s672_Merge >=
       (TempOverheatSevere_Fault_DataStore()))));

    /* S-Function (motohawk_sfun_fault_def): '<S324>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: ECTSevereOverTempFault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(34, rtb_LogicalOperator4_jz);
      UpdateFault(34);
    }

    /* S-Function (motohawk_sfun_calibration): '<S324>/motohawk_calibration1' */
    rtb_motohawk_interpolation_1d3_a = (TempOverheat_Warn_DataStore());

    /* Gain: '<S325>/inj//min to inj//hr' incorporates:
     *  DataTypeConversion: '<S325>/Data Type Conversion'
     *  Product: '<S325>/RPM to inj//min'
     *  S-Function (motohawk_sfun_data_read): '<S325>/Number of Combustion Events Per Revolution'
     */
    rtb_DataTypeConversion1_e = BaseEngineController_LS_B.s500_Sum1 * (real_T)
      ((uint8_T)CombEventsPerRev_DataStore()) * 60.0;

    /* Gain: '<S339>/Gain' */
    rtb_motohawk_interpolation_1d3_a = 0.01 *
      BaseEngineController_LS_B.s522_Merge;

    /* Gain: '<S325>/g to mg' incorporates:
     *  Constant: '<S339>/ '
     *  Constant: '<S339>/ Ethanol density (g//ml)'
     *  Constant: '<S339>/ Gasoline density (g//ml)'
     *  Product: '<S339>/Product1'
     *  Product: '<S339>/Product2'
     *  Sum: '<S339>/Add'
     *  Sum: '<S339>/Add1'
     */
    rtb_Switch_o = ((1.0 - rtb_motohawk_interpolation_1d3_a) * 0.737 + 0.789 *
                    rtb_motohawk_interpolation_1d3_a) * 1000.0;
    for (i = 0; i < 8; i++) {
      /* Gain: '<S325>/ml//hr to gal//hr' incorporates:
       *  Product: '<S325>/Mass flow to Volume flow mg//hr to ml//hr'
       *  Product: '<S325>/inj//hr to mg//hr'
       */
      u = rtb_DataTypeConversion1_e * BaseEngineController_LS_B.s135_FPC[i] /
        rtb_Switch_o * 0.00026417205263729591;

      /* RelationalOperator: '<S325>/Relational Operator7' incorporates:
       *  Constant: '<S325>/Min fuel flow  for calc'
       */
      rtb_LogicalOperator1_aj[i] = (u > 0.1);

      /* Gain: '<S325>/ml//hr to gal//hr' */
      rtb_Product2_aa[i] = u;
    }

    /* Outputs for Enabled SubSystem: '<S325>/Multiply and Divide, avoiding divde by zero1' incorporates:
     *  EnablePort: '<S341>/Enable'
     */
    if (rtb_LogicalOperator1_aj[0] || rtb_LogicalOperator1_aj[1] ||
        rtb_LogicalOperator1_aj[2] || rtb_LogicalOperator1_aj[3] ||
        rtb_LogicalOperator1_aj[4] || rtb_LogicalOperator1_aj[5] ||
        rtb_LogicalOperator1_aj[6] || rtb_LogicalOperator1_aj[7]) {
      /* Product: '<S341>/charge mass' */
      for (i = 0; i < 8; i++) {
        BaseEngineController_LS_B.s341_chargemass[i] =
          BaseEngineController_LS_B.s477_Merge / rtb_Product2_aa[i];
      }

      /* End of Product: '<S341>/charge mass' */
    }

    /* End of Outputs for SubSystem: '<S325>/Multiply and Divide, avoiding divde by zero1' */

    /* Switch: '<S325>/Default (if no flow)' incorporates:
     *  Constant: '<S325>/Default value'
     */
    for (i = 0; i < 8; i++) {
      if (rtb_LogicalOperator1_aj[i]) {
        BaseEngineController_LS_B.s325_Defaultifnoflow[i] =
          BaseEngineController_LS_B.s341_chargemass[i];
      } else {
        BaseEngineController_LS_B.s325_Defaultifnoflow[i] = 0.0;
      }
    }

    /* End of Switch: '<S325>/Default (if no flow)' */

    /* S-Function Block: <S340>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s340_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_interpolation_1d3_a = ((real_T) delta) * 0.000001;
    }

    /* Product: '<S340>/Product' incorporates:
     *  MinMax: '<S340>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S340>/motohawk_calibration2'
     */
    rtb_motohawk_interpolation_1d3_a /= (rtb_motohawk_interpolation_1d3_a >=
      (FuelEconomy_FilterC_DataStore())) || rtIsNaN
      ((FuelEconomy_FilterC_DataStore())) ? rtb_motohawk_interpolation_1d3_a :
      (FuelEconomy_FilterC_DataStore());

    /* Sum: '<S342>/Sum' incorporates:
     *  Constant: '<S342>/Constant'
     */
    rtb_DataTypeConversion1_e = 1.0 - rtb_motohawk_interpolation_1d3_a;

    /* Sum: '<S342>/Sum1' incorporates:
     *  Product: '<S342>/Product'
     *  Product: '<S342>/Product1'
     *  UnitDelay: '<S342>/Unit Delay'
     */
    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_B.s342_Sum1[i] =
        BaseEngineController_LS_B.s325_Defaultifnoflow[i] *
        rtb_motohawk_interpolation_1d3_a + rtb_DataTypeConversion1_e *
        BaseEngineController_LS_DWork.s342_UnitDelay_DSTATE[i];
    }

    /* End of Sum: '<S342>/Sum1' */

    /* S-Function Block: <S345>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s345_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_a = ((real_T) delta) * 0.000001;
    }

    /* Logic: '<S327>/Logical Operator3' incorporates:
     *  Logic: '<S327>/Logical Operator1'
     *  S-Function (motohawk_sfun_fault_status): '<S327>/motohawk_fault_status'
     *  S-Function (motohawk_sfun_fault_status): '<S327>/motohawk_fault_status1'
     */
    rtb_LogicalOperator6_b = !(IsFaultActive(95) || IsFaultActive(96));

    /* RelationalOperator: '<S344>/RelOp' incorporates:
     *  Constant: '<S344>/Constant'
     */
    rtb_LogicalOperator1_a = (BaseEngineController_LS_B.s430_State == 3);

    /* S-Function Block: <S327>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_n = TableInterpolation1D_real_T
        (BaseEngineController_LS_B.s400_motohawk_prelookup1, (real_T *)
         ((MinOilPressure_FaultTbl_DataStore())), 9);
      (MinOilPressure_Fault_DataStore()) = rtb_motohawk_interpolation_1d_n;
    }

    /* Switch: '<S345>/Switch' incorporates:
     *  Constant: '<S345>/Constant'
     *  Logic: '<S327>/Logical Operator4'
     *  RelationalOperator: '<S327>/Relational Operator2'
     *  S-Function (motohawk_sfun_data_read): '<S345>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S345>/motohawk_delta_time'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S327>/motohawk_interpolation_1d'
     *  Sum: '<S345>/Sum'
     */
    if (rtb_LogicalOperator6_b && rtb_LogicalOperator1_a &&
        (BaseEngineController_LS_B.s561_Merge < rtb_motohawk_interpolation_1d_n))
    {
      rtb_motohawk_interpolation_1d3_a = rtb_motohawk_delta_time_a +
        OilPresFaultTimer_DataStore();
    } else {
      rtb_motohawk_interpolation_1d3_a = 0.0;
    }

    /* End of Switch: '<S345>/Switch' */
    /* RelationalOperator: '<S327>/Relational Operator5' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S327>/motohawk_calibration1'
     */
    rtb_RelationalOperator5_jx = ((rtb_motohawk_interpolation_1d3_a >
      (NoOilPres_FaultTime_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S327>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: NoOil_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(91, rtb_RelationalOperator5_jx);
      UpdateFault(91);
    }

    /* Saturate: '<S345>/Saturation' */
    rtb_Saturation_kn = rtb_motohawk_interpolation_1d3_a >= 16000.0 ? 16000.0 :
      rtb_motohawk_interpolation_1d3_a <= 0.0 ? 0.0 :
      rtb_motohawk_interpolation_1d3_a;

    /* S-Function (motohawk_sfun_data_write): '<S345>/motohawk_data_write' */
    /* Write to Data Storage as scalar: OilPresFaultTimer */
    {
      OilPresFaultTimer_DataStore() = rtb_Saturation_kn;
    }

    /* S-Function Block: <S327>/motohawk_interpolation_1d3 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d3_a = TableInterpolation1D_real_T
        (BaseEngineController_LS_B.s400_motohawk_prelookup1, (real_T *)
         ((MinOilPressure_WarnTbl_DataStore())), 9);
      (MinOilPressure_Warn_DataStore()) = rtb_motohawk_interpolation_1d3_a;
    }

    /* Update for UnitDelay: '<S355>/Unit Delay' */
    BaseEngineController_LS_DWork.s355_UnitDelay_DSTATE = rtb_Switch1_mj;

    /* Update for UnitDelay: '<S356>/Unit Delay' */
    BaseEngineController_LS_DWork.s356_UnitDelay_DSTATE = rtb_Switch1_e;

    /* Update for UnitDelay: '<S361>/Unit Delay' */
    BaseEngineController_LS_DWork.s361_UnitDelay_DSTATE = rtb_Switch1_l;

    /* Update for UnitDelay: '<S362>/Unit Delay' */
    BaseEngineController_LS_DWork.s362_UnitDelay_DSTATE = rtb_Switch1_o;

    /* Update for UnitDelay: '<S357>/Unit Delay' */
    BaseEngineController_LS_DWork.s357_UnitDelay_DSTATE = rtb_Switch1_l3;

    /* Update for UnitDelay: '<S363>/Unit Delay' */
    BaseEngineController_LS_DWork.s363_UnitDelay_DSTATE = rtb_Switch1_bv;

    /* Update for UnitDelay: '<S342>/Unit Delay' */
    memcpy((void *)BaseEngineController_LS_DWork.s342_UnitDelay_DSTATE, (void *)
           (&BaseEngineController_LS_B.s342_Sum1[0]), sizeof(real_T) << 3U);

    /* End of Outputs for SubSystem: '<S11>/Diagnostics' */
  }

  /* Saturate: '<S378>/Saturation' */
  rtb_Saturation_k2 = rtb_Switch_f >= 16000.0 ? 16000.0 : rtb_Switch_f <= 0.0 ?
    0.0 : rtb_Switch_f;

  /* S-Function (motohawk_sfun_data_write): '<S378>/motohawk_data_write' */
  /* Write to Data Storage as scalar: BaroLearnTmr */
  {
    BaroLearnTmr_DataStore() = rtb_Saturation_k2;
  }

  /* RelationalOperator: '<S381>/Compare' incorporates:
   *  Constant: '<S381>/Constant'
   */
  rtb_LogicalOperator6_b = (BaseEngineController_LS_B.s430_State == 3);

  /* Logic: '<S374>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_action): '<S374>/motohawk_fault_action1'
   */
  rtb_LogicalOperator1_a = !GetFaultActionStatus(5);

  /* RelationalOperator: '<S374>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S374>/motohawk_calibration2'
   */
  rtb_RelOp_pu = (BaseEngineController_LS_B.s672_Merge >= (VEAdaptTemp_DataStore
                   ()));

  /* RelationalOperator: '<S374>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S374>/motohawk_calibration3'
   */
  rtb_RelationalOperator3_bp = (BaseEngineController_LS_B.s435_Switch >=
    (VEAdaptTime_DataStore()));

  /* Logic: '<S374>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S374>/motohawk_calibration'
   */
  BaseEngineController_LS_B.s374_LogicalOperator = ((rtb_LogicalOperator6_b &&
    rtb_LogicalOperator1_a && BaseEngineController_LS_B.s385_LogicalOperator &&
    rtb_RelOp_pu && rtb_RelationalOperator3_bp && (VEAdaptEnable_DataStore())));

  /* Outputs for Enabled SubSystem: '<S374>/Adapt VolEff Map' incorporates:
   *  EnablePort: '<S379>/Enable'
   */
  if (BaseEngineController_LS_B.s374_LogicalOperator) {
    /* Product: '<S379>/Divide' incorporates:
     *  Sum: '<S379>/Add'
     */
    rtb_Divide_p = (BaseEngineController_LS_B.s468_Merge -
                    BaseEngineController_LS_B.s374_ModelAirMassFlowRate) /
      BaseEngineController_LS_B.s374_ModelAirMassFlowRate;

    /* S-Function Block: <S382>/motohawk_prelookup */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (VE_AdaptErrorIdxArrIn_DataStore()) = rtb_Divide_p;
      (VE_AdaptErrorIdxArrIdx_DataStore()) = TablePrelookup_real_T(rtb_Divide_p,
        (VE_AdaptErrorIdxArrIdxArr_DataStore()), 10,
        (VE_AdaptErrorIdxArrIdx_DataStore()));
      rtb_motohawk_prelookup_jn = (VE_AdaptErrorIdxArrIdx_DataStore());
    }

    /* S-Function Block: <S382>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_kd = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_jn, (real_T *) ((VEAdaptGainTblTbl_DataStore())),
         10);
      (VEAdaptGainTbl_DataStore()) = rtb_motohawk_interpolation_1d_kd;
    }

    /* Product: '<S379>/Divide1' incorporates:
     *  Product: '<S379>/Divide2'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S382>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_prelookup): '<S382>/motohawk_prelookup'
     */
    rtb_Divide1 = BaseEngineController_LS_B.s374_Sum * rtb_Divide_p *
      rtb_motohawk_interpolation_1d_kd;

    /* S-Function Block: <S379>/motohawk_adapt_table */
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

  /* End of Outputs for SubSystem: '<S374>/Adapt VolEff Map' */

  /* UnitDelay: '<S386>/Unit Delay1' */
  rtb_DesiredLambda_idx = BaseEngineController_LS_DWork.s386_UnitDelay1_DSTATE;

  /* UnitDelay: '<S386>/Unit Delay3' */
  rtb_DesiredLambda_idx_0 = BaseEngineController_LS_DWork.s386_UnitDelay3_DSTATE;

  /* UnitDelay: '<S386>/Unit Delay4' */
  rtb_UnitDelay4_i = BaseEngineController_LS_DWork.s386_UnitDelay4_DSTATE;

  /* UnitDelay: '<S387>/Unit Delay1' */
  rtb_UnitDelay1_k = BaseEngineController_LS_DWork.s387_UnitDelay1_DSTATE;

  /* UnitDelay: '<S387>/Unit Delay3' */
  rtb_UnitDelay3_j = BaseEngineController_LS_DWork.s387_UnitDelay3_DSTATE;

  /* UnitDelay: '<S387>/Unit Delay4' */
  rtb_UnitDelay4_ie = BaseEngineController_LS_DWork.s387_UnitDelay4_DSTATE;

  /* Sum: '<S404>/Sum' */
  rtb_Abs_co = rtb_APP1 - rtb_APP2;

  /* Abs: '<S404>/Abs' */
  rtb_Abs_co = fabs(rtb_Abs_co);

  /* RelationalOperator: '<S404>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S404>/motohawk_calibration2'
   */
  rtb_RelationalOperator3_h = ((rtb_Abs_co > (APP1_APP2_Max_Deviation_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S404>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: APP_Sensors_Conflict */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(20, rtb_RelationalOperator3_h);
    UpdateFault(20);
  }

  /* S-Function (motohawk_sfun_data_write): '<S410>/motohawk_data_write' */
  /* Write to Data Storage as scalar: EngineState */
  {
    EngineState_DataStore() = BaseEngineController_LS_B.s430_State;
  }

  /* Sum: '<S415>/Sum' */
  rtb_Abs_co = BaseEngineController_LS_B.s775_Merge -
    BaseEngineController_LS_B.s792_Merge;

  /* Abs: '<S415>/Abs' */
  rtb_Abs_co = fabs(rtb_Abs_co);

  /* RelationalOperator: '<S415>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S415>/motohawk_calibration2'
   */
  rtb_RelationalOperator3_or = ((rtb_Abs_co > (TPS1_TPS2_Max_Deviation_DataStore
                                  ())));

  /* S-Function (motohawk_sfun_fault_def): '<S415>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: TPS_Sensors_Conflict */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(115, rtb_RelationalOperator3_or);
    UpdateFault(115);
  }

  /* Saturate: '<S433>/Saturation' */
  rtb_Saturation_ah = BaseEngineController_LS_B.s433_Sum >= 16000.0 ? 16000.0 :
    BaseEngineController_LS_B.s433_Sum <= 0.0 ? 0.0 :
    BaseEngineController_LS_B.s433_Sum;

  /* S-Function (motohawk_sfun_data_write): '<S433>/motohawk_data_write' */
  /* Write to Data Storage as scalar: TimeSinceKeyOnTimer */
  {
    TimeSinceKeyOnTimer_DataStore() = rtb_Saturation_ah;
  }

  /* Saturate: '<S435>/Saturation' */
  rtb_Saturation_m = BaseEngineController_LS_B.s435_Switch >= 16000.0 ? 16000.0 :
    BaseEngineController_LS_B.s435_Switch <= 0.0 ? 0.0 :
    BaseEngineController_LS_B.s435_Switch;

  /* S-Function (motohawk_sfun_data_write): '<S435>/motohawk_data_write' */
  /* Write to Data Storage as scalar: TimeSinceRunTimer */
  {
    TimeSinceRunTimer_DataStore() = rtb_Saturation_m;
  }

  /* Saturate: '<S437>/Saturation' */
  rtb_Saturation_kf = BaseEngineController_LS_B.s437_Switch >= 16000.0 ? 16000.0
    : BaseEngineController_LS_B.s437_Switch <= 0.0 ? 0.0 :
    BaseEngineController_LS_B.s437_Switch;

  /* S-Function (motohawk_sfun_data_write): '<S437>/motohawk_data_write' */
  /* Write to Data Storage as scalar: TimeSinceStallTimer */
  {
    TimeSinceStallTimer_DataStore() = rtb_Saturation_kf;
  }

  /* Switch: '<S441>/Switch' incorporates:
   *  Constant: '<S441>/Constant2'
   */
  if (rtb_RelationalOperator_jv) {
    rtb_Switch_kj = 0U;
  } else {
    rtb_Switch_kj = rtb_Sum_hh;
  }

  /* End of Switch: '<S441>/Switch' */

  /* Logic: '<S451>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S451>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S451>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S451>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_p5 = ((MPRD_DataStore() &&
    (BaseEngineController_LS_B.s443_Gain > (MAFMax_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S451>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: MAFRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(81, rtb_LogicalOperator2_p5);
    UpdateFault(81);
  }

  /* Logic: '<S451>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S451>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S451>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S451>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_k = ((MPRD_DataStore() &&
    (BaseEngineController_LS_B.s443_Gain < (MAFMin_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S451>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: MAFRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(82, rtb_LogicalOperator3_k);
    UpdateFault(82);
  }

  /* Logic: '<S452>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S452>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S452>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S452>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_ip = ((MPRD_DataStore() &&
    (BaseEngineController_LS_B.s443_Gain1 > (VSPDMax_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S452>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: VSPDRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(116, rtb_LogicalOperator2_ip);
    UpdateFault(116);
  }

  /* Logic: '<S452>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S452>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S452>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S452>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_g = ((MPRD_DataStore() &&
    (BaseEngineController_LS_B.s443_Gain1 < (VSPDMin_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S452>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: VSPDRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(117, rtb_LogicalOperator3_g);
    UpdateFault(117);
  }

  /* Saturate: '<S484>/Saturation' */
  rtb_Saturation_b = rtb_Switch_bn >= 86400.0 ? 86400.0 : rtb_Switch_bn <= 0.0 ?
    0.0 : rtb_Switch_bn;

  /* S-Function (motohawk_sfun_data_write): '<S484>/motohawk_data_write' */
  /* Write to Data Storage as scalar: ScrambleDelay */
  {
    ScrambleDelay_DataStore() = rtb_Saturation_b;
  }

  /* Saturate: '<S489>/Saturation' */
  rtb_Saturation_ei = rtb_Switch_m1 >= 86400.0 ? 86400.0 : rtb_Switch_m1 <= 0.0 ?
    0.0 : rtb_Switch_m1;

  /* S-Function (motohawk_sfun_data_write): '<S489>/motohawk_data_write' */
  /* Write to Data Storage as scalar: TwoStepTimer */
  {
    TwoStepTimer_DataStore() = rtb_Saturation_ei;
  }

  /* RelationalOperator: '<S444>/Relational Operator' incorporates:
   *  Constant: '<S444>/Constant'
   *  S-Function (motohawk_sfun_calibration): '<S444>/motohawk_calibration'
   */
  rtb_RelationalOperator_l = ((0 != ((uint16_T)(PseudoRPM_DataStore()))));

  /* S-Function Block: <S444>/motohawk_encoder_pseudo */
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

  /* DataTypeConversion: '<S444>/Data Type Conversion3' incorporates:
   *  Gain: '<S444>/Gain'
   *  S-Function (motohawk_sfun_calibration): '<S444>/motohawk_calibration1'
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

  /* End of DataTypeConversion: '<S444>/Data Type Conversion3' */
  /* S-Function Block: <S444>/motohawk_encoder_offset */
  {
    S_EncoderResourceAttributes encoder_attributes;
    encoder_attributes.uValidAttributesMask = USE_ENC_TDC_OFFSET;
    encoder_attributes.s2TDCOffset = rtb_DataTypeConversion3_dm;
    SetResourceAttributes(RES_ENCODER, &encoder_attributes, BEHAVIOUR_ENCODER);
  }

  /* RelationalOperator: '<S496>/RelOp' incorporates:
   *  Constant: '<S496>/Constant'
   */
  rtb_RelationalOperator5_fz = (BaseEngineController_LS_B.s499_Sum > 100U);

  /* S-Function Block: <S444>/motohawk_encoder_fault */
  {
    extern uint8_T motohawk_encoder_fault;
    BaseEngineController_LS_B.s444_motohawk_encoder_fault =
      motohawk_encoder_fault;
  }

  /* Logic: '<S492>/Logical Operator' incorporates:
   *  Constant: '<S498>/Constant'
   *  RelationalOperator: '<S498>/RelOp'
   */
  rtb_LogicalOperator_f0 = ((rtb_RelationalOperator5_fz &&
    (BaseEngineController_LS_B.s444_motohawk_encoder_fault == 1)));

  /* S-Function (motohawk_sfun_fault_def): '<S492>/motohawk_fault_def' */

  /* Set Fault Suspected Status: CrankSyncFault */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(30, rtb_LogicalOperator_f0);
    UpdateFault(30);
  }

  /* Logic: '<S492>/Logical Operator1' incorporates:
   *  Constant: '<S497>/Constant'
   *  RelationalOperator: '<S497>/RelOp'
   */
  rtb_LogicalOperator1_dw = ((rtb_RelationalOperator5_fz &&
    (BaseEngineController_LS_B.s444_motohawk_encoder_fault == 3)));

  /* S-Function (motohawk_sfun_fault_def): '<S492>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: CrankEdgesFault */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(29, rtb_LogicalOperator1_dw);
    UpdateFault(29);
  }

  /* Logic: '<S492>/Logical Operator2' incorporates:
   *  Constant: '<S494>/Constant'
   *  RelationalOperator: '<S494>/RelOp'
   */
  rtb_LogicalOperator2_g = ((rtb_RelationalOperator5_fz &&
    (BaseEngineController_LS_B.s444_motohawk_encoder_fault == 4)));

  /* S-Function (motohawk_sfun_fault_def): '<S492>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: CamEdgesFault */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(27, rtb_LogicalOperator2_g);
    UpdateFault(27);
  }

  /* Logic: '<S492>/Logical Operator3' incorporates:
   *  Constant: '<S495>/Constant'
   *  RelationalOperator: '<S495>/RelOp'
   */
  rtb_LogicalOperator3_nz = ((rtb_RelationalOperator5_fz &&
    (BaseEngineController_LS_B.s444_motohawk_encoder_fault == 5)));

  /* S-Function (motohawk_sfun_fault_def): '<S492>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: CamSyncFault */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(28, rtb_LogicalOperator3_nz);
    UpdateFault(28);
  }

  /* S-Function Block: <S444>/motohawk_encoder_state */
  {
    extern uint8_T motohawk_encoder_status;
    BaseEngineController_LS_B.s444_motohawk_encoder_state =
      motohawk_encoder_status;
  }

  /* Logic: '<S501>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S501>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S501>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S501>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_kx = ((MPRD_DataStore() && (rtb_DataTypeConversion_ik >
    (ACPresInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S501>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: ACPresRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(2, rtb_LogicalOperator2_kx);
    UpdateFault(2);
  }

  /* Logic: '<S501>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S501>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S501>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S501>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_mz = ((MPRD_DataStore() && (rtb_DataTypeConversion_ik <
    (ACPresInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S501>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: ACPresRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(3, rtb_LogicalOperator3_mz);
    UpdateFault(3);
  }

  /* Logic: '<S502>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S502>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S502>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S502>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_j = ((MPRD_DataStore() && (rtb_DataTypeConversion_e >
    (FuelSensInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S502>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: FuelSensRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(62, rtb_LogicalOperator2_j);
    UpdateFault(62);
  }

  /* Logic: '<S502>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S502>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S502>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S502>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_i = ((MPRD_DataStore() && (rtb_DataTypeConversion_e <
    (FuelSensInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S502>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: FuelSensRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(63, rtb_LogicalOperator3_i);
    UpdateFault(63);
  }

  /* Logic: '<S503>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S503>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S503>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S503>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_f4 = ((MPRD_DataStore() && (rtb_Switch_c >
    (FuelPresInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S503>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: FuelPresRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(60, rtb_LogicalOperator2_f4);
    UpdateFault(60);
  }

  /* Logic: '<S503>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S503>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S503>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S503>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_ns = ((MPRD_DataStore() && (rtb_Switch_c <
    (FuelPresInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S503>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: FuelPresRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(61, rtb_LogicalOperator3_ns);
    UpdateFault(61);
  }

  /* Logic: '<S504>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S504>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S504>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S504>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_fw = ((MPRD_DataStore() &&
    (BaseEngineController_LS_B.s506_Merge > (MAPInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S504>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: MAPRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(83, rtb_LogicalOperator2_fw);
    UpdateFault(83);
  }

  /* Logic: '<S504>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S504>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S504>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S504>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_l = ((MPRD_DataStore() &&
    (BaseEngineController_LS_B.s506_Merge < (MAPInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S504>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: MAPRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(84, rtb_LogicalOperator3_l);
    UpdateFault(84);
  }

  /* Logic: '<S505>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S505>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S505>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S505>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_a = ((MPRD_DataStore() && (rtb_DataTypeConversion_fq >
    (MAPTimeInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S505>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: MAPTimeRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(85, rtb_LogicalOperator2_a);
    UpdateFault(85);
  }

  /* Logic: '<S505>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S505>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S505>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S505>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_d = ((MPRD_DataStore() && (rtb_DataTypeConversion_fq <
    (MAPTimeInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S505>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: MAPTimeRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(86, rtb_LogicalOperator3_d);
    UpdateFault(86);
  }

  /* Logic: '<S507>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S507>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S507>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S507>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_fm = ((MPRD_DataStore() && (rtb_Product_o >
    (OilPresInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S507>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: OilPresRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(95, rtb_LogicalOperator2_fm);
    UpdateFault(95);
  }

  /* Logic: '<S507>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S507>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S507>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S507>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_a = ((MPRD_DataStore() && (rtb_Product_o <
    (OilPresInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S507>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: OilPresRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(96, rtb_LogicalOperator3_a);
    UpdateFault(96);
  }

  /* Logic: '<S508>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S508>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S508>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S508>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_gc = ((MPRD_DataStore() && (rtb_Abs_k >
    (SensVoltInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S508>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: SensVoltRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(97, rtb_LogicalOperator2_gc);
    UpdateFault(97);
  }

  /* Logic: '<S508>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S508>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S508>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S508>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_e = ((MPRD_DataStore() && (rtb_Abs_k <
    (SensVoltInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S508>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: SensVoltRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(98, rtb_LogicalOperator3_e);
    UpdateFault(98);
  }

  /* Logic: '<S509>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S509>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S509>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S509>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_b = ((MPRD_DataStore() && (rtb_DataTypeConversion_c4 >
    (SysVoltInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S509>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: SysVoltRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(101, rtb_LogicalOperator2_b);
    UpdateFault(101);
  }

  /* Logic: '<S509>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S509>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S509>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S509>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_gd = ((MPRD_DataStore() && (rtb_DataTypeConversion_c4 <
    (SysVoltInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S509>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: SysVoltRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(102, rtb_LogicalOperator3_gd);
    UpdateFault(102);
  }

  /* RelationalOperator: '<S581>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S581>/motohawk_calibration1'
   */
  rtb_RelationalOperator5_fz = ((real_T)
    BaseEngineController_LS_B.s581_ReadCANMessage1_o1 >=
    (Lambda_2_Timeout_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S581>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: Lambda_2_Timeout */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(79, rtb_RelationalOperator5_fz);
    UpdateFault(79);
  }

  /* RelationalOperator: '<S581>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S581>/motohawk_calibration'
   */
  rtb_RelationalOperator5_fz = ((real_T)
    BaseEngineController_LS_B.s581_ReadCANMessage_o1 >=
    (Lambda_1_Timeout_DataStore()));

  /* S-Function (motohawk_sfun_fault_def): '<S581>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: Lambda_1_Timeout */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(77, rtb_RelationalOperator5_fz);
    UpdateFault(77);
  }

  /* Logic: '<S581>/Logical Operator' */
  rtb_LogicalOperator_o = !(rtb_Product7_i != 0.0);

  /* S-Function (motohawk_sfun_fault_def): '<S581>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: Lambda_1_NotReady */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(76, rtb_LogicalOperator_o);
    UpdateFault(76);
  }

  /* Logic: '<S581>/Logical Operator1' */
  rtb_LogicalOperator1_h = !(rtb_Product6_m != 0.0);

  /* S-Function (motohawk_sfun_fault_def): '<S581>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: Lambda_2_NotReady */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(78, rtb_LogicalOperator1_h);
    UpdateFault(78);
  }

  /* Logic: '<S583>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S583>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S583>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S583>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_p4 = ((MPRD_DataStore() &&
    (BaseEngineController_LS_B.s581_MathFunction >
     (Bank1_EquivRatioInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S583>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: Bank1_EquivRatioRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(21, rtb_LogicalOperator2_p4);
    UpdateFault(21);
  }

  /* Logic: '<S583>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S583>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S583>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S583>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_pm = ((MPRD_DataStore() &&
    (BaseEngineController_LS_B.s581_MathFunction <
     (Bank1_EquivRatioInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S583>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: Bank1_EquivRatioRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(22, rtb_LogicalOperator3_pm);
    UpdateFault(22);
  }

  /* Logic: '<S584>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S584>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S584>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S584>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_do = ((MPRD_DataStore() &&
    (BaseEngineController_LS_B.s581_MathFunction1 >
     (Bank2_EquivRatioInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S584>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: Bank2_EquivRatioRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(23, rtb_LogicalOperator2_do);
    UpdateFault(23);
  }

  /* Logic: '<S584>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S584>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S584>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S584>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_ly = ((MPRD_DataStore() &&
    (BaseEngineController_LS_B.s581_MathFunction1 <
     (Bank2_EquivRatioInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S584>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: Bank2_EquivRatioRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(24, rtb_LogicalOperator3_ly);
    UpdateFault(24);
  }

  /* Logic: '<S695>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S695>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S695>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S695>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_ob = ((MPRD_DataStore() && (rtb_DataTypeConversion_hd >
    (APP1Max_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S695>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: APP1RangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(4, rtb_LogicalOperator2_ob);
    UpdateFault(4);
  }

  /* Logic: '<S695>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S695>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S695>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S695>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_in = ((MPRD_DataStore() && (rtb_DataTypeConversion_hd <
    (APP1Min_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S695>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: APP1RangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(5, rtb_LogicalOperator3_in);
    UpdateFault(5);
  }

  /* S-Function (motohawk_sfun_trigger): '<S696>/motohawk_trigger' */
  /* Enable for Trigger_FGND_20XRTI_PERIODIC_8455p0002 */
  if (BaseEngineController_LS_DWork.s696_motohawk_trigger_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s696_motohawk_trigger_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_data_read): '<S696>/motohawk_data_read1' */
  rtb_motohawk_data_read1_p = APP1ADC_DataStore();

  /* RelationalOperator: '<S696>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S696>/motohawk_calibration'
   */
  rtb_RelationalOperator5_fz = ((real_T)rtb_motohawk_data_read1_p <
    (APP1LowAdaptADCThresh_DataStore()));

  /* Logic: '<S696>/Logical Operator' */
  rtb_RelOp_pu =
    (BaseEngineController_LS_B.s696_FunctionCallSubsystem.s714_InitialConditionisTrue
     && rtb_RelationalOperator5_fz);

  /* RelationalOperator: '<S696>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S696>/motohawk_calibration1'
   */
  rtb_RelationalOperator5_fz = ((real_T)rtb_motohawk_data_read1_p >
    (APP1HiAdaptADCThresh_DataStore()));

  /* Logic: '<S696>/Logical Operator1' */
  rtb_LogicalOperator6_b =
    (BaseEngineController_LS_B.s696_FunctionCallSubsystem.s714_InitialConditionisTrue
     && rtb_RelationalOperator5_fz);

  /* Logic: '<S697>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S697>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S697>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S697>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_il = ((MPRD_DataStore() && (rtb_DataTypeConversion_f >
    (APP2Max_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S697>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: APP2RangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(12, rtb_LogicalOperator2_il);
    UpdateFault(12);
  }

  /* Logic: '<S697>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S697>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S697>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S697>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_dk = ((MPRD_DataStore() && (rtb_DataTypeConversion_f <
    (APP2Min_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S697>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: APP2RangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(13, rtb_LogicalOperator3_dk);
    UpdateFault(13);
  }

  /* S-Function (motohawk_sfun_trigger): '<S698>/motohawk_trigger' */
  /* Enable for Trigger_FGND_20XRTI_PERIODIC_8585p0002 */
  if (BaseEngineController_LS_DWork.s698_motohawk_trigger_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s698_motohawk_trigger_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_data_read): '<S698>/motohawk_data_read1' */
  rtb_motohawk_data_read1_p = APP2ADC_DataStore();

  /* RelationalOperator: '<S698>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S698>/motohawk_calibration'
   */
  rtb_RelationalOperator5_fz = ((real_T)rtb_motohawk_data_read1_p <
    (APP2LowAdaptADCThresh_DataStore()));

  /* Logic: '<S698>/Logical Operator' */
  rtb_Switch1_mj =
    (BaseEngineController_LS_B.s698_FunctionCallSubsystem.s714_InitialConditionisTrue
     && rtb_RelationalOperator5_fz);

  /* RelationalOperator: '<S698>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S698>/motohawk_calibration1'
   */
  rtb_RelationalOperator5_fz = ((real_T)rtb_motohawk_data_read1_p >
    (APP2HiAdaptADCThresh_DataStore()));

  /* Logic: '<S698>/Logical Operator1' */
  rtb_RelationalOperator3_bp =
    (BaseEngineController_LS_B.s698_FunctionCallSubsystem.s714_InitialConditionisTrue
     && rtb_RelationalOperator5_fz);

  /* RelationalOperator: '<S728>/Relational Operator5' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S728>/motohawk_calibration5'
   */
  rtb_RelationalOperator5_l = ((BaseEngineController_LS_B.s699_Switch >
    (APP1_AdaptInputHiFltPos_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S728>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: APP1_AdaptRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(10, rtb_RelationalOperator5_l);
    UpdateFault(10);
  }

  /* RelationalOperator: '<S728>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S728>/motohawk_calibration6'
   */
  rtb_RelationalOperator4_b = ((BaseEngineController_LS_B.s699_Switch <
    (APP1_AdaptInputLoFltPos_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S728>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: APP1_AdaptRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(11, rtb_RelationalOperator4_b);
    UpdateFault(11);
  }

  /* RelationalOperator: '<S728>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S699>/motohawk_calibration9'
   */
  rtb_RelationalOperator_c1 = ((BaseEngineController_LS_B.s727_MinMax >
    (APP1_AdaptAdapt_Low_Max_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S728>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: APP1_AdaptAdaptLoMax */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(8, rtb_RelationalOperator_c1);
    UpdateFault(8);
  }

  /* RelationalOperator: '<S728>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S699>/motohawk_calibration12'
   */
  rtb_RelationalOperator3_p4 = ((BaseEngineController_LS_B.s727_MinMax1 >
    (APP1_AdaptAdapt_Hi_Max_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S728>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: APP1_AdaptAdaptHiMax */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(6, rtb_RelationalOperator3_p4);
    UpdateFault(6);
  }

  /* RelationalOperator: '<S728>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S699>/motohawk_calibration11'
   */
  rtb_RelationalOperator2_k2 = ((BaseEngineController_LS_B.s727_MinMax1 <
    (APP1_AdaptAdapt_Hi_Min_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S728>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: APP1_AdaptAdaptHiMin */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(7, rtb_RelationalOperator2_k2);
    UpdateFault(7);
  }

  /* RelationalOperator: '<S728>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S699>/motohawk_calibration10'
   */
  rtb_RelationalOperator1_n = ((BaseEngineController_LS_B.s727_MinMax <
    (APP1_AdaptAdapt_Low_Min_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S728>/motohawk_fault_def8' */

  /* Set Fault Suspected Status: APP1_AdaptAdaptLoMin */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(9, rtb_RelationalOperator1_n);
    UpdateFault(9);
  }

  /* UnitDelay: '<S734>/Unit Delay1' */
  rtb_Abs_co = BaseEngineController_LS_DWork.s734_UnitDelay1_DSTATE;

  /* UnitDelay: '<S734>/Unit Delay' */
  rtb_DataTypeConversion1_e =
    BaseEngineController_LS_DWork.s734_UnitDelay_DSTATE;

  /* UnitDelay: '<S734>/Unit Delay3' */
  rtb_Switch_o = BaseEngineController_LS_DWork.s734_UnitDelay3_DSTATE;

  /* UnitDelay: '<S734>/Unit Delay4' */
  rtb_Switch1_f = BaseEngineController_LS_DWork.s734_UnitDelay4_DSTATE;

  /* MinMax: '<S734>/MinMax1' incorporates:
   *  UnitDelay: '<S734>/Unit Delay'
   *  UnitDelay: '<S734>/Unit Delay3'
   *  UnitDelay: '<S734>/Unit Delay4'
   */
  y = (rtb_Abs_co <= BaseEngineController_LS_DWork.s734_UnitDelay_DSTATE) ||
    rtIsNaN(BaseEngineController_LS_DWork.s734_UnitDelay_DSTATE) ? rtb_Abs_co :
    BaseEngineController_LS_DWork.s734_UnitDelay_DSTATE;
  y = (y <= BaseEngineController_LS_DWork.s734_UnitDelay3_DSTATE) || rtIsNaN
    (BaseEngineController_LS_DWork.s734_UnitDelay3_DSTATE) ? y :
    BaseEngineController_LS_DWork.s734_UnitDelay3_DSTATE;
  y = (y <= BaseEngineController_LS_DWork.s734_UnitDelay4_DSTATE) || rtIsNaN
    (BaseEngineController_LS_DWork.s734_UnitDelay4_DSTATE) ? y :
    BaseEngineController_LS_DWork.s734_UnitDelay4_DSTATE;
  u = (y <= BaseEngineController_LS_B.s699_Switch) || rtIsNaN
    (BaseEngineController_LS_B.s699_Switch) ? y :
    BaseEngineController_LS_B.s699_Switch;

  /* RelationalOperator: '<S732>/Relational Operator9' incorporates:
   *  MinMax: '<S734>/MinMax1'
   */
  rtb_LogicalOperator1_a = (u > BaseEngineController_LS_B.s727_MinMax1);

  /* RelationalOperator: '<S732>/Relational Operator5' incorporates:
   *  MinMax: '<S734>/MinMax1'
   *  S-Function (motohawk_sfun_calibration): '<S699>/motohawk_calibration12'
   */
  rtb_RelationalOperator5_fz = (u <= (APP1_AdaptAdapt_Hi_Max_DataStore()));

  /* RelationalOperator: '<S732>/Relational Operator6' incorporates:
   *  MinMax: '<S734>/MinMax1'
   *  S-Function (motohawk_sfun_calibration): '<S699>/motohawk_calibration11'
   */
  rtb_RelationalOperator6_h0 = (u >= (APP1_AdaptAdapt_Hi_Min_DataStore()));

  /* Sum: '<S732>/Sum2' incorporates:
   *  MinMax: '<S734>/MinMax1'
   */
  rtb_Abs_k = u - BaseEngineController_LS_B.s727_MinMax1;

  /* Abs: '<S732>/Abs' */
  rtb_Abs_k = fabs(rtb_Abs_k);

  /* Outputs for Enabled SubSystem: '<S732>/Store Current Position' incorporates:
   *  EnablePort: '<S735>/Enable'
   */
  /* Logic: '<S732>/Logical Operator2' incorporates:
   *  Logic: '<S732>/Logical Operator1'
   *  Logic: '<S732>/Logical Operator4'
   *  RelationalOperator: '<S732>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S727>/motohawk_calibration14'
   *  S-Function (motohawk_sfun_calibration): '<S727>/motohawk_calibration2'
   */
  if ((rtb_LogicalOperator1_a && rtb_RelationalOperator5_fz &&
       rtb_RelationalOperator6_h0 && (APP1_AdaptAdaptHiEnable_DataStore()) &&
       (rtb_Abs_k > (APP1_AdaptAdapt_Delta_DataStore()))) ||
      (rtb_RelationalOperator5_fz && rtb_RelationalOperator6_h0 &&
       (APP1_AdaptAdaptHiEnable_DataStore()) && rtb_LogicalOperator6_b)) {
    /* DataTypeConversion: '<S735>/Data Type Conversion2' incorporates:
     *  MinMax: '<S734>/MinMax1'
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

    /* End of DataTypeConversion: '<S735>/Data Type Conversion2' */

    /* S-Function (motohawk_sfun_data_write): '<S735>/motohawk_data_write' */
    /* Write to Data Storage as scalar: APP1_AdaptRaw_Adpt_Hi */
    {
      APP1_AdaptRaw_Adpt_Hi_DataStore() = rtb_DataTypeConversion2_d;
    }
  }

  /* End of Logic: '<S732>/Logical Operator2' */
  /* End of Outputs for SubSystem: '<S732>/Store Current Position' */

  /* MinMax: '<S734>/MinMax' */
  y = (BaseEngineController_LS_B.s699_Switch >= rtb_Switch1_f) || rtIsNaN
    (rtb_Switch1_f) ? BaseEngineController_LS_B.s699_Switch : rtb_Switch1_f;
  y = (y >= rtb_Switch_o) || rtIsNaN(rtb_Switch_o) ? y : rtb_Switch_o;
  y = (y >= rtb_DataTypeConversion1_e) || rtIsNaN(rtb_DataTypeConversion1_e) ? y
    : rtb_DataTypeConversion1_e;
  rtb_Abs_k = (y >= rtb_Abs_co) || rtIsNaN(rtb_Abs_co) ? y : rtb_Abs_co;

  /* RelationalOperator: '<S733>/Relational Operator9' incorporates:
   *  MinMax: '<S734>/MinMax'
   */
  rtb_LogicalOperator6_b = (rtb_Abs_k < BaseEngineController_LS_B.s727_MinMax);

  /* RelationalOperator: '<S733>/Relational Operator5' incorporates:
   *  MinMax: '<S734>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S699>/motohawk_calibration9'
   */
  rtb_RelationalOperator5_fz = (rtb_Abs_k <= (APP1_AdaptAdapt_Low_Max_DataStore()));

  /* RelationalOperator: '<S733>/Relational Operator6' incorporates:
   *  MinMax: '<S734>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S699>/motohawk_calibration10'
   */
  rtb_RelationalOperator6_h0 = (rtb_Abs_k >= (APP1_AdaptAdapt_Low_Min_DataStore()));

  /* Sum: '<S733>/Sum2' incorporates:
   *  MinMax: '<S734>/MinMax'
   */
  rtb_Abs_co = rtb_Abs_k - BaseEngineController_LS_B.s727_MinMax;

  /* Abs: '<S733>/Abs' */
  rtb_Abs_co = fabs(rtb_Abs_co);

  /* Outputs for Enabled SubSystem: '<S733>/Store Current Position' incorporates:
   *  EnablePort: '<S736>/Enable'
   */
  /* Logic: '<S733>/Logical Operator2' incorporates:
   *  Logic: '<S733>/Logical Operator1'
   *  Logic: '<S733>/Logical Operator4'
   *  RelationalOperator: '<S733>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S727>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S727>/motohawk_calibration14'
   */
  if ((rtb_LogicalOperator6_b && rtb_RelationalOperator5_fz &&
       rtb_RelationalOperator6_h0 && (APP1_AdaptAdaptLoEnable_DataStore()) &&
       (rtb_Abs_co > (APP1_AdaptAdapt_Delta_DataStore()))) ||
      (rtb_RelationalOperator5_fz && rtb_RelationalOperator6_h0 &&
       (APP1_AdaptAdaptLoEnable_DataStore()) && rtb_RelOp_pu)) {
    /* DataTypeConversion: '<S736>/Data Type Conversion2' incorporates:
     *  MinMax: '<S734>/MinMax'
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

    /* End of DataTypeConversion: '<S736>/Data Type Conversion2' */

    /* S-Function (motohawk_sfun_data_write): '<S736>/motohawk_data_write' */
    /* Write to Data Storage as scalar: APP1_AdaptRaw_Adpt_Low */
    {
      APP1_AdaptRaw_Adpt_Low_DataStore() = rtb_DataTypeConversion2_hr;
    }
  }

  /* End of Logic: '<S733>/Logical Operator2' */
  /* End of Outputs for SubSystem: '<S733>/Store Current Position' */

  /* RelationalOperator: '<S745>/Relational Operator5' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S745>/motohawk_calibration5'
   */
  rtb_RelationalOperator5_a = ((BaseEngineController_LS_B.s700_Switch >
    (APP2_AdaptInputHiFltPos_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S745>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: APP2_AdaptRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(18, rtb_RelationalOperator5_a);
    UpdateFault(18);
  }

  /* RelationalOperator: '<S745>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S745>/motohawk_calibration6'
   */
  rtb_RelationalOperator4_d = ((BaseEngineController_LS_B.s700_Switch <
    (APP2_AdaptInputLoFltPos_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S745>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: APP2_AdaptRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(19, rtb_RelationalOperator4_d);
    UpdateFault(19);
  }

  /* RelationalOperator: '<S745>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S700>/motohawk_calibration9'
   */
  rtb_RelationalOperator_f = ((BaseEngineController_LS_B.s744_MinMax >
    (APP2_AdaptAdapt_Low_Max_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S745>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: APP2_AdaptAdaptLoMax */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(16, rtb_RelationalOperator_f);
    UpdateFault(16);
  }

  /* RelationalOperator: '<S745>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S700>/motohawk_calibration12'
   */
  rtb_RelationalOperator3_n3 = ((BaseEngineController_LS_B.s744_MinMax1 >
    (APP2_AdaptAdapt_Hi_Max_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S745>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: APP2_AdaptAdaptHiMax */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(14, rtb_RelationalOperator3_n3);
    UpdateFault(14);
  }

  /* RelationalOperator: '<S745>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S700>/motohawk_calibration11'
   */
  rtb_RelationalOperator2_ma = ((BaseEngineController_LS_B.s744_MinMax1 <
    (APP2_AdaptAdapt_Hi_Min_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S745>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: APP2_AdaptAdaptHiMin */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(15, rtb_RelationalOperator2_ma);
    UpdateFault(15);
  }

  /* RelationalOperator: '<S745>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S700>/motohawk_calibration10'
   */
  rtb_RelationalOperator1_gr = ((BaseEngineController_LS_B.s744_MinMax <
    (APP2_AdaptAdapt_Low_Min_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S745>/motohawk_fault_def8' */

  /* Set Fault Suspected Status: APP2_AdaptAdaptLoMin */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(17, rtb_RelationalOperator1_gr);
    UpdateFault(17);
  }

  /* UnitDelay: '<S751>/Unit Delay1' */
  rtb_Abs_co = BaseEngineController_LS_DWork.s751_UnitDelay1_DSTATE;

  /* UnitDelay: '<S751>/Unit Delay' */
  rtb_Product6_m = BaseEngineController_LS_DWork.s751_UnitDelay_DSTATE;

  /* UnitDelay: '<S751>/Unit Delay3' */
  rtb_Product7_i = BaseEngineController_LS_DWork.s751_UnitDelay3_DSTATE;

  /* UnitDelay: '<S751>/Unit Delay4' */
  rtb_Product5_j = BaseEngineController_LS_DWork.s751_UnitDelay4_DSTATE;

  /* MinMax: '<S751>/MinMax1' incorporates:
   *  UnitDelay: '<S751>/Unit Delay'
   *  UnitDelay: '<S751>/Unit Delay3'
   *  UnitDelay: '<S751>/Unit Delay4'
   */
  y = (rtb_Abs_co <= BaseEngineController_LS_DWork.s751_UnitDelay_DSTATE) ||
    rtIsNaN(BaseEngineController_LS_DWork.s751_UnitDelay_DSTATE) ? rtb_Abs_co :
    BaseEngineController_LS_DWork.s751_UnitDelay_DSTATE;
  y = (y <= BaseEngineController_LS_DWork.s751_UnitDelay3_DSTATE) || rtIsNaN
    (BaseEngineController_LS_DWork.s751_UnitDelay3_DSTATE) ? y :
    BaseEngineController_LS_DWork.s751_UnitDelay3_DSTATE;
  y = (y <= BaseEngineController_LS_DWork.s751_UnitDelay4_DSTATE) || rtIsNaN
    (BaseEngineController_LS_DWork.s751_UnitDelay4_DSTATE) ? y :
    BaseEngineController_LS_DWork.s751_UnitDelay4_DSTATE;
  u = (y <= BaseEngineController_LS_B.s700_Switch) || rtIsNaN
    (BaseEngineController_LS_B.s700_Switch) ? y :
    BaseEngineController_LS_B.s700_Switch;

  /* RelationalOperator: '<S749>/Relational Operator9' incorporates:
   *  MinMax: '<S751>/MinMax1'
   */
  rtb_LogicalOperator6_b = (u > BaseEngineController_LS_B.s744_MinMax1);

  /* RelationalOperator: '<S749>/Relational Operator5' incorporates:
   *  MinMax: '<S751>/MinMax1'
   *  S-Function (motohawk_sfun_calibration): '<S700>/motohawk_calibration12'
   */
  rtb_RelationalOperator5_fz = (u <= (APP2_AdaptAdapt_Hi_Max_DataStore()));

  /* RelationalOperator: '<S749>/Relational Operator6' incorporates:
   *  MinMax: '<S751>/MinMax1'
   *  S-Function (motohawk_sfun_calibration): '<S700>/motohawk_calibration11'
   */
  rtb_RelationalOperator6_h0 = (u >= (APP2_AdaptAdapt_Hi_Min_DataStore()));

  /* Sum: '<S749>/Sum2' incorporates:
   *  MinMax: '<S751>/MinMax1'
   */
  rtb_Abs_k = u - BaseEngineController_LS_B.s744_MinMax1;

  /* Abs: '<S749>/Abs' */
  rtb_Abs_k = fabs(rtb_Abs_k);

  /* Outputs for Enabled SubSystem: '<S749>/Store Current Position' incorporates:
   *  EnablePort: '<S752>/Enable'
   */
  /* Logic: '<S749>/Logical Operator2' incorporates:
   *  Logic: '<S749>/Logical Operator1'
   *  Logic: '<S749>/Logical Operator4'
   *  RelationalOperator: '<S749>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S744>/motohawk_calibration14'
   *  S-Function (motohawk_sfun_calibration): '<S744>/motohawk_calibration2'
   */
  if ((rtb_LogicalOperator6_b && rtb_RelationalOperator5_fz &&
       rtb_RelationalOperator6_h0 && (APP2_AdaptAdaptHiEnable_DataStore()) &&
       (rtb_Abs_k > (APP2_AdaptAdapt_Delta_DataStore()))) ||
      (rtb_RelationalOperator5_fz && rtb_RelationalOperator6_h0 &&
       (APP2_AdaptAdaptHiEnable_DataStore()) && rtb_RelationalOperator3_bp)) {
    /* DataTypeConversion: '<S752>/Data Type Conversion2' incorporates:
     *  MinMax: '<S751>/MinMax1'
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

    /* End of DataTypeConversion: '<S752>/Data Type Conversion2' */

    /* S-Function (motohawk_sfun_data_write): '<S752>/motohawk_data_write' */
    /* Write to Data Storage as scalar: APP2_AdaptRaw_Adpt_Hi */
    {
      APP2_AdaptRaw_Adpt_Hi_DataStore() = rtb_DataTypeConversion2_h;
    }
  }

  /* End of Logic: '<S749>/Logical Operator2' */
  /* End of Outputs for SubSystem: '<S749>/Store Current Position' */

  /* MinMax: '<S751>/MinMax' */
  y = (BaseEngineController_LS_B.s700_Switch >= rtb_Product5_j) || rtIsNaN
    (rtb_Product5_j) ? BaseEngineController_LS_B.s700_Switch : rtb_Product5_j;
  y = (y >= rtb_Product7_i) || rtIsNaN(rtb_Product7_i) ? y : rtb_Product7_i;
  y = (y >= rtb_Product6_m) || rtIsNaN(rtb_Product6_m) ? y : rtb_Product6_m;
  rtb_Abs_k = (y >= rtb_Abs_co) || rtIsNaN(rtb_Abs_co) ? y : rtb_Abs_co;

  /* RelationalOperator: '<S750>/Relational Operator9' incorporates:
   *  MinMax: '<S751>/MinMax'
   */
  rtb_LogicalOperator6_b = (rtb_Abs_k < BaseEngineController_LS_B.s744_MinMax);

  /* RelationalOperator: '<S750>/Relational Operator5' incorporates:
   *  MinMax: '<S751>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S700>/motohawk_calibration9'
   */
  rtb_RelationalOperator5_fz = (rtb_Abs_k <= (APP2_AdaptAdapt_Low_Max_DataStore()));

  /* RelationalOperator: '<S750>/Relational Operator6' incorporates:
   *  MinMax: '<S751>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S700>/motohawk_calibration10'
   */
  rtb_RelationalOperator6_h0 = (rtb_Abs_k >= (APP2_AdaptAdapt_Low_Min_DataStore()));

  /* Sum: '<S750>/Sum2' incorporates:
   *  MinMax: '<S751>/MinMax'
   */
  rtb_Abs_co = rtb_Abs_k - BaseEngineController_LS_B.s744_MinMax;

  /* Abs: '<S750>/Abs' */
  rtb_Abs_co = fabs(rtb_Abs_co);

  /* Outputs for Enabled SubSystem: '<S750>/Store Current Position' incorporates:
   *  EnablePort: '<S753>/Enable'
   */
  /* Logic: '<S750>/Logical Operator2' incorporates:
   *  Logic: '<S750>/Logical Operator1'
   *  Logic: '<S750>/Logical Operator4'
   *  RelationalOperator: '<S750>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S744>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S744>/motohawk_calibration14'
   */
  if ((rtb_LogicalOperator6_b && rtb_RelationalOperator5_fz &&
       rtb_RelationalOperator6_h0 && (APP2_AdaptAdaptLoEnable_DataStore()) &&
       (rtb_Abs_co > (APP2_AdaptAdapt_Delta_DataStore()))) ||
      (rtb_RelationalOperator5_fz && rtb_RelationalOperator6_h0 &&
       (APP2_AdaptAdaptLoEnable_DataStore()) && rtb_Switch1_mj)) {
    /* DataTypeConversion: '<S753>/Data Type Conversion2' incorporates:
     *  MinMax: '<S751>/MinMax'
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

    /* End of DataTypeConversion: '<S753>/Data Type Conversion2' */

    /* S-Function (motohawk_sfun_data_write): '<S753>/motohawk_data_write' */
    /* Write to Data Storage as scalar: APP2_AdaptRaw_Adpt_Low */
    {
      APP2_AdaptRaw_Adpt_Low_DataStore() = rtb_DataTypeConversion2_p2;
    }
  }

  /* End of Logic: '<S750>/Logical Operator2' */
  /* End of Outputs for SubSystem: '<S750>/Store Current Position' */

  /* RelationalOperator: '<S762>/Relational Operator5' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S762>/motohawk_calibration5'
   */
  rtb_RelationalOperator5_k = ((BaseEngineController_LS_B.s701_Switch >
    (TPS1InputHiFltPos_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S762>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: TPS1RangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(107, rtb_RelationalOperator5_k);
    UpdateFault(107);
  }

  /* RelationalOperator: '<S762>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S762>/motohawk_calibration6'
   */
  rtb_RelationalOperator4_p = ((BaseEngineController_LS_B.s701_Switch <
    (TPS1InputLoFltPos_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S762>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: TPS1RangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(108, rtb_RelationalOperator4_p);
    UpdateFault(108);
  }

  /* RelationalOperator: '<S762>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S701>/motohawk_calibration9'
   */
  rtb_RelationalOperator_cz = ((BaseEngineController_LS_B.s761_MinMax >
    (TPS1Adapt_Low_Max_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S762>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: TPS1AdaptLoMax */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(105, rtb_RelationalOperator_cz);
    UpdateFault(105);
  }

  /* RelationalOperator: '<S762>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S701>/motohawk_calibration12'
   */
  rtb_RelationalOperator3_kn = ((BaseEngineController_LS_B.s761_MinMax1 >
    (TPS1Adapt_Hi_Max_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S762>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: TPS1AdaptHiMax */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(103, rtb_RelationalOperator3_kn);
    UpdateFault(103);
  }

  /* RelationalOperator: '<S762>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S701>/motohawk_calibration11'
   */
  rtb_RelationalOperator2_id = ((BaseEngineController_LS_B.s761_MinMax1 <
    (TPS1Adapt_Hi_Min_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S762>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: TPS1AdaptHiMin */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(104, rtb_RelationalOperator2_id);
    UpdateFault(104);
  }

  /* RelationalOperator: '<S762>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S701>/motohawk_calibration10'
   */
  rtb_RelationalOperator1_px = ((BaseEngineController_LS_B.s761_MinMax <
    (TPS1Adapt_Low_Min_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S762>/motohawk_fault_def8' */

  /* Set Fault Suspected Status: TPS1AdaptLoMin */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(106, rtb_RelationalOperator1_px);
    UpdateFault(106);
  }

  /* UnitDelay: '<S768>/Unit Delay1' */
  rtb_Abs_co = BaseEngineController_LS_DWork.s768_UnitDelay1_DSTATE;

  /* UnitDelay: '<S768>/Unit Delay' */
  rtb_DataTypeConversion_m = BaseEngineController_LS_DWork.s768_UnitDelay_DSTATE;

  /* UnitDelay: '<S768>/Unit Delay3' */
  rtb_Product_o = BaseEngineController_LS_DWork.s768_UnitDelay3_DSTATE;

  /* UnitDelay: '<S768>/Unit Delay4' */
  rtb_Switch_c = BaseEngineController_LS_DWork.s768_UnitDelay4_DSTATE;

  /* MinMax: '<S768>/MinMax1' incorporates:
   *  UnitDelay: '<S768>/Unit Delay'
   *  UnitDelay: '<S768>/Unit Delay3'
   *  UnitDelay: '<S768>/Unit Delay4'
   */
  y = (rtb_Abs_co <= BaseEngineController_LS_DWork.s768_UnitDelay_DSTATE) ||
    rtIsNaN(BaseEngineController_LS_DWork.s768_UnitDelay_DSTATE) ? rtb_Abs_co :
    BaseEngineController_LS_DWork.s768_UnitDelay_DSTATE;
  y = (y <= BaseEngineController_LS_DWork.s768_UnitDelay3_DSTATE) || rtIsNaN
    (BaseEngineController_LS_DWork.s768_UnitDelay3_DSTATE) ? y :
    BaseEngineController_LS_DWork.s768_UnitDelay3_DSTATE;
  y = (y <= BaseEngineController_LS_DWork.s768_UnitDelay4_DSTATE) || rtIsNaN
    (BaseEngineController_LS_DWork.s768_UnitDelay4_DSTATE) ? y :
    BaseEngineController_LS_DWork.s768_UnitDelay4_DSTATE;
  u = (y <= BaseEngineController_LS_B.s701_Switch) || rtIsNaN
    (BaseEngineController_LS_B.s701_Switch) ? y :
    BaseEngineController_LS_B.s701_Switch;

  /* RelationalOperator: '<S766>/Relational Operator9' incorporates:
   *  MinMax: '<S768>/MinMax1'
   */
  rtb_LogicalOperator6_b = (u > BaseEngineController_LS_B.s761_MinMax1);

  /* RelationalOperator: '<S766>/Relational Operator5' incorporates:
   *  MinMax: '<S768>/MinMax1'
   *  S-Function (motohawk_sfun_calibration): '<S701>/motohawk_calibration12'
   */
  rtb_RelationalOperator5_fz = (u <= (TPS1Adapt_Hi_Max_DataStore()));

  /* RelationalOperator: '<S766>/Relational Operator6' incorporates:
   *  MinMax: '<S768>/MinMax1'
   *  S-Function (motohawk_sfun_calibration): '<S701>/motohawk_calibration11'
   */
  rtb_RelationalOperator6_h0 = (u >= (TPS1Adapt_Hi_Min_DataStore()));

  /* Sum: '<S766>/Sum2' incorporates:
   *  MinMax: '<S768>/MinMax1'
   */
  rtb_Abs_k = u - BaseEngineController_LS_B.s761_MinMax1;

  /* Abs: '<S766>/Abs' */
  rtb_Abs_k = fabs(rtb_Abs_k);

  /* Outputs for Enabled SubSystem: '<S766>/Store Current Position' incorporates:
   *  EnablePort: '<S769>/Enable'
   */
  /* Logic: '<S766>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S766>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S761>/motohawk_calibration14'
   *  S-Function (motohawk_sfun_calibration): '<S761>/motohawk_calibration2'
   */
  if (rtb_LogicalOperator6_b && rtb_RelationalOperator5_fz &&
      rtb_RelationalOperator6_h0 && (TPS1AdaptHiEnable_DataStore()) &&
      (rtb_Abs_k > (TPS1Adapt_Delta_DataStore()))) {
    /* DataTypeConversion: '<S769>/Data Type Conversion2' incorporates:
     *  MinMax: '<S768>/MinMax1'
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

    /* End of DataTypeConversion: '<S769>/Data Type Conversion2' */

    /* S-Function (motohawk_sfun_data_write): '<S769>/motohawk_data_write' */
    /* Write to Data Storage as scalar: TPS1Raw_Adpt_Hi */
    {
      TPS1Raw_Adpt_Hi_DataStore() = rtb_DataTypeConversion2_k;
    }
  }

  /* End of Logic: '<S766>/Logical Operator1' */
  /* End of Outputs for SubSystem: '<S766>/Store Current Position' */

  /* MinMax: '<S768>/MinMax' */
  y = (BaseEngineController_LS_B.s701_Switch >= rtb_Switch_c) || rtIsNaN
    (rtb_Switch_c) ? BaseEngineController_LS_B.s701_Switch : rtb_Switch_c;
  y = (y >= rtb_Product_o) || rtIsNaN(rtb_Product_o) ? y : rtb_Product_o;
  y = (y >= rtb_DataTypeConversion_m) || rtIsNaN(rtb_DataTypeConversion_m) ? y :
    rtb_DataTypeConversion_m;
  rtb_Abs_k = (y >= rtb_Abs_co) || rtIsNaN(rtb_Abs_co) ? y : rtb_Abs_co;

  /* RelationalOperator: '<S767>/Relational Operator9' incorporates:
   *  MinMax: '<S768>/MinMax'
   */
  rtb_LogicalOperator6_b = (rtb_Abs_k < BaseEngineController_LS_B.s761_MinMax);

  /* RelationalOperator: '<S767>/Relational Operator5' incorporates:
   *  MinMax: '<S768>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S701>/motohawk_calibration9'
   */
  rtb_RelationalOperator5_fz = (rtb_Abs_k <= (TPS1Adapt_Low_Max_DataStore()));

  /* RelationalOperator: '<S767>/Relational Operator6' incorporates:
   *  MinMax: '<S768>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S701>/motohawk_calibration10'
   */
  rtb_RelationalOperator6_h0 = (rtb_Abs_k >= (TPS1Adapt_Low_Min_DataStore()));

  /* Sum: '<S767>/Sum2' incorporates:
   *  MinMax: '<S768>/MinMax'
   */
  rtb_Abs_co = rtb_Abs_k - BaseEngineController_LS_B.s761_MinMax;

  /* Abs: '<S767>/Abs' */
  rtb_Abs_co = fabs(rtb_Abs_co);

  /* Logic: '<S767>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S767>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S761>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S761>/motohawk_calibration14'
   */
  rtb_LogicalOperator6_b = (rtb_LogicalOperator6_b && rtb_RelationalOperator5_fz
    && rtb_RelationalOperator6_h0 && (TPS1AdaptLoEnable_DataStore()) &&
    (rtb_Abs_co > (TPS1Adapt_Delta_DataStore())));

  /* Outputs for Enabled SubSystem: '<S767>/Store Current Position' incorporates:
   *  EnablePort: '<S770>/Enable'
   */
  /* Logic: '<S767>/Logical Operator2' incorporates:
   *  Logic: '<S767>/Logical Operator4'
   *  S-Function (motohawk_sfun_calibration): '<S761>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S447>/motohawk_data_read'
   */
  if (rtb_LogicalOperator6_b || (rtb_RelationalOperator5_fz &&
       rtb_RelationalOperator6_h0 && (TPS1AdaptLoEnable_DataStore()) &&
       TPSAdaptLoRequest_DataStore())) {
    /* DataTypeConversion: '<S770>/Data Type Conversion2' incorporates:
     *  MinMax: '<S768>/MinMax'
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

    /* End of DataTypeConversion: '<S770>/Data Type Conversion2' */

    /* S-Function (motohawk_sfun_data_write): '<S770>/motohawk_data_write' */
    /* Write to Data Storage as scalar: TPS1Raw_Adpt_Low */
    {
      TPS1Raw_Adpt_Low_DataStore() = rtb_DataTypeConversion2_n;
    }
  }

  /* End of Logic: '<S767>/Logical Operator2' */
  /* End of Outputs for SubSystem: '<S767>/Store Current Position' */

  /* RelationalOperator: '<S779>/Relational Operator5' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S779>/motohawk_calibration5'
   */
  rtb_RelationalOperator5_g = ((BaseEngineController_LS_B.s702_Switch >
    (TPS2InputHiFltPos_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S779>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: TPS2RangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(113, rtb_RelationalOperator5_g);
    UpdateFault(113);
  }

  /* RelationalOperator: '<S779>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S779>/motohawk_calibration6'
   */
  rtb_RelationalOperator4_d1 = ((BaseEngineController_LS_B.s702_Switch <
    (TPS2InputLoFltPos_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S779>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: TPS2RangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(114, rtb_RelationalOperator4_d1);
    UpdateFault(114);
  }

  /* RelationalOperator: '<S779>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S702>/motohawk_calibration9'
   */
  rtb_RelationalOperator_fa = ((BaseEngineController_LS_B.s778_MinMax >
    (TPS2Adapt_Low_Max_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S779>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: TPS2AdaptLoMax */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(111, rtb_RelationalOperator_fa);
    UpdateFault(111);
  }

  /* RelationalOperator: '<S779>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S702>/motohawk_calibration12'
   */
  rtb_RelationalOperator3_jk = ((BaseEngineController_LS_B.s778_MinMax1 >
    (TPS2Adapt_Hi_Max_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S779>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: TPS2AdaptHiMax */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(109, rtb_RelationalOperator3_jk);
    UpdateFault(109);
  }

  /* RelationalOperator: '<S779>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S702>/motohawk_calibration11'
   */
  rtb_RelationalOperator2_or = ((BaseEngineController_LS_B.s778_MinMax1 <
    (TPS2Adapt_Hi_Min_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S779>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: TPS2AdaptHiMin */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(110, rtb_RelationalOperator2_or);
    UpdateFault(110);
  }

  /* RelationalOperator: '<S779>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S702>/motohawk_calibration10'
   */
  rtb_RelationalOperator1_d = ((BaseEngineController_LS_B.s778_MinMax <
    (TPS2Adapt_Low_Min_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S779>/motohawk_fault_def8' */

  /* Set Fault Suspected Status: TPS2AdaptLoMin */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(112, rtb_RelationalOperator1_d);
    UpdateFault(112);
  }

  /* UnitDelay: '<S785>/Unit Delay1' */
  rtb_Abs_co = BaseEngineController_LS_DWork.s785_UnitDelay1_DSTATE;

  /* UnitDelay: '<S785>/Unit Delay' */
  rtb_Switch_k = BaseEngineController_LS_DWork.s785_UnitDelay_DSTATE;

  /* UnitDelay: '<S785>/Unit Delay3' */
  rtb_Switch_f = BaseEngineController_LS_DWork.s785_UnitDelay3_DSTATE;

  /* UnitDelay: '<S785>/Unit Delay4' */
  rtb_APP2 = BaseEngineController_LS_DWork.s785_UnitDelay4_DSTATE;

  /* MinMax: '<S785>/MinMax1' incorporates:
   *  UnitDelay: '<S785>/Unit Delay'
   *  UnitDelay: '<S785>/Unit Delay3'
   *  UnitDelay: '<S785>/Unit Delay4'
   */
  y = (rtb_Abs_co <= BaseEngineController_LS_DWork.s785_UnitDelay_DSTATE) ||
    rtIsNaN(BaseEngineController_LS_DWork.s785_UnitDelay_DSTATE) ? rtb_Abs_co :
    BaseEngineController_LS_DWork.s785_UnitDelay_DSTATE;
  y = (y <= BaseEngineController_LS_DWork.s785_UnitDelay3_DSTATE) || rtIsNaN
    (BaseEngineController_LS_DWork.s785_UnitDelay3_DSTATE) ? y :
    BaseEngineController_LS_DWork.s785_UnitDelay3_DSTATE;
  y = (y <= BaseEngineController_LS_DWork.s785_UnitDelay4_DSTATE) || rtIsNaN
    (BaseEngineController_LS_DWork.s785_UnitDelay4_DSTATE) ? y :
    BaseEngineController_LS_DWork.s785_UnitDelay4_DSTATE;
  u = (y <= BaseEngineController_LS_B.s702_Switch) || rtIsNaN
    (BaseEngineController_LS_B.s702_Switch) ? y :
    BaseEngineController_LS_B.s702_Switch;

  /* RelationalOperator: '<S783>/Relational Operator9' incorporates:
   *  MinMax: '<S785>/MinMax1'
   */
  rtb_LogicalOperator6_b = (u > BaseEngineController_LS_B.s778_MinMax1);

  /* RelationalOperator: '<S783>/Relational Operator5' incorporates:
   *  MinMax: '<S785>/MinMax1'
   *  S-Function (motohawk_sfun_calibration): '<S702>/motohawk_calibration12'
   */
  rtb_RelationalOperator5_fz = (u <= (TPS2Adapt_Hi_Max_DataStore()));

  /* RelationalOperator: '<S783>/Relational Operator6' incorporates:
   *  MinMax: '<S785>/MinMax1'
   *  S-Function (motohawk_sfun_calibration): '<S702>/motohawk_calibration11'
   */
  rtb_RelationalOperator6_h0 = (u >= (TPS2Adapt_Hi_Min_DataStore()));

  /* Sum: '<S783>/Sum2' incorporates:
   *  MinMax: '<S785>/MinMax1'
   */
  rtb_Abs_k = u - BaseEngineController_LS_B.s778_MinMax1;

  /* Abs: '<S783>/Abs' */
  rtb_Abs_k = fabs(rtb_Abs_k);

  /* Outputs for Enabled SubSystem: '<S783>/Store Current Position' incorporates:
   *  EnablePort: '<S786>/Enable'
   */
  /* Logic: '<S783>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S783>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S778>/motohawk_calibration14'
   *  S-Function (motohawk_sfun_calibration): '<S778>/motohawk_calibration2'
   */
  if (rtb_LogicalOperator6_b && rtb_RelationalOperator5_fz &&
      rtb_RelationalOperator6_h0 && (TPS2AdaptHiEnable_DataStore()) &&
      (rtb_Abs_k > (TPS2Adapt_Delta_DataStore()))) {
    /* DataTypeConversion: '<S786>/Data Type Conversion2' incorporates:
     *  MinMax: '<S785>/MinMax1'
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

    /* End of DataTypeConversion: '<S786>/Data Type Conversion2' */

    /* S-Function (motohawk_sfun_data_write): '<S786>/motohawk_data_write' */
    /* Write to Data Storage as scalar: TPS2Raw_Adpt_Hi */
    {
      TPS2Raw_Adpt_Hi_DataStore() = rtb_DataTypeConversion2_jn;
    }
  }

  /* End of Logic: '<S783>/Logical Operator1' */
  /* End of Outputs for SubSystem: '<S783>/Store Current Position' */

  /* MinMax: '<S785>/MinMax' */
  y = (BaseEngineController_LS_B.s702_Switch >= rtb_APP2) || rtIsNaN(rtb_APP2) ?
    BaseEngineController_LS_B.s702_Switch : rtb_APP2;
  y = (y >= rtb_Switch_f) || rtIsNaN(rtb_Switch_f) ? y : rtb_Switch_f;
  y = (y >= rtb_Switch_k) || rtIsNaN(rtb_Switch_k) ? y : rtb_Switch_k;
  rtb_Abs_k = (y >= rtb_Abs_co) || rtIsNaN(rtb_Abs_co) ? y : rtb_Abs_co;

  /* RelationalOperator: '<S784>/Relational Operator9' incorporates:
   *  MinMax: '<S785>/MinMax'
   */
  rtb_LogicalOperator6_b = (rtb_Abs_k < BaseEngineController_LS_B.s778_MinMax);

  /* RelationalOperator: '<S784>/Relational Operator5' incorporates:
   *  MinMax: '<S785>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S702>/motohawk_calibration9'
   */
  rtb_RelationalOperator5_fz = (rtb_Abs_k <= (TPS2Adapt_Low_Max_DataStore()));

  /* RelationalOperator: '<S784>/Relational Operator6' incorporates:
   *  MinMax: '<S785>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S702>/motohawk_calibration10'
   */
  rtb_RelationalOperator6_h0 = (rtb_Abs_k >= (TPS2Adapt_Low_Min_DataStore()));

  /* Sum: '<S784>/Sum2' incorporates:
   *  MinMax: '<S785>/MinMax'
   */
  rtb_Abs_co = rtb_Abs_k - BaseEngineController_LS_B.s778_MinMax;

  /* Abs: '<S784>/Abs' */
  rtb_Abs_co = fabs(rtb_Abs_co);

  /* Outputs for Enabled SubSystem: '<S784>/Store Current Position' incorporates:
   *  EnablePort: '<S787>/Enable'
   */
  /* Logic: '<S784>/Logical Operator2' incorporates:
   *  Logic: '<S784>/Logical Operator1'
   *  Logic: '<S784>/Logical Operator4'
   *  RelationalOperator: '<S784>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S778>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S778>/motohawk_calibration14'
   *  S-Function (motohawk_sfun_data_read): '<S447>/motohawk_data_read'
   */
  if ((rtb_LogicalOperator6_b && rtb_RelationalOperator5_fz &&
       rtb_RelationalOperator6_h0 && (TPS2AdaptLoEnable_DataStore()) &&
       (rtb_Abs_co > (TPS2Adapt_Delta_DataStore()))) ||
      (rtb_RelationalOperator5_fz && rtb_RelationalOperator6_h0 &&
       (TPS2AdaptLoEnable_DataStore()) && TPSAdaptLoRequest_DataStore())) {
    /* DataTypeConversion: '<S787>/Data Type Conversion2' incorporates:
     *  MinMax: '<S785>/MinMax'
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

    /* End of DataTypeConversion: '<S787>/Data Type Conversion2' */

    /* S-Function (motohawk_sfun_data_write): '<S787>/motohawk_data_write' */
    /* Write to Data Storage as scalar: TPS2Raw_Adpt_Low */
    {
      TPS2Raw_Adpt_Low_DataStore() = rtb_DataTypeConversion2_o;
    }
  }

  /* End of Logic: '<S784>/Logical Operator2' */
  /* End of Outputs for SubSystem: '<S784>/Store Current Position' */

  /* Update for S-Function (motohawk_sfun_dout): '<S795>/motohawk_dout' */

  /* S-Function Block: DOut8675p0002 */
  {
    DOut8675p0002_DiscreteOutput_Set
      (BaseEngineController_LS_B.s805_LogicalOperator);
  }

  /* Update for UnitDelay: '<S697>/Unit Delay' incorporates:
   *  MinMax: '<S720>/MinMax1'
   */
  BaseEngineController_LS_DWork.s697_UnitDelay_DSTATE = minV;

  /* Update for UnitDelay: '<S722>/Unit Delay' */
  BaseEngineController_LS_DWork.s722_UnitDelay_DSTATE = rtb_Sum1_nb;

  /* Update for UnitDelay: '<S754>/Unit Delay' */
  BaseEngineController_LS_DWork.s754_UnitDelay_DSTATE = rtb_Sum1_b4;

  /* Update for UnitDelay: '<S747>/Unit Delay1' */
  BaseEngineController_LS_DWork.s747_UnitDelay1_DSTATE = rtb_Merge_m;

  /* Update for UnitDelay: '<S695>/Unit Delay' incorporates:
   *  MinMax: '<S708>/MinMax1'
   */
  BaseEngineController_LS_DWork.s695_UnitDelay_DSTATE = minV_0;

  /* Update for UnitDelay: '<S710>/Unit Delay' */
  BaseEngineController_LS_DWork.s710_UnitDelay_DSTATE = rtb_Sum1_m;

  /* Update for UnitDelay: '<S737>/Unit Delay' */
  BaseEngineController_LS_DWork.s737_UnitDelay_DSTATE = rtb_Sum1_h1;

  /* Update for UnitDelay: '<S730>/Unit Delay1' */
  BaseEngineController_LS_DWork.s730_UnitDelay1_DSTATE = rtb_Merge_ao;

  /* Update for UnitDelay: '<S410>/Unit Delay' */
  BaseEngineController_LS_DWork.s410_UnitDelay_DSTATE =
    BaseEngineController_LS_B.s430_State;

  /* Update for UnitDelay: '<S452>/Unit Delay' */
  BaseEngineController_LS_DWork.s452_UnitDelay_DSTATE = rtb_Merge_i;

  /* Update for UnitDelay: '<S479>/Unit Delay' */
  BaseEngineController_LS_DWork.s479_UnitDelay_DSTATE = rtb_Sum1_a;

  /* Update for UnitDelay: '<S501>/Unit Delay1' */
  BaseEngineController_LS_DWork.s501_UnitDelay1_DSTATE = rtb_Merge_b;

  /* Update for UnitDelay: '<S515>/Unit Delay' */
  BaseEngineController_LS_DWork.s515_UnitDelay_DSTATE = rtb_Sum1_li;

  /* Update for UnitDelay: '<S500>/Unit Delay' */
  BaseEngineController_LS_DWork.s500_UnitDelay_DSTATE =
    BaseEngineController_LS_B.s500_Sum1;

  /* Update for UnitDelay: '<S771>/Unit Delay' */
  BaseEngineController_LS_DWork.s771_UnitDelay_DSTATE = rtb_Sum1_hw;

  /* Update for UnitDelay: '<S764>/Unit Delay1' */
  BaseEngineController_LS_DWork.s764_UnitDelay1_DSTATE = rtb_Merge_li;

  /* Update for UnitDelay: '<S788>/Unit Delay' */
  BaseEngineController_LS_DWork.s788_UnitDelay_DSTATE = rtb_Sum1_lp;

  /* Update for UnitDelay: '<S781>/Unit Delay1' */
  BaseEngineController_LS_DWork.s781_UnitDelay1_DSTATE = rtb_Merge_mv;

  /* Update for UnitDelay: '<S527>/Unit Delay' */
  BaseEngineController_LS_DWork.s527_UnitDelay_DSTATE = rtb_Sum2_gr;

  /* Update for UnitDelay: '<S502>/Unit Delay1' */
  BaseEngineController_LS_DWork.s502_UnitDelay1_DSTATE = rtb_Merge_i5;

  /* Update for UnitDelay: '<S526>/Unit Delay' */
  BaseEngineController_LS_DWork.s526_UnitDelay_DSTATE = rtb_Sum1_mz;

  /* Update for UnitDelay: '<S524>/Unit Delay' */
  BaseEngineController_LS_DWork.s524_UnitDelay_DSTATE = rtb_Merge_i5;

  /* Update for UnitDelay: '<S524>/Unit Delay1' */
  BaseEngineController_LS_DWork.s524_UnitDelay1_DSTATE = rtb_UnitDelay_n;

  /* Update for UnitDelay: '<S524>/Unit Delay2' */
  BaseEngineController_LS_DWork.s524_UnitDelay2_DSTATE = rtb_UnitDelay1_h;

  /* Update for UnitDelay: '<S413>/Unit Delay' */
  BaseEngineController_LS_DWork.s413_UnitDelay_DSTATE =
    BaseEngineController_LS_B.s581_Gain;

  /* Update for UnitDelay: '<S584>/Unit Delay1' */
  BaseEngineController_LS_DWork.s584_UnitDelay1_DSTATE = rtb_Merge_j;

  /* Update for UnitDelay: '<S616>/Unit Delay' */
  BaseEngineController_LS_DWork.s616_UnitDelay_DSTATE = rtb_Sum1_o;

  /* Update for UnitDelay: '<S583>/Unit Delay1' */
  BaseEngineController_LS_DWork.s583_UnitDelay1_DSTATE = rtb_Merge_h;

  /* Update for UnitDelay: '<S608>/Unit Delay' */
  BaseEngineController_LS_DWork.s608_UnitDelay_DSTATE = rtb_Sum1_c;

  /* Update for UnitDelay: '<S509>/Unit Delay1' */
  BaseEngineController_LS_DWork.s509_UnitDelay1_DSTATE = rtb_Merge_f;

  /* Update for UnitDelay: '<S578>/Unit Delay' */
  BaseEngineController_LS_DWork.s578_UnitDelay_DSTATE = rtb_Sum1_nl;

  /* Update for UnitDelay: '<S504>/Unit Delay1' */
  BaseEngineController_LS_DWork.s504_UnitDelay1_DSTATE = rtb_Merge_in;

  /* Update for UnitDelay: '<S544>/Unit Delay' */
  BaseEngineController_LS_DWork.s544_UnitDelay_DSTATE = rtb_Sum1_d4;

  /* Update for UnitDelay: '<S505>/Unit Delay1' */
  BaseEngineController_LS_DWork.s505_UnitDelay1_DSTATE = rtb_Merge_jq;

  /* Update for UnitDelay: '<S375>/Unit Delay' */
  BaseEngineController_LS_DWork.s375_UnitDelay_DSTATE = rtb_Merge_b3;

  /* Update for UnitDelay: '<S451>/Unit Delay' */
  BaseEngineController_LS_DWork.s451_UnitDelay_DSTATE = rtb_Merge_dv;

  /* Update for UnitDelay: '<S470>/Unit Delay' */
  BaseEngineController_LS_DWork.s470_UnitDelay_DSTATE = rtb_Sum1_fm;

  /* Update for UnitDelay: '<S386>/Unit Delay2' */
  BaseEngineController_LS_DWork.s386_UnitDelay2_DSTATE = rtb_DesiredLambda_idx;

  /* Update for UnitDelay: '<S389>/Unit Delay' */
  BaseEngineController_LS_DWork.s389_UnitDelay_DSTATE =
    BaseEngineController_LS_B.s389_Sum1;

  /* Update for UnitDelay: '<S387>/Unit Delay2' */
  BaseEngineController_LS_DWork.s387_UnitDelay2_DSTATE = rtb_UnitDelay1_k;

  /* Update for UnitDelay: '<S392>/Unit Delay' */
  BaseEngineController_LS_DWork.s392_UnitDelay_DSTATE =
    BaseEngineController_LS_B.s392_Sum1;

  /* Update for UnitDelay: '<S427>/Unit Delay' */
  BaseEngineController_LS_DWork.s427_UnitDelay_DSTATE =
    BaseEngineController_LS_B.s500_Sum1;

  /* Update for UnitDelay: '<S429>/Unit Delay' */
  BaseEngineController_LS_DWork.s429_UnitDelay_DSTATE =
    BaseEngineController_LS_B.s429_Sum1;

  /* Update for UnitDelay: '<S552>/Unit Delay' */
  BaseEngineController_LS_DWork.s552_UnitDelay_DSTATE = rtb_Sum1_mzy;

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

    /* Update for UnitDelay: '<S147>/Unit Delay' */
    BaseEngineController_LS_DWork.s147_UnitDelay_DSTATE =
      BaseEngineController_LS_B.s186_Switch1;

    /* Update for UnitDelay: '<S186>/Unit Delay' */
    BaseEngineController_LS_DWork.s186_UnitDelay_DSTATE = rtb_MinMax1_d;

    /* Update for UnitDelay: '<S176>/Unit Delay' */
    BaseEngineController_LS_DWork.s176_UnitDelay_DSTATE = rtb_Sum2_o;

    /* Update for UnitDelay: '<S185>/Unit Delay' */
    BaseEngineController_LS_DWork.s185_UnitDelay_DSTATE = rtb_Product4_k;

    /* Update for UnitDelay: '<S202>/Unit Delay' */
    BaseEngineController_LS_DWork.s202_UnitDelay_DSTATE = rtb_Switch1_em;

    /* Update for UnitDelay: '<S203>/Unit Delay' */
    BaseEngineController_LS_DWork.s203_UnitDelay_DSTATE = rtb_Switch1_l4;

    /* Update for UnitDelay: '<S204>/Unit Delay' */
    BaseEngineController_LS_DWork.s204_UnitDelay_DSTATE = rtb_Switch1_mo;
  }

  /* End of Update for SubSystem: '<S15>/Run' */

  /* Update for UnitDelay: '<S503>/Unit Delay1' */
  BaseEngineController_LS_DWork.s503_UnitDelay1_DSTATE = rtb_Merge_b3f;

  /* Update for UnitDelay: '<S536>/Unit Delay' */
  BaseEngineController_LS_DWork.s536_UnitDelay_DSTATE = rtb_Sum1_cs;

  /* Update for UnitDelay: '<S507>/Unit Delay1' */
  BaseEngineController_LS_DWork.s507_UnitDelay1_DSTATE = rtb_Merge_ol;

  /* Update for UnitDelay: '<S562>/Unit Delay' */
  BaseEngineController_LS_DWork.s562_UnitDelay_DSTATE = rtb_Sum1_oh;

  /* Update for S-Function (motohawk_sfun_dout): '<S799>/motohawk_dout' */

  /* S-Function Block: DOut9277p0001 */
  {
    DOut9277p0001_DiscreteOutput_Set
      (BaseEngineController_LS_B.s850_LogicalOperator);
  }

  /* Update for S-Function (motohawk_sfun_pwm): '<S799>/motohawk_pwm' */

  /* S-Function Block: FAN1Pin_PWM_PWMOutput */
  FAN1Pin_PWM_PWMOutput_PWMOutput_Set(rtb_DataTypeConversion2_j,
    rtb_DataTypeConversion3_c, 0, 1);

  /* Update for S-Function (motohawk_sfun_dout): '<S799>/motohawk_dout1' */

  /* S-Function Block: DOut9278p0001 */
  {
    DOut9278p0001_DiscreteOutput_Set
      (BaseEngineController_LS_B.s851_LogicalOperator);
  }

  /* Update for S-Function (motohawk_sfun_pwm): '<S799>/motohawk_pwm1' */

  /* S-Function Block: FAN2Pin_PWM_PWMOutput */
  FAN2Pin_PWM_PWMOutput_PWMOutput_Set(rtb_DataTypeConversion2_e,
    rtb_DataTypeConversion3_k, 0, 1);

  /* Update for S-Function (motohawk_sfun_dout): '<S800>/motohawk_dout' */

  /* S-Function Block: DOut9296p0001 */
  {
    DOut9296p0001_DiscreteOutput_Set
      (BaseEngineController_LS_B.s868_LogicalOperator);
  }

  /* Update for S-Function (motohawk_sfun_pwm): '<S801>/motohawk_pwm1' */

  /* S-Function Block: ETCPin_PWMOutput */
  ETCPin_PWMOutput_PWMOutput_Set(rtb_DataTypeConversion3_j,
    rtb_DataTypeConversion4_m, 0, 1);

  /* Update for S-Function (motohawk_sfun_pwm): '<S802>/motohawk_pwm' */

  /* S-Function Block: IAC_PPin_PWMOutput */
  IAC_PPin_PWMOutput_PWMOutput_Set(rtb_DataTypeConversion2_l,
    rtb_DataTypeConversion3_p, 0, 1);

  /* Update for S-Function (motohawk_sfun_pwm): '<S802>/motohawk_pwm1' */

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

  /* Update for S-Function (motohawk_sfun_pwm): '<S804>/motohawk_pwm' */

  /* S-Function Block: WASTEGATE_PWMOutput */
  WASTEGATE_PWMOutput_PWMOutput_Set(rtb_DataTypeConversion2_p,
    rtb_DataTypeConversion3_e, 0, 1);

  /* Update for UnitDelay: '<S441>/Unit Delay' */
  BaseEngineController_LS_DWork.s441_UnitDelay_DSTATE = rtb_Switch_kj;

  /* Update for UnitDelay: '<S413>/Unit Delay1' */
  BaseEngineController_LS_DWork.s413_UnitDelay1_DSTATE =
    BaseEngineController_LS_B.s581_Gain;

  /* Update for UnitDelay: '<S508>/Unit Delay1' */
  BaseEngineController_LS_DWork.s508_UnitDelay1_DSTATE = rtb_Merge_ht;

  /* Update for UnitDelay: '<S570>/Unit Delay' */
  BaseEngineController_LS_DWork.s570_UnitDelay_DSTATE = rtb_Sum1_m3;

  /* Update for UnitDelay: '<S386>/Unit Delay1' */
  BaseEngineController_LS_DWork.s386_UnitDelay1_DSTATE = rtb_DesiredLambda_idx_0;

  /* Update for UnitDelay: '<S386>/Unit Delay3' */
  BaseEngineController_LS_DWork.s386_UnitDelay3_DSTATE = rtb_UnitDelay4_i;

  /* Update for UnitDelay: '<S386>/Unit Delay4' */
  BaseEngineController_LS_DWork.s386_UnitDelay4_DSTATE =
    BaseEngineController_LS_B.s500_Sum1;

  /* Update for UnitDelay: '<S387>/Unit Delay1' */
  BaseEngineController_LS_DWork.s387_UnitDelay1_DSTATE = rtb_UnitDelay3_j;

  /* Update for UnitDelay: '<S387>/Unit Delay3' */
  BaseEngineController_LS_DWork.s387_UnitDelay3_DSTATE = rtb_UnitDelay4_ie;

  /* Update for UnitDelay: '<S387>/Unit Delay4' */
  BaseEngineController_LS_DWork.s387_UnitDelay4_DSTATE =
    BaseEngineController_LS_B.s543_Merge;

  /* Update for UnitDelay: '<S734>/Unit Delay1' */
  BaseEngineController_LS_DWork.s734_UnitDelay1_DSTATE =
    rtb_DataTypeConversion1_e;

  /* Update for UnitDelay: '<S734>/Unit Delay' */
  BaseEngineController_LS_DWork.s734_UnitDelay_DSTATE = rtb_Switch_o;

  /* Update for UnitDelay: '<S734>/Unit Delay3' */
  BaseEngineController_LS_DWork.s734_UnitDelay3_DSTATE = rtb_Switch1_f;

  /* Update for UnitDelay: '<S734>/Unit Delay4' */
  BaseEngineController_LS_DWork.s734_UnitDelay4_DSTATE =
    BaseEngineController_LS_B.s699_Switch;

  /* Update for UnitDelay: '<S751>/Unit Delay1' */
  BaseEngineController_LS_DWork.s751_UnitDelay1_DSTATE = rtb_Product6_m;

  /* Update for UnitDelay: '<S751>/Unit Delay' */
  BaseEngineController_LS_DWork.s751_UnitDelay_DSTATE = rtb_Product7_i;

  /* Update for UnitDelay: '<S751>/Unit Delay3' */
  BaseEngineController_LS_DWork.s751_UnitDelay3_DSTATE = rtb_Product5_j;

  /* Update for UnitDelay: '<S751>/Unit Delay4' */
  BaseEngineController_LS_DWork.s751_UnitDelay4_DSTATE =
    BaseEngineController_LS_B.s700_Switch;

  /* Update for UnitDelay: '<S768>/Unit Delay1' */
  BaseEngineController_LS_DWork.s768_UnitDelay1_DSTATE =
    rtb_DataTypeConversion_m;

  /* Update for UnitDelay: '<S768>/Unit Delay' */
  BaseEngineController_LS_DWork.s768_UnitDelay_DSTATE = rtb_Product_o;

  /* Update for UnitDelay: '<S768>/Unit Delay3' */
  BaseEngineController_LS_DWork.s768_UnitDelay3_DSTATE = rtb_Switch_c;

  /* Update for UnitDelay: '<S768>/Unit Delay4' */
  BaseEngineController_LS_DWork.s768_UnitDelay4_DSTATE =
    BaseEngineController_LS_B.s701_Switch;

  /* Update for UnitDelay: '<S785>/Unit Delay1' */
  BaseEngineController_LS_DWork.s785_UnitDelay1_DSTATE = rtb_Switch_k;

  /* Update for UnitDelay: '<S785>/Unit Delay' */
  BaseEngineController_LS_DWork.s785_UnitDelay_DSTATE = rtb_Switch_f;

  /* Update for UnitDelay: '<S785>/Unit Delay3' */
  BaseEngineController_LS_DWork.s785_UnitDelay3_DSTATE = rtb_APP2;

  /* Update for UnitDelay: '<S785>/Unit Delay4' */
  BaseEngineController_LS_DWork.s785_UnitDelay4_DSTATE =
    BaseEngineController_LS_B.s702_Switch;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
