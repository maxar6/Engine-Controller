/*
 * File: Foreground.c
 *
 * Code generated for Simulink model 'BaseEngineController_LS_112'.
 *
 * Model version                  : 1.2194
 * Simulink Coder version         : 8.0 (R2011a) 09-Mar-2011
 * TLC version                    : 8.0 (Feb  3 2011)
 * C/C++ source code generated on : Tue Nov 22 13:56:25 2022
 *
 * Target selection: motohawk_motocoder_ert_rtw.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Foreground.h"

/* Include model header file for global data */
#include "BaseEngineController_LS_112.h"
#include "BaseEngineController_LS_112_private.h"

/* Named constants for Stateflow: '<S20>/ETC Test  Manager' */
#define BaseEngineController_LS_112_IN_ForcedShutdown (1U)
#define BaseEngineController_LS_112_IN_LowAdapt (2U)
#define BaseEngineController_LS_112_IN_PassThrough (3U)
#define BaseEngineController_LS_112_IN_SpringTest (4U)
#define BaseEngineController_LS_112_IN_SpringTestComplete (5U)
#define BaseEngineController_LS_112_IN_SpringTestSetpoint (6U)

/* Named constants for Stateflow: '<S283>/Ice Break' */
#define BaseEngineController_LS_112_IN_Init (1U)
#define BaseEngineController_LS_112_IN_Open (2U)
#define BaseEngineController_LS_112_IN_Wait (3U)

/* Named constants for Stateflow: '<S395>/Baro Stall State Delay' */
#define BaseEngineController_LS_112_IN_CrankRun (1U)
#define BaseEngineController_LS_112_IN_Stall (2U)
#define BaseEngineController_LS_112_IN_StallDelay (3U)

/* Named constants for Stateflow: '<S445>/Engine State Machine' */
#define BaseEngineController_LS_112_IN_Crank (1U)
#define BaseEngineController_LS_112_IN_Run (2U)
#define BaseEngineController_LS_112_IN_Stall_j (3U)

/*
 * Initial conditions for enable system:
 *    '<S402>/Collect Average'
 *    '<S441>/Collect Average'
 *    '<S442>/Collect Average'
 */
void BaseEngineController_LS_112_CollectAverage_Init
  (rtDW_CollectAverage_BaseEngineController_LS_112 *localDW)
{
  /* InitializeConditions for UnitDelay: '<S406>/Unit Delay1' */
  localDW->s406_UnitDelay1_DSTATE = 0.0;
}

/*
 * Disable for enable system:
 *    '<S402>/Collect Average'
 *    '<S441>/Collect Average'
 *    '<S442>/Collect Average'
 */
void BaseEngineController_LS_112_CollectAverage_Disable
  (rtDW_CollectAverage_BaseEngineController_LS_112 *localDW)
{
  localDW->s402_CollectAverage_MODE = FALSE;
}

/*
 * Start for enable system:
 *    '<S402>/Collect Average'
 *    '<S441>/Collect Average'
 *    '<S442>/Collect Average'
 */
void BaseEngineController_LS_112_CollectAverage_Start
  (rtDW_CollectAverage_BaseEngineController_LS_112 *localDW)
{
  BaseEngineController_LS_112_CollectAverage_Init(localDW);
}

/*
 * Output and update for enable system:
 *    '<S402>/Collect Average'
 *    '<S441>/Collect Average'
 *    '<S442>/Collect Average'
 */
void BaseEngineController_LS_112_CollectAverage(boolean_T rtu_0, int8_T
  rtu_Count, real_T rtu_Signal, rtB_CollectAverage_BaseEngineController_LS_112
  *localB, rtDW_CollectAverage_BaseEngineController_LS_112 *localDW)
{
  real_T rtb_Sum1_cs;

  /* Outputs for Enabled SubSystem: '<S402>/Collect Average' incorporates:
   *  EnablePort: '<S406>/Enable'
   */
  if (rtu_0) {
    if (!localDW->s402_CollectAverage_MODE) {
      BaseEngineController_LS_112_CollectAverage_Init(localDW);
      localDW->s402_CollectAverage_MODE = TRUE;
    }

    /* Sum: '<S406>/Sum1' incorporates:
     *  UnitDelay: '<S406>/Unit Delay1'
     */
    rtb_Sum1_cs = rtu_Signal + localDW->s406_UnitDelay1_DSTATE;

    /* Product: '<S406>/Product' incorporates:
     *  DataTypeConversion: '<S406>/Data Type Conversion'
     */
    localB->s406_Product = 1.0 / (real_T)rtu_Count * rtb_Sum1_cs;

    /* Update for UnitDelay: '<S406>/Unit Delay1' */
    localDW->s406_UnitDelay1_DSTATE = rtb_Sum1_cs;
  } else {
    if (localDW->s402_CollectAverage_MODE) {
      BaseEngineController_LS_112_CollectAverage_Disable(localDW);
    }
  }

  /* End of Outputs for SubSystem: '<S402>/Collect Average' */
}

/*
 * Start for enable system:
 *    '<S440>/PassThrough1'
 *    '<S440>/PassThrough2'
 */
void BaseEngineController_LS_112_PassThrough1_Start(real_T *rty_Out1)
{
  /* VirtualOutportStart for Outport: '<S456>/Out1' */
  (*rty_Out1) = 0.005;
}

/*
 * Output and update for enable system:
 *    '<S440>/PassThrough1'
 *    '<S440>/PassThrough2'
 */
void BaseEngineController_LS_112_PassThrough1(boolean_T rtu_0, real_T rtu_1,
  real_T *rty_Out1)
{
  /* Outputs for Enabled SubSystem: '<S440>/PassThrough1' incorporates:
   *  EnablePort: '<S456>/Enable'
   */
  if (rtu_0) {
    /* Inport: '<S456>/In1' */
    (*rty_Out1) = rtu_1;
  }

  /* End of Outputs for SubSystem: '<S440>/PassThrough1' */
}

/*
 * Output and update for enable system:
 *    '<S344>/GetInstRPM'
 *    '<S345>/GetInstRPM'
 */
void BaseEngineController_LS_112_GetInstRPM(boolean_T rtu_0,
  rtB_GetInstRPM_BaseEngineController_LS_112 *localB)
{
  /* Outputs for Enabled SubSystem: '<S344>/GetInstRPM' incorporates:
   *  EnablePort: '<S350>/Enable'
   */
  if (rtu_0) {
    /* S-Function Block: <S350>/motohawk_encoder_instant_rpm */
    {
      localB->s350_motohawk_encoder_instant_rpm = CNK_Encoder_InstantRPM_Get();
    }
  }

  /* End of Outputs for SubSystem: '<S344>/GetInstRPM' */
}

/*
 * Output and update for enable system:
 *    '<S344>/SafeDivide'
 *    '<S345>/SafeDivide'
 */
void BaseEngineController_LS_112_SafeDivide(boolean_T rtu_0, uint8_T rtu_Count,
  uint16_T rtu_RPMSum, rtB_SafeDivide_BaseEngineController_LS_112 *localB)
{
  uint32_T u;

  /* Outputs for Enabled SubSystem: '<S344>/SafeDivide' incorporates:
   *  EnablePort: '<S352>/Enable'
   */
  if (rtu_0) {
    /* MinMax: '<S352>/MinMax' incorporates:
     *  Constant: '<S352>/Constant'
     */
    u = rtu_Count;

    /* Product: '<S352>/Product' incorporates:
     *  Constant: '<S352>/Constant'
     *  MinMax: '<S352>/MinMax'
     */
    localB->s352_Product = (uint16_T)((uint32_T)rtu_RPMSum / (uint32_T)(int32_T)
                                      (u >= 1U ? u : 1U));
  }

  /* End of Outputs for SubSystem: '<S344>/SafeDivide' */
}

/*
 * Output and update for action system:
 *    '<S487>/If Action Subsystem'
 *    '<S487>/If Action Subsystem1'
 *    '<S487>/If Action Subsystem2'
 *    '<S488>/If Action Subsystem'
 *    '<S488>/If Action Subsystem1'
 *    '<S488>/If Action Subsystem2'
 *    '<S508>/If Action Subsystem'
 *    '<S508>/If Action Subsystem1'
 *    '<S508>/If Action Subsystem2'
 *    '<S510>/If Action Subsystem'
 *    ...
 */
void BaseEngineController_LS_112_IfActionSubsystem(real_T rtu_0, real_T *rty_Out)
{
  /* Inport: '<S490>/In' */
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
void BaseEngineController_LS_112_Foreground_Init(void)
{
  /* Initial conditions for function-call system: '<S483>/Temp Sensors' */

  /* S-Function Block: <S661>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_112_DWork.s661_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S679>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_112_DWork.s679_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S670>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_112_DWork.s670_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S652>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_112_DWork.s652_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S708>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_112_DWork.s708_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S739>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_112_DWork.s739_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S696>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_112_DWork.s696_motohawk_delta_time_DWORK1 = now -
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
    BaseEngineController_LS_112_DWork.s722_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S469>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_112_DWork.s469_motohawk_delta_time_DWORK1 = now -
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
    BaseEngineController_LS_112_DWork.s565_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for Stateflow: '<S445>/Engine State Machine' */

  /* Entry: Foreground/Control/VirtualSensors/RawProcessed/EngineState/Engine State Machine */
  /* Transition: '<S466>:4' */
  BaseEngineController_LS_112_DWork.s466_is_c2_BaseEngineController_LS_112 =
    BaseEngineController_LS_112_IN_Stall_j;

  /* Entry 'Stall': '<S466>:1' */
  BaseEngineController_LS_112_B.s466_State = 1U;

  /* S-Function Block: <S548>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_112_DWork.s548_motohawk_delta_time_DWORK1 = now -
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
    BaseEngineController_LS_112_DWork.s756_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S773>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_112_DWork.s773_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S582>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_112_DWork.s582_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S578>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_112_DWork.s578_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S535>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_112_DWork.s535_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S544>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_112_DWork.s544_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(-1);
  }

  /* InitializeConditions for Atomic SubSystem: '<S399>/Base TPS Request' */

  /* S-Function Block: <S458>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_112_DWork.s458_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S440>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_112_DWork.s440_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* End of InitializeConditions for SubSystem: '<S399>/Base TPS Request' */

  /* S-Function Block: <S489>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_112_DWork.s489_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S497>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_112_DWork.s497_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S471>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_112_DWork.s471_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S628>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_112_DWork.s628_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S594>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_112_DWork.s594_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S395>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_112_DWork.s395_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for Stateflow: '<S395>/Baro Stall State Delay' */
  BaseEngineController_LS_112_DWork.s401_TOld = 0.0;
  BaseEngineController_LS_112_B.s401_Timer = 0.0;

  /* Entry: Foreground/Control/VirtualSensors/AirCalcs/Baro Stall State Delay */
  /* Transition: '<S401>:4' */
  BaseEngineController_LS_112_DWork.s401_is_c19_BaseEngineController_LS_112 =
    BaseEngineController_LS_112_IN_Stall;

  /* Entry 'Stall': '<S401>:1' */
  BaseEngineController_LS_112_B.s401_Enable = TRUE;

  /* S-Function Block: <S408>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_112_DWork.s408_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S521>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_112_DWork.s521_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S463>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_112_DWork.s463_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(-1);
  }

  /* S-Function Block: <S532>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_112_DWork.s532_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S602>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_112_DWork.s602_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* Initial conditions for function-call system: '<S483>/Fuel Level' */

  /* S-Function Block: <S639>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_112_DWork.s639_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S396>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_112_DWork.s396_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S816>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_112_DWork.s816_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S813>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_112_DWork.s813_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S818>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_112_DWork.s818_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S819>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_112_DWork.s819_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S820>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_112_DWork.s820_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S835>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_112_DWork.s835_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S586>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_112_DWork.s586_motohawk_delta_time_DWORK1 = now -
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
    BaseEngineController_LS_112_DWork.s836_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S612>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_112_DWork.s612_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S837>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_112_DWork.s837_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S841>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_112_DWork.s841_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S844>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_112_DWork.s844_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S843>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_112_DWork.s843_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S889>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_112_DWork.s889_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S473>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_112_DWork.s473_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S620>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_112_DWork.s620_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* S-Function Block: <S546>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_112_DWork.s546_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* Initial conditions for function-call system: '<S689>/Function-Call Subsystem' */

  /* InitializeConditions for UnitDelay: '<S707>/Initial Condition is True' */
  BaseEngineController_LS_112_DWork.s707_InitialConditionisTrue_DSTATE = TRUE;

  /* Initial conditions for function-call system: '<S691>/Function-Call Subsystem' */

  /* InitializeConditions for UnitDelay: '<S719>/Initial Condition is True' */
  BaseEngineController_LS_112_DWork.s719_InitialConditionisTrue_DSTATE = TRUE;
}

/* Enable for function-call system: '<Root>/Foreground' */
void BaseEngineController_LS_112_Foreground_Enable(void)
{
  /* Level2 S-Function Block: '<S483>/motohawk_trigger' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_5XRTI_PERIODIC_9815p0006 */
  BaseEngineController_LS_112_DWork.s483_motohawk_trigger_DWORK1 = 1;

  /* Level2 S-Function Block: '<S445>/motohawk_trigger' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_TDC_EVENT_8437p0004 */
  BaseEngineController_LS_112_DWork.s445_motohawk_trigger_DWORK1 = 1;

  /* Level2 S-Function Block: '<S561>/motohawk_trigger5' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_MID_TDC_EVENT_9721p0004 */
  BaseEngineController_LS_112_DWork.s561_motohawk_trigger5_DWORK1 = 1;

  /* Level2 S-Function Block: '<S483>/motohawk_trigger1' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_5XRTI_PERIODIC_9816p0004 */
  BaseEngineController_LS_112_DWork.s483_motohawk_trigger1_DWORK1 = 1;

  /* Level2 S-Function Block: '<S14>/motohawk_trigger1' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_5XRTI_PERIODIC_1094p0005 */
  BaseEngineController_LS_112_DWork.s14_motohawk_trigger1_DWORK1 = 1;

  /* Level2 S-Function Block: '<S14>/motohawk_trigger' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_5XRTI_PERIODIC_1093p0005 */
  BaseEngineController_LS_112_DWork.s14_motohawk_trigger_DWORK1 = 1;

  /* Level2 S-Function Block: '<S13>/motohawk_trigger' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_5XRTI_PERIODIC_11294p0006 */

  /* Enable for function-call system: '<S13>/Coil Control' */

  /* Enable for Atomic SubSystem: '<S847>/EST Enable TDC Counter' */

  /* Level2 S-Function Block: '<S852>/motohawk_trigger1' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_TDC_EVENT_10780p0004 */
  BaseEngineController_LS_112_DWork.s852_motohawk_trigger1_DWORK1 = 1;

  /* End of Enable for SubSystem: '<S847>/EST Enable TDC Counter' */
  BaseEngineController_LS_112_DWork.s13_motohawk_trigger_DWORK1 = 1;

  /* Level2 S-Function Block: '<S689>/motohawk_trigger' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_20XRTI_PERIODIC_9951p0004 */
  BaseEngineController_LS_112_DWork.s689_motohawk_trigger_DWORK1 = 1;

  /* Level2 S-Function Block: '<S691>/motohawk_trigger' (motohawk_sfun_trigger) */

  /* Enable for Trigger_FGND_20XRTI_PERIODIC_10085p0004 */
  BaseEngineController_LS_112_DWork.s691_motohawk_trigger_DWORK1 = 1;
}

/* Disable for function-call system: '<Root>/Foreground' */
void BaseEngineController_LS_112_Foreground_Disable(void)
{
  int32_T i;

  /* Level2 S-Function Block: '<S483>/motohawk_trigger' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_5XRTI_PERIODIC_9815p0006 */
  BaseEngineController_LS_112_DWork.s483_motohawk_trigger_DWORK1 = 0;

  /* Level2 S-Function Block: '<S445>/motohawk_trigger' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_TDC_EVENT_8437p0004 */
  BaseEngineController_LS_112_DWork.s445_motohawk_trigger_DWORK1 = 0;

  /* Disable for Enabled SubSystem: '<S15>/Stall' */
  /* Disable for Stateflow: '<S283>/Ice Break' */
  BaseEngineController_LS_112_DWork.s291_presentTicks =
    BaseEngineController_LS_112_M->Timing.clockTick0;
  BaseEngineController_LS_112_DWork.s291_elapsedTicks =
    BaseEngineController_LS_112_DWork.s291_presentTicks -
    BaseEngineController_LS_112_DWork.s291_previousTicks;
  BaseEngineController_LS_112_DWork.s291_previousTicks =
    BaseEngineController_LS_112_DWork.s291_presentTicks;
  BaseEngineController_LS_112_DWork.s291_temporalCounter_i1 =
    BaseEngineController_LS_112_DWork.s291_temporalCounter_i1 +
    BaseEngineController_LS_112_DWork.s291_elapsedTicks;
  BaseEngineController_LS_112_DWork.s15_Stall_MODE = FALSE;

  /* End of Disable for SubSystem: '<S15>/Stall' */

  /* Disable for Enabled SubSystem: '<S15>/Crank' */
  BaseEngineController_LS_112_DWork.s15_Crank_MODE = FALSE;

  /* End of Disable for SubSystem: '<S15>/Crank' */

  /* Level2 S-Function Block: '<S561>/motohawk_trigger5' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_MID_TDC_EVENT_9721p0004 */
  BaseEngineController_LS_112_DWork.s561_motohawk_trigger5_DWORK1 = 0;

  /* Disable for Enabled SubSystem: '<S395>/Capture Signal At Startup' */

  /* Disable for Enabled SubSystem: '<S402>/Collect Average' */
  BaseEngineController_LS_112_CollectAverage_Disable
    (&BaseEngineController_LS_112_DWork.s402_CollectAverage);

  /* End of Disable for SubSystem: '<S402>/Collect Average' */
  BaseEngineController_LS_112_DWork.s395_CaptureSignalAtStartup_MODE = FALSE;

  /* End of Disable for SubSystem: '<S395>/Capture Signal At Startup' */

  /* Disable for Enabled SubSystem: '<S399>/Capture ECT At Startup' */

  /* Disable for Enabled SubSystem: '<S441>/Collect Average' */
  BaseEngineController_LS_112_CollectAverage_Disable
    (&BaseEngineController_LS_112_DWork.s441_CollectAverage);

  /* End of Disable for SubSystem: '<S441>/Collect Average' */
  BaseEngineController_LS_112_DWork.s399_CaptureECTAtStartup_MODE = FALSE;

  /* End of Disable for SubSystem: '<S399>/Capture ECT At Startup' */

  /* Disable for Enabled SubSystem: '<S15>/Run' */

  /* Level2 S-Function Block: '<S93>/motohawk_trigger1' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_5XRTI_PERIODIC_5057p0001 */
  BaseEngineController_LS_112_DWork.s93_motohawk_trigger1_DWORK1 = 0;

  /* Disable for Atomic SubSystem: '<S93>/Fuel System Manager' */
  /* Disable for Atomic SubSystem: '<S107>/Injector Manager' */
  /* Disable for Enabled SubSystem: '<S160>/Delta TPS Transient Fueling' */
  /* Disable for Enabled SubSystem: '<S165>/ECT Transient Fueling' */
  /* Disable for Outport: '<S169>/Mult' */
  BaseEngineController_LS_112_B.s169_motohawk_interpolation_1d = 1.0;
  BaseEngineController_LS_112_DWork.s165_ECTTransientFueling_MODE = FALSE;

  /* End of Disable for SubSystem: '<S165>/ECT Transient Fueling' */

  /* Disable for Enabled SubSystem: '<S165>/OXY Transient Fueling' */
  /* Disable for Outport: '<S172>/Mult' */
  BaseEngineController_LS_112_B.s172_motohawk_interpolation_1d = 1.0;
  BaseEngineController_LS_112_DWork.s165_OXYTransientFueling_MODE = FALSE;

  /* End of Disable for SubSystem: '<S165>/OXY Transient Fueling' */

  /* Disable for Outport: '<S165>/DeltaTPSMult' */
  BaseEngineController_LS_112_B.s165_Product1 = 1.0;
  BaseEngineController_LS_112_DWork.s160_DeltaTPSTransientFueling_MODE = FALSE;

  /* End of Disable for SubSystem: '<S160>/Delta TPS Transient Fueling' */
  /* End of Disable for SubSystem: '<S107>/Injector Manager' */
  /* End of Disable for SubSystem: '<S93>/Fuel System Manager' */
  BaseEngineController_LS_112_DWork.s15_Run_MODE = FALSE;

  /* End of Disable for SubSystem: '<S15>/Run' */

  /* Level2 S-Function Block: '<S483>/motohawk_trigger1' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_5XRTI_PERIODIC_9816p0004 */
  BaseEngineController_LS_112_DWork.s483_motohawk_trigger1_DWORK1 = 0;

  /* Disable for Enabled SubSystem: '<S22>/PassThrough1' */
  BaseEngineController_LS_112_DWork.s22_PassThrough1_MODE = FALSE;

  /* Disable for Enabled SubSystem: '<S22>/PassThrough3' */
  for (i = 0; i < 32; i++) {
    /* Disable for Outport: '<S67>/Out1' */
    BaseEngineController_LS_112_B.s22_Merge1[i] = 0;

    /* Disable for Outport: '<S69>/Out1' */
    BaseEngineController_LS_112_B.s22_Merge1[i] = 0;
  }

  /* End of Disable for SubSystem: '<S22>/PassThrough1' */
  BaseEngineController_LS_112_DWork.s22_PassThrough3_MODE = FALSE;

  /* End of Disable for SubSystem: '<S22>/PassThrough3' */

  /* Disable for Enabled SubSystem: '<S22>/SequenceCutMachine' */

  /* Level2 S-Function Block: '<S72>/motohawk_trigger' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_TDC1_EVENT_869p0001 */
  BaseEngineController_LS_112_DWork.s72_motohawk_trigger_DWORK1 = 0;
  BaseEngineController_LS_112_DWork.s22_SequenceCutMachine_MODE = FALSE;

  /* End of Disable for SubSystem: '<S22>/SequenceCutMachine' */

  /* Disable for Enabled SubSystem: '<S22>/PassThrough5' */
  BaseEngineController_LS_112_DWork.s22_PassThrough5_MODE = FALSE;

  /* Disable for Enabled SubSystem: '<S22>/PassThrough4' */
  for (i = 0; i < 8; i++) {
    /* Disable for Outport: '<S71>/Out1' */
    BaseEngineController_LS_112_B.s71_DataTypeConversion1[i] = FALSE;

    /* Disable for Outport: '<S70>/Out1' */
    BaseEngineController_LS_112_B.s70_DataTypeConversion[i] = FALSE;
  }

  /* End of Disable for SubSystem: '<S22>/PassThrough5' */
  BaseEngineController_LS_112_DWork.s22_PassThrough4_MODE = FALSE;

  /* End of Disable for SubSystem: '<S22>/PassThrough4' */

  /* Disable for Enabled SubSystem: '<S399>/Capture IAT At Startup' */

  /* Disable for Enabled SubSystem: '<S442>/Collect Average' */
  BaseEngineController_LS_112_CollectAverage_Disable
    (&BaseEngineController_LS_112_DWork.s442_CollectAverage);

  /* End of Disable for SubSystem: '<S442>/Collect Average' */
  BaseEngineController_LS_112_DWork.s399_CaptureIATAtStartup_MODE = FALSE;

  /* End of Disable for SubSystem: '<S399>/Capture IAT At Startup' */

  /* Level2 S-Function Block: '<S14>/motohawk_trigger1' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_5XRTI_PERIODIC_1094p0005 */
  BaseEngineController_LS_112_DWork.s14_motohawk_trigger1_DWORK1 = 0;

  /* Level2 S-Function Block: '<S14>/motohawk_trigger' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_5XRTI_PERIODIC_1093p0005 */
  BaseEngineController_LS_112_DWork.s14_motohawk_trigger_DWORK1 = 0;

  /* Level2 S-Function Block: '<S13>/motohawk_trigger' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_5XRTI_PERIODIC_11294p0006 */

  /* Disable for function-call system: '<S13>/Coil Control' */

  /* Disable for Atomic SubSystem: '<S847>/EST Enable TDC Counter' */

  /* Level2 S-Function Block: '<S852>/motohawk_trigger1' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_TDC_EVENT_10780p0004 */
  BaseEngineController_LS_112_DWork.s852_motohawk_trigger1_DWORK1 = 0;

  /* End of Disable for SubSystem: '<S847>/EST Enable TDC Counter' */
  BaseEngineController_LS_112_DWork.s13_motohawk_trigger_DWORK1 = 0;

  /* Disable for Enabled SubSystem: '<S14>/Electronic Throttle Controller' */
  /* Disable for Enabled SubSystem: '<S31>/PassThrough' */
  /* Disable for Outport: '<S52>/Out1' */
  BaseEngineController_LS_112_B.s52_In1 = 10.0;
  BaseEngineController_LS_112_DWork.s31_PassThrough_MODE = FALSE;

  /* End of Disable for SubSystem: '<S31>/PassThrough' */
  BaseEngineController_LS_112_DWork.s14_ElectronicThrottleController_MODE =
    FALSE;

  /* End of Disable for SubSystem: '<S14>/Electronic Throttle Controller' */

  /* Disable for Enabled SubSystem: '<S477>/Triggered Subsystem' incorporates:
   *  Disable for S-Function (fcncallgen): '<S478>/Function-Call Generator'
   *  Disable for SubSystem: '<S11>/Diagnostics'
   *  Disable for SubSystem: '<S303>/MisfireDiagSub'
   */

  /* Level2 S-Function Block: '<S324>/motohawk_trigger' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_HIRES_6521p0004 */
  BaseEngineController_LS_112_DWork.s324_motohawk_trigger_DWORK1 = 0;
  BaseEngineController_LS_112_DWork.s303_MisfireDiagSub_MODE = FALSE;
  BaseEngineController_LS_112_DWork.s477_TriggeredSubsystem_MODE = FALSE;

  /* Level2 S-Function Block: '<S689>/motohawk_trigger' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_20XRTI_PERIODIC_9951p0004 */
  BaseEngineController_LS_112_DWork.s689_motohawk_trigger_DWORK1 = 0;

  /* Level2 S-Function Block: '<S691>/motohawk_trigger' (motohawk_sfun_trigger) */
  /* Disable for Trigger_FGND_20XRTI_PERIODIC_10085p0004 */
  BaseEngineController_LS_112_DWork.s691_motohawk_trigger_DWORK1 = 0;
}

/* Start for function-call system: '<Root>/Foreground' */
void BaseEngineController_LS_112_Foreground_Start(void)
{
  /* Start for S-Function (motohawk_sfun_trigger): '<S483>/motohawk_trigger' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_5XRTI_PERIODIC_9815p0006 */
  BaseEngineController_LS_112_DWork.s483_motohawk_trigger_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S445>/motohawk_trigger' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_TDC_EVENT_8437p0004 */
  BaseEngineController_LS_112_DWork.s445_motohawk_trigger_DWORK1 = 0;

  /* Start for Enabled SubSystem: '<S15>/Stall' */

  /* InitializeConditions for UnitDelay: '<S287>/Unit Delay' */
  BaseEngineController_LS_112_DWork.s287_UnitDelay_DSTATE = FALSE;

  /* InitializeConditions for UnitDelay: '<S288>/Unit Delay' */
  BaseEngineController_LS_112_DWork.s288_UnitDelay_DSTATE = FALSE;

  /* InitializeConditions for UnitDelay: '<S289>/Unit Delay' */
  BaseEngineController_LS_112_DWork.s289_UnitDelay_DSTATE = FALSE;

  /* InitializeConditions for UnitDelay: '<S290>/Unit Delay' */
  BaseEngineController_LS_112_DWork.s290_UnitDelay_DSTATE = 0.0;

  /* S-Function Block: <S292>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_112_DWork.s292_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for Stateflow: '<S283>/Ice Break' */
  BaseEngineController_LS_112_DWork.s291_is_active_c3_BaseEngineController_LS_112
    = 0U;
  BaseEngineController_LS_112_DWork.s291_is_c3_BaseEngineController_LS_112 = 0U;
  BaseEngineController_LS_112_B.s291_etc = 0.0;
  BaseEngineController_LS_112_DWork.s291_presentTicks = 0U;
  BaseEngineController_LS_112_DWork.s291_elapsedTicks = 0U;
  BaseEngineController_LS_112_DWork.s291_previousTicks = 0U;

  /* End of Start for SubSystem: '<S15>/Stall' */

  /* Start for Atomic SubSystem: '<S399>/Base TPS Request' */

  /* Start for Enabled SubSystem: '<S440>/PassThrough1' */
  BaseEngineController_LS_112_PassThrough1_Start
    (&BaseEngineController_LS_112_B.s440_Merge);

  /* End of Start for SubSystem: '<S440>/PassThrough1' */

  /* Start for Enabled SubSystem: '<S440>/PassThrough2' */
  BaseEngineController_LS_112_PassThrough1_Start
    (&BaseEngineController_LS_112_B.s440_Merge);

  /* End of Start for SubSystem: '<S440>/PassThrough2' */

  /* End of Start for SubSystem: '<S399>/Base TPS Request' */

  /* Start for S-Function (motohawk_sfun_trigger): '<S561>/motohawk_trigger5' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_MID_TDC_EVENT_9721p0004 */
  BaseEngineController_LS_112_DWork.s561_motohawk_trigger5_DWORK1 = 0;

  /* Start for Enabled SubSystem: '<S395>/Capture Signal At Startup' */

  /* Start for Enabled SubSystem: '<S402>/Collect Average' */
  BaseEngineController_LS_112_CollectAverage_Start
    (&BaseEngineController_LS_112_DWork.s402_CollectAverage);

  /* End of Start for SubSystem: '<S402>/Collect Average' */

  /* InitializeConditions for UnitDelay: '<S402>/Unit Delay' */
  BaseEngineController_LS_112_DWork.s402_UnitDelay_DSTATE = 0;

  /* End of Start for SubSystem: '<S395>/Capture Signal At Startup' */

  /* Start for Enabled SubSystem: '<S421>/IncreasingFilter' */

  /* VirtualOutportStart for Outport: '<S425>/Out1' */
  BaseEngineController_LS_112_B.s421_Merge = 0.005;

  /* End of Start for SubSystem: '<S421>/IncreasingFilter' */

  /* Start for Enabled SubSystem: '<S421>/DecreasingFilter' */

  /* VirtualOutportStart for Outport: '<S423>/Out1' */
  BaseEngineController_LS_112_B.s421_Merge = 0.005;

  /* End of Start for SubSystem: '<S421>/DecreasingFilter' */

  /* Start for Enabled SubSystem: '<S422>/IncreasingFilter' */

  /* VirtualOutportStart for Outport: '<S428>/Out1' */
  BaseEngineController_LS_112_B.s422_Merge = 0.005;

  /* End of Start for SubSystem: '<S422>/IncreasingFilter' */

  /* Start for Enabled SubSystem: '<S422>/DecreasingFilter' */

  /* VirtualOutportStart for Outport: '<S426>/Out1' */
  BaseEngineController_LS_112_B.s422_Merge = 0.005;

  /* End of Start for SubSystem: '<S422>/DecreasingFilter' */

  /* Start for Enabled SubSystem: '<S399>/Capture ECT At Startup' */

  /* Start for Enabled SubSystem: '<S441>/Collect Average' */
  BaseEngineController_LS_112_CollectAverage_Start
    (&BaseEngineController_LS_112_DWork.s441_CollectAverage);

  /* End of Start for SubSystem: '<S441>/Collect Average' */

  /* InitializeConditions for UnitDelay: '<S441>/Unit Delay' */
  BaseEngineController_LS_112_DWork.s441_UnitDelay_DSTATE = 0;

  /* End of Start for SubSystem: '<S399>/Capture ECT At Startup' */

  /* Start for Enabled SubSystem: '<S15>/Run' */

  /* Start for S-Function (motohawk_sfun_trigger): '<S93>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_5XRTI_PERIODIC_5057p0001 */
  BaseEngineController_LS_112_DWork.s93_motohawk_trigger1_DWORK1 = 0;

  /* Start for Atomic SubSystem: '<S93>/O2 Control' */

  /* Start for Atomic SubSystem: '<S111>/O2 PID Controller Bank A' */

  /* Start for InitialCondition: '<S243>/Multiply by 1.0 if not yet enabled' */
  BaseEngineController_LS_112_DWork.s243_Multiplyby10ifnotyetenabled_FirstOutputTime
    = TRUE;

  /* End of Start for SubSystem: '<S111>/O2 PID Controller Bank A' */

  /* Start for Atomic SubSystem: '<S111>/O2 PID Controller Bank B' */

  /* Start for InitialCondition: '<S244>/Multiply by 1.0 if not yet enabled' */
  BaseEngineController_LS_112_DWork.s244_Multiplyby10ifnotyetenabled_FirstOutputTime
    = TRUE;

  /* End of Start for SubSystem: '<S111>/O2 PID Controller Bank B' */

  /* End of Start for SubSystem: '<S93>/O2 Control' */

  /* Start for Atomic SubSystem: '<S93>/Fuel System Manager' */

  /* Start for Atomic SubSystem: '<S107>/Injector Manager' */

  /* Start for Enabled SubSystem: '<S160>/Delta TPS Transient Fueling' */

  /* Start for Enabled SubSystem: '<S165>/ECT Transient Fueling' */

  /* VirtualOutportStart for Outport: '<S169>/Mult' */
  BaseEngineController_LS_112_B.s169_motohawk_interpolation_1d = 1.0;

  /* End of Start for SubSystem: '<S165>/ECT Transient Fueling' */

  /* Start for Enabled SubSystem: '<S165>/OXY Transient Fueling' */

  /* VirtualOutportStart for Outport: '<S172>/Mult' */
  BaseEngineController_LS_112_B.s172_motohawk_interpolation_1d = 1.0;

  /* End of Start for SubSystem: '<S165>/OXY Transient Fueling' */

  /* S-Function Block: <S171>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_112_DWork.s171_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for UnitDelay: '<S174>/Unit Delay' */
  BaseEngineController_LS_112_DWork.s174_UnitDelay_DSTATE = 0.0;

  /* S-Function Block: <S170>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_112_DWork.s170_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for UnitDelay: '<S173>/Unit Delay' */
  BaseEngineController_LS_112_DWork.s173_UnitDelay_DSTATE = 0.0;

  /* VirtualOutportStart for Outport: '<S165>/DeltaTPSMult' */
  BaseEngineController_LS_112_B.s165_Product1 = 1.0;

  /* End of Start for SubSystem: '<S160>/Delta TPS Transient Fueling' */

  /* End of Start for SubSystem: '<S107>/Injector Manager' */

  /* End of Start for SubSystem: '<S93>/Fuel System Manager' */

  /* InitializeConditions for S-Function (motohawk_sfun_trigger): '<S93>/motohawk_trigger1' */
  if (rtmIsFirstInitCond(BaseEngineController_LS_112_M)) {
    /* Initial conditions for function-call system: '<S93>/DFCO' */

    /* S-Function Block: <S150>/motohawk_delta_time */
    {
      uint32_T now = 0;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
        u32Time_us);
      Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
      BaseEngineController_LS_112_DWork.s150_motohawk_delta_time_DWORK1 = now -
        Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
    }

    /* S-Function Block: <S148>/motohawk_delta_time */
    {
      uint32_T now = 0;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
        u32Time_us);
      Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
      BaseEngineController_LS_112_DWork.s148_motohawk_delta_time_DWORK1 = now -
        Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
    }
  }

  if (rtmIsFirstInitCond(BaseEngineController_LS_112_M)) {
    /* Initial conditions for function-call system: '<S93>/MinGovernor' */

    /* InitializeConditions for Stateflow: '<S206>/IdleStateMachine' */
    BaseEngineController_LS_112_IdleStateMachine_Init();

    /* S-Function Block: <S205>/motohawk_delta_time */
    {
      uint32_T now = 0;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
        u32Time_us);
      Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
      BaseEngineController_LS_112_DWork.s205_motohawk_delta_time_DWORK1 = now -
        Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
    }

    /* S-Function Block: <S209>/motohawk_delta_time */
    {
      uint32_T now = 0;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
        u32Time_us);
      Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
      BaseEngineController_LS_112_DWork.s209_motohawk_delta_time_DWORK1 = now -
        Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
    }

    /* InitializeConditions for Atomic SubSystem: '<S110>/AiflowOffset' */

    /* S-Function Block: <S212>/motohawk_delta_time */
    {
      uint32_T now = 0;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
        u32Time_us);
      Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
      BaseEngineController_LS_112_DWork.s212_motohawk_delta_time_DWORK1 = now -
        Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
    }

    /* End of InitializeConditions for SubSystem: '<S110>/AiflowOffset' */

    /* S-Function Block: <S237>/motohawk_delta_time */
    {
      uint32_T now = 0;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
        u32Time_us);
      Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
      BaseEngineController_LS_112_DWork.s237_motohawk_delta_time_DWORK1 = now -
        Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
    }
  }

  if (rtmIsFirstInitCond(BaseEngineController_LS_112_M)) {
    /* Initial conditions for function-call system: '<S93>/Boost Control' */

    /* S-Function Block: <S133>/motohawk_delta_time */
    {
      uint32_T now = 0;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
        u32Time_us);
      Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
      BaseEngineController_LS_112_DWork.s133_motohawk_delta_time_DWORK1 = now -
        Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
    }

    /* S-Function Block: <S143>/motohawk_delta_time */
    {
      uint32_T now = 0;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
        u32Time_us);
      Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
      BaseEngineController_LS_112_DWork.s143_motohawk_delta_time_DWORK1 = now -
        Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
    }
  }

  if (rtmIsFirstInitCond(BaseEngineController_LS_112_M)) {
    /* Initial conditions for function-call system: '<S93>/MaxGovernor' */

    /* S-Function Block: <S188>/motohawk_delta_time */
    {
      uint32_T now = 0;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
        u32Time_us);
      Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
      BaseEngineController_LS_112_DWork.s188_motohawk_delta_time_DWORK1 = now -
        Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
    }

    /* S-Function Block: <S199>/motohawk_delta_time */
    {
      uint32_T now = 0;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
        u32Time_us);
      Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
      BaseEngineController_LS_112_DWork.s199_motohawk_delta_time_DWORK1 = now -
        Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
    }
  }

  if (rtmIsFirstInitCond(BaseEngineController_LS_112_M)) {
    /* Initial conditions for function-call system: '<S93>/Spark Manager' */

    /* InitializeConditions for UnitDelay: '<S278>/Initial Condition is True' */
    BaseEngineController_LS_112_DWork.s278_InitialConditionisTrue_DSTATE = TRUE;
  }

  /* InitializeConditions for Atomic SubSystem: '<S93>/O2 Control' */

  /* InitializeConditions for Atomic SubSystem: '<S111>/O2 PID Controller Bank A' */
  /* InitializeConditions for UnitDelay: '<S257>/Unit Delay' */
  BaseEngineController_LS_112_DWork.s257_UnitDelay_DSTATE = FALSE;

  /* InitializeConditions for UnitDelay: '<S254>/Unit Delay' */
  BaseEngineController_LS_112_DWork.s254_UnitDelay_DSTATE = 0.0;

  /* InitializeConditions for UnitDelay: '<S253>/Unit Delay' */
  BaseEngineController_LS_112_DWork.s253_UnitDelay_DSTATE = 0.0;

  /* S-Function Block: <S254>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_112_DWork.s254_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for UnitDelay: '<S250>/Unit Delay1' */
  BaseEngineController_LS_112_DWork.s250_UnitDelay1_DSTATE = 0.0;

  /* S-Function Block: <S258>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_112_DWork.s258_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for UnitDelay: '<S250>/Unit Delay' */
  BaseEngineController_LS_112_DWork.s250_UnitDelay_DSTATE = 0.0;

  /* S-Function Block: <S260>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_112_DWork.s260_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for UnitDelay: '<S250>/Unit Delay2' */
  BaseEngineController_LS_112_DWork.s250_UnitDelay2_DSTATE = 0.0;

  /* S-Function Block: <S259>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_112_DWork.s259_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* End of InitializeConditions for SubSystem: '<S111>/O2 PID Controller Bank A' */

  /* InitializeConditions for Atomic SubSystem: '<S111>/O2 PID Controller Bank B' */
  /* InitializeConditions for UnitDelay: '<S269>/Unit Delay' */
  BaseEngineController_LS_112_DWork.s269_UnitDelay_DSTATE = FALSE;

  /* InitializeConditions for UnitDelay: '<S266>/Unit Delay' */
  BaseEngineController_LS_112_DWork.s266_UnitDelay_DSTATE = 0.0;

  /* InitializeConditions for UnitDelay: '<S265>/Unit Delay' */
  BaseEngineController_LS_112_DWork.s265_UnitDelay_DSTATE = 0.0;

  /* S-Function Block: <S266>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_112_DWork.s266_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* InitializeConditions for UnitDelay: '<S262>/Unit Delay1' */
  BaseEngineController_LS_112_DWork.s262_UnitDelay1_DSTATE = 0.0;

  /* S-Function Block: <S270>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_112_DWork.s270_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for UnitDelay: '<S262>/Unit Delay' */
  BaseEngineController_LS_112_DWork.s262_UnitDelay_DSTATE = 0.0;

  /* S-Function Block: <S272>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_112_DWork.s272_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for UnitDelay: '<S262>/Unit Delay2' */
  BaseEngineController_LS_112_DWork.s262_UnitDelay2_DSTATE = 0.0;

  /* S-Function Block: <S271>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_112_DWork.s271_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* End of InitializeConditions for SubSystem: '<S111>/O2 PID Controller Bank B' */
  /* End of InitializeConditions for SubSystem: '<S93>/O2 Control' */

  /* End of Start for SubSystem: '<S15>/Run' */

  /* Start for S-Function (motohawk_sfun_trigger): '<S483>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_5XRTI_PERIODIC_9816p0004 */
  BaseEngineController_LS_112_DWork.s483_motohawk_trigger1_DWORK1 = 0;

  /* Start for Enabled SubSystem: '<S821>/IncreasingFilter' */

  /* VirtualOutportStart for Outport: '<S828>/Out1' */
  BaseEngineController_LS_112_B.s821_Merge = 0.005;

  /* End of Start for SubSystem: '<S821>/IncreasingFilter' */

  /* Start for Enabled SubSystem: '<S821>/DecreasingFilter' */

  /* VirtualOutportStart for Outport: '<S826>/Out1' */
  BaseEngineController_LS_112_B.s821_Merge = 0.005;

  /* End of Start for SubSystem: '<S821>/DecreasingFilter' */

  /* Start for Enabled SubSystem: '<S822>/IncreasingFilter' */

  /* VirtualOutportStart for Outport: '<S831>/Out1' */
  BaseEngineController_LS_112_B.s822_Merge = 0.005;

  /* End of Start for SubSystem: '<S822>/IncreasingFilter' */

  /* Start for Enabled SubSystem: '<S822>/DecreasingFilter' */

  /* VirtualOutportStart for Outport: '<S829>/Out1' */
  BaseEngineController_LS_112_B.s822_Merge = 0.005;

  /* End of Start for SubSystem: '<S822>/DecreasingFilter' */

  /* Start for Enabled SubSystem: '<S22>/SequenceCutMachine' */

  /* Start for function-call system: '<S72>/SequencyCutMachine' */

  /* VirtualOutportStart for Outport: '<S82>/CycleCounter' */
  BaseEngineController_LS_112_B.s82_Switch = 1U;

  /* VirtualOutportStart for Outport: '<S82>/CycleNumber' */
  BaseEngineController_LS_112_B.s82_Switch1 = 1.0;

  /* Clear enable/disable state for embedded trigger Trigger_FGND_TDC1_EVENT_869p0001 */
  BaseEngineController_LS_112_DWork.s72_motohawk_trigger_DWORK1 = 0;

  /* InitializeConditions for UnitDelay: '<S72>/Unit Delay2' */
  BaseEngineController_LS_112_DWork.s72_UnitDelay2_DSTATE = 1.0;

  /* InitializeConditions for UnitDelay: '<S72>/Unit Delay1' */
  BaseEngineController_LS_112_DWork.s72_UnitDelay1_DSTATE = 1U;

  /* End of Start for SubSystem: '<S22>/SequenceCutMachine' */

  /* Start for Enabled SubSystem: '<S399>/Capture IAT At Startup' */

  /* Start for Enabled SubSystem: '<S442>/Collect Average' */
  BaseEngineController_LS_112_CollectAverage_Start
    (&BaseEngineController_LS_112_DWork.s442_CollectAverage);

  /* End of Start for SubSystem: '<S442>/Collect Average' */

  /* InitializeConditions for UnitDelay: '<S442>/Unit Delay' */
  BaseEngineController_LS_112_DWork.s442_UnitDelay_DSTATE = 0;

  /* End of Start for SubSystem: '<S399>/Capture IAT At Startup' */

  /* Start for S-Function (motohawk_sfun_trigger): '<S14>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_5XRTI_PERIODIC_1094p0005 */
  BaseEngineController_LS_112_DWork.s14_motohawk_trigger1_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S14>/motohawk_trigger' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_5XRTI_PERIODIC_1093p0005 */
  BaseEngineController_LS_112_DWork.s14_motohawk_trigger_DWORK1 = 0;

  /* Start for function-call system: '<S13>/Coil Control' */

  /* Start for Atomic SubSystem: '<S847>/EST Enable TDC Counter' */

  /* Start for S-Function (motohawk_sfun_trigger): '<S852>/motohawk_trigger1' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_TDC_EVENT_10780p0004 */
  BaseEngineController_LS_112_DWork.s852_motohawk_trigger1_DWORK1 = 0;

  /* End of Start for SubSystem: '<S847>/EST Enable TDC Counter' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_5XRTI_PERIODIC_11294p0006 */
  BaseEngineController_LS_112_DWork.s13_motohawk_trigger_DWORK1 = 0;

  /* Start for Enabled SubSystem: '<S14>/Electronic Throttle Controller' */

  /* Start for Enabled SubSystem: '<S31>/PassThrough' */
  /* VirtualOutportStart for Outport: '<S52>/Out1' */
  BaseEngineController_LS_112_B.s52_In1 = 10.0;

  /* End of Start for SubSystem: '<S31>/PassThrough' */

  /* S-Function Block: <S63>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_112_DWork.s63_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* InitializeConditions for Stateflow: '<S20>/ETC Test  Manager' */
  BaseEngineController_LS_112_DWork.s27_TimerOld = 0.0;

  /* Entry: Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/ETC Test  Manager */
  /* Transition: '<S27>:7' */
  BaseEngineController_LS_112_DWork.s27_is_c9_BaseEngineController_LS_112 =
    BaseEngineController_LS_112_IN_PassThrough;

  /* Entry 'PassThrough': '<S27>:1' */
  BaseEngineController_LS_112_B.s27_DC_Override = 0;
  BaseEngineController_LS_112_B.s27_TestComplete = FALSE;
  BaseEngineController_LS_112_B.s27_SetpointMode = 0;
  BaseEngineController_LS_112_B.s27_TestTime = 0.0;

  /* S-Function Block: <S55>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_112_DWork.s55_motohawk_delta_time_DWORK1 = now -
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
    BaseEngineController_LS_112_DWork.s43_motohawk_delta_time_DWORK1 = now -
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
    BaseEngineController_LS_112_DWork.s48_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* End of Start for SubSystem: '<S14>/Electronic Throttle Controller' */

  /* Start for Enabled SubSystem: '<S477>/Triggered Subsystem' incorporates:
   *  Start for S-Function (fcncallgen): '<S478>/Function-Call Generator'
   *  Start for SubSystem: '<S11>/Diagnostics'
   */

  /* Start for Enabled SubSystem: '<S477>/Triggered Subsystem' incorporates:
   *  Start for SubSystem: '<S303>/MisfireDiagSub'
   */

  /* Start for S-Function (motohawk_sfun_trigger): '<S324>/motohawk_trigger' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_HIRES_6521p0004 */
  BaseEngineController_LS_112_DWork.s324_motohawk_trigger_DWORK1 = 0;

  /* Start for Enabled SubSystem: '<S477>/Triggered Subsystem' incorporates:
   *  InitializeConditions for S-Function (fcncallgen): '<S478>/Function-Call Generator'
   *  InitializeConditions for SubSystem: '<S11>/Diagnostics'
   */

  /* S-Function Block: <S310>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_112_DWork.s310_motohawk_delta_time_DWORK1 = now -
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
    BaseEngineController_LS_112_DWork.s311_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S376>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_112_DWork.s376_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S379>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_112_DWork.s379_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S377>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_112_DWork.s377_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S378>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_112_DWork.s378_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
  }

  /* S-Function Block: <S314>/motohawk_delta_time */
  {
    uint32_T now = 0;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
      u32Time_us);
    Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
    BaseEngineController_LS_112_DWork.s314_motohawk_delta_time_DWORK1 = now -
      Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
  }

  /* Start for S-Function (motohawk_sfun_trigger): '<S689>/motohawk_trigger' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_20XRTI_PERIODIC_9951p0004 */
  BaseEngineController_LS_112_DWork.s689_motohawk_trigger_DWORK1 = 0;

  /* Start for S-Function (motohawk_sfun_trigger): '<S691>/motohawk_trigger' */

  /* Clear enable/disable state for embedded trigger Trigger_FGND_20XRTI_PERIODIC_10085p0004 */
  BaseEngineController_LS_112_DWork.s691_motohawk_trigger_DWORK1 = 0;
}

/* Output and update for function-call system: '<Root>/Foreground' */
void BaseEngineController_LS_112_Foreground(void)
{
  /* local block i/o variables */
  real_T rtb_DataTypeConversion_c5;
  real_T rtb_UnitDelay_h3;
  real_T rtb_Merge_i;
  real_T rtb_Sum1_cy;
  real_T rtb_UnitDelay1_a;
  real_T rtb_Merge_pf;
  real_T rtb_DataTypeConversion_dp;
  real_T rtb_UnitDelay_hho;
  real_T rtb_Merge_e;
  real_T rtb_Sum1_ex;
  real_T rtb_UnitDelay1_b;
  real_T rtb_Merge_d;
  real_T rtb_APP1;
  real_T rtb_motohawk_delta_time_ll;
  real_T rtb_UnitDelay1_p;
  real_T rtb_Merge_ox;
  real_T rtb_Sum1_mk;
  real_T rtb_UnitDelay1_ac;
  real_T rtb_Merge_m;
  real_T rtb_Sum1_kh;
  real_T rtb_UnitDelay1_fq;
  real_T rtb_Merge_p1;
  real_T rtb_motohawk_delta_time_nt;
  real_T rtb_Saturation_c;
  real_T rtb_UnitDelay1_bh;
  real_T rtb_Merge_ff;
  real_T rtb_UnitDelay_om;
  real_T rtb_Merge_mf;
  real_T rtb_motohawk_delta_time_o2;
  real_T rtb_UnitDelay1_l;
  real_T rtb_Merge_b;
  real_T rtb_UnitDelay1_pi;
  real_T rtb_Merge_om;
  real_T rtb_motohawk_delta_time_b5;
  real_T rtb_UnitDelay1_k;
  real_T rtb_Merge_g;
  real_T rtb_UnitDelay1_l0;
  real_T rtb_Merge_e4;
  real_T rtb_UnitDelay1_kq;
  real_T rtb_Merge_j;
  real_T rtb_motohawk_delta_time_d;
  real_T rtb_motohawk_interpolation_2d_a;
  real_T rtb_Saturation1_g;
  real_T rtb_motohawk_interpolation_1d1_eo;
  real_T rtb_motohawk_interpolation_2d1_h;
  real_T rtb_UnitDelay_hu;
  real_T rtb_Merge_ef;
  real_T rtb_motohawk_delta_time_p;
  real_T rtb_motohawk_delta_time_kl;
  real_T rtb_motohawk_delta_time_kg;
  real_T rtb_Sum1_gm;
  real_T rtb_motohawk_delta_time_h;
  real_T rtb_motohawk_delta_time_ki;
  real_T rtb_Gain;
  real_T rtb_Sum1_ju;
  real_T rtb_Sum1_nj;
  real_T rtb_Sum1_a3;
  real_T rtb_motohawk_data_read_m3;
  real_T rtb_UnitDelay1_d2;
  real_T rtb_Merge_l;
  real_T rtb_Sum1_o;
  real_T rtb_UnitDelay1_nu;
  real_T rtb_Merge_en;
  real_T rtb_Sum1_cp;
  real_T rtb_MathFunction;
  real_T rtb_Product_jc;
  real_T rtb_motohawk_data_read2_d;
  real_T rtb_motohawk_data_read1_dn;
  real_T rtb_motohawk_data_read_hj;
  real_T rtb_Sum1_kc;
  real_T rtb_motohawk_data_read_l;
  real_T rtb_motohawk_data_read2_c;
  real_T rtb_Sum1_em;
  real_T rtb_Sum1_et;
  real_T rtb_motohawk_delta_time_i;
  real_T rtb_motohawk_delta_time_hk;
  real_T rtb_Saturation_f;
  real_T rtb_motohawk_interpolation_1d3_b;
  real_T rtb_motohawk_interpolation_1d4_f;
  real_T rtb_motohawk_interpolation_1d1_g;
  real_T rtb_UnitDelay1_lh;
  real_T rtb_Merge_no;
  real_T rtb_Saturation_i;
  real_T rtb_Saturation_ci;
  real_T rtb_Saturation_gu;
  real_T rtb_Saturation_fn;
  real_T rtb_Saturation_op;
  real_T rtb_motohawk_delta_time_oe;
  real_T rtb_Saturation_ai;
  real_T rtb_motohawk_delta_time_bm;
  real_T rtb_Saturation_d;
  real_T rtb_motohawk_interpolation_1d_j;
  real_T rtb_motohawk_delta_time_ar;
  real_T rtb_motohawk_delta_time_pi;
  real_T rtb_Saturation_e;
  real_T rtb_Saturation_lw;
  real_T rtb_motohawk_interpolation_2d_h;
  real_T rtb_motohawk_delta_time_ln;
  real_T rtb_motohawk_delta_time_l3;
  real_T rtb_motohawk_delta_time_oy;
  real_T rtb_motohawk_delta_time_c5;
  real_T rtb_Saturation_j;
  real_T rtb_Saturation_b5;
  real_T rtb_Saturation_a3;
  real_T rtb_Saturation_oa;
  real_T rtb_motohawk_interpolation_1d_be;
  real_T rtb_motohawk_interpolation_2d_c;
  real_T rtb_motohawk_delta_time_pg;
  real_T rtb_Divide_l;
  real_T rtb_motohawk_interpolation_1d_k;
  real_T rtb_Divide1;
  real_T rtb_motohawk_delta_time_gw;
  real_T rtb_motohawk_delta_time_ni;
  real_T rtb_Saturation_ag;
  real_T rtb_motohawk_interpolation_1d_jw;
  real_T rtb_motohawk_interpolation_1d1_b;
  real_T rtb_motohawk_interpolation_1d2_nd;
  real_T rtb_motohawk_interpolation_1d_p;
  real_T rtb_RichEquivRatioTargetDelta_j;
  real_T rtb_LeanEquivRatioTargetDelta;
  real_T rtb_RichEquivRatioSwPtDelta;
  real_T rtb_LeanEquivRatioSwPtDelta;
  real_T rtb_motohawk_interpolation_1d_f;
  real_T rtb_motohawk_interpolation_1d1_j;
  real_T rtb_motohawk_delta_time_ps;
  real_T rtb_motohawk_delta_time_gu;
  real_T rtb_motohawk_delta_time_ku;
  real_T rtb_motohawk_delta_time_kmg;
  real_T rtb_motohawk_delta_time_px;
  real_T rtb_Saturation_hz;
  real_T rtb_Saturation_ly;
  real_T rtb_Saturation_m;
  real_T rtb_motohawk_delta_time_jl;
  real_T rtb_motohawk_delta_time_ie;
  real_T rtb_motohawk_delta_time_ee;
  real_T rtb_motohawk_delta_time_bn;
  real_T rtb_motohawk_delta_time_gz;
  real_T rtb_Saturation_my;
  real_T rtb_Saturation_oc;
  real_T rtb_Saturation_ep;
  real_T rtb_motohawk_interpolation_1d1_b2;
  real_T rtb_motohawk_interpolation_2d2_o;
  real_T rtb_motohawk_interpolation_1d2_d4;
  real_T rtb_motohawk_interpolation_2d3;
  real_T rtb_motohawk_interpolation_2d1_o;
  real_T rtb_motohawk_delta_time_mt;
  real_T rtb_Saturation_fc;
  real_T rtb_EOI;
  real_T rtb_PrimaryPulseInjectionTiming;
  real_T rtb_motohawk_interpolation_2d2_m;
  real_T rtb_motohawk_interpolation_2d1_m;
  real_T rtb_motohawk_interpolation_1d_o;
  real_T rtb_motohawk_interpolation_2d3_d;
  real_T rtb_WarmUptimeRatio;
  real_T rtb_Product_gs;
  real_T rtb_motohawk_interpolation_2d_k;
  real_T rtb_motohawk_interpolation_1d_d;
  real_T rtb_motohawk_interpolation_1d1_b5;
  real_T rtb_motohawk_interpolation_2d_l;
  real_T rtb_motohawk_interpolation_2d1_l;
  real_T rtb_motohawk_interpolation_1d4_hz;
  real_T rtb_motohawk_interpolation_1d5;
  real_T rtb_motohawk_interpolation_1d1_bi;
  real_T rtb_motohawk_interpolation_1d1_d;
  real_T rtb_motohawk_interpolation_1d_n;
  real_T rtb_motohawk_interpolation_2d_ls;
  real_T rtb_motohawk_delta_time_az;
  real_T rtb_motohawk_delta_time_f;
  real_T rtb_motohawk_delta_time_bm0;
  real_T rtb_motohawk_interpolation_1d_eo;
  real_T rtb_motohawk_delta_time_ce;
  real_T rtb_motohawk_delta_time_c3;
  real_T rtb_motohawk_delta_time_nt5;
  real_T rtb_Add_j4;
  real_T rtb_motohawk_interpolation_1d_l;
  real_T rtb_motohawk_interpolation_1d_bo;
  real_T rtb_motohawk_delta_time_cr;
  real_T rtb_Saturation_if;
  real_T rtb_Saturation_ei;
  real_T rtb_motohawk_interpolation_2d_cc;
  real_T rtb_motohawk_interpolation_1d2_l;
  real_T rtb_motohawk_interpolation_1d1_f;
  real_T rtb_motohawk_replicate[8];
  real_T rtb_motohawk_interpolation_1d1_e5;
  real_T rtb_Product_ck;
  real_T rtb_UnitDelay_a3;
  real_T rtb_motohawk_replicate1;
  real_T rtb_DataTypeConversion_hg;
  real_T rtb_DataTypeConversion_i;
  real_T rtb_motohawk_interpolation_1d3_m3;
  real_T rtb_Product5_j;
  real_T rtb_Switch_c;
  real_T rtb_DataTypeConversion_cr;
  real_T rtb_DataTypeConversion_je;
  real_T rtb_Abs_iy;
  real_T rtb_Switch_cz;
  uint32_T rtb_DataTypeConversion2_a;
  uint32_T rtb_DataTypeConversion2_f;
  uint32_T rtb_DataTypeConversion3_p;
  uint32_T rtb_DataTypeConversion2_c;
  uint32_T rtb_DataTypeConversion2_n;
  uint32_T rtb_DataTypeConversion2_o;
  uint32_T rtb_DataTypeConversion1_kv;
  uint32_T rtb_InjectorSequence_o2[8];
  uint32_T rtb_Sum_bz;
  uint32_T rtb_UnitDelay_ad;
  uint32_T rtb_DataTypeConversion6;
  int16_T rtb_motohawk_data_read_it;
  int16_T rtb_DataTypeConversion3_i;
  int16_T rtb_DataTypeConversion3_b;
  int16_T rtb_DataTypeConversion4_a;
  int16_T rtb_DataTypeConversion3_h;
  int16_T rtb_DataTypeConversion3_m;
  int16_T rtb_DataTypeConversion3_iu;
  int16_T rtb_DataTypeConversion3_ie;
  int16_T rtb_DataTypeConversion7;
  int16_T rtb_DataTypeConversion2_f4;
  uint16_T rtb_RPMInst;
  uint16_T rtb_motohawk_ain5_c;
  uint16_T rtb_RPM;
  uint16_T rtb_motohawk_ain6;
  uint16_T rtb_motohawk_ain9;
  uint16_T rtb_motohawk_ain1;
  uint16_T rtb_motohawk_ain6_h;
  uint16_T rtb_motohawk_ain_read_h;
  uint16_T rtb_motohawk_encoder_average_rpm;
  uint16_T rtb_motohawk_ain_read_hs;
  uint16_T rtb_motohawk_ain_read_d;
  uint16_T rtb_DataTypeConversion2_e;
  uint16_T rtb_DataTypeConversion2_c0;
  uint16_T rtb_DataTypeConversion2_ni;
  uint16_T rtb_DataTypeConversion2_i;
  uint16_T rtb_DataTypeConversion2_ml;
  uint16_T rtb_DataTypeConversion2_j;
  uint16_T rtb_DataTypeConversion2_e2;
  uint16_T rtb_DataTypeConversion2_fg;
  uint16_T rtb_DataTypeConversion_mx;
  uint16_T rtb_Product_ku;
  index_T rtb_motohawk_prelookup_j;
  index_T rtb_motohawk_prelookup_f;
  index_T rtb_motohawk_prelookup2;
  index_T rtb_motohawk_prelookup_nf;
  index_T rtb_motohawk_prelookup1_h;
  index_T rtb_motohawk_prelookup1_hi;
  index_T rtb_motohawk_prelookup_d;
  index_T rtb_motohawk_prelookup2_g;
  index_T rtb_motohawk_prelookup1_a4;
  index_T rtb_motohawk_prelookup2_d;
  index_T rtb_motohawk_prelookup_dw;
  index_T rtb_motohawk_prelookup_k;
  index_T rtb_motohawk_prelookup_ho;
  index_T rtb_TimeSinceRun09;
  index_T rtb_motohawk_prelookup1_hp;
  index_T rtb_motohawk_prelookup_ft;
  index_T rtb_motohawk_prelookup_col;
  index_T rtb_motohawk_prelookup_row;
  index_T rtb_motohawk_prelookup_l;
  index_T rtb_motohawk_prelookup_it;
  index_T rtb_motohawk_prelookup13;
  index_T rtb_motohawk_prelookup1_c;
  index_T rtb_motohawk_prelookup_b;
  index_T rtb_motohawk_prelookup1_p;
  index_T rtb_motohawk_prelookup3;
  index_T rtb_motohawk_prelookup1_cv;
  index_T rtb_motohawk_prelookup_c;
  index_T rtb_motohawk_prelookup2_e;
  index_T rtb_motohawk_prelookup3_e;
  index_T rtb_motohawk_prelookup2_ev;
  index_T rtb_motohawk_prelookup_hy;
  index_T rtb_motohawk_prelookup_nn;
  int8_T rtb_Add1_bc;
  int8_T rtb_Add1_bj;
  int8_T rtb_Add1_e;
  int8_T rtb_motohawk_interpolation_2d_n;
  uint8_T rtb_Compare_b;
  uint8_T rtb_Compare_bk;
  uint8_T rtb_Compare_on;
  uint8_T rtb_motohawk_data_read1_n;
  boolean_T rtb_Logic_e[2];
  boolean_T rtb_RelOp_ni;
  boolean_T rtb_motohawk_data_read2_j;
  boolean_T rtb_motohawk_fault_action_m;
  boolean_T rtb_motohawk_fault_action1_m;
  boolean_T rtb_motohawk_fault_status2_gr;
  boolean_T rtb_motohawk_fault_status1_pt;
  boolean_T rtb_motohawk_fault_action1_mq;
  boolean_T rtb_motohawk_fault_action2;
  boolean_T rtb_motohawk_fault_action3;
  boolean_T rtb_motohawk_fault_status3_a5;
  boolean_T rtb_motohawk_fault_status4_ly;
  boolean_T rtb_motohawk_fault_status9;
  boolean_T rtb_LogicalOperator3_k;
  boolean_T rtb_LogicalOperator1_kk;
  boolean_T rtb_LogicalOperator2_h;
  boolean_T rtb_LogicalOperator4_ij;
  boolean_T rtb_LogicalOperator5_jl;
  boolean_T rtb_motohawk_data_read1_ko;
  boolean_T rtb_motohawk_fault_status12;
  boolean_T rtb_LogicalOperator_m;
  boolean_T rtb_LogicalOperator1_dr;
  boolean_T rtb_LogicalOperator2_ey;
  boolean_T rtb_LogicalOperator3_o;
  boolean_T rtb_LogicalOperator4_m;
  boolean_T rtb_LogicalOperator5_i;
  boolean_T rtb_RelationalOperator5_i;
  boolean_T rtb_RelationalOperator_e;
  boolean_T rtb_RelationalOperator3_bo;
  boolean_T rtb_RelationalOperator3_h0;
  boolean_T rtb_LogicalOperator2_c;
  boolean_T rtb_LogicalOperator3_ki;
  boolean_T rtb_LogicalOperator2_nf;
  boolean_T rtb_LogicalOperator3_f;
  boolean_T rtb_LogicalOperator2_e1;
  boolean_T rtb_LogicalOperator3_cp;
  boolean_T rtb_LogicalOperator2_fo;
  boolean_T rtb_LogicalOperator3_m2;
  boolean_T rtb_RelationalOperator_ou;
  boolean_T rtb_LogicalOperator_eg;
  boolean_T rtb_LogicalOperator1_l0;
  boolean_T rtb_LogicalOperator2_p2;
  boolean_T rtb_LogicalOperator3_oi;
  boolean_T rtb_LogicalOperator2_kk;
  boolean_T rtb_LogicalOperator3_d5;
  boolean_T rtb_LogicalOperator2_nl;
  boolean_T rtb_LogicalOperator3_ck;
  boolean_T rtb_LogicalOperator2_fa;
  boolean_T rtb_LogicalOperator3_mi;
  boolean_T rtb_LogicalOperator2_ce;
  boolean_T rtb_LogicalOperator3_i;
  boolean_T rtb_LogicalOperator2_pe;
  boolean_T rtb_LogicalOperator3_fp;
  boolean_T rtb_LogicalOperator2_n0;
  boolean_T rtb_LogicalOperator3_dc;
  boolean_T rtb_LogicalOperator2_ly;
  boolean_T rtb_LogicalOperator3_af;
  boolean_T rtb_LogicalOperator2_i;
  boolean_T rtb_LogicalOperator3_nm;
  boolean_T rtb_LogicalOperator2_eq;
  boolean_T rtb_LogicalOperator3_cpj;
  boolean_T rtb_LogicalOperator2_gq;
  boolean_T rtb_LogicalOperator3_ej;
  boolean_T rtb_RelationalOperator5_k;
  boolean_T rtb_RelationalOperator4_b;
  boolean_T rtb_RelationalOperator_au;
  boolean_T rtb_RelationalOperator3_app;
  boolean_T rtb_RelationalOperator2_mn;
  boolean_T rtb_RelationalOperator1_fp;
  boolean_T rtb_RelationalOperator5_kk;
  boolean_T rtb_RelationalOperator4_c;
  boolean_T rtb_RelationalOperator_m;
  boolean_T rtb_RelationalOperator3_jm;
  boolean_T rtb_RelationalOperator2_h4;
  boolean_T rtb_RelationalOperator1_l;
  boolean_T rtb_RelationalOperator5_c;
  boolean_T rtb_RelationalOperator4_m;
  boolean_T rtb_RelationalOperator_hk;
  boolean_T rtb_RelationalOperator3_im;
  boolean_T rtb_RelationalOperator2_li;
  boolean_T rtb_RelationalOperator1_nj;
  boolean_T rtb_RelationalOperator5_m;
  boolean_T rtb_RelationalOperator4_cl;
  boolean_T rtb_RelationalOperator_hq;
  boolean_T rtb_RelationalOperator3_df;
  boolean_T rtb_RelationalOperator2_e3;
  boolean_T rtb_RelationalOperator1_b0;
  boolean_T rtb_RelationalOperator1_at;
  boolean_T rtb_RelationalOperator2_d;
  boolean_T rtb_LogicalOperator_md;
  boolean_T rtb_LogicalOperator1_dt;
  boolean_T rtb_LogicalOperator4_oy;
  boolean_T rtb_LogicalOperator_n;
  boolean_T rtb_LogicalOperator1_it;
  boolean_T rtb_LogicalOperator2_m;
  boolean_T rtb_LogicalOperator1_fj;
  boolean_T rtb_LogicalOperator2_gw;
  boolean_T rtb_LogicalOperator4_b;
  boolean_T rtb_LogicalOperator4_a;
  boolean_T rtb_LogicalOperator2_m3;
  boolean_T rtb_LogicalOperator5_p3;
  boolean_T rtb_LogicalOperator4_f;
  boolean_T rtb_LogicalOperator2_iu;
  boolean_T rtb_LogicalOperator5_af;
  boolean_T rtb_LogicalOperator_nn;
  boolean_T rtb_LogicalOperator4_pf;
  boolean_T rtb_LogicalOperator26;
  boolean_T rtb_LogicalOperator29;
  boolean_T rtb_LogicalOperator31;
  boolean_T rtb_LogicalOperator18;
  boolean_T rtb_LogicalOperator20;
  boolean_T rtb_LogicalOperator22;
  boolean_T rtb_LogicalOperator24;
  boolean_T rtb_LogicalOperator3_p;
  boolean_T rtb_LogicalOperator6_mr;
  boolean_T rtb_LogicalOperator8_b;
  boolean_T rtb_LogicalOperator10_p;
  boolean_T rtb_LogicalOperator12;
  boolean_T rtb_LogicalOperator14;
  boolean_T rtb_LogicalOperator16;
  boolean_T rtb_LogicalOperator27;
  boolean_T rtb_LogicalOperator4_kb;
  boolean_T rtb_LogicalOperator7_hn;
  boolean_T rtb_LogicalOperator8_c;
  boolean_T rtb_LogicalOperator11_p;
  boolean_T rtb_LogicalOperator1_i1;
  boolean_T rtb_LogicalOperator2_ba;
  boolean_T rtb_LogicalOperator3_nh;
  boolean_T rtb_LogicalOperator4_bi;
  boolean_T rtb_LogicalOperator2_kr;
  boolean_T rtb_LogicalOperator2_pb;
  boolean_T rtb_LogicalOperator4_ge;
  boolean_T rtb_LogicalOperator4_px;
  boolean_T rtb_LogicalOperator_oov;
  boolean_T rtb_LogicalOperator_lq;
  boolean_T rtb_RelationalOperator2_bhf;
  boolean_T rtb_LogicalOperator_i;
  boolean_T rtb_LT3;
  boolean_T rtb_LT2;
  boolean_T rtb_LT4;
  boolean_T rtb_LT3_j;
  boolean_T rtb_LT2_l;
  boolean_T rtb_LT4_o;
  boolean_T rtb_RelationalOperator2_nx;
  boolean_T rtb_RelationalOperator1_d;
  boolean_T rtb_RelationalOperator2_hm;
  boolean_T rtb_RelationalOperator1_lp4;
  boolean_T rtb_LogicalOperator_m3;
  boolean_T rtb_LogicalOperator_h;
  boolean_T rtb_RelationalOperator1_np;
  boolean_T rtb_motohawk_data_read1_nh;
  boolean_T rtb_motohawk_data_read1_nn;
  boolean_T rtb_AboveRich;
  boolean_T rtb_CombinatorialLogic_n[2];
  boolean_T rtb_AboveRich_d;
  boolean_T rtb_CombinatorialLogic_i[2];
  boolean_T rtb_BelowLoTarget_j;
  boolean_T rtb_CombinatorialLogic_h[2];
  boolean_T rtb_AND1[8];
  boolean_T rtb_LogicalOperator_k;
  boolean_T rtb_BelowLoTarget_jl;
  boolean_T rtb_LogicalOperator2_fx;
  boolean_T rtb_LogicalOperator2_pu;
  boolean_T rtb_AboveHiTarget_a;
  boolean_T rtb_CombinatorialLogic_m[2];
  boolean_T rtb_CombinatorialLogic_e[2];
  boolean_T rtb_RelationalOperator2_az;
  boolean_T rtb_Overspeed2;
  boolean_T rtb_RelOp_ie;
  boolean_T rtb_Switch_b3;
  boolean_T rtb_RelationalOperator6_e;
  boolean_T rtb_LogicalOperator1_ib;
  boolean_T rtb_RelationalOperator5_h;
  real_T minV;
  real_T minV_0;
  int32_T maxV;
  boolean_T rtb_LogicalOperator6_p;
  boolean_T rtb_LogicalOperator1_ou;
  real_T rtb_DataTypeConversion1_j;
  real_T rtb_DataTypeConversion_nv;
  real_T rtb_UnitDelay_gc;
  real_T rtb_UnitDelay1_d;
  real_T rtb_Sum2_cd;
  real_T rtb_Sum1_fj;
  real_T rtb_Switch_k;
  real_T rtb_Merge_gh;
  boolean_T rtb_RelOp_fa;
  boolean_T rtb_RelationalOperator_kc;
  boolean_T rtb_LogicalOperator_d;
  real_T rtb_Sum1_gj;
  real_T rtb_UnitDelay1_k0;
  real_T rtb_UnitDelay3_i;
  real_T rtb_UnitDelay4_o;
  real_T rtb_UnitDelay1_n5;
  real_T rtb_UnitDelay3_p;
  real_T rtb_UnitDelay4_g;
  real_T rtb_Abs_o;
  real_T rtb_UnitDelay1_kr;
  real_T rtb_UnitDelay3_g;
  real_T rtb_UnitDelay4_gs;
  real_T rtb_APP2;
  real_T rtb_Sum1_jr;
  real_T rtb_Sum1_e;
  real_T rtb_Sum1_kl;
  real_T rtb_Sum1_es;
  real_T rtb_Sum1_hy;
  real_T rtb_Sum1_e5;
  real_T rtb_Sum1_mm;
  real_T rtb_Sum1_aw;
  real_T rtb_Sum1_ns;
  real_T rtb_Sum1_kz;
  real_T rtb_Sum1_na;
  real_T rtb_Sum1_hc;
  real_T rtb_Sum1_nh;
  real_T rtb_Sum1_al;
  uint32_T rtb_Switch_e0;
  real_T rtb_Sum1_d2;
  boolean_T rtb_RelationalOperator3_i2;
  uint16_T rtb_Product2_e;
  boolean_T rtb_Switch1_m;
  int8_T rtb_Add_b;
  int8_T rtb_Sum_o3;
  real_T rtb_Switch_g;
  real_T rtb_Switch1_gg;
  real_T rtb_Switch2_c;
  real_T rtb_Switch3_e;
  real_T rtb_Switch4_c;
  boolean_T rtb_LogicalOperator_af;
  boolean_T rtb_LogicalOperator1_b3;
  boolean_T rtb_LogicalOperator_ow[8];
  real_T rtb_Product1_fy[8];
  real_T rtb_DataTypeConversion_ep;
  real_T rtb_Multiplyby10ifnotyetenabled_p;
  real_T rtb_Divide_dm[8];
  uint16_T rtb_Product1_hlh;
  boolean_T rtb_LogicalOperator3_aq;
  int16_T rtb_DataTypeConversion_cg;
  int16_T rtb_Sum4_l;
  int16_T rtb_Switch2_hy;
  real_T rtb_Product1_mc;
  uint8_T rtb_Gain5;
  uint8_T rtb_Gain4;
  uint8_T rtb_Gain3_e;
  uint8_T rtb_Gain2_b;
  uint8_T rtb_Gain1_fr;
  int32_T i;
  real_T rtb_DesiredLambda_idx;
  real_T rtb_DesiredLambda_idx_0;
  real_T rtb_DesiredLambda_idx_1;
  real_T u;

  /* S-Function (motohawk_sfun_trigger): '<S483>/motohawk_trigger' */
  /* Enable for Trigger_FGND_5XRTI_PERIODIC_9815p0006 */
  if (BaseEngineController_LS_112_DWork.s483_motohawk_trigger_DWORK1 == 0) {
    BaseEngineController_LS_112_DWork.s483_motohawk_trigger_DWORK1 = 1;
  }

  /* Logic: '<S690>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S690>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S690>/motohawk_fault_status4'
   */
  rtb_LogicalOperator1_ib = (IsFaultActive(12) || IsFaultActive(13));

  /* Logic: '<S690>/Logical Operator6' */
  rtb_LogicalOperator6_p = !rtb_LogicalOperator1_ib;

  /* Logic: '<S690>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S690>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S690>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_ou = (IsFaultSuspected(12) || IsFaultSuspected(13));

  /* S-Function Block: <S484>/motohawk_ain2 Resource: AN12 */
  BaseEngineController_LS_112_B.s484_motohawk_ain2 = AN12_AnalogInput_Get();

  /* DataTypeConversion: '<S690>/Data Type Conversion' */
  rtb_DataTypeConversion_c5 = (real_T)
    BaseEngineController_LS_112_B.s484_motohawk_ain2;

  /* S-Function Block: <S714>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (APP2Idx_DataStore()) = TablePrelookup_real_T(rtb_DataTypeConversion_c5,
      (APP2IdxArr_DataStore()), 9, (APP2Idx_DataStore()));
    rtb_motohawk_prelookup_j = (APP2Idx_DataStore());
  }

  /* S-Function Block: <S714>/motohawk_interpolation_1d */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    BaseEngineController_LS_112_B.s714_motohawk_interpolation_1d =
      TableInterpolation1D_real_T(rtb_motohawk_prelookup_j, (real_T *)
      ((APP2Tbl_DataStore())), 9);
  }

  /* UnitDelay: '<S690>/Unit Delay' */
  rtb_UnitDelay_h3 = BaseEngineController_LS_112_DWork.s690_UnitDelay_DSTATE;

  /* If: '<S690>/If' incorporates:
   *  Logic: '<S690>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_p && rtb_LogicalOperator1_ou) {
    /* Outputs for IfAction SubSystem: '<S690>/If Action Subsystem' incorporates:
     *  ActionPort: '<S709>/Action Port'
     */
    BaseEngineController_LS_112_IfActionSubsystem(rtb_UnitDelay_h3, &rtb_Merge_i);

    /* End of Outputs for SubSystem: '<S690>/If Action Subsystem' */
  } else if (rtb_LogicalOperator1_ib) {
    /* Outputs for IfAction SubSystem: '<S690>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S710>/Action Port'
     */
    BaseEngineController_LS_112_IfActionSubsystem((APP2Default_DataStore()),
      &rtb_Merge_i);

    /* End of Outputs for SubSystem: '<S690>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S690>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S711>/Action Port'
     */
    BaseEngineController_LS_112_IfActionSubsystem
      (BaseEngineController_LS_112_B.s714_motohawk_interpolation_1d,
       &rtb_Merge_i);

    /* End of Outputs for SubSystem: '<S690>/If Action Subsystem2' */
  }

  /* End of If: '<S690>/If' */

  /* MinMax: '<S713>/MinMax' incorporates:
   *  Constant: '<S690>/Constant1'
   */
  rtb_DataTypeConversion_je = rtb_Merge_i >= 0.0 ? rtb_Merge_i : 0.0;

  /* MinMax: '<S713>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S690>/motohawk_calibration2'
   */
  minV = (rtb_DataTypeConversion_je <= (APP2MaxLimit_DataStore())) || rtIsNaN
    ((APP2MaxLimit_DataStore())) ? rtb_DataTypeConversion_je :
    (APP2MaxLimit_DataStore());

  /* S-Function Block: <S708>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_112_DWork.s708_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_je = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S708>/Product' incorporates:
   *  MinMax: '<S708>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S708>/motohawk_calibration'
   */
  rtb_DataTypeConversion_je /= (rtb_DataTypeConversion_je >=
    (APP2FiltConst_DataStore())) || rtIsNaN((APP2FiltConst_DataStore())) ?
    rtb_DataTypeConversion_je : (APP2FiltConst_DataStore());

  /* Sum: '<S715>/Sum1' incorporates:
   *  Constant: '<S715>/Constant'
   *  MinMax: '<S713>/MinMax1'
   *  Product: '<S715>/Product'
   *  Product: '<S715>/Product1'
   *  Sum: '<S715>/Sum'
   *  UnitDelay: '<S715>/Unit Delay'
   */
  rtb_Sum1_jr = (1.0 - rtb_DataTypeConversion_je) *
    BaseEngineController_LS_112_DWork.s715_UnitDelay_DSTATE + minV *
    rtb_DataTypeConversion_je;

  /* If: '<S712>/If' incorporates:
   *  Inport: '<S716>/In1'
   *  Inport: '<S717>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S712>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S712>/override_enable'
   */
  if ((APP2_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S712>/NewValue' incorporates:
     *  ActionPort: '<S716>/Action Port'
     */
    BaseEngineController_LS_112_B.s712_Merge = (APP2_new_DataStore());

    /* End of Outputs for SubSystem: '<S712>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S712>/OldValue' incorporates:
     *  ActionPort: '<S717>/Action Port'
     */
    BaseEngineController_LS_112_B.s712_Merge = rtb_Sum1_jr;

    /* End of Outputs for SubSystem: '<S712>/OldValue' */
  }

  /* End of If: '<S712>/If' */

  /* Logic: '<S740>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S740>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S740>/motohawk_fault_status4'
   */
  rtb_LogicalOperator1_ib = (IsFaultActive(18) || IsFaultActive(19));

  /* Logic: '<S740>/Logical Operator6' */
  rtb_LogicalOperator6_p = !rtb_LogicalOperator1_ib;

  /* Logic: '<S740>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S740>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S740>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_ou = (IsFaultSuspected(18) || IsFaultSuspected(19));

  /* DataTypeConversion: '<S693>/Data Type Conversion1' */
  rtb_DataTypeConversion1_j = (real_T)
    BaseEngineController_LS_112_B.s484_motohawk_ain2;

  /* Switch: '<S693>/Switch' incorporates:
   *  Fcn: '<S693>/Fcn'
   *  S-Function (motohawk_sfun_calibration): '<S693>/motohawk_calibration2'
   */
  if ((APP2_AdaptRev_Polarity_DataStore())) {
    BaseEngineController_LS_112_B.s693_Switch = 1023.0 -
      rtb_DataTypeConversion1_j;
  } else {
    BaseEngineController_LS_112_B.s693_Switch = rtb_DataTypeConversion1_j;
  }

  /* End of Switch: '<S693>/Switch' */

  /* S-Function (motohawk_sfun_data_read): '<S737>/motohawk_data_read' */
  rtb_DataTypeConversion_mx = APP2_AdaptRaw_Adpt_Low_DataStore();

  /* MinMax: '<S737>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S693>/motohawk_calibration9'
   */
  u = (real_T)rtb_DataTypeConversion_mx;
  BaseEngineController_LS_112_B.s737_MinMax = (u <=
    (APP2_AdaptAdapt_Low_Max_DataStore())) || rtIsNaN
    ((APP2_AdaptAdapt_Low_Max_DataStore())) ? u :
    (APP2_AdaptAdapt_Low_Max_DataStore());

  /* Sum: '<S693>/Sum2' */
  rtb_DataTypeConversion1_j = BaseEngineController_LS_112_B.s693_Switch -
    BaseEngineController_LS_112_B.s737_MinMax;

  /* S-Function (motohawk_sfun_data_read): '<S737>/motohawk_data_read1' */
  rtb_DataTypeConversion_mx = APP2_AdaptRaw_Adpt_Hi_DataStore();

  /* MinMax: '<S737>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S693>/motohawk_calibration11'
   */
  u = (real_T)rtb_DataTypeConversion_mx;
  BaseEngineController_LS_112_B.s737_MinMax1 = (u >=
    (APP2_AdaptAdapt_Hi_Min_DataStore())) || rtIsNaN
    ((APP2_AdaptAdapt_Hi_Min_DataStore())) ? u :
    (APP2_AdaptAdapt_Hi_Min_DataStore());

  /* Gain: '<S693>/Gain2' incorporates:
   *  Product: '<S693>/Product1'
   *  Sum: '<S693>/Sum1'
   */
  rtb_DataTypeConversion_je = rtb_DataTypeConversion1_j /
    (BaseEngineController_LS_112_B.s737_MinMax1 -
     BaseEngineController_LS_112_B.s737_MinMax) * 100.0;

  /* MinMax: '<S741>/MinMax' incorporates:
   *  Constant: '<S693>/Constant1'
   */
  rtb_DataTypeConversion_je = rtb_DataTypeConversion_je >= 0.0 ?
    rtb_DataTypeConversion_je : 0.0;

  /* MinMax: '<S741>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S693>/motohawk_calibration1'
   */
  BaseEngineController_LS_112_B.s741_MinMax1 = (rtb_DataTypeConversion_je <=
    (APP2_AdaptMaxLimit_DataStore())) || rtIsNaN((APP2_AdaptMaxLimit_DataStore()))
    ? rtb_DataTypeConversion_je : (APP2_AdaptMaxLimit_DataStore());

  /* S-Function Block: <S739>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_112_DWork.s739_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_je = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S739>/Product' incorporates:
   *  MinMax: '<S739>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S739>/motohawk_calibration'
   */
  rtb_DataTypeConversion_je /= (rtb_DataTypeConversion_je >=
    (APP2_AdaptFilterConst_DataStore())) || rtIsNaN
    ((APP2_AdaptFilterConst_DataStore())) ? rtb_DataTypeConversion_je :
    (APP2_AdaptFilterConst_DataStore());

  /* Sum: '<S747>/Sum1' incorporates:
   *  Constant: '<S747>/Constant'
   *  Product: '<S747>/Product'
   *  Product: '<S747>/Product1'
   *  Sum: '<S747>/Sum'
   *  UnitDelay: '<S747>/Unit Delay'
   */
  rtb_Sum1_cy = (1.0 - rtb_DataTypeConversion_je) *
    BaseEngineController_LS_112_DWork.s747_UnitDelay_DSTATE +
    BaseEngineController_LS_112_B.s741_MinMax1 * rtb_DataTypeConversion_je;

  /* UnitDelay: '<S740>/Unit Delay1' */
  rtb_UnitDelay1_a = BaseEngineController_LS_112_DWork.s740_UnitDelay1_DSTATE;

  /* If: '<S740>/If' incorporates:
   *  Logic: '<S740>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_p && rtb_LogicalOperator1_ou) {
    /* Outputs for IfAction SubSystem: '<S740>/If Action Subsystem' incorporates:
     *  ActionPort: '<S748>/Action Port'
     */
    BaseEngineController_LS_112_IfActionSubsystem(rtb_UnitDelay1_a,
      &rtb_Merge_pf);

    /* End of Outputs for SubSystem: '<S740>/If Action Subsystem' */
  } else if (rtb_LogicalOperator1_ib) {
    /* Outputs for IfAction SubSystem: '<S740>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S749>/Action Port'
     */
    BaseEngineController_LS_112_IfActionSubsystem((APP2_AdaptDfltValue_DataStore
      ()), &rtb_Merge_pf);

    /* End of Outputs for SubSystem: '<S740>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S740>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S750>/Action Port'
     */
    BaseEngineController_LS_112_IfActionSubsystem(rtb_Sum1_cy, &rtb_Merge_pf);

    /* End of Outputs for SubSystem: '<S740>/If Action Subsystem2' */
  }

  /* End of If: '<S740>/If' */

  /* If: '<S751>/If' incorporates:
   *  Inport: '<S752>/In1'
   *  Inport: '<S753>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S751>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S751>/override_enable'
   */
  if ((APP2_Adapt_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S751>/NewValue' incorporates:
     *  ActionPort: '<S752>/Action Port'
     */
    BaseEngineController_LS_112_B.s751_Merge = (APP2_Adapt_new_DataStore());

    /* End of Outputs for SubSystem: '<S751>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S751>/OldValue' incorporates:
     *  ActionPort: '<S753>/Action Port'
     */
    BaseEngineController_LS_112_B.s751_Merge = rtb_Merge_pf;

    /* End of Outputs for SubSystem: '<S751>/OldValue' */
  }

  /* End of If: '<S751>/If' */

  /* Switch: '<S484>/Switch1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S484>/motohawk_calibration'
   */
  if ((APP_AdaptMode_DataStore())) {
    rtb_APP2 = BaseEngineController_LS_112_B.s751_Merge;
  } else {
    rtb_APP2 = BaseEngineController_LS_112_B.s712_Merge;
  }

  /* End of Switch: '<S484>/Switch1' */
  /* Logic: '<S688>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S688>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S688>/motohawk_fault_status4'
   */
  rtb_LogicalOperator1_ib = (IsFaultActive(4) || IsFaultActive(5));

  /* Logic: '<S688>/Logical Operator6' */
  rtb_LogicalOperator6_p = !rtb_LogicalOperator1_ib;

  /* Logic: '<S688>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S688>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S688>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_ou = (IsFaultSuspected(4) || IsFaultSuspected(5));

  /* S-Function Block: <S484>/motohawk_ain1 Resource: AN11 */
  BaseEngineController_LS_112_B.s484_motohawk_ain1 = AN11_AnalogInput_Get();

  /* DataTypeConversion: '<S688>/Data Type Conversion' */
  rtb_DataTypeConversion_dp = (real_T)
    BaseEngineController_LS_112_B.s484_motohawk_ain1;

  /* S-Function Block: <S702>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (APP1Idx_DataStore()) = TablePrelookup_real_T(rtb_DataTypeConversion_dp,
      (APP1IdxArr_DataStore()), 9, (APP1Idx_DataStore()));
    rtb_motohawk_prelookup_f = (APP1Idx_DataStore());
  }

  /* S-Function Block: <S702>/motohawk_interpolation_1d */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    BaseEngineController_LS_112_B.s702_motohawk_interpolation_1d =
      TableInterpolation1D_real_T(rtb_motohawk_prelookup_f, (real_T *)
      ((APP1Tbl_DataStore())), 9);
  }

  /* UnitDelay: '<S688>/Unit Delay' */
  rtb_UnitDelay_hho = BaseEngineController_LS_112_DWork.s688_UnitDelay_DSTATE;

  /* If: '<S688>/If' incorporates:
   *  Logic: '<S688>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_p && rtb_LogicalOperator1_ou) {
    /* Outputs for IfAction SubSystem: '<S688>/If Action Subsystem' incorporates:
     *  ActionPort: '<S697>/Action Port'
     */
    BaseEngineController_LS_112_IfActionSubsystem(rtb_UnitDelay_hho,
      &rtb_Merge_e);

    /* End of Outputs for SubSystem: '<S688>/If Action Subsystem' */
  } else if (rtb_LogicalOperator1_ib) {
    /* Outputs for IfAction SubSystem: '<S688>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S698>/Action Port'
     */
    BaseEngineController_LS_112_IfActionSubsystem((APP1Default_DataStore()),
      &rtb_Merge_e);

    /* End of Outputs for SubSystem: '<S688>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S688>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S699>/Action Port'
     */
    BaseEngineController_LS_112_IfActionSubsystem
      (BaseEngineController_LS_112_B.s702_motohawk_interpolation_1d,
       &rtb_Merge_e);

    /* End of Outputs for SubSystem: '<S688>/If Action Subsystem2' */
  }

  /* End of If: '<S688>/If' */

  /* MinMax: '<S701>/MinMax' incorporates:
   *  Constant: '<S688>/Constant1'
   */
  rtb_DataTypeConversion_je = rtb_Merge_e >= 0.0 ? rtb_Merge_e : 0.0;

  /* MinMax: '<S701>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S688>/motohawk_calibration2'
   */
  minV_0 = (rtb_DataTypeConversion_je <= (APP1MaxLimit_DataStore())) || rtIsNaN
    ((APP1MaxLimit_DataStore())) ? rtb_DataTypeConversion_je :
    (APP1MaxLimit_DataStore());

  /* S-Function Block: <S696>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_112_DWork.s696_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_je = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S696>/Product' incorporates:
   *  MinMax: '<S696>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S696>/motohawk_calibration'
   */
  rtb_DataTypeConversion_je /= (rtb_DataTypeConversion_je >=
    (APP1FiltConst_DataStore())) || rtIsNaN((APP1FiltConst_DataStore())) ?
    rtb_DataTypeConversion_je : (APP1FiltConst_DataStore());

  /* Sum: '<S703>/Sum1' incorporates:
   *  Constant: '<S703>/Constant'
   *  MinMax: '<S701>/MinMax1'
   *  Product: '<S703>/Product'
   *  Product: '<S703>/Product1'
   *  Sum: '<S703>/Sum'
   *  UnitDelay: '<S703>/Unit Delay'
   */
  rtb_Sum1_e = (1.0 - rtb_DataTypeConversion_je) *
    BaseEngineController_LS_112_DWork.s703_UnitDelay_DSTATE + minV_0 *
    rtb_DataTypeConversion_je;

  /* If: '<S700>/If' incorporates:
   *  Inport: '<S704>/In1'
   *  Inport: '<S705>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S700>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S700>/override_enable'
   */
  if ((APP1_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S700>/NewValue' incorporates:
     *  ActionPort: '<S704>/Action Port'
     */
    BaseEngineController_LS_112_B.s700_Merge = (APP1_new_DataStore());

    /* End of Outputs for SubSystem: '<S700>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S700>/OldValue' incorporates:
     *  ActionPort: '<S705>/Action Port'
     */
    BaseEngineController_LS_112_B.s700_Merge = rtb_Sum1_e;

    /* End of Outputs for SubSystem: '<S700>/OldValue' */
  }

  /* End of If: '<S700>/If' */

  /* Logic: '<S723>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S723>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S723>/motohawk_fault_status4'
   */
  rtb_LogicalOperator1_ib = (IsFaultActive(10) || IsFaultActive(11));

  /* Logic: '<S723>/Logical Operator6' */
  rtb_LogicalOperator6_p = !rtb_LogicalOperator1_ib;

  /* Logic: '<S723>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S723>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S723>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_ou = (IsFaultSuspected(10) || IsFaultSuspected(11));

  /* DataTypeConversion: '<S692>/Data Type Conversion1' */
  rtb_DataTypeConversion1_j = (real_T)
    BaseEngineController_LS_112_B.s484_motohawk_ain1;

  /* Switch: '<S692>/Switch' incorporates:
   *  Fcn: '<S692>/Fcn'
   *  S-Function (motohawk_sfun_calibration): '<S692>/motohawk_calibration2'
   */
  if ((APP1_AdaptRev_Polarity_DataStore())) {
    BaseEngineController_LS_112_B.s692_Switch = 1023.0 -
      rtb_DataTypeConversion1_j;
  } else {
    BaseEngineController_LS_112_B.s692_Switch = rtb_DataTypeConversion1_j;
  }

  /* End of Switch: '<S692>/Switch' */

  /* S-Function (motohawk_sfun_data_read): '<S720>/motohawk_data_read' */
  rtb_DataTypeConversion_mx = APP1_AdaptRaw_Adpt_Low_DataStore();

  /* MinMax: '<S720>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S692>/motohawk_calibration9'
   */
  u = (real_T)rtb_DataTypeConversion_mx;
  BaseEngineController_LS_112_B.s720_MinMax = (u <=
    (APP1_AdaptAdapt_Low_Max_DataStore())) || rtIsNaN
    ((APP1_AdaptAdapt_Low_Max_DataStore())) ? u :
    (APP1_AdaptAdapt_Low_Max_DataStore());

  /* Sum: '<S692>/Sum2' */
  rtb_DataTypeConversion1_j = BaseEngineController_LS_112_B.s692_Switch -
    BaseEngineController_LS_112_B.s720_MinMax;

  /* S-Function (motohawk_sfun_data_read): '<S720>/motohawk_data_read1' */
  rtb_DataTypeConversion_mx = APP1_AdaptRaw_Adpt_Hi_DataStore();

  /* MinMax: '<S720>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S692>/motohawk_calibration11'
   */
  u = (real_T)rtb_DataTypeConversion_mx;
  BaseEngineController_LS_112_B.s720_MinMax1 = (u >=
    (APP1_AdaptAdapt_Hi_Min_DataStore())) || rtIsNaN
    ((APP1_AdaptAdapt_Hi_Min_DataStore())) ? u :
    (APP1_AdaptAdapt_Hi_Min_DataStore());

  /* Gain: '<S692>/Gain2' incorporates:
   *  Product: '<S692>/Product1'
   *  Sum: '<S692>/Sum1'
   */
  rtb_DataTypeConversion_je = rtb_DataTypeConversion1_j /
    (BaseEngineController_LS_112_B.s720_MinMax1 -
     BaseEngineController_LS_112_B.s720_MinMax) * 100.0;

  /* MinMax: '<S724>/MinMax' incorporates:
   *  Constant: '<S692>/Constant1'
   */
  rtb_DataTypeConversion_je = rtb_DataTypeConversion_je >= 0.0 ?
    rtb_DataTypeConversion_je : 0.0;

  /* MinMax: '<S724>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S692>/motohawk_calibration1'
   */
  BaseEngineController_LS_112_B.s724_MinMax1 = (rtb_DataTypeConversion_je <=
    (APP1_AdaptMaxLimit_DataStore())) || rtIsNaN((APP1_AdaptMaxLimit_DataStore()))
    ? rtb_DataTypeConversion_je : (APP1_AdaptMaxLimit_DataStore());

  /* S-Function Block: <S722>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_112_DWork.s722_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_je = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S722>/Product' incorporates:
   *  MinMax: '<S722>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S722>/motohawk_calibration'
   */
  rtb_DataTypeConversion_je /= (rtb_DataTypeConversion_je >=
    (APP1_AdaptFilterConst_DataStore())) || rtIsNaN
    ((APP1_AdaptFilterConst_DataStore())) ? rtb_DataTypeConversion_je :
    (APP1_AdaptFilterConst_DataStore());

  /* Sum: '<S730>/Sum1' incorporates:
   *  Constant: '<S730>/Constant'
   *  Product: '<S730>/Product'
   *  Product: '<S730>/Product1'
   *  Sum: '<S730>/Sum'
   *  UnitDelay: '<S730>/Unit Delay'
   */
  rtb_Sum1_ex = (1.0 - rtb_DataTypeConversion_je) *
    BaseEngineController_LS_112_DWork.s730_UnitDelay_DSTATE +
    BaseEngineController_LS_112_B.s724_MinMax1 * rtb_DataTypeConversion_je;

  /* UnitDelay: '<S723>/Unit Delay1' */
  rtb_UnitDelay1_b = BaseEngineController_LS_112_DWork.s723_UnitDelay1_DSTATE;

  /* If: '<S723>/If' incorporates:
   *  Logic: '<S723>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_p && rtb_LogicalOperator1_ou) {
    /* Outputs for IfAction SubSystem: '<S723>/If Action Subsystem' incorporates:
     *  ActionPort: '<S731>/Action Port'
     */
    BaseEngineController_LS_112_IfActionSubsystem(rtb_UnitDelay1_b, &rtb_Merge_d);

    /* End of Outputs for SubSystem: '<S723>/If Action Subsystem' */
  } else if (rtb_LogicalOperator1_ib) {
    /* Outputs for IfAction SubSystem: '<S723>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S732>/Action Port'
     */
    BaseEngineController_LS_112_IfActionSubsystem((APP1_AdaptDfltValue_DataStore
      ()), &rtb_Merge_d);

    /* End of Outputs for SubSystem: '<S723>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S723>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S733>/Action Port'
     */
    BaseEngineController_LS_112_IfActionSubsystem(rtb_Sum1_ex, &rtb_Merge_d);

    /* End of Outputs for SubSystem: '<S723>/If Action Subsystem2' */
  }

  /* End of If: '<S723>/If' */

  /* If: '<S734>/If' incorporates:
   *  Inport: '<S735>/In1'
   *  Inport: '<S736>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S734>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S734>/override_enable'
   */
  if ((APP1_Adapt_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S734>/NewValue' incorporates:
     *  ActionPort: '<S735>/Action Port'
     */
    BaseEngineController_LS_112_B.s734_Merge = (APP1_Adapt_new_DataStore());

    /* End of Outputs for SubSystem: '<S734>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S734>/OldValue' incorporates:
     *  ActionPort: '<S736>/Action Port'
     */
    BaseEngineController_LS_112_B.s734_Merge = rtb_Merge_d;

    /* End of Outputs for SubSystem: '<S734>/OldValue' */
  }

  /* End of If: '<S734>/If' */

  /* Switch: '<S484>/Switch' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S484>/motohawk_calibration'
   */
  if ((APP_AdaptMode_DataStore())) {
    rtb_APP1 = BaseEngineController_LS_112_B.s734_Merge;
  } else {
    rtb_APP1 = BaseEngineController_LS_112_B.s700_Merge;
  }

  /* End of Switch: '<S484>/Switch' */
  /* Logic: '<S439>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S439>/motohawk_fault_status'
   *  S-Function (motohawk_sfun_fault_status): '<S439>/motohawk_fault_status1'
   */
  rtb_LogicalOperator6_p = (IsFaultActive(4) || IsFaultActive(5));

  /* Logic: '<S439>/Logical Operator6' incorporates:
   *  Logic: '<S439>/Logical Operator5'
   *  S-Function (motohawk_sfun_fault_status): '<S439>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S439>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_ou = (rtb_LogicalOperator6_p && (IsFaultActive(12) ||
    IsFaultActive(13)));

  /* Switch: '<S439>/Switch2' incorporates:
   *  Logic: '<S439>/Logical Operator1'
   *  S-Function (motohawk_sfun_fault_status): '<S439>/motohawk_fault_status4'
   */
  if (rtb_LogicalOperator1_ou || IsFaultActive(20)) {
    /* MinMax: '<S439>/MinMax' */
    rtb_DataTypeConversion1_j = (rtb_APP2 <= rtb_APP1) || rtIsNaN(rtb_APP1) ?
      rtb_APP2 : rtb_APP1;
  } else {
    /* Switch: '<S439>/Switch1' */
    if (rtb_LogicalOperator6_p) {
      rtb_DataTypeConversion1_j = rtb_APP2;
    } else {
      rtb_DataTypeConversion1_j = rtb_APP1;
    }

    /* End of Switch: '<S439>/Switch1' */
  }

  /* End of Switch: '<S439>/Switch2' */
  /* Switch: '<S443>/Switch1' incorporates:
   *  S-Function (motohawk_sfun_fault_action): '<S443>/motohawk_fault_action1'
   */
  if (GetFaultActionStatus(0)) {
    /* DataTypeConversion: '<S443>/Data Type Conversion' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S443>/motohawk_calibration1'
     */
    rtb_DataTypeConversion_ep = (real_T)((uint8_T)(Overheat_MaxAPP_DataStore()));

    /* MinMax: '<S462>/MinMax' incorporates:
     *  Constant: '<S443>/Constant1'
     *  Product: '<S443>/Product1'
     *  S-Function (motohawk_sfun_calibration): '<S443>/motohawk_calibration2'
     */
    u = (Overheat_ScaleAPP_DataStore()) * rtb_DataTypeConversion1_j;
    u = u >= 0.0 ? u : 0.0;

    /* MinMax: '<S462>/MinMax1' incorporates:
     *  Constant: '<S443>/Constant1'
     *  MinMax: '<S462>/MinMax'
     */
    BaseEngineController_LS_112_B.s443_Switch1 = u <= rtb_DataTypeConversion_ep ?
      u : rtb_DataTypeConversion_ep;
  } else {
    BaseEngineController_LS_112_B.s443_Switch1 = rtb_DataTypeConversion1_j;
  }

  /* End of Switch: '<S443>/Switch1' */
  /* S-Function Block: <S469>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_112_DWork.s469_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_ll = ((real_T) delta) * 0.000001;
  }

  /* Sum: '<S469>/Sum' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S469>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S469>/motohawk_delta_time'
   */
  BaseEngineController_LS_112_B.s469_Sum = rtb_motohawk_delta_time_ll +
    TimeSinceKeyOnTimer_DataStore();

  /* S-Function Block: <S431>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (ECT05In_DataStore()) = BaseEngineController_LS_112_B.s665_Merge;
    (ECT05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_112_B.s665_Merge, (ECT05IdxArr_DataStore()), 5,
       (ECT05Idx_DataStore()));
    BaseEngineController_LS_112_B.s431_motohawk_prelookup = (ECT05Idx_DataStore());
  }

  /* S-Function Block: <S432>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (IAT05In_DataStore()) = BaseEngineController_LS_112_B.s683_Merge;
    (IAT05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_112_B.s683_Merge, (IAT05IdxArr_DataStore()), 5,
       (IAT05Idx_DataStore()));
    BaseEngineController_LS_112_B.s432_motohawk_prelookup = (IAT05Idx_DataStore());
  }

  /* S-Function Block: <S565>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_112_DWork.s565_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_je = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S565>/Product' incorporates:
   *  MinMax: '<S565>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S565>/motohawk_calibration'
   */
  rtb_DataTypeConversion_je /= (rtb_DataTypeConversion_je >=
    (ACPresFilterConst_DataStore())) || rtIsNaN((ACPresFilterConst_DataStore()))
    ? rtb_DataTypeConversion_je : (ACPresFilterConst_DataStore());

  /* Logic: '<S556>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S556>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S556>/motohawk_fault_status4'
   */
  rtb_LogicalOperator1_ib = (IsFaultActive(2) || IsFaultActive(3));

  /* Logic: '<S556>/Logical Operator6' */
  rtb_LogicalOperator6_p = !rtb_LogicalOperator1_ib;

  /* Logic: '<S556>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S556>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S556>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_ou = (IsFaultSuspected(2) || IsFaultSuspected(3));

  /* S-Function Block: <S482>/motohawk_ain4 Resource: AN6 */
  BaseEngineController_LS_112_B.s482_motohawk_ain4 = AN6_AnalogInput_Get();

  /* DataTypeConversion: '<S556>/Data Type Conversion' */
  rtb_DataTypeConversion_nv = (real_T)
    BaseEngineController_LS_112_B.s482_motohawk_ain4;

  /* Product: '<S556>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S556>/motohawk_calibration4'
   */
  rtb_DataTypeConversion1_j = rtb_DataTypeConversion_nv * (ACPresGain_DataStore());

  /* Sum: '<S556>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S556>/motohawk_calibration5'
   */
  BaseEngineController_LS_112_B.s556_Sum1 = rtb_DataTypeConversion1_j +
    (ACPresOfst_DataStore());

  /* UnitDelay: '<S556>/Unit Delay1' */
  rtb_UnitDelay1_p = BaseEngineController_LS_112_DWork.s556_UnitDelay1_DSTATE;

  /* If: '<S556>/If' incorporates:
   *  Logic: '<S556>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_p && rtb_LogicalOperator1_ou) {
    /* Outputs for IfAction SubSystem: '<S556>/If Action Subsystem' incorporates:
     *  ActionPort: '<S566>/Action Port'
     */
    BaseEngineController_LS_112_IfActionSubsystem(rtb_UnitDelay1_p,
      &rtb_Merge_ox);

    /* End of Outputs for SubSystem: '<S556>/If Action Subsystem' */
  } else if (rtb_LogicalOperator1_ib) {
    /* Outputs for IfAction SubSystem: '<S556>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S567>/Action Port'
     */
    BaseEngineController_LS_112_IfActionSubsystem((ACPresDfltValue_DataStore()),
      &rtb_Merge_ox);

    /* End of Outputs for SubSystem: '<S556>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S556>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S568>/Action Port'
     */
    BaseEngineController_LS_112_IfActionSubsystem
      (BaseEngineController_LS_112_B.s556_Sum1, &rtb_Merge_ox);

    /* End of Outputs for SubSystem: '<S556>/If Action Subsystem2' */
  }

  /* End of If: '<S556>/If' */

  /* Sum: '<S570>/Sum1' incorporates:
   *  Constant: '<S570>/Constant'
   *  Product: '<S570>/Product'
   *  Product: '<S570>/Product1'
   *  Sum: '<S570>/Sum'
   *  UnitDelay: '<S570>/Unit Delay'
   */
  rtb_Sum1_kl = (1.0 - rtb_DataTypeConversion_je) *
    BaseEngineController_LS_112_DWork.s570_UnitDelay_DSTATE + rtb_Merge_ox *
    rtb_DataTypeConversion_je;

  /* If: '<S569>/If' incorporates:
   *  Inport: '<S571>/In1'
   *  Inport: '<S572>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S569>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S569>/override_enable'
   */
  if ((ACPres_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S569>/NewValue' incorporates:
     *  ActionPort: '<S571>/Action Port'
     */
    BaseEngineController_LS_112_B.s569_Merge = (ACPres_new_DataStore());

    /* End of Outputs for SubSystem: '<S569>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S569>/OldValue' incorporates:
     *  ActionPort: '<S572>/Action Port'
     */
    BaseEngineController_LS_112_B.s569_Merge = rtb_Sum1_kl;

    /* End of Outputs for SubSystem: '<S569>/OldValue' */
  }

  /* End of If: '<S569>/If' */

  /* S-Function Block: <S429>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (ACPres05In_DataStore()) = BaseEngineController_LS_112_B.s569_Merge;
    (ACPres05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_112_B.s569_Merge, (ACPres05IdxArr_DataStore()), 5,
       (ACPres05Idx_DataStore()));
    BaseEngineController_LS_112_B.s429_motohawk_prelookup =
      (ACPres05Idx_DataStore());
  }

  /* S-Function Block: <S481>/motohawk_encoder_instant_rpm */
  {
    rtb_RPMInst = CNK_Encoder_InstantRPM_Get();
  }

  /* DataTypeConversion: '<S481>/Data Type Conversion1' incorporates:
   *  S-Function (motohawk_sfun_encoder_instant_rpm): '<S481>/motohawk_encoder_instant_rpm'
   */
  BaseEngineController_LS_112_B.s481_RPMInst = (real_T)rtb_RPMInst;

  /* DataTypeConversion: '<S445>/Data Type Conversion' */
  if (BaseEngineController_LS_112_B.s481_RPMInst < 65536.0) {
    if (BaseEngineController_LS_112_B.s481_RPMInst >= 0.0) {
      rtb_DataTypeConversion_mx = (uint16_T)
        BaseEngineController_LS_112_B.s481_RPMInst;
    } else {
      rtb_DataTypeConversion_mx = 0U;
    }
  } else {
    rtb_DataTypeConversion_mx = MAX_uint16_T;
  }

  /* End of DataTypeConversion: '<S445>/Data Type Conversion' */
  /* Sum: '<S445>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S445>/motohawk_calibration3'
   *  S-Function (motohawk_sfun_calibration): '<S445>/motohawk_calibration4'
   */
  i = ((uint16_T)(StallRPMMinThreshold_DataStore())) - ((uint16_T)
    (StallRPMThresholdHyst_DataStore()));
  if (i <= 0) {
    i = 0;
  }

  rtb_Product_ku = (uint16_T)i;

  /* End of Sum: '<S445>/Sum' */

  /* RelationalOperator: '<S445>/Relational Operator1' */
  BaseEngineController_LS_112_B.s445_Stall = ((rtb_DataTypeConversion_mx <
    rtb_Product_ku));

  /* RelationalOperator: '<S445>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S445>/motohawk_calibration4'
   */
  BaseEngineController_LS_112_B.s445_Crank = ((rtb_DataTypeConversion_mx >
    ((uint16_T)(StallRPMMinThreshold_DataStore()))));

  /* RelationalOperator: '<S445>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S445>/motohawk_calibration1'
   */
  rtb_LogicalOperator6_p = (rtb_DataTypeConversion_mx > ((uint16_T)
    (CrankToRunRPMThresh_DataStore())));

  /* UnitDelay: '<S445>/Unit Delay' */
  BaseEngineController_LS_112_B.s445_UnitDelay =
    BaseEngineController_LS_112_DWork.s445_UnitDelay_DSTATE;

  /* S-Function (motohawk_sfun_trigger): '<S445>/motohawk_trigger' */
  /* Enable for Trigger_FGND_TDC_EVENT_8437p0004 */
  if (BaseEngineController_LS_112_DWork.s445_motohawk_trigger_DWORK1 == 0) {
    BaseEngineController_LS_112_DWork.s445_motohawk_trigger_DWORK1 = 1;
  }

  /* Logic: '<S445>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S445>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S445>/motohawk_calibration2'
   */
  BaseEngineController_LS_112_B.s445_Run = ((rtb_LogicalOperator6_p &&
    (BaseEngineController_LS_112_B.s467_Switch >= ((uint8_T)
    (RunLatchTDCs_DataStore())))));

  /* Stateflow: '<S445>/Engine State Machine' */

  /* Gateway: Foreground/Control/VirtualSensors/RawProcessed/EngineState/Engine State Machine */
  /* During: Foreground/Control/VirtualSensors/RawProcessed/EngineState/Engine State Machine */
  switch
    (BaseEngineController_LS_112_DWork.s466_is_c2_BaseEngineController_LS_112) {
   case BaseEngineController_LS_112_IN_Crank:
    /* During 'Crank': '<S466>:3' */
    if (BaseEngineController_LS_112_B.s445_Stall) {
      /* Transition: '<S466>:8' */
      BaseEngineController_LS_112_DWork.s466_is_c2_BaseEngineController_LS_112 =
        BaseEngineController_LS_112_IN_Stall_j;

      /* Entry 'Stall': '<S466>:1' */
      BaseEngineController_LS_112_B.s466_State = 1U;
    } else {
      if (BaseEngineController_LS_112_B.s445_Run) {
        /* Transition: '<S466>:6' */
        BaseEngineController_LS_112_DWork.s466_is_c2_BaseEngineController_LS_112
          = BaseEngineController_LS_112_IN_Run;

        /* Entry 'Run': '<S466>:2' */
        BaseEngineController_LS_112_B.s466_State = 3U;
      }
    }
    break;

   case BaseEngineController_LS_112_IN_Run:
    /* During 'Run': '<S466>:2' */
    if (BaseEngineController_LS_112_B.s445_Stall) {
      /* Transition: '<S466>:7' */
      BaseEngineController_LS_112_DWork.s466_is_c2_BaseEngineController_LS_112 =
        BaseEngineController_LS_112_IN_Stall_j;

      /* Entry 'Stall': '<S466>:1' */
      BaseEngineController_LS_112_B.s466_State = 1U;
    }
    break;

   case BaseEngineController_LS_112_IN_Stall_j:
    /* During 'Stall': '<S466>:1' */
    if (BaseEngineController_LS_112_B.s445_Crank) {
      /* Transition: '<S466>:5' */
      BaseEngineController_LS_112_DWork.s466_is_c2_BaseEngineController_LS_112 =
        BaseEngineController_LS_112_IN_Crank;

      /* Entry 'Crank': '<S466>:3' */
      BaseEngineController_LS_112_B.s466_State = 2U;
    }
    break;

   default:
    /* Transition: '<S466>:4' */
    BaseEngineController_LS_112_DWork.s466_is_c2_BaseEngineController_LS_112 =
      BaseEngineController_LS_112_IN_Stall_j;

    /* Entry 'Stall': '<S466>:1' */
    BaseEngineController_LS_112_B.s466_State = 1U;
    break;
  }

  /* End of Stateflow: '<S445>/Engine State Machine' */

  /* RelationalOperator: '<S96>/RelOp' incorporates:
   *  Constant: '<S96>/Constant'
   */
  rtb_LogicalOperator1_ou = (BaseEngineController_LS_112_B.s466_State == 1);

  /* S-Function Block: <S480>/motohawk_ain5 Resource: AN2 */
  rtb_motohawk_ain5_c = AN2_AnalogInput_Get();

  /* DataTypeConversion: '<S505>/Data Type Conversion' incorporates:
   *  S-Function (motohawk_sfun_ain): '<S480>/motohawk_ain5'
   */
  BaseEngineController_LS_112_B.s505_DataTypeConversion = (real_T)
    rtb_motohawk_ain5_c;

  /* RelationalOperator: '<S505>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S505>/SwitchPoint'
   */
  rtb_LogicalOperator6_p =
    (BaseEngineController_LS_112_B.s505_DataTypeConversion >
     (ACSwSwitchPt_DataStore()));

  /* Logic: '<S505>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S505>/0 = No Inversion 1 = Inversion'
   */
  rtb_LogicalOperator6_p ^= (ACSwPolarity_DataStore());

  /* If: '<S512>/If' incorporates:
   *  Inport: '<S513>/In1'
   *  Inport: '<S514>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S512>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S512>/override_enable'
   */
  if ((ACSw_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S512>/NewValue' incorporates:
     *  ActionPort: '<S513>/Action Port'
     */
    BaseEngineController_LS_112_B.s512_Merge = (ACSw_new_DataStore());

    /* End of Outputs for SubSystem: '<S512>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S512>/OldValue' incorporates:
     *  ActionPort: '<S514>/Action Port'
     */
    BaseEngineController_LS_112_B.s512_Merge = rtb_LogicalOperator6_p;

    /* End of Outputs for SubSystem: '<S512>/OldValue' */
  }

  /* End of If: '<S512>/If' */

  /* Outputs for Enabled SubSystem: '<S15>/Stall' incorporates:
   *  EnablePort: '<S95>/Enable'
   */
  if (rtb_LogicalOperator1_ou) {
    if (!BaseEngineController_LS_112_DWork.s15_Stall_MODE) {
      /* InitializeConditions for UnitDelay: '<S287>/Unit Delay' */
      BaseEngineController_LS_112_DWork.s287_UnitDelay_DSTATE = FALSE;

      /* InitializeConditions for UnitDelay: '<S288>/Unit Delay' */
      BaseEngineController_LS_112_DWork.s288_UnitDelay_DSTATE = FALSE;

      /* InitializeConditions for UnitDelay: '<S289>/Unit Delay' */
      BaseEngineController_LS_112_DWork.s289_UnitDelay_DSTATE = FALSE;

      /* InitializeConditions for UnitDelay: '<S290>/Unit Delay' */
      BaseEngineController_LS_112_DWork.s290_UnitDelay_DSTATE = 0.0;

      /* S-Function Block: <S292>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BaseEngineController_LS_112_DWork.s292_motohawk_delta_time_DWORK1 = now
          - Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
      }

      /* InitializeConditions for Stateflow: '<S283>/Ice Break' */
      BaseEngineController_LS_112_DWork.s291_is_active_c3_BaseEngineController_LS_112
        = 0U;
      BaseEngineController_LS_112_DWork.s291_is_c3_BaseEngineController_LS_112 =
        0U;
      BaseEngineController_LS_112_B.s291_etc = 0.0;
      BaseEngineController_LS_112_DWork.s291_presentTicks = 0U;
      BaseEngineController_LS_112_DWork.s291_elapsedTicks = 0U;
      BaseEngineController_LS_112_DWork.s291_previousTicks = 0U;

      /* Enable for Stateflow: '<S283>/Ice Break' */
      BaseEngineController_LS_112_DWork.s291_presentTicks =
        BaseEngineController_LS_112_M->Timing.clockTick0;
      BaseEngineController_LS_112_DWork.s291_previousTicks =
        BaseEngineController_LS_112_DWork.s291_presentTicks;
      BaseEngineController_LS_112_DWork.s15_Stall_MODE = TRUE;
    }

    /* DataTypeConversion: '<S95>/Data Type Conversion' incorporates:
     *  Constant: '<S95>/OFF'
     */
    BaseEngineController_LS_112_B.s92_WASTEGATE = 0.0;

    /* DataTypeConversion: '<S95>/Data Type Conversion1' incorporates:
     *  Constant: '<S95>/OFF1'
     */
    BaseEngineController_LS_112_B.s92_IACS = 0.0;

    /* DataTypeConversion: '<S95>/Data Type Conversion2' incorporates:
     *  Constant: '<S95>/OFF2'
     */
    BaseEngineController_LS_112_B.s92_IACP = 0.0;

    /* RelationalOperator: '<S284>/LT' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S281>/motohawk_calibration1'
     */
    rtb_RelationalOperator2_az = (BaseEngineController_LS_112_B.s665_Merge >=
      (ECTFanOn_DataStore()));

    /* RelationalOperator: '<S284>/LT1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S281>/motohawk_calibration'
     */
    rtb_Switch_b3 = (BaseEngineController_LS_112_B.s665_Merge <=
                     (ECTFanOff_DataStore()));

    /* CombinatorialLogic: '<S287>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_RelationalOperator2_az != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_Switch_b3 != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_e[0] =
        BaseEngineController_LS_112_ConstP.pooled896[rowidx];
      rtb_CombinatorialLogic_e[1] =
        BaseEngineController_LS_112_ConstP.pooled896[rowidx + 4];
    }

    /* Switch: '<S287>/Switch1' incorporates:
     *  UnitDelay: '<S287>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_e[1]) {
      rtb_LogicalOperator6_p = rtb_CombinatorialLogic_e[0];
    } else {
      rtb_LogicalOperator6_p =
        BaseEngineController_LS_112_DWork.s287_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S287>/Switch1' */
    /* RelationalOperator: '<S285>/LT' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S281>/motohawk_calibration3'
     */
    rtb_Switch_b3 = (BaseEngineController_LS_112_B.s683_Merge >=
                     (IATFanOn_DataStore()));

    /* RelationalOperator: '<S285>/LT1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S281>/motohawk_calibration2'
     */
    rtb_RelationalOperator2_az = (BaseEngineController_LS_112_B.s683_Merge <=
      (IATFanOff_DataStore()));

    /* CombinatorialLogic: '<S288>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_Switch_b3 != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_RelationalOperator2_az != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_e[0] =
        BaseEngineController_LS_112_ConstP.pooled896[rowidx];
      rtb_CombinatorialLogic_e[1] =
        BaseEngineController_LS_112_ConstP.pooled896[rowidx + 4];
    }

    /* Switch: '<S288>/Switch1' incorporates:
     *  UnitDelay: '<S288>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_e[1]) {
      rtb_LogicalOperator1_ou = rtb_CombinatorialLogic_e[0];
    } else {
      rtb_LogicalOperator1_ou =
        BaseEngineController_LS_112_DWork.s288_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S288>/Switch1' */
    /* RelationalOperator: '<S286>/LT' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S281>/motohawk_calibration5'
     */
    rtb_Switch_b3 = (BaseEngineController_LS_112_B.s569_Merge >=
                     (ACPresFanOn_DataStore()));

    /* RelationalOperator: '<S286>/LT1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S281>/motohawk_calibration4'
     */
    rtb_RelationalOperator2_az = (BaseEngineController_LS_112_B.s569_Merge <=
      (ACPresFanOff_DataStore()));

    /* CombinatorialLogic: '<S289>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_Switch_b3 != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_RelationalOperator2_az != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_e[0] =
        BaseEngineController_LS_112_ConstP.pooled896[rowidx];
      rtb_CombinatorialLogic_e[1] =
        BaseEngineController_LS_112_ConstP.pooled896[rowidx + 4];
    }

    /* Switch: '<S289>/Switch1' incorporates:
     *  UnitDelay: '<S289>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_e[1]) {
      rtb_Switch1_m = rtb_CombinatorialLogic_e[0];
    } else {
      rtb_Switch1_m = BaseEngineController_LS_112_DWork.s289_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S289>/Switch1' */
    /* Switch: '<S281>/Switch' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S281>/motohawk_calibration15'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S281>/motohawk_interpolation_1d'
     */
    if ((FAN_Mode_DataStore())) {
      rtb_Switch_g = (real_T)rtb_LogicalOperator6_p;
    } else {
      /* S-Function Block: <S281>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d_jw = TableInterpolation1D_real_T
          (BaseEngineController_LS_112_B.s431_motohawk_prelookup, (real_T *)
           ((ECTFanSpeed_StallTbl_DataStore())), 5);
        (ECTFanSpeed_Stall_DataStore()) = rtb_motohawk_interpolation_1d_jw;
      }

      rtb_Switch_g = rtb_motohawk_interpolation_1d_jw;
    }

    /* End of Switch: '<S281>/Switch' */

    /* Switch: '<S281>/Switch1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S281>/motohawk_calibration15'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S281>/motohawk_interpolation_1d1'
     */
    if ((FAN_Mode_DataStore())) {
      rtb_Switch1_gg = (real_T)rtb_LogicalOperator1_ou;
    } else {
      /* S-Function Block: <S281>/motohawk_interpolation_1d1 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d1_b = TableInterpolation1D_real_T
          (BaseEngineController_LS_112_B.s432_motohawk_prelookup, (real_T *)
           ((IATFanSpeed_StallTbl_DataStore())), 5);
        (IATFanSpeed_Stall_DataStore()) = rtb_motohawk_interpolation_1d1_b;
      }

      rtb_Switch1_gg = rtb_motohawk_interpolation_1d1_b;
    }

    /* End of Switch: '<S281>/Switch1' */

    /* Switch: '<S281>/Switch2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S281>/motohawk_calibration15'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S281>/motohawk_interpolation_1d2'
     */
    if ((FAN_Mode_DataStore())) {
      rtb_Switch2_c = (real_T)rtb_Switch1_m;
    } else {
      /* S-Function Block: <S281>/motohawk_interpolation_1d2 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d2_nd = TableInterpolation1D_real_T
          (BaseEngineController_LS_112_B.s429_motohawk_prelookup, (real_T *)
           ((ACPresFanSpeed_StallTbl_DataStore())), 5);
        (ACPresFanSpeed_Stall_DataStore()) = rtb_motohawk_interpolation_1d2_nd;
      }

      rtb_Switch2_c = rtb_motohawk_interpolation_1d2_nd;
    }

    /* End of Switch: '<S281>/Switch2' */

    /* Switch: '<S281>/Switch3' incorporates:
     *  Product: '<S281>/Product8'
     *  S-Function (motohawk_sfun_calibration): '<S281>/motohawk_calibration14'
     *  S-Function (motohawk_sfun_calibration): '<S281>/motohawk_calibration15'
     */
    if ((FAN_Mode_DataStore())) {
      rtb_Switch3_e = (real_T)BaseEngineController_LS_112_B.s512_Merge;
    } else {
      rtb_Switch3_e = (real_T)BaseEngineController_LS_112_B.s512_Merge *
        (ACSwFanSpeed_Stall_DataStore());
    }

    /* End of Switch: '<S281>/Switch3' */

    /* S-Function (motohawk_sfun_fault_action): '<S281>/motohawk_fault_action'
     *
     * Regarding '<S281>/motohawk_fault_action':
       Get Fault Action Status: DisableFanStall
     */
    {
      extern boolean_T GetFaultActionStatus(uint32_T action);
      rtb_Switch_b3 = GetFaultActionStatus(5);
    }

    /* Switch: '<S281>/Switch4' incorporates:
     *  Constant: '<S281>/Constant'
     */
    if (rtb_Switch_b3) {
      rtb_Switch4_c = 0.0;
    } else {
      /* Product: '<S281>/Product3' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S281>/motohawk_calibration9'
       */
      rtb_DataTypeConversion1_j = rtb_Switch3_e * (real_T)(Fan1ACSw_DataStore());

      /* Product: '<S281>/Product2' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S281>/motohawk_calibration8'
       */
      rtb_DataTypeConversion_ep = rtb_Switch2_c * (real_T)(Fan1ACPres_DataStore());

      /* Product: '<S281>/Product1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S281>/motohawk_calibration7'
       */
      rtb_Product1_mc = rtb_Switch1_gg * (real_T)(Fan1IAT_DataStore());

      /* MinMax: '<S281>/MinMax' incorporates:
       *  Product: '<S281>/Product'
       *  S-Function (motohawk_sfun_calibration): '<S281>/motohawk_calibration6'
       */
      u = rtb_Switch_g * (real_T)(Fan1ECT_DataStore());
      u = (u >= rtb_Product1_mc) || rtIsNaN(rtb_Product1_mc) ? u :
        rtb_Product1_mc;
      u = (u >= rtb_DataTypeConversion_ep) || rtIsNaN(rtb_DataTypeConversion_ep)
        ? u : rtb_DataTypeConversion_ep;
      rtb_Switch4_c = (u >= rtb_DataTypeConversion1_j) || rtIsNaN
        (rtb_DataTypeConversion1_j) ? u : rtb_DataTypeConversion1_j;
    }

    /* End of Switch: '<S281>/Switch4' */

    /* Switch: '<S281>/Switch5' incorporates:
     *  Constant: '<S281>/Constant1'
     */
    if (rtb_Switch_b3) {
      rtb_DataTypeConversion1_j = 0.0;
    } else {
      /* Product: '<S281>/Product7' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S281>/motohawk_calibration13'
       */
      rtb_Product1_mc = rtb_Switch3_e * (real_T)(Fan2ACSw_DataStore());

      /* Product: '<S281>/Product6' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S281>/motohawk_calibration12'
       */
      rtb_DataTypeConversion_ep = rtb_Switch2_c * (real_T)(Fan2ACPres_DataStore());

      /* Product: '<S281>/Product5' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S281>/motohawk_calibration11'
       */
      rtb_DataTypeConversion1_j = rtb_Switch1_gg * (real_T)(Fan2IAT_DataStore());

      /* MinMax: '<S281>/MinMax1' incorporates:
       *  Product: '<S281>/Product4'
       *  S-Function (motohawk_sfun_calibration): '<S281>/motohawk_calibration10'
       */
      u = rtb_Switch_g * (real_T)(Fan2ECT_DataStore());
      u = (u >= rtb_DataTypeConversion1_j) || rtIsNaN(rtb_DataTypeConversion1_j)
        ? u : rtb_DataTypeConversion1_j;
      u = (u >= rtb_DataTypeConversion_ep) || rtIsNaN(rtb_DataTypeConversion_ep)
        ? u : rtb_DataTypeConversion_ep;
      rtb_DataTypeConversion1_j = (u >= rtb_Product1_mc) || rtIsNaN
        (rtb_Product1_mc) ? u : rtb_Product1_mc;
    }

    /* End of Switch: '<S281>/Switch5' */

    /* UnitDelay: '<S290>/Unit Delay' */
    BaseEngineController_LS_112_B.s290_UnitDelay =
      BaseEngineController_LS_112_DWork.s290_UnitDelay_DSTATE;

    /* Switch: '<S282>/Switch' incorporates:
     *  Constant: '<S282>/Constant'
     *  RelationalOperator: '<S282>/Relational Operator'
     *  S-Function (motohawk_sfun_calibration): '<S282>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S282>/motohawk_calibration1'
     */
    if ((Constant_Fuel_Pump_DataStore())) {
      rtb_Switch_b3 = TRUE;
    } else {
      rtb_Switch_b3 = (BaseEngineController_LS_112_B.s290_UnitDelay <
                       (FuelPumpStartTime_DataStore()));
    }

    /* End of Switch: '<S282>/Switch' */
    /* S-Function Block: <S290>/motohawk_delta_time */
    rtb_motohawk_delta_time_gw = 0.005;

    /* Sum: '<S290>/Sum' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S290>/motohawk_delta_time'
     */
    rtb_DataTypeConversion_ep = rtb_motohawk_delta_time_gw +
      BaseEngineController_LS_112_B.s290_UnitDelay;

    /* S-Function Block: <S292>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_112_DWork.s292_motohawk_delta_time_DWORK1,
         NULL);
      rtb_motohawk_delta_time_ni = ((real_T) delta) * 0.000001;
    }

    /* RelationalOperator: '<S283>/Relational Operator2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S283>/motohawk_calibration3'
     */
    rtb_RelationalOperator2_az = (BaseEngineController_LS_112_B.s443_Switch1 >=
                                  (ETC_StallAppOvrThesh_DataStore()));

    /* Switch: '<S292>/Switch' incorporates:
     *  Constant: '<S292>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S292>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S292>/motohawk_delta_time'
     *  Sum: '<S292>/Sum'
     */
    if (rtb_RelationalOperator2_az) {
      rtb_Product1_mc = rtb_motohawk_delta_time_ni + AppStallOvrTmr_DataStore();
    } else {
      rtb_Product1_mc = 0.0;
    }

    /* End of Switch: '<S292>/Switch' */
    /* RelationalOperator: '<S283>/Relational Operator3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S283>/motohawk_calibration4'
     */
    rtb_RelationalOperator3_i2 = (rtb_Product1_mc >=
      (ETC_StallAppOvrTm_DataStore()));

    /* Product: '<S283>/Product1' */
    BaseEngineController_LS_112_B.s283_Product1 = (rtb_RelationalOperator3_i2 ?
      (real_T)rtb_RelationalOperator2_az : 0.0) *
      BaseEngineController_LS_112_B.s443_Switch1;

    /* Product: '<S283>/Product2' */
    rtb_Product2_e = (uint16_T)(rtb_RelationalOperator3_i2 ?
      rtb_RelationalOperator2_az : 0);

    /* Stateflow: '<S283>/Ice Break' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S283>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S283>/motohawk_calibration1'
     *  S-Function (motohawk_sfun_calibration): '<S283>/motohawk_calibration2'
     */
    BaseEngineController_LS_112_DWork.s291_presentTicks =
      BaseEngineController_LS_112_M->Timing.clockTick0;
    BaseEngineController_LS_112_DWork.s291_elapsedTicks =
      BaseEngineController_LS_112_DWork.s291_presentTicks -
      BaseEngineController_LS_112_DWork.s291_previousTicks;
    BaseEngineController_LS_112_DWork.s291_previousTicks =
      BaseEngineController_LS_112_DWork.s291_presentTicks;
    BaseEngineController_LS_112_DWork.s291_temporalCounter_i1 =
      BaseEngineController_LS_112_DWork.s291_temporalCounter_i1 +
      BaseEngineController_LS_112_DWork.s291_elapsedTicks;

    /* Gateway: Foreground/Control/Controller/Stall/Stall Throttle/Ice Break */
    /* During: Foreground/Control/Controller/Stall/Stall Throttle/Ice Break */
    if (BaseEngineController_LS_112_DWork.s291_is_active_c3_BaseEngineController_LS_112
        == 0) {
      /* Entry: Foreground/Control/Controller/Stall/Stall Throttle/Ice Break */
      BaseEngineController_LS_112_DWork.s291_is_active_c3_BaseEngineController_LS_112
        = 1U;

      /* Transition: '<S291>:2' */
      BaseEngineController_LS_112_DWork.s291_is_c3_BaseEngineController_LS_112 =
        BaseEngineController_LS_112_IN_Init;
    } else {
      switch
        (BaseEngineController_LS_112_DWork.s291_is_c3_BaseEngineController_LS_112)
      {
       case BaseEngineController_LS_112_IN_Init:
        /* During 'Init': '<S291>:1' */
        if (BaseEngineController_LS_112_B.s469_Sum <
            (ETC_IceBreakEnblTm_DataStore())) {
          /* Transition: '<S291>:5' */
          BaseEngineController_LS_112_DWork.s291_is_c3_BaseEngineController_LS_112
            = BaseEngineController_LS_112_IN_Open;
          BaseEngineController_LS_112_DWork.s291_temporalCounter_i1 = 0U;
        } else {
          BaseEngineController_LS_112_B.s291_etc = 0.0;
        }
        break;

       case BaseEngineController_LS_112_IN_Open:
        /* During 'Open': '<S291>:4' */
        if (BaseEngineController_LS_112_DWork.s291_temporalCounter_i1 >=
            (uint32_T)ceil((ETC_IceBreakHoldTm_DataStore()) / 0.2 - 2.0E-9)) {
          /* Transition: '<S291>:14' */
          BaseEngineController_LS_112_DWork.s291_is_c3_BaseEngineController_LS_112
            = BaseEngineController_LS_112_IN_Wait;
        } else {
          BaseEngineController_LS_112_B.s291_etc = (ETC_IceBreakPos_DataStore());
        }
        break;

       case BaseEngineController_LS_112_IN_Wait:
        /* During 'Wait': '<S291>:15' */
        if (BaseEngineController_LS_112_B.s469_Sum >
            (ETC_IceBreakEnblTm_DataStore())) {
          /* Transition: '<S291>:16' */
          BaseEngineController_LS_112_DWork.s291_is_c3_BaseEngineController_LS_112
            = BaseEngineController_LS_112_IN_Init;
        } else {
          BaseEngineController_LS_112_B.s291_etc = 0.0;
        }
        break;

       default:
        /* Transition: '<S291>:2' */
        BaseEngineController_LS_112_DWork.s291_is_c3_BaseEngineController_LS_112
          = BaseEngineController_LS_112_IN_Init;
        break;
      }
    }

    /* End of Stateflow: '<S283>/Ice Break' */

    /* Switch: '<S283>/Switch' */
    if (rtb_Product2_e != 0) {
      BaseEngineController_LS_112_B.s283_Switch =
        BaseEngineController_LS_112_B.s283_Product1;
    } else {
      BaseEngineController_LS_112_B.s283_Switch =
        BaseEngineController_LS_112_B.s291_etc;
    }

    /* End of Switch: '<S283>/Switch' */

    /* Saturate: '<S292>/Saturation' */
    rtb_Saturation_ag = rtb_Product1_mc >= 16000.0 ? 16000.0 : rtb_Product1_mc <=
      0.0 ? 0.0 : rtb_Product1_mc;

    /* S-Function (motohawk_sfun_data_write): '<S292>/motohawk_data_write' */
    /* Write to Data Storage as scalar: AppStallOvrTmr */
    {
      AppStallOvrTmr_DataStore() = rtb_Saturation_ag;
    }

    /* ZeroOrderHold: '<S95>/Zero-Order Hold12' */
    BaseEngineController_LS_112_B.s92_FAN1 = rtb_Switch4_c;

    /* ZeroOrderHold: '<S95>/Zero-Order Hold13' */
    BaseEngineController_LS_112_B.s92_FAN2 = rtb_DataTypeConversion1_j;

    /* ZeroOrderHold: '<S95>/Zero-Order Hold14' incorporates:
     *  Constant: '<S95>/OFF3'
     */
    BaseEngineController_LS_112_B.s92_AC = FALSE;

    /* ZeroOrderHold: '<S95>/Zero-Order Hold3' */
    BaseEngineController_LS_112_B.s92_SparkAdv =
      BaseEngineController_LS_112_ConstB.s95_motohawk_replicate2;

    /* ZeroOrderHold: '<S95>/Zero-Order Hold4' incorporates:
     *  Constant: '<S95>/No Spark'
     */
    BaseEngineController_LS_112_B.s92_SparkEnergy = 0.0;

    /* ZeroOrderHold: '<S95>/Zero-Order Hold5' incorporates:
     *  Constant: '<S95>/No Start EOI'
     */
    BaseEngineController_LS_112_B.s92_MakeUpEOI = 0.0;

    /* ZeroOrderHold: '<S95>/Zero-Order Hold6' */
    memcpy((void *)(&BaseEngineController_LS_112_B.s92_FPC[0]), (void *)
           (&BaseEngineController_LS_112_ConstB.s95_motohawk_replicate[0]),
           sizeof(real_T) << 3U);

    /* ZeroOrderHold: '<S95>/Zero-Order Hold7' */
    BaseEngineController_LS_112_B.s92_FUELP = rtb_Switch_b3;

    /* ZeroOrderHold: '<S95>/Zero-Order Hold8' incorporates:
     *  Constant: '<S95>/No Start Fuel Timing'
     */
    BaseEngineController_LS_112_B.s92_SOI = 0.0;

    /* ZeroOrderHold: '<S95>/Zero-Order Hold9' */
    BaseEngineController_LS_112_B.s92_Throttle =
      BaseEngineController_LS_112_B.s283_Switch;

    /* Update for UnitDelay: '<S287>/Unit Delay' */
    BaseEngineController_LS_112_DWork.s287_UnitDelay_DSTATE =
      rtb_LogicalOperator6_p;

    /* Update for UnitDelay: '<S288>/Unit Delay' */
    BaseEngineController_LS_112_DWork.s288_UnitDelay_DSTATE =
      rtb_LogicalOperator1_ou;

    /* Update for UnitDelay: '<S289>/Unit Delay' */
    BaseEngineController_LS_112_DWork.s289_UnitDelay_DSTATE = rtb_Switch1_m;

    /* Update for UnitDelay: '<S290>/Unit Delay' */
    BaseEngineController_LS_112_DWork.s290_UnitDelay_DSTATE =
      rtb_DataTypeConversion_ep;
  } else {
    if (BaseEngineController_LS_112_DWork.s15_Stall_MODE) {
      /* Disable for Stateflow: '<S283>/Ice Break' */
      BaseEngineController_LS_112_DWork.s291_presentTicks =
        BaseEngineController_LS_112_M->Timing.clockTick0;
      BaseEngineController_LS_112_DWork.s291_elapsedTicks =
        BaseEngineController_LS_112_DWork.s291_presentTicks -
        BaseEngineController_LS_112_DWork.s291_previousTicks;
      BaseEngineController_LS_112_DWork.s291_previousTicks =
        BaseEngineController_LS_112_DWork.s291_presentTicks;
      BaseEngineController_LS_112_DWork.s291_temporalCounter_i1 =
        BaseEngineController_LS_112_DWork.s291_temporalCounter_i1 +
        BaseEngineController_LS_112_DWork.s291_elapsedTicks;
      BaseEngineController_LS_112_DWork.s15_Stall_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S15>/Stall' */
  /* S-Function Block: <S481>/motohawk_encoder_average_rpm */
  {
    rtb_RPM = CNK_Encoder_AverageRPM_Get();
  }

  /* DataTypeConversion: '<S555>/Data Type Conversion' incorporates:
   *  S-Function (motohawk_sfun_encoder_average_rpm): '<S481>/motohawk_encoder_average_rpm'
   */
  rtb_DataTypeConversion1_j = (real_T)rtb_RPM;

  /* S-Function Block: <S548>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_112_DWork.s548_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_je = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S548>/Product' incorporates:
   *  MinMax: '<S548>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S548>/motohawk_calibration'
   */
  rtb_DataTypeConversion_je /= (rtb_DataTypeConversion_je >=
    (RPMFiltConst_DataStore())) || rtIsNaN((RPMFiltConst_DataStore())) ?
    rtb_DataTypeConversion_je : (RPMFiltConst_DataStore());

  /* Sum: '<S555>/Sum1' incorporates:
   *  Constant: '<S555>/Constant'
   *  Product: '<S555>/Product'
   *  Product: '<S555>/Product1'
   *  Sum: '<S555>/Sum'
   *  UnitDelay: '<S555>/Unit Delay'
   */
  BaseEngineController_LS_112_B.s555_Sum1 = (1.0 - rtb_DataTypeConversion_je) *
    BaseEngineController_LS_112_DWork.s555_UnitDelay_DSTATE +
    rtb_DataTypeConversion1_j * rtb_DataTypeConversion_je;

  /* Logic: '<S757>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S757>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S757>/motohawk_fault_status4'
   */
  rtb_LogicalOperator1_ib = (IsFaultActive(148) || IsFaultActive(149));

  /* Logic: '<S757>/Logical Operator6' */
  rtb_LogicalOperator6_p = !rtb_LogicalOperator1_ib;

  /* Logic: '<S757>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S757>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S757>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_ou = (IsFaultSuspected(148) || IsFaultSuspected(149));

  /* S-Function Block: <S484>/motohawk_ain6 Resource: AN13 */
  rtb_motohawk_ain6 = AN13_AnalogInput_Get();

  /* DataTypeConversion: '<S694>/Data Type Conversion1' incorporates:
   *  S-Function (motohawk_sfun_ain): '<S484>/motohawk_ain6'
   */
  rtb_DataTypeConversion1_j = (real_T)rtb_motohawk_ain6;

  /* Switch: '<S694>/Switch' incorporates:
   *  Fcn: '<S694>/Fcn'
   *  S-Function (motohawk_sfun_calibration): '<S694>/motohawk_calibration2'
   */
  if ((TPS1Rev_Polarity_DataStore())) {
    BaseEngineController_LS_112_B.s694_Switch = 1023.0 -
      rtb_DataTypeConversion1_j;
  } else {
    BaseEngineController_LS_112_B.s694_Switch = rtb_DataTypeConversion1_j;
  }

  /* End of Switch: '<S694>/Switch' */

  /* S-Function (motohawk_sfun_data_read): '<S754>/motohawk_data_read' */
  rtb_Product_ku = TPS1Raw_Adpt_Low_DataStore();

  /* MinMax: '<S754>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S694>/motohawk_calibration9'
   */
  u = (real_T)rtb_Product_ku;
  BaseEngineController_LS_112_B.s754_MinMax = (u <= (TPS1Adapt_Low_Max_DataStore
    ())) || rtIsNaN((TPS1Adapt_Low_Max_DataStore())) ? u :
    (TPS1Adapt_Low_Max_DataStore());

  /* Sum: '<S694>/Sum2' */
  rtb_DataTypeConversion1_j = BaseEngineController_LS_112_B.s694_Switch -
    BaseEngineController_LS_112_B.s754_MinMax;

  /* S-Function (motohawk_sfun_data_read): '<S754>/motohawk_data_read1' */
  rtb_Product_ku = TPS1Raw_Adpt_Hi_DataStore();

  /* MinMax: '<S754>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S694>/motohawk_calibration11'
   */
  u = (real_T)rtb_Product_ku;
  BaseEngineController_LS_112_B.s754_MinMax1 = (u >= (TPS1Adapt_Hi_Min_DataStore
    ())) || rtIsNaN((TPS1Adapt_Hi_Min_DataStore())) ? u :
    (TPS1Adapt_Hi_Min_DataStore());

  /* Gain: '<S694>/Gain2' incorporates:
   *  Product: '<S694>/Product1'
   *  Sum: '<S694>/Sum1'
   */
  rtb_DataTypeConversion_je = rtb_DataTypeConversion1_j /
    (BaseEngineController_LS_112_B.s754_MinMax1 -
     BaseEngineController_LS_112_B.s754_MinMax) * 100.0;

  /* MinMax: '<S758>/MinMax' incorporates:
   *  Constant: '<S694>/Constant1'
   */
  rtb_DataTypeConversion_je = rtb_DataTypeConversion_je >= 0.0 ?
    rtb_DataTypeConversion_je : 0.0;

  /* MinMax: '<S758>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S694>/motohawk_calibration1'
   */
  BaseEngineController_LS_112_B.s758_MinMax1 = (rtb_DataTypeConversion_je <=
    (TPS1MaxLimit_DataStore())) || rtIsNaN((TPS1MaxLimit_DataStore())) ?
    rtb_DataTypeConversion_je : (TPS1MaxLimit_DataStore());

  /* S-Function Block: <S756>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_112_DWork.s756_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_je = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S756>/Product' incorporates:
   *  MinMax: '<S756>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S756>/motohawk_calibration'
   */
  rtb_DataTypeConversion_je /= (rtb_DataTypeConversion_je >=
    (TPS1FilterConst_DataStore())) || rtIsNaN((TPS1FilterConst_DataStore())) ?
    rtb_DataTypeConversion_je : (TPS1FilterConst_DataStore());

  /* Sum: '<S764>/Sum1' incorporates:
   *  Constant: '<S764>/Constant'
   *  Product: '<S764>/Product'
   *  Product: '<S764>/Product1'
   *  Sum: '<S764>/Sum'
   *  UnitDelay: '<S764>/Unit Delay'
   */
  rtb_Sum1_mk = (1.0 - rtb_DataTypeConversion_je) *
    BaseEngineController_LS_112_DWork.s764_UnitDelay_DSTATE +
    BaseEngineController_LS_112_B.s758_MinMax1 * rtb_DataTypeConversion_je;

  /* UnitDelay: '<S757>/Unit Delay1' */
  rtb_UnitDelay1_ac = BaseEngineController_LS_112_DWork.s757_UnitDelay1_DSTATE;

  /* If: '<S757>/If' incorporates:
   *  Logic: '<S757>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_p && rtb_LogicalOperator1_ou) {
    /* Outputs for IfAction SubSystem: '<S757>/If Action Subsystem' incorporates:
     *  ActionPort: '<S765>/Action Port'
     */
    BaseEngineController_LS_112_IfActionSubsystem(rtb_UnitDelay1_ac,
      &rtb_Merge_m);

    /* End of Outputs for SubSystem: '<S757>/If Action Subsystem' */
  } else if (rtb_LogicalOperator1_ib) {
    /* Outputs for IfAction SubSystem: '<S757>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S766>/Action Port'
     */
    BaseEngineController_LS_112_IfActionSubsystem((TPS1DfltValue_DataStore()),
      &rtb_Merge_m);

    /* End of Outputs for SubSystem: '<S757>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S757>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S767>/Action Port'
     */
    BaseEngineController_LS_112_IfActionSubsystem(rtb_Sum1_mk, &rtb_Merge_m);

    /* End of Outputs for SubSystem: '<S757>/If Action Subsystem2' */
  }

  /* End of If: '<S757>/If' */

  /* If: '<S768>/If' incorporates:
   *  Inport: '<S769>/In1'
   *  Inport: '<S770>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S768>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S768>/override_enable'
   */
  if ((TPS1_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S768>/NewValue' incorporates:
     *  ActionPort: '<S769>/Action Port'
     */
    BaseEngineController_LS_112_B.s768_Merge = (TPS1_new_DataStore());

    /* End of Outputs for SubSystem: '<S768>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S768>/OldValue' incorporates:
     *  ActionPort: '<S770>/Action Port'
     */
    BaseEngineController_LS_112_B.s768_Merge = rtb_Merge_m;

    /* End of Outputs for SubSystem: '<S768>/OldValue' */
  }

  /* End of If: '<S768>/If' */

  /* Logic: '<S774>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S774>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S774>/motohawk_fault_status4'
   */
  rtb_LogicalOperator1_ib = (IsFaultActive(154) || IsFaultActive(155));

  /* Logic: '<S774>/Logical Operator6' */
  rtb_LogicalOperator6_p = !rtb_LogicalOperator1_ib;

  /* Logic: '<S774>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S774>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S774>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_ou = (IsFaultSuspected(154) || IsFaultSuspected(155));

  /* S-Function Block: <S484>/motohawk_ain9 Resource: AN14 */
  rtb_motohawk_ain9 = AN14_AnalogInput_Get();

  /* DataTypeConversion: '<S695>/Data Type Conversion1' incorporates:
   *  S-Function (motohawk_sfun_ain): '<S484>/motohawk_ain9'
   */
  rtb_DataTypeConversion1_j = (real_T)rtb_motohawk_ain9;

  /* Switch: '<S695>/Switch' incorporates:
   *  Fcn: '<S695>/Fcn'
   *  S-Function (motohawk_sfun_calibration): '<S695>/motohawk_calibration2'
   */
  if ((TPS2Rev_Polarity_DataStore())) {
    BaseEngineController_LS_112_B.s695_Switch = 1023.0 -
      rtb_DataTypeConversion1_j;
  } else {
    BaseEngineController_LS_112_B.s695_Switch = rtb_DataTypeConversion1_j;
  }

  /* End of Switch: '<S695>/Switch' */

  /* S-Function (motohawk_sfun_data_read): '<S771>/motohawk_data_read' */
  rtb_Product_ku = TPS2Raw_Adpt_Low_DataStore();

  /* MinMax: '<S771>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S695>/motohawk_calibration9'
   */
  u = (real_T)rtb_Product_ku;
  BaseEngineController_LS_112_B.s771_MinMax = (u <= (TPS2Adapt_Low_Max_DataStore
    ())) || rtIsNaN((TPS2Adapt_Low_Max_DataStore())) ? u :
    (TPS2Adapt_Low_Max_DataStore());

  /* Sum: '<S695>/Sum2' */
  rtb_DataTypeConversion1_j = BaseEngineController_LS_112_B.s695_Switch -
    BaseEngineController_LS_112_B.s771_MinMax;

  /* S-Function (motohawk_sfun_data_read): '<S771>/motohawk_data_read1' */
  rtb_Product_ku = TPS2Raw_Adpt_Hi_DataStore();

  /* MinMax: '<S771>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S695>/motohawk_calibration11'
   */
  u = (real_T)rtb_Product_ku;
  BaseEngineController_LS_112_B.s771_MinMax1 = (u >= (TPS2Adapt_Hi_Min_DataStore
    ())) || rtIsNaN((TPS2Adapt_Hi_Min_DataStore())) ? u :
    (TPS2Adapt_Hi_Min_DataStore());

  /* Gain: '<S695>/Gain2' incorporates:
   *  Product: '<S695>/Product1'
   *  Sum: '<S695>/Sum1'
   */
  rtb_DataTypeConversion_je = rtb_DataTypeConversion1_j /
    (BaseEngineController_LS_112_B.s771_MinMax1 -
     BaseEngineController_LS_112_B.s771_MinMax) * 100.0;

  /* MinMax: '<S775>/MinMax' incorporates:
   *  Constant: '<S695>/Constant1'
   */
  rtb_DataTypeConversion_je = rtb_DataTypeConversion_je >= 0.0 ?
    rtb_DataTypeConversion_je : 0.0;

  /* MinMax: '<S775>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S695>/motohawk_calibration1'
   */
  BaseEngineController_LS_112_B.s775_MinMax1 = (rtb_DataTypeConversion_je <=
    (TPS2MaxLimit_DataStore())) || rtIsNaN((TPS2MaxLimit_DataStore())) ?
    rtb_DataTypeConversion_je : (TPS2MaxLimit_DataStore());

  /* S-Function Block: <S773>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_112_DWork.s773_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_je = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S773>/Product' incorporates:
   *  MinMax: '<S773>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S773>/motohawk_calibration'
   */
  rtb_DataTypeConversion_je /= (rtb_DataTypeConversion_je >=
    (TPS2FilterConst_DataStore())) || rtIsNaN((TPS2FilterConst_DataStore())) ?
    rtb_DataTypeConversion_je : (TPS2FilterConst_DataStore());

  /* Sum: '<S781>/Sum1' incorporates:
   *  Constant: '<S781>/Constant'
   *  Product: '<S781>/Product'
   *  Product: '<S781>/Product1'
   *  Sum: '<S781>/Sum'
   *  UnitDelay: '<S781>/Unit Delay'
   */
  rtb_Sum1_kh = (1.0 - rtb_DataTypeConversion_je) *
    BaseEngineController_LS_112_DWork.s781_UnitDelay_DSTATE +
    BaseEngineController_LS_112_B.s775_MinMax1 * rtb_DataTypeConversion_je;

  /* UnitDelay: '<S774>/Unit Delay1' */
  rtb_UnitDelay1_fq = BaseEngineController_LS_112_DWork.s774_UnitDelay1_DSTATE;

  /* If: '<S774>/If' incorporates:
   *  Logic: '<S774>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_p && rtb_LogicalOperator1_ou) {
    /* Outputs for IfAction SubSystem: '<S774>/If Action Subsystem' incorporates:
     *  ActionPort: '<S782>/Action Port'
     */
    BaseEngineController_LS_112_IfActionSubsystem(rtb_UnitDelay1_fq,
      &rtb_Merge_p1);

    /* End of Outputs for SubSystem: '<S774>/If Action Subsystem' */
  } else if (rtb_LogicalOperator1_ib) {
    /* Outputs for IfAction SubSystem: '<S774>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S783>/Action Port'
     */
    BaseEngineController_LS_112_IfActionSubsystem((TPS2DfltValue_DataStore()),
      &rtb_Merge_p1);

    /* End of Outputs for SubSystem: '<S774>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S774>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S784>/Action Port'
     */
    BaseEngineController_LS_112_IfActionSubsystem(rtb_Sum1_kh, &rtb_Merge_p1);

    /* End of Outputs for SubSystem: '<S774>/If Action Subsystem2' */
  }

  /* End of If: '<S774>/If' */

  /* If: '<S785>/If' incorporates:
   *  Inport: '<S786>/In1'
   *  Inport: '<S787>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S785>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S785>/override_enable'
   */
  if ((TPS2_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S785>/NewValue' incorporates:
     *  ActionPort: '<S786>/Action Port'
     */
    BaseEngineController_LS_112_B.s785_Merge = (TPS2_new_DataStore());

    /* End of Outputs for SubSystem: '<S785>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S785>/OldValue' incorporates:
     *  ActionPort: '<S787>/Action Port'
     */
    BaseEngineController_LS_112_B.s785_Merge = rtb_Merge_p1;

    /* End of Outputs for SubSystem: '<S785>/OldValue' */
  }

  /* End of If: '<S785>/If' */

  /* Logic: '<S450>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S450>/motohawk_fault_status'
   *  S-Function (motohawk_sfun_fault_status): '<S450>/motohawk_fault_status1'
   */
  rtb_LogicalOperator6_p = (IsFaultActive(148) || IsFaultActive(149));

  /* Logic: '<S450>/Logical Operator6' incorporates:
   *  Logic: '<S450>/Logical Operator5'
   *  S-Function (motohawk_sfun_fault_status): '<S450>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S450>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_ou = (rtb_LogicalOperator6_p && (IsFaultActive(154) ||
    IsFaultActive(155)));

  /* Switch: '<S450>/Switch2' incorporates:
   *  Logic: '<S450>/Logical Operator1'
   *  S-Function (motohawk_sfun_fault_status): '<S450>/motohawk_fault_status4'
   */
  if (rtb_LogicalOperator1_ou || IsFaultActive(156)) {
    /* MinMax: '<S450>/MinMax' */
    BaseEngineController_LS_112_B.s450_Switch2 =
      (BaseEngineController_LS_112_B.s785_Merge >=
       BaseEngineController_LS_112_B.s768_Merge) || rtIsNaN
      (BaseEngineController_LS_112_B.s768_Merge) ?
      BaseEngineController_LS_112_B.s785_Merge :
      BaseEngineController_LS_112_B.s768_Merge;
  } else {
    /* Switch: '<S450>/Switch1' */
    if (rtb_LogicalOperator6_p) {
      BaseEngineController_LS_112_B.s450_Switch2 =
        BaseEngineController_LS_112_B.s785_Merge;
    } else {
      BaseEngineController_LS_112_B.s450_Switch2 =
        BaseEngineController_LS_112_B.s768_Merge;
    }

    /* End of Switch: '<S450>/Switch1' */
  }

  /* End of Switch: '<S450>/Switch2' */

  /* RelationalOperator: '<S91>/RelOp' incorporates:
   *  Constant: '<S91>/Constant'
   */
  rtb_LogicalOperator6_p = (BaseEngineController_LS_112_B.s466_State == 2);

  /* S-Function Block: <S582>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_112_DWork.s582_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_nt = ((real_T) delta) * 0.000001;
  }

  /* UnitDelay: '<S582>/Unit Delay' */
  rtb_DataTypeConversion1_j =
    BaseEngineController_LS_112_DWork.s582_UnitDelay_DSTATE;

  /* Logic: '<S557>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S557>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S557>/motohawk_fault_status4'
   */
  rtb_LogicalOperator1_ib = (IsFaultActive(75) || IsFaultActive(76));

  /* Logic: '<S557>/Logical Operator6' */
  rtb_LogicalOperator1_ou = !rtb_LogicalOperator1_ib;

  /* Logic: '<S557>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S557>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S557>/motohawk_fault_status3'
   */
  rtb_Switch1_m = (IsFaultSuspected(75) || IsFaultSuspected(76));

  /* S-Function (motohawk_sfun_freq_in): '<S482>/motohawk_frequency_in' */
  BaseEngineController_LS_112_B.s482_motohawk_frequency_in =
    SPD3_FrequencyInput_InstantFrequency_Get();

  /* DataTypeConversion: '<S557>/Data Type Conversion' */
  rtb_DataTypeConversion_je = (real_T)
    BaseEngineController_LS_112_B.s482_motohawk_frequency_in;

  /* Product: '<S557>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S557>/motohawk_calibration4'
   */
  rtb_DataTypeConversion_ep = rtb_DataTypeConversion_je *
    (FuelSensGain_DataStore());

  /* Sum: '<S557>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S557>/motohawk_calibration5'
   */
  BaseEngineController_LS_112_B.s557_Sum1 = rtb_DataTypeConversion_ep +
    (FuelSensOfst_DataStore());

  /* Saturate: '<S557>/Saturation' */
  rtb_Saturation_c = BaseEngineController_LS_112_B.s557_Sum1 >= 90.0 ? 90.0 :
    BaseEngineController_LS_112_B.s557_Sum1 <= 0.0 ? 0.0 :
    BaseEngineController_LS_112_B.s557_Sum1;

  /* UnitDelay: '<S557>/Unit Delay1' */
  rtb_UnitDelay1_bh = BaseEngineController_LS_112_DWork.s557_UnitDelay1_DSTATE;

  /* If: '<S557>/If' incorporates:
   *  Logic: '<S557>/Logical Operator5'
   */
  if (rtb_LogicalOperator1_ou && rtb_Switch1_m) {
    /* Outputs for IfAction SubSystem: '<S557>/If Action Subsystem' incorporates:
     *  ActionPort: '<S574>/Action Port'
     */
    BaseEngineController_LS_112_IfActionSubsystem(rtb_UnitDelay1_bh,
      &rtb_Merge_ff);

    /* End of Outputs for SubSystem: '<S557>/If Action Subsystem' */
  } else if (rtb_LogicalOperator1_ib) {
    /* Outputs for IfAction SubSystem: '<S557>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S575>/Action Port'
     */
    BaseEngineController_LS_112_IfActionSubsystem((FuelSensDfltValue_DataStore()),
      &rtb_Merge_ff);

    /* End of Outputs for SubSystem: '<S557>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S557>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S576>/Action Port'
     */
    BaseEngineController_LS_112_IfActionSubsystem(rtb_Saturation_c,
      &rtb_Merge_ff);

    /* End of Outputs for SubSystem: '<S557>/If Action Subsystem2' */
  }

  /* End of If: '<S557>/If' */

  /* Product: '<S582>/Product1' incorporates:
   *  S-Function (motohawk_sfun_delta_time): '<S582>/motohawk_delta_time'
   *  Sum: '<S582>/Sum3'
   */
  rtb_DataTypeConversion_i = 1.0 / rtb_motohawk_delta_time_nt * (rtb_Merge_ff -
    rtb_DataTypeConversion1_j);

  /* MinMax: '<S583>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S580>/motohawk_calibration1'
   */
  rtb_DataTypeConversion_i = (rtb_DataTypeConversion_i >= (Fall_Rate_DataStore()))
    || rtIsNaN((Fall_Rate_DataStore())) ? rtb_DataTypeConversion_i :
    (Fall_Rate_DataStore());

  /* Sum: '<S582>/Sum2' incorporates:
   *  MinMax: '<S583>/MinMax1'
   *  Product: '<S582>/Product'
   *  S-Function (motohawk_sfun_calibration): '<S580>/motohawk_calibration'
   *  S-Function (motohawk_sfun_delta_time): '<S582>/motohawk_delta_time'
   */
  rtb_Sum2_cd = ((rtb_DataTypeConversion_i <= (Rise_Rate_DataStore())) ||
                 rtIsNaN((Rise_Rate_DataStore())) ? rtb_DataTypeConversion_i :
                 (Rise_Rate_DataStore())) * rtb_motohawk_delta_time_nt +
    rtb_DataTypeConversion1_j;

  /* S-Function Block: <S578>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_112_DWork.s578_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_i = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S578>/Product' incorporates:
   *  MinMax: '<S578>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S578>/motohawk_calibration'
   */
  rtb_DataTypeConversion_i /= (rtb_DataTypeConversion_i >=
    (FuelSensFilterConst_DataStore())) || rtIsNaN((FuelSensFilterConst_DataStore
    ())) ? rtb_DataTypeConversion_i : (FuelSensFilterConst_DataStore());

  /* Sum: '<S581>/Sum1' incorporates:
   *  Constant: '<S581>/Constant'
   *  Product: '<S581>/Product'
   *  Product: '<S581>/Product1'
   *  Sum: '<S581>/Sum'
   *  UnitDelay: '<S581>/Unit Delay'
   */
  rtb_Sum1_fj = (1.0 - rtb_DataTypeConversion_i) *
    BaseEngineController_LS_112_DWork.s581_UnitDelay_DSTATE + rtb_Merge_ff *
    rtb_DataTypeConversion_i;

  /* UnitDelay: '<S579>/Unit Delay' */
  rtb_UnitDelay_gc = BaseEngineController_LS_112_DWork.s579_UnitDelay_DSTATE;

  /* UnitDelay: '<S579>/Unit Delay1' */
  rtb_UnitDelay1_d = BaseEngineController_LS_112_DWork.s579_UnitDelay1_DSTATE;

  /* UnitDelay: '<S579>/Unit Delay2' */
  rtb_DataTypeConversion1_j =
    BaseEngineController_LS_112_DWork.s579_UnitDelay2_DSTATE;

  /* MultiPortSwitch: '<S573>/Multiport Switch' incorporates:
   *  Product: '<S579>/Product'
   *  S-Function (motohawk_sfun_calibration): '<S573>/motohawk_calibration'
   *  S-Function (motohawk_sfun_calibration): '<S579>/motohawk_calibration'
   */
  switch (((uint8_T)(Filter_Type_Selection_DataStore()))) {
   case 0:
    rtb_DataTypeConversion1_j = rtb_Sum2_cd;
    break;

   case 1:
    rtb_DataTypeConversion1_j = rtb_Sum1_fj;
    break;

   default:
    /* Product: '<S579>/Product3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S579>/motohawk_calibration3'
     */
    rtb_DataTypeConversion1_j *= (Gain3_DataStore());

    /* Sum: '<S579>/Sum2' incorporates:
     *  Product: '<S579>/Product2'
     *  S-Function (motohawk_sfun_calibration): '<S579>/motohawk_calibration2'
     */
    rtb_DataTypeConversion1_j += (Gain2_DataStore()) * rtb_UnitDelay1_d;

    /* Sum: '<S579>/Sum' incorporates:
     *  Product: '<S579>/Product1'
     *  S-Function (motohawk_sfun_calibration): '<S579>/motohawk_calibration1'
     *  Sum: '<S579>/Sum1'
     */
    rtb_DataTypeConversion1_j = ((Gain1_DataStore()) * rtb_UnitDelay_gc +
      rtb_DataTypeConversion1_j) + rtb_Merge_ff;
    rtb_DataTypeConversion1_j *= (FinalGain_DataStore());
    break;
  }

  /* End of MultiPortSwitch: '<S573>/Multiport Switch' */
  /* If: '<S577>/If' incorporates:
   *  Inport: '<S584>/In1'
   *  Inport: '<S585>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S577>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S577>/override_enable'
   */
  if ((FuelSens_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S577>/NewValue' incorporates:
     *  ActionPort: '<S584>/Action Port'
     */
    BaseEngineController_LS_112_B.s577_Merge = (FuelSens_new_DataStore());

    /* End of Outputs for SubSystem: '<S577>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S577>/OldValue' incorporates:
     *  ActionPort: '<S585>/Action Port'
     */
    BaseEngineController_LS_112_B.s577_Merge = rtb_DataTypeConversion1_j;

    /* End of Outputs for SubSystem: '<S577>/OldValue' */
  }

  /* End of If: '<S577>/If' */

  /* Outputs for Enabled SubSystem: '<S15>/Crank' incorporates:
   *  EnablePort: '<S90>/Enable'
   */
  if (rtb_LogicalOperator6_p) {
    if (!BaseEngineController_LS_112_DWork.s15_Crank_MODE) {
      BaseEngineController_LS_112_DWork.s15_Crank_MODE = TRUE;
    }

    /* MultiPortSwitch: '<S97>/Multiport Switch2' incorporates:
     *  Constant: '<S97>/ClearFloodFueling3'
     *  S-Function (motohawk_sfun_calibration): '<S97>/motohawk_calibration1'
     *  S-Function (motohawk_sfun_data_read): '<S97>/motohawk_data_read1'
     */
    if (AirControlSource_DataStore() == FALSE) {
      rtb_DataTypeConversion1_j = 0.0;
    } else {
      rtb_DataTypeConversion1_j = (OpenThrottleFPCScalar_DataStore());
    }

    /* End of MultiPortSwitch: '<S97>/Multiport Switch2' */

    /* MultiPortSwitch: '<S97>/Multiport Switch1' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S97>/motohawk_data_read1'
     */
    if (AirControlSource_DataStore() == FALSE) {
      rtb_motohawk_replicate1 = rtb_APP1;
    } else {
      rtb_motohawk_replicate1 = BaseEngineController_LS_112_B.s450_Switch2;
    }

    /* End of MultiPortSwitch: '<S97>/Multiport Switch1' */

    /* Sum: '<S97>/Add' incorporates:
     *  Constant: '<S97>/ClearFloodFueling1'
     *  Gain: '<S97>/Gain'
     *  Product: '<S97>/Product1'
     */
    rtb_DataTypeConversion1_j = 0.01 * rtb_motohawk_replicate1 *
      rtb_DataTypeConversion1_j + 1.0;

    /* RelationalOperator: '<S97>/Relational Operator' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S97>/motohawk_calibration2'
     */
    rtb_LogicalOperator6_p = (rtb_motohawk_replicate1 >=
      (ClearFloodThreshold_DataStore()));

    /* S-Function Block: <S90>/motohawk_prelookup1 */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (CrankECT05Idx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_LS_112_B.s665_Merge, (CrankECT05IdxArr_DataStore()),
         5, (CrankECT05Idx_DataStore()));
      rtb_motohawk_prelookup1_cv = (CrankECT05Idx_DataStore());
    }

    /* S-Function Block: <S90>/motohawk_prelookup */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (CrankRPM05In_DataStore()) = BaseEngineController_LS_112_B.s555_Sum1;
      (CrankRPM05Idx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_LS_112_B.s555_Sum1, (CrankRPM05IdxArr_DataStore()),
         5, (CrankRPM05Idx_DataStore()));
      rtb_motohawk_prelookup_c = (CrankRPM05Idx_DataStore());
    }

    /* S-Function Block: <S90>/motohawk_prelookup2 */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (CrankIAT05Idx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_LS_112_B.s683_Merge, (CrankIAT05IdxArr_DataStore()),
         5, (CrankIAT05Idx_DataStore()));
      rtb_motohawk_prelookup2_e = (CrankIAT05Idx_DataStore());
    }

    /* S-Function Block: <S90>/motohawk_prelookup3 */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (CrankOXY05In_DataStore()) = BaseEngineController_LS_112_B.s577_Merge;
      (CrankOXY05Idx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_LS_112_B.s577_Merge, (CrankOXY05IdxArr_DataStore()),
         5, (CrankOXY05Idx_DataStore()));
      rtb_motohawk_prelookup3_e = (CrankOXY05Idx_DataStore());
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
    if (rtb_LogicalOperator6_p) {
      rtb_motohawk_replicate1 = 0.0;
    } else {
      /* S-Function Block: <S97>/motohawk_interpolation_1d1 */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d1_d = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup3_e, (real_T *) ((CrankFPC_OXYMultTbl_DataStore
             ())), 5);
        (CrankFPC_OXYMult_DataStore()) = rtb_motohawk_interpolation_1d1_d;
      }

      /* S-Function Block: <S97>/motohawk_interpolation_1d */
      {
        extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
          uint32_T sz);
        rtb_motohawk_interpolation_1d_n = TableInterpolation1D_real_T
          (rtb_motohawk_prelookup2_e, (real_T *) ((CrankFPC_IATMultTbl_DataStore
             ())), 5);
        (CrankFPC_IATMult_DataStore()) = rtb_motohawk_interpolation_1d_n;
      }

      /* S-Function Block: <S97>/motohawk_interpolation_2d */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_motohawk_interpolation_2d_ls = TableInterpolation2D_real_T
          (rtb_motohawk_prelookup1_cv, rtb_motohawk_prelookup_c, (real_T *)
           ((CrankFPCMap_DataStore())), 5, 5);
        (CrankFPC_DataStore()) = rtb_motohawk_interpolation_2d_ls;
      }

      rtb_motohawk_replicate1 = rtb_motohawk_interpolation_2d_ls *
        rtb_motohawk_interpolation_1d_n * rtb_motohawk_interpolation_1d1_d;
    }

    /* End of Switch: '<S97>/Switch' */

    /* Product: '<S97>/Product' */
    rtb_Product_gs = rtb_DataTypeConversion1_j * rtb_motohawk_replicate1;

    /* S-Function Block: <S98>/motohawk_interpolation_2d */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_motohawk_interpolation_2d_k = TableInterpolation2D_real_T
        (rtb_motohawk_prelookup1_cv, rtb_motohawk_prelookup_c, (real_T *)
         ((CrankIACMap_DataStore())), 5, 5);
      (CrankIAC_DataStore()) = rtb_motohawk_interpolation_2d_k;
    }

    /* S-Function Block: <S98>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_d = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup2_e, (real_T *) ((CrankIAC_IATMultTbl_DataStore())),
         5);
      (CrankIAC_IATMult_DataStore()) = rtb_motohawk_interpolation_1d_d;
    }

    /* S-Function Block: <S98>/motohawk_interpolation_1d1 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d1_b5 = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup3_e, (real_T *) ((CrankIAC_OXYMultTbl_DataStore())),
         5);
      (CrankIAC_OXYMult_DataStore()) = rtb_motohawk_interpolation_1d1_b5;
    }

    /* Product: '<S98>/Product' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S98>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S98>/motohawk_interpolation_1d1'
     *  S-Function (motohawk_sfun_interpolation_2d): '<S98>/motohawk_interpolation_2d'
     *  S-Function (motohawk_sfun_prelookup): '<S90>/motohawk_prelookup'
     *  S-Function (motohawk_sfun_prelookup): '<S90>/motohawk_prelookup1'
     *  S-Function (motohawk_sfun_prelookup): '<S90>/motohawk_prelookup2'
     *  S-Function (motohawk_sfun_prelookup): '<S90>/motohawk_prelookup3'
     */
    rtb_DataTypeConversion1_j = rtb_motohawk_interpolation_2d_k *
      rtb_motohawk_interpolation_1d_d * rtb_motohawk_interpolation_1d1_b5;

    /* Switch: '<S99>/Switch' */
    rtb_motohawk_replicate1 = rtb_DataTypeConversion1_j;

    /* DataTypeConversion: '<S90>/Data Type Conversion' */
    BaseEngineController_LS_112_B.s92_IACP = rtb_motohawk_replicate1;

    /* Switch: '<S99>/Switch1' incorporates:
     *  Constant: '<S99>/Constant'
     *  Constant: '<S99>/Constant1'
     *  S-Function (motohawk_sfun_data_read): '<S99>/motohawk_data_read'
     *  Sum: '<S99>/Sum'
     */
    if (((uint8_T)IACType_DataStore()) > 0) {
      rtb_motohawk_replicate1 = 100.0 - rtb_DataTypeConversion1_j;
    } else {
      rtb_motohawk_replicate1 = 0.0;
    }

    /* End of Switch: '<S99>/Switch1' */

    /* DataTypeConversion: '<S90>/Data Type Conversion1' */
    BaseEngineController_LS_112_B.s92_IACS = rtb_motohawk_replicate1;

    /* DataTypeConversion: '<S90>/Data Type Conversion2' incorporates:
     *  Constant: '<S90>/OFF'
     */
    BaseEngineController_LS_112_B.s92_WASTEGATE = 0.0;

    /* ZeroOrderHold: '<S90>/Zero-Order Hold12' incorporates:
     *  Constant: '<S90>/Mult1'
     */
    BaseEngineController_LS_112_B.s92_FAN1 = 0.0;

    /* ZeroOrderHold: '<S90>/Zero-Order Hold13' incorporates:
     *  Constant: '<S90>/Mult2'
     */
    BaseEngineController_LS_112_B.s92_FAN2 = 0.0;

    /* ZeroOrderHold: '<S90>/Zero-Order Hold14' incorporates:
     *  Constant: '<S90>/OFF3'
     */
    BaseEngineController_LS_112_B.s92_AC = FALSE;

    /* S-Function Block: <S90>/motohawk_interpolation_2d */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_motohawk_interpolation_2d_l = TableInterpolation2D_real_T
        (rtb_motohawk_prelookup1_cv, rtb_motohawk_prelookup_c, (real_T *)
         ((CrankSparkMap_DataStore())), 5, 5);
      (CrankSpark_DataStore()) = rtb_motohawk_interpolation_2d_l;
    }

    /* S-Function (motohawk_sfun_replicate): '<S90>/motohawk_replicate1' */

    /* S-Function Block: <S90>/motohawk_replicate1 */
    rtb_motohawk_replicate1 = rtb_motohawk_interpolation_2d_l;

    /* ZeroOrderHold: '<S90>/Zero-Order Hold3' */
    BaseEngineController_LS_112_B.s92_SparkAdv = rtb_motohawk_replicate1;

    /* S-Function Block: <S90>/motohawk_interpolation_2d1 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_motohawk_interpolation_2d1_l = TableInterpolation2D_real_T
        (rtb_motohawk_prelookup1_cv, rtb_motohawk_prelookup_c, (real_T *)
         ((CrankSpkEnergyMap_DataStore())), 5, 5);
      (CrankSpkEnergy_DataStore()) = rtb_motohawk_interpolation_2d1_l;
    }

    /* ZeroOrderHold: '<S90>/Zero-Order Hold4' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S90>/motohawk_interpolation_2d1'
     *  S-Function (motohawk_sfun_prelookup): '<S90>/motohawk_prelookup'
     *  S-Function (motohawk_sfun_prelookup): '<S90>/motohawk_prelookup1'
     */
    BaseEngineController_LS_112_B.s92_SparkEnergy =
      rtb_motohawk_interpolation_2d1_l;

    /* S-Function Block: <S90>/motohawk_interpolation_1d4 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d4_hz = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_c, (real_T *) ((CrankSOITbl_DataStore())), 5);
      (CrankSOI_DataStore()) = rtb_motohawk_interpolation_1d4_hz;
    }

    /* ZeroOrderHold: '<S90>/Zero-Order Hold5' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S90>/motohawk_interpolation_1d4'
     *  S-Function (motohawk_sfun_prelookup): '<S90>/motohawk_prelookup'
     */
    BaseEngineController_LS_112_B.s92_SOI = rtb_motohawk_interpolation_1d4_hz;

    /* S-Function (motohawk_sfun_replicate): '<S90>/motohawk_replicate' */

    /* S-Function Block: <S90>/motohawk_replicate */
    {
      int_T i1;
      real_T *y0 = rtb_motohawk_replicate;
      for (i1=0; i1 < 8; i1++) {
        y0[i1] = rtb_Product_gs;
      }
    }

    /* ZeroOrderHold: '<S90>/Zero-Order Hold6' */
    memcpy((void *)(&BaseEngineController_LS_112_B.s92_FPC[0]), (void *)
           &rtb_motohawk_replicate[0], sizeof(real_T) << 3U);

    /* ZeroOrderHold: '<S90>/Zero-Order Hold7' incorporates:
     *  Constant: '<S90>/ON'
     */
    BaseEngineController_LS_112_B.s92_FUELP = TRUE;

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
    BaseEngineController_LS_112_B.s92_MakeUpEOI = rtb_motohawk_interpolation_1d5;

    /* S-Function Block: <S90>/motohawk_interpolation_1d1 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d1_bi = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup1_cv, (real_T *) ((CrankAirflowSetPtTbl_DataStore
           ())), 5);
      (CrankAirflowSetPt_DataStore()) = rtb_motohawk_interpolation_1d1_bi;
    }

    /* ZeroOrderHold: '<S90>/Zero-Order Hold9' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S90>/motohawk_interpolation_1d1'
     *  S-Function (motohawk_sfun_prelookup): '<S90>/motohawk_prelookup1'
     */
    BaseEngineController_LS_112_B.s92_Throttle =
      rtb_motohawk_interpolation_1d1_bi;
  } else {
    if (BaseEngineController_LS_112_DWork.s15_Crank_MODE) {
      BaseEngineController_LS_112_DWork.s15_Crank_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S15>/Crank' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S486>/Read CAN Message' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_9123p0002_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_9123p0002_Receive(0, &msg_id, 0, msg_data);
    if ((BaseEngineController_LS_112_B.s486_ReadCANMessage_o1 + 1) >
        BaseEngineController_LS_112_B.s486_ReadCANMessage_o1)
      BaseEngineController_LS_112_B.s486_ReadCANMessage_o1++;
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
      ((uint8_T *)(&tmp0))[0] = ((msg_data[0])) ;
      ((uint8_T *)(&tmp0))[1] = ((msg_data[1])) ;
      ((uint8_T *)(&tmp1))[0] = ((msg_data[2])) ;
      ((uint8_T *)(&tmp1))[1] = ((msg_data[3])) ;
      ((uint8_T *)(&tmp2))[0] = ((msg_data[4])) ;
      ((uint8_T *)(&tmp3))[0] = ((msg_data[5])) ;
      ((uint8_T *)(&tmp4))[0] = ((msg_data[6] & 0x00000002) >> 1) ;
      ((uint8_T *)(&tmp5))[0] = ((msg_data[6] & 0x00000020) >> 5) ;
      ((uint8_T *)(&tmp6))[0] = ((msg_data[6] & 0x00000080) >> 7) ;
      ((uint8_T *)(&tmp7))[0] = ((msg_data[7] & 0x0000001F)) ;
      ((uint8_T *)(&tmp8))[0] = ((msg_data[7] & 0x00000040) >> 6) ;
      BaseEngineController_LS_112_B.s486_Lambda = ((real_T) tmp0) / ((real_T)
        10000);
      BaseEngineController_LS_112_B.s486_OxygenConcentratio = ((real_T) tmp1) /
        ((real_T) 1000);
      BaseEngineController_LS_112_B.s486_SystemVolts = ((real_T) tmp2) /
        ((real_T) 10);
      BaseEngineController_LS_112_B.s486_HeaterVolts = ((real_T) tmp3) /
        ((real_T) 10);
      BaseEngineController_LS_112_B.s486_ReadCANMessage_o6 = (real_T) tmp4;
      BaseEngineController_LS_112_B.s486_ReadCANMessage_o7 = (real_T) tmp5;
      BaseEngineController_LS_112_B.s486_ReadCANMessage_o8 = (real_T) tmp6;
      BaseEngineController_LS_112_B.s486_ReadCANMessage_o9 = (real_T) tmp7;
      BaseEngineController_LS_112_B.s486_ReadCANMessage_o10 = (real_T) tmp8;
      BaseEngineController_LS_112_B.s486_ReadCANMessage_o1 = 0;
    }
  }

  /* DataTypeConversion: '<S486>/Data Type Conversion2' */
  BaseEngineController_LS_112_B.s486_DataValidState =
    ((BaseEngineController_LS_112_B.s486_ReadCANMessage_o8 != 0.0));

  /* S-Function (motohawk_sfun_read_canmsg): '<S486>/Read CAN Message1' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_9124p0001_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_9124p0001_Receive(0, &msg_id, 0, msg_data);
    if ((BaseEngineController_LS_112_B.s486_ReadCANMessage1_o1 + 1) >
        BaseEngineController_LS_112_B.s486_ReadCANMessage1_o1)
      BaseEngineController_LS_112_B.s486_ReadCANMessage1_o1++;
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
      ((uint8_T *)(&tmp0))[0] = ((msg_data[0])) ;
      ((uint8_T *)(&tmp0))[1] = ((msg_data[1])) ;
      ((uint8_T *)(&tmp1))[0] = ((msg_data[2])) ;
      ((uint8_T *)(&tmp1))[1] = ((msg_data[3])) ;
      ((uint8_T *)(&tmp2))[0] = ((msg_data[4])) ;
      ((uint8_T *)(&tmp3))[0] = ((msg_data[5])) ;
      ((uint8_T *)(&tmp4))[0] = ((msg_data[6] & 0x00000002) >> 1) ;
      ((uint8_T *)(&tmp5))[0] = ((msg_data[6] & 0x00000020) >> 5) ;
      ((uint8_T *)(&tmp6))[0] = ((msg_data[6] & 0x00000080) >> 7) ;
      ((uint8_T *)(&tmp7))[0] = ((msg_data[7] & 0x0000001F)) ;
      ((uint8_T *)(&tmp8))[0] = ((msg_data[7] & 0x00000040) >> 6) ;
      BaseEngineController_LS_112_B.s486_Lambda_c = ((real_T) tmp0) / ((real_T)
        10000);
      BaseEngineController_LS_112_B.s486_OxygenConcentratio_i = ((real_T) tmp1) /
        ((real_T) 1000);
      BaseEngineController_LS_112_B.s486_SystemVolts_f = ((real_T) tmp2) /
        ((real_T) 10);
      BaseEngineController_LS_112_B.s486_HeaterVolts_n = ((real_T) tmp3) /
        ((real_T) 10);
      BaseEngineController_LS_112_B.s486_ReadCANMessage1_o6 = (real_T) tmp4;
      BaseEngineController_LS_112_B.s486_ReadCANMessage1_o7 = (real_T) tmp5;
      BaseEngineController_LS_112_B.s486_ReadCANMessage1_o8 = (real_T) tmp6;
      BaseEngineController_LS_112_B.s486_ReadCANMessage1_o9 = (real_T) tmp7;
      BaseEngineController_LS_112_B.s486_ReadCANMessage1_o10 = (real_T) tmp8;
      BaseEngineController_LS_112_B.s486_ReadCANMessage1_o1 = 0;
    }
  }

  /* DataTypeConversion: '<S486>/Data Type Conversion6' */
  BaseEngineController_LS_112_B.s486_DataValidState_d =
    ((BaseEngineController_LS_112_B.s486_ReadCANMessage1_o8 != 0.0));

  /* S-Function Block: <S437>/motohawk_prelookup2 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (TPS09In_DataStore()) = BaseEngineController_LS_112_B.s450_Switch2;
    (TPS09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_112_B.s450_Switch2, (TPS09IdxArr_DataStore()), 9,
       (TPS09Idx_DataStore()));
    rtb_motohawk_prelookup2 = (TPS09Idx_DataStore());
  }

  /* S-Function (motohawk_sfun_read_canmsg): '<S485>/Read CAN Message2' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_9015p0001_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_9015p0001_Receive(0, &msg_id, 0, msg_data);
    if ((BaseEngineController_LS_112_B.s485_ReadCANMessage2_o1 + 1) >
        BaseEngineController_LS_112_B.s485_ReadCANMessage2_o1)
      BaseEngineController_LS_112_B.s485_ReadCANMessage2_o1++;
    if (msg_valid) {
      uint16_T tmp0 = 0;
      int16_T tmp1 = 0;
      uint16_T tmp2 = 0;
      uint8_T tmp3 = 0;
      ((uint8_T *)(&tmp0))[0] = ((msg_data[0])) ;
      ((uint8_T *)(&tmp0))[1] = ((msg_data[1])) ;
      ((uint8_T *)(&tmp1))[0] = ((msg_data[2])) ;
      ((uint8_T *)(&tmp1))[1] = ((msg_data[3])) ;
      ((uint8_T *)(&tmp2))[0] = ((msg_data[4])) ;
      ((uint8_T *)(&tmp2))[1] = ((msg_data[5])) ;
      ((uint8_T *)(&tmp3))[0] = ((msg_data[6])) ;
      BaseEngineController_LS_112_B.s485_GPS_Speed = ((real_T) tmp0) / ((real_T)
        62.1373);
      BaseEngineController_LS_112_B.s485_GPS_Altitude = ((real_T) tmp1) /
        ((real_T) 3.28084);
      BaseEngineController_LS_112_B.s485_GPS_Course = ((real_T) tmp2) / ((real_T)
        100);
      BaseEngineController_LS_112_B.s485_ReadCANMessage2_o5 = (real_T) tmp3;
      BaseEngineController_LS_112_B.s485_ReadCANMessage2_o1 = 0;
    }
  }

  /* S-Function (motohawk_sfun_read_canmsg): '<S485>/Read CAN Message' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_9013p0001_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_9013p0001_Receive(0, &msg_id, 0, msg_data);
    if ((BaseEngineController_LS_112_B.s485_ReadCANMessage_o1 + 1) >
        BaseEngineController_LS_112_B.s485_ReadCANMessage_o1)
      BaseEngineController_LS_112_B.s485_ReadCANMessage_o1++;
    if (msg_valid) {
      uint8_T tmp0 = 0;
      uint8_T tmp1 = 0;
      uint8_T tmp2 = 0;
      uint8_T tmp3 = 0;
      uint8_T tmp4 = 0;
      uint8_T tmp5 = 0;
      uint8_T tmp6 = 0;
      ((uint8_T *)(&tmp0))[0] = ((msg_data[0])) ;
      ((uint8_T *)(&tmp1))[0] = ((msg_data[1])) ;
      ((uint8_T *)(&tmp2))[0] = ((msg_data[2])) ;
      ((uint8_T *)(&tmp3))[0] = ((msg_data[3])) ;
      ((uint8_T *)(&tmp4))[0] = ((msg_data[5])) ;
      ((uint8_T *)(&tmp5))[0] = ((msg_data[6])) ;
      ((uint8_T *)(&tmp6))[0] = ((msg_data[7])) ;
      BaseEngineController_LS_112_B.s485_GPS_Valid = (boolean_T) tmp0;
      BaseEngineController_LS_112_B.s485_ReadCANMessage_o3 = ((real_T) tmp1) +
        ((real_T) 2000);
      BaseEngineController_LS_112_B.s485_ReadCANMessage_o4 = (real_T) tmp2;
      BaseEngineController_LS_112_B.s485_ReadCANMessage_o5 = (real_T) tmp3;
      BaseEngineController_LS_112_B.s485_ReadCANMessage_o6 = (real_T) tmp4;
      BaseEngineController_LS_112_B.s485_ReadCANMessage_o7 = (real_T) tmp5;
      BaseEngineController_LS_112_B.s485_ReadCANMessage_o8 = (real_T) tmp6;
      BaseEngineController_LS_112_B.s485_ReadCANMessage_o1 = 0;
    }
  }

  /* Logic: '<S454>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S454>/motohawk_fault_status2'
   */
  rtb_LogicalOperator6_p = !IsFaultActive(79);

  /* Logic: '<S454>/Logical Operator' incorporates:
   *  Logic: '<S454>/Logical Operator2'
   *  S-Function (motohawk_sfun_fault_status): '<S454>/motohawk_fault_status1'
   */
  rtb_Switch1_m = (BaseEngineController_LS_112_B.s485_GPS_Valid &&
                   rtb_LogicalOperator6_p && (!IsFaultActive(81)));

  /* Logic: '<S454>/Logical Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S454>/motohawk_calibration1'
   */
  rtb_RelationalOperator3_i2 = ((VSPD_GPSPreferred_DataStore()) && rtb_Switch1_m);

  /* UnitDelay: '<S511>/Unit Delay' */
  rtb_DataTypeConversion_ep =
    BaseEngineController_LS_112_DWork.s511_UnitDelay_DSTATE;

  /* UnitDelay: '<S544>/Unit Delay' */
  rtb_DataTypeConversion1_j =
    BaseEngineController_LS_112_DWork.s544_UnitDelay_DSTATE;

  /* S-Function Block: <S535>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_112_DWork.s535_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_i = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S535>/Product' incorporates:
   *  MinMax: '<S535>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S535>/motohawk_calibration'
   */
  rtb_DataTypeConversion_i /= (rtb_DataTypeConversion_i >=
    (VSPDFiltConst_DataStore())) || rtIsNaN((VSPDFiltConst_DataStore())) ?
    rtb_DataTypeConversion_i : (VSPDFiltConst_DataStore());

  /* Logic: '<S510>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S510>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S510>/motohawk_fault_status4'
   */
  rtb_LogicalOperator1_ib = (IsFaultActive(157) || IsFaultActive(158));

  /* Logic: '<S510>/Logical Operator6' */
  rtb_LogicalOperator6_p = !rtb_LogicalOperator1_ib;

  /* Logic: '<S510>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S510>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S510>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_ou = (IsFaultSuspected(157) || IsFaultSuspected(158));

  /* S-Function (motohawk_sfun_freq_in): '<S480>/motohawk_frequency_in1' */
  SPD1_FrequencyInput_InstantFrequencyWithDutyCycle_Get(&rtb_DataTypeConversion6,
    &rtb_DataTypeConversion2_f4);

  /* DataTypeConversion: '<S480>/Data Type Conversion1' */
  rtb_DataTypeConversion_cr = (real_T)rtb_DataTypeConversion6;

  /* Gain: '<S480>/Gain1' */
  BaseEngineController_LS_112_B.s480_Gain1 = 0.01 * rtb_DataTypeConversion_cr;

  /* S-Function Block: <S540>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (VSPDIdx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_112_B.s480_Gain1, (VSPDIdxArr_DataStore()), 5,
       (VSPDIdx_DataStore()));
    rtb_motohawk_prelookup_nf = (VSPDIdx_DataStore());
  }

  /* S-Function Block: <S540>/motohawk_interpolation_1d */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    BaseEngineController_LS_112_B.s540_motohawk_interpolation_1d =
      TableInterpolation1D_real_T(rtb_motohawk_prelookup_nf, (real_T *)
      ((VSPDTbl_DataStore())), 5);
  }

  /* UnitDelay: '<S510>/Unit Delay' */
  rtb_UnitDelay_om = BaseEngineController_LS_112_DWork.s510_UnitDelay_DSTATE;

  /* If: '<S510>/If' incorporates:
   *  Logic: '<S510>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_p && rtb_LogicalOperator1_ou) {
    /* Outputs for IfAction SubSystem: '<S510>/If Action Subsystem' incorporates:
     *  ActionPort: '<S536>/Action Port'
     */
    BaseEngineController_LS_112_IfActionSubsystem(rtb_UnitDelay_om,
      &rtb_Merge_mf);

    /* End of Outputs for SubSystem: '<S510>/If Action Subsystem' */
  } else if (rtb_LogicalOperator1_ib) {
    /* Outputs for IfAction SubSystem: '<S510>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S537>/Action Port'
     */
    BaseEngineController_LS_112_IfActionSubsystem((VSPDDefault_DataStore()),
      &rtb_Merge_mf);

    /* End of Outputs for SubSystem: '<S510>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S510>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S538>/Action Port'
     */
    BaseEngineController_LS_112_IfActionSubsystem
      (BaseEngineController_LS_112_B.s540_motohawk_interpolation_1d,
       &rtb_Merge_mf);

    /* End of Outputs for SubSystem: '<S510>/If Action Subsystem2' */
  }

  /* End of If: '<S510>/If' */

  /* Sum: '<S541>/Sum1' incorporates:
   *  Constant: '<S541>/Constant'
   *  Product: '<S541>/Product'
   *  Product: '<S541>/Product1'
   *  Sum: '<S541>/Sum'
   *  UnitDelay: '<S541>/Unit Delay'
   */
  rtb_Sum1_es = (1.0 - rtb_DataTypeConversion_i) *
    BaseEngineController_LS_112_DWork.s541_UnitDelay_DSTATE + rtb_Merge_mf *
    rtb_DataTypeConversion_i;

  /* If: '<S539>/If' incorporates:
   *  Inport: '<S542>/In1'
   *  Inport: '<S543>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S539>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S539>/override_enable'
   */
  if ((VSPD_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S539>/NewValue' incorporates:
     *  ActionPort: '<S542>/Action Port'
     */
    BaseEngineController_LS_112_B.s539_Merge = (VSPD_new_DataStore());

    /* End of Outputs for SubSystem: '<S539>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S539>/OldValue' incorporates:
     *  ActionPort: '<S543>/Action Port'
     */
    BaseEngineController_LS_112_B.s539_Merge = rtb_Sum1_es;

    /* End of Outputs for SubSystem: '<S539>/OldValue' */
  }

  /* End of If: '<S539>/If' */

  /* Sum: '<S544>/Sum2' */
  rtb_DataTypeConversion1_j = BaseEngineController_LS_112_B.s539_Merge -
    rtb_DataTypeConversion1_j;

  /* S-Function Block: <S544>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_112_DWork.s544_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_o2 = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S544>/Product' incorporates:
   *  S-Function (motohawk_sfun_delta_time): '<S544>/motohawk_delta_time'
   */
  rtb_DataTypeConversion_cr = rtb_DataTypeConversion1_j /
    rtb_motohawk_delta_time_o2;

  /* Abs: '<S511>/Abs' */
  rtb_DataTypeConversion_cr = fabs(rtb_DataTypeConversion_cr);

  /* RelationalOperator: '<S511>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S511>/motohawk_calibration2'
   */
  rtb_LogicalOperator6_p = (rtb_DataTypeConversion_cr >=
    (VSPD_RateReject_DataStore()));

  /* Logic: '<S511>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S511>/motohawk_calibration1'
   */
  BaseEngineController_LS_112_B.s511_LogicalOperator = ((rtb_LogicalOperator6_p &&
    (VSPD_RateReject_Enable_DataStore())));

  /* Sum: '<S511>/Sum' incorporates:
   *  UnitDelay: '<S511>/Unit Delay1'
   */
  rtb_DataTypeConversion_cr = BaseEngineController_LS_112_B.s539_Merge -
    BaseEngineController_LS_112_DWork.s511_UnitDelay1_DSTATE;

  /* Abs: '<S511>/Abs2' */
  rtb_DataTypeConversion_cr = fabs(rtb_DataTypeConversion_cr);

  /* RelationalOperator: '<S511>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S511>/motohawk_calibration4'
   */
  rtb_LogicalOperator6_p = (rtb_DataTypeConversion_cr >=
    (VPSD_ChangeReject_DataStore()));

  /* Abs: '<S511>/Abs1' */
  rtb_DataTypeConversion_cr = fabs(BaseEngineController_LS_112_B.s539_Merge);

  /* RelationalOperator: '<S511>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S511>/motohawk_calibration3'
   */
  rtb_LogicalOperator1_ou = (rtb_DataTypeConversion_cr <=
    (VSPD_ZeroSpeed_DataStore()));

  /* Logic: '<S511>/Logical Operator3' incorporates:
   *  Logic: '<S511>/Logical Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S511>/motohawk_calibration5'
   */
  BaseEngineController_LS_112_B.s511_LogicalOperator3 = ((rtb_LogicalOperator6_p
    && rtb_LogicalOperator1_ou && (VSPD_ChangeReject_Enable_DataStore())));

  /* Logic: '<S511>/Logical Operator1' */
  rtb_LogicalOperator1_ib = (BaseEngineController_LS_112_B.s511_LogicalOperator ||
    BaseEngineController_LS_112_B.s511_LogicalOperator3);

  /* UnitDelay: '<S511>/Unit Delay2' */
  rtb_RelationalOperator6_e =
    BaseEngineController_LS_112_DWork.s511_UnitDelay2_DSTATE;

  /* Memory: '<S545>/Memory' */
  rtb_RelationalOperator5_h =
    BaseEngineController_LS_112_DWork.s545_Memory_PreviousInput;

  /* CombinatorialLogic: '<S545>/Logic' */
  {
    uint_T rowidx= 0;

    /* Compute the truth table row index corresponding to the input */
    rowidx = (rowidx << 1) + (uint_T)(rtb_LogicalOperator1_ib != 0);
    rowidx = (rowidx << 1) + (uint_T)(rtb_RelationalOperator6_e != 0);
    rowidx = (rowidx << 1) + (uint_T)(rtb_RelationalOperator5_h != 0);

    /* Copy the appropriate row of the table into the block output vector */
    rtb_Logic_e[0] = BaseEngineController_LS_112_ConstP.pooled897[rowidx];
    rtb_Logic_e[1] = BaseEngineController_LS_112_ConstP.pooled897[rowidx + 8];
  }

  /* Switch: '<S511>/Switch' incorporates:
   *  Logic: '<S511>/Logical Operator5'
   *  UnitDelay: '<S511>/Unit Delay3'
   */
  if (rtb_Logic_e[0] || rtb_LogicalOperator1_ib) {
    BaseEngineController_LS_112_B.s511_Switch = rtb_DataTypeConversion_ep;
  } else {
    BaseEngineController_LS_112_B.s511_Switch =
      BaseEngineController_LS_112_DWork.s511_UnitDelay3_DSTATE;
  }

  /* End of Switch: '<S511>/Switch' */

  /* Switch: '<S454>/Switch2' */
  if (rtb_RelationalOperator3_i2) {
    /* Switch: '<S454>/Switch1' incorporates:
     *  Constant: '<S454>/Constant1'
     */
    if (rtb_Switch1_m) {
      BaseEngineController_LS_112_B.s454_Switch2 =
        BaseEngineController_LS_112_B.s485_GPS_Speed;
    } else {
      BaseEngineController_LS_112_B.s454_Switch2 = 0.0;
    }

    /* End of Switch: '<S454>/Switch1' */
  } else {
    /* Switch: '<S454>/Switch' incorporates:
     *  Constant: '<S454>/Constant'
     *  S-Function (motohawk_sfun_calibration): '<S454>/motohawk_calibration'
     */
    if ((VSPD_DigitalPresent_DataStore())) {
      BaseEngineController_LS_112_B.s454_Switch2 =
        BaseEngineController_LS_112_B.s511_Switch;
    } else {
      BaseEngineController_LS_112_B.s454_Switch2 = 0.0;
    }

    /* End of Switch: '<S454>/Switch' */
  }

  /* End of Switch: '<S454>/Switch2' */
  /* S-Function Block: <S438>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (VSPD17In_DataStore()) = BaseEngineController_LS_112_B.s454_Switch2;
    (VSPD17Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_112_B.s454_Switch2, (VSPD17IdxArr_DataStore()),
       17, (VSPD17Idx_DataStore()));
    rtb_motohawk_prelookup1_h = (VSPD17Idx_DataStore());
  }

  /* Outputs for Atomic SubSystem: '<S399>/Base TPS Request' */

  /* UnitDelay: '<S440>/Unit Delay2' */
  rtb_UnitDelay_a3 = BaseEngineController_LS_112_DWork.s440_UnitDelay2_DSTATE;

  /* S-Function Block: <S440>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (APP17In_DataStore()) = BaseEngineController_LS_112_B.s443_Switch1;
    (APP17Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_112_B.s443_Switch1, (APP17IdxArr_DataStore()), 17,
       (APP17Idx_DataStore()));
    rtb_motohawk_prelookup_ft = (APP17Idx_DataStore());
  }

  /* S-Function Block: <S440>/motohawk_interpolation_2d */
  {
    extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
      real_T *map_data, uint32_T row_sz, uint32_T col_sz);
    rtb_motohawk_interpolation_2d_c = TableInterpolation2D_real_T
      (rtb_motohawk_prelookup1_h, rtb_motohawk_prelookup_ft, (real_T *)
       ((ETCRequestMap_DataStore())), 17, 17);
    (ETCRequest_DataStore()) = rtb_motohawk_interpolation_2d_c;
  }

  /* RelationalOperator: '<S440>/Relational Operator3' */
  BaseEngineController_LS_112_B.s440_RelationalOperator3 = ((rtb_UnitDelay_a3 <
    rtb_motohawk_interpolation_2d_c));

  /* Outputs for Enabled SubSystem: '<S440>/PassThrough1' */
  BaseEngineController_LS_112_PassThrough1
    (BaseEngineController_LS_112_B.s440_RelationalOperator3,
     (ETCReqIncFiltC_DataStore()), &BaseEngineController_LS_112_B.s440_Merge);

  /* End of Outputs for SubSystem: '<S440>/PassThrough1' */

  /* RelationalOperator: '<S440>/Relational Operator2' */
  rtb_RelationalOperator2_bhf = (rtb_UnitDelay_a3 >
    rtb_motohawk_interpolation_2d_c);

  /* Outputs for Enabled SubSystem: '<S440>/PassThrough2' */
  BaseEngineController_LS_112_PassThrough1(rtb_RelationalOperator2_bhf,
    (ETCReqDecFiltC_DataStore()), &BaseEngineController_LS_112_B.s440_Merge);

  /* End of Outputs for SubSystem: '<S440>/PassThrough2' */

  /* S-Function Block: <S458>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_112_DWork.s458_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_pg = ((real_T) delta) * 0.000001;
  }

  /* S-Function Block: <S440>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_112_DWork.s440_motohawk_delta_time_DWORK1, NULL);
    rtb_UnitDelay_a3 = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S440>/Product' incorporates:
   *  MinMax: '<S440>/MinMax'
   */
  rtb_UnitDelay_a3 /= (rtb_UnitDelay_a3 >=
                       BaseEngineController_LS_112_B.s440_Merge) || rtIsNaN
    (BaseEngineController_LS_112_B.s440_Merge) ? rtb_UnitDelay_a3 :
    BaseEngineController_LS_112_B.s440_Merge;

  /* Product: '<S455>/Product' */
  rtb_DataTypeConversion1_j = rtb_motohawk_interpolation_2d_c * rtb_UnitDelay_a3;

  /* Sum: '<S455>/Sum' incorporates:
   *  Constant: '<S455>/Constant'
   */
  rtb_DataTypeConversion_ep = 1.0 - rtb_UnitDelay_a3;

  /* UnitDelay: '<S455>/Unit Delay' */
  rtb_UnitDelay_a3 = BaseEngineController_LS_112_DWork.s455_UnitDelay_DSTATE;

  /* Sum: '<S455>/Sum1' incorporates:
   *  Product: '<S455>/Product1'
   */
  rtb_DataTypeConversion_ep = rtb_DataTypeConversion_ep * rtb_UnitDelay_a3 +
    rtb_DataTypeConversion1_j;

  /* UnitDelay: '<S458>/Unit Delay' */
  rtb_UnitDelay_a3 = BaseEngineController_LS_112_DWork.s458_UnitDelay_DSTATE;

  /* Product: '<S458>/Product1' incorporates:
   *  S-Function (motohawk_sfun_delta_time): '<S458>/motohawk_delta_time'
   *  Sum: '<S458>/Sum3'
   */
  rtb_DataTypeConversion1_j = 1.0 / rtb_motohawk_delta_time_pg *
    (rtb_DataTypeConversion_ep - rtb_UnitDelay_a3);

  /* S-Function Block: <S440>/motohawk_interpolation_1d3 */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_motohawk_interpolation_1d1_e5 = TableInterpolation1D_real_T
      (rtb_motohawk_prelookup2, (real_T *) ((ETCReqFallRateTbl_DataStore())), 9);
    (ETCReqFallRate_DataStore()) = rtb_motohawk_interpolation_1d1_e5;
  }

  /* MinMax: '<S459>/MinMax' */
  rtb_Abs_o = (rtb_DataTypeConversion1_j >= rtb_motohawk_interpolation_1d1_e5) ||
    rtIsNaN(rtb_motohawk_interpolation_1d1_e5) ? rtb_DataTypeConversion1_j :
    rtb_motohawk_interpolation_1d1_e5;

  /* S-Function Block: <S440>/motohawk_interpolation_1d1 */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_motohawk_interpolation_1d1_e5 = TableInterpolation1D_real_T
      (rtb_motohawk_prelookup2, (real_T *) ((ETCReqRiseRateTbl_DataStore())), 9);
    (ETCReqRiseRate_DataStore()) = rtb_motohawk_interpolation_1d1_e5;
  }

  /* Sum: '<S458>/Sum2' incorporates:
   *  MinMax: '<S459>/MinMax'
   *  MinMax: '<S459>/MinMax1'
   *  Product: '<S458>/Product'
   *  S-Function (motohawk_sfun_delta_time): '<S458>/motohawk_delta_time'
   */
  BaseEngineController_LS_112_B.s458_Sum2 = ((rtb_Abs_o <=
    rtb_motohawk_interpolation_1d1_e5) || rtIsNaN
    (rtb_motohawk_interpolation_1d1_e5) ? rtb_Abs_o :
    rtb_motohawk_interpolation_1d1_e5) * rtb_motohawk_delta_time_pg +
    rtb_UnitDelay_a3;

  /* Update for UnitDelay: '<S440>/Unit Delay2' incorporates:
   *  UnitDelay: '<S440>/Unit Delay1'
   */
  BaseEngineController_LS_112_DWork.s440_UnitDelay2_DSTATE =
    BaseEngineController_LS_112_DWork.s440_UnitDelay1_DSTATE;

  /* Update for UnitDelay: '<S455>/Unit Delay' */
  BaseEngineController_LS_112_DWork.s455_UnitDelay_DSTATE =
    rtb_DataTypeConversion_ep;

  /* Update for UnitDelay: '<S458>/Unit Delay' */
  BaseEngineController_LS_112_DWork.s458_UnitDelay_DSTATE =
    BaseEngineController_LS_112_B.s458_Sum2;

  /* Update for UnitDelay: '<S440>/Unit Delay1' incorporates:
   *  UnitDelay: '<S440>/Unit Delay3'
   */
  BaseEngineController_LS_112_DWork.s440_UnitDelay1_DSTATE =
    BaseEngineController_LS_112_DWork.s440_UnitDelay3_DSTATE;

  /* Update for UnitDelay: '<S440>/Unit Delay3' incorporates:
   *  UnitDelay: '<S440>/Unit Delay4'
   */
  BaseEngineController_LS_112_DWork.s440_UnitDelay3_DSTATE =
    BaseEngineController_LS_112_DWork.s440_UnitDelay4_DSTATE;

  /* Update for UnitDelay: '<S440>/Unit Delay4' */
  BaseEngineController_LS_112_DWork.s440_UnitDelay4_DSTATE =
    rtb_motohawk_interpolation_2d_c;

  /* End of Outputs for SubSystem: '<S399>/Base TPS Request' */

  /* UnitDelay: '<S448>/Unit Delay' */
  rtb_DataTypeConversion_ep =
    BaseEngineController_LS_112_DWork.s448_UnitDelay_DSTATE;

  /* Sum: '<S448>/Sum' incorporates:
   *  Constant: '<S448>/Constant'
   *  S-Function (motohawk_sfun_calibration): '<S448>/motohawk_calibration'
   */
  rtb_Product1_mc = 1.0 - (O2BankA_DelagFilterConst_DataStore());

  /* S-Function Block: <S489>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_112_DWork.s489_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_cr = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S489>/Product' incorporates:
   *  MinMax: '<S489>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S489>/motohawk_calibration'
   */
  rtb_DataTypeConversion_cr /= (rtb_DataTypeConversion_cr >=
    (Bank1_EquivRatioFilterConst_DataStore())) || rtIsNaN
    ((Bank1_EquivRatioFilterConst_DataStore())) ? rtb_DataTypeConversion_cr :
    (Bank1_EquivRatioFilterConst_DataStore());

  /* Logic: '<S487>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S487>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S487>/motohawk_fault_status4'
   */
  rtb_RelationalOperator5_h = (IsFaultActive(23) || IsFaultActive(24));

  /* Logic: '<S487>/Logical Operator6' */
  rtb_LogicalOperator6_p = !rtb_RelationalOperator5_h;

  /* Logic: '<S487>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S487>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S487>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_ou = (IsFaultSuspected(23) || IsFaultSuspected(24));

  /* Math: '<S486>/Math Function' incorporates:
   *  Saturate: '<S486>/Saturation'
   *
   * About '<S486>/Math Function':
   *  Operator: reciprocal
   */
  BaseEngineController_LS_112_B.s486_MathFunction = 1.0 /
    (BaseEngineController_LS_112_B.s486_Lambda >= 0.1 ?
     BaseEngineController_LS_112_B.s486_Lambda : 0.1);

  /* Product: '<S487>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S487>/motohawk_calibration4'
   */
  rtb_DataTypeConversion1_j = BaseEngineController_LS_112_B.s486_MathFunction *
    (Bank1_EquivRatioGain_DataStore());

  /* Sum: '<S487>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S487>/motohawk_calibration5'
   */
  BaseEngineController_LS_112_B.s487_Sum1 = rtb_DataTypeConversion1_j +
    (Bank1_EquivRatioOfst_DataStore());

  /* UnitDelay: '<S487>/Unit Delay1' */
  rtb_UnitDelay1_l = BaseEngineController_LS_112_DWork.s487_UnitDelay1_DSTATE;

  /* If: '<S487>/If' incorporates:
   *  Logic: '<S487>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_p && rtb_LogicalOperator1_ou) {
    /* Outputs for IfAction SubSystem: '<S487>/If Action Subsystem' incorporates:
     *  ActionPort: '<S490>/Action Port'
     */
    BaseEngineController_LS_112_IfActionSubsystem(rtb_UnitDelay1_l, &rtb_Merge_b);

    /* End of Outputs for SubSystem: '<S487>/If Action Subsystem' */
  } else if (rtb_RelationalOperator5_h) {
    /* Outputs for IfAction SubSystem: '<S487>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S491>/Action Port'
     */
    BaseEngineController_LS_112_IfActionSubsystem
      ((Bank1_EquivRatioDfltValue_DataStore()), &rtb_Merge_b);

    /* End of Outputs for SubSystem: '<S487>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S487>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S492>/Action Port'
     */
    BaseEngineController_LS_112_IfActionSubsystem
      (BaseEngineController_LS_112_B.s487_Sum1, &rtb_Merge_b);

    /* End of Outputs for SubSystem: '<S487>/If Action Subsystem2' */
  }

  /* End of If: '<S487>/If' */

  /* Sum: '<S494>/Sum1' incorporates:
   *  Constant: '<S494>/Constant'
   *  Product: '<S494>/Product'
   *  Product: '<S494>/Product1'
   *  Sum: '<S494>/Sum'
   *  UnitDelay: '<S494>/Unit Delay'
   */
  rtb_Sum1_hy = (1.0 - rtb_DataTypeConversion_cr) *
    BaseEngineController_LS_112_DWork.s494_UnitDelay_DSTATE + rtb_Merge_b *
    rtb_DataTypeConversion_cr;

  /* If: '<S493>/If' incorporates:
   *  Inport: '<S495>/In1'
   *  Inport: '<S496>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S493>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S493>/override_enable'
   */
  if ((Bank1_EquivRatio_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S493>/NewValue' incorporates:
     *  ActionPort: '<S495>/Action Port'
     */
    BaseEngineController_LS_112_B.s493_Merge = (Bank1_EquivRatio_new_DataStore());

    /* End of Outputs for SubSystem: '<S493>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S493>/OldValue' incorporates:
     *  ActionPort: '<S496>/Action Port'
     */
    BaseEngineController_LS_112_B.s493_Merge = rtb_Sum1_hy;

    /* End of Outputs for SubSystem: '<S493>/OldValue' */
  }

  /* End of If: '<S493>/If' */

  /* S-Function Block: <S497>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_112_DWork.s497_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_cr = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S497>/Product' incorporates:
   *  MinMax: '<S497>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S497>/motohawk_calibration'
   */
  rtb_DataTypeConversion_cr /= (rtb_DataTypeConversion_cr >=
    (Bank2_EquivRatioFilterConst_DataStore())) || rtIsNaN
    ((Bank2_EquivRatioFilterConst_DataStore())) ? rtb_DataTypeConversion_cr :
    (Bank2_EquivRatioFilterConst_DataStore());

  /* Logic: '<S488>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S488>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S488>/motohawk_fault_status4'
   */
  rtb_RelationalOperator5_h = (IsFaultActive(25) || IsFaultActive(26));

  /* Logic: '<S488>/Logical Operator6' */
  rtb_LogicalOperator6_p = !rtb_RelationalOperator5_h;

  /* Logic: '<S488>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S488>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S488>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_ou = (IsFaultSuspected(25) || IsFaultSuspected(26));

  /* Math: '<S486>/Math Function1' incorporates:
   *  Saturate: '<S486>/Saturation1'
   *
   * About '<S486>/Math Function1':
   *  Operator: reciprocal
   */
  BaseEngineController_LS_112_B.s486_MathFunction1 = 1.0 /
    (BaseEngineController_LS_112_B.s486_Lambda_c >= 0.1 ?
     BaseEngineController_LS_112_B.s486_Lambda_c : 0.1);

  /* Product: '<S488>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S488>/motohawk_calibration4'
   */
  rtb_DataTypeConversion1_j = BaseEngineController_LS_112_B.s486_MathFunction1 *
    (Bank2_EquivRatioGain_DataStore());

  /* Sum: '<S488>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S488>/motohawk_calibration5'
   */
  BaseEngineController_LS_112_B.s488_Sum1 = rtb_DataTypeConversion1_j +
    (Bank2_EquivRatioOfst_DataStore());

  /* UnitDelay: '<S488>/Unit Delay1' */
  rtb_UnitDelay1_pi = BaseEngineController_LS_112_DWork.s488_UnitDelay1_DSTATE;

  /* If: '<S488>/If' incorporates:
   *  Logic: '<S488>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_p && rtb_LogicalOperator1_ou) {
    /* Outputs for IfAction SubSystem: '<S488>/If Action Subsystem' incorporates:
     *  ActionPort: '<S498>/Action Port'
     */
    BaseEngineController_LS_112_IfActionSubsystem(rtb_UnitDelay1_pi,
      &rtb_Merge_om);

    /* End of Outputs for SubSystem: '<S488>/If Action Subsystem' */
  } else if (rtb_RelationalOperator5_h) {
    /* Outputs for IfAction SubSystem: '<S488>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S499>/Action Port'
     */
    BaseEngineController_LS_112_IfActionSubsystem
      ((Bank2_EquivRatioDfltValue_DataStore()), &rtb_Merge_om);

    /* End of Outputs for SubSystem: '<S488>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S488>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S500>/Action Port'
     */
    BaseEngineController_LS_112_IfActionSubsystem
      (BaseEngineController_LS_112_B.s488_Sum1, &rtb_Merge_om);

    /* End of Outputs for SubSystem: '<S488>/If Action Subsystem2' */
  }

  /* End of If: '<S488>/If' */

  /* Sum: '<S502>/Sum1' incorporates:
   *  Constant: '<S502>/Constant'
   *  Product: '<S502>/Product'
   *  Product: '<S502>/Product1'
   *  Sum: '<S502>/Sum'
   *  UnitDelay: '<S502>/Unit Delay'
   */
  rtb_Sum1_e5 = (1.0 - rtb_DataTypeConversion_cr) *
    BaseEngineController_LS_112_DWork.s502_UnitDelay_DSTATE + rtb_Merge_om *
    rtb_DataTypeConversion_cr;

  /* If: '<S501>/If' incorporates:
   *  Inport: '<S503>/In1'
   *  Inport: '<S504>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S501>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S501>/override_enable'
   */
  if ((Bank2_EquivRatio_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S501>/NewValue' incorporates:
     *  ActionPort: '<S503>/Action Port'
     */
    BaseEngineController_LS_112_B.s501_Merge = (Bank2_EquivRatio_new_DataStore());

    /* End of Outputs for SubSystem: '<S501>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S501>/OldValue' incorporates:
     *  ActionPort: '<S504>/Action Port'
     */
    BaseEngineController_LS_112_B.s501_Merge = rtb_Sum1_e5;

    /* End of Outputs for SubSystem: '<S501>/OldValue' */
  }

  /* End of If: '<S501>/If' */

  /* MultiPortSwitch: '<S486>/Multiport Switch' incorporates:
   *  Gain: '<S486>/Gain'
   *  S-Function (motohawk_sfun_calibration): '<S486>/motohawk_calibration2'
   *  Sum: '<S486>/Add'
   */
  if ((BankB_Avg_Enable_DataStore()) == FALSE) {
    BaseEngineController_LS_112_B.s486_MultiportSwitch =
      BaseEngineController_LS_112_B.s493_Merge;
  } else {
    BaseEngineController_LS_112_B.s486_MultiportSwitch =
      (BaseEngineController_LS_112_B.s493_Merge +
       BaseEngineController_LS_112_B.s501_Merge) * 0.5;
  }

  /* End of MultiPortSwitch: '<S486>/Multiport Switch' */

  /* Sum: '<S448>/Sum1' incorporates:
   *  Product: '<S448>/Product'
   *  Product: '<S448>/Product1'
   *  S-Function (motohawk_sfun_calibration): '<S448>/motohawk_calibration'
   */
  BaseEngineController_LS_112_B.s448_Sum1 = rtb_DataTypeConversion_ep *
    rtb_Product1_mc + (O2BankA_DelagFilterConst_DataStore()) *
    BaseEngineController_LS_112_B.s486_MultiportSwitch;

  /* UnitDelay: '<S448>/Unit Delay1' */
  rtb_DataTypeConversion1_j =
    BaseEngineController_LS_112_DWork.s448_UnitDelay1_DSTATE;

  /* Sum: '<S448>/Sum3' incorporates:
   *  Constant: '<S448>/Constant1'
   *  Product: '<S448>/Product2'
   *  Product: '<S448>/Product3'
   *  S-Function (motohawk_sfun_calibration): '<S448>/motohawk_calibration1'
   *  Sum: '<S448>/Sum2'
   */
  BaseEngineController_LS_112_B.s448_Sum3 = (1.0 -
    (O2BankB_DelagFiltConst_DataStore())) * rtb_DataTypeConversion1_j +
    (O2BankB_DelagFiltConst_DataStore()) *
    BaseEngineController_LS_112_B.s501_Merge;

  /* S-Function Block: <S471>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_112_DWork.s471_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_b5 = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S471>/Switch' incorporates:
   *  Constant: '<S470>/Constant'
   *  Constant: '<S471>/Constant'
   *  RelationalOperator: '<S470>/RelOp'
   *  S-Function (motohawk_sfun_data_read): '<S452>/motohawk_data_read'
   *  S-Function (motohawk_sfun_data_read): '<S471>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S471>/motohawk_delta_time'
   *  Sum: '<S471>/Sum'
   */
  if (((uint8_T)EngineState_DataStore()) == 3) {
    BaseEngineController_LS_112_B.s471_Switch = rtb_motohawk_delta_time_b5 +
      TimeSinceRunTimer_DataStore();
  } else {
    BaseEngineController_LS_112_B.s471_Switch = 0.0;
  }

  /* End of Switch: '<S471>/Switch' */
  /* S-Function Block: <S435>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (RPM09In_DataStore()) = BaseEngineController_LS_112_B.s555_Sum1;
    (RPM09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_112_B.s555_Sum1, (RPM09IdxArr_DataStore()), 9,
       (RPM09Idx_DataStore()));
    BaseEngineController_LS_112_B.s435_motohawk_prelookup1 = (RPM09Idx_DataStore
      ());
  }

  /* S-Function Block: <S435>/motohawk_prelookup5 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (RPM17In_DataStore()) = BaseEngineController_LS_112_B.s555_Sum1;
    (RPM17Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_112_B.s555_Sum1, (RPM17IdxArr_DataStore()), 17,
       (RPM17Idx_DataStore()));
    BaseEngineController_LS_112_B.s435_Indexes = (RPM17Idx_DataStore());
  }

  /* S-Function Block: <S431>/motohawk_prelookup2 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (ECT07In_DataStore()) = BaseEngineController_LS_112_B.s665_Merge;
    (ECT07Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_112_B.s665_Merge, (ECT07IdxArr_DataStore()), 7,
       (ECT07Idx_DataStore()));
    BaseEngineController_LS_112_B.s431_motohawk_prelookup2 = (ECT07Idx_DataStore
      ());
  }

  /* S-Function Block: <S431>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (ECT09In_DataStore()) = BaseEngineController_LS_112_B.s665_Merge;
    (ECT09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_112_B.s665_Merge, (ECT09IdxArr_DataStore()), 9,
       (ECT09Idx_DataStore()));
    rtb_motohawk_prelookup1_hi = (ECT09Idx_DataStore());
  }

  /* S-Function Block: <S432>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (IAT07In_DataStore()) = BaseEngineController_LS_112_B.s683_Merge;
    (IAT07Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_112_B.s683_Merge, (IAT07IdxArr_DataStore()), 7,
       (IAT07Idx_DataStore()));
    BaseEngineController_LS_112_B.s432_motohawk_prelookup1 = (IAT07Idx_DataStore
      ());
  }

  /* S-Function Block: <S628>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_112_DWork.s628_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_cr = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S628>/Product' incorporates:
   *  MinMax: '<S628>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S628>/motohawk_calibration'
   */
  rtb_DataTypeConversion_cr /= (rtb_DataTypeConversion_cr >=
    (SysVoltFilterConst_DataStore())) || rtIsNaN((SysVoltFilterConst_DataStore()))
    ? rtb_DataTypeConversion_cr : (SysVoltFilterConst_DataStore());

  /* Logic: '<S564>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S564>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S564>/motohawk_fault_status4'
   */
  rtb_RelationalOperator5_h = (IsFaultActive(142) || IsFaultActive(143));

  /* Logic: '<S564>/Logical Operator6' */
  rtb_LogicalOperator6_p = !rtb_RelationalOperator5_h;

  /* Logic: '<S564>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S564>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S564>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_ou = (IsFaultSuspected(142) || IsFaultSuspected(143));

  /* S-Function Block: <S482>/motohawk_ain14 Resource: DRVP */
  BaseEngineController_LS_112_B.s482_motohawk_ain14 = DRVP_AnalogInput_Get();

  /* DataTypeConversion: '<S564>/Data Type Conversion' */
  rtb_DataTypeConversion_i = (real_T)
    BaseEngineController_LS_112_B.s482_motohawk_ain14;

  /* Product: '<S564>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S564>/motohawk_calibration4'
   */
  rtb_DataTypeConversion1_j = rtb_DataTypeConversion_i * (SysVoltGain_DataStore());

  /* Sum: '<S564>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S564>/motohawk_calibration5'
   */
  BaseEngineController_LS_112_B.s564_Sum1 = rtb_DataTypeConversion1_j +
    (SysVoltOfst_DataStore());

  /* UnitDelay: '<S564>/Unit Delay1' */
  rtb_UnitDelay1_k = BaseEngineController_LS_112_DWork.s564_UnitDelay1_DSTATE;

  /* If: '<S564>/If' incorporates:
   *  Logic: '<S564>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_p && rtb_LogicalOperator1_ou) {
    /* Outputs for IfAction SubSystem: '<S564>/If Action Subsystem' incorporates:
     *  ActionPort: '<S629>/Action Port'
     */
    BaseEngineController_LS_112_IfActionSubsystem(rtb_UnitDelay1_k, &rtb_Merge_g);

    /* End of Outputs for SubSystem: '<S564>/If Action Subsystem' */
  } else if (rtb_RelationalOperator5_h) {
    /* Outputs for IfAction SubSystem: '<S564>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S630>/Action Port'
     */
    BaseEngineController_LS_112_IfActionSubsystem((SysVoltDfltValue_DataStore()),
      &rtb_Merge_g);

    /* End of Outputs for SubSystem: '<S564>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S564>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S631>/Action Port'
     */
    BaseEngineController_LS_112_IfActionSubsystem
      (BaseEngineController_LS_112_B.s564_Sum1, &rtb_Merge_g);

    /* End of Outputs for SubSystem: '<S564>/If Action Subsystem2' */
  }

  /* End of If: '<S564>/If' */

  /* Sum: '<S633>/Sum1' incorporates:
   *  Constant: '<S633>/Constant'
   *  Product: '<S633>/Product'
   *  Product: '<S633>/Product1'
   *  Sum: '<S633>/Sum'
   *  UnitDelay: '<S633>/Unit Delay'
   */
  rtb_Sum1_mm = (1.0 - rtb_DataTypeConversion_cr) *
    BaseEngineController_LS_112_DWork.s633_UnitDelay_DSTATE + rtb_Merge_g *
    rtb_DataTypeConversion_cr;

  /* If: '<S632>/If' incorporates:
   *  Inport: '<S634>/In1'
   *  Inport: '<S635>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S632>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S632>/override_enable'
   */
  if ((SysVolt_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S632>/NewValue' incorporates:
     *  ActionPort: '<S634>/Action Port'
     */
    BaseEngineController_LS_112_B.s632_Merge = (SysVolt_new_DataStore());

    /* End of Outputs for SubSystem: '<S632>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S632>/OldValue' incorporates:
     *  ActionPort: '<S635>/Action Port'
     */
    BaseEngineController_LS_112_B.s632_Merge = rtb_Sum1_mm;

    /* End of Outputs for SubSystem: '<S632>/OldValue' */
  }

  /* End of If: '<S632>/If' */

  /* S-Function Block: <S436>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (SysVolt09In_DataStore()) = BaseEngineController_LS_112_B.s632_Merge;
    (SysVolt09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_112_B.s632_Merge, (SysVolt09IdxArr_DataStore()),
       9, (SysVolt09Idx_DataStore()));
    BaseEngineController_LS_112_B.s436_motohawk_prelookup =
      (SysVolt09Idx_DataStore());
  }

  /* S-Function Block: <S429>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (ACPres07In_DataStore()) = BaseEngineController_LS_112_B.s569_Merge;
    (ACPres07Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_112_B.s569_Merge, (ACPres07IdxArr_DataStore()), 7,
       (ACPres07Idx_DataStore()));
    BaseEngineController_LS_112_B.s429_motohawk_prelookup1 =
      (ACPres07Idx_DataStore());
  }

  /* S-Function Block: <S594>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_112_DWork.s594_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_cr = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S594>/Product' incorporates:
   *  MinMax: '<S594>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S594>/motohawk_calibration'
   */
  rtb_DataTypeConversion_cr /= (rtb_DataTypeConversion_cr >=
    (MAPFilterConst_DataStore())) || rtIsNaN((MAPFilterConst_DataStore())) ?
    rtb_DataTypeConversion_cr : (MAPFilterConst_DataStore());

  /* Logic: '<S559>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S559>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S559>/motohawk_fault_status4'
   */
  rtb_RelationalOperator5_h = (IsFaultActive(120) || IsFaultActive(121));

  /* Logic: '<S559>/Logical Operator6' */
  rtb_LogicalOperator6_p = !rtb_RelationalOperator5_h;

  /* Logic: '<S559>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S559>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S559>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_ou = (IsFaultSuspected(120) || IsFaultSuspected(121));

  /* S-Function (motohawk_sfun_trigger): '<S561>/motohawk_trigger5' */
  /* Enable for Trigger_FGND_MID_TDC_EVENT_9721p0004 */
  if (BaseEngineController_LS_112_DWork.s561_motohawk_trigger5_DWORK1 == 0) {
    BaseEngineController_LS_112_DWork.s561_motohawk_trigger5_DWORK1 = 1;
  }

  /* Product: '<S559>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S559>/motohawk_calibration4'
   */
  rtb_DataTypeConversion1_j = BaseEngineController_LS_112_B.s561_Merge *
    (MAPGain_DataStore());

  /* Sum: '<S559>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S559>/motohawk_calibration5'
   */
  BaseEngineController_LS_112_B.s559_Sum1 = rtb_DataTypeConversion1_j +
    (MAPOfst_DataStore());

  /* UnitDelay: '<S559>/Unit Delay1' */
  rtb_UnitDelay1_l0 = BaseEngineController_LS_112_DWork.s559_UnitDelay1_DSTATE;

  /* If: '<S559>/If' incorporates:
   *  Logic: '<S559>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_p && rtb_LogicalOperator1_ou) {
    /* Outputs for IfAction SubSystem: '<S559>/If Action Subsystem' incorporates:
     *  ActionPort: '<S595>/Action Port'
     */
    BaseEngineController_LS_112_IfActionSubsystem(rtb_UnitDelay1_l0,
      &rtb_Merge_e4);

    /* End of Outputs for SubSystem: '<S559>/If Action Subsystem' */
  } else if (rtb_RelationalOperator5_h) {
    /* Outputs for IfAction SubSystem: '<S559>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S596>/Action Port'
     */
    BaseEngineController_LS_112_IfActionSubsystem((MAPDfltValue_DataStore()),
      &rtb_Merge_e4);

    /* End of Outputs for SubSystem: '<S559>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S559>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S597>/Action Port'
     */
    BaseEngineController_LS_112_IfActionSubsystem
      (BaseEngineController_LS_112_B.s559_Sum1, &rtb_Merge_e4);

    /* End of Outputs for SubSystem: '<S559>/If Action Subsystem2' */
  }

  /* End of If: '<S559>/If' */

  /* Sum: '<S599>/Sum1' incorporates:
   *  Constant: '<S599>/Constant'
   *  Product: '<S599>/Product'
   *  Product: '<S599>/Product1'
   *  Sum: '<S599>/Sum'
   *  UnitDelay: '<S599>/Unit Delay'
   */
  rtb_Sum1_aw = (1.0 - rtb_DataTypeConversion_cr) *
    BaseEngineController_LS_112_DWork.s599_UnitDelay_DSTATE + rtb_Merge_e4 *
    rtb_DataTypeConversion_cr;

  /* If: '<S598>/If' incorporates:
   *  Inport: '<S600>/In1'
   *  Inport: '<S601>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S598>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S598>/override_enable'
   */
  if ((MAP_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S598>/NewValue' incorporates:
     *  ActionPort: '<S600>/Action Port'
     */
    BaseEngineController_LS_112_B.s598_Merge = (MAP_new_DataStore());

    /* End of Outputs for SubSystem: '<S598>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S598>/OldValue' incorporates:
     *  ActionPort: '<S601>/Action Port'
     */
    BaseEngineController_LS_112_B.s598_Merge = rtb_Sum1_aw;

    /* End of Outputs for SubSystem: '<S598>/OldValue' */
  }

  /* End of If: '<S598>/If' */

  /* S-Function Block: <S433>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (MAP05In_DataStore()) = BaseEngineController_LS_112_B.s598_Merge;
    (MAP05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_112_B.s598_Merge, (MAP05IdxArr_DataStore()), 5,
       (MAP05Idx_DataStore()));
    rtb_motohawk_prelookup_d = (MAP05Idx_DataStore());
  }

  /* S-Function Block: <S433>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (MAP09In_DataStore()) = BaseEngineController_LS_112_B.s598_Merge;
    (MAP09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_112_B.s598_Merge, (MAP09IdxArr_DataStore()), 9,
       (MAP09Idx_DataStore()));
    BaseEngineController_LS_112_B.s433_motohawk_prelookup1 = (MAP09Idx_DataStore
      ());
  }

  /* S-Function Block: <S433>/motohawk_prelookup5 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (MAP17In_DataStore()) = BaseEngineController_LS_112_B.s598_Merge;
    (MAP17Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_112_B.s598_Merge, (MAP17IdxArr_DataStore()), 17,
       (MAP17Idx_DataStore()));
    BaseEngineController_LS_112_B.s433_Indexes = (MAP17Idx_DataStore());
  }

  /* S-Function Block: <S438>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (VSPD09In_DataStore()) = BaseEngineController_LS_112_B.s454_Switch2;
    (VSPD09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_112_B.s454_Switch2, (VSPD09IdxArr_DataStore()), 9,
       (VSPD09Idx_DataStore()));
    BaseEngineController_LS_112_B.s438_motohawk_prelookup = (VSPD09Idx_DataStore
      ());
  }

  /* S-Function Block: <S438>/motohawk_prelookup2 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (VSPD07In_DataStore()) = BaseEngineController_LS_112_B.s454_Switch2;
    (VSPD07Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_112_B.s454_Switch2, (VSPD07IdxArr_DataStore()), 7,
       (VSPD07Idx_DataStore()));
    BaseEngineController_LS_112_B.s438_motohawk_prelookup2 =
      (VSPD07Idx_DataStore());
  }

  /* S-Function Block: <S430>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (CAT05In_DataStore()) = BaseEngineController_LS_112_B.s656_Merge;
    (CAT05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_112_B.s656_Merge, (CAT05IdxArr_DataStore()), 5,
       (CAT05Idx_DataStore()));
    BaseEngineController_LS_112_B.s430_motohawk_prelookup = (CAT05Idx_DataStore());
  }

  /* S-Function Block: <S434>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (OXY05In_DataStore()) = BaseEngineController_LS_112_B.s577_Merge;
    (OXY05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_112_B.s577_Merge, (OXY05IdxArr_DataStore()), 5,
       (OXY05Idx_DataStore()));
    BaseEngineController_LS_112_B.s434_motohawk_prelookup = (OXY05Idx_DataStore());
  }

  /* S-Function (motohawk_sfun_data_read): '<S395>/motohawk_data_read1' */
  BaseEngineController_LS_112_B.s395_motohawk_data_read1 = EngineState_DataStore
    ();

  /* S-Function Block: <S395>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_112_DWork.s395_motohawk_delta_time_DWORK1, NULL);
    BaseEngineController_LS_112_B.s395_motohawk_delta_time = ((real_T) delta) *
      0.000001;
  }

  /* Stateflow: '<S395>/Baro Stall State Delay' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S395>/motohawk_calibration'
   */

  /* Gateway: Foreground/Control/VirtualSensors/AirCalcs/Baro Stall State Delay */
  /* During: Foreground/Control/VirtualSensors/AirCalcs/Baro Stall State Delay */
  switch
    (BaseEngineController_LS_112_DWork.s401_is_c19_BaseEngineController_LS_112)
  {
   case BaseEngineController_LS_112_IN_CrankRun:
    /* During 'CrankRun': '<S401>:2' */
    if (BaseEngineController_LS_112_B.s395_motohawk_data_read1 == 1) {
      /* Transition: '<S401>:6' */
      BaseEngineController_LS_112_DWork.s401_is_c19_BaseEngineController_LS_112 =
        BaseEngineController_LS_112_IN_StallDelay;

      /* Entry 'StallDelay': '<S401>:3' */
      BaseEngineController_LS_112_B.s401_Enable = FALSE;
      BaseEngineController_LS_112_B.s401_Timer = 0.0;
      BaseEngineController_LS_112_DWork.s401_TOld = 0.0;
    }
    break;

   case BaseEngineController_LS_112_IN_Stall:
    /* During 'Stall': '<S401>:1' */
    if (BaseEngineController_LS_112_B.s395_motohawk_data_read1 > 1) {
      /* Transition: '<S401>:5' */
      BaseEngineController_LS_112_DWork.s401_is_c19_BaseEngineController_LS_112 =
        BaseEngineController_LS_112_IN_CrankRun;

      /* Entry 'CrankRun': '<S401>:2' */
      BaseEngineController_LS_112_B.s401_Enable = FALSE;
    }
    break;

   case BaseEngineController_LS_112_IN_StallDelay:
    /* During 'StallDelay': '<S401>:3' */
    if (BaseEngineController_LS_112_B.s395_motohawk_data_read1 > 1) {
      /* Transition: '<S401>:8' */
      BaseEngineController_LS_112_DWork.s401_is_c19_BaseEngineController_LS_112 =
        BaseEngineController_LS_112_IN_CrankRun;

      /* Entry 'CrankRun': '<S401>:2' */
      BaseEngineController_LS_112_B.s401_Enable = FALSE;
    } else if (((BaseEngineController_LS_112_B.s395_motohawk_data_read1 == 1) &
                (BaseEngineController_LS_112_B.s401_Timer >
                 (BaroRunStallDelay_DataStore()))) != 0) {
      /* Transition: '<S401>:7' */
      BaseEngineController_LS_112_DWork.s401_is_c19_BaseEngineController_LS_112 =
        BaseEngineController_LS_112_IN_Stall;

      /* Entry 'Stall': '<S401>:1' */
      BaseEngineController_LS_112_B.s401_Enable = TRUE;
    } else {
      BaseEngineController_LS_112_B.s401_Timer =
        BaseEngineController_LS_112_DWork.s401_TOld +
        BaseEngineController_LS_112_B.s395_motohawk_delta_time;
      BaseEngineController_LS_112_DWork.s401_TOld =
        BaseEngineController_LS_112_B.s401_Timer;
    }
    break;

   default:
    /* Transition: '<S401>:4' */
    BaseEngineController_LS_112_DWork.s401_is_c19_BaseEngineController_LS_112 =
      BaseEngineController_LS_112_IN_Stall;

    /* Entry 'Stall': '<S401>:1' */
    BaseEngineController_LS_112_B.s401_Enable = TRUE;
    break;
  }

  /* End of Stateflow: '<S395>/Baro Stall State Delay' */
  /* RelationalOperator: '<S403>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S403>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S403>/motohawk_data_read'
   */
  rtb_LogicalOperator6_p = (TPSFinal_DataStore() >= (BaroLearn_TPSPos_DataStore()));

  /* Logic: '<S560>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S560>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S560>/motohawk_fault_status4'
   */
  rtb_RelationalOperator5_h = (IsFaultActive(122) || IsFaultActive(123));

  /* Logic: '<S560>/Logical Operator6' */
  rtb_LogicalOperator1_ou = !rtb_RelationalOperator5_h;

  /* Logic: '<S560>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S560>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S560>/motohawk_fault_status3'
   */
  rtb_Switch1_m = (IsFaultSuspected(122) || IsFaultSuspected(123));

  /* S-Function Block: <S482>/motohawk_ain_read1 Resource: MAPSensorPin */
  BaseEngineController_LS_112_B.s482_motohawk_ain_read1 =
    MAPSensorPin_AnalogInput_Get();

  /* DataTypeConversion: '<S560>/Data Type Conversion' */
  rtb_DataTypeConversion_cr = (real_T)
    BaseEngineController_LS_112_B.s482_motohawk_ain_read1;

  /* Product: '<S560>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S560>/motohawk_calibration4'
   */
  rtb_DataTypeConversion1_j = rtb_DataTypeConversion_cr * (MAPTimeGain_DataStore
    ());

  /* Sum: '<S560>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S560>/motohawk_calibration5'
   */
  BaseEngineController_LS_112_B.s560_Sum1 = rtb_DataTypeConversion1_j +
    (MAPTimeOfst_DataStore());

  /* UnitDelay: '<S560>/Unit Delay1' */
  rtb_UnitDelay1_kq = BaseEngineController_LS_112_DWork.s560_UnitDelay1_DSTATE;

  /* If: '<S560>/If' incorporates:
   *  Logic: '<S560>/Logical Operator5'
   */
  if (rtb_LogicalOperator1_ou && rtb_Switch1_m) {
    /* Outputs for IfAction SubSystem: '<S560>/If Action Subsystem' incorporates:
     *  ActionPort: '<S603>/Action Port'
     */
    BaseEngineController_LS_112_IfActionSubsystem(rtb_UnitDelay1_kq,
      &rtb_Merge_j);

    /* End of Outputs for SubSystem: '<S560>/If Action Subsystem' */
  } else if (rtb_RelationalOperator5_h) {
    /* Outputs for IfAction SubSystem: '<S560>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S604>/Action Port'
     */
    BaseEngineController_LS_112_IfActionSubsystem((MAPTimeDfltValue_DataStore()),
      &rtb_Merge_j);

    /* End of Outputs for SubSystem: '<S560>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S560>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S605>/Action Port'
     */
    BaseEngineController_LS_112_IfActionSubsystem
      (BaseEngineController_LS_112_B.s560_Sum1, &rtb_Merge_j);

    /* End of Outputs for SubSystem: '<S560>/If Action Subsystem2' */
  }

  /* End of If: '<S560>/If' */

  /* Logic: '<S403>/Logical Operator' incorporates:
   *  Constant: '<S407>/Constant'
   *  RelationalOperator: '<S403>/Relational Operator1'
   *  RelationalOperator: '<S407>/Compare'
   *  S-Function (motohawk_sfun_calibration): '<S403>/motohawk_calibration2'
   */
  rtb_RelationalOperator5_h = (rtb_LogicalOperator6_p && (rtb_Merge_j >=
    (BaroLearn_MAP_DataStore())) &&
    (BaseEngineController_LS_112_B.s395_motohawk_data_read1 > 1));

  /* S-Function Block: <S408>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_112_DWork.s408_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_d = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S408>/Switch' incorporates:
   *  Constant: '<S408>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S408>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S408>/motohawk_delta_time'
   *  Sum: '<S408>/Sum'
   */
  if (rtb_RelationalOperator5_h) {
    rtb_Switch_k = rtb_motohawk_delta_time_d + BaroLearnTmr_DataStore();
  } else {
    rtb_Switch_k = 0.0;
  }

  /* End of Switch: '<S408>/Switch' */
  /* Product: '<S403>/Product' incorporates:
   *  RelationalOperator: '<S403>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S403>/motohawk_calibration'
   */
  rtb_Product_ku = (uint16_T)(rtb_RelationalOperator5_h ? rtb_Switch_k >=
    (BaroLearn_Tm_DataStore()) : 0);

  /* DataTypeConversion: '<S403>/Data Type Conversion' */
  rtb_RelationalOperator5_h = (rtb_Product_ku != 0);

  /* Outputs for Enabled SubSystem: '<S395>/Capture Signal At Startup' incorporates:
   *  EnablePort: '<S402>/Enable'
   */
  /* Logic: '<S395>/Logical Operator' */
  if (BaseEngineController_LS_112_B.s401_Enable || rtb_RelationalOperator5_h) {
    if (!BaseEngineController_LS_112_DWork.s395_CaptureSignalAtStartup_MODE) {
      /* InitializeConditions for UnitDelay: '<S402>/Unit Delay' */
      BaseEngineController_LS_112_DWork.s402_UnitDelay_DSTATE = 0;
      BaseEngineController_LS_112_DWork.s395_CaptureSignalAtStartup_MODE = TRUE;
    }

    /* Sum: '<S402>/Add' incorporates:
     *  Constant: '<S402>/TwoSampleBuffer ToIgnore'
     *  S-Function (motohawk_sfun_calibration): '<S402>/motohawk_calibration'
     */
    rtb_Add_b = (int8_T)(((int8_T)(BARO_Count_DataStore())) + 2);

    /* Sum: '<S402>/Sum' incorporates:
     *  Constant: '<S402>/Constant'
     *  UnitDelay: '<S402>/Unit Delay'
     */
    rtb_Sum_o3 = (int8_T)
      (BaseEngineController_LS_112_DWork.s402_UnitDelay_DSTATE + 1);

    /* RelationalOperator: '<S402>/Relational Operator' */
    rtb_LogicalOperator6_p = (rtb_Sum_o3 <= rtb_Add_b);

    /* Switch: '<S402>/Switch' */
    if (rtb_LogicalOperator6_p) {
      rtb_Add_b = rtb_Sum_o3;
    }

    /* End of Switch: '<S402>/Switch' */

    /* Sum: '<S402>/Add1' incorporates:
     *  Constant: '<S402>/TwoSampleBuffer ToIgnore'
     */
    rtb_Add1_e = (int8_T)(rtb_Add_b - 2);

    /* Logic: '<S402>/Logical Operator' incorporates:
     *  Constant: '<S402>/TwoSampleBuffer ToIgnore'
     *  RelationalOperator: '<S402>/Relational Operator1'
     */
    rtb_LogicalOperator_i = (rtb_LogicalOperator6_p && (rtb_Sum_o3 > 2));

    /* Outputs for Enabled SubSystem: '<S402>/Collect Average' */
    BaseEngineController_LS_112_CollectAverage(rtb_LogicalOperator_i, rtb_Add1_e,
      rtb_Merge_j, &BaseEngineController_LS_112_B.s402_CollectAverage,
      &BaseEngineController_LS_112_DWork.s402_CollectAverage);

    /* End of Outputs for SubSystem: '<S402>/Collect Average' */

    /* Update for UnitDelay: '<S402>/Unit Delay' */
    BaseEngineController_LS_112_DWork.s402_UnitDelay_DSTATE = rtb_Add_b;
  } else {
    if (BaseEngineController_LS_112_DWork.s395_CaptureSignalAtStartup_MODE) {
      /* Disable for Enabled SubSystem: '<S402>/Collect Average' */
      BaseEngineController_LS_112_CollectAverage_Disable
        (&BaseEngineController_LS_112_DWork.s402_CollectAverage);

      /* End of Disable for SubSystem: '<S402>/Collect Average' */
      BaseEngineController_LS_112_DWork.s395_CaptureSignalAtStartup_MODE = FALSE;
    }
  }

  /* End of Logic: '<S395>/Logical Operator' */
  /* End of Outputs for SubSystem: '<S395>/Capture Signal At Startup' */

  /* If: '<S405>/If' incorporates:
   *  Inport: '<S413>/In1'
   *  Inport: '<S414>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S405>/override_enable'
   *  UnitDelay: '<S405>/Unit Delay'
   */
  if ((BARO_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S405>/NewValue' incorporates:
     *  ActionPort: '<S413>/Action Port'
     */
    rtb_Merge_gh = BaseEngineController_LS_112_DWork.s405_UnitDelay_DSTATE;

    /* End of Outputs for SubSystem: '<S405>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S405>/OldValue' incorporates:
     *  ActionPort: '<S414>/Action Port'
     */
    rtb_Merge_gh =
      BaseEngineController_LS_112_B.s402_CollectAverage.s406_Product;

    /* End of Outputs for SubSystem: '<S405>/OldValue' */
  }

  /* End of If: '<S405>/If' */

  /* Sum: '<S405>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S405>/offset'
   */
  BaseEngineController_LS_112_B.s405_Sum = rtb_Merge_gh + (BARO_offset_DataStore
    ());

  /* S-Function Block: <S404>/motohawk_prelookup2 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (VEMapIn_DataStore()) = BaseEngineController_LS_112_B.s598_Merge;
    (VEMapIdx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_112_B.s598_Merge, (VEMapIdxArr_DataStore()), 17,
       (VEMapIdx_DataStore()));
    rtb_motohawk_prelookup2_g = (VEMapIdx_DataStore());
  }

  /* S-Function Block: <S404>/motohawk_interpolation_2d */
  {
    extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
      real_T *map_data, uint32_T row_sz, uint32_T col_sz);
    rtb_motohawk_interpolation_2d_a = TableInterpolation2D_real_T
      (rtb_motohawk_prelookup2_g, BaseEngineController_LS_112_B.s435_Indexes,
       (real_T *) ((VolEffMap_DataStore())), 17, 17);
    (VolEff_DataStore()) = rtb_motohawk_interpolation_2d_a;
  }

  /* S-Function Block: <S404>/motohawk_interpolation_2d2 */
  {
    extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
      real_T *map_data, uint32_T row_sz, uint32_T col_sz);
    BaseEngineController_LS_112_B.s404_motohawk_interpolation_2d2 =
      TableInterpolation2D_real_T(rtb_motohawk_prelookup2_g,
      BaseEngineController_LS_112_B.s435_Indexes, (real_T *)
      ((VolEffAdaptMap_DataStore())), 17, 17);
    (VolEffAdapt_DataStore()) =
      BaseEngineController_LS_112_B.s404_motohawk_interpolation_2d2;
  }

  /* Sum: '<S404>/Sum' incorporates:
   *  S-Function (motohawk_sfun_interpolation_2d): '<S404>/motohawk_interpolation_2d'
   *  S-Function (motohawk_sfun_prelookup): '<S404>/motohawk_prelookup2'
   */
  BaseEngineController_LS_112_B.s404_Sum = rtb_motohawk_interpolation_2d_a +
    BaseEngineController_LS_112_B.s404_motohawk_interpolation_2d2;

  /* Saturate: '<S395>/Saturation1' */
  rtb_Saturation1_g = BaseEngineController_LS_112_B.s405_Sum >= 1.0 ?
    BaseEngineController_LS_112_B.s405_Sum : 1.0;

  /* S-Function Block: <S404>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (BARO09Idx_DataStore()) = TablePrelookup_real_T(rtb_Saturation1_g,
      (BARO09IdxArr_DataStore()), 9, (BARO09Idx_DataStore()));
    rtb_motohawk_prelookup1_a4 = (BARO09Idx_DataStore());
  }

  /* S-Function Block: <S404>/motohawk_interpolation_1d1 */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_motohawk_interpolation_1d1_eo = TableInterpolation1D_real_T
      (rtb_motohawk_prelookup1_a4, (real_T *) ((VEBaroCorrTbl_DataStore())), 9);
    (VEBaroCorr_DataStore()) = rtb_motohawk_interpolation_1d1_eo;
  }

  /* S-Function Block: <S432>/motohawk_prelookup2 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (IAT17In_DataStore()) = BaseEngineController_LS_112_B.s683_Merge;
    (IAT17Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_112_B.s683_Merge, (IAT17IdxArr_DataStore()), 17,
       (IAT17Idx_DataStore()));
    rtb_motohawk_prelookup2_d = (IAT17Idx_DataStore());
  }

  /* S-Function Block: <S404>/motohawk_interpolation_2d1 */
  {
    extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
      real_T *map_data, uint32_T row_sz, uint32_T col_sz);
    rtb_motohawk_interpolation_2d1_h = TableInterpolation2D_real_T
      (rtb_motohawk_prelookup2_d, rtb_motohawk_prelookup1_hi, (real_T *)
       ((VETempCorrMap_DataStore())), 17, 9);
    (VETempCorr_DataStore()) = rtb_motohawk_interpolation_2d1_h;
  }

  /* Product: '<S404>/Nominal Air Flow Rate' incorporates:
   *  Constant: '<S404>/Gas Const [J//kg-K]'
   *  Constant: '<S404>/Units Equivalency Factor'
   *  DataTypeConversion: '<S404>/Data Type Conversion'
   *  Fcn: '<S410>/C to K'
   *  S-Function (motohawk_sfun_data_read): '<S404>/Cylinder Swept Volume [cm3]'
   *  S-Function (motohawk_sfun_data_read): '<S404>/Number of Combustion Events Per Revolution'
   *  S-Function (motohawk_sfun_interpolation_1d): '<S404>/motohawk_interpolation_1d1'
   *  S-Function (motohawk_sfun_interpolation_2d): '<S404>/motohawk_interpolation_2d1'
   *  S-Function (motohawk_sfun_prelookup): '<S404>/motohawk_prelookup1'
   *  S-Function (motohawk_sfun_prelookup): '<S431>/motohawk_prelookup1'
   *  S-Function (motohawk_sfun_prelookup): '<S432>/motohawk_prelookup2'
   *  Saturate: '<S395>/Saturation1'
   */
  BaseEngineController_LS_112_B.s404_NominalAirFlowRate =
    BaseEngineController_LS_112_B.s555_Sum1 *
    BaseEngineController_LS_112_B.s598_Merge * rtb_motohawk_interpolation_1d1_eo
    * rtb_motohawk_interpolation_2d1_h * CylSweptVol_DataStore() * (real_T)
    ((uint8_T)CombEventsPerRev_DataStore()) /
    (BaseEngineController_LS_112_B.s683_Merge + 273.2) / 60.0 / 287.0;

  /* Product: '<S404>/Model Air Mass Flow Rate' */
  BaseEngineController_LS_112_B.s404_ModelAirMassFlowRate =
    BaseEngineController_LS_112_B.s404_Sum *
    BaseEngineController_LS_112_B.s404_NominalAirFlowRate;

  /* S-Function Block: <S521>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_112_DWork.s521_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_hg = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S521>/Product' incorporates:
   *  MinMax: '<S521>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S521>/motohawk_calibration'
   */
  rtb_DataTypeConversion_hg /= (rtb_DataTypeConversion_hg >=
    (MAFFiltConst_DataStore())) || rtIsNaN((MAFFiltConst_DataStore())) ?
    rtb_DataTypeConversion_hg : (MAFFiltConst_DataStore());

  /* Logic: '<S508>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S508>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S508>/motohawk_fault_status4'
   */
  rtb_RelationalOperator5_h = (IsFaultActive(118) || IsFaultActive(119));

  /* Logic: '<S508>/Logical Operator6' */
  rtb_LogicalOperator6_p = !rtb_RelationalOperator5_h;

  /* Logic: '<S508>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S508>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S508>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_ou = (IsFaultSuspected(118) || IsFaultSuspected(119));

  /* S-Function (motohawk_sfun_freq_in): '<S480>/motohawk_frequency_in2' */
  SPD2_FrequencyInput_InstantFrequencyWithDutyCycle_Get(&rtb_DataTypeConversion6,
    &rtb_DataTypeConversion2_f4);

  /* DataTypeConversion: '<S480>/Data Type Conversion' */
  rtb_Switch_c = (real_T)rtb_DataTypeConversion6;

  /* Gain: '<S480>/Gain' */
  BaseEngineController_LS_112_B.s480_Gain = 0.01 * rtb_Switch_c;

  /* S-Function Block: <S526>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (MAFIdx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_112_B.s480_Gain, (MAFIdxArr_DataStore()), 13,
       (MAFIdx_DataStore()));
    rtb_motohawk_prelookup_dw = (MAFIdx_DataStore());
  }

  /* S-Function Block: <S526>/motohawk_interpolation_1d */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    BaseEngineController_LS_112_B.s526_motohawk_interpolation_1d =
      TableInterpolation1D_real_T(rtb_motohawk_prelookup_dw, (real_T *)
      ((MAFTbl_DataStore())), 13);
  }

  /* UnitDelay: '<S508>/Unit Delay' */
  rtb_UnitDelay_hu = BaseEngineController_LS_112_DWork.s508_UnitDelay_DSTATE;

  /* If: '<S508>/If' incorporates:
   *  Logic: '<S508>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_p && rtb_LogicalOperator1_ou) {
    /* Outputs for IfAction SubSystem: '<S508>/If Action Subsystem' incorporates:
     *  ActionPort: '<S522>/Action Port'
     */
    BaseEngineController_LS_112_IfActionSubsystem(rtb_UnitDelay_hu,
      &rtb_Merge_ef);

    /* End of Outputs for SubSystem: '<S508>/If Action Subsystem' */
  } else if (rtb_RelationalOperator5_h) {
    /* Outputs for IfAction SubSystem: '<S508>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S523>/Action Port'
     */
    BaseEngineController_LS_112_IfActionSubsystem((MAFDefault_DataStore()),
      &rtb_Merge_ef);

    /* End of Outputs for SubSystem: '<S508>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S508>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S524>/Action Port'
     */
    BaseEngineController_LS_112_IfActionSubsystem
      (BaseEngineController_LS_112_B.s526_motohawk_interpolation_1d,
       &rtb_Merge_ef);

    /* End of Outputs for SubSystem: '<S508>/If Action Subsystem2' */
  }

  /* End of If: '<S508>/If' */

  /* Sum: '<S527>/Sum1' incorporates:
   *  Constant: '<S527>/Constant'
   *  Product: '<S527>/Product'
   *  Product: '<S527>/Product1'
   *  Sum: '<S527>/Sum'
   *  UnitDelay: '<S527>/Unit Delay'
   */
  rtb_Sum1_ns = (1.0 - rtb_DataTypeConversion_hg) *
    BaseEngineController_LS_112_DWork.s527_UnitDelay_DSTATE + rtb_Merge_ef *
    rtb_DataTypeConversion_hg;

  /* If: '<S525>/If' incorporates:
   *  Inport: '<S528>/In1'
   *  Inport: '<S529>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S525>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S525>/override_enable'
   */
  if ((MAF_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S525>/NewValue' incorporates:
     *  ActionPort: '<S528>/Action Port'
     */
    BaseEngineController_LS_112_B.s525_Merge = (MAF_new_DataStore());

    /* End of Outputs for SubSystem: '<S525>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S525>/OldValue' incorporates:
     *  ActionPort: '<S529>/Action Port'
     */
    BaseEngineController_LS_112_B.s525_Merge = rtb_Sum1_ns;

    /* End of Outputs for SubSystem: '<S525>/OldValue' */
  }

  /* End of If: '<S525>/If' */

  /* MultiPortSwitch: '<S404>/Multiport Switch' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S404>/motohawk_calibration1'
   */
  if (((uint8_T)(MAF_Source_DataStore())) == 0) {
    BaseEngineController_LS_112_B.s404_MultiportSwitch =
      BaseEngineController_LS_112_B.s404_ModelAirMassFlowRate;
  } else {
    BaseEngineController_LS_112_B.s404_MultiportSwitch =
      BaseEngineController_LS_112_B.s525_Merge;
  }

  /* End of MultiPortSwitch: '<S404>/Multiport Switch' */
  /* S-Function Block: <S421>/motohawk_delta_time */
  rtb_Switch_c = 0.005;

  /* UnitDelay: '<S421>/Unit Delay2' */
  rtb_DataTypeConversion1_j =
    BaseEngineController_LS_112_DWork.s421_UnitDelay2_DSTATE;

  /* RelationalOperator: '<S421>/Relational Operator4' incorporates:
   *  UnitDelay: '<S421>/Unit Delay2'
   */
  BaseEngineController_LS_112_B.s421_RelationalOperator4 =
    ((BaseEngineController_LS_112_DWork.s421_UnitDelay2_DSTATE <
      BaseEngineController_LS_112_B.s555_Sum1));

  /* Outputs for Enabled SubSystem: '<S421>/IncreasingFilter' incorporates:
   *  EnablePort: '<S425>/Enable'
   */
  if (BaseEngineController_LS_112_B.s421_RelationalOperator4) {
    /* S-Function (motohawk_sfun_calibration): '<S425>/motohawk_calibration1' */
    BaseEngineController_LS_112_B.s421_Merge = (SSRPMIncFiltC_DataStore());
  }

  /* End of Outputs for SubSystem: '<S421>/IncreasingFilter' */

  /* Outputs for Enabled SubSystem: '<S421>/DecreasingFilter' incorporates:
   *  EnablePort: '<S423>/Enable'
   */
  /* RelationalOperator: '<S421>/Relational Operator3' */
  if (rtb_DataTypeConversion1_j > BaseEngineController_LS_112_B.s555_Sum1) {
    /* S-Function (motohawk_sfun_calibration): '<S423>/motohawk_calibration2' */
    BaseEngineController_LS_112_B.s421_Merge = (SSRPMDecFiltC_DataStore());
  }

  /* End of RelationalOperator: '<S421>/Relational Operator3' */
  /* End of Outputs for SubSystem: '<S421>/DecreasingFilter' */

  /* Product: '<S421>/Product' incorporates:
   *  MinMax: '<S421>/MinMax'
   */
  rtb_Switch_c /= (rtb_Switch_c >= BaseEngineController_LS_112_B.s421_Merge) ||
    rtIsNaN(BaseEngineController_LS_112_B.s421_Merge) ? rtb_Switch_c :
    BaseEngineController_LS_112_B.s421_Merge;

  /* Sum: '<S424>/Sum1' incorporates:
   *  Constant: '<S424>/Constant'
   *  Product: '<S424>/Product'
   *  Product: '<S424>/Product1'
   *  Sum: '<S424>/Sum'
   *  UnitDelay: '<S424>/Unit Delay'
   */
  BaseEngineController_LS_112_B.s424_Sum1 = (1.0 - rtb_Switch_c) *
    BaseEngineController_LS_112_DWork.s424_UnitDelay_DSTATE +
    BaseEngineController_LS_112_B.s555_Sum1 * rtb_Switch_c;

  /* Sum: '<S420>/Sum1' */
  rtb_Switch_c = BaseEngineController_LS_112_B.s555_Sum1 -
    BaseEngineController_LS_112_B.s424_Sum1;

  /* Abs: '<S420>/Abs1' */
  rtb_Switch_c = fabs(rtb_Switch_c);

  /* RelationalOperator: '<S420>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S420>/Steady-state RPM Tolerance [RPM]'
   */
  rtb_LogicalOperator6_p = (rtb_Switch_c <= (SSRPMTol_DataStore()));

  /* RelationalOperator: '<S420>/Relational Operator2' incorporates:
   *  Constant: '<S420>/Constant'
   */
  rtb_LogicalOperator1_ou = (BaseEngineController_LS_112_B.s555_Sum1 > 0.0);

  /* S-Function Block: <S422>/motohawk_delta_time */
  rtb_Switch_c = 0.005;

  /* UnitDelay: '<S422>/Unit Delay2' */
  rtb_DataTypeConversion1_j =
    BaseEngineController_LS_112_DWork.s422_UnitDelay2_DSTATE;

  /* RelationalOperator: '<S422>/Relational Operator4' incorporates:
   *  UnitDelay: '<S422>/Unit Delay2'
   */
  BaseEngineController_LS_112_B.s422_RelationalOperator4 =
    ((BaseEngineController_LS_112_DWork.s422_UnitDelay2_DSTATE <
      BaseEngineController_LS_112_B.s598_Merge));

  /* Outputs for Enabled SubSystem: '<S422>/IncreasingFilter' incorporates:
   *  EnablePort: '<S428>/Enable'
   */
  if (BaseEngineController_LS_112_B.s422_RelationalOperator4) {
    /* S-Function (motohawk_sfun_calibration): '<S428>/motohawk_calibration1' */
    BaseEngineController_LS_112_B.s422_Merge = (SSLoadIncFiltC_DataStore());
  }

  /* End of Outputs for SubSystem: '<S422>/IncreasingFilter' */

  /* Outputs for Enabled SubSystem: '<S422>/DecreasingFilter' incorporates:
   *  EnablePort: '<S426>/Enable'
   */
  /* RelationalOperator: '<S422>/Relational Operator3' */
  if (rtb_DataTypeConversion1_j > BaseEngineController_LS_112_B.s598_Merge) {
    /* S-Function (motohawk_sfun_calibration): '<S426>/motohawk_calibration2' */
    BaseEngineController_LS_112_B.s422_Merge = (SSLoadDecFiltC_DataStore());
  }

  /* End of RelationalOperator: '<S422>/Relational Operator3' */
  /* End of Outputs for SubSystem: '<S422>/DecreasingFilter' */

  /* Product: '<S422>/Product' incorporates:
   *  MinMax: '<S422>/MinMax'
   */
  rtb_Switch_c /= (rtb_Switch_c >= BaseEngineController_LS_112_B.s422_Merge) ||
    rtIsNaN(BaseEngineController_LS_112_B.s422_Merge) ? rtb_Switch_c :
    BaseEngineController_LS_112_B.s422_Merge;

  /* Sum: '<S427>/Sum1' incorporates:
   *  Constant: '<S427>/Constant'
   *  Product: '<S427>/Product'
   *  Product: '<S427>/Product1'
   *  Sum: '<S427>/Sum'
   *  UnitDelay: '<S427>/Unit Delay'
   */
  BaseEngineController_LS_112_B.s427_Sum1 = (1.0 - rtb_Switch_c) *
    BaseEngineController_LS_112_DWork.s427_UnitDelay_DSTATE +
    BaseEngineController_LS_112_B.s598_Merge * rtb_Switch_c;

  /* Sum: '<S420>/Sum' */
  rtb_Switch_c = BaseEngineController_LS_112_B.s598_Merge -
    BaseEngineController_LS_112_B.s427_Sum1;

  /* Abs: '<S420>/Abs' */
  rtb_Switch_c = fabs(rtb_Switch_c);

  /* Logic: '<S420>/Logical Operator' incorporates:
   *  RelationalOperator: '<S420>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S420>/Steady-state Torque Tolerance [N.m]'
   */
  BaseEngineController_LS_112_B.s420_LogicalOperator = ((rtb_LogicalOperator6_p &&
    rtb_LogicalOperator1_ou && (rtb_Switch_c <= (SSLoadTol_DataStore()))));

  /* S-Function Block: <S476>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (MAFPort05In_DataStore()) =
      BaseEngineController_LS_112_B.s404_MultiportSwitch;
    (MAFPort05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_112_B.s404_MultiportSwitch,
       (MAFPort05IdxArr_DataStore()), 5, (MAFPort05Idx_DataStore()));
    rtb_motohawk_prelookup_k = (MAFPort05Idx_DataStore());
  }

  /* RelationalOperator: '<S449>/RelOp' incorporates:
   *  Constant: '<S449>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S399>/motohawk_data_read'
   */
  rtb_RelOp_fa = (((uint8_T)EngineState_DataStore()) == 1);

  /* Outputs for Enabled SubSystem: '<S399>/Capture ECT At Startup' incorporates:
   *  EnablePort: '<S441>/Enable'
   */
  if (rtb_RelOp_fa) {
    if (!BaseEngineController_LS_112_DWork.s399_CaptureECTAtStartup_MODE) {
      /* InitializeConditions for UnitDelay: '<S441>/Unit Delay' */
      BaseEngineController_LS_112_DWork.s441_UnitDelay_DSTATE = 0;
      BaseEngineController_LS_112_DWork.s399_CaptureECTAtStartup_MODE = TRUE;
    }

    /* Sum: '<S441>/Sum' incorporates:
     *  Constant: '<S441>/Constant'
     *  UnitDelay: '<S441>/Unit Delay'
     */
    rtb_Add_b = (int8_T)(BaseEngineController_LS_112_DWork.s441_UnitDelay_DSTATE
                         + 1);

    /* Sum: '<S441>/Add' incorporates:
     *  Constant: '<S441>/TwoSampleBuffer ToIgnore'
     *  S-Function (motohawk_sfun_calibration): '<S441>/motohawk_calibration'
     */
    rtb_Sum_o3 = (int8_T)(((int8_T)(ECT_KeyUp_Count_DataStore())) + 2);

    /* RelationalOperator: '<S441>/Relational Operator' */
    rtb_LogicalOperator6_p = (rtb_Add_b <= rtb_Sum_o3);

    /* Switch: '<S441>/Switch' */
    if (rtb_LogicalOperator6_p) {
      rtb_Sum_o3 = rtb_Add_b;
    }

    /* End of Switch: '<S441>/Switch' */

    /* Sum: '<S441>/Add1' incorporates:
     *  Constant: '<S441>/TwoSampleBuffer ToIgnore'
     */
    rtb_Add1_bj = (int8_T)(rtb_Sum_o3 - 2);

    /* Logic: '<S441>/Logical Operator' incorporates:
     *  Constant: '<S441>/TwoSampleBuffer ToIgnore'
     *  RelationalOperator: '<S441>/Relational Operator1'
     */
    rtb_LogicalOperator_lq = (rtb_LogicalOperator6_p && (rtb_Add_b > 2));

    /* Outputs for Enabled SubSystem: '<S441>/Collect Average' */
    BaseEngineController_LS_112_CollectAverage(rtb_LogicalOperator_lq,
      rtb_Add1_bj, BaseEngineController_LS_112_B.s649_Merge,
      &BaseEngineController_LS_112_B.s441_CollectAverage,
      &BaseEngineController_LS_112_DWork.s441_CollectAverage);

    /* End of Outputs for SubSystem: '<S441>/Collect Average' */

    /* Update for UnitDelay: '<S441>/Unit Delay' */
    BaseEngineController_LS_112_DWork.s441_UnitDelay_DSTATE = rtb_Sum_o3;
  } else {
    if (BaseEngineController_LS_112_DWork.s399_CaptureECTAtStartup_MODE) {
      /* Disable for Enabled SubSystem: '<S441>/Collect Average' */
      BaseEngineController_LS_112_CollectAverage_Disable
        (&BaseEngineController_LS_112_DWork.s441_CollectAverage);

      /* End of Disable for SubSystem: '<S441>/Collect Average' */
      BaseEngineController_LS_112_DWork.s399_CaptureECTAtStartup_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S399>/Capture ECT At Startup' */
  /* S-Function Block: <S474>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (ECT_KeyUp09In_DataStore()) =
      BaseEngineController_LS_112_B.s441_CollectAverage.s406_Product;
    (ECT_KeyUp09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_112_B.s441_CollectAverage.s406_Product,
       (ECT_KeyUp09IdxArr_DataStore()), 9, (ECT_KeyUp09Idx_DataStore()));
    rtb_motohawk_prelookup_ho = (ECT_KeyUp09Idx_DataStore());
  }

  /* Sum: '<S463>/Sum2' incorporates:
   *  UnitDelay: '<S463>/Unit Delay'
   */
  rtb_DataTypeConversion1_j = BaseEngineController_LS_112_B.s555_Sum1 -
    BaseEngineController_LS_112_DWork.s463_UnitDelay_DSTATE;

  /* S-Function Block: <S463>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_112_DWork.s463_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_p = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S463>/Product' incorporates:
   *  S-Function (motohawk_sfun_delta_time): '<S463>/motohawk_delta_time'
   */
  rtb_DataTypeConversion1_j /= rtb_motohawk_delta_time_p;

  /* S-Function Block: <S464>/motohawk_delta_time */
  rtb_Switch_c = 0.005;

  /* Product: '<S464>/Product' incorporates:
   *  MinMax: '<S464>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S464>/motohawk_calibration'
   */
  rtb_Switch_c /= (rtb_Switch_c >= (EngineAccelFiltConst_DataStore())) ||
    rtIsNaN((EngineAccelFiltConst_DataStore())) ? rtb_Switch_c :
    (EngineAccelFiltConst_DataStore());

  /* Sum: '<S465>/Sum1' incorporates:
   *  Constant: '<S465>/Constant'
   *  Product: '<S465>/Product'
   *  Product: '<S465>/Product1'
   *  Sum: '<S465>/Sum'
   *  UnitDelay: '<S465>/Unit Delay'
   */
  BaseEngineController_LS_112_B.s465_Sum1 = (1.0 - rtb_Switch_c) *
    BaseEngineController_LS_112_DWork.s465_UnitDelay_DSTATE +
    rtb_DataTypeConversion1_j * rtb_Switch_c;

  /* S-Function Block: <S400>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (RPMAccel17In_DataStore()) = BaseEngineController_LS_112_B.s465_Sum1;
    (RPMAccel17Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_112_B.s465_Sum1, (RPMAccel17IdxArr_DataStore()),
       17, (RPMAccel17Idx_DataStore()));
    BaseEngineController_LS_112_B.s400_RPMAccel17Idx = (RPMAccel17Idx_DataStore());
  }

  /* S-Function Block: <S400>/motohawk_prelookup2 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (TimeSinceRun09In_DataStore()) = BaseEngineController_LS_112_B.s471_Switch;
    (TimeSinceRun09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_112_B.s471_Switch,
       (TimeSinceRun09IdxArr_DataStore()), 9, (TimeSinceRun09Idx_DataStore()));
    rtb_TimeSinceRun09 = (TimeSinceRun09Idx_DataStore());
  }

  /* RelationalOperator: '<S94>/RelOp' incorporates:
   *  Constant: '<S94>/Constant'
   */
  rtb_RelOp_ni = (BaseEngineController_LS_112_B.s466_State == 3);

  /* S-Function Block: <S480>/motohawk_ain1 Resource: ClutchSw_Pin */
  rtb_motohawk_ain1 = 0;

  /* DataTypeConversion: '<S506>/Data Type Conversion' incorporates:
   *  S-Function (motohawk_sfun_ain): '<S480>/motohawk_ain1'
   */
  BaseEngineController_LS_112_B.s506_DataTypeConversion = (real_T)
    rtb_motohawk_ain1;

  /* RelationalOperator: '<S506>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S506>/SwitchPoint'
   */
  rtb_LogicalOperator6_p =
    (BaseEngineController_LS_112_B.s506_DataTypeConversion >
     (ClutchSwSwitchPt_DataStore()));

  /* Logic: '<S506>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S506>/0 = No Inversion 1 = Inversion'
   */
  rtb_LogicalOperator6_p ^= (ClutchSwPolarity_DataStore());

  /* If: '<S515>/If' incorporates:
   *  Inport: '<S516>/In1'
   *  Inport: '<S517>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S515>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S515>/override_enable'
   */
  if ((ClutchSw_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S515>/NewValue' incorporates:
     *  ActionPort: '<S516>/Action Port'
     */
    BaseEngineController_LS_112_B.s515_Merge = (ClutchSw_new_DataStore());

    /* End of Outputs for SubSystem: '<S515>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S515>/OldValue' incorporates:
     *  ActionPort: '<S517>/Action Port'
     */
    BaseEngineController_LS_112_B.s515_Merge = rtb_LogicalOperator6_p;

    /* End of Outputs for SubSystem: '<S515>/OldValue' */
  }

  /* End of If: '<S515>/If' */

  /* S-Function Block: <S480>/motohawk_ain6 Resource: AN3 */
  rtb_motohawk_ain6_h = AN3_AnalogInput_Get();

  /* DataTypeConversion: '<S509>/Data Type Conversion' incorporates:
   *  S-Function (motohawk_sfun_ain): '<S480>/motohawk_ain6'
   */
  BaseEngineController_LS_112_B.s509_DataTypeConversion = (real_T)
    rtb_motohawk_ain6_h;

  /* RelationalOperator: '<S509>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S509>/SwitchPoint'
   */
  rtb_LogicalOperator6_p =
    (BaseEngineController_LS_112_B.s509_DataTypeConversion >
     (ScrambleSwitchPt_DataStore()));

  /* Logic: '<S509>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S509>/0 = No Inversion 1 = Inversion'
   */
  rtb_RelationalOperator5_h = rtb_LogicalOperator6_p ^
    (ScramblePolarity_DataStore());

  /* S-Function Block: <S532>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_112_DWork.s532_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_kl = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S532>/Switch' incorporates:
   *  Constant: '<S532>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S532>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S532>/motohawk_delta_time'
   *  Sum: '<S532>/Sum'
   */
  if (rtb_RelationalOperator5_h) {
    rtb_Switch_c = rtb_motohawk_delta_time_kl + ScrambleDelay_DataStore();
  } else {
    rtb_Switch_c = 0.0;
  }

  /* End of Switch: '<S532>/Switch' */
  /* Logic: '<S530>/Logical Operator' incorporates:
   *  RelationalOperator: '<S530>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S509>/motohawk_calibration7'
   */
  rtb_LogicalOperator6_p = (rtb_RelationalOperator5_h && (rtb_Switch_c >=
    (ScrambleDebounceDelay_DataStore())));

  /* If: '<S531>/If' incorporates:
   *  Inport: '<S533>/In1'
   *  Inport: '<S534>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S531>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S531>/override_enable'
   */
  if ((Scramble_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S531>/NewValue' incorporates:
     *  ActionPort: '<S533>/Action Port'
     */
    BaseEngineController_LS_112_B.s531_Merge = (Scramble_new_DataStore());

    /* End of Outputs for SubSystem: '<S531>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S531>/OldValue' incorporates:
     *  ActionPort: '<S534>/Action Port'
     */
    BaseEngineController_LS_112_B.s531_Merge = rtb_LogicalOperator6_p;

    /* End of Outputs for SubSystem: '<S531>/OldValue' */
  }

  /* End of If: '<S531>/If' */

  /* S-Function Block: <S602>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_112_DWork.s602_motohawk_delta_time_DWORK1, NULL);
    rtb_DataTypeConversion_hg = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S602>/Product' incorporates:
   *  MinMax: '<S602>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S602>/motohawk_calibration'
   */
  rtb_DataTypeConversion_hg /= (rtb_DataTypeConversion_hg >=
    (MAPTimeFilterConst_DataStore())) || rtIsNaN((MAPTimeFilterConst_DataStore()))
    ? rtb_DataTypeConversion_hg : (MAPTimeFilterConst_DataStore());

  /* Sum: '<S607>/Sum1' incorporates:
   *  Constant: '<S607>/Constant'
   *  Product: '<S607>/Product'
   *  Product: '<S607>/Product1'
   *  Sum: '<S607>/Sum'
   *  UnitDelay: '<S607>/Unit Delay'
   */
  rtb_Sum1_kz = (1.0 - rtb_DataTypeConversion_hg) *
    BaseEngineController_LS_112_DWork.s607_UnitDelay_DSTATE + rtb_Merge_j *
    rtb_DataTypeConversion_hg;

  /* If: '<S606>/If' incorporates:
   *  Inport: '<S608>/In1'
   *  Inport: '<S609>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S606>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S606>/override_enable'
   */
  if ((MAPTime_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S606>/NewValue' incorporates:
     *  ActionPort: '<S608>/Action Port'
     */
    BaseEngineController_LS_112_B.s606_Merge = (MAPTime_new_DataStore());

    /* End of Outputs for SubSystem: '<S606>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S606>/OldValue' incorporates:
     *  ActionPort: '<S609>/Action Port'
     */
    BaseEngineController_LS_112_B.s606_Merge = rtb_Sum1_kz;

    /* End of Outputs for SubSystem: '<S606>/OldValue' */
  }

  /* End of If: '<S606>/If' */

  /* Outputs for Enabled SubSystem: '<S15>/Run' incorporates:
   *  EnablePort: '<S93>/Enable'
   */
  if (rtb_RelOp_ni) {
    if (!BaseEngineController_LS_112_DWork.s15_Run_MODE) {
      /* InitializeConditions for S-Function (motohawk_sfun_trigger): '<S93>/motohawk_trigger1' */
      if (rtmIsFirstInitCond(BaseEngineController_LS_112_M)) {
        /* Initial conditions for function-call system: '<S93>/DFCO' */

        /* S-Function Block: <S150>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_LS_112_DWork.s150_motohawk_delta_time_DWORK1 =
            now - Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
        }

        /* S-Function Block: <S148>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_LS_112_DWork.s148_motohawk_delta_time_DWORK1 =
            now - Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }
      }

      if (rtmIsFirstInitCond(BaseEngineController_LS_112_M)) {
        /* Initial conditions for function-call system: '<S93>/MinGovernor' */

        /* InitializeConditions for Stateflow: '<S206>/IdleStateMachine' */
        BaseEngineController_LS_112_IdleStateMachine_Init();

        /* S-Function Block: <S205>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_LS_112_DWork.s205_motohawk_delta_time_DWORK1 =
            now - Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }

        /* S-Function Block: <S209>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_LS_112_DWork.s209_motohawk_delta_time_DWORK1 =
            now - Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }

        /* InitializeConditions for Atomic SubSystem: '<S110>/AiflowOffset' */

        /* S-Function Block: <S212>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_LS_112_DWork.s212_motohawk_delta_time_DWORK1 =
            now - Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }

        /* End of InitializeConditions for SubSystem: '<S110>/AiflowOffset' */

        /* S-Function Block: <S237>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_LS_112_DWork.s237_motohawk_delta_time_DWORK1 =
            now - Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }
      }

      if (rtmIsFirstInitCond(BaseEngineController_LS_112_M)) {
        /* Initial conditions for function-call system: '<S93>/Boost Control' */

        /* S-Function Block: <S133>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_LS_112_DWork.s133_motohawk_delta_time_DWORK1 =
            now - Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
        }

        /* S-Function Block: <S143>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_LS_112_DWork.s143_motohawk_delta_time_DWORK1 =
            now - Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }
      }

      if (rtmIsFirstInitCond(BaseEngineController_LS_112_M)) {
        /* Initial conditions for function-call system: '<S93>/MaxGovernor' */

        /* S-Function Block: <S188>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_LS_112_DWork.s188_motohawk_delta_time_DWORK1 =
            now - Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }

        /* S-Function Block: <S199>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_LS_112_DWork.s199_motohawk_delta_time_DWORK1 =
            now - Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }
      }

      if (rtmIsFirstInitCond(BaseEngineController_LS_112_M)) {
        /* Initial conditions for function-call system: '<S93>/Spark Manager' */

        /* InitializeConditions for UnitDelay: '<S278>/Initial Condition is True' */
        BaseEngineController_LS_112_DWork.s278_InitialConditionisTrue_DSTATE =
          TRUE;
      }

      /* InitializeConditions for Atomic SubSystem: '<S93>/O2 Control' */

      /* InitializeConditions for Atomic SubSystem: '<S111>/O2 PID Controller Bank A' */
      /* InitializeConditions for UnitDelay: '<S257>/Unit Delay' */
      BaseEngineController_LS_112_DWork.s257_UnitDelay_DSTATE = FALSE;

      /* InitializeConditions for UnitDelay: '<S254>/Unit Delay' */
      BaseEngineController_LS_112_DWork.s254_UnitDelay_DSTATE = 0.0;

      /* InitializeConditions for UnitDelay: '<S253>/Unit Delay' */
      BaseEngineController_LS_112_DWork.s253_UnitDelay_DSTATE = 0.0;

      /* S-Function Block: <S254>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BaseEngineController_LS_112_DWork.s254_motohawk_delta_time_DWORK1 = now
          - Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
      }

      /* InitializeConditions for UnitDelay: '<S250>/Unit Delay1' */
      BaseEngineController_LS_112_DWork.s250_UnitDelay1_DSTATE = 0.0;

      /* S-Function Block: <S258>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BaseEngineController_LS_112_DWork.s258_motohawk_delta_time_DWORK1 = now
          - Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
      }

      /* InitializeConditions for UnitDelay: '<S250>/Unit Delay' */
      BaseEngineController_LS_112_DWork.s250_UnitDelay_DSTATE = 0.0;

      /* S-Function Block: <S260>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BaseEngineController_LS_112_DWork.s260_motohawk_delta_time_DWORK1 = now
          - Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
      }

      /* InitializeConditions for UnitDelay: '<S250>/Unit Delay2' */
      BaseEngineController_LS_112_DWork.s250_UnitDelay2_DSTATE = 0.0;

      /* S-Function Block: <S259>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BaseEngineController_LS_112_DWork.s259_motohawk_delta_time_DWORK1 = now
          - Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
      }

      /* End of InitializeConditions for SubSystem: '<S111>/O2 PID Controller Bank A' */

      /* InitializeConditions for Atomic SubSystem: '<S111>/O2 PID Controller Bank B' */
      /* InitializeConditions for UnitDelay: '<S269>/Unit Delay' */
      BaseEngineController_LS_112_DWork.s269_UnitDelay_DSTATE = FALSE;

      /* InitializeConditions for UnitDelay: '<S266>/Unit Delay' */
      BaseEngineController_LS_112_DWork.s266_UnitDelay_DSTATE = 0.0;

      /* InitializeConditions for UnitDelay: '<S265>/Unit Delay' */
      BaseEngineController_LS_112_DWork.s265_UnitDelay_DSTATE = 0.0;

      /* S-Function Block: <S266>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BaseEngineController_LS_112_DWork.s266_motohawk_delta_time_DWORK1 = now
          - Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
      }

      /* InitializeConditions for UnitDelay: '<S262>/Unit Delay1' */
      BaseEngineController_LS_112_DWork.s262_UnitDelay1_DSTATE = 0.0;

      /* S-Function Block: <S270>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BaseEngineController_LS_112_DWork.s270_motohawk_delta_time_DWORK1 = now
          - Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
      }

      /* InitializeConditions for UnitDelay: '<S262>/Unit Delay' */
      BaseEngineController_LS_112_DWork.s262_UnitDelay_DSTATE = 0.0;

      /* S-Function Block: <S272>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BaseEngineController_LS_112_DWork.s272_motohawk_delta_time_DWORK1 = now
          - Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
      }

      /* InitializeConditions for UnitDelay: '<S262>/Unit Delay2' */
      BaseEngineController_LS_112_DWork.s262_UnitDelay2_DSTATE = 0.0;

      /* S-Function Block: <S271>/motohawk_delta_time */
      {
        uint32_T now = 0;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
          u32Time_us);
        Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
        BaseEngineController_LS_112_DWork.s271_motohawk_delta_time_DWORK1 = now
          - Timer_FreeRunningCounter_GetRawTicksFromTime(5000.0);
      }

      /* End of InitializeConditions for SubSystem: '<S111>/O2 PID Controller Bank B' */
      /* End of InitializeConditions for SubSystem: '<S93>/O2 Control' */

      /* Level2 S-Function Block: '<S93>/motohawk_trigger1' (motohawk_sfun_trigger) */

      /* Enable for Trigger_FGND_5XRTI_PERIODIC_5057p0001 */
      BaseEngineController_LS_112_DWork.s93_motohawk_trigger1_DWORK1 = 1;
      BaseEngineController_LS_112_DWork.s15_Run_MODE = TRUE;
    }

    /* Outputs for Atomic SubSystem: '<S93>/Base Equiv Ratio' */

    /* S-Function Block: <S103>/motohawk_interpolation_2d1 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      BaseEngineController_LS_112_B.s103_WarmUpRatio =
        TableInterpolation2D_real_T(rtb_motohawk_prelookup_d,
        rtb_motohawk_prelookup1_hi, (real_T *) ((WarmUpEqRatioMap_DataStore())),
        5, 9);
      (WarmUpEqRatio_DataStore()) =
        BaseEngineController_LS_112_B.s103_WarmUpRatio;
    }

    /* S-Function Block: <S127>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_o = TableInterpolation1D_real_T
        (BaseEngineController_LS_112_B.s431_motohawk_prelookup, (real_T *)
         ((Warmup_Time_HoldoffTbl_DataStore())), 5);
      (Warmup_Time_Holdoff_DataStore()) = rtb_motohawk_interpolation_1d_o;
    }

    /* Switch: '<S127>/Switch' incorporates:
     *  Constant: '<S127>/Constant'
     *  RelationalOperator: '<S127>/Relational Operator'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S127>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_interpolation_2d): '<S103>/motohawk_interpolation_2d2'
     *  S-Function (motohawk_sfun_prelookup): '<S400>/motohawk_prelookup2'
     */
    if (BaseEngineController_LS_112_B.s471_Switch >=
        rtb_motohawk_interpolation_1d_o) {
      /* S-Function Block: <S103>/motohawk_interpolation_2d2 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_WarmUptimeRatio = TableInterpolation2D_real_T(rtb_TimeSinceRun09,
          BaseEngineController_LS_112_B.s431_motohawk_prelookup, (real_T *)
          ((WarmUpTimeRatioMap_DataStore())), 9, 5);
        (WarmUpTimeRatio_DataStore()) = rtb_WarmUptimeRatio;
      }

      BaseEngineController_LS_112_B.s127_Switch = rtb_WarmUptimeRatio;
    } else {
      BaseEngineController_LS_112_B.s127_Switch = 1.0;
    }

    /* End of Switch: '<S127>/Switch' */
    /* S-Function Block: <S103>/motohawk_interpolation_2d5 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      BaseEngineController_LS_112_B.s103_IATEnrichment =
        TableInterpolation2D_real_T(rtb_motohawk_prelookup_d,
        BaseEngineController_LS_112_B.s432_motohawk_prelookup, (real_T *)
        ((IntakeAirTempEnrichmentMap_DataStore())), 5, 5);
      (IntakeAirTempEnrichment_DataStore()) =
        BaseEngineController_LS_112_B.s103_IATEnrichment;
    }

    /* S-Function Block: <S103>/motohawk_interpolation_2d6 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      BaseEngineController_LS_112_B.s103_CATEnrichment =
        TableInterpolation2D_real_T(rtb_motohawk_prelookup_d,
        BaseEngineController_LS_112_B.s430_motohawk_prelookup, (real_T *)
        ((ChargeAirTempEnrichmentMap_DataStore())), 5, 5);
      (ChargeAirTempEnrichment_DataStore()) =
        BaseEngineController_LS_112_B.s103_CATEnrichment;
    }

    /* S-Function Block: <S103>/motohawk_interpolation_2d3 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_motohawk_interpolation_2d3_d = TableInterpolation2D_real_T
        (BaseEngineController_LS_112_B.s433_Indexes,
         BaseEngineController_LS_112_B.s435_Indexes, (real_T *)
         ((DesEquivRatioMap_DataStore())), 17, 17);
      (DesEquivRatio_DataStore()) = rtb_motohawk_interpolation_2d3_d;
    }

    /* If: '<S128>/If' incorporates:
     *  Inport: '<S129>/In1'
     *  Inport: '<S130>/In1'
     *  S-Function (motohawk_sfun_calibration): '<S128>/new_value'
     *  S-Function (motohawk_sfun_calibration): '<S128>/override_enable'
     */
    if ((EquivRatio_ovr_DataStore())) {
      /* Outputs for IfAction SubSystem: '<S128>/NewValue' incorporates:
       *  ActionPort: '<S129>/Action Port'
       */
      rtb_DataTypeConversion1_j = (EquivRatio_new_DataStore());

      /* End of Outputs for SubSystem: '<S128>/NewValue' */
    } else {
      /* Outputs for IfAction SubSystem: '<S128>/OldValue' incorporates:
       *  ActionPort: '<S130>/Action Port'
       */
      rtb_DataTypeConversion1_j = rtb_motohawk_interpolation_2d3_d;

      /* End of Outputs for SubSystem: '<S128>/OldValue' */
    }

    /* End of If: '<S128>/If' */

    /* MinMax: '<S103>/MinMax' */
    u = (rtb_DataTypeConversion1_j >=
         BaseEngineController_LS_112_B.s103_WarmUpRatio) || rtIsNaN
      (BaseEngineController_LS_112_B.s103_WarmUpRatio) ?
      rtb_DataTypeConversion1_j : BaseEngineController_LS_112_B.s103_WarmUpRatio;
    u = (u >= BaseEngineController_LS_112_B.s127_Switch) || rtIsNaN
      (BaseEngineController_LS_112_B.s127_Switch) ? u :
      BaseEngineController_LS_112_B.s127_Switch;
    u = (u >= BaseEngineController_LS_112_B.s103_IATEnrichment) || rtIsNaN
      (BaseEngineController_LS_112_B.s103_IATEnrichment) ? u :
      BaseEngineController_LS_112_B.s103_IATEnrichment;
    BaseEngineController_LS_112_B.s103_DesEquivRatio = (u >=
      BaseEngineController_LS_112_B.s103_CATEnrichment) || rtIsNaN
      (BaseEngineController_LS_112_B.s103_CATEnrichment) ? u :
      BaseEngineController_LS_112_B.s103_CATEnrichment;

    /* End of Outputs for SubSystem: '<S93>/Base Equiv Ratio' */

    /* S-Function (motohawk_sfun_trigger): '<S93>/motohawk_trigger1' */
    /* Enable for Trigger_FGND_5XRTI_PERIODIC_5057p0001 */
    if (BaseEngineController_LS_112_DWork.s93_motohawk_trigger1_DWORK1 == 0) {
      BaseEngineController_LS_112_DWork.s93_motohawk_trigger1_DWORK1 = 1;
    }

    /* Outputs for Enabled SubSystem: '<S102>/ShutDownTasksComplete Reset' incorporates:
     *  EnablePort: '<S126>/Enable'
     */
    /* S-Function (motohawk_sfun_calibration): '<S102>/motohawk_calibration2' */
    if ((AirControlSource_DataStore())) {
      /* S-Function (motohawk_sfun_data_write): '<S126>/motohawk_data_write' incorporates:
       *  Constant: '<S126>/Constant'
       */
      /* Write to Data Storage as scalar: ShutDownTasksComplete */
      {
        ShutDownTasksComplete_DataStore() = TRUE;
      }
    }

    /* End of S-Function (motohawk_sfun_calibration): '<S102>/motohawk_calibration2' */
    /* End of Outputs for SubSystem: '<S102>/ShutDownTasksComplete Reset' */

    /* Sum: '<S102>/Sum2' */
    rtb_DataTypeConversion1_j =
      BaseEngineController_LS_112_B.s212_DontallowsetpointtoeverdropbelowtheTargetRPM
      + BaseEngineController_LS_112_B.s110_MinGovAirPID;

    /* MultiPortSwitch: '<S102>/Multiport Switch' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S102>/motohawk_calibration2'
     */
    if ((AirControlSource_DataStore()) == FALSE) {
      /* Switch: '<S102>/Switch1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S102>/motohawk_calibration1'
       */
      if ((ThrottleSource_DataStore())) {
        /* S-Function Block: <S102>/motohawk_interpolation_1d2 */
        {
          extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T
            *tbl_data, uint32_T sz);
          rtb_motohawk_interpolation_1d2_l = TableInterpolation1D_real_T
            (BaseEngineController_LS_112_B.s435_motohawk_prelookup1, (real_T *)
             ((MaxETCSetPtLimitTbl_DataStore())), 9);
          (MaxETCSetPtLimit_DataStore()) = rtb_motohawk_interpolation_1d2_l;
        }

        /* S-Function Block: <S102>/motohawk_interpolation_1d1 */
        {
          extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T
            *tbl_data, uint32_T sz);
          rtb_motohawk_interpolation_1d1_f = TableInterpolation1D_real_T
            (BaseEngineController_LS_112_B.s435_motohawk_prelookup1, (real_T *)
             ((MinETCSetPtLimitTbl_DataStore())), 9);
          (MinETCSetPtLimit_DataStore()) = rtb_motohawk_interpolation_1d1_f;
        }

        /* Switch: '<S102>/Switch2' */
        if (BaseEngineController_LS_112_B.s187_MultiportSwitch) {
          rtb_DataTypeConversion1_j = BaseEngineController_LS_112_B.s190_Switch;
        } else {
          /* Switch: '<S102>/Switch4' incorporates:
           *  Logic: '<S102>/Logical Operator'
           *  Sum: '<S102>/Sum1'
           */
          if (!BaseEngineController_LS_112_B.s222_RelOp) {
            rtb_DataTypeConversion1_j = BaseEngineController_LS_112_B.s458_Sum2
              + BaseEngineController_LS_112_B.s212_DontallowsetpointtoeverdropbelowtheTargetRPM;
          }

          /* End of Switch: '<S102>/Switch4' */
        }

        /* End of Switch: '<S102>/Switch2' */

        /* MinMax: '<S125>/MinMax' */
        u = (rtb_DataTypeConversion1_j >= rtb_motohawk_interpolation_1d1_f) ||
          rtIsNaN(rtb_motohawk_interpolation_1d1_f) ? rtb_DataTypeConversion1_j :
          rtb_motohawk_interpolation_1d1_f;

        /* MinMax: '<S125>/MinMax1' incorporates:
         *  MinMax: '<S125>/MinMax'
         */
        rtb_DataTypeConversion1_j = (u <= rtb_motohawk_interpolation_1d2_l) ||
          rtIsNaN(rtb_motohawk_interpolation_1d2_l) ? u :
          rtb_motohawk_interpolation_1d2_l;
      } else {
        rtb_DataTypeConversion1_j = rtb_APP1;
      }

      /* End of Switch: '<S102>/Switch1' */
      BaseEngineController_LS_112_B.s102_MultiportSwitch =
        rtb_DataTypeConversion1_j;
    } else {
      BaseEngineController_LS_112_B.s102_MultiportSwitch =
        rtb_DataTypeConversion1_j;
    }

    /* End of MultiPortSwitch: '<S102>/Multiport Switch' */

    /* S-Function (motohawk_sfun_data_write): '<S102>/motohawk_data_write' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S102>/motohawk_calibration'
     */
    /* Write to Data Storage as scalar: IACType */
    {
      IACType_DataStore() = (IACTypeCal_DataStore());
    }

    /* Outputs for Atomic SubSystem: '<S93>/O2 Control' */
    /* Logic: '<S246>/Logical Operator' */
    rtb_LogicalOperator1_ou = !BaseEngineController_LS_112_B.s486_DataValidState;

    /* Logic: '<S246>/Logical Operator1' */
    rtb_LogicalOperator6_p =
      !BaseEngineController_LS_112_B.s486_DataValidState_d;

    /* Logic: '<S246>/Logical Operator2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S246>/motohawk_calibration'
     */
    rtb_LogicalOperator6_p = (rtb_LogicalOperator6_p && (BankB_Enbl_DataStore()));

    /* Logic: '<S246>/Logical Operator3' incorporates:
     *  S-Function (motohawk_sfun_fault_action): '<S246>/motohawk_fault_action'
     */
    BaseEngineController_LS_112_B.s246_LogicalOperator3 =
      ((rtb_LogicalOperator1_ou || rtb_LogicalOperator6_p ||
        GetFaultActionStatus(6)));

    /* S-Function (motohawk_sfun_data_write): '<S111>/motohawk_data_write' */
    /* Write to Data Storage as scalar: DisableO2FaultAction */
    {
      DisableO2FaultAction_DataStore() =
        BaseEngineController_LS_112_B.s246_LogicalOperator3;
    }

    /* Inport: '<S111>/Desired_Equiv' */
    rtb_DesiredLambda_idx = BaseEngineController_LS_112_B.s147_Product1;
    rtb_DesiredLambda_idx_0 = BaseEngineController_LS_112_B.s105_EquivRatioInfo
      [1];
    rtb_DesiredLambda_idx_1 = BaseEngineController_LS_112_B.s105_EquivRatioInfo
      [2];

    /* Logic: '<S241>/Logical Operator' incorporates:
     *  Constant: '<S241>/Constant'
     *  RelationalOperator: '<S241>/Relational Operator'
     *  RelationalOperator: '<S241>/Relational Operator1'
     *  S-Function (motohawk_sfun_calibration): '<S241>/motohawk_calibration1'
     *  Sum: '<S241>/Sum'
     *  Sum: '<S241>/Sum1'
     */
    BaseEngineController_LS_112_B.s241_LogicalOperator =
      (((rtb_DesiredLambda_idx <= (EquivRatioDelta_DataStore()) + 1.0) &&
        (rtb_DesiredLambda_idx >= 1.0 - (EquivRatioDelta_DataStore()))));

    /* Logic: '<S241>/Logical Operator3' */
    BaseEngineController_LS_112_B.s241_LogicalOperator3 =
      !BaseEngineController_LS_112_B.s246_LogicalOperator3;

    /* S-Function Block: <S241>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_p = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_ho, (real_T *) ((O2StartUpDelayTbl_DataStore())),
         9);
      (O2StartUpDelay_DataStore()) = rtb_motohawk_interpolation_1d_p;
    }

    /* RelationalOperator: '<S241>/Relational Operator5' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S241>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_prelookup): '<S474>/motohawk_prelookup'
     */
    BaseEngineController_LS_112_B.s241_RelationalOperator5 =
      ((BaseEngineController_LS_112_B.s471_Switch >=
        rtb_motohawk_interpolation_1d_p));

    /* Logic: '<S241>/Logical Operator2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S241>/motohawk_calibration2'
     */
    BaseEngineController_LS_112_B.s241_LogicalOperator2 =
      ((BaseEngineController_LS_112_B.s420_LogicalOperator &&
        BaseEngineController_LS_112_B.s241_LogicalOperator &&
        BaseEngineController_LS_112_B.s241_LogicalOperator3 &&
        (O2ControlEnable_DataStore()) &&
        BaseEngineController_LS_112_B.s241_RelationalOperator5));

    /* Logic: '<S111>/Logical Operator' */
    rtb_LogicalOperator_af =
      !BaseEngineController_LS_112_B.s241_LogicalOperator2;

    /* Logic: '<S111>/Logical Operator1' */
    rtb_LogicalOperator1_b3 = !rtb_RelOp_ni;

    /* S-Function Block: <S248>/motohawk_interpolation_2d */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_RichEquivRatioTargetDelta_j = TableInterpolation2D_real_T
        (BaseEngineController_LS_112_B.s433_motohawk_prelookup1,
         BaseEngineController_LS_112_B.s435_motohawk_prelookup1, (real_T *)
         ((RichTargetDeltaMap_DataStore())), 9, 9);
      (RichTargetDelta_DataStore()) = rtb_RichEquivRatioTargetDelta_j;
    }

    /* S-Function Block: <S248>/motohawk_interpolation_2d1 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_LeanEquivRatioTargetDelta = TableInterpolation2D_real_T
        (BaseEngineController_LS_112_B.s433_motohawk_prelookup1,
         BaseEngineController_LS_112_B.s435_motohawk_prelookup1, (real_T *)
         ((LeanTargetDeltaMap_DataStore())), 9, 9);
      (LeanTargetDelta_DataStore()) = rtb_LeanEquivRatioTargetDelta;
    }

    /* S-Function Block: <S248>/motohawk_interpolation_2d2 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_RichEquivRatioSwPtDelta = TableInterpolation2D_real_T
        (BaseEngineController_LS_112_B.s433_motohawk_prelookup1,
         BaseEngineController_LS_112_B.s435_motohawk_prelookup1, (real_T *)
         ((RichSwPtDeltaMap_DataStore())), 9, 9);
      (RichSwPtDelta_DataStore()) = rtb_RichEquivRatioSwPtDelta;
    }

    /* S-Function Block: <S248>/motohawk_interpolation_2d3 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_LeanEquivRatioSwPtDelta = TableInterpolation2D_real_T
        (BaseEngineController_LS_112_B.s433_motohawk_prelookup1,
         BaseEngineController_LS_112_B.s435_motohawk_prelookup1, (real_T *)
         ((LeanSwPtDeltaMap_DataStore())), 9, 9);
      (LeanSwPtDelta_DataStore()) = rtb_LeanEquivRatioSwPtDelta;
    }

    /* S-Function Block: <S247>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_f = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup1_hi, (real_T *)
         ((O2NECCTErrGainMultTbl_DataStore())), 9);
      (O2NECCTErrGainMult_DataStore()) = rtb_motohawk_interpolation_1d_f;
    }

    /* S-Function Block: <S247>/motohawk_interpolation_1d1 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d1_j = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_k, (real_T *) ((O2MAFErrGainMultTbl_DataStore())),
         5);
      (O2MAFErrGainMult_DataStore()) = rtb_motohawk_interpolation_1d1_j;
    }

    /* Product: '<S247>/Product' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S247>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S247>/motohawk_interpolation_1d1'
     *  S-Function (motohawk_sfun_prelookup): '<S431>/motohawk_prelookup1'
     *  S-Function (motohawk_sfun_prelookup): '<S476>/motohawk_prelookup'
     */
    rtb_Switch2_c = rtb_motohawk_interpolation_1d_f *
      rtb_motohawk_interpolation_1d1_j;

    /* Outputs for Atomic SubSystem: '<S111>/O2 PID Controller Bank A' */
    /* RelationalOperator: '<S250>/LT' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S248>/motohawk_interpolation_2d2'
     *  Sum: '<S250>/Sum3'
     */
    rtb_AboveRich_d = (BaseEngineController_LS_112_B.s448_Sum1 >=
                       rtb_DesiredLambda_idx + rtb_RichEquivRatioSwPtDelta);

    /* RelationalOperator: '<S250>/LT1' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S248>/motohawk_interpolation_2d3'
     *  Sum: '<S250>/Sum4'
     */
    rtb_LogicalOperator2_pu = (BaseEngineController_LS_112_B.s448_Sum1 <=
      rtb_DesiredLambda_idx - rtb_LeanEquivRatioSwPtDelta);

    /* CombinatorialLogic: '<S257>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_AboveRich_d != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_LogicalOperator2_pu != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_i[0] =
        BaseEngineController_LS_112_ConstP.pooled896[rowidx];
      rtb_CombinatorialLogic_i[1] =
        BaseEngineController_LS_112_ConstP.pooled896[rowidx + 4];
    }

    /* Switch: '<S257>/Switch1' incorporates:
     *  UnitDelay: '<S257>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_i[1]) {
      rtb_LogicalOperator1_ou = rtb_CombinatorialLogic_i[0];
    } else {
      rtb_LogicalOperator1_ou =
        BaseEngineController_LS_112_DWork.s257_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S257>/Switch1' */

    /* Switch: '<S243>/Switch' */
    if (rtb_LogicalOperator_af) {
      BaseEngineController_LS_112_B.s243_Switch =
        BaseEngineController_LS_112_B.s448_Sum1;
    } else {
      /* Switch: '<S250>/Switch2' incorporates:
       *  Logic: '<S250>/Logical Operator'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S248>/motohawk_interpolation_2d'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S248>/motohawk_interpolation_2d1'
       *  Sum: '<S250>/Sum1'
       *  Sum: '<S250>/Sum2'
       */
      if (!rtb_LogicalOperator1_ou) {
        BaseEngineController_LS_112_B.s243_Switch =
          rtb_RichEquivRatioTargetDelta_j + rtb_DesiredLambda_idx;
      } else {
        BaseEngineController_LS_112_B.s243_Switch = rtb_DesiredLambda_idx -
          rtb_LeanEquivRatioTargetDelta;
      }

      /* End of Switch: '<S250>/Switch2' */
    }

    /* End of Switch: '<S243>/Switch' */

    /* Sum: '<S252>/Sum2' */
    BaseEngineController_LS_112_B.s252_Sum2 =
      BaseEngineController_LS_112_B.s243_Switch -
      BaseEngineController_LS_112_B.s448_Sum1;

    /* Product: '<S252>/Product5' */
    rtb_Switch3_e = BaseEngineController_LS_112_B.s252_Sum2 * rtb_Switch2_c;

    /* Product: '<S252>/Product2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S242>/motohawk_calibration5'
     */
    BaseEngineController_LS_112_B.s252_Product2 = rtb_Switch3_e *
      (O2CtrlPGain_DataStore());

    /* Switch: '<S254>/Switch1' incorporates:
     *  Constant: '<S249>/Constant'
     *  UnitDelay: '<S254>/Unit Delay'
     */
    if (rtb_LogicalOperator1_b3) {
      BaseEngineController_LS_112_B.s254_Switch1 = 0.0;
    } else {
      BaseEngineController_LS_112_B.s254_Switch1 =
        BaseEngineController_LS_112_DWork.s254_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S254>/Switch1' */

    /* Product: '<S252>/Product4' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S242>/motohawk_calibration7'
     */
    rtb_Switch1_gg = rtb_Switch3_e * (O2CtrlDGain_DataStore());

    /* Sum: '<S253>/Sum2' incorporates:
     *  UnitDelay: '<S253>/Unit Delay'
     */
    rtb_DataTypeConversion1_j = rtb_Switch1_gg -
      BaseEngineController_LS_112_DWork.s253_UnitDelay_DSTATE;

    /* S-Function Block: <S253>/motohawk_delta_time */
    rtb_motohawk_delta_time_jl = 0.005;

    /* Product: '<S253>/Product' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S253>/motohawk_delta_time'
     */
    BaseEngineController_LS_112_B.s253_Product = rtb_DataTypeConversion1_j /
      rtb_motohawk_delta_time_jl;

    /* MinMax: '<S251>/MinMax' incorporates:
     *  Constant: '<S249>/Convert to Fuel Multiplier'
     *  S-Function (motohawk_sfun_calibration): '<S242>/motohawk_calibration11'
     *  Sum: '<S249>/Sum'
     *  Sum: '<S252>/Sum1'
     */
    u = ((BaseEngineController_LS_112_B.s252_Product2 +
          BaseEngineController_LS_112_B.s253_Product) +
         BaseEngineController_LS_112_B.s254_Switch1) + 1.0;
    u = (u >= (O2CtrlPIDOutLowerLimit_DataStore())) || rtIsNaN
      ((O2CtrlPIDOutLowerLimit_DataStore())) ? u :
      (O2CtrlPIDOutLowerLimit_DataStore());

    /* MinMax: '<S251>/MinMax1' incorporates:
     *  MinMax: '<S251>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S242>/motohawk_calibration10'
     */
    rtb_Multiplyby10ifnotyetenabled_p = (u <= (O2CtrlPIDOutUpperLimit_DataStore()))
      || rtIsNaN((O2CtrlPIDOutUpperLimit_DataStore())) ? u :
      (O2CtrlPIDOutUpperLimit_DataStore());

    /* Product: '<S252>/Product1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S242>/motohawk_calibration6'
     */
    rtb_DataTypeConversion1_j = rtb_Switch3_e * (O2CtrlIGain_DataStore());

    /* S-Function Block: <S254>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_112_DWork.s254_motohawk_delta_time_DWORK1,
         NULL);
      rtb_motohawk_delta_time_ie = ((real_T) delta) * 0.000001;
    }

    /* MinMax: '<S256>/MinMax' incorporates:
     *  Product: '<S254>/Product'
     *  S-Function (motohawk_sfun_calibration): '<S242>/motohawk_calibration8'
     *  S-Function (motohawk_sfun_delta_time): '<S254>/motohawk_delta_time'
     *  Sum: '<S254>/Sum'
     */
    u = rtb_DataTypeConversion1_j * rtb_motohawk_delta_time_ie +
      BaseEngineController_LS_112_B.s254_Switch1;
    u = (u >= (O2ITermLowerLimit_DataStore())) || rtIsNaN
      ((O2ITermLowerLimit_DataStore())) ? u : (O2ITermLowerLimit_DataStore());

    /* MinMax: '<S256>/MinMax1' incorporates:
     *  MinMax: '<S256>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S242>/motohawk_calibration9'
     */
    u = (u <= (O2ITermUpperLimit_DataStore())) || rtIsNaN
      ((O2ITermUpperLimit_DataStore())) ? u : (O2ITermUpperLimit_DataStore());

    /* UnitDelay: '<S250>/Unit Delay1' */
    rtb_Switch3_e = BaseEngineController_LS_112_DWork.s250_UnitDelay1_DSTATE;

    /* Logic: '<S250>/Logical Operator10' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S250>/motohawk_data_read'
     */
    rtb_LogicalOperator6_p = (rtb_LogicalOperator2_pu &&
      DisableO2FaultAction_DataStore());

    /* S-Function Block: <S258>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_112_DWork.s258_motohawk_delta_time_DWORK1,
         NULL);
      rtb_motohawk_delta_time_ee = ((real_T) delta) * 0.000001;
    }

    /* Logic: '<S250>/Logical Operator4' */
    rtb_Switch1_m = !rtb_LogicalOperator_af;

    /* Logic: '<S250>/Logical Operator6' */
    rtb_RelationalOperator3_i2 = !rtb_LogicalOperator1_b3;

    /* Switch: '<S258>/Switch' incorporates:
     *  Constant: '<S258>/Constant'
     *  Logic: '<S250>/Logical Operator7'
     *  S-Function (motohawk_sfun_data_read): '<S258>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S258>/motohawk_delta_time'
     *  Sum: '<S258>/Sum'
     */
    if (rtb_LogicalOperator2_pu && rtb_Switch1_m && rtb_RelationalOperator3_i2)
    {
      rtb_DataTypeConversion1_j = rtb_motohawk_delta_time_ee +
        O2LeanTimer_BankA_DataStore();
    } else {
      rtb_DataTypeConversion1_j = 0.0;
    }

    /* End of Switch: '<S258>/Switch' */

    /* Switch: '<S250>/Switch3' */
    if (rtb_LogicalOperator6_p) {
      BaseEngineController_LS_112_B.s250_Switch3 = rtb_Switch3_e;
    } else {
      BaseEngineController_LS_112_B.s250_Switch3 = rtb_DataTypeConversion1_j;
    }

    /* End of Switch: '<S250>/Switch3' */
    /* RelationalOperator: '<S250>/LT3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S250>/motohawk_calibration2'
     */
    rtb_LT3_j = ((BaseEngineController_LS_112_B.s250_Switch3 >=
                  (O2LeanTimeThresh_BankA_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S250>/motohawk_fault_def' */

    /* Set Fault Suspected Status: O2FailedLean_BankA */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(129, rtb_LT3_j);
      UpdateFault(129);
    }

    /* UnitDelay: '<S250>/Unit Delay' */
    rtb_Switch3_e = BaseEngineController_LS_112_DWork.s250_UnitDelay_DSTATE;

    /* Logic: '<S250>/Logical Operator9' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S250>/motohawk_data_read'
     */
    rtb_LogicalOperator6_p = (rtb_AboveRich_d && DisableO2FaultAction_DataStore());

    /* S-Function Block: <S260>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_112_DWork.s260_motohawk_delta_time_DWORK1,
         NULL);
      rtb_motohawk_delta_time_bn = ((real_T) delta) * 0.000001;
    }

    /* Switch: '<S260>/Switch' incorporates:
     *  Constant: '<S260>/Constant'
     *  Logic: '<S250>/Logical Operator5'
     *  S-Function (motohawk_sfun_data_read): '<S260>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S260>/motohawk_delta_time'
     *  Sum: '<S260>/Sum'
     */
    if (rtb_AboveRich_d && rtb_Switch1_m && rtb_RelationalOperator3_i2) {
      rtb_DataTypeConversion_ep = rtb_motohawk_delta_time_bn +
        O2RichTimer_BankA_DataStore();
    } else {
      rtb_DataTypeConversion_ep = 0.0;
    }

    /* End of Switch: '<S260>/Switch' */

    /* Switch: '<S250>/Switch1' */
    if (rtb_LogicalOperator6_p) {
      BaseEngineController_LS_112_B.s250_Switch1 = rtb_Switch3_e;
    } else {
      BaseEngineController_LS_112_B.s250_Switch1 = rtb_DataTypeConversion_ep;
    }

    /* End of Switch: '<S250>/Switch1' */
    /* RelationalOperator: '<S250>/LT2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S250>/motohawk_calibration1'
     */
    rtb_LT2_l = ((BaseEngineController_LS_112_B.s250_Switch1 >=
                  (O2RichTimeThresh_BankA_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S250>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: O2FailedRich_BankA */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(131, rtb_LT2_l);
      UpdateFault(131);
    }

    /* UnitDelay: '<S250>/Unit Delay2' */
    rtb_Switch3_e = BaseEngineController_LS_112_DWork.s250_UnitDelay2_DSTATE;

    /* Logic: '<S250>/Logical Operator2' incorporates:
     *  Logic: '<S250>/Logical Operator1'
     *  Logic: '<S250>/Logical Operator3'
     */
    rtb_LogicalOperator2_pu = ((!rtb_LogicalOperator2_pu) && (!rtb_AboveRich_d));

    /* Logic: '<S250>/Logical Operator11' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S250>/motohawk_data_read'
     */
    rtb_LogicalOperator6_p = (rtb_LogicalOperator2_pu &&
      DisableO2FaultAction_DataStore());

    /* S-Function Block: <S259>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_112_DWork.s259_motohawk_delta_time_DWORK1,
         NULL);
      rtb_motohawk_delta_time_gz = ((real_T) delta) * 0.000001;
    }

    /* Switch: '<S259>/Switch' incorporates:
     *  Constant: '<S259>/Constant'
     *  Logic: '<S250>/Logical Operator8'
     *  S-Function (motohawk_sfun_data_read): '<S259>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S259>/motohawk_delta_time'
     *  Sum: '<S259>/Sum'
     */
    if (rtb_LogicalOperator2_pu && rtb_Switch1_m && rtb_RelationalOperator3_i2)
    {
      rtb_Product1_mc = rtb_motohawk_delta_time_gz +
        O2ActiveTimer_BankA_DataStore();
    } else {
      rtb_Product1_mc = 0.0;
    }

    /* End of Switch: '<S259>/Switch' */

    /* Switch: '<S250>/Switch4' */
    if (rtb_LogicalOperator6_p) {
      BaseEngineController_LS_112_B.s250_Switch4 = rtb_Switch3_e;
    } else {
      BaseEngineController_LS_112_B.s250_Switch4 = rtb_Product1_mc;
    }

    /* End of Switch: '<S250>/Switch4' */
    /* RelationalOperator: '<S250>/LT4' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S250>/motohawk_calibration3'
     */
    rtb_LT4_o = ((BaseEngineController_LS_112_B.s250_Switch4 >=
                  (O2ActiveTimeThresh_BankA_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S250>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: O2NotActive_BankA */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(133, rtb_LT4_o);
      UpdateFault(133);
    }

    /* Saturate: '<S258>/Saturation' */
    rtb_Saturation_my = rtb_DataTypeConversion1_j >= 16000.0 ? 16000.0 :
      rtb_DataTypeConversion1_j <= 0.0 ? 0.0 : rtb_DataTypeConversion1_j;

    /* S-Function (motohawk_sfun_data_write): '<S258>/motohawk_data_write' */
    /* Write to Data Storage as scalar: O2LeanTimer_BankA */
    {
      O2LeanTimer_BankA_DataStore() = rtb_Saturation_my;
    }

    /* Saturate: '<S259>/Saturation' */
    rtb_Saturation_oc = rtb_Product1_mc >= 16000.0 ? 16000.0 : rtb_Product1_mc <=
      0.0 ? 0.0 : rtb_Product1_mc;

    /* S-Function (motohawk_sfun_data_write): '<S259>/motohawk_data_write' */
    /* Write to Data Storage as scalar: O2ActiveTimer_BankA */
    {
      O2ActiveTimer_BankA_DataStore() = rtb_Saturation_oc;
    }

    /* Saturate: '<S260>/Saturation' */
    rtb_Saturation_ep = rtb_DataTypeConversion_ep >= 16000.0 ? 16000.0 :
      rtb_DataTypeConversion_ep <= 0.0 ? 0.0 : rtb_DataTypeConversion_ep;

    /* S-Function (motohawk_sfun_data_write): '<S260>/motohawk_data_write' */
    /* Write to Data Storage as scalar: O2RichTimer_BankA */
    {
      O2RichTimer_BankA_DataStore() = rtb_Saturation_ep;
    }

    /* InitialCondition: '<S243>/Multiply by 1.0 if not yet enabled' */
    if (BaseEngineController_LS_112_DWork.s243_Multiplyby10ifnotyetenabled_FirstOutputTime)
    {
      BaseEngineController_LS_112_DWork.s243_Multiplyby10ifnotyetenabled_FirstOutputTime
        = FALSE;
      rtb_Multiplyby10ifnotyetenabled_p = 1.0;
    }

    /* End of InitialCondition: '<S243>/Multiply by 1.0 if not yet enabled' */

    /* Update for UnitDelay: '<S257>/Unit Delay' */
    BaseEngineController_LS_112_DWork.s257_UnitDelay_DSTATE =
      rtb_LogicalOperator1_ou;

    /* Update for UnitDelay: '<S254>/Unit Delay' incorporates:
     *  MinMax: '<S256>/MinMax1'
     */
    BaseEngineController_LS_112_DWork.s254_UnitDelay_DSTATE = u;

    /* Update for UnitDelay: '<S253>/Unit Delay' */
    BaseEngineController_LS_112_DWork.s253_UnitDelay_DSTATE = rtb_Switch1_gg;

    /* Update for UnitDelay: '<S250>/Unit Delay1' */
    BaseEngineController_LS_112_DWork.s250_UnitDelay1_DSTATE =
      BaseEngineController_LS_112_B.s250_Switch3;

    /* Update for UnitDelay: '<S250>/Unit Delay' */
    BaseEngineController_LS_112_DWork.s250_UnitDelay_DSTATE =
      BaseEngineController_LS_112_B.s250_Switch1;

    /* Update for UnitDelay: '<S250>/Unit Delay2' */
    BaseEngineController_LS_112_DWork.s250_UnitDelay2_DSTATE =
      BaseEngineController_LS_112_B.s250_Switch4;

    /* End of Outputs for SubSystem: '<S111>/O2 PID Controller Bank A' */

    /* Outputs for Atomic SubSystem: '<S111>/O2 PID Controller Bank B' */
    /* RelationalOperator: '<S262>/LT' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S248>/motohawk_interpolation_2d2'
     *  Sum: '<S262>/Sum3'
     */
    rtb_AboveRich = (BaseEngineController_LS_112_B.s448_Sum3 >=
                     rtb_DesiredLambda_idx + rtb_RichEquivRatioSwPtDelta);

    /* RelationalOperator: '<S262>/LT1' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S248>/motohawk_interpolation_2d3'
     *  Sum: '<S262>/Sum4'
     */
    rtb_LogicalOperator2_fx = (BaseEngineController_LS_112_B.s448_Sum3 <=
      rtb_DesiredLambda_idx - rtb_LeanEquivRatioSwPtDelta);

    /* CombinatorialLogic: '<S269>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_AboveRich != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_LogicalOperator2_fx != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_n[0] =
        BaseEngineController_LS_112_ConstP.pooled896[rowidx];
      rtb_CombinatorialLogic_n[1] =
        BaseEngineController_LS_112_ConstP.pooled896[rowidx + 4];
    }

    /* Switch: '<S269>/Switch1' incorporates:
     *  UnitDelay: '<S269>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_n[1]) {
      rtb_RelationalOperator3_i2 = rtb_CombinatorialLogic_n[0];
    } else {
      rtb_RelationalOperator3_i2 =
        BaseEngineController_LS_112_DWork.s269_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S269>/Switch1' */

    /* Switch: '<S244>/Switch' */
    if (rtb_LogicalOperator_af) {
      BaseEngineController_LS_112_B.s244_Switch =
        BaseEngineController_LS_112_B.s448_Sum3;
    } else {
      /* Switch: '<S262>/Switch2' incorporates:
       *  Logic: '<S262>/Logical Operator'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S248>/motohawk_interpolation_2d'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S248>/motohawk_interpolation_2d1'
       *  Sum: '<S262>/Sum1'
       *  Sum: '<S262>/Sum2'
       */
      if (!rtb_RelationalOperator3_i2) {
        BaseEngineController_LS_112_B.s244_Switch =
          rtb_RichEquivRatioTargetDelta_j + rtb_DesiredLambda_idx;
      } else {
        BaseEngineController_LS_112_B.s244_Switch = rtb_DesiredLambda_idx -
          rtb_LeanEquivRatioTargetDelta;
      }

      /* End of Switch: '<S262>/Switch2' */
    }

    /* End of Switch: '<S244>/Switch' */

    /* Sum: '<S264>/Sum2' */
    BaseEngineController_LS_112_B.s264_Sum2 =
      BaseEngineController_LS_112_B.s244_Switch -
      BaseEngineController_LS_112_B.s448_Sum3;

    /* Product: '<S264>/Product5' */
    rtb_Switch3_e = BaseEngineController_LS_112_B.s264_Sum2 * rtb_Switch2_c;

    /* Product: '<S264>/Product2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S242>/motohawk_calibration5'
     */
    BaseEngineController_LS_112_B.s264_Product2 = rtb_Switch3_e *
      (O2CtrlPGain_DataStore());

    /* Switch: '<S266>/Switch1' incorporates:
     *  Constant: '<S261>/Constant'
     *  UnitDelay: '<S266>/Unit Delay'
     */
    if (rtb_LogicalOperator1_b3) {
      BaseEngineController_LS_112_B.s266_Switch1 = 0.0;
    } else {
      BaseEngineController_LS_112_B.s266_Switch1 =
        BaseEngineController_LS_112_DWork.s266_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S266>/Switch1' */

    /* Product: '<S264>/Product4' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S242>/motohawk_calibration7'
     */
    rtb_Switch2_c = rtb_Switch3_e * (O2CtrlDGain_DataStore());

    /* Sum: '<S265>/Sum2' incorporates:
     *  UnitDelay: '<S265>/Unit Delay'
     */
    rtb_DataTypeConversion1_j = rtb_Switch2_c -
      BaseEngineController_LS_112_DWork.s265_UnitDelay_DSTATE;

    /* S-Function Block: <S265>/motohawk_delta_time */
    rtb_motohawk_delta_time_ps = 0.005;

    /* Product: '<S265>/Product' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S265>/motohawk_delta_time'
     */
    BaseEngineController_LS_112_B.s265_Product = rtb_DataTypeConversion1_j /
      rtb_motohawk_delta_time_ps;

    /* MinMax: '<S263>/MinMax' incorporates:
     *  Constant: '<S261>/Convert to Fuel Multiplier'
     *  S-Function (motohawk_sfun_calibration): '<S242>/motohawk_calibration11'
     *  Sum: '<S261>/Sum'
     *  Sum: '<S264>/Sum1'
     */
    u = ((BaseEngineController_LS_112_B.s264_Product2 +
          BaseEngineController_LS_112_B.s265_Product) +
         BaseEngineController_LS_112_B.s266_Switch1) + 1.0;
    u = (u >= (O2CtrlPIDOutLowerLimit_DataStore())) || rtIsNaN
      ((O2CtrlPIDOutLowerLimit_DataStore())) ? u :
      (O2CtrlPIDOutLowerLimit_DataStore());

    /* MinMax: '<S263>/MinMax1' incorporates:
     *  MinMax: '<S263>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S242>/motohawk_calibration10'
     */
    rtb_Switch4_c = (u <= (O2CtrlPIDOutUpperLimit_DataStore())) || rtIsNaN
      ((O2CtrlPIDOutUpperLimit_DataStore())) ? u :
      (O2CtrlPIDOutUpperLimit_DataStore());

    /* Product: '<S264>/Product1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S242>/motohawk_calibration6'
     */
    rtb_DataTypeConversion1_j = rtb_Switch3_e * (O2CtrlIGain_DataStore());

    /* S-Function Block: <S266>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_112_DWork.s266_motohawk_delta_time_DWORK1,
         NULL);
      rtb_motohawk_delta_time_gu = ((real_T) delta) * 0.000001;
    }

    /* MinMax: '<S268>/MinMax' incorporates:
     *  Product: '<S266>/Product'
     *  S-Function (motohawk_sfun_calibration): '<S242>/motohawk_calibration8'
     *  S-Function (motohawk_sfun_delta_time): '<S266>/motohawk_delta_time'
     *  Sum: '<S266>/Sum'
     */
    u = rtb_DataTypeConversion1_j * rtb_motohawk_delta_time_gu +
      BaseEngineController_LS_112_B.s266_Switch1;
    u = (u >= (O2ITermLowerLimit_DataStore())) || rtIsNaN
      ((O2ITermLowerLimit_DataStore())) ? u : (O2ITermLowerLimit_DataStore());

    /* MinMax: '<S268>/MinMax1' incorporates:
     *  MinMax: '<S268>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S242>/motohawk_calibration9'
     */
    u = (u <= (O2ITermUpperLimit_DataStore())) || rtIsNaN
      ((O2ITermUpperLimit_DataStore())) ? u : (O2ITermUpperLimit_DataStore());

    /* UnitDelay: '<S262>/Unit Delay1' */
    rtb_Switch3_e = BaseEngineController_LS_112_DWork.s262_UnitDelay1_DSTATE;

    /* Logic: '<S262>/Logical Operator10' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S262>/motohawk_data_read'
     */
    rtb_LogicalOperator6_p = (rtb_LogicalOperator2_fx &&
      DisableO2FaultAction_DataStore());

    /* S-Function Block: <S270>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_112_DWork.s270_motohawk_delta_time_DWORK1,
         NULL);
      rtb_motohawk_delta_time_ku = ((real_T) delta) * 0.000001;
    }

    /* Logic: '<S262>/Logical Operator4' */
    rtb_Switch1_m = !rtb_LogicalOperator_af;

    /* Logic: '<S262>/Logical Operator6' */
    rtb_LogicalOperator1_ou = !rtb_LogicalOperator1_b3;

    /* Switch: '<S270>/Switch' incorporates:
     *  Constant: '<S270>/Constant'
     *  Logic: '<S262>/Logical Operator7'
     *  S-Function (motohawk_sfun_data_read): '<S270>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S270>/motohawk_delta_time'
     *  Sum: '<S270>/Sum'
     */
    if (rtb_LogicalOperator2_fx && rtb_Switch1_m && rtb_LogicalOperator1_ou) {
      rtb_DataTypeConversion1_j = rtb_motohawk_delta_time_ku +
        O2LeanTimer_BankB_DataStore();
    } else {
      rtb_DataTypeConversion1_j = 0.0;
    }

    /* End of Switch: '<S270>/Switch' */

    /* Switch: '<S262>/Switch3' */
    if (rtb_LogicalOperator6_p) {
      BaseEngineController_LS_112_B.s262_Switch3 = rtb_Switch3_e;
    } else {
      BaseEngineController_LS_112_B.s262_Switch3 = rtb_DataTypeConversion1_j;
    }

    /* End of Switch: '<S262>/Switch3' */
    /* RelationalOperator: '<S262>/LT3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S262>/motohawk_calibration2'
     */
    rtb_LT3 = ((BaseEngineController_LS_112_B.s262_Switch3 >=
                (O2LeanTimeThresh_BankB_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S262>/motohawk_fault_def' */

    /* Set Fault Suspected Status: O2FailedLean_BankB */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(130, rtb_LT3);
      UpdateFault(130);
    }

    /* UnitDelay: '<S262>/Unit Delay' */
    rtb_Switch3_e = BaseEngineController_LS_112_DWork.s262_UnitDelay_DSTATE;

    /* Logic: '<S262>/Logical Operator9' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S262>/motohawk_data_read'
     */
    rtb_LogicalOperator6_p = (rtb_AboveRich && DisableO2FaultAction_DataStore());

    /* S-Function Block: <S272>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_112_DWork.s272_motohawk_delta_time_DWORK1,
         NULL);
      rtb_motohawk_delta_time_kmg = ((real_T) delta) * 0.000001;
    }

    /* Switch: '<S272>/Switch' incorporates:
     *  Constant: '<S272>/Constant'
     *  Logic: '<S262>/Logical Operator5'
     *  S-Function (motohawk_sfun_data_read): '<S272>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S272>/motohawk_delta_time'
     *  Sum: '<S272>/Sum'
     */
    if (rtb_AboveRich && rtb_Switch1_m && rtb_LogicalOperator1_ou) {
      rtb_DataTypeConversion_ep = rtb_motohawk_delta_time_kmg +
        O2RichTimer_BankB_DataStore();
    } else {
      rtb_DataTypeConversion_ep = 0.0;
    }

    /* End of Switch: '<S272>/Switch' */

    /* Switch: '<S262>/Switch1' */
    if (rtb_LogicalOperator6_p) {
      BaseEngineController_LS_112_B.s262_Switch1 = rtb_Switch3_e;
    } else {
      BaseEngineController_LS_112_B.s262_Switch1 = rtb_DataTypeConversion_ep;
    }

    /* End of Switch: '<S262>/Switch1' */
    /* RelationalOperator: '<S262>/LT2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S262>/motohawk_calibration1'
     */
    rtb_LT2 = ((BaseEngineController_LS_112_B.s262_Switch1 >=
                (O2RichTimeThresh_BankB_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S262>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: O2FailedRich_BankB */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(132, rtb_LT2);
      UpdateFault(132);
    }

    /* UnitDelay: '<S262>/Unit Delay2' */
    rtb_Switch3_e = BaseEngineController_LS_112_DWork.s262_UnitDelay2_DSTATE;

    /* Logic: '<S262>/Logical Operator2' incorporates:
     *  Logic: '<S262>/Logical Operator1'
     *  Logic: '<S262>/Logical Operator3'
     */
    rtb_LogicalOperator2_fx = ((!rtb_LogicalOperator2_fx) && (!rtb_AboveRich));

    /* Logic: '<S262>/Logical Operator11' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S262>/motohawk_data_read'
     */
    rtb_LogicalOperator6_p = (rtb_LogicalOperator2_fx &&
      DisableO2FaultAction_DataStore());

    /* S-Function Block: <S271>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_112_DWork.s271_motohawk_delta_time_DWORK1,
         NULL);
      rtb_motohawk_delta_time_px = ((real_T) delta) * 0.000001;
    }

    /* Switch: '<S271>/Switch' incorporates:
     *  Constant: '<S271>/Constant'
     *  Logic: '<S262>/Logical Operator8'
     *  S-Function (motohawk_sfun_data_read): '<S271>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S271>/motohawk_delta_time'
     *  Sum: '<S271>/Sum'
     */
    if (rtb_LogicalOperator2_fx && rtb_Switch1_m && rtb_LogicalOperator1_ou) {
      rtb_Product1_mc = rtb_motohawk_delta_time_px +
        O2ActiveTimer_BankB_DataStore();
    } else {
      rtb_Product1_mc = 0.0;
    }

    /* End of Switch: '<S271>/Switch' */

    /* Switch: '<S262>/Switch4' */
    if (rtb_LogicalOperator6_p) {
      BaseEngineController_LS_112_B.s262_Switch4 = rtb_Switch3_e;
    } else {
      BaseEngineController_LS_112_B.s262_Switch4 = rtb_Product1_mc;
    }

    /* End of Switch: '<S262>/Switch4' */
    /* RelationalOperator: '<S262>/LT4' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S262>/motohawk_calibration3'
     */
    rtb_LT4 = ((BaseEngineController_LS_112_B.s262_Switch4 >=
                (O2ActiveTimeThresh_BankB_DataStore())));

    /* S-Function (motohawk_sfun_fault_def): '<S262>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: O2NotActive_BankB */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(134, rtb_LT4);
      UpdateFault(134);
    }

    /* Saturate: '<S270>/Saturation' */
    rtb_Saturation_hz = rtb_DataTypeConversion1_j >= 16000.0 ? 16000.0 :
      rtb_DataTypeConversion1_j <= 0.0 ? 0.0 : rtb_DataTypeConversion1_j;

    /* S-Function (motohawk_sfun_data_write): '<S270>/motohawk_data_write' */
    /* Write to Data Storage as scalar: O2LeanTimer_BankB */
    {
      O2LeanTimer_BankB_DataStore() = rtb_Saturation_hz;
    }

    /* Saturate: '<S271>/Saturation' */
    rtb_Saturation_ly = rtb_Product1_mc >= 16000.0 ? 16000.0 : rtb_Product1_mc <=
      0.0 ? 0.0 : rtb_Product1_mc;

    /* S-Function (motohawk_sfun_data_write): '<S271>/motohawk_data_write' */
    /* Write to Data Storage as scalar: O2ActiveTimer_BankB */
    {
      O2ActiveTimer_BankB_DataStore() = rtb_Saturation_ly;
    }

    /* Saturate: '<S272>/Saturation' */
    rtb_Saturation_m = rtb_DataTypeConversion_ep >= 16000.0 ? 16000.0 :
      rtb_DataTypeConversion_ep <= 0.0 ? 0.0 : rtb_DataTypeConversion_ep;

    /* S-Function (motohawk_sfun_data_write): '<S272>/motohawk_data_write' */
    /* Write to Data Storage as scalar: O2RichTimer_BankB */
    {
      O2RichTimer_BankB_DataStore() = rtb_Saturation_m;
    }

    /* InitialCondition: '<S244>/Multiply by 1.0 if not yet enabled' */
    if (BaseEngineController_LS_112_DWork.s244_Multiplyby10ifnotyetenabled_FirstOutputTime)
    {
      BaseEngineController_LS_112_DWork.s244_Multiplyby10ifnotyetenabled_FirstOutputTime
        = FALSE;
      rtb_Switch4_c = 1.0;
    }

    /* End of InitialCondition: '<S244>/Multiply by 1.0 if not yet enabled' */

    /* Update for UnitDelay: '<S269>/Unit Delay' */
    BaseEngineController_LS_112_DWork.s269_UnitDelay_DSTATE =
      rtb_RelationalOperator3_i2;

    /* Update for UnitDelay: '<S266>/Unit Delay' incorporates:
     *  MinMax: '<S268>/MinMax1'
     */
    BaseEngineController_LS_112_DWork.s266_UnitDelay_DSTATE = u;

    /* Update for UnitDelay: '<S265>/Unit Delay' */
    BaseEngineController_LS_112_DWork.s265_UnitDelay_DSTATE = rtb_Switch2_c;

    /* Update for UnitDelay: '<S262>/Unit Delay1' */
    BaseEngineController_LS_112_DWork.s262_UnitDelay1_DSTATE =
      BaseEngineController_LS_112_B.s262_Switch3;

    /* Update for UnitDelay: '<S262>/Unit Delay' */
    BaseEngineController_LS_112_DWork.s262_UnitDelay_DSTATE =
      BaseEngineController_LS_112_B.s262_Switch1;

    /* Update for UnitDelay: '<S262>/Unit Delay2' */
    BaseEngineController_LS_112_DWork.s262_UnitDelay2_DSTATE =
      BaseEngineController_LS_112_B.s262_Switch4;

    /* End of Outputs for SubSystem: '<S111>/O2 PID Controller Bank B' */

    /* S-Function (motohawk_sfun_probe): '<S241>/motohawk_probe9' */
    (O2Calibration_DataStore()) = (O2ControlEnable_DataStore());

    /* Switch: '<S245>/Switch' incorporates:
     *  Constant: '<S245>/Constant'
     */
    if (BaseEngineController_LS_112_B.s241_LogicalOperator2) {
      /* MultiPortSwitch: '<S240>/Multiport Switch' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S240>/motohawk_calibration'
       */
      if ((O2Cyl1Select_DataStore()) == FALSE) {
        rtb_DataTypeConversion1_j = rtb_Multiplyby10ifnotyetenabled_p;
      } else {
        rtb_DataTypeConversion1_j = rtb_Switch4_c;
      }

      /* End of MultiPortSwitch: '<S240>/Multiport Switch' */

      /* MultiPortSwitch: '<S240>/Multiport Switch1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S240>/motohawk_calibration1'
       */
      if ((O2Cyl2Select_DataStore()) == FALSE) {
        rtb_DataTypeConversion_ep = rtb_Multiplyby10ifnotyetenabled_p;
      } else {
        rtb_DataTypeConversion_ep = rtb_Switch4_c;
      }

      /* End of MultiPortSwitch: '<S240>/Multiport Switch1' */

      /* MultiPortSwitch: '<S240>/Multiport Switch2' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S240>/motohawk_calibration2'
       */
      if ((O2Cyl3Select_DataStore()) == FALSE) {
        rtb_Product1_mc = rtb_Multiplyby10ifnotyetenabled_p;
      } else {
        rtb_Product1_mc = rtb_Switch4_c;
      }

      /* End of MultiPortSwitch: '<S240>/Multiport Switch2' */

      /* MultiPortSwitch: '<S240>/Multiport Switch3' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S240>/motohawk_calibration3'
       */
      if ((O2Cyl4Select_DataStore()) == FALSE) {
        rtb_Switch3_e = rtb_Multiplyby10ifnotyetenabled_p;
      } else {
        rtb_Switch3_e = rtb_Switch4_c;
      }

      /* End of MultiPortSwitch: '<S240>/Multiport Switch3' */

      /* MultiPortSwitch: '<S240>/Multiport Switch4' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S240>/motohawk_calibration4'
       */
      if ((O2Cyl5Select_DataStore()) == FALSE) {
        rtb_Switch2_c = rtb_Multiplyby10ifnotyetenabled_p;
      } else {
        rtb_Switch2_c = rtb_Switch4_c;
      }

      /* End of MultiPortSwitch: '<S240>/Multiport Switch4' */

      /* MultiPortSwitch: '<S240>/Multiport Switch5' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S240>/motohawk_calibration5'
       */
      if ((O2Cyl6Select_DataStore()) == FALSE) {
        rtb_Switch1_gg = rtb_Multiplyby10ifnotyetenabled_p;
      } else {
        rtb_Switch1_gg = rtb_Switch4_c;
      }

      /* End of MultiPortSwitch: '<S240>/Multiport Switch5' */

      /* MultiPortSwitch: '<S240>/Multiport Switch6' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S240>/motohawk_calibration6'
       */
      if ((O2Cyl7Select_DataStore()) == FALSE) {
        rtb_Switch_g = rtb_Multiplyby10ifnotyetenabled_p;
      } else {
        rtb_Switch_g = rtb_Switch4_c;
      }

      /* End of MultiPortSwitch: '<S240>/Multiport Switch6' */

      /* MultiPortSwitch: '<S240>/Multiport Switch7' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S240>/motohawk_calibration7'
       */
      if ((O2Cyl8Select_DataStore()) == FALSE) {
        rtb_Switch4_c = rtb_Multiplyby10ifnotyetenabled_p;
      }

      /* End of MultiPortSwitch: '<S240>/Multiport Switch7' */
      BaseEngineController_LS_112_B.s245_O2FuelMult[0] =
        rtb_DataTypeConversion1_j;
      BaseEngineController_LS_112_B.s245_O2FuelMult[1] =
        rtb_DataTypeConversion_ep;
      BaseEngineController_LS_112_B.s245_O2FuelMult[2] = rtb_Product1_mc;
      BaseEngineController_LS_112_B.s245_O2FuelMult[3] = rtb_Switch3_e;
      BaseEngineController_LS_112_B.s245_O2FuelMult[4] = rtb_Switch2_c;
      BaseEngineController_LS_112_B.s245_O2FuelMult[5] = rtb_Switch1_gg;
      BaseEngineController_LS_112_B.s245_O2FuelMult[6] = rtb_Switch_g;
      BaseEngineController_LS_112_B.s245_O2FuelMult[7] = rtb_Switch4_c;
    } else {
      for (i = 0; i < 8; i++) {
        BaseEngineController_LS_112_B.s245_O2FuelMult[i] = 1.0;
      }
    }

    /* End of Switch: '<S245>/Switch' */

    /* End of Outputs for SubSystem: '<S93>/O2 Control' */

    /* Outputs for Atomic SubSystem: '<S93>/Fuel System Manager' */
    /* Logic: '<S158>/Logical Operator' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S240>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S240>/motohawk_calibration1'
     *  S-Function (motohawk_sfun_calibration): '<S240>/motohawk_calibration2'
     *  S-Function (motohawk_sfun_calibration): '<S240>/motohawk_calibration3'
     *  S-Function (motohawk_sfun_calibration): '<S240>/motohawk_calibration4'
     *  S-Function (motohawk_sfun_calibration): '<S240>/motohawk_calibration5'
     *  S-Function (motohawk_sfun_calibration): '<S240>/motohawk_calibration6'
     *  S-Function (motohawk_sfun_calibration): '<S240>/motohawk_calibration7'
     */
    rtb_LogicalOperator_ow[0] = !(O2Cyl1Select_DataStore());
    rtb_LogicalOperator_ow[1] = !(O2Cyl2Select_DataStore());
    rtb_LogicalOperator_ow[2] = !(O2Cyl3Select_DataStore());
    rtb_LogicalOperator_ow[3] = !(O2Cyl4Select_DataStore());
    rtb_LogicalOperator_ow[4] = !(O2Cyl5Select_DataStore());
    rtb_LogicalOperator_ow[5] = !(O2Cyl6Select_DataStore());
    rtb_LogicalOperator_ow[6] = !(O2Cyl7Select_DataStore());
    rtb_LogicalOperator_ow[7] = !(O2Cyl8Select_DataStore());

    /* Outputs for Atomic SubSystem: '<S107>/O2 Fuel Adapt' */

    /* S-Function Block: <S161>/motohawk_prelookup13 */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (O2ITerm_BankAIn_DataStore()) = BaseEngineController_LS_112_B.s254_Switch1;
      (O2ITerm_BankAIdx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_LS_112_B.s254_Switch1,
         (O2ITerm_BankAIdxArr_DataStore()), 5, (O2ITerm_BankAIdx_DataStore()));
      rtb_motohawk_prelookup13 = (O2ITerm_BankAIdx_DataStore());
    }

    /* S-Function Block: <S161>/motohawk_interpolation_1d1 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d1_b2 = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup13, (real_T *) ((FuelAdaptGain_BankATbl_DataStore
           ())), 5);
      (FuelAdaptGain_BankA_DataStore()) = rtb_motohawk_interpolation_1d1_b2;
    }

    /* Product: '<S161>/Product0' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S161>/motohawk_interpolation_1d1'
     *  S-Function (motohawk_sfun_prelookup): '<S161>/motohawk_prelookup13'
     */
    rtb_DataTypeConversion1_j = BaseEngineController_LS_112_B.s254_Switch1 *
      rtb_motohawk_interpolation_1d1_b2;

    /* MinMax: '<S184>/MinMax' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S180>/motohawk_calibration'
     */
    rtb_Abs_o = (rtb_DataTypeConversion1_j >=
                 (FuelAdaptError_BankALwrLim_DataStore())) || rtIsNaN
      ((FuelAdaptError_BankALwrLim_DataStore())) ? rtb_DataTypeConversion1_j :
      (FuelAdaptError_BankALwrLim_DataStore());

    /* MinMax: '<S184>/MinMax1' incorporates:
     *  MinMax: '<S184>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S180>/motohawk_calibration1'
     */
    BaseEngineController_LS_112_B.s184_MinMax1 = (rtb_Abs_o <=
      (FuelAdaptError_BankAUprLim_DataStore())) || rtIsNaN
      ((FuelAdaptError_BankAUprLim_DataStore())) ? rtb_Abs_o :
      (FuelAdaptError_BankAUprLim_DataStore());

    /* S-Function Block: <S161>/motohawk_interpolation_2d2 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_motohawk_interpolation_2d2_o = TableInterpolation2D_real_T
        (BaseEngineController_LS_112_B.s433_motohawk_prelookup1,
         BaseEngineController_LS_112_B.s435_motohawk_prelookup1, (real_T *)
         ((FuelFlowCompAdapt_BankAMap_DataStore())), 9, 9);
      (FuelFlowCompAdapt_BankA_DataStore()) = rtb_motohawk_interpolation_2d2_o;
    }

    /* Outputs for Atomic SubSystem: '<S161>/WarmUp Disable' */
    /* Logic: '<S182>/Logical Operator' incorporates:
     *  Constant: '<S182>/Constant'
     *  MinMax: '<S182>/MinMax'
     *  RelationalOperator: '<S182>/Relational Operator'
     *  Sum: '<S182>/Sum'
     */
    BaseEngineController_LS_112_B.s182_LogicalOperator =
      !(((rtb_DesiredLambda_idx_0 >= rtb_DesiredLambda_idx_1) || rtIsNaN
         (rtb_DesiredLambda_idx_1) ? rtb_DesiredLambda_idx_0 :
         rtb_DesiredLambda_idx_1) - rtb_DesiredLambda_idx > 0.01);

    /* End of Outputs for SubSystem: '<S161>/WarmUp Disable' */

    /* Outputs for Atomic SubSystem: '<S161>/O2 Control Enable Delay' */

    /* S-Function Block: <S183>/motohawk_delta_time */
    rtb_motohawk_delta_time_mt = 0.005;

    /* Switch: '<S183>/Switch' incorporates:
     *  Constant: '<S183>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S183>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S183>/motohawk_delta_time'
     *  Sum: '<S183>/Sum'
     */
    if (BaseEngineController_LS_112_B.s241_LogicalOperator2) {
      rtb_DataTypeConversion1_j = rtb_motohawk_delta_time_mt +
        LiqDelayTime_DataStore();
    } else {
      rtb_DataTypeConversion1_j = 0.0;
    }

    /* End of Switch: '<S183>/Switch' */
    /* RelationalOperator: '<S179>/Relational Operator' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S179>/motohawk_calibration1'
     */
    rtb_LogicalOperator6_p = (rtb_DataTypeConversion1_j >
      (O2CtrlAdaptDelayTime_DataStore()));

    /* Saturate: '<S183>/Saturation' */
    rtb_Saturation_fc = rtb_DataTypeConversion1_j >= 16000.0 ? 16000.0 :
      rtb_DataTypeConversion1_j <= 0.0 ? 0.0 : rtb_DataTypeConversion1_j;

    /* S-Function (motohawk_sfun_data_write): '<S183>/motohawk_data_write' */
    /* Write to Data Storage as scalar: LiqDelayTime */
    {
      LiqDelayTime_DataStore() = rtb_Saturation_fc;
    }

    /* End of Outputs for SubSystem: '<S161>/O2 Control Enable Delay' */

    /* MinMax: '<S161>/MinMax' */
    rtb_Abs_o = (BaseEngineController_LS_112_B.s254_Switch1 >=
                 BaseEngineController_LS_112_B.s266_Switch1) || rtIsNaN
      (BaseEngineController_LS_112_B.s266_Switch1) ?
      BaseEngineController_LS_112_B.s254_Switch1 :
      BaseEngineController_LS_112_B.s266_Switch1;

    /* Logic: '<S161>/Logical Operator2' incorporates:
     *  Abs: '<S161>/Abs'
     *  MinMax: '<S161>/MinMax'
     *  RelationalOperator: '<S161>/Relational Operator'
     *  S-Function (motohawk_sfun_calibration): '<S161>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S161>/motohawk_calibration1'
     *  S-Function (motohawk_sfun_calibration): '<S161>/motohawk_calibration2'
     */
    BaseEngineController_LS_112_B.s161_LogicalOperator2 =
      (((FuelAdaptEnable_DataStore()) && (AdaptEnable_DataStore()) &&
        BaseEngineController_LS_112_B.s182_LogicalOperator &&
        rtb_LogicalOperator6_p && (fabs(rtb_Abs_o) <= (FuelAdaptDelta_DataStore()))));

    /* Outputs for Enabled SubSystem: '<S161>/Adapt FuelFlowComp Map Bank A' incorporates:
     *  EnablePort: '<S177>/Enable'
     */
    if (BaseEngineController_LS_112_B.s161_LogicalOperator2) {
      /* S-Function Block: <S177>/motohawk_adapt_table */
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
              BaseEngineController_LS_112_B.s184_MinMax1;
            if (_new > (FuelFlowCompMaxValue_BankA_DataStore()))
              _new = (FuelFlowCompMaxValue_BankA_DataStore());
            if (_new < (FuelFlowCompMinValue_BankA_DataStore()))
              _new = (FuelFlowCompMinValue_BankA_DataStore());
            (FuelFlowCompAdapt_BankAMap_DataStore())[_row][_col] = _new;
          } else if (_col_frac == 3) {
            _new = (FuelFlowCompAdapt_BankAMap_DataStore())[_row][_col+1] +
              BaseEngineController_LS_112_B.s184_MinMax1;
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

      /* RelationalOperator: '<S177>/Relational Operator2' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S177>/motohawk_calibration2'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S161>/motohawk_interpolation_2d2'
       */
      rtb_RelationalOperator2_hm = ((rtb_motohawk_interpolation_2d2_o >=
        (FuelFlowCompMaxValue_BankA_DataStore())));

      /* S-Function (motohawk_sfun_fault_def): '<S177>/motohawk_fault_def' */

      /* Set Fault Suspected Status: FuelAdaptRangeHi_BankA */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(67, rtb_RelationalOperator2_hm);
        UpdateFault(67);
      }

      /* RelationalOperator: '<S177>/Relational Operator1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S177>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S161>/motohawk_interpolation_2d2'
       */
      rtb_RelationalOperator1_lp4 = ((rtb_motohawk_interpolation_2d2_o <=
        (FuelFlowCompMinValue_BankA_DataStore())));

      /* S-Function (motohawk_sfun_fault_def): '<S177>/motohawk_fault_def1' */

      /* Set Fault Suspected Status: FuelAdaptRangeLow_BankA */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(69, rtb_RelationalOperator1_lp4);
        UpdateFault(69);
      }
    }

    /* End of Outputs for SubSystem: '<S161>/Adapt FuelFlowComp Map Bank A' */
    /* S-Function Block: <S161>/motohawk_prelookup1 */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (O2ITerm_BankBIn_DataStore()) = BaseEngineController_LS_112_B.s266_Switch1;
      (O2ITerm_BankBIdx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_LS_112_B.s266_Switch1,
         (O2ITerm_BankBIdxArr_DataStore()), 5, (O2ITerm_BankBIdx_DataStore()));
      rtb_motohawk_prelookup1_c = (O2ITerm_BankBIdx_DataStore());
    }

    /* S-Function Block: <S161>/motohawk_interpolation_1d2 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d2_d4 = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup1_c, (real_T *)
         ((FuelAdaptGain_BankBTbl_DataStore())), 5);
      (FuelAdaptGain_BankB_DataStore()) = rtb_motohawk_interpolation_1d2_d4;
    }

    /* Product: '<S161>/Product1' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S161>/motohawk_interpolation_1d2'
     *  S-Function (motohawk_sfun_prelookup): '<S161>/motohawk_prelookup1'
     */
    rtb_DataTypeConversion1_j = BaseEngineController_LS_112_B.s266_Switch1 *
      rtb_motohawk_interpolation_1d2_d4;

    /* MinMax: '<S185>/MinMax' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S181>/motohawk_calibration'
     */
    rtb_Abs_o = (rtb_DataTypeConversion1_j >=
                 (FuelAdaptError_BankBLwrLim_DataStore())) || rtIsNaN
      ((FuelAdaptError_BankBLwrLim_DataStore())) ? rtb_DataTypeConversion1_j :
      (FuelAdaptError_BankBLwrLim_DataStore());

    /* MinMax: '<S185>/MinMax1' incorporates:
     *  MinMax: '<S185>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S181>/motohawk_calibration1'
     */
    BaseEngineController_LS_112_B.s185_MinMax1 = (rtb_Abs_o <=
      (FuelAdaptError_BankBUprLim_DataStore())) || rtIsNaN
      ((FuelAdaptError_BankBUprLim_DataStore())) ? rtb_Abs_o :
      (FuelAdaptError_BankBUprLim_DataStore());

    /* S-Function Block: <S161>/motohawk_interpolation_2d3 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_motohawk_interpolation_2d3 = TableInterpolation2D_real_T
        (BaseEngineController_LS_112_B.s433_motohawk_prelookup1,
         BaseEngineController_LS_112_B.s435_motohawk_prelookup1, (real_T *)
         ((FuelFlowCompAdapt_BankBMap_DataStore())), 9, 9);
      (FuelFlowCompAdapt_BankB_DataStore()) = rtb_motohawk_interpolation_2d3;
    }

    /* Outputs for Enabled SubSystem: '<S161>/Adapt FuelFlowComp Map Bank B' incorporates:
     *  EnablePort: '<S178>/Enable'
     */
    if (BaseEngineController_LS_112_B.s161_LogicalOperator2) {
      /* S-Function Block: <S178>/motohawk_adapt_table */
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
              BaseEngineController_LS_112_B.s185_MinMax1;
            if (_new > (FuelFlowCompMaxValue_DataStore()))
              _new = (FuelFlowCompMaxValue_DataStore());
            if (_new < (FuelFlowCompMinValue_DataStore()))
              _new = (FuelFlowCompMinValue_DataStore());
            (FuelFlowCompAdapt_BankBMap_DataStore())[_row][_col] = _new;
          } else if (_col_frac == 3) {
            _new = (FuelFlowCompAdapt_BankBMap_DataStore())[_row][_col+1] +
              BaseEngineController_LS_112_B.s185_MinMax1;
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

      /* RelationalOperator: '<S178>/Relational Operator2' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S178>/motohawk_calibration2'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S161>/motohawk_interpolation_2d3'
       */
      rtb_RelationalOperator2_nx = ((rtb_motohawk_interpolation_2d3 >=
        (FuelFlowCompMaxValue_DataStore())));

      /* S-Function (motohawk_sfun_fault_def): '<S178>/motohawk_fault_def' */

      /* Set Fault Suspected Status: FuelAdaptRangeHi_BankB */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(68, rtb_RelationalOperator2_nx);
        UpdateFault(68);
      }

      /* RelationalOperator: '<S178>/Relational Operator1' incorporates:
       *  S-Function (motohawk_sfun_calibration): '<S178>/motohawk_calibration1'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S161>/motohawk_interpolation_2d3'
       */
      rtb_RelationalOperator1_d = ((rtb_motohawk_interpolation_2d3 <=
        (FuelFlowCompMinValue_DataStore())));

      /* S-Function (motohawk_sfun_fault_def): '<S178>/motohawk_fault_def1' */

      /* Set Fault Suspected Status: FuelAdaptRangeLow_BankB */
      {
        extern void SetFaultSuspected(uint32_T fault, boolean_T val);
        extern void UpdateFault(uint32_T fault);
        SetFaultSuspected(70, rtb_RelationalOperator1_d);
        UpdateFault(70);
      }
    }

    /* End of Outputs for SubSystem: '<S161>/Adapt FuelFlowComp Map Bank B' */

    /* S-Function Block: <S161>/motohawk_interpolation_2d1 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_motohawk_interpolation_2d1_o = TableInterpolation2D_real_T
        (BaseEngineController_LS_112_B.s433_motohawk_prelookup1,
         BaseEngineController_LS_112_B.s435_motohawk_prelookup1, (real_T *)
         ((FuelFlowCompMap_DataStore())), 9, 9);
      (FuelFlowComp_DataStore()) = rtb_motohawk_interpolation_2d1_o;
    }

    /* Product: '<S161>/Divide' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S161>/motohawk_interpolation_2d1'
     *  S-Function (motohawk_sfun_interpolation_2d): '<S161>/motohawk_interpolation_2d2'
     */
    rtb_DataTypeConversion1_j = rtb_motohawk_interpolation_2d1_o *
      rtb_motohawk_interpolation_2d2_o;

    /* Product: '<S161>/Divide1' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S161>/motohawk_interpolation_2d1'
     *  S-Function (motohawk_sfun_interpolation_2d): '<S161>/motohawk_interpolation_2d3'
     */
    rtb_DataTypeConversion_ep = rtb_motohawk_interpolation_2d3 *
      rtb_motohawk_interpolation_2d1_o;

    /* End of Outputs for SubSystem: '<S107>/O2 Fuel Adapt' */

    /* Product: '<S158>/Product1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S240>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S240>/motohawk_calibration1'
     *  S-Function (motohawk_sfun_calibration): '<S240>/motohawk_calibration2'
     *  S-Function (motohawk_sfun_calibration): '<S240>/motohawk_calibration3'
     *  S-Function (motohawk_sfun_calibration): '<S240>/motohawk_calibration4'
     *  S-Function (motohawk_sfun_calibration): '<S240>/motohawk_calibration5'
     *  S-Function (motohawk_sfun_calibration): '<S240>/motohawk_calibration6'
     *  S-Function (motohawk_sfun_calibration): '<S240>/motohawk_calibration7'
     */
    rtb_Product1_fy[0] = (real_T)(O2Cyl1Select_DataStore()) *
      rtb_DataTypeConversion_ep;
    rtb_Product1_fy[1] = (real_T)(O2Cyl2Select_DataStore()) *
      rtb_DataTypeConversion_ep;
    rtb_Product1_fy[2] = (real_T)(O2Cyl3Select_DataStore()) *
      rtb_DataTypeConversion_ep;
    rtb_Product1_fy[3] = (real_T)(O2Cyl4Select_DataStore()) *
      rtb_DataTypeConversion_ep;
    rtb_Product1_fy[4] = (real_T)(O2Cyl5Select_DataStore()) *
      rtb_DataTypeConversion_ep;
    rtb_Product1_fy[5] = (real_T)(O2Cyl6Select_DataStore()) *
      rtb_DataTypeConversion_ep;
    rtb_Product1_fy[6] = (real_T)(O2Cyl7Select_DataStore()) *
      rtb_DataTypeConversion_ep;
    rtb_Product1_fy[7] = (real_T)(O2Cyl8Select_DataStore()) *
      rtb_DataTypeConversion_ep;

    /* S-Function Block: <S164>/motohawk_prelookup */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (DesAFRatioIn_DataStore()) = BaseEngineController_LS_112_B.s577_Merge;
      (DesAFRatioIdx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_LS_112_B.s577_Merge, (DesAFRatioIdxArr_DataStore()),
         11, (DesAFRatioIdx_DataStore()));
      rtb_motohawk_prelookup_it = (DesAFRatioIdx_DataStore());
    }

    /* S-Function Block: <S164>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      BaseEngineController_LS_112_B.s164_motohawk_interpolation_1d =
        TableInterpolation1D_real_T(rtb_motohawk_prelookup_it, (real_T *)
        ((DesAFRatioTbl_DataStore())), 11);
      (DesAFRatio_DataStore()) =
        BaseEngineController_LS_112_B.s164_motohawk_interpolation_1d;
    }

    /* Product: '<S162>/Fuel Flow = Mass Airflow * Equivalence Ratio // Air-to-fuel Ratio' */
    BaseEngineController_LS_112_B.s162_FuelFlowMassAirflowEquivalenceRatioAirtofuelRatio
      = BaseEngineController_LS_112_B.s404_MultiportSwitch *
      rtb_DesiredLambda_idx /
      BaseEngineController_LS_112_B.s164_motohawk_interpolation_1d;

    /* Product: '<S159>/Per-Cylinder Mass Flow Rate' incorporates:
     *  DataTypeConversion: '<S159>/Data Type Conversion'
     *  S-Function (motohawk_sfun_data_read): '<S159>/Number of Combustion Events Per Revolution'
     */
    BaseEngineController_LS_112_B.s159_PerCylinderMassFlowRate =
      BaseEngineController_LS_112_B.s162_FuelFlowMassAirflowEquivalenceRatioAirtofuelRatio
      / (real_T)((uint8_T)CombEventsPerRev_DataStore());

    /* Product: '<S159>/Apply Multipliers for O2, Knock Control, and Enrichment1' */
    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_112_B.s159_ApplyMultipliersforO2KnockControlandEnrichment1
        [i] = BaseEngineController_LS_112_B.s159_PerCylinderMassFlowRate *
        BaseEngineController_LS_112_B.s245_O2FuelMult[i];
    }

    /* End of Product: '<S159>/Apply Multipliers for O2, Knock Control, and Enrichment1' */

    /* Outputs for Atomic SubSystem: '<S107>/Injector Manager' */

    /* Outputs for Enabled SubSystem: '<S160>/Delta TPS Transient Fueling' incorporates:
     *  EnablePort: '<S165>/Enable'
     */
    /* S-Function (motohawk_sfun_calibration): '<S160>/motohawk_calibration1' */
    if ((DeltaTPSFuelingEnable_DataStore())) {
      if (!BaseEngineController_LS_112_DWork.s160_DeltaTPSTransientFueling_MODE)
      {
        /* S-Function Block: <S171>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_LS_112_DWork.s171_motohawk_delta_time_DWORK1 =
            now - Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }

        /* InitializeConditions for UnitDelay: '<S174>/Unit Delay' */
        BaseEngineController_LS_112_DWork.s174_UnitDelay_DSTATE = 0.0;

        /* S-Function Block: <S170>/motohawk_delta_time */
        {
          uint32_T now = 0;
          extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
            (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
          extern uint32_T Timer_FreeRunningCounter_GetRawTicksFromTime(uint32_T
            u32Time_us);
          Timer_FreeRunningCounter_GetDeltaUpdateReference_us(&now, NULL);
          BaseEngineController_LS_112_DWork.s170_motohawk_delta_time_DWORK1 =
            now - Timer_FreeRunningCounter_GetRawTicksFromTime(0.0);
        }

        /* InitializeConditions for UnitDelay: '<S173>/Unit Delay' */
        BaseEngineController_LS_112_DWork.s173_UnitDelay_DSTATE = 0.0;
        BaseEngineController_LS_112_DWork.s160_DeltaTPSTransientFueling_MODE =
          TRUE;
      }

      /* S-Function Block: <S171>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_112_DWork.s171_motohawk_delta_time_DWORK1,
           NULL);
        rtb_Product_ck = ((real_T) delta) * 0.000001;
      }

      /* Product: '<S171>/Product' incorporates:
       *  MinMax: '<S171>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S171>/motohawk_calibration'
       */
      rtb_Product_ck /= (rtb_Product_ck >= (DeltaMAP_FiltConst_DataStore())) ||
        rtIsNaN((DeltaMAP_FiltConst_DataStore())) ? rtb_Product_ck :
        (DeltaMAP_FiltConst_DataStore());

      /* Sum: '<S174>/Sum1' incorporates:
       *  Constant: '<S174>/Constant'
       *  Product: '<S174>/Product'
       *  Product: '<S174>/Product1'
       *  Sum: '<S174>/Sum'
       *  UnitDelay: '<S174>/Unit Delay'
       */
      BaseEngineController_LS_112_B.s174_Sum1 = (1.0 - rtb_Product_ck) *
        BaseEngineController_LS_112_DWork.s174_UnitDelay_DSTATE +
        BaseEngineController_LS_112_B.s598_Merge * rtb_Product_ck;

      /* Sum: '<S165>/Sum1' */
      BaseEngineController_LS_112_B.s165_Sum1 =
        BaseEngineController_LS_112_B.s598_Merge -
        BaseEngineController_LS_112_B.s174_Sum1;

      /* S-Function Block: <S170>/motohawk_delta_time */
      {
        uint32_T delta;
        extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
        delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
          (&BaseEngineController_LS_112_DWork.s170_motohawk_delta_time_DWORK1,
           NULL);
        rtb_Product_ck = ((real_T) delta) * 0.000001;
      }

      /* Product: '<S170>/Product' incorporates:
       *  MinMax: '<S170>/MinMax'
       *  S-Function (motohawk_sfun_calibration): '<S170>/motohawk_calibration'
       */
      rtb_Product_ck /= (rtb_Product_ck >= (DeltaTPS_FiltConst_DataStore())) ||
        rtIsNaN((DeltaTPS_FiltConst_DataStore())) ? rtb_Product_ck :
        (DeltaTPS_FiltConst_DataStore());

      /* Sum: '<S173>/Sum1' incorporates:
       *  Constant: '<S173>/Constant'
       *  Product: '<S173>/Product'
       *  Product: '<S173>/Product1'
       *  Sum: '<S173>/Sum'
       *  UnitDelay: '<S173>/Unit Delay'
       */
      BaseEngineController_LS_112_B.s173_Sum1 = (1.0 - rtb_Product_ck) *
        BaseEngineController_LS_112_DWork.s173_UnitDelay_DSTATE +
        BaseEngineController_LS_112_B.s450_Switch2 * rtb_Product_ck;

      /* Sum: '<S165>/Sum' */
      BaseEngineController_LS_112_B.s165_Sum =
        BaseEngineController_LS_112_B.s450_Switch2 -
        BaseEngineController_LS_112_B.s173_Sum1;

      /* S-Function Block: <S165>/motohawk_prelookup */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (MAF09In_DataStore()) =
          BaseEngineController_LS_112_B.s404_MultiportSwitch;
        (MAF09Idx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_LS_112_B.s404_MultiportSwitch,
           (MAF09IdxArr_DataStore()), 9, (MAF09Idx_DataStore()));
        rtb_motohawk_prelookup_b = (MAF09Idx_DataStore());
      }

      /* S-Function Block: <S165>/motohawk_prelookup1 */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (DeltaTPS17In_DataStore()) = BaseEngineController_LS_112_B.s165_Sum;
        (DeltaTPS17Idx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_LS_112_B.s165_Sum, (DeltaTPS17IdxArr_DataStore()),
           17, (DeltaTPS17Idx_DataStore()));
        rtb_motohawk_prelookup1_p = (DeltaTPS17Idx_DataStore());
      }

      /* S-Function Block: <S165>/motohawk_interpolation_2d2 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_motohawk_interpolation_2d2_m = TableInterpolation2D_real_T
          (rtb_motohawk_prelookup_b, rtb_motohawk_prelookup1_p, (real_T *)
           ((DeltaTPS_MultMap_DataStore())), 9, 17);
        (DeltaTPS_Mult_DataStore()) = rtb_motohawk_interpolation_2d2_m;
      }

      /* RelationalOperator: '<S167>/RelOp' incorporates:
       *  Constant: '<S167>/Constant'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S165>/motohawk_interpolation_2d2'
       *  S-Function (motohawk_sfun_prelookup): '<S165>/motohawk_prelookup'
       *  S-Function (motohawk_sfun_prelookup): '<S165>/motohawk_prelookup1'
       */
      rtb_LogicalOperator6_p = (rtb_motohawk_interpolation_2d2_m != 1.0);

      /* S-Function Block: <S165>/motohawk_prelookup3 */
      {
        extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
          ordarr[], uint32_T sz, uint16_T prev);
        (DeltaMAP17In_DataStore()) = BaseEngineController_LS_112_B.s165_Sum1;
        (DeltaMAP17Idx_DataStore()) = TablePrelookup_real_T
          (BaseEngineController_LS_112_B.s165_Sum1, (DeltaMAP17IdxArr_DataStore()),
           17, (DeltaMAP17Idx_DataStore()));
        rtb_motohawk_prelookup3 = (DeltaMAP17Idx_DataStore());
      }

      /* S-Function Block: <S165>/motohawk_interpolation_2d1 */
      {
        extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T
          col_in, real_T *map_data, uint32_T row_sz, uint32_T col_sz);
        rtb_motohawk_interpolation_2d1_m = TableInterpolation2D_real_T
          (rtb_motohawk_prelookup_b, rtb_motohawk_prelookup3, (real_T *)
           ((DeltaMAP_MultMap_DataStore())), 9, 17);
        (DeltaMAP_Mult_DataStore()) = rtb_motohawk_interpolation_2d1_m;
      }

      /* Logic: '<S165>/Logical Operator' incorporates:
       *  Constant: '<S168>/Constant'
       *  RelationalOperator: '<S168>/RelOp'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S165>/motohawk_interpolation_2d1'
       *  S-Function (motohawk_sfun_prelookup): '<S165>/motohawk_prelookup'
       *  S-Function (motohawk_sfun_prelookup): '<S165>/motohawk_prelookup3'
       */
      rtb_LogicalOperator6_p = ((rtb_motohawk_interpolation_2d1_m != 1.0) ||
        rtb_LogicalOperator6_p);

      /* Outputs for Enabled SubSystem: '<S165>/ECT Transient Fueling' incorporates:
       *  EnablePort: '<S169>/Enable'
       */
      if (rtb_LogicalOperator6_p) {
        if (!BaseEngineController_LS_112_DWork.s165_ECTTransientFueling_MODE) {
          BaseEngineController_LS_112_DWork.s165_ECTTransientFueling_MODE = TRUE;
        }

        /* S-Function Block: <S169>/motohawk_interpolation_1d */
        {
          extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T
            *tbl_data, uint32_T sz);
          BaseEngineController_LS_112_B.s169_motohawk_interpolation_1d =
            TableInterpolation1D_real_T
            (BaseEngineController_LS_112_B.s431_motohawk_prelookup, (real_T *)
             ((ECTTransFuelMultTbl_DataStore())), 5);
          (ECTTransFuelMult_DataStore()) =
            BaseEngineController_LS_112_B.s169_motohawk_interpolation_1d;
        }
      } else {
        if (BaseEngineController_LS_112_DWork.s165_ECTTransientFueling_MODE) {
          /* Disable for Outport: '<S169>/Mult' */
          BaseEngineController_LS_112_B.s169_motohawk_interpolation_1d = 1.0;
          BaseEngineController_LS_112_DWork.s165_ECTTransientFueling_MODE =
            FALSE;
        }
      }

      /* End of Outputs for SubSystem: '<S165>/ECT Transient Fueling' */

      /* Outputs for Enabled SubSystem: '<S165>/OXY Transient Fueling' incorporates:
       *  EnablePort: '<S172>/Enable'
       */
      if (rtb_LogicalOperator6_p) {
        if (!BaseEngineController_LS_112_DWork.s165_OXYTransientFueling_MODE) {
          BaseEngineController_LS_112_DWork.s165_OXYTransientFueling_MODE = TRUE;
        }

        /* S-Function Block: <S172>/motohawk_interpolation_1d */
        {
          extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T
            *tbl_data, uint32_T sz);
          BaseEngineController_LS_112_B.s172_motohawk_interpolation_1d =
            TableInterpolation1D_real_T
            (BaseEngineController_LS_112_B.s434_motohawk_prelookup, (real_T *)
             ((OXYTransFuelMultTbl_DataStore())), 5);
          (OXYTransFuelMult_DataStore()) =
            BaseEngineController_LS_112_B.s172_motohawk_interpolation_1d;
        }
      } else {
        if (BaseEngineController_LS_112_DWork.s165_OXYTransientFueling_MODE) {
          /* Disable for Outport: '<S172>/Mult' */
          BaseEngineController_LS_112_B.s172_motohawk_interpolation_1d = 1.0;
          BaseEngineController_LS_112_DWork.s165_OXYTransientFueling_MODE =
            FALSE;
        }
      }

      /* End of Outputs for SubSystem: '<S165>/OXY Transient Fueling' */

      /* Product: '<S165>/Product1' incorporates:
       *  S-Function (motohawk_sfun_interpolation_2d): '<S165>/motohawk_interpolation_2d1'
       *  S-Function (motohawk_sfun_interpolation_2d): '<S165>/motohawk_interpolation_2d2'
       *  S-Function (motohawk_sfun_prelookup): '<S165>/motohawk_prelookup'
       *  S-Function (motohawk_sfun_prelookup): '<S165>/motohawk_prelookup1'
       *  S-Function (motohawk_sfun_prelookup): '<S165>/motohawk_prelookup3'
       */
      BaseEngineController_LS_112_B.s165_Product1 =
        rtb_motohawk_interpolation_2d2_m *
        BaseEngineController_LS_112_B.s169_motohawk_interpolation_1d *
        rtb_motohawk_interpolation_2d1_m *
        BaseEngineController_LS_112_B.s172_motohawk_interpolation_1d;

      /* Update for UnitDelay: '<S174>/Unit Delay' */
      BaseEngineController_LS_112_DWork.s174_UnitDelay_DSTATE =
        BaseEngineController_LS_112_B.s174_Sum1;

      /* Update for UnitDelay: '<S173>/Unit Delay' */
      BaseEngineController_LS_112_DWork.s173_UnitDelay_DSTATE =
        BaseEngineController_LS_112_B.s173_Sum1;
    } else {
      if (BaseEngineController_LS_112_DWork.s160_DeltaTPSTransientFueling_MODE)
      {
        /* Disable for Enabled SubSystem: '<S165>/ECT Transient Fueling' */
        /* Disable for Outport: '<S169>/Mult' */
        BaseEngineController_LS_112_B.s169_motohawk_interpolation_1d = 1.0;
        BaseEngineController_LS_112_DWork.s165_ECTTransientFueling_MODE = FALSE;

        /* End of Disable for SubSystem: '<S165>/ECT Transient Fueling' */

        /* Disable for Enabled SubSystem: '<S165>/OXY Transient Fueling' */
        /* Disable for Outport: '<S172>/Mult' */
        BaseEngineController_LS_112_B.s172_motohawk_interpolation_1d = 1.0;
        BaseEngineController_LS_112_DWork.s165_OXYTransientFueling_MODE = FALSE;

        /* End of Disable for SubSystem: '<S165>/OXY Transient Fueling' */

        /* Disable for Outport: '<S165>/DeltaTPSMult' */
        BaseEngineController_LS_112_B.s165_Product1 = 1.0;
        BaseEngineController_LS_112_DWork.s160_DeltaTPSTransientFueling_MODE =
          FALSE;
      }
    }

    /* End of S-Function (motohawk_sfun_calibration): '<S160>/motohawk_calibration1' */
    /* End of Outputs for SubSystem: '<S160>/Delta TPS Transient Fueling' */

    /* Product: '<S160>/Divide' */
    for (i = 0; i < 8; i++) {
      rtb_Divide_dm[i] = BaseEngineController_LS_112_B.s165_Product1 *
        BaseEngineController_LS_112_B.s159_ApplyMultipliersforO2KnockControlandEnrichment1
        [i];
    }

    /* End of Product: '<S160>/Divide' */
    /* S-Function Block: <S160>/Make-Up Pulse End of Injection Timing1 */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_EOI = TableInterpolation2D_real_T
        (BaseEngineController_LS_112_B.s433_motohawk_prelookup1,
         BaseEngineController_LS_112_B.s435_motohawk_prelookup1, (real_T *)
         ((MakeUpEOIMap_DataStore())), 9, 9);
      (MakeUpEOI_DataStore()) = rtb_EOI;
    }

    /* Outputs for Enabled SubSystem: '<S166>/Multiply and Divide, avoiding divde by zero' incorporates:
     *  EnablePort: '<S175>/Enable'
     */
    /* RelationalOperator: '<S176>/RelOp' incorporates:
     *  Constant: '<S176>/Constant'
     */
    if (BaseEngineController_LS_112_B.s555_Sum1 != 0.0) {
      /* Product: '<S175>/charge mass' incorporates:
       *  Constant: '<S166>/Units Equivalency Factor'
       */
      for (i = 0; i < 8; i++) {
        BaseEngineController_LS_112_B.s175_chargemass[i] = rtb_Divide_dm[i] *
          60000.0 / BaseEngineController_LS_112_B.s555_Sum1;
      }

      /* End of Product: '<S175>/charge mass' */
    }

    /* End of RelationalOperator: '<S176>/RelOp' */
    /* End of Outputs for SubSystem: '<S166>/Multiply and Divide, avoiding divde by zero' */
    /* S-Function Block: <S160>/Primary Pulse Injection Timing */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_PrimaryPulseInjectionTiming = TableInterpolation2D_real_T
        (BaseEngineController_LS_112_B.s433_motohawk_prelookup1,
         BaseEngineController_LS_112_B.s435_motohawk_prelookup1, (real_T *)
         ((PrimarySOIMap_DataStore())), 9, 9);
      (PrimarySOI_DataStore()) = rtb_PrimaryPulseInjectionTiming;
    }

    /* End of Outputs for SubSystem: '<S107>/Injector Manager' */

    /* Product: '<S158>/Product2' incorporates:
     *  Product: '<S158>/Product'
     */
    for (i = 0; i < 8; i++) {
      rtb_Product1_fy[i] *= rtb_DataTypeConversion1_j * (real_T)
        rtb_LogicalOperator_ow[i] *
        BaseEngineController_LS_112_B.s175_chargemass[i];
    }

    /* End of Product: '<S158>/Product2' */

    /* End of Outputs for SubSystem: '<S93>/Fuel System Manager' */

    /* Switch: '<S108>/Switch4' incorporates:
     *  Constant: '<S108>/Constant2'
     *  Logic: '<S108>/Logical Operator'
     *  Sum: '<S108>/Sum2'
     */
    if (!BaseEngineController_LS_112_B.s222_RelOp) {
      rtb_DataTypeConversion1_j = 0.0;
    } else {
      rtb_DataTypeConversion1_j =
        BaseEngineController_LS_112_B.s212_DontallowsetpointtoeverdropbelowtheTargetRPM
        + BaseEngineController_LS_112_B.s110_MinGovAirPID;
    }

    /* End of Switch: '<S108>/Switch4' */
    /* Switch: '<S108>/Switch1' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S108>/motohawk_data_read'
     */
    if (((uint8_T)IACType_DataStore()) > 0) {
      /* ZeroOrderHold: '<S93>/Zero-Order Hold5' incorporates:
       *  Constant: '<S108>/Constant1'
       *  Sum: '<S108>/Sum'
       */
      BaseEngineController_LS_112_B.s92_IACS = 100.0 - rtb_DataTypeConversion1_j;
    } else {
      /* ZeroOrderHold: '<S93>/Zero-Order Hold5' incorporates:
       *  Constant: '<S108>/Constant'
       */
      BaseEngineController_LS_112_B.s92_IACS = 0.0;
    }

    /* End of Switch: '<S108>/Switch1' */

    /* ZeroOrderHold: '<S93>/Zero-Order Hold1' */
    BaseEngineController_LS_112_B.s92_SparkEnergy =
      BaseEngineController_LS_112_B.s112_motohawk_interpolation_2d1;

    /* ZeroOrderHold: '<S93>/Zero-Order Hold11' */
    BaseEngineController_LS_112_B.s92_WASTEGATE =
      BaseEngineController_LS_112_B.s104_Switch;

    /* ZeroOrderHold: '<S93>/Zero-Order Hold12' */
    BaseEngineController_LS_112_B.s92_SparkAdv =
      BaseEngineController_LS_112_B.s275_Switch;

    /* ZeroOrderHold: '<S93>/Zero-Order Hold16' incorporates:
     *  Constant: '<S93>/ON1'
     */
    BaseEngineController_LS_112_B.s92_FUELP = TRUE;

    /* ZeroOrderHold: '<S93>/Zero-Order Hold17' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S160>/Primary Pulse Injection Timing'
     */
    BaseEngineController_LS_112_B.s92_SOI = rtb_PrimaryPulseInjectionTiming;

    /* ZeroOrderHold: '<S93>/Zero-Order Hold18' */
    BaseEngineController_LS_112_B.s92_Throttle =
      BaseEngineController_LS_112_B.s102_MultiportSwitch;

    /* ZeroOrderHold: '<S93>/Zero-Order Hold2' */
    BaseEngineController_LS_112_B.s92_IACP = rtb_DataTypeConversion1_j;

    /* ZeroOrderHold: '<S93>/Zero-Order Hold3' incorporates:
     *  S-Function (motohawk_sfun_interpolation_2d): '<S160>/Make-Up Pulse End of Injection Timing1'
     */
    BaseEngineController_LS_112_B.s92_MakeUpEOI = rtb_EOI;

    /* ZeroOrderHold: '<S93>/Zero-Order Hold6' */
    BaseEngineController_LS_112_B.s92_FAN1 =
      BaseEngineController_LS_112_B.s106_Switch4;

    /* ZeroOrderHold: '<S93>/Zero-Order Hold7' */
    BaseEngineController_LS_112_B.s92_FAN2 =
      BaseEngineController_LS_112_B.s106_Switch5;

    /* ZeroOrderHold: '<S93>/Zero-Order Hold8' */
    BaseEngineController_LS_112_B.s92_AC =
      BaseEngineController_LS_112_B.s101_LogicalOperator;

    /* ZeroOrderHold: '<S93>/Zero-Order Hold9' */
    memcpy((void *)(&BaseEngineController_LS_112_B.s92_FPC[0]), (void *)
           &rtb_Product1_fy[0], sizeof(real_T) << 3U);
  } else {
    if (BaseEngineController_LS_112_DWork.s15_Run_MODE) {
      /* Level2 S-Function Block: '<S93>/motohawk_trigger1' (motohawk_sfun_trigger) */
      /* Disable for Trigger_FGND_5XRTI_PERIODIC_5057p0001 */
      BaseEngineController_LS_112_DWork.s93_motohawk_trigger1_DWORK1 = 0;

      /* Disable for Atomic SubSystem: '<S93>/Fuel System Manager' */
      /* Disable for Atomic SubSystem: '<S107>/Injector Manager' */
      /* Disable for Enabled SubSystem: '<S160>/Delta TPS Transient Fueling' */
      /* Disable for Enabled SubSystem: '<S165>/ECT Transient Fueling' */
      /* Disable for Outport: '<S169>/Mult' */
      BaseEngineController_LS_112_B.s169_motohawk_interpolation_1d = 1.0;
      BaseEngineController_LS_112_DWork.s165_ECTTransientFueling_MODE = FALSE;

      /* End of Disable for SubSystem: '<S165>/ECT Transient Fueling' */

      /* Disable for Enabled SubSystem: '<S165>/OXY Transient Fueling' */
      /* Disable for Outport: '<S172>/Mult' */
      BaseEngineController_LS_112_B.s172_motohawk_interpolation_1d = 1.0;
      BaseEngineController_LS_112_DWork.s165_OXYTransientFueling_MODE = FALSE;

      /* End of Disable for SubSystem: '<S165>/OXY Transient Fueling' */

      /* Disable for Outport: '<S165>/DeltaTPSMult' */
      BaseEngineController_LS_112_B.s165_Product1 = 1.0;
      BaseEngineController_LS_112_DWork.s160_DeltaTPSTransientFueling_MODE =
        FALSE;

      /* End of Disable for SubSystem: '<S160>/Delta TPS Transient Fueling' */
      /* End of Disable for SubSystem: '<S107>/Injector Manager' */
      /* End of Disable for SubSystem: '<S93>/Fuel System Manager' */
      BaseEngineController_LS_112_DWork.s15_Run_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S15>/Run' */

  /* If: '<S799>/If' incorporates:
   *  Inport: '<S800>/In1'
   *  Inport: '<S801>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S799>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S799>/override_enable'
   */
  if ((AC_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S799>/NewValue' incorporates:
     *  ActionPort: '<S800>/Action Port'
     */
    rtb_LogicalOperator6_p = (AC_new_DataStore());

    /* End of Outputs for SubSystem: '<S799>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S799>/OldValue' incorporates:
     *  ActionPort: '<S801>/Action Port'
     */
    rtb_LogicalOperator6_p = BaseEngineController_LS_112_B.s92_AC;

    /* End of Outputs for SubSystem: '<S799>/OldValue' */
  }

  /* End of If: '<S799>/If' */

  /* Logic: '<S798>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S798>/0 = No Inversion 1 = Inversion'
   */
  BaseEngineController_LS_112_B.s798_LogicalOperator = rtb_LogicalOperator6_p ^
    (AC_Polarity_DataStore());

  /* S-Function (motohawk_sfun_trigger): '<S483>/motohawk_trigger1' */
  /* Enable for Trigger_FGND_5XRTI_PERIODIC_9816p0004 */
  if (BaseEngineController_LS_112_DWork.s483_motohawk_trigger1_DWORK1 == 0) {
    BaseEngineController_LS_112_DWork.s483_motohawk_trigger1_DWORK1 = 1;
  }

  /* RelationalOperator: '<S417>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S417>/motohawk_calibration10'
   */
  rtb_RelationalOperator_kc = (BaseEngineController_LS_112_B.s469_Sum >=
    (FuelLevel_KeyUpDelay_DataStore()));

  /* S-Function (motohawk_sfun_data_read): '<S396>/motohawk_data_read' */
  BaseEngineController_LS_112_B.s396_motohawk_data_read = FuelLvl_NVM_DataStore();

  /* Switch: '<S396>/Switch2' */
  if (rtb_RelationalOperator_kc) {
    rtb_DataTypeConversion_hg = BaseEngineController_LS_112_B.s638_Merge;
  } else {
    rtb_DataTypeConversion_hg =
      BaseEngineController_LS_112_B.s396_motohawk_data_read;
  }

  /* End of Switch: '<S396>/Switch2' */

  /* Sum: '<S417>/Sum' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S417>/motohawk_data_read'
   */
  rtb_DataTypeConversion1_j = BaseEngineController_LS_112_B.s638_Merge -
    FuelLvl_NVM_DataStore();

  /* Logic: '<S417>/Logical Operator' incorporates:
   *  RelationalOperator: '<S417>/Relational Operator1'
   *  S-Function (motohawk_sfun_calibration): '<S417>/motohawk_calibration1'
   */
  rtb_LogicalOperator_d = ((rtb_DataTypeConversion1_j >=
    (FuelLevl_KeyUpDiff_DataStore())) && rtb_RelationalOperator_kc);

  /* Logic: '<S419>/Logical Operator' incorporates:
   *  Logic: '<S419>/Logical Operator1'
   *  UnitDelay: '<S419>/Unit Delay'
   */
  BaseEngineController_LS_112_B.s419_LogicalOperator = ((rtb_LogicalOperator_d &&
    (!BaseEngineController_LS_112_DWork.s419_UnitDelay_DSTATE)));

  /* Logic: '<S396>/Logical Operator1' incorporates:
   *  Logic: '<S396>/Logical Operator'
   */
  rtb_LogicalOperator6_p = ((!rtb_RelationalOperator_kc) ||
    BaseEngineController_LS_112_B.s419_LogicalOperator);

  /* S-Function Block: <S396>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_112_DWork.s396_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_kg = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S396>/Switch3' incorporates:
   *  MinMax: '<S396>/MinMax'
   *  Product: '<S396>/Product'
   *  S-Function (motohawk_sfun_calibration): '<S396>/motohawk_calibration2'
   */
  if (rtb_LogicalOperator6_p) {
    rtb_Switch_cz = (FuelLevel_FuelEevntAlpha_DataStore());
  } else {
    /* S-Function Block: <S418>/motohawk_prelookup_col */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (FuelLevel_FiltConstColIn_DataStore()) =
        BaseEngineController_LS_112_B.s454_Switch2;
      (FuelLevel_FiltConstColIdx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_LS_112_B.s454_Switch2,
         (FuelLevel_FiltConstColIdxArr_DataStore()), 7,
         (FuelLevel_FiltConstColIdx_DataStore()));
      rtb_motohawk_prelookup_col = (FuelLevel_FiltConstColIdx_DataStore());
    }

    /* S-Function Block: <S418>/motohawk_prelookup_row */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (FuelLevel_FiltConstRowIn_DataStore()) =
        BaseEngineController_LS_112_B.s469_Sum;
      (FuelLevel_FiltConstRowIdx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_LS_112_B.s469_Sum,
         (FuelLevel_FiltConstRowIdxArr_DataStore()), 7,
         (FuelLevel_FiltConstRowIdx_DataStore()));
      rtb_motohawk_prelookup_row = (FuelLevel_FiltConstRowIdx_DataStore());
    }

    /* S-Function Block: <S418>/motohawk_interpolation_2d */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_motohawk_interpolation_2d_cc = TableInterpolation2D_real_T
        (rtb_motohawk_prelookup_row, rtb_motohawk_prelookup_col, (real_T *)
         ((FuelLevel_FiltConstMap_DataStore())), 7, 7);
      (FuelLevel_FiltConst_DataStore()) = rtb_motohawk_interpolation_2d_cc;
    }

    rtb_Switch_cz = rtb_motohawk_delta_time_kg / ((rtb_motohawk_delta_time_kg >=
      rtb_motohawk_interpolation_2d_cc) || rtIsNaN
      (rtb_motohawk_interpolation_2d_cc) ? rtb_motohawk_delta_time_kg :
      rtb_motohawk_interpolation_2d_cc);
  }

  /* End of Switch: '<S396>/Switch3' */

  /* Sum: '<S415>/Sum1' incorporates:
   *  Constant: '<S415>/Constant'
   *  Product: '<S415>/Product'
   *  Product: '<S415>/Product1'
   *  Sum: '<S415>/Sum'
   *  UnitDelay: '<S415>/Unit Delay'
   */
  BaseEngineController_LS_112_B.s415_Sum1 = (1.0 - rtb_Switch_cz) *
    BaseEngineController_LS_112_DWork.s415_UnitDelay_DSTATE +
    rtb_DataTypeConversion_hg * rtb_Switch_cz;

  /* S-Function (motohawk_sfun_send_canmsgs): '<S802>/Send CAN Messages' */
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
        if (BaseEngineController_LS_112_B.s415_Sum1 < 0.0000000000F) {
          tmp0 = (uint16_T)(0U);
        } else if (BaseEngineController_LS_112_B.s415_Sum1 > 99.9998565000F) {
          tmp0 = (uint16_T)(65535U);
        } else {
          tmp0 = (uint16_T)(BaseEngineController_LS_112_B.s415_Sum1 *
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

  /* S-Function Block: <S816>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_112_DWork.s816_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_cz = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S816>/Product' incorporates:
   *  MinMax: '<S816>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S816>/motohawk_calibration'
   */
  rtb_Switch_cz /= (rtb_Switch_cz >= (RPMFilt_LowPass_DataStore())) || rtIsNaN
    ((RPMFilt_LowPass_DataStore())) ? rtb_Switch_cz : (RPMFilt_LowPass_DataStore
    ());

  /* Sum: '<S817>/Sum1' incorporates:
   *  Constant: '<S817>/Constant'
   *  Product: '<S817>/Product'
   *  Product: '<S817>/Product1'
   *  Sum: '<S817>/Sum'
   *  UnitDelay: '<S817>/Unit Delay'
   */
  BaseEngineController_LS_112_B.s817_Sum1 = (1.0 - rtb_Switch_cz) *
    BaseEngineController_LS_112_DWork.s817_UnitDelay_DSTATE +
    BaseEngineController_LS_112_B.s555_Sum1 * rtb_Switch_cz;

  /* Switch: '<S814>/Switch' incorporates:
   *  MinMax: '<S814>/MinMax'
   *  Product: '<S814>/Product'
   *  Product: '<S814>/Product1'
   *  Rounding: '<S814>/Rounding Function'
   *  S-Function (motohawk_sfun_calibration): '<S814>/motohawk_calibration'
   */
  if (((uint8_T)(RPMFilt_Enable_DataStore())) >= 1) {
    /* MinMax: '<S814>/MinMax' incorporates:
     *  Constant: '<S814>/Constant'
     *  S-Function (motohawk_sfun_calibration): '<S814>/motohawk_calibration1'
     */
    u = (real_T)((uint16_T)(RPMFilt_RoundValue_DataStore()));
    rtb_Abs_o = u >= 1.0 ? u : 1.0;
    BaseEngineController_LS_112_B.s814_Switch = rt_roundd_snf
      (BaseEngineController_LS_112_B.s817_Sum1 / rtb_Abs_o) * rtb_Abs_o;
  } else {
    BaseEngineController_LS_112_B.s814_Switch =
      BaseEngineController_LS_112_B.s555_Sum1;
  }

  /* End of Switch: '<S814>/Switch' */
  /* S-Function Block: <S813>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_112_DWork.s813_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_cz = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S813>/Product' incorporates:
   *  MinMax: '<S813>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S813>/motohawk_calibration'
   */
  rtb_Switch_cz /= (rtb_Switch_cz >= (TPS_Filt_DataStore())) || rtIsNaN
    ((TPS_Filt_DataStore())) ? rtb_Switch_cz : (TPS_Filt_DataStore());

  /* Sum: '<S815>/Sum1' incorporates:
   *  Constant: '<S815>/Constant'
   *  Product: '<S815>/Product'
   *  Product: '<S815>/Product1'
   *  Sum: '<S815>/Sum'
   *  UnitDelay: '<S815>/Unit Delay'
   */
  rtb_Sum1_gm = (1.0 - rtb_Switch_cz) *
    BaseEngineController_LS_112_DWork.s815_UnitDelay_DSTATE +
    BaseEngineController_LS_112_B.s450_Switch2 * rtb_Switch_cz;

  /* S-Function (motohawk_sfun_send_canmsgs): '<S803>/Send CAN Messages' */
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
        if (BaseEngineController_LS_112_B.s814_Switch < 0.0000000000F) {
          tmp0 = (uint16_T)(0U);
        } else if (BaseEngineController_LS_112_B.s814_Switch > 25599.9370500000F)
        {
          tmp0 = (uint16_T)(65534U);
        } else {
          tmp0 = (uint16_T)(BaseEngineController_LS_112_B.s814_Switch *
                            (2.5599672324F));
        }

        if (rtb_Sum1_gm < -50.0006912000F) {
          tmp1 = (int16_T)(-32768);
        } else if (rtb_Sum1_gm > 49.9991653000F) {
          tmp1 = (int16_T)(32767);
        } else {
          tmp1 = (int16_T)(rtb_Sum1_gm * (655.3509404286F));
        }

        if (BaseEngineController_LS_112_B.s683_Merge < -128.0000000000F) {
          tmp2 = (int8_T)(-128);
        } else if (BaseEngineController_LS_112_B.s683_Merge > 127.0000000000F) {
          tmp2 = (int8_T)(127);
        } else {
          tmp2 = (int8_T)(BaseEngineController_LS_112_B.s683_Merge);
        }

        if (BaseEngineController_LS_112_B.s665_Merge < -128.0000000000F) {
          tmp3 = (int8_T)(-128);
        } else if (BaseEngineController_LS_112_B.s665_Merge > 127.0000000000F) {
          tmp3 = (int8_T)(127);
        } else {
          tmp3 = (int8_T)(BaseEngineController_LS_112_B.s665_Merge);
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

  /* S-Function Block: <S821>/motohawk_delta_time */
  rtb_motohawk_delta_time_h = 0.005;

  /* UnitDelay: '<S821>/Unit Delay2' */
  rtb_DataTypeConversion1_j =
    BaseEngineController_LS_112_DWork.s821_UnitDelay2_DSTATE;

  /* Outputs for Enabled SubSystem: '<S821>/IncreasingFilter' incorporates:
   *  EnablePort: '<S828>/Enable'
   */
  /* RelationalOperator: '<S821>/Relational Operator4' incorporates:
   *  UnitDelay: '<S821>/Unit Delay2'
   */
  if (BaseEngineController_LS_112_DWork.s821_UnitDelay2_DSTATE <
      BaseEngineController_LS_112_B.s486_MultiportSwitch) {
    /* S-Function (motohawk_sfun_calibration): '<S828>/motohawk_calibration1' */
    BaseEngineController_LS_112_B.s821_Merge = (PH1_FiltIncConst_DataStore());
  }

  /* End of RelationalOperator: '<S821>/Relational Operator4' */
  /* End of Outputs for SubSystem: '<S821>/IncreasingFilter' */

  /* Outputs for Enabled SubSystem: '<S821>/DecreasingFilter' incorporates:
   *  EnablePort: '<S826>/Enable'
   */
  /* RelationalOperator: '<S821>/Relational Operator3' */
  if (rtb_DataTypeConversion1_j >
      BaseEngineController_LS_112_B.s486_MultiportSwitch) {
    /* S-Function (motohawk_sfun_calibration): '<S826>/motohawk_calibration2' */
    BaseEngineController_LS_112_B.s821_Merge = (PH1_FiltDecConst_DataStore());
  }

  /* End of RelationalOperator: '<S821>/Relational Operator3' */
  /* End of Outputs for SubSystem: '<S821>/DecreasingFilter' */

  /* Switch: '<S821>/Switch1' incorporates:
   *  Constant: '<S821>/Constant'
   *  MinMax: '<S821>/MinMax'
   *  Product: '<S821>/Product'
   *  UnitDelay: '<S821>/Unit Delay5'
   */
  if (BaseEngineController_LS_112_DWork.s821_UnitDelay5_DSTATE) {
    rtb_Switch_cz = rtb_motohawk_delta_time_h / ((rtb_motohawk_delta_time_h >=
      BaseEngineController_LS_112_B.s821_Merge) || rtIsNaN
      (BaseEngineController_LS_112_B.s821_Merge) ? rtb_motohawk_delta_time_h :
      BaseEngineController_LS_112_B.s821_Merge);
  } else {
    rtb_Switch_cz = 1.0;
  }

  /* End of Switch: '<S821>/Switch1' */

  /* Sum: '<S827>/Sum1' incorporates:
   *  Constant: '<S827>/Constant'
   *  Product: '<S827>/Product'
   *  Product: '<S827>/Product1'
   *  Sum: '<S827>/Sum'
   *  UnitDelay: '<S827>/Unit Delay'
   */
  rtb_Sum1_na = (1.0 - rtb_Switch_cz) *
    BaseEngineController_LS_112_DWork.s827_UnitDelay_DSTATE +
    BaseEngineController_LS_112_B.s486_MultiportSwitch * rtb_Switch_cz;

  /* Switch: '<S821>/Switch' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S821>/motohawk_calibration'
   *  UnitDelay: '<S821>/Unit Delay5'
   */
  if (BaseEngineController_LS_112_DWork.s821_UnitDelay5_DSTATE) {
    BaseEngineController_LS_112_B.s821_Switch = rtb_Sum1_na;
  } else {
    BaseEngineController_LS_112_B.s821_Switch = (PHI1_DefaultVal_DataStore());
  }

  /* End of Switch: '<S821>/Switch' */
  /* S-Function Block: <S822>/motohawk_delta_time */
  rtb_motohawk_delta_time_ki = 0.005;

  /* UnitDelay: '<S822>/Unit Delay2' */
  rtb_DataTypeConversion1_j =
    BaseEngineController_LS_112_DWork.s822_UnitDelay2_DSTATE;

  /* Outputs for Enabled SubSystem: '<S822>/IncreasingFilter' incorporates:
   *  EnablePort: '<S831>/Enable'
   */
  /* RelationalOperator: '<S822>/Relational Operator4' incorporates:
   *  UnitDelay: '<S822>/Unit Delay2'
   */
  if (BaseEngineController_LS_112_DWork.s822_UnitDelay2_DSTATE <
      BaseEngineController_LS_112_B.s501_Merge) {
    /* S-Function (motohawk_sfun_calibration): '<S831>/motohawk_calibration1' */
    BaseEngineController_LS_112_B.s822_Merge = (PH2_FiltIncConst_DataStore());
  }

  /* End of RelationalOperator: '<S822>/Relational Operator4' */
  /* End of Outputs for SubSystem: '<S822>/IncreasingFilter' */

  /* Outputs for Enabled SubSystem: '<S822>/DecreasingFilter' incorporates:
   *  EnablePort: '<S829>/Enable'
   */
  /* RelationalOperator: '<S822>/Relational Operator3' */
  if (rtb_DataTypeConversion1_j > BaseEngineController_LS_112_B.s501_Merge) {
    /* S-Function (motohawk_sfun_calibration): '<S829>/motohawk_calibration2' */
    BaseEngineController_LS_112_B.s822_Merge = (PH2_FiltDecConst_DataStore());
  }

  /* End of RelationalOperator: '<S822>/Relational Operator3' */
  /* End of Outputs for SubSystem: '<S822>/DecreasingFilter' */

  /* Switch: '<S822>/Switch1' incorporates:
   *  Constant: '<S822>/Constant'
   *  MinMax: '<S822>/MinMax'
   *  Product: '<S822>/Product'
   *  UnitDelay: '<S822>/Unit Delay5'
   */
  if (BaseEngineController_LS_112_DWork.s822_UnitDelay5_DSTATE) {
    rtb_Switch_cz = rtb_motohawk_delta_time_ki / ((rtb_motohawk_delta_time_ki >=
      BaseEngineController_LS_112_B.s822_Merge) || rtIsNaN
      (BaseEngineController_LS_112_B.s822_Merge) ? rtb_motohawk_delta_time_ki :
      BaseEngineController_LS_112_B.s822_Merge);
  } else {
    rtb_Switch_cz = 1.0;
  }

  /* End of Switch: '<S822>/Switch1' */

  /* Sum: '<S830>/Sum1' incorporates:
   *  Constant: '<S830>/Constant'
   *  Product: '<S830>/Product'
   *  Product: '<S830>/Product1'
   *  Sum: '<S830>/Sum'
   *  UnitDelay: '<S830>/Unit Delay'
   */
  rtb_Sum1_hc = (1.0 - rtb_Switch_cz) *
    BaseEngineController_LS_112_DWork.s830_UnitDelay_DSTATE +
    BaseEngineController_LS_112_B.s501_Merge * rtb_Switch_cz;

  /* Switch: '<S822>/Switch' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S822>/motohawk_calibration'
   *  UnitDelay: '<S822>/Unit Delay5'
   */
  if (BaseEngineController_LS_112_DWork.s822_UnitDelay5_DSTATE) {
    BaseEngineController_LS_112_B.s822_Switch = rtb_Sum1_hc;
  } else {
    BaseEngineController_LS_112_B.s822_Switch = (PHI2_DefaultVal_DataStore());
  }

  /* End of Switch: '<S822>/Switch' */
  /* S-Function Block: <S818>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_112_DWork.s818_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_cz = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S818>/Product' incorporates:
   *  MinMax: '<S818>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S818>/motohawk_calibration'
   */
  rtb_Switch_cz /= (rtb_Switch_cz >= (VSPD_Filt_DataStore())) || rtIsNaN
    ((VSPD_Filt_DataStore())) ? rtb_Switch_cz : (VSPD_Filt_DataStore());

  /* Sum: '<S823>/Sum1' incorporates:
   *  Constant: '<S823>/Constant'
   *  Product: '<S823>/Product'
   *  Product: '<S823>/Product1'
   *  Sum: '<S823>/Sum'
   *  UnitDelay: '<S823>/Unit Delay'
   */
  rtb_Sum1_gj = (1.0 - rtb_Switch_cz) *
    BaseEngineController_LS_112_DWork.s823_UnitDelay_DSTATE +
    BaseEngineController_LS_112_B.s454_Switch2 * rtb_Switch_cz;

  /* Gain: '<S804>/Gain' */
  rtb_Gain = 1.60934 * rtb_Sum1_gj;

  /* MultiPortSwitch: '<S447>/Multiport Switch' incorporates:
   *  Constant: '<S447>/Constant1'
   *  MinMax: '<S447>/MinMax'
   */
  if (BaseEngineController_LS_112_B.s515_Merge == FALSE) {
    /* Product: '<S447>/Product6' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S447>/motohawk_calibration5'
     *  S-Function (motohawk_sfun_calibration): '<S447>/motohawk_calibration6'
     */
    rtb_DataTypeConversion1_j = (Gear6Ratio_DataStore()) * (FDR_DataStore());

    /* Product: '<S447>/Product' incorporates:
     *  Constant: '<S447>/Constant'
     *  S-Function (motohawk_sfun_calibration): '<S447>/motohawk_calibration7'
     */
    rtb_DataTypeConversion_ep = (TireRadius_DataStore()) * 0.00595 *
      BaseEngineController_LS_112_B.s555_Sum1;

    /* Abs: '<S447>/Abs5' incorporates:
     *  Product: '<S447>/Product12'
     *  Sum: '<S447>/Sum5'
     */
    rtb_DataTypeConversion1_j = fabs(rtb_DataTypeConversion_ep /
      rtb_DataTypeConversion1_j - BaseEngineController_LS_112_B.s454_Switch2);

    /* Gain: '<S447>/Gain5' incorporates:
     *  RelationalOperator: '<S447>/M6'
     *  S-Function (motohawk_sfun_calibration): '<S447>/motohawk_calibration8'
     */
    rtb_Gain5 = (uint8_T)(rtb_DataTypeConversion1_j <= (GearMatchHyst_DataStore())
                          ? 192 : 0);

    /* Gain: '<S447>/Gain4' incorporates:
     *  Abs: '<S447>/Abs4'
     *  Product: '<S447>/Product11'
     *  Product: '<S447>/Product5'
     *  RelationalOperator: '<S447>/M5'
     *  S-Function (motohawk_sfun_calibration): '<S447>/motohawk_calibration4'
     *  S-Function (motohawk_sfun_calibration): '<S447>/motohawk_calibration6'
     *  S-Function (motohawk_sfun_calibration): '<S447>/motohawk_calibration8'
     *  Sum: '<S447>/Sum4'
     */
    rtb_Gain4 = (uint8_T)(fabs(rtb_DataTypeConversion_ep /
      ((Gear5Ratio_DataStore()) * (FDR_DataStore())) -
      BaseEngineController_LS_112_B.s454_Switch2) <= (GearMatchHyst_DataStore())
                          ? 160 : 0);

    /* Gain: '<S447>/Gain3' incorporates:
     *  Abs: '<S447>/Abs3'
     *  Product: '<S447>/Product10'
     *  Product: '<S447>/Product4'
     *  RelationalOperator: '<S447>/M4'
     *  S-Function (motohawk_sfun_calibration): '<S447>/motohawk_calibration3'
     *  S-Function (motohawk_sfun_calibration): '<S447>/motohawk_calibration6'
     *  S-Function (motohawk_sfun_calibration): '<S447>/motohawk_calibration8'
     *  Sum: '<S447>/Sum3'
     */
    rtb_Gain3_e = (uint8_T)((fabs(rtb_DataTypeConversion_ep /
      ((Gear4Ratio_DataStore()) * (FDR_DataStore())) -
      BaseEngineController_LS_112_B.s454_Switch2) <= (GearMatchHyst_DataStore()))
      << 7);

    /* Gain: '<S447>/Gain2' incorporates:
     *  Abs: '<S447>/Abs2'
     *  Product: '<S447>/Product3'
     *  Product: '<S447>/Product9'
     *  RelationalOperator: '<S447>/M3'
     *  S-Function (motohawk_sfun_calibration): '<S447>/motohawk_calibration2'
     *  S-Function (motohawk_sfun_calibration): '<S447>/motohawk_calibration6'
     *  S-Function (motohawk_sfun_calibration): '<S447>/motohawk_calibration8'
     *  Sum: '<S447>/Sum2'
     */
    rtb_Gain2_b = (uint8_T)(fabs(rtb_DataTypeConversion_ep /
      ((Gear3Ratio_DataStore()) * (FDR_DataStore())) -
      BaseEngineController_LS_112_B.s454_Switch2) <= (GearMatchHyst_DataStore())
      ? 192 : 0);

    /* Gain: '<S447>/Gain1' incorporates:
     *  Abs: '<S447>/Abs1'
     *  Product: '<S447>/Product2'
     *  Product: '<S447>/Product8'
     *  RelationalOperator: '<S447>/M2'
     *  S-Function (motohawk_sfun_calibration): '<S447>/motohawk_calibration1'
     *  S-Function (motohawk_sfun_calibration): '<S447>/motohawk_calibration6'
     *  S-Function (motohawk_sfun_calibration): '<S447>/motohawk_calibration8'
     *  Sum: '<S447>/Sum1'
     */
    rtb_Gain1_fr = (uint8_T)((fabs(rtb_DataTypeConversion_ep /
      ((Gear2Ratio_DataStore()) * (FDR_DataStore())) -
      BaseEngineController_LS_112_B.s454_Switch2) <= (GearMatchHyst_DataStore()))
      << 7);

    /* MinMax: '<S447>/MinMax' incorporates:
     *  Abs: '<S447>/Abs'
     *  Gain: '<S447>/Gain'
     *  Product: '<S447>/Product1'
     *  Product: '<S447>/Product7'
     *  RelationalOperator: '<S447>/M1'
     *  S-Function (motohawk_sfun_calibration): '<S447>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S447>/motohawk_calibration6'
     *  S-Function (motohawk_sfun_calibration): '<S447>/motohawk_calibration8'
     *  Sum: '<S447>/Sum'
     */
    maxV = ((fabs(rtb_DataTypeConversion_ep / ((Gear1Ratio_DataStore()) *
               (FDR_DataStore())) - BaseEngineController_LS_112_B.s454_Switch2) <=
             (GearMatchHyst_DataStore())) << 7) >> 2;
    i = rtb_Gain1_fr >> 1;
    maxV = (int32_T)((uint32_T)maxV >= (uint32_T)i ? (uint32_T)maxV : (uint32_T)
                     i);
    i = rtb_Gain2_b >> 1;
    maxV = (int32_T)((uint32_T)maxV >= (uint32_T)i ? (uint32_T)maxV : (uint32_T)
                     i);
    i = rtb_Gain3_e;
    maxV = (int32_T)((uint32_T)maxV >= (uint32_T)i ? (uint32_T)maxV : (uint32_T)
                     i);
    i = rtb_Gain4;
    maxV = (int32_T)((uint32_T)maxV >= (uint32_T)i ? (uint32_T)maxV : (uint32_T)
                     i);
    i = rtb_Gain5;
    BaseEngineController_LS_112_B.s447_MultiportSwitch = ldexp((real_T)
      ((uint32_T)maxV >= (uint32_T)i ? (uint32_T)maxV : (uint32_T)i), -5);
  } else {
    BaseEngineController_LS_112_B.s447_MultiportSwitch = 0.0;
  }

  /* End of MultiPortSwitch: '<S447>/Multiport Switch' */
  /* S-Function Block: <S819>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_112_DWork.s819_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_cz = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S819>/Product' incorporates:
   *  MinMax: '<S819>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S819>/motohawk_calibration'
   */
  rtb_Switch_cz /= (rtb_Switch_cz >= (SparkAdv_Filt_DataStore())) || rtIsNaN
    ((SparkAdv_Filt_DataStore())) ? rtb_Switch_cz : (SparkAdv_Filt_DataStore());

  /* Sum: '<S824>/Sum1' incorporates:
   *  Constant: '<S824>/Constant'
   *  Product: '<S824>/Product'
   *  Product: '<S824>/Product1'
   *  Sum: '<S824>/Sum'
   *  UnitDelay: '<S824>/Unit Delay'
   */
  rtb_Sum1_ju = (1.0 - rtb_Switch_cz) *
    BaseEngineController_LS_112_DWork.s824_UnitDelay_DSTATE +
    BaseEngineController_LS_112_B.s92_SparkAdv * rtb_Switch_cz;

  /* S-Function Block: <S820>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_112_DWork.s820_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_cz = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S820>/Product' incorporates:
   *  MinMax: '<S820>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S820>/motohawk_calibration'
   */
  rtb_Switch_cz /= (rtb_Switch_cz >= (ECUVolt_Filt_DataStore())) || rtIsNaN
    ((ECUVolt_Filt_DataStore())) ? rtb_Switch_cz : (ECUVolt_Filt_DataStore());

  /* Sum: '<S825>/Sum1' incorporates:
   *  Constant: '<S825>/Constant'
   *  Product: '<S825>/Product'
   *  Product: '<S825>/Product1'
   *  Sum: '<S825>/Sum'
   *  UnitDelay: '<S825>/Unit Delay'
   */
  rtb_Sum1_nj = (1.0 - rtb_Switch_cz) *
    BaseEngineController_LS_112_DWork.s825_UnitDelay_DSTATE +
    BaseEngineController_LS_112_B.s632_Merge * rtb_Switch_cz;

  /* S-Function (motohawk_sfun_send_canmsgs): '<S804>/Send CAN Messages' */
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
        if (BaseEngineController_LS_112_B.s821_Switch < 0.5000000000F) {
          tmp0 = (uint8_T)(0U);
        } else if (BaseEngineController_LS_112_B.s821_Switch > 1.4960937500F) {
          tmp0 = (uint8_T)(255U);
        } else {
          tmp0 = (uint8_T)((BaseEngineController_LS_112_B.s821_Switch -
                            (0.5000000000F)) * (256.0000000000F));
        }

        if (BaseEngineController_LS_112_B.s822_Switch < 0.5000000000F) {
          tmp1 = (uint8_T)(0U);
        } else if (BaseEngineController_LS_112_B.s822_Switch > 1.4960937500F) {
          tmp1 = (uint8_T)(255U);
        } else {
          tmp1 = (uint8_T)((BaseEngineController_LS_112_B.s822_Switch -
                            (0.5000000000F)) * (256.0000000000F));
        }

        if (rtb_Gain < 0.0000000000F) {
          tmp2 = (uint16_T)(0U);
        } else if (rtb_Gain > 411.9857775000F) {
          tmp2 = (uint16_T)(65535U);
        } else {
          tmp2 = (uint16_T)(rtb_Gain * (159.0710252128F));
        }

        if (BaseEngineController_LS_112_B.s447_MultiportSwitch < 0.0000000000F)
        {
          tmp3 = (uint8_T)(0U);
        } else if (BaseEngineController_LS_112_B.s447_MultiportSwitch >
                   255.0000000000F) {
          tmp3 = (uint8_T)(255U);
        } else {
          tmp3 = (uint8_T)(BaseEngineController_LS_112_B.s447_MultiportSwitch);
        }

        if (rtb_Sum1_ju < -17.0000000000F) {
          tmp4 = (uint8_T)(0U);
        } else if (rtb_Sum1_ju > 72.6478000000F) {
          tmp4 = (uint8_T)(254U);
        } else {
          tmp4 = (uint8_T)((rtb_Sum1_ju - (-17.0000000000F)) * (2.8444646717F));
        }

        if (rtb_Sum1_nj < 0.0000000000F) {
          tmp5 = (uint16_T)(0U);
        } else if (rtb_Sum1_nj > 16.0888425000F) {
          tmp5 = (uint16_T)(65535U);
        } else {
          tmp5 = (uint16_T)(rtb_Sum1_nj * (4073.3197556008F));
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

  /* UnitDelay: '<S821>/Unit Delay1' */
  rtb_UnitDelay1_k0 = BaseEngineController_LS_112_DWork.s821_UnitDelay1_DSTATE;

  /* UnitDelay: '<S821>/Unit Delay3' */
  rtb_UnitDelay3_i = BaseEngineController_LS_112_DWork.s821_UnitDelay3_DSTATE;

  /* UnitDelay: '<S821>/Unit Delay4' */
  rtb_UnitDelay4_o = BaseEngineController_LS_112_DWork.s821_UnitDelay4_DSTATE;

  /* UnitDelay: '<S822>/Unit Delay1' */
  rtb_UnitDelay1_n5 = BaseEngineController_LS_112_DWork.s822_UnitDelay1_DSTATE;

  /* UnitDelay: '<S822>/Unit Delay3' */
  rtb_UnitDelay3_p = BaseEngineController_LS_112_DWork.s822_UnitDelay3_DSTATE;

  /* UnitDelay: '<S822>/Unit Delay4' */
  rtb_UnitDelay4_g = BaseEngineController_LS_112_DWork.s822_UnitDelay4_DSTATE;

  /* S-Function Block: <S835>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_112_DWork.s835_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_cz = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S835>/Product' incorporates:
   *  MinMax: '<S835>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S835>/motohawk_calibration'
   */
  rtb_Switch_cz /= (rtb_Switch_cz >= (MAP_filt_DataStore())) || rtIsNaN
    ((MAP_filt_DataStore())) ? rtb_Switch_cz : (MAP_filt_DataStore());

  /* Sum: '<S838>/Sum1' incorporates:
   *  Constant: '<S838>/Constant'
   *  Product: '<S838>/Product'
   *  Product: '<S838>/Product1'
   *  Sum: '<S838>/Sum'
   *  UnitDelay: '<S838>/Unit Delay'
   */
  rtb_Sum1_a3 = (1.0 - rtb_Switch_cz) *
    BaseEngineController_LS_112_DWork.s838_UnitDelay_DSTATE +
    BaseEngineController_LS_112_B.s598_Merge * rtb_Switch_cz;

  /* S-Function (motohawk_sfun_data_read): '<S805>/motohawk_data_read' */
  rtb_motohawk_data_read_m3 = VEFin_DataStore();

  /* S-Function Block: <S586>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_112_DWork.s586_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_cz = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S586>/Product' incorporates:
   *  MinMax: '<S586>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S586>/motohawk_calibration'
   */
  rtb_Switch_cz /= (rtb_Switch_cz >= (FuelPresFilterConst_DataStore())) ||
    rtIsNaN((FuelPresFilterConst_DataStore())) ? rtb_Switch_cz :
    (FuelPresFilterConst_DataStore());

  /* Logic: '<S558>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S558>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S558>/motohawk_fault_status4'
   */
  rtb_RelationalOperator5_h = (IsFaultActive(73) || IsFaultActive(74));

  /* Logic: '<S558>/Logical Operator6' */
  rtb_LogicalOperator6_p = !rtb_RelationalOperator5_h;

  /* Logic: '<S558>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S558>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S558>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_ou = (IsFaultSuspected(73) || IsFaultSuspected(74));

  /* S-Function Block: <S482>/motohawk_ain2 Resource: AN5 */
  BaseEngineController_LS_112_B.s482_motohawk_ain2 = AN5_AnalogInput_Get();

  /* DataTypeConversion: '<S558>/Data Type Conversion' */
  rtb_DataTypeConversion_hg = (real_T)
    BaseEngineController_LS_112_B.s482_motohawk_ain2;

  /* Product: '<S558>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S558>/motohawk_calibration4'
   */
  rtb_DataTypeConversion1_j = rtb_DataTypeConversion_hg *
    (FuelPresGain_DataStore());

  /* Sum: '<S558>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S558>/motohawk_calibration5'
   */
  BaseEngineController_LS_112_B.s558_Sum1 = rtb_DataTypeConversion1_j +
    (FuelPresOfst_DataStore());

  /* UnitDelay: '<S558>/Unit Delay1' */
  rtb_UnitDelay1_d2 = BaseEngineController_LS_112_DWork.s558_UnitDelay1_DSTATE;

  /* If: '<S558>/If' incorporates:
   *  Logic: '<S558>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_p && rtb_LogicalOperator1_ou) {
    /* Outputs for IfAction SubSystem: '<S558>/If Action Subsystem' incorporates:
     *  ActionPort: '<S587>/Action Port'
     */
    BaseEngineController_LS_112_IfActionSubsystem(rtb_UnitDelay1_d2,
      &rtb_Merge_l);

    /* End of Outputs for SubSystem: '<S558>/If Action Subsystem' */
  } else if (rtb_RelationalOperator5_h) {
    /* Outputs for IfAction SubSystem: '<S558>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S588>/Action Port'
     */
    BaseEngineController_LS_112_IfActionSubsystem((FuelPresDfltValue_DataStore()),
      &rtb_Merge_l);

    /* End of Outputs for SubSystem: '<S558>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S558>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S589>/Action Port'
     */
    BaseEngineController_LS_112_IfActionSubsystem
      (BaseEngineController_LS_112_B.s558_Sum1, &rtb_Merge_l);

    /* End of Outputs for SubSystem: '<S558>/If Action Subsystem2' */
  }

  /* End of If: '<S558>/If' */

  /* Sum: '<S591>/Sum1' incorporates:
   *  Constant: '<S591>/Constant'
   *  Product: '<S591>/Product'
   *  Product: '<S591>/Product1'
   *  Sum: '<S591>/Sum'
   *  UnitDelay: '<S591>/Unit Delay'
   */
  rtb_Sum1_nh = (1.0 - rtb_Switch_cz) *
    BaseEngineController_LS_112_DWork.s591_UnitDelay_DSTATE + rtb_Merge_l *
    rtb_Switch_cz;

  /* If: '<S590>/If' incorporates:
   *  Inport: '<S592>/In1'
   *  Inport: '<S593>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S590>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S590>/override_enable'
   */
  if ((FuelPres_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S590>/NewValue' incorporates:
     *  ActionPort: '<S592>/Action Port'
     */
    BaseEngineController_LS_112_B.s590_Merge = (FuelPres_new_DataStore());

    /* End of Outputs for SubSystem: '<S590>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S590>/OldValue' incorporates:
     *  ActionPort: '<S593>/Action Port'
     */
    BaseEngineController_LS_112_B.s590_Merge = rtb_Sum1_nh;

    /* End of Outputs for SubSystem: '<S590>/OldValue' */
  }

  /* End of If: '<S590>/If' */

  /* Gain: '<S805>/Gain' */
  rtb_DataTypeConversion1_j = 0.01 * BaseEngineController_LS_112_B.s590_Merge;

  /* S-Function Block: <S836>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_112_DWork.s836_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_cz = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S836>/Product' incorporates:
   *  MinMax: '<S836>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S836>/motohawk_calibration'
   */
  rtb_Switch_cz /= (rtb_Switch_cz >= (FuelPres_Filt_DataStore())) || rtIsNaN
    ((FuelPres_Filt_DataStore())) ? rtb_Switch_cz : (FuelPres_Filt_DataStore());

  /* Sum: '<S839>/Sum1' incorporates:
   *  Constant: '<S839>/Constant'
   *  Product: '<S839>/Product'
   *  Product: '<S839>/Product1'
   *  Sum: '<S839>/Sum'
   *  UnitDelay: '<S839>/Unit Delay'
   */
  rtb_Sum1_o = (1.0 - rtb_Switch_cz) *
    BaseEngineController_LS_112_DWork.s839_UnitDelay_DSTATE +
    rtb_DataTypeConversion1_j * rtb_Switch_cz;

  /* S-Function Block: <S612>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_112_DWork.s612_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_cz = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S612>/Product' incorporates:
   *  MinMax: '<S612>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S612>/motohawk_calibration'
   */
  rtb_Switch_cz /= (rtb_Switch_cz >= (OilPresFilterConst_DataStore())) ||
    rtIsNaN((OilPresFilterConst_DataStore())) ? rtb_Switch_cz :
    (OilPresFilterConst_DataStore());

  /* Logic: '<S562>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S562>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S562>/motohawk_fault_status4'
   */
  rtb_RelationalOperator5_h = (IsFaultActive(135) || IsFaultActive(136));

  /* Logic: '<S562>/Logical Operator6' */
  rtb_LogicalOperator6_p = !rtb_RelationalOperator5_h;

  /* Logic: '<S562>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S562>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S562>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_ou = (IsFaultSuspected(135) || IsFaultSuspected(136));

  /* S-Function Block: <S482>/motohawk_ain1 Resource: AN4 */
  BaseEngineController_LS_112_B.s482_motohawk_ain1 = AN4_AnalogInput_Get();

  /* DataTypeConversion: '<S562>/Data Type Conversion' */
  rtb_Switch4_c = (real_T)BaseEngineController_LS_112_B.s482_motohawk_ain1;

  /* Product: '<S562>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S562>/motohawk_calibration4'
   */
  rtb_DataTypeConversion1_j = rtb_Switch4_c * (OilPresGain_DataStore());

  /* Sum: '<S562>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S562>/motohawk_calibration5'
   */
  BaseEngineController_LS_112_B.s562_Sum1 = rtb_DataTypeConversion1_j +
    (OilPresOfst_DataStore());

  /* UnitDelay: '<S562>/Unit Delay1' */
  rtb_UnitDelay1_nu = BaseEngineController_LS_112_DWork.s562_UnitDelay1_DSTATE;

  /* If: '<S562>/If' incorporates:
   *  Logic: '<S562>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_p && rtb_LogicalOperator1_ou) {
    /* Outputs for IfAction SubSystem: '<S562>/If Action Subsystem' incorporates:
     *  ActionPort: '<S613>/Action Port'
     */
    BaseEngineController_LS_112_IfActionSubsystem(rtb_UnitDelay1_nu,
      &rtb_Merge_en);

    /* End of Outputs for SubSystem: '<S562>/If Action Subsystem' */
  } else if (rtb_RelationalOperator5_h) {
    /* Outputs for IfAction SubSystem: '<S562>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S614>/Action Port'
     */
    BaseEngineController_LS_112_IfActionSubsystem((OilPresDfltValue_DataStore()),
      &rtb_Merge_en);

    /* End of Outputs for SubSystem: '<S562>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S562>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S615>/Action Port'
     */
    BaseEngineController_LS_112_IfActionSubsystem
      (BaseEngineController_LS_112_B.s562_Sum1, &rtb_Merge_en);

    /* End of Outputs for SubSystem: '<S562>/If Action Subsystem2' */
  }

  /* End of If: '<S562>/If' */

  /* Sum: '<S617>/Sum1' incorporates:
   *  Constant: '<S617>/Constant'
   *  Product: '<S617>/Product'
   *  Product: '<S617>/Product1'
   *  Sum: '<S617>/Sum'
   *  UnitDelay: '<S617>/Unit Delay'
   */
  rtb_Sum1_al = (1.0 - rtb_Switch_cz) *
    BaseEngineController_LS_112_DWork.s617_UnitDelay_DSTATE + rtb_Merge_en *
    rtb_Switch_cz;

  /* If: '<S616>/If' incorporates:
   *  Inport: '<S618>/In1'
   *  Inport: '<S619>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S616>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S616>/override_enable'
   */
  if ((OilPres_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S616>/NewValue' incorporates:
     *  ActionPort: '<S618>/Action Port'
     */
    BaseEngineController_LS_112_B.s616_Merge = (OilPres_new_DataStore());

    /* End of Outputs for SubSystem: '<S616>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S616>/OldValue' incorporates:
     *  ActionPort: '<S619>/Action Port'
     */
    BaseEngineController_LS_112_B.s616_Merge = rtb_Sum1_al;

    /* End of Outputs for SubSystem: '<S616>/OldValue' */
  }

  /* End of If: '<S616>/If' */

  /* Gain: '<S805>/Gain1' */
  rtb_DataTypeConversion1_j = 0.068948 *
    BaseEngineController_LS_112_B.s616_Merge;

  /* S-Function Block: <S837>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_112_DWork.s837_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_cz = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S837>/Product' incorporates:
   *  MinMax: '<S837>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S837>/motohawk_calibration'
   */
  rtb_Switch_cz /= (rtb_Switch_cz >= (OilPres_Filt_DataStore())) || rtIsNaN
    ((OilPres_Filt_DataStore())) ? rtb_Switch_cz : (OilPres_Filt_DataStore());

  /* Sum: '<S840>/Sum1' incorporates:
   *  Constant: '<S840>/Constant'
   *  Product: '<S840>/Product'
   *  Product: '<S840>/Product1'
   *  Sum: '<S840>/Sum'
   *  UnitDelay: '<S840>/Unit Delay'
   */
  rtb_Sum1_cp = (1.0 - rtb_Switch_cz) *
    BaseEngineController_LS_112_DWork.s840_UnitDelay_DSTATE +
    rtb_DataTypeConversion1_j * rtb_Switch_cz;

  /* S-Function (motohawk_sfun_data_read): '<S805>/motohawk_data_read1' */
  rtb_Switch_cz = BaseEquivRatio_DataStore();

  /* Math: '<S805>/Math Function' incorporates:
   *  Saturate: '<S805>/Saturation'
   *
   * About '<S805>/Math Function':
   *  Operator: reciprocal
   */
  rtb_MathFunction = 1.0 / (rtb_Switch_cz >= 0.01 ? rtb_Switch_cz : 0.01);

  /* Switch: '<S100>/Switch' incorporates:
   *  Constant: '<S100>/OFF'
   *  Logic: '<S100>/Logical Operator'
   *  S-Function (motohawk_sfun_data_read): '<S100>/motohawk_data_read'
   *  S-Function (motohawk_sfun_data_read): '<S100>/motohawk_data_read1'
   */
  if (DelayedEngineShutdownAction_DataStore() || EngineShutdownAction_DataStore())
  {
    rtb_RelationalOperator5_h = FALSE;
  } else {
    rtb_RelationalOperator5_h = BaseEngineController_LS_112_B.s92_FUELP;
  }

  /* End of Switch: '<S100>/Switch' */

  /* S-Function (motohawk_sfun_data_read): '<S805>/motohawk_data_read2' */
  rtb_motohawk_data_read2_j = O2CtrlMode_DataStore();

  /* S-Function (motohawk_sfun_fault_action): '<S805>/motohawk_fault_action'
   *
   * Regarding '<S805>/motohawk_fault_action':
     Get Fault Action Status: EngineProtectLED
   */
  {
    extern boolean_T GetFaultActionStatus(uint32_T action);
    rtb_motohawk_fault_action_m = GetFaultActionStatus(9);
  }

  /* S-Function (motohawk_sfun_fault_action): '<S805>/motohawk_fault_action1'
   *
   * Regarding '<S805>/motohawk_fault_action1':
     Get Fault Action Status: MIL_LED
   */
  {
    extern boolean_T GetFaultActionStatus(uint32_T action);
    rtb_motohawk_fault_action1_m = GetFaultActionStatus(12);
  }

  /* S-Function (motohawk_sfun_fault_status): '<S805>/motohawk_fault_status2'
   *
   * Regarding '<S805>/motohawk_fault_status2':
     Status : "Active"
   */
  {
    extern boolean_T IsFaultActive(uint32_T fault);
    rtb_motohawk_fault_status2_gr = IsFaultActive(117);
  }

  /* S-Function (motohawk_sfun_fault_status): '<S805>/motohawk_fault_status1'
   *
   * Regarding '<S805>/motohawk_fault_status1':
     Status : "Active"
   */
  {
    extern boolean_T IsFaultActive(uint32_T fault);
    rtb_motohawk_fault_status1_pt = IsFaultActive(128);
  }

  /* S-Function (motohawk_sfun_fault_action): '<S22>/motohawk_fault_action1'
   *
   * Regarding '<S22>/motohawk_fault_action1':
     Get Fault Action Status: SoftRevLimit
   */
  {
    extern boolean_T GetFaultActionStatus(uint32_T action);
    rtb_motohawk_fault_action1_mq = GetFaultActionStatus(14);
  }

  /* S-Function (motohawk_sfun_fault_action): '<S22>/motohawk_fault_action2'
   *
   * Regarding '<S22>/motohawk_fault_action2':
     Get Fault Action Status: MediumRevLimit
   */
  {
    extern boolean_T GetFaultActionStatus(uint32_T action);
    rtb_motohawk_fault_action2 = GetFaultActionStatus(13);
  }

  /* S-Function (motohawk_sfun_fault_action): '<S22>/motohawk_fault_action3'
   *
   * Regarding '<S22>/motohawk_fault_action3':
     Get Fault Action Status: HardRevLimit
   */
  {
    extern boolean_T GetFaultActionStatus(uint32_T action);
    rtb_motohawk_fault_action3 = GetFaultActionStatus(11);
  }

  /* Logic: '<S22>/Logical Operator4' */
  rtb_LogicalOperator6_p = (rtb_motohawk_fault_action1_mq ||
    rtb_motohawk_fault_action2 || rtb_motohawk_fault_action3);

  /* Outputs for Enabled SubSystem: '<S22>/PassThrough1' incorporates:
   *  EnablePort: '<S67>/Enable'
   */
  if (rtb_motohawk_fault_action1_mq) {
    if (!BaseEngineController_LS_112_DWork.s22_PassThrough1_MODE) {
      BaseEngineController_LS_112_DWork.s22_PassThrough1_MODE = TRUE;
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
    BaseEngineController_LS_112_B.s22_Merge1[0] = ((int8_T)
      (SoftCycle1Cyl1_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[1] = ((int8_T)
      (SoftCycle1Cyl2_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[2] = ((int8_T)
      (SoftCycle1Cyl3_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[3] = ((int8_T)
      (SoftCycle1Cyl4_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[4] = ((int8_T)
      (SoftCycle1Cyl5_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[5] = ((int8_T)
      (SoftCycle1Cyl6_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[6] = ((int8_T)
      (SoftCycle1Cyl7_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[7] = ((int8_T)
      (SoftCycle1Cyl8_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[8] = ((int8_T)
      (SoftCycle2Cyl1_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[9] = ((int8_T)
      (SoftCycle2Cyl2_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[10] = ((int8_T)
      (SoftCycle2Cyl3_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[11] = ((int8_T)
      (SoftCycle2Cyl4_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[12] = ((int8_T)
      (SoftCycle2Cyl5_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[13] = ((int8_T)
      (SoftCycle2Cyl6_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[14] = ((int8_T)
      (SoftCycle2Cyl7_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[15] = ((int8_T)
      (SoftCycle2Cyl8_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[16] = ((int8_T)
      (SoftCycle3Cyl1_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[17] = ((int8_T)
      (SoftCycle3Cyl2_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[18] = ((int8_T)
      (SoftCycle3Cyl3_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[19] = ((int8_T)
      (SoftCycle3Cyl4_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[20] = ((int8_T)
      (SoftCycle3Cyl5_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[21] = ((int8_T)
      (SoftCycle3Cyl6_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[22] = ((int8_T)
      (SoftCycle3Cyl7_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[23] = ((int8_T)
      (SoftCycle3Cyl8_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[24] = ((int8_T)
      (SoftCycle4Cyl1_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[25] = ((int8_T)
      (SoftCycle4Cyl2_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[26] = ((int8_T)
      (SoftCycle4Cyl3_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[27] = ((int8_T)
      (SoftCycle4Cyl4_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[28] = ((int8_T)
      (SoftCycle4Cyl5_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[29] = ((int8_T)
      (SoftCycle4Cyl6_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[30] = ((int8_T)
      (SoftCycle4Cyl7_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[31] = ((int8_T)
      (SoftCycle4Cyl8_DataStore()));
  } else {
    if (BaseEngineController_LS_112_DWork.s22_PassThrough1_MODE) {
      /* Disable for Outport: '<S67>/Out1' */
      for (i = 0; i < 32; i++) {
        BaseEngineController_LS_112_B.s22_Merge1[i] = 0;
      }

      /* End of Outport: '<S67>/Out1' */
      BaseEngineController_LS_112_DWork.s22_PassThrough1_MODE = FALSE;
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
    BaseEngineController_LS_112_B.s22_Merge1[0] = ((int8_T)
      (MediumCycle1Cyl1_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[1] = ((int8_T)
      (MediumCycle1Cyl2_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[2] = ((int8_T)
      (MediumCycle1Cyl3_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[3] = ((int8_T)
      (MediumCycle1Cyl4_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[4] = ((int8_T)
      (MediumCycle1Cyl5_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[5] = ((int8_T)
      (MediumCycle1Cyl6_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[6] = ((int8_T)
      (MediumCycle1Cyl7_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[7] = ((int8_T)
      (MediumCycle1Cyl8_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[8] = ((int8_T)
      (MediumCycle2Cyl1_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[9] = ((int8_T)
      (MediumCycle2Cyl2_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[10] = ((int8_T)
      (MediumCycle2Cyl3_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[11] = ((int8_T)
      (MediumCycle2Cyl4_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[12] = ((int8_T)
      (MediumCycle2Cyl5_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[13] = ((int8_T)
      (MediumCycle2Cyl6_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[14] = ((int8_T)
      (MediumCycle2Cyl7_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[15] = ((int8_T)
      (MediumCycle2Cyl8_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[16] = ((int8_T)
      (MediumCycle3Cyl1_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[17] = ((int8_T)
      (MediumCycle3Cyl2_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[18] = ((int8_T)
      (MediumCycle3Cyl3_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[19] = ((int8_T)
      (MediumCycle3Cyl4_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[20] = ((int8_T)
      (MediumCycle3Cyl5_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[21] = ((int8_T)
      (MediumCycle3Cyl6_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[22] = ((int8_T)
      (MediumCycle3Cyl7_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[23] = ((int8_T)
      (MediumCycle3Cyl8_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[24] = ((int8_T)
      (MediumCycle4Cyl1_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[25] = ((int8_T)
      (MediumCycle4Cyl2_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[26] = ((int8_T)
      (MediumCycle4Cyl3_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[27] = ((int8_T)
      (MediumCycle4Cyl4_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[28] = ((int8_T)
      (MediumCycle4Cyl5_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[29] = ((int8_T)
      (MediumCycle4Cyl6_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[30] = ((int8_T)
      (MediumCycle4Cyl7_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[31] = ((int8_T)
      (MediumCycle4Cyl8_DataStore()));
  }

  /* End of Outputs for SubSystem: '<S22>/PassThrough2' */
  /* Outputs for Enabled SubSystem: '<S22>/PassThrough3' incorporates:
   *  EnablePort: '<S69>/Enable'
   */
  if (rtb_motohawk_fault_action3) {
    if (!BaseEngineController_LS_112_DWork.s22_PassThrough3_MODE) {
      BaseEngineController_LS_112_DWork.s22_PassThrough3_MODE = TRUE;
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
    BaseEngineController_LS_112_B.s22_Merge1[0] = ((int8_T)
      (HardCycle1Cyl1_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[1] = ((int8_T)
      (HardCycle1Cyl2_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[2] = ((int8_T)
      (HardCycle1Cyl3_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[3] = ((int8_T)
      (HardCycle1Cyl4_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[4] = ((int8_T)
      (HardCycle1Cyl5_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[5] = ((int8_T)
      (HardCycle1Cyl6_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[6] = ((int8_T)
      (HardCycle1Cyl7_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[7] = ((int8_T)
      (HardCycle1Cyl8_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[8] = ((int8_T)
      (HardCycle2Cyl1_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[9] = ((int8_T)
      (HardCycle2Cyl2_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[10] = ((int8_T)
      (HardCycle2Cyl3_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[11] = ((int8_T)
      (HardCycle2Cyl4_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[12] = ((int8_T)
      (HardCycle2Cyl5_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[13] = ((int8_T)
      (HardCycle2Cyl6_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[14] = ((int8_T)
      (HardCycle2Cyl7_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[15] = ((int8_T)
      (HardCycle2Cyl8_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[16] = ((int8_T)
      (HardCycle3Cyl1_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[17] = ((int8_T)
      (HardCycle3Cyl2_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[18] = ((int8_T)
      (HardCycle3Cyl3_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[19] = ((int8_T)
      (HardCycle3Cyl4_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[20] = ((int8_T)
      (HardCycle3Cyl5_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[21] = ((int8_T)
      (HardCycle3Cyl6_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[22] = ((int8_T)
      (HardCycle3Cyl7_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[23] = ((int8_T)
      (HardCycle3Cyl8_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[24] = ((int8_T)
      (HardCycle4Cyl1_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[25] = ((int8_T)
      (HardCycle4Cyl2_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[26] = ((int8_T)
      (HardCycle4Cyl3_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[27] = ((int8_T)
      (HardCycle4Cyl4_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[28] = ((int8_T)
      (HardCycle4Cyl5_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[29] = ((int8_T)
      (HardCycle4Cyl6_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[30] = ((int8_T)
      (HardCycle4Cyl7_DataStore()));
    BaseEngineController_LS_112_B.s22_Merge1[31] = ((int8_T)
      (HardCycle4Cyl8_DataStore()));
  } else {
    if (BaseEngineController_LS_112_DWork.s22_PassThrough3_MODE) {
      /* Disable for Outport: '<S69>/Out1' */
      for (i = 0; i < 32; i++) {
        BaseEngineController_LS_112_B.s22_Merge1[i] = 0;
      }

      /* End of Outport: '<S69>/Out1' */
      BaseEngineController_LS_112_DWork.s22_PassThrough3_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S22>/PassThrough3' */

  /* Outputs for Enabled SubSystem: '<S22>/SequenceCutMachine' incorporates:
   *  EnablePort: '<S72>/Enable'
   */
  if (rtb_LogicalOperator6_p) {
    if (!BaseEngineController_LS_112_DWork.s22_SequenceCutMachine_MODE) {
      /* InitializeConditions for UnitDelay: '<S72>/Unit Delay2' */
      BaseEngineController_LS_112_DWork.s72_UnitDelay2_DSTATE = 1.0;

      /* InitializeConditions for UnitDelay: '<S72>/Unit Delay1' */
      BaseEngineController_LS_112_DWork.s72_UnitDelay1_DSTATE = 1U;

      /* Level2 S-Function Block: '<S72>/motohawk_trigger' (motohawk_sfun_trigger) */

      /* Enable for Trigger_FGND_TDC1_EVENT_869p0001 */
      BaseEngineController_LS_112_DWork.s72_motohawk_trigger_DWORK1 = 1;
      BaseEngineController_LS_112_DWork.s22_SequenceCutMachine_MODE = TRUE;
    }

    /* UnitDelay: '<S72>/Unit Delay2' */
    BaseEngineController_LS_112_B.s72_UnitDelay2 =
      BaseEngineController_LS_112_DWork.s72_UnitDelay2_DSTATE;

    /* MultiPortSwitch: '<S72>/Multiport Switch' */
    switch ((int32_T)BaseEngineController_LS_112_B.s72_UnitDelay2) {
     case 1:
      for (i = 0; i < 8; i++) {
        BaseEngineController_LS_112_B.s72_MultiportSwitch[i] =
          BaseEngineController_LS_112_B.s22_Merge1[i];
      }
      break;

     case 2:
      for (i = 0; i < 8; i++) {
        BaseEngineController_LS_112_B.s72_MultiportSwitch[i] =
          BaseEngineController_LS_112_B.s22_Merge1[i + 8];
      }
      break;

     case 3:
      for (i = 0; i < 8; i++) {
        BaseEngineController_LS_112_B.s72_MultiportSwitch[i] =
          BaseEngineController_LS_112_B.s22_Merge1[i + 16];
      }
      break;

     default:
      for (i = 0; i < 8; i++) {
        BaseEngineController_LS_112_B.s72_MultiportSwitch[i] =
          BaseEngineController_LS_112_B.s22_Merge1[i + 24];
      }
      break;
    }

    /* End of MultiPortSwitch: '<S72>/Multiport Switch' */

    /* UnitDelay: '<S72>/Unit Delay1' */
    BaseEngineController_LS_112_B.s72_UnitDelay1 =
      BaseEngineController_LS_112_DWork.s72_UnitDelay1_DSTATE;

    /* S-Function (motohawk_sfun_trigger): '<S72>/motohawk_trigger' */
    /* Enable for Trigger_FGND_TDC1_EVENT_869p0001 */
    if (BaseEngineController_LS_112_DWork.s72_motohawk_trigger_DWORK1 == 0) {
      BaseEngineController_LS_112_DWork.s72_motohawk_trigger_DWORK1 = 1;
    }

    /* Update for UnitDelay: '<S72>/Unit Delay2' */
    BaseEngineController_LS_112_DWork.s72_UnitDelay2_DSTATE =
      BaseEngineController_LS_112_B.s82_Switch1;

    /* Update for UnitDelay: '<S72>/Unit Delay1' */
    BaseEngineController_LS_112_DWork.s72_UnitDelay1_DSTATE =
      BaseEngineController_LS_112_B.s82_Switch;
  } else {
    if (BaseEngineController_LS_112_DWork.s22_SequenceCutMachine_MODE) {
      /* Level2 S-Function Block: '<S72>/motohawk_trigger' (motohawk_sfun_trigger) */
      /* Disable for Trigger_FGND_TDC1_EVENT_869p0001 */
      BaseEngineController_LS_112_DWork.s72_motohawk_trigger_DWORK1 = 0;
      BaseEngineController_LS_112_DWork.s22_SequenceCutMachine_MODE = FALSE;
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
    if (!BaseEngineController_LS_112_DWork.s22_PassThrough5_MODE) {
      BaseEngineController_LS_112_DWork.s22_PassThrough5_MODE = TRUE;
    }

    /* DataTypeConversion: '<S71>/Data Type Conversion1' */
    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_112_B.s71_DataTypeConversion1[i] =
        ((BaseEngineController_LS_112_B.s82_CutArray[i] != 0));
    }

    /* End of DataTypeConversion: '<S71>/Data Type Conversion1' */
  } else {
    if (BaseEngineController_LS_112_DWork.s22_PassThrough5_MODE) {
      /* Disable for Outport: '<S71>/Out1' */
      for (i = 0; i < 8; i++) {
        BaseEngineController_LS_112_B.s71_DataTypeConversion1[i] = FALSE;
      }

      /* End of Outport: '<S71>/Out1' */
      BaseEngineController_LS_112_DWork.s22_PassThrough5_MODE = FALSE;
    }
  }

  /* End of Logic: '<S22>/Logical Operator1' */
  /* End of Outputs for SubSystem: '<S22>/PassThrough5' */

  /* Logic: '<S22>/Logical Operator3' */
  for (i = 0; i < 8; i++) {
    rtb_AND1[i] = !BaseEngineController_LS_112_B.s71_DataTypeConversion1[i];
  }

  /* End of Logic: '<S22>/Logical Operator3' */

  /* Sum: '<S805>/    ' incorporates:
   *  Sum: '<S805>/      '
   */
  rtb_Switch_e0 = rtb_AND1[0];
  for (i = 0; i < 7; i++) {
    rtb_Switch_e0 += (uint32_T)rtb_AND1[1 + i];
  }

  /* End of Sum: '<S805>/    ' */

  /* RelationalOperator: '<S832>/Compare' incorporates:
   *  Constant: '<S832>/Constant'
   *  Sum: '<S805>/    '
   */
  rtb_Compare_b = (((uint8_T)rtb_Switch_e0 >= 1));

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
    if (!BaseEngineController_LS_112_DWork.s22_PassThrough4_MODE) {
      BaseEngineController_LS_112_DWork.s22_PassThrough4_MODE = TRUE;
    }

    /* DataTypeConversion: '<S70>/Data Type Conversion' */
    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_112_B.s70_DataTypeConversion[i] =
        ((BaseEngineController_LS_112_B.s82_CutArray[i] != 0));
    }

    /* End of DataTypeConversion: '<S70>/Data Type Conversion' */
  } else {
    if (BaseEngineController_LS_112_DWork.s22_PassThrough4_MODE) {
      /* Disable for Outport: '<S70>/Out1' */
      for (i = 0; i < 8; i++) {
        BaseEngineController_LS_112_B.s70_DataTypeConversion[i] = FALSE;
      }

      /* End of Outport: '<S70>/Out1' */
      BaseEngineController_LS_112_DWork.s22_PassThrough4_MODE = FALSE;
    }
  }

  /* End of Logic: '<S22>/Logical Operator' */
  /* End of Outputs for SubSystem: '<S22>/PassThrough4' */

  /* Logic: '<S22>/Logical Operator2' */
  for (i = 0; i < 8; i++) {
    BaseEngineController_LS_112_B.s22_LogicalOperator2[i] =
      !BaseEngineController_LS_112_B.s70_DataTypeConversion[i];
  }

  /* End of Logic: '<S22>/Logical Operator2' */

  /* Sum: '<S805>/      ' incorporates:
   *  Sum: '<S805>/    '
   */
  rtb_Switch_e0 = BaseEngineController_LS_112_B.s22_LogicalOperator2[0];
  for (i = 0; i < 7; i++) {
    rtb_Switch_e0 += (uint32_T)
      BaseEngineController_LS_112_B.s22_LogicalOperator2[1 + i];
  }

  /* End of Sum: '<S805>/      ' */

  /* RelationalOperator: '<S833>/Compare' incorporates:
   *  Constant: '<S833>/Constant'
   *  Sum: '<S805>/      '
   */
  rtb_Compare_bk = (((uint8_T)rtb_Switch_e0 >= 1));

  /* RelationalOperator: '<S834>/Compare' incorporates:
   *  Constant: '<S834>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S805>/motohawk_data_read3'
   */
  rtb_Compare_on = ((((uint8_T)EncoderState_DataStore()) >= 3));

  /* S-Function (motohawk_sfun_fault_status): '<S805>/motohawk_fault_status3'
   *
   * Regarding '<S805>/motohawk_fault_status3':
     Status : "Active"
   */
  {
    extern boolean_T IsFaultActive(uint32_T fault);
    rtb_motohawk_fault_status3_a5 = IsFaultActive(140);
  }

  /* S-Function (motohawk_sfun_fault_status): '<S805>/motohawk_fault_status4'
   *
   * Regarding '<S805>/motohawk_fault_status4':
     Status : "Active"
   */
  {
    extern boolean_T IsFaultActive(uint32_T fault);
    rtb_motohawk_fault_status4_ly = IsFaultActive(42);
  }

  /* S-Function (motohawk_sfun_send_canmsgs): '<S805>/Send CAN Messages' */
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
        if (rtb_Sum1_a3 < 0.0000000000F) {
          tmp0 = (uint16_T)(0U);
        } else if (rtb_Sum1_a3 > 6553.5000000000F) {
          tmp0 = (uint16_T)(65535U);
        } else {
          tmp0 = (uint16_T)(rtb_Sum1_a3 * (10.0000000000F));
        }

        if (rtb_motohawk_data_read_m3 < 0.0000000000F) {
          tmp1 = (uint8_T)(0U);
        } else if (rtb_motohawk_data_read_m3 > 255.0000000000F) {
          tmp1 = (uint8_T)(255U);
        } else {
          tmp1 = (uint8_T)(rtb_motohawk_data_read_m3);
        }

        if (rtb_Sum1_o < 0.0000000000F) {
          tmp2 = (uint8_T)(0U);
        } else if (rtb_Sum1_o > 10.2000000000F) {
          tmp2 = (uint8_T)(255U);
        } else {
          tmp2 = (uint8_T)(rtb_Sum1_o * (25.0000000000F));
        }

        if (rtb_Sum1_cp < 0.0000000000F) {
          tmp3 = (uint8_T)(0U);
        } else if (rtb_Sum1_cp > 10.2000000000F) {
          tmp3 = (uint8_T)(255U);
        } else {
          tmp3 = (uint8_T)(rtb_Sum1_cp * (25.0000000000F));
        }

        if (rtb_MathFunction < 0.5000000000F) {
          tmp4 = (uint8_T)(0U);
        } else if (rtb_MathFunction > 1.4960937500F) {
          tmp4 = (uint8_T)(255U);
        } else {
          tmp4 = (uint8_T)((rtb_MathFunction - (0.5000000000F)) *
                           (256.0000000000F));
        }

        tmp5 = (uint8_T)(rtb_RelationalOperator5_h != 0);
        if (BaseEngineController_LS_112_B.s92_FAN1 < 0.0000000000F) {
          tmp6 = (uint8_T)(0U);
        } else if (BaseEngineController_LS_112_B.s92_FAN1 > 1.0000000000F) {
          tmp6 = (uint8_T)(1U);
        } else {
          tmp6 = (uint8_T)(BaseEngineController_LS_112_B.s92_FAN1 != 0);
        }

        if (BaseEngineController_LS_112_B.s92_FAN2 < 0.0000000000F) {
          tmp7 = (uint8_T)(0U);
        } else if (BaseEngineController_LS_112_B.s92_FAN2 > 1.0000000000F) {
          tmp7 = (uint8_T)(1U);
        } else {
          tmp7 = (uint8_T)(BaseEngineController_LS_112_B.s92_FAN2 != 0);
        }

        tmp8 = (uint8_T)(0U);
        tmp9 = (uint8_T)(rtb_motohawk_data_read2_j != 0);
        tmp10 = (uint8_T)(rtb_motohawk_fault_action_m != 0);
        tmp11 = (uint8_T)(rtb_motohawk_fault_action1_m != 0);
        tmp12 = (uint8_T)(rtb_motohawk_fault_status2_gr != 0);
        tmp13 = (uint8_T)(rtb_motohawk_fault_status1_pt != 0);
        if (rtb_Compare_b > 1U) {
          tmp14 = (uint8_T)(1U);
        } else {
          tmp14 = (uint8_T)(rtb_Compare_b != 0);
        }

        if (rtb_Compare_bk > 1U) {
          tmp15 = (uint8_T)(1U);
        } else {
          tmp15 = (uint8_T)(rtb_Compare_bk != 0);
        }

        if (rtb_Compare_on > 1U) {
          tmp16 = (uint8_T)(1U);
        } else {
          tmp16 = (uint8_T)(rtb_Compare_on != 0);
        }

        tmp17 = (uint8_T)(BaseEngineController_LS_112_B.s92_AC != 0);
        tmp18 = (uint8_T)(rtb_motohawk_fault_status3_a5 != 0);
        tmp19 = (uint8_T)(rtb_motohawk_fault_status4_ly != 0);
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

  /* Product: '<S806>/Product' incorporates:
   *  Constant: '<S806>/Constant1'
   *  Saturate: '<S806>/Saturation'
   */
  rtb_Product_jc = BaseEngineController_LS_112_B.s404_MultiportSwitch * 60.0 /
    (BaseEngineController_LS_112_B.s555_Sum1 >= 0.01 ?
     BaseEngineController_LS_112_B.s555_Sum1 : 0.01);

  /* S-Function (motohawk_sfun_send_canmsgs): '<S806>/Send CAN Messages' */
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
        if (BaseEngineController_LS_112_B.s404_MultiportSwitch < 0.0000000000F)
        {
          tmp1 = (uint16_T)(0U);
        } else if (BaseEngineController_LS_112_B.s404_MultiportSwitch >
                   3276.7500000000F) {
          tmp1 = (uint16_T)(65535U);
        } else {
          tmp1 = (uint16_T)(BaseEngineController_LS_112_B.s404_MultiportSwitch *
                            (20.0000000000F));
        }

        if (rtb_Product_jc < 0.0000000000F) {
          tmp2 = (uint16_T)(0U);
        } else if (rtb_Product_jc > 32.7675000000F) {
          tmp2 = (uint16_T)(65534U);
        } else {
          tmp2 = (uint16_T)(rtb_Product_jc * (2000.0000000000F));
        }

        tmp3 = (uint8_T)(0U);
        tmp4 = (uint8_T)(0U);
        tmp5 = (uint8_T)(BaseEngineController_LS_112_B.s515_Merge != 0);
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

  /* S-Function (motohawk_sfun_data_read): '<S807>/motohawk_data_read2' incorporates:
   *  Constant: '<S807>/Constant5'
   */
  rtb_motohawk_data_read2_d = InjMPW_DataStore()[(uint32_T)1.0];

  /* S-Function (motohawk_sfun_data_read): '<S807>/motohawk_data_read1' incorporates:
   *  Constant: '<S807>/Constant4'
   */
  rtb_motohawk_data_read1_dn = InjDC_DataStore()[(uint32_T)1.0];

  /* S-Function (motohawk_sfun_send_canmsgs): '<S807>/Send CAN Messages' */
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
        if (rtb_motohawk_data_read2_d < 0.0000000000F) {
          tmp0 = (uint8_T)(0U);
        } else if (rtb_motohawk_data_read2_d > 25.5000000000F) {
          tmp0 = (uint8_T)(255U);
        } else {
          tmp0 = (uint8_T)(rtb_motohawk_data_read2_d * (10.0000000000F));
        }

        if (BaseEngineController_LS_112_B.s486_Lambda < -64.0000000000F) {
          tmp1 = (uint8_T)(0U);
        } else if (BaseEngineController_LS_112_B.s486_Lambda > 63.5000000000F) {
          tmp1 = (uint8_T)(255U);
        } else {
          tmp1 = (uint8_T)((BaseEngineController_LS_112_B.s486_Lambda -
                            (-64.0000000000F)) * (2.0000000000F));
        }

        if (rtb_motohawk_data_read1_dn < 0.0000000000F) {
          tmp2 = (uint8_T)(0U);
        } else if (rtb_motohawk_data_read1_dn > 100.0000350000F) {
          tmp2 = (uint8_T)(255U);
        } else {
          tmp2 = (uint8_T)(rtb_motohawk_data_read1_dn * (2.5499991075F));
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

  /* S-Function (motohawk_sfun_data_read): '<S808>/motohawk_data_read' */
  rtb_motohawk_data_read_hj = BARO_DataStore();

  /* S-Function Block: <S841>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_112_DWork.s841_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_cz = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S841>/Product' incorporates:
   *  MinMax: '<S841>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S841>/motohawk_calibration'
   */
  rtb_Switch_cz /= (rtb_Switch_cz >= (Flex_Filt_DataStore())) || rtIsNaN
    ((Flex_Filt_DataStore())) ? rtb_Switch_cz : (Flex_Filt_DataStore());

  /* Sum: '<S842>/Sum1' incorporates:
   *  Constant: '<S842>/Constant'
   *  Product: '<S842>/Product'
   *  Product: '<S842>/Product1'
   *  Sum: '<S842>/Sum'
   *  UnitDelay: '<S842>/Unit Delay'
   */
  rtb_Sum1_kc = (1.0 - rtb_Switch_cz) *
    BaseEngineController_LS_112_DWork.s842_UnitDelay_DSTATE +
    BaseEngineController_LS_112_B.s577_Merge * rtb_Switch_cz;

  /* Outputs for Enabled SubSystem: '<S399>/Capture IAT At Startup' incorporates:
   *  EnablePort: '<S442>/Enable'
   */
  if (rtb_RelOp_fa) {
    if (!BaseEngineController_LS_112_DWork.s399_CaptureIATAtStartup_MODE) {
      /* InitializeConditions for UnitDelay: '<S442>/Unit Delay' */
      BaseEngineController_LS_112_DWork.s442_UnitDelay_DSTATE = 0;
      BaseEngineController_LS_112_DWork.s399_CaptureIATAtStartup_MODE = TRUE;
    }

    /* Sum: '<S442>/Sum' incorporates:
     *  Constant: '<S442>/Constant'
     *  UnitDelay: '<S442>/Unit Delay'
     */
    rtb_Add_b = (int8_T)(BaseEngineController_LS_112_DWork.s442_UnitDelay_DSTATE
                         + 1);

    /* Sum: '<S442>/Add' incorporates:
     *  Constant: '<S442>/TwoSampleBuffer ToIgnore'
     *  S-Function (motohawk_sfun_calibration): '<S442>/motohawk_calibration'
     */
    rtb_Sum_o3 = (int8_T)(((int8_T)(IAT_KeyUp_Count_DataStore())) + 2);

    /* RelationalOperator: '<S442>/Relational Operator' */
    rtb_LogicalOperator6_p = (rtb_Add_b <= rtb_Sum_o3);

    /* Switch: '<S442>/Switch' */
    if (rtb_LogicalOperator6_p) {
      rtb_Sum_o3 = rtb_Add_b;
    }

    /* End of Switch: '<S442>/Switch' */

    /* Sum: '<S442>/Add1' incorporates:
     *  Constant: '<S442>/TwoSampleBuffer ToIgnore'
     */
    rtb_Add1_bc = (int8_T)(rtb_Sum_o3 - 2);

    /* Logic: '<S442>/Logical Operator' incorporates:
     *  Constant: '<S442>/TwoSampleBuffer ToIgnore'
     *  RelationalOperator: '<S442>/Relational Operator1'
     */
    rtb_LogicalOperator_oov = (rtb_LogicalOperator6_p && (rtb_Add_b > 2));

    /* Outputs for Enabled SubSystem: '<S442>/Collect Average' */
    BaseEngineController_LS_112_CollectAverage(rtb_LogicalOperator_oov,
      rtb_Add1_bc, BaseEngineController_LS_112_B.s651_Merge,
      &BaseEngineController_LS_112_B.s442_CollectAverage,
      &BaseEngineController_LS_112_DWork.s442_CollectAverage);

    /* End of Outputs for SubSystem: '<S442>/Collect Average' */

    /* Update for UnitDelay: '<S442>/Unit Delay' */
    BaseEngineController_LS_112_DWork.s442_UnitDelay_DSTATE = rtb_Sum_o3;
  } else {
    if (BaseEngineController_LS_112_DWork.s399_CaptureIATAtStartup_MODE) {
      /* Disable for Enabled SubSystem: '<S442>/Collect Average' */
      BaseEngineController_LS_112_CollectAverage_Disable
        (&BaseEngineController_LS_112_DWork.s442_CollectAverage);

      /* End of Disable for SubSystem: '<S442>/Collect Average' */
      BaseEngineController_LS_112_DWork.s399_CaptureIATAtStartup_MODE = FALSE;
    }
  }

  /* End of Outputs for SubSystem: '<S399>/Capture IAT At Startup' */

  /* S-Function (motohawk_sfun_send_canmsgs): '<S808>/Send CAN Messages' */
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
        if (rtb_motohawk_data_read_hj < 50.0000000000F) {
          tmp3 = (uint8_T)(0U);
        } else if (rtb_motohawk_data_read_hj > 113.7500000000F) {
          tmp3 = (uint8_T)(255U);
        } else {
          tmp3 = (uint8_T)((rtb_motohawk_data_read_hj - (50.0000000000F)) *
                           (4.0000000000F));
        }

        if (rtb_Sum1_kc < 0.0000000000F) {
          tmp4 = (uint8_T)(0U);
        } else if (rtb_Sum1_kc > 100.0000350000F) {
          tmp4 = (uint8_T)(255U);
        } else {
          tmp4 = (uint8_T)(rtb_Sum1_kc * (2.5499991075F));
        }

        if (BaseEngineController_LS_112_B.s442_CollectAverage.s406_Product <
            -50.0000000000F) {
          tmp5 = (uint8_T)(0U);
        } else if
            (BaseEngineController_LS_112_B.s442_CollectAverage.s406_Product >
             205.0000000000F) {
          tmp5 = (uint8_T)(255U);
        } else {
          tmp5 = (uint8_T)
            (BaseEngineController_LS_112_B.s442_CollectAverage.s406_Product -
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

  /* S-Function (motohawk_sfun_data_read): '<S811>/motohawk_data_read' */
  rtb_motohawk_data_read_l = BoostControlTarget_DataStore();

  /* S-Function (motohawk_sfun_data_read): '<S811>/motohawk_data_read1' */
  rtb_motohawk_data_read1_n = BoostControlDutyCycleFF_DataStore();

  /* S-Function (motohawk_sfun_data_read): '<S811>/motohawk_data_read2' */
  rtb_motohawk_data_read2_c = BoostControlPID_DataStore();

  /* S-Function (motohawk_sfun_send_canmsgs): '<S811>/Send CAN Messages' */
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
        if (rtb_motohawk_data_read_l < 0.0000000000F) {
          tmp0 = (uint16_T)(0U);
        } else if (rtb_motohawk_data_read_l > 6553.5000000000F) {
          tmp0 = (uint16_T)(65535U);
        } else {
          tmp0 = (uint16_T)(rtb_motohawk_data_read_l * (10.0000000000F));
        }

        tmp1 = (uint16_T)(0U);
        if (rtb_motohawk_data_read1_n > 100U) {
          tmp2 = (uint8_T)(255U);
        } else {
          tmp2 = (uint8_T)(rtb_motohawk_data_read1_n * (2U));
        }

        if (rtb_motohawk_data_read2_c < 0.0000000000F) {
          tmp3 = (uint8_T)(0U);
        } else if (rtb_motohawk_data_read2_c > 100.0000350000F) {
          tmp3 = (uint8_T)(255U);
        } else {
          tmp3 = (uint8_T)(rtb_motohawk_data_read2_c * (2.5499991075F));
        }

        if (BaseEngineController_LS_112_B.s656_Merge < -50.0000000000F) {
          tmp4 = (uint8_T)(0U);
        } else if (BaseEngineController_LS_112_B.s656_Merge > 205.0000000000F) {
          tmp4 = (uint8_T)(255U);
        } else {
          tmp4 = (uint8_T)(BaseEngineController_LS_112_B.s656_Merge -
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

  /* S-Function Block: <S844>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_112_DWork.s844_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_cz = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S844>/Product' incorporates:
   *  MinMax: '<S844>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S844>/motohawk_calibration'
   */
  rtb_Switch_cz /= (rtb_Switch_cz >= (APP_Filt_DataStore())) || rtIsNaN
    ((APP_Filt_DataStore())) ? rtb_Switch_cz : (APP_Filt_DataStore());

  /* Sum: '<S846>/Sum1' incorporates:
   *  Constant: '<S846>/Constant'
   *  Product: '<S846>/Product'
   *  Product: '<S846>/Product1'
   *  Sum: '<S846>/Sum'
   *  UnitDelay: '<S846>/Unit Delay'
   */
  rtb_Sum1_em = (1.0 - rtb_Switch_cz) *
    BaseEngineController_LS_112_DWork.s846_UnitDelay_DSTATE +
    BaseEngineController_LS_112_B.s443_Switch1 * rtb_Switch_cz;

  /* S-Function Block: <S843>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_112_DWork.s843_motohawk_delta_time_DWORK1, NULL);
    rtb_Switch_cz = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S843>/Product' incorporates:
   *  MinMax: '<S843>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S843>/motohawk_calibration'
   */
  rtb_Switch_cz /= (rtb_Switch_cz >= (ETCReq_Filt_DataStore())) || rtIsNaN
    ((ETCReq_Filt_DataStore())) ? rtb_Switch_cz : (ETCReq_Filt_DataStore());

  /* Sum: '<S845>/Sum1' incorporates:
   *  Constant: '<S845>/Constant'
   *  Product: '<S845>/Product'
   *  Product: '<S845>/Product1'
   *  Sum: '<S845>/Sum'
   *  UnitDelay: '<S845>/Unit Delay'
   */
  rtb_Sum1_et = (1.0 - rtb_Switch_cz) *
    BaseEngineController_LS_112_DWork.s845_UnitDelay_DSTATE +
    BaseEngineController_LS_112_B.s458_Sum2 * rtb_Switch_cz;

  /* S-Function (motohawk_sfun_fault_status): '<S812>/motohawk_fault_status9'
   *
   * Regarding '<S812>/motohawk_fault_status9':
     Status : "Active"
   */
  {
    extern boolean_T IsFaultActive(uint32_T fault);
    rtb_motohawk_fault_status9 = IsFaultActive(20);
  }

  /* Logic: '<S812>/Logical Operator3' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S812>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S812>/motohawk_fault_status10'
   */
  rtb_LogicalOperator3_k = ((IsFaultActive(5) || IsFaultActive(4)));

  /* Logic: '<S812>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S812>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S812>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_kk = ((IsFaultActive(13) || IsFaultActive(12)));

  /* Logic: '<S812>/Logical Operator2' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S812>/motohawk_fault_status5'
   *  S-Function (motohawk_sfun_fault_status): '<S812>/motohawk_fault_status6'
   */
  rtb_LogicalOperator2_h = ((IsFaultActive(63) || IsFaultActive(64)));

  /* Logic: '<S812>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S812>/motohawk_fault_status4'
   *  S-Function (motohawk_sfun_fault_status): '<S812>/motohawk_fault_status7'
   */
  rtb_LogicalOperator4_ij = ((IsFaultActive(149) || IsFaultActive(148)));

  /* Logic: '<S812>/Logical Operator5' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S812>/motohawk_fault_status11'
   *  S-Function (motohawk_sfun_fault_status): '<S812>/motohawk_fault_status8'
   */
  rtb_LogicalOperator5_jl = ((IsFaultActive(155) || IsFaultActive(154)));

  /* S-Function (motohawk_sfun_data_read): '<S812>/motohawk_data_read1' */
  rtb_motohawk_data_read1_ko = ETB_Curr_Flt_DataStore();

  /* S-Function (motohawk_sfun_fault_status): '<S812>/motohawk_fault_status12'
   *
   * Regarding '<S812>/motohawk_fault_status12':
     Status : "Active"
   */
  {
    extern boolean_T IsFaultActive(uint32_T fault);
    rtb_motohawk_fault_status12 = IsFaultActive(156);
  }

  /* S-Function (motohawk_sfun_send_canmsgs): '<S812>/Send CAN Messages' */
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
        if (rtb_Sum1_em < 0.0000000000F) {
          tmp0 = (uint8_T)(0U);
        } else if (rtb_Sum1_em > 100.0000350000F) {
          tmp0 = (uint8_T)(255U);
        } else {
          tmp0 = (uint8_T)(rtb_Sum1_em * (2.5499991075F));
        }

        if (rtb_Sum1_et < 0.0000000000F) {
          tmp1 = (uint8_T)(0U);
        } else if (rtb_Sum1_et > 100.0000350000F) {
          tmp1 = (uint8_T)(255U);
        } else {
          tmp1 = (uint8_T)(rtb_Sum1_et * (2.5499991075F));
        }

        if (BaseEngineController_LS_112_B.s768_Merge < 0.0000000000F) {
          tmp2 = (uint8_T)(0U);
        } else if (BaseEngineController_LS_112_B.s768_Merge > 100.0000350000F) {
          tmp2 = (uint8_T)(255U);
        } else {
          tmp2 = (uint8_T)(BaseEngineController_LS_112_B.s768_Merge *
                           (2.5499991075F));
        }

        if (BaseEngineController_LS_112_B.s785_Merge < 0.0000000000F) {
          tmp3 = (uint8_T)(0U);
        } else if (BaseEngineController_LS_112_B.s785_Merge > 100.0000350000F) {
          tmp3 = (uint8_T)(255U);
        } else {
          tmp3 = (uint8_T)(BaseEngineController_LS_112_B.s785_Merge *
                           (2.5499991075F));
        }

        tmp4 = (uint8_T)(rtb_motohawk_fault_status9 != 0);
        tmp5 = (uint8_T)(rtb_LogicalOperator3_k != 0);
        tmp6 = (uint8_T)(rtb_LogicalOperator1_kk != 0);
        tmp7 = (uint8_T)(0U);
        tmp8 = (uint8_T)(rtb_LogicalOperator2_h != 0);
        tmp9 = (uint8_T)(rtb_LogicalOperator4_ij != 0);
        tmp10 = (uint8_T)(rtb_LogicalOperator5_jl != 0);
        tmp11 = (uint8_T)(0U);
        tmp12 = (uint8_T)(rtb_motohawk_data_read1_ko != 0);
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

  /* S-Function (motohawk_sfun_data_read): '<S809>/motohawk_data_read' */
  rtb_motohawk_data_read_it = BaseRevLimit_DataStore();

  /* Logic: '<S809>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S809>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S809>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S809>/motohawk_fault_status3'
   *  S-Function (motohawk_sfun_fault_status): '<S809>/motohawk_fault_status4'
   */
  rtb_LogicalOperator_m = ((IsFaultActive(149) || IsFaultActive(148) ||
    IsFaultActive(155) || IsFaultActive(154)));

  /* Logic: '<S809>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S809>/motohawk_fault_status5'
   *  S-Function (motohawk_sfun_fault_status): '<S809>/motohawk_fault_status7'
   */
  rtb_LogicalOperator1_dr = ((IsFaultActive(44) || IsFaultActive(43)));

  /* Logic: '<S809>/Logical Operator2' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S809>/motohawk_fault_status6'
   *  S-Function (motohawk_sfun_fault_status): '<S809>/motohawk_fault_status8'
   */
  rtb_LogicalOperator2_ey = ((IsFaultActive(74) || IsFaultActive(73)));

  /* Logic: '<S809>/Logical Operator3' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S809>/motohawk_fault_status10'
   *  S-Function (motohawk_sfun_fault_status): '<S809>/motohawk_fault_status9'
   */
  rtb_LogicalOperator3_o = ((IsFaultActive(136) || IsFaultActive(135)));

  /* Logic: '<S809>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S809>/motohawk_fault_status11'
   *  S-Function (motohawk_sfun_fault_status): '<S809>/motohawk_fault_status12'
   */
  rtb_LogicalOperator4_m = ((IsFaultActive(121) || IsFaultActive(120)));

  /* Logic: '<S809>/Logical Operator5' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S809>/motohawk_fault_status13'
   *  S-Function (motohawk_sfun_fault_status): '<S809>/motohawk_fault_status14'
   */
  rtb_LogicalOperator5_i = ((IsFaultActive(85) || IsFaultActive(84)));

  /* S-Function (motohawk_sfun_send_canmsgs): '<S809>/Send CAN Messages' */
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
        if (rtb_motohawk_data_read_it < 0) {
          tmp1 = (uint16_T)(0U);
        } else if (rtb_motohawk_data_read_it > 25599) {
          tmp1 = (uint16_T)(65534U);
        } else {
          tmp1 = (uint16_T)(rtb_motohawk_data_read_it * (2));
        }

        if (rtb_motohawk_data_read_it < 0) {
          tmp2 = (uint16_T)(0U);
        } else if (rtb_motohawk_data_read_it > 25599) {
          tmp2 = (uint16_T)(65534U);
        } else {
          tmp2 = (uint16_T)(rtb_motohawk_data_read_it * (2));
        }

        tmp3 = (uint8_T)(0U);
        tmp4 = (uint8_T)(0U);
        tmp5 = (uint8_T)(rtb_LogicalOperator_m != 0);
        tmp6 = (uint8_T)(rtb_LogicalOperator1_dr != 0);
        tmp7 = (uint8_T)(rtb_LogicalOperator2_ey != 0);
        tmp8 = (uint8_T)(rtb_LogicalOperator3_o != 0);
        tmp9 = (uint8_T)(0U);
        tmp10 = (uint8_T)(rtb_LogicalOperator4_m != 0);
        tmp11 = (uint8_T)(rtb_LogicalOperator5_i != 0);
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

  /* S-Function (motohawk_sfun_send_canmsgs): '<S810>/Send CAN Messages' */
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
  /* Enable for Trigger_FGND_5XRTI_PERIODIC_1094p0005 */
  if (BaseEngineController_LS_112_DWork.s14_motohawk_trigger1_DWORK1 == 0) {
    BaseEngineController_LS_112_DWork.s14_motohawk_trigger1_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S14>/motohawk_trigger' */
  /* Enable for Trigger_FGND_5XRTI_PERIODIC_1093p0005 */
  if (BaseEngineController_LS_112_DWork.s14_motohawk_trigger_DWORK1 == 0) {
    BaseEngineController_LS_112_DWork.s14_motohawk_trigger_DWORK1 = 1;
  }

  /* S-Function (motohawk_sfun_trigger): '<S13>/motohawk_trigger' */
  /* Enable for Trigger_FGND_5XRTI_PERIODIC_11294p0006 */
  if (BaseEngineController_LS_112_DWork.s13_motohawk_trigger_DWORK1 == 0) {
    /* Enable for function-call system: '<S13>/Coil Control' */

    /* Enable for Atomic SubSystem: '<S847>/EST Enable TDC Counter' */

    /* Level2 S-Function Block: '<S852>/motohawk_trigger1' (motohawk_sfun_trigger) */

    /* Enable for Trigger_FGND_TDC_EVENT_10780p0004 */
    BaseEngineController_LS_112_DWork.s852_motohawk_trigger1_DWORK1 = 1;

    /* End of Enable for SubSystem: '<S847>/EST Enable TDC Counter' */
    BaseEngineController_LS_112_DWork.s13_motohawk_trigger_DWORK1 = 1;
  }

  /* If: '<S878>/If' incorporates:
   *  Inport: '<S879>/In1'
   *  Inport: '<S880>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S878>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S878>/override_enable'
   */
  if ((FAN1_PWM_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S878>/NewValue' incorporates:
     *  ActionPort: '<S879>/Action Port'
     */
    rtb_DataTypeConversion1_j = (FAN1_PWM_new_DataStore());

    /* End of Outputs for SubSystem: '<S878>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S878>/OldValue' incorporates:
     *  ActionPort: '<S880>/Action Port'
     */
    rtb_DataTypeConversion1_j = BaseEngineController_LS_112_B.s92_FAN1;

    /* End of Outputs for SubSystem: '<S878>/OldValue' */
  }

  /* End of If: '<S878>/If' */

  /* Product: '<S875>/Product' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S875>/motohawk_calibration'
   */
  rtb_DataTypeConversion1_j *= (FAN1_PWMGain_DataStore());

  /* Sum: '<S875>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S875>/motohawk_calibration1'
   */
  rtb_Switch_cz = rtb_DataTypeConversion1_j + (FAN1_PWMOffset_DataStore());

  /* MinMax: '<S877>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S875>/motohawk_calibration2'
   */
  rtb_Switch_cz = (rtb_Switch_cz >= (FAN1_PWMMinLimit_DataStore())) || rtIsNaN
    ((FAN1_PWMMinLimit_DataStore())) ? rtb_Switch_cz :
    (FAN1_PWMMinLimit_DataStore());

  /* MinMax: '<S877>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S875>/motohawk_calibration3'
   */
  BaseEngineController_LS_112_B.s877_MinMax1 = (rtb_Switch_cz <=
    (FAN1_PWMMaxLimit_DataStore())) || rtIsNaN((FAN1_PWMMaxLimit_DataStore())) ?
    rtb_Switch_cz : (FAN1_PWMMaxLimit_DataStore());

  /* Gain: '<S875>/Convert to integer 14-bit PWM resolution' */
  rtb_Switch_cz = 40.95 * BaseEngineController_LS_112_B.s877_MinMax1;

  /* DataTypeConversion: '<S875>/Data Type Conversion3' */
  if (rtb_Switch_cz < 32768.0) {
    if (rtb_Switch_cz >= -32768.0) {
      rtb_DataTypeConversion3_i = (int16_T)rtb_Switch_cz;
    } else {
      rtb_DataTypeConversion3_i = MIN_int16_T;
    }
  } else {
    rtb_DataTypeConversion3_i = MAX_int16_T;
  }

  /* End of DataTypeConversion: '<S875>/Data Type Conversion3' */
  /* Gain: '<S875>/Convert to integer 0.01Hz resolution' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S875>/motohawk_calibration4'
   */
  rtb_Switch_cz = 100.0 * (FAN1_PWMFrequency_DataStore());

  /* DataTypeConversion: '<S875>/Data Type Conversion2' */
  if (rtb_Switch_cz < 4.294967296E+9) {
    if (rtb_Switch_cz >= 0.0) {
      rtb_DataTypeConversion2_a = (uint32_T)rtb_Switch_cz;
    } else {
      rtb_DataTypeConversion2_a = 0U;
    }
  } else {
    rtb_DataTypeConversion2_a = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S875>/Data Type Conversion2' */

  /* If: '<S882>/If' incorporates:
   *  Inport: '<S883>/In1'
   *  Inport: '<S884>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S882>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S882>/override_enable'
   */
  if ((FAN2_PWM_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S882>/NewValue' incorporates:
     *  ActionPort: '<S883>/Action Port'
     */
    rtb_DataTypeConversion1_j = (FAN2_PWM_new_DataStore());

    /* End of Outputs for SubSystem: '<S882>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S882>/OldValue' incorporates:
     *  ActionPort: '<S884>/Action Port'
     */
    rtb_DataTypeConversion1_j = BaseEngineController_LS_112_B.s92_FAN2;

    /* End of Outputs for SubSystem: '<S882>/OldValue' */
  }

  /* End of If: '<S882>/If' */

  /* Product: '<S876>/Product' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S876>/motohawk_calibration'
   */
  rtb_DataTypeConversion1_j *= (FAN2_PWMGain_DataStore());

  /* Sum: '<S876>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S876>/motohawk_calibration1'
   */
  rtb_Switch_cz = rtb_DataTypeConversion1_j + (FAN2_PWMOffset_DataStore());

  /* MinMax: '<S881>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S876>/motohawk_calibration2'
   */
  rtb_Switch_cz = (rtb_Switch_cz >= (FAN2_PWMMinLimit_DataStore())) || rtIsNaN
    ((FAN2_PWMMinLimit_DataStore())) ? rtb_Switch_cz :
    (FAN2_PWMMinLimit_DataStore());

  /* MinMax: '<S881>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S876>/motohawk_calibration3'
   */
  BaseEngineController_LS_112_B.s881_MinMax1 = (rtb_Switch_cz <=
    (FAN2_PWMMaxLimit_DataStore())) || rtIsNaN((FAN2_PWMMaxLimit_DataStore())) ?
    rtb_Switch_cz : (FAN2_PWMMaxLimit_DataStore());

  /* Gain: '<S876>/Convert to integer 14-bit PWM resolution' */
  rtb_Switch_cz = 40.95 * BaseEngineController_LS_112_B.s881_MinMax1;

  /* DataTypeConversion: '<S876>/Data Type Conversion3' */
  if (rtb_Switch_cz < 32768.0) {
    if (rtb_Switch_cz >= -32768.0) {
      rtb_DataTypeConversion3_b = (int16_T)rtb_Switch_cz;
    } else {
      rtb_DataTypeConversion3_b = MIN_int16_T;
    }
  } else {
    rtb_DataTypeConversion3_b = MAX_int16_T;
  }

  /* End of DataTypeConversion: '<S876>/Data Type Conversion3' */
  /* Gain: '<S876>/Convert to integer 0.01Hz resolution' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S876>/motohawk_calibration4'
   */
  rtb_Switch_cz = 100.0 * (FAN2_PWMFrequency_DataStore());

  /* DataTypeConversion: '<S876>/Data Type Conversion2' */
  if (rtb_Switch_cz < 4.294967296E+9) {
    if (rtb_Switch_cz >= 0.0) {
      rtb_DataTypeConversion2_f = (uint32_T)rtb_Switch_cz;
    } else {
      rtb_DataTypeConversion2_f = 0U;
    }
  } else {
    rtb_DataTypeConversion2_f = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S876>/Data Type Conversion2' */

  /* S-Function Block: <S480>/motohawk_din Resource: ESTOPPin */

  /* Logic: '<S507>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S507>/0 = No Inversion 1 = Inversion'
   */
  rtb_LogicalOperator6_p = BaseEngineController_LS_112_B.s480_motohawk_din ^
    (ESTOPPolarity_DataStore());

  /* If: '<S518>/If' incorporates:
   *  Inport: '<S519>/In1'
   *  Inport: '<S520>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S518>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S518>/override_enable'
   */
  if ((ESTOP_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S518>/NewValue' incorporates:
     *  ActionPort: '<S519>/Action Port'
     */
    BaseEngineController_LS_112_B.s518_Merge = (ESTOP_new_DataStore());

    /* End of Outputs for SubSystem: '<S518>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S518>/OldValue' incorporates:
     *  ActionPort: '<S520>/Action Port'
     */
    BaseEngineController_LS_112_B.s518_Merge = rtb_LogicalOperator6_p;

    /* End of Outputs for SubSystem: '<S518>/OldValue' */
  }

  /* End of If: '<S518>/If' */

  /* Logic: '<S13>/Logical Operator5' incorporates:
   *  Logic: '<S13>/Logical Operator4'
   */
  rtb_LogicalOperator6_p = (rtb_RelationalOperator5_h &&
    (!BaseEngineController_LS_112_B.s518_Merge));

  /* If: '<S886>/If' incorporates:
   *  Inport: '<S887>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S886>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S886>/override_enable'
   */
  if ((FUELP_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S886>/NewValue' incorporates:
     *  ActionPort: '<S887>/Action Port'
     */
    rtb_LogicalOperator6_p = (FUELP_new_DataStore());

    /* End of Outputs for SubSystem: '<S886>/NewValue' */
  } else {
  }

  /* End of If: '<S886>/If' */

  /* Logic: '<S885>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S885>/0 = No Inversion 1 = Inversion'
   */
  BaseEngineController_LS_112_B.s885_LogicalOperator = rtb_LogicalOperator6_p ^
    (FUELP_Polarity_DataStore());

  /* S-Function Block: <S889>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_112_DWork.s889_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_i = ((real_T) delta) * 0.000001;
  }

  /* S-Function Block: <S473>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_112_DWork.s473_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_hk = ((real_T) delta) * 0.000001;
  }

  /* RelationalOperator: '<S472>/RelOp' incorporates:
   *  Constant: '<S472>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S453>/motohawk_data_read'
   */
  rtb_LogicalOperator6_p = (((uint8_T)EngineState_DataStore()) == 1);

  /* S-Function Block: <S453>/motohawk_ain_read Resource: ECUP */
  rtb_motohawk_ain_read_h = ECUP_AnalogInput_Get();

  /* Switch: '<S473>/Switch' incorporates:
   *  Constant: '<S453>/Constant1'
   *  Constant: '<S473>/Constant'
   *  Logic: '<S453>/Logical Operator'
   *  RelationalOperator: '<S453>/Relational Operator'
   *  S-Function (motohawk_sfun_ain_read): '<S453>/motohawk_ain_read'
   *  S-Function (motohawk_sfun_data_read): '<S473>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S473>/motohawk_delta_time'
   *  Sum: '<S473>/Sum'
   */
  if (rtb_LogicalOperator6_p && (rtb_motohawk_ain_read_h > 150)) {
    BaseEngineController_LS_112_B.s473_Switch = rtb_motohawk_delta_time_hk +
      TimeSinceStallTimer_DataStore();
  } else {
    BaseEngineController_LS_112_B.s473_Switch = 0.0;
  }

  /* End of Switch: '<S473>/Switch' */
  /* RelationalOperator: '<S791>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S791>/motohawk_calibration3'
   */
  rtb_Switch1_m = (BaseEngineController_LS_112_B.s473_Switch >
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
    if (!BaseEngineController_LS_112_DWork.s14_ElectronicThrottleController_MODE)
    {
      BaseEngineController_LS_112_DWork.s14_ElectronicThrottleController_MODE =
        TRUE;
    }

    /* RelationalOperator: '<S62>/RelOp' incorporates:
     *  Constant: '<S62>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S32>/motohawk_data_read3'
     */
    rtb_LogicalOperator6_p = (((uint8_T)EngineState_DataStore()) == 1);

    /* Logic: '<S32>/Logical Operator2' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S32>/motohawk_data_read2'
     */
    rtb_LogicalOperator1_ou = !ShutDownTasksComplete_DataStore();

    /* S-Function Block: <S32>/motohawk_ain_read Resource: ECUP */
    rtb_motohawk_ain_read_hs = ECUP_AnalogInput_Get();

    /* RelationalOperator: '<S32>/Relational Operator' incorporates:
     *  Constant: '<S32>/Constant1'
     *  S-Function (motohawk_sfun_ain_read): '<S32>/motohawk_ain_read'
     */
    rtb_AboveHiTarget_a = (rtb_motohawk_ain_read_hs < 150);

    /* Logic: '<S32>/Logical Operator3' */
    BaseEngineController_LS_112_B.s32_LogicalOperator3 =
      ((rtb_LogicalOperator6_p && rtb_LogicalOperator1_ou && rtb_AboveHiTarget_a));

    /* S-Function Block: <S63>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_112_DWork.s63_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_az = ((real_T) delta) * 0.000001;
    }

    /* Switch: '<S63>/Switch' incorporates:
     *  Constant: '<S63>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S63>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S63>/motohawk_delta_time'
     *  Sum: '<S63>/Sum'
     */
    if (rtb_AboveHiTarget_a) {
      BaseEngineController_LS_112_B.s63_Switch = rtb_motohawk_delta_time_az +
        ETCShutDownTimer_DataStore();
    } else {
      BaseEngineController_LS_112_B.s63_Switch = 0.0;
    }

    /* End of Switch: '<S63>/Switch' */

    /* UnitDelay: '<S20>/Unit Delay' */
    rtb_DataTypeConversion1_j =
      BaseEngineController_LS_112_DWork.s20_UnitDelay_DSTATE;

    /* RelationalOperator: '<S20>/Relational Operator5' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S20>/motohawk_calibration4'
     */
    BaseEngineController_LS_112_B.s20_RelationalOperator5 =
      ((rtb_DataTypeConversion1_j < (ETC_ShutdownLoAdaptError_DataStore())));

    /* RelationalOperator: '<S20>/Relational Operator2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S20>/motohawk_calibration5'
     */
    BaseEngineController_LS_112_B.s20_RelationalOperator2 =
      ((BaseEngineController_LS_112_B.s450_Switch2 >
        (ETC_SpringTestHiThresh_DataStore())));

    /* RelationalOperator: '<S20>/Relational Operator3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S20>/motohawk_calibration6'
     */
    BaseEngineController_LS_112_B.s20_RelationalOperator3 =
      ((BaseEngineController_LS_112_B.s450_Switch2 <
        (ETC_SpringTestLoThresh_DataStore())));

    /* Stateflow: '<S20>/ETC Test  Manager' */

    /* Gateway: Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/ETC Test  Manager */
    /* During: Foreground/Control/ActuatorCharacterization/Electronic Throttle Controller/ETC Test  Manager */
    switch
      (BaseEngineController_LS_112_DWork.s27_is_c9_BaseEngineController_LS_112)
    {
     case BaseEngineController_LS_112_IN_ForcedShutdown:
      /* During 'ForcedShutdown': '<S27>:6' */
      if (!BaseEngineController_LS_112_B.s32_LogicalOperator3) {
        /* Transition: '<S27>:19' */
        BaseEngineController_LS_112_DWork.s27_is_c9_BaseEngineController_LS_112 =
          BaseEngineController_LS_112_IN_SpringTestComplete;

        /* Entry 'SpringTestComplete': '<S27>:5' */
        BaseEngineController_LS_112_B.s27_DC_Override = 1;
        BaseEngineController_LS_112_B.s27_TestComplete = TRUE;
        BaseEngineController_LS_112_B.s27_SetpointMode = 0;
        BaseEngineController_LS_112_B.s27_TestTime =
          BaseEngineController_LS_112_B.s63_Switch -
          BaseEngineController_LS_112_DWork.s27_TimerOld;
      }
      break;

     case BaseEngineController_LS_112_IN_LowAdapt:
      /* During 'LowAdapt': '<S27>:2' */
      if (BaseEngineController_LS_112_B.s63_Switch > 5.0) {
        /* Transition: '<S27>:17' */
        BaseEngineController_LS_112_DWork.s27_is_c9_BaseEngineController_LS_112 =
          BaseEngineController_LS_112_IN_ForcedShutdown;

        /* Entry 'ForcedShutdown': '<S27>:6' */
        BaseEngineController_LS_112_B.s27_DC_Override = 1;
        BaseEngineController_LS_112_B.s27_TestComplete = TRUE;
        BaseEngineController_LS_112_B.s27_SetpointMode = 0;
        BaseEngineController_LS_112_B.s27_TestTime = 0.0;
      } else if (BaseEngineController_LS_112_B.s32_LogicalOperator3 &&
                 BaseEngineController_LS_112_B.s20_RelationalOperator5) {
        /* Transition: '<S27>:9' */
        BaseEngineController_LS_112_DWork.s27_is_c9_BaseEngineController_LS_112 =
          BaseEngineController_LS_112_IN_SpringTestSetpoint;

        /* Entry 'SpringTestSetpoint': '<S27>:3' */
        BaseEngineController_LS_112_B.s27_DC_Override = 0;
        BaseEngineController_LS_112_B.s27_TestComplete = FALSE;
        BaseEngineController_LS_112_B.s27_SetpointMode = 2;
        BaseEngineController_LS_112_B.s27_TestTime = 0.0;
      } else {
        if (!BaseEngineController_LS_112_B.s32_LogicalOperator3) {
          /* Transition: '<S27>:12' */
          BaseEngineController_LS_112_DWork.s27_is_c9_BaseEngineController_LS_112
            = BaseEngineController_LS_112_IN_PassThrough;

          /* Entry 'PassThrough': '<S27>:1' */
          BaseEngineController_LS_112_B.s27_DC_Override = 0;
          BaseEngineController_LS_112_B.s27_TestComplete = FALSE;
          BaseEngineController_LS_112_B.s27_SetpointMode = 0;
          BaseEngineController_LS_112_B.s27_TestTime = 0.0;
        }
      }
      break;

     case BaseEngineController_LS_112_IN_PassThrough:
      /* During 'PassThrough': '<S27>:1' */
      if (BaseEngineController_LS_112_B.s32_LogicalOperator3) {
        /* Transition: '<S27>:8' */
        BaseEngineController_LS_112_DWork.s27_is_c9_BaseEngineController_LS_112 =
          BaseEngineController_LS_112_IN_LowAdapt;

        /* Entry 'LowAdapt': '<S27>:2' */
        BaseEngineController_LS_112_B.s27_DC_Override = 0;
        BaseEngineController_LS_112_B.s27_TestComplete = FALSE;
        BaseEngineController_LS_112_B.s27_SetpointMode = 1;
        BaseEngineController_LS_112_B.s27_TestTime = 0.0;
      }
      break;

     case BaseEngineController_LS_112_IN_SpringTest:
      /* During 'SpringTest': '<S27>:4' */
      if (BaseEngineController_LS_112_B.s63_Switch > 5.0) {
        /* Transition: '<S27>:16' */
        BaseEngineController_LS_112_DWork.s27_is_c9_BaseEngineController_LS_112 =
          BaseEngineController_LS_112_IN_ForcedShutdown;

        /* Entry 'ForcedShutdown': '<S27>:6' */
        BaseEngineController_LS_112_B.s27_DC_Override = 1;
        BaseEngineController_LS_112_B.s27_TestComplete = TRUE;
        BaseEngineController_LS_112_B.s27_SetpointMode = 0;
        BaseEngineController_LS_112_B.s27_TestTime = 0.0;
      } else if (BaseEngineController_LS_112_B.s32_LogicalOperator3 &&
                 BaseEngineController_LS_112_B.s20_RelationalOperator3) {
        /* Transition: '<S27>:11' */
        BaseEngineController_LS_112_DWork.s27_is_c9_BaseEngineController_LS_112 =
          BaseEngineController_LS_112_IN_SpringTestComplete;

        /* Entry 'SpringTestComplete': '<S27>:5' */
        BaseEngineController_LS_112_B.s27_DC_Override = 1;
        BaseEngineController_LS_112_B.s27_TestComplete = TRUE;
        BaseEngineController_LS_112_B.s27_SetpointMode = 0;
        BaseEngineController_LS_112_B.s27_TestTime =
          BaseEngineController_LS_112_B.s63_Switch -
          BaseEngineController_LS_112_DWork.s27_TimerOld;
      } else {
        if (!BaseEngineController_LS_112_B.s32_LogicalOperator3) {
          /* Transition: '<S27>:15' */
          BaseEngineController_LS_112_DWork.s27_is_c9_BaseEngineController_LS_112
            = BaseEngineController_LS_112_IN_PassThrough;

          /* Entry 'PassThrough': '<S27>:1' */
          BaseEngineController_LS_112_B.s27_DC_Override = 0;
          BaseEngineController_LS_112_B.s27_TestComplete = FALSE;
          BaseEngineController_LS_112_B.s27_SetpointMode = 0;
          BaseEngineController_LS_112_B.s27_TestTime = 0.0;
        }
      }
      break;

     case BaseEngineController_LS_112_IN_SpringTestComplete:
      /* During 'SpringTestComplete': '<S27>:5' */
      if (!BaseEngineController_LS_112_B.s32_LogicalOperator3) {
        /* Transition: '<S27>:14' */
        BaseEngineController_LS_112_DWork.s27_is_c9_BaseEngineController_LS_112 =
          BaseEngineController_LS_112_IN_PassThrough;

        /* Entry 'PassThrough': '<S27>:1' */
        BaseEngineController_LS_112_B.s27_DC_Override = 0;
        BaseEngineController_LS_112_B.s27_TestComplete = FALSE;
        BaseEngineController_LS_112_B.s27_SetpointMode = 0;
        BaseEngineController_LS_112_B.s27_TestTime = 0.0;
      }
      break;

     case BaseEngineController_LS_112_IN_SpringTestSetpoint:
      /* During 'SpringTestSetpoint': '<S27>:3' */
      if (!BaseEngineController_LS_112_B.s32_LogicalOperator3) {
        /* Transition: '<S27>:13' */
        BaseEngineController_LS_112_DWork.s27_is_c9_BaseEngineController_LS_112 =
          BaseEngineController_LS_112_IN_PassThrough;

        /* Entry 'PassThrough': '<S27>:1' */
        BaseEngineController_LS_112_B.s27_DC_Override = 0;
        BaseEngineController_LS_112_B.s27_TestComplete = FALSE;
        BaseEngineController_LS_112_B.s27_SetpointMode = 0;
        BaseEngineController_LS_112_B.s27_TestTime = 0.0;
      } else if (BaseEngineController_LS_112_B.s32_LogicalOperator3 &&
                 BaseEngineController_LS_112_B.s20_RelationalOperator2) {
        /* Transition: '<S27>:10' */
        BaseEngineController_LS_112_DWork.s27_is_c9_BaseEngineController_LS_112 =
          BaseEngineController_LS_112_IN_SpringTest;

        /* Entry 'SpringTest': '<S27>:4' */
        BaseEngineController_LS_112_B.s27_DC_Override = 1;
        BaseEngineController_LS_112_B.s27_TestComplete = FALSE;
        BaseEngineController_LS_112_B.s27_SetpointMode = 0;
        BaseEngineController_LS_112_B.s27_TestTime = 0.0;
        BaseEngineController_LS_112_DWork.s27_TimerOld =
          BaseEngineController_LS_112_B.s63_Switch;
      } else {
        if (BaseEngineController_LS_112_B.s63_Switch > 5.0) {
          /* Transition: '<S27>:18' */
          BaseEngineController_LS_112_DWork.s27_is_c9_BaseEngineController_LS_112
            = BaseEngineController_LS_112_IN_ForcedShutdown;

          /* Entry 'ForcedShutdown': '<S27>:6' */
          BaseEngineController_LS_112_B.s27_DC_Override = 1;
          BaseEngineController_LS_112_B.s27_TestComplete = TRUE;
          BaseEngineController_LS_112_B.s27_SetpointMode = 0;
          BaseEngineController_LS_112_B.s27_TestTime = 0.0;
        }
      }
      break;

     default:
      /* Transition: '<S27>:7' */
      BaseEngineController_LS_112_DWork.s27_is_c9_BaseEngineController_LS_112 =
        BaseEngineController_LS_112_IN_PassThrough;

      /* Entry 'PassThrough': '<S27>:1' */
      BaseEngineController_LS_112_B.s27_DC_Override = 0;
      BaseEngineController_LS_112_B.s27_TestComplete = FALSE;
      BaseEngineController_LS_112_B.s27_SetpointMode = 0;
      BaseEngineController_LS_112_B.s27_TestTime = 0.0;
      break;
    }

    /* End of Stateflow: '<S20>/ETC Test  Manager' */

    /* RelationalOperator: '<S33>/RelOp' incorporates:
     *  Constant: '<S33>/Constant'
     */
    rtb_LogicalOperator6_p = (BaseEngineController_LS_112_B.s27_SetpointMode ==
      1);

    /* S-Function Block: <S56>/motohawk_delta_time */
    rtb_motohawk_delta_time_f = 0.005;

    /* Switch: '<S56>/Switch' incorporates:
     *  Constant: '<S56>/Constant'
     *  S-Function (motohawk_sfun_calibration): '<S54>/motohawk_calibration'
     *  S-Function (motohawk_sfun_data_read): '<S56>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S56>/motohawk_delta_time'
     *  Sum: '<S56>/Sum'
     */
    if ((ETCTuneEnable_DataStore())) {
      rtb_Switch_g = rtb_motohawk_delta_time_f + ETC_Tune_Timer_DataStore();
    } else {
      rtb_Switch_g = 0.0;
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
      rtb_DataTypeConversion_ep = (ETCReq_new_DataStore());

      /* End of Outputs for SubSystem: '<S57>/NewValue' */
    } else {
      /* Outputs for IfAction SubSystem: '<S57>/OldValue' incorporates:
       *  ActionPort: '<S59>/Action Port'
       */
      rtb_DataTypeConversion_ep = BaseEngineController_LS_112_B.s92_Throttle;

      /* End of Outputs for SubSystem: '<S57>/OldValue' */
    }

    /* End of If: '<S57>/If' */

    /* S-Function Block: <S55>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_112_DWork.s55_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_bm0 = ((real_T) delta) * 0.000001;
    }

    /* Outputs for Enabled SubSystem: '<S31>/PassThrough' incorporates:
     *  EnablePort: '<S52>/Enable'
     */
    if (BaseEngineController_LS_112_B.s27_SetpointMode == 1) {
      if (!BaseEngineController_LS_112_DWork.s31_PassThrough_MODE) {
        BaseEngineController_LS_112_DWork.s31_PassThrough_MODE = TRUE;
      }

      BaseEngineController_LS_112_B.s52_In1 = -5.0 +
        ETC_ShutdownLoAdaptError_DataStore();
    } else {
      if (BaseEngineController_LS_112_DWork.s31_PassThrough_MODE) {
        /* Disable for Outport: '<S52>/Out1' */
        BaseEngineController_LS_112_B.s52_In1 = 10.0;
        BaseEngineController_LS_112_DWork.s31_PassThrough_MODE = FALSE;
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
    rtb_DataTypeConversion1_j =
      BaseEngineController_LS_112_DWork.s55_UnitDelay_DSTATE;

    /* Product: '<S55>/Product1' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S55>/motohawk_delta_time'
     *  Sum: '<S55>/Sum3'
     *  UnitDelay: '<S55>/Unit Delay'
     */
    rtb_Product5_j = 1.0 / rtb_motohawk_delta_time_bm0 *
      (BaseEngineController_LS_112_B.s52_In1 -
       BaseEngineController_LS_112_DWork.s55_UnitDelay_DSTATE);

    /* MinMax: '<S60>/MinMax' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S31>/motohawk_calibration2'
     */
    rtb_Product5_j = (rtb_Product5_j >= (ETC_LoAdaptRateLimit_DataStore())) ||
      rtIsNaN((ETC_LoAdaptRateLimit_DataStore())) ? rtb_Product5_j :
      (ETC_LoAdaptRateLimit_DataStore());

    /* Sum: '<S55>/Sum2' incorporates:
     *  Constant: '<S31>/Constant7'
     *  MinMax: '<S60>/MinMax1'
     *  Product: '<S55>/Product'
     *  S-Function (motohawk_sfun_delta_time): '<S55>/motohawk_delta_time'
     */
    rtb_Switch1_gg = (rtb_Product5_j <= 100.0 ? rtb_Product5_j : 100.0) *
      rtb_motohawk_delta_time_bm0 + rtb_DataTypeConversion1_j;

    /* MultiPortSwitch: '<S31>/Multiport Switch' incorporates:
     *  Constant: '<S31>/Constant1'
     *  S-Function (motohawk_sfun_data_read): '<S31>/motohawk_data_read1'
     *  Sum: '<S31>/Add1'
     */
    switch (BaseEngineController_LS_112_B.s27_SetpointMode) {
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
        BaseEngineController_LS_112_B.s31_MultiportSwitch = (sin
          (6.2831853071795862 * (ETCTuneFreq_DataStore()) * rtb_Switch_g) *
          (ETCTuneAmp_DataStore()) + (ETCTuneAmp_DataStore())) +
          (ETCTuneOffset_DataStore());
      } else {
        BaseEngineController_LS_112_B.s31_MultiportSwitch =
          rtb_DataTypeConversion_ep;
      }

      /* End of Switch: '<S54>/Switch' */
      break;

     case 1:
      BaseEngineController_LS_112_B.s31_MultiportSwitch = rtb_Switch1_gg;
      break;

     default:
      BaseEngineController_LS_112_B.s31_MultiportSwitch = 10.0 +
        ETC_SpringTestHiThresh_DataStore();
      break;
    }

    /* End of MultiPortSwitch: '<S31>/Multiport Switch' */

    /* Sum: '<S31>/Add' */
    rtb_Switch3_e = BaseEngineController_LS_112_B.s31_MultiportSwitch -
      BaseEngineController_LS_112_B.s450_Switch2;

    /* Logic: '<S25>/Logical Operator' incorporates:
     *  Constant: '<S25>/Constant1'
     *  RelationalOperator: '<S25>/Relational Operator4'
     *  S-Function (motohawk_sfun_data_read): '<S25>/motohawk_data_read1'
     *  Sum: '<S25>/Add1'
     */
    rtb_LogicalOperator_m3 = ((rtb_LogicalOperator6_p && (rtb_Switch3_e <= 5.0 +
      ETC_ShutdownLoAdaptError_DataStore())));

    /* S-Function (motohawk_sfun_data_write): '<S25>/motohawk_data_write1' */
    /* Write to Data Storage as scalar: TPSAdaptLoRequest */
    {
      TPSAdaptLoRequest_DataStore() = rtb_LogicalOperator_m3;
    }

    /* Abs: '<S26>/Abs' */
    rtb_Product5_j = fabs(rtb_Switch3_e);

    /* Logic: '<S26>/Logical Operator' incorporates:
     *  Constant: '<S34>/Constant'
     *  RelationalOperator: '<S26>/Relational Operator4'
     *  RelationalOperator: '<S34>/RelOp'
     *  S-Function (motohawk_sfun_calibration): '<S26>/motohawk_calibration1'
     */
    rtb_LogicalOperator_h = (((rtb_Product5_j > (ETC_StickingThresh_DataStore()))
      && (BaseEngineController_LS_112_B.s27_SetpointMode == 0)));

    /* S-Function (motohawk_sfun_fault_def): '<S26>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: ETC_Sticking */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(64, rtb_LogicalOperator_h);
      UpdateFault(64);
    }

    /* Outputs for Triggered SubSystem: '<S20>/Reset TasksComplete To True' incorporates:
     *  TriggerPort: '<S30>/Trigger'
     */
    if (BaseEngineController_LS_112_B.s27_TestComplete &&
        (BaseEngineController_LS_112_PrevZCSigState.ResetTasksCompleteToTrue_Trig_ZCE
         != POS_ZCSIG)) {
      /* S-Function (motohawk_sfun_data_write): '<S30>/motohawk_data_write' incorporates:
       *  Constant: '<S30>/Constant2'
       */
      /* Write to Data Storage as scalar: ShutDownTasksComplete */
      {
        ShutDownTasksComplete_DataStore() = TRUE;
      }
    }

    BaseEngineController_LS_112_PrevZCSigState.ResetTasksCompleteToTrue_Trig_ZCE
      = (uint8_T)(BaseEngineController_LS_112_B.s27_TestComplete ? (int32_T)
                  POS_ZCSIG : (int32_T)ZERO_ZCSIG);

    /* End of Outputs for SubSystem: '<S20>/Reset TasksComplete To True' */

    /* S-Function (motohawk_sfun_data_write): '<S20>/motohawk_data_write' */
    /* Write to Data Storage as scalar: SpringTestTime */
    {
      SpringTestTime_DataStore() = BaseEngineController_LS_112_B.s27_TestTime;
    }

    /* RelationalOperator: '<S20>/Relational Operator1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S20>/motohawk_calibration3'
     */
    rtb_RelationalOperator1_np = (((ETC_SpringTestTimerThresh_DataStore()) <
      BaseEngineController_LS_112_B.s27_TestTime));

    /* S-Function (motohawk_sfun_fault_def): '<S20>/motohawk_fault_def' */

    /* Set Fault Suspected Status: ETCSpringTest */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(62, rtb_RelationalOperator1_np);
      UpdateFault(62);
    }

    /* RelationalOperator: '<S28>/Relational Operator6' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S28>/motohawk_calibration4'
     *  S-Function (motohawk_sfun_data_read): '<S28>/motohawk_data_read'
     */
    rtb_LogicalOperator6_p = (TimeSinceStall_DataStore() >
      (ETCShutdownTimerThresh_DataStore()));

    /* S-Function Block: <S28>/motohawk_ain_read Resource: ECUP */
    rtb_motohawk_ain_read_d = ECUP_AnalogInput_Get();

    /* Logic: '<S28>/Logical Operator' incorporates:
     *  Constant: '<S28>/Constant1'
     *  RelationalOperator: '<S28>/Relational Operator'
     *  S-Function (motohawk_sfun_ain_read): '<S28>/motohawk_ain_read'
     */
    BaseEngineController_LS_112_B.s28_LogicalOperator = ((rtb_LogicalOperator6_p
      && (rtb_motohawk_ain_read_d > 150)));

    /* Logic: '<S20>/Logical Operator' */
    rtb_LogicalOperator6_p = ((BaseEngineController_LS_112_B.s27_DC_Override !=
      0) || BaseEngineController_LS_112_B.s28_LogicalOperator);

    /* S-Function Block: <S29>/motohawk_prelookup2 */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (ETC_SetpointIn_DataStore()) =
        BaseEngineController_LS_112_B.s31_MultiportSwitch;
      (ETC_SetpointIdx_DataStore()) = TablePrelookup_real_T
        (BaseEngineController_LS_112_B.s31_MultiportSwitch,
         (ETC_SetpointIdxArr_DataStore()), 20, (ETC_SetpointIdx_DataStore()));
      rtb_motohawk_prelookup2_ev = (ETC_SetpointIdx_DataStore());
    }

    /* S-Function Block: <S29>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_eo = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup2_ev, (real_T *) ((ETCDCOffsetTbl_DataStore())),
         20);
      (ETCDCOffset_DataStore()) = rtb_motohawk_interpolation_1d_eo;
    }

    /* UnitDelay: '<S46>/Unit Delay' */
    rtb_DataTypeConversion_ep =
      BaseEngineController_LS_112_DWork.s46_UnitDelay_DSTATE;

    /* UnitDelay: '<S42>/Unit Delay' */
    rtb_DataTypeConversion1_j =
      BaseEngineController_LS_112_DWork.s42_UnitDelay_DSTATE;

    /* S-Function Block: <S43>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_112_DWork.s43_motohawk_delta_time_DWORK1, NULL);
      rtb_Product5_j = ((real_T) delta) * 0.000001;
    }

    /* Product: '<S43>/Product' incorporates:
     *  MinMax: '<S43>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S43>/motohawk_calibration'
     */
    rtb_Product5_j /= (rtb_Product5_j >= (ETCDamperTPSFilt_DataStore())) ||
      rtIsNaN((ETCDamperTPSFilt_DataStore())) ? rtb_Product5_j :
      (ETCDamperTPSFilt_DataStore());

    /* Sum: '<S44>/Sum1' incorporates:
     *  Constant: '<S44>/Constant'
     *  Product: '<S44>/Product'
     *  Product: '<S44>/Product1'
     *  Sum: '<S44>/Sum'
     *  UnitDelay: '<S44>/Unit Delay'
     */
    rtb_Switch2_c = (1.0 - rtb_Product5_j) *
      BaseEngineController_LS_112_DWork.s44_UnitDelay_DSTATE +
      BaseEngineController_LS_112_B.s450_Switch2 * rtb_Product5_j;

    /* S-Function Block: <S42>/motohawk_delta_time */
    rtb_motohawk_delta_time_ce = 0.005;

    /* Product: '<S42>/Product' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S42>/motohawk_delta_time'
     *  Sum: '<S42>/Sum2'
     */
    BaseEngineController_LS_112_B.s42_Product = (rtb_Switch2_c -
      rtb_DataTypeConversion1_j) / rtb_motohawk_delta_time_ce;

    /* Sum: '<S35>/Sum1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S35>/motohawk_calibration10'
     *  S-Function (motohawk_sfun_calibration): '<S35>/motohawk_calibration5'
     */
    rtb_Product5_j = (ETCDamperSwitchThresh_DataStore()) -
      (ETCDamperSwitchHyst_DataStore());

    /* RelationalOperator: '<S41>/LT' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S35>/motohawk_calibration5'
     */
    rtb_AboveHiTarget_a = (rtb_Product5_j >= (ETCDamperSwitchThresh_DataStore()));

    /* RelationalOperator: '<S41>/LT1' */
    rtb_BelowLoTarget_j = (rtb_Product5_j <=
      BaseEngineController_LS_112_B.s42_Product);

    /* CombinatorialLogic: '<S45>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_AboveHiTarget_a != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_j != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_h[0] =
        BaseEngineController_LS_112_ConstP.pooled896[rowidx];
      rtb_CombinatorialLogic_h[1] =
        BaseEngineController_LS_112_ConstP.pooled896[rowidx + 4];
    }

    /* Switch: '<S45>/Switch1' incorporates:
     *  UnitDelay: '<S45>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_h[1]) {
      rtb_LogicalOperator1_ou = rtb_CombinatorialLogic_h[0];
    } else {
      rtb_LogicalOperator1_ou =
        BaseEngineController_LS_112_DWork.s45_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S45>/Switch1' */

    /* Switch: '<S41>/Switch2' incorporates:
     *  Logic: '<S41>/Logical Operator'
     *  S-Function (motohawk_sfun_calibration): '<S35>/motohawk_calibration5'
     */
    if (!rtb_LogicalOperator1_ou) {
      BaseEngineController_LS_112_B.s41_Switch2 =
        (ETCDamperSwitchThresh_DataStore());
    } else {
      BaseEngineController_LS_112_B.s41_Switch2 =
        BaseEngineController_LS_112_B.s42_Product;
    }

    /* End of Switch: '<S41>/Switch2' */

    /* RelationalOperator: '<S35>/Relational Operator' */
    BaseEngineController_LS_112_B.s35_RelationalOperator =
      ((BaseEngineController_LS_112_B.s42_Product >
        BaseEngineController_LS_112_B.s41_Switch2));

    /* Switch: '<S38>/Switch' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S29>/motohawk_calibration7'
     *  S-Function (motohawk_sfun_calibration): '<S29>/motohawk_calibration8'
     */
    if (BaseEngineController_LS_112_B.s35_RelationalOperator) {
      rtb_Product5_j = (ETCDampGainUp_DataStore());
    } else {
      rtb_Product5_j = (ETCDampGainDown_DataStore());
    }

    /* End of Switch: '<S38>/Switch' */

    /* Product: '<S38>/Product3' */
    rtb_Product1_mc = rtb_Product5_j *
      BaseEngineController_LS_112_B.s450_Switch2;

    /* S-Function Block: <S46>/motohawk_delta_time */
    rtb_motohawk_delta_time_c3 = 0.005;

    /* Product: '<S46>/Product' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S46>/motohawk_delta_time'
     *  Sum: '<S46>/Sum2'
     */
    BaseEngineController_LS_112_B.s46_Product = (rtb_Product1_mc -
      rtb_DataTypeConversion_ep) / rtb_motohawk_delta_time_c3;

    /* UnitDelay: '<S47>/Unit Delay' */
    rtb_DataTypeConversion1_j =
      BaseEngineController_LS_112_DWork.s47_UnitDelay_DSTATE;

    /* Sum: '<S38>/Sum2' */
    BaseEngineController_LS_112_B.s38_Sum2 =
      BaseEngineController_LS_112_B.s31_MultiportSwitch -
      BaseEngineController_LS_112_B.s450_Switch2;

    /* Product: '<S38>/Product5' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S29>/motohawk_calibration6'
     */
    rtb_Product5_j = BaseEngineController_LS_112_B.s38_Sum2 *
      (ETCErrorGain_DataStore());

    /* Product: '<S38>/Product4' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S29>/motohawk_calibration1'
     */
    rtb_DataTypeConversion_ep = (ETCDGain_DataStore()) * rtb_Product5_j;

    /* S-Function Block: <S47>/motohawk_delta_time */
    rtb_motohawk_delta_time_nt5 = 0.005;

    /* Product: '<S47>/Product' incorporates:
     *  S-Function (motohawk_sfun_delta_time): '<S47>/motohawk_delta_time'
     *  Sum: '<S47>/Sum2'
     */
    BaseEngineController_LS_112_B.s47_Product = (rtb_DataTypeConversion_ep -
      rtb_DataTypeConversion1_j) / rtb_motohawk_delta_time_nt5;

    /* Sum: '<S29>/Add' */
    rtb_Add_j4 = BaseEngineController_LS_112_B.s31_MultiportSwitch -
      BaseEngineController_LS_112_B.s450_Switch2;

    /* S-Function Block: <S29>/motohawk_prelookup */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (ETC_ErrorIn_DataStore()) = rtb_Add_j4;
      (ETC_ErrorIdx_DataStore()) = TablePrelookup_real_T(rtb_Add_j4,
        (ETC_ErrorIdxArr_DataStore()), 10, (ETC_ErrorIdx_DataStore()));
      rtb_motohawk_prelookup_hy = (ETC_ErrorIdx_DataStore());
    }

    /* S-Function Block: <S37>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_l = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_hy, (real_T *) ((ETC_PGainMultTbl_DataStore())),
         10);
      (ETC_PGainMult_DataStore()) = rtb_motohawk_interpolation_1d_l;
    }

    /* Product: '<S38>/Product2' incorporates:
     *  Product: '<S37>/Product'
     *  S-Function (motohawk_sfun_calibration): '<S37>/motohawk_calibration'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S37>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_prelookup): '<S29>/motohawk_prelookup'
     *  Sum: '<S29>/Add'
     */
    BaseEngineController_LS_112_B.s38_Product2 = rtb_motohawk_interpolation_1d_l
      * (ETCPGain_DataStore()) * rtb_Product5_j;

    /* Switch: '<S48>/Switch1' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S20>/motohawk_data_read'
     *  UnitDelay: '<S48>/Unit Delay'
     */
    if (ETCStallStateShutdown_DataStore()) {
      BaseEngineController_LS_112_B.s48_Switch1 = 0.0;
    } else {
      BaseEngineController_LS_112_B.s48_Switch1 =
        BaseEngineController_LS_112_DWork.s48_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S48>/Switch1' */

    /* Sum: '<S29>/Sum' incorporates:
     *  S-Function (motohawk_sfun_interpolation_1d): '<S29>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_prelookup): '<S29>/motohawk_prelookup2'
     *  Sum: '<S38>/Sum'
     */
    rtb_DataTypeConversion1_j = (((BaseEngineController_LS_112_B.s47_Product -
      BaseEngineController_LS_112_B.s46_Product) +
      BaseEngineController_LS_112_B.s38_Product2) +
      BaseEngineController_LS_112_B.s48_Switch1) +
      rtb_motohawk_interpolation_1d_eo;

    /* MinMax: '<S51>/MinMax' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S39>/motohawk_calibration'
     */
    rtb_Abs_o = (rtb_DataTypeConversion1_j >= (ETCLwrLim_DataStore())) ||
      rtIsNaN((ETCLwrLim_DataStore())) ? rtb_DataTypeConversion1_j :
      (ETCLwrLim_DataStore());

    /* MinMax: '<S51>/MinMax1' incorporates:
     *  MinMax: '<S51>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S39>/motohawk_calibration1'
     */
    BaseEngineController_LS_112_B.s51_MinMax1 = (rtb_Abs_o <=
      (ETCUprLim_DataStore())) || rtIsNaN((ETCUprLim_DataStore())) ? rtb_Abs_o :
      (ETCUprLim_DataStore());

    /* S-Function Block: <S36>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_bo = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_hy, (real_T *) ((ETC_IGainMultTbl_DataStore())),
         10);
      (ETC_IGainMult_DataStore()) = rtb_motohawk_interpolation_1d_bo;
    }

    /* Product: '<S38>/Product1' incorporates:
     *  Product: '<S36>/Product'
     *  S-Function (motohawk_sfun_calibration): '<S36>/motohawk_calibration2'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S36>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_prelookup): '<S29>/motohawk_prelookup'
     *  Sum: '<S29>/Add'
     */
    rtb_DataTypeConversion1_j = rtb_motohawk_interpolation_1d_bo *
      (ETCIGain_DataStore()) * rtb_Product5_j;

    /* S-Function Block: <S48>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_112_DWork.s48_motohawk_delta_time_DWORK1, NULL);
      rtb_motohawk_delta_time_cr = ((real_T) delta) * 0.000001;
    }

    /* Sum: '<S48>/Sum' incorporates:
     *  Product: '<S48>/Product'
     *  S-Function (motohawk_sfun_delta_time): '<S48>/motohawk_delta_time'
     */
    rtb_DataTypeConversion1_j = rtb_DataTypeConversion1_j *
      rtb_motohawk_delta_time_cr + BaseEngineController_LS_112_B.s48_Switch1;

    /* MinMax: '<S50>/MinMax' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S29>/motohawk_calibration3'
     */
    rtb_Abs_o = (rtb_DataTypeConversion1_j >= (ETCIMin_DataStore())) || rtIsNaN
      ((ETCIMin_DataStore())) ? rtb_DataTypeConversion1_j : (ETCIMin_DataStore());

    /* MinMax: '<S50>/MinMax1' incorporates:
     *  MinMax: '<S50>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S29>/motohawk_calibration4'
     */
    u = (rtb_Abs_o <= (ETCIMax_DataStore())) || rtIsNaN((ETCIMax_DataStore())) ?
      rtb_Abs_o : (ETCIMax_DataStore());

    /* Saturate: '<S56>/Saturation' */
    rtb_Saturation_if = rtb_Switch_g >= 16000.0 ? 16000.0 : rtb_Switch_g <= 0.0 ?
      0.0 : rtb_Switch_g;

    /* S-Function (motohawk_sfun_data_write): '<S56>/motohawk_data_write' */
    /* Write to Data Storage as scalar: ETC_Tune_Timer */
    {
      ETC_Tune_Timer_DataStore() = rtb_Saturation_if;
    }

    /* Saturate: '<S63>/Saturation' */
    rtb_Saturation_ei = BaseEngineController_LS_112_B.s63_Switch >= 16000.0 ?
      16000.0 : BaseEngineController_LS_112_B.s63_Switch <= 0.0 ? 0.0 :
      BaseEngineController_LS_112_B.s63_Switch;

    /* S-Function (motohawk_sfun_data_write): '<S63>/motohawk_data_write' */
    /* Write to Data Storage as scalar: ETCShutDownTimer */
    {
      ETCShutDownTimer_DataStore() = rtb_Saturation_ei;
    }

    /* S-Function (motohawk_sfun_data_read): '<S32>/motohawk_data_read1' */
    rtb_motohawk_data_read1_nh = MPRD_DataStore();

    /* Outputs for Triggered SubSystem: '<S32>/Reset TasksComplete To False' incorporates:
     *  TriggerPort: '<S61>/Trigger'
     */
    if (rtb_motohawk_data_read1_nh &&
        (BaseEngineController_LS_112_PrevZCSigState.ResetTasksCompleteToFalse_Trig_ZCE
         != POS_ZCSIG)) {
      /* S-Function (motohawk_sfun_data_write): '<S61>/motohawk_data_write' incorporates:
       *  Constant: '<S61>/Constant2'
       */
      /* Write to Data Storage as scalar: ShutDownTasksComplete */
      {
        ShutDownTasksComplete_DataStore() = FALSE;
      }
    }

    BaseEngineController_LS_112_PrevZCSigState.ResetTasksCompleteToFalse_Trig_ZCE
      = (uint8_T)(rtb_motohawk_data_read1_nh ? (int32_T)POS_ZCSIG : (int32_T)
                  ZERO_ZCSIG);

    /* End of Outputs for SubSystem: '<S32>/Reset TasksComplete To False' */

    /* Switch: '<S20>/Switch' incorporates:
     *  Constant: '<S20>/Constant2'
     */
    if (rtb_LogicalOperator6_p) {
      BaseEngineController_LS_112_B.s20_Switch = 0.0;
    } else {
      BaseEngineController_LS_112_B.s20_Switch =
        BaseEngineController_LS_112_B.s51_MinMax1;
    }

    /* End of Switch: '<S20>/Switch' */

    /* Update for UnitDelay: '<S20>/Unit Delay' */
    BaseEngineController_LS_112_DWork.s20_UnitDelay_DSTATE = rtb_Switch3_e;

    /* Update for UnitDelay: '<S55>/Unit Delay' */
    BaseEngineController_LS_112_DWork.s55_UnitDelay_DSTATE = rtb_Switch1_gg;

    /* Update for UnitDelay: '<S46>/Unit Delay' */
    BaseEngineController_LS_112_DWork.s46_UnitDelay_DSTATE = rtb_Product1_mc;

    /* Update for UnitDelay: '<S42>/Unit Delay' */
    BaseEngineController_LS_112_DWork.s42_UnitDelay_DSTATE = rtb_Switch2_c;

    /* Update for UnitDelay: '<S44>/Unit Delay' */
    BaseEngineController_LS_112_DWork.s44_UnitDelay_DSTATE = rtb_Switch2_c;

    /* Update for UnitDelay: '<S45>/Unit Delay' */
    BaseEngineController_LS_112_DWork.s45_UnitDelay_DSTATE =
      rtb_LogicalOperator1_ou;

    /* Update for UnitDelay: '<S47>/Unit Delay' */
    BaseEngineController_LS_112_DWork.s47_UnitDelay_DSTATE =
      rtb_DataTypeConversion_ep;

    /* Update for UnitDelay: '<S48>/Unit Delay' incorporates:
     *  MinMax: '<S50>/MinMax1'
     */
    BaseEngineController_LS_112_DWork.s48_UnitDelay_DSTATE = u;
  } else {
    if (BaseEngineController_LS_112_DWork.s14_ElectronicThrottleController_MODE)
    {
      /* Disable for Enabled SubSystem: '<S31>/PassThrough' */
      /* Disable for Outport: '<S52>/Out1' */
      BaseEngineController_LS_112_B.s52_In1 = 10.0;
      BaseEngineController_LS_112_DWork.s31_PassThrough_MODE = FALSE;

      /* End of Disable for SubSystem: '<S31>/PassThrough' */
      BaseEngineController_LS_112_DWork.s14_ElectronicThrottleController_MODE =
        FALSE;
    }
  }

  /* End of RelationalOperator: '<S19>/RelOp' */
  /* End of Outputs for SubSystem: '<S14>/Electronic Throttle Controller' */
  /* Logic: '<S794>/Logical Operator1' incorporates:
   *  Logic: '<S791>/Logical Operator'
   *  Logic: '<S791>/Logical Operator9'
   *  RelationalOperator: '<S791>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S791>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S794>/motohawk_calibration5'
   */
  rtb_RelationalOperator5_h = ((ETC_CutPower_Permitted_DataStore()) &&
    (BaseEngineController_LS_112_B.s518_Merge || (rtb_Switch1_m &&
    (BaseEngineController_LS_112_B.s20_Switch < (ETC_CutPower_ETC_DataStore())))));

  /* Logic: '<S794>/Logical Operator' */
  rtb_LogicalOperator6_p = !rtb_RelationalOperator5_h;

  /* If: '<S890>/If' incorporates:
   *  Inport: '<S891>/In1'
   *  Inport: '<S892>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S890>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S890>/override_enable'
   */
  if ((ETC_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S890>/NewValue' incorporates:
     *  ActionPort: '<S891>/Action Port'
     */
    rtb_DataTypeConversion1_j = (ETC_new_DataStore());

    /* End of Outputs for SubSystem: '<S890>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S890>/OldValue' incorporates:
     *  ActionPort: '<S892>/Action Port'
     */
    rtb_DataTypeConversion1_j = BaseEngineController_LS_112_B.s20_Switch;

    /* End of Outputs for SubSystem: '<S890>/OldValue' */
  }

  /* End of If: '<S890>/If' */

  /* Switch: '<S794>/Switch' incorporates:
   *  Constant: '<S794>/Constant2'
   *  Product: '<S794>/Product'
   *  S-Function (motohawk_sfun_calibration): '<S794>/motohawk_calibration2'
   *  S-Function (motohawk_sfun_interpolation_1d): '<S794>/motohawk_interpolation_1d'
   *  Sum: '<S794>/Sum'
   */
  if (rtb_RelationalOperator5_h) {
    rtb_Switch_cz = 0.0;
  } else {
    /* S-Function Block: <S794>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_j = TableInterpolation1D_real_T
        (BaseEngineController_LS_112_B.s436_motohawk_prelookup, (real_T *)
         ((ETC_VoltageCompTbl_DataStore())), 9);
      (ETC_VoltageComp_DataStore()) = rtb_motohawk_interpolation_1d_j;
    }

    rtb_Switch_cz = rtb_DataTypeConversion1_j * rtb_motohawk_interpolation_1d_j
      + (ETC_Offset_DataStore());
  }

  /* End of Switch: '<S794>/Switch' */

  /* Saturate: '<S794>/Saturation' */
  BaseEngineController_LS_112_B.s794_ETC = rtb_Switch_cz >= 100.0 ? 100.0 :
    rtb_Switch_cz <= -100.0 ? -100.0 : rtb_Switch_cz;

  /* Abs: '<S794>/Abs' */
  rtb_Switch_cz = fabs(BaseEngineController_LS_112_B.s794_ETC);

  /* RelationalOperator: '<S794>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S794>/motohawk_calibration3'
   */
  rtb_LogicalOperator1_ou = (rtb_Switch_cz > (ETC_OC_MIN_DataStore()));

  /* S-Function (motohawk_sfun_pwm): '<S794>/motohawk_pwm1' */

  /* Get PWM drive current from feedback circuit */
  {
    extern int16_T H1p_H1m_PWMOutput_CM_CurrentMeasurement_mA_Get(void);
    BaseEngineController_LS_112_B.s794_motohawk_pwm1 =
      H1p_H1m_PWMOutput_CM_CurrentMeasurement_mA_Get();
  }

  /* Abs: '<S794>/Abs1' */
  rtb_DataTypeConversion2_f4 = (int16_T)
    (BaseEngineController_LS_112_B.s794_motohawk_pwm1 < 0 ? (int16_T)
     -BaseEngineController_LS_112_B.s794_motohawk_pwm1 :
     BaseEngineController_LS_112_B.s794_motohawk_pwm1);

  /* RelationalOperator: '<S794>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S794>/motohawk_calibration1'
   */
  BaseEngineController_LS_112_B.s794_RelationalOperator4 = (((real_T)
    rtb_DataTypeConversion2_f4 < (ETC_I_MIN_DataStore())));

  /* Switch: '<S889>/Switch' incorporates:
   *  Constant: '<S889>/Constant'
   *  Logic: '<S794>/Logical Operator4'
   *  S-Function (motohawk_sfun_data_read): '<S889>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S889>/motohawk_delta_time'
   *  Sum: '<S889>/Sum'
   */
  if (rtb_LogicalOperator6_p && rtb_LogicalOperator1_ou &&
      BaseEngineController_LS_112_B.s794_RelationalOperator4) {
    rtb_Switch_cz = rtb_motohawk_delta_time_i + ETCOpenFaultTimer_DataStore();
  } else {
    rtb_Switch_cz = 0.0;
  }

  /* End of Switch: '<S889>/Switch' */

  /* RelationalOperator: '<S794>/Relational Operator5' incorporates:
   *  Constant: '<S794>/Constant'
   */
  rtb_RelationalOperator5_i = ((rtb_Switch_cz > 5.0));

  /* S-Function (motohawk_sfun_fault_def): '<S794>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: ETC_Open_Fault */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(63, rtb_RelationalOperator5_i);
    UpdateFault(63);
  }

  /* Gain: '<S794>/Convert to integer 14-bit PWM resolution' */
  rtb_Abs_iy = 40.95 * BaseEngineController_LS_112_B.s794_ETC;

  /* DataTypeConversion: '<S794>/Data Type Conversion3' incorporates:
   *  Gain: '<S794>/Convert to integer 0.01Hz resolution'
   *  S-Function (motohawk_sfun_calibration): '<S794>/motohawk_calibration4'
   */
  u = 100.0 * (ETC_Frequency_DataStore());
  if (u < 4.294967296E+9) {
    if (u >= 0.0) {
      rtb_DataTypeConversion3_p = (uint32_T)u;
    } else {
      rtb_DataTypeConversion3_p = 0U;
    }
  } else {
    rtb_DataTypeConversion3_p = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S794>/Data Type Conversion3' */

  /* DataTypeConversion: '<S794>/Data Type Conversion4' */
  if (rtb_Abs_iy < 32768.0) {
    if (rtb_Abs_iy >= -32768.0) {
      rtb_DataTypeConversion4_a = (int16_T)rtb_Abs_iy;
    } else {
      rtb_DataTypeConversion4_a = MIN_int16_T;
    }
  } else {
    rtb_DataTypeConversion4_a = MAX_int16_T;
  }

  /* End of DataTypeConversion: '<S794>/Data Type Conversion4' */

  /* Saturate: '<S889>/Saturation' */
  rtb_Saturation_f = rtb_Switch_cz >= 16000.0 ? 16000.0 : rtb_Switch_cz <= 0.0 ?
    0.0 : rtb_Switch_cz;

  /* S-Function (motohawk_sfun_data_write): '<S889>/motohawk_data_write' */
  /* Write to Data Storage as scalar: ETCOpenFaultTimer */
  {
    ETCOpenFaultTimer_DataStore() = rtb_Saturation_f;
  }

  /* If: '<S896>/If' incorporates:
   *  Inport: '<S897>/In1'
   *  Inport: '<S898>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S896>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S896>/override_enable'
   */
  if ((IAC_P_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S896>/NewValue' incorporates:
     *  ActionPort: '<S897>/Action Port'
     */
    rtb_DataTypeConversion1_j = (IAC_P_new_DataStore());

    /* End of Outputs for SubSystem: '<S896>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S896>/OldValue' incorporates:
     *  ActionPort: '<S898>/Action Port'
     */
    rtb_DataTypeConversion1_j = BaseEngineController_LS_112_B.s92_IACP;

    /* End of Outputs for SubSystem: '<S896>/OldValue' */
  }

  /* End of If: '<S896>/If' */

  /* Product: '<S893>/Product' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S893>/motohawk_calibration'
   */
  rtb_DataTypeConversion1_j *= (IAC_PGain_DataStore());

  /* Sum: '<S893>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S893>/motohawk_calibration1'
   */
  rtb_Abs_iy = rtb_DataTypeConversion1_j + (IAC_POffset_DataStore());

  /* MinMax: '<S895>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S893>/motohawk_calibration2'
   */
  rtb_Abs_iy = (rtb_Abs_iy >= (IAC_PMinLimit_DataStore())) || rtIsNaN
    ((IAC_PMinLimit_DataStore())) ? rtb_Abs_iy : (IAC_PMinLimit_DataStore());

  /* MinMax: '<S895>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S893>/motohawk_calibration3'
   */
  BaseEngineController_LS_112_B.s895_MinMax1 = (rtb_Abs_iy <=
    (IAC_PMaxLimit_DataStore())) || rtIsNaN((IAC_PMaxLimit_DataStore())) ?
    rtb_Abs_iy : (IAC_PMaxLimit_DataStore());

  /* Gain: '<S893>/Convert to integer 14-bit PWM resolution' */
  rtb_Abs_iy = 40.95 * BaseEngineController_LS_112_B.s895_MinMax1;

  /* DataTypeConversion: '<S893>/Data Type Conversion3' */
  if (rtb_Abs_iy < 32768.0) {
    if (rtb_Abs_iy >= -32768.0) {
      rtb_DataTypeConversion3_h = (int16_T)rtb_Abs_iy;
    } else {
      rtb_DataTypeConversion3_h = MIN_int16_T;
    }
  } else {
    rtb_DataTypeConversion3_h = MAX_int16_T;
  }

  /* End of DataTypeConversion: '<S893>/Data Type Conversion3' */
  /* Gain: '<S893>/Convert to integer 0.01Hz resolution' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S893>/motohawk_calibration4'
   */
  rtb_Abs_iy = 100.0 * (IAC_PFrequency_DataStore());

  /* DataTypeConversion: '<S893>/Data Type Conversion2' */
  if (rtb_Abs_iy < 4.294967296E+9) {
    if (rtb_Abs_iy >= 0.0) {
      rtb_DataTypeConversion2_c = (uint32_T)rtb_Abs_iy;
    } else {
      rtb_DataTypeConversion2_c = 0U;
    }
  } else {
    rtb_DataTypeConversion2_c = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S893>/Data Type Conversion2' */

  /* If: '<S900>/If' incorporates:
   *  Inport: '<S901>/In1'
   *  Inport: '<S902>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S900>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S900>/override_enable'
   */
  if ((IAC_S_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S900>/NewValue' incorporates:
     *  ActionPort: '<S901>/Action Port'
     */
    rtb_DataTypeConversion1_j = (IAC_S_new_DataStore());

    /* End of Outputs for SubSystem: '<S900>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S900>/OldValue' incorporates:
     *  ActionPort: '<S902>/Action Port'
     */
    rtb_DataTypeConversion1_j = BaseEngineController_LS_112_B.s92_IACS;

    /* End of Outputs for SubSystem: '<S900>/OldValue' */
  }

  /* End of If: '<S900>/If' */

  /* Product: '<S894>/Product' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S894>/motohawk_calibration'
   */
  rtb_DataTypeConversion1_j *= (IAC_SGain_DataStore());

  /* Sum: '<S894>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S894>/motohawk_calibration1'
   */
  rtb_Abs_iy = rtb_DataTypeConversion1_j + (IAC_SOffset_DataStore());

  /* MinMax: '<S899>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S894>/motohawk_calibration2'
   */
  rtb_Abs_iy = (rtb_Abs_iy >= (IAC_SMinLimit_DataStore())) || rtIsNaN
    ((IAC_SMinLimit_DataStore())) ? rtb_Abs_iy : (IAC_SMinLimit_DataStore());

  /* MinMax: '<S899>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S894>/motohawk_calibration3'
   */
  BaseEngineController_LS_112_B.s899_MinMax1 = (rtb_Abs_iy <=
    (IAC_SMaxLimit_DataStore())) || rtIsNaN((IAC_SMaxLimit_DataStore())) ?
    rtb_Abs_iy : (IAC_SMaxLimit_DataStore());

  /* Gain: '<S894>/Convert to integer 14-bit PWM resolution' */
  rtb_Abs_iy = 40.95 * BaseEngineController_LS_112_B.s899_MinMax1;

  /* DataTypeConversion: '<S894>/Data Type Conversion3' */
  if (rtb_Abs_iy < 32768.0) {
    if (rtb_Abs_iy >= -32768.0) {
      rtb_DataTypeConversion3_m = (int16_T)rtb_Abs_iy;
    } else {
      rtb_DataTypeConversion3_m = MIN_int16_T;
    }
  } else {
    rtb_DataTypeConversion3_m = MAX_int16_T;
  }

  /* End of DataTypeConversion: '<S894>/Data Type Conversion3' */
  /* Gain: '<S894>/Convert to integer 0.01Hz resolution' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S894>/motohawk_calibration4'
   */
  rtb_Abs_iy = 100.0 * (IAC_SFrequency_DataStore());

  /* DataTypeConversion: '<S894>/Data Type Conversion2' */
  if (rtb_Abs_iy < 4.294967296E+9) {
    if (rtb_Abs_iy >= 0.0) {
      rtb_DataTypeConversion2_n = (uint32_T)rtb_Abs_iy;
    } else {
      rtb_DataTypeConversion2_n = 0U;
    }
  } else {
    rtb_DataTypeConversion2_n = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S894>/Data Type Conversion2' */
  /* If: '<S907>/If' incorporates:
   *  Inport: '<S917>/In1'
   *  Inport: '<S918>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S907>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S907>/override_enable'
   */
  if ((SOI_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S907>/NewValue' incorporates:
     *  ActionPort: '<S917>/Action Port'
     */
    rtb_DataTypeConversion1_j = (SOI_new_DataStore());

    /* End of Outputs for SubSystem: '<S907>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S907>/OldValue' incorporates:
     *  ActionPort: '<S918>/Action Port'
     */
    rtb_DataTypeConversion1_j = BaseEngineController_LS_112_B.s92_SOI;

    /* End of Outputs for SubSystem: '<S907>/OldValue' */
  }

  /* End of If: '<S907>/If' */

  /* Gain: '<S796>/Gain2' */
  rtb_Abs_iy = 16.0 * rtb_DataTypeConversion1_j;

  /* DataTypeConversion: '<S796>/Data Type Conversion2' */
  if (rtb_Abs_iy < 32768.0) {
    if (rtb_Abs_iy >= -32768.0) {
      rtb_DataTypeConversion2_f4 = (int16_T)rtb_Abs_iy;
    } else {
      rtb_DataTypeConversion2_f4 = MIN_int16_T;
    }
  } else {
    rtb_DataTypeConversion2_f4 = MAX_int16_T;
  }

  /* End of DataTypeConversion: '<S796>/Data Type Conversion2' */
  /* Product: '<S21>/Product2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S21>/Injector Gain [ms//mg]'
   */
  for (i = 0; i < 8; i++) {
    rtb_Product1_fy[i] = BaseEngineController_LS_112_B.s92_FPC[i] *
      (InjGain_DataStore());
  }

  /* End of Product: '<S21>/Product2' */
  /* Sum: '<S21>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S21>/Injector Offset [ms]'
   */
  for (i = 0; i < 8; i++) {
    rtb_Product1_fy[i] += (InjOffset_DataStore());
  }

  /* End of Sum: '<S21>/Sum' */

  /* Fcn: '<S64>/const ref to atm' */
  BaseEngineController_LS_112_B.s64_constreftoatm =
    (BaseEngineController_LS_112_B.s590_Merge +
     BaseEngineController_LS_112_B.s405_Sum) -
    BaseEngineController_LS_112_B.s598_Merge;

  /* S-Function Block: <S64>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (InjDeltaPress09In_DataStore()) =
      BaseEngineController_LS_112_B.s64_constreftoatm;
    (InjDeltaPress09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_112_B.s64_constreftoatm,
       (InjDeltaPress09IdxArr_DataStore()), 9, (InjDeltaPress09Idx_DataStore()));
    rtb_motohawk_prelookup1_hp = (InjDeltaPress09Idx_DataStore());
  }

  /* S-Function Block: <S21>/motohawk_interpolation_1d3 */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_motohawk_interpolation_1d3_b = TableInterpolation1D_real_T
      (rtb_motohawk_prelookup1_hp, (real_T *) ((InjdPCompTbl_DataStore())), 9);
    (InjdPComp_DataStore()) = rtb_motohawk_interpolation_1d3_b;
  }

  /* Product: '<S21>/Product3' incorporates:
   *  S-Function (motohawk_sfun_interpolation_1d): '<S21>/motohawk_interpolation_1d3'
   *  S-Function (motohawk_sfun_prelookup): '<S64>/motohawk_prelookup1'
   */
  for (i = 0; i < 8; i++) {
    rtb_Product1_fy[i] *= rtb_motohawk_interpolation_1d3_b;
  }

  /* End of Product: '<S21>/Product3' */

  /* Saturate: '<S21>/Saturation' */
  u = BaseEngineController_LS_112_B.s555_Sum1 >= 0.01 ?
    BaseEngineController_LS_112_B.s555_Sum1 : 0.01;

  /* S-Function Block: <S21>/motohawk_interpolation_1d4 */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_motohawk_interpolation_1d4_f = TableInterpolation1D_real_T
      (rtb_motohawk_prelookup1_hp, (real_T *) ((InjTurnOffTbl_DataStore())), 9);
    (InjTurnOff_DataStore()) = rtb_motohawk_interpolation_1d4_f;
  }

  /* S-Function Block: <S21>/motohawk_interpolation_1d1 */
  {
    extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
      uint32_T sz);
    rtb_motohawk_interpolation_1d1_g = TableInterpolation1D_real_T
      (BaseEngineController_LS_112_B.s436_motohawk_prelookup, (real_T *)
       ((InjTurnOnTbl_DataStore())), 9);
    (InjTurnOn_DataStore()) = rtb_motohawk_interpolation_1d1_g;
  }

  /* Sum: '<S21>/Sum2' incorporates:
   *  S-Function (motohawk_sfun_interpolation_1d): '<S21>/motohawk_interpolation_1d1'
   *  S-Function (motohawk_sfun_interpolation_1d): '<S21>/motohawk_interpolation_1d4'
   *  S-Function (motohawk_sfun_prelookup): '<S64>/motohawk_prelookup1'
   */
  BaseEngineController_LS_112_B.s21_Sum2 = rtb_motohawk_interpolation_1d1_g -
    rtb_motohawk_interpolation_1d4_f;

  /* Sum: '<S21>/Sum1' incorporates:
   *  Constant: '<S21>/Constant'
   *  Product: '<S21>/Divide'
   *  Saturate: '<S21>/Saturation'
   */
  BaseEngineController_LS_112_B.s21_Sum1 = 120000.0 / u -
    BaseEngineController_LS_112_B.s21_Sum2;

  /* MinMax: '<S21>/MinMax' */
  for (i = 0; i < 8; i++) {
    BaseEngineController_LS_112_B.s21_MinMax[i] = (rtb_Product1_fy[i] <=
      BaseEngineController_LS_112_B.s21_Sum1) || rtIsNaN
      (BaseEngineController_LS_112_B.s21_Sum1) ? rtb_Product1_fy[i] :
      BaseEngineController_LS_112_B.s21_Sum1;
  }

  /* End of MinMax: '<S21>/MinMax' */
  /* If: '<S908>/If' incorporates:
   *  Inport: '<S919>/In1'
   *  Inport: '<S920>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S908>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S908>/override_enable'
   */
  if ((Mech_PW_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S908>/NewValue' incorporates:
     *  ActionPort: '<S919>/Action Port'
     */
    for (i = 0; i < 8; i++) {
      rtb_Product1_fy[i] = (Mech_PW_new_DataStore())[i];
    }

    /* End of Outputs for SubSystem: '<S908>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S908>/OldValue' incorporates:
     *  ActionPort: '<S920>/Action Port'
     */
    memcpy((void *)&rtb_Product1_fy[0], (void *)
           (&BaseEngineController_LS_112_B.s21_MinMax[0]), sizeof(real_T) << 3U);

    /* End of Outputs for SubSystem: '<S908>/OldValue' */
  }

  /* End of If: '<S908>/If' */

  /* DataTypeConversion: '<S796>/Data Type Conversion3' incorporates:
   *  Gain: '<S796>/Gain3'
   */
  for (i = 0; i < 8; i++) {
    u = 1000.0 * rtb_Product1_fy[i];
    if (u < 4.294967296E+9) {
      if (u >= 0.0) {
        rtb_Switch_e0 = (uint32_T)u;
      } else {
        rtb_Switch_e0 = 0U;
      }
    } else {
      rtb_Switch_e0 = MAX_uint32_T;
    }

    rtb_InjectorSequence_o2[i] = rtb_Switch_e0;
  }

  /* End of DataTypeConversion: '<S796>/Data Type Conversion3' */
  /* Gain: '<S796>/Gain5' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S796>/motohawk_calibration9'
   */
  rtb_Abs_iy = 1000.0 * (InjectorMaxDuration_DataStore());

  /* DataTypeConversion: '<S796>/Data Type Conversion6' */
  if (rtb_Abs_iy < 4.294967296E+9) {
    if (rtb_Abs_iy >= 0.0) {
      rtb_DataTypeConversion6 = (uint32_T)rtb_Abs_iy;
    } else {
      rtb_DataTypeConversion6 = 0U;
    }
  } else {
    rtb_DataTypeConversion6 = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S796>/Data Type Conversion6' */
  /* If: '<S905>/If' incorporates:
   *  Inport: '<S913>/In1'
   *  Inport: '<S914>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S905>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S905>/override_enable'
   */
  if ((Elec_PW_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S905>/NewValue' incorporates:
     *  ActionPort: '<S913>/Action Port'
     */
    rtb_DataTypeConversion1_j = (Elec_PW_new_DataStore());

    /* End of Outputs for SubSystem: '<S905>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S905>/OldValue' incorporates:
     *  ActionPort: '<S914>/Action Port'
     */
    rtb_DataTypeConversion1_j = BaseEngineController_LS_112_B.s21_Sum2;

    /* End of Outputs for SubSystem: '<S905>/OldValue' */
  }

  /* End of If: '<S905>/If' */

  /* Gain: '<S796>/Gain1' */
  rtb_Abs_iy = 1000.0 * rtb_DataTypeConversion1_j;

  /* DataTypeConversion: '<S796>/Data Type Conversion1' */
  if (rtb_Abs_iy < 4.294967296E+9) {
    if (rtb_Abs_iy >= 0.0) {
      rtb_DataTypeConversion1_kv = (uint32_T)rtb_Abs_iy;
    } else {
      rtb_DataTypeConversion1_kv = 0U;
    }
  } else {
    rtb_DataTypeConversion1_kv = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S796>/Data Type Conversion1' */
  /* If: '<S906>/If' incorporates:
   *  Inport: '<S915>/In1'
   *  Inport: '<S916>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S906>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S906>/override_enable'
   */
  if ((MakeUp_EOI_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S906>/NewValue' incorporates:
     *  ActionPort: '<S915>/Action Port'
     */
    rtb_DataTypeConversion1_j = (MakeUp_EOI_new_DataStore());

    /* End of Outputs for SubSystem: '<S906>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S906>/OldValue' incorporates:
     *  ActionPort: '<S916>/Action Port'
     */
    rtb_DataTypeConversion1_j = BaseEngineController_LS_112_B.s92_MakeUpEOI;

    /* End of Outputs for SubSystem: '<S906>/OldValue' */
  }

  /* End of If: '<S906>/If' */

  /* Gain: '<S796>/Gain6' */
  rtb_Abs_iy = 16.0 * rtb_DataTypeConversion1_j;

  /* DataTypeConversion: '<S796>/Data Type Conversion7' */
  if (rtb_Abs_iy < 32768.0) {
    if (rtb_Abs_iy >= -32768.0) {
      rtb_DataTypeConversion7 = (int16_T)rtb_Abs_iy;
    } else {
      rtb_DataTypeConversion7 = MIN_int16_T;
    }
  } else {
    rtb_DataTypeConversion7 = MAX_int16_T;
  }

  /* End of DataTypeConversion: '<S796>/Data Type Conversion7' */
  /* Gain: '<S796>/Gain7' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S796>/motohawk_calibration6'
   */
  rtb_Abs_iy = 1000.0 * (MinMakeUpPW_DataStore());

  /* DataTypeConversion: '<S796>/Data Type Conversion8' */
  if (rtb_Abs_iy < 4.294967296E+9) {
    if (rtb_Abs_iy >= 0.0) {
      rtb_Sum_bz = (uint32_T)rtb_Abs_iy;
    } else {
      rtb_Sum_bz = 0U;
    }
  } else {
    rtb_Sum_bz = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S796>/Data Type Conversion8' */
  /* Gain: '<S796>/Gain8' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S796>/motohawk_calibration1'
   */
  rtb_Abs_iy = 1000.0 * (InjectiorMinDuration_DataStore());

  /* DataTypeConversion: '<S796>/Data Type Conversion9' */
  if (rtb_Abs_iy < 4.294967296E+9) {
    if (rtb_Abs_iy >= 0.0) {
      rtb_UnitDelay_ad = (uint32_T)rtb_Abs_iy;
    } else {
      rtb_UnitDelay_ad = 0U;
    }
  } else {
    rtb_UnitDelay_ad = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S796>/Data Type Conversion9' */
  /* Outputs for Atomic SubSystem: '<S796>/Injector Enable Manager' */

  /* S-Function Block: <S912>/motohawk_delta_time */
  rtb_motohawk_delta_time_bm = 0.005;

  /* Switch: '<S912>/Switch' incorporates:
   *  Constant: '<S912>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S912>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S912>/motohawk_delta_time'
   *  S-Function (motohawk_sfun_fault_action): '<S904>/motohawk_fault_action'
   *  Sum: '<S912>/Sum'
   */
  if (GetFaultActionStatus(2)) {
    rtb_DataTypeConversion1_j = rtb_motohawk_delta_time_bm +
      DelayedEngineShutdownTimer_DataStore();
  } else {
    rtb_DataTypeConversion1_j = 0.0;
  }

  /* End of Switch: '<S912>/Switch' */
  /* RelationalOperator: '<S904>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S904>/motohawk_calibration1'
   */
  rtb_LogicalOperator_k = (rtb_DataTypeConversion1_j >
    (EngineShutdownDelayTime_DataStore()));

  /* S-Function (motohawk_sfun_data_write): '<S904>/motohawk_data_write' */
  /* Write to Data Storage as scalar: DelayedEngineShutdownAction */
  {
    DelayedEngineShutdownAction_DataStore() = rtb_LogicalOperator_k;
  }

  /* RelationalOperator: '<S904>/Relational Operator1' incorporates:
   *  Gain: '<S904>/Gain'
   *  S-Function (motohawk_sfun_calibration): '<S904>/motohawk_calibration1'
   */
  rtb_RelationalOperator1_at = ((rtb_DataTypeConversion1_j > 0.5 *
    (EngineShutdownDelayTime_DataStore())));

  /* S-Function (motohawk_sfun_data_write): '<S904>/motohawk_data_write1' */
  /* Write to Data Storage as scalar: DelayedEngineShutdownWarning */
  {
    DelayedEngineShutdownWarning_DataStore() = rtb_RelationalOperator1_at;
  }

  /* RelationalOperator: '<S904>/Relational Operator2' incorporates:
   *  Constant: '<S904>/Constant'
   */
  rtb_RelationalOperator2_d = ((rtb_DataTypeConversion1_j > 0.0));

  /* S-Function (motohawk_sfun_data_write): '<S904>/motohawk_data_write2' */
  /* Write to Data Storage as scalar: EngineShutdownTimerState */
  {
    EngineShutdownTimerState_DataStore() = rtb_RelationalOperator2_d;
  }

  /* Logic: '<S904>/Logical Operator' */
  rtb_LogicalOperator_k = !rtb_LogicalOperator_k;

  /* Logic: '<S904>/Logical Operator2' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S904>/motohawk_data_read'
   */
  rtb_LogicalOperator6_p = !EngineShutdownAction_DataStore();

  /* S-Function (motohawk_sfun_data_read): '<S904>/motohawk_data_read1' */
  rtb_motohawk_data_read1_nn = ECUP_Enabled_DataStore();

  /* Logic: '<S904>/Logical Operator4' incorporates:
   *  Constant: '<S911>/Constant'
   *  RelationalOperator: '<S911>/RelOp'
   *  S-Function (motohawk_sfun_data_read): '<S904>/motohawk_data_read2'
   */
  rtb_LogicalOperator1_ou = !(((uint8_T)EngineState_DataStore()) == 1);

  /* Logic: '<S904>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S904>/motohawk_calibration10'
   *  S-Function (motohawk_sfun_calibration): '<S904>/motohawk_calibration11'
   *  S-Function (motohawk_sfun_calibration): '<S904>/motohawk_calibration12'
   *  S-Function (motohawk_sfun_calibration): '<S904>/motohawk_calibration2'
   *  S-Function (motohawk_sfun_calibration): '<S904>/motohawk_calibration3'
   *  S-Function (motohawk_sfun_calibration): '<S904>/motohawk_calibration4'
   *  S-Function (motohawk_sfun_calibration): '<S904>/motohawk_calibration7'
   *  S-Function (motohawk_sfun_calibration): '<S904>/motohawk_calibration8'
   */
  rtb_LogicalOperator_ow[0] = (rtb_LogicalOperator_k && rtb_LogicalOperator6_p &&
    rtb_motohawk_data_read1_nn && rtb_LogicalOperator1_ou &&
    (Injector1Enable_DataStore()));
  rtb_LogicalOperator_ow[1] = (rtb_LogicalOperator_k && rtb_LogicalOperator6_p &&
    rtb_motohawk_data_read1_nn && rtb_LogicalOperator1_ou &&
    (Injector2Enable_DataStore()));
  rtb_LogicalOperator_ow[2] = (rtb_LogicalOperator_k && rtb_LogicalOperator6_p &&
    rtb_motohawk_data_read1_nn && rtb_LogicalOperator1_ou &&
    (Injector3Enable_DataStore()));
  rtb_LogicalOperator_ow[3] = (rtb_LogicalOperator_k && rtb_LogicalOperator6_p &&
    rtb_motohawk_data_read1_nn && rtb_LogicalOperator1_ou &&
    (Injector4Enable_DataStore()));
  rtb_LogicalOperator_ow[4] = (rtb_LogicalOperator_k && rtb_LogicalOperator6_p &&
    rtb_motohawk_data_read1_nn && rtb_LogicalOperator1_ou &&
    (Injector5Enable_DataStore()));
  rtb_LogicalOperator_ow[5] = (rtb_LogicalOperator_k && rtb_LogicalOperator6_p &&
    rtb_motohawk_data_read1_nn && rtb_LogicalOperator1_ou &&
    (Injector6Enable_DataStore()));
  rtb_LogicalOperator_ow[6] = (rtb_LogicalOperator_k && rtb_LogicalOperator6_p &&
    rtb_motohawk_data_read1_nn && rtb_LogicalOperator1_ou &&
    (Injector7Enable_DataStore()));
  rtb_LogicalOperator_ow[7] = (rtb_LogicalOperator_k && rtb_LogicalOperator6_p &&
    rtb_motohawk_data_read1_nn && rtb_LogicalOperator1_ou &&
    (Injector8Enable_DataStore()));

  /* Saturate: '<S912>/Saturation' */
  rtb_Saturation_d = rtb_DataTypeConversion1_j >= 16000.0 ? 16000.0 :
    rtb_DataTypeConversion1_j <= 0.0 ? 0.0 : rtb_DataTypeConversion1_j;

  /* S-Function (motohawk_sfun_data_write): '<S912>/motohawk_data_write' */
  /* Write to Data Storage as scalar: DelayedEngineShutdownTimer */
  {
    DelayedEngineShutdownTimer_DataStore() = rtb_Saturation_d;
  }

  /* End of Outputs for SubSystem: '<S796>/Injector Enable Manager' */
  /* Logic: '<S796>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_data_read): '<S796>/motohawk_data_read'
   */
  rtb_LogicalOperator6_p = !ESTOP_DataStore();

  /* If: '<S910>/If' incorporates:
   *  Inport: '<S923>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S910>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S910>/override_enable'
   */
  if ((ESTOP_FuelInj_Ovr_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S910>/NewValue' incorporates:
     *  ActionPort: '<S923>/Action Port'
     */
    rtb_LogicalOperator6_p = (ESTOP_FuelInj_Ovr_new_DataStore());

    /* End of Outputs for SubSystem: '<S910>/NewValue' */
  } else {
  }

  /* End of If: '<S910>/If' */

  /* Logic: '<S796>/Logical Operator' */
  for (i = 0; i < 8; i++) {
    rtb_LogicalOperator_ow[i] = (rtb_LogicalOperator6_p && rtb_AND1[i] &&
      rtb_LogicalOperator_ow[i]);
  }

  /* End of Logic: '<S796>/Logical Operator' */
  /* If: '<S909>/If' incorporates:
   *  Inport: '<S921>/In1'
   *  Inport: '<S922>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S909>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S909>/override_enable'
   */
  if ((InjEnable_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S909>/NewValue' incorporates:
     *  ActionPort: '<S921>/Action Port'
     */
    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_112_B.s909_Merge[i] = (InjEnable_new_DataStore())
        [i];
    }

    /* End of Outputs for SubSystem: '<S909>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S909>/OldValue' incorporates:
     *  ActionPort: '<S922>/Action Port'
     */
    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_112_B.s909_Merge[i] = rtb_LogicalOperator_ow[i];
    }

    /* End of Outputs for SubSystem: '<S909>/OldValue' */
  }

  /* End of If: '<S909>/If' */

  /* S-Function (motohawk_sfun_injector_sequence): '<S796>/Injector Sequence' */
  {
    extern NativeBool CNK_Encoder_PulseScheduling_IsPossible(void);
    NativeBool bIsPulseSchedulingPossible =
      CNK_Encoder_PulseScheduling_IsPossible();

    {
      typedef void (*PSPOutput_TransientBehavior_SetPtr)(NativeVar_U
        statePrimary, int16_T startAnglePrimary, uint32_T durationPrimary,
        NativeVar_U stateTransient, int16_T stopAngleTransient, uint32_T
        durationTransient);
      extern void INJ1_PSPOutput_TransientBehavior_Set(NativeVar_U statePrimary,
        int16_T startAnglePrimary, uint32_T durationPrimary, NativeVar_U
        stateTransient, int16_T stopAngleTransient, uint32_T durationTransient);
      extern void INJ2_PSPOutput_TransientBehavior_Set(NativeVar_U statePrimary,
        int16_T startAnglePrimary, uint32_T durationPrimary, NativeVar_U
        stateTransient, int16_T stopAngleTransient, uint32_T durationTransient);
      extern void INJ3_PSPOutput_TransientBehavior_Set(NativeVar_U statePrimary,
        int16_T startAnglePrimary, uint32_T durationPrimary, NativeVar_U
        stateTransient, int16_T stopAngleTransient, uint32_T durationTransient);
      extern void INJ4_PSPOutput_TransientBehavior_Set(NativeVar_U statePrimary,
        int16_T startAnglePrimary, uint32_T durationPrimary, NativeVar_U
        stateTransient, int16_T stopAngleTransient, uint32_T durationTransient);
      extern void INJ5_PSPOutput_TransientBehavior_Set(NativeVar_U statePrimary,
        int16_T startAnglePrimary, uint32_T durationPrimary, NativeVar_U
        stateTransient, int16_T stopAngleTransient, uint32_T durationTransient);
      extern void INJ6_PSPOutput_TransientBehavior_Set(NativeVar_U statePrimary,
        int16_T startAnglePrimary, uint32_T durationPrimary, NativeVar_U
        stateTransient, int16_T stopAngleTransient, uint32_T durationTransient);
      extern void INJ7_PSPOutput_TransientBehavior_Set(NativeVar_U statePrimary,
        int16_T startAnglePrimary, uint32_T durationPrimary, NativeVar_U
        stateTransient, int16_T stopAngleTransient, uint32_T durationTransient);
      extern void INJ8_PSPOutput_TransientBehavior_Set(NativeVar_U statePrimary,
        int16_T startAnglePrimary, uint32_T durationPrimary, NativeVar_U
        stateTransient, int16_T stopAngleTransient, uint32_T durationTransient);
      static const PSPOutput_TransientBehavior_SetPtr
        s_pfnTransientBehavior_Arr[8] = {
        INJ1_PSPOutput_TransientBehavior_Set,
        INJ2_PSPOutput_TransientBehavior_Set,
        INJ3_PSPOutput_TransientBehavior_Set,
        INJ4_PSPOutput_TransientBehavior_Set,
        INJ5_PSPOutput_TransientBehavior_Set,
        INJ6_PSPOutput_TransientBehavior_Set,
        INJ7_PSPOutput_TransientBehavior_Set,
        INJ8_PSPOutput_TransientBehavior_Set,
      };

      NativeVar_U cyl;
      for (cyl = 0; cyl < (EncoderNumCylinders_DataStore()); cyl++) {
        NativeVar_S soi;               /* Use a native so that we save executing sign extension instructions */
        uint32_T u32DurationElec;
        uint32_T u32DurationMakeupElec;
        NativeVar_U statePrimary;
        NativeVar_S eoi;
        NativeVar_U stateTransient;
        if (bIsPulseSchedulingPossible) {
          if ((BaseEngineController_LS_112_B.s909_Merge)[cyl]) {
            statePrimary = 1;
            stateTransient = 1;
          } else {
            statePrimary = 2;
            stateTransient = 0;
          }
        } else {
          statePrimary = 0;
          stateTransient = 0;
        }

        soi = rtb_DataTypeConversion2_f4 - (EncoderTDCAngles_DataStore())[cyl];
        u32DurationElec = 0;
        if ((rtb_InjectorSequence_o2)[cyl] != 0)
          u32DurationElec = (rtb_InjectorSequence_o2)[cyl] +
            rtb_DataTypeConversion1_kv;
        eoi = rtb_DataTypeConversion7;
        eoi = eoi - (EncoderTDCAngles_DataStore())[cyl];

        /* Assume we will not be able to schedule transient by setting u32DurationMakeupElec = 0 */
        u32DurationMakeupElec = 0;

        /* Make-Up Pulse */
        if (stateTransient) {
          /* No point performing further checks if the transient pulse is disabled */
          boolean_T bPrimaryComplete = (InjTransient_PrimaryComplete_DataStore())
            [cyl];
          if (bPrimaryComplete) {
            uint32_T u32DurationCompletedElec;/* Electrical time of pulse completed */
            u32DurationCompletedElec =
              (InjTransient_DeliveredDuration_uS_DataStore())[cyl];
            if (u32DurationElec > u32DurationCompletedElec) {
              /* Attempt to schedule a 2nd pulse if the primary pulse has finished, but duration has not been satisfied. */
              int32_T s32AngularDifference;/* Difference between two angles */
              uint16_T u16CurrentAngle = CNK_Encoder_Angle_Get();
              NativeVar_S sNumDegreeInCycle = CNK_Encoder_DegreesInCycle_Get();

              /* If the current angle is not between the primary SOI and EOI then there */
              /* is no point trying to schedule a transient, as it can lead to a transient */
              /* pulse being enabled during the next primary and getting scheduled if not */
              /* Intercepted by a timing update */

              /* Get angular spacing between soi and eoi, if Zero assume 1 cycle of injection */
              /* As we are in HARDDURATION mode. CNK_Encoder_IsAngleBetween returns false     */
              /* When soi = eoi, so this additional test is necessary */
              s32AngularDifference = soi - eoi;

              /* Ensure AngularDifference is always >= 0 and < sNumDegreeInCycle */
              while (s32AngularDifference < 0) {
                s32AngularDifference = s32AngularDifference + sNumDegreeInCycle;
              }

              while (s32AngularDifference >= sNumDegreeInCycle) {
                s32AngularDifference = s32AngularDifference - sNumDegreeInCycle;
              }

              if ((s32AngularDifference == 0) || CNK_Encoder_IsAngleBetween(soi,
                   eoi, u16CurrentAngle) == TRUE) {
                uint32_T u32DurationToEOIElec;/* Duration from current position to EOI */
                uint32_T u32DurationMakeupMech;/* Mechanical makeup duration */
                NativeVar_U uInstantRPM = CNK_Encoder_InstantRPM_Get();

                /* Get angular spacing between u16CurrentAngle and end of injection */
                s32AngularDifference = u16CurrentAngle - eoi;

                /* Ensure AngularDifference is always >= 0 and < sNumDegreeInCycle */
                while (s32AngularDifference < 0) {
                  s32AngularDifference = s32AngularDifference +
                    sNumDegreeInCycle;
                }

                while (s32AngularDifference >= sNumDegreeInCycle) {
                  s32AngularDifference = s32AngularDifference -
                    sNumDegreeInCycle;
                }

                /* Get duration between u16CurrentAngle and eoi */
                if (uInstantRPM != 0) {
                  /* AngleAsADuration = (Angle * 60,000,000)/(RPM x 360x16)
                     AngleAsADuration = (Angle * 500,000)/(RPM x 3x16)
                     AngleAsADuration = (Angle * 31250)/(RPM x 3) */
                  u32DurationToEOIElec = (uint32_T)s32AngularDifference * 31250;
                  u32DurationToEOIElec = u32DurationToEOIElec / (uInstantRPM * 3);

                  /* Note DurationToEOIElec us sunject to speed variation.  If the encoder has accelerated,
                     DurationToEOIElec will be short, and could result in not scheduling transient when technically possible.
                     Upon deceleration MaxDuration will be longer, and results in scheduling a transient
                     when it is not possible.  This small overlap is not an issue, as scheduling code will only
                     schedule transient when primary is complete */
                } else {
                  u32DurationToEOIElec = 0xFFFFFFFF;
                }

                /* Calculate how much of the pulse is left */
                /* Guaranteed positive as u32DurationElec > u32DurationCompletedElec , given previous test */
                /* u32DurationElec and u32DurationCompletedElec are electrical durations, therefore */
                /* u32DurationMakeupMech is the desired remaining mechanical duration */
                /* It is assumed that u32DurationElec and u32DurationCompletedElec include the same mechanical offset */
                u32DurationMakeupMech = u32DurationElec -
                  u32DurationCompletedElec;

                /* Only schedule the pulse if it meets a minimum criteria */
                /* 1.- Make up duration more than the minimum */
                /* 2.- The duration remaining is more than the mechanical to electrical offset + min duration */
                if ((u32DurationMakeupMech >= (rtb_Sum_bz)) &&
                    (u32DurationToEOIElec >= (rtb_Sum_bz) +
                     (rtb_DataTypeConversion1_kv))) {
                  /* Going to schedule it - account for electrical delay of the injector */
                  /* We know we have the mechanical time to turn the injector on as checked previously */
                  /* Write u32DurationMakeupElec */
                  u32DurationMakeupElec = u32DurationMakeupMech +
                    (rtb_DataTypeConversion1_kv);

                  /* Clip the makeup pulse, to the remaining time to end of injection */
                  if (u32DurationMakeupElec > u32DurationToEOIElec) {
                    /* Clip it to the remaining time left, u32TimeToEOI guaranteed to be >= mech elec offset */
                    u32DurationMakeupElec = u32DurationToEOIElec;
                  }
                }
              } else {
                /* If we have gone past the EOI, then flag Primary as not complete, otherwise */
                /* if there has been no transient between two primaries, PrimaryComplete remains */
                /* true and a transient can be scheduled based on an old u32DurationCompletedElec */
                (InjTransient_PrimaryComplete_DataStore())[cyl] = FALSE;
              }
            }
          }
        }

        /* Apply the pulse data */
        s_pfnTransientBehavior_Arr[cyl](statePrimary, soi, u32DurationElec,
          stateTransient, eoi, u32DurationMakeupElec);
      }
    }

    /* Injector Sequence */
  }

  /* RelationalOperator: '<S903>/==' incorporates:
   *  Constant: '<S903>/Zero'
   */
  for (i = 0; i < 8; i++) {
    rtb_LogicalOperator_ow[i] =
      (BaseEngineController_LS_112_B.s796_InjectorSequence_o1[i] == 0);
  }

  /* End of RelationalOperator: '<S903>/==' */
  /* S-Function Block: <S903>/motohawk_encoder_average_rpm */
  {
    rtb_motohawk_encoder_average_rpm = CNK_Encoder_AverageRPM_Get();
  }

  /* RelationalOperator: '<S903>/<1' incorporates:
   *  Constant: '<S903>/Zero1'
   *  S-Function (motohawk_sfun_encoder_average_rpm): '<S903>/motohawk_encoder_average_rpm'
   */
  rtb_LogicalOperator6_p = (rtb_motohawk_encoder_average_rpm > 100);

  /* Logic: '<S903>/AND1' */
  for (i = 0; i < 8; i++) {
    rtb_AND1[i] = (rtb_LogicalOperator_ow[i] && rtb_LogicalOperator6_p &&
                   BaseEngineController_LS_112_B.s909_Merge[i]);
  }

  /* End of Logic: '<S903>/AND1' */

  /* S-Function (motohawk_sfun_fault_def): '<S903>/motohawk_fault_def' */

  /* Set Fault Suspected Status: Inj1Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(86, rtb_AND1[0]);
    UpdateFault(86);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S903>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: Inj2Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(87, rtb_AND1[1]);
    UpdateFault(87);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S903>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: Inj3Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(88, rtb_AND1[2]);
    UpdateFault(88);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S903>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: Inj4Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(89, rtb_AND1[3]);
    UpdateFault(89);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S903>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: Inj5Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(90, rtb_AND1[4]);
    UpdateFault(90);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S903>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: Inj6Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(91, rtb_AND1[5]);
    UpdateFault(91);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S903>/motohawk_fault_def6' */

  /* Set Fault Suspected Status: Inj7Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(92, rtb_AND1[6]);
    UpdateFault(92);
  }

  /* S-Function (motohawk_sfun_fault_def): '<S903>/motohawk_fault_def7' */

  /* Set Fault Suspected Status: Inj8Open */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(93, rtb_AND1[7]);
    UpdateFault(93);
  }

  /* Logic: '<S797>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_fault_action): '<S797>/motohawk_fault_action'
   */
  rtb_RelationalOperator5_h = !GetFaultActionStatus(8);

  /* Product: '<S797>/Product' */
  rtb_DataTypeConversion1_j = BaseEngineController_LS_112_B.s92_WASTEGATE *
    (real_T)rtb_RelationalOperator5_h;

  /* If: '<S927>/If' incorporates:
   *  Inport: '<S928>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S927>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S927>/override_enable'
   */
  if ((WASTEGATE_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S927>/NewValue' incorporates:
     *  ActionPort: '<S928>/Action Port'
     */
    rtb_DataTypeConversion1_j = (WASTEGATE_new_DataStore());

    /* End of Outputs for SubSystem: '<S927>/NewValue' */
  } else {
  }

  /* End of If: '<S927>/If' */

  /* Product: '<S925>/Product' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S925>/motohawk_calibration'
   */
  rtb_DataTypeConversion1_j *= (WASTEGATEGain_DataStore());

  /* Sum: '<S925>/Sum' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S925>/motohawk_calibration1'
   */
  rtb_Abs_iy = rtb_DataTypeConversion1_j + (WASTEGATEOffset_DataStore());

  /* MinMax: '<S926>/MinMax' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S925>/motohawk_calibration2'
   */
  rtb_Abs_iy = (rtb_Abs_iy >= (WASTEGATEMinLimit_DataStore())) || rtIsNaN
    ((WASTEGATEMinLimit_DataStore())) ? rtb_Abs_iy :
    (WASTEGATEMinLimit_DataStore());

  /* MinMax: '<S926>/MinMax1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S925>/motohawk_calibration3'
   */
  BaseEngineController_LS_112_B.s926_MinMax1 = (rtb_Abs_iy <=
    (WASTEGATEMaxLimit_DataStore())) || rtIsNaN((WASTEGATEMaxLimit_DataStore()))
    ? rtb_Abs_iy : (WASTEGATEMaxLimit_DataStore());

  /* Gain: '<S925>/Convert to integer 14-bit PWM resolution' */
  rtb_Abs_iy = 40.95 * BaseEngineController_LS_112_B.s926_MinMax1;

  /* DataTypeConversion: '<S925>/Data Type Conversion3' */
  if (rtb_Abs_iy < 32768.0) {
    if (rtb_Abs_iy >= -32768.0) {
      rtb_DataTypeConversion3_iu = (int16_T)rtb_Abs_iy;
    } else {
      rtb_DataTypeConversion3_iu = MIN_int16_T;
    }
  } else {
    rtb_DataTypeConversion3_iu = MAX_int16_T;
  }

  /* End of DataTypeConversion: '<S925>/Data Type Conversion3' */
  /* Gain: '<S925>/Convert to integer 0.01Hz resolution' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S925>/motohawk_calibration4'
   */
  rtb_Abs_iy = 100.0 * (WASTEGATEFrequency_DataStore());

  /* DataTypeConversion: '<S925>/Data Type Conversion2' */
  if (rtb_Abs_iy < 4.294967296E+9) {
    if (rtb_Abs_iy >= 0.0) {
      rtb_DataTypeConversion2_o = (uint32_T)rtb_Abs_iy;
    } else {
      rtb_DataTypeConversion2_o = 0U;
    }
  } else {
    rtb_DataTypeConversion2_o = MAX_uint32_T;
  }

  /* End of DataTypeConversion: '<S925>/Data Type Conversion2' */

  /* Gain: '<S21>/Gain' incorporates:
   *  Product: '<S21>/Product'
   */
  for (i = 0; i < 8; i++) {
    BaseEngineController_LS_112_B.s21_Gain[i] =
      BaseEngineController_LS_112_B.s21_MinMax[i] /
      BaseEngineController_LS_112_B.s21_Sum1 * 100.0;
  }

  /* End of Gain: '<S21>/Gain' */

  /* Sum: '<S22>/Sum1' incorporates:
   *  DataTypeConversion: '<S22>/Data Type Conversion2'
   *  DataTypeConversion: '<S22>/Data Type Conversion3'
   *  DataTypeConversion: '<S22>/Data Type Conversion4'
   *  Fcn: '<S22>/Fcn1'
   *  Fcn: '<S22>/Fcn2'
   */
  rtb_Abs_iy = ((real_T)rtb_motohawk_fault_action3 * 3.0 + (real_T)
                rtb_motohawk_fault_action2 * 2.0) + (real_T)
    rtb_motohawk_fault_action1_mq;

  /* DataTypeConversion: '<S22>/Data Type Conversion5' */
  if (rtb_Abs_iy < 256.0) {
    if (rtb_Abs_iy >= 0.0) {
      BaseEngineController_LS_112_B.s22_DataTypeConversion5 = (uint8_T)
        rtb_Abs_iy;
    } else {
      BaseEngineController_LS_112_B.s22_DataTypeConversion5 = 0U;
    }
  } else {
    BaseEngineController_LS_112_B.s22_DataTypeConversion5 = MAX_uint8_T;
  }

  /* End of DataTypeConversion: '<S22>/Data Type Conversion5' */

  /* UnitDelay: '<S477>/Unit Delay' */
  rtb_UnitDelay_ad = BaseEngineController_LS_112_DWork.s477_UnitDelay_DSTATE;

  /* Sum: '<S477>/Sum' incorporates:
   *  Constant: '<S477>/Constant1'
   */
  rtb_Switch_e0 = 1U + rtb_UnitDelay_ad;
  if (rtb_Switch_e0 < 1U) {
    rtb_Switch_e0 = MAX_uint32_T;
  }

  rtb_Sum_bz = rtb_Switch_e0;

  /* End of Sum: '<S477>/Sum' */

  /* RelationalOperator: '<S477>/Relational Operator' incorporates:
   *  Constant: '<S18>/Count'
   */
  rtb_RelationalOperator_e = (rtb_Sum_bz >= 5U);

  /* S-Function Block: <S475>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (IAT_KeyUp09In_DataStore()) =
      BaseEngineController_LS_112_B.s442_CollectAverage.s406_Product;
    (IAT_KeyUp09Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_112_B.s442_CollectAverage.s406_Product,
       (IAT_KeyUp09IdxArr_DataStore()), 9, (IAT_KeyUp09Idx_DataStore()));
    rtb_motohawk_prelookup_nn = (IAT_KeyUp09Idx_DataStore());
  }

  /* S-Function Block: <S400>/motohawk_prelookup1 */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (App05In_DataStore()) = rtb_APP1;
    (App05Idx_DataStore()) = TablePrelookup_real_T(rtb_APP1,
      (App05IdxArr_DataStore()), 5, (App05Idx_DataStore()));
    rtb_motohawk_prelookup_nn = (App05Idx_DataStore());
  }

  /* S-Function Block: <S435>/motohawk_prelookup */
  {
    extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
      ordarr[], uint32_T sz, uint16_T prev);
    (RPM05In_DataStore()) = BaseEngineController_LS_112_B.s555_Sum1;
    (RPM05Idx_DataStore()) = TablePrelookup_real_T
      (BaseEngineController_LS_112_B.s555_Sum1, (RPM05IdxArr_DataStore()), 5,
       (RPM05Idx_DataStore()));
    rtb_motohawk_prelookup_nn = (RPM05Idx_DataStore());
  }

  /* Sum: '<S446>/Sum3' incorporates:
   *  Constant: '<S446>/kPa Gauge to kPa absolute'
   */
  BaseEngineController_LS_112_B.s446_Sum3 =
    (BaseEngineController_LS_112_B.s590_Merge + 100.0) -
    BaseEngineController_LS_112_B.s606_Merge;

  /* DataTypeConversion: '<S485>/Data Type Conversion8' */
  if (rtIsNaN(BaseEngineController_LS_112_B.s485_ReadCANMessage2_o5) || rtIsInf
      (BaseEngineController_LS_112_B.s485_ReadCANMessage2_o5)) {
    u = 0.0;
  } else {
    u = fmod(floor(BaseEngineController_LS_112_B.s485_ReadCANMessage2_o5), 256.0);
  }

  BaseEngineController_LS_112_B.s485_GPS_SatelliteCount = (uint8_T)(u < 0.0 ?
    (uint8_T)(int32_T)(int8_T)-(int8_T)(uint8_T)-u : (uint8_T)u);

  /* End of DataTypeConversion: '<S485>/Data Type Conversion8' */

  /* S-Function (motohawk_sfun_read_canmsg): '<S485>/Read CAN Message1' */
  /* MotoHawk Read CAN Message */
  {
    uint8_T msg_data[8];
    uint32_T msg_id;
    boolean_T msg_valid;
    extern boolean_T RxSlot_9014p0001_Receive(boolean_T *extended, uint32_T *id,
      uint8_T *length, uint8_T data[]);
    msg_valid = RxSlot_9014p0001_Receive(0, &msg_id, 0, msg_data);
    if ((BaseEngineController_LS_112_B.s485_ReadCANMessage1_o1 + 1) >
        BaseEngineController_LS_112_B.s485_ReadCANMessage1_o1)
      BaseEngineController_LS_112_B.s485_ReadCANMessage1_o1++;
    if (msg_valid) {
      real32_T tmp0 = 0;
      real32_T tmp1 = 0;
      ((uint8_T *)(&tmp0))[0] = ((msg_data[0])) ;
      ((uint8_T *)(&tmp0))[1] = ((msg_data[1])) ;
      ((uint8_T *)(&tmp0))[2] = ((msg_data[2])) ;
      ((uint8_T *)(&tmp0))[3] = ((msg_data[3])) ;
      ((uint8_T *)(&tmp1))[0] = ((msg_data[4])) ;
      ((uint8_T *)(&tmp1))[1] = ((msg_data[5])) ;
      ((uint8_T *)(&tmp1))[2] = ((msg_data[6])) ;
      ((uint8_T *)(&tmp1))[3] = ((msg_data[7])) ;
      BaseEngineController_LS_112_B.s485_GPS_Latitude = (real_T) tmp0;
      BaseEngineController_LS_112_B.s485_GPS_Longitude = (real_T) tmp1;
      BaseEngineController_LS_112_B.s485_ReadCANMessage1_o1 = 0;
    }
  }

  /* DataTypeConversion: '<S485>/Data Type Conversion5' */
  if (rtIsNaN(BaseEngineController_LS_112_B.s485_ReadCANMessage_o8) || rtIsInf
      (BaseEngineController_LS_112_B.s485_ReadCANMessage_o8)) {
    u = 0.0;
  } else {
    u = fmod(floor(BaseEngineController_LS_112_B.s485_ReadCANMessage_o8), 256.0);
  }

  BaseEngineController_LS_112_B.s485_GPS_SecondsUTC = (uint8_T)(u < 0.0 ?
    (uint8_T)(int32_T)(int8_T)-(int8_T)(uint8_T)-u : (uint8_T)u);

  /* End of DataTypeConversion: '<S485>/Data Type Conversion5' */

  /* DataTypeConversion: '<S485>/Data Type Conversion4' */
  if (rtIsNaN(BaseEngineController_LS_112_B.s485_ReadCANMessage_o7) || rtIsInf
      (BaseEngineController_LS_112_B.s485_ReadCANMessage_o7)) {
    u = 0.0;
  } else {
    u = fmod(floor(BaseEngineController_LS_112_B.s485_ReadCANMessage_o7), 256.0);
  }

  BaseEngineController_LS_112_B.s485_GPS_MinutesUTC = (uint8_T)(u < 0.0 ?
    (uint8_T)(int32_T)(int8_T)-(int8_T)(uint8_T)-u : (uint8_T)u);

  /* End of DataTypeConversion: '<S485>/Data Type Conversion4' */

  /* DataTypeConversion: '<S485>/Data Type Conversion3' */
  if (rtIsNaN(BaseEngineController_LS_112_B.s485_ReadCANMessage_o6) || rtIsInf
      (BaseEngineController_LS_112_B.s485_ReadCANMessage_o6)) {
    u = 0.0;
  } else {
    u = fmod(floor(BaseEngineController_LS_112_B.s485_ReadCANMessage_o6), 256.0);
  }

  BaseEngineController_LS_112_B.s485_GPS_HoursUTC = (uint8_T)(u < 0.0 ? (uint8_T)
    (int32_T)(int8_T)-(int8_T)(uint8_T)-u : (uint8_T)u);

  /* End of DataTypeConversion: '<S485>/Data Type Conversion3' */

  /* DataTypeConversion: '<S485>/Data Type Conversion2' */
  if (rtIsNaN(BaseEngineController_LS_112_B.s485_ReadCANMessage_o5) || rtIsInf
      (BaseEngineController_LS_112_B.s485_ReadCANMessage_o5)) {
    u = 0.0;
  } else {
    u = fmod(floor(BaseEngineController_LS_112_B.s485_ReadCANMessage_o5), 256.0);
  }

  BaseEngineController_LS_112_B.s485_GPS_DayUTC = (uint8_T)(u < 0.0 ? (uint8_T)
    (int32_T)(int8_T)-(int8_T)(uint8_T)-u : (uint8_T)u);

  /* End of DataTypeConversion: '<S485>/Data Type Conversion2' */

  /* DataTypeConversion: '<S485>/Data Type Conversion1' */
  if (rtIsNaN(BaseEngineController_LS_112_B.s485_ReadCANMessage_o4) || rtIsInf
      (BaseEngineController_LS_112_B.s485_ReadCANMessage_o4)) {
    u = 0.0;
  } else {
    u = fmod(floor(BaseEngineController_LS_112_B.s485_ReadCANMessage_o4), 256.0);
  }

  BaseEngineController_LS_112_B.s485_GPS_MonthUTC = (uint8_T)(u < 0.0 ? (uint8_T)
    (int32_T)(int8_T)-(int8_T)(uint8_T)-u : (uint8_T)u);

  /* End of DataTypeConversion: '<S485>/Data Type Conversion1' */

  /* DataTypeConversion: '<S485>/Data Type Conversion' */
  if (rtIsNaN(BaseEngineController_LS_112_B.s485_ReadCANMessage_o3) || rtIsInf
      (BaseEngineController_LS_112_B.s485_ReadCANMessage_o3)) {
    u = 0.0;
  } else {
    u = fmod(floor(BaseEngineController_LS_112_B.s485_ReadCANMessage_o3), 256.0);
  }

  BaseEngineController_LS_112_B.s485_GPS_YearUTC = (uint8_T)(u < 0.0 ? (uint8_T)
    (int32_T)(int8_T)-(int8_T)(uint8_T)-u : (uint8_T)u);

  /* End of DataTypeConversion: '<S485>/Data Type Conversion' */

  /* DataTypeConversion: '<S486>/Data Type Conversion5' */
  BaseEngineController_LS_112_B.s486_SensorFaultState =
    ((BaseEngineController_LS_112_B.s486_ReadCANMessage1_o10 != 0.0));

  /* DataTypeConversion: '<S486>/Data Type Conversion9' */
  if (rtIsNaN(BaseEngineController_LS_112_B.s486_ReadCANMessage1_o9) || rtIsInf
      (BaseEngineController_LS_112_B.s486_ReadCANMessage1_o9)) {
    u = 0.0;
  } else {
    u = fmod(floor(BaseEngineController_LS_112_B.s486_ReadCANMessage1_o9), 256.0);
  }

  BaseEngineController_LS_112_B.s486_SensorStatus = (uint8_T)(u < 0.0 ? (uint8_T)
    (int32_T)(int8_T)-(int8_T)(uint8_T)-u : (uint8_T)u);

  /* End of DataTypeConversion: '<S486>/Data Type Conversion9' */

  /* DataTypeConversion: '<S486>/Data Type Conversion7' */
  BaseEngineController_LS_112_B.s486_UsingFreeAreCalState =
    ((BaseEngineController_LS_112_B.s486_ReadCANMessage1_o7 != 0.0));

  /* DataTypeConversion: '<S486>/Data Type Conversion8' */
  BaseEngineController_LS_112_B.s486_SensorDetectedStatus =
    ((BaseEngineController_LS_112_B.s486_ReadCANMessage1_o6 != 0.0));

  /* DataTypeConversion: '<S486>/Data Type Conversion4' */
  BaseEngineController_LS_112_B.s486_SensorFaultState_h =
    ((BaseEngineController_LS_112_B.s486_ReadCANMessage_o10 != 0.0));

  /* DataTypeConversion: '<S486>/Data Type Conversion3' */
  if (rtIsNaN(BaseEngineController_LS_112_B.s486_ReadCANMessage_o9) || rtIsInf
      (BaseEngineController_LS_112_B.s486_ReadCANMessage_o9)) {
    u = 0.0;
  } else {
    u = fmod(floor(BaseEngineController_LS_112_B.s486_ReadCANMessage_o9), 256.0);
  }

  BaseEngineController_LS_112_B.s486_SensorStatus_i = (uint8_T)(u < 0.0 ?
    (uint8_T)(int32_T)(int8_T)-(int8_T)(uint8_T)-u : (uint8_T)u);

  /* End of DataTypeConversion: '<S486>/Data Type Conversion3' */

  /* DataTypeConversion: '<S486>/Data Type Conversion1' */
  BaseEngineController_LS_112_B.s486_UsingFreeAreCalState_k =
    ((BaseEngineController_LS_112_B.s486_ReadCANMessage_o7 != 0.0));

  /* DataTypeConversion: '<S486>/Data Type Conversion' */
  BaseEngineController_LS_112_B.s486_SensorDetectedStatus_h =
    ((BaseEngineController_LS_112_B.s486_ReadCANMessage_o6 != 0.0));

  /* S-Function Block: <S620>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_112_DWork.s620_motohawk_delta_time_DWORK1, NULL);
    rtb_Abs_iy = ((real_T) delta) * 0.000001;
  }

  /* Product: '<S620>/Product' incorporates:
   *  MinMax: '<S620>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S620>/motohawk_calibration'
   */
  rtb_Abs_iy /= (rtb_Abs_iy >= (SensVoltFilterConst_DataStore())) || rtIsNaN
    ((SensVoltFilterConst_DataStore())) ? rtb_Abs_iy :
    (SensVoltFilterConst_DataStore());

  /* Logic: '<S563>/Logical Operator4' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S563>/motohawk_fault_status1'
   *  S-Function (motohawk_sfun_fault_status): '<S563>/motohawk_fault_status4'
   */
  rtb_RelationalOperator5_h = (IsFaultActive(138) || IsFaultActive(139));

  /* Logic: '<S563>/Logical Operator6' */
  rtb_LogicalOperator6_p = !rtb_RelationalOperator5_h;

  /* Logic: '<S563>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_status): '<S563>/motohawk_fault_status2'
   *  S-Function (motohawk_sfun_fault_status): '<S563>/motohawk_fault_status3'
   */
  rtb_LogicalOperator1_ou = (IsFaultSuspected(138) || IsFaultSuspected(139));

  /* S-Function Block: <S482>/motohawk_ain3 Resource: XDRP */
  BaseEngineController_LS_112_B.s482_motohawk_ain3 = XDRP_AnalogInput_Get();

  /* DataTypeConversion: '<S563>/Data Type Conversion' */
  rtb_Abs_o = (real_T)BaseEngineController_LS_112_B.s482_motohawk_ain3;

  /* Product: '<S563>/Product1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S563>/motohawk_calibration4'
   */
  rtb_DataTypeConversion1_j = rtb_Abs_o * (SensVoltGain_DataStore());

  /* Sum: '<S563>/Sum1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S563>/motohawk_calibration5'
   */
  BaseEngineController_LS_112_B.s563_Sum1 = rtb_DataTypeConversion1_j +
    (SensVoltOfst_DataStore());

  /* UnitDelay: '<S563>/Unit Delay1' */
  rtb_UnitDelay1_lh = BaseEngineController_LS_112_DWork.s563_UnitDelay1_DSTATE;

  /* If: '<S563>/If' incorporates:
   *  Logic: '<S563>/Logical Operator5'
   */
  if (rtb_LogicalOperator6_p && rtb_LogicalOperator1_ou) {
    /* Outputs for IfAction SubSystem: '<S563>/If Action Subsystem' incorporates:
     *  ActionPort: '<S621>/Action Port'
     */
    BaseEngineController_LS_112_IfActionSubsystem(rtb_UnitDelay1_lh,
      &rtb_Merge_no);

    /* End of Outputs for SubSystem: '<S563>/If Action Subsystem' */
  } else if (rtb_RelationalOperator5_h) {
    /* Outputs for IfAction SubSystem: '<S563>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S622>/Action Port'
     */
    BaseEngineController_LS_112_IfActionSubsystem((SensVoltDfltValue_DataStore()),
      &rtb_Merge_no);

    /* End of Outputs for SubSystem: '<S563>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S563>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S623>/Action Port'
     */
    BaseEngineController_LS_112_IfActionSubsystem
      (BaseEngineController_LS_112_B.s563_Sum1, &rtb_Merge_no);

    /* End of Outputs for SubSystem: '<S563>/If Action Subsystem2' */
  }

  /* End of If: '<S563>/If' */

  /* Sum: '<S625>/Sum1' incorporates:
   *  Constant: '<S625>/Constant'
   *  Product: '<S625>/Product'
   *  Product: '<S625>/Product1'
   *  Sum: '<S625>/Sum'
   *  UnitDelay: '<S625>/Unit Delay'
   */
  rtb_Sum1_d2 = (1.0 - rtb_Abs_iy) *
    BaseEngineController_LS_112_DWork.s625_UnitDelay_DSTATE + rtb_Merge_no *
    rtb_Abs_iy;

  /* If: '<S624>/If' incorporates:
   *  Inport: '<S626>/In1'
   *  Inport: '<S627>/In1'
   *  S-Function (motohawk_sfun_calibration): '<S624>/new_value'
   *  S-Function (motohawk_sfun_calibration): '<S624>/override_enable'
   */
  if ((SensVolt_ovr_DataStore())) {
    /* Outputs for IfAction SubSystem: '<S624>/NewValue' incorporates:
     *  ActionPort: '<S626>/Action Port'
     */
    BaseEngineController_LS_112_B.s624_Merge = (SensVolt_new_DataStore());

    /* End of Outputs for SubSystem: '<S624>/NewValue' */
  } else {
    /* Outputs for IfAction SubSystem: '<S624>/OldValue' incorporates:
     *  ActionPort: '<S627>/Action Port'
     */
    BaseEngineController_LS_112_B.s624_Merge = rtb_Sum1_d2;

    /* End of Outputs for SubSystem: '<S624>/OldValue' */
  }

  /* End of If: '<S624>/If' */

  /* Outputs for Enabled SubSystem: '<S477>/Triggered Subsystem' incorporates:
   *  EnablePort: '<S478>/Enable'
   */
  if (rtb_RelationalOperator_e) {
    if (!BaseEngineController_LS_112_DWork.s477_TriggeredSubsystem_MODE) {
      BaseEngineController_LS_112_DWork.s477_TriggeredSubsystem_MODE = TRUE;
    }

    /* Outputs for Function Call SubSystem: '<S11>/Diagnostics' */

    /* RelationalOperator: '<S307>/RelOp' incorporates:
     *  Constant: '<S307>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S293>/motohawk_data_read'
     */
    rtb_LogicalOperator6_p = (((uint8_T)EngineState_DataStore()) == 3);

    /* RelationalOperator: '<S293>/Relational Operator' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S293>/motohawk_calibration'
     */
    rtb_LogicalOperator_af = (BaseEngineController_LS_112_B.s569_Merge >=
      (real_T)((uint16_T)(ACHighPressureDisable_DataStore())));

    /* Logic: '<S293>/Logical Operator4' incorporates:
     *  Logic: '<S293>/Logical Operator3'
     *  S-Function (motohawk_sfun_fault_status): '<S293>/motohawk_fault_status1'
     *  S-Function (motohawk_sfun_fault_status): '<S293>/motohawk_fault_status4'
     */
    rtb_RelOp_fa = !(IsFaultActive(2) || IsFaultActive(3));

    /* Logic: '<S293>/Logical Operator' */
    rtb_LogicalOperator_md = ((rtb_LogicalOperator6_p && rtb_LogicalOperator_af &&
      rtb_RelOp_fa));

    /* S-Function (motohawk_sfun_fault_def): '<S293>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: ACChargeHigh_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(0, rtb_LogicalOperator_md);
      UpdateFault(0);
    }

    /* Logic: '<S293>/Logical Operator1' incorporates:
     *  RelationalOperator: '<S293>/Relational Operator1'
     *  S-Function (motohawk_sfun_calibration): '<S293>/motohawk_calibration2'
     */
    rtb_LogicalOperator1_dt = ((rtb_LogicalOperator6_p &&
      (BaseEngineController_LS_112_B.s569_Merge <= (real_T)((uint16_T)
      (ACLowPressureDisable_DataStore()))) && rtb_RelOp_fa &&
      BaseEngineController_LS_112_B.s92_AC));

    /* S-Function (motohawk_sfun_fault_def): '<S293>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: ACChargeLow_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(1, rtb_LogicalOperator1_dt);
      UpdateFault(1);
    }

    /* Logic: '<S294>/Logical Operator1' incorporates:
     *  Logic: '<S294>/Logical Operator3'
     *  S-Function (motohawk_sfun_fault_status): '<S294>/motohawk_fault_status1'
     *  S-Function (motohawk_sfun_fault_status): '<S294>/motohawk_fault_status4'
     *  S-Function (motohawk_sfun_fault_status): '<S294>/motohawk_fault_status6'
     *  S-Function (motohawk_sfun_fault_status): '<S294>/motohawk_fault_status7'
     */
    rtb_Switch1_m = !(IsFaultActive(120) || IsFaultActive(121) || IsFaultActive
                      (118) || IsFaultActive(119));

    /* Logic: '<S294>/Logical Operator5' incorporates:
     *  S-Function (motohawk_sfun_fault_status): '<S294>/motohawk_fault_status2'
     *  S-Function (motohawk_sfun_fault_status): '<S294>/motohawk_fault_status3'
     *  S-Function (motohawk_sfun_fault_status): '<S294>/motohawk_fault_status5'
     */
    rtb_LogicalOperator6_p = (IsFaultActive(124) || IsFaultActive(125) ||
      IsFaultActive(126));

    /* Logic: '<S294>/Logical Operator6' incorporates:
     *  Logic: '<S294>/Logical Operator7'
     *  S-Function (motohawk_sfun_calibration): '<S294>/motohawk_calibration3'
     */
    rtb_LogicalOperator6_p = !(rtb_LogicalOperator6_p &&
      (AirflowDiag_MAPIRDiagEnable_DataStore()));

    /* Logic: '<S294>/Logical Operator9' incorporates:
     *  Logic: '<S294>/Logical Operator2'
     *  S-Function (motohawk_sfun_fault_status): '<S294>/motohawk_fault_status10'
     *  S-Function (motohawk_sfun_fault_status): '<S294>/motohawk_fault_status11'
     *  S-Function (motohawk_sfun_fault_status): '<S294>/motohawk_fault_status8'
     *  S-Function (motohawk_sfun_fault_status): '<S294>/motohawk_fault_status9'
     */
    rtb_LogicalOperator1_ou = !(IsFaultActive(33) || IsFaultActive(32) ||
      IsFaultActive(29) || IsFaultActive(30));

    /* Abs: '<S294>/Abs' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S294>/motohawk_data_read'
     *  Sum: '<S294>/Sum'
     */
    rtb_DataTypeConversion1_j = fabs(BaseEngineController_LS_112_B.s525_Merge -
      VEModelMAF_DataStore());

    /* S-Function Block: <S294>/motohawk_interpolation_2d */
    {
      extern int8_T TableInterpolation2D_int8_T(uint16_T row_in, uint16_T col_in,
        int8_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_motohawk_interpolation_2d_n = TableInterpolation2D_int8_T
        (BaseEngineController_LS_112_B.s435_motohawk_prelookup1,
         BaseEngineController_LS_112_B.s433_motohawk_prelookup1, (int8_T *)
         ((AirflowMimatchThreshMap_DataStore())), 9, 9);
      (AirflowMimatchThresh_DataStore()) = rtb_motohawk_interpolation_2d_n;
    }

    /* RelationalOperator: '<S294>/Relational Operator' */
    rtb_RelOp_fa = (rtb_DataTypeConversion1_j >= (real_T)
                    rtb_motohawk_interpolation_2d_n);

    /* Logic: '<S294>/Logical Operator4' incorporates:
     *  Constant: '<S308>/Constant'
     *  Logic: '<S294>/Logical Operator8'
     *  RelationalOperator: '<S308>/RelOp'
     *  S-Function (motohawk_sfun_data_read): '<S294>/motohawk_data_read1'
     */
    rtb_LogicalOperator4_oy = ((rtb_Switch1_m && rtb_LogicalOperator6_p &&
      rtb_LogicalOperator1_ou && rtb_RelOp_fa && (((uint8_T)
      EngineState_DataStore()) == 3)));

    /* S-Function (motohawk_sfun_fault_def): '<S294>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: AirflowMismatch_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(21, rtb_LogicalOperator4_oy);
      UpdateFault(21);
    }

    /* RelationalOperator: '<S309>/RelOp' incorporates:
     *  Constant: '<S309>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S295>/motohawk_data_read'
     */
    rtb_RelOp_fa = (((uint8_T)EngineState_DataStore()) == 3);

    /* Gain: '<S295>/kPa to PSI' */
    rtb_DataTypeConversion1_j = 0.145038 *
      BaseEngineController_LS_112_B.s598_Merge;

    /* RelationalOperator: '<S295>/Relational Operator' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S295>/motohawk_calibration'
     */
    rtb_Switch1_m = (rtb_DataTypeConversion1_j >= (SoftOverBoostLimit_DataStore()));

    /* Logic: '<S295>/Logical Operator3' incorporates:
     *  S-Function (motohawk_sfun_fault_status): '<S295>/motohawk_fault_status1'
     *  S-Function (motohawk_sfun_fault_status): '<S295>/motohawk_fault_status4'
     */
    rtb_LogicalOperator6_p = (IsFaultActive(120) || IsFaultActive(121));

    /* Logic: '<S295>/Logical Operator5' incorporates:
     *  S-Function (motohawk_sfun_fault_status): '<S295>/motohawk_fault_status2'
     *  S-Function (motohawk_sfun_fault_status): '<S295>/motohawk_fault_status3'
     *  S-Function (motohawk_sfun_fault_status): '<S295>/motohawk_fault_status5'
     */
    rtb_LogicalOperator1_ou = (IsFaultActive(124) || IsFaultActive(125) ||
      IsFaultActive(126));

    /* Logic: '<S295>/Logical Operator8' incorporates:
     *  Logic: '<S295>/Logical Operator4'
     *  Logic: '<S295>/Logical Operator6'
     *  Logic: '<S295>/Logical Operator7'
     *  S-Function (motohawk_sfun_calibration): '<S295>/motohawk_calibration3'
     */
    rtb_LogicalOperator_af = ((!rtb_LogicalOperator6_p) &&
      (!(rtb_LogicalOperator1_ou && (BoostDiag_MAPIRDiagEnable_DataStore()))));

    /* Logic: '<S295>/Logical Operator' */
    rtb_LogicalOperator_n = ((rtb_RelOp_fa && rtb_Switch1_m &&
      rtb_LogicalOperator_af));

    /* S-Function (motohawk_sfun_fault_def): '<S295>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: SoftOverBoost_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(140, rtb_LogicalOperator_n);
      UpdateFault(140);
    }

    /* Logic: '<S295>/Logical Operator1' incorporates:
     *  RelationalOperator: '<S295>/Relational Operator1'
     *  S-Function (motohawk_sfun_calibration): '<S295>/motohawk_calibration1'
     */
    rtb_LogicalOperator1_it = ((rtb_RelOp_fa && (rtb_DataTypeConversion1_j >=
      (HardOverBoostLimit_DataStore())) && rtb_LogicalOperator_af));

    /* S-Function (motohawk_sfun_fault_def): '<S295>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: HardOverBoost_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(82, rtb_LogicalOperator1_it);
      UpdateFault(82);
    }

    /* Logic: '<S295>/Logical Operator2' incorporates:
     *  RelationalOperator: '<S295>/Relational Operator2'
     *  S-Function (motohawk_sfun_calibration): '<S295>/motohawk_calibration2'
     */
    rtb_LogicalOperator2_m = ((rtb_RelOp_fa &&
      (BaseEngineController_LS_112_B.s92_WASTEGATE >=
       (WastegateLossOfControl_DataStore())) && rtb_LogicalOperator_af));

    /* S-Function (motohawk_sfun_fault_def): '<S295>/motohawk_fault_def3' */

    /* Set Fault Suspected Status: Wastegate_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(161, rtb_LogicalOperator2_m);
      UpdateFault(161);
    }

    /* S-Function Block: <S310>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_112_DWork.s310_motohawk_delta_time_DWORK1,
         NULL);
      rtb_motohawk_delta_time_ar = ((real_T) delta) * 0.000001;
    }

    /* Switch: '<S310>/Switch' incorporates:
     *  Constant: '<S310>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S310>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S310>/motohawk_delta_time'
     *  Sum: '<S310>/Sum'
     */
    if (BaseEngineController_LS_112_B.s531_Merge) {
      rtb_DataTypeConversion1_j = rtb_motohawk_delta_time_ar +
        ScrambleTime_DataStore();
    } else {
      rtb_DataTypeConversion1_j = 0.0;
    }

    /* End of Switch: '<S310>/Switch' */
    /* Logic: '<S296>/Logical Operator1' incorporates:
     *  RelationalOperator: '<S296>/Relational Operator1'
     *  S-Function (motohawk_sfun_calibration): '<S296>/motohawk_calibration1'
     */
    rtb_LogicalOperator1_fj = (((rtb_DataTypeConversion1_j >=
      (DigDiag_ScrambleStuckTime_DataStore())) &&
      BaseEngineController_LS_112_B.s531_Merge));

    /* S-Function (motohawk_sfun_fault_def): '<S296>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: ScrambleStuckHigh_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(137, rtb_LogicalOperator1_fj);
      UpdateFault(137);
    }

    /* S-Function Block: <S311>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_112_DWork.s311_motohawk_delta_time_DWORK1,
         NULL);
      rtb_motohawk_delta_time_pi = ((real_T) delta) * 0.000001;
    }

    /* Switch: '<S311>/Switch' incorporates:
     *  Constant: '<S311>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S311>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S311>/motohawk_delta_time'
     *  Sum: '<S311>/Sum'
     */
    if (BaseEngineController_LS_112_B.s515_Merge) {
      rtb_DataTypeConversion_ep = rtb_motohawk_delta_time_pi +
        ClutchTime_DataStore();
    } else {
      rtb_DataTypeConversion_ep = 0.0;
    }

    /* End of Switch: '<S311>/Switch' */
    /* Logic: '<S296>/Logical Operator2' incorporates:
     *  RelationalOperator: '<S296>/Relational Operator2'
     *  S-Function (motohawk_sfun_calibration): '<S296>/motohawk_calibration2'
     */
    rtb_LogicalOperator2_gw = (((rtb_DataTypeConversion_ep >=
      (DigDiag_ClutchStuckTime_DataStore())) &&
      BaseEngineController_LS_112_B.s515_Merge));

    /* S-Function (motohawk_sfun_fault_def): '<S296>/motohawk_fault_def3' */

    /* Set Fault Suspected Status: ClutchStuckHigh_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(31, rtb_LogicalOperator2_gw);
      UpdateFault(31);
    }

    /* Saturate: '<S310>/Saturation' */
    rtb_Saturation_e = rtb_DataTypeConversion1_j >= 16000.0 ? 16000.0 :
      rtb_DataTypeConversion1_j <= 0.0 ? 0.0 : rtb_DataTypeConversion1_j;

    /* S-Function (motohawk_sfun_data_write): '<S310>/motohawk_data_write' */
    /* Write to Data Storage as scalar: ScrambleTime */
    {
      ScrambleTime_DataStore() = rtb_Saturation_e;
    }

    /* Saturate: '<S311>/Saturation' */
    rtb_Saturation_lw = rtb_DataTypeConversion_ep >= 16000.0 ? 16000.0 :
      rtb_DataTypeConversion_ep <= 0.0 ? 0.0 : rtb_DataTypeConversion_ep;

    /* S-Function (motohawk_sfun_data_write): '<S311>/motohawk_data_write' */
    /* Write to Data Storage as scalar: ClutchTime */
    {
      ClutchTime_DataStore() = rtb_Saturation_lw;
    }

    /* Product: '<S299>/Product' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S299>/motohawk_data_read'
     *  S-Function (motohawk_sfun_fault_status): '<S299>/motohawk_fault_status2'
     */
    rtb_Product2_e = (uint16_T)(BankB_Enbl_DataStore() ? IsFaultActive(25) : 0);

    /* Product: '<S299>/Product1' incorporates:
     *  S-Function (motohawk_sfun_data_read): '<S299>/motohawk_data_read'
     *  S-Function (motohawk_sfun_fault_status): '<S299>/motohawk_fault_status3'
     */
    rtb_Product1_hlh = (uint16_T)(BankB_Enbl_DataStore() ? IsFaultActive(26) : 0);

    /* Logic: '<S299>/Logical Operator1' incorporates:
     *  S-Function (motohawk_sfun_fault_status): '<S299>/motohawk_fault_status'
     *  S-Function (motohawk_sfun_fault_status): '<S299>/motohawk_fault_status1'
     */
    rtb_LogicalOperator6_p = ((rtb_Product2_e != 0) || (rtb_Product1_hlh != 0) ||
      IsFaultActive(23) || IsFaultActive(24) ||
      BaseEngineController_LS_112_B.s518_Merge);

    /* RelationalOperator: '<S299>/Relational Operator1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S299>/motohawk_calibration3'
     */
    rtb_LogicalOperator1_ou =
      (BaseEngineController_LS_112_B.s486_MultiportSwitch <
       (LeanProtect_Threshold_DataStore()));

    /* Logic: '<S299>/Logical Operator4' incorporates:
     *  Constant: '<S317>/Constant'
     *  Logic: '<S299>/Logical Operator3'
     *  RelationalOperator: '<S317>/RelOp'
     *  S-Function (motohawk_sfun_data_read): '<S299>/motohawk_data_read1'
     */
    rtb_LogicalOperator4_b = (((!rtb_LogicalOperator6_p) &&
      rtb_LogicalOperator1_ou && (((uint8_T)EngineState_DataStore()) == 3)));

    /* S-Function (motohawk_sfun_fault_def): '<S299>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: LeanProtect_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(117, rtb_LogicalOperator4_b);
      UpdateFault(117);
    }

    /* Logic: '<S301>/Logical Operator1' incorporates:
     *  Logic: '<S301>/Logical Operator3'
     *  S-Function (motohawk_sfun_fault_status): '<S301>/motohawk_fault_status1'
     *  S-Function (motohawk_sfun_fault_status): '<S301>/motohawk_fault_status4'
     */
    rtb_RelOp_fa = !(IsFaultActive(142) || IsFaultActive(143));

    /* RelationalOperator: '<S301>/Relational Operator' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S301>/motohawk_calibration'
     */
    rtb_LogicalOperator6_p = (BaseEngineController_LS_112_B.s632_Merge <=
      (LVDiag_AltInop_DataStore()));

    /* Logic: '<S301>/Logical Operator4' incorporates:
     *  Constant: '<S319>/Constant'
     *  RelationalOperator: '<S319>/RelOp'
     *  S-Function (motohawk_sfun_data_read): '<S301>/motohawk_data_read1'
     */
    rtb_LogicalOperator4_a = ((rtb_RelOp_fa && rtb_LogicalOperator6_p &&
      (((uint8_T)EngineState_DataStore()) == 3)));

    /* S-Function (motohawk_sfun_fault_def): '<S301>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: AltInop_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(22, rtb_LogicalOperator4_a);
      UpdateFault(22);
    }

    /* RelationalOperator: '<S301>/Relational Operator1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S301>/motohawk_calibration1'
     */
    rtb_LogicalOperator6_p = (BaseEngineController_LS_112_B.s632_Merge >=
      (LVDiag_VoltTooHigh_DataStore()));

    /* Logic: '<S301>/Logical Operator2' incorporates:
     *  Constant: '<S320>/Constant'
     *  RelationalOperator: '<S320>/RelOp'
     *  S-Function (motohawk_sfun_data_read): '<S301>/motohawk_data_read2'
     */
    rtb_LogicalOperator2_m3 = ((rtb_RelOp_fa && rtb_LogicalOperator6_p &&
      (((uint8_T)EngineState_DataStore()) == 3)));

    /* S-Function (motohawk_sfun_fault_def): '<S301>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: VoltTooHigh_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(160, rtb_LogicalOperator2_m3);
      UpdateFault(160);
    }

    /* RelationalOperator: '<S301>/Relational Operator2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S301>/motohawk_calibration2'
     */
    rtb_LogicalOperator6_p = (BaseEngineController_LS_112_B.s632_Merge <=
      (LVDiag_VoltLow_DataStore()));

    /* Logic: '<S301>/Logical Operator5' incorporates:
     *  Constant: '<S321>/Constant'
     *  Constant: '<S322>/Constant'
     *  Logic: '<S301>/Logical Operator'
     *  RelationalOperator: '<S321>/RelOp'
     *  RelationalOperator: '<S322>/RelOp'
     *  S-Function (motohawk_sfun_data_read): '<S301>/motohawk_data_read3'
     */
    rtb_LogicalOperator5_p3 = ((rtb_RelOp_fa && rtb_LogicalOperator6_p &&
      ((((uint8_T)EngineState_DataStore()) == 3) || (((uint8_T)
      EngineState_DataStore()) == 2))));

    /* S-Function (motohawk_sfun_fault_def): '<S301>/motohawk_fault_def3' */

    /* Set Fault Suspected Status: VoltLow_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(159, rtb_LogicalOperator5_p3);
      UpdateFault(159);
    }

    /* Logic: '<S302>/Logical Operator3' incorporates:
     *  Logic: '<S302>/Logical Operator1'
     *  S-Function (motohawk_sfun_fault_status): '<S302>/motohawk_fault_status'
     *  S-Function (motohawk_sfun_fault_status): '<S302>/motohawk_fault_status1'
     *  S-Function (motohawk_sfun_fault_status): '<S302>/motohawk_fault_status2'
     *  S-Function (motohawk_sfun_fault_status): '<S302>/motohawk_fault_status3'
     *  S-Function (motohawk_sfun_fault_status): '<S302>/motohawk_fault_status4'
     *  S-Function (motohawk_sfun_fault_status): '<S302>/motohawk_fault_status5'
     */
    rtb_RelOp_fa = !(IsFaultActive(148) || IsFaultActive(154) || IsFaultActive
                     (149) || IsFaultActive(155) || IsFaultActive(120) ||
                     IsFaultActive(121));

    /* RelationalOperator: '<S323>/RelOp' incorporates:
     *  Constant: '<S323>/Constant'
     */
    rtb_LogicalOperator_af = (BaseEngineController_LS_112_B.s466_State == 3);

    /* RelationalOperator: '<S302>/Relational Operator3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S302>/motohawk_calibration2'
     */
    rtb_LogicalOperator6_p = (BaseEngineController_LS_112_B.s450_Switch2 <
      (MAP_IR_TPS_CL_DataStore()));

    /* Logic: '<S302>/Logical Operator4' incorporates:
     *  RelationalOperator: '<S302>/Relational Operator4'
     *  S-Function (motohawk_sfun_calibration): '<S302>/motohawk_calibration4'
     */
    rtb_LogicalOperator4_f = ((rtb_RelOp_fa && rtb_LogicalOperator_af &&
      rtb_LogicalOperator6_p && (BaseEngineController_LS_112_B.s598_Merge >
      (MAP_IR_HI_DataStore()))));

    /* S-Function (motohawk_sfun_fault_def): '<S302>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: MAP_IR_HI */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(124, rtb_LogicalOperator4_f);
      UpdateFault(124);
    }

    /* RelationalOperator: '<S302>/Relational Operator1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S302>/motohawk_calibration6'
     */
    rtb_LogicalOperator6_p = (BaseEngineController_LS_112_B.s450_Switch2 >
      (MAP_IR_TPS_OP_DataStore()));

    /* Logic: '<S302>/Logical Operator2' incorporates:
     *  RelationalOperator: '<S302>/Relational Operator2'
     *  S-Function (motohawk_sfun_calibration): '<S302>/motohawk_calibration5'
     */
    rtb_LogicalOperator2_iu = ((rtb_RelOp_fa && rtb_LogicalOperator_af &&
      rtb_LogicalOperator6_p && (BaseEngineController_LS_112_B.s598_Merge <
      (MAP_IR_LO_DataStore()))));

    /* S-Function (motohawk_sfun_fault_def): '<S302>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: MAP_IR_LO */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(125, rtb_LogicalOperator2_iu);
      UpdateFault(125);
    }

    /* RelationalOperator: '<S302>/Relational Operator7' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S302>/motohawk_calibration8'
     */
    rtb_LogicalOperator6_p = (BaseEngineController_LS_112_B.s450_Switch2 <
      (MAP_TPS_STUCK_DataStore()));

    /* Sum: '<S302>/Add' */
    rtb_DataTypeConversion1_j = BaseEngineController_LS_112_B.s405_Sum -
      BaseEngineController_LS_112_B.s598_Merge;

    /* Logic: '<S302>/Logical Operator5' incorporates:
     *  RelationalOperator: '<S302>/Relational Operator8'
     *  S-Function (motohawk_sfun_calibration): '<S302>/motohawk_calibration7'
     */
    rtb_LogicalOperator5_af = ((rtb_RelOp_fa && rtb_LogicalOperator_af &&
      rtb_LogicalOperator6_p && (rtb_DataTypeConversion1_j <
      (MAP_STUCK_DataStore()))));

    /* S-Function (motohawk_sfun_fault_def): '<S302>/motohawk_fault_def3' */

    /* Set Fault Suspected Status: MAP_STICKING */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(126, rtb_LogicalOperator5_af);
      UpdateFault(126);
    }

    /* Logic: '<S303>/Logical Operator1' incorporates:
     *  S-Function (motohawk_sfun_fault_status): '<S303>/motohawk_fault_status'
     *  S-Function (motohawk_sfun_fault_status): '<S303>/motohawk_fault_status1'
     *  S-Function (motohawk_sfun_fault_status): '<S303>/motohawk_fault_status2'
     *  S-Function (motohawk_sfun_fault_status): '<S303>/motohawk_fault_status3'
     */
    rtb_RelationalOperator3_i2 = (IsFaultActive(43) || IsFaultActive(44) ||
      IsFaultActive(120) || IsFaultActive(121));

    /* Logic: '<S303>/Logical Operator4' incorporates:
     *  S-Function (motohawk_sfun_fault_status): '<S303>/motohawk_fault_status10'
     *  S-Function (motohawk_sfun_fault_status): '<S303>/motohawk_fault_status7'
     *  S-Function (motohawk_sfun_fault_status): '<S303>/motohawk_fault_status8'
     *  S-Function (motohawk_sfun_fault_status): '<S303>/motohawk_fault_status9'
     */
    rtb_LogicalOperator1_b3 = (IsFaultActive(33) || IsFaultActive(32) ||
      IsFaultActive(29) || IsFaultActive(30));

    /* Logic: '<S303>/Logical Operator5' incorporates:
     *  S-Function (motohawk_sfun_fault_status): '<S303>/motohawk_fault_status4'
     *  S-Function (motohawk_sfun_fault_status): '<S303>/motohawk_fault_status5'
     *  S-Function (motohawk_sfun_fault_status): '<S303>/motohawk_fault_status6'
     */
    rtb_LogicalOperator6_p = (IsFaultActive(124) || IsFaultActive(125) ||
      IsFaultActive(126));

    /* Logic: '<S303>/Logical Operator7' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S303>/motohawk_calibration8'
     */
    rtb_LogicalOperator1_ou = (rtb_LogicalOperator6_p &&
      (MisfireDiag_MAPIRDiagEnable_DataStore()));

    /* RelationalOperator: '<S325>/RelOp' incorporates:
     *  Constant: '<S325>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S303>/motohawk_data_read1'
     */
    rtb_Switch1_m = (((uint8_T)EngineState_DataStore()) == 3);

    /* RelationalOperator: '<S303>/Relational Operator' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S303>/motohawk_calibration'
     */
    rtb_RelOp_fa = (BaseEngineController_LS_112_B.s665_Merge >= (real_T)
                    ((int16_T)(MisfireDiag_ECTLowEnbl_DataStore())));

    /* RelationalOperator: '<S303>/Relational Operator1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S303>/motohawk_calibration1'
     */
    rtb_LogicalOperator_af = (BaseEngineController_LS_112_B.s665_Merge <=
      (real_T)((int16_T)(MisfireDiag_ECTHighEnbl_DataStore())));

    /* RelationalOperator: '<S303>/Relational Operator2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S303>/motohawk_calibration2'
     */
    rtb_LogicalOperator6_p = (BaseEngineController_LS_112_B.s598_Merge >=
      (real_T)((int16_T)(MisfireDiag_MAPLowEnbl_DataStore())));

    /* RelationalOperator: '<S303>/Relational Operator3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S303>/motohawk_calibration3'
     */
    rtb_BelowLoTarget_jl = (BaseEngineController_LS_112_B.s598_Merge <= (real_T)
                            ((int16_T)(MisfireDiag_MAPHighEnbl_DataStore())));

    /* RelationalOperator: '<S303>/Relational Operator4' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S303>/motohawk_calibration4'
     */
    rtb_Overspeed2 = (BaseEngineController_LS_112_B.s555_Sum1 >= (real_T)
                      ((int16_T)(MisfireDiag_RPMLowEnbl_DataStore())));

    /* RelationalOperator: '<S303>/Relational Operator5' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S303>/motohawk_calibration5'
     */
    rtb_RelOp_ie = (BaseEngineController_LS_112_B.s555_Sum1 <= (real_T)((int16_T)
                     (MisfireDiag_RPMHighEnbl_DataStore())));

    /* RelationalOperator: '<S303>/Relational Operator6' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S303>/motohawk_calibration6'
     */
    rtb_LogicalOperator3_aq = (BaseEngineController_LS_112_B.s471_Switch >=
      (real_T)((int16_T)(MisfireDiag_TimeSinceRunEnbl_DataStore())));

    /* Outputs for Enabled SubSystem: '<S303>/MisfireDiagSub' incorporates:
     *  EnablePort: '<S324>/Enable'
     */
    /* Logic: '<S303>/Logical Operator9' incorporates:
     *  Logic: '<S303>/Logical Operator'
     *  Logic: '<S303>/Logical Operator2'
     *  Logic: '<S303>/Logical Operator3'
     *  Logic: '<S303>/Logical Operator6'
     *  Logic: '<S303>/Logical Operator8'
     *  S-Function (motohawk_sfun_calibration): '<S303>/motohawk_calibration7'
     */
    if ((!rtb_RelationalOperator3_i2) && (!rtb_LogicalOperator1_b3) &&
        (!rtb_LogicalOperator1_ou) && (rtb_Switch1_m && rtb_RelOp_fa &&
         rtb_LogicalOperator_af && rtb_LogicalOperator6_p &&
         rtb_BelowLoTarget_jl && rtb_Overspeed2 && rtb_RelOp_ie &&
         rtb_LogicalOperator3_aq && (MisfireDiag_Enbl_DataStore()))) {
      if (!BaseEngineController_LS_112_DWork.s303_MisfireDiagSub_MODE) {
        /* Level2 S-Function Block: '<S324>/motohawk_trigger' (motohawk_sfun_trigger) */

        /* Enable for Trigger_FGND_HIRES_6521p0004 */
        BaseEngineController_LS_112_DWork.s324_motohawk_trigger_DWORK1 = 1;
        BaseEngineController_LS_112_DWork.s303_MisfireDiagSub_MODE = TRUE;
      }

      /* S-Function (motohawk_sfun_trigger): '<S324>/motohawk_trigger' */
      /* Enable for Trigger_FGND_HIRES_6521p0004 */
      if (BaseEngineController_LS_112_DWork.s324_motohawk_trigger_DWORK1 == 0) {
        BaseEngineController_LS_112_DWork.s324_motohawk_trigger_DWORK1 = 1;
      }
    } else {
      if (BaseEngineController_LS_112_DWork.s303_MisfireDiagSub_MODE) {
        /* Level2 S-Function Block: '<S324>/motohawk_trigger' (motohawk_sfun_trigger) */
        /* Disable for Trigger_FGND_HIRES_6521p0004 */
        BaseEngineController_LS_112_DWork.s324_motohawk_trigger_DWORK1 = 0;
        BaseEngineController_LS_112_DWork.s303_MisfireDiagSub_MODE = FALSE;
      }
    }

    /* End of Logic: '<S303>/Logical Operator9' */
    /* End of Outputs for SubSystem: '<S303>/MisfireDiagSub' */

    /* Logic: '<S356>/Logical Operator34' incorporates:
     *  Logic: '<S356>/Logical Operator33'
     *  S-Function (motohawk_sfun_data_read): '<S356>/motohawk_data_read'
     *  S-Function (motohawk_sfun_fault_status): '<S356>/motohawk_fault_status1'
     *  S-Function (motohawk_sfun_fault_status): '<S356>/motohawk_fault_status2'
     *  S-Function (motohawk_sfun_fault_status): '<S356>/motohawk_fault_status3'
     *  S-Function (motohawk_sfun_fault_status): '<S356>/motohawk_fault_status9'
     */
    rtb_LogicalOperator6_p = (IsFaultActive(43) || IsFaultActive(44) ||
      IsFaultActive(114) || IsFaultActive(115) || (!BankB_Enbl_DataStore()));

    /* RelationalOperator: '<S359>/RelOp' incorporates:
     *  Constant: '<S359>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S356>/motohawk_data_read1'
     */
    rtb_LogicalOperator1_ou = (((uint8_T)EngineState_DataStore()) == 3);

    /* RelationalOperator: '<S356>/Relational Operator' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S356>/motohawk_calibration'
     */
    rtb_Switch1_m = (BaseEngineController_LS_112_B.s471_Switch >=
                     (O2Diag_Bank2Bank_MinRunTime_DataStore()));

    /* RelationalOperator: '<S356>/Relational Operator1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S356>/motohawk_calibration1'
     */
    rtb_LogicalOperator3_aq = (BaseEngineController_LS_112_B.s665_Merge >=
      (real_T)((int16_T)(O2Diag_Bank2Bank_MinECT_DataStore())));

    /* Logic: '<S356>/Logical Operator1' */
    rtb_RelationalOperator3_i2 =
      (BaseEngineController_LS_112_B.s486_DataValidState &&
       BaseEngineController_LS_112_B.s486_DataValidState_d);

    /* RelationalOperator: '<S356>/Relational Operator2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S356>/motohawk_calibration2'
     */
    rtb_LogicalOperator_af = (BaseEngineController_LS_112_B.s147_Product1 >=
      (O2Diag_Bank2Bank_MinDesEquivRatio_DataStore()));

    /* RelationalOperator: '<S356>/Relational Operator3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S356>/motohawk_calibration3'
     */
    rtb_LogicalOperator1_b3 = (BaseEngineController_LS_112_B.s147_Product1 <=
      (O2Diag_Bank2Bank_MaxDesEquivRatio_DataStore()));

    /* Abs: '<S356>/Abs' incorporates:
     *  Sum: '<S356>/Sum'
     */
    rtb_DataTypeConversion_ep = fabs
      (BaseEngineController_LS_112_B.s486_MultiportSwitch -
       BaseEngineController_LS_112_B.s501_Merge);

    /* S-Function Block: <S356>/motohawk_interpolation_2d */
    {
      extern real_T TableInterpolation2D_real_T(uint16_T row_in, uint16_T col_in,
        real_T *map_data, uint32_T row_sz, uint32_T col_sz);
      rtb_motohawk_interpolation_2d_h = TableInterpolation2D_real_T
        (BaseEngineController_LS_112_B.s435_motohawk_prelookup1,
         BaseEngineController_LS_112_B.s433_motohawk_prelookup1, (real_T *)
         ((O2Diag_Bank2Bank_DiffAlwdMap_DataStore())), 9, 9);
      (O2Diag_Bank2Bank_DiffAlwd_DataStore()) = rtb_motohawk_interpolation_2d_h;
    }

    /* Logic: '<S356>/Logical Operator' incorporates:
     *  Logic: '<S356>/Logical Operator10'
     *  RelationalOperator: '<S356>/Relational Operator4'
     *  S-Function (motohawk_sfun_interpolation_2d): '<S356>/motohawk_interpolation_2d'
     */
    rtb_LogicalOperator_nn = (((!rtb_LogicalOperator6_p) &&
      rtb_LogicalOperator1_ou && rtb_Switch1_m && rtb_LogicalOperator3_aq &&
      rtb_RelationalOperator3_i2 && rtb_LogicalOperator_af &&
      rtb_LogicalOperator1_b3 && (rtb_DataTypeConversion_ep >=
      rtb_motohawk_interpolation_2d_h)));

    /* S-Function (motohawk_sfun_fault_def): '<S356>/motohawk_fault_def6' */

    /* Set Fault Suspected Status: Lambda_Bank2Bank_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(116, rtb_LogicalOperator_nn);
      UpdateFault(116);
    }

    /* Logic: '<S357>/Logical Operator1' incorporates:
     *  S-Function (motohawk_sfun_fault_status): '<S357>/motohawk_fault_status1'
     */
    rtb_LogicalOperator6_p = !IsFaultActive(114);

    /* S-Function Block: <S376>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_112_DWork.s376_motohawk_delta_time_DWORK1,
         NULL);
      rtb_motohawk_delta_time_ln = ((real_T) delta) * 0.000001;
    }

    /* RelationalOperator: '<S360>/RelOp' incorporates:
     *  Constant: '<S360>/Constant'
     */
    rtb_LogicalOperator3_aq = (BaseEngineController_LS_112_B.s486_SensorStatus_i
      == 0);

    /* Switch: '<S376>/Switch' incorporates:
     *  Constant: '<S376>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S376>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S376>/motohawk_delta_time'
     *  Sum: '<S376>/Sum'
     */
    if (rtb_LogicalOperator3_aq) {
      rtb_DataTypeConversion_ep = rtb_motohawk_delta_time_ln +
        Lam1ResetTime_DataStore();
    } else {
      rtb_DataTypeConversion_ep = 0.0;
    }

    /* End of Switch: '<S376>/Switch' */
    /* Logic: '<S357>/Logical Operator4' incorporates:
     *  RelationalOperator: '<S357>/Relational Operator'
     *  S-Function (motohawk_sfun_calibration): '<S357>/motohawk_calibration'
     */
    rtb_LogicalOperator4_pf = ((rtb_LogicalOperator6_p &&
      (rtb_DataTypeConversion_ep >= (O2Diag_Lam1_StuckInResetThresh_DataStore()))
      && rtb_LogicalOperator3_aq));

    /* S-Function (motohawk_sfun_fault_def): '<S357>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: Lambda1StuckInReset_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(100, rtb_LogicalOperator4_pf);
      UpdateFault(100);
    }

    /* Logic: '<S357>/Logical Operator36' incorporates:
     *  Logic: '<S357>/Logical Operator35'
     *  S-Function (motohawk_sfun_data_read): '<S357>/motohawk_data_read1'
     *  S-Function (motohawk_sfun_fault_status): '<S357>/motohawk_fault_status10'
     */
    rtb_LogicalOperator6_p = (IsFaultActive(115) || (!BankB_Enbl_DataStore()));

    /* S-Function Block: <S379>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_112_DWork.s379_motohawk_delta_time_DWORK1,
         NULL);
      rtb_motohawk_delta_time_l3 = ((real_T) delta) * 0.000001;
    }

    /* RelationalOperator: '<S361>/RelOp' incorporates:
     *  Constant: '<S361>/Constant'
     */
    rtb_LogicalOperator3_aq = (BaseEngineController_LS_112_B.s486_SensorStatus ==
      1);

    /* Switch: '<S379>/Switch' incorporates:
     *  Constant: '<S379>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S379>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S379>/motohawk_delta_time'
     *  Sum: '<S379>/Sum'
     */
    if (rtb_LogicalOperator3_aq) {
      rtb_DataTypeConversion1_j = rtb_motohawk_delta_time_l3 +
        Lam2WarmupTime_DataStore();
    } else {
      rtb_DataTypeConversion1_j = 0.0;
    }

    /* End of Switch: '<S379>/Switch' */
    /* Logic: '<S357>/Logical Operator26' incorporates:
     *  Logic: '<S357>/Logical Operator25'
     *  RelationalOperator: '<S357>/Relational Operator3'
     *  S-Function (motohawk_sfun_calibration): '<S357>/motohawk_calibration3'
     */
    rtb_LogicalOperator26 = (((!rtb_LogicalOperator6_p) &&
      (rtb_DataTypeConversion1_j >= (O2Diag_Lam2_StuckInWarmup_DataStore())) &&
      rtb_LogicalOperator3_aq));

    /* S-Function (motohawk_sfun_fault_def): '<S357>/motohawk_fault_def10' */

    /* Set Fault Suspected Status: Lambda2StuckInWarmup_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(111, rtb_LogicalOperator26);
      UpdateFault(111);
    }

    /* Logic: '<S357>/Logical Operator29' incorporates:
     *  Constant: '<S362>/Constant'
     *  Logic: '<S357>/Logical Operator28'
     *  Logic: '<S357>/Logical Operator37'
     *  Logic: '<S357>/Logical Operator38'
     *  RelationalOperator: '<S362>/RelOp'
     *  S-Function (motohawk_sfun_data_read): '<S357>/motohawk_data_read2'
     *  S-Function (motohawk_sfun_fault_status): '<S357>/motohawk_fault_status11'
     */
    rtb_LogicalOperator29 = (((!(IsFaultActive(115) || (!BankB_Enbl_DataStore())))
      && (BaseEngineController_LS_112_B.s486_SensorStatus == 7)));

    /* S-Function (motohawk_sfun_fault_def): '<S357>/motohawk_fault_def11' */

    /* Set Fault Suspected Status: Lambda2Overheat_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(109, rtb_LogicalOperator29);
      UpdateFault(109);
    }

    /* Logic: '<S357>/Logical Operator31' incorporates:
     *  Logic: '<S357>/Logical Operator30'
     *  Logic: '<S357>/Logical Operator47'
     *  Logic: '<S357>/Logical Operator48'
     *  RelationalOperator: '<S363>/RelOp'
     *  S-Function (motohawk_sfun_data_read): '<S357>/motohawk_data_read7'
     *  S-Function (motohawk_sfun_fault_status): '<S357>/motohawk_fault_status16'
     */
    rtb_LogicalOperator31 = (((!(IsFaultActive(115) || (!BankB_Enbl_DataStore())))
      && BaseEngineController_LS_112_B.s486_SensorFaultState));

    /* S-Function (motohawk_sfun_fault_def): '<S357>/motohawk_fault_def12' */

    /* Set Fault Suspected Status: Lambda2Fault_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(105, rtb_LogicalOperator31);
      UpdateFault(105);
    }

    /* Logic: '<S357>/Logical Operator18' incorporates:
     *  Constant: '<S364>/Constant'
     *  Logic: '<S357>/Logical Operator32'
     *  Logic: '<S357>/Logical Operator39'
     *  Logic: '<S357>/Logical Operator40'
     *  RelationalOperator: '<S364>/RelOp'
     *  S-Function (motohawk_sfun_data_read): '<S357>/motohawk_data_read3'
     *  S-Function (motohawk_sfun_fault_status): '<S357>/motohawk_fault_status12'
     */
    rtb_LogicalOperator18 = (((!(IsFaultActive(115) || (!BankB_Enbl_DataStore())))
      && (BaseEngineController_LS_112_B.s486_SensorStatus == 8)));

    /* S-Function (motohawk_sfun_fault_def): '<S357>/motohawk_fault_def13' */

    /* Set Fault Suspected Status: Lambda2Overcool_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(108, rtb_LogicalOperator18);
      UpdateFault(108);
    }

    /* Logic: '<S357>/Logical Operator20' incorporates:
     *  Constant: '<S365>/Constant'
     *  Logic: '<S357>/Logical Operator19'
     *  Logic: '<S357>/Logical Operator41'
     *  Logic: '<S357>/Logical Operator42'
     *  RelationalOperator: '<S365>/RelOp'
     *  S-Function (motohawk_sfun_data_read): '<S357>/motohawk_data_read4'
     *  S-Function (motohawk_sfun_fault_status): '<S357>/motohawk_fault_status13'
     */
    rtb_LogicalOperator20 = (((!(IsFaultActive(115) || (!BankB_Enbl_DataStore())))
      && (BaseEngineController_LS_112_B.s486_SensorStatus == 9)));

    /* S-Function (motohawk_sfun_fault_def): '<S357>/motohawk_fault_def14' */

    /* Set Fault Suspected Status: Lambda2HtrShort_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(107, rtb_LogicalOperator20);
      UpdateFault(107);
    }

    /* Logic: '<S357>/Logical Operator22' incorporates:
     *  Constant: '<S366>/Constant'
     *  Logic: '<S357>/Logical Operator21'
     *  Logic: '<S357>/Logical Operator43'
     *  Logic: '<S357>/Logical Operator44'
     *  RelationalOperator: '<S366>/RelOp'
     *  S-Function (motohawk_sfun_data_read): '<S357>/motohawk_data_read5'
     *  S-Function (motohawk_sfun_fault_status): '<S357>/motohawk_fault_status14'
     */
    rtb_LogicalOperator22 = (((!(IsFaultActive(115) || (!BankB_Enbl_DataStore())))
      && (BaseEngineController_LS_112_B.s486_SensorStatus == 10)));

    /* S-Function (motohawk_sfun_fault_def): '<S357>/motohawk_fault_def15' */

    /* Set Fault Suspected Status: Lambda2HtrOpen_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(106, rtb_LogicalOperator22);
      UpdateFault(106);
    }

    /* Logic: '<S357>/Logical Operator24' incorporates:
     *  Constant: '<S367>/Constant'
     *  Logic: '<S357>/Logical Operator23'
     *  Logic: '<S357>/Logical Operator45'
     *  Logic: '<S357>/Logical Operator46'
     *  RelationalOperator: '<S367>/RelOp'
     *  S-Function (motohawk_sfun_data_read): '<S357>/motohawk_data_read6'
     *  S-Function (motohawk_sfun_fault_status): '<S357>/motohawk_fault_status15'
     */
    rtb_LogicalOperator24 = (((!(IsFaultActive(115) || (!BankB_Enbl_DataStore())))
      && (BaseEngineController_LS_112_B.s486_SensorStatus == 20)));

    /* S-Function (motohawk_sfun_fault_def): '<S357>/motohawk_fault_def16' */

    /* Set Fault Suspected Status: Lambda2Error_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(104, rtb_LogicalOperator24);
      UpdateFault(104);
    }

    /* Logic: '<S357>/Logical Operator2' incorporates:
     *  S-Function (motohawk_sfun_fault_status): '<S357>/motohawk_fault_status2'
     */
    rtb_LogicalOperator6_p = !IsFaultActive(114);

    /* S-Function Block: <S377>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_112_DWork.s377_motohawk_delta_time_DWORK1,
         NULL);
      rtb_motohawk_delta_time_oy = ((real_T) delta) * 0.000001;
    }

    /* RelationalOperator: '<S368>/RelOp' incorporates:
     *  Constant: '<S368>/Constant'
     */
    rtb_LogicalOperator3_aq = (BaseEngineController_LS_112_B.s486_SensorStatus_i
      == 1);

    /* Switch: '<S377>/Switch' incorporates:
     *  Constant: '<S377>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S377>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S377>/motohawk_delta_time'
     *  Sum: '<S377>/Sum'
     */
    if (rtb_LogicalOperator3_aq) {
      rtb_Product1_mc = rtb_motohawk_delta_time_oy + Lam1WarmupTime_DataStore();
    } else {
      rtb_Product1_mc = 0.0;
    }

    /* End of Switch: '<S377>/Switch' */
    /* Logic: '<S357>/Logical Operator3' incorporates:
     *  RelationalOperator: '<S357>/Relational Operator1'
     *  S-Function (motohawk_sfun_calibration): '<S357>/motohawk_calibration1'
     */
    rtb_LogicalOperator3_p = ((rtb_LogicalOperator6_p && (rtb_Product1_mc >=
      (O2Diag_Lam1_StuckInWarmup_DataStore())) && rtb_LogicalOperator3_aq));

    /* S-Function (motohawk_sfun_fault_def): '<S357>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: Lambda1StuckInWarmup_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(101, rtb_LogicalOperator3_p);
      UpdateFault(101);
    }

    /* Logic: '<S357>/Logical Operator6' incorporates:
     *  Constant: '<S369>/Constant'
     *  Logic: '<S357>/Logical Operator5'
     *  RelationalOperator: '<S369>/RelOp'
     *  S-Function (motohawk_sfun_fault_status): '<S357>/motohawk_fault_status3'
     */
    rtb_LogicalOperator6_mr = (((!IsFaultActive(114)) &&
      (BaseEngineController_LS_112_B.s486_SensorStatus_i == 7)));

    /* S-Function (motohawk_sfun_fault_def): '<S357>/motohawk_fault_def3' */

    /* Set Fault Suspected Status: Lambda1Overheat_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(99, rtb_LogicalOperator6_mr);
      UpdateFault(99);
    }

    /* Logic: '<S357>/Logical Operator8' incorporates:
     *  Logic: '<S357>/Logical Operator7'
     *  RelationalOperator: '<S370>/RelOp'
     *  S-Function (motohawk_sfun_fault_status): '<S357>/motohawk_fault_status4'
     */
    rtb_LogicalOperator8_b = (((!IsFaultActive(114)) &&
      BaseEngineController_LS_112_B.s486_SensorFaultState_h));

    /* S-Function (motohawk_sfun_fault_def): '<S357>/motohawk_fault_def4' */

    /* Set Fault Suspected Status: Lambda1Fault_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(95, rtb_LogicalOperator8_b);
      UpdateFault(95);
    }

    /* Logic: '<S357>/Logical Operator10' incorporates:
     *  Constant: '<S371>/Constant'
     *  Logic: '<S357>/Logical Operator9'
     *  RelationalOperator: '<S371>/RelOp'
     *  S-Function (motohawk_sfun_fault_status): '<S357>/motohawk_fault_status5'
     */
    rtb_LogicalOperator10_p = (((!IsFaultActive(114)) &&
      (BaseEngineController_LS_112_B.s486_SensorStatus_i == 8)));

    /* S-Function (motohawk_sfun_fault_def): '<S357>/motohawk_fault_def5' */

    /* Set Fault Suspected Status: Lambda1Overcool_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(98, rtb_LogicalOperator10_p);
      UpdateFault(98);
    }

    /* Logic: '<S357>/Logical Operator12' incorporates:
     *  Constant: '<S372>/Constant'
     *  Logic: '<S357>/Logical Operator11'
     *  RelationalOperator: '<S372>/RelOp'
     *  S-Function (motohawk_sfun_fault_status): '<S357>/motohawk_fault_status6'
     */
    rtb_LogicalOperator12 = (((!IsFaultActive(114)) &&
      (BaseEngineController_LS_112_B.s486_SensorStatus_i == 9)));

    /* S-Function (motohawk_sfun_fault_def): '<S357>/motohawk_fault_def6' */

    /* Set Fault Suspected Status: Lambda1HtrShort_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(97, rtb_LogicalOperator12);
      UpdateFault(97);
    }

    /* Logic: '<S357>/Logical Operator14' incorporates:
     *  Constant: '<S373>/Constant'
     *  Logic: '<S357>/Logical Operator13'
     *  RelationalOperator: '<S373>/RelOp'
     *  S-Function (motohawk_sfun_fault_status): '<S357>/motohawk_fault_status7'
     */
    rtb_LogicalOperator14 = (((!IsFaultActive(114)) &&
      (BaseEngineController_LS_112_B.s486_SensorStatus_i == 10)));

    /* S-Function (motohawk_sfun_fault_def): '<S357>/motohawk_fault_def7' */

    /* Set Fault Suspected Status: Lambda1HtrOpen_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(96, rtb_LogicalOperator14);
      UpdateFault(96);
    }

    /* Logic: '<S357>/Logical Operator16' incorporates:
     *  Constant: '<S374>/Constant'
     *  Logic: '<S357>/Logical Operator15'
     *  RelationalOperator: '<S374>/RelOp'
     *  S-Function (motohawk_sfun_fault_status): '<S357>/motohawk_fault_status8'
     */
    rtb_LogicalOperator16 = (((!IsFaultActive(114)) &&
      (BaseEngineController_LS_112_B.s486_SensorStatus_i == 20)));

    /* S-Function (motohawk_sfun_fault_def): '<S357>/motohawk_fault_def8' */

    /* Set Fault Suspected Status: Lambda1Error_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(94, rtb_LogicalOperator16);
      UpdateFault(94);
    }

    /* Logic: '<S357>/Logical Operator34' incorporates:
     *  Logic: '<S357>/Logical Operator33'
     *  S-Function (motohawk_sfun_data_read): '<S357>/motohawk_data_read'
     *  S-Function (motohawk_sfun_fault_status): '<S357>/motohawk_fault_status9'
     */
    rtb_LogicalOperator6_p = (IsFaultActive(115) || (!BankB_Enbl_DataStore()));

    /* S-Function Block: <S378>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_112_DWork.s378_motohawk_delta_time_DWORK1,
         NULL);
      rtb_motohawk_delta_time_c5 = ((real_T) delta) * 0.000001;
    }

    /* RelationalOperator: '<S375>/RelOp' incorporates:
     *  Constant: '<S375>/Constant'
     */
    rtb_LogicalOperator3_aq = (BaseEngineController_LS_112_B.s486_SensorStatus ==
      0);

    /* Switch: '<S378>/Switch' incorporates:
     *  Constant: '<S378>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S378>/motohawk_data_read'
     *  S-Function (motohawk_sfun_delta_time): '<S378>/motohawk_delta_time'
     *  Sum: '<S378>/Sum'
     */
    if (rtb_LogicalOperator3_aq) {
      rtb_motohawk_interpolation_1d3_m3 = rtb_motohawk_delta_time_c5 +
        Lam2ResetTime_DataStore();
    } else {
      rtb_motohawk_interpolation_1d3_m3 = 0.0;
    }

    /* End of Switch: '<S378>/Switch' */
    /* Logic: '<S357>/Logical Operator27' incorporates:
     *  Logic: '<S357>/Logical Operator17'
     *  RelationalOperator: '<S357>/Relational Operator2'
     *  S-Function (motohawk_sfun_calibration): '<S357>/motohawk_calibration2'
     */
    rtb_LogicalOperator27 = (((!rtb_LogicalOperator6_p) &&
      (rtb_motohawk_interpolation_1d3_m3 >=
       (O2Diag_Lam21_StuckInResetThresh_DataStore())) && rtb_LogicalOperator3_aq));

    /* S-Function (motohawk_sfun_fault_def): '<S357>/motohawk_fault_def9' */

    /* Set Fault Suspected Status: Lambda2StuckInReset_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(110, rtb_LogicalOperator27);
      UpdateFault(110);
    }

    /* Saturate: '<S376>/Saturation' */
    rtb_Saturation_j = rtb_DataTypeConversion_ep >= 16000.0 ? 16000.0 :
      rtb_DataTypeConversion_ep <= 0.0 ? 0.0 : rtb_DataTypeConversion_ep;

    /* S-Function (motohawk_sfun_data_write): '<S376>/motohawk_data_write' */
    /* Write to Data Storage as scalar: Lam1ResetTime */
    {
      Lam1ResetTime_DataStore() = rtb_Saturation_j;
    }

    /* Saturate: '<S377>/Saturation' */
    rtb_Saturation_b5 = rtb_Product1_mc >= 16000.0 ? 16000.0 : rtb_Product1_mc <=
      0.0 ? 0.0 : rtb_Product1_mc;

    /* S-Function (motohawk_sfun_data_write): '<S377>/motohawk_data_write' */
    /* Write to Data Storage as scalar: Lam1WarmupTime */
    {
      Lam1WarmupTime_DataStore() = rtb_Saturation_b5;
    }

    /* Saturate: '<S378>/Saturation' */
    rtb_Saturation_a3 = rtb_motohawk_interpolation_1d3_m3 >= 16000.0 ? 16000.0 :
      rtb_motohawk_interpolation_1d3_m3 <= 0.0 ? 0.0 :
      rtb_motohawk_interpolation_1d3_m3;

    /* S-Function (motohawk_sfun_data_write): '<S378>/motohawk_data_write' */
    /* Write to Data Storage as scalar: Lam2ResetTime */
    {
      Lam2ResetTime_DataStore() = rtb_Saturation_a3;
    }

    /* Saturate: '<S379>/Saturation' */
    rtb_Saturation_oa = rtb_DataTypeConversion1_j >= 16000.0 ? 16000.0 :
      rtb_DataTypeConversion1_j <= 0.0 ? 0.0 : rtb_DataTypeConversion1_j;

    /* S-Function (motohawk_sfun_data_write): '<S379>/motohawk_data_write' */
    /* Write to Data Storage as scalar: Lam2WarmupTime */
    {
      Lam2WarmupTime_DataStore() = rtb_Saturation_oa;
    }

    /* Logic: '<S358>/Logical Operator1' incorporates:
     *  S-Function (motohawk_sfun_fault_status): '<S358>/motohawk_fault_status1'
     */
    rtb_LogicalOperator6_p = !IsFaultActive(114);

    /* RelationalOperator: '<S358>/Relational Operator' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S358>/motohawk_calibration'
     */
    rtb_LogicalOperator1_ou = (BaseEngineController_LS_112_B.s486_SystemVolts <=
                               (Lambda1_VoltLowThresh_DataStore()));

    /* Logic: '<S358>/Logical Operator4' incorporates:
     *  Constant: '<S380>/Constant'
     *  Constant: '<S381>/Constant'
     *  Logic: '<S358>/Logical Operator'
     *  RelationalOperator: '<S380>/RelOp'
     *  RelationalOperator: '<S381>/RelOp'
     *  S-Function (motohawk_sfun_data_read): '<S358>/motohawk_data_read1'
     */
    rtb_LogicalOperator4_kb = ((rtb_LogicalOperator6_p &&
      rtb_LogicalOperator1_ou && ((((uint8_T)EngineState_DataStore()) == 3) ||
                                 (((uint8_T)EngineState_DataStore()) == 2))));

    /* S-Function (motohawk_sfun_fault_def): '<S358>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: Lambda1VoltLow_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(103, rtb_LogicalOperator4_kb);
      UpdateFault(103);
    }

    /* Logic: '<S358>/Logical Operator5' incorporates:
     *  S-Function (motohawk_sfun_fault_status): '<S358>/motohawk_fault_status4'
     */
    rtb_LogicalOperator6_p = !IsFaultActive(114);

    /* RelationalOperator: '<S358>/Relational Operator1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S358>/motohawk_calibration1'
     */
    rtb_LogicalOperator1_ou = (BaseEngineController_LS_112_B.s486_SystemVolts >=
                               (Lambda1_VoltHighThresh_DataStore()));

    /* Logic: '<S358>/Logical Operator7' incorporates:
     *  Constant: '<S382>/Constant'
     *  Constant: '<S383>/Constant'
     *  Logic: '<S358>/Logical Operator3'
     *  RelationalOperator: '<S382>/RelOp'
     *  RelationalOperator: '<S383>/RelOp'
     *  S-Function (motohawk_sfun_data_read): '<S358>/motohawk_data_read2'
     */
    rtb_LogicalOperator7_hn = ((rtb_LogicalOperator6_p &&
      rtb_LogicalOperator1_ou && ((((uint8_T)EngineState_DataStore()) == 3) ||
                                 (((uint8_T)EngineState_DataStore()) == 2))));

    /* S-Function (motohawk_sfun_fault_def): '<S358>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: Lambda1VoltHigh_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(102, rtb_LogicalOperator7_hn);
      UpdateFault(102);
    }

    /* Logic: '<S358>/Logical Operator15' incorporates:
     *  Logic: '<S358>/Logical Operator14'
     *  S-Function (motohawk_sfun_data_read): '<S358>/motohawk_data_read5'
     *  S-Function (motohawk_sfun_fault_status): '<S358>/motohawk_fault_status5'
     */
    rtb_LogicalOperator6_p = (IsFaultActive(115) || (!BankB_Enbl_DataStore()));

    /* RelationalOperator: '<S358>/Relational Operator2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S358>/motohawk_calibration2'
     */
    rtb_LogicalOperator1_ou = (BaseEngineController_LS_112_B.s486_SystemVolts_f >=
                               (Lambda2_VoltHighThresh_DataStore()));

    /* Logic: '<S358>/Logical Operator8' incorporates:
     *  Constant: '<S384>/Constant'
     *  Constant: '<S385>/Constant'
     *  Logic: '<S358>/Logical Operator2'
     *  Logic: '<S358>/Logical Operator6'
     *  RelationalOperator: '<S384>/RelOp'
     *  RelationalOperator: '<S385>/RelOp'
     *  S-Function (motohawk_sfun_data_read): '<S358>/motohawk_data_read3'
     */
    rtb_LogicalOperator8_c = (((!rtb_LogicalOperator6_p) &&
      rtb_LogicalOperator1_ou && ((((uint8_T)EngineState_DataStore()) == 3) ||
                                (((uint8_T)EngineState_DataStore()) == 2))));

    /* S-Function (motohawk_sfun_fault_def): '<S358>/motohawk_fault_def3' */

    /* Set Fault Suspected Status: Lambda2VoltHigh_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(112, rtb_LogicalOperator8_c);
      UpdateFault(112);
    }

    /* Logic: '<S358>/Logical Operator13' incorporates:
     *  Logic: '<S358>/Logical Operator12'
     *  S-Function (motohawk_sfun_data_read): '<S358>/motohawk_data_read'
     *  S-Function (motohawk_sfun_fault_status): '<S358>/motohawk_fault_status6'
     */
    rtb_LogicalOperator6_p = (IsFaultActive(115) || (!BankB_Enbl_DataStore()));

    /* RelationalOperator: '<S358>/Relational Operator3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S358>/motohawk_calibration3'
     */
    rtb_LogicalOperator1_ou = (BaseEngineController_LS_112_B.s486_SystemVolts_f <=
                               (Lambda2_VoltLowThresh_DataStore()));

    /* Logic: '<S358>/Logical Operator11' incorporates:
     *  Constant: '<S386>/Constant'
     *  Constant: '<S387>/Constant'
     *  Logic: '<S358>/Logical Operator10'
     *  Logic: '<S358>/Logical Operator9'
     *  RelationalOperator: '<S386>/RelOp'
     *  RelationalOperator: '<S387>/RelOp'
     *  S-Function (motohawk_sfun_data_read): '<S358>/motohawk_data_read4'
     */
    rtb_LogicalOperator11_p = (((!rtb_LogicalOperator6_p) &&
      rtb_LogicalOperator1_ou && ((((uint8_T)EngineState_DataStore()) == 3) ||
                                 (((uint8_T)EngineState_DataStore()) == 2))));

    /* S-Function (motohawk_sfun_fault_def): '<S358>/motohawk_fault_def4' */

    /* Set Fault Suspected Status: Lambda2VoltLow_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(113, rtb_LogicalOperator11_p);
      UpdateFault(113);
    }

    /* Logic: '<S305>/Logical Operator5' incorporates:
     *  Logic: '<S305>/Logical Operator4'
     *  S-Function (motohawk_sfun_fault_status): '<S305>/motohawk_fault_status1'
     *  S-Function (motohawk_sfun_fault_status): '<S305>/motohawk_fault_status2'
     *  S-Function (motohawk_sfun_fault_status): '<S305>/motohawk_fault_status3'
     *  S-Function (motohawk_sfun_fault_status): '<S305>/motohawk_fault_status4'
     */
    rtb_LogicalOperator3_aq = !(IsFaultActive(33) || IsFaultActive(32) ||
      IsFaultActive(29) || IsFaultActive(30));

    /* DataTypeConversion: '<S305>/Data Type Conversion' */
    if (rtIsNaN(BaseEngineController_LS_112_B.s481_RPMInst) || rtIsInf
        (BaseEngineController_LS_112_B.s481_RPMInst)) {
      u = 0.0;
    } else {
      u = fmod(floor(BaseEngineController_LS_112_B.s481_RPMInst), 65536.0);
    }

    rtb_DataTypeConversion_cg = (int16_T)(u < 0.0 ? (int16_T)-(int16_T)(uint16_T)
      -u : (int16_T)(uint16_T)u);

    /* End of DataTypeConversion: '<S305>/Data Type Conversion' */
    /* RelationalOperator: '<S389>/LT' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S388>/motohawk_calibration'
     */
    rtb_RelOp_ie = (rtb_DataTypeConversion_cg >= ((int16_T)
      (BaseRevLimit_DataStore())));

    /* Sum: '<S388>/Sum2' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S388>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S388>/motohawk_calibration1'
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

    rtb_Sum4_l = (int16_T)i;

    /* End of Sum: '<S388>/Sum2' */

    /* RelationalOperator: '<S389>/LT1' */
    rtb_Overspeed2 = (rtb_DataTypeConversion_cg <= rtb_Sum4_l);

    /* CombinatorialLogic: '<S392>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_RelOp_ie != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_Overspeed2 != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_m[0] =
        BaseEngineController_LS_112_ConstP.pooled896[rowidx];
      rtb_CombinatorialLogic_m[1] =
        BaseEngineController_LS_112_ConstP.pooled896[rowidx + 4];
    }

    /* Switch: '<S392>/Switch1' incorporates:
     *  UnitDelay: '<S392>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_m[1]) {
      rtb_RelationalOperator3_i2 = rtb_CombinatorialLogic_m[0];
    } else {
      rtb_RelationalOperator3_i2 =
        BaseEngineController_LS_112_DWork.s392_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S392>/Switch1' */

    /* Switch: '<S389>/Switch2' incorporates:
     *  Logic: '<S389>/Logical Operator'
     *  S-Function (motohawk_sfun_calibration): '<S388>/motohawk_calibration'
     */
    if (!rtb_RelationalOperator3_i2) {
      rtb_Sum4_l = ((int16_T)(BaseRevLimit_DataStore()));
    }

    /* End of Switch: '<S389>/Switch2' */

    /* RelationalOperator: '<S388>/Overspeed' */
    rtb_LogicalOperator6_p = (rtb_DataTypeConversion_cg > rtb_Sum4_l);

    /* Sum: '<S388>/Sum3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S388>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S388>/motohawk_calibration2'
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

    rtb_Sum4_l = (int16_T)i;

    /* End of Sum: '<S388>/Sum3' */

    /* RelationalOperator: '<S390>/LT' */
    rtb_RelOp_ie = (rtb_DataTypeConversion_cg >= rtb_Sum4_l);

    /* Sum: '<S388>/Sum1' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S388>/motohawk_calibration1'
     */
    i = rtb_Sum4_l - ((int16_T)(RevLimitHyst_DataStore()));
    if (i > 32767) {
      i = 32767;
    } else {
      if (i <= -32768) {
        i = -32768;
      }
    }

    rtb_Switch2_hy = (int16_T)i;

    /* End of Sum: '<S388>/Sum1' */

    /* RelationalOperator: '<S390>/LT1' */
    rtb_Overspeed2 = (rtb_DataTypeConversion_cg <= rtb_Switch2_hy);

    /* CombinatorialLogic: '<S393>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_RelOp_ie != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_Overspeed2 != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_m[0] =
        BaseEngineController_LS_112_ConstP.pooled896[rowidx];
      rtb_CombinatorialLogic_m[1] =
        BaseEngineController_LS_112_ConstP.pooled896[rowidx + 4];
    }

    /* Switch: '<S393>/Switch1' incorporates:
     *  UnitDelay: '<S393>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_m[1]) {
      rtb_LogicalOperator_af = rtb_CombinatorialLogic_m[0];
    } else {
      rtb_LogicalOperator_af =
        BaseEngineController_LS_112_DWork.s393_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S393>/Switch1' */

    /* Switch: '<S390>/Switch2' incorporates:
     *  Logic: '<S390>/Logical Operator'
     */
    if (rtb_LogicalOperator_af) {
      rtb_Sum4_l = rtb_Switch2_hy;
    }

    /* End of Switch: '<S390>/Switch2' */

    /* RelationalOperator: '<S388>/Overspeed1' */
    rtb_RelOp_ie = (rtb_DataTypeConversion_cg > rtb_Sum4_l);

    /* Logic: '<S305>/Logical Operator1' incorporates:
     *  Logic: '<S388>/Logical Operator3'
     *  Logic: '<S388>/Logical Operator4'
     */
    rtb_LogicalOperator1_i1 = ((rtb_LogicalOperator3_aq &&
      (rtb_LogicalOperator6_p && (!rtb_RelOp_ie))));

    /* S-Function (motohawk_sfun_fault_def): '<S305>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: SoftOverspeed */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(141, rtb_LogicalOperator1_i1);
      UpdateFault(141);
    }

    /* Sum: '<S388>/Sum5' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S388>/motohawk_calibration'
     *  S-Function (motohawk_sfun_calibration): '<S388>/motohawk_calibration4'
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

    rtb_Switch2_hy = (int16_T)i;

    /* End of Sum: '<S388>/Sum5' */

    /* RelationalOperator: '<S391>/LT' */
    rtb_Overspeed2 = (rtb_DataTypeConversion_cg >= rtb_Switch2_hy);

    /* Sum: '<S388>/Sum4' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S388>/motohawk_calibration1'
     */
    i = rtb_Switch2_hy - ((int16_T)(RevLimitHyst_DataStore()));
    if (i > 32767) {
      i = 32767;
    } else {
      if (i <= -32768) {
        i = -32768;
      }
    }

    rtb_Sum4_l = (int16_T)i;

    /* End of Sum: '<S388>/Sum4' */

    /* RelationalOperator: '<S391>/LT1' */
    rtb_BelowLoTarget_jl = (rtb_DataTypeConversion_cg <= rtb_Sum4_l);

    /* CombinatorialLogic: '<S394>/Combinatorial  Logic' */
    {
      uint_T rowidx= 0;

      /* Compute the truth table row index corresponding to the input */
      rowidx = (rowidx << 1) + (uint_T)(rtb_Overspeed2 != 0);
      rowidx = (rowidx << 1) + (uint_T)(rtb_BelowLoTarget_jl != 0);

      /* Copy the appropriate row of the table into the block output vector */
      rtb_CombinatorialLogic_m[0] =
        BaseEngineController_LS_112_ConstP.pooled896[rowidx];
      rtb_CombinatorialLogic_m[1] =
        BaseEngineController_LS_112_ConstP.pooled896[rowidx + 4];
    }

    /* Switch: '<S394>/Switch1' incorporates:
     *  UnitDelay: '<S394>/Unit Delay'
     */
    if (rtb_CombinatorialLogic_m[1]) {
      rtb_Switch1_m = rtb_CombinatorialLogic_m[0];
    } else {
      rtb_Switch1_m = BaseEngineController_LS_112_DWork.s394_UnitDelay_DSTATE;
    }

    /* End of Switch: '<S394>/Switch1' */

    /* Switch: '<S391>/Switch2' incorporates:
     *  Logic: '<S391>/Logical Operator'
     */
    if (rtb_Switch1_m) {
      rtb_Switch2_hy = rtb_Sum4_l;
    }

    /* End of Switch: '<S391>/Switch2' */

    /* RelationalOperator: '<S388>/Overspeed2' */
    rtb_Overspeed2 = (rtb_DataTypeConversion_cg > rtb_Switch2_hy);

    /* Logic: '<S305>/Logical Operator2' incorporates:
     *  Logic: '<S388>/Logical Operator5'
     *  Logic: '<S388>/Logical Operator6'
     */
    rtb_LogicalOperator2_ba = ((rtb_LogicalOperator3_aq && (rtb_RelOp_ie &&
      (!rtb_Overspeed2))));

    /* S-Function (motohawk_sfun_fault_def): '<S305>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: MediumOverspeed */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(127, rtb_LogicalOperator2_ba);
      UpdateFault(127);
    }

    /* Logic: '<S305>/Logical Operator3' */
    rtb_LogicalOperator3_nh = ((rtb_LogicalOperator3_aq && rtb_Overspeed2));

    /* S-Function (motohawk_sfun_fault_def): '<S305>/motohawk_fault_def3' */

    /* Set Fault Suspected Status: HardOverspeed */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(83, rtb_LogicalOperator3_nh);
      UpdateFault(83);
    }

    /* Logic: '<S306>/Logical Operator3' incorporates:
     *  Logic: '<S306>/Logical Operator1'
     *  S-Function (motohawk_sfun_fault_status): '<S306>/motohawk_fault_status'
     *  S-Function (motohawk_sfun_fault_status): '<S306>/motohawk_fault_status1'
     */
    rtb_LogicalOperator3_aq = !(IsFaultActive(73) || IsFaultActive(74) ||
      BaseEngineController_LS_112_B.s518_Merge);

    /* Sum: '<S306>/Sum3' incorporates:
     *  S-Function (motohawk_sfun_calibration): '<S306>/motohawk_calibration2'
     */
    rtb_motohawk_interpolation_1d3_m3 = BaseEngineController_LS_112_B.s446_Sum3
      - (FuelPres_DeltaTarget_DataStore());

    /* Logic: '<S306>/Logical Operator4' incorporates:
     *  Gain: '<S306>/invert'
     *  RelationalOperator: '<S306>/Relational Operator1'
     *  S-Function (motohawk_sfun_calibration): '<S306>/motohawk_calibration3'
     */
    rtb_LogicalOperator4_bi = ((rtb_LogicalOperator3_aq &&
      (rtb_motohawk_interpolation_1d3_m3 < -(FuelPres_DeltaTolerance_DataStore()))));

    /* S-Function (motohawk_sfun_fault_def): '<S306>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: FuelPresLow_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(72, rtb_LogicalOperator4_bi);
      UpdateFault(72);
    }

    /* Logic: '<S306>/Logical Operator2' incorporates:
     *  RelationalOperator: '<S306>/Relational Operator3'
     *  S-Function (motohawk_sfun_calibration): '<S306>/motohawk_calibration3'
     */
    rtb_LogicalOperator2_kr = ((rtb_LogicalOperator3_aq &&
      (rtb_motohawk_interpolation_1d3_m3 > (FuelPres_DeltaTolerance_DataStore()))));

    /* S-Function (motohawk_sfun_fault_def): '<S306>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: FuelPresHigh_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(71, rtb_LogicalOperator2_kr);
      UpdateFault(71);
    }

    /* Logic: '<S297>/Logical Operator3' incorporates:
     *  Logic: '<S297>/Logical Operator1'
     *  S-Function (motohawk_sfun_fault_status): '<S297>/motohawk_fault_status'
     *  S-Function (motohawk_sfun_fault_status): '<S297>/motohawk_fault_status1'
     */
    rtb_LogicalOperator3_aq = !(IsFaultActive(43) || IsFaultActive(44));

    /* RelationalOperator: '<S312>/RelOp' incorporates:
     *  Constant: '<S312>/Constant'
     *  S-Function (motohawk_sfun_data_read): '<S297>/motohawk_data_read'
     */
    rtb_RelOp_ie = (((uint8_T)EngineState_DataStore()) == 3);

    /* Logic: '<S297>/Logical Operator2' incorporates:
     *  RelationalOperator: '<S297>/Relational Operator3'
     *  S-Function (motohawk_sfun_calibration): '<S297>/motohawk_calibration2'
     */
    rtb_LogicalOperator2_pb = ((rtb_LogicalOperator3_aq && rtb_RelOp_ie &&
      (BaseEngineController_LS_112_B.s665_Merge >= (TempOverheat_Fault_DataStore
                                  ()))));

    /* S-Function (motohawk_sfun_fault_def): '<S297>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: ECTOverTempFault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(42, rtb_LogicalOperator2_pb);
      UpdateFault(42);
    }

    /* Logic: '<S297>/Logical Operator4' incorporates:
     *  RelationalOperator: '<S297>/Relational Operator2'
     *  S-Function (motohawk_sfun_calibration): '<S297>/motohawk_calibration3'
     */
    rtb_LogicalOperator4_ge = ((rtb_LogicalOperator3_aq && rtb_RelOp_ie &&
      (BaseEngineController_LS_112_B.s665_Merge >=
       (TempOverheatSevere_Fault_DataStore()))));

    /* S-Function (motohawk_sfun_fault_def): '<S297>/motohawk_fault_def2' */

    /* Set Fault Suspected Status: ECTSevereOverTempFault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(45, rtb_LogicalOperator4_ge);
      UpdateFault(45);
    }

    /* S-Function (motohawk_sfun_calibration): '<S297>/motohawk_calibration1' */
    rtb_motohawk_interpolation_1d3_m3 = (TempOverheat_Warn_DataStore());

    /* Gain: '<S298>/inj//min to inj//hr' incorporates:
     *  DataTypeConversion: '<S298>/Data Type Conversion'
     *  Product: '<S298>/RPM to inj//min'
     *  S-Function (motohawk_sfun_data_read): '<S298>/Number of Combustion Events Per Revolution'
     */
    rtb_DataTypeConversion1_j = BaseEngineController_LS_112_B.s555_Sum1 *
      (real_T)((uint8_T)CombEventsPerRev_DataStore()) * 60.0;

    /* Gain: '<S313>/Gain' */
    rtb_motohawk_interpolation_1d3_m3 = 0.01 *
      BaseEngineController_LS_112_B.s577_Merge;

    /* Gain: '<S298>/g to mg' incorporates:
     *  Constant: '<S313>/ '
     *  Constant: '<S313>/ Ethanol density (g//ml)'
     *  Constant: '<S313>/ Gasoline density (g//ml)'
     *  Product: '<S313>/Product1'
     *  Product: '<S313>/Product2'
     *  Sum: '<S313>/Add'
     *  Sum: '<S313>/Add1'
     */
    rtb_DataTypeConversion_ep = ((1.0 - rtb_motohawk_interpolation_1d3_m3) *
      0.737 + 0.789 * rtb_motohawk_interpolation_1d3_m3) * 1000.0;
    for (i = 0; i < 8; i++) {
      /* Gain: '<S298>/ml//hr to gal//hr' incorporates:
       *  Product: '<S298>/Mass flow to Volume flow mg//hr to ml//hr'
       *  Product: '<S298>/inj//hr to mg//hr'
       */
      u = rtb_DataTypeConversion1_j * BaseEngineController_LS_112_B.s92_FPC[i] /
        rtb_DataTypeConversion_ep * 0.00026417205263729591;

      /* RelationalOperator: '<S298>/Relational Operator7' incorporates:
       *  Constant: '<S298>/Min fuel flow  for calc'
       */
      rtb_LogicalOperator_ow[i] = (u > 0.1);

      /* Gain: '<S298>/ml//hr to gal//hr' */
      rtb_Product1_fy[i] = u;
    }

    /* Outputs for Enabled SubSystem: '<S298>/Multiply and Divide, avoiding divde by zero1' incorporates:
     *  EnablePort: '<S315>/Enable'
     */
    if (rtb_LogicalOperator_ow[0] || rtb_LogicalOperator_ow[1] ||
        rtb_LogicalOperator_ow[2] || rtb_LogicalOperator_ow[3] ||
        rtb_LogicalOperator_ow[4] || rtb_LogicalOperator_ow[5] ||
        rtb_LogicalOperator_ow[6] || rtb_LogicalOperator_ow[7]) {
      /* Product: '<S315>/charge mass' */
      for (i = 0; i < 8; i++) {
        BaseEngineController_LS_112_B.s315_chargemass[i] =
          BaseEngineController_LS_112_B.s454_Switch2 / rtb_Product1_fy[i];
      }

      /* End of Product: '<S315>/charge mass' */
    }

    /* End of Outputs for SubSystem: '<S298>/Multiply and Divide, avoiding divde by zero1' */

    /* Switch: '<S298>/Default (if no flow)' incorporates:
     *  Constant: '<S298>/Default value'
     */
    for (i = 0; i < 8; i++) {
      if (rtb_LogicalOperator_ow[i]) {
        BaseEngineController_LS_112_B.s298_Defaultifnoflow[i] =
          BaseEngineController_LS_112_B.s315_chargemass[i];
      } else {
        BaseEngineController_LS_112_B.s298_Defaultifnoflow[i] = 0.0;
      }
    }

    /* End of Switch: '<S298>/Default (if no flow)' */

    /* S-Function Block: <S314>/motohawk_delta_time */
    {
      uint32_T delta;
      extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (uint32_T * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
      delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
        (&BaseEngineController_LS_112_DWork.s314_motohawk_delta_time_DWORK1,
         NULL);
      rtb_motohawk_interpolation_1d3_m3 = ((real_T) delta) * 0.000001;
    }

    /* Product: '<S314>/Product' incorporates:
     *  MinMax: '<S314>/MinMax'
     *  S-Function (motohawk_sfun_calibration): '<S314>/motohawk_calibration2'
     */
    rtb_motohawk_interpolation_1d3_m3 /= (rtb_motohawk_interpolation_1d3_m3 >=
      (FuelEconomy_FilterC_DataStore())) || rtIsNaN
      ((FuelEconomy_FilterC_DataStore())) ? rtb_motohawk_interpolation_1d3_m3 :
      (FuelEconomy_FilterC_DataStore());

    /* Sum: '<S316>/Sum' incorporates:
     *  Constant: '<S316>/Constant'
     */
    rtb_DataTypeConversion1_j = 1.0 - rtb_motohawk_interpolation_1d3_m3;

    /* Sum: '<S316>/Sum1' incorporates:
     *  Product: '<S316>/Product'
     *  Product: '<S316>/Product1'
     *  UnitDelay: '<S316>/Unit Delay'
     */
    for (i = 0; i < 8; i++) {
      BaseEngineController_LS_112_B.s316_Sum1[i] =
        BaseEngineController_LS_112_B.s298_Defaultifnoflow[i] *
        rtb_motohawk_interpolation_1d3_m3 + rtb_DataTypeConversion1_j *
        BaseEngineController_LS_112_DWork.s316_UnitDelay_DSTATE[i];
    }

    /* End of Sum: '<S316>/Sum1' */

    /* Logic: '<S300>/Logical Operator1' incorporates:
     *  S-Function (motohawk_sfun_fault_status): '<S300>/motohawk_fault_status'
     *  S-Function (motohawk_sfun_fault_status): '<S300>/motohawk_fault_status1'
     */
    rtb_LogicalOperator6_p = (IsFaultActive(135) || IsFaultActive(136));

    /* RelationalOperator: '<S318>/RelOp' incorporates:
     *  Constant: '<S318>/Constant'
     */
    rtb_LogicalOperator1_ou = (BaseEngineController_LS_112_B.s466_State == 3);

    /* S-Function Block: <S300>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_be = TableInterpolation1D_real_T
        (BaseEngineController_LS_112_B.s435_motohawk_prelookup1, (real_T *)
         ((MinOilPressure_FaultTbl_DataStore())), 9);
      (MinOilPressure_Fault_DataStore()) = rtb_motohawk_interpolation_1d_be;
    }

    /* Logic: '<S300>/Logical Operator4' incorporates:
     *  Logic: '<S300>/Logical Operator3'
     *  RelationalOperator: '<S300>/Relational Operator2'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S300>/motohawk_interpolation_1d'
     */
    rtb_LogicalOperator4_px = (((!rtb_LogicalOperator6_p) &&
      rtb_LogicalOperator1_ou && (BaseEngineController_LS_112_B.s616_Merge <
      rtb_motohawk_interpolation_1d_be)));

    /* S-Function (motohawk_sfun_fault_def): '<S300>/motohawk_fault_def1' */

    /* Set Fault Suspected Status: NoOil_Fault */
    {
      extern void SetFaultSuspected(uint32_T fault, boolean_T val);
      extern void UpdateFault(uint32_T fault);
      SetFaultSuspected(128, rtb_LogicalOperator4_px);
      UpdateFault(128);
    }

    /* S-Function Block: <S300>/motohawk_interpolation_1d3 */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d3_m3 = TableInterpolation1D_real_T
        (BaseEngineController_LS_112_B.s435_motohawk_prelookup1, (real_T *)
         ((MinOilPressure_WarnTbl_DataStore())), 9);
      (MinOilPressure_Warn_DataStore()) = rtb_motohawk_interpolation_1d3_m3;
    }

    /* Update for UnitDelay: '<S392>/Unit Delay' */
    BaseEngineController_LS_112_DWork.s392_UnitDelay_DSTATE =
      rtb_RelationalOperator3_i2;

    /* Update for UnitDelay: '<S393>/Unit Delay' */
    BaseEngineController_LS_112_DWork.s393_UnitDelay_DSTATE =
      rtb_LogicalOperator_af;

    /* Update for UnitDelay: '<S394>/Unit Delay' */
    BaseEngineController_LS_112_DWork.s394_UnitDelay_DSTATE = rtb_Switch1_m;

    /* Update for UnitDelay: '<S316>/Unit Delay' */
    memcpy((void *)BaseEngineController_LS_112_DWork.s316_UnitDelay_DSTATE,
           (void *)(&BaseEngineController_LS_112_B.s316_Sum1[0]), sizeof(real_T)
           << 3U);

    /* End of Outputs for SubSystem: '<S11>/Diagnostics' */
  } else {
    if (BaseEngineController_LS_112_DWork.s477_TriggeredSubsystem_MODE) {
      /* Disable for Function Call SubSystem: '<S11>/Diagnostics' */
      /* Disable for Enabled SubSystem: '<S303>/MisfireDiagSub' */

      /* Level2 S-Function Block: '<S324>/motohawk_trigger' (motohawk_sfun_trigger) */
      /* Disable for Trigger_FGND_HIRES_6521p0004 */
      BaseEngineController_LS_112_DWork.s324_motohawk_trigger_DWORK1 = 0;
      BaseEngineController_LS_112_DWork.s303_MisfireDiagSub_MODE = FALSE;

      /* End of Disable for SubSystem: '<S303>/MisfireDiagSub' */
      /* End of Disable for SubSystem: '<S11>/Diagnostics' */
      BaseEngineController_LS_112_DWork.s477_TriggeredSubsystem_MODE = FALSE;
    }
  }

  /* Saturate: '<S408>/Saturation' */
  rtb_Saturation_i = rtb_Switch_k >= 16000.0 ? 16000.0 : rtb_Switch_k <= 0.0 ?
    0.0 : rtb_Switch_k;

  /* S-Function (motohawk_sfun_data_write): '<S408>/motohawk_data_write' */
  /* Write to Data Storage as scalar: BaroLearnTmr */
  {
    BaroLearnTmr_DataStore() = rtb_Saturation_i;
  }

  /* RelationalOperator: '<S411>/Compare' incorporates:
   *  Constant: '<S411>/Constant'
   */
  rtb_LogicalOperator6_p = (BaseEngineController_LS_112_B.s466_State == 3);

  /* Logic: '<S404>/Logical Operator1' incorporates:
   *  S-Function (motohawk_sfun_fault_action): '<S404>/motohawk_fault_action1'
   */
  rtb_LogicalOperator1_ou = !GetFaultActionStatus(7);

  /* RelationalOperator: '<S404>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S404>/motohawk_calibration2'
   */
  rtb_Switch1_m = (BaseEngineController_LS_112_B.s665_Merge >=
                   (VEAdaptTemp_DataStore()));

  /* RelationalOperator: '<S404>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S404>/motohawk_calibration3'
   */
  rtb_RelationalOperator3_i2 = (BaseEngineController_LS_112_B.s471_Switch >=
    (VEAdaptTime_DataStore()));

  /* Logic: '<S404>/Logical Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S404>/motohawk_calibration'
   */
  BaseEngineController_LS_112_B.s404_LogicalOperator = ((rtb_LogicalOperator6_p &&
    rtb_LogicalOperator1_ou &&
    BaseEngineController_LS_112_B.s420_LogicalOperator && rtb_Switch1_m &&
    rtb_RelationalOperator3_i2 && (VEAdaptEnable_DataStore())));

  /* Outputs for Enabled SubSystem: '<S404>/Adapt VolEff Map' incorporates:
   *  EnablePort: '<S409>/Enable'
   */
  if (BaseEngineController_LS_112_B.s404_LogicalOperator) {
    /* Product: '<S409>/Divide' incorporates:
     *  Sum: '<S409>/Add'
     */
    rtb_Divide_l = (BaseEngineController_LS_112_B.s525_Merge -
                    BaseEngineController_LS_112_B.s404_ModelAirMassFlowRate) /
      BaseEngineController_LS_112_B.s404_ModelAirMassFlowRate;

    /* S-Function Block: <S412>/motohawk_prelookup */
    {
      extern uint16_T TablePrelookup_real_T(real_T in, const volatile real_T
        ordarr[], uint32_T sz, uint16_T prev);
      (VE_AdaptErrorIdxArrIn_DataStore()) = rtb_Divide_l;
      (VE_AdaptErrorIdxArrIdx_DataStore()) = TablePrelookup_real_T(rtb_Divide_l,
        (VE_AdaptErrorIdxArrIdxArr_DataStore()), 10,
        (VE_AdaptErrorIdxArrIdx_DataStore()));
      rtb_motohawk_prelookup_l = (VE_AdaptErrorIdxArrIdx_DataStore());
    }

    /* S-Function Block: <S412>/motohawk_interpolation_1d */
    {
      extern real_T TableInterpolation1D_real_T(uint16_T idx, real_T *tbl_data,
        uint32_T sz);
      rtb_motohawk_interpolation_1d_k = TableInterpolation1D_real_T
        (rtb_motohawk_prelookup_l, (real_T *) ((VEAdaptGainTblTbl_DataStore())),
         10);
      (VEAdaptGainTbl_DataStore()) = rtb_motohawk_interpolation_1d_k;
    }

    /* Product: '<S409>/Divide1' incorporates:
     *  Product: '<S409>/Divide2'
     *  S-Function (motohawk_sfun_interpolation_1d): '<S412>/motohawk_interpolation_1d'
     *  S-Function (motohawk_sfun_prelookup): '<S412>/motohawk_prelookup'
     */
    rtb_Divide1 = BaseEngineController_LS_112_B.s404_Sum * rtb_Divide_l *
      rtb_motohawk_interpolation_1d_k;

    /* S-Function Block: <S409>/motohawk_adapt_table */
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

  /* End of Outputs for SubSystem: '<S404>/Adapt VolEff Map' */

  /* Outputs for Enabled SubSystem: '<S396>/FuelLevelWrite' incorporates:
   *  EnablePort: '<S416>/Enable'
   */
  if (rtb_RelationalOperator_kc) {
    /* S-Function (motohawk_sfun_data_write): '<S416>/motohawk_data_write' */
    /* Write to Data Storage as scalar: FuelLvl_NVM */
    {
      FuelLvl_NVM_DataStore() = BaseEngineController_LS_112_B.s415_Sum1;
    }
  }

  /* End of Outputs for SubSystem: '<S396>/FuelLevelWrite' */

  /* UnitDelay: '<S421>/Unit Delay1' */
  rtb_DesiredLambda_idx =
    BaseEngineController_LS_112_DWork.s421_UnitDelay1_DSTATE;

  /* UnitDelay: '<S421>/Unit Delay3' */
  rtb_DesiredLambda_idx_0 =
    BaseEngineController_LS_112_DWork.s421_UnitDelay3_DSTATE;

  /* UnitDelay: '<S421>/Unit Delay4' */
  rtb_DesiredLambda_idx_1 =
    BaseEngineController_LS_112_DWork.s421_UnitDelay4_DSTATE;

  /* UnitDelay: '<S422>/Unit Delay1' */
  rtb_UnitDelay1_kr = BaseEngineController_LS_112_DWork.s422_UnitDelay1_DSTATE;

  /* UnitDelay: '<S422>/Unit Delay3' */
  rtb_UnitDelay3_g = BaseEngineController_LS_112_DWork.s422_UnitDelay3_DSTATE;

  /* UnitDelay: '<S422>/Unit Delay4' */
  rtb_UnitDelay4_gs = BaseEngineController_LS_112_DWork.s422_UnitDelay4_DSTATE;

  /* Sum: '<S439>/Sum' */
  rtb_Abs_iy = rtb_APP1 - rtb_APP2;

  /* Abs: '<S439>/Abs' */
  rtb_Abs_iy = fabs(rtb_Abs_iy);

  /* RelationalOperator: '<S439>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S439>/motohawk_calibration2'
   */
  rtb_RelationalOperator3_bo = ((rtb_Abs_iy > (APP1_APP2_Max_Deviation_DataStore
                                  ())));

  /* S-Function (motohawk_sfun_fault_def): '<S439>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: APP_Sensors_Conflict */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(20, rtb_RelationalOperator3_bo);
    UpdateFault(20);
  }

  /* S-Function (motohawk_sfun_data_write): '<S445>/motohawk_data_write' */
  /* Write to Data Storage as scalar: EngineState */
  {
    EngineState_DataStore() = BaseEngineController_LS_112_B.s466_State;
  }

  /* Sum: '<S450>/Sum' */
  rtb_Abs_iy = BaseEngineController_LS_112_B.s768_Merge -
    BaseEngineController_LS_112_B.s785_Merge;

  /* Abs: '<S450>/Abs' */
  rtb_Abs_iy = fabs(rtb_Abs_iy);

  /* RelationalOperator: '<S450>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S450>/motohawk_calibration2'
   */
  rtb_RelationalOperator3_h0 = ((rtb_Abs_iy > (TPS1_TPS2_Max_Deviation_DataStore
                                  ())));

  /* S-Function (motohawk_sfun_fault_def): '<S450>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: TPS_Sensors_Conflict */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(156, rtb_RelationalOperator3_h0);
    UpdateFault(156);
  }

  /* Saturate: '<S469>/Saturation' */
  rtb_Saturation_ci = BaseEngineController_LS_112_B.s469_Sum >= 16000.0 ?
    16000.0 : BaseEngineController_LS_112_B.s469_Sum <= 0.0 ? 0.0 :
    BaseEngineController_LS_112_B.s469_Sum;

  /* S-Function (motohawk_sfun_data_write): '<S469>/motohawk_data_write' */
  /* Write to Data Storage as scalar: TimeSinceKeyOnTimer */
  {
    TimeSinceKeyOnTimer_DataStore() = rtb_Saturation_ci;
  }

  /* Saturate: '<S471>/Saturation' */
  rtb_Saturation_gu = BaseEngineController_LS_112_B.s471_Switch >= 16000.0 ?
    16000.0 : BaseEngineController_LS_112_B.s471_Switch <= 0.0 ? 0.0 :
    BaseEngineController_LS_112_B.s471_Switch;

  /* S-Function (motohawk_sfun_data_write): '<S471>/motohawk_data_write' */
  /* Write to Data Storage as scalar: TimeSinceRunTimer */
  {
    TimeSinceRunTimer_DataStore() = rtb_Saturation_gu;
  }

  /* Saturate: '<S473>/Saturation' */
  rtb_Saturation_fn = BaseEngineController_LS_112_B.s473_Switch >= 16000.0 ?
    16000.0 : BaseEngineController_LS_112_B.s473_Switch <= 0.0 ? 0.0 :
    BaseEngineController_LS_112_B.s473_Switch;

  /* S-Function (motohawk_sfun_data_write): '<S473>/motohawk_data_write' */
  /* Write to Data Storage as scalar: TimeSinceStallTimer */
  {
    TimeSinceStallTimer_DataStore() = rtb_Saturation_fn;
  }

  /* Switch: '<S477>/Switch' incorporates:
   *  Constant: '<S477>/Constant2'
   */
  if (rtb_RelationalOperator_e) {
    rtb_Switch_e0 = 0U;
  } else {
    rtb_Switch_e0 = rtb_Sum_bz;
  }

  /* End of Switch: '<S477>/Switch' */
  /* RelationalOperator: '<S485>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S485>/motohawk_calibration1'
   */
  rtb_RelationalOperator5_h =
    (BaseEngineController_LS_112_B.s485_ReadCANMessage1_o1 >= (uint32_T)
     ((uint16_T)(GPS_LatLong_Timeout_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S485>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: GPS_LatLong_Timeout */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(80, rtb_RelationalOperator5_h);
    UpdateFault(80);
  }

  /* RelationalOperator: '<S485>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S485>/motohawk_calibration'
   */
  rtb_RelationalOperator5_h =
    (BaseEngineController_LS_112_B.s485_ReadCANMessage_o1 >= (uint32_T)
     ((uint16_T)(GPS_DateTime_Timeout_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S485>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: GPS_DateTime_Timeout */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(79, rtb_RelationalOperator5_h);
    UpdateFault(79);
  }

  /* RelationalOperator: '<S485>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S485>/motohawk_calibration2'
   */
  rtb_RelationalOperator5_h =
    (BaseEngineController_LS_112_B.s485_ReadCANMessage2_o1 >= (uint32_T)
     ((uint16_T)(GPS_SpeedDir_Timeout_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S485>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: GPS_SpeedDir_Timeout */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(81, rtb_RelationalOperator5_h);
    UpdateFault(81);
  }

  /* RelationalOperator: '<S486>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S486>/motohawk_calibration1'
   */
  rtb_RelationalOperator5_h =
    (BaseEngineController_LS_112_B.s486_ReadCANMessage1_o1 >= (uint32_T)
     ((uint16_T)(Lambda_2_Timeout_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S486>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: Lambda_2_Timeout */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(115, rtb_RelationalOperator5_h);
    UpdateFault(115);
  }

  /* RelationalOperator: '<S486>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S486>/motohawk_calibration'
   */
  rtb_RelationalOperator5_h =
    (BaseEngineController_LS_112_B.s486_ReadCANMessage_o1 >= (uint32_T)
     ((uint16_T)(Lambda_1_Timeout_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S486>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: Lambda_1_Timeout */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(114, rtb_RelationalOperator5_h);
    UpdateFault(114);
  }

  /* Logic: '<S487>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S487>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S487>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S487>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_c = ((MPRD_DataStore() &&
    (BaseEngineController_LS_112_B.s486_MathFunction >
     (Bank1_EquivRatioInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S487>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: Bank1_EquivRatioRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(23, rtb_LogicalOperator2_c);
    UpdateFault(23);
  }

  /* Logic: '<S487>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S487>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S487>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S487>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_ki = ((MPRD_DataStore() &&
    (BaseEngineController_LS_112_B.s486_MathFunction <
     (Bank1_EquivRatioInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S487>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: Bank1_EquivRatioRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(24, rtb_LogicalOperator3_ki);
    UpdateFault(24);
  }

  /* Logic: '<S488>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S488>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S488>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S488>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_nf = ((MPRD_DataStore() &&
    (BaseEngineController_LS_112_B.s486_MathFunction1 >
     (Bank2_EquivRatioInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S488>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: Bank2_EquivRatioRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(25, rtb_LogicalOperator2_nf);
    UpdateFault(25);
  }

  /* Logic: '<S488>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S488>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S488>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S488>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_f = ((MPRD_DataStore() &&
    (BaseEngineController_LS_112_B.s486_MathFunction1 <
     (Bank2_EquivRatioInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S488>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: Bank2_EquivRatioRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(26, rtb_LogicalOperator3_f);
    UpdateFault(26);
  }

  /* Logic: '<S508>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S508>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S508>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S508>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_e1 = ((MPRD_DataStore() &&
    (BaseEngineController_LS_112_B.s480_Gain > (MAFMax_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S508>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: MAFRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(118, rtb_LogicalOperator2_e1);
    UpdateFault(118);
  }

  /* Logic: '<S508>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S508>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S508>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S508>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_cp = ((MPRD_DataStore() &&
    (BaseEngineController_LS_112_B.s480_Gain < (MAFMin_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S508>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: MAFRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(119, rtb_LogicalOperator3_cp);
    UpdateFault(119);
  }

  /* Saturate: '<S532>/Saturation' */
  rtb_Saturation_op = rtb_Switch_c >= 86400.0 ? 86400.0 : rtb_Switch_c <= 0.0 ?
    0.0 : rtb_Switch_c;

  /* S-Function (motohawk_sfun_data_write): '<S532>/motohawk_data_write' */
  /* Write to Data Storage as scalar: ScrambleDelay */
  {
    ScrambleDelay_DataStore() = rtb_Saturation_op;
  }

  /* Logic: '<S510>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S510>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S510>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S510>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_fo = ((MPRD_DataStore() &&
    (BaseEngineController_LS_112_B.s480_Gain1 > (VSPDMax_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S510>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: VSPDRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(157, rtb_LogicalOperator2_fo);
    UpdateFault(157);
  }

  /* Logic: '<S510>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S510>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S510>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S510>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_m2 = ((MPRD_DataStore() &&
    (BaseEngineController_LS_112_B.s480_Gain1 < (VSPDMin_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S510>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: VSPDRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(158, rtb_LogicalOperator3_m2);
    UpdateFault(158);
  }

  /* S-Function Block: <S546>/motohawk_delta_time */
  {
    uint32_T delta;
    extern uint32_T Timer_FreeRunningCounter_GetDeltaUpdateReference_us(uint32_T
      * pReference_lower32Bits, uint32_T *pReference_upper32Bits);
    delta = Timer_FreeRunningCounter_GetDeltaUpdateReference_us
      (&BaseEngineController_LS_112_DWork.s546_motohawk_delta_time_DWORK1, NULL);
    rtb_motohawk_delta_time_oe = ((real_T) delta) * 0.000001;
  }

  /* Switch: '<S546>/Switch' incorporates:
   *  Constant: '<S546>/Constant'
   *  S-Function (motohawk_sfun_data_read): '<S546>/motohawk_data_read'
   *  S-Function (motohawk_sfun_delta_time): '<S546>/motohawk_delta_time'
   *  Sum: '<S546>/Sum'
   */
  if (rtb_Logic_e[0]) {
    rtb_Abs_iy = rtb_motohawk_delta_time_oe + TimeSinceVSPDReject_DataStore();
  } else {
    rtb_Abs_iy = 0.0;
  }

  /* End of Switch: '<S546>/Switch' */
  /* RelationalOperator: '<S511>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S511>/motohawk_calibration6'
   */
  rtb_LogicalOperator1_b3 = (rtb_Abs_iy >= (real_T)((uint8_T)
    (VSPD_RejectHoldTime_DataStore())));

  /* Saturate: '<S546>/Saturation' */
  rtb_Saturation_ai = rtb_Abs_iy >= 16000.0 ? 16000.0 : rtb_Abs_iy <= 0.0 ? 0.0 :
    rtb_Abs_iy;

  /* S-Function (motohawk_sfun_data_write): '<S546>/motohawk_data_write' */
  /* Write to Data Storage as scalar: TimeSinceVSPDReject */
  {
    TimeSinceVSPDReject_DataStore() = rtb_Saturation_ai;
  }

  /* RelationalOperator: '<S481>/Relational Operator' incorporates:
   *  Constant: '<S481>/Constant'
   *  S-Function (motohawk_sfun_calibration): '<S481>/motohawk_calibration'
   */
  rtb_RelationalOperator_ou = ((0 != ((uint16_T)(PseudoRPM_DataStore()))));

  /* S-Function Block: <S481>/motohawk_encoder_pseudo */
  {
    CNK_Encoder_PseudoRPM_Set((rtb_RelationalOperator_ou) ?
      ((PseudoRPM_DataStore())) : 0);
  }

  /* DataTypeConversion: '<S481>/Data Type Conversion3' incorporates:
   *  Gain: '<S481>/Gain'
   *  S-Function (motohawk_sfun_calibration): '<S481>/motohawk_calibration1'
   */
  u = 16.0 * (EngineToEncoderOffset_DataStore());
  if (rtIsNaN(u) || rtIsInf(u)) {
    u = 0.0;
  } else {
    u = u < 0.0 ? ceil(u) : floor(u);
    u = fmod(u, 65536.0);
  }

  rtb_DataTypeConversion3_ie = (int16_T)(u < 0.0 ? (int16_T)-(int16_T)(uint16_T)
    -u : (int16_T)(uint16_T)u);

  /* End of DataTypeConversion: '<S481>/Data Type Conversion3' */
  /* S-Function Block: <S481>/motohawk_encoder_offset */
  {
    CNK_Encoder_SensingOffset_Set(rtb_DataTypeConversion3_ie);
  }

  /* RelationalOperator: '<S551>/RelOp' incorporates:
   *  Constant: '<S551>/Constant'
   */
  rtb_RelationalOperator5_h = (BaseEngineController_LS_112_B.s554_Sum > 100U);

  /* S-Function Block: <S481>/motohawk_encoder_fault */
  {
    extern uint8_T motohawk_encoder_fault;
    BaseEngineController_LS_112_B.s481_motohawk_encoder_fault =
      motohawk_encoder_fault;
  }

  /* Logic: '<S547>/Logical Operator' incorporates:
   *  Constant: '<S553>/Constant'
   *  RelationalOperator: '<S553>/RelOp'
   */
  rtb_LogicalOperator_eg = ((rtb_RelationalOperator5_h &&
    (BaseEngineController_LS_112_B.s481_motohawk_encoder_fault == 1)));

  /* S-Function (motohawk_sfun_fault_def): '<S547>/motohawk_fault_def' */

  /* Set Fault Suspected Status: CrankSyncFault */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(33, rtb_LogicalOperator_eg);
    UpdateFault(33);
  }

  /* Logic: '<S547>/Logical Operator1' incorporates:
   *  Constant: '<S552>/Constant'
   *  RelationalOperator: '<S552>/RelOp'
   */
  rtb_LogicalOperator1_l0 = ((rtb_RelationalOperator5_h &&
    (BaseEngineController_LS_112_B.s481_motohawk_encoder_fault == 3)));

  /* S-Function (motohawk_sfun_fault_def): '<S547>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: CrankEdgesFault */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(32, rtb_LogicalOperator1_l0);
    UpdateFault(32);
  }

  /* Logic: '<S547>/Logical Operator2' incorporates:
   *  Constant: '<S549>/Constant'
   *  RelationalOperator: '<S549>/RelOp'
   */
  rtb_LogicalOperator2_p2 = ((rtb_RelationalOperator5_h &&
    (BaseEngineController_LS_112_B.s481_motohawk_encoder_fault == 4)));

  /* S-Function (motohawk_sfun_fault_def): '<S547>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: CamEdgesFault */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(29, rtb_LogicalOperator2_p2);
    UpdateFault(29);
  }

  /* Logic: '<S547>/Logical Operator3' incorporates:
   *  Constant: '<S550>/Constant'
   *  RelationalOperator: '<S550>/RelOp'
   */
  rtb_LogicalOperator3_oi = ((rtb_RelationalOperator5_h &&
    (BaseEngineController_LS_112_B.s481_motohawk_encoder_fault == 5)));

  /* S-Function (motohawk_sfun_fault_def): '<S547>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: CamSyncFault */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(30, rtb_LogicalOperator3_oi);
    UpdateFault(30);
  }

  /* S-Function Block: <S481>/motohawk_encoder_state */
  {
    BaseEngineController_LS_112_B.s481_motohawk_encoder_state =
      CNK_Encoder_EncoderState_Get();
  }

  /* Logic: '<S556>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S556>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S556>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S556>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_kk = ((MPRD_DataStore() && (rtb_DataTypeConversion_nv >
    (ACPresInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S556>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: ACPresRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(2, rtb_LogicalOperator2_kk);
    UpdateFault(2);
  }

  /* Logic: '<S556>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S556>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S556>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S556>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_d5 = ((MPRD_DataStore() && (rtb_DataTypeConversion_nv <
    (ACPresInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S556>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: ACPresRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(3, rtb_LogicalOperator3_d5);
    UpdateFault(3);
  }

  /* Logic: '<S557>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S557>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S557>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S557>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_nl = ((MPRD_DataStore() && (rtb_DataTypeConversion_je >
    (FuelSensInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S557>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: FuelSensRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(75, rtb_LogicalOperator2_nl);
    UpdateFault(75);
  }

  /* Logic: '<S557>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S557>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S557>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S557>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_ck = ((MPRD_DataStore() && (rtb_DataTypeConversion_je <
    (FuelSensInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S557>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: FuelSensRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(76, rtb_LogicalOperator3_ck);
    UpdateFault(76);
  }

  /* Logic: '<S558>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S558>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S558>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S558>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_fa = ((MPRD_DataStore() && (rtb_DataTypeConversion_hg >
    (FuelPresInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S558>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: FuelPresRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(73, rtb_LogicalOperator2_fa);
    UpdateFault(73);
  }

  /* Logic: '<S558>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S558>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S558>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S558>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_mi = ((MPRD_DataStore() && (rtb_DataTypeConversion_hg <
    (FuelPresInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S558>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: FuelPresRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(74, rtb_LogicalOperator3_mi);
    UpdateFault(74);
  }

  /* Logic: '<S559>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S559>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S559>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S559>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_ce = ((MPRD_DataStore() &&
    (BaseEngineController_LS_112_B.s561_Merge > (MAPInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S559>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: MAPRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(120, rtb_LogicalOperator2_ce);
    UpdateFault(120);
  }

  /* Logic: '<S559>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S559>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S559>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S559>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_i = ((MPRD_DataStore() &&
    (BaseEngineController_LS_112_B.s561_Merge < (MAPInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S559>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: MAPRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(121, rtb_LogicalOperator3_i);
    UpdateFault(121);
  }

  /* Logic: '<S560>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S560>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S560>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S560>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_pe = ((MPRD_DataStore() && (rtb_DataTypeConversion_cr >
    (MAPTimeInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S560>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: MAPTimeRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(122, rtb_LogicalOperator2_pe);
    UpdateFault(122);
  }

  /* Logic: '<S560>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S560>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S560>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S560>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_fp = ((MPRD_DataStore() && (rtb_DataTypeConversion_cr <
    (MAPTimeInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S560>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: MAPTimeRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(123, rtb_LogicalOperator3_fp);
    UpdateFault(123);
  }

  /* Logic: '<S562>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S562>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S562>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S562>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_n0 = ((MPRD_DataStore() && (rtb_Switch4_c >
    (OilPresInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S562>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: OilPresRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(135, rtb_LogicalOperator2_n0);
    UpdateFault(135);
  }

  /* Logic: '<S562>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S562>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S562>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S562>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_dc = ((MPRD_DataStore() && (rtb_Switch4_c <
    (OilPresInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S562>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: OilPresRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(136, rtb_LogicalOperator3_dc);
    UpdateFault(136);
  }

  /* Logic: '<S563>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S563>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S563>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S563>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_ly = ((MPRD_DataStore() && (rtb_Abs_o >
    (SensVoltInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S563>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: SensVoltRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(138, rtb_LogicalOperator2_ly);
    UpdateFault(138);
  }

  /* Logic: '<S563>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S563>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S563>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S563>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_af = ((MPRD_DataStore() && (rtb_Abs_o <
    (SensVoltInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S563>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: SensVoltRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(139, rtb_LogicalOperator3_af);
    UpdateFault(139);
  }

  /* Logic: '<S564>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S564>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S564>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S564>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_i = ((MPRD_DataStore() && (rtb_DataTypeConversion_i >
    (SysVoltInputHiFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S564>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: SysVoltRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(142, rtb_LogicalOperator2_i);
    UpdateFault(142);
  }

  /* Logic: '<S564>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S564>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S564>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S564>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_nm = ((MPRD_DataStore() && (rtb_DataTypeConversion_i <
    (SysVoltInputLoFltPos_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S564>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: SysVoltRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(143, rtb_LogicalOperator3_nm);
    UpdateFault(143);
  }

  /* Logic: '<S688>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S688>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S688>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S688>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_eq = ((MPRD_DataStore() && (rtb_DataTypeConversion_dp >
    (APP1Max_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S688>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: APP1RangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(4, rtb_LogicalOperator2_eq);
    UpdateFault(4);
  }

  /* Logic: '<S688>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S688>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S688>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S688>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_cpj = ((MPRD_DataStore() && (rtb_DataTypeConversion_dp <
                                (APP1Min_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S688>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: APP1RangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(5, rtb_LogicalOperator3_cpj);
    UpdateFault(5);
  }

  /* S-Function (motohawk_sfun_trigger): '<S689>/motohawk_trigger' */
  /* Enable for Trigger_FGND_20XRTI_PERIODIC_9951p0004 */
  if (BaseEngineController_LS_112_DWork.s689_motohawk_trigger_DWORK1 == 0) {
    BaseEngineController_LS_112_DWork.s689_motohawk_trigger_DWORK1 = 1;
  }

  /* Logic: '<S689>/Logical Operator' incorporates:
   *  RelationalOperator: '<S689>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S689>/motohawk_calibration'
   *  S-Function (motohawk_sfun_data_read): '<S689>/motohawk_data_read1'
   */
  rtb_Switch1_m = (BaseEngineController_LS_112_B.s706_LogicalOperator &&
                   (APP1_AdaptADC_DataStore() < (APP1LowAdaptADCThresh_DataStore
                     ())));

  /* Logic: '<S689>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S689>/Relational Operator1'
   *  S-Function (motohawk_sfun_calibration): '<S689>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S689>/motohawk_data_read1'
   */
  rtb_LogicalOperator6_p = (BaseEngineController_LS_112_B.s706_LogicalOperator &&
                            (APP1_AdaptADC_DataStore() >
    (APP1HiAdaptADCThresh_DataStore())));

  /* Logic: '<S690>/Logical Operator2' incorporates:
   *  RelationalOperator: '<S690>/Relational Operator2'
   *  S-Function (motohawk_sfun_calibration): '<S690>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S690>/motohawk_data_read1'
   */
  rtb_LogicalOperator2_gq = ((MPRD_DataStore() && (rtb_DataTypeConversion_c5 >
    (APP2Max_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S690>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: APP2RangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(12, rtb_LogicalOperator2_gq);
    UpdateFault(12);
  }

  /* Logic: '<S690>/Logical Operator3' incorporates:
   *  RelationalOperator: '<S690>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S690>/motohawk_calibration6'
   *  S-Function (motohawk_sfun_data_read): '<S690>/motohawk_data_read1'
   */
  rtb_LogicalOperator3_ej = ((MPRD_DataStore() && (rtb_DataTypeConversion_c5 <
    (APP2Min_DataStore()))));

  /* S-Function (motohawk_sfun_fault_def): '<S690>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: APP2RangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(13, rtb_LogicalOperator3_ej);
    UpdateFault(13);
  }

  /* S-Function (motohawk_sfun_trigger): '<S691>/motohawk_trigger' */
  /* Enable for Trigger_FGND_20XRTI_PERIODIC_10085p0004 */
  if (BaseEngineController_LS_112_DWork.s691_motohawk_trigger_DWORK1 == 0) {
    BaseEngineController_LS_112_DWork.s691_motohawk_trigger_DWORK1 = 1;
  }

  /* Logic: '<S691>/Logical Operator' incorporates:
   *  RelationalOperator: '<S691>/Relational Operator'
   *  S-Function (motohawk_sfun_calibration): '<S691>/motohawk_calibration'
   *  S-Function (motohawk_sfun_data_read): '<S691>/motohawk_data_read1'
   */
  rtb_LogicalOperator_af = (BaseEngineController_LS_112_B.s718_LogicalOperator &&
                            (APP2_AdaptADC_DataStore() <
    (APP2LowAdaptADCThresh_DataStore())));

  /* Logic: '<S691>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S691>/Relational Operator1'
   *  S-Function (motohawk_sfun_calibration): '<S691>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S691>/motohawk_data_read1'
   */
  rtb_RelationalOperator3_i2 =
    (BaseEngineController_LS_112_B.s718_LogicalOperator &&
     (APP2_AdaptADC_DataStore() > (APP2HiAdaptADCThresh_DataStore())));

  /* RelationalOperator: '<S721>/Relational Operator5' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S721>/motohawk_calibration5'
   */
  rtb_RelationalOperator5_k = ((BaseEngineController_LS_112_B.s692_Switch >
    (APP1_AdaptInputHiFltPos_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S721>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: APP1_AdaptRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(10, rtb_RelationalOperator5_k);
    UpdateFault(10);
  }

  /* RelationalOperator: '<S721>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S721>/motohawk_calibration6'
   */
  rtb_RelationalOperator4_b = ((BaseEngineController_LS_112_B.s692_Switch <
    (APP1_AdaptInputLoFltPos_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S721>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: APP1_AdaptRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(11, rtb_RelationalOperator4_b);
    UpdateFault(11);
  }

  /* RelationalOperator: '<S721>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S692>/motohawk_calibration9'
   */
  rtb_RelationalOperator_au = ((BaseEngineController_LS_112_B.s720_MinMax >
    (APP1_AdaptAdapt_Low_Max_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S721>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: APP1_AdaptAdaptLoMax */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(8, rtb_RelationalOperator_au);
    UpdateFault(8);
  }

  /* RelationalOperator: '<S721>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S692>/motohawk_calibration12'
   */
  rtb_RelationalOperator3_app = ((BaseEngineController_LS_112_B.s720_MinMax1 >
    (APP1_AdaptAdapt_Hi_Max_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S721>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: APP1_AdaptAdaptHiMax */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(6, rtb_RelationalOperator3_app);
    UpdateFault(6);
  }

  /* RelationalOperator: '<S721>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S692>/motohawk_calibration11'
   */
  rtb_RelationalOperator2_mn = ((BaseEngineController_LS_112_B.s720_MinMax1 <
    (APP1_AdaptAdapt_Hi_Min_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S721>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: APP1_AdaptAdaptHiMin */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(7, rtb_RelationalOperator2_mn);
    UpdateFault(7);
  }

  /* RelationalOperator: '<S721>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S692>/motohawk_calibration10'
   */
  rtb_RelationalOperator1_fp = ((BaseEngineController_LS_112_B.s720_MinMax <
    (APP1_AdaptAdapt_Low_Min_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S721>/motohawk_fault_def8' */

  /* Set Fault Suspected Status: APP1_AdaptAdaptLoMin */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(9, rtb_RelationalOperator1_fp);
    UpdateFault(9);
  }

  /* UnitDelay: '<S727>/Unit Delay1' */
  rtb_Abs_iy = BaseEngineController_LS_112_DWork.s727_UnitDelay1_DSTATE;

  /* UnitDelay: '<S727>/Unit Delay' */
  rtb_DataTypeConversion1_j =
    BaseEngineController_LS_112_DWork.s727_UnitDelay_DSTATE;

  /* UnitDelay: '<S727>/Unit Delay3' */
  rtb_DataTypeConversion_ep =
    BaseEngineController_LS_112_DWork.s727_UnitDelay3_DSTATE;

  /* UnitDelay: '<S727>/Unit Delay4' */
  rtb_Product1_mc = BaseEngineController_LS_112_DWork.s727_UnitDelay4_DSTATE;

  /* MinMax: '<S727>/MinMax1' incorporates:
   *  UnitDelay: '<S727>/Unit Delay'
   *  UnitDelay: '<S727>/Unit Delay3'
   *  UnitDelay: '<S727>/Unit Delay4'
   */
  u = (rtb_Abs_iy <= BaseEngineController_LS_112_DWork.s727_UnitDelay_DSTATE) ||
    rtIsNaN(BaseEngineController_LS_112_DWork.s727_UnitDelay_DSTATE) ?
    rtb_Abs_iy : BaseEngineController_LS_112_DWork.s727_UnitDelay_DSTATE;
  u = (u <= BaseEngineController_LS_112_DWork.s727_UnitDelay3_DSTATE) || rtIsNaN
    (BaseEngineController_LS_112_DWork.s727_UnitDelay3_DSTATE) ? u :
    BaseEngineController_LS_112_DWork.s727_UnitDelay3_DSTATE;
  u = (u <= BaseEngineController_LS_112_DWork.s727_UnitDelay4_DSTATE) || rtIsNaN
    (BaseEngineController_LS_112_DWork.s727_UnitDelay4_DSTATE) ? u :
    BaseEngineController_LS_112_DWork.s727_UnitDelay4_DSTATE;
  u = (u <= BaseEngineController_LS_112_B.s692_Switch) || rtIsNaN
    (BaseEngineController_LS_112_B.s692_Switch) ? u :
    BaseEngineController_LS_112_B.s692_Switch;

  /* RelationalOperator: '<S725>/Relational Operator9' incorporates:
   *  MinMax: '<S727>/MinMax1'
   */
  rtb_LogicalOperator1_ou = (u > BaseEngineController_LS_112_B.s720_MinMax1);

  /* RelationalOperator: '<S725>/Relational Operator5' incorporates:
   *  MinMax: '<S727>/MinMax1'
   *  S-Function (motohawk_sfun_calibration): '<S692>/motohawk_calibration12'
   */
  rtb_RelationalOperator5_h = (u <= (APP1_AdaptAdapt_Hi_Max_DataStore()));

  /* RelationalOperator: '<S725>/Relational Operator6' incorporates:
   *  MinMax: '<S727>/MinMax1'
   *  S-Function (motohawk_sfun_calibration): '<S692>/motohawk_calibration11'
   */
  rtb_RelationalOperator6_e = (u >= (APP1_AdaptAdapt_Hi_Min_DataStore()));

  /* Sum: '<S725>/Sum2' incorporates:
   *  MinMax: '<S727>/MinMax1'
   */
  rtb_Abs_o = u - BaseEngineController_LS_112_B.s720_MinMax1;

  /* Abs: '<S725>/Abs' */
  rtb_Abs_o = fabs(rtb_Abs_o);

  /* Outputs for Enabled SubSystem: '<S725>/Store Current Position' incorporates:
   *  EnablePort: '<S728>/Enable'
   */
  /* Logic: '<S725>/Logical Operator2' incorporates:
   *  Logic: '<S725>/Logical Operator1'
   *  Logic: '<S725>/Logical Operator4'
   *  RelationalOperator: '<S725>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S720>/motohawk_calibration14'
   *  S-Function (motohawk_sfun_calibration): '<S720>/motohawk_calibration2'
   */
  if ((rtb_LogicalOperator1_ou && rtb_RelationalOperator5_h &&
       rtb_RelationalOperator6_e && (APP1_AdaptAdaptHiEnable_DataStore()) &&
       (rtb_Abs_o > (APP1_AdaptAdapt_Delta_DataStore()))) ||
      (rtb_RelationalOperator5_h && rtb_RelationalOperator6_e &&
       (APP1_AdaptAdaptHiEnable_DataStore()) && rtb_LogicalOperator6_p)) {
    /* DataTypeConversion: '<S728>/Data Type Conversion2' incorporates:
     *  MinMax: '<S727>/MinMax1'
     */
    if (u < 65536.0) {
      if (u >= 0.0) {
        rtb_DataTypeConversion2_fg = (uint16_T)u;
      } else {
        rtb_DataTypeConversion2_fg = 0U;
      }
    } else {
      rtb_DataTypeConversion2_fg = MAX_uint16_T;
    }

    /* End of DataTypeConversion: '<S728>/Data Type Conversion2' */

    /* S-Function (motohawk_sfun_data_write): '<S728>/motohawk_data_write' */
    /* Write to Data Storage as scalar: APP1_AdaptRaw_Adpt_Hi */
    {
      APP1_AdaptRaw_Adpt_Hi_DataStore() = rtb_DataTypeConversion2_fg;
    }
  }

  /* End of Logic: '<S725>/Logical Operator2' */
  /* End of Outputs for SubSystem: '<S725>/Store Current Position' */

  /* MinMax: '<S727>/MinMax' */
  u = (BaseEngineController_LS_112_B.s692_Switch >= rtb_Product1_mc) || rtIsNaN
    (rtb_Product1_mc) ? BaseEngineController_LS_112_B.s692_Switch :
    rtb_Product1_mc;
  u = (u >= rtb_DataTypeConversion_ep) || rtIsNaN(rtb_DataTypeConversion_ep) ? u
    : rtb_DataTypeConversion_ep;
  u = (u >= rtb_DataTypeConversion1_j) || rtIsNaN(rtb_DataTypeConversion1_j) ? u
    : rtb_DataTypeConversion1_j;
  rtb_Abs_o = (u >= rtb_Abs_iy) || rtIsNaN(rtb_Abs_iy) ? u : rtb_Abs_iy;

  /* RelationalOperator: '<S726>/Relational Operator9' incorporates:
   *  MinMax: '<S727>/MinMax'
   */
  rtb_LogicalOperator6_p = (rtb_Abs_o <
    BaseEngineController_LS_112_B.s720_MinMax);

  /* RelationalOperator: '<S726>/Relational Operator5' incorporates:
   *  MinMax: '<S727>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S692>/motohawk_calibration9'
   */
  rtb_RelationalOperator5_h = (rtb_Abs_o <= (APP1_AdaptAdapt_Low_Max_DataStore()));

  /* RelationalOperator: '<S726>/Relational Operator6' incorporates:
   *  MinMax: '<S727>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S692>/motohawk_calibration10'
   */
  rtb_RelationalOperator6_e = (rtb_Abs_o >= (APP1_AdaptAdapt_Low_Min_DataStore()));

  /* Sum: '<S726>/Sum2' incorporates:
   *  MinMax: '<S727>/MinMax'
   */
  rtb_Abs_iy = rtb_Abs_o - BaseEngineController_LS_112_B.s720_MinMax;

  /* Abs: '<S726>/Abs' */
  rtb_Abs_iy = fabs(rtb_Abs_iy);

  /* Outputs for Enabled SubSystem: '<S726>/Store Current Position' incorporates:
   *  EnablePort: '<S729>/Enable'
   */
  /* Logic: '<S726>/Logical Operator2' incorporates:
   *  Logic: '<S726>/Logical Operator1'
   *  Logic: '<S726>/Logical Operator4'
   *  RelationalOperator: '<S726>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S720>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S720>/motohawk_calibration14'
   */
  if ((rtb_LogicalOperator6_p && rtb_RelationalOperator5_h &&
       rtb_RelationalOperator6_e && (APP1_AdaptAdaptLoEnable_DataStore()) &&
       (rtb_Abs_iy > (APP1_AdaptAdapt_Delta_DataStore()))) ||
      (rtb_RelationalOperator5_h && rtb_RelationalOperator6_e &&
       (APP1_AdaptAdaptLoEnable_DataStore()) && rtb_Switch1_m)) {
    /* DataTypeConversion: '<S729>/Data Type Conversion2' incorporates:
     *  MinMax: '<S727>/MinMax'
     */
    if (rtb_Abs_o < 65536.0) {
      if (rtb_Abs_o >= 0.0) {
        rtb_DataTypeConversion2_e2 = (uint16_T)rtb_Abs_o;
      } else {
        rtb_DataTypeConversion2_e2 = 0U;
      }
    } else {
      rtb_DataTypeConversion2_e2 = MAX_uint16_T;
    }

    /* End of DataTypeConversion: '<S729>/Data Type Conversion2' */

    /* S-Function (motohawk_sfun_data_write): '<S729>/motohawk_data_write' */
    /* Write to Data Storage as scalar: APP1_AdaptRaw_Adpt_Low */
    {
      APP1_AdaptRaw_Adpt_Low_DataStore() = rtb_DataTypeConversion2_e2;
    }
  }

  /* End of Logic: '<S726>/Logical Operator2' */
  /* End of Outputs for SubSystem: '<S726>/Store Current Position' */

  /* RelationalOperator: '<S738>/Relational Operator5' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S738>/motohawk_calibration5'
   */
  rtb_RelationalOperator5_kk = ((BaseEngineController_LS_112_B.s693_Switch >
    (APP2_AdaptInputHiFltPos_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S738>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: APP2_AdaptRangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(18, rtb_RelationalOperator5_kk);
    UpdateFault(18);
  }

  /* RelationalOperator: '<S738>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S738>/motohawk_calibration6'
   */
  rtb_RelationalOperator4_c = ((BaseEngineController_LS_112_B.s693_Switch <
    (APP2_AdaptInputLoFltPos_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S738>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: APP2_AdaptRangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(19, rtb_RelationalOperator4_c);
    UpdateFault(19);
  }

  /* RelationalOperator: '<S738>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S693>/motohawk_calibration9'
   */
  rtb_RelationalOperator_m = ((BaseEngineController_LS_112_B.s737_MinMax >
    (APP2_AdaptAdapt_Low_Max_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S738>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: APP2_AdaptAdaptLoMax */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(16, rtb_RelationalOperator_m);
    UpdateFault(16);
  }

  /* RelationalOperator: '<S738>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S693>/motohawk_calibration12'
   */
  rtb_RelationalOperator3_jm = ((BaseEngineController_LS_112_B.s737_MinMax1 >
    (APP2_AdaptAdapt_Hi_Max_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S738>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: APP2_AdaptAdaptHiMax */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(14, rtb_RelationalOperator3_jm);
    UpdateFault(14);
  }

  /* RelationalOperator: '<S738>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S693>/motohawk_calibration11'
   */
  rtb_RelationalOperator2_h4 = ((BaseEngineController_LS_112_B.s737_MinMax1 <
    (APP2_AdaptAdapt_Hi_Min_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S738>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: APP2_AdaptAdaptHiMin */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(15, rtb_RelationalOperator2_h4);
    UpdateFault(15);
  }

  /* RelationalOperator: '<S738>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S693>/motohawk_calibration10'
   */
  rtb_RelationalOperator1_l = ((BaseEngineController_LS_112_B.s737_MinMax <
    (APP2_AdaptAdapt_Low_Min_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S738>/motohawk_fault_def8' */

  /* Set Fault Suspected Status: APP2_AdaptAdaptLoMin */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(17, rtb_RelationalOperator1_l);
    UpdateFault(17);
  }

  /* UnitDelay: '<S744>/Unit Delay1' */
  rtb_Abs_iy = BaseEngineController_LS_112_DWork.s744_UnitDelay1_DSTATE;

  /* UnitDelay: '<S744>/Unit Delay' */
  rtb_Switch3_e = BaseEngineController_LS_112_DWork.s744_UnitDelay_DSTATE;

  /* UnitDelay: '<S744>/Unit Delay3' */
  rtb_Switch2_c = BaseEngineController_LS_112_DWork.s744_UnitDelay3_DSTATE;

  /* UnitDelay: '<S744>/Unit Delay4' */
  rtb_Switch1_gg = BaseEngineController_LS_112_DWork.s744_UnitDelay4_DSTATE;

  /* MinMax: '<S744>/MinMax1' incorporates:
   *  UnitDelay: '<S744>/Unit Delay'
   *  UnitDelay: '<S744>/Unit Delay3'
   *  UnitDelay: '<S744>/Unit Delay4'
   */
  u = (rtb_Abs_iy <= BaseEngineController_LS_112_DWork.s744_UnitDelay_DSTATE) ||
    rtIsNaN(BaseEngineController_LS_112_DWork.s744_UnitDelay_DSTATE) ?
    rtb_Abs_iy : BaseEngineController_LS_112_DWork.s744_UnitDelay_DSTATE;
  u = (u <= BaseEngineController_LS_112_DWork.s744_UnitDelay3_DSTATE) || rtIsNaN
    (BaseEngineController_LS_112_DWork.s744_UnitDelay3_DSTATE) ? u :
    BaseEngineController_LS_112_DWork.s744_UnitDelay3_DSTATE;
  u = (u <= BaseEngineController_LS_112_DWork.s744_UnitDelay4_DSTATE) || rtIsNaN
    (BaseEngineController_LS_112_DWork.s744_UnitDelay4_DSTATE) ? u :
    BaseEngineController_LS_112_DWork.s744_UnitDelay4_DSTATE;
  u = (u <= BaseEngineController_LS_112_B.s693_Switch) || rtIsNaN
    (BaseEngineController_LS_112_B.s693_Switch) ? u :
    BaseEngineController_LS_112_B.s693_Switch;

  /* RelationalOperator: '<S742>/Relational Operator9' incorporates:
   *  MinMax: '<S744>/MinMax1'
   */
  rtb_LogicalOperator6_p = (u > BaseEngineController_LS_112_B.s737_MinMax1);

  /* RelationalOperator: '<S742>/Relational Operator5' incorporates:
   *  MinMax: '<S744>/MinMax1'
   *  S-Function (motohawk_sfun_calibration): '<S693>/motohawk_calibration12'
   */
  rtb_RelationalOperator5_h = (u <= (APP2_AdaptAdapt_Hi_Max_DataStore()));

  /* RelationalOperator: '<S742>/Relational Operator6' incorporates:
   *  MinMax: '<S744>/MinMax1'
   *  S-Function (motohawk_sfun_calibration): '<S693>/motohawk_calibration11'
   */
  rtb_RelationalOperator6_e = (u >= (APP2_AdaptAdapt_Hi_Min_DataStore()));

  /* Sum: '<S742>/Sum2' incorporates:
   *  MinMax: '<S744>/MinMax1'
   */
  rtb_Abs_o = u - BaseEngineController_LS_112_B.s737_MinMax1;

  /* Abs: '<S742>/Abs' */
  rtb_Abs_o = fabs(rtb_Abs_o);

  /* Outputs for Enabled SubSystem: '<S742>/Store Current Position' incorporates:
   *  EnablePort: '<S745>/Enable'
   */
  /* Logic: '<S742>/Logical Operator2' incorporates:
   *  Logic: '<S742>/Logical Operator1'
   *  Logic: '<S742>/Logical Operator4'
   *  RelationalOperator: '<S742>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S737>/motohawk_calibration14'
   *  S-Function (motohawk_sfun_calibration): '<S737>/motohawk_calibration2'
   */
  if ((rtb_LogicalOperator6_p && rtb_RelationalOperator5_h &&
       rtb_RelationalOperator6_e && (APP2_AdaptAdaptHiEnable_DataStore()) &&
       (rtb_Abs_o > (APP2_AdaptAdapt_Delta_DataStore()))) ||
      (rtb_RelationalOperator5_h && rtb_RelationalOperator6_e &&
       (APP2_AdaptAdaptHiEnable_DataStore()) && rtb_RelationalOperator3_i2)) {
    /* DataTypeConversion: '<S745>/Data Type Conversion2' incorporates:
     *  MinMax: '<S744>/MinMax1'
     */
    if (u < 65536.0) {
      if (u >= 0.0) {
        rtb_DataTypeConversion2_j = (uint16_T)u;
      } else {
        rtb_DataTypeConversion2_j = 0U;
      }
    } else {
      rtb_DataTypeConversion2_j = MAX_uint16_T;
    }

    /* End of DataTypeConversion: '<S745>/Data Type Conversion2' */

    /* S-Function (motohawk_sfun_data_write): '<S745>/motohawk_data_write' */
    /* Write to Data Storage as scalar: APP2_AdaptRaw_Adpt_Hi */
    {
      APP2_AdaptRaw_Adpt_Hi_DataStore() = rtb_DataTypeConversion2_j;
    }
  }

  /* End of Logic: '<S742>/Logical Operator2' */
  /* End of Outputs for SubSystem: '<S742>/Store Current Position' */

  /* MinMax: '<S744>/MinMax' */
  u = (BaseEngineController_LS_112_B.s693_Switch >= rtb_Switch1_gg) || rtIsNaN
    (rtb_Switch1_gg) ? BaseEngineController_LS_112_B.s693_Switch :
    rtb_Switch1_gg;
  u = (u >= rtb_Switch2_c) || rtIsNaN(rtb_Switch2_c) ? u : rtb_Switch2_c;
  u = (u >= rtb_Switch3_e) || rtIsNaN(rtb_Switch3_e) ? u : rtb_Switch3_e;
  rtb_Abs_o = (u >= rtb_Abs_iy) || rtIsNaN(rtb_Abs_iy) ? u : rtb_Abs_iy;

  /* RelationalOperator: '<S743>/Relational Operator9' incorporates:
   *  MinMax: '<S744>/MinMax'
   */
  rtb_LogicalOperator6_p = (rtb_Abs_o <
    BaseEngineController_LS_112_B.s737_MinMax);

  /* RelationalOperator: '<S743>/Relational Operator5' incorporates:
   *  MinMax: '<S744>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S693>/motohawk_calibration9'
   */
  rtb_RelationalOperator5_h = (rtb_Abs_o <= (APP2_AdaptAdapt_Low_Max_DataStore()));

  /* RelationalOperator: '<S743>/Relational Operator6' incorporates:
   *  MinMax: '<S744>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S693>/motohawk_calibration10'
   */
  rtb_RelationalOperator6_e = (rtb_Abs_o >= (APP2_AdaptAdapt_Low_Min_DataStore()));

  /* Sum: '<S743>/Sum2' incorporates:
   *  MinMax: '<S744>/MinMax'
   */
  rtb_Abs_iy = rtb_Abs_o - BaseEngineController_LS_112_B.s737_MinMax;

  /* Abs: '<S743>/Abs' */
  rtb_Abs_iy = fabs(rtb_Abs_iy);

  /* Outputs for Enabled SubSystem: '<S743>/Store Current Position' incorporates:
   *  EnablePort: '<S746>/Enable'
   */
  /* Logic: '<S743>/Logical Operator2' incorporates:
   *  Logic: '<S743>/Logical Operator1'
   *  Logic: '<S743>/Logical Operator4'
   *  RelationalOperator: '<S743>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S737>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S737>/motohawk_calibration14'
   */
  if ((rtb_LogicalOperator6_p && rtb_RelationalOperator5_h &&
       rtb_RelationalOperator6_e && (APP2_AdaptAdaptLoEnable_DataStore()) &&
       (rtb_Abs_iy > (APP2_AdaptAdapt_Delta_DataStore()))) ||
      (rtb_RelationalOperator5_h && rtb_RelationalOperator6_e &&
       (APP2_AdaptAdaptLoEnable_DataStore()) && rtb_LogicalOperator_af)) {
    /* DataTypeConversion: '<S746>/Data Type Conversion2' incorporates:
     *  MinMax: '<S744>/MinMax'
     */
    if (rtb_Abs_o < 65536.0) {
      if (rtb_Abs_o >= 0.0) {
        rtb_DataTypeConversion2_ml = (uint16_T)rtb_Abs_o;
      } else {
        rtb_DataTypeConversion2_ml = 0U;
      }
    } else {
      rtb_DataTypeConversion2_ml = MAX_uint16_T;
    }

    /* End of DataTypeConversion: '<S746>/Data Type Conversion2' */

    /* S-Function (motohawk_sfun_data_write): '<S746>/motohawk_data_write' */
    /* Write to Data Storage as scalar: APP2_AdaptRaw_Adpt_Low */
    {
      APP2_AdaptRaw_Adpt_Low_DataStore() = rtb_DataTypeConversion2_ml;
    }
  }

  /* End of Logic: '<S743>/Logical Operator2' */
  /* End of Outputs for SubSystem: '<S743>/Store Current Position' */

  /* RelationalOperator: '<S755>/Relational Operator5' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S755>/motohawk_calibration5'
   */
  rtb_RelationalOperator5_c = ((BaseEngineController_LS_112_B.s694_Switch >
    (TPS1InputHiFltPos_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S755>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: TPS1RangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(148, rtb_RelationalOperator5_c);
    UpdateFault(148);
  }

  /* RelationalOperator: '<S755>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S755>/motohawk_calibration6'
   */
  rtb_RelationalOperator4_m = ((BaseEngineController_LS_112_B.s694_Switch <
    (TPS1InputLoFltPos_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S755>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: TPS1RangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(149, rtb_RelationalOperator4_m);
    UpdateFault(149);
  }

  /* RelationalOperator: '<S755>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S694>/motohawk_calibration9'
   */
  rtb_RelationalOperator_hk = ((BaseEngineController_LS_112_B.s754_MinMax >
    (TPS1Adapt_Low_Max_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S755>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: TPS1AdaptLoMax */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(146, rtb_RelationalOperator_hk);
    UpdateFault(146);
  }

  /* RelationalOperator: '<S755>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S694>/motohawk_calibration12'
   */
  rtb_RelationalOperator3_im = ((BaseEngineController_LS_112_B.s754_MinMax1 >
    (TPS1Adapt_Hi_Max_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S755>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: TPS1AdaptHiMax */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(144, rtb_RelationalOperator3_im);
    UpdateFault(144);
  }

  /* RelationalOperator: '<S755>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S694>/motohawk_calibration11'
   */
  rtb_RelationalOperator2_li = ((BaseEngineController_LS_112_B.s754_MinMax1 <
    (TPS1Adapt_Hi_Min_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S755>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: TPS1AdaptHiMin */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(145, rtb_RelationalOperator2_li);
    UpdateFault(145);
  }

  /* RelationalOperator: '<S755>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S694>/motohawk_calibration10'
   */
  rtb_RelationalOperator1_nj = ((BaseEngineController_LS_112_B.s754_MinMax <
    (TPS1Adapt_Low_Min_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S755>/motohawk_fault_def8' */

  /* Set Fault Suspected Status: TPS1AdaptLoMin */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(147, rtb_RelationalOperator1_nj);
    UpdateFault(147);
  }

  /* UnitDelay: '<S761>/Unit Delay1' */
  rtb_Abs_iy = BaseEngineController_LS_112_DWork.s761_UnitDelay1_DSTATE;

  /* UnitDelay: '<S761>/Unit Delay' */
  rtb_Switch_g = BaseEngineController_LS_112_DWork.s761_UnitDelay_DSTATE;

  /* UnitDelay: '<S761>/Unit Delay3' */
  rtb_Switch4_c = BaseEngineController_LS_112_DWork.s761_UnitDelay3_DSTATE;

  /* UnitDelay: '<S761>/Unit Delay4' */
  rtb_Multiplyby10ifnotyetenabled_p =
    BaseEngineController_LS_112_DWork.s761_UnitDelay4_DSTATE;

  /* MinMax: '<S761>/MinMax1' incorporates:
   *  UnitDelay: '<S761>/Unit Delay'
   *  UnitDelay: '<S761>/Unit Delay3'
   *  UnitDelay: '<S761>/Unit Delay4'
   */
  u = (rtb_Abs_iy <= BaseEngineController_LS_112_DWork.s761_UnitDelay_DSTATE) ||
    rtIsNaN(BaseEngineController_LS_112_DWork.s761_UnitDelay_DSTATE) ?
    rtb_Abs_iy : BaseEngineController_LS_112_DWork.s761_UnitDelay_DSTATE;
  u = (u <= BaseEngineController_LS_112_DWork.s761_UnitDelay3_DSTATE) || rtIsNaN
    (BaseEngineController_LS_112_DWork.s761_UnitDelay3_DSTATE) ? u :
    BaseEngineController_LS_112_DWork.s761_UnitDelay3_DSTATE;
  u = (u <= BaseEngineController_LS_112_DWork.s761_UnitDelay4_DSTATE) || rtIsNaN
    (BaseEngineController_LS_112_DWork.s761_UnitDelay4_DSTATE) ? u :
    BaseEngineController_LS_112_DWork.s761_UnitDelay4_DSTATE;
  u = (u <= BaseEngineController_LS_112_B.s694_Switch) || rtIsNaN
    (BaseEngineController_LS_112_B.s694_Switch) ? u :
    BaseEngineController_LS_112_B.s694_Switch;

  /* RelationalOperator: '<S759>/Relational Operator9' incorporates:
   *  MinMax: '<S761>/MinMax1'
   */
  rtb_LogicalOperator6_p = (u > BaseEngineController_LS_112_B.s754_MinMax1);

  /* RelationalOperator: '<S759>/Relational Operator5' incorporates:
   *  MinMax: '<S761>/MinMax1'
   *  S-Function (motohawk_sfun_calibration): '<S694>/motohawk_calibration12'
   */
  rtb_RelationalOperator5_h = (u <= (TPS1Adapt_Hi_Max_DataStore()));

  /* RelationalOperator: '<S759>/Relational Operator6' incorporates:
   *  MinMax: '<S761>/MinMax1'
   *  S-Function (motohawk_sfun_calibration): '<S694>/motohawk_calibration11'
   */
  rtb_RelationalOperator6_e = (u >= (TPS1Adapt_Hi_Min_DataStore()));

  /* Sum: '<S759>/Sum2' incorporates:
   *  MinMax: '<S761>/MinMax1'
   */
  rtb_Abs_o = u - BaseEngineController_LS_112_B.s754_MinMax1;

  /* Abs: '<S759>/Abs' */
  rtb_Abs_o = fabs(rtb_Abs_o);

  /* Outputs for Enabled SubSystem: '<S759>/Store Current Position' incorporates:
   *  EnablePort: '<S762>/Enable'
   */
  /* Logic: '<S759>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S759>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S754>/motohawk_calibration14'
   *  S-Function (motohawk_sfun_calibration): '<S754>/motohawk_calibration2'
   */
  if (rtb_LogicalOperator6_p && rtb_RelationalOperator5_h &&
      rtb_RelationalOperator6_e && (TPS1AdaptHiEnable_DataStore()) && (rtb_Abs_o
       > (TPS1Adapt_Delta_DataStore()))) {
    /* DataTypeConversion: '<S762>/Data Type Conversion2' incorporates:
     *  MinMax: '<S761>/MinMax1'
     */
    if (u < 65536.0) {
      if (u >= 0.0) {
        rtb_DataTypeConversion2_i = (uint16_T)u;
      } else {
        rtb_DataTypeConversion2_i = 0U;
      }
    } else {
      rtb_DataTypeConversion2_i = MAX_uint16_T;
    }

    /* End of DataTypeConversion: '<S762>/Data Type Conversion2' */

    /* S-Function (motohawk_sfun_data_write): '<S762>/motohawk_data_write' */
    /* Write to Data Storage as scalar: TPS1Raw_Adpt_Hi */
    {
      TPS1Raw_Adpt_Hi_DataStore() = rtb_DataTypeConversion2_i;
    }
  }

  /* End of Logic: '<S759>/Logical Operator1' */
  /* End of Outputs for SubSystem: '<S759>/Store Current Position' */

  /* MinMax: '<S761>/MinMax' */
  u = (BaseEngineController_LS_112_B.s694_Switch >=
       rtb_Multiplyby10ifnotyetenabled_p) || rtIsNaN
    (rtb_Multiplyby10ifnotyetenabled_p) ?
    BaseEngineController_LS_112_B.s694_Switch :
    rtb_Multiplyby10ifnotyetenabled_p;
  u = (u >= rtb_Switch4_c) || rtIsNaN(rtb_Switch4_c) ? u : rtb_Switch4_c;
  u = (u >= rtb_Switch_g) || rtIsNaN(rtb_Switch_g) ? u : rtb_Switch_g;
  rtb_Abs_o = (u >= rtb_Abs_iy) || rtIsNaN(rtb_Abs_iy) ? u : rtb_Abs_iy;

  /* RelationalOperator: '<S760>/Relational Operator9' incorporates:
   *  MinMax: '<S761>/MinMax'
   */
  rtb_LogicalOperator6_p = (rtb_Abs_o <
    BaseEngineController_LS_112_B.s754_MinMax);

  /* RelationalOperator: '<S760>/Relational Operator5' incorporates:
   *  MinMax: '<S761>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S694>/motohawk_calibration9'
   */
  rtb_RelationalOperator5_h = (rtb_Abs_o <= (TPS1Adapt_Low_Max_DataStore()));

  /* RelationalOperator: '<S760>/Relational Operator6' incorporates:
   *  MinMax: '<S761>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S694>/motohawk_calibration10'
   */
  rtb_RelationalOperator6_e = (rtb_Abs_o >= (TPS1Adapt_Low_Min_DataStore()));

  /* Sum: '<S760>/Sum2' incorporates:
   *  MinMax: '<S761>/MinMax'
   */
  rtb_Abs_iy = rtb_Abs_o - BaseEngineController_LS_112_B.s754_MinMax;

  /* Abs: '<S760>/Abs' */
  rtb_Abs_iy = fabs(rtb_Abs_iy);

  /* Logic: '<S760>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S760>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S754>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S754>/motohawk_calibration14'
   */
  rtb_LogicalOperator6_p = (rtb_LogicalOperator6_p && rtb_RelationalOperator5_h &&
    rtb_RelationalOperator6_e && (TPS1AdaptLoEnable_DataStore()) && (rtb_Abs_iy >
                             (TPS1Adapt_Delta_DataStore())));

  /* Outputs for Enabled SubSystem: '<S760>/Store Current Position' incorporates:
   *  EnablePort: '<S763>/Enable'
   */
  /* Logic: '<S760>/Logical Operator2' incorporates:
   *  Logic: '<S760>/Logical Operator4'
   *  S-Function (motohawk_sfun_calibration): '<S754>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_data_read): '<S484>/motohawk_data_read'
   */
  if (rtb_LogicalOperator6_p || (rtb_RelationalOperator5_h &&
       rtb_RelationalOperator6_e && (TPS1AdaptLoEnable_DataStore()) &&
       TPSAdaptLoRequest_DataStore())) {
    /* DataTypeConversion: '<S763>/Data Type Conversion2' incorporates:
     *  MinMax: '<S761>/MinMax'
     */
    if (rtb_Abs_o < 65536.0) {
      if (rtb_Abs_o >= 0.0) {
        rtb_DataTypeConversion2_ni = (uint16_T)rtb_Abs_o;
      } else {
        rtb_DataTypeConversion2_ni = 0U;
      }
    } else {
      rtb_DataTypeConversion2_ni = MAX_uint16_T;
    }

    /* End of DataTypeConversion: '<S763>/Data Type Conversion2' */

    /* S-Function (motohawk_sfun_data_write): '<S763>/motohawk_data_write' */
    /* Write to Data Storage as scalar: TPS1Raw_Adpt_Low */
    {
      TPS1Raw_Adpt_Low_DataStore() = rtb_DataTypeConversion2_ni;
    }
  }

  /* End of Logic: '<S760>/Logical Operator2' */
  /* End of Outputs for SubSystem: '<S760>/Store Current Position' */

  /* RelationalOperator: '<S772>/Relational Operator5' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S772>/motohawk_calibration5'
   */
  rtb_RelationalOperator5_m = ((BaseEngineController_LS_112_B.s695_Switch >
    (TPS2InputHiFltPos_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S772>/motohawk_fault_def4' */

  /* Set Fault Suspected Status: TPS2RangeHigh */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(154, rtb_RelationalOperator5_m);
    UpdateFault(154);
  }

  /* RelationalOperator: '<S772>/Relational Operator4' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S772>/motohawk_calibration6'
   */
  rtb_RelationalOperator4_cl = ((BaseEngineController_LS_112_B.s695_Switch <
    (TPS2InputLoFltPos_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S772>/motohawk_fault_def5' */

  /* Set Fault Suspected Status: TPS2RangeLow */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(155, rtb_RelationalOperator4_cl);
    UpdateFault(155);
  }

  /* RelationalOperator: '<S772>/Relational Operator' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S695>/motohawk_calibration9'
   */
  rtb_RelationalOperator_hq = ((BaseEngineController_LS_112_B.s771_MinMax >
    (TPS2Adapt_Low_Max_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S772>/motohawk_fault_def1' */

  /* Set Fault Suspected Status: TPS2AdaptLoMax */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(152, rtb_RelationalOperator_hq);
    UpdateFault(152);
  }

  /* RelationalOperator: '<S772>/Relational Operator3' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S695>/motohawk_calibration12'
   */
  rtb_RelationalOperator3_df = ((BaseEngineController_LS_112_B.s771_MinMax1 >
    (TPS2Adapt_Hi_Max_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S772>/motohawk_fault_def2' */

  /* Set Fault Suspected Status: TPS2AdaptHiMax */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(150, rtb_RelationalOperator3_df);
    UpdateFault(150);
  }

  /* RelationalOperator: '<S772>/Relational Operator2' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S695>/motohawk_calibration11'
   */
  rtb_RelationalOperator2_e3 = ((BaseEngineController_LS_112_B.s771_MinMax1 <
    (TPS2Adapt_Hi_Min_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S772>/motohawk_fault_def3' */

  /* Set Fault Suspected Status: TPS2AdaptHiMin */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(151, rtb_RelationalOperator2_e3);
    UpdateFault(151);
  }

  /* RelationalOperator: '<S772>/Relational Operator1' incorporates:
   *  S-Function (motohawk_sfun_calibration): '<S695>/motohawk_calibration10'
   */
  rtb_RelationalOperator1_b0 = ((BaseEngineController_LS_112_B.s771_MinMax <
    (TPS2Adapt_Low_Min_DataStore())));

  /* S-Function (motohawk_sfun_fault_def): '<S772>/motohawk_fault_def8' */

  /* Set Fault Suspected Status: TPS2AdaptLoMin */
  {
    extern void SetFaultSuspected(uint32_T fault, boolean_T val);
    extern void UpdateFault(uint32_T fault);
    SetFaultSuspected(153, rtb_RelationalOperator1_b0);
    UpdateFault(153);
  }

  /* UnitDelay: '<S778>/Unit Delay1' */
  rtb_Abs_iy = BaseEngineController_LS_112_DWork.s778_UnitDelay1_DSTATE;

  /* UnitDelay: '<S778>/Unit Delay' */
  rtb_Switch_k = BaseEngineController_LS_112_DWork.s778_UnitDelay_DSTATE;

  /* UnitDelay: '<S778>/Unit Delay3' */
  rtb_DataTypeConversion_nv =
    BaseEngineController_LS_112_DWork.s778_UnitDelay3_DSTATE;

  /* UnitDelay: '<S778>/Unit Delay4' */
  rtb_APP2 = BaseEngineController_LS_112_DWork.s778_UnitDelay4_DSTATE;

  /* MinMax: '<S778>/MinMax1' incorporates:
   *  UnitDelay: '<S778>/Unit Delay'
   *  UnitDelay: '<S778>/Unit Delay3'
   *  UnitDelay: '<S778>/Unit Delay4'
   */
  u = (rtb_Abs_iy <= BaseEngineController_LS_112_DWork.s778_UnitDelay_DSTATE) ||
    rtIsNaN(BaseEngineController_LS_112_DWork.s778_UnitDelay_DSTATE) ?
    rtb_Abs_iy : BaseEngineController_LS_112_DWork.s778_UnitDelay_DSTATE;
  u = (u <= BaseEngineController_LS_112_DWork.s778_UnitDelay3_DSTATE) || rtIsNaN
    (BaseEngineController_LS_112_DWork.s778_UnitDelay3_DSTATE) ? u :
    BaseEngineController_LS_112_DWork.s778_UnitDelay3_DSTATE;
  u = (u <= BaseEngineController_LS_112_DWork.s778_UnitDelay4_DSTATE) || rtIsNaN
    (BaseEngineController_LS_112_DWork.s778_UnitDelay4_DSTATE) ? u :
    BaseEngineController_LS_112_DWork.s778_UnitDelay4_DSTATE;
  u = (u <= BaseEngineController_LS_112_B.s695_Switch) || rtIsNaN
    (BaseEngineController_LS_112_B.s695_Switch) ? u :
    BaseEngineController_LS_112_B.s695_Switch;

  /* RelationalOperator: '<S776>/Relational Operator9' incorporates:
   *  MinMax: '<S778>/MinMax1'
   */
  rtb_LogicalOperator6_p = (u > BaseEngineController_LS_112_B.s771_MinMax1);

  /* RelationalOperator: '<S776>/Relational Operator5' incorporates:
   *  MinMax: '<S778>/MinMax1'
   *  S-Function (motohawk_sfun_calibration): '<S695>/motohawk_calibration12'
   */
  rtb_RelationalOperator5_h = (u <= (TPS2Adapt_Hi_Max_DataStore()));

  /* RelationalOperator: '<S776>/Relational Operator6' incorporates:
   *  MinMax: '<S778>/MinMax1'
   *  S-Function (motohawk_sfun_calibration): '<S695>/motohawk_calibration11'
   */
  rtb_RelationalOperator6_e = (u >= (TPS2Adapt_Hi_Min_DataStore()));

  /* Sum: '<S776>/Sum2' incorporates:
   *  MinMax: '<S778>/MinMax1'
   */
  rtb_Abs_o = u - BaseEngineController_LS_112_B.s771_MinMax1;

  /* Abs: '<S776>/Abs' */
  rtb_Abs_o = fabs(rtb_Abs_o);

  /* Outputs for Enabled SubSystem: '<S776>/Store Current Position' incorporates:
   *  EnablePort: '<S779>/Enable'
   */
  /* Logic: '<S776>/Logical Operator1' incorporates:
   *  RelationalOperator: '<S776>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S771>/motohawk_calibration14'
   *  S-Function (motohawk_sfun_calibration): '<S771>/motohawk_calibration2'
   */
  if (rtb_LogicalOperator6_p && rtb_RelationalOperator5_h &&
      rtb_RelationalOperator6_e && (TPS2AdaptHiEnable_DataStore()) && (rtb_Abs_o
       > (TPS2Adapt_Delta_DataStore()))) {
    /* DataTypeConversion: '<S779>/Data Type Conversion2' incorporates:
     *  MinMax: '<S778>/MinMax1'
     */
    if (u < 65536.0) {
      if (u >= 0.0) {
        rtb_DataTypeConversion2_c0 = (uint16_T)u;
      } else {
        rtb_DataTypeConversion2_c0 = 0U;
      }
    } else {
      rtb_DataTypeConversion2_c0 = MAX_uint16_T;
    }

    /* End of DataTypeConversion: '<S779>/Data Type Conversion2' */

    /* S-Function (motohawk_sfun_data_write): '<S779>/motohawk_data_write' */
    /* Write to Data Storage as scalar: TPS2Raw_Adpt_Hi */
    {
      TPS2Raw_Adpt_Hi_DataStore() = rtb_DataTypeConversion2_c0;
    }
  }

  /* End of Logic: '<S776>/Logical Operator1' */
  /* End of Outputs for SubSystem: '<S776>/Store Current Position' */

  /* MinMax: '<S778>/MinMax' */
  u = (BaseEngineController_LS_112_B.s695_Switch >= rtb_APP2) || rtIsNaN
    (rtb_APP2) ? BaseEngineController_LS_112_B.s695_Switch : rtb_APP2;
  u = (u >= rtb_DataTypeConversion_nv) || rtIsNaN(rtb_DataTypeConversion_nv) ? u
    : rtb_DataTypeConversion_nv;
  u = (u >= rtb_Switch_k) || rtIsNaN(rtb_Switch_k) ? u : rtb_Switch_k;
  rtb_Abs_o = (u >= rtb_Abs_iy) || rtIsNaN(rtb_Abs_iy) ? u : rtb_Abs_iy;

  /* RelationalOperator: '<S777>/Relational Operator9' incorporates:
   *  MinMax: '<S778>/MinMax'
   */
  rtb_LogicalOperator6_p = (rtb_Abs_o <
    BaseEngineController_LS_112_B.s771_MinMax);

  /* RelationalOperator: '<S777>/Relational Operator5' incorporates:
   *  MinMax: '<S778>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S695>/motohawk_calibration9'
   */
  rtb_RelationalOperator5_h = (rtb_Abs_o <= (TPS2Adapt_Low_Max_DataStore()));

  /* RelationalOperator: '<S777>/Relational Operator6' incorporates:
   *  MinMax: '<S778>/MinMax'
   *  S-Function (motohawk_sfun_calibration): '<S695>/motohawk_calibration10'
   */
  rtb_RelationalOperator6_e = (rtb_Abs_o >= (TPS2Adapt_Low_Min_DataStore()));

  /* Sum: '<S777>/Sum2' incorporates:
   *  MinMax: '<S778>/MinMax'
   */
  rtb_Abs_iy = rtb_Abs_o - BaseEngineController_LS_112_B.s771_MinMax;

  /* Abs: '<S777>/Abs' */
  rtb_Abs_iy = fabs(rtb_Abs_iy);

  /* Outputs for Enabled SubSystem: '<S777>/Store Current Position' incorporates:
   *  EnablePort: '<S780>/Enable'
   */
  /* Logic: '<S777>/Logical Operator2' incorporates:
   *  Logic: '<S777>/Logical Operator1'
   *  Logic: '<S777>/Logical Operator4'
   *  RelationalOperator: '<S777>/Relational Operator3'
   *  S-Function (motohawk_sfun_calibration): '<S771>/motohawk_calibration1'
   *  S-Function (motohawk_sfun_calibration): '<S771>/motohawk_calibration14'
   *  S-Function (motohawk_sfun_data_read): '<S484>/motohawk_data_read'
   */
  if ((rtb_LogicalOperator6_p && rtb_RelationalOperator5_h &&
       rtb_RelationalOperator6_e && (TPS2AdaptLoEnable_DataStore()) &&
       (rtb_Abs_iy > (TPS2Adapt_Delta_DataStore()))) ||
      (rtb_RelationalOperator5_h && rtb_RelationalOperator6_e &&
       (TPS2AdaptLoEnable_DataStore()) && TPSAdaptLoRequest_DataStore())) {
    /* DataTypeConversion: '<S780>/Data Type Conversion2' incorporates:
     *  MinMax: '<S778>/MinMax'
     */
    if (rtb_Abs_o < 65536.0) {
      if (rtb_Abs_o >= 0.0) {
        rtb_DataTypeConversion2_e = (uint16_T)rtb_Abs_o;
      } else {
        rtb_DataTypeConversion2_e = 0U;
      }
    } else {
      rtb_DataTypeConversion2_e = MAX_uint16_T;
    }

    /* End of DataTypeConversion: '<S780>/Data Type Conversion2' */

    /* S-Function (motohawk_sfun_data_write): '<S780>/motohawk_data_write' */
    /* Write to Data Storage as scalar: TPS2Raw_Adpt_Low */
    {
      TPS2Raw_Adpt_Low_DataStore() = rtb_DataTypeConversion2_e;
    }
  }

  /* End of Logic: '<S777>/Logical Operator2' */
  /* End of Outputs for SubSystem: '<S777>/Store Current Position' */

  /* Update for S-Function (motohawk_sfun_dout): '<S788>/motohawk_dout' */

  /* S-Function Block: DOut10176p0004 */
  {
    DOut10176p0004_DiscreteOutput_Set
      (BaseEngineController_LS_112_B.s798_LogicalOperator);
  }

  /* Update for UnitDelay: '<S690>/Unit Delay' incorporates:
   *  MinMax: '<S713>/MinMax1'
   */
  BaseEngineController_LS_112_DWork.s690_UnitDelay_DSTATE = minV;

  /* Update for UnitDelay: '<S715>/Unit Delay' */
  BaseEngineController_LS_112_DWork.s715_UnitDelay_DSTATE = rtb_Sum1_jr;

  /* Update for UnitDelay: '<S747>/Unit Delay' */
  BaseEngineController_LS_112_DWork.s747_UnitDelay_DSTATE = rtb_Sum1_cy;

  /* Update for UnitDelay: '<S740>/Unit Delay1' */
  BaseEngineController_LS_112_DWork.s740_UnitDelay1_DSTATE = rtb_Merge_pf;

  /* Update for UnitDelay: '<S688>/Unit Delay' incorporates:
   *  MinMax: '<S701>/MinMax1'
   */
  BaseEngineController_LS_112_DWork.s688_UnitDelay_DSTATE = minV_0;

  /* Update for UnitDelay: '<S703>/Unit Delay' */
  BaseEngineController_LS_112_DWork.s703_UnitDelay_DSTATE = rtb_Sum1_e;

  /* Update for UnitDelay: '<S730>/Unit Delay' */
  BaseEngineController_LS_112_DWork.s730_UnitDelay_DSTATE = rtb_Sum1_ex;

  /* Update for UnitDelay: '<S723>/Unit Delay1' */
  BaseEngineController_LS_112_DWork.s723_UnitDelay1_DSTATE = rtb_Merge_d;

  /* Update for UnitDelay: '<S556>/Unit Delay1' */
  BaseEngineController_LS_112_DWork.s556_UnitDelay1_DSTATE = rtb_Merge_ox;

  /* Update for UnitDelay: '<S570>/Unit Delay' */
  BaseEngineController_LS_112_DWork.s570_UnitDelay_DSTATE = rtb_Sum1_kl;

  /* Update for UnitDelay: '<S445>/Unit Delay' */
  BaseEngineController_LS_112_DWork.s445_UnitDelay_DSTATE =
    BaseEngineController_LS_112_B.s466_State;

  /* Update for UnitDelay: '<S555>/Unit Delay' */
  BaseEngineController_LS_112_DWork.s555_UnitDelay_DSTATE =
    BaseEngineController_LS_112_B.s555_Sum1;

  /* Update for UnitDelay: '<S764>/Unit Delay' */
  BaseEngineController_LS_112_DWork.s764_UnitDelay_DSTATE = rtb_Sum1_mk;

  /* Update for UnitDelay: '<S757>/Unit Delay1' */
  BaseEngineController_LS_112_DWork.s757_UnitDelay1_DSTATE = rtb_Merge_m;

  /* Update for UnitDelay: '<S781>/Unit Delay' */
  BaseEngineController_LS_112_DWork.s781_UnitDelay_DSTATE = rtb_Sum1_kh;

  /* Update for UnitDelay: '<S774>/Unit Delay1' */
  BaseEngineController_LS_112_DWork.s774_UnitDelay1_DSTATE = rtb_Merge_p1;

  /* Update for UnitDelay: '<S582>/Unit Delay' */
  BaseEngineController_LS_112_DWork.s582_UnitDelay_DSTATE = rtb_Sum2_cd;

  /* Update for UnitDelay: '<S557>/Unit Delay1' */
  BaseEngineController_LS_112_DWork.s557_UnitDelay1_DSTATE = rtb_Merge_ff;

  /* Update for UnitDelay: '<S581>/Unit Delay' */
  BaseEngineController_LS_112_DWork.s581_UnitDelay_DSTATE = rtb_Sum1_fj;

  /* Update for UnitDelay: '<S579>/Unit Delay' */
  BaseEngineController_LS_112_DWork.s579_UnitDelay_DSTATE = rtb_Merge_ff;

  /* Update for UnitDelay: '<S579>/Unit Delay1' */
  BaseEngineController_LS_112_DWork.s579_UnitDelay1_DSTATE = rtb_UnitDelay_gc;

  /* Update for UnitDelay: '<S579>/Unit Delay2' */
  BaseEngineController_LS_112_DWork.s579_UnitDelay2_DSTATE = rtb_UnitDelay1_d;

  /* Update for UnitDelay: '<S511>/Unit Delay' */
  BaseEngineController_LS_112_DWork.s511_UnitDelay_DSTATE =
    BaseEngineController_LS_112_B.s511_Switch;

  /* Update for UnitDelay: '<S544>/Unit Delay' */
  BaseEngineController_LS_112_DWork.s544_UnitDelay_DSTATE =
    BaseEngineController_LS_112_B.s539_Merge;

  /* Update for UnitDelay: '<S510>/Unit Delay' */
  BaseEngineController_LS_112_DWork.s510_UnitDelay_DSTATE = rtb_Merge_mf;

  /* Update for UnitDelay: '<S541>/Unit Delay' */
  BaseEngineController_LS_112_DWork.s541_UnitDelay_DSTATE = rtb_Sum1_es;

  /* Update for UnitDelay: '<S511>/Unit Delay1' */
  BaseEngineController_LS_112_DWork.s511_UnitDelay1_DSTATE =
    BaseEngineController_LS_112_B.s539_Merge;

  /* Update for UnitDelay: '<S511>/Unit Delay2' */
  BaseEngineController_LS_112_DWork.s511_UnitDelay2_DSTATE =
    rtb_LogicalOperator1_b3;

  /* Update for Memory: '<S545>/Memory' */
  BaseEngineController_LS_112_DWork.s545_Memory_PreviousInput = rtb_Logic_e[0];

  /* Update for UnitDelay: '<S511>/Unit Delay3' */
  BaseEngineController_LS_112_DWork.s511_UnitDelay3_DSTATE =
    BaseEngineController_LS_112_B.s539_Merge;

  /* Update for UnitDelay: '<S448>/Unit Delay' */
  BaseEngineController_LS_112_DWork.s448_UnitDelay_DSTATE =
    BaseEngineController_LS_112_B.s486_MultiportSwitch;

  /* Update for UnitDelay: '<S487>/Unit Delay1' */
  BaseEngineController_LS_112_DWork.s487_UnitDelay1_DSTATE = rtb_Merge_b;

  /* Update for UnitDelay: '<S494>/Unit Delay' */
  BaseEngineController_LS_112_DWork.s494_UnitDelay_DSTATE = rtb_Sum1_hy;

  /* Update for UnitDelay: '<S488>/Unit Delay1' */
  BaseEngineController_LS_112_DWork.s488_UnitDelay1_DSTATE = rtb_Merge_om;

  /* Update for UnitDelay: '<S502>/Unit Delay' */
  BaseEngineController_LS_112_DWork.s502_UnitDelay_DSTATE = rtb_Sum1_e5;

  /* Update for UnitDelay: '<S448>/Unit Delay1' */
  BaseEngineController_LS_112_DWork.s448_UnitDelay1_DSTATE =
    BaseEngineController_LS_112_B.s501_Merge;

  /* Update for UnitDelay: '<S564>/Unit Delay1' */
  BaseEngineController_LS_112_DWork.s564_UnitDelay1_DSTATE = rtb_Merge_g;

  /* Update for UnitDelay: '<S633>/Unit Delay' */
  BaseEngineController_LS_112_DWork.s633_UnitDelay_DSTATE = rtb_Sum1_mm;

  /* Update for UnitDelay: '<S559>/Unit Delay1' */
  BaseEngineController_LS_112_DWork.s559_UnitDelay1_DSTATE = rtb_Merge_e4;

  /* Update for UnitDelay: '<S599>/Unit Delay' */
  BaseEngineController_LS_112_DWork.s599_UnitDelay_DSTATE = rtb_Sum1_aw;

  /* Update for UnitDelay: '<S560>/Unit Delay1' */
  BaseEngineController_LS_112_DWork.s560_UnitDelay1_DSTATE = rtb_Merge_j;

  /* Update for UnitDelay: '<S405>/Unit Delay' */
  BaseEngineController_LS_112_DWork.s405_UnitDelay_DSTATE = rtb_Merge_gh;

  /* Update for UnitDelay: '<S508>/Unit Delay' */
  BaseEngineController_LS_112_DWork.s508_UnitDelay_DSTATE = rtb_Merge_ef;

  /* Update for UnitDelay: '<S527>/Unit Delay' */
  BaseEngineController_LS_112_DWork.s527_UnitDelay_DSTATE = rtb_Sum1_ns;

  /* Update for UnitDelay: '<S421>/Unit Delay2' */
  BaseEngineController_LS_112_DWork.s421_UnitDelay2_DSTATE =
    rtb_DesiredLambda_idx;

  /* Update for UnitDelay: '<S424>/Unit Delay' */
  BaseEngineController_LS_112_DWork.s424_UnitDelay_DSTATE =
    BaseEngineController_LS_112_B.s424_Sum1;

  /* Update for UnitDelay: '<S422>/Unit Delay2' */
  BaseEngineController_LS_112_DWork.s422_UnitDelay2_DSTATE = rtb_UnitDelay1_kr;

  /* Update for UnitDelay: '<S427>/Unit Delay' */
  BaseEngineController_LS_112_DWork.s427_UnitDelay_DSTATE =
    BaseEngineController_LS_112_B.s427_Sum1;

  /* Update for UnitDelay: '<S463>/Unit Delay' */
  BaseEngineController_LS_112_DWork.s463_UnitDelay_DSTATE =
    BaseEngineController_LS_112_B.s555_Sum1;

  /* Update for UnitDelay: '<S465>/Unit Delay' */
  BaseEngineController_LS_112_DWork.s465_UnitDelay_DSTATE =
    BaseEngineController_LS_112_B.s465_Sum1;

  /* Update for UnitDelay: '<S607>/Unit Delay' */
  BaseEngineController_LS_112_DWork.s607_UnitDelay_DSTATE = rtb_Sum1_kz;

  /* Update for UnitDelay: '<S419>/Unit Delay' */
  BaseEngineController_LS_112_DWork.s419_UnitDelay_DSTATE =
    rtb_LogicalOperator_d;

  /* Update for UnitDelay: '<S415>/Unit Delay' */
  BaseEngineController_LS_112_DWork.s415_UnitDelay_DSTATE =
    BaseEngineController_LS_112_B.s415_Sum1;

  /* Update for UnitDelay: '<S817>/Unit Delay' */
  BaseEngineController_LS_112_DWork.s817_UnitDelay_DSTATE =
    BaseEngineController_LS_112_B.s817_Sum1;

  /* Update for UnitDelay: '<S815>/Unit Delay' */
  BaseEngineController_LS_112_DWork.s815_UnitDelay_DSTATE = rtb_Sum1_gm;

  /* Update for UnitDelay: '<S821>/Unit Delay2' */
  BaseEngineController_LS_112_DWork.s821_UnitDelay2_DSTATE = rtb_UnitDelay1_k0;

  /* Update for UnitDelay: '<S821>/Unit Delay5' */
  BaseEngineController_LS_112_DWork.s821_UnitDelay5_DSTATE =
    BaseEngineController_LS_112_B.s486_DataValidState;

  /* Update for UnitDelay: '<S827>/Unit Delay' */
  BaseEngineController_LS_112_DWork.s827_UnitDelay_DSTATE = rtb_Sum1_na;

  /* Update for UnitDelay: '<S822>/Unit Delay2' */
  BaseEngineController_LS_112_DWork.s822_UnitDelay2_DSTATE = rtb_UnitDelay1_n5;

  /* Update for UnitDelay: '<S822>/Unit Delay5' */
  BaseEngineController_LS_112_DWork.s822_UnitDelay5_DSTATE =
    BaseEngineController_LS_112_B.s486_DataValidState_d;

  /* Update for UnitDelay: '<S830>/Unit Delay' */
  BaseEngineController_LS_112_DWork.s830_UnitDelay_DSTATE = rtb_Sum1_hc;

  /* Update for UnitDelay: '<S823>/Unit Delay' */
  BaseEngineController_LS_112_DWork.s823_UnitDelay_DSTATE = rtb_Sum1_gj;

  /* Update for UnitDelay: '<S824>/Unit Delay' */
  BaseEngineController_LS_112_DWork.s824_UnitDelay_DSTATE = rtb_Sum1_ju;

  /* Update for UnitDelay: '<S825>/Unit Delay' */
  BaseEngineController_LS_112_DWork.s825_UnitDelay_DSTATE = rtb_Sum1_nj;

  /* Update for UnitDelay: '<S821>/Unit Delay1' */
  BaseEngineController_LS_112_DWork.s821_UnitDelay1_DSTATE = rtb_UnitDelay3_i;

  /* Update for UnitDelay: '<S821>/Unit Delay3' */
  BaseEngineController_LS_112_DWork.s821_UnitDelay3_DSTATE = rtb_UnitDelay4_o;

  /* Update for UnitDelay: '<S821>/Unit Delay4' */
  BaseEngineController_LS_112_DWork.s821_UnitDelay4_DSTATE =
    BaseEngineController_LS_112_B.s486_MultiportSwitch;

  /* Update for UnitDelay: '<S822>/Unit Delay1' */
  BaseEngineController_LS_112_DWork.s822_UnitDelay1_DSTATE = rtb_UnitDelay3_p;

  /* Update for UnitDelay: '<S822>/Unit Delay3' */
  BaseEngineController_LS_112_DWork.s822_UnitDelay3_DSTATE = rtb_UnitDelay4_g;

  /* Update for UnitDelay: '<S822>/Unit Delay4' */
  BaseEngineController_LS_112_DWork.s822_UnitDelay4_DSTATE =
    BaseEngineController_LS_112_B.s501_Merge;

  /* Update for UnitDelay: '<S838>/Unit Delay' */
  BaseEngineController_LS_112_DWork.s838_UnitDelay_DSTATE = rtb_Sum1_a3;

  /* Update for UnitDelay: '<S558>/Unit Delay1' */
  BaseEngineController_LS_112_DWork.s558_UnitDelay1_DSTATE = rtb_Merge_l;

  /* Update for UnitDelay: '<S591>/Unit Delay' */
  BaseEngineController_LS_112_DWork.s591_UnitDelay_DSTATE = rtb_Sum1_nh;

  /* Update for UnitDelay: '<S839>/Unit Delay' */
  BaseEngineController_LS_112_DWork.s839_UnitDelay_DSTATE = rtb_Sum1_o;

  /* Update for UnitDelay: '<S562>/Unit Delay1' */
  BaseEngineController_LS_112_DWork.s562_UnitDelay1_DSTATE = rtb_Merge_en;

  /* Update for UnitDelay: '<S617>/Unit Delay' */
  BaseEngineController_LS_112_DWork.s617_UnitDelay_DSTATE = rtb_Sum1_al;

  /* Update for UnitDelay: '<S840>/Unit Delay' */
  BaseEngineController_LS_112_DWork.s840_UnitDelay_DSTATE = rtb_Sum1_cp;

  /* Update for UnitDelay: '<S842>/Unit Delay' */
  BaseEngineController_LS_112_DWork.s842_UnitDelay_DSTATE = rtb_Sum1_kc;

  /* Update for UnitDelay: '<S846>/Unit Delay' */
  BaseEngineController_LS_112_DWork.s846_UnitDelay_DSTATE = rtb_Sum1_em;

  /* Update for UnitDelay: '<S845>/Unit Delay' */
  BaseEngineController_LS_112_DWork.s845_UnitDelay_DSTATE = rtb_Sum1_et;

  /* Update for S-Function (motohawk_sfun_pwm): '<S792>/motohawk_pwm' */

  /* S-Function Block: LSO9_PWMOutput */
  {
    LSO9_PWMOutput_PWMOutput_Set(rtb_DataTypeConversion2_a,
      rtb_DataTypeConversion3_i, 0, 1);
  }

  /* Update for S-Function (motohawk_sfun_pwm): '<S792>/motohawk_pwm1' */

  /* S-Function Block: LSO10_PWMOutput */
  {
    LSO10_PWMOutput_PWMOutput_Set(rtb_DataTypeConversion2_f,
      rtb_DataTypeConversion3_b, 0, 1);
  }

  /* Update for S-Function (motohawk_sfun_dout): '<S793>/motohawk_dout' */

  /* S-Function Block: DOut11001p0004 */
  {
    DOut11001p0004_DiscreteOutput_Set
      (BaseEngineController_LS_112_B.s885_LogicalOperator);
  }

  /* Update for S-Function (motohawk_sfun_pwm): '<S794>/motohawk_pwm1' */

  /* S-Function Block: H1p_H1m_PWMOutput */
  {
    H1p_H1m_PWMOutput_PWMOutput_Set(rtb_DataTypeConversion3_p,
      rtb_DataTypeConversion4_a, 0, 1);
  }

  /* Update for S-Function (motohawk_sfun_pwm): '<S795>/motohawk_pwm' */

  /* S-Function Block: H2p_PWMOutput */
  {
    H2p_PWMOutput_PWMOutput_Set(rtb_DataTypeConversion2_c,
      rtb_DataTypeConversion3_h, 0, 1);
  }

  /* Update for S-Function (motohawk_sfun_pwm): '<S795>/motohawk_pwm1' */

  /* S-Function Block: H2m_PWMOutput */
  {
    H2m_PWMOutput_PWMOutput_Set(rtb_DataTypeConversion2_n,
      rtb_DataTypeConversion3_m, 0, 1);
  }

  /* Update for S-Function (motohawk_sfun_pwm): '<S797>/motohawk_pwm' */

  /* S-Function Block: LSO8_PWMOutput */
  {
    LSO8_PWMOutput_PWMOutput_Set(rtb_DataTypeConversion2_o,
      rtb_DataTypeConversion3_iu, 0, 1);
  }

  /* Update for UnitDelay: '<S477>/Unit Delay' */
  BaseEngineController_LS_112_DWork.s477_UnitDelay_DSTATE = rtb_Switch_e0;

  /* Update for UnitDelay: '<S563>/Unit Delay1' */
  BaseEngineController_LS_112_DWork.s563_UnitDelay1_DSTATE = rtb_Merge_no;

  /* Update for UnitDelay: '<S625>/Unit Delay' */
  BaseEngineController_LS_112_DWork.s625_UnitDelay_DSTATE = rtb_Sum1_d2;

  /* Update for UnitDelay: '<S421>/Unit Delay1' */
  BaseEngineController_LS_112_DWork.s421_UnitDelay1_DSTATE =
    rtb_DesiredLambda_idx_0;

  /* Update for UnitDelay: '<S421>/Unit Delay3' */
  BaseEngineController_LS_112_DWork.s421_UnitDelay3_DSTATE =
    rtb_DesiredLambda_idx_1;

  /* Update for UnitDelay: '<S421>/Unit Delay4' */
  BaseEngineController_LS_112_DWork.s421_UnitDelay4_DSTATE =
    BaseEngineController_LS_112_B.s555_Sum1;

  /* Update for UnitDelay: '<S422>/Unit Delay1' */
  BaseEngineController_LS_112_DWork.s422_UnitDelay1_DSTATE = rtb_UnitDelay3_g;

  /* Update for UnitDelay: '<S422>/Unit Delay3' */
  BaseEngineController_LS_112_DWork.s422_UnitDelay3_DSTATE = rtb_UnitDelay4_gs;

  /* Update for UnitDelay: '<S422>/Unit Delay4' */
  BaseEngineController_LS_112_DWork.s422_UnitDelay4_DSTATE =
    BaseEngineController_LS_112_B.s598_Merge;

  /* Update for UnitDelay: '<S727>/Unit Delay1' */
  BaseEngineController_LS_112_DWork.s727_UnitDelay1_DSTATE =
    rtb_DataTypeConversion1_j;

  /* Update for UnitDelay: '<S727>/Unit Delay' */
  BaseEngineController_LS_112_DWork.s727_UnitDelay_DSTATE =
    rtb_DataTypeConversion_ep;

  /* Update for UnitDelay: '<S727>/Unit Delay3' */
  BaseEngineController_LS_112_DWork.s727_UnitDelay3_DSTATE = rtb_Product1_mc;

  /* Update for UnitDelay: '<S727>/Unit Delay4' */
  BaseEngineController_LS_112_DWork.s727_UnitDelay4_DSTATE =
    BaseEngineController_LS_112_B.s692_Switch;

  /* Update for UnitDelay: '<S744>/Unit Delay1' */
  BaseEngineController_LS_112_DWork.s744_UnitDelay1_DSTATE = rtb_Switch3_e;

  /* Update for UnitDelay: '<S744>/Unit Delay' */
  BaseEngineController_LS_112_DWork.s744_UnitDelay_DSTATE = rtb_Switch2_c;

  /* Update for UnitDelay: '<S744>/Unit Delay3' */
  BaseEngineController_LS_112_DWork.s744_UnitDelay3_DSTATE = rtb_Switch1_gg;

  /* Update for UnitDelay: '<S744>/Unit Delay4' */
  BaseEngineController_LS_112_DWork.s744_UnitDelay4_DSTATE =
    BaseEngineController_LS_112_B.s693_Switch;

  /* Update for UnitDelay: '<S761>/Unit Delay1' */
  BaseEngineController_LS_112_DWork.s761_UnitDelay1_DSTATE = rtb_Switch_g;

  /* Update for UnitDelay: '<S761>/Unit Delay' */
  BaseEngineController_LS_112_DWork.s761_UnitDelay_DSTATE = rtb_Switch4_c;

  /* Update for UnitDelay: '<S761>/Unit Delay3' */
  BaseEngineController_LS_112_DWork.s761_UnitDelay3_DSTATE =
    rtb_Multiplyby10ifnotyetenabled_p;

  /* Update for UnitDelay: '<S761>/Unit Delay4' */
  BaseEngineController_LS_112_DWork.s761_UnitDelay4_DSTATE =
    BaseEngineController_LS_112_B.s694_Switch;

  /* Update for UnitDelay: '<S778>/Unit Delay1' */
  BaseEngineController_LS_112_DWork.s778_UnitDelay1_DSTATE = rtb_Switch_k;

  /* Update for UnitDelay: '<S778>/Unit Delay' */
  BaseEngineController_LS_112_DWork.s778_UnitDelay_DSTATE =
    rtb_DataTypeConversion_nv;

  /* Update for UnitDelay: '<S778>/Unit Delay3' */
  BaseEngineController_LS_112_DWork.s778_UnitDelay3_DSTATE = rtb_APP2;

  /* Update for UnitDelay: '<S778>/Unit Delay4' */
  BaseEngineController_LS_112_DWork.s778_UnitDelay4_DSTATE =
    BaseEngineController_LS_112_B.s695_Switch;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
