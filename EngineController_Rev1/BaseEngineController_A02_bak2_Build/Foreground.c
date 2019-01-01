/*
 * File: Foreground.c
 *
 * Code generated for Simulink model 'BaseEngineController_A02_bak2'.
 *
 * Model version                  : 1.1531
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Tue Jan 01 09:48:38 2019
 *
 * Target selection: motohawk_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Foreground.h"

/* Include model header file for global data */
#include "BaseEngineController_A02_bak2.h"
#include "BaseEngineController_A02_bak2_private.h"

/* Named constants for Stateflow: '<S12>/ETC Test  Manager' */
#define BaseEngineController_A02_bak2_IN_ForcedShutdown (1U)
#define BaseEngineController_A02_bak2_IN_LowAdapt (2U)
#define BaseEngineController_A02_bak2_IN_PassThrough (3U)
#define BaseEngineController_A02_bak2_IN_SpringTest (4U)
#define BaseEngineController_A02_bak2_IN_SpringTestComplete (5U)
#define BaseEngineController_A02_bak2_IN_SpringTestSetpoint (6U)

/* Named constants for Stateflow: '<S176>/Individual On Stateflow' */
#define BaseEngineController_A02_bak2_IN_CruiseOff (1U)
#define BaseEngineController_A02_bak2_IN_CruiseOn (2U)

/* Named constants for Stateflow: '<S347>/Baro Stall State Delay' */
#define BaseEngineController_A02_bak2_IN_CrankRun (1U)
#define BaseEngineController_A02_bak2_IN_Stall (2U)
#define BaseEngineController_A02_bak2_IN_StallDelay (3U)

/* Named constants for Stateflow: '<S399>/Engine State Machine' */
#define BaseEngineController_A02_bak2_IN_Crank (1U)
#define BaseEngineController_A02_bak2_IN_Run (2U)
#define BaseEngineController_A02_bak2_IN_Stall_o (3U)

/* Named constants for Stateflow: '<S441>/Chart' */
#define BaseEngineController_A02_bak2_IN_ON (1U)
#define BaseEngineController_A02_bak2_IN_Off (2U)
#define BaseEngineController_A02_bak2_IN_RSM (3U)
#define BaseEngineController_A02_bak2_IN_SetMinus (4U)
#define BaseEngineController_A02_bak2_IN_SetPlus (5U)
#define BaseEngineController_A02_bak2_IN_default (6U)

/*
 * Output and update for enable system:
 *    '<S200>/Multiply and Divide, avoiding divde by zero'
 *    '<S375>/Multiply and Divide, avoiding divde by zero1'
 */
void BaseEngineController_A02_bak2_MultiplyandDivideavoidingdivdebyzero
  (boolean_T rtu_0, real_T rtu_X1, real_T rtu_X2, real_T rtu_Divide1, real_T
   rtu_Divide2,
   rtB_MultiplyandDivideavoidingdivdebyzero_BaseEngineController_A02_bak2
   *localB)
{
  /* Outputs for Enabled SubSystem: '<S200>/Multiply and Divide, avoiding divde by zero' incorporates:
   *  EnablePort: '<S205>/Enable'
   */
  if (rtu_0) {
    /* Product: '<S205>/charge mass' */
    localB->s205_chargemass = rtu_X1 * rtu_X2 / rtu_Divide1 / rtu_Divide2;
  }

  /* End of Outputs for SubSystem: '<S200>/Multiply and Divide, avoiding divde by zero' */
}

/*
 * Start for enable system:
 *    '<S394>/PassThrough1'
 *    '<S394>/PassThrough2'
 */
void BaseEngineController_A02_bak2_PassThrough1_Start(real_T *rty_Out1)
{
  /* VirtualOutportStart for Outport: '<S408>/Out1' */
  (*rty_Out1) = 0.005;
}

/*
 * Output and update for enable system:
 *    '<S394>/PassThrough1'
 *    '<S394>/PassThrough2'
 */
void BaseEngineController_A02_bak2_PassThrough1(boolean_T rtu_0, real_T rtu_1,
  real_T *rty_Out1)
{
  /* Outputs for Enabled SubSystem: '<S394>/PassThrough1' incorporates:
   *  EnablePort: '<S408>/Enable'
   */
  if (rtu_0) {
    /* Inport: '<S408>/In1' */
    (*rty_Out1) = rtu_1;
  }

  /* End of Outputs for SubSystem: '<S394>/PassThrough1' */
}

/*
 * Output and update for action system:
 *    '<S447>/If Action Subsystem'
 *    '<S447>/If Action Subsystem1'
 *    '<S447>/If Action Subsystem2'
 *    '<S539>/If Action Subsystem'
 *    '<S539>/If Action Subsystem1'
 *    '<S539>/If Action Subsystem2'
 *    '<S540>/If Action Subsystem'
 *    '<S540>/If Action Subsystem1'
 *    '<S540>/If Action Subsystem2'
 *    '<S541>/If Action Subsystem'
 *    ...
 */
void BaseEngineController_A02_bak2_IfActionSubsystem(real_T rtu_0, real_T
  *rty_Out)
{
  /* Inport: '<S512>/In' */
  (*rty_Out) = rtu_0;
}

/* Initial conditions for function-call system: '<Root>/Foreground' */
void BaseEngineController_A02_bak2_Foreground_Init(void)
{
  /* Initial conditions for function-call system: '<S437>/Temp Sensors' */

  /* S-Function Block: <S633>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_bak2_DWork.s633_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S651>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_bak2_DWork.s651_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S642>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_bak2_DWork.s642_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for Stateflow: '<S399>/Engine State Machine' */

  /* Entry: Foreground/Control/VirtualSensors/RawProcessed/EngineState/Engine State Machine */
  /* Transition: '<S418>:4' */
  BaseEngineController_A02_bak2_DWork.s418_is_c2_BaseEngineController_A02_bak2 =
    BaseEngineController_A02_bak2_IN_Stall_o;

  /* Entry 'Stall': '<S418>:1' */
  BaseEngineController_A02_bak2_B.s418_State = 1U;

  /* S-Function Block: <S548>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_bak2_DWork.s548_motohawk_delta_time_DWORK1 = now -
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
    BaseEngineController_A02_bak2_DWork.s531_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S664>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_bak2_DWork.s664_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S674>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_bak2_DWork.s674_motohawk_delta_time_DWORK1 = now -
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
    BaseEngineController_A02_bak2_DWork.s684_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S694>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_bak2_DWork.s694_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S565>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_bak2_DWork.s565_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S561>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_bak2_DWork.s561_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for Atomic SubSystem: '<S350>/Base TPS Request' */

  /* S-Function Block: <S410>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_bak2_DWork.s410_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S394>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_bak2_DWork.s394_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* End of InitializeConditions for SubSystem: '<S350>/Base TPS Request' */

  /* S-Function Block: <S621>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_bak2_DWork.s621_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S423>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_bak2_DWork.s423_motohawk_delta_time_DWORK1 = now -
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
    BaseEngineController_A02_bak2_DWork.s347_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for Stateflow: '<S347>/Baro Stall State Delay' */
  BaseEngineController_A02_bak2_DWork.s352_TOld = 0.0;
  BaseEngineController_A02_bak2_B.s352_Timer = 0.0;

  /* Entry: Foreground/Control/VirtualSensors/AirCalcs/Baro Stall State Delay */
  /* Transition: '<S352>:4' */
  BaseEngineController_A02_bak2_DWork.s352_is_c19_BaseEngineController_A02_bak2 =
    BaseEngineController_A02_bak2_IN_Stall;

  /* Entry 'Stall': '<S352>:1' */
  BaseEngineController_A02_bak2_B.s352_Enable = TRUE;

  /* S-Function Block: <S577>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_bak2_DWork.s577_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S511>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_bak2_DWork.s511_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S366>/motohawk_delta_time1 */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_bak2_DWork.s366_motohawk_delta_time1_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S415>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_bak2_DWork.s415_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(-1);
  }

  /* InitializeConditions for Stateflow: '<S441>/Chart' */
  BaseEngineController_A02_bak2_DWork.s461_is_active_c29_BaseEngineController_A02_bak2
    = 0U;
  BaseEngineController_A02_bak2_DWork.s461_is_c29_BaseEngineController_A02_bak2 =
    0U;
  BaseEngineController_A02_bak2_B.s461_Out = 0.0;

  /* S-Function Block: <S473>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_bak2_DWork.s473_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S474>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_bak2_DWork.s474_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S475>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_bak2_DWork.s475_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S476>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_bak2_DWork.s476_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S477>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_bak2_DWork.s477_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S492>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_bak2_DWork.s492_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S497>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_bak2_DWork.s497_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S502>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_bak2_DWork.s502_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S522>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_bak2_DWork.s522_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S527>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_bak2_DWork.s527_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S585>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_bak2_DWork.s585_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S611>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_bak2_DWork.s611_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S756>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_bak2_DWork.s756_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S425>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_bak2_DWork.s425_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S421>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_bak2_DWork.s421_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S569>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_bak2_DWork.s569_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S595>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_bak2_DWork.s595_motohawk_delta_time_DWORK1 = now -
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
    BaseEngineController_A02_bak2_DWork.s603_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S379>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_bak2_DWork.s379_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }
}

/* Enable for function-call system: '<Root>/Foreground' */
void BaseEngineController_A02_bak2_Foreground_Enable(void)
{
  /* Level2 S-Function Block: '<S437>/motohawk_trigger' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_5XRTI_PERIODIC_8535p0002 */
  BaseEngineController_A02_bak2_DWork.s437_motohawk_trigger_DWORK1 = 1;

  /* Level2 S-Function Block: '<S399>/motohawk_trigger' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_TDC_EVENT_7146p0001 */
  BaseEngineController_A02_bak2_DWork.s399_motohawk_trigger_DWORK1 = 1;

  /* Level2 S-Function Block: '<S544>/motohawk_trigger5' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_MID_TDC_EVENT_8346p0002 */
  BaseEngineController_A02_bak2_DWork.s544_motohawk_trigger5_DWORK1 = 1;

  /* Level2 S-Function Block: '<S6>/motohawk_trigger1' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_5XRTI_PERIODIC_1237p0004 */
  BaseEngineController_A02_bak2_DWork.s6_motohawk_trigger1_DWORK1 = 1;

  /* Level2 S-Function Block: '<S6>/motohawk_trigger' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_5XRTI_PERIODIC_1236p0004 */
  BaseEngineController_A02_bak2_DWork.s6_motohawk_trigger_DWORK1 = 1;

  /* Level2 S-Function Block: '<S5>/motohawk_trigger' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_5XRTI_PERIODIC_9590p0004 */

  /* Enable for function-call system: '<S5>/Coil Control' */

  /* Enable for Atomic SubSystem: '<S716>/EST Enable TDC Counter' */

  /* Level2 S-Function Block: '<S721>/motohawk_trigger1' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_TDC_EVENT_9072p0002 */
  BaseEngineController_A02_bak2_DWork.s721_motohawk_trigger1_DWORK1 = 1;

  /* End of Enable for SubSystem: '<S716>/EST Enable TDC Counter' */
  BaseEngineController_A02_bak2_DWork.s5_motohawk_trigger_DWORK1 = 1;
}

/* Disable for function-call system: '<Root>/Foreground' */
void BaseEngineController_A02_bak2_Foreground_Disable(void)
{
  int32_T i;

  /* Level2 S-Function Block: '<S437>/motohawk_trigger' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_5XRTI_PERIODIC_8535p0002 */
  BaseEngineController_A02_bak2_DWork.s437_motohawk_trigger_DWORK1 = 0;

  /* Level2 S-Function Block: '<S399>/motohawk_trigger' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_TDC_EVENT_7146p0001 */
  BaseEngineController_A02_bak2_DWork.s399_motohawk_trigger_DWORK1 = 0;

  /* Disable for Enabled SubSystem: '<S7>/Stall' */
  BaseEngineController_A02_bak2_DWork.s7_Stall_MODE = FALSE;

  /* End of Disable for SubSystem: '<S7>/Stall' */

  /* Disable for Enabled SubSystem: '<S7>/Crank' */
  BaseEngineController_A02_bak2_DWork.s7_Crank_MODE = FALSE;

  /* End of Disable for SubSystem: '<S7>/Crank' */

  /* Disable for Enabled SubSystem: '<S347>/Capture Signal At Startup' */
  /* Disable for Enabled SubSystem: '<S353>/Collect Average' */
  BaseEngineController_A02_bak2_DWork.s353_CollectAverage_MODE = FALSE;

  /* End of Disable for SubSystem: '<S353>/Collect Average' */
  BaseEngineController_A02_bak2_DWork.s347_CaptureSignalAtStartup_MODE = FALSE;

  /* End of Disable for SubSystem: '<S347>/Capture Signal At Startup' */

  /* Level2 S-Function Block: '<S544>/motohawk_trigger5' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_MID_TDC_EVENT_8346p0002 */
  BaseEngineController_A02_bak2_DWork.s544_motohawk_trigger5_DWORK1 = 0;

  /* Disable for Enabled SubSystem: '<S350>/Capture ECT At Startup' */
  /* Disable for Enabled SubSystem: '<S395>/Collect Average' */
  BaseEngineController_A02_bak2_DWork.s395_CollectAverage_MODE = FALSE;

  /* End of Disable for SubSystem: '<S395>/Collect Average' */
  BaseEngineController_A02_bak2_DWork.s350_CaptureECTAtStartup_MODE = FALSE;

  /* End of Disable for SubSystem: '<S350>/Capture ECT At Startup' */

  /* Disable for Enabled SubSystem: '<S350>/Capture IAT At Startup' */
  /* Disable for Enabled SubSystem: '<S396>/Collect Average' */
  BaseEngineController_A02_bak2_DWork.s396_CollectAverage_MODE = FALSE;

  /* End of Disable for SubSystem: '<S396>/Collect Average' */
  BaseEngineController_A02_bak2_DWork.s350_CaptureIATAtStartup_MODE = FALSE;

  /* End of Disable for SubSystem: '<S350>/Capture IAT At Startup' */

  /* Disable for Enabled SubSystem: '<S7>/Run' */

  /* Level2 S-Function Block: '<S112>/motohawk_trigger1' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_5XRTI_PERIODIC_4926p0004 */
  BaseEngineController_A02_bak2_DWork.s112_motohawk_trigger1_DWORK1 = 0;

  /* Disable for Atomic SubSystem: '<S112>/Fuel System Manager' */
  /* Disable for Atomic SubSystem: '<S127>/Injector Manager' */
  /* Disable for Enabled SubSystem: '<S194>/Delta TPS Transient Fueling' */
  /* Disable for Enabled SubSystem: '<S199>/ECT Transient Fueling' */
  /* Disable for Outport: '<S202>/Mult' */
  BaseEngineController_A02_bak2_B.s202_motohawk_interpolation_1d = 1.0;
  BaseEngineController_A02_bak2_DWork.s199_ECTTransientFueling_MODE = FALSE;

  /* End of Disable for SubSystem: '<S199>/ECT Transient Fueling' */

  /* Disable for Outport: '<S199>/DeltaTPSMult' */
  BaseEngineController_A02_bak2_B.s199_Product1 = 1.0;
  BaseEngineController_A02_bak2_DWork.s194_DeltaTPSTransientFueling_MODE = FALSE;

  /* End of Disable for SubSystem: '<S194>/Delta TPS Transient Fueling' */
  /* End of Disable for SubSystem: '<S127>/Injector Manager' */
  /* End of Disable for SubSystem: '<S112>/Fuel System Manager' */
  BaseEngineController_A02_bak2_DWork.s7_Run_MODE = FALSE;

  /* End of Disable for SubSystem: '<S7>/Run' */

  /* Level2 S-Function Block: '<S6>/motohawk_trigger1' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_5XRTI_PERIODIC_1237p0004 */
  BaseEngineController_A02_bak2_DWork.s6_motohawk_trigger1_DWORK1 = 0;

  /* Level2 S-Function Block: '<S6>/motohawk_trigger' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_5XRTI_PERIODIC_1236p0004 */
  BaseEngineController_A02_bak2_DWork.s6_motohawk_trigger_DWORK1 = 0;

  /* Disable for Enabled SubSystem: '<S14>/PassThrough1' */
  BaseEngineController_A02_bak2_DWork.s14_PassThrough1_MODE = FALSE;

  /* Disable for Enabled SubSystem: '<S14>/PassThrough3' */
  for (i = 0; i < 32; i++) {
    /* Disable for Outport: '<S86>/Out1' */
    BaseEngineController_A02_bak2_B.s14_Merge1[i] = 0;

    /* Disable for Outport: '<S88>/Out1' */
    BaseEngineController_A02_bak2_B.s14_Merge1[i] = 0;
  }

  /* End of Disable for SubSystem: '<S14>/PassThrough1' */
  BaseEngineController_A02_bak2_DWork.s14_PassThrough3_MODE = FALSE;

  /* End of Disable for SubSystem: '<S14>/PassThrough3' */

  /* Disable for Enabled SubSystem: '<S14>/SequenceCutMachine' */

  /* Level2 S-Function Block: '<S91>/motohawk_trigger' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_TDC1_EVENT_984p0004 */
  BaseEngineController_A02_bak2_DWork.s91_motohawk_trigger_DWORK1 = 0;
  BaseEngineController_A02_bak2_DWork.s14_SequenceCutMachine_MODE = FALSE;

  /* End of Disable for SubSystem: '<S14>/SequenceCutMachine' */

  /* Disable for Enabled SubSystem: '<S14>/PassThrough4' */
  /* Disable for Outport: '<S89>/Out1' */
  for (i = 0; i < 8; i++) {
    BaseEngineController_A02_bak2_B.s89_DataTypeConversion[i] = FALSE;
  }

  /* End of Outport: '<S89>/Out1' */
  BaseEngineController_A02_bak2_DWork.s14_PassThrough4_MODE = FALSE;

  /* End of Disable for SubSystem: '<S14>/PassThrough4' */

  /* Level2 S-Function Block: '<S5>/motohawk_trigger' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_5XRTI_PERIODIC_9590p0004 */

  /* Disable for function-call system: '<S5>/Coil Control' */

  /* Disable for Atomic SubSystem: '<S716>/EST Enable TDC Counter' */

  /* Level2 S-Function Block: '<S721>/motohawk_trigger1' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_TDC_EVENT_9072p0002 */
  BaseEngineController_A02_bak2_DWork.s721_motohawk_trigger1_DWORK1 = 0;

  /* End of Disable for SubSystem: '<S716>/EST Enable TDC Counter' */
  BaseEngineController_A02_bak2_DWork.s5_motohawk_trigger_DWORK1 = 0;

  /* Disable for Enabled SubSystem: '<S6>/Electronic Throttle Controller' */
  /* Disable for Enabled SubSystem: '<S22>/PassThrough' */
  /* Disable for Outport: '<S43>/Out1' */
  BaseEngineController_A02_bak2_B.s43_In1 = 10.0;
  BaseEngineController_A02_bak2_DWork.s22_PassThrough_MODE = FALSE;

  /* End of Disable for SubSystem: '<S22>/PassThrough' */
  BaseEngineController_A02_bak2_DWork.s6_ElectronicThrottleController_MODE =
    FALSE;

  /* End of Disable for SubSystem: '<S6>/Electronic Throttle Controller' */

  /* Disable for Enabled SubSystem: '<S14>/PassThrough5' */
  /* Disable for Outport: '<S90>/Out1' */
  for (i = 0; i < 8; i++) {
    BaseEngineController_A02_bak2_B.s90_DataTypeConversion1[i] = FALSE;
  }

  /* End of Outport: '<S90>/Out1' */
  BaseEngineController_A02_bak2_DWork.s14_PassThrough5_MODE = FALSE;

  /* End of Disable for SubSystem: '<S14>/PassThrough5' */
}

/* Start for function-call system: '<Root>/Foreground' */
void BaseEngineController_A02_bak2_Foreground_Start(void)
{
  /* Start for S-Function (motohawk_sfun_trigger): '<S437>/motohawk_trigger' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_5XRTI_PERIODIC_8535p0002 */
  BaseEngineController_A02_bak2_DWork.s437_motohawk_trigger_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S399>/motohawk_trigger' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_TDC_EVENT_7146p0001 */
  BaseEngineController_A02_bak2_DWork.s399_motohawk_trigger_DWORK1 = 0;

  /* Start for Enabled SubSystem: '<S7>/Stall' */

  /* InitializeConditions for UnitDelay: '<S299>/Unit Delay' */
  BaseEngineController_A02_bak2_DWork.s299_UnitDelay_DSTATE = FALSE;

  /* InitializeConditions for UnitDelay: '<S300>/Unit Delay' */
  BaseEngineController_A02_bak2_DWork.s300_UnitDelay_DSTATE = FALSE;

  /* InitializeConditions for UnitDelay: '<S301>/Unit Delay' */
  BaseEngineController_A02_bak2_DWork.s301_UnitDelay_DSTATE = FALSE;

  /* InitializeConditions for UnitDelay: '<S302>/Unit Delay' */
  BaseEngineController_A02_bak2_DWork.s302_UnitDelay_DSTATE = 0.0;

  /* End of Start for SubSystem: '<S7>/Stall' */

  /* Start for Atomic SubSystem: '<S350>/Base TPS Request' */

  /* Start for Enabled SubSystem: '<S394>/PassThrough1' */
  BaseEngineController_A02_bak2_PassThrough1_Start
    (&BaseEngineController_A02_bak2_B.s394_Merge);

  /* End of Start for SubSystem: '<S394>/PassThrough1' */

  /* Start for Enabled SubSystem: '<S394>/PassThrough2' */
  BaseEngineController_A02_bak2_PassThrough1_Start
    (&BaseEngineController_A02_bak2_B.s394_Merge);

  /* End of Start for SubSystem: '<S394>/PassThrough2' */

  /* End of Start for SubSystem: '<S350>/Base TPS Request' */

  /* Start for Enabled SubSystem: '<S347>/Capture Signal At Startup' */

  /* Start for Enabled SubSystem: '<S353>/Collect Average' */

  /* InitializeConditions for UnitDelay: '<S356>/Unit Delay1' */
  BaseEngineController_A02_bak2_DWork.s356_UnitDelay1_DSTATE = 0.0;

  /* End of Start for SubSystem: '<S353>/Collect Average' */
  /* InitializeConditions for UnitDelay: '<S353>/Unit Delay' */
  BaseEngineController_A02_bak2_DWork.s353_UnitDelay_DSTATE = 0;

  /* End of Start for SubSystem: '<S347>/Capture Signal At Startup' */

  /* Start for S-Function (motohawk_sfun_trigger): '<S544>/motohawk_trigger5' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_MID_TDC_EVENT_8346p0002 */
  BaseEngineController_A02_bak2_DWork.s544_motohawk_trigger5_DWORK1 = 0;

  /* Start for Enabled SubSystem: '<S367>/IncreasingFilter' */

  /* VirtualOutportStart for Outport: '<S371>/Out1' */
  BaseEngineController_A02_bak2_B.s367_Merge = 0.005;

  /* End of Start for SubSystem: '<S367>/IncreasingFilter' */

  /* Start for Enabled SubSystem: '<S367>/DecreasingFilter' */

  /* VirtualOutportStart for Outport: '<S369>/Out1' */
  BaseEngineController_A02_bak2_B.s367_Merge = 0.005;

  /* End of Start for SubSystem: '<S367>/DecreasingFilter' */

  /* Start for Enabled SubSystem: '<S368>/IncreasingFilter' */

  /* VirtualOutportStart for Outport: '<S374>/Out1' */
  BaseEngineController_A02_bak2_B.s368_Merge = 0.005;

  /* End of Start for SubSystem: '<S368>/IncreasingFilter' */

  /* Start for Enabled SubSystem: '<S368>/DecreasingFilter' */

  /* VirtualOutportStart for Outport: '<S372>/Out1' */
  BaseEngineController_A02_bak2_B.s368_Merge = 0.005;

  /* End of Start for SubSystem: '<S368>/DecreasingFilter' */

  /* Start for Enabled SubSystem: '<S366>/Integrate Offset To ECT' */

  /* S-Function Block: <S385>/motohawk_delta_time1 */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_bak2_DWork.s385_motohawk_delta_time1_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* End of Start for SubSystem: '<S366>/Integrate Offset To ECT' */

  /* Start for Enabled SubSystem: '<S350>/Capture ECT At Startup' */

  /* Start for Enabled SubSystem: '<S395>/Collect Average' */

  /* InitializeConditions for UnitDelay: '<S412>/Unit Delay1' */
  BaseEngineController_A02_bak2_DWork.s412_UnitDelay1_DSTATE = 0.0;

  /* End of Start for SubSystem: '<S395>/Collect Average' */
  /* InitializeConditions for UnitDelay: '<S395>/Unit Delay' */
  BaseEngineController_A02_bak2_DWork.s395_UnitDelay_DSTATE = 0;

  /* End of Start for SubSystem: '<S350>/Capture ECT At Startup' */

  /* Start for Enabled SubSystem: '<S350>/Capture IAT At Startup' */

  /* Start for Enabled SubSystem: '<S396>/Collect Average' */

  /* InitializeConditions for UnitDelay: '<S413>/Unit Delay1' */
  BaseEngineController_A02_bak2_DWork.s413_UnitDelay1_DSTATE = 0.0;

  /* End of Start for SubSystem: '<S396>/Collect Average' */
  /* InitializeConditions for UnitDelay: '<S396>/Unit Delay' */
  BaseEngineController_A02_bak2_DWork.s396_UnitDelay_DSTATE = 0;

  /* End of Start for SubSystem: '<S350>/Capture IAT At Startup' */

  /* Start for Enabled SubSystem: '<S7>/Run' */

  /* Start for S-Function (motohawk_sfun_trigger): '<S112>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_5XRTI_PERIODIC_4926p0004 */
  BaseEngineController_A02_bak2_DWork.s112_motohawk_trigger1_DWORK1 = 0;

  /* Start for Atomic SubSystem: '<S112>/O2 Control' */

  /* Start for Atomic SubSystem: '<S131>/O2 PID Controller' */

  /* Start for InitialCondition: '<S271>/Multiply by 1.0 if not yet enabled' */
  BaseEngineController_A02_bak2_DWork.s271_Multiplyby10ifnotyetenabled_FirstOutputTime
    = TRUE;

  /* End of Start for SubSystem: '<S131>/O2 PID Controller' */

  /* End of Start for SubSystem: '<S112>/O2 Control' */

  /* Start for Atomic SubSystem: '<S112>/Fuel System Manager' */

  /* Start for Atomic SubSystem: '<S127>/Injector Manager' */

  /* Start for Enabled SubSystem: '<S194>/Delta TPS Transient Fueling' */

  /* Start for Enabled SubSystem: '<S199>/ECT Transient Fueling' */

  /* VirtualOutportStart for Outport: '<S202>/Mult' */
  BaseEngineController_A02_bak2_B.s202_motohawk_interpolation_1d = 1.0;

  /* End of Start for SubSystem: '<S199>/ECT Transient Fueling' */

  /* S-Function Block: <S203>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_bak2_DWork.s203_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for UnitDelay: '<S204>/Unit Delay' */
  BaseEngineController_A02_bak2_DWork.s204_UnitDelay_DSTATE = 0.0;

  /* VirtualOutportStart for Outport: '<S199>/DeltaTPSMult' */
  BaseEngineController_A02_bak2_B.s199_Product1 = 1.0;

  /* End of Start for SubSystem: '<S194>/Delta TPS Transient Fueling' */

  /* End of Start for SubSystem: '<S127>/Injector Manager' */

  /* End of Start for SubSystem: '<S112>/Fuel System Manager' */

  /* InitializeConditions for UnitDelay: '<S142>/Unit Delay' */
  BaseEngineController_A02_bak2_DWork.s142_UnitDelay_DSTATE = FALSE;

  /* InitializeConditions for UnitDelay: '<S141>/Unit Delay' */
  BaseEngineController_A02_bak2_DWork.s141_UnitDelay_DSTATE = FALSE;

  /* InitializeConditions for UnitDelay: '<S140>/Unit Delay' */
  BaseEngineController_A02_bak2_DWork.s140_UnitDelay_DSTATE = FALSE;

  /* InitializeConditions for UnitDelay: '<S138>/Unit Delay' */
  BaseEngineController_A02_bak2_DWork.s138_UnitDelay_DSTATE = FALSE;

  /* InitializeConditions for UnitDelay: '<S139>/Unit Delay' */
  BaseEngineController_A02_bak2_DWork.s139_UnitDelay_DSTATE = FALSE;

  /* InitializeConditions for S-Function (motohawk_sfun_trigger): '<S112>/motohawk_trigger1' */
  if (rtmIsFirstInitCond(BaseEngineController_A02_bak2_M)) {
    /* Initial conditions for function-call system: '<S112>/MinGovernor' */

    /* InitializeConditions for Stateflow: '<S235>/IdleStateMachine' */
    BaseEngineController_A02_bak2_IdleStateMachine_Init();

    /* S-Function Block: <S234>/motohawk_delta_time */
    {
      uint32_T now = 0;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
        u32Time_us);
      Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
      BaseEngineController_A02_bak2_DWork.s234_motohawk_delta_time_DWORK1 = now
        - Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
    }

    /* S-Function Block: <S238>/motohawk_delta_time */
    {
      uint32_T now = 0;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
        u32Time_us);
      Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
      BaseEngineController_A02_bak2_DWork.s238_motohawk_delta_time_DWORK1 = now
        - Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
    }

    /* InitializeConditions for Atomic SubSystem: '<S130>/AiflowOffset' */

    /* S-Function Block: <S241>/motohawk_delta_time */
    {
      uint32_T now = 0;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
        u32Time_us);
      Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
      BaseEngineController_A02_bak2_DWork.s241_motohawk_delta_time_DWORK1 = now
        - Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
    }

    /* End of InitializeConditions for SubSystem: '<S130>/AiflowOffset' */

    /* S-Function Block: <S266>/motohawk_delta_time */
    {
      uint32_T now = 0;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
        u32Time_us);
      Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
      BaseEngineController_A02_bak2_DWork.s266_motohawk_delta_time_DWORK1 = now
        - Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
    }
  }

  if (rtmIsFirstInitCond(BaseEngineController_A02_bak2_M)) {
    /* Initial conditions for function-call system: '<S112>/MaxGovernor' */

    /* S-Function Block: <S216>/motohawk_delta_time */
    {
      uint32_T now = 0;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
        u32Time_us);
      Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
      BaseEngineController_A02_bak2_DWork.s216_motohawk_delta_time_DWORK1 = now
        - Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
    }

    /* S-Function Block: <S228>/motohawk_delta_time */
    {
      uint32_T now = 0;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
        u32Time_us);
      Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
      BaseEngineController_A02_bak2_DWork.s228_motohawk_delta_time_DWORK1 = now
        - Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
    }
  }

  if (rtmIsFirstInitCond(BaseEngineController_A02_bak2_M)) {
    /* Initial conditions for function-call system: '<S112>/Spark Manager' */

    /* InitializeConditions for UnitDelay: '<S291>/Initial Condition is True' */
    BaseEngineController_A02_bak2_DWork.s291_InitialConditionisTrue_DSTATE =
      TRUE;
  }

  /* InitializeConditions for Stateflow: '<S177>/Multiplexed On Stateflow' */
  BaseEngineController_A02_bak2_DWork.s179_is_active_c1_BaseEngineController_A02_bak2
    = 0U;
  BaseEngineController_A02_bak2_DWork.s179_is_c1_BaseEngineController_A02_bak2 =
    0U;
  BaseEngineController_A02_bak2_B.s179_Out = 0.0;

  /* InitializeConditions for Stateflow: '<S176>/Individual On Stateflow' */
  BaseEngineController_A02_bak2_DWork.s178_is_active_c3_BaseEngineController_A02_bak2
    = 0U;
  BaseEngineController_A02_bak2_DWork.s178_is_c3_BaseEngineController_A02_bak2 =
    0U;
  BaseEngineController_A02_bak2_B.s178_Out = 0.0;

  /* InitializeConditions for UnitDelay: '<S183>/Unit Delay' */
  BaseEngineController_A02_bak2_DWork.s183_UnitDelay_DSTATE = 0.0;

  /* InitializeConditions for UnitDelay: '<S184>/Unit Delay' */
  BaseEngineController_A02_bak2_DWork.s184_UnitDelay_DSTATE = 0.0;

  /* InitializeConditions for UnitDelay: '<S124>/Unit Delay' */
  BaseEngineController_A02_bak2_DWork.s124_UnitDelay_DSTATE = 0.0;

  /* InitializeConditions for UnitDelay: '<S162>/Unit Delay' */
  BaseEngineController_A02_bak2_DWork.s162_UnitDelay_DSTATE = 0.0;

  /* S-Function Block: <S152>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_bak2_DWork.s152_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for UnitDelay: '<S152>/Unit Delay' */
  BaseEngineController_A02_bak2_DWork.s152_UnitDelay_DSTATE = 0.0;

  /* InitializeConditions for UnitDelay: '<S161>/Unit Delay' */
  BaseEngineController_A02_bak2_DWork.s161_UnitDelay_DSTATE = 0.0;

  /* S-Function Block: <S162>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_bak2_DWork.s162_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for UnitDelay: '<S170>/Unit Delay' */
  BaseEngineController_A02_bak2_DWork.s170_UnitDelay_DSTATE = FALSE;

  /* InitializeConditions for UnitDelay: '<S172>/Unit Delay' */
  BaseEngineController_A02_bak2_DWork.s172_UnitDelay_DSTATE = FALSE;

  /* InitializeConditions for UnitDelay: '<S171>/Unit Delay' */
  BaseEngineController_A02_bak2_DWork.s171_UnitDelay_DSTATE = FALSE;

  /* S-Function Block: <S184>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_bak2_DWork.s184_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for UnitDelay: '<S190>/Unit Delay' */
  BaseEngineController_A02_bak2_DWork.s190_UnitDelay_DSTATE = FALSE;

  /* InitializeConditions for UnitDelay: '<S191>/Unit Delay' */
  BaseEngineController_A02_bak2_DWork.s191_UnitDelay_DSTATE = FALSE;

  /* InitializeConditions for UnitDelay: '<S192>/Unit Delay' */
  BaseEngineController_A02_bak2_DWork.s192_UnitDelay_DSTATE = FALSE;

  /* InitializeConditions for Atomic SubSystem: '<S112>/O2 Control' */

  /* InitializeConditions for Atomic SubSystem: '<S131>/O2 PID Controller' */
  /* InitializeConditions for UnitDelay: '<S283>/Unit Delay' */
  BaseEngineController_A02_bak2_DWork.s283_UnitDelay_DSTATE = FALSE;

  /* InitializeConditions for UnitDelay: '<S280>/Unit Delay' */
  BaseEngineController_A02_bak2_DWork.s280_UnitDelay_DSTATE = 0.0;

  /* InitializeConditions for UnitDelay: '<S279>/Unit Delay' */
  BaseEngineController_A02_bak2_DWork.s279_UnitDelay_DSTATE = 0.0;

  /* S-Function Block: <S280>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_bak2_DWork.s280_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for UnitDelay: '<S276>/Unit Delay1' */
  BaseEngineController_A02_bak2_DWork.s276_UnitDelay1_DSTATE = 0.0;

  /* S-Function Block: <S284>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_bak2_DWork.s284_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for UnitDelay: '<S276>/Unit Delay' */
  BaseEngineController_A02_bak2_DWork.s276_UnitDelay_DSTATE = 0.0;

  /* S-Function Block: <S286>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_bak2_DWork.s286_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for UnitDelay: '<S276>/Unit Delay2' */
  BaseEngineController_A02_bak2_DWork.s276_UnitDelay2_DSTATE = 0.0;

  /* S-Function Block: <S285>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_bak2_DWork.s285_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* End of InitializeConditions for SubSystem: '<S131>/O2 PID Controller' */

  /* End of InitializeConditions for SubSystem: '<S112>/O2 Control' */

  /* End of Start for SubSystem: '<S7>/Run' */

  /* Start for S-Function (motohawk_sfun_trigger): '<S6>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_5XRTI_PERIODIC_1237p0004 */
  BaseEngineController_A02_bak2_DWork.s6_motohawk_trigger1_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S6>/motohawk_trigger' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_5XRTI_PERIODIC_1236p0004 */
  BaseEngineController_A02_bak2_DWork.s6_motohawk_trigger_DWORK1 = 0;

  /* Start for Enabled SubSystem: '<S14>/SequenceCutMachine' */

  /* Start for function-call system: '<S91>/SequencyCutMachine' */

  /* VirtualOutportStart for Outport: '<S101>/CycleCounter' */
  BaseEngineController_A02_bak2_B.s101_Switch = 1U;

  /* VirtualOutportStart for Outport: '<S101>/CycleNumber' */
  BaseEngineController_A02_bak2_B.s101_Switch1 = 1.0;

  /* Clear enable/disable state for embedded trigger Trigger_FGND_TDC1_EVENT_984p0004 */
  BaseEngineController_A02_bak2_DWork.s91_motohawk_trigger_DWORK1 = 0;

  /* InitializeConditions for UnitDelay: '<S91>/Unit Delay2' */
  BaseEngineController_A02_bak2_DWork.s91_UnitDelay2_DSTATE = 1.0;

  /* InitializeConditions for UnitDelay: '<S91>/Unit Delay1' */
  BaseEngineController_A02_bak2_DWork.s91_UnitDelay1_DSTATE = 1U;

  /* End of Start for SubSystem: '<S14>/SequenceCutMachine' */

  /* Start for function-call system: '<S5>/Coil Control' */

  /* Start for Atomic SubSystem: '<S716>/EST Enable TDC Counter' */

  /* Start for S-Function (motohawk_sfun_trigger): '<S721>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_TDC_EVENT_9072p0002 */
  BaseEngineController_A02_bak2_DWork.s721_motohawk_trigger1_DWORK1 = 0;

  /* End of Start for SubSystem: '<S716>/EST Enable TDC Counter' */

  /* S-Function Block: <S705>/Spark Sequence */
  {
    NativeError_S createErrorResult;
    int32_T i;
    extern void SparkSeqDiagCallback_24(S_SeqOutDiagReportPtr report,
      NativePtrSizedInt_U userData);
    if ((EST_SequenceType_DataStore()) == 0) {
      S_ESTSeqCreateAttributes CreateObj;
      CreateObj.uValidAttributesMask = USE_SEQ_GRANULARITY;
      CreateObj.u1NumPulsesToCreate = 1;
      CreateObj.eGranularity = FINE_GRANULARITY;
      CreateObj.uValidAttributesMask |= USE_SEQ_DIAG_REPORT_COND;
      CreateObj.ReportsObj.pfDiagCback = SparkSeqDiagCallback_24;
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
      CreateObj.ReportsObj.pfDiagCback = SparkSeqDiagCallback_24;
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
      CreateObj.ReportsObj.pfDiagCback = SparkSeqDiagCallback_24;

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
            (ESTPinMapArr_PulseNum_24_DataStore())[cyl] = 0;
            (ESTPinMapArr_PulseNum_24_DataStore())[opp_cyl] = 1;/* p1 aligns with opp_cyl */
          } else {
            p0 = (EncoderTDCAngles_DataStore())[opp_cyl];
            p1 = (EncoderTDCAngles_DataStore())[cyl];
            (ESTPinMapArr_PulseNum_24_DataStore())[cyl] = 1;
            (ESTPinMapArr_PulseNum_24_DataStore())[opp_cyl] = 0;/* p0 aligns with opp_cyl */
          }

          (ESTPinMapArr_Resource_24_DataStore())[cyl] = (E_ModuleResource)
            ((EST_InitialPin_DataStore()) + pin);
          (ESTPinMapArr_Resource_24_DataStore())[opp_cyl] = (E_ModuleResource)
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
      CreateObj.ReportsObj.pfDiagCback = SparkSeqDiagCallback_24;
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

  /* Clear enable/disable state for embedded trigger Trigger_FGND_5XRTI_PERIODIC_9590p0004 */
  BaseEngineController_A02_bak2_DWork.s5_motohawk_trigger_DWORK1 = 0;

  /* Start for Enabled SubSystem: '<S6>/Electronic Throttle Controller' */

  /* Start for Enabled SubSystem: '<S22>/PassThrough' */
  /* VirtualOutportStart for Outport: '<S43>/Out1' */
  BaseEngineController_A02_bak2_B.s43_In1 = 10.0;

  /* End of Start for SubSystem: '<S22>/PassThrough' */

  /* S-Function Block: <S54>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_bak2_DWork.s54_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for Stateflow: '<S12>/ETC Test  Manager' */
  BaseEngineController_A02_bak2_DWork.s18_TimerOld = 0.0;

  /* Entry: Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/ETC Test  Manager */
  /* Transition: '<S18>:7' */
  BaseEngineController_A02_bak2_DWork.s18_is_c9_BaseEngineController_A02_bak2 =
    BaseEngineController_A02_bak2_IN_PassThrough;

  /* Entry 'PassThrough': '<S18>:1' */
  BaseEngineController_A02_bak2_B.s18_DC_Override = 0;
  BaseEngineController_A02_bak2_B.s18_TestComplete = FALSE;
  BaseEngineController_A02_bak2_B.s18_SetpointMode = 0;
  BaseEngineController_A02_bak2_B.s18_TestTime = 0.0;

  /* S-Function Block: <S46>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_bak2_DWork.s46_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S34>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_bak2_DWork.s34_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S39>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_bak2_DWork.s39_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* End of Start for SubSystem: '<S6>/Electronic Throttle Controller' */

  /* S-Function Block: <S710>/Injector Sequence */
  {
    S_SeqOutAttributes DynamicObj;
    NativeError_S createErrorResult = ERROR_BEHAVIOUR_METHOD_UNSUPPORTED;
    NativeError_S dynamicErrorResult = ERROR_BEHAVIOUR_METHOD_UNSUPPORTED;
    NativeError_S dynamicErrorResult2 = ERROR_BEHAVIOUR_METHOD_UNSUPPORTED;
    int32_T i;
    extern void InjectorSeqDiagCallback_43(S_SeqOutDiagReportPtr report,
      NativePtrSizedInt_U userData);
    extern S_SeqOutInjDiagReport InjectorSeqDiagInfo_43[8];
    extern int32_T InjectorSeqDiagLastPin_43;
    DynamicObj.uMinPulseDurationInMicroSecs = 1500;
    for (i=0; i < (EncoderNumCylinders_DataStore()); i++) {
      InjectorSeqDiagInfo_43[i].u4TXTimeInMicroSecs = 0xFFFFFFFF;
      InjectorSeqDiagInfo_43[i].u1TXCnt = 1;
    }

    InjectorSeqDiagLastPin_43 = -1;
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
        CreateObj.ReportsObj.pfDiagCback = InjectorSeqDiagCallback_43;
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
        extern void TransientInjectorSeqReportCallback_43
          (S_SeqOutInjEndEventReportPtr report, NativePtrSizedInt_U userData);
        extern TransientInjectorSeqInfo_T TransientInjectorSeqInfo_43[8];
        S_TranInjSeqCreateAttributes CreateObj;
        CreateObj.uValidAttributesMask = USE_SEQ_GRANULARITY |
          USE_SEQ_ENDEVENT_REPORT_COND | USE_SEQ_DIAG_REPORT_COND;
        CreateObj.ReportsObj.pfReportCback =
          TransientInjectorSeqReportCallback_43;
        CreateObj.ReportsObj.pfDiagCback = InjectorSeqDiagCallback_43;
        DynamicObj.u1AffectedPulse = 0;
        DynamicObj.eReportCond = RES_ENABLED;
        DynamicObj.uValidAttributesMask |= USE_SEQ_ENDEVENT_REPORT_COND;
        for (i=0; i < (EncoderNumCylinders_DataStore()); i++) {
          if ((INJ_InitialPin_DataStore()) + i <= 23) {
            TransientInjectorSeqInfo_43[i].primaryComplete = 0;
            TransientInjectorSeqInfo_43[i].primaryDuration = 0;
            TransientInjectorSeqInfo_43[i].pinResource =
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
      CreateObj.ReportsObj.pfDiagCback = InjectorSeqDiagCallback_43;
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
      CreateObj.ReportsObj.pfDiagCback = InjectorSeqDiagCallback_43;
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

    BaseEngineController_A02_bak2_DWork.s710_InjectorSequence_DWORK1[0] = 0;
    BaseEngineController_A02_bak2_DWork.s710_InjectorSequence_DWORK1[1] = 0;
    BaseEngineController_A02_bak2_DWork.s710_InjectorSequence_DWORK1[2] = 0;
    BaseEngineController_A02_bak2_DWork.s710_InjectorSequence_DWORK1[3] = 0;
    BaseEngineController_A02_bak2_DWork.s710_InjectorSequence_DWORK1[4] = 0;
    BaseEngineController_A02_bak2_DWork.s710_InjectorSequence_DWORK1[5] = 0;
    BaseEngineController_A02_bak2_DWork.s710_InjectorSequence_DWORK1[6] = 0;
    BaseEngineController_A02_bak2_DWork.s710_InjectorSequence_DWORK1[7] = 0;
    BaseEngineController_A02_bak2_DWork.s710_InjectorSequence_DWORK2 = 0;
  }

  /* Start for Enabled SubSystem: '<S432>/Triggered Subsystem' incorporates:
   *  Start for S-Function (fcncallgen): '<S433>/Function-Call Generator'
   *  Start for SubSystem: '<S3>/Diagnostics'
   */

  /* Start for Enabled SubSystem: '<S432>/Triggered Subsystem' incorporates:
   *  InitializeConditions for S-Function (fcncallgen): '<S433>/Function-Call Generator'
   *  InitializeConditions for SubSystem: '<S3>/Diagnostics'
   */

  /* S-Function Block: <S314>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_bak2_DWork.s314_motohawk_delta_time_DWORK1 = now -
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
    BaseEngineController_A02_bak2_DWork.s313_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S317>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_bak2_DWork.s317_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S316>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_bak2_DWork.s316_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S318>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_bak2_DWork.s318_motohawk_delta_time_DWORK1 = now -
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
    BaseEngineController_A02_bak2_DWork.s328_motohawk_delta_time_DWORK1 = now -
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
    BaseEngineController_A02_bak2_DWork.s329_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S330>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_bak2_DWork.s330_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S346>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_bak2_DWork.s346_motohawk_delta_time_DWORK1 = now -
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
    BaseEngineController_A02_bak2_DWork.s345_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S321>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_bak2_DWork.s321_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S325>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_A02_bak2_DWork.s325_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }
}

/* Output and update for function-call system: '<Root>/Foreground' */
void BaseEngineController_A02_bak2_Foreground(void)
{
  /* local block i/o variables */
  real_T rtb_UnitDelay1_d;
  real_T rtb_Merge_fk;
  real_T rtb_DataTypeConversion_j;
  real_T rtb_UnitDelay_oq;
  real_T rtb_Merge_o;
  real_T rtb_DataTypeConversion_iz;
  real_T rtb_UnitDelay_la;
  real_T rtb_Merge_b;
  real_T rtb_Switch2;
  real_T rtb_DataTypeConversion_cg;
  real_T rtb_UnitDelay_pn;
  real_T rtb_Merge_on;
  real_T rtb_DataTypeConversion_jo;
  real_T rtb_UnitDelay_bg;
  real_T rtb_Merge_fl;
  real_T rtb_motohawk_delta_time_bw;
  real_T rtb_Saturation_k;
  real_T rtb_UnitDelay1_g;
  real_T rtb_Merge_h;
  real_T rtb_DataTypeConversion_e;
  real_T rtb_UnitDelay_be;
  real_T rtb_Merge_l;
  real_T rtb_motohawk_delta_time_fh;
  real_T rtb_UnitDelay1_dx;
  real_T rtb_Merge_hk;
  real_T rtb_Saturation1;
  real_T rtb_UnitDelay1_j;
  real_T rtb_Merge_ou;
  real_T rtb_motohawk_interpolation_2d;
  real_T rtb_motohawk_interpolation_1d1_o;
  real_T rtb_motohawk_interpolation_1d2_o;
  real_T rtb_UnitDelay_fi;
  real_T rtb_Merge_k;
  real_T rtb_Saturation2;
  real_T rtb_Saturation_d;
  real_T rtb_Torque;
  real_T rtb_motohawk_delta_time1;
  real_T rtb_motohawk_delta_time_pg;
  real_T rtb_motohawk_delta_time_ep;
  real_T rtb_motohawk_delta_time_g;
  real_T rtb_motohawk_delta_time_n;
  real_T rtb_motohawk_delta_time_gs;
  real_T rtb_motohawk_delta_time_mc;
  real_T rtb_motohawk_delta_time_nz;
  real_T rtb_motohawk_delta_time_gg;
  real_T rtb_motohawk_delta_time_ml;
  real_T rtb_motohawk_delta_time_a;
  real_T rtb_motohawk_delta_time_o;
  real_T rtb_UnitDelay1_e;
  real_T rtb_Merge_ks;
  real_T rtb_motohawk_delta_time_ha;
  real_T rtb_motohawk_delta_time_l;
  real_T rtb_Saturation_n;
  real_T rtb_motohawk_interpolation_1d3_g;
  real_T rtb_motohawk_interpolation_1d4_o;
  real_T rtb_motohawk_interpolation_1d1_k;
  real_T rtb_motohawk_delta_time_g1;
  real_T rtb_UnitDelay1_dz;
  real_T rtb_Merge_bf;
  real_T rtb_UnitDelay1_m;
  real_T rtb_Merge_jw;
  real_T rtb_UnitDelay1_hr;
  real_T rtb_Merge_ne;
  real_T rtb_Product0;
  real_T rtb_motohawk_delta_time_k;
  real_T rtb_Saturation_j;
  real_T rtb_Saturation_b;
  real_T rtb_Saturation_m;
  real_T rtb_Saturation_oj;
  real_T rtb_Saturation_kt;
  real_T rtb_Saturation_g;
  real_T rtb_Saturation_a;
  real_T rtb_Saturation_e;
  real_T rtb_Saturation_el;
  real_T rtb_Saturation_jz;
  real_T rtb_Saturation_o2;
  real_T rtb_Saturation_i;
  real_T rtb_Saturation_i4;
  real_T rtb_motohawk_delta_time_j3;
  real_T rtb_Saturation_m3;
  real_T rtb_motohawk_interpolation_1d_d;
  real_T rtb_motohawk_delta_time_gi;
  real_T rtb_motohawk_delta_time_jp;
  real_T rtb_Saturation_n1;
  real_T rtb_Saturation_ii;
  real_T rtb_motohawk_delta_time_bi;
  real_T rtb_motohawk_delta_time_jn;
  real_T rtb_motohawk_delta_time_cy;
  real_T rtb_Saturation_ad;
  real_T rtb_Saturation_p;
  real_T rtb_Saturation_og;
  real_T rtb_motohawk_delta_time_by;
  real_T rtb_motohawk_delta_time_oy;
  real_T rtb_motohawk_delta_time_az;
  real_T rtb_Saturation_jzi;
  real_T rtb_Saturation_pu;
  real_T rtb_Saturation_mq;
  real_T rtb_motohawk_delta_time_o5;
  real_T rtb_motohawk_delta_time_es;
  real_T rtb_Saturation_la;
  real_T rtb_Saturation_f;
  real_T rtb_motohawk_delta_time_ag;
  real_T rtb_motohawk_interpolation_1d_e;
  real_T rtb_Saturation_kh;
  real_T rtb_motohawk_interpolation_1d2_m;
  real_T rtb_motohawk_delta_time_a5;
  real_T rtb_motohawk_delta_time1_k;
  real_T rtb_motohawk_delta_time_i;
  real_T rtb_motohawk_interpolation_1d_l;
  real_T rtb_motohawk_interpolation_1d1_f;
  real_T rtb_motohawk_interpolation_1d2_l;
  real_T rtb_motohawk_interpolation_1d3_k;
  real_T rtb_motohawk_interpolation_1d2_ps;
  real_T rtb_motohawk_interpolation_1d3_c;
  real_T rtb_Product4_k;
  real_T rtb_motohawk_delta_time_ff;
  real_T rtb_motohawk_delta_time_hp;
  real_T rtb_Sum2_a;
  real_T rtb_motohawk_interpolation_1d2_c;
  real_T rtb_motohawk_interpolation_1d3_d;
  real_T rtb_Product4_l;
  real_T rtb_motohawk_delta_time_in;
  real_T rtb_motohawk_interpolation_2d1_b;
  real_T rtb_motohawk_interpolation_2d_i;
  real_T rtb_motohawk_interpolation_1d1_m;
  real_T rtb_motohawk_delta_time_md;
  real_T rtb_MinMax1_g;
  real_T rtb_motohawk_interpolation_1d1_a;
  real_T rtb_motohawk_delta_time_ju;
  real_T rtb_MinMax1_bm;
  real_T rtb_motohawk_interpolation_1d_lj;
  real_T rtb_RichEquivRatioSwPtDelta;
  real_T rtb_LeanEquivRatioSwPtDelta;
  real_T rtb_motohawk_interpolation_1d_k;
  real_T rtb_motohawk_interpolation_1d1_en;
  real_T rtb_motohawk_delta_time_g2;
  real_T rtb_motohawk_delta_time_j0;
  real_T rtb_motohawk_delta_time_me;
  real_T rtb_motohawk_delta_time_g1y;
  real_T rtb_motohawk_delta_time_a5u;
  real_T rtb_Saturation_ct;
  real_T rtb_Saturation_fb;
  real_T rtb_Saturation_pj;
  real_T rtb_RichEquivRatioTargetDelta_om;
  real_T rtb_LeanEquivRatioTargetDelta;
  real_T rtb_motohawk_interpolation_1d1_ki;
  real_T rtb_motohawk_interpolation_2d2;
  real_T rtb_motohawk_interpolation_2d1_f;
  real_T rtb_motohawk_delta_time_jh;
  real_T rtb_Saturation_jb;
  real_T rtb_Divide_l;
  real_T rtb_EOI;
  real_T rtb_PrimaryPulseInjectionTiming;
  real_T rtb_motohawk_interpolation_2d2_m;
  real_T rtb_MinMax1_pb;
  real_T rtb_motohawk_delta_time_mx;
  real_T rtb_Saturation_cs;
  real_T rtb_motohawk_interpolation_1d1_ox;
  real_T rtb_motohawk_interpolation_1d_ej;
  real_T rtb_WarmUpMult;
  real_T rtb_motohawk_interpolation_1d_m;
  real_T rtb_ECTEnrichment;
  real_T rtb_IATEnrichment;
  real_T rtb_motohawk_interpolation_2d3;
  real_T rtb_WarmUptimeMult;
  real_T rtb_Product_jv;
  real_T rtb_motohawk_interpolation_2d_k;
  real_T rtb_motohawk_interpolation_1d_h;
  real_T rtb_motohawk_interpolation_1d1_im;
  real_T rtb_motohawk_interpolation_2d_o;
  real_T rtb_motohawk_interpolation_2d1_fs;
  real_T rtb_motohawk_interpolation_1d4_oj;
  real_T rtb_motohawk_interpolation_1d5;
  real_T rtb_motohawk_interpolation_1d1_if;
  real_T rtb_motohawk_interpolation_1d1_j;
  real_T rtb_motohawk_interpolation_1d_f;
  real_T rtb_motohawk_interpolation_2d_og;
  real_T rtb_motohawk_delta_time_k3;
  real_T rtb_motohawk_delta_time_byu;
  real_T rtb_motohawk_delta_time_l2;
  real_T rtb_motohawk_interpolation_1d_nh;
  real_T rtb_motohawk_delta_time_d;
  real_T rtb_motohawk_delta_time_ggn;
  real_T rtb_motohawk_delta_time_ly;
  real_T rtb_Add_e;
  real_T rtb_motohawk_interpolation_1d_n0;
  real_T rtb_motohawk_interpolation_1d_fz;
  real_T rtb_motohawk_delta_time_f4;
  real_T rtb_Saturation_gb;
  real_T rtb_Saturation_b4;
  real_T rtb_Sum_dv;
  real_T rtb_Switch_k;
  real_T rtb_motohawk_interpolation_1d2_g;
  real_T rtb_motohawk_replicate[8];
  real_T rtb_motohawk_interpolation_1d1_kr;
  real_T rtb_Product_kt;
  real_T rtb_Switch_dx;
  real_T rtb_UnitDelay_hp;
  real_T rtb_motohawk_replicate1;
  real_T rtb_DataTypeConversion_fc;
  real_T rtb_DataTypeConversion_k;
  real_T rtb_Product5_g;
  real_T rtb_Switch_ns;
  real_T rtb_DataTypeConversion_i3;
  real_T rtb_motohawk_interpolation_1d3_i;
  real_T rtb_Abs_c;
  uint32_T rtb_DataTypeConversion3_d;
  uint32_T rtb_DataTypeConversion2_i;
  uint32_T rtb_DataTypeConversion2_e;
  uint32_T rtb_DataTypeConversion2_l;
  uint32_T rtb_DataTypeConversion6;
  uint32_T rtb_InjectorSequence_o2[8];
  uint32_T rtb_Sum_fc;
  uint32_T rtb_UnitDelay_cgp;
  int16_T rtb_DataTypeConversion4_i;
  int16_T rtb_DataTypeConversion3_h;
  int16_T rtb_DataTypeConversion3_p;
  int16_T rtb_DataTypeConversion3_g;
  int16_T rtb_DataTypeConversion3_e;
  int16_T rtb_DataTypeConversion7;
  int16_T rtb_DataTypeConversion2_h;
  uint16_T rtb_RPMInst;
  uint16_T rtb_motohawk_ain5_j;
  uint16_T rtb_RPM;
  uint16_T rtb_motohawk_ain4;
  uint16_T rtb_motohawk_ain_read_i;
  uint16_T rtb_motohawk_ain1;
  uint16_T rtb_motohawk_ain3;
  uint16_T rtb_motohawk_ain6;
  uint16_T rtb_motohawk_ain_read_h;
  uint16_T rtb_motohawk_encoder_average_rpm;
  uint16_T rtb_motohawk_ain_read_c;
  uint16_T rtb_motohawk_ain_read_f;
  index_T rtb_motohawk_prelookup_c;
  index_T rtb_motohawk_prelookup_iy;
  index_T rtb_motohawk_prelookup_m;
  index_T rtb_motohawk_prelookup_g;
  index_T rtb_motohawk_prelookup2;
  index_T rtb_motohawk_prelookup_mo;
  index_T rtb_motohawk_prelookup2_o;
  index_T rtb_motohawk_prelookup1_b;
  index_T rtb_motohawk_prelookup2_j;
  index_T rtb_motohawk_prelookup_e;
  index_T rtb_motohawk_prelookup_l;
  index_T rtb_motohawk_prelookup_j;
  index_T rtb_motohawk_prelookup_b;
  index_T rtb_motohawk_prelookup_f;
  index_T rtb_motohawk_prelookup_h5;
  index_T rtb_TimeSinceRun09;
  index_T rtb_motohawk_prelookup_js;
  index_T rtb_motohawk_prelookup1_n;
  index_T rtb_motohawk_prelookup_jz;
  index_T rtb_motohawk_prelookup1_k;
  index_T rtb_motohawk_prelookup1_lv;
  index_T rtb_motohawk_prelookup_im;
  index_T rtb_ITermIdx;
  index_T rtb_motohawk_prelookup_p;
  index_T rtb_motohawk_prelookup1_h;
  index_T rtb_motohawk_prelookup1_o;
  index_T rtb_motohawk_prelookup_gy;
  index_T rtb_motohawk_prelookup2_l;
  index_T rtb_motohawk_prelookup3;
  index_T rtb_motohawk_prelookup2_g;
  index_T rtb_motohawk_prelookup_ch;
  index_T rtb_motohawk_prelookup_ez;
  uint8_T rtb_motohawk_data_read9;
  uint8_T rtb_Product_lc;
  boolean_T rtb_RelOp_jb;
  boolean_T rtb_RelOp_ig;
  boolean_T rtb_motohawk_fault_action1_k;
  boolean_T rtb_motohawk_fault_action2;
  boolean_T rtb_motohawk_fault_action3;
  boolean_T rtb_RelationalOperator5;
  boolean_T rtb_RelationalOperator_bd;
  boolean_T rtb_RelationalOperator3_ir;
  boolean_T rtb_RelationalOperator3_ox;
  boolean_T rtb_LogicalOperator2_bh;
  boolean_T rtb_LogicalOperator3_h;
  boolean_T rtb_RelationalOperator_gh;
  boolean_T rtb_LogicalOperator_lq;
  boolean_T rtb_LogicalOperator1_fk;
  boolean_T rtb_LogicalOperator2_ok;
  boolean_T rtb_LogicalOperator3_b;
  boolean_T rtb_LogicalOperator2_c;
  boolean_T rtb_LogicalOperator3_m;
  boolean_T rtb_LogicalOperator2_ol;
  boolean_T rtb_LogicalOperator3_l;
  boolean_T rtb_LogicalOperator2_pm;
  boolean_T rtb_LogicalOperator3_p;
  boolean_T rtb_LogicalOperator2_d;
  boolean_T rtb_LogicalOperator3_bx;
  boolean_T rtb_LogicalOperator2_n;
  boolean_T rtb_LogicalOperator3_c;
  boolean_T rtb_LogicalOperator2_k;
  boolean_T rtb_LogicalOperator3_d;
  boolean_T rtb_LogicalOperator2_e;
  boolean_T rtb_LogicalOperator3_nu;
  boolean_T rtb_LogicalOperator2_j;
  boolean_T rtb_LogicalOperator3_nu2;
  boolean_T rtb_LogicalOperator2_mx;
  boolean_T rtb_LogicalOperator3_j;
  boolean_T rtb_LogicalOperator2_ko;
  boolean_T rtb_LogicalOperator3_is;
  boolean_T rtb_LogicalOperator2_gy;
  boolean_T rtb_LogicalOperator3_kj;
  boolean_T rtb_LogicalOperator2_kw;
  boolean_T rtb_LogicalOperator3_nk;
  boolean_T rtb_LogicalOperator2_dn;
  boolean_T rtb_LogicalOperator3_f;
  boolean_T rtb_RelationalOperator1_db;
  boolean_T rtb_RelationalOperator2_ab;
  boolean_T rtb_RelationalOperator5_p;
  boolean_T rtb_LogicalOperator2_l;
  boolean_T rtb_RelationalOperator5_c;
  boolean_T rtb_RelationalOperator3_fj;
  boolean_T rtb_RelationalOperator4_p;
  boolean_T rtb_RelationalOperator5_n;
  boolean_T rtb_RelationalOperator5_e;
  boolean_T rtb_RelationalOperator6;
  boolean_T rtb_RelationalOperator9;
  boolean_T rtb_RelationalOperator5_l;
  boolean_T rtb_RelationalOperator2_on;
  boolean_T rtb_LogicalOperator2_de;
  boolean_T rtb_LogicalOperator4_lq;
  boolean_T rtb_RelationalOperator5_m;
  boolean_T rtb_RelationalOperator2_os;
  boolean_T rtb_Switch1_nt;
  boolean_T rtb_Switch1_gz;
  boolean_T rtb_Switch1_a;
  boolean_T rtb_LogicalOperator_boa;
  boolean_T rtb_DataTypeConversion_fo;
  boolean_T rtb_LT3;
  boolean_T rtb_LT2;
  boolean_T rtb_LT4;
  boolean_T rtb_RelationalOperator2_ed;
  boolean_T rtb_RelationalOperator1_j4;
  boolean_T rtb_RelOp_ey;
  boolean_T rtb_LogicalOperator_lz;
  boolean_T rtb_RelationalOperator1_h;
  boolean_T rtb_motohawk_data_read1_jj;
  boolean_T rtb_AND1[8];
  boolean_T rtb_motohawk_data_read1_ei;
  boolean_T rtb_motohawk_fault_action_l;
  boolean_T rtb_AboveRich;
  boolean_T rtb_CombinatorialLogic[2];
  boolean_T rtb_BelowLoTarget;
  boolean_T rtb_CombinatorialLogic_a[2];
  boolean_T rtb_LogicalOperator_ph;
  boolean_T rtb_LogicalOperator2_g4;
  boolean_T rtb_AboveHiTarget;
  boolean_T rtb_BelowLoTarget_b;
  boolean_T rtb_CombinatorialLogic_l[2];
  boolean_T rtb_Switch_ek;
  boolean_T rtb_RelOp_ie;
  boolean_T rtb_CombinatorialLogic_e[2];
  boolean_T rtb_LogicalOperator3_kf;
  boolean_T rtb_CombinatorialLogic_j[2];
  boolean_T rtb_BelowLoTarget_f;
  boolean_T rtb_BelowLoTarget_e;
  boolean_T rtb_AboveHiTarget_k;
  real_T minV;
  real_T minV_0;
  real_T minV_1;
  real_T minV_2;
  real_T minV_3;
  boolean_T rtb_RelationalOperator2_m;
  boolean_T rtb_RelOp_js;
  boolean_T rtb_RelOp_em;
  int32_T rtb_DataTypeConversion_hh;
  real_T rtb_Product1_f;
  real_T rtb_Product1_i;
  real_T rtb_UnitDelay_ln;
  real_T rtb_UnitDelay1_b;
  real_T rtb_Sum2_c;
  real_T rtb_Sum1_k;
  real_T rtb_Merge_j3;
  real_T rtb_Switch_e;
  real_T rtb_Switch_lf;
  real_T rtb_Switch_c;
  real_T rtb_Switch_n;
  real_T rtb_Switch_lt;
  real_T rtb_Switch_m;
  real_T rtb_Switch_d5;
  real_T rtb_Switch_du;
  int32_T rtb_DataTypeConversion_gp;
  int32_T rtb_DataTypeConversion_jw;
  real_T rtb_Merge_l3;
  real_T rtb_Merge_lu;
  real_T rtb_Merge_oi;
  real_T rtb_Merge_oo;
  real_T rtb_Merge_c;
  real_T rtb_Merge_hm;
  real_T rtb_Merge_i[8];
  real_T rtb_Product2_d[8];
  boolean_T rtb_LogicalOperator3_iu[8];
  boolean_T rtb_LogicalOperator1_o3[8];
  real_T rtb_Sum1_i;
  real_T rtb_Sum1_dj;
  real_T rtb_Sum1_n;
  real_T rtb_Sum1_p;
  real_T rtb_Sum1_fn;
  real_T rtb_Sum1_p1;
  real_T rtb_Sum1_pe;
  real_T rtb_Sum1_kl;
  real_T rtb_Sum1_cq;
  uint32_T rtb_Switch_mv;
  real_T rtb_Sum1_em;
  uint8_T rtb_Product2_ik;
  uint8_T rtb_Product1_ja;
  uint8_T rtb_Product_ega;
  real_T rtb_Sum1_j;
  real_T rtb_UnitDelay4_o;
  int8_T rtb_Add_b;
  int8_T rtb_Sum_gcg;
  real_T rtb_Merge_ek;
  real_T rtb_Merge_hd;
  real_T rtb_Switch_j;
  real_T rtb_Sum_pd;
  real_T rtb_Switch_fm;
  boolean_T rtb_LogicalOperator2_jv;
  boolean_T rtb_LogicalOperator4_a3;
  boolean_T rtb_Switch1_c3;
  boolean_T rtb_Switch1_m;
  boolean_T rtb_Switch1_c;
  boolean_T rtb_Switch1_mq;
  boolean_T rtb_Switch1_k;
  int32_T i;
  real_T rtb_DesiredLambda_idx;
  real_T rtb_DesiredLambda_idx_0;
  real_T rtb_DesiredLambda_idx_1;
  real_T rtb_DesiredLambda_idx_2;
  uint16_T rtb_DataTypeConversion_ho_0;
  real_T u;

  /* S-Function (motohawk_sfun_trigger): '<S437>/motohawk_trigger' */
  /* Enable for Trigger_FGND_5XRTI_PERIODIC_8535p0002 */
  if (BaseEngineController_A02_bak2_DWork.s437_motohawk_trigger_DWORK1 == 0) {
    BaseEngineController_A02_bak2_DWork.s437_motohawk_trigger_DWORK1 = 1;
  }

  /* S-Function Block: <S435>/motohawk_encoder_instant_rpm */
  {
    rtb_RPMInst = GetEncoderResourceInstantRPM();
  }

  /* DataTypeConversion: '<S435>/Data Type Conversion1' incorporates:
   *  S-Function (motohawk_sfun_encoder_instant_rpm): '<S435>/motohawk_encoder_instant_rpm'
   */
  BaseEngineController_A02_bak2_B.s435_RPMInst = (real_T)rtb_RPMInst;

  /* DataTypeConversion: '<S399>/Data Type Conversion' */
  if (BaseEngineController_A02_bak2_B.s435_RPMInst < 65536.0) {
    if (BaseEngineController_A02_bak2_B.s435_RPMInst >= 0.0) {
      rtb_DataTypeConversion_ho_0 = (uint16_T)
        BaseEngineController_A02_bak2_B.s435_RPMInst;
    } else {
      rtb_DataTypeConversion_ho_0 = 0U;
    }
  } else {
    rtb_DataTypeConversion_ho_0 = MAX_uint16_T;
  }

  /* End of DataTypeConversion: '<S399>/Data Type Conversion' */
  /* Sum: '<S399>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S399>/motohawk_calibration3'
   *  S-Function (motohawk_sfun_calibration): '<S399>/motohawk_calibration4'
   */
  i = ((uint16_T)(StallRPMMinThreshold_DataStore())) - ((uint16_T)
    (StallRPMThresholdHyst_DataStore()));
  if (i <= 0) {
    i = 0;
  }

  /* End of Sum: '<S399>/Sum' */

  /* RelationalOperator: '<S399>/Relational Operator1' incorporates:
   *  DataTypeConversion: '<S399>/Data Type Conversion'
   *  Sum: '<S399>/Sum'
   */
  BaseEngineController_A02_bak2_B.s399_Stall = ((rtb_DataTypeConversion_ho_0 < i));

  /* RelationalOperator: '<S399>/Relational Operator4' incorporates:
   *  DataTypeConversion: '<S399>/Data Type Conversion'
   *  S-Function (motohawk_sfun_calibration): '<S399>/motohawk_calibration4'
   */
  BaseEngineController_A02_bak2_B.s399_Crank = ((rtb_DataTypeConversion_ho_0 >
    ((uint16_T)(StallRPMMinThreshold_DataStore()))));

  /* RelationalOperator: '<S399>/Relational Operator2' incorporates:
   *  DataTypeConversion: '<S399>/Data Type Conversion'
   *  S-Function (motohawk_sfun_calibration): '<S399>/motohawk_calibration1'
   */
  rtb_RelationalOperator2_m = (rtb_DataTypeConversion_ho_0 > ((uint16_T)
    (CrankToRunRPMThresh_DataStore())));

  /* UnitDelay: '<S399>/Unit Delay' */
  BaseEngineController_A02_bak2_B.s399_UnitDelay =
    BaseEngineController_A02_bak2_DWork.s399_UnitDelay_DSTATE;

  /* S-Function (motohawk_sfun_trigger): '<S399>/motohawk_trigger' */
  /* Enable for Trigger_FGND_TDC_EVENT_7146p0001 */
  if (BaseEngineController_A02_bak2_DWork.s399_motohawk_trigger_DWORK1 == 0) {
    BaseEngineController_A02_bak2_DWork.s399_motohawk_trigger_DWORK1 = 1;
  }

  /* Logic: '<S399>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S399>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S399>/motohawk_calibration2'
   */
  BaseEngineController_A02_bak2_B.s399_Run = ((rtb_RelationalOperator2_m &&
    (BaseEngineController_A02_bak2_B.s419_Switch >= ((uint8_T)
    (RunLatchTDCs_DataStore())))));

  /* Stateflow: '<S399>/Engine State Machine' */

  /* Gateway: Foreground/Control/VirtualSensors/RawProcessed/EngineState/Engine State Machine */
  /* During: Foreground/Control/VirtualSensors/RawProcessed/EngineState/Engine State Machine */
  switch
    (BaseEngineController_A02_bak2_DWork.s418_is_c2_BaseEngineController_A02_bak2)
  {
   case BaseEngineController_A02_bak2_IN_Crank:
    /* During 'Crank': '<S418>:3' */
    if (BaseEngineController_A02_bak2_B.s399_Stall) {
      /* Transition: '<S418>:8' */
      BaseEngineController_A02_bak2_DWork.s418_is_c2_BaseEngineController_A02_bak2
        = BaseEngineController_A02_bak2_IN_Stall_o;

      /* Entry 'Stall': '<S418>:1' */
      BaseEngineController_A02_bak2_B.s418_State = 1U;
    } else {
      if (BaseEngineController_A02_bak2_B.s399_Run) {
        /* Transition: '<S418>:6' */
        BaseEngineController_A02_bak2_DWork.s418_is_c2_BaseEngineController_A02_bak2
          = BaseEngineController_A02_bak2_IN_Run;

        /* Entry 'Run': '<S418>:2' */
        BaseEngineController_A02_bak2_B.s418_State = 3U;
      }
    }
    break;

   case BaseEngineController_A02_bak2_IN_Run:
    /* During 'Run': '<S418>:2' */
    if (BaseEngineController_A02_bak2_B.s399_Stall) {
      /* Transition: '<S418>:7' */
      BaseEngineController_A02_bak2_DWork.s418_is_c2_BaseEngineController_A02_bak2
        = BaseEngineController_A02_bak2_IN_Stall_o;

      /* Entry 'Stall': '<S418>:1' */
      BaseEngineController_A02_bak2_B.s418_State = 1U;
    }
    break;

   case BaseEngineController_A02_bak2_IN_Stall_o:
    /* During 'Stall': '<S418>:1' */
    if (BaseEngineController_A02_bak2_B.s399_Crank) {
      /* Transition: '<S418>:5' */
      BaseEngineController_A02_bak2_DWork.s418_is_c2_BaseEngineController_A02_bak2
        = BaseEngineController_A02_bak2_IN_Crank;

      /* Entry 'Crank': '<S418>:3' */
      BaseEngineController_A02_bak2_B.s418_State = 2U;
    }
    break;

   default:
    /* Transition: '<S418>:4' */
    BaseEngineController_A02_bak2_DWork.s418_is_c2_BaseEngineController_A02_bak2
      = BaseEngineController_A02_bak2_IN_Stall_o;

    /* Entry 'Stall': '<S418>:1' */
    BaseEngineController_A02_bak2_B.s418_State = 1U;
    break;
  }

  /* End of Stateflow: '<S399>/Engine State Machine' */

  /* RelationalOperator: '<S115>/RelOp' incorporates:
   *  Constant: '<S115>/Constant'
   */
  rtb_RelOp_js = (BaseEngineController_A02_bak2_B.s418_State == 1);

  /* S-Function Block: <S434>/motohawk_ain5 Resource: ACSwPin */
  {
    extern NativeError_S ACSwPin_AnalogInput_Get(uint16_T *adc, uint16_T *status);
    ACSwPin_AnalogInput_Get(&rtb_motohawk_ain5_j, NULL);
  }

  /* DataTypeConversion: '<S439>/Data Type Conversion' incorporates:
   *  S-Function (motohawk_sfun_ain): '<S434>/motohawk_ain5'
   */
  BaseEngineController_A02_bak2_B.s439_DataTypeConversion = (real_T)
    rtb_motohawk_ain5_j;

  /* RelationalOperator: '<S439>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S439>/SwitchPoint'
   */
  rtb_RelationalOperator2_m =
    (BaseEngineController_A02_bak2_B.s439_DataTypeConversion >
     (ACSwSwitchPt_DataStore()));

  /* Logic: '<S439>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S439>/0 = No Inversion 1 = Inversion'
   */
  rtb_RelationalOperator2_m ^= (ACSwPolarity_DataStore());

  /* If: '<S450>/If' incorporates:
   *  Inport: '<S451>/In1'
   *  Inport: '<S452>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S450>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S450>/override_enable'
   */
  if ((ACSw_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S450>/NewValue' incorporates:
     *  ActionPort: '<S451>/Action Port'
     */
    BaseEngineController_A02_bak2_B.s450_Merge = (ACSw_new_DataStore());

    /* End of Outputs for SubSystem: '<S450>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S450>/OldValue' incorporates:
     *  ActionPort: '<S452>/Action Port'
     */
    BaseEngineController_A02_bak2_B.s450_Merge = rtb_RelationalOperator2_m;

    /* End of Outputs for SubSystem: '<S450>/OldValue' */
  }

  /* End of If: '<S450>/If' */

  /* S-Function Block: <S548>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_bak2_DWork.s548_motohawk_delta_time_DWORK1,
       NULL);
    rtb_DataTypeConversion_i3 = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S548>/Product' incorporates:
   *  MinMax: '<S548>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S548>/motohawk_calibration'
   */
  rtb_DataTypeConversion_i3 /= (rtb_DataTypeConversion_i3 >=
    (ACPresFilterConst_DataStore())) || rtIsNaN((ACPresFilterConst_DataStore()))
    ? rtb_DataTypeConversion_i3 : (ACPresFilterConst_DataStore());

  /* Logic: '<S539>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S539>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S539>/motohawk_fault_status4'
   */
  rtb_RelOp_em = (IsFaultActive(2) || IsFaultActive(3));

  /* Logic: '<S539>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S539>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S539>/motohawk_fault_status3'
   */
  rtb_RelationalOperator2_m = (IsFaultSuspected(2) || IsFaultSuspected(3));

  /* S-Function Block: <S436>/motohawk_ain4 Resource: ACPresPin */
  {
    extern NativeError_S ACPresPin_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    ACPresPin_AnalogInput_Get
      (&BaseEngineController_A02_bak2_B.s436_motohawk_ain4, NULL);
  }

  /* DataTypeConversion: '<S539>/Data Type Conversion' */
  rtb_DataTypeConversion_hh = BaseEngineController_A02_bak2_B.s436_motohawk_ain4;

  /* Product: '<S539>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S539>/motohawk_calibration4'
   */
  rtb_Product1_f = (real_T)rtb_DataTypeConversion_hh * (ACPresGain_DataStore());

  /* Sum: '<S539>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S539>/motohawk_calibration5'
   */
  BaseEngineController_A02_bak2_B.s539_Sum1 = rtb_Product1_f +
    (ACPresOfst_DataStore());

  /* UnitDelay: '<S539>/Unit Delay1' */
  rtb_UnitDelay1_d = BaseEngineController_A02_bak2_DWork.s539_UnitDelay1_DSTATE;

  /* If: '<S539>/If' incorporates:
   *  Logic: '<S539>/Logical Operator5'
   *  Logic: '<S539>/Logical Operator6'
   */
  if ((!rtb_RelOp_em) && rtb_RelationalOperator2_m) {
    /* Outputs for IfAction SubSystem: '<S539>/If Action Subsystem' incorporates:
     *  ActionPort: '<S549>/Action Port'
     */
    BaseEngineController_A02_bak2_IfActionSubsystem(rtb_UnitDelay1_d,
      &rtb_Merge_fk);

    /* End of Outputs for SubSystem: '<S539>/If Action Subsystem' */
  } else if (rtb_RelOp_em) {
    /* Outputs for IfAction SubSystem: '<S539>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S550>/Action Port'
     */
    BaseEngineController_A02_bak2_IfActionSubsystem((ACPresDfltValue_DataStore()),
      &rtb_Merge_fk);

    /* End of Outputs for SubSystem: '<S539>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S539>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S551>/Action Port'
     */
    BaseEngineController_A02_bak2_IfActionSubsystem
      (BaseEngineController_A02_bak2_B.s539_Sum1, &rtb_Merge_fk);

    /* End of Outputs for SubSystem: '<S539>/If Action Subsystem2' */
  }

  /* End of If: '<S539>/If' */

  /* Sum: '<S553>/Sum1' incorporates:
   *  Constant: '<S553>/Constant'
   *  Product: '<S553>/Product'
   *  Product: '<S553>/Product1'
   *  Sum: '<S553>/Sum'
   *  UnitDelay: '<S553>/Unit Delay'
   */
  rtb_Sum1_i = (1.0 - rtb_DataTypeConversion_i3) *
    BaseEngineController_A02_bak2_DWork.s553_UnitDelay_DSTATE + rtb_Merge_fk *
    rtb_DataTypeConversion_i3;

  /* If: '<S552>/If' incorporates:
   *  Inport: '<S554>/In1'
   *  Inport: '<S555>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S552>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S552>/override_enable'
   */
  if ((ACPres_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S552>/NewValue' incorporates:
     *  ActionPort: '<S554>/Action Port'
     */
    BaseEngineController_A02_bak2_B.s552_Merge = (ACPres_new_DataStore());

    /* End of Outputs for SubSystem: '<S552>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S552>/OldValue' incorporates:
     *  ActionPort: '<S555>/Action Port'
     */
    BaseEngineController_A02_bak2_B.s552_Merge = rtb_Sum1_i;

    /* End of Outputs for SubSystem: '<S552>/OldValue' */
  }

  /* End of If: '<S552>/If' */

  /* Outputs for Enabled SubSystem: '<S7>/Stall' incorporates:
   *  EnablePort: '<S114>/Enable'
   */
  if (rtb_RelOp_js) {
    if (!BaseEngineController_A02_bak2_DWork.s7_Stall_MODE) {
      /* InitializeConditions for UnitDelay: '<S299>/Unit Delay' */
      BaseEngineController_A02_bak2_DWork.s299_UnitDelay_DSTATE = FALSE;

      /* InitializeConditions for UnitDelay: '<S300>/Unit Delay' */
      BaseEngineController_A02_bak2_DWork.s300_UnitDelay_DSTATE = FALSE;

      /* InitializeConditions for UnitDelay: '<S301>/Unit Delay' */
      BaseEngineController_A02_bak2_DWork.s301_UnitDelay_DSTATE = FALSE;

      /* InitializeConditions for UnitDelay: '<S302>/Unit Delay' */
      BaseEngineController_A02_bak2_DWork.s302_UnitDelay_DSTATE = 0.0;
      BaseEngineController_A02_bak2_DWork.s7_Stall_MODE = TRUE;
    }

    /* DataTypeConversion: '<S114>/Data Type Conversion' incorporates:
     *  Constant: '<S114>/OFF'
     */
    BaseEngineController_A02_bak2_B.s111_WASTEGATE = 0.0;

    /* DataTypeConversion: '<S114>/Data Type Conversion1' incorporates:
     *  Constant: '<S114>/OFF1'
     */
    BaseEngineController_A02_bak2_B.s111_IACS = 0.0;

    /* DataTypeConversion: '<S114>/Data Type Conversion2' incorporates:
     *  Constant: '<S114>/OFF2'
     */
    BaseEngineController_A02_bak2_B.s111_IACP = 0.0;

    /* RelationalOperator: '<S296>/LT' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S294>/motohawk_calibration1'
     */
    rtb_BelowLoTarget_b = (BaseEngineController_A02_bak2_B.s637_Merge >=
      (ECTFanOn_DataStore()));

    /* RelationalOperator: '<S296>/LT1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S294>/motohawk_calibration'
     */
    rtb_Switch_ek = (BaseEngineController_A02_bak2_B.s637_Merge <=
                     (ECTFanOff_DataStore()));

    /* CombinatorialLogic: '<S299>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_b != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_Switch_ek != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_l[0] =
        BaseEngineController_A02_bak2_ConstP.pooled706[rowidx];
      rtb_CombinatorialLogic_l[1] =
        BaseEngineController_A02_bak2_ConstP.pooled706[rowidx + 4];
    }

    /* Switch: '<S299>/Switch1' incorporates:
     *  UnitDelay: '<S299>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_l[1]) {
      rtb_RelationalOperator2_m = rtb_CombinatorialLogic_l[0];
    } else {
      rtb_RelationalOperator2_m =
        BaseEngineController_A02_bak2_DWork.s299_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S299>/Switch1' */
    /* Product: '<S294>/Product4' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S294>/motohawk_calibration10'
     */
    rtb_Product2_ik = (uint8_T)(rtb_RelationalOperator2_m ? ((uint8_T)
      (Fan2ECT_DataStore())) : 0);

    /* RelationalOperator: '<S297>/LT' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S294>/motohawk_calibration3'
     */
    rtb_Switch_ek = (BaseEngineController_A02_bak2_B.s655_Merge >=
                     (IATFanOn_DataStore()));

    /* RelationalOperator: '<S297>/LT1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S294>/motohawk_calibration2'
     */
    rtb_BelowLoTarget_b = (BaseEngineController_A02_bak2_B.s655_Merge <=
      (IATFanOff_DataStore()));

    /* CombinatorialLogic: '<S300>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_Switch_ek != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_b != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_l[0] =
        BaseEngineController_A02_bak2_ConstP.pooled706[rowidx];
      rtb_CombinatorialLogic_l[1] =
        BaseEngineController_A02_bak2_ConstP.pooled706[rowidx + 4];
    }

    /* Switch: '<S300>/Switch1' incorporates:
     *  UnitDelay: '<S300>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_l[1]) {
      rtb_RelOp_js = rtb_CombinatorialLogic_l[0];
    } else {
      rtb_RelOp_js = BaseEngineController_A02_bak2_DWork.s300_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S300>/Switch1' */
    /* Product: '<S294>/Product5' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S294>/motohawk_calibration11'
     */
    rtb_Product1_ja = (uint8_T)(rtb_RelOp_js ? ((uint8_T)(Fan2IAT_DataStore())) :
      0);

    /* RelationalOperator: '<S298>/LT' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S294>/motohawk_calibration5'
     */
    rtb_Switch_ek = (BaseEngineController_A02_bak2_B.s552_Merge >=
                     (ACPresFanOn_DataStore()));

    /* RelationalOperator: '<S298>/LT1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S294>/motohawk_calibration4'
     */
    rtb_BelowLoTarget_b = (BaseEngineController_A02_bak2_B.s552_Merge <=
      (ACPresFanOff_DataStore()));

    /* CombinatorialLogic: '<S301>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_Switch_ek != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_b != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_l[0] =
        BaseEngineController_A02_bak2_ConstP.pooled706[rowidx];
      rtb_CombinatorialLogic_l[1] =
        BaseEngineController_A02_bak2_ConstP.pooled706[rowidx + 4];
    }

    /* Switch: '<S301>/Switch1' incorporates:
     *  UnitDelay: '<S301>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_l[1]) {
      rtb_RelOp_em = rtb_CombinatorialLogic_l[0];
    } else {
      rtb_RelOp_em = BaseEngineController_A02_bak2_DWork.s301_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S301>/Switch1' */
    /* Product: '<S294>/Product6' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S294>/motohawk_calibration12'
     */
    rtb_Product_ega = (uint8_T)(rtb_RelOp_em ? ((uint8_T)(Fan2ACPres_DataStore()))
      : 0);

    /* DataTypeConversion: '<S294>/Data Type Conversion' */
    rtb_Product1_f = (real_T)BaseEngineController_A02_bak2_B.s450_Merge;

    /* MinMax: '<S294>/MinMax1' incorporates:
     *  Product: '<S294>/Product7'
     *  S-Function (motohawk_sfun_calibration): '<S294>/motohawk_calibration13'
     */
    u = (real_T)rtb_Product2_ik;
    rtb_DesiredLambda_idx = (real_T)rtb_Product1_ja;
    u = u >= rtb_DesiredLambda_idx ? u : rtb_DesiredLambda_idx;
    rtb_DesiredLambda_idx = (real_T)rtb_Product_ega;
    u = u >= rtb_DesiredLambda_idx ? u : rtb_DesiredLambda_idx;
    rtb_DesiredLambda_idx = rtb_Product1_f * (real_T)((uint8_T)
      (Fan2ACSw_DataStore()));

    /* DataTypeConversion: '<S114>/Data Type Conversion3' incorporates:
     *  MinMax: '<S294>/MinMax1'
     */
    BaseEngineController_A02_bak2_B.s111_FAN2 = (((u >= rtb_DesiredLambda_idx ?
      u : rtb_DesiredLambda_idx) != 0.0));

    /* Product: '<S294>/Product' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S294>/motohawk_calibration6'
     */
    rtb_Product_ega = (uint8_T)(rtb_RelationalOperator2_m ? ((uint8_T)
      (Fan1ECT_DataStore())) : 0);

    /* Product: '<S294>/Product1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S294>/motohawk_calibration7'
     */
    rtb_Product1_ja = (uint8_T)(rtb_RelOp_js ? ((uint8_T)(Fan1IAT_DataStore())) :
      0);

    /* Product: '<S294>/Product2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S294>/motohawk_calibration8'
     */
    rtb_Product2_ik = (uint8_T)(rtb_RelOp_em ? ((uint8_T)(Fan1ACPres_DataStore()))
      : 0);

    /* MinMax: '<S294>/MinMax' incorporates:
     *  Product: '<S294>/Product3'
     *  S-Function (motohawk_sfun_calibration): '<S294>/motohawk_calibration9'
     */
    u = (real_T)rtb_Product_ega;
    rtb_DesiredLambda_idx = (real_T)rtb_Product1_ja;
    u = u >= rtb_DesiredLambda_idx ? u : rtb_DesiredLambda_idx;
    rtb_DesiredLambda_idx = (real_T)rtb_Product2_ik;
    u = u >= rtb_DesiredLambda_idx ? u : rtb_DesiredLambda_idx;
    rtb_DesiredLambda_idx = rtb_Product1_f * (real_T)((uint8_T)
      (Fan1ACSw_DataStore()));

    /* DataTypeConversion: '<S114>/Data Type Conversion4' incorporates:
     *  MinMax: '<S294>/MinMax'
     */
    BaseEngineController_A02_bak2_B.s111_FAN1 = (((u >= rtb_DesiredLambda_idx ?
      u : rtb_DesiredLambda_idx) != 0.0));

    /* UnitDelay: '<S302>/Unit Delay' */
    BaseEngineController_A02_bak2_B.s302_UnitDelay =
      BaseEngineController_A02_bak2_DWork.s302_UnitDelay_DSTATE;

    /* Switch: '<S295>/Switch' incorporates:
     *  Constant: '<S295>/Constant'
     *  RelationalOperator: '<S295>/Relational Operator'
     *  S-Function (motohawk_sfun_calibration): '<S295>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S295>/motohawk_calibration1'
     */
    if ((Constant_Fuel_Pump_DataStore()) > 0.0) {
      rtb_Switch_ek = TRUE;
    } else {
      rtb_Switch_ek = (BaseEngineController_A02_bak2_B.s302_UnitDelay <
                       (FuelPumpStartTime_DataStore()));
    }

    /* End of Switch: '<S295>/Switch' */
    /* S-Function Block: <S302>/motohawk_delta_time */
    rtb_motohawk_delta_time_i = 0.005;

    /* Sum: '<S302>/Sum' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S302>/motohawk_delta_time'
     */
    rtb_Product1_f = rtb_motohawk_delta_time_i +
      BaseEngineController_A02_bak2_B.s302_UnitDelay;

    /* ZeroOrderHold: '<S114>/Zero-Order Hold10' incorporates:
     *  Constant: '<S114>/No Mult'
     */
    BaseEngineController_A02_bak2_B.s111_FuelMult = 0.0;

    /* ZeroOrderHold: '<S114>/Zero-Order Hold14' incorporates:
     *  Constant: '<S114>/OFF3'
     */
    BaseEngineController_A02_bak2_B.s111_AC = FALSE;

    /* ZeroOrderHold: '<S114>/Zero-Order Hold3' */
    BaseEngineController_A02_bak2_B.s111_SparkAdv =
      BaseEngineController_A02_bak2_ConstB.s114_motohawk_replicate2;

    /* ZeroOrderHold: '<S114>/Zero-Order Hold4' incorporates:
     *  Constant: '<S114>/No Spark'
     */
    BaseEngineController_A02_bak2_B.s111_SparkEnergy = 0.0;

    /* ZeroOrderHold: '<S114>/Zero-Order Hold5' incorporates:
     *  Constant: '<S114>/No Start EOI'
     */
    BaseEngineController_A02_bak2_B.s111_MakeUpEOI = 0.0;

    /* ZeroOrderHold: '<S114>/Zero-Order Hold6' */
    memcpy((void *)(&BaseEngineController_A02_bak2_B.s111_FPC[0]), (void *)
           (&BaseEngineController_A02_bak2_ConstB.s114_motohawk_replicate[0]),
           sizeof(real_T) << 3U);

    /* ZeroOrderHold: '<S114>/Zero-Order Hold7' */
    BaseEngineController_A02_bak2_B.s111_FUELP = rtb_Switch_ek;

    /* ZeroOrderHold: '<S114>/Zero-Order Hold8' incorporates:
     *  Constant: '<S114>/No Start Fuel Timing'
     */
    BaseEngineController_A02_bak2_B.s111_SOI = 0.0;

    /* ZeroOrderHold: '<S114>/Zero-Order Hold9' incorporates:
     *  Constant: '<S114>/Closed Throttle'
     */
    BaseEngineController_A02_bak2_B.s111_Throttle = 0.0;

    /* Update for UnitDelay: '<S299>/Unit Delay' */
    BaseEngineController_A02_bak2_DWork.s299_UnitDelay_DSTATE =
      rtb_RelationalOperator2_m;

    /* Update for UnitDelay: '<S300>/Unit Delay' */
    BaseEngineController_A02_bak2_DWork.s300_UnitDelay_DSTATE = rtb_RelOp_js;

    /* Update for UnitDelay: '<S301>/Unit Delay' */
    BaseEngineController_A02_bak2_DWork.s301_UnitDelay_DSTATE = rtb_RelOp_em;

    /* Update for UnitDelay: '<S302>/Unit Delay' */
    BaseEngineController_A02_bak2_DWork.s302_UnitDelay_DSTATE = rtb_Product1_f;
  } else {
    if (BaseEngineController_A02_bak2_DWork.s7_Stall_MODE) {
      BaseEngineController_A02_bak2_DWork.s7_Stall_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S7>/Stall' */
  /* S-Function Block: <S435>/motohawk_encoder_average_rpm */
  {
    rtb_RPM = GetEncoderResourceAverageRPM();
  }

  /* DataTypeConversion: '<S538>/Data Type Conversion' incorporates:
   *  S-Function (motohawk_sfun_encoder_average_rpm): '<S435>/motohawk_encoder_average_rpm'
   */
  rtb_Product1_f = (real_T)rtb_RPM;

  /* S-Function Block: <S531>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_bak2_DWork.s531_motohawk_delta_time_DWORK1,
       NULL);
    rtb_DataTypeConversion_i3 = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S531>/Product' incorporates:
   *  MinMax: '<S531>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S531>/motohawk_calibration'
   */
  rtb_DataTypeConversion_i3 /= (rtb_DataTypeConversion_i3 >=
    (RPMFiltConst_DataStore())) || rtIsNaN((RPMFiltConst_DataStore())) ?
    rtb_DataTypeConversion_i3 : (RPMFiltConst_DataStore());

  /* Sum: '<S538>/Sum1' incorporates:
   *  Constant: '<S538>/Constant'
   *  Product: '<S538>/Product'
   *  Product: '<S538>/Product1'
   *  Sum: '<S538>/Sum'
   *  UnitDelay: '<S538>/Unit Delay'
   */
  BaseEngineController_A02_bak2_B.s538_Sum1 = (1.0 - rtb_DataTypeConversion_i3) *
    BaseEngineController_A02_bak2_DWork.s538_UnitDelay_DSTATE + rtb_Product1_f *
    rtb_DataTypeConversion_i3;

  /* Logic: '<S660>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S660>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S660>/motohawk_fault_status4'
   */
  rtb_RelOp_em = (IsFaultActive(4) || IsFaultActive(5));

  /* Logic: '<S660>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S660>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S660>/motohawk_fault_status3'
   */
  rtb_RelationalOperator2_m = (IsFaultSuspected(4) || IsFaultSuspected(5));

  /* S-Function Block: <S438>/motohawk_ain1 Resource: APP1AnalogInput */
  {
    extern NativeError_S APP1AnalogInput_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    APP1AnalogInput_AnalogInput_Get
      (&BaseEngineController_A02_bak2_B.s438_motohawk_ain1, NULL);
  }

  /* DataTypeConversion: '<S660>/Data Type Conversion' */
  rtb_DataTypeConversion_j = (real_T)
    BaseEngineController_A02_bak2_B.s438_motohawk_ain1;

  /* S-Function Block: <S670>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (APP1Idx_DataStore()) = TablePrelookup_real_T(rtb_DataTypeConversion_j,
      (APP1IdxArr_DataStore()), 9, (APP1Idx_DataStore()));
    rtb_motohawk_prelookup_c = (APP1Idx_DataStore());
  }

  /* S-Function Block: <S670>/motohawk_interpolation_1d */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    BaseEngineController_A02_bak2_B.s670_motohawk_interpolation_1d =
      TableInterpolation1D_real_T(rtb_motohawk_prelookup_c, (real_T *)
      ((APP1Tbl_DataStore())), 9);
  }

  /* UnitDelay: '<S660>/Unit Delay' */
  rtb_UnitDelay_oq = BaseEngineController_A02_bak2_DWork.s660_UnitDelay_DSTATE;

  /* If: '<S660>/If' incorporates:
   *  Logic: '<S660>/Logical Operator5'
   *  Logic: '<S660>/Logical Operator6'
   */
  if ((!rtb_RelOp_em) && rtb_RelationalOperator2_m) {
    /* Outputs for IfAction SubSystem: '<S660>/If Action Subsystem' incorporates:
     *  ActionPort: '<S665>/Action Port'
     */
    BaseEngineController_A02_bak2_IfActionSubsystem(rtb_UnitDelay_oq,
      &rtb_Merge_o);

    /* End of Outputs for SubSystem: '<S660>/If Action Subsystem' */
  } else if (rtb_RelOp_em) {
    /* Outputs for IfAction SubSystem: '<S660>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S666>/Action Port'
     */
    BaseEngineController_A02_bak2_IfActionSubsystem((APP1Default_DataStore()),
      &rtb_Merge_o);

    /* End of Outputs for SubSystem: '<S660>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S660>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S667>/Action Port'
     */
    BaseEngineController_A02_bak2_IfActionSubsystem
      (BaseEngineController_A02_bak2_B.s670_motohawk_interpolation_1d,
       &rtb_Merge_o);

    /* End of Outputs for SubSystem: '<S660>/If Action Subsystem2' */
  }

  /* End of If: '<S660>/If' */

  /* MinMax: '<S669>/MinMax' incorporates:
   *  Constant: '<S660>/Constant1'
   */
  rtb_DataTypeConversion_i3 = rtb_Merge_o >= 0.0 ? rtb_Merge_o : 0.0;

  /* MinMax: '<S669>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S660>/motohawk_calibration2'
   */
  minV = (rtb_DataTypeConversion_i3 <= (APP1MaxLimit_DataStore())) || rtIsNaN
    ((APP1MaxLimit_DataStore())) ? rtb_DataTypeConversion_i3 :
    (APP1MaxLimit_DataStore());

  /* S-Function Block: <S664>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_bak2_DWork.s664_motohawk_delta_time_DWORK1,
       NULL);
    rtb_DataTypeConversion_i3 = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S664>/Product' incorporates:
   *  MinMax: '<S664>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S664>/motohawk_calibration'
   */
  rtb_DataTypeConversion_i3 /= (rtb_DataTypeConversion_i3 >=
    (APP1FiltConst_DataStore())) || rtIsNaN((APP1FiltConst_DataStore())) ?
    rtb_DataTypeConversion_i3 : (APP1FiltConst_DataStore());

  /* Sum: '<S671>/Sum1' incorporates:
   *  Constant: '<S671>/Constant'
   *  MinMax: '<S669>/MinMax1'
   *  Product: '<S671>/Product'
   *  Product: '<S671>/Product1'
   *  Sum: '<S671>/Sum'
   *  UnitDelay: '<S671>/Unit Delay'
   */
  rtb_Sum1_dj = (1.0 - rtb_DataTypeConversion_i3) *
    BaseEngineController_A02_bak2_DWork.s671_UnitDelay_DSTATE + minV *
    rtb_DataTypeConversion_i3;

  /* If: '<S668>/If' incorporates:
   *  Inport: '<S672>/In1'
   *  Inport: '<S673>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S668>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S668>/override_enable'
   */
  if ((APP1_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S668>/NewValue' incorporates:
     *  ActionPort: '<S672>/Action Port'
     */
    BaseEngineController_A02_bak2_B.s668_Merge = (APP1_new_DataStore());

    /* End of Outputs for SubSystem: '<S668>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S668>/OldValue' incorporates:
     *  ActionPort: '<S673>/Action Port'
     */
    BaseEngineController_A02_bak2_B.s668_Merge = rtb_Sum1_dj;

    /* End of Outputs for SubSystem: '<S668>/OldValue' */
  }

  /* End of If: '<S668>/If' */

  /* Logic: '<S661>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S661>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S661>/motohawk_fault_status4'
   */
  rtb_RelOp_em = (IsFaultActive(6) || IsFaultActive(7));

  /* Logic: '<S661>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S661>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S661>/motohawk_fault_status3'
   */
  rtb_RelationalOperator2_m = (IsFaultSuspected(6) || IsFaultSuspected(7));

  /* S-Function Block: <S438>/motohawk_ain2 Resource: APP2AnalogInput */
  {
    extern NativeError_S APP2AnalogInput_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    APP2AnalogInput_AnalogInput_Get
      (&BaseEngineController_A02_bak2_B.s438_motohawk_ain2, NULL);
  }

  /* DataTypeConversion: '<S661>/Data Type Conversion' */
  rtb_DataTypeConversion_iz = (real_T)
    BaseEngineController_A02_bak2_B.s438_motohawk_ain2;

  /* S-Function Block: <S680>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (APP2Idx_DataStore()) = TablePrelookup_real_T(rtb_DataTypeConversion_iz,
      (APP2IdxArr_DataStore()), 9, (APP2Idx_DataStore()));
    rtb_motohawk_prelookup_iy = (APP2Idx_DataStore());
  }

  /* S-Function Block: <S680>/motohawk_interpolation_1d */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    BaseEngineController_A02_bak2_B.s680_motohawk_interpolation_1d =
      TableInterpolation1D_real_T(rtb_motohawk_prelookup_iy, (real_T *)
      ((APP2Tbl_DataStore())), 9);
  }

  /* UnitDelay: '<S661>/Unit Delay' */
  rtb_UnitDelay_la = BaseEngineController_A02_bak2_DWork.s661_UnitDelay_DSTATE;

  /* If: '<S661>/If' incorporates:
   *  Logic: '<S661>/Logical Operator5'
   *  Logic: '<S661>/Logical Operator6'
   */
  if ((!rtb_RelOp_em) && rtb_RelationalOperator2_m) {
    /* Outputs for IfAction SubSystem: '<S661>/If Action Subsystem' incorporates:
     *  ActionPort: '<S675>/Action Port'
     */
    BaseEngineController_A02_bak2_IfActionSubsystem(rtb_UnitDelay_la,
      &rtb_Merge_b);

    /* End of Outputs for SubSystem: '<S661>/If Action Subsystem' */
  } else if (rtb_RelOp_em) {
    /* Outputs for IfAction SubSystem: '<S661>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S676>/Action Port'
     */
    BaseEngineController_A02_bak2_IfActionSubsystem((APP2Default_DataStore()),
      &rtb_Merge_b);

    /* End of Outputs for SubSystem: '<S661>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S661>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S677>/Action Port'
     */
    BaseEngineController_A02_bak2_IfActionSubsystem
      (BaseEngineController_A02_bak2_B.s680_motohawk_interpolation_1d,
       &rtb_Merge_b);

    /* End of Outputs for SubSystem: '<S661>/If Action Subsystem2' */
  }

  /* End of If: '<S661>/If' */

  /* MinMax: '<S679>/MinMax' incorporates:
   *  Constant: '<S661>/Constant1'
   */
  rtb_DataTypeConversion_i3 = rtb_Merge_b >= 0.0 ? rtb_Merge_b : 0.0;

  /* MinMax: '<S679>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S661>/motohawk_calibration2'
   */
  minV_0 = (rtb_DataTypeConversion_i3 <= (APP2MaxLimit_DataStore())) || rtIsNaN
    ((APP2MaxLimit_DataStore())) ? rtb_DataTypeConversion_i3 :
    (APP2MaxLimit_DataStore());

  /* S-Function Block: <S674>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_bak2_DWork.s674_motohawk_delta_time_DWORK1,
       NULL);
    rtb_DataTypeConversion_i3 = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S674>/Product' incorporates:
   *  MinMax: '<S674>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S674>/motohawk_calibration'
   */
  rtb_DataTypeConversion_i3 /= (rtb_DataTypeConversion_i3 >=
    (APP2FiltConst_DataStore())) || rtIsNaN((APP2FiltConst_DataStore())) ?
    rtb_DataTypeConversion_i3 : (APP2FiltConst_DataStore());

  /* Sum: '<S681>/Sum1' incorporates:
   *  Constant: '<S681>/Constant'
   *  MinMax: '<S679>/MinMax1'
   *  Product: '<S681>/Product'
   *  Product: '<S681>/Product1'
   *  Sum: '<S681>/Sum'
   *  UnitDelay: '<S681>/Unit Delay'
   */
  rtb_Sum1_n = (1.0 - rtb_DataTypeConversion_i3) *
    BaseEngineController_A02_bak2_DWork.s681_UnitDelay_DSTATE + minV_0 *
    rtb_DataTypeConversion_i3;

  /* If: '<S678>/If' incorporates:
   *  Inport: '<S682>/In1'
   *  Inport: '<S683>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S678>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S678>/override_enable'
   */
  if ((APP2_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S678>/NewValue' incorporates:
     *  ActionPort: '<S682>/Action Port'
     */
    BaseEngineController_A02_bak2_B.s678_Merge = (APP2_new_DataStore());

    /* End of Outputs for SubSystem: '<S678>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S678>/OldValue' incorporates:
     *  ActionPort: '<S683>/Action Port'
     */
    BaseEngineController_A02_bak2_B.s678_Merge = rtb_Sum1_n;

    /* End of Outputs for SubSystem: '<S678>/OldValue' */
  }

  /* End of If: '<S678>/If' */

  /* Logic: '<S393>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S393>/motohawk_fault_status'
   *  S-Function (motohawk_sfun_fault_status): '<S393>/motohawk_fault_status1'
   */
  rtb_RelationalOperator2_m = (IsFaultActive(4) || IsFaultActive(5));

  /* Logic: '<S393>/Logical Operator6' incorporates:
   *  Logic: '<S393>/Logical Operator5'
   *  S-Function (motohawk_sfun_fault_status): '<S393>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S393>/motohawk_fault_status3'
   */
  rtb_RelOp_js = (rtb_RelationalOperator2_m && (IsFaultActive(6) ||
    IsFaultActive(7)));

  /* Switch: '<S393>/Switch2' incorporates:
   *  Logic: '<S393>/Logical Operator1'
   *  S-Function (motohawk_sfun_fault_status): '<S393>/motohawk_fault_status4'
   */
  if (rtb_RelOp_js || IsFaultActive(8)) {
    /* MinMax: '<S393>/MinMax' */
    rtb_Switch2 = (BaseEngineController_A02_bak2_B.s678_Merge >=
                   BaseEngineController_A02_bak2_B.s668_Merge) || rtIsNaN
      (BaseEngineController_A02_bak2_B.s668_Merge) ?
      BaseEngineController_A02_bak2_B.s678_Merge :
      BaseEngineController_A02_bak2_B.s668_Merge;
  } else {
    /* Switch: '<S393>/Switch1' */
    if (rtb_RelationalOperator2_m) {
      rtb_Switch2 = BaseEngineController_A02_bak2_B.s678_Merge;
    } else {
      rtb_Switch2 = BaseEngineController_A02_bak2_B.s668_Merge;
    }

    /* End of Switch: '<S393>/Switch1' */
  }

  /* End of Switch: '<S393>/Switch2' */
  /* Logic: '<S662>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S662>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S662>/motohawk_fault_status4'
   */
  rtb_RelOp_em = (IsFaultActive(83) || IsFaultActive(84));

  /* Logic: '<S662>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S662>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S662>/motohawk_fault_status3'
   */
  rtb_RelationalOperator2_m = (IsFaultSuspected(83) || IsFaultSuspected(84));

  /* S-Function Block: <S438>/motohawk_ain6 Resource: TPS1AnalogInput */
  {
    extern NativeError_S TPS1AnalogInput_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    TPS1AnalogInput_AnalogInput_Get
      (&BaseEngineController_A02_bak2_B.s438_motohawk_ain6, NULL);
  }

  /* DataTypeConversion: '<S662>/Data Type Conversion' */
  rtb_DataTypeConversion_cg = (real_T)
    BaseEngineController_A02_bak2_B.s438_motohawk_ain6;

  /* S-Function Block: <S690>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (TPS1Idx_DataStore()) = TablePrelookup_real_T(rtb_DataTypeConversion_cg,
      (TPS1IdxArr_DataStore()), 9, (TPS1Idx_DataStore()));
    rtb_motohawk_prelookup_m = (TPS1Idx_DataStore());
  }

  /* S-Function Block: <S690>/motohawk_interpolation_1d */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    BaseEngineController_A02_bak2_B.s690_motohawk_interpolation_1d =
      TableInterpolation1D_real_T(rtb_motohawk_prelookup_m, (real_T *)
      ((TPS1Tbl_DataStore())), 9);
  }

  /* UnitDelay: '<S662>/Unit Delay' */
  rtb_UnitDelay_pn = BaseEngineController_A02_bak2_DWork.s662_UnitDelay_DSTATE;

  /* If: '<S662>/If' incorporates:
   *  Logic: '<S662>/Logical Operator5'
   *  Logic: '<S662>/Logical Operator6'
   */
  if ((!rtb_RelOp_em) && rtb_RelationalOperator2_m) {
    /* Outputs for IfAction SubSystem: '<S662>/If Action Subsystem' incorporates:
     *  ActionPort: '<S685>/Action Port'
     */
    BaseEngineController_A02_bak2_IfActionSubsystem(rtb_UnitDelay_pn,
      &rtb_Merge_on);

    /* End of Outputs for SubSystem: '<S662>/If Action Subsystem' */
  } else if (rtb_RelOp_em) {
    /* Outputs for IfAction SubSystem: '<S662>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S686>/Action Port'
     */
    BaseEngineController_A02_bak2_IfActionSubsystem((TPS1Default_DataStore()),
      &rtb_Merge_on);

    /* End of Outputs for SubSystem: '<S662>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S662>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S687>/Action Port'
     */
    BaseEngineController_A02_bak2_IfActionSubsystem
      (BaseEngineController_A02_bak2_B.s690_motohawk_interpolation_1d,
       &rtb_Merge_on);

    /* End of Outputs for SubSystem: '<S662>/If Action Subsystem2' */
  }

  /* End of If: '<S662>/If' */

  /* MinMax: '<S689>/MinMax' incorporates:
   *  Constant: '<S662>/Constant1'
   */
  rtb_DataTypeConversion_i3 = rtb_Merge_on >= 0.0 ? rtb_Merge_on : 0.0;

  /* MinMax: '<S689>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S662>/motohawk_calibration2'
   */
  minV_1 = (rtb_DataTypeConversion_i3 <= (TPS1MaxLimit_DataStore())) || rtIsNaN
    ((TPS1MaxLimit_DataStore())) ? rtb_DataTypeConversion_i3 :
    (TPS1MaxLimit_DataStore());

  /* S-Function Block: <S684>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_bak2_DWork.s684_motohawk_delta_time_DWORK1,
       NULL);
    rtb_DataTypeConversion_i3 = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S684>/Product' incorporates:
   *  MinMax: '<S684>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S684>/motohawk_calibration'
   */
  rtb_DataTypeConversion_i3 /= (rtb_DataTypeConversion_i3 >=
    (TPS1FiltConst_DataStore())) || rtIsNaN((TPS1FiltConst_DataStore())) ?
    rtb_DataTypeConversion_i3 : (TPS1FiltConst_DataStore());

  /* Sum: '<S691>/Sum1' incorporates:
   *  Constant: '<S691>/Constant'
   *  MinMax: '<S689>/MinMax1'
   *  Product: '<S691>/Product'
   *  Product: '<S691>/Product1'
   *  Sum: '<S691>/Sum'
   *  UnitDelay: '<S691>/Unit Delay'
   */
  rtb_Sum1_p = (1.0 - rtb_DataTypeConversion_i3) *
    BaseEngineController_A02_bak2_DWork.s691_UnitDelay_DSTATE + minV_1 *
    rtb_DataTypeConversion_i3;

  /* If: '<S688>/If' incorporates:
   *  Inport: '<S692>/In1'
   *  Inport: '<S693>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S688>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S688>/override_enable'
   */
  if ((TPS1_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S688>/NewValue' incorporates:
     *  ActionPort: '<S692>/Action Port'
     */
    BaseEngineController_A02_bak2_B.s688_Merge = (TPS1_new_DataStore());

    /* End of Outputs for SubSystem: '<S688>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S688>/OldValue' incorporates:
     *  ActionPort: '<S693>/Action Port'
     */
    BaseEngineController_A02_bak2_B.s688_Merge = rtb_Sum1_p;

    /* End of Outputs for SubSystem: '<S688>/OldValue' */
  }

  /* End of If: '<S688>/If' */

  /* Logic: '<S663>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S663>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S663>/motohawk_fault_status4'
   */
  rtb_RelOp_em = (IsFaultActive(85) || IsFaultActive(86));

  /* Logic: '<S663>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S663>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S663>/motohawk_fault_status3'
   */
  rtb_RelationalOperator2_m = (IsFaultSuspected(85) || IsFaultSuspected(86));

  /* S-Function Block: <S438>/motohawk_ain9 Resource: TPS2AnalogInput */
  {
    extern NativeError_S TPS2AnalogInput_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    TPS2AnalogInput_AnalogInput_Get
      (&BaseEngineController_A02_bak2_B.s438_motohawk_ain9, NULL);
  }

  /* DataTypeConversion: '<S663>/Data Type Conversion' */
  rtb_DataTypeConversion_jo = (real_T)
    BaseEngineController_A02_bak2_B.s438_motohawk_ain9;

  /* S-Function Block: <S700>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (TPS2Idx_DataStore()) = TablePrelookup_real_T(rtb_DataTypeConversion_jo,
      (TPS2IdxArr_DataStore()), 9, (TPS2Idx_DataStore()));
    rtb_motohawk_prelookup_g = (TPS2Idx_DataStore());
  }

  /* S-Function Block: <S700>/motohawk_interpolation_1d */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    BaseEngineController_A02_bak2_B.s700_motohawk_interpolation_1d =
      TableInterpolation1D_real_T(rtb_motohawk_prelookup_g, (real_T *)
      ((TPS2Tbl_DataStore())), 9);
  }

  /* UnitDelay: '<S663>/Unit Delay' */
  rtb_UnitDelay_bg = BaseEngineController_A02_bak2_DWork.s663_UnitDelay_DSTATE;

  /* If: '<S663>/If' incorporates:
   *  Logic: '<S663>/Logical Operator5'
   *  Logic: '<S663>/Logical Operator6'
   */
  if ((!rtb_RelOp_em) && rtb_RelationalOperator2_m) {
    /* Outputs for IfAction SubSystem: '<S663>/If Action Subsystem' incorporates:
     *  ActionPort: '<S695>/Action Port'
     */
    BaseEngineController_A02_bak2_IfActionSubsystem(rtb_UnitDelay_bg,
      &rtb_Merge_fl);

    /* End of Outputs for SubSystem: '<S663>/If Action Subsystem' */
  } else if (rtb_RelOp_em) {
    /* Outputs for IfAction SubSystem: '<S663>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S696>/Action Port'
     */
    BaseEngineController_A02_bak2_IfActionSubsystem((TPS2Default_DataStore()),
      &rtb_Merge_fl);

    /* End of Outputs for SubSystem: '<S663>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S663>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S697>/Action Port'
     */
    BaseEngineController_A02_bak2_IfActionSubsystem
      (BaseEngineController_A02_bak2_B.s700_motohawk_interpolation_1d,
       &rtb_Merge_fl);

    /* End of Outputs for SubSystem: '<S663>/If Action Subsystem2' */
  }

  /* End of If: '<S663>/If' */

  /* MinMax: '<S699>/MinMax' incorporates:
   *  Constant: '<S663>/Constant1'
   */
  rtb_DataTypeConversion_i3 = rtb_Merge_fl >= 0.0 ? rtb_Merge_fl : 0.0;

  /* MinMax: '<S699>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S663>/motohawk_calibration2'
   */
  minV_2 = (rtb_DataTypeConversion_i3 <= (TPS2MaxLimit_DataStore())) || rtIsNaN
    ((TPS2MaxLimit_DataStore())) ? rtb_DataTypeConversion_i3 :
    (TPS2MaxLimit_DataStore());

  /* S-Function Block: <S694>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_bak2_DWork.s694_motohawk_delta_time_DWORK1,
       NULL);
    rtb_DataTypeConversion_i3 = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S694>/Product' incorporates:
   *  MinMax: '<S694>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S694>/motohawk_calibration'
   */
  rtb_DataTypeConversion_i3 /= (rtb_DataTypeConversion_i3 >=
    (TPS2FiltConst_DataStore())) || rtIsNaN((TPS2FiltConst_DataStore())) ?
    rtb_DataTypeConversion_i3 : (TPS2FiltConst_DataStore());

  /* Sum: '<S701>/Sum1' incorporates:
   *  Constant: '<S701>/Constant'
   *  MinMax: '<S699>/MinMax1'
   *  Product: '<S701>/Product'
   *  Product: '<S701>/Product1'
   *  Sum: '<S701>/Sum'
   *  UnitDelay: '<S701>/Unit Delay'
   */
  rtb_Sum1_fn = (1.0 - rtb_DataTypeConversion_i3) *
    BaseEngineController_A02_bak2_DWork.s701_UnitDelay_DSTATE + minV_2 *
    rtb_DataTypeConversion_i3;

  /* If: '<S698>/If' incorporates:
   *  Inport: '<S702>/In1'
   *  Inport: '<S703>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S698>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S698>/override_enable'
   */
  if ((TPS2_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S698>/NewValue' incorporates:
     *  ActionPort: '<S702>/Action Port'
     */
    BaseEngineController_A02_bak2_B.s698_Merge = (TPS2_new_DataStore());

    /* End of Outputs for SubSystem: '<S698>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S698>/OldValue' incorporates:
     *  ActionPort: '<S703>/Action Port'
     */
    BaseEngineController_A02_bak2_B.s698_Merge = rtb_Sum1_fn;

    /* End of Outputs for SubSystem: '<S698>/OldValue' */
  }

  /* End of If: '<S698>/If' */

  /* Logic: '<S403>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S403>/motohawk_fault_status'
   *  S-Function (motohawk_sfun_fault_status): '<S403>/motohawk_fault_status1'
   */
  rtb_RelationalOperator2_m = (IsFaultActive(83) || IsFaultActive(84));

  /* Logic: '<S403>/Logical Operator6' incorporates:
   *  Logic: '<S403>/Logical Operator5'
   *  S-Function (motohawk_sfun_fault_status): '<S403>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S403>/motohawk_fault_status3'
   */
  rtb_RelOp_js = (rtb_RelationalOperator2_m && (IsFaultActive(85) ||
    IsFaultActive(86)));

  /* Switch: '<S403>/Switch2' incorporates:
   *  Logic: '<S403>/Logical Operator1'
   *  S-Function (motohawk_sfun_fault_status): '<S403>/motohawk_fault_status4'
   */
  if (rtb_RelOp_js || IsFaultActive(87)) {
    /* MinMax: '<S403>/MinMax' */
    BaseEngineController_A02_bak2_B.s403_Switch2 =
      (BaseEngineController_A02_bak2_B.s698_Merge >=
       BaseEngineController_A02_bak2_B.s688_Merge) || rtIsNaN
      (BaseEngineController_A02_bak2_B.s688_Merge) ?
      BaseEngineController_A02_bak2_B.s698_Merge :
      BaseEngineController_A02_bak2_B.s688_Merge;
  } else {
    /* Switch: '<S403>/Switch1' */
    if (rtb_RelationalOperator2_m) {
      BaseEngineController_A02_bak2_B.s403_Switch2 =
        BaseEngineController_A02_bak2_B.s698_Merge;
    } else {
      BaseEngineController_A02_bak2_B.s403_Switch2 =
        BaseEngineController_A02_bak2_B.s688_Merge;
    }

    /* End of Switch: '<S403>/Switch1' */
  }

  /* End of Switch: '<S403>/Switch2' */

  /* RelationalOperator: '<S110>/RelOp' incorporates:
   *  Constant: '<S110>/Constant'
   */
  rtb_RelationalOperator2_m = (BaseEngineController_A02_bak2_B.s418_State == 2);

  /* S-Function Block: <S565>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_bak2_DWork.s565_motohawk_delta_time_DWORK1,
       NULL);
    rtb_motohawk_delta_time_bw = ((real_T) delta) * 0.000001;
  }

  /* UnitDelay: '<S565>/Unit Delay' */
  rtb_Product1_f = BaseEngineController_A02_bak2_DWork.s565_UnitDelay_DSTATE;

  /* Logic: '<S540>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S540>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S540>/motohawk_fault_status4'
   */
  rtb_RelOp_em = (IsFaultActive(45) || IsFaultActive(46));

  /* Logic: '<S540>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S540>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S540>/motohawk_fault_status3'
   */
  rtb_RelOp_js = (IsFaultSuspected(45) || IsFaultSuspected(46));

  /* S-Function Block: <S436>/motohawk_frequency_in Frequency Input Get: FuelSensorPin */
  {
    extern NativeError_S FuelSensorPin_FrequencyInput_Get(uint32_T *frequency,
      int16_T *duty_cycle);
    FuelSensorPin_FrequencyInput_Get
      (&BaseEngineController_A02_bak2_B.s436_motohawk_frequency_in, NULL);
  }

  /* DataTypeConversion: '<S540>/Data Type Conversion' */
  rtb_DataTypeConversion_i3 = (real_T)
    BaseEngineController_A02_bak2_B.s436_motohawk_frequency_in;

  /* Product: '<S540>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S540>/motohawk_calibration4'
   */
  rtb_Product1_i = rtb_DataTypeConversion_i3 * (FuelSensGain_DataStore());

  /* Sum: '<S540>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S540>/motohawk_calibration5'
   */
  BaseEngineController_A02_bak2_B.s540_Sum1 = rtb_Product1_i +
    (FuelSensOfst_DataStore());

  /* Saturate: '<S540>/Saturation' */
  rtb_Saturation_k = BaseEngineController_A02_bak2_B.s540_Sum1 >= 90.0 ? 90.0 :
    BaseEngineController_A02_bak2_B.s540_Sum1 <= 0.0 ? 0.0 :
    BaseEngineController_A02_bak2_B.s540_Sum1;

  /* UnitDelay: '<S540>/Unit Delay1' */
  rtb_UnitDelay1_g = BaseEngineController_A02_bak2_DWork.s540_UnitDelay1_DSTATE;

  /* If: '<S540>/If' incorporates:
   *  Logic: '<S540>/Logical Operator5'
   *  Logic: '<S540>/Logical Operator6'
   */
  if ((!rtb_RelOp_em) && rtb_RelOp_js) {
    /* Outputs for IfAction SubSystem: '<S540>/If Action Subsystem' incorporates:
     *  ActionPort: '<S557>/Action Port'
     */
    BaseEngineController_A02_bak2_IfActionSubsystem(rtb_UnitDelay1_g,
      &rtb_Merge_h);

    /* End of Outputs for SubSystem: '<S540>/If Action Subsystem' */
  } else if (rtb_RelOp_em) {
    /* Outputs for IfAction SubSystem: '<S540>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S558>/Action Port'
     */
    BaseEngineController_A02_bak2_IfActionSubsystem((FuelSensDfltValue_DataStore
      ()), &rtb_Merge_h);

    /* End of Outputs for SubSystem: '<S540>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S540>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S559>/Action Port'
     */
    BaseEngineController_A02_bak2_IfActionSubsystem(rtb_Saturation_k,
      &rtb_Merge_h);

    /* End of Outputs for SubSystem: '<S540>/If Action Subsystem2' */
  }

  /* End of If: '<S540>/If' */

  /* Product: '<S565>/Product1' incorporates:
   *  S-Function (motohawk_sfun_delta_time): '<S565>/motohawk_delta_time'
   *  Sum: '<S565>/Sum3'
   */
  rtb_DataTypeConversion_fc = 1.0 / rtb_motohawk_delta_time_bw * (rtb_Merge_h -
    rtb_Product1_f);

  /* MinMax: '<S566>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S563>/motohawk_calibration1'
   */
  rtb_DataTypeConversion_fc = (rtb_DataTypeConversion_fc >= (Fall_Rate_DataStore
                                ())) || rtIsNaN((Fall_Rate_DataStore())) ?
    rtb_DataTypeConversion_fc : (Fall_Rate_DataStore());

  /* Sum: '<S565>/Sum2' incorporates:
   *  MinMax: '<S566>/MinMax1'
   *  Product: '<S565>/Product'
   *  S-Function (motohawk_sfun_calibration): '<S563>/motohawk_calibration'
   *  S-Function (motohawk_sfun_delta_time): '<S565>/motohawk_delta_time'
   */
  rtb_Sum2_c = ((rtb_DataTypeConversion_fc <= (Rise_Rate_DataStore())) ||
                rtIsNaN((Rise_Rate_DataStore())) ? rtb_DataTypeConversion_fc :
                (Rise_Rate_DataStore())) * rtb_motohawk_delta_time_bw +
    rtb_Product1_f;

  /* S-Function Block: <S561>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_bak2_DWork.s561_motohawk_delta_time_DWORK1,
       NULL);
    rtb_DataTypeConversion_fc = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S561>/Product' incorporates:
   *  MinMax: '<S561>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S561>/motohawk_calibration'
   */
  rtb_DataTypeConversion_fc /= (rtb_DataTypeConversion_fc >=
    (FuelSensFilterConst_DataStore())) || rtIsNaN((FuelSensFilterConst_DataStore
    ())) ? rtb_DataTypeConversion_fc : (FuelSensFilterConst_DataStore());

  /* Sum: '<S564>/Sum1' incorporates:
   *  Constant: '<S564>/Constant'
   *  Product: '<S564>/Product'
   *  Product: '<S564>/Product1'
   *  Sum: '<S564>/Sum'
   *  UnitDelay: '<S564>/Unit Delay'
   */
  rtb_Sum1_k = (1.0 - rtb_DataTypeConversion_fc) *
    BaseEngineController_A02_bak2_DWork.s564_UnitDelay_DSTATE + rtb_Merge_h *
    rtb_DataTypeConversion_fc;

  /* UnitDelay: '<S562>/Unit Delay' */
  rtb_UnitDelay_ln = BaseEngineController_A02_bak2_DWork.s562_UnitDelay_DSTATE;

  /* UnitDelay: '<S562>/Unit Delay1' */
  rtb_UnitDelay1_b = BaseEngineController_A02_bak2_DWork.s562_UnitDelay1_DSTATE;

  /* UnitDelay: '<S562>/Unit Delay2' */
  rtb_Product1_f = BaseEngineController_A02_bak2_DWork.s562_UnitDelay2_DSTATE;

  /* MultiPortSwitch: '<S556>/Multiport Switch' incorporates:
   *  Product: '<S562>/Product'
   *  S-Function (motohawk_sfun_calibration): '<S556>/motohawk_calibration'
   *  S-Function (motohawk_sfun_calibration): '<S562>/motohawk_calibration'
   */
  switch (((uint8_T)(Filter_Type_Selection_DataStore()))) {
   case 1:
    rtb_Product1_f = rtb_Sum2_c;
    break;

   case 2:
    rtb_Product1_f = rtb_Sum1_k;
    break;

   default:
    /* Product: '<S562>/Product3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S562>/motohawk_calibration3'
     */
    rtb_Product1_f *= (Gain3_DataStore());

    /* Sum: '<S562>/Sum2' incorporates:
     *  Product: '<S562>/Product2'
     *  S-Function (motohawk_sfun_calibration): '<S562>/motohawk_calibration2'
     */
    rtb_Product1_f += (Gain2_DataStore()) * rtb_UnitDelay1_b;

    /* Sum: '<S562>/Sum' incorporates:
     *  Product: '<S562>/Product1'
     *  S-Function (motohawk_sfun_calibration): '<S562>/motohawk_calibration1'
     *  Sum: '<S562>/Sum1'
     */
    rtb_Product1_f = ((Gain1_DataStore()) * rtb_UnitDelay_ln + rtb_Product1_f) +
      rtb_Merge_h;
    rtb_Product1_f *= (FinalGain_DataStore());
    break;
  }

  /* End of MultiPortSwitch: '<S556>/Multiport Switch' */
  /* If: '<S560>/If' incorporates:
   *  Inport: '<S567>/In1'
   *  Inport: '<S568>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S560>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S560>/override_enable'
   */
  if ((FuelSens_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S560>/NewValue' incorporates:
     *  ActionPort: '<S567>/Action Port'
     */
    BaseEngineController_A02_bak2_B.s560_Merge = (FuelSens_new_DataStore());

    /* End of Outputs for SubSystem: '<S560>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S560>/OldValue' incorporates:
     *  ActionPort: '<S568>/Action Port'
     */
    BaseEngineController_A02_bak2_B.s560_Merge = rtb_Product1_f;

    /* End of Outputs for SubSystem: '<S560>/OldValue' */
  }

  /* End of If: '<S560>/If' */

  /* Outputs for Enabled SubSystem: '<S7>/Crank' incorporates:
   *  EnablePort: '<S109>/Enable'
   */
  if (rtb_RelationalOperator2_m) {
    if (!BaseEngineController_A02_bak2_DWork.s7_Crank_MODE) {
      BaseEngineController_A02_bak2_DWork.s7_Crank_MODE = TRUE;
    }

    /* MultiPortSwitch: '<S117>/Multiport Switch2' incorporates:
     *  Constant: '<S117>/ClearFloodFueling3'
     *  S-Function (motohawk_sfun_calibration): '<S117>/motohawk_calibration1'
     *  S-Function (motohawk_sfun_data_read): '<S117>/motohawk_data_read1'
     */
    if (AirControlSource_DataStore() == FALSE) {
      rtb_Product1_f = 0.0;
    } else {
      rtb_Product1_f = (OpenThrottleFPCScalar_DataStore());
    }

    /* End of MultiPortSwitch: '<S117>/Multiport Switch2' */

    /* MultiPortSwitch: '<S117>/Multiport Switch1' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S117>/motohawk_data_read1'
     */
    if (AirControlSource_DataStore() == FALSE) {
      rtb_motohawk_replicate1 = rtb_Switch2;
    } else {
      rtb_motohawk_replicate1 = BaseEngineController_A02_bak2_B.s403_Switch2;
    }

    /* End of MultiPortSwitch: '<S117>/Multiport Switch1' */

    /* Sum: '<S117>/Add' incorporates:
     *  Constant: '<S117>/ClearFloodFueling1'
     *  Gain: '<S117>/Gain'
     *  Product: '<S117>/Product1'
     */
    rtb_Product1_f = 0.01 * rtb_motohawk_replicate1 * rtb_Product1_f + 1.0;

    /* RelationalOperator: '<S117>/Relational Operator' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S117>/motohawk_calibration2'
     */
    rtb_RelationalOperator2_m = (rtb_motohawk_replicate1 >=
      (ClearFloodThreshold_DataStore()));

    /* S-Function Block: <S109>/motohawk_prelookup1 */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (CrankECT05Idx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_A02_bak2_B.s637_Merge, (CrankECT05IdxArr_DataStore
          ()), 5, (CrankECT05Idx_DataStore()));
      rtb_motohawk_prelookup1_o = (CrankECT05Idx_DataStore());
    }

    /* S-Function Block: <S109>/motohawk_prelookup */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (CrankRPM05In_DataStore()) = BaseEngineController_A02_bak2_B.s538_Sum1;
      (CrankRPM05Idx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_A02_bak2_B.s538_Sum1, (CrankRPM05IdxArr_DataStore()),
         5, (CrankRPM05Idx_DataStore()));
      rtb_motohawk_prelookup_gy = (CrankRPM05Idx_DataStore());
    }

    /* S-Function Block: <S109>/motohawk_prelookup2 */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (CrankIAT05Idx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_A02_bak2_B.s655_Merge, (CrankIAT05IdxArr_DataStore
          ()), 5, (CrankIAT05Idx_DataStore()));
      rtb_motohawk_prelookup2_l = (CrankIAT05Idx_DataStore());
    }

    /* S-Function Block: <S109>/motohawk_prelookup3 */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (CrankOXY05In_DataStore()) = BaseEngineController_A02_bak2_B.s560_Merge;
      (CrankOXY05Idx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_A02_bak2_B.s560_Merge, (CrankOXY05IdxArr_DataStore
          ()), 5, (CrankOXY05Idx_DataStore()));
      rtb_motohawk_prelookup3 = (CrankOXY05Idx_DataStore());
    }

    /* Switch: '<S117>/Switch' incorporates:
     *  Constant: '<S117>/ClearFloodFueling'
     *  Product: '<S117>/Product2'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S117>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S117>/motohawk_interpolation_1d1'
     *  S-Function (motohawk_sfun_interpolation_2d): '<S117>/motohawk_interpolation_2d'
     *  S-Function (motohawk_sfun_prelookup): '<S109>/motohawk_prelookup'
     *  S-Function (motohawk_sfun_prelookup): '<S109>/motohawk_prelookup1'
     *  S-Function (motohawk_sfun_prelookup): '<S109>/motohawk_prelookup2'
     *  S-Function (motohawk_sfun_prelookup): '<S109>/motohawk_prelookup3'
     */
    if (rtb_RelationalOperator2_m) {
      rtb_motohawk_replicate1 = 0.0;
    } else {
      /* S-Function Block: <S117>/motohawk_interpolation_1d1 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d1_j = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup3, (real_T *) ((CrankFPC_OXYMultTbl_DataStore())),
           5);
        (CrankFPC_OXYMult_DataStore()) = rtb_motohawk_interpolation_1d1_j;
      }

      /* S-Function Block: <S117>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d_f = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup2_l, (real_T *) ((CrankFPC_IATMultTbl_DataStore
             ())), 5);
        (CrankFPC_IATMult_DataStore()) = rtb_motohawk_interpolation_1d_f;
      }

      /* S-Function Block: <S117>/motohawk_interpolation_2d */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_motohawk_interpolation_2d_og = TableInterpolation2D_real_T
          (rtb_motohawk_prelookup1_o, rtb_motohawk_prelookup_gy, (real_T *)
           ((CrankFPCMap_DataStore())), 5, 5);
        (CrankFPC_DataStore()) = rtb_motohawk_interpolation_2d_og;
      }

      rtb_motohawk_replicate1 = rtb_motohawk_interpolation_2d_og *
        rtb_motohawk_interpolation_1d_f * rtb_motohawk_interpolation_1d1_j;
    }

    /* End of Switch: '<S117>/Switch' */

    /* Product: '<S117>/Product' */
    rtb_Product_jv = rtb_Product1_f * rtb_motohawk_replicate1;

    /* S-Function Block: <S118>/motohawk_interpolation_2d */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_motohawk_interpolation_2d_k = TableInterpolation2D_real_T
        (rtb_motohawk_prelookup1_o, rtb_motohawk_prelookup_gy, (real_T *)
         ((CrankIACMap_DataStore())), 5, 5);
      (CrankIAC_DataStore()) = rtb_motohawk_interpolation_2d_k;
    }

    /* S-Function Block: <S118>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_h = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup2_l, (real_T *) ((CrankIAC_IATMultTbl_DataStore())),
         5);
      (CrankIAC_IATMult_DataStore()) = rtb_motohawk_interpolation_1d_h;
    }

    /* S-Function Block: <S118>/motohawk_interpolation_1d1 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d1_im = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup3, (real_T *) ((CrankIAC_OXYMultTbl_DataStore())),
         5);
      (CrankIAC_OXYMult_DataStore()) = rtb_motohawk_interpolation_1d1_im;
    }

    /* Product: '<S118>/Product' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S118>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S118>/motohawk_interpolation_1d1'
     *  S-Function (motohawk_sfun_interpolation_2d): '<S118>/motohawk_interpolation_2d'
     *  S-Function (motohawk_sfun_prelookup): '<S109>/motohawk_prelookup'
     *  S-Function (motohawk_sfun_prelookup): '<S109>/motohawk_prelookup1'
     *  S-Function (motohawk_sfun_prelookup): '<S109>/motohawk_prelookup2'
     *  S-Function (motohawk_sfun_prelookup): '<S109>/motohawk_prelookup3'
     */
    rtb_Product1_f = rtb_motohawk_interpolation_2d_k *
      rtb_motohawk_interpolation_1d_h * rtb_motohawk_interpolation_1d1_im;

    /* Switch: '<S119>/Switch' */
    rtb_motohawk_replicate1 = rtb_Product1_f;

    /* DataTypeConversion: '<S109>/Data Type Conversion' */
    BaseEngineController_A02_bak2_B.s111_IACP = rtb_motohawk_replicate1;

    /* Switch: '<S119>/Switch1' incorporates:
     *  Constant: '<S119>/Constant'
     *  Constant: '<S119>/Constant1'
     *  S-Function (motohawk_sfun_data_read): '<S119>/motohawk_data_read'
     *  Sum: '<S119>/Sum'
     */
    if (((uint8_T)IACType_DataStore()) > 0) {
      rtb_motohawk_replicate1 = 100.0 - rtb_Product1_f;
    } else {
      rtb_motohawk_replicate1 = 0.0;
    }

    /* End of Switch: '<S119>/Switch1' */

    /* DataTypeConversion: '<S109>/Data Type Conversion1' */
    BaseEngineController_A02_bak2_B.s111_IACS = rtb_motohawk_replicate1;

    /* DataTypeConversion: '<S109>/Data Type Conversion2' incorporates:
     *  Constant: '<S109>/OFF'
     */
    BaseEngineController_A02_bak2_B.s111_WASTEGATE = 0.0;

    /* ZeroOrderHold: '<S109>/Zero-Order Hold10' incorporates:
     *  Constant: '<S109>/Mult'
     */
    BaseEngineController_A02_bak2_B.s111_FuelMult = 1.0;

    /* ZeroOrderHold: '<S109>/Zero-Order Hold12' incorporates:
     *  Constant: '<S109>/OFF1'
     */
    BaseEngineController_A02_bak2_B.s111_FAN1 = FALSE;

    /* ZeroOrderHold: '<S109>/Zero-Order Hold13' incorporates:
     *  Constant: '<S109>/OFF2'
     */
    BaseEngineController_A02_bak2_B.s111_FAN2 = FALSE;

    /* ZeroOrderHold: '<S109>/Zero-Order Hold14' incorporates:
     *  Constant: '<S109>/OFF3'
     */
    BaseEngineController_A02_bak2_B.s111_AC = FALSE;

    /* S-Function Block: <S109>/motohawk_interpolation_2d */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_motohawk_interpolation_2d_o = TableInterpolation2D_real_T
        (rtb_motohawk_prelookup1_o, rtb_motohawk_prelookup_gy, (real_T *)
         ((CrankSparkMap_DataStore())), 5, 5);
      (CrankSpark_DataStore()) = rtb_motohawk_interpolation_2d_o;
    }

    /* S-Function (motohawk_sfun_replicate): '<S109>/motohawk_replicate1' */

    /* S-Function Block: <S109>/motohawk_replicate1 */
    rtb_motohawk_replicate1 = rtb_motohawk_interpolation_2d_o;

    /* ZeroOrderHold: '<S109>/Zero-Order Hold3' */
    BaseEngineController_A02_bak2_B.s111_SparkAdv = rtb_motohawk_replicate1;

    /* S-Function Block: <S109>/motohawk_interpolation_2d1 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_motohawk_interpolation_2d1_fs = TableInterpolation2D_real_T
        (rtb_motohawk_prelookup1_o, rtb_motohawk_prelookup_gy, (real_T *)
         ((CrankSpkEnergyMap_DataStore())), 5, 5);
      (CrankSpkEnergy_DataStore()) = rtb_motohawk_interpolation_2d1_fs;
    }

    /* ZeroOrderHold: '<S109>/Zero-Order Hold4' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S109>/motohawk_interpolation_2d1'
     *  S-Function (motohawk_sfun_prelookup): '<S109>/motohawk_prelookup'
     *  S-Function (motohawk_sfun_prelookup): '<S109>/motohawk_prelookup1'
     */
    BaseEngineController_A02_bak2_B.s111_SparkEnergy =
      rtb_motohawk_interpolation_2d1_fs;

    /* S-Function Block: <S109>/motohawk_interpolation_1d4 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d4_oj = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_gy, (real_T *) ((CrankSOITbl_DataStore())), 5);
      (CrankSOI_DataStore()) = rtb_motohawk_interpolation_1d4_oj;
    }

    /* ZeroOrderHold: '<S109>/Zero-Order Hold5' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S109>/motohawk_interpolation_1d4'
     *  S-Function (motohawk_sfun_prelookup): '<S109>/motohawk_prelookup'
     */
    BaseEngineController_A02_bak2_B.s111_SOI = rtb_motohawk_interpolation_1d4_oj;

    /* S-Function (motohawk_sfun_replicate): '<S109>/motohawk_replicate' */

    /* S-Function Block: <S109>/motohawk_replicate */
    {
      int_T i1;
      real_T *y0 = rtb_motohawk_replicate;
      for (i1=0; i1 < 8; i1++) {
        y0[i1] = rtb_Product_jv;
      }
    }

    /* ZeroOrderHold: '<S109>/Zero-Order Hold6' */
    memcpy((void *)(&BaseEngineController_A02_bak2_B.s111_FPC[0]), (void *)
           &rtb_motohawk_replicate[0], sizeof(real_T) << 3U);

    /* ZeroOrderHold: '<S109>/Zero-Order Hold7' incorporates:
     *  Constant: '<S109>/ON'
     */
    BaseEngineController_A02_bak2_B.s111_FUELP = TRUE;

    /* S-Function Block: <S109>/motohawk_interpolation_1d5 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d5 = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_gy, (real_T *) ((CrankMakeUpEOITbl_DataStore())),
         5);
      (CrankMakeUpEOI_DataStore()) = rtb_motohawk_interpolation_1d5;
    }

    /* ZeroOrderHold: '<S109>/Zero-Order Hold8' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S109>/motohawk_interpolation_1d5'
     *  S-Function (motohawk_sfun_prelookup): '<S109>/motohawk_prelookup'
     */
    BaseEngineController_A02_bak2_B.s111_MakeUpEOI =
      rtb_motohawk_interpolation_1d5;

    /* S-Function Block: <S109>/motohawk_interpolation_1d1 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d1_if = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup1_o, (real_T *) ((CrankAirflowSetPtTbl_DataStore())),
         5);
      (CrankAirflowSetPt_DataStore()) = rtb_motohawk_interpolation_1d1_if;
    }

    /* ZeroOrderHold: '<S109>/Zero-Order Hold9' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S109>/motohawk_interpolation_1d1'
     *  S-Function (motohawk_sfun_prelookup): '<S109>/motohawk_prelookup1'
     */
    BaseEngineController_A02_bak2_B.s111_Throttle =
      rtb_motohawk_interpolation_1d1_if;
  } else {
    if (BaseEngineController_A02_bak2_DWork.s7_Crank_MODE) {
      BaseEngineController_A02_bak2_DWork.s7_Crank_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S7>/Crank' */
  /* Switch: '<S397>/Switch1' incorporates:
   *  S-Function (motohawk_sfun_fault_action): '<S397>/motohawk_fault_action1'
   */
  if (GetFaultActionStatus(0)) {
    /* MinMax: '<S414>/MinMax' incorporates:
     *  Constant: '<S397>/Constant1'
     *  Product: '<S397>/Product1'
     *  S-Function (motohawk_sfun_calibration): '<S397>/motohawk_calibration2'
     */
    u = (Overheat_ScaleAPP_DataStore()) * rtb_Switch2;
    u = u >= 0.0 ? u : 0.0;

    /* MinMax: '<S414>/MinMax1' incorporates:
     *  Constant: '<S397>/Constant1'
     *  MinMax: '<S414>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S397>/motohawk_calibration1'
     */
    BaseEngineController_A02_bak2_B.s397_Switch1 = (u <=
      (Overheat_MaxAPP_DataStore())) || rtIsNaN((Overheat_MaxAPP_DataStore())) ?
      u : (Overheat_MaxAPP_DataStore());
  } else {
    BaseEngineController_A02_bak2_B.s397_Switch1 = rtb_Switch2;
  }

  /* End of Switch: '<S397>/Switch1' */
  /* S-Function Block: <S392>/motohawk_prelookup2 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (TPS09In_DataStore()) = BaseEngineController_A02_bak2_B.s403_Switch2;
    (TPS09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_bak2_B.s403_Switch2, (TPS09IdxArr_DataStore()),
       9, (TPS09Idx_DataStore()));
    rtb_motohawk_prelookup2 = (TPS09Idx_DataStore());
  }

  /* Outputs for Atomic SubSystem: '<S350>/Base TPS Request' */

  /* UnitDelay: '<S394>/Unit Delay2' */
  rtb_UnitDelay_hp = BaseEngineController_A02_bak2_DWork.s394_UnitDelay2_DSTATE;

  /* S-Function Block: <S394>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (APP17In_DataStore()) = BaseEngineController_A02_bak2_B.s397_Switch1;
    (APP17Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_bak2_B.s397_Switch1, (APP17IdxArr_DataStore()),
       17, (APP17Idx_DataStore()));
    rtb_motohawk_prelookup_jz = (APP17Idx_DataStore());
  }

  /* S-Function Block: <S394>/motohawk_interpolation_1d2 */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_motohawk_interpolation_1d2_m = TableInterpolation1D_real_T
      (rtb_motohawk_prelookup_jz, (real_T *) ((ETCRequestTbl_DataStore())), 17);
    (ETCRequest_DataStore()) = rtb_motohawk_interpolation_1d2_m;
  }

  /* RelationalOperator: '<S394>/Relational Operator3' */
  BaseEngineController_A02_bak2_B.s394_RelationalOperator3 = ((rtb_UnitDelay_hp <
    rtb_motohawk_interpolation_1d2_m));

  /* Outputs for Enabled SubSystem: '<S394>/PassThrough1' */
  BaseEngineController_A02_bak2_PassThrough1
    (BaseEngineController_A02_bak2_B.s394_RelationalOperator3,
     (ETCReqIncFiltC_DataStore()), &BaseEngineController_A02_bak2_B.s394_Merge);

  /* End of Outputs for SubSystem: '<S394>/PassThrough1' */

  /* RelationalOperator: '<S394>/Relational Operator2' */
  rtb_RelationalOperator2_os = (rtb_UnitDelay_hp >
    rtb_motohawk_interpolation_1d2_m);

  /* Outputs for Enabled SubSystem: '<S394>/PassThrough2' */
  BaseEngineController_A02_bak2_PassThrough1(rtb_RelationalOperator2_os,
    (ETCReqDecFiltC_DataStore()), &BaseEngineController_A02_bak2_B.s394_Merge);

  /* End of Outputs for SubSystem: '<S394>/PassThrough2' */

  /* S-Function Block: <S410>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_bak2_DWork.s410_motohawk_delta_time_DWORK1,
       NULL);
    rtb_motohawk_delta_time_a5 = ((real_T) delta) * 0.000001;
  }

  /* S-Function Block: <S394>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_bak2_DWork.s394_motohawk_delta_time_DWORK1,
       NULL);
    rtb_UnitDelay_hp = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S394>/Product' incorporates:
   *  MinMax: '<S394>/MinMax'
   */
  rtb_UnitDelay_hp /= (rtb_UnitDelay_hp >=
                       BaseEngineController_A02_bak2_B.s394_Merge) || rtIsNaN
    (BaseEngineController_A02_bak2_B.s394_Merge) ? rtb_UnitDelay_hp :
    BaseEngineController_A02_bak2_B.s394_Merge;

  /* Product: '<S407>/Product' */
  rtb_Product1_f = rtb_motohawk_interpolation_1d2_m * rtb_UnitDelay_hp;

  /* Sum: '<S407>/Sum' incorporates:
   *  Constant: '<S407>/Constant'
   */
  rtb_Product1_i = 1.0 - rtb_UnitDelay_hp;

  /* UnitDelay: '<S407>/Unit Delay' */
  rtb_UnitDelay_hp = BaseEngineController_A02_bak2_DWork.s407_UnitDelay_DSTATE;

  /* Sum: '<S407>/Sum1' incorporates:
   *  Product: '<S407>/Product1'
   */
  rtb_Sum1_j = rtb_Product1_i * rtb_UnitDelay_hp + rtb_Product1_f;

  /* UnitDelay: '<S410>/Unit Delay' */
  rtb_UnitDelay_hp = BaseEngineController_A02_bak2_DWork.s410_UnitDelay_DSTATE;

  /* Product: '<S410>/Product1' incorporates:
   *  S-Function (motohawk_sfun_delta_time): '<S410>/motohawk_delta_time'
   *  Sum: '<S410>/Sum3'
   */
  rtb_Product1_f = 1.0 / rtb_motohawk_delta_time_a5 * (rtb_Sum1_j -
    rtb_UnitDelay_hp);

  /* S-Function Block: <S394>/motohawk_interpolation_1d3 */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_motohawk_interpolation_1d1_kr = TableInterpolation1D_real_T
      (rtb_motohawk_prelookup2, (real_T *) ((ETCReqFallRateTbl_DataStore())), 9);
    (ETCReqFallRate_DataStore()) = rtb_motohawk_interpolation_1d1_kr;
  }

  /* MinMax: '<S411>/MinMax' */
  rtb_Sum_pd = (rtb_Product1_f >= rtb_motohawk_interpolation_1d1_kr) || rtIsNaN
    (rtb_motohawk_interpolation_1d1_kr) ? rtb_Product1_f :
    rtb_motohawk_interpolation_1d1_kr;

  /* S-Function Block: <S394>/motohawk_interpolation_1d1 */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_motohawk_interpolation_1d1_kr = TableInterpolation1D_real_T
      (rtb_motohawk_prelookup2, (real_T *) ((ETCReqRiseRateTbl_DataStore())), 9);
    (ETCReqRiseRate_DataStore()) = rtb_motohawk_interpolation_1d1_kr;
  }

  /* Sum: '<S410>/Sum2' incorporates:
   *  MinMax: '<S411>/MinMax'
   *  MinMax: '<S411>/MinMax1'
   *  Product: '<S410>/Product'
   *  S-Function (motohawk_sfun_delta_time): '<S410>/motohawk_delta_time'
   */
  BaseEngineController_A02_bak2_B.s410_Sum2 = ((rtb_Sum_pd <=
    rtb_motohawk_interpolation_1d1_kr) || rtIsNaN
    (rtb_motohawk_interpolation_1d1_kr) ? rtb_Sum_pd :
    rtb_motohawk_interpolation_1d1_kr) * rtb_motohawk_delta_time_a5 +
    rtb_UnitDelay_hp;

  /* UnitDelay: '<S394>/Unit Delay1' */
  rtb_Product1_f = BaseEngineController_A02_bak2_DWork.s394_UnitDelay1_DSTATE;

  /* UnitDelay: '<S394>/Unit Delay3' */
  rtb_Product1_i = BaseEngineController_A02_bak2_DWork.s394_UnitDelay3_DSTATE;

  /* UnitDelay: '<S394>/Unit Delay4' */
  rtb_UnitDelay4_o = BaseEngineController_A02_bak2_DWork.s394_UnitDelay4_DSTATE;

  /* Update for UnitDelay: '<S394>/Unit Delay2' */
  BaseEngineController_A02_bak2_DWork.s394_UnitDelay2_DSTATE = rtb_Product1_f;

  /* Update for UnitDelay: '<S407>/Unit Delay' */
  BaseEngineController_A02_bak2_DWork.s407_UnitDelay_DSTATE = rtb_Sum1_j;

  /* Update for UnitDelay: '<S410>/Unit Delay' */
  BaseEngineController_A02_bak2_DWork.s410_UnitDelay_DSTATE =
    BaseEngineController_A02_bak2_B.s410_Sum2;

  /* Update for UnitDelay: '<S394>/Unit Delay1' */
  BaseEngineController_A02_bak2_DWork.s394_UnitDelay1_DSTATE = rtb_Product1_i;

  /* Update for UnitDelay: '<S394>/Unit Delay3' */
  BaseEngineController_A02_bak2_DWork.s394_UnitDelay3_DSTATE = rtb_UnitDelay4_o;

  /* Update for UnitDelay: '<S394>/Unit Delay4' */
  BaseEngineController_A02_bak2_DWork.s394_UnitDelay4_DSTATE =
    rtb_motohawk_interpolation_1d2_m;

  /* End of Outputs for SubSystem: '<S350>/Base TPS Request' */

  /* UnitDelay: '<S401>/Unit Delay' */
  rtb_Product1_f = BaseEngineController_A02_bak2_DWork.s401_UnitDelay_DSTATE;

  /* Sum: '<S401>/Sum' incorporates:
   *  Constant: '<S401>/Constant'
   *  S-Function (motohawk_sfun_calibration): '<S401>/motohawk_calibration'
   */
  rtb_Product1_i = 1.0 - (O2DelagFilterConst_DataStore());

  /* S-Function Block: <S621>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_bak2_DWork.s621_motohawk_delta_time_DWORK1,
       NULL);
    rtb_DataTypeConversion_fc = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S621>/Product' incorporates:
   *  MinMax: '<S621>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S621>/motohawk_calibration'
   */
  rtb_DataTypeConversion_fc /= (rtb_DataTypeConversion_fc >=
    (O2_PostCatFiltConst_DataStore())) || rtIsNaN((O2_PostCatFiltConst_DataStore
    ())) ? rtb_DataTypeConversion_fc : (O2_PostCatFiltConst_DataStore());

  /* Logic: '<S619>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S619>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S619>/motohawk_fault_status4'
   */
  rtb_RelOp_em = (IsFaultActive(73) || IsFaultActive(74));

  /* Logic: '<S619>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S619>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S619>/motohawk_fault_status3'
   */
  rtb_RelationalOperator2_m = (IsFaultSuspected(73) || IsFaultSuspected(74));

  /* S-Function Block: <S437>/motohawk_ain3 Resource: PreO2Pin */
  {
    extern NativeError_S PreO2Pin_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    PreO2Pin_AnalogInput_Get(&BaseEngineController_A02_bak2_B.s437_motohawk_ain3,
      NULL);
  }

  /* DataTypeConversion: '<S619>/Data Type Conversion' */
  rtb_DataTypeConversion_e = (real_T)
    BaseEngineController_A02_bak2_B.s437_motohawk_ain3;

  /* S-Function Block: <S626>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (O2_PostCatIdx_DataStore()) = TablePrelookup_real_T(rtb_DataTypeConversion_e,
      (O2_PostCatIdxArr_DataStore()), 20, (O2_PostCatIdx_DataStore()));
    rtb_motohawk_prelookup_mo = (O2_PostCatIdx_DataStore());
  }

  /* S-Function Block: <S626>/motohawk_interpolation_1d */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    BaseEngineController_A02_bak2_B.s626_motohawk_interpolation_1d =
      TableInterpolation1D_real_T(rtb_motohawk_prelookup_mo, (real_T *)
      ((O2_PostCatTbl_DataStore())), 20);
  }

  /* UnitDelay: '<S619>/Unit Delay' */
  rtb_UnitDelay_be = BaseEngineController_A02_bak2_DWork.s619_UnitDelay_DSTATE;

  /* If: '<S619>/If' incorporates:
   *  Logic: '<S619>/Logical Operator5'
   *  Logic: '<S619>/Logical Operator6'
   */
  if ((!rtb_RelOp_em) && rtb_RelationalOperator2_m) {
    /* Outputs for IfAction SubSystem: '<S619>/If Action Subsystem' incorporates:
     *  ActionPort: '<S622>/Action Port'
     */
    BaseEngineController_A02_bak2_IfActionSubsystem(rtb_UnitDelay_be,
      &rtb_Merge_l);

    /* End of Outputs for SubSystem: '<S619>/If Action Subsystem' */
  } else if (rtb_RelOp_em) {
    /* Outputs for IfAction SubSystem: '<S619>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S623>/Action Port'
     */
    BaseEngineController_A02_bak2_IfActionSubsystem((O2_PostCatDefault_DataStore
      ()), &rtb_Merge_l);

    /* End of Outputs for SubSystem: '<S619>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S619>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S624>/Action Port'
     */
    BaseEngineController_A02_bak2_IfActionSubsystem
      (BaseEngineController_A02_bak2_B.s626_motohawk_interpolation_1d,
       &rtb_Merge_l);

    /* End of Outputs for SubSystem: '<S619>/If Action Subsystem2' */
  }

  /* End of If: '<S619>/If' */

  /* Sum: '<S627>/Sum1' incorporates:
   *  Constant: '<S627>/Constant'
   *  Product: '<S627>/Product'
   *  Product: '<S627>/Product1'
   *  Sum: '<S627>/Sum'
   *  UnitDelay: '<S627>/Unit Delay'
   */
  rtb_Sum1_p1 = (1.0 - rtb_DataTypeConversion_fc) *
    BaseEngineController_A02_bak2_DWork.s627_UnitDelay_DSTATE + rtb_Merge_l *
    rtb_DataTypeConversion_fc;

  /* If: '<S625>/If' incorporates:
   *  Inport: '<S628>/In1'
   *  Inport: '<S629>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S625>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S625>/override_enable'
   */
  if ((O2_PostCat_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S625>/NewValue' incorporates:
     *  ActionPort: '<S628>/Action Port'
     */
    BaseEngineController_A02_bak2_B.s625_Merge = (O2_PostCat_new_DataStore());

    /* End of Outputs for SubSystem: '<S625>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S625>/OldValue' incorporates:
     *  ActionPort: '<S629>/Action Port'
     */
    BaseEngineController_A02_bak2_B.s625_Merge = rtb_Sum1_p1;

    /* End of Outputs for SubSystem: '<S625>/OldValue' */
  }

  /* End of If: '<S625>/If' */

  /* Sum: '<S401>/Sum1' incorporates:
   *  Product: '<S401>/Product'
   *  Product: '<S401>/Product1'
   *  S-Function (motohawk_sfun_calibration): '<S401>/motohawk_calibration'
   */
  BaseEngineController_A02_bak2_B.s401_Sum1 = rtb_Product1_f * rtb_Product1_i +
    (O2DelagFilterConst_DataStore()) *
    BaseEngineController_A02_bak2_B.s625_Merge;

  /* S-Function Block: <S423>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_bak2_DWork.s423_motohawk_delta_time_DWORK1,
       NULL);
    rtb_motohawk_delta_time_fh = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S423>/Switch' incorporates:
   *  Constant: '<S422>/Constant'
   *  Constant: '<S423>/Constant'
   *  RelationalOperator: '<S422>/RelOp'
   *  S-Function (motohawk_sfun_data_read): '<S405>/motohawk_data_read'
   *  S-Function (motohawk_sfun_data_read): '<S423>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S423>/motohawk_delta_time'
   *  Sum: '<S423>/Sum'
   */
  if (((uint8_T)EngineState_DataStore()) == 3) {
    BaseEngineController_A02_bak2_B.s423_Switch = rtb_motohawk_delta_time_fh +
      TimeSinceRunTimer_DataStore();
  } else {
    BaseEngineController_A02_bak2_B.s423_Switch = 0.0;
  }

  /* End of Switch: '<S423>/Switch' */
  /* S-Function Block: <S390>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (RPM09In_DataStore()) = BaseEngineController_A02_bak2_B.s538_Sum1;
    (RPM09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_bak2_B.s538_Sum1, (RPM09IdxArr_DataStore()), 9,
       (RPM09Idx_DataStore()));
    BaseEngineController_A02_bak2_B.s390_motohawk_prelookup1 =
      (RPM09Idx_DataStore());
  }

  /* S-Function Block: <S390>/motohawk_prelookup5 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (RPM17In_DataStore()) = BaseEngineController_A02_bak2_B.s538_Sum1;
    (RPM17Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_bak2_B.s538_Sum1, (RPM17IdxArr_DataStore()), 17,
       (RPM17Idx_DataStore()));
    BaseEngineController_A02_bak2_B.s390_Indexes = (RPM17Idx_DataStore());
  }

  /* S-Function Block: <S388>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (ECT05In_DataStore()) = BaseEngineController_A02_bak2_B.s637_Merge;
    (ECT05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_bak2_B.s637_Merge, (ECT05IdxArr_DataStore()), 5,
       (ECT05Idx_DataStore()));
    BaseEngineController_A02_bak2_B.s388_motohawk_prelookup =
      (ECT05Idx_DataStore());
  }

  /* S-Function Block: <S389>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (IAT05In_DataStore()) = BaseEngineController_A02_bak2_B.s655_Merge;
    (IAT05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_bak2_B.s655_Merge, (IAT05IdxArr_DataStore()), 5,
       (IAT05Idx_DataStore()));
    BaseEngineController_A02_bak2_B.s389_motohawk_prelookup =
      (IAT05Idx_DataStore());
  }

  /* S-Function (motohawk_sfun_data_read): '<S347>/motohawk_data_read1' */
  BaseEngineController_A02_bak2_B.s347_motohawk_data_read1 =
    EngineState_DataStore();

  /* S-Function Block: <S347>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_bak2_DWork.s347_motohawk_delta_time_DWORK1,
       NULL);
    BaseEngineController_A02_bak2_B.s347_motohawk_delta_time = ((real_T) delta) *
      0.000001;
  }

  /* Stateflow: '<S347>/Baro Stall State Delay' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S347>/motohawk_calibration'
   */

  /* Gateway: Foreground/Control/VirtualSensors/AirCalcs/Baro Stall State Delay */
  /* During: Foreground/Control/VirtualSensors/AirCalcs/Baro Stall State Delay */
  switch
    (BaseEngineController_A02_bak2_DWork.s352_is_c19_BaseEngineController_A02_bak2)
  {
   case BaseEngineController_A02_bak2_IN_CrankRun:
    /* During 'CrankRun': '<S352>:2' */
    if (BaseEngineController_A02_bak2_B.s347_motohawk_data_read1 == 1) {
      /* Transition: '<S352>:6' */
      BaseEngineController_A02_bak2_DWork.s352_is_c19_BaseEngineController_A02_bak2
        = BaseEngineController_A02_bak2_IN_StallDelay;

      /* Entry 'StallDelay': '<S352>:3' */
      BaseEngineController_A02_bak2_B.s352_Enable = FALSE;
      BaseEngineController_A02_bak2_B.s352_Timer = 0.0;
      BaseEngineController_A02_bak2_DWork.s352_TOld = 0.0;
    }
    break;

   case BaseEngineController_A02_bak2_IN_Stall:
    /* During 'Stall': '<S352>:1' */
    if (BaseEngineController_A02_bak2_B.s347_motohawk_data_read1 > 1) {
      /* Transition: '<S352>:5' */
      BaseEngineController_A02_bak2_DWork.s352_is_c19_BaseEngineController_A02_bak2
        = BaseEngineController_A02_bak2_IN_CrankRun;

      /* Entry 'CrankRun': '<S352>:2' */
      BaseEngineController_A02_bak2_B.s352_Enable = FALSE;
    }
    break;

   case BaseEngineController_A02_bak2_IN_StallDelay:
    /* During 'StallDelay': '<S352>:3' */
    if (BaseEngineController_A02_bak2_B.s347_motohawk_data_read1 > 1) {
      /* Transition: '<S352>:8' */
      BaseEngineController_A02_bak2_DWork.s352_is_c19_BaseEngineController_A02_bak2
        = BaseEngineController_A02_bak2_IN_CrankRun;

      /* Entry 'CrankRun': '<S352>:2' */
      BaseEngineController_A02_bak2_B.s352_Enable = FALSE;
    } else if (((BaseEngineController_A02_bak2_B.s347_motohawk_data_read1 == 1)
                & (BaseEngineController_A02_bak2_B.s352_Timer >
                   (BaroRunStallDelay_DataStore()))) != 0) {
      /* Transition: '<S352>:7' */
      BaseEngineController_A02_bak2_DWork.s352_is_c19_BaseEngineController_A02_bak2
        = BaseEngineController_A02_bak2_IN_Stall;

      /* Entry 'Stall': '<S352>:1' */
      BaseEngineController_A02_bak2_B.s352_Enable = TRUE;
    } else {
      BaseEngineController_A02_bak2_B.s352_Timer =
        BaseEngineController_A02_bak2_DWork.s352_TOld +
        BaseEngineController_A02_bak2_B.s347_motohawk_delta_time;
      BaseEngineController_A02_bak2_DWork.s352_TOld =
        BaseEngineController_A02_bak2_B.s352_Timer;
    }
    break;

   default:
    /* Transition: '<S352>:4' */
    BaseEngineController_A02_bak2_DWork.s352_is_c19_BaseEngineController_A02_bak2
      = BaseEngineController_A02_bak2_IN_Stall;

    /* Entry 'Stall': '<S352>:1' */
    BaseEngineController_A02_bak2_B.s352_Enable = TRUE;
    break;
  }

  /* End of Stateflow: '<S347>/Baro Stall State Delay' */
  /* Logic: '<S543>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S543>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S543>/motohawk_fault_status4'
   */
  rtb_RelOp_em = (IsFaultActive(63) || IsFaultActive(64));

  /* Logic: '<S543>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S543>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S543>/motohawk_fault_status3'
   */
  rtb_RelationalOperator2_m = (IsFaultSuspected(63) || IsFaultSuspected(64));

  /* S-Function Block: <S436>/motohawk_ain_read1 Resource: MAPSensorPin */
  {
    extern NativeError_S MAPSensorPin_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    MAPSensorPin_AnalogInput_Get
      (&BaseEngineController_A02_bak2_B.s436_motohawk_ain_read1, NULL);
  }

  /* DataTypeConversion: '<S543>/Data Type Conversion' */
  rtb_DataTypeConversion_fc = (real_T)
    BaseEngineController_A02_bak2_B.s436_motohawk_ain_read1;

  /* Product: '<S543>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S543>/motohawk_calibration4'
   */
  rtb_Product1_f = rtb_DataTypeConversion_fc * (MAPTimeGain_DataStore());

  /* Sum: '<S543>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S543>/motohawk_calibration5'
   */
  BaseEngineController_A02_bak2_B.s543_Sum1 = rtb_Product1_f +
    (MAPTimeOfst_DataStore());

  /* UnitDelay: '<S543>/Unit Delay1' */
  rtb_UnitDelay1_dx = BaseEngineController_A02_bak2_DWork.s543_UnitDelay1_DSTATE;

  /* If: '<S543>/If' incorporates:
   *  Logic: '<S543>/Logical Operator5'
   *  Logic: '<S543>/Logical Operator6'
   */
  if ((!rtb_RelOp_em) && rtb_RelationalOperator2_m) {
    /* Outputs for IfAction SubSystem: '<S543>/If Action Subsystem' incorporates:
     *  ActionPort: '<S586>/Action Port'
     */
    BaseEngineController_A02_bak2_IfActionSubsystem(rtb_UnitDelay1_dx,
      &rtb_Merge_hk);

    /* End of Outputs for SubSystem: '<S543>/If Action Subsystem' */
  } else if (rtb_RelOp_em) {
    /* Outputs for IfAction SubSystem: '<S543>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S587>/Action Port'
     */
    BaseEngineController_A02_bak2_IfActionSubsystem((MAPTimeDfltValue_DataStore()),
      &rtb_Merge_hk);

    /* End of Outputs for SubSystem: '<S543>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S543>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S588>/Action Port'
     */
    BaseEngineController_A02_bak2_IfActionSubsystem
      (BaseEngineController_A02_bak2_B.s543_Sum1, &rtb_Merge_hk);

    /* End of Outputs for SubSystem: '<S543>/If Action Subsystem2' */
  }

  /* End of If: '<S543>/If' */

  /* Outputs for Enabled SubSystem: '<S347>/Capture Signal At Startup' incorporates:
   *  EnablePort: '<S353>/Enable'
   */
  if (BaseEngineController_A02_bak2_B.s352_Enable) {
    if (!BaseEngineController_A02_bak2_DWork.s347_CaptureSignalAtStartup_MODE) {
      /* InitializeConditions for UnitDelay: '<S353>/Unit Delay' */
      BaseEngineController_A02_bak2_DWork.s353_UnitDelay_DSTATE = 0;
      BaseEngineController_A02_bak2_DWork.s347_CaptureSignalAtStartup_MODE =
        TRUE;
    }

    /* Sum: '<S353>/Add' incorporates:
     *  Constant: '<S353>/TwoSampleBuffer ToIgnore'
     *  S-Function (motohawk_sfun_calibration): '<S353>/motohawk_calibration'
     */
    rtb_Add_b = (int8_T)(((int8_T)(BARO_Count_DataStore())) + 2);

    /* Sum: '<S353>/Sum' incorporates:
     *  Constant: '<S353>/Constant'
     *  UnitDelay: '<S353>/Unit Delay'
     */
    rtb_Sum_gcg = (int8_T)
      (BaseEngineController_A02_bak2_DWork.s353_UnitDelay_DSTATE + 1);

    /* RelationalOperator: '<S353>/Relational Operator' */
    rtb_RelationalOperator2_m = (rtb_Sum_gcg <= rtb_Add_b);

    /* Switch: '<S353>/Switch' */
    if (rtb_RelationalOperator2_m) {
      rtb_Add_b = rtb_Sum_gcg;
    }

    /* End of Switch: '<S353>/Switch' */

    /* Outputs for Enabled SubSystem: '<S353>/Collect Average' incorporates:
     *  EnablePort: '<S356>/Enable'
     */
    /* Logic: '<S353>/Logical Operator' incorporates:
     *  Constant: '<S353>/TwoSampleBuffer ToIgnore'
     *  RelationalOperator: '<S353>/Relational Operator1'
     */
    if (rtb_RelationalOperator2_m && (rtb_Sum_gcg > 2)) {
      if (!BaseEngineController_A02_bak2_DWork.s353_CollectAverage_MODE) {
        /* InitializeConditions for UnitDelay: '<S356>/Unit Delay1' */
        BaseEngineController_A02_bak2_DWork.s356_UnitDelay1_DSTATE = 0.0;
        BaseEngineController_A02_bak2_DWork.s353_CollectAverage_MODE = TRUE;
      }

      /* Sum: '<S356>/Sum1' incorporates:
       *  UnitDelay: '<S356>/Unit Delay1'
       */
      rtb_Product1_f = rtb_Merge_hk +
        BaseEngineController_A02_bak2_DWork.s356_UnitDelay1_DSTATE;

      /* Product: '<S356>/Product' incorporates:
       *  DataTypeConversion: '<S356>/Data Type Conversion'
       *  Sum: '<S353>/Add1'
       */
      BaseEngineController_A02_bak2_B.s356_Product = 1.0 / (real_T)(int8_T)
        (rtb_Add_b - 2) * rtb_Product1_f;

      /* Update for UnitDelay: '<S356>/Unit Delay1' */
      BaseEngineController_A02_bak2_DWork.s356_UnitDelay1_DSTATE =
        rtb_Product1_f;
    } else {
      if (BaseEngineController_A02_bak2_DWork.s353_CollectAverage_MODE) {
        BaseEngineController_A02_bak2_DWork.s353_CollectAverage_MODE = FALSE;
      }
    }

    /* End of Logic: '<S353>/Logical Operator' */
    /* End of Outputs for SubSystem: '<S353>/Collect Average' */

    /* Update for UnitDelay: '<S353>/Unit Delay' */
    BaseEngineController_A02_bak2_DWork.s353_UnitDelay_DSTATE = rtb_Add_b;
  } else {
    if (BaseEngineController_A02_bak2_DWork.s347_CaptureSignalAtStartup_MODE) {
      /* Disable for Enabled SubSystem: '<S353>/Collect Average' */
      BaseEngineController_A02_bak2_DWork.s353_CollectAverage_MODE = FALSE;

      /* End of Disable for SubSystem: '<S353>/Collect Average' */
      BaseEngineController_A02_bak2_DWork.s347_CaptureSignalAtStartup_MODE =
        FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S347>/Capture Signal At Startup' */

  /* If: '<S355>/If' incorporates:
   *  Inport: '<S362>/In1'
   *  Inport: '<S363>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S355>/override_enable'
   *  UnitDelay: '<S355>/Unit Delay'
   */
  if ((BARO_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S355>/NewValue' incorporates:
     *  ActionPort: '<S362>/Action Port'
     */
    rtb_Merge_j3 = BaseEngineController_A02_bak2_DWork.s355_UnitDelay_DSTATE;

    /* End of Outputs for SubSystem: '<S355>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S355>/OldValue' incorporates:
     *  ActionPort: '<S363>/Action Port'
     */
    rtb_Merge_j3 = BaseEngineController_A02_bak2_B.s356_Product;

    /* End of Outputs for SubSystem: '<S355>/OldValue' */
  }

  /* End of If: '<S355>/If' */

  /* Sum: '<S355>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S355>/offset'
   */
  BaseEngineController_A02_bak2_B.s355_Sum = rtb_Merge_j3 +
    (BARO_offset_DataStore());

  /* Saturate: '<S347>/Saturation1' */
  rtb_Saturation1 = BaseEngineController_A02_bak2_B.s355_Sum >= 1.0 ?
    BaseEngineController_A02_bak2_B.s355_Sum : 1.0;

  /* S-Function Block: <S577>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_bak2_DWork.s577_motohawk_delta_time_DWORK1,
       NULL);
    rtb_Switch_dx = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S577>/Product' incorporates:
   *  MinMax: '<S577>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S577>/motohawk_calibration'
   */
  rtb_Switch_dx /= (rtb_Switch_dx >= (MAPFilterConst_DataStore())) || rtIsNaN
    ((MAPFilterConst_DataStore())) ? rtb_Switch_dx : (MAPFilterConst_DataStore());

  /* Logic: '<S542>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S542>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S542>/motohawk_fault_status4'
   */
  rtb_RelOp_em = (IsFaultActive(61) || IsFaultActive(62));

  /* Logic: '<S542>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S542>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S542>/motohawk_fault_status3'
   */
  rtb_RelationalOperator2_m = (IsFaultSuspected(61) || IsFaultSuspected(62));

  /* S-Function (motohawk_sfun_trigger): '<S544>/motohawk_trigger5' */
  /* Enable for Trigger_FGND_MID_TDC_EVENT_8346p0002 */
  if (BaseEngineController_A02_bak2_DWork.s544_motohawk_trigger5_DWORK1 == 0) {
    BaseEngineController_A02_bak2_DWork.s544_motohawk_trigger5_DWORK1 = 1;
  }

  /* Product: '<S542>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S542>/motohawk_calibration4'
   */
  rtb_Product1_f = BaseEngineController_A02_bak2_B.s544_Merge *
    (MAPGain_DataStore());

  /* Sum: '<S542>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S542>/motohawk_calibration5'
   */
  BaseEngineController_A02_bak2_B.s542_Sum1 = rtb_Product1_f +
    (MAPOfst_DataStore());

  /* UnitDelay: '<S542>/Unit Delay1' */
  rtb_UnitDelay1_j = BaseEngineController_A02_bak2_DWork.s542_UnitDelay1_DSTATE;

  /* If: '<S542>/If' incorporates:
   *  Logic: '<S542>/Logical Operator5'
   *  Logic: '<S542>/Logical Operator6'
   */
  if ((!rtb_RelOp_em) && rtb_RelationalOperator2_m) {
    /* Outputs for IfAction SubSystem: '<S542>/If Action Subsystem' incorporates:
     *  ActionPort: '<S578>/Action Port'
     */
    BaseEngineController_A02_bak2_IfActionSubsystem(rtb_UnitDelay1_j,
      &rtb_Merge_ou);

    /* End of Outputs for SubSystem: '<S542>/If Action Subsystem' */
  } else if (rtb_RelOp_em) {
    /* Outputs for IfAction SubSystem: '<S542>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S579>/Action Port'
     */
    BaseEngineController_A02_bak2_IfActionSubsystem((MAPDfltValue_DataStore()),
      &rtb_Merge_ou);

    /* End of Outputs for SubSystem: '<S542>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S542>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S580>/Action Port'
     */
    BaseEngineController_A02_bak2_IfActionSubsystem
      (BaseEngineController_A02_bak2_B.s542_Sum1, &rtb_Merge_ou);

    /* End of Outputs for SubSystem: '<S542>/If Action Subsystem2' */
  }

  /* End of If: '<S542>/If' */

  /* Sum: '<S582>/Sum1' incorporates:
   *  Constant: '<S582>/Constant'
   *  Product: '<S582>/Product'
   *  Product: '<S582>/Product1'
   *  Sum: '<S582>/Sum'
   *  UnitDelay: '<S582>/Unit Delay'
   */
  rtb_Sum1_pe = (1.0 - rtb_Switch_dx) *
    BaseEngineController_A02_bak2_DWork.s582_UnitDelay_DSTATE + rtb_Merge_ou *
    rtb_Switch_dx;

  /* If: '<S581>/If' incorporates:
   *  Inport: '<S583>/In1'
   *  Inport: '<S584>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S581>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S581>/override_enable'
   */
  if ((MAP_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S581>/NewValue' incorporates:
     *  ActionPort: '<S583>/Action Port'
     */
    BaseEngineController_A02_bak2_B.s581_Merge = (MAP_new_DataStore());

    /* End of Outputs for SubSystem: '<S581>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S581>/OldValue' incorporates:
     *  ActionPort: '<S584>/Action Port'
     */
    BaseEngineController_A02_bak2_B.s581_Merge = rtb_Sum1_pe;

    /* End of Outputs for SubSystem: '<S581>/OldValue' */
  }

  /* End of If: '<S581>/If' */

  /* Product: '<S354>/Pressure Ratio' */
  BaseEngineController_A02_bak2_B.s354_PressureRatio =
    BaseEngineController_A02_bak2_B.s581_Merge / rtb_Saturation1;

  /* S-Function Block: <S354>/motohawk_prelookup2 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (PortPressRatio17In_DataStore()) =
      BaseEngineController_A02_bak2_B.s354_PressureRatio;
    (PortPressRatio17Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_bak2_B.s354_PressureRatio,
       (PortPressRatio17IdxArr_DataStore()), 17, (PortPressRatio17Idx_DataStore()));
    rtb_motohawk_prelookup2_o = (PortPressRatio17Idx_DataStore());
  }

  /* S-Function Block: <S354>/motohawk_interpolation_2d */
  {
    extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
      real_T *map_data, uint32_T row_sz, uint32_T col_sz);
    rtb_motohawk_interpolation_2d = TableInterpolation2D_real_T
      (rtb_motohawk_prelookup2_o, BaseEngineController_A02_bak2_B.s390_Indexes,
       (real_T *) ((VolEffMap_DataStore())), 17, 17);
    (VolEff_DataStore()) = rtb_motohawk_interpolation_2d;
  }

  /* S-Function Block: <S354>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (BARO09Idx_DataStore()) = TablePrelookup_real_T(rtb_Saturation1,
      (BARO09IdxArr_DataStore()), 9, (BARO09Idx_DataStore()));
    rtb_motohawk_prelookup1_b = (BARO09Idx_DataStore());
  }

  /* S-Function Block: <S354>/motohawk_interpolation_1d1 */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_motohawk_interpolation_1d1_o = TableInterpolation1D_real_T
      (rtb_motohawk_prelookup1_b, (real_T *) ((VEBaroCorrTbl_DataStore())), 9);
    (VEBaroCorr_DataStore()) = rtb_motohawk_interpolation_1d1_o;
  }

  /* S-Function Block: <S389>/motohawk_prelookup2 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (IAT17In_DataStore()) = BaseEngineController_A02_bak2_B.s655_Merge;
    (IAT17Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_bak2_B.s655_Merge, (IAT17IdxArr_DataStore()), 17,
       (IAT17Idx_DataStore()));
    rtb_motohawk_prelookup2_j = (IAT17Idx_DataStore());
  }

  /* S-Function Block: <S354>/motohawk_interpolation_1d2 */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_motohawk_interpolation_1d2_o = TableInterpolation1D_real_T
      (rtb_motohawk_prelookup2_j, (real_T *) ((VETempCorrTbl_DataStore())), 17);
    (VETempCorr_DataStore()) = rtb_motohawk_interpolation_1d2_o;
  }

  /* Product: '<S354>/Nominal Air Flow Rate' incorporates:
   *  Constant: '<S354>/Gas Const [J//kg-K]'
   *  Constant: '<S354>/Units Equivalency Factor'
   *  DataTypeConversion: '<S354>/Data Type Conversion'
   *  Fcn: '<S358>/C to K'
   *  S-Function (motohawk_sfun_data_read): '<S354>/Cylinder Swept Volume [cm3]'
   *  S-Function (motohawk_sfun_data_read): '<S354>/Number of Combustion Events Per Revolution'
   *  S-Function (motohawk_sfun_interpolation_1d): '<S354>/motohawk_interpolation_1d1'
   *  S-Function (motohawk_sfun_interpolation_1d): '<S354>/motohawk_interpolation_1d2'
   *  S-Function (motohawk_sfun_prelookup): '<S354>/motohawk_prelookup1'
   *  S-Function (motohawk_sfun_prelookup): '<S389>/motohawk_prelookup2'
   */
  BaseEngineController_A02_bak2_B.s354_NominalAirFlowRate =
    BaseEngineController_A02_bak2_B.s538_Sum1 *
    BaseEngineController_A02_bak2_B.s581_Merge *
    rtb_motohawk_interpolation_1d1_o * rtb_motohawk_interpolation_1d2_o *
    CylSweptVol_DataStore() * (real_T)((uint8_T)CombEventsPerRev_DataStore()) /
    (BaseEngineController_A02_bak2_B.s655_Merge + 273.2) / 60.0 / 287.0;

  /* Product: '<S354>/Model Air Mass Flow Rate' incorporates:
   *  S-Function (motohawk_sfun_interpolation_2d): '<S354>/motohawk_interpolation_2d'
   *  S-Function (motohawk_sfun_prelookup): '<S354>/motohawk_prelookup2'
   */
  BaseEngineController_A02_bak2_B.s354_ModelAirMassFlowRate =
    rtb_motohawk_interpolation_2d *
    BaseEngineController_A02_bak2_B.s354_NominalAirFlowRate;

  /* S-Function Block: <S511>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_bak2_DWork.s511_motohawk_delta_time_DWORK1,
       NULL);
    rtb_Switch_dx = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S511>/Product' incorporates:
   *  MinMax: '<S511>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S511>/motohawk_calibration'
   */
  rtb_Switch_dx /= (rtb_Switch_dx >= (MAFFiltConst_DataStore())) || rtIsNaN
    ((MAFFiltConst_DataStore())) ? rtb_Switch_dx : (MAFFiltConst_DataStore());

  /* Logic: '<S447>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S447>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S447>/motohawk_fault_status4'
   */
  rtb_RelOp_em = (IsFaultActive(59) || IsFaultActive(60));

  /* Logic: '<S447>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S447>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S447>/motohawk_fault_status3'
   */
  rtb_RelationalOperator2_m = (IsFaultSuspected(59) || IsFaultSuspected(60));

  /* S-Function Block: <S434>/motohawk_frequency_in2 Frequency Input Get: MAF_Pin */
  {
    extern NativeError_S MAF_Pin_FrequencyInput_Get(uint32_T *frequency, int16_T
      *duty_cycle);
    MAF_Pin_FrequencyInput_Get(&rtb_DataTypeConversion6,
      &rtb_DataTypeConversion2_h);
  }

  /* DataTypeConversion: '<S434>/Data Type Conversion' */
  rtb_Switch_ns = (real_T)rtb_DataTypeConversion6;

  /* Gain: '<S434>/Gain' */
  BaseEngineController_A02_bak2_B.s434_Gain = 0.01 * rtb_Switch_ns;

  /* S-Function Block: <S516>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (MAFIdx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_bak2_B.s434_Gain, (MAFIdxArr_DataStore()), 13,
       (MAFIdx_DataStore()));
    rtb_motohawk_prelookup_e = (MAFIdx_DataStore());
  }

  /* S-Function Block: <S516>/motohawk_interpolation_1d */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    BaseEngineController_A02_bak2_B.s516_motohawk_interpolation_1d =
      TableInterpolation1D_real_T(rtb_motohawk_prelookup_e, (real_T *)
      ((MAFTbl_DataStore())), 13);
  }

  /* UnitDelay: '<S447>/Unit Delay' */
  rtb_UnitDelay_fi = BaseEngineController_A02_bak2_DWork.s447_UnitDelay_DSTATE;

  /* If: '<S447>/If' incorporates:
   *  Logic: '<S447>/Logical Operator5'
   *  Logic: '<S447>/Logical Operator6'
   */
  if ((!rtb_RelOp_em) && rtb_RelationalOperator2_m) {
    /* Outputs for IfAction SubSystem: '<S447>/If Action Subsystem' incorporates:
     *  ActionPort: '<S512>/Action Port'
     */
    BaseEngineController_A02_bak2_IfActionSubsystem(rtb_UnitDelay_fi,
      &rtb_Merge_k);

    /* End of Outputs for SubSystem: '<S447>/If Action Subsystem' */
  } else if (rtb_RelOp_em) {
    /* Outputs for IfAction SubSystem: '<S447>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S513>/Action Port'
     */
    BaseEngineController_A02_bak2_IfActionSubsystem((MAFDefault_DataStore()),
      &rtb_Merge_k);

    /* End of Outputs for SubSystem: '<S447>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S447>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S514>/Action Port'
     */
    BaseEngineController_A02_bak2_IfActionSubsystem
      (BaseEngineController_A02_bak2_B.s516_motohawk_interpolation_1d,
       &rtb_Merge_k);

    /* End of Outputs for SubSystem: '<S447>/If Action Subsystem2' */
  }

  /* End of If: '<S447>/If' */

  /* Sum: '<S517>/Sum1' incorporates:
   *  Constant: '<S517>/Constant'
   *  Product: '<S517>/Product'
   *  Product: '<S517>/Product1'
   *  Sum: '<S517>/Sum'
   *  UnitDelay: '<S517>/Unit Delay'
   */
  rtb_Sum1_kl = (1.0 - rtb_Switch_dx) *
    BaseEngineController_A02_bak2_DWork.s517_UnitDelay_DSTATE + rtb_Merge_k *
    rtb_Switch_dx;

  /* If: '<S515>/If' incorporates:
   *  Inport: '<S518>/In1'
   *  Inport: '<S519>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S515>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S515>/override_enable'
   */
  if ((MAF_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S515>/NewValue' incorporates:
     *  ActionPort: '<S518>/Action Port'
     */
    BaseEngineController_A02_bak2_B.s515_Merge = (MAF_new_DataStore());

    /* End of Outputs for SubSystem: '<S515>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S515>/OldValue' incorporates:
     *  ActionPort: '<S519>/Action Port'
     */
    BaseEngineController_A02_bak2_B.s515_Merge = rtb_Sum1_kl;

    /* End of Outputs for SubSystem: '<S515>/OldValue' */
  }

  /* End of If: '<S515>/If' */

  /* MultiPortSwitch: '<S354>/Multiport Switch' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S354>/motohawk_calibration1'
   */
  if (((uint8_T)(MAF_Source_DataStore())) == 0) {
    BaseEngineController_A02_bak2_B.s354_MultiportSwitch =
      BaseEngineController_A02_bak2_B.s354_ModelAirMassFlowRate;
  } else {
    BaseEngineController_A02_bak2_B.s354_MultiportSwitch =
      BaseEngineController_A02_bak2_B.s515_Merge;
  }

  /* End of MultiPortSwitch: '<S354>/Multiport Switch' */
  /* S-Function Block: <S367>/motohawk_delta_time */
  rtb_Switch_ns = 0.005;

  /* UnitDelay: '<S367>/Unit Delay2' */
  rtb_Product1_f = BaseEngineController_A02_bak2_DWork.s367_UnitDelay2_DSTATE;

  /* RelationalOperator: '<S367>/Relational Operator4' incorporates:
   *  UnitDelay: '<S367>/Unit Delay2'
   */
  BaseEngineController_A02_bak2_B.s367_RelationalOperator4 =
    ((BaseEngineController_A02_bak2_DWork.s367_UnitDelay2_DSTATE <
      BaseEngineController_A02_bak2_B.s538_Sum1));

  /* Outputs for Enabled SubSystem: '<S367>/IncreasingFilter' incorporates:
   *  EnablePort: '<S371>/Enable'
   */
  if (BaseEngineController_A02_bak2_B.s367_RelationalOperator4) {
    /* S-Function (motohawk_sfun_calibration): '<S371>/motohawk_calibration1' */
    BaseEngineController_A02_bak2_B.s367_Merge = (SSRPMIncFiltC_DataStore());
  }

  /* End of Outputs for SubSystem: '<S367>/IncreasingFilter' */

  /* Outputs for Enabled SubSystem: '<S367>/DecreasingFilter' incorporates:
   *  EnablePort: '<S369>/Enable'
   */
  /* RelationalOperator: '<S367>/Relational Operator3' */
  if (rtb_Product1_f > BaseEngineController_A02_bak2_B.s538_Sum1) {
    /* S-Function (motohawk_sfun_calibration): '<S369>/motohawk_calibration2' */
    BaseEngineController_A02_bak2_B.s367_Merge = (SSRPMDecFiltC_DataStore());
  }

  /* End of RelationalOperator: '<S367>/Relational Operator3' */
  /* End of Outputs for SubSystem: '<S367>/DecreasingFilter' */

  /* Product: '<S367>/Product' incorporates:
   *  MinMax: '<S367>/MinMax'
   */
  rtb_Switch_ns /= (rtb_Switch_ns >= BaseEngineController_A02_bak2_B.s367_Merge)
    || rtIsNaN(BaseEngineController_A02_bak2_B.s367_Merge) ? rtb_Switch_ns :
    BaseEngineController_A02_bak2_B.s367_Merge;

  /* Sum: '<S370>/Sum1' incorporates:
   *  Constant: '<S370>/Constant'
   *  Product: '<S370>/Product'
   *  Product: '<S370>/Product1'
   *  Sum: '<S370>/Sum'
   *  UnitDelay: '<S370>/Unit Delay'
   */
  BaseEngineController_A02_bak2_B.s370_Sum1 = (1.0 - rtb_Switch_ns) *
    BaseEngineController_A02_bak2_DWork.s370_UnitDelay_DSTATE +
    BaseEngineController_A02_bak2_B.s538_Sum1 * rtb_Switch_ns;

  /* Sum: '<S364>/Sum1' */
  rtb_Switch_ns = BaseEngineController_A02_bak2_B.s538_Sum1 -
    BaseEngineController_A02_bak2_B.s370_Sum1;

  /* Abs: '<S364>/Abs1' */
  rtb_Switch_ns = fabs(rtb_Switch_ns);

  /* RelationalOperator: '<S364>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S364>/Steady-state RPM Tolerance [RPM]'
   */
  rtb_RelationalOperator2_m = (rtb_Switch_ns <= (SSRPMTol_DataStore()));

  /* RelationalOperator: '<S364>/Relational Operator2' incorporates:
   *  Constant: '<S364>/Constant'
   */
  rtb_RelOp_js = (BaseEngineController_A02_bak2_B.s538_Sum1 > 0.0);

  /* Saturate: '<S375>/Saturation2' */
  rtb_Saturation2 = BaseEngineController_A02_bak2_B.s538_Sum1 >= 1.0 ?
    BaseEngineController_A02_bak2_B.s538_Sum1 : 1.0;

  /* DataTypeConversion: '<S365>/Data Type Conversion' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S365>/Number of Combustion Events Per Revolution'
   */
  rtb_Switch_ns = (real_T)((uint8_T)CombEventsPerRev_DataStore());

  /* Saturate: '<S375>/Saturation' */
  rtb_Saturation_d = rtb_Switch_ns >= 1.0 ? rtb_Switch_ns : 1.0;

  /* RelationalOperator: '<S378>/RelOp' incorporates:
   *  Constant: '<S378>/Constant'
   */
  rtb_RelOp_jb = (BaseEngineController_A02_bak2_B.s538_Sum1 != 0.0);

  /* Outputs for Enabled SubSystem: '<S375>/Multiply and Divide, avoiding divde by zero1' */
  BaseEngineController_A02_bak2_MultiplyandDivideavoidingdivdebyzero
    (rtb_RelOp_jb, BaseEngineController_A02_bak2_B.s354_MultiportSwitch, 60000.0,
     rtb_Saturation2, rtb_Saturation_d,
     &BaseEngineController_A02_bak2_B.s375_MultiplyandDivideavoidingdivdebyzero1);

  /* End of Outputs for SubSystem: '<S375>/Multiply and Divide, avoiding divde by zero1' */

  /* S-Function Block: <S365>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (APC_TPS10Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_bak2_B.s375_MultiplyandDivideavoidingdivdebyzero1.s205_chargemass,
       (APC_TPS10IdxArr_DataStore()), 10, (APC_TPS10Idx_DataStore()));
    rtb_motohawk_prelookup_l = (APC_TPS10Idx_DataStore());
  }

  /* S-Function Block: <S365>/motohawk_interpolation_1d */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_Torque = TableInterpolation1D_real_T(rtb_motohawk_prelookup_l, (real_T *)
      ((IndLoadTbl_DataStore())), 10);
    (IndLoad_DataStore()) = rtb_Torque;
  }

  /* S-Function Block: <S368>/motohawk_delta_time */
  rtb_Switch_ns = 0.005;

  /* UnitDelay: '<S368>/Unit Delay2' */
  rtb_Product1_f = BaseEngineController_A02_bak2_DWork.s368_UnitDelay2_DSTATE;

  /* RelationalOperator: '<S368>/Relational Operator4' incorporates:
   *  UnitDelay: '<S368>/Unit Delay2'
   */
  BaseEngineController_A02_bak2_B.s368_RelationalOperator4 =
    ((BaseEngineController_A02_bak2_DWork.s368_UnitDelay2_DSTATE < rtb_Torque));

  /* Outputs for Enabled SubSystem: '<S368>/IncreasingFilter' incorporates:
   *  EnablePort: '<S374>/Enable'
   */
  if (BaseEngineController_A02_bak2_B.s368_RelationalOperator4) {
    /* S-Function (motohawk_sfun_calibration): '<S374>/motohawk_calibration1' */
    BaseEngineController_A02_bak2_B.s368_Merge = (SSLoadIncFiltC_DataStore());
  }

  /* End of Outputs for SubSystem: '<S368>/IncreasingFilter' */

  /* Outputs for Enabled SubSystem: '<S368>/DecreasingFilter' incorporates:
   *  EnablePort: '<S372>/Enable'
   */
  /* RelationalOperator: '<S368>/Relational Operator3' */
  if (rtb_Product1_f > rtb_Torque) {
    /* S-Function (motohawk_sfun_calibration): '<S372>/motohawk_calibration2' */
    BaseEngineController_A02_bak2_B.s368_Merge = (SSLoadDecFiltC_DataStore());
  }

  /* End of RelationalOperator: '<S368>/Relational Operator3' */
  /* End of Outputs for SubSystem: '<S368>/DecreasingFilter' */

  /* Product: '<S368>/Product' incorporates:
   *  MinMax: '<S368>/MinMax'
   */
  rtb_Switch_ns /= (rtb_Switch_ns >= BaseEngineController_A02_bak2_B.s368_Merge)
    || rtIsNaN(BaseEngineController_A02_bak2_B.s368_Merge) ? rtb_Switch_ns :
    BaseEngineController_A02_bak2_B.s368_Merge;

  /* Sum: '<S373>/Sum1' incorporates:
   *  Constant: '<S373>/Constant'
   *  Product: '<S373>/Product'
   *  Product: '<S373>/Product1'
   *  Sum: '<S373>/Sum'
   *  UnitDelay: '<S373>/Unit Delay'
   */
  BaseEngineController_A02_bak2_B.s373_Sum1 = (1.0 - rtb_Switch_ns) *
    BaseEngineController_A02_bak2_DWork.s373_UnitDelay_DSTATE + rtb_Torque *
    rtb_Switch_ns;

  /* Sum: '<S364>/Sum' */
  rtb_Switch_ns = rtb_Torque - BaseEngineController_A02_bak2_B.s373_Sum1;

  /* Abs: '<S364>/Abs' */
  rtb_Switch_ns = fabs(rtb_Switch_ns);

  /* Logic: '<S364>/Logical Operator' incorporates:
   *  RelationalOperator: '<S364>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S364>/Steady-state Torque Tolerance [N.m]'
   */
  BaseEngineController_A02_bak2_B.s364_LogicalOperator =
    ((rtb_RelationalOperator2_m && rtb_RelOp_js && (rtb_Switch_ns <=
       (SSLoadTol_DataStore()))));

  /* S-Function Block: <S431>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (IndLoadNom09In_DataStore()) = rtb_Torque;
    (IndLoadNom09Idx_DataStore()) = TablePrelookup_real_T(rtb_Torque,
      (IndLoadNom09IdxArr_DataStore()), 9, (IndLoadNom09Idx_DataStore()));
    BaseEngineController_A02_bak2_B.s431_motohawk_prelookup1 =
      (IndLoadNom09Idx_DataStore());
  }

  /* S-Function Block: <S431>/motohawk_prelookup4 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (IndLoadNom17In_DataStore()) = rtb_Torque;
    (IndLoadNom17Idx_DataStore()) = TablePrelookup_real_T(rtb_Torque,
      (IndLoadNom17IdxArr_DataStore()), 17, (IndLoadNom17Idx_DataStore()));
    BaseEngineController_A02_bak2_B.s431_motohawk_prelookup4 =
      (IndLoadNom17Idx_DataStore());
  }

  /* Fcn: '<S376>/Torque to Power' */
  BaseEngineController_A02_bak2_B.s376_TorquetoPower = rtb_Torque *
    BaseEngineController_A02_bak2_B.s538_Sum1 * 3.1415926535897931 / 30000.0;

  /* S-Function Block: <S430>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (IndPower05In_DataStore()) =
      BaseEngineController_A02_bak2_B.s376_TorquetoPower;
    (IndPower05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_bak2_B.s376_TorquetoPower,
       (IndPower05IdxArr_DataStore()), 5, (IndPower05Idx_DataStore()));
    rtb_motohawk_prelookup_j = (IndPower05Idx_DataStore());
  }

  /* Sum: '<S366>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S366>/motohawk_calibration3'
   */
  rtb_Switch_ns = (SteadyStateECT_DataStore()) -
    BaseEngineController_A02_bak2_B.s637_Merge;

  /* Saturate: '<S366>/Saturation1' */
  rtb_Product1_f = rtb_Switch_ns >= 0.0 ? rtb_Switch_ns : 0.0;

  /* Product: '<S366>/Product' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S366>/motohawk_calibration4'
   */
  rtb_Product1_i = BaseEngineController_A02_bak2_B.s376_TorquetoPower /
    (MaxIndEngPwr_DataStore());

  /* S-Function Block: <S366>/motohawk_delta_time1 */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_bak2_DWork.s366_motohawk_delta_time1_DWORK1,
       NULL);
    rtb_motohawk_delta_time1 = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S366>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S366>/motohawk_calibration5'
   *  S-Function (motohawk_sfun_delta_time): '<S366>/motohawk_delta_time1'
   */
  rtb_Product1_f = rtb_Product1_f * rtb_Product1_i * rtb_motohawk_delta_time1 /
    (WarmUpTimeConst_DataStore());

  /* RelationalOperator: '<S382>/RelOp' incorporates:
   *  Constant: '<S382>/Constant'
   */
  rtb_RelationalOperator2_m =
    (BaseEngineController_A02_bak2_B.s376_TorquetoPower == 0.0);

  /* Outputs for Enabled SubSystem: '<S366>/Integrate Offset To ECT' incorporates:
   *  EnablePort: '<S383>/Enable'
   */
  /* RelationalOperator: '<S366>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S366>/motohawk_calibration3'
   *  UnitDelay: '<S366>/Unit Delay'
   */
  if (BaseEngineController_A02_bak2_DWork.s366_UnitDelay_DSTATE <
      (SteadyStateECT_DataStore())) {
    /* S-Function Block: <S385>/motohawk_delta_time1 */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_bak2_DWork.s385_motohawk_delta_time1_DWORK1,
         NULL);
      rtb_motohawk_delta_time1_k = ((real_T) delta) * 0.000001;
    }

    /* Switch: '<S385>/Switch1' incorporates:
     *  Constant: '<S383>/Constant1'
     *  DataTypeConversion: '<S385>/Data Type Conversion'
     *  UnitDelay: '<S385>/Unit Delay'
     */
    if (rtb_RelationalOperator2_m >= 1) {
      BaseEngineController_A02_bak2_B.s385_Switch1 = 0.0;
    } else {
      BaseEngineController_A02_bak2_B.s385_Switch1 =
        BaseEngineController_A02_bak2_DWork.s385_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S385>/Switch1' */

    /* MinMax: '<S386>/MinMax' incorporates:
     *  Constant: '<S383>/Constant'
     *  Product: '<S385>/Product'
     *  S-Function (motohawk_sfun_delta_time): '<S385>/motohawk_delta_time1'
     *  Sum: '<S385>/Sum'
     */
    u = rtb_Product1_f * rtb_motohawk_delta_time1_k +
      BaseEngineController_A02_bak2_B.s385_Switch1;
    u = u >= 0.0 ? u : 0.0;

    /* MinMax: '<S386>/MinMax1' incorporates:
     *  Constant: '<S383>/Constant'
     *  Constant: '<S383>/Constant2'
     *  MinMax: '<S386>/MinMax'
     */
    minV_3 = (u <= rtInf) || rtIsNaN(rtInf) ? u : rtInf;

    /* Update for UnitDelay: '<S385>/Unit Delay' incorporates:
     *  MinMax: '<S386>/MinMax1'
     */
    BaseEngineController_A02_bak2_DWork.s385_UnitDelay_DSTATE = minV_3;
  }

  /* End of RelationalOperator: '<S366>/Relational Operator' */
  /* End of Outputs for SubSystem: '<S366>/Integrate Offset To ECT' */

  /* Sum: '<S366>/Sum1' */
  rtb_Switch_ns = BaseEngineController_A02_bak2_B.s637_Merge +
    BaseEngineController_A02_bak2_B.s385_Switch1;

  /* MinMax: '<S384>/MinMax' */
  rtb_Switch_ns = (rtb_Switch_ns >= BaseEngineController_A02_bak2_B.s637_Merge) ||
    rtIsNaN(BaseEngineController_A02_bak2_B.s637_Merge) ? rtb_Switch_ns :
    BaseEngineController_A02_bak2_B.s637_Merge;

  /* MinMax: '<S384>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S366>/motohawk_calibration3'
   */
  BaseEngineController_A02_bak2_B.s384_MinMax1 = (rtb_Switch_ns <=
    (SteadyStateECT_DataStore())) || rtIsNaN((SteadyStateECT_DataStore())) ?
    rtb_Switch_ns : (SteadyStateECT_DataStore());

  /* S-Function Block: <S429>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (NECCT09In_DataStore()) = BaseEngineController_A02_bak2_B.s384_MinMax1;
    (NECCT09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_bak2_B.s384_MinMax1, (NECCT09IdxArr_DataStore()),
       9, (NECCT09Idx_DataStore()));
    rtb_motohawk_prelookup_b = (NECCT09Idx_DataStore());
  }

  /* S-Function Block: <S428>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (MAFPort05In_DataStore()) =
      BaseEngineController_A02_bak2_B.s354_MultiportSwitch;
    (MAFPort05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_bak2_B.s354_MultiportSwitch,
       (MAFPort05IdxArr_DataStore()), 5, (MAFPort05Idx_DataStore()));
    rtb_motohawk_prelookup_f = (MAFPort05Idx_DataStore());
  }

  /* RelationalOperator: '<S402>/RelOp' incorporates:
   *  Constant: '<S402>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S350>/motohawk_data_read'
   */
  rtb_RelationalOperator2_m = (((uint8_T)EngineState_DataStore()) == 1);

  /* Outputs for Enabled SubSystem: '<S350>/Capture ECT At Startup' incorporates:
   *  EnablePort: '<S395>/Enable'
   */
  if (rtb_RelationalOperator2_m) {
    if (!BaseEngineController_A02_bak2_DWork.s350_CaptureECTAtStartup_MODE) {
      /* InitializeConditions for UnitDelay: '<S395>/Unit Delay' */
      BaseEngineController_A02_bak2_DWork.s395_UnitDelay_DSTATE = 0;
      BaseEngineController_A02_bak2_DWork.s350_CaptureECTAtStartup_MODE = TRUE;
    }

    /* Sum: '<S395>/Sum' incorporates:
     *  Constant: '<S395>/Constant'
     *  UnitDelay: '<S395>/Unit Delay'
     */
    rtb_Add_b = (int8_T)
      (BaseEngineController_A02_bak2_DWork.s395_UnitDelay_DSTATE + 1);

    /* Sum: '<S395>/Add' incorporates:
     *  Constant: '<S395>/TwoSampleBuffer ToIgnore'
     *  S-Function (motohawk_sfun_calibration): '<S395>/motohawk_calibration'
     */
    rtb_Sum_gcg = (int8_T)(((int8_T)(ECT_KeyUp_Count_DataStore())) + 2);

    /* RelationalOperator: '<S395>/Relational Operator' */
    rtb_RelOp_js = (rtb_Add_b <= rtb_Sum_gcg);

    /* Switch: '<S395>/Switch' */
    if (rtb_RelOp_js) {
      rtb_Sum_gcg = rtb_Add_b;
    }

    /* End of Switch: '<S395>/Switch' */

    /* Outputs for Enabled SubSystem: '<S395>/Collect Average' incorporates:
     *  EnablePort: '<S412>/Enable'
     */
    /* Logic: '<S395>/Logical Operator' incorporates:
     *  Constant: '<S395>/TwoSampleBuffer ToIgnore'
     *  RelationalOperator: '<S395>/Relational Operator1'
     */
    if (rtb_RelOp_js && (rtb_Add_b > 2)) {
      if (!BaseEngineController_A02_bak2_DWork.s395_CollectAverage_MODE) {
        /* InitializeConditions for UnitDelay: '<S412>/Unit Delay1' */
        BaseEngineController_A02_bak2_DWork.s412_UnitDelay1_DSTATE = 0.0;
        BaseEngineController_A02_bak2_DWork.s395_CollectAverage_MODE = TRUE;
      }

      /* Sum: '<S412>/Sum1' incorporates:
       *  UnitDelay: '<S412>/Unit Delay1'
       */
      rtb_Product1_f = BaseEngineController_A02_bak2_B.s630_Merge +
        BaseEngineController_A02_bak2_DWork.s412_UnitDelay1_DSTATE;

      /* Product: '<S412>/Product' incorporates:
       *  DataTypeConversion: '<S412>/Data Type Conversion'
       *  Sum: '<S395>/Add1'
       */
      BaseEngineController_A02_bak2_B.s412_Product = 1.0 / (real_T)(int8_T)
        (rtb_Sum_gcg - 2) * rtb_Product1_f;

      /* Update for UnitDelay: '<S412>/Unit Delay1' */
      BaseEngineController_A02_bak2_DWork.s412_UnitDelay1_DSTATE =
        rtb_Product1_f;
    } else {
      if (BaseEngineController_A02_bak2_DWork.s395_CollectAverage_MODE) {
        BaseEngineController_A02_bak2_DWork.s395_CollectAverage_MODE = FALSE;
      }
    }

    /* End of Logic: '<S395>/Logical Operator' */
    /* End of Outputs for SubSystem: '<S395>/Collect Average' */

    /* Update for UnitDelay: '<S395>/Unit Delay' */
    BaseEngineController_A02_bak2_DWork.s395_UnitDelay_DSTATE = rtb_Sum_gcg;
  } else {
    if (BaseEngineController_A02_bak2_DWork.s350_CaptureECTAtStartup_MODE) {
      /* Disable for Enabled SubSystem: '<S395>/Collect Average' */
      BaseEngineController_A02_bak2_DWork.s395_CollectAverage_MODE = FALSE;

      /* End of Disable for SubSystem: '<S395>/Collect Average' */
      BaseEngineController_A02_bak2_DWork.s350_CaptureECTAtStartup_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S350>/Capture ECT At Startup' */
  /* S-Function Block: <S426>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (ECT_KeyUp09In_DataStore()) = BaseEngineController_A02_bak2_B.s412_Product;
    (ECT_KeyUp09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_bak2_B.s412_Product,
       (ECT_KeyUp09IdxArr_DataStore()), 9, (ECT_KeyUp09Idx_DataStore()));
    rtb_motohawk_prelookup_h5 = (ECT_KeyUp09Idx_DataStore());
  }

  /* Sum: '<S415>/Sum2' incorporates:
   *  UnitDelay: '<S415>/Unit Delay'
   */
  rtb_Product1_f = BaseEngineController_A02_bak2_B.s538_Sum1 -
    BaseEngineController_A02_bak2_DWork.s415_UnitDelay_DSTATE;

  /* S-Function Block: <S415>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_bak2_DWork.s415_motohawk_delta_time_DWORK1,
       NULL);
    rtb_motohawk_delta_time_pg = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S415>/Product' incorporates:
   *  S-Function (motohawk_sfun_delta_time): '<S415>/motohawk_delta_time'
   */
  rtb_Product1_f /= rtb_motohawk_delta_time_pg;

  /* S-Function Block: <S416>/motohawk_delta_time */
  rtb_Switch_ns = 0.005;

  /* Product: '<S416>/Product' incorporates:
   *  MinMax: '<S416>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S416>/motohawk_calibration'
   */
  rtb_Switch_ns /= (rtb_Switch_ns >= (EngineAccelFiltConst_DataStore())) ||
    rtIsNaN((EngineAccelFiltConst_DataStore())) ? rtb_Switch_ns :
    (EngineAccelFiltConst_DataStore());

  /* Sum: '<S417>/Sum1' incorporates:
   *  Constant: '<S417>/Constant'
   *  Product: '<S417>/Product'
   *  Product: '<S417>/Product1'
   *  Sum: '<S417>/Sum'
   *  UnitDelay: '<S417>/Unit Delay'
   */
  BaseEngineController_A02_bak2_B.s417_Sum1 = (1.0 - rtb_Switch_ns) *
    BaseEngineController_A02_bak2_DWork.s417_UnitDelay_DSTATE + rtb_Product1_f *
    rtb_Switch_ns;

  /* S-Function Block: <S351>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (RPMAccel17In_DataStore()) = BaseEngineController_A02_bak2_B.s417_Sum1;
    (RPMAccel17Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_bak2_B.s417_Sum1, (RPMAccel17IdxArr_DataStore()),
       17, (RPMAccel17Idx_DataStore()));
    BaseEngineController_A02_bak2_B.s351_RPMAccel17Idx =
      (RPMAccel17Idx_DataStore());
  }

  /* S-Function Block: <S351>/motohawk_prelookup2 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (TimeSinceRun09In_DataStore()) = BaseEngineController_A02_bak2_B.s423_Switch;
    (TimeSinceRun09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_bak2_B.s423_Switch,
       (TimeSinceRun09IdxArr_DataStore()), 9, (TimeSinceRun09Idx_DataStore()));
    rtb_TimeSinceRun09 = (TimeSinceRun09Idx_DataStore());
  }

  /* Outputs for Enabled SubSystem: '<S350>/Capture IAT At Startup' incorporates:
   *  EnablePort: '<S396>/Enable'
   */
  if (rtb_RelationalOperator2_m) {
    if (!BaseEngineController_A02_bak2_DWork.s350_CaptureIATAtStartup_MODE) {
      /* InitializeConditions for UnitDelay: '<S396>/Unit Delay' */
      BaseEngineController_A02_bak2_DWork.s396_UnitDelay_DSTATE = 0;
      BaseEngineController_A02_bak2_DWork.s350_CaptureIATAtStartup_MODE = TRUE;
    }

    /* Sum: '<S396>/Sum' incorporates:
     *  Constant: '<S396>/Constant'
     *  UnitDelay: '<S396>/Unit Delay'
     */
    rtb_Add_b = (int8_T)
      (BaseEngineController_A02_bak2_DWork.s396_UnitDelay_DSTATE + 1);

    /* Sum: '<S396>/Add' incorporates:
     *  Constant: '<S396>/TwoSampleBuffer ToIgnore'
     *  S-Function (motohawk_sfun_calibration): '<S396>/motohawk_calibration'
     */
    rtb_Sum_gcg = (int8_T)(((int8_T)(IAT_KeyUp_Count_DataStore())) + 2);

    /* RelationalOperator: '<S396>/Relational Operator' */
    rtb_RelationalOperator2_m = (rtb_Add_b <= rtb_Sum_gcg);

    /* Switch: '<S396>/Switch' */
    if (rtb_RelationalOperator2_m) {
      rtb_Sum_gcg = rtb_Add_b;
    }

    /* End of Switch: '<S396>/Switch' */

    /* Outputs for Enabled SubSystem: '<S396>/Collect Average' incorporates:
     *  EnablePort: '<S413>/Enable'
     */
    /* Logic: '<S396>/Logical Operator' incorporates:
     *  Constant: '<S396>/TwoSampleBuffer ToIgnore'
     *  RelationalOperator: '<S396>/Relational Operator1'
     */
    if (rtb_RelationalOperator2_m && (rtb_Add_b > 2)) {
      if (!BaseEngineController_A02_bak2_DWork.s396_CollectAverage_MODE) {
        /* InitializeConditions for UnitDelay: '<S413>/Unit Delay1' */
        BaseEngineController_A02_bak2_DWork.s413_UnitDelay1_DSTATE = 0.0;
        BaseEngineController_A02_bak2_DWork.s396_CollectAverage_MODE = TRUE;
      }

      /* Sum: '<S413>/Sum1' incorporates:
       *  UnitDelay: '<S413>/Unit Delay1'
       */
      rtb_Product1_f = BaseEngineController_A02_bak2_B.s632_Merge +
        BaseEngineController_A02_bak2_DWork.s413_UnitDelay1_DSTATE;

      /* Product: '<S413>/Product' incorporates:
       *  DataTypeConversion: '<S413>/Data Type Conversion'
       *  Sum: '<S396>/Add1'
       */
      BaseEngineController_A02_bak2_B.s413_Product = 1.0 / (real_T)(int8_T)
        (rtb_Sum_gcg - 2) * rtb_Product1_f;

      /* Update for UnitDelay: '<S413>/Unit Delay1' */
      BaseEngineController_A02_bak2_DWork.s413_UnitDelay1_DSTATE =
        rtb_Product1_f;
    } else {
      if (BaseEngineController_A02_bak2_DWork.s396_CollectAverage_MODE) {
        BaseEngineController_A02_bak2_DWork.s396_CollectAverage_MODE = FALSE;
      }
    }

    /* End of Logic: '<S396>/Logical Operator' */
    /* End of Outputs for SubSystem: '<S396>/Collect Average' */

    /* Update for UnitDelay: '<S396>/Unit Delay' */
    BaseEngineController_A02_bak2_DWork.s396_UnitDelay_DSTATE = rtb_Sum_gcg;
  } else {
    if (BaseEngineController_A02_bak2_DWork.s350_CaptureIATAtStartup_MODE) {
      /* Disable for Enabled SubSystem: '<S396>/Collect Average' */
      BaseEngineController_A02_bak2_DWork.s396_CollectAverage_MODE = FALSE;

      /* End of Disable for SubSystem: '<S396>/Collect Average' */
      BaseEngineController_A02_bak2_DWork.s350_CaptureIATAtStartup_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S350>/Capture IAT At Startup' */
  /* S-Function Block: <S427>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (IAT_KeyUp09In_DataStore()) = BaseEngineController_A02_bak2_B.s413_Product;
    (IAT_KeyUp09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_bak2_B.s413_Product,
       (IAT_KeyUp09IdxArr_DataStore()), 9, (IAT_KeyUp09Idx_DataStore()));
    rtb_motohawk_prelookup_js = (IAT_KeyUp09Idx_DataStore());
  }

  /* RelationalOperator: '<S113>/RelOp' incorporates:
   *  Constant: '<S113>/Constant'
   */
  rtb_RelOp_ig = (BaseEngineController_A02_bak2_B.s418_State == 3);

  /* S-Function Block: <S434>/motohawk_ain4 Resource: BrakePin */
  {
    extern NativeError_S BrakePin_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    BrakePin_AnalogInput_Get(&rtb_motohawk_ain4, NULL);
  }

  /* DataTypeConversion: '<S440>/Data Type Conversion' incorporates:
   *  S-Function (motohawk_sfun_ain): '<S434>/motohawk_ain4'
   */
  BaseEngineController_A02_bak2_B.s440_DataTypeConversion = (real_T)
    rtb_motohawk_ain4;

  /* RelationalOperator: '<S440>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S440>/SwitchPoint'
   */
  rtb_RelationalOperator2_m =
    (BaseEngineController_A02_bak2_B.s440_DataTypeConversion >
     (BrakeSwitchPt_DataStore()));

  /* Logic: '<S440>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S440>/0 = No Inversion 1 = Inversion'
   */
  rtb_RelationalOperator2_m ^= (BrakePolarity_DataStore());

  /* If: '<S453>/If' incorporates:
   *  Inport: '<S454>/In1'
   *  Inport: '<S455>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S453>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S453>/override_enable'
   */
  if ((Brake_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S453>/NewValue' incorporates:
     *  ActionPort: '<S454>/Action Port'
     */
    BaseEngineController_A02_bak2_B.s453_Merge = (Brake_new_DataStore());

    /* End of Outputs for SubSystem: '<S453>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S453>/OldValue' incorporates:
     *  ActionPort: '<S455>/Action Port'
     */
    BaseEngineController_A02_bak2_B.s453_Merge = rtb_RelationalOperator2_m;

    /* End of Outputs for SubSystem: '<S453>/OldValue' */
  }

  /* End of If: '<S453>/If' */

  /* S-Function Block: <S434>/motohawk_ain2 Resource: CruiseControl */
  {
    extern NativeError_S CruiseControl_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    CruiseControl_AnalogInput_Get
      (&BaseEngineController_A02_bak2_B.s434_motohawk_ain2, NULL);
  }

  /* DataTypeConversion: '<S441>/Data Type Conversion' */
  rtb_Product1_f = (real_T)BaseEngineController_A02_bak2_B.s434_motohawk_ain2;

  /* Stateflow: '<S441>/Chart' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S441>/motohawk_calibration'
   *  S-Function (motohawk_sfun_calibration): '<S441>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S441>/motohawk_calibration2'
   *  S-Function (motohawk_sfun_calibration): '<S441>/motohawk_calibration3'
   *  S-Function (motohawk_sfun_calibration): '<S441>/motohawk_calibration4'
   *  S-Function (motohawk_sfun_calibration): '<S441>/motohawk_calibration5'
   *  S-Function (motohawk_sfun_calibration): '<S441>/motohawk_calibration6'
   */

  /* Gateway: Foreground/Inputs/Digital/Cruise Control/Chart */
  /* During: Foreground/Inputs/Digital/Cruise Control/Chart */
  if (BaseEngineController_A02_bak2_DWork.s461_is_active_c29_BaseEngineController_A02_bak2
      == 0) {
    /* Entry: Foreground/Inputs/Digital/Cruise Control/Chart */
    BaseEngineController_A02_bak2_DWork.s461_is_active_c29_BaseEngineController_A02_bak2
      = 1U;

    /* Transition: '<S461>:10' */
    BaseEngineController_A02_bak2_DWork.s461_is_c29_BaseEngineController_A02_bak2
      = BaseEngineController_A02_bak2_IN_default;
  } else {
    switch
      (BaseEngineController_A02_bak2_DWork.s461_is_c29_BaseEngineController_A02_bak2)
    {
     case BaseEngineController_A02_bak2_IN_ON:
      /* During 'ON': '<S461>:16' */
      if ((rtb_Product1_f < (DefaultLevel_DataStore()) + (HYST_DataStore())) &&
          (rtb_Product1_f > (DefaultLevel_DataStore()) - (HYST_DataStore()))) {
        /* Transition: '<S461>:34' */
        BaseEngineController_A02_bak2_DWork.s461_is_c29_BaseEngineController_A02_bak2
          = BaseEngineController_A02_bak2_IN_default;
      } else {
        BaseEngineController_A02_bak2_B.s461_Out = 5.0;
      }
      break;

     case BaseEngineController_A02_bak2_IN_Off:
      /* During 'Off': '<S461>:12' */
      if ((rtb_Product1_f < (DefaultLevel_DataStore()) + (HYST_DataStore())) &&
          (rtb_Product1_f > (DefaultLevel_DataStore()) - (HYST_DataStore()))) {
        /* Transition: '<S461>:35' */
        BaseEngineController_A02_bak2_DWork.s461_is_c29_BaseEngineController_A02_bak2
          = BaseEngineController_A02_bak2_IN_default;
      } else {
        BaseEngineController_A02_bak2_B.s461_Out = 1.0;
      }
      break;

     case BaseEngineController_A02_bak2_IN_RSM:
      /* During 'RSM': '<S461>:15' */
      if ((rtb_Product1_f < (DefaultLevel_DataStore()) + (HYST_DataStore())) &&
          (rtb_Product1_f > (DefaultLevel_DataStore()) - (HYST_DataStore()))) {
        /* Transition: '<S461>:32' */
        BaseEngineController_A02_bak2_DWork.s461_is_c29_BaseEngineController_A02_bak2
          = BaseEngineController_A02_bak2_IN_default;
      } else {
        BaseEngineController_A02_bak2_B.s461_Out = 4.0;
      }
      break;

     case BaseEngineController_A02_bak2_IN_SetMinus:
      /* During 'SetMinus': '<S461>:13' */
      if ((rtb_Product1_f < (DefaultLevel_DataStore()) + (HYST_DataStore())) &&
          (rtb_Product1_f > (DefaultLevel_DataStore()) - (HYST_DataStore()))) {
        /* Transition: '<S461>:26' */
        BaseEngineController_A02_bak2_DWork.s461_is_c29_BaseEngineController_A02_bak2
          = BaseEngineController_A02_bak2_IN_default;
      } else {
        BaseEngineController_A02_bak2_B.s461_Out = 2.0;
      }
      break;

     case BaseEngineController_A02_bak2_IN_SetPlus:
      /* During 'SetPlus': '<S461>:14' */
      if ((rtb_Product1_f < (DefaultLevel_DataStore()) + (HYST_DataStore())) &&
          (rtb_Product1_f > (DefaultLevel_DataStore()) - (HYST_DataStore()))) {
        /* Transition: '<S461>:30' */
        BaseEngineController_A02_bak2_DWork.s461_is_c29_BaseEngineController_A02_bak2
          = BaseEngineController_A02_bak2_IN_default;
      } else {
        BaseEngineController_A02_bak2_B.s461_Out = 3.0;
      }
      break;

     case BaseEngineController_A02_bak2_IN_default:
      /* During 'default': '<S461>:9' */
      if ((rtb_Product1_f < (Off_DataStore()) + (HYST_DataStore())) &&
          (rtb_Product1_f > (Off_DataStore()) - (HYST_DataStore()))) {
        /* Transition: '<S461>:22' */
        BaseEngineController_A02_bak2_DWork.s461_is_c29_BaseEngineController_A02_bak2
          = BaseEngineController_A02_bak2_IN_Off;
      } else if ((rtb_Product1_f < (SetPlus_DataStore()) + (HYST_DataStore())) &&
                 (rtb_Product1_f > (SetPlus_DataStore()) - (HYST_DataStore())))
      {
        /* Transition: '<S461>:29' */
        BaseEngineController_A02_bak2_DWork.s461_is_c29_BaseEngineController_A02_bak2
          = BaseEngineController_A02_bak2_IN_SetPlus;
      } else if ((rtb_Product1_f < (RSM_DataStore()) + (HYST_DataStore())) &&
                 (rtb_Product1_f > (RSM_DataStore()) - (HYST_DataStore()))) {
        /* Transition: '<S461>:31' */
        BaseEngineController_A02_bak2_DWork.s461_is_c29_BaseEngineController_A02_bak2
          = BaseEngineController_A02_bak2_IN_RSM;
      } else if ((rtb_Product1_f < (ON_DataStore()) + (HYST_DataStore())) &&
                 (rtb_Product1_f > (ON_DataStore()) - (HYST_DataStore()))) {
        /* Transition: '<S461>:33' */
        BaseEngineController_A02_bak2_DWork.s461_is_c29_BaseEngineController_A02_bak2
          = BaseEngineController_A02_bak2_IN_ON;
      } else if ((rtb_Product1_f < (SetMinus_DataStore()) + (HYST_DataStore())) &&
                 (rtb_Product1_f > (SetMinus_DataStore()) - (HYST_DataStore())))
      {
        /* Transition: '<S461>:38' */
        BaseEngineController_A02_bak2_DWork.s461_is_c29_BaseEngineController_A02_bak2
          = BaseEngineController_A02_bak2_IN_SetMinus;
      } else {
        BaseEngineController_A02_bak2_B.s461_Out = 0.0;
      }
      break;

     default:
      /* Transition: '<S461>:10' */
      BaseEngineController_A02_bak2_DWork.s461_is_c29_BaseEngineController_A02_bak2
        = BaseEngineController_A02_bak2_IN_default;
      break;
    }
  }

  /* End of Stateflow: '<S441>/Chart' */

  /* RelationalOperator: '<S462>/Compare' incorporates:
   *  Constant: '<S462>/Constant'
   */
  rtb_RelOp_em = (BaseEngineController_A02_bak2_B.s461_Out == 1.0);

  /* S-Function Block: <S473>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_bak2_DWork.s473_motohawk_delta_time_DWORK1,
       NULL);
    rtb_motohawk_delta_time_ep = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S473>/Switch' incorporates:
   *  Constant: '<S473>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S473>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S473>/motohawk_delta_time'
   *  Sum: '<S473>/Sum'
   */
  if (rtb_RelOp_em) {
    rtb_Switch_ns = rtb_motohawk_delta_time_ep + ButtonDelay1_DataStore();
  } else {
    rtb_Switch_ns = 0.0;
  }

  /* End of Switch: '<S473>/Switch' */
  /* Logic: '<S456>/Logical Operator' incorporates:
   *  RelationalOperator: '<S456>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S441>/motohawk_calibration7'
   */
  rtb_RelOp_em = (rtb_RelOp_em && (rtb_Switch_ns >=
    (CruiseDebounceDelay_DataStore())));

  /* DataTypeConversion: '<S441>/Data Type Conversion1' */
  BaseEngineController_A02_bak2_B.s441_DataTypeConversion1 = (real_T)
    rtb_RelOp_em;

  /* If: '<S467>/If' incorporates:
   *  Inport: '<S478>/In1'
   *  Inport: '<S479>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S467>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S467>/override_enable'
   */
  if ((Cruise_Control_Off_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S467>/NewValue' incorporates:
     *  ActionPort: '<S478>/Action Port'
     */
    rtb_Product1_f = (Cruise_Control_Off_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S467>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S467>/OldValue' incorporates:
     *  ActionPort: '<S479>/Action Port'
     */
    rtb_Product1_f = BaseEngineController_A02_bak2_B.s441_DataTypeConversion1;

    /* End of Outputs for SubSystem: '<S467>/OldValue' */
  }

  /* End of If: '<S467>/If' */

  /* RelationalOperator: '<S463>/Compare' incorporates:
   *  Constant: '<S463>/Constant'
   */
  rtb_RelOp_em = (BaseEngineController_A02_bak2_B.s461_Out == 2.0);

  /* S-Function Block: <S474>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_bak2_DWork.s474_motohawk_delta_time_DWORK1,
       NULL);
    rtb_motohawk_delta_time_g = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S474>/Switch' incorporates:
   *  Constant: '<S474>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S474>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S474>/motohawk_delta_time'
   *  Sum: '<S474>/Sum'
   */
  if (rtb_RelOp_em) {
    rtb_Switch_dx = rtb_motohawk_delta_time_g + ButtonDelay2_DataStore();
  } else {
    rtb_Switch_dx = 0.0;
  }

  /* End of Switch: '<S474>/Switch' */

  /* Logic: '<S457>/Logical Operator' incorporates:
   *  RelationalOperator: '<S457>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S441>/motohawk_calibration7'
   */
  rtb_RelOp_em = (rtb_RelOp_em && (rtb_Switch_dx >=
    (CruiseDebounceDelay_DataStore())));

  /* DataTypeConversion: '<S441>/Data Type Conversion2' */
  BaseEngineController_A02_bak2_B.s441_DataTypeConversion2 = (real_T)
    rtb_RelOp_em;

  /* If: '<S469>/If' incorporates:
   *  Inport: '<S482>/In1'
   *  Inport: '<S483>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S469>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S469>/override_enable'
   */
  if ((Cruise_Control_SetM_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S469>/NewValue' incorporates:
     *  ActionPort: '<S482>/Action Port'
     */
    rtb_Sum1_j = (Cruise_Control_SetM_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S469>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S469>/OldValue' incorporates:
     *  ActionPort: '<S483>/Action Port'
     */
    rtb_Sum1_j = BaseEngineController_A02_bak2_B.s441_DataTypeConversion2;

    /* End of Outputs for SubSystem: '<S469>/OldValue' */
  }

  /* End of If: '<S469>/If' */

  /* RelationalOperator: '<S464>/Compare' incorporates:
   *  Constant: '<S464>/Constant'
   */
  rtb_RelOp_em = (BaseEngineController_A02_bak2_B.s461_Out == 3.0);

  /* S-Function Block: <S475>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_bak2_DWork.s475_motohawk_delta_time_DWORK1,
       NULL);
    rtb_motohawk_delta_time_n = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S475>/Switch' incorporates:
   *  Constant: '<S475>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S475>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S475>/motohawk_delta_time'
   *  Sum: '<S475>/Sum'
   */
  if (rtb_RelOp_em) {
    rtb_Switch_e = rtb_motohawk_delta_time_n + ButtonDelay3_DataStore();
  } else {
    rtb_Switch_e = 0.0;
  }

  /* End of Switch: '<S475>/Switch' */

  /* Logic: '<S458>/Logical Operator' incorporates:
   *  RelationalOperator: '<S458>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S441>/motohawk_calibration7'
   */
  rtb_RelOp_em = (rtb_RelOp_em && (rtb_Switch_e >=
    (CruiseDebounceDelay_DataStore())));

  /* DataTypeConversion: '<S441>/Data Type Conversion3' */
  BaseEngineController_A02_bak2_B.s441_DataTypeConversion3 = (real_T)
    rtb_RelOp_em;

  /* If: '<S470>/If' incorporates:
   *  Inport: '<S484>/In1'
   *  Inport: '<S485>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S470>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S470>/override_enable'
   */
  if ((Cruise_Control_SetP_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S470>/NewValue' incorporates:
     *  ActionPort: '<S484>/Action Port'
     */
    rtb_Merge_ek = (Cruise_Control_SetP_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S470>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S470>/OldValue' incorporates:
     *  ActionPort: '<S485>/Action Port'
     */
    rtb_Merge_ek = BaseEngineController_A02_bak2_B.s441_DataTypeConversion3;

    /* End of Outputs for SubSystem: '<S470>/OldValue' */
  }

  /* End of If: '<S470>/If' */

  /* RelationalOperator: '<S465>/Compare' incorporates:
   *  Constant: '<S465>/Constant'
   */
  rtb_RelOp_em = (BaseEngineController_A02_bak2_B.s461_Out == 4.0);

  /* S-Function Block: <S476>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_bak2_DWork.s476_motohawk_delta_time_DWORK1,
       NULL);
    rtb_motohawk_delta_time_gs = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S476>/Switch' incorporates:
   *  Constant: '<S476>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S476>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S476>/motohawk_delta_time'
   *  Sum: '<S476>/Sum'
   */
  if (rtb_RelOp_em) {
    rtb_Switch_lf = rtb_motohawk_delta_time_gs + ButtonDelay4_DataStore();
  } else {
    rtb_Switch_lf = 0.0;
  }

  /* End of Switch: '<S476>/Switch' */

  /* Logic: '<S459>/Logical Operator' incorporates:
   *  RelationalOperator: '<S459>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S441>/motohawk_calibration7'
   */
  rtb_RelOp_em = (rtb_RelOp_em && (rtb_Switch_lf >=
    (CruiseDebounceDelay_DataStore())));

  /* DataTypeConversion: '<S441>/Data Type Conversion4' */
  BaseEngineController_A02_bak2_B.s441_DataTypeConversion4 = (real_T)
    rtb_RelOp_em;

  /* If: '<S471>/If' incorporates:
   *  Inport: '<S486>/In1'
   *  Inport: '<S487>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S471>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S471>/override_enable'
   */
  if ((Cruise_Control_RSM_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S471>/NewValue' incorporates:
     *  ActionPort: '<S486>/Action Port'
     */
    rtb_Merge_hd = (Cruise_Control_RSM_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S471>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S471>/OldValue' incorporates:
     *  ActionPort: '<S487>/Action Port'
     */
    rtb_Merge_hd = BaseEngineController_A02_bak2_B.s441_DataTypeConversion4;

    /* End of Outputs for SubSystem: '<S471>/OldValue' */
  }

  /* End of If: '<S471>/If' */

  /* RelationalOperator: '<S466>/Compare' incorporates:
   *  Constant: '<S466>/Constant'
   */
  rtb_RelOp_em = (BaseEngineController_A02_bak2_B.s461_Out == 5.0);

  /* S-Function Block: <S477>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_bak2_DWork.s477_motohawk_delta_time_DWORK1,
       NULL);
    rtb_motohawk_delta_time_mc = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S477>/Switch' incorporates:
   *  Constant: '<S477>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S477>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S477>/motohawk_delta_time'
   *  Sum: '<S477>/Sum'
   */
  if (rtb_RelOp_em) {
    rtb_Switch_c = rtb_motohawk_delta_time_mc + ButtonDelay5_DataStore();
  } else {
    rtb_Switch_c = 0.0;
  }

  /* End of Switch: '<S477>/Switch' */

  /* Logic: '<S460>/Logical Operator' incorporates:
   *  RelationalOperator: '<S460>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S441>/motohawk_calibration7'
   */
  rtb_RelOp_em = (rtb_RelOp_em && (rtb_Switch_c >=
    (CruiseDebounceDelay_DataStore())));

  /* DataTypeConversion: '<S441>/Data Type Conversion5' */
  BaseEngineController_A02_bak2_B.s441_DataTypeConversion5 = (real_T)
    rtb_RelOp_em;

  /* If: '<S472>/If' incorporates:
   *  Inport: '<S488>/In1'
   *  Inport: '<S489>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S472>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S472>/override_enable'
   */
  if ((Cruise_Control_ON_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S472>/NewValue' incorporates:
     *  ActionPort: '<S488>/Action Port'
     */
    rtb_Product1_i = (Cruise_Control_ON_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S472>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S472>/OldValue' incorporates:
     *  ActionPort: '<S489>/Action Port'
     */
    rtb_Product1_i = BaseEngineController_A02_bak2_B.s441_DataTypeConversion5;

    /* End of Outputs for SubSystem: '<S472>/OldValue' */
  }

  /* End of If: '<S472>/If' */

  /* S-Function Block: <S434>/motohawk_ain_read Resource: CruiseControl */
  {
    extern NativeError_S CruiseControl_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    CruiseControl_AnalogInput_Get(&rtb_motohawk_ain_read_i, NULL);
  }

  /* DataTypeConversion: '<S442>/Data Type Conversion' incorporates:
   *  S-Function (motohawk_sfun_ain_read): '<S434>/motohawk_ain_read'
   */
  BaseEngineController_A02_bak2_B.s442_DataTypeConversion = (real_T)
    rtb_motohawk_ain_read_i;

  /* RelationalOperator: '<S442>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S442>/SwitchPoint'
   */
  rtb_RelationalOperator2_m =
    (BaseEngineController_A02_bak2_B.s442_DataTypeConversion >
     (CruiseONSwitchPt_DataStore()));

  /* Logic: '<S442>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S442>/0 = No Inversion 1 = Inversion'
   */
  rtb_RelOp_em = rtb_RelationalOperator2_m ^ (CruiseONPolarity_DataStore());

  /* S-Function Block: <S492>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_bak2_DWork.s492_motohawk_delta_time_DWORK1,
       NULL);
    rtb_motohawk_delta_time_nz = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S492>/Switch' incorporates:
   *  Constant: '<S492>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S492>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S492>/motohawk_delta_time'
   *  Sum: '<S492>/Sum'
   */
  if (rtb_RelOp_em) {
    rtb_Switch_n = rtb_motohawk_delta_time_nz + CruiseOnDelay_DataStore();
  } else {
    rtb_Switch_n = 0.0;
  }

  /* End of Switch: '<S492>/Switch' */
  /* RelationalOperator: '<S490>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S442>/motohawk_calibration7'
   */
  rtb_RelationalOperator2_m = (rtb_Switch_n >= (CruiseONDebounceDelay_DataStore()));

  /* If: '<S491>/If' incorporates:
   *  Inport: '<S493>/In1'
   *  Inport: '<S494>/In1'
   *  Logic: '<S490>/Logical Operator'
   *  S-Function (motohawk_sfun_calibration): '<S491>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S491>/override_enable'
   */
  if ((CruiseON_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S491>/NewValue' incorporates:
     *  ActionPort: '<S493>/Action Port'
     */
    BaseEngineController_A02_bak2_B.s491_Merge = (CruiseON_new_DataStore());

    /* End of Outputs for SubSystem: '<S491>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S491>/OldValue' incorporates:
     *  ActionPort: '<S494>/Action Port'
     */
    BaseEngineController_A02_bak2_B.s491_Merge = ((rtb_RelOp_em &&
      rtb_RelationalOperator2_m));

    /* End of Outputs for SubSystem: '<S491>/OldValue' */
  }

  /* End of If: '<S491>/If' */

  /* S-Function Block: <S434>/motohawk_ain1 Resource: CruiseControl_2 */
  {
    extern NativeError_S CruiseControl_2_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    CruiseControl_2_AnalogInput_Get(&rtb_motohawk_ain1, NULL);
  }

  /* DataTypeConversion: '<S443>/Data Type Conversion' incorporates:
   *  S-Function (motohawk_sfun_ain): '<S434>/motohawk_ain1'
   */
  BaseEngineController_A02_bak2_B.s443_DataTypeConversion = (real_T)
    rtb_motohawk_ain1;

  /* RelationalOperator: '<S443>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S443>/SwitchPoint'
   */
  rtb_RelationalOperator2_m =
    (BaseEngineController_A02_bak2_B.s443_DataTypeConversion >
     (CruiseRSM_SETPSwitchPt_DataStore()));

  /* Logic: '<S443>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S443>/0 = No Inversion 1 = Inversion'
   */
  rtb_RelOp_em = rtb_RelationalOperator2_m ^ (CruiseRSM_SETPPolarity_DataStore());

  /* S-Function Block: <S497>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_bak2_DWork.s497_motohawk_delta_time_DWORK1,
       NULL);
    rtb_motohawk_delta_time_gg = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S497>/Switch' incorporates:
   *  Constant: '<S497>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S497>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S497>/motohawk_delta_time'
   *  Sum: '<S497>/Sum'
   */
  if (rtb_RelOp_em) {
    rtb_Switch_lt = rtb_motohawk_delta_time_gg + CruiseRSM_SETPDelay_DataStore();
  } else {
    rtb_Switch_lt = 0.0;
  }

  /* End of Switch: '<S497>/Switch' */
  /* RelationalOperator: '<S495>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S443>/motohawk_calibration7'
   */
  rtb_RelationalOperator2_m = (rtb_Switch_lt >=
    (CruiseRSM_SETPDebounceDelay_DataStore()));

  /* If: '<S496>/If' incorporates:
   *  Inport: '<S498>/In1'
   *  Inport: '<S499>/In1'
   *  Logic: '<S495>/Logical Operator'
   *  S-Function (motohawk_sfun_calibration): '<S496>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S496>/override_enable'
   */
  if ((CruiseRSM_SETP_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S496>/NewValue' incorporates:
     *  ActionPort: '<S498>/Action Port'
     */
    BaseEngineController_A02_bak2_B.s496_Merge = (CruiseRSM_SETP_new_DataStore());

    /* End of Outputs for SubSystem: '<S496>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S496>/OldValue' incorporates:
     *  ActionPort: '<S499>/Action Port'
     */
    BaseEngineController_A02_bak2_B.s496_Merge = ((rtb_RelOp_em &&
      rtb_RelationalOperator2_m));

    /* End of Outputs for SubSystem: '<S496>/OldValue' */
  }

  /* End of If: '<S496>/If' */

  /* S-Function Block: <S434>/motohawk_ain3 Resource: CruiseControl_3 */
  {
    extern NativeError_S CruiseControl_3_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    CruiseControl_3_AnalogInput_Get(&rtb_motohawk_ain3, NULL);
  }

  /* DataTypeConversion: '<S444>/Data Type Conversion' incorporates:
   *  S-Function (motohawk_sfun_ain): '<S434>/motohawk_ain3'
   */
  BaseEngineController_A02_bak2_B.s444_DataTypeConversion = (real_T)
    rtb_motohawk_ain3;

  /* RelationalOperator: '<S444>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S444>/SwitchPoint'
   */
  rtb_RelationalOperator2_m =
    (BaseEngineController_A02_bak2_B.s444_DataTypeConversion >
     (CruiseSETMSwitchPt_DataStore()));

  /* Logic: '<S444>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S444>/0 = No Inversion 1 = Inversion'
   */
  rtb_RelOp_em = rtb_RelationalOperator2_m ^ (CruiseSETMPolarity_DataStore());

  /* S-Function Block: <S502>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_bak2_DWork.s502_motohawk_delta_time_DWORK1,
       NULL);
    rtb_motohawk_delta_time_ml = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S502>/Switch' incorporates:
   *  Constant: '<S502>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S502>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S502>/motohawk_delta_time'
   *  Sum: '<S502>/Sum'
   */
  if (rtb_RelOp_em) {
    rtb_Switch_m = rtb_motohawk_delta_time_ml + CruiseSETMDelay_DataStore();
  } else {
    rtb_Switch_m = 0.0;
  }

  /* End of Switch: '<S502>/Switch' */
  /* RelationalOperator: '<S500>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S444>/motohawk_calibration7'
   */
  rtb_RelationalOperator2_m = (rtb_Switch_m >=
    (CruiseSETMDebounceDelay_DataStore()));

  /* If: '<S501>/If' incorporates:
   *  Inport: '<S503>/In1'
   *  Inport: '<S504>/In1'
   *  Logic: '<S500>/Logical Operator'
   *  S-Function (motohawk_sfun_calibration): '<S501>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S501>/override_enable'
   */
  if ((CruiseSETM_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S501>/NewValue' incorporates:
     *  ActionPort: '<S503>/Action Port'
     */
    BaseEngineController_A02_bak2_B.s501_Merge = (CruiseSETM_new_DataStore());

    /* End of Outputs for SubSystem: '<S501>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S501>/OldValue' incorporates:
     *  ActionPort: '<S504>/Action Port'
     */
    BaseEngineController_A02_bak2_B.s501_Merge = ((rtb_RelOp_em &&
      rtb_RelationalOperator2_m));

    /* End of Outputs for SubSystem: '<S501>/OldValue' */
  }

  /* End of If: '<S501>/If' */

  /* S-Function Block: <S434>/motohawk_din Resource: ESTOPPin */
  {
    extern NativeError_S ESTOPPin_DigitalInput_Get(boolean_T *out, uint16_T
      *status);
    ESTOPPin_DigitalInput_Get(&BaseEngineController_A02_bak2_B.s434_motohawk_din,
      NULL);
  }

  /* Logic: '<S445>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S445>/0 = No Inversion 1 = Inversion'
   */
  rtb_RelationalOperator2_m = BaseEngineController_A02_bak2_B.s434_motohawk_din ^
    (ESTOPPolarity_DataStore());

  /* If: '<S505>/If' incorporates:
   *  Inport: '<S506>/In1'
   *  Inport: '<S507>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S505>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S505>/override_enable'
   */
  if ((ESTOP_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S505>/NewValue' incorporates:
     *  ActionPort: '<S506>/Action Port'
     */
    BaseEngineController_A02_bak2_B.s505_Merge = (ESTOP_new_DataStore());

    /* End of Outputs for SubSystem: '<S505>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S505>/OldValue' incorporates:
     *  ActionPort: '<S507>/Action Port'
     */
    BaseEngineController_A02_bak2_B.s505_Merge = rtb_RelationalOperator2_m;

    /* End of Outputs for SubSystem: '<S505>/OldValue' */
  }

  /* End of If: '<S505>/If' */

  /* S-Function Block: <S434>/motohawk_din1 Resource: GearStatePin */
  {
    extern NativeError_S GearStatePin_DigitalInput_Get(boolean_T *out, uint16_T *
      status);
    GearStatePin_DigitalInput_Get
      (&BaseEngineController_A02_bak2_B.s434_motohawk_din1, NULL);
  }

  /* Logic: '<S446>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S446>/0 = No Inversion 1 = Inversion'
   */
  rtb_RelationalOperator2_m = BaseEngineController_A02_bak2_B.s434_motohawk_din1
    ^ (GearStatePolarity_DataStore());

  /* If: '<S508>/If' incorporates:
   *  Inport: '<S509>/In1'
   *  Inport: '<S510>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S508>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S508>/override_enable'
   */
  if ((GearState_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S508>/NewValue' incorporates:
     *  ActionPort: '<S509>/Action Port'
     */
    BaseEngineController_A02_bak2_B.s508_Merge = (GearState_new_DataStore());

    /* End of Outputs for SubSystem: '<S508>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S508>/OldValue' incorporates:
     *  ActionPort: '<S510>/Action Port'
     */
    BaseEngineController_A02_bak2_B.s508_Merge = rtb_RelationalOperator2_m;

    /* End of Outputs for SubSystem: '<S508>/OldValue' */
  }

  /* End of If: '<S508>/If' */

  /* S-Function Block: <S434>/motohawk_ain6 Resource: ScramblePin */
  {
    extern NativeError_S ScramblePin_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    ScramblePin_AnalogInput_Get(&rtb_motohawk_ain6, NULL);
  }

  /* DataTypeConversion: '<S448>/Data Type Conversion' incorporates:
   *  S-Function (motohawk_sfun_ain): '<S434>/motohawk_ain6'
   */
  BaseEngineController_A02_bak2_B.s448_DataTypeConversion = (real_T)
    rtb_motohawk_ain6;

  /* RelationalOperator: '<S448>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S448>/SwitchPoint'
   */
  rtb_RelationalOperator2_m =
    (BaseEngineController_A02_bak2_B.s448_DataTypeConversion >
     (ScrambleSwitchPt_DataStore()));

  /* Logic: '<S448>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S448>/0 = No Inversion 1 = Inversion'
   */
  rtb_RelOp_em = rtb_RelationalOperator2_m ^ (ScramblePolarity_DataStore());

  /* S-Function Block: <S522>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_bak2_DWork.s522_motohawk_delta_time_DWORK1,
       NULL);
    rtb_motohawk_delta_time_a = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S522>/Switch' incorporates:
   *  Constant: '<S522>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S522>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S522>/motohawk_delta_time'
   *  Sum: '<S522>/Sum'
   */
  if (rtb_RelOp_em) {
    rtb_Switch_d5 = rtb_motohawk_delta_time_a + ScrambleDelay_DataStore();
  } else {
    rtb_Switch_d5 = 0.0;
  }

  /* End of Switch: '<S522>/Switch' */
  /* RelationalOperator: '<S520>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S448>/motohawk_calibration7'
   */
  rtb_RelationalOperator2_m = (rtb_Switch_d5 >= (ScrambleDebounceDelay_DataStore
                                ()));

  /* If: '<S521>/If' incorporates:
   *  Inport: '<S523>/In1'
   *  Inport: '<S524>/In1'
   *  Logic: '<S520>/Logical Operator'
   *  S-Function (motohawk_sfun_calibration): '<S521>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S521>/override_enable'
   */
  if ((Scramble_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S521>/NewValue' incorporates:
     *  ActionPort: '<S523>/Action Port'
     */
    BaseEngineController_A02_bak2_B.s521_Merge = (Scramble_new_DataStore());

    /* End of Outputs for SubSystem: '<S521>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S521>/OldValue' incorporates:
     *  ActionPort: '<S524>/Action Port'
     */
    BaseEngineController_A02_bak2_B.s521_Merge = ((rtb_RelOp_em &&
      rtb_RelationalOperator2_m));

    /* End of Outputs for SubSystem: '<S521>/OldValue' */
  }

  /* End of If: '<S521>/If' */

  /* S-Function Block: <S434>/motohawk_din2 Resource: TwoStepPin */
  {
    extern NativeError_S TwoStepPin_DigitalInput_Get(boolean_T *out, uint16_T
      *status);
    TwoStepPin_DigitalInput_Get
      (&BaseEngineController_A02_bak2_B.s434_motohawk_din2, NULL);
  }

  /* Logic: '<S449>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S449>/0 = No Inversion 1 = Inversion'
   */
  rtb_RelOp_em = BaseEngineController_A02_bak2_B.s434_motohawk_din2 ^
    (TwoStepPolarity_DataStore());

  /* S-Function Block: <S527>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_bak2_DWork.s527_motohawk_delta_time_DWORK1,
       NULL);
    rtb_motohawk_delta_time_o = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S527>/Switch' incorporates:
   *  Constant: '<S527>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S527>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S527>/motohawk_delta_time'
   *  Sum: '<S527>/Sum'
   */
  if (rtb_RelOp_em) {
    rtb_Switch_du = rtb_motohawk_delta_time_o + TwoStepTimer_DataStore();
  } else {
    rtb_Switch_du = 0.0;
  }

  /* End of Switch: '<S527>/Switch' */
  /* RelationalOperator: '<S525>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S449>/motohawk_calibration7'
   */
  rtb_RelationalOperator2_m = (rtb_Switch_du >= (TwoStepDebounceDelay_DataStore()));

  /* If: '<S526>/If' incorporates:
   *  Inport: '<S528>/In1'
   *  Inport: '<S529>/In1'
   *  Logic: '<S525>/Logical Operator'
   *  S-Function (motohawk_sfun_calibration): '<S526>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S526>/override_enable'
   */
  if ((TwoStep_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S526>/NewValue' incorporates:
     *  ActionPort: '<S528>/Action Port'
     */
    BaseEngineController_A02_bak2_B.s526_Merge = (TwoStep_new_DataStore());

    /* End of Outputs for SubSystem: '<S526>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S526>/OldValue' incorporates:
     *  ActionPort: '<S529>/Action Port'
     */
    BaseEngineController_A02_bak2_B.s526_Merge = ((rtb_RelOp_em &&
      rtb_RelationalOperator2_m));

    /* End of Outputs for SubSystem: '<S526>/OldValue' */
  }

  /* End of If: '<S526>/If' */

  /* S-Function Block: <S585>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_bak2_DWork.s585_motohawk_delta_time_DWORK1,
       NULL);
    rtb_DataTypeConversion_k = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S585>/Product' incorporates:
   *  MinMax: '<S585>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S585>/motohawk_calibration'
   */
  rtb_DataTypeConversion_k /= (rtb_DataTypeConversion_k >=
    (MAPTimeFilterConst_DataStore())) || rtIsNaN((MAPTimeFilterConst_DataStore()))
    ? rtb_DataTypeConversion_k : (MAPTimeFilterConst_DataStore());

  /* Sum: '<S590>/Sum1' incorporates:
   *  Constant: '<S590>/Constant'
   *  Product: '<S590>/Product'
   *  Product: '<S590>/Product1'
   *  Sum: '<S590>/Sum'
   *  UnitDelay: '<S590>/Unit Delay'
   */
  rtb_Sum1_cq = (1.0 - rtb_DataTypeConversion_k) *
    BaseEngineController_A02_bak2_DWork.s590_UnitDelay_DSTATE + rtb_Merge_hk *
    rtb_DataTypeConversion_k;

  /* If: '<S589>/If' incorporates:
   *  Inport: '<S591>/In1'
   *  Inport: '<S592>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S589>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S589>/override_enable'
   */
  if ((MAPTime_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S589>/NewValue' incorporates:
     *  ActionPort: '<S591>/Action Port'
     */
    BaseEngineController_A02_bak2_B.s589_Merge = (MAPTime_new_DataStore());

    /* End of Outputs for SubSystem: '<S589>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S589>/OldValue' incorporates:
     *  ActionPort: '<S592>/Action Port'
     */
    BaseEngineController_A02_bak2_B.s589_Merge = rtb_Sum1_cq;

    /* End of Outputs for SubSystem: '<S589>/OldValue' */
  }

  /* End of If: '<S589>/If' */

  /* Outputs for Enabled SubSystem: '<S7>/Run' incorporates:
   *  EnablePort: '<S112>/Enable'
   */
  if (rtb_RelOp_ig) {
    if (!BaseEngineController_A02_bak2_DWork.s7_Run_MODE) {
      /* InitializeConditions for UnitDelay: '<S142>/Unit Delay' */
      BaseEngineController_A02_bak2_DWork.s142_UnitDelay_DSTATE = FALSE;

      /* InitializeConditions for UnitDelay: '<S141>/Unit Delay' */
      BaseEngineController_A02_bak2_DWork.s141_UnitDelay_DSTATE = FALSE;

      /* InitializeConditions for UnitDelay: '<S140>/Unit Delay' */
      BaseEngineController_A02_bak2_DWork.s140_UnitDelay_DSTATE = FALSE;

      /* InitializeConditions for UnitDelay: '<S138>/Unit Delay' */
      BaseEngineController_A02_bak2_DWork.s138_UnitDelay_DSTATE = FALSE;

      /* InitializeConditions for UnitDelay: '<S139>/Unit Delay' */
      BaseEngineController_A02_bak2_DWork.s139_UnitDelay_DSTATE = FALSE;

      /* InitializeConditions for S-Function (motohawk_sfun_trigger): '<S112>/motohawk_trigger1' */
      if (rtmIsFirstInitCond(BaseEngineController_A02_bak2_M)) {
        /* Initial conditions for function-call system: '<S112>/MinGovernor' */

        /* InitializeConditions for Stateflow: '<S235>/IdleStateMachine' */
        BaseEngineController_A02_bak2_IdleStateMachine_Init();

        /* S-Function Block: <S234>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_A02_bak2_DWork.s234_motohawk_delta_time_DWORK1 =
            now - Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }

        /* S-Function Block: <S238>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_A02_bak2_DWork.s238_motohawk_delta_time_DWORK1 =
            now - Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }

        /* InitializeConditions for Atomic SubSystem: '<S130>/AiflowOffset' */

        /* S-Function Block: <S241>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_A02_bak2_DWork.s241_motohawk_delta_time_DWORK1 =
            now - Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }

        /* End of InitializeConditions for SubSystem: '<S130>/AiflowOffset' */

        /* S-Function Block: <S266>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_A02_bak2_DWork.s266_motohawk_delta_time_DWORK1 =
            now - Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }
      }

      if (rtmIsFirstInitCond(BaseEngineController_A02_bak2_M)) {
        /* Initial conditions for function-call system: '<S112>/MaxGovernor' */

        /* S-Function Block: <S216>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_A02_bak2_DWork.s216_motohawk_delta_time_DWORK1 =
            now - Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }

        /* S-Function Block: <S228>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_A02_bak2_DWork.s228_motohawk_delta_time_DWORK1 =
            now - Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }
      }

      if (rtmIsFirstInitCond(BaseEngineController_A02_bak2_M)) {
        /* Initial conditions for function-call system: '<S112>/Spark Manager' */

        /* InitializeConditions for UnitDelay: '<S291>/Initial Condition is True' */
        BaseEngineController_A02_bak2_DWork.s291_InitialConditionisTrue_DSTATE =
          TRUE;
      }

      /* InitializeConditions for Stateflow: '<S177>/Multiplexed On Stateflow' */
      BaseEngineController_A02_bak2_DWork.s179_is_active_c1_BaseEngineController_A02_bak2
        = 0U;
      BaseEngineController_A02_bak2_DWork.s179_is_c1_BaseEngineController_A02_bak2
        = 0U;
      BaseEngineController_A02_bak2_B.s179_Out = 0.0;

      /* InitializeConditions for Stateflow: '<S176>/Individual On Stateflow' */
      BaseEngineController_A02_bak2_DWork.s178_is_active_c3_BaseEngineController_A02_bak2
        = 0U;
      BaseEngineController_A02_bak2_DWork.s178_is_c3_BaseEngineController_A02_bak2
        = 0U;
      BaseEngineController_A02_bak2_B.s178_Out = 0.0;

      /* InitializeConditions for UnitDelay: '<S183>/Unit Delay' */
      BaseEngineController_A02_bak2_DWork.s183_UnitDelay_DSTATE = 0.0;

      /* InitializeConditions for UnitDelay: '<S184>/Unit Delay' */
      BaseEngineController_A02_bak2_DWork.s184_UnitDelay_DSTATE = 0.0;

      /* InitializeConditions for UnitDelay: '<S124>/Unit Delay' */
      BaseEngineController_A02_bak2_DWork.s124_UnitDelay_DSTATE = 0.0;

      /* InitializeConditions for UnitDelay: '<S162>/Unit Delay' */
      BaseEngineController_A02_bak2_DWork.s162_UnitDelay_DSTATE = 0.0;

      /* S-Function Block: <S152>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BaseEngineController_A02_bak2_DWork.s152_motohawk_delta_time_DWORK1 =
          now - Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
      }

      /* InitializeConditions for UnitDelay: '<S152>/Unit Delay' */
      BaseEngineController_A02_bak2_DWork.s152_UnitDelay_DSTATE = 0.0;

      /* InitializeConditions for UnitDelay: '<S161>/Unit Delay' */
      BaseEngineController_A02_bak2_DWork.s161_UnitDelay_DSTATE = 0.0;

      /* S-Function Block: <S162>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BaseEngineController_A02_bak2_DWork.s162_motohawk_delta_time_DWORK1 =
          now - Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
      }

      /* InitializeConditions for UnitDelay: '<S170>/Unit Delay' */
      BaseEngineController_A02_bak2_DWork.s170_UnitDelay_DSTATE = FALSE;

      /* InitializeConditions for UnitDelay: '<S172>/Unit Delay' */
      BaseEngineController_A02_bak2_DWork.s172_UnitDelay_DSTATE = FALSE;

      /* InitializeConditions for UnitDelay: '<S171>/Unit Delay' */
      BaseEngineController_A02_bak2_DWork.s171_UnitDelay_DSTATE = FALSE;

      /* S-Function Block: <S184>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BaseEngineController_A02_bak2_DWork.s184_motohawk_delta_time_DWORK1 =
          now - Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
      }

      /* InitializeConditions for UnitDelay: '<S190>/Unit Delay' */
      BaseEngineController_A02_bak2_DWork.s190_UnitDelay_DSTATE = FALSE;

      /* InitializeConditions for UnitDelay: '<S191>/Unit Delay' */
      BaseEngineController_A02_bak2_DWork.s191_UnitDelay_DSTATE = FALSE;

      /* InitializeConditions for UnitDelay: '<S192>/Unit Delay' */
      BaseEngineController_A02_bak2_DWork.s192_UnitDelay_DSTATE = FALSE;

      /* InitializeConditions for Atomic SubSystem: '<S112>/O2 Control' */

      /* InitializeConditions for Atomic SubSystem: '<S131>/O2 PID Controller' */
      /* InitializeConditions for UnitDelay: '<S283>/Unit Delay' */
      BaseEngineController_A02_bak2_DWork.s283_UnitDelay_DSTATE = FALSE;

      /* InitializeConditions for UnitDelay: '<S280>/Unit Delay' */
      BaseEngineController_A02_bak2_DWork.s280_UnitDelay_DSTATE = 0.0;

      /* InitializeConditions for UnitDelay: '<S279>/Unit Delay' */
      BaseEngineController_A02_bak2_DWork.s279_UnitDelay_DSTATE = 0.0;

      /* S-Function Block: <S280>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BaseEngineController_A02_bak2_DWork.s280_motohawk_delta_time_DWORK1 =
          now - Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
      }

      /* InitializeConditions for UnitDelay: '<S276>/Unit Delay1' */
      BaseEngineController_A02_bak2_DWork.s276_UnitDelay1_DSTATE = 0.0;

      /* S-Function Block: <S284>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BaseEngineController_A02_bak2_DWork.s284_motohawk_delta_time_DWORK1 =
          now - Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
      }

      /* InitializeConditions for UnitDelay: '<S276>/Unit Delay' */
      BaseEngineController_A02_bak2_DWork.s276_UnitDelay_DSTATE = 0.0;

      /* S-Function Block: <S286>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BaseEngineController_A02_bak2_DWork.s286_motohawk_delta_time_DWORK1 =
          now - Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
      }

      /* InitializeConditions for UnitDelay: '<S276>/Unit Delay2' */
      BaseEngineController_A02_bak2_DWork.s276_UnitDelay2_DSTATE = 0.0;

      /* S-Function Block: <S285>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BaseEngineController_A02_bak2_DWork.s285_motohawk_delta_time_DWORK1 =
          now - Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
      }

      /* End of InitializeConditions for SubSystem: '<S131>/O2 PID Controller' */

      /* End of InitializeConditions for SubSystem: '<S112>/O2 Control' */

      /* Level2 S-Function Block: '<S112>/motohawk_trigger1' (motohawk_sfun_trigger) */

      /* Enable for Trigger_FGND_5XRTI_PERIODIC_4926p0004 */
      BaseEngineController_A02_bak2_DWork.s112_motohawk_trigger1_DWORK1 = 1;
      BaseEngineController_A02_bak2_DWork.s7_Run_MODE = TRUE;
    }

    /* S-Function Block: <S121>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_l = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_js, (real_T *) ((ACPresOffTbl_DataStore())), 9);
      (ACPresOff_DataStore()) = rtb_motohawk_interpolation_1d_l;
    }

    /* RelationalOperator: '<S137>/LT' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S121>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_prelookup): '<S427>/motohawk_prelookup'
     */
    rtb_BelowLoTarget_e = (BaseEngineController_A02_bak2_B.s552_Merge >=
      rtb_motohawk_interpolation_1d_l);

    /* S-Function Block: <S121>/motohawk_interpolation_1d1 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d1_f = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_js, (real_T *) ((ACPresOnTbl_DataStore())), 9);
      (ACPresOn_DataStore()) = rtb_motohawk_interpolation_1d1_f;
    }

    /* RelationalOperator: '<S137>/LT1' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S121>/motohawk_interpolation_1d1'
     *  S-Function (motohawk_sfun_prelookup): '<S427>/motohawk_prelookup'
     */
    rtb_AboveHiTarget_k = (BaseEngineController_A02_bak2_B.s552_Merge <=
      rtb_motohawk_interpolation_1d1_f);

    /* CombinatorialLogic: '<S142>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_e != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_AboveHiTarget_k != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_j[0] =
        BaseEngineController_A02_bak2_ConstP.pooled706[rowidx];
      rtb_CombinatorialLogic_j[1] =
        BaseEngineController_A02_bak2_ConstP.pooled706[rowidx + 4];
    }

    /* Switch: '<S142>/Switch1' incorporates:
     *  UnitDelay: '<S142>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_j[1]) {
      rtb_Switch1_nt = rtb_CombinatorialLogic_j[0];
    } else {
      rtb_Switch1_nt = BaseEngineController_A02_bak2_DWork.s142_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S142>/Switch1' */

    /* Logic: '<S121>/Logical Operator1' */
    BaseEngineController_A02_bak2_B.s121_LogicalOperator1 = !rtb_Switch1_nt;

    /* S-Function Block: <S121>/motohawk_interpolation_1d2 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d2_l = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_js, (real_T *) ((ACTempOnTbl_DataStore())), 9);
      (ACTempOn_DataStore()) = rtb_motohawk_interpolation_1d2_l;
    }

    /* RelationalOperator: '<S136>/LT' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S121>/motohawk_interpolation_1d2'
     *  S-Function (motohawk_sfun_prelookup): '<S427>/motohawk_prelookup'
     */
    rtb_AboveHiTarget_k = (BaseEngineController_A02_bak2_B.s646_Merge >=
      rtb_motohawk_interpolation_1d2_l);

    /* S-Function Block: <S121>/motohawk_interpolation_1d3 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d3_k = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_js, (real_T *) ((ACTempOffTbl_DataStore())), 9);
      (ACTempOff_DataStore()) = rtb_motohawk_interpolation_1d3_k;
    }

    /* RelationalOperator: '<S136>/LT1' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S121>/motohawk_interpolation_1d3'
     *  S-Function (motohawk_sfun_prelookup): '<S427>/motohawk_prelookup'
     */
    rtb_BelowLoTarget_e = (BaseEngineController_A02_bak2_B.s646_Merge <=
      rtb_motohawk_interpolation_1d3_k);

    /* CombinatorialLogic: '<S141>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_AboveHiTarget_k != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_e != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_j[0] =
        BaseEngineController_A02_bak2_ConstP.pooled706[rowidx];
      rtb_CombinatorialLogic_j[1] =
        BaseEngineController_A02_bak2_ConstP.pooled706[rowidx + 4];
    }

    /* Switch: '<S141>/Switch1' incorporates:
     *  UnitDelay: '<S141>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_j[1]) {
      BaseEngineController_A02_bak2_B.s141_Switch1 = rtb_CombinatorialLogic_j[0];
    } else {
      BaseEngineController_A02_bak2_B.s141_Switch1 =
        BaseEngineController_A02_bak2_DWork.s141_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S141>/Switch1' */

    /* RelationalOperator: '<S135>/LT' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S121>/motohawk_calibration2'
     */
    rtb_AboveHiTarget_k = (BaseEngineController_A02_bak2_B.s538_Sum1 >=
      (ACSpdSlowOn_DataStore()));

    /* RelationalOperator: '<S135>/LT1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S121>/motohawk_calibration1'
     */
    rtb_BelowLoTarget_e = (BaseEngineController_A02_bak2_B.s538_Sum1 <=
      (ACSpdSlowOff_DataStore()));

    /* CombinatorialLogic: '<S140>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_AboveHiTarget_k != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_e != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_j[0] =
        BaseEngineController_A02_bak2_ConstP.pooled706[rowidx];
      rtb_CombinatorialLogic_j[1] =
        BaseEngineController_A02_bak2_ConstP.pooled706[rowidx + 4];
    }

    /* Switch: '<S140>/Switch1' incorporates:
     *  UnitDelay: '<S140>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_j[1]) {
      BaseEngineController_A02_bak2_B.s140_Switch1 = rtb_CombinatorialLogic_j[0];
    } else {
      BaseEngineController_A02_bak2_B.s140_Switch1 =
        BaseEngineController_A02_bak2_DWork.s140_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S140>/Switch1' */

    /* RelationalOperator: '<S133>/LT' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S121>/motohawk_calibration3'
     */
    rtb_AboveHiTarget_k = (BaseEngineController_A02_bak2_B.s538_Sum1 >=
      (ACSpdFastOff_DataStore()));

    /* RelationalOperator: '<S133>/LT1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S121>/motohawk_calibration4'
     */
    rtb_BelowLoTarget_e = (BaseEngineController_A02_bak2_B.s538_Sum1 <=
      (ACSpdFastOn_DataStore()));

    /* CombinatorialLogic: '<S138>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_AboveHiTarget_k != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_e != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_j[0] =
        BaseEngineController_A02_bak2_ConstP.pooled706[rowidx];
      rtb_CombinatorialLogic_j[1] =
        BaseEngineController_A02_bak2_ConstP.pooled706[rowidx + 4];
    }

    /* Switch: '<S138>/Switch1' incorporates:
     *  UnitDelay: '<S138>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_j[1]) {
      rtb_Switch1_gz = rtb_CombinatorialLogic_j[0];
    } else {
      rtb_Switch1_gz = BaseEngineController_A02_bak2_DWork.s138_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S138>/Switch1' */

    /* Logic: '<S121>/Logical Operator2' */
    BaseEngineController_A02_bak2_B.s121_LogicalOperator2 = !rtb_Switch1_gz;

    /* RelationalOperator: '<S134>/LT' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S121>/motohawk_calibration5'
     */
    rtb_AboveHiTarget_k = (BaseEngineController_A02_bak2_B.s403_Switch2 >=
      (AC_TPSOff_DataStore()));

    /* RelationalOperator: '<S134>/LT1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S121>/motohawk_calibration6'
     */
    rtb_BelowLoTarget_e = (BaseEngineController_A02_bak2_B.s403_Switch2 <=
      (AC_TPSOn_DataStore()));

    /* CombinatorialLogic: '<S139>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_AboveHiTarget_k != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_e != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_j[0] =
        BaseEngineController_A02_bak2_ConstP.pooled706[rowidx];
      rtb_CombinatorialLogic_j[1] =
        BaseEngineController_A02_bak2_ConstP.pooled706[rowidx + 4];
    }

    /* Switch: '<S139>/Switch1' incorporates:
     *  UnitDelay: '<S139>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_j[1]) {
      rtb_Switch1_a = rtb_CombinatorialLogic_j[0];
    } else {
      rtb_Switch1_a = BaseEngineController_A02_bak2_DWork.s139_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S139>/Switch1' */

    /* Logic: '<S121>/Logical Operator4' */
    BaseEngineController_A02_bak2_B.s121_LogicalOperator4 = !rtb_Switch1_a;

    /* Switch: '<S121>/Switch' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S121>/motohawk_calibration'
     */
    if (((uint8_T)(ACMode_DataStore())) > 0) {
      rtb_AboveHiTarget_k =
        BaseEngineController_A02_bak2_B.s121_LogicalOperator1;
    } else {
      rtb_AboveHiTarget_k = BaseEngineController_A02_bak2_B.s141_Switch1;
    }

    /* End of Switch: '<S121>/Switch' */

    /* Logic: '<S121>/Logical Operator3' */
    rtb_RelationalOperator2_m = (BaseEngineController_A02_bak2_B.s140_Switch1 &&
      BaseEngineController_A02_bak2_B.s121_LogicalOperator2);

    /* Logic: '<S121>/Logical Operator' incorporates:
     *  S-Function (motohawk_sfun_fault_action): '<S121>/motohawk_fault_action'
     */
    BaseEngineController_A02_bak2_B.s121_LogicalOperator =
      ((BaseEngineController_A02_bak2_B.s450_Merge && rtb_AboveHiTarget_k &&
        rtb_RelationalOperator2_m &&
        BaseEngineController_A02_bak2_B.s121_LogicalOperator4 &&
        GetFaultActionStatus(2)));

    /* Outputs for Enabled SubSystem: '<S122>/ShutDownTasksComplete Reset' incorporates:
     *  EnablePort: '<S145>/Enable'
     */
    /* S-Function (motohawk_sfun_calibration): '<S122>/motohawk_calibration2' */
    if ((AirControlSource_DataStore())) {
      /* S-Function (motohawk_sfun_data_write): '<S145>/motohawk_data_write' incorporates:
       *  Constant: '<S145>/Constant'
       */
      /* Write to Data Storage as scalar: ShutDownTasksComplete */
      {
        ShutDownTasksComplete_DataStore() = TRUE;
      }
    }

    /* End of S-Function (motohawk_sfun_calibration): '<S122>/motohawk_calibration2' */
    /* End of Outputs for SubSystem: '<S122>/ShutDownTasksComplete Reset' */

    /* Outputs for Atomic SubSystem: '<S112>/Base Equiv Ratio' */

    /* S-Function Block: <S123>/motohawk_interpolation_2d1 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_WarmUpMult = TableInterpolation2D_real_T(rtb_motohawk_prelookup_j,
        rtb_motohawk_prelookup_b, (real_T *) ((WarmUpEqRatioMultMap_DataStore())),
        5, 9);
      (WarmUpEqRatioMult_DataStore()) = rtb_WarmUpMult;
    }

    /* S-Function Block: <S146>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_m = TableInterpolation1D_real_T
        (BaseEngineController_A02_bak2_B.s388_motohawk_prelookup, (real_T *)
         ((Warmup_Time_HoldoffTbl_DataStore())), 5);
      (Warmup_Time_Holdoff_DataStore()) = rtb_motohawk_interpolation_1d_m;
    }

    /* Switch: '<S146>/Switch' incorporates:
     *  Constant: '<S146>/Constant'
     *  RelationalOperator: '<S146>/Relational Operator'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S146>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_interpolation_2d): '<S123>/motohawk_interpolation_2d2'
     *  S-Function (motohawk_sfun_prelookup): '<S351>/motohawk_prelookup2'
     */
    if (BaseEngineController_A02_bak2_B.s423_Switch >=
        rtb_motohawk_interpolation_1d_m) {
      /* S-Function Block: <S123>/motohawk_interpolation_2d2 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_WarmUptimeMult = TableInterpolation2D_real_T(rtb_TimeSinceRun09,
          BaseEngineController_A02_bak2_B.s388_motohawk_prelookup, (real_T *)
          ((WarmUpTimeMultMap_DataStore())), 9, 5);
        (WarmUpTimeMult_DataStore()) = rtb_WarmUptimeMult;
      }

      rtb_Switch_fm = rtb_WarmUptimeMult;
    } else {
      rtb_Switch_fm = 1.0;
    }

    /* End of Switch: '<S146>/Switch' */
    /* S-Function Block: <S123>/motohawk_interpolation_2d4 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_ECTEnrichment = TableInterpolation2D_real_T
        (BaseEngineController_A02_bak2_B.s431_motohawk_prelookup1,
         BaseEngineController_A02_bak2_B.s388_motohawk_prelookup, (real_T *)
         ((CoolantTempEnrichmentMap_DataStore())), 9, 5);
      (CoolantTempEnrichment_DataStore()) = rtb_ECTEnrichment;
    }

    /* S-Function Block: <S123>/motohawk_interpolation_2d5 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_IATEnrichment = TableInterpolation2D_real_T
        (BaseEngineController_A02_bak2_B.s431_motohawk_prelookup1,
         BaseEngineController_A02_bak2_B.s389_motohawk_prelookup, (real_T *)
         ((IntakeAirTempEnrichmentMap_DataStore())), 9, 5);
      (IntakeAirTempEnrichment_DataStore()) = rtb_IATEnrichment;
    }

    /* S-Function Block: <S123>/motohawk_interpolation_2d3 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_motohawk_interpolation_2d3 = TableInterpolation2D_real_T
        (BaseEngineController_A02_bak2_B.s431_motohawk_prelookup4,
         BaseEngineController_A02_bak2_B.s390_Indexes, (real_T *)
         ((DesEquivRatioMap_DataStore())), 17, 17);
      (DesEquivRatio_DataStore()) = rtb_motohawk_interpolation_2d3;
    }

    /* If: '<S147>/If' incorporates:
     *  Inport: '<S148>/In1'
     *  Inport: '<S149>/In1'
     *  S-Function (motohawk_sfun_calibration): '<S147>/new_value'
     *  S-Function (motohawk_sfun_calibration): '<S147>/override_enable'
     */
    if ((EquivRatio_ovr_DataStore())) {
      /* Outputs for IfAction SubSystem: '<S147>/NewValue' incorporates:
       *  ActionPort: '<S148>/Action Port'
       */
      rtb_UnitDelay4_o = (EquivRatio_new_DataStore());

      /* End of Outputs for SubSystem: '<S147>/NewValue' */
    } else {
      /* Outputs for IfAction SubSystem: '<S147>/OldValue' incorporates:
       *  ActionPort: '<S149>/Action Port'
       */
      rtb_UnitDelay4_o = rtb_motohawk_interpolation_2d3;

      /* End of Outputs for SubSystem: '<S147>/OldValue' */
    }

    /* End of If: '<S147>/If' */

    /* Product: '<S123>/Product1' */
    BaseEngineController_A02_bak2_B.s123_DesEquivRatio = rtb_UnitDelay4_o *
      rtb_WarmUpMult * rtb_Switch_fm * rtb_ECTEnrichment * rtb_IATEnrichment;

    /* End of Outputs for SubSystem: '<S112>/Base Equiv Ratio' */

    /* S-Function (motohawk_sfun_trigger): '<S112>/motohawk_trigger1' */
    /* Enable for Trigger_FGND_5XRTI_PERIODIC_4926p0004 */
    if (BaseEngineController_A02_bak2_DWork.s112_motohawk_trigger1_DWORK1 == 0)
    {
      BaseEngineController_A02_bak2_DWork.s112_motohawk_trigger1_DWORK1 = 1;
    }

    /* Stateflow: '<S177>/Multiplexed On Stateflow' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S177>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S177>/motohawk_calibration1'
     */

    /* Gateway: Foreground/Control/Controller/Run/Cruise Control/Cruise Source Selector/Multiplexed On Setup/Multiplexed On Stateflow */
    /* During: Foreground/Control/Controller/Run/Cruise Control/Cruise Source Selector/Multiplexed On Setup/Multiplexed On Stateflow */
    if (BaseEngineController_A02_bak2_DWork.s179_is_active_c1_BaseEngineController_A02_bak2
        == 0) {
      /* Entry: Foreground/Control/Controller/Run/Cruise Control/Cruise Source Selector/Multiplexed On Setup/Multiplexed On Stateflow */
      BaseEngineController_A02_bak2_DWork.s179_is_active_c1_BaseEngineController_A02_bak2
        = 1U;

      /* Transition: '<S179>:9' */
      BaseEngineController_A02_bak2_DWork.s179_is_c1_BaseEngineController_A02_bak2
        = BaseEngineController_A02_bak2_IN_CruiseOff;
    } else {
      switch
        (BaseEngineController_A02_bak2_DWork.s179_is_c1_BaseEngineController_A02_bak2)
      {
       case BaseEngineController_A02_bak2_IN_CruiseOff:
        /* During 'CruiseOff': '<S179>:6' */
        if (rtb_Product1_i != 0.0) {
          /* Transition: '<S179>:10' */
          BaseEngineController_A02_bak2_DWork.s179_is_c1_BaseEngineController_A02_bak2
            = BaseEngineController_A02_bak2_IN_CruiseOn;
        } else {
          BaseEngineController_A02_bak2_B.s179_Out = 0.0;
        }
        break;

       case BaseEngineController_A02_bak2_IN_CruiseOn:
        /* During 'CruiseOn': '<S179>:7' */
        if (((rtb_Product1_i != 0.0) && (((uint8_T)(MultiplexedOnType_DataStore()))
              == 0)) || ((~(int32_T)rtb_Product1_i != 0) && (((uint8_T)
               (MultiplexedOnType_DataStore())) == 1)) || ((rtb_Product1_f !=
              0.0) && ((((uint8_T)(MultiplexedOffType_DataStore())) == 0) ||
                       (((uint8_T)(MultiplexedOffType_DataStore())) == 1)))) {
          /* Transition: '<S179>:11' */
          BaseEngineController_A02_bak2_DWork.s179_is_c1_BaseEngineController_A02_bak2
            = BaseEngineController_A02_bak2_IN_CruiseOff;
        } else {
          BaseEngineController_A02_bak2_B.s179_Out = 1.0;
        }
        break;

       default:
        /* Transition: '<S179>:9' */
        BaseEngineController_A02_bak2_DWork.s179_is_c1_BaseEngineController_A02_bak2
          = BaseEngineController_A02_bak2_IN_CruiseOff;
        break;
      }
    }

    /* End of Stateflow: '<S177>/Multiplexed On Stateflow' */
    /* Logic: '<S169>/Logical Operator2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S125>/motohawk_calibration'
     */
    rtb_AboveHiTarget_k = !(((uint8_T)(CruiseInputSource_DataStore())) != 0);

    /* Stateflow: '<S176>/Individual On Stateflow' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S176>/motohawk_calibration'
     */

    /* Gateway: Foreground/Control/Controller/Run/Cruise Control/Cruise Source Selector/Individual On Setup/Individual On Stateflow */
    /* During: Foreground/Control/Controller/Run/Cruise Control/Cruise Source Selector/Individual On Setup/Individual On Stateflow */
    if (BaseEngineController_A02_bak2_DWork.s178_is_active_c3_BaseEngineController_A02_bak2
        == 0) {
      /* Entry: Foreground/Control/Controller/Run/Cruise Control/Cruise Source Selector/Individual On Setup/Individual On Stateflow */
      BaseEngineController_A02_bak2_DWork.s178_is_active_c3_BaseEngineController_A02_bak2
        = 1U;

      /* Transition: '<S178>:9' */
      BaseEngineController_A02_bak2_DWork.s178_is_c3_BaseEngineController_A02_bak2
        = BaseEngineController_A02_bak2_IN_CruiseOff;
    } else {
      switch
        (BaseEngineController_A02_bak2_DWork.s178_is_c3_BaseEngineController_A02_bak2)
      {
       case BaseEngineController_A02_bak2_IN_CruiseOff:
        /* During 'CruiseOff': '<S178>:6' */
        if (BaseEngineController_A02_bak2_B.s491_Merge) {
          /* Transition: '<S178>:10' */
          BaseEngineController_A02_bak2_DWork.s178_is_c3_BaseEngineController_A02_bak2
            = BaseEngineController_A02_bak2_IN_CruiseOn;
        } else {
          BaseEngineController_A02_bak2_B.s178_Out = 0.0;
        }
        break;

       case BaseEngineController_A02_bak2_IN_CruiseOn:
        /* During 'CruiseOn': '<S178>:7' */
        if ((BaseEngineController_A02_bak2_B.s491_Merge && (((uint8_T)
               (IndividualOnType_DataStore())) == 0)) ||
            ((~BaseEngineController_A02_bak2_B.s491_Merge != 0) && (((uint8_T)
               (IndividualOnType_DataStore())) == 1))) {
          /* Transition: '<S178>:11' */
          BaseEngineController_A02_bak2_DWork.s178_is_c3_BaseEngineController_A02_bak2
            = BaseEngineController_A02_bak2_IN_CruiseOff;
        } else {
          BaseEngineController_A02_bak2_B.s178_Out = 1.0;
        }
        break;

       default:
        /* Transition: '<S178>:9' */
        BaseEngineController_A02_bak2_DWork.s178_is_c3_BaseEngineController_A02_bak2
          = BaseEngineController_A02_bak2_IN_CruiseOff;
        break;
      }
    }

    /* End of Stateflow: '<S176>/Individual On Stateflow' */

    /* Switch: '<S169>/Switch' */
    if (rtb_AboveHiTarget_k) {
      BaseEngineController_A02_bak2_B.s169_Switch =
        BaseEngineController_A02_bak2_B.s179_Out;
    } else {
      BaseEngineController_A02_bak2_B.s169_Switch =
        BaseEngineController_A02_bak2_B.s178_Out;
    }

    /* End of Switch: '<S169>/Switch' */

    /* Logic: '<S125>/Logical Operator' incorporates:
     *  S-Function (motohawk_sfun_fault_action): '<S125>/motohawk_fault_action'
     */
    rtb_LogicalOperator_boa = (GetFaultActionStatus(3) &&
      BaseEngineController_A02_bak2_B.s505_Merge &&
      BaseEngineController_A02_bak2_B.s453_Merge &&
      (BaseEngineController_A02_bak2_B.s169_Switch != 0.0));

    /* Logic: '<S125>/Logical Operator1' */
    rtb_BelowLoTarget_e = !rtb_LogicalOperator_boa;

    /* Sum: '<S182>/Sum2' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S125>/motohawk_data_read'
     */
    BaseEngineController_A02_bak2_B.s182_Sum2 = CruiseSpeed_DataStore() -
      BaseEngineController_A02_bak2_B.s538_Sum1;

    /* Product: '<S182>/Product5' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S173>/motohawk_calibration5'
     */
    rtb_UnitDelay4_o = BaseEngineController_A02_bak2_B.s182_Sum2 *
      (CruiseCtlErrorGain_DataStore());

    /* S-Function Block: <S173>/motohawk_prelookup1 */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (CruiseCtlSpeedErrorIn_DataStore()) =
        BaseEngineController_A02_bak2_B.s182_Sum2;
      (CruiseCtlSpeedErrorIdx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_A02_bak2_B.s182_Sum2,
         (CruiseCtlSpeedErrorIdxArr_DataStore()), 9,
         (CruiseCtlSpeedErrorIdx_DataStore()));
      rtb_motohawk_prelookup1_k = (CruiseCtlSpeedErrorIdx_DataStore());
    }

    /* S-Function Block: <S180>/motohawk_interpolation_1d2 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d2_ps = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup1_k, (real_T *)
         ((CruiseCtlPGainErrorMultTbl_DataStore())), 9);
      (CruiseCtlPGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d2_ps;
    }

    /* Product: '<S182>/Product2' incorporates:
     *  Product: '<S180>/Product2'
     *  S-Function (motohawk_sfun_calibration): '<S180>/motohawk_calibration3'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S180>/motohawk_interpolation_1d2'
     *  S-Function (motohawk_sfun_prelookup): '<S173>/motohawk_prelookup1'
     */
    BaseEngineController_A02_bak2_B.s182_Product2 = (CruiseCtlPGain_DataStore())
      * rtb_motohawk_interpolation_1d2_ps * rtb_UnitDelay4_o;

    /* UnitDelay: '<S183>/Unit Delay' */
    rtb_Product1_f = BaseEngineController_A02_bak2_DWork.s183_UnitDelay_DSTATE;

    /* S-Function Block: <S180>/motohawk_interpolation_1d3 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d3_c = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup1_k, (real_T *)
         ((CruiseCtlDGainErrorMultTbl_DataStore())), 9);
      (CruiseCtlDGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d3_c;
    }

    /* Product: '<S182>/Product4' incorporates:
     *  Product: '<S180>/Product3'
     *  S-Function (motohawk_sfun_calibration): '<S180>/motohawk_calibration2'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S180>/motohawk_interpolation_1d3'
     *  S-Function (motohawk_sfun_prelookup): '<S173>/motohawk_prelookup1'
     */
    rtb_Product4_k = (CruiseCtlDGain_DataStore()) *
      rtb_motohawk_interpolation_1d3_c * rtb_UnitDelay4_o;

    /* Sum: '<S183>/Sum2' */
    rtb_Product1_f = rtb_Product4_k - rtb_Product1_f;

    /* S-Function Block: <S183>/motohawk_delta_time */
    rtb_motohawk_delta_time_ff = 0.005;

    /* Product: '<S183>/Product' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S183>/motohawk_delta_time'
     */
    BaseEngineController_A02_bak2_B.s183_Product = rtb_Product1_f /
      rtb_motohawk_delta_time_ff;

    /* Switch: '<S184>/Switch1' incorporates:
     *  Constant: '<S173>/Constant'
     *  UnitDelay: '<S184>/Unit Delay'
     */
    if (rtb_BelowLoTarget_e) {
      BaseEngineController_A02_bak2_B.s184_Switch1 = 0.0;
    } else {
      BaseEngineController_A02_bak2_B.s184_Switch1 =
        BaseEngineController_A02_bak2_DWork.s184_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S184>/Switch1' */

    /* Switch: '<S173>/Switch' incorporates:
     *  Constant: '<S173>/Constant1'
     */
    if (rtb_BelowLoTarget_e) {
      BaseEngineController_A02_bak2_B.s173_Switch = 0.0;
    } else {
      /* MinMax: '<S181>/MinMax' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S173>/motohawk_calibration9'
       *  Sum: '<S182>/Sum1'
       */
      u = (BaseEngineController_A02_bak2_B.s182_Product2 +
           BaseEngineController_A02_bak2_B.s183_Product) +
        BaseEngineController_A02_bak2_B.s184_Switch1;
      u = (u >= (CruiseCtlPIDOutLowerLimit_DataStore())) || rtIsNaN
        ((CruiseCtlPIDOutLowerLimit_DataStore())) ? u :
        (CruiseCtlPIDOutLowerLimit_DataStore());

      /* MinMax: '<S181>/MinMax1' incorporates:
       *  MinMax: '<S181>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S173>/motohawk_calibration2'
       */
      BaseEngineController_A02_bak2_B.s173_Switch = (u <=
        (CruiseCtlPIDOutUpperLimit_DataStore())) || rtIsNaN
        ((CruiseCtlPIDOutUpperLimit_DataStore())) ? u :
        (CruiseCtlPIDOutUpperLimit_DataStore());
    }

    /* End of Switch: '<S173>/Switch' */

    /* Sum: '<S122>/Sum2' */
    rtb_Product1_f =
      BaseEngineController_A02_bak2_B.s241_DontallowsetpointtoeverdropbelowtheTargetRPM
      + BaseEngineController_A02_bak2_B.s130_MinGovAirPID;

    /* MultiPortSwitch: '<S122>/Multiport Switch' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S122>/motohawk_calibration2'
     */
    if ((AirControlSource_DataStore()) == FALSE) {
      /* Switch: '<S122>/Switch1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S122>/motohawk_calibration1'
       */
      if ((ThrottleSource_DataStore())) {
        /* S-Function Block: <S122>/motohawk_interpolation_1d2 */
        {
          extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T
            *tbl_data, uint32_T sz);
          rtb_motohawk_interpolation_1d2_g = TableInterpolation1D_real_T
            (BaseEngineController_A02_bak2_B.s390_motohawk_prelookup1, (real_T *)
             ((MaxETCSetPtLimitTbl_DataStore())), 9);
          (MaxETCSetPtLimit_DataStore()) = rtb_motohawk_interpolation_1d2_g;
        }

        /* Switch: '<S122>/Switch2' */
        if (BaseEngineController_A02_bak2_B.s215_MultiportSwitch) {
          rtb_Product1_f = BaseEngineController_A02_bak2_B.s218_Switch;
        } else {
          /* Switch: '<S125>/Switch' incorporates:
           *  Constant: '<S125>/Constant'
           */
          if (rtb_LogicalOperator_boa) {
            rtb_Product1_i = BaseEngineController_A02_bak2_B.s173_Switch;
          } else {
            rtb_Product1_i = 0.0;
          }

          /* End of Switch: '<S125>/Switch' */

          /* Switch: '<S122>/Switch3' incorporates:
           *  Constant: '<S143>/Constant'
           *  RelationalOperator: '<S143>/RelOp'
           *  Sum: '<S122>/Sum'
           */
          if (rtb_Product1_i > 0.0) {
            rtb_Product1_f =
              BaseEngineController_A02_bak2_B.s241_DontallowsetpointtoeverdropbelowtheTargetRPM
              + rtb_Product1_i;
          } else {
            /* Switch: '<S122>/Switch4' incorporates:
             *  Logic: '<S122>/Logical Operator'
             *  Sum: '<S122>/Sum1'
             */
            if (!BaseEngineController_A02_bak2_B.s251_RelOp) {
              rtb_Product1_f = BaseEngineController_A02_bak2_B.s410_Sum2 +
                BaseEngineController_A02_bak2_B.s241_DontallowsetpointtoeverdropbelowtheTargetRPM;
            }

            /* End of Switch: '<S122>/Switch4' */
          }

          /* End of Switch: '<S122>/Switch3' */
        }

        /* End of Switch: '<S122>/Switch2' */

        /* MinMax: '<S144>/MinMax' incorporates:
         *  S-Function (motohawk_sfun_calibration): '<S122>/motohawk_calibration3'
         */
        u = (rtb_Product1_f >= (MinETCSetpoint_DataStore())) || rtIsNaN
          ((MinETCSetpoint_DataStore())) ? rtb_Product1_f :
          (MinETCSetpoint_DataStore());

        /* MinMax: '<S144>/MinMax1' incorporates:
         *  MinMax: '<S144>/MinMax'
         */
        rtb_Product1_f = (u <= rtb_motohawk_interpolation_1d2_g) || rtIsNaN
          (rtb_motohawk_interpolation_1d2_g) ? u :
          rtb_motohawk_interpolation_1d2_g;
      } else {
        rtb_Product1_f = BaseEngineController_A02_bak2_B.s668_Merge;
      }

      /* End of Switch: '<S122>/Switch1' */
      BaseEngineController_A02_bak2_B.s122_MultiportSwitch = rtb_Product1_f;
    } else {
      BaseEngineController_A02_bak2_B.s122_MultiportSwitch = rtb_Product1_f;
    }

    /* End of MultiPortSwitch: '<S122>/Multiport Switch' */

    /* S-Function (motohawk_sfun_data_write): '<S122>/motohawk_data_write' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S122>/motohawk_calibration'
     */
    /* Write to Data Storage as scalar: IACType */
    {
      IACType_DataStore() = (IACTypeCal_DataStore());
    }

    /* Gain: '<S124>/kPa to PSI' incorporates:
     *  Sum: '<S124>/Sum1'
     */
    rtb_Switch_j = (BaseEngineController_A02_bak2_B.s589_Merge -
                    BaseEngineController_A02_bak2_B.s355_Sum) * 0.145038;

    /* RelationalOperator: '<S124>/Relational Operator' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S124>/motohawk_calibration2'
     */
    rtb_BelowLoTarget_e = (rtb_Switch_j < (BoostActivationThreshold_DataStore()));

    /* UnitDelay: '<S124>/Unit Delay' */
    rtb_Product1_i = BaseEngineController_A02_bak2_DWork.s124_UnitDelay_DSTATE;

    /* Outputs for Enabled SubSystem: '<S124>/BoostControl Adapt' incorporates:
     *  EnablePort: '<S150>/Enable'
     */
    /* Logic: '<S124>/Logical Operator' */
    if (!rtb_BelowLoTarget_e) {
      /* Product: '<S150>/Product0' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S150>/motohawk_calibration2'
       */
      rtb_Product1_f = rtb_Product1_i * (BoostControlAdaptGain_DataStore());

      /* MinMax: '<S157>/MinMax' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S155>/motohawk_calibration'
       */
      rtb_Sum_pd = (rtb_Product1_f >= (BoostAdaptErrorLwrLim_DataStore())) ||
        rtIsNaN((BoostAdaptErrorLwrLim_DataStore())) ? rtb_Product1_f :
        (BoostAdaptErrorLwrLim_DataStore());

      /* MinMax: '<S157>/MinMax1' incorporates:
       *  MinMax: '<S157>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S155>/motohawk_calibration1'
       */
      rtb_MinMax1_pb = (rtb_Sum_pd <= (BoostAdaptErrorUprLim_DataStore())) ||
        rtIsNaN((BoostAdaptErrorUprLim_DataStore())) ? rtb_Sum_pd :
        (BoostAdaptErrorUprLim_DataStore());

      /* Outputs for Atomic SubSystem: '<S150>/BoostControl Enable Delay' */

      /* S-Function Block: <S156>/motohawk_delta_time */
      rtb_motohawk_delta_time_mx = 0.005;
      rtb_Product1_f = rtb_motohawk_delta_time_mx + BoostTimer_DataStore();

      /* RelationalOperator: '<S154>/Relational Operator' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S154>/motohawk_calibration1'
       */
      rtb_RelationalOperator2_m = (rtb_Product1_f >
        (BoostAdaptDelayTime_DataStore()));

      /* Saturate: '<S156>/Saturation' */
      rtb_Saturation_cs = rtb_Product1_f >= 16000.0 ? 16000.0 : rtb_Product1_f <=
        0.0 ? 0.0 : rtb_Product1_f;

      /* S-Function (motohawk_sfun_data_write): '<S156>/motohawk_data_write' */
      /* Write to Data Storage as scalar: BoostTimer */
      {
        BoostTimer_DataStore() = rtb_Saturation_cs;
      }

      /* End of Outputs for SubSystem: '<S150>/BoostControl Enable Delay' */

      /* Logic: '<S150>/Logical Operator1' incorporates:
       *  Abs: '<S150>/Abs'
       *  RelationalOperator: '<S150>/Relational Operator'
       *  S-Function (motohawk_sfun_calibration): '<S150>/motohawk_calibration3'
       *  S-Function (motohawk_sfun_calibration): '<S150>/motohawk_calibration4'
       */
      BaseEngineController_A02_bak2_B.s150_LogicalOperator1 =
        (((BoostControlAdaptEnable_DataStore()) && rtb_RelationalOperator2_m &&
          (fabs(rtb_Product1_i) <= (BoostControlAdaptDelta_DataStore()))));

      /* Outputs for Enabled SubSystem: '<S150>/Adapt Boost Table' incorporates:
       *  EnablePort: '<S153>/Enable'
       */
      if (BaseEngineController_A02_bak2_B.s150_LogicalOperator1) {
        /* S-Function Block: <S153>/motohawk_adapt_table */
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
                rtb_MinMax1_pb;
              if (_new > (BoostControlOfstMaxValue_DataStore()))
                _new = (BoostControlOfstMaxValue_DataStore());
              if (_new < (BoostControlOfstMinValue_DataStore()))
                _new = (BoostControlOfstMinValue_DataStore());
              (BoostControlBase_AdaptMap_DataStore())[_row][_col] = _new;
            } else if (_col_frac == 3) {
              _new = (BoostControlBase_AdaptMap_DataStore())[_row][_col+1] +
                rtb_MinMax1_pb;
              if (_new > (BoostControlOfstMaxValue_DataStore()))
                _new = (BoostControlOfstMaxValue_DataStore());
              if (_new < (BoostControlOfstMinValue_DataStore()))
                _new = (BoostControlOfstMinValue_DataStore());
              (BoostControlBase_AdaptMap_DataStore())[_row][_col+1] = _new;
            } else {
              real_T _half = (rtb_MinMax1_pb) / 2;
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
              real_T _half = (rtb_MinMax1_pb) / 2;
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
              real_T _quarter = (rtb_MinMax1_pb) / 4;
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

      /* End of Outputs for SubSystem: '<S150>/Adapt Boost Table' */
    }

    /* End of Logic: '<S124>/Logical Operator' */
    /* End of Outputs for SubSystem: '<S124>/BoostControl Adapt' */

    /* Switch: '<S162>/Switch1' incorporates:
     *  Constant: '<S151>/Constant'
     *  UnitDelay: '<S162>/Unit Delay'
     */
    if (rtb_BelowLoTarget_e) {
      BaseEngineController_A02_bak2_B.s162_Switch1 = 0.0;
    } else {
      BaseEngineController_A02_bak2_B.s162_Switch1 =
        BaseEngineController_A02_bak2_DWork.s162_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S162>/Switch1' */

    /* S-Function Block: <S152>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_bak2_DWork.s152_motohawk_delta_time_DWORK1,
         NULL);
      rtb_motohawk_delta_time_hp = ((real_T) delta) * 0.000001;
    }

    /* Switch: '<S124>/Switch1' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S124>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S124>/motohawk_interpolation_1d1'
     *  Sum: '<S124>/Sum2'
     */
    if (BaseEngineController_A02_bak2_B.s526_Merge) {
      /* S-Function Block: <S124>/motohawk_interpolation_1d1 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d1_ox = TableInterpolation1D_real_T
          (BaseEngineController_A02_bak2_B.s390_motohawk_prelookup1, (real_T *)
           ((BoostTarget_TwoStepTbl_DataStore())), 9);
        (BoostTarget_TwoStep_DataStore()) = rtb_motohawk_interpolation_1d1_ox;
      }

      BaseEngineController_A02_bak2_B.s124_Switch1 =
        rtb_motohawk_interpolation_1d1_ox;
    } else {
      /* Product: '<S124>/Product' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S124>/motohawk_calibration3'
       */
      rtb_Product1_f = (real_T)BaseEngineController_A02_bak2_B.s521_Merge *
        (BoostScrambleAdder_DataStore());

      /* S-Function Block: <S124>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d_ej = TableInterpolation1D_real_T
          (BaseEngineController_A02_bak2_B.s390_motohawk_prelookup1, (real_T *)
           ((BoostTargetTbl_DataStore())), 9);
        (BoostTarget_DataStore()) = rtb_motohawk_interpolation_1d_ej;
      }

      BaseEngineController_A02_bak2_B.s124_Switch1 =
        rtb_motohawk_interpolation_1d_ej + rtb_Product1_f;
    }

    /* End of Switch: '<S124>/Switch1' */

    /* UnitDelay: '<S152>/Unit Delay' */
    rtb_Product1_f = BaseEngineController_A02_bak2_DWork.s152_UnitDelay_DSTATE;

    /* Product: '<S152>/Product1' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S152>/motohawk_delta_time'
     *  Sum: '<S152>/Sum3'
     *  UnitDelay: '<S152>/Unit Delay'
     */
    rtb_Product1_i = 1.0 / rtb_motohawk_delta_time_hp *
      (BaseEngineController_A02_bak2_B.s124_Switch1 -
       BaseEngineController_A02_bak2_DWork.s152_UnitDelay_DSTATE);

    /* MinMax: '<S165>/MinMax' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S124>/motohawk_calibration1'
     */
    rtb_Sum_pd = (rtb_Product1_i >= (BoostFallRate_DataStore())) || rtIsNaN
      ((BoostFallRate_DataStore())) ? rtb_Product1_i : (BoostFallRate_DataStore());

    /* Sum: '<S152>/Sum2' incorporates:
     *  MinMax: '<S165>/MinMax'
     *  MinMax: '<S165>/MinMax1'
     *  Product: '<S152>/Product'
     *  S-Function (motohawk_sfun_calibration): '<S124>/motohawk_calibration'
     *  S-Function (motohawk_sfun_delta_time): '<S152>/motohawk_delta_time'
     */
    rtb_Sum2_a = ((rtb_Sum_pd <= (BoostRiseRate_DataStore())) || rtIsNaN
                  ((BoostRiseRate_DataStore())) ? rtb_Sum_pd :
                  (BoostRiseRate_DataStore())) * rtb_motohawk_delta_time_hp +
      rtb_Product1_f;

    /* Sum: '<S160>/Sum2' */
    BaseEngineController_A02_bak2_B.s160_Sum2 = rtb_Sum2_a - rtb_Switch_j;

    /* Product: '<S160>/Product5' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S151>/motohawk_calibration5'
     */
    rtb_Product1_i = BaseEngineController_A02_bak2_B.s160_Sum2 *
      (BoostCtlErrorGain_DataStore());

    /* S-Function Block: <S151>/motohawk_prelookup1 */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (BoostCtlSpeedErrorIn_DataStore()) =
        BaseEngineController_A02_bak2_B.s160_Sum2;
      (BoostCtlSpeedErrorIdx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_A02_bak2_B.s160_Sum2,
         (BoostCtlSpeedErrorIdxArr_DataStore()), 9,
         (BoostCtlSpeedErrorIdx_DataStore()));
      rtb_motohawk_prelookup1_lv = (BoostCtlSpeedErrorIdx_DataStore());
    }

    /* S-Function Block: <S158>/motohawk_interpolation_1d2 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d2_c = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup1_lv, (real_T *)
         ((BoostCtlPGainErrorMultTbl_DataStore())), 9);
      (BoostCtlPGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d2_c;
    }

    /* Product: '<S160>/Product2' incorporates:
     *  Product: '<S158>/Product2'
     *  S-Function (motohawk_sfun_calibration): '<S158>/motohawk_calibration3'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S158>/motohawk_interpolation_1d2'
     *  S-Function (motohawk_sfun_prelookup): '<S151>/motohawk_prelookup1'
     */
    BaseEngineController_A02_bak2_B.s160_Product2 = (BoostCtlPGain_DataStore()) *
      rtb_motohawk_interpolation_1d2_c * rtb_Product1_i;

    /* UnitDelay: '<S161>/Unit Delay' */
    rtb_Product1_f = BaseEngineController_A02_bak2_DWork.s161_UnitDelay_DSTATE;

    /* S-Function Block: <S158>/motohawk_interpolation_1d3 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d3_d = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup1_lv, (real_T *)
         ((BoostCtlDGainErrorMultTbl_DataStore())), 9);
      (BoostCtlDGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d3_d;
    }

    /* Product: '<S160>/Product4' incorporates:
     *  Product: '<S158>/Product3'
     *  S-Function (motohawk_sfun_calibration): '<S158>/motohawk_calibration2'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S158>/motohawk_interpolation_1d3'
     *  S-Function (motohawk_sfun_prelookup): '<S151>/motohawk_prelookup1'
     */
    rtb_Product4_l = (BoostCtlDGain_DataStore()) *
      rtb_motohawk_interpolation_1d3_d * rtb_Product1_i;

    /* Sum: '<S161>/Sum2' */
    rtb_Product1_f = rtb_Product4_l - rtb_Product1_f;

    /* S-Function Block: <S161>/motohawk_delta_time */
    rtb_motohawk_delta_time_in = 0.005;

    /* Product: '<S161>/Product' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S161>/motohawk_delta_time'
     */
    BaseEngineController_A02_bak2_B.s161_Product = rtb_Product1_f /
      rtb_motohawk_delta_time_in;

    /* Switch: '<S151>/Switch' incorporates:
     *  Constant: '<S151>/Constant1'
     */
    if (rtb_BelowLoTarget_e) {
      BaseEngineController_A02_bak2_B.s151_Switch = 0.0;
    } else {
      /* MinMax: '<S159>/MinMax' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S151>/motohawk_calibration9'
       *  Sum: '<S160>/Sum1'
       */
      u = (BaseEngineController_A02_bak2_B.s160_Product2 +
           BaseEngineController_A02_bak2_B.s161_Product) +
        BaseEngineController_A02_bak2_B.s162_Switch1;
      u = (u >= (BoostCtlPIDOutLowerLimit_DataStore())) || rtIsNaN
        ((BoostCtlPIDOutLowerLimit_DataStore())) ? u :
        (BoostCtlPIDOutLowerLimit_DataStore());

      /* MinMax: '<S159>/MinMax1' incorporates:
       *  MinMax: '<S159>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S151>/motohawk_calibration2'
       */
      BaseEngineController_A02_bak2_B.s151_Switch = (u <=
        (BoostCtlPIDOutUpperLimit_DataStore())) || rtIsNaN
        ((BoostCtlPIDOutUpperLimit_DataStore())) ? u :
        (BoostCtlPIDOutUpperLimit_DataStore());
    }

    /* End of Switch: '<S151>/Switch' */

    /* S-Function Block: <S124>/motohawk_prelookup */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (BoostTargetIdxIn_DataStore()) =
        BaseEngineController_A02_bak2_B.s124_Switch1;
      (BoostTargetIdxIdx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_A02_bak2_B.s124_Switch1,
         (BoostTargetIdxIdxArr_DataStore()), 9, (BoostTargetIdxIdx_DataStore()));
      rtb_motohawk_prelookup_im = (BoostTargetIdxIdx_DataStore());
    }

    /* S-Function Block: <S124>/motohawk_interpolation_2d1 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_motohawk_interpolation_2d1_b = TableInterpolation2D_real_T
        (rtb_motohawk_prelookup_im,
         BaseEngineController_A02_bak2_B.s390_motohawk_prelookup1, (real_T *)
         ((BoostControlBase_AdaptMap_DataStore())), 9, 9);
      (BoostControlBase_Adapt_DataStore()) = rtb_motohawk_interpolation_2d1_b;
    }

    /* S-Function Block: <S124>/motohawk_interpolation_2d */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_motohawk_interpolation_2d_i = TableInterpolation2D_real_T
        (rtb_motohawk_prelookup_im,
         BaseEngineController_A02_bak2_B.s390_motohawk_prelookup1, (real_T *)
         ((BoostControlBaseMap_DataStore())), 9, 9);
      (BoostControlBase_DataStore()) = rtb_motohawk_interpolation_2d_i;
    }

    /* Sum: '<S124>/Sum' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S124>/motohawk_interpolation_2d'
     *  S-Function (motohawk_sfun_interpolation_2d): '<S124>/motohawk_interpolation_2d1'
     *  S-Function (motohawk_sfun_prelookup): '<S124>/motohawk_prelookup'
     */
    BaseEngineController_A02_bak2_B.s124_Sum = (rtb_motohawk_interpolation_2d1_b
      + rtb_motohawk_interpolation_2d_i) +
      BaseEngineController_A02_bak2_B.s151_Switch;

    /* Switch: '<S124>/Switch' incorporates:
     *  Constant: '<S124>/Constant'
     */
    if (rtb_BelowLoTarget_e) {
      rtb_Switch_j = 0.0;
    } else {
      rtb_Switch_j = BaseEngineController_A02_bak2_B.s124_Sum;
    }

    /* End of Switch: '<S124>/Switch' */

    /* S-Function Block: <S158>/motohawk_interpolation_1d1 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d1_m = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup1_lv, (real_T *)
         ((BoostCtlIGainErrorMultTbl_DataStore())), 9);
      (BoostCtlIGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d1_m;
    }

    /* Product: '<S160>/Product1' incorporates:
     *  Product: '<S158>/Product1'
     *  S-Function (motohawk_sfun_calibration): '<S158>/motohawk_calibration1'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S158>/motohawk_interpolation_1d1'
     *  S-Function (motohawk_sfun_prelookup): '<S151>/motohawk_prelookup1'
     */
    rtb_Product1_f = (BoostCtlIGain_DataStore()) *
      rtb_motohawk_interpolation_1d1_m * rtb_Product1_i;

    /* S-Function Block: <S162>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_bak2_DWork.s162_motohawk_delta_time_DWORK1,
         NULL);
      rtb_motohawk_delta_time_md = ((real_T) delta) * 0.000001;
    }

    /* Sum: '<S162>/Sum' incorporates:
     *  Product: '<S162>/Product'
     *  S-Function (motohawk_sfun_delta_time): '<S162>/motohawk_delta_time'
     */
    rtb_Product1_i = rtb_Product1_f * rtb_motohawk_delta_time_md +
      BaseEngineController_A02_bak2_B.s162_Switch1;

    /* MinMax: '<S164>/MinMax' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S151>/motohawk_calibration7'
     */
    rtb_Sum_pd = (rtb_Product1_i >= (BoostCtlITermLowerLimit_DataStore())) ||
      rtIsNaN((BoostCtlITermLowerLimit_DataStore())) ? rtb_Product1_i :
      (BoostCtlITermLowerLimit_DataStore());

    /* MinMax: '<S164>/MinMax1' incorporates:
     *  MinMax: '<S164>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S151>/motohawk_calibration8'
     */
    rtb_MinMax1_g = (rtb_Sum_pd <= (BoostCtlITermUpperLimit_DataStore())) ||
      rtIsNaN((BoostCtlITermUpperLimit_DataStore())) ? rtb_Sum_pd :
      (BoostCtlITermUpperLimit_DataStore());

    /* Outputs for Enabled SubSystem: '<S125>/Cruise Off' incorporates:
     *  EnablePort: '<S166>/Enable'
     */
    /* Logic: '<S170>/Logical Operator' incorporates:
     *  Logic: '<S170>/Logical Operator2'
     *  UnitDelay: '<S170>/Unit Delay'
     */
    if ((!rtb_LogicalOperator_boa) &&
        BaseEngineController_A02_bak2_DWork.s170_UnitDelay_DSTATE) {
      /* S-Function (motohawk_sfun_data_write): '<S166>/motohawk_data_write' incorporates:
       *  Constant: '<S166>/Constant'
       */
      /* Write to Data Storage as scalar: CruiseSpeed */
      {
        CruiseSpeed_DataStore() = 0.0;
      }
    }

    /* End of Logic: '<S170>/Logical Operator' */
    /* End of Outputs for SubSystem: '<S125>/Cruise Off' */
    /* Logic: '<S169>/Logical Operator1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S169>/motohawk_calibration'
     */
    rtb_RelationalOperator2_m = ((rtb_Merge_ek != 0.0) && (((uint8_T)
      (MultiplexSETMEnable_DataStore())) != 0));

    /* Switch: '<S169>/Switch1' incorporates:
     *  Logic: '<S169>/Logical Operator'
     *  Logic: '<S169>/Logical Operator3'
     *  S-Function (motohawk_sfun_calibration): '<S169>/motohawk_calibration1'
     */
    if (rtb_AboveHiTarget_k) {
      BaseEngineController_A02_bak2_B.s169_Switch1 = ((rtb_RelationalOperator2_m
        || ((rtb_Merge_hd != 0.0) && (((uint8_T)(MultiplexRSMEnable_DataStore()))
        != 0))));
    } else {
      BaseEngineController_A02_bak2_B.s169_Switch1 =
        BaseEngineController_A02_bak2_B.s496_Merge;
    }

    /* End of Switch: '<S169>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S125>/Cruise RSM_SETP' incorporates:
     *  EnablePort: '<S167>/Enable'
     */
    /* Logic: '<S172>/Logical Operator' incorporates:
     *  Logic: '<S172>/Logical Operator1'
     *  UnitDelay: '<S172>/Unit Delay'
     */
    if (BaseEngineController_A02_bak2_B.s169_Switch1 &&
        (!BaseEngineController_A02_bak2_DWork.s172_UnitDelay_DSTATE)) {
      /* Switch: '<S167>/Switch' incorporates:
       *  Constant: '<S174>/Constant'
       *  RelationalOperator: '<S174>/RelOp'
       *  S-Function (motohawk_sfun_calibration): '<S167>/motohawk_calibration'
       *  S-Function (motohawk_sfun_data_read): '<S167>/motohawk_data_read'
       *  Sum: '<S167>/Sum'
       */
      if (CruiseSpeed_DataStore() == 0.0) {
        /* Switch: '<S167>/Switch1' incorporates:
         *  Constant: '<S175>/Constant'
         *  RelationalOperator: '<S175>/RelOp'
         *  S-Function (motohawk_sfun_data_read): '<S167>/motohawk_data_read1'
         */
        if (CruiseSpeedRsm_DataStore() > 0.0) {
          rtb_Switch_k = CruiseSpeedRsm_DataStore();
        } else {
          rtb_Switch_k = BaseEngineController_A02_bak2_B.s538_Sum1;
        }

        /* End of Switch: '<S167>/Switch1' */
      } else {
        rtb_Switch_k = CruiseSpeed_DataStore() + (CruiseSETPIncrement_DataStore());
      }

      /* End of Switch: '<S167>/Switch' */

      /* S-Function (motohawk_sfun_data_write): '<S167>/motohawk_data_write' */
      /* Write to Data Storage as scalar: CruiseSpeed */
      {
        CruiseSpeed_DataStore() = rtb_Switch_k;
      }

      /* S-Function (motohawk_sfun_data_write): '<S167>/motohawk_data_write1' */
      /* Write to Data Storage as scalar: CruiseSpeedRsm */
      {
        CruiseSpeedRsm_DataStore() = rtb_Switch_k;
      }
    }

    /* End of Logic: '<S172>/Logical Operator' */
    /* End of Outputs for SubSystem: '<S125>/Cruise RSM_SETP' */

    /* Switch: '<S169>/Switch2' */
    if (rtb_AboveHiTarget_k) {
      BaseEngineController_A02_bak2_B.s169_Switch2 = rtb_Sum1_j;
    } else {
      BaseEngineController_A02_bak2_B.s169_Switch2 = (real_T)
        BaseEngineController_A02_bak2_B.s501_Merge;
    }

    /* End of Switch: '<S169>/Switch2' */

    /* DataTypeConversion: '<S171>/Data Type Conversion' */
    rtb_DataTypeConversion_fo = (BaseEngineController_A02_bak2_B.s169_Switch2 !=
      0.0);

    /* Outputs for Enabled SubSystem: '<S125>/Cruise SETM' incorporates:
     *  EnablePort: '<S168>/Enable'
     */
    /* Logic: '<S171>/Logical Operator' incorporates:
     *  Logic: '<S171>/Logical Operator1'
     *  UnitDelay: '<S171>/Unit Delay'
     */
    if (rtb_DataTypeConversion_fo &&
        (!BaseEngineController_A02_bak2_DWork.s171_UnitDelay_DSTATE)) {
      /* Sum: '<S168>/Sum' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S168>/motohawk_calibration'
       *  S-Function (motohawk_sfun_data_read): '<S168>/motohawk_data_read'
       */
      rtb_Sum_dv = CruiseSpeed_DataStore() + (CruiseSETMIncrement_DataStore());

      /* S-Function (motohawk_sfun_data_write): '<S168>/motohawk_data_write' */
      /* Write to Data Storage as scalar: CruiseSpeed */
      {
        CruiseSpeed_DataStore() = rtb_Sum_dv;
      }

      /* S-Function (motohawk_sfun_data_write): '<S168>/motohawk_data_write1' */
      /* Write to Data Storage as scalar: CruiseSpeedRsm */
      {
        CruiseSpeedRsm_DataStore() = rtb_Sum_dv;
      }
    }

    /* End of Logic: '<S171>/Logical Operator' */
    /* End of Outputs for SubSystem: '<S125>/Cruise SETM' */

    /* S-Function Block: <S180>/motohawk_interpolation_1d1 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d1_a = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup1_k, (real_T *)
         ((CruiseCtlIGainErrorMultTbl_DataStore())), 9);
      (CruiseCtlIGainErrorMult_DataStore()) = rtb_motohawk_interpolation_1d1_a;
    }

    /* Product: '<S182>/Product1' incorporates:
     *  Product: '<S180>/Product1'
     *  S-Function (motohawk_sfun_calibration): '<S180>/motohawk_calibration1'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S180>/motohawk_interpolation_1d1'
     *  S-Function (motohawk_sfun_prelookup): '<S173>/motohawk_prelookup1'
     */
    rtb_Product1_f = (CruiseCtlIGain_DataStore()) *
      rtb_motohawk_interpolation_1d1_a * rtb_UnitDelay4_o;

    /* S-Function Block: <S184>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_bak2_DWork.s184_motohawk_delta_time_DWORK1,
         NULL);
      rtb_motohawk_delta_time_ju = ((real_T) delta) * 0.000001;
    }

    /* Sum: '<S184>/Sum' incorporates:
     *  Product: '<S184>/Product'
     *  S-Function (motohawk_sfun_delta_time): '<S184>/motohawk_delta_time'
     */
    rtb_Product1_i = rtb_Product1_f * rtb_motohawk_delta_time_ju +
      BaseEngineController_A02_bak2_B.s184_Switch1;

    /* MinMax: '<S186>/MinMax' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S173>/motohawk_calibration7'
     */
    rtb_Sum_pd = (rtb_Product1_i >= (CruiseCtlITermLowerLimit_DataStore())) ||
      rtIsNaN((CruiseCtlITermLowerLimit_DataStore())) ? rtb_Product1_i :
      (CruiseCtlITermLowerLimit_DataStore());

    /* MinMax: '<S186>/MinMax1' incorporates:
     *  MinMax: '<S186>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S173>/motohawk_calibration8'
     */
    rtb_MinMax1_bm = (rtb_Sum_pd <= (CruiseCtlITermUpperLimit_DataStore())) ||
      rtIsNaN((CruiseCtlITermUpperLimit_DataStore())) ? rtb_Sum_pd :
      (CruiseCtlITermUpperLimit_DataStore());

    /* RelationalOperator: '<S187>/LT' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S126>/motohawk_data_read'
     */
    rtb_AboveHiTarget_k = (BaseEngineController_A02_bak2_B.s637_Merge >=
      ECTFanOn_DataStore());

    /* RelationalOperator: '<S187>/LT1' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S126>/motohawk_data_read1'
     */
    rtb_BelowLoTarget_e = (BaseEngineController_A02_bak2_B.s637_Merge <=
      ECTFanOff_DataStore());

    /* CombinatorialLogic: '<S190>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_AboveHiTarget_k != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_e != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_j[0] =
        BaseEngineController_A02_bak2_ConstP.pooled706[rowidx];
      rtb_CombinatorialLogic_j[1] =
        BaseEngineController_A02_bak2_ConstP.pooled706[rowidx + 4];
    }

    /* Switch: '<S190>/Switch1' incorporates:
     *  UnitDelay: '<S190>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_j[1]) {
      BaseEngineController_A02_bak2_B.s190_Switch1 = rtb_CombinatorialLogic_j[0];
    } else {
      BaseEngineController_A02_bak2_B.s190_Switch1 =
        BaseEngineController_A02_bak2_DWork.s190_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S190>/Switch1' */
    /* Product: '<S126>/Product4' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S126>/motohawk_data_read10'
     */
    rtb_motohawk_data_read9 = (uint8_T)
      (BaseEngineController_A02_bak2_B.s190_Switch1 ? ((uint8_T)
        Fan2ECT_DataStore()) : 0);

    /* RelationalOperator: '<S188>/LT' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S126>/motohawk_data_read2'
     */
    rtb_AboveHiTarget_k = (BaseEngineController_A02_bak2_B.s655_Merge >=
      IATFanOn_DataStore());

    /* RelationalOperator: '<S188>/LT1' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S126>/motohawk_data_read3'
     */
    rtb_BelowLoTarget_e = (BaseEngineController_A02_bak2_B.s655_Merge <=
      IATFanOff_DataStore());

    /* CombinatorialLogic: '<S191>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_AboveHiTarget_k != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_e != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_j[0] =
        BaseEngineController_A02_bak2_ConstP.pooled706[rowidx];
      rtb_CombinatorialLogic_j[1] =
        BaseEngineController_A02_bak2_ConstP.pooled706[rowidx + 4];
    }

    /* Switch: '<S191>/Switch1' incorporates:
     *  UnitDelay: '<S191>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_j[1]) {
      BaseEngineController_A02_bak2_B.s191_Switch1 = rtb_CombinatorialLogic_j[0];
    } else {
      BaseEngineController_A02_bak2_B.s191_Switch1 =
        BaseEngineController_A02_bak2_DWork.s191_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S191>/Switch1' */
    /* Product: '<S126>/Product5' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S126>/motohawk_data_read11'
     */
    rtb_Product2_ik = (uint8_T)(BaseEngineController_A02_bak2_B.s191_Switch1 ?
                                ((uint8_T)Fan2IAT_DataStore()) : 0);

    /* RelationalOperator: '<S189>/LT' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S126>/motohawk_data_read4'
     */
    rtb_AboveHiTarget_k = (BaseEngineController_A02_bak2_B.s552_Merge >=
      ACPresFanOn_DataStore());

    /* RelationalOperator: '<S189>/LT1' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S126>/motohawk_data_read5'
     */
    rtb_BelowLoTarget_e = (BaseEngineController_A02_bak2_B.s552_Merge <=
      ACPresFanOff_DataStore());

    /* CombinatorialLogic: '<S192>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_AboveHiTarget_k != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_e != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_j[0] =
        BaseEngineController_A02_bak2_ConstP.pooled706[rowidx];
      rtb_CombinatorialLogic_j[1] =
        BaseEngineController_A02_bak2_ConstP.pooled706[rowidx + 4];
    }

    /* Switch: '<S192>/Switch1' incorporates:
     *  UnitDelay: '<S192>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_j[1]) {
      BaseEngineController_A02_bak2_B.s192_Switch1 = rtb_CombinatorialLogic_j[0];
    } else {
      BaseEngineController_A02_bak2_B.s192_Switch1 =
        BaseEngineController_A02_bak2_DWork.s192_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S192>/Switch1' */
    /* Product: '<S126>/Product6' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S126>/motohawk_data_read12'
     */
    rtb_Product1_ja = (uint8_T)(BaseEngineController_A02_bak2_B.s192_Switch1 ?
                                ((uint8_T)Fan2ACPres_DataStore()) : 0);

    /* DataTypeConversion: '<S126>/Data Type Conversion' */
    rtb_Product1_i = (real_T)BaseEngineController_A02_bak2_B.s450_Merge;

    /* S-Function (motohawk_sfun_data_read): '<S126>/motohawk_data_read13' */
    rtb_Product_lc = Fan2ACSw_DataStore();

    /* MinMax: '<S126>/MinMax1' incorporates:
     *  Product: '<S126>/Product7'
     */
    u = (real_T)rtb_motohawk_data_read9;
    rtb_DesiredLambda_idx = (real_T)rtb_Product2_ik;
    u = u >= rtb_DesiredLambda_idx ? u : rtb_DesiredLambda_idx;
    rtb_DesiredLambda_idx = (real_T)rtb_Product1_ja;
    u = u >= rtb_DesiredLambda_idx ? u : rtb_DesiredLambda_idx;
    rtb_DesiredLambda_idx = rtb_Product1_i * (real_T)rtb_Product_lc;
    BaseEngineController_A02_bak2_B.s126_MinMax1 = u >= rtb_DesiredLambda_idx ?
      u : rtb_DesiredLambda_idx;

    /* DataTypeConversion: '<S112>/Data Type Conversion' */
    BaseEngineController_A02_bak2_B.s111_FAN2 =
      ((BaseEngineController_A02_bak2_B.s126_MinMax1 != 0.0));

    /* Product: '<S126>/Product' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S126>/motohawk_data_read6'
     */
    rtb_Product_lc = (uint8_T)(BaseEngineController_A02_bak2_B.s190_Switch1 ?
      ((uint8_T)Fan1ECT_DataStore()) : 0);

    /* Product: '<S126>/Product1' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S126>/motohawk_data_read7'
     */
    rtb_Product1_ja = (uint8_T)(BaseEngineController_A02_bak2_B.s191_Switch1 ?
                                ((uint8_T)Fan1IAT_DataStore()) : 0);

    /* Product: '<S126>/Product2' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S126>/motohawk_data_read8'
     */
    rtb_Product2_ik = (uint8_T)(BaseEngineController_A02_bak2_B.s192_Switch1 ?
                                ((uint8_T)Fan1ACPres_DataStore()) : 0);

    /* S-Function (motohawk_sfun_data_read): '<S126>/motohawk_data_read9' */
    rtb_motohawk_data_read9 = Fan1ACSw_DataStore();

    /* MinMax: '<S126>/MinMax' incorporates:
     *  Product: '<S126>/Product3'
     */
    u = (real_T)rtb_Product_lc;
    rtb_DesiredLambda_idx = (real_T)rtb_Product1_ja;
    u = u >= rtb_DesiredLambda_idx ? u : rtb_DesiredLambda_idx;
    rtb_DesiredLambda_idx = (real_T)rtb_Product2_ik;
    u = u >= rtb_DesiredLambda_idx ? u : rtb_DesiredLambda_idx;
    rtb_DesiredLambda_idx = rtb_Product1_i * (real_T)rtb_motohawk_data_read9;
    BaseEngineController_A02_bak2_B.s126_MinMax = u >= rtb_DesiredLambda_idx ? u
      : rtb_DesiredLambda_idx;

    /* DataTypeConversion: '<S112>/Data Type Conversion1' */
    BaseEngineController_A02_bak2_B.s111_FAN1 =
      ((BaseEngineController_A02_bak2_B.s126_MinMax != 0.0));

    /* Outputs for Atomic SubSystem: '<S112>/O2 Control' */

    /* S-Function (motohawk_sfun_fault_action): '<S131>/motohawk_fault_action'
     *
     * Regarding '<S131>/motohawk_fault_action':
       Get Fault Action Status: DisableO2Ctrl
     */
    {
      extern boolean_T GetFaultActionStatus(uint32_T action);
      rtb_motohawk_fault_action_l = GetFaultActionStatus(4);
    }

    /* S-Function (motohawk_sfun_data_write): '<S131>/motohawk_data_write' */
    /* Write to Data Storage as scalar: DisableO2FaultAction */
    {
      DisableO2FaultAction_DataStore() = rtb_motohawk_fault_action_l;
    }

    /* Inport: '<S131>/Desired_Equiv' */
    rtb_DesiredLambda_idx = BaseEngineController_A02_bak2_B.s123_DesEquivRatio;
    rtb_DesiredLambda_idx_0 = rtb_WarmUpMult;
    rtb_DesiredLambda_idx_1 = rtb_ECTEnrichment;
    rtb_DesiredLambda_idx_2 = rtb_IATEnrichment;

    /* Logic: '<S269>/Logical Operator' incorporates:
     *  Constant: '<S269>/Constant'
     *  RelationalOperator: '<S269>/Relational Operator'
     *  RelationalOperator: '<S269>/Relational Operator1'
     *  S-Function (motohawk_sfun_calibration): '<S269>/motohawk_calibration1'
     *  Sum: '<S269>/Sum'
     *  Sum: '<S269>/Sum1'
     */
    BaseEngineController_A02_bak2_B.s269_LogicalOperator =
      (((rtb_DesiredLambda_idx <= (EquivRatioDelta_DataStore()) + 1.0) &&
        (rtb_DesiredLambda_idx >= 1.0 - (EquivRatioDelta_DataStore()))));

    /* Logic: '<S269>/Logical Operator3' */
    BaseEngineController_A02_bak2_B.s269_LogicalOperator3 =
      !rtb_motohawk_fault_action_l;

    /* S-Function Block: <S269>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_lj = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_h5, (real_T *) ((O2StartUpDelayTbl_DataStore())),
         9);
      (O2StartUpDelay_DataStore()) = rtb_motohawk_interpolation_1d_lj;
    }

    /* RelationalOperator: '<S269>/Relational Operator5' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S269>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_prelookup): '<S426>/motohawk_prelookup'
     */
    BaseEngineController_A02_bak2_B.s269_RelationalOperator5 =
      ((BaseEngineController_A02_bak2_B.s423_Switch >=
        rtb_motohawk_interpolation_1d_lj));

    /* Logic: '<S269>/Logical Operator2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S269>/motohawk_calibration2'
     */
    BaseEngineController_A02_bak2_B.s269_LogicalOperator2 =
      ((BaseEngineController_A02_bak2_B.s364_LogicalOperator &&
        BaseEngineController_A02_bak2_B.s269_LogicalOperator &&
        BaseEngineController_A02_bak2_B.s269_LogicalOperator3 &&
        (O2ControlEnable_DataStore()) &&
        BaseEngineController_A02_bak2_B.s269_RelationalOperator5));

    /* Logic: '<S131>/Logical Operator2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S131>/motohawk_calibration'
     */
    rtb_LogicalOperator2_jv = ((((int8_T)(O2DisablmentMult_DataStore())) != 0) &&
      BaseEngineController_A02_bak2_B.s269_LogicalOperator2);

    /* Logic: '<S131>/Logical Operator' */
    rtb_RelationalOperator2_m =
      !BaseEngineController_A02_bak2_B.s269_LogicalOperator2;

    /* S-Function Block: <S274>/motohawk_interpolation_2d2 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_RichEquivRatioSwPtDelta = TableInterpolation2D_real_T
        (BaseEngineController_A02_bak2_B.s431_motohawk_prelookup1,
         BaseEngineController_A02_bak2_B.s390_motohawk_prelookup1, (real_T *)
         ((RichSwPtDeltaMap_DataStore())), 9, 9);
      (RichSwPtDelta_DataStore()) = rtb_RichEquivRatioSwPtDelta;
    }

    /* S-Function Block: <S274>/motohawk_interpolation_2d3 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_LeanEquivRatioSwPtDelta = TableInterpolation2D_real_T
        (BaseEngineController_A02_bak2_B.s431_motohawk_prelookup1,
         BaseEngineController_A02_bak2_B.s390_motohawk_prelookup1, (real_T *)
         ((LeanSwPtDeltaMap_DataStore())), 9, 9);
      (LeanSwPtDelta_DataStore()) = rtb_LeanEquivRatioSwPtDelta;
    }

    /* S-Function Block: <S273>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_k = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_b, (real_T *) ((O2NECCTErrGainMultTbl_DataStore())),
         9);
      (O2NECCTErrGainMult_DataStore()) = rtb_motohawk_interpolation_1d_k;
    }

    /* S-Function Block: <S273>/motohawk_interpolation_1d1 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d1_en = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_f, (real_T *) ((O2MAFErrGainMultTbl_DataStore())),
         5);
      (O2MAFErrGainMult_DataStore()) = rtb_motohawk_interpolation_1d1_en;
    }

    /* Product: '<S273>/Product' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S273>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S273>/motohawk_interpolation_1d1'
     *  S-Function (motohawk_sfun_prelookup): '<S428>/motohawk_prelookup'
     *  S-Function (motohawk_sfun_prelookup): '<S429>/motohawk_prelookup'
     */
    rtb_Product1_f = rtb_motohawk_interpolation_1d_k *
      rtb_motohawk_interpolation_1d1_en;

    /* Logic: '<S131>/Logical Operator1' */
    rtb_RelOp_em = !rtb_RelOp_ig;

    /* Outputs for Atomic SubSystem: '<S131>/O2 PID Controller' */
    /* RelationalOperator: '<S276>/LT' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S274>/motohawk_interpolation_2d2'
     *  Sum: '<S276>/Sum3'
     */
    rtb_AboveRich = (BaseEngineController_A02_bak2_B.s401_Sum1 >=
                     rtb_DesiredLambda_idx + rtb_RichEquivRatioSwPtDelta);

    /* RelationalOperator: '<S276>/LT1' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S274>/motohawk_interpolation_2d3'
     *  Sum: '<S276>/Sum4'
     */
    rtb_LogicalOperator2_g4 = (BaseEngineController_A02_bak2_B.s401_Sum1 <=
      rtb_DesiredLambda_idx - rtb_LeanEquivRatioSwPtDelta);

    /* CombinatorialLogic: '<S283>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_AboveRich != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_LogicalOperator2_g4 != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic[0] =
        BaseEngineController_A02_bak2_ConstP.pooled706[rowidx];
      rtb_CombinatorialLogic[1] =
        BaseEngineController_A02_bak2_ConstP.pooled706[rowidx + 4];
    }

    /* Switch: '<S283>/Switch1' incorporates:
     *  UnitDelay: '<S283>/Unit Delay'
     */
    if (rtb_CombinatorialLogic[1]) {
      rtb_Switch1_c3 = rtb_CombinatorialLogic[0];
    } else {
      rtb_Switch1_c3 = BaseEngineController_A02_bak2_DWork.s283_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S283>/Switch1' */

    /* Switch: '<S271>/Switch' */
    if (rtb_RelationalOperator2_m) {
      BaseEngineController_A02_bak2_B.s271_Switch =
        BaseEngineController_A02_bak2_B.s401_Sum1;
    } else {
      /* Switch: '<S276>/Switch2' incorporates:
       *  Logic: '<S276>/Logical Operator'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S274>/motohawk_interpolation_2d'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S274>/motohawk_interpolation_2d1'
       *  Sum: '<S276>/Sum1'
       *  Sum: '<S276>/Sum2'
       */
      if (!rtb_Switch1_c3) {
        /* S-Function Block: <S274>/motohawk_interpolation_2d */
        {
          extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
            col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
          rtb_RichEquivRatioTargetDelta_om = TableInterpolation2D_real_T
            (BaseEngineController_A02_bak2_B.s431_motohawk_prelookup1,
             BaseEngineController_A02_bak2_B.s390_motohawk_prelookup1, (real_T *)
             ((RichTargetDeltaMap_DataStore())), 9, 9);
          (RichTargetDelta_DataStore()) = rtb_RichEquivRatioTargetDelta_om;
        }

        BaseEngineController_A02_bak2_B.s271_Switch =
          rtb_RichEquivRatioTargetDelta_om + rtb_DesiredLambda_idx;
      } else {
        /* S-Function Block: <S274>/motohawk_interpolation_2d1 */
        {
          extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
            col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
          rtb_LeanEquivRatioTargetDelta = TableInterpolation2D_real_T
            (BaseEngineController_A02_bak2_B.s431_motohawk_prelookup1,
             BaseEngineController_A02_bak2_B.s390_motohawk_prelookup1, (real_T *)
             ((LeanTargetDeltaMap_DataStore())), 9, 9);
          (LeanTargetDelta_DataStore()) = rtb_LeanEquivRatioTargetDelta;
        }

        BaseEngineController_A02_bak2_B.s271_Switch = rtb_DesiredLambda_idx -
          rtb_LeanEquivRatioTargetDelta;
      }

      /* End of Switch: '<S276>/Switch2' */
    }

    /* End of Switch: '<S271>/Switch' */

    /* Sum: '<S278>/Sum2' */
    BaseEngineController_A02_bak2_B.s278_Sum2 =
      BaseEngineController_A02_bak2_B.s271_Switch -
      BaseEngineController_A02_bak2_B.s401_Sum1;

    /* Product: '<S278>/Product5' */
    rtb_Sum1_j = BaseEngineController_A02_bak2_B.s278_Sum2 * rtb_Product1_f;

    /* Product: '<S278>/Product2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S270>/motohawk_calibration5'
     */
    BaseEngineController_A02_bak2_B.s278_Product2 = rtb_Sum1_j *
      (O2CtrlPGain_DataStore());

    /* Switch: '<S280>/Switch1' incorporates:
     *  Constant: '<S275>/Constant'
     *  UnitDelay: '<S280>/Unit Delay'
     */
    if (rtb_RelOp_em) {
      BaseEngineController_A02_bak2_B.s280_Switch1 = 0.0;
    } else {
      BaseEngineController_A02_bak2_B.s280_Switch1 =
        BaseEngineController_A02_bak2_DWork.s280_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S280>/Switch1' */

    /* Product: '<S278>/Product4' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S270>/motohawk_calibration7'
     */
    rtb_Merge_hd = rtb_Sum1_j * (O2CtrlDGain_DataStore());

    /* Sum: '<S279>/Sum2' incorporates:
     *  UnitDelay: '<S279>/Unit Delay'
     */
    rtb_Product1_f = rtb_Merge_hd -
      BaseEngineController_A02_bak2_DWork.s279_UnitDelay_DSTATE;

    /* S-Function Block: <S279>/motohawk_delta_time */
    rtb_motohawk_delta_time_g2 = 0.005;

    /* Product: '<S279>/Product' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S279>/motohawk_delta_time'
     */
    BaseEngineController_A02_bak2_B.s279_Product = rtb_Product1_f /
      rtb_motohawk_delta_time_g2;

    /* MinMax: '<S277>/MinMax' incorporates:
     *  Constant: '<S275>/Convert to Fuel Multiplier'
     *  S-Function (motohawk_sfun_calibration): '<S270>/motohawk_calibration11'
     *  Sum: '<S275>/Sum'
     *  Sum: '<S278>/Sum1'
     */
    u = ((BaseEngineController_A02_bak2_B.s278_Product2 +
          BaseEngineController_A02_bak2_B.s279_Product) +
         BaseEngineController_A02_bak2_B.s280_Switch1) + 1.0;
    u = (u >= (O2CtrlPIDOutLowerLimit_DataStore())) || rtIsNaN
      ((O2CtrlPIDOutLowerLimit_DataStore())) ? u :
      (O2CtrlPIDOutLowerLimit_DataStore());

    /* MinMax: '<S277>/MinMax1' incorporates:
     *  MinMax: '<S277>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S270>/motohawk_calibration10'
     */
    rtb_Merge_ek = (u <= (O2CtrlPIDOutUpperLimit_DataStore())) || rtIsNaN
      ((O2CtrlPIDOutUpperLimit_DataStore())) ? u :
      (O2CtrlPIDOutUpperLimit_DataStore());

    /* Product: '<S278>/Product1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S270>/motohawk_calibration6'
     */
    rtb_Product1_f = rtb_Sum1_j * (O2CtrlIGain_DataStore());

    /* S-Function Block: <S280>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_bak2_DWork.s280_motohawk_delta_time_DWORK1,
         NULL);
      rtb_motohawk_delta_time_j0 = ((real_T) delta) * 0.000001;
    }

    /* MinMax: '<S282>/MinMax' incorporates:
     *  Product: '<S280>/Product'
     *  S-Function (motohawk_sfun_calibration): '<S270>/motohawk_calibration8'
     *  S-Function (motohawk_sfun_delta_time): '<S280>/motohawk_delta_time'
     *  Sum: '<S280>/Sum'
     */
    u = rtb_Product1_f * rtb_motohawk_delta_time_j0 +
      BaseEngineController_A02_bak2_B.s280_Switch1;
    u = (u >= (O2ITermLowerLimit_DataStore())) || rtIsNaN
      ((O2ITermLowerLimit_DataStore())) ? u : (O2ITermLowerLimit_DataStore());

    /* MinMax: '<S282>/MinMax1' incorporates:
     *  MinMax: '<S282>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S270>/motohawk_calibration9'
     */
    minV_3 = (u <= (O2ITermUpperLimit_DataStore())) || rtIsNaN
      ((O2ITermUpperLimit_DataStore())) ? u : (O2ITermUpperLimit_DataStore());

    /* UnitDelay: '<S276>/Unit Delay1' */
    rtb_Sum1_j = BaseEngineController_A02_bak2_DWork.s276_UnitDelay1_DSTATE;

    /* Logic: '<S276>/Logical Operator10' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S276>/motohawk_data_read'
     */
    rtb_RelOp_js = (rtb_LogicalOperator2_g4 && DisableO2FaultAction_DataStore());

    /* S-Function Block: <S284>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_bak2_DWork.s284_motohawk_delta_time_DWORK1,
         NULL);
      rtb_motohawk_delta_time_me = ((real_T) delta) * 0.000001;
    }

    /* Logic: '<S276>/Logical Operator4' */
    rtb_LogicalOperator4_a3 = !rtb_RelationalOperator2_m;

    /* Logic: '<S276>/Logical Operator6' */
    rtb_RelOp_em = !rtb_RelOp_em;

    /* Switch: '<S284>/Switch' incorporates:
     *  Constant: '<S284>/Constant'
     *  Logic: '<S276>/Logical Operator7'
     *  S-Function (motohawk_sfun_data_read): '<S284>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S284>/motohawk_delta_time'
     *  Sum: '<S284>/Sum'
     */
    if (rtb_LogicalOperator2_g4 && rtb_LogicalOperator4_a3 && rtb_RelOp_em) {
      rtb_Product1_f = rtb_motohawk_delta_time_me + O2LeanTimer_DataStore();
    } else {
      rtb_Product1_f = 0.0;
    }

    /* End of Switch: '<S284>/Switch' */

    /* Switch: '<S276>/Switch3' */
    if (rtb_RelOp_js) {
      BaseEngineController_A02_bak2_B.s276_Switch3 = rtb_Sum1_j;
    } else {
      BaseEngineController_A02_bak2_B.s276_Switch3 = rtb_Product1_f;
    }

    /* End of Switch: '<S276>/Switch3' */
    /* RelationalOperator: '<S276>/LT3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S276>/motohawk_calibration2'
     */
    rtb_LT3 = ((BaseEngineController_A02_bak2_B.s276_Switch3 >=
                (O2LeanTimeThresh_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S276>/motohawk_fault_def' */

    /* Set Fault Suspected Status: O2FailedLean */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(70, rtb_LT3);
      UpdateFault(70);
    }

    /* UnitDelay: '<S276>/Unit Delay' */
    rtb_Sum1_j = BaseEngineController_A02_bak2_DWork.s276_UnitDelay_DSTATE;

    /* Logic: '<S276>/Logical Operator9' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S276>/motohawk_data_read'
     */
    rtb_RelationalOperator2_m = (rtb_AboveRich && DisableO2FaultAction_DataStore
                                 ());

    /* S-Function Block: <S286>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_bak2_DWork.s286_motohawk_delta_time_DWORK1,
         NULL);
      rtb_motohawk_delta_time_g1y = ((real_T) delta) * 0.000001;
    }

    /* Switch: '<S286>/Switch' incorporates:
     *  Constant: '<S286>/Constant'
     *  Logic: '<S276>/Logical Operator5'
     *  S-Function (motohawk_sfun_data_read): '<S286>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S286>/motohawk_delta_time'
     *  Sum: '<S286>/Sum'
     */
    if (rtb_AboveRich && rtb_LogicalOperator4_a3 && rtb_RelOp_em) {
      rtb_Product1_i = rtb_motohawk_delta_time_g1y + O2RichTimer_DataStore();
    } else {
      rtb_Product1_i = 0.0;
    }

    /* End of Switch: '<S286>/Switch' */

    /* Switch: '<S276>/Switch1' */
    if (rtb_RelationalOperator2_m) {
      BaseEngineController_A02_bak2_B.s276_Switch1 = rtb_Sum1_j;
    } else {
      BaseEngineController_A02_bak2_B.s276_Switch1 = rtb_Product1_i;
    }

    /* End of Switch: '<S276>/Switch1' */
    /* RelationalOperator: '<S276>/LT2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S276>/motohawk_calibration1'
     */
    rtb_LT2 = ((BaseEngineController_A02_bak2_B.s276_Switch1 >=
                (O2RichTimeThresh_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S276>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: O2FailedRich */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(71, rtb_LT2);
      UpdateFault(71);
    }

    /* UnitDelay: '<S276>/Unit Delay2' */
    rtb_Sum1_j = BaseEngineController_A02_bak2_DWork.s276_UnitDelay2_DSTATE;

    /* Logic: '<S276>/Logical Operator2' incorporates:
     *  Logic: '<S276>/Logical Operator1'
     *  Logic: '<S276>/Logical Operator3'
     */
    rtb_LogicalOperator2_g4 = ((!rtb_LogicalOperator2_g4) && (!rtb_AboveRich));

    /* Logic: '<S276>/Logical Operator11' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S276>/motohawk_data_read'
     */
    rtb_RelationalOperator2_m = (rtb_LogicalOperator2_g4 &&
      DisableO2FaultAction_DataStore());

    /* S-Function Block: <S285>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_bak2_DWork.s285_motohawk_delta_time_DWORK1,
         NULL);
      rtb_motohawk_delta_time_a5u = ((real_T) delta) * 0.000001;
    }

    /* Switch: '<S285>/Switch' incorporates:
     *  Constant: '<S285>/Constant'
     *  Logic: '<S276>/Logical Operator8'
     *  S-Function (motohawk_sfun_data_read): '<S285>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S285>/motohawk_delta_time'
     *  Sum: '<S285>/Sum'
     */
    if (rtb_LogicalOperator2_g4 && rtb_LogicalOperator4_a3 && rtb_RelOp_em) {
      rtb_UnitDelay4_o = rtb_motohawk_delta_time_a5u + O2ActiveTimer_DataStore();
    } else {
      rtb_UnitDelay4_o = 0.0;
    }

    /* End of Switch: '<S285>/Switch' */

    /* Switch: '<S276>/Switch4' */
    if (rtb_RelationalOperator2_m) {
      BaseEngineController_A02_bak2_B.s276_Switch4 = rtb_Sum1_j;
    } else {
      BaseEngineController_A02_bak2_B.s276_Switch4 = rtb_UnitDelay4_o;
    }

    /* End of Switch: '<S276>/Switch4' */
    /* RelationalOperator: '<S276>/LT4' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S276>/motohawk_calibration3'
     */
    rtb_LT4 = ((BaseEngineController_A02_bak2_B.s276_Switch4 >=
                (O2ActiveTimeThresh_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S276>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: O2NotActive */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(72, rtb_LT4);
      UpdateFault(72);
    }

    /* Saturate: '<S284>/Saturation' */
    rtb_Saturation_ct = rtb_Product1_f >= 16000.0 ? 16000.0 : rtb_Product1_f <=
      0.0 ? 0.0 : rtb_Product1_f;

    /* S-Function (motohawk_sfun_data_write): '<S284>/motohawk_data_write' */
    /* Write to Data Storage as scalar: O2LeanTimer */
    {
      O2LeanTimer_DataStore() = rtb_Saturation_ct;
    }

    /* Saturate: '<S285>/Saturation' */
    rtb_Saturation_fb = rtb_UnitDelay4_o >= 16000.0 ? 16000.0 : rtb_UnitDelay4_o
      <= 0.0 ? 0.0 : rtb_UnitDelay4_o;

    /* S-Function (motohawk_sfun_data_write): '<S285>/motohawk_data_write' */
    /* Write to Data Storage as scalar: O2ActiveTimer */
    {
      O2ActiveTimer_DataStore() = rtb_Saturation_fb;
    }

    /* Saturate: '<S286>/Saturation' */
    rtb_Saturation_pj = rtb_Product1_i >= 16000.0 ? 16000.0 : rtb_Product1_i <=
      0.0 ? 0.0 : rtb_Product1_i;

    /* S-Function (motohawk_sfun_data_write): '<S286>/motohawk_data_write' */
    /* Write to Data Storage as scalar: O2RichTimer */
    {
      O2RichTimer_DataStore() = rtb_Saturation_pj;
    }

    /* InitialCondition: '<S271>/Multiply by 1.0 if not yet enabled' */
    if (BaseEngineController_A02_bak2_DWork.s271_Multiplyby10ifnotyetenabled_FirstOutputTime)
    {
      BaseEngineController_A02_bak2_DWork.s271_Multiplyby10ifnotyetenabled_FirstOutputTime
        = FALSE;
      rtb_Merge_ek = 1.0;
    }

    /* End of InitialCondition: '<S271>/Multiply by 1.0 if not yet enabled' */

    /* Update for UnitDelay: '<S283>/Unit Delay' */
    BaseEngineController_A02_bak2_DWork.s283_UnitDelay_DSTATE = rtb_Switch1_c3;

    /* Update for UnitDelay: '<S280>/Unit Delay' incorporates:
     *  MinMax: '<S282>/MinMax1'
     */
    BaseEngineController_A02_bak2_DWork.s280_UnitDelay_DSTATE = minV_3;

    /* Update for UnitDelay: '<S279>/Unit Delay' */
    BaseEngineController_A02_bak2_DWork.s279_UnitDelay_DSTATE = rtb_Merge_hd;

    /* Update for UnitDelay: '<S276>/Unit Delay1' */
    BaseEngineController_A02_bak2_DWork.s276_UnitDelay1_DSTATE =
      BaseEngineController_A02_bak2_B.s276_Switch3;

    /* Update for UnitDelay: '<S276>/Unit Delay' */
    BaseEngineController_A02_bak2_DWork.s276_UnitDelay_DSTATE =
      BaseEngineController_A02_bak2_B.s276_Switch1;

    /* Update for UnitDelay: '<S276>/Unit Delay2' */
    BaseEngineController_A02_bak2_DWork.s276_UnitDelay2_DSTATE =
      BaseEngineController_A02_bak2_B.s276_Switch4;

    /* End of Outputs for SubSystem: '<S131>/O2 PID Controller' */

    /* Switch: '<S131>/Switch' incorporates:
     *  Constant: '<S131>/Constant'
     */
    if (rtb_LogicalOperator2_jv) {
      BaseEngineController_A02_bak2_B.s131_O2FuelMult = 1.0;
    } else {
      BaseEngineController_A02_bak2_B.s131_O2FuelMult = rtb_Merge_ek;
    }

    /* End of Switch: '<S131>/Switch' */

    /* S-Function (motohawk_sfun_probe): '<S269>/motohawk_probe9' */
    (O2Calibration_DataStore()) = (O2ControlEnable_DataStore());

    /* S-Function Block: <S131>/motohawk_prelookup13 */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (O2ITermIn_DataStore()) = BaseEngineController_A02_bak2_B.s280_Switch1;
      (O2ITermIdx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_A02_bak2_B.s280_Switch1, (O2ITermIdxArr_DataStore()),
         9, (O2ITermIdx_DataStore()));
      rtb_ITermIdx = (O2ITermIdx_DataStore());
    }

    /* End of Outputs for SubSystem: '<S112>/O2 Control' */

    /* Outputs for Atomic SubSystem: '<S112>/Fuel System Manager' */

    /* Gain: '<S198>/Gain' */
    rtb_Product1_f = 0.01 * BaseEngineController_A02_bak2_B.s560_Merge;

    /* Product: '<S198>/Product1' incorporates:
     *  Constant: '<S198>/ '
     *  S-Function (motohawk_sfun_calibration): '<S198>/motohawk_calibration2'
     *  Sum: '<S198>/Add1'
     */
    rtb_Product1_i = (1.0 - rtb_Product1_f) * (AF_Gasoline_DataStore());

    /* Sum: '<S198>/Add' incorporates:
     *  Product: '<S198>/Product2'
     *  S-Function (motohawk_sfun_calibration): '<S198>/motohawk_calibration3'
     */
    BaseEngineController_A02_bak2_B.s198_Add = (AF_Ethanol_DataStore()) *
      rtb_Product1_f + rtb_Product1_i;

    /* Product: '<S196>/Fuel Flow = Mass Airflow * Equivalence Ratio // Air-to-fuel Ratio' */
    BaseEngineController_A02_bak2_B.s196_FuelFlowMassAirflowEquivalenceRatioAirtofuelRatio
      = BaseEngineController_A02_bak2_B.s354_MultiportSwitch *
      rtb_DesiredLambda_idx / BaseEngineController_A02_bak2_B.s198_Add;

    /* Product: '<S193>/Per-Cylinder Mass Flow Rate' incorporates:
     *  DataTypeConversion: '<S193>/Data Type Conversion'
     *  S-Function (motohawk_sfun_data_read): '<S193>/Number of Combustion Events Per Revolution'
     */
    BaseEngineController_A02_bak2_B.s193_PerCylinderMassFlowRate =
      BaseEngineController_A02_bak2_B.s196_FuelFlowMassAirflowEquivalenceRatioAirtofuelRatio
      / (real_T)((uint8_T)CombEventsPerRev_DataStore());

    /* Product: '<S193>/Apply Multipliers for O2, Knock Control, and Enrichment1' */
    BaseEngineController_A02_bak2_B.s193_ApplyMultipliersforO2KnockControlandEnrichment1
      = BaseEngineController_A02_bak2_B.s193_PerCylinderMassFlowRate *
      BaseEngineController_A02_bak2_B.s131_O2FuelMult;

    /* Outputs for Atomic SubSystem: '<S127>/Injector Manager' */

    /* Outputs for Enabled SubSystem: '<S194>/Delta TPS Transient Fueling' incorporates:
     *  EnablePort: '<S199>/Enable'
     */
    /* S-Function (motohawk_sfun_calibration): '<S194>/motohawk_calibration1' incorporates:
     *  Constant: '<S201>/Constant'
     *  RelationalOperator: '<S201>/RelOp'
     *  S-Function (motohawk_sfun_interpolation_2d): '<S199>/motohawk_interpolation_2d2'
     *  S-Function (motohawk_sfun_prelookup): '<S199>/motohawk_prelookup'
     *  S-Function (motohawk_sfun_prelookup): '<S199>/motohawk_prelookup1'
     */
    if ((DeltaTPSFuelingEnable_DataStore())) {
      if (!BaseEngineController_A02_bak2_DWork.s194_DeltaTPSTransientFueling_MODE)
      {
        /* S-Function Block: <S203>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_A02_bak2_DWork.s203_motohawk_delta_time_DWORK1 =
            now - Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }

        /* InitializeConditions for UnitDelay: '<S204>/Unit Delay' */
        BaseEngineController_A02_bak2_DWork.s204_UnitDelay_DSTATE = 0.0;
        BaseEngineController_A02_bak2_DWork.s194_DeltaTPSTransientFueling_MODE =
          TRUE;
      }

      /* S-Function Block: <S203>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_A02_bak2_DWork.s203_motohawk_delta_time_DWORK1,
           NULL);
        rtb_Product_kt = ((real_T) delta) * 0.000001;
      }

      /* Product: '<S203>/Product' incorporates:
       *  MinMax: '<S203>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S203>/motohawk_calibration'
       */
      rtb_Product_kt /= (rtb_Product_kt >= (DeltaTPS_FiltConst_DataStore())) ||
        rtIsNaN((DeltaTPS_FiltConst_DataStore())) ? rtb_Product_kt :
        (DeltaTPS_FiltConst_DataStore());

      /* Sum: '<S204>/Sum1' incorporates:
       *  Constant: '<S204>/Constant'
       *  Product: '<S204>/Product'
       *  Product: '<S204>/Product1'
       *  Sum: '<S204>/Sum'
       *  UnitDelay: '<S204>/Unit Delay'
       */
      BaseEngineController_A02_bak2_B.s204_Sum1 = (1.0 - rtb_Product_kt) *
        BaseEngineController_A02_bak2_DWork.s204_UnitDelay_DSTATE +
        BaseEngineController_A02_bak2_B.s403_Switch2 * rtb_Product_kt;

      /* Sum: '<S199>/Sum' */
      BaseEngineController_A02_bak2_B.s199_Sum =
        BaseEngineController_A02_bak2_B.s403_Switch2 -
        BaseEngineController_A02_bak2_B.s204_Sum1;

      /* S-Function Block: <S199>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (MAF09In_DataStore()) =
          BaseEngineController_A02_bak2_B.s354_MultiportSwitch;
        (MAF09Idx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_A02_bak2_B.s354_MultiportSwitch,
           (MAF09IdxArr_DataStore()), 9, (MAF09Idx_DataStore()));
        rtb_motohawk_prelookup_p = (MAF09Idx_DataStore());
      }

      /* S-Function Block: <S199>/motohawk_prelookup1 */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (DeltaTPS17In_DataStore()) = BaseEngineController_A02_bak2_B.s199_Sum;
        (DeltaTPS17Idx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_A02_bak2_B.s199_Sum, (DeltaTPS17IdxArr_DataStore
            ()), 17, (DeltaTPS17Idx_DataStore()));
        rtb_motohawk_prelookup1_h = (DeltaTPS17Idx_DataStore());
      }

      /* S-Function Block: <S199>/motohawk_interpolation_2d2 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_motohawk_interpolation_2d2_m = TableInterpolation2D_real_T
          (rtb_motohawk_prelookup_p, rtb_motohawk_prelookup1_h, (real_T *)
           ((DeltaTPS_MultMap_DataStore())), 9, 17);
        (DeltaTPS_Mult_DataStore()) = rtb_motohawk_interpolation_2d2_m;
      }

      /* Outputs for Enabled SubSystem: '<S199>/ECT Transient Fueling' incorporates:
       *  EnablePort: '<S202>/Enable'
       */
      if (rtb_motohawk_interpolation_2d2_m != 1.0) {
        if (!BaseEngineController_A02_bak2_DWork.s199_ECTTransientFueling_MODE)
        {
          BaseEngineController_A02_bak2_DWork.s199_ECTTransientFueling_MODE =
            TRUE;
        }

        /* S-Function Block: <S202>/motohawk_interpolation_1d */
        {
          extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T
            *tbl_data, uint32_T sz);
          BaseEngineController_A02_bak2_B.s202_motohawk_interpolation_1d =
            TableInterpolation1D_real_T
            (BaseEngineController_A02_bak2_B.s388_motohawk_prelookup, (real_T *)
             ((ECTTransFuelMultTbl_DataStore())), 5);
          (ECTTransFuelMult_DataStore()) =
            BaseEngineController_A02_bak2_B.s202_motohawk_interpolation_1d;
        }
      } else {
        if (BaseEngineController_A02_bak2_DWork.s199_ECTTransientFueling_MODE) {
          /* Disable for Outport: '<S202>/Mult' */
          BaseEngineController_A02_bak2_B.s202_motohawk_interpolation_1d = 1.0;
          BaseEngineController_A02_bak2_DWork.s199_ECTTransientFueling_MODE =
            FALSE;
        }
      }

      /* End of Outputs for SubSystem: '<S199>/ECT Transient Fueling' */

      /* Product: '<S199>/Product1' incorporates:
       *  Constant: '<S201>/Constant'
       *  RelationalOperator: '<S201>/RelOp'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S199>/motohawk_interpolation_2d2'
       *  S-Function (motohawk_sfun_prelookup): '<S199>/motohawk_prelookup'
       *  S-Function (motohawk_sfun_prelookup): '<S199>/motohawk_prelookup1'
       */
      BaseEngineController_A02_bak2_B.s199_Product1 =
        rtb_motohawk_interpolation_2d2_m *
        BaseEngineController_A02_bak2_B.s202_motohawk_interpolation_1d;

      /* Update for UnitDelay: '<S204>/Unit Delay' */
      BaseEngineController_A02_bak2_DWork.s204_UnitDelay_DSTATE =
        BaseEngineController_A02_bak2_B.s204_Sum1;
    } else {
      if (BaseEngineController_A02_bak2_DWork.s194_DeltaTPSTransientFueling_MODE)
      {
        /* Disable for Enabled SubSystem: '<S199>/ECT Transient Fueling' */
        /* Disable for Outport: '<S202>/Mult' */
        BaseEngineController_A02_bak2_B.s202_motohawk_interpolation_1d = 1.0;
        BaseEngineController_A02_bak2_DWork.s199_ECTTransientFueling_MODE =
          FALSE;

        /* End of Disable for SubSystem: '<S199>/ECT Transient Fueling' */

        /* Disable for Outport: '<S199>/DeltaTPSMult' */
        BaseEngineController_A02_bak2_B.s199_Product1 = 1.0;
        BaseEngineController_A02_bak2_DWork.s194_DeltaTPSTransientFueling_MODE =
          FALSE;
      }
    }

    /* End of S-Function (motohawk_sfun_calibration): '<S194>/motohawk_calibration1' */
    /* End of Outputs for SubSystem: '<S194>/Delta TPS Transient Fueling' */

    /* Product: '<S194>/Divide' */
    rtb_Divide_l = BaseEngineController_A02_bak2_B.s199_Product1 *
      BaseEngineController_A02_bak2_B.s193_ApplyMultipliersforO2KnockControlandEnrichment1;

    /* S-Function Block: <S194>/Make-Up Pulse End of Injection Timing1 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_EOI = TableInterpolation2D_real_T
        (BaseEngineController_A02_bak2_B.s431_motohawk_prelookup1,
         BaseEngineController_A02_bak2_B.s390_motohawk_prelookup1, (real_T *)
         ((MakeUpEOIMap_DataStore())), 9, 9);
      (MakeUpEOI_DataStore()) = rtb_EOI;
    }

    /* RelationalOperator: '<S206>/RelOp' incorporates:
     *  Constant: '<S206>/Constant'
     */
    rtb_RelOp_ey = (BaseEngineController_A02_bak2_B.s538_Sum1 != 0.0);

    /* Outputs for Enabled SubSystem: '<S200>/Multiply and Divide, avoiding divde by zero' */
    BaseEngineController_A02_bak2_MultiplyandDivideavoidingdivdebyzero
      (rtb_RelOp_ey, rtb_Divide_l, 60000.0,
       BaseEngineController_A02_bak2_B.s538_Sum1, 1.0,
       &BaseEngineController_A02_bak2_B.s200_MultiplyandDivideavoidingdivdebyzero);

    /* End of Outputs for SubSystem: '<S200>/Multiply and Divide, avoiding divde by zero' */

    /* S-Function Block: <S194>/Primary Pulse Injection Timing */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_PrimaryPulseInjectionTiming = TableInterpolation2D_real_T
        (BaseEngineController_A02_bak2_B.s431_motohawk_prelookup1,
         BaseEngineController_A02_bak2_B.s390_motohawk_prelookup1, (real_T *)
         ((PrimarySOIMap_DataStore())), 9, 9);
      (PrimarySOI_DataStore()) = rtb_PrimaryPulseInjectionTiming;
    }

    /* End of Outputs for SubSystem: '<S127>/Injector Manager' */

    /* Outputs for Atomic SubSystem: '<S127>/O2 Fuel Adapt' */

    /* S-Function Block: <S195>/motohawk_interpolation_1d1 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d1_ki = TableInterpolation1D_real_T
        (rtb_ITermIdx, (real_T *) ((FuelAdaptGainTbl_DataStore())), 9);
      (FuelAdaptGain_DataStore()) = rtb_motohawk_interpolation_1d1_ki;
    }

    /* Product: '<S195>/Product0' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S195>/motohawk_interpolation_1d1'
     *  S-Function (motohawk_sfun_prelookup): '<S131>/motohawk_prelookup13'
     */
    rtb_Product1_f = BaseEngineController_A02_bak2_B.s280_Switch1 *
      rtb_motohawk_interpolation_1d1_ki;

    /* MinMax: '<S213>/MinMax' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S210>/motohawk_calibration'
     */
    rtb_Sum_pd = (rtb_Product1_f >= (FuelAdaptErrorLwrLim_DataStore())) ||
      rtIsNaN((FuelAdaptErrorLwrLim_DataStore())) ? rtb_Product1_f :
      (FuelAdaptErrorLwrLim_DataStore());

    /* MinMax: '<S213>/MinMax1' incorporates:
     *  MinMax: '<S213>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S210>/motohawk_calibration1'
     */
    BaseEngineController_A02_bak2_B.s213_MinMax1 = (rtb_Sum_pd <=
      (FuelAdaptErrorUprLim_DataStore())) || rtIsNaN
      ((FuelAdaptErrorUprLim_DataStore())) ? rtb_Sum_pd :
      (FuelAdaptErrorUprLim_DataStore());

    /* S-Function Block: <S195>/motohawk_interpolation_2d2 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_motohawk_interpolation_2d2 = TableInterpolation2D_real_T
        (BaseEngineController_A02_bak2_B.s431_motohawk_prelookup1,
         BaseEngineController_A02_bak2_B.s390_motohawk_prelookup1, (real_T *)
         ((FuelFlowCompAdaptMap_DataStore())), 9, 9);
      (FuelFlowCompAdapt_DataStore()) = rtb_motohawk_interpolation_2d2;
    }

    /* End of Outputs for SubSystem: '<S127>/O2 Fuel Adapt' */

    /* Outputs for Atomic SubSystem: '<S112>/O2 Control' */
    /* MinMax: '<S127>/MinMax' incorporates:
     *  Inport: '<S131>/Desired_Equiv'
     */
    u = (rtb_DesiredLambda_idx_0 >= rtb_Switch_fm) || rtIsNaN(rtb_Switch_fm) ?
      rtb_DesiredLambda_idx_0 : rtb_Switch_fm;

    /* End of Outputs for SubSystem: '<S112>/O2 Control' */
    u = (u >= rtb_DesiredLambda_idx_1) || rtIsNaN(rtb_DesiredLambda_idx_1) ? u :
      rtb_DesiredLambda_idx_1;

    /* Outputs for Atomic SubSystem: '<S127>/O2 Fuel Adapt' */
    /* Outputs for Atomic SubSystem: '<S195>/WarmUp Disable' */
    /* Logic: '<S211>/Logical Operator' incorporates:
     *  Constant: '<S211>/Constant'
     *  MinMax: '<S127>/MinMax'
     *  RelationalOperator: '<S211>/Relational Operator'
     */
    BaseEngineController_A02_bak2_B.s211_LogicalOperator = !(((u >=
      rtb_DesiredLambda_idx_2) || rtIsNaN(rtb_DesiredLambda_idx_2) ? u :
      rtb_DesiredLambda_idx_2) > 1.01);

    /* End of Outputs for SubSystem: '<S195>/WarmUp Disable' */

    /* Outputs for Atomic SubSystem: '<S195>/O2 Control Enable Delay' */

    /* S-Function Block: <S212>/motohawk_delta_time */
    rtb_motohawk_delta_time_jh = 0.005;

    /* Switch: '<S212>/Switch' incorporates:
     *  Constant: '<S212>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S212>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S212>/motohawk_delta_time'
     *  Sum: '<S212>/Sum'
     */
    if (BaseEngineController_A02_bak2_B.s269_LogicalOperator2) {
      rtb_Product1_f = rtb_motohawk_delta_time_jh + LiqDelayTime_DataStore();
    } else {
      rtb_Product1_f = 0.0;
    }

    /* End of Switch: '<S212>/Switch' */
    /* RelationalOperator: '<S209>/Relational Operator' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S209>/motohawk_calibration1'
     */
    rtb_RelationalOperator2_m = (rtb_Product1_f >
      (O2CtrlAdaptDelayTime_DataStore()));

    /* Saturate: '<S212>/Saturation' */
    rtb_Saturation_jb = rtb_Product1_f >= 16000.0 ? 16000.0 : rtb_Product1_f <=
      0.0 ? 0.0 : rtb_Product1_f;

    /* S-Function (motohawk_sfun_data_write): '<S212>/motohawk_data_write' */
    /* Write to Data Storage as scalar: LiqDelayTime */
    {
      LiqDelayTime_DataStore() = rtb_Saturation_jb;
    }

    /* End of Outputs for SubSystem: '<S195>/O2 Control Enable Delay' */

    /* Abs: '<S195>/Abs' */
    rtb_Product1_f = fabs(BaseEngineController_A02_bak2_B.s280_Switch1);

    /* Logic: '<S195>/Logical Operator2' incorporates:
     *  RelationalOperator: '<S195>/Relational Operator'
     *  S-Function (motohawk_sfun_calibration): '<S195>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S195>/motohawk_calibration1'
     *  S-Function (motohawk_sfun_calibration): '<S195>/motohawk_calibration2'
     */
    BaseEngineController_A02_bak2_B.s195_LogicalOperator2 =
      (((FuelAdaptEnable_DataStore()) && (AdaptEnable_DataStore()) &&
        BaseEngineController_A02_bak2_B.s211_LogicalOperator &&
        rtb_RelationalOperator2_m && (rtb_Product1_f <=
         (FuelAdaptDelta_DataStore()))));

    /* Outputs for Enabled SubSystem: '<S195>/Adapt FuelFlowComp Map' incorporates:
     *  EnablePort: '<S207>/Enable'
     */
    if (BaseEngineController_A02_bak2_B.s195_LogicalOperator2) {
      /* S-Function Block: <S207>/motohawk_adapt_table */
      /* Adapt 2-D Table */
      {
        uint32_T _row = ((IndLoadNom09Idx_DataStore())) >> 9;
        uint32_T _row_frac = (((IndLoadNom09Idx_DataStore())) & 0x01FF) >> 7;
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
              BaseEngineController_A02_bak2_B.s213_MinMax1;
            if (_new > (FuelFlowCompMaxValue_DataStore()))
              _new = (FuelFlowCompMaxValue_DataStore());
            if (_new < (FuelFlowCompMinValue_DataStore()))
              _new = (FuelFlowCompMinValue_DataStore());
            (FuelFlowCompAdaptMap_DataStore())[_row][_col] = _new;
          } else if (_col_frac == 3) {
            _new = (FuelFlowCompAdaptMap_DataStore())[_row][_col+1] +
              BaseEngineController_A02_bak2_B.s213_MinMax1;
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

      /* RelationalOperator: '<S207>/Relational Operator2' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S207>/motohawk_calibration2'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S195>/motohawk_interpolation_2d2'
       */
      rtb_RelationalOperator2_ed = ((rtb_motohawk_interpolation_2d2 >=
        (FuelFlowCompMaxValue_DataStore())));

      /* S-Function (motohawk_sfun_fault_def): '<S207>/motohawk_fault_def' */

      /* Set Fault Suspected Status: FuelAdaptRangeHi */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(39, rtb_RelationalOperator2_ed);
        UpdateFault(39);
      }

      /* RelationalOperator: '<S207>/Relational Operator1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S207>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S195>/motohawk_interpolation_2d2'
       */
      rtb_RelationalOperator1_j4 = ((rtb_motohawk_interpolation_2d2 <=
        (FuelFlowCompMinValue_DataStore())));

      /* S-Function (motohawk_sfun_fault_def): '<S207>/motohawk_fault_def1' */

      /* Set Fault Suspected Status: FuelAdaptRangeLow */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(40, rtb_RelationalOperator1_j4);
        UpdateFault(40);
      }
    }

    /* End of Outputs for SubSystem: '<S195>/Adapt FuelFlowComp Map' */

    /* S-Function Block: <S195>/motohawk_interpolation_2d1 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_motohawk_interpolation_2d1_f = TableInterpolation2D_real_T
        (BaseEngineController_A02_bak2_B.s431_motohawk_prelookup1,
         BaseEngineController_A02_bak2_B.s390_motohawk_prelookup1, (real_T *)
         ((FuelFlowCompMap_DataStore())), 9, 9);
      (FuelFlowComp_DataStore()) = rtb_motohawk_interpolation_2d1_f;
    }

    /* Product: '<S195>/Divide' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S195>/motohawk_interpolation_2d1'
     *  S-Function (motohawk_sfun_interpolation_2d): '<S195>/motohawk_interpolation_2d2'
     */
    rtb_Product1_f = rtb_motohawk_interpolation_2d1_f *
      rtb_motohawk_interpolation_2d2;

    /* End of Outputs for SubSystem: '<S127>/O2 Fuel Adapt' */

    /* End of Outputs for SubSystem: '<S112>/Fuel System Manager' */

    /* Switch: '<S128>/Switch4' incorporates:
     *  Constant: '<S128>/Constant2'
     *  Logic: '<S128>/Logical Operator'
     *  Sum: '<S128>/Sum2'
     */
    if (!BaseEngineController_A02_bak2_B.s251_RelOp) {
      rtb_Product1_i = 0.0;
    } else {
      rtb_Product1_i =
        BaseEngineController_A02_bak2_B.s241_DontallowsetpointtoeverdropbelowtheTargetRPM
        + BaseEngineController_A02_bak2_B.s130_MinGovAirPID;
    }

    /* End of Switch: '<S128>/Switch4' */
    /* Switch: '<S128>/Switch1' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S128>/motohawk_data_read'
     */
    if (((uint8_T)IACType_DataStore()) > 0) {
      /* ZeroOrderHold: '<S112>/Zero-Order Hold5' incorporates:
       *  Constant: '<S128>/Constant1'
       *  Sum: '<S128>/Sum'
       */
      BaseEngineController_A02_bak2_B.s111_IACS = 100.0 - rtb_Product1_i;
    } else {
      /* ZeroOrderHold: '<S112>/Zero-Order Hold5' incorporates:
       *  Constant: '<S128>/Constant'
       */
      BaseEngineController_A02_bak2_B.s111_IACS = 0.0;
    }

    /* End of Switch: '<S128>/Switch1' */

    /* ZeroOrderHold: '<S112>/Zero-Order Hold1' */
    BaseEngineController_A02_bak2_B.s111_SparkEnergy =
      BaseEngineController_A02_bak2_B.s132_motohawk_interpolation_2d1;

    /* ZeroOrderHold: '<S112>/Zero-Order Hold11' */
    BaseEngineController_A02_bak2_B.s111_WASTEGATE = rtb_Switch_j;

    /* ZeroOrderHold: '<S112>/Zero-Order Hold12' */
    BaseEngineController_A02_bak2_B.s111_SparkAdv =
      BaseEngineController_A02_bak2_B.s288_Switch;

    /* ZeroOrderHold: '<S112>/Zero-Order Hold16' incorporates:
     *  Constant: '<S112>/ON1'
     */
    BaseEngineController_A02_bak2_B.s111_FUELP = TRUE;

    /* ZeroOrderHold: '<S112>/Zero-Order Hold17' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S194>/Primary Pulse Injection Timing'
     */
    BaseEngineController_A02_bak2_B.s111_SOI = rtb_PrimaryPulseInjectionTiming;

    /* ZeroOrderHold: '<S112>/Zero-Order Hold18' */
    BaseEngineController_A02_bak2_B.s111_Throttle =
      BaseEngineController_A02_bak2_B.s122_MultiportSwitch;

    /* ZeroOrderHold: '<S112>/Zero-Order Hold2' */
    BaseEngineController_A02_bak2_B.s111_IACP = rtb_Product1_i;

    /* ZeroOrderHold: '<S112>/Zero-Order Hold3' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S194>/Make-Up Pulse End of Injection Timing1'
     */
    BaseEngineController_A02_bak2_B.s111_MakeUpEOI = rtb_EOI;

    /* ZeroOrderHold: '<S112>/Zero-Order Hold4' */
    BaseEngineController_A02_bak2_B.s111_FuelMult = rtb_Product1_f;

    /* ZeroOrderHold: '<S112>/Zero-Order Hold8' */
    BaseEngineController_A02_bak2_B.s111_AC =
      BaseEngineController_A02_bak2_B.s121_LogicalOperator;

    /* S-Function (motohawk_sfun_replicate): '<S112>/motohawk_replicate1' */

    /* S-Function Block: <S112>/motohawk_replicate1 */
    {
      int_T i1;
      real_T *y0 = BaseEngineController_A02_bak2_B.s111_FPC;
      for (i1=0; i1 < 8; i1++) {
        y0[i1] =
          BaseEngineController_A02_bak2_B.s200_MultiplyandDivideavoidingdivdebyzero.s205_chargemass;
      }
    }
  } else {
    if (BaseEngineController_A02_bak2_DWork.s7_Run_MODE) {
      /* Level2 S-Function Block: '<S112>/motohawk_trigger1' (motohawk_sfun_trigger) */
      /* Disable for Trigger_FGND_5XRTI_PERIODIC_4926p0004 */
      BaseEngineController_A02_bak2_DWork.s112_motohawk_trigger1_DWORK1 = 0;

      /* Disable for Atomic SubSystem: '<S112>/Fuel System Manager' */
      /* Disable for Atomic SubSystem: '<S127>/Injector Manager' */
      /* Disable for Enabled SubSystem: '<S194>/Delta TPS Transient Fueling' */
      /* Disable for Enabled SubSystem: '<S199>/ECT Transient Fueling' */
      /* Disable for Outport: '<S202>/Mult' */
      BaseEngineController_A02_bak2_B.s202_motohawk_interpolation_1d = 1.0;
      BaseEngineController_A02_bak2_DWork.s199_ECTTransientFueling_MODE = FALSE;

      /* End of Disable for SubSystem: '<S199>/ECT Transient Fueling' */

      /* Disable for Outport: '<S199>/DeltaTPSMult' */
      BaseEngineController_A02_bak2_B.s199_Product1 = 1.0;
      BaseEngineController_A02_bak2_DWork.s194_DeltaTPSTransientFueling_MODE =
        FALSE;

      /* End of Disable for SubSystem: '<S194>/Delta TPS Transient Fueling' */
      /* End of Disable for SubSystem: '<S127>/Injector Manager' */
      /* End of Disable for SubSystem: '<S112>/Fuel System Manager' */
      BaseEngineController_A02_bak2_DWork.s7_Run_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S7>/Run' */

  /* If: '<S713>/If' incorporates:
   *  Inport: '<S714>/In1'
   *  Inport: '<S715>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S713>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S713>/override_enable'
   */
  if ((AC_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S713>/NewValue' incorporates:
     *  ActionPort: '<S714>/Action Port'
     */
    rtb_RelationalOperator2_m = (AC_new_DataStore());

    /* End of Outputs for SubSystem: '<S713>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S713>/OldValue' incorporates:
     *  ActionPort: '<S715>/Action Port'
     */
    rtb_RelationalOperator2_m = BaseEngineController_A02_bak2_B.s111_AC;

    /* End of Outputs for SubSystem: '<S713>/OldValue' */
  }

  /* End of If: '<S713>/If' */

  /* Logic: '<S712>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S712>/0 = No Inversion 1 = Inversion'
   */
  BaseEngineController_A02_bak2_B.s712_LogicalOperator =
    rtb_RelationalOperator2_m ^ (AC_Polarity_DataStore());

  /* S-Function Block: <S611>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_bak2_DWork.s611_motohawk_delta_time_DWORK1,
       NULL);
    rtb_DataTypeConversion_k = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S611>/Product' incorporates:
   *  MinMax: '<S611>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S611>/motohawk_calibration'
   */
  rtb_DataTypeConversion_k /= (rtb_DataTypeConversion_k >=
    (SysVoltFilterConst_DataStore())) || rtIsNaN((SysVoltFilterConst_DataStore()))
    ? rtb_DataTypeConversion_k : (SysVoltFilterConst_DataStore());

  /* Logic: '<S547>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S547>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S547>/motohawk_fault_status4'
   */
  rtb_RelOp_em = (IsFaultActive(81) || IsFaultActive(82));

  /* Logic: '<S547>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S547>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S547>/motohawk_fault_status3'
   */
  rtb_RelationalOperator2_m = (IsFaultSuspected(81) || IsFaultSuspected(82));

  /* S-Function Block: <S436>/motohawk_ain14 Resource: SysVoltage */
  {
    extern NativeError_S SysVoltage_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    SysVoltage_AnalogInput_Get
      (&BaseEngineController_A02_bak2_B.s436_motohawk_ain14, NULL);
  }

  /* DataTypeConversion: '<S547>/Data Type Conversion' */
  rtb_DataTypeConversion_gp =
    BaseEngineController_A02_bak2_B.s436_motohawk_ain14;

  /* Product: '<S547>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S547>/motohawk_calibration4'
   */
  rtb_Product1_f = (real_T)rtb_DataTypeConversion_gp * (SysVoltGain_DataStore());

  /* Sum: '<S547>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S547>/motohawk_calibration5'
   */
  BaseEngineController_A02_bak2_B.s547_Sum1 = rtb_Product1_f +
    (SysVoltOfst_DataStore());

  /* UnitDelay: '<S547>/Unit Delay1' */
  rtb_UnitDelay1_e = BaseEngineController_A02_bak2_DWork.s547_UnitDelay1_DSTATE;

  /* If: '<S547>/If' incorporates:
   *  Logic: '<S547>/Logical Operator5'
   *  Logic: '<S547>/Logical Operator6'
   */
  if ((!rtb_RelOp_em) && rtb_RelationalOperator2_m) {
    /* Outputs for IfAction SubSystem: '<S547>/If Action Subsystem' incorporates:
     *  ActionPort: '<S612>/Action Port'
     */
    BaseEngineController_A02_bak2_IfActionSubsystem(rtb_UnitDelay1_e,
      &rtb_Merge_ks);

    /* End of Outputs for SubSystem: '<S547>/If Action Subsystem' */
  } else if (rtb_RelOp_em) {
    /* Outputs for IfAction SubSystem: '<S547>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S613>/Action Port'
     */
    BaseEngineController_A02_bak2_IfActionSubsystem((SysVoltDfltValue_DataStore()),
      &rtb_Merge_ks);

    /* End of Outputs for SubSystem: '<S547>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S547>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S614>/Action Port'
     */
    BaseEngineController_A02_bak2_IfActionSubsystem
      (BaseEngineController_A02_bak2_B.s547_Sum1, &rtb_Merge_ks);

    /* End of Outputs for SubSystem: '<S547>/If Action Subsystem2' */
  }

  /* End of If: '<S547>/If' */

  /* Sum: '<S616>/Sum1' incorporates:
   *  Constant: '<S616>/Constant'
   *  Product: '<S616>/Product'
   *  Product: '<S616>/Product1'
   *  Sum: '<S616>/Sum'
   *  UnitDelay: '<S616>/Unit Delay'
   */
  rtb_DesiredLambda_idx_0 = (1.0 - rtb_DataTypeConversion_k) *
    BaseEngineController_A02_bak2_DWork.s616_UnitDelay_DSTATE + rtb_Merge_ks *
    rtb_DataTypeConversion_k;

  /* If: '<S615>/If' incorporates:
   *  Inport: '<S617>/In1'
   *  Inport: '<S618>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S615>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S615>/override_enable'
   */
  if ((SysVolt_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S615>/NewValue' incorporates:
     *  ActionPort: '<S617>/Action Port'
     */
    BaseEngineController_A02_bak2_B.s615_Merge = (SysVolt_new_DataStore());

    /* End of Outputs for SubSystem: '<S615>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S615>/OldValue' incorporates:
     *  ActionPort: '<S618>/Action Port'
     */
    BaseEngineController_A02_bak2_B.s615_Merge = rtb_DesiredLambda_idx_0;

    /* End of Outputs for SubSystem: '<S615>/OldValue' */
  }

  /* End of If: '<S615>/If' */

  /* S-Function Block: <S391>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (SysVolt09In_DataStore()) = BaseEngineController_A02_bak2_B.s615_Merge;
    (SysVolt09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_bak2_B.s615_Merge, (SysVolt09IdxArr_DataStore()),
       9, (SysVolt09Idx_DataStore()));
    BaseEngineController_A02_bak2_B.s391_motohawk_prelookup =
      (SysVolt09Idx_DataStore());
  }

  /* S-Function (motohawk_sfun_trigger): '<S6>/motohawk_trigger1' */
  /* Enable for Trigger_FGND_5XRTI_PERIODIC_1237p0004 */
  if (BaseEngineController_A02_bak2_DWork.s6_motohawk_trigger1_DWORK1 == 0) {
    BaseEngineController_A02_bak2_DWork.s6_motohawk_trigger1_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S6>/motohawk_trigger' */
  /* Enable for Trigger_FGND_5XRTI_PERIODIC_1236p0004 */
  if (BaseEngineController_A02_bak2_DWork.s6_motohawk_trigger_DWORK1 == 0) {
    BaseEngineController_A02_bak2_DWork.s6_motohawk_trigger_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_fault_action): '<S14>/motohawk_fault_action1'
   *
   * Regarding '<S14>/motohawk_fault_action1':
     Get Fault Action Status: SoftRevLimit
   */
  {
    extern boolean_T GetFaultActionStatus(uint32_T action);
    rtb_motohawk_fault_action1_k = GetFaultActionStatus(9);
  }

  /* S-Function (motohawk_sfun_fault_action): '<S14>/motohawk_fault_action2'
   *
   * Regarding '<S14>/motohawk_fault_action2':
     Get Fault Action Status: MediumRevLimit
   */
  {
    extern boolean_T GetFaultActionStatus(uint32_T action);
    rtb_motohawk_fault_action2 = GetFaultActionStatus(8);
  }

  /* S-Function (motohawk_sfun_fault_action): '<S14>/motohawk_fault_action3'
   *
   * Regarding '<S14>/motohawk_fault_action3':
     Get Fault Action Status: HardRevLimit
   */
  {
    extern boolean_T GetFaultActionStatus(uint32_T action);
    rtb_motohawk_fault_action3 = GetFaultActionStatus(7);
  }

  /* Logic: '<S14>/Logical Operator4' */
  rtb_RelationalOperator2_m = (rtb_motohawk_fault_action1_k ||
    rtb_motohawk_fault_action2 || rtb_motohawk_fault_action3);

  /* Outputs for Enabled SubSystem: '<S14>/PassThrough1' incorporates:
   *  EnablePort: '<S86>/Enable'
   */
  if (rtb_motohawk_fault_action1_k) {
    if (!BaseEngineController_A02_bak2_DWork.s14_PassThrough1_MODE) {
      BaseEngineController_A02_bak2_DWork.s14_PassThrough1_MODE = TRUE;
    }

    /* Inport: '<S86>/In1' incorporates:
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
     */
    BaseEngineController_A02_bak2_B.s14_Merge1[0] = ((int8_T)
      (SoftCycle1Cyl1_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[1] = ((int8_T)
      (SoftCycle1Cyl2_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[2] = ((int8_T)
      (SoftCycle1Cyl3_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[3] = ((int8_T)
      (SoftCycle1Cyl4_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[4] = ((int8_T)
      (SoftCycle1Cyl5_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[5] = ((int8_T)
      (SoftCycle1Cyl6_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[6] = ((int8_T)
      (SoftCycle1Cyl7_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[7] = ((int8_T)
      (SoftCycle1Cyl8_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[8] = ((int8_T)
      (SoftCycle2Cyl1_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[9] = ((int8_T)
      (SoftCycle2Cyl2_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[10] = ((int8_T)
      (SoftCycle2Cyl3_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[11] = ((int8_T)
      (SoftCycle2Cyl4_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[12] = ((int8_T)
      (SoftCycle2Cyl5_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[13] = ((int8_T)
      (SoftCycle2Cyl6_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[14] = ((int8_T)
      (SoftCycle2Cyl7_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[15] = ((int8_T)
      (SoftCycle2Cyl8_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[16] = ((int8_T)
      (SoftCycle3Cyl1_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[17] = ((int8_T)
      (SoftCycle3Cyl2_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[18] = ((int8_T)
      (SoftCycle3Cyl3_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[19] = ((int8_T)
      (SoftCycle3Cyl4_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[20] = ((int8_T)
      (SoftCycle3Cyl5_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[21] = ((int8_T)
      (SoftCycle3Cyl6_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[22] = ((int8_T)
      (SoftCycle3Cyl7_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[23] = ((int8_T)
      (SoftCycle3Cyl8_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[24] = ((int8_T)
      (SoftCycle4Cyl1_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[25] = ((int8_T)
      (SoftCycle4Cyl2_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[26] = ((int8_T)
      (SoftCycle4Cyl3_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[27] = ((int8_T)
      (SoftCycle4Cyl4_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[28] = ((int8_T)
      (SoftCycle4Cyl5_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[29] = ((int8_T)
      (SoftCycle4Cyl6_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[30] = ((int8_T)
      (SoftCycle4Cyl7_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[31] = ((int8_T)
      (SoftCycle4Cyl8_DataStore()));
  } else {
    if (BaseEngineController_A02_bak2_DWork.s14_PassThrough1_MODE) {
      /* Disable for Outport: '<S86>/Out1' */
      for (i = 0; i < 32; i++) {
        BaseEngineController_A02_bak2_B.s14_Merge1[i] = 0;
      }

      /* End of Outport: '<S86>/Out1' */
      BaseEngineController_A02_bak2_DWork.s14_PassThrough1_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S14>/PassThrough1' */
  /* Outputs for Enabled SubSystem: '<S14>/PassThrough2' incorporates:
   *  EnablePort: '<S87>/Enable'
   */
  if (rtb_motohawk_fault_action2) {
    /* Inport: '<S87>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S100>/motohawk_calibration10'
     *  S-Function (motohawk_sfun_calibration): '<S100>/motohawk_calibration11'
     *  S-Function (motohawk_sfun_calibration): '<S100>/motohawk_calibration12'
     *  S-Function (motohawk_sfun_calibration): '<S100>/motohawk_calibration13'
     *  S-Function (motohawk_sfun_calibration): '<S100>/motohawk_calibration14'
     *  S-Function (motohawk_sfun_calibration): '<S100>/motohawk_calibration15'
     *  S-Function (motohawk_sfun_calibration): '<S100>/motohawk_calibration8'
     *  S-Function (motohawk_sfun_calibration): '<S100>/motohawk_calibration9'
     *  S-Function (motohawk_sfun_calibration): '<S97>/motohawk_calibration10'
     *  S-Function (motohawk_sfun_calibration): '<S97>/motohawk_calibration11'
     *  S-Function (motohawk_sfun_calibration): '<S97>/motohawk_calibration12'
     *  S-Function (motohawk_sfun_calibration): '<S97>/motohawk_calibration13'
     *  S-Function (motohawk_sfun_calibration): '<S97>/motohawk_calibration14'
     *  S-Function (motohawk_sfun_calibration): '<S97>/motohawk_calibration15'
     *  S-Function (motohawk_sfun_calibration): '<S97>/motohawk_calibration8'
     *  S-Function (motohawk_sfun_calibration): '<S97>/motohawk_calibration9'
     *  S-Function (motohawk_sfun_calibration): '<S98>/motohawk_calibration10'
     *  S-Function (motohawk_sfun_calibration): '<S98>/motohawk_calibration11'
     *  S-Function (motohawk_sfun_calibration): '<S98>/motohawk_calibration12'
     *  S-Function (motohawk_sfun_calibration): '<S98>/motohawk_calibration13'
     *  S-Function (motohawk_sfun_calibration): '<S98>/motohawk_calibration14'
     *  S-Function (motohawk_sfun_calibration): '<S98>/motohawk_calibration15'
     *  S-Function (motohawk_sfun_calibration): '<S98>/motohawk_calibration8'
     *  S-Function (motohawk_sfun_calibration): '<S98>/motohawk_calibration9'
     *  S-Function (motohawk_sfun_calibration): '<S99>/motohawk_calibration10'
     *  S-Function (motohawk_sfun_calibration): '<S99>/motohawk_calibration11'
     *  S-Function (motohawk_sfun_calibration): '<S99>/motohawk_calibration12'
     *  S-Function (motohawk_sfun_calibration): '<S99>/motohawk_calibration13'
     *  S-Function (motohawk_sfun_calibration): '<S99>/motohawk_calibration14'
     *  S-Function (motohawk_sfun_calibration): '<S99>/motohawk_calibration15'
     *  S-Function (motohawk_sfun_calibration): '<S99>/motohawk_calibration8'
     *  S-Function (motohawk_sfun_calibration): '<S99>/motohawk_calibration9'
     */
    BaseEngineController_A02_bak2_B.s14_Merge1[0] = ((int8_T)
      (MediumCycle1Cyl1_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[1] = ((int8_T)
      (MediumCycle1Cyl2_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[2] = ((int8_T)
      (MediumCycle1Cyl3_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[3] = ((int8_T)
      (MediumCycle1Cyl4_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[4] = ((int8_T)
      (MediumCycle1Cyl5_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[5] = ((int8_T)
      (MediumCycle1Cyl6_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[6] = ((int8_T)
      (MediumCycle1Cyl7_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[7] = ((int8_T)
      (MediumCycle1Cyl8_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[8] = ((int8_T)
      (MediumCycle2Cyl1_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[9] = ((int8_T)
      (MediumCycle2Cyl2_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[10] = ((int8_T)
      (MediumCycle2Cyl3_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[11] = ((int8_T)
      (MediumCycle2Cyl4_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[12] = ((int8_T)
      (MediumCycle2Cyl5_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[13] = ((int8_T)
      (MediumCycle2Cyl6_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[14] = ((int8_T)
      (MediumCycle2Cyl7_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[15] = ((int8_T)
      (MediumCycle2Cyl8_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[16] = ((int8_T)
      (MediumCycle3Cyl1_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[17] = ((int8_T)
      (MediumCycle3Cyl2_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[18] = ((int8_T)
      (MediumCycle3Cyl3_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[19] = ((int8_T)
      (MediumCycle3Cyl4_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[20] = ((int8_T)
      (MediumCycle3Cyl5_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[21] = ((int8_T)
      (MediumCycle3Cyl6_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[22] = ((int8_T)
      (MediumCycle3Cyl7_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[23] = ((int8_T)
      (MediumCycle3Cyl8_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[24] = ((int8_T)
      (MediumCycle4Cyl1_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[25] = ((int8_T)
      (MediumCycle4Cyl2_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[26] = ((int8_T)
      (MediumCycle4Cyl3_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[27] = ((int8_T)
      (MediumCycle4Cyl4_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[28] = ((int8_T)
      (MediumCycle4Cyl5_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[29] = ((int8_T)
      (MediumCycle4Cyl6_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[30] = ((int8_T)
      (MediumCycle4Cyl7_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[31] = ((int8_T)
      (MediumCycle4Cyl8_DataStore()));
  }

  /* End of Outputs for SubSystem: '<S14>/PassThrough2' */
  /* Outputs for Enabled SubSystem: '<S14>/PassThrough3' incorporates:
   *  EnablePort: '<S88>/Enable'
   */
  if (rtb_motohawk_fault_action3) {
    if (!BaseEngineController_A02_bak2_DWork.s14_PassThrough3_MODE) {
      BaseEngineController_A02_bak2_DWork.s14_PassThrough3_MODE = TRUE;
    }

    /* Inport: '<S88>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S93>/motohawk_calibration10'
     *  S-Function (motohawk_sfun_calibration): '<S93>/motohawk_calibration11'
     *  S-Function (motohawk_sfun_calibration): '<S93>/motohawk_calibration12'
     *  S-Function (motohawk_sfun_calibration): '<S93>/motohawk_calibration13'
     *  S-Function (motohawk_sfun_calibration): '<S93>/motohawk_calibration14'
     *  S-Function (motohawk_sfun_calibration): '<S93>/motohawk_calibration15'
     *  S-Function (motohawk_sfun_calibration): '<S93>/motohawk_calibration8'
     *  S-Function (motohawk_sfun_calibration): '<S93>/motohawk_calibration9'
     *  S-Function (motohawk_sfun_calibration): '<S94>/motohawk_calibration10'
     *  S-Function (motohawk_sfun_calibration): '<S94>/motohawk_calibration11'
     *  S-Function (motohawk_sfun_calibration): '<S94>/motohawk_calibration12'
     *  S-Function (motohawk_sfun_calibration): '<S94>/motohawk_calibration13'
     *  S-Function (motohawk_sfun_calibration): '<S94>/motohawk_calibration14'
     *  S-Function (motohawk_sfun_calibration): '<S94>/motohawk_calibration15'
     *  S-Function (motohawk_sfun_calibration): '<S94>/motohawk_calibration8'
     *  S-Function (motohawk_sfun_calibration): '<S94>/motohawk_calibration9'
     *  S-Function (motohawk_sfun_calibration): '<S95>/motohawk_calibration10'
     *  S-Function (motohawk_sfun_calibration): '<S95>/motohawk_calibration11'
     *  S-Function (motohawk_sfun_calibration): '<S95>/motohawk_calibration12'
     *  S-Function (motohawk_sfun_calibration): '<S95>/motohawk_calibration13'
     *  S-Function (motohawk_sfun_calibration): '<S95>/motohawk_calibration14'
     *  S-Function (motohawk_sfun_calibration): '<S95>/motohawk_calibration15'
     *  S-Function (motohawk_sfun_calibration): '<S95>/motohawk_calibration8'
     *  S-Function (motohawk_sfun_calibration): '<S95>/motohawk_calibration9'
     *  S-Function (motohawk_sfun_calibration): '<S96>/motohawk_calibration10'
     *  S-Function (motohawk_sfun_calibration): '<S96>/motohawk_calibration11'
     *  S-Function (motohawk_sfun_calibration): '<S96>/motohawk_calibration12'
     *  S-Function (motohawk_sfun_calibration): '<S96>/motohawk_calibration13'
     *  S-Function (motohawk_sfun_calibration): '<S96>/motohawk_calibration14'
     *  S-Function (motohawk_sfun_calibration): '<S96>/motohawk_calibration15'
     *  S-Function (motohawk_sfun_calibration): '<S96>/motohawk_calibration8'
     *  S-Function (motohawk_sfun_calibration): '<S96>/motohawk_calibration9'
     */
    BaseEngineController_A02_bak2_B.s14_Merge1[0] = ((int8_T)
      (HardCycle1Cyl1_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[1] = ((int8_T)
      (HardCycle1Cyl2_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[2] = ((int8_T)
      (HardCycle1Cyl3_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[3] = ((int8_T)
      (HardCycle1Cyl4_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[4] = ((int8_T)
      (HardCycle1Cyl5_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[5] = ((int8_T)
      (HardCycle1Cyl6_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[6] = ((int8_T)
      (HardCycle1Cyl7_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[7] = ((int8_T)
      (HardCycle1Cyl8_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[8] = ((int8_T)
      (HardCycle2Cyl1_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[9] = ((int8_T)
      (HardCycle2Cyl2_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[10] = ((int8_T)
      (HardCycle2Cyl3_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[11] = ((int8_T)
      (HardCycle2Cyl4_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[12] = ((int8_T)
      (HardCycle2Cyl5_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[13] = ((int8_T)
      (HardCycle2Cyl6_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[14] = ((int8_T)
      (HardCycle2Cyl7_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[15] = ((int8_T)
      (HardCycle2Cyl8_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[16] = ((int8_T)
      (HardCycle3Cyl1_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[17] = ((int8_T)
      (HardCycle3Cyl2_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[18] = ((int8_T)
      (HardCycle3Cyl3_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[19] = ((int8_T)
      (HardCycle3Cyl4_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[20] = ((int8_T)
      (HardCycle3Cyl5_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[21] = ((int8_T)
      (HardCycle3Cyl6_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[22] = ((int8_T)
      (HardCycle3Cyl7_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[23] = ((int8_T)
      (HardCycle3Cyl8_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[24] = ((int8_T)
      (HardCycle4Cyl1_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[25] = ((int8_T)
      (HardCycle4Cyl2_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[26] = ((int8_T)
      (HardCycle4Cyl3_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[27] = ((int8_T)
      (HardCycle4Cyl4_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[28] = ((int8_T)
      (HardCycle4Cyl5_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[29] = ((int8_T)
      (HardCycle4Cyl6_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[30] = ((int8_T)
      (HardCycle4Cyl7_DataStore()));
    BaseEngineController_A02_bak2_B.s14_Merge1[31] = ((int8_T)
      (HardCycle4Cyl8_DataStore()));
  } else {
    if (BaseEngineController_A02_bak2_DWork.s14_PassThrough3_MODE) {
      /* Disable for Outport: '<S88>/Out1' */
      for (i = 0; i < 32; i++) {
        BaseEngineController_A02_bak2_B.s14_Merge1[i] = 0;
      }

      /* End of Outport: '<S88>/Out1' */
      BaseEngineController_A02_bak2_DWork.s14_PassThrough3_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S14>/PassThrough3' */

  /* Outputs for Enabled SubSystem: '<S14>/SequenceCutMachine' incorporates:
   *  EnablePort: '<S91>/Enable'
   */
  if (rtb_RelationalOperator2_m) {
    if (!BaseEngineController_A02_bak2_DWork.s14_SequenceCutMachine_MODE) {
      /* InitializeConditions for UnitDelay: '<S91>/Unit Delay2' */
      BaseEngineController_A02_bak2_DWork.s91_UnitDelay2_DSTATE = 1.0;

      /* InitializeConditions for UnitDelay: '<S91>/Unit Delay1' */
      BaseEngineController_A02_bak2_DWork.s91_UnitDelay1_DSTATE = 1U;

      /* Level2 S-Function Block: '<S91>/motohawk_trigger' (motohawk_sfun_trigger) */

      /* Enable for Trigger_FGND_TDC1_EVENT_984p0004 */
      BaseEngineController_A02_bak2_DWork.s91_motohawk_trigger_DWORK1 = 1;
      BaseEngineController_A02_bak2_DWork.s14_SequenceCutMachine_MODE = TRUE;
    }

    /* UnitDelay: '<S91>/Unit Delay2' */
    BaseEngineController_A02_bak2_B.s91_UnitDelay2 =
      BaseEngineController_A02_bak2_DWork.s91_UnitDelay2_DSTATE;

    /* MultiPortSwitch: '<S91>/Multiport Switch' */
    switch ((int32_T)BaseEngineController_A02_bak2_B.s91_UnitDelay2) {
     case 1:
      for (i = 0; i < 8; i++) {
        BaseEngineController_A02_bak2_B.s91_MultiportSwitch[i] =
          BaseEngineController_A02_bak2_B.s14_Merge1[i];
      }
      break;

     case 2:
      for (i = 0; i < 8; i++) {
        BaseEngineController_A02_bak2_B.s91_MultiportSwitch[i] =
          BaseEngineController_A02_bak2_B.s14_Merge1[i + 8];
      }
      break;

     case 3:
      for (i = 0; i < 8; i++) {
        BaseEngineController_A02_bak2_B.s91_MultiportSwitch[i] =
          BaseEngineController_A02_bak2_B.s14_Merge1[i + 16];
      }
      break;

     default:
      for (i = 0; i < 8; i++) {
        BaseEngineController_A02_bak2_B.s91_MultiportSwitch[i] =
          BaseEngineController_A02_bak2_B.s14_Merge1[i + 24];
      }
      break;
    }

    /* End of MultiPortSwitch: '<S91>/Multiport Switch' */

    /* UnitDelay: '<S91>/Unit Delay1' */
    BaseEngineController_A02_bak2_B.s91_UnitDelay1 =
      BaseEngineController_A02_bak2_DWork.s91_UnitDelay1_DSTATE;

    /* S-Function (motohawk_sfun_trigger): '<S91>/motohawk_trigger' */
    /* Enable for Trigger_FGND_TDC1_EVENT_984p0004 */
    if (BaseEngineController_A02_bak2_DWork.s91_motohawk_trigger_DWORK1 == 0) {
      BaseEngineController_A02_bak2_DWork.s91_motohawk_trigger_DWORK1 = 1;
    }

    /* Update for UnitDelay: '<S91>/Unit Delay2' */
    BaseEngineController_A02_bak2_DWork.s91_UnitDelay2_DSTATE =
      BaseEngineController_A02_bak2_B.s101_Switch1;

    /* Update for UnitDelay: '<S91>/Unit Delay1' */
    BaseEngineController_A02_bak2_DWork.s91_UnitDelay1_DSTATE =
      BaseEngineController_A02_bak2_B.s101_Switch;
  } else {
    if (BaseEngineController_A02_bak2_DWork.s14_SequenceCutMachine_MODE) {
      /* Level2 S-Function Block: '<S91>/motohawk_trigger' (motohawk_sfun_trigger) */
      /* Disable for Trigger_FGND_TDC1_EVENT_984p0004 */
      BaseEngineController_A02_bak2_DWork.s91_motohawk_trigger_DWORK1 = 0;
      BaseEngineController_A02_bak2_DWork.s14_SequenceCutMachine_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S14>/SequenceCutMachine' */
  /* Outputs for Enabled SubSystem: '<S14>/PassThrough4' incorporates:
   *  EnablePort: '<S89>/Enable'
   */
  /* Logic: '<S14>/Logical Operator' incorporates:
   *  Constant: '<S14>/Constant'
   *  Constant: '<S14>/Constant1'
   *  RelationalOperator: '<S14>/Relational Operator'
   *  RelationalOperator: '<S14>/Relational Operator1'
   *  S-Function (motohawk_sfun_calibration): '<S14>/motohawk_calibration1'
   */
  if ((((int8_T)(RevLimitType_DataStore())) == 0) || (((int8_T)
        (RevLimitType_DataStore())) == 2)) {
    if (!BaseEngineController_A02_bak2_DWork.s14_PassThrough4_MODE) {
      BaseEngineController_A02_bak2_DWork.s14_PassThrough4_MODE = TRUE;
    }

    /* DataTypeConversion: '<S89>/Data Type Conversion' */
    for (i = 0; i < 8; i++) {
      BaseEngineController_A02_bak2_B.s89_DataTypeConversion[i] =
        ((BaseEngineController_A02_bak2_B.s101_CutArray[i] != 0));
    }

    /* End of DataTypeConversion: '<S89>/Data Type Conversion' */
  } else {
    if (BaseEngineController_A02_bak2_DWork.s14_PassThrough4_MODE) {
      /* Disable for Outport: '<S89>/Out1' */
      for (i = 0; i < 8; i++) {
        BaseEngineController_A02_bak2_B.s89_DataTypeConversion[i] = FALSE;
      }

      /* End of Outport: '<S89>/Out1' */
      BaseEngineController_A02_bak2_DWork.s14_PassThrough4_MODE = FALSE;
    }
  }

  /* End of Logic: '<S14>/Logical Operator' */
  /* End of Outputs for SubSystem: '<S14>/PassThrough4' */

  /* Logic: '<S14>/Logical Operator2' */
  for (i = 0; i < 8; i++) {
    BaseEngineController_A02_bak2_B.s14_LogicalOperator2[i] =
      !BaseEngineController_A02_bak2_B.s89_DataTypeConversion[i];
  }

  /* End of Logic: '<S14>/Logical Operator2' */

  /* S-Function (motohawk_sfun_trigger): '<S5>/motohawk_trigger' */
  /* Enable for Trigger_FGND_5XRTI_PERIODIC_9590p0004 */
  if (BaseEngineController_A02_bak2_DWork.s5_motohawk_trigger_DWORK1 == 0) {
    /* Enable for function-call system: '<S5>/Coil Control' */

    /* Enable for Atomic SubSystem: '<S716>/EST Enable TDC Counter' */

    /* Level2 S-Function Block: '<S721>/motohawk_trigger1' (motohawk_sfun_trigger) */

    /* Enable for Trigger_FGND_TDC_EVENT_9072p0002 */
    BaseEngineController_A02_bak2_DWork.s721_motohawk_trigger1_DWORK1 = 1;

    /* End of Enable for SubSystem: '<S716>/EST Enable TDC Counter' */
    BaseEngineController_A02_bak2_DWork.s5_motohawk_trigger_DWORK1 = 1;
  }

  /* If: '<S746>/If' incorporates:
   *  Inport: '<S747>/In1'
   *  Inport: '<S748>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S746>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S746>/override_enable'
   */
  if ((FAN1_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S746>/NewValue' incorporates:
     *  ActionPort: '<S747>/Action Port'
     */
    rtb_RelationalOperator2_m = (FAN1_new_DataStore());

    /* End of Outputs for SubSystem: '<S746>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S746>/OldValue' incorporates:
     *  ActionPort: '<S748>/Action Port'
     */
    rtb_RelationalOperator2_m = BaseEngineController_A02_bak2_B.s111_FAN1;

    /* End of Outputs for SubSystem: '<S746>/OldValue' */
  }

  /* End of If: '<S746>/If' */

  /* Logic: '<S744>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S744>/0 = No Inversion 1 = Inversion'
   */
  BaseEngineController_A02_bak2_B.s744_LogicalOperator =
    rtb_RelationalOperator2_m ^ (FAN1_Polarity_DataStore());

  /* If: '<S749>/If' incorporates:
   *  Inport: '<S750>/In1'
   *  Inport: '<S751>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S749>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S749>/override_enable'
   */
  if ((FAN2_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S749>/NewValue' incorporates:
     *  ActionPort: '<S750>/Action Port'
     */
    rtb_RelationalOperator2_m = (FAN2_new_DataStore());

    /* End of Outputs for SubSystem: '<S749>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S749>/OldValue' incorporates:
     *  ActionPort: '<S751>/Action Port'
     */
    rtb_RelationalOperator2_m = BaseEngineController_A02_bak2_B.s111_FAN2;

    /* End of Outputs for SubSystem: '<S749>/OldValue' */
  }

  /* End of If: '<S749>/If' */

  /* Logic: '<S745>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S745>/0 = No Inversion 1 = Inversion'
   */
  BaseEngineController_A02_bak2_B.s745_LogicalOperator =
    rtb_RelationalOperator2_m ^ (FAN2_Polarity_DataStore());

  /* Switch: '<S120>/Switch' incorporates:
   *  Constant: '<S120>/OFF'
   *  Logic: '<S120>/Logical Operator'
   *  S-Function (motohawk_sfun_data_read): '<S120>/motohawk_data_read'
   *  S-Function (motohawk_sfun_data_read): '<S120>/motohawk_data_read1'
   */
  if (DelayedEngineShutdownAction_DataStore() || EngineShutdownAction_DataStore())
  {
    rtb_RelOp_em = FALSE;
  } else {
    rtb_RelOp_em = BaseEngineController_A02_bak2_B.s111_FUELP;
  }

  /* End of Switch: '<S120>/Switch' */

  /* Logic: '<S5>/Logical Operator4' */
  rtb_RelationalOperator2_m = !BaseEngineController_A02_bak2_B.s505_Merge;

  /* If: '<S753>/If' incorporates:
   *  Inport: '<S754>/In1'
   *  Inport: '<S755>/In1'
   *  Logic: '<S5>/Logical Operator5'
   *  S-Function (motohawk_sfun_calibration): '<S753>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S753>/override_enable'
   */
  if ((FUELP_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S753>/NewValue' incorporates:
     *  ActionPort: '<S754>/Action Port'
     */
    rtb_RelationalOperator2_m = (FUELP_new_DataStore());

    /* End of Outputs for SubSystem: '<S753>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S753>/OldValue' incorporates:
     *  ActionPort: '<S755>/Action Port'
     */
    rtb_RelationalOperator2_m = (rtb_RelOp_em && rtb_RelationalOperator2_m);

    /* End of Outputs for SubSystem: '<S753>/OldValue' */
  }

  /* End of If: '<S753>/If' */

  /* Logic: '<S752>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S752>/0 = No Inversion 1 = Inversion'
   */
  BaseEngineController_A02_bak2_B.s752_LogicalOperator =
    rtb_RelationalOperator2_m ^ (FUELP_Polarity_DataStore());

  /* S-Function Block: <S756>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_bak2_DWork.s756_motohawk_delta_time_DWORK1,
       NULL);
    rtb_motohawk_delta_time_ha = ((real_T) delta) * 0.000001;
  }

  /* S-Function Block: <S425>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_bak2_DWork.s425_motohawk_delta_time_DWORK1,
       NULL);
    rtb_motohawk_delta_time_l = ((real_T) delta) * 0.000001;
  }

  /* RelationalOperator: '<S424>/RelOp' incorporates:
   *  Constant: '<S424>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S406>/motohawk_data_read'
   */
  rtb_RelationalOperator2_m = (((uint8_T)EngineState_DataStore()) == 1);

  /* S-Function Block: <S406>/motohawk_ain_read Resource: ECUP */
  {
    extern NativeError_S ECUP_AnalogInput_Get(uint16_T *adc, uint16_T *status);
    ECUP_AnalogInput_Get(&rtb_motohawk_ain_read_h, NULL);
  }

  /* Switch: '<S425>/Switch' incorporates:
   *  Constant: '<S406>/Constant1'
   *  Constant: '<S425>/Constant'
   *  Logic: '<S406>/Logical Operator'
   *  RelationalOperator: '<S406>/Relational Operator'
   *  S-Function (motohawk_sfun_ain_read): '<S406>/motohawk_ain_read'
   *  S-Function (motohawk_sfun_data_read): '<S425>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S425>/motohawk_delta_time'
   *  Sum: '<S425>/Sum'
   */
  if (rtb_RelationalOperator2_m && (rtb_motohawk_ain_read_h > 150)) {
    BaseEngineController_A02_bak2_B.s425_Switch = rtb_motohawk_delta_time_l +
      TimeSinceStallTimer_DataStore();
  } else {
    BaseEngineController_A02_bak2_B.s425_Switch = 0.0;
  }

  /* End of Switch: '<S425>/Switch' */
  /* Logic: '<S708>/Logical Operator1' incorporates:
   *  Logic: '<S5>/Logical Operator9'
   *  RelationalOperator: '<S5>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S5>/motohawk_calibration3'
   *  S-Function (motohawk_sfun_calibration): '<S708>/motohawk_calibration5'
   */
  rtb_RelOp_em = ((ETC_CutPower_Permitted_DataStore()) &&
                  (BaseEngineController_A02_bak2_B.s505_Merge ||
                   (BaseEngineController_A02_bak2_B.s425_Switch >
                    (ETC_CutPower_StallTime_DataStore()))));

  /* Outputs for Enabled SubSystem: '<S6>/Electronic Throttle Controller' incorporates:
   *  EnablePort: '<S12>/Enable'
   */
  /* RelationalOperator: '<S11>/RelOp' incorporates:
   *  Constant: '<S11>/Constant'
   *  Constant: '<S22>/Constant2'
   *  Constant: '<S44>/Constant'
   *  Inport: '<S43>/In1'
   *  RelationalOperator: '<S44>/RelOp'
   *  S-Function (motohawk_sfun_data_read): '<S22>/motohawk_data_read3'
   *  S-Function (motohawk_sfun_data_read): '<S6>/motohawk_data_read'
   *  Sum: '<S22>/Add2'
   */
  if (!AirControlSource_DataStore()) {
    if (!BaseEngineController_A02_bak2_DWork.s6_ElectronicThrottleController_MODE)
    {
      BaseEngineController_A02_bak2_DWork.s6_ElectronicThrottleController_MODE =
        TRUE;
    }

    /* RelationalOperator: '<S53>/RelOp' incorporates:
     *  Constant: '<S53>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S23>/motohawk_data_read3'
     */
    rtb_RelationalOperator2_m = (((uint8_T)EngineState_DataStore()) == 1);

    /* Logic: '<S23>/Logical Operator2' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S23>/motohawk_data_read2'
     */
    rtb_RelOp_js = !ShutDownTasksComplete_DataStore();

    /* S-Function Block: <S23>/motohawk_ain_read Resource: ECUP */
    {
      extern NativeError_S ECUP_AnalogInput_Get(uint16_T *adc, uint16_T *status);
      ECUP_AnalogInput_Get(&rtb_motohawk_ain_read_c, NULL);
    }

    /* RelationalOperator: '<S23>/Relational Operator' incorporates:
     *  Constant: '<S23>/Constant1'
     *  S-Function (motohawk_sfun_ain_read): '<S23>/motohawk_ain_read'
     */
    rtb_AboveHiTarget = (rtb_motohawk_ain_read_c < 150);

    /* Logic: '<S23>/Logical Operator3' */
    BaseEngineController_A02_bak2_B.s23_LogicalOperator3 =
      ((rtb_RelationalOperator2_m && rtb_RelOp_js && rtb_AboveHiTarget));

    /* S-Function Block: <S54>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_bak2_DWork.s54_motohawk_delta_time_DWORK1,
         NULL);
      rtb_motohawk_delta_time_k3 = ((real_T) delta) * 0.000001;
    }

    /* Switch: '<S54>/Switch' incorporates:
     *  Constant: '<S54>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S54>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S54>/motohawk_delta_time'
     *  Sum: '<S54>/Sum'
     */
    if (rtb_AboveHiTarget) {
      BaseEngineController_A02_bak2_B.s54_Switch = rtb_motohawk_delta_time_k3 +
        ETCShutDownTimer_DataStore();
    } else {
      BaseEngineController_A02_bak2_B.s54_Switch = 0.0;
    }

    /* End of Switch: '<S54>/Switch' */

    /* UnitDelay: '<S12>/Unit Delay' */
    rtb_Product1_f = BaseEngineController_A02_bak2_DWork.s12_UnitDelay_DSTATE;

    /* RelationalOperator: '<S12>/Relational Operator5' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S12>/motohawk_calibration4'
     */
    BaseEngineController_A02_bak2_B.s12_RelationalOperator5 = ((rtb_Product1_f <
      (ETC_ShutdownLoAdaptError_DataStore())));

    /* RelationalOperator: '<S12>/Relational Operator2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S12>/motohawk_calibration5'
     */
    BaseEngineController_A02_bak2_B.s12_RelationalOperator2 =
      ((BaseEngineController_A02_bak2_B.s403_Switch2 >
        (ETC_SpringTestHiThresh_DataStore())));

    /* RelationalOperator: '<S12>/Relational Operator3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S12>/motohawk_calibration6'
     */
    BaseEngineController_A02_bak2_B.s12_RelationalOperator3 =
      ((BaseEngineController_A02_bak2_B.s403_Switch2 <
        (ETC_SpringTestLoThresh_DataStore())));

    /* Stateflow: '<S12>/ETC Test  Manager' */

    /* Gateway: Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/ETC Test  Manager */
    /* During: Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/ETC Test  Manager */
    switch
      (BaseEngineController_A02_bak2_DWork.s18_is_c9_BaseEngineController_A02_bak2)
    {
     case BaseEngineController_A02_bak2_IN_ForcedShutdown:
      /* During 'ForcedShutdown': '<S18>:6' */
      if (!BaseEngineController_A02_bak2_B.s23_LogicalOperator3) {
        /* Transition: '<S18>:19' */
        BaseEngineController_A02_bak2_DWork.s18_is_c9_BaseEngineController_A02_bak2
          = BaseEngineController_A02_bak2_IN_SpringTestComplete;

        /* Entry 'SpringTestComplete': '<S18>:5' */
        BaseEngineController_A02_bak2_B.s18_DC_Override = 1;
        BaseEngineController_A02_bak2_B.s18_TestComplete = TRUE;
        BaseEngineController_A02_bak2_B.s18_SetpointMode = 0;
        BaseEngineController_A02_bak2_B.s18_TestTime =
          BaseEngineController_A02_bak2_B.s54_Switch -
          BaseEngineController_A02_bak2_DWork.s18_TimerOld;
      }
      break;

     case BaseEngineController_A02_bak2_IN_LowAdapt:
      /* During 'LowAdapt': '<S18>:2' */
      if (BaseEngineController_A02_bak2_B.s54_Switch > 5.0) {
        /* Transition: '<S18>:17' */
        BaseEngineController_A02_bak2_DWork.s18_is_c9_BaseEngineController_A02_bak2
          = BaseEngineController_A02_bak2_IN_ForcedShutdown;

        /* Entry 'ForcedShutdown': '<S18>:6' */
        BaseEngineController_A02_bak2_B.s18_DC_Override = 1;
        BaseEngineController_A02_bak2_B.s18_TestComplete = TRUE;
        BaseEngineController_A02_bak2_B.s18_SetpointMode = 0;
        BaseEngineController_A02_bak2_B.s18_TestTime = 0.0;
      } else if (BaseEngineController_A02_bak2_B.s23_LogicalOperator3 &&
                 BaseEngineController_A02_bak2_B.s12_RelationalOperator5) {
        /* Transition: '<S18>:9' */
        BaseEngineController_A02_bak2_DWork.s18_is_c9_BaseEngineController_A02_bak2
          = BaseEngineController_A02_bak2_IN_SpringTestSetpoint;

        /* Entry 'SpringTestSetpoint': '<S18>:3' */
        BaseEngineController_A02_bak2_B.s18_DC_Override = 0;
        BaseEngineController_A02_bak2_B.s18_TestComplete = FALSE;
        BaseEngineController_A02_bak2_B.s18_SetpointMode = 2;
        BaseEngineController_A02_bak2_B.s18_TestTime = 0.0;
      } else {
        if (!BaseEngineController_A02_bak2_B.s23_LogicalOperator3) {
          /* Transition: '<S18>:12' */
          BaseEngineController_A02_bak2_DWork.s18_is_c9_BaseEngineController_A02_bak2
            = BaseEngineController_A02_bak2_IN_PassThrough;

          /* Entry 'PassThrough': '<S18>:1' */
          BaseEngineController_A02_bak2_B.s18_DC_Override = 0;
          BaseEngineController_A02_bak2_B.s18_TestComplete = FALSE;
          BaseEngineController_A02_bak2_B.s18_SetpointMode = 0;
          BaseEngineController_A02_bak2_B.s18_TestTime = 0.0;
        }
      }
      break;

     case BaseEngineController_A02_bak2_IN_PassThrough:
      /* During 'PassThrough': '<S18>:1' */
      if (BaseEngineController_A02_bak2_B.s23_LogicalOperator3) {
        /* Transition: '<S18>:8' */
        BaseEngineController_A02_bak2_DWork.s18_is_c9_BaseEngineController_A02_bak2
          = BaseEngineController_A02_bak2_IN_LowAdapt;

        /* Entry 'LowAdapt': '<S18>:2' */
        BaseEngineController_A02_bak2_B.s18_DC_Override = 0;
        BaseEngineController_A02_bak2_B.s18_TestComplete = FALSE;
        BaseEngineController_A02_bak2_B.s18_SetpointMode = 1;
        BaseEngineController_A02_bak2_B.s18_TestTime = 0.0;
      }
      break;

     case BaseEngineController_A02_bak2_IN_SpringTest:
      /* During 'SpringTest': '<S18>:4' */
      if (BaseEngineController_A02_bak2_B.s54_Switch > 5.0) {
        /* Transition: '<S18>:16' */
        BaseEngineController_A02_bak2_DWork.s18_is_c9_BaseEngineController_A02_bak2
          = BaseEngineController_A02_bak2_IN_ForcedShutdown;

        /* Entry 'ForcedShutdown': '<S18>:6' */
        BaseEngineController_A02_bak2_B.s18_DC_Override = 1;
        BaseEngineController_A02_bak2_B.s18_TestComplete = TRUE;
        BaseEngineController_A02_bak2_B.s18_SetpointMode = 0;
        BaseEngineController_A02_bak2_B.s18_TestTime = 0.0;
      } else if (BaseEngineController_A02_bak2_B.s23_LogicalOperator3 &&
                 BaseEngineController_A02_bak2_B.s12_RelationalOperator3) {
        /* Transition: '<S18>:11' */
        BaseEngineController_A02_bak2_DWork.s18_is_c9_BaseEngineController_A02_bak2
          = BaseEngineController_A02_bak2_IN_SpringTestComplete;

        /* Entry 'SpringTestComplete': '<S18>:5' */
        BaseEngineController_A02_bak2_B.s18_DC_Override = 1;
        BaseEngineController_A02_bak2_B.s18_TestComplete = TRUE;
        BaseEngineController_A02_bak2_B.s18_SetpointMode = 0;
        BaseEngineController_A02_bak2_B.s18_TestTime =
          BaseEngineController_A02_bak2_B.s54_Switch -
          BaseEngineController_A02_bak2_DWork.s18_TimerOld;
      } else {
        if (!BaseEngineController_A02_bak2_B.s23_LogicalOperator3) {
          /* Transition: '<S18>:15' */
          BaseEngineController_A02_bak2_DWork.s18_is_c9_BaseEngineController_A02_bak2
            = BaseEngineController_A02_bak2_IN_PassThrough;

          /* Entry 'PassThrough': '<S18>:1' */
          BaseEngineController_A02_bak2_B.s18_DC_Override = 0;
          BaseEngineController_A02_bak2_B.s18_TestComplete = FALSE;
          BaseEngineController_A02_bak2_B.s18_SetpointMode = 0;
          BaseEngineController_A02_bak2_B.s18_TestTime = 0.0;
        }
      }
      break;

     case BaseEngineController_A02_bak2_IN_SpringTestComplete:
      /* During 'SpringTestComplete': '<S18>:5' */
      if (!BaseEngineController_A02_bak2_B.s23_LogicalOperator3) {
        /* Transition: '<S18>:14' */
        BaseEngineController_A02_bak2_DWork.s18_is_c9_BaseEngineController_A02_bak2
          = BaseEngineController_A02_bak2_IN_PassThrough;

        /* Entry 'PassThrough': '<S18>:1' */
        BaseEngineController_A02_bak2_B.s18_DC_Override = 0;
        BaseEngineController_A02_bak2_B.s18_TestComplete = FALSE;
        BaseEngineController_A02_bak2_B.s18_SetpointMode = 0;
        BaseEngineController_A02_bak2_B.s18_TestTime = 0.0;
      }
      break;

     case BaseEngineController_A02_bak2_IN_SpringTestSetpoint:
      /* During 'SpringTestSetpoint': '<S18>:3' */
      if (!BaseEngineController_A02_bak2_B.s23_LogicalOperator3) {
        /* Transition: '<S18>:13' */
        BaseEngineController_A02_bak2_DWork.s18_is_c9_BaseEngineController_A02_bak2
          = BaseEngineController_A02_bak2_IN_PassThrough;

        /* Entry 'PassThrough': '<S18>:1' */
        BaseEngineController_A02_bak2_B.s18_DC_Override = 0;
        BaseEngineController_A02_bak2_B.s18_TestComplete = FALSE;
        BaseEngineController_A02_bak2_B.s18_SetpointMode = 0;
        BaseEngineController_A02_bak2_B.s18_TestTime = 0.0;
      } else if (BaseEngineController_A02_bak2_B.s23_LogicalOperator3 &&
                 BaseEngineController_A02_bak2_B.s12_RelationalOperator2) {
        /* Transition: '<S18>:10' */
        BaseEngineController_A02_bak2_DWork.s18_is_c9_BaseEngineController_A02_bak2
          = BaseEngineController_A02_bak2_IN_SpringTest;

        /* Entry 'SpringTest': '<S18>:4' */
        BaseEngineController_A02_bak2_B.s18_DC_Override = 1;
        BaseEngineController_A02_bak2_B.s18_TestComplete = FALSE;
        BaseEngineController_A02_bak2_B.s18_SetpointMode = 0;
        BaseEngineController_A02_bak2_B.s18_TestTime = 0.0;
        BaseEngineController_A02_bak2_DWork.s18_TimerOld =
          BaseEngineController_A02_bak2_B.s54_Switch;
      } else {
        if (BaseEngineController_A02_bak2_B.s54_Switch > 5.0) {
          /* Transition: '<S18>:18' */
          BaseEngineController_A02_bak2_DWork.s18_is_c9_BaseEngineController_A02_bak2
            = BaseEngineController_A02_bak2_IN_ForcedShutdown;

          /* Entry 'ForcedShutdown': '<S18>:6' */
          BaseEngineController_A02_bak2_B.s18_DC_Override = 1;
          BaseEngineController_A02_bak2_B.s18_TestComplete = TRUE;
          BaseEngineController_A02_bak2_B.s18_SetpointMode = 0;
          BaseEngineController_A02_bak2_B.s18_TestTime = 0.0;
        }
      }
      break;

     default:
      /* Transition: '<S18>:7' */
      BaseEngineController_A02_bak2_DWork.s18_is_c9_BaseEngineController_A02_bak2
        = BaseEngineController_A02_bak2_IN_PassThrough;

      /* Entry 'PassThrough': '<S18>:1' */
      BaseEngineController_A02_bak2_B.s18_DC_Override = 0;
      BaseEngineController_A02_bak2_B.s18_TestComplete = FALSE;
      BaseEngineController_A02_bak2_B.s18_SetpointMode = 0;
      BaseEngineController_A02_bak2_B.s18_TestTime = 0.0;
      break;
    }

    /* End of Stateflow: '<S12>/ETC Test  Manager' */
    /* S-Function Block: <S47>/motohawk_delta_time */
    rtb_motohawk_delta_time_byu = 0.005;

    /* Switch: '<S47>/Switch' incorporates:
     *  Constant: '<S47>/Constant'
     *  S-Function (motohawk_sfun_calibration): '<S45>/motohawk_calibration'
     *  S-Function (motohawk_sfun_data_read): '<S47>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S47>/motohawk_delta_time'
     *  Sum: '<S47>/Sum'
     */
    if ((ETCTuneEnable_DataStore())) {
      rtb_Switch_fm = rtb_motohawk_delta_time_byu + ETC_Tune_Timer_DataStore();
    } else {
      rtb_Switch_fm = 0.0;
    }

    /* End of Switch: '<S47>/Switch' */
    /* If: '<S48>/If' incorporates:
     *  Inport: '<S49>/In1'
     *  Inport: '<S50>/In1'
     *  S-Function (motohawk_sfun_calibration): '<S48>/new_value'
     *  S-Function (motohawk_sfun_calibration): '<S48>/override_enable'
     */
    if ((ETCReq_ovr_DataStore())) {
      /* Outputs for IfAction SubSystem: '<S48>/NewValue' incorporates:
       *  ActionPort: '<S49>/Action Port'
       */
      rtb_Product1_i = (ETCReq_new_DataStore());

      /* End of Outputs for SubSystem: '<S48>/NewValue' */
    } else {
      /* Outputs for IfAction SubSystem: '<S48>/OldValue' incorporates:
       *  ActionPort: '<S50>/Action Port'
       */
      rtb_Product1_i = BaseEngineController_A02_bak2_B.s111_Throttle;

      /* End of Outputs for SubSystem: '<S48>/OldValue' */
    }

    /* End of If: '<S48>/If' */

    /* S-Function Block: <S46>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_bak2_DWork.s46_motohawk_delta_time_DWORK1,
         NULL);
      rtb_motohawk_delta_time_l2 = ((real_T) delta) * 0.000001;
    }

    /* Outputs for Enabled SubSystem: '<S22>/PassThrough' incorporates:
     *  EnablePort: '<S43>/Enable'
     */
    if (BaseEngineController_A02_bak2_B.s18_SetpointMode == 1) {
      if (!BaseEngineController_A02_bak2_DWork.s22_PassThrough_MODE) {
        BaseEngineController_A02_bak2_DWork.s22_PassThrough_MODE = TRUE;
      }

      BaseEngineController_A02_bak2_B.s43_In1 = -5.0 +
        ETC_ShutdownLoAdaptError_DataStore();
    } else {
      if (BaseEngineController_A02_bak2_DWork.s22_PassThrough_MODE) {
        /* Disable for Outport: '<S43>/Out1' */
        BaseEngineController_A02_bak2_B.s43_In1 = 10.0;
        BaseEngineController_A02_bak2_DWork.s22_PassThrough_MODE = FALSE;
      }
    }

    /* End of Outputs for SubSystem: '<S22>/PassThrough' */

    /* UnitDelay: '<S46>/Unit Delay' incorporates:
     *  Constant: '<S22>/Constant2'
     *  Constant: '<S44>/Constant'
     *  Inport: '<S43>/In1'
     *  RelationalOperator: '<S44>/RelOp'
     *  S-Function (motohawk_sfun_data_read): '<S22>/motohawk_data_read3'
     *  Sum: '<S22>/Add2'
     */
    rtb_Product1_f = BaseEngineController_A02_bak2_DWork.s46_UnitDelay_DSTATE;

    /* Product: '<S46>/Product1' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S46>/motohawk_delta_time'
     *  Sum: '<S46>/Sum3'
     *  UnitDelay: '<S46>/Unit Delay'
     */
    rtb_Product5_g = 1.0 / rtb_motohawk_delta_time_l2 *
      (BaseEngineController_A02_bak2_B.s43_In1 -
       BaseEngineController_A02_bak2_DWork.s46_UnitDelay_DSTATE);

    /* MinMax: '<S51>/MinMax' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S22>/motohawk_calibration2'
     */
    rtb_Product5_g = (rtb_Product5_g >= (ETC_LoAdaptRateLimit_DataStore())) ||
      rtIsNaN((ETC_LoAdaptRateLimit_DataStore())) ? rtb_Product5_g :
      (ETC_LoAdaptRateLimit_DataStore());

    /* Sum: '<S46>/Sum2' incorporates:
     *  Constant: '<S22>/Constant7'
     *  MinMax: '<S51>/MinMax1'
     *  Product: '<S46>/Product'
     *  S-Function (motohawk_sfun_delta_time): '<S46>/motohawk_delta_time'
     */
    rtb_Merge_hd = (rtb_Product5_g <= 100.0 ? rtb_Product5_g : 100.0) *
      rtb_motohawk_delta_time_l2 + rtb_Product1_f;

    /* MultiPortSwitch: '<S22>/Multiport Switch' incorporates:
     *  Constant: '<S22>/Constant1'
     *  S-Function (motohawk_sfun_data_read): '<S22>/motohawk_data_read1'
     *  Sum: '<S22>/Add1'
     */
    switch (BaseEngineController_A02_bak2_B.s18_SetpointMode) {
     case 0:
      /* Switch: '<S45>/Switch' incorporates:
       *  Fcn: '<S45>/Sine Wave'
       *  S-Function (motohawk_sfun_calibration): '<S45>/motohawk_calibration'
       *  S-Function (motohawk_sfun_calibration): '<S45>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_calibration): '<S45>/motohawk_calibration2'
       *  S-Function (motohawk_sfun_calibration): '<S45>/motohawk_calibration4'
       *  Sum: '<S45>/Sum'
       */
      if ((ETCTuneEnable_DataStore())) {
        BaseEngineController_A02_bak2_B.s22_MultiportSwitch = (sin
          (6.2831853071795862 * (ETCTuneFreq_DataStore()) * rtb_Switch_fm) *
          (ETCTuneAmp_DataStore()) + (ETCTuneAmp_DataStore())) +
          (ETCTuneOffset_DataStore());
      } else {
        BaseEngineController_A02_bak2_B.s22_MultiportSwitch = rtb_Product1_i;
      }

      /* End of Switch: '<S45>/Switch' */
      break;

     case 1:
      BaseEngineController_A02_bak2_B.s22_MultiportSwitch = rtb_Merge_hd;
      break;

     default:
      BaseEngineController_A02_bak2_B.s22_MultiportSwitch = 10.0 +
        ETC_SpringTestHiThresh_DataStore();
      break;
    }

    /* End of MultiPortSwitch: '<S22>/Multiport Switch' */

    /* Sum: '<S22>/Add' */
    rtb_Sum1_j = BaseEngineController_A02_bak2_B.s22_MultiportSwitch -
      BaseEngineController_A02_bak2_B.s403_Switch2;

    /* Abs: '<S17>/Abs' */
    rtb_Product5_g = fabs(rtb_Sum1_j);

    /* Logic: '<S17>/Logical Operator' incorporates:
     *  Constant: '<S24>/Constant'
     *  RelationalOperator: '<S17>/Relational Operator4'
     *  RelationalOperator: '<S24>/RelOp'
     *  S-Function (motohawk_sfun_calibration): '<S17>/motohawk_calibration1'
     */
    rtb_LogicalOperator_lz = (((rtb_Product5_g > (ETC_StickingThresh_DataStore()))
      && (BaseEngineController_A02_bak2_B.s18_SetpointMode == 0)));

    /* S-Function (motohawk_sfun_fault_def): '<S17>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: ETC_Sticking */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(36, rtb_LogicalOperator_lz);
      UpdateFault(36);
    }

    /* Outputs for Triggered SubSystem: '<S12>/Reset TasksComplete To True' incorporates:
     *  TriggerPort: '<S21>/Trigger'
     */
    if (BaseEngineController_A02_bak2_B.s18_TestComplete &&
        (BaseEngineController_A02_bak2_PrevZCSigState.ResetTasksCompleteToTrue_Trig_ZCE
         != POS_ZCSIG)) {
      /* S-Function (motohawk_sfun_data_write): '<S21>/motohawk_data_write' incorporates:
       *  Constant: '<S21>/Constant2'
       */
      /* Write to Data Storage as scalar: ShutDownTasksComplete */
      {
        ShutDownTasksComplete_DataStore() = TRUE;
      }
    }

    BaseEngineController_A02_bak2_PrevZCSigState.ResetTasksCompleteToTrue_Trig_ZCE
      = (uint8_T)(BaseEngineController_A02_bak2_B.s18_TestComplete ? (int32_T)
                  POS_ZCSIG : (int32_T)ZERO_ZCSIG);

    /* End of Outputs for SubSystem: '<S12>/Reset TasksComplete To True' */

    /* S-Function (motohawk_sfun_data_write): '<S12>/motohawk_data_write' */
    /* Write to Data Storage as scalar: SpringTestTime */
    {
      SpringTestTime_DataStore() = BaseEngineController_A02_bak2_B.s18_TestTime;
    }

    /* RelationalOperator: '<S12>/Relational Operator1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S12>/motohawk_calibration3'
     */
    rtb_RelationalOperator1_h = (((ETC_SpringTestTimerThresh_DataStore()) <
      BaseEngineController_A02_bak2_B.s18_TestTime));

    /* S-Function (motohawk_sfun_fault_def): '<S12>/motohawk_fault_def' */

    /* Set Fault Suspected Status: ETCSpringTest */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(34, rtb_RelationalOperator1_h);
      UpdateFault(34);
    }

    /* RelationalOperator: '<S19>/Relational Operator6' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S19>/motohawk_calibration4'
     *  S-Function (motohawk_sfun_data_read): '<S19>/motohawk_data_read'
     */
    rtb_RelationalOperator2_m = (TimeSinceStall_DataStore() >
      (ETCShutdownTimerThresh_DataStore()));

    /* S-Function Block: <S19>/motohawk_ain_read Resource: ECUP */
    {
      extern NativeError_S ECUP_AnalogInput_Get(uint16_T *adc, uint16_T *status);
      ECUP_AnalogInput_Get(&rtb_motohawk_ain_read_f, NULL);
    }

    /* Logic: '<S19>/Logical Operator' incorporates:
     *  Constant: '<S19>/Constant1'
     *  RelationalOperator: '<S19>/Relational Operator'
     *  S-Function (motohawk_sfun_ain_read): '<S19>/motohawk_ain_read'
     */
    BaseEngineController_A02_bak2_B.s19_LogicalOperator =
      ((rtb_RelationalOperator2_m && (rtb_motohawk_ain_read_f > 150)));

    /* Logic: '<S12>/Logical Operator' */
    rtb_RelationalOperator2_m =
      ((BaseEngineController_A02_bak2_B.s18_DC_Override != 0) ||
       BaseEngineController_A02_bak2_B.s19_LogicalOperator);

    /* S-Function Block: <S20>/motohawk_prelookup2 */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (ETC_SetpointIn_DataStore()) =
        BaseEngineController_A02_bak2_B.s22_MultiportSwitch;
      (ETC_SetpointIdx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_A02_bak2_B.s22_MultiportSwitch,
         (ETC_SetpointIdxArr_DataStore()), 20, (ETC_SetpointIdx_DataStore()));
      rtb_motohawk_prelookup2_g = (ETC_SetpointIdx_DataStore());
    }

    /* S-Function Block: <S20>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_nh = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup2_g, (real_T *) ((ETCDCOffsetTbl_DataStore())),
         20);
      (ETCDCOffset_DataStore()) = rtb_motohawk_interpolation_1d_nh;
    }

    /* UnitDelay: '<S37>/Unit Delay' */
    rtb_Product1_i = BaseEngineController_A02_bak2_DWork.s37_UnitDelay_DSTATE;

    /* UnitDelay: '<S33>/Unit Delay' */
    rtb_Product1_f = BaseEngineController_A02_bak2_DWork.s33_UnitDelay_DSTATE;

    /* S-Function Block: <S34>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_bak2_DWork.s34_motohawk_delta_time_DWORK1,
         NULL);
      rtb_Product5_g = ((real_T) delta) * 0.000001;
    }

    /* Product: '<S34>/Product' incorporates:
     *  MinMax: '<S34>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S34>/motohawk_calibration'
     */
    rtb_Product5_g /= (rtb_Product5_g >= (ETCDamperTPSFilt_DataStore())) ||
      rtIsNaN((ETCDamperTPSFilt_DataStore())) ? rtb_Product5_g :
      (ETCDamperTPSFilt_DataStore());

    /* Sum: '<S35>/Sum1' incorporates:
     *  Constant: '<S35>/Constant'
     *  Product: '<S35>/Product'
     *  Product: '<S35>/Product1'
     *  Sum: '<S35>/Sum'
     *  UnitDelay: '<S35>/Unit Delay'
     */
    rtb_Merge_ek = (1.0 - rtb_Product5_g) *
      BaseEngineController_A02_bak2_DWork.s35_UnitDelay_DSTATE +
      BaseEngineController_A02_bak2_B.s403_Switch2 * rtb_Product5_g;

    /* S-Function Block: <S33>/motohawk_delta_time */
    rtb_motohawk_delta_time_d = 0.005;

    /* Product: '<S33>/Product' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S33>/motohawk_delta_time'
     *  Sum: '<S33>/Sum2'
     */
    BaseEngineController_A02_bak2_B.s33_Product = (rtb_Merge_ek - rtb_Product1_f)
      / rtb_motohawk_delta_time_d;

    /* Sum: '<S26>/Sum1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S26>/motohawk_calibration10'
     *  S-Function (motohawk_sfun_calibration): '<S26>/motohawk_calibration5'
     */
    rtb_Product5_g = (ETCDamperSwitchThresh_DataStore()) -
      (ETCDamperSwitchHyst_DataStore());

    /* RelationalOperator: '<S32>/LT' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S26>/motohawk_calibration5'
     */
    rtb_AboveHiTarget = (rtb_Product5_g >= (ETCDamperSwitchThresh_DataStore()));

    /* RelationalOperator: '<S32>/LT1' */
    rtb_BelowLoTarget = (rtb_Product5_g <=
                         BaseEngineController_A02_bak2_B.s33_Product);

    /* CombinatorialLogic: '<S36>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_AboveHiTarget != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_a[0] =
        BaseEngineController_A02_bak2_ConstP.pooled706[rowidx];
      rtb_CombinatorialLogic_a[1] =
        BaseEngineController_A02_bak2_ConstP.pooled706[rowidx + 4];
    }

    /* Switch: '<S36>/Switch1' incorporates:
     *  UnitDelay: '<S36>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_a[1]) {
      rtb_RelOp_js = rtb_CombinatorialLogic_a[0];
    } else {
      rtb_RelOp_js = BaseEngineController_A02_bak2_DWork.s36_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S36>/Switch1' */

    /* Switch: '<S32>/Switch2' incorporates:
     *  Logic: '<S32>/Logical Operator'
     *  S-Function (motohawk_sfun_calibration): '<S26>/motohawk_calibration5'
     */
    if (!rtb_RelOp_js) {
      BaseEngineController_A02_bak2_B.s32_Switch2 =
        (ETCDamperSwitchThresh_DataStore());
    } else {
      BaseEngineController_A02_bak2_B.s32_Switch2 =
        BaseEngineController_A02_bak2_B.s33_Product;
    }

    /* End of Switch: '<S32>/Switch2' */

    /* RelationalOperator: '<S26>/Relational Operator' */
    BaseEngineController_A02_bak2_B.s26_RelationalOperator =
      ((BaseEngineController_A02_bak2_B.s33_Product >
        BaseEngineController_A02_bak2_B.s32_Switch2));

    /* Switch: '<S29>/Switch' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S20>/motohawk_calibration7'
     *  S-Function (motohawk_sfun_calibration): '<S20>/motohawk_calibration8'
     */
    if (BaseEngineController_A02_bak2_B.s26_RelationalOperator) {
      rtb_Product5_g = (ETCDampGainUp_DataStore());
    } else {
      rtb_Product5_g = (ETCDampGainDown_DataStore());
    }

    /* End of Switch: '<S29>/Switch' */

    /* Product: '<S29>/Product3' */
    rtb_UnitDelay4_o = rtb_Product5_g *
      BaseEngineController_A02_bak2_B.s403_Switch2;

    /* S-Function Block: <S37>/motohawk_delta_time */
    rtb_motohawk_delta_time_ggn = 0.005;

    /* Product: '<S37>/Product' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S37>/motohawk_delta_time'
     *  Sum: '<S37>/Sum2'
     */
    BaseEngineController_A02_bak2_B.s37_Product = (rtb_UnitDelay4_o -
      rtb_Product1_i) / rtb_motohawk_delta_time_ggn;

    /* UnitDelay: '<S38>/Unit Delay' */
    rtb_Product1_f = BaseEngineController_A02_bak2_DWork.s38_UnitDelay_DSTATE;

    /* Sum: '<S29>/Sum2' */
    BaseEngineController_A02_bak2_B.s29_Sum2 =
      BaseEngineController_A02_bak2_B.s22_MultiportSwitch -
      BaseEngineController_A02_bak2_B.s403_Switch2;

    /* Product: '<S29>/Product5' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S20>/motohawk_calibration6'
     */
    rtb_Product5_g = BaseEngineController_A02_bak2_B.s29_Sum2 *
      (ETCErrorGain_DataStore());

    /* Product: '<S29>/Product4' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S20>/motohawk_calibration1'
     */
    rtb_Product1_i = (ETCDGain_DataStore()) * rtb_Product5_g;

    /* S-Function Block: <S38>/motohawk_delta_time */
    rtb_motohawk_delta_time_ly = 0.005;

    /* Product: '<S38>/Product' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S38>/motohawk_delta_time'
     *  Sum: '<S38>/Sum2'
     */
    BaseEngineController_A02_bak2_B.s38_Product = (rtb_Product1_i -
      rtb_Product1_f) / rtb_motohawk_delta_time_ly;

    /* Sum: '<S20>/Add' */
    rtb_Add_e = BaseEngineController_A02_bak2_B.s22_MultiportSwitch -
      BaseEngineController_A02_bak2_B.s403_Switch2;

    /* S-Function Block: <S20>/motohawk_prelookup */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (ETC_ErrorIn_DataStore()) = rtb_Add_e;
      (ETC_ErrorIdx_DataStore()) = TablePrelookup_real_T(rtb_Add_e,
        (ETC_ErrorIdxArr_DataStore()), 10, (ETC_ErrorIdx_DataStore()));
      rtb_motohawk_prelookup_ch = (ETC_ErrorIdx_DataStore());
    }

    /* S-Function Block: <S28>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_n0 = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_ch, (real_T *) ((ETC_PGainMultTbl_DataStore())),
         10);
      (ETC_PGainMult_DataStore()) = rtb_motohawk_interpolation_1d_n0;
    }

    /* Product: '<S29>/Product2' incorporates:
     *  Product: '<S28>/Product'
     *  S-Function (motohawk_sfun_calibration): '<S28>/motohawk_calibration'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S28>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_prelookup): '<S20>/motohawk_prelookup'
     *  Sum: '<S20>/Add'
     */
    BaseEngineController_A02_bak2_B.s29_Product2 =
      rtb_motohawk_interpolation_1d_n0 * (ETCPGain_DataStore()) * rtb_Product5_g;

    /* Switch: '<S39>/Switch1' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S12>/motohawk_data_read'
     *  UnitDelay: '<S39>/Unit Delay'
     */
    if (ETCStallStateShutdown_DataStore()) {
      BaseEngineController_A02_bak2_B.s39_Switch1 = 0.0;
    } else {
      BaseEngineController_A02_bak2_B.s39_Switch1 =
        BaseEngineController_A02_bak2_DWork.s39_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S39>/Switch1' */

    /* Sum: '<S20>/Sum' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S20>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_prelookup): '<S20>/motohawk_prelookup2'
     *  Sum: '<S29>/Sum'
     */
    rtb_Product1_f = (((BaseEngineController_A02_bak2_B.s38_Product -
                        BaseEngineController_A02_bak2_B.s37_Product) +
                       BaseEngineController_A02_bak2_B.s29_Product2) +
                      BaseEngineController_A02_bak2_B.s39_Switch1) +
      rtb_motohawk_interpolation_1d_nh;

    /* MinMax: '<S42>/MinMax' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S30>/motohawk_calibration'
     */
    rtb_Sum_pd = (rtb_Product1_f >= (ETCLwrLim_DataStore())) || rtIsNaN
      ((ETCLwrLim_DataStore())) ? rtb_Product1_f : (ETCLwrLim_DataStore());

    /* MinMax: '<S42>/MinMax1' incorporates:
     *  MinMax: '<S42>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S30>/motohawk_calibration1'
     */
    BaseEngineController_A02_bak2_B.s42_MinMax1 = (rtb_Sum_pd <=
      (ETCUprLim_DataStore())) || rtIsNaN((ETCUprLim_DataStore())) ? rtb_Sum_pd :
      (ETCUprLim_DataStore());

    /* S-Function Block: <S27>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_fz = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_ch, (real_T *) ((ETC_IGainMultTbl_DataStore())),
         10);
      (ETC_IGainMult_DataStore()) = rtb_motohawk_interpolation_1d_fz;
    }

    /* Product: '<S27>/Product' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S27>/motohawk_calibration2'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S27>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_prelookup): '<S20>/motohawk_prelookup'
     *  Sum: '<S20>/Add'
     */
    rtb_Product1_f = rtb_motohawk_interpolation_1d_fz * (ETCIGain_DataStore());

    /* Product: '<S29>/Product1' */
    rtb_Product1_f *= rtb_Product5_g;

    /* S-Function Block: <S39>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_bak2_DWork.s39_motohawk_delta_time_DWORK1,
         NULL);
      rtb_motohawk_delta_time_f4 = ((real_T) delta) * 0.000001;
    }

    /* Sum: '<S39>/Sum' incorporates:
     *  Product: '<S39>/Product'
     *  S-Function (motohawk_sfun_delta_time): '<S39>/motohawk_delta_time'
     */
    rtb_Product1_f = rtb_Product1_f * rtb_motohawk_delta_time_f4 +
      BaseEngineController_A02_bak2_B.s39_Switch1;

    /* MinMax: '<S41>/MinMax' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S20>/motohawk_calibration3'
     */
    rtb_Sum_pd = (rtb_Product1_f >= (ETCIMin_DataStore())) || rtIsNaN
      ((ETCIMin_DataStore())) ? rtb_Product1_f : (ETCIMin_DataStore());

    /* MinMax: '<S41>/MinMax1' incorporates:
     *  MinMax: '<S41>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S20>/motohawk_calibration4'
     */
    minV_3 = (rtb_Sum_pd <= (ETCIMax_DataStore())) || rtIsNaN((ETCIMax_DataStore
      ())) ? rtb_Sum_pd : (ETCIMax_DataStore());

    /* Saturate: '<S47>/Saturation' */
    rtb_Saturation_gb = rtb_Switch_fm >= 16000.0 ? 16000.0 : rtb_Switch_fm <=
      0.0 ? 0.0 : rtb_Switch_fm;

    /* S-Function (motohawk_sfun_data_write): '<S47>/motohawk_data_write' */
    /* Write to Data Storage as scalar: ETC_Tune_Timer */
    {
      ETC_Tune_Timer_DataStore() = rtb_Saturation_gb;
    }

    /* Saturate: '<S54>/Saturation' */
    rtb_Saturation_b4 = BaseEngineController_A02_bak2_B.s54_Switch >= 16000.0 ?
      16000.0 : BaseEngineController_A02_bak2_B.s54_Switch <= 0.0 ? 0.0 :
      BaseEngineController_A02_bak2_B.s54_Switch;

    /* S-Function (motohawk_sfun_data_write): '<S54>/motohawk_data_write' */
    /* Write to Data Storage as scalar: ETCShutDownTimer */
    {
      ETCShutDownTimer_DataStore() = rtb_Saturation_b4;
    }

    /* S-Function (motohawk_sfun_data_read): '<S23>/motohawk_data_read1' */
    rtb_motohawk_data_read1_jj = MPRD_DataStore();

    /* Outputs for Triggered SubSystem: '<S23>/Reset TasksComplete To False' incorporates:
     *  TriggerPort: '<S52>/Trigger'
     */
    if (rtb_motohawk_data_read1_jj &&
        (BaseEngineController_A02_bak2_PrevZCSigState.ResetTasksCompleteToFalse_Trig_ZCE
         != POS_ZCSIG)) {
      /* S-Function (motohawk_sfun_data_write): '<S52>/motohawk_data_write' incorporates:
       *  Constant: '<S52>/Constant2'
       */
      /* Write to Data Storage as scalar: ShutDownTasksComplete */
      {
        ShutDownTasksComplete_DataStore() = FALSE;
      }
    }

    BaseEngineController_A02_bak2_PrevZCSigState.ResetTasksCompleteToFalse_Trig_ZCE
      = (uint8_T)(rtb_motohawk_data_read1_jj ? (int32_T)POS_ZCSIG : (int32_T)
                  ZERO_ZCSIG);

    /* End of Outputs for SubSystem: '<S23>/Reset TasksComplete To False' */

    /* Switch: '<S12>/Switch' incorporates:
     *  Constant: '<S12>/Constant2'
     */
    if (rtb_RelationalOperator2_m) {
      BaseEngineController_A02_bak2_B.s12_Switch = 0.0;
    } else {
      BaseEngineController_A02_bak2_B.s12_Switch =
        BaseEngineController_A02_bak2_B.s42_MinMax1;
    }

    /* End of Switch: '<S12>/Switch' */

    /* Update for UnitDelay: '<S12>/Unit Delay' */
    BaseEngineController_A02_bak2_DWork.s12_UnitDelay_DSTATE = rtb_Sum1_j;

    /* Update for UnitDelay: '<S46>/Unit Delay' */
    BaseEngineController_A02_bak2_DWork.s46_UnitDelay_DSTATE = rtb_Merge_hd;

    /* Update for UnitDelay: '<S37>/Unit Delay' */
    BaseEngineController_A02_bak2_DWork.s37_UnitDelay_DSTATE = rtb_UnitDelay4_o;

    /* Update for UnitDelay: '<S33>/Unit Delay' */
    BaseEngineController_A02_bak2_DWork.s33_UnitDelay_DSTATE = rtb_Merge_ek;

    /* Update for UnitDelay: '<S35>/Unit Delay' */
    BaseEngineController_A02_bak2_DWork.s35_UnitDelay_DSTATE = rtb_Merge_ek;

    /* Update for UnitDelay: '<S36>/Unit Delay' */
    BaseEngineController_A02_bak2_DWork.s36_UnitDelay_DSTATE = rtb_RelOp_js;

    /* Update for UnitDelay: '<S38>/Unit Delay' */
    BaseEngineController_A02_bak2_DWork.s38_UnitDelay_DSTATE = rtb_Product1_i;

    /* Update for UnitDelay: '<S39>/Unit Delay' incorporates:
     *  MinMax: '<S41>/MinMax1'
     */
    BaseEngineController_A02_bak2_DWork.s39_UnitDelay_DSTATE = minV_3;
  } else {
    if (BaseEngineController_A02_bak2_DWork.s6_ElectronicThrottleController_MODE)
    {
      /* Disable for Enabled SubSystem: '<S22>/PassThrough' */
      /* Disable for Outport: '<S43>/Out1' */
      BaseEngineController_A02_bak2_B.s43_In1 = 10.0;
      BaseEngineController_A02_bak2_DWork.s22_PassThrough_MODE = FALSE;

      /* End of Disable for SubSystem: '<S22>/PassThrough' */
      BaseEngineController_A02_bak2_DWork.s6_ElectronicThrottleController_MODE =
        FALSE;
    }
  }

  /* End of RelationalOperator: '<S11>/RelOp' */
  /* End of Outputs for SubSystem: '<S6>/Electronic Throttle Controller' */
  /* If: '<S757>/If' incorporates:
   *  Inport: '<S758>/In1'
   *  Inport: '<S759>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S757>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S757>/override_enable'
   */
  if ((ETC_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S757>/NewValue' incorporates:
     *  ActionPort: '<S758>/Action Port'
     */
    rtb_Product1_f = (ETC_new_DataStore());

    /* End of Outputs for SubSystem: '<S757>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S757>/OldValue' incorporates:
     *  ActionPort: '<S759>/Action Port'
     */
    rtb_Product1_f = BaseEngineController_A02_bak2_B.s12_Switch;

    /* End of Outputs for SubSystem: '<S757>/OldValue' */
  }

  /* End of If: '<S757>/If' */

  /* Switch: '<S708>/Switch' incorporates:
   *  Constant: '<S708>/Constant2'
   *  Product: '<S708>/Product'
   *  S-Function (motohawk_sfun_calibration): '<S708>/motohawk_calibration2'
   *  S-Function (motohawk_sfun_interpolation_1d): '<S708>/motohawk_interpolation_1d'
   *  Sum: '<S708>/Sum'
   */
  if (rtb_RelOp_em) {
    rtb_DataTypeConversion_k = 0.0;
  } else {
    /* S-Function Block: <S708>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_d = TableInterpolation1D_real_T
        (BaseEngineController_A02_bak2_B.s391_motohawk_prelookup, (real_T *)
         ((ETC_VoltageCompTbl_DataStore())), 9);
      (ETC_VoltageComp_DataStore()) = rtb_motohawk_interpolation_1d_d;
    }

    rtb_DataTypeConversion_k = rtb_Product1_f * rtb_motohawk_interpolation_1d_d
      + (ETC_Offset_DataStore());
  }

  /* End of Switch: '<S708>/Switch' */

  /* Saturate: '<S708>/Saturation' */
  BaseEngineController_A02_bak2_B.s708_ETC = rtb_DataTypeConversion_k >= 100.0 ?
    100.0 : rtb_DataTypeConversion_k <= -100.0 ? -100.0 :
    rtb_DataTypeConversion_k;

  /* Abs: '<S708>/Abs' */
  rtb_DataTypeConversion_k = fabs(BaseEngineController_A02_bak2_B.s708_ETC);

  /* RelationalOperator: '<S708>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S708>/motohawk_calibration3'
   */
  rtb_RelationalOperator2_m = (rtb_DataTypeConversion_k > (ETC_OC_MIN_DataStore()));

  /* S-Function (motohawk_sfun_pwm): '<S708>/motohawk_pwm1' */
  ETCPin_PWMOutput_PWMOutput_Outputs(NULL,
    &BaseEngineController_A02_bak2_B.s708_motohawk_pwm1);

  /* Abs: '<S708>/Abs1' */
  rtb_DataTypeConversion2_h = (int16_T)
    (BaseEngineController_A02_bak2_B.s708_motohawk_pwm1 < 0 ? (int16_T)
     -BaseEngineController_A02_bak2_B.s708_motohawk_pwm1 :
     BaseEngineController_A02_bak2_B.s708_motohawk_pwm1);

  /* Switch: '<S756>/Switch' incorporates:
   *  Constant: '<S756>/Constant'
   *  Logic: '<S708>/Logical Operator'
   *  Logic: '<S708>/Logical Operator4'
   *  RelationalOperator: '<S708>/Relational Operator4'
   *  S-Function (motohawk_sfun_calibration): '<S708>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S756>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S756>/motohawk_delta_time'
   *  Sum: '<S756>/Sum'
   */
  if ((!rtb_RelOp_em) && rtb_RelationalOperator2_m && ((real_T)
       rtb_DataTypeConversion2_h < (ETC_I_MIN_DataStore()))) {
    rtb_DataTypeConversion_k = rtb_motohawk_delta_time_ha +
      ETCOpenFaultTimer_DataStore();
  } else {
    rtb_DataTypeConversion_k = 0.0;
  }

  /* End of Switch: '<S756>/Switch' */

  /* RelationalOperator: '<S708>/Relational Operator5' incorporates:
   *  Constant: '<S708>/Constant'
   */
  rtb_RelationalOperator5 = ((rtb_DataTypeConversion_k > 5.0));

  /* S-Function (motohawk_sfun_fault_def): '<S708>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: ETC_Open_Fault */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(35, rtb_RelationalOperator5);
    UpdateFault(35);
  }

  /* Gain: '<S708>/Convert to integer 14-bit PWM resolution' */
  rtb_Abs_c = 40.95 * BaseEngineController_A02_bak2_B.s708_ETC;

  /* DataTypeConversion: '<S708>/Data Type Conversion3' incorporates:
   *  Gain: '<S708>/Convert to integer 0.01Hz resolution'
   *  S-Function (motohawk_sfun_calibration): '<S708>/motohawk_calibration4'
   */
  u = 100.0 * (ETC_Frequency_DataStore());
  if (u < 4.294967296E+9) {
    if (u >= 0.0) {
      rtb_DataTypeConversion3_d = (uint32_T)u;
    } else {
      rtb_DataTypeConversion3_d = 0U;
    }
  } else {
    rtb_DataTypeConversion3_d = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S708>/Data Type Conversion3' */

  /* DataTypeConversion: '<S708>/Data Type Conversion4' */
  if (rtb_Abs_c < 32768.0) {
    if (rtb_Abs_c >= -32768.0) {
      rtb_DataTypeConversion4_i = (int16_T)rtb_Abs_c;
    } else {
      rtb_DataTypeConversion4_i = MIN_int16_T;
    }
  } else {
    rtb_DataTypeConversion4_i = MAX_int16_T;
  }

  /* End of DataTypeConversion: '<S708>/Data Type Conversion4' */

  /* Saturate: '<S756>/Saturation' */
  rtb_Saturation_n = rtb_DataTypeConversion_k >= 16000.0 ? 16000.0 :
    rtb_DataTypeConversion_k <= 0.0 ? 0.0 : rtb_DataTypeConversion_k;

  /* S-Function (motohawk_sfun_data_write): '<S756>/motohawk_data_write' */
  /* Write to Data Storage as scalar: ETCOpenFaultTimer */
  {
    ETCOpenFaultTimer_DataStore() = rtb_Saturation_n;
  }

  /* If: '<S763>/If' incorporates:
   *  Inport: '<S764>/In1'
   *  Inport: '<S765>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S763>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S763>/override_enable'
   */
  if ((IAC_P_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S763>/NewValue' incorporates:
     *  ActionPort: '<S764>/Action Port'
     */
    rtb_Product1_f = (IAC_P_new_DataStore());

    /* End of Outputs for SubSystem: '<S763>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S763>/OldValue' incorporates:
     *  ActionPort: '<S765>/Action Port'
     */
    rtb_Product1_f = BaseEngineController_A02_bak2_B.s111_IACP;

    /* End of Outputs for SubSystem: '<S763>/OldValue' */
  }

  /* End of If: '<S763>/If' */

  /* Product: '<S760>/Product' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S760>/motohawk_calibration'
   */
  rtb_Product1_f *= (IAC_PGain_DataStore());

  /* Sum: '<S760>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S760>/motohawk_calibration1'
   */
  rtb_Abs_c = rtb_Product1_f + (IAC_POffset_DataStore());

  /* MinMax: '<S762>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S760>/motohawk_calibration2'
   */
  rtb_Abs_c = (rtb_Abs_c >= (IAC_PMinLimit_DataStore())) || rtIsNaN
    ((IAC_PMinLimit_DataStore())) ? rtb_Abs_c : (IAC_PMinLimit_DataStore());

  /* MinMax: '<S762>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S760>/motohawk_calibration3'
   */
  BaseEngineController_A02_bak2_B.s762_MinMax1 = (rtb_Abs_c <=
    (IAC_PMaxLimit_DataStore())) || rtIsNaN((IAC_PMaxLimit_DataStore())) ?
    rtb_Abs_c : (IAC_PMaxLimit_DataStore());

  /* Gain: '<S760>/Convert to integer 14-bit PWM resolution' */
  rtb_Abs_c = 40.95 * BaseEngineController_A02_bak2_B.s762_MinMax1;

  /* DataTypeConversion: '<S760>/Data Type Conversion3' */
  if (rtb_Abs_c < 32768.0) {
    if (rtb_Abs_c >= -32768.0) {
      rtb_DataTypeConversion3_h = (int16_T)rtb_Abs_c;
    } else {
      rtb_DataTypeConversion3_h = MIN_int16_T;
    }
  } else {
    rtb_DataTypeConversion3_h = MAX_int16_T;
  }

  /* End of DataTypeConversion: '<S760>/Data Type Conversion3' */
  /* Gain: '<S760>/Convert to integer 0.01Hz resolution' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S760>/motohawk_calibration4'
   */
  rtb_Abs_c = 100.0 * (IAC_PFrequency_DataStore());

  /* DataTypeConversion: '<S760>/Data Type Conversion2' */
  if (rtb_Abs_c < 4.294967296E+9) {
    if (rtb_Abs_c >= 0.0) {
      rtb_DataTypeConversion2_i = (uint32_T)rtb_Abs_c;
    } else {
      rtb_DataTypeConversion2_i = 0U;
    }
  } else {
    rtb_DataTypeConversion2_i = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S760>/Data Type Conversion2' */

  /* If: '<S767>/If' incorporates:
   *  Inport: '<S768>/In1'
   *  Inport: '<S769>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S767>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S767>/override_enable'
   */
  if ((IAC_S_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S767>/NewValue' incorporates:
     *  ActionPort: '<S768>/Action Port'
     */
    rtb_Product1_f = (IAC_S_new_DataStore());

    /* End of Outputs for SubSystem: '<S767>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S767>/OldValue' incorporates:
     *  ActionPort: '<S769>/Action Port'
     */
    rtb_Product1_f = BaseEngineController_A02_bak2_B.s111_IACS;

    /* End of Outputs for SubSystem: '<S767>/OldValue' */
  }

  /* End of If: '<S767>/If' */

  /* Product: '<S761>/Product' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S761>/motohawk_calibration'
   */
  rtb_Product1_f *= (IAC_SGain_DataStore());

  /* Sum: '<S761>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S761>/motohawk_calibration1'
   */
  rtb_Abs_c = rtb_Product1_f + (IAC_SOffset_DataStore());

  /* MinMax: '<S766>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S761>/motohawk_calibration2'
   */
  rtb_Abs_c = (rtb_Abs_c >= (IAC_SMinLimit_DataStore())) || rtIsNaN
    ((IAC_SMinLimit_DataStore())) ? rtb_Abs_c : (IAC_SMinLimit_DataStore());

  /* MinMax: '<S766>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S761>/motohawk_calibration3'
   */
  BaseEngineController_A02_bak2_B.s766_MinMax1 = (rtb_Abs_c <=
    (IAC_SMaxLimit_DataStore())) || rtIsNaN((IAC_SMaxLimit_DataStore())) ?
    rtb_Abs_c : (IAC_SMaxLimit_DataStore());

  /* Gain: '<S761>/Convert to integer 14-bit PWM resolution' */
  rtb_Abs_c = 40.95 * BaseEngineController_A02_bak2_B.s766_MinMax1;

  /* DataTypeConversion: '<S761>/Data Type Conversion3' */
  if (rtb_Abs_c < 32768.0) {
    if (rtb_Abs_c >= -32768.0) {
      rtb_DataTypeConversion3_p = (int16_T)rtb_Abs_c;
    } else {
      rtb_DataTypeConversion3_p = MIN_int16_T;
    }
  } else {
    rtb_DataTypeConversion3_p = MAX_int16_T;
  }

  /* End of DataTypeConversion: '<S761>/Data Type Conversion3' */
  /* Gain: '<S761>/Convert to integer 0.01Hz resolution' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S761>/motohawk_calibration4'
   */
  rtb_Abs_c = 100.0 * (IAC_SFrequency_DataStore());

  /* DataTypeConversion: '<S761>/Data Type Conversion2' */
  if (rtb_Abs_c < 4.294967296E+9) {
    if (rtb_Abs_c >= 0.0) {
      rtb_DataTypeConversion2_e = (uint32_T)rtb_Abs_c;
    } else {
      rtb_DataTypeConversion2_e = 0U;
    }
  } else {
    rtb_DataTypeConversion2_e = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S761>/Data Type Conversion2' */
  /* If: '<S774>/If' incorporates:
   *  Inport: '<S785>/In1'
   *  Inport: '<S786>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S774>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S774>/override_enable'
   */
  if ((SOI_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S774>/NewValue' incorporates:
     *  ActionPort: '<S785>/Action Port'
     */
    rtb_Product1_f = (SOI_new_DataStore());

    /* End of Outputs for SubSystem: '<S774>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S774>/OldValue' incorporates:
     *  ActionPort: '<S786>/Action Port'
     */
    rtb_Product1_f = BaseEngineController_A02_bak2_B.s111_SOI;

    /* End of Outputs for SubSystem: '<S774>/OldValue' */
  }

  /* End of If: '<S774>/If' */

  /* Gain: '<S710>/Gain2' */
  rtb_Abs_c = 16.0 * rtb_Product1_f;

  /* DataTypeConversion: '<S710>/Data Type Conversion2' */
  if (rtb_Abs_c < 32768.0) {
    if (rtb_Abs_c >= -32768.0) {
      rtb_DataTypeConversion2_h = (int16_T)rtb_Abs_c;
    } else {
      rtb_DataTypeConversion2_h = MIN_int16_T;
    }
  } else {
    rtb_DataTypeConversion2_h = MAX_int16_T;
  }

  /* End of DataTypeConversion: '<S710>/Data Type Conversion2' */
  /* If: '<S65>/If' incorporates:
   *  Inport: '<S82>/In1'
   *  Inport: '<S83>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S65>/override_enable'
   *  UnitDelay: '<S65>/Unit Delay'
   */
  if ((Fuel_Cyl8_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S65>/NewValue' incorporates:
     *  ActionPort: '<S82>/Action Port'
     */
    rtb_DesiredLambda_idx_1 =
      BaseEngineController_A02_bak2_DWork.s65_UnitDelay_DSTATE;

    /* End of Outputs for SubSystem: '<S65>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S65>/OldValue' incorporates:
     *  ActionPort: '<S83>/Action Port'
     */
    rtb_DesiredLambda_idx_1 = BaseEngineController_A02_bak2_B.s111_FPC[7];

    /* End of Outputs for SubSystem: '<S65>/OldValue' */
  }

  /* End of If: '<S65>/If' */

  /* Sum: '<S65>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S65>/offset'
   */
  rtb_Product1_f = rtb_DesiredLambda_idx_1 + (Fuel_Cyl8_offset_DataStore());

  /* If: '<S64>/If' incorporates:
   *  Inport: '<S80>/In1'
   *  Inport: '<S81>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S64>/override_enable'
   *  UnitDelay: '<S64>/Unit Delay'
   */
  if ((Fuel_Cyl7_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S64>/NewValue' incorporates:
     *  ActionPort: '<S80>/Action Port'
     */
    rtb_DesiredLambda_idx_2 =
      BaseEngineController_A02_bak2_DWork.s64_UnitDelay_DSTATE;

    /* End of Outputs for SubSystem: '<S64>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S64>/OldValue' incorporates:
     *  ActionPort: '<S81>/Action Port'
     */
    rtb_DesiredLambda_idx_2 = BaseEngineController_A02_bak2_B.s111_FPC[6];

    /* End of Outputs for SubSystem: '<S64>/OldValue' */
  }

  /* End of If: '<S64>/If' */

  /* Sum: '<S64>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S64>/offset'
   */
  rtb_Product1_i = rtb_DesiredLambda_idx_2 + (Fuel_Cyl7_offset_DataStore());

  /* If: '<S62>/If' incorporates:
   *  Inport: '<S76>/In1'
   *  Inport: '<S77>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S62>/override_enable'
   *  UnitDelay: '<S62>/Unit Delay'
   */
  if ((Fuel_Cyl6_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S62>/NewValue' incorporates:
     *  ActionPort: '<S76>/Action Port'
     */
    rtb_Merge_l3 = BaseEngineController_A02_bak2_DWork.s62_UnitDelay_DSTATE;

    /* End of Outputs for SubSystem: '<S62>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S62>/OldValue' incorporates:
     *  ActionPort: '<S77>/Action Port'
     */
    rtb_Merge_l3 = BaseEngineController_A02_bak2_B.s111_FPC[5];

    /* End of Outputs for SubSystem: '<S62>/OldValue' */
  }

  /* End of If: '<S62>/If' */

  /* Sum: '<S62>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S62>/offset'
   */
  rtb_UnitDelay4_o = rtb_Merge_l3 + (Fuel_Cyl6_offset_DataStore());

  /* If: '<S61>/If' incorporates:
   *  Inport: '<S74>/In1'
   *  Inport: '<S75>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S61>/override_enable'
   *  UnitDelay: '<S61>/Unit Delay'
   */
  if ((Fuel_Cyl5_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S61>/NewValue' incorporates:
     *  ActionPort: '<S74>/Action Port'
     */
    rtb_Merge_lu = BaseEngineController_A02_bak2_DWork.s61_UnitDelay_DSTATE;

    /* End of Outputs for SubSystem: '<S61>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S61>/OldValue' incorporates:
     *  ActionPort: '<S75>/Action Port'
     */
    rtb_Merge_lu = BaseEngineController_A02_bak2_B.s111_FPC[4];

    /* End of Outputs for SubSystem: '<S61>/OldValue' */
  }

  /* End of If: '<S61>/If' */

  /* Sum: '<S61>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S61>/offset'
   */
  rtb_Sum1_j = rtb_Merge_lu + (Fuel_Cyl5_offset_DataStore());

  /* If: '<S60>/If' incorporates:
   *  Inport: '<S72>/In1'
   *  Inport: '<S73>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S60>/override_enable'
   *  UnitDelay: '<S60>/Unit Delay'
   */
  if ((Fuel_Cyl4_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S60>/NewValue' incorporates:
     *  ActionPort: '<S72>/Action Port'
     */
    rtb_Merge_oi = BaseEngineController_A02_bak2_DWork.s60_UnitDelay_DSTATE;

    /* End of Outputs for SubSystem: '<S60>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S60>/OldValue' incorporates:
     *  ActionPort: '<S73>/Action Port'
     */
    rtb_Merge_oi = BaseEngineController_A02_bak2_B.s111_FPC[3];

    /* End of Outputs for SubSystem: '<S60>/OldValue' */
  }

  /* End of If: '<S60>/If' */

  /* Sum: '<S60>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S60>/offset'
   */
  rtb_Merge_ek = rtb_Merge_oi + (Fuel_Cyl4_offset_DataStore());

  /* If: '<S59>/If' incorporates:
   *  Inport: '<S70>/In1'
   *  Inport: '<S71>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S59>/override_enable'
   *  UnitDelay: '<S59>/Unit Delay'
   */
  if ((Fuel_Cyl3_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S59>/NewValue' incorporates:
     *  ActionPort: '<S70>/Action Port'
     */
    rtb_Merge_oo = BaseEngineController_A02_bak2_DWork.s59_UnitDelay_DSTATE;

    /* End of Outputs for SubSystem: '<S59>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S59>/OldValue' incorporates:
     *  ActionPort: '<S71>/Action Port'
     */
    rtb_Merge_oo = BaseEngineController_A02_bak2_B.s111_FPC[2];

    /* End of Outputs for SubSystem: '<S59>/OldValue' */
  }

  /* End of If: '<S59>/If' */

  /* Sum: '<S59>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S59>/offset'
   */
  rtb_Merge_hd = rtb_Merge_oo + (Fuel_Cyl3_offset_DataStore());

  /* If: '<S58>/If' incorporates:
   *  Inport: '<S68>/In1'
   *  Inport: '<S69>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S58>/override_enable'
   *  UnitDelay: '<S58>/Unit Delay'
   */
  if ((Fuel_Cyl2_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S58>/NewValue' incorporates:
     *  ActionPort: '<S68>/Action Port'
     */
    rtb_Merge_c = BaseEngineController_A02_bak2_DWork.s58_UnitDelay_DSTATE;

    /* End of Outputs for SubSystem: '<S58>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S58>/OldValue' incorporates:
     *  ActionPort: '<S69>/Action Port'
     */
    rtb_Merge_c = BaseEngineController_A02_bak2_B.s111_FPC[1];

    /* End of Outputs for SubSystem: '<S58>/OldValue' */
  }

  /* End of If: '<S58>/If' */

  /* Sum: '<S58>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S58>/offset'
   */
  rtb_Sum_pd = rtb_Merge_c + (Fuel_Cyl2_offset_DataStore());

  /* If: '<S57>/If' incorporates:
   *  Inport: '<S66>/In1'
   *  Inport: '<S67>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S57>/override_enable'
   *  UnitDelay: '<S57>/Unit Delay'
   */
  if ((Fuel_Cyl1_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S57>/NewValue' incorporates:
     *  ActionPort: '<S66>/Action Port'
     */
    rtb_Merge_hm = BaseEngineController_A02_bak2_DWork.s57_UnitDelay_DSTATE;

    /* End of Outputs for SubSystem: '<S57>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S57>/OldValue' incorporates:
     *  ActionPort: '<S67>/Action Port'
     */
    rtb_Merge_hm = BaseEngineController_A02_bak2_B.s111_FPC[0];

    /* End of Outputs for SubSystem: '<S57>/OldValue' */
  }

  /* End of If: '<S57>/If' */

  /* If: '<S63>/If' incorporates:
   *  Inport: '<S78>/In1'
   *  Inport: '<S79>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S57>/offset'
   *  S-Function (motohawk_sfun_calibration): '<S63>/override_enable'
   *  Sum: '<S57>/Sum'
   *  UnitDelay: '<S63>/Unit Delay'
   */
  if ((Fuel_Global_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S63>/NewValue' incorporates:
     *  ActionPort: '<S78>/Action Port'
     */
    memcpy((void *)&rtb_Merge_i[0], (void *)
           BaseEngineController_A02_bak2_DWork.s63_UnitDelay_DSTATE, sizeof
           (real_T) << 3U);

    /* End of Outputs for SubSystem: '<S63>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S63>/OldValue' incorporates:
     *  ActionPort: '<S79>/Action Port'
     */
    rtb_Merge_i[0] = rtb_Merge_hm + (Fuel_Cyl1_offset_DataStore());
    rtb_Merge_i[1] = rtb_Sum_pd;
    rtb_Merge_i[2] = rtb_Merge_hd;
    rtb_Merge_i[3] = rtb_Merge_ek;
    rtb_Merge_i[4] = rtb_Sum1_j;
    rtb_Merge_i[5] = rtb_UnitDelay4_o;
    rtb_Merge_i[6] = rtb_Product1_i;
    rtb_Merge_i[7] = rtb_Product1_f;

    /* End of Outputs for SubSystem: '<S63>/OldValue' */
  }

  /* End of If: '<S63>/If' */

  /* Sum: '<S63>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S63>/offset'
   */
  for (i = 0; i < 8; i++) {
    BaseEngineController_A02_bak2_B.s63_Sum[i] = rtb_Merge_i[i] +
      (Fuel_Global_offset_DataStore());
  }

  /* End of Sum: '<S63>/Sum' */
  /* Product: '<S13>/Product2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S13>/Injector Gain [ms//mg]'
   */
  for (i = 0; i < 8; i++) {
    rtb_Product2_d[i] = BaseEngineController_A02_bak2_B.s63_Sum[i] *
      (InjGain_DataStore());
  }

  /* End of Product: '<S13>/Product2' */
  /* Sum: '<S13>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S13>/Injector Offset [ms]'
   */
  for (i = 0; i < 8; i++) {
    rtb_Product2_d[i] += (InjOffset_DataStore());
  }

  /* End of Sum: '<S13>/Sum' */
  /* Fcn: '<S55>/const ref to atm' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S13>/Regulated Gauge Fuel Pressure [kPa]'
   */
  BaseEngineController_A02_bak2_B.s55_constreftoatm = ((GaugeFuelPress_DataStore
    ()) + BaseEngineController_A02_bak2_B.s355_Sum) -
    BaseEngineController_A02_bak2_B.s581_Merge;

  /* S-Function Block: <S55>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (InjDeltaPress09In_DataStore()) =
      BaseEngineController_A02_bak2_B.s55_constreftoatm;
    (InjDeltaPress09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_bak2_B.s55_constreftoatm,
       (InjDeltaPress09IdxArr_DataStore()), 9, (InjDeltaPress09Idx_DataStore()));
    rtb_motohawk_prelookup1_n = (InjDeltaPress09Idx_DataStore());
  }

  /* S-Function Block: <S13>/motohawk_interpolation_1d3 */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_motohawk_interpolation_1d3_g = TableInterpolation1D_real_T
      (rtb_motohawk_prelookup1_n, (real_T *) ((InjdPCompTbl_DataStore())), 9);
    (InjdPComp_DataStore()) = rtb_motohawk_interpolation_1d3_g;
  }

  /* Product: '<S13>/Product3' incorporates:
   *  S-Function (motohawk_sfun_interpolation_1d): '<S13>/motohawk_interpolation_1d3'
   *  S-Function (motohawk_sfun_prelookup): '<S55>/motohawk_prelookup1'
   */
  for (i = 0; i < 8; i++) {
    rtb_Product2_d[i] = BaseEngineController_A02_bak2_B.s111_FuelMult *
      rtb_Product2_d[i] * rtb_motohawk_interpolation_1d3_g;
  }

  /* End of Product: '<S13>/Product3' */

  /* Saturate: '<S13>/Saturation' */
  u = BaseEngineController_A02_bak2_B.s538_Sum1 >= 0.01 ?
    BaseEngineController_A02_bak2_B.s538_Sum1 : 0.01;

  /* S-Function Block: <S13>/motohawk_interpolation_1d4 */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_motohawk_interpolation_1d4_o = TableInterpolation1D_real_T
      (rtb_motohawk_prelookup1_n, (real_T *) ((InjTurnOffTbl_DataStore())), 9);
    (InjTurnOff_DataStore()) = rtb_motohawk_interpolation_1d4_o;
  }

  /* S-Function Block: <S13>/motohawk_interpolation_1d1 */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_motohawk_interpolation_1d1_k = TableInterpolation1D_real_T
      (BaseEngineController_A02_bak2_B.s391_motohawk_prelookup, (real_T *)
       ((InjTurnOnTbl_DataStore())), 9);
    (InjTurnOn_DataStore()) = rtb_motohawk_interpolation_1d1_k;
  }

  /* Sum: '<S13>/Sum2' incorporates:
   *  S-Function (motohawk_sfun_interpolation_1d): '<S13>/motohawk_interpolation_1d1'
   *  S-Function (motohawk_sfun_interpolation_1d): '<S13>/motohawk_interpolation_1d4'
   *  S-Function (motohawk_sfun_prelookup): '<S55>/motohawk_prelookup1'
   */
  BaseEngineController_A02_bak2_B.s13_Sum2 = rtb_motohawk_interpolation_1d1_k -
    rtb_motohawk_interpolation_1d4_o;

  /* Sum: '<S13>/Sum1' incorporates:
   *  Constant: '<S13>/Constant'
   *  Product: '<S13>/Divide'
   *  Saturate: '<S13>/Saturation'
   */
  BaseEngineController_A02_bak2_B.s13_Sum1 = 120000.0 / u -
    BaseEngineController_A02_bak2_B.s13_Sum2;

  /* MinMax: '<S13>/MinMax' */
  for (i = 0; i < 8; i++) {
    BaseEngineController_A02_bak2_B.s13_MinMax[i] = (rtb_Product2_d[i] <=
      BaseEngineController_A02_bak2_B.s13_Sum1) || rtIsNaN
      (BaseEngineController_A02_bak2_B.s13_Sum1) ? rtb_Product2_d[i] :
      BaseEngineController_A02_bak2_B.s13_Sum1;
  }

  /* End of MinMax: '<S13>/MinMax' */
  /* If: '<S775>/If' incorporates:
   *  Inport: '<S787>/In1'
   *  Inport: '<S788>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S775>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S775>/override_enable'
   */
  if ((Mech_PW_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S775>/NewValue' incorporates:
     *  ActionPort: '<S787>/Action Port'
     */
    for (i = 0; i < 8; i++) {
      rtb_Product2_d[i] = (Mech_PW_new_DataStore())[i];
    }

    /* End of Outputs for SubSystem: '<S775>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S775>/OldValue' incorporates:
     *  ActionPort: '<S788>/Action Port'
     */
    memcpy((void *)&rtb_Product2_d[0], (void *)
           (&BaseEngineController_A02_bak2_B.s13_MinMax[0]), sizeof(real_T) <<
           3U);

    /* End of Outputs for SubSystem: '<S775>/OldValue' */
  }

  /* End of If: '<S775>/If' */

  /* DataTypeConversion: '<S710>/Data Type Conversion3' incorporates:
   *  Gain: '<S710>/Gain3'
   */
  for (i = 0; i < 8; i++) {
    u = 1000.0 * rtb_Product2_d[i];
    if (u < 4.294967296E+9) {
      if (u >= 0.0) {
        rtb_Switch_mv = (uint32_T)u;
      } else {
        rtb_Switch_mv = 0U;
      }
    } else {
      rtb_Switch_mv = MAX_uint32_T;
    }

    rtb_InjectorSequence_o2[i] = rtb_Switch_mv;
  }

  /* End of DataTypeConversion: '<S710>/Data Type Conversion3' */
  /* Gain: '<S710>/Gain5' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S710>/motohawk_calibration9'
   */
  rtb_Abs_c = 1000.0 * (InjectorMaxDuration_DataStore());

  /* DataTypeConversion: '<S710>/Data Type Conversion6' */
  if (rtb_Abs_c < 4.294967296E+9) {
    if (rtb_Abs_c >= 0.0) {
      rtb_DataTypeConversion6 = (uint32_T)rtb_Abs_c;
    } else {
      rtb_DataTypeConversion6 = 0U;
    }
  } else {
    rtb_DataTypeConversion6 = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S710>/Data Type Conversion6' */
  /* If: '<S772>/If' incorporates:
   *  Inport: '<S781>/In1'
   *  Inport: '<S782>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S772>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S772>/override_enable'
   */
  if ((Elec_PW_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S772>/NewValue' incorporates:
     *  ActionPort: '<S781>/Action Port'
     */
    rtb_Product1_f = (Elec_PW_new_DataStore());

    /* End of Outputs for SubSystem: '<S772>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S772>/OldValue' incorporates:
     *  ActionPort: '<S782>/Action Port'
     */
    rtb_Product1_f = BaseEngineController_A02_bak2_B.s13_Sum2;

    /* End of Outputs for SubSystem: '<S772>/OldValue' */
  }

  /* End of If: '<S772>/If' */

  /* Gain: '<S710>/Gain1' */
  rtb_Abs_c = 1000.0 * rtb_Product1_f;

  /* DataTypeConversion: '<S710>/Data Type Conversion1' */
  if (rtb_Abs_c < 4.294967296E+9) {
    if (rtb_Abs_c >= 0.0) {
      rtb_Sum_fc = (uint32_T)rtb_Abs_c;
    } else {
      rtb_Sum_fc = 0U;
    }
  } else {
    rtb_Sum_fc = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S710>/Data Type Conversion1' */
  /* If: '<S773>/If' incorporates:
   *  Inport: '<S783>/In1'
   *  Inport: '<S784>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S773>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S773>/override_enable'
   */
  if ((MakeUp_EOI_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S773>/NewValue' incorporates:
     *  ActionPort: '<S783>/Action Port'
     */
    rtb_Product1_f = (MakeUp_EOI_new_DataStore());

    /* End of Outputs for SubSystem: '<S773>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S773>/OldValue' incorporates:
     *  ActionPort: '<S784>/Action Port'
     */
    rtb_Product1_f = BaseEngineController_A02_bak2_B.s111_MakeUpEOI;

    /* End of Outputs for SubSystem: '<S773>/OldValue' */
  }

  /* End of If: '<S773>/If' */

  /* Gain: '<S710>/Gain6' */
  rtb_Abs_c = 16.0 * rtb_Product1_f;

  /* DataTypeConversion: '<S710>/Data Type Conversion7' */
  if (rtb_Abs_c < 32768.0) {
    if (rtb_Abs_c >= -32768.0) {
      rtb_DataTypeConversion7 = (int16_T)rtb_Abs_c;
    } else {
      rtb_DataTypeConversion7 = MIN_int16_T;
    }
  } else {
    rtb_DataTypeConversion7 = MAX_int16_T;
  }

  /* End of DataTypeConversion: '<S710>/Data Type Conversion7' */
  /* Gain: '<S710>/Gain7' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S710>/motohawk_calibration6'
   */
  rtb_Abs_c = 1000.0 * (MinMakeUpPW_DataStore());

  /* DataTypeConversion: '<S710>/Data Type Conversion8' */
  if (rtb_Abs_c < 4.294967296E+9) {
    if (rtb_Abs_c >= 0.0) {
      rtb_UnitDelay_cgp = (uint32_T)rtb_Abs_c;
    } else {
      rtb_UnitDelay_cgp = 0U;
    }
  } else {
    rtb_UnitDelay_cgp = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S710>/Data Type Conversion8' */
  /* Outputs for Enabled SubSystem: '<S14>/PassThrough5' incorporates:
   *  EnablePort: '<S90>/Enable'
   */
  /* Logic: '<S14>/Logical Operator1' incorporates:
   *  Constant: '<S14>/Constant2'
   *  Constant: '<S14>/Constant3'
   *  RelationalOperator: '<S14>/Relational Operator2'
   *  RelationalOperator: '<S14>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S14>/motohawk_calibration1'
   */
  if ((((int8_T)(RevLimitType_DataStore())) == 1) || (((int8_T)
        (RevLimitType_DataStore())) == 2)) {
    if (!BaseEngineController_A02_bak2_DWork.s14_PassThrough5_MODE) {
      BaseEngineController_A02_bak2_DWork.s14_PassThrough5_MODE = TRUE;
    }

    /* DataTypeConversion: '<S90>/Data Type Conversion1' */
    for (i = 0; i < 8; i++) {
      BaseEngineController_A02_bak2_B.s90_DataTypeConversion1[i] =
        ((BaseEngineController_A02_bak2_B.s101_CutArray[i] != 0));
    }

    /* End of DataTypeConversion: '<S90>/Data Type Conversion1' */
  } else {
    if (BaseEngineController_A02_bak2_DWork.s14_PassThrough5_MODE) {
      /* Disable for Outport: '<S90>/Out1' */
      for (i = 0; i < 8; i++) {
        BaseEngineController_A02_bak2_B.s90_DataTypeConversion1[i] = FALSE;
      }

      /* End of Outport: '<S90>/Out1' */
      BaseEngineController_A02_bak2_DWork.s14_PassThrough5_MODE = FALSE;
    }
  }

  /* End of Logic: '<S14>/Logical Operator1' */
  /* End of Outputs for SubSystem: '<S14>/PassThrough5' */

  /* Logic: '<S14>/Logical Operator3' */
  for (i = 0; i < 8; i++) {
    rtb_LogicalOperator3_iu[i] =
      !BaseEngineController_A02_bak2_B.s90_DataTypeConversion1[i];
  }

  /* End of Logic: '<S14>/Logical Operator3' */

  /* Outputs for Atomic SubSystem: '<S710>/Injector Enable Manager' */

  /* S-Function Block: <S780>/motohawk_delta_time */
  rtb_motohawk_delta_time_j3 = 0.005;

  /* Switch: '<S780>/Switch' incorporates:
   *  Constant: '<S780>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S780>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S780>/motohawk_delta_time'
   *  S-Function (motohawk_sfun_fault_action): '<S771>/motohawk_fault_action'
   *  Sum: '<S780>/Sum'
   */
  if (GetFaultActionStatus(1)) {
    rtb_Product1_f = rtb_motohawk_delta_time_j3 +
      DelayedEngineShutdownTimer_DataStore();
  } else {
    rtb_Product1_f = 0.0;
  }

  /* End of Switch: '<S780>/Switch' */
  /* RelationalOperator: '<S771>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S771>/motohawk_calibration1'
   */
  rtb_LogicalOperator_ph = (rtb_Product1_f > (EngineShutdownDelayTime_DataStore()));

  /* S-Function (motohawk_sfun_data_write): '<S771>/motohawk_data_write' */
  /* Write to Data Storage as scalar: DelayedEngineShutdownAction */
  {
    DelayedEngineShutdownAction_DataStore() = rtb_LogicalOperator_ph;
  }

  /* RelationalOperator: '<S771>/Relational Operator1' incorporates:
   *  Gain: '<S771>/Gain'
   *  S-Function (motohawk_sfun_calibration): '<S771>/motohawk_calibration1'
   */
  rtb_RelationalOperator1_db = ((rtb_Product1_f > 0.5 *
    (EngineShutdownDelayTime_DataStore())));

  /* S-Function (motohawk_sfun_data_write): '<S771>/motohawk_data_write1' */
  /* Write to Data Storage as scalar: DelayedEngineShutdownWarning */
  {
    DelayedEngineShutdownWarning_DataStore() = rtb_RelationalOperator1_db;
  }

  /* RelationalOperator: '<S771>/Relational Operator2' incorporates:
   *  Constant: '<S771>/Constant'
   */
  rtb_RelationalOperator2_ab = ((rtb_Product1_f > 0.0));

  /* S-Function (motohawk_sfun_data_write): '<S771>/motohawk_data_write2' */
  /* Write to Data Storage as scalar: EngineShutdownTimerState */
  {
    EngineShutdownTimerState_DataStore() = rtb_RelationalOperator2_ab;
  }

  /* Logic: '<S771>/Logical Operator' */
  rtb_LogicalOperator_ph = !rtb_LogicalOperator_ph;

  /* Logic: '<S771>/Logical Operator2' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S771>/motohawk_data_read'
   */
  rtb_RelationalOperator2_m = !EngineShutdownAction_DataStore();

  /* S-Function (motohawk_sfun_data_read): '<S771>/motohawk_data_read1' */
  rtb_motohawk_data_read1_ei = ECUP_Enabled_DataStore();

  /* Logic: '<S771>/Logical Operator4' incorporates:
   *  Constant: '<S779>/Constant'
   *  RelationalOperator: '<S779>/RelOp'
   *  S-Function (motohawk_sfun_data_read): '<S771>/motohawk_data_read2'
   */
  rtb_RelOp_js = !(((uint8_T)EngineState_DataStore()) == 1);

  /* Logic: '<S771>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S771>/motohawk_calibration10'
   *  S-Function (motohawk_sfun_calibration): '<S771>/motohawk_calibration11'
   *  S-Function (motohawk_sfun_calibration): '<S771>/motohawk_calibration12'
   *  S-Function (motohawk_sfun_calibration): '<S771>/motohawk_calibration2'
   *  S-Function (motohawk_sfun_calibration): '<S771>/motohawk_calibration3'
   *  S-Function (motohawk_sfun_calibration): '<S771>/motohawk_calibration4'
   *  S-Function (motohawk_sfun_calibration): '<S771>/motohawk_calibration7'
   *  S-Function (motohawk_sfun_calibration): '<S771>/motohawk_calibration8'
   */
  rtb_LogicalOperator1_o3[0] = (rtb_LogicalOperator_ph &&
    rtb_RelationalOperator2_m && rtb_motohawk_data_read1_ei && rtb_RelOp_js &&
    (Injector1Enable_DataStore()));
  rtb_LogicalOperator1_o3[1] = (rtb_LogicalOperator_ph &&
    rtb_RelationalOperator2_m && rtb_motohawk_data_read1_ei && rtb_RelOp_js &&
    (Injector2Enable_DataStore()));
  rtb_LogicalOperator1_o3[2] = (rtb_LogicalOperator_ph &&
    rtb_RelationalOperator2_m && rtb_motohawk_data_read1_ei && rtb_RelOp_js &&
    (Injector3Enable_DataStore()));
  rtb_LogicalOperator1_o3[3] = (rtb_LogicalOperator_ph &&
    rtb_RelationalOperator2_m && rtb_motohawk_data_read1_ei && rtb_RelOp_js &&
    (Injector4Enable_DataStore()));
  rtb_LogicalOperator1_o3[4] = (rtb_LogicalOperator_ph &&
    rtb_RelationalOperator2_m && rtb_motohawk_data_read1_ei && rtb_RelOp_js &&
    (Injector5Enable_DataStore()));
  rtb_LogicalOperator1_o3[5] = (rtb_LogicalOperator_ph &&
    rtb_RelationalOperator2_m && rtb_motohawk_data_read1_ei && rtb_RelOp_js &&
    (Injector6Enable_DataStore()));
  rtb_LogicalOperator1_o3[6] = (rtb_LogicalOperator_ph &&
    rtb_RelationalOperator2_m && rtb_motohawk_data_read1_ei && rtb_RelOp_js &&
    (Injector7Enable_DataStore()));
  rtb_LogicalOperator1_o3[7] = (rtb_LogicalOperator_ph &&
    rtb_RelationalOperator2_m && rtb_motohawk_data_read1_ei && rtb_RelOp_js &&
    (Injector8Enable_DataStore()));

  /* Saturate: '<S780>/Saturation' */
  rtb_Saturation_m3 = rtb_Product1_f >= 16000.0 ? 16000.0 : rtb_Product1_f <=
    0.0 ? 0.0 : rtb_Product1_f;

  /* S-Function (motohawk_sfun_data_write): '<S780>/motohawk_data_write' */
  /* Write to Data Storage as scalar: DelayedEngineShutdownTimer */
  {
    DelayedEngineShutdownTimer_DataStore() = rtb_Saturation_m3;
  }

  /* End of Outputs for SubSystem: '<S710>/Injector Enable Manager' */
  /* Logic: '<S710>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S710>/motohawk_data_read'
   */
  rtb_RelationalOperator2_m = !ESTOP_DataStore();

  /* If: '<S777>/If' incorporates:
   *  Inport: '<S791>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S777>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S777>/override_enable'
   */
  if ((ESTOP_FuelInj_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S777>/NewValue' incorporates:
     *  ActionPort: '<S791>/Action Port'
     */
    rtb_RelationalOperator2_m = (ESTOP_FuelInj_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S777>/NewValue' */
  } else {
  }

  /* End of If: '<S777>/If' */

  /* If: '<S776>/If' incorporates:
   *  Inport: '<S789>/In1'
   *  Inport: '<S790>/In1'
   *  Logic: '<S710>/Logical Operator'
   *  S-Function (motohawk_sfun_calibration): '<S776>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S776>/override_enable'
   */
  if ((InjEnable_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S776>/NewValue' incorporates:
     *  ActionPort: '<S789>/Action Port'
     */
    for (i = 0; i < 8; i++) {
      BaseEngineController_A02_bak2_B.s776_Merge[i] = (InjEnable_new_DataStore())
        [i];
    }

    /* End of Outputs for SubSystem: '<S776>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S776>/OldValue' incorporates:
     *  ActionPort: '<S790>/Action Port'
     */
    for (i = 0; i < 8; i++) {
      BaseEngineController_A02_bak2_B.s776_Merge[i] =
        ((rtb_RelationalOperator2_m && rtb_LogicalOperator3_iu[i] &&
          rtb_LogicalOperator1_o3[i]));
    }

    /* End of Outputs for SubSystem: '<S776>/OldValue' */
  }

  /* End of If: '<S776>/If' */

  /* S-Function Block: <S710>/Injector Sequence */
  {
    extern TransientInjectorSeqInfo_T TransientInjectorSeqInfo_43[8];
    uint32_T makeup_duration;
    int16_T makeup_angle;
    extern S_SeqOutInjDiagReport InjectorSeqDiagInfo_43[8];
    extern int32_T InjectorSeqDiagLastPin_43;
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
            rtb_DataTypeConversion2_h;
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
      enable = ((BaseEngineController_A02_bak2_B.s776_Merge)[index] &&
                pulse_scheduling_allowed);
      if ((INJ_SequenceType_DataStore()) == 0) {
        if ((enable) !=
            ((&BaseEngineController_A02_bak2_DWork.s710_InjectorSequence_DWORK1
              [0])[index])) {
          seq_enable = (enable) ? SEQ_ENABLED : SEQ_DISNEXT;
          SetSeqOutCond((E_ModuleResource) ((INJ_InitialPin_DataStore()) + index),
                        0, seq_enable);
          if ((INJ_Behavior_DataStore()) == 1)
            SetSeqOutCond((E_ModuleResource) ((INJ_InitialPin_DataStore()) +
              index), 1, (enable && 1) ? SEQ_ENABLED : SEQ_DISNEXT);
          (&BaseEngineController_A02_bak2_DWork.s710_InjectorSequence_DWORK1[0])
            [index] = enable;
        }

        if ((BaseEngineController_A02_bak2_ConstB.s710_DataTypeConversion5) !=
            (BaseEngineController_A02_bak2_DWork.s710_InjectorSequence_DWORK2))
        {
          SetSeqOutInjPeakTime((E_ModuleResource) ((INJ_InitialPin_DataStore())
            + index), BaseEngineController_A02_bak2_ConstB.s710_DataTypeConversion5);
        }

        elec_duration = ((rtb_InjectorSequence_o2)[index]) + (rtb_Sum_fc);

        /* Primary Pulse */
        DynamicObj.u1AffectedPulse = 0;
        DynamicObj.TimingObj.s2StartAngle = rtb_DataTypeConversion2_h;
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
          DynamicObj.TimingObj.s2StartAngle = rtb_DataTypeConversion2_h + 6400;
          DynamicObj.TimingObj.u4Duration = 0;
          while (DynamicObj.TimingObj.s2StartAngle >= 720*16)
            DynamicObj.TimingObj.s2StartAngle -= 720*16;
          if (TransientInjectorSeqInfo_43[index].primaryComplete) {
            if (elec_duration > TransientInjectorSeqInfo_43[index].
                primaryDuration) {
              makeup_duration = elec_duration -
                TransientInjectorSeqInfo_43[index].primaryDuration;
              if (makeup_duration >= (rtb_UnitDelay_cgp)) {
                makeup_duration += (rtb_Sum_fc);
                if (rtb_DataTypeConversion6 > 0) {
                  if (makeup_duration > (rtb_DataTypeConversion6))
                    makeup_duration = rtb_DataTypeConversion6;
                }

                makeup_angle = (rtb_DataTypeConversion2_h + 6400) + (int16_T)
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
              ((&BaseEngineController_A02_bak2_DWork.s710_InjectorSequence_DWORK1
                [0])[index])) {
            seq_enable = (enable) ? SEQ_ENABLED : SEQ_DISNEXT;
            SetSeqOutCond((E_ModuleResource) ((INJ_InitialPin_DataStore()) +
              index), 0, seq_enable);
            SetSeqOutCond((E_ModuleResource) ((INJ_InitialPin_DataStore()) +
              index), 1, seq_enable);
            (&BaseEngineController_A02_bak2_DWork.s710_InjectorSequence_DWORK1[0])
              [index] = enable;
          }

          /* Update peak time only on primary Pulse */
          if ((BaseEngineController_A02_bak2_ConstB.s710_DataTypeConversion5) !=
              (BaseEngineController_A02_bak2_DWork.s710_InjectorSequence_DWORK2))
          {
            SetSeqOutInjPeakTime((E_ModuleResource) ((INJ_InitialPin_DataStore())
              + index), BaseEngineController_A02_bak2_ConstB.s710_DataTypeConversion5);
          }

          elec_duration = ((rtb_InjectorSequence_o2)[index]) / 2 + (rtb_Sum_fc);
          DynamicObj.u1AffectedPulse = 0;
          DynamicObj.TimingObj.s2StartAngle = rtb_DataTypeConversion2_h;
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
            ((&BaseEngineController_A02_bak2_DWork.s710_InjectorSequence_DWORK1
              [0])[index])) {
          seq_enable = (enable) ? SEQ_ENABLED : SEQ_DISNEXT;
          SetSeqOutCond((E_ModuleResource) ((INJ_InitialPin_DataStore()) + index),
                        0, seq_enable);
          SetSeqOutCond((E_ModuleResource) ((INJ_InitialPin_DataStore()) + index),
                        1, seq_enable);
          (&BaseEngineController_A02_bak2_DWork.s710_InjectorSequence_DWORK1[0])
            [index] = enable;
        }

        if ((BaseEngineController_A02_bak2_ConstB.s710_DataTypeConversion5) !=
            (BaseEngineController_A02_bak2_DWork.s710_InjectorSequence_DWORK2))
        {
          SetSeqOutInjPeakTime((E_ModuleResource) ((INJ_InitialPin_DataStore())
            + index), BaseEngineController_A02_bak2_ConstB.s710_DataTypeConversion5);
        }

        elec_duration = ((rtb_InjectorSequence_o2)[index])/2 + (rtb_Sum_fc);
        DynamicObj.u1AffectedPulse = 0;
        DynamicObj.TimingObj.s2StartAngle = rtb_DataTypeConversion2_h;
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

    BaseEngineController_A02_bak2_DWork.s710_InjectorSequence_DWORK2 =
      BaseEngineController_A02_bak2_ConstB.s710_DataTypeConversion5;

    /* Output per-cylinder diagnostics */
    {
      for (i=0; i < (EncoderNumCylinders_DataStore()); i++) {
        (BaseEngineController_A02_bak2_B.s710_InjectorSequence_o1)[i] =
          InjectorSeqDiagInfo_43[i].u1TXCnt;
      }

      for (i=0; i < (EncoderNumCylinders_DataStore()); i++) {
        (rtb_InjectorSequence_o2)[i] = InjectorSeqDiagInfo_43[i].
          u4TXTimeInMicroSecs;
      }
    }
  }

  /* RelationalOperator: '<S770>/==' incorporates:
   *  Constant: '<S770>/Zero'
   */
  for (i = 0; i < 8; i++) {
    rtb_LogicalOperator3_iu[i] =
      (BaseEngineController_A02_bak2_B.s710_InjectorSequence_o1[i] == 0);
  }

  /* End of RelationalOperator: '<S770>/==' */
  /* S-Function Block: <S770>/motohawk_encoder_average_rpm */
  {
    rtb_motohawk_encoder_average_rpm = GetEncoderResourceAverageRPM();
  }

  /* RelationalOperator: '<S770>/<1' incorporates:
   *  Constant: '<S770>/Zero1'
   *  S-Function (motohawk_sfun_encoder_average_rpm): '<S770>/motohawk_encoder_average_rpm'
   */
  rtb_RelationalOperator2_m = (rtb_motohawk_encoder_average_rpm > 100);

  /* Logic: '<S770>/AND1' */
  for (i = 0; i < 8; i++) {
    rtb_AND1[i] = (rtb_LogicalOperator3_iu[i] && rtb_RelationalOperator2_m &&
                   BaseEngineController_A02_bak2_B.s776_Merge[i]);
  }

  /* End of Logic: '<S770>/AND1' */

  /* S-Function (motohawk_sfun_fault_def): '<S770>/motohawk_fault_def' */

  /* Set Fault Suspected Status: Inj1Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(51, rtb_AND1[0]);
    UpdateFault(51);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S770>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: Inj2Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(52, rtb_AND1[1]);
    UpdateFault(52);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S770>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: Inj3Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(53, rtb_AND1[2]);
    UpdateFault(53);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S770>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: Inj4Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(54, rtb_AND1[3]);
    UpdateFault(54);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S770>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: Inj5Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(55, rtb_AND1[4]);
    UpdateFault(55);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S770>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: Inj6Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(56, rtb_AND1[5]);
    UpdateFault(56);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S770>/motohawk_fault_def6' */

  /* Set Fault Suspected Status: Inj7Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(57, rtb_AND1[6]);
    UpdateFault(57);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S770>/motohawk_fault_def7' */

  /* Set Fault Suspected Status: Inj8Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(58, rtb_AND1[7]);
    UpdateFault(58);
  }

  /* Logic: '<S711>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_fault_action): '<S711>/motohawk_fault_action'
   */
  rtb_RelOp_em = !GetFaultActionStatus(5);

  /* Product: '<S711>/Product' */
  rtb_Product1_f = BaseEngineController_A02_bak2_B.s111_WASTEGATE * (real_T)
    rtb_RelOp_em;

  /* If: '<S795>/If' incorporates:
   *  Inport: '<S796>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S795>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S795>/override_enable'
   */
  if ((WASTEGATE_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S795>/NewValue' incorporates:
     *  ActionPort: '<S796>/Action Port'
     */
    rtb_Product1_f = (WASTEGATE_new_DataStore());

    /* End of Outputs for SubSystem: '<S795>/NewValue' */
  } else {
  }

  /* End of If: '<S795>/If' */

  /* Product: '<S793>/Product' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S793>/motohawk_calibration'
   */
  rtb_Product1_f *= (WASTEGATEGain_DataStore());

  /* Sum: '<S793>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S793>/motohawk_calibration1'
   */
  rtb_Abs_c = rtb_Product1_f + (WASTEGATEOffset_DataStore());

  /* MinMax: '<S794>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S793>/motohawk_calibration2'
   */
  rtb_Abs_c = (rtb_Abs_c >= (WASTEGATEMinLimit_DataStore())) || rtIsNaN
    ((WASTEGATEMinLimit_DataStore())) ? rtb_Abs_c : (WASTEGATEMinLimit_DataStore
    ());

  /* MinMax: '<S794>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S793>/motohawk_calibration3'
   */
  BaseEngineController_A02_bak2_B.s794_MinMax1 = (rtb_Abs_c <=
    (WASTEGATEMaxLimit_DataStore())) || rtIsNaN((WASTEGATEMaxLimit_DataStore()))
    ? rtb_Abs_c : (WASTEGATEMaxLimit_DataStore());

  /* Gain: '<S793>/Convert to integer 14-bit PWM resolution' */
  rtb_Abs_c = 40.95 * BaseEngineController_A02_bak2_B.s794_MinMax1;

  /* DataTypeConversion: '<S793>/Data Type Conversion3' */
  if (rtb_Abs_c < 32768.0) {
    if (rtb_Abs_c >= -32768.0) {
      rtb_DataTypeConversion3_g = (int16_T)rtb_Abs_c;
    } else {
      rtb_DataTypeConversion3_g = MIN_int16_T;
    }
  } else {
    rtb_DataTypeConversion3_g = MAX_int16_T;
  }

  /* End of DataTypeConversion: '<S793>/Data Type Conversion3' */
  /* Gain: '<S793>/Convert to integer 0.01Hz resolution' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S793>/motohawk_calibration4'
   */
  rtb_Abs_c = 100.0 * (WASTEGATEFrequency_DataStore());

  /* DataTypeConversion: '<S793>/Data Type Conversion2' */
  if (rtb_Abs_c < 4.294967296E+9) {
    if (rtb_Abs_c >= 0.0) {
      rtb_DataTypeConversion2_l = (uint32_T)rtb_Abs_c;
    } else {
      rtb_DataTypeConversion2_l = 0U;
    }
  } else {
    rtb_DataTypeConversion2_l = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S793>/Data Type Conversion2' */

  /* Sum: '<S14>/Sum1' incorporates:
   *  DataTypeConversion: '<S14>/Data Type Conversion2'
   *  DataTypeConversion: '<S14>/Data Type Conversion3'
   *  DataTypeConversion: '<S14>/Data Type Conversion4'
   *  Fcn: '<S14>/Fcn1'
   *  Fcn: '<S14>/Fcn2'
   */
  rtb_Abs_c = ((real_T)rtb_motohawk_fault_action3 * 3.0 + (real_T)
               rtb_motohawk_fault_action2 * 2.0) + (real_T)
    rtb_motohawk_fault_action1_k;

  /* DataTypeConversion: '<S14>/Data Type Conversion5' */
  if (rtb_Abs_c < 256.0) {
    if (rtb_Abs_c >= 0.0) {
      BaseEngineController_A02_bak2_B.s14_DataTypeConversion5 = (uint8_T)
        rtb_Abs_c;
    } else {
      BaseEngineController_A02_bak2_B.s14_DataTypeConversion5 = 0U;
    }
  } else {
    BaseEngineController_A02_bak2_B.s14_DataTypeConversion5 = MAX_uint8_T;
  }

  /* End of DataTypeConversion: '<S14>/Data Type Conversion5' */

  /* UnitDelay: '<S432>/Unit Delay' */
  rtb_UnitDelay_cgp = BaseEngineController_A02_bak2_DWork.s432_UnitDelay_DSTATE;

  /* Sum: '<S432>/Sum' incorporates:
   *  Constant: '<S432>/Constant1'
   */
  rtb_Switch_mv = 1U + rtb_UnitDelay_cgp;
  if (rtb_Switch_mv < 1U) {
    rtb_Switch_mv = MAX_uint32_T;
  }

  rtb_Sum_fc = rtb_Switch_mv;

  /* End of Sum: '<S432>/Sum' */

  /* RelationalOperator: '<S432>/Relational Operator' incorporates:
   *  Constant: '<S10>/Count'
   */
  rtb_RelationalOperator_bd = (rtb_Sum_fc >= 5U);

  /* S-Function Block: <S351>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (App05In_DataStore()) = rtb_Switch2;
    (App05Idx_DataStore()) = TablePrelookup_real_T(rtb_Switch2,
      (App05IdxArr_DataStore()), 5, (App05Idx_DataStore()));
    rtb_motohawk_prelookup_ez = (App05Idx_DataStore());
  }

  /* S-Function Block: <S431>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (IndLoadNom05In_DataStore()) = rtb_Torque;
    (IndLoadNom05Idx_DataStore()) = TablePrelookup_real_T(rtb_Torque,
      (IndLoadNom05IdxArr_DataStore()), 5, (IndLoadNom05Idx_DataStore()));
    rtb_motohawk_prelookup_ez = (IndLoadNom05Idx_DataStore());
  }

  /* Switch: '<S379>/Switch1' incorporates:
   *  Constant: '<S376>/Constant'
   *  Constant: '<S380>/Constant'
   *  RelationalOperator: '<S380>/RelOp'
   *  S-Function (motohawk_sfun_data_read): '<S376>/motohawk_data_read'
   *  UnitDelay: '<S379>/Unit Delay'
   */
  if (((uint8_T)EngineState_DataStore()) == 1) {
    BaseEngineController_A02_bak2_B.s379_Switch1 = 0.0;
  } else {
    BaseEngineController_A02_bak2_B.s379_Switch1 =
      BaseEngineController_A02_bak2_DWork.s379_UnitDelay_DSTATE;
  }

  /* End of Switch: '<S379>/Switch1' */
  /* S-Function Block: <S387>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (ACPres05In_DataStore()) = BaseEngineController_A02_bak2_B.s552_Merge;
    (ACPres05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_bak2_B.s552_Merge, (ACPres05IdxArr_DataStore()),
       5, (ACPres05Idx_DataStore()));
    rtb_motohawk_prelookup_ez = (ACPres05Idx_DataStore());
  }

  /* S-Function Block: <S390>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (RPM05In_DataStore()) = BaseEngineController_A02_bak2_B.s538_Sum1;
    (RPM05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_A02_bak2_B.s538_Sum1, (RPM05IdxArr_DataStore()), 5,
       (RPM05Idx_DataStore()));
    rtb_motohawk_prelookup_ez = (RPM05Idx_DataStore());
  }

  /* S-Function Block: <S421>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_bak2_DWork.s421_motohawk_delta_time_DWORK1,
       NULL);
    rtb_motohawk_delta_time_g1 = ((real_T) delta) * 0.000001;
  }

  /* Sum: '<S421>/Sum' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S421>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S421>/motohawk_delta_time'
   */
  BaseEngineController_A02_bak2_B.s421_Sum = rtb_motohawk_delta_time_g1 +
    TimeSinceKeyOnTimer_DataStore();

  /* UnitDelay: '<S401>/Unit Delay1' */
  rtb_Product1_f = BaseEngineController_A02_bak2_DWork.s401_UnitDelay1_DSTATE;

  /* Sum: '<S401>/Sum3' incorporates:
   *  Constant: '<S401>/Constant1'
   *  Product: '<S401>/Product2'
   *  Product: '<S401>/Product3'
   *  S-Function (motohawk_sfun_calibration): '<S401>/motohawk_calibration1'
   *  Sum: '<S401>/Sum2'
   */
  BaseEngineController_A02_bak2_B.s401_Sum3 = (1.0 -
    (PostO2DelagFiltConst_DataStore())) * rtb_Product1_f +
    (PostO2DelagFiltConst_DataStore()) *
    BaseEngineController_A02_bak2_B.s625_Merge;

  /* S-Function Block: <S569>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_bak2_DWork.s569_motohawk_delta_time_DWORK1,
       NULL);
    rtb_Abs_c = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S569>/Product' incorporates:
   *  MinMax: '<S569>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S569>/motohawk_calibration'
   */
  rtb_Abs_c /= (rtb_Abs_c >= (FuelPresFilterConst_DataStore())) || rtIsNaN
    ((FuelPresFilterConst_DataStore())) ? rtb_Abs_c :
    (FuelPresFilterConst_DataStore());

  /* Logic: '<S541>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S541>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S541>/motohawk_fault_status4'
   */
  rtb_RelOp_em = (IsFaultActive(43) || IsFaultActive(44));

  /* Logic: '<S541>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S541>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S541>/motohawk_fault_status3'
   */
  rtb_RelationalOperator2_m = (IsFaultSuspected(43) || IsFaultSuspected(44));

  /* S-Function Block: <S436>/motohawk_ain2 Resource: FuelPresPin */
  {
    extern NativeError_S FuelPresPin_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    FuelPresPin_AnalogInput_Get
      (&BaseEngineController_A02_bak2_B.s436_motohawk_ain2, NULL);
  }

  /* DataTypeConversion: '<S541>/Data Type Conversion' */
  rtb_DataTypeConversion_jw = BaseEngineController_A02_bak2_B.s436_motohawk_ain2;

  /* Product: '<S541>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S541>/motohawk_calibration4'
   */
  rtb_Product1_f = (real_T)rtb_DataTypeConversion_jw * (FuelPresGain_DataStore());

  /* Sum: '<S541>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S541>/motohawk_calibration5'
   */
  BaseEngineController_A02_bak2_B.s541_Sum1 = rtb_Product1_f +
    (FuelPresOfst_DataStore());

  /* UnitDelay: '<S541>/Unit Delay1' */
  rtb_UnitDelay1_dz = BaseEngineController_A02_bak2_DWork.s541_UnitDelay1_DSTATE;

  /* If: '<S541>/If' incorporates:
   *  Logic: '<S541>/Logical Operator5'
   *  Logic: '<S541>/Logical Operator6'
   */
  if ((!rtb_RelOp_em) && rtb_RelationalOperator2_m) {
    /* Outputs for IfAction SubSystem: '<S541>/If Action Subsystem' incorporates:
     *  ActionPort: '<S570>/Action Port'
     */
    BaseEngineController_A02_bak2_IfActionSubsystem(rtb_UnitDelay1_dz,
      &rtb_Merge_bf);

    /* End of Outputs for SubSystem: '<S541>/If Action Subsystem' */
  } else if (rtb_RelOp_em) {
    /* Outputs for IfAction SubSystem: '<S541>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S571>/Action Port'
     */
    BaseEngineController_A02_bak2_IfActionSubsystem((FuelPresDfltValue_DataStore
      ()), &rtb_Merge_bf);

    /* End of Outputs for SubSystem: '<S541>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S541>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S572>/Action Port'
     */
    BaseEngineController_A02_bak2_IfActionSubsystem
      (BaseEngineController_A02_bak2_B.s541_Sum1, &rtb_Merge_bf);

    /* End of Outputs for SubSystem: '<S541>/If Action Subsystem2' */
  }

  /* End of If: '<S541>/If' */

  /* Sum: '<S574>/Sum1' incorporates:
   *  Constant: '<S574>/Constant'
   *  Product: '<S574>/Product'
   *  Product: '<S574>/Product1'
   *  Sum: '<S574>/Sum'
   *  UnitDelay: '<S574>/Unit Delay'
   */
  rtb_Sum1_em = (1.0 - rtb_Abs_c) *
    BaseEngineController_A02_bak2_DWork.s574_UnitDelay_DSTATE + rtb_Merge_bf *
    rtb_Abs_c;

  /* If: '<S573>/If' incorporates:
   *  Inport: '<S575>/In1'
   *  Inport: '<S576>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S573>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S573>/override_enable'
   */
  if ((FuelPres_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S573>/NewValue' incorporates:
     *  ActionPort: '<S575>/Action Port'
     */
    BaseEngineController_A02_bak2_B.s573_Merge = (FuelPres_new_DataStore());

    /* End of Outputs for SubSystem: '<S573>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S573>/OldValue' incorporates:
     *  ActionPort: '<S576>/Action Port'
     */
    BaseEngineController_A02_bak2_B.s573_Merge = rtb_Sum1_em;

    /* End of Outputs for SubSystem: '<S573>/OldValue' */
  }

  /* End of If: '<S573>/If' */

  /* Sum: '<S400>/Sum3' incorporates:
   *  Constant: '<S400>/kPa Gauge to kPa absolute'
   */
  BaseEngineController_A02_bak2_B.s400_Sum3 =
    (BaseEngineController_A02_bak2_B.s573_Merge + 100.0) -
    BaseEngineController_A02_bak2_B.s589_Merge;

  /* If: '<S468>/If' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S468>/override_enable'
   */
  if ((Cruise_Control_Raw_Ovr_ovr_DataStore())) {
  } else {
  }

  /* End of If: '<S468>/If' */

  /* S-Function Block: <S595>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_bak2_DWork.s595_motohawk_delta_time_DWORK1,
       NULL);
    rtb_Abs_c = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S595>/Product' incorporates:
   *  MinMax: '<S595>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S595>/motohawk_calibration'
   */
  rtb_Abs_c /= (rtb_Abs_c >= (OilPresFilterConst_DataStore())) || rtIsNaN
    ((OilPresFilterConst_DataStore())) ? rtb_Abs_c :
    (OilPresFilterConst_DataStore());

  /* Logic: '<S545>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S545>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S545>/motohawk_fault_status4'
   */
  rtb_RelOp_em = (IsFaultActive(75) || IsFaultActive(76));

  /* Logic: '<S545>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S545>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S545>/motohawk_fault_status3'
   */
  rtb_RelationalOperator2_m = (IsFaultSuspected(75) || IsFaultSuspected(76));

  /* S-Function Block: <S436>/motohawk_ain1 Resource: OilPresPin */
  {
    extern NativeError_S OilPresPin_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    OilPresPin_AnalogInput_Get
      (&BaseEngineController_A02_bak2_B.s436_motohawk_ain1, NULL);
  }

  /* DataTypeConversion: '<S545>/Data Type Conversion' */
  rtb_DataTypeConversion_k = (real_T)
    BaseEngineController_A02_bak2_B.s436_motohawk_ain1;

  /* Product: '<S545>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S545>/motohawk_calibration4'
   */
  rtb_Product1_f = rtb_DataTypeConversion_k * (OilPresGain_DataStore());

  /* Sum: '<S545>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S545>/motohawk_calibration5'
   */
  BaseEngineController_A02_bak2_B.s545_Sum1 = rtb_Product1_f +
    (OilPresOfst_DataStore());

  /* UnitDelay: '<S545>/Unit Delay1' */
  rtb_UnitDelay1_m = BaseEngineController_A02_bak2_DWork.s545_UnitDelay1_DSTATE;

  /* If: '<S545>/If' incorporates:
   *  Logic: '<S545>/Logical Operator5'
   *  Logic: '<S545>/Logical Operator6'
   */
  if ((!rtb_RelOp_em) && rtb_RelationalOperator2_m) {
    /* Outputs for IfAction SubSystem: '<S545>/If Action Subsystem' incorporates:
     *  ActionPort: '<S596>/Action Port'
     */
    BaseEngineController_A02_bak2_IfActionSubsystem(rtb_UnitDelay1_m,
      &rtb_Merge_jw);

    /* End of Outputs for SubSystem: '<S545>/If Action Subsystem' */
  } else if (rtb_RelOp_em) {
    /* Outputs for IfAction SubSystem: '<S545>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S597>/Action Port'
     */
    BaseEngineController_A02_bak2_IfActionSubsystem((OilPresDfltValue_DataStore()),
      &rtb_Merge_jw);

    /* End of Outputs for SubSystem: '<S545>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S545>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S598>/Action Port'
     */
    BaseEngineController_A02_bak2_IfActionSubsystem
      (BaseEngineController_A02_bak2_B.s545_Sum1, &rtb_Merge_jw);

    /* End of Outputs for SubSystem: '<S545>/If Action Subsystem2' */
  }

  /* End of If: '<S545>/If' */

  /* Sum: '<S600>/Sum1' incorporates:
   *  Constant: '<S600>/Constant'
   *  Product: '<S600>/Product'
   *  Product: '<S600>/Product1'
   *  Sum: '<S600>/Sum'
   *  UnitDelay: '<S600>/Unit Delay'
   */
  rtb_Switch_fm = (1.0 - rtb_Abs_c) *
    BaseEngineController_A02_bak2_DWork.s600_UnitDelay_DSTATE + rtb_Merge_jw *
    rtb_Abs_c;

  /* If: '<S599>/If' incorporates:
   *  Inport: '<S601>/In1'
   *  Inport: '<S602>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S599>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S599>/override_enable'
   */
  if ((OilPres_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S599>/NewValue' incorporates:
     *  ActionPort: '<S601>/Action Port'
     */
    BaseEngineController_A02_bak2_B.s599_Merge = (OilPres_new_DataStore());

    /* End of Outputs for SubSystem: '<S599>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S599>/OldValue' incorporates:
     *  ActionPort: '<S602>/Action Port'
     */
    BaseEngineController_A02_bak2_B.s599_Merge = rtb_Switch_fm;

    /* End of Outputs for SubSystem: '<S599>/OldValue' */
  }

  /* End of If: '<S599>/If' */

  /* S-Function Block: <S603>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_bak2_DWork.s603_motohawk_delta_time_DWORK1,
       NULL);
    rtb_Abs_c = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S603>/Product' incorporates:
   *  MinMax: '<S603>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S603>/motohawk_calibration'
   */
  rtb_Abs_c /= (rtb_Abs_c >= (SensVoltFilterConst_DataStore())) || rtIsNaN
    ((SensVoltFilterConst_DataStore())) ? rtb_Abs_c :
    (SensVoltFilterConst_DataStore());

  /* Logic: '<S546>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S546>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S546>/motohawk_fault_status4'
   */
  rtb_RelOp_em = (IsFaultActive(77) || IsFaultActive(78));

  /* Logic: '<S546>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S546>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S546>/motohawk_fault_status3'
   */
  rtb_RelationalOperator2_m = (IsFaultSuspected(77) || IsFaultSuspected(78));

  /* S-Function Block: <S436>/motohawk_ain3 Resource: SensVoltSensorPin */
  {
    extern NativeError_S SensVoltSensorPin_AnalogInput_Get(uint16_T *adc,
      uint16_T *status);
    SensVoltSensorPin_AnalogInput_Get
      (&BaseEngineController_A02_bak2_B.s436_motohawk_ain3, NULL);
  }

  /* DataTypeConversion: '<S546>/Data Type Conversion' */
  rtb_Switch_j = (real_T)BaseEngineController_A02_bak2_B.s436_motohawk_ain3;

  /* Product: '<S546>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S546>/motohawk_calibration4'
   */
  rtb_Product1_f = rtb_Switch_j * (SensVoltGain_DataStore());

  /* Sum: '<S546>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S546>/motohawk_calibration5'
   */
  BaseEngineController_A02_bak2_B.s546_Sum1 = rtb_Product1_f +
    (SensVoltOfst_DataStore());

  /* UnitDelay: '<S546>/Unit Delay1' */
  rtb_UnitDelay1_hr = BaseEngineController_A02_bak2_DWork.s546_UnitDelay1_DSTATE;

  /* If: '<S546>/If' incorporates:
   *  Logic: '<S546>/Logical Operator5'
   *  Logic: '<S546>/Logical Operator6'
   */
  if ((!rtb_RelOp_em) && rtb_RelationalOperator2_m) {
    /* Outputs for IfAction SubSystem: '<S546>/If Action Subsystem' incorporates:
     *  ActionPort: '<S604>/Action Port'
     */
    BaseEngineController_A02_bak2_IfActionSubsystem(rtb_UnitDelay1_hr,
      &rtb_Merge_ne);

    /* End of Outputs for SubSystem: '<S546>/If Action Subsystem' */
  } else if (rtb_RelOp_em) {
    /* Outputs for IfAction SubSystem: '<S546>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S605>/Action Port'
     */
    BaseEngineController_A02_bak2_IfActionSubsystem((SensVoltDfltValue_DataStore
      ()), &rtb_Merge_ne);

    /* End of Outputs for SubSystem: '<S546>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S546>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S606>/Action Port'
     */
    BaseEngineController_A02_bak2_IfActionSubsystem
      (BaseEngineController_A02_bak2_B.s546_Sum1, &rtb_Merge_ne);

    /* End of Outputs for SubSystem: '<S546>/If Action Subsystem2' */
  }

  /* End of If: '<S546>/If' */

  /* Sum: '<S608>/Sum1' incorporates:
   *  Constant: '<S608>/Constant'
   *  Product: '<S608>/Product'
   *  Product: '<S608>/Product1'
   *  Sum: '<S608>/Sum'
   *  UnitDelay: '<S608>/Unit Delay'
   */
  rtb_Sum_pd = (1.0 - rtb_Abs_c) *
    BaseEngineController_A02_bak2_DWork.s608_UnitDelay_DSTATE + rtb_Merge_ne *
    rtb_Abs_c;

  /* If: '<S607>/If' incorporates:
   *  Inport: '<S609>/In1'
   *  Inport: '<S610>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S607>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S607>/override_enable'
   */
  if ((SensVolt_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S607>/NewValue' incorporates:
     *  ActionPort: '<S609>/Action Port'
     */
    BaseEngineController_A02_bak2_B.s607_Merge = (SensVolt_new_DataStore());

    /* End of Outputs for SubSystem: '<S607>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S607>/OldValue' incorporates:
     *  ActionPort: '<S610>/Action Port'
     */
    BaseEngineController_A02_bak2_B.s607_Merge = rtb_Sum_pd;

    /* End of Outputs for SubSystem: '<S607>/OldValue' */
  }

  /* End of If: '<S607>/If' */

  /* Outputs for Enabled SubSystem: '<S432>/Triggered Subsystem' incorporates:
   *  EnablePort: '<S433>/Enable'
   */
  if (rtb_RelationalOperator_bd) {
    /* Outputs for Function Call SubSystem: '<S3>/Diagnostics' */

    /* S-Function Block: <S314>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_bak2_DWork.s314_motohawk_delta_time_DWORK1,
         NULL);
      rtb_motohawk_delta_time_gi = ((real_T) delta) * 0.000001;
    }

    /* RelationalOperator: '<S312>/RelOp' incorporates:
     *  Constant: '<S312>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S303>/motohawk_data_read'
     */
    rtb_BelowLoTarget_f = (((uint8_T)EngineState_DataStore()) == 3);

    /* Switch: '<S314>/Switch' incorporates:
     *  Constant: '<S314>/Constant'
     *  Logic: '<S303>/Logical Operator'
     *  RelationalOperator: '<S303>/Relational Operator'
     *  S-Function (motohawk_sfun_calibration): '<S303>/motohawk_calibration'
     *  S-Function (motohawk_sfun_data_read): '<S314>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S314>/motohawk_delta_time'
     *  Sum: '<S314>/Sum'
     */
    if (rtb_BelowLoTarget_f && (BaseEngineController_A02_bak2_B.s552_Merge >=
         (ACHighPressureDisable_DataStore()))) {
      rtb_Product1_f = rtb_motohawk_delta_time_gi +
        AChighPressureTimer_DataStore();
    } else {
      rtb_Product1_f = 0.0;
    }

    /* End of Switch: '<S314>/Switch' */
    /* RelationalOperator: '<S303>/Relational Operator5' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S303>/motohawk_calibration3'
     */
    rtb_RelationalOperator5_p = ((rtb_Product1_f > (ACHighPressureTime_DataStore
                                   ())));

    /* S-Function (motohawk_sfun_fault_def): '<S303>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: ACChargeHigh_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(0, rtb_RelationalOperator5_p);
      UpdateFault(0);
    }

    /* S-Function Block: <S313>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_bak2_DWork.s313_motohawk_delta_time_DWORK1,
         NULL);
      rtb_motohawk_delta_time_jp = ((real_T) delta) * 0.000001;
    }

    /* Switch: '<S313>/Switch' incorporates:
     *  Constant: '<S313>/Constant'
     *  Logic: '<S303>/Logical Operator1'
     *  RelationalOperator: '<S303>/Relational Operator1'
     *  S-Function (motohawk_sfun_calibration): '<S303>/motohawk_calibration2'
     *  S-Function (motohawk_sfun_data_read): '<S313>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S313>/motohawk_delta_time'
     *  Sum: '<S313>/Sum'
     */
    if (rtb_BelowLoTarget_f && (BaseEngineController_A02_bak2_B.s552_Merge <=
         (ACLowPressureDisable_DataStore())) &&
        BaseEngineController_A02_bak2_B.s111_AC) {
      rtb_UnitDelay4_o = rtb_motohawk_delta_time_jp +
        ACLowPressureTimer_DataStore();
    } else {
      rtb_UnitDelay4_o = 0.0;
    }

    /* End of Switch: '<S313>/Switch' */
    /* Logic: '<S303>/Logical Operator2' incorporates:
     *  RelationalOperator: '<S303>/Relational Operator3'
     *  S-Function (motohawk_sfun_calibration): '<S303>/motohawk_calibration1'
     */
    rtb_LogicalOperator2_l = (((rtb_UnitDelay4_o > (ACLowPressureTime_DataStore()))
      && BaseEngineController_A02_bak2_B.s111_AC));

    /* S-Function (motohawk_sfun_fault_def): '<S303>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: ACChargeLow_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(1, rtb_LogicalOperator2_l);
      UpdateFault(1);
    }

    /* Saturate: '<S313>/Saturation' */
    rtb_Saturation_n1 = rtb_UnitDelay4_o >= 16000.0 ? 16000.0 : rtb_UnitDelay4_o
      <= 0.0 ? 0.0 : rtb_UnitDelay4_o;

    /* S-Function (motohawk_sfun_data_write): '<S313>/motohawk_data_write' */
    /* Write to Data Storage as scalar: ACLowPressureTimer */
    {
      ACLowPressureTimer_DataStore() = rtb_Saturation_n1;
    }

    /* Saturate: '<S314>/Saturation' */
    rtb_Saturation_ii = rtb_Product1_f >= 16000.0 ? 16000.0 : rtb_Product1_f <=
      0.0 ? 0.0 : rtb_Product1_f;

    /* S-Function (motohawk_sfun_data_write): '<S314>/motohawk_data_write' */
    /* Write to Data Storage as scalar: AChighPressureTimer */
    {
      AChighPressureTimer_DataStore() = rtb_Saturation_ii;
    }

    /* S-Function Block: <S317>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_bak2_DWork.s317_motohawk_delta_time_DWORK1,
         NULL);
      rtb_motohawk_delta_time_bi = ((real_T) delta) * 0.000001;
    }

    /* RelationalOperator: '<S315>/RelOp' incorporates:
     *  Constant: '<S315>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S304>/motohawk_data_read'
     */
    rtb_BelowLoTarget_f = (((uint8_T)EngineState_DataStore()) == 3);

    /* Gain: '<S304>/kPa to PSI' incorporates:
     *  Sum: '<S304>/Sum1'
     */
    rtb_UnitDelay4_o = (BaseEngineController_A02_bak2_B.s589_Merge -
                        BaseEngineController_A02_bak2_B.s355_Sum) * 0.145038;

    /* Switch: '<S317>/Switch' incorporates:
     *  Constant: '<S317>/Constant'
     *  Logic: '<S304>/Logical Operator'
     *  RelationalOperator: '<S304>/Relational Operator'
     *  S-Function (motohawk_sfun_calibration): '<S304>/motohawk_calibration'
     *  S-Function (motohawk_sfun_data_read): '<S317>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S317>/motohawk_delta_time'
     *  Sum: '<S317>/Sum'
     */
    if (rtb_BelowLoTarget_f && (rtb_UnitDelay4_o >=
         (SoftOverBoostLimit_DataStore()))) {
      rtb_Product1_f = rtb_motohawk_delta_time_bi + SoftOverBoostTimer_DataStore
        ();
    } else {
      rtb_Product1_f = 0.0;
    }

    /* End of Switch: '<S317>/Switch' */
    /* RelationalOperator: '<S304>/Relational Operator5' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S304>/motohawk_calibration3'
     */
    rtb_RelationalOperator5_c = ((rtb_Product1_f > (SoftOverBoostTime_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S304>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: SoftOverBoost_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(79, rtb_RelationalOperator5_c);
      UpdateFault(79);
    }

    /* S-Function Block: <S316>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_bak2_DWork.s316_motohawk_delta_time_DWORK1,
         NULL);
      rtb_motohawk_delta_time_jn = ((real_T) delta) * 0.000001;
    }

    /* Switch: '<S316>/Switch' incorporates:
     *  Constant: '<S316>/Constant'
     *  Logic: '<S304>/Logical Operator1'
     *  RelationalOperator: '<S304>/Relational Operator1'
     *  S-Function (motohawk_sfun_calibration): '<S304>/motohawk_calibration1'
     *  S-Function (motohawk_sfun_data_read): '<S316>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S316>/motohawk_delta_time'
     *  Sum: '<S316>/Sum'
     */
    if (rtb_BelowLoTarget_f && (rtb_UnitDelay4_o >=
         (HardOverBoostLimit_DataStore()))) {
      rtb_UnitDelay4_o = rtb_motohawk_delta_time_jn +
        HardOverBoostTimer_DataStore();
    } else {
      rtb_UnitDelay4_o = 0.0;
    }

    /* End of Switch: '<S316>/Switch' */
    /* RelationalOperator: '<S304>/Relational Operator3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S304>/motohawk_calibration4'
     */
    rtb_RelationalOperator3_fj = ((rtb_UnitDelay4_o >
      (HardOverBoostTime_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S304>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: HardOverBoost_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(47, rtb_RelationalOperator3_fj);
      UpdateFault(47);
    }

    /* S-Function Block: <S318>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_bak2_DWork.s318_motohawk_delta_time_DWORK1,
         NULL);
      rtb_motohawk_delta_time_cy = ((real_T) delta) * 0.000001;
    }

    /* Switch: '<S318>/Switch' incorporates:
     *  Constant: '<S318>/Constant'
     *  Logic: '<S304>/Logical Operator2'
     *  RelationalOperator: '<S304>/Relational Operator2'
     *  S-Function (motohawk_sfun_calibration): '<S304>/motohawk_calibration2'
     *  S-Function (motohawk_sfun_data_read): '<S318>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S318>/motohawk_delta_time'
     *  Sum: '<S318>/Sum'
     */
    if (rtb_BelowLoTarget_f && (BaseEngineController_A02_bak2_B.s111_WASTEGATE >=
         (WastegateLossOfControl_DataStore()))) {
      rtb_motohawk_interpolation_1d3_i = rtb_motohawk_delta_time_cy +
        WastegateTimer_DataStore();
    } else {
      rtb_motohawk_interpolation_1d3_i = 0.0;
    }

    /* End of Switch: '<S318>/Switch' */
    /* RelationalOperator: '<S304>/Relational Operator4' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S304>/motohawk_calibration5'
     */
    rtb_RelationalOperator4_p = ((rtb_motohawk_interpolation_1d3_i >
      (WastegateTime_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S304>/motohawk_fault_def3' */

    /* Set Fault Suspected Status: Wastegate_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(88, rtb_RelationalOperator4_p);
      UpdateFault(88);
    }

    /* Saturate: '<S316>/Saturation' */
    rtb_Saturation_ad = rtb_UnitDelay4_o >= 16000.0 ? 16000.0 : rtb_UnitDelay4_o
      <= 0.0 ? 0.0 : rtb_UnitDelay4_o;

    /* S-Function (motohawk_sfun_data_write): '<S316>/motohawk_data_write' */
    /* Write to Data Storage as scalar: HardOverBoostTimer */
    {
      HardOverBoostTimer_DataStore() = rtb_Saturation_ad;
    }

    /* Saturate: '<S317>/Saturation' */
    rtb_Saturation_p = rtb_Product1_f >= 16000.0 ? 16000.0 : rtb_Product1_f <=
      0.0 ? 0.0 : rtb_Product1_f;

    /* S-Function (motohawk_sfun_data_write): '<S317>/motohawk_data_write' */
    /* Write to Data Storage as scalar: SoftOverBoostTimer */
    {
      SoftOverBoostTimer_DataStore() = rtb_Saturation_p;
    }

    /* Saturate: '<S318>/Saturation' */
    rtb_Saturation_og = rtb_motohawk_interpolation_1d3_i >= 16000.0 ? 16000.0 :
      rtb_motohawk_interpolation_1d3_i <= 0.0 ? 0.0 :
      rtb_motohawk_interpolation_1d3_i;

    /* S-Function (motohawk_sfun_data_write): '<S318>/motohawk_data_write' */
    /* Write to Data Storage as scalar: WastegateTimer */
    {
      WastegateTimer_DataStore() = rtb_Saturation_og;
    }

    /* Abs: '<S305>/Abs' */
    rtb_motohawk_interpolation_1d3_i = fabs
      (BaseEngineController_A02_bak2_B.s417_Sum1);

    /* RelationalOperator: '<S305>/Relational Operator5' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S305>/motohawk_calibration'
     */
    rtb_RelationalOperator5_n = ((rtb_motohawk_interpolation_1d3_i >
      (CruiseControlRPMAccel_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S305>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: CruiseAccel_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(13, rtb_RelationalOperator5_n);
      UpdateFault(13);
    }

    /* S-Function Block: <S328>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_bak2_DWork.s328_motohawk_delta_time_DWORK1,
         NULL);
      rtb_motohawk_delta_time_by = ((real_T) delta) * 0.000001;
    }

    /* Logic: '<S309>/Logical Operator3' incorporates:
     *  Logic: '<S309>/Logical Operator1'
     *  S-Function (motohawk_sfun_fault_status): '<S309>/motohawk_fault_status'
     *  S-Function (motohawk_sfun_fault_status): '<S309>/motohawk_fault_status1'
     *  S-Function (motohawk_sfun_fault_status): '<S309>/motohawk_fault_status2'
     *  S-Function (motohawk_sfun_fault_status): '<S309>/motohawk_fault_status3'
     *  S-Function (motohawk_sfun_fault_status): '<S309>/motohawk_fault_status4'
     *  S-Function (motohawk_sfun_fault_status): '<S309>/motohawk_fault_status5'
     */
    rtb_BelowLoTarget_f = !(IsFaultActive(83) || IsFaultActive(85) ||
      IsFaultActive(84) || IsFaultActive(86) || IsFaultActive(61) ||
      IsFaultActive(62));

    /* RelationalOperator: '<S327>/RelOp' incorporates:
     *  Constant: '<S327>/Constant'
     */
    rtb_RelOp_ie = (BaseEngineController_A02_bak2_B.s418_State == 3);

    /* RelationalOperator: '<S309>/Relational Operator3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S309>/motohawk_calibration2'
     */
    rtb_RelationalOperator2_m = (BaseEngineController_A02_bak2_B.s403_Switch2 <
                                 (MAP_IR_TPS_CL_DataStore()));

    /* Switch: '<S328>/Switch' incorporates:
     *  Constant: '<S328>/Constant'
     *  Logic: '<S309>/Logical Operator4'
     *  RelationalOperator: '<S309>/Relational Operator4'
     *  S-Function (motohawk_sfun_calibration): '<S309>/motohawk_calibration4'
     *  S-Function (motohawk_sfun_data_read): '<S328>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S328>/motohawk_delta_time'
     *  Sum: '<S328>/Sum'
     */
    if (rtb_BelowLoTarget_f && rtb_RelOp_ie && rtb_RelationalOperator2_m &&
        (BaseEngineController_A02_bak2_B.s581_Merge > (MAP_IR_HI_DataStore())))
    {
      rtb_motohawk_interpolation_1d3_i = rtb_motohawk_delta_time_by +
        MapHiFaultTimer_DataStore();
    } else {
      rtb_motohawk_interpolation_1d3_i = 0.0;
    }

    /* End of Switch: '<S328>/Switch' */

    /* RelationalOperator: '<S309>/Relational Operator5' incorporates:
     *  Constant: '<S309>/Constant'
     */
    rtb_RelationalOperator5_e = ((rtb_motohawk_interpolation_1d3_i > 5.0));

    /* S-Function (motohawk_sfun_fault_def): '<S309>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: MAP_IR_HI */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(65, rtb_RelationalOperator5_e);
      UpdateFault(65);
    }

    /* S-Function Block: <S329>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_bak2_DWork.s329_motohawk_delta_time_DWORK1,
         NULL);
      rtb_motohawk_delta_time_oy = ((real_T) delta) * 0.000001;
    }

    /* RelationalOperator: '<S309>/Relational Operator1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S309>/motohawk_calibration6'
     */
    rtb_RelationalOperator2_m = (BaseEngineController_A02_bak2_B.s403_Switch2 >
                                 (MAP_IR_TPS_OP_DataStore()));

    /* Switch: '<S329>/Switch' incorporates:
     *  Constant: '<S329>/Constant'
     *  Logic: '<S309>/Logical Operator2'
     *  RelationalOperator: '<S309>/Relational Operator2'
     *  S-Function (motohawk_sfun_calibration): '<S309>/motohawk_calibration5'
     *  S-Function (motohawk_sfun_data_read): '<S329>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S329>/motohawk_delta_time'
     *  Sum: '<S329>/Sum'
     */
    if (rtb_BelowLoTarget_f && rtb_RelOp_ie && rtb_RelationalOperator2_m &&
        (BaseEngineController_A02_bak2_B.s581_Merge < (MAP_IR_LO_DataStore())))
    {
      rtb_UnitDelay4_o = rtb_motohawk_delta_time_oy + MapLoFaultTimer_DataStore();
    } else {
      rtb_UnitDelay4_o = 0.0;
    }

    /* End of Switch: '<S329>/Switch' */

    /* RelationalOperator: '<S309>/Relational Operator6' incorporates:
     *  Constant: '<S309>/Constant1'
     */
    rtb_RelationalOperator6 = ((rtb_UnitDelay4_o > 5.0));

    /* S-Function (motohawk_sfun_fault_def): '<S309>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: MAP_IR_LO */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(66, rtb_RelationalOperator6);
      UpdateFault(66);
    }

    /* S-Function Block: <S330>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_bak2_DWork.s330_motohawk_delta_time_DWORK1,
         NULL);
      rtb_motohawk_delta_time_az = ((real_T) delta) * 0.000001;
    }

    /* RelationalOperator: '<S309>/Relational Operator7' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S309>/motohawk_calibration8'
     */
    rtb_RelationalOperator2_m = (BaseEngineController_A02_bak2_B.s403_Switch2 <
                                 (MAP_TPS_STUCK_DataStore()));

    /* Sum: '<S309>/Add' */
    rtb_Product1_f = BaseEngineController_A02_bak2_B.s355_Sum -
      BaseEngineController_A02_bak2_B.s581_Merge;

    /* Switch: '<S330>/Switch' incorporates:
     *  Constant: '<S330>/Constant'
     *  Logic: '<S309>/Logical Operator5'
     *  RelationalOperator: '<S309>/Relational Operator8'
     *  S-Function (motohawk_sfun_calibration): '<S309>/motohawk_calibration7'
     *  S-Function (motohawk_sfun_data_read): '<S330>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S330>/motohawk_delta_time'
     *  Sum: '<S330>/Sum'
     */
    if (rtb_BelowLoTarget_f && rtb_RelOp_ie && rtb_RelationalOperator2_m &&
        (rtb_Product1_f < (MAP_STUCK_DataStore()))) {
      rtb_Product1_f = rtb_motohawk_delta_time_az + MapStickFaultTimer_DataStore
        ();
    } else {
      rtb_Product1_f = 0.0;
    }

    /* End of Switch: '<S330>/Switch' */

    /* RelationalOperator: '<S309>/Relational Operator9' incorporates:
     *  Constant: '<S309>/Constant2'
     */
    rtb_RelationalOperator9 = ((rtb_Product1_f > 5.0));

    /* S-Function (motohawk_sfun_fault_def): '<S309>/motohawk_fault_def3' */

    /* Set Fault Suspected Status: MAP_STICKING */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(67, rtb_RelationalOperator9);
      UpdateFault(67);
    }

    /* Saturate: '<S328>/Saturation' */
    rtb_Saturation_jzi = rtb_motohawk_interpolation_1d3_i >= 16000.0 ? 16000.0 :
      rtb_motohawk_interpolation_1d3_i <= 0.0 ? 0.0 :
      rtb_motohawk_interpolation_1d3_i;

    /* S-Function (motohawk_sfun_data_write): '<S328>/motohawk_data_write' */
    /* Write to Data Storage as scalar: MapHiFaultTimer */
    {
      MapHiFaultTimer_DataStore() = rtb_Saturation_jzi;
    }

    /* Saturate: '<S329>/Saturation' */
    rtb_Saturation_pu = rtb_UnitDelay4_o >= 16000.0 ? 16000.0 : rtb_UnitDelay4_o
      <= 0.0 ? 0.0 : rtb_UnitDelay4_o;

    /* S-Function (motohawk_sfun_data_write): '<S329>/motohawk_data_write' */
    /* Write to Data Storage as scalar: MapLoFaultTimer */
    {
      MapLoFaultTimer_DataStore() = rtb_Saturation_pu;
    }

    /* Saturate: '<S330>/Saturation' */
    rtb_Saturation_mq = rtb_Product1_f >= 16000.0 ? 16000.0 : rtb_Product1_f <=
      0.0 ? 0.0 : rtb_Product1_f;

    /* S-Function (motohawk_sfun_data_write): '<S330>/motohawk_data_write' */
    /* Write to Data Storage as scalar: MapStickFaultTimer */
    {
      MapStickFaultTimer_DataStore() = rtb_Saturation_mq;
    }

    /* RelationalOperator: '<S333>/LT' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S331>/motohawk_calibration'
     */
    rtb_RelOp_ie = (BaseEngineController_A02_bak2_B.s435_RPMInst >=
                    (BaseRevLimit_DataStore()));

    /* Sum: '<S331>/Sum2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S331>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S331>/motohawk_calibration1'
     */
    rtb_Product1_f = (BaseRevLimit_DataStore()) - (RevLimitHyst_DataStore());

    /* RelationalOperator: '<S333>/LT1' */
    rtb_BelowLoTarget_f = (BaseEngineController_A02_bak2_B.s435_RPMInst <=
      rtb_Product1_f);

    /* CombinatorialLogic: '<S336>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_RelOp_ie != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_f != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_e[0] =
        BaseEngineController_A02_bak2_ConstP.pooled706[rowidx];
      rtb_CombinatorialLogic_e[1] =
        BaseEngineController_A02_bak2_ConstP.pooled706[rowidx + 4];
    }

    /* Switch: '<S336>/Switch1' incorporates:
     *  UnitDelay: '<S336>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_e[1]) {
      rtb_LogicalOperator2_jv = rtb_CombinatorialLogic_e[0];
    } else {
      rtb_LogicalOperator2_jv =
        BaseEngineController_A02_bak2_DWork.s336_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S336>/Switch1' */
    /* Sum: '<S331>/Sum3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S331>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S331>/motohawk_calibration2'
     */
    rtb_motohawk_interpolation_1d3_i = (BaseRevLimit_DataStore()) +
      (MediumRevOffset_DataStore());

    /* RelationalOperator: '<S334>/LT' */
    rtb_RelOp_ie = (BaseEngineController_A02_bak2_B.s435_RPMInst >=
                    rtb_motohawk_interpolation_1d3_i);

    /* Sum: '<S331>/Sum1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S331>/motohawk_calibration1'
     */
    rtb_UnitDelay4_o = rtb_motohawk_interpolation_1d3_i -
      (RevLimitHyst_DataStore());

    /* RelationalOperator: '<S334>/LT1' */
    rtb_BelowLoTarget_f = (BaseEngineController_A02_bak2_B.s435_RPMInst <=
      rtb_UnitDelay4_o);

    /* CombinatorialLogic: '<S337>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_RelOp_ie != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_f != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_e[0] =
        BaseEngineController_A02_bak2_ConstP.pooled706[rowidx];
      rtb_CombinatorialLogic_e[1] =
        BaseEngineController_A02_bak2_ConstP.pooled706[rowidx + 4];
    }

    /* Switch: '<S337>/Switch1' incorporates:
     *  UnitDelay: '<S337>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_e[1]) {
      rtb_Switch1_c3 = rtb_CombinatorialLogic_e[0];
    } else {
      rtb_Switch1_c3 = BaseEngineController_A02_bak2_DWork.s337_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S337>/Switch1' */

    /* Switch: '<S334>/Switch2' incorporates:
     *  Logic: '<S334>/Logical Operator'
     */
    if (rtb_Switch1_c3) {
      rtb_motohawk_interpolation_1d3_i = rtb_UnitDelay4_o;
    }

    /* End of Switch: '<S334>/Switch2' */

    /* RelationalOperator: '<S331>/Overspeed1' */
    rtb_RelationalOperator2_m = (BaseEngineController_A02_bak2_B.s435_RPMInst >
      rtb_motohawk_interpolation_1d3_i);

    /* Logic: '<S310>/Logical Operator' */
    rtb_RelOp_ie = !BaseEngineController_A02_bak2_B.s526_Merge;

    /* RelationalOperator: '<S339>/LT' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S332>/motohawk_calibration'
     */
    rtb_BelowLoTarget_f = (BaseEngineController_A02_bak2_B.s435_RPMInst >=
      (TwoStepRevLimit_DataStore()));

    /* Sum: '<S332>/Sum2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S332>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S332>/motohawk_calibration1'
     */
    rtb_Product1_i = (TwoStepRevLimit_DataStore()) -
      (TwoStepRevLimitHyst_DataStore());

    /* RelationalOperator: '<S339>/LT1' */
    rtb_LogicalOperator3_kf = (BaseEngineController_A02_bak2_B.s435_RPMInst <=
      rtb_Product1_i);

    /* CombinatorialLogic: '<S342>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_f != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_LogicalOperator3_kf != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_e[0] =
        BaseEngineController_A02_bak2_ConstP.pooled706[rowidx];
      rtb_CombinatorialLogic_e[1] =
        BaseEngineController_A02_bak2_ConstP.pooled706[rowidx + 4];
    }

    /* Switch: '<S342>/Switch1' incorporates:
     *  UnitDelay: '<S342>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_e[1]) {
      rtb_Switch1_k = rtb_CombinatorialLogic_e[0];
    } else {
      rtb_Switch1_k = BaseEngineController_A02_bak2_DWork.s342_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S342>/Switch1' */
    /* Sum: '<S332>/Sum3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S332>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S332>/motohawk_calibration2'
     */
    rtb_motohawk_interpolation_1d3_i = (TwoStepRevLimit_DataStore()) +
      (TwoStepMediumRevOffset_DataStore());

    /* RelationalOperator: '<S340>/LT' */
    rtb_LogicalOperator3_kf = (BaseEngineController_A02_bak2_B.s435_RPMInst >=
      rtb_motohawk_interpolation_1d3_i);

    /* Sum: '<S332>/Sum1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S332>/motohawk_calibration1'
     */
    rtb_UnitDelay4_o = rtb_motohawk_interpolation_1d3_i -
      (TwoStepRevLimitHyst_DataStore());

    /* RelationalOperator: '<S340>/LT1' */
    rtb_BelowLoTarget_f = (BaseEngineController_A02_bak2_B.s435_RPMInst <=
      rtb_UnitDelay4_o);

    /* CombinatorialLogic: '<S343>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_LogicalOperator3_kf != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_f != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_e[0] =
        BaseEngineController_A02_bak2_ConstP.pooled706[rowidx];
      rtb_CombinatorialLogic_e[1] =
        BaseEngineController_A02_bak2_ConstP.pooled706[rowidx + 4];
    }

    /* Switch: '<S343>/Switch1' incorporates:
     *  UnitDelay: '<S343>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_e[1]) {
      rtb_Switch1_m = rtb_CombinatorialLogic_e[0];
    } else {
      rtb_Switch1_m = BaseEngineController_A02_bak2_DWork.s343_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S343>/Switch1' */

    /* Switch: '<S340>/Switch2' incorporates:
     *  Logic: '<S340>/Logical Operator'
     */
    if (rtb_Switch1_m) {
      rtb_motohawk_interpolation_1d3_i = rtb_UnitDelay4_o;
    }

    /* End of Switch: '<S340>/Switch2' */

    /* RelationalOperator: '<S332>/Overspeed1' */
    rtb_RelOp_em = (BaseEngineController_A02_bak2_B.s435_RPMInst >
                    rtb_motohawk_interpolation_1d3_i);

    /* Switch: '<S310>/Switch' incorporates:
     *  Logic: '<S331>/Logical Operator3'
     *  Logic: '<S331>/Logical Operator4'
     *  Logic: '<S332>/Logical Operator3'
     *  Logic: '<S332>/Logical Operator4'
     *  RelationalOperator: '<S331>/Overspeed'
     *  RelationalOperator: '<S332>/Overspeed'
     */
    if (rtb_RelOp_ie) {
      /* Switch: '<S333>/Switch2' incorporates:
       *  Logic: '<S333>/Logical Operator'
       *  S-Function (motohawk_sfun_calibration): '<S331>/motohawk_calibration'
       */
      if (!rtb_LogicalOperator2_jv) {
        rtb_Product1_f = (BaseRevLimit_DataStore());
      }

      /* End of Switch: '<S333>/Switch2' */
      rtb_LogicalOperator3_kf = ((BaseEngineController_A02_bak2_B.s435_RPMInst >
        rtb_Product1_f) && (!rtb_RelationalOperator2_m));
    } else {
      /* Switch: '<S339>/Switch2' incorporates:
       *  Logic: '<S339>/Logical Operator'
       *  S-Function (motohawk_sfun_calibration): '<S332>/motohawk_calibration'
       */
      if (!rtb_Switch1_k) {
        rtb_Product1_i = (TwoStepRevLimit_DataStore());
      }

      /* End of Switch: '<S339>/Switch2' */
      rtb_LogicalOperator3_kf = ((BaseEngineController_A02_bak2_B.s435_RPMInst >
        rtb_Product1_i) && (!rtb_RelOp_em));
    }

    /* End of Switch: '<S310>/Switch' */

    /* S-Function (motohawk_sfun_fault_def): '<S310>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: SoftOverspeed */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(80, rtb_LogicalOperator3_kf);
      UpdateFault(80);
    }

    /* Sum: '<S331>/Sum5' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S331>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S331>/motohawk_calibration4'
     */
    rtb_motohawk_interpolation_1d3_i = (BaseRevLimit_DataStore()) +
      (HardRevOffset_DataStore());

    /* RelationalOperator: '<S335>/LT' */
    rtb_LogicalOperator3_kf = (BaseEngineController_A02_bak2_B.s435_RPMInst >=
      rtb_motohawk_interpolation_1d3_i);

    /* Sum: '<S331>/Sum4' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S331>/motohawk_calibration1'
     */
    rtb_UnitDelay4_o = rtb_motohawk_interpolation_1d3_i -
      (RevLimitHyst_DataStore());

    /* RelationalOperator: '<S335>/LT1' */
    rtb_BelowLoTarget_f = (BaseEngineController_A02_bak2_B.s435_RPMInst <=
      rtb_UnitDelay4_o);

    /* CombinatorialLogic: '<S338>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_LogicalOperator3_kf != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_f != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_e[0] =
        BaseEngineController_A02_bak2_ConstP.pooled706[rowidx];
      rtb_CombinatorialLogic_e[1] =
        BaseEngineController_A02_bak2_ConstP.pooled706[rowidx + 4];
    }

    /* Switch: '<S338>/Switch1' incorporates:
     *  UnitDelay: '<S338>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_e[1]) {
      rtb_Switch1_c = rtb_CombinatorialLogic_e[0];
    } else {
      rtb_Switch1_c = BaseEngineController_A02_bak2_DWork.s338_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S338>/Switch1' */

    /* Switch: '<S335>/Switch2' incorporates:
     *  Logic: '<S335>/Logical Operator'
     */
    if (rtb_Switch1_c) {
      rtb_motohawk_interpolation_1d3_i = rtb_UnitDelay4_o;
    }

    /* End of Switch: '<S335>/Switch2' */

    /* RelationalOperator: '<S331>/Overspeed2' */
    rtb_RelOp_js = (BaseEngineController_A02_bak2_B.s435_RPMInst >
                    rtb_motohawk_interpolation_1d3_i);

    /* Sum: '<S332>/Sum5' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S332>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S332>/motohawk_calibration4'
     */
    rtb_motohawk_interpolation_1d3_i = (TwoStepRevLimit_DataStore()) +
      (TwoStepHardRevOffset_DataStore());

    /* RelationalOperator: '<S341>/LT' */
    rtb_LogicalOperator3_kf = (BaseEngineController_A02_bak2_B.s435_RPMInst >=
      rtb_motohawk_interpolation_1d3_i);

    /* Sum: '<S332>/Sum4' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S332>/motohawk_calibration1'
     */
    rtb_UnitDelay4_o = rtb_motohawk_interpolation_1d3_i -
      (TwoStepRevLimitHyst_DataStore());

    /* RelationalOperator: '<S341>/LT1' */
    rtb_BelowLoTarget_f = (BaseEngineController_A02_bak2_B.s435_RPMInst <=
      rtb_UnitDelay4_o);

    /* CombinatorialLogic: '<S344>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_LogicalOperator3_kf != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_f != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_e[0] =
        BaseEngineController_A02_bak2_ConstP.pooled706[rowidx];
      rtb_CombinatorialLogic_e[1] =
        BaseEngineController_A02_bak2_ConstP.pooled706[rowidx + 4];
    }

    /* Switch: '<S344>/Switch1' incorporates:
     *  UnitDelay: '<S344>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_e[1]) {
      rtb_Switch1_mq = rtb_CombinatorialLogic_e[0];
    } else {
      rtb_Switch1_mq = BaseEngineController_A02_bak2_DWork.s344_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S344>/Switch1' */

    /* Switch: '<S341>/Switch2' incorporates:
     *  Logic: '<S341>/Logical Operator'
     */
    if (rtb_Switch1_mq) {
      rtb_motohawk_interpolation_1d3_i = rtb_UnitDelay4_o;
    }

    /* End of Switch: '<S341>/Switch2' */

    /* RelationalOperator: '<S332>/Overspeed2' */
    rtb_LogicalOperator4_a3 = (BaseEngineController_A02_bak2_B.s435_RPMInst >
      rtb_motohawk_interpolation_1d3_i);

    /* Switch: '<S310>/Switch1' incorporates:
     *  Logic: '<S331>/Logical Operator5'
     *  Logic: '<S331>/Logical Operator6'
     *  Logic: '<S332>/Logical Operator5'
     *  Logic: '<S332>/Logical Operator6'
     */
    if (rtb_RelOp_ie) {
      rtb_LogicalOperator3_kf = (rtb_RelationalOperator2_m && (!rtb_RelOp_js));
    } else {
      rtb_LogicalOperator3_kf = (rtb_RelOp_em && (!rtb_LogicalOperator4_a3));
    }

    /* End of Switch: '<S310>/Switch1' */

    /* S-Function (motohawk_sfun_fault_def): '<S310>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: MediumOverspeed */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(68, rtb_LogicalOperator3_kf);
      UpdateFault(68);
    }

    /* Switch: '<S310>/Switch2' */
    if (rtb_RelOp_ie) {
      rtb_RelOp_ie = rtb_RelOp_js;
    } else {
      rtb_RelOp_ie = rtb_LogicalOperator4_a3;
    }

    /* End of Switch: '<S310>/Switch2' */

    /* S-Function (motohawk_sfun_fault_def): '<S310>/motohawk_fault_def3' */

    /* Set Fault Suspected Status: HardOverspeed */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(48, rtb_RelOp_ie);
      UpdateFault(48);
    }

    /* S-Function Block: <S346>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_bak2_DWork.s346_motohawk_delta_time_DWORK1,
         NULL);
      rtb_motohawk_delta_time_o5 = ((real_T) delta) * 0.000001;
    }

    /* Logic: '<S311>/Logical Operator3' incorporates:
     *  Logic: '<S311>/Logical Operator1'
     *  S-Function (motohawk_sfun_fault_status): '<S311>/motohawk_fault_status'
     *  S-Function (motohawk_sfun_fault_status): '<S311>/motohawk_fault_status1'
     */
    rtb_LogicalOperator3_kf = !(IsFaultActive(43) || IsFaultActive(44) ||
      BaseEngineController_A02_bak2_B.s505_Merge);

    /* Sum: '<S311>/Sum3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S311>/motohawk_calibration2'
     */
    rtb_motohawk_interpolation_1d3_i = BaseEngineController_A02_bak2_B.s400_Sum3
      - (FuelPres_DeltaTarget_DataStore());

    /* Switch: '<S346>/Switch' incorporates:
     *  Constant: '<S346>/Constant'
     *  Gain: '<S311>/invert'
     *  Logic: '<S311>/Logical Operator4'
     *  RelationalOperator: '<S311>/Relational Operator1'
     *  S-Function (motohawk_sfun_calibration): '<S311>/motohawk_calibration3'
     *  S-Function (motohawk_sfun_data_read): '<S346>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S346>/motohawk_delta_time'
     *  Sum: '<S346>/Sum'
     */
    if (rtb_LogicalOperator3_kf && (rtb_motohawk_interpolation_1d3_i <
         -(FuelPres_DeltaTolerance_DataStore()))) {
      rtb_UnitDelay4_o = rtb_motohawk_delta_time_o5 +
        FuelPresLow_FaultTimer_DataStore();
    } else {
      rtb_UnitDelay4_o = 0.0;
    }

    /* End of Switch: '<S346>/Switch' */
    /* RelationalOperator: '<S311>/Relational Operator5' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S311>/motohawk_calibration1'
     */
    rtb_RelationalOperator5_l = ((rtb_UnitDelay4_o >
      (FuelPres_FaultTimer_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S311>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: FuelPresLow_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(42, rtb_RelationalOperator5_l);
      UpdateFault(42);
    }

    /* S-Function Block: <S345>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_bak2_DWork.s345_motohawk_delta_time_DWORK1,
         NULL);
      rtb_motohawk_delta_time_es = ((real_T) delta) * 0.000001;
    }

    /* Switch: '<S345>/Switch' incorporates:
     *  Constant: '<S345>/Constant'
     *  Logic: '<S311>/Logical Operator2'
     *  RelationalOperator: '<S311>/Relational Operator3'
     *  S-Function (motohawk_sfun_calibration): '<S311>/motohawk_calibration3'
     *  S-Function (motohawk_sfun_data_read): '<S345>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S345>/motohawk_delta_time'
     *  Sum: '<S345>/Sum'
     */
    if (rtb_LogicalOperator3_kf && (rtb_motohawk_interpolation_1d3_i >
         (FuelPres_DeltaTolerance_DataStore()))) {
      rtb_motohawk_interpolation_1d3_i = rtb_motohawk_delta_time_es +
        FuelPresHigh_FaultTimer_DataStore();
    } else {
      rtb_motohawk_interpolation_1d3_i = 0.0;
    }

    /* End of Switch: '<S345>/Switch' */

    /* RelationalOperator: '<S311>/Relational Operator2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S311>/motohawk_calibration1'
     */
    rtb_RelationalOperator2_on = ((rtb_motohawk_interpolation_1d3_i >
      (FuelPres_FaultTimer_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S311>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: FuelPresHigh_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(41, rtb_RelationalOperator2_on);
      UpdateFault(41);
    }

    /* Saturate: '<S345>/Saturation' */
    rtb_Saturation_la = rtb_motohawk_interpolation_1d3_i >= 16000.0 ? 16000.0 :
      rtb_motohawk_interpolation_1d3_i <= 0.0 ? 0.0 :
      rtb_motohawk_interpolation_1d3_i;

    /* S-Function (motohawk_sfun_data_write): '<S345>/motohawk_data_write' */
    /* Write to Data Storage as scalar: FuelPresHigh_FaultTimer */
    {
      FuelPresHigh_FaultTimer_DataStore() = rtb_Saturation_la;
    }

    /* Saturate: '<S346>/Saturation' */
    rtb_Saturation_f = rtb_UnitDelay4_o >= 16000.0 ? 16000.0 : rtb_UnitDelay4_o <=
      0.0 ? 0.0 : rtb_UnitDelay4_o;

    /* S-Function (motohawk_sfun_data_write): '<S346>/motohawk_data_write' */
    /* Write to Data Storage as scalar: FuelPresLow_FaultTimer */
    {
      FuelPresLow_FaultTimer_DataStore() = rtb_Saturation_f;
    }

    /* Logic: '<S306>/Logical Operator3' incorporates:
     *  Logic: '<S306>/Logical Operator1'
     *  S-Function (motohawk_sfun_fault_status): '<S306>/motohawk_fault_status'
     *  S-Function (motohawk_sfun_fault_status): '<S306>/motohawk_fault_status1'
     */
    rtb_LogicalOperator3_kf = !(IsFaultActive(15) || IsFaultActive(16));

    /* RelationalOperator: '<S319>/RelOp' incorporates:
     *  Constant: '<S319>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S306>/motohawk_data_read'
     */
    rtb_RelOp_ie = (((uint8_T)EngineState_DataStore()) == 3);

    /* Logic: '<S306>/Logical Operator2' incorporates:
     *  RelationalOperator: '<S306>/Relational Operator3'
     *  S-Function (motohawk_sfun_calibration): '<S306>/motohawk_calibration2'
     */
    rtb_LogicalOperator2_de = ((rtb_LogicalOperator3_kf && rtb_RelOp_ie &&
      (BaseEngineController_A02_bak2_B.s637_Merge >=
       (TempOverheat_Fault_DataStore()))));

    /* S-Function (motohawk_sfun_fault_def): '<S306>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: ECTOverTempFault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(14, rtb_LogicalOperator2_de);
      UpdateFault(14);
    }

    /* Logic: '<S306>/Logical Operator4' incorporates:
     *  RelationalOperator: '<S306>/Relational Operator2'
     *  S-Function (motohawk_sfun_calibration): '<S306>/motohawk_calibration3'
     */
    rtb_LogicalOperator4_lq = ((rtb_LogicalOperator3_kf && rtb_RelOp_ie &&
      (BaseEngineController_A02_bak2_B.s637_Merge >=
       (TempOverheatSevere_Fault_DataStore()))));

    /* S-Function (motohawk_sfun_fault_def): '<S306>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: ECTSevereOverTempFault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(17, rtb_LogicalOperator4_lq);
      UpdateFault(17);
    }

    /* S-Function (motohawk_sfun_calibration): '<S306>/motohawk_calibration1' */
    rtb_motohawk_interpolation_1d3_i = (TempOverheat_Warn_DataStore());

    /* Gain: '<S307>/inj//min to inj//hr' incorporates:
     *  DataTypeConversion: '<S307>/Data Type Conversion'
     *  Product: '<S307>/RPM to inj//min'
     *  S-Function (motohawk_sfun_data_read): '<S307>/Number of Combustion Events Per Revolution'
     */
    rtb_Product1_f = BaseEngineController_A02_bak2_B.s538_Sum1 * (real_T)
      ((uint8_T)CombEventsPerRev_DataStore()) * 60.0;

    /* Gain: '<S320>/Gain' */
    rtb_motohawk_interpolation_1d3_i = 0.01 *
      BaseEngineController_A02_bak2_B.s560_Merge;

    /* Gain: '<S307>/g to mg' incorporates:
     *  Constant: '<S320>/ '
     *  Constant: '<S320>/ Ethanol density (g//ml)'
     *  Constant: '<S320>/ Gasoline density (g//ml)'
     *  Product: '<S320>/Product1'
     *  Product: '<S320>/Product2'
     *  Sum: '<S320>/Add'
     *  Sum: '<S320>/Add1'
     */
    rtb_Product1_i = ((1.0 - rtb_motohawk_interpolation_1d3_i) * 0.737 + 0.789 *
                      rtb_motohawk_interpolation_1d3_i) * 1000.0;
    for (i = 0; i < 8; i++) {
      /* Gain: '<S307>/ml//hr to gal//hr' incorporates:
       *  Product: '<S307>/Mass flow to Volume flow mg//hr to ml//hr'
       *  Product: '<S307>/inj//hr to mg//hr'
       */
      u = rtb_Product1_f * BaseEngineController_A02_bak2_B.s111_FPC[i] /
        rtb_Product1_i * 0.00026417205263729591;

      /* RelationalOperator: '<S307>/Relational Operator7' incorporates:
       *  Constant: '<S307>/Min fuel flow  for calc'
       */
      rtb_LogicalOperator3_iu[i] = (u > 0.1);

      /* Gain: '<S307>/ml//hr to gal//hr' */
      rtb_Product2_d[i] = u;
    }

    /* Outputs for Enabled SubSystem: '<S307>/Multiply and Divide, avoiding divde by zero1' incorporates:
     *  EnablePort: '<S322>/Enable'
     */
    if (rtb_LogicalOperator3_iu[0] || rtb_LogicalOperator3_iu[1] ||
        rtb_LogicalOperator3_iu[2] || rtb_LogicalOperator3_iu[3] ||
        rtb_LogicalOperator3_iu[4] || rtb_LogicalOperator3_iu[5] ||
        rtb_LogicalOperator3_iu[6] || rtb_LogicalOperator3_iu[7]) {
      /* Product: '<S322>/charge mass' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S307>/motohawk_calibration'
       */
      for (i = 0; i < 8; i++) {
        BaseEngineController_A02_bak2_B.s322_chargemass[i] =
          (VehicleSpeedTemp_DataStore()) / rtb_Product2_d[i];
      }

      /* End of Product: '<S322>/charge mass' */
    }

    /* End of Outputs for SubSystem: '<S307>/Multiply and Divide, avoiding divde by zero1' */

    /* Switch: '<S307>/Default (if no flow)' incorporates:
     *  Constant: '<S307>/Default value'
     */
    for (i = 0; i < 8; i++) {
      if (rtb_LogicalOperator3_iu[i]) {
        BaseEngineController_A02_bak2_B.s307_Defaultifnoflow[i] =
          BaseEngineController_A02_bak2_B.s322_chargemass[i];
      } else {
        BaseEngineController_A02_bak2_B.s307_Defaultifnoflow[i] = 0.0;
      }
    }

    /* End of Switch: '<S307>/Default (if no flow)' */

    /* S-Function Block: <S321>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_bak2_DWork.s321_motohawk_delta_time_DWORK1,
         NULL);
      rtb_motohawk_interpolation_1d3_i = ((real_T) delta) * 0.000001;
    }

    /* Product: '<S321>/Product' incorporates:
     *  MinMax: '<S321>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S321>/motohawk_calibration2'
     */
    rtb_motohawk_interpolation_1d3_i /= (rtb_motohawk_interpolation_1d3_i >=
      (FuelEconomy_FilterC_DataStore())) || rtIsNaN
      ((FuelEconomy_FilterC_DataStore())) ? rtb_motohawk_interpolation_1d3_i :
      (FuelEconomy_FilterC_DataStore());

    /* Sum: '<S323>/Sum' incorporates:
     *  Constant: '<S323>/Constant'
     */
    rtb_Product1_f = 1.0 - rtb_motohawk_interpolation_1d3_i;

    /* Sum: '<S323>/Sum1' incorporates:
     *  Product: '<S323>/Product'
     *  Product: '<S323>/Product1'
     *  UnitDelay: '<S323>/Unit Delay'
     */
    for (i = 0; i < 8; i++) {
      BaseEngineController_A02_bak2_B.s323_Sum1[i] =
        BaseEngineController_A02_bak2_B.s307_Defaultifnoflow[i] *
        rtb_motohawk_interpolation_1d3_i + rtb_Product1_f *
        BaseEngineController_A02_bak2_DWork.s323_UnitDelay_DSTATE[i];
    }

    /* End of Sum: '<S323>/Sum1' */

    /* S-Function Block: <S325>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_A02_bak2_DWork.s325_motohawk_delta_time_DWORK1,
         NULL);
      rtb_motohawk_delta_time_ag = ((real_T) delta) * 0.000001;
    }

    /* Logic: '<S308>/Logical Operator3' incorporates:
     *  Logic: '<S308>/Logical Operator1'
     *  S-Function (motohawk_sfun_fault_status): '<S308>/motohawk_fault_status'
     *  S-Function (motohawk_sfun_fault_status): '<S308>/motohawk_fault_status1'
     */
    rtb_RelationalOperator2_m = !(IsFaultActive(75) || IsFaultActive(76));

    /* RelationalOperator: '<S324>/RelOp' incorporates:
     *  Constant: '<S324>/Constant'
     */
    rtb_RelOp_em = (BaseEngineController_A02_bak2_B.s418_State == 3);

    /* S-Function Block: <S308>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_e = TableInterpolation1D_real_T
        (BaseEngineController_A02_bak2_B.s390_motohawk_prelookup1, (real_T *)
         ((MinOilPressure_FaultTbl_DataStore())), 9);
      (MinOilPressure_Fault_DataStore()) = rtb_motohawk_interpolation_1d_e;
    }

    /* Switch: '<S325>/Switch' incorporates:
     *  Constant: '<S325>/Constant'
     *  Logic: '<S308>/Logical Operator4'
     *  RelationalOperator: '<S308>/Relational Operator2'
     *  S-Function (motohawk_sfun_data_read): '<S325>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S325>/motohawk_delta_time'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S308>/motohawk_interpolation_1d'
     *  Sum: '<S325>/Sum'
     */
    if (rtb_RelationalOperator2_m && rtb_RelOp_em &&
        (BaseEngineController_A02_bak2_B.s599_Merge <
         rtb_motohawk_interpolation_1d_e)) {
      rtb_motohawk_interpolation_1d3_i = rtb_motohawk_delta_time_ag +
        OilPresFaultTimer_DataStore();
    } else {
      rtb_motohawk_interpolation_1d3_i = 0.0;
    }

    /* End of Switch: '<S325>/Switch' */
    /* RelationalOperator: '<S308>/Relational Operator5' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S308>/motohawk_calibration1'
     */
    rtb_RelationalOperator5_m = ((rtb_motohawk_interpolation_1d3_i >
      (NoOilPres_FaultTime_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S308>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: NoOil_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(69, rtb_RelationalOperator5_m);
      UpdateFault(69);
    }

    /* Saturate: '<S325>/Saturation' */
    rtb_Saturation_kh = rtb_motohawk_interpolation_1d3_i >= 16000.0 ? 16000.0 :
      rtb_motohawk_interpolation_1d3_i <= 0.0 ? 0.0 :
      rtb_motohawk_interpolation_1d3_i;

    /* S-Function (motohawk_sfun_data_write): '<S325>/motohawk_data_write' */
    /* Write to Data Storage as scalar: OilPresFaultTimer */
    {
      OilPresFaultTimer_DataStore() = rtb_Saturation_kh;
    }

    /* S-Function Block: <S308>/motohawk_interpolation_1d3 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d3_i = TableInterpolation1D_real_T
        (BaseEngineController_A02_bak2_B.s390_motohawk_prelookup1, (real_T *)
         ((MinOilPressure_WarnTbl_DataStore())), 9);
      (MinOilPressure_Warn_DataStore()) = rtb_motohawk_interpolation_1d3_i;
    }

    /* Update for UnitDelay: '<S336>/Unit Delay' */
    BaseEngineController_A02_bak2_DWork.s336_UnitDelay_DSTATE =
      rtb_LogicalOperator2_jv;

    /* Update for UnitDelay: '<S337>/Unit Delay' */
    BaseEngineController_A02_bak2_DWork.s337_UnitDelay_DSTATE = rtb_Switch1_c3;

    /* Update for UnitDelay: '<S342>/Unit Delay' */
    BaseEngineController_A02_bak2_DWork.s342_UnitDelay_DSTATE = rtb_Switch1_k;

    /* Update for UnitDelay: '<S343>/Unit Delay' */
    BaseEngineController_A02_bak2_DWork.s343_UnitDelay_DSTATE = rtb_Switch1_m;

    /* Update for UnitDelay: '<S338>/Unit Delay' */
    BaseEngineController_A02_bak2_DWork.s338_UnitDelay_DSTATE = rtb_Switch1_c;

    /* Update for UnitDelay: '<S344>/Unit Delay' */
    BaseEngineController_A02_bak2_DWork.s344_UnitDelay_DSTATE = rtb_Switch1_mq;

    /* Update for UnitDelay: '<S323>/Unit Delay' */
    memcpy((void *)BaseEngineController_A02_bak2_DWork.s323_UnitDelay_DSTATE,
           (void *)(&BaseEngineController_A02_bak2_B.s323_Sum1[0]), sizeof
           (real_T) << 3U);

    /* End of Outputs for SubSystem: '<S3>/Diagnostics' */
  }

  /* Sum: '<S357>/Sum1' */
  BaseEngineController_A02_bak2_B.s357_Sum1 =
    BaseEngineController_A02_bak2_B.s515_Merge -
    BaseEngineController_A02_bak2_B.s354_ModelAirMassFlowRate;

  /* Outputs for Enabled SubSystem: '<S360>/Subsystem' incorporates:
   *  EnablePort: '<S361>/Enable'
   */
  /* RelationalOperator: '<S360>/Relational Operator' incorporates:
   *  Constant: '<S360>/Constant'
   */
  if (0.0 != BaseEngineController_A02_bak2_B.s354_ModelAirMassFlowRate) {
    /* Product: '<S361>/Product1' */
    BaseEngineController_A02_bak2_B.s361_Product1 =
      BaseEngineController_A02_bak2_B.s357_Sum1 /
      BaseEngineController_A02_bak2_B.s354_ModelAirMassFlowRate;
  }

  /* End of RelationalOperator: '<S360>/Relational Operator' */
  /* End of Outputs for SubSystem: '<S360>/Subsystem' */
  /* Product: '<S357>/Product0' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S357>/motohawk_calibration2'
   */
  rtb_Product0 = BaseEngineController_A02_bak2_B.s361_Product1 *
    (VEAdaptGain_DataStore());

  /* DataTypeConversion: '<S357>/Data Type Conversion' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S357>/motohawk_calibration'
   */
  rtb_RelOp_em = (((uint8_T)(VEAdaptEnable_DataStore())) != 0);

  /* Abs: '<S357>/Abs' */
  rtb_Abs_c = fabs(BaseEngineController_A02_bak2_B.s361_Product1);

  /* Logic: '<S357>/Logical Operator' incorporates:
   *  RelationalOperator: '<S357>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S357>/motohawk_calibration1'
   */
  BaseEngineController_A02_bak2_B.s357_LogicalOperator = ((rtb_RelOp_em &&
    BaseEngineController_A02_bak2_B.s364_LogicalOperator && (rtb_Abs_c <=
    (VEAdaptDelta_DataStore()))));

  /* Outputs for Enabled SubSystem: '<S357>/Adapt VolEff Map' incorporates:
   *  EnablePort: '<S359>/Enable'
   */
  if (BaseEngineController_A02_bak2_B.s357_LogicalOperator) {
    /* S-Function Block: <S359>/motohawk_adapt_table */
    /* Adapt 2-D Table */
    {
      uint32_T _row = ((PortPressRatio17Idx_DataStore())) >> 9;
      uint32_T _row_frac = (((PortPressRatio17Idx_DataStore())) & 0x01FF) >> 7;
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
          _new = (VolEffMap_DataStore())[_row][_col] + rtb_Product0;
          if (_new > (VoleffAdaptMax_DataStore()))
            _new = (VoleffAdaptMax_DataStore());
          if (_new < (VoleffAdaptMin_DataStore()))
            _new = (VoleffAdaptMin_DataStore());
          (VolEffMap_DataStore())[_row][_col] = _new;
        } else if (_col_frac == 3) {
          _new = (VolEffMap_DataStore())[_row][_col+1] + rtb_Product0;
          if (_new > (VoleffAdaptMax_DataStore()))
            _new = (VoleffAdaptMax_DataStore());
          if (_new < (VoleffAdaptMin_DataStore()))
            _new = (VoleffAdaptMin_DataStore());
          (VolEffMap_DataStore())[_row][_col+1] = _new;
        } else {
          real_T _half = (rtb_Product0) / 2;
          _new = (VolEffMap_DataStore())[_row][_col] + _half;
          if (_new > (VoleffAdaptMax_DataStore()))
            _new = (VoleffAdaptMax_DataStore());
          if (_new < (VoleffAdaptMin_DataStore()))
            _new = (VoleffAdaptMin_DataStore());
          (VolEffMap_DataStore())[_row][_col] = _new;
          _new = (VolEffMap_DataStore())[_row][_col+1] + _half;
          if (_new > (VoleffAdaptMax_DataStore()))
            _new = (VoleffAdaptMax_DataStore());
          if (_new < (VoleffAdaptMin_DataStore()))
            _new = (VoleffAdaptMin_DataStore());
          (VolEffMap_DataStore())[_row][_col+1] = _new;
        }
      } else {
        if (_col_frac == 3) {
          _col++;
          _col_frac = 0;
        }

        if (_col_frac == 0) {
          real_T _half = (rtb_Product0) / 2;
          _new = (VolEffMap_DataStore())[_row][_col] + _half;
          if (_new > (VoleffAdaptMax_DataStore()))
            _new = (VoleffAdaptMax_DataStore());
          if (_new < (VoleffAdaptMin_DataStore()))
            _new = (VoleffAdaptMin_DataStore());
          (VolEffMap_DataStore())[_row][_col] = _new;
          _new = (VolEffMap_DataStore())[_row+1][_col] + _half;
          if (_new > (VoleffAdaptMax_DataStore()))
            _new = (VoleffAdaptMax_DataStore());
          if (_new < (VoleffAdaptMin_DataStore()))
            _new = (VoleffAdaptMin_DataStore());
          (VolEffMap_DataStore())[_row+1][_col] = _new;
        } else {
          real_T _quarter = (rtb_Product0) / 4;
          _new = (VolEffMap_DataStore())[_row][_col] + _quarter;
          if (_new > (VoleffAdaptMax_DataStore()))
            _new = (VoleffAdaptMax_DataStore());
          if (_new < (VoleffAdaptMin_DataStore()))
            _new = (VoleffAdaptMin_DataStore());
          (VolEffMap_DataStore())[_row][_col] = _new;
          _new = (VolEffMap_DataStore())[_row+1][_col] + _quarter;
          if (_new > (VoleffAdaptMax_DataStore()))
            _new = (VoleffAdaptMax_DataStore());
          if (_new < (VoleffAdaptMin_DataStore()))
            _new = (VoleffAdaptMin_DataStore());
          (VolEffMap_DataStore())[_row+1][_col] = _new;
          _new = (VolEffMap_DataStore())[_row][_col+1] + _quarter;
          if (_new > (VoleffAdaptMax_DataStore()))
            _new = (VoleffAdaptMax_DataStore());
          if (_new < (VoleffAdaptMin_DataStore()))
            _new = (VoleffAdaptMin_DataStore());
          (VolEffMap_DataStore())[_row][_col+1] = _new;
          _new = (VolEffMap_DataStore())[_row+1][_col+1] + _quarter;
          if (_new > (VoleffAdaptMax_DataStore()))
            _new = (VoleffAdaptMax_DataStore());
          if (_new < (VoleffAdaptMin_DataStore()))
            _new = (VoleffAdaptMin_DataStore());
          (VolEffMap_DataStore())[_row+1][_col+1] = _new;
        }
      }
    }
  }

  /* End of Outputs for SubSystem: '<S357>/Adapt VolEff Map' */

  /* UnitDelay: '<S367>/Unit Delay1' */
  rtb_Product1_f = BaseEngineController_A02_bak2_DWork.s367_UnitDelay1_DSTATE;

  /* UnitDelay: '<S367>/Unit Delay3' */
  rtb_Product1_i = BaseEngineController_A02_bak2_DWork.s367_UnitDelay3_DSTATE;

  /* UnitDelay: '<S367>/Unit Delay4' */
  rtb_UnitDelay4_o = BaseEngineController_A02_bak2_DWork.s367_UnitDelay4_DSTATE;

  /* UnitDelay: '<S368>/Unit Delay1' */
  rtb_Sum1_j = BaseEngineController_A02_bak2_DWork.s368_UnitDelay1_DSTATE;

  /* UnitDelay: '<S368>/Unit Delay3' */
  rtb_Merge_ek = BaseEngineController_A02_bak2_DWork.s368_UnitDelay3_DSTATE;

  /* UnitDelay: '<S368>/Unit Delay4' */
  rtb_Merge_hd = BaseEngineController_A02_bak2_DWork.s368_UnitDelay4_DSTATE;

  /* S-Function Block: <S379>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_A02_bak2_DWork.s379_motohawk_delta_time_DWORK1,
       NULL);
    rtb_motohawk_delta_time_k = ((real_T) delta) * 0.000001;
  }

  /* Sum: '<S379>/Sum' incorporates:
   *  Product: '<S379>/Product'
   *  S-Function (motohawk_sfun_delta_time): '<S379>/motohawk_delta_time'
   */
  rtb_Abs_c = BaseEngineController_A02_bak2_B.s376_TorquetoPower *
    rtb_motohawk_delta_time_k + BaseEngineController_A02_bak2_B.s379_Switch1;

  /* MinMax: '<S381>/MinMax' incorporates:
   *  Constant: '<S376>/Constant'
   */
  rtb_Abs_c = rtb_Abs_c >= 0.0 ? rtb_Abs_c : 0.0;

  /* MinMax: '<S381>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S376>/motohawk_calibration'
   */
  minV_3 = (rtb_Abs_c <= (IndWorkMax_DataStore())) || rtIsNaN
    ((IndWorkMax_DataStore())) ? rtb_Abs_c : (IndWorkMax_DataStore());

  /* Sum: '<S393>/Sum' */
  rtb_Abs_c = BaseEngineController_A02_bak2_B.s668_Merge -
    BaseEngineController_A02_bak2_B.s678_Merge;

  /* Abs: '<S393>/Abs' */
  rtb_Abs_c = fabs(rtb_Abs_c);

  /* RelationalOperator: '<S393>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S393>/motohawk_calibration2'
   */
  rtb_RelationalOperator3_ir = ((rtb_Abs_c > (APP1_APP2_Max_Deviation_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S393>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: APP_Sensors_Conflict */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(8, rtb_RelationalOperator3_ir);
    UpdateFault(8);
  }

  /* S-Function (motohawk_sfun_data_write): '<S399>/motohawk_data_write' */
  /* Write to Data Storage as scalar: EngineState */
  {
    EngineState_DataStore() = BaseEngineController_A02_bak2_B.s418_State;
  }

  /* Sum: '<S403>/Sum' */
  rtb_Abs_c = BaseEngineController_A02_bak2_B.s688_Merge -
    BaseEngineController_A02_bak2_B.s698_Merge;

  /* Abs: '<S403>/Abs' */
  rtb_Abs_c = fabs(rtb_Abs_c);

  /* RelationalOperator: '<S403>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S403>/motohawk_calibration2'
   */
  rtb_RelationalOperator3_ox = ((rtb_Abs_c > (TPS1_TPS2_Max_Deviation_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S403>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: TPS_Sensors_Conflict */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(87, rtb_RelationalOperator3_ox);
    UpdateFault(87);
  }

  /* Saturate: '<S421>/Saturation' */
  rtb_Saturation_j = BaseEngineController_A02_bak2_B.s421_Sum >= 16000.0 ?
    16000.0 : BaseEngineController_A02_bak2_B.s421_Sum <= 0.0 ? 0.0 :
    BaseEngineController_A02_bak2_B.s421_Sum;

  /* S-Function (motohawk_sfun_data_write): '<S421>/motohawk_data_write' */
  /* Write to Data Storage as scalar: TimeSinceKeyOnTimer */
  {
    TimeSinceKeyOnTimer_DataStore() = rtb_Saturation_j;
  }

  /* Saturate: '<S423>/Saturation' */
  rtb_Saturation_b = BaseEngineController_A02_bak2_B.s423_Switch >= 16000.0 ?
    16000.0 : BaseEngineController_A02_bak2_B.s423_Switch <= 0.0 ? 0.0 :
    BaseEngineController_A02_bak2_B.s423_Switch;

  /* S-Function (motohawk_sfun_data_write): '<S423>/motohawk_data_write' */
  /* Write to Data Storage as scalar: TimeSinceRunTimer */
  {
    TimeSinceRunTimer_DataStore() = rtb_Saturation_b;
  }

  /* Saturate: '<S425>/Saturation' */
  rtb_Saturation_m = BaseEngineController_A02_bak2_B.s425_Switch >= 16000.0 ?
    16000.0 : BaseEngineController_A02_bak2_B.s425_Switch <= 0.0 ? 0.0 :
    BaseEngineController_A02_bak2_B.s425_Switch;

  /* S-Function (motohawk_sfun_data_write): '<S425>/motohawk_data_write' */
  /* Write to Data Storage as scalar: TimeSinceStallTimer */
  {
    TimeSinceStallTimer_DataStore() = rtb_Saturation_m;
  }

  /* Switch: '<S432>/Switch' incorporates:
   *  Constant: '<S432>/Constant2'
   */
  if (rtb_RelationalOperator_bd) {
    rtb_Switch_mv = 0U;
  } else {
    rtb_Switch_mv = rtb_Sum_fc;
  }

  /* End of Switch: '<S432>/Switch' */

  /* Saturate: '<S473>/Saturation' */
  rtb_Saturation_oj = rtb_Switch_ns >= 86400.0 ? 86400.0 : rtb_Switch_ns <= 0.0 ?
    0.0 : rtb_Switch_ns;

  /* S-Function (motohawk_sfun_data_write): '<S473>/motohawk_data_write' */
  /* Write to Data Storage as scalar: ButtonDelay1 */
  {
    ButtonDelay1_DataStore() = rtb_Saturation_oj;
  }

  /* Saturate: '<S474>/Saturation' */
  rtb_Saturation_kt = rtb_Switch_dx >= 86400.0 ? 86400.0 : rtb_Switch_dx <= 0.0 ?
    0.0 : rtb_Switch_dx;

  /* S-Function (motohawk_sfun_data_write): '<S474>/motohawk_data_write' */
  /* Write to Data Storage as scalar: ButtonDelay2 */
  {
    ButtonDelay2_DataStore() = rtb_Saturation_kt;
  }

  /* Saturate: '<S475>/Saturation' */
  rtb_Saturation_g = rtb_Switch_e >= 86400.0 ? 86400.0 : rtb_Switch_e <= 0.0 ?
    0.0 : rtb_Switch_e;

  /* S-Function (motohawk_sfun_data_write): '<S475>/motohawk_data_write' */
  /* Write to Data Storage as scalar: ButtonDelay3 */
  {
    ButtonDelay3_DataStore() = rtb_Saturation_g;
  }

  /* Saturate: '<S476>/Saturation' */
  rtb_Saturation_a = rtb_Switch_lf >= 86400.0 ? 86400.0 : rtb_Switch_lf <= 0.0 ?
    0.0 : rtb_Switch_lf;

  /* S-Function (motohawk_sfun_data_write): '<S476>/motohawk_data_write' */
  /* Write to Data Storage as scalar: ButtonDelay4 */
  {
    ButtonDelay4_DataStore() = rtb_Saturation_a;
  }

  /* Saturate: '<S477>/Saturation' */
  rtb_Saturation_e = rtb_Switch_c >= 86400.0 ? 86400.0 : rtb_Switch_c <= 0.0 ?
    0.0 : rtb_Switch_c;

  /* S-Function (motohawk_sfun_data_write): '<S477>/motohawk_data_write' */
  /* Write to Data Storage as scalar: ButtonDelay5 */
  {
    ButtonDelay5_DataStore() = rtb_Saturation_e;
  }

  /* Saturate: '<S492>/Saturation' */
  rtb_Saturation_el = rtb_Switch_n >= 86400.0 ? 86400.0 : rtb_Switch_n <= 0.0 ?
    0.0 : rtb_Switch_n;

  /* S-Function (motohawk_sfun_data_write): '<S492>/motohawk_data_write' */
  /* Write to Data Storage as scalar: CruiseOnDelay */
  {
    CruiseOnDelay_DataStore() = rtb_Saturation_el;
  }

  /* Saturate: '<S497>/Saturation' */
  rtb_Saturation_jz = rtb_Switch_lt >= 86400.0 ? 86400.0 : rtb_Switch_lt <= 0.0 ?
    0.0 : rtb_Switch_lt;

  /* S-Function (motohawk_sfun_data_write): '<S497>/motohawk_data_write' */
  /* Write to Data Storage as scalar: CruiseRSM_SETPDelay */
  {
    CruiseRSM_SETPDelay_DataStore() = rtb_Saturation_jz;
  }

  /* Saturate: '<S502>/Saturation' */
  rtb_Saturation_o2 = rtb_Switch_m >= 86400.0 ? 86400.0 : rtb_Switch_m <= 0.0 ?
    0.0 : rtb_Switch_m;

  /* S-Function (motohawk_sfun_data_write): '<S502>/motohawk_data_write' */
  /* Write to Data Storage as scalar: CruiseSETMDelay */
  {
    CruiseSETMDelay_DataStore() = rtb_Saturation_o2;
  }

  /* Logic: '<S447>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S447>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S447>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S447>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_bh = ((MPRD_DataStore() &&
    (BaseEngineController_A02_bak2_B.s434_Gain > (MAFMax_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S447>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: MAFRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(59, rtb_LogicalOperator2_bh);
    UpdateFault(59);
  }

  /* Logic: '<S447>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S447>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S447>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S447>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_h = ((MPRD_DataStore() &&
    (BaseEngineController_A02_bak2_B.s434_Gain < (MAFMin_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S447>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: MAFRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(60, rtb_LogicalOperator3_h);
    UpdateFault(60);
  }

  /* Saturate: '<S522>/Saturation' */
  rtb_Saturation_i = rtb_Switch_d5 >= 86400.0 ? 86400.0 : rtb_Switch_d5 <= 0.0 ?
    0.0 : rtb_Switch_d5;

  /* S-Function (motohawk_sfun_data_write): '<S522>/motohawk_data_write' */
  /* Write to Data Storage as scalar: ScrambleDelay */
  {
    ScrambleDelay_DataStore() = rtb_Saturation_i;
  }

  /* Saturate: '<S527>/Saturation' */
  rtb_Saturation_i4 = rtb_Switch_du >= 86400.0 ? 86400.0 : rtb_Switch_du <= 0.0 ?
    0.0 : rtb_Switch_du;

  /* S-Function (motohawk_sfun_data_write): '<S527>/motohawk_data_write' */
  /* Write to Data Storage as scalar: TwoStepTimer */
  {
    TwoStepTimer_DataStore() = rtb_Saturation_i4;
  }

  /* RelationalOperator: '<S435>/Relational Operator' incorporates:
   *  Constant: '<S435>/Constant'
   *  S-Function (motohawk_sfun_calibration): '<S435>/motohawk_calibration'
   */
  rtb_RelationalOperator_gh = ((0 != ((uint16_T)(PseudoRPM_DataStore()))));

  /* S-Function Block: <S435>/motohawk_encoder_pseudo */
  {
    S_EncoderResourceAttributes EncoderAttribsObj;
    EncoderAttribsObj.uValidAttributesMask = USE_ENC_CONDITION;
    if (rtb_RelationalOperator_gh) {
      EncoderAttribsObj.u2PseudoRPM = (PseudoRPM_DataStore());
      EncoderAttribsObj.eResourceCond = ENCODER_ENABLED_INTERNAL;
      EncoderAttribsObj.uValidAttributesMask |= USE_ENC_PSEUDO_RPM;
    } else {
      EncoderAttribsObj.eResourceCond = ENCODER_ENABLE_EXTERNAL;
    }

    SetResourceAttributes(RES_ENCODER, &EncoderAttribsObj, BEHAVIOUR_ENCODER);
  }

  /* DataTypeConversion: '<S435>/Data Type Conversion3' incorporates:
   *  Gain: '<S435>/Gain'
   *  S-Function (motohawk_sfun_calibration): '<S435>/motohawk_calibration1'
   */
  rtb_DesiredLambda_idx = 16.0 * (EngineToEncoderOffset_DataStore());
  if (rtIsNaN(rtb_DesiredLambda_idx) || rtIsInf(rtb_DesiredLambda_idx)) {
    u = 0.0;
  } else {
    u = rtb_DesiredLambda_idx < 0.0 ? ceil(rtb_DesiredLambda_idx) : floor
      (rtb_DesiredLambda_idx);
    u = fmod(u, 65536.0);
  }

  rtb_DataTypeConversion3_e = (int16_T)(u < 0.0 ? (int16_T)-(int16_T)(uint16_T)
    -u : (int16_T)(uint16_T)u);

  /* End of DataTypeConversion: '<S435>/Data Type Conversion3' */
  /* S-Function Block: <S435>/motohawk_encoder_offset */
  {
    S_EncoderResourceAttributes encoder_attributes;
    encoder_attributes.uValidAttributesMask = USE_ENC_TDC_OFFSET;
    encoder_attributes.s2TDCOffset = rtb_DataTypeConversion3_e;
    SetResourceAttributes(RES_ENCODER, &encoder_attributes, BEHAVIOUR_ENCODER);
  }

  /* RelationalOperator: '<S534>/RelOp' incorporates:
   *  Constant: '<S534>/Constant'
   */
  rtb_RelOp_em = (BaseEngineController_A02_bak2_B.s537_Sum > 100U);

  /* S-Function Block: <S435>/motohawk_encoder_fault */
  {
    extern uint8_T motohawk_encoder_fault;
    BaseEngineController_A02_bak2_B.s435_motohawk_encoder_fault =
      motohawk_encoder_fault;
  }

  /* Logic: '<S530>/Logical Operator' incorporates:
   *  Constant: '<S536>/Constant'
   *  RelationalOperator: '<S536>/RelOp'
   */
  rtb_LogicalOperator_lq = ((rtb_RelOp_em &&
    (BaseEngineController_A02_bak2_B.s435_motohawk_encoder_fault == 1)));

  /* S-Function (motohawk_sfun_fault_def): '<S530>/motohawk_fault_def' */

  /* Set Fault Suspected Status: CrankSyncFault */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(12, rtb_LogicalOperator_lq);
    UpdateFault(12);
  }

  /* Logic: '<S530>/Logical Operator1' incorporates:
   *  Constant: '<S535>/Constant'
   *  RelationalOperator: '<S535>/RelOp'
   */
  rtb_LogicalOperator1_fk = ((rtb_RelOp_em &&
    (BaseEngineController_A02_bak2_B.s435_motohawk_encoder_fault == 3)));

  /* S-Function (motohawk_sfun_fault_def): '<S530>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: CrankEdgesFault */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(11, rtb_LogicalOperator1_fk);
    UpdateFault(11);
  }

  /* Logic: '<S530>/Logical Operator2' incorporates:
   *  Constant: '<S532>/Constant'
   *  RelationalOperator: '<S532>/RelOp'
   */
  rtb_LogicalOperator2_ok = ((rtb_RelOp_em &&
    (BaseEngineController_A02_bak2_B.s435_motohawk_encoder_fault == 4)));

  /* S-Function (motohawk_sfun_fault_def): '<S530>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: CamEdgesFault */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(9, rtb_LogicalOperator2_ok);
    UpdateFault(9);
  }

  /* Logic: '<S530>/Logical Operator3' incorporates:
   *  Constant: '<S533>/Constant'
   *  RelationalOperator: '<S533>/RelOp'
   */
  rtb_LogicalOperator3_b = ((rtb_RelOp_em &&
    (BaseEngineController_A02_bak2_B.s435_motohawk_encoder_fault == 5)));

  /* S-Function (motohawk_sfun_fault_def): '<S530>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: CamSyncFault */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(10, rtb_LogicalOperator3_b);
    UpdateFault(10);
  }

  /* S-Function Block: <S435>/motohawk_encoder_state */
  {
    extern uint8_T motohawk_encoder_status;
    BaseEngineController_A02_bak2_B.s435_motohawk_encoder_state =
      motohawk_encoder_status;
  }

  /* Logic: '<S539>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S539>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S539>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S539>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_c = ((MPRD_DataStore() && ((real_T)
    rtb_DataTypeConversion_hh > (ACPresInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S539>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: ACPresRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(2, rtb_LogicalOperator2_c);
    UpdateFault(2);
  }

  /* Logic: '<S539>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S539>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S539>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S539>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_m = ((MPRD_DataStore() && ((real_T)
    rtb_DataTypeConversion_hh < (ACPresInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S539>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: ACPresRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(3, rtb_LogicalOperator3_m);
    UpdateFault(3);
  }

  /* Logic: '<S540>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S540>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S540>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S540>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_ol = ((MPRD_DataStore() && (rtb_DataTypeConversion_i3 >
    (FuelSensInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S540>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: FuelSensRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(45, rtb_LogicalOperator2_ol);
    UpdateFault(45);
  }

  /* Logic: '<S540>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S540>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S540>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S540>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_l = ((MPRD_DataStore() && (rtb_DataTypeConversion_i3 <
    (FuelSensInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S540>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: FuelSensRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(46, rtb_LogicalOperator3_l);
    UpdateFault(46);
  }

  /* Logic: '<S541>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S541>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S541>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S541>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_pm = ((MPRD_DataStore() && ((real_T)
    rtb_DataTypeConversion_jw > (FuelPresInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S541>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: FuelPresRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(43, rtb_LogicalOperator2_pm);
    UpdateFault(43);
  }

  /* Logic: '<S541>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S541>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S541>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S541>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_p = ((MPRD_DataStore() && ((real_T)
    rtb_DataTypeConversion_jw < (FuelPresInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S541>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: FuelPresRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(44, rtb_LogicalOperator3_p);
    UpdateFault(44);
  }

  /* Logic: '<S542>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S542>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S542>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S542>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_d = ((MPRD_DataStore() &&
    (BaseEngineController_A02_bak2_B.s544_Merge > (MAPInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S542>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: MAPRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(61, rtb_LogicalOperator2_d);
    UpdateFault(61);
  }

  /* Logic: '<S542>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S542>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S542>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S542>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_bx = ((MPRD_DataStore() &&
    (BaseEngineController_A02_bak2_B.s544_Merge < (MAPInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S542>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: MAPRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(62, rtb_LogicalOperator3_bx);
    UpdateFault(62);
  }

  /* Logic: '<S543>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S543>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S543>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S543>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_n = ((MPRD_DataStore() && (rtb_DataTypeConversion_fc >
    (MAPTimeInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S543>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: MAPTimeRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(63, rtb_LogicalOperator2_n);
    UpdateFault(63);
  }

  /* Logic: '<S543>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S543>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S543>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S543>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_c = ((MPRD_DataStore() && (rtb_DataTypeConversion_fc <
    (MAPTimeInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S543>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: MAPTimeRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(64, rtb_LogicalOperator3_c);
    UpdateFault(64);
  }

  /* Logic: '<S545>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S545>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S545>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S545>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_k = ((MPRD_DataStore() && (rtb_DataTypeConversion_k >
    (OilPresInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S545>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: OilPresRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(75, rtb_LogicalOperator2_k);
    UpdateFault(75);
  }

  /* Logic: '<S545>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S545>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S545>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S545>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_d = ((MPRD_DataStore() && (rtb_DataTypeConversion_k <
    (OilPresInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S545>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: OilPresRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(76, rtb_LogicalOperator3_d);
    UpdateFault(76);
  }

  /* Logic: '<S546>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S546>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S546>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S546>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_e = ((MPRD_DataStore() && (rtb_Switch_j >
    (SensVoltInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S546>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: SensVoltRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(77, rtb_LogicalOperator2_e);
    UpdateFault(77);
  }

  /* Logic: '<S546>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S546>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S546>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S546>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_nu = ((MPRD_DataStore() && (rtb_Switch_j <
    (SensVoltInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S546>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: SensVoltRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(78, rtb_LogicalOperator3_nu);
    UpdateFault(78);
  }

  /* Logic: '<S547>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S547>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S547>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S547>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_j = ((MPRD_DataStore() && ((real_T)
    rtb_DataTypeConversion_gp > (SysVoltInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S547>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: SysVoltRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(81, rtb_LogicalOperator2_j);
    UpdateFault(81);
  }

  /* Logic: '<S547>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S547>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S547>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S547>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_nu2 = ((MPRD_DataStore() && ((real_T)
    rtb_DataTypeConversion_gp < (SysVoltInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S547>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: SysVoltRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(82, rtb_LogicalOperator3_nu2);
    UpdateFault(82);
  }

  /* Logic: '<S619>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S619>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S619>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S619>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_mx = ((MPRD_DataStore() && (rtb_DataTypeConversion_e >
    (O2_PostCatMax_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S619>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: O2_PostCatRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(73, rtb_LogicalOperator2_mx);
    UpdateFault(73);
  }

  /* Logic: '<S619>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S619>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S619>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S619>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_j = ((MPRD_DataStore() && (rtb_DataTypeConversion_e <
    (O2_PostCatMin_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S619>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: O2_PostCatRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(74, rtb_LogicalOperator3_j);
    UpdateFault(74);
  }

  /* Logic: '<S660>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S660>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S660>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S660>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_ko = ((MPRD_DataStore() && (rtb_DataTypeConversion_j >
    (APP1Max_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S660>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: APP1RangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(4, rtb_LogicalOperator2_ko);
    UpdateFault(4);
  }

  /* Logic: '<S660>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S660>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S660>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S660>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_is = ((MPRD_DataStore() && (rtb_DataTypeConversion_j <
    (APP1Min_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S660>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: APP1RangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(5, rtb_LogicalOperator3_is);
    UpdateFault(5);
  }

  /* Logic: '<S661>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S661>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S661>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S661>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_gy = ((MPRD_DataStore() && (rtb_DataTypeConversion_iz >
    (APP2Max_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S661>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: APP2RangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(6, rtb_LogicalOperator2_gy);
    UpdateFault(6);
  }

  /* Logic: '<S661>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S661>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S661>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S661>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_kj = ((MPRD_DataStore() && (rtb_DataTypeConversion_iz <
    (APP2Min_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S661>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: APP2RangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(7, rtb_LogicalOperator3_kj);
    UpdateFault(7);
  }

  /* Logic: '<S662>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S662>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S662>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S662>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_kw = ((MPRD_DataStore() && (rtb_DataTypeConversion_cg >
    (TPS1Max_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S662>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: TPS1RangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(83, rtb_LogicalOperator2_kw);
    UpdateFault(83);
  }

  /* Logic: '<S662>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S662>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S662>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S662>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_nk = ((MPRD_DataStore() && (rtb_DataTypeConversion_cg <
    (TPS1Min_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S662>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: TPS1RangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(84, rtb_LogicalOperator3_nk);
    UpdateFault(84);
  }

  /* Logic: '<S663>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S663>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S663>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S663>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_dn = ((MPRD_DataStore() && (rtb_DataTypeConversion_jo >
    (TPS2Max_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S663>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: TPS2RangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(85, rtb_LogicalOperator2_dn);
    UpdateFault(85);
  }

  /* Logic: '<S663>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S663>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S663>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S663>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_f = ((MPRD_DataStore() && (rtb_DataTypeConversion_jo <
    (TPS2Min_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S663>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: TPS2RangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(86, rtb_LogicalOperator3_f);
    UpdateFault(86);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S704>/motohawk_dout' */

  /* S-Function Block: DOut8998p0002 */
  {
    DOut8998p0002_DiscreteOutput_Set
      (BaseEngineController_A02_bak2_B.s712_LogicalOperator);
  }

  /* Update for UnitDelay: '<S399>/Unit Delay' */
  BaseEngineController_A02_bak2_DWork.s399_UnitDelay_DSTATE =
    BaseEngineController_A02_bak2_B.s418_State;

  /* Update for UnitDelay: '<S539>/Unit Delay1' */
  BaseEngineController_A02_bak2_DWork.s539_UnitDelay1_DSTATE = rtb_Merge_fk;

  /* Update for UnitDelay: '<S553>/Unit Delay' */
  BaseEngineController_A02_bak2_DWork.s553_UnitDelay_DSTATE = rtb_Sum1_i;

  /* Update for UnitDelay: '<S538>/Unit Delay' */
  BaseEngineController_A02_bak2_DWork.s538_UnitDelay_DSTATE =
    BaseEngineController_A02_bak2_B.s538_Sum1;

  /* Update for UnitDelay: '<S660>/Unit Delay' incorporates:
   *  MinMax: '<S669>/MinMax1'
   */
  BaseEngineController_A02_bak2_DWork.s660_UnitDelay_DSTATE = minV;

  /* Update for UnitDelay: '<S671>/Unit Delay' */
  BaseEngineController_A02_bak2_DWork.s671_UnitDelay_DSTATE = rtb_Sum1_dj;

  /* Update for UnitDelay: '<S661>/Unit Delay' incorporates:
   *  MinMax: '<S679>/MinMax1'
   */
  BaseEngineController_A02_bak2_DWork.s661_UnitDelay_DSTATE = minV_0;

  /* Update for UnitDelay: '<S681>/Unit Delay' */
  BaseEngineController_A02_bak2_DWork.s681_UnitDelay_DSTATE = rtb_Sum1_n;

  /* Update for UnitDelay: '<S662>/Unit Delay' incorporates:
   *  MinMax: '<S689>/MinMax1'
   */
  BaseEngineController_A02_bak2_DWork.s662_UnitDelay_DSTATE = minV_1;

  /* Update for UnitDelay: '<S691>/Unit Delay' */
  BaseEngineController_A02_bak2_DWork.s691_UnitDelay_DSTATE = rtb_Sum1_p;

  /* Update for UnitDelay: '<S663>/Unit Delay' incorporates:
   *  MinMax: '<S699>/MinMax1'
   */
  BaseEngineController_A02_bak2_DWork.s663_UnitDelay_DSTATE = minV_2;

  /* Update for UnitDelay: '<S701>/Unit Delay' */
  BaseEngineController_A02_bak2_DWork.s701_UnitDelay_DSTATE = rtb_Sum1_fn;

  /* Update for UnitDelay: '<S565>/Unit Delay' */
  BaseEngineController_A02_bak2_DWork.s565_UnitDelay_DSTATE = rtb_Sum2_c;

  /* Update for UnitDelay: '<S540>/Unit Delay1' */
  BaseEngineController_A02_bak2_DWork.s540_UnitDelay1_DSTATE = rtb_Merge_h;

  /* Update for UnitDelay: '<S564>/Unit Delay' */
  BaseEngineController_A02_bak2_DWork.s564_UnitDelay_DSTATE = rtb_Sum1_k;

  /* Update for UnitDelay: '<S562>/Unit Delay' */
  BaseEngineController_A02_bak2_DWork.s562_UnitDelay_DSTATE = rtb_Merge_h;

  /* Update for UnitDelay: '<S562>/Unit Delay1' */
  BaseEngineController_A02_bak2_DWork.s562_UnitDelay1_DSTATE = rtb_UnitDelay_ln;

  /* Update for UnitDelay: '<S562>/Unit Delay2' */
  BaseEngineController_A02_bak2_DWork.s562_UnitDelay2_DSTATE = rtb_UnitDelay1_b;

  /* Update for UnitDelay: '<S401>/Unit Delay' */
  BaseEngineController_A02_bak2_DWork.s401_UnitDelay_DSTATE =
    BaseEngineController_A02_bak2_B.s625_Merge;

  /* Update for UnitDelay: '<S619>/Unit Delay' */
  BaseEngineController_A02_bak2_DWork.s619_UnitDelay_DSTATE = rtb_Merge_l;

  /* Update for UnitDelay: '<S627>/Unit Delay' */
  BaseEngineController_A02_bak2_DWork.s627_UnitDelay_DSTATE = rtb_Sum1_p1;

  /* Update for UnitDelay: '<S543>/Unit Delay1' */
  BaseEngineController_A02_bak2_DWork.s543_UnitDelay1_DSTATE = rtb_Merge_hk;

  /* Update for UnitDelay: '<S355>/Unit Delay' */
  BaseEngineController_A02_bak2_DWork.s355_UnitDelay_DSTATE = rtb_Merge_j3;

  /* Update for UnitDelay: '<S542>/Unit Delay1' */
  BaseEngineController_A02_bak2_DWork.s542_UnitDelay1_DSTATE = rtb_Merge_ou;

  /* Update for UnitDelay: '<S582>/Unit Delay' */
  BaseEngineController_A02_bak2_DWork.s582_UnitDelay_DSTATE = rtb_Sum1_pe;

  /* Update for UnitDelay: '<S447>/Unit Delay' */
  BaseEngineController_A02_bak2_DWork.s447_UnitDelay_DSTATE = rtb_Merge_k;

  /* Update for UnitDelay: '<S517>/Unit Delay' */
  BaseEngineController_A02_bak2_DWork.s517_UnitDelay_DSTATE = rtb_Sum1_kl;

  /* Update for UnitDelay: '<S367>/Unit Delay2' */
  BaseEngineController_A02_bak2_DWork.s367_UnitDelay2_DSTATE = rtb_Product1_f;

  /* Update for UnitDelay: '<S370>/Unit Delay' */
  BaseEngineController_A02_bak2_DWork.s370_UnitDelay_DSTATE =
    BaseEngineController_A02_bak2_B.s370_Sum1;

  /* Update for UnitDelay: '<S368>/Unit Delay2' */
  BaseEngineController_A02_bak2_DWork.s368_UnitDelay2_DSTATE = rtb_Sum1_j;

  /* Update for UnitDelay: '<S373>/Unit Delay' */
  BaseEngineController_A02_bak2_DWork.s373_UnitDelay_DSTATE =
    BaseEngineController_A02_bak2_B.s373_Sum1;

  /* Update for UnitDelay: '<S366>/Unit Delay' */
  BaseEngineController_A02_bak2_DWork.s366_UnitDelay_DSTATE =
    BaseEngineController_A02_bak2_B.s384_MinMax1;

  /* Update for UnitDelay: '<S415>/Unit Delay' */
  BaseEngineController_A02_bak2_DWork.s415_UnitDelay_DSTATE =
    BaseEngineController_A02_bak2_B.s538_Sum1;

  /* Update for UnitDelay: '<S417>/Unit Delay' */
  BaseEngineController_A02_bak2_DWork.s417_UnitDelay_DSTATE =
    BaseEngineController_A02_bak2_B.s417_Sum1;

  /* Update for UnitDelay: '<S590>/Unit Delay' */
  BaseEngineController_A02_bak2_DWork.s590_UnitDelay_DSTATE = rtb_Sum1_cq;

  /* Update for Enabled SubSystem: '<S7>/Run' incorporates:
   *  Update for EnablePort: '<S112>/Enable'
   */
  if (BaseEngineController_A02_bak2_DWork.s7_Run_MODE) {
    /* Update for UnitDelay: '<S142>/Unit Delay' */
    BaseEngineController_A02_bak2_DWork.s142_UnitDelay_DSTATE = rtb_Switch1_nt;

    /* Update for UnitDelay: '<S141>/Unit Delay' */
    BaseEngineController_A02_bak2_DWork.s141_UnitDelay_DSTATE =
      BaseEngineController_A02_bak2_B.s141_Switch1;

    /* Update for UnitDelay: '<S140>/Unit Delay' */
    BaseEngineController_A02_bak2_DWork.s140_UnitDelay_DSTATE =
      BaseEngineController_A02_bak2_B.s140_Switch1;

    /* Update for UnitDelay: '<S138>/Unit Delay' */
    BaseEngineController_A02_bak2_DWork.s138_UnitDelay_DSTATE = rtb_Switch1_gz;

    /* Update for UnitDelay: '<S139>/Unit Delay' */
    BaseEngineController_A02_bak2_DWork.s139_UnitDelay_DSTATE = rtb_Switch1_a;

    /* Update for UnitDelay: '<S183>/Unit Delay' */
    BaseEngineController_A02_bak2_DWork.s183_UnitDelay_DSTATE = rtb_Product4_k;

    /* Update for UnitDelay: '<S184>/Unit Delay' */
    BaseEngineController_A02_bak2_DWork.s184_UnitDelay_DSTATE = rtb_MinMax1_bm;

    /* Update for UnitDelay: '<S124>/Unit Delay' */
    BaseEngineController_A02_bak2_DWork.s124_UnitDelay_DSTATE =
      BaseEngineController_A02_bak2_B.s162_Switch1;

    /* Update for UnitDelay: '<S162>/Unit Delay' */
    BaseEngineController_A02_bak2_DWork.s162_UnitDelay_DSTATE = rtb_MinMax1_g;

    /* Update for UnitDelay: '<S152>/Unit Delay' */
    BaseEngineController_A02_bak2_DWork.s152_UnitDelay_DSTATE = rtb_Sum2_a;

    /* Update for UnitDelay: '<S161>/Unit Delay' */
    BaseEngineController_A02_bak2_DWork.s161_UnitDelay_DSTATE = rtb_Product4_l;

    /* Update for UnitDelay: '<S170>/Unit Delay' */
    BaseEngineController_A02_bak2_DWork.s170_UnitDelay_DSTATE =
      rtb_LogicalOperator_boa;

    /* Update for UnitDelay: '<S172>/Unit Delay' */
    BaseEngineController_A02_bak2_DWork.s172_UnitDelay_DSTATE =
      BaseEngineController_A02_bak2_B.s169_Switch1;

    /* Update for UnitDelay: '<S171>/Unit Delay' */
    BaseEngineController_A02_bak2_DWork.s171_UnitDelay_DSTATE =
      rtb_DataTypeConversion_fo;

    /* Update for UnitDelay: '<S190>/Unit Delay' */
    BaseEngineController_A02_bak2_DWork.s190_UnitDelay_DSTATE =
      BaseEngineController_A02_bak2_B.s190_Switch1;

    /* Update for UnitDelay: '<S191>/Unit Delay' */
    BaseEngineController_A02_bak2_DWork.s191_UnitDelay_DSTATE =
      BaseEngineController_A02_bak2_B.s191_Switch1;

    /* Update for UnitDelay: '<S192>/Unit Delay' */
    BaseEngineController_A02_bak2_DWork.s192_UnitDelay_DSTATE =
      BaseEngineController_A02_bak2_B.s192_Switch1;
  }

  /* End of Update for SubSystem: '<S7>/Run' */

  /* Update for UnitDelay: '<S547>/Unit Delay1' */
  BaseEngineController_A02_bak2_DWork.s547_UnitDelay1_DSTATE = rtb_Merge_ks;

  /* Update for UnitDelay: '<S616>/Unit Delay' */
  BaseEngineController_A02_bak2_DWork.s616_UnitDelay_DSTATE =
    rtb_DesiredLambda_idx_0;

  /* Update for S-Function (motohawk_sfun_dout): '<S706>/motohawk_dout' */

  /* S-Function Block: DOut9272p0004 */
  {
    DOut9272p0004_DiscreteOutput_Set
      (BaseEngineController_A02_bak2_B.s744_LogicalOperator);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S706>/motohawk_dout1' */

  /* S-Function Block: DOut9273p0004 */
  {
    DOut9273p0004_DiscreteOutput_Set
      (BaseEngineController_A02_bak2_B.s745_LogicalOperator);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S707>/motohawk_dout' */

  /* S-Function Block: DOut9285p0004 */
  {
    DOut9285p0004_DiscreteOutput_Set
      (BaseEngineController_A02_bak2_B.s752_LogicalOperator);
  }

  /* Update for S-Function (motohawk_sfun_pwm): '<S708>/motohawk_pwm1' */

  /* S-Function Block: ETCPin_PWMOutput */
  ETCPin_PWMOutput_PWMOutput_Set(rtb_DataTypeConversion3_d,
    rtb_DataTypeConversion4_i, 0, 1);

  /* Update for S-Function (motohawk_sfun_pwm): '<S709>/motohawk_pwm' */

  /* S-Function Block: IAC_PPin_PWMOutput */
  IAC_PPin_PWMOutput_PWMOutput_Set(rtb_DataTypeConversion2_i,
    rtb_DataTypeConversion3_h, 0, 1);

  /* Update for S-Function (motohawk_sfun_pwm): '<S709>/motohawk_pwm1' */

  /* S-Function Block: IAC_SPin_PWMOutput */
  IAC_SPin_PWMOutput_PWMOutput_Set(rtb_DataTypeConversion2_e,
    rtb_DataTypeConversion3_p, 0, 1);

  /* Update for UnitDelay: '<S65>/Unit Delay' */
  BaseEngineController_A02_bak2_DWork.s65_UnitDelay_DSTATE =
    rtb_DesiredLambda_idx_1;

  /* Update for UnitDelay: '<S64>/Unit Delay' */
  BaseEngineController_A02_bak2_DWork.s64_UnitDelay_DSTATE =
    rtb_DesiredLambda_idx_2;

  /* Update for UnitDelay: '<S62>/Unit Delay' */
  BaseEngineController_A02_bak2_DWork.s62_UnitDelay_DSTATE = rtb_Merge_l3;

  /* Update for UnitDelay: '<S61>/Unit Delay' */
  BaseEngineController_A02_bak2_DWork.s61_UnitDelay_DSTATE = rtb_Merge_lu;

  /* Update for UnitDelay: '<S60>/Unit Delay' */
  BaseEngineController_A02_bak2_DWork.s60_UnitDelay_DSTATE = rtb_Merge_oi;

  /* Update for UnitDelay: '<S59>/Unit Delay' */
  BaseEngineController_A02_bak2_DWork.s59_UnitDelay_DSTATE = rtb_Merge_oo;

  /* Update for UnitDelay: '<S58>/Unit Delay' */
  BaseEngineController_A02_bak2_DWork.s58_UnitDelay_DSTATE = rtb_Merge_c;

  /* Update for UnitDelay: '<S57>/Unit Delay' */
  BaseEngineController_A02_bak2_DWork.s57_UnitDelay_DSTATE = rtb_Merge_hm;

  /* Update for UnitDelay: '<S63>/Unit Delay' */
  memcpy((void *)BaseEngineController_A02_bak2_DWork.s63_UnitDelay_DSTATE, (void
          *)&rtb_Merge_i[0], sizeof(real_T) << 3U);

  /* Update for S-Function (motohawk_sfun_pwm): '<S711>/motohawk_pwm' */

  /* S-Function Block: WASTEGATE_PWMOutput */
  WASTEGATE_PWMOutput_PWMOutput_Set(rtb_DataTypeConversion2_l,
    rtb_DataTypeConversion3_g, 0, 1);

  /* Update for UnitDelay: '<S432>/Unit Delay' */
  BaseEngineController_A02_bak2_DWork.s432_UnitDelay_DSTATE = rtb_Switch_mv;

  /* Update for UnitDelay: '<S379>/Unit Delay' incorporates:
   *  MinMax: '<S381>/MinMax1'
   */
  BaseEngineController_A02_bak2_DWork.s379_UnitDelay_DSTATE = minV_3;

  /* Update for UnitDelay: '<S401>/Unit Delay1' */
  BaseEngineController_A02_bak2_DWork.s401_UnitDelay1_DSTATE =
    BaseEngineController_A02_bak2_B.s625_Merge;

  /* Update for UnitDelay: '<S541>/Unit Delay1' */
  BaseEngineController_A02_bak2_DWork.s541_UnitDelay1_DSTATE = rtb_Merge_bf;

  /* Update for UnitDelay: '<S574>/Unit Delay' */
  BaseEngineController_A02_bak2_DWork.s574_UnitDelay_DSTATE = rtb_Sum1_em;

  /* Update for UnitDelay: '<S545>/Unit Delay1' */
  BaseEngineController_A02_bak2_DWork.s545_UnitDelay1_DSTATE = rtb_Merge_jw;

  /* Update for UnitDelay: '<S600>/Unit Delay' */
  BaseEngineController_A02_bak2_DWork.s600_UnitDelay_DSTATE = rtb_Switch_fm;

  /* Update for UnitDelay: '<S546>/Unit Delay1' */
  BaseEngineController_A02_bak2_DWork.s546_UnitDelay1_DSTATE = rtb_Merge_ne;

  /* Update for UnitDelay: '<S608>/Unit Delay' */
  BaseEngineController_A02_bak2_DWork.s608_UnitDelay_DSTATE = rtb_Sum_pd;

  /* Update for UnitDelay: '<S367>/Unit Delay1' */
  BaseEngineController_A02_bak2_DWork.s367_UnitDelay1_DSTATE = rtb_Product1_i;

  /* Update for UnitDelay: '<S367>/Unit Delay3' */
  BaseEngineController_A02_bak2_DWork.s367_UnitDelay3_DSTATE = rtb_UnitDelay4_o;

  /* Update for UnitDelay: '<S367>/Unit Delay4' */
  BaseEngineController_A02_bak2_DWork.s367_UnitDelay4_DSTATE =
    BaseEngineController_A02_bak2_B.s538_Sum1;

  /* Update for UnitDelay: '<S368>/Unit Delay1' */
  BaseEngineController_A02_bak2_DWork.s368_UnitDelay1_DSTATE = rtb_Merge_ek;

  /* Update for UnitDelay: '<S368>/Unit Delay3' */
  BaseEngineController_A02_bak2_DWork.s368_UnitDelay3_DSTATE = rtb_Merge_hd;

  /* Update for UnitDelay: '<S368>/Unit Delay4' */
  BaseEngineController_A02_bak2_DWork.s368_UnitDelay4_DSTATE = rtb_Torque;
}

/* Termination for function-call system: '<Root>/Foreground' */
void BaseEngineController_A02_bak2_Foreground_Term(void)
{
  /* Terminate for Enabled SubSystem: '<S432>/Triggered Subsystem' incorporates:
   *  Terminate for S-Function (fcncallgen): '<S433>/Function-Call Generator'
   *  Terminate for SubSystem: '<S3>/Diagnostics'
   */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
