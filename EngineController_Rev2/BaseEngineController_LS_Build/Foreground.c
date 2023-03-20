/*
 * File: Foreground.c
 *
 * Code generated for Simulink model 'BaseEngineController_LS'.
 *
 * Model version                  : 1.2222
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Sun Mar 19 22:34:25 2023
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

/* Named constants for Stateflow: '<S268>/Ice Break' */
#define BaseEngineController_LS_IN_Init (1U)
#define BaseEngineController_LS_IN_Open (2U)
#define BaseEngineController_LS_IN_Wait (3U)

/* Named constants for Stateflow: '<S380>/Baro Stall State Delay' */
#define BaseEngineController_LS_IN_CrankRun (1U)
#define BaseEngineController_LS_IN_Stall (2U)
#define BaseEngineController_LS_IN_StallDelay (3U)

/* Named constants for Stateflow: '<S432>/Engine State Machine' */
#define BaseEngineController_LS_IN_Crank (1U)
#define BaseEngineController_LS_IN_Run (2U)
#define BaseEngineController_LS_IN_Stall_d (3U)

/*
 * Initial conditions for enable system:
 *    '<S387>/Collect Average'
 *    '<S428>/Collect Average'
 *    '<S429>/Collect Average'
 */
void BaseEngineController_LS_CollectAverage_Init
  (rtDW_CollectAverage_BaseEngineController_LS *localDW)
{
  /* InitializeConditions for UnitDelay: '<S391>/Unit Delay1' */
  localDW->s391_UnitDelay1_DSTATE = 0.0;
}

/*
 * Disable for enable system:
 *    '<S387>/Collect Average'
 *    '<S428>/Collect Average'
 *    '<S429>/Collect Average'
 */
void BaseEngineController_LS_CollectAverage_Disable
  (rtDW_CollectAverage_BaseEngineController_LS *localDW)
{
  localDW->s387_CollectAverage_MODE = FALSE;
}

/*
 * Start for enable system:
 *    '<S387>/Collect Average'
 *    '<S428>/Collect Average'
 *    '<S429>/Collect Average'
 */
void BaseEngineController_LS_CollectAverage_Start
  (rtDW_CollectAverage_BaseEngineController_LS *localDW)
{
  BaseEngineController_LS_CollectAverage_Init(localDW);
}

/*
 * Output and update for enable system:
 *    '<S387>/Collect Average'
 *    '<S428>/Collect Average'
 *    '<S429>/Collect Average'
 */
void BaseEngineController_LS_CollectAverage(boolean_T rtu_0, int8_T rtu_Count,
  real_T rtu_Signal, rtB_CollectAverage_BaseEngineController_LS *localB,
  rtDW_CollectAverage_BaseEngineController_LS *localDW)
{
  real_T rtb_Sum1_b4g;

  /* Outputs for Enabled SubSystem: '<S387>/Collect Average' incorporates:
   *  EnablePort: '<S391>/Enable'
   */
  if (rtu_0) {
    if (!localDW->s387_CollectAverage_MODE) {
      BaseEngineController_LS_CollectAverage_Init(localDW);
      localDW->s387_CollectAverage_MODE = TRUE;
    }

    /* Sum: '<S391>/Sum1' incorporates:
     *  UnitDelay: '<S391>/Unit Delay1'
     */
    rtb_Sum1_b4g = rtu_Signal + localDW->s391_UnitDelay1_DSTATE;

    /* Product: '<S391>/Product' incorporates:
     *  DataTypeConversion: '<S391>/Data Type Conversion'
     */
    localB->s391_Product = 1.0 / (real_T)rtu_Count * rtb_Sum1_b4g;

    /* Update for UnitDelay: '<S391>/Unit Delay1' */
    localDW->s391_UnitDelay1_DSTATE = rtb_Sum1_b4g;
  } else {
    if (localDW->s387_CollectAverage_MODE) {
      BaseEngineController_LS_CollectAverage_Disable(localDW);
    }
  }

  /* End of Outputs for SubSystem: '<S387>/Collect Average' */
}

/*
 * Start for enable system:
 *    '<S427>/PassThrough1'
 *    '<S427>/PassThrough2'
 */
void BaseEngineController_LS_PassThrough1_Start(real_T *rty_Out1)
{
  /* VirtualOutportStart for Outport: '<S443>/Out1' */
  (*rty_Out1) = 0.005;
}

/*
 * Output and update for enable system:
 *    '<S427>/PassThrough1'
 *    '<S427>/PassThrough2'
 */
void BaseEngineController_LS_PassThrough1(boolean_T rtu_0, real_T rtu_1, real_T *
  rty_Out1)
{
  /* Outputs for Enabled SubSystem: '<S427>/PassThrough1' incorporates:
   *  EnablePort: '<S443>/Enable'
   */
  if (rtu_0) {
    /* Inport: '<S443>/In1' */
    (*rty_Out1) = rtu_1;
  }

  /* End of Outputs for SubSystem: '<S427>/PassThrough1' */
}

/*
 * Output and update for enable system:
 *    '<S327>/GetInstRPM'
 *    '<S328>/GetInstRPM'
 */
void BaseEngineController_LS_GetInstRPM(boolean_T rtu_0,
  rtB_GetInstRPM_BaseEngineController_LS *localB)
{
  /* Outputs for Enabled SubSystem: '<S327>/GetInstRPM' incorporates:
   *  EnablePort: '<S335>/Enable'
   */
  if (rtu_0) {
    /* S-Function Block: <S335>/motohawk_encoder_instant_rpm */
    {
      localB->s335_motohawk_encoder_instant_rpm = GetEncoderResourceInstantRPM();
    }
  }

  /* End of Outputs for SubSystem: '<S327>/GetInstRPM' */
}

/*
 * Output and update for enable system:
 *    '<S327>/SafeDivide'
 *    '<S328>/SafeDivide'
 */
void BaseEngineController_LS_SafeDivide(boolean_T rtu_0, uint8_T rtu_Count,
  uint16_T rtu_RPMSum, rtB_SafeDivide_BaseEngineController_LS *localB)
{
  uint32_T u;

  /* Outputs for Enabled SubSystem: '<S327>/SafeDivide' incorporates:
   *  EnablePort: '<S337>/Enable'
   */
  if (rtu_0) {
    /* MinMax: '<S337>/MinMax' incorporates:
     *  Constant: '<S337>/Constant'
     */
    u = rtu_Count;

    /* Product: '<S337>/Product' incorporates:
     *  Constant: '<S337>/Constant'
     *  MinMax: '<S337>/MinMax'
     */
    localB->s337_Product = (uint16_T)((uint32_T)rtu_RPMSum / (uint32_T)(int32_T)
                                      (u >= 1U ? u : 1U));
  }

  /* End of Outputs for SubSystem: '<S327>/SafeDivide' */
}

/*
 * Output and update for action system:
 *    '<S478>/If Action Subsystem'
 *    '<S478>/If Action Subsystem1'
 *    '<S478>/If Action Subsystem2'
 *    '<S479>/If Action Subsystem'
 *    '<S479>/If Action Subsystem1'
 *    '<S479>/If Action Subsystem2'
 *    '<S498>/If Action Subsystem'
 *    '<S498>/If Action Subsystem1'
 *    '<S498>/If Action Subsystem2'
 *    '<S499>/If Action Subsystem'
 *    ...
 */
void BaseEngineController_LS_IfActionSubsystem(real_T rtu_0, real_T *rty_Out)
{
  /* Inport: '<S481>/In' */
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
  /* Initial conditions for function-call system: '<S474>/Temp Sensors' */

  /* S-Function Block: <S632>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s632_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
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

  /* S-Function Block: <S641>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s641_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S671>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s671_motohawk_delta_time_DWORK1 = now -
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

  /* S-Function Block: <S460>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s460_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S546>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s546_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for Stateflow: '<S432>/Engine State Machine' */

  /* Entry: Foreground/Control/VirtualSensors/RawProcessed/EngineState/Engine State Machine */
  /* Transition: '<S453>:4' */
  BaseEngineController_LS_DWork.s453_is_c2_BaseEngineController_LS =
    BaseEngineController_LS_IN_Stall_d;

  /* Entry 'Stall': '<S453>:1' */
  BaseEngineController_LS_B.s453_State = 1U;

  /* S-Function Block: <S529>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s529_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S705>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s705_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

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

  /* S-Function Block: <S563>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s563_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S559>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s559_motohawk_delta_time_DWORK1 = now -
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

  /* S-Function Block: <S525>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s525_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(-1);
  }

  /* InitializeConditions for Atomic SubSystem: '<S384>/Base TPS Request' */

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

  /* S-Function Block: <S427>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s427_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* End of InitializeConditions for SubSystem: '<S384>/Base TPS Request' */

  /* S-Function Block: <S480>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s480_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S488>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s488_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S462>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s462_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S575>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s575_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S380>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s380_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for Stateflow: '<S380>/Baro Stall State Delay' */
  BaseEngineController_LS_DWork.s386_TOld = 0.0;
  BaseEngineController_LS_B.s386_Timer = 0.0;

  /* Entry: Foreground/Control/VirtualSensors/AirCalcs/Baro Stall State Delay */
  /* Transition: '<S386>:4' */
  BaseEngineController_LS_DWork.s386_is_c19_BaseEngineController_LS =
    BaseEngineController_LS_IN_Stall;

  /* Entry 'Stall': '<S386>:1' */
  BaseEngineController_LS_B.s386_Enable = TRUE;

  /* S-Function Block: <S393>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s393_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S507>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s507_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S450>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s450_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(-1);
  }

  /* S-Function Block: <S583>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s583_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* Initial conditions for function-call system: '<S474>/Fuel Level' */

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

  /* S-Function Block: <S381>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s381_motohawk_delta_time_DWORK1 = now -
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

  /* S-Function Block: <S760>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s760_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S765>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s765_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S766>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s766_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S767>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s767_motohawk_delta_time_DWORK1 = now -
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

  /* S-Function Block: <S782>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s782_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S567>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s567_motohawk_delta_time_DWORK1 = now -
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

  /* S-Function Block: <S593>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s593_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S784>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s784_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S788>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s788_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S791>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s791_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S790>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s790_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S836>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s836_motohawk_delta_time_DWORK1 = now -
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
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S601>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s601_motohawk_delta_time_DWORK1 = now -
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

  /* Initial conditions for function-call system: '<S659>/Function-Call Subsystem' */

  /* InitializeConditions for UnitDelay: '<S666>/Initial Condition is True' */
  BaseEngineController_LS_DWork.s666_InitialConditionisTrue_DSTATE = TRUE;

  /* Initial conditions for function-call system: '<S660>/Function-Call Subsystem' */

  /* InitializeConditions for UnitDelay: '<S668>/Initial Condition is True' */
  BaseEngineController_LS_DWork.s668_InitialConditionisTrue_DSTATE = TRUE;
}

/* Enable for function-call system: '<Root>/Foreground' */
void BaseEngineController_LS_Foreground_Enable(void)
{
  /* Level2 S-Function Block: '<S474>/motohawk_trigger' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_5XRTI_PERIODIC_9252p0009 */
  BaseEngineController_LS_DWork.s474_motohawk_trigger_DWORK1 = 1;

  /* Level2 S-Function Block: '<S432>/motohawk_trigger' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_TDC_EVENT_7871p001 */
  BaseEngineController_LS_DWork.s432_motohawk_trigger_DWORK1 = 1;

  /* Level2 S-Function Block: '<S542>/motohawk_trigger5' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_MID_TDC_EVENT_9158p0006 */
  BaseEngineController_LS_DWork.s542_motohawk_trigger5_DWORK1 = 1;

  /* Level2 S-Function Block: '<S474>/motohawk_trigger1' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_5XRTI_PERIODIC_9253p0006 */
  BaseEngineController_LS_DWork.s474_motohawk_trigger1_DWORK1 = 1;

  /* Level2 S-Function Block: '<S14>/motohawk_trigger1' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_5XRTI_PERIODIC_11692p0001 */
  BaseEngineController_LS_DWork.s14_motohawk_trigger1_DWORK1 = 1;

  /* Level2 S-Function Block: '<S14>/motohawk_trigger' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_5XRTI_PERIODIC_11691p0001 */
  BaseEngineController_LS_DWork.s14_motohawk_trigger_DWORK1 = 1;

  /* Level2 S-Function Block: '<S13>/motohawk_trigger' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_5XRTI_PERIODIC_10731p0011 */

  /* Enable for function-call system: '<S13>/Coil Control' */

  /* Enable for Atomic SubSystem: '<S794>/EST Enable TDC Counter' */

  /* Level2 S-Function Block: '<S799>/motohawk_trigger1' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_TDC_EVENT_10217p0009 */
  BaseEngineController_LS_DWork.s799_motohawk_trigger1_DWORK1 = 1;

  /* End of Enable for SubSystem: '<S794>/EST Enable TDC Counter' */
  BaseEngineController_LS_DWork.s13_motohawk_trigger_DWORK1 = 1;

  /* Level2 S-Function Block: '<S659>/motohawk_trigger' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_20XRTI_PERIODIC_9388p0006 */
  BaseEngineController_LS_DWork.s659_motohawk_trigger_DWORK1 = 1;

  /* Level2 S-Function Block: '<S660>/motohawk_trigger' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_20XRTI_PERIODIC_9522p0006 */
  BaseEngineController_LS_DWork.s660_motohawk_trigger_DWORK1 = 1;
}

/* Disable for function-call system: '<Root>/Foreground' */
void BaseEngineController_LS_Foreground_Disable(void)
{
  int32_T i;

  /* Level2 S-Function Block: '<S474>/motohawk_trigger' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_5XRTI_PERIODIC_9252p0009 */
  BaseEngineController_LS_DWork.s474_motohawk_trigger_DWORK1 = 0;

  /* Level2 S-Function Block: '<S432>/motohawk_trigger' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_TDC_EVENT_7871p001 */
  BaseEngineController_LS_DWork.s432_motohawk_trigger_DWORK1 = 0;

  /* Disable for Enabled SubSystem: '<S15>/Stall' */
  /* Disable for Stateflow: '<S268>/Ice Break' */
  BaseEngineController_LS_DWork.s276_presentTicks =
    BaseEngineController_LS_M->Timing.clockTick0;
  BaseEngineController_LS_DWork.s276_elapsedTicks =
    BaseEngineController_LS_DWork.s276_presentTicks -
    BaseEngineController_LS_DWork.s276_previousTicks;
  BaseEngineController_LS_DWork.s276_previousTicks =
    BaseEngineController_LS_DWork.s276_presentTicks;
  BaseEngineController_LS_DWork.s276_temporalCounter_i1 =
    BaseEngineController_LS_DWork.s276_temporalCounter_i1 +
    BaseEngineController_LS_DWork.s276_elapsedTicks;
  BaseEngineController_LS_DWork.s15_Stall_MODE = FALSE;

  /* End of Disable for SubSystem: '<S15>/Stall' */

  /* Disable for Enabled SubSystem: '<S15>/Crank' */
  BaseEngineController_LS_DWork.s15_Crank_MODE = FALSE;

  /* End of Disable for SubSystem: '<S15>/Crank' */

  /* Level2 S-Function Block: '<S542>/motohawk_trigger5' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_MID_TDC_EVENT_9158p0006 */
  BaseEngineController_LS_DWork.s542_motohawk_trigger5_DWORK1 = 0;

  /* Disable for Enabled SubSystem: '<S380>/Capture Signal At Startup' */

  /* Disable for Enabled SubSystem: '<S387>/Collect Average' */
  BaseEngineController_LS_CollectAverage_Disable
    (&BaseEngineController_LS_DWork.s387_CollectAverage);

  /* End of Disable for SubSystem: '<S387>/Collect Average' */
  BaseEngineController_LS_DWork.s380_CaptureSignalAtStartup_MODE = FALSE;

  /* End of Disable for SubSystem: '<S380>/Capture Signal At Startup' */

  /* Disable for Enabled SubSystem: '<S384>/Capture ECT At Startup' */

  /* Disable for Enabled SubSystem: '<S428>/Collect Average' */
  BaseEngineController_LS_CollectAverage_Disable
    (&BaseEngineController_LS_DWork.s428_CollectAverage);

  /* End of Disable for SubSystem: '<S428>/Collect Average' */
  BaseEngineController_LS_DWork.s384_CaptureECTAtStartup_MODE = FALSE;

  /* End of Disable for SubSystem: '<S384>/Capture ECT At Startup' */

  /* Disable for Enabled SubSystem: '<S15>/Run' */

  /* Level2 S-Function Block: '<S93>/motohawk_trigger1' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_5XRTI_PERIODIC_4424p0009 */
  BaseEngineController_LS_DWork.s93_motohawk_trigger1_DWORK1 = 0;

  /* Disable for Atomic SubSystem: '<S93>/Fuel System Manager' */
  /* Disable for Atomic SubSystem: '<S109>/Injector Manager' */
  /* Disable for Enabled SubSystem: '<S145>/Delta TPS Transient Fueling' */
  /* Disable for Enabled SubSystem: '<S150>/ECT Transient Fueling' */
  /* Disable for Outport: '<S154>/Mult' */
  BaseEngineController_LS_B.s154_motohawk_interpolation_1d = 1.0;
  BaseEngineController_LS_DWork.s150_ECTTransientFueling_MODE = FALSE;

  /* End of Disable for SubSystem: '<S150>/ECT Transient Fueling' */

  /* Disable for Enabled SubSystem: '<S150>/OXY Transient Fueling' */
  /* Disable for Outport: '<S157>/Mult' */
  BaseEngineController_LS_B.s157_motohawk_interpolation_1d = 1.0;
  BaseEngineController_LS_DWork.s150_OXYTransientFueling_MODE = FALSE;

  /* End of Disable for SubSystem: '<S150>/OXY Transient Fueling' */

  /* Disable for Outport: '<S150>/DeltaTPSMult' */
  BaseEngineController_LS_B.s150_Product1 = 1.0;
  BaseEngineController_LS_DWork.s145_DeltaTPSTransientFueling_MODE = FALSE;

  /* End of Disable for SubSystem: '<S145>/Delta TPS Transient Fueling' */
  /* End of Disable for SubSystem: '<S109>/Injector Manager' */
  /* End of Disable for SubSystem: '<S93>/Fuel System Manager' */
  BaseEngineController_LS_DWork.s15_Run_MODE = FALSE;

  /* End of Disable for SubSystem: '<S15>/Run' */

  /* Level2 S-Function Block: '<S474>/motohawk_trigger1' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_5XRTI_PERIODIC_9253p0006 */
  BaseEngineController_LS_DWork.s474_motohawk_trigger1_DWORK1 = 0;

  /* Disable for Enabled SubSystem: '<S22>/PassThrough1' */
  BaseEngineController_LS_DWork.s22_PassThrough1_MODE = FALSE;

  /* Disable for Enabled SubSystem: '<S22>/PassThrough3' */
  for (i = 0; i < 32; i++) {
    /* Disable for Outport: '<S67>/Out1' */
    BaseEngineController_LS_B.s22_Merge1[i] = 0;

    /* Disable for Outport: '<S69>/Out1' */
    BaseEngineController_LS_B.s22_Merge1[i] = 0;
  }

  /* End of Disable for SubSystem: '<S22>/PassThrough1' */
  BaseEngineController_LS_DWork.s22_PassThrough3_MODE = FALSE;

  /* End of Disable for SubSystem: '<S22>/PassThrough3' */

  /* Disable for Enabled SubSystem: '<S22>/SequenceCutMachine' */

  /* Level2 S-Function Block: '<S72>/motohawk_trigger' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_TDC1_EVENT_11111p0007 */
  BaseEngineController_LS_DWork.s72_motohawk_trigger_DWORK1 = 0;
  BaseEngineController_LS_DWork.s22_SequenceCutMachine_MODE = FALSE;

  /* End of Disable for SubSystem: '<S22>/SequenceCutMachine' */

  /* Disable for Enabled SubSystem: '<S22>/PassThrough5' */
  BaseEngineController_LS_DWork.s22_PassThrough5_MODE = FALSE;

  /* Disable for Enabled SubSystem: '<S22>/PassThrough4' */
  for (i = 0; i < 8; i++) {
    /* Disable for Outport: '<S71>/Out1' */
    BaseEngineController_LS_B.s71_DataTypeConversion1[i] = FALSE;

    /* Disable for Outport: '<S70>/Out1' */
    BaseEngineController_LS_B.s70_DataTypeConversion[i] = FALSE;
  }

  /* End of Disable for SubSystem: '<S22>/PassThrough5' */
  BaseEngineController_LS_DWork.s22_PassThrough4_MODE = FALSE;

  /* End of Disable for SubSystem: '<S22>/PassThrough4' */

  /* Disable for Enabled SubSystem: '<S384>/Capture IAT At Startup' */

  /* Disable for Enabled SubSystem: '<S429>/Collect Average' */
  BaseEngineController_LS_CollectAverage_Disable
    (&BaseEngineController_LS_DWork.s429_CollectAverage);

  /* End of Disable for SubSystem: '<S429>/Collect Average' */
  BaseEngineController_LS_DWork.s384_CaptureIATAtStartup_MODE = FALSE;

  /* End of Disable for SubSystem: '<S384>/Capture IAT At Startup' */

  /* Level2 S-Function Block: '<S14>/motohawk_trigger1' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_5XRTI_PERIODIC_11692p0001 */
  BaseEngineController_LS_DWork.s14_motohawk_trigger1_DWORK1 = 0;

  /* Level2 S-Function Block: '<S14>/motohawk_trigger' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_5XRTI_PERIODIC_11691p0001 */
  BaseEngineController_LS_DWork.s14_motohawk_trigger_DWORK1 = 0;

  /* Level2 S-Function Block: '<S13>/motohawk_trigger' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_5XRTI_PERIODIC_10731p0011 */

  /* Disable for function-call system: '<S13>/Coil Control' */

  /* Disable for Atomic SubSystem: '<S794>/EST Enable TDC Counter' */

  /* Level2 S-Function Block: '<S799>/motohawk_trigger1' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_TDC_EVENT_10217p0009 */
  BaseEngineController_LS_DWork.s799_motohawk_trigger1_DWORK1 = 0;

  /* End of Disable for SubSystem: '<S794>/EST Enable TDC Counter' */
  BaseEngineController_LS_DWork.s13_motohawk_trigger_DWORK1 = 0;

  /* Disable for Enabled SubSystem: '<S14>/Electronic Throttle Controller' */
  /* Disable for Enabled SubSystem: '<S31>/PassThrough' */
  /* Disable for Outport: '<S52>/Out1' */
  BaseEngineController_LS_B.s52_In1 = 10.0;
  BaseEngineController_LS_DWork.s31_PassThrough_MODE = FALSE;

  /* End of Disable for SubSystem: '<S31>/PassThrough' */
  BaseEngineController_LS_DWork.s14_ElectronicThrottleController_MODE = FALSE;

  /* End of Disable for SubSystem: '<S14>/Electronic Throttle Controller' */

  /* Disable for Enabled SubSystem: '<S468>/Triggered Subsystem' incorporates:
   *  Disable for S-Function (fcncallgen): '<S469>/Function-Call Generator'
   *  Disable for SubSystem: '<S11>/Diagnostics'
   *  Disable for SubSystem: '<S287>/MisfireDiagSub'
   */

  /* Level2 S-Function Block: '<S307>/motohawk_trigger' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_HIRES_5882p001 */

  /* Disable for function-call system: '<S307>/MisfireDiagFunc' */
  BaseEngineController_LS_DWork.s326_If_ActiveSubsystem = -1;
  BaseEngineController_LS_DWork.s307_motohawk_trigger_DWORK1 = 0;
  BaseEngineController_LS_DWork.s287_MisfireDiagSub_MODE = FALSE;
  BaseEngineController_LS_DWork.s468_TriggeredSubsystem_MODE = FALSE;

  /* Level2 S-Function Block: '<S659>/motohawk_trigger' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_20XRTI_PERIODIC_9388p0006 */
  BaseEngineController_LS_DWork.s659_motohawk_trigger_DWORK1 = 0;

  /* Level2 S-Function Block: '<S660>/motohawk_trigger' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_20XRTI_PERIODIC_9522p0006 */
  BaseEngineController_LS_DWork.s660_motohawk_trigger_DWORK1 = 0;
}

/* Start for function-call system: '<Root>/Foreground' */
void BaseEngineController_LS_Foreground_Start(void)
{
  /* Start for S-Function (motohawk_sfun_trigger): '<S474>/motohawk_trigger' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_5XRTI_PERIODIC_9252p0009 */
  BaseEngineController_LS_DWork.s474_motohawk_trigger_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S432>/motohawk_trigger' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_TDC_EVENT_7871p001 */
  BaseEngineController_LS_DWork.s432_motohawk_trigger_DWORK1 = 0;

  /* Start for Enabled SubSystem: '<S15>/Stall' */

  /* InitializeConditions for UnitDelay: '<S272>/Unit Delay' */
  BaseEngineController_LS_DWork.s272_UnitDelay_DSTATE = FALSE;

  /* InitializeConditions for UnitDelay: '<S273>/Unit Delay' */
  BaseEngineController_LS_DWork.s273_UnitDelay_DSTATE = FALSE;

  /* InitializeConditions for UnitDelay: '<S274>/Unit Delay' */
  BaseEngineController_LS_DWork.s274_UnitDelay_DSTATE = FALSE;

  /* InitializeConditions for UnitDelay: '<S275>/Unit Delay' */
  BaseEngineController_LS_DWork.s275_UnitDelay_DSTATE = 0.0;

  /* S-Function Block: <S277>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s277_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for Stateflow: '<S268>/Ice Break' */
  BaseEngineController_LS_DWork.s276_is_active_c3_BaseEngineController_LS = 0U;
  BaseEngineController_LS_DWork.s276_is_c3_BaseEngineController_LS = 0U;
  BaseEngineController_LS_B.s276_etc = 0.0;
  BaseEngineController_LS_DWork.s276_presentTicks = 0U;
  BaseEngineController_LS_DWork.s276_elapsedTicks = 0U;
  BaseEngineController_LS_DWork.s276_previousTicks = 0U;

  /* End of Start for SubSystem: '<S15>/Stall' */

  /* Start for Enabled SubSystem: '<S15>/Crank' */

  /* InitializeConditions for UnitDelay: '<S101>/Unit Delay' */
  BaseEngineController_LS_DWork.s101_UnitDelay_DSTATE = 0.0;

  /* S-Function Block: <S101>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s101_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* End of Start for SubSystem: '<S15>/Crank' */

  /* Start for Atomic SubSystem: '<S384>/Base TPS Request' */

  /* Start for Enabled SubSystem: '<S427>/PassThrough1' */
  BaseEngineController_LS_PassThrough1_Start
    (&BaseEngineController_LS_B.s427_Merge);

  /* End of Start for SubSystem: '<S427>/PassThrough1' */

  /* Start for Enabled SubSystem: '<S427>/PassThrough2' */
  BaseEngineController_LS_PassThrough1_Start
    (&BaseEngineController_LS_B.s427_Merge);

  /* End of Start for SubSystem: '<S427>/PassThrough2' */

  /* End of Start for SubSystem: '<S384>/Base TPS Request' */

  /* Start for S-Function (motohawk_sfun_trigger): '<S542>/motohawk_trigger5' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_MID_TDC_EVENT_9158p0006 */
  BaseEngineController_LS_DWork.s542_motohawk_trigger5_DWORK1 = 0;

  /* Start for Enabled SubSystem: '<S380>/Capture Signal At Startup' */

  /* Start for Enabled SubSystem: '<S387>/Collect Average' */
  BaseEngineController_LS_CollectAverage_Start
    (&BaseEngineController_LS_DWork.s387_CollectAverage);

  /* End of Start for SubSystem: '<S387>/Collect Average' */

  /* InitializeConditions for UnitDelay: '<S387>/Unit Delay' */
  BaseEngineController_LS_DWork.s387_UnitDelay_DSTATE = 0;

  /* End of Start for SubSystem: '<S380>/Capture Signal At Startup' */

  /* Start for Enabled SubSystem: '<S408>/IncreasingFilter' */

  /* VirtualOutportStart for Outport: '<S412>/Out1' */
  BaseEngineController_LS_B.s408_Merge = 0.005;

  /* End of Start for SubSystem: '<S408>/IncreasingFilter' */

  /* Start for Enabled SubSystem: '<S408>/DecreasingFilter' */

  /* VirtualOutportStart for Outport: '<S410>/Out1' */
  BaseEngineController_LS_B.s408_Merge = 0.005;

  /* End of Start for SubSystem: '<S408>/DecreasingFilter' */

  /* Start for Enabled SubSystem: '<S409>/IncreasingFilter' */

  /* VirtualOutportStart for Outport: '<S415>/Out1' */
  BaseEngineController_LS_B.s409_Merge = 0.005;

  /* End of Start for SubSystem: '<S409>/IncreasingFilter' */

  /* Start for Enabled SubSystem: '<S409>/DecreasingFilter' */

  /* VirtualOutportStart for Outport: '<S413>/Out1' */
  BaseEngineController_LS_B.s409_Merge = 0.005;

  /* End of Start for SubSystem: '<S409>/DecreasingFilter' */

  /* Start for Enabled SubSystem: '<S384>/Capture ECT At Startup' */

  /* Start for Enabled SubSystem: '<S428>/Collect Average' */
  BaseEngineController_LS_CollectAverage_Start
    (&BaseEngineController_LS_DWork.s428_CollectAverage);

  /* End of Start for SubSystem: '<S428>/Collect Average' */

  /* InitializeConditions for UnitDelay: '<S428>/Unit Delay' */
  BaseEngineController_LS_DWork.s428_UnitDelay_DSTATE = 0;

  /* End of Start for SubSystem: '<S384>/Capture ECT At Startup' */

  /* Start for Enabled SubSystem: '<S15>/Run' */

  /* Start for S-Function (motohawk_sfun_trigger): '<S93>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_5XRTI_PERIODIC_4424p0009 */
  BaseEngineController_LS_DWork.s93_motohawk_trigger1_DWORK1 = 0;

  /* Start for Atomic SubSystem: '<S93>/O2 Control' */

  /* Start for Atomic SubSystem: '<S112>/O2 PID Controller Bank A' */

  /* Start for InitialCondition: '<S228>/Multiply by 1.0 if not yet enabled' */
  BaseEngineController_LS_DWork.s228_Multiplyby10ifnotyetenabled_FirstOutputTime
    = TRUE;

  /* End of Start for SubSystem: '<S112>/O2 PID Controller Bank A' */

  /* Start for Atomic SubSystem: '<S112>/O2 PID Controller Bank B' */

  /* Start for InitialCondition: '<S229>/Multiply by 1.0 if not yet enabled' */
  BaseEngineController_LS_DWork.s229_Multiplyby10ifnotyetenabled_FirstOutputTime
    = TRUE;

  /* End of Start for SubSystem: '<S112>/O2 PID Controller Bank B' */

  /* End of Start for SubSystem: '<S93>/O2 Control' */

  /* Start for Atomic SubSystem: '<S93>/Fuel System Manager' */

  /* Start for Atomic SubSystem: '<S109>/Injector Manager' */

  /* Start for Enabled SubSystem: '<S145>/Delta TPS Transient Fueling' */

  /* Start for Enabled SubSystem: '<S150>/ECT Transient Fueling' */

  /* VirtualOutportStart for Outport: '<S154>/Mult' */
  BaseEngineController_LS_B.s154_motohawk_interpolation_1d = 1.0;

  /* End of Start for SubSystem: '<S150>/ECT Transient Fueling' */

  /* Start for Enabled SubSystem: '<S150>/OXY Transient Fueling' */

  /* VirtualOutportStart for Outport: '<S157>/Mult' */
  BaseEngineController_LS_B.s157_motohawk_interpolation_1d = 1.0;

  /* End of Start for SubSystem: '<S150>/OXY Transient Fueling' */

  /* S-Function Block: <S156>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s156_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for UnitDelay: '<S159>/Unit Delay' */
  BaseEngineController_LS_DWork.s159_UnitDelay_DSTATE = 0.0;

  /* S-Function Block: <S155>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s155_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for UnitDelay: '<S158>/Unit Delay' */
  BaseEngineController_LS_DWork.s158_UnitDelay_DSTATE = 0.0;

  /* VirtualOutportStart for Outport: '<S150>/DeltaTPSMult' */
  BaseEngineController_LS_B.s150_Product1 = 1.0;

  /* End of Start for SubSystem: '<S145>/Delta TPS Transient Fueling' */

  /* End of Start for SubSystem: '<S109>/Injector Manager' */

  /* End of Start for SubSystem: '<S93>/Fuel System Manager' */

  /* InitializeConditions for S-Function (motohawk_sfun_trigger): '<S93>/motohawk_trigger1' */
  if (rtmIsFirstInitCond(BaseEngineController_LS_M)) {
    /* Initial conditions for function-call system: '<S93>/DFCO' */

    /* S-Function Block: <S135>/motohawk_delta_time */
    {
      uint32_T now = 0;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
        u32Time_us);
      Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
      BaseEngineController_LS_DWork.s135_motohawk_delta_time_DWORK1 = now -
        Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
    }

    /* S-Function Block: <S133>/motohawk_delta_time */
    {
      uint32_T now = 0;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
        u32Time_us);
      Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
      BaseEngineController_LS_DWork.s133_motohawk_delta_time_DWORK1 = now -
        Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
    }
  }

  if (rtmIsFirstInitCond(BaseEngineController_LS_M)) {
    /* Initial conditions for function-call system: '<S93>/MinGovernor' */

    /* InitializeConditions for Stateflow: '<S191>/IdleStateMachine' */
    BaseEngineController_LS_IdleStateMachine_Init();

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

    /* S-Function Block: <S194>/motohawk_delta_time */
    {
      uint32_T now = 0;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
        u32Time_us);
      Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
      BaseEngineController_LS_DWork.s194_motohawk_delta_time_DWORK1 = now -
        Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
    }

    /* InitializeConditions for Atomic SubSystem: '<S111>/AiflowOffset' */

    /* S-Function Block: <S197>/motohawk_delta_time */
    {
      uint32_T now = 0;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
        u32Time_us);
      Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
      BaseEngineController_LS_DWork.s197_motohawk_delta_time_DWORK1 = now -
        Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
    }

    /* End of InitializeConditions for SubSystem: '<S111>/AiflowOffset' */

    /* S-Function Block: <S222>/motohawk_delta_time */
    {
      uint32_T now = 0;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
        u32Time_us);
      Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
      BaseEngineController_LS_DWork.s222_motohawk_delta_time_DWORK1 = now -
        Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
    }
  }

  if (rtmIsFirstInitCond(BaseEngineController_LS_M)) {
    /* Initial conditions for function-call system: '<S93>/MaxGovernor' */

    /* S-Function Block: <S173>/motohawk_delta_time */
    {
      uint32_T now = 0;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
        u32Time_us);
      Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
      BaseEngineController_LS_DWork.s173_motohawk_delta_time_DWORK1 = now -
        Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
    }

    /* S-Function Block: <S184>/motohawk_delta_time */
    {
      uint32_T now = 0;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
        u32Time_us);
      Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
      BaseEngineController_LS_DWork.s184_motohawk_delta_time_DWORK1 = now -
        Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
    }
  }

  if (rtmIsFirstInitCond(BaseEngineController_LS_M)) {
    /* Initial conditions for function-call system: '<S93>/Spark Manager' */

    /* InitializeConditions for UnitDelay: '<S263>/Initial Condition is True' */
    BaseEngineController_LS_DWork.s263_InitialConditionisTrue_DSTATE = TRUE;
  }

  /* InitializeConditions for Atomic SubSystem: '<S93>/O2 Control' */

  /* InitializeConditions for Atomic SubSystem: '<S112>/O2 PID Controller Bank A' */
  /* InitializeConditions for UnitDelay: '<S242>/Unit Delay' */
  BaseEngineController_LS_DWork.s242_UnitDelay_DSTATE = FALSE;

  /* InitializeConditions for UnitDelay: '<S239>/Unit Delay' */
  BaseEngineController_LS_DWork.s239_UnitDelay_DSTATE = 0.0;

  /* InitializeConditions for UnitDelay: '<S238>/Unit Delay' */
  BaseEngineController_LS_DWork.s238_UnitDelay_DSTATE = 0.0;

  /* S-Function Block: <S239>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s239_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for UnitDelay: '<S235>/Unit Delay1' */
  BaseEngineController_LS_DWork.s235_UnitDelay1_DSTATE = 0.0;

  /* S-Function Block: <S243>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s243_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for UnitDelay: '<S235>/Unit Delay' */
  BaseEngineController_LS_DWork.s235_UnitDelay_DSTATE = 0.0;

  /* S-Function Block: <S245>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s245_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for UnitDelay: '<S235>/Unit Delay2' */
  BaseEngineController_LS_DWork.s235_UnitDelay2_DSTATE = 0.0;

  /* S-Function Block: <S244>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s244_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* End of InitializeConditions for SubSystem: '<S112>/O2 PID Controller Bank A' */

  /* InitializeConditions for Atomic SubSystem: '<S112>/O2 PID Controller Bank B' */
  /* InitializeConditions for UnitDelay: '<S254>/Unit Delay' */
  BaseEngineController_LS_DWork.s254_UnitDelay_DSTATE = FALSE;

  /* InitializeConditions for UnitDelay: '<S251>/Unit Delay' */
  BaseEngineController_LS_DWork.s251_UnitDelay_DSTATE = 0.0;

  /* InitializeConditions for UnitDelay: '<S250>/Unit Delay' */
  BaseEngineController_LS_DWork.s250_UnitDelay_DSTATE = 0.0;

  /* S-Function Block: <S251>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s251_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for UnitDelay: '<S247>/Unit Delay1' */
  BaseEngineController_LS_DWork.s247_UnitDelay1_DSTATE = 0.0;

  /* S-Function Block: <S255>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s255_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for UnitDelay: '<S247>/Unit Delay' */
  BaseEngineController_LS_DWork.s247_UnitDelay_DSTATE = 0.0;

  /* S-Function Block: <S257>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s257_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for UnitDelay: '<S247>/Unit Delay2' */
  BaseEngineController_LS_DWork.s247_UnitDelay2_DSTATE = 0.0;

  /* S-Function Block: <S256>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s256_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* End of InitializeConditions for SubSystem: '<S112>/O2 PID Controller Bank B' */
  /* End of InitializeConditions for SubSystem: '<S93>/O2 Control' */

  /* End of Start for SubSystem: '<S15>/Run' */

  /* Start for S-Function (motohawk_sfun_trigger): '<S474>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_5XRTI_PERIODIC_9253p0006 */
  BaseEngineController_LS_DWork.s474_motohawk_trigger1_DWORK1 = 0;

  /* Start for Enabled SubSystem: '<S768>/IncreasingFilter' */

  /* VirtualOutportStart for Outport: '<S775>/Out1' */
  BaseEngineController_LS_B.s768_Merge = 0.005;

  /* End of Start for SubSystem: '<S768>/IncreasingFilter' */

  /* Start for Enabled SubSystem: '<S768>/DecreasingFilter' */

  /* VirtualOutportStart for Outport: '<S773>/Out1' */
  BaseEngineController_LS_B.s768_Merge = 0.005;

  /* End of Start for SubSystem: '<S768>/DecreasingFilter' */

  /* Start for Enabled SubSystem: '<S769>/IncreasingFilter' */

  /* VirtualOutportStart for Outport: '<S778>/Out1' */
  BaseEngineController_LS_B.s769_Merge = 0.005;

  /* End of Start for SubSystem: '<S769>/IncreasingFilter' */

  /* Start for Enabled SubSystem: '<S769>/DecreasingFilter' */

  /* VirtualOutportStart for Outport: '<S776>/Out1' */
  BaseEngineController_LS_B.s769_Merge = 0.005;

  /* End of Start for SubSystem: '<S769>/DecreasingFilter' */

  /* Start for Enabled SubSystem: '<S22>/SequenceCutMachine' */

  /* Start for function-call system: '<S72>/SequencyCutMachine' */

  /* VirtualOutportStart for Outport: '<S82>/CycleCounter' */
  BaseEngineController_LS_B.s82_Switch = 1U;

  /* VirtualOutportStart for Outport: '<S82>/CycleNumber' */
  BaseEngineController_LS_B.s82_Switch1 = 1.0;

  /* Clear enable/disable state for embedded trigger Trigger_FGND_TDC1_EVENT_11111p0007 */
  BaseEngineController_LS_DWork.s72_motohawk_trigger_DWORK1 = 0;

  /* InitializeConditions for UnitDelay: '<S72>/Unit Delay2' */
  BaseEngineController_LS_DWork.s72_UnitDelay2_DSTATE = 1.0;

  /* InitializeConditions for UnitDelay: '<S72>/Unit Delay1' */
  BaseEngineController_LS_DWork.s72_UnitDelay1_DSTATE = 1U;

  /* End of Start for SubSystem: '<S22>/SequenceCutMachine' */

  /* Start for Enabled SubSystem: '<S384>/Capture IAT At Startup' */

  /* Start for Enabled SubSystem: '<S429>/Collect Average' */
  BaseEngineController_LS_CollectAverage_Start
    (&BaseEngineController_LS_DWork.s429_CollectAverage);

  /* End of Start for SubSystem: '<S429>/Collect Average' */

  /* InitializeConditions for UnitDelay: '<S429>/Unit Delay' */
  BaseEngineController_LS_DWork.s429_UnitDelay_DSTATE = 0;

  /* End of Start for SubSystem: '<S384>/Capture IAT At Startup' */

  /* Start for S-Function (motohawk_sfun_trigger): '<S14>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_5XRTI_PERIODIC_11692p0001 */
  BaseEngineController_LS_DWork.s14_motohawk_trigger1_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S14>/motohawk_trigger' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_5XRTI_PERIODIC_11691p0001 */
  BaseEngineController_LS_DWork.s14_motohawk_trigger_DWORK1 = 0;

  /* Start for function-call system: '<S13>/Coil Control' */

  /* Start for Atomic SubSystem: '<S794>/EST Enable TDC Counter' */

  /* Start for S-Function (motohawk_sfun_trigger): '<S799>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_TDC_EVENT_10217p0009 */
  BaseEngineController_LS_DWork.s799_motohawk_trigger1_DWORK1 = 0;

  /* End of Start for SubSystem: '<S794>/EST Enable TDC Counter' */

  /* S-Function Block: <S739>/Spark Sequence */
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

  /* Clear enable/disable state for embedded trigger Trigger_FGND_5XRTI_PERIODIC_10731p0011 */
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

  /* S-Function Block: <S744>/Injector Sequence */
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

    BaseEngineController_LS_DWork.s744_InjectorSequence_DWORK1[0] = 0;
    BaseEngineController_LS_DWork.s744_InjectorSequence_DWORK1[1] = 0;
    BaseEngineController_LS_DWork.s744_InjectorSequence_DWORK1[2] = 0;
    BaseEngineController_LS_DWork.s744_InjectorSequence_DWORK1[3] = 0;
    BaseEngineController_LS_DWork.s744_InjectorSequence_DWORK1[4] = 0;
    BaseEngineController_LS_DWork.s744_InjectorSequence_DWORK1[5] = 0;
    BaseEngineController_LS_DWork.s744_InjectorSequence_DWORK1[6] = 0;
    BaseEngineController_LS_DWork.s744_InjectorSequence_DWORK1[7] = 0;
    BaseEngineController_LS_DWork.s744_InjectorSequence_DWORK2 = 0;
  }

  /* Start for Enabled SubSystem: '<S468>/Triggered Subsystem' incorporates:
   *  Start for S-Function (fcncallgen): '<S469>/Function-Call Generator'
   *  Start for SubSystem: '<S11>/Diagnostics'
   */

  /* Start for Enabled SubSystem: '<S468>/Triggered Subsystem' incorporates:
   *  Start for SubSystem: '<S287>/MisfireDiagSub'
   */

  /* Start for function-call system: '<S307>/MisfireDiagFunc' */

  /* Start for If: '<S326>/If' */
  BaseEngineController_LS_DWork.s326_If_ActiveSubsystem = -1;

  /* Clear enable/disable state for embedded trigger Trigger_FGND_HIRES_5882p001 */
  BaseEngineController_LS_DWork.s307_motohawk_trigger_DWORK1 = 0;

  /* Start for Enabled SubSystem: '<S468>/Triggered Subsystem' incorporates:
   *  InitializeConditions for S-Function (fcncallgen): '<S469>/Function-Call Generator'
   *  InitializeConditions for SubSystem: '<S11>/Diagnostics'
   */

  /* S-Function Block: <S293>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s293_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S294>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s294_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S361>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s361_motohawk_delta_time_DWORK1 = now -
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

  /* S-Function Block: <S362>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s362_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S363>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_DWork.s363_motohawk_delta_time_DWORK1 = now -
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
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* Start for S-Function (motohawk_sfun_trigger): '<S659>/motohawk_trigger' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_20XRTI_PERIODIC_9388p0006 */
  BaseEngineController_LS_DWork.s659_motohawk_trigger_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S660>/motohawk_trigger' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_20XRTI_PERIODIC_9522p0006 */
  BaseEngineController_LS_DWork.s660_motohawk_trigger_DWORK1 = 0;
}

/* Output and update for function-call system: '<Root>/Foreground' */
void BaseEngineController_LS_Foreground(void)
{
  /* local block i/o variables */
  real_T rtb_Sum1_h1;
  real_T rtb_UnitDelay1_e;
  real_T rtb_Merge_ao;
  real_T rtb_Sum1_b4;
  real_T rtb_UnitDelay1_ok;
  real_T rtb_Merge_m;
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
  real_T rtb_UnitDelay1_jn;
  real_T rtb_Merge_o;
  real_T rtb_UnitDelay1_m;
  real_T rtb_Merge_h;
  real_T rtb_motohawk_delta_time_f;
  real_T rtb_UnitDelay1_a;
  real_T rtb_Merge_in;
  real_T rtb_motohawk_interpolation_2d_d;
  real_T rtb_UnitDelay1_n5;
  real_T rtb_Merge_jq;
  real_T rtb_motohawk_delta_time_ok;
  real_T rtb_Saturation1_c;
  real_T rtb_motohawk_interpolation_1d1_j;
  real_T rtb_motohawk_interpolation_2d1_n;
  real_T rtb_UnitDelay_nr;
  real_T rtb_Merge_dv;
  real_T rtb_motohawk_delta_time_ow;
  real_T rtb_motohawk_delta_time_oz;
  real_T rtb_Sum1_hu;
  real_T rtb_motohawk_delta_time_b3;
  real_T rtb_motohawk_delta_time_lc;
  real_T rtb_Gain_e;
  real_T rtb_Sum1_a;
  real_T rtb_UnitDelay1_f4;
  real_T rtb_Merge_f;
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
  real_T rtb_motohawk_delta_time_ec;
  real_T rtb_Saturation_l;
  real_T rtb_motohawk_delta_time_i;
  real_T rtb_Saturation_k4;
  real_T rtb_motohawk_interpolation_1d_hr;
  real_T rtb_motohawk_delta_time_k;
  real_T rtb_motohawk_delta_time_fn;
  real_T rtb_Saturation_j;
  real_T rtb_Saturation_cp;
  real_T rtb_motohawk_interpolation_2d_m;
  real_T rtb_motohawk_delta_time_ff;
  real_T rtb_motohawk_delta_time_ks;
  real_T rtb_motohawk_delta_time_bi2;
  real_T rtb_motohawk_delta_time_ou;
  real_T rtb_Saturation_d;
  real_T rtb_Saturation_p;
  real_T rtb_Saturation_b;
  real_T rtb_Saturation_ks;
  real_T rtb_motohawk_interpolation_1d_ne;
  real_T rtb_motohawk_interpolation_2d_h;
  real_T rtb_motohawk_delta_time_l0;
  real_T rtb_Divide_p;
  real_T rtb_motohawk_interpolation_1d_kd;
  real_T rtb_Divide1;
  real_T rtb_motohawk_delta_time_op;
  real_T rtb_motohawk_delta_time_cj;
  real_T rtb_Saturation_d1;
  real_T rtb_motohawk_interpolation_1d_c;
  real_T rtb_motohawk_interpolation_1d1_a;
  real_T rtb_motohawk_interpolation_1d2_g;
  real_T rtb_motohawk_interpolation_1d_f;
  real_T rtb_RichEquivRatioTargetDelta_p;
  real_T rtb_LeanEquivRatioTargetDelta;
  real_T rtb_RichEquivRatioSwPtDelta;
  real_T rtb_LeanEquivRatioSwPtDelta;
  real_T rtb_motohawk_interpolation_1d_i;
  real_T rtb_motohawk_interpolation_1d1_o0;
  real_T rtb_motohawk_delta_time_gl;
  real_T rtb_motohawk_delta_time_i5;
  real_T rtb_motohawk_delta_time_lq;
  real_T rtb_motohawk_delta_time_ny;
  real_T rtb_motohawk_delta_time_nf;
  real_T rtb_Saturation_e;
  real_T rtb_Saturation_jl;
  real_T rtb_Saturation_po;
  real_T rtb_motohawk_delta_time_m4;
  real_T rtb_motohawk_delta_time_a;
  real_T rtb_motohawk_delta_time_eq;
  real_T rtb_motohawk_delta_time_bh;
  real_T rtb_motohawk_delta_time_lv;
  real_T rtb_Saturation_jz;
  real_T rtb_Saturation_lu;
  real_T rtb_Saturation_oq;
  real_T rtb_motohawk_interpolation_1d1_m;
  real_T rtb_motohawk_interpolation_2d2_h;
  real_T rtb_motohawk_interpolation_1d2_l;
  real_T rtb_motohawk_interpolation_2d3;
  real_T rtb_motohawk_interpolation_2d1_p;
  real_T rtb_motohawk_delta_time_m3;
  real_T rtb_Saturation_gs;
  real_T rtb_EOI;
  real_T rtb_PrimaryPulseInjectionTiming;
  real_T rtb_motohawk_interpolation_2d2_a;
  real_T rtb_motohawk_interpolation_2d1_a;
  real_T rtb_motohawk_interpolation_1d_fx;
  real_T rtb_motohawk_interpolation_2d3_b;
  real_T rtb_WarmUptimeRatio;
  real_T rtb_motohawk_delta_time_er;
  real_T rtb_Sum_a;
  real_T rtb_motohawk_interpolation_2d_g;
  real_T rtb_motohawk_interpolation_2d1_b;
  real_T rtb_motohawk_interpolation_1d4_m;
  real_T rtb_motohawk_interpolation_1d5;
  real_T rtb_motohawk_interpolation_1d1_k;
  real_T rtb_motohawk_interpolation_1d_j;
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
  real_T rtb_Saturation_pd;
  real_T rtb_Saturation_le;
  real_T rtb_motohawk_interpolation_2d_gj;
  real_T rtb_motohawk_interpolation_1d2_d;
  real_T rtb_motohawk_interpolation_1d1_c;
  real_T rtb_motohawk_replicate[8];
  real_T rtb_motohawk_interpolation_1d1_ku;
  real_T rtb_motohawk_replicate1;
  real_T rtb_Product_mq;
  real_T rtb_UnitDelay_gh;
  real_T rtb_Switch_fz;
  real_T rtb_motohawk_interpolation_1d3_a;
  real_T rtb_Product5_o;
  real_T rtb_DataTypeConversion_fq;
  real_T rtb_DataTypeConversion_gx;
  real_T rtb_DataTypeConversion_e;
  real_T rtb_Abs_c;
  real_T rtb_Switch_hp;
  uint32_T rtb_DataTypeConversion2_j;
  uint32_T rtb_DataTypeConversion2_e;
  uint32_T rtb_DataTypeConversion3_j;
  uint32_T rtb_DataTypeConversion1_p;
  uint32_T rtb_InjectorSequence_o2[8];
  uint32_T rtb_Sum_hh;
  uint32_T rtb_UnitDelay_lk;
  uint32_T rtb_DataTypeConversion6;
  int16_T rtb_motohawk_data_read_ld;
  int16_T rtb_DataTypeConversion3_c;
  int16_T rtb_DataTypeConversion3_k;
  int16_T rtb_DataTypeConversion4_m;
  int16_T rtb_DataTypeConversion3_d;
  int16_T rtb_DataTypeConversion7;
  int16_T rtb_DataTypeConversion2_p;
  uint16_T rtb_motohawk_ain1;
  uint16_T rtb_motohawk_ain2;
  uint16_T rtb_RPMInst;
  uint16_T rtb_motohawk_ain5_i;
  uint16_T rtb_RPM;
  uint16_T rtb_motohawk_ain6;
  uint16_T rtb_motohawk_ain9;
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
  uint16_T rtb_Product_mp;
  index_T rtb_motohawk_prelookup2;
  index_T rtb_motohawk_prelookup_n;
  index_T rtb_motohawk_prelookup1_k;
  index_T rtb_motohawk_prelookup1_h;
  index_T rtb_motohawk_prelookup_m;
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
  index_T rtb_motohawk_prelookup_hf;
  index_T rtb_motohawk_prelookup13;
  index_T rtb_motohawk_prelookup1_ke;
  index_T rtb_motohawk_prelookup_ag;
  index_T rtb_motohawk_prelookup1_jq;
  index_T rtb_motohawk_prelookup3;
  index_T rtb_motohawk_prelookup1_n;
  index_T rtb_motohawk_prelookup_c;
  index_T rtb_motohawk_prelookup3_n;
  index_T rtb_motohawk_prelookup2_h;
  index_T rtb_motohawk_prelookup2_a;
  index_T rtb_motohawk_prelookup_bs;
  index_T rtb_motohawk_prelookup_b2;
  int8_T rtb_Add1_k;
  int8_T rtb_Add1_k3;
  int8_T rtb_Add1_e;
  int8_T rtb_motohawk_interpolation_2d_m0;
  uint8_T rtb_Compare_bx;
  uint8_T rtb_Compare_d;
  uint8_T rtb_Compare_g;
  boolean_T rtb_Logic_j[2];
  boolean_T rtb_RelOp_hf;
  boolean_T rtb_motohawk_data_read2_lg;
  boolean_T rtb_motohawk_fault_action_o;
  boolean_T rtb_motohawk_fault_action1_a;
  boolean_T rtb_motohawk_fault_status2_f2;
  boolean_T rtb_motohawk_fault_status1_i;
  boolean_T rtb_motohawk_fault_action1_o;
  boolean_T rtb_motohawk_fault_action2;
  boolean_T rtb_motohawk_fault_action3;
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
  boolean_T rtb_LogicalOperator3_nj;
  boolean_T rtb_LogicalOperator4_n;
  boolean_T rtb_LogicalOperator5_cx;
  boolean_T rtb_RelationalOperator5_f;
  boolean_T rtb_RelationalOperator_jv;
  boolean_T rtb_RelationalOperator3_h;
  boolean_T rtb_RelationalOperator3_or;
  boolean_T rtb_LogicalOperator2_n;
  boolean_T rtb_LogicalOperator3_hv;
  boolean_T rtb_LogicalOperator2_b;
  boolean_T rtb_LogicalOperator3_od;
  boolean_T rtb_LogicalOperator2_p5;
  boolean_T rtb_LogicalOperator3_k;
  boolean_T rtb_LogicalOperator2_m;
  boolean_T rtb_LogicalOperator3_jn;
  boolean_T rtb_RelationalOperator_l;
  boolean_T rtb_LogicalOperator_f0;
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
  boolean_T rtb_LogicalOperator3_ak;
  boolean_T rtb_LogicalOperator2_gc;
  boolean_T rtb_LogicalOperator3_e;
  boolean_T rtb_LogicalOperator2_bm;
  boolean_T rtb_LogicalOperator3_g;
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
  boolean_T rtb_LogicalOperator4_mg;
  boolean_T rtb_LogicalOperator1_pp;
  boolean_T rtb_LogicalOperator2_di3;
  boolean_T rtb_LogicalOperator4_l;
  boolean_T rtb_LogicalOperator4_le;
  boolean_T rtb_LogicalOperator2_e;
  boolean_T rtb_LogicalOperator5_kw;
  boolean_T rtb_LogicalOperator4_k;
  boolean_T rtb_LogicalOperator2_ip;
  boolean_T rtb_LogicalOperator5_oa;
  boolean_T rtb_LogicalOperator_dn;
  boolean_T rtb_LogicalOperator4_bm;
  boolean_T rtb_LogicalOperator26;
  boolean_T rtb_LogicalOperator29;
  boolean_T rtb_LogicalOperator31;
  boolean_T rtb_LogicalOperator18;
  boolean_T rtb_LogicalOperator20;
  boolean_T rtb_LogicalOperator22;
  boolean_T rtb_LogicalOperator24;
  boolean_T rtb_LogicalOperator3_cx;
  boolean_T rtb_LogicalOperator6_dq;
  boolean_T rtb_LogicalOperator8_d;
  boolean_T rtb_LogicalOperator10_k;
  boolean_T rtb_LogicalOperator12;
  boolean_T rtb_LogicalOperator14;
  boolean_T rtb_LogicalOperator16;
  boolean_T rtb_LogicalOperator27;
  boolean_T rtb_LogicalOperator4_lf;
  boolean_T rtb_LogicalOperator7_j;
  boolean_T rtb_LogicalOperator8_h;
  boolean_T rtb_LogicalOperator11_b;
  boolean_T rtb_LogicalOperator1_g5;
  boolean_T rtb_LogicalOperator2_bl;
  boolean_T rtb_LogicalOperator3_eo;
  boolean_T rtb_LogicalOperator4_j;
  boolean_T rtb_LogicalOperator2_o4;
  boolean_T rtb_LogicalOperator2_ie;
  boolean_T rtb_LogicalOperator4_jz;
  boolean_T rtb_LogicalOperator4_mv;
  boolean_T rtb_LogicalOperator_g5;
  boolean_T rtb_LogicalOperator_mr;
  boolean_T rtb_RelationalOperator2_bw;
  boolean_T rtb_LogicalOperator_kz;
  boolean_T rtb_LT3;
  boolean_T rtb_LT2;
  boolean_T rtb_LT4;
  boolean_T rtb_LT3_k;
  boolean_T rtb_LT2_p;
  boolean_T rtb_LT4_g;
  boolean_T rtb_RelationalOperator2_hq;
  boolean_T rtb_RelationalOperator1_a;
  boolean_T rtb_RelationalOperator2_me;
  boolean_T rtb_RelationalOperator1_bm;
  boolean_T rtb_LogicalOperator_np;
  boolean_T rtb_LogicalOperator_di;
  boolean_T rtb_RelationalOperator1_hq;
  boolean_T rtb_motohawk_data_read1_kw;
  boolean_T rtb_motohawk_data_read1_iz;
  boolean_T rtb_AboveRich;
  boolean_T rtb_CombinatorialLogic_cd[2];
  boolean_T rtb_AboveRich_l;
  boolean_T rtb_CombinatorialLogic_i[2];
  boolean_T rtb_BelowLoTarget_d;
  boolean_T rtb_CombinatorialLogic_d[2];
  boolean_T rtb_AND1[8];
  boolean_T rtb_LogicalOperator_iy;
  boolean_T rtb_BelowLoTarget_p;
  boolean_T rtb_LogicalOperator2_br;
  boolean_T rtb_LogicalOperator2_ij;
  boolean_T rtb_AboveHiTarget_n;
  boolean_T rtb_CombinatorialLogic_o[2];
  boolean_T rtb_BelowLoTarget_g;
  boolean_T rtb_CombinatorialLogic_da[2];
  boolean_T rtb_Overspeed2;
  boolean_T rtb_RelOp_mp;
  boolean_T rtb_Switch_oh;
  boolean_T rtb_LogicalOperator1_cv;
  boolean_T rtb_RelationalOperator6_h;
  boolean_T rtb_RelationalOperator5_fz;
  boolean_T rtb_LogicalOperator6_jl;
  boolean_T rtb_LogicalOperator1_le;
  real_T rtb_DataTypeConversion1_d;
  real_T rtb_DataTypeConversion_ik;
  real_T rtb_UnitDelay_nd;
  real_T rtb_UnitDelay1_h;
  real_T rtb_Sum2_gr;
  real_T rtb_Sum1_mz;
  real_T rtb_Merge_b3;
  boolean_T rtb_RelOp_d;
  boolean_T rtb_RelationalOperator_h;
  boolean_T rtb_LogicalOperator_c;
  real_T rtb_Sum1_p3;
  uint8_T rtb_Gain_in;
  uint8_T rtb_Gain1_k;
  uint8_T rtb_Gain2_m;
  uint8_T rtb_Gain3_m;
  uint8_T rtb_Gain4;
  uint8_T rtb_u;
  real_T rtb_UnitDelay1_ad;
  real_T rtb_UnitDelay3_m;
  real_T rtb_UnitDelay4_b;
  real_T rtb_UnitDelay1_pn;
  real_T rtb_UnitDelay3_p;
  real_T rtb_UnitDelay4_a;
  real_T rtb_Abs_k;
  real_T rtb_UnitDelay4_i;
  real_T rtb_UnitDelay1_k;
  real_T rtb_UnitDelay3_j;
  real_T rtb_UnitDelay4_ie;
  real_T rtb_UnitDelay3_mp;
  real_T rtb_Sum1_li;
  real_T rtb_Sum1_g3;
  real_T rtb_Sum1_ir;
  real_T rtb_Sum1_du;
  real_T rtb_Sum1_d4;
  real_T rtb_Sum1_fm;
  real_T rtb_Sum1_mzy;
  real_T rtb_Sum1_ni;
  real_T rtb_Sum1_c;
  real_T rtb_Sum1_lm;
  real_T rtb_Sum1_nl;
  real_T rtb_Sum1_cs;
  real_T rtb_Sum1_o;
  uint32_T rtb_Switch_kj;
  real_T rtb_Sum1_m3;
  boolean_T rtb_RelationalOperator2_py;
  boolean_T rtb_RelationalOperator3_bp;
  boolean_T rtb_Switch1_pb;
  int8_T rtb_Add_k;
  int8_T rtb_Sum_l3;
  real_T rtb_Switch_om;
  real_T rtb_Switch1_f;
  real_T rtb_Switch2_a;
  real_T rtb_Switch3_p;
  real_T rtb_Switch4_i;
  boolean_T rtb_LogicalOperator1_er;
  boolean_T rtb_LogicalOperator_df[8];
  real_T rtb_Product1_fj[8];
  real_T rtb_DataTypeConversion_b2;
  real_T rtb_Multiplyby10ifnotyetenabled_c;
  real_T rtb_Divide_pr[8];
  uint16_T rtb_Product_nv;
  uint16_T rtb_Product1_mc;
  boolean_T rtb_LogicalOperator3_cj;
  int16_T rtb_DataTypeConversion_ol;
  int16_T rtb_Sum4_e;
  int16_T rtb_Switch2_i;
  real_T rtb_Product1_gw;
  int32_T i;
  real_T rtb_DesiredLambda_idx;
  real_T rtb_DesiredLambda_idx_0;
  real_T rtb_DesiredLambda_idx_1;
  real_T y;

  /* S-Function (motohawk_sfun_trigger): '<S474>/motohawk_trigger' */
  /* Enable for Trigger_FGND_5XRTI_PERIODIC_9252p0009 */
  if (BaseEngineController_LS_DWork.s474_motohawk_trigger_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s474_motohawk_trigger_DWORK1 = 1;
  }

  /* Logic: '<S672>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S672>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S672>/motohawk_fault_status4'
   */
  rtb_LogicalOperator1_cv = (IsFaultActive(8) || IsFaultActive(9));

  /* Logic: '<S672>/Logical Operator6' */
  rtb_LogicalOperator6_jl = !rtb_LogicalOperator1_cv;

  /* Logic: '<S672>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S672>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S672>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_le = (IsFaultSuspected(8) || IsFaultSuspected(9));

  /* S-Function Block: <S475>/motohawk_ain1 Resource: APP1AnalogInput */
  {
    extern NativeError_S APP1AnalogInput_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    APP1AnalogInput_AnalogInput_Get(&rtb_motohawk_ain1, NULL);
  }

  /* DataTypeConversion: '<S661>/Data Type Conversion1' incorporates:
   *  S-Function (motohawk_sfun_ain): '<S475>/motohawk_ain1'
   */
  rtb_DataTypeConversion1_d = (real_T)rtb_motohawk_ain1;

  /* Switch: '<S661>/Switch' incorporates:
   *  Fcn: '<S661>/Fcn'
   *  S-Function (motohawk_sfun_calibration): '<S661>/motohawk_calibration2'
   */
  if ((APP1_AdaptRev_Polarity_DataStore())) {
    BaseEngineController_LS_B.s661_Switch = 1023.0 - rtb_DataTypeConversion1_d;
  } else {
    BaseEngineController_LS_B.s661_Switch = rtb_DataTypeConversion1_d;
  }

  /* End of Switch: '<S661>/Switch' */

  /* S-Function (motohawk_sfun_data_read): '<S669>/motohawk_data_read' */
  rtb_DataTypeConversion_iq = APP1_AdaptRaw_Adpt_Low_DataStore();

  /* MinMax: '<S669>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S661>/motohawk_calibration9'
   */
  rtb_UnitDelay3_mp = (real_T)rtb_DataTypeConversion_iq;
  BaseEngineController_LS_B.s669_MinMax = (rtb_UnitDelay3_mp <=
    (APP1_AdaptAdapt_Low_Max_DataStore())) || rtIsNaN
    ((APP1_AdaptAdapt_Low_Max_DataStore())) ? rtb_UnitDelay3_mp :
    (APP1_AdaptAdapt_Low_Max_DataStore());

  /* Sum: '<S661>/Sum2' */
  rtb_DataTypeConversion1_d = BaseEngineController_LS_B.s661_Switch -
    BaseEngineController_LS_B.s669_MinMax;

  /* S-Function (motohawk_sfun_data_read): '<S669>/motohawk_data_read1' */
  rtb_DataTypeConversion_iq = APP1_AdaptRaw_Adpt_Hi_DataStore();

  /* MinMax: '<S669>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S661>/motohawk_calibration11'
   */
  rtb_UnitDelay3_mp = (real_T)rtb_DataTypeConversion_iq;
  BaseEngineController_LS_B.s669_MinMax1 = (rtb_UnitDelay3_mp >=
    (APP1_AdaptAdapt_Hi_Min_DataStore())) || rtIsNaN
    ((APP1_AdaptAdapt_Hi_Min_DataStore())) ? rtb_UnitDelay3_mp :
    (APP1_AdaptAdapt_Hi_Min_DataStore());

  /* Gain: '<S661>/Gain2' incorporates:
   *  Product: '<S661>/Product1'
   *  Sum: '<S661>/Sum1'
   */
  rtb_DataTypeConversion_e = rtb_DataTypeConversion1_d /
    (BaseEngineController_LS_B.s669_MinMax1 -
     BaseEngineController_LS_B.s669_MinMax) * 100.0;

  /* MinMax: '<S673>/MinMax' incorporates:
   *  Constant: '<S661>/Constant1'
   */
  rtb_DataTypeConversion_e = rtb_DataTypeConversion_e >= 0.0 ?
    rtb_DataTypeConversion_e : 0.0;

  /* MinMax: '<S673>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S661>/motohawk_calibration1'
   */
  BaseEngineController_LS_B.s673_MinMax1 = (rtb_DataTypeConversion_e <=
    (APP1_AdaptMaxLimit_DataStore())) || rtIsNaN((APP1_AdaptMaxLimit_DataStore()))
    ? rtb_DataTypeConversion_e : (APP1_AdaptMaxLimit_DataStore());

  /* S-Function Block: <S671>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s671_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_e = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S671>/Product' incorporates:
   *  MinMax: '<S671>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S671>/motohawk_calibration'
   */
  rtb_DataTypeConversion_e /= (rtb_DataTypeConversion_e >=
    (APP1_AdaptFilterConst_DataStore())) || rtIsNaN
    ((APP1_AdaptFilterConst_DataStore())) ? rtb_DataTypeConversion_e :
    (APP1_AdaptFilterConst_DataStore());

  /* Sum: '<S679>/Sum1' incorporates:
   *  Constant: '<S679>/Constant'
   *  Product: '<S679>/Product'
   *  Product: '<S679>/Product1'
   *  Sum: '<S679>/Sum'
   *  UnitDelay: '<S679>/Unit Delay'
   */
  rtb_Sum1_h1 = (1.0 - rtb_DataTypeConversion_e) *
    BaseEngineController_LS_DWork.s679_UnitDelay_DSTATE +
    BaseEngineController_LS_B.s673_MinMax1 * rtb_DataTypeConversion_e;

  /* UnitDelay: '<S672>/Unit Delay1' */
  rtb_UnitDelay1_e = BaseEngineController_LS_DWork.s672_UnitDelay1_DSTATE;

  /* If: '<S672>/If' incorporates:
   *  Logic: '<S672>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_jl && rtb_LogicalOperator1_le) {
    /* Outputs for IfAction SubSystem: '<S672>/If Action Subsystem' incorporates:
     *  ActionPort: '<S680>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay1_e, &rtb_Merge_ao);

    /* End of Outputs for SubSystem: '<S672>/If Action Subsystem' */
  } else if (rtb_LogicalOperator1_cv) {
    /* Outputs for IfAction SubSystem: '<S672>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S681>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((APP1_AdaptDfltValue_DataStore()),
      &rtb_Merge_ao);

    /* End of Outputs for SubSystem: '<S672>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S672>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S682>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_Sum1_h1, &rtb_Merge_ao);

    /* End of Outputs for SubSystem: '<S672>/If Action Subsystem2' */
  }

  /* End of If: '<S672>/If' */

  /* If: '<S683>/If' incorporates:
   *  Inport: '<S684>/In1'
   *  Inport: '<S685>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S683>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S683>/override_enable'
   */
  if ((APP1_Adapt_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S683>/NewValue' incorporates:
     *  ActionPort: '<S684>/Action Port'
     */
    BaseEngineController_LS_B.s683_Merge = (APP1_Adapt_new_DataStore());

    /* End of Outputs for SubSystem: '<S683>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S683>/OldValue' incorporates:
     *  ActionPort: '<S685>/Action Port'
     */
    BaseEngineController_LS_B.s683_Merge = rtb_Merge_ao;

    /* End of Outputs for SubSystem: '<S683>/OldValue' */
  }

  /* End of If: '<S683>/If' */

  /* Logic: '<S689>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S689>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S689>/motohawk_fault_status4'
   */
  rtb_LogicalOperator1_cv = (IsFaultActive(14) || IsFaultActive(15));

  /* Logic: '<S689>/Logical Operator6' */
  rtb_LogicalOperator6_jl = !rtb_LogicalOperator1_cv;

  /* Logic: '<S689>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S689>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S689>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_le = (IsFaultSuspected(14) || IsFaultSuspected(15));

  /* S-Function Block: <S475>/motohawk_ain2 Resource: APP2AnalogInput */
  {
    extern NativeError_S APP2AnalogInput_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    APP2AnalogInput_AnalogInput_Get(&rtb_motohawk_ain2, NULL);
  }

  /* DataTypeConversion: '<S662>/Data Type Conversion1' incorporates:
   *  S-Function (motohawk_sfun_ain): '<S475>/motohawk_ain2'
   */
  rtb_DataTypeConversion1_d = (real_T)rtb_motohawk_ain2;

  /* Switch: '<S662>/Switch' incorporates:
   *  Fcn: '<S662>/Fcn'
   *  S-Function (motohawk_sfun_calibration): '<S662>/motohawk_calibration2'
   */
  if ((APP2_AdaptRev_Polarity_DataStore())) {
    BaseEngineController_LS_B.s662_Switch = 1023.0 - rtb_DataTypeConversion1_d;
  } else {
    BaseEngineController_LS_B.s662_Switch = rtb_DataTypeConversion1_d;
  }

  /* End of Switch: '<S662>/Switch' */

  /* S-Function (motohawk_sfun_data_read): '<S686>/motohawk_data_read' */
  rtb_DataTypeConversion_iq = APP2_AdaptRaw_Adpt_Low_DataStore();

  /* MinMax: '<S686>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S662>/motohawk_calibration9'
   */
  rtb_UnitDelay3_mp = (real_T)rtb_DataTypeConversion_iq;
  BaseEngineController_LS_B.s686_MinMax = (rtb_UnitDelay3_mp <=
    (APP2_AdaptAdapt_Low_Max_DataStore())) || rtIsNaN
    ((APP2_AdaptAdapt_Low_Max_DataStore())) ? rtb_UnitDelay3_mp :
    (APP2_AdaptAdapt_Low_Max_DataStore());

  /* Sum: '<S662>/Sum2' */
  rtb_DataTypeConversion1_d = BaseEngineController_LS_B.s662_Switch -
    BaseEngineController_LS_B.s686_MinMax;

  /* S-Function (motohawk_sfun_data_read): '<S686>/motohawk_data_read1' */
  rtb_DataTypeConversion_iq = APP2_AdaptRaw_Adpt_Hi_DataStore();

  /* MinMax: '<S686>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S662>/motohawk_calibration11'
   */
  rtb_UnitDelay3_mp = (real_T)rtb_DataTypeConversion_iq;
  BaseEngineController_LS_B.s686_MinMax1 = (rtb_UnitDelay3_mp >=
    (APP2_AdaptAdapt_Hi_Min_DataStore())) || rtIsNaN
    ((APP2_AdaptAdapt_Hi_Min_DataStore())) ? rtb_UnitDelay3_mp :
    (APP2_AdaptAdapt_Hi_Min_DataStore());

  /* Gain: '<S662>/Gain2' incorporates:
   *  Product: '<S662>/Product1'
   *  Sum: '<S662>/Sum1'
   */
  rtb_DataTypeConversion_e = rtb_DataTypeConversion1_d /
    (BaseEngineController_LS_B.s686_MinMax1 -
     BaseEngineController_LS_B.s686_MinMax) * 100.0;

  /* MinMax: '<S690>/MinMax' incorporates:
   *  Constant: '<S662>/Constant1'
   */
  rtb_DataTypeConversion_e = rtb_DataTypeConversion_e >= 0.0 ?
    rtb_DataTypeConversion_e : 0.0;

  /* MinMax: '<S690>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S662>/motohawk_calibration1'
   */
  BaseEngineController_LS_B.s690_MinMax1 = (rtb_DataTypeConversion_e <=
    (APP2_AdaptMaxLimit_DataStore())) || rtIsNaN((APP2_AdaptMaxLimit_DataStore()))
    ? rtb_DataTypeConversion_e : (APP2_AdaptMaxLimit_DataStore());

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
    (APP2_AdaptFilterConst_DataStore())) || rtIsNaN
    ((APP2_AdaptFilterConst_DataStore())) ? rtb_DataTypeConversion_e :
    (APP2_AdaptFilterConst_DataStore());

  /* Sum: '<S696>/Sum1' incorporates:
   *  Constant: '<S696>/Constant'
   *  Product: '<S696>/Product'
   *  Product: '<S696>/Product1'
   *  Sum: '<S696>/Sum'
   *  UnitDelay: '<S696>/Unit Delay'
   */
  rtb_Sum1_b4 = (1.0 - rtb_DataTypeConversion_e) *
    BaseEngineController_LS_DWork.s696_UnitDelay_DSTATE +
    BaseEngineController_LS_B.s690_MinMax1 * rtb_DataTypeConversion_e;

  /* UnitDelay: '<S689>/Unit Delay1' */
  rtb_UnitDelay1_ok = BaseEngineController_LS_DWork.s689_UnitDelay1_DSTATE;

  /* If: '<S689>/If' incorporates:
   *  Logic: '<S689>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_jl && rtb_LogicalOperator1_le) {
    /* Outputs for IfAction SubSystem: '<S689>/If Action Subsystem' incorporates:
     *  ActionPort: '<S697>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay1_ok, &rtb_Merge_m);

    /* End of Outputs for SubSystem: '<S689>/If Action Subsystem' */
  } else if (rtb_LogicalOperator1_cv) {
    /* Outputs for IfAction SubSystem: '<S689>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S698>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((APP2_AdaptDfltValue_DataStore()),
      &rtb_Merge_m);

    /* End of Outputs for SubSystem: '<S689>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S689>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S699>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_Sum1_b4, &rtb_Merge_m);

    /* End of Outputs for SubSystem: '<S689>/If Action Subsystem2' */
  }

  /* End of If: '<S689>/If' */

  /* If: '<S700>/If' incorporates:
   *  Inport: '<S701>/In1'
   *  Inport: '<S702>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S700>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S700>/override_enable'
   */
  if ((APP2_Adapt_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S700>/NewValue' incorporates:
     *  ActionPort: '<S701>/Action Port'
     */
    BaseEngineController_LS_B.s700_Merge = (APP2_Adapt_new_DataStore());

    /* End of Outputs for SubSystem: '<S700>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S700>/OldValue' incorporates:
     *  ActionPort: '<S702>/Action Port'
     */
    BaseEngineController_LS_B.s700_Merge = rtb_Merge_m;

    /* End of Outputs for SubSystem: '<S700>/OldValue' */
  }

  /* End of If: '<S700>/If' */

  /* Logic: '<S426>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S426>/motohawk_fault_status'
   *  S-Function (motohawk_sfun_fault_status): '<S426>/motohawk_fault_status1'
   */
  rtb_LogicalOperator6_jl = (IsFaultActive(8) || IsFaultActive(9));

  /* Logic: '<S426>/Logical Operator6' incorporates:
   *  Logic: '<S426>/Logical Operator5'
   *  S-Function (motohawk_sfun_fault_status): '<S426>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S426>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_le = (rtb_LogicalOperator6_jl && (IsFaultActive(14) ||
    IsFaultActive(15)));

  /* Switch: '<S426>/Switch2' incorporates:
   *  Logic: '<S426>/Logical Operator1'
   *  S-Function (motohawk_sfun_fault_status): '<S426>/motohawk_fault_status4'
   */
  if (rtb_LogicalOperator1_le || IsFaultActive(16)) {
    /* MinMax: '<S426>/MinMax' */
    rtb_DataTypeConversion1_d = (BaseEngineController_LS_B.s700_Merge <=
      BaseEngineController_LS_B.s683_Merge) || rtIsNaN
      (BaseEngineController_LS_B.s683_Merge) ?
      BaseEngineController_LS_B.s700_Merge :
      BaseEngineController_LS_B.s683_Merge;
  } else {
    /* Switch: '<S426>/Switch1' */
    if (rtb_LogicalOperator6_jl) {
      rtb_DataTypeConversion1_d = BaseEngineController_LS_B.s700_Merge;
    } else {
      rtb_DataTypeConversion1_d = BaseEngineController_LS_B.s683_Merge;
    }

    /* End of Switch: '<S426>/Switch1' */
  }

  /* End of Switch: '<S426>/Switch2' */
  /* Switch: '<S430>/Switch1' incorporates:
   *  S-Function (motohawk_sfun_fault_action): '<S430>/motohawk_fault_action1'
   */
  if (GetFaultActionStatus(0)) {
    /* DataTypeConversion: '<S430>/Data Type Conversion' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S430>/motohawk_calibration1'
     */
    rtb_DataTypeConversion_b2 = (real_T)((uint8_T)(Overheat_MaxAPP_DataStore()));

    /* MinMax: '<S449>/MinMax' incorporates:
     *  Constant: '<S430>/Constant1'
     *  Product: '<S430>/Product1'
     *  S-Function (motohawk_sfun_calibration): '<S430>/motohawk_calibration2'
     */
    rtb_UnitDelay3_mp = (Overheat_ScaleAPP_DataStore()) *
      rtb_DataTypeConversion1_d;
    y = rtb_UnitDelay3_mp >= 0.0 ? rtb_UnitDelay3_mp : 0.0;

    /* MinMax: '<S449>/MinMax1' incorporates:
     *  Constant: '<S430>/Constant1'
     *  MinMax: '<S449>/MinMax'
     */
    BaseEngineController_LS_B.s430_Switch1 = y <= rtb_DataTypeConversion_b2 ? y :
      rtb_DataTypeConversion_b2;
  } else {
    BaseEngineController_LS_B.s430_Switch1 = rtb_DataTypeConversion1_d;
  }

  /* End of Switch: '<S430>/Switch1' */
  /* S-Function Block: <S460>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s460_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_hb = ((real_T) delta) * 0.000001;
  }

  /* Sum: '<S460>/Sum' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S460>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S460>/motohawk_delta_time'
   */
  BaseEngineController_LS_B.s460_Sum = rtb_motohawk_delta_time_hb +
    TimeSinceKeyOnTimer_DataStore();

  /* S-Function Block: <S418>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (ECT05In_DataStore()) = BaseEngineController_LS_B.s636_Merge;
    (ECT05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s636_Merge, (ECT05IdxArr_DataStore()), 5,
       (ECT05Idx_DataStore()));
    BaseEngineController_LS_B.s418_motohawk_prelookup = (ECT05Idx_DataStore());
  }

  /* S-Function Block: <S419>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (IAT05In_DataStore()) = BaseEngineController_LS_B.s654_Merge;
    (IAT05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s654_Merge, (IAT05IdxArr_DataStore()), 5,
       (IAT05Idx_DataStore()));
    BaseEngineController_LS_B.s419_motohawk_prelookup = (IAT05Idx_DataStore());
  }

  /* S-Function Block: <S546>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s546_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_e = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S546>/Product' incorporates:
   *  MinMax: '<S546>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S546>/motohawk_calibration'
   */
  rtb_DataTypeConversion_e /= (rtb_DataTypeConversion_e >=
    (ACPresFilterConst_DataStore())) || rtIsNaN((ACPresFilterConst_DataStore()))
    ? rtb_DataTypeConversion_e : (ACPresFilterConst_DataStore());

  /* Logic: '<S537>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S537>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S537>/motohawk_fault_status4'
   */
  rtb_LogicalOperator1_cv = (IsFaultActive(2) || IsFaultActive(3));

  /* Logic: '<S537>/Logical Operator6' */
  rtb_LogicalOperator6_jl = !rtb_LogicalOperator1_cv;

  /* Logic: '<S537>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S537>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S537>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_le = (IsFaultSuspected(2) || IsFaultSuspected(3));

  /* S-Function Block: <S473>/motohawk_ain4 Resource: ACPresPin */
  {
    extern NativeError_S ACPresPin_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    ACPresPin_AnalogInput_Get(&BaseEngineController_LS_B.s473_motohawk_ain4,
      NULL);
  }

  /* DataTypeConversion: '<S537>/Data Type Conversion' */
  rtb_DataTypeConversion_ik = (real_T)
    BaseEngineController_LS_B.s473_motohawk_ain4;

  /* Product: '<S537>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S537>/motohawk_calibration4'
   */
  rtb_DataTypeConversion1_d = rtb_DataTypeConversion_ik * (ACPresGain_DataStore());

  /* Sum: '<S537>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S537>/motohawk_calibration5'
   */
  BaseEngineController_LS_B.s537_Sum1 = rtb_DataTypeConversion1_d +
    (ACPresOfst_DataStore());

  /* UnitDelay: '<S537>/Unit Delay1' */
  rtb_UnitDelay1_i = BaseEngineController_LS_DWork.s537_UnitDelay1_DSTATE;

  /* If: '<S537>/If' incorporates:
   *  Logic: '<S537>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_jl && rtb_LogicalOperator1_le) {
    /* Outputs for IfAction SubSystem: '<S537>/If Action Subsystem' incorporates:
     *  ActionPort: '<S547>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay1_i, &rtb_Merge_b);

    /* End of Outputs for SubSystem: '<S537>/If Action Subsystem' */
  } else if (rtb_LogicalOperator1_cv) {
    /* Outputs for IfAction SubSystem: '<S537>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S548>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((ACPresDfltValue_DataStore()),
      &rtb_Merge_b);

    /* End of Outputs for SubSystem: '<S537>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S537>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S549>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      (BaseEngineController_LS_B.s537_Sum1, &rtb_Merge_b);

    /* End of Outputs for SubSystem: '<S537>/If Action Subsystem2' */
  }

  /* End of If: '<S537>/If' */

  /* Sum: '<S551>/Sum1' incorporates:
   *  Constant: '<S551>/Constant'
   *  Product: '<S551>/Product'
   *  Product: '<S551>/Product1'
   *  Sum: '<S551>/Sum'
   *  UnitDelay: '<S551>/Unit Delay'
   */
  rtb_Sum1_li = (1.0 - rtb_DataTypeConversion_e) *
    BaseEngineController_LS_DWork.s551_UnitDelay_DSTATE + rtb_Merge_b *
    rtb_DataTypeConversion_e;

  /* If: '<S550>/If' incorporates:
   *  Inport: '<S552>/In1'
   *  Inport: '<S553>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S550>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S550>/override_enable'
   */
  if ((ACPres_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S550>/NewValue' incorporates:
     *  ActionPort: '<S552>/Action Port'
     */
    BaseEngineController_LS_B.s550_Merge = (ACPres_new_DataStore());

    /* End of Outputs for SubSystem: '<S550>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S550>/OldValue' incorporates:
     *  ActionPort: '<S553>/Action Port'
     */
    BaseEngineController_LS_B.s550_Merge = rtb_Sum1_li;

    /* End of Outputs for SubSystem: '<S550>/OldValue' */
  }

  /* End of If: '<S550>/If' */

  /* S-Function Block: <S416>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (ACPres05In_DataStore()) = BaseEngineController_LS_B.s550_Merge;
    (ACPres05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s550_Merge, (ACPres05IdxArr_DataStore()), 5,
       (ACPres05Idx_DataStore()));
    BaseEngineController_LS_B.s416_motohawk_prelookup = (ACPres05Idx_DataStore());
  }

  /* S-Function Block: <S472>/motohawk_encoder_instant_rpm */
  {
    rtb_RPMInst = GetEncoderResourceInstantRPM();
  }

  /* DataTypeConversion: '<S472>/Data Type Conversion1' incorporates:
   *  S-Function (motohawk_sfun_encoder_instant_rpm): '<S472>/motohawk_encoder_instant_rpm'
   */
  BaseEngineController_LS_B.s472_RPMInst = (real_T)rtb_RPMInst;

  /* DataTypeConversion: '<S432>/Data Type Conversion' */
  if (BaseEngineController_LS_B.s472_RPMInst < 65536.0) {
    if (BaseEngineController_LS_B.s472_RPMInst >= 0.0) {
      rtb_DataTypeConversion_iq = (uint16_T)
        BaseEngineController_LS_B.s472_RPMInst;
    } else {
      rtb_DataTypeConversion_iq = 0U;
    }
  } else {
    rtb_DataTypeConversion_iq = MAX_uint16_T;
  }

  /* End of DataTypeConversion: '<S432>/Data Type Conversion' */
  /* Sum: '<S432>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S432>/motohawk_calibration3'
   *  S-Function (motohawk_sfun_calibration): '<S432>/motohawk_calibration4'
   */
  i = ((uint16_T)(StallRPMMinThreshold_DataStore())) - ((uint16_T)
    (StallRPMThresholdHyst_DataStore()));
  if (i <= 0) {
    i = 0;
  }

  rtb_Product_mp = (uint16_T)i;

  /* End of Sum: '<S432>/Sum' */

  /* RelationalOperator: '<S432>/Relational Operator1' */
  BaseEngineController_LS_B.s432_Stall = ((rtb_DataTypeConversion_iq <
    rtb_Product_mp));

  /* RelationalOperator: '<S432>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S432>/motohawk_calibration4'
   */
  BaseEngineController_LS_B.s432_Crank = ((rtb_DataTypeConversion_iq >
    ((uint16_T)(StallRPMMinThreshold_DataStore()))));

  /* RelationalOperator: '<S432>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S432>/motohawk_calibration1'
   */
  rtb_LogicalOperator6_jl = (rtb_DataTypeConversion_iq > ((uint16_T)
    (CrankToRunRPMThresh_DataStore())));

  /* UnitDelay: '<S432>/Unit Delay' */
  BaseEngineController_LS_B.s432_UnitDelay =
    BaseEngineController_LS_DWork.s432_UnitDelay_DSTATE;

  /* S-Function (motohawk_sfun_trigger): '<S432>/motohawk_trigger' */
  /* Enable for Trigger_FGND_TDC_EVENT_7871p001 */
  if (BaseEngineController_LS_DWork.s432_motohawk_trigger_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s432_motohawk_trigger_DWORK1 = 1;
  }

  /* Logic: '<S432>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S432>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S432>/motohawk_calibration2'
   */
  BaseEngineController_LS_B.s432_Run = ((rtb_LogicalOperator6_jl &&
    (BaseEngineController_LS_B.s455_Switch >= ((uint8_T)(RunLatchTDCs_DataStore())))));

  /* Stateflow: '<S432>/Engine State Machine' */

  /* Gateway: Foreground/Control/VirtualSensors/RawProcessed/EngineState/Engine State Machine */
  /* During: Foreground/Control/VirtualSensors/RawProcessed/EngineState/Engine State Machine */
  switch (BaseEngineController_LS_DWork.s453_is_c2_BaseEngineController_LS) {
   case BaseEngineController_LS_IN_Crank:
    /* During 'Crank': '<S453>:3' */
    if (BaseEngineController_LS_B.s432_Stall) {
      /* Transition: '<S453>:8' */
      BaseEngineController_LS_DWork.s453_is_c2_BaseEngineController_LS =
        BaseEngineController_LS_IN_Stall_d;

      /* Entry 'Stall': '<S453>:1' */
      BaseEngineController_LS_B.s453_State = 1U;
    } else {
      if (BaseEngineController_LS_B.s432_Run) {
        /* Transition: '<S453>:6' */
        BaseEngineController_LS_DWork.s453_is_c2_BaseEngineController_LS =
          BaseEngineController_LS_IN_Run;

        /* Entry 'Run': '<S453>:2' */
        BaseEngineController_LS_B.s453_State = 3U;
      }
    }
    break;

   case BaseEngineController_LS_IN_Run:
    /* During 'Run': '<S453>:2' */
    if (BaseEngineController_LS_B.s432_Stall) {
      /* Transition: '<S453>:7' */
      BaseEngineController_LS_DWork.s453_is_c2_BaseEngineController_LS =
        BaseEngineController_LS_IN_Stall_d;

      /* Entry 'Stall': '<S453>:1' */
      BaseEngineController_LS_B.s453_State = 1U;
    }
    break;

   case BaseEngineController_LS_IN_Stall_d:
    /* During 'Stall': '<S453>:1' */
    if (BaseEngineController_LS_B.s432_Crank) {
      /* Transition: '<S453>:5' */
      BaseEngineController_LS_DWork.s453_is_c2_BaseEngineController_LS =
        BaseEngineController_LS_IN_Crank;

      /* Entry 'Crank': '<S453>:3' */
      BaseEngineController_LS_B.s453_State = 2U;
    }
    break;

   default:
    /* Transition: '<S453>:4' */
    BaseEngineController_LS_DWork.s453_is_c2_BaseEngineController_LS =
      BaseEngineController_LS_IN_Stall_d;

    /* Entry 'Stall': '<S453>:1' */
    BaseEngineController_LS_B.s453_State = 1U;
    break;
  }

  /* End of Stateflow: '<S432>/Engine State Machine' */

  /* RelationalOperator: '<S96>/RelOp' incorporates:
   *  Constant: '<S96>/Constant'
   */
  rtb_LogicalOperator1_le = (BaseEngineController_LS_B.s453_State == 1);

  /* S-Function Block: <S471>/motohawk_ain5 Resource: ACSwPin */
  {
    extern NativeError_S ACSwPin_AnalogInput_Get(uint16_T *adc, uint16_T *status);
    ACSwPin_AnalogInput_Get(&rtb_motohawk_ain5_i, NULL);
  }

  /* DataTypeConversion: '<S496>/Data Type Conversion' incorporates:
   *  S-Function (motohawk_sfun_ain): '<S471>/motohawk_ain5'
   */
  BaseEngineController_LS_B.s496_DataTypeConversion = (real_T)
    rtb_motohawk_ain5_i;

  /* RelationalOperator: '<S496>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S496>/SwitchPoint'
   */
  rtb_LogicalOperator6_jl = (BaseEngineController_LS_B.s496_DataTypeConversion >
                             (ACSwSwitchPt_DataStore()));

  /* Logic: '<S496>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S496>/0 = No Inversion 1 = Inversion'
   */
  rtb_LogicalOperator6_jl ^= (ACSwPolarity_DataStore());

  /* If: '<S501>/If' incorporates:
   *  Inport: '<S502>/In1'
   *  Inport: '<S503>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S501>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S501>/override_enable'
   */
  if ((ACSw_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S501>/NewValue' incorporates:
     *  ActionPort: '<S502>/Action Port'
     */
    BaseEngineController_LS_B.s501_Merge = (ACSw_new_DataStore());

    /* End of Outputs for SubSystem: '<S501>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S501>/OldValue' incorporates:
     *  ActionPort: '<S503>/Action Port'
     */
    BaseEngineController_LS_B.s501_Merge = rtb_LogicalOperator6_jl;

    /* End of Outputs for SubSystem: '<S501>/OldValue' */
  }

  /* End of If: '<S501>/If' */

  /* Outputs for Enabled SubSystem: '<S15>/Stall' incorporates:
   *  EnablePort: '<S95>/Enable'
   */
  if (rtb_LogicalOperator1_le) {
    if (!BaseEngineController_LS_DWork.s15_Stall_MODE) {
      /* InitializeConditions for UnitDelay: '<S272>/Unit Delay' */
      BaseEngineController_LS_DWork.s272_UnitDelay_DSTATE = FALSE;

      /* InitializeConditions for UnitDelay: '<S273>/Unit Delay' */
      BaseEngineController_LS_DWork.s273_UnitDelay_DSTATE = FALSE;

      /* InitializeConditions for UnitDelay: '<S274>/Unit Delay' */
      BaseEngineController_LS_DWork.s274_UnitDelay_DSTATE = FALSE;

      /* InitializeConditions for UnitDelay: '<S275>/Unit Delay' */
      BaseEngineController_LS_DWork.s275_UnitDelay_DSTATE = 0.0;

      /* S-Function Block: <S277>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BaseEngineController_LS_DWork.s277_motohawk_delta_time_DWORK1 = now -
          Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
      }

      /* InitializeConditions for Stateflow: '<S268>/Ice Break' */
      BaseEngineController_LS_DWork.s276_is_active_c3_BaseEngineController_LS =
        0U;
      BaseEngineController_LS_DWork.s276_is_c3_BaseEngineController_LS = 0U;
      BaseEngineController_LS_B.s276_etc = 0.0;
      BaseEngineController_LS_DWork.s276_presentTicks = 0U;
      BaseEngineController_LS_DWork.s276_elapsedTicks = 0U;
      BaseEngineController_LS_DWork.s276_previousTicks = 0U;

      /* Enable for Stateflow: '<S268>/Ice Break' */
      BaseEngineController_LS_DWork.s276_presentTicks =
        BaseEngineController_LS_M->Timing.clockTick0;
      BaseEngineController_LS_DWork.s276_previousTicks =
        BaseEngineController_LS_DWork.s276_presentTicks;
      BaseEngineController_LS_DWork.s15_Stall_MODE = TRUE;
    }

    /* RelationalOperator: '<S269>/LT' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S266>/motohawk_calibration1'
     */
    rtb_BelowLoTarget_g = (BaseEngineController_LS_B.s636_Merge >=
      (ECTFanOn_DataStore()));

    /* RelationalOperator: '<S269>/LT1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S266>/motohawk_calibration'
     */
    rtb_Switch_oh = (BaseEngineController_LS_B.s636_Merge <=
                     (ECTFanOff_DataStore()));

    /* CombinatorialLogic: '<S272>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_g != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_Switch_oh != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_da[0] =
        BaseEngineController_LS_ConstP.pooled809[rowidx];
      rtb_CombinatorialLogic_da[1] =
        BaseEngineController_LS_ConstP.pooled809[rowidx + 4];
    }

    /* Switch: '<S272>/Switch1' incorporates:
     *  UnitDelay: '<S272>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_da[1]) {
      rtb_LogicalOperator6_jl = rtb_CombinatorialLogic_da[0];
    } else {
      rtb_LogicalOperator6_jl =
        BaseEngineController_LS_DWork.s272_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S272>/Switch1' */
    /* RelationalOperator: '<S270>/LT' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S266>/motohawk_calibration3'
     */
    rtb_Switch_oh = (BaseEngineController_LS_B.s654_Merge >= (IATFanOn_DataStore
                      ()));

    /* RelationalOperator: '<S270>/LT1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S266>/motohawk_calibration2'
     */
    rtb_BelowLoTarget_g = (BaseEngineController_LS_B.s654_Merge <=
      (IATFanOff_DataStore()));

    /* CombinatorialLogic: '<S273>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_Switch_oh != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_g != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_da[0] =
        BaseEngineController_LS_ConstP.pooled809[rowidx];
      rtb_CombinatorialLogic_da[1] =
        BaseEngineController_LS_ConstP.pooled809[rowidx + 4];
    }

    /* Switch: '<S273>/Switch1' incorporates:
     *  UnitDelay: '<S273>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_da[1]) {
      rtb_LogicalOperator1_le = rtb_CombinatorialLogic_da[0];
    } else {
      rtb_LogicalOperator1_le =
        BaseEngineController_LS_DWork.s273_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S273>/Switch1' */
    /* RelationalOperator: '<S271>/LT' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S266>/motohawk_calibration5'
     */
    rtb_Switch_oh = (BaseEngineController_LS_B.s550_Merge >=
                     (ACPresFanOn_DataStore()));

    /* RelationalOperator: '<S271>/LT1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S266>/motohawk_calibration4'
     */
    rtb_BelowLoTarget_g = (BaseEngineController_LS_B.s550_Merge <=
      (ACPresFanOff_DataStore()));

    /* CombinatorialLogic: '<S274>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_Switch_oh != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_g != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_da[0] =
        BaseEngineController_LS_ConstP.pooled809[rowidx];
      rtb_CombinatorialLogic_da[1] =
        BaseEngineController_LS_ConstP.pooled809[rowidx + 4];
    }

    /* Switch: '<S274>/Switch1' incorporates:
     *  UnitDelay: '<S274>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_da[1]) {
      rtb_Switch1_pb = rtb_CombinatorialLogic_da[0];
    } else {
      rtb_Switch1_pb = BaseEngineController_LS_DWork.s274_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S274>/Switch1' */
    /* Switch: '<S266>/Switch' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S266>/motohawk_calibration15'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S266>/motohawk_interpolation_1d'
     */
    if ((FAN_Mode_DataStore())) {
      rtb_Switch_om = (real_T)rtb_LogicalOperator6_jl;
    } else {
      /* S-Function Block: <S266>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d_c = TableInterpolation1D_real_T
          (BaseEngineController_LS_B.s418_motohawk_prelookup, (real_T *)
           ((ECTFanSpeed_StallTbl_DataStore())), 5);
        (ECTFanSpeed_Stall_DataStore()) = rtb_motohawk_interpolation_1d_c;
      }

      rtb_Switch_om = rtb_motohawk_interpolation_1d_c;
    }

    /* End of Switch: '<S266>/Switch' */

    /* Switch: '<S266>/Switch1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S266>/motohawk_calibration15'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S266>/motohawk_interpolation_1d1'
     */
    if ((FAN_Mode_DataStore())) {
      rtb_Switch1_f = (real_T)rtb_LogicalOperator1_le;
    } else {
      /* S-Function Block: <S266>/motohawk_interpolation_1d1 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d1_a = TableInterpolation1D_real_T
          (BaseEngineController_LS_B.s419_motohawk_prelookup, (real_T *)
           ((IATFanSpeed_StallTbl_DataStore())), 5);
        (IATFanSpeed_Stall_DataStore()) = rtb_motohawk_interpolation_1d1_a;
      }

      rtb_Switch1_f = rtb_motohawk_interpolation_1d1_a;
    }

    /* End of Switch: '<S266>/Switch1' */

    /* Switch: '<S266>/Switch2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S266>/motohawk_calibration15'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S266>/motohawk_interpolation_1d2'
     */
    if ((FAN_Mode_DataStore())) {
      rtb_Switch2_a = (real_T)rtb_Switch1_pb;
    } else {
      /* S-Function Block: <S266>/motohawk_interpolation_1d2 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d2_g = TableInterpolation1D_real_T
          (BaseEngineController_LS_B.s416_motohawk_prelookup, (real_T *)
           ((ACPresFanSpeed_StallTbl_DataStore())), 5);
        (ACPresFanSpeed_Stall_DataStore()) = rtb_motohawk_interpolation_1d2_g;
      }

      rtb_Switch2_a = rtb_motohawk_interpolation_1d2_g;
    }

    /* End of Switch: '<S266>/Switch2' */

    /* Switch: '<S266>/Switch3' incorporates:
     *  Product: '<S266>/Product8'
     *  S-Function (motohawk_sfun_calibration): '<S266>/motohawk_calibration14'
     *  S-Function (motohawk_sfun_calibration): '<S266>/motohawk_calibration15'
     */
    if ((FAN_Mode_DataStore())) {
      rtb_Switch3_p = (real_T)BaseEngineController_LS_B.s501_Merge;
    } else {
      rtb_Switch3_p = (real_T)BaseEngineController_LS_B.s501_Merge *
        (ACSwFanSpeed_Stall_DataStore());
    }

    /* End of Switch: '<S266>/Switch3' */

    /* S-Function (motohawk_sfun_fault_action): '<S266>/motohawk_fault_action'
     *
     * Regarding '<S266>/motohawk_fault_action':
       Get Fault Action Status: DisableFanStall
     */
    {
      extern boolean_T GetFaultActionStatus(uint32_T action);
      rtb_Switch_oh = GetFaultActionStatus(5);
    }

    /* Switch: '<S266>/Switch4' incorporates:
     *  Constant: '<S266>/Constant'
     */
    if (rtb_Switch_oh) {
      rtb_Switch4_i = 0.0;
    } else {
      /* Product: '<S266>/Product3' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S266>/motohawk_calibration9'
       */
      rtb_DataTypeConversion1_d = rtb_Switch3_p * (real_T)(Fan1ACSw_DataStore());

      /* Product: '<S266>/Product2' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S266>/motohawk_calibration8'
       */
      rtb_DataTypeConversion_b2 = rtb_Switch2_a * (real_T)(Fan1ACPres_DataStore());

      /* Product: '<S266>/Product1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S266>/motohawk_calibration7'
       */
      rtb_Product1_gw = rtb_Switch1_f * (real_T)(Fan1IAT_DataStore());

      /* MinMax: '<S266>/MinMax' incorporates:
       *  Product: '<S266>/Product'
       *  S-Function (motohawk_sfun_calibration): '<S266>/motohawk_calibration6'
       */
      rtb_UnitDelay3_mp = rtb_Switch_om * (real_T)(Fan1ECT_DataStore());
      y = (rtb_UnitDelay3_mp >= rtb_Product1_gw) || rtIsNaN(rtb_Product1_gw) ?
        rtb_UnitDelay3_mp : rtb_Product1_gw;
      y = (y >= rtb_DataTypeConversion_b2) || rtIsNaN(rtb_DataTypeConversion_b2)
        ? y : rtb_DataTypeConversion_b2;
      rtb_Switch4_i = (y >= rtb_DataTypeConversion1_d) || rtIsNaN
        (rtb_DataTypeConversion1_d) ? y : rtb_DataTypeConversion1_d;
    }

    /* End of Switch: '<S266>/Switch4' */

    /* Switch: '<S266>/Switch5' incorporates:
     *  Constant: '<S266>/Constant1'
     */
    if (rtb_Switch_oh) {
      rtb_DataTypeConversion1_d = 0.0;
    } else {
      /* Product: '<S266>/Product7' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S266>/motohawk_calibration13'
       */
      rtb_Product1_gw = rtb_Switch3_p * (real_T)(Fan2ACSw_DataStore());

      /* Product: '<S266>/Product6' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S266>/motohawk_calibration12'
       */
      rtb_DataTypeConversion_b2 = rtb_Switch2_a * (real_T)(Fan2ACPres_DataStore());

      /* Product: '<S266>/Product5' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S266>/motohawk_calibration11'
       */
      rtb_DataTypeConversion1_d = rtb_Switch1_f * (real_T)(Fan2IAT_DataStore());

      /* MinMax: '<S266>/MinMax1' incorporates:
       *  Product: '<S266>/Product4'
       *  S-Function (motohawk_sfun_calibration): '<S266>/motohawk_calibration10'
       */
      rtb_UnitDelay3_mp = rtb_Switch_om * (real_T)(Fan2ECT_DataStore());
      y = (rtb_UnitDelay3_mp >= rtb_DataTypeConversion1_d) || rtIsNaN
        (rtb_DataTypeConversion1_d) ? rtb_UnitDelay3_mp :
        rtb_DataTypeConversion1_d;
      y = (y >= rtb_DataTypeConversion_b2) || rtIsNaN(rtb_DataTypeConversion_b2)
        ? y : rtb_DataTypeConversion_b2;
      rtb_DataTypeConversion1_d = (y >= rtb_Product1_gw) || rtIsNaN
        (rtb_Product1_gw) ? y : rtb_Product1_gw;
    }

    /* End of Switch: '<S266>/Switch5' */

    /* UnitDelay: '<S275>/Unit Delay' */
    BaseEngineController_LS_B.s275_UnitDelay =
      BaseEngineController_LS_DWork.s275_UnitDelay_DSTATE;

    /* Switch: '<S267>/Switch' incorporates:
     *  Constant: '<S267>/Constant'
     *  RelationalOperator: '<S267>/Relational Operator'
     *  S-Function (motohawk_sfun_calibration): '<S267>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S267>/motohawk_calibration1'
     */
    if ((Constant_Fuel_Pump_DataStore())) {
      rtb_Switch_oh = TRUE;
    } else {
      rtb_Switch_oh = (BaseEngineController_LS_B.s275_UnitDelay <
                       (FuelPumpStartTime_DataStore()));
    }

    /* End of Switch: '<S267>/Switch' */
    /* S-Function Block: <S275>/motohawk_delta_time */
    rtb_motohawk_delta_time_op = 0.005;

    /* Sum: '<S275>/Sum' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S275>/motohawk_delta_time'
     */
    rtb_DataTypeConversion_b2 = rtb_motohawk_delta_time_op +
      BaseEngineController_LS_B.s275_UnitDelay;

    /* S-Function Block: <S277>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s277_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_cj = ((real_T) delta) * 0.000001;
    }

    /* RelationalOperator: '<S268>/Relational Operator2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S268>/motohawk_calibration3'
     */
    rtb_RelationalOperator2_py = (BaseEngineController_LS_B.s430_Switch1 >=
      (ETC_StallAppOvrThesh_DataStore()));

    /* Switch: '<S277>/Switch' incorporates:
     *  Constant: '<S277>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S277>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S277>/motohawk_delta_time'
     *  Sum: '<S277>/Sum'
     */
    if (rtb_RelationalOperator2_py) {
      rtb_Product1_gw = rtb_motohawk_delta_time_cj + AppStallOvrTmr_DataStore();
    } else {
      rtb_Product1_gw = 0.0;
    }

    /* End of Switch: '<S277>/Switch' */
    /* RelationalOperator: '<S268>/Relational Operator3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S268>/motohawk_calibration4'
     */
    rtb_RelationalOperator3_bp = (rtb_Product1_gw >=
      (ETC_StallAppOvrTm_DataStore()));

    /* Stateflow: '<S268>/Ice Break' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S268>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S268>/motohawk_calibration1'
     *  S-Function (motohawk_sfun_calibration): '<S268>/motohawk_calibration2'
     */
    BaseEngineController_LS_DWork.s276_presentTicks =
      BaseEngineController_LS_M->Timing.clockTick0;
    BaseEngineController_LS_DWork.s276_elapsedTicks =
      BaseEngineController_LS_DWork.s276_presentTicks -
      BaseEngineController_LS_DWork.s276_previousTicks;
    BaseEngineController_LS_DWork.s276_previousTicks =
      BaseEngineController_LS_DWork.s276_presentTicks;
    BaseEngineController_LS_DWork.s276_temporalCounter_i1 =
      BaseEngineController_LS_DWork.s276_temporalCounter_i1 +
      BaseEngineController_LS_DWork.s276_elapsedTicks;

    /* Gateway: Foreground/Control/Controller/Stall/Stall Throttle/Ice Break */
    /* During: Foreground/Control/Controller/Stall/Stall Throttle/Ice Break */
    if (BaseEngineController_LS_DWork.s276_is_active_c3_BaseEngineController_LS ==
        0) {
      /* Entry: Foreground/Control/Controller/Stall/Stall Throttle/Ice Break */
      BaseEngineController_LS_DWork.s276_is_active_c3_BaseEngineController_LS =
        1U;

      /* Transition: '<S276>:2' */
      BaseEngineController_LS_DWork.s276_is_c3_BaseEngineController_LS =
        BaseEngineController_LS_IN_Init;
    } else {
      switch (BaseEngineController_LS_DWork.s276_is_c3_BaseEngineController_LS)
  {
       case BaseEngineController_LS_IN_Init:
        /* During 'Init': '<S276>:1' */
        if (BaseEngineController_LS_B.s460_Sum < (ETC_IceBreakEnblTm_DataStore()))
        {
          /* Transition: '<S276>:5' */
          BaseEngineController_LS_DWork.s276_is_c3_BaseEngineController_LS =
            BaseEngineController_LS_IN_Open;
          BaseEngineController_LS_DWork.s276_temporalCounter_i1 = 0U;
        } else {
          BaseEngineController_LS_B.s276_etc = 0.0;
        }
        break;

       case BaseEngineController_LS_IN_Open:
        /* During 'Open': '<S276>:4' */
        if (BaseEngineController_LS_DWork.s276_temporalCounter_i1 >= (uint32_T)
            ceil((ETC_IceBreakHoldTm_DataStore()) / 0.2 - 2.0E-9)) {
          /* Transition: '<S276>:14' */
          BaseEngineController_LS_DWork.s276_is_c3_BaseEngineController_LS =
            BaseEngineController_LS_IN_Wait;
        } else {
          BaseEngineController_LS_B.s276_etc = (ETC_IceBreakPos_DataStore());
        }
        break;

       case BaseEngineController_LS_IN_Wait:
        /* During 'Wait': '<S276>:15' */
        if (BaseEngineController_LS_B.s460_Sum > (ETC_IceBreakEnblTm_DataStore()))
        {
          /* Transition: '<S276>:16' */
          BaseEngineController_LS_DWork.s276_is_c3_BaseEngineController_LS =
            BaseEngineController_LS_IN_Init;
        } else {
          BaseEngineController_LS_B.s276_etc = 0.0;
        }
        break;

       default:
        /* Transition: '<S276>:2' */
        BaseEngineController_LS_DWork.s276_is_c3_BaseEngineController_LS =
          BaseEngineController_LS_IN_Init;
        break;
      }
    }

    /* End of Stateflow: '<S268>/Ice Break' */

    /* Switch: '<S268>/Switch' incorporates:
     *  Product: '<S268>/Product1'
     *  Product: '<S268>/Product2'
     */
    if ((rtb_RelationalOperator3_bp ? rtb_RelationalOperator2_py : 0) != 0) {
      BaseEngineController_LS_B.s268_Switch = (rtb_RelationalOperator3_bp ?
        (real_T)rtb_RelationalOperator2_py : 0.0) *
        BaseEngineController_LS_B.s430_Switch1;
    } else {
      BaseEngineController_LS_B.s268_Switch = BaseEngineController_LS_B.s276_etc;
    }

    /* End of Switch: '<S268>/Switch' */

    /* Saturate: '<S277>/Saturation' */
    rtb_Saturation_d1 = rtb_Product1_gw >= 16000.0 ? 16000.0 : rtb_Product1_gw <=
      0.0 ? 0.0 : rtb_Product1_gw;

    /* S-Function (motohawk_sfun_data_write): '<S277>/motohawk_data_write' */
    /* Write to Data Storage as scalar: AppStallOvrTmr */
    {
      AppStallOvrTmr_DataStore() = rtb_Saturation_d1;
    }

    /* ZeroOrderHold: '<S95>/Zero-Order Hold12' */
    BaseEngineController_LS_B.s92_FAN1 = rtb_Switch4_i;

    /* ZeroOrderHold: '<S95>/Zero-Order Hold13' */
    BaseEngineController_LS_B.s92_FAN2 = rtb_DataTypeConversion1_d;

    /* ZeroOrderHold: '<S95>/Zero-Order Hold14' incorporates:
     *  Constant: '<S95>/OFF3'
     */
    BaseEngineController_LS_B.s92_AC = FALSE;

    /* ZeroOrderHold: '<S95>/Zero-Order Hold3' */
    BaseEngineController_LS_B.s92_SparkAdv =
      BaseEngineController_LS_ConstB.s95_motohawk_replicate2;

    /* ZeroOrderHold: '<S95>/Zero-Order Hold4' incorporates:
     *  Constant: '<S95>/No Spark'
     */
    BaseEngineController_LS_B.s92_SparkEnergy = 0.0;

    /* ZeroOrderHold: '<S95>/Zero-Order Hold5' incorporates:
     *  Constant: '<S95>/No Start EOI'
     */
    BaseEngineController_LS_B.s92_MakeUpEOI = 0.0;

    /* ZeroOrderHold: '<S95>/Zero-Order Hold6' */
    memcpy((void *)(&BaseEngineController_LS_B.s92_FPC[0]), (void *)
           (&BaseEngineController_LS_ConstB.s95_motohawk_replicate[0]), sizeof
           (real_T) << 3U);

    /* ZeroOrderHold: '<S95>/Zero-Order Hold7' */
    BaseEngineController_LS_B.s92_FUELP = rtb_Switch_oh;

    /* ZeroOrderHold: '<S95>/Zero-Order Hold8' incorporates:
     *  Constant: '<S95>/No Start Fuel Timing'
     */
    BaseEngineController_LS_B.s92_SOI = 0.0;

    /* ZeroOrderHold: '<S95>/Zero-Order Hold9' */
    BaseEngineController_LS_B.s92_Throttle =
      BaseEngineController_LS_B.s268_Switch;

    /* Update for UnitDelay: '<S272>/Unit Delay' */
    BaseEngineController_LS_DWork.s272_UnitDelay_DSTATE =
      rtb_LogicalOperator6_jl;

    /* Update for UnitDelay: '<S273>/Unit Delay' */
    BaseEngineController_LS_DWork.s273_UnitDelay_DSTATE =
      rtb_LogicalOperator1_le;

    /* Update for UnitDelay: '<S274>/Unit Delay' */
    BaseEngineController_LS_DWork.s274_UnitDelay_DSTATE = rtb_Switch1_pb;

    /* Update for UnitDelay: '<S275>/Unit Delay' */
    BaseEngineController_LS_DWork.s275_UnitDelay_DSTATE =
      rtb_DataTypeConversion_b2;
  } else {
    if (BaseEngineController_LS_DWork.s15_Stall_MODE) {
      /* Disable for Stateflow: '<S268>/Ice Break' */
      BaseEngineController_LS_DWork.s276_presentTicks =
        BaseEngineController_LS_M->Timing.clockTick0;
      BaseEngineController_LS_DWork.s276_elapsedTicks =
        BaseEngineController_LS_DWork.s276_presentTicks -
        BaseEngineController_LS_DWork.s276_previousTicks;
      BaseEngineController_LS_DWork.s276_previousTicks =
        BaseEngineController_LS_DWork.s276_presentTicks;
      BaseEngineController_LS_DWork.s276_temporalCounter_i1 =
        BaseEngineController_LS_DWork.s276_temporalCounter_i1 +
        BaseEngineController_LS_DWork.s276_elapsedTicks;
      BaseEngineController_LS_DWork.s15_Stall_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S15>/Stall' */
  /* S-Function Block: <S472>/motohawk_encoder_average_rpm */
  {
    rtb_RPM = GetEncoderResourceAverageRPM();
  }

  /* DataTypeConversion: '<S536>/Data Type Conversion' incorporates:
   *  S-Function (motohawk_sfun_encoder_average_rpm): '<S472>/motohawk_encoder_average_rpm'
   */
  rtb_DataTypeConversion1_d = (real_T)rtb_RPM;

  /* S-Function Block: <S529>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s529_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_e = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S529>/Product' incorporates:
   *  MinMax: '<S529>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S529>/motohawk_calibration'
   */
  rtb_DataTypeConversion_e /= (rtb_DataTypeConversion_e >=
    (RPMFiltConst_DataStore())) || rtIsNaN((RPMFiltConst_DataStore())) ?
    rtb_DataTypeConversion_e : (RPMFiltConst_DataStore());

  /* Sum: '<S536>/Sum1' incorporates:
   *  Constant: '<S536>/Constant'
   *  Product: '<S536>/Product'
   *  Product: '<S536>/Product1'
   *  Sum: '<S536>/Sum'
   *  UnitDelay: '<S536>/Unit Delay'
   */
  BaseEngineController_LS_B.s536_Sum1 = (1.0 - rtb_DataTypeConversion_e) *
    BaseEngineController_LS_DWork.s536_UnitDelay_DSTATE +
    rtb_DataTypeConversion1_d * rtb_DataTypeConversion_e;

  /* Logic: '<S706>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S706>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S706>/motohawk_fault_status4'
   */
  rtb_LogicalOperator1_cv = (IsFaultActive(140) || IsFaultActive(141));

  /* Logic: '<S706>/Logical Operator6' */
  rtb_LogicalOperator6_jl = !rtb_LogicalOperator1_cv;

  /* Logic: '<S706>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S706>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S706>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_le = (IsFaultSuspected(140) || IsFaultSuspected(141));

  /* S-Function Block: <S475>/motohawk_ain6 Resource: TPS1AnalogInput */
  {
    extern NativeError_S TPS1AnalogInput_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    TPS1AnalogInput_AnalogInput_Get(&rtb_motohawk_ain6, NULL);
  }

  /* DataTypeConversion: '<S663>/Data Type Conversion1' incorporates:
   *  S-Function (motohawk_sfun_ain): '<S475>/motohawk_ain6'
   */
  rtb_DataTypeConversion1_d = (real_T)rtb_motohawk_ain6;

  /* Switch: '<S663>/Switch' incorporates:
   *  Fcn: '<S663>/Fcn'
   *  S-Function (motohawk_sfun_calibration): '<S663>/motohawk_calibration2'
   */
  if ((TPS1Rev_Polarity_DataStore())) {
    BaseEngineController_LS_B.s663_Switch = 1023.0 - rtb_DataTypeConversion1_d;
  } else {
    BaseEngineController_LS_B.s663_Switch = rtb_DataTypeConversion1_d;
  }

  /* End of Switch: '<S663>/Switch' */

  /* S-Function (motohawk_sfun_data_read): '<S703>/motohawk_data_read' */
  rtb_Product_mp = TPS1Raw_Adpt_Low_DataStore();

  /* MinMax: '<S703>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S663>/motohawk_calibration9'
   */
  rtb_UnitDelay3_mp = (real_T)rtb_Product_mp;
  BaseEngineController_LS_B.s703_MinMax = (rtb_UnitDelay3_mp <=
    (TPS1Adapt_Low_Max_DataStore())) || rtIsNaN((TPS1Adapt_Low_Max_DataStore()))
    ? rtb_UnitDelay3_mp : (TPS1Adapt_Low_Max_DataStore());

  /* Sum: '<S663>/Sum2' */
  rtb_DataTypeConversion1_d = BaseEngineController_LS_B.s663_Switch -
    BaseEngineController_LS_B.s703_MinMax;

  /* S-Function (motohawk_sfun_data_read): '<S703>/motohawk_data_read1' */
  rtb_Product_mp = TPS1Raw_Adpt_Hi_DataStore();

  /* MinMax: '<S703>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S663>/motohawk_calibration11'
   */
  rtb_UnitDelay3_mp = (real_T)rtb_Product_mp;
  BaseEngineController_LS_B.s703_MinMax1 = (rtb_UnitDelay3_mp >=
    (TPS1Adapt_Hi_Min_DataStore())) || rtIsNaN((TPS1Adapt_Hi_Min_DataStore())) ?
    rtb_UnitDelay3_mp : (TPS1Adapt_Hi_Min_DataStore());

  /* Gain: '<S663>/Gain2' incorporates:
   *  Product: '<S663>/Product1'
   *  Sum: '<S663>/Sum1'
   */
  rtb_DataTypeConversion_e = rtb_DataTypeConversion1_d /
    (BaseEngineController_LS_B.s703_MinMax1 -
     BaseEngineController_LS_B.s703_MinMax) * 100.0;

  /* MinMax: '<S707>/MinMax' incorporates:
   *  Constant: '<S663>/Constant1'
   */
  rtb_DataTypeConversion_e = rtb_DataTypeConversion_e >= 0.0 ?
    rtb_DataTypeConversion_e : 0.0;

  /* MinMax: '<S707>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S663>/motohawk_calibration1'
   */
  BaseEngineController_LS_B.s707_MinMax1 = (rtb_DataTypeConversion_e <=
    (TPS1MaxLimit_DataStore())) || rtIsNaN((TPS1MaxLimit_DataStore())) ?
    rtb_DataTypeConversion_e : (TPS1MaxLimit_DataStore());

  /* S-Function Block: <S705>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s705_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_e = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S705>/Product' incorporates:
   *  MinMax: '<S705>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S705>/motohawk_calibration'
   */
  rtb_DataTypeConversion_e /= (rtb_DataTypeConversion_e >=
    (TPS1FilterConst_DataStore())) || rtIsNaN((TPS1FilterConst_DataStore())) ?
    rtb_DataTypeConversion_e : (TPS1FilterConst_DataStore());

  /* Sum: '<S713>/Sum1' incorporates:
   *  Constant: '<S713>/Constant'
   *  Product: '<S713>/Product'
   *  Product: '<S713>/Product1'
   *  Sum: '<S713>/Sum'
   *  UnitDelay: '<S713>/Unit Delay'
   */
  rtb_Sum1_hw = (1.0 - rtb_DataTypeConversion_e) *
    BaseEngineController_LS_DWork.s713_UnitDelay_DSTATE +
    BaseEngineController_LS_B.s707_MinMax1 * rtb_DataTypeConversion_e;

  /* UnitDelay: '<S706>/Unit Delay1' */
  rtb_UnitDelay1_d = BaseEngineController_LS_DWork.s706_UnitDelay1_DSTATE;

  /* If: '<S706>/If' incorporates:
   *  Logic: '<S706>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_jl && rtb_LogicalOperator1_le) {
    /* Outputs for IfAction SubSystem: '<S706>/If Action Subsystem' incorporates:
     *  ActionPort: '<S714>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay1_d, &rtb_Merge_li);

    /* End of Outputs for SubSystem: '<S706>/If Action Subsystem' */
  } else if (rtb_LogicalOperator1_cv) {
    /* Outputs for IfAction SubSystem: '<S706>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S715>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((TPS1DfltValue_DataStore()),
      &rtb_Merge_li);

    /* End of Outputs for SubSystem: '<S706>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S706>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S716>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_Sum1_hw, &rtb_Merge_li);

    /* End of Outputs for SubSystem: '<S706>/If Action Subsystem2' */
  }

  /* End of If: '<S706>/If' */

  /* If: '<S717>/If' incorporates:
   *  Inport: '<S718>/In1'
   *  Inport: '<S719>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S717>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S717>/override_enable'
   */
  if ((TPS1_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S717>/NewValue' incorporates:
     *  ActionPort: '<S718>/Action Port'
     */
    BaseEngineController_LS_B.s717_Merge = (TPS1_new_DataStore());

    /* End of Outputs for SubSystem: '<S717>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S717>/OldValue' incorporates:
     *  ActionPort: '<S719>/Action Port'
     */
    BaseEngineController_LS_B.s717_Merge = rtb_Merge_li;

    /* End of Outputs for SubSystem: '<S717>/OldValue' */
  }

  /* End of If: '<S717>/If' */

  /* Logic: '<S723>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S723>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S723>/motohawk_fault_status4'
   */
  rtb_LogicalOperator1_cv = (IsFaultActive(146) || IsFaultActive(147));

  /* Logic: '<S723>/Logical Operator6' */
  rtb_LogicalOperator6_jl = !rtb_LogicalOperator1_cv;

  /* Logic: '<S723>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S723>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S723>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_le = (IsFaultSuspected(146) || IsFaultSuspected(147));

  /* S-Function Block: <S475>/motohawk_ain9 Resource: TPS2AnalogInput */
  {
    extern NativeError_S TPS2AnalogInput_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    TPS2AnalogInput_AnalogInput_Get(&rtb_motohawk_ain9, NULL);
  }

  /* DataTypeConversion: '<S664>/Data Type Conversion1' incorporates:
   *  S-Function (motohawk_sfun_ain): '<S475>/motohawk_ain9'
   */
  rtb_DataTypeConversion1_d = (real_T)rtb_motohawk_ain9;

  /* Switch: '<S664>/Switch' incorporates:
   *  Fcn: '<S664>/Fcn'
   *  S-Function (motohawk_sfun_calibration): '<S664>/motohawk_calibration2'
   */
  if ((TPS2Rev_Polarity_DataStore())) {
    BaseEngineController_LS_B.s664_Switch = 1023.0 - rtb_DataTypeConversion1_d;
  } else {
    BaseEngineController_LS_B.s664_Switch = rtb_DataTypeConversion1_d;
  }

  /* End of Switch: '<S664>/Switch' */

  /* S-Function (motohawk_sfun_data_read): '<S720>/motohawk_data_read' */
  rtb_Product_mp = TPS2Raw_Adpt_Low_DataStore();

  /* MinMax: '<S720>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S664>/motohawk_calibration9'
   */
  rtb_UnitDelay3_mp = (real_T)rtb_Product_mp;
  BaseEngineController_LS_B.s720_MinMax = (rtb_UnitDelay3_mp <=
    (TPS2Adapt_Low_Max_DataStore())) || rtIsNaN((TPS2Adapt_Low_Max_DataStore()))
    ? rtb_UnitDelay3_mp : (TPS2Adapt_Low_Max_DataStore());

  /* Sum: '<S664>/Sum2' */
  rtb_DataTypeConversion1_d = BaseEngineController_LS_B.s664_Switch -
    BaseEngineController_LS_B.s720_MinMax;

  /* S-Function (motohawk_sfun_data_read): '<S720>/motohawk_data_read1' */
  rtb_Product_mp = TPS2Raw_Adpt_Hi_DataStore();

  /* MinMax: '<S720>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S664>/motohawk_calibration11'
   */
  rtb_UnitDelay3_mp = (real_T)rtb_Product_mp;
  BaseEngineController_LS_B.s720_MinMax1 = (rtb_UnitDelay3_mp >=
    (TPS2Adapt_Hi_Min_DataStore())) || rtIsNaN((TPS2Adapt_Hi_Min_DataStore())) ?
    rtb_UnitDelay3_mp : (TPS2Adapt_Hi_Min_DataStore());

  /* Gain: '<S664>/Gain2' incorporates:
   *  Product: '<S664>/Product1'
   *  Sum: '<S664>/Sum1'
   */
  rtb_DataTypeConversion_e = rtb_DataTypeConversion1_d /
    (BaseEngineController_LS_B.s720_MinMax1 -
     BaseEngineController_LS_B.s720_MinMax) * 100.0;

  /* MinMax: '<S724>/MinMax' incorporates:
   *  Constant: '<S664>/Constant1'
   */
  rtb_DataTypeConversion_e = rtb_DataTypeConversion_e >= 0.0 ?
    rtb_DataTypeConversion_e : 0.0;

  /* MinMax: '<S724>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S664>/motohawk_calibration1'
   */
  BaseEngineController_LS_B.s724_MinMax1 = (rtb_DataTypeConversion_e <=
    (TPS2MaxLimit_DataStore())) || rtIsNaN((TPS2MaxLimit_DataStore())) ?
    rtb_DataTypeConversion_e : (TPS2MaxLimit_DataStore());

  /* S-Function Block: <S722>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s722_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_e = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S722>/Product' incorporates:
   *  MinMax: '<S722>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S722>/motohawk_calibration'
   */
  rtb_DataTypeConversion_e /= (rtb_DataTypeConversion_e >=
    (TPS2FilterConst_DataStore())) || rtIsNaN((TPS2FilterConst_DataStore())) ?
    rtb_DataTypeConversion_e : (TPS2FilterConst_DataStore());

  /* Sum: '<S730>/Sum1' incorporates:
   *  Constant: '<S730>/Constant'
   *  Product: '<S730>/Product'
   *  Product: '<S730>/Product1'
   *  Sum: '<S730>/Sum'
   *  UnitDelay: '<S730>/Unit Delay'
   */
  rtb_Sum1_lp = (1.0 - rtb_DataTypeConversion_e) *
    BaseEngineController_LS_DWork.s730_UnitDelay_DSTATE +
    BaseEngineController_LS_B.s724_MinMax1 * rtb_DataTypeConversion_e;

  /* UnitDelay: '<S723>/Unit Delay1' */
  rtb_UnitDelay1_p = BaseEngineController_LS_DWork.s723_UnitDelay1_DSTATE;

  /* If: '<S723>/If' incorporates:
   *  Logic: '<S723>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_jl && rtb_LogicalOperator1_le) {
    /* Outputs for IfAction SubSystem: '<S723>/If Action Subsystem' incorporates:
     *  ActionPort: '<S731>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay1_p, &rtb_Merge_mv);

    /* End of Outputs for SubSystem: '<S723>/If Action Subsystem' */
  } else if (rtb_LogicalOperator1_cv) {
    /* Outputs for IfAction SubSystem: '<S723>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S732>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((TPS2DfltValue_DataStore()),
      &rtb_Merge_mv);

    /* End of Outputs for SubSystem: '<S723>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S723>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S733>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_Sum1_lp, &rtb_Merge_mv);

    /* End of Outputs for SubSystem: '<S723>/If Action Subsystem2' */
  }

  /* End of If: '<S723>/If' */

  /* If: '<S734>/If' incorporates:
   *  Inport: '<S735>/In1'
   *  Inport: '<S736>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S734>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S734>/override_enable'
   */
  if ((TPS2_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S734>/NewValue' incorporates:
     *  ActionPort: '<S735>/Action Port'
     */
    BaseEngineController_LS_B.s734_Merge = (TPS2_new_DataStore());

    /* End of Outputs for SubSystem: '<S734>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S734>/OldValue' incorporates:
     *  ActionPort: '<S736>/Action Port'
     */
    BaseEngineController_LS_B.s734_Merge = rtb_Merge_mv;

    /* End of Outputs for SubSystem: '<S734>/OldValue' */
  }

  /* End of If: '<S734>/If' */

  /* Logic: '<S437>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S437>/motohawk_fault_status'
   *  S-Function (motohawk_sfun_fault_status): '<S437>/motohawk_fault_status1'
   */
  rtb_LogicalOperator6_jl = (IsFaultActive(140) || IsFaultActive(141));

  /* Logic: '<S437>/Logical Operator6' incorporates:
   *  Logic: '<S437>/Logical Operator5'
   *  S-Function (motohawk_sfun_fault_status): '<S437>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S437>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_le = (rtb_LogicalOperator6_jl && (IsFaultActive(146) ||
    IsFaultActive(147)));

  /* Switch: '<S437>/Switch2' incorporates:
   *  Logic: '<S437>/Logical Operator1'
   *  S-Function (motohawk_sfun_fault_status): '<S437>/motohawk_fault_status4'
   */
  if (rtb_LogicalOperator1_le || IsFaultActive(148)) {
    /* MinMax: '<S437>/MinMax' */
    BaseEngineController_LS_B.s437_Switch2 =
      (BaseEngineController_LS_B.s734_Merge >=
       BaseEngineController_LS_B.s717_Merge) || rtIsNaN
      (BaseEngineController_LS_B.s717_Merge) ?
      BaseEngineController_LS_B.s734_Merge :
      BaseEngineController_LS_B.s717_Merge;
  } else {
    /* Switch: '<S437>/Switch1' */
    if (rtb_LogicalOperator6_jl) {
      BaseEngineController_LS_B.s437_Switch2 =
        BaseEngineController_LS_B.s734_Merge;
    } else {
      BaseEngineController_LS_B.s437_Switch2 =
        BaseEngineController_LS_B.s717_Merge;
    }

    /* End of Switch: '<S437>/Switch1' */
  }

  /* End of Switch: '<S437>/Switch2' */

  /* RelationalOperator: '<S91>/RelOp' incorporates:
   *  Constant: '<S91>/Constant'
   */
  rtb_LogicalOperator6_jl = (BaseEngineController_LS_B.s453_State == 2);

  /* S-Function Block: <S563>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s563_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_ea = ((real_T) delta) * 0.000001;
  }

  /* UnitDelay: '<S563>/Unit Delay' */
  rtb_DataTypeConversion1_d =
    BaseEngineController_LS_DWork.s563_UnitDelay_DSTATE;

  /* Logic: '<S538>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S538>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S538>/motohawk_fault_status4'
   */
  rtb_LogicalOperator1_cv = (IsFaultActive(69) || IsFaultActive(70));

  /* Logic: '<S538>/Logical Operator6' */
  rtb_LogicalOperator1_le = !rtb_LogicalOperator1_cv;

  /* Logic: '<S538>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S538>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S538>/motohawk_fault_status3'
   */
  rtb_Switch1_pb = (IsFaultSuspected(69) || IsFaultSuspected(70));

  /* S-Function Block: <S473>/motohawk_frequency_in Frequency Input Get: FuelSensorPin */
  {
    extern NativeError_S FuelSensorPin_FrequencyInput_Get(uint32_T *frequency,
      int16_T *duty_cycle);
    FuelSensorPin_FrequencyInput_Get
      (&BaseEngineController_LS_B.s473_motohawk_frequency_in, NULL);
  }

  /* DataTypeConversion: '<S538>/Data Type Conversion' */
  rtb_DataTypeConversion_e = (real_T)
    BaseEngineController_LS_B.s473_motohawk_frequency_in;

  /* Product: '<S538>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S538>/motohawk_calibration4'
   */
  rtb_DataTypeConversion_b2 = rtb_DataTypeConversion_e * (FuelSensGain_DataStore
    ());

  /* Sum: '<S538>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S538>/motohawk_calibration5'
   */
  BaseEngineController_LS_B.s538_Sum1 = rtb_DataTypeConversion_b2 +
    (FuelSensOfst_DataStore());

  /* Saturate: '<S538>/Saturation' */
  rtb_Saturation_g = BaseEngineController_LS_B.s538_Sum1 >= 90.0 ? 90.0 :
    BaseEngineController_LS_B.s538_Sum1 <= 0.0 ? 0.0 :
    BaseEngineController_LS_B.s538_Sum1;

  /* UnitDelay: '<S538>/Unit Delay1' */
  rtb_UnitDelay1_ew = BaseEngineController_LS_DWork.s538_UnitDelay1_DSTATE;

  /* If: '<S538>/If' incorporates:
   *  Logic: '<S538>/Logical Operator5'
   */
  if (rtb_LogicalOperator1_le && rtb_Switch1_pb) {
    /* Outputs for IfAction SubSystem: '<S538>/If Action Subsystem' incorporates:
     *  ActionPort: '<S555>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay1_ew, &rtb_Merge_i);

    /* End of Outputs for SubSystem: '<S538>/If Action Subsystem' */
  } else if (rtb_LogicalOperator1_cv) {
    /* Outputs for IfAction SubSystem: '<S538>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S556>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((FuelSensDfltValue_DataStore()),
      &rtb_Merge_i);

    /* End of Outputs for SubSystem: '<S538>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S538>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S557>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_Saturation_g, &rtb_Merge_i);

    /* End of Outputs for SubSystem: '<S538>/If Action Subsystem2' */
  }

  /* End of If: '<S538>/If' */

  /* Product: '<S563>/Product1' incorporates:
   *  S-Function (motohawk_sfun_delta_time): '<S563>/motohawk_delta_time'
   *  Sum: '<S563>/Sum3'
   */
  rtb_Switch_fz = 1.0 / rtb_motohawk_delta_time_ea * (rtb_Merge_i -
    rtb_DataTypeConversion1_d);

  /* MinMax: '<S564>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S561>/motohawk_calibration1'
   */
  rtb_Switch_fz = (rtb_Switch_fz >= (Fall_Rate_DataStore())) || rtIsNaN
    ((Fall_Rate_DataStore())) ? rtb_Switch_fz : (Fall_Rate_DataStore());

  /* Sum: '<S563>/Sum2' incorporates:
   *  MinMax: '<S564>/MinMax1'
   *  Product: '<S563>/Product'
   *  S-Function (motohawk_sfun_calibration): '<S561>/motohawk_calibration'
   *  S-Function (motohawk_sfun_delta_time): '<S563>/motohawk_delta_time'
   */
  rtb_Sum2_gr = ((rtb_Switch_fz <= (Rise_Rate_DataStore())) || rtIsNaN
                 ((Rise_Rate_DataStore())) ? rtb_Switch_fz :
                 (Rise_Rate_DataStore())) * rtb_motohawk_delta_time_ea +
    rtb_DataTypeConversion1_d;

  /* S-Function Block: <S559>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s559_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_fz = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S559>/Product' incorporates:
   *  MinMax: '<S559>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S559>/motohawk_calibration'
   */
  rtb_Switch_fz /= (rtb_Switch_fz >= (FuelSensFilterConst_DataStore())) ||
    rtIsNaN((FuelSensFilterConst_DataStore())) ? rtb_Switch_fz :
    (FuelSensFilterConst_DataStore());

  /* Sum: '<S562>/Sum1' incorporates:
   *  Constant: '<S562>/Constant'
   *  Product: '<S562>/Product'
   *  Product: '<S562>/Product1'
   *  Sum: '<S562>/Sum'
   *  UnitDelay: '<S562>/Unit Delay'
   */
  rtb_Sum1_mz = (1.0 - rtb_Switch_fz) *
    BaseEngineController_LS_DWork.s562_UnitDelay_DSTATE + rtb_Merge_i *
    rtb_Switch_fz;

  /* UnitDelay: '<S560>/Unit Delay' */
  rtb_UnitDelay_nd = BaseEngineController_LS_DWork.s560_UnitDelay_DSTATE;

  /* UnitDelay: '<S560>/Unit Delay1' */
  rtb_UnitDelay1_h = BaseEngineController_LS_DWork.s560_UnitDelay1_DSTATE;

  /* UnitDelay: '<S560>/Unit Delay2' */
  rtb_DataTypeConversion1_d =
    BaseEngineController_LS_DWork.s560_UnitDelay2_DSTATE;

  /* MultiPortSwitch: '<S554>/Multiport Switch' incorporates:
   *  Product: '<S560>/Product'
   *  S-Function (motohawk_sfun_calibration): '<S554>/motohawk_calibration'
   *  S-Function (motohawk_sfun_calibration): '<S560>/motohawk_calibration'
   */
  switch (((uint8_T)(Filter_Type_Selection_DataStore()))) {
   case 0:
    rtb_DataTypeConversion1_d = rtb_Sum2_gr;
    break;

   case 1:
    rtb_DataTypeConversion1_d = rtb_Sum1_mz;
    break;

   default:
    /* Product: '<S560>/Product3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S560>/motohawk_calibration3'
     */
    rtb_DataTypeConversion1_d *= (Gain3_DataStore());

    /* Sum: '<S560>/Sum2' incorporates:
     *  Product: '<S560>/Product2'
     *  S-Function (motohawk_sfun_calibration): '<S560>/motohawk_calibration2'
     */
    rtb_DataTypeConversion1_d += (Gain2_DataStore()) * rtb_UnitDelay1_h;

    /* Sum: '<S560>/Sum' incorporates:
     *  Product: '<S560>/Product1'
     *  S-Function (motohawk_sfun_calibration): '<S560>/motohawk_calibration1'
     *  Sum: '<S560>/Sum1'
     */
    rtb_DataTypeConversion1_d = ((Gain1_DataStore()) * rtb_UnitDelay_nd +
      rtb_DataTypeConversion1_d) + rtb_Merge_i;
    rtb_DataTypeConversion1_d *= (FinalGain_DataStore());
    break;
  }

  /* End of MultiPortSwitch: '<S554>/Multiport Switch' */
  /* If: '<S558>/If' incorporates:
   *  Inport: '<S565>/In1'
   *  Inport: '<S566>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S558>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S558>/override_enable'
   */
  if ((FuelSens_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S558>/NewValue' incorporates:
     *  ActionPort: '<S565>/Action Port'
     */
    BaseEngineController_LS_B.s558_Merge = (FuelSens_new_DataStore());

    /* End of Outputs for SubSystem: '<S558>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S558>/OldValue' incorporates:
     *  ActionPort: '<S566>/Action Port'
     */
    BaseEngineController_LS_B.s558_Merge = rtb_DataTypeConversion1_d;

    /* End of Outputs for SubSystem: '<S558>/OldValue' */
  }

  /* End of If: '<S558>/If' */

  /* Outputs for Enabled SubSystem: '<S15>/Crank' incorporates:
   *  EnablePort: '<S90>/Enable'
   */
  if (rtb_LogicalOperator6_jl) {
    if (!BaseEngineController_LS_DWork.s15_Crank_MODE) {
      /* InitializeConditions for UnitDelay: '<S101>/Unit Delay' */
      BaseEngineController_LS_DWork.s101_UnitDelay_DSTATE = 0.0;

      /* S-Function Block: <S101>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BaseEngineController_LS_DWork.s101_motohawk_delta_time_DWORK1 = now -
          Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
      }

      BaseEngineController_LS_DWork.s15_Crank_MODE = TRUE;
    }

    /* RelationalOperator: '<S100>/RelOp' incorporates:
     *  Constant: '<S100>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S98>/motohawk_data_read'
     */
    rtb_LogicalOperator6_jl = (((uint8_T)FuelPulseState_DataStore()) == 1);

    /* UnitDelay: '<S101>/Unit Delay' */
    rtb_DataTypeConversion1_d =
      BaseEngineController_LS_DWork.s101_UnitDelay_DSTATE;

    /* Outputs for Enabled SubSystem: '<S98>/WritePulseState' incorporates:
     *  EnablePort: '<S102>/Enable'
     */
    /* Logic: '<S98>/Logical Operator' incorporates:
     *  RelationalOperator: '<S98>/Relational Operator'
     *  S-Function (motohawk_sfun_calibration): '<S98>/motohawk_calibration'
     */
    if (rtb_LogicalOperator6_jl && (rtb_DataTypeConversion1_d >=
         (FuelPulseTime_DataStore()))) {
      /* S-Function (motohawk_sfun_data_write): '<S102>/motohawk_data_write' incorporates:
       *  Constant: '<S102>/Constant'
       */
      /* Write to Data Storage as scalar: FuelPulseState */
      {
        FuelPulseState_DataStore() = ((uint8_T)2U);
      }
    }

    /* End of Logic: '<S98>/Logical Operator' */
    /* End of Outputs for SubSystem: '<S98>/WritePulseState' */
    /* S-Function Block: <S90>/motohawk_prelookup1 */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (CrankECT05Idx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_LS_B.s636_Merge, (CrankECT05IdxArr_DataStore()), 5,
         (CrankECT05Idx_DataStore()));
      rtb_motohawk_prelookup1_n = (CrankECT05Idx_DataStore());
    }

    /* Switch: '<S98>/Switch' incorporates:
     *  Constant: '<S98>/Constant'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S98>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_prelookup): '<S90>/motohawk_prelookup1'
     */
    if (rtb_LogicalOperator6_jl) {
      /* S-Function Block: <S98>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d_j = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup1_n, (real_T *) ((CrankPulseTbl_DataStore())),
           5);
        (CrankPulse_DataStore()) = rtb_motohawk_interpolation_1d_j;
      }

      rtb_Switch3_p = rtb_motohawk_interpolation_1d_j;
    } else {
      rtb_Switch3_p = 0.0;
    }

    /* End of Switch: '<S98>/Switch' */
    /* S-Function Block: <S101>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s101_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_er = ((real_T) delta) * 0.000001;
    }

    /* Sum: '<S101>/Sum' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S101>/motohawk_delta_time'
     */
    rtb_DataTypeConversion1_d += rtb_motohawk_delta_time_er;

    /* MultiPortSwitch: '<S97>/Multiport Switch1' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S97>/motohawk_data_read1'
     */
    if (AirControlSource_DataStore() == FALSE) {
      rtb_DataTypeConversion_b2 = BaseEngineController_LS_B.s683_Merge;
    } else {
      rtb_DataTypeConversion_b2 = BaseEngineController_LS_B.s437_Switch2;
    }

    /* End of MultiPortSwitch: '<S97>/Multiport Switch1' */

    /* MultiPortSwitch: '<S99>/Multiport Switch2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S99>/motohawk_calibration1'
     *  S-Function (motohawk_sfun_calibration): '<S99>/motohawk_calibration2'
     *  S-Function (motohawk_sfun_data_read): '<S97>/motohawk_data_read1'
     */
    if (AirControlSource_DataStore() == FALSE) {
      rtb_motohawk_replicate1 = (OpenThrottleFPCScalar_ETC_DataStore());
    } else {
      rtb_motohawk_replicate1 = (OpenThrottleFPCScalar_TPS_DataStore());
    }

    /* End of MultiPortSwitch: '<S99>/Multiport Switch2' */

    /* Sum: '<S99>/Add' incorporates:
     *  Constant: '<S99>/ClearFloodFueling1'
     *  Gain: '<S99>/Gain'
     *  Product: '<S99>/Product1'
     */
    rtb_Product1_gw = 0.01 * rtb_DataTypeConversion_b2 * rtb_motohawk_replicate1
      + 1.0;

    /* RelationalOperator: '<S97>/Relational Operator' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S97>/motohawk_calibration2'
     */
    rtb_LogicalOperator6_jl = (rtb_DataTypeConversion_b2 >=
      (ClearFloodThreshold_DataStore()));

    /* S-Function Block: <S90>/motohawk_prelookup */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (CrankRPM05In_DataStore()) = BaseEngineController_LS_B.s536_Sum1;
      (CrankRPM05Idx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_LS_B.s536_Sum1, (CrankRPM05IdxArr_DataStore()), 5,
         (CrankRPM05Idx_DataStore()));
      rtb_motohawk_prelookup_c = (CrankRPM05Idx_DataStore());
    }

    /* Switch: '<S97>/Switch' incorporates:
     *  Constant: '<S97>/ClearFloodFueling'
     *  Product: '<S97>/Product2'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S97>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S97>/motohawk_interpolation_1d1'
     *  S-Function (motohawk_sfun_interpolation_2d): '<S97>/motohawk_interpolation_2d'
     *  S-Function (motohawk_sfun_prelookup): '<S90>/motohawk_prelookup'
     *  S-Function (motohawk_sfun_prelookup): '<S90>/motohawk_prelookup1'
     *  S-Function (motohawk_sfun_prelookup): '<S90>/motohawk_prelookup2'
     *  S-Function (motohawk_sfun_prelookup): '<S90>/motohawk_prelookup3'
     */
    if (rtb_LogicalOperator6_jl) {
      rtb_motohawk_replicate1 = 0.0;
    } else {
      /* S-Function Block: <S90>/motohawk_prelookup3 */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (CrankOXY05In_DataStore()) = BaseEngineController_LS_B.s558_Merge;
        (CrankOXY05Idx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_LS_B.s558_Merge, (CrankOXY05IdxArr_DataStore()),
           5, (CrankOXY05Idx_DataStore()));
        rtb_motohawk_prelookup3_n = (CrankOXY05Idx_DataStore());
      }

      /* S-Function Block: <S97>/motohawk_interpolation_1d1 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d1_bc = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup3_n, (real_T *) ((CrankFPC_OXYMultTbl_DataStore
             ())), 5);
        (CrankFPC_OXYMult_DataStore()) = rtb_motohawk_interpolation_1d1_bc;
      }

      /* S-Function Block: <S90>/motohawk_prelookup2 */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (CrankIAT05Idx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_LS_B.s654_Merge, (CrankIAT05IdxArr_DataStore()),
           5, (CrankIAT05Idx_DataStore()));
        rtb_motohawk_prelookup2_h = (CrankIAT05Idx_DataStore());
      }

      /* S-Function Block: <S97>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d_o = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup2_h, (real_T *) ((CrankFPC_IATMultTbl_DataStore
             ())), 5);
        (CrankFPC_IATMult_DataStore()) = rtb_motohawk_interpolation_1d_o;
      }

      /* S-Function Block: <S97>/motohawk_interpolation_2d */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_motohawk_interpolation_2d_j = TableInterpolation2D_real_T
          (rtb_motohawk_prelookup1_n, rtb_motohawk_prelookup_c, (real_T *)
           ((CrankFPCMap_DataStore())), 5, 5);
        (CrankFPC_DataStore()) = rtb_motohawk_interpolation_2d_j;
      }

      rtb_motohawk_replicate1 = rtb_motohawk_interpolation_2d_j *
        rtb_motohawk_interpolation_1d_o * rtb_motohawk_interpolation_1d1_bc;
    }

    /* End of Switch: '<S97>/Switch' */

    /* Sum: '<S97>/Sum' incorporates:
     *  Product: '<S97>/Product'
     */
    rtb_Sum_a = rtb_Product1_gw * rtb_motohawk_replicate1 + rtb_Switch3_p;

    /* ZeroOrderHold: '<S90>/Zero-Order Hold12' incorporates:
     *  Constant: '<S90>/Mult1'
     */
    BaseEngineController_LS_B.s92_FAN1 = 0.0;

    /* ZeroOrderHold: '<S90>/Zero-Order Hold13' incorporates:
     *  Constant: '<S90>/Mult2'
     */
    BaseEngineController_LS_B.s92_FAN2 = 0.0;

    /* ZeroOrderHold: '<S90>/Zero-Order Hold14' incorporates:
     *  Constant: '<S90>/OFF3'
     */
    BaseEngineController_LS_B.s92_AC = FALSE;

    /* S-Function Block: <S90>/motohawk_interpolation_2d */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_motohawk_interpolation_2d_g = TableInterpolation2D_real_T
        (rtb_motohawk_prelookup1_n, rtb_motohawk_prelookup_c, (real_T *)
         ((CrankSparkMap_DataStore())), 5, 5);
      (CrankSpark_DataStore()) = rtb_motohawk_interpolation_2d_g;
    }

    /* S-Function (motohawk_sfun_replicate): '<S90>/motohawk_replicate1' */

    /* S-Function Block: <S90>/motohawk_replicate1 */
    rtb_motohawk_replicate1 = rtb_motohawk_interpolation_2d_g;

    /* ZeroOrderHold: '<S90>/Zero-Order Hold3' */
    BaseEngineController_LS_B.s92_SparkAdv = rtb_motohawk_replicate1;

    /* S-Function Block: <S90>/motohawk_interpolation_2d1 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_motohawk_interpolation_2d1_b = TableInterpolation2D_real_T
        (rtb_motohawk_prelookup1_n, rtb_motohawk_prelookup_c, (real_T *)
         ((CrankSpkEnergyMap_DataStore())), 5, 5);
      (CrankSpkEnergy_DataStore()) = rtb_motohawk_interpolation_2d1_b;
    }

    /* ZeroOrderHold: '<S90>/Zero-Order Hold4' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S90>/motohawk_interpolation_2d1'
     *  S-Function (motohawk_sfun_prelookup): '<S90>/motohawk_prelookup'
     *  S-Function (motohawk_sfun_prelookup): '<S90>/motohawk_prelookup1'
     */
    BaseEngineController_LS_B.s92_SparkEnergy = rtb_motohawk_interpolation_2d1_b;

    /* S-Function Block: <S90>/motohawk_interpolation_1d4 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d4_m = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_c, (real_T *) ((CrankSOITbl_DataStore())), 5);
      (CrankSOI_DataStore()) = rtb_motohawk_interpolation_1d4_m;
    }

    /* ZeroOrderHold: '<S90>/Zero-Order Hold5' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S90>/motohawk_interpolation_1d4'
     *  S-Function (motohawk_sfun_prelookup): '<S90>/motohawk_prelookup'
     */
    BaseEngineController_LS_B.s92_SOI = rtb_motohawk_interpolation_1d4_m;

    /* S-Function (motohawk_sfun_replicate): '<S90>/motohawk_replicate' */

    /* S-Function Block: <S90>/motohawk_replicate */
    {
      int_T i1;
      real_T *y0 = rtb_motohawk_replicate;
      for (i1=0; i1 < 8; i1++) {
        y0[i1] = rtb_Sum_a;
      }
    }

    /* ZeroOrderHold: '<S90>/Zero-Order Hold6' */
    memcpy((void *)(&BaseEngineController_LS_B.s92_FPC[0]), (void *)
           &rtb_motohawk_replicate[0], sizeof(real_T) << 3U);

    /* ZeroOrderHold: '<S90>/Zero-Order Hold7' incorporates:
     *  Constant: '<S90>/ON'
     */
    BaseEngineController_LS_B.s92_FUELP = TRUE;

    /* S-Function Block: <S90>/motohawk_interpolation_1d5 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d5 = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_c, (real_T *) ((CrankMakeUpEOITbl_DataStore())),
         5);
      (CrankMakeUpEOI_DataStore()) = rtb_motohawk_interpolation_1d5;
    }

    /* ZeroOrderHold: '<S90>/Zero-Order Hold8' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S90>/motohawk_interpolation_1d5'
     *  S-Function (motohawk_sfun_prelookup): '<S90>/motohawk_prelookup'
     */
    BaseEngineController_LS_B.s92_MakeUpEOI = rtb_motohawk_interpolation_1d5;

    /* S-Function Block: <S90>/motohawk_interpolation_1d1 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d1_k = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup1_n, (real_T *) ((CrankAirflowSetPtTbl_DataStore())),
         5);
      (CrankAirflowSetPt_DataStore()) = rtb_motohawk_interpolation_1d1_k;
    }

    /* ZeroOrderHold: '<S90>/Zero-Order Hold9' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S90>/motohawk_interpolation_1d1'
     *  S-Function (motohawk_sfun_prelookup): '<S90>/motohawk_prelookup1'
     */
    BaseEngineController_LS_B.s92_Throttle = rtb_motohawk_interpolation_1d1_k;

    /* Update for UnitDelay: '<S101>/Unit Delay' */
    BaseEngineController_LS_DWork.s101_UnitDelay_DSTATE =
      rtb_DataTypeConversion1_d;
  } else {
    if (BaseEngineController_LS_DWork.s15_Crank_MODE) {
      BaseEngineController_LS_DWork.s15_Crank_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S15>/Crank' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S477>/Read CAN Message' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_8560p0009;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_8560p0009,
      &messageObj);
    if ((BaseEngineController_LS_B.s477_ReadCANMessage_o1 + 1) >
        BaseEngineController_LS_B.s477_ReadCANMessage_o1)
      BaseEngineController_LS_B.s477_ReadCANMessage_o1++;
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
      BaseEngineController_LS_B.s477_Lambda = ((real_T) tmp0) / ((real_T) 10000);
      BaseEngineController_LS_B.s477_OxygenConcentratio = ((real_T) tmp1) /
        ((real_T) 1000);
      BaseEngineController_LS_B.s477_SystemVolts = ((real_T) tmp2) / ((real_T)
        10);
      BaseEngineController_LS_B.s477_HeaterVolts = ((real_T) tmp3) / ((real_T)
        10);
      BaseEngineController_LS_B.s477_ReadCANMessage_o6 = (real_T) tmp4;
      BaseEngineController_LS_B.s477_ReadCANMessage_o7 = (real_T) tmp5;
      BaseEngineController_LS_B.s477_ReadCANMessage_o8 = (real_T) tmp6;
      BaseEngineController_LS_B.s477_ReadCANMessage_o9 = (real_T) tmp7;
      BaseEngineController_LS_B.s477_ReadCANMessage_o10 = (real_T) tmp8;
      BaseEngineController_LS_B.s477_ReadCANMessage_o1 = 0;
    }
  }

  /* DataTypeConversion: '<S477>/Data Type Conversion2' */
  BaseEngineController_LS_B.s477_DataValidState =
    ((BaseEngineController_LS_B.s477_ReadCANMessage_o8 != 0.0));

  /* S-Function (motohawk_sfun_read_canmsg): '<S477>/Read CAN Message1' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_8561p0007;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_8561p0007,
      &messageObj);
    if ((BaseEngineController_LS_B.s477_ReadCANMessage1_o1 + 1) >
        BaseEngineController_LS_B.s477_ReadCANMessage1_o1)
      BaseEngineController_LS_B.s477_ReadCANMessage1_o1++;
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
      BaseEngineController_LS_B.s477_Lambda_c = ((real_T) tmp0) / ((real_T)
        10000);
      BaseEngineController_LS_B.s477_OxygenConcentratio_d = ((real_T) tmp1) /
        ((real_T) 1000);
      BaseEngineController_LS_B.s477_SystemVolts_k = ((real_T) tmp2) / ((real_T)
        10);
      BaseEngineController_LS_B.s477_HeaterVolts_d = ((real_T) tmp3) / ((real_T)
        10);
      BaseEngineController_LS_B.s477_ReadCANMessage1_o6 = (real_T) tmp4;
      BaseEngineController_LS_B.s477_ReadCANMessage1_o7 = (real_T) tmp5;
      BaseEngineController_LS_B.s477_ReadCANMessage1_o8 = (real_T) tmp6;
      BaseEngineController_LS_B.s477_ReadCANMessage1_o9 = (real_T) tmp7;
      BaseEngineController_LS_B.s477_ReadCANMessage1_o10 = (real_T) tmp8;
      BaseEngineController_LS_B.s477_ReadCANMessage1_o1 = 0;
    }
  }

  /* DataTypeConversion: '<S477>/Data Type Conversion6' */
  BaseEngineController_LS_B.s477_DataValidState_f =
    ((BaseEngineController_LS_B.s477_ReadCANMessage1_o8 != 0.0));

  /* S-Function Block: <S424>/motohawk_prelookup2 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (TPS09In_DataStore()) = BaseEngineController_LS_B.s437_Switch2;
    (TPS09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s437_Switch2, (TPS09IdxArr_DataStore()), 9,
       (TPS09Idx_DataStore()));
    rtb_motohawk_prelookup2 = (TPS09Idx_DataStore());
  }

  /* S-Function (motohawk_sfun_read_canmsg): '<S476>/Read CAN Message2' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_8452p0007;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_8452p0007,
      &messageObj);
    if ((BaseEngineController_LS_B.s476_ReadCANMessage2_o1 + 1) >
        BaseEngineController_LS_B.s476_ReadCANMessage2_o1)
      BaseEngineController_LS_B.s476_ReadCANMessage2_o1++;
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
      BaseEngineController_LS_B.s476_GPS_Speed = ((real_T) tmp0) / ((real_T)
        62.1373);
      BaseEngineController_LS_B.s476_GPS_Altitude = ((real_T) tmp1) / ((real_T)
        3.28084);
      BaseEngineController_LS_B.s476_GPS_Course = ((real_T) tmp2) / ((real_T)
        100);
      BaseEngineController_LS_B.s476_ReadCANMessage2_o5 = (real_T) tmp3;
      BaseEngineController_LS_B.s476_ReadCANMessage2_o1 = 0;
    }
  }

  /* S-Function (motohawk_sfun_read_canmsg): '<S476>/Read CAN Message' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_8450p0007;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_8450p0007,
      &messageObj);
    if ((BaseEngineController_LS_B.s476_ReadCANMessage_o1 + 1) >
        BaseEngineController_LS_B.s476_ReadCANMessage_o1)
      BaseEngineController_LS_B.s476_ReadCANMessage_o1++;
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
      BaseEngineController_LS_B.s476_GPS_Valid = (real_T) tmp0;
      BaseEngineController_LS_B.s476_ReadCANMessage_o3 = ((real_T) tmp1) +
        ((real_T) 2000);
      BaseEngineController_LS_B.s476_ReadCANMessage_o4 = (real_T) tmp2;
      BaseEngineController_LS_B.s476_ReadCANMessage_o5 = (real_T) tmp3;
      BaseEngineController_LS_B.s476_ReadCANMessage_o6 = (real_T) tmp4;
      BaseEngineController_LS_B.s476_ReadCANMessage_o7 = (real_T) tmp5;
      BaseEngineController_LS_B.s476_ReadCANMessage_o8 = (real_T) tmp6;
      BaseEngineController_LS_B.s476_ReadCANMessage_o1 = 0;
    }
  }

  /* DataTypeConversion: '<S476>/Data Type Conversion6' */
  BaseEngineController_LS_B.s476_GPS_Valid_l =
    ((BaseEngineController_LS_B.s476_GPS_Valid != 0.0));

  /* Logic: '<S441>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S441>/motohawk_fault_status2'
   */
  rtb_LogicalOperator6_jl = !IsFaultActive(73);

  /* Logic: '<S441>/Logical Operator' incorporates:
   *  Logic: '<S441>/Logical Operator2'
   *  S-Function (motohawk_sfun_fault_status): '<S441>/motohawk_fault_status1'
   */
  rtb_Switch1_pb = (BaseEngineController_LS_B.s476_GPS_Valid_l &&
                    rtb_LogicalOperator6_jl && (!IsFaultActive(75)));

  /* Logic: '<S441>/Logical Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S441>/motohawk_calibration1'
   */
  rtb_RelationalOperator2_py = ((VSPD_GPSPreferred_DataStore()) &&
    rtb_Switch1_pb);

  /* UnitDelay: '<S500>/Unit Delay' */
  rtb_DataTypeConversion_b2 =
    BaseEngineController_LS_DWork.s500_UnitDelay_DSTATE;

  /* UnitDelay: '<S525>/Unit Delay' */
  rtb_DataTypeConversion1_d =
    BaseEngineController_LS_DWork.s525_UnitDelay_DSTATE;

  /* S-Function Block: <S516>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s516_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_fz = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S516>/Product' incorporates:
   *  MinMax: '<S516>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S516>/motohawk_calibration'
   */
  rtb_Switch_fz /= (rtb_Switch_fz >= (VSPDFiltConst_DataStore())) || rtIsNaN
    ((VSPDFiltConst_DataStore())) ? rtb_Switch_fz : (VSPDFiltConst_DataStore());

  /* Logic: '<S499>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S499>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S499>/motohawk_fault_status4'
   */
  rtb_LogicalOperator1_cv = (IsFaultActive(149) || IsFaultActive(150));

  /* Logic: '<S499>/Logical Operator6' */
  rtb_LogicalOperator6_jl = !rtb_LogicalOperator1_cv;

  /* Logic: '<S499>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S499>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S499>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_le = (IsFaultSuspected(149) || IsFaultSuspected(150));

  /* S-Function Block: <S471>/motohawk_frequency_in1 Frequency Input Get: VSPD_Pin */
  {
    extern NativeError_S VSPD_Pin_FrequencyInput_Get(uint32_T *frequency,
      int16_T *duty_cycle);
    VSPD_Pin_FrequencyInput_Get(&rtb_DataTypeConversion6,
      &rtb_DataTypeConversion2_p);
  }

  /* DataTypeConversion: '<S471>/Data Type Conversion1' */
  rtb_DataTypeConversion_fq = (real_T)rtb_DataTypeConversion6;

  /* Gain: '<S471>/Gain1' */
  BaseEngineController_LS_B.s471_Gain1 = 0.01 * rtb_DataTypeConversion_fq;

  /* S-Function Block: <S521>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (VSPDIdx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s471_Gain1, (VSPDIdxArr_DataStore()), 5,
       (VSPDIdx_DataStore()));
    rtb_motohawk_prelookup_n = (VSPDIdx_DataStore());
  }

  /* S-Function Block: <S521>/motohawk_interpolation_1d */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    BaseEngineController_LS_B.s521_motohawk_interpolation_1d =
      TableInterpolation1D_real_T(rtb_motohawk_prelookup_n, (real_T *)
      ((VSPDTbl_DataStore())), 5);
  }

  /* UnitDelay: '<S499>/Unit Delay' */
  rtb_UnitDelay_jw = BaseEngineController_LS_DWork.s499_UnitDelay_DSTATE;

  /* If: '<S499>/If' incorporates:
   *  Logic: '<S499>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_jl && rtb_LogicalOperator1_le) {
    /* Outputs for IfAction SubSystem: '<S499>/If Action Subsystem' incorporates:
     *  ActionPort: '<S517>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay_jw, &rtb_Merge_j);

    /* End of Outputs for SubSystem: '<S499>/If Action Subsystem' */
  } else if (rtb_LogicalOperator1_cv) {
    /* Outputs for IfAction SubSystem: '<S499>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S518>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((VSPDDefault_DataStore()),
      &rtb_Merge_j);

    /* End of Outputs for SubSystem: '<S499>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S499>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S519>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      (BaseEngineController_LS_B.s521_motohawk_interpolation_1d, &rtb_Merge_j);

    /* End of Outputs for SubSystem: '<S499>/If Action Subsystem2' */
  }

  /* End of If: '<S499>/If' */

  /* Sum: '<S522>/Sum1' incorporates:
   *  Constant: '<S522>/Constant'
   *  Product: '<S522>/Product'
   *  Product: '<S522>/Product1'
   *  Sum: '<S522>/Sum'
   *  UnitDelay: '<S522>/Unit Delay'
   */
  rtb_Sum1_g3 = (1.0 - rtb_Switch_fz) *
    BaseEngineController_LS_DWork.s522_UnitDelay_DSTATE + rtb_Merge_j *
    rtb_Switch_fz;

  /* If: '<S520>/If' incorporates:
   *  Inport: '<S523>/In1'
   *  Inport: '<S524>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S520>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S520>/override_enable'
   */
  if ((VSPD_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S520>/NewValue' incorporates:
     *  ActionPort: '<S523>/Action Port'
     */
    BaseEngineController_LS_B.s520_Merge = (VSPD_new_DataStore());

    /* End of Outputs for SubSystem: '<S520>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S520>/OldValue' incorporates:
     *  ActionPort: '<S524>/Action Port'
     */
    BaseEngineController_LS_B.s520_Merge = rtb_Sum1_g3;

    /* End of Outputs for SubSystem: '<S520>/OldValue' */
  }

  /* End of If: '<S520>/If' */

  /* Sum: '<S525>/Sum2' */
  rtb_DataTypeConversion1_d = BaseEngineController_LS_B.s520_Merge -
    rtb_DataTypeConversion1_d;

  /* S-Function Block: <S525>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s525_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_o = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S525>/Product' incorporates:
   *  S-Function (motohawk_sfun_delta_time): '<S525>/motohawk_delta_time'
   */
  rtb_DataTypeConversion_fq = rtb_DataTypeConversion1_d /
    rtb_motohawk_delta_time_o;

  /* Abs: '<S500>/Abs' */
  rtb_DataTypeConversion_fq = fabs(rtb_DataTypeConversion_fq);

  /* RelationalOperator: '<S500>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S500>/motohawk_calibration2'
   */
  rtb_LogicalOperator6_jl = (rtb_DataTypeConversion_fq >=
    (VSPD_RateReject_DataStore()));

  /* Logic: '<S500>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S500>/motohawk_calibration1'
   */
  rtb_LogicalOperator1_le = (rtb_LogicalOperator6_jl &&
    (VSPD_RateReject_Enable_DataStore()));

  /* Sum: '<S500>/Sum' incorporates:
   *  UnitDelay: '<S500>/Unit Delay1'
   */
  rtb_DataTypeConversion_fq = BaseEngineController_LS_B.s520_Merge -
    BaseEngineController_LS_DWork.s500_UnitDelay1_DSTATE;

  /* Abs: '<S500>/Abs2' */
  rtb_DataTypeConversion_fq = fabs(rtb_DataTypeConversion_fq);

  /* RelationalOperator: '<S500>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S500>/motohawk_calibration4'
   */
  rtb_LogicalOperator6_jl = (rtb_DataTypeConversion_fq >=
    (VPSD_ChangeReject_DataStore()));

  /* Abs: '<S500>/Abs1' */
  rtb_DataTypeConversion_fq = fabs(BaseEngineController_LS_B.s520_Merge);

  /* Logic: '<S500>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S500>/Relational Operator1'
   *  S-Function (motohawk_sfun_calibration): '<S500>/motohawk_calibration3'
   */
  rtb_LogicalOperator6_jl = (rtb_LogicalOperator6_jl &&
    (rtb_DataTypeConversion_fq <= (VSPD_ZeroSpeed_DataStore())));

  /* Logic: '<S500>/Logical Operator1' incorporates:
   *  Logic: '<S500>/Logical Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S500>/motohawk_calibration5'
   */
  rtb_LogicalOperator1_cv = (rtb_LogicalOperator1_le || (rtb_LogicalOperator6_jl
    && (VSPD_ChangeReject_Enable_DataStore())));

  /* UnitDelay: '<S500>/Unit Delay2' */
  rtb_RelationalOperator6_h =
    BaseEngineController_LS_DWork.s500_UnitDelay2_DSTATE;

  /* Memory: '<S526>/Memory' */
  rtb_RelationalOperator5_fz =
    BaseEngineController_LS_DWork.s526_Memory_PreviousInput;

  /* CombinatorialLogic: '<S526>/Logic' */
  {
    uint_T rowidx= 0;

    /* Compute the truth table row index corresponding to the input */
    rowidx = (rowidx << 1) + (uint_T)(rtb_LogicalOperator1_cv != 0);
    rowidx = (rowidx << 1) + (uint_T)(rtb_RelationalOperator6_h != 0);
    rowidx = (rowidx << 1) + (uint_T)(rtb_RelationalOperator5_fz != 0);

    /* Copy the appropriate row of the table into the block output vector */
    rtb_Logic_j[0] = BaseEngineController_LS_ConstP.pooled810[rowidx];
    rtb_Logic_j[1] = BaseEngineController_LS_ConstP.pooled810[rowidx + 8];
  }

  /* Switch: '<S500>/Switch' incorporates:
   *  Logic: '<S500>/Logical Operator5'
   *  UnitDelay: '<S500>/Unit Delay3'
   */
  if (rtb_Logic_j[0] || rtb_LogicalOperator1_cv) {
    BaseEngineController_LS_B.s500_Switch = rtb_DataTypeConversion_b2;
  } else {
    BaseEngineController_LS_B.s500_Switch =
      BaseEngineController_LS_DWork.s500_UnitDelay3_DSTATE;
  }

  /* End of Switch: '<S500>/Switch' */

  /* Switch: '<S441>/Switch2' */
  if (rtb_RelationalOperator2_py) {
    /* Switch: '<S441>/Switch1' incorporates:
     *  Constant: '<S441>/Constant1'
     */
    if (rtb_Switch1_pb) {
      BaseEngineController_LS_B.s441_Switch2 =
        BaseEngineController_LS_B.s476_GPS_Speed;
    } else {
      BaseEngineController_LS_B.s441_Switch2 = 0.0;
    }

    /* End of Switch: '<S441>/Switch1' */
  } else {
    /* Switch: '<S441>/Switch' incorporates:
     *  Constant: '<S441>/Constant'
     *  S-Function (motohawk_sfun_calibration): '<S441>/motohawk_calibration'
     */
    if ((VSPD_DigitalPresent_DataStore())) {
      BaseEngineController_LS_B.s441_Switch2 =
        BaseEngineController_LS_B.s500_Switch;
    } else {
      BaseEngineController_LS_B.s441_Switch2 = 0.0;
    }

    /* End of Switch: '<S441>/Switch' */
  }

  /* End of Switch: '<S441>/Switch2' */
  /* S-Function Block: <S425>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (VSPD17In_DataStore()) = BaseEngineController_LS_B.s441_Switch2;
    (VSPD17Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s441_Switch2, (VSPD17IdxArr_DataStore()), 17,
       (VSPD17Idx_DataStore()));
    rtb_motohawk_prelookup1_k = (VSPD17Idx_DataStore());
  }

  /* Outputs for Atomic SubSystem: '<S384>/Base TPS Request' */

  /* UnitDelay: '<S427>/Unit Delay2' */
  rtb_UnitDelay_gh = BaseEngineController_LS_DWork.s427_UnitDelay2_DSTATE;

  /* S-Function Block: <S427>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (APP17In_DataStore()) = BaseEngineController_LS_B.s430_Switch1;
    (APP17Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s430_Switch1, (APP17IdxArr_DataStore()), 17,
       (APP17Idx_DataStore()));
    rtb_motohawk_prelookup_gv = (APP17Idx_DataStore());
  }

  /* S-Function Block: <S427>/motohawk_interpolation_2d */
  {
    extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
      real_T *map_data, uint32_T row_sz, uint32_T col_sz);
    rtb_motohawk_interpolation_2d_h = TableInterpolation2D_real_T
      (rtb_motohawk_prelookup1_k, rtb_motohawk_prelookup_gv, (real_T *)
       ((ETCRequestMap_DataStore())), 17, 17);
    (ETCRequest_DataStore()) = rtb_motohawk_interpolation_2d_h;
  }

  /* RelationalOperator: '<S427>/Relational Operator3' */
  BaseEngineController_LS_B.s427_RelationalOperator3 = ((rtb_UnitDelay_gh <
    rtb_motohawk_interpolation_2d_h));

  /* Outputs for Enabled SubSystem: '<S427>/PassThrough1' */
  BaseEngineController_LS_PassThrough1
    (BaseEngineController_LS_B.s427_RelationalOperator3,
     (ETCReqIncFiltC_DataStore()), &BaseEngineController_LS_B.s427_Merge);

  /* End of Outputs for SubSystem: '<S427>/PassThrough1' */

  /* RelationalOperator: '<S427>/Relational Operator2' */
  rtb_RelationalOperator2_bw = (rtb_UnitDelay_gh >
    rtb_motohawk_interpolation_2d_h);

  /* Outputs for Enabled SubSystem: '<S427>/PassThrough2' */
  BaseEngineController_LS_PassThrough1(rtb_RelationalOperator2_bw,
    (ETCReqDecFiltC_DataStore()), &BaseEngineController_LS_B.s427_Merge);

  /* End of Outputs for SubSystem: '<S427>/PassThrough2' */

  /* S-Function Block: <S445>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s445_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_l0 = ((real_T) delta) * 0.000001;
  }

  /* S-Function Block: <S427>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s427_motohawk_delta_time_DWORK1, NULL);
    rtb_UnitDelay_gh = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S427>/Product' incorporates:
   *  MinMax: '<S427>/MinMax'
   */
  rtb_UnitDelay_gh /= (rtb_UnitDelay_gh >= BaseEngineController_LS_B.s427_Merge)
    || rtIsNaN(BaseEngineController_LS_B.s427_Merge) ? rtb_UnitDelay_gh :
    BaseEngineController_LS_B.s427_Merge;

  /* Product: '<S442>/Product' */
  rtb_DataTypeConversion1_d = rtb_motohawk_interpolation_2d_h * rtb_UnitDelay_gh;

  /* Sum: '<S442>/Sum' incorporates:
   *  Constant: '<S442>/Constant'
   */
  rtb_DataTypeConversion_b2 = 1.0 - rtb_UnitDelay_gh;

  /* UnitDelay: '<S442>/Unit Delay' */
  rtb_UnitDelay_gh = BaseEngineController_LS_DWork.s442_UnitDelay_DSTATE;

  /* Sum: '<S442>/Sum1' incorporates:
   *  Product: '<S442>/Product1'
   */
  rtb_DataTypeConversion_b2 = rtb_DataTypeConversion_b2 * rtb_UnitDelay_gh +
    rtb_DataTypeConversion1_d;

  /* UnitDelay: '<S445>/Unit Delay' */
  rtb_UnitDelay_gh = BaseEngineController_LS_DWork.s445_UnitDelay_DSTATE;

  /* Product: '<S445>/Product1' incorporates:
   *  S-Function (motohawk_sfun_delta_time): '<S445>/motohawk_delta_time'
   *  Sum: '<S445>/Sum3'
   */
  rtb_DataTypeConversion1_d = 1.0 / rtb_motohawk_delta_time_l0 *
    (rtb_DataTypeConversion_b2 - rtb_UnitDelay_gh);

  /* S-Function Block: <S427>/motohawk_interpolation_1d3 */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_motohawk_interpolation_1d1_ku = TableInterpolation1D_real_T
      (rtb_motohawk_prelookup2, (real_T *) ((ETCReqFallRateTbl_DataStore())), 9);
    (ETCReqFallRate_DataStore()) = rtb_motohawk_interpolation_1d1_ku;
  }

  /* MinMax: '<S446>/MinMax' */
  rtb_Abs_k = (rtb_DataTypeConversion1_d >= rtb_motohawk_interpolation_1d1_ku) ||
    rtIsNaN(rtb_motohawk_interpolation_1d1_ku) ? rtb_DataTypeConversion1_d :
    rtb_motohawk_interpolation_1d1_ku;

  /* S-Function Block: <S427>/motohawk_interpolation_1d1 */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_motohawk_interpolation_1d1_ku = TableInterpolation1D_real_T
      (rtb_motohawk_prelookup2, (real_T *) ((ETCReqRiseRateTbl_DataStore())), 9);
    (ETCReqRiseRate_DataStore()) = rtb_motohawk_interpolation_1d1_ku;
  }

  /* Sum: '<S445>/Sum2' incorporates:
   *  MinMax: '<S446>/MinMax'
   *  MinMax: '<S446>/MinMax1'
   *  Product: '<S445>/Product'
   *  S-Function (motohawk_sfun_delta_time): '<S445>/motohawk_delta_time'
   */
  BaseEngineController_LS_B.s445_Sum2 = ((rtb_Abs_k <=
    rtb_motohawk_interpolation_1d1_ku) || rtIsNaN
    (rtb_motohawk_interpolation_1d1_ku) ? rtb_Abs_k :
    rtb_motohawk_interpolation_1d1_ku) * rtb_motohawk_delta_time_l0 +
    rtb_UnitDelay_gh;

  /* Update for UnitDelay: '<S427>/Unit Delay2' incorporates:
   *  UnitDelay: '<S427>/Unit Delay1'
   */
  BaseEngineController_LS_DWork.s427_UnitDelay2_DSTATE =
    BaseEngineController_LS_DWork.s427_UnitDelay1_DSTATE;

  /* Update for UnitDelay: '<S442>/Unit Delay' */
  BaseEngineController_LS_DWork.s442_UnitDelay_DSTATE =
    rtb_DataTypeConversion_b2;

  /* Update for UnitDelay: '<S445>/Unit Delay' */
  BaseEngineController_LS_DWork.s445_UnitDelay_DSTATE =
    BaseEngineController_LS_B.s445_Sum2;

  /* Update for UnitDelay: '<S427>/Unit Delay1' incorporates:
   *  UnitDelay: '<S427>/Unit Delay3'
   */
  BaseEngineController_LS_DWork.s427_UnitDelay1_DSTATE =
    BaseEngineController_LS_DWork.s427_UnitDelay3_DSTATE;

  /* Update for UnitDelay: '<S427>/Unit Delay3' incorporates:
   *  UnitDelay: '<S427>/Unit Delay4'
   */
  BaseEngineController_LS_DWork.s427_UnitDelay3_DSTATE =
    BaseEngineController_LS_DWork.s427_UnitDelay4_DSTATE;

  /* Update for UnitDelay: '<S427>/Unit Delay4' */
  BaseEngineController_LS_DWork.s427_UnitDelay4_DSTATE =
    rtb_motohawk_interpolation_2d_h;

  /* End of Outputs for SubSystem: '<S384>/Base TPS Request' */

  /* UnitDelay: '<S435>/Unit Delay' */
  rtb_DataTypeConversion_b2 =
    BaseEngineController_LS_DWork.s435_UnitDelay_DSTATE;

  /* Sum: '<S435>/Sum' incorporates:
   *  Constant: '<S435>/Constant'
   *  S-Function (motohawk_sfun_calibration): '<S435>/motohawk_calibration'
   */
  rtb_Product1_gw = 1.0 - (O2BankA_DelagFilterConst_DataStore());

  /* S-Function Block: <S480>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s480_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_fq = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S480>/Product' incorporates:
   *  MinMax: '<S480>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S480>/motohawk_calibration'
   */
  rtb_DataTypeConversion_fq /= (rtb_DataTypeConversion_fq >=
    (Bank1_EquivRatioFilterConst_DataStore())) || rtIsNaN
    ((Bank1_EquivRatioFilterConst_DataStore())) ? rtb_DataTypeConversion_fq :
    (Bank1_EquivRatioFilterConst_DataStore());

  /* Logic: '<S478>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S478>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S478>/motohawk_fault_status4'
   */
  rtb_RelationalOperator5_fz = (IsFaultActive(19) || IsFaultActive(20));

  /* Logic: '<S478>/Logical Operator6' */
  rtb_LogicalOperator6_jl = !rtb_RelationalOperator5_fz;

  /* Logic: '<S478>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S478>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S478>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_le = (IsFaultSuspected(19) || IsFaultSuspected(20));

  /* Math: '<S477>/Math Function' incorporates:
   *  Saturate: '<S477>/Saturation'
   *
   * About '<S477>/Math Function':
   *  Operator: reciprocal
   */
  BaseEngineController_LS_B.s477_MathFunction = 1.0 /
    (BaseEngineController_LS_B.s477_Lambda >= 0.1 ?
     BaseEngineController_LS_B.s477_Lambda : 0.1);

  /* Product: '<S478>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S478>/motohawk_calibration4'
   */
  rtb_DataTypeConversion1_d = BaseEngineController_LS_B.s477_MathFunction *
    (Bank1_EquivRatioGain_DataStore());

  /* Sum: '<S478>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S478>/motohawk_calibration5'
   */
  BaseEngineController_LS_B.s478_Sum1 = rtb_DataTypeConversion1_d +
    (Bank1_EquivRatioOfst_DataStore());

  /* UnitDelay: '<S478>/Unit Delay1' */
  rtb_UnitDelay1_jn = BaseEngineController_LS_DWork.s478_UnitDelay1_DSTATE;

  /* If: '<S478>/If' incorporates:
   *  Logic: '<S478>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_jl && rtb_LogicalOperator1_le) {
    /* Outputs for IfAction SubSystem: '<S478>/If Action Subsystem' incorporates:
     *  ActionPort: '<S481>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay1_jn, &rtb_Merge_o);

    /* End of Outputs for SubSystem: '<S478>/If Action Subsystem' */
  } else if (rtb_RelationalOperator5_fz) {
    /* Outputs for IfAction SubSystem: '<S478>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S482>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      ((Bank1_EquivRatioDfltValue_DataStore()), &rtb_Merge_o);

    /* End of Outputs for SubSystem: '<S478>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S478>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S483>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      (BaseEngineController_LS_B.s478_Sum1, &rtb_Merge_o);

    /* End of Outputs for SubSystem: '<S478>/If Action Subsystem2' */
  }

  /* End of If: '<S478>/If' */

  /* Sum: '<S485>/Sum1' incorporates:
   *  Constant: '<S485>/Constant'
   *  Product: '<S485>/Product'
   *  Product: '<S485>/Product1'
   *  Sum: '<S485>/Sum'
   *  UnitDelay: '<S485>/Unit Delay'
   */
  rtb_Sum1_ir = (1.0 - rtb_DataTypeConversion_fq) *
    BaseEngineController_LS_DWork.s485_UnitDelay_DSTATE + rtb_Merge_o *
    rtb_DataTypeConversion_fq;

  /* If: '<S484>/If' incorporates:
   *  Inport: '<S486>/In1'
   *  Inport: '<S487>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S484>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S484>/override_enable'
   */
  if ((Bank1_EquivRatio_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S484>/NewValue' incorporates:
     *  ActionPort: '<S486>/Action Port'
     */
    BaseEngineController_LS_B.s484_Merge = (Bank1_EquivRatio_new_DataStore());

    /* End of Outputs for SubSystem: '<S484>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S484>/OldValue' incorporates:
     *  ActionPort: '<S487>/Action Port'
     */
    BaseEngineController_LS_B.s484_Merge = rtb_Sum1_ir;

    /* End of Outputs for SubSystem: '<S484>/OldValue' */
  }

  /* End of If: '<S484>/If' */

  /* S-Function Block: <S488>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s488_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_fq = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S488>/Product' incorporates:
   *  MinMax: '<S488>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S488>/motohawk_calibration'
   */
  rtb_DataTypeConversion_fq /= (rtb_DataTypeConversion_fq >=
    (Bank2_EquivRatioFilterConst_DataStore())) || rtIsNaN
    ((Bank2_EquivRatioFilterConst_DataStore())) ? rtb_DataTypeConversion_fq :
    (Bank2_EquivRatioFilterConst_DataStore());

  /* Logic: '<S479>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S479>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S479>/motohawk_fault_status4'
   */
  rtb_RelationalOperator5_fz = (IsFaultActive(21) || IsFaultActive(22));

  /* Logic: '<S479>/Logical Operator6' */
  rtb_LogicalOperator6_jl = !rtb_RelationalOperator5_fz;

  /* Logic: '<S479>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S479>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S479>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_le = (IsFaultSuspected(21) || IsFaultSuspected(22));

  /* Math: '<S477>/Math Function1' incorporates:
   *  Saturate: '<S477>/Saturation1'
   *
   * About '<S477>/Math Function1':
   *  Operator: reciprocal
   */
  BaseEngineController_LS_B.s477_MathFunction1 = 1.0 /
    (BaseEngineController_LS_B.s477_Lambda_c >= 0.1 ?
     BaseEngineController_LS_B.s477_Lambda_c : 0.1);

  /* Product: '<S479>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S479>/motohawk_calibration4'
   */
  rtb_DataTypeConversion1_d = BaseEngineController_LS_B.s477_MathFunction1 *
    (Bank2_EquivRatioGain_DataStore());

  /* Sum: '<S479>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S479>/motohawk_calibration5'
   */
  BaseEngineController_LS_B.s479_Sum1 = rtb_DataTypeConversion1_d +
    (Bank2_EquivRatioOfst_DataStore());

  /* UnitDelay: '<S479>/Unit Delay1' */
  rtb_UnitDelay1_m = BaseEngineController_LS_DWork.s479_UnitDelay1_DSTATE;

  /* If: '<S479>/If' incorporates:
   *  Logic: '<S479>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_jl && rtb_LogicalOperator1_le) {
    /* Outputs for IfAction SubSystem: '<S479>/If Action Subsystem' incorporates:
     *  ActionPort: '<S489>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay1_m, &rtb_Merge_h);

    /* End of Outputs for SubSystem: '<S479>/If Action Subsystem' */
  } else if (rtb_RelationalOperator5_fz) {
    /* Outputs for IfAction SubSystem: '<S479>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S490>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      ((Bank2_EquivRatioDfltValue_DataStore()), &rtb_Merge_h);

    /* End of Outputs for SubSystem: '<S479>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S479>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S491>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      (BaseEngineController_LS_B.s479_Sum1, &rtb_Merge_h);

    /* End of Outputs for SubSystem: '<S479>/If Action Subsystem2' */
  }

  /* End of If: '<S479>/If' */

  /* Sum: '<S493>/Sum1' incorporates:
   *  Constant: '<S493>/Constant'
   *  Product: '<S493>/Product'
   *  Product: '<S493>/Product1'
   *  Sum: '<S493>/Sum'
   *  UnitDelay: '<S493>/Unit Delay'
   */
  rtb_Sum1_du = (1.0 - rtb_DataTypeConversion_fq) *
    BaseEngineController_LS_DWork.s493_UnitDelay_DSTATE + rtb_Merge_h *
    rtb_DataTypeConversion_fq;

  /* If: '<S492>/If' incorporates:
   *  Inport: '<S494>/In1'
   *  Inport: '<S495>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S492>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S492>/override_enable'
   */
  if ((Bank2_EquivRatio_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S492>/NewValue' incorporates:
     *  ActionPort: '<S494>/Action Port'
     */
    BaseEngineController_LS_B.s492_Merge = (Bank2_EquivRatio_new_DataStore());

    /* End of Outputs for SubSystem: '<S492>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S492>/OldValue' incorporates:
     *  ActionPort: '<S495>/Action Port'
     */
    BaseEngineController_LS_B.s492_Merge = rtb_Sum1_du;

    /* End of Outputs for SubSystem: '<S492>/OldValue' */
  }

  /* End of If: '<S492>/If' */

  /* MultiPortSwitch: '<S477>/Multiport Switch' incorporates:
   *  Gain: '<S477>/Gain'
   *  S-Function (motohawk_sfun_calibration): '<S477>/motohawk_calibration2'
   *  Sum: '<S477>/Add'
   */
  if ((BankB_Avg_Enable_DataStore()) == FALSE) {
    BaseEngineController_LS_B.s477_MultiportSwitch =
      BaseEngineController_LS_B.s484_Merge;
  } else {
    BaseEngineController_LS_B.s477_MultiportSwitch =
      (BaseEngineController_LS_B.s484_Merge +
       BaseEngineController_LS_B.s492_Merge) * 0.5;
  }

  /* End of MultiPortSwitch: '<S477>/Multiport Switch' */

  /* Sum: '<S435>/Sum1' incorporates:
   *  Product: '<S435>/Product'
   *  Product: '<S435>/Product1'
   *  S-Function (motohawk_sfun_calibration): '<S435>/motohawk_calibration'
   */
  BaseEngineController_LS_B.s435_Sum1 = rtb_DataTypeConversion_b2 *
    rtb_Product1_gw + (O2BankA_DelagFilterConst_DataStore()) *
    BaseEngineController_LS_B.s477_MultiportSwitch;

  /* UnitDelay: '<S435>/Unit Delay1' */
  rtb_DataTypeConversion1_d =
    BaseEngineController_LS_DWork.s435_UnitDelay1_DSTATE;

  /* Sum: '<S435>/Sum3' incorporates:
   *  Constant: '<S435>/Constant1'
   *  Product: '<S435>/Product2'
   *  Product: '<S435>/Product3'
   *  S-Function (motohawk_sfun_calibration): '<S435>/motohawk_calibration1'
   *  Sum: '<S435>/Sum2'
   */
  BaseEngineController_LS_B.s435_Sum3 = (1.0 - (O2BankB_DelagFiltConst_DataStore
    ())) * rtb_DataTypeConversion1_d + (O2BankB_DelagFiltConst_DataStore()) *
    BaseEngineController_LS_B.s492_Merge;

  /* S-Function Block: <S462>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s462_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_f = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S462>/Switch' incorporates:
   *  Constant: '<S461>/Constant'
   *  Constant: '<S462>/Constant'
   *  RelationalOperator: '<S461>/RelOp'
   *  S-Function (motohawk_sfun_data_read): '<S439>/motohawk_data_read'
   *  S-Function (motohawk_sfun_data_read): '<S462>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S462>/motohawk_delta_time'
   *  Sum: '<S462>/Sum'
   */
  if (((uint8_T)EngineState_DataStore()) == 3) {
    BaseEngineController_LS_B.s462_Switch = rtb_motohawk_delta_time_f +
      TimeSinceRunTimer_DataStore();
  } else {
    BaseEngineController_LS_B.s462_Switch = 0.0;
  }

  /* End of Switch: '<S462>/Switch' */
  /* S-Function Block: <S422>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (RPM09In_DataStore()) = BaseEngineController_LS_B.s536_Sum1;
    (RPM09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s536_Sum1, (RPM09IdxArr_DataStore()), 9,
       (RPM09Idx_DataStore()));
    BaseEngineController_LS_B.s422_motohawk_prelookup1 = (RPM09Idx_DataStore());
  }

  /* S-Function Block: <S422>/motohawk_prelookup5 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (RPM17In_DataStore()) = BaseEngineController_LS_B.s536_Sum1;
    (RPM17Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s536_Sum1, (RPM17IdxArr_DataStore()), 17,
       (RPM17Idx_DataStore()));
    BaseEngineController_LS_B.s422_Indexes = (RPM17Idx_DataStore());
  }

  /* S-Function Block: <S418>/motohawk_prelookup2 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (ECT07In_DataStore()) = BaseEngineController_LS_B.s636_Merge;
    (ECT07Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s636_Merge, (ECT07IdxArr_DataStore()), 7,
       (ECT07Idx_DataStore()));
    BaseEngineController_LS_B.s418_motohawk_prelookup2 = (ECT07Idx_DataStore());
  }

  /* S-Function Block: <S418>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (ECT09In_DataStore()) = BaseEngineController_LS_B.s636_Merge;
    (ECT09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s636_Merge, (ECT09IdxArr_DataStore()), 9,
       (ECT09Idx_DataStore()));
    rtb_motohawk_prelookup1_h = (ECT09Idx_DataStore());
  }

  /* S-Function Block: <S419>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (IAT07In_DataStore()) = BaseEngineController_LS_B.s654_Merge;
    (IAT07Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s654_Merge, (IAT07IdxArr_DataStore()), 7,
       (IAT07Idx_DataStore()));
    BaseEngineController_LS_B.s419_motohawk_prelookup1 = (IAT07Idx_DataStore());
  }

  /* S-Function Block: <S416>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (ACPres07In_DataStore()) = BaseEngineController_LS_B.s550_Merge;
    (ACPres07Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s550_Merge, (ACPres07IdxArr_DataStore()), 7,
       (ACPres07Idx_DataStore()));
    BaseEngineController_LS_B.s416_motohawk_prelookup1 = (ACPres07Idx_DataStore());
  }

  /* S-Function Block: <S575>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s575_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_fq = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S575>/Product' incorporates:
   *  MinMax: '<S575>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S575>/motohawk_calibration'
   */
  rtb_DataTypeConversion_fq /= (rtb_DataTypeConversion_fq >=
    (MAPFilterConst_DataStore())) || rtIsNaN((MAPFilterConst_DataStore())) ?
    rtb_DataTypeConversion_fq : (MAPFilterConst_DataStore());

  /* Logic: '<S540>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S540>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S540>/motohawk_fault_status4'
   */
  rtb_RelationalOperator5_fz = (IsFaultActive(113) || IsFaultActive(114));

  /* Logic: '<S540>/Logical Operator6' */
  rtb_LogicalOperator6_jl = !rtb_RelationalOperator5_fz;

  /* Logic: '<S540>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S540>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S540>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_le = (IsFaultSuspected(113) || IsFaultSuspected(114));

  /* S-Function (motohawk_sfun_trigger): '<S542>/motohawk_trigger5' */
  /* Enable for Trigger_FGND_MID_TDC_EVENT_9158p0006 */
  if (BaseEngineController_LS_DWork.s542_motohawk_trigger5_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s542_motohawk_trigger5_DWORK1 = 1;
  }

  /* Product: '<S540>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S540>/motohawk_calibration4'
   */
  rtb_DataTypeConversion1_d = BaseEngineController_LS_B.s542_Merge *
    (MAPGain_DataStore());

  /* Sum: '<S540>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S540>/motohawk_calibration5'
   */
  BaseEngineController_LS_B.s540_Sum1 = rtb_DataTypeConversion1_d +
    (MAPOfst_DataStore());

  /* UnitDelay: '<S540>/Unit Delay1' */
  rtb_UnitDelay1_a = BaseEngineController_LS_DWork.s540_UnitDelay1_DSTATE;

  /* If: '<S540>/If' incorporates:
   *  Logic: '<S540>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_jl && rtb_LogicalOperator1_le) {
    /* Outputs for IfAction SubSystem: '<S540>/If Action Subsystem' incorporates:
     *  ActionPort: '<S576>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay1_a, &rtb_Merge_in);

    /* End of Outputs for SubSystem: '<S540>/If Action Subsystem' */
  } else if (rtb_RelationalOperator5_fz) {
    /* Outputs for IfAction SubSystem: '<S540>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S577>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((MAPDfltValue_DataStore()),
      &rtb_Merge_in);

    /* End of Outputs for SubSystem: '<S540>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S540>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S578>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      (BaseEngineController_LS_B.s540_Sum1, &rtb_Merge_in);

    /* End of Outputs for SubSystem: '<S540>/If Action Subsystem2' */
  }

  /* End of If: '<S540>/If' */

  /* Sum: '<S580>/Sum1' incorporates:
   *  Constant: '<S580>/Constant'
   *  Product: '<S580>/Product'
   *  Product: '<S580>/Product1'
   *  Sum: '<S580>/Sum'
   *  UnitDelay: '<S580>/Unit Delay'
   */
  rtb_Sum1_d4 = (1.0 - rtb_DataTypeConversion_fq) *
    BaseEngineController_LS_DWork.s580_UnitDelay_DSTATE + rtb_Merge_in *
    rtb_DataTypeConversion_fq;

  /* If: '<S579>/If' incorporates:
   *  Inport: '<S581>/In1'
   *  Inport: '<S582>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S579>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S579>/override_enable'
   */
  if ((MAP_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S579>/NewValue' incorporates:
     *  ActionPort: '<S581>/Action Port'
     */
    BaseEngineController_LS_B.s579_Merge = (MAP_new_DataStore());

    /* End of Outputs for SubSystem: '<S579>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S579>/OldValue' incorporates:
     *  ActionPort: '<S582>/Action Port'
     */
    BaseEngineController_LS_B.s579_Merge = rtb_Sum1_d4;

    /* End of Outputs for SubSystem: '<S579>/OldValue' */
  }

  /* End of If: '<S579>/If' */

  /* S-Function Block: <S420>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (MAP05In_DataStore()) = BaseEngineController_LS_B.s579_Merge;
    (MAP05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s579_Merge, (MAP05IdxArr_DataStore()), 5,
       (MAP05Idx_DataStore()));
    rtb_motohawk_prelookup_m = (MAP05Idx_DataStore());
  }

  /* S-Function Block: <S420>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (MAP09In_DataStore()) = BaseEngineController_LS_B.s579_Merge;
    (MAP09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s579_Merge, (MAP09IdxArr_DataStore()), 9,
       (MAP09Idx_DataStore()));
    BaseEngineController_LS_B.s420_motohawk_prelookup1 = (MAP09Idx_DataStore());
  }

  /* S-Function Block: <S420>/motohawk_prelookup5 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (MAP17In_DataStore()) = BaseEngineController_LS_B.s579_Merge;
    (MAP17Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s579_Merge, (MAP17IdxArr_DataStore()), 17,
       (MAP17Idx_DataStore()));
    BaseEngineController_LS_B.s420_Indexes = (MAP17Idx_DataStore());
  }

  /* S-Function Block: <S425>/motohawk_prelookup2 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (VSPD07In_DataStore()) = BaseEngineController_LS_B.s441_Switch2;
    (VSPD07Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s441_Switch2, (VSPD07IdxArr_DataStore()), 7,
       (VSPD07Idx_DataStore()));
    BaseEngineController_LS_B.s425_motohawk_prelookup2 = (VSPD07Idx_DataStore());
  }

  /* S-Function Block: <S417>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (CAT05In_DataStore()) = (Placeholder_CAT_DataStore());
    (CAT05Idx_DataStore()) = TablePrelookup_real_T((Placeholder_CAT_DataStore()),
      (CAT05IdxArr_DataStore()), 5, (CAT05Idx_DataStore()));
    BaseEngineController_LS_B.s417_motohawk_prelookup = (CAT05Idx_DataStore());
  }

  /* S-Function Block: <S421>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (OXY05In_DataStore()) = BaseEngineController_LS_B.s558_Merge;
    (OXY05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s558_Merge, (OXY05IdxArr_DataStore()), 5,
       (OXY05Idx_DataStore()));
    BaseEngineController_LS_B.s421_motohawk_prelookup = (OXY05Idx_DataStore());
  }

  /* S-Function Block: <S389>/motohawk_prelookup2 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (VEMapIn_DataStore()) = BaseEngineController_LS_B.s579_Merge;
    (VEMapIdx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s579_Merge, (VEMapIdxArr_DataStore()), 17,
       (VEMapIdx_DataStore()));
    rtb_motohawk_prelookup2_c = (VEMapIdx_DataStore());
  }

  /* S-Function Block: <S389>/motohawk_interpolation_2d */
  {
    extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
      real_T *map_data, uint32_T row_sz, uint32_T col_sz);
    rtb_motohawk_interpolation_2d_d = TableInterpolation2D_real_T
      (rtb_motohawk_prelookup2_c, BaseEngineController_LS_B.s422_Indexes,
       (real_T *) ((VolEffMap_DataStore())), 17, 17);
    (VolEff_DataStore()) = rtb_motohawk_interpolation_2d_d;
  }

  /* S-Function Block: <S389>/motohawk_interpolation_2d2 */
  {
    extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
      real_T *map_data, uint32_T row_sz, uint32_T col_sz);
    BaseEngineController_LS_B.s389_motohawk_interpolation_2d2 =
      TableInterpolation2D_real_T(rtb_motohawk_prelookup2_c,
      BaseEngineController_LS_B.s422_Indexes, (real_T *)
      ((VolEffAdaptMap_DataStore())), 17, 17);
    (VolEffAdapt_DataStore()) =
      BaseEngineController_LS_B.s389_motohawk_interpolation_2d2;
  }

  /* Sum: '<S389>/Sum' incorporates:
   *  S-Function (motohawk_sfun_interpolation_2d): '<S389>/motohawk_interpolation_2d'
   *  S-Function (motohawk_sfun_prelookup): '<S389>/motohawk_prelookup2'
   */
  BaseEngineController_LS_B.s389_Sum = rtb_motohawk_interpolation_2d_d +
    BaseEngineController_LS_B.s389_motohawk_interpolation_2d2;

  /* S-Function (motohawk_sfun_data_read): '<S380>/motohawk_data_read1' */
  BaseEngineController_LS_B.s380_motohawk_data_read1 = EngineState_DataStore();

  /* S-Function Block: <S380>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s380_motohawk_delta_time_DWORK1, NULL);
    BaseEngineController_LS_B.s380_motohawk_delta_time = ((real_T) delta) *
      0.000001;
  }

  /* Stateflow: '<S380>/Baro Stall State Delay' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S380>/motohawk_calibration'
   */

  /* Gateway: Foreground/Control/VirtualSensors/AirCalcs/Baro Stall State Delay */
  /* During: Foreground/Control/VirtualSensors/AirCalcs/Baro Stall State Delay */
  switch (BaseEngineController_LS_DWork.s386_is_c19_BaseEngineController_LS) {
   case BaseEngineController_LS_IN_CrankRun:
    /* During 'CrankRun': '<S386>:2' */
    if (BaseEngineController_LS_B.s380_motohawk_data_read1 == 1) {
      /* Transition: '<S386>:6' */
      BaseEngineController_LS_DWork.s386_is_c19_BaseEngineController_LS =
        BaseEngineController_LS_IN_StallDelay;

      /* Entry 'StallDelay': '<S386>:3' */
      BaseEngineController_LS_B.s386_Enable = FALSE;
      BaseEngineController_LS_B.s386_Timer = 0.0;
      BaseEngineController_LS_DWork.s386_TOld = 0.0;
    }
    break;

   case BaseEngineController_LS_IN_Stall:
    /* During 'Stall': '<S386>:1' */
    if (BaseEngineController_LS_B.s380_motohawk_data_read1 > 1) {
      /* Transition: '<S386>:5' */
      BaseEngineController_LS_DWork.s386_is_c19_BaseEngineController_LS =
        BaseEngineController_LS_IN_CrankRun;

      /* Entry 'CrankRun': '<S386>:2' */
      BaseEngineController_LS_B.s386_Enable = FALSE;
    }
    break;

   case BaseEngineController_LS_IN_StallDelay:
    /* During 'StallDelay': '<S386>:3' */
    if (BaseEngineController_LS_B.s380_motohawk_data_read1 > 1) {
      /* Transition: '<S386>:8' */
      BaseEngineController_LS_DWork.s386_is_c19_BaseEngineController_LS =
        BaseEngineController_LS_IN_CrankRun;

      /* Entry 'CrankRun': '<S386>:2' */
      BaseEngineController_LS_B.s386_Enable = FALSE;
    } else if (((BaseEngineController_LS_B.s380_motohawk_data_read1 == 1) &
                (BaseEngineController_LS_B.s386_Timer >
                 (BaroRunStallDelay_DataStore()))) != 0) {
      /* Transition: '<S386>:7' */
      BaseEngineController_LS_DWork.s386_is_c19_BaseEngineController_LS =
        BaseEngineController_LS_IN_Stall;

      /* Entry 'Stall': '<S386>:1' */
      BaseEngineController_LS_B.s386_Enable = TRUE;
    } else {
      BaseEngineController_LS_B.s386_Timer =
        BaseEngineController_LS_DWork.s386_TOld +
        BaseEngineController_LS_B.s380_motohawk_delta_time;
      BaseEngineController_LS_DWork.s386_TOld =
        BaseEngineController_LS_B.s386_Timer;
    }
    break;

   default:
    /* Transition: '<S386>:4' */
    BaseEngineController_LS_DWork.s386_is_c19_BaseEngineController_LS =
      BaseEngineController_LS_IN_Stall;

    /* Entry 'Stall': '<S386>:1' */
    BaseEngineController_LS_B.s386_Enable = TRUE;
    break;
  }

  /* End of Stateflow: '<S380>/Baro Stall State Delay' */
  /* RelationalOperator: '<S388>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S388>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S388>/motohawk_data_read'
   */
  rtb_LogicalOperator6_jl = (TPSFinal_DataStore() >= (BaroLearn_TPSPos_DataStore
                              ()));

  /* Logic: '<S541>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S541>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S541>/motohawk_fault_status4'
   */
  rtb_RelationalOperator5_fz = (IsFaultActive(115) || IsFaultActive(116));

  /* Logic: '<S541>/Logical Operator6' */
  rtb_LogicalOperator1_le = !rtb_RelationalOperator5_fz;

  /* Logic: '<S541>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S541>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S541>/motohawk_fault_status3'
   */
  rtb_Switch1_pb = (IsFaultSuspected(115) || IsFaultSuspected(116));

  /* S-Function Block: <S473>/motohawk_ain_read1 Resource: MAPSensorPin */
  {
    extern NativeError_S MAPSensorPin_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    MAPSensorPin_AnalogInput_Get
      (&BaseEngineController_LS_B.s473_motohawk_ain_read1, NULL);
  }

  /* DataTypeConversion: '<S541>/Data Type Conversion' */
  rtb_DataTypeConversion_fq = (real_T)
    BaseEngineController_LS_B.s473_motohawk_ain_read1;

  /* Product: '<S541>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S541>/motohawk_calibration4'
   */
  rtb_DataTypeConversion1_d = rtb_DataTypeConversion_fq * (MAPTimeGain_DataStore
    ());

  /* Sum: '<S541>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S541>/motohawk_calibration5'
   */
  BaseEngineController_LS_B.s541_Sum1 = rtb_DataTypeConversion1_d +
    (MAPTimeOfst_DataStore());

  /* UnitDelay: '<S541>/Unit Delay1' */
  rtb_UnitDelay1_n5 = BaseEngineController_LS_DWork.s541_UnitDelay1_DSTATE;

  /* If: '<S541>/If' incorporates:
   *  Logic: '<S541>/Logical Operator5'
   */
  if (rtb_LogicalOperator1_le && rtb_Switch1_pb) {
    /* Outputs for IfAction SubSystem: '<S541>/If Action Subsystem' incorporates:
     *  ActionPort: '<S584>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay1_n5, &rtb_Merge_jq);

    /* End of Outputs for SubSystem: '<S541>/If Action Subsystem' */
  } else if (rtb_RelationalOperator5_fz) {
    /* Outputs for IfAction SubSystem: '<S541>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S585>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((MAPTimeDfltValue_DataStore()),
      &rtb_Merge_jq);

    /* End of Outputs for SubSystem: '<S541>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S541>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S586>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      (BaseEngineController_LS_B.s541_Sum1, &rtb_Merge_jq);

    /* End of Outputs for SubSystem: '<S541>/If Action Subsystem2' */
  }

  /* End of If: '<S541>/If' */

  /* Logic: '<S388>/Logical Operator' incorporates:
   *  Constant: '<S392>/Constant'
   *  RelationalOperator: '<S388>/Relational Operator1'
   *  RelationalOperator: '<S392>/Compare'
   *  S-Function (motohawk_sfun_calibration): '<S388>/motohawk_calibration2'
   */
  rtb_RelationalOperator5_fz = (rtb_LogicalOperator6_jl && (rtb_Merge_jq >=
    (BaroLearn_MAP_DataStore())) &&
    (BaseEngineController_LS_B.s380_motohawk_data_read1 > 1));

  /* S-Function Block: <S393>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s393_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_ok = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S393>/Switch' incorporates:
   *  Constant: '<S393>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S393>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S393>/motohawk_delta_time'
   *  Sum: '<S393>/Sum'
   */
  if (rtb_RelationalOperator5_fz) {
    rtb_Switch_fz = rtb_motohawk_delta_time_ok + BaroLearnTmr_DataStore();
  } else {
    rtb_Switch_fz = 0.0;
  }

  /* End of Switch: '<S393>/Switch' */
  /* Product: '<S388>/Product' incorporates:
   *  RelationalOperator: '<S388>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S388>/motohawk_calibration'
   */
  rtb_Product_mp = (uint16_T)(rtb_RelationalOperator5_fz ? rtb_Switch_fz >=
    (BaroLearn_Tm_DataStore()) : 0);

  /* DataTypeConversion: '<S388>/Data Type Conversion' */
  rtb_RelationalOperator5_fz = (rtb_Product_mp != 0);

  /* Outputs for Enabled SubSystem: '<S380>/Capture Signal At Startup' incorporates:
   *  EnablePort: '<S387>/Enable'
   */
  /* Logic: '<S380>/Logical Operator' */
  if (BaseEngineController_LS_B.s386_Enable || rtb_RelationalOperator5_fz) {
    if (!BaseEngineController_LS_DWork.s380_CaptureSignalAtStartup_MODE) {
      /* InitializeConditions for UnitDelay: '<S387>/Unit Delay' */
      BaseEngineController_LS_DWork.s387_UnitDelay_DSTATE = 0;
      BaseEngineController_LS_DWork.s380_CaptureSignalAtStartup_MODE = TRUE;
    }

    /* Sum: '<S387>/Add' incorporates:
     *  Constant: '<S387>/TwoSampleBuffer ToIgnore'
     *  S-Function (motohawk_sfun_calibration): '<S387>/motohawk_calibration'
     */
    rtb_Add_k = (int8_T)(((int8_T)(BARO_Count_DataStore())) + 2);

    /* Sum: '<S387>/Sum' incorporates:
     *  Constant: '<S387>/Constant'
     *  UnitDelay: '<S387>/Unit Delay'
     */
    rtb_Sum_l3 = (int8_T)(BaseEngineController_LS_DWork.s387_UnitDelay_DSTATE +
                          1);

    /* RelationalOperator: '<S387>/Relational Operator' */
    rtb_LogicalOperator6_jl = (rtb_Sum_l3 <= rtb_Add_k);

    /* Switch: '<S387>/Switch' */
    if (rtb_LogicalOperator6_jl) {
      rtb_Add_k = rtb_Sum_l3;
    }

    /* End of Switch: '<S387>/Switch' */

    /* Sum: '<S387>/Add1' incorporates:
     *  Constant: '<S387>/TwoSampleBuffer ToIgnore'
     */
    rtb_Add1_e = (int8_T)(rtb_Add_k - 2);

    /* Logic: '<S387>/Logical Operator' incorporates:
     *  Constant: '<S387>/TwoSampleBuffer ToIgnore'
     *  RelationalOperator: '<S387>/Relational Operator1'
     */
    rtb_LogicalOperator_kz = (rtb_LogicalOperator6_jl && (rtb_Sum_l3 > 2));

    /* Outputs for Enabled SubSystem: '<S387>/Collect Average' */
    BaseEngineController_LS_CollectAverage(rtb_LogicalOperator_kz, rtb_Add1_e,
      rtb_Merge_jq, &BaseEngineController_LS_B.s387_CollectAverage,
      &BaseEngineController_LS_DWork.s387_CollectAverage);

    /* End of Outputs for SubSystem: '<S387>/Collect Average' */

    /* Update for UnitDelay: '<S387>/Unit Delay' */
    BaseEngineController_LS_DWork.s387_UnitDelay_DSTATE = rtb_Add_k;
  } else {
    if (BaseEngineController_LS_DWork.s380_CaptureSignalAtStartup_MODE) {
      /* Disable for Enabled SubSystem: '<S387>/Collect Average' */
      BaseEngineController_LS_CollectAverage_Disable
        (&BaseEngineController_LS_DWork.s387_CollectAverage);

      /* End of Disable for SubSystem: '<S387>/Collect Average' */
      BaseEngineController_LS_DWork.s380_CaptureSignalAtStartup_MODE = FALSE;
    }
  }

  /* End of Logic: '<S380>/Logical Operator' */
  /* End of Outputs for SubSystem: '<S380>/Capture Signal At Startup' */

  /* If: '<S390>/If' incorporates:
   *  Inport: '<S400>/In1'
   *  Inport: '<S401>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S390>/override_enable'
   *  UnitDelay: '<S390>/Unit Delay'
   */
  if ((BARO_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S390>/NewValue' incorporates:
     *  ActionPort: '<S400>/Action Port'
     */
    rtb_Merge_b3 = BaseEngineController_LS_DWork.s390_UnitDelay_DSTATE;

    /* End of Outputs for SubSystem: '<S390>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S390>/OldValue' incorporates:
     *  ActionPort: '<S401>/Action Port'
     */
    rtb_Merge_b3 = BaseEngineController_LS_B.s387_CollectAverage.s391_Product;

    /* End of Outputs for SubSystem: '<S390>/OldValue' */
  }

  /* End of If: '<S390>/If' */

  /* Sum: '<S390>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S390>/offset'
   */
  BaseEngineController_LS_B.s390_Sum = rtb_Merge_b3 + (BARO_offset_DataStore());

  /* Saturate: '<S380>/Saturation1' */
  rtb_Saturation1_c = BaseEngineController_LS_B.s390_Sum >= 1.0 ?
    BaseEngineController_LS_B.s390_Sum : 1.0;

  /* S-Function Block: <S389>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (BARO09Idx_DataStore()) = TablePrelookup_real_T(rtb_Saturation1_c,
      (BARO09IdxArr_DataStore()), 9, (BARO09Idx_DataStore()));
    rtb_motohawk_prelookup1_c = (BARO09Idx_DataStore());
  }

  /* S-Function Block: <S389>/motohawk_interpolation_1d1 */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_motohawk_interpolation_1d1_j = TableInterpolation1D_real_T
      (rtb_motohawk_prelookup1_c, (real_T *) ((VEBaroCorrTbl_DataStore())), 9);
    (VEBaroCorr_DataStore()) = rtb_motohawk_interpolation_1d1_j;
  }

  /* S-Function Block: <S419>/motohawk_prelookup2 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (IAT17In_DataStore()) = BaseEngineController_LS_B.s654_Merge;
    (IAT17Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s654_Merge, (IAT17IdxArr_DataStore()), 17,
       (IAT17Idx_DataStore()));
    rtb_motohawk_prelookup2_b = (IAT17Idx_DataStore());
  }

  /* S-Function Block: <S389>/motohawk_interpolation_2d1 */
  {
    extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
      real_T *map_data, uint32_T row_sz, uint32_T col_sz);
    rtb_motohawk_interpolation_2d1_n = TableInterpolation2D_real_T
      (rtb_motohawk_prelookup2_b, rtb_motohawk_prelookup1_h, (real_T *)
       ((VETempCorrMap_DataStore())), 17, 9);
    (VETempCorr_DataStore()) = rtb_motohawk_interpolation_2d1_n;
  }

  /* Product: '<S389>/Nominal Air Flow Rate' incorporates:
   *  Constant: '<S389>/Gas Const [J//kg-K]'
   *  Constant: '<S389>/Units Equivalency Factor'
   *  DataTypeConversion: '<S389>/Data Type Conversion'
   *  Fcn: '<S395>/C to K'
   *  S-Function (motohawk_sfun_data_read): '<S389>/Cylinder Swept Volume [cm3]'
   *  S-Function (motohawk_sfun_data_read): '<S389>/Number of Combustion Events Per Revolution'
   *  S-Function (motohawk_sfun_interpolation_1d): '<S389>/motohawk_interpolation_1d1'
   *  S-Function (motohawk_sfun_interpolation_2d): '<S389>/motohawk_interpolation_2d1'
   *  S-Function (motohawk_sfun_prelookup): '<S389>/motohawk_prelookup1'
   *  S-Function (motohawk_sfun_prelookup): '<S418>/motohawk_prelookup1'
   *  S-Function (motohawk_sfun_prelookup): '<S419>/motohawk_prelookup2'
   *  Saturate: '<S380>/Saturation1'
   */
  BaseEngineController_LS_B.s389_NominalAirFlowRate =
    BaseEngineController_LS_B.s536_Sum1 * BaseEngineController_LS_B.s579_Merge *
    rtb_motohawk_interpolation_1d1_j * rtb_motohawk_interpolation_2d1_n *
    CylSweptVol_DataStore() * (real_T)((uint8_T)CombEventsPerRev_DataStore()) /
    (BaseEngineController_LS_B.s654_Merge + 273.2) / 60.0 / 287.0;

  /* Product: '<S389>/Model Air Mass Flow Rate' */
  BaseEngineController_LS_B.s389_ModelAirMassFlowRate =
    BaseEngineController_LS_B.s389_Sum *
    BaseEngineController_LS_B.s389_NominalAirFlowRate;

  /* S-Function Block: <S507>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s507_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_gx = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S507>/Product' incorporates:
   *  MinMax: '<S507>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S507>/motohawk_calibration'
   */
  rtb_DataTypeConversion_gx /= (rtb_DataTypeConversion_gx >=
    (MAFFiltConst_DataStore())) || rtIsNaN((MAFFiltConst_DataStore())) ?
    rtb_DataTypeConversion_gx : (MAFFiltConst_DataStore());

  /* Logic: '<S498>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S498>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S498>/motohawk_fault_status4'
   */
  rtb_RelationalOperator5_fz = (IsFaultActive(111) || IsFaultActive(112));

  /* Logic: '<S498>/Logical Operator6' */
  rtb_LogicalOperator6_jl = !rtb_RelationalOperator5_fz;

  /* Logic: '<S498>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S498>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S498>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_le = (IsFaultSuspected(111) || IsFaultSuspected(112));

  /* S-Function Block: <S471>/motohawk_frequency_in2 Frequency Input Get: MAF_Pin */
  {
    extern NativeError_S MAF_Pin_FrequencyInput_Get(uint32_T *frequency, int16_T
      *duty_cycle);
    MAF_Pin_FrequencyInput_Get(&rtb_DataTypeConversion6,
      &rtb_DataTypeConversion2_p);
  }

  /* DataTypeConversion: '<S471>/Data Type Conversion' */
  rtb_Switch_hp = (real_T)rtb_DataTypeConversion6;

  /* Gain: '<S471>/Gain' */
  BaseEngineController_LS_B.s471_Gain = 0.01 * rtb_Switch_hp;

  /* S-Function Block: <S512>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (MAFIdx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s471_Gain, (MAFIdxArr_DataStore()), 13,
       (MAFIdx_DataStore()));
    rtb_motohawk_prelookup_k = (MAFIdx_DataStore());
  }

  /* S-Function Block: <S512>/motohawk_interpolation_1d */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    BaseEngineController_LS_B.s512_motohawk_interpolation_1d =
      TableInterpolation1D_real_T(rtb_motohawk_prelookup_k, (real_T *)
      ((MAFTbl_DataStore())), 13);
  }

  /* UnitDelay: '<S498>/Unit Delay' */
  rtb_UnitDelay_nr = BaseEngineController_LS_DWork.s498_UnitDelay_DSTATE;

  /* If: '<S498>/If' incorporates:
   *  Logic: '<S498>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_jl && rtb_LogicalOperator1_le) {
    /* Outputs for IfAction SubSystem: '<S498>/If Action Subsystem' incorporates:
     *  ActionPort: '<S508>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay_nr, &rtb_Merge_dv);

    /* End of Outputs for SubSystem: '<S498>/If Action Subsystem' */
  } else if (rtb_RelationalOperator5_fz) {
    /* Outputs for IfAction SubSystem: '<S498>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S509>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((MAFDefault_DataStore()),
      &rtb_Merge_dv);

    /* End of Outputs for SubSystem: '<S498>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S498>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S510>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      (BaseEngineController_LS_B.s512_motohawk_interpolation_1d, &rtb_Merge_dv);

    /* End of Outputs for SubSystem: '<S498>/If Action Subsystem2' */
  }

  /* End of If: '<S498>/If' */

  /* Sum: '<S513>/Sum1' incorporates:
   *  Constant: '<S513>/Constant'
   *  Product: '<S513>/Product'
   *  Product: '<S513>/Product1'
   *  Sum: '<S513>/Sum'
   *  UnitDelay: '<S513>/Unit Delay'
   */
  rtb_Sum1_fm = (1.0 - rtb_DataTypeConversion_gx) *
    BaseEngineController_LS_DWork.s513_UnitDelay_DSTATE + rtb_Merge_dv *
    rtb_DataTypeConversion_gx;

  /* If: '<S511>/If' incorporates:
   *  Inport: '<S514>/In1'
   *  Inport: '<S515>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S511>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S511>/override_enable'
   */
  if ((MAF_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S511>/NewValue' incorporates:
     *  ActionPort: '<S514>/Action Port'
     */
    BaseEngineController_LS_B.s511_Merge = (MAF_new_DataStore());

    /* End of Outputs for SubSystem: '<S511>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S511>/OldValue' incorporates:
     *  ActionPort: '<S515>/Action Port'
     */
    BaseEngineController_LS_B.s511_Merge = rtb_Sum1_fm;

    /* End of Outputs for SubSystem: '<S511>/OldValue' */
  }

  /* End of If: '<S511>/If' */

  /* MultiPortSwitch: '<S389>/Multiport Switch' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S389>/motohawk_calibration1'
   */
  if (((uint8_T)(MAF_Source_DataStore())) == 0) {
    BaseEngineController_LS_B.s389_MultiportSwitch =
      BaseEngineController_LS_B.s389_ModelAirMassFlowRate;
  } else {
    BaseEngineController_LS_B.s389_MultiportSwitch =
      BaseEngineController_LS_B.s511_Merge;
  }

  /* End of MultiPortSwitch: '<S389>/Multiport Switch' */
  /* S-Function Block: <S408>/motohawk_delta_time */
  rtb_Switch_hp = 0.005;

  /* UnitDelay: '<S408>/Unit Delay2' */
  rtb_DataTypeConversion1_d =
    BaseEngineController_LS_DWork.s408_UnitDelay2_DSTATE;

  /* RelationalOperator: '<S408>/Relational Operator4' incorporates:
   *  UnitDelay: '<S408>/Unit Delay2'
   */
  BaseEngineController_LS_B.s408_RelationalOperator4 =
    ((BaseEngineController_LS_DWork.s408_UnitDelay2_DSTATE <
      BaseEngineController_LS_B.s536_Sum1));

  /* Outputs for Enabled SubSystem: '<S408>/IncreasingFilter' incorporates:
   *  EnablePort: '<S412>/Enable'
   */
  if (BaseEngineController_LS_B.s408_RelationalOperator4) {
    /* S-Function (motohawk_sfun_calibration): '<S412>/motohawk_calibration1' */
    BaseEngineController_LS_B.s408_Merge = (SSRPMIncFiltC_DataStore());
  }

  /* End of Outputs for SubSystem: '<S408>/IncreasingFilter' */

  /* Outputs for Enabled SubSystem: '<S408>/DecreasingFilter' incorporates:
   *  EnablePort: '<S410>/Enable'
   */
  /* RelationalOperator: '<S408>/Relational Operator3' */
  if (rtb_DataTypeConversion1_d > BaseEngineController_LS_B.s536_Sum1) {
    /* S-Function (motohawk_sfun_calibration): '<S410>/motohawk_calibration2' */
    BaseEngineController_LS_B.s408_Merge = (SSRPMDecFiltC_DataStore());
  }

  /* End of RelationalOperator: '<S408>/Relational Operator3' */
  /* End of Outputs for SubSystem: '<S408>/DecreasingFilter' */

  /* Product: '<S408>/Product' incorporates:
   *  MinMax: '<S408>/MinMax'
   */
  rtb_Switch_hp /= (rtb_Switch_hp >= BaseEngineController_LS_B.s408_Merge) ||
    rtIsNaN(BaseEngineController_LS_B.s408_Merge) ? rtb_Switch_hp :
    BaseEngineController_LS_B.s408_Merge;

  /* Sum: '<S411>/Sum1' incorporates:
   *  Constant: '<S411>/Constant'
   *  Product: '<S411>/Product'
   *  Product: '<S411>/Product1'
   *  Sum: '<S411>/Sum'
   *  UnitDelay: '<S411>/Unit Delay'
   */
  BaseEngineController_LS_B.s411_Sum1 = (1.0 - rtb_Switch_hp) *
    BaseEngineController_LS_DWork.s411_UnitDelay_DSTATE +
    BaseEngineController_LS_B.s536_Sum1 * rtb_Switch_hp;

  /* Sum: '<S407>/Sum1' */
  rtb_Switch_hp = BaseEngineController_LS_B.s536_Sum1 -
    BaseEngineController_LS_B.s411_Sum1;

  /* Abs: '<S407>/Abs1' */
  rtb_Switch_hp = fabs(rtb_Switch_hp);

  /* RelationalOperator: '<S407>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S407>/Steady-state RPM Tolerance [RPM]'
   */
  rtb_LogicalOperator6_jl = (rtb_Switch_hp <= (SSRPMTol_DataStore()));

  /* RelationalOperator: '<S407>/Relational Operator2' incorporates:
   *  Constant: '<S407>/Constant'
   */
  rtb_LogicalOperator1_le = (BaseEngineController_LS_B.s536_Sum1 > 0.0);

  /* S-Function Block: <S409>/motohawk_delta_time */
  rtb_Switch_hp = 0.005;

  /* UnitDelay: '<S409>/Unit Delay2' */
  rtb_DataTypeConversion1_d =
    BaseEngineController_LS_DWork.s409_UnitDelay2_DSTATE;

  /* RelationalOperator: '<S409>/Relational Operator4' incorporates:
   *  UnitDelay: '<S409>/Unit Delay2'
   */
  BaseEngineController_LS_B.s409_RelationalOperator4 =
    ((BaseEngineController_LS_DWork.s409_UnitDelay2_DSTATE <
      BaseEngineController_LS_B.s579_Merge));

  /* Outputs for Enabled SubSystem: '<S409>/IncreasingFilter' incorporates:
   *  EnablePort: '<S415>/Enable'
   */
  if (BaseEngineController_LS_B.s409_RelationalOperator4) {
    /* S-Function (motohawk_sfun_calibration): '<S415>/motohawk_calibration1' */
    BaseEngineController_LS_B.s409_Merge = (SSLoadIncFiltC_DataStore());
  }

  /* End of Outputs for SubSystem: '<S409>/IncreasingFilter' */

  /* Outputs for Enabled SubSystem: '<S409>/DecreasingFilter' incorporates:
   *  EnablePort: '<S413>/Enable'
   */
  /* RelationalOperator: '<S409>/Relational Operator3' */
  if (rtb_DataTypeConversion1_d > BaseEngineController_LS_B.s579_Merge) {
    /* S-Function (motohawk_sfun_calibration): '<S413>/motohawk_calibration2' */
    BaseEngineController_LS_B.s409_Merge = (SSLoadDecFiltC_DataStore());
  }

  /* End of RelationalOperator: '<S409>/Relational Operator3' */
  /* End of Outputs for SubSystem: '<S409>/DecreasingFilter' */

  /* Product: '<S409>/Product' incorporates:
   *  MinMax: '<S409>/MinMax'
   */
  rtb_Switch_hp /= (rtb_Switch_hp >= BaseEngineController_LS_B.s409_Merge) ||
    rtIsNaN(BaseEngineController_LS_B.s409_Merge) ? rtb_Switch_hp :
    BaseEngineController_LS_B.s409_Merge;

  /* Sum: '<S414>/Sum1' incorporates:
   *  Constant: '<S414>/Constant'
   *  Product: '<S414>/Product'
   *  Product: '<S414>/Product1'
   *  Sum: '<S414>/Sum'
   *  UnitDelay: '<S414>/Unit Delay'
   */
  BaseEngineController_LS_B.s414_Sum1 = (1.0 - rtb_Switch_hp) *
    BaseEngineController_LS_DWork.s414_UnitDelay_DSTATE +
    BaseEngineController_LS_B.s579_Merge * rtb_Switch_hp;

  /* Sum: '<S407>/Sum' */
  rtb_Switch_hp = BaseEngineController_LS_B.s579_Merge -
    BaseEngineController_LS_B.s414_Sum1;

  /* Abs: '<S407>/Abs' */
  rtb_Switch_hp = fabs(rtb_Switch_hp);

  /* Logic: '<S407>/Logical Operator' incorporates:
   *  RelationalOperator: '<S407>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S407>/Steady-state Torque Tolerance [N.m]'
   */
  BaseEngineController_LS_B.s407_LogicalOperator = ((rtb_LogicalOperator6_jl &&
    rtb_LogicalOperator1_le && (rtb_Switch_hp <= (SSLoadTol_DataStore()))));

  /* S-Function Block: <S467>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (MAFPort05In_DataStore()) = BaseEngineController_LS_B.s389_MultiportSwitch;
    (MAFPort05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s389_MultiportSwitch,
       (MAFPort05IdxArr_DataStore()), 5, (MAFPort05Idx_DataStore()));
    rtb_motohawk_prelookup_o = (MAFPort05Idx_DataStore());
  }

  /* RelationalOperator: '<S436>/RelOp' incorporates:
   *  Constant: '<S436>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S384>/motohawk_data_read'
   */
  rtb_RelOp_d = (((uint8_T)EngineState_DataStore()) == 1);

  /* Outputs for Enabled SubSystem: '<S384>/Capture ECT At Startup' incorporates:
   *  EnablePort: '<S428>/Enable'
   */
  if (rtb_RelOp_d) {
    if (!BaseEngineController_LS_DWork.s384_CaptureECTAtStartup_MODE) {
      /* InitializeConditions for UnitDelay: '<S428>/Unit Delay' */
      BaseEngineController_LS_DWork.s428_UnitDelay_DSTATE = 0;
      BaseEngineController_LS_DWork.s384_CaptureECTAtStartup_MODE = TRUE;
    }

    /* Sum: '<S428>/Sum' incorporates:
     *  Constant: '<S428>/Constant'
     *  UnitDelay: '<S428>/Unit Delay'
     */
    rtb_Add_k = (int8_T)(BaseEngineController_LS_DWork.s428_UnitDelay_DSTATE + 1);

    /* Sum: '<S428>/Add' incorporates:
     *  Constant: '<S428>/TwoSampleBuffer ToIgnore'
     *  S-Function (motohawk_sfun_calibration): '<S428>/motohawk_calibration'
     */
    rtb_Sum_l3 = (int8_T)(((int8_T)(ECT_KeyUp_Count_DataStore())) + 2);

    /* RelationalOperator: '<S428>/Relational Operator' */
    rtb_LogicalOperator6_jl = (rtb_Add_k <= rtb_Sum_l3);

    /* Switch: '<S428>/Switch' */
    if (rtb_LogicalOperator6_jl) {
      rtb_Sum_l3 = rtb_Add_k;
    }

    /* End of Switch: '<S428>/Switch' */

    /* Sum: '<S428>/Add1' incorporates:
     *  Constant: '<S428>/TwoSampleBuffer ToIgnore'
     */
    rtb_Add1_k3 = (int8_T)(rtb_Sum_l3 - 2);

    /* Logic: '<S428>/Logical Operator' incorporates:
     *  Constant: '<S428>/TwoSampleBuffer ToIgnore'
     *  RelationalOperator: '<S428>/Relational Operator1'
     */
    rtb_LogicalOperator_mr = (rtb_LogicalOperator6_jl && (rtb_Add_k > 2));

    /* Outputs for Enabled SubSystem: '<S428>/Collect Average' */
    BaseEngineController_LS_CollectAverage(rtb_LogicalOperator_mr, rtb_Add1_k3,
      BaseEngineController_LS_B.s629_Merge,
      &BaseEngineController_LS_B.s428_CollectAverage,
      &BaseEngineController_LS_DWork.s428_CollectAverage);

    /* End of Outputs for SubSystem: '<S428>/Collect Average' */

    /* Update for UnitDelay: '<S428>/Unit Delay' */
    BaseEngineController_LS_DWork.s428_UnitDelay_DSTATE = rtb_Sum_l3;
  } else {
    if (BaseEngineController_LS_DWork.s384_CaptureECTAtStartup_MODE) {
      /* Disable for Enabled SubSystem: '<S428>/Collect Average' */
      BaseEngineController_LS_CollectAverage_Disable
        (&BaseEngineController_LS_DWork.s428_CollectAverage);

      /* End of Disable for SubSystem: '<S428>/Collect Average' */
      BaseEngineController_LS_DWork.s384_CaptureECTAtStartup_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S384>/Capture ECT At Startup' */
  /* S-Function Block: <S465>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (ECT_KeyUp09In_DataStore()) =
      BaseEngineController_LS_B.s428_CollectAverage.s391_Product;
    (ECT_KeyUp09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s428_CollectAverage.s391_Product,
       (ECT_KeyUp09IdxArr_DataStore()), 9, (ECT_KeyUp09Idx_DataStore()));
    rtb_motohawk_prelookup_j = (ECT_KeyUp09Idx_DataStore());
  }

  /* Sum: '<S450>/Sum2' incorporates:
   *  UnitDelay: '<S450>/Unit Delay'
   */
  rtb_DataTypeConversion1_d = BaseEngineController_LS_B.s536_Sum1 -
    BaseEngineController_LS_DWork.s450_UnitDelay_DSTATE;

  /* S-Function Block: <S450>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s450_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_ow = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S450>/Product' incorporates:
   *  S-Function (motohawk_sfun_delta_time): '<S450>/motohawk_delta_time'
   */
  rtb_DataTypeConversion1_d /= rtb_motohawk_delta_time_ow;

  /* S-Function Block: <S451>/motohawk_delta_time */
  rtb_Switch_hp = 0.005;

  /* Product: '<S451>/Product' incorporates:
   *  MinMax: '<S451>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S451>/motohawk_calibration'
   */
  rtb_Switch_hp /= (rtb_Switch_hp >= (EngineAccelFiltConst_DataStore())) ||
    rtIsNaN((EngineAccelFiltConst_DataStore())) ? rtb_Switch_hp :
    (EngineAccelFiltConst_DataStore());

  /* Sum: '<S452>/Sum1' incorporates:
   *  Constant: '<S452>/Constant'
   *  Product: '<S452>/Product'
   *  Product: '<S452>/Product1'
   *  Sum: '<S452>/Sum'
   *  UnitDelay: '<S452>/Unit Delay'
   */
  BaseEngineController_LS_B.s452_Sum1 = (1.0 - rtb_Switch_hp) *
    BaseEngineController_LS_DWork.s452_UnitDelay_DSTATE +
    rtb_DataTypeConversion1_d * rtb_Switch_hp;

  /* S-Function Block: <S385>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (RPMAccel17In_DataStore()) = BaseEngineController_LS_B.s452_Sum1;
    (RPMAccel17Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s452_Sum1, (RPMAccel17IdxArr_DataStore()), 17,
       (RPMAccel17Idx_DataStore()));
    BaseEngineController_LS_B.s385_RPMAccel17Idx = (RPMAccel17Idx_DataStore());
  }

  /* S-Function Block: <S385>/motohawk_prelookup2 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (TimeSinceRun09In_DataStore()) = BaseEngineController_LS_B.s462_Switch;
    (TimeSinceRun09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s462_Switch, (TimeSinceRun09IdxArr_DataStore()),
       9, (TimeSinceRun09Idx_DataStore()));
    rtb_TimeSinceRun09 = (TimeSinceRun09Idx_DataStore());
  }

  /* RelationalOperator: '<S94>/RelOp' incorporates:
   *  Constant: '<S94>/Constant'
   */
  rtb_RelOp_hf = (BaseEngineController_LS_B.s453_State == 3);

  /* S-Function Block: <S583>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s583_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_hp = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S583>/Product' incorporates:
   *  MinMax: '<S583>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S583>/motohawk_calibration'
   */
  rtb_Switch_hp /= (rtb_Switch_hp >= (MAPTimeFilterConst_DataStore())) ||
    rtIsNaN((MAPTimeFilterConst_DataStore())) ? rtb_Switch_hp :
    (MAPTimeFilterConst_DataStore());

  /* Sum: '<S588>/Sum1' incorporates:
   *  Constant: '<S588>/Constant'
   *  Product: '<S588>/Product'
   *  Product: '<S588>/Product1'
   *  Sum: '<S588>/Sum'
   *  UnitDelay: '<S588>/Unit Delay'
   */
  rtb_Sum1_mzy = (1.0 - rtb_Switch_hp) *
    BaseEngineController_LS_DWork.s588_UnitDelay_DSTATE + rtb_Merge_jq *
    rtb_Switch_hp;

  /* If: '<S587>/If' incorporates:
   *  Inport: '<S589>/In1'
   *  Inport: '<S590>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S587>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S587>/override_enable'
   */
  if ((MAPTime_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S587>/NewValue' incorporates:
     *  ActionPort: '<S589>/Action Port'
     */
    BaseEngineController_LS_B.s587_Merge = (MAPTime_new_DataStore());

    /* End of Outputs for SubSystem: '<S587>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S587>/OldValue' incorporates:
     *  ActionPort: '<S590>/Action Port'
     */
    BaseEngineController_LS_B.s587_Merge = rtb_Sum1_mzy;

    /* End of Outputs for SubSystem: '<S587>/OldValue' */
  }

  /* End of If: '<S587>/If' */

  /* Outputs for Enabled SubSystem: '<S15>/Run' incorporates:
   *  EnablePort: '<S93>/Enable'
   */
  if (rtb_RelOp_hf) {
    if (!BaseEngineController_LS_DWork.s15_Run_MODE) {
      /* InitializeConditions for S-Function (motohawk_sfun_trigger): '<S93>/motohawk_trigger1' */
      if (rtmIsFirstInitCond(BaseEngineController_LS_M)) {
        /* Initial conditions for function-call system: '<S93>/DFCO' */

        /* S-Function Block: <S135>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_LS_DWork.s135_motohawk_delta_time_DWORK1 = now -
            Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
        }

        /* S-Function Block: <S133>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_LS_DWork.s133_motohawk_delta_time_DWORK1 = now -
            Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }
      }

      if (rtmIsFirstInitCond(BaseEngineController_LS_M)) {
        /* Initial conditions for function-call system: '<S93>/MinGovernor' */

        /* InitializeConditions for Stateflow: '<S191>/IdleStateMachine' */
        BaseEngineController_LS_IdleStateMachine_Init();

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

        /* S-Function Block: <S194>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_LS_DWork.s194_motohawk_delta_time_DWORK1 = now -
            Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }

        /* InitializeConditions for Atomic SubSystem: '<S111>/AiflowOffset' */

        /* S-Function Block: <S197>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_LS_DWork.s197_motohawk_delta_time_DWORK1 = now -
            Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }

        /* End of InitializeConditions for SubSystem: '<S111>/AiflowOffset' */

        /* S-Function Block: <S222>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_LS_DWork.s222_motohawk_delta_time_DWORK1 = now -
            Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }
      }

      if (rtmIsFirstInitCond(BaseEngineController_LS_M)) {
        /* Initial conditions for function-call system: '<S93>/MaxGovernor' */

        /* S-Function Block: <S173>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_LS_DWork.s173_motohawk_delta_time_DWORK1 = now -
            Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }

        /* S-Function Block: <S184>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_LS_DWork.s184_motohawk_delta_time_DWORK1 = now -
            Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }
      }

      if (rtmIsFirstInitCond(BaseEngineController_LS_M)) {
        /* Initial conditions for function-call system: '<S93>/Spark Manager' */

        /* InitializeConditions for UnitDelay: '<S263>/Initial Condition is True' */
        BaseEngineController_LS_DWork.s263_InitialConditionisTrue_DSTATE = TRUE;
      }

      /* InitializeConditions for Atomic SubSystem: '<S93>/O2 Control' */

      /* InitializeConditions for Atomic SubSystem: '<S112>/O2 PID Controller Bank A' */
      /* InitializeConditions for UnitDelay: '<S242>/Unit Delay' */
      BaseEngineController_LS_DWork.s242_UnitDelay_DSTATE = FALSE;

      /* InitializeConditions for UnitDelay: '<S239>/Unit Delay' */
      BaseEngineController_LS_DWork.s239_UnitDelay_DSTATE = 0.0;

      /* InitializeConditions for UnitDelay: '<S238>/Unit Delay' */
      BaseEngineController_LS_DWork.s238_UnitDelay_DSTATE = 0.0;

      /* S-Function Block: <S239>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BaseEngineController_LS_DWork.s239_motohawk_delta_time_DWORK1 = now -
          Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
      }

      /* InitializeConditions for UnitDelay: '<S235>/Unit Delay1' */
      BaseEngineController_LS_DWork.s235_UnitDelay1_DSTATE = 0.0;

      /* S-Function Block: <S243>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BaseEngineController_LS_DWork.s243_motohawk_delta_time_DWORK1 = now -
          Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
      }

      /* InitializeConditions for UnitDelay: '<S235>/Unit Delay' */
      BaseEngineController_LS_DWork.s235_UnitDelay_DSTATE = 0.0;

      /* S-Function Block: <S245>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BaseEngineController_LS_DWork.s245_motohawk_delta_time_DWORK1 = now -
          Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
      }

      /* InitializeConditions for UnitDelay: '<S235>/Unit Delay2' */
      BaseEngineController_LS_DWork.s235_UnitDelay2_DSTATE = 0.0;

      /* S-Function Block: <S244>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BaseEngineController_LS_DWork.s244_motohawk_delta_time_DWORK1 = now -
          Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
      }

      /* End of InitializeConditions for SubSystem: '<S112>/O2 PID Controller Bank A' */

      /* InitializeConditions for Atomic SubSystem: '<S112>/O2 PID Controller Bank B' */
      /* InitializeConditions for UnitDelay: '<S254>/Unit Delay' */
      BaseEngineController_LS_DWork.s254_UnitDelay_DSTATE = FALSE;

      /* InitializeConditions for UnitDelay: '<S251>/Unit Delay' */
      BaseEngineController_LS_DWork.s251_UnitDelay_DSTATE = 0.0;

      /* InitializeConditions for UnitDelay: '<S250>/Unit Delay' */
      BaseEngineController_LS_DWork.s250_UnitDelay_DSTATE = 0.0;

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

      /* InitializeConditions for UnitDelay: '<S247>/Unit Delay1' */
      BaseEngineController_LS_DWork.s247_UnitDelay1_DSTATE = 0.0;

      /* S-Function Block: <S255>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BaseEngineController_LS_DWork.s255_motohawk_delta_time_DWORK1 = now -
          Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
      }

      /* InitializeConditions for UnitDelay: '<S247>/Unit Delay' */
      BaseEngineController_LS_DWork.s247_UnitDelay_DSTATE = 0.0;

      /* S-Function Block: <S257>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BaseEngineController_LS_DWork.s257_motohawk_delta_time_DWORK1 = now -
          Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
      }

      /* InitializeConditions for UnitDelay: '<S247>/Unit Delay2' */
      BaseEngineController_LS_DWork.s247_UnitDelay2_DSTATE = 0.0;

      /* S-Function Block: <S256>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BaseEngineController_LS_DWork.s256_motohawk_delta_time_DWORK1 = now -
          Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
      }

      /* End of InitializeConditions for SubSystem: '<S112>/O2 PID Controller Bank B' */
      /* End of InitializeConditions for SubSystem: '<S93>/O2 Control' */

      /* Level2 S-Function Block: '<S93>/motohawk_trigger1' (motohawk_sfun_trigger) */

      /* Enable for Trigger_FGND_5XRTI_PERIODIC_4424p0009 */
      BaseEngineController_LS_DWork.s93_motohawk_trigger1_DWORK1 = 1;
      BaseEngineController_LS_DWork.s15_Run_MODE = TRUE;
    }

    /* Outputs for Atomic SubSystem: '<S93>/Base Equiv Ratio' */

    /* S-Function Block: <S106>/motohawk_interpolation_2d1 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      BaseEngineController_LS_B.s106_WarmUpRatio = TableInterpolation2D_real_T
        (rtb_motohawk_prelookup_m, rtb_motohawk_prelookup1_h, (real_T *)
         ((WarmUpEqRatioMap_DataStore())), 5, 9);
      (WarmUpEqRatio_DataStore()) = BaseEngineController_LS_B.s106_WarmUpRatio;
    }

    /* S-Function Block: <S128>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_fx = TableInterpolation1D_real_T
        (BaseEngineController_LS_B.s418_motohawk_prelookup, (real_T *)
         ((Warmup_Time_HoldoffTbl_DataStore())), 5);
      (Warmup_Time_Holdoff_DataStore()) = rtb_motohawk_interpolation_1d_fx;
    }

    /* Switch: '<S128>/Switch' incorporates:
     *  Constant: '<S128>/Constant'
     *  RelationalOperator: '<S128>/Relational Operator'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S128>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_interpolation_2d): '<S106>/motohawk_interpolation_2d2'
     *  S-Function (motohawk_sfun_prelookup): '<S385>/motohawk_prelookup2'
     */
    if (BaseEngineController_LS_B.s462_Switch >=
        rtb_motohawk_interpolation_1d_fx) {
      /* S-Function Block: <S106>/motohawk_interpolation_2d2 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_WarmUptimeRatio = TableInterpolation2D_real_T(rtb_TimeSinceRun09,
          BaseEngineController_LS_B.s418_motohawk_prelookup, (real_T *)
          ((WarmUpTimeRatioMap_DataStore())), 9, 5);
        (WarmUpTimeRatio_DataStore()) = rtb_WarmUptimeRatio;
      }

      BaseEngineController_LS_B.s128_Switch = rtb_WarmUptimeRatio;
    } else {
      BaseEngineController_LS_B.s128_Switch = 1.0;
    }

    /* End of Switch: '<S128>/Switch' */
    /* S-Function Block: <S106>/motohawk_interpolation_2d5 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      BaseEngineController_LS_B.s106_IATEnrichment = TableInterpolation2D_real_T
        (rtb_motohawk_prelookup_m,
         BaseEngineController_LS_B.s419_motohawk_prelookup, (real_T *)
         ((IntakeAirTempEnrichmentMap_DataStore())), 5, 5);
      (IntakeAirTempEnrichment_DataStore()) =
        BaseEngineController_LS_B.s106_IATEnrichment;
    }

    /* S-Function Block: <S106>/motohawk_interpolation_2d6 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      BaseEngineController_LS_B.s106_CATEnrichment = TableInterpolation2D_real_T
        (rtb_motohawk_prelookup_m,
         BaseEngineController_LS_B.s417_motohawk_prelookup, (real_T *)
         ((ChargeAirTempEnrichmentMap_DataStore())), 5, 5);
      (ChargeAirTempEnrichment_DataStore()) =
        BaseEngineController_LS_B.s106_CATEnrichment;
    }

    /* S-Function Block: <S106>/motohawk_interpolation_2d3 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_motohawk_interpolation_2d3_b = TableInterpolation2D_real_T
        (BaseEngineController_LS_B.s420_Indexes,
         BaseEngineController_LS_B.s422_Indexes, (real_T *)
         ((DesEquivRatioMap_DataStore())), 17, 17);
      (DesEquivRatio_DataStore()) = rtb_motohawk_interpolation_2d3_b;
    }

    /* If: '<S129>/If' incorporates:
     *  Inport: '<S130>/In1'
     *  Inport: '<S131>/In1'
     *  S-Function (motohawk_sfun_calibration): '<S129>/new_value'
     *  S-Function (motohawk_sfun_calibration): '<S129>/override_enable'
     */
    if ((EquivRatio_ovr_DataStore())) {
      /* Outputs for IfAction SubSystem: '<S129>/NewValue' incorporates:
       *  ActionPort: '<S130>/Action Port'
       */
      rtb_DataTypeConversion1_d = (EquivRatio_new_DataStore());

      /* End of Outputs for SubSystem: '<S129>/NewValue' */
    } else {
      /* Outputs for IfAction SubSystem: '<S129>/OldValue' incorporates:
       *  ActionPort: '<S131>/Action Port'
       */
      rtb_DataTypeConversion1_d = rtb_motohawk_interpolation_2d3_b;

      /* End of Outputs for SubSystem: '<S129>/OldValue' */
    }

    /* End of If: '<S129>/If' */

    /* MinMax: '<S106>/MinMax' */
    y = (rtb_DataTypeConversion1_d >= BaseEngineController_LS_B.s106_WarmUpRatio)
      || rtIsNaN(BaseEngineController_LS_B.s106_WarmUpRatio) ?
      rtb_DataTypeConversion1_d : BaseEngineController_LS_B.s106_WarmUpRatio;
    y = (y >= BaseEngineController_LS_B.s128_Switch) || rtIsNaN
      (BaseEngineController_LS_B.s128_Switch) ? y :
      BaseEngineController_LS_B.s128_Switch;
    y = (y >= BaseEngineController_LS_B.s106_IATEnrichment) || rtIsNaN
      (BaseEngineController_LS_B.s106_IATEnrichment) ? y :
      BaseEngineController_LS_B.s106_IATEnrichment;
    BaseEngineController_LS_B.s106_DesEquivRatio = (y >=
      BaseEngineController_LS_B.s106_CATEnrichment) || rtIsNaN
      (BaseEngineController_LS_B.s106_CATEnrichment) ? y :
      BaseEngineController_LS_B.s106_CATEnrichment;

    /* End of Outputs for SubSystem: '<S93>/Base Equiv Ratio' */

    /* S-Function (motohawk_sfun_trigger): '<S93>/motohawk_trigger1' */
    /* Enable for Trigger_FGND_5XRTI_PERIODIC_4424p0009 */
    if (BaseEngineController_LS_DWork.s93_motohawk_trigger1_DWORK1 == 0) {
      BaseEngineController_LS_DWork.s93_motohawk_trigger1_DWORK1 = 1;
    }

    /* Outputs for Enabled SubSystem: '<S105>/ShutDownTasksComplete Reset' incorporates:
     *  EnablePort: '<S127>/Enable'
     */
    /* S-Function (motohawk_sfun_calibration): '<S105>/motohawk_calibration2' */
    if ((AirControlSource_DataStore())) {
      /* S-Function (motohawk_sfun_data_write): '<S127>/motohawk_data_write' incorporates:
       *  Constant: '<S127>/Constant'
       */
      /* Write to Data Storage as scalar: ShutDownTasksComplete */
      {
        ShutDownTasksComplete_DataStore() = TRUE;
      }
    }

    /* End of S-Function (motohawk_sfun_calibration): '<S105>/motohawk_calibration2' */
    /* End of Outputs for SubSystem: '<S105>/ShutDownTasksComplete Reset' */

    /* Sum: '<S105>/Sum2' */
    rtb_DataTypeConversion1_d =
      BaseEngineController_LS_B.s197_DontallowsetpointtoeverdropbelowtheTargetRPM
      + BaseEngineController_LS_B.s111_MinGovAirPID;

    /* MultiPortSwitch: '<S105>/Multiport Switch' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S105>/motohawk_calibration2'
     */
    if ((AirControlSource_DataStore()) == FALSE) {
      /* Switch: '<S105>/Switch1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S105>/motohawk_calibration1'
       */
      if ((ThrottleSource_DataStore())) {
        /* S-Function Block: <S105>/motohawk_interpolation_1d2 */
        {
          extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T
            *tbl_data, uint32_T sz);
          rtb_motohawk_interpolation_1d2_d = TableInterpolation1D_real_T
            (BaseEngineController_LS_B.s422_motohawk_prelookup1, (real_T *)
             ((MaxETCSetPtLimitTbl_DataStore())), 9);
          (MaxETCSetPtLimit_DataStore()) = rtb_motohawk_interpolation_1d2_d;
        }

        /* S-Function Block: <S105>/motohawk_interpolation_1d1 */
        {
          extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T
            *tbl_data, uint32_T sz);
          rtb_motohawk_interpolation_1d1_c = TableInterpolation1D_real_T
            (BaseEngineController_LS_B.s422_motohawk_prelookup1, (real_T *)
             ((MinETCSetPtLimitTbl_DataStore())), 9);
          (MinETCSetPtLimit_DataStore()) = rtb_motohawk_interpolation_1d1_c;
        }

        /* Switch: '<S105>/Switch2' */
        if (BaseEngineController_LS_B.s172_MultiportSwitch) {
          rtb_DataTypeConversion1_d = BaseEngineController_LS_B.s175_Switch;
        } else {
          /* Switch: '<S105>/Switch4' incorporates:
           *  Logic: '<S105>/Logical Operator'
           *  Sum: '<S105>/Sum1'
           */
          if (!BaseEngineController_LS_B.s207_RelOp) {
            rtb_DataTypeConversion1_d = BaseEngineController_LS_B.s445_Sum2 +
              BaseEngineController_LS_B.s197_DontallowsetpointtoeverdropbelowtheTargetRPM;
          }

          /* End of Switch: '<S105>/Switch4' */
        }

        /* End of Switch: '<S105>/Switch2' */

        /* MinMax: '<S126>/MinMax' */
        y = (rtb_DataTypeConversion1_d >= rtb_motohawk_interpolation_1d1_c) ||
          rtIsNaN(rtb_motohawk_interpolation_1d1_c) ? rtb_DataTypeConversion1_d :
          rtb_motohawk_interpolation_1d1_c;

        /* MinMax: '<S126>/MinMax1' incorporates:
         *  MinMax: '<S126>/MinMax'
         */
        rtb_DataTypeConversion1_d = (y <= rtb_motohawk_interpolation_1d2_d) ||
          rtIsNaN(rtb_motohawk_interpolation_1d2_d) ? y :
          rtb_motohawk_interpolation_1d2_d;
      } else {
        rtb_DataTypeConversion1_d = BaseEngineController_LS_B.s683_Merge;
      }

      /* End of Switch: '<S105>/Switch1' */
      BaseEngineController_LS_B.s105_MultiportSwitch = rtb_DataTypeConversion1_d;
    } else {
      BaseEngineController_LS_B.s105_MultiportSwitch = rtb_DataTypeConversion1_d;
    }

    /* End of MultiPortSwitch: '<S105>/Multiport Switch' */

    /* S-Function (motohawk_sfun_data_write): '<S105>/motohawk_data_write' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S105>/motohawk_calibration'
     */
    /* Write to Data Storage as scalar: IACType */
    {
      IACType_DataStore() = (IACTypeCal_DataStore());
    }

    /* Outputs for Atomic SubSystem: '<S93>/O2 Control' */
    /* Logic: '<S231>/Logical Operator' */
    rtb_LogicalOperator1_le = !BaseEngineController_LS_B.s477_DataValidState;

    /* Logic: '<S231>/Logical Operator1' */
    rtb_LogicalOperator6_jl = !BaseEngineController_LS_B.s477_DataValidState_f;

    /* Logic: '<S231>/Logical Operator2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S231>/motohawk_calibration'
     */
    rtb_LogicalOperator6_jl = (rtb_LogicalOperator6_jl && (BankB_Enbl_DataStore()));

    /* Logic: '<S231>/Logical Operator3' incorporates:
     *  S-Function (motohawk_sfun_fault_action): '<S231>/motohawk_fault_action'
     */
    BaseEngineController_LS_B.s231_LogicalOperator3 = ((rtb_LogicalOperator1_le ||
      rtb_LogicalOperator6_jl || GetFaultActionStatus(6)));

    /* S-Function (motohawk_sfun_data_write): '<S112>/motohawk_data_write' */
    /* Write to Data Storage as scalar: DisableO2FaultAction */
    {
      DisableO2FaultAction_DataStore() =
        BaseEngineController_LS_B.s231_LogicalOperator3;
    }

    /* Inport: '<S112>/Desired_Equiv' */
    rtb_DesiredLambda_idx = BaseEngineController_LS_B.s132_Product1;
    rtb_DesiredLambda_idx_0 = BaseEngineController_LS_B.s107_EquivRatioInfo[1];
    rtb_DesiredLambda_idx_1 = BaseEngineController_LS_B.s107_EquivRatioInfo[2];

    /* Logic: '<S226>/Logical Operator' incorporates:
     *  Constant: '<S226>/Constant'
     *  RelationalOperator: '<S226>/Relational Operator'
     *  RelationalOperator: '<S226>/Relational Operator1'
     *  S-Function (motohawk_sfun_calibration): '<S226>/motohawk_calibration1'
     *  Sum: '<S226>/Sum'
     *  Sum: '<S226>/Sum1'
     */
    BaseEngineController_LS_B.s226_LogicalOperator = (((rtb_DesiredLambda_idx <=
      (EquivRatioDelta_DataStore()) + 1.0) && (rtb_DesiredLambda_idx >= 1.0 -
      (EquivRatioDelta_DataStore()))));

    /* Logic: '<S226>/Logical Operator3' */
    BaseEngineController_LS_B.s226_LogicalOperator3 =
      !BaseEngineController_LS_B.s231_LogicalOperator3;

    /* S-Function Block: <S226>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_f = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_j, (real_T *) ((O2StartUpDelayTbl_DataStore())),
         9);
      (O2StartUpDelay_DataStore()) = rtb_motohawk_interpolation_1d_f;
    }

    /* RelationalOperator: '<S226>/Relational Operator5' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S226>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_prelookup): '<S465>/motohawk_prelookup'
     */
    BaseEngineController_LS_B.s226_RelationalOperator5 =
      ((BaseEngineController_LS_B.s462_Switch >= rtb_motohawk_interpolation_1d_f));

    /* Logic: '<S226>/Logical Operator2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S226>/motohawk_calibration2'
     */
    BaseEngineController_LS_B.s226_LogicalOperator2 =
      ((BaseEngineController_LS_B.s407_LogicalOperator &&
        BaseEngineController_LS_B.s226_LogicalOperator &&
        BaseEngineController_LS_B.s226_LogicalOperator3 &&
        (O2ControlEnable_DataStore()) &&
        BaseEngineController_LS_B.s226_RelationalOperator5));

    /* Logic: '<S112>/Logical Operator' */
    rtb_RelationalOperator3_bp =
      !BaseEngineController_LS_B.s226_LogicalOperator2;

    /* Logic: '<S112>/Logical Operator1' */
    rtb_LogicalOperator1_er = !rtb_RelOp_hf;

    /* S-Function Block: <S233>/motohawk_interpolation_2d */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_RichEquivRatioTargetDelta_p = TableInterpolation2D_real_T
        (BaseEngineController_LS_B.s420_motohawk_prelookup1,
         BaseEngineController_LS_B.s422_motohawk_prelookup1, (real_T *)
         ((RichTargetDeltaMap_DataStore())), 9, 9);
      (RichTargetDelta_DataStore()) = rtb_RichEquivRatioTargetDelta_p;
    }

    /* S-Function Block: <S233>/motohawk_interpolation_2d1 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_LeanEquivRatioTargetDelta = TableInterpolation2D_real_T
        (BaseEngineController_LS_B.s420_motohawk_prelookup1,
         BaseEngineController_LS_B.s422_motohawk_prelookup1, (real_T *)
         ((LeanTargetDeltaMap_DataStore())), 9, 9);
      (LeanTargetDelta_DataStore()) = rtb_LeanEquivRatioTargetDelta;
    }

    /* S-Function Block: <S233>/motohawk_interpolation_2d2 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_RichEquivRatioSwPtDelta = TableInterpolation2D_real_T
        (BaseEngineController_LS_B.s420_motohawk_prelookup1,
         BaseEngineController_LS_B.s422_motohawk_prelookup1, (real_T *)
         ((RichSwPtDeltaMap_DataStore())), 9, 9);
      (RichSwPtDelta_DataStore()) = rtb_RichEquivRatioSwPtDelta;
    }

    /* S-Function Block: <S233>/motohawk_interpolation_2d3 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_LeanEquivRatioSwPtDelta = TableInterpolation2D_real_T
        (BaseEngineController_LS_B.s420_motohawk_prelookup1,
         BaseEngineController_LS_B.s422_motohawk_prelookup1, (real_T *)
         ((LeanSwPtDeltaMap_DataStore())), 9, 9);
      (LeanSwPtDelta_DataStore()) = rtb_LeanEquivRatioSwPtDelta;
    }

    /* S-Function Block: <S232>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_i = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup1_h, (real_T *) ((O2NECCTErrGainMultTbl_DataStore
           ())), 9);
      (O2NECCTErrGainMult_DataStore()) = rtb_motohawk_interpolation_1d_i;
    }

    /* S-Function Block: <S232>/motohawk_interpolation_1d1 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d1_o0 = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_o, (real_T *) ((O2MAFErrGainMultTbl_DataStore())),
         5);
      (O2MAFErrGainMult_DataStore()) = rtb_motohawk_interpolation_1d1_o0;
    }

    /* Product: '<S232>/Product' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S232>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S232>/motohawk_interpolation_1d1'
     *  S-Function (motohawk_sfun_prelookup): '<S418>/motohawk_prelookup1'
     *  S-Function (motohawk_sfun_prelookup): '<S467>/motohawk_prelookup'
     */
    rtb_Switch2_a = rtb_motohawk_interpolation_1d_i *
      rtb_motohawk_interpolation_1d1_o0;

    /* Outputs for Atomic SubSystem: '<S112>/O2 PID Controller Bank A' */
    /* RelationalOperator: '<S235>/LT' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S233>/motohawk_interpolation_2d2'
     *  Sum: '<S235>/Sum3'
     */
    rtb_AboveRich_l = (BaseEngineController_LS_B.s435_Sum1 >=
                       rtb_DesiredLambda_idx + rtb_RichEquivRatioSwPtDelta);

    /* RelationalOperator: '<S235>/LT1' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S233>/motohawk_interpolation_2d3'
     *  Sum: '<S235>/Sum4'
     */
    rtb_LogicalOperator2_ij = (BaseEngineController_LS_B.s435_Sum1 <=
      rtb_DesiredLambda_idx - rtb_LeanEquivRatioSwPtDelta);

    /* CombinatorialLogic: '<S242>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_AboveRich_l != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_LogicalOperator2_ij != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_i[0] =
        BaseEngineController_LS_ConstP.pooled809[rowidx];
      rtb_CombinatorialLogic_i[1] =
        BaseEngineController_LS_ConstP.pooled809[rowidx + 4];
    }

    /* Switch: '<S242>/Switch1' incorporates:
     *  UnitDelay: '<S242>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_i[1]) {
      rtb_LogicalOperator1_le = rtb_CombinatorialLogic_i[0];
    } else {
      rtb_LogicalOperator1_le =
        BaseEngineController_LS_DWork.s242_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S242>/Switch1' */

    /* Switch: '<S228>/Switch' */
    if (rtb_RelationalOperator3_bp) {
      BaseEngineController_LS_B.s228_Switch =
        BaseEngineController_LS_B.s435_Sum1;
    } else {
      /* Switch: '<S235>/Switch2' incorporates:
       *  Logic: '<S235>/Logical Operator'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S233>/motohawk_interpolation_2d'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S233>/motohawk_interpolation_2d1'
       *  Sum: '<S235>/Sum1'
       *  Sum: '<S235>/Sum2'
       */
      if (!rtb_LogicalOperator1_le) {
        BaseEngineController_LS_B.s228_Switch = rtb_RichEquivRatioTargetDelta_p
          + rtb_DesiredLambda_idx;
      } else {
        BaseEngineController_LS_B.s228_Switch = rtb_DesiredLambda_idx -
          rtb_LeanEquivRatioTargetDelta;
      }

      /* End of Switch: '<S235>/Switch2' */
    }

    /* End of Switch: '<S228>/Switch' */

    /* Sum: '<S237>/Sum2' */
    BaseEngineController_LS_B.s237_Sum2 = BaseEngineController_LS_B.s228_Switch
      - BaseEngineController_LS_B.s435_Sum1;

    /* Product: '<S237>/Product5' */
    rtb_Switch3_p = BaseEngineController_LS_B.s237_Sum2 * rtb_Switch2_a;

    /* Product: '<S237>/Product2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S227>/motohawk_calibration5'
     */
    BaseEngineController_LS_B.s237_Product2 = rtb_Switch3_p *
      (O2CtrlPGain_DataStore());

    /* Switch: '<S239>/Switch1' incorporates:
     *  Constant: '<S234>/Constant'
     *  UnitDelay: '<S239>/Unit Delay'
     */
    if (rtb_LogicalOperator1_er) {
      BaseEngineController_LS_B.s239_Switch1 = 0.0;
    } else {
      BaseEngineController_LS_B.s239_Switch1 =
        BaseEngineController_LS_DWork.s239_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S239>/Switch1' */

    /* Product: '<S237>/Product4' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S227>/motohawk_calibration7'
     */
    rtb_Switch1_f = rtb_Switch3_p * (O2CtrlDGain_DataStore());

    /* Sum: '<S238>/Sum2' incorporates:
     *  UnitDelay: '<S238>/Unit Delay'
     */
    rtb_DataTypeConversion1_d = rtb_Switch1_f -
      BaseEngineController_LS_DWork.s238_UnitDelay_DSTATE;

    /* S-Function Block: <S238>/motohawk_delta_time */
    rtb_motohawk_delta_time_m4 = 0.005;

    /* Product: '<S238>/Product' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S238>/motohawk_delta_time'
     */
    BaseEngineController_LS_B.s238_Product = rtb_DataTypeConversion1_d /
      rtb_motohawk_delta_time_m4;

    /* MinMax: '<S236>/MinMax' incorporates:
     *  Constant: '<S234>/Convert to Fuel Multiplier'
     *  S-Function (motohawk_sfun_calibration): '<S227>/motohawk_calibration11'
     *  Sum: '<S234>/Sum'
     *  Sum: '<S237>/Sum1'
     */
    rtb_UnitDelay3_mp = ((BaseEngineController_LS_B.s237_Product2 +
                          BaseEngineController_LS_B.s238_Product) +
                         BaseEngineController_LS_B.s239_Switch1) + 1.0;
    y = (rtb_UnitDelay3_mp >= (O2CtrlPIDOutLowerLimit_DataStore())) || rtIsNaN
      ((O2CtrlPIDOutLowerLimit_DataStore())) ? rtb_UnitDelay3_mp :
      (O2CtrlPIDOutLowerLimit_DataStore());

    /* MinMax: '<S236>/MinMax1' incorporates:
     *  MinMax: '<S236>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S227>/motohawk_calibration10'
     */
    rtb_Multiplyby10ifnotyetenabled_c = (y <= (O2CtrlPIDOutUpperLimit_DataStore()))
      || rtIsNaN((O2CtrlPIDOutUpperLimit_DataStore())) ? y :
      (O2CtrlPIDOutUpperLimit_DataStore());

    /* Product: '<S237>/Product1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S227>/motohawk_calibration6'
     */
    rtb_DataTypeConversion1_d = rtb_Switch3_p * (O2CtrlIGain_DataStore());

    /* S-Function Block: <S239>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s239_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_a = ((real_T) delta) * 0.000001;
    }

    /* MinMax: '<S241>/MinMax' incorporates:
     *  Product: '<S239>/Product'
     *  S-Function (motohawk_sfun_calibration): '<S227>/motohawk_calibration8'
     *  S-Function (motohawk_sfun_delta_time): '<S239>/motohawk_delta_time'
     *  Sum: '<S239>/Sum'
     */
    rtb_UnitDelay3_mp = rtb_DataTypeConversion1_d * rtb_motohawk_delta_time_a +
      BaseEngineController_LS_B.s239_Switch1;
    y = (rtb_UnitDelay3_mp >= (O2ITermLowerLimit_DataStore())) || rtIsNaN
      ((O2ITermLowerLimit_DataStore())) ? rtb_UnitDelay3_mp :
      (O2ITermLowerLimit_DataStore());

    /* MinMax: '<S241>/MinMax1' incorporates:
     *  MinMax: '<S241>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S227>/motohawk_calibration9'
     */
    y = (y <= (O2ITermUpperLimit_DataStore())) || rtIsNaN
      ((O2ITermUpperLimit_DataStore())) ? y : (O2ITermUpperLimit_DataStore());

    /* UnitDelay: '<S235>/Unit Delay1' */
    rtb_Switch3_p = BaseEngineController_LS_DWork.s235_UnitDelay1_DSTATE;

    /* Logic: '<S235>/Logical Operator10' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S235>/motohawk_data_read'
     */
    rtb_LogicalOperator6_jl = (rtb_LogicalOperator2_ij &&
      DisableO2FaultAction_DataStore());

    /* S-Function Block: <S243>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s243_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_eq = ((real_T) delta) * 0.000001;
    }

    /* Logic: '<S235>/Logical Operator4' */
    rtb_Switch1_pb = !rtb_RelationalOperator3_bp;

    /* Logic: '<S235>/Logical Operator6' */
    rtb_RelationalOperator2_py = !rtb_LogicalOperator1_er;

    /* Switch: '<S243>/Switch' incorporates:
     *  Constant: '<S243>/Constant'
     *  Logic: '<S235>/Logical Operator7'
     *  S-Function (motohawk_sfun_data_read): '<S243>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S243>/motohawk_delta_time'
     *  Sum: '<S243>/Sum'
     */
    if (rtb_LogicalOperator2_ij && rtb_Switch1_pb && rtb_RelationalOperator2_py)
    {
      rtb_DataTypeConversion1_d = rtb_motohawk_delta_time_eq +
        O2LeanTimer_BankA_DataStore();
    } else {
      rtb_DataTypeConversion1_d = 0.0;
    }

    /* End of Switch: '<S243>/Switch' */

    /* Switch: '<S235>/Switch3' */
    if (rtb_LogicalOperator6_jl) {
      BaseEngineController_LS_B.s235_Switch3 = rtb_Switch3_p;
    } else {
      BaseEngineController_LS_B.s235_Switch3 = rtb_DataTypeConversion1_d;
    }

    /* End of Switch: '<S235>/Switch3' */
    /* RelationalOperator: '<S235>/LT3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S235>/motohawk_calibration2'
     */
    rtb_LT3_k = ((BaseEngineController_LS_B.s235_Switch3 >=
                  (O2LeanTimeThresh_BankA_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S235>/motohawk_fault_def' */

    /* Set Fault Suspected Status: O2FailedLean_BankA */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(122, rtb_LT3_k);
      UpdateFault(122);
    }

    /* UnitDelay: '<S235>/Unit Delay' */
    rtb_Switch3_p = BaseEngineController_LS_DWork.s235_UnitDelay_DSTATE;

    /* Logic: '<S235>/Logical Operator9' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S235>/motohawk_data_read'
     */
    rtb_LogicalOperator6_jl = (rtb_AboveRich_l && DisableO2FaultAction_DataStore
                               ());

    /* S-Function Block: <S245>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s245_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_bh = ((real_T) delta) * 0.000001;
    }

    /* Switch: '<S245>/Switch' incorporates:
     *  Constant: '<S245>/Constant'
     *  Logic: '<S235>/Logical Operator5'
     *  S-Function (motohawk_sfun_data_read): '<S245>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S245>/motohawk_delta_time'
     *  Sum: '<S245>/Sum'
     */
    if (rtb_AboveRich_l && rtb_Switch1_pb && rtb_RelationalOperator2_py) {
      rtb_DataTypeConversion_b2 = rtb_motohawk_delta_time_bh +
        O2RichTimer_BankA_DataStore();
    } else {
      rtb_DataTypeConversion_b2 = 0.0;
    }

    /* End of Switch: '<S245>/Switch' */

    /* Switch: '<S235>/Switch1' */
    if (rtb_LogicalOperator6_jl) {
      BaseEngineController_LS_B.s235_Switch1 = rtb_Switch3_p;
    } else {
      BaseEngineController_LS_B.s235_Switch1 = rtb_DataTypeConversion_b2;
    }

    /* End of Switch: '<S235>/Switch1' */
    /* RelationalOperator: '<S235>/LT2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S235>/motohawk_calibration1'
     */
    rtb_LT2_p = ((BaseEngineController_LS_B.s235_Switch1 >=
                  (O2RichTimeThresh_BankA_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S235>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: O2FailedRich_BankA */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(124, rtb_LT2_p);
      UpdateFault(124);
    }

    /* UnitDelay: '<S235>/Unit Delay2' */
    rtb_Switch3_p = BaseEngineController_LS_DWork.s235_UnitDelay2_DSTATE;

    /* Logic: '<S235>/Logical Operator2' incorporates:
     *  Logic: '<S235>/Logical Operator1'
     *  Logic: '<S235>/Logical Operator3'
     */
    rtb_LogicalOperator2_ij = ((!rtb_LogicalOperator2_ij) && (!rtb_AboveRich_l));

    /* Logic: '<S235>/Logical Operator11' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S235>/motohawk_data_read'
     */
    rtb_LogicalOperator6_jl = (rtb_LogicalOperator2_ij &&
      DisableO2FaultAction_DataStore());

    /* S-Function Block: <S244>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s244_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_lv = ((real_T) delta) * 0.000001;
    }

    /* Switch: '<S244>/Switch' incorporates:
     *  Constant: '<S244>/Constant'
     *  Logic: '<S235>/Logical Operator8'
     *  S-Function (motohawk_sfun_data_read): '<S244>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S244>/motohawk_delta_time'
     *  Sum: '<S244>/Sum'
     */
    if (rtb_LogicalOperator2_ij && rtb_Switch1_pb && rtb_RelationalOperator2_py)
    {
      rtb_Product1_gw = rtb_motohawk_delta_time_lv +
        O2ActiveTimer_BankA_DataStore();
    } else {
      rtb_Product1_gw = 0.0;
    }

    /* End of Switch: '<S244>/Switch' */

    /* Switch: '<S235>/Switch4' */
    if (rtb_LogicalOperator6_jl) {
      BaseEngineController_LS_B.s235_Switch4 = rtb_Switch3_p;
    } else {
      BaseEngineController_LS_B.s235_Switch4 = rtb_Product1_gw;
    }

    /* End of Switch: '<S235>/Switch4' */
    /* RelationalOperator: '<S235>/LT4' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S235>/motohawk_calibration3'
     */
    rtb_LT4_g = ((BaseEngineController_LS_B.s235_Switch4 >=
                  (O2ActiveTimeThresh_BankA_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S235>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: O2NotActive_BankA */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(126, rtb_LT4_g);
      UpdateFault(126);
    }

    /* Saturate: '<S243>/Saturation' */
    rtb_Saturation_jz = rtb_DataTypeConversion1_d >= 16000.0 ? 16000.0 :
      rtb_DataTypeConversion1_d <= 0.0 ? 0.0 : rtb_DataTypeConversion1_d;

    /* S-Function (motohawk_sfun_data_write): '<S243>/motohawk_data_write' */
    /* Write to Data Storage as scalar: O2LeanTimer_BankA */
    {
      O2LeanTimer_BankA_DataStore() = rtb_Saturation_jz;
    }

    /* Saturate: '<S244>/Saturation' */
    rtb_Saturation_lu = rtb_Product1_gw >= 16000.0 ? 16000.0 : rtb_Product1_gw <=
      0.0 ? 0.0 : rtb_Product1_gw;

    /* S-Function (motohawk_sfun_data_write): '<S244>/motohawk_data_write' */
    /* Write to Data Storage as scalar: O2ActiveTimer_BankA */
    {
      O2ActiveTimer_BankA_DataStore() = rtb_Saturation_lu;
    }

    /* Saturate: '<S245>/Saturation' */
    rtb_Saturation_oq = rtb_DataTypeConversion_b2 >= 16000.0 ? 16000.0 :
      rtb_DataTypeConversion_b2 <= 0.0 ? 0.0 : rtb_DataTypeConversion_b2;

    /* S-Function (motohawk_sfun_data_write): '<S245>/motohawk_data_write' */
    /* Write to Data Storage as scalar: O2RichTimer_BankA */
    {
      O2RichTimer_BankA_DataStore() = rtb_Saturation_oq;
    }

    /* InitialCondition: '<S228>/Multiply by 1.0 if not yet enabled' */
    if (BaseEngineController_LS_DWork.s228_Multiplyby10ifnotyetenabled_FirstOutputTime)
    {
      BaseEngineController_LS_DWork.s228_Multiplyby10ifnotyetenabled_FirstOutputTime
        = FALSE;
      rtb_Multiplyby10ifnotyetenabled_c = 1.0;
    }

    /* End of InitialCondition: '<S228>/Multiply by 1.0 if not yet enabled' */

    /* Update for UnitDelay: '<S242>/Unit Delay' */
    BaseEngineController_LS_DWork.s242_UnitDelay_DSTATE =
      rtb_LogicalOperator1_le;

    /* Update for UnitDelay: '<S239>/Unit Delay' incorporates:
     *  MinMax: '<S241>/MinMax1'
     */
    BaseEngineController_LS_DWork.s239_UnitDelay_DSTATE = y;

    /* Update for UnitDelay: '<S238>/Unit Delay' */
    BaseEngineController_LS_DWork.s238_UnitDelay_DSTATE = rtb_Switch1_f;

    /* Update for UnitDelay: '<S235>/Unit Delay1' */
    BaseEngineController_LS_DWork.s235_UnitDelay1_DSTATE =
      BaseEngineController_LS_B.s235_Switch3;

    /* Update for UnitDelay: '<S235>/Unit Delay' */
    BaseEngineController_LS_DWork.s235_UnitDelay_DSTATE =
      BaseEngineController_LS_B.s235_Switch1;

    /* Update for UnitDelay: '<S235>/Unit Delay2' */
    BaseEngineController_LS_DWork.s235_UnitDelay2_DSTATE =
      BaseEngineController_LS_B.s235_Switch4;

    /* End of Outputs for SubSystem: '<S112>/O2 PID Controller Bank A' */

    /* Outputs for Atomic SubSystem: '<S112>/O2 PID Controller Bank B' */
    /* RelationalOperator: '<S247>/LT' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S233>/motohawk_interpolation_2d2'
     *  Sum: '<S247>/Sum3'
     */
    rtb_AboveRich = (BaseEngineController_LS_B.s435_Sum3 >=
                     rtb_DesiredLambda_idx + rtb_RichEquivRatioSwPtDelta);

    /* RelationalOperator: '<S247>/LT1' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S233>/motohawk_interpolation_2d3'
     *  Sum: '<S247>/Sum4'
     */
    rtb_LogicalOperator2_br = (BaseEngineController_LS_B.s435_Sum3 <=
      rtb_DesiredLambda_idx - rtb_LeanEquivRatioSwPtDelta);

    /* CombinatorialLogic: '<S254>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_AboveRich != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_LogicalOperator2_br != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_cd[0] =
        BaseEngineController_LS_ConstP.pooled809[rowidx];
      rtb_CombinatorialLogic_cd[1] =
        BaseEngineController_LS_ConstP.pooled809[rowidx + 4];
    }

    /* Switch: '<S254>/Switch1' incorporates:
     *  UnitDelay: '<S254>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_cd[1]) {
      rtb_RelationalOperator2_py = rtb_CombinatorialLogic_cd[0];
    } else {
      rtb_RelationalOperator2_py =
        BaseEngineController_LS_DWork.s254_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S254>/Switch1' */

    /* Switch: '<S229>/Switch' */
    if (rtb_RelationalOperator3_bp) {
      BaseEngineController_LS_B.s229_Switch =
        BaseEngineController_LS_B.s435_Sum3;
    } else {
      /* Switch: '<S247>/Switch2' incorporates:
       *  Logic: '<S247>/Logical Operator'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S233>/motohawk_interpolation_2d'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S233>/motohawk_interpolation_2d1'
       *  Sum: '<S247>/Sum1'
       *  Sum: '<S247>/Sum2'
       */
      if (!rtb_RelationalOperator2_py) {
        BaseEngineController_LS_B.s229_Switch = rtb_RichEquivRatioTargetDelta_p
          + rtb_DesiredLambda_idx;
      } else {
        BaseEngineController_LS_B.s229_Switch = rtb_DesiredLambda_idx -
          rtb_LeanEquivRatioTargetDelta;
      }

      /* End of Switch: '<S247>/Switch2' */
    }

    /* End of Switch: '<S229>/Switch' */

    /* Sum: '<S249>/Sum2' */
    BaseEngineController_LS_B.s249_Sum2 = BaseEngineController_LS_B.s229_Switch
      - BaseEngineController_LS_B.s435_Sum3;

    /* Product: '<S249>/Product5' */
    rtb_Switch3_p = BaseEngineController_LS_B.s249_Sum2 * rtb_Switch2_a;

    /* Product: '<S249>/Product2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S227>/motohawk_calibration5'
     */
    BaseEngineController_LS_B.s249_Product2 = rtb_Switch3_p *
      (O2CtrlPGain_DataStore());

    /* Switch: '<S251>/Switch1' incorporates:
     *  Constant: '<S246>/Constant'
     *  UnitDelay: '<S251>/Unit Delay'
     */
    if (rtb_LogicalOperator1_er) {
      BaseEngineController_LS_B.s251_Switch1 = 0.0;
    } else {
      BaseEngineController_LS_B.s251_Switch1 =
        BaseEngineController_LS_DWork.s251_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S251>/Switch1' */

    /* Product: '<S249>/Product4' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S227>/motohawk_calibration7'
     */
    rtb_Switch2_a = rtb_Switch3_p * (O2CtrlDGain_DataStore());

    /* Sum: '<S250>/Sum2' incorporates:
     *  UnitDelay: '<S250>/Unit Delay'
     */
    rtb_DataTypeConversion1_d = rtb_Switch2_a -
      BaseEngineController_LS_DWork.s250_UnitDelay_DSTATE;

    /* S-Function Block: <S250>/motohawk_delta_time */
    rtb_motohawk_delta_time_gl = 0.005;

    /* Product: '<S250>/Product' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S250>/motohawk_delta_time'
     */
    BaseEngineController_LS_B.s250_Product = rtb_DataTypeConversion1_d /
      rtb_motohawk_delta_time_gl;

    /* MinMax: '<S248>/MinMax' incorporates:
     *  Constant: '<S246>/Convert to Fuel Multiplier'
     *  S-Function (motohawk_sfun_calibration): '<S227>/motohawk_calibration11'
     *  Sum: '<S246>/Sum'
     *  Sum: '<S249>/Sum1'
     */
    rtb_UnitDelay3_mp = ((BaseEngineController_LS_B.s249_Product2 +
                          BaseEngineController_LS_B.s250_Product) +
                         BaseEngineController_LS_B.s251_Switch1) + 1.0;
    y = (rtb_UnitDelay3_mp >= (O2CtrlPIDOutLowerLimit_DataStore())) || rtIsNaN
      ((O2CtrlPIDOutLowerLimit_DataStore())) ? rtb_UnitDelay3_mp :
      (O2CtrlPIDOutLowerLimit_DataStore());

    /* MinMax: '<S248>/MinMax1' incorporates:
     *  MinMax: '<S248>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S227>/motohawk_calibration10'
     */
    rtb_Switch4_i = (y <= (O2CtrlPIDOutUpperLimit_DataStore())) || rtIsNaN
      ((O2CtrlPIDOutUpperLimit_DataStore())) ? y :
      (O2CtrlPIDOutUpperLimit_DataStore());

    /* Product: '<S249>/Product1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S227>/motohawk_calibration6'
     */
    rtb_DataTypeConversion1_d = rtb_Switch3_p * (O2CtrlIGain_DataStore());

    /* S-Function Block: <S251>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s251_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_i5 = ((real_T) delta) * 0.000001;
    }

    /* MinMax: '<S253>/MinMax' incorporates:
     *  Product: '<S251>/Product'
     *  S-Function (motohawk_sfun_calibration): '<S227>/motohawk_calibration8'
     *  S-Function (motohawk_sfun_delta_time): '<S251>/motohawk_delta_time'
     *  Sum: '<S251>/Sum'
     */
    rtb_UnitDelay3_mp = rtb_DataTypeConversion1_d * rtb_motohawk_delta_time_i5 +
      BaseEngineController_LS_B.s251_Switch1;
    y = (rtb_UnitDelay3_mp >= (O2ITermLowerLimit_DataStore())) || rtIsNaN
      ((O2ITermLowerLimit_DataStore())) ? rtb_UnitDelay3_mp :
      (O2ITermLowerLimit_DataStore());

    /* MinMax: '<S253>/MinMax1' incorporates:
     *  MinMax: '<S253>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S227>/motohawk_calibration9'
     */
    y = (y <= (O2ITermUpperLimit_DataStore())) || rtIsNaN
      ((O2ITermUpperLimit_DataStore())) ? y : (O2ITermUpperLimit_DataStore());

    /* UnitDelay: '<S247>/Unit Delay1' */
    rtb_Switch3_p = BaseEngineController_LS_DWork.s247_UnitDelay1_DSTATE;

    /* Logic: '<S247>/Logical Operator10' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S247>/motohawk_data_read'
     */
    rtb_LogicalOperator6_jl = (rtb_LogicalOperator2_br &&
      DisableO2FaultAction_DataStore());

    /* S-Function Block: <S255>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s255_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_lq = ((real_T) delta) * 0.000001;
    }

    /* Logic: '<S247>/Logical Operator4' */
    rtb_Switch1_pb = !rtb_RelationalOperator3_bp;

    /* Logic: '<S247>/Logical Operator6' */
    rtb_LogicalOperator1_le = !rtb_LogicalOperator1_er;

    /* Switch: '<S255>/Switch' incorporates:
     *  Constant: '<S255>/Constant'
     *  Logic: '<S247>/Logical Operator7'
     *  S-Function (motohawk_sfun_data_read): '<S255>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S255>/motohawk_delta_time'
     *  Sum: '<S255>/Sum'
     */
    if (rtb_LogicalOperator2_br && rtb_Switch1_pb && rtb_LogicalOperator1_le) {
      rtb_DataTypeConversion1_d = rtb_motohawk_delta_time_lq +
        O2LeanTimer_BankB_DataStore();
    } else {
      rtb_DataTypeConversion1_d = 0.0;
    }

    /* End of Switch: '<S255>/Switch' */

    /* Switch: '<S247>/Switch3' */
    if (rtb_LogicalOperator6_jl) {
      BaseEngineController_LS_B.s247_Switch3 = rtb_Switch3_p;
    } else {
      BaseEngineController_LS_B.s247_Switch3 = rtb_DataTypeConversion1_d;
    }

    /* End of Switch: '<S247>/Switch3' */
    /* RelationalOperator: '<S247>/LT3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S247>/motohawk_calibration2'
     */
    rtb_LT3 = ((BaseEngineController_LS_B.s247_Switch3 >=
                (O2LeanTimeThresh_BankB_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S247>/motohawk_fault_def' */

    /* Set Fault Suspected Status: O2FailedLean_BankB */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(123, rtb_LT3);
      UpdateFault(123);
    }

    /* UnitDelay: '<S247>/Unit Delay' */
    rtb_Switch3_p = BaseEngineController_LS_DWork.s247_UnitDelay_DSTATE;

    /* Logic: '<S247>/Logical Operator9' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S247>/motohawk_data_read'
     */
    rtb_LogicalOperator6_jl = (rtb_AboveRich && DisableO2FaultAction_DataStore());

    /* S-Function Block: <S257>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s257_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_ny = ((real_T) delta) * 0.000001;
    }

    /* Switch: '<S257>/Switch' incorporates:
     *  Constant: '<S257>/Constant'
     *  Logic: '<S247>/Logical Operator5'
     *  S-Function (motohawk_sfun_data_read): '<S257>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S257>/motohawk_delta_time'
     *  Sum: '<S257>/Sum'
     */
    if (rtb_AboveRich && rtb_Switch1_pb && rtb_LogicalOperator1_le) {
      rtb_DataTypeConversion_b2 = rtb_motohawk_delta_time_ny +
        O2RichTimer_BankB_DataStore();
    } else {
      rtb_DataTypeConversion_b2 = 0.0;
    }

    /* End of Switch: '<S257>/Switch' */

    /* Switch: '<S247>/Switch1' */
    if (rtb_LogicalOperator6_jl) {
      BaseEngineController_LS_B.s247_Switch1 = rtb_Switch3_p;
    } else {
      BaseEngineController_LS_B.s247_Switch1 = rtb_DataTypeConversion_b2;
    }

    /* End of Switch: '<S247>/Switch1' */
    /* RelationalOperator: '<S247>/LT2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S247>/motohawk_calibration1'
     */
    rtb_LT2 = ((BaseEngineController_LS_B.s247_Switch1 >=
                (O2RichTimeThresh_BankB_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S247>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: O2FailedRich_BankB */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(125, rtb_LT2);
      UpdateFault(125);
    }

    /* UnitDelay: '<S247>/Unit Delay2' */
    rtb_Switch3_p = BaseEngineController_LS_DWork.s247_UnitDelay2_DSTATE;

    /* Logic: '<S247>/Logical Operator2' incorporates:
     *  Logic: '<S247>/Logical Operator1'
     *  Logic: '<S247>/Logical Operator3'
     */
    rtb_LogicalOperator2_br = ((!rtb_LogicalOperator2_br) && (!rtb_AboveRich));

    /* Logic: '<S247>/Logical Operator11' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S247>/motohawk_data_read'
     */
    rtb_LogicalOperator6_jl = (rtb_LogicalOperator2_br &&
      DisableO2FaultAction_DataStore());

    /* S-Function Block: <S256>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s256_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_nf = ((real_T) delta) * 0.000001;
    }

    /* Switch: '<S256>/Switch' incorporates:
     *  Constant: '<S256>/Constant'
     *  Logic: '<S247>/Logical Operator8'
     *  S-Function (motohawk_sfun_data_read): '<S256>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S256>/motohawk_delta_time'
     *  Sum: '<S256>/Sum'
     */
    if (rtb_LogicalOperator2_br && rtb_Switch1_pb && rtb_LogicalOperator1_le) {
      rtb_Product1_gw = rtb_motohawk_delta_time_nf +
        O2ActiveTimer_BankB_DataStore();
    } else {
      rtb_Product1_gw = 0.0;
    }

    /* End of Switch: '<S256>/Switch' */

    /* Switch: '<S247>/Switch4' */
    if (rtb_LogicalOperator6_jl) {
      BaseEngineController_LS_B.s247_Switch4 = rtb_Switch3_p;
    } else {
      BaseEngineController_LS_B.s247_Switch4 = rtb_Product1_gw;
    }

    /* End of Switch: '<S247>/Switch4' */
    /* RelationalOperator: '<S247>/LT4' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S247>/motohawk_calibration3'
     */
    rtb_LT4 = ((BaseEngineController_LS_B.s247_Switch4 >=
                (O2ActiveTimeThresh_BankB_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S247>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: O2NotActive_BankB */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(127, rtb_LT4);
      UpdateFault(127);
    }

    /* Saturate: '<S255>/Saturation' */
    rtb_Saturation_e = rtb_DataTypeConversion1_d >= 16000.0 ? 16000.0 :
      rtb_DataTypeConversion1_d <= 0.0 ? 0.0 : rtb_DataTypeConversion1_d;

    /* S-Function (motohawk_sfun_data_write): '<S255>/motohawk_data_write' */
    /* Write to Data Storage as scalar: O2LeanTimer_BankB */
    {
      O2LeanTimer_BankB_DataStore() = rtb_Saturation_e;
    }

    /* Saturate: '<S256>/Saturation' */
    rtb_Saturation_jl = rtb_Product1_gw >= 16000.0 ? 16000.0 : rtb_Product1_gw <=
      0.0 ? 0.0 : rtb_Product1_gw;

    /* S-Function (motohawk_sfun_data_write): '<S256>/motohawk_data_write' */
    /* Write to Data Storage as scalar: O2ActiveTimer_BankB */
    {
      O2ActiveTimer_BankB_DataStore() = rtb_Saturation_jl;
    }

    /* Saturate: '<S257>/Saturation' */
    rtb_Saturation_po = rtb_DataTypeConversion_b2 >= 16000.0 ? 16000.0 :
      rtb_DataTypeConversion_b2 <= 0.0 ? 0.0 : rtb_DataTypeConversion_b2;

    /* S-Function (motohawk_sfun_data_write): '<S257>/motohawk_data_write' */
    /* Write to Data Storage as scalar: O2RichTimer_BankB */
    {
      O2RichTimer_BankB_DataStore() = rtb_Saturation_po;
    }

    /* InitialCondition: '<S229>/Multiply by 1.0 if not yet enabled' */
    if (BaseEngineController_LS_DWork.s229_Multiplyby10ifnotyetenabled_FirstOutputTime)
    {
      BaseEngineController_LS_DWork.s229_Multiplyby10ifnotyetenabled_FirstOutputTime
        = FALSE;
      rtb_Switch4_i = 1.0;
    }

    /* End of InitialCondition: '<S229>/Multiply by 1.0 if not yet enabled' */

    /* Update for UnitDelay: '<S254>/Unit Delay' */
    BaseEngineController_LS_DWork.s254_UnitDelay_DSTATE =
      rtb_RelationalOperator2_py;

    /* Update for UnitDelay: '<S251>/Unit Delay' incorporates:
     *  MinMax: '<S253>/MinMax1'
     */
    BaseEngineController_LS_DWork.s251_UnitDelay_DSTATE = y;

    /* Update for UnitDelay: '<S250>/Unit Delay' */
    BaseEngineController_LS_DWork.s250_UnitDelay_DSTATE = rtb_Switch2_a;

    /* Update for UnitDelay: '<S247>/Unit Delay1' */
    BaseEngineController_LS_DWork.s247_UnitDelay1_DSTATE =
      BaseEngineController_LS_B.s247_Switch3;

    /* Update for UnitDelay: '<S247>/Unit Delay' */
    BaseEngineController_LS_DWork.s247_UnitDelay_DSTATE =
      BaseEngineController_LS_B.s247_Switch1;

    /* Update for UnitDelay: '<S247>/Unit Delay2' */
    BaseEngineController_LS_DWork.s247_UnitDelay2_DSTATE =
      BaseEngineController_LS_B.s247_Switch4;

    /* End of Outputs for SubSystem: '<S112>/O2 PID Controller Bank B' */

    /* S-Function (motohawk_sfun_probe): '<S226>/motohawk_probe9' */
    (O2Calibration_DataStore()) = (O2ControlEnable_DataStore());

    /* Switch: '<S230>/Switch' incorporates:
     *  Constant: '<S230>/Constant'
     */
    if (BaseEngineController_LS_B.s226_LogicalOperator2) {
      /* MultiPortSwitch: '<S225>/Multiport Switch' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S225>/motohawk_calibration'
       */
      if ((O2Cyl1Select_DataStore()) == FALSE) {
        rtb_DataTypeConversion1_d = rtb_Multiplyby10ifnotyetenabled_c;
      } else {
        rtb_DataTypeConversion1_d = rtb_Switch4_i;
      }

      /* End of MultiPortSwitch: '<S225>/Multiport Switch' */

      /* MultiPortSwitch: '<S225>/Multiport Switch1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S225>/motohawk_calibration1'
       */
      if ((O2Cyl2Select_DataStore()) == FALSE) {
        rtb_DataTypeConversion_b2 = rtb_Multiplyby10ifnotyetenabled_c;
      } else {
        rtb_DataTypeConversion_b2 = rtb_Switch4_i;
      }

      /* End of MultiPortSwitch: '<S225>/Multiport Switch1' */

      /* MultiPortSwitch: '<S225>/Multiport Switch2' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S225>/motohawk_calibration2'
       */
      if ((O2Cyl3Select_DataStore()) == FALSE) {
        rtb_Product1_gw = rtb_Multiplyby10ifnotyetenabled_c;
      } else {
        rtb_Product1_gw = rtb_Switch4_i;
      }

      /* End of MultiPortSwitch: '<S225>/Multiport Switch2' */

      /* MultiPortSwitch: '<S225>/Multiport Switch3' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S225>/motohawk_calibration3'
       */
      if ((O2Cyl4Select_DataStore()) == FALSE) {
        rtb_Switch3_p = rtb_Multiplyby10ifnotyetenabled_c;
      } else {
        rtb_Switch3_p = rtb_Switch4_i;
      }

      /* End of MultiPortSwitch: '<S225>/Multiport Switch3' */

      /* MultiPortSwitch: '<S225>/Multiport Switch4' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S225>/motohawk_calibration4'
       */
      if ((O2Cyl5Select_DataStore()) == FALSE) {
        rtb_Switch2_a = rtb_Multiplyby10ifnotyetenabled_c;
      } else {
        rtb_Switch2_a = rtb_Switch4_i;
      }

      /* End of MultiPortSwitch: '<S225>/Multiport Switch4' */

      /* MultiPortSwitch: '<S225>/Multiport Switch5' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S225>/motohawk_calibration5'
       */
      if ((O2Cyl6Select_DataStore()) == FALSE) {
        rtb_Switch1_f = rtb_Multiplyby10ifnotyetenabled_c;
      } else {
        rtb_Switch1_f = rtb_Switch4_i;
      }

      /* End of MultiPortSwitch: '<S225>/Multiport Switch5' */

      /* MultiPortSwitch: '<S225>/Multiport Switch6' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S225>/motohawk_calibration6'
       */
      if ((O2Cyl7Select_DataStore()) == FALSE) {
        rtb_Switch_om = rtb_Multiplyby10ifnotyetenabled_c;
      } else {
        rtb_Switch_om = rtb_Switch4_i;
      }

      /* End of MultiPortSwitch: '<S225>/Multiport Switch6' */

      /* MultiPortSwitch: '<S225>/Multiport Switch7' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S225>/motohawk_calibration7'
       */
      if ((O2Cyl8Select_DataStore()) == FALSE) {
        rtb_Switch4_i = rtb_Multiplyby10ifnotyetenabled_c;
      }

      /* End of MultiPortSwitch: '<S225>/Multiport Switch7' */
      BaseEngineController_LS_B.s230_O2FuelMult[0] = rtb_DataTypeConversion1_d;
      BaseEngineController_LS_B.s230_O2FuelMult[1] = rtb_DataTypeConversion_b2;
      BaseEngineController_LS_B.s230_O2FuelMult[2] = rtb_Product1_gw;
      BaseEngineController_LS_B.s230_O2FuelMult[3] = rtb_Switch3_p;
      BaseEngineController_LS_B.s230_O2FuelMult[4] = rtb_Switch2_a;
      BaseEngineController_LS_B.s230_O2FuelMult[5] = rtb_Switch1_f;
      BaseEngineController_LS_B.s230_O2FuelMult[6] = rtb_Switch_om;
      BaseEngineController_LS_B.s230_O2FuelMult[7] = rtb_Switch4_i;
    } else {
      for (i = 0; i < 8; i++) {
        BaseEngineController_LS_B.s230_O2FuelMult[i] = 1.0;
      }
    }

    /* End of Switch: '<S230>/Switch' */

    /* End of Outputs for SubSystem: '<S93>/O2 Control' */

    /* Outputs for Atomic SubSystem: '<S93>/Fuel System Manager' */
    /* Logic: '<S143>/Logical Operator' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S225>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S225>/motohawk_calibration1'
     *  S-Function (motohawk_sfun_calibration): '<S225>/motohawk_calibration2'
     *  S-Function (motohawk_sfun_calibration): '<S225>/motohawk_calibration3'
     *  S-Function (motohawk_sfun_calibration): '<S225>/motohawk_calibration4'
     *  S-Function (motohawk_sfun_calibration): '<S225>/motohawk_calibration5'
     *  S-Function (motohawk_sfun_calibration): '<S225>/motohawk_calibration6'
     *  S-Function (motohawk_sfun_calibration): '<S225>/motohawk_calibration7'
     */
    rtb_LogicalOperator_df[0] = !(O2Cyl1Select_DataStore());
    rtb_LogicalOperator_df[1] = !(O2Cyl2Select_DataStore());
    rtb_LogicalOperator_df[2] = !(O2Cyl3Select_DataStore());
    rtb_LogicalOperator_df[3] = !(O2Cyl4Select_DataStore());
    rtb_LogicalOperator_df[4] = !(O2Cyl5Select_DataStore());
    rtb_LogicalOperator_df[5] = !(O2Cyl6Select_DataStore());
    rtb_LogicalOperator_df[6] = !(O2Cyl7Select_DataStore());
    rtb_LogicalOperator_df[7] = !(O2Cyl8Select_DataStore());

    /* Outputs for Atomic SubSystem: '<S109>/O2 Fuel Adapt' */

    /* S-Function Block: <S146>/motohawk_prelookup13 */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (O2ITerm_BankAIn_DataStore()) = BaseEngineController_LS_B.s239_Switch1;
      (O2ITerm_BankAIdx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_LS_B.s239_Switch1, (O2ITerm_BankAIdxArr_DataStore()),
         5, (O2ITerm_BankAIdx_DataStore()));
      rtb_motohawk_prelookup13 = (O2ITerm_BankAIdx_DataStore());
    }

    /* S-Function Block: <S146>/motohawk_interpolation_1d1 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d1_m = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup13, (real_T *) ((FuelAdaptGain_BankATbl_DataStore
           ())), 5);
      (FuelAdaptGain_BankA_DataStore()) = rtb_motohawk_interpolation_1d1_m;
    }

    /* Product: '<S146>/Product0' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S146>/motohawk_interpolation_1d1'
     *  S-Function (motohawk_sfun_prelookup): '<S146>/motohawk_prelookup13'
     */
    rtb_DataTypeConversion1_d = BaseEngineController_LS_B.s239_Switch1 *
      rtb_motohawk_interpolation_1d1_m;

    /* MinMax: '<S169>/MinMax' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S165>/motohawk_calibration'
     */
    rtb_Abs_k = (rtb_DataTypeConversion1_d >=
                 (FuelAdaptError_BankALwrLim_DataStore())) || rtIsNaN
      ((FuelAdaptError_BankALwrLim_DataStore())) ? rtb_DataTypeConversion1_d :
      (FuelAdaptError_BankALwrLim_DataStore());

    /* MinMax: '<S169>/MinMax1' incorporates:
     *  MinMax: '<S169>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S165>/motohawk_calibration1'
     */
    BaseEngineController_LS_B.s169_MinMax1 = (rtb_Abs_k <=
      (FuelAdaptError_BankAUprLim_DataStore())) || rtIsNaN
      ((FuelAdaptError_BankAUprLim_DataStore())) ? rtb_Abs_k :
      (FuelAdaptError_BankAUprLim_DataStore());

    /* S-Function Block: <S146>/motohawk_interpolation_2d2 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_motohawk_interpolation_2d2_h = TableInterpolation2D_real_T
        (BaseEngineController_LS_B.s420_motohawk_prelookup1,
         BaseEngineController_LS_B.s422_motohawk_prelookup1, (real_T *)
         ((FuelFlowCompAdapt_BankAMap_DataStore())), 9, 9);
      (FuelFlowCompAdapt_BankA_DataStore()) = rtb_motohawk_interpolation_2d2_h;
    }

    /* Outputs for Atomic SubSystem: '<S146>/WarmUp Disable' */
    /* Logic: '<S167>/Logical Operator' incorporates:
     *  Constant: '<S167>/Constant'
     *  MinMax: '<S167>/MinMax'
     *  RelationalOperator: '<S167>/Relational Operator'
     *  Sum: '<S167>/Sum'
     */
    BaseEngineController_LS_B.s167_LogicalOperator = !(((rtb_DesiredLambda_idx_0
      >= rtb_DesiredLambda_idx_1) || rtIsNaN(rtb_DesiredLambda_idx_1) ?
      rtb_DesiredLambda_idx_0 : rtb_DesiredLambda_idx_1) - rtb_DesiredLambda_idx
      > 0.01);

    /* End of Outputs for SubSystem: '<S146>/WarmUp Disable' */

    /* Outputs for Atomic SubSystem: '<S146>/O2 Control Enable Delay' */

    /* S-Function Block: <S168>/motohawk_delta_time */
    rtb_motohawk_delta_time_m3 = 0.005;

    /* Switch: '<S168>/Switch' incorporates:
     *  Constant: '<S168>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S168>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S168>/motohawk_delta_time'
     *  Sum: '<S168>/Sum'
     */
    if (BaseEngineController_LS_B.s226_LogicalOperator2) {
      rtb_DataTypeConversion1_d = rtb_motohawk_delta_time_m3 +
        LiqDelayTime_DataStore();
    } else {
      rtb_DataTypeConversion1_d = 0.0;
    }

    /* End of Switch: '<S168>/Switch' */
    /* RelationalOperator: '<S164>/Relational Operator' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S164>/motohawk_calibration1'
     */
    rtb_LogicalOperator6_jl = (rtb_DataTypeConversion1_d >
      (O2CtrlAdaptDelayTime_DataStore()));

    /* Saturate: '<S168>/Saturation' */
    rtb_Saturation_gs = rtb_DataTypeConversion1_d >= 16000.0 ? 16000.0 :
      rtb_DataTypeConversion1_d <= 0.0 ? 0.0 : rtb_DataTypeConversion1_d;

    /* S-Function (motohawk_sfun_data_write): '<S168>/motohawk_data_write' */
    /* Write to Data Storage as scalar: LiqDelayTime */
    {
      LiqDelayTime_DataStore() = rtb_Saturation_gs;
    }

    /* End of Outputs for SubSystem: '<S146>/O2 Control Enable Delay' */

    /* MinMax: '<S146>/MinMax' */
    rtb_Abs_k = (BaseEngineController_LS_B.s239_Switch1 >=
                 BaseEngineController_LS_B.s251_Switch1) || rtIsNaN
      (BaseEngineController_LS_B.s251_Switch1) ?
      BaseEngineController_LS_B.s239_Switch1 :
      BaseEngineController_LS_B.s251_Switch1;

    /* Logic: '<S146>/Logical Operator2' incorporates:
     *  Abs: '<S146>/Abs'
     *  MinMax: '<S146>/MinMax'
     *  RelationalOperator: '<S146>/Relational Operator'
     *  S-Function (motohawk_sfun_calibration): '<S146>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S146>/motohawk_calibration1'
     *  S-Function (motohawk_sfun_calibration): '<S146>/motohawk_calibration2'
     */
    BaseEngineController_LS_B.s146_LogicalOperator2 =
      (((FuelAdaptEnable_DataStore()) && (AdaptEnable_DataStore()) &&
        BaseEngineController_LS_B.s167_LogicalOperator &&
        rtb_LogicalOperator6_jl && (fabs(rtb_Abs_k) <= (FuelAdaptDelta_DataStore
          ()))));

    /* Outputs for Enabled SubSystem: '<S146>/Adapt FuelFlowComp Map Bank A' incorporates:
     *  EnablePort: '<S162>/Enable'
     */
    if (BaseEngineController_LS_B.s146_LogicalOperator2) {
      /* S-Function Block: <S162>/motohawk_adapt_table */
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
            _new = (FuelFlowCompAdapt_BankAMap_DataStore())[_row][_col] +
              BaseEngineController_LS_B.s169_MinMax1;
            if (_new > (FuelFlowCompMaxValue_BankA_DataStore()))
              _new = (FuelFlowCompMaxValue_BankA_DataStore());
            if (_new < (FuelFlowCompMinValue_BankA_DataStore()))
              _new = (FuelFlowCompMinValue_BankA_DataStore());
            (FuelFlowCompAdapt_BankAMap_DataStore())[_row][_col] = _new;
          } else if (_col_frac == 3) {
            _new = (FuelFlowCompAdapt_BankAMap_DataStore())[_row][_col+1] +
              BaseEngineController_LS_B.s169_MinMax1;
            if (_new > (FuelFlowCompMaxValue_BankA_DataStore()))
              _new = (FuelFlowCompMaxValue_BankA_DataStore());
            if (_new < (FuelFlowCompMinValue_BankA_DataStore()))
              _new = (FuelFlowCompMinValue_BankA_DataStore());
            (FuelFlowCompAdapt_BankAMap_DataStore())[_row][_col+1] = _new;
          }
        } else {
          if (_col_frac == 3) {
            _col++;
            _col_frac = 0;
          }
        }
      }

      /* RelationalOperator: '<S162>/Relational Operator2' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S162>/motohawk_calibration2'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S146>/motohawk_interpolation_2d2'
       */
      rtb_RelationalOperator2_me = ((rtb_motohawk_interpolation_2d2_h >=
        (FuelFlowCompMaxValue_BankA_DataStore())));

      /* S-Function (motohawk_sfun_fault_def): '<S162>/motohawk_fault_def' */

      /* Set Fault Suspected Status: FuelAdaptRangeHi_BankA */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(61, rtb_RelationalOperator2_me);
        UpdateFault(61);
      }

      /* RelationalOperator: '<S162>/Relational Operator1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S162>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S146>/motohawk_interpolation_2d2'
       */
      rtb_RelationalOperator1_bm = ((rtb_motohawk_interpolation_2d2_h <=
        (FuelFlowCompMinValue_BankA_DataStore())));

      /* S-Function (motohawk_sfun_fault_def): '<S162>/motohawk_fault_def1' */

      /* Set Fault Suspected Status: FuelAdaptRangeLow_BankA */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(63, rtb_RelationalOperator1_bm);
        UpdateFault(63);
      }
    }

    /* End of Outputs for SubSystem: '<S146>/Adapt FuelFlowComp Map Bank A' */
    /* S-Function Block: <S146>/motohawk_prelookup1 */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (O2ITerm_BankBIn_DataStore()) = BaseEngineController_LS_B.s251_Switch1;
      (O2ITerm_BankBIdx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_LS_B.s251_Switch1, (O2ITerm_BankBIdxArr_DataStore()),
         5, (O2ITerm_BankBIdx_DataStore()));
      rtb_motohawk_prelookup1_ke = (O2ITerm_BankBIdx_DataStore());
    }

    /* S-Function Block: <S146>/motohawk_interpolation_1d2 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d2_l = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup1_ke, (real_T *)
         ((FuelAdaptGain_BankBTbl_DataStore())), 5);
      (FuelAdaptGain_BankB_DataStore()) = rtb_motohawk_interpolation_1d2_l;
    }

    /* Product: '<S146>/Product1' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S146>/motohawk_interpolation_1d2'
     *  S-Function (motohawk_sfun_prelookup): '<S146>/motohawk_prelookup1'
     */
    rtb_DataTypeConversion1_d = BaseEngineController_LS_B.s251_Switch1 *
      rtb_motohawk_interpolation_1d2_l;

    /* MinMax: '<S170>/MinMax' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S166>/motohawk_calibration'
     */
    rtb_Abs_k = (rtb_DataTypeConversion1_d >=
                 (FuelAdaptError_BankBLwrLim_DataStore())) || rtIsNaN
      ((FuelAdaptError_BankBLwrLim_DataStore())) ? rtb_DataTypeConversion1_d :
      (FuelAdaptError_BankBLwrLim_DataStore());

    /* MinMax: '<S170>/MinMax1' incorporates:
     *  MinMax: '<S170>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S166>/motohawk_calibration1'
     */
    BaseEngineController_LS_B.s170_MinMax1 = (rtb_Abs_k <=
      (FuelAdaptError_BankBUprLim_DataStore())) || rtIsNaN
      ((FuelAdaptError_BankBUprLim_DataStore())) ? rtb_Abs_k :
      (FuelAdaptError_BankBUprLim_DataStore());

    /* S-Function Block: <S146>/motohawk_interpolation_2d3 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_motohawk_interpolation_2d3 = TableInterpolation2D_real_T
        (BaseEngineController_LS_B.s420_motohawk_prelookup1,
         BaseEngineController_LS_B.s422_motohawk_prelookup1, (real_T *)
         ((FuelFlowCompAdapt_BankBMap_DataStore())), 9, 9);
      (FuelFlowCompAdapt_BankB_DataStore()) = rtb_motohawk_interpolation_2d3;
    }

    /* Outputs for Enabled SubSystem: '<S146>/Adapt FuelFlowComp Map Bank B' incorporates:
     *  EnablePort: '<S163>/Enable'
     */
    if (BaseEngineController_LS_B.s146_LogicalOperator2) {
      /* S-Function Block: <S163>/motohawk_adapt_table */
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
            _new = (FuelFlowCompAdapt_BankBMap_DataStore())[_row][_col] +
              BaseEngineController_LS_B.s170_MinMax1;
            if (_new > (FuelFlowCompMaxValue_DataStore()))
              _new = (FuelFlowCompMaxValue_DataStore());
            if (_new < (FuelFlowCompMinValue_DataStore()))
              _new = (FuelFlowCompMinValue_DataStore());
            (FuelFlowCompAdapt_BankBMap_DataStore())[_row][_col] = _new;
          } else if (_col_frac == 3) {
            _new = (FuelFlowCompAdapt_BankBMap_DataStore())[_row][_col+1] +
              BaseEngineController_LS_B.s170_MinMax1;
            if (_new > (FuelFlowCompMaxValue_DataStore()))
              _new = (FuelFlowCompMaxValue_DataStore());
            if (_new < (FuelFlowCompMinValue_DataStore()))
              _new = (FuelFlowCompMinValue_DataStore());
            (FuelFlowCompAdapt_BankBMap_DataStore())[_row][_col+1] = _new;
          }
        } else {
          if (_col_frac == 3) {
            _col++;
            _col_frac = 0;
          }
        }
      }

      /* RelationalOperator: '<S163>/Relational Operator2' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S163>/motohawk_calibration2'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S146>/motohawk_interpolation_2d3'
       */
      rtb_RelationalOperator2_hq = ((rtb_motohawk_interpolation_2d3 >=
        (FuelFlowCompMaxValue_DataStore())));

      /* S-Function (motohawk_sfun_fault_def): '<S163>/motohawk_fault_def' */

      /* Set Fault Suspected Status: FuelAdaptRangeHi_BankB */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(62, rtb_RelationalOperator2_hq);
        UpdateFault(62);
      }

      /* RelationalOperator: '<S163>/Relational Operator1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S163>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S146>/motohawk_interpolation_2d3'
       */
      rtb_RelationalOperator1_a = ((rtb_motohawk_interpolation_2d3 <=
        (FuelFlowCompMinValue_DataStore())));

      /* S-Function (motohawk_sfun_fault_def): '<S163>/motohawk_fault_def1' */

      /* Set Fault Suspected Status: FuelAdaptRangeLow_BankB */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(64, rtb_RelationalOperator1_a);
        UpdateFault(64);
      }
    }

    /* End of Outputs for SubSystem: '<S146>/Adapt FuelFlowComp Map Bank B' */

    /* S-Function Block: <S146>/motohawk_interpolation_2d1 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_motohawk_interpolation_2d1_p = TableInterpolation2D_real_T
        (BaseEngineController_LS_B.s420_motohawk_prelookup1,
         BaseEngineController_LS_B.s422_motohawk_prelookup1, (real_T *)
         ((FuelFlowCompMap_DataStore())), 9, 9);
      (FuelFlowComp_DataStore()) = rtb_motohawk_interpolation_2d1_p;
    }

    /* Product: '<S146>/Divide' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S146>/motohawk_interpolation_2d1'
     *  S-Function (motohawk_sfun_interpolation_2d): '<S146>/motohawk_interpolation_2d2'
     */
    rtb_DataTypeConversion1_d = rtb_motohawk_interpolation_2d1_p *
      rtb_motohawk_interpolation_2d2_h;

    /* Product: '<S146>/Divide1' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S146>/motohawk_interpolation_2d1'
     *  S-Function (motohawk_sfun_interpolation_2d): '<S146>/motohawk_interpolation_2d3'
     */
    rtb_DataTypeConversion_b2 = rtb_motohawk_interpolation_2d3 *
      rtb_motohawk_interpolation_2d1_p;

    /* End of Outputs for SubSystem: '<S109>/O2 Fuel Adapt' */

    /* Product: '<S143>/Product1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S225>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S225>/motohawk_calibration1'
     *  S-Function (motohawk_sfun_calibration): '<S225>/motohawk_calibration2'
     *  S-Function (motohawk_sfun_calibration): '<S225>/motohawk_calibration3'
     *  S-Function (motohawk_sfun_calibration): '<S225>/motohawk_calibration4'
     *  S-Function (motohawk_sfun_calibration): '<S225>/motohawk_calibration5'
     *  S-Function (motohawk_sfun_calibration): '<S225>/motohawk_calibration6'
     *  S-Function (motohawk_sfun_calibration): '<S225>/motohawk_calibration7'
     */
    rtb_Product1_fj[0] = (real_T)(O2Cyl1Select_DataStore()) *
      rtb_DataTypeConversion_b2;
    rtb_Product1_fj[1] = (real_T)(O2Cyl2Select_DataStore()) *
      rtb_DataTypeConversion_b2;
    rtb_Product1_fj[2] = (real_T)(O2Cyl3Select_DataStore()) *
      rtb_DataTypeConversion_b2;
    rtb_Product1_fj[3] = (real_T)(O2Cyl4Select_DataStore()) *
      rtb_DataTypeConversion_b2;
    rtb_Product1_fj[4] = (real_T)(O2Cyl5Select_DataStore()) *
      rtb_DataTypeConversion_b2;
    rtb_Product1_fj[5] = (real_T)(O2Cyl6Select_DataStore()) *
      rtb_DataTypeConversion_b2;
    rtb_Product1_fj[6] = (real_T)(O2Cyl7Select_DataStore()) *
      rtb_DataTypeConversion_b2;
    rtb_Product1_fj[7] = (real_T)(O2Cyl8Select_DataStore()) *
      rtb_DataTypeConversion_b2;

    /* S-Function Block: <S149>/motohawk_prelookup */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (DesAFRatioIn_DataStore()) = BaseEngineController_LS_B.s558_Merge;
      (DesAFRatioIdx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_LS_B.s558_Merge, (DesAFRatioIdxArr_DataStore()),
         11, (DesAFRatioIdx_DataStore()));
      rtb_motohawk_prelookup_hf = (DesAFRatioIdx_DataStore());
    }

    /* S-Function Block: <S149>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      BaseEngineController_LS_B.s149_motohawk_interpolation_1d =
        TableInterpolation1D_real_T(rtb_motohawk_prelookup_hf, (real_T *)
        ((DesAFRatioTbl_DataStore())), 11);
      (DesAFRatio_DataStore()) =
        BaseEngineController_LS_B.s149_motohawk_interpolation_1d;
    }

    /* Product: '<S147>/Fuel Flow = Mass Airflow * Equivalence Ratio // Air-to-fuel Ratio' */
    BaseEngineController_LS_B.s147_FuelFlowMassAirflowEquivalenceRatioAirtofuelRatio
      = BaseEngineController_LS_B.s389_MultiportSwitch * rtb_DesiredLambda_idx /
      BaseEngineController_LS_B.s149_motohawk_interpolation_1d;

    /* Product: '<S144>/Per-Cylinder Mass Flow Rate' incorporates:
     *  DataTypeConversion: '<S144>/Data Type Conversion'
     *  S-Function (motohawk_sfun_data_read): '<S144>/Number of Combustion Events Per Revolution'
     */
    BaseEngineController_LS_B.s144_PerCylinderMassFlowRate =
      BaseEngineController_LS_B.s147_FuelFlowMassAirflowEquivalenceRatioAirtofuelRatio
      / (real_T)((uint8_T)CombEventsPerRev_DataStore());

    /* Product: '<S144>/Apply Multipliers for O2, Knock Control, and Enrichment1' */
    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_B.s144_ApplyMultipliersforO2KnockControlandEnrichment1
        [i] = BaseEngineController_LS_B.s144_PerCylinderMassFlowRate *
        BaseEngineController_LS_B.s230_O2FuelMult[i];
    }

    /* End of Product: '<S144>/Apply Multipliers for O2, Knock Control, and Enrichment1' */

    /* Outputs for Atomic SubSystem: '<S109>/Injector Manager' */

    /* Outputs for Enabled SubSystem: '<S145>/Delta TPS Transient Fueling' incorporates:
     *  EnablePort: '<S150>/Enable'
     */
    /* S-Function (motohawk_sfun_calibration): '<S145>/motohawk_calibration1' */
    if ((DeltaTPSFuelingEnable_DataStore())) {
      if (!BaseEngineController_LS_DWork.s145_DeltaTPSTransientFueling_MODE) {
        /* S-Function Block: <S156>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_LS_DWork.s156_motohawk_delta_time_DWORK1 = now -
            Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }

        /* InitializeConditions for UnitDelay: '<S159>/Unit Delay' */
        BaseEngineController_LS_DWork.s159_UnitDelay_DSTATE = 0.0;

        /* S-Function Block: <S155>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_LS_DWork.s155_motohawk_delta_time_DWORK1 = now -
            Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }

        /* InitializeConditions for UnitDelay: '<S158>/Unit Delay' */
        BaseEngineController_LS_DWork.s158_UnitDelay_DSTATE = 0.0;
        BaseEngineController_LS_DWork.s145_DeltaTPSTransientFueling_MODE = TRUE;
      }

      /* S-Function Block: <S156>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s156_motohawk_delta_time_DWORK1, NULL);
        rtb_Product_mq = ((real_T) delta) * 0.000001;
      }

      /* Product: '<S156>/Product' incorporates:
       *  MinMax: '<S156>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S156>/motohawk_calibration'
       */
      rtb_Product_mq /= (rtb_Product_mq >= (DeltaMAP_FiltConst_DataStore())) ||
        rtIsNaN((DeltaMAP_FiltConst_DataStore())) ? rtb_Product_mq :
        (DeltaMAP_FiltConst_DataStore());

      /* Sum: '<S159>/Sum1' incorporates:
       *  Constant: '<S159>/Constant'
       *  Product: '<S159>/Product'
       *  Product: '<S159>/Product1'
       *  Sum: '<S159>/Sum'
       *  UnitDelay: '<S159>/Unit Delay'
       */
      BaseEngineController_LS_B.s159_Sum1 = (1.0 - rtb_Product_mq) *
        BaseEngineController_LS_DWork.s159_UnitDelay_DSTATE +
        BaseEngineController_LS_B.s579_Merge * rtb_Product_mq;

      /* Sum: '<S150>/Sum1' */
      BaseEngineController_LS_B.s150_Sum1 = BaseEngineController_LS_B.s579_Merge
        - BaseEngineController_LS_B.s159_Sum1;

      /* S-Function Block: <S155>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_DWork.s155_motohawk_delta_time_DWORK1, NULL);
        rtb_Product_mq = ((real_T) delta) * 0.000001;
      }

      /* Product: '<S155>/Product' incorporates:
       *  MinMax: '<S155>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S155>/motohawk_calibration'
       */
      rtb_Product_mq /= (rtb_Product_mq >= (DeltaTPS_FiltConst_DataStore())) ||
        rtIsNaN((DeltaTPS_FiltConst_DataStore())) ? rtb_Product_mq :
        (DeltaTPS_FiltConst_DataStore());

      /* Sum: '<S158>/Sum1' incorporates:
       *  Constant: '<S158>/Constant'
       *  Product: '<S158>/Product'
       *  Product: '<S158>/Product1'
       *  Sum: '<S158>/Sum'
       *  UnitDelay: '<S158>/Unit Delay'
       */
      BaseEngineController_LS_B.s158_Sum1 = (1.0 - rtb_Product_mq) *
        BaseEngineController_LS_DWork.s158_UnitDelay_DSTATE +
        BaseEngineController_LS_B.s437_Switch2 * rtb_Product_mq;

      /* Sum: '<S150>/Sum' */
      BaseEngineController_LS_B.s150_Sum =
        BaseEngineController_LS_B.s437_Switch2 -
        BaseEngineController_LS_B.s158_Sum1;

      /* S-Function Block: <S150>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (MAF09In_DataStore()) = BaseEngineController_LS_B.s389_MultiportSwitch;
        (MAF09Idx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_LS_B.s389_MultiportSwitch,
           (MAF09IdxArr_DataStore()), 9, (MAF09Idx_DataStore()));
        rtb_motohawk_prelookup_ag = (MAF09Idx_DataStore());
      }

      /* S-Function Block: <S150>/motohawk_prelookup1 */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (DeltaTPS17In_DataStore()) = BaseEngineController_LS_B.s150_Sum;
        (DeltaTPS17Idx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_LS_B.s150_Sum, (DeltaTPS17IdxArr_DataStore()),
           17, (DeltaTPS17Idx_DataStore()));
        rtb_motohawk_prelookup1_jq = (DeltaTPS17Idx_DataStore());
      }

      /* S-Function Block: <S150>/motohawk_interpolation_2d2 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_motohawk_interpolation_2d2_a = TableInterpolation2D_real_T
          (rtb_motohawk_prelookup_ag, rtb_motohawk_prelookup1_jq, (real_T *)
           ((DeltaTPS_MultMap_DataStore())), 9, 17);
        (DeltaTPS_Mult_DataStore()) = rtb_motohawk_interpolation_2d2_a;
      }

      /* RelationalOperator: '<S152>/RelOp' incorporates:
       *  Constant: '<S152>/Constant'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S150>/motohawk_interpolation_2d2'
       *  S-Function (motohawk_sfun_prelookup): '<S150>/motohawk_prelookup'
       *  S-Function (motohawk_sfun_prelookup): '<S150>/motohawk_prelookup1'
       */
      rtb_LogicalOperator6_jl = (rtb_motohawk_interpolation_2d2_a != 1.0);

      /* S-Function Block: <S150>/motohawk_prelookup3 */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (DeltaMAP17In_DataStore()) = BaseEngineController_LS_B.s150_Sum1;
        (DeltaMAP17Idx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_LS_B.s150_Sum1, (DeltaMAP17IdxArr_DataStore()),
           17, (DeltaMAP17Idx_DataStore()));
        rtb_motohawk_prelookup3 = (DeltaMAP17Idx_DataStore());
      }

      /* S-Function Block: <S150>/motohawk_interpolation_2d1 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_motohawk_interpolation_2d1_a = TableInterpolation2D_real_T
          (rtb_motohawk_prelookup_ag, rtb_motohawk_prelookup3, (real_T *)
           ((DeltaMAP_MultMap_DataStore())), 9, 17);
        (DeltaMAP_Mult_DataStore()) = rtb_motohawk_interpolation_2d1_a;
      }

      /* Logic: '<S150>/Logical Operator' incorporates:
       *  Constant: '<S153>/Constant'
       *  RelationalOperator: '<S153>/RelOp'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S150>/motohawk_interpolation_2d1'
       *  S-Function (motohawk_sfun_prelookup): '<S150>/motohawk_prelookup'
       *  S-Function (motohawk_sfun_prelookup): '<S150>/motohawk_prelookup3'
       */
      rtb_LogicalOperator6_jl = ((rtb_motohawk_interpolation_2d1_a != 1.0) ||
        rtb_LogicalOperator6_jl);

      /* Outputs for Enabled SubSystem: '<S150>/ECT Transient Fueling' incorporates:
       *  EnablePort: '<S154>/Enable'
       */
      if (rtb_LogicalOperator6_jl) {
        if (!BaseEngineController_LS_DWork.s150_ECTTransientFueling_MODE) {
          BaseEngineController_LS_DWork.s150_ECTTransientFueling_MODE = TRUE;
        }

        /* S-Function Block: <S154>/motohawk_interpolation_1d */
        {
          extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T
            *tbl_data, uint32_T sz);
          BaseEngineController_LS_B.s154_motohawk_interpolation_1d =
            TableInterpolation1D_real_T
            (BaseEngineController_LS_B.s418_motohawk_prelookup, (real_T *)
             ((ECTTransFuelMultTbl_DataStore())), 5);
          (ECTTransFuelMult_DataStore()) =
            BaseEngineController_LS_B.s154_motohawk_interpolation_1d;
        }
      } else {
        if (BaseEngineController_LS_DWork.s150_ECTTransientFueling_MODE) {
          /* Disable for Outport: '<S154>/Mult' */
          BaseEngineController_LS_B.s154_motohawk_interpolation_1d = 1.0;
          BaseEngineController_LS_DWork.s150_ECTTransientFueling_MODE = FALSE;
        }
      }

      /* End of Outputs for SubSystem: '<S150>/ECT Transient Fueling' */

      /* Outputs for Enabled SubSystem: '<S150>/OXY Transient Fueling' incorporates:
       *  EnablePort: '<S157>/Enable'
       */
      if (rtb_LogicalOperator6_jl) {
        if (!BaseEngineController_LS_DWork.s150_OXYTransientFueling_MODE) {
          BaseEngineController_LS_DWork.s150_OXYTransientFueling_MODE = TRUE;
        }

        /* S-Function Block: <S157>/motohawk_interpolation_1d */
        {
          extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T
            *tbl_data, uint32_T sz);
          BaseEngineController_LS_B.s157_motohawk_interpolation_1d =
            TableInterpolation1D_real_T
            (BaseEngineController_LS_B.s421_motohawk_prelookup, (real_T *)
             ((OXYTransFuelMultTbl_DataStore())), 5);
          (OXYTransFuelMult_DataStore()) =
            BaseEngineController_LS_B.s157_motohawk_interpolation_1d;
        }
      } else {
        if (BaseEngineController_LS_DWork.s150_OXYTransientFueling_MODE) {
          /* Disable for Outport: '<S157>/Mult' */
          BaseEngineController_LS_B.s157_motohawk_interpolation_1d = 1.0;
          BaseEngineController_LS_DWork.s150_OXYTransientFueling_MODE = FALSE;
        }
      }

      /* End of Outputs for SubSystem: '<S150>/OXY Transient Fueling' */

      /* Product: '<S150>/Product1' incorporates:
       *  S-Function (motohawk_sfun_interpolation_2d): '<S150>/motohawk_interpolation_2d1'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S150>/motohawk_interpolation_2d2'
       *  S-Function (motohawk_sfun_prelookup): '<S150>/motohawk_prelookup'
       *  S-Function (motohawk_sfun_prelookup): '<S150>/motohawk_prelookup1'
       *  S-Function (motohawk_sfun_prelookup): '<S150>/motohawk_prelookup3'
       */
      BaseEngineController_LS_B.s150_Product1 = rtb_motohawk_interpolation_2d2_a
        * BaseEngineController_LS_B.s154_motohawk_interpolation_1d *
        rtb_motohawk_interpolation_2d1_a *
        BaseEngineController_LS_B.s157_motohawk_interpolation_1d;

      /* Update for UnitDelay: '<S159>/Unit Delay' */
      BaseEngineController_LS_DWork.s159_UnitDelay_DSTATE =
        BaseEngineController_LS_B.s159_Sum1;

      /* Update for UnitDelay: '<S158>/Unit Delay' */
      BaseEngineController_LS_DWork.s158_UnitDelay_DSTATE =
        BaseEngineController_LS_B.s158_Sum1;
    } else {
      if (BaseEngineController_LS_DWork.s145_DeltaTPSTransientFueling_MODE) {
        /* Disable for Enabled SubSystem: '<S150>/ECT Transient Fueling' */
        /* Disable for Outport: '<S154>/Mult' */
        BaseEngineController_LS_B.s154_motohawk_interpolation_1d = 1.0;
        BaseEngineController_LS_DWork.s150_ECTTransientFueling_MODE = FALSE;

        /* End of Disable for SubSystem: '<S150>/ECT Transient Fueling' */

        /* Disable for Enabled SubSystem: '<S150>/OXY Transient Fueling' */
        /* Disable for Outport: '<S157>/Mult' */
        BaseEngineController_LS_B.s157_motohawk_interpolation_1d = 1.0;
        BaseEngineController_LS_DWork.s150_OXYTransientFueling_MODE = FALSE;

        /* End of Disable for SubSystem: '<S150>/OXY Transient Fueling' */

        /* Disable for Outport: '<S150>/DeltaTPSMult' */
        BaseEngineController_LS_B.s150_Product1 = 1.0;
        BaseEngineController_LS_DWork.s145_DeltaTPSTransientFueling_MODE = FALSE;
      }
    }

    /* End of S-Function (motohawk_sfun_calibration): '<S145>/motohawk_calibration1' */
    /* End of Outputs for SubSystem: '<S145>/Delta TPS Transient Fueling' */

    /* Product: '<S145>/Divide' */
    for (i = 0; i < 8; i++) {
      rtb_Divide_pr[i] = BaseEngineController_LS_B.s150_Product1 *
        BaseEngineController_LS_B.s144_ApplyMultipliersforO2KnockControlandEnrichment1
        [i];
    }

    /* End of Product: '<S145>/Divide' */
    /* S-Function Block: <S145>/Make-Up Pulse End of Injection Timing1 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_EOI = TableInterpolation2D_real_T
        (BaseEngineController_LS_B.s420_motohawk_prelookup1,
         BaseEngineController_LS_B.s422_motohawk_prelookup1, (real_T *)
         ((MakeUpEOIMap_DataStore())), 9, 9);
      (MakeUpEOI_DataStore()) = rtb_EOI;
    }

    /* Outputs for Enabled SubSystem: '<S151>/Multiply and Divide, avoiding divde by zero' incorporates:
     *  EnablePort: '<S160>/Enable'
     */
    /* RelationalOperator: '<S161>/RelOp' incorporates:
     *  Constant: '<S161>/Constant'
     */
    if (BaseEngineController_LS_B.s536_Sum1 != 0.0) {
      /* Product: '<S160>/charge mass' incorporates:
       *  Constant: '<S151>/Units Equivalency Factor'
       */
      for (i = 0; i < 8; i++) {
        BaseEngineController_LS_B.s160_chargemass[i] = rtb_Divide_pr[i] *
          60000.0 / BaseEngineController_LS_B.s536_Sum1;
      }

      /* End of Product: '<S160>/charge mass' */
    }

    /* End of RelationalOperator: '<S161>/RelOp' */
    /* End of Outputs for SubSystem: '<S151>/Multiply and Divide, avoiding divde by zero' */
    /* S-Function Block: <S145>/Primary Pulse Injection Timing */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_PrimaryPulseInjectionTiming = TableInterpolation2D_real_T
        (BaseEngineController_LS_B.s420_motohawk_prelookup1,
         BaseEngineController_LS_B.s422_motohawk_prelookup1, (real_T *)
         ((PrimarySOIMap_DataStore())), 9, 9);
      (PrimarySOI_DataStore()) = rtb_PrimaryPulseInjectionTiming;
    }

    /* End of Outputs for SubSystem: '<S109>/Injector Manager' */

    /* Product: '<S143>/Product2' incorporates:
     *  Product: '<S143>/Product'
     *  Sum: '<S143>/Sum'
     */
    for (i = 0; i < 8; i++) {
      rtb_Product1_fj[i] = (rtb_DataTypeConversion1_d * (real_T)
                            rtb_LogicalOperator_df[i] + rtb_Product1_fj[i]) *
        BaseEngineController_LS_B.s160_chargemass[i];
    }

    /* End of Product: '<S143>/Product2' */

    /* End of Outputs for SubSystem: '<S93>/Fuel System Manager' */

    /* ZeroOrderHold: '<S93>/Zero-Order Hold1' */
    BaseEngineController_LS_B.s92_SparkEnergy =
      BaseEngineController_LS_B.s113_motohawk_interpolation_2d1;

    /* ZeroOrderHold: '<S93>/Zero-Order Hold12' */
    BaseEngineController_LS_B.s92_SparkAdv =
      BaseEngineController_LS_B.s260_Switch;

    /* ZeroOrderHold: '<S93>/Zero-Order Hold16' incorporates:
     *  Constant: '<S93>/ON1'
     */
    BaseEngineController_LS_B.s92_FUELP = TRUE;

    /* ZeroOrderHold: '<S93>/Zero-Order Hold17' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S145>/Primary Pulse Injection Timing'
     */
    BaseEngineController_LS_B.s92_SOI = rtb_PrimaryPulseInjectionTiming;

    /* ZeroOrderHold: '<S93>/Zero-Order Hold18' */
    BaseEngineController_LS_B.s92_Throttle =
      BaseEngineController_LS_B.s105_MultiportSwitch;

    /* ZeroOrderHold: '<S93>/Zero-Order Hold3' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S145>/Make-Up Pulse End of Injection Timing1'
     */
    BaseEngineController_LS_B.s92_MakeUpEOI = rtb_EOI;

    /* ZeroOrderHold: '<S93>/Zero-Order Hold6' */
    BaseEngineController_LS_B.s92_FAN1 = BaseEngineController_LS_B.s108_Switch4;

    /* ZeroOrderHold: '<S93>/Zero-Order Hold7' */
    BaseEngineController_LS_B.s92_FAN2 = BaseEngineController_LS_B.s108_Switch5;

    /* ZeroOrderHold: '<S93>/Zero-Order Hold8' */
    BaseEngineController_LS_B.s92_AC =
      BaseEngineController_LS_B.s104_LogicalOperator;

    /* ZeroOrderHold: '<S93>/Zero-Order Hold9' */
    memcpy((void *)(&BaseEngineController_LS_B.s92_FPC[0]), (void *)
           &rtb_Product1_fj[0], sizeof(real_T) << 3U);
  } else {
    if (BaseEngineController_LS_DWork.s15_Run_MODE) {
      /* Level2 S-Function Block: '<S93>/motohawk_trigger1' (motohawk_sfun_trigger) */
      /* Disable for Trigger_FGND_5XRTI_PERIODIC_4424p0009 */
      BaseEngineController_LS_DWork.s93_motohawk_trigger1_DWORK1 = 0;

      /* Disable for Atomic SubSystem: '<S93>/Fuel System Manager' */
      /* Disable for Atomic SubSystem: '<S109>/Injector Manager' */
      /* Disable for Enabled SubSystem: '<S145>/Delta TPS Transient Fueling' */
      /* Disable for Enabled SubSystem: '<S150>/ECT Transient Fueling' */
      /* Disable for Outport: '<S154>/Mult' */
      BaseEngineController_LS_B.s154_motohawk_interpolation_1d = 1.0;
      BaseEngineController_LS_DWork.s150_ECTTransientFueling_MODE = FALSE;

      /* End of Disable for SubSystem: '<S150>/ECT Transient Fueling' */

      /* Disable for Enabled SubSystem: '<S150>/OXY Transient Fueling' */
      /* Disable for Outport: '<S157>/Mult' */
      BaseEngineController_LS_B.s157_motohawk_interpolation_1d = 1.0;
      BaseEngineController_LS_DWork.s150_OXYTransientFueling_MODE = FALSE;

      /* End of Disable for SubSystem: '<S150>/OXY Transient Fueling' */

      /* Disable for Outport: '<S150>/DeltaTPSMult' */
      BaseEngineController_LS_B.s150_Product1 = 1.0;
      BaseEngineController_LS_DWork.s145_DeltaTPSTransientFueling_MODE = FALSE;

      /* End of Disable for SubSystem: '<S145>/Delta TPS Transient Fueling' */
      /* End of Disable for SubSystem: '<S109>/Injector Manager' */
      /* End of Disable for SubSystem: '<S93>/Fuel System Manager' */
      BaseEngineController_LS_DWork.s15_Run_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S15>/Run' */

  /* If: '<S746>/If' incorporates:
   *  Inport: '<S747>/In1'
   *  Inport: '<S748>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S746>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S746>/override_enable'
   */
  if ((AC_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S746>/NewValue' incorporates:
     *  ActionPort: '<S747>/Action Port'
     */
    rtb_LogicalOperator6_jl = (AC_new_DataStore());

    /* End of Outputs for SubSystem: '<S746>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S746>/OldValue' incorporates:
     *  ActionPort: '<S748>/Action Port'
     */
    rtb_LogicalOperator6_jl = BaseEngineController_LS_B.s92_AC;

    /* End of Outputs for SubSystem: '<S746>/OldValue' */
  }

  /* End of If: '<S746>/If' */

  /* Logic: '<S745>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S745>/0 = No Inversion 1 = Inversion'
   */
  BaseEngineController_LS_B.s745_LogicalOperator = rtb_LogicalOperator6_jl ^
    (AC_Polarity_DataStore());

  /* S-Function (motohawk_sfun_trigger): '<S474>/motohawk_trigger1' */
  /* Enable for Trigger_FGND_5XRTI_PERIODIC_9253p0006 */
  if (BaseEngineController_LS_DWork.s474_motohawk_trigger1_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s474_motohawk_trigger1_DWORK1 = 1;
  }

  /* RelationalOperator: '<S404>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S404>/motohawk_calibration10'
   */
  rtb_RelationalOperator_h = (BaseEngineController_LS_B.s460_Sum >=
    (FuelLevel_KeyUpDelay_DataStore()));

  /* S-Function (motohawk_sfun_data_read): '<S381>/motohawk_data_read' */
  BaseEngineController_LS_B.s381_motohawk_data_read = FuelLvl_NVM_DataStore();

  /* Switch: '<S381>/Switch2' */
  if (rtb_RelationalOperator_h) {
    rtb_Switch_hp = BaseEngineController_LS_B.s619_Merge;
  } else {
    rtb_Switch_hp = BaseEngineController_LS_B.s381_motohawk_data_read;
  }

  /* End of Switch: '<S381>/Switch2' */

  /* Sum: '<S404>/Sum' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S404>/motohawk_data_read'
   */
  rtb_DataTypeConversion1_d = BaseEngineController_LS_B.s619_Merge -
    FuelLvl_NVM_DataStore();

  /* Logic: '<S404>/Logical Operator' incorporates:
   *  RelationalOperator: '<S404>/Relational Operator1'
   *  S-Function (motohawk_sfun_calibration): '<S404>/motohawk_calibration1'
   */
  rtb_LogicalOperator_c = ((rtb_DataTypeConversion1_d >=
    (FuelLevl_KeyUpDiff_DataStore())) && rtb_RelationalOperator_h);

  /* Logic: '<S406>/Logical Operator' incorporates:
   *  Logic: '<S406>/Logical Operator1'
   *  UnitDelay: '<S406>/Unit Delay'
   */
  BaseEngineController_LS_B.s406_LogicalOperator = ((rtb_LogicalOperator_c &&
    (!BaseEngineController_LS_DWork.s406_UnitDelay_DSTATE)));

  /* Logic: '<S381>/Logical Operator1' incorporates:
   *  Logic: '<S381>/Logical Operator'
   */
  rtb_LogicalOperator6_jl = ((!rtb_RelationalOperator_h) ||
    BaseEngineController_LS_B.s406_LogicalOperator);

  /* S-Function Block: <S381>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s381_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_oz = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S381>/Switch3' incorporates:
   *  MinMax: '<S381>/MinMax'
   *  Product: '<S381>/Product'
   *  S-Function (motohawk_sfun_calibration): '<S381>/motohawk_calibration2'
   */
  if (rtb_LogicalOperator6_jl) {
    rtb_DataTypeConversion_gx = (FuelLevel_FuelEevntAlpha_DataStore());
  } else {
    /* S-Function Block: <S405>/motohawk_prelookup_col */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (FuelLevel_FiltConstColIn_DataStore()) =
        BaseEngineController_LS_B.s441_Switch2;
      (FuelLevel_FiltConstColIdx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_LS_B.s441_Switch2,
         (FuelLevel_FiltConstColIdxArr_DataStore()), 7,
         (FuelLevel_FiltConstColIdx_DataStore()));
      rtb_motohawk_prelookup_col = (FuelLevel_FiltConstColIdx_DataStore());
    }

    /* S-Function Block: <S405>/motohawk_prelookup_row */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (FuelLevel_FiltConstRowIn_DataStore()) =
        BaseEngineController_LS_B.s460_Sum;
      (FuelLevel_FiltConstRowIdx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_LS_B.s460_Sum,
         (FuelLevel_FiltConstRowIdxArr_DataStore()), 7,
         (FuelLevel_FiltConstRowIdx_DataStore()));
      rtb_motohawk_prelookup_row = (FuelLevel_FiltConstRowIdx_DataStore());
    }

    /* S-Function Block: <S405>/motohawk_interpolation_2d */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_motohawk_interpolation_2d_gj = TableInterpolation2D_real_T
        (rtb_motohawk_prelookup_row, rtb_motohawk_prelookup_col, (real_T *)
         ((FuelLevel_FiltConstMap_DataStore())), 7, 7);
      (FuelLevel_FiltConst_DataStore()) = rtb_motohawk_interpolation_2d_gj;
    }

    rtb_DataTypeConversion_gx = rtb_motohawk_delta_time_oz /
      ((rtb_motohawk_delta_time_oz >= rtb_motohawk_interpolation_2d_gj) ||
       rtIsNaN(rtb_motohawk_interpolation_2d_gj) ? rtb_motohawk_delta_time_oz :
       rtb_motohawk_interpolation_2d_gj);
  }

  /* End of Switch: '<S381>/Switch3' */

  /* Sum: '<S402>/Sum1' incorporates:
   *  Constant: '<S402>/Constant'
   *  Product: '<S402>/Product'
   *  Product: '<S402>/Product1'
   *  Sum: '<S402>/Sum'
   *  UnitDelay: '<S402>/Unit Delay'
   */
  BaseEngineController_LS_B.s402_Sum1 = (1.0 - rtb_DataTypeConversion_gx) *
    BaseEngineController_LS_DWork.s402_UnitDelay_DSTATE + rtb_Switch_hp *
    rtb_DataTypeConversion_gx;

  /* S-Function (motohawk_sfun_send_canmsgs): '<S749>/Send CAN Messages' */
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
        if (BaseEngineController_LS_B.s402_Sum1 < 0.0000000000F) {
          tmp0 = (uint16_T)(0U);
        } else if (BaseEngineController_LS_B.s402_Sum1 > 99.9998565000F) {
          tmp0 = (uint16_T)(65535U);
        } else {
          tmp0 = (uint16_T)(BaseEngineController_LS_B.s402_Sum1 *
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

  /* S-Function Block: <S763>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s763_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_hp = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S763>/Product' incorporates:
   *  MinMax: '<S763>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S763>/motohawk_calibration'
   */
  rtb_Switch_hp /= (rtb_Switch_hp >= (RPMFilt_LowPass_DataStore())) || rtIsNaN
    ((RPMFilt_LowPass_DataStore())) ? rtb_Switch_hp : (RPMFilt_LowPass_DataStore
    ());

  /* Sum: '<S764>/Sum1' incorporates:
   *  Constant: '<S764>/Constant'
   *  Product: '<S764>/Product'
   *  Product: '<S764>/Product1'
   *  Sum: '<S764>/Sum'
   *  UnitDelay: '<S764>/Unit Delay'
   */
  rtb_Sum1_ni = (1.0 - rtb_Switch_hp) *
    BaseEngineController_LS_DWork.s764_UnitDelay_DSTATE +
    BaseEngineController_LS_B.s536_Sum1 * rtb_Switch_hp;

  /* Switch: '<S761>/Switch' incorporates:
   *  MinMax: '<S761>/MinMax'
   *  Product: '<S761>/Product'
   *  Product: '<S761>/Product1'
   *  Rounding: '<S761>/Rounding Function'
   *  S-Function (motohawk_sfun_calibration): '<S761>/motohawk_calibration'
   */
  if (((uint8_T)(RPMFilt_Enable_DataStore())) >= 1) {
    /* MinMax: '<S761>/MinMax' incorporates:
     *  Constant: '<S761>/Constant'
     *  S-Function (motohawk_sfun_calibration): '<S761>/motohawk_calibration1'
     */
    rtb_UnitDelay3_mp = (real_T)((uint16_T)(RPMFilt_RoundValue_DataStore()));
    rtb_Abs_k = rtb_UnitDelay3_mp >= 1.0 ? rtb_UnitDelay3_mp : 1.0;
    rtb_Switch_hp = rt_roundd_snf(rtb_Sum1_ni / rtb_Abs_k) * rtb_Abs_k;
  } else {
    rtb_Switch_hp = BaseEngineController_LS_B.s536_Sum1;
  }

  /* End of Switch: '<S761>/Switch' */
  /* S-Function Block: <S760>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s760_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_gx = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S760>/Product' incorporates:
   *  MinMax: '<S760>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S760>/motohawk_calibration'
   */
  rtb_DataTypeConversion_gx /= (rtb_DataTypeConversion_gx >= (TPS_Filt_DataStore
                                 ())) || rtIsNaN((TPS_Filt_DataStore())) ?
    rtb_DataTypeConversion_gx : (TPS_Filt_DataStore());

  /* Sum: '<S762>/Sum1' incorporates:
   *  Constant: '<S762>/Constant'
   *  Product: '<S762>/Product'
   *  Product: '<S762>/Product1'
   *  Sum: '<S762>/Sum'
   *  UnitDelay: '<S762>/Unit Delay'
   */
  rtb_Sum1_hu = (1.0 - rtb_DataTypeConversion_gx) *
    BaseEngineController_LS_DWork.s762_UnitDelay_DSTATE +
    BaseEngineController_LS_B.s437_Switch2 * rtb_DataTypeConversion_gx;

  /* S-Function (motohawk_sfun_send_canmsgs): '<S750>/Send CAN Messages' */
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
        if (rtb_Switch_hp < 0.0000000000F) {
          tmp0 = (uint16_T)(0U);
        } else if (rtb_Switch_hp > 25599.9370500000F) {
          tmp0 = (uint16_T)(65534U);
        } else {
          tmp0 = (uint16_T)(rtb_Switch_hp * (2.5599672324F));
        }

        if (rtb_Sum1_hu < -50.0006912000F) {
          tmp1 = (int16_T)(-32768);
        } else if (rtb_Sum1_hu > 49.9991653000F) {
          tmp1 = (int16_T)(32767);
        } else {
          tmp1 = (int16_T)(rtb_Sum1_hu * (655.3509404286F));
        }

        if (BaseEngineController_LS_B.s654_Merge < -128.0000000000F) {
          tmp2 = (int8_T)(-128);
        } else if (BaseEngineController_LS_B.s654_Merge > 127.0000000000F) {
          tmp2 = (int8_T)(127);
        } else {
          tmp2 = (int8_T)(BaseEngineController_LS_B.s654_Merge);
        }

        if (BaseEngineController_LS_B.s636_Merge < -128.0000000000F) {
          tmp3 = (int8_T)(-128);
        } else if (BaseEngineController_LS_B.s636_Merge > 127.0000000000F) {
          tmp3 = (int8_T)(127);
        } else {
          tmp3 = (int8_T)(BaseEngineController_LS_B.s636_Merge);
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

  /* S-Function Block: <S768>/motohawk_delta_time */
  rtb_motohawk_delta_time_b3 = 0.005;

  /* UnitDelay: '<S768>/Unit Delay2' */
  rtb_DataTypeConversion1_d =
    BaseEngineController_LS_DWork.s768_UnitDelay2_DSTATE;

  /* Outputs for Enabled SubSystem: '<S768>/IncreasingFilter' incorporates:
   *  EnablePort: '<S775>/Enable'
   */
  /* RelationalOperator: '<S768>/Relational Operator4' incorporates:
   *  UnitDelay: '<S768>/Unit Delay2'
   */
  if (BaseEngineController_LS_DWork.s768_UnitDelay2_DSTATE <
      BaseEngineController_LS_B.s477_MultiportSwitch) {
    /* S-Function (motohawk_sfun_calibration): '<S775>/motohawk_calibration1' */
    BaseEngineController_LS_B.s768_Merge = (PH1_FiltIncConst_DataStore());
  }

  /* End of RelationalOperator: '<S768>/Relational Operator4' */
  /* End of Outputs for SubSystem: '<S768>/IncreasingFilter' */

  /* Outputs for Enabled SubSystem: '<S768>/DecreasingFilter' incorporates:
   *  EnablePort: '<S773>/Enable'
   */
  /* RelationalOperator: '<S768>/Relational Operator3' */
  if (rtb_DataTypeConversion1_d > BaseEngineController_LS_B.s477_MultiportSwitch)
  {
    /* S-Function (motohawk_sfun_calibration): '<S773>/motohawk_calibration2' */
    BaseEngineController_LS_B.s768_Merge = (PH1_FiltDecConst_DataStore());
  }

  /* End of RelationalOperator: '<S768>/Relational Operator3' */
  /* End of Outputs for SubSystem: '<S768>/DecreasingFilter' */

  /* Switch: '<S768>/Switch1' incorporates:
   *  Constant: '<S768>/Constant'
   *  MinMax: '<S768>/MinMax'
   *  Product: '<S768>/Product'
   *  UnitDelay: '<S768>/Unit Delay5'
   */
  if (BaseEngineController_LS_DWork.s768_UnitDelay5_DSTATE) {
    rtb_Switch_hp = rtb_motohawk_delta_time_b3 / ((rtb_motohawk_delta_time_b3 >=
      BaseEngineController_LS_B.s768_Merge) || rtIsNaN
      (BaseEngineController_LS_B.s768_Merge) ? rtb_motohawk_delta_time_b3 :
      BaseEngineController_LS_B.s768_Merge);
  } else {
    rtb_Switch_hp = 1.0;
  }

  /* End of Switch: '<S768>/Switch1' */

  /* Sum: '<S774>/Sum1' incorporates:
   *  Constant: '<S774>/Constant'
   *  Product: '<S774>/Product'
   *  Product: '<S774>/Product1'
   *  Sum: '<S774>/Sum'
   *  UnitDelay: '<S774>/Unit Delay'
   */
  rtb_Sum1_c = (1.0 - rtb_Switch_hp) *
    BaseEngineController_LS_DWork.s774_UnitDelay_DSTATE +
    BaseEngineController_LS_B.s477_MultiportSwitch * rtb_Switch_hp;

  /* Switch: '<S768>/Switch' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S768>/motohawk_calibration'
   *  UnitDelay: '<S768>/Unit Delay5'
   */
  if (BaseEngineController_LS_DWork.s768_UnitDelay5_DSTATE) {
    BaseEngineController_LS_B.s768_Switch = rtb_Sum1_c;
  } else {
    BaseEngineController_LS_B.s768_Switch = (PHI1_DefaultVal_DataStore());
  }

  /* End of Switch: '<S768>/Switch' */
  /* S-Function Block: <S769>/motohawk_delta_time */
  rtb_motohawk_delta_time_lc = 0.005;

  /* UnitDelay: '<S769>/Unit Delay2' */
  rtb_DataTypeConversion1_d =
    BaseEngineController_LS_DWork.s769_UnitDelay2_DSTATE;

  /* Outputs for Enabled SubSystem: '<S769>/IncreasingFilter' incorporates:
   *  EnablePort: '<S778>/Enable'
   */
  /* RelationalOperator: '<S769>/Relational Operator4' incorporates:
   *  UnitDelay: '<S769>/Unit Delay2'
   */
  if (BaseEngineController_LS_DWork.s769_UnitDelay2_DSTATE <
      BaseEngineController_LS_B.s492_Merge) {
    /* S-Function (motohawk_sfun_calibration): '<S778>/motohawk_calibration1' */
    BaseEngineController_LS_B.s769_Merge = (PH2_FiltIncConst_DataStore());
  }

  /* End of RelationalOperator: '<S769>/Relational Operator4' */
  /* End of Outputs for SubSystem: '<S769>/IncreasingFilter' */

  /* Outputs for Enabled SubSystem: '<S769>/DecreasingFilter' incorporates:
   *  EnablePort: '<S776>/Enable'
   */
  /* RelationalOperator: '<S769>/Relational Operator3' */
  if (rtb_DataTypeConversion1_d > BaseEngineController_LS_B.s492_Merge) {
    /* S-Function (motohawk_sfun_calibration): '<S776>/motohawk_calibration2' */
    BaseEngineController_LS_B.s769_Merge = (PH2_FiltDecConst_DataStore());
  }

  /* End of RelationalOperator: '<S769>/Relational Operator3' */
  /* End of Outputs for SubSystem: '<S769>/DecreasingFilter' */

  /* Switch: '<S769>/Switch1' incorporates:
   *  Constant: '<S769>/Constant'
   *  MinMax: '<S769>/MinMax'
   *  Product: '<S769>/Product'
   *  UnitDelay: '<S769>/Unit Delay5'
   */
  if (BaseEngineController_LS_DWork.s769_UnitDelay5_DSTATE) {
    rtb_Switch_hp = rtb_motohawk_delta_time_lc / ((rtb_motohawk_delta_time_lc >=
      BaseEngineController_LS_B.s769_Merge) || rtIsNaN
      (BaseEngineController_LS_B.s769_Merge) ? rtb_motohawk_delta_time_lc :
      BaseEngineController_LS_B.s769_Merge);
  } else {
    rtb_Switch_hp = 1.0;
  }

  /* End of Switch: '<S769>/Switch1' */

  /* Sum: '<S777>/Sum1' incorporates:
   *  Constant: '<S777>/Constant'
   *  Product: '<S777>/Product'
   *  Product: '<S777>/Product1'
   *  Sum: '<S777>/Sum'
   *  UnitDelay: '<S777>/Unit Delay'
   */
  rtb_Sum1_lm = (1.0 - rtb_Switch_hp) *
    BaseEngineController_LS_DWork.s777_UnitDelay_DSTATE +
    BaseEngineController_LS_B.s492_Merge * rtb_Switch_hp;

  /* Switch: '<S769>/Switch' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S769>/motohawk_calibration'
   *  UnitDelay: '<S769>/Unit Delay5'
   */
  if (BaseEngineController_LS_DWork.s769_UnitDelay5_DSTATE) {
    BaseEngineController_LS_B.s769_Switch = rtb_Sum1_lm;
  } else {
    BaseEngineController_LS_B.s769_Switch = (PHI2_DefaultVal_DataStore());
  }

  /* End of Switch: '<S769>/Switch' */
  /* S-Function Block: <S765>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s765_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_hp = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S765>/Product' incorporates:
   *  MinMax: '<S765>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S765>/motohawk_calibration'
   */
  rtb_Switch_hp /= (rtb_Switch_hp >= (VSPD_Filt_DataStore())) || rtIsNaN
    ((VSPD_Filt_DataStore())) ? rtb_Switch_hp : (VSPD_Filt_DataStore());

  /* Sum: '<S770>/Sum1' incorporates:
   *  Constant: '<S770>/Constant'
   *  Product: '<S770>/Product'
   *  Product: '<S770>/Product1'
   *  Sum: '<S770>/Sum'
   *  UnitDelay: '<S770>/Unit Delay'
   */
  rtb_Sum1_p3 = (1.0 - rtb_Switch_hp) *
    BaseEngineController_LS_DWork.s770_UnitDelay_DSTATE +
    BaseEngineController_LS_B.s441_Switch2 * rtb_Switch_hp;

  /* Gain: '<S751>/Gain' */
  rtb_Gain_e = 1.60934 * rtb_Sum1_p3;

  /* Product: '<S434>/Product' incorporates:
   *  Constant: '<S434>/Constant'
   *  S-Function (motohawk_sfun_calibration): '<S434>/motohawk_calibration7'
   */
  rtb_Switch_hp = (TireRadius_DataStore()) * 0.00595 *
    BaseEngineController_LS_B.s536_Sum1;

  /* Sum: '<S434>/Sum' incorporates:
   *  Product: '<S434>/Product1'
   *  Product: '<S434>/Product7'
   *  S-Function (motohawk_sfun_calibration): '<S434>/motohawk_calibration'
   *  S-Function (motohawk_sfun_calibration): '<S434>/motohawk_calibration6'
   */
  rtb_DataTypeConversion_gx = rtb_Switch_hp / ((Gear1Ratio_DataStore()) *
    (FDR_DataStore())) - BaseEngineController_LS_B.s441_Switch2;

  /* Abs: '<S434>/Abs' */
  rtb_DataTypeConversion_gx = fabs(rtb_DataTypeConversion_gx);

  /* Gain: '<S434>/Gain' incorporates:
   *  RelationalOperator: '<S434>/M1'
   *  S-Function (motohawk_sfun_calibration): '<S434>/motohawk_calibration8'
   */
  rtb_Gain_in = (rtb_DataTypeConversion_gx <= (GearMatchHyst_DataStore()));

  /* Sum: '<S434>/Sum1' incorporates:
   *  Product: '<S434>/Product2'
   *  Product: '<S434>/Product8'
   *  S-Function (motohawk_sfun_calibration): '<S434>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S434>/motohawk_calibration6'
   */
  rtb_DataTypeConversion_gx = rtb_Switch_hp / ((Gear2Ratio_DataStore()) *
    (FDR_DataStore())) - BaseEngineController_LS_B.s441_Switch2;

  /* Abs: '<S434>/Abs1' */
  rtb_DataTypeConversion_gx = fabs(rtb_DataTypeConversion_gx);

  /* Gain: '<S434>/Gain1' incorporates:
   *  RelationalOperator: '<S434>/M2'
   *  S-Function (motohawk_sfun_calibration): '<S434>/motohawk_calibration8'
   */
  rtb_Gain1_k = (uint8_T)((rtb_DataTypeConversion_gx <= (GearMatchHyst_DataStore
                            ())) << 1);

  /* Sum: '<S434>/Sum2' incorporates:
   *  Product: '<S434>/Product3'
   *  Product: '<S434>/Product9'
   *  S-Function (motohawk_sfun_calibration): '<S434>/motohawk_calibration2'
   *  S-Function (motohawk_sfun_calibration): '<S434>/motohawk_calibration6'
   */
  rtb_DataTypeConversion_gx = rtb_Switch_hp / ((Gear3Ratio_DataStore()) *
    (FDR_DataStore())) - BaseEngineController_LS_B.s441_Switch2;

  /* Abs: '<S434>/Abs2' */
  rtb_DataTypeConversion_gx = fabs(rtb_DataTypeConversion_gx);

  /* Gain: '<S434>/Gain2' incorporates:
   *  RelationalOperator: '<S434>/M3'
   *  S-Function (motohawk_sfun_calibration): '<S434>/motohawk_calibration8'
   */
  rtb_Gain2_m = (uint8_T)(rtb_DataTypeConversion_gx <= (GearMatchHyst_DataStore())
    ? 3 : 0);

  /* Sum: '<S434>/Sum3' incorporates:
   *  Product: '<S434>/Product10'
   *  Product: '<S434>/Product4'
   *  S-Function (motohawk_sfun_calibration): '<S434>/motohawk_calibration3'
   *  S-Function (motohawk_sfun_calibration): '<S434>/motohawk_calibration6'
   */
  rtb_DataTypeConversion_gx = rtb_Switch_hp / ((Gear4Ratio_DataStore()) *
    (FDR_DataStore())) - BaseEngineController_LS_B.s441_Switch2;

  /* Abs: '<S434>/Abs3' */
  rtb_DataTypeConversion_gx = fabs(rtb_DataTypeConversion_gx);

  /* Gain: '<S434>/Gain3' incorporates:
   *  RelationalOperator: '<S434>/M4'
   *  S-Function (motohawk_sfun_calibration): '<S434>/motohawk_calibration8'
   */
  rtb_Gain3_m = (uint8_T)((rtb_DataTypeConversion_gx <= (GearMatchHyst_DataStore
                            ())) << 2);

  /* Sum: '<S434>/Sum4' incorporates:
   *  Product: '<S434>/Product11'
   *  Product: '<S434>/Product5'
   *  S-Function (motohawk_sfun_calibration): '<S434>/motohawk_calibration4'
   *  S-Function (motohawk_sfun_calibration): '<S434>/motohawk_calibration6'
   */
  rtb_DataTypeConversion_gx = rtb_Switch_hp / ((Gear5Ratio_DataStore()) *
    (FDR_DataStore())) - BaseEngineController_LS_B.s441_Switch2;

  /* Abs: '<S434>/Abs4' */
  rtb_DataTypeConversion_gx = fabs(rtb_DataTypeConversion_gx);

  /* Gain: '<S434>/Gain4' incorporates:
   *  RelationalOperator: '<S434>/M5'
   *  S-Function (motohawk_sfun_calibration): '<S434>/motohawk_calibration8'
   */
  rtb_Gain4 = (uint8_T)(rtb_DataTypeConversion_gx <= (GearMatchHyst_DataStore())
                        ? 5 : 0);

  /* Sum: '<S434>/Sum5' incorporates:
   *  Product: '<S434>/Product12'
   *  Product: '<S434>/Product6'
   *  S-Function (motohawk_sfun_calibration): '<S434>/motohawk_calibration5'
   *  S-Function (motohawk_sfun_calibration): '<S434>/motohawk_calibration6'
   */
  rtb_Switch_hp = rtb_Switch_hp / ((Gear6Ratio_DataStore()) * (FDR_DataStore()))
    - BaseEngineController_LS_B.s441_Switch2;

  /* Abs: '<S434>/Abs5' */
  rtb_Switch_hp = fabs(rtb_Switch_hp);

  /* Gain: '<S434>/Gain5' incorporates:
   *  RelationalOperator: '<S434>/M6'
   *  S-Function (motohawk_sfun_calibration): '<S434>/motohawk_calibration8'
   */
  rtb_u = (uint8_T)(rtb_Switch_hp <= (GearMatchHyst_DataStore()) ? 6 : 0);

  /* MinMax: '<S434>/MinMax' */
  rtb_Gain_in = (uint8_T)(rtb_Gain_in >= rtb_Gain1_k ? rtb_Gain_in : rtb_Gain1_k);
  rtb_Gain_in = (uint8_T)(rtb_Gain_in >= rtb_Gain2_m ? rtb_Gain_in : rtb_Gain2_m);
  rtb_Gain_in = (uint8_T)(rtb_Gain_in >= rtb_Gain3_m ? rtb_Gain_in : rtb_Gain3_m);
  rtb_Gain_in = (uint8_T)(rtb_Gain_in >= rtb_Gain4 ? rtb_Gain_in : rtb_Gain4);
  BaseEngineController_LS_B.s434_MinMax = (uint8_T)(rtb_Gain_in >= rtb_u ?
    rtb_Gain_in : rtb_u);

  /* S-Function Block: <S766>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s766_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_hp = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S766>/Product' incorporates:
   *  MinMax: '<S766>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S766>/motohawk_calibration'
   */
  rtb_Switch_hp /= (rtb_Switch_hp >= (SparkAdv_Filt_DataStore())) || rtIsNaN
    ((SparkAdv_Filt_DataStore())) ? rtb_Switch_hp : (SparkAdv_Filt_DataStore());

  /* Sum: '<S771>/Sum1' incorporates:
   *  Constant: '<S771>/Constant'
   *  Product: '<S771>/Product'
   *  Product: '<S771>/Product1'
   *  Sum: '<S771>/Sum'
   *  UnitDelay: '<S771>/Unit Delay'
   */
  rtb_Sum1_a = (1.0 - rtb_Switch_hp) *
    BaseEngineController_LS_DWork.s771_UnitDelay_DSTATE +
    BaseEngineController_LS_B.s92_SparkAdv * rtb_Switch_hp;

  /* S-Function Block: <S767>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s767_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_hp = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S767>/Product' incorporates:
   *  MinMax: '<S767>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S767>/motohawk_calibration'
   */
  rtb_Switch_hp /= (rtb_Switch_hp >= (ECUVolt_Filt_DataStore())) || rtIsNaN
    ((ECUVolt_Filt_DataStore())) ? rtb_Switch_hp : (ECUVolt_Filt_DataStore());

  /* S-Function Block: <S609>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s609_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_gx = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S609>/Product' incorporates:
   *  MinMax: '<S609>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S609>/motohawk_calibration'
   */
  rtb_DataTypeConversion_gx /= (rtb_DataTypeConversion_gx >=
    (SysVoltFilterConst_DataStore())) || rtIsNaN((SysVoltFilterConst_DataStore()))
    ? rtb_DataTypeConversion_gx : (SysVoltFilterConst_DataStore());

  /* Logic: '<S545>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S545>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S545>/motohawk_fault_status4'
   */
  rtb_RelationalOperator5_fz = (IsFaultActive(134) || IsFaultActive(135));

  /* Logic: '<S545>/Logical Operator6' */
  rtb_LogicalOperator6_jl = !rtb_RelationalOperator5_fz;

  /* Logic: '<S545>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S545>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S545>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_le = (IsFaultSuspected(134) || IsFaultSuspected(135));

  /* S-Function Block: <S473>/motohawk_ain14 Resource: SysVoltage */
  {
    extern NativeError_S SysVoltage_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    SysVoltage_AnalogInput_Get(&BaseEngineController_LS_B.s473_motohawk_ain14,
      NULL);
  }

  /* DataTypeConversion: '<S545>/Data Type Conversion' */
  rtb_Multiplyby10ifnotyetenabled_c = (real_T)
    BaseEngineController_LS_B.s473_motohawk_ain14;

  /* Product: '<S545>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S545>/motohawk_calibration4'
   */
  rtb_DataTypeConversion1_d = rtb_Multiplyby10ifnotyetenabled_c *
    (SysVoltGain_DataStore());

  /* Sum: '<S545>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S545>/motohawk_calibration5'
   */
  BaseEngineController_LS_B.s545_Sum1 = rtb_DataTypeConversion1_d +
    (SysVoltOfst_DataStore());

  /* UnitDelay: '<S545>/Unit Delay1' */
  rtb_UnitDelay1_f4 = BaseEngineController_LS_DWork.s545_UnitDelay1_DSTATE;

  /* If: '<S545>/If' incorporates:
   *  Logic: '<S545>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_jl && rtb_LogicalOperator1_le) {
    /* Outputs for IfAction SubSystem: '<S545>/If Action Subsystem' incorporates:
     *  ActionPort: '<S610>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay1_f4, &rtb_Merge_f);

    /* End of Outputs for SubSystem: '<S545>/If Action Subsystem' */
  } else if (rtb_RelationalOperator5_fz) {
    /* Outputs for IfAction SubSystem: '<S545>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S611>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((SysVoltDfltValue_DataStore()),
      &rtb_Merge_f);

    /* End of Outputs for SubSystem: '<S545>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S545>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S612>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      (BaseEngineController_LS_B.s545_Sum1, &rtb_Merge_f);

    /* End of Outputs for SubSystem: '<S545>/If Action Subsystem2' */
  }

  /* End of If: '<S545>/If' */

  /* Sum: '<S614>/Sum1' incorporates:
   *  Constant: '<S614>/Constant'
   *  Product: '<S614>/Product'
   *  Product: '<S614>/Product1'
   *  Sum: '<S614>/Sum'
   *  UnitDelay: '<S614>/Unit Delay'
   */
  rtb_Sum1_nl = (1.0 - rtb_DataTypeConversion_gx) *
    BaseEngineController_LS_DWork.s614_UnitDelay_DSTATE + rtb_Merge_f *
    rtb_DataTypeConversion_gx;

  /* If: '<S613>/If' incorporates:
   *  Inport: '<S615>/In1'
   *  Inport: '<S616>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S613>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S613>/override_enable'
   */
  if ((SysVolt_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S613>/NewValue' incorporates:
     *  ActionPort: '<S615>/Action Port'
     */
    BaseEngineController_LS_B.s613_Merge = (SysVolt_new_DataStore());

    /* End of Outputs for SubSystem: '<S613>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S613>/OldValue' incorporates:
     *  ActionPort: '<S616>/Action Port'
     */
    BaseEngineController_LS_B.s613_Merge = rtb_Sum1_nl;

    /* End of Outputs for SubSystem: '<S613>/OldValue' */
  }

  /* End of If: '<S613>/If' */

  /* Sum: '<S772>/Sum1' incorporates:
   *  Constant: '<S772>/Constant'
   *  Product: '<S772>/Product'
   *  Product: '<S772>/Product1'
   *  Sum: '<S772>/Sum'
   *  UnitDelay: '<S772>/Unit Delay'
   */
  rtb_Sum1_j2 = (1.0 - rtb_Switch_hp) *
    BaseEngineController_LS_DWork.s772_UnitDelay_DSTATE +
    BaseEngineController_LS_B.s613_Merge * rtb_Switch_hp;

  /* S-Function (motohawk_sfun_send_canmsgs): '<S751>/Send CAN Messages' */
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
        if (BaseEngineController_LS_B.s768_Switch < 0.5000000000F) {
          tmp0 = (uint8_T)(0U);
        } else if (BaseEngineController_LS_B.s768_Switch > 1.4960937500F) {
          tmp0 = (uint8_T)(255U);
        } else {
          tmp0 = (uint8_T)((BaseEngineController_LS_B.s768_Switch -
                            (0.5000000000F)) * (256.0000000000F));
        }

        if (BaseEngineController_LS_B.s769_Switch < 0.5000000000F) {
          tmp1 = (uint8_T)(0U);
        } else if (BaseEngineController_LS_B.s769_Switch > 1.4960937500F) {
          tmp1 = (uint8_T)(255U);
        } else {
          tmp1 = (uint8_T)((BaseEngineController_LS_B.s769_Switch -
                            (0.5000000000F)) * (256.0000000000F));
        }

        if (rtb_Gain_e < 0.0000000000F) {
          tmp2 = (uint16_T)(0U);
        } else if (rtb_Gain_e > 411.9857775000F) {
          tmp2 = (uint16_T)(65535U);
        } else {
          tmp2 = (uint16_T)(rtb_Gain_e * (159.0710252128F));
        }

        tmp3 = (uint8_T)(BaseEngineController_LS_B.s434_MinMax);
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

  /* UnitDelay: '<S768>/Unit Delay1' */
  rtb_UnitDelay1_ad = BaseEngineController_LS_DWork.s768_UnitDelay1_DSTATE;

  /* UnitDelay: '<S768>/Unit Delay3' */
  rtb_UnitDelay3_m = BaseEngineController_LS_DWork.s768_UnitDelay3_DSTATE;

  /* UnitDelay: '<S768>/Unit Delay4' */
  rtb_UnitDelay4_b = BaseEngineController_LS_DWork.s768_UnitDelay4_DSTATE;

  /* UnitDelay: '<S769>/Unit Delay1' */
  rtb_UnitDelay1_pn = BaseEngineController_LS_DWork.s769_UnitDelay1_DSTATE;

  /* UnitDelay: '<S769>/Unit Delay3' */
  rtb_UnitDelay3_p = BaseEngineController_LS_DWork.s769_UnitDelay3_DSTATE;

  /* UnitDelay: '<S769>/Unit Delay4' */
  rtb_UnitDelay4_a = BaseEngineController_LS_DWork.s769_UnitDelay4_DSTATE;

  /* S-Function Block: <S782>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s782_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_hp = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S782>/Product' incorporates:
   *  MinMax: '<S782>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S782>/motohawk_calibration'
   */
  rtb_Switch_hp /= (rtb_Switch_hp >= (MAP_filt_DataStore())) || rtIsNaN
    ((MAP_filt_DataStore())) ? rtb_Switch_hp : (MAP_filt_DataStore());

  /* Sum: '<S785>/Sum1' incorporates:
   *  Constant: '<S785>/Constant'
   *  Product: '<S785>/Product'
   *  Product: '<S785>/Product1'
   *  Sum: '<S785>/Sum'
   *  UnitDelay: '<S785>/Unit Delay'
   */
  rtb_Sum1_cn = (1.0 - rtb_Switch_hp) *
    BaseEngineController_LS_DWork.s785_UnitDelay_DSTATE +
    BaseEngineController_LS_B.s579_Merge * rtb_Switch_hp;

  /* S-Function (motohawk_sfun_data_read): '<S752>/motohawk_data_read' */
  rtb_motohawk_data_read_i4 = VEFin_DataStore();

  /* S-Function Block: <S567>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s567_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_hp = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S567>/Product' incorporates:
   *  MinMax: '<S567>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S567>/motohawk_calibration'
   */
  rtb_Switch_hp /= (rtb_Switch_hp >= (FuelPresFilterConst_DataStore())) ||
    rtIsNaN((FuelPresFilterConst_DataStore())) ? rtb_Switch_hp :
    (FuelPresFilterConst_DataStore());

  /* Logic: '<S539>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S539>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S539>/motohawk_fault_status4'
   */
  rtb_RelationalOperator5_fz = (IsFaultActive(67) || IsFaultActive(68));

  /* Logic: '<S539>/Logical Operator6' */
  rtb_LogicalOperator6_jl = !rtb_RelationalOperator5_fz;

  /* Logic: '<S539>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S539>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S539>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_le = (IsFaultSuspected(67) || IsFaultSuspected(68));

  /* S-Function Block: <S473>/motohawk_ain2 Resource: FuelPresPin */
  {
    extern NativeError_S FuelPresPin_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    FuelPresPin_AnalogInput_Get(&BaseEngineController_LS_B.s473_motohawk_ain2,
      NULL);
  }

  /* DataTypeConversion: '<S539>/Data Type Conversion' */
  rtb_DataTypeConversion_gx = (real_T)
    BaseEngineController_LS_B.s473_motohawk_ain2;

  /* Product: '<S539>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S539>/motohawk_calibration4'
   */
  rtb_DataTypeConversion1_d = rtb_DataTypeConversion_gx *
    (FuelPresGain_DataStore());

  /* Sum: '<S539>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S539>/motohawk_calibration5'
   */
  BaseEngineController_LS_B.s539_Sum1 = rtb_DataTypeConversion1_d +
    (FuelPresOfst_DataStore());

  /* UnitDelay: '<S539>/Unit Delay1' */
  rtb_UnitDelay1_pd = BaseEngineController_LS_DWork.s539_UnitDelay1_DSTATE;

  /* If: '<S539>/If' incorporates:
   *  Logic: '<S539>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_jl && rtb_LogicalOperator1_le) {
    /* Outputs for IfAction SubSystem: '<S539>/If Action Subsystem' incorporates:
     *  ActionPort: '<S568>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay1_pd, &rtb_Merge_b3f);

    /* End of Outputs for SubSystem: '<S539>/If Action Subsystem' */
  } else if (rtb_RelationalOperator5_fz) {
    /* Outputs for IfAction SubSystem: '<S539>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S569>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((FuelPresDfltValue_DataStore()),
      &rtb_Merge_b3f);

    /* End of Outputs for SubSystem: '<S539>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S539>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S570>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      (BaseEngineController_LS_B.s539_Sum1, &rtb_Merge_b3f);

    /* End of Outputs for SubSystem: '<S539>/If Action Subsystem2' */
  }

  /* End of If: '<S539>/If' */

  /* Sum: '<S572>/Sum1' incorporates:
   *  Constant: '<S572>/Constant'
   *  Product: '<S572>/Product'
   *  Product: '<S572>/Product1'
   *  Sum: '<S572>/Sum'
   *  UnitDelay: '<S572>/Unit Delay'
   */
  rtb_Sum1_cs = (1.0 - rtb_Switch_hp) *
    BaseEngineController_LS_DWork.s572_UnitDelay_DSTATE + rtb_Merge_b3f *
    rtb_Switch_hp;

  /* If: '<S571>/If' incorporates:
   *  Inport: '<S573>/In1'
   *  Inport: '<S574>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S571>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S571>/override_enable'
   */
  if ((FuelPres_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S571>/NewValue' incorporates:
     *  ActionPort: '<S573>/Action Port'
     */
    BaseEngineController_LS_B.s571_Merge = (FuelPres_new_DataStore());

    /* End of Outputs for SubSystem: '<S571>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S571>/OldValue' incorporates:
     *  ActionPort: '<S574>/Action Port'
     */
    BaseEngineController_LS_B.s571_Merge = rtb_Sum1_cs;

    /* End of Outputs for SubSystem: '<S571>/OldValue' */
  }

  /* End of If: '<S571>/If' */

  /* Gain: '<S752>/Gain' */
  rtb_DataTypeConversion1_d = 0.01 * BaseEngineController_LS_B.s571_Merge;

  /* S-Function Block: <S783>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s783_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_hp = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S783>/Product' incorporates:
   *  MinMax: '<S783>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S783>/motohawk_calibration'
   */
  rtb_Switch_hp /= (rtb_Switch_hp >= (FuelPres_Filt_DataStore())) || rtIsNaN
    ((FuelPres_Filt_DataStore())) ? rtb_Switch_hp : (FuelPres_Filt_DataStore());

  /* Sum: '<S786>/Sum1' incorporates:
   *  Constant: '<S786>/Constant'
   *  Product: '<S786>/Product'
   *  Product: '<S786>/Product1'
   *  Sum: '<S786>/Sum'
   *  UnitDelay: '<S786>/Unit Delay'
   */
  rtb_Sum1_ay = (1.0 - rtb_Switch_hp) *
    BaseEngineController_LS_DWork.s786_UnitDelay_DSTATE +
    rtb_DataTypeConversion1_d * rtb_Switch_hp;

  /* S-Function Block: <S593>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s593_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_hp = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S593>/Product' incorporates:
   *  MinMax: '<S593>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S593>/motohawk_calibration'
   */
  rtb_Switch_hp /= (rtb_Switch_hp >= (OilPresFilterConst_DataStore())) ||
    rtIsNaN((OilPresFilterConst_DataStore())) ? rtb_Switch_hp :
    (OilPresFilterConst_DataStore());

  /* Logic: '<S543>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S543>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S543>/motohawk_fault_status4'
   */
  rtb_RelationalOperator5_fz = (IsFaultActive(128) || IsFaultActive(129));

  /* Logic: '<S543>/Logical Operator6' */
  rtb_LogicalOperator6_jl = !rtb_RelationalOperator5_fz;

  /* Logic: '<S543>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S543>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S543>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_le = (IsFaultSuspected(128) || IsFaultSuspected(129));

  /* S-Function Block: <S473>/motohawk_ain1 Resource: OilPresPin */
  {
    extern NativeError_S OilPresPin_AnalogInput_Get(uint16_T *adc, uint16_T
      *status);
    OilPresPin_AnalogInput_Get(&BaseEngineController_LS_B.s473_motohawk_ain1,
      NULL);
  }

  /* DataTypeConversion: '<S543>/Data Type Conversion' */
  rtb_Switch4_i = (real_T)BaseEngineController_LS_B.s473_motohawk_ain1;

  /* Product: '<S543>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S543>/motohawk_calibration4'
   */
  rtb_DataTypeConversion1_d = rtb_Switch4_i * (OilPresGain_DataStore());

  /* Sum: '<S543>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S543>/motohawk_calibration5'
   */
  BaseEngineController_LS_B.s543_Sum1 = rtb_DataTypeConversion1_d +
    (OilPresOfst_DataStore());

  /* UnitDelay: '<S543>/Unit Delay1' */
  rtb_UnitDelay1_aa = BaseEngineController_LS_DWork.s543_UnitDelay1_DSTATE;

  /* If: '<S543>/If' incorporates:
   *  Logic: '<S543>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_jl && rtb_LogicalOperator1_le) {
    /* Outputs for IfAction SubSystem: '<S543>/If Action Subsystem' incorporates:
     *  ActionPort: '<S594>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay1_aa, &rtb_Merge_ol);

    /* End of Outputs for SubSystem: '<S543>/If Action Subsystem' */
  } else if (rtb_RelationalOperator5_fz) {
    /* Outputs for IfAction SubSystem: '<S543>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S595>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((OilPresDfltValue_DataStore()),
      &rtb_Merge_ol);

    /* End of Outputs for SubSystem: '<S543>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S543>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S596>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      (BaseEngineController_LS_B.s543_Sum1, &rtb_Merge_ol);

    /* End of Outputs for SubSystem: '<S543>/If Action Subsystem2' */
  }

  /* End of If: '<S543>/If' */

  /* Sum: '<S598>/Sum1' incorporates:
   *  Constant: '<S598>/Constant'
   *  Product: '<S598>/Product'
   *  Product: '<S598>/Product1'
   *  Sum: '<S598>/Sum'
   *  UnitDelay: '<S598>/Unit Delay'
   */
  rtb_Sum1_o = (1.0 - rtb_Switch_hp) *
    BaseEngineController_LS_DWork.s598_UnitDelay_DSTATE + rtb_Merge_ol *
    rtb_Switch_hp;

  /* If: '<S597>/If' incorporates:
   *  Inport: '<S599>/In1'
   *  Inport: '<S600>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S597>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S597>/override_enable'
   */
  if ((OilPres_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S597>/NewValue' incorporates:
     *  ActionPort: '<S599>/Action Port'
     */
    BaseEngineController_LS_B.s597_Merge = (OilPres_new_DataStore());

    /* End of Outputs for SubSystem: '<S597>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S597>/OldValue' incorporates:
     *  ActionPort: '<S600>/Action Port'
     */
    BaseEngineController_LS_B.s597_Merge = rtb_Sum1_o;

    /* End of Outputs for SubSystem: '<S597>/OldValue' */
  }

  /* End of If: '<S597>/If' */

  /* Gain: '<S752>/Gain1' */
  rtb_DataTypeConversion1_d = 0.068948 * BaseEngineController_LS_B.s597_Merge;

  /* S-Function Block: <S784>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s784_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_hp = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S784>/Product' incorporates:
   *  MinMax: '<S784>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S784>/motohawk_calibration'
   */
  rtb_Switch_hp /= (rtb_Switch_hp >= (OilPres_Filt_DataStore())) || rtIsNaN
    ((OilPres_Filt_DataStore())) ? rtb_Switch_hp : (OilPres_Filt_DataStore());

  /* Sum: '<S787>/Sum1' incorporates:
   *  Constant: '<S787>/Constant'
   *  Product: '<S787>/Product'
   *  Product: '<S787>/Product1'
   *  Sum: '<S787>/Sum'
   *  UnitDelay: '<S787>/Unit Delay'
   */
  rtb_Sum1_co = (1.0 - rtb_Switch_hp) *
    BaseEngineController_LS_DWork.s787_UnitDelay_DSTATE +
    rtb_DataTypeConversion1_d * rtb_Switch_hp;

  /* S-Function (motohawk_sfun_data_read): '<S752>/motohawk_data_read1' */
  rtb_Switch_hp = BaseEquivRatio_DataStore();

  /* Math: '<S752>/Math Function' incorporates:
   *  Saturate: '<S752>/Saturation'
   *
   * About '<S752>/Math Function':
   *  Operator: reciprocal
   */
  rtb_MathFunction = 1.0 / (rtb_Switch_hp >= 0.01 ? rtb_Switch_hp : 0.01);

  /* Switch: '<S103>/Switch' incorporates:
   *  Constant: '<S103>/OFF'
   *  Logic: '<S103>/Logical Operator'
   *  S-Function (motohawk_sfun_data_read): '<S103>/motohawk_data_read'
   *  S-Function (motohawk_sfun_data_read): '<S103>/motohawk_data_read1'
   */
  if (DelayedEngineShutdownAction_DataStore() || EngineShutdownAction_DataStore())
  {
    rtb_RelationalOperator5_fz = FALSE;
  } else {
    rtb_RelationalOperator5_fz = BaseEngineController_LS_B.s92_FUELP;
  }

  /* End of Switch: '<S103>/Switch' */

  /* S-Function (motohawk_sfun_data_read): '<S752>/motohawk_data_read2' */
  rtb_motohawk_data_read2_lg = O2CtrlMode_DataStore();

  /* S-Function (motohawk_sfun_fault_action): '<S752>/motohawk_fault_action'
   *
   * Regarding '<S752>/motohawk_fault_action':
     Get Fault Action Status: EngineProtectLED
   */
  {
    extern boolean_T GetFaultActionStatus(uint32_T action);
    rtb_motohawk_fault_action_o = GetFaultActionStatus(8);
  }

  /* S-Function (motohawk_sfun_fault_action): '<S752>/motohawk_fault_action1'
   *
   * Regarding '<S752>/motohawk_fault_action1':
     Get Fault Action Status: MIL_LED
   */
  {
    extern boolean_T GetFaultActionStatus(uint32_T action);
    rtb_motohawk_fault_action1_a = GetFaultActionStatus(11);
  }

  /* S-Function (motohawk_sfun_fault_status): '<S752>/motohawk_fault_status2'
   *
   * Regarding '<S752>/motohawk_fault_status2':
     Status : "Active"
   */
  {
    extern boolean_T IsFaultActive(uint32_T fault);
    rtb_motohawk_fault_status2_f2 = IsFaultActive(110);
  }

  /* S-Function (motohawk_sfun_fault_status): '<S752>/motohawk_fault_status1'
   *
   * Regarding '<S752>/motohawk_fault_status1':
     Status : "Active"
   */
  {
    extern boolean_T IsFaultActive(uint32_T fault);
    rtb_motohawk_fault_status1_i = IsFaultActive(121);
  }

  /* S-Function (motohawk_sfun_fault_action): '<S22>/motohawk_fault_action1'
   *
   * Regarding '<S22>/motohawk_fault_action1':
     Get Fault Action Status: SoftRevLimit
   */
  {
    extern boolean_T GetFaultActionStatus(uint32_T action);
    rtb_motohawk_fault_action1_o = GetFaultActionStatus(13);
  }

  /* S-Function (motohawk_sfun_fault_action): '<S22>/motohawk_fault_action2'
   *
   * Regarding '<S22>/motohawk_fault_action2':
     Get Fault Action Status: MediumRevLimit
   */
  {
    extern boolean_T GetFaultActionStatus(uint32_T action);
    rtb_motohawk_fault_action2 = GetFaultActionStatus(12);
  }

  /* S-Function (motohawk_sfun_fault_action): '<S22>/motohawk_fault_action3'
   *
   * Regarding '<S22>/motohawk_fault_action3':
     Get Fault Action Status: HardRevLimit
   */
  {
    extern boolean_T GetFaultActionStatus(uint32_T action);
    rtb_motohawk_fault_action3 = GetFaultActionStatus(10);
  }

  /* Logic: '<S22>/Logical Operator4' */
  rtb_LogicalOperator6_jl = (rtb_motohawk_fault_action1_o ||
    rtb_motohawk_fault_action2 || rtb_motohawk_fault_action3);

  /* Outputs for Enabled SubSystem: '<S22>/PassThrough1' incorporates:
   *  EnablePort: '<S67>/Enable'
   */
  if (rtb_motohawk_fault_action1_o) {
    if (!BaseEngineController_LS_DWork.s22_PassThrough1_MODE) {
      BaseEngineController_LS_DWork.s22_PassThrough1_MODE = TRUE;
    }

    /* Inport: '<S67>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S83>/motohawk_calibration10'
     *  S-Function (motohawk_sfun_calibration): '<S83>/motohawk_calibration11'
     *  S-Function (motohawk_sfun_calibration): '<S83>/motohawk_calibration12'
     *  S-Function (motohawk_sfun_calibration): '<S83>/motohawk_calibration13'
     *  S-Function (motohawk_sfun_calibration): '<S83>/motohawk_calibration14'
     *  S-Function (motohawk_sfun_calibration): '<S83>/motohawk_calibration15'
     *  S-Function (motohawk_sfun_calibration): '<S83>/motohawk_calibration8'
     *  S-Function (motohawk_sfun_calibration): '<S83>/motohawk_calibration9'
     *  S-Function (motohawk_sfun_calibration): '<S84>/motohawk_calibration10'
     *  S-Function (motohawk_sfun_calibration): '<S84>/motohawk_calibration11'
     *  S-Function (motohawk_sfun_calibration): '<S84>/motohawk_calibration12'
     *  S-Function (motohawk_sfun_calibration): '<S84>/motohawk_calibration13'
     *  S-Function (motohawk_sfun_calibration): '<S84>/motohawk_calibration14'
     *  S-Function (motohawk_sfun_calibration): '<S84>/motohawk_calibration15'
     *  S-Function (motohawk_sfun_calibration): '<S84>/motohawk_calibration8'
     *  S-Function (motohawk_sfun_calibration): '<S84>/motohawk_calibration9'
     *  S-Function (motohawk_sfun_calibration): '<S85>/motohawk_calibration10'
     *  S-Function (motohawk_sfun_calibration): '<S85>/motohawk_calibration11'
     *  S-Function (motohawk_sfun_calibration): '<S85>/motohawk_calibration12'
     *  S-Function (motohawk_sfun_calibration): '<S85>/motohawk_calibration13'
     *  S-Function (motohawk_sfun_calibration): '<S85>/motohawk_calibration14'
     *  S-Function (motohawk_sfun_calibration): '<S85>/motohawk_calibration15'
     *  S-Function (motohawk_sfun_calibration): '<S85>/motohawk_calibration8'
     *  S-Function (motohawk_sfun_calibration): '<S85>/motohawk_calibration9'
     *  S-Function (motohawk_sfun_calibration): '<S86>/motohawk_calibration10'
     *  S-Function (motohawk_sfun_calibration): '<S86>/motohawk_calibration11'
     *  S-Function (motohawk_sfun_calibration): '<S86>/motohawk_calibration12'
     *  S-Function (motohawk_sfun_calibration): '<S86>/motohawk_calibration13'
     *  S-Function (motohawk_sfun_calibration): '<S86>/motohawk_calibration14'
     *  S-Function (motohawk_sfun_calibration): '<S86>/motohawk_calibration15'
     *  S-Function (motohawk_sfun_calibration): '<S86>/motohawk_calibration8'
     *  S-Function (motohawk_sfun_calibration): '<S86>/motohawk_calibration9'
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
      /* Disable for Outport: '<S67>/Out1' */
      for (i = 0; i < 32; i++) {
        BaseEngineController_LS_B.s22_Merge1[i] = 0;
      }

      /* End of Outport: '<S67>/Out1' */
      BaseEngineController_LS_DWork.s22_PassThrough1_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S22>/PassThrough1' */
  /* Outputs for Enabled SubSystem: '<S22>/PassThrough2' incorporates:
   *  EnablePort: '<S68>/Enable'
   */
  if (rtb_motohawk_fault_action2) {
    /* Inport: '<S68>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S78>/motohawk_calibration10'
     *  S-Function (motohawk_sfun_calibration): '<S78>/motohawk_calibration11'
     *  S-Function (motohawk_sfun_calibration): '<S78>/motohawk_calibration12'
     *  S-Function (motohawk_sfun_calibration): '<S78>/motohawk_calibration13'
     *  S-Function (motohawk_sfun_calibration): '<S78>/motohawk_calibration14'
     *  S-Function (motohawk_sfun_calibration): '<S78>/motohawk_calibration15'
     *  S-Function (motohawk_sfun_calibration): '<S78>/motohawk_calibration8'
     *  S-Function (motohawk_sfun_calibration): '<S78>/motohawk_calibration9'
     *  S-Function (motohawk_sfun_calibration): '<S79>/motohawk_calibration10'
     *  S-Function (motohawk_sfun_calibration): '<S79>/motohawk_calibration11'
     *  S-Function (motohawk_sfun_calibration): '<S79>/motohawk_calibration12'
     *  S-Function (motohawk_sfun_calibration): '<S79>/motohawk_calibration13'
     *  S-Function (motohawk_sfun_calibration): '<S79>/motohawk_calibration14'
     *  S-Function (motohawk_sfun_calibration): '<S79>/motohawk_calibration15'
     *  S-Function (motohawk_sfun_calibration): '<S79>/motohawk_calibration8'
     *  S-Function (motohawk_sfun_calibration): '<S79>/motohawk_calibration9'
     *  S-Function (motohawk_sfun_calibration): '<S80>/motohawk_calibration10'
     *  S-Function (motohawk_sfun_calibration): '<S80>/motohawk_calibration11'
     *  S-Function (motohawk_sfun_calibration): '<S80>/motohawk_calibration12'
     *  S-Function (motohawk_sfun_calibration): '<S80>/motohawk_calibration13'
     *  S-Function (motohawk_sfun_calibration): '<S80>/motohawk_calibration14'
     *  S-Function (motohawk_sfun_calibration): '<S80>/motohawk_calibration15'
     *  S-Function (motohawk_sfun_calibration): '<S80>/motohawk_calibration8'
     *  S-Function (motohawk_sfun_calibration): '<S80>/motohawk_calibration9'
     *  S-Function (motohawk_sfun_calibration): '<S81>/motohawk_calibration10'
     *  S-Function (motohawk_sfun_calibration): '<S81>/motohawk_calibration11'
     *  S-Function (motohawk_sfun_calibration): '<S81>/motohawk_calibration12'
     *  S-Function (motohawk_sfun_calibration): '<S81>/motohawk_calibration13'
     *  S-Function (motohawk_sfun_calibration): '<S81>/motohawk_calibration14'
     *  S-Function (motohawk_sfun_calibration): '<S81>/motohawk_calibration15'
     *  S-Function (motohawk_sfun_calibration): '<S81>/motohawk_calibration8'
     *  S-Function (motohawk_sfun_calibration): '<S81>/motohawk_calibration9'
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
   *  EnablePort: '<S69>/Enable'
   */
  if (rtb_motohawk_fault_action3) {
    if (!BaseEngineController_LS_DWork.s22_PassThrough3_MODE) {
      BaseEngineController_LS_DWork.s22_PassThrough3_MODE = TRUE;
    }

    /* Inport: '<S69>/In1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S74>/motohawk_calibration10'
     *  S-Function (motohawk_sfun_calibration): '<S74>/motohawk_calibration11'
     *  S-Function (motohawk_sfun_calibration): '<S74>/motohawk_calibration12'
     *  S-Function (motohawk_sfun_calibration): '<S74>/motohawk_calibration13'
     *  S-Function (motohawk_sfun_calibration): '<S74>/motohawk_calibration14'
     *  S-Function (motohawk_sfun_calibration): '<S74>/motohawk_calibration15'
     *  S-Function (motohawk_sfun_calibration): '<S74>/motohawk_calibration8'
     *  S-Function (motohawk_sfun_calibration): '<S74>/motohawk_calibration9'
     *  S-Function (motohawk_sfun_calibration): '<S75>/motohawk_calibration10'
     *  S-Function (motohawk_sfun_calibration): '<S75>/motohawk_calibration11'
     *  S-Function (motohawk_sfun_calibration): '<S75>/motohawk_calibration12'
     *  S-Function (motohawk_sfun_calibration): '<S75>/motohawk_calibration13'
     *  S-Function (motohawk_sfun_calibration): '<S75>/motohawk_calibration14'
     *  S-Function (motohawk_sfun_calibration): '<S75>/motohawk_calibration15'
     *  S-Function (motohawk_sfun_calibration): '<S75>/motohawk_calibration8'
     *  S-Function (motohawk_sfun_calibration): '<S75>/motohawk_calibration9'
     *  S-Function (motohawk_sfun_calibration): '<S76>/motohawk_calibration10'
     *  S-Function (motohawk_sfun_calibration): '<S76>/motohawk_calibration11'
     *  S-Function (motohawk_sfun_calibration): '<S76>/motohawk_calibration12'
     *  S-Function (motohawk_sfun_calibration): '<S76>/motohawk_calibration13'
     *  S-Function (motohawk_sfun_calibration): '<S76>/motohawk_calibration14'
     *  S-Function (motohawk_sfun_calibration): '<S76>/motohawk_calibration15'
     *  S-Function (motohawk_sfun_calibration): '<S76>/motohawk_calibration8'
     *  S-Function (motohawk_sfun_calibration): '<S76>/motohawk_calibration9'
     *  S-Function (motohawk_sfun_calibration): '<S77>/motohawk_calibration10'
     *  S-Function (motohawk_sfun_calibration): '<S77>/motohawk_calibration11'
     *  S-Function (motohawk_sfun_calibration): '<S77>/motohawk_calibration12'
     *  S-Function (motohawk_sfun_calibration): '<S77>/motohawk_calibration13'
     *  S-Function (motohawk_sfun_calibration): '<S77>/motohawk_calibration14'
     *  S-Function (motohawk_sfun_calibration): '<S77>/motohawk_calibration15'
     *  S-Function (motohawk_sfun_calibration): '<S77>/motohawk_calibration8'
     *  S-Function (motohawk_sfun_calibration): '<S77>/motohawk_calibration9'
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
      /* Disable for Outport: '<S69>/Out1' */
      for (i = 0; i < 32; i++) {
        BaseEngineController_LS_B.s22_Merge1[i] = 0;
      }

      /* End of Outport: '<S69>/Out1' */
      BaseEngineController_LS_DWork.s22_PassThrough3_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S22>/PassThrough3' */

  /* Outputs for Enabled SubSystem: '<S22>/SequenceCutMachine' incorporates:
   *  EnablePort: '<S72>/Enable'
   */
  if (rtb_LogicalOperator6_jl) {
    if (!BaseEngineController_LS_DWork.s22_SequenceCutMachine_MODE) {
      /* InitializeConditions for UnitDelay: '<S72>/Unit Delay2' */
      BaseEngineController_LS_DWork.s72_UnitDelay2_DSTATE = 1.0;

      /* InitializeConditions for UnitDelay: '<S72>/Unit Delay1' */
      BaseEngineController_LS_DWork.s72_UnitDelay1_DSTATE = 1U;

      /* Level2 S-Function Block: '<S72>/motohawk_trigger' (motohawk_sfun_trigger) */

      /* Enable for Trigger_FGND_TDC1_EVENT_11111p0007 */
      BaseEngineController_LS_DWork.s72_motohawk_trigger_DWORK1 = 1;
      BaseEngineController_LS_DWork.s22_SequenceCutMachine_MODE = TRUE;
    }

    /* UnitDelay: '<S72>/Unit Delay2' */
    BaseEngineController_LS_B.s72_UnitDelay2 =
      BaseEngineController_LS_DWork.s72_UnitDelay2_DSTATE;

    /* MultiPortSwitch: '<S72>/Multiport Switch' */
    switch ((int32_T)BaseEngineController_LS_B.s72_UnitDelay2) {
     case 1:
      for (i = 0; i < 8; i++) {
        BaseEngineController_LS_B.s72_MultiportSwitch[i] =
          BaseEngineController_LS_B.s22_Merge1[i];
      }
      break;

     case 2:
      for (i = 0; i < 8; i++) {
        BaseEngineController_LS_B.s72_MultiportSwitch[i] =
          BaseEngineController_LS_B.s22_Merge1[i + 8];
      }
      break;

     case 3:
      for (i = 0; i < 8; i++) {
        BaseEngineController_LS_B.s72_MultiportSwitch[i] =
          BaseEngineController_LS_B.s22_Merge1[i + 16];
      }
      break;

     default:
      for (i = 0; i < 8; i++) {
        BaseEngineController_LS_B.s72_MultiportSwitch[i] =
          BaseEngineController_LS_B.s22_Merge1[i + 24];
      }
      break;
    }

    /* End of MultiPortSwitch: '<S72>/Multiport Switch' */

    /* UnitDelay: '<S72>/Unit Delay1' */
    BaseEngineController_LS_B.s72_UnitDelay1 =
      BaseEngineController_LS_DWork.s72_UnitDelay1_DSTATE;

    /* S-Function (motohawk_sfun_trigger): '<S72>/motohawk_trigger' */
    /* Enable for Trigger_FGND_TDC1_EVENT_11111p0007 */
    if (BaseEngineController_LS_DWork.s72_motohawk_trigger_DWORK1 == 0) {
      BaseEngineController_LS_DWork.s72_motohawk_trigger_DWORK1 = 1;
    }

    /* Update for UnitDelay: '<S72>/Unit Delay2' */
    BaseEngineController_LS_DWork.s72_UnitDelay2_DSTATE =
      BaseEngineController_LS_B.s82_Switch1;

    /* Update for UnitDelay: '<S72>/Unit Delay1' */
    BaseEngineController_LS_DWork.s72_UnitDelay1_DSTATE =
      BaseEngineController_LS_B.s82_Switch;
  } else {
    if (BaseEngineController_LS_DWork.s22_SequenceCutMachine_MODE) {
      /* Level2 S-Function Block: '<S72>/motohawk_trigger' (motohawk_sfun_trigger) */
      /* Disable for Trigger_FGND_TDC1_EVENT_11111p0007 */
      BaseEngineController_LS_DWork.s72_motohawk_trigger_DWORK1 = 0;
      BaseEngineController_LS_DWork.s22_SequenceCutMachine_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S22>/SequenceCutMachine' */
  /* Outputs for Enabled SubSystem: '<S22>/PassThrough5' incorporates:
   *  EnablePort: '<S71>/Enable'
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

    /* DataTypeConversion: '<S71>/Data Type Conversion1' */
    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_B.s71_DataTypeConversion1[i] =
        ((BaseEngineController_LS_B.s82_CutArray[i] != 0));
    }

    /* End of DataTypeConversion: '<S71>/Data Type Conversion1' */
  } else {
    if (BaseEngineController_LS_DWork.s22_PassThrough5_MODE) {
      /* Disable for Outport: '<S71>/Out1' */
      for (i = 0; i < 8; i++) {
        BaseEngineController_LS_B.s71_DataTypeConversion1[i] = FALSE;
      }

      /* End of Outport: '<S71>/Out1' */
      BaseEngineController_LS_DWork.s22_PassThrough5_MODE = FALSE;
    }
  }

  /* End of Logic: '<S22>/Logical Operator1' */
  /* End of Outputs for SubSystem: '<S22>/PassThrough5' */

  /* Logic: '<S22>/Logical Operator3' */
  for (i = 0; i < 8; i++) {
    rtb_AND1[i] = !BaseEngineController_LS_B.s71_DataTypeConversion1[i];
  }

  /* End of Logic: '<S22>/Logical Operator3' */

  /* Sum: '<S752>/    ' incorporates:
   *  Sum: '<S752>/      '
   */
  rtb_Switch_kj = rtb_AND1[0];
  for (i = 0; i < 7; i++) {
    rtb_Switch_kj += (uint32_T)rtb_AND1[1 + i];
  }

  /* End of Sum: '<S752>/    ' */

  /* RelationalOperator: '<S779>/Compare' incorporates:
   *  Constant: '<S779>/Constant'
   *  Sum: '<S752>/    '
   */
  rtb_Compare_bx = (((uint8_T)rtb_Switch_kj >= 1));

  /* Outputs for Enabled SubSystem: '<S22>/PassThrough4' incorporates:
   *  EnablePort: '<S70>/Enable'
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

    /* DataTypeConversion: '<S70>/Data Type Conversion' */
    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_B.s70_DataTypeConversion[i] =
        ((BaseEngineController_LS_B.s82_CutArray[i] != 0));
    }

    /* End of DataTypeConversion: '<S70>/Data Type Conversion' */
  } else {
    if (BaseEngineController_LS_DWork.s22_PassThrough4_MODE) {
      /* Disable for Outport: '<S70>/Out1' */
      for (i = 0; i < 8; i++) {
        BaseEngineController_LS_B.s70_DataTypeConversion[i] = FALSE;
      }

      /* End of Outport: '<S70>/Out1' */
      BaseEngineController_LS_DWork.s22_PassThrough4_MODE = FALSE;
    }
  }

  /* End of Logic: '<S22>/Logical Operator' */
  /* End of Outputs for SubSystem: '<S22>/PassThrough4' */

  /* Logic: '<S22>/Logical Operator2' */
  for (i = 0; i < 8; i++) {
    BaseEngineController_LS_B.s22_LogicalOperator2[i] =
      !BaseEngineController_LS_B.s70_DataTypeConversion[i];
  }

  /* End of Logic: '<S22>/Logical Operator2' */

  /* Sum: '<S752>/      ' incorporates:
   *  Sum: '<S752>/    '
   */
  rtb_Switch_kj = BaseEngineController_LS_B.s22_LogicalOperator2[0];
  for (i = 0; i < 7; i++) {
    rtb_Switch_kj += (uint32_T)BaseEngineController_LS_B.s22_LogicalOperator2[1
      + i];
  }

  /* End of Sum: '<S752>/      ' */

  /* RelationalOperator: '<S780>/Compare' incorporates:
   *  Constant: '<S780>/Constant'
   *  Sum: '<S752>/      '
   */
  rtb_Compare_d = (((uint8_T)rtb_Switch_kj >= 1));

  /* RelationalOperator: '<S781>/Compare' incorporates:
   *  Constant: '<S781>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S752>/motohawk_data_read3'
   */
  rtb_Compare_g = ((((uint8_T)EncoderState_DataStore()) >= 3));

  /* S-Function (motohawk_sfun_fault_status): '<S752>/motohawk_fault_status4'
   *
   * Regarding '<S752>/motohawk_fault_status4':
     Status : "Active"
   */
  {
    extern boolean_T IsFaultActive(uint32_T fault);
    rtb_motohawk_fault_status4_gd3 = IsFaultActive(36);
  }

  /* S-Function (motohawk_sfun_send_canmsgs): '<S752>/Send CAN Messages' */
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
        if (BaseEngineController_LS_B.s92_FAN1 < 0.0000000000F) {
          tmp6 = (uint8_T)(0U);
        } else if (BaseEngineController_LS_B.s92_FAN1 > 1.0000000000F) {
          tmp6 = (uint8_T)(1U);
        } else {
          tmp6 = (uint8_T)(BaseEngineController_LS_B.s92_FAN1 != 0);
        }

        if (BaseEngineController_LS_B.s92_FAN2 < 0.0000000000F) {
          tmp7 = (uint8_T)(0U);
        } else if (BaseEngineController_LS_B.s92_FAN2 > 1.0000000000F) {
          tmp7 = (uint8_T)(1U);
        } else {
          tmp7 = (uint8_T)(BaseEngineController_LS_B.s92_FAN2 != 0);
        }

        tmp8 = (uint8_T)(FALSE != 0);
        tmp9 = (uint8_T)(rtb_motohawk_data_read2_lg != 0);
        tmp10 = (uint8_T)(rtb_motohawk_fault_action_o != 0);
        tmp11 = (uint8_T)(rtb_motohawk_fault_action1_a != 0);
        tmp12 = (uint8_T)(rtb_motohawk_fault_status2_f2 != 0);
        tmp13 = (uint8_T)(rtb_motohawk_fault_status1_i != 0);
        if (rtb_Compare_bx > 1U) {
          tmp14 = (uint8_T)(1U);
        } else {
          tmp14 = (uint8_T)(rtb_Compare_bx != 0);
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

        tmp17 = (uint8_T)(BaseEngineController_LS_B.s92_AC != 0);
        tmp18 = (uint8_T)(FALSE != 0);
        tmp19 = (uint8_T)(rtb_motohawk_fault_status4_gd3 != 0);
        tmp20 = (uint8_T)(FALSE != 0);
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

  /* Product: '<S753>/Product' incorporates:
   *  Constant: '<S753>/Constant1'
   *  Saturate: '<S753>/Saturation'
   */
  rtb_Product_hd = BaseEngineController_LS_B.s389_MultiportSwitch * 60.0 /
    (BaseEngineController_LS_B.s536_Sum1 >= 0.01 ?
     BaseEngineController_LS_B.s536_Sum1 : 0.01);

  /* S-Function (motohawk_sfun_send_canmsgs): '<S753>/Send CAN Messages' */
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
        if (BaseEngineController_LS_B.s389_MultiportSwitch < 0.0000000000F) {
          tmp1 = (uint16_T)(0U);
        } else if (BaseEngineController_LS_B.s389_MultiportSwitch >
                   3276.7500000000F) {
          tmp1 = (uint16_T)(65535U);
        } else {
          tmp1 = (uint16_T)(BaseEngineController_LS_B.s389_MultiportSwitch *
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
        tmp5 = (uint8_T)((Placeholder_ClutchSw_DataStore()) != 0);
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

  /* S-Function (motohawk_sfun_data_read): '<S754>/motohawk_data_read2' incorporates:
   *  Constant: '<S754>/Constant5'
   */
  rtb_motohawk_data_read2_m = InjMPW_DataStore()[(uint32_T)1.0];

  /* S-Function (motohawk_sfun_data_read): '<S754>/motohawk_data_read1' incorporates:
   *  Constant: '<S754>/Constant4'
   */
  rtb_motohawk_data_read1_ka = InjDC_DataStore()[(uint32_T)1.0];

  /* S-Function (motohawk_sfun_send_canmsgs): '<S754>/Send CAN Messages' */
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

        if (BaseEngineController_LS_B.s477_Lambda < -64.0000000000F) {
          tmp1 = (uint8_T)(0U);
        } else if (BaseEngineController_LS_B.s477_Lambda > 63.5000000000F) {
          tmp1 = (uint8_T)(255U);
        } else {
          tmp1 = (uint8_T)((BaseEngineController_LS_B.s477_Lambda -
                            (-64.0000000000F)) * (2.0000000000F));
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

  /* S-Function (motohawk_sfun_data_read): '<S755>/motohawk_data_read' */
  rtb_motohawk_data_read_bv = BARO_DataStore();

  /* S-Function Block: <S788>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s788_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_hp = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S788>/Product' incorporates:
   *  MinMax: '<S788>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S788>/motohawk_calibration'
   */
  rtb_Switch_hp /= (rtb_Switch_hp >= (Flex_Filt_DataStore())) || rtIsNaN
    ((Flex_Filt_DataStore())) ? rtb_Switch_hp : (Flex_Filt_DataStore());

  /* Sum: '<S789>/Sum1' incorporates:
   *  Constant: '<S789>/Constant'
   *  Product: '<S789>/Product'
   *  Product: '<S789>/Product1'
   *  Sum: '<S789>/Sum'
   *  UnitDelay: '<S789>/Unit Delay'
   */
  rtb_Sum1_kv = (1.0 - rtb_Switch_hp) *
    BaseEngineController_LS_DWork.s789_UnitDelay_DSTATE +
    BaseEngineController_LS_B.s558_Merge * rtb_Switch_hp;

  /* Outputs for Enabled SubSystem: '<S384>/Capture IAT At Startup' incorporates:
   *  EnablePort: '<S429>/Enable'
   */
  if (rtb_RelOp_d) {
    if (!BaseEngineController_LS_DWork.s384_CaptureIATAtStartup_MODE) {
      /* InitializeConditions for UnitDelay: '<S429>/Unit Delay' */
      BaseEngineController_LS_DWork.s429_UnitDelay_DSTATE = 0;
      BaseEngineController_LS_DWork.s384_CaptureIATAtStartup_MODE = TRUE;
    }

    /* Sum: '<S429>/Sum' incorporates:
     *  Constant: '<S429>/Constant'
     *  UnitDelay: '<S429>/Unit Delay'
     */
    rtb_Add_k = (int8_T)(BaseEngineController_LS_DWork.s429_UnitDelay_DSTATE + 1);

    /* Sum: '<S429>/Add' incorporates:
     *  Constant: '<S429>/TwoSampleBuffer ToIgnore'
     *  S-Function (motohawk_sfun_calibration): '<S429>/motohawk_calibration'
     */
    rtb_Sum_l3 = (int8_T)(((int8_T)(IAT_KeyUp_Count_DataStore())) + 2);

    /* RelationalOperator: '<S429>/Relational Operator' */
    rtb_LogicalOperator6_jl = (rtb_Add_k <= rtb_Sum_l3);

    /* Switch: '<S429>/Switch' */
    if (rtb_LogicalOperator6_jl) {
      rtb_Sum_l3 = rtb_Add_k;
    }

    /* End of Switch: '<S429>/Switch' */

    /* Sum: '<S429>/Add1' incorporates:
     *  Constant: '<S429>/TwoSampleBuffer ToIgnore'
     */
    rtb_Add1_k = (int8_T)(rtb_Sum_l3 - 2);

    /* Logic: '<S429>/Logical Operator' incorporates:
     *  Constant: '<S429>/TwoSampleBuffer ToIgnore'
     *  RelationalOperator: '<S429>/Relational Operator1'
     */
    rtb_LogicalOperator_g5 = (rtb_LogicalOperator6_jl && (rtb_Add_k > 2));

    /* Outputs for Enabled SubSystem: '<S429>/Collect Average' */
    BaseEngineController_LS_CollectAverage(rtb_LogicalOperator_g5, rtb_Add1_k,
      BaseEngineController_LS_B.s631_Merge,
      &BaseEngineController_LS_B.s429_CollectAverage,
      &BaseEngineController_LS_DWork.s429_CollectAverage);

    /* End of Outputs for SubSystem: '<S429>/Collect Average' */

    /* Update for UnitDelay: '<S429>/Unit Delay' */
    BaseEngineController_LS_DWork.s429_UnitDelay_DSTATE = rtb_Sum_l3;
  } else {
    if (BaseEngineController_LS_DWork.s384_CaptureIATAtStartup_MODE) {
      /* Disable for Enabled SubSystem: '<S429>/Collect Average' */
      BaseEngineController_LS_CollectAverage_Disable
        (&BaseEngineController_LS_DWork.s429_CollectAverage);

      /* End of Disable for SubSystem: '<S429>/Collect Average' */
      BaseEngineController_LS_DWork.s384_CaptureIATAtStartup_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S384>/Capture IAT At Startup' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S755>/Send CAN Messages' */
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

        if (BaseEngineController_LS_B.s429_CollectAverage.s391_Product <
            -50.0000000000F) {
          tmp5 = (uint8_T)(0U);
        } else if (BaseEngineController_LS_B.s429_CollectAverage.s391_Product >
                   205.0000000000F) {
          tmp5 = (uint8_T)(255U);
        } else {
          tmp5 = (uint8_T)
            (BaseEngineController_LS_B.s429_CollectAverage.s391_Product -
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

  /* S-Function Block: <S791>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s791_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_hp = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S791>/Product' incorporates:
   *  MinMax: '<S791>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S791>/motohawk_calibration'
   */
  rtb_Switch_hp /= (rtb_Switch_hp >= (APP_Filt_DataStore())) || rtIsNaN
    ((APP_Filt_DataStore())) ? rtb_Switch_hp : (APP_Filt_DataStore());

  /* Sum: '<S793>/Sum1' incorporates:
   *  Constant: '<S793>/Constant'
   *  Product: '<S793>/Product'
   *  Product: '<S793>/Product1'
   *  Sum: '<S793>/Sum'
   *  UnitDelay: '<S793>/Unit Delay'
   */
  rtb_Sum1_mn = (1.0 - rtb_Switch_hp) *
    BaseEngineController_LS_DWork.s793_UnitDelay_DSTATE +
    BaseEngineController_LS_B.s430_Switch1 * rtb_Switch_hp;

  /* S-Function Block: <S790>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s790_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_hp = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S790>/Product' incorporates:
   *  MinMax: '<S790>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S790>/motohawk_calibration'
   */
  rtb_Switch_hp /= (rtb_Switch_hp >= (ETCReq_Filt_DataStore())) || rtIsNaN
    ((ETCReq_Filt_DataStore())) ? rtb_Switch_hp : (ETCReq_Filt_DataStore());

  /* Sum: '<S792>/Sum1' incorporates:
   *  Constant: '<S792>/Constant'
   *  Product: '<S792>/Product'
   *  Product: '<S792>/Product1'
   *  Sum: '<S792>/Sum'
   *  UnitDelay: '<S792>/Unit Delay'
   */
  rtb_Sum1_mw = (1.0 - rtb_Switch_hp) *
    BaseEngineController_LS_DWork.s792_UnitDelay_DSTATE +
    BaseEngineController_LS_B.s445_Sum2 * rtb_Switch_hp;

  /* S-Function (motohawk_sfun_fault_status): '<S759>/motohawk_fault_status9'
   *
   * Regarding '<S759>/motohawk_fault_status9':
     Status : "Active"
   */
  {
    extern boolean_T IsFaultActive(uint32_T fault);
    rtb_motohawk_fault_status9 = IsFaultActive(16);
  }

  /* Logic: '<S759>/Logical Operator3' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S759>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S759>/motohawk_fault_status10'
   */
  rtb_LogicalOperator3_m = ((IsFaultActive(9) || IsFaultActive(8)));

  /* Logic: '<S759>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S759>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S759>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_d1 = ((IsFaultActive(15) || IsFaultActive(14)));

  /* Logic: '<S759>/Logical Operator2' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S759>/motohawk_fault_status5'
   *  S-Function (motohawk_sfun_fault_status): '<S759>/motohawk_fault_status6'
   */
  rtb_LogicalOperator2_p1 = ((IsFaultActive(57) || IsFaultActive(58)));

  /* Logic: '<S759>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S759>/motohawk_fault_status4'
   *  S-Function (motohawk_sfun_fault_status): '<S759>/motohawk_fault_status7'
   */
  rtb_LogicalOperator4_c = ((IsFaultActive(141) || IsFaultActive(140)));

  /* Logic: '<S759>/Logical Operator5' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S759>/motohawk_fault_status11'
   *  S-Function (motohawk_sfun_fault_status): '<S759>/motohawk_fault_status8'
   */
  rtb_LogicalOperator5_g = ((IsFaultActive(147) || IsFaultActive(146)));

  /* S-Function (motohawk_sfun_data_read): '<S759>/motohawk_data_read1' */
  rtb_motohawk_data_read1_pg = ETB_Curr_Flt_DataStore();

  /* S-Function (motohawk_sfun_fault_status): '<S759>/motohawk_fault_status12'
   *
   * Regarding '<S759>/motohawk_fault_status12':
     Status : "Active"
   */
  {
    extern boolean_T IsFaultActive(uint32_T fault);
    rtb_motohawk_fault_status12 = IsFaultActive(148);
  }

  /* S-Function (motohawk_sfun_send_canmsgs): '<S759>/Send CAN Messages' */
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

        if (BaseEngineController_LS_B.s717_Merge < 0.0000000000F) {
          tmp2 = (uint8_T)(0U);
        } else if (BaseEngineController_LS_B.s717_Merge > 100.0000350000F) {
          tmp2 = (uint8_T)(255U);
        } else {
          tmp2 = (uint8_T)(BaseEngineController_LS_B.s717_Merge * (2.5499991075F));
        }

        if (BaseEngineController_LS_B.s734_Merge < 0.0000000000F) {
          tmp3 = (uint8_T)(0U);
        } else if (BaseEngineController_LS_B.s734_Merge > 100.0000350000F) {
          tmp3 = (uint8_T)(255U);
        } else {
          tmp3 = (uint8_T)(BaseEngineController_LS_B.s734_Merge * (2.5499991075F));
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

  /* S-Function (motohawk_sfun_data_read): '<S756>/motohawk_data_read' */
  rtb_motohawk_data_read_ld = BaseRevLimit_DataStore();

  /* Logic: '<S756>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S756>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S756>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S756>/motohawk_fault_status3'
   *  S-Function (motohawk_sfun_fault_status): '<S756>/motohawk_fault_status4'
   */
  rtb_LogicalOperator_bi = ((IsFaultActive(141) || IsFaultActive(140) ||
    IsFaultActive(147) || IsFaultActive(146)));

  /* Logic: '<S756>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S756>/motohawk_fault_status5'
   *  S-Function (motohawk_sfun_fault_status): '<S756>/motohawk_fault_status7'
   */
  rtb_LogicalOperator1_jx = ((IsFaultActive(38) || IsFaultActive(37)));

  /* Logic: '<S756>/Logical Operator2' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S756>/motohawk_fault_status6'
   *  S-Function (motohawk_sfun_fault_status): '<S756>/motohawk_fault_status8'
   */
  rtb_LogicalOperator2_ps = ((IsFaultActive(68) || IsFaultActive(67)));

  /* Logic: '<S756>/Logical Operator3' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S756>/motohawk_fault_status10'
   *  S-Function (motohawk_sfun_fault_status): '<S756>/motohawk_fault_status9'
   */
  rtb_LogicalOperator3_nj = ((IsFaultActive(129) || IsFaultActive(128)));

  /* Logic: '<S756>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S756>/motohawk_fault_status11'
   *  S-Function (motohawk_sfun_fault_status): '<S756>/motohawk_fault_status12'
   */
  rtb_LogicalOperator4_n = ((IsFaultActive(114) || IsFaultActive(113)));

  /* Logic: '<S756>/Logical Operator5' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S756>/motohawk_fault_status13'
   *  S-Function (motohawk_sfun_fault_status): '<S756>/motohawk_fault_status14'
   */
  rtb_LogicalOperator5_cx = ((IsFaultActive(78) || IsFaultActive(77)));

  /* S-Function (motohawk_sfun_send_canmsgs): '<S756>/Send CAN Messages' */
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
        if (rtb_motohawk_data_read_ld < 0) {
          tmp1 = (uint16_T)(0U);
        } else if (rtb_motohawk_data_read_ld > 25599) {
          tmp1 = (uint16_T)(65534U);
        } else {
          tmp1 = (uint16_T)(rtb_motohawk_data_read_ld * (2));
        }

        if (rtb_motohawk_data_read_ld < 0) {
          tmp2 = (uint16_T)(0U);
        } else if (rtb_motohawk_data_read_ld > 25599) {
          tmp2 = (uint16_T)(65534U);
        } else {
          tmp2 = (uint16_T)(rtb_motohawk_data_read_ld * (2));
        }

        tmp3 = (uint8_T)(0U);
        tmp4 = (uint8_T)(0U);
        tmp5 = (uint8_T)(rtb_LogicalOperator_bi != 0);
        tmp6 = (uint8_T)(rtb_LogicalOperator1_jx != 0);
        tmp7 = (uint8_T)(rtb_LogicalOperator2_ps != 0);
        tmp8 = (uint8_T)(rtb_LogicalOperator3_nj != 0);
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

  /* S-Function (motohawk_sfun_send_canmsgs): '<S757>/Send CAN Messages' */
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

  /* S-Function (motohawk_sfun_send_canmsgs): '<S758>/Send CAN Messages' */
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
        tmp0 = (uint16_T)(0U);
        tmp1 = (uint16_T)(0U);
        tmp2 = (uint8_T)(0U);
        tmp3 = (uint8_T)(0U);
        tmp4 = (uint8_T)(50U);
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

  /* S-Function Block: <S423>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (SysVolt09In_DataStore()) = BaseEngineController_LS_B.s613_Merge;
    (SysVolt09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s613_Merge, (SysVolt09IdxArr_DataStore()), 9,
       (SysVolt09Idx_DataStore()));
    BaseEngineController_LS_B.s423_motohawk_prelookup = (SysVolt09Idx_DataStore());
  }

  /* S-Function (motohawk_sfun_trigger): '<S14>/motohawk_trigger1' */
  /* Enable for Trigger_FGND_5XRTI_PERIODIC_11692p0001 */
  if (BaseEngineController_LS_DWork.s14_motohawk_trigger1_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s14_motohawk_trigger1_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S14>/motohawk_trigger' */
  /* Enable for Trigger_FGND_5XRTI_PERIODIC_11691p0001 */
  if (BaseEngineController_LS_DWork.s14_motohawk_trigger_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s14_motohawk_trigger_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S13>/motohawk_trigger' */
  /* Enable for Trigger_FGND_5XRTI_PERIODIC_10731p0011 */
  if (BaseEngineController_LS_DWork.s13_motohawk_trigger_DWORK1 == 0) {
    /* Enable for function-call system: '<S13>/Coil Control' */

    /* Enable for Atomic SubSystem: '<S794>/EST Enable TDC Counter' */

    /* Level2 S-Function Block: '<S799>/motohawk_trigger1' (motohawk_sfun_trigger) */

    /* Enable for Trigger_FGND_TDC_EVENT_10217p0009 */
    BaseEngineController_LS_DWork.s799_motohawk_trigger1_DWORK1 = 1;

    /* End of Enable for SubSystem: '<S794>/EST Enable TDC Counter' */
    BaseEngineController_LS_DWork.s13_motohawk_trigger_DWORK1 = 1;
  }

  /* If: '<S825>/If' incorporates:
   *  Inport: '<S826>/In1'
   *  Inport: '<S827>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S825>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S825>/override_enable'
   */
  if ((FAN1_PWM_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S825>/NewValue' incorporates:
     *  ActionPort: '<S826>/Action Port'
     */
    rtb_DataTypeConversion1_d = (FAN1_PWM_new_DataStore());

    /* End of Outputs for SubSystem: '<S825>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S825>/OldValue' incorporates:
     *  ActionPort: '<S827>/Action Port'
     */
    rtb_DataTypeConversion1_d = BaseEngineController_LS_B.s92_FAN1;

    /* End of Outputs for SubSystem: '<S825>/OldValue' */
  }

  /* End of If: '<S825>/If' */

  /* Product: '<S822>/Product' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S822>/motohawk_calibration'
   */
  rtb_DataTypeConversion1_d *= (FAN1_PWMGain_DataStore());

  /* Sum: '<S822>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S822>/motohawk_calibration1'
   */
  rtb_Switch_hp = rtb_DataTypeConversion1_d + (FAN1_PWMOffset_DataStore());

  /* MinMax: '<S824>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S822>/motohawk_calibration2'
   */
  rtb_Switch_hp = (rtb_Switch_hp >= (FAN1_PWMMinLimit_DataStore())) || rtIsNaN
    ((FAN1_PWMMinLimit_DataStore())) ? rtb_Switch_hp :
    (FAN1_PWMMinLimit_DataStore());

  /* MinMax: '<S824>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S822>/motohawk_calibration3'
   */
  BaseEngineController_LS_B.s824_MinMax1 = (rtb_Switch_hp <=
    (FAN1_PWMMaxLimit_DataStore())) || rtIsNaN((FAN1_PWMMaxLimit_DataStore())) ?
    rtb_Switch_hp : (FAN1_PWMMaxLimit_DataStore());

  /* Gain: '<S822>/Convert to integer 14-bit PWM resolution' */
  rtb_Switch_hp = 40.95 * BaseEngineController_LS_B.s824_MinMax1;

  /* DataTypeConversion: '<S822>/Data Type Conversion3' */
  if (rtb_Switch_hp < 32768.0) {
    if (rtb_Switch_hp >= -32768.0) {
      rtb_DataTypeConversion3_c = (int16_T)rtb_Switch_hp;
    } else {
      rtb_DataTypeConversion3_c = MIN_int16_T;
    }
  } else {
    rtb_DataTypeConversion3_c = MAX_int16_T;
  }

  /* End of DataTypeConversion: '<S822>/Data Type Conversion3' */
  /* Gain: '<S822>/Convert to integer 0.01Hz resolution' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S822>/motohawk_calibration4'
   */
  rtb_Switch_hp = 100.0 * (FAN1_PWMFrequency_DataStore());

  /* DataTypeConversion: '<S822>/Data Type Conversion2' */
  if (rtb_Switch_hp < 4.294967296E+9) {
    if (rtb_Switch_hp >= 0.0) {
      rtb_DataTypeConversion2_j = (uint32_T)rtb_Switch_hp;
    } else {
      rtb_DataTypeConversion2_j = 0U;
    }
  } else {
    rtb_DataTypeConversion2_j = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S822>/Data Type Conversion2' */

  /* If: '<S829>/If' incorporates:
   *  Inport: '<S830>/In1'
   *  Inport: '<S831>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S829>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S829>/override_enable'
   */
  if ((FAN2_PWM_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S829>/NewValue' incorporates:
     *  ActionPort: '<S830>/Action Port'
     */
    rtb_DataTypeConversion1_d = (FAN2_PWM_new_DataStore());

    /* End of Outputs for SubSystem: '<S829>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S829>/OldValue' incorporates:
     *  ActionPort: '<S831>/Action Port'
     */
    rtb_DataTypeConversion1_d = BaseEngineController_LS_B.s92_FAN2;

    /* End of Outputs for SubSystem: '<S829>/OldValue' */
  }

  /* End of If: '<S829>/If' */

  /* Product: '<S823>/Product' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S823>/motohawk_calibration'
   */
  rtb_DataTypeConversion1_d *= (FAN2_PWMGain_DataStore());

  /* Sum: '<S823>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S823>/motohawk_calibration1'
   */
  rtb_Switch_hp = rtb_DataTypeConversion1_d + (FAN2_PWMOffset_DataStore());

  /* MinMax: '<S828>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S823>/motohawk_calibration2'
   */
  rtb_Switch_hp = (rtb_Switch_hp >= (FAN2_PWMMinLimit_DataStore())) || rtIsNaN
    ((FAN2_PWMMinLimit_DataStore())) ? rtb_Switch_hp :
    (FAN2_PWMMinLimit_DataStore());

  /* MinMax: '<S828>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S823>/motohawk_calibration3'
   */
  BaseEngineController_LS_B.s828_MinMax1 = (rtb_Switch_hp <=
    (FAN2_PWMMaxLimit_DataStore())) || rtIsNaN((FAN2_PWMMaxLimit_DataStore())) ?
    rtb_Switch_hp : (FAN2_PWMMaxLimit_DataStore());

  /* Gain: '<S823>/Convert to integer 14-bit PWM resolution' */
  rtb_Switch_hp = 40.95 * BaseEngineController_LS_B.s828_MinMax1;

  /* DataTypeConversion: '<S823>/Data Type Conversion3' */
  if (rtb_Switch_hp < 32768.0) {
    if (rtb_Switch_hp >= -32768.0) {
      rtb_DataTypeConversion3_k = (int16_T)rtb_Switch_hp;
    } else {
      rtb_DataTypeConversion3_k = MIN_int16_T;
    }
  } else {
    rtb_DataTypeConversion3_k = MAX_int16_T;
  }

  /* End of DataTypeConversion: '<S823>/Data Type Conversion3' */
  /* Gain: '<S823>/Convert to integer 0.01Hz resolution' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S823>/motohawk_calibration4'
   */
  rtb_Switch_hp = 100.0 * (FAN2_PWMFrequency_DataStore());

  /* DataTypeConversion: '<S823>/Data Type Conversion2' */
  if (rtb_Switch_hp < 4.294967296E+9) {
    if (rtb_Switch_hp >= 0.0) {
      rtb_DataTypeConversion2_e = (uint32_T)rtb_Switch_hp;
    } else {
      rtb_DataTypeConversion2_e = 0U;
    }
  } else {
    rtb_DataTypeConversion2_e = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S823>/Data Type Conversion2' */

  /* S-Function Block: <S471>/motohawk_din Resource: ESTOPPin */
  {
    extern NativeError_S ESTOPPin_DigitalInput_Get(boolean_T *out, uint16_T
      *status);
    ESTOPPin_DigitalInput_Get(&BaseEngineController_LS_B.s471_motohawk_din, NULL);
  }

  /* Logic: '<S497>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S497>/0 = No Inversion 1 = Inversion'
   */
  rtb_LogicalOperator6_jl = BaseEngineController_LS_B.s471_motohawk_din ^
    (ESTOPPolarity_DataStore());

  /* If: '<S504>/If' incorporates:
   *  Inport: '<S505>/In1'
   *  Inport: '<S506>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S504>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S504>/override_enable'
   */
  if ((ESTOP_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S504>/NewValue' incorporates:
     *  ActionPort: '<S505>/Action Port'
     */
    BaseEngineController_LS_B.s504_Merge = (ESTOP_new_DataStore());

    /* End of Outputs for SubSystem: '<S504>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S504>/OldValue' incorporates:
     *  ActionPort: '<S506>/Action Port'
     */
    BaseEngineController_LS_B.s504_Merge = rtb_LogicalOperator6_jl;

    /* End of Outputs for SubSystem: '<S504>/OldValue' */
  }

  /* End of If: '<S504>/If' */

  /* Logic: '<S13>/Logical Operator5' incorporates:
   *  Logic: '<S13>/Logical Operator4'
   */
  rtb_LogicalOperator6_jl = (rtb_RelationalOperator5_fz &&
    (!BaseEngineController_LS_B.s504_Merge));

  /* If: '<S833>/If' incorporates:
   *  Inport: '<S834>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S833>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S833>/override_enable'
   */
  if ((FUELP_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S833>/NewValue' incorporates:
     *  ActionPort: '<S834>/Action Port'
     */
    rtb_LogicalOperator6_jl = (FUELP_new_DataStore());

    /* End of Outputs for SubSystem: '<S833>/NewValue' */
  } else {
  }

  /* End of If: '<S833>/If' */

  /* Logic: '<S832>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S832>/0 = No Inversion 1 = Inversion'
   */
  BaseEngineController_LS_B.s832_LogicalOperator = rtb_LogicalOperator6_jl ^
    (FUELP_Polarity_DataStore());

  /* S-Function Block: <S836>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s836_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_oe = ((real_T) delta) * 0.000001;
  }

  /* S-Function Block: <S464>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s464_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_ds = ((real_T) delta) * 0.000001;
  }

  /* RelationalOperator: '<S463>/RelOp' incorporates:
   *  Constant: '<S463>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S440>/motohawk_data_read'
   */
  rtb_LogicalOperator6_jl = (((uint8_T)EngineState_DataStore()) == 1);

  /* S-Function Block: <S440>/motohawk_ain_read Resource: ECUP */
  {
    extern NativeError_S ECUP_AnalogInput_Get(uint16_T *adc, uint16_T *status);
    ECUP_AnalogInput_Get(&rtb_motohawk_ain_read_o, NULL);
  }

  /* Switch: '<S464>/Switch' incorporates:
   *  Constant: '<S440>/Constant1'
   *  Constant: '<S464>/Constant'
   *  Logic: '<S440>/Logical Operator'
   *  RelationalOperator: '<S440>/Relational Operator'
   *  S-Function (motohawk_sfun_ain_read): '<S440>/motohawk_ain_read'
   *  S-Function (motohawk_sfun_data_read): '<S464>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S464>/motohawk_delta_time'
   *  Sum: '<S464>/Sum'
   */
  if (rtb_LogicalOperator6_jl && (rtb_motohawk_ain_read_o > 150)) {
    BaseEngineController_LS_B.s464_Switch = rtb_motohawk_delta_time_ds +
      TimeSinceStallTimer_DataStore();
  } else {
    BaseEngineController_LS_B.s464_Switch = 0.0;
  }

  /* End of Switch: '<S464>/Switch' */
  /* RelationalOperator: '<S740>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S740>/motohawk_calibration3'
   */
  rtb_Switch1_pb = (BaseEngineController_LS_B.s464_Switch >
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
    rtb_LogicalOperator6_jl = (((uint8_T)EngineState_DataStore()) == 1);

    /* Logic: '<S32>/Logical Operator2' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S32>/motohawk_data_read2'
     */
    rtb_LogicalOperator1_le = !ShutDownTasksComplete_DataStore();

    /* S-Function Block: <S32>/motohawk_ain_read Resource: ECUP */
    {
      extern NativeError_S ECUP_AnalogInput_Get(uint16_T *adc, uint16_T *status);
      ECUP_AnalogInput_Get(&rtb_motohawk_ain_read_a, NULL);
    }

    /* RelationalOperator: '<S32>/Relational Operator' incorporates:
     *  Constant: '<S32>/Constant1'
     *  S-Function (motohawk_sfun_ain_read): '<S32>/motohawk_ain_read'
     */
    rtb_AboveHiTarget_n = (rtb_motohawk_ain_read_a < 150);

    /* Logic: '<S32>/Logical Operator3' */
    BaseEngineController_LS_B.s32_LogicalOperator3 = ((rtb_LogicalOperator6_jl &&
      rtb_LogicalOperator1_le && rtb_AboveHiTarget_n));

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
    if (rtb_AboveHiTarget_n) {
      BaseEngineController_LS_B.s63_Switch = rtb_motohawk_delta_time_dr +
        ETCShutDownTimer_DataStore();
    } else {
      BaseEngineController_LS_B.s63_Switch = 0.0;
    }

    /* End of Switch: '<S63>/Switch' */

    /* UnitDelay: '<S20>/Unit Delay' */
    rtb_DataTypeConversion1_d =
      BaseEngineController_LS_DWork.s20_UnitDelay_DSTATE;

    /* RelationalOperator: '<S20>/Relational Operator5' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S20>/motohawk_calibration4'
     */
    BaseEngineController_LS_B.s20_RelationalOperator5 =
      ((rtb_DataTypeConversion1_d < (ETC_ShutdownLoAdaptError_DataStore())));

    /* RelationalOperator: '<S20>/Relational Operator2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S20>/motohawk_calibration5'
     */
    BaseEngineController_LS_B.s20_RelationalOperator2 =
      ((BaseEngineController_LS_B.s437_Switch2 >
        (ETC_SpringTestHiThresh_DataStore())));

    /* RelationalOperator: '<S20>/Relational Operator3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S20>/motohawk_calibration6'
     */
    BaseEngineController_LS_B.s20_RelationalOperator3 =
      ((BaseEngineController_LS_B.s437_Switch2 <
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
    rtb_LogicalOperator6_jl = (BaseEngineController_LS_B.s27_SetpointMode == 1);

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
      rtb_Switch_om = rtb_motohawk_delta_time_mz + ETC_Tune_Timer_DataStore();
    } else {
      rtb_Switch_om = 0.0;
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
      rtb_DataTypeConversion_b2 = BaseEngineController_LS_B.s92_Throttle;

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
    rtb_DataTypeConversion1_d =
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
    rtb_Switch1_f = (rtb_Product5_o <= 100.0 ? rtb_Product5_o : 100.0) *
      rtb_motohawk_delta_time_jc + rtb_DataTypeConversion1_d;

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
          (ETCTuneFreq_DataStore()) * rtb_Switch_om) * (ETCTuneAmp_DataStore())
          + (ETCTuneAmp_DataStore())) + (ETCTuneOffset_DataStore());
      } else {
        BaseEngineController_LS_B.s31_MultiportSwitch =
          rtb_DataTypeConversion_b2;
      }

      /* End of Switch: '<S54>/Switch' */
      break;

     case 1:
      BaseEngineController_LS_B.s31_MultiportSwitch = rtb_Switch1_f;
      break;

     default:
      BaseEngineController_LS_B.s31_MultiportSwitch = 10.0 +
        ETC_SpringTestHiThresh_DataStore();
      break;
    }

    /* End of MultiPortSwitch: '<S31>/Multiport Switch' */

    /* Sum: '<S31>/Add' */
    rtb_Switch3_p = BaseEngineController_LS_B.s31_MultiportSwitch -
      BaseEngineController_LS_B.s437_Switch2;

    /* Logic: '<S25>/Logical Operator' incorporates:
     *  Constant: '<S25>/Constant1'
     *  RelationalOperator: '<S25>/Relational Operator4'
     *  S-Function (motohawk_sfun_data_read): '<S25>/motohawk_data_read1'
     *  Sum: '<S25>/Add1'
     */
    rtb_LogicalOperator_np = ((rtb_LogicalOperator6_jl && (rtb_Switch3_p <= 5.0
      + ETC_ShutdownLoAdaptError_DataStore())));

    /* S-Function (motohawk_sfun_data_write): '<S25>/motohawk_data_write1' */
    /* Write to Data Storage as scalar: TPSAdaptLoRequest */
    {
      TPSAdaptLoRequest_DataStore() = rtb_LogicalOperator_np;
    }

    /* Abs: '<S26>/Abs' */
    rtb_Product5_o = fabs(rtb_Switch3_p);

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
      SetFaultSuspected(58, rtb_LogicalOperator_di);
      UpdateFault(58);
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
      SetFaultSuspected(56, rtb_RelationalOperator1_hq);
      UpdateFault(56);
    }

    /* RelationalOperator: '<S28>/Relational Operator6' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S28>/motohawk_calibration4'
     *  S-Function (motohawk_sfun_data_read): '<S28>/motohawk_data_read'
     */
    rtb_LogicalOperator6_jl = (TimeSinceStall_DataStore() >
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
    BaseEngineController_LS_B.s28_LogicalOperator = ((rtb_LogicalOperator6_jl &&
      (rtb_motohawk_ain_read_g > 150)));

    /* Logic: '<S20>/Logical Operator' */
    rtb_LogicalOperator6_jl = ((BaseEngineController_LS_B.s27_DC_Override != 0) ||
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
    rtb_DataTypeConversion1_d =
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
    rtb_Switch2_a = (1.0 - rtb_Product5_o) *
      BaseEngineController_LS_DWork.s44_UnitDelay_DSTATE +
      BaseEngineController_LS_B.s437_Switch2 * rtb_Product5_o;

    /* S-Function Block: <S42>/motohawk_delta_time */
    rtb_motohawk_delta_time_hc = 0.005;

    /* Product: '<S42>/Product' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S42>/motohawk_delta_time'
     *  Sum: '<S42>/Sum2'
     */
    BaseEngineController_LS_B.s42_Product = (rtb_Switch2_a -
      rtb_DataTypeConversion1_d) / rtb_motohawk_delta_time_hc;

    /* Sum: '<S35>/Sum1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S35>/motohawk_calibration10'
     *  S-Function (motohawk_sfun_calibration): '<S35>/motohawk_calibration5'
     */
    rtb_Product5_o = (ETCDamperSwitchThresh_DataStore()) -
      (ETCDamperSwitchHyst_DataStore());

    /* RelationalOperator: '<S41>/LT' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S35>/motohawk_calibration5'
     */
    rtb_AboveHiTarget_n = (rtb_Product5_o >= (ETCDamperSwitchThresh_DataStore()));

    /* RelationalOperator: '<S41>/LT1' */
    rtb_BelowLoTarget_d = (rtb_Product5_o <=
      BaseEngineController_LS_B.s42_Product);

    /* CombinatorialLogic: '<S45>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_AboveHiTarget_n != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_d != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_d[0] =
        BaseEngineController_LS_ConstP.pooled809[rowidx];
      rtb_CombinatorialLogic_d[1] =
        BaseEngineController_LS_ConstP.pooled809[rowidx + 4];
    }

    /* Switch: '<S45>/Switch1' incorporates:
     *  UnitDelay: '<S45>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_d[1]) {
      rtb_LogicalOperator1_le = rtb_CombinatorialLogic_d[0];
    } else {
      rtb_LogicalOperator1_le =
        BaseEngineController_LS_DWork.s45_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S45>/Switch1' */

    /* Switch: '<S41>/Switch2' incorporates:
     *  Logic: '<S41>/Logical Operator'
     *  S-Function (motohawk_sfun_calibration): '<S35>/motohawk_calibration5'
     */
    if (!rtb_LogicalOperator1_le) {
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
    rtb_Product1_gw = rtb_Product5_o * BaseEngineController_LS_B.s437_Switch2;

    /* S-Function Block: <S46>/motohawk_delta_time */
    rtb_motohawk_delta_time_oy = 0.005;

    /* Product: '<S46>/Product' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S46>/motohawk_delta_time'
     *  Sum: '<S46>/Sum2'
     */
    BaseEngineController_LS_B.s46_Product = (rtb_Product1_gw -
      rtb_DataTypeConversion_b2) / rtb_motohawk_delta_time_oy;

    /* UnitDelay: '<S47>/Unit Delay' */
    rtb_DataTypeConversion1_d =
      BaseEngineController_LS_DWork.s47_UnitDelay_DSTATE;

    /* Sum: '<S38>/Sum2' */
    BaseEngineController_LS_B.s38_Sum2 =
      BaseEngineController_LS_B.s31_MultiportSwitch -
      BaseEngineController_LS_B.s437_Switch2;

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
      rtb_DataTypeConversion1_d) / rtb_motohawk_delta_time_e0;

    /* Sum: '<S29>/Add' */
    rtb_Add_g1 = BaseEngineController_LS_B.s31_MultiportSwitch -
      BaseEngineController_LS_B.s437_Switch2;

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
    rtb_DataTypeConversion1_d = (((BaseEngineController_LS_B.s47_Product -
      BaseEngineController_LS_B.s46_Product) +
      BaseEngineController_LS_B.s38_Product2) +
      BaseEngineController_LS_B.s48_Switch1) + rtb_motohawk_interpolation_1d_d;

    /* MinMax: '<S51>/MinMax' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S39>/motohawk_calibration'
     */
    rtb_Abs_k = (rtb_DataTypeConversion1_d >= (ETCLwrLim_DataStore())) ||
      rtIsNaN((ETCLwrLim_DataStore())) ? rtb_DataTypeConversion1_d :
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
    rtb_DataTypeConversion1_d = rtb_motohawk_interpolation_1d_on *
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
    rtb_DataTypeConversion1_d = rtb_DataTypeConversion1_d *
      rtb_motohawk_delta_time_l5 + BaseEngineController_LS_B.s48_Switch1;

    /* MinMax: '<S50>/MinMax' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S29>/motohawk_calibration3'
     */
    rtb_Abs_k = (rtb_DataTypeConversion1_d >= (ETCIMin_DataStore())) || rtIsNaN
      ((ETCIMin_DataStore())) ? rtb_DataTypeConversion1_d : (ETCIMin_DataStore());

    /* MinMax: '<S50>/MinMax1' incorporates:
     *  MinMax: '<S50>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S29>/motohawk_calibration4'
     */
    y = (rtb_Abs_k <= (ETCIMax_DataStore())) || rtIsNaN((ETCIMax_DataStore())) ?
      rtb_Abs_k : (ETCIMax_DataStore());

    /* Saturate: '<S56>/Saturation' */
    rtb_Saturation_pd = rtb_Switch_om >= 16000.0 ? 16000.0 : rtb_Switch_om <=
      0.0 ? 0.0 : rtb_Switch_om;

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
    if (rtb_LogicalOperator6_jl) {
      BaseEngineController_LS_B.s20_Switch = 0.0;
    } else {
      BaseEngineController_LS_B.s20_Switch =
        BaseEngineController_LS_B.s51_MinMax1;
    }

    /* End of Switch: '<S20>/Switch' */

    /* Update for UnitDelay: '<S20>/Unit Delay' */
    BaseEngineController_LS_DWork.s20_UnitDelay_DSTATE = rtb_Switch3_p;

    /* Update for UnitDelay: '<S55>/Unit Delay' */
    BaseEngineController_LS_DWork.s55_UnitDelay_DSTATE = rtb_Switch1_f;

    /* Update for UnitDelay: '<S46>/Unit Delay' */
    BaseEngineController_LS_DWork.s46_UnitDelay_DSTATE = rtb_Product1_gw;

    /* Update for UnitDelay: '<S42>/Unit Delay' */
    BaseEngineController_LS_DWork.s42_UnitDelay_DSTATE = rtb_Switch2_a;

    /* Update for UnitDelay: '<S44>/Unit Delay' */
    BaseEngineController_LS_DWork.s44_UnitDelay_DSTATE = rtb_Switch2_a;

    /* Update for UnitDelay: '<S45>/Unit Delay' */
    BaseEngineController_LS_DWork.s45_UnitDelay_DSTATE = rtb_LogicalOperator1_le;

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
  /* Logic: '<S743>/Logical Operator1' incorporates:
   *  Logic: '<S740>/Logical Operator'
   *  Logic: '<S740>/Logical Operator9'
   *  RelationalOperator: '<S740>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S740>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S743>/motohawk_calibration5'
   */
  rtb_RelationalOperator5_fz = ((ETC_CutPower_Permitted_DataStore()) &&
    (BaseEngineController_LS_B.s504_Merge || (rtb_Switch1_pb &&
    (BaseEngineController_LS_B.s20_Switch < (ETC_CutPower_ETC_DataStore())))));

  /* Logic: '<S743>/Logical Operator' */
  rtb_LogicalOperator6_jl = !rtb_RelationalOperator5_fz;

  /* If: '<S837>/If' incorporates:
   *  Inport: '<S838>/In1'
   *  Inport: '<S839>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S837>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S837>/override_enable'
   */
  if ((ETC_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S837>/NewValue' incorporates:
     *  ActionPort: '<S838>/Action Port'
     */
    rtb_DataTypeConversion1_d = (ETC_new_DataStore());

    /* End of Outputs for SubSystem: '<S837>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S837>/OldValue' incorporates:
     *  ActionPort: '<S839>/Action Port'
     */
    rtb_DataTypeConversion1_d = BaseEngineController_LS_B.s20_Switch;

    /* End of Outputs for SubSystem: '<S837>/OldValue' */
  }

  /* End of If: '<S837>/If' */

  /* Switch: '<S743>/Switch' incorporates:
   *  Constant: '<S743>/Constant2'
   *  Product: '<S743>/Product'
   *  S-Function (motohawk_sfun_calibration): '<S743>/motohawk_calibration2'
   *  S-Function (motohawk_sfun_interpolation_1d): '<S743>/motohawk_interpolation_1d'
   *  Sum: '<S743>/Sum'
   */
  if (rtb_RelationalOperator5_fz) {
    rtb_Switch_hp = 0.0;
  } else {
    /* S-Function Block: <S743>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_hr = TableInterpolation1D_real_T
        (BaseEngineController_LS_B.s423_motohawk_prelookup, (real_T *)
         ((ETC_VoltageCompTbl_DataStore())), 9);
      (ETC_VoltageComp_DataStore()) = rtb_motohawk_interpolation_1d_hr;
    }

    rtb_Switch_hp = rtb_DataTypeConversion1_d * rtb_motohawk_interpolation_1d_hr
      + (ETC_Offset_DataStore());
  }

  /* End of Switch: '<S743>/Switch' */

  /* Saturate: '<S743>/Saturation' */
  BaseEngineController_LS_B.s743_ETC = rtb_Switch_hp >= 100.0 ? 100.0 :
    rtb_Switch_hp <= -100.0 ? -100.0 : rtb_Switch_hp;

  /* Abs: '<S743>/Abs' */
  rtb_Switch_hp = fabs(BaseEngineController_LS_B.s743_ETC);

  /* RelationalOperator: '<S743>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S743>/motohawk_calibration3'
   */
  rtb_LogicalOperator1_le = (rtb_Switch_hp > (ETC_OC_MIN_DataStore()));

  /* S-Function (motohawk_sfun_pwm): '<S743>/motohawk_pwm1' */
  ETCPin_PWMOutput_PWMOutput_Outputs(NULL,
    &BaseEngineController_LS_B.s743_motohawk_pwm1);

  /* Abs: '<S743>/Abs1' */
  rtb_DataTypeConversion2_p = (int16_T)
    (BaseEngineController_LS_B.s743_motohawk_pwm1 < 0 ? (int16_T)
     -BaseEngineController_LS_B.s743_motohawk_pwm1 :
     BaseEngineController_LS_B.s743_motohawk_pwm1);

  /* RelationalOperator: '<S743>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S743>/motohawk_calibration1'
   */
  BaseEngineController_LS_B.s743_RelationalOperator4 = (((real_T)
    rtb_DataTypeConversion2_p < (ETC_I_MIN_DataStore())));

  /* Switch: '<S836>/Switch' incorporates:
   *  Constant: '<S836>/Constant'
   *  Logic: '<S743>/Logical Operator4'
   *  S-Function (motohawk_sfun_data_read): '<S836>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S836>/motohawk_delta_time'
   *  Sum: '<S836>/Sum'
   */
  if (rtb_LogicalOperator6_jl && rtb_LogicalOperator1_le &&
      BaseEngineController_LS_B.s743_RelationalOperator4) {
    rtb_Switch_hp = rtb_motohawk_delta_time_oe + ETCOpenFaultTimer_DataStore();
  } else {
    rtb_Switch_hp = 0.0;
  }

  /* End of Switch: '<S836>/Switch' */

  /* RelationalOperator: '<S743>/Relational Operator5' incorporates:
   *  Constant: '<S743>/Constant'
   */
  rtb_RelationalOperator5_f = ((rtb_Switch_hp > 5.0));

  /* S-Function (motohawk_sfun_fault_def): '<S743>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: ETC_Open_Fault */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(57, rtb_RelationalOperator5_f);
    UpdateFault(57);
  }

  /* Gain: '<S743>/Convert to integer 14-bit PWM resolution' */
  rtb_Abs_c = 40.95 * BaseEngineController_LS_B.s743_ETC;

  /* DataTypeConversion: '<S743>/Data Type Conversion3' incorporates:
   *  Gain: '<S743>/Convert to integer 0.01Hz resolution'
   *  S-Function (motohawk_sfun_calibration): '<S743>/motohawk_calibration4'
   */
  rtb_UnitDelay3_mp = 100.0 * (ETC_Frequency_DataStore());
  if (rtb_UnitDelay3_mp < 4.294967296E+9) {
    if (rtb_UnitDelay3_mp >= 0.0) {
      rtb_DataTypeConversion3_j = (uint32_T)rtb_UnitDelay3_mp;
    } else {
      rtb_DataTypeConversion3_j = 0U;
    }
  } else {
    rtb_DataTypeConversion3_j = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S743>/Data Type Conversion3' */

  /* DataTypeConversion: '<S743>/Data Type Conversion4' */
  if (rtb_Abs_c < 32768.0) {
    if (rtb_Abs_c >= -32768.0) {
      rtb_DataTypeConversion4_m = (int16_T)rtb_Abs_c;
    } else {
      rtb_DataTypeConversion4_m = MIN_int16_T;
    }
  } else {
    rtb_DataTypeConversion4_m = MAX_int16_T;
  }

  /* End of DataTypeConversion: '<S743>/Data Type Conversion4' */

  /* Saturate: '<S836>/Saturation' */
  rtb_Saturation_no = rtb_Switch_hp >= 16000.0 ? 16000.0 : rtb_Switch_hp <= 0.0 ?
    0.0 : rtb_Switch_hp;

  /* S-Function (motohawk_sfun_data_write): '<S836>/motohawk_data_write' */
  /* Write to Data Storage as scalar: ETCOpenFaultTimer */
  {
    ETCOpenFaultTimer_DataStore() = rtb_Saturation_no;
  }

  /* If: '<S844>/If' incorporates:
   *  Inport: '<S854>/In1'
   *  Inport: '<S855>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S844>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S844>/override_enable'
   */
  if ((SOI_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S844>/NewValue' incorporates:
     *  ActionPort: '<S854>/Action Port'
     */
    rtb_DataTypeConversion1_d = (SOI_new_DataStore());

    /* End of Outputs for SubSystem: '<S844>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S844>/OldValue' incorporates:
     *  ActionPort: '<S855>/Action Port'
     */
    rtb_DataTypeConversion1_d = BaseEngineController_LS_B.s92_SOI;

    /* End of Outputs for SubSystem: '<S844>/OldValue' */
  }

  /* End of If: '<S844>/If' */

  /* Gain: '<S744>/Gain2' */
  rtb_Abs_c = 16.0 * rtb_DataTypeConversion1_d;

  /* DataTypeConversion: '<S744>/Data Type Conversion2' */
  if (rtb_Abs_c < 32768.0) {
    if (rtb_Abs_c >= -32768.0) {
      rtb_DataTypeConversion2_p = (int16_T)rtb_Abs_c;
    } else {
      rtb_DataTypeConversion2_p = MIN_int16_T;
    }
  } else {
    rtb_DataTypeConversion2_p = MAX_int16_T;
  }

  /* End of DataTypeConversion: '<S744>/Data Type Conversion2' */
  /* Product: '<S21>/Product2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S21>/Injector Gain [ms//mg]'
   */
  for (i = 0; i < 8; i++) {
    rtb_Product1_fj[i] = BaseEngineController_LS_B.s92_FPC[i] *
      (InjGain_DataStore());
  }

  /* End of Product: '<S21>/Product2' */
  /* Sum: '<S21>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S21>/Injector Offset [ms]'
   */
  for (i = 0; i < 8; i++) {
    rtb_Product1_fj[i] += (InjOffset_DataStore());
  }

  /* End of Sum: '<S21>/Sum' */

  /* Fcn: '<S64>/const ref to atm' */
  BaseEngineController_LS_B.s64_constreftoatm =
    (BaseEngineController_LS_B.s571_Merge + BaseEngineController_LS_B.s390_Sum)
    - BaseEngineController_LS_B.s579_Merge;

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
    rtb_Product1_fj[i] *= rtb_motohawk_interpolation_1d3_k;
  }

  /* End of Product: '<S21>/Product3' */

  /* Saturate: '<S21>/Saturation' */
  y = BaseEngineController_LS_B.s536_Sum1 >= 0.01 ?
    BaseEngineController_LS_B.s536_Sum1 : 0.01;

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
      (BaseEngineController_LS_B.s423_motohawk_prelookup, (real_T *)
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
    BaseEngineController_LS_B.s21_MinMax[i] = (rtb_Product1_fj[i] <=
      BaseEngineController_LS_B.s21_Sum1) || rtIsNaN
      (BaseEngineController_LS_B.s21_Sum1) ? rtb_Product1_fj[i] :
      BaseEngineController_LS_B.s21_Sum1;
  }

  /* End of MinMax: '<S21>/MinMax' */
  /* If: '<S845>/If' incorporates:
   *  Inport: '<S856>/In1'
   *  Inport: '<S857>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S845>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S845>/override_enable'
   */
  if ((Mech_PW_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S845>/NewValue' incorporates:
     *  ActionPort: '<S856>/Action Port'
     */
    for (i = 0; i < 8; i++) {
      rtb_Product1_fj[i] = (Mech_PW_new_DataStore())[i];
    }

    /* End of Outputs for SubSystem: '<S845>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S845>/OldValue' incorporates:
     *  ActionPort: '<S857>/Action Port'
     */
    memcpy((void *)&rtb_Product1_fj[0], (void *)
           (&BaseEngineController_LS_B.s21_MinMax[0]), sizeof(real_T) << 3U);

    /* End of Outputs for SubSystem: '<S845>/OldValue' */
  }

  /* End of If: '<S845>/If' */

  /* DataTypeConversion: '<S744>/Data Type Conversion3' incorporates:
   *  Gain: '<S744>/Gain3'
   */
  for (i = 0; i < 8; i++) {
    rtb_UnitDelay3_mp = 1000.0 * rtb_Product1_fj[i];
    if (rtb_UnitDelay3_mp < 4.294967296E+9) {
      if (rtb_UnitDelay3_mp >= 0.0) {
        rtb_Switch_kj = (uint32_T)rtb_UnitDelay3_mp;
      } else {
        rtb_Switch_kj = 0U;
      }
    } else {
      rtb_Switch_kj = MAX_uint32_T;
    }

    rtb_InjectorSequence_o2[i] = rtb_Switch_kj;
  }

  /* End of DataTypeConversion: '<S744>/Data Type Conversion3' */
  /* Gain: '<S744>/Gain5' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S744>/motohawk_calibration9'
   */
  rtb_Abs_c = 1000.0 * (InjectorMaxDuration_DataStore());

  /* DataTypeConversion: '<S744>/Data Type Conversion6' */
  if (rtb_Abs_c < 4.294967296E+9) {
    if (rtb_Abs_c >= 0.0) {
      rtb_DataTypeConversion6 = (uint32_T)rtb_Abs_c;
    } else {
      rtb_DataTypeConversion6 = 0U;
    }
  } else {
    rtb_DataTypeConversion6 = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S744>/Data Type Conversion6' */
  /* If: '<S842>/If' incorporates:
   *  Inport: '<S850>/In1'
   *  Inport: '<S851>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S842>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S842>/override_enable'
   */
  if ((Elec_PW_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S842>/NewValue' incorporates:
     *  ActionPort: '<S850>/Action Port'
     */
    rtb_DataTypeConversion1_d = (Elec_PW_new_DataStore());

    /* End of Outputs for SubSystem: '<S842>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S842>/OldValue' incorporates:
     *  ActionPort: '<S851>/Action Port'
     */
    rtb_DataTypeConversion1_d = BaseEngineController_LS_B.s21_Sum2;

    /* End of Outputs for SubSystem: '<S842>/OldValue' */
  }

  /* End of If: '<S842>/If' */

  /* Gain: '<S744>/Gain1' */
  rtb_Abs_c = 1000.0 * rtb_DataTypeConversion1_d;

  /* DataTypeConversion: '<S744>/Data Type Conversion1' */
  if (rtb_Abs_c < 4.294967296E+9) {
    if (rtb_Abs_c >= 0.0) {
      rtb_DataTypeConversion1_p = (uint32_T)rtb_Abs_c;
    } else {
      rtb_DataTypeConversion1_p = 0U;
    }
  } else {
    rtb_DataTypeConversion1_p = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S744>/Data Type Conversion1' */
  /* If: '<S843>/If' incorporates:
   *  Inport: '<S852>/In1'
   *  Inport: '<S853>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S843>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S843>/override_enable'
   */
  if ((MakeUp_EOI_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S843>/NewValue' incorporates:
     *  ActionPort: '<S852>/Action Port'
     */
    rtb_DataTypeConversion1_d = (MakeUp_EOI_new_DataStore());

    /* End of Outputs for SubSystem: '<S843>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S843>/OldValue' incorporates:
     *  ActionPort: '<S853>/Action Port'
     */
    rtb_DataTypeConversion1_d = BaseEngineController_LS_B.s92_MakeUpEOI;

    /* End of Outputs for SubSystem: '<S843>/OldValue' */
  }

  /* End of If: '<S843>/If' */

  /* Gain: '<S744>/Gain6' */
  rtb_Abs_c = 16.0 * rtb_DataTypeConversion1_d;

  /* DataTypeConversion: '<S744>/Data Type Conversion7' */
  if (rtb_Abs_c < 32768.0) {
    if (rtb_Abs_c >= -32768.0) {
      rtb_DataTypeConversion7 = (int16_T)rtb_Abs_c;
    } else {
      rtb_DataTypeConversion7 = MIN_int16_T;
    }
  } else {
    rtb_DataTypeConversion7 = MAX_int16_T;
  }

  /* End of DataTypeConversion: '<S744>/Data Type Conversion7' */
  /* Gain: '<S744>/Gain7' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S744>/motohawk_calibration6'
   */
  rtb_Abs_c = 1000.0 * (MinMakeUpPW_DataStore());

  /* DataTypeConversion: '<S744>/Data Type Conversion8' */
  if (rtb_Abs_c < 4.294967296E+9) {
    if (rtb_Abs_c >= 0.0) {
      rtb_Sum_hh = (uint32_T)rtb_Abs_c;
    } else {
      rtb_Sum_hh = 0U;
    }
  } else {
    rtb_Sum_hh = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S744>/Data Type Conversion8' */
  /* Gain: '<S744>/Gain8' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S744>/motohawk_calibration1'
   */
  rtb_Abs_c = 1000.0 * (InjectiorMinDuration_DataStore());

  /* DataTypeConversion: '<S744>/Data Type Conversion9' */
  if (rtb_Abs_c < 4.294967296E+9) {
    if (rtb_Abs_c >= 0.0) {
      rtb_UnitDelay_lk = (uint32_T)rtb_Abs_c;
    } else {
      rtb_UnitDelay_lk = 0U;
    }
  } else {
    rtb_UnitDelay_lk = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S744>/Data Type Conversion9' */
  /* Outputs for Atomic SubSystem: '<S744>/Injector Enable Manager' */

  /* S-Function Block: <S849>/motohawk_delta_time */
  rtb_motohawk_delta_time_i = 0.005;

  /* Switch: '<S849>/Switch' incorporates:
   *  Constant: '<S849>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S849>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S849>/motohawk_delta_time'
   *  S-Function (motohawk_sfun_fault_action): '<S841>/motohawk_fault_action'
   *  Sum: '<S849>/Sum'
   */
  if (GetFaultActionStatus(2)) {
    rtb_DataTypeConversion1_d = rtb_motohawk_delta_time_i +
      DelayedEngineShutdownTimer_DataStore();
  } else {
    rtb_DataTypeConversion1_d = 0.0;
  }

  /* End of Switch: '<S849>/Switch' */
  /* RelationalOperator: '<S841>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S841>/motohawk_calibration1'
   */
  rtb_LogicalOperator_iy = (rtb_DataTypeConversion1_d >
    (EngineShutdownDelayTime_DataStore()));

  /* S-Function (motohawk_sfun_data_write): '<S841>/motohawk_data_write' */
  /* Write to Data Storage as scalar: DelayedEngineShutdownAction */
  {
    DelayedEngineShutdownAction_DataStore() = rtb_LogicalOperator_iy;
  }

  /* RelationalOperator: '<S841>/Relational Operator1' incorporates:
   *  Gain: '<S841>/Gain'
   *  S-Function (motohawk_sfun_calibration): '<S841>/motohawk_calibration1'
   */
  rtb_RelationalOperator1_cf = ((rtb_DataTypeConversion1_d > 0.5 *
    (EngineShutdownDelayTime_DataStore())));

  /* S-Function (motohawk_sfun_data_write): '<S841>/motohawk_data_write1' */
  /* Write to Data Storage as scalar: DelayedEngineShutdownWarning */
  {
    DelayedEngineShutdownWarning_DataStore() = rtb_RelationalOperator1_cf;
  }

  /* RelationalOperator: '<S841>/Relational Operator2' incorporates:
   *  Constant: '<S841>/Constant'
   */
  rtb_RelationalOperator2_cd = ((rtb_DataTypeConversion1_d > 0.0));

  /* S-Function (motohawk_sfun_data_write): '<S841>/motohawk_data_write2' */
  /* Write to Data Storage as scalar: EngineShutdownTimerState */
  {
    EngineShutdownTimerState_DataStore() = rtb_RelationalOperator2_cd;
  }

  /* Logic: '<S841>/Logical Operator' */
  rtb_LogicalOperator_iy = !rtb_LogicalOperator_iy;

  /* Logic: '<S841>/Logical Operator2' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S841>/motohawk_data_read'
   */
  rtb_LogicalOperator6_jl = !EngineShutdownAction_DataStore();

  /* S-Function (motohawk_sfun_data_read): '<S841>/motohawk_data_read1' */
  rtb_motohawk_data_read1_iz = ECUP_Enabled_DataStore();

  /* Logic: '<S841>/Logical Operator4' incorporates:
   *  Constant: '<S848>/Constant'
   *  RelationalOperator: '<S848>/RelOp'
   *  S-Function (motohawk_sfun_data_read): '<S841>/motohawk_data_read2'
   */
  rtb_LogicalOperator1_le = !(((uint8_T)EngineState_DataStore()) == 1);

  /* Logic: '<S841>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S841>/motohawk_calibration10'
   *  S-Function (motohawk_sfun_calibration): '<S841>/motohawk_calibration11'
   *  S-Function (motohawk_sfun_calibration): '<S841>/motohawk_calibration12'
   *  S-Function (motohawk_sfun_calibration): '<S841>/motohawk_calibration2'
   *  S-Function (motohawk_sfun_calibration): '<S841>/motohawk_calibration3'
   *  S-Function (motohawk_sfun_calibration): '<S841>/motohawk_calibration4'
   *  S-Function (motohawk_sfun_calibration): '<S841>/motohawk_calibration7'
   *  S-Function (motohawk_sfun_calibration): '<S841>/motohawk_calibration8'
   */
  rtb_LogicalOperator_df[0] = (rtb_LogicalOperator_iy && rtb_LogicalOperator6_jl
    && rtb_motohawk_data_read1_iz && rtb_LogicalOperator1_le &&
    (Injector1Enable_DataStore()));
  rtb_LogicalOperator_df[1] = (rtb_LogicalOperator_iy && rtb_LogicalOperator6_jl
    && rtb_motohawk_data_read1_iz && rtb_LogicalOperator1_le &&
    (Injector2Enable_DataStore()));
  rtb_LogicalOperator_df[2] = (rtb_LogicalOperator_iy && rtb_LogicalOperator6_jl
    && rtb_motohawk_data_read1_iz && rtb_LogicalOperator1_le &&
    (Injector3Enable_DataStore()));
  rtb_LogicalOperator_df[3] = (rtb_LogicalOperator_iy && rtb_LogicalOperator6_jl
    && rtb_motohawk_data_read1_iz && rtb_LogicalOperator1_le &&
    (Injector4Enable_DataStore()));
  rtb_LogicalOperator_df[4] = (rtb_LogicalOperator_iy && rtb_LogicalOperator6_jl
    && rtb_motohawk_data_read1_iz && rtb_LogicalOperator1_le &&
    (Injector5Enable_DataStore()));
  rtb_LogicalOperator_df[5] = (rtb_LogicalOperator_iy && rtb_LogicalOperator6_jl
    && rtb_motohawk_data_read1_iz && rtb_LogicalOperator1_le &&
    (Injector6Enable_DataStore()));
  rtb_LogicalOperator_df[6] = (rtb_LogicalOperator_iy && rtb_LogicalOperator6_jl
    && rtb_motohawk_data_read1_iz && rtb_LogicalOperator1_le &&
    (Injector7Enable_DataStore()));
  rtb_LogicalOperator_df[7] = (rtb_LogicalOperator_iy && rtb_LogicalOperator6_jl
    && rtb_motohawk_data_read1_iz && rtb_LogicalOperator1_le &&
    (Injector8Enable_DataStore()));

  /* Saturate: '<S849>/Saturation' */
  rtb_Saturation_k4 = rtb_DataTypeConversion1_d >= 16000.0 ? 16000.0 :
    rtb_DataTypeConversion1_d <= 0.0 ? 0.0 : rtb_DataTypeConversion1_d;

  /* S-Function (motohawk_sfun_data_write): '<S849>/motohawk_data_write' */
  /* Write to Data Storage as scalar: DelayedEngineShutdownTimer */
  {
    DelayedEngineShutdownTimer_DataStore() = rtb_Saturation_k4;
  }

  /* End of Outputs for SubSystem: '<S744>/Injector Enable Manager' */
  /* Logic: '<S744>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S744>/motohawk_data_read'
   */
  rtb_LogicalOperator6_jl = !ESTOP_DataStore();

  /* If: '<S847>/If' incorporates:
   *  Inport: '<S860>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S847>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S847>/override_enable'
   */
  if ((ESTOP_FuelInj_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S847>/NewValue' incorporates:
     *  ActionPort: '<S860>/Action Port'
     */
    rtb_LogicalOperator6_jl = (ESTOP_FuelInj_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S847>/NewValue' */
  } else {
  }

  /* End of If: '<S847>/If' */

  /* Logic: '<S744>/Logical Operator' */
  for (i = 0; i < 8; i++) {
    rtb_LogicalOperator_df[i] = (rtb_LogicalOperator6_jl && rtb_AND1[i] &&
      rtb_LogicalOperator_df[i]);
  }

  /* End of Logic: '<S744>/Logical Operator' */
  /* If: '<S846>/If' incorporates:
   *  Inport: '<S858>/In1'
   *  Inport: '<S859>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S846>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S846>/override_enable'
   */
  if ((InjEnable_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S846>/NewValue' incorporates:
     *  ActionPort: '<S858>/Action Port'
     */
    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_B.s846_Merge[i] = (InjEnable_new_DataStore())[i];
    }

    /* End of Outputs for SubSystem: '<S846>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S846>/OldValue' incorporates:
     *  ActionPort: '<S859>/Action Port'
     */
    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_B.s846_Merge[i] = rtb_LogicalOperator_df[i];
    }

    /* End of Outputs for SubSystem: '<S846>/OldValue' */
  }

  /* End of If: '<S846>/If' */

  /* S-Function Block: <S744>/Injector Sequence */
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
            rtb_DataTypeConversion2_p;
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
      enable = ((BaseEngineController_LS_B.s846_Merge)[index] &&
                pulse_scheduling_allowed);
      if ((INJ_SequenceType_DataStore()) == 0) {
        if ((enable) !=
            ((&BaseEngineController_LS_DWork.s744_InjectorSequence_DWORK1[0])
             [index])) {
          seq_enable = (enable) ? SEQ_ENABLED : SEQ_DISNEXT;
          SetSeqOutCond((E_ModuleResource) ((INJ_InitialPin_DataStore()) + index),
                        0, seq_enable);
          if ((INJ_Behavior_DataStore()) == 1)
            SetSeqOutCond((E_ModuleResource) ((INJ_InitialPin_DataStore()) +
              index), 1, (enable && 1) ? SEQ_ENABLED : SEQ_DISNEXT);
          (&BaseEngineController_LS_DWork.s744_InjectorSequence_DWORK1[0])[index]
            = enable;
        }

        if ((BaseEngineController_LS_ConstB.s744_DataTypeConversion5) !=
            (BaseEngineController_LS_DWork.s744_InjectorSequence_DWORK2)) {
          SetSeqOutInjPeakTime((E_ModuleResource) ((INJ_InitialPin_DataStore())
            + index), BaseEngineController_LS_ConstB.s744_DataTypeConversion5);
        }

        elec_duration = ((rtb_InjectorSequence_o2)[index]) +
          (rtb_DataTypeConversion1_p);

        /* Primary Pulse */
        DynamicObj.u1AffectedPulse = 0;
        DynamicObj.TimingObj.s2StartAngle = rtb_DataTypeConversion2_p;
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
          DynamicObj.TimingObj.s2StartAngle = rtb_DataTypeConversion2_p + 6400;
          DynamicObj.TimingObj.u4Duration = 0;
          while (DynamicObj.TimingObj.s2StartAngle >= 720*16)
            DynamicObj.TimingObj.s2StartAngle -= 720*16;
          if (TransientInjectorSeqInfo_43[index].primaryComplete) {
            if (elec_duration > TransientInjectorSeqInfo_43[index].
                primaryDuration) {
              makeup_duration = elec_duration -
                TransientInjectorSeqInfo_43[index].primaryDuration;
              if (makeup_duration >= (rtb_Sum_hh)) {
                makeup_duration += (rtb_DataTypeConversion1_p);
                if (rtb_DataTypeConversion6 > 0) {
                  if (makeup_duration > (rtb_DataTypeConversion6))
                    makeup_duration = rtb_DataTypeConversion6;
                }

                makeup_angle = (rtb_DataTypeConversion2_p + 6400) + (int16_T)
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
              ((&BaseEngineController_LS_DWork.s744_InjectorSequence_DWORK1[0])
               [index])) {
            seq_enable = (enable) ? SEQ_ENABLED : SEQ_DISNEXT;
            SetSeqOutCond((E_ModuleResource) ((INJ_InitialPin_DataStore()) +
              index), 0, seq_enable);
            SetSeqOutCond((E_ModuleResource) ((INJ_InitialPin_DataStore()) +
              index), 1, seq_enable);
            (&BaseEngineController_LS_DWork.s744_InjectorSequence_DWORK1[0])
              [index] = enable;
          }

          /* Update peak time only on primary Pulse */
          if ((BaseEngineController_LS_ConstB.s744_DataTypeConversion5) !=
              (BaseEngineController_LS_DWork.s744_InjectorSequence_DWORK2)) {
            SetSeqOutInjPeakTime((E_ModuleResource) ((INJ_InitialPin_DataStore())
              + index), BaseEngineController_LS_ConstB.s744_DataTypeConversion5);
          }

          elec_duration = ((rtb_InjectorSequence_o2)[index]) / 2 +
            (rtb_DataTypeConversion1_p);
          DynamicObj.u1AffectedPulse = 0;
          DynamicObj.TimingObj.s2StartAngle = rtb_DataTypeConversion2_p;
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
            ((&BaseEngineController_LS_DWork.s744_InjectorSequence_DWORK1[0])
             [index])) {
          seq_enable = (enable) ? SEQ_ENABLED : SEQ_DISNEXT;
          SetSeqOutCond((E_ModuleResource) ((INJ_InitialPin_DataStore()) + index),
                        0, seq_enable);
          SetSeqOutCond((E_ModuleResource) ((INJ_InitialPin_DataStore()) + index),
                        1, seq_enable);
          (&BaseEngineController_LS_DWork.s744_InjectorSequence_DWORK1[0])[index]
            = enable;
        }

        if ((BaseEngineController_LS_ConstB.s744_DataTypeConversion5) !=
            (BaseEngineController_LS_DWork.s744_InjectorSequence_DWORK2)) {
          SetSeqOutInjPeakTime((E_ModuleResource) ((INJ_InitialPin_DataStore())
            + index), BaseEngineController_LS_ConstB.s744_DataTypeConversion5);
        }

        elec_duration = ((rtb_InjectorSequence_o2)[index])/2 +
          (rtb_DataTypeConversion1_p);
        DynamicObj.u1AffectedPulse = 0;
        DynamicObj.TimingObj.s2StartAngle = rtb_DataTypeConversion2_p;
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

    BaseEngineController_LS_DWork.s744_InjectorSequence_DWORK2 =
      BaseEngineController_LS_ConstB.s744_DataTypeConversion5;

    /* Output per-cylinder diagnostics */
    {
      for (i=0; i < (EncoderNumCylinders_DataStore()); i++) {
        (BaseEngineController_LS_B.s744_InjectorSequence_o1)[i] =
          InjectorSeqDiagInfo_43[i].u1TXCnt;
      }

      for (i=0; i < (EncoderNumCylinders_DataStore()); i++) {
        (rtb_InjectorSequence_o2)[i] = InjectorSeqDiagInfo_43[i].
          u4TXTimeInMicroSecs;
      }
    }
  }

  /* RelationalOperator: '<S840>/==' incorporates:
   *  Constant: '<S840>/Zero'
   */
  for (i = 0; i < 8; i++) {
    rtb_LogicalOperator_df[i] =
      (BaseEngineController_LS_B.s744_InjectorSequence_o1[i] == 0);
  }

  /* End of RelationalOperator: '<S840>/==' */
  /* S-Function Block: <S840>/motohawk_encoder_average_rpm */
  {
    rtb_motohawk_encoder_average_rpm = GetEncoderResourceAverageRPM();
  }

  /* RelationalOperator: '<S840>/<1' incorporates:
   *  Constant: '<S840>/Zero1'
   *  S-Function (motohawk_sfun_encoder_average_rpm): '<S840>/motohawk_encoder_average_rpm'
   */
  rtb_LogicalOperator6_jl = (rtb_motohawk_encoder_average_rpm > 100);

  /* Logic: '<S840>/AND1' */
  for (i = 0; i < 8; i++) {
    rtb_AND1[i] = (rtb_LogicalOperator_df[i] && rtb_LogicalOperator6_jl &&
                   BaseEngineController_LS_B.s846_Merge[i]);
  }

  /* End of Logic: '<S840>/AND1' */

  /* S-Function (motohawk_sfun_fault_def): '<S840>/motohawk_fault_def' */

  /* Set Fault Suspected Status: Inj1Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(79, rtb_AND1[0]);
    UpdateFault(79);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S840>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: Inj2Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(80, rtb_AND1[1]);
    UpdateFault(80);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S840>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: Inj3Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(81, rtb_AND1[2]);
    UpdateFault(81);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S840>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: Inj4Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(82, rtb_AND1[3]);
    UpdateFault(82);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S840>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: Inj5Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(83, rtb_AND1[4]);
    UpdateFault(83);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S840>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: Inj6Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(84, rtb_AND1[5]);
    UpdateFault(84);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S840>/motohawk_fault_def6' */

  /* Set Fault Suspected Status: Inj7Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(85, rtb_AND1[6]);
    UpdateFault(85);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S840>/motohawk_fault_def7' */

  /* Set Fault Suspected Status: Inj8Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(86, rtb_AND1[7]);
    UpdateFault(86);
  }

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
  rtb_Abs_c = ((real_T)rtb_motohawk_fault_action3 * 3.0 + (real_T)
               rtb_motohawk_fault_action2 * 2.0) + (real_T)
    rtb_motohawk_fault_action1_o;

  /* DataTypeConversion: '<S22>/Data Type Conversion5' */
  if (rtb_Abs_c < 256.0) {
    if (rtb_Abs_c >= 0.0) {
      BaseEngineController_LS_B.s22_DataTypeConversion5 = (uint8_T)rtb_Abs_c;
    } else {
      BaseEngineController_LS_B.s22_DataTypeConversion5 = 0U;
    }
  } else {
    BaseEngineController_LS_B.s22_DataTypeConversion5 = MAX_uint8_T;
  }

  /* End of DataTypeConversion: '<S22>/Data Type Conversion5' */

  /* UnitDelay: '<S468>/Unit Delay' */
  rtb_UnitDelay_lk = BaseEngineController_LS_DWork.s468_UnitDelay_DSTATE;

  /* Sum: '<S468>/Sum' incorporates:
   *  Constant: '<S468>/Constant1'
   */
  rtb_Switch_kj = 1U + rtb_UnitDelay_lk;
  if (rtb_Switch_kj < 1U) {
    rtb_Switch_kj = MAX_uint32_T;
  }

  rtb_Sum_hh = rtb_Switch_kj;

  /* End of Sum: '<S468>/Sum' */

  /* RelationalOperator: '<S468>/Relational Operator' incorporates:
   *  Constant: '<S18>/Count'
   */
  rtb_RelationalOperator_jv = (rtb_Sum_hh >= 5U);

  /* S-Function Block: <S466>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (IAT_KeyUp09In_DataStore()) =
      BaseEngineController_LS_B.s429_CollectAverage.s391_Product;
    (IAT_KeyUp09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s429_CollectAverage.s391_Product,
       (IAT_KeyUp09IdxArr_DataStore()), 9, (IAT_KeyUp09Idx_DataStore()));
    rtb_motohawk_prelookup_b2 = (IAT_KeyUp09Idx_DataStore());
  }

  /* S-Function Block: <S385>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (App05In_DataStore()) = BaseEngineController_LS_B.s683_Merge;
    (App05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s683_Merge, (App05IdxArr_DataStore()), 5,
       (App05Idx_DataStore()));
    rtb_motohawk_prelookup_b2 = (App05Idx_DataStore());
  }

  /* S-Function Block: <S425>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (VSPD09In_DataStore()) = BaseEngineController_LS_B.s441_Switch2;
    (VSPD09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s441_Switch2, (VSPD09IdxArr_DataStore()), 9,
       (VSPD09Idx_DataStore()));
    rtb_motohawk_prelookup_b2 = (VSPD09Idx_DataStore());
  }

  /* S-Function Block: <S422>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (RPM05In_DataStore()) = BaseEngineController_LS_B.s536_Sum1;
    (RPM05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_B.s536_Sum1, (RPM05IdxArr_DataStore()), 5,
       (RPM05Idx_DataStore()));
    rtb_motohawk_prelookup_b2 = (RPM05Idx_DataStore());
  }

  /* Sum: '<S433>/Sum3' incorporates:
   *  Constant: '<S433>/kPa Gauge to kPa absolute'
   */
  BaseEngineController_LS_B.s433_Sum3 = (BaseEngineController_LS_B.s571_Merge +
    100.0) - BaseEngineController_LS_B.s587_Merge;

  /* DataTypeConversion: '<S476>/Data Type Conversion8' */
  if (rtIsNaN(BaseEngineController_LS_B.s476_ReadCANMessage2_o5) || rtIsInf
      (BaseEngineController_LS_B.s476_ReadCANMessage2_o5)) {
    rtb_UnitDelay3_mp = 0.0;
  } else {
    rtb_UnitDelay3_mp = fmod(floor
      (BaseEngineController_LS_B.s476_ReadCANMessage2_o5), 256.0);
  }

  BaseEngineController_LS_B.s476_GPS_SatelliteCount = (uint8_T)
    (rtb_UnitDelay3_mp < 0.0 ? (uint8_T)(int32_T)(int8_T)-(int8_T)(uint8_T)
     -rtb_UnitDelay3_mp : (uint8_T)rtb_UnitDelay3_mp);

  /* End of DataTypeConversion: '<S476>/Data Type Conversion8' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S476>/Read CAN Message1' */
  /* MotoHawk Read CAN Message */
  {
    S_CANMessage messageObj;
    extern MHCAN_directslot MHCAN_directslot_RxSlot_8451p0007;
    extern boolean_T MHCAN_getdirect(MHCAN_directslot *directslot, S_CANMessage *
      messageObj);
    boolean_T msg_valid = MHCAN_getdirect(&MHCAN_directslot_RxSlot_8451p0007,
      &messageObj);
    if ((BaseEngineController_LS_B.s476_ReadCANMessage1_o1 + 1) >
        BaseEngineController_LS_B.s476_ReadCANMessage1_o1)
      BaseEngineController_LS_B.s476_ReadCANMessage1_o1++;
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
      BaseEngineController_LS_B.s476_GPS_Latitude = (real_T) tmp0;
      BaseEngineController_LS_B.s476_GPS_Longitude = (real_T) tmp1;
      BaseEngineController_LS_B.s476_ReadCANMessage1_o1 = 0;
    }
  }

  /* DataTypeConversion: '<S476>/Data Type Conversion5' */
  if (rtIsNaN(BaseEngineController_LS_B.s476_ReadCANMessage_o8) || rtIsInf
      (BaseEngineController_LS_B.s476_ReadCANMessage_o8)) {
    rtb_UnitDelay3_mp = 0.0;
  } else {
    rtb_UnitDelay3_mp = fmod(floor
      (BaseEngineController_LS_B.s476_ReadCANMessage_o8), 256.0);
  }

  BaseEngineController_LS_B.s476_GPS_SecondsUTC = (uint8_T)(rtb_UnitDelay3_mp <
    0.0 ? (uint8_T)(int32_T)(int8_T)-(int8_T)(uint8_T)-rtb_UnitDelay3_mp :
    (uint8_T)rtb_UnitDelay3_mp);

  /* End of DataTypeConversion: '<S476>/Data Type Conversion5' */

  /* DataTypeConversion: '<S476>/Data Type Conversion4' */
  if (rtIsNaN(BaseEngineController_LS_B.s476_ReadCANMessage_o7) || rtIsInf
      (BaseEngineController_LS_B.s476_ReadCANMessage_o7)) {
    rtb_UnitDelay3_mp = 0.0;
  } else {
    rtb_UnitDelay3_mp = fmod(floor
      (BaseEngineController_LS_B.s476_ReadCANMessage_o7), 256.0);
  }

  BaseEngineController_LS_B.s476_GPS_MinutesUTC = (uint8_T)(rtb_UnitDelay3_mp <
    0.0 ? (uint8_T)(int32_T)(int8_T)-(int8_T)(uint8_T)-rtb_UnitDelay3_mp :
    (uint8_T)rtb_UnitDelay3_mp);

  /* End of DataTypeConversion: '<S476>/Data Type Conversion4' */

  /* DataTypeConversion: '<S476>/Data Type Conversion3' */
  if (rtIsNaN(BaseEngineController_LS_B.s476_ReadCANMessage_o6) || rtIsInf
      (BaseEngineController_LS_B.s476_ReadCANMessage_o6)) {
    rtb_UnitDelay3_mp = 0.0;
  } else {
    rtb_UnitDelay3_mp = fmod(floor
      (BaseEngineController_LS_B.s476_ReadCANMessage_o6), 256.0);
  }

  BaseEngineController_LS_B.s476_GPS_HoursUTC = (uint8_T)(rtb_UnitDelay3_mp <
    0.0 ? (uint8_T)(int32_T)(int8_T)-(int8_T)(uint8_T)-rtb_UnitDelay3_mp :
    (uint8_T)rtb_UnitDelay3_mp);

  /* End of DataTypeConversion: '<S476>/Data Type Conversion3' */

  /* DataTypeConversion: '<S476>/Data Type Conversion2' */
  if (rtIsNaN(BaseEngineController_LS_B.s476_ReadCANMessage_o5) || rtIsInf
      (BaseEngineController_LS_B.s476_ReadCANMessage_o5)) {
    rtb_UnitDelay3_mp = 0.0;
  } else {
    rtb_UnitDelay3_mp = fmod(floor
      (BaseEngineController_LS_B.s476_ReadCANMessage_o5), 256.0);
  }

  BaseEngineController_LS_B.s476_GPS_DayUTC = (uint8_T)(rtb_UnitDelay3_mp < 0.0 ?
    (uint8_T)(int32_T)(int8_T)-(int8_T)(uint8_T)-rtb_UnitDelay3_mp : (uint8_T)
    rtb_UnitDelay3_mp);

  /* End of DataTypeConversion: '<S476>/Data Type Conversion2' */

  /* DataTypeConversion: '<S476>/Data Type Conversion1' */
  if (rtIsNaN(BaseEngineController_LS_B.s476_ReadCANMessage_o4) || rtIsInf
      (BaseEngineController_LS_B.s476_ReadCANMessage_o4)) {
    rtb_UnitDelay3_mp = 0.0;
  } else {
    rtb_UnitDelay3_mp = fmod(floor
      (BaseEngineController_LS_B.s476_ReadCANMessage_o4), 256.0);
  }

  BaseEngineController_LS_B.s476_GPS_MonthUTC = (uint8_T)(rtb_UnitDelay3_mp <
    0.0 ? (uint8_T)(int32_T)(int8_T)-(int8_T)(uint8_T)-rtb_UnitDelay3_mp :
    (uint8_T)rtb_UnitDelay3_mp);

  /* End of DataTypeConversion: '<S476>/Data Type Conversion1' */

  /* DataTypeConversion: '<S476>/Data Type Conversion' */
  if (rtIsNaN(BaseEngineController_LS_B.s476_ReadCANMessage_o3) || rtIsInf
      (BaseEngineController_LS_B.s476_ReadCANMessage_o3)) {
    rtb_UnitDelay3_mp = 0.0;
  } else {
    rtb_UnitDelay3_mp = fmod(floor
      (BaseEngineController_LS_B.s476_ReadCANMessage_o3), 65536.0);
  }

  BaseEngineController_LS_B.s476_GPS_YearUTC = (uint16_T)(rtb_UnitDelay3_mp <
    0.0 ? (uint16_T)(int32_T)(int16_T)-(int16_T)(uint16_T)-rtb_UnitDelay3_mp :
    (uint16_T)rtb_UnitDelay3_mp);

  /* End of DataTypeConversion: '<S476>/Data Type Conversion' */

  /* DataTypeConversion: '<S477>/Data Type Conversion5' */
  BaseEngineController_LS_B.s477_SensorFaultState =
    ((BaseEngineController_LS_B.s477_ReadCANMessage1_o10 != 0.0));

  /* DataTypeConversion: '<S477>/Data Type Conversion9' */
  if (rtIsNaN(BaseEngineController_LS_B.s477_ReadCANMessage1_o9) || rtIsInf
      (BaseEngineController_LS_B.s477_ReadCANMessage1_o9)) {
    rtb_UnitDelay3_mp = 0.0;
  } else {
    rtb_UnitDelay3_mp = fmod(floor
      (BaseEngineController_LS_B.s477_ReadCANMessage1_o9), 256.0);
  }

  BaseEngineController_LS_B.s477_SensorStatus = (uint8_T)(rtb_UnitDelay3_mp <
    0.0 ? (uint8_T)(int32_T)(int8_T)-(int8_T)(uint8_T)-rtb_UnitDelay3_mp :
    (uint8_T)rtb_UnitDelay3_mp);

  /* End of DataTypeConversion: '<S477>/Data Type Conversion9' */

  /* DataTypeConversion: '<S477>/Data Type Conversion7' */
  BaseEngineController_LS_B.s477_UsingFreeAreCalState =
    ((BaseEngineController_LS_B.s477_ReadCANMessage1_o7 != 0.0));

  /* DataTypeConversion: '<S477>/Data Type Conversion8' */
  BaseEngineController_LS_B.s477_SensorDetectedStatus =
    ((BaseEngineController_LS_B.s477_ReadCANMessage1_o6 != 0.0));

  /* DataTypeConversion: '<S477>/Data Type Conversion4' */
  BaseEngineController_LS_B.s477_SensorFaultState_m =
    ((BaseEngineController_LS_B.s477_ReadCANMessage_o10 != 0.0));

  /* DataTypeConversion: '<S477>/Data Type Conversion3' */
  if (rtIsNaN(BaseEngineController_LS_B.s477_ReadCANMessage_o9) || rtIsInf
      (BaseEngineController_LS_B.s477_ReadCANMessage_o9)) {
    rtb_UnitDelay3_mp = 0.0;
  } else {
    rtb_UnitDelay3_mp = fmod(floor
      (BaseEngineController_LS_B.s477_ReadCANMessage_o9), 256.0);
  }

  BaseEngineController_LS_B.s477_SensorStatus_e = (uint8_T)(rtb_UnitDelay3_mp <
    0.0 ? (uint8_T)(int32_T)(int8_T)-(int8_T)(uint8_T)-rtb_UnitDelay3_mp :
    (uint8_T)rtb_UnitDelay3_mp);

  /* End of DataTypeConversion: '<S477>/Data Type Conversion3' */

  /* DataTypeConversion: '<S477>/Data Type Conversion1' */
  BaseEngineController_LS_B.s477_UsingFreeAreCalState_o =
    ((BaseEngineController_LS_B.s477_ReadCANMessage_o7 != 0.0));

  /* DataTypeConversion: '<S477>/Data Type Conversion' */
  BaseEngineController_LS_B.s477_SensorDetectedStatus_m =
    ((BaseEngineController_LS_B.s477_ReadCANMessage_o6 != 0.0));

  /* S-Function (motohawk_sfun_calibration): '<S474>/motohawk_calibration1' */
  rtb_Abs_c = (Placeholder_CATRaw_DataStore());

  /* S-Function Block: <S601>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s601_motohawk_delta_time_DWORK1, NULL);
    rtb_Abs_c = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S601>/Product' incorporates:
   *  MinMax: '<S601>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S601>/motohawk_calibration'
   */
  rtb_Abs_c /= (rtb_Abs_c >= (SensVoltFilterConst_DataStore())) || rtIsNaN
    ((SensVoltFilterConst_DataStore())) ? rtb_Abs_c :
    (SensVoltFilterConst_DataStore());

  /* Logic: '<S544>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S544>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S544>/motohawk_fault_status4'
   */
  rtb_RelationalOperator5_fz = (IsFaultActive(131) || IsFaultActive(132));

  /* Logic: '<S544>/Logical Operator6' */
  rtb_LogicalOperator6_jl = !rtb_RelationalOperator5_fz;

  /* Logic: '<S544>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S544>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S544>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_le = (IsFaultSuspected(131) || IsFaultSuspected(132));

  /* S-Function Block: <S473>/motohawk_ain3 Resource: SensVoltSensorPin */
  {
    extern NativeError_S SensVoltSensorPin_AnalogInput_Get(uint16_T *adc,
      uint16_T *status);
    SensVoltSensorPin_AnalogInput_Get
      (&BaseEngineController_LS_B.s473_motohawk_ain3, NULL);
  }

  /* DataTypeConversion: '<S544>/Data Type Conversion' */
  rtb_Abs_k = (real_T)BaseEngineController_LS_B.s473_motohawk_ain3;

  /* Product: '<S544>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S544>/motohawk_calibration4'
   */
  rtb_DataTypeConversion1_d = rtb_Abs_k * (SensVoltGain_DataStore());

  /* Sum: '<S544>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S544>/motohawk_calibration5'
   */
  BaseEngineController_LS_B.s544_Sum1 = rtb_DataTypeConversion1_d +
    (SensVoltOfst_DataStore());

  /* UnitDelay: '<S544>/Unit Delay1' */
  rtb_UnitDelay1_c = BaseEngineController_LS_DWork.s544_UnitDelay1_DSTATE;

  /* If: '<S544>/If' incorporates:
   *  Logic: '<S544>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_jl && rtb_LogicalOperator1_le) {
    /* Outputs for IfAction SubSystem: '<S544>/If Action Subsystem' incorporates:
     *  ActionPort: '<S602>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem(rtb_UnitDelay1_c, &rtb_Merge_ht);

    /* End of Outputs for SubSystem: '<S544>/If Action Subsystem' */
  } else if (rtb_RelationalOperator5_fz) {
    /* Outputs for IfAction SubSystem: '<S544>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S603>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem((SensVoltDfltValue_DataStore()),
      &rtb_Merge_ht);

    /* End of Outputs for SubSystem: '<S544>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S544>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S604>/Action Port'
     */
    BaseEngineController_LS_IfActionSubsystem
      (BaseEngineController_LS_B.s544_Sum1, &rtb_Merge_ht);

    /* End of Outputs for SubSystem: '<S544>/If Action Subsystem2' */
  }

  /* End of If: '<S544>/If' */

  /* Sum: '<S606>/Sum1' incorporates:
   *  Constant: '<S606>/Constant'
   *  Product: '<S606>/Product'
   *  Product: '<S606>/Product1'
   *  Sum: '<S606>/Sum'
   *  UnitDelay: '<S606>/Unit Delay'
   */
  rtb_Sum1_m3 = (1.0 - rtb_Abs_c) *
    BaseEngineController_LS_DWork.s606_UnitDelay_DSTATE + rtb_Merge_ht *
    rtb_Abs_c;

  /* If: '<S605>/If' incorporates:
   *  Inport: '<S607>/In1'
   *  Inport: '<S608>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S605>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S605>/override_enable'
   */
  if ((SensVolt_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S605>/NewValue' incorporates:
     *  ActionPort: '<S607>/Action Port'
     */
    BaseEngineController_LS_B.s605_Merge = (SensVolt_new_DataStore());

    /* End of Outputs for SubSystem: '<S605>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S605>/OldValue' incorporates:
     *  ActionPort: '<S608>/Action Port'
     */
    BaseEngineController_LS_B.s605_Merge = rtb_Sum1_m3;

    /* End of Outputs for SubSystem: '<S605>/OldValue' */
  }

  /* End of If: '<S605>/If' */

  /* Outputs for Enabled SubSystem: '<S468>/Triggered Subsystem' incorporates:
   *  EnablePort: '<S469>/Enable'
   */
  if (rtb_RelationalOperator_jv) {
    if (!BaseEngineController_LS_DWork.s468_TriggeredSubsystem_MODE) {
      BaseEngineController_LS_DWork.s468_TriggeredSubsystem_MODE = TRUE;
    }

    /* Outputs for Function Call SubSystem: '<S11>/Diagnostics' */

    /* RelationalOperator: '<S291>/RelOp' incorporates:
     *  Constant: '<S291>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S278>/motohawk_data_read'
     */
    rtb_LogicalOperator6_jl = (((uint8_T)EngineState_DataStore()) == 3);

    /* RelationalOperator: '<S278>/Relational Operator' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S278>/motohawk_calibration'
     */
    rtb_LogicalOperator1_er = (BaseEngineController_LS_B.s550_Merge >= (real_T)
                               ((uint16_T)(ACHighPressureDisable_DataStore())));

    /* Logic: '<S278>/Logical Operator4' incorporates:
     *  Logic: '<S278>/Logical Operator3'
     *  S-Function (motohawk_sfun_fault_status): '<S278>/motohawk_fault_status1'
     *  S-Function (motohawk_sfun_fault_status): '<S278>/motohawk_fault_status4'
     */
    rtb_RelOp_d = !(IsFaultActive(2) || IsFaultActive(3));

    /* Logic: '<S278>/Logical Operator' */
    rtb_LogicalOperator_ct = ((rtb_LogicalOperator6_jl &&
      rtb_LogicalOperator1_er && rtb_RelOp_d));

    /* S-Function (motohawk_sfun_fault_def): '<S278>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: ACChargeHigh_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(0, rtb_LogicalOperator_ct);
      UpdateFault(0);
    }

    /* Logic: '<S278>/Logical Operator1' incorporates:
     *  RelationalOperator: '<S278>/Relational Operator1'
     *  S-Function (motohawk_sfun_calibration): '<S278>/motohawk_calibration2'
     */
    rtb_LogicalOperator1_o = ((rtb_LogicalOperator6_jl &&
      (BaseEngineController_LS_B.s550_Merge <= (real_T)((uint16_T)
      (ACLowPressureDisable_DataStore()))) && rtb_RelOp_d &&
      BaseEngineController_LS_B.s92_AC));

    /* S-Function (motohawk_sfun_fault_def): '<S278>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: ACChargeLow_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(1, rtb_LogicalOperator1_o);
      UpdateFault(1);
    }

    /* Logic: '<S279>/Logical Operator1' incorporates:
     *  Logic: '<S279>/Logical Operator3'
     *  S-Function (motohawk_sfun_fault_status): '<S279>/motohawk_fault_status1'
     *  S-Function (motohawk_sfun_fault_status): '<S279>/motohawk_fault_status4'
     *  S-Function (motohawk_sfun_fault_status): '<S279>/motohawk_fault_status6'
     *  S-Function (motohawk_sfun_fault_status): '<S279>/motohawk_fault_status7'
     */
    rtb_Switch1_pb = !(IsFaultActive(113) || IsFaultActive(114) || IsFaultActive
                       (111) || IsFaultActive(112));

    /* Logic: '<S279>/Logical Operator5' incorporates:
     *  S-Function (motohawk_sfun_fault_status): '<S279>/motohawk_fault_status2'
     *  S-Function (motohawk_sfun_fault_status): '<S279>/motohawk_fault_status3'
     *  S-Function (motohawk_sfun_fault_status): '<S279>/motohawk_fault_status5'
     */
    rtb_LogicalOperator6_jl = (IsFaultActive(117) || IsFaultActive(118) ||
      IsFaultActive(119));

    /* Logic: '<S279>/Logical Operator6' incorporates:
     *  Logic: '<S279>/Logical Operator7'
     *  S-Function (motohawk_sfun_calibration): '<S279>/motohawk_calibration3'
     */
    rtb_LogicalOperator6_jl = !(rtb_LogicalOperator6_jl &&
      (AirflowDiag_MAPIRDiagEnable_DataStore()));

    /* Logic: '<S279>/Logical Operator9' incorporates:
     *  Logic: '<S279>/Logical Operator2'
     *  S-Function (motohawk_sfun_fault_status): '<S279>/motohawk_fault_status10'
     *  S-Function (motohawk_sfun_fault_status): '<S279>/motohawk_fault_status11'
     *  S-Function (motohawk_sfun_fault_status): '<S279>/motohawk_fault_status8'
     *  S-Function (motohawk_sfun_fault_status): '<S279>/motohawk_fault_status9'
     */
    rtb_LogicalOperator1_le = !(IsFaultActive(27) || IsFaultActive(26) ||
      IsFaultActive(23) || IsFaultActive(24));

    /* Abs: '<S279>/Abs' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S279>/motohawk_data_read'
     *  Sum: '<S279>/Sum'
     */
    rtb_DataTypeConversion1_d = fabs(BaseEngineController_LS_B.s511_Merge -
      VEModelMAF_DataStore());

    /* S-Function Block: <S279>/motohawk_interpolation_2d */
    {
      extern int8_T TableInterpolation2D_int8_T(uint16_T row_in, uint16_T col_in,
        int8_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_motohawk_interpolation_2d_m0 = TableInterpolation2D_int8_T
        (BaseEngineController_LS_B.s422_motohawk_prelookup1,
         BaseEngineController_LS_B.s420_motohawk_prelookup1, (int8_T *)
         ((AirflowMimatchThreshMap_DataStore())), 9, 9);
      (AirflowMimatchThresh_DataStore()) = rtb_motohawk_interpolation_2d_m0;
    }

    /* RelationalOperator: '<S279>/Relational Operator' */
    rtb_RelOp_d = (rtb_DataTypeConversion1_d >= (real_T)
                   rtb_motohawk_interpolation_2d_m0);

    /* Logic: '<S279>/Logical Operator4' incorporates:
     *  Constant: '<S292>/Constant'
     *  Logic: '<S279>/Logical Operator8'
     *  RelationalOperator: '<S292>/RelOp'
     *  S-Function (motohawk_sfun_data_read): '<S279>/motohawk_data_read1'
     */
    rtb_LogicalOperator4_mg = ((rtb_Switch1_pb && rtb_LogicalOperator6_jl &&
      rtb_LogicalOperator1_le && rtb_RelOp_d && (((uint8_T)EngineState_DataStore
                                  ()) == 3)));

    /* S-Function (motohawk_sfun_fault_def): '<S279>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: AirflowMismatch_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(17, rtb_LogicalOperator4_mg);
      UpdateFault(17);
    }

    /* S-Function Block: <S293>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s293_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_k = ((real_T) delta) * 0.000001;
    }

    /* Switch: '<S293>/Switch' incorporates:
     *  Constant: '<S293>/Constant'
     *  S-Function (motohawk_sfun_calibration): '<S471>/motohawk_calibration'
     *  S-Function (motohawk_sfun_data_read): '<S293>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S293>/motohawk_delta_time'
     *  Sum: '<S293>/Sum'
     */
    if ((Placeholder_Scramble_DataStore())) {
      rtb_DataTypeConversion1_d = rtb_motohawk_delta_time_k +
        ScrambleTime_DataStore();
    } else {
      rtb_DataTypeConversion1_d = 0.0;
    }

    /* End of Switch: '<S293>/Switch' */
    /* Logic: '<S280>/Logical Operator1' incorporates:
     *  RelationalOperator: '<S280>/Relational Operator1'
     *  S-Function (motohawk_sfun_calibration): '<S280>/motohawk_calibration1'
     *  S-Function (motohawk_sfun_calibration): '<S471>/motohawk_calibration'
     */
    rtb_LogicalOperator1_pp = (((rtb_DataTypeConversion1_d >=
      (DigDiag_ScrambleStuckTime_DataStore())) &&
      (Placeholder_Scramble_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S280>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: ScrambleStuckHigh_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(130, rtb_LogicalOperator1_pp);
      UpdateFault(130);
    }

    /* S-Function Block: <S294>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s294_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_fn = ((real_T) delta) * 0.000001;
    }

    /* Switch: '<S294>/Switch' incorporates:
     *  Constant: '<S294>/Constant'
     *  S-Function (motohawk_sfun_calibration): '<S471>/motohawk_calibration1'
     *  S-Function (motohawk_sfun_data_read): '<S294>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S294>/motohawk_delta_time'
     *  Sum: '<S294>/Sum'
     */
    if ((Placeholder_ClutchSw_DataStore())) {
      rtb_DataTypeConversion_b2 = rtb_motohawk_delta_time_fn +
        ClutchTime_DataStore();
    } else {
      rtb_DataTypeConversion_b2 = 0.0;
    }

    /* End of Switch: '<S294>/Switch' */
    /* Logic: '<S280>/Logical Operator2' incorporates:
     *  RelationalOperator: '<S280>/Relational Operator2'
     *  S-Function (motohawk_sfun_calibration): '<S280>/motohawk_calibration2'
     *  S-Function (motohawk_sfun_calibration): '<S471>/motohawk_calibration1'
     */
    rtb_LogicalOperator2_di3 = (((rtb_DataTypeConversion_b2 >=
      (DigDiag_ClutchStuckTime_DataStore())) && (Placeholder_ClutchSw_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S280>/motohawk_fault_def3' */

    /* Set Fault Suspected Status: ClutchStuckHigh_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(25, rtb_LogicalOperator2_di3);
      UpdateFault(25);
    }

    /* Saturate: '<S293>/Saturation' */
    rtb_Saturation_j = rtb_DataTypeConversion1_d >= 16000.0 ? 16000.0 :
      rtb_DataTypeConversion1_d <= 0.0 ? 0.0 : rtb_DataTypeConversion1_d;

    /* S-Function (motohawk_sfun_data_write): '<S293>/motohawk_data_write' */
    /* Write to Data Storage as scalar: ScrambleTime */
    {
      ScrambleTime_DataStore() = rtb_Saturation_j;
    }

    /* Saturate: '<S294>/Saturation' */
    rtb_Saturation_cp = rtb_DataTypeConversion_b2 >= 16000.0 ? 16000.0 :
      rtb_DataTypeConversion_b2 <= 0.0 ? 0.0 : rtb_DataTypeConversion_b2;

    /* S-Function (motohawk_sfun_data_write): '<S294>/motohawk_data_write' */
    /* Write to Data Storage as scalar: ClutchTime */
    {
      ClutchTime_DataStore() = rtb_Saturation_cp;
    }

    /* Product: '<S283>/Product' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S283>/motohawk_data_read'
     *  S-Function (motohawk_sfun_fault_status): '<S283>/motohawk_fault_status2'
     */
    rtb_Product_nv = (uint16_T)(BankB_Enbl_DataStore() ? IsFaultActive(21) : 0);

    /* Product: '<S283>/Product1' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S283>/motohawk_data_read'
     *  S-Function (motohawk_sfun_fault_status): '<S283>/motohawk_fault_status3'
     */
    rtb_Product1_mc = (uint16_T)(BankB_Enbl_DataStore() ? IsFaultActive(22) : 0);

    /* Logic: '<S283>/Logical Operator1' incorporates:
     *  S-Function (motohawk_sfun_fault_status): '<S283>/motohawk_fault_status'
     *  S-Function (motohawk_sfun_fault_status): '<S283>/motohawk_fault_status1'
     */
    rtb_LogicalOperator6_jl = ((rtb_Product_nv != 0) || (rtb_Product1_mc != 0) ||
      IsFaultActive(19) || IsFaultActive(20) ||
      BaseEngineController_LS_B.s504_Merge);

    /* RelationalOperator: '<S283>/Relational Operator1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S283>/motohawk_calibration3'
     */
    rtb_LogicalOperator1_le = (BaseEngineController_LS_B.s477_MultiportSwitch <
                               (LeanProtect_Threshold_DataStore()));

    /* Logic: '<S283>/Logical Operator4' incorporates:
     *  Constant: '<S300>/Constant'
     *  Logic: '<S283>/Logical Operator3'
     *  RelationalOperator: '<S300>/RelOp'
     *  S-Function (motohawk_sfun_data_read): '<S283>/motohawk_data_read1'
     */
    rtb_LogicalOperator4_l = (((!rtb_LogicalOperator6_jl) &&
      rtb_LogicalOperator1_le && (((uint8_T)EngineState_DataStore()) == 3)));

    /* S-Function (motohawk_sfun_fault_def): '<S283>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: LeanProtect_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(110, rtb_LogicalOperator4_l);
      UpdateFault(110);
    }

    /* Logic: '<S285>/Logical Operator1' incorporates:
     *  Logic: '<S285>/Logical Operator3'
     *  S-Function (motohawk_sfun_fault_status): '<S285>/motohawk_fault_status1'
     *  S-Function (motohawk_sfun_fault_status): '<S285>/motohawk_fault_status4'
     */
    rtb_RelOp_d = !(IsFaultActive(134) || IsFaultActive(135));

    /* RelationalOperator: '<S285>/Relational Operator' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S285>/motohawk_calibration'
     */
    rtb_LogicalOperator6_jl = (BaseEngineController_LS_B.s613_Merge <=
      (LVDiag_AltInop_DataStore()));

    /* Logic: '<S285>/Logical Operator4' incorporates:
     *  Constant: '<S302>/Constant'
     *  RelationalOperator: '<S302>/RelOp'
     *  S-Function (motohawk_sfun_data_read): '<S285>/motohawk_data_read1'
     */
    rtb_LogicalOperator4_le = ((rtb_RelOp_d && rtb_LogicalOperator6_jl &&
      (((uint8_T)EngineState_DataStore()) == 3)));

    /* S-Function (motohawk_sfun_fault_def): '<S285>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: AltInop_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(18, rtb_LogicalOperator4_le);
      UpdateFault(18);
    }

    /* RelationalOperator: '<S285>/Relational Operator1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S285>/motohawk_calibration1'
     */
    rtb_LogicalOperator6_jl = (BaseEngineController_LS_B.s613_Merge >=
      (LVDiag_VoltTooHigh_DataStore()));

    /* Logic: '<S285>/Logical Operator2' incorporates:
     *  Constant: '<S303>/Constant'
     *  RelationalOperator: '<S303>/RelOp'
     *  S-Function (motohawk_sfun_data_read): '<S285>/motohawk_data_read2'
     */
    rtb_LogicalOperator2_e = ((rtb_RelOp_d && rtb_LogicalOperator6_jl &&
      (((uint8_T)EngineState_DataStore()) == 3)));

    /* S-Function (motohawk_sfun_fault_def): '<S285>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: VoltTooHigh_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(152, rtb_LogicalOperator2_e);
      UpdateFault(152);
    }

    /* RelationalOperator: '<S285>/Relational Operator2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S285>/motohawk_calibration2'
     */
    rtb_LogicalOperator6_jl = (BaseEngineController_LS_B.s613_Merge <=
      (LVDiag_VoltLow_DataStore()));

    /* Logic: '<S285>/Logical Operator5' incorporates:
     *  Constant: '<S304>/Constant'
     *  Constant: '<S305>/Constant'
     *  Logic: '<S285>/Logical Operator'
     *  RelationalOperator: '<S304>/RelOp'
     *  RelationalOperator: '<S305>/RelOp'
     *  S-Function (motohawk_sfun_data_read): '<S285>/motohawk_data_read3'
     */
    rtb_LogicalOperator5_kw = ((rtb_RelOp_d && rtb_LogicalOperator6_jl &&
      ((((uint8_T)EngineState_DataStore()) == 3) || (((uint8_T)
      EngineState_DataStore()) == 2))));

    /* S-Function (motohawk_sfun_fault_def): '<S285>/motohawk_fault_def3' */

    /* Set Fault Suspected Status: VoltLow_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(151, rtb_LogicalOperator5_kw);
      UpdateFault(151);
    }

    /* Logic: '<S286>/Logical Operator3' incorporates:
     *  Logic: '<S286>/Logical Operator1'
     *  S-Function (motohawk_sfun_fault_status): '<S286>/motohawk_fault_status'
     *  S-Function (motohawk_sfun_fault_status): '<S286>/motohawk_fault_status1'
     *  S-Function (motohawk_sfun_fault_status): '<S286>/motohawk_fault_status2'
     *  S-Function (motohawk_sfun_fault_status): '<S286>/motohawk_fault_status3'
     *  S-Function (motohawk_sfun_fault_status): '<S286>/motohawk_fault_status4'
     *  S-Function (motohawk_sfun_fault_status): '<S286>/motohawk_fault_status5'
     */
    rtb_RelOp_d = !(IsFaultActive(140) || IsFaultActive(146) || IsFaultActive
                    (141) || IsFaultActive(147) || IsFaultActive(113) ||
                    IsFaultActive(114));

    /* RelationalOperator: '<S306>/RelOp' incorporates:
     *  Constant: '<S306>/Constant'
     */
    rtb_LogicalOperator1_er = (BaseEngineController_LS_B.s453_State == 3);

    /* RelationalOperator: '<S286>/Relational Operator3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S286>/motohawk_calibration2'
     */
    rtb_LogicalOperator6_jl = (BaseEngineController_LS_B.s437_Switch2 <
      (MAP_IR_TPS_CL_DataStore()));

    /* Logic: '<S286>/Logical Operator4' incorporates:
     *  RelationalOperator: '<S286>/Relational Operator4'
     *  S-Function (motohawk_sfun_calibration): '<S286>/motohawk_calibration4'
     */
    rtb_LogicalOperator4_k = ((rtb_RelOp_d && rtb_LogicalOperator1_er &&
      rtb_LogicalOperator6_jl && (BaseEngineController_LS_B.s579_Merge >
      (MAP_IR_HI_DataStore()))));

    /* S-Function (motohawk_sfun_fault_def): '<S286>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: MAP_IR_HI */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(117, rtb_LogicalOperator4_k);
      UpdateFault(117);
    }

    /* RelationalOperator: '<S286>/Relational Operator1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S286>/motohawk_calibration6'
     */
    rtb_LogicalOperator6_jl = (BaseEngineController_LS_B.s437_Switch2 >
      (MAP_IR_TPS_OP_DataStore()));

    /* Logic: '<S286>/Logical Operator2' incorporates:
     *  RelationalOperator: '<S286>/Relational Operator2'
     *  S-Function (motohawk_sfun_calibration): '<S286>/motohawk_calibration5'
     */
    rtb_LogicalOperator2_ip = ((rtb_RelOp_d && rtb_LogicalOperator1_er &&
      rtb_LogicalOperator6_jl && (BaseEngineController_LS_B.s579_Merge <
      (MAP_IR_LO_DataStore()))));

    /* S-Function (motohawk_sfun_fault_def): '<S286>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: MAP_IR_LO */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(118, rtb_LogicalOperator2_ip);
      UpdateFault(118);
    }

    /* RelationalOperator: '<S286>/Relational Operator7' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S286>/motohawk_calibration8'
     */
    rtb_LogicalOperator6_jl = (BaseEngineController_LS_B.s437_Switch2 <
      (MAP_TPS_STUCK_DataStore()));

    /* Sum: '<S286>/Add' */
    rtb_DataTypeConversion1_d = BaseEngineController_LS_B.s390_Sum -
      BaseEngineController_LS_B.s579_Merge;

    /* Logic: '<S286>/Logical Operator5' incorporates:
     *  RelationalOperator: '<S286>/Relational Operator8'
     *  S-Function (motohawk_sfun_calibration): '<S286>/motohawk_calibration7'
     */
    rtb_LogicalOperator5_oa = ((rtb_RelOp_d && rtb_LogicalOperator1_er &&
      rtb_LogicalOperator6_jl && (rtb_DataTypeConversion1_d <
      (MAP_STUCK_DataStore()))));

    /* S-Function (motohawk_sfun_fault_def): '<S286>/motohawk_fault_def3' */

    /* Set Fault Suspected Status: MAP_STICKING */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(119, rtb_LogicalOperator5_oa);
      UpdateFault(119);
    }

    /* Logic: '<S287>/Logical Operator1' incorporates:
     *  S-Function (motohawk_sfun_fault_status): '<S287>/motohawk_fault_status'
     *  S-Function (motohawk_sfun_fault_status): '<S287>/motohawk_fault_status1'
     *  S-Function (motohawk_sfun_fault_status): '<S287>/motohawk_fault_status2'
     *  S-Function (motohawk_sfun_fault_status): '<S287>/motohawk_fault_status3'
     */
    rtb_RelationalOperator2_py = (IsFaultActive(37) || IsFaultActive(38) ||
      IsFaultActive(113) || IsFaultActive(114));

    /* Logic: '<S287>/Logical Operator4' incorporates:
     *  S-Function (motohawk_sfun_fault_status): '<S287>/motohawk_fault_status10'
     *  S-Function (motohawk_sfun_fault_status): '<S287>/motohawk_fault_status7'
     *  S-Function (motohawk_sfun_fault_status): '<S287>/motohawk_fault_status8'
     *  S-Function (motohawk_sfun_fault_status): '<S287>/motohawk_fault_status9'
     */
    rtb_RelationalOperator3_bp = (IsFaultActive(27) || IsFaultActive(26) ||
      IsFaultActive(23) || IsFaultActive(24));

    /* Logic: '<S287>/Logical Operator5' incorporates:
     *  S-Function (motohawk_sfun_fault_status): '<S287>/motohawk_fault_status4'
     *  S-Function (motohawk_sfun_fault_status): '<S287>/motohawk_fault_status5'
     *  S-Function (motohawk_sfun_fault_status): '<S287>/motohawk_fault_status6'
     */
    rtb_LogicalOperator6_jl = (IsFaultActive(117) || IsFaultActive(118) ||
      IsFaultActive(119));

    /* Logic: '<S287>/Logical Operator7' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S287>/motohawk_calibration8'
     */
    rtb_LogicalOperator1_le = (rtb_LogicalOperator6_jl &&
      (MisfireDiag_MAPIRDiagEnable_DataStore()));

    /* RelationalOperator: '<S308>/RelOp' incorporates:
     *  Constant: '<S308>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S287>/motohawk_data_read1'
     */
    rtb_Switch1_pb = (((uint8_T)EngineState_DataStore()) == 3);

    /* RelationalOperator: '<S287>/Relational Operator' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S287>/motohawk_calibration'
     */
    rtb_RelOp_d = (BaseEngineController_LS_B.s636_Merge >= (real_T)((int16_T)
      (MisfireDiag_ECTLowEnbl_DataStore())));

    /* RelationalOperator: '<S287>/Relational Operator1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S287>/motohawk_calibration1'
     */
    rtb_LogicalOperator1_er = (BaseEngineController_LS_B.s636_Merge <= (real_T)
                               ((int16_T)(MisfireDiag_ECTHighEnbl_DataStore())));

    /* RelationalOperator: '<S287>/Relational Operator2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S287>/motohawk_calibration2'
     */
    rtb_LogicalOperator6_jl = (BaseEngineController_LS_B.s579_Merge >= (real_T)
                               ((int16_T)(MisfireDiag_MAPLowEnbl_DataStore())));

    /* RelationalOperator: '<S287>/Relational Operator3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S287>/motohawk_calibration3'
     */
    rtb_BelowLoTarget_p = (BaseEngineController_LS_B.s579_Merge <= (real_T)
      ((int16_T)(MisfireDiag_MAPHighEnbl_DataStore())));

    /* RelationalOperator: '<S287>/Relational Operator4' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S287>/motohawk_calibration4'
     */
    rtb_Overspeed2 = (BaseEngineController_LS_B.s536_Sum1 >= (real_T)((int16_T)
      (MisfireDiag_RPMLowEnbl_DataStore())));

    /* RelationalOperator: '<S287>/Relational Operator5' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S287>/motohawk_calibration5'
     */
    rtb_RelOp_mp = (BaseEngineController_LS_B.s536_Sum1 <= (real_T)((int16_T)
      (MisfireDiag_RPMHighEnbl_DataStore())));

    /* RelationalOperator: '<S287>/Relational Operator6' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S287>/motohawk_calibration6'
     */
    rtb_LogicalOperator3_cj = (BaseEngineController_LS_B.s462_Switch >= (real_T)
                               ((int16_T)(MisfireDiag_TimeSinceRunEnbl_DataStore
                                 ())));

    /* Outputs for Enabled SubSystem: '<S287>/MisfireDiagSub' incorporates:
     *  EnablePort: '<S307>/Enable'
     */
    /* Logic: '<S287>/Logical Operator9' incorporates:
     *  Logic: '<S287>/Logical Operator'
     *  Logic: '<S287>/Logical Operator2'
     *  Logic: '<S287>/Logical Operator3'
     *  Logic: '<S287>/Logical Operator6'
     *  Logic: '<S287>/Logical Operator8'
     *  S-Function (motohawk_sfun_calibration): '<S287>/motohawk_calibration7'
     */
    if ((!rtb_RelationalOperator2_py) && (!rtb_RelationalOperator3_bp) &&
        (!rtb_LogicalOperator1_le) && (rtb_Switch1_pb && rtb_RelOp_d &&
         rtb_LogicalOperator1_er && rtb_LogicalOperator6_jl &&
         rtb_BelowLoTarget_p && rtb_Overspeed2 && rtb_RelOp_mp &&
         rtb_LogicalOperator3_cj && (MisfireDiag_Enbl_DataStore()))) {
      if (!BaseEngineController_LS_DWork.s287_MisfireDiagSub_MODE) {
        /* Level2 S-Function Block: '<S307>/motohawk_trigger' (motohawk_sfun_trigger) */

        /* Enable for Trigger_FGND_HIRES_5882p001 */
        BaseEngineController_LS_DWork.s307_motohawk_trigger_DWORK1 = 1;
        BaseEngineController_LS_DWork.s287_MisfireDiagSub_MODE = TRUE;
      }

      /* S-Function (motohawk_sfun_trigger): '<S307>/motohawk_trigger' */
      /* Enable for Trigger_FGND_HIRES_5882p001 */
      if (BaseEngineController_LS_DWork.s307_motohawk_trigger_DWORK1 == 0) {
        BaseEngineController_LS_DWork.s307_motohawk_trigger_DWORK1 = 1;
      }
    } else {
      if (BaseEngineController_LS_DWork.s287_MisfireDiagSub_MODE) {
        /* Level2 S-Function Block: '<S307>/motohawk_trigger' (motohawk_sfun_trigger) */
        /* Disable for Trigger_FGND_HIRES_5882p001 */

        /* Disable for function-call system: '<S307>/MisfireDiagFunc' */
        BaseEngineController_LS_DWork.s326_If_ActiveSubsystem = -1;
        BaseEngineController_LS_DWork.s307_motohawk_trigger_DWORK1 = 0;
        BaseEngineController_LS_DWork.s287_MisfireDiagSub_MODE = FALSE;
      }
    }

    /* End of Logic: '<S287>/Logical Operator9' */
    /* End of Outputs for SubSystem: '<S287>/MisfireDiagSub' */

    /* Logic: '<S341>/Logical Operator34' incorporates:
     *  Logic: '<S341>/Logical Operator33'
     *  S-Function (motohawk_sfun_data_read): '<S341>/motohawk_data_read'
     *  S-Function (motohawk_sfun_fault_status): '<S341>/motohawk_fault_status1'
     *  S-Function (motohawk_sfun_fault_status): '<S341>/motohawk_fault_status2'
     *  S-Function (motohawk_sfun_fault_status): '<S341>/motohawk_fault_status3'
     *  S-Function (motohawk_sfun_fault_status): '<S341>/motohawk_fault_status9'
     */
    rtb_LogicalOperator6_jl = (IsFaultActive(37) || IsFaultActive(38) ||
      IsFaultActive(107) || IsFaultActive(108) || (!BankB_Enbl_DataStore()));

    /* RelationalOperator: '<S344>/RelOp' incorporates:
     *  Constant: '<S344>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S341>/motohawk_data_read1'
     */
    rtb_LogicalOperator1_le = (((uint8_T)EngineState_DataStore()) == 3);

    /* RelationalOperator: '<S341>/Relational Operator' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S341>/motohawk_calibration'
     */
    rtb_Switch1_pb = (BaseEngineController_LS_B.s462_Switch >=
                      (O2Diag_Bank2Bank_MinRunTime_DataStore()));

    /* RelationalOperator: '<S341>/Relational Operator1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S341>/motohawk_calibration1'
     */
    rtb_LogicalOperator3_cj = (BaseEngineController_LS_B.s636_Merge >= (real_T)
                               ((int16_T)(O2Diag_Bank2Bank_MinECT_DataStore())));

    /* Logic: '<S341>/Logical Operator1' */
    rtb_RelationalOperator2_py = (BaseEngineController_LS_B.s477_DataValidState &&
      BaseEngineController_LS_B.s477_DataValidState_f);

    /* RelationalOperator: '<S341>/Relational Operator2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S341>/motohawk_calibration2'
     */
    rtb_RelationalOperator3_bp = (BaseEngineController_LS_B.s132_Product1 >=
      (O2Diag_Bank2Bank_MinDesEquivRatio_DataStore()));

    /* RelationalOperator: '<S341>/Relational Operator3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S341>/motohawk_calibration3'
     */
    rtb_LogicalOperator1_er = (BaseEngineController_LS_B.s132_Product1 <=
      (O2Diag_Bank2Bank_MaxDesEquivRatio_DataStore()));

    /* Abs: '<S341>/Abs' incorporates:
     *  Sum: '<S341>/Sum'
     */
    rtb_DataTypeConversion_b2 = fabs
      (BaseEngineController_LS_B.s477_MultiportSwitch -
       BaseEngineController_LS_B.s492_Merge);

    /* S-Function Block: <S341>/motohawk_interpolation_2d */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_motohawk_interpolation_2d_m = TableInterpolation2D_real_T
        (BaseEngineController_LS_B.s422_motohawk_prelookup1,
         BaseEngineController_LS_B.s420_motohawk_prelookup1, (real_T *)
         ((O2Diag_Bank2Bank_DiffAlwdMap_DataStore())), 9, 9);
      (O2Diag_Bank2Bank_DiffAlwd_DataStore()) = rtb_motohawk_interpolation_2d_m;
    }

    /* Logic: '<S341>/Logical Operator' incorporates:
     *  Logic: '<S341>/Logical Operator10'
     *  RelationalOperator: '<S341>/Relational Operator4'
     *  S-Function (motohawk_sfun_interpolation_2d): '<S341>/motohawk_interpolation_2d'
     */
    rtb_LogicalOperator_dn = (((!rtb_LogicalOperator6_jl) &&
      rtb_LogicalOperator1_le && rtb_Switch1_pb && rtb_LogicalOperator3_cj &&
      rtb_RelationalOperator2_py && rtb_RelationalOperator3_bp &&
      rtb_LogicalOperator1_er && (rtb_DataTypeConversion_b2 >=
      rtb_motohawk_interpolation_2d_m)));

    /* S-Function (motohawk_sfun_fault_def): '<S341>/motohawk_fault_def6' */

    /* Set Fault Suspected Status: Lambda_Bank2Bank_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(109, rtb_LogicalOperator_dn);
      UpdateFault(109);
    }

    /* Logic: '<S342>/Logical Operator1' incorporates:
     *  S-Function (motohawk_sfun_fault_status): '<S342>/motohawk_fault_status1'
     */
    rtb_LogicalOperator6_jl = !IsFaultActive(107);

    /* S-Function Block: <S361>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s361_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_ff = ((real_T) delta) * 0.000001;
    }

    /* RelationalOperator: '<S345>/RelOp' incorporates:
     *  Constant: '<S345>/Constant'
     */
    rtb_LogicalOperator3_cj = (BaseEngineController_LS_B.s477_SensorStatus_e ==
      0);

    /* Switch: '<S361>/Switch' incorporates:
     *  Constant: '<S361>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S361>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S361>/motohawk_delta_time'
     *  Sum: '<S361>/Sum'
     */
    if (rtb_LogicalOperator3_cj) {
      rtb_DataTypeConversion_b2 = rtb_motohawk_delta_time_ff +
        Lam1ResetTime_DataStore();
    } else {
      rtb_DataTypeConversion_b2 = 0.0;
    }

    /* End of Switch: '<S361>/Switch' */
    /* Logic: '<S342>/Logical Operator4' incorporates:
     *  RelationalOperator: '<S342>/Relational Operator'
     *  S-Function (motohawk_sfun_calibration): '<S342>/motohawk_calibration'
     */
    rtb_LogicalOperator4_bm = ((rtb_LogicalOperator6_jl &&
      (rtb_DataTypeConversion_b2 >= (O2Diag_Lam1_StuckInResetThresh_DataStore()))
      && rtb_LogicalOperator3_cj));

    /* S-Function (motohawk_sfun_fault_def): '<S342>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: Lambda1StuckInReset_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(93, rtb_LogicalOperator4_bm);
      UpdateFault(93);
    }

    /* Logic: '<S342>/Logical Operator36' incorporates:
     *  Logic: '<S342>/Logical Operator35'
     *  S-Function (motohawk_sfun_data_read): '<S342>/motohawk_data_read1'
     *  S-Function (motohawk_sfun_fault_status): '<S342>/motohawk_fault_status10'
     */
    rtb_LogicalOperator6_jl = (IsFaultActive(108) || (!BankB_Enbl_DataStore()));

    /* S-Function Block: <S364>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s364_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_ks = ((real_T) delta) * 0.000001;
    }

    /* RelationalOperator: '<S346>/RelOp' incorporates:
     *  Constant: '<S346>/Constant'
     */
    rtb_LogicalOperator3_cj = (BaseEngineController_LS_B.s477_SensorStatus == 1);

    /* Switch: '<S364>/Switch' incorporates:
     *  Constant: '<S364>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S364>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S364>/motohawk_delta_time'
     *  Sum: '<S364>/Sum'
     */
    if (rtb_LogicalOperator3_cj) {
      rtb_DataTypeConversion1_d = rtb_motohawk_delta_time_ks +
        Lam2WarmupTime_DataStore();
    } else {
      rtb_DataTypeConversion1_d = 0.0;
    }

    /* End of Switch: '<S364>/Switch' */
    /* Logic: '<S342>/Logical Operator26' incorporates:
     *  Logic: '<S342>/Logical Operator25'
     *  RelationalOperator: '<S342>/Relational Operator3'
     *  S-Function (motohawk_sfun_calibration): '<S342>/motohawk_calibration3'
     */
    rtb_LogicalOperator26 = (((!rtb_LogicalOperator6_jl) &&
      (rtb_DataTypeConversion1_d >= (O2Diag_Lam2_StuckInWarmup_DataStore())) &&
      rtb_LogicalOperator3_cj));

    /* S-Function (motohawk_sfun_fault_def): '<S342>/motohawk_fault_def10' */

    /* Set Fault Suspected Status: Lambda2StuckInWarmup_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(104, rtb_LogicalOperator26);
      UpdateFault(104);
    }

    /* Logic: '<S342>/Logical Operator29' incorporates:
     *  Constant: '<S347>/Constant'
     *  Logic: '<S342>/Logical Operator28'
     *  Logic: '<S342>/Logical Operator37'
     *  Logic: '<S342>/Logical Operator38'
     *  RelationalOperator: '<S347>/RelOp'
     *  S-Function (motohawk_sfun_data_read): '<S342>/motohawk_data_read2'
     *  S-Function (motohawk_sfun_fault_status): '<S342>/motohawk_fault_status11'
     */
    rtb_LogicalOperator29 = (((!(IsFaultActive(108) || (!BankB_Enbl_DataStore())))
      && (BaseEngineController_LS_B.s477_SensorStatus == 7)));

    /* S-Function (motohawk_sfun_fault_def): '<S342>/motohawk_fault_def11' */

    /* Set Fault Suspected Status: Lambda2Overheat_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(102, rtb_LogicalOperator29);
      UpdateFault(102);
    }

    /* Logic: '<S342>/Logical Operator31' incorporates:
     *  Logic: '<S342>/Logical Operator30'
     *  Logic: '<S342>/Logical Operator47'
     *  Logic: '<S342>/Logical Operator48'
     *  RelationalOperator: '<S348>/RelOp'
     *  S-Function (motohawk_sfun_data_read): '<S342>/motohawk_data_read7'
     *  S-Function (motohawk_sfun_fault_status): '<S342>/motohawk_fault_status16'
     */
    rtb_LogicalOperator31 = (((!(IsFaultActive(108) || (!BankB_Enbl_DataStore())))
      && BaseEngineController_LS_B.s477_SensorFaultState));

    /* S-Function (motohawk_sfun_fault_def): '<S342>/motohawk_fault_def12' */

    /* Set Fault Suspected Status: Lambda2Fault_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(98, rtb_LogicalOperator31);
      UpdateFault(98);
    }

    /* Logic: '<S342>/Logical Operator18' incorporates:
     *  Constant: '<S349>/Constant'
     *  Logic: '<S342>/Logical Operator32'
     *  Logic: '<S342>/Logical Operator39'
     *  Logic: '<S342>/Logical Operator40'
     *  RelationalOperator: '<S349>/RelOp'
     *  S-Function (motohawk_sfun_data_read): '<S342>/motohawk_data_read3'
     *  S-Function (motohawk_sfun_fault_status): '<S342>/motohawk_fault_status12'
     */
    rtb_LogicalOperator18 = (((!(IsFaultActive(108) || (!BankB_Enbl_DataStore())))
      && (BaseEngineController_LS_B.s477_SensorStatus == 8)));

    /* S-Function (motohawk_sfun_fault_def): '<S342>/motohawk_fault_def13' */

    /* Set Fault Suspected Status: Lambda2Overcool_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(101, rtb_LogicalOperator18);
      UpdateFault(101);
    }

    /* Logic: '<S342>/Logical Operator20' incorporates:
     *  Constant: '<S350>/Constant'
     *  Logic: '<S342>/Logical Operator19'
     *  Logic: '<S342>/Logical Operator41'
     *  Logic: '<S342>/Logical Operator42'
     *  RelationalOperator: '<S350>/RelOp'
     *  S-Function (motohawk_sfun_data_read): '<S342>/motohawk_data_read4'
     *  S-Function (motohawk_sfun_fault_status): '<S342>/motohawk_fault_status13'
     */
    rtb_LogicalOperator20 = (((!(IsFaultActive(108) || (!BankB_Enbl_DataStore())))
      && (BaseEngineController_LS_B.s477_SensorStatus == 9)));

    /* S-Function (motohawk_sfun_fault_def): '<S342>/motohawk_fault_def14' */

    /* Set Fault Suspected Status: Lambda2HtrShort_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(100, rtb_LogicalOperator20);
      UpdateFault(100);
    }

    /* Logic: '<S342>/Logical Operator22' incorporates:
     *  Constant: '<S351>/Constant'
     *  Logic: '<S342>/Logical Operator21'
     *  Logic: '<S342>/Logical Operator43'
     *  Logic: '<S342>/Logical Operator44'
     *  RelationalOperator: '<S351>/RelOp'
     *  S-Function (motohawk_sfun_data_read): '<S342>/motohawk_data_read5'
     *  S-Function (motohawk_sfun_fault_status): '<S342>/motohawk_fault_status14'
     */
    rtb_LogicalOperator22 = (((!(IsFaultActive(108) || (!BankB_Enbl_DataStore())))
      && (BaseEngineController_LS_B.s477_SensorStatus == 10)));

    /* S-Function (motohawk_sfun_fault_def): '<S342>/motohawk_fault_def15' */

    /* Set Fault Suspected Status: Lambda2HtrOpen_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(99, rtb_LogicalOperator22);
      UpdateFault(99);
    }

    /* Logic: '<S342>/Logical Operator24' incorporates:
     *  Constant: '<S352>/Constant'
     *  Logic: '<S342>/Logical Operator23'
     *  Logic: '<S342>/Logical Operator45'
     *  Logic: '<S342>/Logical Operator46'
     *  RelationalOperator: '<S352>/RelOp'
     *  S-Function (motohawk_sfun_data_read): '<S342>/motohawk_data_read6'
     *  S-Function (motohawk_sfun_fault_status): '<S342>/motohawk_fault_status15'
     */
    rtb_LogicalOperator24 = (((!(IsFaultActive(108) || (!BankB_Enbl_DataStore())))
      && (BaseEngineController_LS_B.s477_SensorStatus == 20)));

    /* S-Function (motohawk_sfun_fault_def): '<S342>/motohawk_fault_def16' */

    /* Set Fault Suspected Status: Lambda2Error_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(97, rtb_LogicalOperator24);
      UpdateFault(97);
    }

    /* Logic: '<S342>/Logical Operator2' incorporates:
     *  S-Function (motohawk_sfun_fault_status): '<S342>/motohawk_fault_status2'
     */
    rtb_LogicalOperator6_jl = !IsFaultActive(107);

    /* S-Function Block: <S362>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s362_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_bi2 = ((real_T) delta) * 0.000001;
    }

    /* RelationalOperator: '<S353>/RelOp' incorporates:
     *  Constant: '<S353>/Constant'
     */
    rtb_LogicalOperator3_cj = (BaseEngineController_LS_B.s477_SensorStatus_e ==
      1);

    /* Switch: '<S362>/Switch' incorporates:
     *  Constant: '<S362>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S362>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S362>/motohawk_delta_time'
     *  Sum: '<S362>/Sum'
     */
    if (rtb_LogicalOperator3_cj) {
      rtb_Product1_gw = rtb_motohawk_delta_time_bi2 + Lam1WarmupTime_DataStore();
    } else {
      rtb_Product1_gw = 0.0;
    }

    /* End of Switch: '<S362>/Switch' */
    /* Logic: '<S342>/Logical Operator3' incorporates:
     *  RelationalOperator: '<S342>/Relational Operator1'
     *  S-Function (motohawk_sfun_calibration): '<S342>/motohawk_calibration1'
     */
    rtb_LogicalOperator3_cx = ((rtb_LogicalOperator6_jl && (rtb_Product1_gw >=
      (O2Diag_Lam1_StuckInWarmup_DataStore())) && rtb_LogicalOperator3_cj));

    /* S-Function (motohawk_sfun_fault_def): '<S342>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: Lambda1StuckInWarmup_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(94, rtb_LogicalOperator3_cx);
      UpdateFault(94);
    }

    /* Logic: '<S342>/Logical Operator6' incorporates:
     *  Constant: '<S354>/Constant'
     *  Logic: '<S342>/Logical Operator5'
     *  RelationalOperator: '<S354>/RelOp'
     *  S-Function (motohawk_sfun_fault_status): '<S342>/motohawk_fault_status3'
     */
    rtb_LogicalOperator6_dq = (((!IsFaultActive(107)) &&
      (BaseEngineController_LS_B.s477_SensorStatus_e == 7)));

    /* S-Function (motohawk_sfun_fault_def): '<S342>/motohawk_fault_def3' */

    /* Set Fault Suspected Status: Lambda1Overheat_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(92, rtb_LogicalOperator6_dq);
      UpdateFault(92);
    }

    /* Logic: '<S342>/Logical Operator8' incorporates:
     *  Logic: '<S342>/Logical Operator7'
     *  RelationalOperator: '<S355>/RelOp'
     *  S-Function (motohawk_sfun_fault_status): '<S342>/motohawk_fault_status4'
     */
    rtb_LogicalOperator8_d = (((!IsFaultActive(107)) &&
      BaseEngineController_LS_B.s477_SensorFaultState_m));

    /* S-Function (motohawk_sfun_fault_def): '<S342>/motohawk_fault_def4' */

    /* Set Fault Suspected Status: Lambda1Fault_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(88, rtb_LogicalOperator8_d);
      UpdateFault(88);
    }

    /* Logic: '<S342>/Logical Operator10' incorporates:
     *  Constant: '<S356>/Constant'
     *  Logic: '<S342>/Logical Operator9'
     *  RelationalOperator: '<S356>/RelOp'
     *  S-Function (motohawk_sfun_fault_status): '<S342>/motohawk_fault_status5'
     */
    rtb_LogicalOperator10_k = (((!IsFaultActive(107)) &&
      (BaseEngineController_LS_B.s477_SensorStatus_e == 8)));

    /* S-Function (motohawk_sfun_fault_def): '<S342>/motohawk_fault_def5' */

    /* Set Fault Suspected Status: Lambda1Overcool_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(91, rtb_LogicalOperator10_k);
      UpdateFault(91);
    }

    /* Logic: '<S342>/Logical Operator12' incorporates:
     *  Constant: '<S357>/Constant'
     *  Logic: '<S342>/Logical Operator11'
     *  RelationalOperator: '<S357>/RelOp'
     *  S-Function (motohawk_sfun_fault_status): '<S342>/motohawk_fault_status6'
     */
    rtb_LogicalOperator12 = (((!IsFaultActive(107)) &&
      (BaseEngineController_LS_B.s477_SensorStatus_e == 9)));

    /* S-Function (motohawk_sfun_fault_def): '<S342>/motohawk_fault_def6' */

    /* Set Fault Suspected Status: Lambda1HtrShort_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(90, rtb_LogicalOperator12);
      UpdateFault(90);
    }

    /* Logic: '<S342>/Logical Operator14' incorporates:
     *  Constant: '<S358>/Constant'
     *  Logic: '<S342>/Logical Operator13'
     *  RelationalOperator: '<S358>/RelOp'
     *  S-Function (motohawk_sfun_fault_status): '<S342>/motohawk_fault_status7'
     */
    rtb_LogicalOperator14 = (((!IsFaultActive(107)) &&
      (BaseEngineController_LS_B.s477_SensorStatus_e == 10)));

    /* S-Function (motohawk_sfun_fault_def): '<S342>/motohawk_fault_def7' */

    /* Set Fault Suspected Status: Lambda1HtrOpen_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(89, rtb_LogicalOperator14);
      UpdateFault(89);
    }

    /* Logic: '<S342>/Logical Operator16' incorporates:
     *  Constant: '<S359>/Constant'
     *  Logic: '<S342>/Logical Operator15'
     *  RelationalOperator: '<S359>/RelOp'
     *  S-Function (motohawk_sfun_fault_status): '<S342>/motohawk_fault_status8'
     */
    rtb_LogicalOperator16 = (((!IsFaultActive(107)) &&
      (BaseEngineController_LS_B.s477_SensorStatus_e == 20)));

    /* S-Function (motohawk_sfun_fault_def): '<S342>/motohawk_fault_def8' */

    /* Set Fault Suspected Status: Lambda1Error_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(87, rtb_LogicalOperator16);
      UpdateFault(87);
    }

    /* Logic: '<S342>/Logical Operator34' incorporates:
     *  Logic: '<S342>/Logical Operator33'
     *  S-Function (motohawk_sfun_data_read): '<S342>/motohawk_data_read'
     *  S-Function (motohawk_sfun_fault_status): '<S342>/motohawk_fault_status9'
     */
    rtb_LogicalOperator6_jl = (IsFaultActive(108) || (!BankB_Enbl_DataStore()));

    /* S-Function Block: <S363>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s363_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_ou = ((real_T) delta) * 0.000001;
    }

    /* RelationalOperator: '<S360>/RelOp' incorporates:
     *  Constant: '<S360>/Constant'
     */
    rtb_LogicalOperator3_cj = (BaseEngineController_LS_B.s477_SensorStatus == 0);

    /* Switch: '<S363>/Switch' incorporates:
     *  Constant: '<S363>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S363>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S363>/motohawk_delta_time'
     *  Sum: '<S363>/Sum'
     */
    if (rtb_LogicalOperator3_cj) {
      rtb_motohawk_interpolation_1d3_a = rtb_motohawk_delta_time_ou +
        Lam2ResetTime_DataStore();
    } else {
      rtb_motohawk_interpolation_1d3_a = 0.0;
    }

    /* End of Switch: '<S363>/Switch' */
    /* Logic: '<S342>/Logical Operator27' incorporates:
     *  Logic: '<S342>/Logical Operator17'
     *  RelationalOperator: '<S342>/Relational Operator2'
     *  S-Function (motohawk_sfun_calibration): '<S342>/motohawk_calibration2'
     */
    rtb_LogicalOperator27 = (((!rtb_LogicalOperator6_jl) &&
      (rtb_motohawk_interpolation_1d3_a >=
       (O2Diag_Lam21_StuckInResetThresh_DataStore())) && rtb_LogicalOperator3_cj));

    /* S-Function (motohawk_sfun_fault_def): '<S342>/motohawk_fault_def9' */

    /* Set Fault Suspected Status: Lambda2StuckInReset_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(103, rtb_LogicalOperator27);
      UpdateFault(103);
    }

    /* Saturate: '<S361>/Saturation' */
    rtb_Saturation_d = rtb_DataTypeConversion_b2 >= 16000.0 ? 16000.0 :
      rtb_DataTypeConversion_b2 <= 0.0 ? 0.0 : rtb_DataTypeConversion_b2;

    /* S-Function (motohawk_sfun_data_write): '<S361>/motohawk_data_write' */
    /* Write to Data Storage as scalar: Lam1ResetTime */
    {
      Lam1ResetTime_DataStore() = rtb_Saturation_d;
    }

    /* Saturate: '<S362>/Saturation' */
    rtb_Saturation_p = rtb_Product1_gw >= 16000.0 ? 16000.0 : rtb_Product1_gw <=
      0.0 ? 0.0 : rtb_Product1_gw;

    /* S-Function (motohawk_sfun_data_write): '<S362>/motohawk_data_write' */
    /* Write to Data Storage as scalar: Lam1WarmupTime */
    {
      Lam1WarmupTime_DataStore() = rtb_Saturation_p;
    }

    /* Saturate: '<S363>/Saturation' */
    rtb_Saturation_b = rtb_motohawk_interpolation_1d3_a >= 16000.0 ? 16000.0 :
      rtb_motohawk_interpolation_1d3_a <= 0.0 ? 0.0 :
      rtb_motohawk_interpolation_1d3_a;

    /* S-Function (motohawk_sfun_data_write): '<S363>/motohawk_data_write' */
    /* Write to Data Storage as scalar: Lam2ResetTime */
    {
      Lam2ResetTime_DataStore() = rtb_Saturation_b;
    }

    /* Saturate: '<S364>/Saturation' */
    rtb_Saturation_ks = rtb_DataTypeConversion1_d >= 16000.0 ? 16000.0 :
      rtb_DataTypeConversion1_d <= 0.0 ? 0.0 : rtb_DataTypeConversion1_d;

    /* S-Function (motohawk_sfun_data_write): '<S364>/motohawk_data_write' */
    /* Write to Data Storage as scalar: Lam2WarmupTime */
    {
      Lam2WarmupTime_DataStore() = rtb_Saturation_ks;
    }

    /* Logic: '<S343>/Logical Operator1' incorporates:
     *  S-Function (motohawk_sfun_fault_status): '<S343>/motohawk_fault_status1'
     */
    rtb_LogicalOperator6_jl = !IsFaultActive(107);

    /* RelationalOperator: '<S343>/Relational Operator' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S343>/motohawk_calibration'
     */
    rtb_LogicalOperator1_le = (BaseEngineController_LS_B.s477_SystemVolts <=
      (Lambda1_VoltLowThresh_DataStore()));

    /* Logic: '<S343>/Logical Operator4' incorporates:
     *  Constant: '<S365>/Constant'
     *  Constant: '<S366>/Constant'
     *  Logic: '<S343>/Logical Operator'
     *  RelationalOperator: '<S365>/RelOp'
     *  RelationalOperator: '<S366>/RelOp'
     *  S-Function (motohawk_sfun_data_read): '<S343>/motohawk_data_read1'
     */
    rtb_LogicalOperator4_lf = ((rtb_LogicalOperator6_jl &&
      rtb_LogicalOperator1_le && ((((uint8_T)EngineState_DataStore()) == 3) ||
                                 (((uint8_T)EngineState_DataStore()) == 2))));

    /* S-Function (motohawk_sfun_fault_def): '<S343>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: Lambda1VoltLow_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(96, rtb_LogicalOperator4_lf);
      UpdateFault(96);
    }

    /* Logic: '<S343>/Logical Operator5' incorporates:
     *  S-Function (motohawk_sfun_fault_status): '<S343>/motohawk_fault_status4'
     */
    rtb_LogicalOperator6_jl = !IsFaultActive(107);

    /* RelationalOperator: '<S343>/Relational Operator1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S343>/motohawk_calibration1'
     */
    rtb_LogicalOperator1_le = (BaseEngineController_LS_B.s477_SystemVolts >=
      (Lambda1_VoltHighThresh_DataStore()));

    /* Logic: '<S343>/Logical Operator7' incorporates:
     *  Constant: '<S367>/Constant'
     *  Constant: '<S368>/Constant'
     *  Logic: '<S343>/Logical Operator3'
     *  RelationalOperator: '<S367>/RelOp'
     *  RelationalOperator: '<S368>/RelOp'
     *  S-Function (motohawk_sfun_data_read): '<S343>/motohawk_data_read2'
     */
    rtb_LogicalOperator7_j = ((rtb_LogicalOperator6_jl &&
      rtb_LogicalOperator1_le && ((((uint8_T)EngineState_DataStore()) == 3) ||
                                (((uint8_T)EngineState_DataStore()) == 2))));

    /* S-Function (motohawk_sfun_fault_def): '<S343>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: Lambda1VoltHigh_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(95, rtb_LogicalOperator7_j);
      UpdateFault(95);
    }

    /* Logic: '<S343>/Logical Operator15' incorporates:
     *  Logic: '<S343>/Logical Operator14'
     *  S-Function (motohawk_sfun_data_read): '<S343>/motohawk_data_read5'
     *  S-Function (motohawk_sfun_fault_status): '<S343>/motohawk_fault_status5'
     */
    rtb_LogicalOperator6_jl = (IsFaultActive(108) || (!BankB_Enbl_DataStore()));

    /* RelationalOperator: '<S343>/Relational Operator2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S343>/motohawk_calibration2'
     */
    rtb_LogicalOperator1_le = (BaseEngineController_LS_B.s477_SystemVolts_k >=
      (Lambda2_VoltHighThresh_DataStore()));

    /* Logic: '<S343>/Logical Operator8' incorporates:
     *  Constant: '<S369>/Constant'
     *  Constant: '<S370>/Constant'
     *  Logic: '<S343>/Logical Operator2'
     *  Logic: '<S343>/Logical Operator6'
     *  RelationalOperator: '<S369>/RelOp'
     *  RelationalOperator: '<S370>/RelOp'
     *  S-Function (motohawk_sfun_data_read): '<S343>/motohawk_data_read3'
     */
    rtb_LogicalOperator8_h = (((!rtb_LogicalOperator6_jl) &&
      rtb_LogicalOperator1_le && ((((uint8_T)EngineState_DataStore()) == 3) ||
                                (((uint8_T)EngineState_DataStore()) == 2))));

    /* S-Function (motohawk_sfun_fault_def): '<S343>/motohawk_fault_def3' */

    /* Set Fault Suspected Status: Lambda2VoltHigh_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(105, rtb_LogicalOperator8_h);
      UpdateFault(105);
    }

    /* Logic: '<S343>/Logical Operator13' incorporates:
     *  Logic: '<S343>/Logical Operator12'
     *  S-Function (motohawk_sfun_data_read): '<S343>/motohawk_data_read'
     *  S-Function (motohawk_sfun_fault_status): '<S343>/motohawk_fault_status6'
     */
    rtb_LogicalOperator6_jl = (IsFaultActive(108) || (!BankB_Enbl_DataStore()));

    /* RelationalOperator: '<S343>/Relational Operator3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S343>/motohawk_calibration3'
     */
    rtb_LogicalOperator1_le = (BaseEngineController_LS_B.s477_SystemVolts_k <=
      (Lambda2_VoltLowThresh_DataStore()));

    /* Logic: '<S343>/Logical Operator11' incorporates:
     *  Constant: '<S371>/Constant'
     *  Constant: '<S372>/Constant'
     *  Logic: '<S343>/Logical Operator10'
     *  Logic: '<S343>/Logical Operator9'
     *  RelationalOperator: '<S371>/RelOp'
     *  RelationalOperator: '<S372>/RelOp'
     *  S-Function (motohawk_sfun_data_read): '<S343>/motohawk_data_read4'
     */
    rtb_LogicalOperator11_b = (((!rtb_LogicalOperator6_jl) &&
      rtb_LogicalOperator1_le && ((((uint8_T)EngineState_DataStore()) == 3) ||
                                 (((uint8_T)EngineState_DataStore()) == 2))));

    /* S-Function (motohawk_sfun_fault_def): '<S343>/motohawk_fault_def4' */

    /* Set Fault Suspected Status: Lambda2VoltLow_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(106, rtb_LogicalOperator11_b);
      UpdateFault(106);
    }

    /* Logic: '<S289>/Logical Operator5' incorporates:
     *  Logic: '<S289>/Logical Operator4'
     *  S-Function (motohawk_sfun_fault_status): '<S289>/motohawk_fault_status1'
     *  S-Function (motohawk_sfun_fault_status): '<S289>/motohawk_fault_status2'
     *  S-Function (motohawk_sfun_fault_status): '<S289>/motohawk_fault_status3'
     *  S-Function (motohawk_sfun_fault_status): '<S289>/motohawk_fault_status4'
     */
    rtb_LogicalOperator3_cj = !(IsFaultActive(27) || IsFaultActive(26) ||
      IsFaultActive(23) || IsFaultActive(24));

    /* DataTypeConversion: '<S289>/Data Type Conversion' */
    if (rtIsNaN(BaseEngineController_LS_B.s472_RPMInst) || rtIsInf
        (BaseEngineController_LS_B.s472_RPMInst)) {
      rtb_UnitDelay3_mp = 0.0;
    } else {
      rtb_UnitDelay3_mp = fmod(floor(BaseEngineController_LS_B.s472_RPMInst),
        65536.0);
    }

    rtb_DataTypeConversion_ol = (int16_T)(rtb_UnitDelay3_mp < 0.0 ? (int16_T)
      -(int16_T)(uint16_T)-rtb_UnitDelay3_mp : (int16_T)(uint16_T)
      rtb_UnitDelay3_mp);

    /* End of DataTypeConversion: '<S289>/Data Type Conversion' */
    /* RelationalOperator: '<S374>/LT' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S373>/motohawk_calibration'
     */
    rtb_RelOp_mp = (rtb_DataTypeConversion_ol >= ((int16_T)
      (BaseRevLimit_DataStore())));

    /* Sum: '<S373>/Sum2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S373>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S373>/motohawk_calibration1'
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

    rtb_Sum4_e = (int16_T)i;

    /* End of Sum: '<S373>/Sum2' */

    /* RelationalOperator: '<S374>/LT1' */
    rtb_Overspeed2 = (rtb_DataTypeConversion_ol <= rtb_Sum4_e);

    /* CombinatorialLogic: '<S377>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_RelOp_mp != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_Overspeed2 != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_o[0] =
        BaseEngineController_LS_ConstP.pooled809[rowidx];
      rtb_CombinatorialLogic_o[1] =
        BaseEngineController_LS_ConstP.pooled809[rowidx + 4];
    }

    /* Switch: '<S377>/Switch1' incorporates:
     *  UnitDelay: '<S377>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_o[1]) {
      rtb_RelationalOperator2_py = rtb_CombinatorialLogic_o[0];
    } else {
      rtb_RelationalOperator2_py =
        BaseEngineController_LS_DWork.s377_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S377>/Switch1' */

    /* Switch: '<S374>/Switch2' incorporates:
     *  Logic: '<S374>/Logical Operator'
     *  S-Function (motohawk_sfun_calibration): '<S373>/motohawk_calibration'
     */
    if (!rtb_RelationalOperator2_py) {
      rtb_Sum4_e = ((int16_T)(BaseRevLimit_DataStore()));
    }

    /* End of Switch: '<S374>/Switch2' */

    /* RelationalOperator: '<S373>/Overspeed' */
    rtb_LogicalOperator6_jl = (rtb_DataTypeConversion_ol > rtb_Sum4_e);

    /* Sum: '<S373>/Sum3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S373>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S373>/motohawk_calibration2'
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

    /* End of Sum: '<S373>/Sum3' */

    /* RelationalOperator: '<S375>/LT' */
    rtb_RelOp_mp = (rtb_DataTypeConversion_ol >= rtb_Sum4_e);

    /* Sum: '<S373>/Sum1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S373>/motohawk_calibration1'
     */
    i = rtb_Sum4_e - ((int16_T)(RevLimitHyst_DataStore()));
    if (i > 32767) {
      i = 32767;
    } else {
      if (i <= -32768) {
        i = -32768;
      }
    }

    rtb_Switch2_i = (int16_T)i;

    /* End of Sum: '<S373>/Sum1' */

    /* RelationalOperator: '<S375>/LT1' */
    rtb_Overspeed2 = (rtb_DataTypeConversion_ol <= rtb_Switch2_i);

    /* CombinatorialLogic: '<S378>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_RelOp_mp != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_Overspeed2 != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_o[0] =
        BaseEngineController_LS_ConstP.pooled809[rowidx];
      rtb_CombinatorialLogic_o[1] =
        BaseEngineController_LS_ConstP.pooled809[rowidx + 4];
    }

    /* Switch: '<S378>/Switch1' incorporates:
     *  UnitDelay: '<S378>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_o[1]) {
      rtb_RelationalOperator3_bp = rtb_CombinatorialLogic_o[0];
    } else {
      rtb_RelationalOperator3_bp =
        BaseEngineController_LS_DWork.s378_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S378>/Switch1' */

    /* Switch: '<S375>/Switch2' incorporates:
     *  Logic: '<S375>/Logical Operator'
     */
    if (rtb_RelationalOperator3_bp) {
      rtb_Sum4_e = rtb_Switch2_i;
    }

    /* End of Switch: '<S375>/Switch2' */

    /* RelationalOperator: '<S373>/Overspeed1' */
    rtb_RelOp_mp = (rtb_DataTypeConversion_ol > rtb_Sum4_e);

    /* Logic: '<S289>/Logical Operator1' incorporates:
     *  Logic: '<S373>/Logical Operator3'
     *  Logic: '<S373>/Logical Operator4'
     */
    rtb_LogicalOperator1_g5 = ((rtb_LogicalOperator3_cj &&
      (rtb_LogicalOperator6_jl && (!rtb_RelOp_mp))));

    /* S-Function (motohawk_sfun_fault_def): '<S289>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: SoftOverspeed */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(133, rtb_LogicalOperator1_g5);
      UpdateFault(133);
    }

    /* Sum: '<S373>/Sum5' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S373>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S373>/motohawk_calibration4'
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

    rtb_Switch2_i = (int16_T)i;

    /* End of Sum: '<S373>/Sum5' */

    /* RelationalOperator: '<S376>/LT' */
    rtb_Overspeed2 = (rtb_DataTypeConversion_ol >= rtb_Switch2_i);

    /* Sum: '<S373>/Sum4' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S373>/motohawk_calibration1'
     */
    i = rtb_Switch2_i - ((int16_T)(RevLimitHyst_DataStore()));
    if (i > 32767) {
      i = 32767;
    } else {
      if (i <= -32768) {
        i = -32768;
      }
    }

    rtb_Sum4_e = (int16_T)i;

    /* End of Sum: '<S373>/Sum4' */

    /* RelationalOperator: '<S376>/LT1' */
    rtb_BelowLoTarget_p = (rtb_DataTypeConversion_ol <= rtb_Sum4_e);

    /* CombinatorialLogic: '<S379>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_Overspeed2 != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_p != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_o[0] =
        BaseEngineController_LS_ConstP.pooled809[rowidx];
      rtb_CombinatorialLogic_o[1] =
        BaseEngineController_LS_ConstP.pooled809[rowidx + 4];
    }

    /* Switch: '<S379>/Switch1' incorporates:
     *  UnitDelay: '<S379>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_o[1]) {
      rtb_Switch1_pb = rtb_CombinatorialLogic_o[0];
    } else {
      rtb_Switch1_pb = BaseEngineController_LS_DWork.s379_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S379>/Switch1' */

    /* Switch: '<S376>/Switch2' incorporates:
     *  Logic: '<S376>/Logical Operator'
     */
    if (rtb_Switch1_pb) {
      rtb_Switch2_i = rtb_Sum4_e;
    }

    /* End of Switch: '<S376>/Switch2' */

    /* RelationalOperator: '<S373>/Overspeed2' */
    rtb_Overspeed2 = (rtb_DataTypeConversion_ol > rtb_Switch2_i);

    /* Logic: '<S289>/Logical Operator2' incorporates:
     *  Logic: '<S373>/Logical Operator5'
     *  Logic: '<S373>/Logical Operator6'
     */
    rtb_LogicalOperator2_bl = ((rtb_LogicalOperator3_cj && (rtb_RelOp_mp &&
      (!rtb_Overspeed2))));

    /* S-Function (motohawk_sfun_fault_def): '<S289>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: MediumOverspeed */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(120, rtb_LogicalOperator2_bl);
      UpdateFault(120);
    }

    /* Logic: '<S289>/Logical Operator3' */
    rtb_LogicalOperator3_eo = ((rtb_LogicalOperator3_cj && rtb_Overspeed2));

    /* S-Function (motohawk_sfun_fault_def): '<S289>/motohawk_fault_def3' */

    /* Set Fault Suspected Status: HardOverspeed */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(76, rtb_LogicalOperator3_eo);
      UpdateFault(76);
    }

    /* Logic: '<S290>/Logical Operator3' incorporates:
     *  Logic: '<S290>/Logical Operator1'
     *  S-Function (motohawk_sfun_fault_status): '<S290>/motohawk_fault_status'
     *  S-Function (motohawk_sfun_fault_status): '<S290>/motohawk_fault_status1'
     */
    rtb_LogicalOperator3_cj = !(IsFaultActive(67) || IsFaultActive(68) ||
      BaseEngineController_LS_B.s504_Merge);

    /* Sum: '<S290>/Sum3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S290>/motohawk_calibration2'
     */
    rtb_motohawk_interpolation_1d3_a = BaseEngineController_LS_B.s433_Sum3 -
      (FuelPres_DeltaTarget_DataStore());

    /* Logic: '<S290>/Logical Operator4' incorporates:
     *  Gain: '<S290>/invert'
     *  RelationalOperator: '<S290>/Relational Operator1'
     *  S-Function (motohawk_sfun_calibration): '<S290>/motohawk_calibration3'
     */
    rtb_LogicalOperator4_j = ((rtb_LogicalOperator3_cj &&
      (rtb_motohawk_interpolation_1d3_a < -(FuelPres_DeltaTolerance_DataStore()))));

    /* S-Function (motohawk_sfun_fault_def): '<S290>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: FuelPresLow_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(66, rtb_LogicalOperator4_j);
      UpdateFault(66);
    }

    /* Logic: '<S290>/Logical Operator2' incorporates:
     *  RelationalOperator: '<S290>/Relational Operator3'
     *  S-Function (motohawk_sfun_calibration): '<S290>/motohawk_calibration3'
     */
    rtb_LogicalOperator2_o4 = ((rtb_LogicalOperator3_cj &&
      (rtb_motohawk_interpolation_1d3_a > (FuelPres_DeltaTolerance_DataStore()))));

    /* S-Function (motohawk_sfun_fault_def): '<S290>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: FuelPresHigh_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(65, rtb_LogicalOperator2_o4);
      UpdateFault(65);
    }

    /* Logic: '<S281>/Logical Operator3' incorporates:
     *  Logic: '<S281>/Logical Operator1'
     *  S-Function (motohawk_sfun_fault_status): '<S281>/motohawk_fault_status'
     *  S-Function (motohawk_sfun_fault_status): '<S281>/motohawk_fault_status1'
     */
    rtb_LogicalOperator3_cj = !(IsFaultActive(37) || IsFaultActive(38));

    /* RelationalOperator: '<S295>/RelOp' incorporates:
     *  Constant: '<S295>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S281>/motohawk_data_read'
     */
    rtb_RelOp_mp = (((uint8_T)EngineState_DataStore()) == 3);

    /* Logic: '<S281>/Logical Operator2' incorporates:
     *  RelationalOperator: '<S281>/Relational Operator3'
     *  S-Function (motohawk_sfun_calibration): '<S281>/motohawk_calibration2'
     */
    rtb_LogicalOperator2_ie = ((rtb_LogicalOperator3_cj && rtb_RelOp_mp &&
      (BaseEngineController_LS_B.s636_Merge >= (TempOverheat_Fault_DataStore()))));

    /* S-Function (motohawk_sfun_fault_def): '<S281>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: ECTOverTempFault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(36, rtb_LogicalOperator2_ie);
      UpdateFault(36);
    }

    /* Logic: '<S281>/Logical Operator4' incorporates:
     *  RelationalOperator: '<S281>/Relational Operator2'
     *  S-Function (motohawk_sfun_calibration): '<S281>/motohawk_calibration3'
     */
    rtb_LogicalOperator4_jz = ((rtb_LogicalOperator3_cj && rtb_RelOp_mp &&
      (BaseEngineController_LS_B.s636_Merge >=
       (TempOverheatSevere_Fault_DataStore()))));

    /* S-Function (motohawk_sfun_fault_def): '<S281>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: ECTSevereOverTempFault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(39, rtb_LogicalOperator4_jz);
      UpdateFault(39);
    }

    /* S-Function (motohawk_sfun_calibration): '<S281>/motohawk_calibration1' */
    rtb_motohawk_interpolation_1d3_a = (TempOverheat_Warn_DataStore());

    /* Gain: '<S282>/inj//min to inj//hr' incorporates:
     *  DataTypeConversion: '<S282>/Data Type Conversion'
     *  Product: '<S282>/RPM to inj//min'
     *  S-Function (motohawk_sfun_data_read): '<S282>/Number of Combustion Events Per Revolution'
     */
    rtb_DataTypeConversion1_d = BaseEngineController_LS_B.s536_Sum1 * (real_T)
      ((uint8_T)CombEventsPerRev_DataStore()) * 60.0;

    /* Gain: '<S296>/Gain' */
    rtb_motohawk_interpolation_1d3_a = 0.01 *
      BaseEngineController_LS_B.s558_Merge;

    /* Gain: '<S282>/g to mg' incorporates:
     *  Constant: '<S296>/ '
     *  Constant: '<S296>/ Ethanol density (g//ml)'
     *  Constant: '<S296>/ Gasoline density (g//ml)'
     *  Product: '<S296>/Product1'
     *  Product: '<S296>/Product2'
     *  Sum: '<S296>/Add'
     *  Sum: '<S296>/Add1'
     */
    rtb_DataTypeConversion_b2 = ((1.0 - rtb_motohawk_interpolation_1d3_a) *
      0.737 + 0.789 * rtb_motohawk_interpolation_1d3_a) * 1000.0;
    for (i = 0; i < 8; i++) {
      /* Gain: '<S282>/ml//hr to gal//hr' incorporates:
       *  Product: '<S282>/Mass flow to Volume flow mg//hr to ml//hr'
       *  Product: '<S282>/inj//hr to mg//hr'
       */
      rtb_UnitDelay3_mp = rtb_DataTypeConversion1_d *
        BaseEngineController_LS_B.s92_FPC[i] / rtb_DataTypeConversion_b2 *
        0.00026417205263729591;

      /* RelationalOperator: '<S282>/Relational Operator7' incorporates:
       *  Constant: '<S282>/Min fuel flow  for calc'
       */
      rtb_LogicalOperator_df[i] = (rtb_UnitDelay3_mp > 0.1);

      /* Gain: '<S282>/ml//hr to gal//hr' */
      rtb_Product1_fj[i] = rtb_UnitDelay3_mp;
    }

    /* Outputs for Enabled SubSystem: '<S282>/Multiply and Divide, avoiding divde by zero1' incorporates:
     *  EnablePort: '<S298>/Enable'
     */
    if (rtb_LogicalOperator_df[0] || rtb_LogicalOperator_df[1] ||
        rtb_LogicalOperator_df[2] || rtb_LogicalOperator_df[3] ||
        rtb_LogicalOperator_df[4] || rtb_LogicalOperator_df[5] ||
        rtb_LogicalOperator_df[6] || rtb_LogicalOperator_df[7]) {
      /* Product: '<S298>/charge mass' */
      for (i = 0; i < 8; i++) {
        BaseEngineController_LS_B.s298_chargemass[i] =
          BaseEngineController_LS_B.s441_Switch2 / rtb_Product1_fj[i];
      }

      /* End of Product: '<S298>/charge mass' */
    }

    /* End of Outputs for SubSystem: '<S282>/Multiply and Divide, avoiding divde by zero1' */

    /* Switch: '<S282>/Default (if no flow)' incorporates:
     *  Constant: '<S282>/Default value'
     */
    for (i = 0; i < 8; i++) {
      if (rtb_LogicalOperator_df[i]) {
        BaseEngineController_LS_B.s282_Defaultifnoflow[i] =
          BaseEngineController_LS_B.s298_chargemass[i];
      } else {
        BaseEngineController_LS_B.s282_Defaultifnoflow[i] = 0.0;
      }
    }

    /* End of Switch: '<S282>/Default (if no flow)' */

    /* S-Function Block: <S297>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_DWork.s297_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_interpolation_1d3_a = ((real_T) delta) * 0.000001;
    }

    /* Product: '<S297>/Product' incorporates:
     *  MinMax: '<S297>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S297>/motohawk_calibration2'
     */
    rtb_motohawk_interpolation_1d3_a /= (rtb_motohawk_interpolation_1d3_a >=
      (FuelEconomy_FilterC_DataStore())) || rtIsNaN
      ((FuelEconomy_FilterC_DataStore())) ? rtb_motohawk_interpolation_1d3_a :
      (FuelEconomy_FilterC_DataStore());

    /* Sum: '<S299>/Sum' incorporates:
     *  Constant: '<S299>/Constant'
     */
    rtb_DataTypeConversion1_d = 1.0 - rtb_motohawk_interpolation_1d3_a;

    /* Sum: '<S299>/Sum1' incorporates:
     *  Product: '<S299>/Product'
     *  Product: '<S299>/Product1'
     *  UnitDelay: '<S299>/Unit Delay'
     */
    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_B.s299_Sum1[i] =
        BaseEngineController_LS_B.s282_Defaultifnoflow[i] *
        rtb_motohawk_interpolation_1d3_a + rtb_DataTypeConversion1_d *
        BaseEngineController_LS_DWork.s299_UnitDelay_DSTATE[i];
    }

    /* End of Sum: '<S299>/Sum1' */

    /* Logic: '<S284>/Logical Operator1' incorporates:
     *  S-Function (motohawk_sfun_fault_status): '<S284>/motohawk_fault_status'
     *  S-Function (motohawk_sfun_fault_status): '<S284>/motohawk_fault_status1'
     */
    rtb_LogicalOperator6_jl = (IsFaultActive(128) || IsFaultActive(129));

    /* RelationalOperator: '<S301>/RelOp' incorporates:
     *  Constant: '<S301>/Constant'
     */
    rtb_LogicalOperator1_le = (BaseEngineController_LS_B.s453_State == 3);

    /* S-Function Block: <S284>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_ne = TableInterpolation1D_real_T
        (BaseEngineController_LS_B.s422_motohawk_prelookup1, (real_T *)
         ((MinOilPressure_FaultTbl_DataStore())), 9);
      (MinOilPressure_Fault_DataStore()) = rtb_motohawk_interpolation_1d_ne;
    }

    /* Logic: '<S284>/Logical Operator4' incorporates:
     *  Logic: '<S284>/Logical Operator3'
     *  RelationalOperator: '<S284>/Relational Operator2'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S284>/motohawk_interpolation_1d'
     */
    rtb_LogicalOperator4_mv = (((!rtb_LogicalOperator6_jl) &&
      rtb_LogicalOperator1_le && (BaseEngineController_LS_B.s597_Merge <
      rtb_motohawk_interpolation_1d_ne)));

    /* S-Function (motohawk_sfun_fault_def): '<S284>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: NoOil_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(121, rtb_LogicalOperator4_mv);
      UpdateFault(121);
    }

    /* S-Function Block: <S284>/motohawk_interpolation_1d3 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d3_a = TableInterpolation1D_real_T
        (BaseEngineController_LS_B.s422_motohawk_prelookup1, (real_T *)
         ((MinOilPressure_WarnTbl_DataStore())), 9);
      (MinOilPressure_Warn_DataStore()) = rtb_motohawk_interpolation_1d3_a;
    }

    /* Update for UnitDelay: '<S377>/Unit Delay' */
    BaseEngineController_LS_DWork.s377_UnitDelay_DSTATE =
      rtb_RelationalOperator2_py;

    /* Update for UnitDelay: '<S378>/Unit Delay' */
    BaseEngineController_LS_DWork.s378_UnitDelay_DSTATE =
      rtb_RelationalOperator3_bp;

    /* Update for UnitDelay: '<S379>/Unit Delay' */
    BaseEngineController_LS_DWork.s379_UnitDelay_DSTATE = rtb_Switch1_pb;

    /* Update for UnitDelay: '<S299>/Unit Delay' */
    memcpy((void *)BaseEngineController_LS_DWork.s299_UnitDelay_DSTATE, (void *)
           (&BaseEngineController_LS_B.s299_Sum1[0]), sizeof(real_T) << 3U);

    /* End of Outputs for SubSystem: '<S11>/Diagnostics' */
  } else {
    if (BaseEngineController_LS_DWork.s468_TriggeredSubsystem_MODE) {
      /* Disable for Function Call SubSystem: '<S11>/Diagnostics' */
      /* Disable for Enabled SubSystem: '<S287>/MisfireDiagSub' */

      /* Level2 S-Function Block: '<S307>/motohawk_trigger' (motohawk_sfun_trigger) */
      /* Disable for Trigger_FGND_HIRES_5882p001 */

      /* Disable for function-call system: '<S307>/MisfireDiagFunc' */
      BaseEngineController_LS_DWork.s326_If_ActiveSubsystem = -1;
      BaseEngineController_LS_DWork.s307_motohawk_trigger_DWORK1 = 0;
      BaseEngineController_LS_DWork.s287_MisfireDiagSub_MODE = FALSE;

      /* End of Disable for SubSystem: '<S287>/MisfireDiagSub' */
      /* End of Disable for SubSystem: '<S11>/Diagnostics' */
      BaseEngineController_LS_DWork.s468_TriggeredSubsystem_MODE = FALSE;
    }
  }

  /* Saturate: '<S393>/Saturation' */
  rtb_Saturation_k2 = rtb_Switch_fz >= 16000.0 ? 16000.0 : rtb_Switch_fz <= 0.0 ?
    0.0 : rtb_Switch_fz;

  /* S-Function (motohawk_sfun_data_write): '<S393>/motohawk_data_write' */
  /* Write to Data Storage as scalar: BaroLearnTmr */
  {
    BaroLearnTmr_DataStore() = rtb_Saturation_k2;
  }

  /* Switch: '<S398>/Switch' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S398>/motohawk_calibration'
   *  S-Function (motohawk_sfun_data_read): '<S380>/motohawk_data_read'
   */
  if ((VEAdpatSource_DataStore())) {
    rtb_DataTypeConversion1_d = BaseEngineController_LS_B.s511_Merge;
  } else {
    rtb_DataTypeConversion1_d = DFCODesEquivRatio_DataStore();
  }

  /* End of Switch: '<S398>/Switch' */

  /* Switch: '<S398>/Switch1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S398>/motohawk_calibration'
   */
  if ((VEAdpatSource_DataStore())) {
    rtb_DataTypeConversion_b2 =
      BaseEngineController_LS_B.s389_ModelAirMassFlowRate;
  } else {
    rtb_DataTypeConversion_b2 = BaseEngineController_LS_B.s435_Sum1;
  }

  /* End of Switch: '<S398>/Switch1' */

  /* RelationalOperator: '<S396>/Compare' incorporates:
   *  Constant: '<S396>/Constant'
   */
  rtb_LogicalOperator6_jl = (BaseEngineController_LS_B.s453_State == 3);

  /* Logic: '<S389>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_action): '<S389>/motohawk_fault_action1'
   */
  rtb_LogicalOperator1_le = !GetFaultActionStatus(7);

  /* RelationalOperator: '<S389>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S389>/motohawk_calibration2'
   */
  rtb_Switch1_pb = (BaseEngineController_LS_B.s636_Merge >=
                    (VEAdaptTemp_DataStore()));

  /* RelationalOperator: '<S389>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S389>/motohawk_calibration3'
   */
  rtb_RelationalOperator2_py = (BaseEngineController_LS_B.s462_Switch >=
    (VEAdaptTime_DataStore()));

  /* Switch: '<S397>/Switch' incorporates:
   *  Constant: '<S397>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S397>/motohawk_data_read'
   */
  if (VEAdpatSource_DataStore()) {
    /* Switch: '<S397>/Switch1' incorporates:
     *  Logic: '<S397>/Logical Operator'
     *  S-Function (motohawk_sfun_data_read): '<S397>/motohawk_data_read1'
     */
    if (BankB_Enbl_DataStore()) {
      rtb_RelationalOperator5_fz =
        (BaseEngineController_LS_B.s477_DataValidState &&
         BaseEngineController_LS_B.s477_DataValidState_f);
    } else {
      rtb_RelationalOperator5_fz = BaseEngineController_LS_B.s477_DataValidState;
    }

    /* End of Switch: '<S397>/Switch1' */
  } else {
    rtb_RelationalOperator5_fz = TRUE;
  }

  /* End of Switch: '<S397>/Switch' */

  /* Logic: '<S389>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S389>/motohawk_calibration'
   */
  BaseEngineController_LS_B.s389_LogicalOperator = ((rtb_LogicalOperator6_jl &&
    rtb_LogicalOperator1_le && BaseEngineController_LS_B.s407_LogicalOperator &&
    rtb_Switch1_pb && rtb_RelationalOperator2_py && (VEAdaptEnable_DataStore()) &&
    rtb_RelationalOperator5_fz));

  /* Outputs for Enabled SubSystem: '<S389>/Adapt VolEff Map' incorporates:
   *  EnablePort: '<S394>/Enable'
   */
  if (BaseEngineController_LS_B.s389_LogicalOperator) {
    /* Product: '<S394>/Divide' incorporates:
     *  Sum: '<S394>/Add'
     */
    rtb_Divide_p = (rtb_DataTypeConversion1_d - rtb_DataTypeConversion_b2) /
      rtb_DataTypeConversion_b2;

    /* S-Function Block: <S399>/motohawk_prelookup */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (VE_AdaptErrorIdxArrIn_DataStore()) = rtb_Divide_p;
      (VE_AdaptErrorIdxArrIdx_DataStore()) = TablePrelookup_real_T(rtb_Divide_p,
        (VE_AdaptErrorIdxArrIdxArr_DataStore()), 10,
        (VE_AdaptErrorIdxArrIdx_DataStore()));
      rtb_motohawk_prelookup_jn = (VE_AdaptErrorIdxArrIdx_DataStore());
    }

    /* S-Function Block: <S399>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_kd = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_jn, (real_T *) ((VEAdaptGainTblTbl_DataStore())),
         10);
      (VEAdaptGainTbl_DataStore()) = rtb_motohawk_interpolation_1d_kd;
    }

    /* Product: '<S394>/Divide1' incorporates:
     *  Product: '<S394>/Divide2'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S399>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_prelookup): '<S399>/motohawk_prelookup'
     */
    rtb_Divide1 = BaseEngineController_LS_B.s389_Sum * rtb_Divide_p *
      rtb_motohawk_interpolation_1d_kd;

    /* S-Function Block: <S394>/motohawk_adapt_table */
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

  /* End of Outputs for SubSystem: '<S389>/Adapt VolEff Map' */

  /* Outputs for Enabled SubSystem: '<S381>/FuelLevelWrite' incorporates:
   *  EnablePort: '<S403>/Enable'
   */
  if (rtb_RelationalOperator_h) {
    /* S-Function (motohawk_sfun_data_write): '<S403>/motohawk_data_write' */
    /* Write to Data Storage as scalar: FuelLvl_NVM */
    {
      FuelLvl_NVM_DataStore() = BaseEngineController_LS_B.s402_Sum1;
    }
  }

  /* End of Outputs for SubSystem: '<S381>/FuelLevelWrite' */

  /* UnitDelay: '<S408>/Unit Delay1' */
  rtb_DesiredLambda_idx_0 = BaseEngineController_LS_DWork.s408_UnitDelay1_DSTATE;

  /* UnitDelay: '<S408>/Unit Delay3' */
  rtb_DesiredLambda_idx_1 = BaseEngineController_LS_DWork.s408_UnitDelay3_DSTATE;

  /* UnitDelay: '<S408>/Unit Delay4' */
  rtb_UnitDelay4_i = BaseEngineController_LS_DWork.s408_UnitDelay4_DSTATE;

  /* UnitDelay: '<S409>/Unit Delay1' */
  rtb_UnitDelay1_k = BaseEngineController_LS_DWork.s409_UnitDelay1_DSTATE;

  /* UnitDelay: '<S409>/Unit Delay3' */
  rtb_UnitDelay3_j = BaseEngineController_LS_DWork.s409_UnitDelay3_DSTATE;

  /* UnitDelay: '<S409>/Unit Delay4' */
  rtb_UnitDelay4_ie = BaseEngineController_LS_DWork.s409_UnitDelay4_DSTATE;

  /* Sum: '<S426>/Sum' */
  rtb_Abs_c = BaseEngineController_LS_B.s683_Merge -
    BaseEngineController_LS_B.s700_Merge;

  /* Abs: '<S426>/Abs' */
  rtb_Abs_c = fabs(rtb_Abs_c);

  /* RelationalOperator: '<S426>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S426>/motohawk_calibration2'
   */
  rtb_RelationalOperator3_h = ((rtb_Abs_c > (APP1_APP2_Max_Deviation_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S426>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: APP_Sensors_Conflict */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(16, rtb_RelationalOperator3_h);
    UpdateFault(16);
  }

  /* RelationalOperator: '<S456>/RelOp' incorporates:
   *  Constant: '<S456>/Constant'
   */
  rtb_LogicalOperator1_er = (BaseEngineController_LS_B.s453_State == 2);

  /* Outputs for Enabled SubSystem: '<S454>/WritePulseState' incorporates:
   *  EnablePort: '<S458>/Enable'
   */
  /* Logic: '<S457>/Logical Operator' incorporates:
   *  Logic: '<S457>/Logical Operator1'
   *  UnitDelay: '<S457>/Unit Delay'
   */
  if (rtb_LogicalOperator1_er &&
      (!BaseEngineController_LS_DWork.s457_UnitDelay_DSTATE)) {
    /* S-Function (motohawk_sfun_data_write): '<S458>/motohawk_data_write' incorporates:
     *  Constant: '<S458>/Constant'
     */
    /* Write to Data Storage as scalar: FuelPulseState */
    {
      FuelPulseState_DataStore() = ((uint8_T)1U);
    }
  }

  /* End of Logic: '<S457>/Logical Operator' */
  /* End of Outputs for SubSystem: '<S454>/WritePulseState' */

  /* S-Function (motohawk_sfun_data_write): '<S432>/motohawk_data_write' */
  /* Write to Data Storage as scalar: EngineState */
  {
    EngineState_DataStore() = BaseEngineController_LS_B.s453_State;
  }

  /* S-Function (motohawk_sfun_data_read): '<S432>/motohawk_data_read' */
  BaseEngineController_LS_B.s432_motohawk_data_read = FuelPulseState_DataStore();

  /* Sum: '<S437>/Sum' */
  rtb_Abs_c = BaseEngineController_LS_B.s717_Merge -
    BaseEngineController_LS_B.s734_Merge;

  /* Abs: '<S437>/Abs' */
  rtb_Abs_c = fabs(rtb_Abs_c);

  /* RelationalOperator: '<S437>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S437>/motohawk_calibration2'
   */
  rtb_RelationalOperator3_or = ((rtb_Abs_c > (TPS1_TPS2_Max_Deviation_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S437>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: TPS_Sensors_Conflict */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(148, rtb_RelationalOperator3_or);
    UpdateFault(148);
  }

  /* Saturate: '<S460>/Saturation' */
  rtb_Saturation_ah = BaseEngineController_LS_B.s460_Sum >= 16000.0 ? 16000.0 :
    BaseEngineController_LS_B.s460_Sum <= 0.0 ? 0.0 :
    BaseEngineController_LS_B.s460_Sum;

  /* S-Function (motohawk_sfun_data_write): '<S460>/motohawk_data_write' */
  /* Write to Data Storage as scalar: TimeSinceKeyOnTimer */
  {
    TimeSinceKeyOnTimer_DataStore() = rtb_Saturation_ah;
  }

  /* Saturate: '<S462>/Saturation' */
  rtb_Saturation_m = BaseEngineController_LS_B.s462_Switch >= 16000.0 ? 16000.0 :
    BaseEngineController_LS_B.s462_Switch <= 0.0 ? 0.0 :
    BaseEngineController_LS_B.s462_Switch;

  /* S-Function (motohawk_sfun_data_write): '<S462>/motohawk_data_write' */
  /* Write to Data Storage as scalar: TimeSinceRunTimer */
  {
    TimeSinceRunTimer_DataStore() = rtb_Saturation_m;
  }

  /* Saturate: '<S464>/Saturation' */
  rtb_Saturation_kf = BaseEngineController_LS_B.s464_Switch >= 16000.0 ? 16000.0
    : BaseEngineController_LS_B.s464_Switch <= 0.0 ? 0.0 :
    BaseEngineController_LS_B.s464_Switch;

  /* S-Function (motohawk_sfun_data_write): '<S464>/motohawk_data_write' */
  /* Write to Data Storage as scalar: TimeSinceStallTimer */
  {
    TimeSinceStallTimer_DataStore() = rtb_Saturation_kf;
  }

  /* Switch: '<S468>/Switch' incorporates:
   *  Constant: '<S468>/Constant2'
   */
  if (rtb_RelationalOperator_jv) {
    rtb_Switch_kj = 0U;
  } else {
    rtb_Switch_kj = rtb_Sum_hh;
  }

  /* End of Switch: '<S468>/Switch' */
  /* RelationalOperator: '<S476>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S476>/motohawk_calibration1'
   */
  rtb_RelationalOperator5_fz =
    (BaseEngineController_LS_B.s476_ReadCANMessage1_o1 >= (uint32_T)((uint16_T)
      (GPS_LatLong_Timeout_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S476>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: GPS_LatLong_Timeout */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(74, rtb_RelationalOperator5_fz);
    UpdateFault(74);
  }

  /* RelationalOperator: '<S476>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S476>/motohawk_calibration'
   */
  rtb_RelationalOperator5_fz = (BaseEngineController_LS_B.s476_ReadCANMessage_o1
    >= (uint32_T)((uint16_T)(GPS_DateTime_Timeout_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S476>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: GPS_DateTime_Timeout */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(73, rtb_RelationalOperator5_fz);
    UpdateFault(73);
  }

  /* RelationalOperator: '<S476>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S476>/motohawk_calibration2'
   */
  rtb_RelationalOperator5_fz =
    (BaseEngineController_LS_B.s476_ReadCANMessage2_o1 >= (uint32_T)((uint16_T)
      (GPS_SpeedDir_Timeout_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S476>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: GPS_SpeedDir_Timeout */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(75, rtb_RelationalOperator5_fz);
    UpdateFault(75);
  }

  /* RelationalOperator: '<S477>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S477>/motohawk_calibration1'
   */
  rtb_RelationalOperator5_fz =
    (BaseEngineController_LS_B.s477_ReadCANMessage1_o1 >= (uint32_T)((uint16_T)
      (Lambda_2_Timeout_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S477>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: Lambda_2_Timeout */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(108, rtb_RelationalOperator5_fz);
    UpdateFault(108);
  }

  /* RelationalOperator: '<S477>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S477>/motohawk_calibration'
   */
  rtb_RelationalOperator5_fz = (BaseEngineController_LS_B.s477_ReadCANMessage_o1
    >= (uint32_T)((uint16_T)(Lambda_1_Timeout_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S477>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: Lambda_1_Timeout */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(107, rtb_RelationalOperator5_fz);
    UpdateFault(107);
  }

  /* Logic: '<S478>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S478>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S478>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S478>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_n = ((MPRD_DataStore() &&
    (BaseEngineController_LS_B.s477_MathFunction >
     (Bank1_EquivRatioInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S478>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: Bank1_EquivRatioRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(19, rtb_LogicalOperator2_n);
    UpdateFault(19);
  }

  /* Logic: '<S478>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S478>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S478>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S478>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_hv = ((MPRD_DataStore() &&
    (BaseEngineController_LS_B.s477_MathFunction <
     (Bank1_EquivRatioInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S478>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: Bank1_EquivRatioRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(20, rtb_LogicalOperator3_hv);
    UpdateFault(20);
  }

  /* Logic: '<S479>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S479>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S479>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S479>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_b = ((MPRD_DataStore() &&
    (BaseEngineController_LS_B.s477_MathFunction1 >
     (Bank2_EquivRatioInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S479>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: Bank2_EquivRatioRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(21, rtb_LogicalOperator2_b);
    UpdateFault(21);
  }

  /* Logic: '<S479>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S479>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S479>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S479>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_od = ((MPRD_DataStore() &&
    (BaseEngineController_LS_B.s477_MathFunction1 <
     (Bank2_EquivRatioInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S479>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: Bank2_EquivRatioRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(22, rtb_LogicalOperator3_od);
    UpdateFault(22);
  }

  /* Logic: '<S498>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S498>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S498>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S498>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_p5 = ((MPRD_DataStore() &&
    (BaseEngineController_LS_B.s471_Gain > (MAFMax_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S498>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: MAFRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(111, rtb_LogicalOperator2_p5);
    UpdateFault(111);
  }

  /* Logic: '<S498>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S498>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S498>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S498>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_k = ((MPRD_DataStore() &&
    (BaseEngineController_LS_B.s471_Gain < (MAFMin_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S498>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: MAFRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(112, rtb_LogicalOperator3_k);
    UpdateFault(112);
  }

  /* Logic: '<S499>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S499>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S499>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S499>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_m = ((MPRD_DataStore() &&
    (BaseEngineController_LS_B.s471_Gain1 > (VSPDMax_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S499>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: VSPDRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(149, rtb_LogicalOperator2_m);
    UpdateFault(149);
  }

  /* Logic: '<S499>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S499>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S499>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S499>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_jn = ((MPRD_DataStore() &&
    (BaseEngineController_LS_B.s471_Gain1 < (VSPDMin_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S499>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: VSPDRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(150, rtb_LogicalOperator3_jn);
    UpdateFault(150);
  }

  /* S-Function Block: <S527>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_DWork.s527_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_ec = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S527>/Switch' incorporates:
   *  Constant: '<S527>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S527>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S527>/motohawk_delta_time'
   *  Sum: '<S527>/Sum'
   */
  if (rtb_Logic_j[0]) {
    rtb_Abs_c = rtb_motohawk_delta_time_ec + TimeSinceVSPDReject_DataStore();
  } else {
    rtb_Abs_c = 0.0;
  }

  /* End of Switch: '<S527>/Switch' */
  /* RelationalOperator: '<S500>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S500>/motohawk_calibration6'
   */
  rtb_RelOp_d = (rtb_Abs_c >= (real_T)((uint8_T)(VSPD_RejectHoldTime_DataStore())));

  /* Saturate: '<S527>/Saturation' */
  rtb_Saturation_l = rtb_Abs_c >= 16000.0 ? 16000.0 : rtb_Abs_c <= 0.0 ? 0.0 :
    rtb_Abs_c;

  /* S-Function (motohawk_sfun_data_write): '<S527>/motohawk_data_write' */
  /* Write to Data Storage as scalar: TimeSinceVSPDReject */
  {
    TimeSinceVSPDReject_DataStore() = rtb_Saturation_l;
  }

  /* RelationalOperator: '<S472>/Relational Operator' incorporates:
   *  Constant: '<S472>/Constant'
   *  S-Function (motohawk_sfun_calibration): '<S472>/motohawk_calibration'
   */
  rtb_RelationalOperator_l = ((0 != ((uint16_T)(PseudoRPM_DataStore()))));

  /* S-Function Block: <S472>/motohawk_encoder_pseudo */
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

  /* DataTypeConversion: '<S472>/Data Type Conversion3' incorporates:
   *  Gain: '<S472>/Gain'
   *  S-Function (motohawk_sfun_calibration): '<S472>/motohawk_calibration1'
   */
  rtb_UnitDelay3_mp = 16.0 * (EngineToEncoderOffset_DataStore());
  if (rtIsNaN(rtb_UnitDelay3_mp) || rtIsInf(rtb_UnitDelay3_mp)) {
    rtb_UnitDelay3_mp = 0.0;
  } else {
    y = rtb_UnitDelay3_mp < 0.0 ? ceil(rtb_UnitDelay3_mp) : floor
      (rtb_UnitDelay3_mp);
    rtb_UnitDelay3_mp = fmod(y, 65536.0);
  }

  rtb_DataTypeConversion3_d = (int16_T)(rtb_UnitDelay3_mp < 0.0 ? (int16_T)
    -(int16_T)(uint16_T)-rtb_UnitDelay3_mp : (int16_T)(uint16_T)
    rtb_UnitDelay3_mp);

  /* End of DataTypeConversion: '<S472>/Data Type Conversion3' */
  /* S-Function Block: <S472>/motohawk_encoder_offset */
  {
    S_EncoderResourceAttributes encoder_attributes;
    encoder_attributes.uValidAttributesMask = USE_ENC_TDC_OFFSET;
    encoder_attributes.s2TDCOffset = rtb_DataTypeConversion3_d;
    SetResourceAttributes(RES_ENCODER, &encoder_attributes, BEHAVIOUR_ENCODER);
  }

  /* RelationalOperator: '<S532>/RelOp' incorporates:
   *  Constant: '<S532>/Constant'
   */
  rtb_RelationalOperator5_fz = (BaseEngineController_LS_B.s535_Sum > 100U);

  /* S-Function Block: <S472>/motohawk_encoder_fault */
  {
    extern uint8_T motohawk_encoder_fault;
    BaseEngineController_LS_B.s472_motohawk_encoder_fault =
      motohawk_encoder_fault;
  }

  /* Logic: '<S528>/Logical Operator' incorporates:
   *  Constant: '<S534>/Constant'
   *  RelationalOperator: '<S534>/RelOp'
   */
  rtb_LogicalOperator_f0 = ((rtb_RelationalOperator5_fz &&
    (BaseEngineController_LS_B.s472_motohawk_encoder_fault == 1)));

  /* S-Function (motohawk_sfun_fault_def): '<S528>/motohawk_fault_def' */

  /* Set Fault Suspected Status: CrankSyncFault */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(27, rtb_LogicalOperator_f0);
    UpdateFault(27);
  }

  /* Logic: '<S528>/Logical Operator1' incorporates:
   *  Constant: '<S533>/Constant'
   *  RelationalOperator: '<S533>/RelOp'
   */
  rtb_LogicalOperator1_dw = ((rtb_RelationalOperator5_fz &&
    (BaseEngineController_LS_B.s472_motohawk_encoder_fault == 3)));

  /* S-Function (motohawk_sfun_fault_def): '<S528>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: CrankEdgesFault */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(26, rtb_LogicalOperator1_dw);
    UpdateFault(26);
  }

  /* Logic: '<S528>/Logical Operator2' incorporates:
   *  Constant: '<S530>/Constant'
   *  RelationalOperator: '<S530>/RelOp'
   */
  rtb_LogicalOperator2_g = ((rtb_RelationalOperator5_fz &&
    (BaseEngineController_LS_B.s472_motohawk_encoder_fault == 4)));

  /* S-Function (motohawk_sfun_fault_def): '<S528>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: CamEdgesFault */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(23, rtb_LogicalOperator2_g);
    UpdateFault(23);
  }

  /* Logic: '<S528>/Logical Operator3' incorporates:
   *  Constant: '<S531>/Constant'
   *  RelationalOperator: '<S531>/RelOp'
   */
  rtb_LogicalOperator3_nz = ((rtb_RelationalOperator5_fz &&
    (BaseEngineController_LS_B.s472_motohawk_encoder_fault == 5)));

  /* S-Function (motohawk_sfun_fault_def): '<S528>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: CamSyncFault */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(24, rtb_LogicalOperator3_nz);
    UpdateFault(24);
  }

  /* S-Function Block: <S472>/motohawk_encoder_state */
  {
    extern uint8_T motohawk_encoder_status;
    BaseEngineController_LS_B.s472_motohawk_encoder_state =
      motohawk_encoder_status;
  }

  /* Logic: '<S537>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S537>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S537>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S537>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_kx = ((MPRD_DataStore() && (rtb_DataTypeConversion_ik >
    (ACPresInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S537>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: ACPresRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(2, rtb_LogicalOperator2_kx);
    UpdateFault(2);
  }

  /* Logic: '<S537>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S537>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S537>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S537>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_mz = ((MPRD_DataStore() && (rtb_DataTypeConversion_ik <
    (ACPresInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S537>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: ACPresRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(3, rtb_LogicalOperator3_mz);
    UpdateFault(3);
  }

  /* Logic: '<S538>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S538>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S538>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S538>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_j = ((MPRD_DataStore() && (rtb_DataTypeConversion_e >
    (FuelSensInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S538>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: FuelSensRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(69, rtb_LogicalOperator2_j);
    UpdateFault(69);
  }

  /* Logic: '<S538>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S538>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S538>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S538>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_ij = ((MPRD_DataStore() && (rtb_DataTypeConversion_e <
    (FuelSensInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S538>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: FuelSensRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(70, rtb_LogicalOperator3_ij);
    UpdateFault(70);
  }

  /* Logic: '<S539>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S539>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S539>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S539>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_f4 = ((MPRD_DataStore() && (rtb_DataTypeConversion_gx >
    (FuelPresInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S539>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: FuelPresRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(67, rtb_LogicalOperator2_f4);
    UpdateFault(67);
  }

  /* Logic: '<S539>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S539>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S539>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S539>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_ns = ((MPRD_DataStore() && (rtb_DataTypeConversion_gx <
    (FuelPresInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S539>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: FuelPresRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(68, rtb_LogicalOperator3_ns);
    UpdateFault(68);
  }

  /* Logic: '<S540>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S540>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S540>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S540>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_fw = ((MPRD_DataStore() &&
    (BaseEngineController_LS_B.s542_Merge > (MAPInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S540>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: MAPRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(113, rtb_LogicalOperator2_fw);
    UpdateFault(113);
  }

  /* Logic: '<S540>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S540>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S540>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S540>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_l = ((MPRD_DataStore() &&
    (BaseEngineController_LS_B.s542_Merge < (MAPInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S540>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: MAPRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(114, rtb_LogicalOperator3_l);
    UpdateFault(114);
  }

  /* Logic: '<S541>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S541>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S541>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S541>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_a = ((MPRD_DataStore() && (rtb_DataTypeConversion_fq >
    (MAPTimeInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S541>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: MAPTimeRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(115, rtb_LogicalOperator2_a);
    UpdateFault(115);
  }

  /* Logic: '<S541>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S541>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S541>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S541>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_d = ((MPRD_DataStore() && (rtb_DataTypeConversion_fq <
    (MAPTimeInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S541>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: MAPTimeRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(116, rtb_LogicalOperator3_d);
    UpdateFault(116);
  }

  /* Logic: '<S543>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S543>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S543>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S543>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_fm = ((MPRD_DataStore() && (rtb_Switch4_i >
    (OilPresInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S543>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: OilPresRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(128, rtb_LogicalOperator2_fm);
    UpdateFault(128);
  }

  /* Logic: '<S543>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S543>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S543>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S543>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_ak = ((MPRD_DataStore() && (rtb_Switch4_i <
    (OilPresInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S543>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: OilPresRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(129, rtb_LogicalOperator3_ak);
    UpdateFault(129);
  }

  /* Logic: '<S544>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S544>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S544>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S544>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_gc = ((MPRD_DataStore() && (rtb_Abs_k >
    (SensVoltInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S544>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: SensVoltRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(131, rtb_LogicalOperator2_gc);
    UpdateFault(131);
  }

  /* Logic: '<S544>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S544>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S544>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S544>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_e = ((MPRD_DataStore() && (rtb_Abs_k <
    (SensVoltInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S544>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: SensVoltRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(132, rtb_LogicalOperator3_e);
    UpdateFault(132);
  }

  /* Logic: '<S545>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S545>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S545>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S545>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_bm = ((MPRD_DataStore() &&
    (rtb_Multiplyby10ifnotyetenabled_c > (SysVoltInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S545>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: SysVoltRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(134, rtb_LogicalOperator2_bm);
    UpdateFault(134);
  }

  /* Logic: '<S545>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S545>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S545>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S545>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_g = ((MPRD_DataStore() &&
    (rtb_Multiplyby10ifnotyetenabled_c < (SysVoltInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S545>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: SysVoltRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(135, rtb_LogicalOperator3_g);
    UpdateFault(135);
  }

  /* S-Function (motohawk_sfun_trigger): '<S659>/motohawk_trigger' */
  /* Enable for Trigger_FGND_20XRTI_PERIODIC_9388p0006 */
  if (BaseEngineController_LS_DWork.s659_motohawk_trigger_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s659_motohawk_trigger_DWORK1 = 1;
  }

  /* Logic: '<S659>/Logical Operator' incorporates:
   *  RelationalOperator: '<S659>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S659>/motohawk_calibration'
   *  S-Function (motohawk_sfun_data_read): '<S659>/motohawk_data_read1'
   */
  rtb_Switch1_pb = (BaseEngineController_LS_B.s665_LogicalOperator &&
                    (APP1_AdaptADC_DataStore() <
                     (APP1LowAdaptADCThresh_DataStore())));

  /* Logic: '<S659>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S659>/Relational Operator1'
   *  S-Function (motohawk_sfun_calibration): '<S659>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S659>/motohawk_data_read1'
   */
  rtb_LogicalOperator6_jl = (BaseEngineController_LS_B.s665_LogicalOperator &&
    (APP1_AdaptADC_DataStore() > (APP1HiAdaptADCThresh_DataStore())));

  /* S-Function (motohawk_sfun_trigger): '<S660>/motohawk_trigger' */
  /* Enable for Trigger_FGND_20XRTI_PERIODIC_9522p0006 */
  if (BaseEngineController_LS_DWork.s660_motohawk_trigger_DWORK1 == 0) {
    BaseEngineController_LS_DWork.s660_motohawk_trigger_DWORK1 = 1;
  }

  /* Logic: '<S660>/Logical Operator' incorporates:
   *  RelationalOperator: '<S660>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S660>/motohawk_calibration'
   *  S-Function (motohawk_sfun_data_read): '<S660>/motohawk_data_read1'
   */
  rtb_RelationalOperator3_bp = (BaseEngineController_LS_B.s667_LogicalOperator &&
                                (APP2_AdaptADC_DataStore() <
    (APP2LowAdaptADCThresh_DataStore())));

  /* Logic: '<S660>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S660>/Relational Operator1'
   *  S-Function (motohawk_sfun_calibration): '<S660>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S660>/motohawk_data_read1'
   */
  rtb_RelationalOperator2_py = (BaseEngineController_LS_B.s667_LogicalOperator &&
                                (APP2_AdaptADC_DataStore() >
    (APP2HiAdaptADCThresh_DataStore())));

  /* RelationalOperator: '<S670>/Relational Operator5' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S670>/motohawk_calibration5'
   */
  rtb_RelationalOperator5_l = ((BaseEngineController_LS_B.s661_Switch >
    (APP1_AdaptInputHiFltPos_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S670>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: APP1_AdaptRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(8, rtb_RelationalOperator5_l);
    UpdateFault(8);
  }

  /* RelationalOperator: '<S670>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S670>/motohawk_calibration6'
   */
  rtb_RelationalOperator4_bl = ((BaseEngineController_LS_B.s661_Switch <
    (APP1_AdaptInputLoFltPos_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S670>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: APP1_AdaptRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(9, rtb_RelationalOperator4_bl);
    UpdateFault(9);
  }

  /* RelationalOperator: '<S670>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S661>/motohawk_calibration9'
   */
  rtb_RelationalOperator_c1 = ((BaseEngineController_LS_B.s669_MinMax >
    (APP1_AdaptAdapt_Low_Max_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S670>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: APP1_AdaptAdaptLoMax */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(6, rtb_RelationalOperator_c1);
    UpdateFault(6);
  }

  /* RelationalOperator: '<S670>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S661>/motohawk_calibration12'
   */
  rtb_RelationalOperator3_p4 = ((BaseEngineController_LS_B.s669_MinMax1 >
    (APP1_AdaptAdapt_Hi_Max_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S670>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: APP1_AdaptAdaptHiMax */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(4, rtb_RelationalOperator3_p4);
    UpdateFault(4);
  }

  /* RelationalOperator: '<S670>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S661>/motohawk_calibration11'
   */
  rtb_RelationalOperator2_k2 = ((BaseEngineController_LS_B.s669_MinMax1 <
    (APP1_AdaptAdapt_Hi_Min_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S670>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: APP1_AdaptAdaptHiMin */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(5, rtb_RelationalOperator2_k2);
    UpdateFault(5);
  }

  /* RelationalOperator: '<S670>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S661>/motohawk_calibration10'
   */
  rtb_RelationalOperator1_n = ((BaseEngineController_LS_B.s669_MinMax <
    (APP1_AdaptAdapt_Low_Min_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S670>/motohawk_fault_def8' */

  /* Set Fault Suspected Status: APP1_AdaptAdaptLoMin */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(7, rtb_RelationalOperator1_n);
    UpdateFault(7);
  }

  /* UnitDelay: '<S676>/Unit Delay1' */
  rtb_Abs_c = BaseEngineController_LS_DWork.s676_UnitDelay1_DSTATE;

  /* UnitDelay: '<S676>/Unit Delay' */
  rtb_DataTypeConversion1_d =
    BaseEngineController_LS_DWork.s676_UnitDelay_DSTATE;

  /* UnitDelay: '<S676>/Unit Delay3' */
  rtb_DataTypeConversion_b2 =
    BaseEngineController_LS_DWork.s676_UnitDelay3_DSTATE;

  /* UnitDelay: '<S676>/Unit Delay4' */
  rtb_Product1_gw = BaseEngineController_LS_DWork.s676_UnitDelay4_DSTATE;

  /* MinMax: '<S676>/MinMax1' incorporates:
   *  UnitDelay: '<S676>/Unit Delay'
   *  UnitDelay: '<S676>/Unit Delay3'
   *  UnitDelay: '<S676>/Unit Delay4'
   */
  y = (rtb_Abs_c <= BaseEngineController_LS_DWork.s676_UnitDelay_DSTATE) ||
    rtIsNaN(BaseEngineController_LS_DWork.s676_UnitDelay_DSTATE) ? rtb_Abs_c :
    BaseEngineController_LS_DWork.s676_UnitDelay_DSTATE;
  y = (y <= BaseEngineController_LS_DWork.s676_UnitDelay3_DSTATE) || rtIsNaN
    (BaseEngineController_LS_DWork.s676_UnitDelay3_DSTATE) ? y :
    BaseEngineController_LS_DWork.s676_UnitDelay3_DSTATE;
  y = (y <= BaseEngineController_LS_DWork.s676_UnitDelay4_DSTATE) || rtIsNaN
    (BaseEngineController_LS_DWork.s676_UnitDelay4_DSTATE) ? y :
    BaseEngineController_LS_DWork.s676_UnitDelay4_DSTATE;
  y = (y <= BaseEngineController_LS_B.s661_Switch) || rtIsNaN
    (BaseEngineController_LS_B.s661_Switch) ? y :
    BaseEngineController_LS_B.s661_Switch;

  /* RelationalOperator: '<S674>/Relational Operator9' incorporates:
   *  MinMax: '<S676>/MinMax1'
   */
  rtb_LogicalOperator1_le = (y > BaseEngineController_LS_B.s669_MinMax1);

  /* RelationalOperator: '<S674>/Relational Operator5' incorporates:
   *  MinMax: '<S676>/MinMax1'
   *  S-Function (motohawk_sfun_calibration): '<S661>/motohawk_calibration12'
   */
  rtb_RelationalOperator5_fz = (y <= (APP1_AdaptAdapt_Hi_Max_DataStore()));

  /* RelationalOperator: '<S674>/Relational Operator6' incorporates:
   *  MinMax: '<S676>/MinMax1'
   *  S-Function (motohawk_sfun_calibration): '<S661>/motohawk_calibration11'
   */
  rtb_RelationalOperator6_h = (y >= (APP1_AdaptAdapt_Hi_Min_DataStore()));

  /* Sum: '<S674>/Sum2' incorporates:
   *  MinMax: '<S676>/MinMax1'
   */
  rtb_Abs_k = y - BaseEngineController_LS_B.s669_MinMax1;

  /* Abs: '<S674>/Abs' */
  rtb_Abs_k = fabs(rtb_Abs_k);

  /* Outputs for Enabled SubSystem: '<S674>/Store Current Position' incorporates:
   *  EnablePort: '<S677>/Enable'
   */
  /* Logic: '<S674>/Logical Operator2' incorporates:
   *  Logic: '<S674>/Logical Operator1'
   *  Logic: '<S674>/Logical Operator4'
   *  RelationalOperator: '<S674>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S669>/motohawk_calibration14'
   *  S-Function (motohawk_sfun_calibration): '<S669>/motohawk_calibration2'
   */
  if ((rtb_LogicalOperator1_le && rtb_RelationalOperator5_fz &&
       rtb_RelationalOperator6_h && (APP1_AdaptAdaptHiEnable_DataStore()) &&
       (rtb_Abs_k > (APP1_AdaptAdapt_Delta_DataStore()))) ||
      (rtb_RelationalOperator5_fz && rtb_RelationalOperator6_h &&
       (APP1_AdaptAdaptHiEnable_DataStore()) && rtb_LogicalOperator6_jl)) {
    /* DataTypeConversion: '<S677>/Data Type Conversion2' incorporates:
     *  MinMax: '<S676>/MinMax1'
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

    /* End of DataTypeConversion: '<S677>/Data Type Conversion2' */

    /* S-Function (motohawk_sfun_data_write): '<S677>/motohawk_data_write' */
    /* Write to Data Storage as scalar: APP1_AdaptRaw_Adpt_Hi */
    {
      APP1_AdaptRaw_Adpt_Hi_DataStore() = rtb_DataTypeConversion2_d;
    }
  }

  /* End of Logic: '<S674>/Logical Operator2' */
  /* End of Outputs for SubSystem: '<S674>/Store Current Position' */

  /* MinMax: '<S676>/MinMax' */
  y = (BaseEngineController_LS_B.s661_Switch >= rtb_Product1_gw) || rtIsNaN
    (rtb_Product1_gw) ? BaseEngineController_LS_B.s661_Switch : rtb_Product1_gw;
  y = (y >= rtb_DataTypeConversion_b2) || rtIsNaN(rtb_DataTypeConversion_b2) ? y
    : rtb_DataTypeConversion_b2;
  y = (y >= rtb_DataTypeConversion1_d) || rtIsNaN(rtb_DataTypeConversion1_d) ? y
    : rtb_DataTypeConversion1_d;
  rtb_Abs_k = (y >= rtb_Abs_c) || rtIsNaN(rtb_Abs_c) ? y : rtb_Abs_c;

  /* RelationalOperator: '<S675>/Relational Operator9' incorporates:
   *  MinMax: '<S676>/MinMax'
   */
  rtb_LogicalOperator6_jl = (rtb_Abs_k < BaseEngineController_LS_B.s669_MinMax);

  /* RelationalOperator: '<S675>/Relational Operator5' incorporates:
   *  MinMax: '<S676>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S661>/motohawk_calibration9'
   */
  rtb_RelationalOperator5_fz = (rtb_Abs_k <= (APP1_AdaptAdapt_Low_Max_DataStore()));

  /* RelationalOperator: '<S675>/Relational Operator6' incorporates:
   *  MinMax: '<S676>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S661>/motohawk_calibration10'
   */
  rtb_RelationalOperator6_h = (rtb_Abs_k >= (APP1_AdaptAdapt_Low_Min_DataStore()));

  /* Sum: '<S675>/Sum2' incorporates:
   *  MinMax: '<S676>/MinMax'
   */
  rtb_Abs_c = rtb_Abs_k - BaseEngineController_LS_B.s669_MinMax;

  /* Abs: '<S675>/Abs' */
  rtb_Abs_c = fabs(rtb_Abs_c);

  /* Outputs for Enabled SubSystem: '<S675>/Store Current Position' incorporates:
   *  EnablePort: '<S678>/Enable'
   */
  /* Logic: '<S675>/Logical Operator2' incorporates:
   *  Logic: '<S675>/Logical Operator1'
   *  Logic: '<S675>/Logical Operator4'
   *  RelationalOperator: '<S675>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S669>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S669>/motohawk_calibration14'
   */
  if ((rtb_LogicalOperator6_jl && rtb_RelationalOperator5_fz &&
       rtb_RelationalOperator6_h && (APP1_AdaptAdaptLoEnable_DataStore()) &&
       (rtb_Abs_c > (APP1_AdaptAdapt_Delta_DataStore()))) ||
      (rtb_RelationalOperator5_fz && rtb_RelationalOperator6_h &&
       (APP1_AdaptAdaptLoEnable_DataStore()) && rtb_Switch1_pb)) {
    /* DataTypeConversion: '<S678>/Data Type Conversion2' incorporates:
     *  MinMax: '<S676>/MinMax'
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

    /* End of DataTypeConversion: '<S678>/Data Type Conversion2' */

    /* S-Function (motohawk_sfun_data_write): '<S678>/motohawk_data_write' */
    /* Write to Data Storage as scalar: APP1_AdaptRaw_Adpt_Low */
    {
      APP1_AdaptRaw_Adpt_Low_DataStore() = rtb_DataTypeConversion2_hr;
    }
  }

  /* End of Logic: '<S675>/Logical Operator2' */
  /* End of Outputs for SubSystem: '<S675>/Store Current Position' */

  /* RelationalOperator: '<S687>/Relational Operator5' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S687>/motohawk_calibration5'
   */
  rtb_RelationalOperator5_a = ((BaseEngineController_LS_B.s662_Switch >
    (APP2_AdaptInputHiFltPos_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S687>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: APP2_AdaptRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(14, rtb_RelationalOperator5_a);
    UpdateFault(14);
  }

  /* RelationalOperator: '<S687>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S687>/motohawk_calibration6'
   */
  rtb_RelationalOperator4_d = ((BaseEngineController_LS_B.s662_Switch <
    (APP2_AdaptInputLoFltPos_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S687>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: APP2_AdaptRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(15, rtb_RelationalOperator4_d);
    UpdateFault(15);
  }

  /* RelationalOperator: '<S687>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S662>/motohawk_calibration9'
   */
  rtb_RelationalOperator_f = ((BaseEngineController_LS_B.s686_MinMax >
    (APP2_AdaptAdapt_Low_Max_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S687>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: APP2_AdaptAdaptLoMax */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(12, rtb_RelationalOperator_f);
    UpdateFault(12);
  }

  /* RelationalOperator: '<S687>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S662>/motohawk_calibration12'
   */
  rtb_RelationalOperator3_n3 = ((BaseEngineController_LS_B.s686_MinMax1 >
    (APP2_AdaptAdapt_Hi_Max_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S687>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: APP2_AdaptAdaptHiMax */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(10, rtb_RelationalOperator3_n3);
    UpdateFault(10);
  }

  /* RelationalOperator: '<S687>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S662>/motohawk_calibration11'
   */
  rtb_RelationalOperator2_ma = ((BaseEngineController_LS_B.s686_MinMax1 <
    (APP2_AdaptAdapt_Hi_Min_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S687>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: APP2_AdaptAdaptHiMin */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(11, rtb_RelationalOperator2_ma);
    UpdateFault(11);
  }

  /* RelationalOperator: '<S687>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S662>/motohawk_calibration10'
   */
  rtb_RelationalOperator1_gr = ((BaseEngineController_LS_B.s686_MinMax <
    (APP2_AdaptAdapt_Low_Min_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S687>/motohawk_fault_def8' */

  /* Set Fault Suspected Status: APP2_AdaptAdaptLoMin */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(13, rtb_RelationalOperator1_gr);
    UpdateFault(13);
  }

  /* UnitDelay: '<S693>/Unit Delay1' */
  rtb_Abs_c = BaseEngineController_LS_DWork.s693_UnitDelay1_DSTATE;

  /* UnitDelay: '<S693>/Unit Delay' */
  rtb_Switch3_p = BaseEngineController_LS_DWork.s693_UnitDelay_DSTATE;

  /* UnitDelay: '<S693>/Unit Delay3' */
  rtb_Switch2_a = BaseEngineController_LS_DWork.s693_UnitDelay3_DSTATE;

  /* UnitDelay: '<S693>/Unit Delay4' */
  rtb_Switch1_f = BaseEngineController_LS_DWork.s693_UnitDelay4_DSTATE;

  /* MinMax: '<S693>/MinMax1' incorporates:
   *  UnitDelay: '<S693>/Unit Delay'
   *  UnitDelay: '<S693>/Unit Delay3'
   *  UnitDelay: '<S693>/Unit Delay4'
   */
  y = (rtb_Abs_c <= BaseEngineController_LS_DWork.s693_UnitDelay_DSTATE) ||
    rtIsNaN(BaseEngineController_LS_DWork.s693_UnitDelay_DSTATE) ? rtb_Abs_c :
    BaseEngineController_LS_DWork.s693_UnitDelay_DSTATE;
  y = (y <= BaseEngineController_LS_DWork.s693_UnitDelay3_DSTATE) || rtIsNaN
    (BaseEngineController_LS_DWork.s693_UnitDelay3_DSTATE) ? y :
    BaseEngineController_LS_DWork.s693_UnitDelay3_DSTATE;
  y = (y <= BaseEngineController_LS_DWork.s693_UnitDelay4_DSTATE) || rtIsNaN
    (BaseEngineController_LS_DWork.s693_UnitDelay4_DSTATE) ? y :
    BaseEngineController_LS_DWork.s693_UnitDelay4_DSTATE;
  y = (y <= BaseEngineController_LS_B.s662_Switch) || rtIsNaN
    (BaseEngineController_LS_B.s662_Switch) ? y :
    BaseEngineController_LS_B.s662_Switch;

  /* RelationalOperator: '<S691>/Relational Operator9' incorporates:
   *  MinMax: '<S693>/MinMax1'
   */
  rtb_LogicalOperator6_jl = (y > BaseEngineController_LS_B.s686_MinMax1);

  /* RelationalOperator: '<S691>/Relational Operator5' incorporates:
   *  MinMax: '<S693>/MinMax1'
   *  S-Function (motohawk_sfun_calibration): '<S662>/motohawk_calibration12'
   */
  rtb_RelationalOperator5_fz = (y <= (APP2_AdaptAdapt_Hi_Max_DataStore()));

  /* RelationalOperator: '<S691>/Relational Operator6' incorporates:
   *  MinMax: '<S693>/MinMax1'
   *  S-Function (motohawk_sfun_calibration): '<S662>/motohawk_calibration11'
   */
  rtb_RelationalOperator6_h = (y >= (APP2_AdaptAdapt_Hi_Min_DataStore()));

  /* Sum: '<S691>/Sum2' incorporates:
   *  MinMax: '<S693>/MinMax1'
   */
  rtb_Abs_k = y - BaseEngineController_LS_B.s686_MinMax1;

  /* Abs: '<S691>/Abs' */
  rtb_Abs_k = fabs(rtb_Abs_k);

  /* Outputs for Enabled SubSystem: '<S691>/Store Current Position' incorporates:
   *  EnablePort: '<S694>/Enable'
   */
  /* Logic: '<S691>/Logical Operator2' incorporates:
   *  Logic: '<S691>/Logical Operator1'
   *  Logic: '<S691>/Logical Operator4'
   *  RelationalOperator: '<S691>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S686>/motohawk_calibration14'
   *  S-Function (motohawk_sfun_calibration): '<S686>/motohawk_calibration2'
   */
  if ((rtb_LogicalOperator6_jl && rtb_RelationalOperator5_fz &&
       rtb_RelationalOperator6_h && (APP2_AdaptAdaptHiEnable_DataStore()) &&
       (rtb_Abs_k > (APP2_AdaptAdapt_Delta_DataStore()))) ||
      (rtb_RelationalOperator5_fz && rtb_RelationalOperator6_h &&
       (APP2_AdaptAdaptHiEnable_DataStore()) && rtb_RelationalOperator2_py)) {
    /* DataTypeConversion: '<S694>/Data Type Conversion2' incorporates:
     *  MinMax: '<S693>/MinMax1'
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

    /* End of DataTypeConversion: '<S694>/Data Type Conversion2' */

    /* S-Function (motohawk_sfun_data_write): '<S694>/motohawk_data_write' */
    /* Write to Data Storage as scalar: APP2_AdaptRaw_Adpt_Hi */
    {
      APP2_AdaptRaw_Adpt_Hi_DataStore() = rtb_DataTypeConversion2_h;
    }
  }

  /* End of Logic: '<S691>/Logical Operator2' */
  /* End of Outputs for SubSystem: '<S691>/Store Current Position' */

  /* MinMax: '<S693>/MinMax' */
  y = (BaseEngineController_LS_B.s662_Switch >= rtb_Switch1_f) || rtIsNaN
    (rtb_Switch1_f) ? BaseEngineController_LS_B.s662_Switch : rtb_Switch1_f;
  y = (y >= rtb_Switch2_a) || rtIsNaN(rtb_Switch2_a) ? y : rtb_Switch2_a;
  y = (y >= rtb_Switch3_p) || rtIsNaN(rtb_Switch3_p) ? y : rtb_Switch3_p;
  rtb_Abs_k = (y >= rtb_Abs_c) || rtIsNaN(rtb_Abs_c) ? y : rtb_Abs_c;

  /* RelationalOperator: '<S692>/Relational Operator9' incorporates:
   *  MinMax: '<S693>/MinMax'
   */
  rtb_LogicalOperator6_jl = (rtb_Abs_k < BaseEngineController_LS_B.s686_MinMax);

  /* RelationalOperator: '<S692>/Relational Operator5' incorporates:
   *  MinMax: '<S693>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S662>/motohawk_calibration9'
   */
  rtb_RelationalOperator5_fz = (rtb_Abs_k <= (APP2_AdaptAdapt_Low_Max_DataStore()));

  /* RelationalOperator: '<S692>/Relational Operator6' incorporates:
   *  MinMax: '<S693>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S662>/motohawk_calibration10'
   */
  rtb_RelationalOperator6_h = (rtb_Abs_k >= (APP2_AdaptAdapt_Low_Min_DataStore()));

  /* Sum: '<S692>/Sum2' incorporates:
   *  MinMax: '<S693>/MinMax'
   */
  rtb_Abs_c = rtb_Abs_k - BaseEngineController_LS_B.s686_MinMax;

  /* Abs: '<S692>/Abs' */
  rtb_Abs_c = fabs(rtb_Abs_c);

  /* Outputs for Enabled SubSystem: '<S692>/Store Current Position' incorporates:
   *  EnablePort: '<S695>/Enable'
   */
  /* Logic: '<S692>/Logical Operator2' incorporates:
   *  Logic: '<S692>/Logical Operator1'
   *  Logic: '<S692>/Logical Operator4'
   *  RelationalOperator: '<S692>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S686>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S686>/motohawk_calibration14'
   */
  if ((rtb_LogicalOperator6_jl && rtb_RelationalOperator5_fz &&
       rtb_RelationalOperator6_h && (APP2_AdaptAdaptLoEnable_DataStore()) &&
       (rtb_Abs_c > (APP2_AdaptAdapt_Delta_DataStore()))) ||
      (rtb_RelationalOperator5_fz && rtb_RelationalOperator6_h &&
       (APP2_AdaptAdaptLoEnable_DataStore()) && rtb_RelationalOperator3_bp)) {
    /* DataTypeConversion: '<S695>/Data Type Conversion2' incorporates:
     *  MinMax: '<S693>/MinMax'
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

    /* End of DataTypeConversion: '<S695>/Data Type Conversion2' */

    /* S-Function (motohawk_sfun_data_write): '<S695>/motohawk_data_write' */
    /* Write to Data Storage as scalar: APP2_AdaptRaw_Adpt_Low */
    {
      APP2_AdaptRaw_Adpt_Low_DataStore() = rtb_DataTypeConversion2_p2;
    }
  }

  /* End of Logic: '<S692>/Logical Operator2' */
  /* End of Outputs for SubSystem: '<S692>/Store Current Position' */

  /* RelationalOperator: '<S704>/Relational Operator5' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S704>/motohawk_calibration5'
   */
  rtb_RelationalOperator5_k = ((BaseEngineController_LS_B.s663_Switch >
    (TPS1InputHiFltPos_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S704>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: TPS1RangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(140, rtb_RelationalOperator5_k);
    UpdateFault(140);
  }

  /* RelationalOperator: '<S704>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S704>/motohawk_calibration6'
   */
  rtb_RelationalOperator4_p = ((BaseEngineController_LS_B.s663_Switch <
    (TPS1InputLoFltPos_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S704>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: TPS1RangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(141, rtb_RelationalOperator4_p);
    UpdateFault(141);
  }

  /* RelationalOperator: '<S704>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S663>/motohawk_calibration9'
   */
  rtb_RelationalOperator_cz = ((BaseEngineController_LS_B.s703_MinMax >
    (TPS1Adapt_Low_Max_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S704>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: TPS1AdaptLoMax */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(138, rtb_RelationalOperator_cz);
    UpdateFault(138);
  }

  /* RelationalOperator: '<S704>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S663>/motohawk_calibration12'
   */
  rtb_RelationalOperator3_kn = ((BaseEngineController_LS_B.s703_MinMax1 >
    (TPS1Adapt_Hi_Max_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S704>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: TPS1AdaptHiMax */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(136, rtb_RelationalOperator3_kn);
    UpdateFault(136);
  }

  /* RelationalOperator: '<S704>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S663>/motohawk_calibration11'
   */
  rtb_RelationalOperator2_id = ((BaseEngineController_LS_B.s703_MinMax1 <
    (TPS1Adapt_Hi_Min_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S704>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: TPS1AdaptHiMin */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(137, rtb_RelationalOperator2_id);
    UpdateFault(137);
  }

  /* RelationalOperator: '<S704>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S663>/motohawk_calibration10'
   */
  rtb_RelationalOperator1_px = ((BaseEngineController_LS_B.s703_MinMax <
    (TPS1Adapt_Low_Min_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S704>/motohawk_fault_def8' */

  /* Set Fault Suspected Status: TPS1AdaptLoMin */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(139, rtb_RelationalOperator1_px);
    UpdateFault(139);
  }

  /* UnitDelay: '<S710>/Unit Delay1' */
  rtb_Abs_c = BaseEngineController_LS_DWork.s710_UnitDelay1_DSTATE;

  /* UnitDelay: '<S710>/Unit Delay' */
  rtb_Switch_om = BaseEngineController_LS_DWork.s710_UnitDelay_DSTATE;

  /* UnitDelay: '<S710>/Unit Delay3' */
  rtb_Switch4_i = BaseEngineController_LS_DWork.s710_UnitDelay3_DSTATE;

  /* UnitDelay: '<S710>/Unit Delay4' */
  rtb_Multiplyby10ifnotyetenabled_c =
    BaseEngineController_LS_DWork.s710_UnitDelay4_DSTATE;

  /* MinMax: '<S710>/MinMax1' incorporates:
   *  UnitDelay: '<S710>/Unit Delay'
   *  UnitDelay: '<S710>/Unit Delay3'
   *  UnitDelay: '<S710>/Unit Delay4'
   */
  y = (rtb_Abs_c <= BaseEngineController_LS_DWork.s710_UnitDelay_DSTATE) ||
    rtIsNaN(BaseEngineController_LS_DWork.s710_UnitDelay_DSTATE) ? rtb_Abs_c :
    BaseEngineController_LS_DWork.s710_UnitDelay_DSTATE;
  y = (y <= BaseEngineController_LS_DWork.s710_UnitDelay3_DSTATE) || rtIsNaN
    (BaseEngineController_LS_DWork.s710_UnitDelay3_DSTATE) ? y :
    BaseEngineController_LS_DWork.s710_UnitDelay3_DSTATE;
  y = (y <= BaseEngineController_LS_DWork.s710_UnitDelay4_DSTATE) || rtIsNaN
    (BaseEngineController_LS_DWork.s710_UnitDelay4_DSTATE) ? y :
    BaseEngineController_LS_DWork.s710_UnitDelay4_DSTATE;
  y = (y <= BaseEngineController_LS_B.s663_Switch) || rtIsNaN
    (BaseEngineController_LS_B.s663_Switch) ? y :
    BaseEngineController_LS_B.s663_Switch;

  /* RelationalOperator: '<S708>/Relational Operator9' incorporates:
   *  MinMax: '<S710>/MinMax1'
   */
  rtb_LogicalOperator6_jl = (y > BaseEngineController_LS_B.s703_MinMax1);

  /* RelationalOperator: '<S708>/Relational Operator5' incorporates:
   *  MinMax: '<S710>/MinMax1'
   *  S-Function (motohawk_sfun_calibration): '<S663>/motohawk_calibration12'
   */
  rtb_RelationalOperator5_fz = (y <= (TPS1Adapt_Hi_Max_DataStore()));

  /* RelationalOperator: '<S708>/Relational Operator6' incorporates:
   *  MinMax: '<S710>/MinMax1'
   *  S-Function (motohawk_sfun_calibration): '<S663>/motohawk_calibration11'
   */
  rtb_RelationalOperator6_h = (y >= (TPS1Adapt_Hi_Min_DataStore()));

  /* Sum: '<S708>/Sum2' incorporates:
   *  MinMax: '<S710>/MinMax1'
   */
  rtb_Abs_k = y - BaseEngineController_LS_B.s703_MinMax1;

  /* Abs: '<S708>/Abs' */
  rtb_Abs_k = fabs(rtb_Abs_k);

  /* Outputs for Enabled SubSystem: '<S708>/Store Current Position' incorporates:
   *  EnablePort: '<S711>/Enable'
   */
  /* Logic: '<S708>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S708>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S703>/motohawk_calibration14'
   *  S-Function (motohawk_sfun_calibration): '<S703>/motohawk_calibration2'
   */
  if (rtb_LogicalOperator6_jl && rtb_RelationalOperator5_fz &&
      rtb_RelationalOperator6_h && (TPS1AdaptHiEnable_DataStore()) && (rtb_Abs_k
       > (TPS1Adapt_Delta_DataStore()))) {
    /* DataTypeConversion: '<S711>/Data Type Conversion2' incorporates:
     *  MinMax: '<S710>/MinMax1'
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

    /* End of DataTypeConversion: '<S711>/Data Type Conversion2' */

    /* S-Function (motohawk_sfun_data_write): '<S711>/motohawk_data_write' */
    /* Write to Data Storage as scalar: TPS1Raw_Adpt_Hi */
    {
      TPS1Raw_Adpt_Hi_DataStore() = rtb_DataTypeConversion2_k;
    }
  }

  /* End of Logic: '<S708>/Logical Operator1' */
  /* End of Outputs for SubSystem: '<S708>/Store Current Position' */

  /* MinMax: '<S710>/MinMax' */
  y = (BaseEngineController_LS_B.s663_Switch >=
       rtb_Multiplyby10ifnotyetenabled_c) || rtIsNaN
    (rtb_Multiplyby10ifnotyetenabled_c) ? BaseEngineController_LS_B.s663_Switch :
    rtb_Multiplyby10ifnotyetenabled_c;
  y = (y >= rtb_Switch4_i) || rtIsNaN(rtb_Switch4_i) ? y : rtb_Switch4_i;
  y = (y >= rtb_Switch_om) || rtIsNaN(rtb_Switch_om) ? y : rtb_Switch_om;
  rtb_Abs_k = (y >= rtb_Abs_c) || rtIsNaN(rtb_Abs_c) ? y : rtb_Abs_c;

  /* RelationalOperator: '<S709>/Relational Operator9' incorporates:
   *  MinMax: '<S710>/MinMax'
   */
  rtb_LogicalOperator6_jl = (rtb_Abs_k < BaseEngineController_LS_B.s703_MinMax);

  /* RelationalOperator: '<S709>/Relational Operator5' incorporates:
   *  MinMax: '<S710>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S663>/motohawk_calibration9'
   */
  rtb_RelationalOperator5_fz = (rtb_Abs_k <= (TPS1Adapt_Low_Max_DataStore()));

  /* RelationalOperator: '<S709>/Relational Operator6' incorporates:
   *  MinMax: '<S710>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S663>/motohawk_calibration10'
   */
  rtb_RelationalOperator6_h = (rtb_Abs_k >= (TPS1Adapt_Low_Min_DataStore()));

  /* Sum: '<S709>/Sum2' incorporates:
   *  MinMax: '<S710>/MinMax'
   */
  rtb_Abs_c = rtb_Abs_k - BaseEngineController_LS_B.s703_MinMax;

  /* Abs: '<S709>/Abs' */
  rtb_Abs_c = fabs(rtb_Abs_c);

  /* Logic: '<S709>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S709>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S703>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S703>/motohawk_calibration14'
   */
  rtb_LogicalOperator6_jl = (rtb_LogicalOperator6_jl &&
    rtb_RelationalOperator5_fz && rtb_RelationalOperator6_h &&
    (TPS1AdaptLoEnable_DataStore()) && (rtb_Abs_c > (TPS1Adapt_Delta_DataStore())));

  /* Outputs for Enabled SubSystem: '<S709>/Store Current Position' incorporates:
   *  EnablePort: '<S712>/Enable'
   */
  /* Logic: '<S709>/Logical Operator2' incorporates:
   *  Logic: '<S709>/Logical Operator4'
   *  S-Function (motohawk_sfun_calibration): '<S703>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S475>/motohawk_data_read'
   */
  if (rtb_LogicalOperator6_jl || (rtb_RelationalOperator5_fz &&
       rtb_RelationalOperator6_h && (TPS1AdaptLoEnable_DataStore()) &&
       TPSAdaptLoRequest_DataStore())) {
    /* DataTypeConversion: '<S712>/Data Type Conversion2' incorporates:
     *  MinMax: '<S710>/MinMax'
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

    /* End of DataTypeConversion: '<S712>/Data Type Conversion2' */

    /* S-Function (motohawk_sfun_data_write): '<S712>/motohawk_data_write' */
    /* Write to Data Storage as scalar: TPS1Raw_Adpt_Low */
    {
      TPS1Raw_Adpt_Low_DataStore() = rtb_DataTypeConversion2_n;
    }
  }

  /* End of Logic: '<S709>/Logical Operator2' */
  /* End of Outputs for SubSystem: '<S709>/Store Current Position' */

  /* RelationalOperator: '<S721>/Relational Operator5' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S721>/motohawk_calibration5'
   */
  rtb_RelationalOperator5_g = ((BaseEngineController_LS_B.s664_Switch >
    (TPS2InputHiFltPos_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S721>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: TPS2RangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(146, rtb_RelationalOperator5_g);
    UpdateFault(146);
  }

  /* RelationalOperator: '<S721>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S721>/motohawk_calibration6'
   */
  rtb_RelationalOperator4_d1 = ((BaseEngineController_LS_B.s664_Switch <
    (TPS2InputLoFltPos_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S721>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: TPS2RangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(147, rtb_RelationalOperator4_d1);
    UpdateFault(147);
  }

  /* RelationalOperator: '<S721>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S664>/motohawk_calibration9'
   */
  rtb_RelationalOperator_fa = ((BaseEngineController_LS_B.s720_MinMax >
    (TPS2Adapt_Low_Max_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S721>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: TPS2AdaptLoMax */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(144, rtb_RelationalOperator_fa);
    UpdateFault(144);
  }

  /* RelationalOperator: '<S721>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S664>/motohawk_calibration12'
   */
  rtb_RelationalOperator3_jk = ((BaseEngineController_LS_B.s720_MinMax1 >
    (TPS2Adapt_Hi_Max_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S721>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: TPS2AdaptHiMax */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(142, rtb_RelationalOperator3_jk);
    UpdateFault(142);
  }

  /* RelationalOperator: '<S721>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S664>/motohawk_calibration11'
   */
  rtb_RelationalOperator2_or = ((BaseEngineController_LS_B.s720_MinMax1 <
    (TPS2Adapt_Hi_Min_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S721>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: TPS2AdaptHiMin */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(143, rtb_RelationalOperator2_or);
    UpdateFault(143);
  }

  /* RelationalOperator: '<S721>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S664>/motohawk_calibration10'
   */
  rtb_RelationalOperator1_d = ((BaseEngineController_LS_B.s720_MinMax <
    (TPS2Adapt_Low_Min_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S721>/motohawk_fault_def8' */

  /* Set Fault Suspected Status: TPS2AdaptLoMin */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(145, rtb_RelationalOperator1_d);
    UpdateFault(145);
  }

  /* UnitDelay: '<S727>/Unit Delay1' */
  rtb_Abs_c = BaseEngineController_LS_DWork.s727_UnitDelay1_DSTATE;

  /* UnitDelay: '<S727>/Unit Delay' */
  rtb_DataTypeConversion_ik =
    BaseEngineController_LS_DWork.s727_UnitDelay_DSTATE;

  /* UnitDelay: '<S727>/Unit Delay3' */
  rtb_UnitDelay3_mp = BaseEngineController_LS_DWork.s727_UnitDelay3_DSTATE;

  /* UnitDelay: '<S727>/Unit Delay4' */
  rtb_DesiredLambda_idx = BaseEngineController_LS_DWork.s727_UnitDelay4_DSTATE;

  /* MinMax: '<S727>/MinMax1' incorporates:
   *  UnitDelay: '<S727>/Unit Delay'
   *  UnitDelay: '<S727>/Unit Delay3'
   *  UnitDelay: '<S727>/Unit Delay4'
   */
  y = (rtb_Abs_c <= BaseEngineController_LS_DWork.s727_UnitDelay_DSTATE) ||
    rtIsNaN(BaseEngineController_LS_DWork.s727_UnitDelay_DSTATE) ? rtb_Abs_c :
    BaseEngineController_LS_DWork.s727_UnitDelay_DSTATE;
  y = (y <= BaseEngineController_LS_DWork.s727_UnitDelay3_DSTATE) || rtIsNaN
    (BaseEngineController_LS_DWork.s727_UnitDelay3_DSTATE) ? y :
    BaseEngineController_LS_DWork.s727_UnitDelay3_DSTATE;
  y = (y <= BaseEngineController_LS_DWork.s727_UnitDelay4_DSTATE) || rtIsNaN
    (BaseEngineController_LS_DWork.s727_UnitDelay4_DSTATE) ? y :
    BaseEngineController_LS_DWork.s727_UnitDelay4_DSTATE;
  y = (y <= BaseEngineController_LS_B.s664_Switch) || rtIsNaN
    (BaseEngineController_LS_B.s664_Switch) ? y :
    BaseEngineController_LS_B.s664_Switch;

  /* RelationalOperator: '<S725>/Relational Operator9' incorporates:
   *  MinMax: '<S727>/MinMax1'
   */
  rtb_LogicalOperator6_jl = (y > BaseEngineController_LS_B.s720_MinMax1);

  /* RelationalOperator: '<S725>/Relational Operator5' incorporates:
   *  MinMax: '<S727>/MinMax1'
   *  S-Function (motohawk_sfun_calibration): '<S664>/motohawk_calibration12'
   */
  rtb_RelationalOperator5_fz = (y <= (TPS2Adapt_Hi_Max_DataStore()));

  /* RelationalOperator: '<S725>/Relational Operator6' incorporates:
   *  MinMax: '<S727>/MinMax1'
   *  S-Function (motohawk_sfun_calibration): '<S664>/motohawk_calibration11'
   */
  rtb_RelationalOperator6_h = (y >= (TPS2Adapt_Hi_Min_DataStore()));

  /* Sum: '<S725>/Sum2' incorporates:
   *  MinMax: '<S727>/MinMax1'
   */
  rtb_Abs_k = y - BaseEngineController_LS_B.s720_MinMax1;

  /* Abs: '<S725>/Abs' */
  rtb_Abs_k = fabs(rtb_Abs_k);

  /* Outputs for Enabled SubSystem: '<S725>/Store Current Position' incorporates:
   *  EnablePort: '<S728>/Enable'
   */
  /* Logic: '<S725>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S725>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S720>/motohawk_calibration14'
   *  S-Function (motohawk_sfun_calibration): '<S720>/motohawk_calibration2'
   */
  if (rtb_LogicalOperator6_jl && rtb_RelationalOperator5_fz &&
      rtb_RelationalOperator6_h && (TPS2AdaptHiEnable_DataStore()) && (rtb_Abs_k
       > (TPS2Adapt_Delta_DataStore()))) {
    /* DataTypeConversion: '<S728>/Data Type Conversion2' incorporates:
     *  MinMax: '<S727>/MinMax1'
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

    /* End of DataTypeConversion: '<S728>/Data Type Conversion2' */

    /* S-Function (motohawk_sfun_data_write): '<S728>/motohawk_data_write' */
    /* Write to Data Storage as scalar: TPS2Raw_Adpt_Hi */
    {
      TPS2Raw_Adpt_Hi_DataStore() = rtb_DataTypeConversion2_jn;
    }
  }

  /* End of Logic: '<S725>/Logical Operator1' */
  /* End of Outputs for SubSystem: '<S725>/Store Current Position' */

  /* MinMax: '<S727>/MinMax' */
  y = (BaseEngineController_LS_B.s664_Switch >= rtb_DesiredLambda_idx) ||
    rtIsNaN(rtb_DesiredLambda_idx) ? BaseEngineController_LS_B.s664_Switch :
    rtb_DesiredLambda_idx;
  y = (y >= rtb_UnitDelay3_mp) || rtIsNaN(rtb_UnitDelay3_mp) ? y :
    rtb_UnitDelay3_mp;
  y = (y >= rtb_DataTypeConversion_ik) || rtIsNaN(rtb_DataTypeConversion_ik) ? y
    : rtb_DataTypeConversion_ik;
  rtb_Abs_k = (y >= rtb_Abs_c) || rtIsNaN(rtb_Abs_c) ? y : rtb_Abs_c;

  /* RelationalOperator: '<S726>/Relational Operator9' incorporates:
   *  MinMax: '<S727>/MinMax'
   */
  rtb_LogicalOperator6_jl = (rtb_Abs_k < BaseEngineController_LS_B.s720_MinMax);

  /* RelationalOperator: '<S726>/Relational Operator5' incorporates:
   *  MinMax: '<S727>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S664>/motohawk_calibration9'
   */
  rtb_RelationalOperator5_fz = (rtb_Abs_k <= (TPS2Adapt_Low_Max_DataStore()));

  /* RelationalOperator: '<S726>/Relational Operator6' incorporates:
   *  MinMax: '<S727>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S664>/motohawk_calibration10'
   */
  rtb_RelationalOperator6_h = (rtb_Abs_k >= (TPS2Adapt_Low_Min_DataStore()));

  /* Sum: '<S726>/Sum2' incorporates:
   *  MinMax: '<S727>/MinMax'
   */
  rtb_Abs_c = rtb_Abs_k - BaseEngineController_LS_B.s720_MinMax;

  /* Abs: '<S726>/Abs' */
  rtb_Abs_c = fabs(rtb_Abs_c);

  /* Outputs for Enabled SubSystem: '<S726>/Store Current Position' incorporates:
   *  EnablePort: '<S729>/Enable'
   */
  /* Logic: '<S726>/Logical Operator2' incorporates:
   *  Logic: '<S726>/Logical Operator1'
   *  Logic: '<S726>/Logical Operator4'
   *  RelationalOperator: '<S726>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S720>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S720>/motohawk_calibration14'
   *  S-Function (motohawk_sfun_data_read): '<S475>/motohawk_data_read'
   */
  if ((rtb_LogicalOperator6_jl && rtb_RelationalOperator5_fz &&
       rtb_RelationalOperator6_h && (TPS2AdaptLoEnable_DataStore()) &&
       (rtb_Abs_c > (TPS2Adapt_Delta_DataStore()))) ||
      (rtb_RelationalOperator5_fz && rtb_RelationalOperator6_h &&
       (TPS2AdaptLoEnable_DataStore()) && TPSAdaptLoRequest_DataStore())) {
    /* DataTypeConversion: '<S729>/Data Type Conversion2' incorporates:
     *  MinMax: '<S727>/MinMax'
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

    /* End of DataTypeConversion: '<S729>/Data Type Conversion2' */

    /* S-Function (motohawk_sfun_data_write): '<S729>/motohawk_data_write' */
    /* Write to Data Storage as scalar: TPS2Raw_Adpt_Low */
    {
      TPS2Raw_Adpt_Low_DataStore() = rtb_DataTypeConversion2_o;
    }
  }

  /* End of Logic: '<S726>/Logical Operator2' */
  /* End of Outputs for SubSystem: '<S726>/Store Current Position' */

  /* Update for S-Function (motohawk_sfun_dout): '<S737>/motohawk_dout' */

  /* S-Function Block: DOut9613p0006 */
  {
    DOut9613p0006_DiscreteOutput_Set
      (BaseEngineController_LS_B.s745_LogicalOperator);
  }

  /* Update for UnitDelay: '<S679>/Unit Delay' */
  BaseEngineController_LS_DWork.s679_UnitDelay_DSTATE = rtb_Sum1_h1;

  /* Update for UnitDelay: '<S672>/Unit Delay1' */
  BaseEngineController_LS_DWork.s672_UnitDelay1_DSTATE = rtb_Merge_ao;

  /* Update for UnitDelay: '<S696>/Unit Delay' */
  BaseEngineController_LS_DWork.s696_UnitDelay_DSTATE = rtb_Sum1_b4;

  /* Update for UnitDelay: '<S689>/Unit Delay1' */
  BaseEngineController_LS_DWork.s689_UnitDelay1_DSTATE = rtb_Merge_m;

  /* Update for UnitDelay: '<S537>/Unit Delay1' */
  BaseEngineController_LS_DWork.s537_UnitDelay1_DSTATE = rtb_Merge_b;

  /* Update for UnitDelay: '<S551>/Unit Delay' */
  BaseEngineController_LS_DWork.s551_UnitDelay_DSTATE = rtb_Sum1_li;

  /* Update for UnitDelay: '<S432>/Unit Delay' */
  BaseEngineController_LS_DWork.s432_UnitDelay_DSTATE =
    BaseEngineController_LS_B.s453_State;

  /* Update for UnitDelay: '<S536>/Unit Delay' */
  BaseEngineController_LS_DWork.s536_UnitDelay_DSTATE =
    BaseEngineController_LS_B.s536_Sum1;

  /* Update for UnitDelay: '<S713>/Unit Delay' */
  BaseEngineController_LS_DWork.s713_UnitDelay_DSTATE = rtb_Sum1_hw;

  /* Update for UnitDelay: '<S706>/Unit Delay1' */
  BaseEngineController_LS_DWork.s706_UnitDelay1_DSTATE = rtb_Merge_li;

  /* Update for UnitDelay: '<S730>/Unit Delay' */
  BaseEngineController_LS_DWork.s730_UnitDelay_DSTATE = rtb_Sum1_lp;

  /* Update for UnitDelay: '<S723>/Unit Delay1' */
  BaseEngineController_LS_DWork.s723_UnitDelay1_DSTATE = rtb_Merge_mv;

  /* Update for UnitDelay: '<S563>/Unit Delay' */
  BaseEngineController_LS_DWork.s563_UnitDelay_DSTATE = rtb_Sum2_gr;

  /* Update for UnitDelay: '<S538>/Unit Delay1' */
  BaseEngineController_LS_DWork.s538_UnitDelay1_DSTATE = rtb_Merge_i;

  /* Update for UnitDelay: '<S562>/Unit Delay' */
  BaseEngineController_LS_DWork.s562_UnitDelay_DSTATE = rtb_Sum1_mz;

  /* Update for UnitDelay: '<S560>/Unit Delay' */
  BaseEngineController_LS_DWork.s560_UnitDelay_DSTATE = rtb_Merge_i;

  /* Update for UnitDelay: '<S560>/Unit Delay1' */
  BaseEngineController_LS_DWork.s560_UnitDelay1_DSTATE = rtb_UnitDelay_nd;

  /* Update for UnitDelay: '<S560>/Unit Delay2' */
  BaseEngineController_LS_DWork.s560_UnitDelay2_DSTATE = rtb_UnitDelay1_h;

  /* Update for UnitDelay: '<S500>/Unit Delay' */
  BaseEngineController_LS_DWork.s500_UnitDelay_DSTATE =
    BaseEngineController_LS_B.s500_Switch;

  /* Update for UnitDelay: '<S525>/Unit Delay' */
  BaseEngineController_LS_DWork.s525_UnitDelay_DSTATE =
    BaseEngineController_LS_B.s520_Merge;

  /* Update for UnitDelay: '<S499>/Unit Delay' */
  BaseEngineController_LS_DWork.s499_UnitDelay_DSTATE = rtb_Merge_j;

  /* Update for UnitDelay: '<S522>/Unit Delay' */
  BaseEngineController_LS_DWork.s522_UnitDelay_DSTATE = rtb_Sum1_g3;

  /* Update for UnitDelay: '<S500>/Unit Delay1' */
  BaseEngineController_LS_DWork.s500_UnitDelay1_DSTATE =
    BaseEngineController_LS_B.s520_Merge;

  /* Update for UnitDelay: '<S500>/Unit Delay2' */
  BaseEngineController_LS_DWork.s500_UnitDelay2_DSTATE = rtb_RelOp_d;

  /* Update for Memory: '<S526>/Memory' */
  BaseEngineController_LS_DWork.s526_Memory_PreviousInput = rtb_Logic_j[0];

  /* Update for UnitDelay: '<S500>/Unit Delay3' */
  BaseEngineController_LS_DWork.s500_UnitDelay3_DSTATE =
    BaseEngineController_LS_B.s520_Merge;

  /* Update for UnitDelay: '<S435>/Unit Delay' */
  BaseEngineController_LS_DWork.s435_UnitDelay_DSTATE =
    BaseEngineController_LS_B.s477_MultiportSwitch;

  /* Update for UnitDelay: '<S478>/Unit Delay1' */
  BaseEngineController_LS_DWork.s478_UnitDelay1_DSTATE = rtb_Merge_o;

  /* Update for UnitDelay: '<S485>/Unit Delay' */
  BaseEngineController_LS_DWork.s485_UnitDelay_DSTATE = rtb_Sum1_ir;

  /* Update for UnitDelay: '<S479>/Unit Delay1' */
  BaseEngineController_LS_DWork.s479_UnitDelay1_DSTATE = rtb_Merge_h;

  /* Update for UnitDelay: '<S493>/Unit Delay' */
  BaseEngineController_LS_DWork.s493_UnitDelay_DSTATE = rtb_Sum1_du;

  /* Update for UnitDelay: '<S435>/Unit Delay1' */
  BaseEngineController_LS_DWork.s435_UnitDelay1_DSTATE =
    BaseEngineController_LS_B.s492_Merge;

  /* Update for UnitDelay: '<S540>/Unit Delay1' */
  BaseEngineController_LS_DWork.s540_UnitDelay1_DSTATE = rtb_Merge_in;

  /* Update for UnitDelay: '<S580>/Unit Delay' */
  BaseEngineController_LS_DWork.s580_UnitDelay_DSTATE = rtb_Sum1_d4;

  /* Update for UnitDelay: '<S541>/Unit Delay1' */
  BaseEngineController_LS_DWork.s541_UnitDelay1_DSTATE = rtb_Merge_jq;

  /* Update for UnitDelay: '<S390>/Unit Delay' */
  BaseEngineController_LS_DWork.s390_UnitDelay_DSTATE = rtb_Merge_b3;

  /* Update for UnitDelay: '<S498>/Unit Delay' */
  BaseEngineController_LS_DWork.s498_UnitDelay_DSTATE = rtb_Merge_dv;

  /* Update for UnitDelay: '<S513>/Unit Delay' */
  BaseEngineController_LS_DWork.s513_UnitDelay_DSTATE = rtb_Sum1_fm;

  /* Update for UnitDelay: '<S408>/Unit Delay2' */
  BaseEngineController_LS_DWork.s408_UnitDelay2_DSTATE = rtb_DesiredLambda_idx_0;

  /* Update for UnitDelay: '<S411>/Unit Delay' */
  BaseEngineController_LS_DWork.s411_UnitDelay_DSTATE =
    BaseEngineController_LS_B.s411_Sum1;

  /* Update for UnitDelay: '<S409>/Unit Delay2' */
  BaseEngineController_LS_DWork.s409_UnitDelay2_DSTATE = rtb_UnitDelay1_k;

  /* Update for UnitDelay: '<S414>/Unit Delay' */
  BaseEngineController_LS_DWork.s414_UnitDelay_DSTATE =
    BaseEngineController_LS_B.s414_Sum1;

  /* Update for UnitDelay: '<S450>/Unit Delay' */
  BaseEngineController_LS_DWork.s450_UnitDelay_DSTATE =
    BaseEngineController_LS_B.s536_Sum1;

  /* Update for UnitDelay: '<S452>/Unit Delay' */
  BaseEngineController_LS_DWork.s452_UnitDelay_DSTATE =
    BaseEngineController_LS_B.s452_Sum1;

  /* Update for UnitDelay: '<S588>/Unit Delay' */
  BaseEngineController_LS_DWork.s588_UnitDelay_DSTATE = rtb_Sum1_mzy;

  /* Update for UnitDelay: '<S406>/Unit Delay' */
  BaseEngineController_LS_DWork.s406_UnitDelay_DSTATE = rtb_LogicalOperator_c;

  /* Update for UnitDelay: '<S402>/Unit Delay' */
  BaseEngineController_LS_DWork.s402_UnitDelay_DSTATE =
    BaseEngineController_LS_B.s402_Sum1;

  /* Update for UnitDelay: '<S764>/Unit Delay' */
  BaseEngineController_LS_DWork.s764_UnitDelay_DSTATE = rtb_Sum1_ni;

  /* Update for UnitDelay: '<S762>/Unit Delay' */
  BaseEngineController_LS_DWork.s762_UnitDelay_DSTATE = rtb_Sum1_hu;

  /* Update for UnitDelay: '<S768>/Unit Delay2' */
  BaseEngineController_LS_DWork.s768_UnitDelay2_DSTATE = rtb_UnitDelay1_ad;

  /* Update for UnitDelay: '<S768>/Unit Delay5' */
  BaseEngineController_LS_DWork.s768_UnitDelay5_DSTATE =
    BaseEngineController_LS_B.s477_DataValidState;

  /* Update for UnitDelay: '<S774>/Unit Delay' */
  BaseEngineController_LS_DWork.s774_UnitDelay_DSTATE = rtb_Sum1_c;

  /* Update for UnitDelay: '<S769>/Unit Delay2' */
  BaseEngineController_LS_DWork.s769_UnitDelay2_DSTATE = rtb_UnitDelay1_pn;

  /* Update for UnitDelay: '<S769>/Unit Delay5' */
  BaseEngineController_LS_DWork.s769_UnitDelay5_DSTATE =
    BaseEngineController_LS_B.s477_DataValidState_f;

  /* Update for UnitDelay: '<S777>/Unit Delay' */
  BaseEngineController_LS_DWork.s777_UnitDelay_DSTATE = rtb_Sum1_lm;

  /* Update for UnitDelay: '<S770>/Unit Delay' */
  BaseEngineController_LS_DWork.s770_UnitDelay_DSTATE = rtb_Sum1_p3;

  /* Update for UnitDelay: '<S771>/Unit Delay' */
  BaseEngineController_LS_DWork.s771_UnitDelay_DSTATE = rtb_Sum1_a;

  /* Update for UnitDelay: '<S545>/Unit Delay1' */
  BaseEngineController_LS_DWork.s545_UnitDelay1_DSTATE = rtb_Merge_f;

  /* Update for UnitDelay: '<S614>/Unit Delay' */
  BaseEngineController_LS_DWork.s614_UnitDelay_DSTATE = rtb_Sum1_nl;

  /* Update for UnitDelay: '<S772>/Unit Delay' */
  BaseEngineController_LS_DWork.s772_UnitDelay_DSTATE = rtb_Sum1_j2;

  /* Update for UnitDelay: '<S768>/Unit Delay1' */
  BaseEngineController_LS_DWork.s768_UnitDelay1_DSTATE = rtb_UnitDelay3_m;

  /* Update for UnitDelay: '<S768>/Unit Delay3' */
  BaseEngineController_LS_DWork.s768_UnitDelay3_DSTATE = rtb_UnitDelay4_b;

  /* Update for UnitDelay: '<S768>/Unit Delay4' */
  BaseEngineController_LS_DWork.s768_UnitDelay4_DSTATE =
    BaseEngineController_LS_B.s477_MultiportSwitch;

  /* Update for UnitDelay: '<S769>/Unit Delay1' */
  BaseEngineController_LS_DWork.s769_UnitDelay1_DSTATE = rtb_UnitDelay3_p;

  /* Update for UnitDelay: '<S769>/Unit Delay3' */
  BaseEngineController_LS_DWork.s769_UnitDelay3_DSTATE = rtb_UnitDelay4_a;

  /* Update for UnitDelay: '<S769>/Unit Delay4' */
  BaseEngineController_LS_DWork.s769_UnitDelay4_DSTATE =
    BaseEngineController_LS_B.s492_Merge;

  /* Update for UnitDelay: '<S785>/Unit Delay' */
  BaseEngineController_LS_DWork.s785_UnitDelay_DSTATE = rtb_Sum1_cn;

  /* Update for UnitDelay: '<S539>/Unit Delay1' */
  BaseEngineController_LS_DWork.s539_UnitDelay1_DSTATE = rtb_Merge_b3f;

  /* Update for UnitDelay: '<S572>/Unit Delay' */
  BaseEngineController_LS_DWork.s572_UnitDelay_DSTATE = rtb_Sum1_cs;

  /* Update for UnitDelay: '<S786>/Unit Delay' */
  BaseEngineController_LS_DWork.s786_UnitDelay_DSTATE = rtb_Sum1_ay;

  /* Update for UnitDelay: '<S543>/Unit Delay1' */
  BaseEngineController_LS_DWork.s543_UnitDelay1_DSTATE = rtb_Merge_ol;

  /* Update for UnitDelay: '<S598>/Unit Delay' */
  BaseEngineController_LS_DWork.s598_UnitDelay_DSTATE = rtb_Sum1_o;

  /* Update for UnitDelay: '<S787>/Unit Delay' */
  BaseEngineController_LS_DWork.s787_UnitDelay_DSTATE = rtb_Sum1_co;

  /* Update for UnitDelay: '<S789>/Unit Delay' */
  BaseEngineController_LS_DWork.s789_UnitDelay_DSTATE = rtb_Sum1_kv;

  /* Update for UnitDelay: '<S793>/Unit Delay' */
  BaseEngineController_LS_DWork.s793_UnitDelay_DSTATE = rtb_Sum1_mn;

  /* Update for UnitDelay: '<S792>/Unit Delay' */
  BaseEngineController_LS_DWork.s792_UnitDelay_DSTATE = rtb_Sum1_mw;

  /* Update for S-Function (motohawk_sfun_pwm): '<S741>/motohawk_pwm' */

  /* S-Function Block: FAN1Pin_PWM_PWMOutput */
  FAN1Pin_PWM_PWMOutput_PWMOutput_Set(rtb_DataTypeConversion2_j,
    rtb_DataTypeConversion3_c, 0, 1);

  /* Update for S-Function (motohawk_sfun_pwm): '<S741>/motohawk_pwm1' */

  /* S-Function Block: FAN2Pin_PWM_PWMOutput */
  FAN2Pin_PWM_PWMOutput_PWMOutput_Set(rtb_DataTypeConversion2_e,
    rtb_DataTypeConversion3_k, 0, 1);

  /* Update for S-Function (motohawk_sfun_dout): '<S742>/motohawk_dout' */

  /* S-Function Block: DOut10438p0009 */
  {
    DOut10438p0009_DiscreteOutput_Set
      (BaseEngineController_LS_B.s832_LogicalOperator);
  }

  /* Update for S-Function (motohawk_sfun_pwm): '<S743>/motohawk_pwm1' */

  /* S-Function Block: ETCPin_PWMOutput */
  ETCPin_PWMOutput_PWMOutput_Set(rtb_DataTypeConversion3_j,
    rtb_DataTypeConversion4_m, 0, 1);

  /* Update for UnitDelay: '<S468>/Unit Delay' */
  BaseEngineController_LS_DWork.s468_UnitDelay_DSTATE = rtb_Switch_kj;

  /* Update for UnitDelay: '<S544>/Unit Delay1' */
  BaseEngineController_LS_DWork.s544_UnitDelay1_DSTATE = rtb_Merge_ht;

  /* Update for UnitDelay: '<S606>/Unit Delay' */
  BaseEngineController_LS_DWork.s606_UnitDelay_DSTATE = rtb_Sum1_m3;

  /* Update for UnitDelay: '<S408>/Unit Delay1' */
  BaseEngineController_LS_DWork.s408_UnitDelay1_DSTATE = rtb_DesiredLambda_idx_1;

  /* Update for UnitDelay: '<S408>/Unit Delay3' */
  BaseEngineController_LS_DWork.s408_UnitDelay3_DSTATE = rtb_UnitDelay4_i;

  /* Update for UnitDelay: '<S408>/Unit Delay4' */
  BaseEngineController_LS_DWork.s408_UnitDelay4_DSTATE =
    BaseEngineController_LS_B.s536_Sum1;

  /* Update for UnitDelay: '<S409>/Unit Delay1' */
  BaseEngineController_LS_DWork.s409_UnitDelay1_DSTATE = rtb_UnitDelay3_j;

  /* Update for UnitDelay: '<S409>/Unit Delay3' */
  BaseEngineController_LS_DWork.s409_UnitDelay3_DSTATE = rtb_UnitDelay4_ie;

  /* Update for UnitDelay: '<S409>/Unit Delay4' */
  BaseEngineController_LS_DWork.s409_UnitDelay4_DSTATE =
    BaseEngineController_LS_B.s579_Merge;

  /* Update for UnitDelay: '<S457>/Unit Delay' */
  BaseEngineController_LS_DWork.s457_UnitDelay_DSTATE = rtb_LogicalOperator1_er;

  /* Update for UnitDelay: '<S676>/Unit Delay1' */
  BaseEngineController_LS_DWork.s676_UnitDelay1_DSTATE =
    rtb_DataTypeConversion1_d;

  /* Update for UnitDelay: '<S676>/Unit Delay' */
  BaseEngineController_LS_DWork.s676_UnitDelay_DSTATE =
    rtb_DataTypeConversion_b2;

  /* Update for UnitDelay: '<S676>/Unit Delay3' */
  BaseEngineController_LS_DWork.s676_UnitDelay3_DSTATE = rtb_Product1_gw;

  /* Update for UnitDelay: '<S676>/Unit Delay4' */
  BaseEngineController_LS_DWork.s676_UnitDelay4_DSTATE =
    BaseEngineController_LS_B.s661_Switch;

  /* Update for UnitDelay: '<S693>/Unit Delay1' */
  BaseEngineController_LS_DWork.s693_UnitDelay1_DSTATE = rtb_Switch3_p;

  /* Update for UnitDelay: '<S693>/Unit Delay' */
  BaseEngineController_LS_DWork.s693_UnitDelay_DSTATE = rtb_Switch2_a;

  /* Update for UnitDelay: '<S693>/Unit Delay3' */
  BaseEngineController_LS_DWork.s693_UnitDelay3_DSTATE = rtb_Switch1_f;

  /* Update for UnitDelay: '<S693>/Unit Delay4' */
  BaseEngineController_LS_DWork.s693_UnitDelay4_DSTATE =
    BaseEngineController_LS_B.s662_Switch;

  /* Update for UnitDelay: '<S710>/Unit Delay1' */
  BaseEngineController_LS_DWork.s710_UnitDelay1_DSTATE = rtb_Switch_om;

  /* Update for UnitDelay: '<S710>/Unit Delay' */
  BaseEngineController_LS_DWork.s710_UnitDelay_DSTATE = rtb_Switch4_i;

  /* Update for UnitDelay: '<S710>/Unit Delay3' */
  BaseEngineController_LS_DWork.s710_UnitDelay3_DSTATE =
    rtb_Multiplyby10ifnotyetenabled_c;

  /* Update for UnitDelay: '<S710>/Unit Delay4' */
  BaseEngineController_LS_DWork.s710_UnitDelay4_DSTATE =
    BaseEngineController_LS_B.s663_Switch;

  /* Update for UnitDelay: '<S727>/Unit Delay1' */
  BaseEngineController_LS_DWork.s727_UnitDelay1_DSTATE =
    rtb_DataTypeConversion_ik;

  /* Update for UnitDelay: '<S727>/Unit Delay' */
  BaseEngineController_LS_DWork.s727_UnitDelay_DSTATE = rtb_UnitDelay3_mp;

  /* Update for UnitDelay: '<S727>/Unit Delay3' */
  BaseEngineController_LS_DWork.s727_UnitDelay3_DSTATE = rtb_DesiredLambda_idx;

  /* Update for UnitDelay: '<S727>/Unit Delay4' */
  BaseEngineController_LS_DWork.s727_UnitDelay4_DSTATE =
    BaseEngineController_LS_B.s664_Switch;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
